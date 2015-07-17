;-----------------------------------------------------------------------;
; sinhf.s: Floating-point hyperbolic sine elementary function.
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

;-----------------------------------------------------------------------;
;
; sinhf
;
;       Single-precision hyperbolic sine elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number hyperbolic sine(x)
;
; Description:
;
;       Computes the hyperbolic sine of the argument x.
;       
;-----------------------------------------------------------------------;

;
; EPS: sinh(x) = x for |x| < EPS
;       EPS = 2^-12
;
	.ifdef ffunction
	.section .libm.sinh, code
	.endif
        LCONST  EPS,    0x39800000 

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;-----------------------------------------------------------------------;
;
        LCONST  P0,     0xC0E469F0
        LCONST  P1,     0xBE42E6C2
        LCONST  Q0,     0xC22B4F93

;-----------------------------------------------------------------------;

        .global _sinhf

_sinhf:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; *

;------ Extract significand & biased exponent

        mov.d   w0,w8           ; (w9:w8)=x
        rcall   __funpack       ; (w4)   =x(Type)
                                ; (w5)   =x(Biased exponent)
                                ; (w1:w0)=x(Significand)
        mov.d   w8,w0           ; (w1:w0)=x

;------ Check for Infinities, NaNs and Zeros

        cp      w4,#FINITETYPE  ; Finite, non-zero ?
        bra     nz,return0      ; No ... return(x) ...

;-----------------------------------------------------------------------;
;       x is finite, non-zero.
;-----------------------------------------------------------------------;
finitenz:

        bclr    w1,#15          ; (w1:w0) = |x|
        mov.d   w0,w10          ; (w11:w10) = y = |x|

;------ Check for y > 1

        mov     #ONEHI,w3       ; (w3:w2) = +1.0
        mov     #ONELO,w2       ; *
        rcall   ___lesf2        ; y > 1 ?
        bra     le,rational     ; No ... use rational approximation ...

;-----------------------------------------------------------------------;
;       y > 1: use exponential function
;-----------------------------------------------------------------------;

        mov     #0x8000,w8      ; (w8) = flag = sinh requested
        rcall   __sinhcoshf     ; (w1:w0) = |result|
        btsc    w9,#15          ; x < 0 ?
        btg     w1,#15          ; Yes ... result = -result
        bra     return0         ; Done

;-----------------------------------------------------------------------;
;       y <= 1: use rational approximation
;-----------------------------------------------------------------------;
rational:

;------ Ensure that y >= EPS

        mov.d   w10,w0          ; y
        mov     #EPSLO,w2       ; sinh(y) = y for y < EPS
        mov     #EPSHI,w3       ; *
        rcall   ___ltsf2        ; compare y ? eps
        mov.d   w8,w0           ; (w1:w0) = x
        bra     lt,return0      ; f < eps ...

;------ g = x * x

        mov.d   w8,w2           ; (w3:w2) = x
        rcall   ___mulsf3       ; (w1:w0) = x * x
        mov.d   w0,w10          ; (w11:w10) = g = x * x

;------ Q = g + q0

        mov     #Q0LO,w2        ; (w3:w2) = q0
        mov     #Q0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0) = g + q0
        mov.d   w0,[w15++]      ; Save Q = g + q0
        
;------ P = p1 * g + p0

        mov     #P1LO,w2        ; (w3:w2) = p1
        mov     #P1HI,w3        ; *
        mov.d   w10,w0          ; (w1:w0) = g
        rcall   ___mulsf3       ; (w1:w0) = p1 * g

        mov     #P0LO,w2        ; (w3:w2) = p0
        mov     #P0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0) = p1 * g + p0

;------ R = g * P / Q

        mov.d   [--w15],w2      ; (w3:w2) = Q
        rcall   ___divsf3       ; (w1:w0) = P/Q
        mov.d   w10,w2          ; (w3:w2) = g
        rcall   ___mulsf3       ; (w1:w0) = g * P / Q

;------ result = x + x * R

        mov.d   w8,w2           ; (w3:w2) = x
        rcall   ___mulsf3       ; (w1:w0) = x * R
        mov.d   w8,w2           ; (w3:w2) = x
        rcall   ___addsf3       ; (w1:w0) = x + x * R

;-----------------------------------------------------------------------;
return0:
        mov.d   [--w15],w10     ; Recover scratch
        mov.d   [--w15],w8      ; *
        return
;-----------------------------------------------------------------------;

.include "null_signature.s"
