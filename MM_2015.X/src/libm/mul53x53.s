;-----------------------------------------------------------------------;
; mul53x53.s: Form the 106-bit product of two unsigned 53-bit integers.
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
; _mul53x53
;       Form the 106-bit product of two unsigned 53-bit integers.
;
; Input:
;
;       (w0)    Floating-point multiplier (&a)
;       (w1)    Floating-point multiplicand (&b)
;       (w2)    Floating-point product (&phi)
;
; Output:
;
;       (w3:w0) Most-significant 53-bits of the product
;       [w2]    Least-significant 53-bits of the product
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.mul53x53, code
	.endif
        .global __mul53x53

__mul53x53:
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;-----------------------------------------------------------------------;
;       Compute the product: 53 x 53 -> 106
;-----------------------------------------------------------------------;

;------ Initialize the product registers

        mov.w   [w0+0],w3               ; a0
        mul.uu  w3,[w1],w4              ; a0*b0

        mov.w   [w0+4],w3               ; a2
        mul.uu  w3,[w1++],w6            ; a2*b0

        mov.w   [w0+6],w3               ; a3
        mul.uu  w3,[w1++],w8            ; a3*b1

        mul.uu  w3,[++w1],w10           ; a3*b3

        sub     #6,w1                   ; &b0

;------ Compute the remaining sub-products

        rcall   muladd7                 ; a3*b0

        mov.w   [w0+2],w3               ; a1
        rcall   muladd5                 ; a1*b0

        inc2    w1,w1                   ; &b1

        rcall   muladd6                 ; a1*b1

        mov.w   [w0+4],w3               ; a2
        rcall   muladd7                 ; a2*b1

        mov.w   [w0+0],w3               ; a0
        rcall   muladd5                 ; a0*b1

        inc2    w1,w1                   ; &b2

        rcall   muladd6                 ; a0*b2

        mov.w   [w0+4],w3               ; a2
        rcall   muladd8                 ; a2*b2

        mov.w   [w0+6],w3               ; a3
        mul.uu  w3,[w1],w12             ; a3*b2
        add.w   w12,w9,w9               ; *
        addc.w  w13,w10,w10             ; *

        mov.w   [w0+2],w3               ; a1
        rcall   muladd7                 ; a1*b2

        inc2    w1,w1                   ; &b3

        rcall   muladd8                 ; a1*b3

        mov.w   [w0+0],w3               ; a0
        rcall   muladd7                 ; a0*b3

        mov.w   [w0+4],w3               ; a2
        mul.uu  w3,[w1],w12             ; a2*b3
        add.w   w12,w9,w9               ; *
        addc.w  w13,w10,w10             ; *

;------ Pass back the 53 lsb of the product

        lsr     w7,#5,w0                ; Preserve upper bits
        and.w   w7,#0x1f,w7             ; Mask off the upper bits
        mov.d   w4,[w2++]               ; Pass back the 53 lsb
        mov.d   w6,[w2++]               ; *

;------ Pass back the 53 msb of the product

        sl      w8,#11,w11              ; Pass back the 53 msb
        ior     w0,w11,w0               ; *
        lsr     w8,#5,w1                ; *
        sl      w9,#11,w11              ; *
        ior     w1,w11,w1               ; *
        lsr     w9,#5,w2                ; *
        sl      w10,#11,w11             ; *
        ior     w2,w11,w2               ; *
        lsr     w10,#5,w3               ; *

;------ Exit

        mov.d   [--w15],w12             ; Recover scratch
        mov.d   [--w15],w10             ; Recover scratch
        mov.d   [--w15],w8              ; Recover scratch
        return                          ; Done

muladd5:
        mul.uu  w3,[w1],w12             ; Mul
        add.w   w12,w5,w5               ; Add
        addc.w  w13,w6,w6               ; *
        addc.w  w7,#0,w7                ; Carry on
carry8: addc.w  w8,#0,w8                ; Carry on
        bra     carry9                  ; Carry
muladd6:
        mul.uu  w3,[w1],w12             ; Mul
        add.w   w12,w6,w6               ; Add
        addc.w  w13,w7,w7               ; *
        bra     carry8                  ; Carry
muladd7:
        mul.uu  w3,[w1],w12             ; Mul
        add.w   w12,w7,w7               ; Add
        addc.w  w13,w8,w8               ; *
carry9: addc.w  w9,#0,w9                ; Carry on
carrya: addc.w  w10,#0,w10              ; Carry on
        return                          ; Done
muladd8:
        mul.uu  w3,[w1],w12             ; Mul
        add.w   w12,w8,w8               ; Add
        addc.w  w13,w9,w9               ; *
        bra     carrya                  ; Carry

;-----------------------------------------------------------------------;

.include "null_signature.s"
