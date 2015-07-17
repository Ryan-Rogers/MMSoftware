;-----------------------------------------------------------------------;
; floatundidf.s: Convert 64-bit, signed integer to double floating-point
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
; __floatundidf: Convert 64-bit, signed integer to floating-point
;
; Description:
;
;       Convert a 64-bit, signed integer to double-precision.
;
; Input:
;
;       (w3:w2:w1:w0) Integer to be converted
;
; Output:
;
;       (w3:w2:w1:w0) Double floating-point representation of input value
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.floatundidf, code
	.endif

        .global ___floatundidf

___floatundidf:
        mov.d   w8,[w15++]              ; Preserve scratch

;------ Check for special argument: 0x0000000000000000 

        ior     w1,w0,w4                ; arg == 0 ?
        ior     w2,w4,w4                ; *
        ior     w3,w4,w4                ; *
        bra     z,return0               ; Yes ...

;-----------------------------------------------------------------------;
;       Argument is not special
;-----------------------------------------------------------------------;

;------ Form significand, exponent, sticky & round

        mov     #52+DBL_BIAS,w6         ; (w6) = exponent

;------ Form the significand by aligning the MSB at position 52
 
;       Using the find-first instructions, the bit numbering is
;       such that bit 63 is numbered 1 and bit 0 is numbered 64.
;       We want to align the MSB of the argument at position 52,
;       i.e., bit number 12. So, subtracting 12 from the bit number
;       gives the shift count for aligning the MSB.
;       If the shift count is negative, it means that the MSB
;       is to the left of position 52, so a right shift is needed.

        mov     #12,w5                  ; (w5) = shift normalizer
        ff1l    w3,w7                   ; (w7) = shift count
        bra     nc,fixshift             ; Found the leading '1' ...
        sub.b   #16,w5                  ; Adjust normalizer
        ff1l    w2,w7                   ; Try again
        bra     nc,fixshift             ; Found the leading '1' ...
        sub.b   #16,w5                  ; Adjust normalizer
        ff1l    w1,w7                   ; Try again
        bra     nc,fixshift             ; Found the leading '1' ...
        sub.b   #16,w5                  ; Adjust normalizer
        ff1l    w0,w7                   ; Try again
        bra     nc,fixshift             ; Found the leading '1' ...
        sub.b   #16,w5                  ; Adjust normalizer
fixshift:
        sub.b   w7,w5,w7                ; (w7) = shift count
        mul.uu  w4,#0,w4                ; (w4) = round
                                        ; (w5) = sticky

        bra     z,round                 ; No shift required ...
        bra     nn,shiftleft            ; Left shift required ...

;------ Shift right

shiftright:
        ior     w5,w4,w5                ; (w5) = (sticky |= round)
        and     w0,#1,w4                ; (w4) = (round = sig & 1)
        lsr     w3,w3                   ; (w3:w0) = (sig >>= 1)
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *
        rrc     w0,w0                   ; *
        inc     w6,w6                   ; (w6) = exp++
        inc.b   w7,w7                   ; Count the bits
        bra     nz,shiftright           ; Not there yet ...
        bra     round                   ; Round and pack ...

;------ Shift left

shiftleft:
        add     w0,w0,w0                ; (w3:w0) = (sig <<= 1)
        addc    w1,w1,w1                ; *
        addc    w2,w2,w2                ; *
        addc    w3,w3,w3                ; *
        dec     w6,w6                   ; (w6) = exp--
        dec.b   w7,w7                   ; Count the bits
        bra     nz,shiftleft            ; Not there yet ...

;-----------------------------------------------------------------------;
;       Rounding
;-----------------------------------------------------------------------;

round:

;       (w3:w0)= significand
;       (w4)   = round
;       (w5)   = sticky
;       (w6)   = biased exponent

        rcall   __dpack                 ; Round and pack

return0:
        mov.d   [--w15],w8              ; Recover scratch
        return                          ; Done

;-----------------------------------------------------------------------;

.include "null_signature.s"
