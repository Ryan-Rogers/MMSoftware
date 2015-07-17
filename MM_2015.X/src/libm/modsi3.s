;-----------------------------------------------------------------------;
; modsi3.s: Integer division elementary operation.
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
; __modsi3
;
;       Signed 32-bit integer remainder.
;
; Input:
;
;       (w1:w0) Dividend (Q)
;       (w3:w2) Divisor (D)
;
; Output:
;
;       (w1:w0) Remainder (R)
;
; Description:
;
;       Caclulates the remainder. The sign of the remainder is the
;       sign of the dividend Q.
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.modsi3, code
	.endif
        .global ___modsi3

___modsi3:
;-----------------------------------------------------------------------;
        mov     w1,[w15++]      ; Save sign of result
        cp0     w1              ; Q < 0 ?
        bra     ge,modtestb     ; No ...

;------ Q < 0

        subr    w0,#0,w0        ; (w1:w0) := Q = -Q
        subbr   w1,#0,w1        ; *

modtestb:
        cp0     w3              ; D < 0 ?
        bra     ge,calcrem      ; No ...

;------ D < 0

        subr    w2,#0,w2        ; (w3:w2) := D = -D
        subbr   w3,#0,w3        ; *

;------ Compute the remainder

calcrem:
        rcall   ___umodsi3      ; (w1:w0) = remainder

        cp0     [--w15]         ; Result -ve ?
        bra     nn,exitr        ; No ...

;------ Result is negative

        subr    w0,#0,w0        ; (w1:w0) := R = -R
        subbr   w1,#0,w1        ; *
exitr:
        return
;-----------------------------------------------------------------------;


.include "null_signature.s"
