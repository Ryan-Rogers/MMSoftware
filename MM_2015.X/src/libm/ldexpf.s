;-----------------------------------------------------------------------;
;
; ldexpf: Single-precision floating-point load exponent function.
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
; ldexpf
;
;       Load exponent function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;       (w2)    Integer power of two n
;
; Output:
;
;       (w1:w0) x scaled by 2^n
;
;       errno   Set to ERANGE on overflow or underflow.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.ldexpf, code
	.endif

        .global _ldexpf

_ldexpf:

;------ Extract significand & biased exponent

        mov.d   w0,w6           ; (w7:w6)=x
        rcall   __funpack       ; (w4)   =x(Type)
                                ; (w5)   =x(Biased exponent)
                                ; (w1:w0)=x(Significand)

;------ Check for Zeros, Infinities and NaNs

        cp      w4,#FINITETYPE  ; Finite ?
        bra     z,finite        ; Yes ... scale x ...

;------ Zero, Infinity, or NaN ... no scaling required

        mov.d   w6,w0           ; Return x
        return                  ; Done

;-----------------------------------------------------------------------;
;       Argument is finite and non-zero
;-----------------------------------------------------------------------;

finite:
        add     w2,w5,w5        ; Scaled exponent

;------ Check for overflow

        mov     #FLT_BIAS+127,w3; Max exponent
        cp      w5,w3           ; Exponent too large ?
        bra     gt,overflow     ; Yes ...

;------ Check for underflow

        mov     #FLT_BIAS-149,w3; Min exponent
        cp      w5,w3           ; Exponent too small ?
        bra     ge,nounderflow  ; No ...

;------ Underflow: return +/- zero

        mov     #0,w5           ; Exponent
        bra     packupandgozero ; Leave

;------ Overflow: return +/- Infinity

overflow:
        mov     #255,w5         ; exponent
packupandgozero:
        mov     #_ERANGE,w0     ; Range error
        mov     w0,_errno       ; *
        mul.uu  w0,#0,w0        ; fraction = 0
        bra     packupandgo     ; Done

;------ Check if scaling is needed

nounderflow:
        mov     #FLT_BIAS-126,w3; Min exponent
        sub     w5,w3,w3        ; Subnormal ?
        bra     ge,packupandgo  ; No ...

;------ Subnormal scaling

reduce:
        lsr     w1,w1           ; fraction >>= 1
        rrc     w0,w0           ; *
        inc     w3,w3           ; Exponent in range ?
        bra     nz,reduce       ; No ... Keep shifting ...
        mov     #0,w5           ; Exponent

;------ Pack the result

packupandgo:
        sl      w5,#7,w5        ; align the exponent
        and     #0x7F,w1        ; Isolate fraction
        ior     w1,w5,w1        ; (w1:w0)=exponent & fraction
        btsc    w7,#15          ; Input negative ?
        bset    w1,#15          ; Yes ... make output negative
        return                  ; Return(x * 2^n)

;-----------------------------------------------------------------------;


.include "null_signature.s"
