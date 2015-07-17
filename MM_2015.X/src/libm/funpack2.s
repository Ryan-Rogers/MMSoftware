;-----------------------------------------------------------------------;
; funpack2.s: Single-precision floating-point unpack utility.
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
; _funpack2:
;
; Description:
;
;       Unpacks two floating-point operands
;
; Input:
;
;       (w1:w0) Operand a
;       (w3:w2) Operand b
;
; Output:
;
;       (w7:w6) a(Significand)
;       (w9:w8) a
;       (w10)   a(Type)
;       (w11)   a(Biased exponent)
;
;       (w1:w0) b(Significand)
;       (w3:w2) b
;       (w4)    b(Type)
;       (w5)    b(Biased exponent)
;
;       (N)     Set if either operand is a NaN
;
; Register Usage:
;
;       None other than the input and output registers.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.funpack2, code
	.endif
        .global __funpack2

__funpack2:

;------ Unpack operand a

        mov.d   w0,w8           ; (w9:w8)=a
        rcall   __funpack       ; (w4)   =a(Type)
                                ; (w5)   =a(Biased exponent)
                                ; (w1:w0)=a(Significand)
        mov.d   w0,w6           ; (w6:w7)=a(Significand)
        mov.d   w4,w10          ; (w10)  =a(Type)
                                ; (w11)  =a(Biased exponent)

;------ Unpack operand b

        mov.d   w2,w0           ; b to argreg for funpack
        rcall   __funpack       ; (w4)   =b(Type)
                                ; (w5)   =b(Biased exponent)
                                ; (w1:w0)=b(Significand)

;------ Check for NaNs

        ior.b   w10,w4,[w15]    ; isNaN(a) || isNaN(b) ?
        return                  ; (N) set if so

;-----------------------------------------------------------------------;

.include "null_signature.s"
