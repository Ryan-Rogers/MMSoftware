;-----------------------------------------------------------------------;
; tanf.s: Floating-point tangent elementary function.
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
; tanf
;
;       Single-precision tangent elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number tangent(x)
;
; Description:
;
;       Computes the tangent of the argument x.
;       
;-----------------------------------------------------------------------;

;
; XMAX: Largest machine number such that tan(x) contains significant digits,
;       and argument reduction won't blow up.
;       XMAX = 2^(24/2) * Pi/2 = 6433.0
;
	.ifdef ffunction
	.section .libm.tanf, code
	.endif	

        LCONST  XMAX,   0x45C90800

;
; EPS: tan(x) = x for |x| < EPS
;       EPS = 2^-12
;
        LCONST  EPS,    0x39800000 

;-----------------------------------------------------------------------;
; Coefficients for the minimax polynomial function approximation.
;-----------------------------------------------------------------------;

        LCONST  P1,     0xBDC433B8
        LCONST  Q0,     0x3F800000
        LCONST  Q1,     0xBEDBB7AF
        LCONST  Q2,     0x3C1F3375

;-----------------------------------------------------------------------;

        .global _tanf

_tanf:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; *

;------ Extract significand & biased exponent

        mov.d   w0,w8           ; (w9:w8)=x
        rcall   __funpack       ; (w4)   =x(Type)
                                ; (w5)   =x(Biased exponent)
                                ; (w1:w0)=x(Significand)
        mov.d   w8,w0           ; (w1:w0)=x

;------ Check for Infinities and NaNs

        cp      w4,#INFTYPE     ; Infinity or NaN ?
        bra     ltu,finite      ; No ...

;------ Infinity or NaN

        bra     nz,isNaN        ; NaN ...

;------ Infinities

        mov     #NaNHI,w1       ; Result is Quiet NaN
        mov     #NaNLO,w0       ; *
isNaN:
        bset    w1,#6           ; Force quiet NaN for result
domainerr:
        mov     #_EDOM,w2       ; Domain error
        mov     w2,_errno       ; *
        bra     return0         ; Error return

;-----------------------------------------------------------------------;
;       x is finite.
;-----------------------------------------------------------------------;

finite:

;------ Ensure that |x| < XMAX

        bclr    w1,#15          ; |x|
        mov     #XMAXLO,w2      ; largest value of |x| with tan(x) in range
        mov     #XMAXHI,w3      ; *
        rcall   ___ltsf2        ; compare x ? xmax
        mov.d   w8,w0           ; x
        bra     lt,argreduction ; |x| < xmax ...

;------ Coarse argument reduction

        mov.w   #PILO,w2        ; Pi
        mov.w   #PIHI,w3        ; *
        rcall   _fmodf          ; (w1:w0) = remainder(x, Pi)
        mov.d   w0,w8           ; (w8:w9) = reduced x

;-----------------------------------------------------------------------;
;       Argument reduction
;-----------------------------------------------------------------------;

argreduction:

;------ n = intrnd(x / (pi/2))

        mov.w   #TWOoverPILO,w2 ; 2/Pi
        mov.w   #TWOoverPIHI,w3 ; *
        rcall   ___mulsf3       ; (w1:w0)= (x / (pi/2))
        mov.w   #HALFLO,w2      ; (w3:w2)= +0.5
        mov.w   #HALFHI,w3      ; *
        btsc    w1,#15          ; x negative ?
        bset    w3,#15          ; Yes ... load -0.5
        rcall   ___addsf3       ; (x / (pi/2)) +/- 0.5
        rcall   ___fixsfsi      ; (w1:w0) = n = intrnd(x / (pi/2))
        mov.w   w0,[w15++]      ; Preserve isOdd(n)

;------ xn = float(n)

        rcall   ___floatsisf    ; (w1:w0)= xn = float(n)

