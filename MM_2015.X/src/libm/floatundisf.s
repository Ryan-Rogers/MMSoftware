;-----------------------------------------------------------------------;
; floatundisf.s: Convert 64-bit, signed integer to single floating-point
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
; __floatundisf: Convert 64-bit, signed integer to single floating-point
;
; Description:
;
;       Convert a 64-bit, signed integer to single floating-point.
;
; Input:
;
;       (w3:w2:w1:w0) Integer to be converted
;
; Output:
;
;       (w1:w0) Single floating-point representation of input value
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.floatundisf, code
	.endif
        .global ___floatundisf

___floatundisf:
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch

;------ Check for special argument: 0x0000000000000000

        ior     w1,w0,w4                ; arg == 0 ?
        ior     w2,w4,w4                ; *
        ior     w3,w4,w4                ; *
        bra     z,return0               ; Yes ...

;-----------------------------------------------------------------------;
;       Argument is not special
;-----------------------------------------------------------------------;

;------ Form significand, exponent, sticky & round

        mov.d   w0,w8                   ; (w9:w8) = significand
        mov.d   w2,w0                   ; *
        mul.uu  w2,#0,w2                ; (w2) = round
                                        ; (w3) = sticky
        mov     #23+FLT_BIAS,w11        ; (w11)= exponent

;------ Form the significand by aligning the MSB at position 23
 
;       Using the find-first instructions, the bit numbering is
;       such that bit 63 is numbered 1 and bit 0 is numbered 64.
;       We want to align the MSB of the argument at position 23,
;       i.e., bit number 41. So, subtracting 41 from the bit number
;       gives the shift count for aligning the MSB.
;       If the shift count is negative, it means that the MSB
;       is to the left of position 23, so a right shift is needed.

        mov     #41,w5                  ; (w5) = shift normalizer
        ff1l    w1,w4                   ; (w4) = shift count
        bra     nc,fixshift             ; Found the leading '1' ...
        sub.b   #16,w5                  ; Adjust normalizer
        ff1l    w0,w4                   ; Try again
        bra     nc,fixshift             ; Found the leading '1' ...
        sub.b   #16,w5                  ; Adjust normalizer
        ff1l    w9,w4                   ; Try again
        bra     nc,fixshift             ; Found the leading '1' ...
        sub.b   #16,w5                  ; Adjust normalizer
        ff1l    w8,w4                   ; Try again
        bra     nc,fixshift             ; Found the leading '1' ...
        sub.b   #16,w5                  ; Adjust normalizer
fixshift:
        sub.b   w4,w5,w4                ; (w4) = shift count
        bra     z,round                 ; No shift required ...
        bra     nn,shiftleft            ; Left shift required ...

;------ Shift right

shiftright:
        ior     w3,w2,w3                ; (w3) = (sticky |= round)
        and     w8,#1,w2                ; (w2) = (round = sig & 1)
        lsr     w1,w1                   ; (w9:w8) = (sig >>= 1)
        rrc     w0,w0                   ; *
        rrc     w9,w9                   ; *
        rrc     w8,w8                   ; *
        inc     w11,w11                 ; (w11) = exp++
        inc.b   w4,w4                   ; Count the bits
        bra     nz,shiftright           ; Not there yet ...
        bra     round                   ; Round and pack ...

;------ Shift left

shiftleft:
        add     w8,w8,w8                ; (w9:w8) = (sig <<= 1)
        addc    w9,w9,w9                ; *
        addc    w0,w0,w0                ; *
        addc    w1,w1,w1                ; *
        dec     w11,w11                 ; (w11) = exp--
        dec.b   w4,w4                   ; Count the bits
        bra     nz,shiftleft            ; Not there yet ...

;-----------------------------------------------------------------------;
;       Rounding
;-----------------------------------------------------------------------;

round:

;       (w3)   = sticky
;       (w2)   = round
;       (w9:w8)= s(significand)
;       (w11)  = s(exponent)

        rcall   __fpack                 ; Round and pack

return0:
        mov.d   [--w15],w10             ; Recover scratch
        mov.d   [--w15],w8              ; Recover scratch
        return                          ; Done

;-----------------------------------------------------------------------;


.include "null_signature.s"
