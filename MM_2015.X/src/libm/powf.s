;-----------------------------------------------------------------------;
; powf.s: Floating-point power elementary function.
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
; powf
;
;       Single-precision power elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;       (w3:w2) Floating-point number y
;
; Output:
;
;       (w1:w0) Floating-point number x^y
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
	.ifdef ffunction
	.section .libm.powf, code
	.endif
        .global _powf

;-----------------------------------------------------------------------;
; Extra type bits for encoding integral state of an operand
;-----------------------------------------------------------------------;
        .equ    ODDBIT,3                ; operand is an odd integer
        .equ    EVENBIT,4               ; operand is an even integer
        .equ    INTBIT,5                ; operand is an integer
        .equ    OFLOWBIT,12             ; x^y overflowed
        .equ    XGTONEBIT,13            ; operand |X| > 1
        .equ    YNEGBIT,14              ; operand Y is negative
        .equ    XNEGBIT,15              ; operand X is negative
        .equ    INTMSK,(1<<INTBIT)
        .equ    ODDMSK,(1<<ODDBIT)
        .equ    EVENMSK,(1<<EVENBIT)
;-----------------------------------------------------------------------;

        .equ    MMAX,FLT_EMAX
        .equ    NMAX,32767

;-----------------------------------------------------------------------;
;       Stack frame
;-----------------------------------------------------------------------;

        .equ    Kf_OFF, 0               ; kf (must be at 0)
        .equ    M_OFF,  4               ; m
        .equ    N_OFF,  6               ; n
        .equ    K_OFF,  8               ; k
        .equ    F_OFF,  10              ; flags
        .equ    FRMSZ,  12              ; Frame size

;-----------------------------------------------------------------------;

_powf:
        lnk     #FRMSZ                  ; Establish the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;------ Unpack the operands

        rcall   __funpack2              ; Unpack both operands

;-----------------------------------------------------------------------;
;
;       (w7:w6) x(Significand)
;       (w9:w8) x
;       (w10)   x(Type)
;       (w11)   x(Biased exponent)
;
;       (w1:w0) y(Significand)
;       (w3:w2) y
;       (w4)    y(Type)
;       (w5)    y(Biased exponent)
;
;-----------------------------------------------------------------------;

        mov.d   w2,w12                  ; (w13:w12) = y
        mov.w   w4,w11                  ; (w11) = ytype

;-----------------------------------------------------------------------;
;       Determine if y is an integer, and if so, its parity
;-----------------------------------------------------------------------;

        mov.d   w2,w0                   ; (w1:w0) = y
        mov.w   #0,w2                   ; (w2) = k
        rcall   __fchop                 ; isInteger(y) ?
        bra     nz,endintchk            ; No ...

;------ y is an integer

        ior     #INTMSK|ODDMSK,w11      ; Indicate y is an (odd) integer
        mov     #1,w2                   ; (w2) = k
        rcall   __fchop                 ; isOdd(y) ?
        bra     nz,endintchk            ; y is odd ...
        xor     w11,#ODDMSK|EVENMSK,w11 ; y is even
endintchk:

;-----------------------------------------------------------------------;
;       If y == 1, the result = x
;-----------------------------------------------------------------------;

        mov.d   w12,w2                  ; (w3:w2) = y
        rcall   compareone              ; y == 1.0 ?
        mov.d   w8,w0                   ; (w1:w0) = x
        bra     z,return0               ; Yes ... result = x

;-----------------------------------------------------------------------;
;       If x == +1 or y == 0, the result is +1
;-----------------------------------------------------------------------;

        btst    w11,#ZEROBIT            ; y == 0 ?
        bra     nz,returnone            ; Yes ... result = +1

        btsc    w13,#15                 ; isNegative(y) ?
        bset    w11,#YNEGBIT            ; Yes ... record the fact
        btsc    w9,#15                  ; isNegative(x) ?
        bset    w11,#XNEGBIT            ; Yes ... record the fact
        bclr    w9,#15                  ; (w9:w8) = f = |x|

        mov.d   w8,w2                   ; (w3:w2) = |x|
        rcall   compareone              ; x == +1.0 ?
        btss    w11,#XNEGBIT            ; *
        bra     z,returnone             ; Yes ...
        bra     gt,checkNaN             ; 1 > |x| ...
        bset    w11,#XGTONEBIT          ; |x| > 1 ... record the fact

;-----------------------------------------------------------------------;
;       If either operand is NaN, the result is NaN
;-----------------------------------------------------------------------;
        
checkNaN:
        ior.b   w11,w10,[w15]           ; isNaN(x) || isNaN(y) ?
        bra     n,returnNaN             ; Yes ... result is NaN ...
        
