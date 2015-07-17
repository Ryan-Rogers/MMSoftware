;-----------------------------------------------------------------------;
; sincosf.s: Floating-point sine/cosine elementary functions.
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
; sincosf
;
;       Single-precision sine or cosine elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;       (w2)    Function selector: 0=sine, -1=cosine
;
; Output:
;
;       (w1:w0) Floating-point number sine(x) or cosine(x)
;
; Description:
;
;       Computes the sine of the argument x.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;
; XMAX: Largest machine number such that sin(x) contains significant digits,
;       and argument reduction won't blow up.
;       XMAX = 2^(24/2) = 12868.0
;
	.ifdef ffunction
	.section .libm.sincosf, code
	.endif

        LCONST  XMAX,   0x46491000 

;
; EPS: sin(x) = x for |x| < EPS
;       EPS = 2^-12
;
        LCONST  EPS,    0x39800000 

;-----------------------------------------------------------------------;
; Coefficients for the minimax polynomial function approximation.
;-----------------------------------------------------------------------;
;
        LCONST  R1,     0xBE2AAAA4 
        LCONST  R2,     0x3C08873E 
        LCONST  R3,     0xB94FB222 
        LCONST  R4,     0x362E9C5B 

;-----------------------------------------------------------------------;
        .global __sincosf

__sincosf:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; *
        mov.d   w12,[w15++]     ; *

        mov     w2,w11          ; Save function selector

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
;       x is finite. Check for zeros
;-----------------------------------------------------------------------;

finite:
        cp      w4,#ZEROTYPE    ; Zero ?
        bra     nz,nonzero      ; No ...

;------ Argument is zero. sin(x)=0, cos(0)=1

        btsc    w11,#0          ; skip if sine requested
        mov     #ONEHI,w1       ; cosine(0) = 1
        bra     return0         ; Exit ...

;-----------------------------------------------------------------------;
;       x is finite and non-zero
;-----------------------------------------------------------------------;
nonzero:

;------ Ensure that |x| < XMAX

        bclr    w1,#15          ; |x|
        mov     #XMAXLO,w2      ; largest value of |x| with sin(x) in range
        mov     #XMAXHI,w3      ; *
        rcall   ___ltsf2        ; compare x ? xmax
        mov.d   w8,w0           ; x
        bra     lt,inrange      ; x < xmax ...

;------ Coarse argument reduction

        mov.w   #TWOPILO,w2     ; 2 Pi
        mov.w   #TWOPIHI,w3     ; *
        rcall   _fmodf          ; (w1:w0) = remainder(x, 2 Pi)
        mov.d   w0,w8           ; (w8:w9) = reduced x

inrange:

;------ Initial sign estimation

        clr     w10             ; (w10)=sign indicator
        btss    w11,#0          ; For cosine, indicator is +ve
        lsr     w1,#15,w10      ; (w10)=sign(x)
        bclr    w1,#15          ; (w1:w0) = |x|
        mov.d   w0,w8           ; (w9:w8) = |x| = y

;-----------------------------------------------------------------------;
;       Argument reduction
;-----------------------------------------------------------------------;

;------ n = intrnd(y/pi)

        mov.w   #INV_PILO,w2    ; 1/Pi
        mov.w   #INV_PIHI,w3    ; *
        rcall   ___mulsf3       ; (w1:w0)= (y/pi)
        clr.w   w2              ; (w2)= LSW(0.5) and LSW(1.0)
        mov.w   #HALFHI,w3      ; (w3:w2)=0.5
        btsc    w11,#0          ; cosine requested ?
        mov.w   #ONEHI,w3       ; (w3:w2)=1.0
        rcall   ___addsf3       ; (y/pi) + 0.5 or 1.0
        rcall   ___fixsfsi      ; (w1:w0)= n = intrnd(y/pi)

;------ Adjust sign if N is negative

        btsc    w0,#0           ; idodd(n) ?
        btg     w10,#0          ; If odd(n), sign = -sign

