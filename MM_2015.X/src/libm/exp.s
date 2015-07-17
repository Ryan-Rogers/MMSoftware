;-----------------------------------------------------------------------;
; exp.s: Floating-point exponential elementary function.
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
; exp
;
;       Exponential elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;
; Output:
;
;       (w3:w0) Floating-point number exp(x)
;
; Description:
;
;       Computes the exponential of the argument x.
;       If the result is too large to be represented, +Infinity
;       is returned, and errno is set to ERANGE.
;       Similarly, if the result is too small to be reprsented, +0
;       is returned, and errno is set to ERANGE.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;
; DMAX: Largest machine number less than ln(NMAX)
;       where NMAX is the largest normalized number.
;       DMAX = 709.78271289
;
	.ifdef ffunction
	.section .libm.exp, code
	.endif
        .equ    DP_DMAX3,       0x4086
        .equ    DP_DMAX2,       0x2E42
        .equ    DP_DMAX1,       0xFEFA
        .equ    DP_DMAX0,       0x39EF
;
; DMIN: Smallest machine number greater than ln(SMIN)
;       where SMIN is the smallest subnormal.
;       DMIN = -744.44007192
;
        .equ    DP_DMIN3,       0xC087
        .equ    DP_DMIN2,       0x4385
        .equ    DP_DMIN1,       0x446D
        .equ    DP_DMIN0,       0x71C3

;
; EPS: exp(x) = 1.0 for |x| < EPS
;       EPS = 2^-54
;
        .equ    DP_EPS3,        0x3C90
        .equ    DP_EPS2,        0x0000
        .equ    DP_EPS1,        0x0000
        .equ    DP_EPS0,        0x0000

;
; INVLN2:  1/ln(2) = 1.4426950408889634074
;
        .equ    DP_INVLN23,     0x3FF7
        .equ    DP_INVLN22,     0x1547
        .equ    DP_INVLN21,     0x652B
        .equ    DP_INVLN20,     0x82FE

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;
;-----------------------------------------------------------------------;
;
        .equ    DP_P03,         0x3FD0
        .equ    DP_P02,         0x0000
        .equ    DP_P01,         0x0000
        .equ    DP_P00,         0x0000

        .equ    DP_P13,         0x3F7C
        .equ    DP_P12,         0x70E4
        .equ    DP_P11,         0x6FB3
        .equ    DP_P10,         0xF6E0

        .equ    DP_P23,         0x3EF1
        .equ    DP_P22,         0x52A4
        .equ    DP_P21,         0x6F58
        .equ    DP_P20,         0xDC1C

        .equ    DP_Q03,         0x3FE0
        .equ    DP_Q02,         0x0000
        .equ    DP_Q01,         0x0000
        .equ    DP_Q00,         0x0000

        .equ    DP_Q13,         0x3FAC
        .equ    DP_Q12,         0x718E
        .equ    DP_Q11,         0x7142
        .equ    DP_Q10,         0x51B3

        .equ    DP_Q23,         0x3F40
        .equ    DP_Q22,         0x3F99
        .equ    DP_Q21,         0x6FDE
        .equ    DP_Q20,         0x3809

;-----------------------------------------------------------------------;

        .global _exp
        .global _expl

_exp:
_expl:
        lnk     #4*2                    ; Reserve 4 words scratch space
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;------ Get operand type

        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *

        rcall   __dtype                 ; (w4) = type(x)

;------ Check for Infinities and NaNs

        cp      w4,#INFTYPE             ; Infinity or NaN ?
        bra     gtu,__dunpack2exit      ; NaN ... exp(x) = NaN ...
        bra     z,xIsInf                ; Inf ... exp(x) = 0 or Inf ...

;-----------------------------------------------------------------------;
;       x is finite. Ensure that exp(x) is in range
;-----------------------------------------------------------------------;

;------ Ensure that x <= DMAX

        mov     #DP_DMAX3,w7            ; largest x with exp(x) in range
        mov     #DP_DMAX2,w6            ; *
        mov     #DP_DMAX1,w5            ; *
        mov     #DP_DMAX0,w4            ; *
        rcall   ___gtdf2                ; compare x ? bigx
        bra     gt,overflow             ; x > bigx ...

