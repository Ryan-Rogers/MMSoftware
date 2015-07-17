;-----------------------------------------------------------------------;
; fcompare.s: Single-precision floating-point comparison
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
; _fcompare: Floating-point comparison
;
; Description:
;
;       Compares two floating point numbers.
;
; Input:
;
;       (w1:w0) Operand a
;       (w3:w2) Operand b
;       (w4)    Value to return if isNaN(a) || isNaN(b)
;
; Output:
;
;       (w0)    Result of comparison, or (w4) if either operand is a NaN.
;               -1      a < b
;                0      a = b
;               +1      a > b
;       (cc)    Reflects the returned value
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fcompare,code
	.endif
        .global __fcompare
;-----------------------------------------------------------------------;

__fcompare:
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov     w4,[w15++]              ; Preserve return for NaNs

;------ Unpack the operands

        rcall   __funpack2              ; Unpack both operands
        mov     [--w15],w0              ; Assume NaN
        bra     n,exit                  ; isNaN(a) || isNaN(b) ...

;-----------------------------------------------------------------------;
;
;       (w7:w6) a(Significand)
;       (w9:w8) a
;       (w10)   a(Type)
;       (w11)   a(Biased exponent)
;
;       (w1:w0) b(Significand)
;       (w3:w2) b
;       (w4)    b(Type)
;       (w5)    b(Biased exponent)
;
;-----------------------------------------------------------------------;

        mov     #-1,w0                  ; Assume a < b

        xor     w9,w3,[w15]             ; sign(a) == sign(b) ?
        bra     nn,comparemag           ; Yes ... compare magnitude ...

;------ Signs differ

        and     w10,w4,w10              ; isZero(a) && isZero(b) ?
        btsc    w10,#ZEROBIT            ; *
        bra     returnEqual             ; Yes ... a == b

        btss    w9,#15                  ; a < 0 ?
        mov     #1,w0                   ; No ... a > b
        bra     exit                    ; Done

;------ Signs are the same: compare magnitude

comparemag:
        sub     w8,w2,[w15]             ; Form a - b
        subb    w9,w3,[w15]             ; (flags) = (a - b)
        bra     ltu,adjust              ; a < b ...
        mov     #1,w0                   ; Assume a > b
        bra     gtu,adjust              ; a > b ...
returnEqual:
        mov     #0,w0                   ; a == b
adjust:
        btsc    w9,#15                  ; Operands < 0 ?
        neg     w0,w0                   ; Yes ... reverse the sense
exit:
        mov.d   [--w15],w10             ; Recover scratch
        mov.d   [--w15],w8              ; Recover scratch
        cp0     w0                      ; Set condition codes
        return                          ; Done

;-----------------------------------------------------------------------;



.include "null_signature.s"
