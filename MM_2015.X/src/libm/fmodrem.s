;-----------------------------------------------------------------------;
; fmodrem.s: Floating-point remainder elementary operation.
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
; fmodrem
;
;       Single-precision remainder/modulus elementary operation.
;
; Input:
;
;       (w1:w0) Floating-point dividend x
;       (w3:w2) Floating-point divisor y
;       (w4)    Function required:
;               1 = REM -- IEEE-compliant
;               0 = MOD -- ANSI-compliant
;
; Output:
;
;       (w1:w0) Floating-point remainder REM(x/y) or MOD(x/y)
;
; Description:
;
;       The remainder (x/y) is calculated. The result is exact;
;       no rounding is required.
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
	.section .libm.fmodrem, code
	.endif
        .global __fmodrem

;-----------------------------------------------------------------------;

__fmodrem:

        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; *
        mov.w   w12,[w15++]             ; *

        sl      w4,#15,w12              ; (w12)=function

;------ Unpack the operands

        rcall   __funpack2              ; Unpack both operands
        bra     n,__fPropagateNaN       ; isNaN(a) || isNaN(b) ...

;-----------------------------------------------------------------------;
;
;       (w7:w6) x(Significand)
;       (w9:w8) x
;       (w10)   x(Type)
;       (w11)   x(Biased exponent)
;
;       (w1:w0) y(Significand)
;       (w3:w2) y
;       (w4)    y(Type)
;       (w5)    y(Biased exponent)
;
;-----------------------------------------------------------------------;

;------ Check y for special operands: Zero

        cp      w4,#ZEROTYPE            ; isZero(y) ?
        bra     z,domainerr             ; Yes ...

;------ Check x for special operands: Infinite

checkxinf:
        cp      w10,#FINITETYPE         ; isInf(x) ?
        bra     gtu,domainerr           ; Yes ... return(NaN)

;------ Check x for special operands: Zero

        bra     ltu,return8             ; isZero(x) ... return(x)

;------ Check y for special operands: Infinite

        cp      w4,#INFTYPE             ; isInf(y) ?
        bra     z,return8               ; Yes ... return(x)

;-----------------------------------------------------------------------;
;       Arguments are finite and non-zero
;-----------------------------------------------------------------------;

;------ Determine exponent difference

        sub.w   w11,w5,w4               ; (w4) = Ed = Ex - Ey
        bra     nn,rementry             ; Ed >= 0 ...

;------ Exponent difference negative

        inc     w4,w4                   ; Ed == -1 ?
        bra     nz,return8              ; No ... return(a)

;------ Exponent difference is -1

        sub     w6,w0,[w15]             ; Sx > Sy ?
        subb    w7,w1,[w15]             ; *
        bra     le,return8              ; No ... return(a)

        mov.d   w8,w0                   ; (w1:w0) = x to arg reg
        bclr    w3,#15                  ; (w3:w2) = |y|
        btss    w1,#15                  ; x < 0 ?
        bset    w3,#15                  ; sign(y) = ~sign(x)
        btsc    w12,#15                 ; REM required ?
        rcall   ___addsf3               ; Yes ... r = a +/- b
        bra     __fbopExit              ; Done

;-----------------------------------------------------------------------;
;       Calculate the remainder
;-----------------------------------------------------------------------;
remloop:
        add     w6,w6,w6                ; (w7:w6) = (Sr <<= 1)
        addc    w7,w7,w7                ; *
        add.b   w12,w12,w12             ; (w12) = (Q <<= 1)
rementry:
        sub     w6,w0,w10               ; (w11:w10) = Sr -= Sy
        subb    w7,w1,w11               ; *
        bra     n,remnext               ; Sr < 0
        mov.d   w10,w6                  ; (w7:w6) = (Sr -= Sy)
        bset    w12,#0                  ; (w12) = q = 1
remnext:
        dec     w4,w4                   ; (w4) = (Ed--)
        bra     nn,remloop              ; Form all Ed remainder bits ...

        mov.w   w5,w11                  ; (w11)=Er (biased)

;------ Check for zero

        add     w6,w6,w4                ; (w5:w4)= Sr << 1
        addc    w7,w7,w5                ; *
        bra     nz,checkmag             ; Remainder is non-zero ...

;------ Remainder is zero

        mul.uu  w0,#0,w0                ; Remainder is zero
        btsc    w9,#15                  ; x < 0
        bset    w1,#15                  ; Yes ... result = -0
        bra     __fbopExit              ; Return(0) ...
        
;------ See if the remainder is (r) or (r - y)

checkmag:
        sub     w4,w0,w4                ; (w5:w4) = (Sr << 1) - Sy
        subb    w5,w1,w5                ; *

;------ Normalize the remainder's significand

normrem:
        cp0.b   w7                      ; Sr normalized ?
        bra     n,normout               ; Yes ...
        add     w6,w6,w6                ; (w7:w6) = (Sr <<= 1)
        addc    w7,w7,w7                ; *
        dec     w11,w11                 ; (w11) = Er--
        bra     normrem                 ; Loop until normalized ...
normout:

;------ Pack the remainder

        mov.w   w9,w10                  ; (w10) = sign(x)
        mov.d   w6,w8                   ; (w9:w8) = Sr
                                        ; (w11) = Er
        mov.d   w2,w6                   ; (w7:w6) = y
        mul.uu  w2,#0,w2                ; (w2) = round = 0
                                        ; (w3) = sticky = 0
        rcall   __fpack                 ; (w1:w0) = r

;------ Adjust remainder if necessary

        sub     w4,#0,[w15]             ; (r - y) needed ?
        subb    w5,#0,[w15]             ; *
        bra     lt,setsign              ; No ...
        bra     gt,adjustrem            ; Yes ...
        btst    w12,#0                  ; q0 == 1 ?
        bra     z,setsign               ; No ... return(r)

;------ Compute r = (r - y)

adjustrem:
        mov.d   w6,w2                   ; (w3:w2) = y
        bset    w3,#15                  ; (w3:w2) = -abs(y)
        btsc    w12,#15                 ; REM required ?
        rcall   ___addsf3               ; Yes ... r = r -abs(y)

;------ Sign the result

setsign:
        xor     w1,w10,w10              ; (w10)=sign(r)
        bclr    w1,#15                  ; Set sign(r)
        btsc    w10,#15                 ; *
        bset    w1,#15                  ; *
        bra     __fbopExit              ; Common exit

;-----------------------------------------------------------------------;
;       Exit points
;-----------------------------------------------------------------------;
return8:
        mov.d   w8,w0                   ; Result value
        bra     __fbopExit              ; Common exit
;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;
domainerr:
        mov     #_EDOM,w0               ; Domain error
        btss    w12,#15                 ; MOD required ?
        mov     w0,_errno               ; Yes ... signal domain error
        bra     __fbopReturnNaN         ; Return(NaN) ...
;-----------------------------------------------------------------------;

.include "null_signature.s"
