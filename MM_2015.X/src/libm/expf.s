;-----------------------------------------------------------------------;
; expf.s: Floating-point exponential elementary function.
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
; expf
;
;       Exponential elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number exp(x)
;
; Description:
;
;       Computes the exponential of the argument x.
;       If the result is too large to be represented, +Infinity
;       is returned, and errno is set to ERANGE.
;       Similarly, if the result is too small to be represented, +0
;       is returned, and errno is set to ERANGE.
;       
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.expf,code
	.endif
        .global _expf

;-----------------------------------------------------------------------;
;
; DMAX: Largest machine number less than ln(NMAX)
;       where NMAX is the largest normalized number [(2-2^-23) * 2^127].
;       DMAX = 88.72283
;
        LCONST  DMAX,   0x42B17217
;
; DMIN: Smallest machine number greater than ln(SMIN)
;       where SMIN is the smallest subnormal (2^-149).
;       DMIN = -103.2789
;
        LCONST  DMIN,   0xC2CE8ECC

;
; EPS: exp(x) = 1.0 for |x| < EPS
;       EPS = 2^-25
;
        LCONST  EPS,    0x33800000

;
; INVLN2:  1/ln(2) = 1.4426950408889634074f
;
        LCONST  INVLN2, 0x3FB8AA3B

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;
; The coefficients from Cody & Waite are:
;
; p0  0.24999999950E+0f 0x3E800000
; p1  0.41602886268E-2f 0x3B885308
; q0  0.50000000000E+0f 0x3F000000
; q1  0.49987178778E-1f 0x3D4CBF5B
;
; The average loss of significant digits is slightly improved
; (from 1.54 to 1.40) if the following coefficients are used.
;
; p0  0.25000000668E+0f 0x3E800000
; p1  0.41604134627E-2f 0x3B885414
; q0  0.50000000000E+0f 0x3F000000
; q1  0.49987433347E-1f 0x3D4CBF9F
;
;-----------------------------------------------------------------------;
;
        LCONST  P0,     0x3E800000
        LCONST  P1,     0x3B885414

        LCONST  Q0,     0x3F000000
        LCONST  Q1,     0x3D4CBF9F

;-----------------------------------------------------------------------;

_expf:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; *
        mov.d   w12,[w15++]     ; *

;------ Extract significand & biased exponent

        mov.d   w0,w8           ; (w9:w8)=x
        rcall   __funpack       ; (w4)   =x(Type)
                                ; (w5)   =x(Biased exponent)
                                ; (w1:w0)=x(Significand)
        mov.d   w8,w0           ; (w1:w0)=x

;------ Check for Infinities and NaNs

        cp      w4,#INFTYPE     ; Infinity or NaN ?
        bra     gtu,return0     ; NaN ... exp(x) = NaN ...
        bra     z,xIsInf        ; Inf ... exp(x) = 0 or Inf ...

;-----------------------------------------------------------------------;
;       x is finite. Ensure that exp(x) is in range
;-----------------------------------------------------------------------;

;------ Ensure that x <= DMAX

        mov     #DMAXLO,w2      ; largest value of x with exp(x) in range
        mov     #DMAXHI,w3      ; *
        rcall   ___gtsf2        ; compare x ? bigx
        bra     gt,overflow     ; x > bigx ...

;------ Ensure that x >= DMIN

        mov.d   w8,w0           ; x
        mov     #DMINLO,w2      ; smallest value of x with exp(x) in range
        mov     #DMINHI,w3      ; *
        rcall   ___ltsf2        ; compare x ? smallx
        bra     lt,underflow    ; x < smallx ...

;------ Ensure that |x| >= EPS

        mov.d   w8,w0           ; x
        bclr    w1,#15          ; |x|
        mov     #EPSLO,w2       ; exp(x) = 1.0 for |x| < EPS
        mov     #EPSHI,w3       ; *
        rcall   ___ltsf2        ; compare |x| ? eps
        bra     lt,tinyarg      ; |x| < eps ...

;-----------------------------------------------------------------------;
;       x is in range. Calculate exp(x)
;-----------------------------------------------------------------------;

;------ n = intrnd(x/ln(2))

        mov.d   w8,w0           ; x
        mov.w   #INVLN2LO,w2    ; 1/ln(2)
        mov.w   #INVLN2HI,w3    ; *
        rcall   ___mulsf3       ; (w1:w0)=(x/ln(2))
        mov.w   #HALFLO,w2      ; 0.5
        mov.w   #HALFHI,w3      ; *
        btsc    w1,#15          ; (x/ln(2)) negative ?
        bset    w3,#15          ; Yes ... load -0.5
        rcall   ___addsf3       ; (x/ln(2)) +/- 0.5
        rcall   ___fixsfsi      ; (w1:w0)=intrnd(x/ln(2))
        mov.d   w0,w10          ; (w11:w10)=n

