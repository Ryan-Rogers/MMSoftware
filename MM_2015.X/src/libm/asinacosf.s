;-----------------------------------------------------------------------;
; asinacosf.s: Floating-point arcsine/arccosine elementary functions.
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
; asinacosf
;
;       Single-precision arcsine or arccosine elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;       (w2)    Function selector: 0=arcsine, 3=arccosine
;
; Output:
;
;       (w1:w0) Floating-point number arcsine(x) or arccosine(x)
;
; Description:
;
;       Computes the arcsine or arccosine of the argument x.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;
; EPS: asin(x) = x for |x| < EPS
;       EPS = 2^-12
;
	.ifdef ffunction
	.section .libm.asinacosf, code
	.endif
        LCONST  EPS,    0x39800000 

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;-----------------------------------------------------------------------;
;
        LCONST  P1,     0x3F6F166B
        LCONST  P2,     0xBF012065
        LCONST  Q0,     0x40B350F0
        LCONST  Q1,     0xC0B18D0B

;-----------------------------------------------------------------------;
        .global __asinacosf

__asinacosf:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; *
        mov.d   w12,[w15++]     ; *

        mov     w2,w12          ; Save function selector
                                ; (w12[0]) = function
                                ; (w12[1]) = i
        btsc    w1,#15          ; x < 0 ?
        bset    w12,#15         ; Yes ... w12[15] = sign(x)

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

returnNaN:
        mov     #NaNHI,w1       ; Result is Quiet NaN
        mov     #NaNLO,w0       ; *
isNaN:
        bset    w1,#6           ; Force quiet NaN for result
domainerr:
        mov     #_EDOM,w2       ; Domain error
        mov     w2,_errno       ; *
        bra     return0         ; Error return

;-----------------------------------------------------------------------;
;       x is finite. Check for domain error.
;-----------------------------------------------------------------------;

finite:
        bclr    w9,#15          ; (w9:w8) = y = |x|

        mov.d   w8,w0           ; (w1:w0)=y
        mov     #ONELO,w2       ; Domain is [-1,1]
        mov     #ONEHI,w3       ; *
        rcall   ___gtsf2        ; compare y ? 1.0
        bra     gt,returnNaN    ; y > 1.0 ... domain error

;-----------------------------------------------------------------------;
;       x is finite and in the domain. 
;-----------------------------------------------------------------------;

;------ Check for y < eps

        mov.d   w8,w0           ; (w1:w0)=y
        mov     #EPSLO,w2       ; asin(y) = y for y < EPS
        mov     #EPSHI,w3       ; *
        rcall   ___ltsf2        ; compare y ? eps
        mov.d   w8,w0           ; (w1:w0)=y
        bra     lt,translate    ; y < eps ...

;------ Check for y > 1/2

        mov.w   #HALFLO,w2      ; 1/2
        mov.w   #HALFHI,w3      ; *
        rcall   ___gtsf2        ; compare y ? 1/2
        bra     gt,argreduce    ; y > 1/2 ...

;-----------------------------------------------------------------------;
;       No argument reduction required
;-----------------------------------------------------------------------;

;------ g = y * y

        mov.d   w8,w0           ; (w1:w0) = y
        mov.d   w8,w2           ; (w3:w2) = y
        rcall   ___mulsf3       ; (w1:w0) = g = y * y
        mov.d   w0,w10          ; (w11:w10) = g
        bra     rapprox         ; Join common processing ...

;-----------------------------------------------------------------------;
;       Argument reduction required
;-----------------------------------------------------------------------;

argreduce:
        btg     w12,#1          ; (w12[1]) = i = 1 - flag

;------ g = (1 - y)/2

        mov.w   #ONELO,w0       ; (w1:w0) = 1.0
        mov.w   #ONEHI,w1       ; *
        mov.d   w8,w2           ; (w3:w2) = y
        rcall   ___subsf3       ; (w1:w0) = 1.0 - y
        mov.w   #HALFLO,w2      ; 1/2
        mov.w   #HALFHI,w3      ; *
        rcall   ___mulsf3       ; (w1:w0) = g = (1 - y)/2
        mov.d   w0,w10          ; (w11:w10) = g

