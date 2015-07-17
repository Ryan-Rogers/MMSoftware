;-----------------------------------------------------------------------;
; asin.s: Floating-point arcsine elementary function.
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
; asin
;
;       Double-precision arcsine elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;
; Output:
;
;       (w3:w0) Floating-point number arcsine(x)
;
; Description:
;
;       Computes the arcsine of the argument x.
;       
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.asin, code
	.endif
        .global _asin
        .global _asinl

_asin:
_asinl:
        mov     #0,w4           ; Indicate arcsine required
        bra     __asinacos      ; Join common processing ...
;-----------------------------------------------------------------------;

.include "null_signature.s"
