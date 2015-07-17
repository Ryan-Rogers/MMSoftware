;-----------------------------------------------------------------------;
;
; deqltle.s: Double-precision floating-point comparison: ==, <, <=
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
; __eqdf2: Floating-point comparison: ==
; __ltdf2: Floating-point comparison: <
; __ledf2: Floating-point comparison: <=
;
; Description:
;
;       Compares two double-precision floating-point numbers.
;
; Input:
;
;       (w3:w2:w1:w0) Operand a
;       (w7:w6:w5:w4) Operand b
;
; Output:
;
;       (w0)    If either operand is a NaN, 1.
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
	.section .libm.eqdf2, code
	.endif
        .global ___eqdf2
        .global ___ltdf2
        .global ___ledf2

___eqdf2:
___ltdf2:
___ledf2:

;       The return value for NaNs is a positive integer (> 0).
;       Since W15 is even and non-zero, shifting it right one
;       position gives an appropriate value as a NaN response.

        lsr     w15,[w15++]             ; Return value for NaNs is +ve.
        rcall   __dcompare              ; Do the comparison ...
        dec2    w15,w15                 ; Clean the stack
        cp0     w0                      ; Set condition codes
        return                          ; Done

;-----------------------------------------------------------------------;



.include "null_signature.s"
