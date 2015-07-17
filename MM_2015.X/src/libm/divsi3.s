;-----------------------------------------------------------------------;
; divsi3.s: Integer division elementary operation.
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
; __divsi3
;
;       Signed 32-bit integer division.
;
; Input:
;
;       (w1:w0) Dividend (Q)
;       (w3:w2) Divisor (D)
;
; Output:
;
;       (w1:w0) Quotient (Q)
;
; Description:
;
;       Caclulates the quotient. The sign of the quotient is the
;       exclusive OR of the operand signs.
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.divsi3, code
	.endif
        .global ___divsi3

___divsi3:
;-----------------------------------------------------------------------;
        xor     w1,w3,[w15++]   ; Save sign of result
        cp0     w1              ; Q < 0 ?
        bra     ge,divtestb     ; No ...

;------ Q < 0

        subr    w0,#0,w0        ; (w1:w0) := Q = -Q
        subbr   w1,#0,w1        ; *

divtestb:
        cp0     w3              ; D < 0 ?
        bra     ge,calcquot     ; No ...

;------ D < 0

        subr    w2,#0,w2        ; (w3:w2) := D = -D
        subbr   w3,#0,w3        ; *

;------ Compute the quotient

calcquot:
        rcall   ___udivsi3      ; (w1:w0) = quotient

        cp0     [--w15]         ; Result -ve ?
        bra     nn,returnq      ; No ...

;------ Result is negative

        subr    w0,#0,w0        ; (w1:w0) := Q = -Q
        subbr   w1,#0,w1        ; *
returnq:
        return
;-----------------------------------------------------------------------;


.include "null_signature.s"
