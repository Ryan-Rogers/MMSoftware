;-----------------------------------------------------------------------;
; atan.s: Floating-point arctangent elementary function.
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
; atan
;
;       Double-precision arctangent elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;
; Output:
;
;       (w3:w0) Floating-point number arctan(x)
;
; Description:
;
;       Computes the arctangent of the argument x.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;
; EPS: atan(x) = x for |x| < EPS
;       EPS = 2^(-53/2)
;
	.ifdef ffunction
	.section .libm.atan, code
	.endif
        .equ    DP_EPS3,0x3E46
        .equ    DP_EPS2,0xA09E
        .equ    DP_EPS1,0x667F
        .equ    DP_EPS0,0x3BCD

;-----------------------------------------------------------------------;

        .equ    DP_SQRT33,0x3FFB        ; Sqrt[3]
        .equ    DP_SQRT32,0xB67A
        .equ    DP_SQRT31,0xE858
        .equ    DP_SQRT30,0x4CAA

        .equ    DP_SQRT3m13,0x3FE7      ; Sqrt[3]-1
        .equ    DP_SQRT3m12,0x6CF5
        .equ    DP_SQRT3m11,0xD0B0
        .equ    DP_SQRT3m10,0x9955


        .equ    DP_TWOmSQRT33,0x3FD1    ; 2-Sqrt[3]
        .equ    DP_TWOmSQRT32,0x2614
        .equ    DP_TWOmSQRT31,0x5E9E
        .equ    DP_TWOmSQRT30,0xCD56

;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;-----------------------------------------------------------------------;
;
        .equ    DP_P03,0xC02B
        .equ    DP_P02,0x60A6
        .equ    DP_P01,0x5106
        .equ    DP_P00,0x1CE2

        .equ    DP_P13,0xC034
        .equ    DP_P12,0x817F
        .equ    DP_P11,0xB9E2
        .equ    DP_P10,0xBCCB

        .equ    DP_P23,0xC020
        .equ    DP_P22,0xFD3F
        .equ    DP_P21,0x5C8D
        .equ    DP_P20,0x6A63

        .equ    DP_P33,0xBFEA
        .equ    DP_P32,0xCD7A
        .equ    DP_P31,0xD9B1
        .equ    DP_P30,0x87BD

        .equ    DP_P33,0xBFEA
        .equ    DP_P32,0xCD7A
        .equ    DP_P31,0xD9B1
        .equ    DP_P30,0x87BD

        .equ    DP_Q03,0x4044
        .equ    DP_Q02,0x887C
        .equ    DP_Q01,0xBCC4
        .equ    DP_Q00,0x95A9

        .equ    DP_Q13,0x4055
        .equ    DP_Q12,0x8A12
        .equ    DP_Q11,0x040B
        .equ    DP_Q10,0x6DA5

        .equ    DP_Q23,0x404D
        .equ    DP_Q22,0xCA0A
        .equ    DP_Q21,0x320D
        .equ    DP_Q20,0xA3D7

        .equ    DP_Q33,0x402E
        .equ    DP_Q32,0x0C49
        .equ    DP_Q31,0xE14A
        .equ    DP_Q30,0xC710

;-----------------------------------------------------------------------;

        .global _atan
        .global _atanl

_atan:
_atanl:
        lnk     #4*2                    ; Reserve 4 words scratch space
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *
        mov     w3,w13                  ; (w13) = sign(x)

;------ Get operand type

        rcall   __dtype                 ; (w4) = type(x)

;------ Check for Infinities and NaNs

        cp      w4,#INFTYPE             ; Infinity or NaN ?
        bra     gtu,xIsNaN              ; isNaN(x) ... return quiet(x)
        bra     z,xIsInf                ; isInf(x) ... return Pi/2

;-----------------------------------------------------------------------;
;       x is finite and non-zero.
;-----------------------------------------------------------------------;

        clr     w12                     ; (w12) = translation flag n = 0
        bclr    w11,#15                 ; (w11:w8) = f = |x|

;-----------------------------------------------------------------------;
;       Argument reduction
;-----------------------------------------------------------------------;

;------ Test for f > 1
        
        mov     #DP_ONE3,w3             ; (w3:w0) = 1.0
        mov     #0,w2                   ; *
        mul.uu  w0,#0,w0                ; *
        mov.d   w8,w4                   ; (w7:w4) = f
        mov.d   w10,w6                  ; *
        rcall   ___gedf2                ; 1.0 >= f ?
        bra     ge,reduce1              ; Yes ...