;------ Determine f: f = (x - xn * C1) - xn * C2

        btg     w1,#15          ; -xn
        mov.d   w0,w10          ; (w11:w10)=-xn

        mov.w   #PIOVER2_C1LO,w2; C1
        mov.w   #PIOVER2_C1HI,w3; *
        rcall   ___mulsf3       ; (w1:w0)=(-xn * C1)
        mov.d   w8,w2           ; x
        rcall   ___addsf3       ; (w1:w0)=(x - xn * C1)
        mov.d   w0,[w15++]      ; (x - xn * C1)
        mov.d   w10,w0          ; -xn
        mov.w   #PIOVER2_C2LO,w2; C2
        mov.w   #PIOVER2_C2HI,w3; *
        rcall   ___mulsf3       ; (w1:w0)=(-xn * C2)
        mov.d   [--w15],w2      ; (x - xn * C1)
        rcall   ___addsf3       ; (w1:w0)=(x - xn * C1) - xn * C2
        mov.d   w0,w8           ; (w9:w8)=f

;------ Ensure that |f| >= EPS

        bclr    w1,#15          ; |f|
        mov     #EPSLO,w2       ; tan(f) = f for |f| < EPS
        mov     #EPSHI,w3       ; *
        rcall   ___gesf2        ; compare |f| ? eps
        bra     ge,inrange      ; |f| >= eps ...

;------ tan(x) ~ x or 1/x

        mov.w   #ONELO,w0       ; (w1:w0) = xden = 1.0
        mov.w   #ONEHI,w1       ; *
        bra     determineq      ; Calculate ratio ...

;-----------------------------------------------------------------------;
;       f is in range. Calculate tan(x)
;-----------------------------------------------------------------------;

inrange:

;------ g = f * f

        mov.d   w8,w0           ; (w1:w0) = f
        mov.d   w0,w2           ; f
        rcall   ___mulsf3       ; (w1:w0) = g = f*f
        mov.d   w0,w10          ; (w11:w10) = g

;------ xnum = f * P(g)

        mov.w   #P1LO,w2        ; P1
        mov.w   #P1HI,w3        ; *
        rcall   ___mulsf3       ; (w1:w0)=g * P1
        mov.d   w8,w2           ; (w3:w2)=f
        rcall   ___mulsf3       ; (w1:w0)=(g * P1) * f
        mov.d   w8,w2           ; (w3:w2)=f
        rcall   ___addsf3       ; (w1:w0)=(g * P1) * f + f
        mov.d   w0,w8           ; (w9:w8)=xnum

;------ xden = Q(g)

        mov.d   w10,w0          ; g
        mov.w   #Q2LO,w2        ; Q2
        mov.w   #Q2HI,w3        ; *
        rcall   ___mulsf3       ; (w1:w0)=(g * Q2)
        mov.w   #Q1LO,w2        ; Q1
        mov.w   #Q1HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0)=(g * Q2 + Q1)
        mov.d   w10,w2          ; g
        rcall   ___mulsf3       ; (w1:w0)=(g * Q2 + Q1) * g
        mov.w   #Q0LO,w2        ; Q0
        mov.w   #Q0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0)=(g * Q2 + Q1) * g + Q0

;------ Determine quadrant
        
determineq:

        btss    [--w15],#0      ; isOdd(n) ?
        bra     neven           ; No ...

;------ calculate result = xden / -xnum

        mov.d   w8,w2           ; xnum
        btg     w3,#15          ; -xnum
        bra     ratio           ; Calculate the ratio ...

;------ calculate result = xnum / xden

neven:
        mov.d   w0,w2           ; xden
        mov.d   w8,w0           ; xnum

ratio:
        rcall   ___divsf3       ; (w1:w0) = tan(x)

return0:
        mov.d   [--w15],w10     ; Recover scratch
        mov.d   [--w15],w8      ; *
        return
;-----------------------------------------------------------------------;

.include "null_signature.s"
