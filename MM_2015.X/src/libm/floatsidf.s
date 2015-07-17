;-----------------------------------------------------------------------;
; floatsidf.s: Convert 32-bit, signed integer to double floating-point
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
; __floatsidf: Convert 32-bit, signed integer to double floating-point
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
;       Convert a 32-bit, signed integer to double floating-point.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.floatsidf,code
	.endif
        .global ___floatsidf

___floatsidf:
        asr     w1,#15,w2               ; Sign extend 32->64
        mov     w2,w3                   ; *
        bra     ___floatdidf            ; Use 64->64 conversion

;-----------------------------------------------------------------------;


.include "null_signature.s"
