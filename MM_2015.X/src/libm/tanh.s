;-----------------------------------------------------------------------;
; tanh.s: Floating-point hyperbolic tangent elementary function.
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
; tanh
;
;       Double-precision hyperbolic tangent elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;
; Output:
;
;       (w3:w0) Floating-point number hyperbolic tangent(x)
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
	.section .libm.tanh, code
	.endif
        .equ    DP_XBIG3,       0x4033
        .equ    DP_XBIG2,       0x0FC1
        .equ    DP_XBIG1,       0x931F
        .equ    DP_XBIG0,       0x09CA

;
; C0: Value such that for x > C0, tanh(x) can be approximated from
;       its definition.
;       C0 = ln(3)/2
;
        .equ    DP_C03,         0x3FE1
        .equ    DP_C02,         0x93EA
        .equ    DP_C01,         0x7AAD
        .equ    DP_C00,         0x030B

;
; EPS: tanh(x) = x for |x| < EPS
;       EPS = 2^-(53/2)
;
        .equ    DP_EPS3,        0x3E46
        .equ    DP_EPS2,        0xA09E
        .equ    DP_EPS1,        0x667F
        .equ    DP_EPS0,        0x3BCD

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;-----------------------------------------------------------------------;

        .equ    DP_P03,         0xC099
        .equ    DP_P02,         0x35A5
        .equ    DP_P01,         0xC9BE
        .equ    DP_P00,         0x1E18

        .equ    DP_P13,         0xC058
        .equ    DP_P12,         0xCE75
        .equ    DP_P11,         0xA1BA
        .equ    DP_P10,         0x5CCC

        .equ    DP_P23,         0xBFEE
        .equ    DP_P22,         0xDC28
        .equ    DP_P21,         0xCEFB
        .equ    DP_P20,         0xA77F

        .equ    DP_Q03,         0x40B2
        .equ    DP_Q02,         0xE83C
        .equ    DP_Q01,         0x574E
        .equ    DP_Q00,         0x9693

        .equ    DP_Q13,         0x40A1
        .equ    DP_Q12,         0x738B
        .equ    DP_Q11,         0x4D01
        .equ    DP_Q10,         0xF0F3

        .equ    DP_Q23,         0x405C
        .equ    DP_Q22,         0x2FA9
        .equ    DP_Q21,         0xE1EB
        .equ    DP_Q20,         0xF7FA

;-----------------------------------------------------------------------;

        .global _tanh
        .global _tanhl

_tanh:
_tanhl:
        lnk     #4*2                    ; Reserve 4 words scratch space
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *
        mov.w   w3,w12                  ; (w12) = sign(x)

;------ Get operand type

        rcall   __dtype                 ; (w4) = type(x)

;------ Check for Zeros, Infinities and NaNs

        cp      w4,#INFTYPE             ; Infinity or NaN ?
        bra     gtu,__dunpack2exit      ; NaN ... return(x) ...
        bra     z,returnone             ; Inf ... return(+/-1) ...

        cp      w4,#FINITETYPE          ; Finite, non-zero ?
        bra     ltu,__dunpack2exit      ; Zero ... return(x) ...

;-----------------------------------------------------------------------;
;       x is finite, non-zero.
;-----------------------------------------------------------------------;

        bclr    w11,#15                 ; (w11:w8) = f = |x|

;------ Ensure that f <= XBIG

        mov     #DP_XBIG3,w7            ; tanh(f) = 1 for f > XBIG
        mov     #DP_XBIG2,w6            ; *
        mov     #DP_XBIG1,w5            ; *
        mov     #DP_XBIG0,w4            ; *
        bclr    w3,#15                  ; (w3:w0) = f = |x|
        rcall   ___gtdf2                ; compare f ? xbig
        bra     gt,returnone            ; f > xbig ... result = 1

;------ See if rational function is required (for small x)

        mov.w   #DP_C03,w7              ; ln(3)/2
        mov.w   #DP_C02,w6              ; *
        mov.w   #DP_C01,w5              ; *
        mov.w   #DP_C00,w4              ; *
        mov.d   w8,w0                   ; f
        mov.d   w10,w2                  ; *
        rcall   ___gtdf2                ; compare f ? ln(3)/2
        mov.d   w8,w0                   ; f
        mov.d   w10,w2                  ; *
        bra     gt,direct               ; f > ln(3)/2 ... use direct approx

;------ See if x is tiny

        mov.w   #DP_EPS3,w7             ; tanh(f) = f for f < eps
        mov.w   #DP_EPS2,w6             ; *
        mov.w   #DP_EPS1,w5             ; *
        mov.w   #DP_EPS0,w4             ; *
        rcall   ___ltdf2                ; compare f ? eps
        mov.d   w8,w0                   ; f
        mov.d   w10,w2                  ; *
        bra     lt,signresult           ; f < eps ... result = f

