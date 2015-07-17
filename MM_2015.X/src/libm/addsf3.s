;-----------------------------------------------------------------------;
; addsf3.s: Single-precision floating-point addition and subtraction.
;
; This file is part of the compact math library for the dsPIC30.
; (c) Microchip Technology. 2003.
;
;-----------------------------------------------------------------------;
        .include "libm.inc"
	.ifndef ffuction
	.section .libm,code
	.endif
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;
; subsf3
;
;       IEEE-754 subtraction elementary operation.
;
; Input:
;
;       (w1:w0) Floating-point minuend (a)
;       (w3:w2) Floating-point subtrahend (b)
;
; Output:
;
;       (w1:w0) Floating-point difference (a - b)
;
; Description:
;
;       The difference (a - b) is calculated as the sum (a + (-b)).
;       This function changes the sign of b, and falls through to
;       the addition function.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.subsf3, code
	.endif
        .global ___subsf3

___subsf3:
        btg     w3,#15                  ; a - b == a + (-b)

;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;
; addsf3
;
;       IEEE-754 addition elementary operation.
;
; Input:
;
;       (w1:w0) Floating-point augend (a)
;       (w3:w2) Floating-point addend (b)
;
; Output:
;
;       (w1:w0) Floating-point sum (a + b)
;
; Notes:
;
;       This function is callable from C.
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
        .global ___addsf3

___addsf3:
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

;------ Check a for special operands: Infinity

        cp      w10,#INFTYPE            ; isInf(a) ?
        bra     z,aisinfinite           ; Yes ...

;------ Check b for special operands: Infinity

checkspecialb:
        cp      w4,#INFTYPE             ; isInf(b) ?
        bra     z,return2               ; Inf ... return(b)

