;-----------------------------------------------------------------------;
; pow.s: Floating-point power elementary function.
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
; pow
;
;       Double-precision power elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;       (w7:w4) Floating-point number y
;
; Output:
;
;       (w3:w0) Floating-point number x^y
;
; Description:
;
;       Computes the power x^y.
;       If the result is too large to be represented, +Infinity
;       is returned, and errno is set to ERANGE.
;       Similarly, if the result is too small to be reprsented, +0
;       is returned, and errno is set to ERANGE.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
; Extra type bits for encoding integral state of an operand
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.pow, code
	.endif

        .equ    ODDBIT,3                ; operand y is an odd integer
        .equ    EVENBIT,4               ; operand y is an even integer
        .equ    INTBIT,5                ; operand y is an integer
        .equ    OFLOWBIT,12             ; x^y overflowed
        .equ    XGTONEBIT,13            ; operand |x| > 1
        .equ    YNEGBIT,14              ; operand y is negative
        .equ    XNEGBIT,15              ; operand x is negative
        .equ    INTMSK,(1<<INTBIT)
        .equ    ODDMSK,(1<<ODDBIT)
        .equ    EVENMSK,(1<<EVENBIT)
;-----------------------------------------------------------------------;

        .equ    MMAX,DBL_EMAX
        .equ    NMAX,32767

;-----------------------------------------------------------------------;
;       Stack frame
;-----------------------------------------------------------------------;

        .equ    F_OFF,  0               ; f
        .equ    F_OFF0, F_OFF+0
        .equ    F_OFF1, F_OFF+2
        .equ    F_OFF2, F_OFF+4
        .equ    F_OFF3, F_OFF+6
        .equ    M_OFF,  8               ; m
        .equ    K_OFF,  10              ; k
        .equ    FLG_OFF,12              ; flags
        .equ    Kf_OFF, 14              ; kf
        .equ    Kf_OFF0,Kf_OFF+0
        .equ    Kf_OFF1,Kf_OFF+2
        .equ    Kf_OFF2,Kf_OFF+4
        .equ    Kf_OFF3,Kf_OFF+6
        .equ    Nf_OFF, 22              ; nf
        .equ    Nf_OFF0,Nf_OFF+0
        .equ    Nf_OFF1,Nf_OFF+2
        .equ    Nf_OFF2,Nf_OFF+4
        .equ    Nf_OFF3,Nf_OFF+6
        .equ    FRMSZ,  30              ; Frame size

;-----------------------------------------------------------------------;

        .global _pow
        .global _powl

_pow:
_powl:
        lnk     #FRMSZ                  ; Establish the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        mov.d   w4,w8                   ; (w11:w8) = y
        mov.d   w6,w10                  ; *
        mov.d   w0,[w14++]              ; Preserve x
        mov.d   w2,[w14--]              ; *

;------ Get operand types

        rcall   __dtype                 ; (w4) = type(x)
        mov     w4,w12                  ; (w12)= type(x)

        mov.d   w8,w0                   ; (w3:w0) = y
        mov.d   w10,w2                  ; *
        rcall   __dtype                 ; (w4) = type(y)
        mov     w4,w13                  ; (w13)= type(y)

;-----------------------------------------------------------------------;
;       Determine if y is an integer, and if so, its parity
;-----------------------------------------------------------------------;

        mov.w   #0,w4                   ; (w4) = k
        rcall   __dchop                 ; isInteger(y) ?
        bra     nz,endintchk            ; No ...

;------ y is an integer

        ior     #INTMSK|ODDMSK,w13      ; Indicate y is an (odd) integer
        mov     #1,w4                   ; (w4) = k
        rcall   __dchop                 ; isOdd(y) ?
        bra     nz,endintchk            ; y is odd ...
        xor     w13,#ODDMSK|EVENMSK,w13 ; y is even
endintchk:

;-----------------------------------------------------------------------;
;       If y == 1, the result is x
;-----------------------------------------------------------------------;

        mov.d   w8,w4                   ; (w7:w4) = y
        mov.d   w10,w6                  ; *
        rcall   compareone              ; y == 1.0 ?
        mov.d   [w14++],w0              ; (w3:w0) = x
        mov.d   [w14--],w2              ; *
        bra     z,__dunpack2exit        ; Yes ... result = x

        btsc    w11,#15                 ; isNegative(y) ?
        bset    w13,#YNEGBIT            ; Yes ... record the fact
        btsc    w3,#15                  ; isNegative(x) ?
        bset    w13,#XNEGBIT            ; Yes ... record the fact

