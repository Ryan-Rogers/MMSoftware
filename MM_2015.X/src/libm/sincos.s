;-----------------------------------------------------------------------;
; sincos.s: Floating-point sine/cosine elementary functions.
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
; sincos
;
;       Double-precision sine or cosine elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;       (w4)    Function selector: 1=sine, 0=cosine
;
; Output:
;
;       (w3:w0) Floating-point number sine(x) or cosine(x)
;
; Description:
;
;       Computes the sine or cosine of the argument x.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;
; XMAX: Largest machine number such that sin(x) contains significant
;       digits, and argument reduction won't blow up.
;       XMAX = Floor[Pi * 2^(53/2)] = 298156826.0
;
	.ifdef ffunction
	.section .libm.sincos, code
	.endif
        .equ    DP_XMAX3,       0x41B1
        .equ    DP_XMAX2,       0xC583
        .equ    DP_XMAX1,       0x1A00
        .equ    DP_XMAX0,       0x0000

;
; EPS: sin(x) = x for |x| < EPS
;       EPS = 2^-(53/2)
;
        .equ    DP_EPS3,        0x3E46
        .equ    DP_EPS2,        0xA09E
        .equ    DP_EPS1,        0x667F
        .equ    DP_EPS0,        0x3BCD

;-----------------------------------------------------------------------;
; Coefficients for the minimax polynomial function approximation.
;-----------------------------------------------------------------------;
;
        .equ    DP_R13,         0xBFC5
        .equ    DP_R12,         0x5555
        .equ    DP_R11,         0x5555
        .equ    DP_R10,         0x5555

        .equ    DP_R23,         0x3F81
        .equ    DP_R22,         0x1111
        .equ    DP_R21,         0x1111
        .equ    DP_R20,         0x10B0

        .equ    DP_R33,         0xBF2A
        .equ    DP_R32,         0x01A0
        .equ    DP_R31,         0x1A01
        .equ    DP_R30,         0x3E1A

        .equ    DP_R43,         0x3EC7
        .equ    DP_R42,         0x1DE3
        .equ    DP_R41,         0xA524
        .equ    DP_R40,         0xF063

        .equ    DP_R53,         0xBE5A
        .equ    DP_R52,         0xE645
        .equ    DP_R51,         0x4B5D
        .equ    DP_R50,         0xC0AB

        .equ    DP_R63,         0x3DE6
        .equ    DP_R62,         0x123C
        .equ    DP_R61,         0x686A
        .equ    DP_R60,         0xD430

        .equ    DP_R73,         0xBD6A
        .equ    DP_R72,         0xE420
        .equ    DP_R71,         0xDC08
        .equ    DP_R70,         0x499C

        .equ    DP_R83,         0x3CE8
        .equ    DP_R82,         0x80FF
        .equ    DP_R81,         0x6993
        .equ    DP_R80,         0xDF95

;-----------------------------------------------------------------------;
        .global __sincos

__sincos:
        lnk     #4*2                    ; Reserve 4 words scratch space
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        mov     w4,w12                  ; Save function selector

        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *

;------ Get operand type

        rcall   __dtype                 ; (w4) = type(x)

;------ Check for Infinities and NaNs

        cp      w4,#INFTYPE             ; Infinity or NaN ?
        bra     gtu,xIsNaN              ; NaN ...
        bra     z,xIsInf                ; Inf ...

;-----------------------------------------------------------------------;
;       x is finite. Check for zeros
;-----------------------------------------------------------------------;

        cp      w4,#ZEROTYPE            ; Zero ?
        bra     z,xIsZero               ; Yes ...

;-----------------------------------------------------------------------;
;       x is finite and non-zero
;-----------------------------------------------------------------------;

;------ Ensure that |x| < XMAX

        bclr    w3,#15                  ; |x|
        mov     #DP_XMAX3,w7            ; largest |x| with sin(x) in range
        mov     #DP_XMAX2,w6            ; *
        mov     #DP_XMAX1,w5            ; *
        mov     #DP_XMAX0,w4            ; *
        rcall   ___ltdf2                ; compare x ? xmax
        mov.d   w8,w0                   ; x
        mov.d   w10,w2                  ; *
        bra     lt,inrange              ; x < xmax ...

