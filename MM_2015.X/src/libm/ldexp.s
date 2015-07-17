;-----------------------------------------------------------------------;
;
; ldexp: Double-precision floating-point load exponent function.
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
; ldexp
;
;       Load exponent function.
;
; Input:
;
;       (w3:w2:w1:w0)   Floating-point number x
;       (w4)            Integer power of two n
;
; Output:
;
;       (w3:w2:w1:w0)   x scaled by 2^n
;
;       errno           Set to ERANGE on overflow or underflow.
;
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Frame layout
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.ldexp, code
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
	.ifdef ffunction
	.section .libm.ldexp, code
	.endif
        .global _ldexp
        .global _ldexpl

_ldexp:
_ldexpl:
        lnk     #DSIZ                   ; Construct the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;------ Unpack the operand

        mov     w4,w12                  ; (w12) = n
        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *
        add     w14,#XFLT+4,w0          ; (w0)=&unpacked(x).f
        mov.d   w10,[w0--]              ; Preserve x
        mov.d   w8,[w0--]               ; *
        rcall   __dunpack               ; (w0) = operand type

;------ Check for Zeros, Infinities and NaNs

        cp      w0,#FINITETYPE          ; Finite, non-zero ?
        mov.d   w8,w0                   ; (w3:w0) = x
        mov.d   w10,w2                  ; *
        bra     nz,exit                 ; No ... return x ...

;-----------------------------------------------------------------------;
;       Argument is finite and non-zero
;-----------------------------------------------------------------------;

        mov     [w14+XSIG0],w0          ; (w3:w0) = f.sig
        mov     [w14+XSIG1],w1          ; *
        mov     [w14+XSIG2],w2          ; *
        mov     [w14+XSIG3],w3          ; *

        mov     [w14+XEXP],w5           ; (w5) = biased x.exp
        add     w12,w5,w5               ; (w5) = Scaled exponent

;------ Check for overflow

        mov     #DBL_BIAS+DBL_EMAX,w4   ; Max exponent
        cp      w5,w4                   ; Exponent too large ?
        bra     gt,overflow             ; Yes ...

;------ Check for underflow

        mov     #DBL_BIAS+DBL_SMIN,w4   ; Min exponent
        cp      w5,w4                   ; Exponent too small ?
        bra     ge,nounderflow          ; No ...

;------ Underflow: return +/- zero

        mov     #0,w5                   ; Exponent
        bra     packupandgozero         ; Leave

;------ Overflow: return +/- Infinity

overflow:
        mov     #0x07FF,w5              ; Exponent
packupandgozero:
        mov     #_ERANGE,w0             ; Range error
        mov     w0,_errno               ; *
        mul.uu  w0,#0,w0                ; fraction = 0
        mul.uu  w2,#0,w2                ; *
        bra     packupandgo             ; Done

;------ Check if scaling is needed

nounderflow:
        mov     #DBL_BIAS+DBL_EMIN,w4   ; Min exponent
        sub     w5,w4,w4                ; Subnormal ?
        bra     ge,packupandgo          ; No ...

;------ Subnormal scaling

reduce:
        lsr     w3,w3                   ; fraction >>= 1
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *
        rrc     w0,w0                   ; *
        inc     w4,w4                   ; Exponent in range ?
        bra     nz,reduce               ; No ... Keep shifting ...
        mov     #0,w5                   ; Exponent

;------ Pack the result

packupandgo:
        sl      w5,#4,w5                ; align the exponent
        and     #0x000F,w3              ; Isolate fraction
        ior     w3,w5,w3                ; (w3:w0)=exponent & fraction
        btsc    w11,#15                 ; Input negative ?
        bset    w3,#15                  ; Yes ... make output negative
exit:
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;


.include "null_signature.s"
