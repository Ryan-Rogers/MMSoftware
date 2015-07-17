;==========================================================================
;  PIC24FJ128GC010 Standard Assembly Include File
; 
;  (c) Copyright 2014 Microchip Technology, All rights reserved
;  Part support version v1.22.A(19-Aug-2014)
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC24FJ128GC010 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p24FJ128GC010
;       2. Placing a ".equ" directive before the ".include":
;               .equ __24FJ128GC010, 1
;               .include "p24FJ128GC010.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __24FJ128GC010
   .ERROR "Include file does not match processor setting."
.ENDIF


;==========================================================================
;
;       Register Definitions
;
;==========================================================================

;----- Register Equates (Low Byte, High Byte) -----------------------------

        .extern WREG0
        .equiv  WREG0L, _WREG0
        .equiv  WREG0H, _WREG0+1

        .extern WREG1
        .equiv  WREG1L, _WREG1
        .equiv  WREG1H, _WREG1+1

        .extern WREG2
        .equiv  WREG2L, _WREG2
        .equiv  WREG2H, _WREG2+1

        .extern WREG3
        .equiv  WREG3L, _WREG3
        .equiv  WREG3H, _WREG3+1

        .extern WREG4
        .equiv  WREG4L, _WREG4
        .equiv  WREG4H, _WREG4+1

        .extern WREG5
        .equiv  WREG5L, _WREG5
        .equiv  WREG5H, _WREG5+1

        .extern WREG6
        .equiv  WREG6L, _WREG6
        .equiv  WREG6H, _WREG6+1

        .extern WREG7
        .equiv  WREG7L, _WREG7
        .equiv  WREG7H, _WREG7+1

        .extern WREG8
        .equiv  WREG8L, _WREG8
        .equiv  WREG8H, _WREG8+1

        .extern WREG9
        .equiv  WREG9L, _WREG9
        .equiv  WREG9H, _WREG9+1

        .extern WREG10
        .equiv  WREG10L, _WREG10
        .equiv  WREG10H, _WREG10+1

        .extern WREG11
        .equiv  WREG11L, _WREG11
        .equiv  WREG11H, _WREG11+1

        .extern WREG12
        .equiv  WREG12L, _WREG12
        .equiv  WREG12H, _WREG12+1

        .extern WREG13
        .equiv  WREG13L, _WREG13
        .equiv  WREG13H, _WREG13+1

        .extern WREG14
        .equiv  WREG14L, _WREG14
        .equiv  WREG14H, _WREG14+1

        .extern WREG15
        .equiv  WREG15L, _WREG15
        .equiv  WREG15H, _WREG15+1

        .extern SPLIM
        .equiv  SPLIML, _SPLIM
        .equiv  SPLIMH, _SPLIM+1

        .extern PCL
        .equiv  PCLL, _PCL
        .equiv  PCLH, _PCL+1

        .extern PCH
        .equiv  PCHL, _PCH
        .equiv  PCHH, _PCH+1

        .extern DSRPAG
        .equiv  DSRPAGL, _DSRPAG
        .equiv  DSRPAGH, _DSRPAG+1

        .extern DSWPAG
        .equiv  DSWPAGL, _DSWPAG
        .equiv  DSWPAGH, _DSWPAG+1

        .extern RCOUNT
        .equiv  RCOUNTL, _RCOUNT
        .equiv  RCOUNTH, _RCOUNT+1

        .extern SR
        .equiv  SRL, _SR
        .equiv  SRH, _SR+1

        .extern CORCON
        .equiv  CORCONL, _CORCON
        .equiv  CORCONH, _CORCON+1

        .extern DISICNT
        .equiv  DISICNTL, _DISICNT
        .equiv  DISICNTH, _DISICNT+1

        .extern TBLPAG
        .equiv  TBLPAGL, _TBLPAG
        .equiv  TBLPAGH, _TBLPAG+1

        .extern CNPD1
        .equiv  CNPD1L, _CNPD1
        .equiv  CNPD1H, _CNPD1+1

        .extern CNPD2
        .equiv  CNPD2L, _CNPD2
        .equiv  CNPD2H, _CNPD2+1

        .extern CNPD3
        .equiv  CNPD3L, _CNPD3
        .equiv  CNPD3H, _CNPD3+1

        .extern CNPD4
        .equiv  CNPD4L, _CNPD4
        .equiv  CNPD4H, _CNPD4+1

        .extern CNPD5
        .equiv  CNPD5L, _CNPD5
        .equiv  CNPD5H, _CNPD5+1

        .extern CNPD6
        .equiv  CNPD6L, _CNPD6
        .equiv  CNPD6H, _CNPD6+1

        .extern CNEN1
        .equiv  CNEN1L, _CNEN1
        .equiv  CNEN1H, _CNEN1+1

        .extern CNEN2
        .equiv  CNEN2L, _CNEN2
        .equiv  CNEN2H, _CNEN2+1

        .extern CNEN3
        .equiv  CNEN3L, _CNEN3
        .equiv  CNEN3H, _CNEN3+1

        .extern CNEN4
        .equiv  CNEN4L, _CNEN4
        .equiv  CNEN4H, _CNEN4+1

        .extern CNEN5
        .equiv  CNEN5L, _CNEN5
        .equiv  CNEN5H, _CNEN5+1

        .extern CNEN6
        .equiv  CNEN6L, _CNEN6
        .equiv  CNEN6H, _CNEN6+1

        .extern CNPU1
        .equiv  CNPU1L, _CNPU1
        .equiv  CNPU1H, _CNPU1+1

        .extern CNPU2
        .equiv  CNPU2L, _CNPU2
        .equiv  CNPU2H, _CNPU2+1

        .extern CNPU3
        .equiv  CNPU3L, _CNPU3
        .equiv  CNPU3H, _CNPU3+1

        .extern CNPU4
        .equiv  CNPU4L, _CNPU4
        .equiv  CNPU4H, _CNPU4+1

        .extern CNPU5
        .equiv  CNPU5L, _CNPU5
        .equiv  CNPU5H, _CNPU5+1

        .extern CNPU6
        .equiv  CNPU6L, _CNPU6
        .equiv  CNPU6H, _CNPU6+1

        .extern INTCON1
        .equiv  INTCON1L, _INTCON1
        .equiv  INTCON1H, _INTCON1+1

        .extern INTCON2
        .equiv  INTCON2L, _INTCON2
        .equiv  INTCON2H, _INTCON2+1

        .extern IFS0
        .equiv  IFS0L, _IFS0
        .equiv  IFS0H, _IFS0+1

        .extern IFS1
        .equiv  IFS1L, _IFS1
        .equiv  IFS1H, _IFS1+1

        .extern IFS2
        .equiv  IFS2L, _IFS2
        .equiv  IFS2H, _IFS2+1

        .extern IFS3
        .equiv  IFS3L, _IFS3
        .equiv  IFS3H, _IFS3+1

        .extern IFS4
        .equiv  IFS4L, _IFS4
        .equiv  IFS4H, _IFS4+1

        .extern IFS5
        .equiv  IFS5L, _IFS5
        .equiv  IFS5H, _IFS5+1

        .extern IFS6
        .equiv  IFS6L, _IFS6
        .equiv  IFS6H, _IFS6+1

        .extern IFS7
        .equiv  IFS7L, _IFS7
        .equiv  IFS7H, _IFS7+1

        .extern IEC0
        .equiv  IEC0L, _IEC0
        .equiv  IEC0H, _IEC0+1

        .extern IEC1
        .equiv  IEC1L, _IEC1
        .equiv  IEC1H, _IEC1+1

        .extern IEC2
        .equiv  IEC2L, _IEC2
        .equiv  IEC2H, _IEC2+1

        .extern IEC3
        .equiv  IEC3L, _IEC3
        .equiv  IEC3H, _IEC3+1

        .extern IEC4
        .equiv  IEC4L, _IEC4
        .equiv  IEC4H, _IEC4+1

        .extern IEC5
        .equiv  IEC5L, _IEC5
        .equiv  IEC5H, _IEC5+1

        .extern IEC6
        .equiv  IEC6L, _IEC6
        .equiv  IEC6H, _IEC6+1

        .extern IEC7
        .equiv  IEC7L, _IEC7
        .equiv  IEC7H, _IEC7+1

        .extern IPC0
        .equiv  IPC0L, _IPC0
        .equiv  IPC0H, _IPC0+1

        .extern IPC1
        .equiv  IPC1L, _IPC1
        .equiv  IPC1H, _IPC1+1

        .extern IPC2
        .equiv  IPC2L, _IPC2
        .equiv  IPC2H, _IPC2+1

        .extern IPC3
        .equiv  IPC3L, _IPC3
        .equiv  IPC3H, _IPC3+1

        .extern IPC4
        .equiv  IPC4L, _IPC4
        .equiv  IPC4H, _IPC4+1

        .extern IPC5
        .equiv  IPC5L, _IPC5
        .equiv  IPC5H, _IPC5+1

        .extern IPC6
        .equiv  IPC6L, _IPC6
        .equiv  IPC6H, _IPC6+1

        .extern IPC7
        .equiv  IPC7L, _IPC7
        .equiv  IPC7H, _IPC7+1

        .extern IPC8
        .equiv  IPC8L, _IPC8
        .equiv  IPC8H, _IPC8+1

        .extern IPC9
        .equiv  IPC9L, _IPC9
        .equiv  IPC9H, _IPC9+1

        .extern IPC10
        .equiv  IPC10L, _IPC10
        .equiv  IPC10H, _IPC10+1

        .extern IPC11
        .equiv  IPC11L, _IPC11
        .equiv  IPC11H, _IPC11+1

        .extern IPC12
        .equiv  IPC12L, _IPC12
        .equiv  IPC12H, _IPC12+1

        .extern IPC13
        .equiv  IPC13L, _IPC13
        .equiv  IPC13H, _IPC13+1

        .extern IPC15
        .equiv  IPC15L, _IPC15
        .equiv  IPC15H, _IPC15+1

        .extern IPC16
        .equiv  IPC16L, _IPC16
        .equiv  IPC16H, _IPC16+1

        .extern IPC18
        .equiv  IPC18L, _IPC18
        .equiv  IPC18H, _IPC18+1

        .extern IPC19
        .equiv  IPC19L, _IPC19
        .equiv  IPC19H, _IPC19+1

        .extern IPC20
        .equiv  IPC20L, _IPC20
        .equiv  IPC20H, _IPC20+1

        .extern IPC21
        .equiv  IPC21L, _IPC21
        .equiv  IPC21H, _IPC21+1

        .extern IPC22
        .equiv  IPC22L, _IPC22
        .equiv  IPC22H, _IPC22+1

        .extern IPC23
        .equiv  IPC23L, _IPC23
        .equiv  IPC23H, _IPC23+1

        .extern IPC25
        .equiv  IPC25L, _IPC25
        .equiv  IPC25H, _IPC25+1

        .extern IPC26
        .equiv  IPC26L, _IPC26
        .equiv  IPC26H, _IPC26+1

        .extern IPC29
        .equiv  IPC29L, _IPC29
        .equiv  IPC29H, _IPC29+1

        .extern INTTREG
        .equiv  INTTREGL, _INTTREG
        .equiv  INTTREGH, _INTTREG+1

        .extern TMR1
        .equiv  TMR1L, _TMR1
        .equiv  TMR1H, _TMR1+1

        .extern PR1
        .equiv  PR1L, _PR1
        .equiv  PR1H, _PR1+1

        .extern T1CON
        .equiv  T1CONL, _T1CON
        .equiv  T1CONH, _T1CON+1

        .extern TMR2
        .equiv  TMR2L, _TMR2
        .equiv  TMR2H, _TMR2+1

        .extern TMR3HLD
        .equiv  TMR3HLDL, _TMR3HLD
        .equiv  TMR3HLDH, _TMR3HLD+1

        .extern TMR3
        .equiv  TMR3L, _TMR3
        .equiv  TMR3H, _TMR3+1

        .extern PR2
        .equiv  PR2L, _PR2
        .equiv  PR2H, _PR2+1

        .extern PR3
        .equiv  PR3L, _PR3
        .equiv  PR3H, _PR3+1

        .extern T2CON
        .equiv  T2CONL, _T2CON
        .equiv  T2CONH, _T2CON+1

        .extern T3CON
        .equiv  T3CONL, _T3CON
        .equiv  T3CONH, _T3CON+1

        .extern TMR4
        .equiv  TMR4L, _TMR4
        .equiv  TMR4H, _TMR4+1

        .extern TMR5HLD
        .equiv  TMR5HLDL, _TMR5HLD
        .equiv  TMR5HLDH, _TMR5HLD+1

        .extern TMR5
        .equiv  TMR5L, _TMR5
        .equiv  TMR5H, _TMR5+1

        .extern PR4
        .equiv  PR4L, _PR4
        .equiv  PR4H, _PR4+1

        .extern PR5
        .equiv  PR5L, _PR5
        .equiv  PR5H, _PR5+1

        .extern T4CON
        .equiv  T4CONL, _T4CON
        .equiv  T4CONH, _T4CON+1

        .extern T5CON
        .equiv  T5CONL, _T5CON
        .equiv  T5CONH, _T5CON+1

        .extern IC1CON1
        .equiv  IC1CON1L, _IC1CON1
        .equiv  IC1CON1H, _IC1CON1+1

        .extern IC1CON2
        .equiv  IC1CON2L, _IC1CON2
        .equiv  IC1CON2H, _IC1CON2+1

        .extern IC1BUF
        .equiv  IC1BUFL, _IC1BUF
        .equiv  IC1BUFH, _IC1BUF+1

        .extern IC1TMR
        .equiv  IC1TMRL, _IC1TMR
        .equiv  IC1TMRH, _IC1TMR+1

        .extern IC2CON1
        .equiv  IC2CON1L, _IC2CON1
        .equiv  IC2CON1H, _IC2CON1+1

        .extern IC2CON2
        .equiv  IC2CON2L, _IC2CON2
        .equiv  IC2CON2H, _IC2CON2+1

        .extern IC2BUF
        .equiv  IC2BUFL, _IC2BUF
        .equiv  IC2BUFH, _IC2BUF+1

        .extern IC2TMR
        .equiv  IC2TMRL, _IC2TMR
        .equiv  IC2TMRH, _IC2TMR+1

        .extern IC3CON1
        .equiv  IC3CON1L, _IC3CON1
        .equiv  IC3CON1H, _IC3CON1+1

        .extern IC3CON2
        .equiv  IC3CON2L, _IC3CON2
        .equiv  IC3CON2H, _IC3CON2+1

        .extern IC3BUF
        .equiv  IC3BUFL, _IC3BUF
        .equiv  IC3BUFH, _IC3BUF+1

        .extern IC3TMR
        .equiv  IC3TMRL, _IC3TMR
        .equiv  IC3TMRH, _IC3TMR+1

        .extern IC4CON1
        .equiv  IC4CON1L, _IC4CON1
        .equiv  IC4CON1H, _IC4CON1+1

        .extern IC4CON2
        .equiv  IC4CON2L, _IC4CON2
        .equiv  IC4CON2H, _IC4CON2+1

        .extern IC4BUF
        .equiv  IC4BUFL, _IC4BUF
        .equiv  IC4BUFH, _IC4BUF+1

        .extern IC4TMR
        .equiv  IC4TMRL, _IC4TMR
        .equiv  IC4TMRH, _IC4TMR+1

        .extern IC5CON1
        .equiv  IC5CON1L, _IC5CON1
        .equiv  IC5CON1H, _IC5CON1+1

        .extern IC5CON2
        .equiv  IC5CON2L, _IC5CON2
        .equiv  IC5CON2H, _IC5CON2+1

        .extern IC5BUF
        .equiv  IC5BUFL, _IC5BUF
        .equiv  IC5BUFH, _IC5BUF+1

        .extern IC5TMR
        .equiv  IC5TMRL, _IC5TMR
        .equiv  IC5TMRH, _IC5TMR+1

        .extern IC6CON1
        .equiv  IC6CON1L, _IC6CON1
        .equiv  IC6CON1H, _IC6CON1+1

        .extern IC6CON2
        .equiv  IC6CON2L, _IC6CON2
        .equiv  IC6CON2H, _IC6CON2+1

        .extern IC6BUF
        .equiv  IC6BUFL, _IC6BUF
        .equiv  IC6BUFH, _IC6BUF+1

        .extern IC6TMR
        .equiv  IC6TMRL, _IC6TMR
        .equiv  IC6TMRH, _IC6TMR+1

        .extern IC7CON1
        .equiv  IC7CON1L, _IC7CON1
        .equiv  IC7CON1H, _IC7CON1+1

        .extern IC7CON2
        .equiv  IC7CON2L, _IC7CON2
        .equiv  IC7CON2H, _IC7CON2+1

        .extern IC7BUF
        .equiv  IC7BUFL, _IC7BUF
        .equiv  IC7BUFH, _IC7BUF+1

        .extern IC7TMR
        .equiv  IC7TMRL, _IC7TMR
        .equiv  IC7TMRH, _IC7TMR+1

        .extern IC8CON1
        .equiv  IC8CON1L, _IC8CON1
        .equiv  IC8CON1H, _IC8CON1+1

        .extern IC8CON2
        .equiv  IC8CON2L, _IC8CON2
        .equiv  IC8CON2H, _IC8CON2+1

        .extern IC8BUF
        .equiv  IC8BUFL, _IC8BUF
        .equiv  IC8BUFH, _IC8BUF+1

        .extern IC8TMR
        .equiv  IC8TMRL, _IC8TMR
        .equiv  IC8TMRH, _IC8TMR+1

        .extern IC9CON1
        .equiv  IC9CON1L, _IC9CON1
        .equiv  IC9CON1H, _IC9CON1+1

        .extern IC9CON2
        .equiv  IC9CON2L, _IC9CON2
        .equiv  IC9CON2H, _IC9CON2+1

        .extern IC9BUF
        .equiv  IC9BUFL, _IC9BUF
        .equiv  IC9BUFH, _IC9BUF+1

        .extern IC9TMR
        .equiv  IC9TMRL, _IC9TMR
        .equiv  IC9TMRH, _IC9TMR+1

        .extern OC1CON1
        .equiv  OC1CON1L, _OC1CON1
        .equiv  OC1CON1H, _OC1CON1+1

        .extern OC1CON2
        .equiv  OC1CON2L, _OC1CON2
        .equiv  OC1CON2H, _OC1CON2+1

        .extern OC1RS
        .equiv  OC1RSL, _OC1RS
        .equiv  OC1RSH, _OC1RS+1

        .extern OC1R
        .equiv  OC1RL, _OC1R
        .equiv  OC1RH, _OC1R+1

        .extern OC1TMR
        .equiv  OC1TMRL, _OC1TMR
        .equiv  OC1TMRH, _OC1TMR+1

        .extern OC2CON1
        .equiv  OC2CON1L, _OC2CON1
        .equiv  OC2CON1H, _OC2CON1+1

        .extern OC2CON2
        .equiv  OC2CON2L, _OC2CON2
        .equiv  OC2CON2H, _OC2CON2+1

        .extern OC2RS
        .equiv  OC2RSL, _OC2RS
        .equiv  OC2RSH, _OC2RS+1

        .extern OC2R
        .equiv  OC2RL, _OC2R
        .equiv  OC2RH, _OC2R+1

        .extern OC2TMR
        .equiv  OC2TMRL, _OC2TMR
        .equiv  OC2TMRH, _OC2TMR+1

        .extern OC3CON1
        .equiv  OC3CON1L, _OC3CON1
        .equiv  OC3CON1H, _OC3CON1+1

        .extern OC3CON2
        .equiv  OC3CON2L, _OC3CON2
        .equiv  OC3CON2H, _OC3CON2+1

        .extern OC3RS
        .equiv  OC3RSL, _OC3RS
        .equiv  OC3RSH, _OC3RS+1

        .extern OC3R
        .equiv  OC3RL, _OC3R
        .equiv  OC3RH, _OC3R+1

        .extern OC3TMR
        .equiv  OC3TMRL, _OC3TMR
        .equiv  OC3TMRH, _OC3TMR+1

        .extern OC4CON1
        .equiv  OC4CON1L, _OC4CON1
        .equiv  OC4CON1H, _OC4CON1+1

        .extern OC4CON2
        .equiv  OC4CON2L, _OC4CON2
        .equiv  OC4CON2H, _OC4CON2+1

        .extern OC4RS
        .equiv  OC4RSL, _OC4RS
        .equiv  OC4RSH, _OC4RS+1

        .extern OC4R
        .equiv  OC4RL, _OC4R
        .equiv  OC4RH, _OC4R+1

        .extern OC4TMR
        .equiv  OC4TMRL, _OC4TMR
        .equiv  OC4TMRH, _OC4TMR+1

        .extern OC5CON1
        .equiv  OC5CON1L, _OC5CON1
        .equiv  OC5CON1H, _OC5CON1+1

        .extern OC5CON2
        .equiv  OC5CON2L, _OC5CON2
        .equiv  OC5CON2H, _OC5CON2+1

        .extern OC5RS
        .equiv  OC5RSL, _OC5RS
        .equiv  OC5RSH, _OC5RS+1

        .extern OC5R
        .equiv  OC5RL, _OC5R
        .equiv  OC5RH, _OC5R+1

        .extern OC5TMR
        .equiv  OC5TMRL, _OC5TMR
        .equiv  OC5TMRH, _OC5TMR+1

        .extern OC6CON1
        .equiv  OC6CON1L, _OC6CON1
        .equiv  OC6CON1H, _OC6CON1+1

        .extern OC6CON2
        .equiv  OC6CON2L, _OC6CON2
        .equiv  OC6CON2H, _OC6CON2+1

        .extern OC6RS
        .equiv  OC6RSL, _OC6RS
        .equiv  OC6RSH, _OC6RS+1

        .extern OC6R
        .equiv  OC6RL, _OC6R
        .equiv  OC6RH, _OC6R+1

        .extern OC6TMR
        .equiv  OC6TMRL, _OC6TMR
        .equiv  OC6TMRH, _OC6TMR+1

        .extern OC7CON1
        .equiv  OC7CON1L, _OC7CON1
        .equiv  OC7CON1H, _OC7CON1+1

        .extern OC7CON2
        .equiv  OC7CON2L, _OC7CON2
        .equiv  OC7CON2H, _OC7CON2+1

        .extern OC7RS
        .equiv  OC7RSL, _OC7RS
        .equiv  OC7RSH, _OC7RS+1

        .extern OC7R
        .equiv  OC7RL, _OC7R
        .equiv  OC7RH, _OC7R+1

        .extern OC7TMR
        .equiv  OC7TMRL, _OC7TMR
        .equiv  OC7TMRH, _OC7TMR+1

        .extern OC8CON1
        .equiv  OC8CON1L, _OC8CON1
        .equiv  OC8CON1H, _OC8CON1+1

        .extern OC8CON2
        .equiv  OC8CON2L, _OC8CON2
        .equiv  OC8CON2H, _OC8CON2+1

        .extern OC8RS
        .equiv  OC8RSL, _OC8RS
        .equiv  OC8RSH, _OC8RS+1

        .extern OC8R
        .equiv  OC8RL, _OC8R
        .equiv  OC8RH, _OC8R+1

        .extern OC8TMR
        .equiv  OC8TMRL, _OC8TMR
        .equiv  OC8TMRH, _OC8TMR+1

        .extern OC9CON1
        .equiv  OC9CON1L, _OC9CON1
        .equiv  OC9CON1H, _OC9CON1+1

        .extern OC9CON2
        .equiv  OC9CON2L, _OC9CON2
        .equiv  OC9CON2H, _OC9CON2+1

        .extern OC9RS
        .equiv  OC9RSL, _OC9RS
        .equiv  OC9RSH, _OC9RS+1

        .extern OC9R
        .equiv  OC9RL, _OC9R
        .equiv  OC9RH, _OC9R+1

        .extern OC9TMR
        .equiv  OC9TMRL, _OC9TMR
        .equiv  OC9TMRH, _OC9TMR+1

        .extern I2C1RCV
        .equiv  I2C1RCVL, _I2C1RCV
        .equiv  I2C1RCVH, _I2C1RCV+1

        .extern I2C1TRN
        .equiv  I2C1TRNL, _I2C1TRN
        .equiv  I2C1TRNH, _I2C1TRN+1

        .extern I2C1BRG
        .equiv  I2C1BRGL, _I2C1BRG
        .equiv  I2C1BRGH, _I2C1BRG+1

        .extern I2C1CON
        .equiv  I2C1CONL, _I2C1CON
        .equiv  I2C1CONH, _I2C1CON+1

        .extern I2C1STAT
        .equiv  I2C1STATL, _I2C1STAT
        .equiv  I2C1STATH, _I2C1STAT+1

        .extern I2C1ADD
        .equiv  I2C1ADDL, _I2C1ADD
        .equiv  I2C1ADDH, _I2C1ADD+1

        .extern I2C1MSK
        .equiv  I2C1MSKL, _I2C1MSK
        .equiv  I2C1MSKH, _I2C1MSK+1

        .extern I2C2RCV
        .equiv  I2C2RCVL, _I2C2RCV
        .equiv  I2C2RCVH, _I2C2RCV+1

        .extern I2C2TRN
        .equiv  I2C2TRNL, _I2C2TRN
        .equiv  I2C2TRNH, _I2C2TRN+1

        .extern I2C2BRG
        .equiv  I2C2BRGL, _I2C2BRG
        .equiv  I2C2BRGH, _I2C2BRG+1

        .extern I2C2CON
        .equiv  I2C2CONL, _I2C2CON
        .equiv  I2C2CONH, _I2C2CON+1

        .extern I2C2STAT
        .equiv  I2C2STATL, _I2C2STAT
        .equiv  I2C2STATH, _I2C2STAT+1

        .extern I2C2ADD
        .equiv  I2C2ADDL, _I2C2ADD
        .equiv  I2C2ADDH, _I2C2ADD+1

        .extern I2C2MSK
        .equiv  I2C2MSKL, _I2C2MSK
        .equiv  I2C2MSKH, _I2C2MSK+1

        .extern U1MODE
        .equiv  U1MODEL, _U1MODE
        .equiv  U1MODEH, _U1MODE+1

        .extern U1STA
        .equiv  U1STAL, _U1STA
        .equiv  U1STAH, _U1STA+1

        .extern U1TXREG
        .equiv  U1TXREGL, _U1TXREG
        .equiv  U1TXREGH, _U1TXREG+1

        .extern U1RXREG
        .equiv  U1RXREGL, _U1RXREG
        .equiv  U1RXREGH, _U1RXREG+1

        .extern U1BRG
        .equiv  U1BRGL, _U1BRG
        .equiv  U1BRGH, _U1BRG+1

        .extern U2MODE
        .equiv  U2MODEL, _U2MODE
        .equiv  U2MODEH, _U2MODE+1

        .extern U2STA
        .equiv  U2STAL, _U2STA
        .equiv  U2STAH, _U2STA+1

        .extern U2TXREG
        .equiv  U2TXREGL, _U2TXREG
        .equiv  U2TXREGH, _U2TXREG+1

        .extern U2RXREG
        .equiv  U2RXREGL, _U2RXREG
        .equiv  U2RXREGH, _U2RXREG+1

        .extern U2BRG
        .equiv  U2BRGL, _U2BRG
        .equiv  U2BRGH, _U2BRG+1

        .extern SPI1STAT
        .equiv  SPI1STATL, _SPI1STAT
        .equiv  SPI1STATH, _SPI1STAT+1

        .extern SPI1CON1
        .equiv  SPI1CON1L, _SPI1CON1
        .equiv  SPI1CON1H, _SPI1CON1+1

        .extern SPI1CON2
        .equiv  SPI1CON2L, _SPI1CON2
        .equiv  SPI1CON2H, _SPI1CON2+1

        .extern SPI1BUF
        .equiv  SPI1BUFL, _SPI1BUF
        .equiv  SPI1BUFH, _SPI1BUF+1

        .extern AMP1CON
        .equiv  AMP1CONL, _AMP1CON
        .equiv  AMP1CONH, _AMP1CON+1

        .extern AMP2CON
        .equiv  AMP2CONL, _AMP2CON
        .equiv  AMP2CONH, _AMP2CON+1

        .extern U3MODE
        .equiv  U3MODEL, _U3MODE
        .equiv  U3MODEH, _U3MODE+1

        .extern U3STA
        .equiv  U3STAL, _U3STA
        .equiv  U3STAH, _U3STA+1

        .extern U3TXREG
        .equiv  U3TXREGL, _U3TXREG
        .equiv  U3TXREGH, _U3TXREG+1

        .extern U3RXREG
        .equiv  U3RXREGL, _U3RXREG
        .equiv  U3RXREGH, _U3RXREG+1

        .extern U3BRG
        .equiv  U3BRGL, _U3BRG
        .equiv  U3BRGH, _U3BRG+1

        .extern SPI2STAT
        .equiv  SPI2STATL, _SPI2STAT
        .equiv  SPI2STATH, _SPI2STAT+1

        .extern SPI2CON1
        .equiv  SPI2CON1L, _SPI2CON1
        .equiv  SPI2CON1H, _SPI2CON1+1

        .extern SPI2CON2
        .equiv  SPI2CON2L, _SPI2CON2
        .equiv  SPI2CON2H, _SPI2CON2+1

        .extern SPI2BUF
        .equiv  SPI2BUFL, _SPI2BUF
        .equiv  SPI2BUFH, _SPI2BUF+1

        .extern U4MODE
        .equiv  U4MODEL, _U4MODE
        .equiv  U4MODEH, _U4MODE+1

        .extern U4STA
        .equiv  U4STAL, _U4STA
        .equiv  U4STAH, _U4STA+1

        .extern U4TXREG
        .equiv  U4TXREGL, _U4TXREG
        .equiv  U4TXREGH, _U4TXREG+1

        .extern U4RXREG
        .equiv  U4RXREGL, _U4RXREG
        .equiv  U4RXREGH, _U4RXREG+1

        .extern U4BRG
        .equiv  U4BRGL, _U4BRG
        .equiv  U4BRGH, _U4BRG+1

        .extern TRISA
        .equiv  TRISAL, _TRISA
        .equiv  TRISAH, _TRISA+1

        .extern PORTA
        .equiv  PORTAL, _PORTA
        .equiv  PORTAH, _PORTA+1

        .extern LATA
        .equiv  LATAL, _LATA
        .equiv  LATAH, _LATA+1

        .extern ODCA
        .equiv  ODCAL, _ODCA
        .equiv  ODCAH, _ODCA+1

        .extern TRISB
        .equiv  TRISBL, _TRISB
        .equiv  TRISBH, _TRISB+1

        .extern PORTB
        .equiv  PORTBL, _PORTB
        .equiv  PORTBH, _PORTB+1

        .extern LATB
        .equiv  LATBL, _LATB
        .equiv  LATBH, _LATB+1

        .extern ODCB
        .equiv  ODCBL, _ODCB
        .equiv  ODCBH, _ODCB+1

        .extern TRISC
        .equiv  TRISCL, _TRISC
        .equiv  TRISCH, _TRISC+1

        .extern PORTC
        .equiv  PORTCL, _PORTC
        .equiv  PORTCH, _PORTC+1

        .extern LATC
        .equiv  LATCL, _LATC
        .equiv  LATCH, _LATC+1

        .extern ODCC
        .equiv  ODCCL, _ODCC
        .equiv  ODCCH, _ODCC+1

        .extern TRISD
        .equiv  TRISDL, _TRISD
        .equiv  TRISDH, _TRISD+1

        .extern PORTD
        .equiv  PORTDL, _PORTD
        .equiv  PORTDH, _PORTD+1

        .extern LATD
        .equiv  LATDL, _LATD
        .equiv  LATDH, _LATD+1

        .extern ODCD
        .equiv  ODCDL, _ODCD
        .equiv  ODCDH, _ODCD+1

        .extern TRISE
        .equiv  TRISEL, _TRISE
        .equiv  TRISEH, _TRISE+1

        .extern PORTE
        .equiv  PORTEL, _PORTE
        .equiv  PORTEH, _PORTE+1

        .extern LATE
        .equiv  LATEL, _LATE
        .equiv  LATEH, _LATE+1

        .extern ODCE
        .equiv  ODCEL, _ODCE
        .equiv  ODCEH, _ODCE+1

        .extern TRISF
        .equiv  TRISFL, _TRISF
        .equiv  TRISFH, _TRISF+1

        .extern PORTF
        .equiv  PORTFL, _PORTF
        .equiv  PORTFH, _PORTF+1

        .extern LATF
        .equiv  LATFL, _LATF
        .equiv  LATFH, _LATF+1

        .extern ODCF
        .equiv  ODCFL, _ODCF
        .equiv  ODCFH, _ODCF+1

        .extern TRISG
        .equiv  TRISGL, _TRISG
        .equiv  TRISGH, _TRISG+1

        .extern PORTG
        .equiv  PORTGL, _PORTG
        .equiv  PORTGH, _PORTG+1

        .extern LATG
        .equiv  LATGL, _LATG
        .equiv  LATGH, _LATG+1

        .extern ODCG
        .equiv  ODCGL, _ODCG
        .equiv  ODCGH, _ODCG+1

        .extern PADCFG1
        .equiv  PADCFG1L, _PADCFG1
        .equiv  PADCFG1H, _PADCFG1+1

        .extern ADTBL0
        .equiv  ADTBL0L, _ADTBL0
        .equiv  ADTBL0H, _ADTBL0+1

        .extern ADTBL1
        .equiv  ADTBL1L, _ADTBL1
        .equiv  ADTBL1H, _ADTBL1+1

        .extern ADTBL2
        .equiv  ADTBL2L, _ADTBL2
        .equiv  ADTBL2H, _ADTBL2+1

        .extern ADTBL3
        .equiv  ADTBL3L, _ADTBL3
        .equiv  ADTBL3H, _ADTBL3+1

        .extern ADTBL4
        .equiv  ADTBL4L, _ADTBL4
        .equiv  ADTBL4H, _ADTBL4+1

        .extern ADTBL5
        .equiv  ADTBL5L, _ADTBL5
        .equiv  ADTBL5H, _ADTBL5+1

        .extern ADTBL6
        .equiv  ADTBL6L, _ADTBL6
        .equiv  ADTBL6H, _ADTBL6+1

        .extern ADTBL7
        .equiv  ADTBL7L, _ADTBL7
        .equiv  ADTBL7H, _ADTBL7+1

        .extern ADTBL8
        .equiv  ADTBL8L, _ADTBL8
        .equiv  ADTBL8H, _ADTBL8+1

        .extern ADTBL9
        .equiv  ADTBL9L, _ADTBL9
        .equiv  ADTBL9H, _ADTBL9+1

        .extern ADTBL10
        .equiv  ADTBL10L, _ADTBL10
        .equiv  ADTBL10H, _ADTBL10+1

        .extern ADTBL11
        .equiv  ADTBL11L, _ADTBL11
        .equiv  ADTBL11H, _ADTBL11+1

        .extern ADTBL12
        .equiv  ADTBL12L, _ADTBL12
        .equiv  ADTBL12H, _ADTBL12+1

        .extern ADTBL13
        .equiv  ADTBL13L, _ADTBL13
        .equiv  ADTBL13H, _ADTBL13+1

        .extern ADTBL14
        .equiv  ADTBL14L, _ADTBL14
        .equiv  ADTBL14H, _ADTBL14+1

        .extern ADTBL15
        .equiv  ADTBL15L, _ADTBL15
        .equiv  ADTBL15H, _ADTBL15+1

        .extern ADTBL16
        .equiv  ADTBL16L, _ADTBL16
        .equiv  ADTBL16H, _ADTBL16+1

        .extern ADTBL17
        .equiv  ADTBL17L, _ADTBL17
        .equiv  ADTBL17H, _ADTBL17+1

        .extern ADTBL18
        .equiv  ADTBL18L, _ADTBL18
        .equiv  ADTBL18H, _ADTBL18+1

        .extern ADTBL19
        .equiv  ADTBL19L, _ADTBL19
        .equiv  ADTBL19H, _ADTBL19+1

        .extern ADTBL20
        .equiv  ADTBL20L, _ADTBL20
        .equiv  ADTBL20H, _ADTBL20+1

        .extern ADTBL21
        .equiv  ADTBL21L, _ADTBL21
        .equiv  ADTBL21H, _ADTBL21+1

        .extern ADTBL22
        .equiv  ADTBL22L, _ADTBL22
        .equiv  ADTBL22H, _ADTBL22+1

        .extern ADTBL23
        .equiv  ADTBL23L, _ADTBL23
        .equiv  ADTBL23H, _ADTBL23+1

        .extern ADTBL24
        .equiv  ADTBL24L, _ADTBL24
        .equiv  ADTBL24H, _ADTBL24+1

        .extern ADTBL25
        .equiv  ADTBL25L, _ADTBL25
        .equiv  ADTBL25H, _ADTBL25+1

        .extern ADTBL26
        .equiv  ADTBL26L, _ADTBL26
        .equiv  ADTBL26H, _ADTBL26+1

        .extern ADTBL27
        .equiv  ADTBL27L, _ADTBL27
        .equiv  ADTBL27H, _ADTBL27+1

        .extern ADTBL28
        .equiv  ADTBL28L, _ADTBL28
        .equiv  ADTBL28H, _ADTBL28+1

        .extern ADTBL29
        .equiv  ADTBL29L, _ADTBL29
        .equiv  ADTBL29H, _ADTBL29+1

        .extern ADTBL30
        .equiv  ADTBL30L, _ADTBL30
        .equiv  ADTBL30H, _ADTBL30+1

        .extern ADTBL31
        .equiv  ADTBL31L, _ADTBL31
        .equiv  ADTBL31H, _ADTBL31+1

        .extern ADRES0
        .equiv  ADRES0L, _ADRES0
        .equiv  ADRES0H, _ADRES0+1

        .extern ADRES1
        .equiv  ADRES1L, _ADRES1
        .equiv  ADRES1H, _ADRES1+1

        .extern ADRES2
        .equiv  ADRES2L, _ADRES2
        .equiv  ADRES2H, _ADRES2+1

        .extern ADRES3
        .equiv  ADRES3L, _ADRES3
        .equiv  ADRES3H, _ADRES3+1

        .extern ADRES4
        .equiv  ADRES4L, _ADRES4
        .equiv  ADRES4H, _ADRES4+1

        .extern ADRES5
        .equiv  ADRES5L, _ADRES5
        .equiv  ADRES5H, _ADRES5+1

        .extern ADRES6
        .equiv  ADRES6L, _ADRES6
        .equiv  ADRES6H, _ADRES6+1

        .extern ADRES7
        .equiv  ADRES7L, _ADRES7
        .equiv  ADRES7H, _ADRES7+1

        .extern ADRES8
        .equiv  ADRES8L, _ADRES8
        .equiv  ADRES8H, _ADRES8+1

        .extern ADRES9
        .equiv  ADRES9L, _ADRES9
        .equiv  ADRES9H, _ADRES9+1

        .extern ADRES10
        .equiv  ADRES10L, _ADRES10
        .equiv  ADRES10H, _ADRES10+1

        .extern ADRES11
        .equiv  ADRES11L, _ADRES11
        .equiv  ADRES11H, _ADRES11+1

        .extern ADRES12
        .equiv  ADRES12L, _ADRES12
        .equiv  ADRES12H, _ADRES12+1

        .extern ADRES13
        .equiv  ADRES13L, _ADRES13
        .equiv  ADRES13H, _ADRES13+1

        .extern ADRES14
        .equiv  ADRES14L, _ADRES14
        .equiv  ADRES14H, _ADRES14+1

        .extern ADRES15
        .equiv  ADRES15L, _ADRES15
        .equiv  ADRES15H, _ADRES15+1

        .extern ADRES16
        .equiv  ADRES16L, _ADRES16
        .equiv  ADRES16H, _ADRES16+1

        .extern ADRES17
        .equiv  ADRES17L, _ADRES17
        .equiv  ADRES17H, _ADRES17+1

        .extern ADRES18
        .equiv  ADRES18L, _ADRES18
        .equiv  ADRES18H, _ADRES18+1

        .extern ADRES19
        .equiv  ADRES19L, _ADRES19
        .equiv  ADRES19H, _ADRES19+1

        .extern ADRES20
        .equiv  ADRES20L, _ADRES20
        .equiv  ADRES20H, _ADRES20+1

        .extern ADRES21
        .equiv  ADRES21L, _ADRES21
        .equiv  ADRES21H, _ADRES21+1

        .extern ADRES22
        .equiv  ADRES22L, _ADRES22
        .equiv  ADRES22H, _ADRES22+1

        .extern ADRES23
        .equiv  ADRES23L, _ADRES23
        .equiv  ADRES23H, _ADRES23+1

        .extern ADRES24
        .equiv  ADRES24L, _ADRES24
        .equiv  ADRES24H, _ADRES24+1

        .extern ADRES25
        .equiv  ADRES25L, _ADRES25
        .equiv  ADRES25H, _ADRES25+1

        .extern ADRES26
        .equiv  ADRES26L, _ADRES26
        .equiv  ADRES26H, _ADRES26+1

        .extern ADRES27
        .equiv  ADRES27L, _ADRES27
        .equiv  ADRES27H, _ADRES27+1

        .extern ADRES28
        .equiv  ADRES28L, _ADRES28
        .equiv  ADRES28H, _ADRES28+1

        .extern ADRES29
        .equiv  ADRES29L, _ADRES29
        .equiv  ADRES29H, _ADRES29+1

        .extern ADRES30
        .equiv  ADRES30L, _ADRES30
        .equiv  ADRES30H, _ADRES30+1

        .extern ADRES31
        .equiv  ADRES31L, _ADRES31
        .equiv  ADRES31H, _ADRES31+1

        .extern DMACON
        .equiv  DMACONL, _DMACON
        .equiv  DMACONH, _DMACON+1

        .extern DMABUF
        .equiv  DMABUFL, _DMABUF
        .equiv  DMABUFH, _DMABUF+1

        .extern DMAL
        .equiv  DMALL, _DMAL
        .equiv  DMALH, _DMAL+1

        .extern DMAH
        .equiv  DMAHL, _DMAH
        .equiv  DMAHH, _DMAH+1

        .extern DMACH0
        .equiv  DMACH0L, _DMACH0
        .equiv  DMACH0H, _DMACH0+1

        .extern DMAINT0
        .equiv  DMAINT0L, _DMAINT0
        .equiv  DMAINT0H, _DMAINT0+1

        .extern DMASRC0
        .equiv  DMASRC0L, _DMASRC0
        .equiv  DMASRC0H, _DMASRC0+1

        .extern DMADST0
        .equiv  DMADST0L, _DMADST0
        .equiv  DMADST0H, _DMADST0+1

        .extern DMACNT0
        .equiv  DMACNT0L, _DMACNT0
        .equiv  DMACNT0H, _DMACNT0+1

        .extern DMACH1
        .equiv  DMACH1L, _DMACH1
        .equiv  DMACH1H, _DMACH1+1

        .extern DMAINT1
        .equiv  DMAINT1L, _DMAINT1
        .equiv  DMAINT1H, _DMAINT1+1

        .extern DMASRC1
        .equiv  DMASRC1L, _DMASRC1
        .equiv  DMASRC1H, _DMASRC1+1

        .extern DMADST1
        .equiv  DMADST1L, _DMADST1
        .equiv  DMADST1H, _DMADST1+1

        .extern DMACNT1
        .equiv  DMACNT1L, _DMACNT1
        .equiv  DMACNT1H, _DMACNT1+1

        .extern DMACH2
        .equiv  DMACH2L, _DMACH2
        .equiv  DMACH2H, _DMACH2+1

        .extern DMAINT2
        .equiv  DMAINT2L, _DMAINT2
        .equiv  DMAINT2H, _DMAINT2+1

        .extern DMASRC2
        .equiv  DMASRC2L, _DMASRC2
        .equiv  DMASRC2H, _DMASRC2+1

        .extern DMADST2
        .equiv  DMADST2L, _DMADST2
        .equiv  DMADST2H, _DMADST2+1

        .extern DMACNT2
        .equiv  DMACNT2L, _DMACNT2
        .equiv  DMACNT2H, _DMACNT2+1

        .extern DMACH3
        .equiv  DMACH3L, _DMACH3
        .equiv  DMACH3H, _DMACH3+1

        .extern DMAINT3
        .equiv  DMAINT3L, _DMAINT3
        .equiv  DMAINT3H, _DMAINT3+1

        .extern DMASRC3
        .equiv  DMASRC3L, _DMASRC3
        .equiv  DMASRC3H, _DMASRC3+1

        .extern DMADST3
        .equiv  DMADST3L, _DMADST3
        .equiv  DMADST3H, _DMADST3+1

        .extern DMACNT3
        .equiv  DMACNT3L, _DMACNT3
        .equiv  DMACNT3H, _DMACNT3+1

        .extern DMACH4
        .equiv  DMACH4L, _DMACH4
        .equiv  DMACH4H, _DMACH4+1

        .extern DMAINT4
        .equiv  DMAINT4L, _DMAINT4
        .equiv  DMAINT4H, _DMAINT4+1

        .extern DMASRC4
        .equiv  DMASRC4L, _DMASRC4
        .equiv  DMASRC4H, _DMASRC4+1

        .extern DMADST4
        .equiv  DMADST4L, _DMADST4
        .equiv  DMADST4H, _DMADST4+1

        .extern DMACNT4
        .equiv  DMACNT4L, _DMACNT4
        .equiv  DMACNT4H, _DMACNT4+1

        .extern DMACH5
        .equiv  DMACH5L, _DMACH5
        .equiv  DMACH5H, _DMACH5+1

        .extern DMAINT5
        .equiv  DMAINT5L, _DMAINT5
        .equiv  DMAINT5H, _DMAINT5+1

        .extern DMASRC5
        .equiv  DMASRC5L, _DMASRC5
        .equiv  DMASRC5H, _DMASRC5+1

        .extern DMADST5
        .equiv  DMADST5L, _DMADST5
        .equiv  DMADST5H, _DMADST5+1

        .extern DMACNT5
        .equiv  DMACNT5L, _DMACNT5
        .equiv  DMACNT5H, _DMACNT5+1

        .extern ADL3CON

        .extern ADL3CONL
        .equiv  ADL3CONLL, _ADL3CONL
        .equiv  ADL3CONLH, _ADL3CONL+1

        .extern ADL3CONH
        .equiv  ADL3CONHL, _ADL3CONH
        .equiv  ADL3CONHH, _ADL3CONH+1

        .extern ADL3PTR
        .equiv  ADL3PTRL, _ADL3PTR
        .equiv  ADL3PTRH, _ADL3PTR+1

        .extern ADL3STAT
        .equiv  ADL3STATL, _ADL3STAT
        .equiv  ADL3STATH, _ADL3STAT+1

        .extern ADTH3L
        .equiv  ADTH3LL, _ADTH3L
        .equiv  ADTH3LH, _ADTH3L+1

        .extern ADTH3H
        .equiv  ADTH3HL, _ADTH3H
        .equiv  ADTH3HH, _ADTH3H+1

        .extern ADL3MSEL
        .equiv  ADL3MSELL, _ADL3MSEL
        .equiv  ADL3MSELH, _ADL3MSEL+1

        .extern ADL3MSEL0
        .equiv  ADL3MSEL0L, _ADL3MSEL0
        .equiv  ADL3MSEL0H, _ADL3MSEL0+1

        .extern ADL3MSEL1
        .equiv  ADL3MSEL1L, _ADL3MSEL1
        .equiv  ADL3MSEL1H, _ADL3MSEL1+1

        .extern ADL3MSEL2
        .equiv  ADL3MSEL2L, _ADL3MSEL2
        .equiv  ADL3MSEL2H, _ADL3MSEL2+1

        .extern ADL3MSEL3
        .equiv  ADL3MSEL3L, _ADL3MSEL3
        .equiv  ADL3MSEL3H, _ADL3MSEL3+1

        .extern DAC1CON
        .equiv  DAC1CONL, _DAC1CON
        .equiv  DAC1CONH, _DAC1CON+1

        .extern DAC1DAT
        .equiv  DAC1DATL, _DAC1DAT
        .equiv  DAC1DATH, _DAC1DAT+1

        .extern DAC2CON
        .equiv  DAC2CONL, _DAC2CON
        .equiv  DAC2CONH, _DAC2CON+1

        .extern DAC2DAT
        .equiv  DAC2DATL, _DAC2DAT
        .equiv  DAC2DATH, _DAC2DAT+1

        .extern U1OTGIR
        .equiv  U1OTGIRL, _U1OTGIR
        .equiv  U1OTGIRH, _U1OTGIR+1

        .extern U1OTGIE
        .equiv  U1OTGIEL, _U1OTGIE
        .equiv  U1OTGIEH, _U1OTGIE+1

        .extern U1OTGSTAT
        .equiv  U1OTGSTATL, _U1OTGSTAT
        .equiv  U1OTGSTATH, _U1OTGSTAT+1

        .extern U1OTGCON
        .equiv  U1OTGCONL, _U1OTGCON
        .equiv  U1OTGCONH, _U1OTGCON+1

        .extern U1PWRC
        .equiv  U1PWRCL, _U1PWRC
        .equiv  U1PWRCH, _U1PWRC+1

        .extern U1IR
        .equiv  U1IRL, _U1IR
        .equiv  U1IRH, _U1IR+1

        .extern U1IE
        .equiv  U1IEL, _U1IE
        .equiv  U1IEH, _U1IE+1

        .extern U1EIR
        .equiv  U1EIRL, _U1EIR
        .equiv  U1EIRH, _U1EIR+1

        .extern U1EIE
        .equiv  U1EIEL, _U1EIE
        .equiv  U1EIEH, _U1EIE+1

        .extern U1STAT
        .equiv  U1STATL, _U1STAT
        .equiv  U1STATH, _U1STAT+1

        .extern U1CON
        .equiv  U1CONL, _U1CON
        .equiv  U1CONH, _U1CON+1

        .extern U1ADDR
        .equiv  U1ADDRL, _U1ADDR
        .equiv  U1ADDRH, _U1ADDR+1

        .extern U1BDTP1
        .equiv  U1BDTP1L, _U1BDTP1
        .equiv  U1BDTP1H, _U1BDTP1+1

        .extern U1FRML
        .equiv  U1FRMLL, _U1FRML
        .equiv  U1FRMLH, _U1FRML+1

        .extern U1FRMH
        .equiv  U1FRMHL, _U1FRMH
        .equiv  U1FRMHH, _U1FRMH+1

        .extern U1TOK
        .equiv  U1TOKL, _U1TOK
        .equiv  U1TOKH, _U1TOK+1

        .extern U1SOF
        .equiv  U1SOFL, _U1SOF
        .equiv  U1SOFH, _U1SOF+1

        .extern U1BDTP2
        .equiv  U1BDTP2L, _U1BDTP2
        .equiv  U1BDTP2H, _U1BDTP2+1

        .extern U1BDTP3
        .equiv  U1BDTP3L, _U1BDTP3
        .equiv  U1BDTP3H, _U1BDTP3+1

        .extern U1CNFG1
        .equiv  U1CNFG1L, _U1CNFG1
        .equiv  U1CNFG1H, _U1CNFG1+1

        .extern U1CNFG2
        .equiv  U1CNFG2L, _U1CNFG2
        .equiv  U1CNFG2H, _U1CNFG2+1

        .extern U1EP0
        .equiv  U1EP0L, _U1EP0
        .equiv  U1EP0H, _U1EP0+1

        .extern U1EP1
        .equiv  U1EP1L, _U1EP1
        .equiv  U1EP1H, _U1EP1+1

        .extern U1EP2
        .equiv  U1EP2L, _U1EP2
        .equiv  U1EP2H, _U1EP2+1

        .extern U1EP3
        .equiv  U1EP3L, _U1EP3
        .equiv  U1EP3H, _U1EP3+1

        .extern U1EP4
        .equiv  U1EP4L, _U1EP4
        .equiv  U1EP4H, _U1EP4+1

        .extern U1EP5
        .equiv  U1EP5L, _U1EP5
        .equiv  U1EP5H, _U1EP5+1

        .extern U1EP6
        .equiv  U1EP6L, _U1EP6
        .equiv  U1EP6H, _U1EP6+1

        .extern U1EP7
        .equiv  U1EP7L, _U1EP7
        .equiv  U1EP7H, _U1EP7+1

        .extern U1EP8
        .equiv  U1EP8L, _U1EP8
        .equiv  U1EP8H, _U1EP8+1

        .extern U1EP9
        .equiv  U1EP9L, _U1EP9
        .equiv  U1EP9H, _U1EP9+1

        .extern U1EP10
        .equiv  U1EP10L, _U1EP10
        .equiv  U1EP10H, _U1EP10+1

        .extern U1EP11
        .equiv  U1EP11L, _U1EP11
        .equiv  U1EP11H, _U1EP11+1

        .extern U1EP12
        .equiv  U1EP12L, _U1EP12
        .equiv  U1EP12H, _U1EP12+1

        .extern U1EP13
        .equiv  U1EP13L, _U1EP13
        .equiv  U1EP13H, _U1EP13+1

        .extern U1EP14
        .equiv  U1EP14L, _U1EP14
        .equiv  U1EP14H, _U1EP14+1

        .extern U1EP15
        .equiv  U1EP15L, _U1EP15
        .equiv  U1EP15H, _U1EP15+1

        .extern SD1CON1
        .equiv  SD1CON1L, _SD1CON1
        .equiv  SD1CON1H, _SD1CON1+1

        .extern SD1CON2
        .equiv  SD1CON2L, _SD1CON2
        .equiv  SD1CON2H, _SD1CON2+1

        .extern SD1CON3
        .equiv  SD1CON3L, _SD1CON3
        .equiv  SD1CON3H, _SD1CON3+1

        .extern SD1RESH
        .equiv  SD1RESHL, _SD1RESH
        .equiv  SD1RESHH, _SD1RESH+1

        .extern SD1RESL
        .equiv  SD1RESLL, _SD1RESL
        .equiv  SD1RESLH, _SD1RESL+1

        .extern ANCFG
        .equiv  ANCFGL, _ANCFG
        .equiv  ANCFGH, _ANCFG+1

        .extern ANSA
        .equiv  ANSAL, _ANSA
        .equiv  ANSAH, _ANSA+1

        .extern ANSB
        .equiv  ANSBL, _ANSB
        .equiv  ANSBH, _ANSB+1

        .extern ANSC
        .equiv  ANSCL, _ANSC
        .equiv  ANSCH, _ANSC+1

        .extern ANSD
        .equiv  ANSDL, _ANSD
        .equiv  ANSDH, _ANSD+1

        .extern ANSE
        .equiv  ANSEL, _ANSE
        .equiv  ANSEH, _ANSE+1

        .extern ANSF
        .equiv  ANSFL, _ANSF
        .equiv  ANSFH, _ANSF+1

        .extern ANSG
        .equiv  ANSGL, _ANSG
        .equiv  ANSGH, _ANSG+1

        .extern ADCON1
        .equiv  ADCON1L, _ADCON1
        .equiv  ADCON1H, _ADCON1+1

        .extern ADCON2
        .equiv  ADCON2L, _ADCON2
        .equiv  ADCON2H, _ADCON2+1

        .extern ADCON3
        .equiv  ADCON3L, _ADCON3
        .equiv  ADCON3H, _ADCON3+1

        .extern ADTMRPR
        .equiv  ADTMRPRL, _ADTMRPR
        .equiv  ADTMRPRH, _ADTMRPR+1

        .extern ADSTAT

        .extern ADSTATL
        .equiv  ADSTATLL, _ADSTATL
        .equiv  ADSTATLH, _ADSTATL+1

        .extern ADSTATH
        .equiv  ADSTATHL, _ADSTATH
        .equiv  ADSTATHH, _ADSTATH+1

        .extern ACCON

        .extern ACCONL
        .equiv  ACCONLL, _ACCONL
        .equiv  ACCONLH, _ACCONL+1

        .extern ACCONH
        .equiv  ACCONHL, _ACCONH
        .equiv  ACCONHH, _ACCONH+1

        .extern ACRES

        .extern ACRESL
        .equiv  ACRESLL, _ACRESL
        .equiv  ACRESLH, _ACRESL+1

        .extern ACRESH
        .equiv  ACRESHL, _ACRESH
        .equiv  ACRESHH, _ACRESH+1

        .extern ADCHIT

        .extern ADCHITL
        .equiv  ADCHITLL, _ADCHITL
        .equiv  ADCHITLH, _ADCHITL+1

        .extern ADCHITH
        .equiv  ADCHITHL, _ADCHITH
        .equiv  ADCHITHH, _ADCHITH+1

        .extern ADL0CON

        .extern ADL0CONL
        .equiv  ADL0CONLL, _ADL0CONL
        .equiv  ADL0CONLH, _ADL0CONL+1

        .extern ADL0CONH
        .equiv  ADL0CONHL, _ADL0CONH
        .equiv  ADL0CONHH, _ADL0CONH+1

        .extern ADL0PTR
        .equiv  ADL0PTRL, _ADL0PTR
        .equiv  ADL0PTRH, _ADL0PTR+1

        .extern ADL0STAT
        .equiv  ADL0STATL, _ADL0STAT
        .equiv  ADL0STATH, _ADL0STAT+1

        .extern ADTH0L
        .equiv  ADTH0LL, _ADTH0L
        .equiv  ADTH0LH, _ADTH0L+1

        .extern ADTH0H
        .equiv  ADTH0HL, _ADTH0H
        .equiv  ADTH0HH, _ADTH0H+1

        .extern ADL0MSEL
        .equiv  ADL0MSELL, _ADL0MSEL
        .equiv  ADL0MSELH, _ADL0MSEL+1

        .extern ADL0MSEL0
        .equiv  ADL0MSEL0L, _ADL0MSEL0
        .equiv  ADL0MSEL0H, _ADL0MSEL0+1

        .extern ADL0MSEL1
        .equiv  ADL0MSEL1L, _ADL0MSEL1
        .equiv  ADL0MSEL1H, _ADL0MSEL1+1

        .extern ADL0MSEL2
        .equiv  ADL0MSEL2L, _ADL0MSEL2
        .equiv  ADL0MSEL2H, _ADL0MSEL2+1

        .extern ADL0MSEL3
        .equiv  ADL0MSEL3L, _ADL0MSEL3
        .equiv  ADL0MSEL3H, _ADL0MSEL3+1

        .extern ADL1CON

        .extern ADL1CONL
        .equiv  ADL1CONLL, _ADL1CONL
        .equiv  ADL1CONLH, _ADL1CONL+1

        .extern ADL1CONH
        .equiv  ADL1CONHL, _ADL1CONH
        .equiv  ADL1CONHH, _ADL1CONH+1

        .extern ADL1PTR
        .equiv  ADL1PTRL, _ADL1PTR
        .equiv  ADL1PTRH, _ADL1PTR+1

        .extern ADL1STAT
        .equiv  ADL1STATL, _ADL1STAT
        .equiv  ADL1STATH, _ADL1STAT+1

        .extern ADTH1L
        .equiv  ADTH1LL, _ADTH1L
        .equiv  ADTH1LH, _ADTH1L+1

        .extern ADTH1H
        .equiv  ADTH1HL, _ADTH1H
        .equiv  ADTH1HH, _ADTH1H+1

        .extern ADL1MSEL
        .equiv  ADL1MSELL, _ADL1MSEL
        .equiv  ADL1MSELH, _ADL1MSEL+1

        .extern ADL1MSEL0
        .equiv  ADL1MSEL0L, _ADL1MSEL0
        .equiv  ADL1MSEL0H, _ADL1MSEL0+1

        .extern ADL1MSEL1
        .equiv  ADL1MSEL1L, _ADL1MSEL1
        .equiv  ADL1MSEL1H, _ADL1MSEL1+1

        .extern ADL1MSEL2
        .equiv  ADL1MSEL2L, _ADL1MSEL2
        .equiv  ADL1MSEL2H, _ADL1MSEL2+1

        .extern ADL1MSEL3
        .equiv  ADL1MSEL3L, _ADL1MSEL3
        .equiv  ADL1MSEL3H, _ADL1MSEL3+1

        .extern ADL2CON

        .extern ADL2CONL
        .equiv  ADL2CONLL, _ADL2CONL
        .equiv  ADL2CONLH, _ADL2CONL+1

        .extern ADL2CONH
        .equiv  ADL2CONHL, _ADL2CONH
        .equiv  ADL2CONHH, _ADL2CONH+1

        .extern ADL2PTR
        .equiv  ADL2PTRL, _ADL2PTR
        .equiv  ADL2PTRH, _ADL2PTR+1

        .extern ADL2STAT
        .equiv  ADL2STATL, _ADL2STAT
        .equiv  ADL2STATH, _ADL2STAT+1

        .extern ADTH2L
        .equiv  ADTH2LL, _ADTH2L
        .equiv  ADTH2LH, _ADTH2L+1

        .extern ADTH2H
        .equiv  ADTH2HL, _ADTH2H
        .equiv  ADTH2HH, _ADTH2H+1

        .extern ADL2MSEL
        .equiv  ADL2MSELL, _ADL2MSEL
        .equiv  ADL2MSELH, _ADL2MSEL+1

        .extern ADL2MSEL0
        .equiv  ADL2MSEL0L, _ADL2MSEL0
        .equiv  ADL2MSEL0H, _ADL2MSEL0+1

        .extern ADL2MSEL1
        .equiv  ADL2MSEL1L, _ADL2MSEL1
        .equiv  ADL2MSEL1H, _ADL2MSEL1+1

        .extern ADL2MSEL2
        .equiv  ADL2MSEL2L, _ADL2MSEL2
        .equiv  ADL2MSEL2H, _ADL2MSEL2+1

        .extern ADL2MSEL3
        .equiv  ADL2MSEL3L, _ADL2MSEL3
        .equiv  ADL2MSEL3H, _ADL2MSEL3+1

        .extern LCDREG
        .equiv  LCDREGL, _LCDREG
        .equiv  LCDREGH, _LCDREG+1

        .extern LCDREF
        .equiv  LCDREFL, _LCDREF
        .equiv  LCDREFH, _LCDREF+1

        .extern LCDCON
        .equiv  LCDCONL, _LCDCON
        .equiv  LCDCONH, _LCDCON+1

        .extern LCDPS
        .equiv  LCDPSL, _LCDPS
        .equiv  LCDPSH, _LCDPS+1

        .extern LCDSE0
        .equiv  LCDSE0L, _LCDSE0
        .equiv  LCDSE0H, _LCDSE0+1

        .extern LCDSE1
        .equiv  LCDSE1L, _LCDSE1
        .equiv  LCDSE1H, _LCDSE1+1

        .extern LCDSE2
        .equiv  LCDSE2L, _LCDSE2
        .equiv  LCDSE2H, _LCDSE2+1

        .extern LCDSE3
        .equiv  LCDSE3L, _LCDSE3
        .equiv  LCDSE3H, _LCDSE3+1

        .extern LCDDATA0
        .equiv  LCDDATA0L, _LCDDATA0
        .equiv  LCDDATA0H, _LCDDATA0+1

        .extern LCDDATA1
        .equiv  LCDDATA1L, _LCDDATA1
        .equiv  LCDDATA1H, _LCDDATA1+1

        .extern LCDDATA2
        .equiv  LCDDATA2L, _LCDDATA2
        .equiv  LCDDATA2H, _LCDDATA2+1

        .extern LCDDATA3
        .equiv  LCDDATA3L, _LCDDATA3
        .equiv  LCDDATA3H, _LCDDATA3+1

        .extern LCDDATA4
        .equiv  LCDDATA4L, _LCDDATA4
        .equiv  LCDDATA4H, _LCDDATA4+1

        .extern LCDDATA5
        .equiv  LCDDATA5L, _LCDDATA5
        .equiv  LCDDATA5H, _LCDDATA5+1

        .extern LCDDATA6
        .equiv  LCDDATA6L, _LCDDATA6
        .equiv  LCDDATA6H, _LCDDATA6+1

        .extern LCDDATA7
        .equiv  LCDDATA7L, _LCDDATA7
        .equiv  LCDDATA7H, _LCDDATA7+1

        .extern LCDDATA8
        .equiv  LCDDATA8L, _LCDDATA8
        .equiv  LCDDATA8H, _LCDDATA8+1

        .extern LCDDATA9
        .equiv  LCDDATA9L, _LCDDATA9
        .equiv  LCDDATA9H, _LCDDATA9+1

        .extern LCDDATA10
        .equiv  LCDDATA10L, _LCDDATA10
        .equiv  LCDDATA10H, _LCDDATA10+1

        .extern LCDDATA11
        .equiv  LCDDATA11L, _LCDDATA11
        .equiv  LCDDATA11H, _LCDDATA11+1

        .extern LCDDATA12
        .equiv  LCDDATA12L, _LCDDATA12
        .equiv  LCDDATA12H, _LCDDATA12+1

        .extern LCDDATA13
        .equiv  LCDDATA13L, _LCDDATA13
        .equiv  LCDDATA13H, _LCDDATA13+1

        .extern LCDDATA14
        .equiv  LCDDATA14L, _LCDDATA14
        .equiv  LCDDATA14H, _LCDDATA14+1

        .extern LCDDATA15
        .equiv  LCDDATA15L, _LCDDATA15
        .equiv  LCDDATA15H, _LCDDATA15+1

        .extern LCDDATA16
        .equiv  LCDDATA16L, _LCDDATA16
        .equiv  LCDDATA16H, _LCDDATA16+1

        .extern LCDDATA17
        .equiv  LCDDATA17L, _LCDDATA17
        .equiv  LCDDATA17H, _LCDDATA17+1

        .extern LCDDATA18
        .equiv  LCDDATA18L, _LCDDATA18
        .equiv  LCDDATA18H, _LCDDATA18+1

        .extern LCDDATA19
        .equiv  LCDDATA19L, _LCDDATA19
        .equiv  LCDDATA19H, _LCDDATA19+1

        .extern LCDDATA20
        .equiv  LCDDATA20L, _LCDDATA20
        .equiv  LCDDATA20H, _LCDDATA20+1

        .extern LCDDATA21
        .equiv  LCDDATA21L, _LCDDATA21
        .equiv  LCDDATA21H, _LCDDATA21+1

        .extern LCDDATA22
        .equiv  LCDDATA22L, _LCDDATA22
        .equiv  LCDDATA22H, _LCDDATA22+1

        .extern LCDDATA23
        .equiv  LCDDATA23L, _LCDDATA23
        .equiv  LCDDATA23H, _LCDDATA23+1

        .extern LCDDATA24
        .equiv  LCDDATA24L, _LCDDATA24
        .equiv  LCDDATA24H, _LCDDATA24+1

        .extern LCDDATA25
        .equiv  LCDDATA25L, _LCDDATA25
        .equiv  LCDDATA25H, _LCDDATA25+1

        .extern LCDDATA26
        .equiv  LCDDATA26L, _LCDDATA26
        .equiv  LCDDATA26H, _LCDDATA26+1

        .extern LCDDATA27
        .equiv  LCDDATA27L, _LCDDATA27
        .equiv  LCDDATA27H, _LCDDATA27+1

        .extern LCDDATA28
        .equiv  LCDDATA28L, _LCDDATA28
        .equiv  LCDDATA28H, _LCDDATA28+1

        .extern LCDDATA29
        .equiv  LCDDATA29L, _LCDDATA29
        .equiv  LCDDATA29H, _LCDDATA29+1

        .extern LCDDATA30
        .equiv  LCDDATA30L, _LCDDATA30
        .equiv  LCDDATA30H, _LCDDATA30+1

        .extern LCDDATA31
        .equiv  LCDDATA31L, _LCDDATA31
        .equiv  LCDDATA31H, _LCDDATA31+1

        .extern PMCON1
        .equiv  PMCON1L, _PMCON1
        .equiv  PMCON1H, _PMCON1+1

        .extern PMCON2
        .equiv  PMCON2L, _PMCON2
        .equiv  PMCON2H, _PMCON2+1

        .extern PMCON3
        .equiv  PMCON3L, _PMCON3
        .equiv  PMCON3H, _PMCON3+1

        .extern PMCON4
        .equiv  PMCON4L, _PMCON4
        .equiv  PMCON4H, _PMCON4+1

        .extern PMCS1CF
        .equiv  PMCS1CFL, _PMCS1CF
        .equiv  PMCS1CFH, _PMCS1CF+1

        .extern PMCS1BS
        .equiv  PMCS1BSL, _PMCS1BS
        .equiv  PMCS1BSH, _PMCS1BS+1

        .extern PMCS1MD
        .equiv  PMCS1MDL, _PMCS1MD
        .equiv  PMCS1MDH, _PMCS1MD+1

        .extern PMCS2CF
        .equiv  PMCS2CFL, _PMCS2CF
        .equiv  PMCS2CFH, _PMCS2CF+1

        .extern PMCS2BS
        .equiv  PMCS2BSL, _PMCS2BS
        .equiv  PMCS2BSH, _PMCS2BS+1

        .extern PMCS2MD
        .equiv  PMCS2MDL, _PMCS2MD
        .equiv  PMCS2MDH, _PMCS2MD+1

        .extern PMDOUT1
        .equiv  PMDOUT1L, _PMDOUT1
        .equiv  PMDOUT1H, _PMDOUT1+1

        .extern PMDOUT2
        .equiv  PMDOUT2L, _PMDOUT2
        .equiv  PMDOUT2H, _PMDOUT2+1

        .extern PMDIN1
        .equiv  PMDIN1L, _PMDIN1
        .equiv  PMDIN1H, _PMDIN1+1

        .extern PMDIN2
        .equiv  PMDIN2L, _PMDIN2
        .equiv  PMDIN2H, _PMDIN2+1

        .extern PMSTAT
        .equiv  PMSTATL, _PMSTAT
        .equiv  PMSTATH, _PMSTAT+1

        .extern ALRMVAL
        .equiv  ALRMVALL, _ALRMVAL
        .equiv  ALRMVALH, _ALRMVAL+1

        .extern ALCFGRPT
        .equiv  ALCFGRPTL, _ALCFGRPT
        .equiv  ALCFGRPTH, _ALCFGRPT+1

        .extern RTCVAL
        .equiv  RTCVALL, _RTCVAL
        .equiv  RTCVALH, _RTCVAL+1

        .extern RCFGCAL
        .equiv  RCFGCALL, _RCFGCAL
        .equiv  RCFGCALH, _RCFGCAL+1

        .extern RTCPWC
        .equiv  RTCPWCL, _RTCPWC
        .equiv  RTCPWCH, _RTCPWC+1

        .extern MDCON
        .equiv  MDCONL, _MDCON
        .equiv  MDCONH, _MDCON+1

        .extern MDSRC
        .equiv  MDSRCL, _MDSRC
        .equiv  MDSRCH, _MDSRC+1

        .extern MDCAR
        .equiv  MDCARL, _MDCAR
        .equiv  MDCARH, _MDCAR+1

        .extern CMSTAT
        .equiv  CMSTATL, _CMSTAT
        .equiv  CMSTATH, _CMSTAT+1

        .extern CVRCON
        .equiv  CVRCONL, _CVRCON
        .equiv  CVRCONH, _CVRCON+1

        .extern CM1CON
        .equiv  CM1CONL, _CM1CON
        .equiv  CM1CONH, _CM1CON+1

        .extern CM2CON
        .equiv  CM2CONL, _CM2CON
        .equiv  CM2CONH, _CM2CON+1

        .extern CM3CON
        .equiv  CM3CONL, _CM3CON
        .equiv  CM3CONH, _CM3CON+1

        .extern CRCCON1
        .equiv  CRCCON1L, _CRCCON1
        .equiv  CRCCON1H, _CRCCON1+1

        .extern CRCCON2
        .equiv  CRCCON2L, _CRCCON2
        .equiv  CRCCON2H, _CRCCON2+1

        .extern CRCXORL
        .equiv  CRCXORLL, _CRCXORL
        .equiv  CRCXORLH, _CRCXORL+1

        .extern CRCXORH
        .equiv  CRCXORHL, _CRCXORH
        .equiv  CRCXORHH, _CRCXORH+1

        .extern CRCDAT

        .extern CRCDATL
        .equiv  CRCDATLL, _CRCDATL
        .equiv  CRCDATLH, _CRCDATL+1

        .extern CRCDATH
        .equiv  CRCDATHL, _CRCDATH
        .equiv  CRCDATHH, _CRCDATH+1

        .extern CRCWDAT

        .extern CRCWDATL
        .equiv  CRCWDATLL, _CRCWDATL
        .equiv  CRCWDATLH, _CRCWDATL+1

        .extern CRCWDATH
        .equiv  CRCWDATHL, _CRCWDATH
        .equiv  CRCWDATHH, _CRCWDATH+1

        .extern BUFCON0
        .equiv  BUFCON0L, _BUFCON0
        .equiv  BUFCON0H, _BUFCON0+1

        .extern BUFCON1
        .equiv  BUFCON1L, _BUFCON1
        .equiv  BUFCON1H, _BUFCON1+1

        .extern BUFCON2
        .equiv  BUFCON2L, _BUFCON2
        .equiv  BUFCON2H, _BUFCON2+1

        .extern RPINR0
        .equiv  RPINR0L, _RPINR0
        .equiv  RPINR0H, _RPINR0+1

        .extern RPINR1
        .equiv  RPINR1L, _RPINR1
        .equiv  RPINR1H, _RPINR1+1

        .extern RPINR2
        .equiv  RPINR2L, _RPINR2
        .equiv  RPINR2H, _RPINR2+1

        .extern RPINR7
        .equiv  RPINR7L, _RPINR7
        .equiv  RPINR7H, _RPINR7+1

        .extern RPINR8
        .equiv  RPINR8L, _RPINR8
        .equiv  RPINR8H, _RPINR8+1

        .extern RPINR9
        .equiv  RPINR9L, _RPINR9
        .equiv  RPINR9H, _RPINR9+1

        .extern RPINR10
        .equiv  RPINR10L, _RPINR10
        .equiv  RPINR10H, _RPINR10+1

        .extern RPINR11
        .equiv  RPINR11L, _RPINR11
        .equiv  RPINR11H, _RPINR11+1

        .extern RPINR15
        .equiv  RPINR15L, _RPINR15
        .equiv  RPINR15H, _RPINR15+1

        .extern RPINR17
        .equiv  RPINR17L, _RPINR17
        .equiv  RPINR17H, _RPINR17+1

        .extern RPINR18
        .equiv  RPINR18L, _RPINR18
        .equiv  RPINR18H, _RPINR18+1

        .extern RPINR19
        .equiv  RPINR19L, _RPINR19
        .equiv  RPINR19H, _RPINR19+1

        .extern RPINR20
        .equiv  RPINR20L, _RPINR20
        .equiv  RPINR20H, _RPINR20+1

        .extern RPINR21
        .equiv  RPINR21L, _RPINR21
        .equiv  RPINR21H, _RPINR21+1

        .extern RPINR22
        .equiv  RPINR22L, _RPINR22
        .equiv  RPINR22H, _RPINR22+1

        .extern RPINR23
        .equiv  RPINR23L, _RPINR23
        .equiv  RPINR23H, _RPINR23+1

        .extern RPINR27
        .equiv  RPINR27L, _RPINR27
        .equiv  RPINR27H, _RPINR27+1

        .extern RPINR30
        .equiv  RPINR30L, _RPINR30
        .equiv  RPINR30H, _RPINR30+1

        .extern RPINR31
        .equiv  RPINR31L, _RPINR31
        .equiv  RPINR31H, _RPINR31+1

        .extern RPOR0
        .equiv  RPOR0L, _RPOR0
        .equiv  RPOR0H, _RPOR0+1

        .extern RPOR1
        .equiv  RPOR1L, _RPOR1
        .equiv  RPOR1H, _RPOR1+1

        .extern RPOR2
        .equiv  RPOR2L, _RPOR2
        .equiv  RPOR2H, _RPOR2+1

        .extern RPOR3
        .equiv  RPOR3L, _RPOR3
        .equiv  RPOR3H, _RPOR3+1

        .extern RPOR4
        .equiv  RPOR4L, _RPOR4
        .equiv  RPOR4H, _RPOR4+1

        .extern RPOR5
        .equiv  RPOR5L, _RPOR5
        .equiv  RPOR5H, _RPOR5+1

        .extern RPOR6
        .equiv  RPOR6L, _RPOR6
        .equiv  RPOR6H, _RPOR6+1

        .extern RPOR7
        .equiv  RPOR7L, _RPOR7
        .equiv  RPOR7H, _RPOR7+1

        .extern RPOR8
        .equiv  RPOR8L, _RPOR8
        .equiv  RPOR8H, _RPOR8+1

        .extern RPOR9
        .equiv  RPOR9L, _RPOR9
        .equiv  RPOR9H, _RPOR9+1

        .extern RPOR10
        .equiv  RPOR10L, _RPOR10
        .equiv  RPOR10H, _RPOR10+1

        .extern RPOR11
        .equiv  RPOR11L, _RPOR11
        .equiv  RPOR11H, _RPOR11+1

        .extern RPOR12
        .equiv  RPOR12L, _RPOR12
        .equiv  RPOR12H, _RPOR12+1

        .extern RPOR13
        .equiv  RPOR13L, _RPOR13
        .equiv  RPOR13H, _RPOR13+1

        .extern RPOR14
        .equiv  RPOR14L, _RPOR14
        .equiv  RPOR14H, _RPOR14+1

        .extern RPOR15
        .equiv  RPOR15L, _RPOR15
        .equiv  RPOR15H, _RPOR15+1

        .extern RPOR17
        .equiv  RPOR17L, _RPOR17
        .equiv  RPOR17H, _RPOR17+1

        .extern RPOR18
        .equiv  RPOR18L, _RPOR18
        .equiv  RPOR18H, _RPOR18+1

        .extern RCON
        .equiv  RCONL, _RCON
        .equiv  RCONH, _RCON+1

        .extern OSCCON

        .extern OSCCONL
        .equiv  OSCCONLL, _OSCCONL
        .equiv  OSCCONLH, _OSCCONL+1

        .extern OSCCONH
        .equiv  OSCCONHL, _OSCCONH
        .equiv  OSCCONHH, _OSCCONH+1

        .extern CLKDIV
        .equiv  CLKDIVL, _CLKDIV
        .equiv  CLKDIVH, _CLKDIV+1

        .extern OSCTUN
        .equiv  OSCTUNL, _OSCTUN
        .equiv  OSCTUNH, _OSCTUN+1

        .extern REFOCON
        .equiv  REFOCONL, _REFOCON
        .equiv  REFOCONH, _REFOCON+1

        .extern HLVDCON
        .equiv  HLVDCONL, _HLVDCON
        .equiv  HLVDCONH, _HLVDCON+1

        .extern DSCON
        .equiv  DSCONL, _DSCON
        .equiv  DSCONH, _DSCON+1

        .extern DSWAKE
        .equiv  DSWAKEL, _DSWAKE
        .equiv  DSWAKEH, _DSWAKE+1

        .extern DSGPR0
        .equiv  DSGPR0L, _DSGPR0
        .equiv  DSGPR0H, _DSGPR0+1

        .extern DSGPR1
        .equiv  DSGPR1L, _DSGPR1
        .equiv  DSGPR1H, _DSGPR1+1

        .extern NVMCON
        .equiv  NVMCONL, _NVMCON
        .equiv  NVMCONH, _NVMCON+1

        .extern RCON2
        .equiv  RCON2L, _RCON2
        .equiv  RCON2H, _RCON2+1

        .extern NVMKEY
        .equiv  NVMKEYL, _NVMKEY
        .equiv  NVMKEYH, _NVMKEY+1

        .extern PMD1
        .equiv  PMD1L, _PMD1
        .equiv  PMD1H, _PMD1+1

        .extern PMD2
        .equiv  PMD2L, _PMD2
        .equiv  PMD2H, _PMD2+1

        .extern PMD3
        .equiv  PMD3L, _PMD3
        .equiv  PMD3H, _PMD3+1

        .extern PMD4
        .equiv  PMD4L, _PMD4
        .equiv  PMD4H, _PMD4+1

        .extern PMD5
        .equiv  PMD5L, _PMD5
        .equiv  PMD5H, _PMD5+1

        .extern PMD6
        .equiv  PMD6L, _PMD6
        .equiv  PMD6H, _PMD6+1

        .extern PMD7
        .equiv  PMD7L, _PMD7
        .equiv  PMD7H, _PMD7+1

        .extern CTMUCON1
        .equiv  CTMUCON1L, _CTMUCON1
        .equiv  CTMUCON1H, _CTMUCON1+1

        .extern CTMUCON2
        .equiv  CTMUCON2L, _CTMUCON2
        .equiv  CTMUCON2H, _CTMUCON2+1

        .extern CTMUICON
        .equiv  CTMUICONL, _CTMUICON
        .equiv  CTMUICONH, _CTMUICON+1

