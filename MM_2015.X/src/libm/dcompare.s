;-----------------------------------------------------------------------;
; dcompare.s: Double-precision floating-point comparison
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
; _dcompare: Floating-point comparison
;
; Description:
;
;       Compares two floating point numbers.
;
; Input:
;
;       (w3:w2:w1:w0)   Operand a
;       (w7:w6:w5:w4)   Operand b
;       [w15-w2]        Value to return if isNaN(a) || isNaN(b)
;
; Output:
;
;       (w0)    Result of comparison, or [w15-2] if either operand is a NaN.
;               -1      a < b
;                0      a = b
;               +1      a > b
;       (cc)    Reflects the returned value
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.dcompare, code
	.endif
        .global __dcompare
;-----------------------------------------------------------------------;

__dcompare:
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        mov.d   w4,w8                   ; (w11:w8) = b
        mov.d   w6,w10                  ; *
        mov.d   w0,[w15++]              ; Preserve a
        mov.d   w2,[w15++]              ; *

;------ Get operand types

        rcall   __dtype                 ; (w4) = type(a)
        mov     w4,w12                  ; (w12)= type(a)

        mov.d   w8,w0                   ; (w3:w0) = b
        mov.d   w10,w2                  ; *
        rcall   __dtype                 ; (w4) = type(b)
        mov     w4,w13                  ; (w13)= type(b)

        mov.d   [--w15],w6              ; (w7:w4) = a
        mov.d   [--w15],w4              ; *

;------ Test for NaNs

        ior.b   w12,w13,[w15]           ; isNaN(a) || isNaN(b) ?
        mov     [w15-9*2],w0            ; Assume yes
        bra     n,exit                  ; isNaN(a) || isNaN(b) ...

;-----------------------------------------------------------------------;
;       Operands are not both NaN
;-----------------------------------------------------------------------;

        mov     #-1,w0                  ; Assume a < b

        xor     w7,w11,[w15]            ; sign(a) == sign(b) ?
        bra     nn,comparemag           ; Yes ... compare magnitude ...

;------ Signs differ

        and     w12,w13,w12             ; isZero(a) && isZero(b) ?
        btsc    w12,#ZEROBIT            ; *
        bra     returnEqual             ; Yes ... a == b

        btss    w7,#15                  ; a < 0 ?
        mov     #1,w0                   ; No ... a > b
        bra     exit                    ; Done

;------ Signs are the same: compare magnitude

comparemag:
        sub     w4,w8,[w15]             ; Form a - b
        subb    w5,w9,[w15]             ; *
        subb    w6,w10,[w15]            ; *
        subb    w7,w11,[w15]            ; (flags) = (a - b)
        bra     ltu,adjust              ; a < b ...
        mov     #1,w0                   ; Assume a > b
        bra     gtu,adjust              ; a > b ...
returnEqual:
        mov     #0,w0                   ; a == b
adjust:
        btsc    w7,#15                  ; Operands < 0 ?
        neg     w0,w0                   ; Yes ... reverse the sense
exit:
        mov.d   [--w15],w12             ; Recover scratch
        mov.d   [--w15],w10             ; Recover scratch
        mov.d   [--w15],w8              ; Recover scratch
        return                          ; Done

;-----------------------------------------------------------------------;



.include "null_signature.s"