;------ Coarse argument reduction

        mov.w   #DP_TWOPI3,w7           ; 2 Pi
        mov.w   #DP_TWOPI2,w6           ; *
        mov.w   #DP_TWOPI1,w5           ; *
        mov.w   #DP_TWOPI0,w4           ; *
        rcall   _fmod                   ; (w3:w0) = remainder(x, 2 Pi)
        mov.d   w0,w8                   ; (w11:w8) = reduced x
        mov.d   w2,w10                  ; *

inrange:

;------ Initial sign estimation

        clr     w13                     ; (w13)=sign indicator
        btsc    w12,#0                  ; For cosine, sign indicator is +ve
        lsr     w3,#15,w13              ; (w13)=sign(x)
        bclr    w3,#15                  ; (w3:w0) = |x|
        bclr    w11,#15                 ; (w11:w8) = |x|

;-----------------------------------------------------------------------;
;       Argument reduction
;-----------------------------------------------------------------------;

;------ n = intrnd(y/pi)

        mov.w   #DP_INV_PI3,w7          ; 1/Pi
        mov.w   #DP_INV_PI2,w6          ; *
        mov.w   #DP_INV_PI1,w5          ; *
        mov.w   #DP_INV_PI0,w4          ; *
        rcall   ___muldf3               ; (w3:w0)= (y/pi)
        mul.uu  w4,#0,w4                ; (w6:w4)= LSWs(0.5) and LSWs(1.0)
        clr.w   w6                      ; *
        mov.w   #DP_HALF3,w7            ; (w7:w4)=0.5
        btss    w12,#0                  ; cosine requested ?
        mov.w   #DP_ONE3,w7             ; (w7:w4)=1.0
        rcall   ___adddf3               ; (y/pi) + 0.5 or 1.0
        rcall   ___fixdfsi              ; (w1:w0)= n = intrnd(y/pi)

;------ Adjust sign if N is negative

        btsc    w0,#0                   ; idodd(n) ?
        btg     w13,#0                  ; If odd(n), sign = -sign

;------ xn = float(n)

        rcall   ___floatsidf            ; (w3:w0)= xn = float(n)

;------ Adjust multiplier for cosine

        cp0     w12                     ; sine requested ?
        bra     nz,common               ; Yes ... join common processing ...

        mov.w   #DP_HALF3,w7            ; (w7:w4)=0.5
        mov.w   #DP_HALF2,w6            ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___subdf3               ; (w3:w0)=xn -= 0.5
common:

        btg     w3,#15                  ; -xn
        mov.d   w0,[w14++]              ; Preserve -xn
        mov.d   w2,[w14--]              ; *

;------ Determine f: f = (|x| - xn * C1) - xn * C2

        mov.w   #DP_PI_C13,w7           ; C1
        mov.w   #DP_PI_C12,w6           ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___muldf3               ; (w3:w0)=(-xn * C1)
        mov.d   w8,w4                   ; |x|
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0)=(|x| - xn * C1)
        mov.d   w0,[w15++]              ; (|x| - xn * C1)
        mov.d   w2,[w15++]              ; *
        mov.d   [w14++],w0              ; -xn 
        mov.d   [w14--],w2              ; *
        mov.w   #DP_PI_C23,w7           ; C2
        mov.w   #DP_PI_C22,w6           ; *
        mov.w   #DP_PI_C21,w5           ; *
        mov.w   #DP_PI_C20,w4           ; *
        rcall   ___muldf3               ; (w3:w0)=(-xn * C2)
        mov.d   [--w15],w6              ; (|x| - xn * C1)
        mov.d   [--w15],w4              ; *
        rcall   ___adddf3               ; (w3:w0)=(|x| - xn * C1) - xn * C2
        mov.d   w0,w8                   ; (w11:w8)=f
        mov.d   w2,w10                  ; *