;----- SR Bits -----------------------------------------------------
        .equiv C,       0x0000
        .equiv Z,       0x0001
        .equiv OV,      0x0002
        .equiv N,       0x0003
        .equiv RA,      0x0004
        .equiv IPL0,    0x0005
        .equiv IPL1,    0x0006
        .equiv IPL2,    0x0007
        .equiv DC,      0x0008



;----- CORCON Bits -----------------------------------------------------
        .equiv IPL3,    0x0003


;----- CNPD1 Bits -----------------------------------------------------
        .equiv CN2PDE,  0x0002
        .equiv CN3PDE,  0x0003
        .equiv CN4PDE,  0x0004
        .equiv CN5PDE,  0x0005
        .equiv CN6PDE,  0x0006
        .equiv CN7PDE,  0x0007
        .equiv CN8PDE,  0x0008
        .equiv CN9PDE,  0x0009
        .equiv CN10PDE, 0x000A
        .equiv CN11PDE, 0x000B
        .equiv CN12PDE, 0x000C
        .equiv CN13PDE, 0x000D
        .equiv CN14PDE, 0x000E
        .equiv CN15PDE, 0x000F


;----- CNPD2 Bits -----------------------------------------------------
        .equiv CN16PDE, 0x0000
        .equiv CN17PDE, 0x0001
        .equiv CN18PDE, 0x0002
        .equiv CN19PDE, 0x0003
        .equiv CN20PDE, 0x0004
        .equiv CN21PDE, 0x0005
        .equiv CN22PDE, 0x0006
        .equiv CN23PDE, 0x0007
        .equiv CN24PDE, 0x0008
        .equiv CN25PDE, 0x0009
        .equiv CN30PDE, 0x000E
        .equiv CN31PDE, 0x000F


