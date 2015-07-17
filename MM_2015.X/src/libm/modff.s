;-----------------------------------------------------------------------;
;
; modff.s: Single-precision floating-point modulus function.
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
; modff: Single-precision floating-point modulus function.
;
; Input:
;
;       (w1:w0) argument x
;       (w2)    pointer to returned integer i
;
; Output:
;
;       (w1:w0) Residue
;       (w2)    Address of stored integer i
;
; Description:
;
;       Computes the modulus of the argument x.
;       Returns the residue, and stores the integer.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.modff, code
	.endif
        .global _modff

_modff:
        mov.d   w0,[w15++]      ; Preserve x
        mov.w   w2,[w15++]      ; Preserve the integer pointer
        clr     w2              ; Chop below 2^0
        rcall   __fchop         ; Chop fractional bits
        mov.w   [--w15],w5      ; Recover the integer pointer
        mov.d   w0,[w5]         ; Store the integer
	mov.d	w0,w2		; Copy the integer
        mov.d   [--w15],w0      ; Recover x

;------ Bits were chopped: compute the residue

        bra     nz,___subsf3    ; Residue = x - i

;------ No bits were chopped

notchopped:
	btss	w4,#NANBIT	; isNaN(x) ?
        mul.uu  w0,#0,w0        ; No ... Residue = 0
        btsc    w3,#15          ; x negative ?
        bset    w1,#15          ; Yes ... residue is negative
        return                  ; Done

;-----------------------------------------------------------------------;




.include "null_signature.s"
