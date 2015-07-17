;-----------------------------------------------------------------------;
; log10f.s: Floating-point common logarithm elementary function.
;
; This file is part of the compact math library for the dsPIC30.
; (c) Microchip Technology. 2003.
;-----------------------------------------------------------------------;
        .include "libm.inc"
	.ifndef ffunction
	.section .libm,code
	.endif
;-----------------------------------------------------------------------;
;
; log10f
;
;       Common logarithm elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number log10(x)
;
; Description:
;
;       Computes the common logarithm of the argument x.
;       If the argiment is not in the function domain [0,+infinity],
;       a quiet NaN is returned, and errno is set to EDOMAIN.
;       
; Notes:
;
;       The logarithm is computed using the identity:
;
;       ln(x) = log(x)/log(e)
;       log(x) = ln(x) * log(e)
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.log10f, code
	.endif
        .global _log10f

_log10f:
        rcall   _logf           ; y = ln(x)
        mov     #LOGeLO,w2      ; z = log(e)
        mov     #LOGeHI,w3      ; *
        bra     ___mulsf3       ; return ln(x) * log(e)

;-----------------------------------------------------------------------;



.include "null_signature.s"
