;-----------------------------------------------------------------------;
; funpack.s: Single-precision, floating-point unpack utility
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
; _funpack
;
;       Unpacks a floating-point operand.
;
; Input:
;
;       (w1:w0) Floating-point number to be unpacked
;
; Output:
;
;       (w1:w0) Significand (1.f)
;       (w4)    Type { ZEROTYPE, FINITETYPE, INFTYPE, NANTYPE }
;       (w5)    Biased exponent
;
; Notes:
;
;       If the argument is finite and non-zero, a significand
;       in the form 1.f is returned, even if the argument is subnormal.
;       The exponent is adjusted accordingly, if necessary.
;
; Register Usage:
;
;       None other than the input and output registers.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.funpack, code
	.endif
        .global __funpack
__funpack:

;------ Extract fraction & biased exponent

        lsr     w1,#7,w5        ; (w5)=sign & biased exponent
        and     #0x7F,w1        ; (w1:w0)=fraction
        and     #0xFF,w5        ; (w5)=biased exponent (strip sign)

;------ Check for Zeroes and subnormals (biased exp == 0)

        bra     z,zeroorsub     ; Zero or subnormal ...

;------ Check for NaNs and Infinities

        add.b   w5,#1,[w15]     ; exp==255 (NaN or Infinity) ?
        bra     z,nanorinf      ; Yes ...

;------ Finite, non-zero

finitereturn:
        bset    w1,#7           ; Explicit 1.f
        retlw   #FINITETYPE,w4  ; Finite

;------ NaN or Infinity

nanorinf:
        ior     w0,w1,[w15]     ; fraction == 0 ?
        bra     z,infinite      ; Yes ...
        retlw   #NANTYPE,w4     ; NaN
infinite:
        retlw   #INFTYPE,w4     ; Infinite

;------ Zero or subnormal

zeroorsub:
        ior     w0,w1,[w15]     ; fraction == 0 ?
        bra     nz,subnormal    ; No ...
        retlw   #ZEROTYPE,w4    ; 0.0f

;------ Subnormal: normalize

normalize:
        dec     w5,w5           ; exp--
subnormal:
        add     w0,w0,w0        ; fraction <<= 1
        addc.b  w1,w1,w1        ; *
        bra     nn,normalize    ; Loop until normalized ...

        bset    w1,#7           ; Explicit 1.f
        retlw   #FINITETYPE,w4  ; Finite
;-----------------------------------------------------------------------;

.include "null_signature.s"
