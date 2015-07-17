;-----------------------------------------------------------------------;
; sinhcoshf.s: Floating-point hyperbolic sine/cosine elementary functions.
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
; sinhcoshf
;
;       Single-precision hyperbolic sine or cosine elementary function.
;
; Input:
;
;       (w11:w10)       Floating-point number y
;       (w8)            Function selector: 8000=sine, 0000=cosine
;
; Output:
;
;       (w1:w0) Floating-point number hyperbolic sine(y) or cosine(y)
;
; Description:
;
;       Computes the hyperbolic sine or cosine of the argument y.
;       
;-----------------------------------------------------------------------;

;
; LNV: An exact machine number slightly larger than ln(2)
;
	.ifdef ffunction
	.section .libm.sinhcoshf, code
	.endif

        LCONST  LNV,    0x3F317300
;
; Vo2m1: v/2-1
;
        LCONST  Vo2m1,  0x37680897

;
; YBAR: Largest machine number less than ln(NMAX)
;       where NMAX is the largest normalized number [(2-2^-23) * 2^127].
;       YBAR = 88.7228
;
        LCONST  YBAR,   0x42B17217

; YMAX: Largest machine number such thet sinh(y) is representable
;       YMAX = 89.4159862326282983631
;
        LCONST  YMAX,   0x42B2D4FC

;-----------------------------------------------------------------------;

        .global __sinhcoshf

__sinhcoshf:

;------ Check for y > ybar

        mov.d   w10,w0          ; y
        mov     #YBARLO,w2      ; sinh(y) = y for y < ybar
        mov     #YBARHI,w3      ; *
        rcall   ___lesf2        ; compare y ? ybar
        bra     le,inrange      ; y <= ybar ...

;-----------------------------------------------------------------------;
;       y > ybar
;-----------------------------------------------------------------------;

;------ check for y > ymax

        mov.d   w10,w0          ; y
        mov     #YMAXLO,w2      ; y max
        mov     #YMAXHI,w3      ; *
        rcall   ___gtsf2        ; compare y ? y max
        mov.d   w10,w0          ; (w1:w0) = y
        bra     gt,overflow     ; y > y max ...

;------ w = y - ln(v)

        mov     #LNVLO,w2       ; (w3:w2) = ln(v)
        mov     #LNVHI,w3       ; *
        rcall   ___subsf3       ; (w1:w0) = w = y - ln(v)

;------ z = expf(w)

overflow:
        rcall   _expf           ; (w1:w0) = expf(w)
        mov.d   w0,w10          ; (w11:w10) = z = expf(w)

;------ result = z + (v/2-1) * z

        mov     #Vo2m1LO,w2     ; (w3:w2) = v/2-1
        mov     #Vo2m1HI,w3     ; *
        rcall   ___mulsf3       ; (w1:w0) = (v/2-1) * z
        mov.d   w10,w2          ; (w3:w2) = z
        bra     ___addsf3       ; return(z + (v/2-1) * z)

;-----------------------------------------------------------------------;
;       y <= ybar
;-----------------------------------------------------------------------;
inrange:

;------ z = expf(y)

        mov.d   w10,w0          ; (w1:w0) = y
        rcall   _expf           ; (w1:w0) = expf(y)
        mov.d   w0,w10          ; (w11:w10) = z = exp(y)

;------ result = (z +/- 1/z) * 0.5

        mov.d   w10,w2          ; (w3:w2) = z
        mov     #ONELO,w0       ; (w1:w0) = 1.0
        mov     #ONEHI,w1       ; *
        rcall   ___divsf3       ; (w1:w0) = 1/z

        xor     w8,w1,w1        ; (w1:w0) = +/- 1/z
        mov.d   w10,w2          ; (w3:w2) = z
        rcall   ___addsf3       ; (w1:w0) = z +/- 1/z

        mov     #HALFLO,w2      ; (w1:w0) = 1.0
        mov     #HALFHI,w3      ; *
        bra     ___mulsf3       ; (w1:w0) = (z +/- 1/z) * 0.5

;-----------------------------------------------------------------------;

.include "null_signature.s"
