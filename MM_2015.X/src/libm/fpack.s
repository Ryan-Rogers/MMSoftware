;-----------------------------------------------------------------------;
; fpack.s: Single-precision, floating-point pack utility.
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
; _fpack:
;
; Description:
;
;       Rounds and packs a single-precision floating-point number
;
; Input:
;
;       (w2)   = round
;       (w3)   = sticky
;       (w9:w8)= significand
;       (w11)  = biased exponent
;
; Output:
;
;       (w1:w0)= rounded and packed result (unsigned)
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
;       artifact of the fact that the largest negative exponent of
;       a normalized number is -126, which is also the exponent of
;       subnormals.
;
; Register usage:
;
;       The following register contents are not preserved:
;
;               w0, w1, w2, w3, w11
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fpack, code
	.endif
        .global __fpack

__fpack:

;------ Begin rounding

        mov     #8,w1                   ; Bit to test for exponent adjustment
        sub     w11,#FLT_BIAS+FLT_EMIN,w0 ; Result exponent < Emin ?
        bra     ge,notsubnormal         ; No ...

;------ Subnormal rounding

        mov     #0,w11                  ; Result exponent

        .if     (1)                     ; Save time at the expense of size ?
        mov     #-(FLT_PREC+2),w1       ; Underflow shift limit
        cp      w0,w1                   ; Underflow to zero ?
        bra     le,zerosig              ; Yes ... result is zero
        .endif

;------ Denormalize: (w0) is the shift count

subnormal:
        ior     w3,w2,w3                ; (w3) = sticky |= round
        and     w8,#1,w2                ; (w2) = round = significand & 1
        lsr     w9,w9                   ; significand >>= 1
        rrc     w8,w8                   ; *
        inc     w0,w0                   ; Exponent == -126 ?
        bra     nz,subnormal            ; Not yet ...

;------ Check for rounding

        mov     #7,w1                   ; Bit to test for exponent adjustment

;------ Normalized rounding

notsubnormal:

;------ Round up if (round && (sticky || (significand & 1)))

        and     w8,#1,w0        ; significand & 1
        ior     w0,w3,w0        ; sticky || (significand & 1)
        and     w0,w2,w0        ; round && (sticky || (significand & 1))
        bra     z,packupandgo   ; No rounding required ...

;------ Rounding required

        add     w8,#1,w8        ; significand++
        addc    w9,#0,w9        ; *

        btst    w9,w1           ; Need to adjust exponent ?
        bra     z,packupandgo   ; No ...
        inc     w11,w11         ; Exponent++

        cp      w1,#8           ; Normalized rounding ?
        bra     nz,packupandgo  ; No ... significand is ok ...

        lsr     w9,w9           ; significand >>= 1
        rrc     w8,w8           ; *

;------ Pack the result

packupandgo:

;------ Check for overflow

        mov     #255,w2                 ; (w2)=biased exponent max+1
        cp      w11,w2                  ; Exponent >= exponent max ?
        bra     ge,overflow             ; Yes ... return(infinity)

;------ No overflow

        sl      w11,#7,w11              ; Align the exponent
        and     #0x7F,w9                ; Clear sign & exponent
        ior     w11,w9,w1               ; Insert the exponent
        mov     w8,w0                   ; Insert the fraction
        
        return                          ; Done

;------ Overflow

overflow:
        mov     #255<<7,w11             ; Result exponent = infinity
zerosig:
        mov     w11,w1                  ; Insert the exponent
        retlw   #0,w0                   ; Done

;-----------------------------------------------------------------------;

.include "null_signature.s"
