;-----------------------------------------------------------------------;
; tan.s: Floating-point tangent elementary function.
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
; tan
;
;       Double-precision tangent elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;
; Output:
;
;       (w3:w0) Floating-point number tangent(x)
;
; Description:
;
;       Computes the tangent of the argument x.
;       
;-----------------------------------------------------------------------;

;
; XMAX: Largest machine number such that tan(x) contains significant digits,
;       and argument reduction won't blow up.
;       XMAX = 2^(53/2) * Pi/2 = 149078413.0
;
	.ifdef ffunction
	.section .libm.tan, code
	.endif
        .equ    DP_XMAX3,       0x41A1
        .equ    DP_XMAX2,       0xC583
        .equ    DP_XMAX1,       0x1A00
        .equ    DP_XMAX0,       0x0000

;
; EPS: tan(x) = x for |x| < EPS
;       EPS = 2^-(53/2)
;
        .equ    DP_EPS3,        0x3E46
        .equ    DP_EPS2,        0xA09E
        .equ    DP_EPS1,        0x667F
        .equ    DP_EPS0,        0x3BCD

;-----------------------------------------------------------------------;
; Coefficients for the minimax polynomial function approximation.
;-----------------------------------------------------------------------;

        .equ    DP_P13,         0xBFC1
        .equ    DP_P12,         0x12B5
        .equ    DP_P11,         0xE54D
        .equ    DP_P10,         0x0900

        .equ    DP_P23,         0x3F6C
        .equ    DP_P22,         0x0E82
        .equ    DP_P21,         0xA63B
        .equ    DP_P20,         0xAADF

        .equ    DP_P33,         0xBEF2
        .equ    DP_P32,         0xBAB7
        .equ    DP_P31,         0x2EA2
        .equ    DP_P30,         0xC724

        .equ    DP_Q03,         0x3FF0
        .equ    DP_Q02,         0x0000
        .equ    DP_Q01,         0x0000
        .equ    DP_Q00,         0x0000

        .equ    DP_Q13,         0xBFDD
        .equ    DP_Q12,         0xDEB0
        .equ    DP_Q11,         0x47FB
        .equ    DP_Q10,         0xD9D5

        .equ    DP_Q23,         0x3F9A
        .equ    DP_Q22,         0x479E
        .equ    DP_Q21,         0xA17E
        .equ    DP_Q20,         0x2159

        .equ    DP_Q33,         0xBF34
        .equ    DP_Q32,         0x6F64
        .equ    DP_Q31,         0x9909
        .equ    DP_Q30,         0x4841

        .equ    DP_Q43,         0x3EA0
        .equ    DP_Q42,         0xB774
        .equ    DP_Q41,         0xF076
        .equ    DP_Q40,         0x78E9

;-----------------------------------------------------------------------;

        .global _tan
        .global _tanl

_tan:
_tanl:
        lnk     #4*2                    ; Reserve 4 words scratch space
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *

;------ Get operand type

        rcall   __dtype                 ; (w4) = type(x)

;------ Check for Infinities and NaNs

        cp      w4,#INFTYPE             ; Infinity or NaN ?
        bra     gtu,xIsNaN              ; NaN ...
        bra     z,xIsInf                ; Inf ...

;-----------------------------------------------------------------------;
;       x is finite.
;-----------------------------------------------------------------------;

;------ Ensure that |x| < XMAX

        bclr    w3,#15                  ; |x|
        mov     #DP_XMAX3,w7            ; largest |x| with tan(x) in range
        mov     #DP_XMAX2,w6            ; *
        mov     #DP_XMAX1,w5            ; *
        mov     #DP_XMAX0,w4            ; *
        rcall   ___ltdf2                ; compare x ? xmax
        mov.d   w8,w0                   ; x
        mov.d   w10,w2                  ; *
        bra     lt,argreduction         ; |x| < xmax ...

;------ Coarse argument reduction

        mov.w   #DP_PI3,w7              ; Pi
        mov.w   #DP_PI2,w6              ; *
        mov.w   #DP_PI1,w5              ; *
        mov.w   #DP_PI0,w4              ; *
        rcall   _fmod                   ; (w3:w0) = remainder(x, Pi)
        mov.d   w0,w8                   ; (w11:w8) = reduced x
        mov.d   w2,w10                  ; *

