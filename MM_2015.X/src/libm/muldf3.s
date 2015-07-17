;-----------------------------------------------------------------------;
; muldf3.s: Double-precision floating-point multiplication.
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
; muldf3
;
;       IEEE-754 double-precision multiplication elementary operation.
;
; Input:
;
;       (w3:w2:w1:w0) Floating-point multiplier (a)
;       (w7:w6:w5:w4) Floating-point multiplicand (b)
;
; Output:
;
;       (w3:w2:w1:w0) Floating-point product (a * b)
;
; Description:
;
;       The product (a * b) is calculated and rounded to nearest.
;
; Notes:
;
;       This function is callable from C.
;
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Frame layout
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.muldf3, code
	.endif

        .equ    ATYP,DTYP               ; Frame offset for typ(a)
        .equ    AEXP,DEXP               ; Frame offset for exp(a)
        .equ    ASIG,DSIG               ; Frame offset for sig(a)
        .equ    ASIG0,ASIG+0            ; *
        .equ    ASIG1,ASIG+2            ; *
        .equ    ASIG2,ASIG+4            ; *
        .equ    ASIG3,ASIG+6            ; *
        .equ    AFLT,DFLT               ; Frame offset for flt(a)

        .equ    BTYP,DTYP+DSIZ          ; Frame offset for typ(b)
        .equ    BEXP,DEXP+DSIZ          ; Frame offset for exp(b)
        .equ    BSIG,DSIG+DSIZ          ; Frame offset for sig(b)
        .equ    BFLT,DFLT+DSIZ          ; Frame offset for flt(b)

        .equ    RSAV,2*6                ; Register save size

;-----------------------------------------------------------------------;
        .global ___muldf3

___muldf3:
        lnk     #DSIZ*2                 ; Construct the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        xor     w7,w3,w12               ; Preserve the result sign

;------ Unpack the operands

        rcall   __dunpack2              ; Unpack the two operands

;       (w0) = type(a)
;       (w1) = type(b)
;       (w8) = &dunpack(a)
;       (w9) = &dunpack(b)

;------ Check a for special operands: Infinity

        btst    w0,#INFBIT              ; isInf(a) ?
        bra     nz,aisinfinite          ; Yes ...

;------ Check b for special operands: Infinity

        btst    w1,#INFBIT              ; isInf(b) ?
        bra     nz,bisinfinite          ; Yes ...

;------ Both operands are finite: check for zero

        btst    w0,#ZEROBIT             ; isZero(a) ?
        bra     nz,returna              ; Yes ... return(a)

        btst    w1,#ZEROBIT             ; isZero(b) ?
        bra     nz,returnb              ; Yes ... return(b)

;-----------------------------------------------------------------------;
;       Both operands are finite and non-zero
;-----------------------------------------------------------------------;

;       Calculate the product exponent.
;       Since the exponents are biased, the product exponent is
;               p(exp) = a(exp) + b(exp) - DBL_BIAS
;       However, what is actually calculated is
;               p(exp) = a(exp) + b(exp) - DBL_BIAS + 1
;       that is, the exponent is offset by +1. This is done
;       to avoid an additional branch instruction. The offset +1
;       gives the correct exponent assuming that the product
;       has an integer component of 2 or 3 rather than 1. If it turns
;       out that the the integer component is 1, then the product
;       exponent is corrected, by subtracting 1.

        mov     [w14+AEXP],w0           ; (w0) = exp(a)
        mov     [w14+BEXP],w1           ; (w1) = exp(b)
        add     w0,w1,w13               ; (w13)= exp(p) + DBL_BIAS
        sub     #DBL_BIAS-1,w13         ; (w13)= exp(p) + 1

;-----------------------------------------------------------------------;
;       Compute the product: 53 x 53 -> 106
;-----------------------------------------------------------------------;

;------ Initialize the product registers

        sub     w15,#RSAV+8,w1          ; &b0

        mov.w   [w14+ASIG0],w3          ; a0
        mul.uu  w3,[w1],w4              ; a0*b0

        mov.w   [w14+ASIG2],w3          ; a2
        mul.uu  w3,[w1++],w6            ; a2*b0

        mov.w   [w14+ASIG3],w3          ; a3
        mul.uu  w3,[w1++],w8            ; a3*b1

        mul.uu  w3,[++w1],w10           ; a3*b3

        sub     w15,#RSAV+8,w11         ; &b0

;------ Compute the remaining sub-products

        rcall   muladd7                 ; a3*b0

        mov.w   [w14+ASIG1],w3          ; a1
        rcall   muladd5                 ; a1*b0

        inc2    w11,w11                 ; &b1

        rcall   muladd6                 ; a1*b1

        mov.w   [w14+ASIG2],w3          ; a2
        rcall   muladd7                 ; a2*b1

        mov.w   [w14+ASIG0],w3          ; a0
        rcall   muladd5                 ; a0*b1

        inc2    w11,w11                 ; &b2

        rcall   muladd6                 ; a0*b2

        mov.w   [w14+ASIG2],w3          ; a2
        rcall   muladd8                 ; a2*b2

        mov.w   [w14+ASIG3],w3          ; a3
        mul.uu  w3,[w11],w0             ; a3*b2
        add.w   w0,w9,w9                ; *
        addc.w  w1,w10,w10              ; *

        mov.w   [w14+ASIG1],w3          ; a1
        rcall   muladd7                 ; a1*b2

        inc2    w11,w11                 ; &b3

        rcall   muladd8                 ; a1*b3

        mov.w   [w14+ASIG0],w3          ; a0
        rcall   muladd7                 ; a0*b3

        mov.w   [w14+ASIG2],w3          ; a2
        mul.uu  w3,[w11],w0             ; a2*b3
        add.w   w0,w9,w9                ; *
        addc.w  w1,w10,w10              ; *