;------ f > 1.0: Set f = 1/f

        mov     #DP_ONE3,w3             ; (w3:w0) = 1.0
        mov     #0,w2                   ; *
        mul.uu  w0,#0,w0                ; *
        mov.d   w8,w4                   ; (w7:w4) = f
        mov.d   w10,w6                  ; *
        rcall   ___divdf3               ; (w3:w0) = 1.0 / f
        mov.d   w0,w8                   ; (w11:w8) = f = 1.0/f
        mov.d   w2,w10                  ; *
        mov     #2,w12                  ; (w12) = translation flag n = 2

;------ Test for f > 2-Sqrt[3]

reduce1:
        mov     #DP_TWOmSQRT33,w3       ; (w3:w0) = 2 - Sqrt[3]
        mov     #DP_TWOmSQRT32,w2       ; *
        mov     #DP_TWOmSQRT31,w1       ; *
        mov     #DP_TWOmSQRT30,w0       ; *
        mov.d   w8,w4                   ; (w7:w4) = f
        mov.d   w10,w6                  ; *
        rcall   ___gedf2                ; 2 - Sqrt[3] >= f ?
        bra     ge,reduced              ; No ...

;------ f > 2 - Sqrt[3]

;------ f = (((Sqrt[3]-1) * f - 1.0) + f) / (Sqrt[3] + f)

        mov     #DP_SQRT33,w3           ; (w3:w0) = Sqrt[3]
        mov     #DP_SQRT32,w2           ; *
        mov     #DP_SQRT31,w1           ; *
        mov     #DP_SQRT30,w0           ; *
        mov.d   w8,w4                   ; (w7:w4) = f
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0) = Sqrt[3] + f
        mov.d   w0,[w14++]              ; Preserve Sqrt[3] + f
        mov.d   w2,[w14--]              ; *

        mov     #DP_SQRT3m13,w3         ; (w3:w0) = Sqrt[3]-1
        mov     #DP_SQRT3m12,w2         ; *
        mov     #DP_SQRT3m11,w1         ; *
        mov     #DP_SQRT3m10,w0         ; *
        mov.d   w8,w4                   ; (w7:w4) = f
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0) = (Sqrt[3]-1 * f)
        mov     #DP_ONE3,w7             ; (w7:w4) = 1.0
        mov     #0,w6                   ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___subdf3               ; (w3:w0) = (Sqrt[3]-1 * f) - 1.0
        mov.d   w8,w4                   ; (w7:w4) = f
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0) = (Sqrt[3]-1 * f) - 1.0 + f

        mov.d   [w14++],w4              ; (w7:w3) = Sqrt[3] + f
        mov.d   [w14--],w6              ; *
        rcall   ___divdf3               ; (((Sqrt[3]-1)*f-1)+f)/(Sqrt[3]+f)
        mov.d   w0,w8                   ; (w11:w8) = reduced f
        mov.d   w2,w10                  ; *

        inc     w12,w12                 ; (w12) = translation flag n = n + 1

;-----------------------------------------------------------------------;
;       Argument reduction complete
;-----------------------------------------------------------------------;
reduced:

;------ Check for |f| < eps

        mov.d   w8,w0                   ; (w3:w0) = f
        mov.d   w10,w2                  ; *
        bclr    w3,#15                  ; (w3:w0) = |f|
        mov     #DP_EPS3,w7             ; atan(f) = f for |f| < EPS
        mov     #DP_EPS2,w6             ; *
        mov     #DP_EPS1,w5             ; *
        mov     #DP_EPS0,w4             ; *
        rcall   ___ltdf2                ; compare |f| ? eps
        mov.d   w8,w0                   ; (w3:w0) = f
        mov.d   w10,w2                  ; *
        bra     lt,translate            ; f < eps ...

;-----------------------------------------------------------------------;
;       Rational approximation
;-----------------------------------------------------------------------;

;------ g = f * f

        mov.d   w8,w4                   ; (w7:w4) = f
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0) = f * f
        mov.d   w0,[w14++]              ; Preserve g = f * f
        mov.d   w2,[w14--]              ; *

