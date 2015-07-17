;-----------------------------------------------------------------------;
; fmodf.s: Floating-point modulus elementary operation.
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
; fmodf
;
;       Single-precision modulus elementary operation.
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
;       This is the ANSI-compliant MOD operator.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fmodf, code
	.endif
        .global _fmodf

;-----------------------------------------------------------------------;

_fmodf:
        mov     #0,w4                   ; Indicate MOD required
        bra     __fmodrem               ; Join common function ...

;-----------------------------------------------------------------------;

.include "null_signature.s"
