;-----------------------------------------------------------------------;
; log.s: Floating-point natural logarithm elementary function.
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
; log
;
;       Natural logarithm elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;
; Output:
;
;       (w3:w0) Floating-point number log(x)
;
; Description:
;
;       Computes the logarithm of the argument x.
;       If the argiment is not in the function domain [0,+infinity],
;       a quiet NaN is returned, and errno is set to EDOMAIN.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
; Coefficients for the minimax rational function approximation.
;
;-----------------------------------------------------------------------;
;
	.ifdef ffunction
	.section .libm.log, code
	.endif

        .equ    DP_A03,         0xC050
        .equ    DP_A02,         0x07FF
        .equ    DP_A01,         0x12B3
        .equ    DP_A00,         0xB59A

        .equ    DP_A13,         0x4030
        .equ    DP_A12,         0x624A
        .equ    DP_A11,         0x2016
        .equ    DP_A10,         0xAFED

        .equ    DP_A23,         0xBFE9
        .equ    DP_A22,         0x4415
        .equ    DP_A21,         0xB356
        .equ    DP_A20,         0xBD29

        .equ    DP_B03,         0xC088
        .equ    DP_B02,         0x0BFE
        .equ    DP_B01,         0x9C0D
        .equ    DP_B00,         0x9077

        .equ    DP_B13,         0x4073
        .equ    DP_B12,         0x8083
        .equ    DP_B11,         0xFA15
        .equ    DP_B10,         0x267E

        .equ    DP_B23,         0xC041
        .equ    DP_B22,         0xD580
        .equ    DP_B21,         0x4B67
        .equ    DP_B20,         0xCE0F

;-----------------------------------------------------------------------;

        .global _log
        .global _logl

;-----------------------------------------------------------------------;
_log:
_logl:
        lnk     #4*2                    ; Reserve 4 words scratch space
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;------ Get operand type

        rcall   __dtype                 ; (w4) = type(x)

;------ Test argument type

        cp      w4,#INFTYPE             ; NaN ?
        bra     gtu,__dunpack2exit      ; Yes ...

;------ Argument is not a NaN

        cp      w4,#FINITETYPE          ; Finite ?
        bra     z,finite                ; Yes ...
        bra     lt,argiszero            ; Zero ...

;------ Argument is +/- Infinity

        btst    w3,#15                  ; +Infinity ?
        bra     z,__dunpack2exit        ; Yes ... result = +Infinity ...

;------ Augument is finite or -Infinity

finite:

        btst    w3,#15                  ; Test for domain error (arg < 0)
        bra     nz,domainerror          ; Argument is < 0 ...

;-----------------------------------------------------------------------;
;       Argument is finite and > 0.0
;-----------------------------------------------------------------------;

;------ Reduce argument to a fraction in range [0.5,1)

        mov     w14,w4                  ; (w4) = &n
        rcall   _frexp                  ; (w3:w0)=x(fraction)
        mov     [w14],w12               ; (w12)= n
        mov.d   w0,w8                   ; (w11:w8)=x in [0.5,1)
        mov.d   w2,w10                  ; *

;------ znum = x - 0.5

        rcall   loadhalf                ; 0.5
        rcall   ___subdf3               ; (w3:w0) = x - 0.5
        mov.d   w0,[w14++]              ; znum = (x - 0.5)
        mov.d   w2,[w14--]              ; *

;------ test for x > sqrt(0.5)

        mov.d   w8,w0                   ; x
        mov.d   w10,w2                  ; *
        mov     #DP_SQRTHALF3,w7        ; sqrt(0.5)
        mov     #DP_SQRTHALF2,w6        ; *
        mov     #DP_SQRTHALF1,w5        ; *
        mov     #DP_SQRTHALF0,w4        ; *
        rcall   ___gtdf2                ; compare x ? sqrt(0.5)
        bra     le,lesqrt.5             ; x <= sqrt(0.5) ...

;------ x > sqrt(0.5)

        mov.d   [w14++],w0              ; znum
        mov.d   [w14--],w2              ; *
        rcall   loadhalf                ; 0.5
        rcall   ___subdf3               ; (w3:w0)=(x - 0.5) - 0.5
        mov.d   w0,[w14++]              ; znum = (x - 0.5) - 0.5
        mov.d   w2,[w14--]              ; *
        mov.d   w8,w0                   ; zden = x
        mov.d   w10,w2                  ; *
        bra     calczden                ; Join common ...

;------ x <= sqrt(0.5)

lesqrt.5:
        dec     w12,w12                 ; n--
        mov.d   [w14++],w0              ; zden = znum
        mov.d   [w14--],w2              ; *

;------ calculate zden

calczden:
        rcall   loadhalf                ; 0.5
        rcall   ___muldf3               ; (w3:w0)=y * 0.5
        rcall   loadhalf                ; 0.5
        rcall   ___adddf3               ; (w3:w0)=y * 0.5 + 0.5

;------ z = znum / zden

        mov.d   w0,w4                   ; zden
        mov.d   w2,w6                   ; *
        mov.d   [w14++],w0              ; znum
        mov.d   [w14--],w2              ; *
        rcall   ___divdf3               ; (w3:w0)=znum / zden
        mov.d   w0,w8                   ; z = znum / zden
        mov.d   w2,w10                  ; *

