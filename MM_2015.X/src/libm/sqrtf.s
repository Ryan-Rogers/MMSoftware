;-----------------------------------------------------------------------;
; sqrtf.s: Floating-point square-root elementary function.
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
; sqrtf
;
;       Single-precision square-root elementary function.
;
; Input:
;
;       (w1:w0) Floating-point number x
;
; Output:
;
;       (w1:w0) Floating-point number sqrt(x)
;
; Description:
;
;       Computes the square-root of the argument x.
;
;       If the argument is NaN, a quite NaN is returned.
;       If the argument is less than zero, a quite NaN is returned,
;       and errno is set to EDOM.
;
;       The following special cases are handled:
;               sqrt(+0) = +0
;               sqrt(-0) = -0
;               sqrt(+Infinity) = +Infinity
;       
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.sqrtf, code
	.endif
        .global _sqrtf

;-----------------------------------------------------------------------;

_sqrtf:
        mov.d   w8,[w15++]      ; Preserve scratch
        mov.d   w10,[w15++]     ; *
        mov.w   w12,[w15++]     ; *

;------ Extract significand & biased exponent

        mov.d   w0,w8           ; (w9:w8)=x
        rcall   __funpack       ; (w4)   =x(Type)
                                ; (w5)   =x(Biased exponent)
                                ; (w1:w0)=x(Significand)

;------ Check for NaNs

        btst    w4,#NANBIT      ; isNaN(x) ?
        bra     nz,xisNaN       ; Yes ...

;------ Check for Zeros

        cp      w4,#ZEROTYPE    ; Zero ?
        bra     z,return8       ; Yes ... sqrt(+/-0) = +/-0

;------ Check for negative arguments

        btst    w9,#15          ; x < 0 ?
        bra     nz,domainerr    ; Yes ...

;------ Check for +Infinity

        cp      w4,#INFTYPE     ; +Infinity ?
        bra     z,return8       ; Yes ... sqrt(+infinity) = +Infinity

;-----------------------------------------------------------------------;
;       x is finite and > 0
;-----------------------------------------------------------------------;

;------ Calculate result exponent

        sub     #FLT_BIAS,w5    ; (w5) = exponent n

        btst    w5,#0           ; isEven(n) ?
        bra     z,ncanonical    ; n is even ...

        add     w0,w0,w0        ; (w1:w0) = r <<= 1
        addc    w1,w1,w1        ; *

ncanonical:

;------ Calculate the root

        mul.uu  w8,#0,w8        ; (w9:w8) = q = 0
        mov     #0x0100,w3      ; (w3:w2) = b
        mov     #0x0000,w2      ; *
qloop:
        add     w0,w0,w0        ; (w1:w0) = r = r * 2
        addc    w1,w1,w1        ; *
        
        add     w8,w8,w10       ; (w11:w10) = t = 2 * q
        addc    w9,w9,w11       ; *
        add     w2,w10,w10      ; (w11:w10) = t = 2 * q + b
        addc    w3,w11,w11      ; *
        sub     w0,w10,w10      ; (w13:w10) = t = r - (2 * q + b)
        subb    w1,w11,w11      ; *
        bra     n,qnext         ; Branch if t < 0 ...

        mov.d   w10,w0          ; (w1:w0) = r = t
        ior     w8,w2,w8        ; (w8:w9) = q |= b
        ior     w9,w3,w9        ; *
qnext:
        lsr     w3,w3           ; (w3:w2) = b >>= 1
        rrc     w2,w2           ; *
        ior     w2,w3,[w15]     ; All bits computed ?
        bra     nz,qloop        ; No ... keep going ...

;------ Calculate round and sticky

;       (w2) = round = 0
;       (w3) = sticky = 0

        lsr     w9,w9           ; (w9:w8) = q >>= 1
        rrc     w8,w8           ; *
        addc    w2,#0,w2        ; (w2) = round = q(old) & 1
        mov     w2,w3           ; (w3) = sticky = round

;------ Final rounding

        asr     w5,#1,w11       ; (w11) = n /= 2
        add     #FLT_BIAS,w11   ; (w11) = final exponent

;       (w2)   = round
;       (w3)   = sticky
;       (w9:w8)= q(significand)
;       (w11)  = q(exponent)

        rcall   __fpack         ; Round and pack
        bra     __fbopExit      ; Return

;-----------------------------------------------------------------------;
;       Special arguments
;-----------------------------------------------------------------------;

;------ x is NaN

xisNaN:
        bset    w9,#FLT_QNAN%16 ; Force quiet NaN for result
return8:
        mov.d   w8,w0           ; Rounded result
        bra     __fbopExit      ; Return

;------ Domain error

domainerr:
        mov     #_EDOM,w2       ; Domain error
        mov     w2,_errno       ; *
        mov.w   #NaNLO,w0       ; Result is NaN
        mov.w   #NaNHI,w1       ; *
        bra     __fbopExit      ; Return

;-----------------------------------------------------------------------;

.include "null_signature.s"
