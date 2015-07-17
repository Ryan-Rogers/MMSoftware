;-----------------------------------------------------------------------;
;
; _frexpf: Single-precision floating-point fraction/exponent function.
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
; _frexpf
;
;	FTYPE _frexpf(Ufloat32 x);
;
; Input:
;
;	(w1:w0)	x
;
; Output:
;
;	(w1:w0) fraction(x) in range [0.5,1)
;	(w4)	Type {ZEROTYPE, FINITETYPE, INFTYPE, NANTYPE }
;	(w5)	n, where x = fraction(x) * 2^n
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.frexpf, code
	.endif
	.global	__frexpf

__frexpf:

;------ Extract significand & biased exponent

	mov.d	w0,w6		; (w7:w6)=x
	rcall	__funpack	; (w4)   =x(Type)
				; (w5)   =x(Biased exponent)
				; (w1:w0)=x(Significand)

;------ Check for Zeros, Infinities and NaNs

	cp	w4,#FINITETYPE	; Finite ?
	bra	z,finite	; Yes ...

	mov.d	w6,w0		; Return x
	retlw	#0,w5		; Zero, Infinity, or NaN

;------ Finite

finite:
	sub	#FLT_BIAS-1,w5	; (w5)=unbiased exponent
	and	#0x7F,w1	; strip sign & exp
        mov	#126<<7,w4	; biased exp = 2^(-1)
	ior	w1,w4,w1	; (w1:w0)=exponent & fraction
	btsc	w7,#15		; Input negative ?
	bset	w1,#15		; Yes ... make output negative
        retlw	#FINITETYPE,w4	; Finite

;-----------------------------------------------------------------------;

.include "null_signature.s"
