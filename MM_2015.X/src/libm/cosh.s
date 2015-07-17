;-----------------------------------------------------------------------;
; cosh.s: Floating-point hyperbolic cosine elementary function.
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
; cosh
;
;       Double-precision hyperbolic cosine elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number x
;
; Output:
;
;       (w3:w0) Floating-point number hyperbolic cosine(x)
;
; Description:
;
;       Computes the hyperbolic cosine of the argument x.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.cosh,code
	.endif
        .global _cosh
        .global _coshl

_cosh:
_coshl:
        lnk     #4*2                    ; Reserve 4 words scratch space
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch


;------ Determine operand type

        rcall   __dtype                 ; (w4) = type(x)

;------ Check for Infinities and NaNs

        cp      w4,#INFTYPE             ; Infinity or NaN ?
        bra     gtu,__dunpack2exit      ; NaN ... return(x) ...
        bclr    w3,#15                  ; (w3:w0) = y = |x|
        bra     z,__dunpack2exit        ; Infinity ... return(|x|) ...

;-----------------------------------------------------------------------;
;       x is finite.
;-----------------------------------------------------------------------;

        mov     #0x0000,w13             ; (w13) = flag = cosh required
        rcall   ___sinhcosh             ; (w3:w0) = cosh(x)
        bra     __dunpack2exit          ; Destroy frame and return ...
;-----------------------------------------------------------------------;

.include "null_signature.s"