;----- CNPD3 Bits -----------------------------------------------------
        .equiv CN32PDE, 0x0000
        .equiv CN33PDE, 0x0001
        .equiv CN34PDE, 0x0002
        .equiv CN35PDE, 0x0003
        .equiv CN36PDE, 0x0004
        .equiv CN37PDE, 0x0005
        .equiv CN38PDE, 0x0006
        .equiv CN39PDE, 0x0007
        .equiv CN40PDE, 0x0008
        .equiv CN41PDE, 0x0009
        .equiv CN42PDE, 0x000A
        .equiv CN43PDE, 0x000B
        .equiv CN44PDE, 0x000C
        .equiv CN45PDE, 0x000D
        .equiv CN46PDE, 0x000E
        .equiv CN47PDE, 0x000F


;----- CNPD4 Bits -----------------------------------------------------
        .equiv CN48PDE, 0x0000
        .equiv CN49PDE, 0x0001
        .equiv CN50PDE, 0x0002
        .equiv CN51PDE, 0x0003
        .equiv CN52PDE, 0x0004
        .equiv CN53PDE, 0x0005
        .equiv CN54PDE, 0x0006
        .equiv CN55PDE, 0x0007
        .equiv CN56PDE, 0x0008
        .equiv CN57PDE, 0x0009
        .equiv CN58PDE, 0x000A
        .equiv CN59PDE, 0x000B
        .equiv CN60PDE, 0x000C
        .equiv CN61PDE, 0x000D
        .equiv CN62PDE, 0x000E
        .equiv CN63PDE, 0x000F


;----- CNPD5 Bits -----------------------------------------------------
        .equiv CN64PDE, 0x0000
        .equiv CN65PDE, 0x0001
        .equiv CN66PDE, 0x0002
        .equiv CN67PDE, 0x0003
        .equiv CN68PDE, 0x0004
        .equiv CN69PDE, 0x0005
        .equiv CN70PDE, 0x0006
        .equiv CN71PDE, 0x0007
        .equiv CN72PDE, 0x0008
        .equiv CN73PDE, 0x0009
        .equiv CN74PDE, 0x000A
        .equiv CN75PDE, 0x000B
        .equiv CN76PDE, 0x000C
        .equiv CN77PDE, 0x000D
        .equiv CN78PDE, 0x000E
        .equiv CN79PDE, 0x000F


;----- CNPD6 Bits -----------------------------------------------------
        .equiv CN80PDE, 0x0000
        .equiv CN81PDE, 0x0001
        .equiv CN82PDE, 0x0002
        .equiv CN83PDE, 0x0003


;----- CNEN1 Bits -----------------------------------------------------
        .equiv CN2IE,   0x0002
        .equiv CN3IE,   0x0003
        .equiv CN4IE,   0x0004
        .equiv CN5IE,   0x0005
        .equiv CN6IE,   0x0006
        .equiv CN7IE,   0x0007
        .equiv CN8IE,   0x0008
        .equiv CN9IE,   0x0009
        .equiv CN10IE,  0x000A
        .equiv CN11IE,  0x000B
        .equiv CN12IE,  0x000C
        .equiv CN13IE,  0x000D
        .equiv CN14IE,  0x000E
        .equiv CN15IE,  0x000F


;----- CNEN2 Bits -----------------------------------------------------
        .equiv CN16IE,  0x0000
        .equiv CN17IE,  0x0001
        .equiv CN18IE,  0x0002
        .equiv CN19IE,  0x0003
        .equiv CN20IE,  0x0004
        .equiv CN21IE,  0x0005
        .equiv CN22IE,  0x0006
        .equiv CN23IE,  0x0007
        .equiv CN24IE,  0x0008
        .equiv CN25IE,  0x0009
        .equiv CN30IE,  0x000E
        .equiv CN31IE,  0x000F


;----- CNEN3 Bits -----------------------------------------------------
        .equiv CN32IE,  0x0000
        .equiv CN33IE,  0x0001
        .equiv CN34IE,  0x0002
        .equiv CN35IE,  0x0003
        .equiv CN36IE,  0x0004
        .equiv CN37IE,  0x0005
        .equiv CN38IE,  0x0006
        .equiv CN39IE,  0x0007
        .equiv CN40IE,  0x0008
        .equiv CN41IE,  0x0009
        .equiv CN42IE,  0x000A
        .equiv CN43IE,  0x000B
        .equiv CN44IE,  0x000C
        .equiv CN45IE,  0x000D
        .equiv CN46IE,  0x000E
        .equiv CN47IE,  0x000F


;----- CNEN4 Bits -----------------------------------------------------
        .equiv CN48IE,  0x0000
        .equiv CN49IE,  0x0001
        .equiv CN50IE,  0x0002
        .equiv CN51IE,  0x0003
        .equiv CN52IE,  0x0004
        .equiv CN53IE,  0x0005
        .equiv CN54IE,  0x0006
        .equiv CN55IE,  0x0007
        .equiv CN56IE,  0x0008
        .equiv CN57IE,  0x0009
        .equiv CN58IE,  0x000A
        .equiv CN59IE,  0x000B
        .equiv CN60IE,  0x000C
        .equiv CN61IE,  0x000D
        .equiv CN62IE,  0x000E
        .equiv CN63IE,  0x000F


;----- CNEN5 Bits -----------------------------------------------------
        .equiv CN64IE,  0x0000
        .equiv CN65IE,  0x0001
        .equiv CN66IE,  0x0002
        .equiv CN67IE,  0x0003
        .equiv CN68IE,  0x0004
        .equiv CN69IE,  0x0005
        .equiv CN70IE,  0x0006
        .equiv CN71IE,  0x0007
        .equiv CN72IE,  0x0008
        .equiv CN73IE,  0x0009
        .equiv CN74IE,  0x000A
        .equiv CN75IE,  0x000B
        .equiv CN76IE,  0x000C
        .equiv CN77IE,  0x000D
        .equiv CN78IE,  0x000E
        .equiv CN79IE,  0x000F


;----- CNEN6 Bits -----------------------------------------------------
        .equiv CN80IE,  0x0000
        .equiv CN81IE,  0x0001
        .equiv CN82IE,  0x0002
        .equiv CN83IE,  0x0003


;----- CNPU1 Bits -----------------------------------------------------
        .equiv CN2PUE,  0x0002
        .equiv CN3PUE,  0x0003
        .equiv CN4PUE,  0x0004
        .equiv CN5PUE,  0x0005
        .equiv CN6PUE,  0x0006
        .equiv CN7PUE,  0x0007
        .equiv CN8PUE,  0x0008
        .equiv CN9PUE,  0x0009
        .equiv CN10PUE, 0x000A
        .equiv CN11PUE, 0x000B
        .equiv CN12PUE, 0x000C
        .equiv CN13PUE, 0x000D
        .equiv CN14PUE, 0x000E
        .equiv CN15PUE, 0x000F


;----- CNPU2 Bits -----------------------------------------------------
        .equiv CN16PUE, 0x0000
        .equiv CN17PUE, 0x0001
        .equiv CN18PUE, 0x0002
        .equiv CN19PUE, 0x0003
        .equiv CN20PUE, 0x0004
        .equiv CN21PUE, 0x0005
        .equiv CN22PUE, 0x0006
        .equiv CN23PUE, 0x0007
        .equiv CN24PUE, 0x0008
        .equiv CN25PUE, 0x0009
        .equiv CN30PUE, 0x000E
        .equiv CN31PUE, 0x000F


;----- CNPU3 Bits -----------------------------------------------------
        .equiv CN32PUE, 0x0000
        .equiv CN33PUE, 0x0001
        .equiv CN34PUE, 0x0002
        .equiv CN35PUE, 0x0003
        .equiv CN36PUE, 0x0004
        .equiv CN37PUE, 0x0005
        .equiv CN38PUE, 0x0006
        .equiv CN39PUE, 0x0007
        .equiv CN40PUE, 0x0008
        .equiv CN41PUE, 0x0009
        .equiv CN42PUE, 0x000A
        .equiv CN43PUE, 0x000B
        .equiv CN44PUE, 0x000C
        .equiv CN45PUE, 0x000D
        .equiv CN46PUE, 0x000E
        .equiv CN47PUE, 0x000F


;----- CNPU4 Bits -----------------------------------------------------
        .equiv CN48PUE, 0x0000
        .equiv CN49PUE, 0x0001
        .equiv CN50PUE, 0x0002
        .equiv CN51PUE, 0x0003
        .equiv CN52PUE, 0x0004
        .equiv CN53PUE, 0x0005
        .equiv CN54PUE, 0x0006
        .equiv CN55PUE, 0x0007
        .equiv CN56PUE, 0x0008
        .equiv CN57PUE, 0x0009
        .equiv CN58PUE, 0x000A
        .equiv CN59PUE, 0x000B
        .equiv CN60PUE, 0x000C
        .equiv CN61PUE, 0x000D
        .equiv CN62PUE, 0x000E
        .equiv CN63PUE, 0x000F


;----- CNPU5 Bits -----------------------------------------------------
        .equiv CN64PUE, 0x0000
        .equiv CN65PUE, 0x0001
        .equiv CN66PUE, 0x0002
        .equiv CN67PUE, 0x0003
        .equiv CN68PUE, 0x0004
        .equiv CN69PUE, 0x0005
        .equiv CN70PUE, 0x0006
        .equiv CN71PUE, 0x0007
        .equiv CN72PUE, 0x0008
        .equiv CN73PUE, 0x0009
        .equiv CN74PUE, 0x000A
        .equiv CN75PUE, 0x000B
        .equiv CN76PUE, 0x000C
        .equiv CN77PUE, 0x000D
        .equiv CN78PUE, 0x000E
        .equiv CN79PUE, 0x000F


;----- CNPU6 Bits -----------------------------------------------------
        .equiv CN80PUE, 0x0000
        .equiv CN81PUE, 0x0001
        .equiv CN82PUE, 0x0002
        .equiv CN83PUE, 0x0003


;----- INTCON1 Bits -----------------------------------------------------
        .equiv OSCFAIL, 0x0001
        .equiv STKERR,  0x0002
        .equiv ADDRERR, 0x0003
        .equiv MATHERR, 0x0004
        .equiv NSTDIS,  0x000F


;----- INTCON2 Bits -----------------------------------------------------
        .equiv INT0EP,  0x0000
        .equiv INT1EP,  0x0001
        .equiv INT2EP,  0x0002
        .equiv INT3EP,  0x0003
        .equiv INT4EP,  0x0004
        .equiv DISI,    0x000E
        .equiv ALTIVT,  0x000F


;----- IFS0 Bits -----------------------------------------------------
        .equiv INT0IF,  0x0000
        .equiv IC1IF,   0x0001
        .equiv OC1IF,   0x0002
        .equiv T1IF,    0x0003
        .equiv DMA0IF,  0x0004
        .equiv IC2IF,   0x0005
        .equiv OC2IF,   0x0006
        .equiv T2IF,    0x0007
        .equiv T3IF,    0x0008
        .equiv SPF1IF,  0x0009
        .equiv SPI1IF,  0x000A
        .equiv U1RXIF,  0x000B
        .equiv U1TXIF,  0x000C
        .equiv AD1IF,   0x000D
        .equiv DMA1IF,  0x000E


;----- IFS1 Bits -----------------------------------------------------
        .equiv SI2C1IF, 0x0000
        .equiv MI2C1IF, 0x0001
        .equiv CMIF,    0x0002
        .equiv CNIF,    0x0003
        .equiv INT1IF,  0x0004
        .equiv IC7IF,   0x0006
        .equiv IC8IF,   0x0007
        .equiv DMA2IF,  0x0008
        .equiv OC3IF,   0x0009
        .equiv OC4IF,   0x000A
        .equiv T4IF,    0x000B
        .equiv T5IF,    0x000C
        .equiv INT2IF,  0x000D
        .equiv U2RXIF,  0x000E
        .equiv U2TXIF,  0x000F


;----- IFS2 Bits -----------------------------------------------------
        .equiv SPF2IF,  0x0000
        .equiv SPI2IF,  0x0001
        .equiv DMA3IF,  0x0004
        .equiv IC3IF,   0x0005
        .equiv IC4IF,   0x0006
        .equiv IC5IF,   0x0007
        .equiv IC6IF,   0x0008
        .equiv OC5IF,   0x0009
        .equiv OC6IF,   0x000A
        .equiv OC7IF,   0x000B
        .equiv OC8IF,   0x000C
        .equiv PMPIF,   0x000D
        .equiv DMA4IF,  0x000E


;----- IFS3 Bits -----------------------------------------------------
        .equiv SI2C2IF, 0x0001
        .equiv MI2C2IF, 0x0002
        .equiv INT3IF,  0x0005
        .equiv INT4IF,  0x0006
        .equiv DMA5IF,  0x000D
        .equiv RTCIF,   0x000E


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1ERIF,  0x0001
        .equiv U2ERIF,  0x0002
        .equiv CRCIF,   0x0003
        .equiv LVDIF,   0x0008
        .equiv CTMUIF,  0x000D
        .equiv DAC1IF,  0x000E
        .equiv DAC2IF,  0x000F

        .equiv HLVDIF,  0x0008


;----- IFS5 Bits -----------------------------------------------------
        .equiv U3ERIF,  0x0001
        .equiv U3RXIF,  0x0002
        .equiv U3TXIF,  0x0003
        .equiv USB1IF,  0x0006
        .equiv U4ERIF,  0x0007
        .equiv U4RXIF,  0x0008
        .equiv U4TXIF,  0x0009
        .equiv OC9IF,   0x000C
        .equiv IC9IF,   0x000D


;----- IFS6 Bits -----------------------------------------------------
        .equiv LCDIF,   0x0004
        .equiv AMP1IF,  0x0007
        .equiv AMP2IF,  0x0008
        .equiv SDA1IF,  0x0009
        .equiv FSTIF,   0x000A


;----- IFS7 Bits -----------------------------------------------------
        .equiv JTAGIF,  0x0005


;----- IEC0 Bits -----------------------------------------------------
        .equiv INT0IE,  0x0000
        .equiv IC1IE,   0x0001
        .equiv OC1IE,   0x0002
        .equiv T1IE,    0x0003
        .equiv DMA0IE,  0x0004
        .equiv IC2IE,   0x0005
        .equiv OC2IE,   0x0006
        .equiv T2IE,    0x0007
        .equiv T3IE,    0x0008
        .equiv SPF1IE,  0x0009
        .equiv SPI1IE,  0x000A
        .equiv U1RXIE,  0x000B
        .equiv U1TXIE,  0x000C
        .equiv AD1IE,   0x000D
        .equiv DMA1IE,  0x000E


;----- IEC1 Bits -----------------------------------------------------
        .equiv SI2C1IE, 0x0000
        .equiv MI2C1IE, 0x0001
        .equiv CMIE,    0x0002
        .equiv CNIE,    0x0003
        .equiv INT1IE,  0x0004
        .equiv IC7IE,   0x0006
        .equiv IC8IE,   0x0007
        .equiv DMA2IE,  0x0008
        .equiv OC3IE,   0x0009
        .equiv OC4IE,   0x000A
        .equiv T4IE,    0x000B
        .equiv T5IE,    0x000C
        .equiv INT2IE,  0x000D
        .equiv U2RXIE,  0x000E
        .equiv U2TXIE,  0x000F


;----- IEC2 Bits -----------------------------------------------------
        .equiv SPF2IE,  0x0000
        .equiv SPI2IE,  0x0001
        .equiv DMA3IE,  0x0004
        .equiv IC3IE,   0x0005
        .equiv IC4IE,   0x0006
        .equiv IC5IE,   0x0007
        .equiv IC6IE,   0x0008
        .equiv OC5IE,   0x0009
        .equiv OC6IE,   0x000A
        .equiv OC7IE,   0x000B
        .equiv OC8IE,   0x000C
        .equiv PMPIE,   0x000D
        .equiv DMA4IE,  0x000E


;----- IEC3 Bits -----------------------------------------------------
        .equiv SI2C2IE, 0x0001
        .equiv MI2C2IE, 0x0002
        .equiv INT3IE,  0x0005
        .equiv INT4IE,  0x0006
        .equiv DMA5IE,  0x000D
        .equiv RTCIE,   0x000E


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1ERIE,  0x0001
        .equiv U2ERIE,  0x0002
        .equiv CRCIE,   0x0003
        .equiv LVDIE,   0x0008
        .equiv CTMUIE,  0x000D
        .equiv DAC1IE,  0x000E
        .equiv DAC2IE,  0x000F

        .equiv HLVDIE,  0x0008


;----- IEC5 Bits -----------------------------------------------------
        .equiv U3ERIE,  0x0001
        .equiv U3RXIE,  0x0002
        .equiv U3TXIE,  0x0003
        .equiv USB1IE,  0x0006
        .equiv U4ERIE,  0x0007
        .equiv U4RXIE,  0x0008
        .equiv U4TXIE,  0x0009
        .equiv OC9IE,   0x000C
        .equiv IC9IE,   0x000D


;----- IEC6 Bits -----------------------------------------------------
        .equiv LCDIE,   0x0004
        .equiv AMP1IE,  0x0007
        .equiv AMP2IE,  0x0008
        .equiv SDA1IE,  0x0009
        .equiv FSTIE,   0x000A


;----- IEC7 Bits -----------------------------------------------------
        .equiv JTAGIE,  0x0005


;----- IPC0 Bits -----------------------------------------------------
        .equiv INT0IP0, 0x0000
        .equiv INT0IP1, 0x0001
        .equiv INT0IP2, 0x0002
        .equiv IC1IP0,  0x0004
        .equiv IC1IP1,  0x0005
        .equiv IC1IP2,  0x0006
        .equiv OC1IP0,  0x0008
        .equiv OC1IP1,  0x0009
        .equiv OC1IP2,  0x000A
        .equiv T1IP0,   0x000C
        .equiv T1IP1,   0x000D
        .equiv T1IP2,   0x000E


;----- IPC1 Bits -----------------------------------------------------
        .equiv DMA0IP0, 0x0000
        .equiv DMA0IP1, 0x0001
        .equiv DMA0IP2, 0x0002
        .equiv IC2IP0,  0x0004
        .equiv IC2IP1,  0x0005
        .equiv IC2IP2,  0x0006
        .equiv OC2IP0,  0x0008
        .equiv OC2IP1,  0x0009
        .equiv OC2IP2,  0x000A
        .equiv T2IP0,   0x000C
        .equiv T2IP1,   0x000D
        .equiv T2IP2,   0x000E


;----- IPC2 Bits -----------------------------------------------------
        .equiv T3IP0,   0x0000
        .equiv T3IP1,   0x0001
        .equiv T3IP2,   0x0002
        .equiv SPF1IP0, 0x0004
        .equiv SPF1IP1, 0x0005
        .equiv SPF1IP2, 0x0006
        .equiv SPI1IP0, 0x0008
        .equiv SPI1IP1, 0x0009
        .equiv SPI1IP2, 0x000A
        .equiv U1RXIP0, 0x000C
        .equiv U1RXIP1, 0x000D
        .equiv U1RXIP2, 0x000E


;----- IPC3 Bits -----------------------------------------------------
        .equiv U1TXIP0, 0x0000
        .equiv U1TXIP1, 0x0001
        .equiv U1TXIP2, 0x0002
        .equiv AD1IP0,  0x0004
        .equiv AD1IP1,  0x0005
        .equiv AD1IP2,  0x0006
        .equiv DMA1IP0, 0x0008
        .equiv DMA1IP1, 0x0009
        .equiv DMA1IP2, 0x000A


;----- IPC4 Bits -----------------------------------------------------
        .equiv SI2C1IP0, 0x0000
        .equiv SI2C1IP1, 0x0001
        .equiv SI2C1IP2, 0x0002
        .equiv MI2C1IP0, 0x0004
        .equiv MI2C1IP1, 0x0005
        .equiv MI2C1IP2, 0x0006
        .equiv CMIP0,   0x0008
        .equiv CMIP1,   0x0009
        .equiv CMIP2,   0x000A
        .equiv CNIP0,   0x000C
        .equiv CNIP1,   0x000D
        .equiv CNIP2,   0x000E


        .equiv SI2C1P0, 0x0000
        .equiv SI2C1P1, 0x0001
        .equiv SI2C1P2, 0x0002
        .equiv MI2C1P0, 0x0004
        .equiv MI2C1P1, 0x0005
        .equiv MI2C1P2, 0x0006


;----- IPC5 Bits -----------------------------------------------------
        .equiv INT1IP0, 0x0000
        .equiv INT1IP1, 0x0001
        .equiv INT1IP2, 0x0002
        .equiv IC7IP0,  0x0008
        .equiv IC7IP1,  0x0009
        .equiv IC7IP2,  0x000A
        .equiv IC8IP0,  0x000C
        .equiv IC8IP1,  0x000D
        .equiv IC8IP2,  0x000E


;----- IPC6 Bits -----------------------------------------------------
        .equiv DMA2IP0, 0x0000
        .equiv DMA2IP1, 0x0001
        .equiv DMA2IP2, 0x0002
        .equiv OC3IP0,  0x0004
        .equiv OC3IP1,  0x0005
        .equiv OC3IP2,  0x0006
        .equiv OC4IP0,  0x0008
        .equiv OC4IP1,  0x0009
        .equiv OC4IP2,  0x000A
        .equiv T4IP0,   0x000C
        .equiv T4IP1,   0x000D
        .equiv T4IP2,   0x000E


;----- IPC7 Bits -----------------------------------------------------
        .equiv T5IP0,   0x0000
        .equiv T5IP1,   0x0001
        .equiv T5IP2,   0x0002
        .equiv INT2IP0, 0x0004
        .equiv INT2IP1, 0x0005
        .equiv INT2IP2, 0x0006
        .equiv U2RXIP0, 0x0008
        .equiv U2RXIP1, 0x0009
        .equiv U2RXIP2, 0x000A
        .equiv U2TXIP0, 0x000C
        .equiv U2TXIP1, 0x000D
        .equiv U2TXIP2, 0x000E


;----- IPC8 Bits -----------------------------------------------------
        .equiv SPF2IP0, 0x0000
        .equiv SPF2IP1, 0x0001
        .equiv SPF2IP2, 0x0002
        .equiv SPI2IP0, 0x0004
        .equiv SPI2IP1, 0x0005
        .equiv SPI2IP2, 0x0006


;----- IPC9 Bits -----------------------------------------------------
        .equiv DMA3IP0, 0x0000
        .equiv DMA3IP1, 0x0001
        .equiv DMA3IP2, 0x0002
        .equiv IC3IP0,  0x0004
        .equiv IC3IP1,  0x0005
        .equiv IC3IP2,  0x0006
        .equiv IC4IP0,  0x0008
        .equiv IC4IP1,  0x0009
        .equiv IC4IP2,  0x000A
        .equiv IC5IP0,  0x000C
        .equiv IC5IP1,  0x000D
        .equiv IC5IP2,  0x000E


;----- IPC10 Bits -----------------------------------------------------
        .equiv IC6IP0,  0x0000
        .equiv IC6IP1,  0x0001
        .equiv IC6IP2,  0x0002
        .equiv OC5IP0,  0x0004
        .equiv OC5IP1,  0x0005
        .equiv OC5IP2,  0x0006
        .equiv OC6IP0,  0x0008
        .equiv OC6IP1,  0x0009
        .equiv OC6IP2,  0x000A
        .equiv OC7IP0,  0x000C
        .equiv OC7IP1,  0x000D
        .equiv OC7IP2,  0x000E


;----- IPC11 Bits -----------------------------------------------------
        .equiv OC8IP0,  0x0000
        .equiv OC8IP1,  0x0001
        .equiv OC8IP2,  0x0002
        .equiv PMPIP0,  0x0004
        .equiv PMPIP1,  0x0005
        .equiv PMPIP2,  0x0006
        .equiv DMA4IP0, 0x0008
        .equiv DMA4IP1, 0x0009
        .equiv DMA4IP2, 0x000A


;----- IPC12 Bits -----------------------------------------------------
        .equiv SI2C2IP0, 0x0004
        .equiv SI2C2IP1, 0x0005
        .equiv SI2C2IP2, 0x0006
        .equiv MI2C2IP0, 0x0008
        .equiv MI2C2IP1, 0x0009
        .equiv MI2C2IP2, 0x000A

        .equiv SI2C2P0, 0x0004
        .equiv SI2C2P1, 0x0005
        .equiv SI2C2P2, 0x0006
        .equiv MI2C2P0, 0x0008
        .equiv MI2C2P1, 0x0009
        .equiv MI2C2P2, 0x000A



;----- IPC13 Bits -----------------------------------------------------
        .equiv INT3IP0, 0x0004
        .equiv INT3IP1, 0x0005
        .equiv INT3IP2, 0x0006
        .equiv INT4IP0, 0x0008
        .equiv INT4IP1, 0x0009
        .equiv INT4IP2, 0x000A


;----- IPC15 Bits -----------------------------------------------------
        .equiv DMA5IP0, 0x0004
        .equiv DMA5IP1, 0x0005
        .equiv DMA5IP2, 0x0006
        .equiv RTCIP0,  0x0008
        .equiv RTCIP1,  0x0009
        .equiv RTCIP2,  0x000A


;----- IPC16 Bits -----------------------------------------------------
        .equiv U1ERIP0, 0x0004
        .equiv U1ERIP1, 0x0005
        .equiv U1ERIP2, 0x0006
        .equiv U2ERIP0, 0x0008
        .equiv U2ERIP1, 0x0009
        .equiv U2ERIP2, 0x000A
        .equiv CRCIP0,  0x000C
        .equiv CRCIP1,  0x000D
        .equiv CRCIP2,  0x000E


;----- IPC18 Bits -----------------------------------------------------
        .equiv LVDIP0,  0x0000
        .equiv LVDIP1,  0x0001
        .equiv LVDIP2,  0x0002

        .equiv HLVDIP0, 0x0000
        .equiv HLVDIP1, 0x0001
        .equiv HLVDIP2, 0x0002



;----- IPC19 Bits -----------------------------------------------------
        .equiv CTMUIP0, 0x0004
        .equiv CTMUIP1, 0x0005
        .equiv CTMUIP2, 0x0006
        .equiv DAC1IP0, 0x0008
        .equiv DAC1IP1, 0x0009
        .equiv DAC1IP2, 0x000A
        .equiv DAC2IP0, 0x000C
        .equiv DAC2IP1, 0x000D
        .equiv DAC2IP2, 0x000E


;----- IPC20 Bits -----------------------------------------------------
        .equiv U3ERIP0, 0x0004
        .equiv U3ERIP1, 0x0005
        .equiv U3ERIP2, 0x0006
        .equiv U3RXIP0, 0x0008
        .equiv U3RXIP1, 0x0009
        .equiv U3RXIP2, 0x000A
        .equiv U3TXIP0, 0x000C
        .equiv U3TXIP1, 0x000D
        .equiv U3TXIP2, 0x000E


;----- IPC21 Bits -----------------------------------------------------
        .equiv USB1IP0, 0x0008
        .equiv USB1IP1, 0x0009
        .equiv USB1IP2, 0x000A
        .equiv U4ERIP0, 0x000C
        .equiv U4ERIP1, 0x000D
        .equiv U4ERIP2, 0x000E


;----- IPC22 Bits -----------------------------------------------------
        .equiv U4RXIP0, 0x0000
        .equiv U4RXIP1, 0x0001
        .equiv U4RXIP2, 0x0002
        .equiv U4TXIP0, 0x0004
        .equiv U4TXIP1, 0x0005
        .equiv U4TXIP2, 0x0006


;----- IPC23 Bits -----------------------------------------------------
        .equiv OC9IP0,  0x0000
        .equiv OC9IP1,  0x0001
        .equiv OC9IP2,  0x0002
        .equiv IC9IP0,  0x0004
        .equiv IC9IP1,  0x0005
        .equiv IC9IP2,  0x0006


;----- IPC25 Bits -----------------------------------------------------
        .equiv LCDIP0,  0x0000
        .equiv LCDIP1,  0x0001
        .equiv LCDIP2,  0x0002
        .equiv AMP1IP0, 0x000C
        .equiv AMP1IP1, 0x000D
        .equiv AMP1IP2, 0x000E


;----- IPC26 Bits -----------------------------------------------------
        .equiv AMP2IP0, 0x0000
        .equiv AMP2IP1, 0x0001
        .equiv AMP2IP2, 0x0002
        .equiv SDA1IP0, 0x0004
        .equiv SDA1IP1, 0x0005
        .equiv SDA1IP2, 0x0006
        .equiv FSTIP0,  0x0008
        .equiv FSTIP1,  0x0009
        .equiv FSTIP2,  0x000A


;----- IPC29 Bits -----------------------------------------------------
        .equiv JTAGIP0, 0x0004
        .equiv JTAGIP1, 0x0005
        .equiv JTAGIP2, 0x0006


;----- INTTREG Bits -----------------------------------------------------
        .equiv VHOLD,   0x000D
        .equiv CPUIRQ,  0x000F

        .equiv VECNUM0, 0x0000
        .equiv VECNUM1, 0x0001
        .equiv VECNUM2, 0x0002
        .equiv VECNUM3, 0x0003
        .equiv VECNUM4, 0x0004
        .equiv VECNUM5, 0x0005
        .equiv VECNUM6, 0x0006
        .equiv ILR0,    0x0008
        .equiv ILR1,    0x0009
        .equiv ILR2,    0x000A
        .equiv ILR3,    0x000B


;----- T1CON Bits -----------------------------------------------------
        .equiv TCS,     0x0001
        .equiv TSYNC,   0x0002
        .equiv TGATE,   0x0006
        .equiv TSIDL,   0x000D
        .equiv TON,     0x000F

        .equiv TCKPS0,  0x0004
        .equiv TCKPS1,  0x0005
        .equiv T1ECS0,  0x0008
        .equiv T1ECS1,  0x0009


        .equiv TECS0,   0x0008
        .equiv TECS1,   0x0009


        .equiv TIECS0,  0x0008
        .equiv TIECS1,  0x0009


;----- T2CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
        .equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005
       ;.equiv TECS0,   0x0008
       ;.equiv TECS1,   0x0009


       ;.equiv TIECS0,  0x0008
       ;.equiv TIECS1,  0x0009

        .equiv T45,     0x0003


;----- T3CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005
       ;.equiv TECS0,   0x0008
       ;.equiv TECS1,   0x0009


       ;.equiv TIECS0,  0x0008
       ;.equiv TIECS1,  0x0009


;----- T4CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005
       ;.equiv TECS0,   0x0008
       ;.equiv TECS1,   0x0009


       ;.equiv TIECS0,  0x0008
       ;.equiv TIECS1,  0x0009

       ;.equiv T45,     0x0003


;----- T5CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005
       ;.equiv TECS0,   0x0008
       ;.equiv TECS1,   0x0009


       ;.equiv TIECS0,  0x0008
       ;.equiv TIECS1,  0x0009


;----- IC1CON1 Bits -----------------------------------------------------
        .equiv ICBNE,   0x0003
        .equiv ICOV,    0x0004
        .equiv ICSIDL,  0x000D

        .equiv ICM0,    0x0000
        .equiv ICM1,    0x0001
        .equiv ICM2,    0x0002
        .equiv ICI0,    0x0005
        .equiv ICI1,    0x0006
        .equiv ICTSEL0, 0x000A
        .equiv ICTSEL1, 0x000B
        .equiv ICTSEL2, 0x000C


;----- IC1CON2 Bits -----------------------------------------------------
        .equiv TRIGSTAT, 0x0006
        .equiv ICTRIG,  0x0007
        .equiv IC32,    0x0008

        .equiv SYNCSEL0, 0x0000
        .equiv SYNCSEL1, 0x0001
        .equiv SYNCSEL2, 0x0002
        .equiv SYNCSEL3, 0x0003
        .equiv SYNCSEL4, 0x0004


