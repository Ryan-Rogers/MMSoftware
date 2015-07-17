;-----------------------------------------------------------------------;
; dmodrem.s: Floating-point remainder elementary operation.
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
; dmodrem
;
;       Double-precision remainder/modulus elementary operation.
;
; Input:
;
;       (w3:w2:w1:w0)   Floating-point dividend a
;       (w7:w7:w5:w4)   Floating-point divisor b
;       [w15-4]         Function required:
;                       1 = REM -- IEEE-compliant
;                       0 = MOD -- ANSI-compliant
;
; Output:
;
;       (w3:w2:w1:w0) Floating-point remainder REM(x/y) or MOD(x/y)
;
; Description:
;
;       The remainder (x/y) is calculated. The result is exact;
;       no rounding is required.
;
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Frame layout
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.dmodrem, code
	.endif

        .equ    ATYP,DTYP               ; Frame offset for typ(a)
        .equ    AEXP,DEXP               ; Frame offset for exp(a)
        .equ    ASIG,DSIG               ; Frame offset for sig(a)
        .equ    ASIG0,ASIG+0            ; *
        .equ    ASIG1,ASIG+2            ; *
        .equ    ASIG2,ASIG+4            ; *
        .equ    ASIG3,ASIG+6            ; *
        .equ    AFLT,DFLT               ; Frame offset for flt(a)
        .equ    AFLT0,AFLT+0            ; *
        .equ    AFLT1,AFLT+2            ; *
        .equ    AFLT2,AFLT+4            ; *
        .equ    AFLT3,AFLT+6            ; *

        .equ    BTYP,DTYP+DSIZ          ; Frame offset for typ(b)
        .equ    BEXP,DEXP+DSIZ          ; Frame offset for exp(b)
        .equ    BSIG,DSIG+DSIZ          ; Frame offset for sig(b)
        .equ    BFLT,DFLT+DSIZ          ; Frame offset for flt(b)

        .equ    BREM,-8                 ; Frame offset for bREM parameter

        .equ    RSAV,2*6                ; Register save size

;-----------------------------------------------------------------------;

        .global __dmodrem

;-----------------------------------------------------------------------;

__dmodrem:
        lnk     #DSIZ*2                 ; Construct the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        mov.b   [w14+BREM],w12          ; (w12)=bREM flag

;------ Unpack the operands

        rcall   __dunpack2              ; Unpack the two operands

;       (w0) = type(a)
;       (w1) = type(b)

;------ Check b for special operands: Zero

        cp      w1,#ZEROTYPE            ; isZero(b) ?
        bra     z,domainerr             ; Yes ...

;------ Check a for special operands: Infinite

        cp      w0,#FINITETYPE          ; isInf(a) ?
        bra     gtu,domainerr           ; Yes ... return(NaN)

;------ Check a for special operands: Zero

        bra     ltu,returna             ; isZero(x) ... return(a)

;------ Check b for special operands: Infinite

        cp      w1,#INFTYPE             ; isInf(b) ?
        bra     z,returna               ; Yes ... return(a)

;-----------------------------------------------------------------------;
;       Arguments are finite and non-zero
;-----------------------------------------------------------------------;

;------ Load significands

        add     w14,#ASIG,w2            ; (w2) = &a.sig
        sub     w15,#RSAV+8,w10         ; (w10) = &b.sig

        mov.d   [w2++],w0               ; Load a.sig
        mov.d   [w2],w2                 ; *

        mov.d   [w10++],w8              ; Load b.sig
        mov.d   [w10],w10               ; *

;------ Determine exponent difference

        mov     [w14+AEXP],w5           ; (w5) = exp(a)
        mov     [w14+BEXP],w13          ; (w13)= exp(b)
        sub.w   w5,w13,w4               ; (w4) = Ed = Ea - Eb
        bra     nn,rementry             ; Ed >= 0 ...

;------ Exponent difference negative

        inc     w4,w4                   ; Ed == -1 ?
        bra     nz,returna              ; No ... return(a)

;------ Exponent difference is -1

        sub     w0,w8,[w15]             ; Sa > Sb ?
        subb    w1,w9,[w15]             ; *
        subb    w2,w10,[w15]            ; *
        subb    w3,w11,[w15]            ; *
        bra     le,returna              ; No ... return(a)

        add     w14,#AFLT,w2            ; (w2)=&a
        add     w14,#BFLT,w6            ; (w6)=&b

        mov.d   [w2++],w0               ; Load operand a
        mov.d   [w2],w2                 ; *

        mov.d   [w6++],w4               ; Load operand b
        mov.d   [w6],w6                 ; *

        bclr    w7,#15                  ; (w7:w4) = |b|
        btss    w3,#15                  ; a < 0 ?
        bset    w7,#15                  ; sign(b) = ~sign(a)
        btsc    w12,#7                  ; REM required ?
        rcall   ___adddf3               ; Yes ... r = a +/- b
        bra     __dunpack2exit          ; Done