;-----------------------------------------------------------------------;
;       Both operands are finite: determine the sign of the sum
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Step 1: Compute the sign of the result.
;-----------------------------------------------------------------------;

        xor     w9,w3,w4        ; (w4) = sign(a) != sign(b) (bit #15)
        bra     nn,getsign      ; sign(a) == sign(b) ...

;------ Operand signs are different

        sl      w9,w10          ; Strip sign(a)
        sl      w3,w12          ; Strip sign(b)
        sub     w8,w2,[w15]     ; Form |a| - |b|
        subb    w10,w12,w12     ; (flags) = sign(|a| - |b|)
        bra     ltu,getsign     ; |a| - |b| < 0 ... sign(s) = sign(b) ...
        bra     z,gotsign       ; |a| - |b| = 0 ... sign(s) = '+'
        mov     w9,w3           ; |a| - |b| > 0 ... sign(s) = sign(a) ...
getsign:
        mov     w3,w12          ; (w12) = sign(b)
gotsign:

;-----------------------------------------------------------------------;
;       Both operands are finite: form their sum
;-----------------------------------------------------------------------;

;       (w7:w6) = a(significand)
;       (w1:w0) = b(significand)
;         (w11) = a(biased exponent)
;          (w5) = b(biased exponent)
;          (w4) = a(sign) ^ b(sign)


;-----------------------------------------------------------------------;
;       Step 2: Put operands in canonical order: exp(a) >= exp(b)
;-----------------------------------------------------------------------;

        sub     w11,w5,w5       ; exp(a) >= exp(b) ?
        bra     ge,expcanonical ; Yes ...

;------ Swap the operands

.ifdef EXCH_ERRATA
	push.d  w0
	mov.d   w6, w0
	pop.d   w6
.else
        exch    w0,w6           ; (w7:w6) = b(significand)
        exch    w1,w7           ; (w1:w0) = a(significand)
.endif

        neg     w5,w5           ; (w5) = exp(b) - exp(a)
        add     w5,w11,w11      ; (w11) = exp(b)

expcanonical:

;       (w11) = exp(s) = max(exp(a),exp(b))
;       (w5)  = exp(a) - exp(b) (exponent difference)

;-----------------------------------------------------------------------;
;       Step 3: If the operand signs differ, complement operand b
;-----------------------------------------------------------------------;

        ior     w4,w4,[w15]     ; sign(a) == sign(b) ?
        bra     nn,nonegate     ; Yes ...

        subr    w0,#0,w0        ; b(significand) = -b(significand)
        subbr   w1,#0,w1        ; *

nonegate:

;-----------------------------------------------------------------------;
;       Step 4: Align the binary point of operand b
;-----------------------------------------------------------------------;
        
        mul.uu  w2,#0,w2        ; (w2) = round
                                ; (w3) = sticky
        clr     w10             ; (w10)= guard

;------ See if the shift count is large

        cp      w5,#FLT_PREC+2  ; Shift count large ?
        bra     ltu,aligniter   ; No ... align the binary point ...

;------ Shift count is large: sig(s) = sig(a) + 0

;       It is not possible that the sum is subnormal, and no rounding
;       is needed, so simple packing of the result is all that is
;       required.

        mov     w6,w0           ; (w1:w0) = sig(s) = sig(a) + 0
        sl      w11,#7,w11      ; Align the exponent
        and     #0x7F,w7        ; Clear sign & exponent
        ior     w11,w7,w1       ; Insert the exponent

        bra     signoff         ; Sign the result and exit ...

;------ Shift count is not large

align:
        ior     w3,w2,w3        ; (w3)   =(sticky |= round)
        mov     w10,w2          ; (w2)   =(round = guard)
        and     w0,#1,w10       ; (w10)  =(guard = s(significand) & 1)
        asr     w1,w1           ; (w1:w0)=(b(significand) >>= 1)
        rrc     w0,w0           ; *
aligniter:
        dec     w5,w5           ; (w5)=(exponent difference)--
        bra     nn,align        ; Loop until aligned ...
aligned:

;-----------------------------------------------------------------------;
;       Step 5: Form the sum of the significands.
;-----------------------------------------------------------------------;

        add     w0,w6,w8        ; (w9:w8) = s(sig) = a(sig) + b(sig)
        addc    w1,w7,w9        ; *
        bra     nn,normalizesum ; Result >= 0 ...

        subr    w8,#0,w8        ; s(significand) = -s(significand)
        subbr   w9,#0,w9        ; *

;-----------------------------------------------------------------------;
;       Step 6: Normalize the sum 
;-----------------------------------------------------------------------;

normalizesum:
        btst    w9,#8           ; s(significand) & 0x01000000 ?
        bra     z,checknormal   ; No ...

;------ Overflow: Shift right by one

        ior     w3,w10,w3       ; (w3) = (sticky |= guard)
        ior     w3,w2,w3        ; (w3) = (sticky |= round)
        and     w8,#1,w2        ; (w2) = (round = (s(significand) & 1))
        lsr     w9,w9           ; (w9:w8)=(s(significand) >>= 1)
        rrc     w8,w8           ; *
        inc     w11,w11         ; (w11) = s(exponent)++
        bra     round           ; Rejoin common rounding ...

;------ Check for underflow

checknormal:
        btst    w9,#7           ; (s(significand) & 0x00800000) == 0 ?
        bra     nz,discardguard ; No ... sum is normalized ...

;------ Underflow: Shift the sum left until it's normalized

underflow:
        cp0     w11             ; s(exponent) > 0 ?
        bra     le,round        ; No ... it's a subnormal ...
        dec     w11,w11         ; (w11) = s(exponent)--

        add     w8,w8,w8        ; (w9:w8) = (s(significand) <<= 1)
        addc    w9,w9,w9        ; *
        ior.b   w8,w10,w8       ; s(significand) |= guard

        btst    w9,#7           ; (s(significand) & 0x00800000) == 0 ?
        bra     nz,round        ; No ... do final rounding ...

normalizeloop:
        cp0     w11             ; exp(s) > 0 ?
        bra     le,normalizeexit; No ... it's a subnormal ...
        dec     w11,w11         ; (w11) = exp(s)--

        add     w8,w8,w8        ; (w9:w8) = (s(significand) <<= 1)
        addc    w9,w9,w9        ; *

        .if (1)                 ; Save time at the expense of space ?
        bra     nz,normalizetest; sig(s) != 0 ...
        mov     #0,w11          ; (w11) = exp(s) = 0
        .endif                  ; Save time at the expense of space ?

normalizetest:
        btst    w9,#7           ; (s(significand) & 0x00800000) == 0 ?
        bra     z,normalizeloop ; Yes ... continue normalization ...
normalizeexit:
        clr     w2              ; Yes ... (w2) = (round = 0)
        bra     round           ; Rejoin common rounding ...

;------ Guard not needed: it becomes the round bit

discardguard:
        ior     w3,w2,w3        ; (w3) = (sticky |= round)
        mov     w10,w2          ; (w2) = (round = guard)
        
;-----------------------------------------------------------------------;
;       Step 7: Round to nearest
;-----------------------------------------------------------------------;

round:

;       (w3)   = sticky
;       (w2)   = round
;       (w9:w8)= s(significand)
;       (w11)  = s(exponent)

        rcall   __fpack         ; Round and pack

signoff:
        btsc    w12,#15         ; Result negative ?
        bset    w1,#15          ; Yes
        bra     __fbopExit      ; Common exit

;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;

;------ a is Infinity

aisinfinite:
        cp      w4,#INFTYPE             ; isInf(b) ?
        bra     nz,return8              ; Finite ... return(a)

;------ a and b are Infinity: check signs

        xor     w9,w3,[w15]             ; sign(a) == sign(b) ?
        bra     n,__fbopReturnNaN       ; No ... return(NaN)
return8:
        mov.d   w8,w2                   ; Result value
return2:
        mov.d   w2,w0                   ; Result value
        bra     __fbopExit              ; Common exit

;-----------------------------------------------------------------------;


.include "null_signature.s"