;------ xn = float(n)

        rcall   ___floatsisf    ; (w1:w0)= xn = float(n)

;------ Adjust multiplier for cosine

        cp0     w11             ; sine requested ?
        bra     z,common        ; Yes ... join common processing ...

        mov.w   #HALFLO,w2      ; (w3:w2)=0.5
        mov.w   #HALFHI,w3      ; (w3:w2)=0.5
        rcall   ___subsf3       ; (w1:w0)=xn -= 0.5
common:

        btg     w1,#15          ; -xn
        mov.d   w0,w12          ; (w13:w12)=-xn

;------ Determine f: f = (|x| - xn * C1) - xn * C2

        mov.w   #PI_C1LO,w2     ; C1
        mov.w   #PI_C1HI,w3     ; *
        rcall   ___mulsf3       ; (w1:w0)=(-xn * C1)
        mov.d   w8,w2           ; |x|
        rcall   ___addsf3       ; (w1:w0)=(|x| - xn * C1)
        mov.d   w0,[w15++]      ; (|x| - xn * C1)
        mov.d   w12,w0          ; -xn
        mov.w   #PI_C2LO,w2     ; C2
        mov.w   #PI_C2HI,w3     ; *
        rcall   ___mulsf3       ; (w1:w0)=(-xn * C2)
        mov.d   [--w15],w2      ; (|x| - xn * C1)
        rcall   ___addsf3       ; (w1:w0)=(|x| - xn * C1) - xn * C2
        mov.d   w0,w8           ; (w9:w8)=f

;------ Ensure that |f| >= EPS

        bclr    w1,#15          ; |f|
        mov     #EPSLO,w2       ; sin(f) = f for |f| < EPS
        mov     #EPSHI,w3       ; *
        rcall   ___ltsf2        ; compare |f| ? eps
        mov.d   w8,w0           ; (w1:w0) = f
        bra     lt,signresult   ; |f| < eps ...

;-----------------------------------------------------------------------;
;       f is in range. Calculate sin(x)
;-----------------------------------------------------------------------;

;------ g = f * f

        mov.d   w0,w2           ; f
        rcall   ___mulsf3       ; (w1:w0)=f*f
        mov.d   w0,w12          ; g

;------ R = (((R4 * g + R3) * g + R2) * g + R1) * g

        mov.w   #R4LO,w2        ; R4
        mov.w   #R4HI,w3        ; *
        rcall   ___mulsf3       ; (w1:w0)=(R4 * g)
        mov.w   #R3LO,w2        ; R3
        mov.w   #R3HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0)=(R4 * g + R3)
        mov.d   w12,w2          ; g
        rcall   ___mulsf3       ; (w1:w0)=((R4 * g + R3) * g)
        mov.w   #R2LO,w2        ; R2
        mov.w   #R2HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0)=((R4 * g + R3) * g) + R2
        mov.d   w12,w2          ; g
        rcall   ___mulsf3       ; (w1:w0)=(((R4 * g + R3) * g) + R2) * g
        mov.w   #R1LO,w2        ; R1
        mov.w   #R1HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0)=((((R4 * g + R3) * g) + R2) * g) + R1
        mov.d   w12,w2          ; g
        rcall   ___mulsf3       ; (w1:w0)=(((((R4 *g +R3) *g) +R2) *g) +R1)*g

;------ Result = f + f * R

        mov.d   w8,w2           ; (w3:w2)=f
        rcall   ___mulsf3       ; (w1:w0)=f * R
        mov.d   w8,w2           ; (w3:w2)=f
        rcall   ___addsf3       ; (w1:w0)=f + f * R
        
signresult:
        btsc    w10,#0          ; Negate the result ?
        btg     w1,#15          ; Yes ... result = -result
return0:
        mov.d   [--w15],w12     ; Recover scratch
        mov.d   [--w15],w10     ; *
        mov.d   [--w15],w8      ; *
        return

;-----------------------------------------------------------------------;

.include "null_signature.s"