;-----------------------------------------------------------------------;
;       If x == +1 or y == 0, the result is +1
;-----------------------------------------------------------------------;

        btst    w13,#ZEROBIT            ; y == 0 ?
        bra     nz,returnone            ; Yes ... result = +1
        
        mov.d   [w14++],w4              ; (w7:w4) = x
        mov.d   [w14--],w6              ; *
        bclr    w7,#15                  ; (w7:w4) = f = |x|
        mov     w7,[w14+F_OFF3]         ; Preserve f

        rcall   compareone              ; x == +1.0 ?
        btss    w13,#XNEGBIT            ; *
        bra     z,returnone             ; Yes ...
        bra     gt,checkNaN             ; 1 > |x| ...
        bset    w13,#XGTONEBIT          ; |x| > 1 ... record the fact

;-----------------------------------------------------------------------;
;       If either operand is NaN, the result is NaN
;-----------------------------------------------------------------------;
        
checkNaN:
        ior.b   w12,w13,[w15]           ; isNaN(x) || isNaN(y) ?
        bra     n,__dreturnNaN          ; Yes ... result is NaN ...
        
;-----------------------------------------------------------------------;
;       Check x for other special values: zero and infinity
;-----------------------------------------------------------------------;

        mul.uu  w0,#0,w0                ; Assume result is zero
        mul.uu  w2,#0,w2                ; *

        cp      w12,#FINITETYPE         ; isFinite(x) ?
        bra     ltu,xIsZero             ; x is zero ...
        bra     gtu,xIsInfinite         ; x is an infinity ...

;-----------------------------------------------------------------------;
;       Check y for other special values: infinity
;-----------------------------------------------------------------------;

        btst    w13,#INFBIT             ; isInfinite(y) ?
        bra     nz,yIsInfinite          ; Yes ...

;-----------------------------------------------------------------------;
;       Check for x negative and y not an integer
;-----------------------------------------------------------------------;

        btst    w13,#XNEGBIT            ; isNegative(x) ?
        bra     z,finiteargs            ; No ...
        btst    w13,#INTBIT             ; isInteger(y) ?
        bra     z,complexpow            ; No ...

;------ (x < 0) && isInteger(y)

        mov.d   [w14++],w4              ; (w7:w4) = |x|
        mov.d   [w14--],w6              ; *
        rcall   compareone              ; x == -1 ?
        mov.d   [w14++],w0              ; (w3:w0) = |x|
        mov.d   [w14--],w2              ; *
        bra     z,negifodd              ; (x == -1) && isInteger(y) ...

;-----------------------------------------------------------------------;
;       Finite arguments: calculate x^y
;-----------------------------------------------------------------------;
finiteargs:

;-----------------------------------------------------------------------;
;       Determine f and k such that f = |x| * 2^k
;-----------------------------------------------------------------------;

        mov.d   [w14++],w0              ; (w3:w0) = |x|
        mov.d   [w14--],w2              ; *
        add     w14,#K_OFF,w4           ; (w4) = &k
        rcall   _frexp                  ; Determine f and k
        mov.d   w0,[w14++]              ; Preserve f
        mov.d   w2,[w14--]              ; *

;-----------------------------------------------------------------------;
;       Determine if the result should be negated
;-----------------------------------------------------------------------;

;------ Negate result if f negative and y is an odd integer

        btsc    w13,#XNEGBIT            ; isNegative(f) ?
        btss    w13,#ODDBIT             ; y an odd integer ?
        bclr    w13,#XNEGBIT            ; No ... don't negate result

        mov.w   w13,[w14+FLG_OFF]       ; Preserve flags

;-----------------------------------------------------------------------;
;       Range reduction: ensure that sqrt(1/2) <= f <= sqrt(2)
;-----------------------------------------------------------------------;

        mov     #DP_SQRTHALF3,w7        ; (w7:w4) = sqrt(1/2)
        mov     #DP_SQRTHALF2,w6        ; *
        mov     #DP_SQRTHALF1,w5        ; *
        mov     #DP_SQRTHALF0,w4        ; *
        rcall   ___ltdf2                ; f < sqrt(1/2) ?
        bra     ge,finrange             ; No ...

        mov.d   [w14++],w0              ; (w3:w0) = f
        mov.d   [w14--],w2              ; *
        mov     #1,w4                   ; (w4) = exp=2^1
        rcall   _ldexp                  ; (w3:w0) = f = f * 2
        mov     [w14+K_OFF],w4          ; Load k
        mov.d   w0,[w14++]              ; Preserve f
        mov.d   w2,[w14--]              ; *
        dec     w4,w4                   ; k = k - 1
        mov     w4,[w14+K_OFF]          ; Preserve k
