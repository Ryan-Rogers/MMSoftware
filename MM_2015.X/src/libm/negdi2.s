;-----------------------------------------------------------------------;
; negdi2.s: Integer negation elementary operation.
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
;
; __negdi2
;
;       Signed 32-bit integer negation.
;
; Input:
;
;       (w3:w0) Operand (x)
;
; Output:
;
;       (w3:w0) Negated operand (-x)
;
;-----------------------------------------------------------------------;
;
	.ifdef ffunction
	.section .libm.negdi2, code
	.endif
        .global ___negdi2

___negdi2:
        subr    w0,#0,w0                ; x = 0 - x
        subbr   w1,#0,w1                ; *
        subbr   w2,#0,w2                ; *
        subbr   w3,#0,w3                ; *
        return                          ; return(-x)


.include "null_signature.s"
