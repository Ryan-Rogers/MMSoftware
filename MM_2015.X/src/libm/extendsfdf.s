;-----------------------------------------------------------------------;
; extendsfdf.s: Convert single-precision to double-precision
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
; __extendsfdf2: Convert single-precision to double-precision
;
; Description:
;
;       Convert a single-precision, floating-point number to a
;       double-precision, floating-pint number.
;
; Input:
;
;       (w1:w0) Floating-point number to be converted
;
; Output:
;
;       (w3:w2:w1:w0) Double-precision, representation of input value.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.extendsfdf2,code
	.endif

        .global ___extendsfdf2

___extendsfdf2:

;------ Unpack the argument

        mov     w1,w7                   ; (w7) = sign(x)
        rcall   __funpack               ; (w1:w0) = Significand (1.f)
                                        ; (w4)    = Type
                                        ; (w5)    = Biased exponent

        mov.d   w0,w2                   ; (w3:w0) = 1.f
        mul.uu  w0,#0,w0                ; *

        btst    w4,#NANBIT              ; isNaN(arg) ?
        bra     nz,xIsNaN               ; Yes ... return(NaN)
        cp      w4,#FINITETYPE          ; Determine type(x)
        bra     gtu,xIsInf              ; isInf(x) ... return(Inf)
        bra     ltu,signoff             ; isZero(x) ... return(Zero)

;-----------------------------------------------------------------------;
;       x is finite, non-zero
;-----------------------------------------------------------------------;

;------ align the binary point

        lsr     w3,w3                   ; Align the significand ...
        rrc     w2,w2                   ; ... by shifting the fraction ...
        rrc     w1,w1                   ; ... 3 positions right.
        lsr     w3,w3                   ; *
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *
        lsr     w3,w3                   ; *
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *

;------ Determine the result exponent

        add     #DBL_BIAS-FLT_BIAS,w5   ; (w5) = result exponent

;------ Pack the result

        sl      w5,#4,w5                ; Align the exponent
        and     #0x000F,w3              ; Clear sign & exponent
        ior     w5,w3,w3                ; Insert the exponent
signoff:
        btsc    w7,#15                  ; Result negative ?
        bset    w3,#15                  ; Yes ... set sign
exit:
        return                          ; Done

;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;

;------ x is NaN

xIsNaN:
        mov     #0x7FFF,w3              ; Load QNaN
        mov     #0xFFFF,w2              ; *
        mul.su  w2,#1,w0                ; *
        bra     exit                    ; Done

;------ x is infinity

xIsInf:
        mov     #0x7FF0,w3              ; Load +Inf
        bra     signoff                 ; Set sign & exit

;-----------------------------------------------------------------------;


.include "null_signature.s"
