;-----------------------------------------------------------------------;
; dtype.s: Double-precision, floating-point type classification
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
; _dtype
;
;       Determine the type of a floating-point operand.
;
; Input:
;
;       (w3:w2:w1:w0)   Double-precision, floating-point operand x
;
; Output:
;
;       (w4)    Type { ZEROTYPE, FINITETYPE, INFTYPE, NANTYPE }
;
; Notes:
;
;       The input argument is preserved.
;       Registers w4 and w5 are scratch.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.dtype, code
	.endif
        .global __dtype
__dtype:

;------ Extract fraction & biased exponent

        mov     #0x7FF0,w5              ; (w5)=Exponent mask
        and     w3,w5,w4                ; (w4)=biased exponent

;------ Check for zeroes and subnormals (biased exp == 0)

        bra     z,zeroorsub             ; Zero or subnormal ...

;------ Check for NaNs and Infinities

        cp      w5,w4                   ; NaN or Infinity ?
        bra     z,NaNorInf              ; Yes ...
isFinite:
        retlw   #FINITETYPE,w4          ; Indicate finite

;------ NaN or Infinity 

NaNorInf:
        rcall   checkfrac               ; Fraction == 0 ?
        bra     nz,isNaN                ; NaN ...
        retlw   #INFTYPE,w4             ; Indicate Infinite
isNaN:
        retlw   #NANTYPE,w4             ; Indicate NaN

;------ Zero or subnormal

zeroorsub:
        rcall   checkfrac               ; Fraction == 0 ?
        bra     nz,isFinite             ; No ...
        retlw   #ZEROTYPE,w4            ; Indicate 0.0f

checkfrac:
        and     w3,#0x000F,w4           ; (w4)=Fraction msb's
        ior     w0,w1,w5                ; Fraction == 0 ?
        ior     w2,w5,w5                ; *
        ior     w4,w5,w5                ; *
        return                          ; <z> set if fraction == 0.0
;-----------------------------------------------------------------------;
        .if (0)                         ; C calling conventions
        .global ___dtype
___dtype:
        rcall   __dtype                 ; (w4) = type
        mov     w4,w0                   ; (w0) = type
        return                          ; Done
        .endif                          ; C calling conventions
;-----------------------------------------------------------------------;

.include "null_signature.s"
