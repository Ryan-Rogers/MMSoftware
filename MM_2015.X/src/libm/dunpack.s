;-----------------------------------------------------------------------;
; dunpack.s: Double-precision, floating-point unpack utility
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
; _dunpack
;
;       Unpacks a floating-point operand.
;
; Input:
;
;       (w0)    Address of DUNPACK structure. 
;               The flt member contains the number to be unpacked
;               into the remaining members of the structure.
;
; Output:
;
;       (w0)    Type { ZEROTYPE, FINITETYPE, INFTYPE, NANTYPE }
;
; Notes:
;
;       If the argument is finite and non-zero, a significand
;       in the form 1.f is returned, even if the argument is subnormal.
;       The exponent is adjusted accordingly, if necessary.
;
;       If the return type is not FINITETYPE, the significand is
;       not stored in the DUNPACK structure.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.dunpack, code
	.endif
        .global __dunpack
__dunpack:

;------ Extract fraction & biased exponent

        mov     w0,w1                   ; (w1)=&x
        mov.d   [++w0],w4               ; (w7:w4)=x.flt
        mov.d   [++w0],w6               ; *
        lsr     w7,#4,w2                ; (w2)=sign & biased exponent
        and     #0x000F,w7              ; Isolate the fraction
        mov     #0x07FF,w3              ; (w3)=Exponent mask
        and     w2,w3,w2                ; (w2)=biased exponent (sign stripped)

;------ Check for zeroes and subnormals (biased exp == 0)

        bra     z,zeroorsub             ; Zero or subnormal ...

;------ Check for NaNs and Infinities

        cp      w3,w2                   ; NaN or Infinity ?
        bra     nz,finitereturn         ; No ...

;------ NaN or Infinity 

        ior     w4,w5,w3                ; Fraction == 0 ?
        ior     w6,w3,w3                ; *
        ior     w7,w3,w3                ; *
        mov     #NANTYPE,w0             ; Assume NaN
        bra     nz,exit                 ; NaN ...
        mov     #INFTYPE,w0             ; Infinite
        bra     exit                    ; Done

;------ Zero or subnormal

zeroorsub:
        ior     w4,w5,w3                ; Fraction == 0 ?
        ior     w6,w3,w3                ; *
        ior     w7,w3,w3                ; *
        bra     nz,subnormal            ; No ...
        mov.d   w4,[++w0]               ; Store the significand
        mov.d   w6,[++w0]               ; *
        mov     #ZEROTYPE,w0            ; 0.0f
        bra     exit                    ; Done

;------ Subnormal: normalize

normalize:
        dec     w2,w2                   ; exp--
subnormal:
        add     w4,w4,w4                ; Fraction <<= 1
        addc    w5,w5,w5                ; *
        addc    w6,w6,w6                ; *
        addc    w7,w7,w7                ; *
        btst    w7,#4                   ; Normalized ?
        bra     z,normalize             ; Loop until normalized ...

;------ Finite, non-zero

finitereturn:
        bset    w7,#4                   ; Explicit 1.f
        mov.d   w4,[++w0]               ; Store the significand
        mov.d   w6,[++w0]               ; *
        mov     #FINITETYPE,w0          ; Type(x)
exit:
        mov     w0,[w1+DTYP]            ; Store the type
        mov.w   w2,[w1+DEXP]            ; Store the exponent
        return                          ; Done
;-----------------------------------------------------------------------;

.include "null_signature.s"
