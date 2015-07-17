;-----------------------------------------------------------------------;
; atanf.s: Floating-point arctangent elementary function.
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
; atanf
;
;       Single-precision arctangent elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number arctan(x)
;
; Description:
;
;       Computes the arctangent of the argument x.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;
; EPS: atan(x) = x for |x| < EPS
;       EPS = 2^-12
;
	
	.ifdef ffunction
	.section .libm.atanf, code
	.endif

        LCONST  EPS,    0x39800000 

;-----------------------------------------------------------------------;
        LCONST  SQRT3,          0x3FDDB3D7      ; Sqrt[3]
        LCONST  SQRT3m1,        0x3F3B67AF      ; Sqrt[3] - 1
        LCONST  TWOmSQRT3,      0x3E8930A3      ; 2 - Sqrt[3]
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;-----------------------------------------------------------------------;
;
        LCONST  P0,     0xBEF110F6
        LCONST  P1,     0xBD508691
        LCONST  Q0,     0x3FB4CCD3

;-----------------------------------------------------------------------;
        .global _atanf

_atanf:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; *
        mov.d   w12,[w15++]     ; *

;------ Extract significand & biased exponent

        mov.d   w0,w8           ; (w9:w8)=x
        rcall   __funpack       ; (w4)   =x(Type)
                                ; (w5)   =x(Biased exponent)
                                ; (w1:w0)=x(Significand)
        mov.d   w8,w0           ; (w1:w0)=x
        mov.w   w9,w13          ; (w13) = sign(x)

;------ Check for Infinities and NaNs

        cp      w4,#INFTYPE     ; Infinity or NaN ?
        bra     ltu,finite      ; No ...

;------ Infinity or NaN

        bra     z,isInf         ; Infinity ...

;------ NaNs

        bset    w1,#6           ; Force quiet NaN for result
domainerr:
        mov     #_EDOM,w2       ; Domain error
        mov     w2,_errno       ; *
        bra     return0         ; Error return

;------ Infinities

isInf:
        mov     #PIOVER2HI,w1   ; Result is Pi/2
        mov     #PIOVER2LO,w0   ; *
        bra     signresult      ; Return +/- Pi/2

;-----------------------------------------------------------------------;
;       x is finite and non-zero.
;-----------------------------------------------------------------------;
finite:
        clr     w12             ; (w12) = translation flag n = 0
        bclr    w9,#15          ; (w9:w8) = f = |x|

;-----------------------------------------------------------------------;
;       Argument reduction
;-----------------------------------------------------------------------;

;------ Test for f > 1
        
        mov     #ONEHI,w3       ; (w3:w2) = 1.0
        mov     #ONELO,w2       ; *
        mov.d   w8,w0           ; (w1:w0) = f
        rcall   ___lesf2        ; f > 1.0 ?
        bra     le,reduce1      ; No ...

;------ f > 1.0: Set f = 1/f

        mov     #ONEHI,w1       ; (w1:w0) = 1.0
        mov     #ONELO,w0       ; *
        mov.d   w8,w2           ; (w3:w2) = f
        rcall   ___divsf3       ; (w1:w0) = 1.0 / f
        mov.d   w0,w8           ; (w9:w8) = f = 1.0/f
        mov     #2,w12          ; (w12) = translation flag n = 2

;------ Test for f > 2-Sqrt[3]

reduce1:
        mov.d   w8,w0           ; (w1:w0) = f
        mov     #TWOmSQRT3HI,w3 ; (w3:w2) = 2 - Sqrt[3]
        mov     #TWOmSQRT3LO,w2 ; *
        rcall   ___lesf2        ; f > 2 - Sqrt[3] ?
        bra     le,reduced      ; No ...

;------ f > 2 - Sqrt[3]