;------ Ensure that x >= DMIN

        mov.d   w8,w0                   ; x
        mov.d   w10,w2                  ; *
        mov     #DP_DMIN3,w7            ; smallest x with exp(x) in range
        mov     #DP_DMIN2,w6            ; *
        mov     #DP_DMIN1,w5            ; *
        mov     #DP_DMIN0,w4            ; *
        rcall   ___ltdf2                ; compare x ? smallx
        bra     lt,underflow            ; x < smallx ...

;------ Ensure that |x| >= EPS

        mov.d   w8,w0                   ; x
        mov.d   w10,w2                  ; *
        bclr    w3,#15                  ; |x|
        mov     #DP_EPS3,w7             ; exp(x) = 1.0 for |x| < EPS
        mov     #DP_EPS2,w6             ; *
        mov     #DP_EPS1,w5             ; *
        mov     #DP_EPS0,w4             ; *
        rcall   ___ltdf2                ; compare |x| ? eps
        bra     lt,tinyarg              ; |x| < eps ...

;-----------------------------------------------------------------------;
;       x is in range. Calculate exp(x)
;-----------------------------------------------------------------------;

;------ n = intrnd(x/ln(2))

        mov.d   w8,w0                   ; x
        mov.d   w10,w2                  ; *
        mov     #DP_INVLN23,w7          ; 1/ln(2)
        mov     #DP_INVLN22,w6          ; *
        mov     #DP_INVLN21,w5          ; *
        mov     #DP_INVLN20,w4          ; *
        rcall   ___muldf3               ; (w3:w0)=(x/ln(2))
        mov     #DP_HALF3,w7            ; 0.5
        mov     #DP_HALF2,w6            ; *
        mul.uu  w4,#0,w4                ; *
        btsc    w3,#15                  ; (x/ln(2)) negative ?
        bset    w7,#15                  ; Yes ... load -0.5
        rcall   ___adddf3               ; (x/ln(2)) +/- 0.5
        rcall   ___fixdfsi              ; (w3:w0)=intrnd(x/ln(2))
        mov.d   w0,w12                  ; (w13:w12)=n

;------ xn = float(n)

        rcall   ___floatsidf            ; (w3:w0)=float(n)
        btg     w3,#15                  ; -xn
        mov.d   w0,[w14++]              ; Preserve -xn
        mov.d   w2,[w14--]              ; *

;------ Determine g: g = (x - xn * C1) - xn * C2

        mov     #DP_LN2C13,w7           ; C1
        mov     #DP_LN2C12,w6           ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___muldf3               ; (w3:w0)=(-xn * C1)
        mov.d   w8,w4                   ; x
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0)=(x - xn * C1)
        mov.d   w0,[w15++]              ; Preserve (x - xn * C1)
        mov.d   w2,[w15++]              ; *
        mov.d   [w14++],w0              ; -xn
        mov.d   [w14--],w2              ; *
        mov     #DP_LN2C23,w7           ; C2
        mov     #DP_LN2C22,w6           ; *
        mov     #DP_LN2C21,w5           ; *
        mov     #DP_LN2C20,w4           ; *
        rcall   ___muldf3               ; (w3:w0)=(-xn * C2)
        mov.d   [--w15],w6              ; (x - xn * C1)
        mov.d   [--w15],w4              ; *
        rcall   ___adddf3               ; (w3:w0)=(x - xn * C1) - xn * C2
        mov.d   w0,[w15++]              ; Preserve g
        mov.d   w2,[w15++]              ; *

;------ z = g * g

        mov.d   w0,w4                   ; g
        mov.d   w2,w6                   ; *
        rcall   ___muldf3               ; (w1:w0)=g*g
        mov.d   w0,[w14++]              ; Preserve z
        mov.d   w2,[w14--]              ; *

