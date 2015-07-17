;-----------------------------------------------------------------------;
; sqrt.s: Floating-point square-root elementary function.
;
; This file is part of the compact math library for the dsPIC30.
; (c) Microchip Technology. 2003.
;
;-----------------------------------------------------------------------;
        .include "libm.inc"
	.ifndef ffunction
	.section .libm,code
	.endif
;-----------------------------------------------------------------------;
;
; sqrt
;
;       Double-precision square-root elementary function.
;
; Input:
;
;       (w3:w2:w1:w0) Floating-point number x
;
; Output:
;
;       (w3:w2:w1:w0) Floating-point number sqrt(x)
;
; Description:
;
;       Computes the square-root of the argument x.
;
;       If the argument is NaN, a quite NaN is returned.
;       If the argument is less than zero, a quite NaN is returned,
;       and errno is set to EDOM.
;
;       The following special cases are handled:
;               sqrt(+0) = +0
;               sqrt(-0) = -0
;               sqrt(+Infinity) = +Infinity
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Frame layout
;-----------------------------------------------------------------------;

	.ifdef ffunction
	.section .libm.sqrt, code
	.endif

        .equ    XTYP,DTYP               ; Frame offset for typ(x)
        .equ    XEXP,DEXP               ; Frame offset for exp(x)
        .equ    XFLT,DFLT               ; Frame offset for flt(x)
        .equ    XSIG,DSIG               ; Frame offset for sig(x)
        .equ    XSIG0,XSIG+0            ; *
        .equ    XSIG1,XSIG+2            ; *
        .equ    XSIG2,XSIG+4            ; *
        .equ    XSIG3,XSIG+6            ; *

        .equ    RSAV,2*6                ; Register save size

;-----------------------------------------------------------------------;
        .global _sqrt
        .global _sqrtl

;-----------------------------------------------------------------------;

_sqrt:
_sqrtl:
        lnk     #DSIZ                   ; Construct the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;------ Unpack the operand

        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *
        add     w14,#XFLT+4,w0          ; (w0)=&unpacked(x).f
        mov.d   w10,[w0--]              ; Preserve x
        mov.d   w8,[w0--]               ; *
        rcall   __dunpack               ; (w0) = operand type

;------ Check for NaNs

        btst    w0,#NANBIT              ; isNaN(x) ?
        bra     nz,xisNaN               ; Yes ...

;------ Check for Zeros

        cp      w0,#ZEROTYPE            ; Zero ?
        bra     z,returnx               ; Yes ... sqrt(+/-0) = +/-0

;------ Check for negative arguments

        btst    w11,#15                 ; x < 0 ?
        bra     nz,domainerr            ; Yes ...

;------ Check for +Infinity

        cp      w0,#INFTYPE             ; +Infinity ?
        bra     z,returnx               ; Yes ... sqrt(+infinity) = +Infinity

;-----------------------------------------------------------------------;
;       x is finite and > 0
;-----------------------------------------------------------------------;

;------ Load the significand

        add     w14,#XSIG,w6            ; &x.sig

        mov     [w14+XEXP],w0           ; (w0) = exp(a)
        sub     #DBL_BIAS,w0            ; (w0) = exponent n

        mov.d   [w6++],w4               ; Load x.sig
        mov.d   [w6],w6                 ; *

;------ Calculate result exponent

        btst    w0,#0                   ; isEven(n) ?
        bra     z,ncanonical            ; n is even ...

        add     w4,w4,w4                ; (w7:w4) = r <<= 1
        addc    w5,w5,w5                ; *
        addc    w6,w6,w6                ; *
        addc    w7,w7,w7                ; *

ncanonical:
        mov     w0,[w14+XEXP]           ; Preserve n

;------ Calculate the root

        mov     w14,[w15++]             ; Preserve frame pointer

        mul.uu  w0,#0,w0                ; (w3:w0) = q = 0
        mul.uu  w2,#0,w2                ; *
        mov.w   #5,w12                  ; (w12) = bit #
        mov.w   #WREG11,w13             ; (w13) = &t
        mov.w   #WREG3,w14              ; (w14) = &q
        bra     qloop                   ; Begin ...
qnext16:
        dec2    w13,w13                 ; (w13) = &t--
        mov     #15,w12                 ; (w12) = bit #
qloop:
        add     w4,w4,w4                ; (w7:w4) = r = r * 2
        addc    w5,w5,w5                ; *
        addc    w6,w6,w6                ; *
        addc    w7,w7,w7                ; *
        
        add     w0,w0,w8                ; (w11:w8) = t = 2 * q
        addc    w1,w1,w9                ; *
        addc    w2,w2,w10               ; *
        addc    w3,w3,w11               ; *
        cp      w12,#0                  ; Set <C>
        bsw.c   [w13],w12               ; (w11:w8) = t = 2 * q + b
        sub     w4,w8,w8                ; (w11:w8) = t = r - (2 * q + b)
        subb    w5,w9,w9                ; *
        subb    w6,w10,w10              ; *
        subb    w7,w11,w11              ; *
        bra     nc,qnext                ; Branch if t < 0 ...

        bsw.c   [w14],w12               ; (w7:w4) = q |= b
        mov.d   w8,w4                   ; (w1:w0) = r = t
        mov.d   w10,w6                  ; *
qnext:
        dec     w12,w12                 ; (w12) = bitno--
        bra     nn,qloop                ; Not done yet ... keep going ...
        dec2    w14,w14                 ; (w14) = &q--
        bra     nn,qnext16              ; Not done yet ... keep going ...

        mov     [--w15],w14             ; Recover frame pointer

;------ Calculate round and sticky

        and     w0,#1,w4                ; (w4) = round = q(old) & 1
        mov     w4,w5                   ; (w5) = sticky = round
        lsr     w3,w3                   ; (w3:w0) = q >>= 1
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *
        rrc     w0,w0                   ; *

;------ Final rounding

        mov     [w14+XEXP],w6           ; (w6) = n
        asr     w6,#1,w6                ; (w6) = n /= 2
        add     #DBL_BIAS,w6            ; (w6) = final biased exponent

;       (w3:w0)= significand
;       (w4)   = round
;       (w5)   = sticky
;       (w6)   = biased exponent

        rcall   __dpack                 ; Round and pack
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;

;------ x is NaN

xisNaN:
        bset    w11,#DBL_QNAN%16        ; Force quiet NaN for result
returnx:
        mov.d   w8,w0                   ; (w3:w0) = x
        mov.d   w10,w2                  ; *
        bra     __dunpack2exit          ; Destroy frame and return ...

;------ Domain error

domainerr:
        mov     #_EDOM,w2               ; Domain error
        mov     w2,_errno               ; *
        bra     __dreturnNaN            ; Result is NaN

;-----------------------------------------------------------------------;

.include "null_signature.s"
