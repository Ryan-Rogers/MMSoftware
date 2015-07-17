;-----------------------------------------------------------------------;
; sinhcosh.s: Floating-point hyperbolic sine/cosine elementary functions.
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
; sinhcosh
;
;       Double-precision hyperbolic sine or cosine elementary function.
;
; Input:
;
;       (w3:w0) Floating-point number y
;       (w13)   Function selector: 8000=sine, 0000=cosine
;
; Output:
;
;       (w3:w0) Floating-point number hyperbolic sine(y) or cosine(y)
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
	.section .libm.sinhcosh, code
	.endif
        .equ    DP_LNV3,        0x3FE6
        .equ    DP_LNV2,        0x2E60
;
; Vo2m1: v/2-1
;
        .equ    DP_Vo2m13,      0x3EED
        .equ    DP_Vo2m12,      0x0112
        .equ    DP_Vo2m11,      0xEB02
        .equ    DP_Vo2m10,      0x02D6

;
; YBAR: Largest machine number less than ln(NMAX)
;       where NMAX is the largest normalized number.
;       YBAR = 709.78271
;
        .equ    DP_YBAR3,       0x4086
        .equ    DP_YBAR2,       0x2E42
        .equ    DP_YBAR1,       0xFEFA
        .equ    DP_YBAR0,       0x39EF

; YHAT: Largest machine number such thet sinh(y) is representable
;       YHAT = 710.4758600739439420416
;
        .equ    DP_YHAT3,       0x4086
        .equ    DP_YHAT2,       0x33CE
        .equ    DP_YHAT1,       0x8FB9
        .equ    DP_YHAT0,       0xF87E

;-----------------------------------------------------------------------;

        .global ___sinhcosh

___sinhcosh:
        mov.d   w0,[w14++]              ; Preserve y
        mov.d   w2,[w14--]              ; *

;------ Check for y > ybar

        mov     #DP_YBAR3,w7            ; sinh(y) = y for y < ybar
        mov     #DP_YBAR2,w6            ; *
        mov     #DP_YBAR1,w5            ; *
        mov     #DP_YBAR0,w4            ; *
        rcall   ___ledf2                ; compare y ? ybar
        bra     le,inrange              ; y <= ybar ...

;-----------------------------------------------------------------------;
;       y > ybar
;-----------------------------------------------------------------------;

;------ check for y > ymax

        mov.d   [w14++],w0              ; y
        mov.d   [w14--],w2              ; *
        mov     #DP_YHAT3,w7            ; y max
        mov     #DP_YHAT2,w6            ; *
        mov     #DP_YHAT1,w5            ; *
        mov     #DP_YHAT0,w4            ; *
        rcall   ___gtdf2                ; compare y ? y max
        mov.d   [w14++],w0              ; y
        mov.d   [w14--],w2              ; *
        bra     gt,overflow             ; y > y max ...

;------ w = y - ln(v)

        mov     #DP_LNV3,w7             ; (w7:w4) = ln(v)
        mov     #DP_LNV2,w6             ; *
        mul.uu  w4,#0,w4                ; *
        rcall   ___subdf3               ; (w3:w0) = w = y - ln(v)

;------ z = expf(w)

overflow:
        rcall   _exp                    ; (w3:w0) = expf(w)
        mov.d   w0,[w14++]              ; Preserve = z = expf(w)
        mov.d   w2,[w14--]              ; *

;------ result = z + (v/2-1) * z

        mov     #DP_Vo2m13,w7           ; (w7:w4) = v/2-1
        mov     #DP_Vo2m12,w6           ; *
        mov     #DP_Vo2m11,w5           ; *
        mov     #DP_Vo2m10,w4           ; *
        rcall   ___muldf3               ; (w3:w0) = (v/2-1) * z
        mov.d   [w14++],w4              ; z
        mov.d   [w14--],w6              ; *
        bra     ___adddf3               ; return(z + (v/2-1) * z)

;-----------------------------------------------------------------------;
;       y <= ybar
;-----------------------------------------------------------------------;
inrange:

;------ z = expf(y)

        mov.d   [w14++],w0              ; y
        mov.d   [w14--],w2              ; *
        rcall   _exp                    ; (w3:w0) = expf(y)
        mov.d   w0,[w14++]              ; Preserve z = exp(y)
        mov.d   w2,[w14--]              ; *

;------ result = (z +/- 1/z) * 0.5

        mov.d   w0,w4                   ; (w7:w4) = z
        mov.d   w2,w6                   ; *
        mov     #DP_ONE3,w3             ; (w3:w0) = 1.0
        mov     #DP_ONE2,w2             ; *
        mul.uu  w0,#0,w0                ; *
        rcall   ___divdf3               ; (w3:w0) = 1/z

        xor     w13,w3,w3               ; (w3:w0) = +/- 1/z
        mov.d   [w14++],w4              ; (w7:w4) = z
        mov.d   [w14--],w6              ; *
        rcall   ___adddf3               ; (w3:w0) = z +/- 1/z

        mov     #DP_HALF3,w7            ; (w7:w4) = 0.5
        mov     #DP_HALF2,w6            ; *
        mul.uu  w4,#0,w4                ; *
        bra     ___muldf3               ; (w3:w0) = (z +/- 1/z) * 0.5

;-----------------------------------------------------------------------;

.include "null_signature.s"
