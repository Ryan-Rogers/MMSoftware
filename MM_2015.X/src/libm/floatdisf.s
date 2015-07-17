;-----------------------------------------------------------------------;
; floatdisf.s: Convert 64-bit, signed integer to single floating-point
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
; __floatdisf: Convert 64-bit, signed integer to single floating-point
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
	.section .libm.floatdisf, code
	.endif
        .global ___floatdisf

___floatdisf:
        mov     w8,[w15++]              ; Preserve scratch
        mov     w3,w8                   ; Preserve sign

;------ Check for special argument: 0x8000000000000000

        cp0     w3                      ; arg >= 0 ?
        bra     ge,notspecial           ; Yes ...

;------ Argument is negative

negative:
        subr    w0,#0,w0                ; (w3:w0) = |arg|
        subbr   w1,#0,w1                ; *
        subbr   w2,#0,w2                ; *
        subbr   w3,#0,w3                ; *
        bra     nn,notspecial           ; arg is in range

;------ Maximum negative integer: -1.0 x 2^63

        mov     #LLONG_MINHI,w1         ; Convert to floating-point
        bra     return0                 ; Done

;-----------------------------------------------------------------------;
;       Argument is not special
;-----------------------------------------------------------------------;

notspecial:

        rcall ___floatundisf

        btsc    w8,#15                  ; Result negative ?
        bset    w1,#15                  ; Yes
return0:
        mov     [--w15],w8              ; Recover scratch
        return                          ; Done

;-----------------------------------------------------------------------;


.include "null_signature.s"
