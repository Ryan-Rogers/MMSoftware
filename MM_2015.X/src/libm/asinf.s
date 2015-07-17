;-----------------------------------------------------------------------;
; asinf.s: Floating-point arcsine elementary function.
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
; asinf
;
;       Single-precision arcsine elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number arcsine(x)
;
; Description:
;
;       Computes the arcsine of the argument x.
;       
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.asinf, code
	.endif
        .global _asinf

_asinf:
        clr     w2              ; Indicate arcsine required
        bra     __asinacosf     ; Join common processing ...
;-----------------------------------------------------------------------;

.include "null_signature.s"
