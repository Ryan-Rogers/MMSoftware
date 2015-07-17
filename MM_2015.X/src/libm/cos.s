;-----------------------------------------------------------------------;
; cos.s: Floating-point cosine elementary function.
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
; cos
;
;       Double-precision cosine elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;
; Output:
;
;       (w3:w0) Floating-point number cosine(x)
;
; Description:
;
;       Computes the cosine of the argument x.
;       
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.cos, code
	.endif
        .global _cos
        .global _cosl

_cos:
_cosl:
        clr     w4              ; Indicate cosine required
        bra     __sincos        ; Join common processing ...
;-----------------------------------------------------------------------;

.include "null_signature.s"
