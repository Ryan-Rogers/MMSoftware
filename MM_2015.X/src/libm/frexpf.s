;-----------------------------------------------------------------------;
;
; frexpf: Single-precision floating-point fraction/exponent function.
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
; frexpf
;
;       Break a floating-point number into a fraction and exponent.
;
; Input:
;
;       (w1:w0) Floating-point number x
;       (w2)    Pointer to returned integer power of 2
;
; Output:
;
;       (w1:w0) Fraction with magnitude in the interval [1/2,1)
;               if x in finite and non-zero.
;               Zero if x is zero.
;               Infinity if x is infinity.
;               NaN is x is NaN.
;       (w2)    Address of integer n, a power of 2 such that
;               x = returned fraction * 2^n, if x is finite, non-zero.
;               Address of intger value zero if x is zero, infinity
;               or NaN.
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.frexpf, code
	.endif
        .global _frexpf

_frexpf:
        rcall   __frexpf        ; convert to fraction+exponent
        mov     w5,[w2]         ; return exponent
        return                  ; done

;-----------------------------------------------------------------------;


.include "null_signature.s"
