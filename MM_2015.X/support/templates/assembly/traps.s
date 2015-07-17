;******************************************************************************
;   How to use this file:                                                     *
;   ======================                                                    *
;                                                                             *
;   This file provides a basic template for writing dsPIC30F trap handlers    *
;   in ASM30 assembler language.                                              *
;                                                                             *
;   Add this file into your MPLAB project. Build your project, program        *
;   the device and run. If any trap occurs during code execution, the         *
;   processor vectors to one of these routines.                               *
;                                                                             *
;   For additional information about dsPIC 30F  architecture and language     *
;   tools, refer to the following documents:                                  *
;                                                                             *
;   MPLAB C30 Compiler User's Guide                       : DS51284           *
;   dsPIC 30F Assembler, Linker and Utilities User's Guide: DS51317           *
;   dsPIC 30F 16-bit MCU Family Reference Manual          : DS70046           *
;   dsPIC 30F Power and Motion Control Family Data Sheet  : DS70082           *
;   dsPIC 30F/33F Programmer's Reference Manual           : DS70157           *
;                                                                             *
;******************************************************************************
;                                                                             *
;    Author              :                                                    *
;    Company             :                                                    *
;    Filename            :  traps.s                                           *
;    Date                :  07/07/2006                                        *
;    File Version        :  2.00                                              *
;                                                                             *
;    Devices Supported by this file:                                          *
;                        All PIC24F,PIC24H,dsPIC30F,dsPIC33F devices          *
;                                                                             *
;******************************************************************************



.ifdef __dsPIC30F

        .include "p30fxxxx.inc"

.endif

.ifdef __dsPIC33F

        .include "p33Fxxxx.inc"

.endif

.ifdef __PIC24F

        .include "p24Fxxxx.inc"

.endif

.ifdef __PIC24H

        .include "p24Hxxxx.inc"

.endif

        .global  __OscillatorFail
        .global  __AddressError
        .global  __StackError
        .global  __MathError

        .global  __AltOscillatorFail
        .global  __AltAddressError
        .global  __AltStackError
        .global  __AltMathError


         .text

; Default Exception Vector handlers if ALTIVT(INTCON2<15>) = 0

; Oscillator Fail Trap
__OscillatorFail:
        bclr    INTCON1, #OSCFAIL
        nop
        bra     $-2
        retfie

; Address Error Trap
__AddressError:
        bclr    INTCON1, #ADDRERR
        nop
        bra     $-2
        retfie

; Stack Error Trap
__StackError:
        bclr    INTCON1, #STKERR
        nop
        bra     $-2
        retfie

; Math Error Trap
__MathError:
        bclr  INTCON1, #MATHERR
        nop
        bra     $-2
        retfie


; Alternate Exception Vector handlers if ALTIVT(INTCON2<15>) = 1

; Alternate Oscillator Fail Trap
__AltOscillatorFail:
        bclr  INTCON1, #OSCFAIL
        nop
        bra     $-2
        retfie

; Alternate Address Error Trap
__AltAddressError:
        bclr  INTCON1, #ADDRERR
        nop
        bra     $-2
        retfie

; Alternate Stack Error Trap
__AltStackError:
        bclr  INTCON1, #STKERR
        nop
        bra     $-2
        retfie

; Alternate Math Error Trap
__AltMathError:
        bclr  INTCON1, #MATHERR
        nop
        bra     $-2
        retfie



;--------End of All Code Sections ---------------------------------------------

        .end                               ;End of program code in this file



