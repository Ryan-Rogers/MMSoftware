;-----------------------------------------------------------------------;
; fixunsdfdi.s: Convert floating-point to 64-bit, unsigned integer 
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
; __fixunsdfdi: Convert floating-point to 64-bit, unsigned integer
;
; Description:
;
;       Convert a double-precision, floating-point number to a
;       64-bit, unsigned integer.
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
;       (w3:w2:w1:w0) 64-bit, signed integer representation of input value.
;               If the input argument is NaN, LLONG_MAX is returned.
;               If the conversion overflows, LLONG_MAX is returned.
;               If the t6he onput argument is negative, zero is returned.
;               If the conversion underflows, zero is returned.
;
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Frame layout
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fixunsdfdi, code
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

        .global ___fixunsdfdi

___fixunsdfdi:
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

        btsc    w0,#NANBIT              ; isNaN(x) ?
        bclr    w11,#15                 ; Yes ... clear sign
        btst    w11,#15                 ; x < 0
        bra     nz,underflow            ; Yes ...

        mov     [w14+XSIG3],w3          ; Load x.sig
        mov     [w14+XSIG2],w2          ; *
        mov     [w14+XSIG1],w1          ; *
        mov     [w14+XSIG0],w0          ; *
        mov     [w14+XEXP],w5           ; (w5) = x.exp

;------ Determine shift count for aligning the binary point

        mov     #DBL_BIAS+DBL_PREC-1,w4 ; (w4) = shift count offset
        sub     w5,w4,w5                ; (w5) = shift count

        bra     z,__dunpack2exit        ; No shift required ...
        bra     gt,shiftleft            ; Left shift required ...

        mov     #-DBL_PREC,w4           ; (w4) = underflow limit
        cp      w5,w4                   ; Underflow ?
        bra     le,underflow            ; Yes ...

;------ Shift right

shiftrightloop:
        lsr     w3,w3                   ; (w3:w0) = (x.sig >>= 1)
        rrc     w2,w2                   ; *
        rrc     w1,w1                   ; *
        rrc     w0,w0                   ; *
        inc     w5,w5                   ; (w5) = count++
        bra     nz,shiftrightloop       ; Loop until aligned ...

        bra     __dunpack2exit          ; Destroy frame and return ...

;------ Shift left

shiftleft:
        mov     #64-DBL_PREC,w4         ; (w4) = overflow limit
        cp      w5,w4                   ; Overflow ?
        bra     gt,overflow             ; Yes ...

shiftleftloop:
        add     w0,w0,w0                ; (w3:w0) = (x.sig <<= 1)
        addc    w1,w1,w1                ; *
        addc    w2,w2,w2                ; *
        addc    w3,w3,w3                ; *
        dec     w5,w5                   ; (w5) = count--
        bra     nz,shiftleftloop        ; Loop until aligned ...
        bra     __dunpack2exit          ; Destroy frame and return ...

;------ Overflow

overflow:
        mov     #0x8000,w3              ; (w3:w0) = ULLONG_MAX
        mov     #0x0000,w2              ; *
        bra     returnz                 ; Destroy frame and return ...

;------ Underflow

underflow:
        mul.uu  w2,#0,w2                ; Load 0
returnz:
        mul.uu  w0,#0,w0                ; *
        bra     __dunpack2exit          ; Destroy frame and return ...

;-----------------------------------------------------------------------;


.include "null_signature.s"
