;-----------------------------------------------------------------------;
; fmod.s: Double-precision floating-point modulus elementary operation.
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
; fmod
;
;       Double-precision floating-point modulus elementary operation.
;
; Input:
;
;       (w3:w2:w1:w0) Floating-point dividend x
;       (w7:w6:w5:w4) Floating-point divisor y
;
; Output:
;
;       (w3:w2:w1:w0) Floating-point remainder REM(x/y)
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
	.section .libm.fmod, code
	.endif
        .global _fmod
        .global _fmodl

;-----------------------------------------------------------------------;

_fmod:
_fmodl:
        clr     [w15++]                 ; Indicate MOD required
        rcall   __dmodrem               ; Compute the modulus
        dec2    w15,w15                 ; Clean the stack

        return                          ; Done

;-----------------------------------------------------------------------;

.include "null_signature.s"