;-----------------------------------------------------------------------;

;       The product will have an integer component of 1, 2 or 3
;       (i.e., the significand is 01.f, 10.f or 11.f in binary).
;       If the integer component is 2 or 3, then the exponent is
;       correct, and the binary point is located between
;       bits 46 and 47 of the product.
;       If the integer component is 1, then the exponent is
;       1 greater than the correct value, and the binary point
;       is located between bits 45 and 46. In this case, the
;       product is shifted left one bit to position the
;       binary point between bits 46 and 47, and the exponent
;       is corrected.

        btst    w10,#9                  ; Product 01.f ?
        bra     nz,formsticky           ; No ... exponent is correct ...

        add     w4,w4,w4                ; product(a,b) <<= 1
        addc    w5,w5,w5                ; *
        addc    w6,w6,w6                ; *
        addc    w7,w7,w7                ; *
        addc    w8,w8,w8                ; *
        addc    w9,w9,w9                ; *
        addc    w10,w10,w10             ; *
        dec     w13,w13                 ; Correct the exponent overstep


;------ Form sticky, round, and result significand
;
; The 106-bit product is organized as follows:
;
;                                     1 Round bit
;                                         |
;     <------- 53-bit significand ------->|<--------- 52-bit sticky -------->
;                                         |
;                                         v
;
; +--------+ +--------+ +--------+ +--------+ +--------+ +--------+ +--------+
; |   w10  | |   w9   | |   w8   | |   w7   | |   w6   | |   w5   | |   w4   |
; +--------+ +--------+ +--------+ +--------+ +--------+ +--------+ +--------+
;

;------ Form sticky (bitwise-or of 52 lsb of product)

formsticky:
        ior     w5,w4,w5                ; (w5) = 32 lsb of product
        ior     w6,w5,w5                ; (w5) = 48 lsb of product
        sl      w7,#12,w4               ; (w4) = upper 4 bits
        ior     w4,w5,w5                ; (w5) = 52 lsb of product
        bra     z,formRandSig           ; Sticky is zero ...
        mov     #1,w5                   ; Sticky is non-zero

formRandSig:

;------ Extract the round bit

        lsr     w7,#4,w4                ; (w4) = round
        and     #1,w4                   ; *

;------ Align the 53 msb of the product to form the significand

        lsr     w7,#5,w0                ; (w3:w0) = 53 msb of product
        sl      w8,#11,w11              ; *
        ior     w0,w11,w0               ; *
        lsr     w8,#5,w1                ; *
        sl      w9,#11,w11              ; *
        ior     w1,w11,w1               ; *
        lsr     w9,#5,w2                ; *
        sl      w10,#11,w11             ; *
        ior     w2,w11,w2               ; *
        lsr     w10,#5,w3               ; *

;------ Final rounding

        mov.w   w13,w6                  ; (w6) = biased exponent

;       (w3:w0)= significand
;       (w4)   = round
;       (w5)   = sticky
;       (w6)   = biased exponent

        rcall   __dpack                 ; Round and pack

signoff:
        bclr    w3,#15                  ; Clear result sign
        btsc    w12,#15                 ; Result negative ?
        bset    w3,#15                  ; Yes ... set sign

        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;
;       Little subroutines
;-----------------------------------------------------------------------;
muladd5:
        mul.uu  w3,[w11],w0             ; Mul
        add.w   w0,w5,w5                ; Add
        addc.w  w1,w6,w6                ; *
        addc.w  w7,#0,w7                ; Carry on
carry8: addc.w  w8,#0,w8                ; Carry on
        bra     carry9                  ; Carry
muladd6:
        mul.uu  w3,[w11],w0             ; Mul
        add.w   w0,w6,w6                ; Add
        addc.w  w1,w7,w7                ; *
        bra     carry8                  ; Carry
muladd7:
        mul.uu  w3,[w11],w0             ; Mul
        add.w   w0,w7,w7                ; Add
        addc.w  w1,w8,w8                ; *
carry9: addc.w  w9,#0,w9                ; Carry on
carrya: addc.w  w10,#0,w10              ; Carry on
        return                          ; Done
muladd8:
        mul.uu  w3,[w11],w0             ; Mul
        add.w   w0,w8,w8                ; Add
        addc.w  w1,w9,w9                ; *
        bra     carrya                  ; Carry

;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;

;------ a is an Infinity

aisinfinite:
        btst    w1,#ZEROBIT             ; isZero(b) ?
        bra     nz,__dreturnNaN         ; (Inf * Zero): Result is NaN

;------ Return operand a

returna:

;------ Return operand a or b

returnab:
        mov.d   [++w8],w0               ; Load operand
        mov.d   [++w8],w2               ; *
        bra     signoff                 ; Set sign & exit

;------ b is an Infinity

bisinfinite:
        btst    w0,#ZEROBIT             ; isZero(a) ?
        bra     nz,__dreturnNaN         ; (Zero * Inf): Result is NaN

;------ Return operand b

returnb:
        mov     w9,w8                   ; (w8)=&b
        bra     returnab                ; Join common ...

;-----------------------------------------------------------------------;



.include "null_signature.s"
