;-----------------------------------------------------------------------;
; fixunssfdi.s: Convert floating-point to 64-bit, unsigned integer 
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
; __fixunssfdi: Convert floating-point to 64-bit, unsigned integer
;
; Description:
;
;       Convert a single-precision, floating-point number to a
;       64-bit, unsigned integer.
;
;       For compatibility with the C compiler, the conversion is rounded
;       towards zero.
;
; Input:
;
;       (w1:w0) Floating-point number to be converted
;
; Output:
;
;       (w3:w2:w1:w0)
;               64-bit, unsigned integer representation of input value.
;               If the input argument is NaN, ULLONG_MAX is returned.
;               If the conversion overflows, ULLONG_MAX is returned.
;               If the input argument is negative, zero is returned.
;               If the conversion underflows, zero is returned.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fixunssfdi, code
	.endif
        .global ___fixunssfdi

___fixunssfdi:

;------ Unpack the argument

        mov.d   w0,w6                   ; (w7:w6) = Input argument
        rcall   __funpack               ; (w1:w0) = Significand (1.f)
                                        ; (w4)    = Type
                                        ; (w5)    = Biased exponent
        mul.uu  w2,#0,w2                ; (w3:w2:w1:w0) = Significand
        btsc    w4,#NANBIT              ; isNaN(arg) ?
        bclr    w7,#15                  ; Yes ... clear sign
        btst    w7,#15                  ; x < 0 ?
        bra     nz,returnzero           ; Yes ... return zero

;------ Determine shift count for aligning the binary point

        sub     #23+FLT_BIAS,w5         ; (w5) = shift count
        bra     z,exit                  ; No shift required ...
        bra     lt,shiftright           ; Right shift required ...

;------ Left shift required

        mov     #40,w6                  ; Max left shift
        cp      w5,w6                   ; Overflow ?
        bra     lt,shiftleft            ; No ...

;------ Overflow

        mov     #0x8000,w3              ; (w3:w2:w1:w0) = LLONG_MAX
        mul.uu  w0,#0,w0                ; *
        retlw   #0x0000,w2              ; return LLONG_MAX

;------ Shift left

shiftleft:
        add     w0,w0,w0                ; (w3:w2:w1:w0) = (sig <<= 1)
        addc    w1,w1,w1                ; *
        addc    w2,w2,w2                ; *
        addc    w3,w3,w3                ; *
        dec     w5,w5                   ; (w5) = count--
        bra     nz,shiftleft            ; Loop until aligned ...
exit:
        return                          ; Done

;------ Shift right

shiftright:
        add     w5,#FLT_PREC,[w15]      ; Underflow to zero ?
        bra     le,returnzero           ; Yes ...
shiftrightloop:
        lsr     w1,w1                   ; (w1:w0) = (sig >>= 1)
        rrc     w0,w0                   ; *
        inc     w5,w5                   ; (w5) = count++
        bra     nz,shiftrightloop       ; Loop until aligned ...
        return                          ; Done

;------ Return zero

returnzero:
        mul.uu  w2,#0,w2                ; Return 0
        clr     w1                      ; *
        retlw   #0,w0                   ; *

;-----------------------------------------------------------------------;


.include "null_signature.s"