;------ y = -2 * sqrt(g)

        rcall   _sqrtf          ; (w1:w0) = sqrt(g)
        mov.w   #NEGTWOLO,w2    ; -2.0
        mov.w   #NEGTWOHI,w3    ; *
        rcall   ___mulsf3       ; (w1:w0) = y = -2 * sqrt(g)
        mov.d   w0,w8           ; (w9:w8) = y

;-----------------------------------------------------------------------;
;       Rational function approximation
;-----------------------------------------------------------------------;

rapprox:

;------ Q = (g + Q1) * g + Q0

        mov.d   w10,w0          ; (w1:w0) = g
        mov.w   #Q1LO,w2        ; Q1
        mov.w   #Q1HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0) = (g + Q1)
        mov.d   w10,w2          ; (w3:w2) = g
        rcall   ___mulsf3       ; (w1:w0) = (g + Q1) * g
        mov.w   #Q0LO,w2        ; Q0
        mov.w   #Q0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0) = (g + Q1) * g + Q0
        mov.d   w0,[w15++]      ; Q

;------ P = P2 * g + P1

        mov.d   w10,w0          ; (w1:w0) = g
        mov.w   #P2LO,w2        ; P2
        mov.w   #P2HI,w3        ; *
        rcall   ___mulsf3       ; (w1:w0)=(P2 * g)
        mov.w   #P1LO,w2        ; P1
        mov.w   #P1HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0)=(P2 * g) + P1

;------ R = g * P / Q

        mov.d   w10,w2          ; (w1:w0) = g
        rcall   ___mulsf3       ; (w1:w0) = g * P
        mov.d   [--w15],w2      ; (w3:w2) = Q
        rcall   ___divsf3       ; (w1:w0) = g * P / Q

;------ result = y + y * R

        mov.d   w8,w2           ; (w3:w2) = y
        rcall   ___mulsf3       ; (w1:w0) = y * R
        mov.d   w8,w2           ; (w3:w2) = y
        rcall   ___addsf3       ; (w1:w0) = y + y * R

;-----------------------------------------------------------------------;
;       Translation adjustment
;
;       (w1:w0) = tentative result
;       (w8:w9) = y
;-----------------------------------------------------------------------;

translate:

        btsc    w12,#0          ; arccosine required ?
        bra     arccosine       ; Yes ...

;------ acrsine requested

        mov.w   #PIOVER2LO,w2   ; Pi/2
        mov.w   #PIOVER2HI,w3   ; *
        btsc    w12,#1          ; i == 1 ?
        rcall   ___addsf3       ; (w1:w0) = result + Pi/2
        btsc    w12,#15         ; x < 0 ?
        btg     w1,#15          ; Yes ... result = -result
        bra     return0         ; Done ...

;------ arccosine requested

arccosine:

        btsc    w12,#15         ; x < 0 ?
        bra     arccosxneg      ; Yes ...

        btg     w1,#15          ; x >= 0 ... result = -result
        bra     addpiover2      ; result += Pi/2

arccosxneg:
        mov.w   #PILO,w2        ; Pi
        mov.w   #PIHI,w3        ; *
        btss    w12,#1          ; i == 0 ?
        bra     addandexit      ; Yes ... return(result + Pi)
addpiover2:
        mov.w   #PIOVER2LO,w2   ; Pi/2
        mov.w   #PIOVER2HI,w3   ; *
        btsc    w12,#1          ; i == 1 ?
addandexit:
        rcall   ___addsf3       ; (w1:w0) = result + Pi/2

;-----------------------------------------------------------------------;
return0:
        mov.d   [--w15],w12     ; Recover scratch
        mov.d   [--w15],w10     ; *
        mov.d   [--w15],w8      ; *
        return

;-----------------------------------------------------------------------;

.include "null_signature.s"