finrange:

;-----------------------------------------------------------------------;
;       Determine n such that ky = n + h, n in Z, |h| < 1
;-----------------------------------------------------------------------;

;------ kf = (double)k

        mov     [w14+K_OFF],w0          ; (w3:w0) = (long)k
        mul.su  w0,#1,w0                ; *
        rcall   ___floatsidf            ; (w3:w0) = (double)(long)k
        mov.w   w0,[w14+Kf_OFF0]        ; Preserve kf
        mov.w   w1,[w14+Kf_OFF1]        ; *
        mov.w   w2,[w14+Kf_OFF2]        ; *
        mov.w   w3,[w14+Kf_OFF3]        ; *

;------ n = (int)(kf * y)

        mov.d   w8,w4                   ; (w7:w4) = y
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; (w3:w0) = kf * y
        rcall   ___fixdfsi              ; (w3:w0) = (long)(kf * y)
        mov.d   w0,w12                  ; Preserve n

;------ Verify that |n| <= NMAX

        cp0     w1                      ; n < 0
        bra     ge,npos                 ; No ...
        subr    w0,#0,w0                ; Form |n|
        subbr   w1,#0,w1                ; *
npos:
        mov     #NMAX,w2                ; max(|n|)
        sub     w0,w2,[w15]             ; |n| > max(|n|) ?
        subb    w1,#0,[w15]             ; *
        bra     gtu,powrangeerror       ; Yes ... range error ...

;------ nf = (double)n

        mov.d   w12,w0                  ; (w1:w0) = n
        rcall   ___floatsidf            ; (w3:w0) = (double)n
        mov.w   w0,[w14+Nf_OFF0]        ; Preserve nf
        mov.w   w1,[w14+Nf_OFF1]        ; *
        mov.w   w2,[w14+Nf_OFF2]        ; *
        mov.w   w3,[w14+Nf_OFF3]        ; *

;-----------------------------------------------------------------------;
;       Determine m such that y = m + g, m in Z, |g| < 1
;-----------------------------------------------------------------------;

        mov.d   w8,w0                   ; (w3:w0) = y
        mov.d   w10,w2                  ; *
        rcall   ___fixdfsi              ; (w1:w0) = m = (int)y
        mov     w0,[w14+M_OFF]          ; Preserve m

        mov     #MMAX,w2                ; max(m)
        sub     w0,w2,[w15]             ; m > max(m) ?
        subb    w1,#0,[w15]             ; *
        bra     gt,mrangeerr            ; Yes ...range error ...

        mov     #-MMAX,w2               ; min(m)
        mov     #-1,w3                  ; *
        sub     w0,w2,[w15]             ; m < min(m) ?
        subb    w1,w3,[w15]             ; *
        bra     ge,minrange             ; No ... m is in range ...

mrangeerr:
        mov     [w14+K_OFF],w12         ; n = k
        cp0     w12                     ; k ? 0
        bra     z,setwm                 ; k == 0 ...
        bra     gt,setn                 ; k > 0 ...
        neg     w2,w2                   ; k < 0 ...
setn:
        mov     w2,w12                  ; set n = {-MMAX, 0, MMAX}
setwm:
        mul.uu  w0,#0,w0                ; w = 0
        mul.uu  w2,#0,w2                ; *
        mov     w0,[w14+M_OFF]          ; m = 0
        bra     common                  ; Rejoin common processing ...

;-----------------------------------------------------------------------;
;       Compute f^m * e^w * 2^n
;-----------------------------------------------------------------------;

minrange:

;------ y1 = fchop(y, Sy-8)

        mov.d   w8,w0                   ; (w3:w0) = y
        mov.d   w10,w2                  ; *
        sl      w3,#1,w4                ; (w4) = Sy (biased)
        lsr     w4,#5,w4                ; *
        sub     #DBL_BIAS,w4            ; (w4) = Sy (unbaised)
        sub     #8,w4                   ; (w4) = Wy - 8
        rcall   __dchop                 ; (w3:w0) = chopped(y)
        mov.d   w0,[w15++]              ; Preserve y1
        mov.d   w2,[w15++]              ; *

