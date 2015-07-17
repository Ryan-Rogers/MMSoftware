;-----------------------------------------------------------------------;
; atan2f.s: Floating-point arctangent elementary function.
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
; atanf
;
;       Single-precision arctangent elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number v
;       (w3:w2) Floating-point number u
;
; Output:
;
;       (w1:w0) Floating-point number arctan(v/u)
;
; Description:
;
;       Computes the arctangent of the ratio v/u.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.atanf, code
	.endif
        .global _atan2f

_atan2f:
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; *
        mov.w   w12,[w15++]             ; *

;------ Unpack the operands

        rcall   __funpack2              ; Unpack both operands

;-----------------------------------------------------------------------;
;
;       (w7:w6) v(Significand)
;       (w9:w8) v
;       (w10)   v(Type)
;       (w11)   v(Biased exponent)
;
;       (w1:w0) u(Significand)
;       (w3:w2) u
;       (w4)    u(Type)
;       (w5)    u(Biased exponent)
;
;-----------------------------------------------------------------------;

        mov     #_EDOM,w0               ; Domain error code
        bra     nn,checkinfinities      ; !(isNaN(u) || isNaN(v)) ...

;------ isNaN(u) || isNaN(v)

        mov     w0,_errno               ; Domain error
        bra     __fPropagateNaN         ; isNaN(u) || isNaN(v) ...

;-----------------------------------------------------------------------;
;       Check for infinities
;-----------------------------------------------------------------------;

checkinfinities:
        and     w4,w10,w1               ; (w1) = combined types

;------ Check (u,v) for special operands: Infinities

        cp      w1,#INFTYPE             ; isInf(u) && isInf(v) ?
        bra     nz,checkzeros           ; No ...

;------ isInfinity(u) && isInfinity(v)

domainerror:
        mov     w0,_errno               ; Domain error
        bra     __fbopReturnNaN         ; Return(QNaN)
        
;-----------------------------------------------------------------------;
;       Check for zeros
;-----------------------------------------------------------------------;

checkzeros:

;------ Check (u,v) for special operands: Zero

        cp      w1,#ZEROTYPE            ; isZero(u) && isZero(v) ?
        bra     z,domainerror           ; Yes ...

;-----------------------------------------------------------------------;
;       u,v are finite, non-zero
;-----------------------------------------------------------------------;

finitenonzero:
        mov.d   w8,w0                   ; (w1:w0) = v
        mov.w   w3,w8                   ; (w8) = sign(u)
                                        ; (w9) = sign(v)
                                        ; (w3:w2) = u
        rcall   ___divsf3               ; (w1:w0) = v/u
        bclr    w1,#15                  ; (w1:w0) = |v/u|
        rcall   _atanf                  ; (w1:w0) = atan(|v/u|)

;------ Test for u < 0

        btss    w8,#15                  ; u < 0 ?
        bra     checksignv              ; No ...

;------ Result = Pi - result

        mov.d   w0,w2                   ; (w2:w1) = result
        mov     #PIHI,w1                ; (w1:w0) = Pi
        mov     #PILO,w0                ; *
        rcall   ___subsf3               ; Yes ... result = PI - result

;------ Test for v < 0

checksignv:
        btsc    w9,#15                  ; v < 0 ?
        btg     w1,#15                  ; Yes ... result = -result

;-----------------------------------------------------------------------;
return0:
        bra     __fbopExit              ; Recover scratch & return
;-----------------------------------------------------------------------;

.include "null_signature.s"