;-----------------------------------------------------------------------;
;       Calculate the remainder
;-----------------------------------------------------------------------;
remloop:
        add     w0,w0,w0                ; (w3:w0) = (Sr <<= 1)
        addc    w1,w1,w1                ; *
        addc    w2,w2,w2                ; *
        addc    w3,w3,w3                ; *
rementry:
        bset    w12,#0                  ; (w12) = q = 1
        sub     w0,w8,w0                ; (w3:w0) = (Sr -= Sb)
        subb    w1,w9,w1                ; *
        subb    w2,w10,w2               ; *
        subb    w3,w11,w3               ; *
        bra     nn,remnext              ; Sr >= 0
        add     w0,w8,w0                ; (w3:w0) = (Sr += Sb)
        addc    w1,w9,w1                ; *
        addc    w2,w10,w2               ; *
        addc    w3,w11,w3               ; *
        bclr    w12,#0                  ; (w12) = q = 0
remnext:
        dec     w4,w4                   ; (w4) = (Ed--)
        bra     nn,remloop              ; Form all Ed remainder bits ...

;------ Check for zero

        add     w0,w0,w4                ; (w7:w4) = (Sr <<= 1)
        addc    w1,w1,w5                ; *
        addc    w2,w2,w6                ; *
        addc    w3,w3,w7                ; *
        bra     z,setsign               ; Remainder is zero ...

;------ See if the remainder is (r) or (r - y)

        sub     w4,w8,w4                ; (w7:w4) = (Sr << 1) - Sy
        subb    w5,w9,w5                ; *
        subb    w6,w10,w6               ; *
        subb    w7,w11,w7               ; *
        push    SR                      ; Save flags
        bra     normrem                 ; Normalize sig(r)

;------ Normalize the remainder's significand

normloop:
        add     w0,w0,w0                ; (w3:w0) = (Sr <<= 1)
        addc    w1,w1,w1                ; *
        addc    w2,w2,w2                ; *
        addc    w3,w3,w3                ; *
        dec     w13,w13                 ; (w13) = Er--
normrem:
        btss    w3,#4                   ; Sr normalized ?
        bra     normloop                ; Not yet ...
normout:

;------ Pack the remainder

        mul.uu  w4,#0,w4                ; (w4) = round = 0
                                        ; (w5) = sticky = 0
        mov.w   w13,w6                  ; (w6) = biased exponent

;       (w3:w0)= significand
;       (w4)   = round
;       (w5)   = sticky
;       (w6)   = biased exponent

        rcall   __dpack                 ; (w9:w8) = r

;------ Adjust remainder if necessary

        add     w14,#BFLT,w6            ; (w6)=&b
        pop     SR                      ; (r - y) needed ?
        bra     lt,setsign              ; No ...
        bra     gt,adjustrem            ; Yes ...
        btst    w12,#0                  ; q0 == 1 ?
        bra     z,setsign               ; No ... return(r)

;------ Compute r = (r - y)

adjustrem:
        mov.d   [w6++],w4               ; Load operand b
        mov.d   [w6],w6                 ; *
        bset    w7,#15                  ; (w7:w4) = -abs(b)
        btsc    w12,#7                  ; REM required ?
        rcall   ___adddf3               ; Yes ... r = r -abs(b)

;------ Sign the result

setsign:
        mov     [w14+AFLT3],w4          ; Load sign(a) & exp(a)
        btsc    w4,#15                  ; a < 0 ?
        btg     w3,#15                  ; Yes ... sign(r) ^= sign(a)
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;
;       Exit points
;-----------------------------------------------------------------------;

;------ Return operand a

returna:
        mov     [w14+AFLT0],w0          ; Load operand a.flt
        mov     [w14+AFLT1],w1          ; *
        mov     [w14+AFLT2],w2          ; *
        mov     [w14+AFLT3],w3          ; *
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;
domainerr:
        mov     #_EDOM,w0               ; Domain error
        btss    w12,#7                  ; MOD required ?
        mov     w0,_errno               ; Yes ... signal domain error
        bra     __dreturnNaN            ; Return(NaN) ...
;-----------------------------------------------------------------------;

.include "null_signature.s"