;-----------------------------------------------------------------------;
;       Argument reduction
;-----------------------------------------------------------------------;

argreduction:

;------ n = intrnd(x / (pi/2))

        mov.w   #DP_TWOoverPI3,w7       ; 2/Pi
        mov.w   #DP_TWOoverPI2,w6       ; *
        mov.w   #DP_TWOoverPI1,w5       ; *
        mov.w   #DP_TWOoverPI0,w4       ; *
        rcall   ___muldf3               ; (w3:w0)= (x / (pi/2))
        mov.w   #DP_HALF3,w7            ; (w7:w4)= +0.5
        mov.w   #DP_HALF2,w6            ; *
        mul.uu  w4,#0,w4                ; *
        btsc    w3,#15                  ; x negative ?
        bset    w7,#15                  ; Yes ... load -0.5
        rcall   ___adddf3               ; (x / (pi/2)) +/- 0.5
        rcall   ___fixdfsi              ; (w3:w0) = n = intrnd(x / (pi/2))
        mov.w   w0,[w15++]              ; Preserve isOdd(n)

;------ xn = float(n)

        rcall   ___floatsidf            ; (w3:w0)= xn = float(n)

;------ Determine f: f = (x - xn * C1) - xn * C2

        btg     w3,#15                  ; -xn
        mov.d   w0,[w14++]              ; Preserve -xn
        mov.d   w2,[w14--]              ; *

        mov.w   #DP_PIOVER2_C13,w7      ; C1
        mov.w   #DP_PIOVER2_C12,w6      ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___muldf3               ; (w1:w0)=(-xn * C1)
        mov.d   w8,w4                   ; x
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0)=(x - xn * C1)
        mov.d   w0,[w15++]              ; (x - xn * C1)
        mov.d   w2,[w15++]              ; *
        mov.d   [w14++],w0              ; -xn
        mov.d   [w14--],w2              ; *
        mov.w   #DP_PIOVER2_C23,w7      ; C2
        mov.w   #DP_PIOVER2_C22,w6      ; *
        mov.w   #DP_PIOVER2_C21,w5      ; *
        mov.w   #DP_PIOVER2_C20,w4      ; *
        rcall   ___muldf3               ; (w3:w0)=(-xn * C2)
        mov.d   [--w15],w6              ; (x - xn * C1)
        mov.d   [--w15],w4              ; *
        rcall   ___adddf3               ; (w3:w0)=(x - xn * C1) - xn * C2
        mov.d   w0,w8                   ; (w11:w8)=f
        mov.d   w2,w10                  ; (

;------ Ensure that |f| >= EPS

        bclr    w3,#15                  ; |f|
        mov     #DP_EPS3,w7             ; tan(f) = f for |f| < EPS
        mov     #DP_EPS2,w6             ; *
        mov     #DP_EPS1,w5             ; *
        mov     #DP_EPS0,w4             ; *
        rcall   ___gedf2                ; compare |f| ? eps
        bra     ge,inrange              ; |f| >= eps ...

;------ tan(x) ~ x or 1/x

        mov.w   #DP_ONE3,w3             ; (w3:w0) = xden = 1.0
        mov.w   #DP_ONE2,w2             ; *
        mul.uu  w0,#0,w0                ; *
        bra     determineq              ; Calculate ratio ...

;-----------------------------------------------------------------------;
;       f is in range. Calculate tan(x)
;-----------------------------------------------------------------------;

inrange:

;------ g = f * f

        mov.d   w8,w0                   ; (w3:w0) = f
        mov.d   w10,w2                  ; *
        mov.d   w0,w4                   ; f
        mov.d   w2,w6                   ; *
        rcall   ___muldf3               ; (w3:w0) = g = f*f
        mov.d   w0,[w14++]              ; Preserve g
        mov.d   w2,[w14--]              ; *

;------ xnum = ((P3 * g + P2) * g + P1) * g * f + f

        mov.w   #DP_P33,w7              ; P3
        mov.w   #DP_P32,w6              ; *
        mov.w   #DP_P31,w5              ; *
        mov.w   #DP_P30,w4              ; *
        rcall   ___muldf3               ; P3*g
        mov.w   #DP_P23,w7              ; P2
        mov.w   #DP_P22,w6              ; *
        mov.w   #DP_P21,w5              ; *
        mov.w   #DP_P20,w4              ; *
        rcall   ___adddf3               ; P3*g+P2
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (P3*g+P2)*g
        mov.w   #DP_P13,w7              ; P1
        mov.w   #DP_P12,w6              ; *
        mov.w   #DP_P11,w5              ; *
        mov.w   #DP_P10,w4              ; *
        rcall   ___adddf3               ; (P3*g+P2)*g+P1
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((P3*g+P2)*g+P1)*g
        mov.d   w8,w4                   ; f
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; ((P3*g+P2)*g+P1)*g*f
        mov.d   w8,w4                   ; f
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; ((P3*g+P2)*g+P1)*g*f+f
        mov.d   w0,w8                   ; xnum
        mov.d   w2,w10                  ; *

;------ xden = (((Q4 * g + Q3) * g + Q2) * g + Q1) * g + Q0

        mov.d   [w14++],w0              ; g
        mov.d   [w14--],w2              ; *
        mov.w   #DP_Q43,w7              ; Q4
        mov.w   #DP_Q42,w6              ; *
        mov.w   #DP_Q41,w5              ; *
        mov.w   #DP_Q40,w4              ; *
        rcall   ___muldf3               ; Q4*g
        mov.w   #DP_Q33,w7              ; Q3
        mov.w   #DP_Q32,w6              ; *
        mov.w   #DP_Q31,w5              ; *
        mov.w   #DP_Q30,w4              ; *
        rcall   ___adddf3               ; Q4*g+Q3
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (Q4*g+Q3)*g
        mov.w   #DP_Q23,w7              ; Q2
        mov.w   #DP_Q22,w6              ; *
        mov.w   #DP_Q21,w5              ; *
        mov.w   #DP_Q20,w4              ; *
        rcall   ___adddf3               ; (Q4*g+Q3)*g+Q2
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((Q4*g+Q3)*g+Q2)*g
        mov.w   #DP_Q13,w7              ; Q1
        mov.w   #DP_Q12,w6              ; *
        mov.w   #DP_Q11,w5              ; *
        mov.w   #DP_Q10,w4              ; *
        rcall   ___adddf3               ; ((Q4*g+Q3)*g+Q2)*g+Q1
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (((Q4*g+Q3)*g+Q2)*g+Q1)*g
        mov.w   #DP_Q03,w7              ; Q0
        mov.w   #DP_Q02,w6              ; *
        mov.w   #DP_Q01,w5              ; *
        mov.w   #DP_Q00,w4              ; *
        rcall   ___adddf3               ; (((Q4*g+Q3)*g+Q2)*g+Q1)*g+Q0

;------ Determine quadrant
        
determineq:
        mov.d   w8,w4                   ; xnum
        mov.d   w10,w6                  ; *

        btss    [--w15],#0              ; isOdd(n) ?
        bra     neven                   ; No ...

;------ calculate result = xden / -xnum

        btg     w7,#15                  ; -xnum
        bra     ratio                   ; Calculate the ratio ...

;------ calculate result = xnum / xden

neven:
.ifdef EXCH_ERRATA
        push.d  w0
        push.d  w2
        mov.d   w4, w0
        mov.d   w6, w2
        pop.d   w6
        pop.d   w4
.else
        exch    w0,w4                   ; swap(xnum,xden)
        exch    w1,w5                   ; *
        exch    w2,w6                   ; *
        exch    w3,w7                   ; *
.endif

ratio:
        rcall   ___divdf3               ; (w3:w0) = tan(x)

return0:
        bra     __dunpack2exit          ; Destroy frame and return ...
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;

;------ Infinities

xIsInf:
        mov     #0x7FFF,w3              ; Result is Quiet NaN
        mov     #0xFFFF,w2              ; *
        mul.su  w2,#1,w0                ; *
xIsNaN:
        bset    w3,#DBL_QNAN%16         ; Force quiet NaN for result
domainerr:
        mov     #_EDOM,w4               ; Domain error
        mov     w4,_errno               ; *
        bra     __dunpack2exit          ; Destroy frame and return ...
;-----------------------------------------------------------------------;


.include "null_signature.s"
