;-----------------------------------------------------------------------;
;
; ceilf.s: Single-precision floating-point ceiling function.
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
; ceilf: Single-precision floating-point ceiling function.
;
; Input:
;
;       (w1:w0) x: argument to be ceilinged
;
; Output:
;
;       (w1:w0) Ceilinged argument
;
; Description:
;
;       Computes the smallest integral value not less than x.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.ceilf, code
	.endif
        .global _ceilf	

_ceilf:
        clr     w2              ; Chop below 2^0
        rcall   __fchop         ; Chop fractional bits
        bra     z,exit          ; Nothing chopped ...

;------ Bits were chopped

        mov     #ONELO,w2       ; (w3:w2) = 1.0f
        mov     #ONEHI,w3       ; *
        btss    w1,#15          ; x > 0 ?
        rcall   ___addsf3       ; Yes ... result += 1.0
exit:
        return                  ; Done

;-----------------------------------------------------------------------;




.include "null_signature.s"
