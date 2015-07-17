;-----------------------------------------------------------------------;
; fixdfsi.s: Convert floating-point to 32-bit, signed integer 
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
; __fixdfsi: Convert floating-point to 32-bit, signed integer
;
; Description:
;
;       Convert a double-precision, floating-point number to a
;       32-bit, signed integer.
;
;       For compatibility with the C compiler, the conversion is rounded
;       towards zero.
;
; Input:
;
;       (w3:w2:w1:w0) Floating-point number to be converted
;
; Output:
;
;       (w1:w0) 32-bit, signed integer representation of input value.
;               If the input argument is NaN, LONG_MAX is returned.
;               If the conversion overflows, LONG_MIN or LONG_MAX
;               is returned, depending as the input is negative or
;               positive, respectively.
;               If the conversion underflows, zero is returned.
;
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Frame layout
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fixdfsi, code
	.endif

        .equ    XTYP,DTYP               ; Frame offset for typ(x)
        .equ    XEXP,DEXP               ; Frame offset for exp(x)
        .equ    XFLT,DFLT               ; Frame offset for flt(x)
        .equ    XSIG,DSIG               ; Frame offset for sig(x)
        .equ    XSIG0,XSIG+0            ; *
        .equ    XSIG1,XSIG+2            ; *
        .equ    XSIG2,XSIG+4            ; *
        .equ    XSIG3,XSIG+6            ; *

        .equ    RSAV,2*6                ; Register save size

;-----------------------------------------------------------------------;

        .global ___fixdfsi

___fixdfsi:
        lnk     #DSIZ                   ; Construct the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

;------ Unpack the operand

        mov.d   w0,w8                   ; (w11:w8) = x
        mov.d   w2,w10                  ; *
        add     w14,#XFLT+4,w0          ; (w0)=&unpacked(x).f
        mov.d   w10,[w0--]              ; Preserve x
        mov.d   w8,[w0--]               ; *
        rcall   __dunpack               ; (w0) = operand type

;------ Unpack the argument

        btsc    w0,#NANBIT              ; isNaN(x) ?
        bclr    w11,#15                 ; Yes ... clear sign

;------ Determine shift count for aligning the binary point

        mov     #DBL_BIAS+DBL_PREC-1,w0 ; (w0) = shift count offset
        mov     [w14+XEXP],w5           ; (w5) = x.exp
        sub     w5,w0,w5                ; (w5) = shift count

        mov     #32-DBL_PREC,w0         ; (w0) = overflow limit
        cp      w5,w0                   ; Overflow ?
        bra     ge,overflow             ; Yes ...

        mov     #-DBL_PREC,w0           ; (w0) = underflow limit
        cp      w5,w0                   ; Underflow ?
        bra     le,underflow            ; Yes ...

;------ Shift right

        mov     [w14+XSIG3],w2          ; Load x.sig
        mov     [w14+XSIG2],w1          ; *
        mov     [w14+XSIG1],w0          ; *
        add     #16,w5                  ; Account for initial shift
shiftrightloop:
        lsr     w2,w2                   ; (w2:w0) = (x.sig >>= 1)
        rrc     w1,w1                   ; *
        rrc     w0,w0                   ; *
        inc     w5,w5                   ; (w5) = count++
        bra     nz,shiftrightloop       ; Loop until aligned ...

;------ Set the sign of the result

setsign:
        cp0     w11                     ; x < 0 ?
        bra     nn,__dunpack2exit       ; No ...
        subr    w0,#0,w0                ; (w1:w0) = (result = -result)
        subbr   w1,#0,w1                ; *
        bra     __dunpack2exit          ; Destroy frame and return ...

;------ Overflow

overflow:
        mov     #0xFFFF,w0              ; (w1:w0) = LONG_MAX
        mov     #0x7FFF,w1              ; *
        cp0     w11                     ; arg < 0 ?
        bra     nn,__dunpack2exit       ; Yes ... return LONG_MIN

        mov     #0x8000,w1              ; (w1:w0) = LONG_MIN
        mov     #0x0000,w0              ; *
        bra     __dunpack2exit          ; Destroy frame and return ...

;------ Underflow

underflow:
        mul.uu  w0,#0,w0                ; Load 0
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;


.include "null_signature.s"
