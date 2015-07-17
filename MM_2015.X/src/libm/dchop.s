;-----------------------------------------------------------------------;
;
; dchop.s: Double-precision floating-point chop function.
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
; _dchop: Double-precision floating-point chop function.
;
; Input:
;
;       (w3:w2:w1:w0)   x: argument to be chopped
;       (w4)            k: power of two below which to chop significand bits
;
; Output:
;
;       (w3:w2:w1:w0)   Chopped argument
;       (w4)            0=argument not chopped; -1=argument chopped
;       (w5)            Argument type =
;                               {ZEROTYPE, FINITETYPE, INFTYPE, NANTYPE}
;       <Z>             Set=argument not chopped
;                       Clr=argument was chopped
;
; Description:
;
;       Significand bits below the threshold 2^k are chopped.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.dchop, code
	.endif
        .global __dchop

;-----------------------------------------------------------------------;
;       Frame layout
;-----------------------------------------------------------------------;

        .equ    XTYP,DTYP               ; Frame offset for typ(x)
        .equ    XEXP,DEXP               ; Frame offset for exp(x)
        .equ    XFLT,DFLT               ; Frame offset for flt(x)
        .equ    XFLT0,XFLT+0            ; *
        .equ    XFLT1,XFLT+2            ; *
        .equ    XFLT2,XFLT+4            ; *
        .equ    XFLT3,XFLT+6            ; *
        .equ    XSIG,DSIG               ; Frame offset for sig(x)
        .equ    XSIG0,XSIG+0            ; *
        .equ    XSIG1,XSIG+2            ; *
        .equ    XSIG2,XSIG+4            ; *
        .equ    XSIG3,XSIG+6            ; *

        .equ    RSAV,2*6                ; Register save size

;-----------------------------------------------------------------------;
__dchop:
        lnk     #DSIZ                   ; Construct the frame
        mov.d   w8,[w15++]              ; Preserve scratch
        mov.d   w10,[w15++]             ; Preserve scratch
        mov.d   w12,[w15++]             ; Preserve scratch

        mov     w4,w12                  ; (w12) = k

;------ Extract significand & biased exponent

        add     w14,#XFLT+4,w5          ; (w5)=&unpacked(x).f
        mov.d   w2,[w5--]               ; Preserve x
        mov.d   w0,[w5--]               ; *
        mov     w5,w0                   ; (w0)=&unpacked(x)
        rcall   __dunpack               ; (w0) = type(x)

        cp      w0,#FINITETYPE          ; x finite, non-zero ?
        bra     nz,returnx              ; No ... nothing to do ...

;-----------------------------------------------------------------------;
;       Argument is finite, non-zero
;-----------------------------------------------------------------------;

        mul.uu  w0,#0,w0                ; Clear result significand
        mul.uu  w2,#0,w2                ; *

;------ compute d = Ex - k

        mov     [w14+XEXP],w6           ; (w6) = exp(x)
        sub     w6,w12,w6               ; (w6) = d (biased)
        sub     #DBL_BIAS,w6            ; (w6) = d
        bra     lt,signit               ; d < 0 ... result is zero

        mov     #DBL_PREC-1,w11         ; (w11) = (p-1) ?
        cp      w6,w11                  ; d < (p-1) ?
        bra     ge,returnx              ; No ... nothing to chop ...

;-----------------------------------------------------------------------;
;       Chop required
;-----------------------------------------------------------------------;

;------ mask = 0x000FFFFFFFFFFFFF >> d

        mov     #0x001F,w11             ; (w11:w8) = mask
        mov     #0xFFFF,w10             ; *
        mul.su  w10,#1,w8               ; *
        add     w14,#XSIG,w2            ; (w2) = &x.sig
shiftloop:
        lsr     w11,w11                 ; (w11:w8) = mask >> 1
        rrc     w10,w10                 ; *
        rrc     w9,w9                   ; *
        rrc     w8,w8                   ; *
        dec     w6,w6                   ; (w6) = d--
        bra     nn,shiftloop            ; Align the mask ...

;------ Load significand

        mov.d   [w2++],w0               ; Load x.sig
        mov.d   [w2],w2                 ; *

;------ chop = (Sx & mask) != 0

        and     w8,w0,w4                ; (w7:w4) = Sx & mask
        and     w9,w1,w5                ; *
        and     w10,w2,w6               ; *
        and     w11,w3,w7               ; *
        ior     w4,w5,w4                ; (Sx & mask) == 0 ?
        ior     w4,w6,w4                ; *
        ior     w4,w7,w4                ; *
        bra     z,returnx               ; Yes ... nothing to chop ...

;------ Sx &= ~mask

        com     w8,w8                   ; (w11:w8) = ~mask
        com     w9,w9                   ; *
        com     w10,w10                 ; *
        com     w11,w11                 ; *
        and     w8,w0,w0                ; (w3:w0) = Sx & ~mask
        and     w9,w1,w1                ; *
        and     w10,w2,w2               ; *
        and     w11,w3,w3               ; *

;------ Pack the result

;       (w3:w0)= significand
;       (w4)   = round
;       (w5)   = sticky
;       (w6)   = biased exponent

        mul.uu  w4,#0,w4                ; (w4) = round = 0
                                        ; (w6) = sticky = 0
        mov     [w14+XEXP],w6           ; (w6) = exp(x)
        rcall   __dpack                 ; (w3:w0) = packed result
signit:
        mov     [w14+XFLT3],w7          ; (w7) = sign(x)
        btsc    w7,#15                  ; x < 0 ?
        bset    w3,#15                  ; Yes ... result = -result
        setm    w4                      ; Indicate bits were chopped

;-----------------------------------------------------------------------;
exit:
        cp0     w4                      ; Set flags
        mov     [w14+XTYP],w5           ; Set result type
        mov.d   [--w15],w12             ; Recover scratch
        mov.d   [--w15],w10             ; Recover scratch
        mov.d   [--w15],w8              ; Recover scratch
        ulnk                            ; Restore caller's frame
        return                          ; Done
returnx:
        add     w14,#XFLT,w2            ; (w2)=&x
        mov     #0,w4                   ; Indicate chop not required
        mov.d   [w2++],w0               ; Load operand
        mov.d   [w2],w2                 ; *
        bra     exit                    ; Done

;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;
;       C-callable entry point
;
;       double __dchop(double x, int k, int *pchopped)
;
;-----------------------------------------------------------------------;
        .if (0)                         ; C-callable version needed ?
        .global ___dchop

___dchop:
        mov     w5,[w15++]              ; &pChopped
        rcall   __dchop                 ; Chop
        mov     [--w15],w5              ; &pChopped
        mov     w4,[w5]                 ; Pass back pChopped
        return                          ; Done
        .endif                          ; C-callable version needed ?
;-----------------------------------------------------------------------;




.include "null_signature.s"