;------ h = (kf * y1 - n) + kf * y2

        mov.w   [w14+Kf_OFF0],w4        ; (w7:w4) = kf
        mov.w   [w14+Kf_OFF1],w5        ; *
        mov.w   [w14+Kf_OFF2],w6        ; *
        mov.w   [w14+Kf_OFF3],w7        ; *
        rcall   ___muldf3               ; (w3:w0) = kf * y1
        mov.w   [w14+Nf_OFF0],w4        ; (w7:w4) = nf
        mov.w   [w14+Nf_OFF1],w5        ; *
        mov.w   [w14+Nf_OFF2],w6        ; *
        mov.w   [w14+Nf_OFF3],w7        ; *
        rcall   ___subdf3               ; (w3:w0) = kf*y1-nf
        mov.d   [--w15],w6              ; (w7:w4) = y1
        mov.d   [--w15],w4              ; *
        mov.d   w0,[w15++]              ; Preserve kf*y1-nf
        mov.d   w2,[w15++]              ; *
        mov.d   w8,w0                   ; (w3:w0) = y
        mov.d   w10,w2                  ; *
        rcall   ___subdf3               ; (w3:w0) = y2 = (y - y1)
        mov.w   [w14+Kf_OFF0],w4        ; (w7:w4) = kf
        mov.w   [w14+Kf_OFF1],w5        ; *
        mov.w   [w14+Kf_OFF2],w6        ; *
        mov.w   [w14+Kf_OFF3],w7        ; *
        rcall   ___muldf3               ; (w1:w0) = kf*y2
        mov.d   [--w15],w6              ; (w7:w4) = kf*y1-nf
        mov.d   [--w15],w4              ; *
        rcall   ___adddf3               ; (w3:w0) = h = (kf*y1-nf)+kf*y2

;------ w = h * ln(2)

        mov.w   #DP_LN23,w7             ; (w7:w4) = ln(2)
        mov.w   #DP_LN22,w6             ; *
        mov.w   #DP_LN21,w5             ; *
        mov.w   #DP_LN20,w4             ; *
        rcall   ___muldf3               ; (w3:w0) = h * ln(2)

common:

        mov.d   w0,[w15++]              ; Preserve w = h * ln(2)
        mov.d   w2,[w15++]              ; *

;------ g = y - m

        mov     [w14+M_OFF],w0          ; (w1:w0) = (long)m
        mul.su  w0,#1,w0                ; *
        rcall   ___floatsidf            ; (w3:w0) = double(m)
        btg     w3,#15                  ; (w3:w0) = -double(m)
        mov.d   w8,w4                   ; (w7:w4) = y
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (w3:w0 = g = y - m
        mov.d   w0,[w15++]              ; Preserve g
        mov.d   w2,[w15++]              ; *

;------ compute g * log(f)

        mov.d   [w14++],w0              ; (w3:w0) = f
        mov.d   [w14--],w2              ; *
        rcall   _log                    ; (w3:w0) = log(f)
        mov.d   [--w15],w6              ; Recover g
        mov.d   [--w15],w4              ; *
        rcall   ___muldf3               ; (w3:w0) = g * log(f)

;------ w += g * log(f)

        mov.d   [--w15],w6              ; (w7:w4) = w = h * ln(2)
        mov.d   [--w15],w4              ; *
        rcall   ___adddf3               ; (w3:w0) = g*log(f) + h*ln(2)

        rcall   _exp                    ; (w3:w0) = exp(w)
        mov.d   w0,[w15++]              ; Preserve exp(w)
        mov.d   w2,[w15++]              ; *

;------ z = f^m

        rcall   loadone                 ; (w3:w0) = z = 1.0

;------ m = |m|

        mov     [w14+M_OFF],w13         ; (w13) = m
        btsc    w13,#15                 ; m < 0 ?
        neg     w13,w13                 ; Form |m|
        bra     scalebeg                ; Scale z ...
scalez:
        mov.d   [w14++],w0              ; (w3:w0) = f
        mov.d   [w14--],w2              ; *
        mov.d   [w14++],w4              ; (w7:w4) = f
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w1:w0) = f * f
        mov.d   w0,[w14++]              ; Preserve f
        mov.d   w2,[w14--]              ; *
        mov.d   w8,w0                   ; (w3:w0) = z
        mov.d   w10,w2                  ; *
scalebeg:
        mov.d   [w14++],w4              ; (w7:w4) = f
        mov.d   [w14--],w6              ; *
        btsc    w13,#0                  ; (m & 1 ) != 0
        rcall   ___muldf3               ; Yes ... z = z * f
        mov.d   w0,w8                   ; (w11:w8) = z
        mov.d   w2,w10                  ; *
        lsr     w13,w13                 ; (w13) = m >>= 1
        bra     nz,scalez               ; Scale z ...

zscaled:
        mov     [w14+FLG_OFF],w4        ; (w4) = flags
        btss    w4,#YNEGBIT             ; isNegative(y) ?
        bra     zcomputed               ; No ...

        mov.d   w0,w4                   ; (w7:w4) = z
        mov.d   w2,w6                   ; *
        rcall   loadone                 ; (w3:w0) = 1.0
        rcall   ___divdf3               ; (w3:w0) = 1/z
        mov.d   w0,w8                   ; (w11:w8) = z
        mov.d   w2,w10                  ; *

