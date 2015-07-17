;-----------------------------------------------------------------------;
; asinacos.s: Floating-point arcsine/arccosine elementary functions.
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
; asinacos
;
;       Double-precision arcsine or arccosine elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;       (w4)    Function selector: 0=arcsine, 3=arccosine
;
; Output:
;
;       (w3:w0) Floating-point number arcsine(x) or arccosine(x)
;
; Description:
;
;       Computes the arcsine or arccosine of the argument x.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;
; EPS: asin(x) = x for |x| < EPS
;       EPS = 2^(-53/2)
;
	.ifdef ffunction
	.section .libm.asinacos, code
	.endif
        .equ    DP_EPS3,0x3E46
        .equ    DP_EPS2,0xA09E
        .equ    DP_EPS1,0x667F
        .equ    DP_EPS0,0x3BCD

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;-----------------------------------------------------------------------;
;
        .equ    DP_P13, 0xC03B
        .equ    DP_P12, 0x5E55
        .equ    DP_P11, 0xA83A
        .equ    DP_P10, 0x0A62

        .equ    DP_P23, 0x404C
        .equ    DP_P22, 0x9AA7
        .equ    DP_P21, 0x360A
        .equ    DP_P20, 0xD48A

        .equ    DP_P33, 0xC043
        .equ    DP_P32, 0xD82C
        .equ    DP_P31, 0xA9A6
        .equ    DP_P30, 0xDA9F

        .equ    DP_P43, 0x4024
        .equ    DP_P42, 0x4E17
        .equ    DP_P41, 0x64EC
        .equ    DP_P40, 0x3927

        .equ    DP_P53, 0xBFE6
        .equ    DP_P52, 0x4BBD
        .equ    DP_P51, 0xB5E6
        .equ    DP_P50, 0x1E65

        .equ    DP_Q03, 0xC064
        .equ    DP_Q02, 0x86C0
        .equ    DP_Q01, 0x3E2B
        .equ    DP_Q00, 0x87CC

        .equ    DP_Q13, 0x407A
        .equ    DP_Q12, 0x124F
        .equ    DP_Q11, 0x101E
        .equ    DP_Q10, 0xB843

        .equ    DP_Q23, 0xC077
        .equ    DP_Q22, 0xDDCE
        .equ    DP_Q21, 0xFC56
        .equ    DP_Q20, 0xA848

        .equ    DP_Q33, 0x4062
        .equ    DP_Q32, 0xDE7C
        .equ    DP_Q31, 0x9659
        .equ    DP_Q30, 0x1C70

        .equ    DP_Q43, 0xC037
        .equ    DP_Q42, 0xD2E8
        .equ    DP_Q41, 0x6EF9
        .equ    DP_Q40, 0x861F

;-----------------------------------------------------------------------;
        .global __asinacos

__asinacos:
        lnk     #4*2                    ; Reserve 4 words scratch space
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        mov     w4,w12                  ; Save function selector
                                        ; (w12[0]) = function
                                        ; (w12[1]) = i
        btsc    w3,#15                  ; x < 0 ?
        bset    w12,#15                 ; Yes ... w12[15] = sign(x)
        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *

;------ Get operand type

        rcall   __dtype                 ; (w4) = type(x)

;------ Check for Infinities and NaNs

        cp      w4,#INFTYPE             ; Infinity or NaN ?
        bra     gtu,xIsNaN              ; isNaN(x) ... return quiet(x)
        bra     z,returnNaN             ; isInf(x) ... return QNaN

;-----------------------------------------------------------------------;
;       x is finite. Check for domain error.
;-----------------------------------------------------------------------;

        bclr    w11,#15                 ; (w11:w8) = y = |x|

        mov.d   w8,w0                   ; (w3:w0) = y
        mov.d   w10,w2                  ; *
        mov     #DP_ONE3,w7             ; Domain is [-1,1]
        mov     #0,w6                   ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___gtdf2                ; compare y ? 1.0
        bra     gt,returnNaN            ; y > 1.0 ... domain error

;-----------------------------------------------------------------------;
;       x is finite and in the domain. 
;-----------------------------------------------------------------------;

;------ Check for y < eps

        mov.d   w8,w0                   ; (w3:w0) = y
        mov.d   w10,w2                  ; *
        mov     #DP_EPS3,w7             ; asin(y) = y for y < EPS
        mov     #DP_EPS2,w6             ; *
        mov     #DP_EPS1,w5             ; *
        mov     #DP_EPS0,w4             ; *
        rcall   ___ltdf2                ; compare y ? eps
        mov.d   w8,w0                   ; (w3:w0) = y
        mov.d   w10,w2                  ; *
        bra     lt,translate            ; y < eps ...