;------ Q = (((g + Q3) * g + Q2) * g + Q1) * g + Q0

        mov     #DP_Q33,w7              ; Q3
        mov     #DP_Q32,w6              ; *
        mov     #DP_Q31,w5              ; *
        mov     #DP_Q30,w4              ; *
        rcall   ___adddf3               ; (((g+Q3)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (((g+Q3)*g
        mov     #DP_Q23,w7              ; Q2
        mov     #DP_Q22,w6              ; *
        mov     #DP_Q21,w5              ; *
        mov     #DP_Q20,w4              ; *
        rcall   ___adddf3               ; (((g+Q3)*g+Q2)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (((g+Q3)*g+Q2)*g
        mov     #DP_Q13,w7              ; Q1
        mov     #DP_Q12,w6              ; *
        mov     #DP_Q11,w5              ; *
        mov     #DP_Q10,w4              ; *
        rcall   ___adddf3               ; (((g+Q3)*g+Q2)*g+Q1)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (((g+Q3)*g+Q2)*g+Q1)*g
        mov     #DP_Q03,w7              ; Q1
        mov     #DP_Q02,w6              ; *
        mov     #DP_Q01,w5              ; *
        mov     #DP_Q00,w4              ; *
        rcall   ___adddf3               ; (((g+Q3)*g+Q2)*g+Q1)*g+Q0

        mov.d   w0,[w15++]              ; Preserve Q
        mov.d   w2,[w15++]              ; *

;------ P = ((P3 * g + P2) * g + P1) * g + P0

        mov.d   [w14++],w0              ; g
        mov.d   [w14--],w2              ; *
        mov     #DP_P33,w7              ; P3
        mov     #DP_P32,w6              ; *
        mov     #DP_P31,w5              ; *
        mov     #DP_P30,w4              ; *
        rcall   ___muldf3               ; ((P3*g)
        mov     #DP_P23,w7              ; P2
        mov     #DP_P22,w6              ; *
        mov     #DP_P21,w5              ; *
        mov     #DP_P20,w4              ; *
        rcall   ___adddf3               ; ((P3*g)+P2)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((P3*g)+P2)*g
        mov     #DP_P13,w7              ; P1
        mov     #DP_P12,w6              ; *
        mov     #DP_P11,w5              ; *
        mov     #DP_P10,w4              ; *
        rcall   ___adddf3               ; ((P3*g)+P2)*g+P1)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((P3*g)+P2)*g+P1)*g
        mov     #DP_P03,w7              ; P1
        mov     #DP_P02,w6              ; *
        mov     #DP_P01,w5              ; *
        mov     #DP_P00,w4              ; *
        rcall   ___adddf3               ; ((P3*g)+P2)*g+P1)*g+P0

;------ R = g * P / Q

        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w3:w0) = g * P
        mov.d   [--w15],w6              ; (w7:w4) = Q
        mov.d   [--w15],w4              ; *
        rcall   ___divdf3               ; (w3:w0) = R = g * P / Q
        
;------ result = f + f * R

        mov.d   w8,w4                   ; (w7:w4) = f
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0) = f * R
        mov.d   w8,w4                   ; (w7:w4) = f
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0) = f + f * R

;-----------------------------------------------------------------------;
;       Final translations
;-----------------------------------------------------------------------;
translate:

;------ n = 0, 1, 2, 3

        cp0     w12                     ; n == 0 ?
        bra     z,signresult            ; Yes ... no translation required ...

;------ n = 1, 2, 3

        btsc    w12,#1                  ; Skip if n < 2
        btg     w3,#15                  ; result = -result

        mov     #DP_PIOVER20,w4         ; (w7:w4) = Pi/2
        mov     #DP_PIOVER21,w5         ; *
        mov     #DP_PIOVER22,w6         ; *
        mov     #DP_PIOVER23,w7         ; *
        cp      w12,#2                  ; n == 2 ?
        bra     z,dotranslate           ; Yes ...

;------ n = 1, 3

        mov     #DP_PIOVER60,w4         ; (w7:w4) = Pi/6
        mov     #DP_PIOVER61,w5         ; *
        mov     #DP_PIOVER62,w6         ; *
        mov     #DP_PIOVER63,w7         ; *
        btsc    w12,#1                  ; Skip if n == 1
        mov     #DP_PIOVER33,w7         ; (w7:w4) = Pi/3

dotranslate:
        rcall   ___adddf3               ; (w3:w0) = translated result

signresult:
        btsc    w13,#15                 ; x < 0 ?
        btg     w3,#15                  ; Yes ... result = -result

        bra     __dunpack2exit          ; Destroy frame and return ...
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;

;------ NaNs

xIsNaN:
        bset    w3,#DBL_QNAN%16         ; Force quiet NaN for result
domainerr:
        mov     #_EDOM,w4               ; Domain error
        mov     w4,_errno               ; *
        bra     __dunpack2exit          ; Destroy frame and return ...

;------ Infinities

xIsInf:
        mov     #DP_PIOVER23,w3         ; Result is Pi/2
        mov     #DP_PIOVER22,w2         ; *
        mov     #DP_PIOVER21,w1         ; *
        mov     #DP_PIOVER20,w0         ; *
        bra     signresult              ; Return +/- Pi/2
;-----------------------------------------------------------------------;


.include "null_signature.s"
