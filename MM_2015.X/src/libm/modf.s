;-----------------------------------------------------------------------;
;
; modf.s: Double-precision floating-point modulus function.
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
; modf: Double-precision floating-point modulus function.
;
; Input:
;
;       (w3:w2:w1:w0)   argument x
;       (w4)            pointer to returned integer i
;
; Output:
;
;       (w3:w2:w1:w0)   Residue
;       (w4)            Address of stored integer i
;
; Description:
;
;       Computes the modulus of the argument x.
;       Returns the residue, and stores the integer.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.modf, code
	.endif
        .global _modf
        .global _modfl

_modf:
_modfl:
        mov.d   w0,[w15++]      ; Preserve x
        mov.d   w2,[w15++]      ; *
        mov.w   w4,[w15++]      ; Preserve the integer pointer
        clr     w4              ; Chop below 2^0
        rcall   __dchop         ; Chop fractional bits
                                ; (w3:w0) = chopped(x)
                                ; (w4) = chopped flag
                                ; (w5) = x.type
                                ; <SZ> = chopped flag
        mov.w   [--w15],w4      ; Recover the integer pointer
        mov.d   w0,[w4++]       ; Store the integer
        mov.d   w2,[w4]         ; *
        mov.d   [--w15],w2      ; Recover x
        mov.d   [--w15],w0      ; *
        bra     z,notchopped    ; No bits chopped ...

;------ Bits were chopped: compute the residue

        mov.d   [w4--],w6       ; Copy the integer
        mov.d   [w4],w4         ; *

        bra     ___subdf3       ; Residue = x - i

;------ No bits were chopped

notchopped:
        btsc    w5,#NANBIT      ; isNaN(x) ?
        return                  ; Yes ... return(x)
        mul.uu  w0,#0,w0        ; No ... Residue = 0
        mov     #0,w2           ; *
        lsr     w3,#15,w3       ; Set sign(residue) = sign(x)
        sl      w3,#15,w3       ; *
        return                  ; Done

;-----------------------------------------------------------------------;




.include "null_signature.s"