;------ w = z * z

        mov.d   w0,w4                   ; replicate z
        mov.d   w2,w6                   ; *
        rcall   ___muldf3               ; (w3:w0)=z * z
        mov.d   w0,[w14++]              ; w = z * z
        mov.d   w2,[w14--]              ; *

;------ B = ((w + b2) * w + b1) * w + b0

        mov     #DP_B23,w7              ; Coefficient B2
        mov     #DP_B22,w6              ; *
        mov     #DP_B21,w5              ; *
        mov     #DP_B20,w4              ; *
        rcall   ___adddf3               ; (w3:w0)= (w+b2)
        mov.d   [w14++],w4              ; w
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w3:w0)= (w+b2)*w
        mov     #DP_B13,w7              ; Coefficient B1
        mov     #DP_B12,w6              ; *
        mov     #DP_B11,w5              ; *
        mov     #DP_B10,w4              ; *
        rcall   ___adddf3               ; (w3:w0)= (w+b2)*w+b1
        mov.d   [w14++],w4              ; w
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w3:w0)= ((w+b2)*w+b1)*w
        mov     #DP_B03,w7              ; Coefficient B0
        mov     #DP_B02,w6              ; *
        mov     #DP_B01,w5              ; *
        mov     #DP_B00,w4              ; *
        rcall   ___adddf3               ; (w3:w0)= ((w+b2)*w+b1)*w+b0

        mov.d   w0,[w15++]              ; preserve B
        mov.d   w2,[w15++]              ; *

;------ A = (a2 * w + a1) * w + a0

        mov     #DP_A23,w7              ; Coefficient A2
        mov     #DP_A22,w6              ; *
        mov     #DP_A21,w5              ; *
        mov     #DP_A20,w4              ; *
        mov.d   [w14++],w0              ; w
        mov.d   [w14--],w2              ; *
        rcall   ___muldf3               ; (w3:w0)= (a2*w)
        mov     #DP_A13,w7              ; Coefficient A1
        mov     #DP_A12,w6              ; *
        mov     #DP_A11,w5              ; *
        mov     #DP_A10,w4              ; *
        rcall   ___adddf3               ; (w3:w0)= (a2*w+a1)
        mov.d   [w14++],w4              ; w
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w3:w0)= (a2*w+a1)*w
        mov     #DP_A03,w7              ; Coefficient A0
        mov     #DP_A02,w6              ; *
        mov     #DP_A01,w5              ; *
        mov     #DP_A00,w4              ; *
        rcall   ___adddf3               ; (w3:w0)= (a2*w+a1)*w+a0

;------ r = w * A / B

        mov.d   [w14++],w4              ; w
        mov.d   [w14--],w6              ; *
        rcall   ___muldf3               ; (w3:w0)= w * A
        mov.d   [--w15],w6              ; B
        mov.d   [--w15],w4              ; *
        rcall   ___divdf3               ; (w3:w0)= w * A / B
        mov.d   w0,[w14++]              ; r = w * A / B
        mov.d   w2,[w14--]              ; *

;------ r = z + z * r

        mov.d   w8,w4                   ; z
        mov.d   w10,w6                  ; *
        rcall   ___muldf3               ; z * r
        mov.d   w8,w4                   ; z
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; z + z * r
        mov.d   w0,w8                   ; r = z + z * r
        mov.d   w2,w10                  ; *

;------ r = C1 * n + (C2 * n + r)

        mul.su  w12,#1,w0               ; n
        rcall   ___floatsidf            ; (float)n
        mov.d   w0,[w14++]              ; (float)n
        mov.d   w2,[w14--]              ; *
        mov     #DP_LN2C23,w7           ; Coefficient C2
        mov     #DP_LN2C22,w6           ; *
        mov     #DP_LN2C21,w5           ; *
        mov     #DP_LN2C20,w4           ; *
        rcall   ___muldf3               ; C2 * n
        mov.d   w8,w4                   ; r
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; (C2 * n + r)
        mov.d   w0,w8                   ; (C2 * n + r)
        mov.d   w2,w10                  ; *
        mov.d   [w14++],w0              ; n
        mov.d   [w14--],w2              ; *
        mov     #DP_LN2C13,w7           ; Coefficient C1
        mov     #DP_LN2C12,w6           ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___muldf3               ; C1 * n
        mov.d   w8,w4                   ; (C2 * n + r)
        mov.d   w10,w6                  ; *
        rcall   ___adddf3               ; C1 * n + (C2 * n + r)
exit:
        bra     __dunpack2exit          ; Destroy frame and return ...
;-----------------------------------------------------------------------;

;------ Load 0.5 into (w7:w4)

loadhalf:
        mov     #DP_HALF3,w7            ; (w7:w3) = 0.5
        mul.uu  w4,#0,w4                ; *
        retlw   #DP_HALF2,w6            ; *

;------ Argument is zero: return -infinity

argiszero:
        mov     #DP_NEGINF3,w3          ; -Infinity
        mov     #0,w2                   ; *
        mul.uu  w0,#0,w0                ; *
        bra     __dunpack2exit          ; Exact result ...

;------ Argument is < 0 (domain error): return NaN

domainerror:
        mov     #_EDOM,w0               ; Domain error
        mov     w0,_errno               ; *
        bra     __dreturnNaN            ; Result is NaN
;-----------------------------------------------------------------------;




.include "null_signature.s"
