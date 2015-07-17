;-----------------------------------------------------------------------;
; subdf3.s: Double-precision floating-point subtraction.
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
; subdf3
;
;       IEEE-754 double-precision subtraction elementary operation.
;
; Input:
;
;       (w3:w2:w1:w0) Floating-point minuend (a)
;       (w7:w6:w5:w4) Floating-point subtrahend (b)
;
; Output:
;
;       (w3:w2:w1:w0) Floating-point difference (a - b)
;
; Description:
;
;       The difference (a - b) is calculated as the sum (a + (-b)).
;       This function changes the sign of b, then calls the addition
;       function.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.subdf3, code
	.endif
        .global ___subdf3

___subdf3:
        btg     w7,#15                  ; a - b == a + (-b)
        bra     ___adddf3               ; Form the sum a + (-b)

;-----------------------------------------------------------------------;



.include "null_signature.s"
