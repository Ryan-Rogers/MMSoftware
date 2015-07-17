;-----------------------------------------------------------------------;
; udivsi3.s: Integer division elementary operation.
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
; __udivsi3
;
;       Unsigned 32-bit integer division.
;
; Input:
;
;       (w1:w0) Dividend (Q)
;       (w3:w2) Divisor (D)
;
; Output:
;
;       (w1:w0) Quotient
;       (w5:w4) Remainder
;
; Description:
;
;       Restoring, sequential divison.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.udivsi3, code
	.endif
        .global ___udivsi3

___udivsi3:
        mul.uu  w4,#0,w4        ; (w5:w4) = R = 0
        mov     #32,w6          ; (w6) = iterator

;------ Calculate the next quotient & remainder bit

nextbit:

;------ (R,Q) <<= 1

        sl      w0,w0           ; (w1:w0) = Q <<= 1
        rlc     w1,w1           ; *
        rlc     w4,w4           ; (w5:w4) = R <<= 1
        rlc     w5,w5           ; *

;------ R -= D

        bset    w0,#0           ; (w1:w0) = Q += 1
        sub     w4,w2,w4        ; (w5:w4) = R -= D
        subb    w5,w3,w5        ; *
                                ; Carry set means we did not need to borrow...
        bra     c,iterate       ; No restore needed ...

;------ Restore R: R += D

        add     w4,w2,w4        ; (w5:w4) = R += D
        addc    w5,w3,w5        ; *
        bclr    w0,#0           ; (w1:w0) = Q -= 1

;------ Iterate through the bits

iterate:
        dec     w6,w6           ; (w6) = iterator--
        bra     nz,nextbit      ; Get all 32 bits ...

        return                  ; Done

;-----------------------------------------------------------------------;


.include "null_signature.s"