;-----------------------------------------------------------------------;
;       Check x for other special values: zero and infinity
;-----------------------------------------------------------------------;

        mul.uu  w0,#0,w0                ; Assume result is zero

        cp      w10,#FINITETYPE         ; isFinite(x) ?
        bra     ltu,xIsZero             ; x is a zero ...
        bra     gtu,xIsInfinite         ; x is an infinity ...

;-----------------------------------------------------------------------;
;       Check y for other special values: infinity
;-----------------------------------------------------------------------;

        btst    w11,#INFBIT     ; isInfinite(y) ?
        bra     nz,yIsInfinite  ; Yes ...

;-----------------------------------------------------------------------;
;       Check for x negative and y not an integer
;-----------------------------------------------------------------------;

        btst    w11,#XNEGBIT    ; isNegative(x) ?
        bra     z,finiteargs    ; No ...
        btst    w11,#INTBIT     ; isInteger(y) ?
        bra     z,complexpow    ; No ...

;------ (x < 0) && isInteger(y)

        mov.d   w8,w2           ; (w3:w2) = |x|
        rcall   compareone      ; x == -1 ?
        mov.d   w8,w0           ; (w1:w0) = |x|
        bra     z,negifyodd     ; (x == -1) && isInteger(y) ...

;-----------------------------------------------------------------------;
;       Finite arguments: calculate x^y
;-----------------------------------------------------------------------;
finiteargs:

;-----------------------------------------------------------------------;
;       Determine f and k such that f = |x| * 2^k
;-----------------------------------------------------------------------;

        mov.d   w8,w0           ; (w1:w0) = |x|
        rcall   __frexpf        ; (w1:w0) = f
                                ; (w5) = k
        mov.d   w0,w8           ; (w9:w8) = f
        mov.w   w5,w10          ; (w10) = k

;-----------------------------------------------------------------------;
;       Determine if the result should be negated
;-----------------------------------------------------------------------;

;------ Negate result if f negative and y is an odd integer

        btsc    w11,#XNEGBIT            ; isNegative(f) ?
        btss    w11,#ODDBIT             ; y an odd integer ?
        bclr    w11,#XNEGBIT            ; No ... don't negate result

        mov.w   w11,[w14+F_OFF]         ; Preserve flags

;-----------------------------------------------------------------------;
;       Range reduction: ensure that sqrt(1/2) <= f <= sqrt(2)
;-----------------------------------------------------------------------;

        mov     #SQRTHALFLO,w2          ; (w3:w2) = sqrt(1/2)
        mov     #SQRTHALFHI,w3          ; *
        rcall   ___ltsf2                ; f < sqrt(1/2) ?
        bra     ge,finrange             ; No ...

        mov.d   w8,w0                   ; (w1:w0) = f
        mov     #1,w2                   ; (w2) = exp=2^1
        rcall   _ldexpf                 ; (w1:w0) = f = f * 2
        mov.d   w0,w8                   ; (w9:w8) = f
        dec     w10,w10                 ; (w10) = k -= 1
finrange:
        mov     w10,[w14+K_OFF]         ; Preserve k

;-----------------------------------------------------------------------;
;       Determine n such that ky = n + h, n in Z, |h| < 1
;-----------------------------------------------------------------------;

;------ kf = (float)k

        mul.su  w10,#1,w0               ; (w1:w0) = (long)k
        rcall   ___floatsisf            ; (w1:w0) = (float)(long)k
        mov.d   w0,[w14]                ; Preserve kf

;------ n = (int)(kf * y)

        mov.d   w12,w2                  ; (w3:w2) = y
        rcall   ___mulsf3               ; (w1:w0) = kf * y
        rcall   ___fixsfsi              ; (w1:w0) = (long)(kf * y)
        mov.w   w0,[w14+N_OFF]          ; Preserve n

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

;-----------------------------------------------------------------------;
;       Determine m such that y = m + g, m in Z, |g| < 1
;-----------------------------------------------------------------------;

        mov.d   w12,w0                  ; (w1:w0) = y
        rcall   ___fixsfsi              ; (w1:w0) = m = (int)y
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
        cp0     w10                     ; k ? 0
        bra     z,setwm                 ; k == 0 ...
        bra     gt,setn                 ; k > 0 ...
        neg     w2,w2                   ; k < 0 ...
setn:
        mov     w2,w10                  ; set n = {-MMAX, MMAX}
setwm:
        mul.uu  w0,#0,w0                ; w = 0
        mov     w0,[w14+M_OFF]          ; m = 0
        mov     w10,[w14+N_OFF]         ; n = {-MMAX, 0, MMAX}
        bra     common                  ; Rejoin common processing ...

