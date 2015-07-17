;-----------------------------------------------------------------------;
;
; futil.s: Single-precision floating-point utilities
;
; This file is part of the compact math library for the dsPIC30.
; Microchip Technology. 2003.
;
;-----------------------------------------------------------------------;
;
; Contents:
;
; __fPropagateNaN: Propagate a NaN
; __fbopReturnNaN: Return a quiet NaN
; __fbopExit:      Common exit from floating-point operations
;
;-----------------------------------------------------------------------;
	
        .include "libm.inc"
	.ifndef ffunction
	.section .libm,code
	.endif

;-----------------------------------------------------------------------;
;
; __fPropagageNaN
;
;       Propagate a NaN in conformance with the IEEE standard.
;
; Input:
;
;       (w9:w8) a
;       (w10)   a(Type)
;
;       (w3:w2) b
;       (w4)    b(Type)
;
; Output:
;
;       (w1:w0) NaN
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
;       A quiet NaN has bit 23 set to 1.
;
; Notes:
;
;       This exit block is branched to, not called.
;
; Register usage:
;
;       This exit block restores the standard set of scratch
;       registers, and returns to the caller.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fPropagateNaN, code
	.endif
        .global __fPropagateNaN

;-----------------------------------------------------------------------;

__fPropagateNaN:
        mov.d   w2,w0           ; Assume the result is b
        cp      w10,#INFTYPE    ; isNaN(a) ?
        bra     leu,return0     ; No ... return(b)
        cp      w4,#INFTYPE     ; isNaN(b) ?
        bra     leu,return8     ; No ... return(a)

;------ Both operands are NaNs

        btst    w9,#6           ; isSignaling(a) ?
        bra     nz,return0      ; Yes ... return(b)
return8:
        mov.d   w8,w0           ; Result is a
return0:
        bset    w1,#6           ; Force quiet NaN for result

;------ Fall through to common exit block

;-----------------------------------------------------------------------;
;
; __fbopExit: Return to the C environment
;
; Description:
;
;       This exit block restores the common set of scratch registers,
;       and returns to the caller.
;
; Notes:
;
;       This exit stub is branched to, not called.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fbobExit, code
	.endif
        .global __fbopExit

__fbopExit:
        mov.w   [--w15],w12     ; Recover scratch
        mov.d   [--w15],w10     ; Recover scratch
        mov.d   [--w15],w8      ; Recover scratch
        return                  ; Back to the C environment
;-----------------------------------------------------------------------;


;-----------------------------------------------------------------------;
;
; __fbopReturnNaN: Return a NaN from an elementary operation.
;
; Description:
;
;       Return a NaN from an elementary operation
;
; Notes:
;
;       This exit stub is branched to, not called.
;
;-----------------------------------------------------------------------;
	.ifdef ffunction
	.section .libm.fbopReturnNaN, code
	.endif
        .global __fbopReturnNaN

__fbopReturnNaN:
        mov.w   #NaNLO,w0               ; Result is NaN
        mov.w   #NaNHI,w1               ; *
        bra     __fbopExit              ; Exit ...
;-----------------------------------------------------------------------;


.include "null_signature.s"
