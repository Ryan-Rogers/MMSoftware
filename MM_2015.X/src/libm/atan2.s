;-----------------------------------------------------------------------;
; atan2.s: Floating-point arctangent elementary function.
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
; atan
;
;       Double-precision arctangent elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number v
;       (w7:w4) Floating-point number u
;
; Output:
;
;       (w3:w0) Floating-point number arctan(v/u)
;
; Description:
;
;       Computes the arctangent of the ratio v/u.
;       
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.atan2, code
	.endif
        .global _atan2
        .global _atan2l

_atan2:
_atan2l:
        lnk     #0                      ; Establish stack frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;------ Get operand types

        mov.d   w4,w8                   ; Preserve u
        mov.d   w6,w10                  ; *

        rcall   __dtype                 ; (w4) = type(v)
        mov     w4,w12                  ; (w12)= type(v)
        btst    w12,#NANBIT             ; isNaN(v) ?
        bra     nz,uvIsNaN              ; Yes ...

.ifdef EXCH_ERRATA
        push.d  w0
        push.d  w2
        mov.d   w8, w0
        mov.d   w10, w2
        pop.d   w10
        pop.d   w0
.else
        exch    w8,w0                   ; (w3:w0) = u
        exch    w9,w1                   ; *
        exch    w10,w2                  ; (w11:w8) = v
        exch    w11,w3                  ; *
.endif

        rcall   __dtype                 ; (w4) = type(u)
        mov     w4,w13                  ; (w13)= type(u)
        btst    w13,#NANBIT             ; isNaN(u) ?
        bra     nz,uvIsNaN              ; Yes ...

;-----------------------------------------------------------------------;
;       Check for infinities
;-----------------------------------------------------------------------;

        and     w12,w13,w12             ; (w12) = combined types

        cp      w12,#INFTYPE            ; isInf(u) && isInf(v) ?
        bra     z,domainerror           ; Yes ...

;-----------------------------------------------------------------------;
;       Check for zeros
;-----------------------------------------------------------------------;

        cp      w12,#ZEROTYPE           ; isZero(u) && isZero(v) ?
        bra     z,domainerror           ; Yes ...

;-----------------------------------------------------------------------;
;       u,v are finite, non-zero
;-----------------------------------------------------------------------;

        mov.d   w0,w4                   ; (w7:w4) = u
        mov.d   w2,w6                   ; *
        mov.d   w10,w2                  ; (w3:w0) = v
        mov.d   w8,w0                   ; *

        mov     w7,w8                   ; (w8) = sign(u)
                                        ; (w11)= sign(v)
        rcall   ___divdf3               ; (w3:w0) = v/u
        bclr    w3,#15                  ; (w3:w0) = |v/u|
        rcall   _atan                   ; (w3:w0) = atan(|v/u|)

;------ Test for u < 0

        btss    w8,#15                  ; u < 0 ?
        bra     checksignv              ; No ...

;------ Result = Pi - result

        btg     w3,#15                  ; (w3:w0) = -result
        mov     #DP_PI3,w7              ; (w7:w4) = Pi
        mov     #DP_PI2,w6              ; *
        mov     #DP_PI1,w5              ; *
        mov     #DP_PI0,w4              ; *
        rcall   ___adddf3               ; u < 0 ... result = PI - result

;------ Test for v < 0

checksignv:
        btsc    w11,#15                 ; v < 0 ?
        btg     w3,#15                  ; Yes ... result = -result

        bra     __dunpack2exit          ; Destroy frame and return ...
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Error exits
;-----------------------------------------------------------------------;

;------ isNaN(u) || isNaN(v)

uvIsNaN:
        mov     #_EDOM,w8               ; Domain error code
        mov     w8,_errno               ; Indicate error
        bset    w3,#DBL_QNAN%16         ; Force quiet NaN for result
        bra     __dunpack2exit          ; Destroy frame and return ...

;------ isInfinity(u) && isInfinity(v) or isZero(u) && isZero(v)

domainerror:
        mov     #_EDOM,w8               ; Domain error code
        mov     w8,_errno               ; Indicate error
        bra     __dreturnNaN            ; Return(QNaN)
        
;-----------------------------------------------------------------------;

.include "null_signature.s"
