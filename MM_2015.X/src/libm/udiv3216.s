;
; unsigned long __udiv3216 (unsigned long dividend, unsigned short divisor)
;
    .ifndef ffunction
    .section .libm, code
    .else
    .section .libm.udiv3216, code
    .endif

    .global ___udiv3216
___udiv3216:
    mov  w0,w3   ; save LSW of dividend

    repeat #17   ; calculate MSW using
    div.u w1,w2  ; 16/16 divide

.ifdef EXCH_ERRATA
    mov w0,w5
    mov w3,w0
.else
    exch w0,w3   ; save result
                 ; remainder becomes MSW of
                 ; next operation
.endif

    repeat #17   ; calculate LSW using
    div.ud w0,w2 ; 32/16 divide

.ifdef EXCH_ERRATA
    mov  w5,w1   ; move in MSW
.else
    mov  w3,w1   ; move in MSW
.endif
                 ; overwrites remainder!

    return


.include "null_signature.s"
