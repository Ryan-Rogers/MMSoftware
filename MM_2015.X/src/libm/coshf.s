;-----------------------------------------------------------------------;
; coshf.s: Floating-point hyperbolic cosine elementary function.
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
; coshf
;
;       Single-precision hyperbolic cosine elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number hyperbolic cosine(x)
;
; Description:
;
;       Computes the hyperbolic cosine of the argument x.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.coshf, code
	.endif
        .global _coshf

_coshf:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; *

;------ Extract significand & biased exponent

        mov.d   w0,w8           ; (w9:w8)=x
        rcall   __funpack       ; (w4)   =x(Type)
                                ; (w5)   =x(Biased exponent)
                                ; (w1:w0)=x(Significand)
        mov.d   w8,w0           ; (w1:w0)=x

;------ Check for Infinities and NaNs

        cp      w4,#INFTYPE     ; Infinity or NaN ?
        bra     gtu,return0     ; NaN ... return(x) ...
        bclr    w1,#15          ; (w1:w0) = y = |x|
        bra     z,return0       ; Infinity ... return(|x|) ...

;-----------------------------------------------------------------------;
;       x is finite.
;-----------------------------------------------------------------------;
finite:
        mov.d   w0,w10          ; (w11:w10) = x
        mov     #0x0000,w8      ; (w8) = flag = cosh required
        rcall   __sinhcoshf     ; (w1:w0) = cosh(x)

;-----------------------------------------------------------------------;
return0:
        mov.d   [--w15],w10     ; Recover scratch
        mov.d   [--w15],w8      ; *
        return
;-----------------------------------------------------------------------;

.include "null_signature.s"
