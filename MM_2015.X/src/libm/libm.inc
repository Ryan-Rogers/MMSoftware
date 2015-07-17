;-----------------------------------------------------------------------;
; libm.inc: Math Library Include File
;
; This file is part of the compact math library for the dsPIC30.
; (c) Microchip Technology. 2003.
;
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Macro for defining long (32-bit) constants.
;
;       LCONST  name,value
;
;       Equates the constant <name> to <value>, 
;       the constant <name>LO to the lower 16-bits of <value>, and
;       the constant <name>HI to the upper 16-bits of <value>.
;-----------------------------------------------------------------------;
        .macro  LCONST,name,value
        .equ    &name,&value
        .equ    &name&LO,(&value) & 0xFFFF
        .equ    &name&HI,((&value)>>16) & 0xFFFF
        .endm
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Debug Macro: Halt the simulator
;-----------------------------------------------------------------------;
        .macro  HALT
        .pword  0xDA4000
        .endm
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Status register
;-----------------------------------------------------------------------;
        .equ    SR_CBIT,        0       ; Carry
        .equ    SR_SZBIT,       1       ; Sticky Zero
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Standard C Library <errno> values
;-----------------------------------------------------------------------;

        .equ    _EDOM,33                ; Domain error
        .equ    _ERANGE,34              ; Range Error

