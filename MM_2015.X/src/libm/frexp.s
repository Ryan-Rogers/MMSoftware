;-----------------------------------------------------------------------;
;
; frexp: Double-precision floating-point fraction/exponent function.
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
; frexp
;
;       Break a floating-point number into a fraction and exponent.
;
; Input:
;
;       (w3:w2:w1:w0)   Floating-point number x
;       (w4)            Pointer to returned integer power of 2
;
; Output:
;
;       (w3:w2:w1:w0)   Fraction with magnitude in the interval [1/2,1)
;                       if x in finite and non-zero.
;                       Zero if x is zero.
;                       Infinity if x is infinity.
;                       NaN if x is NaN.
;       (w4)            Address of integer n, a power of 2 such that
;                       x = returned fraction * 2^n, if x is finite
;                       and non-zero.
;                       Address of integer value zero if x is zero,
;                       infinity or NaN.
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Frame layout
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.frexp, code
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
        .global _frexp
        .global _frexpl

_frexp:
_frexpl:
        lnk     #DSIZ                   ; Construct the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;------ Unpack the operand

        mov     w4,w12                  ; (w12) = &n
        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *
        add     w14,#XFLT+4,w0          ; (w0)=&unpacked(x).f
        mov.d   w10,[w0--]              ; Preserve x
        mov.d   w8,[w0--]               ; *
        rcall   __dunpack               ; (w0) = operand type

        cp      w0,#FINITETYPE          ; x finite, non-zero ?
        mov.d   w8,w0                   ; (w3:w0) = x
        mov.d   w10,w2                  ; *
        mov     #0,w4                   ; (w4) = n
        bra     nz,exit                 ; x is not finite, non-zero ...

;------ x is finite, non-zero

        mov     [w14+XEXP],w4           ; (w4) = biased n-1
        sub     #DBL_BIAS-1,w4          ; (w4) = n
        mov     [w14+XSIG0],w0          ; (w3:w0) = f.sig
        mov     [w14+XSIG1],w1          ; *
        mov     [w14+XSIG2],w2          ; *
        mov     [w14+XSIG3],w3          ; *
        and     #0x000F,w3              ; Isolate f.frac
        mov     #(DBL_BIAS-1)<<4,w5     ; (w5) = f.exp
        ior     w3,w5,w3                ; Insert f.exp
        btsc    w11,#15                 ; x < 0 ?
        bset    w3,#15                  ; Yes ... f.sign = 1
exit:
        mov     w4,[w12]                ; Store n

        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;


.include "null_signature.s"
