;-----------------------------------------------------------------------;
; dpack.s: Double-precision, floating-point pack utility.
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
; _dpack:
;
; Description:
;
;       Rounds and packs a double-precision floating-point number
;
; Input:
;
;       (w3:w0)= significand
;       (w4)   = round
;       (w5)   = sticky
;       (w6)   = biased exponent
;
; Output:
;
;       (w3:w0)= rounded and packed result (unsigned)
;
; Notes:
;
;       The result has the sign bit set to zero. The caller is
;       responsible for changing this if applicable.
;
;       Rounding must be done after the operand has been normalized
;       (for normalized numbers) or the binary point is correctly
;       aligned (for subnormals). In either case, rounding may
;       require that the exponent be adjusted.
;
;       In the case of normalized numbers, rounding may cause 1.f
;       to become 2.f, requiring that the significand be right-shifted,
;       as well as having the exponent adjusted.
;
;       In the case of subnormals, rounding may cause 0.f to become
;       1.f. Note that in this case, only the exponent need be
;       adjusted, since the significand is normalized. This is an
;       artifact of the fact that the smallest exponent of a normalized
;       number is EMIN, which is also the exponent of subnormals.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.dpack, code
	.endif

        .global __dpack

__dpack:

;------ Begin rounding

        mov     #DBL_BIAS+DBL_EMIN,w8   ; Subnormal exponent
        mov     #5,w7                   ; Bit to test for exponent adjustment
        sub     w6,w8,w8                ; Result exponent < EMIN ?
        bra     ge,notsubnormal         ; No ...

;------ Subnormal rounding

        mov     #0,w6                   ; Result exponent

        .if     (1)                     ; Save time at the expense of size ?
        mov     #-(DBL_PREC+2),w7       ; Underflow shift limit
        cp      w8,w7                   ; Underflow to zero ?
        bra     le,zerosig              ; Yes ... result is zero
        .endif

;------ Denormalize: (w8) is the shift count

subnormal:
        ior     w5,w4,w5                ; (w5) = sticky |= round
        and     w0,#1,w4                ; (w4) = round = significand & 1
        lsr     w3,w3                   ; significand >>= 1
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *
        rrc     w0,w0                   ; *
        inc     w8,w8                   ; Exponent == EMIN ?
        bra     nz,subnormal            ; Not yet ...

;------ Check for rounding

        mov     #4,w7                   ; Bit to test for exponent adjustment

;------ Normalized rounding

notsubnormal:

;------ Round up if (round && (sticky || (significand & 1)))

        and     w0,#1,w8                ; significand & 1
        ior     w8,w5,w8                ; sticky || (significand & 1)
        and     w8,w4,w8                ; round && (sticky || (significand & 1))
        bra     z,packupandgo           ; No rounding required ...

;------ Rounding required

        add     w0,#1,w0                ; significand++
        addc    w1,#0,w1                ; *
        addc    w2,#0,w2                ; *
        addc    w3,#0,w3                ; *

        btst    w3,w7                   ; Need to adjust exponent ?
        bra     z,packupandgo           ; No ...
        inc     w6,w6                   ; Exponent++

        cp      w7,#5                   ; Normalized rounding ?
        bra     nz,packupandgo          ; No ... significand is ok ...

        lsr     w3,w3                   ; significand >>= 1
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *
        rrc     w0,w0                   ; *

;------ Pack the result

packupandgo:

;------ Check for overflow

        mov     #DBL_BIAS+DBL_EMAX+1,w8 ; (w8)=biased exponent max+1
        cp      w6,w8                   ; Exponent <= exponent max ?
        bra     lt,nooverflow           ; Yes ...
        mov     w8,w6                   ; Result = Infinity
zerosig:
        mul.uu  w0,#0,w0                ; Significand = zero
        mul.uu  w2,#0,w2                ; *
nooverflow:

        sl      w6,#4,w6                ; Align the exponent
        and     #0x000F,w3              ; Clear sign & exponent
        ior     w6,w3,w3                ; Insert the exponent
        
        return                          ; Done

;-----------------------------------------------------------------------;

.include "null_signature.s"
