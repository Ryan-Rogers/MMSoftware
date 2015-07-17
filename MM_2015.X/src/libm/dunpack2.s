;-----------------------------------------------------------------------;
; dunpack2.s: Double-precision floating-point unpack utility.
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
; _dunpack2:
;
; Description:
;
;       Unpacks two double-precision floating-point operands
;
; Input:
;
;       (w3:w0) Operand a
;       (w7:w4) Operand b
;       (w14)   Frame
;
; Output:
;
;       (w0)    type(a)
;       (w1)    type(b)
;       (w8)    Address of DUNPACK structure for operand a. 
;       (w9)    Address of DUNPACK structure for operand b. 
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.dunpack2,code
	.endif
        .global __dunpack2
        .global __dunpack2exit
        .global __dreturnNaN

__dunpack2:

;------ Preserve the input operands

        add     w14,#DFLT+4,w8          ; (w8)=&unpacked(a).f
        mov.d   w2,[w8--]               ; Preserve a
        mov.d   w0,[w8--]               ; *
        add     w14,#DSIZ+DFLT+4,w9     ; (w9)=&unpacked(b).f
        mov.d   w6,[w9--]               ; Preserve b
        mov.d   w4,[w9--]               ; *

;------ Unpack operand b

        mov.w   w9,w0                   ; (w0)=&unpacked(b)
        rcall   __dunpack               ; Unpack operand b
                                        ; (w0)=type(b)

;------ Unpack operand a

        mov.w   w8,w0                   ; (w0)=&unpacked(a)
        rcall   __dunpack               ; Unpack operand a
                                        ; (w0)=type(a)

;------ Check for NaNs

        mov.w   [w9],w1                 ; (w1)=type(b)
        ior.b   w0,w1,[w15]             ; isNaN(a) || isNaN(b) ?
        bra     nn,exit                 ; No ...

;-----------------------------------------------------------------------;
;       Exit points
;-----------------------------------------------------------------------;

;------ At least one operand is NaN

aorbIsNaN:
        mov.d   w8,w0                   ; (w0)=&unpacked(a)
                                        ; (w1)=&unpacked(b)
        rcall   __dPropagateNaN         ; (w3:w2:w1:w0) = QNaN
        sub     #4,w15                  ; Discard return address
        bra     __dunpack2exit          ; Done

;------ Return a quiet NaN

__dreturnNaN:
        mov     #0x7FFF,w3              ; Load QNaN
        mov     #0xFFFF,w2              ; *
        mul.su  w2,#1,w0                ; *

__dunpack2exit:
        mov.d   [--w15],w12             ; Recover scratch
        mov.d   [--w15],w10             ; Recover scratch
        mov.d   [--w15],w8              ; Recover scratch
        ulnk                            ; Restore caller's frame
exit:
        return                          ; Done

;-----------------------------------------------------------------------;

.include "null_signature.s"