;-----------------------------------------------------------------------;
;       Floating-point Number Classification
;-----------------------------------------------------------------------;
        .equ    ZEROBIT,        0
        .equ    FINITEBIT,      1
        .equ    INFBIT,         2
        .equ    NANBIT,         7
        .equ    ZEROTYPE,       (1 << ZEROBIT)
        .equ    FINITETYPE,     (1 << FINITEBIT)
        .equ    INFTYPE,        (1 << INFBIT)
        .equ    NANTYPE,        (1 << NANBIT)
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Characteristics of single-precision floating-point numbers
;-----------------------------------------------------------------------;
        .equ    FLT_BIAS,       127     ; exponent bias
        .equ    FLT_SMIN,       -149    ; min unbiased subnormal exponent
        .equ    FLT_EMIN,       -126    ; min unbiased normal exponent
        .equ    FLT_EMAX,       127     ; max unbiased normal exponent
        .equ    FLT_PREC,       24      ; precision
        .equ    FLT_QNAN,       22      ; bit number for quiet NaN
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Characteristics of double-precision floating-point numbers
;-----------------------------------------------------------------------;
        .equ    DBL_BIAS,       1023    ; exponent bias
        .equ    DBL_SMIN,       -1074   ; min unbiased subnormal exponent 
        .equ    DBL_EMIN,       -1022   ; min unbiased normal exponent
        .equ    DBL_EMAX,       1023    ; max unbiased normal exponent
        .equ    DBL_PREC,       53      ; precision
        .equ    DBL_QNAN,       51      ; bit number for quiet NaN
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Unpacked double-precision structure
;-----------------------------------------------------------------------;
        .equ    DTYP,   0               ; floating-point type
        .equ    DEXP,   2               ; biased exponent
        .equ    DFLT,   4               ; operand
	.equ	DFLT0,	DFLT+0		; *
	.equ	DFLT1,	DFLT+2		; *
	.equ	DFLT2,	DFLT+4		; *
	.equ	DFLT3,	DFLT+6		; *
        .equ    DSIG,   12              ; significand
        .equ    DSIZ,   20              ; sizeof(struct DUNPACK)
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Useful constants
;-----------------------------------------------------------------------;

        .equ    DP_HALF3,       0x3FE0  ; +0.5
        .equ    DP_HALF2,       0x0000  ; *
        .equ    DP_HALF1,       0x0000  ; *
        .equ    DP_HALF0,       0x0000  ; *

        .equ    DP_SQRTHALF3,   0x3FE6  ; Sqrt[+0.5]
        .equ    DP_SQRTHALF2,   0xA09E
        .equ    DP_SQRTHALF1,   0x667F
        .equ    DP_SQRTHALF0,   0x3BCD

        .equ    DP_ZERO3,       0x0000  ; +0.0

        .equ    DP_ONE3,        0x3FF0  ; +1.0
        .equ    DP_ONE2,        0x0000  ; *
        .equ    DP_ONE1,        0x0000  ; *
        .equ    DP_ONE0,        0x0000  ; *

        .equ    DP_NEGONE3,     0xBFF0  ; -1.0
        .equ    DP_NEGONE2,     0x0000  ; *
        .equ    DP_NEGONE1,     0x0000  ; *
        .equ    DP_NEGONE0,     0x0000  ; *

        .equ    DP_NEGTWO3,     0xC000  ; -2.0
        .equ    DP_NEGTWO2,     0x0000  ; *
        .equ    DP_NEGTWO1,     0x0000  ; *
        .equ    DP_NEGTWO0,     0x0000  ; *

        .equ    DP_PI3,         0x4009  ; +Pi
        .equ    DP_PI2,         0x21FB  ; *
        .equ    DP_PI1,         0x5444  ; *
        .equ    DP_PI0,         0x2D18  ; *

        .equ    DP_TWOPI3,      0x4019  ; 2 Pi
        .equ    DP_TWOPI2,      0x21FB  ; *
        .equ    DP_TWOPI1,      0x5444  ; *
        .equ    DP_TWOPI0,      0x2D18  ; *

        .equ    DP_TWOoverPI3,  0x3FE4  ; 2/Pi
        .equ    DP_TWOoverPI2,  0x5F30  ; *
        .equ    DP_TWOoverPI1,  0x6DC9  ; *
        .equ    DP_TWOoverPI0,  0xC883  ; *

        .equ    DP_PIOVER23,    0x3FF9  ; +Pi/2
        .equ    DP_PIOVER22,    0x21FB  ; *
        .equ    DP_PIOVER21,    0x5444  ; *
        .equ    DP_PIOVER20,    0x2D18  ; *

        .equ    DP_PIOVER33,    0x3FF0  ; +Pi/3
        .equ    DP_PIOVER32,    0xC152  ; *
        .equ    DP_PIOVER31,    0x382D  ; *
        .equ    DP_PIOVER30,    0x7366  ; *

        .equ    DP_PIOVER63,    0x3FE0  ; +Pi/6
        .equ    DP_PIOVER62,    0xC152  ; *
        .equ    DP_PIOVER61,    0x382D  ; *
        .equ    DP_PIOVER60,    0x7366  ; *

        .equ    DP_INV_PI3,     0x3FD4  ; 1/Pi
        .equ    DP_INV_PI2,     0x5F30  ; *
        .equ    DP_INV_PI1,     0x6DC9  ; *
        .equ    DP_INV_PI0,     0xC883  ; *

        .equ    DP_LOGe3,       0x3FDB  ; log10(e)
        .equ    DP_LOGe2,       0xCB7B  ; *
        .equ    DP_LOGe1,       0x1526  ; *
        .equ    DP_LOGe0,       0xE50E  ; *

        .equ    DP_LN23,        0x3FE6  ; ln(2)
        .equ    DP_LN22,        0x2E42  ; *
        .equ    DP_LN21,        0xFEFA  ; *
        .equ    DP_LN20,        0x39EF  ; *

        .equ    DP_POSINF3,     0x7FF0  ; +Infinity
        .equ    DP_POSINF2,     0x0000  ; *
        .equ    DP_NEGINF3,     0xFFF0  ; -Infinity

        LCONST  HALF,   0x3F000000      ; +0.5
        LCONST  ONE,    0x3F800000      ; +1.0
        LCONST  NEGONE, 0xBF800000      ; -1.0
        LCONST  NEGTWO, 0xC0000000      ; -2.0
        LCONST  POSINF, 0x7F800000      ; +Infinity
        LCONST  NEGINF, 0xFF800000      ; -Infinity
        LCONST  NaN,    0x7FFFFFFF      ; Quiet NaN

