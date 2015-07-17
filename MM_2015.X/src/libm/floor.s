;-----------------------------------------------------------------------;
;
; floor.s: Double-precision floating-point floor function.
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

;-----------------------------------------------------------------------;
;
; floor: Double-precision floating-point floor function.
;
; Input:
;
;       (w3:w2:w1:w0) x: argument to be floored
;
; Output:
;
;       (w3:w2:w1:w0) Floored argument
;
; Description:
;
;       Computes the largest integral value not greater than x.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.floor, code
	.endif
        .global _floor
        .global _floorl

_floor:
_floorl:
        clr     w4              ; Chop below 2^0
        rcall   __dchop         ; Chop fractional bits
        bra     z,exit          ; Nothing chopped ...

;------ Bits were chopped

        mov     #DP_ONE3,w7     ; (w7:w4) = 1.0
        mov     #DP_ONE2,w6     ; *
        mul.uu  w4,#0,w4        ; *
        btsc    w3,#15          ; x < 0 ?
        rcall   ___subdf3       ; Yes ... result -= 1.0
exit:
        return                  ; Done

;-----------------------------------------------------------------------;




.include "null_signature.s"
