;-----------------------------------------------------------------------;
; moddf3.s: Double-precision floating-point remainder operation.
;
; This file is part of the compact math library for the dsPIC30.
; (c) Microchip Technology. 2003.
;
;-----------------------------------------------------------------------;
        .include "libm.inc"
	.ifdef ffunction
	.section .libm,code
	.endif
;-----------------------------------------------------------------------;
;
; moddf3
;
;       Double-precision floating-point remainder elementary operation.
;
; Input:
;
;       (w3:w2:w1:w0) Floating-point dividend x
;       (w7:w6:w5:w4) Floating-point divisor y
;
; Output:
;
;       (w2:w2:w1:w0) Floating-point remainder REM(x/y)
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
	.section .libm.moddf3, code
	.endif
        .global ___moddf3

;-----------------------------------------------------------------------;

___moddf3:
        setm    [w15++]                 ; Indicate REM required
        rcall   __dmodrem               ; Compute the remainder ...
        dec2    w15,w15                 ; Clean the stack

        return                          ; Done

;-----------------------------------------------------------------------;

.include "null_signature.s"
