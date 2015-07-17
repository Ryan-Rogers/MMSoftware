;-----------------------------------------------------------------------;
;
; dnes.s: Double-precision floating-point comparison: !=
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
; __nedf2: Double-precision floating-point comparison: !=
;
; Description:
;
;       Compares two floating point numbers.
;
; Input:
;
;       (w3:w2:w1:w0) Operand a
;       (w7:w6:w5:w4) Operand b
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
;       __dcompare. The return value for NaN is loaded into the
;       parameter register before branching to the common routine.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.nedf2, code
	.endif
        .global ___nedf2

___nedf2:
        clr.w   [w15++]                 ; Return value for NaNs = 0
        rcall   __dcompare              ; Do the comparison ...
        dec2    w15,w15                 ; Clean the stack
        cp0     w0                      ; Set condition codes
        return                          ; Done

;-----------------------------------------------------------------------;




.include "null_signature.s"