;-----------------------------------------------------------------------;
zcomputed:

;------ p = ldexp(z * exp(w), n)

        mov.d   [--w15],w6              ; (w7:w4) = w
        mov.d   [--w15],w4              ; *
        rcall   ___muldf3               ; (w3:w0) = z * expf(w)
        mov.w   w12,w4                  ; (w4) = n
        rcall   _ldexp                  ; (w3:w0) = z * exp(w) * 2^n

signresult:
        mov.w   [w14+FLG_OFF],w13       ; Recover flags
        btsc    w13,#XNEGBIT            ; Negate result ?
        btg     w3,#XNEGBIT             ; Yes ... result = -result
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;
;       Range error
;-----------------------------------------------------------------------;
powrangeerror:
        mov.w   [w14+FLG_OFF],w13       ; Recover flags
        rcall   rangeerror              ; Set range error
        rcall   loadinfinity            ; Assume result = infinity
        btsc    w13,#XGTONEBIT          ; |x| > 1 ?
        bset    w13,#OFLOWBIT           ; Yes ... assume overflow
        btsc    w13,#YNEGBIT            ; isNegative(y) ?
        btg     w13,#OFLOWBIT           ; Yes ... reverse the assumption
        btss    w13,#OFLOWBIT           ; Overflow ?
        mov     #DP_ZERO3,w3            ; No ... result = 0
        bra     signresult              ; Result = +/-Zero or +/-Infinity

;-----------------------------------------------------------------------;
;       Exit points
;-----------------------------------------------------------------------;

returnone:
        rcall   loadone                 ; (w3:w0) = +1.0
        bra     __dunpack2exit          ; Return(+1.0)

;------ x == 0.0

xIsZero:
        btst    w11,#15                 ; isNegative(y) ?
        bra     z,negifodd              ; No ... return signed zero ...
        rcall   domainerror             ; Set domain error
infnegifodd:
        rcall   loadinfinity            ; Result is infinity
negifodd:
        btst    w13,#XNEGBIT            ; isNegative(x) ?
        bra     z,__dunpack2exit        ; No ...
        btsc    w13,#ODDBIT             ; isOdd(y) ?
        btg     w3,#15                  ; Yes ... result = -result
        bra     __dunpack2exit          ; Destroy frame and return ...

;------ x == infinity

xIsInfinite:
        btst    w11,#15                 ; isNegative(y) ?
        bra     nz,negifodd             ; Yes ... return signed zero ...
        bra     infnegifodd             ; No ... returned signed infinity ...

;------ y is an infinity

yIsInfinite:
        mov.d   [w14++],w4              ; (w7:w4) = f
        mov.d   [w14--],w6              ; *
        rcall   compareone              ; f == 1.0 ?
        bra     z,returnone             ; Yes ... result = 1.0

        bra     gt,flessthanone         ; f < 1.0 ...

;------ y is an infinity, |x| > 1

        btg     w11,#15                 ; switch sign for common code

;------ y is an infinity, |x| < 1

flessthanone:
        rcall   loadinfinity            ; Assume result = +infinity
        btss    w11,#15                 ; isNegative(y) ?
        mov     #DP_ZERO3,w3            ; No ... result = +zero
        bra     __dunpack2exit          ; Return(+infinity or +0)

;------ (x < 0) && !isInteger(y)

complexpow:
        rcall   domainerror             ; Signal domain error
        bra     __dreturnNaN            ; Return(NaN)

;-----------------------------------------------------------------------;
;       Small utilities
;-----------------------------------------------------------------------;
compareone:
        rcall   loadone                 ; (w3:w0) = +1.0
        bra     ___eqdf2                ; Compare 1 ? x
loadone:
        mov.w   #DP_ONE3,w3             ; (w3:w0) = +1.0f
loadoneorinf:
        mul.uu  w0,#0,w0                ; *
        retlw   #DP_ONE2,w2             ; *
loadinfinity:
        mov.w   #DP_POSINF3,w3          ; (w3:w0) = +Infinity
        bra     loadoneorinf            ; *
rangeerror:
        mov.w   #_ERANGE,w0             ; Signal range error
        bra     seterrno                ; *
domainerror:
        mov.w   #_EDOM,w0               ; Signal domain error
seterrno:
        mov     w0,_errno               ; Set the error number
        return                          ; Done

;-----------------------------------------------------------------------;

.include "null_signature.s"