;-----------------------------------------------------------------------;
;       Rational function approximation
;-----------------------------------------------------------------------;

        mov.d   w8,w4                   ; f
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0) = f * f
        mov.d   w0,[w14++]              ; Preserve g = f * f
        mov.d   w2,[w14--]              ; *

;------ Q = ((g + Q2) * g + Q1) * g + Q0

        mov.w   #DP_Q23,w7              ; Q2
        mov.w   #DP_Q22,w6              ; *
        mov.w   #DP_Q21,w5              ; *
        mov.w   #DP_Q20,w4              ; *
        rcall   ___adddf3               ; g+Q2
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (g+Q2)*g
        mov.w   #DP_Q13,w7              ; Q1
        mov.w   #DP_Q12,w6              ; *
        mov.w   #DP_Q11,w5              ; *
        mov.w   #DP_Q10,w4              ; *
        rcall   ___adddf3               ; (g+Q2)*g+Q1
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((g+Q2)*g+Q1)*g
        mov.w   #DP_Q03,w7              ; Q0
        mov.w   #DP_Q02,w6              ; *
        mov.w   #DP_Q01,w5              ; *
        mov.w   #DP_Q00,w4              ; *
        rcall   ___adddf3               ; ((g+Q2)*g+Q1)*g+Q0

        mov.d   w0,[w15++]              ; Preserve Q
        mov.d   w2,[w15++]              ; *

;------ P = (P2 * g + P1) * g + P0

        mov.d   [w14++],w0              ; g
        mov.d   [w14--],w2              ; *
        mov.w   #DP_P23,w7              ; P2
        mov.w   #DP_P22,w6              ; *
        mov.w   #DP_P21,w5              ; *
        mov.w   #DP_P20,w4              ; *
        rcall   ___muldf3               ; P2*g
        mov.w   #DP_P13,w7              ; P1
        mov.w   #DP_P12,w6              ; *
        mov.w   #DP_P11,w5              ; *
        mov.w   #DP_P10,w4              ; *
        rcall   ___adddf3               ; P1*g+P1
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (P1*g+P1)*g
        mov.w   #DP_P03,w7              ; P0
        mov.w   #DP_P02,w6              ; *
        mov.w   #DP_P01,w5              ; *
        mov.w   #DP_P00,w4              ; *
        rcall   ___adddf3               ; (P1*g+P1)*g+P0

;------ R = g * P / Q

        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w3:w0) = g * P
        mov.d   [--w15],w6              ; (w7:w4) = Q
        mov.d   [--w15],w4              ; *
        rcall   ___divdf3               ; (w3:w0) = g * P / Q

;------ Result = f + f * R

        mov.d   w8,w4                   ; (w7:w3) = f
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0) = f * R
        mov.d   w8,w4                   ; (w7:w3) = f
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0) = f + f * R
        bra     signresult              ; Sign the result & return ...

;-----------------------------------------------------------------------;
;       Direct exaluation from tanh definition
;-----------------------------------------------------------------------;

direct:

;------ result = 0.5 - 1 / (1+exp(f+f))

        mov.d   w8,w4                   ; (w7:w3) = f
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0) = f + f
        rcall   _exp                    ; (w3:w0) = exp(f+f)
        mov.w   #DP_ONE3,w7             ; (w7:w4) = 1
        mov.w   #DP_ONE2,w6             ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___adddf3               ; (w3:w0) = 1+exp(f+f)
        mov.d   w0,w4                   ; (w7:w4) = 1+exp(f+f)
        mov.d   w2,w6                   ; *
        mov.w   #DP_NEGONE3,w3          ; (w3:w0) = -1
        mov.w   #DP_NEGONE2,w2          ; *
        mul.uu  w0,#0,w0                ; *
        rcall   ___divdf3               ; (w3:w0) = -1/(1+expf(f+f))
        mov.w   #DP_HALF3,w7            ; (w7:w4) = 0.5
        mov.w   #DP_HALF2,w6            ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___adddf3               ; (w3:w0) = 0.5-1/(1+expf(f+f))

;------ result = result + result

        mov.d   w0,w4                   ; result
        mov.d   w2,w6                   ; *
        rcall   ___adddf3               ; result + result

;-----------------------------------------------------------------------;
;       Sign the result and return
;-----------------------------------------------------------------------;

signresult:
        btsc    w12,#15                 ; x < 0 ?
        btg     w3,#15                  ; Yes ... result = -result
return0:
        bra     __dunpack2exit          ; Destroy frame and return ...
;-----------------------------------------------------------------------;

;------ Infinities: result is +/- 1.0

returnone:
        mov     #DP_ONE3,w3             ; Result is 1.0
        mov     #DP_ONE2,w2             ; *
        mul.uu  w0,#0,w0                ; *
        bra     signresult              ; Set sign(result) = sign(x)
;-----------------------------------------------------------------------;


.include "null_signature.s"
