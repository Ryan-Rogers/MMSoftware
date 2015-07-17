;-----------------------------------------------------------------------;
; sinf.s: Floating-point sine elementary function.
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
; sinf
;
;       Single-precision sine elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number sine(x)
;
; Description:
;
;       Computes the sine of the argument x.
;       
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.sinf, code
	.endif

        .global _sinf

_sinf:
        clr     w2              ; Indicate sine required
        bra     __sincosf       ; Join common processing ...
;-----------------------------------------------------------------------;

.include "null_signature.s"
