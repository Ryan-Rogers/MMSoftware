;-----------------------------------------------------------------------;
; adddf3.s: Single-precision floating-point addition and subtraction.
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
; adddf3
;
;       IEEE-754 addition elementary operation.
;
; Input:
;
;       (w3:w2:w1:w0) Floating-point augend (a)
;       (w7:w6:w5:w4) Floating-point addend (b)
;
; Output:
;
;       (w3:w2:w1:w0) Floating-point sum (a + b)
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
	.section .libm.adddf3, code
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

        .global ___adddf3

___adddf3:
        lnk     #DSIZ*2                 ; Construct the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;-----------------------------------------------------------------------;
;       Step 1: Compute the sign of the result.
;-----------------------------------------------------------------------;

        mov     w7,w12                  ; (w12) = sign(b)
        xor     w3,w7,w13               ; (w13) = sign(a) != sign(b) (bit #15)
        bra     nn,gotsign              ; sign(a) == sign(b) ...

;------ Operand signs are different

        mov     w3,w8                   ; (w8) = exp(a)
        mov     w7,w9                   ; (s9) = exp(b)
        bclr    w8,#15                  ; Strip sign(a)
        bclr    w9,#15                  ; Strip sign(b)
        sub     w0,w4,[w15]             ; Form |a| - |b|
        subb    w1,w5,[w15]             ; *
        subb    w2,w6,[w15]             ; *
        subb    w8,w9,[w15]             ; (flags) = sign(|a| - |b|)
        bra     n,gotsign               ; |a| - |b| < 0 : sign(s) = sign(b) ...
        btg     w12,#15                 ; Assume |a| - |b| > 0
        bra     nz,gotsign              ; |a| - |b| > 0 : sign(s) = sign(a) ...
        bclr    w12,#15                 ; |a| - |b| = 0 ... sign(s) = '+'
gotsign:

;-----------------------------------------------------------------------;

;------ Unpack the operands

        rcall   __dunpack2              ; Unpack the two operands

;       (w0) = type(a)
;       (w1) = type(b)
;       (w12) = sign(s)
;       (w13) = sign(a) ^ sign(b)

;------ Check a for special operands: Infinity

        cp      w0,#INFTYPE             ; isInf(a) ?
        bra     z,aisinfinite           ; Yes ...

;------ Check b for special operands: Infinity

        add     w14,#BFLT,w2            ; (w2)=&b
        cp      w1,#INFTYPE             ; isInf(b) ?
        bra     z,returnab              ; Yes ... return(b)

;-----------------------------------------------------------------------;
;       Both operands are finite
;-----------------------------------------------------------------------;

;------ Load significands

        add     w14,#ASIG,w2            ; (w2) = &a.sig
        sub     w15,#RSAV+8,w10         ; (w10)= &b.sig

        mov.d   [w2++],w0               ; Load a.sig
        mov.d   [w2],w2                 ; *

        mov.d   [w10++],w8              ; Load b.sig
        mov.d   [w10],w10               ; *

;-----------------------------------------------------------------------;
;       Step 2: Put operands in canonical order: exp(a) >= exp(b)
;-----------------------------------------------------------------------;

        mov     [w14+AEXP],w6           ; (w6) = exp(a)
        mov     [w14+BEXP],w5           ; (w5) = exp(b)
        sub     w6,w5,w7                ; exp(a) >= exp(b) ?
        bra     ge,expcanonical         ; Yes ...

;------ Swap the operands

.ifdef EXCH_ERRATA
        push.d  w0
	push.d  w2
        mov.d   w8, w0
        mov.d   w10, w2
        pop.d   w10
        pop.d   w8
.else
        exch    w0,w8                   ; swap significands
        exch    w1,w9                   ; *
        exch    w2,w10                  ; *
        exch    w3,w11                  ; *
.endif

        neg     w7,w7                   ; (w7) = exp(b) - exp(a)
        mov     w5,w6                   ; (w6) = exp(b)

expcanonical:

;       (w7) = exp(a) - exp(b) (exponent difference)
;       (w6) = exp(s) = max(exp(a),exp(b))

;-----------------------------------------------------------------------;
;       Step 3: If the operand signs differ, complement operand b
;-----------------------------------------------------------------------;

        btst    w13,#15                 ; sign(a) == sign(b) ?
        bra     z,bcanonical            ; Yes ...

        subr    w8,#0,w8                ; b(significand) = -b(significand)
        subbr   w9,#0,w9                ; *
        subbr   w10,#0,w10              ; *
        subbr   w11,#0,w11              ; *

bcanonical:

;-----------------------------------------------------------------------;
;       Step 4: Align the binary point of operand b
;-----------------------------------------------------------------------;
        
        mul.uu  w4,#0,w4                ; (w4) = round
                                        ; (w5) = sticky

;------ See if the shift count is large

        mov     #DBL_PREC+2,w13         ; Large shift count
        cp      w7,w13                  ; Shift count large ?
        clr     w13                     ; (w13) = guard
        bra     ltu,aligniter           ; No ... align the binary point ...

;------ Shift count is large: sig(s) = sig(a) + 0

;       It is not possible that the sum is subnormal, and no rounding
;       is needed, so simple packing of the result is all that is
;       required.

        sl      w6,#4,w6                ; Align the exponent
        and     #0x000F,w3              ; Clear sign & exponent
        ior     w6,w3,w3                ; Insert the exponent

        bra     signoff                 ; Sign the result and exit ...

;------ Shift count is not large

align:
        ior     w5,w4,w5                ; (w5) =(sticky |= round)
        mov     w13,w4                  ; (w4) =(round = guard)
        and     w8,#1,w13               ; (w13)=(guard = b(significand) & 1)

        asr     w11,w11                 ; (w11:w8)=(b(significand) >>= 1)
        rrc     w10,w10                 ; *
        rrc     w9,w9                   ; *
        rrc     w8,w8                   ; *
aligniter:
        dec     w7,w7                   ; (w7)=(exponent difference)--
        bra     nn,align                ; Loop until aligned ...
aligned:

;-----------------------------------------------------------------------;
;       Step 5: Form the sum of the significands.
;-----------------------------------------------------------------------;

        add     w0,w8,w0                ; (w3:w0) = s(sig) = a(sig) + b(sig)
        addc    w1,w9,w1                ; *
        addc    w2,w10,w2               ; *
        addc    w3,w11,w3               ; *
        bra     nn,normalizesum         ; Result >= 0 ...

        subr    w0,#0,w0                ; s(significand) = -s(significand)
        subbr   w1,#0,w1                ; *
        subbr   w2,#0,w2                ; *
        subbr   w3,#0,w3                ; *

;-----------------------------------------------------------------------;
;       Step 6: Normalize the sum 
;-----------------------------------------------------------------------;

normalizesum:
        btst    w3,#5                   ; s(significand) & 0x0020000000000000 ?
        bra     z,checknormal           ; No ...

;------ Overflow: Shift right by one

        ior     w5,w13,w5               ; (w5) = (sticky |= guard)
        ior     w5,w4,w5                ; (w5) = (sticky |= round)
        and     w0,#1,w4                ; (w4) = (round = (s(significand) & 1))
        lsr     w3,w3                   ; (w3:w0)=(s(significand) >>= 1)
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *
        rrc     w0,w0                   ; *
        inc     w6,w6                   ; (w6) = s(exponent)++
        bra     round                   ; Rejoin common rounding ...

;------ Check for underflow

checknormal:
        btst    w3,#4                   ; sig(s) & 0x0010000000000000 == 0 ?
        bra     nz,discardguard         ; No ... sum is normalized ...
        
;------ Underflow: Shift the sum left until it's normalized

underflow:
        cp0     w6                      ; s(exponent) > 0 ?
        bra     le,round                ; No ... it's a subnormal ...
        dec     w6,w6                   ; (w6) = s(exponent)--

        btst.c  w13,#0                  ; <C>=guard bit
        addc    w0,w0,w0                ; (w3:w0) = (sig(s) <<= 1) | guard
        addc    w1,w1,w1                ; *
        addc    w2,w2,w2                ; *
        addc    w3,w3,w3                ; *

        btst    w3,#4                   ; sig(s) & 0x0010000000000000 == 0 ?
        bra     nz,round                ; No ... do final rounding ...

normalizeloop:
        cp0     w6                      ; s(exponent) > 0 ?
        bra     le,normalizeexit        ; No ... it's a subnormal ...
        dec     w6,w6                   ; (w6) = s(exponent)--

        add     w0,w0,w0                ; (w3:w0) = (sig(s) <<= 1)
        addc    w1,w1,w1                ; *
        addc    w2,w2,w2                ; *
        addc    w3,w3,w3                ; *

        bra     nz,normalizeexpok       ; sig(s) != 0 ...
        clr     w6                      ; (w6) = exp(s) = 0
normalizeexpok:
        btst    w3,#4                   ; sig(s) & 0x0010000000000000 == 0 ?
        bra     z,normalizeloop         ; Yes ... continue normalization ...
normalizeexit:
        mul.uu  w4,#0,w4                ; (w4) = (round = 0)
                                        ; (w5) = (sticky = 0)
        bra     round                   ; Rejoin common rounding ...

;------ Guard not needed: it becomes the round bit

discardguard:
        ior     w5,w4,w5                ; (w5) = (sticky |= round)
        and     w13,#1,w4               ; (w4) = (round = guard)

;-----------------------------------------------------------------------;
;       Step 7: Round to nearest
;-----------------------------------------------------------------------;

round:

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
;       Special arguments
;-----------------------------------------------------------------------;

;------ a is Infinity

aisinfinite:
        add     w14,#AFLT,w2            ; (w2)=&a
        cp      w1,#INFTYPE             ; isInf(b) ?
        bra     nz,returnab             ; Finite ... return(a)

;------ Both a and b are Infinity: check signs

        btst    w13,#15                 ; sign(a) == sign(b) ?
        bra     nz,__dreturnNaN         ; No ... Result is NaN

;------ Return operand a or b

returnab:
        mov.d   [w2++],w0               ; Load operand
        mov.d   [w2],w2                 ; *
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;


.include "null_signature.s"
