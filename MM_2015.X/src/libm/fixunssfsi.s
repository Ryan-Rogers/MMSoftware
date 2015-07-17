;-----------------------------------------------------------------------;
; fixunssfsi.s: Convert floating-point to 32-bit, unsigned integer 
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
; __fixunssfsi: Convert floating-point to 32-bit, unsigned integer
;
; Description:
;
;       Convert a single-precision, floating-point number to a
;       32-bit, unsigned integer.
;
;       For compatibility with the C compiler, the conversion is rounded
;       towards zero.
;
;       The C standard specifies that if the floating-point number is
;       negative, the result is undefined. This implementation returns
;       zero for negative arguments.
;       The portable range of floating-point values is (-1,ULONG_MAX+1).
;
; Input:
;
;       (w1:w0) Floating-point number to be converted
;
; Output:
;
;       (w1:w0) 32-bit, unsigned integer representation of input value.
;               If the input argument is NaN, ULONG_MAX is returned.
;               If the conversion overflows, ULONG_MAX is returned.
;               If the inpit argument is negative, ULONG_MIN is returned.
;               If the conversion underflows, zero is returned.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fixunssfsi, code
	.endif
        .global ___fixunssfsi

___fixunssfsi:

;------ Unpack the argument

        mov.d   w0,w2                   ; (w3:w2) = Input argument
        rcall   __funpack               ; (w1:w0) = Significand (1.f)
                                        ; (w4)    = Type
                                        ; (w5)    = Biased exponent
        btsc    w4,#NANBIT              ; isNaN(arg) ?
        bclr    w3,#15                  ; Yes ... clear sign
        btst    w3,#15                  ; x < 0 ?
        bra     nz,returnzero           ; Yes ... return zero

;------ Determine shift count for aligning the binary point

        sub     #FLT_PREC-1+FLT_BIAS,w5 ; (w5) = shift count
        bra     z,exit                  ; No shift required ...
        bra     lt,shiftright           ; Right shift required ...

;------ Left shift required

        cp      w5,#33-FLT_PREC         ; Overflow ?
        bra     lt,shiftleft            ; No ...

;------ Overflow

        mov     #0x8000,w1              ; (w1:w0) = ULONG_MAX
        retlw   #0,w0                   ; Done

;------ Shift left

shiftleft:
        add     w0,w0,w0                ; (w1:w0) = (sig <<= 1)
        addc    w1,w1,w1                ; *
        dec     w5,w5                   ; (w5) = count--
        bra     nz,shiftleft            ; Loop until aligned ...
        return                          ; Done

;------ Shift right

shiftright:
        add     w5,#FLT_PREC,[w15]      ; Underflow to zero ?
        bra     lt,returnzero           ; Yes ...
shiftrightloop:
        lsr     w1,w1                   ; (w1:w0) = (sig >>= 1)
        rrc     w0,w0                   ; *
        inc     w5,w5                   ; (w5) = count++
        bra     nz,shiftrightloop       ; Loop until aligned ...
exit:
        return                          ; Done

;------ Result is zero

returnzero:
        clr     w1                      ; Return 0
        retlw   #0,w0                   ; *

;-----------------------------------------------------------------------;


.include "null_signature.s"
