;-----------------------------------------------------------------------;
; sinh.s: Floating-point hyperbolic sine elementary function.
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
; sinh
;
;       Double-precision hyperbolic sine elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;
; Output:
;
;       (w3:w0) Floating-point number hyperbolic sine(x)
;
; Description:
;
;       Computes the hyperbolic sine of the argument x.
;       
;-----------------------------------------------------------------------;

;
; EPS: sinh(x) = x for |x| < EPS
;       EPS = 2^-(53/2)
;
	.ifdef ffunction
	.section .libm.sinh, code
	.endif
        .equ    DP_EPS3,        0x3E46
        .equ    DP_EPS2,        0xA09E
        .equ    DP_EPS1,        0x667F
        .equ    DP_EPS0,        0x3BCD

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;-----------------------------------------------------------------------;
;
        .equ    DP_P03,         0xC115
        .equ    DP_P02,         0x7913
        .equ    DP_P01,         0x5653
        .equ    DP_P00,         0x3419

        .equ    DP_P13,         0xC0C6
        .equ    DP_P12,         0x95C2
        .equ    DP_P11,         0xB694
        .equ    DP_P10,         0x1490

        .equ    DP_P23,         0xC064
        .equ    DP_P22,         0x7841
        .equ    DP_P21,         0x6385
        .equ    DP_P20,         0xBE4A

        .equ    DP_P33,         0xBfE9
        .equ    DP_P32,         0x44E7
        .equ    DP_P31,         0xB86F
        .equ    DP_P30,         0xC81B

        .equ    DP_Q03,         0xC140
        .equ    DP_Q02,         0x1ACE
        .equ    DP_Q01,         0x80BE
        .equ    DP_Q00,         0x6713

        .equ    DP_Q13,         0x40E1
        .equ    DP_Q12,         0xA857
        .equ    DP_Q11,         0x23B6
        .equ    DP_Q10,         0x5EC7

        .equ    DP_Q23,         0xC071
        .equ    DP_Q22,         0x5BC3
        .equ    DP_Q21,         0x81C9
        .equ    DP_Q20,         0x7FF2

;-----------------------------------------------------------------------;

        .global _sinh
        .global _sinhl

_sinh:
_sinhl:
        lnk     #4*2                    ; Reserve 4 words scratch space
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *

;------ Get operand type

        rcall   __dtype                 ; (w4) = type(x)

;------ Check for Infinities, NaNs and Zeros

        cp      w4,#FINITETYPE          ; Finite, non-zero ?
        bra     nz,__dunpack2exit       ; No ... return(x) ...

;-----------------------------------------------------------------------;
;       x is finite, non-zero.
;-----------------------------------------------------------------------;

;------ Check for |x| > 1

        bclr    w3,#15                  ; (w3:w0) = |x|
        mov     #DP_ONE3,w7             ; (w7:w4) = +1.0
        mov     #DP_ONE2,w6             ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___ledf2                ; y > 1 ?
        mov.d   w8,w0                   ; (w3:w0) = x
        mov.d   w10,w2                  ; *
        bclr    w3,#15                  ; (w3:w0) = |x|
        bra     le,rational             ; No ... use rational approximation ...

;-----------------------------------------------------------------------;
;       |x| > 1: use exponential function
;-----------------------------------------------------------------------;

        mov     #0x8000,w13             ; (w13) = flag = sinh requested
        rcall   ___sinhcosh             ; (w3:w0) = |result|
        btsc    w11,#15                 ; x < 0 ?
        btg     w3,#15                  ; Yes ... result = -result
        bra     __dunpack2exit          ; Done

;-----------------------------------------------------------------------;
;       |x| <= 1: use rational approximation
;-----------------------------------------------------------------------;
rational:

;------ Ensure that |x| >= EPS

        mov     #DP_EPS3,w7             ; sinh(y) = y for y < EPS
        mov     #DP_EPS2,w6             ; *
        mov     #DP_EPS1,w5             ; *
        mov     #DP_EPS0,w5             ; *
        rcall   ___ltdf2                ; compare y ? eps
        mov.d   w8,w0                   ; (w3:w0) = x
        mov.d   w10,w2                  ; *
        bra     lt,__dunpack2exit       ; f < eps ...

;------ g = x * x

        mov.d   w8,w4                   ; (w7:w4) = x
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0) = x * x
        mov.d   w0,[w14++]              ; Preserve g = x * x
        mov.d   w2,[w14--]              ; *

;------ Q = ((g + Q2) * g + Q1) * g + Q0

        mov     #DP_Q23,w7              ; (w7:w4) = q2
        mov     #DP_Q22,w6              ; *
        mov     #DP_Q21,w5              ; *
        mov     #DP_Q20,w4              ; *
        rcall   ___adddf3               ; g+q2
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (g+q2)*g
        mov     #DP_Q13,w7              ; (w7:w4) = q1
        mov     #DP_Q12,w6              ; *
        mov     #DP_Q11,w5              ; *
        mov     #DP_Q10,w4              ; *
        rcall   ___adddf3               ; (g+q2)*g+q1
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((g+q2)*g+q1)*g
        mov     #DP_Q03,w7              ; (w7:w4) = q0
        mov     #DP_Q02,w6              ; *
        mov     #DP_Q01,w5              ; *
        mov     #DP_Q00,w4              ; *
        rcall   ___adddf3               ; ((g+q2)*g+q1)*g+q0

        mov.d   w0,[w15++]              ; Preserve Q
        mov.d   w2,[w15++]              ; *
        
;------ ((P3 * g + P2) * g + P1) * g + P0

        mov     #DP_P33,w7              ; (w7:w4) = P3
        mov     #DP_P32,w6              ; *
        mov     #DP_P31,w5              ; *
        mov     #DP_P30,w4              ; *
        mov.d   [w14++],w0              ; g
        mov.d   [w14--],w2              ; *
        rcall   ___muldf3               ; (P3*g)
        mov     #DP_P23,w7              ; (w7:w4) = P2
        mov     #DP_P22,w6              ; *
        mov     #DP_P21,w5              ; *
        mov     #DP_P20,w4              ; *
        rcall   ___adddf3               ; (P3*g+P2)
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (P3*g+P2)*g
        mov     #DP_P13,w7              ; (w7:w4) = P1
        mov     #DP_P12,w6              ; *
        mov     #DP_P11,w5              ; *
        mov     #DP_P10,w4              ; *
        rcall   ___adddf3               ; (P3*g+P2)*g+P1
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ((P3*g+P2)*g+P1)*g
        mov     #DP_P03,w7              ; (w7:w4) = P0
        mov     #DP_P02,w6              ; *
        mov     #DP_P01,w5              ; *
        mov     #DP_P00,w4              ; *
        rcall   ___adddf3               ; ((P3*g+P2)*g+P1)*g+P0

;------ R = g * P / Q

        mov.d   [--w15],w6              ; (w7:w4) = Q
        mov.d   [--w15],w4              ; *
        rcall   ___divdf3               ; (w3:w0) = P/Q
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w3:w0) = g * P / Q

;------ result = x + x * R

        mov.d   w8,w4                   ; (w7:w4) = x
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0) = x * R
        mov.d   w8,w4                   ; (w7:w4) = x
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0) = x + x * R
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;

.include "null_signature.s"