;------ xn = float(n)

        rcall   ___floatsisf    ; (w1:w0)=float(n)
        btg     w1,#15          ; -xn
        mov.d   w0,w12          ; (w13:w12)=-xn

;------ Determine g: g = (x - xn * C1) - xn * C2

        mov.w   #LN2C1LO,w2     ; C1
        mov.w   #LN2C1HI,w3     ; *
        rcall   ___mulsf3       ; (w1:w0)=(-xn * C1)
        mov.d   w8,w2           ; x
        rcall   ___addsf3       ; (w1:w0)=(x - xn * C1)
        mov.d   w0,[w15++]      ; (x - xn * C1)
        mov.d   w12,w0          ; -xn
        mov.w   #LN2C2LO,w2     ; C2
        mov.w   #LN2C2HI,w3     ; *
        rcall   ___mulsf3       ; (w1:w0)=(-xn * C2)
        mov.d   [--w15],w2      ; (x - xn * C1)
        rcall   ___addsf3       ; (w1:w0)=(x - xn * C1) - xn * C2
        mov.d   w0,w12          ; (w13:w12)=g

;------ z = g * g

        mov.d   w0,w2           ; g
        rcall   ___mulsf3       ; (w1:w0)=g*g
        mov.d   w0,[w15++]      ; z

;------ gP = ((z * p1) + p0) * g

        mov.w   #P1LO,w2        ; P1
        mov.w   #P1HI,w3        ; *
        rcall   ___mulsf3       ; (w1:w0)=(z * p1)
        mov.w   #P0LO,w2        ; P0
        mov.w   #P0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0)=(z * p1) + p0
        mov.d   w12,w2          ; g
        rcall   ___mulsf3       ; (w1:w0)=((z * p1) + p0) * g
        mov.d   w0,w12          ; (w13:w12)=gP

;------ Q = (z * q1) + q0

        mov.d   [--w15],w0      ; z
        mov.w   #Q1LO,w2        ; Q1
        mov.w   #Q1HI,w3        ; *
        rcall   ___mulsf3       ; (w1:w0)=(z * q1)
        mov.w   #Q0LO,w2        ; Q0
        mov.w   #Q0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0)=(z * q1) + q0

;------ R = 0.5 + gP / (Q - gP)

        mov.d   w12,w2          ; gP
        rcall   ___subsf3       ; (w1:w0)=(Q - gP)
        mov.d   w0,w2           ; (Q - gP)
        mov.d   w12,w0          ; gP
        rcall   ___divsf3       ; (w1:w0)=gP / (Q - gP)
        mov.w   #HALFLO,w2      ; 0.5
        mov.w   #HALFHI,w3      ; *
        rcall   ___addsf3       ; (w1:w0)=0.5 + gP / (Q - gP)

;------ result = R x 2^N

        add     w10,#1,w2       ; n+1
        rcall   _ldexpf         ; (w1:w0)=R x 2^N
return0:
        mov.d   [--w15],w12     ; Recover scratch
        mov.d   [--w15],w10     ; *
        mov.d   [--w15],w8      ; *
        return

;-----------------------------------------------------------------------;
;       Errors & and other exceptional occurrences
;-----------------------------------------------------------------------;

;------ Overflow: return +Infinity

overflow:
        mov     #POSINFHI,w1    ; +Infinity
        mov     #POSINFLO,w0    ; *
rangeerr:
        mov     #_ERANGE,w2     ; Range error
        mov     w2,_errno       ; *
        bra     return0         ; Error return

;------ Underflow: return +Zero

underflow:
        mul.uu  w0,#0,w0        ; +Zero
        bra     rangeerr        ; Error return

;------ exp(0) = 1

tinyarg:
        mov     #ONEHI,w1       ; Return exact result: exp(0) = 1
        mov     #ONELO,w0       ; *
        bra     return0         ; Exit

;------ Infinity

xIsInf:
        btst    w9,#15          ; +Infinity ?
        bra     z,return0       ; Yes ... exp(+Infinity) = +Infinity

        mul.uu  w0,#0,w0        ; exp(-Infinity) = 0
        bra     return0         ; return

;-----------------------------------------------------------------------;

.include "null_signature.s"
