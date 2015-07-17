;-----------------------------------------------------------------------;
; floatsisf.s: Convert 32-bit, signed integer to single floating-point
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
; __floatsisf: Convert 32-bit, signed integer to single floating-point
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
;       Convert a 32-bit, signed integer to single floating-point.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.floatsisf,code
	.endif
        .global ___floatsisf

___floatsisf:
        asr     w1,#15,w2               ; Sign extend 32->64
        mov     w2,w3                   ; *
        bra     ___floatdisf            ; Use 64->32 conversion

;-----------------------------------------------------------------------;


.include "null_signature.s"
