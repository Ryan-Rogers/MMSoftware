;-----------------------------------------------------------------------;
; mulsf3.s: Single-precision floating-point multiplication operation.
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
; mulsf3
;
;       IEEE-754 single-precision multiplication elementary operation.
;
; Input:
;
;       (w1:w0) Floating-point multiplier (a)
;       (w3:w2) Floating-point multiplicand (b)
;
; Output:
;
;       (w1:w0) Floating-point product: round(a * b)
;
; Description:
;
;       The product (a * b) is calculated and rounded to nearest.
;
; Notes:
;
;       This function is callable from C.
;
;       The function returns to the caller by branching to one of
;       three exit blocks:
;
;       __fbopExit:
;       -----------
;       This is the normal exit mechanism. The exit block '__fbopExit'
;       restores the scratch registers and returns to the caller.
;
;       __fbopReturnNaN:
;       ----------------
;       Invalid operation exit. The exit block  '__fbopReturnNaN'
;       loads a quiet NaN into the result register before branching to
;       the '__fbopExit' exit block.
;
;       __fbopPropagateNaN:
;       -------------------
;       The exit if either argument is NaN. The exit block
;       '__fpropagateNaN' propagates the argument NaN in accordance
;       with the rules of IEEE-754. It loads the correct NaN into the
;       result register before branching to the '__fbopExit' exit block.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.mulsf3, code
	.endif
        .global ___mulsf3

___mulsf3:
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; *
        mov.w   w12,[w15++]             ; *

;------ Unpack the operands

        rcall   __funpack2              ; Unpack both operands
        bra     n,__fPropagateNaN       ; isNaN(a) || isNaN(b) ...

;-----------------------------------------------------------------------;
;
;       (w7:w6) a(Significand)
;       (w9:w8) a
;       (w10)   a(Type)
;       (w11)   a(Biased exponent)
;
;       (w1:w0) b(Significand)
;       (w3:w2) b
;       (w4)    b(Type)
;       (w5)    b(Biased exponent)
;
;-----------------------------------------------------------------------;

        xor     w9,w3,w12               ; Preserve the result sign

;------ Check a for special operands: Infinity

        cp      w10,#INFTYPE            ; isInf(a) ?
        bra     z,aisinfinite           ; Yes ...

;------ Check b for special operands: Infinity

        cp      w4,#INFTYPE             ; isInf(b) ?
        bra     z,bisinfinite           ; Yes ...

;------ Both operands are finite: check for zero

        cp      w10,#ZEROTYPE           ; isZero(a) ?
        bra     z,return8               ; Yes ... return(a)
        cp      w4,#ZEROTYPE            ; isZero(b) ?
        bra     z,return2               ; Yes ... return(b)

;-----------------------------------------------------------------------;
;       Both operands are finite and non-zero
;-----------------------------------------------------------------------;

;       (w7:w6) = a(significand)
;       (w1:w0) = b(significand)
;         (w11) = a(biased exponent)
;          (w5) = b(biased exponent)

;-----------------------------------------------------------------------;

;       Calculate the product exponent. Since the exponents are biased,
;       the product exponent is
;               p(exp) = a(exp) + b(exp) - FLT_BIAS
;       However, what is actually calculated is
;               p(exp) = a(exp) + b(exp) - FLT_BIAS + 1
;       that is, the exponent is offset by +1. This is done
;       to avoid an additional branch instruction. The offset +1
;       gives the correct exponent assuming that the product
;       has an integer component of 2 rather than 1. If it turns
;       out that the the integer component is 1, then the product
;       exponent is corrected, by subtracting 1.

        add     w5,w11,w11      ; (w11)=result biased exponent + FLT_BIAS
        sub     #FLT_BIAS-1,w11 ; (w11)=biased exponent + 1

;------ Form the 48-bit product of the two significands

        mul.uu  w6,w1,w8        ; Multiply the significands
        mul.uu  w7,w0,w4        ; *
        add     w4,w8,w8        ; *
        addc    w5,w9,w9        ; *
        mul.uu  w7,w1,w4        ; *
        mul.uu  w6,w0,w0        ; *
        add     w1,w8,w1        ; *
        addc    w4,w9,w2        ; (w2:w1:w0)=product(a,b)

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
        
        bra     n,formsticky    ; Exponent is correct ...

        add     w0,w0,w0        ; product(a,b) <<= 1
        addc    w1,w1,w1        ; *
        addc    w2,w2,w2        ; *
        dec     w11,w11         ; Correct the exponent overstep

;------ Form sticky, round, and result significand
;
; The 48-bit product is organized as follows:
;
;                         1 Round bit
;                             |
;  <-- 24-bit  significand -->|<----- 23-bit sticky ---->
;                             |
;                             v
; +----------------+ +----------------+ +----------------+
; |       w2       | |       w1       | |       w0       |
; +----------------+ +----------------+ +----------------+
;  4              3   3       2      1   1              0
;  7              2   1       3      6   5              0

formsticky:

        sl      w1,#9,w3        ; Form sticky (23 lsb of product)
        ior     w0,w3,w3        ; (w3) = sticky
        bra     z,formRandSig   ; Sticky is zero ...
        mov     #1,w3           ; Sticky is non-zero

formRandSig:

        lsr     w2,#8,w9        ; Align significand
        sl      w2,#8,w8        ; *
        lsr     w1,#7,w2        ; |     (w2) = round
        and     #1,w2           ; |     *
        lsr     w1,#8,w1        ; * Continue aligning
        ior     w1,w8,w8        ; (w9:w8)=result significand

;------ Final rounding

;       (w2)   = round
;       (w3)   = sticky
;       (w9:w8)= p(significand)
;       (w11)  = p(exponent)

        rcall   __fpack         ; Round and pack

return0:
        bclr    w1,#15          ; Clear result sign
        btsc    w12,#15         ; Result negative ?
        bset    w1,#15          ; Yes

        bra     __fbopExit      ; Common exit

;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;

;------ a is an Infinity

aisinfinite:
        cp      w4,#ZEROTYPE            ; isZero(b) ?
        bra     z,__fbopReturnNaN       ; Yes ... (Inf * Zero): return(NaN)
return8:
        mov.d   w8,w2                   ; Result value
return2:
        mov.d   w2,w0                   ; Result value
        bra     return0                 ; Common exit

;------ b is Infinity

bisinfinite:
        cp      w10,#ZEROTYPE           ; isZero(a) ?
        bra     nz,return2              ; No ... return(b)
        bra     __fbopReturnNaN         ; Yes ... return(NaN)

;-----------------------------------------------------------------------;


.include "null_signature.s"
