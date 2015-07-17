;-----------------------------------------------------------------------;
;
; dpropagateNaN.s: Double-precision floating-point utility
;
; This file is part of the compact math library for the dsPIC30.
; Microchip Technology. 2003.
;
;-----------------------------------------------------------------------;

        .include "libm.inc"
	.ifndef ffunction
	.section .libm,code
	.endif

;-----------------------------------------------------------------------;
;
; __dPropagageNaN
;
;       Propagate a NaN in conformance with the IEEE standard.
;
; Input:
;
;       (w0)    Address of DUNPACK structure for operand a. 
;       (w1)    Address of DUNPACK structure for operand b. 
;
; Output:
;
;       (w3:w0) Quiet NaN
;
; Description:
;
;       All floating-point operations that return NaN must return
;       a quiet NaN.
;       On entry to this function, either isNaN(a) or isNaN(b),
;       or both operands are NaN.
;       In the case that only one of the operands is NaN, then a
;       quiet version of that NaN is returned.
;       If both operands are NaN, then if only one of them is quiet,
;       return that NaN. If both are quiet, return a. If both are
;       signalling, return a quiet version of b.
;
;       A quiet NaN has bit 51 set to 1.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.dPropagateNaN, code
	.endif
        .global __dPropagateNaN

;-----------------------------------------------------------------------;

__dPropagateNaN:
        add     w1,#DFLT,w5     ; (w5) = &b.flt
        btst    [w0],#NANBIT    ; isNaN(a) ?
        bra     z,returnb       ; No ... return(b)

        add     w0,#DFLT,w4     ; (w4) = &a.flt
        btst    [w1],#NANBIT    ; isNaN(b) ?
        mov.d   [w4++],w0       ; Load a
        mov.d   [w4],w2         ; *
        bra     z,returnab      ; No ... return(a)

;------ Both operands are NaN

        btsc    w3,#DBL_QNAN%16 ; isQuiet(a) ?
        return                  ; Yes ... result is a
returnb:
        mov.d   [w5++],w0       ; Load b
        mov.d   [w5],w2         ; *
returnab:
        bset    w3,#DBL_QNAN%16 ; Force quiet NaN for result

        return                  ; Back to the caller
;-----------------------------------------------------------------------;



.include "null_signature.s"
