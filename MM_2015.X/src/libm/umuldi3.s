;-----------------------------------------------------------------------;
; umuldi3.s: Integer multiplication elementary operation.
;
; This file is part of the compact math library for the dsPIC30.
; (c) Microchip Technology. 2007.
;
;-----------------------------------------------------------------------;
	.ifndef ffunction
	.section .libm,code
	.endif
;-----------------------------------------------------------------------;
;
; __umuldi3
;
;       Unsigned 64-bit integer multiplication.
;
; Input:
;
;       (w3:w0) Operand 1
;       (w7:w4) Operand 2
;
; Output:
;
;       (w3:w0) Result
;
;-----------------------------------------------------------------------;
;
	.ifdef ffunction
	.section .libm.umuldi3, code
	.endif
	.global  ___umuldi3
___umuldi3:
	push.d  w8              ; save regs
	push.d  w10
	push.d  w12

	mul.uu  w0,w4,w8        ; term 1

	mul.uu  w0,w5,w12       ; term 2
	add     w12,w9,w9
	addc    w13,#0,w10

	mul.uu  w0,w6,w12       ; term 3
	add     w12,w10,w10
	addc    w13,#0,w11

	mul.uu  w0,w7,w12       ; term 4
	add     w12,w11,w11

	mul.uu  w1,w4,w12       ; term 5
	add     w12,w9,w9
	addc    w13,w10,w10
        addc    w11,#0,w11

	mul.uu  w1,w5,w12       ; term 6
	add     w12,w10,w10
	addc    w13,w11,w11

	mul.uu  w1,w6,w12       ; term 7
	add     w12,w11,w11

	mul.uu  w2,w4,w12       ; term 8
	add     w12,w10,w10
	addc    w13,w11,w11

	mul.uu  w2,w5,w12       ; term 9
	add     w12,w11,w11

	mul.uu  w3,w4,w12       ; term 10
	add     w12,w11,w11

	mov.d   w8,w0           ; put result into position
	mov.d   w10,w2

	pop.d   w12             ; restore regs
	pop.d   w10
	pop.d   w8
	return


.include "null_signature.s"
