;-----------------------------------------------------------------------;
; fixsfdi.s: Convert floating-point to 64-bit, signed integer 
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
; __fixsfdi: Convert floating-point to 64-bit, signed integer
;
; Description:
;
;       Convert a single-precision, floating-point number to a
;       64-bit, signed integer.
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
;               64-bit, signed integer representation of input value.
;               If the input argument is NaN, LLONG_MAX is returned.
;               If the conversion overflows, LLONG_MIN or LLONG_MAX
;               is returned, depending as the input is negative or
;               positive, respectively.
;               If the conversion underflows, zero is returned.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fixsfdi, code
	.endif
        .global ___fixsfdi

___fixsfdi:

;------ Unpack the argument

        mov.d   w0,w6                   ; (w7:w6) = Input argument
        rcall   __funpack               ; (w1:w0) = Significand (1.f)
                                        ; (w4)    = Type
                                        ; (w5)    = Biased exponent
        mul.uu  w2,#0,w2                ; (w3:w2:w1:w0) = Significand
        btsc    w4,#NANBIT              ; isNaN(arg) ?
        bclr    w7,#15                  ; Yes ... clear sign

;------ Determine shift count for aligning the binary point

        sub     #23+FLT_BIAS,w5         ; (w5) = shift count
        bra     z,setsign               ; No shift required ...
        bra     lt,shiftright           ; Right shift required ...

;------ Left shift required

        mov     #40,w6                  ; Max left shift
        cp      w5,w6                   ; Overflow ?
        bra     lt,shiftleft            ; No ...

;------ Overflow

        mov     #0x7FFF,w3              ; (w3:w2:w1:w0) = LLONG_MAX
        mov     #0xFFFF,w2              ; *
        mul.su  w2,#1,w0                ; *
        cp0     w7                      ; arg < 0 ?
        bra     nn,exit                 ; Yes ... return LLONG_MIN

        mov     #0x8000,w3              ; (w3:w2:w1:w0) = LLONG_MIN
        mul.uu  w0,#0,w0                ; *
        retlw   #0x0000,w2              ; return LLONG_MIN

;------ Shift left

shiftleft:
        add     w0,w0,w0                ; (w3:w2:w1:w0) = (sig <<= 1)
        addc    w1,w1,w1                ; *
        addc    w2,w2,w2                ; *
        addc    w3,w3,w3                ; *
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
        cp0     w7                      ; arg < 0 ?
        bra     nn,exit                 ; No ...
        subr    w0,#0,w0                ; (w3:w2:w1:w0) = (result = -result)
        subbr   w1,#0,w1                ; *
        subbr   w2,#0,w2                ; *
        subbr   w3,#0,w3                ; *
exit:
        return                          ; Done

;-----------------------------------------------------------------------;


.include "null_signature.s"
