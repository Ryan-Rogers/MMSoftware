;-----------------------------------------------------------------------;
; truncdfsf.s: Convert double-precision to single-precision
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
; __truncdfsf2: Convert double-precision to single-precision
;
; Description:
;
;       Convert a double-precision, floating-point number to a
;       single-precision, floating-pint number.
;
; Input:
;
;       (w3:w2:w1:w0) Floating-point number to be converted
;
; Output:
;
;       (w1:w0) Single-precision representation of input value.
;
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Frame layout
;-----------------------------------------------------------------------;

	.ifdef ffunction
	.section .libm.truncdfsf2,code
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

        .global ___truncdfsf2

___truncdfsf2:
        lnk     #DSIZ                   ; Construct the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;------ Unpack the argument

        mov.d   w0,w10                  ; (w13:w10) = x
        mov.d   w2,w12                  ; *
        add     w14,#XFLT+4,w0          ; (w0)=&unpacked(x).f
        mov.d   w12,[w0--]              ; Preserve x
        mov.d   w10,[w0--]              ; *
        rcall   __dunpack               ; (w0) = operand type

        cp      w0,#INFTYPE             ; isInf(x) ?
        bra     z,xIsInf                ; isInf(x) ... return(Inf)
        bra     gtu,xIsNaN              ; isNaN(x) ... return(NaN)
        cp      w0,#ZEROTYPE            ; isZero(x) ?
        bra     z,xIsZero               ; isZero(x) ... return(Zero)

;-----------------------------------------------------------------------;
;       x is finite, non-zero
;-----------------------------------------------------------------------;

        mov     [w14+XSIG0],w8          ; (w9:w6) = y.sig
        mov     [w14+XSIG1],w9          ; *
        mov     [w14+XSIG2],w6          ; *
        mov     [w14+XSIG3],w7          ; *
        mul.uu  w2,#0,w2                ; (w2) = round
                                        ; (w3) = sticky
        mov     [w14+XEXP],w11          ; (w11)= x.exp
        sub     #DBL_BIAS-FLT_BIAS,w11  ; (w11)= y.exp

;------ align the binary point

        mov     #DBL_PREC-FLT_PREC,w5   ; (w5) = shift count

align:
        ior     w3,w2,w3                ; (w3) = (sticky |= round)
        and     w8,#1,w2                ; (w2) = (round = y.sig & 1)
        lsr     w7,w7                   ; (w9:w6) = (y.sig >>= 1)
        rrc     w6,w6                   ; *
        rrc     w9,w9                   ; *
        rrc     w8,w8                   ; *
        dec     w5,w5                   ; Binary point aligned ?
        bra     nz,align                ; No yet ...

;------ Final rounding

;       (w2)   = round
;       (w3)   = sticky
;       (w9:w8)= y.sig
;       (w11)  = y.exp

        rcall   __fpack                 ; Round and pack

signoff:
        btsc    w13,#15                 ; Result negative ?
        bset    w1,#15                  ; Yes ... set sign
exit:
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;

;------ x is NaN

xIsNaN:
        mov     #0x7FFF,w1              ; Load QNaN
        mov     #0xFFFF,w0              ; *
        bra     __dunpack2exit          ; Destroy frame and return ...

;------ x is infinity

xIsInf:
        mov     #0x7F80,w1              ; Load +Inf
        mov     #0x0000,w0              ; *
        bra     signoff                 ; Set sign & exit

;------ x is zero

xIsZero:
        mul.uu  w0,#0,w0                ; Load zero
        bra     signoff                 ; Set sign & exit

;-----------------------------------------------------------------------;


.include "null_signature.s"
