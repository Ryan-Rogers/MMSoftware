;-----------------------------------------------------------------------;
;
; fchop.s: Single-precision floating-point chop function.
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
; __fchop: Single-precision floating-point chop function.
;
; Description:
;
;       Chops significand bits below a power-of-two thereshold.
;
; Input:
;
;       (w1:w0) x: argument to be chopped
;       (w2)    k: power of two below which to chop significand bits
;
; Output:
;
;       (w1:w0) Chopped argument
;       (w2)    0=argument not chopped; -1=argument chopped
;       (w4)    Argument type = {ZEROTYPE, FINITETYPE, INFTYPE, NANTYPE}
;       <Z>     Set=argument not chopped
;               Clr=argument was chopped
;
; Description:
;
;       Significand bits below the threshold 2^k are chopped.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fchop, code
	.endif
        .global __fchop

__fchop:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; Preserve scratch

;------ Extract significand & biased exponent

        mov.d   w0,w6           ; (w7:w6)=x
        rcall   __funpack       ; (w4)   =x(Type)
                                ; (w5)   =x(Biased exponent)
                                ; (w1:w0)=x(Significand)
        mov.w   w5,w11          ; (w11)  =x(Biased exponent)

        sub     w5,w2,w3        ; (w3) = d (biased)
        mov     #0,w2           ; Assume chop not required
        cp      w4,#FINITETYPE  ; x finite, non-zero ?
        bra     nz,return6      ; No ... nothing to do ...

;-----------------------------------------------------------------------;
;       Argument is finite, non-zero
;-----------------------------------------------------------------------;

;------ compute d = Ex - k

        sub     #FLT_BIAS,w3    ; (w3) = d
        bra     lt,result0      ; d < 0 ... result is zero

        cp      w3,#FLT_PREC-1  ; d < 23 ?
        bra     lt,chop         ; Yes ... chop the bits ...

return6:
        mov.d   w6,w0           ; Result to return reg
        bra     return0         ; Common exit
result0:
        mul.uu  w0,#0,w0        ; Result = 0
        bra     signit          ; Signed

;-----------------------------------------------------------------------;
;       Chop required
;-----------------------------------------------------------------------;
chop:

;------ mask = 0x007FFFFF >> d

        mov     #0x00FF,w5      ; (w5:w10) = mask
        mov     #0xFFFF,w10     ; *
shiftloop:
        lsr     w5,w5           ; (w5:w10) = mask >> 1
        rrc     w10,w10         ; *
        dec     w3,w3           ; (w3) = d--
        bra     nn,shiftloop    ; Align the mask ...

;------ chop = (Sx & mask) != 0

        and     w5,w1,w9        ; (w9:w8) = Sx & mask
        and     w10,w0,w8       ; *
        ior     w8,w9,[w15]     ; (Sx & mask) == 0 ?
        bra     z,return6       ; Yes ... nothing to chop ...

;------ Sx &= ~mask

        com     w5,w5           ; (w5:w10) = ~mask
        com     w10,w10         ; *
        and     w5,w1,w9        ; (w9:w8) = Sx & ~mask
        and     w10,w0,w8       ; *

        rcall   __fpack         ; (w1:w0) = packed result
signit:
        btsc    w7,#15          ; x < 0 ?
        bset    w1,#15          ; Yes ... result = -result
        setm    w2              ; Indicate bits were chopped

;-----------------------------------------------------------------------;
return0:
        cp0     w2              ; Set flags
        mov.d   [--w15],w10     ; Recover scratch
        mov.d   [--w15],w8      ; Recover scratch
        return                  ; Done

;-----------------------------------------------------------------------;




.include "null_signature.s"