;----- IC2CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC2CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC3CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC3CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC4CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC4CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC5CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC5CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC6CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC6CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC7CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC7CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC8CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC8CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC9CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC9CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- OC1CON1 Bits -----------------------------------------------------
        .equiv TRIGMODE, 0x0003
        .equiv OCFLTA,  0x0004
        .equiv OCFLTB,  0x0005
        .equiv OCFLTC,  0x0006
        .equiv ENFLTA,  0x0007
        .equiv ENFLTB,  0x0008
        .equiv ENFLTC,  0x0009
        .equiv OCSIDL,  0x000D

        .equiv OCM0,    0x0000
        .equiv OCM1,    0x0001
        .equiv OCM2,    0x0002
        .equiv OCTSEL0, 0x000A
        .equiv OCTSEL1, 0x000B
        .equiv OCTSEL2, 0x000C

        .equiv OCFLT0,  0x0004
        .equiv OCFLT1,  0x0005
        .equiv OCFLT2,  0x0006
        .equiv ENFLT0,  0x0007
        .equiv ENFLT1,  0x0008
        .equiv ENFLT2,  0x0009


;----- OC1CON2 Bits -----------------------------------------------------
        .equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
        .equiv OCTRIG,  0x0007
        .equiv OC32,    0x0008
        .equiv OCINV,   0x000C
        .equiv FLTTRIEN, 0x000D
        .equiv FLTOUT,  0x000E
        .equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
        .equiv DCB0,    0x0009
        .equiv DCB1,    0x000A
        .equiv FLTMODE, 0x000E


;----- OC2CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC2CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000E


;----- OC3CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC3CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000E


;----- OC4CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC4CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000E


;----- OC5CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC5CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000E


;----- OC6CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC6CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000E


;----- OC7CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC7CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000E


;----- OC8CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC8CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000E


;----- OC9CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC9CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DCB0,    0x0009
       ;.equiv DCB1,    0x000A
       ;.equiv FLTMODE, 0x000E


;----- I2C1CON Bits -----------------------------------------------------
        .equiv SEN,     0x0000
        .equiv RSEN,    0x0001
        .equiv PEN,     0x0002
        .equiv RCEN,    0x0003
        .equiv ACKEN,   0x0004
        .equiv ACKDT,   0x0005
        .equiv STREN,   0x0006
        .equiv GCEN,    0x0007
        .equiv SMEN,    0x0008
        .equiv DISSLW,  0x0009
        .equiv A10M,    0x000A
        .equiv IPMIEN,  0x000B
        .equiv SCLREL,  0x000C
        .equiv I2CSIDL, 0x000D
        .equiv I2CEN,   0x000F


;----- I2C1STAT Bits -----------------------------------------------------
        .equiv TBF,     0x0000
        .equiv RBF,     0x0001
        .equiv R_NOT_W, 0x0002
        .equiv S,       0x0003
        .equiv P,       0x0004
        .equiv D_NOT_A, 0x0005
        .equiv I2COV,   0x0006
        .equiv IWCOL,   0x0007
        .equiv ADD10,   0x0008
        .equiv GCSTAT,  0x0009
        .equiv BCL,     0x000A
        .equiv TRSTAT,  0x000E
        .equiv ACKSTAT, 0x000F

        .equiv R_W,     0x0002
        .equiv D_A,     0x0005

        .equiv DAC,     0x0005


;----- I2C2CON Bits -----------------------------------------------------
       ;.equiv SEN,     0x0000
       ;.equiv RSEN,    0x0001
       ;.equiv PEN,     0x0002
       ;.equiv RCEN,    0x0003
       ;.equiv ACKEN,   0x0004
       ;.equiv ACKDT,   0x0005
       ;.equiv STREN,   0x0006
       ;.equiv GCEN,    0x0007
       ;.equiv SMEN,    0x0008
       ;.equiv DISSLW,  0x0009
       ;.equiv A10M,    0x000A
       ;.equiv IPMIEN,  0x000B
       ;.equiv SCLREL,  0x000C
       ;.equiv I2CSIDL, 0x000D
       ;.equiv I2CEN,   0x000F


;----- I2C2STAT Bits -----------------------------------------------------
       ;.equiv TBF,     0x0000
       ;.equiv RBF,     0x0001
       ;.equiv R_NOT_W, 0x0002
       ;.equiv S,       0x0003
       ;.equiv P,       0x0004
       ;.equiv D_NOT_A, 0x0005
       ;.equiv I2COV,   0x0006
       ;.equiv IWCOL,   0x0007
       ;.equiv ADD10,   0x0008
       ;.equiv GCSTAT,  0x0009
       ;.equiv BCL,     0x000A
       ;.equiv TRSTAT,  0x000E
       ;.equiv ACKSTAT, 0x000F

       ;.equiv R_W,     0x0002
       ;.equiv D_A,     0x0005

       ;.equiv DAC,     0x0005


;----- U1MODE Bits -----------------------------------------------------
        .equiv STSEL,   0x0000
        .equiv BRGH,    0x0003
        .equiv URXINV,  0x0004
        .equiv ABAUD,   0x0005
        .equiv LPBACK,  0x0006
        .equiv WAKE,    0x0007
        .equiv RTSMD,   0x000B
        .equiv IREN,    0x000C
        .equiv USIDL,   0x000D
        .equiv UARTEN,  0x000F

        .equiv PDSEL0,  0x0001
        .equiv PDSEL1,  0x0002
        .equiv RXINV,   0x0004
        .equiv UEN0,    0x0008
        .equiv UEN1,    0x0009


;----- U1STA Bits -----------------------------------------------------
        .equiv URXDA,   0x0000
        .equiv OERR,    0x0001
        .equiv FERR,    0x0002
        .equiv PERR,    0x0003
        .equiv RIDLE,   0x0004
        .equiv ADDEN,   0x0005
        .equiv TRMT,    0x0008
        .equiv UTXBF,   0x0009
        .equiv UTXEN,   0x000A
        .equiv UTXBRK,  0x000B
        .equiv UTXISEL0, 0x000D
        .equiv UTXINV,  0x000E
        .equiv UTXISEL1, 0x000F

        .equiv URXISEL0, 0x0006
        .equiv URXISEL1, 0x0007
        .equiv TXINV,   0x000E


;----- U2MODE Bits -----------------------------------------------------
       ;.equiv STSEL,   0x0000
       ;.equiv BRGH,    0x0003
       ;.equiv URXINV,  0x0004
       ;.equiv ABAUD,   0x0005
       ;.equiv LPBACK,  0x0006
       ;.equiv WAKE,    0x0007
       ;.equiv RTSMD,   0x000B
       ;.equiv IREN,    0x000C
       ;.equiv USIDL,   0x000D
       ;.equiv UARTEN,  0x000F

       ;.equiv PDSEL0,  0x0001
       ;.equiv PDSEL1,  0x0002
       ;.equiv RXINV,   0x0004
       ;.equiv UEN0,    0x0008
       ;.equiv UEN1,    0x0009


;----- U2STA Bits -----------------------------------------------------
       ;.equiv URXDA,   0x0000
       ;.equiv OERR,    0x0001
       ;.equiv FERR,    0x0002
       ;.equiv PERR,    0x0003
       ;.equiv RIDLE,   0x0004
       ;.equiv ADDEN,   0x0005
       ;.equiv TRMT,    0x0008
       ;.equiv UTXBF,   0x0009
       ;.equiv UTXEN,   0x000A
       ;.equiv UTXBRK,  0x000B
       ;.equiv UTXISEL0, 0x000D
       ;.equiv UTXINV,  0x000E
       ;.equiv UTXISEL1, 0x000F

       ;.equiv URXISEL0, 0x0006
       ;.equiv URXISEL1, 0x0007
       ;.equiv TXINV,   0x000E


;----- SPI1STAT Bits -----------------------------------------------------
        .equiv SPIRBF,  0x0000
        .equiv SPITBF,  0x0001
        .equiv SRXMPT,  0x0005
        .equiv SPIROV,  0x0006
        .equiv SRMPT,   0x0007
        .equiv SPISIDL, 0x000D
        .equiv SPIEN,   0x000F

        .equiv SISEL0,  0x0002
        .equiv SISEL1,  0x0003
        .equiv SISEL2,  0x0004
        .equiv SPIBEC0, 0x0008
        .equiv SPIBEC1, 0x0009
        .equiv SPIBEC2, 0x000A


;----- SPI1CON1 Bits -----------------------------------------------------
        .equiv MSTEN,   0x0005
        .equiv CKP,     0x0006
        .equiv SSEN,    0x0007
        .equiv CKE,     0x0008
        .equiv SMP,     0x0009
        .equiv MODE16,  0x000A
        .equiv DISSDO,  0x000B
        .equiv DISSCK,  0x000C

        .equiv PPRE0,   0x0000
        .equiv PPRE1,   0x0001
        .equiv SPRE0,   0x0002
        .equiv SPRE1,   0x0003
        .equiv SPRE2,   0x0004


;----- SPI1CON2 Bits -----------------------------------------------------
        .equiv SPIBEN,  0x0000
        .equiv SPIFE,   0x0001
        .equiv SPIFPOL, 0x000D
        .equiv SPIFSD,  0x000E
        .equiv FRMEN,   0x000F

        .equiv FRMDLY,  0x0001
        .equiv FRMPOL,  0x000D


;----- AMP1CON Bits -----------------------------------------------------
        .equiv AMPOE,   0x0006
        .equiv SPDSEL,  0x0007
        .equiv CMPSEL,  0x0008
        .equiv CMOUT,   0x0009
        .equiv AMPSLP,  0x000C
        .equiv AMPSIDL, 0x000D
        .equiv AMPEN,   0x000F

        .equiv PINSEL0, 0x0000
        .equiv PINSEL1, 0x0001
        .equiv PINSEL2, 0x0002
        .equiv NINSEL0, 0x0003
        .equiv NINSEL1, 0x0004
        .equiv NINSEL2, 0x0005
        .equiv INTPOL0, 0x000A
        .equiv INTPOL1, 0x000B


;----- AMP2CON Bits -----------------------------------------------------
       ;.equiv AMPOE,   0x0006
       ;.equiv SPDSEL,  0x0007
       ;.equiv CMPSEL,  0x0008
       ;.equiv CMOUT,   0x0009
       ;.equiv AMPSLP,  0x000C
       ;.equiv AMPSIDL, 0x000D
       ;.equiv AMPEN,   0x000F

       ;.equiv PINSEL0, 0x0000
       ;.equiv PINSEL1, 0x0001
       ;.equiv PINSEL2, 0x0002
       ;.equiv NINSEL0, 0x0003
       ;.equiv NINSEL1, 0x0004
       ;.equiv NINSEL2, 0x0005
       ;.equiv INTPOL0, 0x000A
       ;.equiv INTPOL1, 0x000B


;----- U3MODE Bits -----------------------------------------------------
       ;.equiv STSEL,   0x0000
       ;.equiv BRGH,    0x0003
       ;.equiv URXINV,  0x0004
       ;.equiv ABAUD,   0x0005
       ;.equiv LPBACK,  0x0006
       ;.equiv WAKE,    0x0007
       ;.equiv RTSMD,   0x000B
       ;.equiv IREN,    0x000C
       ;.equiv USIDL,   0x000D
       ;.equiv UARTEN,  0x000F

       ;.equiv PDSEL0,  0x0001
       ;.equiv PDSEL1,  0x0002
       ;.equiv RXINV,   0x0004
       ;.equiv UEN0,    0x0008
       ;.equiv UEN1,    0x0009


;----- U3STA Bits -----------------------------------------------------
       ;.equiv URXDA,   0x0000
       ;.equiv OERR,    0x0001
       ;.equiv FERR,    0x0002
       ;.equiv PERR,    0x0003
       ;.equiv RIDLE,   0x0004
       ;.equiv ADDEN,   0x0005
       ;.equiv TRMT,    0x0008
       ;.equiv UTXBF,   0x0009
       ;.equiv UTXEN,   0x000A
       ;.equiv UTXBRK,  0x000B
       ;.equiv UTXISEL0, 0x000D
       ;.equiv UTXINV,  0x000E
       ;.equiv UTXISEL1, 0x000F

       ;.equiv URXISEL0, 0x0006
       ;.equiv URXISEL1, 0x0007
       ;.equiv TXINV,   0x000E


;----- SPI2STAT Bits -----------------------------------------------------
       ;.equiv SPIRBF,  0x0000
       ;.equiv SPITBF,  0x0001
       ;.equiv SRXMPT,  0x0005
       ;.equiv SPIROV,  0x0006
       ;.equiv SRMPT,   0x0007
       ;.equiv SPISIDL, 0x000D
       ;.equiv SPIEN,   0x000F

       ;.equiv SISEL0,  0x0002
       ;.equiv SISEL1,  0x0003
       ;.equiv SISEL2,  0x0004
       ;.equiv SPIBEC0, 0x0008
       ;.equiv SPIBEC1, 0x0009
       ;.equiv SPIBEC2, 0x000A


;----- SPI2CON1 Bits -----------------------------------------------------
       ;.equiv MSTEN,   0x0005
       ;.equiv CKP,     0x0006
       ;.equiv SSEN,    0x0007
       ;.equiv CKE,     0x0008
       ;.equiv SMP,     0x0009
       ;.equiv MODE16,  0x000A
       ;.equiv DISSDO,  0x000B
       ;.equiv DISSCK,  0x000C

       ;.equiv PPRE0,   0x0000
       ;.equiv PPRE1,   0x0001
       ;.equiv SPRE0,   0x0002
       ;.equiv SPRE1,   0x0003
       ;.equiv SPRE2,   0x0004


;----- SPI2CON2 Bits -----------------------------------------------------
       ;.equiv SPIBEN,  0x0000
       ;.equiv SPIFE,   0x0001
       ;.equiv SPIFPOL, 0x000D
       ;.equiv SPIFSD,  0x000E
       ;.equiv FRMEN,   0x000F

       ;.equiv FRMDLY,  0x0001
       ;.equiv FRMPOL,  0x000D


;----- U4MODE Bits -----------------------------------------------------
       ;.equiv STSEL,   0x0000
       ;.equiv BRGH,    0x0003
       ;.equiv URXINV,  0x0004
       ;.equiv ABAUD,   0x0005
       ;.equiv LPBACK,  0x0006
       ;.equiv WAKE,    0x0007
       ;.equiv RTSMD,   0x000B
       ;.equiv IREN,    0x000C
       ;.equiv USIDL,   0x000D
       ;.equiv UARTEN,  0x000F

       ;.equiv PDSEL0,  0x0001
       ;.equiv PDSEL1,  0x0002
       ;.equiv RXINV,   0x0004
       ;.equiv UEN0,    0x0008
       ;.equiv UEN1,    0x0009


;----- U4STA Bits -----------------------------------------------------
       ;.equiv URXDA,   0x0000
       ;.equiv OERR,    0x0001
       ;.equiv FERR,    0x0002
       ;.equiv PERR,    0x0003
       ;.equiv RIDLE,   0x0004
       ;.equiv ADDEN,   0x0005
       ;.equiv TRMT,    0x0008
       ;.equiv UTXBF,   0x0009
       ;.equiv UTXEN,   0x000A
       ;.equiv UTXBRK,  0x000B
       ;.equiv UTXISEL0, 0x000D
       ;.equiv UTXINV,  0x000E
       ;.equiv UTXISEL1, 0x000F

       ;.equiv URXISEL0, 0x0006
       ;.equiv URXISEL1, 0x0007
       ;.equiv TXINV,   0x000E


;----- TRISA Bits -----------------------------------------------------
        .equiv TRISA0,  0x0000
        .equiv TRISA1,  0x0001
        .equiv TRISA2,  0x0002
        .equiv TRISA3,  0x0003
        .equiv TRISA4,  0x0004
        .equiv TRISA5,  0x0005
        .equiv TRISA6,  0x0006
        .equiv TRISA7,  0x0007
        .equiv TRISA9,  0x0009
        .equiv TRISA10, 0x000A
        .equiv TRISA14, 0x000E
        .equiv TRISA15, 0x000F


;----- PORTA Bits -----------------------------------------------------
        .equiv RA0,     0x0000
        .equiv RA1,     0x0001
        .equiv RA2,     0x0002
        .equiv RA3,     0x0003
        .equiv RA4,     0x0004
        .equiv RA5,     0x0005
        .equiv RA6,     0x0006
        .equiv RA7,     0x0007
        .equiv RA9,     0x0009
        .equiv RA10,    0x000A
        .equiv RA14,    0x000E
        .equiv RA15,    0x000F


;----- LATA Bits -----------------------------------------------------
        .equiv LATA0,   0x0000
        .equiv LATA1,   0x0001
        .equiv LATA2,   0x0002
        .equiv LATA3,   0x0003
        .equiv LATA4,   0x0004
        .equiv LATA5,   0x0005
        .equiv LATA6,   0x0006
        .equiv LATA7,   0x0007
        .equiv LATA9,   0x0009
        .equiv LATA10,  0x000A
        .equiv LATA14,  0x000E
        .equiv LATA15,  0x000F


;----- ODCA Bits -----------------------------------------------------
        .equiv ODA0,    0x0000
        .equiv ODA1,    0x0001
        .equiv ODA2,    0x0002
        .equiv ODA3,    0x0003
        .equiv ODA4,    0x0004
        .equiv ODA5,    0x0005
        .equiv ODA6,    0x0006
        .equiv ODA7,    0x0007
        .equiv ODA9,    0x0009
        .equiv ODA10,   0x000A
        .equiv ODA14,   0x000E
        .equiv ODA15,   0x000F


;----- TRISB Bits -----------------------------------------------------
        .equiv TRISB0,  0x0000
        .equiv TRISB1,  0x0001
        .equiv TRISB2,  0x0002
        .equiv TRISB3,  0x0003
        .equiv TRISB4,  0x0004
        .equiv TRISB5,  0x0005
        .equiv TRISB6,  0x0006
        .equiv TRISB7,  0x0007
        .equiv TRISB12, 0x000C
        .equiv TRISB13, 0x000D
        .equiv TRISB14, 0x000E
        .equiv TRISB15, 0x000F


;----- PORTB Bits -----------------------------------------------------
        .equiv RB0,     0x0000
        .equiv RB1,     0x0001
        .equiv RB2,     0x0002
        .equiv RB3,     0x0003
        .equiv RB4,     0x0004
        .equiv RB5,     0x0005
        .equiv RB6,     0x0006
        .equiv RB7,     0x0007
        .equiv RB12,    0x000C
        .equiv RB13,    0x000D
        .equiv RB14,    0x000E
        .equiv RB15,    0x000F


;----- LATB Bits -----------------------------------------------------
        .equiv LATB0,   0x0000
        .equiv LATB1,   0x0001
        .equiv LATB2,   0x0002
        .equiv LATB3,   0x0003
        .equiv LATB4,   0x0004
        .equiv LATB5,   0x0005
        .equiv LATB6,   0x0006
        .equiv LATB7,   0x0007
        .equiv LATB12,  0x000C
        .equiv LATB13,  0x000D
        .equiv LATB14,  0x000E
        .equiv LATB15,  0x000F


;----- ODCB Bits -----------------------------------------------------
        .equiv ODB0,    0x0000
        .equiv ODB1,    0x0001
        .equiv ODB2,    0x0002
        .equiv ODB3,    0x0003
        .equiv ODB4,    0x0004
        .equiv ODB5,    0x0005
        .equiv ODB6,    0x0006
        .equiv ODB7,    0x0007
        .equiv ODB12,   0x000C
        .equiv ODB13,   0x000D
        .equiv ODB14,   0x000E
        .equiv ODB15,   0x000F


;----- TRISC Bits -----------------------------------------------------
        .equiv TRISC1,  0x0001
        .equiv TRISC2,  0x0002
        .equiv TRISC3,  0x0003
        .equiv TRISC4,  0x0004
        .equiv TRISC12, 0x000C
        .equiv TRISC13, 0x000D
        .equiv TRISC14, 0x000E
        .equiv TRISC15, 0x000F


;----- PORTC Bits -----------------------------------------------------
        .equiv RC1,     0x0001
        .equiv RC2,     0x0002
        .equiv RC3,     0x0003
        .equiv RC4,     0x0004
        .equiv RC12,    0x000C
        .equiv RC13,    0x000D
        .equiv RC14,    0x000E
        .equiv RC15,    0x000F


;----- LATC Bits -----------------------------------------------------
        .equiv LATC1,   0x0001
        .equiv LATC2,   0x0002
        .equiv LATC3,   0x0003
        .equiv LATC4,   0x0004
        .equiv LATC12,  0x000C
        .equiv LATC13,  0x000D
        .equiv LATC14,  0x000E
        .equiv LATC15,  0x000F


;----- ODCC Bits -----------------------------------------------------
        .equiv ODC1,    0x0001
        .equiv ODC2,    0x0002
        .equiv ODC3,    0x0003
        .equiv ODC4,    0x0004
        .equiv ODC12,   0x000C
        .equiv ODC13,   0x000D
        .equiv ODC14,   0x000E
        .equiv ODC15,   0x000F


;----- TRISD Bits -----------------------------------------------------
        .equiv TRISD0,  0x0000
        .equiv TRISD1,  0x0001
        .equiv TRISD2,  0x0002
        .equiv TRISD3,  0x0003
        .equiv TRISD4,  0x0004
        .equiv TRISD5,  0x0005
        .equiv TRISD6,  0x0006
        .equiv TRISD7,  0x0007
        .equiv TRISD8,  0x0008
        .equiv TRISD9,  0x0009
        .equiv TRISD10, 0x000A
        .equiv TRISD11, 0x000B
        .equiv TRISD12, 0x000C
        .equiv TRISD13, 0x000D
        .equiv TRISD14, 0x000E
        .equiv TRISD15, 0x000F


;----- PORTD Bits -----------------------------------------------------
        .equiv RD0,     0x0000
        .equiv RD1,     0x0001
        .equiv RD2,     0x0002
        .equiv RD3,     0x0003
        .equiv RD4,     0x0004
        .equiv RD5,     0x0005
        .equiv RD6,     0x0006
        .equiv RD7,     0x0007
        .equiv RD8,     0x0008
        .equiv RD9,     0x0009
        .equiv RD10,    0x000A
        .equiv RD11,    0x000B
        .equiv RD12,    0x000C
        .equiv RD13,    0x000D
        .equiv RD14,    0x000E
        .equiv RD15,    0x000F


;----- LATD Bits -----------------------------------------------------
        .equiv LATD0,   0x0000
        .equiv LATD1,   0x0001
        .equiv LATD2,   0x0002
        .equiv LATD3,   0x0003
        .equiv LATD4,   0x0004
        .equiv LATD5,   0x0005
        .equiv LATD6,   0x0006
        .equiv LATD7,   0x0007
        .equiv LATD8,   0x0008
        .equiv LATD9,   0x0009
        .equiv LATD10,  0x000A
        .equiv LATD11,  0x000B
        .equiv LATD12,  0x000C
        .equiv LATD13,  0x000D
        .equiv LATD14,  0x000E
        .equiv LATD15,  0x000F


;----- ODCD Bits -----------------------------------------------------
        .equiv ODD0,    0x0000
        .equiv ODD1,    0x0001
        .equiv ODD2,    0x0002
        .equiv ODD3,    0x0003
        .equiv ODD4,    0x0004
        .equiv ODD5,    0x0005
        .equiv ODD6,    0x0006
        .equiv ODD7,    0x0007
        .equiv ODD8,    0x0008
        .equiv ODD9,    0x0009
        .equiv ODD10,   0x000A
        .equiv ODD11,   0x000B
        .equiv ODD12,   0x000C
        .equiv ODD13,   0x000D
        .equiv ODD14,   0x000E
        .equiv ODD15,   0x000F


;----- TRISE Bits -----------------------------------------------------
        .equiv TRISE0,  0x0000
        .equiv TRISE1,  0x0001
        .equiv TRISE2,  0x0002
        .equiv TRISE3,  0x0003
        .equiv TRISE4,  0x0004
        .equiv TRISE5,  0x0005
        .equiv TRISE6,  0x0006
        .equiv TRISE7,  0x0007
        .equiv TRISE8,  0x0008
        .equiv TRISE9,  0x0009


;----- PORTE Bits -----------------------------------------------------
        .equiv RE0,     0x0000
        .equiv RE1,     0x0001
        .equiv RE2,     0x0002
        .equiv RE3,     0x0003
        .equiv RE4,     0x0004
        .equiv RE5,     0x0005
        .equiv RE6,     0x0006
        .equiv RE7,     0x0007
        .equiv RE8,     0x0008
        .equiv RE9,     0x0009


;----- LATE Bits -----------------------------------------------------
        .equiv LATE0,   0x0000
        .equiv LATE1,   0x0001
        .equiv LATE2,   0x0002
        .equiv LATE3,   0x0003
        .equiv LATE4,   0x0004
        .equiv LATE5,   0x0005
        .equiv LATE6,   0x0006
        .equiv LATE7,   0x0007
        .equiv LATE8,   0x0008
        .equiv LATE9,   0x0009


;----- ODCE Bits -----------------------------------------------------
        .equiv ODE0,    0x0000
        .equiv ODE1,    0x0001
        .equiv ODE2,    0x0002
        .equiv ODE3,    0x0003
        .equiv ODE4,    0x0004
        .equiv ODE5,    0x0005
        .equiv ODE6,    0x0006
        .equiv ODE7,    0x0007
        .equiv ODE8,    0x0008
        .equiv ODE9,    0x0009


;----- TRISF Bits -----------------------------------------------------
        .equiv TRISF0,  0x0000
        .equiv TRISF1,  0x0001
        .equiv TRISF2,  0x0002
        .equiv TRISF3,  0x0003
        .equiv TRISF4,  0x0004
        .equiv TRISF5,  0x0005
        .equiv TRISF7,  0x0007
        .equiv TRISF8,  0x0008
        .equiv TRISF12, 0x000C
        .equiv TRISF13, 0x000D


;----- PORTF Bits -----------------------------------------------------
        .equiv RF0,     0x0000
        .equiv RF1,     0x0001
        .equiv RF2,     0x0002
        .equiv RF3,     0x0003
        .equiv RF4,     0x0004
        .equiv RF5,     0x0005
        .equiv RF7,     0x0007
        .equiv RF8,     0x0008
        .equiv RF12,    0x000C
        .equiv RF13,    0x000D


;----- LATF Bits -----------------------------------------------------
        .equiv LATF0,   0x0000
        .equiv LATF1,   0x0001
        .equiv LATF2,   0x0002
        .equiv LATF3,   0x0003
        .equiv LATF4,   0x0004
        .equiv LATF5,   0x0005
        .equiv LATF7,   0x0007
        .equiv LATF8,   0x0008
        .equiv LATF12,  0x000C
        .equiv LATF13,  0x000D


;----- ODCF Bits -----------------------------------------------------
        .equiv ODF0,    0x0000
        .equiv ODF1,    0x0001
        .equiv ODF2,    0x0002
        .equiv ODF3,    0x0003
        .equiv ODF4,    0x0004
        .equiv ODF5,    0x0005
        .equiv ODF7,    0x0007
        .equiv ODF8,    0x0008
        .equiv ODF12,   0x000C
        .equiv ODF13,   0x000D


;----- TRISG Bits -----------------------------------------------------
        .equiv TRISG0,  0x0000
        .equiv TRISG1,  0x0001
        .equiv TRISG2,  0x0002
        .equiv TRISG3,  0x0003
        .equiv TRISG6,  0x0006
        .equiv TRISG7,  0x0007
        .equiv TRISG8,  0x0008
        .equiv TRISG9,  0x0009
        .equiv TRISG12, 0x000C
        .equiv TRISG13, 0x000D
        .equiv TRISG14, 0x000E
        .equiv TRISG15, 0x000F


;----- PORTG Bits -----------------------------------------------------
        .equiv RG0,     0x0000
        .equiv RG1,     0x0001
        .equiv RG2,     0x0002
        .equiv RG3,     0x0003
        .equiv RG6,     0x0006
        .equiv RG7,     0x0007
        .equiv RG8,     0x0008
        .equiv RG9,     0x0009
        .equiv RG12,    0x000C
        .equiv RG13,    0x000D
        .equiv RG14,    0x000E
        .equiv RG15,    0x000F


;----- LATG Bits -----------------------------------------------------
        .equiv LATG0,   0x0000
        .equiv LATG1,   0x0001
        .equiv LATG2,   0x0002
        .equiv LATG3,   0x0003
        .equiv LATG6,   0x0006
        .equiv LATG7,   0x0007
        .equiv LATG8,   0x0008
        .equiv LATG9,   0x0009
        .equiv LATG12,  0x000C
        .equiv LATG13,  0x000D
        .equiv LATG14,  0x000E
        .equiv LATG15,  0x000F


;----- ODCG Bits -----------------------------------------------------
        .equiv ODG0,    0x0000
        .equiv ODG1,    0x0001
        .equiv ODG2,    0x0002
        .equiv ODG3,    0x0003
        .equiv ODG6,    0x0006
        .equiv ODG7,    0x0007
        .equiv ODG8,    0x0008
        .equiv ODG9,    0x0009
        .equiv ODG12,   0x000C
        .equiv ODG13,   0x000D
        .equiv ODG14,   0x000E
        .equiv ODG15,   0x000F


;----- PADCFG1 Bits -----------------------------------------------------
        .equiv PMPTTL,  0x0000


;----- ADTBL0 Bits -----------------------------------------------------
        .equiv DIFF,    0x000E
        .equiv UCTMU,   0x000F

        .equiv ADCH0,   0x0000
        .equiv ADCH1,   0x0001
        .equiv ADCH2,   0x0002
        .equiv ADCH3,   0x0003
        .equiv ADCH4,   0x0004
        .equiv ADCH5,   0x0005
        .equiv ADCH6,   0x0006


;----- ADTBL1 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL2 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL3 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL4 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL5 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL6 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL7 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL8 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL9 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL10 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL11 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL12 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL13 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL14 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL15 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL16 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL17 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL18 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL19 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL20 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL21 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL22 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL23 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL24 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL25 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL26 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL27 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL28 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL29 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL30 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- ADTBL31 Bits -----------------------------------------------------
       ;.equiv DIFF,    0x000E
       ;.equiv UCTMU,   0x000F

       ;.equiv ADCH0,   0x0000
       ;.equiv ADCH1,   0x0001
       ;.equiv ADCH2,   0x0002
       ;.equiv ADCH3,   0x0003
       ;.equiv ADCH4,   0x0004
       ;.equiv ADCH5,   0x0005
       ;.equiv ADCH6,   0x0006


;----- DMACON Bits -----------------------------------------------------
        .equiv PRSSEL,  0x0000
        .equiv DMAEN,   0x000F


;----- DMACH0 Bits -----------------------------------------------------
        .equiv CHEN,    0x0000
        .equiv SIZE,    0x0001
        .equiv CHREQ,   0x0008
        .equiv RELOAD,  0x0009
        .equiv NULLW,   0x000A

        .equiv TRMODE0, 0x0002
        .equiv TRMODE1, 0x0003
        .equiv DAMODE0, 0x0004
        .equiv DAMODE1, 0x0005
        .equiv SAMODE0, 0x0006
        .equiv SAMODE1, 0x0007


;----- DMAINT0 Bits -----------------------------------------------------
        .equiv HALFEN,  0x0000
        .equiv OVRUNIF, 0x0003
        .equiv HALFIF,  0x0004
        .equiv DONEIF,  0x0005
        .equiv LOWIF,   0x0006
        .equiv HIGHIF,  0x0007
        .equiv DBUFWF,  0x000F

        .equiv CHSEL0,  0x0008
        .equiv CHSEL1,  0x0009
        .equiv CHSEL2,  0x000A
        .equiv CHSEL3,  0x000B
        .equiv CHSEL4,  0x000C
        .equiv CHSEL5,  0x000D


;----- DMACH1 Bits -----------------------------------------------------
       ;.equiv CHEN,    0x0000
       ;.equiv SIZE,    0x0001
       ;.equiv CHREQ,   0x0008
       ;.equiv RELOAD,  0x0009
       ;.equiv NULLW,   0x000A

       ;.equiv TRMODE0, 0x0002
       ;.equiv TRMODE1, 0x0003
       ;.equiv DAMODE0, 0x0004
       ;.equiv DAMODE1, 0x0005
       ;.equiv SAMODE0, 0x0006
       ;.equiv SAMODE1, 0x0007


;----- DMAINT1 Bits -----------------------------------------------------
       ;.equiv HALFEN,  0x0000
       ;.equiv OVRUNIF, 0x0003
       ;.equiv HALFIF,  0x0004
       ;.equiv DONEIF,  0x0005
       ;.equiv LOWIF,   0x0006
       ;.equiv HIGHIF,  0x0007
       ;.equiv DBUFWF,  0x000F

       ;.equiv CHSEL0,  0x0008
       ;.equiv CHSEL1,  0x0009
       ;.equiv CHSEL2,  0x000A
       ;.equiv CHSEL3,  0x000B
       ;.equiv CHSEL4,  0x000C
       ;.equiv CHSEL5,  0x000D


;----- DMACH2 Bits -----------------------------------------------------
       ;.equiv CHEN,    0x0000
       ;.equiv SIZE,    0x0001
       ;.equiv CHREQ,   0x0008
       ;.equiv RELOAD,  0x0009
       ;.equiv NULLW,   0x000A

       ;.equiv TRMODE0, 0x0002
       ;.equiv TRMODE1, 0x0003
       ;.equiv DAMODE0, 0x0004
       ;.equiv DAMODE1, 0x0005
       ;.equiv SAMODE0, 0x0006
       ;.equiv SAMODE1, 0x0007


;----- DMAINT2 Bits -----------------------------------------------------
       ;.equiv HALFEN,  0x0000
       ;.equiv OVRUNIF, 0x0003
       ;.equiv HALFIF,  0x0004
       ;.equiv DONEIF,  0x0005
       ;.equiv LOWIF,   0x0006
       ;.equiv HIGHIF,  0x0007
       ;.equiv DBUFWF,  0x000F

       ;.equiv CHSEL0,  0x0008
       ;.equiv CHSEL1,  0x0009
       ;.equiv CHSEL2,  0x000A
       ;.equiv CHSEL3,  0x000B
       ;.equiv CHSEL4,  0x000C
       ;.equiv CHSEL5,  0x000D


;----- DMACH3 Bits -----------------------------------------------------
       ;.equiv CHEN,    0x0000
       ;.equiv SIZE,    0x0001
       ;.equiv CHREQ,   0x0008
       ;.equiv RELOAD,  0x0009
       ;.equiv NULLW,   0x000A

       ;.equiv TRMODE0, 0x0002
       ;.equiv TRMODE1, 0x0003
       ;.equiv DAMODE0, 0x0004
       ;.equiv DAMODE1, 0x0005
       ;.equiv SAMODE0, 0x0006
       ;.equiv SAMODE1, 0x0007


;----- DMAINT3 Bits -----------------------------------------------------
       ;.equiv HALFEN,  0x0000
       ;.equiv OVRUNIF, 0x0003
       ;.equiv HALFIF,  0x0004
       ;.equiv DONEIF,  0x0005
       ;.equiv LOWIF,   0x0006
       ;.equiv HIGHIF,  0x0007
       ;.equiv DBUFWF,  0x000F

       ;.equiv CHSEL0,  0x0008
       ;.equiv CHSEL1,  0x0009
       ;.equiv CHSEL2,  0x000A
       ;.equiv CHSEL3,  0x000B
       ;.equiv CHSEL4,  0x000C
       ;.equiv CHSEL5,  0x000D


;----- DMACH4 Bits -----------------------------------------------------
       ;.equiv CHEN,    0x0000
       ;.equiv SIZE,    0x0001
       ;.equiv CHREQ,   0x0008
       ;.equiv RELOAD,  0x0009
       ;.equiv NULLW,   0x000A

       ;.equiv TRMODE0, 0x0002
       ;.equiv TRMODE1, 0x0003
       ;.equiv DAMODE0, 0x0004
       ;.equiv DAMODE1, 0x0005
       ;.equiv SAMODE0, 0x0006
       ;.equiv SAMODE1, 0x0007


;----- DMAINT4 Bits -----------------------------------------------------
       ;.equiv HALFEN,  0x0000
       ;.equiv OVRUNIF, 0x0003
       ;.equiv HALFIF,  0x0004
       ;.equiv DONEIF,  0x0005
       ;.equiv LOWIF,   0x0006
       ;.equiv HIGHIF,  0x0007
       ;.equiv DBUFWF,  0x000F

       ;.equiv CHSEL0,  0x0008
       ;.equiv CHSEL1,  0x0009
       ;.equiv CHSEL2,  0x000A
       ;.equiv CHSEL3,  0x000B
       ;.equiv CHSEL4,  0x000C
       ;.equiv CHSEL5,  0x000D


;----- DMACH5 Bits -----------------------------------------------------
       ;.equiv CHEN,    0x0000
       ;.equiv SIZE,    0x0001
       ;.equiv CHREQ,   0x0008
       ;.equiv RELOAD,  0x0009
       ;.equiv NULLW,   0x000A

       ;.equiv TRMODE0, 0x0002
       ;.equiv TRMODE1, 0x0003
       ;.equiv DAMODE0, 0x0004
       ;.equiv DAMODE1, 0x0005
       ;.equiv SAMODE0, 0x0006
       ;.equiv SAMODE1, 0x0007


;----- DMAINT5 Bits -----------------------------------------------------
       ;.equiv HALFEN,  0x0000
       ;.equiv OVRUNIF, 0x0003
       ;.equiv HALFIF,  0x0004
       ;.equiv DONEIF,  0x0005
       ;.equiv LOWIF,   0x0006
       ;.equiv HIGHIF,  0x0007
       ;.equiv DBUFWF,  0x000F

       ;.equiv CHSEL0,  0x0008
       ;.equiv CHSEL1,  0x0009
       ;.equiv CHSEL2,  0x000A
       ;.equiv CHSEL3,  0x000B
       ;.equiv CHSEL4,  0x000C
       ;.equiv CHSEL5,  0x000D


;----- ADL3CONL Bits -----------------------------------------------------
        .equiv THSRC,   0x0007
        .equiv SLENCLR, 0x000D
        .equiv SAMP,    0x000E
        .equiv SLEN_ADL3CONL, 0x000F

        .equiv SLSIZE0, 0x0000
        .equiv SLSIZE1, 0x0001
        .equiv SLSIZE2, 0x0002
        .equiv SLSIZE3, 0x0003
        .equiv SLSIZE4, 0x0004
        .equiv SLSIZE5, 0x0005
        .equiv SLTSRC0, 0x0008
        .equiv SLTSRC1, 0x0009
        .equiv SLTSRC2, 0x000A
        .equiv SLTSRC3, 0x000B
        .equiv SLTSRC4, 0x000C