;------ f = (((Sqrt[3]-1) * f - 1.0) + f) / (Sqrt[3] + f)

        mov.d   w8,w2           ; (w3:w2) = f
        mov     #SQRT3HI,w1     ; (w1:w0) = Sqrt[3]
        mov     #SQRT3LO,w0     ; *
        rcall   ___addsf3       ; (w1:w0) = Sqrt[3] + f
        mov.d   w0,w10          ; (w11:w10) = Sqrt[3] + f

        mov     #SQRT3m1HI,w3   ; (w3:w2) = Sqrt[3]-1
        mov     #SQRT3m1LO,w2   ; *
        mov.d   w8,w0           ; (w1:w0) = f
        rcall   ___mulsf3       ; (w1:w0) = (Sqrt[3]-1 * f)
        mov     #ONEHI,w3       ; (w3:w2) = 1.0
        mov     #ONELO,w2       ; *
        rcall   ___subsf3       ; (w1:w0) -= 1.0
        mov.d   w8,w2           ; (w3:w2) = f
        rcall   ___addsf3       ; (w1:w0) += f

        mov.d   w10,w2          ; (w3:w2) = Sqrt[3] + f
        rcall   ___divsf3       ; (w1:w0) = (((Sqrt[3]-1)*f-1)+f)/(Sqrt[3]+f)
        mov.d   w0,w8           ; (w9:w8) = reduced f

        inc     w12,w12         ; (w12) = translation flag n = n + 1

;-----------------------------------------------------------------------;
;       Argument reduction complete
;-----------------------------------------------------------------------;
reduced:

;------ Check for |f| < eps

        mov.d   w8,w0           ; (w1:w0) = f
        bclr    w1,#15          ; (w1:w0) = |f|
        mov     #EPSLO,w2       ; atan(f) = f for |f| < EPS
        mov     #EPSHI,w3       ; *
        rcall   ___ltsf2        ; compare |f| ? eps
        mov.d   w8,w0           ; (w1:w0) = f
        bra     lt,translate    ; f < eps ...

;-----------------------------------------------------------------------;
;       Rational approximation
;-----------------------------------------------------------------------;

;------ g = f * f

        mov.d   w8,w2           ; (w3:w2) = f
        rcall   ___mulsf3       ; (w1:w0) = f * f
        mov.d   w0,w10          ; (w11:w10) = g = f * f

;------ Q = g + q0

        mov     #Q0LO,w2        ; (w3:w2) = q0
        mov     #Q0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0) = g + q0
        mov.d   w0,[w15++]      ; Preserve Q = g + q0

;------ P = p1 * g + p0

        mov     #P1LO,w2        ; (w3:w2) = p1
        mov     #P1HI,w3        ; *
        mov.d   w10,w0          ; (w1:w0) = g
        rcall   ___mulsf3       ; (w1:w0) = p1 * g
        mov     #P0LO,w2        ; (w3:w2) = p0
        mov     #P0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0) = P = p1 * g + p0

;------ R = g * P / Q

        mov.d   w10,w2          ; (w3:w2) = g
        rcall   ___mulsf3       ; (w1:w0) = g * P
        mov.d   [--w15],w2      ; (w3:w2) = Q
        rcall   ___divsf3       ; (w1:w0) = R = g * P / Q
        
;------ result = f + f * R

        mov.d   w8,w2           ; (w3:w2) = f
        rcall   ___mulsf3       ; (w1:w0) = f * R
        mov.d   w8,w2           ; (w3:w2) = f
        rcall   ___addsf3       ; (w1:w0) = f + f * R

;-----------------------------------------------------------------------;
;       Final translations
;-----------------------------------------------------------------------;
translate:

;------ n = 0, 1, 2, 3

        cp0     w12             ; n == 0 ?
        bra     z,signresult    ; Yes ... no translation required ...

;------ n = 1, 2, 3

        btsc    w12,#1          ; Skip if n < 2
        btg     w1,#15          ; result = -result

        mov     #PIOVER2LO,w2   ; (w3:w2) = Pi/2
        mov     #PIOVER2HI,w3   ; *
        cp      w12,#2          ; n == 2 ?
        bra     z,dotranslate   ; Yes ...

;------ n = 1, 3

        mov     #PIOVER6LO,w2   ; (w3:w2) = Pi/6
        mov     #PIOVER6HI,w3   ; *
        btsc    w12,#1          ; Skip if n == 1
        mov     #PIOVER3HI,w3   ; (w3:w2) = Pi/3

dotranslate:
        rcall   ___addsf3       ; (w1:w0) = translated result

signresult:
        btsc    w13,#15         ; x < 0 ?
        btg     w1,#15          ; Yes ... result = -result

;-----------------------------------------------------------------------;
return0:
        mov.d   [--w15],w12     ; Recover scratch
        mov.d   [--w15],w10     ; *
        mov.d   [--w15],w8      ; *
        return
;-----------------------------------------------------------------------;

.include "null_signature.s"
