;-----------------------------------------------------------------------;
; tanhf.s: Floating-point hyperbolic tangent elementary function.
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
; tanhf
;
;       Single-precision hyperbolic tangent elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number hyperbolic tangent(x)
;
; Description:
;
;       Computes the hyperbolic tangent of the argument x.
;       
;-----------------------------------------------------------------------;

;
; XBIG: Value such that tanh(|x|)=1 for |x| > XBIG.
;       XBIG = 13 ln(2)
;
	.ifdef ffunction
	.section .libm.tanhf, code
	.endif

        LCONST  XBIG,   0x41102CB3

;
; C0: Value such that for x > C0, tanh(x) can be approximated from
;       its definition.
;       C0 = ln(3)/2
;
        LCONST  C0,     0x3F0C9F54

;
; EPS: tanh(x) = x for |x| < EPS
;       EPS = 2^-12
;
        LCONST  EPS,    0x39800000 

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;-----------------------------------------------------------------------;

        LCONST  P0,     0xBF52E2C6
        LCONST  P1,     0xBB7B11B2
        LCONST  Q0,     0x401E2A1A

;-----------------------------------------------------------------------;

        .global _tanhf

_tanhf:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; *
        mov.w   w12,[w15++]     ; *

;------ Extract significand & biased exponent

        mov.d   w0,w8           ; (w9:w8)=x
        rcall   __funpack       ; (w4)   =x(Type)
                                ; (w5)   =x(Biased exponent)
                                ; (w1:w0)=x(Significand)
        mov.d   w8,w0           ; (w1:w0)=x
        mov.w   w9,w12          ; (w12) = sign(x)
        bclr    w9,#15          ; (w9:w8) = f = |x|

;------ Check for Zeros, Infinities and NaNs

        cp      w4,#FINITETYPE  ; Finite, non-zero ?
        bra     z,finite        ; Yes ...

;------ Zero, Infinity or NaN

        bra     ltu,return0     ; Zero ... return(x) ...
        cp      w4,#INFTYPE     ; Infinity or NaN ?
        bra     gtu,return0     ; NaN ... return(x) ...

;------ Infinities: result is +/- 1.0

returnone:
        mov     #ONEHI,w1       ; Result is Quiet NaN
        mov     #ONELO,w0       ; *
        bra     signresult      ; Set sign(result) = sign(x)

;-----------------------------------------------------------------------;
;       x is finite, non-zero.
;-----------------------------------------------------------------------;

finite:

;------ Ensure that f <= XBIG

        mov     #XBIGLO,w2      ; tanh(f) = 1 for f > XBIG
        mov     #XBIGHI,w3      ; *
        mov.d   w8,w0           ; f
        rcall   ___gtsf2        ; compare f ? xbig
        bra     gt,returnone    ; f > xbig ... result = 1

;------ See if rational function is required (for small x)

        mov.w   #C0LO,w2        ; ln(3)/2
        mov.w   #C0HI,w3        ; *
        mov.d   w8,w0           ; f
        rcall   ___gtsf2        ; compare f ? ln(3)/2
        mov.d   w8,w0           ; f
        bra     gt,direct       ; f > ln(3)/2 ... use direct approx

;------ See if x is tiny

        mov.w   #EPSLO,w2       ; tanh(f) = f for f < eps
        mov.w   #EPSHI,w3       ; *
        rcall   ___ltsf2        ; compare f ? eps
        mov.d   w8,w0           ; f
        bra     lt,signresult   ; f < eps ... result = f

;-----------------------------------------------------------------------;
;       Rational function approximation
;-----------------------------------------------------------------------;

        mov.d   w8,w2           ; f
        rcall   ___mulsf3       ; (w1:w0) = f * f
        mov.d   w0,w10          ; (w11:w10) = g = f * f

;------ Q = g + q0

        mov.w   #Q0LO,w2        ; (w3:w2) = Q0
        mov.w   #Q0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0) = g + q0
        mov.d   w0,[w15++]      ; Preserve Q = q + q0

;------ P = p1 * g + p0

        mov.d   w10,w0          ; (w1:w0) = g
        mov.w   #P1LO,w2        ; (w3:w2) = P1
        mov.w   #P1HI,w3        ; *
        rcall   ___mulsf3       ; (w1:w0) = p1 * g
        mov.w   #P0LO,w2        ; (w3:w2) = P0
        mov.w   #P0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0) = p1 * g + p0

;------ R = g * P / Q

        mov.d   w10,w2          ; (w3:w2) = g
        rcall   ___mulsf3       ; (w1:w0) = g * P
        mov.d   [--w15],w2      ; (w3:w2) = Q
        rcall   ___divsf3       ; (w1:w0) = g * P / Q

;------ Result = f + f * R

        mov.d   w8,w2           ; (w1:w0) = f
        rcall   ___mulsf3       ; (w1:w0) = f * R
        mov.d   w8,w2           ; (w1:w0) = f
        rcall   ___addsf3       ; (w1:w0) = f + f * R
        bra     signresult      ; Sign the result & return ...

;-----------------------------------------------------------------------;
;       Direct exaluation from tanh definition
;-----------------------------------------------------------------------;

direct:

;------ result = 0.5 - 1 / (1+expf(f+f))

        mov.d   w8,w2           ; (w3:w2) = f
        rcall   ___addsf3       ; (w1:w0) = f + f
        rcall   _expf           ; (w1:w0) = expf(f+f)
        mov.w   #ONELO,w2       ; (w3:w2) = 1
        mov.w   #ONEHI,w3       ; *
        rcall   ___addsf3       ; (w1:w0) = 1+expf(f+f)
        mov.d   w0,w2           ; (w3:w2) = 1+expf(f+f)
        mov.w   #NEGONELO,w0    ; (w1:w0) = -1
        mov.w   #NEGONEHI,w1    ; *
        rcall   ___divsf3       ; (w1:w0) = -1/(1+expf(f+f))
        mov.w   #HALFLO,w2      ; (w3:w2) = 0.5
        mov.w   #HALFHI,w3      ; *
        rcall   ___addsf3       ; (w1:w0) = 0.5-1/(1+expf(f+f))

;------ result = result + result

        mov.d   w0,w2           ; result
        rcall   ___addsf3       ; result + result

;-----------------------------------------------------------------------;
;       Sign the result and return
;-----------------------------------------------------------------------;

signresult:
        btsc    w12,#15         ; x < 0 ?
        btg     w1,#15          ; Yes ... result = -result
return0:
        mov.w   [--w15],w12     ; Recover scratch
        mov.d   [--w15],w10     ; *
        mov.d   [--w15],w8      ; *
        return
;-----------------------------------------------------------------------;

.include "null_signature.s"
