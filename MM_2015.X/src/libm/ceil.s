;-----------------------------------------------------------------------;
;
; ceil.s: Double-precision floating-point ceiling function.
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
; ceil: Double-precision floating-point ceiling function.
;
; Input:
;
;       (w3:w2:w1:w0) x: argument to be ceilinged
;
; Output:
;
;       (w3:w2:w1:w0) Ceilinged argument
;
; Description:
;
;       Computes the smallest integral value not less than x.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.ceil, code
	.endif
        .global _ceil
        .global _ceill

_ceil:
_ceill:
        clr     w4              ; Chop below 2^0
        rcall   __dchop         ; Chop fractional bits
        bra     z,exit          ; Nothing chopped ...

;------ Bits were chopped

        mov     #DP_ONE3,w7     ; (w7:w4) = 1.0
        mov     #DP_ONE2,w6     ; *
        mul.uu  w4,#0,w4        ; *
        btss    w3,#15          ; x > 0 ?
        rcall   ___adddf3       ; Yes ... result += 1.0
exit:
        return                  ; Done

;-----------------------------------------------------------------------;




.include "null_signature.s"
