;-----------------------------------------------------------------------;
; fixsfsi.s: Convert floating-point to 32-bit, signed integer 
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
; __fixsfsi: Convert floating-point to 32-bit, signed integer
;
; Description:
;
;       Convert a single-precision, floating-point number to a
;       32-bit, signed integer.
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
;       (w1:w0) 32-bit, signed integer representation of input value.
;               If the input argument is NaN, LONG_MAX is returned.
;               If the conversion overflows, LONG_MIN or LONG_MAX
;               is returned, depending as the input is negative or
;               positive, respectively.
;               If the conversion underflows, zero is returned.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fixsfsi, code
	.endif
        .global ___fixsfsi

___fixsfsi:

;------ Unpack the argument

        mov.d   w0,w2                   ; (w3:w2) = Input argument
        rcall   __funpack               ; (w1:w0) = Significand (1.f)
                                        ; (w4)    = Type
                                        ; (w5)    = Biased exponent
        btsc    w4,#NANBIT              ; isNaN(arg) ?
        bclr    w3,#15                  ; Yes ... clear sign

;------ Determine shift count for aligning the binary point

        sub     #23+FLT_BIAS,w5         ; (w5) = shift count
        bra     z,setsign               ; No shift required ...
        bra     lt,shiftright           ; Right shift required ...

;------ Left shift required

        cp      w5,#8                   ; Overflow ?
        bra     lt,shiftleft            ; No ...

;------ Overflow

        mov     #0xFFFF,w0              ; (w1:w0) = LONG_MAX
        mov     #0x7FFF,w1              ; *
        cp0     w3                      ; arg < 0 ?
        bra     nn,exit                 ; Yes ... return LONG_MIN

        mov     #0x8000,w1              ; (w1:w0) = LONG_MIN
        retlw   #0x0000,w0              ; return LONG_MIN

;------ Shift left

shiftleft:
        add     w0,w0,w0                ; (w1:w0) = (sig <<= 1)
        addc    w1,w1,w1                ; *
        dec     w5,w5                   ; (w5) = count--
        bra     nz,shiftleft            ; Loop until aligned ...
        bra     setsign                 ; Set the sign and return ...

;------ Shift right

shiftright:
        .if (1)                         ; Save time at the expense of space ?
        add     w5,#24,[w15]            ; Underflow to zero ?
        bra     gt,shiftrightloop       ; No ...
        clr     w1                      ; Return 0
        retlw   #0,w0                   ; *
        .endif                          ; Save time at the expense of space ?
shiftrightloop:
        lsr     w1,w1                   ; (w1:w0) = (sig >>= 1)
        rrc     w0,w0                   ; *
        inc     w5,w5                   ; (w5) = count++
        bra     nz,shiftrightloop       ; Loop until aligned ...

;------ Set the sign of the result

setsign:
        cp0     w3                      ; arg < 0 ?
        bra     nn,exit                 ; No ...
        subr    w0,#0,w0                ; (w1:w0) = (result = -result)
        subbr   w1,#0,w1                ; *
exit:
        return                          ; Done

;-----------------------------------------------------------------------;


.include "null_signature.s"
