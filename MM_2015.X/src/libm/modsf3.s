;-----------------------------------------------------------------------;
; modsf3.s: Floating-point remainder elementary operation.
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
; modsf3
;
;       Single-precision remainder elementary operation.
;
; Input:
;
;       (w1:w0) Floating-point dividend x
;       (w3:w2) Floating-point divisor y
;
; Output:
;
;       (w1:w0) Floating-point remainder REM(x/y)
;
; Description:
;
;       The remainder (x/y) is calculated. The result is exact;
;       no rounding is required.
;
;       This is the IEEE-compliant REM operator.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.modsf3, code
	.endif
        .global ___modsf3

;-----------------------------------------------------------------------;

___modsf3:
        mov     #1,w4                   ; Indicate REM required
        bra     __fmodrem               ; Join common function ...

;-----------------------------------------------------------------------;

.include "null_signature.s"
