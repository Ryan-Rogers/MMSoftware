;-----------------------------------------------------------------------;
; divsd3.s: Double-precision floating-point division elementary operation.
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
; divdf3
;
;       IEEE-754 division elementary operation.
;
; Input:
;
;       (w3:w2:w1:w0) Floating-point dividend (a)
;       (w7:w6:w5:w4) Floating-point divisor (b)
;
; Output:
;
;       (w3:w2:w1:w0) Floating-point quotient: round(a / b)
;
; Description:
;
;       The quotient (a / b) is calculated and rounded to nearest.
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
	.section .libm.divdf3, code
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
        .global ___divdf3

___divdf3:
        lnk     #DSIZ*2                 ; Construct the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; *
        mov.d   w12,[w15++]             ; *

        xor     w7,w3,w12               ; Preserve the result sign

;------ Unpack the operands

        rcall   __dunpack2              ; Unpack both operands

;       (w0) = type(a)
;       (w1) = type(b)


;------ Check a for special operands: Infinity

        cp      w0,#INFTYPE             ; isInf(a) ?
        bra     z,aisinfinite           ; Yes ...

;------ Check b for special operands: Infinity

        cp      w1,#INFTYPE             ; isInf(b) ?
        bra     z,returnZero            ; Yes ... return(0)

;------ Both operands are finite: check for zero

        cp      w0,#ZEROTYPE            ; isZero(a) ?
        bra     z,aiszero               ; Yes ...

        cp      w1,#ZEROTYPE            ; isZero(b) ?
        bra     z,returnInf             ; Yes ... return(Inf)

;-----------------------------------------------------------------------;
;       Both operands are finite and non-zero
;-----------------------------------------------------------------------;

finitenonzero:

;------ Form the quotient and remainder

        add     w14,#ASIG,w13           ; (w13) = &a.sig
        mul.uu  w0,#0,w0                ; (w3:w0)=quotient=0
        mov.d   [w13++],w4              ; (w7:w4)=asig
        mov.d   [w13++],w6              ; *
        sub     w15,#RSAV+8,w13         ; (w13) = &b.sig
        mul.uu  w2,#0,w2                ; (w3:w0)=quotient=0
        mov.d   [w13++],w8              ; (w11:w8)=bsig
        mov.d   [w13++],w10             ; *
        mov     #DBL_PREC+2,w13         ; (w13)=quotient width
        bra     diventry                ; Begin ...

divnext:
        bset    w0,#0                   ; Insert quotient bit
        dec     w13,w13                 ; (w13) = (nbits--)
        bra     z,divdone               ; Form all n quotient bits ...
divloop:
        add     w4,w4,w4                ; (w7:w4) = (asig <<= 1)
        addc    w5,w5,w5                ; *
        addc    w6,w6,w6                ; *
        addc    w7,w7,w7                ; *
        add     w0,w0,w0                ; (w3:w0) = (qsig <<= 1)
        addc    w1,w1,w1                ; *
        addc    w2,w2,w2                ; *
        addc    w3,w3,w3                ; *
diventry:
        sub     w4,w8,w4                ; (w7:w4) = (asig -= bsig)
        subb    w5,w9,w5                ; *
        subb    w6,w10,w6               ; *
        subb    w7,w11,w7               ; *
        bra     nn,divnext              ; asig >= 0

        add     w4,w8,w4                ; (w7:w4) = (asig += bsig)
        addc    w5,w9,w5                ; *
        addc    w6,w10,w6               ; *
        addc    w7,w11,w7               ; *
        dec     w13,w13                 ; (w13) = (nbits--)
        bra     nz,divloop              ; Form all n quotient bits ...
divdone:

;------ Form the round and sticky bits

        ior     w5,w4,w5                ; Form sticky (55 lsb of remainder)
        ior     w5,w6,w5                ; *
        and     #0x007F,w7              ; *
        ior     w5,w7,w5                ; *
        bra     z,stickyformed          ; Sticky is zero ...
        mov     #1,w5                   ; Sticky is non-zero
stickyformed:

;------ Form the result exponent

        mov     [w14+AEXP],w8           ; (w8)= exp(a)
        mov     [w14+BEXP],w6           ; (w6)= exp(b)
        sub     w8,w6,w6                ; (w6)= exp(q) (unbiased)
        add     #DBL_BIAS-1,w6          ; (w6)= exp(q) - 1

;------ See if guard bit is needed

        btst    w3,#6                   ; (quotient & 0x0040000000000000) ?
        bra     z,guardused             ; No ... so we used the guard ...

;------ Guard not needed: align the quotient

        btsc    w0,#0                   ; (w5) = (sticky |= (quotient & 1))
        bset    w5,#0                   ; *
        lsr     w3,w3                   ; (w3:w0) = (quotient >>= 1)
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *
        rrc     w0,w0                   ; *
        inc     w6,w6                   ; (w6) = corrected exponent

;------ Form the round bit

guardused:
        lsr     w3,w3                   ; (w3:w0) = (quotient >>= 1)
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *
        rrc     w0,w0                   ; *
        clr     w4                      ; (w4) = round
        rlc     w4,w4                   ; (w4) = (round |= (quotient & 1))

;-----------------------------------------------------------------------;
;       Final rounding
;-----------------------------------------------------------------------;

;       (w3:w0)= significand
;       (w4)   = round
;       (w5)   = sticky
;       (w6)   = biased exponent

        rcall   __dpack                 ; Round and pack

signoff:
        bclr    w3,#15                  ; Clear result sign
        btsc    w12,#15                 ; Result negative ?
        bset    w3,#15                  ; Yes

        bra     __dunpack2exit          ; Common exit

;-----------------------------------------------------------------------;
;       Special argument handling
;-----------------------------------------------------------------------;

;------ a is Infinity

aisinfinite:
        add     w14,#AFLT,w4            ; (w4)=&a
        cp      w1,#INFTYPE             ; isInf(b) ?
        bra     z,__dreturnNaN          ; Yes ... return(NaN)

;------ Return operand a

        mov.d   [w4++],w0               ; Load operand
        mov.d   [w4++],w2               ; *
        bra     signoff                 ; Set sign & exit

;------ a is zero 

aiszero:
        cp      w1,#ZEROTYPE            ; isZero(b) ?
        bra     z,__dreturnNaN          ; Yes ... return(NaN)
returnZero:
        mul.uu  w2,#0,w2                ; Result is Zero
returnZeroLo:
        mul.uu  w0,#0,w0                ; *
        bra     signoff                 ; Exit ...
returnInf:
        mov.w   #0x7FF0,w3              ; Result is Inf
        mov.w   #0x0000,w2              ; *
        bra     returnZeroLo            ; *

;-----------------------------------------------------------------------;


.include "null_signature.s"
