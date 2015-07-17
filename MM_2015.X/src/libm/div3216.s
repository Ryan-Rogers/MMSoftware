;
; long __div3216 (long dividend, short divisor)
;
    .ifndef ffunction 
    .section .libm, code
    .else
    .section .libm.div3216, code
    .endif

    .global ___div3216
___div3216:
    asr  w1,#15,w4 ; default: sign of dividend

    btss w1,#15  ; is dividend negative?
    bra  1f      ; br if not

    com w1,w1    ; negate it
    neg w0,w0
    addc w1,#0,w1

1:  btss w2,#15  ; is divisor negative?
    bra  2f      ; br if not

    neg  w2,w2   ; negate it
    btg  w4,#0   ; and toggle flag

2:  mov  w0,w3   ; save LSW of dividend

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

    btss w4,#0   ; need to correct for sign?
    bra  3f      ; br if not

    com w1,w1      ; negate it
    neg w0,w0
    addc w1,#0,w1

3:  return



.include "null_signature.s"