;------ Check for y > 1/2

        mov     #DP_HALF3,w7            ; asin(y) = y for y < EPS
        mov     #DP_HALF2,w6            ; *
        mov     #DP_HALF1,w5            ; *
        mov     #DP_HALF0,w4            ; *
        rcall   ___gtdf2                ; compare y ? 1/2
        bra     gt,argreduce            ; y > 1/2 ...

;-----------------------------------------------------------------------;
;       No argument reduction required
;-----------------------------------------------------------------------;

;------ g = y * y

        mov.d   w8,w0                   ; (w3:w0) = y
        mov.d   w10,w2                  ; *
        mov.d   w8,w4                   ; (w7:w4) = y
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0) = g = y * y
        mov.d   w0,[w14++]              ; Preserve g
        mov.d   w2,[w14--]              ; *
        bra     rapprox                 ; Join common processing ...

;-----------------------------------------------------------------------;
;       Argument reduction required
;-----------------------------------------------------------------------;

argreduce:
        btg     w12,#1                  ; (w12[1]) = i = 1 - flag

;------ g = (1 - y)/2

        mov.w   #DP_ONE3,w3             ; (w3:w0) = 1.0
        mov.w   #DP_ONE2,w2             ; *
        mul.uu  w0,#0,w0                ; *
        mov.d   w8,w4                   ; (w7:w4) = y
        mov.d   w10,w6                  ; *
        rcall   ___subdf3               ; (w1:w0) = 1.0 - y
        mov     #DP_HALF3,w7            ; 1/2
        mov     #DP_HALF2,w6            ; *
        mov     #DP_HALF1,w5            ; *
        mov     #DP_HALF0,w4            ; *
        rcall   ___muldf3               ; (w3:w0) = g = (1 - y)/2
        mov.d   w0,[w14++]              ; Preserve g
        mov.d   w2,[w14--]              ; *

;------ y = -2 * sqrt(g)

        rcall   _sqrt                   ; (w3:w0) = sqrt(g)
        mov     #DP_NEGTWO3,w7          ; -2.0
        mov     #DP_NEGTWO2,w6          ; *
        mov     #DP_NEGTWO1,w5          ; *
        mov     #DP_NEGTWO0,w4          ; *
        rcall   ___muldf3               ; (w3:w0) = y = -2 * sqrt(g)
        mov.d   w0,w8                   ; (w11:w8) = y
        mov.d   w2,w10                  ; *

;-----------------------------------------------------------------------;
;       Rational function approximation
;-----------------------------------------------------------------------;

rapprox:

;------ Q = ((((g + Q4) * g + Q3) * g + Q2) * g + Q1) * g + Q0

        mov.d   [w14++],w0              ; g
        mov.d   [w14--],w2              ; *
        mov     #DP_Q43,w7              ; Q4
        mov     #DP_Q42,w6              ; *
        mov     #DP_Q41,w5              ; *
        mov     #DP_Q40,w4              ; *
        rcall   ___adddf3               ; ((((g+Q4)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((((g+Q4)*g
        mov     #DP_Q33,w7              ; Q3
        mov     #DP_Q32,w6              ; *
        mov     #DP_Q31,w5              ; *
        mov     #DP_Q30,w4              ; *
        rcall   ___adddf3               ; ((((g+Q4)*g+Q3)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((((g+Q4)*g+Q3)*g
        mov     #DP_Q23,w7              ; Q2
        mov     #DP_Q22,w6              ; *
        mov     #DP_Q21,w5              ; *
        mov     #DP_Q20,w4              ; *
        rcall   ___adddf3               ; ((((g+Q4)*g+Q3)*g+Q2)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((((g+Q4)*g+Q3)*g+Q2)*g
        mov     #DP_Q13,w7              ; Q1
        mov     #DP_Q12,w6              ; *
        mov     #DP_Q11,w5              ; *
        mov     #DP_Q10,w4              ; *
        rcall   ___adddf3               ; ((((g+Q4)*g+Q3)*g+Q2)*g+Q1)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((((g+Q4)*g+Q3)*g+Q2)*g+Q1)*g
        mov     #DP_Q03,w7              ; Q0
        mov     #DP_Q02,w6              ; *
        mov     #DP_Q01,w5              ; *
        mov     #DP_Q00,w4              ; *
        rcall   ___adddf3               ; ((((g+Q4)*g+Q3)*g+Q2)*g+Q1)*g+Q0

        mov.d   w0,[w15++]              ; Preserve Q
        mov.d   w2,[w15++]              ; *

;------ P = (((P5 * g + P4) * g + P3) * g + P2) * g + P1

        mov     #DP_P53,w3              ; P5
        mov     #DP_P52,w2              ; *
        mov     #DP_P51,w1              ; *
        mov     #DP_P50,w0              ; *
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (((P5*g
        mov     #DP_P43,w7              ; P4
        mov     #DP_P42,w6              ; *
        mov     #DP_P41,w5              ; *
        mov     #DP_P40,w4              ; *
        rcall   ___adddf3               ; (((P5*g+P4)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (((P5*g+P4)*g
        mov     #DP_P33,w7              ; P3
        mov     #DP_P32,w6              ; *
        mov     #DP_P31,w5              ; *
        mov     #DP_P30,w4              ; *
        rcall   ___adddf3               ; (((P5*g+P4)*g+P3)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (((P5*g+P4)*g+P3)*g
        mov     #DP_P23,w7              ; P2
        mov     #DP_P22,w6              ; *
        mov     #DP_P21,w5              ; *
        mov     #DP_P20,w4              ; *
        rcall   ___adddf3               ; (((P5*g+P4)*g+P3)*g+P2)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (((P5*g+P4)*g+P3)*g+P2)*g
        mov     #DP_P13,w7              ; P1
        mov     #DP_P12,w6              ; *
        mov     #DP_P11,w5              ; *
        mov     #DP_P10,w4              ; *
        rcall   ___adddf3               ; P = (((P5*g+P4)*g+P3)*g+P2)*g+P1

;------ R = g * P / Q

        mov.d   [w14++],w4              ; (w7:w4) = g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w3:w0) = g * P
        mov.d   [--w15],w6              ; (w7:w4) = Q
        mov.d   [--w15],w4              ; *
        rcall   ___divdf3               ; (w3:w0) = g * P / Q

;------ result = y + y * R

        mov.d   w8,w4                   ; (w7:w4) = y
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0) = y * R
        mov.d   w8,w4                   ; (w7:w4) = y
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0) = y + y * R

;-----------------------------------------------------------------------;
;       Translation adjustment
;
;       (w3:w0) = tentative result
;       (w11:w8) = y
;-----------------------------------------------------------------------;

translate:

        btsc    w12,#0                  ; arccosine required ?
        bra     arccosine               ; Yes ...

;------ acrsine requested

        mov.w   #DP_PIOVER23,w7         ; Pi/2
        mov.w   #DP_PIOVER22,w6         ; *
        mov.w   #DP_PIOVER21,w5         ; *
        mov.w   #DP_PIOVER20,w4         ; *
        btsc    w12,#1                  ; i == 1 ?
        rcall   ___adddf3               ; (w3:w0) = result + Pi/2
        btsc    w12,#15                 ; x < 0 ?
        btg     w3,#15                  ; Yes ... result = -result
        bra     return0                 ; Done ...

;------ arccosine requested

arccosine:

        btsc    w12,#15                 ; x < 0 ?
        bra     arccosxneg              ; Yes ...

        btg     w3,#15                  ; x >= 0 ... result = -result
        bra     addpiover2              ; result += Pi/2

arccosxneg:
        mov.w   #DP_PI3,w7              ; Pi
        mov.w   #DP_PI2,w6              ; *
        mov.w   #DP_PI1,w5              ; *
        mov.w   #DP_PI0,w4              ; *
        btss    w12,#1                  ; i == 0 ?
        bra     addandexit              ; Yes ... return(result + Pi)
addpiover2:
        mov.w   #DP_PIOVER23,w7         ; Pi/2
        mov.w   #DP_PIOVER22,w6         ; *
        mov.w   #DP_PIOVER21,w5         ; *
        mov.w   #DP_PIOVER20,w4         ; *
        btsc    w12,#1                  ; i == 1 ?
addandexit:
        rcall   ___adddf3               ; (w3:w0) = result + Pi/2

;-----------------------------------------------------------------------;
return0:
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;

;------ Error returns

returnNaN:
        mov     #0x7FFF,w3              ; Result is Quiet NaN
        mov     #0xFFFF,w2              ; *
        mul.su  w2,#1,w0                ; *
xIsNaN:
        bset    w3,#DBL_QNAN%16         ; Force quiet NaN for result
domainerr:
        mov     #_EDOM,w4               ; Domain error
        mov     w4,_errno               ; *
        bra     return0                 ; Error return

;-----------------------------------------------------------------------;

.include "null_signature.s"