;------ Minimum signed 32-bit integer: -2^31

        LCONST  LONG_MIN,       (1<<31) | ((31+FLT_BIAS)<<23)

;------ Minimum signed 64-bit integer: -2^63

        LCONST  LLONG_MIN,      (1<<31) | ((63+FLT_BIAS)<<23)
        .equ    LLONG_MIN64,    (1<<15) | ((63+DBL_BIAS)<<4)

        LCONST  SQRTHALF,0x3F3504F3     ; sqrt(1/2)
        LCONST  LOGe,   0x3EDE5BD9      ; log10(e)
        LCONST  LN2,    0x3F317218      ; ln(2)
        LCONST  PI,     0x40490FDB      ; Pi
        LCONST  PIOVER2,0x3FC90FDB      ; Pi/2
        LCONST  PIOVER3,0x3F860A92      ; Pi/3
        LCONST  PIOVER6,0x3F060A92      ; Pi/6
        LCONST  TWOPI,  0x40C90FDB      ; 2 Pi
        LCONST  TWOoverPI,0x3F22F983    ; 2/Pi
        LCONST  INV_PI, 0x3EA2F983      ; 1/Pi

;-----------------------------------------------------------------------;
;       Extended-precision constants for argument reduction
;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Extended-precision constant for ln(2)
;-----------------------------------------------------------------------;
;       C  = ln(2)
;          = 0.693147
;            355
;       C1 = ---
;            512
;          = 0.693359
;       C2 = C - C1
;          = -2.12194E-04
;-----------------------------------------------------------------------;
        LCONST  LN2C1,  0x3F318000
        LCONST  LN2C2,  0xB95E8083

        .equ    DP_LN2C13,      0x3FE6
        .equ    DP_LN2C12,      0x3000

        .equ    DP_LN2C23,      0xBF2B
        .equ    DP_LN2C22,      0xD010
        .equ    DP_LN2C21,      0x5C61
        .equ    DP_LN2C20,      0x0CA8

;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Extended-precision constant for Pi
;-----------------------------------------------------------------------;
;       C  = Pi
;          = 3.14159265358979324
;            201
;       C1 = ---
;            64
;          = 3.140625
;       C2 = C - C1
;          = 9.67653589793E-4
;-----------------------------------------------------------------------;
        LCONST  PI_C1,  0x40490000 
        LCONST  PI_C2,  0x3A7DAA22 

        .equ    DP_PI_C13,      0x4009
        .equ    DP_PI_C12,      0x2000

        .equ    DP_PI_C23,      0x3F4F
        .equ    DP_PI_C22,      0xB544
        .equ    DP_PI_C21,      0x42D1
        .equ    DP_PI_C20,      0x846A

;-----------------------------------------------------------------------;

;-----------------------------------------------------------------------;
;       Extended-precision constant for Pi/2
;-----------------------------------------------------------------------;
;       C  = Pi/2
;          = 1.57079632679489662
;            201
;       C1 = ---
;            128
;          = 1.570312500
;       C2 = C - C1
;          = 4.83826794897e-4f
;-----------------------------------------------------------------------;
        LCONST  PIOVER2_C1,     0x3FC90000
        LCONST  PIOVER2_C2,     0x39FDAA22

        .equ    DP_PIOVER2_C13, 0x3FF9
        .equ    DP_PIOVER2_C12, 0x2000

        .equ    DP_PIOVER2_C23, 0x3F3F
        .equ    DP_PIOVER2_C22, 0xB544
        .equ    DP_PIOVER2_C21, 0x42D1
        .equ    DP_PIOVER2_C20, 0x846A

;-----------------------------------------------------------------------;
