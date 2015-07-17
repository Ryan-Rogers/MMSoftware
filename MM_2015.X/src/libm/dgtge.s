;-----------------------------------------------------------------------;
;
; dgtge.s: Double-precision floating-point comparison: >, >=
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
; __gtdf2: Floating-point comparison: >
; __gedf2: Floating-point comparison: >=
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
;       (w0)    If either operand is a NaN, -1.
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
	.section .libm.gtdf2, code
	.endif
        .global ___gtdf2
        .global ___gedf2

___gtdf2:
___gedf2:
        setm    [w15++]                 ; Return value for NaNs is -1
        rcall   __dcompare              ; Do the comparison ...
        dec2    w15,w15                 ; Clean the stack
        cp0     w0                      ; Set condition codes
        return                          ; Done

;-----------------------------------------------------------------------;



.include "null_signature.s"
