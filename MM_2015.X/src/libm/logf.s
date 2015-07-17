;-----------------------------------------------------------------------;
; logf.s: Floating-point natural logarithm elementary function.
;
; This file is part of the compact math library for the dsPIC30.
; (c) Microchip Technology. 2003.
;-----------------------------------------------------------------------;
        .include "libm.inc"
	.ifndef ffunction
	.section .libm,code
	.endif
;-----------------------------------------------------------------------;
;
; logf
;
;       Natural logarithm elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number log(x)
;
; Description:
;
;       Computes the logarithm of the argument x.
;       If the argiment is not in the function domain [0,+infinity],
;       a quiet NaN is returned, and errno is set to EDOMAIN.
;       
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.logf,code
	.endif
        .global _logf

        LCONST B0,        0xC0D43F3A
        LCONST A0,        0xBF0D7E3D

;-----------------------------------------------------------------------;
_logf:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; *
        mov.d   w12,[w15++]     ; *

;------ Reduce argument to a fraction in range [0.5,1)

        rcall   __frexpf        ; (w1:w0)=x(fraction)
                                ; (w4)   =x(type)
                                ; (w5)   =x(n)
        mov     w5,w9           ; (w9)=n
        mov.d   w0,w10          ; (w11:w10)=x in [0.5,1)

;------ Test argument type

        cp      w4,#INFTYPE     ; NaN ?
        bra     gtu,exit        ; Yes ...

;------ Argument is not a NaN

        cp      w4,#FINITETYPE  ; Finite ?
        bra     z,finite        ; Yes ...
        bra     lt,argiszero    ; Zero ...

;------ Argument is +/- Infinity

        btst    w11,#15         ; +Infinity ?
        bra     z,exit          ; Yes ... result = +Infinity ...

;------ Augument is finite or -Infinity

finite:
        btst    w11,#15         ; Test for domain error (arg < 0)
        bra     z,finitenonzero ; Argument is > 0 ...

;------ Argument is < 0 (domain error): return NaN

        mov     #_EDOM,w0       ; Domain error
        mov     w0,_errno       ; *

        mov     #NaNLO,w0       ; Load NaN
        mov     #NaNHI,w1       ; *
        bra     exit            ; Done

;------ Argument is zero: return -infinity

argiszero:
        mov     #NEGINFHI,w1    ; -Infinity
        mov     #NEGINFLO,w0    ; *
        bra     exit            ; Exact result ...

;------ Argument is finite and > 0.0

finitenonzero:

;------ znum = x - 0.5f

        rcall   loadhalf        ; 0.5
        rcall   ___subsf3       ; (w1:w0)=x - 0.5
        mov.d   w0,w12          ; znum = (x - 0.5)

;------ test for x > sqrt(0.5)

        mov.d   w10,w0          ; x
        mov     #SQRTHALFLO,w2  ; sqrt(0.5)
        mov     #SQRTHALFHI,w3  ; *
        rcall   ___gtsf2        ; compare x ? sqrt(0.5)
        bra     le,lesqrt.5     ; x <= sqrt(0.5) ...

;------ x > sqrt(0.5)

        mov.d   w12,w0          ; znum
        rcall   loadhalf        ; 0.5
        rcall   ___subsf3       ; (w1:w0)=(x - 0.5) - 0.5
        mov.d   w0,w12          ; znum = (x - 0.5) - 0.5
        mov.d   w10,w0          ; zden = x
        bra     calczden        ; Join common ...

;------ x <= sqrt(0.5)

lesqrt.5:
        dec     w9,w9           ; n--
        mov.d   w12,w0          ; zden = znum

;------ calculate zden

calczden:
        rcall   loadhalf        ; 0.5
        rcall   ___mulsf3       ; (w1:w0)=y * 0.5
        rcall   loadhalf        ; 0.5
        rcall   ___addsf3       ; (w1:w0)=y * 0.5 + 0.5

;------ z = znum / zden

        mov.d   w0,w2           ; zden
        mov.d   w12,w0          ; znum
        rcall   ___divsf3       ; (w1:w0)=znum / zden
        mov.d   w0,w10          ; z = znum / zden

;------ w = z * z

        mov.d   w0,w2           ; replicate z
        rcall   ___mulsf3       ; (w1:w0)=z * z
        mov.d   w0,w12          ; w = z * z

;------ B = w + B0

        mov.w   #B0LO,w2        ; Coefficient B0
        mov.w   #B0HI,w3        ; *
        rcall   ___addsf3       ; (w1:w0)= w + B0
        mov.d   w0,[w15++]      ; preserve B

;------ r = w * A / B

        mov.d   w12,w0          ; w
        mov.w   #A0LO,w2        ; Coefficient A0
        mov.w   #A0HI,w3        ; *
        rcall   ___mulsf3       ; (w1:w0)= w * A
        mov.d   [--w15],w2      ; B
        rcall   ___divsf3       ; (w1:w0)= w * A / B
        mov.d   w0,w12          ; r = w * A / B

;------ r = z + z * r

        mov.d   w10,w2          ; z
        rcall   ___mulsf3       ; z * r
        mov.d   w10,w2          ; z
        rcall   ___addsf3       ; z + z * r
        mov.d   w0,w12          ; r = z + z * r

;------ r = C1 * n + (C2 * n + r)

        mul.su  w9,#1,w0        ; n
        rcall   ___floatsisf    ; (float)n
        mov.d   w0,w10          ; (float)n
        mov.w   #LN2C2LO,w2     ; Coefficient C2
        mov.w   #LN2C2HI,w3     ; *
        rcall   ___mulsf3       ; C2 * n
        mov.d   w12,w2          ; r
        rcall   ___addsf3       ; (C2 * n + r)
        mov.d   w0,w12          ; (C2 * n + r)
        mov.d   w10,w0          ; n
        mov.w   #LN2C1LO,w2     ; Coefficient C1
        mov.w   #LN2C1HI,w3     ; *
        rcall   ___mulsf3       ; C1 * n
        mov.d   w12,w2          ; (C2 * n + r)
        rcall   ___addsf3       ; C1 * n + (C2 * n + r)
exit:
        mov.d   [--w15],w12     ; Recover scratch
        mov.d   [--w15],w10     ; *
        mov.d   [--w15],w8      ; *
        return                  ; Done

;------ Load 0.5 into (w3:w2)

loadhalf:
        mov.w   #HALFHI,w3      ; (w3:w2) = 0.5
        retlw   #HALFLO,w2      ; *

;-----------------------------------------------------------------------;




.include "null_signature.s"
