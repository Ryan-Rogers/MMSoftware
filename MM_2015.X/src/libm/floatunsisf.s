;-----------------------------------------------------------------------;
; floatunsisf.s: Convert 32-bit, unsigned integer to single floating-point
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
; __floatunsisf: Convert 32-bit, unsigned integer to single floating-point
;
; Input:
;
;       (w1:w0) Integer to be converted
;
; Output:
;
;       (w1:w0) Single floating-point representation of input value
;
; Description:
;
;       Convert a 32-bit, unsigned integer to single floating-point.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.floatunsisf,code
	.endif
        .global ___floatunsisf

___floatunsisf:
        mul.uu  w2,#0,w2                  ; zero extend 32->64
        bra     ___floatundisf            ; Use 64->32 conversion

;-----------------------------------------------------------------------;


.include "null_signature.s"
