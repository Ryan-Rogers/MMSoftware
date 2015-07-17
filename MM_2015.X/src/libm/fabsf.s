;-----------------------------------------------------------------------;
; fabsf.s: Floating-point absolute value function.
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
; fabsf
;
;       Single-precision absolute value function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number |x|
;
; Description:
;
;       Computes the absolute value of the argument x.
;       
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fabsf, code
	.endif
        .global _fabsf

_fabsf:
        bclr    w1,#15          ; |x|
        return                  ; Done
;-----------------------------------------------------------------------;

.include "null_signature.s"