;----- ADL3CONH Bits -----------------------------------------------------
        .equiv MULCHEN, 0x0005
        .equiv CTMEN,   0x0007
        .equiv ASEN,    0x000F

        .equiv SAMC0,   0x0000
        .equiv SAMC1,   0x0001
        .equiv SAMC2,   0x0002
        .equiv SAMC3,   0x0003
        .equiv SAMC4,   0x0004
        .equiv CM0,     0x0008
        .equiv CM1,     0x0009
        .equiv CM2,     0x000A
        .equiv WM0,     0x000B
        .equiv WM1,     0x000C
        .equiv SLINT0,  0x000D
        .equiv SLINT1,  0x000E


;----- ADL3PTR Bits -----------------------------------------------------
        .equiv ADNEXT0, 0x0008
        .equiv ADNEXT1, 0x0009
        .equiv ADNEXT2, 0x000A
        .equiv ADNEXT3, 0x000B
        .equiv ADNEXT4, 0x000C
        .equiv ADNEXT5, 0x000D
        .equiv ADNEXT6, 0x000E


;----- ADL3STAT Bits -----------------------------------------------------
        .equiv ADLIF,   0x0005
        .equiv ADTDLY,  0x0007
        .equiv LBUSY,   0x000E
        .equiv ADTACT,  0x000F


;----- ADTH3L Bits -----------------------------------------------------
        .equiv TH0,     0x0000
        .equiv TH1,     0x0001
        .equiv TH2,     0x0002
        .equiv TH3,     0x0003
        .equiv TH4,     0x0004
        .equiv TH5,     0x0005
        .equiv TH6,     0x0006
        .equiv TH7,     0x0007
        .equiv TH8,     0x0008
        .equiv TH9,     0x0009
        .equiv TH10,    0x000A
        .equiv TH11,    0x000B
        .equiv TH12,    0x000C
        .equiv TH13,    0x000D
        .equiv TH14,    0x000E
        .equiv TH15,    0x000F


;----- ADTH3H Bits -----------------------------------------------------
       ;.equiv TH0,     0x0000
       ;.equiv TH1,     0x0001
       ;.equiv TH2,     0x0002
       ;.equiv TH3,     0x0003
       ;.equiv TH4,     0x0004
       ;.equiv TH5,     0x0005
       ;.equiv TH6,     0x0006
       ;.equiv TH7,     0x0007
       ;.equiv TH8,     0x0008
       ;.equiv TH9,     0x0009
       ;.equiv TH10,    0x000A
       ;.equiv TH11,    0x000B
       ;.equiv TH12,    0x000C
       ;.equiv TH13,    0x000D
       ;.equiv TH14,    0x000E
       ;.equiv TH15,    0x000F


;----- ADL3MSEL0 Bits -----------------------------------------------------
        .equiv MSEL15,  0x000F


;----- ADL3MSEL1 Bits -----------------------------------------------------
        .equiv MSEL16,  0x0000
        .equiv MSEL17,  0x0001
        .equiv MSEL18,  0x0002
        .equiv MSEL19,  0x0003
        .equiv MSEL20,  0x0004
        .equiv MSEL21,  0x0005
        .equiv MSEL22,  0x0006
        .equiv MSEL23,  0x0007
        .equiv MSEL24,  0x0008
        .equiv MSEL25,  0x0009
        .equiv MSEL26,  0x000A
        .equiv MSEL27,  0x000B
        .equiv MSEL28,  0x000C
        .equiv MSEL29,  0x000D
        .equiv MSEL30,  0x000E
        .equiv MSEL31,  0x000F


;----- ADL3MSEL2 Bits -----------------------------------------------------
        .equiv MSEL32,  0x0000
        .equiv MSEL33,  0x0001
        .equiv MSEL34,  0x0002
        .equiv MSEL35,  0x0003
        .equiv MSEL36,  0x0004
        .equiv MSEL37,  0x0005
        .equiv MSEL38,  0x0006
        .equiv MSEL39,  0x0007
        .equiv MSEL40,  0x0008
        .equiv MSEL41,  0x0009
        .equiv MSEL42,  0x000A
        .equiv MSEL43,  0x000B
        .equiv MSEL44,  0x000C
        .equiv MSEL45,  0x000D
        .equiv MSEL46,  0x000E
        .equiv MSEL47,  0x000F


;----- ADL3MSEL3 Bits -----------------------------------------------------
        .equiv MSEL48,  0x0000
        .equiv MSEL49,  0x0001


;----- DAC1CON Bits -----------------------------------------------------
        .equiv DACTRIG, 0x0008
        .equiv DACFM,   0x000B
        .equiv DACSLP,  0x000C
        .equiv DACSIDL, 0x000D
        .equiv DACEN,   0x000F

        .equiv REFSEL0, 0x0000
        .equiv REFSEL1, 0x0001
        .equiv DACTSEL0, 0x0002
        .equiv DACTSEL1, 0x0003
        .equiv DACTSEL2, 0x0004
        .equiv DACTSEL3, 0x0005
        .equiv DACTSEL4, 0x0006


;----- DAC2CON Bits -----------------------------------------------------
       ;.equiv DACTRIG, 0x0008
       ;.equiv DACFM,   0x000B
       ;.equiv DACSLP,  0x000C
       ;.equiv DACSIDL, 0x000D
       ;.equiv DACEN,   0x000F

       ;.equiv REFSEL0, 0x0000
       ;.equiv REFSEL1, 0x0001
       ;.equiv DACTSEL0, 0x0002
       ;.equiv DACTSEL1, 0x0003
       ;.equiv DACTSEL2, 0x0004
       ;.equiv DACTSEL3, 0x0005
       ;.equiv DACTSEL4, 0x0006


;----- U1OTGIR Bits -----------------------------------------------------
        .equiv VBUSVDIF, 0x0000
        .equiv SESENDIF, 0x0002
        .equiv SESVDIF, 0x0003
        .equiv ACTVIF,  0x0004
        .equiv LSTATEIF, 0x0005
        .equiv T1MSECIF, 0x0006
        .equiv IDIF,    0x0007


;----- U1OTGIE Bits -----------------------------------------------------
        .equiv VBUSVDIE, 0x0000
        .equiv SESENDIE, 0x0002
        .equiv SESVDIE, 0x0003
        .equiv ACTVIE,  0x0004
        .equiv LSTATEIE, 0x0005
        .equiv T1MSECIE, 0x0006
        .equiv IDIE,    0x0007


;----- U1OTGSTAT Bits -----------------------------------------------------
        .equiv VBUSVD,  0x0000
        .equiv SESEND,  0x0002
        .equiv SESVD,   0x0003
        .equiv LSTATE,  0x0005
        .equiv ID,      0x0007


;----- U1OTGCON Bits -----------------------------------------------------
        .equiv VBUSDIS, 0x0000
        .equiv VBUSCHG, 0x0001
        .equiv OTGEN,   0x0002
        .equiv DMPULDWN, 0x0004
        .equiv DPPULDWN, 0x0005
        .equiv DMPULUP, 0x0006
        .equiv DPPULUP, 0x0007


;----- U1PWRC Bits -----------------------------------------------------
        .equiv USBPWR,  0x0000
        .equiv USUSPND, 0x0001
        .equiv USLPGRD, 0x0004
        .equiv UACTPND, 0x0007

        .equiv USUSPEND, 0x0001


;----- U1IR Bits -----------------------------------------------------
        .equiv URSTIF,  0x0000
        .equiv UERRIF,  0x0001
        .equiv SOFIF,   0x0002
        .equiv TRNIF,   0x0003
        .equiv IDLEIF,  0x0004
        .equiv RESUMEIF, 0x0005
        .equiv ATTACHIF, 0x0006
        .equiv STALLIF, 0x0007

        .equiv DETACHIF, 0x0000


;----- U1IE Bits -----------------------------------------------------
        .equiv URSTIE,  0x0000
        .equiv UERRIE,  0x0001
        .equiv SOFIE,   0x0002
        .equiv TRNIE,   0x0003
        .equiv IDLEIE,  0x0004
        .equiv RESUMEIE, 0x0005
        .equiv ATTACHIE, 0x0006
        .equiv STALLIE, 0x0007

        .equiv DETACHIE, 0x0000


;----- U1EIR Bits -----------------------------------------------------
        .equiv PIDEF,   0x0000
        .equiv CRC5EF,  0x0001
        .equiv CRC16EF, 0x0002
        .equiv DFN8EF,  0x0003
        .equiv BTOEF,   0x0004
        .equiv DMAEF,   0x0005
        .equiv BTSEF,   0x0007

        .equiv EOFEF,   0x0001


;----- U1EIE Bits -----------------------------------------------------
        .equiv PIDEE,   0x0000
        .equiv CRC5EE,  0x0001
        .equiv CRC16EE, 0x0002
        .equiv DFN8EE,  0x0003
        .equiv BTOEE,   0x0004
        .equiv DMAEE,   0x0005
        .equiv BTSEE,   0x0007

        .equiv EOFEE,   0x0001


;----- U1STAT Bits -----------------------------------------------------
        .equiv PPBI,    0x0002
        .equiv DIR,     0x0003

        .equiv ENDPT0,  0x0004
        .equiv ENDPT1,  0x0005
        .equiv ENDPT2,  0x0006
        .equiv ENDPT3,  0x0007


;----- U1CON Bits -----------------------------------------------------
        .equiv USBEN,   0x0000
        .equiv PPBRST,  0x0001
        .equiv RESUME,  0x0002
        .equiv HOSTEN,  0x0003
        .equiv USBRST,  0x0004
        .equiv PKTDIS,  0x0005
        .equiv SE0,     0x0006
        .equiv JSTATE,  0x0007

        .equiv SOFEN,   0x0000
        .equiv RESET,   0x0004
        .equiv TOKBUSY, 0x0005


;----- U1ADDR Bits -----------------------------------------------------
        .equiv LOWSPDEN, 0x0007

        .equiv DEVADDR0, 0x0000
        .equiv DEVADDR1, 0x0001
        .equiv DEVADDR2, 0x0002
        .equiv DEVADDR3, 0x0003
        .equiv DEVADDR4, 0x0004
        .equiv DEVADDR5, 0x0005
        .equiv DEVADDR6, 0x0006
        .equiv LSPDEN,  0x0007


;----- U1BDTP1 Bits -----------------------------------------------------
        .equiv BDTPTRL0, 0x0001
        .equiv BDTPTRL1, 0x0002
        .equiv BDTPTRL2, 0x0003
        .equiv BDTPTRL3, 0x0004
        .equiv BDTPTRL4, 0x0005
        .equiv BDTPTRL5, 0x0006
        .equiv BDTPTRL6, 0x0007


;----- U1FRML Bits -----------------------------------------------------
        .equiv FRM0,    0x0000
        .equiv FRM1,    0x0001
        .equiv FRM2,    0x0002
        .equiv FRM3,    0x0003
        .equiv FRM4,    0x0004
        .equiv FRM5,    0x0005
        .equiv FRM6,    0x0006
        .equiv FRM7,    0x0007


;----- U1FRMH Bits -----------------------------------------------------
        .equiv FRM8,    0x0000
        .equiv FRM9,    0x0001
        .equiv FRM10,   0x0002


;----- U1TOK Bits -----------------------------------------------------
        .equiv EP0,     0x0000
        .equiv EP1,     0x0001
        .equiv EP2,     0x0002
        .equiv EP3,     0x0003
        .equiv PID0,    0x0004
        .equiv PID1,    0x0005
        .equiv PID2,    0x0006
        .equiv PID3,    0x0007


;----- U1SOF Bits -----------------------------------------------------
        .equiv CNT0,    0x0000
        .equiv CNT1,    0x0001
        .equiv CNT2,    0x0002
        .equiv CNT3,    0x0003
        .equiv CNT4,    0x0004
        .equiv CNT5,    0x0005
        .equiv CNT6,    0x0006
        .equiv CNT7,    0x0007


;----- U1CNFG1 Bits -----------------------------------------------------
        .equiv USBSIDL, 0x0004
        .equiv UOEMON,  0x0006
        .equiv UTEYE,   0x0007

        .equiv PPB0,    0x0000
        .equiv PPB1,    0x0001


;----- U1CNFG2 Bits -----------------------------------------------------
        .equiv UTRDIS,  0x0000
        .equiv UVCMPDIS, 0x0001
        .equiv UVBUSDIS, 0x0002
        .equiv EXTI2CEN, 0x0003
        .equiv PUVBUS,  0x0004
        .equiv UVCMPSEL, 0x0005


;----- U1EP0 Bits -----------------------------------------------------
        .equiv EPHSHK,  0x0000
        .equiv EPSTALL, 0x0001
        .equiv EPTXEN,  0x0002
        .equiv EPRXEN,  0x0003
        .equiv EPCONDIS, 0x0004
        .equiv RETRYDIS, 0x0006
        .equiv LSPD,    0x0007

        .equiv EPINEN,  0x0002
        .equiv EPOUTEN, 0x0003
        .equiv LOWSPD,  0x0007


;----- U1EP1 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP2 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP3 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP4 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP5 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP6 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP7 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP8 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP9 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP10 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP11 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP12 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP13 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP14 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP15 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- SD1CON1 Bits -----------------------------------------------------
        .equiv PWRLVL,  0x0000
        .equiv SDREFP,  0x0001
        .equiv SDREFN,  0x0002
        .equiv VOSCAL,  0x0004
        .equiv FILTDIS, 0x000B
        .equiv SDRST,   0x000C
        .equiv SDSIDL,  0x000D
        .equiv SDON,    0x000F

        .equiv DITHER0, 0x0006
        .equiv DITHER1, 0x0007
        .equiv SDGAIN0, 0x0008
        .equiv SDGAIN1, 0x0009
        .equiv SDGAIN2, 0x000A


;----- SD1CON2 Bits -----------------------------------------------------
        .equiv SDRDY,   0x0000

        .equiv RNDRES0, 0x0003
        .equiv RNDRES1, 0x0004
        .equiv SDWM0,   0x0008
        .equiv SDWM1,   0x0009
        .equiv SDINT0,  0x000C
        .equiv SDINT1,  0x000D
        .equiv CHOP0,   0x000E
        .equiv CHOP1,   0x000F


;----- SD1CON3 Bits -----------------------------------------------------
        .equiv SDCH0,   0x0000
        .equiv SDCH1,   0x0001
        .equiv SDCH2,   0x0002
        .equiv SDCS0,   0x0008
        .equiv SDCS1,   0x0009
        .equiv SDOSR0,  0x000A
        .equiv SDOSR1,  0x000B
        .equiv SDOSR2,  0x000C
        .equiv SDDIV0,  0x000D
        .equiv SDDIV1,  0x000E
        .equiv SDDIV2,  0x000F


;----- ANCFG Bits -----------------------------------------------------
        .equiv VBG2EN,  0x0002


;----- ANSA Bits -----------------------------------------------------
        .equiv ANSA1,   0x0001
        .equiv ANSA2,   0x0002
        .equiv ANSA4,   0x0004
        .equiv ANSA5,   0x0005
        .equiv ANSA6,   0x0006
        .equiv ANSA7,   0x0007
        .equiv ANSA9,   0x0009
        .equiv ANSA10,  0x000A
        .equiv ANSA14,  0x000E
        .equiv ANSA15,  0x000F


;----- ANSB Bits -----------------------------------------------------
        .equiv ANSB0,   0x0000
        .equiv ANSB1,   0x0001
        .equiv ANSB2,   0x0002
        .equiv ANSB3,   0x0003
        .equiv ANSB4,   0x0004
        .equiv ANSB5,   0x0005
        .equiv ANSB6,   0x0006
        .equiv ANSB7,   0x0007
        .equiv ANSB12,  0x000C
        .equiv ANSB13,  0x000D
        .equiv ANSB14,  0x000E
        .equiv ANSB15,  0x000F


;----- ANSC Bits -----------------------------------------------------
        .equiv ANSC1,   0x0001
        .equiv ANSC3,   0x0003
        .equiv ANSC4,   0x0004


;----- ANSD Bits -----------------------------------------------------
        .equiv ANSD0,   0x0000
        .equiv ANSD1,   0x0001
        .equiv ANSD2,   0x0002
        .equiv ANSD3,   0x0003
        .equiv ANSD4,   0x0004
        .equiv ANSD5,   0x0005
        .equiv ANSD6,   0x0006
        .equiv ANSD7,   0x0007
        .equiv ANSD8,   0x0008
        .equiv ANSD9,   0x0009
        .equiv ANSD10,  0x000A
        .equiv ANSD11,  0x000B
        .equiv ANSD12,  0x000C
        .equiv ANSD13,  0x000D
        .equiv ANSD14,  0x000E
        .equiv ANSD15,  0x000F


;----- ANSE Bits -----------------------------------------------------
        .equiv ANSE4,   0x0004
        .equiv ANSE5,   0x0005
        .equiv ANSE6,   0x0006
        .equiv ANSE7,   0x0007
        .equiv ANSE9,   0x0009


;----- ANSF Bits -----------------------------------------------------
        .equiv ANSF0,   0x0000
        .equiv ANSF2,   0x0002
        .equiv ANSF3,   0x0003
        .equiv ANSF4,   0x0004
        .equiv ANSF5,   0x0005
        .equiv ANSF7,   0x0007
        .equiv ANSF8,   0x0008
        .equiv ANSF13,  0x000D


;----- ANSG Bits -----------------------------------------------------
        .equiv ANSG6,   0x0006
        .equiv ANSG7,   0x0007
        .equiv ANSG8,   0x0008
        .equiv ANSG9,   0x0009
        .equiv ANSG15,  0x000F


;----- ADCON1 Bits -----------------------------------------------------
       ;.equiv PWRLVL,  0x0000
        .equiv ADCAL,   0x0006
        .equiv PUMPEN,  0x0007
        .equiv ADSLP,   0x000C
        .equiv ADSIDL,  0x000D
        .equiv ADON,    0x000F

        .equiv FORM0,   0x0008
        .equiv FORM1,   0x0009
        .equiv FORM2,   0x000A
        .equiv FORM3,   0x000B


;----- ADCON2 Bits -----------------------------------------------------
        .equiv REFPUMP, 0x0001
        .equiv BUFORG,  0x000A
        .equiv NVCFG0,  0x000C

        .equiv NVCFG,   0x000C
        .equiv PVCFG0,  0x000E
        .equiv PVCFG1,  0x000F

        .equiv RFPUMP,  0x0001


;----- ADCON3 Bits -----------------------------------------------------
        .equiv ADRC,    0x000F

        .equiv ADCS0,   0x0000
        .equiv ADCS1,   0x0001
        .equiv ADCS2,   0x0002
        .equiv ADCS3,   0x0003
        .equiv ADCS4,   0x0004
        .equiv ADCS5,   0x0005
        .equiv ADCS6,   0x0006
        .equiv ADCS7,   0x0007


        .equiv SLEN0,   0x0008
        .equiv SLEN1,   0x0009
        .equiv SLEN2,   0x000A
        .equiv SLEN3,   0x000B


;----- ADSTATL Bits -----------------------------------------------------
        .equiv SL0IF,   0x0000
        .equiv SL1IF,   0x0001
        .equiv SL2IF,   0x0002
        .equiv SL3IF,   0x0003
        .equiv ACCIF,   0x0004
        .equiv BUFIF,   0x0005

        .equiv SLERR0,  0x0008
        .equiv SLERR1,  0x0009
        .equiv SLERR2,  0x000A
        .equiv SLERR3,  0x000B

        .equiv SLOV,    0x0008


;----- ADSTATH Bits -----------------------------------------------------
        .equiv ADBUSY,  0x0000
        .equiv ADREADY, 0x0001
        .equiv PUMPST,  0x0002


;----- ACCONL Bits -----------------------------------------------------
        .equiv COUNT0,  0x0000
        .equiv COUNT1,  0x0001
        .equiv COUNT2,  0x0002
        .equiv COUNT3,  0x0003
        .equiv COUNT4,  0x0004
        .equiv COUNT5,  0x0005
        .equiv COUNT6,  0x0006
        .equiv COUNT7,  0x0007
        .equiv TBLSEL0, 0x0008
        .equiv TBLSEL1, 0x0009
        .equiv TBLSEL2, 0x000A
        .equiv TBLSEL3, 0x000B
        .equiv TBLSEL4, 0x000C
        .equiv TBLSEL5, 0x000D


;----- ACCONH Bits -----------------------------------------------------
        .equiv ACIE,    0x0006
        .equiv ACEN,    0x0007


;----- ADCHITL Bits -----------------------------------------------------
        .equiv CHH0,    0x0000
        .equiv CHH1,    0x0001
        .equiv CHH2,    0x0002
        .equiv CHH3,    0x0003
        .equiv CHH4,    0x0004
        .equiv CHH5,    0x0005
        .equiv CHH6,    0x0006
        .equiv CHH7,    0x0007
        .equiv CHH8,    0x0008
        .equiv CHH9,    0x0009
        .equiv CHH10,   0x000A
        .equiv CHH11,   0x000B
        .equiv CHH12,   0x000C
        .equiv CHH13,   0x000D
        .equiv CHH14,   0x000E
        .equiv CHH15,   0x000F


;----- ADCHITH Bits -----------------------------------------------------
        .equiv CHH16,   0x0000
        .equiv CHH17,   0x0001
        .equiv CHH18,   0x0002
        .equiv CHH19,   0x0003
        .equiv CHH20,   0x0004
        .equiv CHH21,   0x0005
        .equiv CHH22,   0x0006
        .equiv CHH23,   0x0007
        .equiv CHH24,   0x0008
        .equiv CHH25,   0x0009
        .equiv CHH26,   0x000A
        .equiv CHH27,   0x000B
        .equiv CHH28,   0x000C
        .equiv CHH29,   0x000D
        .equiv CHH30,   0x000E
        .equiv CHH31,   0x000F


;----- ADL0CONL Bits -----------------------------------------------------
       ;.equiv THSRC,   0x0007
       ;.equiv SLENCLR, 0x000D
       ;.equiv SAMP,    0x000E
        .equiv SLEN_ADL0CONL, 0x000F

       ;.equiv SLSIZE0, 0x0000
       ;.equiv SLSIZE1, 0x0001
       ;.equiv SLSIZE2, 0x0002
       ;.equiv SLSIZE3, 0x0003
       ;.equiv SLSIZE4, 0x0004
       ;.equiv SLSIZE5, 0x0005
       ;.equiv SLTSRC0, 0x0008
       ;.equiv SLTSRC1, 0x0009
       ;.equiv SLTSRC2, 0x000A
       ;.equiv SLTSRC3, 0x000B
       ;.equiv SLTSRC4, 0x000C


;----- ADL0CONH Bits -----------------------------------------------------
       ;.equiv MULCHEN, 0x0005
        .equiv PINTRIS, 0x0006
       ;.equiv CTMEN,   0x0007
       ;.equiv ASEN,    0x000F

       ;.equiv SAMC0,   0x0000
       ;.equiv SAMC1,   0x0001
       ;.equiv SAMC2,   0x0002
       ;.equiv SAMC3,   0x0003
       ;.equiv SAMC4,   0x0004
       ;.equiv CM0,     0x0008
       ;.equiv CM1,     0x0009
       ;.equiv CM2,     0x000A
       ;.equiv WM0,     0x000B
       ;.equiv WM1,     0x000C
       ;.equiv SLINT0,  0x000D
       ;.equiv SLINT1,  0x000E


;----- ADL0PTR Bits -----------------------------------------------------
       ;.equiv ADNEXT0, 0x0008
       ;.equiv ADNEXT1, 0x0009
       ;.equiv ADNEXT2, 0x000A
       ;.equiv ADNEXT3, 0x000B
       ;.equiv ADNEXT4, 0x000C
       ;.equiv ADNEXT5, 0x000D
       ;.equiv ADNEXT6, 0x000E


;----- ADL0STAT Bits -----------------------------------------------------
       ;.equiv ADLIF,   0x0005
       ;.equiv ADTDLY,  0x0007
       ;.equiv LBUSY,   0x000E
       ;.equiv ADTACT,  0x000F


;----- ADTH0L Bits -----------------------------------------------------
       ;.equiv TH0,     0x0000
       ;.equiv TH1,     0x0001
       ;.equiv TH2,     0x0002
       ;.equiv TH3,     0x0003
       ;.equiv TH4,     0x0004
       ;.equiv TH5,     0x0005
       ;.equiv TH6,     0x0006
       ;.equiv TH7,     0x0007
       ;.equiv TH8,     0x0008
       ;.equiv TH9,     0x0009
       ;.equiv TH10,    0x000A
       ;.equiv TH11,    0x000B
       ;.equiv TH12,    0x000C
       ;.equiv TH13,    0x000D
       ;.equiv TH14,    0x000E
       ;.equiv TH15,    0x000F


;----- ADTH0H Bits -----------------------------------------------------
       ;.equiv TH0,     0x0000
       ;.equiv TH1,     0x0001
       ;.equiv TH2,     0x0002
       ;.equiv TH3,     0x0003
       ;.equiv TH4,     0x0004
       ;.equiv TH5,     0x0005
       ;.equiv TH6,     0x0006
       ;.equiv TH7,     0x0007
       ;.equiv TH8,     0x0008
       ;.equiv TH9,     0x0009
       ;.equiv TH10,    0x000A
       ;.equiv TH11,    0x000B
       ;.equiv TH12,    0x000C
       ;.equiv TH13,    0x000D
       ;.equiv TH14,    0x000E
       ;.equiv TH15,    0x000F


;----- ADL0MSEL0 Bits -----------------------------------------------------
       ;.equiv MSEL15,  0x000F


;----- ADL0MSEL1 Bits -----------------------------------------------------
       ;.equiv MSEL16,  0x0000
       ;.equiv MSEL17,  0x0001
       ;.equiv MSEL18,  0x0002
       ;.equiv MSEL19,  0x0003
       ;.equiv MSEL20,  0x0004
       ;.equiv MSEL21,  0x0005
       ;.equiv MSEL22,  0x0006
       ;.equiv MSEL23,  0x0007
       ;.equiv MSEL24,  0x0008
       ;.equiv MSEL25,  0x0009
       ;.equiv MSEL26,  0x000A
       ;.equiv MSEL27,  0x000B
       ;.equiv MSEL28,  0x000C
       ;.equiv MSEL29,  0x000D
       ;.equiv MSEL30,  0x000E
       ;.equiv MSEL31,  0x000F


;----- ADL0MSEL2 Bits -----------------------------------------------------
       ;.equiv MSEL32,  0x0000
       ;.equiv MSEL33,  0x0001
       ;.equiv MSEL34,  0x0002
       ;.equiv MSEL35,  0x0003
       ;.equiv MSEL36,  0x0004
       ;.equiv MSEL37,  0x0005
       ;.equiv MSEL38,  0x0006
       ;.equiv MSEL39,  0x0007
       ;.equiv MSEL40,  0x0008
       ;.equiv MSEL41,  0x0009
       ;.equiv MSEL42,  0x000A
       ;.equiv MSEL43,  0x000B
       ;.equiv MSEL44,  0x000C
       ;.equiv MSEL45,  0x000D
       ;.equiv MSEL46,  0x000E
       ;.equiv MSEL47,  0x000F


;----- ADL0MSEL3 Bits -----------------------------------------------------
       ;.equiv MSEL48,  0x0000
       ;.equiv MSEL49,  0x0001


;----- ADL1CONL Bits -----------------------------------------------------
       ;.equiv THSRC,   0x0007
       ;.equiv SLENCLR, 0x000D
       ;.equiv SAMP,    0x000E
        .equiv SLEN_ADL1CONL, 0x000F

       ;.equiv SLSIZE0, 0x0000
       ;.equiv SLSIZE1, 0x0001
       ;.equiv SLSIZE2, 0x0002
       ;.equiv SLSIZE3, 0x0003
       ;.equiv SLSIZE4, 0x0004
       ;.equiv SLSIZE5, 0x0005
       ;.equiv SLTSRC0, 0x0008
       ;.equiv SLTSRC1, 0x0009
       ;.equiv SLTSRC2, 0x000A
       ;.equiv SLTSRC3, 0x000B
       ;.equiv SLTSRC4, 0x000C


;----- ADL1CONH Bits -----------------------------------------------------
       ;.equiv MULCHEN, 0x0005
       ;.equiv PINTRIS, 0x0006
       ;.equiv CTMEN,   0x0007
       ;.equiv ASEN,    0x000F

       ;.equiv SAMC0,   0x0000
       ;.equiv SAMC1,   0x0001
       ;.equiv SAMC2,   0x0002
       ;.equiv SAMC3,   0x0003
       ;.equiv SAMC4,   0x0004
       ;.equiv CM0,     0x0008
       ;.equiv CM1,     0x0009
       ;.equiv CM2,     0x000A
       ;.equiv WM0,     0x000B
       ;.equiv WM1,     0x000C
       ;.equiv SLINT0,  0x000D
       ;.equiv SLINT1,  0x000E


;----- ADL1PTR Bits -----------------------------------------------------
       ;.equiv ADNEXT0, 0x0008
       ;.equiv ADNEXT1, 0x0009
       ;.equiv ADNEXT2, 0x000A
       ;.equiv ADNEXT3, 0x000B
       ;.equiv ADNEXT4, 0x000C
       ;.equiv ADNEXT5, 0x000D
       ;.equiv ADNEXT6, 0x000E


;----- ADL1STAT Bits -----------------------------------------------------
       ;.equiv ADLIF,   0x0005
       ;.equiv ADTDLY,  0x0007
       ;.equiv LBUSY,   0x000E
       ;.equiv ADTACT,  0x000F


;----- ADTH1L Bits -----------------------------------------------------
       ;.equiv TH0,     0x0000
       ;.equiv TH1,     0x0001
       ;.equiv TH2,     0x0002
       ;.equiv TH3,     0x0003
       ;.equiv TH4,     0x0004
       ;.equiv TH5,     0x0005
       ;.equiv TH6,     0x0006
       ;.equiv TH7,     0x0007
       ;.equiv TH8,     0x0008
       ;.equiv TH9,     0x0009
       ;.equiv TH10,    0x000A
       ;.equiv TH11,    0x000B
       ;.equiv TH12,    0x000C
       ;.equiv TH13,    0x000D
       ;.equiv TH14,    0x000E
       ;.equiv TH15,    0x000F


;----- ADTH1H Bits -----------------------------------------------------
       ;.equiv TH0,     0x0000
       ;.equiv TH1,     0x0001
       ;.equiv TH2,     0x0002
       ;.equiv TH3,     0x0003
       ;.equiv TH4,     0x0004
       ;.equiv TH5,     0x0005
       ;.equiv TH6,     0x0006
       ;.equiv TH7,     0x0007
       ;.equiv TH8,     0x0008
       ;.equiv TH9,     0x0009
       ;.equiv TH10,    0x000A
       ;.equiv TH11,    0x000B
       ;.equiv TH12,    0x000C
       ;.equiv TH13,    0x000D
       ;.equiv TH14,    0x000E
       ;.equiv TH15,    0x000F


;----- ADL1MSEL0 Bits -----------------------------------------------------
       ;.equiv MSEL15,  0x000F


;----- ADL1MSEL1 Bits -----------------------------------------------------
       ;.equiv MSEL16,  0x0000
       ;.equiv MSEL17,  0x0001
       ;.equiv MSEL18,  0x0002
       ;.equiv MSEL19,  0x0003
       ;.equiv MSEL20,  0x0004
       ;.equiv MSEL21,  0x0005
       ;.equiv MSEL22,  0x0006
       ;.equiv MSEL23,  0x0007
       ;.equiv MSEL24,  0x0008
       ;.equiv MSEL25,  0x0009
       ;.equiv MSEL26,  0x000A
       ;.equiv MSEL27,  0x000B
       ;.equiv MSEL28,  0x000C
       ;.equiv MSEL29,  0x000D
       ;.equiv MSEL30,  0x000E
       ;.equiv MSEL31,  0x000F


;----- ADL1MSEL2 Bits -----------------------------------------------------
       ;.equiv MSEL32,  0x0000
       ;.equiv MSEL33,  0x0001
       ;.equiv MSEL34,  0x0002
       ;.equiv MSEL35,  0x0003
       ;.equiv MSEL36,  0x0004
       ;.equiv MSEL37,  0x0005
       ;.equiv MSEL38,  0x0006
       ;.equiv MSEL39,  0x0007
       ;.equiv MSEL40,  0x0008
       ;.equiv MSEL41,  0x0009
       ;.equiv MSEL42,  0x000A
       ;.equiv MSEL43,  0x000B
       ;.equiv MSEL44,  0x000C
       ;.equiv MSEL45,  0x000D
       ;.equiv MSEL46,  0x000E
       ;.equiv MSEL47,  0x000F


;----- ADL1MSEL3 Bits -----------------------------------------------------
       ;.equiv MSEL48,  0x0000
       ;.equiv MSEL49,  0x0001


;----- ADL2CONL Bits -----------------------------------------------------
       ;.equiv THSRC,   0x0007
       ;.equiv SLENCLR, 0x000D
       ;.equiv SAMP,    0x000E
        .equiv SLEN_ADL2CONL, 0x000F

       ;.equiv SLSIZE0, 0x0000
       ;.equiv SLSIZE1, 0x0001
       ;.equiv SLSIZE2, 0x0002
       ;.equiv SLSIZE3, 0x0003
       ;.equiv SLSIZE4, 0x0004
       ;.equiv SLSIZE5, 0x0005
       ;.equiv SLTSRC0, 0x0008
       ;.equiv SLTSRC1, 0x0009
       ;.equiv SLTSRC2, 0x000A
       ;.equiv SLTSRC3, 0x000B
       ;.equiv SLTSRC4, 0x000C


;----- ADL2CONH Bits -----------------------------------------------------
       ;.equiv MULCHEN, 0x0005
       ;.equiv PINTRIS, 0x0006
       ;.equiv CTMEN,   0x0007
       ;.equiv ASEN,    0x000F

       ;.equiv SAMC0,   0x0000
       ;.equiv SAMC1,   0x0001
       ;.equiv SAMC2,   0x0002
       ;.equiv SAMC3,   0x0003
       ;.equiv SAMC4,   0x0004
       ;.equiv CM0,     0x0008
       ;.equiv CM1,     0x0009
       ;.equiv CM2,     0x000A
       ;.equiv WM0,     0x000B
       ;.equiv WM1,     0x000C
       ;.equiv SLINT0,  0x000D
       ;.equiv SLINT1,  0x000E


;----- ADL2PTR Bits -----------------------------------------------------
       ;.equiv ADNEXT0, 0x0008
       ;.equiv ADNEXT1, 0x0009
       ;.equiv ADNEXT2, 0x000A
       ;.equiv ADNEXT3, 0x000B
       ;.equiv ADNEXT4, 0x000C
       ;.equiv ADNEXT5, 0x000D
       ;.equiv ADNEXT6, 0x000E


;----- ADL2STAT Bits -----------------------------------------------------
       ;.equiv ADLIF,   0x0005
       ;.equiv ADTDLY,  0x0007
       ;.equiv LBUSY,   0x000E
       ;.equiv ADTACT,  0x000F


;----- ADTH2L Bits -----------------------------------------------------
       ;.equiv TH0,     0x0000
       ;.equiv TH1,     0x0001
       ;.equiv TH2,     0x0002
       ;.equiv TH3,     0x0003
       ;.equiv TH4,     0x0004
       ;.equiv TH5,     0x0005
       ;.equiv TH6,     0x0006
       ;.equiv TH7,     0x0007
       ;.equiv TH8,     0x0008
       ;.equiv TH9,     0x0009
       ;.equiv TH10,    0x000A
       ;.equiv TH11,    0x000B
       ;.equiv TH12,    0x000C
       ;.equiv TH13,    0x000D
       ;.equiv TH14,    0x000E
       ;.equiv TH15,    0x000F


;----- ADTH2H Bits -----------------------------------------------------
       ;.equiv TH0,     0x0000
       ;.equiv TH1,     0x0001
       ;.equiv TH2,     0x0002
       ;.equiv TH3,     0x0003
       ;.equiv TH4,     0x0004
       ;.equiv TH5,     0x0005
       ;.equiv TH6,     0x0006
       ;.equiv TH7,     0x0007
       ;.equiv TH8,     0x0008
       ;.equiv TH9,     0x0009
       ;.equiv TH10,    0x000A
       ;.equiv TH11,    0x000B
       ;.equiv TH12,    0x000C
       ;.equiv TH13,    0x000D
       ;.equiv TH14,    0x000E
       ;.equiv TH15,    0x000F


;----- ADL2MSEL0 Bits -----------------------------------------------------
       ;.equiv MSEL15,  0x000F


;----- ADL2MSEL1 Bits -----------------------------------------------------
       ;.equiv MSEL16,  0x0000
       ;.equiv MSEL17,  0x0001
       ;.equiv MSEL18,  0x0002
       ;.equiv MSEL19,  0x0003
       ;.equiv MSEL20,  0x0004
       ;.equiv MSEL21,  0x0005
       ;.equiv MSEL22,  0x0006
       ;.equiv MSEL23,  0x0007
       ;.equiv MSEL24,  0x0008
       ;.equiv MSEL25,  0x0009
       ;.equiv MSEL26,  0x000A
       ;.equiv MSEL27,  0x000B
       ;.equiv MSEL28,  0x000C
       ;.equiv MSEL29,  0x000D
       ;.equiv MSEL30,  0x000E
       ;.equiv MSEL31,  0x000F


;----- ADL2MSEL2 Bits -----------------------------------------------------
       ;.equiv MSEL32,  0x0000
       ;.equiv MSEL33,  0x0001
       ;.equiv MSEL34,  0x0002
       ;.equiv MSEL35,  0x0003
       ;.equiv MSEL36,  0x0004
       ;.equiv MSEL37,  0x0005
       ;.equiv MSEL38,  0x0006
       ;.equiv MSEL39,  0x0007
       ;.equiv MSEL40,  0x0008
       ;.equiv MSEL41,  0x0009
       ;.equiv MSEL42,  0x000A
       ;.equiv MSEL43,  0x000B
       ;.equiv MSEL44,  0x000C
       ;.equiv MSEL45,  0x000D
       ;.equiv MSEL46,  0x000E
       ;.equiv MSEL47,  0x000F