;-----------------------------------------------------------------------;
;       Compute f^m * e^w * 2^n
;-----------------------------------------------------------------------;

minrange:

;------ nf = (float)n

        mov.w   [w14+N_OFF],w0          ; (w1:w0) = n
        mul.su  w0,#1,w0                ; *
        rcall   ___floatsisf            ; (w1:w0) = (float)n
        mov.d   w0,[w15++]              ; Preserve nf

;------ y1 = fchop(y, Sy-8)

        mov.d   w12,w0                  ; (w1:w0) = y
        sl      w1,#1,w2                ; (w2) = Sy (biased)
        lsr     w2,#8,w2                ; *
        sub     #FLT_BIAS+8,w2          ; (w2) = Sy (unbaised)
        rcall   __fchop                 ; (w1:w0) = chopped(y)
        mov.d   w0,w10                  ; (w11:w10) = y1

;------ h = (kf * y1 - n) + kf * y2

        mov.d   [w14],w2                ; (w3:w2) = kf
        rcall   ___mulsf3               ; (w1:w0) = kf * y1
        mov.d   [--w15],w2              ; (w3:w2) = nf
        rcall   ___subsf3               ; (w1:w0) = kf*y1-nf
        mov.d   w0,[w15++]              ; Preserve kf*y1-nf
        mov.d   w12,w0                  ; (w1:w0) = y
        mov.d   w10,w2                  ; (w3:w2) = y1
        rcall   ___subsf3               ; (w1:w0) = y2 = (y - y1)
        mov.d   [w14],w2                ; (w3:w2) = kf
        rcall   ___mulsf3               ; (w1:w0) = kf*y2
        mov.d   [--w15],w2              ; (w3:w2) = kf*y1-nf
        rcall   ___addsf3               ; (w1:w0) = (kf*y1-nf)+kf*y2

;------ w = h * ln(2)

        mov.w   #LN2LO,w2               ; (w3:w2) = ln(2)
        mov.w   #LN2HI,w3               ; *
        rcall   ___mulsf3               ; (w1:w0) = h * ln(2)

common:

        mov.d   w0,w10                  ; (w11:w10) = w

