;-----------------------------------------------------------------------;
; sin.s: Floating-point sine elementary function.
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
; sin
;
;       Double-precision sine elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;
; Output:
;
;       (w3:w0) Floating-point number sine(x)
;
; Description:
;
;       Computes the sine of the argument x.
;       
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.sin, code
	.endif
        .global _sin
        .global _sinl

_sin:
_sinl:
        mov     #1,w4           ; Indicate sine required
        bra     __sincos        ; Join common processing ...
;-----------------------------------------------------------------------;

.include "null_signature.s"