;----- ADL2MSEL3 Bits -----------------------------------------------------
       ;.equiv MSEL48,  0x0000
       ;.equiv MSEL49,  0x0001


;----- LCDREG Bits -----------------------------------------------------
        .equiv MODE13,  0x0002
        .equiv CPEN,    0x000F

        .equiv CKSEL0,  0x0000
        .equiv CKSEL1,  0x0001
        .equiv BIAS0,   0x0003
        .equiv BIAS1,   0x0004
        .equiv BIAS2,   0x0005


;----- LCDREF Bits -----------------------------------------------------
        .equiv VLCD1PE, 0x0008
        .equiv VLCD2PE, 0x0009
        .equiv VLCD3PE, 0x000A
        .equiv LCDIRE,  0x000F

        .equiv LRLAT0,  0x0000
        .equiv LRLAT1,  0x0001
        .equiv LRLAT2,  0x0002
        .equiv LRLBP0,  0x0004
        .equiv LRLBP1,  0x0005
        .equiv LRLAP0,  0x0006
        .equiv LRLAP1,  0x0007
        .equiv LCDCST0, 0x000B
        .equiv LCDCST1, 0x000C
        .equiv LCDCST2, 0x000D


;----- LCDCON Bits -----------------------------------------------------
        .equiv WERR,    0x0005
        .equiv SLPEN,   0x0006
        .equiv LCDSIDL, 0x000D
        .equiv LCDEN,   0x000F

        .equiv LMUX0,   0x0000
        .equiv LMUX1,   0x0001
        .equiv LMUX2,   0x0002
        .equiv CS0,     0x0003
        .equiv CS1,     0x0004


;----- LCDPS Bits -----------------------------------------------------
        .equiv WA,      0x0004
        .equiv LCDA,    0x0005
        .equiv BIASMD,  0x0006
        .equiv WFT,     0x0007

        .equiv LP0,     0x0000
        .equiv LP1,     0x0001
        .equiv LP2,     0x0002
        .equiv LP3,     0x0003


;----- LCDSE0 Bits -----------------------------------------------------
        .equiv SE00,    0x0000
        .equiv SE01,    0x0001
        .equiv SE02,    0x0002
        .equiv SE03,    0x0003
        .equiv SE04,    0x0004
        .equiv SE05,    0x0005
        .equiv SE06,    0x0006
        .equiv SE07,    0x0007
        .equiv SE08,    0x0008
        .equiv SE09,    0x0009
        .equiv SE10,    0x000A
        .equiv SE11,    0x000B
        .equiv SE12,    0x000C
        .equiv SE13,    0x000D
        .equiv SE14,    0x000E
        .equiv SE15,    0x000F


;----- LCDSE1 Bits -----------------------------------------------------
        .equiv SE16,    0x0000
        .equiv SE17,    0x0001
        .equiv SE18,    0x0002
        .equiv SE19,    0x0003
        .equiv SE20,    0x0004
        .equiv SE21,    0x0005
        .equiv SE22,    0x0006
        .equiv SE23,    0x0007
        .equiv SE24,    0x0008
        .equiv SE25,    0x0009
        .equiv SE26,    0x000A
        .equiv SE27,    0x000B
        .equiv SE28,    0x000C
        .equiv SE29,    0x000D
        .equiv SE30,    0x000E
        .equiv SE31,    0x000F


;----- LCDSE2 Bits -----------------------------------------------------
        .equiv SE32,    0x0000
        .equiv SE33,    0x0001
        .equiv SE34,    0x0002
        .equiv SE35,    0x0003
        .equiv SE36,    0x0004
        .equiv SE37,    0x0005
        .equiv SE38,    0x0006
        .equiv SE39,    0x0007
        .equiv SE40,    0x0008
        .equiv SE41,    0x0009
        .equiv SE42,    0x000A
        .equiv SE43,    0x000B
        .equiv SE44,    0x000C
        .equiv SE45,    0x000D
        .equiv SE46,    0x000E
        .equiv SE47,    0x000F


;----- LCDSE3 Bits -----------------------------------------------------
        .equiv SE48,    0x0000
        .equiv SE49,    0x0001
        .equiv SE50,    0x0002
        .equiv SE51,    0x0003
        .equiv SE52,    0x0004
        .equiv SE53,    0x0005
        .equiv SE54,    0x0006
        .equiv SE55,    0x0007
        .equiv SE56,    0x0008
        .equiv SE57,    0x0009
        .equiv SE58,    0x000A
        .equiv SE59,    0x000B
        .equiv SE60,    0x000C
        .equiv SE61,    0x000D
        .equiv SE62,    0x000E
        .equiv SE63,    0x000F


;----- LCDDATA0 Bits -----------------------------------------------------
        .equiv S0C0,    0x0000
        .equiv S1C0,    0x0001
        .equiv S2C0,    0x0002
        .equiv S3C0,    0x0003
        .equiv S4C0,    0x0004
        .equiv S5C0,    0x0005
        .equiv S6C0,    0x0006
        .equiv S7C0,    0x0007
        .equiv S8C0,    0x0008
        .equiv S9C0,    0x0009
        .equiv S10C0,   0x000A
        .equiv S11C0,   0x000B
        .equiv S12C0,   0x000C
        .equiv S13C0,   0x000D
        .equiv S14C0,   0x000E
        .equiv S15C0,   0x000F


;----- LCDDATA1 Bits -----------------------------------------------------
        .equiv S16C0,   0x0000
        .equiv S17C0,   0x0001
        .equiv S18C0,   0x0002
        .equiv S19C0,   0x0003
        .equiv S20C0,   0x0004
        .equiv S21C0,   0x0005
        .equiv S22C0,   0x0006
        .equiv S23C0,   0x0007
        .equiv S24C0,   0x0008
        .equiv S25C0,   0x0009
        .equiv S26C0,   0x000A
        .equiv S27C0,   0x000B
        .equiv S28C0,   0x000C
        .equiv S29C0,   0x000D
        .equiv S30C0,   0x000E
        .equiv S31C0,   0x000F


;----- LCDDATA2 Bits -----------------------------------------------------
        .equiv S32C0,   0x0000
        .equiv S33C0,   0x0001
        .equiv S34C0,   0x0002
        .equiv S35C0,   0x0003
        .equiv S36C0,   0x0004
        .equiv S37C0,   0x0005
        .equiv S38C0,   0x0006
        .equiv S39C0,   0x0007
        .equiv S40C0,   0x0008
        .equiv S41C0,   0x0009
        .equiv S42C0,   0x000A
        .equiv S43C0,   0x000B
        .equiv S44C0,   0x000C
        .equiv S45C0,   0x000D
        .equiv S46C0,   0x000E
        .equiv S47C0,   0x000F


;----- LCDDATA3 Bits -----------------------------------------------------
        .equiv S48C0,   0x0000
        .equiv S49C0,   0x0001
        .equiv S50C0,   0x0002
        .equiv S51C0,   0x0003
        .equiv S52C0,   0x0004
        .equiv S53C0,   0x0005
        .equiv S54C0,   0x0006
        .equiv S55C0,   0x0007
        .equiv S56C0,   0x0008
        .equiv S57C0,   0x0009
        .equiv S58C0,   0x000A
        .equiv S59C0,   0x000B
        .equiv S60C0,   0x000C
        .equiv S61C0,   0x000D
        .equiv S62C0,   0x000E
        .equiv S63C0,   0x000F


;----- LCDDATA4 Bits -----------------------------------------------------
        .equiv S0C1,    0x0000
        .equiv S1C1,    0x0001
        .equiv S2C1,    0x0002
        .equiv S3C1,    0x0003
        .equiv S4C1,    0x0004
        .equiv S5C1,    0x0005
        .equiv S6C1,    0x0006
        .equiv S7C1,    0x0007
        .equiv S8C1,    0x0008
        .equiv S9C1,    0x0009
        .equiv S10C1,   0x000A
        .equiv S11C1,   0x000B
        .equiv S12C1,   0x000C
        .equiv S13C1,   0x000D
        .equiv S14C1,   0x000E
        .equiv S15C1,   0x000F


;----- LCDDATA5 Bits -----------------------------------------------------
        .equiv S16C1,   0x0000
        .equiv S17C1,   0x0001
        .equiv S18C1,   0x0002
        .equiv S19C1,   0x0003
        .equiv S20C1,   0x0004
        .equiv S21C1,   0x0005
        .equiv S22C1,   0x0006
        .equiv S23C1,   0x0007
        .equiv S24C1,   0x0008
        .equiv S25C1,   0x0009
        .equiv S26C1,   0x000A
        .equiv S27C1,   0x000B
        .equiv S28C1,   0x000C
        .equiv S29C1,   0x000D
        .equiv S30C1,   0x000E
        .equiv S31C1,   0x000F


;----- LCDDATA6 Bits -----------------------------------------------------
        .equiv S32C1,   0x0000
        .equiv S33C1,   0x0001
        .equiv S34C1,   0x0002
        .equiv S35C1,   0x0003
        .equiv S36C1,   0x0004
        .equiv S37C1,   0x0005
        .equiv S38C1,   0x0006
        .equiv S39C1,   0x0007
        .equiv S40C1,   0x0008
        .equiv S41C1,   0x0009
        .equiv S42C1,   0x000A
        .equiv S43C1,   0x000B
        .equiv S44C1,   0x000C
        .equiv S45C1,   0x000D
        .equiv S46C1,   0x000E
        .equiv S47C1,   0x000F


;----- LCDDATA7 Bits -----------------------------------------------------
        .equiv S48C1,   0x0000
        .equiv S49C1,   0x0001
        .equiv S50C1,   0x0002
        .equiv S51C1,   0x0003
        .equiv S52C1,   0x0004
        .equiv S53C1,   0x0005
        .equiv S54C1,   0x0006
        .equiv S55C1,   0x0007
        .equiv S56C1,   0x0008
        .equiv S57C1,   0x0009
        .equiv S58C1,   0x000A
        .equiv S59C1,   0x000B
        .equiv S60C1,   0x000C
        .equiv S61C1,   0x000D
        .equiv S62C1,   0x000E
        .equiv S63C1,   0x000F


;----- LCDDATA8 Bits -----------------------------------------------------
        .equiv S0C2,    0x0000
        .equiv S1C2,    0x0001
        .equiv S2C2,    0x0002
        .equiv S3C2,    0x0003
        .equiv S4C2,    0x0004
        .equiv S5C2,    0x0005
        .equiv S6C2,    0x0006
        .equiv S7C2,    0x0007
        .equiv S8C2,    0x0008
        .equiv S9C2,    0x0009
        .equiv S10C2,   0x000A
        .equiv S11C2,   0x000B
        .equiv S12C2,   0x000C
        .equiv S13C2,   0x000D
        .equiv S14C2,   0x000E
        .equiv S15C2,   0x000F


;----- LCDDATA9 Bits -----------------------------------------------------
        .equiv S16C2,   0x0000
        .equiv S17C2,   0x0001
        .equiv S18C2,   0x0002
        .equiv S19C2,   0x0003
        .equiv S20C2,   0x0004
        .equiv S21C2,   0x0005
        .equiv S22C2,   0x0006
        .equiv S23C2,   0x0007
        .equiv S24C2,   0x0008
        .equiv S25C2,   0x0009
        .equiv S26C2,   0x000A
        .equiv S27C2,   0x000B
        .equiv S28C2,   0x000C
        .equiv S29C2,   0x000D
        .equiv S30C2,   0x000E
        .equiv S31C2,   0x000F


;----- LCDDATA10 Bits -----------------------------------------------------
        .equiv S32C2,   0x0000
        .equiv S33C2,   0x0001
        .equiv S34C2,   0x0002
        .equiv S35C2,   0x0003
        .equiv S36C2,   0x0004
        .equiv S37C2,   0x0005
        .equiv S38C2,   0x0006
        .equiv S39C2,   0x0007
        .equiv S40C2,   0x0008
        .equiv S41C2,   0x0009
        .equiv S42C2,   0x000A
        .equiv S43C2,   0x000B
        .equiv S44C2,   0x000C
        .equiv S45C2,   0x000D
        .equiv S46C2,   0x000E
        .equiv S47C2,   0x000F


;----- LCDDATA11 Bits -----------------------------------------------------
        .equiv S48C2,   0x0000
        .equiv S49C2,   0x0001
        .equiv S50C2,   0x0002
        .equiv S51C2,   0x0003
        .equiv S52C2,   0x0004
        .equiv S53C2,   0x0005
        .equiv S54C2,   0x0006
        .equiv S55C2,   0x0007
        .equiv S56C2,   0x0008
        .equiv S57C2,   0x0009
        .equiv S58C2,   0x000A
        .equiv S59C2,   0x000B
        .equiv S60C2,   0x000C
        .equiv S61C2,   0x000D
        .equiv S62C2,   0x000E
        .equiv S63C2,   0x000F


;----- LCDDATA12 Bits -----------------------------------------------------
        .equiv S0C3,    0x0000
        .equiv S1C3,    0x0001
        .equiv S2C3,    0x0002
        .equiv S3C3,    0x0003
        .equiv S4C3,    0x0004
        .equiv S5C3,    0x0005
        .equiv S6C3,    0x0006
        .equiv S7C3,    0x0007
        .equiv S8C3,    0x0008
        .equiv S9C3,    0x0009
        .equiv S10C3,   0x000A
        .equiv S11C3,   0x000B
        .equiv S12C3,   0x000C
        .equiv S13C3,   0x000D
        .equiv S14C3,   0x000E
        .equiv S15C3,   0x000F


;----- LCDDATA13 Bits -----------------------------------------------------
        .equiv S16C3,   0x0000
        .equiv S17C3,   0x0001
        .equiv S18C3,   0x0002
        .equiv S19C3,   0x0003
        .equiv S20C3,   0x0004
        .equiv S21C3,   0x0005
        .equiv S22C3,   0x0006
        .equiv S23C3,   0x0007
        .equiv S24C3,   0x0008
        .equiv S25C3,   0x0009
        .equiv S26C3,   0x000A
        .equiv S27C3,   0x000B
        .equiv S28C3,   0x000C
        .equiv S29C3,   0x000D
        .equiv S30C3,   0x000E
        .equiv S31C3,   0x000F


;----- LCDDATA14 Bits -----------------------------------------------------
        .equiv S32C3,   0x0000
        .equiv S33C3,   0x0001
        .equiv S34C3,   0x0002
        .equiv S35C3,   0x0003
        .equiv S36C3,   0x0004
        .equiv S37C3,   0x0005
        .equiv S38C3,   0x0006
        .equiv S39C3,   0x0007
        .equiv S40C3,   0x0008
        .equiv S41C3,   0x0009
        .equiv S42C3,   0x000A
        .equiv S43C3,   0x000B
        .equiv S44C3,   0x000C
        .equiv S45C3,   0x000D
        .equiv S46C3,   0x000E
        .equiv S47C3,   0x000F


;----- LCDDATA15 Bits -----------------------------------------------------
        .equiv S48C3,   0x0000
        .equiv S49C3,   0x0001
        .equiv S50C3,   0x0002
        .equiv S51C3,   0x0003
        .equiv S52C3,   0x0004
        .equiv S53C3,   0x0005
        .equiv S54C3,   0x0006
        .equiv S55C3,   0x0007
        .equiv S56C3,   0x0008
        .equiv S57C3,   0x0009
        .equiv S58C3,   0x000A
        .equiv S59C3,   0x000B
        .equiv S60C3,   0x000C
        .equiv S61C3,   0x000D
        .equiv S62C3,   0x000E
        .equiv S63C3,   0x000F


;----- LCDDATA16 Bits -----------------------------------------------------
        .equiv S0C4,    0x0000
        .equiv S1C4,    0x0001
        .equiv S2C4,    0x0002
        .equiv S3C4,    0x0003
        .equiv S4C4,    0x0004
        .equiv S5C4,    0x0005
        .equiv S6C4,    0x0006
        .equiv S7C4,    0x0007
        .equiv S8C4,    0x0008
        .equiv S9C4,    0x0009
        .equiv S10C4,   0x000A
        .equiv S11C4,   0x000B
        .equiv S12C4,   0x000C
        .equiv S13C4,   0x000D
        .equiv S14C4,   0x000E
        .equiv S15C4,   0x000F


;----- LCDDATA17 Bits -----------------------------------------------------
        .equiv S16C4,   0x0000
        .equiv S17C4,   0x0001
        .equiv S18C4,   0x0002
        .equiv S19C4,   0x0003
        .equiv S20C4,   0x0004
        .equiv S21C4,   0x0005
        .equiv S22C4,   0x0006
        .equiv S23C4,   0x0007
        .equiv S24C4,   0x0008
        .equiv S25C4,   0x0009
        .equiv S26C4,   0x000A
        .equiv S27C4,   0x000B
        .equiv S28C4,   0x000C
        .equiv S29C4,   0x000D
        .equiv S30C4,   0x000E
        .equiv S31C4,   0x000F


;----- LCDDATA18 Bits -----------------------------------------------------
        .equiv S32C4,   0x0000
        .equiv S33C4,   0x0001
        .equiv S34C4,   0x0002
        .equiv S35C4,   0x0003
        .equiv S36C4,   0x0004
        .equiv S37C4,   0x0005
        .equiv S38C4,   0x0006
        .equiv S39C4,   0x0007
        .equiv S40C4,   0x0008
        .equiv S41C4,   0x0009
        .equiv S42C4,   0x000A
        .equiv S43C4,   0x000B
        .equiv S44C4,   0x000C
        .equiv S45C4,   0x000D
        .equiv S46C4,   0x000E
        .equiv S47C4,   0x000F


;----- LCDDATA19 Bits -----------------------------------------------------
        .equiv S48C4,   0x0000
        .equiv S49C4,   0x0001
        .equiv S50C4,   0x0002
        .equiv S51C4,   0x0003
        .equiv S52C4,   0x0004
        .equiv S53C4,   0x0005
        .equiv S54C4,   0x0006
        .equiv S55C4,   0x0007
        .equiv S56C4,   0x0008
        .equiv S57C4,   0x0009
        .equiv S58C4,   0x000A
        .equiv S59C4,   0x000B
        .equiv S60C4,   0x000C
        .equiv S61C4,   0x000D
        .equiv S62C4,   0x000E
        .equiv S63C4,   0x000F


;----- LCDDATA20 Bits -----------------------------------------------------
        .equiv S0C5,    0x0000
        .equiv S1C5,    0x0001
        .equiv S2C5,    0x0002
        .equiv S3C5,    0x0003
        .equiv S4C5,    0x0004
        .equiv S5C5,    0x0005
        .equiv S6C5,    0x0006
        .equiv S7C5,    0x0007
        .equiv S8C5,    0x0008
        .equiv S9C5,    0x0009
        .equiv S10C5,   0x000A
        .equiv S11C5,   0x000B
        .equiv S12C5,   0x000C
        .equiv S13C5,   0x000D
        .equiv S14C5,   0x000E
        .equiv S15C5,   0x000F


;----- LCDDATA21 Bits -----------------------------------------------------
        .equiv S16C5,   0x0000
        .equiv S17C5,   0x0001
        .equiv S18C5,   0x0002
        .equiv S19C5,   0x0003
        .equiv S20C5,   0x0004
        .equiv S21C5,   0x0005
        .equiv S22C5,   0x0006
        .equiv S23C5,   0x0007
        .equiv S24C5,   0x0008
        .equiv S25C5,   0x0009
        .equiv S26C5,   0x000A
        .equiv S27C5,   0x000B
        .equiv S28C5,   0x000C
        .equiv S29C5,   0x000D
        .equiv S30C5,   0x000E
        .equiv S31C5,   0x000F


;----- LCDDATA22 Bits -----------------------------------------------------
        .equiv S32C5,   0x0000
        .equiv S33C5,   0x0001
        .equiv S34C5,   0x0002
        .equiv S35C5,   0x0003
        .equiv S36C5,   0x0004
        .equiv S37C5,   0x0005
        .equiv S38C5,   0x0006
        .equiv S39C5,   0x0007
        .equiv S40C5,   0x0008
        .equiv S41C5,   0x0009
        .equiv S42C5,   0x000A
        .equiv S43C5,   0x000B
        .equiv S44C5,   0x000C
        .equiv S45C5,   0x000D
        .equiv S46C5,   0x000E
        .equiv S47C5,   0x000F


;----- LCDDATA23 Bits -----------------------------------------------------
        .equiv S48C5,   0x0000
        .equiv S49C5,   0x0001
        .equiv S50C5,   0x0002
        .equiv S51C5,   0x0003
        .equiv S52C5,   0x0004
        .equiv S53C5,   0x0005
        .equiv S54C5,   0x0006
        .equiv S55C5,   0x0007
        .equiv S56C5,   0x0008
        .equiv S57C5,   0x0009
        .equiv S58C5,   0x000A
        .equiv S59C5,   0x000B
        .equiv S60C5,   0x000C
        .equiv S61C5,   0x000D
        .equiv S62C5,   0x000E
        .equiv S63C5,   0x000F


;----- LCDDATA24 Bits -----------------------------------------------------
        .equiv S0C6,    0x0000
        .equiv S1C6,    0x0001
        .equiv S2C6,    0x0002
        .equiv S3C6,    0x0003
        .equiv S4C6,    0x0004
        .equiv S5C6,    0x0005
        .equiv S6C6,    0x0006
        .equiv S7C6,    0x0007
        .equiv S8C6,    0x0008
        .equiv S9C6,    0x0009
        .equiv S10C6,   0x000A
        .equiv S11C6,   0x000B
        .equiv S12C6,   0x000C
        .equiv S13C6,   0x000D
        .equiv S14C6,   0x000E
        .equiv S15C6,   0x000F


;----- LCDDATA25 Bits -----------------------------------------------------
        .equiv S16C6,   0x0000
        .equiv S17C6,   0x0001
        .equiv S18C6,   0x0002
        .equiv S19C6,   0x0003
        .equiv S20C6,   0x0004
        .equiv S21C6,   0x0005
        .equiv S22C6,   0x0006
        .equiv S23C6,   0x0007
        .equiv S24C6,   0x0008
        .equiv S25C6,   0x0009
        .equiv S26C6,   0x000A
        .equiv S27C6,   0x000B
        .equiv S28C6,   0x000C
        .equiv S29C6,   0x000D
        .equiv S30C6,   0x000E
        .equiv S31C6,   0x000F


;----- LCDDATA26 Bits -----------------------------------------------------
        .equiv S32C6,   0x0000
        .equiv S33C6,   0x0001
        .equiv S34C6,   0x0002
        .equiv S35C6,   0x0003
        .equiv S36C6,   0x0004
        .equiv S37C6,   0x0005
        .equiv S38C6,   0x0006
        .equiv S39C6,   0x0007
        .equiv S40C6,   0x0008
        .equiv S41C6,   0x0009
        .equiv S42C6,   0x000A
        .equiv S43C6,   0x000B
        .equiv S44C6,   0x000C
        .equiv S45C6,   0x000D
        .equiv S46C6,   0x000E
        .equiv S47C6,   0x000F


;----- LCDDATA27 Bits -----------------------------------------------------
        .equiv S48C6,   0x0000
        .equiv S49C6,   0x0001
        .equiv S50C6,   0x0002
        .equiv S51C6,   0x0003
        .equiv S52C6,   0x0004
        .equiv S53C6,   0x0005
        .equiv S54C6,   0x0006
        .equiv S55C6,   0x0007
        .equiv S56C6,   0x0008
        .equiv S57C6,   0x0009
        .equiv S58C6,   0x000A
        .equiv S59C6,   0x000B
        .equiv S60C6,   0x000C
        .equiv S61C6,   0x000D
        .equiv S62C6,   0x000E
        .equiv S63C6,   0x000F


;----- LCDDATA28 Bits -----------------------------------------------------
        .equiv S0C7,    0x0000
        .equiv S1C7,    0x0001
        .equiv S2C7,    0x0002
        .equiv S3C7,    0x0003
        .equiv S4C7,    0x0004
        .equiv S5C7,    0x0005
        .equiv S6C7,    0x0006
        .equiv S7C7,    0x0007
        .equiv S8C7,    0x0008
        .equiv S9C7,    0x0009
        .equiv S10C7,   0x000A
        .equiv S11C7,   0x000B
        .equiv S12C7,   0x000C
        .equiv S13C7,   0x000D
        .equiv S14C7,   0x000E
        .equiv S15C7,   0x000F


;----- LCDDATA29 Bits -----------------------------------------------------
        .equiv S16C7,   0x0000
        .equiv S17C7,   0x0001
        .equiv S18C7,   0x0002
        .equiv S19C7,   0x0003
        .equiv S20C7,   0x0004
        .equiv S21C7,   0x0005
        .equiv S22C7,   0x0006
        .equiv S23C7,   0x0007
        .equiv S24C7,   0x0008
        .equiv S25C7,   0x0009
        .equiv S26C7,   0x000A
        .equiv S27C7,   0x000B
        .equiv S28C7,   0x000C
        .equiv S29C7,   0x000D
        .equiv S30C7,   0x000E
        .equiv S31C7,   0x000F


;----- LCDDATA30 Bits -----------------------------------------------------
        .equiv S32C7,   0x0000
        .equiv S33C7,   0x0001
        .equiv S34C7,   0x0002
        .equiv S35C7,   0x0003
        .equiv S36C7,   0x0004
        .equiv S37C7,   0x0005
        .equiv S38C7,   0x0006
        .equiv S39C7,   0x0007
        .equiv S40C7,   0x0008
        .equiv S41C7,   0x0009
        .equiv S42C7,   0x000A
        .equiv S43C7,   0x000B
        .equiv S44C7,   0x000C
        .equiv S45C7,   0x000D
        .equiv S46C7,   0x000E
        .equiv S47C7,   0x000F


;----- LCDDATA31 Bits -----------------------------------------------------
        .equiv S48C7,   0x0000
        .equiv S49C7,   0x0001
        .equiv S50C7,   0x0002
        .equiv S51C7,   0x0003
        .equiv S52C7,   0x0004
        .equiv S53C7,   0x0005
        .equiv S54C7,   0x0006
        .equiv S55C7,   0x0007
        .equiv S56C7,   0x0008
        .equiv S57C7,   0x0009
        .equiv S58C7,   0x000A
        .equiv S59C7,   0x000B
        .equiv S60C7,   0x000C
        .equiv S61C7,   0x000D
        .equiv S62C7,   0x000E
        .equiv S63C7,   0x000F


;----- PMCON1 Bits -----------------------------------------------------
        .equiv BUSKEEP, 0x0002
        .equiv ALMODE,  0x0004
        .equiv ALP,     0x0005
        .equiv PSIDL,   0x000D
        .equiv PMPEN,   0x000F

        .equiv IRQM0,   0x0000
        .equiv IRQM1,   0x0001
        .equiv CSF0,    0x0006
        .equiv CSF1,    0x0007
        .equiv MODE0,   0x0008
        .equiv MODE1,   0x0009
        .equiv ADRMUX0, 0x000B
        .equiv ADRMUX1, 0x000C


;----- PMCON2 Bits -----------------------------------------------------
        .equiv TIMEOUT, 0x000C
        .equiv ERROR,   0x000D
        .equiv BUSY,    0x000F

        .equiv RADDR16, 0x0000
        .equiv RADDR17, 0x0001
        .equiv RADDR18, 0x0002
        .equiv RADDR19, 0x0003
        .equiv RADDR20, 0x0004
        .equiv RADDR21, 0x0005
        .equiv RADDR22, 0x0006
        .equiv RADDR23, 0x0007


;----- PMCON3 Bits -----------------------------------------------------
        .equiv PTEN16,  0x0000
        .equiv PTEN17,  0x0001
        .equiv PTEN18,  0x0002
        .equiv PTEN19,  0x0003
        .equiv PTEN20,  0x0004
        .equiv PTEN21,  0x0005
        .equiv PTEN22,  0x0006
        .equiv AWAITE,  0x0008
        .equiv PTBE0EN, 0x000C
        .equiv PTBE1EN, 0x000D
        .equiv PTRDEN,  0x000E
        .equiv PTWREN,  0x000F

        .equiv AWAITM0, 0x0009
        .equiv AWAITM1, 0x000A


;----- PMCON4 Bits -----------------------------------------------------
        .equiv PTEN0,   0x0000
        .equiv PTEN1,   0x0001
        .equiv PTEN2,   0x0002
        .equiv PTEN3,   0x0003
        .equiv PTEN4,   0x0004
        .equiv PTEN5,   0x0005
        .equiv PTEN6,   0x0006
        .equiv PTEN7,   0x0007
        .equiv PTEN8,   0x0008
        .equiv PTEN9,   0x0009
        .equiv PTEN10,  0x000A
        .equiv PTEN11,  0x000B
        .equiv PTEN12,  0x000C
        .equiv PTEN13,  0x000D
        .equiv PTEN14,  0x000E
        .equiv PTEN15,  0x000F


;----- PMCS1CF Bits -----------------------------------------------------
        .equiv ACKP,    0x0007
        .equiv SM,      0x0008
        .equiv RDSP,    0x0009
        .equiv WRSP,    0x000A
        .equiv BEP,     0x000C
        .equiv CSPTEN,  0x000D
        .equiv CSP,     0x000E
        .equiv CSDIS,   0x000F

        .equiv PTSZ0,   0x0005
        .equiv PTSZ1,   0x0006


;----- PMCS1BS Bits -----------------------------------------------------
        .equiv BASE11,  0x0003
        .equiv BASE15,  0x0007
        .equiv BASE16,  0x0008
        .equiv BASE17,  0x0009
        .equiv BASE18,  0x000A
        .equiv BASE19,  0x000B
        .equiv BASE20,  0x000C
        .equiv BASE21,  0x000D
        .equiv BASE22,  0x000E
        .equiv BASE23,  0x000F


;----- PMCS1MD Bits -----------------------------------------------------
        .equiv DWAITE0, 0x0000
        .equiv DWAITE1, 0x0001
        .equiv DWAITM0, 0x0002
        .equiv DWAITM1, 0x0003
        .equiv DWAITM2, 0x0004
        .equiv DWAITM3, 0x0005
        .equiv DWAITB0, 0x0006
        .equiv DWAITB1, 0x0007
        .equiv AMWAIT0, 0x000B
        .equiv AMWAIT1, 0x000C
        .equiv AMWAIT2, 0x000D
        .equiv ACKM0,   0x000E
        .equiv ACKM1,   0x000F


;----- PMCS2CF Bits -----------------------------------------------------
       ;.equiv ACKP,    0x0007
       ;.equiv SM,      0x0008
       ;.equiv RDSP,    0x0009
       ;.equiv WRSP,    0x000A
       ;.equiv BEP,     0x000C
       ;.equiv CSPTEN,  0x000D
       ;.equiv CSP,     0x000E
       ;.equiv CSDIS,   0x000F

       ;.equiv PTSZ0,   0x0005
       ;.equiv PTSZ1,   0x0006


;----- PMCS2BS Bits -----------------------------------------------------
       ;.equiv BASE11,  0x0003
       ;.equiv BASE15,  0x0007
       ;.equiv BASE16,  0x0008
       ;.equiv BASE17,  0x0009
       ;.equiv BASE18,  0x000A
       ;.equiv BASE19,  0x000B
       ;.equiv BASE20,  0x000C
       ;.equiv BASE21,  0x000D
       ;.equiv BASE22,  0x000E
       ;.equiv BASE23,  0x000F


;----- PMCS2MD Bits -----------------------------------------------------
       ;.equiv DWAITE0, 0x0000
       ;.equiv DWAITE1, 0x0001
       ;.equiv DWAITM0, 0x0002
       ;.equiv DWAITM1, 0x0003
       ;.equiv DWAITM2, 0x0004
       ;.equiv DWAITM3, 0x0005
       ;.equiv DWAITB0, 0x0006
       ;.equiv DWAITB1, 0x0007
       ;.equiv AMWAIT0, 0x000B
       ;.equiv AMWAIT1, 0x000C
       ;.equiv AMWAIT2, 0x000D
       ;.equiv ACKM0,   0x000E
       ;.equiv ACKM1,   0x000F


;----- PMSTAT Bits -----------------------------------------------------
        .equiv OB0E,    0x0000
        .equiv OB1E,    0x0001
        .equiv OB2E,    0x0002
        .equiv OB3E,    0x0003
        .equiv OBUF,    0x0006
        .equiv OBE,     0x0007
        .equiv IB0F,    0x0008
        .equiv IB1F,    0x0009
        .equiv IB2F,    0x000A
        .equiv IB3F,    0x000B
        .equiv IBOV,    0x000E
        .equiv IBF,     0x000F


;----- ALCFGRPT Bits -----------------------------------------------------
        .equiv CHIME,   0x000E
        .equiv ALRMEN,  0x000F

        .equiv ARPT0,   0x0000
        .equiv ARPT1,   0x0001
        .equiv ARPT2,   0x0002
        .equiv ARPT3,   0x0003
        .equiv ARPT4,   0x0004
        .equiv ARPT5,   0x0005
        .equiv ARPT6,   0x0006
        .equiv ARPT7,   0x0007
        .equiv ALRMPTR0, 0x0008
        .equiv ALRMPTR1, 0x0009
        .equiv AMASK0,  0x000A
        .equiv AMASK1,  0x000B
        .equiv AMASK2,  0x000C
        .equiv AMASK3,  0x000D


;----- RCFGCAL Bits -----------------------------------------------------
        .equiv RTCOE,   0x000A
        .equiv HALFSEC, 0x000B
        .equiv RTCSYNC, 0x000C
        .equiv RTCWREN, 0x000D
        .equiv RTCEN,   0x000F

        .equiv CAL0,    0x0000
        .equiv CAL1,    0x0001
        .equiv CAL2,    0x0002
        .equiv CAL3,    0x0003
        .equiv CAL4,    0x0004
        .equiv CAL5,    0x0005
        .equiv CAL6,    0x0006
        .equiv CAL7,    0x0007
        .equiv RTCPTR0, 0x0008
        .equiv RTCPTR1, 0x0009


;----- RTCPWC Bits -----------------------------------------------------
        .equiv PWSPRE,  0x000C
        .equiv PWCPRE,  0x000D
        .equiv PWCPOL,  0x000E
        .equiv PWCEN,   0x000F

        .equiv RTCOUT0, 0x0008
        .equiv RTCOUT1, 0x0009
        .equiv RTCLK0,  0x000A
        .equiv RTCLK1,  0x000B
        .equiv PWCSPRE, 0x000C
        .equiv PWCCPRE, 0x000D


        .equiv RTCCLK0, 0x000A
        .equiv RTCCLK1, 0x000B


;----- MDCON Bits -----------------------------------------------------
        .equiv MDBIT,   0x0000
        .equiv MDOPOL,  0x0004
        .equiv MDSLR,   0x0005
        .equiv MDOE,    0x0006
        .equiv MDSIDL,  0x000D
        .equiv MDEN,    0x000F


;----- MDSRC Bits -----------------------------------------------------
        .equiv SODIS,   0x0007

        .equiv MS0,     0x0000
        .equiv MS1,     0x0001
        .equiv MS2,     0x0002
        .equiv MS3,     0x0003


;----- MDCAR Bits -----------------------------------------------------
        .equiv CLSYNC,  0x0005
        .equiv CLPOL,   0x0006
        .equiv CLODIS,  0x0007
        .equiv CHSYNC,  0x000D
        .equiv CHPOL,   0x000E
        .equiv CHODIS,  0x000F

        .equiv CL0,     0x0000
        .equiv CL1,     0x0001
        .equiv CL2,     0x0002
        .equiv CL3,     0x0003
        .equiv CH0,     0x0008
        .equiv CH1,     0x0009
        .equiv CH2,     0x000A
        .equiv CH3,     0x000B


;----- CMSTAT Bits -----------------------------------------------------
        .equiv C1OUT,   0x0000
        .equiv C2OUT,   0x0001
        .equiv C3OUT,   0x0002
        .equiv C1EVT,   0x0008
        .equiv C2EVT,   0x0009
        .equiv C3EVT,   0x000A
        .equiv CMIDL,   0x000F

        .equiv CMSIDL,  0x000F


;----- CVRCON Bits -----------------------------------------------------
        .equiv CVRSS,   0x0005
        .equiv CVROE,   0x0006
        .equiv CVREN,   0x0007
        .equiv CVREFP,  0x000A

        .equiv CVR0,    0x0000
        .equiv CVR1,    0x0001
        .equiv CVR2,    0x0002
        .equiv CVR3,    0x0003
        .equiv CVR4,    0x0004
        .equiv CVREFM0, 0x0008
        .equiv CVREFM1, 0x0009


;----- CM1CON Bits -----------------------------------------------------
        .equiv CREF,    0x0004
        .equiv COUT,    0x0008
        .equiv CEVT,    0x0009
        .equiv CPOL,    0x000D
        .equiv COE,     0x000E
        .equiv CEN,     0x000F

        .equiv CCH0,    0x0000
        .equiv CCH1,    0x0001
        .equiv EVPOL0,  0x0006
        .equiv EVPOL1,  0x0007
        .equiv CON,     0x000F


;----- CM2CON Bits -----------------------------------------------------
       ;.equiv CREF,    0x0004
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CEN,     0x000F

       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv CON,     0x000F


;----- CM3CON Bits -----------------------------------------------------
       ;.equiv CREF,    0x0004
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CEN,     0x000F

       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv CON,     0x000F


;----- CRCCON1 Bits -----------------------------------------------------
        .equiv LENDIAN, 0x0003
        .equiv CRCGO,   0x0004
        .equiv CRCISEL, 0x0005
        .equiv CRCMPT,  0x0006
        .equiv CRCFUL,  0x0007
        .equiv CSIDL,   0x000D
        .equiv CRCEN,   0x000F

        .equiv VWORD0,  0x0008
        .equiv VWORD1,  0x0009
        .equiv VWORD2,  0x000A
        .equiv VWORD3,  0x000B
        .equiv VWORD4,  0x000C


