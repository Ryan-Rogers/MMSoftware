;-----------------------------------------------------------------------;
; divsf3.s: Single-precision floating-point division elementary operation.
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
; divsf3
;
;       IEEE-754 division elementary operation.
;
; Input:
;
;       (w1:w0) Floating-point dividend (a)
;       (w3:w2) Floating-point divisor (b)
;
; Output:
;
;       (w1:w0) Floating-point quotient: round(a / b)
;
; Description:
;
;       The quotient (a / b) is calculated and rounded to nearest.
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
	.section .libm.divfs3, code
	.endif

        .global ___divsf3

___divsf3:
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
        bra     z,returnZero            ; Inf ... return(0)

;------ Both operands are finite: check for zero

        cp      w10,#ZEROTYPE           ; isZero(a) ?
        bra     z,aiszero               ; Yes ...

        cp      w4,#ZEROTYPE            ; isZero(b) ?
        bra     z,returnInf             ; Yes ... return(Inf)

;-----------------------------------------------------------------------;
;       Both operands are finite and non-zero
;-----------------------------------------------------------------------;

finitenonzero:

;       (w7:w6) = a(significand)
;       (w1:w0) = b(significand)
;         (w11) = a(unbiased exponent)
;          (w5) = b(unbiased exponent)

        sub     w11,w5,w11      ; (w11)=result unbiased exponent
        add     #FLT_BIAS-1,w11 ; (w11)=biased exponent - 1

;------ Form the quotient and remainder

        mov     #0x0000,w9      ; (w9:w8)=quotient
        mov     #0x0040,w8      ; *
        bra     diventry        ; Begin ...
divnext:
        add     w8,w8,w8        ; (w9:w8) = (qsig <<= 1)
        addc    w9,w9,w9        ; *
        bra     c,divdone       ; All quotient bits available ...
divloop:
        add     w6,w6,w6        ; (w7:w6) = (asig <<= 1)
        addc    w7,w7,w7        ; *
diventry:
        sub     w6,w0,w2        ; (w3:w2) = (asig -= bsig)
        subb    w7,w1,w3        ; *
        bra     n,divnext       ; asig < 0 ...
        mov.d   w2,w6           ; (w7:w6) = (asig -= bsig)
        bset    w8,#0           ; Insert quotient bit
        add     w8,w8,w8        ; (w9:w8) = (qsig <<= 1)
        addc    w9,w9,w9        ; *
        bra     nc,divloop      ; Form all n quotient bits ...
divdone:

;------ Form the round and sticky bits

formsticky:
        sl      w7,#6,w3        ; Form sticky (26 lsb of remainder)
        ior     w6,w3,w3        ; (w3) = sticky
        bra     z,stickyok      ; Sticky is zero ...
        mov     #1,w3           ; Sticky is non-zero
stickyok:
        lsr     w9,w9           ; (w9:w8) = (quotient >>= 1)
        rrc     w8,w8           ; *

;------ See if guard bit is needed

        btst    w9,#9           ; (quotient & 0x02000000) ?
        bra     z,guardused     ; No ... so we used the guard ...

;------ Guard not needed: align the quotient

        btsc    w8,#0           ; (w3) = (sticky |= (quotient & 1))
        bset    w3,#0           ; *
        lsr     w9,w9           ; (w9:w8) = (quotient >>= 1)
        rrc     w8,w8           ; *
        inc     w11,w11         ; (w11) = corrected exponent

;------ Form the round bit

guardused:
        lsr     w9,w9           ; (w9:w8) = (quotient >>= 1)
        rrc     w8,w8           ; *
        clr     w2              ; (w2) = round
        rlc     w2,w2           ; (w2) = (round |= (quotient & 1))

;-----------------------------------------------------------------------;
;       Final rounding
;-----------------------------------------------------------------------;

;       (w3)   = sticky
;       (w2)   = round
;       (w9:w8)= s(significand)
;       (w11)  = s(exponent)

        rcall   __fpack         ; Round and pack

return0:
        bclr    w1,#15          ; Clear result sign
        btsc    w12,#15         ; Result negative ?
        bset    w1,#15          ; Yes

        bra     __fbopExit      ; Common exit

;-----------------------------------------------------------------------;
;       Special argument handling
;-----------------------------------------------------------------------;

;------ a is Infinity

aisinfinite:
        cp      w4,#INFTYPE             ; isInf(b) ?
        bra     z,__fbopReturnNaN       ; Yes ... return(NaN)
return8:
        mov.d   w8,w2                   ; Result value
return2:
        mov.d   w2,w0                   ; Result value
        bra     return0                 ; Common exit

;------ a is zero

aiszero:
        cp      w4,#ZEROTYPE            ; isZero(b) ?
        bra     z,__fbopReturnNaN       ; Yes ... return(NaN)
returnZero:
        mul.uu  w0,#0,w0                ; Result is Zero
        bra     return0                 ; Exit ...
returnInf:
        mov.w   #POSINFLO,w0            ; Result is Inf
        mov.w   #POSINFHI,w1            ; *
        bra     return0                 ; Exit ...

;-----------------------------------------------------------------------;


.include "null_signature.s"