;------ Ensure that |f| >= EPS

        bclr    w3,#15                  ; |f|
        mov     #DP_EPS3,w7             ; sin(f) = f for |f| < EPS
        mov     #DP_EPS2,w6             ; *
        mov     #DP_EPS1,w5             ; *
        mov     #DP_EPS0,w4             ; *
        rcall   ___ltdf2                ; compare |f| ? eps
        mov.d   w8,w0                   ; (w3:w0) = f
        mov.d   w10,w2                  ; *
        bra     lt,signresult           ; |f| < eps ...

;-----------------------------------------------------------------------;
;       f is in range. Calculate sin(x)
;-----------------------------------------------------------------------;

;------ g = f * f

        mov.d   w0,w4                   ; f
        mov.d   w2,w6                   ; *
        rcall   ___muldf3               ; (w1:w0)=f*f
        mov.d   w0,[w14++]              ; g
        mov.d   w2,[w14--]              ; *

;------ R = (((((((R8*g+R7)*g+R6)*g+R5)*g+R4)*g+R3)*g+R2)*g+R1)*g

        mov.w   #DP_R83,w7              ; R8
        mov.w   #DP_R82,w6              ; *
        mov.w   #DP_R81,w5              ; *
        mov.w   #DP_R80,w4              ; *
        rcall   ___muldf3               ; (R8*g)

        mov.w   #DP_R73,w7              ; R7
        mov.w   #DP_R72,w6              ; *
        mov.w   #DP_R71,w5              ; *
        mov.w   #DP_R70,w4              ; *
        rcall   ___adddf3               ; ... +R7
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ... +R7)*g

        mov.w   #DP_R63,w7              ; R6
        mov.w   #DP_R62,w6              ; *
        mov.w   #DP_R61,w5              ; *
        mov.w   #DP_R60,w4              ; *
        rcall   ___adddf3               ; ... +R6
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ... +R6)*g

        mov.w   #DP_R53,w7              ; R5
        mov.w   #DP_R52,w6              ; *
        mov.w   #DP_R51,w5              ; *
        mov.w   #DP_R50,w4              ; *
        rcall   ___adddf3               ; ... +R5
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ... +R5)*g

        mov.w   #DP_R43,w7              ; R4
        mov.w   #DP_R42,w6              ; *
        mov.w   #DP_R41,w5              ; *
        mov.w   #DP_R40,w4              ; *
        rcall   ___adddf3               ; ... +R4
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ... +R4)*g

        mov.w   #DP_R33,w7              ; R3
        mov.w   #DP_R32,w6              ; *
        mov.w   #DP_R31,w5              ; *
        mov.w   #DP_R30,w4              ; *
        rcall   ___adddf3               ; ... +R3
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ... +R3)*g

        mov.w   #DP_R23,w7              ; R2
        mov.w   #DP_R22,w6              ; *
        mov.w   #DP_R21,w5              ; *
        mov.w   #DP_R20,w4              ; *
        rcall   ___adddf3               ; ... +R2
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ... +R2)*g

        mov.w   #DP_R13,w7              ; R1
        mov.w   #DP_R12,w6              ; *
        mov.w   #DP_R11,w5              ; *
        mov.w   #DP_R10,w4              ; *
        rcall   ___adddf3               ; ... +R1
        mov.d   [w14++],w4              ; g
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; ... +R1)*g

;------ Result = f + f * R

        mov.d   w8,w4                   ; (w7:w4)=f
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0)=f * R
        mov.d   w8,w4                   ; (w7:w4)=f
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0)=f + f * R
        
signresult:
        btsc    w13,#0                  ; Negate the result ?
        btg     w3,#15                  ; Yes ... result = -result
return0:
        bra     __dunpack2exit          ; Destroy frame and return ...
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;

;------ Argument is zero. sin(x)=0, cos(0)=1

xIsZero:
        btss    w12,#0                  ; skip if sine requested
        mov     #DP_ONE3,w3             ; cosine(0) = 1
        bra     __dunpack2exit          ; Destroy frame and return ...

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