;----- CRCCON2 Bits -----------------------------------------------------
        .equiv PLEN0,   0x0000
        .equiv PLEN1,   0x0001
        .equiv PLEN2,   0x0002
        .equiv PLEN3,   0x0003
        .equiv PLEN4,   0x0004
        .equiv DWIDTH0, 0x0008
        .equiv DWIDTH1, 0x0009
        .equiv DWIDTH2, 0x000A
        .equiv DWIDTH3, 0x000B
        .equiv DWIDTH4, 0x000C


;----- CRCXORL Bits -----------------------------------------------------
        .equiv X1,      0x0001
        .equiv X2,      0x0002
        .equiv X3,      0x0003
        .equiv X4,      0x0004
        .equiv X5,      0x0005
        .equiv X6,      0x0006
        .equiv X7,      0x0007
        .equiv X8,      0x0008
        .equiv X9,      0x0009
        .equiv X10,     0x000A
        .equiv X11,     0x000B
        .equiv X12,     0x000C
        .equiv X13,     0x000D
        .equiv X14,     0x000E
        .equiv X15,     0x000F


;----- CRCXORH Bits -----------------------------------------------------
        .equiv X16,     0x0000
        .equiv X17,     0x0001
        .equiv X18,     0x0002
        .equiv X19,     0x0003
        .equiv X20,     0x0004
        .equiv X21,     0x0005
        .equiv X22,     0x0006
        .equiv X23,     0x0007
        .equiv X24,     0x0008
        .equiv X25,     0x0009
        .equiv X26,     0x000A
        .equiv X27,     0x000B
        .equiv X28,     0x000C
        .equiv X29,     0x000D
        .equiv X30,     0x000E
        .equiv X31,     0x000F


;----- BUFCON0 Bits -----------------------------------------------------
        .equiv BUFSTBY, 0x0006
        .equiv BUFSLP,  0x000C
        .equiv BUFSIDL, 0x000D
        .equiv BUFEN,   0x000F

        .equiv BUFREF0, 0x0000
        .equiv BUFREF1, 0x0001


;----- BUFCON1 Bits -----------------------------------------------------
       ;.equiv BUFSTBY, 0x0006
        .equiv BUFOE,   0x0007
       ;.equiv BUFSLP,  0x000C
       ;.equiv BUFSIDL, 0x000D
       ;.equiv BUFEN,   0x000F

       ;.equiv BUFREF0, 0x0000
       ;.equiv BUFREF1, 0x0001


;----- BUFCON2 Bits -----------------------------------------------------
       ;.equiv BUFSTBY, 0x0006
       ;.equiv BUFOE,   0x0007
       ;.equiv BUFSLP,  0x000C
       ;.equiv BUFSIDL, 0x000D
       ;.equiv BUFEN,   0x000F

       ;.equiv BUFREF0, 0x0000
       ;.equiv BUFREF1, 0x0001


;----- RPINR0 Bits -----------------------------------------------------
        .equiv OCTRIG1R0, 0x0000
        .equiv OCTRIG1R1, 0x0001
        .equiv OCTRIG1R2, 0x0002
        .equiv OCTRIG1R3, 0x0003
        .equiv OCTRIG1R4, 0x0004
        .equiv OCTRIG1R5, 0x0005
        .equiv INT1R0,  0x0008
        .equiv INT1R1,  0x0009
        .equiv INT1R2,  0x000A
        .equiv INT1R3,  0x000B
        .equiv INT1R4,  0x000C
        .equiv INT1R5,  0x000D


;----- RPINR1 Bits -----------------------------------------------------
        .equiv INT2R0,  0x0000
        .equiv INT2R1,  0x0001
        .equiv INT2R2,  0x0002
        .equiv INT2R3,  0x0003
        .equiv INT2R4,  0x0004
        .equiv INT2R5,  0x0005
        .equiv INT3R0,  0x0008
        .equiv INT3R1,  0x0009
        .equiv INT3R2,  0x000A
        .equiv INT3R3,  0x000B
        .equiv INT3R4,  0x000C
        .equiv INT3R5,  0x000D


;----- RPINR2 Bits -----------------------------------------------------
        .equiv INT4R0,  0x0000
        .equiv INT4R1,  0x0001
        .equiv INT4R2,  0x0002
        .equiv INT4R3,  0x0003
        .equiv INT4R4,  0x0004
        .equiv INT4R5,  0x0005
        .equiv OCTRIG2R0, 0x0008
        .equiv OCTRIG2R1, 0x0009
        .equiv OCTRIG2R2, 0x000A
        .equiv OCTRIG2R3, 0x000B
        .equiv OCTRIG2R4, 0x000C
        .equiv OCTRIG2R5, 0x000D


;----- RPINR7 Bits -----------------------------------------------------
        .equiv IC1R0,   0x0000
        .equiv IC1R1,   0x0001
        .equiv IC1R2,   0x0002
        .equiv IC1R3,   0x0003
        .equiv IC1R4,   0x0004
        .equiv IC1R5,   0x0005
        .equiv IC2R0,   0x0008
        .equiv IC2R1,   0x0009
        .equiv IC2R2,   0x000A
        .equiv IC2R3,   0x000B
        .equiv IC2R4,   0x000C
        .equiv IC2R5,   0x000D


;----- RPINR8 Bits -----------------------------------------------------
        .equiv IC3R0,   0x0000
        .equiv IC3R1,   0x0001
        .equiv IC3R2,   0x0002
        .equiv IC3R3,   0x0003
        .equiv IC3R4,   0x0004
        .equiv IC3R5,   0x0005
        .equiv IC4R0,   0x0008
        .equiv IC4R1,   0x0009
        .equiv IC4R2,   0x000A
        .equiv IC4R3,   0x000B
        .equiv IC4R4,   0x000C
        .equiv IC4R5,   0x000D


;----- RPINR9 Bits -----------------------------------------------------
        .equiv IC5R0,   0x0000
        .equiv IC5R1,   0x0001
        .equiv IC5R2,   0x0002
        .equiv IC5R3,   0x0003
        .equiv IC5R4,   0x0004
        .equiv IC5R5,   0x0005
        .equiv IC6R0,   0x0008
        .equiv IC6R1,   0x0009
        .equiv IC6R2,   0x000A
        .equiv IC6R3,   0x000B
        .equiv IC6R4,   0x000C
        .equiv IC6R5,   0x000D


;----- RPINR10 Bits -----------------------------------------------------
        .equiv IC7R0,   0x0000
        .equiv IC7R1,   0x0001
        .equiv IC7R2,   0x0002
        .equiv IC7R3,   0x0003
        .equiv IC7R4,   0x0004
        .equiv IC7R5,   0x0005
        .equiv IC8R0,   0x0008
        .equiv IC8R1,   0x0009
        .equiv IC8R2,   0x000A
        .equiv IC8R3,   0x000B
        .equiv IC8R4,   0x000C
        .equiv IC8R5,   0x000D


;----- RPINR11 Bits -----------------------------------------------------
        .equiv OCFAR0,  0x0000
        .equiv OCFAR1,  0x0001
        .equiv OCFAR2,  0x0002
        .equiv OCFAR3,  0x0003
        .equiv OCFAR4,  0x0004
        .equiv OCFAR5,  0x0005
        .equiv OCFBR0,  0x0008
        .equiv OCFBR1,  0x0009
        .equiv OCFBR2,  0x000A
        .equiv OCFBR3,  0x000B
        .equiv OCFBR4,  0x000C
        .equiv OCFBR5,  0x000D


;----- RPINR15 Bits -----------------------------------------------------
        .equiv IC9R0,   0x0008
        .equiv IC9R1,   0x0009
        .equiv IC9R2,   0x000A
        .equiv IC9R3,   0x000B
        .equiv IC9R4,   0x000C
        .equiv IC9R5,   0x000D


;----- RPINR17 Bits -----------------------------------------------------
        .equiv U3RXR0,  0x0008
        .equiv U3RXR1,  0x0009
        .equiv U3RXR2,  0x000A
        .equiv U3RXR3,  0x000B
        .equiv U3RXR4,  0x000C
        .equiv U3RXR5,  0x000D


;----- RPINR18 Bits -----------------------------------------------------
        .equiv U1RXR0,  0x0000
        .equiv U1RXR1,  0x0001
        .equiv U1RXR2,  0x0002
        .equiv U1RXR3,  0x0003
        .equiv U1RXR4,  0x0004
        .equiv U1RXR5,  0x0005
        .equiv U1CTSR0, 0x0008
        .equiv U1CTSR1, 0x0009
        .equiv U1CTSR2, 0x000A
        .equiv U1CTSR3, 0x000B
        .equiv U1CTSR4, 0x000C
        .equiv U1CTSR5, 0x000D


;----- RPINR19 Bits -----------------------------------------------------
        .equiv U2RXR0,  0x0000
        .equiv U2RXR1,  0x0001
        .equiv U2RXR2,  0x0002
        .equiv U2RXR3,  0x0003
        .equiv U2RXR4,  0x0004
        .equiv U2RXR5,  0x0005
        .equiv U2CTSR0, 0x0008
        .equiv U2CTSR1, 0x0009
        .equiv U2CTSR2, 0x000A
        .equiv U2CTSR3, 0x000B
        .equiv U2CTSR4, 0x000C
        .equiv U2CTSR5, 0x000D


;----- RPINR20 Bits -----------------------------------------------------
        .equiv SDI1R0,  0x0000
        .equiv SDI1R1,  0x0001
        .equiv SDI1R2,  0x0002
        .equiv SDI1R3,  0x0003
        .equiv SDI1R4,  0x0004
        .equiv SDI1R5,  0x0005
        .equiv SCK1R0,  0x0008
        .equiv SCK1R1,  0x0009
        .equiv SCK1R2,  0x000A
        .equiv SCK1R3,  0x000B
        .equiv SCK1R4,  0x000C
        .equiv SCK1R5,  0x000D


;----- RPINR21 Bits -----------------------------------------------------
        .equiv SS1R0,   0x0000
        .equiv SS1R1,   0x0001
        .equiv SS1R2,   0x0002
        .equiv SS1R3,   0x0003
        .equiv SS1R4,   0x0004
        .equiv SS1R5,   0x0005
        .equiv U3CTSR0, 0x0008
        .equiv U3CTSR1, 0x0009
        .equiv U3CTSR2, 0x000A
        .equiv U3CTSR3, 0x000B
        .equiv U3CTSR4, 0x000C
        .equiv U3CTSR5, 0x000D


;----- RPINR22 Bits -----------------------------------------------------
        .equiv SDI2R0,  0x0000
        .equiv SDI2R1,  0x0001
        .equiv SDI2R2,  0x0002
        .equiv SDI2R3,  0x0003
        .equiv SDI2R4,  0x0004
        .equiv SDI2R5,  0x0005
        .equiv SCK2R0,  0x0008
        .equiv SCK2R1,  0x0009
        .equiv SCK2R2,  0x000A
        .equiv SCK2R3,  0x000B
        .equiv SCK2R4,  0x000C
        .equiv SCK2R5,  0x000D


;----- RPINR23 Bits -----------------------------------------------------
        .equiv SS2R0,   0x0000
        .equiv SS2R1,   0x0001
        .equiv SS2R2,   0x0002
        .equiv SS2R3,   0x0003
        .equiv SS2R4,   0x0004
        .equiv SS2R5,   0x0005
        .equiv TMRCKR0, 0x0008
        .equiv TMRCKR1, 0x0009
        .equiv TMRCKR2, 0x000A
        .equiv TMRCKR3, 0x000B
        .equiv TMRCKR4, 0x000C
        .equiv TMRCKR5, 0x000D


;----- RPINR27 Bits -----------------------------------------------------
        .equiv U4RXR0,  0x0000
        .equiv U4RXR1,  0x0001
        .equiv U4RXR2,  0x0002
        .equiv U4RXR3,  0x0003
        .equiv U4RXR4,  0x0004
        .equiv U4RXR5,  0x0005
        .equiv U4CTSR0, 0x0008
        .equiv U4CTSR1, 0x0009
        .equiv U4CTSR2, 0x000A
        .equiv U4CTSR3, 0x000B
        .equiv U4CTSR4, 0x000C
        .equiv U4CTSR5, 0x000D


;----- RPINR31 Bits -----------------------------------------------------
        .equiv MDC1R0,  0x0000
        .equiv MDC1R1,  0x0001
        .equiv MDC1R2,  0x0002
        .equiv MDC1R3,  0x0003
        .equiv MDC1R4,  0x0004
        .equiv MDC1R5,  0x0005
        .equiv MDC2R0,  0x0008
        .equiv MDC2R1,  0x0009
        .equiv MDC2R2,  0x000A
        .equiv MDC2R3,  0x000B
        .equiv MDC2R4,  0x000C
        .equiv MDC2R5,  0x000D


;----- RPOR0 Bits -----------------------------------------------------
        .equiv RP0R0,   0x0000
        .equiv RP0R1,   0x0001
        .equiv RP0R2,   0x0002
        .equiv RP0R3,   0x0003
        .equiv RP0R4,   0x0004
        .equiv RP0R5,   0x0005
        .equiv RP1R0,   0x0008
        .equiv RP1R1,   0x0009
        .equiv RP1R2,   0x000A
        .equiv RP1R3,   0x000B
        .equiv RP1R4,   0x000C
        .equiv RP1R5,   0x000D


;----- RPOR1 Bits -----------------------------------------------------
        .equiv RP2R0,   0x0000
        .equiv RP2R1,   0x0001
        .equiv RP2R2,   0x0002
        .equiv RP2R3,   0x0003
        .equiv RP2R4,   0x0004
        .equiv RP2R5,   0x0005
        .equiv RP3R0,   0x0008
        .equiv RP3R1,   0x0009
        .equiv RP3R2,   0x000A
        .equiv RP3R3,   0x000B
        .equiv RP3R4,   0x000C
        .equiv RP3R5,   0x000D


;----- RPOR2 Bits -----------------------------------------------------
        .equiv RP4R0,   0x0000
        .equiv RP4R1,   0x0001
        .equiv RP4R2,   0x0002
        .equiv RP4R3,   0x0003
        .equiv RP4R4,   0x0004
        .equiv RP4R5,   0x0005
        .equiv RP5R0,   0x0008
        .equiv RP5R1,   0x0009
        .equiv RP5R2,   0x000A
        .equiv RP5R3,   0x000B
        .equiv RP5R4,   0x000C
        .equiv RP5R5,   0x000D


;----- RPOR3 Bits -----------------------------------------------------
        .equiv RP6R0,   0x0000
        .equiv RP6R1,   0x0001
        .equiv RP6R2,   0x0002
        .equiv RP6R3,   0x0003
        .equiv RP6R4,   0x0004
        .equiv RP6R5,   0x0005
        .equiv RP7R0,   0x0008
        .equiv RP7R1,   0x0009
        .equiv RP7R2,   0x000A
        .equiv RP7R3,   0x000B
        .equiv RP7R4,   0x000C
        .equiv RP7R5,   0x000D


;----- RPOR4 Bits -----------------------------------------------------
        .equiv RP8R0,   0x0000
        .equiv RP8R1,   0x0001
        .equiv RP8R2,   0x0002
        .equiv RP8R3,   0x0003
        .equiv RP8R4,   0x0004
        .equiv RP8R5,   0x0005
        .equiv RP9R0,   0x0008
        .equiv RP9R1,   0x0009
        .equiv RP9R2,   0x000A
        .equiv RP9R3,   0x000B
        .equiv RP9R4,   0x000C
        .equiv RP9R5,   0x000D


;----- RPOR5 Bits -----------------------------------------------------
        .equiv RP10R0,  0x0000
        .equiv RP10R1,  0x0001
        .equiv RP10R2,  0x0002
        .equiv RP10R3,  0x0003
        .equiv RP10R4,  0x0004
        .equiv RP10R5,  0x0005
        .equiv RP11R0,  0x0008
        .equiv RP11R1,  0x0009
        .equiv RP11R2,  0x000A
        .equiv RP11R3,  0x000B
        .equiv RP11R4,  0x000C
        .equiv RP11R5,  0x000D


;----- RPOR6 Bits -----------------------------------------------------
        .equiv RP12R0,  0x0000
        .equiv RP12R1,  0x0001
        .equiv RP12R2,  0x0002
        .equiv RP12R3,  0x0003
        .equiv RP12R4,  0x0004
        .equiv RP12R5,  0x0005
        .equiv RP13R0,  0x0008
        .equiv RP13R1,  0x0009
        .equiv RP13R2,  0x000A
        .equiv RP13R3,  0x000B
        .equiv RP13R4,  0x000C
        .equiv RP13R5,  0x000D


;----- RPOR7 Bits -----------------------------------------------------
        .equiv RP14R0,  0x0000
        .equiv RP14R1,  0x0001
        .equiv RP14R2,  0x0002
        .equiv RP14R3,  0x0003
        .equiv RP14R4,  0x0004
        .equiv RP14R5,  0x0005
        .equiv RP15R0,  0x0008
        .equiv RP15R1,  0x0009
        .equiv RP15R2,  0x000A
        .equiv RP15R3,  0x000B
        .equiv RP15R4,  0x000C
        .equiv RP15R5,  0x000D


;----- RPOR8 Bits -----------------------------------------------------
        .equiv RP16R0,  0x0000
        .equiv RP16R1,  0x0001
        .equiv RP16R2,  0x0002
        .equiv RP16R3,  0x0003
        .equiv RP16R4,  0x0004
        .equiv RP16R5,  0x0005
        .equiv RP17R0,  0x0008
        .equiv RP17R1,  0x0009
        .equiv RP17R2,  0x000A
        .equiv RP17R3,  0x000B
        .equiv RP17R4,  0x000C
        .equiv RP17R5,  0x000D


;----- RPOR9 Bits -----------------------------------------------------
        .equiv RP18R0,  0x0000
        .equiv RP18R1,  0x0001
        .equiv RP18R2,  0x0002
        .equiv RP18R3,  0x0003
        .equiv RP18R4,  0x0004
        .equiv RP18R5,  0x0005
        .equiv RP19R0,  0x0008
        .equiv RP19R1,  0x0009
        .equiv RP19R2,  0x000A
        .equiv RP19R3,  0x000B
        .equiv RP19R4,  0x000C
        .equiv RP19R5,  0x000D


;----- RPOR10 Bits -----------------------------------------------------
        .equiv RP20R0,  0x0000
        .equiv RP20R1,  0x0001
        .equiv RP20R2,  0x0002
        .equiv RP20R3,  0x0003
        .equiv RP20R4,  0x0004
        .equiv RP20R5,  0x0005
        .equiv RP21R0,  0x0008
        .equiv RP21R1,  0x0009
        .equiv RP21R2,  0x000A
        .equiv RP21R3,  0x000B
        .equiv RP21R4,  0x000C
        .equiv RP21R5,  0x000D


;----- RPOR11 Bits -----------------------------------------------------
        .equiv RP22R0,  0x0000
        .equiv RP22R1,  0x0001
        .equiv RP22R2,  0x0002
        .equiv RP22R3,  0x0003
        .equiv RP22R4,  0x0004
        .equiv RP22R5,  0x0005
        .equiv RP23R0,  0x0008
        .equiv RP23R1,  0x0009
        .equiv RP23R2,  0x000A
        .equiv RP23R3,  0x000B
        .equiv RP23R4,  0x000C
        .equiv RP23R5,  0x000D


;----- RPOR12 Bits -----------------------------------------------------
        .equiv RP24R0,  0x0000
        .equiv RP24R1,  0x0001
        .equiv RP24R2,  0x0002
        .equiv RP24R3,  0x0003
        .equiv RP24R4,  0x0004
        .equiv RP24R5,  0x0005
        .equiv RP25R0,  0x0008
        .equiv RP25R1,  0x0009
        .equiv RP25R2,  0x000A
        .equiv RP25R3,  0x000B
        .equiv RP25R4,  0x000C
        .equiv RP25R5,  0x000D


;----- RPOR13 Bits -----------------------------------------------------
        .equiv RP26R0,  0x0000
        .equiv RP26R1,  0x0001
        .equiv RP26R2,  0x0002
        .equiv RP26R3,  0x0003
        .equiv RP26R4,  0x0004
        .equiv RP26R5,  0x0005
        .equiv RP27R0,  0x0008
        .equiv RP27R1,  0x0009
        .equiv RP27R2,  0x000A
        .equiv RP27R3,  0x000B
        .equiv RP27R4,  0x000C
        .equiv RP27R5,  0x000D


;----- RPOR14 Bits -----------------------------------------------------
        .equiv RP28R0,  0x0000
        .equiv RP28R1,  0x0001
        .equiv RP28R2,  0x0002
        .equiv RP28R3,  0x0003
        .equiv RP28R4,  0x0004
        .equiv RP28R5,  0x0005
        .equiv RP29R0,  0x0008
        .equiv RP29R1,  0x0009
        .equiv RP29R2,  0x000A
        .equiv RP29R3,  0x000B
        .equiv RP29R4,  0x000C
        .equiv RP29R5,  0x000D


;----- RPOR15 Bits -----------------------------------------------------
        .equiv RP30R0,  0x0000
        .equiv RP30R1,  0x0001
        .equiv RP30R2,  0x0002
        .equiv RP30R3,  0x0003
        .equiv RP30R4,  0x0004
        .equiv RP30R5,  0x0005
        .equiv RP31R0,  0x0008
        .equiv RP31R1,  0x0009
        .equiv RP31R2,  0x000A
        .equiv RP31R3,  0x000B
        .equiv RP31R4,  0x000C
        .equiv RP31R5,  0x000D


;----- RPOR17 Bits -----------------------------------------------------
        .equiv RP35R0,  0x0008
        .equiv RP35R1,  0x0009
        .equiv RP35R2,  0x000A
        .equiv RP35R3,  0x000B
        .equiv RP35R4,  0x000C
        .equiv RP35R5,  0x000D


;----- RPOR18 Bits -----------------------------------------------------
        .equiv RP36R0,  0x0000
        .equiv RP36R1,  0x0001
        .equiv RP36R2,  0x0002
        .equiv RP36R3,  0x0003
        .equiv RP36R4,  0x0004
        .equiv RP36R5,  0x0005
        .equiv RP37R0,  0x0008
        .equiv RP37R1,  0x0009
        .equiv RP37R2,  0x000A
        .equiv RP37R3,  0x000B
        .equiv RP37R4,  0x000C
        .equiv RP37R5,  0x000D


;----- RCON Bits -----------------------------------------------------
        .equiv POR,     0x0000
        .equiv BOR,     0x0001
        .equiv IDLE,    0x0002
        .equiv SLEEP,   0x0003
        .equiv WDTO,    0x0004
        .equiv SWDTEN,  0x0005
        .equiv SWR,     0x0006
        .equiv EXTR,    0x0007
        .equiv VREGS,   0x0008
        .equiv CM_RCON, 0x0009
        .equiv DPSLP,   0x000A
        .equiv RETEN,   0x000C
        .equiv IOPUWR,  0x000E
        .equiv TRAPR,   0x000F

        .equiv PMSLP,   0x0008


;----- OSCCON Bits -----------------------------------------------------
        .equiv OSWEN,   0x0000
        .equiv SOSCEN,  0x0001
        .equiv POSCEN,  0x0002
        .equiv CF,      0x0003
        .equiv LOCK,    0x0005
        .equiv IOLOCK,  0x0006
        .equiv CLKLOCK, 0x0007

        .equiv NOSC0,   0x0008
        .equiv NOSC1,   0x0009
        .equiv NOSC2,   0x000A
        .equiv COSC0,   0x000C
        .equiv COSC1,   0x000D
        .equiv COSC2,   0x000E


;----- CLKDIV Bits -----------------------------------------------------
        .equiv PLLEN,   0x0005
        .equiv DOZEN,   0x000B
        .equiv ROI,     0x000F

        .equiv CPDIV0,  0x0006
        .equiv CPDIV1,  0x0007
        .equiv RCDIV0,  0x0008
        .equiv RCDIV1,  0x0009
        .equiv RCDIV2,  0x000A
        .equiv DOZE0,   0x000C
        .equiv DOZE1,   0x000D
        .equiv DOZE2,   0x000E


;----- OSCTUN Bits -----------------------------------------------------
        .equiv STORPOL, 0x0008
        .equiv STOR,    0x0009
        .equiv STLPOL,  0x000A
        .equiv STLOCK,  0x000B
        .equiv STSRC,   0x000C
        .equiv STSIDL,  0x000D
        .equiv STEN,    0x000F

        .equiv TUN0,    0x0000
        .equiv TUN1,    0x0001
        .equiv TUN2,    0x0002
        .equiv TUN3,    0x0003
        .equiv TUN4,    0x0004
        .equiv TUN5,    0x0005


;----- REFOCON Bits -----------------------------------------------------
        .equiv ROSEL,   0x000C
        .equiv ROSSLP,  0x000D
        .equiv ROEN,    0x000F

        .equiv RODIV0,  0x0008
        .equiv RODIV1,  0x0009
        .equiv RODIV2,  0x000A
        .equiv RODIV3,  0x000B
        .equiv ROON,    0x000F


;----- HLVDCON Bits -----------------------------------------------------
        .equiv IRVST,   0x0005
        .equiv BGVST,   0x0006
        .equiv VDIR,    0x0007
        .equiv LSIDL,   0x000D
        .equiv HLVDEN,  0x000F

        .equiv HLVDL0,  0x0000
        .equiv HLVDL1,  0x0001
        .equiv HLVDL2,  0x0002
        .equiv HLVDL3,  0x0003
        .equiv HLSIDL,  0x000D


;----- DSCON Bits -----------------------------------------------------
        .equiv RELEASE, 0x0000
        .equiv DSBOR,   0x0001
        .equiv WAKEDIS, 0x0002
        .equiv DSEN,    0x000F


;----- DSWAKE Bits -----------------------------------------------------
        .equiv DSMCLR,  0x0002
        .equiv DSRTCC,  0x0003
        .equiv DSWDT,   0x0004
        .equiv DSFLT,   0x0007
        .equiv DSINT0,  0x0008


;----- NVMCON Bits -----------------------------------------------------
        .equiv ERASE,   0x0006
        .equiv WRERR,   0x000D
        .equiv WREN,    0x000E
        .equiv WR,      0x000F

        .equiv NVMOP0,  0x0000
        .equiv NVMOP1,  0x0001
        .equiv NVMOP2,  0x0002
        .equiv NVMOP3,  0x0003


;----- RCON2 Bits -----------------------------------------------------
        .equiv VBAT,    0x0000
        .equiv VBPOR,   0x0001
        .equiv VDDPOR,  0x0002
        .equiv VDDBOR,  0x0003


;----- PMD1 Bits -----------------------------------------------------
        .equiv ADC1MD,  0x0000
        .equiv SPI1MD,  0x0003
        .equiv SPI2MD,  0x0004
        .equiv U1MD,    0x0005
        .equiv U2MD,    0x0006
        .equiv I2C1MD,  0x0007
        .equiv T1MD,    0x000B
        .equiv T2MD,    0x000C
        .equiv T3MD,    0x000D
        .equiv T4MD,    0x000E
        .equiv T5MD,    0x000F


;----- PMD2 Bits -----------------------------------------------------
        .equiv OC1MD,   0x0000
        .equiv OC2MD,   0x0001
        .equiv OC3MD,   0x0002
        .equiv OC4MD,   0x0003
        .equiv OC5MD,   0x0004
        .equiv OC6MD,   0x0005
        .equiv OC7MD,   0x0006
        .equiv OC8MD,   0x0007
        .equiv IC1MD,   0x0008
        .equiv IC2MD,   0x0009
        .equiv IC3MD,   0x000A
        .equiv IC4MD,   0x000B
        .equiv IC5MD,   0x000C
        .equiv IC6MD,   0x000D
        .equiv IC7MD,   0x000E
        .equiv IC8MD,   0x000F


;----- PMD3 Bits -----------------------------------------------------
        .equiv I2C2MD,  0x0001
        .equiv U3MD,    0x0003
        .equiv DAC1MD,  0x0006
        .equiv CRCMD,   0x0007
        .equiv PMPMD,   0x0008
        .equiv RTCCMD,  0x0009
        .equiv CMPMD,   0x000A
        .equiv DSMMD,   0x000B

        .equiv CRCPMD,  0x0007

        .equiv TXMMD,   0x000B


;----- PMD4 Bits -----------------------------------------------------
        .equiv USB1MD,  0x0000
        .equiv LVDMD,   0x0001
        .equiv CTMUMD,  0x0002
        .equiv REFOMD,  0x0003
        .equiv U4MD,    0x0005
        .equiv UPWMMD,  0x0006

        .equiv USBMD,   0x0000

        .equiv HLVDMD,  0x0001


;----- PMD5 Bits -----------------------------------------------------
        .equiv OC9MD,   0x0000
        .equiv IC9MD,   0x0008


;----- PMD6 Bits -----------------------------------------------------
        .equiv SDADMD,  0x0002
        .equiv AMP2MD,  0x0003
        .equiv DAC2MD,  0x0004
        .equiv AMP1MD,  0x0005
        .equiv LCDMD,   0x0006

        .equiv SDA1MD,  0x0002


;----- PMD7 Bits -----------------------------------------------------
        .equiv DMA0MD,  0x0004
        .equiv DMA1MD,  0x0005


;----- CTMUCON1 Bits -----------------------------------------------------
        .equiv CTTRIG,  0x0008
        .equiv IDISSEN, 0x0009
        .equiv EDGSEQEN, 0x000A
        .equiv EDGEN,   0x000B
        .equiv TGEN,    0x000C
        .equiv CTMUSIDL, 0x000D
        .equiv CTMUEN,  0x000F


;----- CTMUCON2 Bits -----------------------------------------------------
        .equiv EDG2POL, 0x0006
        .equiv EDG2MOD, 0x0007
        .equiv EDG1STAT, 0x0008
        .equiv EDG2STAT, 0x0009
        .equiv EDG1POL, 0x000E
        .equiv EDG1MOD, 0x000F

        .equiv EDG2SEL0, 0x0002
        .equiv EDG2SEL1, 0x0003
        .equiv EDG2SEL2, 0x0004
        .equiv EDG2SEL3, 0x0005
        .equiv EDG1SEL0, 0x000A
        .equiv EDG1SEL1, 0x000B
        .equiv EDG1SEL2, 0x000C
        .equiv EDG1SEL3, 0x000D


;----- CTMUICON Bits -----------------------------------------------------
        .equiv IRNG0,   0x0008
        .equiv IRNG1,   0x0009
        .equiv ITRIM0,  0x000A
        .equiv ITRIM1,  0x000B
        .equiv ITRIM2,  0x000C
        .equiv ITRIM3,  0x000D
        .equiv ITRIM4,  0x000E
        .equiv ITRIM5,  0x000F




;  Some useful macros for PWRSAV instructions

   .equiv SLEEP_MODE, 0x0
   .equiv IDLE_MODE, 0x1


;==========================================================================
;
;   Configuration Words
;
;   Configuration words exist in Program Space and their locations are
;   defined in the device linker script. They can be set in source code
;   or in the MPLAB IDE. Each configuration word should be specified
;   only once (multiple settings may be combined.)
;
;==========================================================================
;
;  Setting configuration words using macros:
;
;  The following macro named 'config' can be used to set configuration words:
;
        .macro config REG, VALUE
        .pushsection \REG.sec, code
        .global \REG
\REG:   .pword \VALUE
        .popsection
        .endm
;
;  For example, to set CONFIG_REG using the macro above, the following line
;  can be pasted only at the beginning of the assembly source code,
;  immediately below the '.include' directive.
;
;        config __CONFIG_REG, SETTING_A & SETTING_B
;
;  Note that the 'config' macro takes two arguments: the first is the name
;  of a configuration word (in this case, __CONFIG_REG), the second argument
;  is a boolean expression that may include multiple settings.
;  The example above would enable SETTING_A and also SETTING_B.
;
;  A description of all possible settings for each configuration word
;  appears below.
;
;==========================================================================
;
;  Setting configuration words without using macros:
;
;  To set configuration words without using the 'config' macro,
;  use the following format:
;
;           .section __CONFIG_REG.sec, code
;           .global __CONFIG_REG
;__CONFIG_REG: .pword SETTING_A & SETTING_B
;
;  This source code is equivalent to the expanded macro from the previous
;  example.
;
;==========================================================================


;----- CONFIG4 (0x157f8) --------------------------------------------------
;
;  The following settings are available for CONFIG4:
;
;   Deep Sleep Watchdog Timer Postscale Select bits:
;     DSWDTPS_DSWDTPS0     1:32 (1 mS)
;     DSWDTPS_DSWDTPS1     1:64 (2.1 mS)
;     DSWDTPS_DSWDTPS2     1:128 (4.1 mS)
;     DSWDTPS_DSWDTPS3     1: 256 (8.3 mS)
;     DSWDTPS_DSWDTPS4     1:512 (16.5 mS)
;     DSWDTPS_DSWDTPS5     1:1024 (33 mS)
;     DSWDTPS_DSWDTPS6     1:2048 (66.1 mS)
;     DSWDTPS_DSWDTPS7     1:4096 (132.1 mS)
;     DSWDTPS_DSWDTPS8     1:8192 (264.3 mS)
;     DSWDTPS_DSWDTPS9     1:16384 (528.5 mS)
;     DSWDTPS_DSWDTPSA     1:32768 (1.057 Secs)
;     DSWDTPS_DSWDTPSB     1:65536 (2.114 Secs)
;     DSWDTPS_DSWDTPSC     1:131072 (4.228 Secs)
;     DSWDTPS_DSWDTPSD     1:262114 (8.456 Secs)
;     DSWDTPS_DSWDTPSE     1:524288 (16.912 Secs)
;     DSWDTPS_DSWDTPSF     1:1048576 (33.825 Secs)
;     DSWDTPS_DSWDTPS10    1:2097152 (67.7 Secs)
;     DSWDTPS_DSWDTPS11    1:4194304 (135.3 Secs)
;     DSWDTPS_DSWDTPS12    1:8388608 (4.5 Minutes)
;     DSWDTPS_DSWDTPS13    1:16777216 (9 Minutes)
;     DSWDTPS_DSWDTPS14    1:33554432 (18 Minutes)
;     DSWDTPS_DSWDTPS15    1:67108864 (36.1 Minutes)
;     DSWDTPS_DSWDTPS16    1:134217728 (72.2 Minutes)
;     DSWDTPS_DSWDTPS17    1:268435456 (2.4 Hours)
;     DSWDTPS_DSWDTPS18    1:536870912 (4.8 Hours)
;     DSWDTPS_DSWDTPS19    1:1073741824 (9.6 Hours)
;     DSWDTPS_DSWDTPS1A    1:2147483648 (19.2 Hours)
;     DSWDTPS_DSWDTPS1B    1:4294967296 (38.5 Hours)
;     DSWDTPS_DSWDTPS1C    1:8589934592 (77 Hours)
;     DSWDTPS_DSWDTPS1D    1:17179869184 (6.4 Days)
;     DSWDTPS_DSWDTPS1E    1:34359738368 (12.8  Days)
;     DSWDTPS_DSWDTPS1F    1:68719476736 (25.7 Days)
;
;   DSWDT Reference Clock Select:
;     DSWDTOSC_SOSC        DSWDT uses SOSC as reference clock
;     DSWDTOSC_LPRC        DSWDT uses LPRC as reference clock
;
;   Deep Sleep BOR Enable bit:
;     DSBOREN_OFF          DSBOR Disabled
;     DSBOREN_ON           DSBOR Enabled
;
;   Deep Sleep Watchdog Timer Enable:
;     DSWDTEN_OFF          DSWDT Disabled
;     DSWDTEN_ON           DSWDT Enabled
;
;   DSEN Bit Enable:
;     DSSWEN_OFF           Deep Sleep operation is always disabled
;     DSSWEN_ON            Deep Sleep is controlled by the register bit DSEN
;
;   RTC Battery Operation Enable:
;     RTCBAT_OFF           RTC operation is discontinued in VBAT
;     RTCBAT_ON            RTC operation is continued through VBAT
;
;   PLL Input Prescaler Select bits:
;     PLLDIV_NODIV         Oscillator used directly (4 MHz input)
;     PLLDIV_DIV2          Oscillator divided by 2 (8 MHz input)
;     PLLDIV_DIV3          Oscillator divided by 3 (12 MHz input)
;     PLLDIV_DIV4          Oscillator divided by 4 (16 MHz input)
;     PLLDIV_DIV5          Oscillator divided by 5 (20 MHz input)
;     PLLDIV_DIV6          Oscillator divided by 6 (24 MHz input)
;     PLLDIV_DIV8          Oscillator divided by 8 (32 MHz input)
;     PLLDIV_DIV12         Oscillator input divided by 12 (48MHz input)
;     PLLDIV_DIS           PLL is disabled
;
;   Alternate I2C2 Location Select bit:
;     I2C2SEL_SEC          I2C2 is multiplexed to SDA2/RF4 and SCL2/RF5
;     I2C2SEL_PRI          I2C2 is multiplexed to SDA2/RA3 and SCL2/RA2 
;
;   PPS IOLOCK Set Only Once Enable bit:
;     IOL1WAY_OFF          The IOLOCK bit can be set and cleared using the unlock sequence
;     IOL1WAY_ON           Once set, the IOLOCK bit cannot be cleared
;
        .equiv DSWDTPS_DSWDTPS0, 0xFFE0 ; 1:32 (1 mS)
        .equiv DSWDTPS_DSWDTPS1, 0xFFE1 ; 1:64 (2.1 mS)
        .equiv DSWDTPS_DSWDTPS2, 0xFFE2 ; 1:128 (4.1 mS)
        .equiv DSWDTPS_DSWDTPS3, 0xFFE3 ; 1: 256 (8.3 mS)
        .equiv DSWDTPS_DSWDTPS4, 0xFFE4 ; 1:512 (16.5 mS)
        .equiv DSWDTPS_DSWDTPS5, 0xFFE5 ; 1:1024 (33 mS)
        .equiv DSWDTPS_DSWDTPS6, 0xFFE6 ; 1:2048 (66.1 mS)
        .equiv DSWDTPS_DSWDTPS7, 0xFFE7 ; 1:4096 (132.1 mS)
        .equiv DSWDTPS_DSWDTPS8, 0xFFE8 ; 1:8192 (264.3 mS)
        .equiv DSWDTPS_DSWDTPS9, 0xFFE9 ; 1:16384 (528.5 mS)
        .equiv DSWDTPS_DSWDTPSA, 0xFFEA ; 1:32768 (1.057 Secs)
        .equiv DSWDTPS_DSWDTPSB, 0xFFEB ; 1:65536 (2.114 Secs)
        .equiv DSWDTPS_DSWDTPSC, 0xFFEC ; 1:131072 (4.228 Secs)
        .equiv DSWDTPS_DSWDTPSD, 0xFFED ; 1:262114 (8.456 Secs)
        .equiv DSWDTPS_DSWDTPSE, 0xFFEE ; 1:524288 (16.912 Secs)
        .equiv DSWDTPS_DSWDTPSF, 0xFFEF ; 1:1048576 (33.825 Secs)
        .equiv DSWDTPS_DSWDTPS10, 0xFFF0 ; 1:2097152 (67.7 Secs)
        .equiv DSWDTPS_DSWDTPS11, 0xFFF1 ; 1:4194304 (135.3 Secs)
        .equiv DSWDTPS_DSWDTPS12, 0xFFF2 ; 1:8388608 (4.5 Minutes)
        .equiv DSWDTPS_DSWDTPS13, 0xFFF3 ; 1:16777216 (9 Minutes)
        .equiv DSWDTPS_DSWDTPS14, 0xFFF4 ; 1:33554432 (18 Minutes)
        .equiv DSWDTPS_DSWDTPS15, 0xFFF5 ; 1:67108864 (36.1 Minutes)
        .equiv DSWDTPS_DSWDTPS16, 0xFFF6 ; 1:134217728 (72.2 Minutes)
        .equiv DSWDTPS_DSWDTPS17, 0xFFF7 ; 1:268435456 (2.4 Hours)
        .equiv DSWDTPS_DSWDTPS18, 0xFFF8 ; 1:536870912 (4.8 Hours)
        .equiv DSWDTPS_DSWDTPS19, 0xFFF9 ; 1:1073741824 (9.6 Hours)
        .equiv DSWDTPS_DSWDTPS1A, 0xFFFA ; 1:2147483648 (19.2 Hours)
        .equiv DSWDTPS_DSWDTPS1B, 0xFFFB ; 1:4294967296 (38.5 Hours)
        .equiv DSWDTPS_DSWDTPS1C, 0xFFFC ; 1:8589934592 (77 Hours)
        .equiv DSWDTPS_DSWDTPS1D, 0xFFFD ; 1:17179869184 (6.4 Days)
        .equiv DSWDTPS_DSWDTPS1E, 0xFFFE ; 1:34359738368 (12.8  Days)
        .equiv DSWDTPS_DSWDTPS1F, 0xFFFF ; 1:68719476736 (25.7 Days)

        .equiv DSWDTOSC_SOSC,   0xFFDF ; DSWDT uses SOSC as reference clock
        .equiv DSWDTOSC_LPRC,   0xFFFF ; DSWDT uses LPRC as reference clock

        .equiv DSBOREN_OFF,     0xFFBF ; DSBOR Disabled
        .equiv DSBOREN_ON,      0xFFFF ; DSBOR Enabled

        .equiv DSWDTEN_OFF,     0xFF7F ; DSWDT Disabled
        .equiv DSWDTEN_ON,      0xFFFF ; DSWDT Enabled

        .equiv DSSWEN_OFF,      0xFEFF ; Deep Sleep operation is always disabled
        .equiv DSSWEN_ON,       0xFFFF ; Deep Sleep is controlled by the register bit DSEN

        .equiv RTCBAT_OFF,      0xFDFF ; RTC operation is discontinued in VBAT
        .equiv RTCBAT_ON,       0xFFFF ; RTC operation is continued through VBAT

        .equiv PLLDIV_NODIV,    0xC3FF ; Oscillator used directly (4 MHz input)
        .equiv PLLDIV_DIV2,     0xC7FF ; Oscillator divided by 2 (8 MHz input)
        .equiv PLLDIV_DIV3,     0xCBFF ; Oscillator divided by 3 (12 MHz input)
        .equiv PLLDIV_DIV4,     0xCFFF ; Oscillator divided by 4 (16 MHz input)
        .equiv PLLDIV_DIV5,     0xD3FF ; Oscillator divided by 5 (20 MHz input)
        .equiv PLLDIV_DIV6,     0xD7FF ; Oscillator divided by 6 (24 MHz input)
        .equiv PLLDIV_DIV8,     0xDBFF ; Oscillator divided by 8 (32 MHz input)
        .equiv PLLDIV_DIV12,    0xDFFF ; Oscillator input divided by 12 (48MHz input)
        .equiv PLLDIV_DIS,      0xFFFF ; PLL is disabled

        .equiv I2C2SEL_SEC,     0xBFFF ; I2C2 is multiplexed to SDA2/RF4 and SCL2/RF5
        .equiv I2C2SEL_PRI,     0xFFFF ; I2C2 is multiplexed to SDA2/RA3 and SCL2/RA2 

        .equiv IOL1WAY_OFF,     0x7FFF ; The IOLOCK bit can be set and cleared using the unlock sequence
        .equiv IOL1WAY_ON,      0xFFFF ; Once set, the IOLOCK bit cannot be cleared


