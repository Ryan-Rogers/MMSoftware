;-----------------------------------------------------------------------;
; floatunsidf.s: Convert 32-bit, unsigned integer to double floating-point
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
; __floatunsidf: Convert 32-bit, unsigned integer to double floating-point
;
; Input:
;
;       (w1:w0) Integer to be converted
;
; Output:
;
;       (w3:w2:w1:w0) Double floating-point representation of input value
;
; Description:
;
;       Convert a 32-bit, unsigned integer to double floating-point.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.floatunsidf,code
	.endif
        .global ___floatunsidf

___floatunsidf:
        mul.uu  w2,#0,w2                  ; zero extend 32->64
        bra     ___floatundidf            ; Use 64->64 conversion

;-----------------------------------------------------------------------;


.include "null_signature.s"