;------ (p0 + z * (p1 + z * p2)) * g

        mov     #DP_P23,w7              ; P2
        mov     #DP_P22,w6              ; *
        mov     #DP_P21,w5              ; *
        mov     #DP_P20,w4              ; *
        rcall   ___muldf3               ; (w3:w0)=z*p2

        mov     #DP_P13,w7              ; P1
        mov     #DP_P12,w6              ; *
        mov     #DP_P11,w5              ; *
        mov     #DP_P10,w4              ; *
        rcall   ___adddf3               ; (w3:w0)=(p1+z*p2)

        mov.d   [w14++],w4              ; z
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w3:w0)=z*(p1+z*p2)

        mov     #DP_P03,w7              ; P0
        mov     #DP_P02,w6              ; *
        mov     #DP_P01,w5              ; *
        mov     #DP_P00,w4              ; *
        rcall   ___adddf3               ; (w3:w0)=(p0+z*(p1+z*p2))

        mov.d   [--w15],w6              ; g
        mov.d   [--w15],w4              ; *
        rcall   ___muldf3               ; (w3:w0)=(p0+z*(p1+z*p2))*g

        mov.d   w0,[w15++]              ; Preserve gP
        mov.d   w2,[w15++]              ; *

;------ Q = q0 + z * (q1 + z * q2)

        mov.d   [w14++],w0              ; z
        mov.d   [w14--],w2              ; *
        mov     #DP_Q23,w7              ; Q2
        mov     #DP_Q22,w6              ; *
        mov     #DP_Q21,w5              ; *
        mov     #DP_Q20,w4              ; *
        rcall   ___muldf3               ; (w3:w0)=z*q2

        mov     #DP_Q13,w7              ; Q1
        mov     #DP_Q12,w6              ; *
        mov     #DP_Q11,w5              ; *
        mov     #DP_Q10,w4              ; *
        rcall   ___adddf3               ; (w3:w0)=(q1+z*q2)

        mov.d   [w14++],w4              ; z
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w3:w0)=z*(q1+z*q2)

        mov     #DP_Q03,w7              ; Q0
        mov     #DP_Q02,w6              ; *
        mov     #DP_Q01,w5              ; *
        mov     #DP_Q00,w4              ; *
        rcall   ___adddf3               ; (w3:w0)=q0+z*(q1+z*q2)

;------ R = 0.5 + gP / (Q - gP)

        mov     [w15-2],w7              ; gP
        mov     [w15-4],w6              ; *
        mov     [w15-6],w5              ; *
        mov     [w15-8],w4              ; *
        rcall   ___subdf3               ; (w3:w0)=(Q - gP)
        mov.d   w0,w4                   ; (Q - gP)
        mov.d   w2,w6                   ; *
        mov.d   [--w15],w2              ; gP
        mov.d   [--w15],w0              ; *
        rcall   ___divdf3               ; (w3:w0)=gP / (Q - gP)
        mov     #DP_HALF3,w7            ; 0.5
        mov     #DP_HALF2,w6            ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___adddf3               ; (w3:w0)=0.5 + gP / (Q - gP)

;------ result = R x 2^N

        add     w12,#1,w4               ; n+1
        rcall   _ldexp                  ; (w3:w0)=R x 2^N
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;
;       Errors and other exceptional occurrences
;-----------------------------------------------------------------------;

;------ Overflow: return +Infinity

overflow:
        mov     #DP_POSINF3,w3          ; +Infinity
rangeerr:
        mov     #_ERANGE,w2             ; Range error
        mov     w2,_errno               ; *
zerolsws:
        clr     w2                      ; Clear 2 lsw of result
        mul.uu  w0,#0,w0                ; *
        bra     __dunpack2exit          ; Destroy frame and return ...

;------ Underflow: return +Zero

underflow:
        clr     w3                      ; +Zero
        bra     rangeerr                ; Error return

;------ exp(0) = 1

tinyarg:
        mov     #DP_ONE3,w3             ; Return exact result: exp(0) = 1
        bra     zerolsws                ; Exit

;------ Infinity

xIsInf:
        btst    w3,#15                  ; +Infinity ?
        bra     z,__dunpack2exit        ; Yes ... exp(+Infinity) = +Infinity

        clr     w3                      ; exp(-Infinity) = 0
        bra     zerolsws                ; Exit

;-----------------------------------------------------------------------;

.include "null_signature.s"