;----- CONFIG3 (0x157fa) --------------------------------------------------
;
;  The following settings are available for CONFIG3:
;
;   Write Protection Flash Page Segment Boundary:
;     WPFP_WPFP0           Page 0 (0x00)
;     WPFP_WPFP1           Page 1 (0x400)
;     WPFP_WPFP2           Page 2 (0x800)
;     WPFP_WPFP3           Page 3 (0xC00)
;     WPFP_WPFP4           Page 4 (0x1000)
;     WPFP_WPFP5           Page 5 (0x1400)
;     WPFP_WPFP6           Page 6 (0x1800)
;     WPFP_WPFP7           Page 7 (0x1C00)
;     WPFP_WPFP8           Page 8 (0x2000)
;     WPFP_WPFP9           Page 9 (0x2400)
;     WPFP_WPFP10          Page 10 (0x2800)
;     WPFP_WPFP11          Page 11 (0x2C00)
;     WPFP_WPFP12          Page 12 (0x3000)
;     WPFP_WPFP13          Page 13 (0x3400)
;     WPFP_WPFP14          Page 14 (0x3800)
;     WPFP_WPFP15          Page 15 (0x3C00)
;     WPFP_WPFP16          Page 16 (0x4000)
;     WPFP_WPFP17          Page 17 (0x4400)
;     WPFP_WPFP18          Page 18 (0x4800)
;     WPFP_WPFP19          Page 19 (0x4C00)
;     WPFP_WPFP20          Page 20 (0x5000)
;     WPFP_WPFP21          Page 21 (0x5400)
;     WPFP_WPFP22          Page 22 (0x5800)
;     WPFP_WPFP23          Page 23 (0x5C00)
;     WPFP_WPFP24          Page 24 (0x6000)
;     WPFP_WPFP25          Page 25 (0x6400)
;     WPFP_WPFP26          Page 26 (0x6800)
;     WPFP_WPFP27          Page 27 (0x6C00)
;     WPFP_WPFP28          Page 28 (0x7000)
;     WPFP_WPFP29          Page 29 (0x7400)
;     WPFP_WPFP30          Page 30 (0x7800)
;     WPFP_WPFP31          Page 31 (0x7C00)
;     WPFP_WPFP32          Page 32 (0x8000)
;     WPFP_WPFP33          Page 33 (0x8400)
;     WPFP_WPFP34          Page 34 (0x8800)
;     WPFP_WPFP35          Page 35 (0x8C00)
;     WPFP_WPFP36          Page 36 (0x9000)
;     WPFP_WPFP37          Page 37 (0x9400)
;     WPFP_WPFP38          Page 38 (0x9800)
;     WPFP_WPFP39          Page 39 (0x9C00)
;     WPFP_WPFP40          Page 40 (0xA000)
;     WPFP_WPFP41          Page 41 (0xA400)
;     WPFP_WPFP42          Page 42 (0xA800)
;     WPFP_WPFP43          Page 43 (0xAC00)
;     WPFP_WPFP44          Page 44 (0xB000)
;     WPFP_WPFP45          Page 45 (0xB400)
;     WPFP_WPFP46          Page 46 (0xB800)
;     WPFP_WPFP47          Page 47 (0xBC00)
;     WPFP_WPFP48          Page 48 (0xC000)
;     WPFP_WPFP49          Page 49 (0xC400)
;     WPFP_WPFP50          Page 50 (0xC800)
;     WPFP_WPFP51          Page 51 (0xCC00)
;     WPFP_WPFP52          Page 52 (0xD000)
;     WPFP_WPFP53          Page 53 (0xD400)
;     WPFP_WPFP54          Page 54 (0xD800)
;     WPFP_WPFP55          Page 55 (0xDC00)
;     WPFP_WPFP56          Page 56 (0xE000)
;     WPFP_WPFP57          Page 57 (0xE400)
;     WPFP_WPFP58          Page 58 (0xE800)
;     WPFP_WPFP59          Page 59 (0xEC00)
;     WPFP_WPFP60          Page 60 (0xF000)
;     WPFP_WPFP61          Page 61 (0xF400)
;     WPFP_WPFP62          Page 62 (0xF800)
;     WPFP_WPFP63          Page 63 (0xFC00)
;     WPFP_WPFP64          Page 64 (0x10000)
;     WPFP_WPFP65          Page 65 (0x10400)
;     WPFP_WPFP66          Page 66 (0x10800)
;     WPFP_WPFP67          Page 67 (0x10C00)
;     WPFP_WPFP68          Page 68 (0x11000)
;     WPFP_WPFP69          Page 69 (0x11400)
;     WPFP_WPFP70          Page 70 (0x11800)
;     WPFP_WPFP71          Page 71 (0x11C00)
;     WPFP_WPFP72          Page 72 (0x12000)
;     WPFP_WPFP73          Page 73 (0x12400)
;     WPFP_WPFP74          Page 74 (0x12800)
;     WPFP_WPFP75          Page 75 (0x12C00)
;     WPFP_WPFP76          Page 76 (0x13000)
;     WPFP_WPFP77          Page 77 (0x13400)
;     WPFP_WPFP78          Page 78 (0x13800)
;     WPFP_WPFP79          Page 79 (0x13C00)
;     WPFP_WPFP80          Page 80 (0x14000)
;     WPFP_WPFP81          Page 81 (0x14400)
;     WPFP_WPFP82          Page 82 (0x14800)
;     WPFP_WPFP83          Page 83 (0x14C00)
;     WPFP_WPFP84          Page 84 (0x15000)
;     WPFP_WPFP85          Page 85 (0x15400)
;     WPFP_WPFP86          Page 86 (0x15800)
;     WPFP_WPFP87          Page 87 (0x15C00)
;     WPFP_WPFP88          Page 88 (0x16000)
;     WPFP_WPFP89          Page 89 (0x16400)
;     WPFP_WPFP90          Page 90 (0x16800)
;     WPFP_WPFP91          Page 91 (0x16C00)
;     WPFP_WPFP92          Page 92 (0x17000)
;     WPFP_WPFP93          Page 93 (0x17400)
;     WPFP_WPFP94          Page 94 (0x17800)
;     WPFP_WPFP95          Page 95 (0x17C00)
;     WPFP_WPFP96          Page 96 (0x18000)
;     WPFP_WPFP97          Page 97 (0x18400)
;     WPFP_WPFP98          Page 98 (0x18800)
;     WPFP_WPFP99          Page 99 (0x18C00)
;     WPFP_WPFP100         Page 100 (0x19000)
;     WPFP_WPFP101         Page 101 (0x19400)
;     WPFP_WPFP102         Page 102 (0x19800)
;     WPFP_WPFP103         Page 103 (0x19C00)
;     WPFP_WPFP104         Page 104 (0x1A000)
;     WPFP_WPFP105         Page 105 (0x1A400)
;     WPFP_WPFP106         Page 106 (0x1A800)
;     WPFP_WPFP107         Page 107 (0x1AC00)
;     WPFP_WPFP108         Page 108 (0x1B000)
;     WPFP_WPFP109         Page 109 (0x1B400)
;     WPFP_WPFP110         Page 110 (0x1B800)
;     WPFP_WPFP111         Page 111 (0x1BC00)
;     WPFP_WPFP112         Page 112 (0x1C000)
;     WPFP_WPFP113         Page 113 (0x1C400)
;     WPFP_WPFP114         Page 114 (0x1C800)
;     WPFP_WPFP115         Page 115 (0x1CC00)
;     WPFP_WPFP116         Page 116 (0x1D000)
;     WPFP_WPFP117         Page 117 (0x1D400)
;     WPFP_WPFP118         Page 118 (0x1D800)
;     WPFP_WPFP119         Page 119 (0x1DC00)
;     WPFP_WPFP120         Page 120 (0x1E000)
;     WPFP_WPFP121         Page 121 (0x1E400)
;     WPFP_WPFP122         Page 122 (0x1E800)
;     WPFP_WPFP123         Page 123 (0x1EC00)
;     WPFP_WPFP124         Page 124 (0x1F000)
;     WPFP_WPFP125         Page 125 (0x1F400)
;     WPFP_WPFP126         Page 126 (0x1F800)
;     WPFP_WPFP127         Page 127 (0x1FC00)
;
;   SOSC Selection bits:
;     SOSCSEL_OFF          Digital (SCLKI) mode
;     SOSCSEL_ON           SOSC circuit selected
;
;   Window Mode Watchdog Timer Window Width Select:
;     WDTWIN_PS75_0        Watch Dog Timer Window Width is 75 percent
;     WDTWIN_PS50_0        Watch Dog Timer Window Width is 50 percent
;     WDTWIN_PS37_5        Watch Dog Timer Window Width is 37.5 percent 
;     WDTWIN_PS25_0        Watch Dog Timer Window Width is 25 percent
;
;   Brown-out Reset Enable:
;     BOREN_OFF            Brown-out Reset Disabled
;     BOREN_ON             Brown-out Reset Enable
;
;   Segment Write Protection Disable:
;     WPDIS_WPEN           Enabled
;     WPDIS_WPDIS          Disabled
;
;   Write Protect Configuration Page Select:
;     WPCFG_WPCFGEN        Enabled
;     WPCFG_WPCFGDIS       Disabled
;
;   Segment Write Protection End Page Select:
;     WPEND_WPSTARTMEM     Write Protect from page 0 to WPFP
;     WPEND_WPENDMEM       Write Protect from WPFP to the last page of memory
;
        .equiv WPFP_WPFP0,      0xFF80 ; Page 0 (0x00)
        .equiv WPFP_WPFP1,      0xFF81 ; Page 1 (0x400)
        .equiv WPFP_WPFP2,      0xFF82 ; Page 2 (0x800)
        .equiv WPFP_WPFP3,      0xFF83 ; Page 3 (0xC00)
        .equiv WPFP_WPFP4,      0xFF84 ; Page 4 (0x1000)
        .equiv WPFP_WPFP5,      0xFF85 ; Page 5 (0x1400)
        .equiv WPFP_WPFP6,      0xFF86 ; Page 6 (0x1800)
        .equiv WPFP_WPFP7,      0xFF87 ; Page 7 (0x1C00)
        .equiv WPFP_WPFP8,      0xFF88 ; Page 8 (0x2000)
        .equiv WPFP_WPFP9,      0xFF89 ; Page 9 (0x2400)
        .equiv WPFP_WPFP10,     0xFF8A ; Page 10 (0x2800)
        .equiv WPFP_WPFP11,     0xFF8B ; Page 11 (0x2C00)
        .equiv WPFP_WPFP12,     0xFF8C ; Page 12 (0x3000)
        .equiv WPFP_WPFP13,     0xFF8D ; Page 13 (0x3400)
        .equiv WPFP_WPFP14,     0xFF8E ; Page 14 (0x3800)
        .equiv WPFP_WPFP15,     0xFF8F ; Page 15 (0x3C00)
        .equiv WPFP_WPFP16,     0xFF90 ; Page 16 (0x4000)
        .equiv WPFP_WPFP17,     0xFF91 ; Page 17 (0x4400)
        .equiv WPFP_WPFP18,     0xFF92 ; Page 18 (0x4800)
        .equiv WPFP_WPFP19,     0xFF93 ; Page 19 (0x4C00)
        .equiv WPFP_WPFP20,     0xFF94 ; Page 20 (0x5000)
        .equiv WPFP_WPFP21,     0xFF95 ; Page 21 (0x5400)
        .equiv WPFP_WPFP22,     0xFF96 ; Page 22 (0x5800)
        .equiv WPFP_WPFP23,     0xFF97 ; Page 23 (0x5C00)
        .equiv WPFP_WPFP24,     0xFF98 ; Page 24 (0x6000)
        .equiv WPFP_WPFP25,     0xFF99 ; Page 25 (0x6400)
        .equiv WPFP_WPFP26,     0xFF9A ; Page 26 (0x6800)
        .equiv WPFP_WPFP27,     0xFF9B ; Page 27 (0x6C00)
        .equiv WPFP_WPFP28,     0xFF9C ; Page 28 (0x7000)
        .equiv WPFP_WPFP29,     0xFF9D ; Page 29 (0x7400)
        .equiv WPFP_WPFP30,     0xFF9E ; Page 30 (0x7800)
        .equiv WPFP_WPFP31,     0xFF9F ; Page 31 (0x7C00)
        .equiv WPFP_WPFP32,     0xFFA0 ; Page 32 (0x8000)
        .equiv WPFP_WPFP33,     0xFFA1 ; Page 33 (0x8400)
        .equiv WPFP_WPFP34,     0xFFA2 ; Page 34 (0x8800)
        .equiv WPFP_WPFP35,     0xFFA3 ; Page 35 (0x8C00)
        .equiv WPFP_WPFP36,     0xFFA4 ; Page 36 (0x9000)
        .equiv WPFP_WPFP37,     0xFFA5 ; Page 37 (0x9400)
        .equiv WPFP_WPFP38,     0xFFA6 ; Page 38 (0x9800)
        .equiv WPFP_WPFP39,     0xFFA7 ; Page 39 (0x9C00)
        .equiv WPFP_WPFP40,     0xFFA8 ; Page 40 (0xA000)
        .equiv WPFP_WPFP41,     0xFFA9 ; Page 41 (0xA400)
        .equiv WPFP_WPFP42,     0xFFAA ; Page 42 (0xA800)
        .equiv WPFP_WPFP43,     0xFFAB ; Page 43 (0xAC00)
        .equiv WPFP_WPFP44,     0xFFAC ; Page 44 (0xB000)
        .equiv WPFP_WPFP45,     0xFFAD ; Page 45 (0xB400)
        .equiv WPFP_WPFP46,     0xFFAE ; Page 46 (0xB800)
        .equiv WPFP_WPFP47,     0xFFAF ; Page 47 (0xBC00)
        .equiv WPFP_WPFP48,     0xFFB0 ; Page 48 (0xC000)
        .equiv WPFP_WPFP49,     0xFFB1 ; Page 49 (0xC400)
        .equiv WPFP_WPFP50,     0xFFB2 ; Page 50 (0xC800)
        .equiv WPFP_WPFP51,     0xFFB3 ; Page 51 (0xCC00)
        .equiv WPFP_WPFP52,     0xFFB4 ; Page 52 (0xD000)
        .equiv WPFP_WPFP53,     0xFFB5 ; Page 53 (0xD400)
        .equiv WPFP_WPFP54,     0xFFB6 ; Page 54 (0xD800)
        .equiv WPFP_WPFP55,     0xFFB7 ; Page 55 (0xDC00)
        .equiv WPFP_WPFP56,     0xFFB8 ; Page 56 (0xE000)
        .equiv WPFP_WPFP57,     0xFFB9 ; Page 57 (0xE400)
        .equiv WPFP_WPFP58,     0xFFBA ; Page 58 (0xE800)
        .equiv WPFP_WPFP59,     0xFFBB ; Page 59 (0xEC00)
        .equiv WPFP_WPFP60,     0xFFBC ; Page 60 (0xF000)
        .equiv WPFP_WPFP61,     0xFFBD ; Page 61 (0xF400)
        .equiv WPFP_WPFP62,     0xFFBE ; Page 62 (0xF800)
        .equiv WPFP_WPFP63,     0xFFBF ; Page 63 (0xFC00)
        .equiv WPFP_WPFP64,     0xFFC0 ; Page 64 (0x10000)
        .equiv WPFP_WPFP65,     0xFFC1 ; Page 65 (0x10400)
        .equiv WPFP_WPFP66,     0xFFC2 ; Page 66 (0x10800)
        .equiv WPFP_WPFP67,     0xFFC3 ; Page 67 (0x10C00)
        .equiv WPFP_WPFP68,     0xFFC4 ; Page 68 (0x11000)
        .equiv WPFP_WPFP69,     0xFFC5 ; Page 69 (0x11400)
        .equiv WPFP_WPFP70,     0xFFC6 ; Page 70 (0x11800)
        .equiv WPFP_WPFP71,     0xFFC7 ; Page 71 (0x11C00)
        .equiv WPFP_WPFP72,     0xFFC8 ; Page 72 (0x12000)
        .equiv WPFP_WPFP73,     0xFFC9 ; Page 73 (0x12400)
        .equiv WPFP_WPFP74,     0xFFCA ; Page 74 (0x12800)
        .equiv WPFP_WPFP75,     0xFFCB ; Page 75 (0x12C00)
        .equiv WPFP_WPFP76,     0xFFCC ; Page 76 (0x13000)
        .equiv WPFP_WPFP77,     0xFFCD ; Page 77 (0x13400)
        .equiv WPFP_WPFP78,     0xFFCE ; Page 78 (0x13800)
        .equiv WPFP_WPFP79,     0xFFCF ; Page 79 (0x13C00)
        .equiv WPFP_WPFP80,     0xFFD0 ; Page 80 (0x14000)
        .equiv WPFP_WPFP81,     0xFFD1 ; Page 81 (0x14400)
        .equiv WPFP_WPFP82,     0xFFD2 ; Page 82 (0x14800)
        .equiv WPFP_WPFP83,     0xFFD3 ; Page 83 (0x14C00)
        .equiv WPFP_WPFP84,     0xFFD4 ; Page 84 (0x15000)
        .equiv WPFP_WPFP85,     0xFFD5 ; Page 85 (0x15400)
        .equiv WPFP_WPFP86,     0xFFD6 ; Page 86 (0x15800)
        .equiv WPFP_WPFP87,     0xFFD7 ; Page 87 (0x15C00)
        .equiv WPFP_WPFP88,     0xFFD8 ; Page 88 (0x16000)
        .equiv WPFP_WPFP89,     0xFFD9 ; Page 89 (0x16400)
        .equiv WPFP_WPFP90,     0xFFDA ; Page 90 (0x16800)
        .equiv WPFP_WPFP91,     0xFFDB ; Page 91 (0x16C00)
        .equiv WPFP_WPFP92,     0xFFDC ; Page 92 (0x17000)
        .equiv WPFP_WPFP93,     0xFFDD ; Page 93 (0x17400)
        .equiv WPFP_WPFP94,     0xFFDE ; Page 94 (0x17800)
        .equiv WPFP_WPFP95,     0xFFDF ; Page 95 (0x17C00)
        .equiv WPFP_WPFP96,     0xFFE0 ; Page 96 (0x18000)
        .equiv WPFP_WPFP97,     0xFFE1 ; Page 97 (0x18400)
        .equiv WPFP_WPFP98,     0xFFE2 ; Page 98 (0x18800)
        .equiv WPFP_WPFP99,     0xFFE3 ; Page 99 (0x18C00)
        .equiv WPFP_WPFP100,    0xFFE4 ; Page 100 (0x19000)
        .equiv WPFP_WPFP101,    0xFFE5 ; Page 101 (0x19400)
        .equiv WPFP_WPFP102,    0xFFE6 ; Page 102 (0x19800)
        .equiv WPFP_WPFP103,    0xFFE7 ; Page 103 (0x19C00)
        .equiv WPFP_WPFP104,    0xFFE8 ; Page 104 (0x1A000)
        .equiv WPFP_WPFP105,    0xFFE9 ; Page 105 (0x1A400)
        .equiv WPFP_WPFP106,    0xFFEA ; Page 106 (0x1A800)
        .equiv WPFP_WPFP107,    0xFFEB ; Page 107 (0x1AC00)
        .equiv WPFP_WPFP108,    0xFFEC ; Page 108 (0x1B000)
        .equiv WPFP_WPFP109,    0xFFED ; Page 109 (0x1B400)
        .equiv WPFP_WPFP110,    0xFFEE ; Page 110 (0x1B800)
        .equiv WPFP_WPFP111,    0xFFEF ; Page 111 (0x1BC00)
        .equiv WPFP_WPFP112,    0xFFF0 ; Page 112 (0x1C000)
        .equiv WPFP_WPFP113,    0xFFF1 ; Page 113 (0x1C400)
        .equiv WPFP_WPFP114,    0xFFF2 ; Page 114 (0x1C800)
        .equiv WPFP_WPFP115,    0xFFF3 ; Page 115 (0x1CC00)
        .equiv WPFP_WPFP116,    0xFFF4 ; Page 116 (0x1D000)
        .equiv WPFP_WPFP117,    0xFFF5 ; Page 117 (0x1D400)
        .equiv WPFP_WPFP118,    0xFFF6 ; Page 118 (0x1D800)
        .equiv WPFP_WPFP119,    0xFFF7 ; Page 119 (0x1DC00)
        .equiv WPFP_WPFP120,    0xFFF8 ; Page 120 (0x1E000)
        .equiv WPFP_WPFP121,    0xFFF9 ; Page 121 (0x1E400)
        .equiv WPFP_WPFP122,    0xFFFA ; Page 122 (0x1E800)
        .equiv WPFP_WPFP123,    0xFFFB ; Page 123 (0x1EC00)
        .equiv WPFP_WPFP124,    0xFFFC ; Page 124 (0x1F000)
        .equiv WPFP_WPFP125,    0xFFFD ; Page 125 (0x1F400)
        .equiv WPFP_WPFP126,    0xFFFE ; Page 126 (0x1F800)
        .equiv WPFP_WPFP127,    0xFFFF ; Page 127 (0x1FC00)

        .equiv SOSCSEL_OFF,     0xFEFF ; Digital (SCLKI) mode
        .equiv SOSCSEL_ON,      0xFFFF ; SOSC circuit selected

        .equiv WDTWIN_PS75_0,   0xF9FF ; Watch Dog Timer Window Width is 75 percent
        .equiv WDTWIN_PS50_0,   0xFBFF ; Watch Dog Timer Window Width is 50 percent
        .equiv WDTWIN_PS37_5,   0xFDFF ; Watch Dog Timer Window Width is 37.5 percent 
        .equiv WDTWIN_PS25_0,   0xFFFF ; Watch Dog Timer Window Width is 25 percent

        .equiv BOREN_OFF,       0xEFFF ; Brown-out Reset Disabled
        .equiv BOREN_ON,        0xFFFF ; Brown-out Reset Enable

        .equiv WPDIS_WPEN,      0xDFFF ; Enabled
        .equiv WPDIS_WPDIS,     0xFFFF ; Disabled

        .equiv WPCFG_WPCFGEN,   0xBFFF ; Enabled
        .equiv WPCFG_WPCFGDIS,  0xFFFF ; Disabled

        .equiv WPEND_WPSTARTMEM, 0x7FFF ; Write Protect from page 0 to WPFP
        .equiv WPEND_WPENDMEM,  0xFFFF ; Write Protect from WPFP to the last page of memory


;----- CONFIG2 (0x157fc) --------------------------------------------------
;
;  The following settings are available for CONFIG2:
;
;   Primary Oscillator Select:
;     POSCMD_EC            External-Clock Mode Enabled
;     POSCMD_XT            XT Oscillator Enabled
;     POSCMD_HS            HS Oscillator Enabled
;     POSCMD_NONE          Primary Oscillator Disabled
;
;   WDT Clock Source Select bits:
;     WDTCLK_SYSCLK        WDT uses system clock when active, LPRC while in Sleep mode
;     WDTCLK_SOSC          WDT uses SOSC input
;     WDTCLK_FRC           WDT uses 31 kHz source from FRC when active in Windowed WDT
;     WDTCLK_LPRC          WDT uses LPRC
;
;   OSCO Pin Configuration:
;     OSCIOFCN_ON          OSCO/CLKO/RC15 functions as port I/O (RC15)
;     OSCIOFCN_OFF         OSCO/CLKO/RC15 functions as CLKO (FOSC/2)
;
;   Clock Switching and Fail-Safe Clock Monitor Configuration bits:
;     FCKSM_CSECME         Clock switching is enabled, Fail-Safe Clock Monitor is enabled
;     FCKSM_CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
;     FCKSM_CSDCMD         Clock switching and Fail-Safe Clock Monitor are disabled
;
;   Initial Oscillator Select:
;     FNOSC_FRC            Fast RC Oscillator (FRC)
;     FNOSC_FRCPLL         Fast RC Oscillator with PLL module (FRCPLL)
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary Oscillator with PLL module (XTPLL,HSPLL, ECPLL)
;     FNOSC_SOSC           Secondary Oscillator (SOSC)
;     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
;     FNOSC_FRCDIV         Fast RC Oscillator with Postscaler (FRCDIV)
;
;   External 12-Bit A/D Reference Location Select bit:
;     ALTADREF_AVREF_RB    AVREF+/AVREF- are mapped to RB0/RB1
;     ALTADREF_AVREF_RA    AVREF+/AVREF- are mapped to RA9/RA10
;
;   External Comparator Reference Location Select bit:
;     ALTCVREF_CVREF_RB    CVREF+/CVREF- are mapped to RB0/RB1
;     ALTCVREF_CVREF_RA    CVREF+/CVREF- are mapped to RA9/RA10
;
;   WDT Clock Source Select bits:
;     WDTCMX_LPRC          WDT always uses LPRC as its clock source
;     WDTCMX_WDTCLK        WDT clock source is determined by the WDTCLK Configuration bits
;
;   Internal External Switchover:
;     IESO_OFF             Disabled
;     IESO_ON              Enabled
;
        .equiv POSCMD_EC,       0xFFFC ; External-Clock Mode Enabled
        .equiv POSCMD_XT,       0xFFFD ; XT Oscillator Enabled
        .equiv POSCMD_HS,       0xFFFE ; HS Oscillator Enabled
        .equiv POSCMD_NONE,     0xFFFF ; Primary Oscillator Disabled

        .equiv WDTCLK_SYSCLK,   0xFFE7 ; WDT uses system clock when active, LPRC while in Sleep mode
        .equiv WDTCLK_SOSC,     0xFFEF ; WDT uses SOSC input
        .equiv WDTCLK_FRC,      0xFFF7 ; WDT uses 31 kHz source from FRC when active in Windowed WDT
        .equiv WDTCLK_LPRC,     0xFFFF ; WDT uses LPRC

        .equiv OSCIOFCN_ON,     0xFFDF ; OSCO/CLKO/RC15 functions as port I/O (RC15)
        .equiv OSCIOFCN_OFF,    0xFFFF ; OSCO/CLKO/RC15 functions as CLKO (FOSC/2)

        .equiv FCKSM_CSECME,    0xFF3F ; Clock switching is enabled, Fail-Safe Clock Monitor is enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Clock switching is enabled, Fail-Safe Clock Monitor is disabled
        .equiv FCKSM_CSDCMD,    0xFFBF ; Clock switching and Fail-Safe Clock Monitor are disabled

        .equiv FNOSC_FRC,       0xF8FF ; Fast RC Oscillator (FRC)
        .equiv FNOSC_FRCPLL,    0xF9FF ; Fast RC Oscillator with PLL module (FRCPLL)
        .equiv FNOSC_PRI,       0xFAFF ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFBFF ; Primary Oscillator with PLL module (XTPLL,HSPLL, ECPLL)
        .equiv FNOSC_SOSC,      0xFCFF ; Secondary Oscillator (SOSC)
        .equiv FNOSC_LPRC,      0xFDFF ; Low-Power RC Oscillator (LPRC)
        .equiv FNOSC_FRCDIV,    0xFFFF ; Fast RC Oscillator with Postscaler (FRCDIV)

        .equiv ALTADREF_AVREF_RB, 0xF7FF ; AVREF+/AVREF- are mapped to RB0/RB1
        .equiv ALTADREF_AVREF_RA, 0xFFFF ; AVREF+/AVREF- are mapped to RA9/RA10

        .equiv ALTCVREF_CVREF_RB, 0xEFFF ; CVREF+/CVREF- are mapped to RB0/RB1
        .equiv ALTCVREF_CVREF_RA, 0xFFFF ; CVREF+/CVREF- are mapped to RA9/RA10

        .equiv WDTCMX_LPRC,     0xDFFF ; WDT always uses LPRC as its clock source
        .equiv WDTCMX_WDTCLK,   0xFFFF ; WDT clock source is determined by the WDTCLK Configuration bits

        .equiv IESO_OFF,        0x7FFF ; Disabled
        .equiv IESO_ON,         0xFFFF ; Enabled


;----- CONFIG1 (0x157fe) --------------------------------------------------
;
;  The following settings are available for CONFIG1:
;
;   Watchdog Timer Postscaler Select:
;     WDTPS_PS1            1:1
;     WDTPS_PS2            1:2
;     WDTPS_PS4            1:4
;     WDTPS_PS8            1:8
;     WDTPS_PS16           1:16
;     WDTPS_PS32           1:32
;     WDTPS_PS64           1:64
;     WDTPS_PS128          1:128
;     WDTPS_PS256          1:256
;     WDTPS_PS512          1:512
;     WDTPS_PS1024         1:1,024
;     WDTPS_PS2048         1:2,048
;     WDTPS_PS4096         1:4,096
;     WDTPS_PS8192         1:8,192
;     WDTPS_PS16384        1:16,384
;     WDTPS_PS32768        1:32,768
;
;   WDT Prescaler Ratio Select:
;     FWPSA_PR32           1:32
;     FWPSA_PR128          1:128
;
;   Windowed WDT Disable:
;     WINDIS_ON            Windowed Watchdog Timer
;     WINDIS_OFF           Standard Watchdog Timer
;
;   Watchdog Timer Enable:
;     FWDTEN_WDT_DIS       WDT disabled in hardware; SWDTEN bit disabled
;     FWDTEN_WDT_ACT       WDT enabled only while device active and disabled in Sleep
;     FWDTEN_WDT_SW        WDT controlled with the SWDTEN bit
;     FWDTEN_WDT_HW        WDT enabled in hardware
;
;   Emulator Pin Placement Select bits:
;     ICS_PGx3             Emulator functions are shared with PGEC3/PGED3
;     ICS_PGx2             Emulator functions are shared with PGEC2/PGED2
;     ICS_PGx1             Emulator functions are shared with PGEC1/PGED1
;
;   Low power regulator control:
;     LPCFG_ON             Low voltage regulator controlled in sw by RETEN bit
;     LPCFG_OFF            Disabled - regardless of RETEN
;
;   General Segment Write Protect:
;     GWRP_ON              Enabled
;     GWRP_OFF             Disabled
;
;   General Segment Code Protect:
;     GCP_ON               Code protection is enabled
;     GCP_OFF              Code protection is disabled
;
;   JTAG Port Enable:
;     JTAGEN_OFF           Disabled
;     JTAGEN_ON            Enabled
;
        .equiv WDTPS_PS1,       0x7FF0 ; 1:1
        .equiv WDTPS_PS2,       0x7FF1 ; 1:2
        .equiv WDTPS_PS4,       0x7FF2 ; 1:4
        .equiv WDTPS_PS8,       0x7FF3 ; 1:8
        .equiv WDTPS_PS16,      0x7FF4 ; 1:16
        .equiv WDTPS_PS32,      0x7FF5 ; 1:32
        .equiv WDTPS_PS64,      0x7FF6 ; 1:64
        .equiv WDTPS_PS128,     0x7FF7 ; 1:128
        .equiv WDTPS_PS256,     0x7FF8 ; 1:256
        .equiv WDTPS_PS512,     0x7FF9 ; 1:512
        .equiv WDTPS_PS1024,    0x7FFA ; 1:1,024
        .equiv WDTPS_PS2048,    0x7FFB ; 1:2,048
        .equiv WDTPS_PS4096,    0x7FFC ; 1:4,096
        .equiv WDTPS_PS8192,    0x7FFD ; 1:8,192
        .equiv WDTPS_PS16384,   0x7FFE ; 1:16,384
        .equiv WDTPS_PS32768,   0x7FFF ; 1:32,768

        .equiv FWPSA_PR32,      0x7FEF ; 1:32
        .equiv FWPSA_PR128,     0x7FFF ; 1:128

        .equiv WINDIS_ON,       0x7FDF ; Windowed Watchdog Timer
        .equiv WINDIS_OFF,      0x7FFF ; Standard Watchdog Timer

        .equiv FWDTEN_WDT_DIS,  0x7F3F ; WDT disabled in hardware; SWDTEN bit disabled
        .equiv FWDTEN_WDT_ACT,  0x7F7F ; WDT enabled only while device active and disabled in Sleep
        .equiv FWDTEN_WDT_SW,   0x7FBF ; WDT controlled with the SWDTEN bit
        .equiv FWDTEN_WDT_HW,   0x7FFF ; WDT enabled in hardware

        .equiv ICS_PGx3,        0x7DFF ; Emulator functions are shared with PGEC3/PGED3
        .equiv ICS_PGx2,        0x7EFF ; Emulator functions are shared with PGEC2/PGED2
        .equiv ICS_PGx1,        0x7FFF ; Emulator functions are shared with PGEC1/PGED1

        .equiv LPCFG_ON,        0x7BFF ; Low voltage regulator controlled in sw by RETEN bit
        .equiv LPCFG_OFF,       0x7FFF ; Disabled - regardless of RETEN

        .equiv GWRP_ON,         0x6FFF ; Enabled
        .equiv GWRP_OFF,        0x7FFF ; Disabled

        .equiv GCP_ON,          0x5FFF ; Code protection is enabled
        .equiv GCP_OFF,         0x7FFF ; Code protection is disabled

        .equiv JTAGEN_OFF,      0x3FFF ; Disabled
        .equiv JTAGEN_ON,       0x7FFF ; Enabled


.LIST
