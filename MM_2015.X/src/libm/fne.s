;-----------------------------------------------------------------------;
;
; fnes.s: Single-precision floating-point comparison: !=
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
; __nesf3: Floating-point comparison: !=
;
; Description:
;
;       Compares two floating point numbers.
;
; Input:
;
;       (w1:w0) Operand a
;       (w3:w2) Operand b
;
; Output:
;
;       (w0)    If either operand is a NaN, 0.
;               Else result of comparison, as follows:
;               -1      a < b
;                0      a = b
;               +1      a > b
;       (cc)    Reflects the returned value
;
; Description:
;
;       The comparison is done by the common comparison routine
;       __fcompare. The return value for NaN is loaded into the
;       parameter register before branching to the common routine.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.nesf2, code
	.endif
        .global ___nesf2

___nesf2:
        mov     #0,w4                   ; Return value for NaNs
        bra     __fcompare              ; Do the comparison ...

;-----------------------------------------------------------------------;




.include "null_signature.s"