;------ g = y - m

        mov     [w14+M_OFF],w0          ; (w1:w0) = (long)m
        mul.su  w0,#1,w0                ; *
        rcall   ___floatsisf            ; (w1:w0) = float(m)
        btg     w1,#15                  ; (w1:w0) = -float(m)
        mov.d   w12,w2                  ; (w3:w2) = y
        rcall   ___addsf3               ; (w1:w0 = g = y - m
        mov.d   w0,w12                  ; (w13:w12) = g

;------ w += g * log(f)

        mov.d   w8,w0                   ; (w1:w0) = f
        rcall   _logf                   ; (w1:w0) = log(f)
        mov.d   w12,w2                  ; (w3:w2) = g
        rcall   ___mulsf3               ; (w1:w0) = g * log(f)
        mov.d   w10,w2                  ; (w3:w2) = w
        rcall   ___addsf3               ; (w1:w0) = g*log(f) + h*ln(2)
        mov.d   w0,[w15++]              ; Preserve w = g*log(f) + h*ln(2)

;------ z = f^m

        rcall   loadone                 ; (w1:w0) = z = 1.0

;------ m = |m|

        mov     [w14+M_OFF],w10         ; (w10) = m
        btsc    w10,#15                 ; m < 0 ?
        neg     w10,w10                 ; Form |m|
        bra     scalebeg                ; Scale z ...
scalez:
        mov.d   w8,w0                   ; (w1:w0) = f
        mov.d   w8,w2                   ; (w3:w2) = f
        rcall   ___mulsf3               ; (w1:w0) = f * f
        mov.d   w0,w8                   ; (w9:w8) = f
        mov.d   w12,w0                  ; (w1:w0) = z
scalebeg:
        mov.d   w8,w2                   ; (w3:w2) = f
        btsc    w10,#0                  ; (m & 1 ) != 0
        rcall   ___mulsf3               ; Yes ... z = z * f
        mov.d   w0,w12                  ; (w13:w12) = z
        lsr     w10,w10                 ; (w10) = m >>= 1
        bra     nz,scalez               ; Scale z ...

zscaled:
        mov     [w14+F_OFF],w2          ; (w2) = flags
        btss    w2,#YNEGBIT             ; isNegative(y) ?
        bra     zcomputed               ; No ...

        mov.d   w0,w2                   ; (w3:w2) = z
        rcall   loadone                 ; (w1:w0) = 1.0
        rcall   ___divsf3               ; (w1:w0) = 1/z

;-----------------------------------------------------------------------;
zcomputed:

;------ p = ldexpf(z * expf(w), n)

        mov.d   w0,w8                   ; (w9:w8) = z
        mov.d   [--w15],w0              ; (w1:w0) = w
        rcall   _expf                   ; (w1:w0) = expf(w)
        mov.d   w8,w2                   ; (w3:w2) = z
        rcall   ___mulsf3               ; (w1:w0) = z * expf(w)
        mov.w   [w14+N_OFF],w2          ; (w2) = n
        rcall   _ldexpf                 ; (w1:w0) = z * expf(w) * 2^n

        mov.w   [w14+F_OFF],w11         ; Recover flags

;-----------------------------------------------------------------------;
;       Exit points
;-----------------------------------------------------------------------;
signresult:
        btsc    w11,#XNEGBIT            ; Negate result ?
        btg     w1,#XNEGBIT             ; Yes ... result = -result

;-----------------------------------------------------------------------;
return0:
        mov.d   [--w15],w12             ; Recover scratch
        mov.d   [--w15],w10             ; Recover scratch
        mov.d   [--w15],w8              ; Recover scratch
        ulnk                            ; Discard frame
        return                          ; Done

returnone:
        rcall   loadone                 ; (w1:w0) = +1.0
        bra     return0                 ; Return(+1.0)

;-----------------------------------------------------------------------;
;       Range error
;-----------------------------------------------------------------------;
powrangeerror:
        rcall   rangeerror              ; Set range error
        mul.uu  w0,#0,w0                ; Assume result = 0
        btsc    w11,#XGTONEBIT          ; |x| > 1 ?
        bset    w11,#OFLOWBIT           ; Yes ... assume overflow
        btsc    w11,#YNEGBIT            ; isNegative(y) ?
        btg     w11,#OFLOWBIT           ; Yes ... reverse the assumption
        btsc    w11,#OFLOWBIT           ; Overflow ?
        mov.w   #POSINFHI,w1            ; Yes ... result = infinity
        bra     return0                 ; Return(+/-0.0 or +/-Infinity)

;------ x == 0.0

xIsZero:
        btst    w13,#15                 ; isNegative(y) ?
        bra     z,negifodd              ; No ... return signed zero ...
        rcall   domainerror             ; Set domain error
infnegifodd:
        rcall   loadinfinity            ; Result is infinity
negifodd:
        btst    w11,#XNEGBIT            ; isNegative(x) ?
        bra     z,return0               ; No ...
negifyodd:
        btsc    w11,#ODDBIT             ; isOdd(y) ?
        btg     w1,#15                  ; Yes ... result = -result
        bra     return0                 ; Done

;------ x == infinity

xIsInfinite:
        btst    w13,#15                 ; isNegative(y) ?
        bra     nz,negifodd             ; Yes ... return signed zero ...
        bra     infnegifodd             ; No ... returned signed infinity ...

;------ y is an infinity

yIsInfinite:
        mov.d   w8,w2                   ; (w3:w2) = f
        rcall   compareone              ; f == 1.0 ?
        bra     z,returnone             ; Yes ... result = 1.0

        bra     gt,flessthanone         ; f < 1.0 ...

;------ y is an infinity, |x| > 1

        btg     w13,#15                 ; switch sign for common code

;------ y is an infinity, |x| < 1

flessthanone:
        mul.uu  w0,#0,w0                ; Assume result is zero
        btsc    w13,#15                 ; isNegative(y) ?
        rcall   loadinfinity            ; Yes ... result = +infinity
        bra     return0                 ; Return(+infinity or +0)

;------ (x < 0) && !isInteger(y)

complexpow:
        rcall   domainerror     ; Signal domain error
returnNaN:
        mov.w   #NaNHI,w1       ; (w1:w0) = QNaN
        mov.w   #NaNLO,w0       ; *
        bra     return0         ; Return(NaN)

;-----------------------------------------------------------------------;
;       Small utilities
;-----------------------------------------------------------------------;
compareone:
        rcall   loadone                 ; (w1:w0) = +1.0
        bra     ___eqsf2                ; Compare 1 ? x
loadone:
        mov.w   #ONEHI,w1               ; (w1:w0) = +1.0f
        retlw   #ONELO,w0               ; *
loadinfinity:
        mov.w   #POSINFHI,w1            ; (w1:w0) = +Infinity
        retlw   #POSINFLO,w0            ; *
rangeerror:
        mov.w   #_ERANGE,w0             ; Signal range error
        bra     seterrno                ; *
domainerror:
        mov.w   #_EDOM,w0               ; Signal domain error
seterrno:
        mov.w   w0,_errno               ; Set the error number
        return                          ; Done

;-----------------------------------------------------------------------;

.include "null_signature.s"
