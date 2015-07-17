;==========================================================================
;  PIC24FJ256DA206 Standard Assembly Include File
; 
;  (c) Copyright 2014 Microchip Technology, All rights reserved
;  Part support version v1.22.A(19-Aug-2014)
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC24FJ256DA206 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p24FJ256DA206
;       2. Placing a ".equ" directive before the ".include":
;               .equ __24FJ256DA206, 1
;               .include "p24FJ256DA206.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __24FJ256DA206
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

        .extern I2C3RCV
        .equiv  I2C3RCVL, _I2C3RCV
        .equiv  I2C3RCVH, _I2C3RCV+1

        .extern I2C3TRN
        .equiv  I2C3TRNL, _I2C3TRN
        .equiv  I2C3TRNH, _I2C3TRN+1

        .extern I2C3BRG
        .equiv  I2C3BRGL, _I2C3BRG
        .equiv  I2C3BRGH, _I2C3BRG+1

        .extern I2C3CON
        .equiv  I2C3CONL, _I2C3CON
        .equiv  I2C3CONH, _I2C3CON+1

        .extern I2C3STAT
        .equiv  I2C3STATL, _I2C3STAT
        .equiv  I2C3STATH, _I2C3STAT+1

        .extern I2C3ADD
        .equiv  I2C3ADDL, _I2C3ADD
        .equiv  I2C3ADDH, _I2C3ADD+1

        .extern I2C3MSK
        .equiv  I2C3MSKL, _I2C3MSK
        .equiv  I2C3MSKH, _I2C3MSK+1

        .extern SPI3STAT
        .equiv  SPI3STATL, _SPI3STAT
        .equiv  SPI3STATH, _SPI3STAT+1

        .extern SPI3CON1
        .equiv  SPI3CON1L, _SPI3CON1
        .equiv  SPI3CON1H, _SPI3CON1+1

        .extern SPI3CON2
        .equiv  SPI3CON2L, _SPI3CON2
        .equiv  SPI3CON2H, _SPI3CON2+1

        .extern SPI3BUF
        .equiv  SPI3BUFL, _SPI3BUF
        .equiv  SPI3BUFH, _SPI3BUF+1

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

        .extern ADC1BUF0
        .equiv  ADC1BUF0L, _ADC1BUF0
        .equiv  ADC1BUF0H, _ADC1BUF0+1

        .extern ADC1BUF1
        .equiv  ADC1BUF1L, _ADC1BUF1
        .equiv  ADC1BUF1H, _ADC1BUF1+1

        .extern ADC1BUF2
        .equiv  ADC1BUF2L, _ADC1BUF2
        .equiv  ADC1BUF2H, _ADC1BUF2+1

        .extern ADC1BUF3
        .equiv  ADC1BUF3L, _ADC1BUF3
        .equiv  ADC1BUF3H, _ADC1BUF3+1

        .extern ADC1BUF4
        .equiv  ADC1BUF4L, _ADC1BUF4
        .equiv  ADC1BUF4H, _ADC1BUF4+1

        .extern ADC1BUF5
        .equiv  ADC1BUF5L, _ADC1BUF5
        .equiv  ADC1BUF5H, _ADC1BUF5+1

        .extern ADC1BUF6
        .equiv  ADC1BUF6L, _ADC1BUF6
        .equiv  ADC1BUF6H, _ADC1BUF6+1

        .extern ADC1BUF7
        .equiv  ADC1BUF7L, _ADC1BUF7
        .equiv  ADC1BUF7H, _ADC1BUF7+1

        .extern ADC1BUF8
        .equiv  ADC1BUF8L, _ADC1BUF8
        .equiv  ADC1BUF8H, _ADC1BUF8+1

        .extern ADC1BUF9
        .equiv  ADC1BUF9L, _ADC1BUF9
        .equiv  ADC1BUF9H, _ADC1BUF9+1

        .extern ADC1BUFA
        .equiv  ADC1BUFAL, _ADC1BUFA
        .equiv  ADC1BUFAH, _ADC1BUFA+1

        .extern ADC1BUFB
        .equiv  ADC1BUFBL, _ADC1BUFB
        .equiv  ADC1BUFBH, _ADC1BUFB+1

        .extern ADC1BUFC
        .equiv  ADC1BUFCL, _ADC1BUFC
        .equiv  ADC1BUFCH, _ADC1BUFC+1

        .extern ADC1BUFD
        .equiv  ADC1BUFDL, _ADC1BUFD
        .equiv  ADC1BUFDH, _ADC1BUFD+1

        .extern ADC1BUFE
        .equiv  ADC1BUFEL, _ADC1BUFE
        .equiv  ADC1BUFEH, _ADC1BUFE+1

        .extern ADC1BUFF
        .equiv  ADC1BUFFL, _ADC1BUFF
        .equiv  ADC1BUFFH, _ADC1BUFF+1

        .extern AD1CON1
        .equiv  AD1CON1L, _AD1CON1
        .equiv  AD1CON1H, _AD1CON1+1

        .extern AD1CON2
        .equiv  AD1CON2L, _AD1CON2
        .equiv  AD1CON2H, _AD1CON2+1

        .extern AD1CON3
        .equiv  AD1CON3L, _AD1CON3
        .equiv  AD1CON3H, _AD1CON3+1

        .extern AD1CHS
        .equiv  AD1CHSL, _AD1CHS
        .equiv  AD1CHSH, _AD1CHS+1

        .extern AD1CHS0
        .equiv  AD1CHS0L, _AD1CHS0
        .equiv  AD1CHS0H, _AD1CHS0+1

        .extern AD1CSSH
        .equiv  AD1CSSHL, _AD1CSSH
        .equiv  AD1CSSHH, _AD1CSSH+1

        .extern AD1CSSL
        .equiv  AD1CSSLL, _AD1CSSL
        .equiv  AD1CSSLH, _AD1CSSL+1

        .extern CTMUCON
        .equiv  CTMUCONL, _CTMUCON
        .equiv  CTMUCONH, _CTMUCON+1

        .extern CTMUICON
        .equiv  CTMUICONL, _CTMUICON
        .equiv  CTMUICONH, _CTMUICON+1

        .extern ADC1BUF10
        .equiv  ADC1BUF10L, _ADC1BUF10
        .equiv  ADC1BUF10H, _ADC1BUF10+1

        .extern ADC1BUF11
        .equiv  ADC1BUF11L, _ADC1BUF11
        .equiv  ADC1BUF11H, _ADC1BUF11+1

        .extern ADC1BUF12
        .equiv  ADC1BUF12L, _ADC1BUF12
        .equiv  ADC1BUF12H, _ADC1BUF12+1

        .extern ADC1BUF13
        .equiv  ADC1BUF13L, _ADC1BUF13
        .equiv  ADC1BUF13H, _ADC1BUF13+1

        .extern ADC1BUF14
        .equiv  ADC1BUF14L, _ADC1BUF14
        .equiv  ADC1BUF14H, _ADC1BUF14+1

        .extern ADC1BUF15
        .equiv  ADC1BUF15L, _ADC1BUF15
        .equiv  ADC1BUF15H, _ADC1BUF15+1

        .extern ADC1BUF16
        .equiv  ADC1BUF16L, _ADC1BUF16
        .equiv  ADC1BUF16H, _ADC1BUF16+1

        .extern ADC1BUF17
        .equiv  ADC1BUF17L, _ADC1BUF17
        .equiv  ADC1BUF17H, _ADC1BUF17+1

        .extern ADC1BUF18
        .equiv  ADC1BUF18L, _ADC1BUF18
        .equiv  ADC1BUF18H, _ADC1BUF18+1

        .extern ADC1BUF19
        .equiv  ADC1BUF19L, _ADC1BUF19
        .equiv  ADC1BUF19H, _ADC1BUF19+1

        .extern ADC1BUF1A
        .equiv  ADC1BUF1AL, _ADC1BUF1A
        .equiv  ADC1BUF1AH, _ADC1BUF1A+1

        .extern ADC1BUF1B
        .equiv  ADC1BUF1BL, _ADC1BUF1B
        .equiv  ADC1BUF1BH, _ADC1BUF1B+1

        .extern ADC1BUF1C
        .equiv  ADC1BUF1CL, _ADC1BUF1C
        .equiv  ADC1BUF1CH, _ADC1BUF1C+1

        .extern ADC1BUF1D
        .equiv  ADC1BUF1DL, _ADC1BUF1D
        .equiv  ADC1BUF1DH, _ADC1BUF1D+1

        .extern ADC1BUF1E
        .equiv  ADC1BUF1EL, _ADC1BUF1E
        .equiv  ADC1BUF1EH, _ADC1BUF1E+1

        .extern ADC1BUF1F
        .equiv  ADC1BUF1FL, _ADC1BUF1F
        .equiv  ADC1BUF1FH, _ADC1BUF1F+1

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

        .extern U1PWMRRS
        .equiv  U1PWMRRSL, _U1PWMRRS
        .equiv  U1PWMRRSH, _U1PWMRRS+1

        .extern U1PWMCON
        .equiv  U1PWMCONL, _U1PWMCON
        .equiv  U1PWMCONH, _U1PWMCON+1

        .extern ANCFG
        .equiv  ANCFGL, _ANCFG
        .equiv  ANCFGH, _ANCFG+1

        .extern ANSB
        .equiv  ANSBL, _ANSB
        .equiv  ANSBH, _ANSB+1

        .extern ANSC
        .equiv  ANSCL, _ANSC
        .equiv  ANSCH, _ANSC+1

        .extern ANSD
        .equiv  ANSDL, _ANSD
        .equiv  ANSDH, _ANSD+1

        .extern ANSF
        .equiv  ANSFL, _ANSF
        .equiv  ANSFH, _ANSF+1

        .extern ANSG
        .equiv  ANSGL, _ANSG
        .equiv  ANSGH, _ANSG+1

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

        .extern CRCDAT32
        .equiv  CRCDAT32L, _CRCDAT32
        .equiv  CRCDAT32H, _CRCDAT32+1

        .extern CRCDAT8
        .equiv  CRCDAT8L, _CRCDAT8
        .equiv  CRCDAT8H, _CRCDAT8+1

        .extern CRCDATL
        .equiv  CRCDATLL, _CRCDATL
        .equiv  CRCDATLH, _CRCDATL+1

        .extern CRCDATH
        .equiv  CRCDATHL, _CRCDATH
        .equiv  CRCDATHH, _CRCDATH+1

        .extern CRCWDATL
        .equiv  CRCWDATLL, _CRCWDATL
        .equiv  CRCWDATLH, _CRCWDATL+1

        .extern CRCWDATH
        .equiv  CRCWDATHL, _CRCWDATH
        .equiv  CRCWDATHH, _CRCWDATH+1

        .extern RPINR0
        .equiv  RPINR0L, _RPINR0
        .equiv  RPINR0H, _RPINR0+1

        .extern RPINR1
        .equiv  RPINR1L, _RPINR1
        .equiv  RPINR1H, _RPINR1+1

        .extern RPINR2
        .equiv  RPINR2L, _RPINR2
        .equiv  RPINR2H, _RPINR2+1

        .extern RPINR3
        .equiv  RPINR3L, _RPINR3
        .equiv  RPINR3H, _RPINR3+1

        .extern RPINR4
        .equiv  RPINR4L, _RPINR4
        .equiv  RPINR4H, _RPINR4+1

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

        .extern RPINR28
        .equiv  RPINR28L, _RPINR28
        .equiv  RPINR28H, _RPINR28+1

        .extern RPINR29
        .equiv  RPINR29L, _RPINR29
        .equiv  RPINR29H, _RPINR29+1

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

        .extern G1CMDL
        .equiv  G1CMDLL, _G1CMDL
        .equiv  G1CMDLH, _G1CMDL+1

        .extern G1CMDH
        .equiv  G1CMDHL, _G1CMDH
        .equiv  G1CMDHH, _G1CMDH+1

        .extern G1CON1
        .equiv  G1CON1L, _G1CON1
        .equiv  G1CON1H, _G1CON1+1

        .extern G1STAT
        .equiv  G1STATL, _G1STAT
        .equiv  G1STATH, _G1STAT+1

        .extern G1IE
        .equiv  G1IEL, _G1IE
        .equiv  G1IEH, _G1IE+1

        .extern G1IR
        .equiv  G1IRL, _G1IR
        .equiv  G1IRH, _G1IR+1

        .extern G1W1ADRL
        .equiv  G1W1ADRLL, _G1W1ADRL
        .equiv  G1W1ADRLH, _G1W1ADRL+1

        .extern G1W1ADRH
        .equiv  G1W1ADRHL, _G1W1ADRH
        .equiv  G1W1ADRHH, _G1W1ADRH+1

        .extern G1W2ADRL
        .equiv  G1W2ADRLL, _G1W2ADRL
        .equiv  G1W2ADRLH, _G1W2ADRL+1

        .extern G1W2ADRH
        .equiv  G1W2ADRHL, _G1W2ADRH
        .equiv  G1W2ADRHH, _G1W2ADRH+1

        .extern G1PUW
        .equiv  G1PUWL, _G1PUW
        .equiv  G1PUWH, _G1PUW+1

        .extern G1PUH
        .equiv  G1PUHL, _G1PUH
        .equiv  G1PUHH, _G1PUH+1

        .extern G1DPADRL
        .equiv  G1DPADRLL, _G1DPADRL
        .equiv  G1DPADRLH, _G1DPADRL+1

        .extern G1DPADRH
        .equiv  G1DPADRHL, _G1DPADRH
        .equiv  G1DPADRHH, _G1DPADRH+1

        .extern G1DPW
        .equiv  G1DPWL, _G1DPW
        .equiv  G1DPWH, _G1DPW+1

        .extern G1DPH
        .equiv  G1DPHL, _G1DPH
        .equiv  G1DPHH, _G1DPH+1

        .extern G1DPWT
        .equiv  G1DPWTL, _G1DPWT
        .equiv  G1DPWTH, _G1DPWT+1

        .extern G1DPHT
        .equiv  G1DPHTL, _G1DPHT
        .equiv  G1DPHTH, _G1DPHT+1

        .extern G1CON2
        .equiv  G1CON2L, _G1CON2
        .equiv  G1CON2H, _G1CON2+1

        .extern G1CON3
        .equiv  G1CON3L, _G1CON3
        .equiv  G1CON3H, _G1CON3+1

        .extern G1ACTDA
        .equiv  G1ACTDAL, _G1ACTDA
        .equiv  G1ACTDAH, _G1ACTDA+1

        .extern G1HSYNC
        .equiv  G1HSYNCL, _G1HSYNC
        .equiv  G1HSYNCH, _G1HSYNC+1

        .extern G1VSYNC
        .equiv  G1VSYNCL, _G1VSYNC
        .equiv  G1VSYNCH, _G1VSYNC+1

        .extern G1DBLCON
        .equiv  G1DBLCONL, _G1DBLCON
        .equiv  G1DBLCONH, _G1DBLCON+1

        .extern G1CLUT
        .equiv  G1CLUTL, _G1CLUT
        .equiv  G1CLUTH, _G1CLUT+1

        .extern G1CLUTWR
        .equiv  G1CLUTWRL, _G1CLUTWR
        .equiv  G1CLUTWRH, _G1CLUTWR+1

        .extern G1CLUTRD
        .equiv  G1CLUTRDL, _G1CLUTRD
        .equiv  G1CLUTRDH, _G1CLUTRD+1

        .extern G1MRGN
        .equiv  G1MRGNL, _G1MRGN
        .equiv  G1MRGNH, _G1MRGN+1

        .extern G1CHRX
        .equiv  G1CHRXL, _G1CHRX
        .equiv  G1CHRXH, _G1CHRX+1

        .extern G1CHRY
        .equiv  G1CHRYL, _G1CHRY
        .equiv  G1CHRYH, _G1CHRY+1

        .extern G1IPU
        .equiv  G1IPUL, _G1IPU
        .equiv  G1IPUH, _G1IPU+1

        .extern G1DBEN
        .equiv  G1DBENL, _G1DBEN
        .equiv  G1DBENH, _G1DBEN+1

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

        .extern CLKDIV2
        .equiv  CLKDIV2L, _CLKDIV2
        .equiv  CLKDIV2H, _CLKDIV2+1

        .extern OSCTUN
        .equiv  OSCTUNL, _OSCTUN
        .equiv  OSCTUNH, _OSCTUN+1

        .extern REFOCON
        .equiv  REFOCONL, _REFOCON
        .equiv  REFOCONH, _REFOCON+1

        .extern NVMCON
        .equiv  NVMCONL, _NVMCON
        .equiv  NVMCONH, _NVMCON+1

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

;----- SR Bits -----------------------------------------------------
        .equiv C,       0x0000
        .equiv Z,       0x0001
        .equiv OV,      0x0002
        .equiv N,       0x0003
        .equiv RA,      0x0004
        .equiv DC,      0x0008

        .equiv IPL0,    0x0005
        .equiv IPL1,    0x0006
        .equiv IPL2,    0x0007


;----- CORCON Bits -----------------------------------------------------
        .equiv IPL3,    0x0003


;----- CNPD1 Bits -----------------------------------------------------
        .equiv CN0PDE,  0x0000
        .equiv CN1PDE,  0x0001
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
        .equiv CN22PDE, 0x0006
        .equiv CN23PDE, 0x0007
        .equiv CN24PDE, 0x0008
        .equiv CN25PDE, 0x0009
        .equiv CN26PDE, 0x000A
        .equiv CN27PDE, 0x000B
        .equiv CN28PDE, 0x000C
        .equiv CN29PDE, 0x000D
        .equiv CN30PDE, 0x000E
        .equiv CN31PDE, 0x000F


;----- CNPD3 Bits -----------------------------------------------------
        .equiv CN32PDE, 0x0000


;----- CNPD4 Bits -----------------------------------------------------
        .equiv CN49PDE, 0x0001
        .equiv CN50PDE, 0x0002
        .equiv CN51PDE, 0x0003
        .equiv CN52PDE, 0x0004
        .equiv CN53PDE, 0x0005
        .equiv CN54PDE, 0x0006
        .equiv CN55PDE, 0x0007
        .equiv CN56PDE, 0x0008
        .equiv CN58PDE, 0x000A
        .equiv CN59PDE, 0x000B
        .equiv CN60PDE, 0x000C
        .equiv CN61PDE, 0x000D
        .equiv CN62PDE, 0x000E
        .equiv CN63PDE, 0x000F


;----- CNPD5 Bits -----------------------------------------------------
        .equiv CN64PDE, 0x0000
        .equiv CN65PDE, 0x0001
        .equiv CN68PDE, 0x0004
        .equiv CN69PDE, 0x0005
        .equiv CN71PDE, 0x0007


;----- CNPD6 Bits -----------------------------------------------------
        .equiv CN83PDE, 0x0003
        .equiv CN84PDE, 0x0004


;----- CNEN1 Bits -----------------------------------------------------
        .equiv CN0IE,   0x0000
        .equiv CN1IE,   0x0001
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
        .equiv CN22IE,  0x0006
        .equiv CN23IE,  0x0007
        .equiv CN24IE,  0x0008
        .equiv CN25IE,  0x0009
        .equiv CN26IE,  0x000A
        .equiv CN27IE,  0x000B
        .equiv CN28IE,  0x000C
        .equiv CN29IE,  0x000D
        .equiv CN30IE,  0x000E
        .equiv CN31IE,  0x000F


;----- CNEN3 Bits -----------------------------------------------------
        .equiv CN32IE,  0x0000


;----- CNEN4 Bits -----------------------------------------------------
        .equiv CN49IE,  0x0001
        .equiv CN50IE,  0x0002
        .equiv CN51IE,  0x0003
        .equiv CN52IE,  0x0004
        .equiv CN53IE,  0x0005
        .equiv CN54IE,  0x0006
        .equiv CN55IE,  0x0007
        .equiv CN56IE,  0x0008
        .equiv CN58IE,  0x000A
        .equiv CN59IE,  0x000B
        .equiv CN60IE,  0x000C
        .equiv CN61IE,  0x000D
        .equiv CN62IE,  0x000E
        .equiv CN63IE,  0x000F


;----- CNEN5 Bits -----------------------------------------------------
        .equiv CN64IE,  0x0000
        .equiv CN65IE,  0x0001
        .equiv CN68IE,  0x0004
        .equiv CN69IE,  0x0005
        .equiv CN71IE,  0x0007


;----- CNEN6 Bits -----------------------------------------------------
        .equiv CN83IE,  0x0003
        .equiv CN84IE,  0x0004


;----- CNPU1 Bits -----------------------------------------------------
        .equiv CN0PUE,  0x0000
        .equiv CN1PUE,  0x0001
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
        .equiv CN22PUE, 0x0006
        .equiv CN23PUE, 0x0007
        .equiv CN24PUE, 0x0008
        .equiv CN25PUE, 0x0009
        .equiv CN26PUE, 0x000A
        .equiv CN27PUE, 0x000B
        .equiv CN28PUE, 0x000C
        .equiv CN29PUE, 0x000D
        .equiv CN30PUE, 0x000E
        .equiv CN31PUE, 0x000F


;----- CNPU3 Bits -----------------------------------------------------
        .equiv CN32PUE, 0x0000


;----- CNPU4 Bits -----------------------------------------------------
        .equiv CN49PUE, 0x0001
        .equiv CN50PUE, 0x0002
        .equiv CN51PUE, 0x0003
        .equiv CN52PUE, 0x0004
        .equiv CN53PUE, 0x0005
        .equiv CN54PUE, 0x0006
        .equiv CN55PUE, 0x0007
        .equiv CN56PUE, 0x0008
        .equiv CN58PUE, 0x000A
        .equiv CN59PUE, 0x000B
        .equiv CN60PUE, 0x000C
        .equiv CN61PUE, 0x000D
        .equiv CN62PUE, 0x000E
        .equiv CN63PUE, 0x000F


;----- CNPU5 Bits -----------------------------------------------------
        .equiv CN64PUE, 0x0000
        .equiv CN65PUE, 0x0001
        .equiv CN68PUE, 0x0004
        .equiv CN69PUE, 0x0005
        .equiv CN71PUE, 0x0007


;----- CNPU6 Bits -----------------------------------------------------
        .equiv CN83PUE, 0x0003
        .equiv CN84PUE, 0x0004


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
        .equiv IC2IF,   0x0005
        .equiv OC2IF,   0x0006
        .equiv T2IF,    0x0007
        .equiv T3IF,    0x0008
        .equiv SPF1IF,  0x0009
        .equiv SPI1IF,  0x000A
        .equiv U1RXIF,  0x000B
        .equiv U1TXIF,  0x000C
        .equiv AD1IF,   0x000D


;----- IFS1 Bits -----------------------------------------------------
        .equiv SI2C1IF, 0x0000
        .equiv MI2C1IF, 0x0001
        .equiv CMIF,    0x0002
        .equiv CNIF,    0x0003
        .equiv INT1IF,  0x0004
        .equiv IC7IF,   0x0006
        .equiv IC8IF,   0x0007
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
        .equiv IC3IF,   0x0005
        .equiv IC4IF,   0x0006
        .equiv IC5IF,   0x0007
        .equiv IC6IF,   0x0008
        .equiv OC5IF,   0x0009
        .equiv OC6IF,   0x000A
        .equiv OC7IF,   0x000B
        .equiv OC8IF,   0x000C


;----- IFS3 Bits -----------------------------------------------------
        .equiv SI2C2IF, 0x0001
        .equiv MI2C2IF, 0x0002
        .equiv INT3IF,  0x0005
        .equiv INT4IF,  0x0006
        .equiv RTCIF,   0x000E


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1ERIF,  0x0001
        .equiv U2ERIF,  0x0002
        .equiv CRCIF,   0x0003
        .equiv LVDIF,   0x0008
        .equiv CTMUIF,  0x000D


;----- IFS5 Bits -----------------------------------------------------
        .equiv U3ERIF,  0x0001
        .equiv U3RXIF,  0x0002
        .equiv U3TXIF,  0x0003
        .equiv SI2C3IF, 0x0004
        .equiv MI2C3IF, 0x0005
        .equiv USB1IF,  0x0006
        .equiv U4ERIF,  0x0007
        .equiv U4RXIF,  0x0008
        .equiv U4TXIF,  0x0009
        .equiv SPF3IF,  0x000A
        .equiv SPI3IF,  0x000B
        .equiv OC9IF,   0x000C
        .equiv IC9IF,   0x000D


;----- IFS6 Bits -----------------------------------------------------
        .equiv GFX1IF,  0x0004


;----- IEC0 Bits -----------------------------------------------------
        .equiv INT0IE,  0x0000
        .equiv IC1IE,   0x0001
        .equiv OC1IE,   0x0002
        .equiv T1IE,    0x0003
        .equiv IC2IE,   0x0005
        .equiv OC2IE,   0x0006
        .equiv T2IE,    0x0007
        .equiv T3IE,    0x0008
        .equiv SPF1IE,  0x0009
        .equiv SPI1IE,  0x000A
        .equiv U1RXIE,  0x000B
        .equiv U1TXIE,  0x000C
        .equiv AD1IE,   0x000D


;----- IEC1 Bits -----------------------------------------------------
        .equiv SI2C1IE, 0x0000
        .equiv MI2C1IE, 0x0001
        .equiv CMIE,    0x0002
        .equiv CNIE,    0x0003
        .equiv INT1IE,  0x0004
        .equiv IC7IE,   0x0006
        .equiv IC8IE,   0x0007
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
        .equiv IC3IE,   0x0005
        .equiv IC4IE,   0x0006
        .equiv IC5IE,   0x0007
        .equiv IC6IE,   0x0008
        .equiv OC5IE,   0x0009
        .equiv OC6IE,   0x000A
        .equiv OC7IE,   0x000B
        .equiv OC8IE,   0x000C


;----- IEC3 Bits -----------------------------------------------------
        .equiv SI2C2IE, 0x0001
        .equiv MI2C2IE, 0x0002
        .equiv INT3IE,  0x0005
        .equiv INT4IE,  0x0006
        .equiv RTCIE,   0x000E


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1ERIE,  0x0001
        .equiv U2ERIE,  0x0002
        .equiv CRCIE,   0x0003
        .equiv LVDIE,   0x0008
        .equiv CTMUIE,  0x000D


;----- IEC5 Bits -----------------------------------------------------
        .equiv U3ERIE,  0x0001
        .equiv U3RXIE,  0x0002
        .equiv U3TXIE,  0x0003
        .equiv SI2C3IE, 0x0004
        .equiv MI2C3IE, 0x0005
        .equiv USB1IE,  0x0006
        .equiv U4ERIE,  0x0007
        .equiv U4RXIE,  0x0008
        .equiv U4TXIE,  0x0009
        .equiv SPF3IE,  0x000A
        .equiv SPI3IE,  0x000B
        .equiv OC9IE,   0x000C
        .equiv IC9IE,   0x000D


;----- IEC6 Bits -----------------------------------------------------
        .equiv GFX1IE,  0x0004


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


;----- IPC19 Bits -----------------------------------------------------
        .equiv CTMUIP0, 0x0004
        .equiv CTMUIP1, 0x0005
        .equiv CTMUIP2, 0x0006


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
        .equiv SI2C3IP0, 0x0000
        .equiv SI2C3IP1, 0x0001
        .equiv SI2C3IP2, 0x0002
        .equiv MI2C3IP0, 0x0004
        .equiv MI2C3IP1, 0x0005
        .equiv MI2C3IP2, 0x0006
        .equiv USB1IP0, 0x0008
        .equiv USB1IP1, 0x0009
        .equiv USB1IP2, 0x000A
        .equiv U4ERIP0, 0x000C
        .equiv U4ERIP1, 0x000D
        .equiv U4ERIP2, 0x000E

        .equiv SI2C3P0, 0x0000
        .equiv SI2C3P1, 0x0001
        .equiv SI2C3P2, 0x0002
        .equiv MI2C3P0, 0x0004
        .equiv MI2C3P1, 0x0005
        .equiv MI2C3P2, 0x0006



;----- IPC22 Bits -----------------------------------------------------
        .equiv U4RXIP0, 0x0000
        .equiv U4RXIP1, 0x0001
        .equiv U4RXIP2, 0x0002
        .equiv U4TXIP0, 0x0004
        .equiv U4TXIP1, 0x0005
        .equiv U4TXIP2, 0x0006
        .equiv SPF3IP0, 0x0008
        .equiv SPF3IP1, 0x0009
        .equiv SPF3IP2, 0x000A
        .equiv SPI3IP0, 0x000C
        .equiv SPI3IP1, 0x000D
        .equiv SPI3IP2, 0x000E


;----- IPC23 Bits -----------------------------------------------------
        .equiv OC9IP0,  0x0000
        .equiv OC9IP1,  0x0001
        .equiv OC9IP2,  0x0002
        .equiv IC9IP0,  0x0004
        .equiv IC9IP1,  0x0005
        .equiv IC9IP2,  0x0006


;----- IPC25 Bits -----------------------------------------------------
        .equiv GFX1IP0, 0x0000
        .equiv GFX1IP1, 0x0001
        .equiv GFX1IP2, 0x0002


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


;----- T2CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
        .equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T3CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T4CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
        .equiv T45,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T5CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


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
        .equiv OCSIDL,  0x000D

        .equiv OCM0,    0x0000
        .equiv OCM1,    0x0001
        .equiv OCM2,    0x0002
        .equiv OCFLT0,  0x0004
        .equiv OCFLT1,  0x0005
        .equiv OCFLT2,  0x0006
        .equiv ENFLT0,  0x0007
        .equiv ENFLT1,  0x0008
        .equiv ENFLT2,  0x0009
        .equiv OCTSEL0, 0x000A
        .equiv OCTSEL1, 0x000B
        .equiv OCTSEL2, 0x000C


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
        .equiv FLTMODE, 0x000F


;----- OC2CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


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
       ;.equiv FLTMODE, 0x000F


;----- OC3CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


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
       ;.equiv FLTMODE, 0x000F


;----- OC4CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


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
       ;.equiv FLTMODE, 0x000F


;----- OC5CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


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
       ;.equiv FLTMODE, 0x000F


;----- OC6CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


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
       ;.equiv FLTMODE, 0x000F


;----- OC7CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


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
       ;.equiv FLTMODE, 0x000F


;----- OC8CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


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
       ;.equiv FLTMODE, 0x000F


;----- OC9CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C


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
       ;.equiv FLTMODE, 0x000F


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


;----- U1MODE Bits -----------------------------------------------------
        .equiv STSEL,   0x0000
        .equiv BRGH,    0x0003
        .equiv RXINV,   0x0004
        .equiv ABAUD,   0x0005
        .equiv LPBACK,  0x0006
        .equiv WAKE,    0x0007
        .equiv RTSMD,   0x000B
        .equiv IREN,    0x000C
        .equiv USIDL,   0x000D
        .equiv UARTEN,  0x000F

        .equiv PDSEL0,  0x0001
        .equiv PDSEL1,  0x0002
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


;----- U1TXREG Bits -----------------------------------------------------
        .equiv UTXREG0, 0x0000
        .equiv UTXREG1, 0x0001
        .equiv UTXREG2, 0x0002
        .equiv UTXREG3, 0x0003
        .equiv UTXREG4, 0x0004
        .equiv UTXREG5, 0x0005
        .equiv UTXREG6, 0x0006
        .equiv UTXREG7, 0x0007
        .equiv UTXREG8, 0x0008


;----- U1RXREG Bits -----------------------------------------------------
        .equiv URXREG0, 0x0000
        .equiv URXREG1, 0x0001
        .equiv URXREG2, 0x0002
        .equiv URXREG3, 0x0003
        .equiv URXREG4, 0x0004
        .equiv URXREG5, 0x0005
        .equiv URXREG6, 0x0006
        .equiv URXREG7, 0x0007
        .equiv URXREG8, 0x0008


;----- U2MODE Bits -----------------------------------------------------
       ;.equiv STSEL,   0x0000
       ;.equiv BRGH,    0x0003
       ;.equiv RXINV,   0x0004
       ;.equiv ABAUD,   0x0005
       ;.equiv LPBACK,  0x0006
       ;.equiv WAKE,    0x0007
       ;.equiv RTSMD,   0x000B
       ;.equiv IREN,    0x000C
       ;.equiv USIDL,   0x000D
       ;.equiv UARTEN,  0x000F

       ;.equiv PDSEL0,  0x0001
       ;.equiv PDSEL1,  0x0002
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


;----- U2TXREG Bits -----------------------------------------------------
       ;.equiv UTXREG0, 0x0000
       ;.equiv UTXREG1, 0x0001
       ;.equiv UTXREG2, 0x0002
       ;.equiv UTXREG3, 0x0003
       ;.equiv UTXREG4, 0x0004
       ;.equiv UTXREG5, 0x0005
       ;.equiv UTXREG6, 0x0006
       ;.equiv UTXREG7, 0x0007
       ;.equiv UTXREG8, 0x0008


;----- U2RXREG Bits -----------------------------------------------------
       ;.equiv URXREG0, 0x0000
       ;.equiv URXREG1, 0x0001
       ;.equiv URXREG2, 0x0002
       ;.equiv URXREG3, 0x0003
       ;.equiv URXREG4, 0x0004
       ;.equiv URXREG5, 0x0005
       ;.equiv URXREG6, 0x0006
       ;.equiv URXREG7, 0x0007
       ;.equiv URXREG8, 0x0008


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


;----- U3MODE Bits -----------------------------------------------------
       ;.equiv STSEL,   0x0000
       ;.equiv BRGH,    0x0003
       ;.equiv RXINV,   0x0004
       ;.equiv ABAUD,   0x0005
       ;.equiv LPBACK,  0x0006
       ;.equiv WAKE,    0x0007
       ;.equiv RTSMD,   0x000B
       ;.equiv IREN,    0x000C
       ;.equiv USIDL,   0x000D
       ;.equiv UARTEN,  0x000F

       ;.equiv PDSEL0,  0x0001
       ;.equiv PDSEL1,  0x0002
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


;----- U3TXREG Bits -----------------------------------------------------
       ;.equiv UTXREG0, 0x0000
       ;.equiv UTXREG1, 0x0001
       ;.equiv UTXREG2, 0x0002
       ;.equiv UTXREG3, 0x0003
       ;.equiv UTXREG4, 0x0004
       ;.equiv UTXREG5, 0x0005
       ;.equiv UTXREG6, 0x0006
       ;.equiv UTXREG7, 0x0007
       ;.equiv UTXREG8, 0x0008


;----- U3RXREG Bits -----------------------------------------------------
       ;.equiv URXREG0, 0x0000
       ;.equiv URXREG1, 0x0001
       ;.equiv URXREG2, 0x0002
       ;.equiv URXREG3, 0x0003
       ;.equiv URXREG4, 0x0004
       ;.equiv URXREG5, 0x0005
       ;.equiv URXREG6, 0x0006
       ;.equiv URXREG7, 0x0007
       ;.equiv URXREG8, 0x0008


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


;----- I2C3CON Bits -----------------------------------------------------
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


;----- I2C3STAT Bits -----------------------------------------------------
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


;----- SPI3STAT Bits -----------------------------------------------------
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


;----- SPI3CON1 Bits -----------------------------------------------------
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


;----- SPI3CON2 Bits -----------------------------------------------------
       ;.equiv SPIBEN,  0x0000
       ;.equiv SPIFE,   0x0001
       ;.equiv SPIFPOL, 0x000D
       ;.equiv SPIFSD,  0x000E
       ;.equiv FRMEN,   0x000F


;----- U4MODE Bits -----------------------------------------------------
       ;.equiv STSEL,   0x0000
       ;.equiv BRGH,    0x0003
       ;.equiv RXINV,   0x0004
       ;.equiv ABAUD,   0x0005
       ;.equiv LPBACK,  0x0006
       ;.equiv WAKE,    0x0007
       ;.equiv RTSMD,   0x000B
       ;.equiv IREN,    0x000C
       ;.equiv USIDL,   0x000D
       ;.equiv UARTEN,  0x000F

       ;.equiv PDSEL0,  0x0001
       ;.equiv PDSEL1,  0x0002
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


;----- U4TXREG Bits -----------------------------------------------------
       ;.equiv UTXREG0, 0x0000
       ;.equiv UTXREG1, 0x0001
       ;.equiv UTXREG2, 0x0002
       ;.equiv UTXREG3, 0x0003
       ;.equiv UTXREG4, 0x0004
       ;.equiv UTXREG5, 0x0005
       ;.equiv UTXREG6, 0x0006
       ;.equiv UTXREG7, 0x0007
       ;.equiv UTXREG8, 0x0008


;----- U4RXREG Bits -----------------------------------------------------
       ;.equiv URXREG0, 0x0000
       ;.equiv URXREG1, 0x0001
       ;.equiv URXREG2, 0x0002
       ;.equiv URXREG3, 0x0003
       ;.equiv URXREG4, 0x0004
       ;.equiv URXREG5, 0x0005
       ;.equiv URXREG6, 0x0006
       ;.equiv URXREG7, 0x0007
       ;.equiv URXREG8, 0x0008


;----- TRISB Bits -----------------------------------------------------
        .equiv TRISB0,  0x0000
        .equiv TRISB1,  0x0001
        .equiv TRISB2,  0x0002
        .equiv TRISB3,  0x0003
        .equiv TRISB4,  0x0004
        .equiv TRISB5,  0x0005
        .equiv TRISB6,  0x0006
        .equiv TRISB7,  0x0007
        .equiv TRISB8,  0x0008
        .equiv TRISB9,  0x0009
        .equiv TRISB10, 0x000A
        .equiv TRISB11, 0x000B
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
        .equiv RB8,     0x0008
        .equiv RB9,     0x0009
        .equiv RB10,    0x000A
        .equiv RB11,    0x000B
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
        .equiv LATB8,   0x0008
        .equiv LATB9,   0x0009
        .equiv LATB10,  0x000A
        .equiv LATB11,  0x000B
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
        .equiv ODB8,    0x0008
        .equiv ODB9,    0x0009
        .equiv ODB10,   0x000A
        .equiv ODB11,   0x000B
        .equiv ODB12,   0x000C
        .equiv ODB13,   0x000D
        .equiv ODB14,   0x000E
        .equiv ODB15,   0x000F


;----- TRISC Bits -----------------------------------------------------
        .equiv TRISC12, 0x000C
        .equiv TRISC13, 0x000D
        .equiv TRISC14, 0x000E
        .equiv TRISC15, 0x000F


;----- PORTC Bits -----------------------------------------------------
        .equiv RC12,    0x000C
        .equiv RC13,    0x000D
        .equiv RC14,    0x000E
        .equiv RC15,    0x000F


;----- LATC Bits -----------------------------------------------------
        .equiv LATC12,  0x000C
        .equiv LATC13,  0x000D
        .equiv LATC14,  0x000E
        .equiv LATC15,  0x000F


;----- ODCC Bits -----------------------------------------------------
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


;----- TRISE Bits -----------------------------------------------------
        .equiv TRISE0,  0x0000
        .equiv TRISE1,  0x0001
        .equiv TRISE2,  0x0002
        .equiv TRISE3,  0x0003
        .equiv TRISE4,  0x0004
        .equiv TRISE5,  0x0005
        .equiv TRISE6,  0x0006
        .equiv TRISE7,  0x0007


;----- PORTE Bits -----------------------------------------------------
        .equiv RE0,     0x0000
        .equiv RE1,     0x0001
        .equiv RE2,     0x0002
        .equiv RE3,     0x0003
        .equiv RE4,     0x0004
        .equiv RE5,     0x0005
        .equiv RE6,     0x0006
        .equiv RE7,     0x0007


;----- LATE Bits -----------------------------------------------------
        .equiv LATE0,   0x0000
        .equiv LATE1,   0x0001
        .equiv LATE2,   0x0002
        .equiv LATE3,   0x0003
        .equiv LATE4,   0x0004
        .equiv LATE5,   0x0005
        .equiv LATE6,   0x0006
        .equiv LATE7,   0x0007


;----- ODCE Bits -----------------------------------------------------
        .equiv ODE0,    0x0000
        .equiv ODE1,    0x0001
        .equiv ODE2,    0x0002
        .equiv ODE3,    0x0003
        .equiv ODE4,    0x0004
        .equiv ODE5,    0x0005
        .equiv ODE6,    0x0006
        .equiv ODE7,    0x0007


;----- TRISF Bits -----------------------------------------------------
        .equiv TRISF0,  0x0000
        .equiv TRISF1,  0x0001
        .equiv TRISF3,  0x0003
        .equiv TRISF4,  0x0004
        .equiv TRISF5,  0x0005
        .equiv TRISF7,  0x0007


;----- PORTF Bits -----------------------------------------------------
        .equiv RF0,     0x0000
        .equiv RF1,     0x0001
        .equiv RF3,     0x0003
        .equiv RF4,     0x0004
        .equiv RF5,     0x0005
        .equiv RF7,     0x0007


;----- LATF Bits -----------------------------------------------------
        .equiv LATF0,   0x0000
        .equiv LATF1,   0x0001
        .equiv LATF3,   0x0003
        .equiv LATF4,   0x0004
        .equiv LATF5,   0x0005
        .equiv LATF7,   0x0007


;----- ODCF Bits -----------------------------------------------------
        .equiv ODF0,    0x0000
        .equiv ODF1,    0x0001
        .equiv ODF3,    0x0003
        .equiv ODF4,    0x0004
        .equiv ODF5,    0x0005
        .equiv ODF7,    0x0007


;----- TRISG Bits -----------------------------------------------------
        .equiv TRISG2,  0x0002
        .equiv TRISG3,  0x0003
        .equiv TRISG6,  0x0006
        .equiv TRISG7,  0x0007
        .equiv TRISG8,  0x0008
        .equiv TRISG9,  0x0009


;----- PORTG Bits -----------------------------------------------------
        .equiv RG2,     0x0002
        .equiv RG3,     0x0003
        .equiv RG6,     0x0006
        .equiv RG7,     0x0007
        .equiv RG8,     0x0008
        .equiv RG9,     0x0009


;----- LATG Bits -----------------------------------------------------
        .equiv LATG2,   0x0002
        .equiv LATG3,   0x0003
        .equiv LATG6,   0x0006
        .equiv LATG7,   0x0007
        .equiv LATG8,   0x0008
        .equiv LATG9,   0x0009


;----- ODCG Bits -----------------------------------------------------
        .equiv ODG2,    0x0002
        .equiv ODG3,    0x0003
        .equiv ODG6,    0x0006
        .equiv ODG7,    0x0007
        .equiv ODG8,    0x0008
        .equiv ODG9,    0x0009


;----- PADCFG1 Bits -----------------------------------------------------
        .equiv RTSECSEL, 0x0001

        .equiv RTSECSEL0, 0x0001


;----- AD1CON1 Bits -----------------------------------------------------
        .equiv DONE,    0x0000
        .equiv SAMP,    0x0001
        .equiv ASAM,    0x0002
        .equiv ADSIDL,  0x000D
        .equiv ADON,    0x000F

        .equiv SSRC0,   0x0005
        .equiv SSRC1,   0x0006
        .equiv SSRC2,   0x0007
        .equiv FORM0,   0x0008
        .equiv FORM1,   0x0009


;----- AD1CON2 Bits -----------------------------------------------------
        .equiv ALTS,    0x0000
        .equiv BUFM,    0x0001
        .equiv BUFS,    0x0007
        .equiv CSCNA,   0x000A

        .equiv SMPI0,   0x0002
        .equiv SMPI1,   0x0003
        .equiv SMPI2,   0x0004
        .equiv SMPI3,   0x0005
        .equiv SMPI4,   0x0006
        .equiv VCFG0,   0x000D
        .equiv VCFG1,   0x000E
        .equiv VCFG2,   0x000F


;----- AD1CON3 Bits -----------------------------------------------------
        .equiv ADRC,    0x000F

        .equiv ADCS0,   0x0000
        .equiv ADCS1,   0x0001
        .equiv ADCS2,   0x0002
        .equiv ADCS3,   0x0003
        .equiv ADCS4,   0x0004
        .equiv ADCS5,   0x0005
        .equiv ADCS6,   0x0006
        .equiv ADCS7,   0x0007
        .equiv SAMC0,   0x0008
        .equiv SAMC1,   0x0009
        .equiv SAMC2,   0x000A
        .equiv SAMC3,   0x000B
        .equiv SAMC4,   0x000C


;----- AD1CHS Bits -----------------------------------------------------
        .equiv CH0NA,   0x0007
        .equiv CH0NB,   0x000F

        .equiv CH0SA0,  0x0000
        .equiv CH0SA1,  0x0001
        .equiv CH0SA2,  0x0002
        .equiv CH0SA3,  0x0003
        .equiv CH0SA4,  0x0004
        .equiv CH0SB0,  0x0008
        .equiv CH0SB1,  0x0009
        .equiv CH0SB2,  0x000A
        .equiv CH0SB3,  0x000B
        .equiv CH0SB4,  0x000C


;----- AD1CHS0 Bits -----------------------------------------------------
       ;.equiv CH0NA,   0x0007
       ;.equiv CH0NB,   0x000F

       ;.equiv CH0SA0,  0x0000
       ;.equiv CH0SA1,  0x0001
       ;.equiv CH0SA2,  0x0002
       ;.equiv CH0SA3,  0x0003
       ;.equiv CH0SA4,  0x0004
       ;.equiv CH0SB0,  0x0008
       ;.equiv CH0SB1,  0x0009
       ;.equiv CH0SB2,  0x000A
       ;.equiv CH0SB3,  0x000B
       ;.equiv CH0SB4,  0x000C


;----- AD1CSSH Bits -----------------------------------------------------
        .equiv CSSL24,  0x0008
        .equiv CSSL25,  0x0009
        .equiv CSSL26,  0x000A
        .equiv CSSL27,  0x000B


;----- AD1CSSL Bits -----------------------------------------------------
        .equiv CSSL0,   0x0000
        .equiv CSSL1,   0x0001
        .equiv CSSL2,   0x0002
        .equiv CSSL3,   0x0003
        .equiv CSSL4,   0x0004
        .equiv CSSL5,   0x0005
        .equiv CSSL6,   0x0006
        .equiv CSSL7,   0x0007
        .equiv CSSL8,   0x0008
        .equiv CSSL9,   0x0009
        .equiv CSSL10,  0x000A
        .equiv CSSL11,  0x000B
        .equiv CSSL12,  0x000C
        .equiv CSSL13,  0x000D
        .equiv CSSL14,  0x000E
        .equiv CSSL15,  0x000F


;----- CTMUCON Bits -----------------------------------------------------
        .equiv EDG1STAT, 0x0000
        .equiv EDG2STAT, 0x0001
        .equiv EDG1POL, 0x0004
        .equiv EDG2POL, 0x0007
        .equiv CTTRIG,  0x0008
        .equiv IDISSEN, 0x0009
        .equiv EDGSEQEN, 0x000A
        .equiv EDGEN,   0x000B
        .equiv TGEN,    0x000C
        .equiv CTMUSIDL, 0x000D
        .equiv CTMUEN,  0x000F

        .equiv EDG1SEL0, 0x0002
        .equiv EDG1SEL1, 0x0003
        .equiv EDG2SEL0, 0x0005
        .equiv EDG2SEL1, 0x0006


;----- CTMUICON Bits -----------------------------------------------------
        .equiv IRNG0,   0x0008
        .equiv IRNG1,   0x0009
        .equiv ITRIM0,  0x000A
        .equiv ITRIM1,  0x000B
        .equiv ITRIM2,  0x000C
        .equiv ITRIM3,  0x000D
        .equiv ITRIM4,  0x000E
        .equiv ITRIM5,  0x000F


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
        .equiv VBUSON,  0x0003
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


;----- U1PWMRRS Bits -----------------------------------------------------
        .equiv PER0,    0x0000
        .equiv PER1,    0x0001
        .equiv PER2,    0x0002
        .equiv PER3,    0x0003
        .equiv PER4,    0x0004
        .equiv PER5,    0x0005
        .equiv PER6,    0x0006
        .equiv PER7,    0x0007
        .equiv DC0,     0x0008
        .equiv DC1,     0x0009
        .equiv DC2,     0x000A
        .equiv DC3,     0x000B
        .equiv DC4,     0x000C
        .equiv DC5,     0x000D
        .equiv DC6,     0x000E
        .equiv DC7,     0x000F

        .equiv USBRS0,  0x0000
        .equiv USBRS1,  0x0001
        .equiv USBRS2,  0x0002
        .equiv USBRS3,  0x0003
        .equiv USBRS4,  0x0004
        .equiv USBRS5,  0x0005
        .equiv USBRS6,  0x0006
        .equiv USBRS7,  0x0007
        .equiv USBR0,   0x0008
        .equiv USBR1,   0x0009
        .equiv USBR2,   0x000A
        .equiv USBR3,   0x000B
        .equiv USBR4,   0x000C
        .equiv USBR5,   0x000D
        .equiv USBR6,   0x000E
        .equiv USBR7,   0x000F



;----- U1PWMCON Bits -----------------------------------------------------
        .equiv CNTEN,   0x0008
        .equiv PWMPOL,  0x0009
        .equiv PWMEN,   0x000F


;----- ANCFG Bits -----------------------------------------------------
        .equiv VBGEN,   0x0000
        .equiv VBG2EN,  0x0001
        .equiv VBG6EN,  0x0002


;----- ANSB Bits -----------------------------------------------------
        .equiv ANSB0,   0x0000
        .equiv ANSB1,   0x0001
        .equiv ANSB2,   0x0002
        .equiv ANSB3,   0x0003
        .equiv ANSB4,   0x0004
        .equiv ANSB5,   0x0005
        .equiv ANSB6,   0x0006
        .equiv ANSB7,   0x0007
        .equiv ANSB8,   0x0008
        .equiv ANSB9,   0x0009
        .equiv ANSB10,  0x000A
        .equiv ANSB11,  0x000B
        .equiv ANSB12,  0x000C
        .equiv ANSB13,  0x000D
        .equiv ANSB14,  0x000E
        .equiv ANSB15,  0x000F


;----- ANSC Bits -----------------------------------------------------
        .equiv ANSC13,  0x000D
        .equiv ANSC14,  0x000E


;----- ANSD Bits -----------------------------------------------------
        .equiv ANSD6,   0x0006
        .equiv ANSD7,   0x0007


;----- ANSF Bits -----------------------------------------------------
        .equiv ANSF0,   0x0000


;----- ANSG Bits -----------------------------------------------------
        .equiv ANSG6,   0x0006
        .equiv ANSG7,   0x0007
        .equiv ANSG8,   0x0008
        .equiv ANSG9,   0x0009


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


;----- CMSTAT Bits -----------------------------------------------------
        .equiv C1OUT,   0x0000
        .equiv C2OUT,   0x0001
        .equiv C3OUT,   0x0002
        .equiv C1EVT,   0x0008
        .equiv C2EVT,   0x0009
        .equiv C3EVT,   0x000A
        .equiv CMIDL,   0x000F


;----- CVRCON Bits -----------------------------------------------------
        .equiv CVRSS,   0x0004
        .equiv CVRR,    0x0005
        .equiv CVROE,   0x0006
        .equiv CVREN,   0x0007
        .equiv CVREFP,  0x000A

        .equiv CVR0,    0x0000
        .equiv CVR1,    0x0001
        .equiv CVR2,    0x0002
        .equiv CVR3,    0x0003
        .equiv CVREFM0, 0x0008
        .equiv CVREFM1, 0x0009


;----- CM1CON Bits -----------------------------------------------------
        .equiv CREF,    0x0004
        .equiv COUT,    0x0008
        .equiv CEVT,    0x0009
        .equiv CPOL,    0x000D
        .equiv COE,     0x000E
        .equiv CON,     0x000F

        .equiv CCH0,    0x0000
        .equiv CCH1,    0x0001
        .equiv EVPOL0,  0x0006
        .equiv EVPOL1,  0x0007
        .equiv CEN,     0x000F


;----- CM2CON Bits -----------------------------------------------------
       ;.equiv CREF,    0x0004
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv CEN,     0x000F


;----- CM3CON Bits -----------------------------------------------------
       ;.equiv CREF,    0x0004
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv CEN,     0x000F


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


;----- RPINR0 Bits -----------------------------------------------------
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


;----- RPINR3 Bits -----------------------------------------------------
        .equiv T2CKR0,  0x0000
        .equiv T2CKR1,  0x0001
        .equiv T2CKR2,  0x0002
        .equiv T2CKR3,  0x0003
        .equiv T2CKR4,  0x0004
        .equiv T2CKR5,  0x0005
        .equiv T3CKR0,  0x0008
        .equiv T3CKR1,  0x0009
        .equiv T3CKR2,  0x000A
        .equiv T3CKR3,  0x000B
        .equiv T3CKR4,  0x000C
        .equiv T3CKR5,  0x000D


;----- RPINR4 Bits -----------------------------------------------------
        .equiv T4CKR0,  0x0000
        .equiv T4CKR1,  0x0001
        .equiv T4CKR2,  0x0002
        .equiv T4CKR3,  0x0003
        .equiv T4CKR4,  0x0004
        .equiv T4CKR5,  0x0005
        .equiv T5CKR0,  0x0008
        .equiv T5CKR1,  0x0009
        .equiv T5CKR2,  0x000A
        .equiv T5CKR3,  0x000B
        .equiv T5CKR4,  0x000C
        .equiv T5CKR5,  0x000D


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


;----- RPINR28 Bits -----------------------------------------------------
        .equiv SDI3R0,  0x0000
        .equiv SDI3R1,  0x0001
        .equiv SDI3R2,  0x0002
        .equiv SDI3R3,  0x0003
        .equiv SDI3R4,  0x0004
        .equiv SDI3R5,  0x0005
        .equiv SCK3R0,  0x0008
        .equiv SCK3R1,  0x0009
        .equiv SCK3R2,  0x000A
        .equiv SCK3R3,  0x000B
        .equiv SCK3R4,  0x000C
        .equiv SCK3R5,  0x000D


;----- RPINR29 Bits -----------------------------------------------------
        .equiv SS3R0,   0x0000
        .equiv SS3R1,   0x0001
        .equiv SS3R2,   0x0002
        .equiv SS3R3,   0x0003
        .equiv SS3R4,   0x0004
        .equiv SS3R5,   0x0005


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


;----- G1CMDL Bits -----------------------------------------------------
        .equiv GCMD0,   0x0000
        .equiv GCMD1,   0x0001
        .equiv GCMD2,   0x0002
        .equiv GCMD3,   0x0003
        .equiv GCMD4,   0x0004
        .equiv GCMD5,   0x0005
        .equiv GCMD6,   0x0006
        .equiv GCMD7,   0x0007
        .equiv GCMD8,   0x0008
        .equiv GCMD9,   0x0009
        .equiv GCMD10,  0x000A
        .equiv GCMD11,  0x000B
        .equiv GCMD12,  0x000C
        .equiv GCMD13,  0x000D
        .equiv GCMD14,  0x000E
        .equiv GCMD15,  0x000F


;----- G1CMDH Bits -----------------------------------------------------
        .equiv GCMD16,  0x0000
        .equiv GCMD17,  0x0001
        .equiv GCMD18,  0x0002
        .equiv GCMD19,  0x0003
        .equiv GCMD20,  0x0004
        .equiv GCMD21,  0x0005
        .equiv GCMD22,  0x0006
        .equiv GCMD23,  0x0007
        .equiv GCMD24,  0x0008
        .equiv GCMD25,  0x0009
        .equiv GCMD26,  0x000A
        .equiv GCMD27,  0x000B
        .equiv GCMD28,  0x000C
        .equiv GCMD29,  0x000D
        .equiv GCMD30,  0x000E
        .equiv GCMD31,  0x000F


;----- G1CON1 Bits -----------------------------------------------------
        .equiv G1SIDL,  0x000D
        .equiv G1EN,    0x000F

        .equiv GCMDCNT0, 0x0000
        .equiv GCMDCNT1, 0x0001
        .equiv GCMDCNT2, 0x0002
        .equiv GCMDCNT3, 0x0003
        .equiv GCMDCNT4, 0x0004
        .equiv PUBPP0,  0x0005
        .equiv PUBPP1,  0x0006
        .equiv PUBPP2,  0x0007
        .equiv GCMDWMK0, 0x0008
        .equiv GCMDWMK1, 0x0009
        .equiv GCMDWMK2, 0x000A
        .equiv GCMDWMK3, 0x000B
        .equiv GCMDWMK4, 0x000C


;----- G1STAT Bits -----------------------------------------------------
        .equiv CMDMPT,  0x0000
        .equiv CMDFUL,  0x0001
        .equiv CMDLV,   0x0002
        .equiv HMRGN,   0x0003
        .equiv VMRGN,   0x0004
        .equiv CHRBUSY, 0x0005
        .equiv RCCBUSY, 0x0006
        .equiv IPUBUSY, 0x0007
        .equiv PUBUSY,  0x000F


;----- G1IE Bits -----------------------------------------------------
        .equiv CMDMPTIE, 0x0000
        .equiv CMDFULIE, 0x0001
        .equiv CMDLVIE, 0x0002
        .equiv HMRGNIE, 0x0003
        .equiv VMRGNIE, 0x0004
        .equiv CHRIE,   0x0005
        .equiv RCCIE,   0x0006
        .equiv IPUIE,   0x0007
        .equiv PUIE,    0x000F


;----- G1IR Bits -----------------------------------------------------
        .equiv CMDMPTIF, 0x0000
        .equiv CMDFULIF, 0x0001
        .equiv CMDLVIF, 0x0002
        .equiv HMRGNIF, 0x0003
        .equiv VMRGNIF, 0x0004
        .equiv CHRIF,   0x0005
        .equiv RCCIF,   0x0006
        .equiv IPUIF,   0x0007
        .equiv PUIF,    0x000F


;----- G1W1ADRL Bits -----------------------------------------------------
        .equiv W1ADR0,  0x0000
        .equiv W1ADR1,  0x0001
        .equiv W1ADR2,  0x0002
        .equiv W1ADR3,  0x0003
        .equiv W1ADR4,  0x0004
        .equiv W1ADR5,  0x0005
        .equiv W1ADR6,  0x0006
        .equiv W1ADR7,  0x0007
        .equiv W1ADR8,  0x0008
        .equiv W1ADR9,  0x0009
        .equiv W1ADR10, 0x000A
        .equiv W1ADR11, 0x000B
        .equiv W1ADR12, 0x000C
        .equiv W1ADR13, 0x000D
        .equiv W1ADR14, 0x000E
        .equiv W1ADR15, 0x000F


;----- G1W1ADRH Bits -----------------------------------------------------
        .equiv W1ADR16, 0x0000
        .equiv W1ADR17, 0x0001
        .equiv W1ADR18, 0x0002
        .equiv W1ADR19, 0x0003
        .equiv W1ADR20, 0x0004
        .equiv W1ADR21, 0x0005
        .equiv W1ADR22, 0x0006
        .equiv W1ADR23, 0x0007


;----- G1W2ADRL Bits -----------------------------------------------------
        .equiv W2ADR0,  0x0000
        .equiv W2ADR1,  0x0001
        .equiv W2ADR2,  0x0002
        .equiv W2ADR3,  0x0003
        .equiv W2ADR4,  0x0004
        .equiv W2ADR5,  0x0005
        .equiv W2ADR6,  0x0006
        .equiv W2ADR7,  0x0007
        .equiv W2ADR8,  0x0008
        .equiv W2ADR9,  0x0009
        .equiv W2ADR10, 0x000A
        .equiv W2ADR11, 0x000B
        .equiv W2ADR12, 0x000C
        .equiv W2ADR13, 0x000D
        .equiv W2ADR14, 0x000E
        .equiv W2ADR15, 0x000F


;----- G1W2ADRH Bits -----------------------------------------------------
        .equiv W2ADR16, 0x0000
        .equiv W2ADR17, 0x0001
        .equiv W2ADR18, 0x0002
        .equiv W2ADR19, 0x0003
        .equiv W2ADR20, 0x0004
        .equiv W2ADR21, 0x0005
        .equiv W2ADR22, 0x0006
        .equiv W2ADR23, 0x0007


;----- G1PUW Bits -----------------------------------------------------
        .equiv PUW0,    0x0000
        .equiv PUW1,    0x0001
        .equiv PUW2,    0x0002
        .equiv PUW3,    0x0003
        .equiv PUW4,    0x0004
        .equiv PUW5,    0x0005
        .equiv PUW6,    0x0006
        .equiv PUW7,    0x0007
        .equiv PUW8,    0x0008
        .equiv PUW9,    0x0009
        .equiv PUW10,   0x000A


;----- G1PUH Bits -----------------------------------------------------
        .equiv PUH0,    0x0000
        .equiv PUH1,    0x0001
        .equiv PUH2,    0x0002
        .equiv PUH3,    0x0003
        .equiv PUH4,    0x0004
        .equiv PUH5,    0x0005
        .equiv PUH6,    0x0006
        .equiv PUH7,    0x0007
        .equiv PUH8,    0x0008
        .equiv PUH9,    0x0009
        .equiv PUH10,   0x000A


;----- G1DPADRL Bits -----------------------------------------------------
        .equiv DPADR0,  0x0000
        .equiv DPADR1,  0x0001
        .equiv DPADR2,  0x0002
        .equiv DPADR3,  0x0003
        .equiv DPADR4,  0x0004
        .equiv DPADR5,  0x0005
        .equiv DPADR6,  0x0006
        .equiv DPADR7,  0x0007
        .equiv DPADR8,  0x0008
        .equiv DPADR9,  0x0009
        .equiv DPADR10, 0x000A
        .equiv DPADR11, 0x000B
        .equiv DPADR12, 0x000C
        .equiv DPADR13, 0x000D
        .equiv DPADR14, 0x000E
        .equiv DPADR15, 0x000F


;----- G1DPADRH Bits -----------------------------------------------------
        .equiv DPADR16, 0x0000
        .equiv DPADR17, 0x0001
        .equiv DPADR18, 0x0002
        .equiv DPADR19, 0x0003
        .equiv DPADR20, 0x0004
        .equiv DPADR21, 0x0005
        .equiv DPADR22, 0x0006
        .equiv DPADR23, 0x0007


;----- G1DPW Bits -----------------------------------------------------
        .equiv DPW0,    0x0000
        .equiv DPW1,    0x0001
        .equiv DPW2,    0x0002
        .equiv DPW3,    0x0003
        .equiv DPW4,    0x0004
        .equiv DPW5,    0x0005
        .equiv DPW6,    0x0006
        .equiv DPW7,    0x0007
        .equiv DPW8,    0x0008
        .equiv DPW9,    0x0009
        .equiv DPW10,   0x000A


;----- G1DPH Bits -----------------------------------------------------
        .equiv DPH0,    0x0000
        .equiv DPH1,    0x0001
        .equiv DPH2,    0x0002
        .equiv DPH3,    0x0003
        .equiv DPH4,    0x0004
        .equiv DPH5,    0x0005
        .equiv DPH6,    0x0006
        .equiv DPH7,    0x0007
        .equiv DPH8,    0x0008
        .equiv DPH9,    0x0009
        .equiv DPH10,   0x000A


;----- G1DPWT Bits -----------------------------------------------------
        .equiv DPWT0,   0x0000
        .equiv DPWT1,   0x0001
        .equiv DPWT2,   0x0002
        .equiv DPWT3,   0x0003
        .equiv DPWT4,   0x0004
        .equiv DPWT5,   0x0005
        .equiv DPWT6,   0x0006
        .equiv DPWT7,   0x0007
        .equiv DPWT8,   0x0008
        .equiv DPWT9,   0x0009
        .equiv DPWT10,  0x000A


;----- G1DPHT Bits -----------------------------------------------------
        .equiv DPHT0,   0x0000
        .equiv DPHT1,   0x0001
        .equiv DPHT2,   0x0002
        .equiv DPHT3,   0x0003
        .equiv DPHT4,   0x0004
        .equiv DPHT5,   0x0005
        .equiv DPHT6,   0x0006
        .equiv DPHT7,   0x0007
        .equiv DPHT8,   0x0008
        .equiv DPHT9,   0x0009
        .equiv DPHT10,  0x000A


;----- G1CON2 Bits -----------------------------------------------------
        .equiv DPMODE0, 0x0000
        .equiv DPMODE1, 0x0001
        .equiv DPMODE2, 0x0002
        .equiv DPBPP0,  0x0005
        .equiv DPBPP1,  0x0006
        .equiv DPBPP2,  0x0007
        .equiv DPTEST0, 0x0008
        .equiv DPTEST1, 0x0009
        .equiv DPSTGER0, 0x000C
        .equiv DPSTGER1, 0x000D
        .equiv DPGWDTH0, 0x000E
        .equiv DPGWDTH1, 0x000F


;----- G1CON3 Bits -----------------------------------------------------
        .equiv DPHSOE,  0x0000
        .equiv DPVSOE,  0x0001
        .equiv DPENOE,  0x0002
        .equiv DPPWROE, 0x0003
        .equiv DPHSPOL, 0x0004
        .equiv DPVSPOL, 0x0005
        .equiv DPENPOL, 0x0006
        .equiv DPCLKPOL, 0x0007
        .equiv DPPOWER, 0x0008
        .equiv DPPINOE, 0x0009


;----- G1ACTDA Bits -----------------------------------------------------
        .equiv ACTPIX0, 0x0000
        .equiv ACTPIX1, 0x0001
        .equiv ACTPIX2, 0x0002
        .equiv ACTPIX3, 0x0003
        .equiv ACTPIX4, 0x0004
        .equiv ACTPIX5, 0x0005
        .equiv ACTPIX6, 0x0006
        .equiv ACTPIX7, 0x0007
        .equiv ACTLINE0, 0x0008
        .equiv ACTLINE1, 0x0009
        .equiv ACTLINE2, 0x000A
        .equiv ACTLINE3, 0x000B
        .equiv ACTLINE4, 0x000C
        .equiv ACTLINE5, 0x000D
        .equiv ACTLINE6, 0x000E
        .equiv ACTLINE7, 0x000F


;----- G1HSYNC Bits -----------------------------------------------------
        .equiv HSST0,   0x0000
        .equiv HSST1,   0x0001
        .equiv HSST2,   0x0002
        .equiv HSST3,   0x0003
        .equiv HSST4,   0x0004
        .equiv HSST5,   0x0005
        .equiv HSST6,   0x0006
        .equiv HSST7,   0x0007
        .equiv HSLEN0,  0x0008
        .equiv HSLEN1,  0x0009
        .equiv HSLEN2,  0x000A
        .equiv HSLEN3,  0x000B
        .equiv HSLEN4,  0x000C
        .equiv HSLEN5,  0x000D
        .equiv HSLEN6,  0x000E
        .equiv HSLEN7,  0x000F


;----- G1VSYNC Bits -----------------------------------------------------
        .equiv VSST0,   0x0000
        .equiv VSST1,   0x0001
        .equiv VSST2,   0x0002
        .equiv VSST3,   0x0003
        .equiv VSST4,   0x0004
        .equiv VSST5,   0x0005
        .equiv VSST6,   0x0006
        .equiv VSST7,   0x0007
        .equiv VSLEN0,  0x0008
        .equiv VSLEN1,  0x0009
        .equiv VSLEN2,  0x000A
        .equiv VSLEN3,  0x000B
        .equiv VSLEN4,  0x000C
        .equiv VSLEN5,  0x000D
        .equiv VSLEN6,  0x000E
        .equiv VSLEN7,  0x000F


;----- G1DBLCON Bits -----------------------------------------------------
        .equiv HENST0,  0x0000
        .equiv HENST1,  0x0001
        .equiv HENST2,  0x0002
        .equiv HENST3,  0x0003
        .equiv HENST4,  0x0004
        .equiv HENST5,  0x0005
        .equiv HENST6,  0x0006
        .equiv HENST7,  0x0007
        .equiv VENST0,  0x0008
        .equiv VENST1,  0x0009
        .equiv VENST2,  0x000A
        .equiv VENST3,  0x000B
        .equiv VENST4,  0x000C
        .equiv VENST5,  0x000D
        .equiv VENST6,  0x000E
        .equiv VENST7,  0x000F


;----- G1CLUT Bits -----------------------------------------------------
        .equiv CLUTRWEN, 0x0008
        .equiv CLUTTRD, 0x0009
        .equiv CLUTBUSY, 0x000E
        .equiv CLUTEN,  0x000F

        .equiv CLUTADR0, 0x0000
        .equiv CLUTADR1, 0x0001
        .equiv CLUTADR2, 0x0002
        .equiv CLUTADR3, 0x0003
        .equiv CLUTADR4, 0x0004
        .equiv CLUTADR5, 0x0005
        .equiv CLUTADR6, 0x0006
        .equiv CLUTADR7, 0x0007


;----- G1CLUTWR Bits -----------------------------------------------------
        .equiv CLUTWR0, 0x0000
        .equiv CLUTWR1, 0x0001
        .equiv CLUTWR2, 0x0002
        .equiv CLUTWR3, 0x0003
        .equiv CLUTWR4, 0x0004
        .equiv CLUTWR5, 0x0005
        .equiv CLUTWR6, 0x0006
        .equiv CLUTWR7, 0x0007
        .equiv CLUTWR8, 0x0008
        .equiv CLUTWR9, 0x0009
        .equiv CLUTWR10, 0x000A
        .equiv CLUTWR11, 0x000B
        .equiv CLUTWR12, 0x000C
        .equiv CLUTWR13, 0x000D
        .equiv CLUTWR14, 0x000E
        .equiv CLUTWR15, 0x000F


;----- G1CLUTRD Bits -----------------------------------------------------
        .equiv CLUTRD0, 0x0000
        .equiv CLUTRD1, 0x0001
        .equiv CLUTRD2, 0x0002
        .equiv CLUTRD3, 0x0003
        .equiv CLUTRD4, 0x0004
        .equiv CLUTRD5, 0x0005
        .equiv CLUTRD6, 0x0006
        .equiv CLUTRD7, 0x0007
        .equiv CLUTRD8, 0x0008
        .equiv CLUTRD9, 0x0009
        .equiv CLUTRD10, 0x000A
        .equiv CLUTRD11, 0x000B
        .equiv CLUTRD12, 0x000C
        .equiv CLUTRD13, 0x000D
        .equiv CLUTRD14, 0x000E
        .equiv CLUTRD15, 0x000F


;----- G1MRGN Bits -----------------------------------------------------
        .equiv HBAMGN0, 0x0000
        .equiv HBAMGN1, 0x0001
        .equiv HBAMGN2, 0x0002
        .equiv HBAMGN3, 0x0003
        .equiv HBAMGN4, 0x0004
        .equiv HBAMGN5, 0x0005
        .equiv HBAMGN6, 0x0006
        .equiv HBAMGN7, 0x0007
        .equiv VBAMGN0, 0x0008
        .equiv VBAMGN1, 0x0009
        .equiv VBAMGN2, 0x000A
        .equiv VBAMGN3, 0x000B
        .equiv VBAMGN4, 0x000C
        .equiv VBAMGN5, 0x000D
        .equiv VBAMGN6, 0x000E
        .equiv VBAMGN7, 0x000F


;----- G1CHRX Bits -----------------------------------------------------
        .equiv CURPOSX0, 0x0000
        .equiv CURPOSX1, 0x0001
        .equiv CURPOSX2, 0x0002
        .equiv CURPOSX3, 0x0003
        .equiv CURPOSX4, 0x0004
        .equiv CURPOSX5, 0x0005
        .equiv CURPOSX6, 0x0006
        .equiv CURPOSX7, 0x0007
        .equiv CURPOSX8, 0x0008
        .equiv CURPOSX9, 0x0009
        .equiv CURPOSX10, 0x000A


;----- G1CHRY Bits -----------------------------------------------------
        .equiv CURPOSY0, 0x0000
        .equiv CURPOSY1, 0x0001
        .equiv CURPOSY2, 0x0002
        .equiv CURPOSY3, 0x0003
        .equiv CURPOSY4, 0x0004
        .equiv CURPOSY5, 0x0005
        .equiv CURPOSY6, 0x0006
        .equiv CURPOSY7, 0x0007
        .equiv CURPOSY8, 0x0008
        .equiv CURPOSY9, 0x0009
        .equiv CURPOSY10, 0x000A


;----- G1IPU Bits -----------------------------------------------------
        .equiv BFINAL,  0x0000
        .equiv IPUDONE, 0x0001
        .equiv WRAPERR, 0x0002
        .equiv LENERR,  0x0003
        .equiv BLCKERR, 0x0004
        .equiv HUFFERR, 0x0005


;----- G1DBEN Bits -----------------------------------------------------
        .equiv GDBEN0,  0x0000
        .equiv GDBEN1,  0x0001
        .equiv GDBEN2,  0x0002
        .equiv GDBEN3,  0x0003
        .equiv GDBEN4,  0x0004
        .equiv GDBEN5,  0x0005
        .equiv GDBEN6,  0x0006
        .equiv GDBEN7,  0x0007
        .equiv GDBEN8,  0x0008
        .equiv GDBEN9,  0x0009
        .equiv GDBEN10, 0x000A
        .equiv GDBEN11, 0x000B
        .equiv GDBEN12, 0x000C
        .equiv GDBEN13, 0x000D
        .equiv GDBEN14, 0x000E
        .equiv GDBEN15, 0x000F


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
        .equiv CM,      0x0009
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

        .equiv LPOSCEN, 0x0001
        .equiv NOSC0,   0x0008
        .equiv NOSC1,   0x0009
        .equiv NOSC2,   0x000A
        .equiv COSC0,   0x000C
        .equiv COSC1,   0x000D
        .equiv COSC2,   0x000E


;----- CLKDIV Bits -----------------------------------------------------
        .equiv G1CLKSEL, 0x0004
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


;----- CLKDIV2 Bits -----------------------------------------------------
        .equiv GCLKDIV0, 0x0009
        .equiv GCLKDIV1, 0x000A
        .equiv GCLKDIV2, 0x000B
        .equiv GCLKDIV3, 0x000C
        .equiv GCLKDIV4, 0x000D
        .equiv GCLKDIV5, 0x000E
        .equiv GCLKDIV6, 0x000F


;----- OSCTUN Bits -----------------------------------------------------
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


;----- NVMCON Bits -----------------------------------------------------
        .equiv ERASE,   0x0006
        .equiv WRERR,   0x000D
        .equiv WREN,    0x000E
        .equiv WR,      0x000F

        .equiv NVMOP0,  0x0000
        .equiv NVMOP1,  0x0001
        .equiv NVMOP2,  0x0002
        .equiv NVMOP3,  0x0003

        .equiv PROGOP0, 0x0000
        .equiv PROGOP1, 0x0001
        .equiv PROGOP2, 0x0002
        .equiv PROGOP3, 0x0003



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
        .equiv I2C3MD,  0x0002
        .equiv U3MD,    0x0003
        .equiv CRCMD,   0x0007
        .equiv RTCCMD,  0x0009
        .equiv CMPMD,   0x000A

        .equiv CRCPMD,  0x0007


;----- PMD4 Bits -----------------------------------------------------
        .equiv USB1MD,  0x0000
        .equiv LVDMD,   0x0001
        .equiv CTMUMD,  0x0002
        .equiv REFOMD,  0x0003
        .equiv U4MD,    0x0005
        .equiv UPWMMD,  0x0006


;----- PMD5 Bits -----------------------------------------------------
        .equiv OC9MD,   0x0000
        .equiv IC9MD,   0x0008


;----- PMD6 Bits -----------------------------------------------------
        .equiv SPI3MD,  0x0000
        .equiv GFX1MD,  0x0006




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


;----- CONFIG4 (0x2abf8) --------------------------------------------------
;
;  The following settings are available for CONFIG4:
;

;----- CONFIG3 (0x2abfa) --------------------------------------------------
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
;     WPFP_WPFP128         Page 128 (0x20000)
;     WPFP_WPFP129         Page 129 (0x20400)
;     WPFP_WPFP130         Page 130 (0x20800)
;     WPFP_WPFP131         Page 131 (0x20C00)
;     WPFP_WPFP132         Page 132 (0x21000)
;     WPFP_WPFP133         Page 133 (0x21400)
;     WPFP_WPFP134         Page 134 (0x21800)
;     WPFP_WPFP135         Page 135 (0x21C00)
;     WPFP_WPFP136         Page 136 (0x22000)
;     WPFP_WPFP137         Page 137 (0x22400)
;     WPFP_WPFP138         Page 138 (0x22800)
;     WPFP_WPFP139         Page 139 (0x22C00)
;     WPFP_WPFP140         Page 140 (0x23000)
;     WPFP_WPFP141         Page 141 (0x23400)
;     WPFP_WPFP142         Page 142 (0x23800)
;     WPFP_WPFP143         Page 143 (0x23C00)
;     WPFP_WPFP144         Page 144 (0x24000)
;     WPFP_WPFP145         Page 145 (0x24400)
;     WPFP_WPFP146         Page 146 (0x24800)
;     WPFP_WPFP147         Page 147 (0x24C00)
;     WPFP_WPFP148         Page 148 (0x25000)
;     WPFP_WPFP149         Page 149 (0x25400)
;     WPFP_WPFP150         Page 150 (0x25800)
;     WPFP_WPFP151         Page 151 (0x25C00)
;     WPFP_WPFP152         Page 152 (0x26000)
;     WPFP_WPFP153         Page 153 (0x26400)
;     WPFP_WPFP154         Page 154 (0x26800)
;     WPFP_WPFP155         Page 155 (0x26C00)
;     WPFP_WPFP156         Page 156 (0x27000)
;     WPFP_WPFP157         Page 157 (0x27400)
;     WPFP_WPFP158         Page 158 (0x27800)
;     WPFP_WPFP159         Page 159 (0x27C00)
;     WPFP_WPFP160         Page 160 (0x28000)
;     WPFP_WPFP161         Page 161 (0x28400)
;     WPFP_WPFP162         Page 162 (0x28800)
;     WPFP_WPFP163         Page 163 (0x28C00)
;     WPFP_WPFP164         Page 164 (0x29000)
;     WPFP_WPFP165         Page 165 (0x29400)
;     WPFP_WPFP166         Page 166 (0x29800)
;     WPFP_WPFP167         Page 167 (0x29C00)
;     WPFP_WPFP168         Page 168 (0x2A000)
;     WPFP_WPFP169         Page 169 (0x2A400)
;     WPFP_WPFP170         Page 170 (0x2A800)
;     WPFP_WPFP255         Highest Page (same as page 170)
;
;   Secondary Oscillator Power Mode Select:
;     SOSCSEL_EC           External clock (SCLKI) or Digital I/O mode(
;     SOSCSEL_LPSOSC       Secondary oscillator is in Low-Power (low drive strength) Oscillator mode
;     SOSCSEL_SOSC         Secondary oscillator is in Default (high drive strength) Oscillator mode
;
;   Voltage Regulator Wake-up Time Select:
;     WUTSEL_FST           Fast regulator start-up time is used
;     WUTSEL_LEG           Default regulator start-up time is used
;
;   Alternate PMP Pin Mapping:
;     ALTPMP_ALTPMPEN      EPMP pins are in alternate location mode
;     ALTPMP_ALPMPDIS      EPMP pins are in default location mode
;
;   Segment Write Protection Disable:
;     WPDIS_WPEN           Segmented code protection is enabled; protected segment is defined by the WPEND, WPCFG and WPFPx Configuration bits
;     WPDIS_WPDIS          Segmented code protection is disabled
;
;   Write Protect Configuration Page Select:
;     WPCFG_WPCFGEN        Last page and Flash Configuration Words are write-protected, provided WPDIS = 0
;     WPCFG_WPCFGDIS       Last page (at the top of program memory) and Flash Configuration Words are not write-protected
;
;   Segment Write Protection End Page Select:
;     WPEND_WPSTARTMEM     Protected code segment lower boundary is at the bottom of the program memory (000000h); upper boundary is the code page specified by WPFP
;     WPEND_WPENDMEM       Protected code segment upper boundary is at the last page of program memory; the lower boundary is the code page specified by WPFP
;
        .equiv WPFP_WPFP0,      0xFF00 ; Page 0 (0x00)
        .equiv WPFP_WPFP1,      0xFF01 ; Page 1 (0x400)
        .equiv WPFP_WPFP2,      0xFF02 ; Page 2 (0x800)
        .equiv WPFP_WPFP3,      0xFF03 ; Page 3 (0xC00)
        .equiv WPFP_WPFP4,      0xFF04 ; Page 4 (0x1000)
        .equiv WPFP_WPFP5,      0xFF05 ; Page 5 (0x1400)
        .equiv WPFP_WPFP6,      0xFF06 ; Page 6 (0x1800)
        .equiv WPFP_WPFP7,      0xFF07 ; Page 7 (0x1C00)
        .equiv WPFP_WPFP8,      0xFF08 ; Page 8 (0x2000)
        .equiv WPFP_WPFP9,      0xFF09 ; Page 9 (0x2400)
        .equiv WPFP_WPFP10,     0xFF0A ; Page 10 (0x2800)
        .equiv WPFP_WPFP11,     0xFF0B ; Page 11 (0x2C00)
        .equiv WPFP_WPFP12,     0xFF0C ; Page 12 (0x3000)
        .equiv WPFP_WPFP13,     0xFF0D ; Page 13 (0x3400)
        .equiv WPFP_WPFP14,     0xFF0E ; Page 14 (0x3800)
        .equiv WPFP_WPFP15,     0xFF0F ; Page 15 (0x3C00)
        .equiv WPFP_WPFP16,     0xFF10 ; Page 16 (0x4000)
        .equiv WPFP_WPFP17,     0xFF11 ; Page 17 (0x4400)
        .equiv WPFP_WPFP18,     0xFF12 ; Page 18 (0x4800)
        .equiv WPFP_WPFP19,     0xFF13 ; Page 19 (0x4C00)
        .equiv WPFP_WPFP20,     0xFF14 ; Page 20 (0x5000)
        .equiv WPFP_WPFP21,     0xFF15 ; Page 21 (0x5400)
        .equiv WPFP_WPFP22,     0xFF16 ; Page 22 (0x5800)
        .equiv WPFP_WPFP23,     0xFF17 ; Page 23 (0x5C00)
        .equiv WPFP_WPFP24,     0xFF18 ; Page 24 (0x6000)
        .equiv WPFP_WPFP25,     0xFF19 ; Page 25 (0x6400)
        .equiv WPFP_WPFP26,     0xFF1A ; Page 26 (0x6800)
        .equiv WPFP_WPFP27,     0xFF1B ; Page 27 (0x6C00)
        .equiv WPFP_WPFP28,     0xFF1C ; Page 28 (0x7000)
        .equiv WPFP_WPFP29,     0xFF1D ; Page 29 (0x7400)
        .equiv WPFP_WPFP30,     0xFF1E ; Page 30 (0x7800)
        .equiv WPFP_WPFP31,     0xFF1F ; Page 31 (0x7C00)
        .equiv WPFP_WPFP32,     0xFF20 ; Page 32 (0x8000)
        .equiv WPFP_WPFP33,     0xFF21 ; Page 33 (0x8400)
        .equiv WPFP_WPFP34,     0xFF22 ; Page 34 (0x8800)
        .equiv WPFP_WPFP35,     0xFF23 ; Page 35 (0x8C00)
        .equiv WPFP_WPFP36,     0xFF24 ; Page 36 (0x9000)
        .equiv WPFP_WPFP37,     0xFF25 ; Page 37 (0x9400)
        .equiv WPFP_WPFP38,     0xFF26 ; Page 38 (0x9800)
        .equiv WPFP_WPFP39,     0xFF27 ; Page 39 (0x9C00)
        .equiv WPFP_WPFP40,     0xFF28 ; Page 40 (0xA000)
        .equiv WPFP_WPFP41,     0xFF29 ; Page 41 (0xA400)
        .equiv WPFP_WPFP42,     0xFF2A ; Page 42 (0xA800)
        .equiv WPFP_WPFP43,     0xFF2B ; Page 43 (0xAC00)
        .equiv WPFP_WPFP44,     0xFF2C ; Page 44 (0xB000)
        .equiv WPFP_WPFP45,     0xFF2D ; Page 45 (0xB400)
        .equiv WPFP_WPFP46,     0xFF2E ; Page 46 (0xB800)
        .equiv WPFP_WPFP47,     0xFF2F ; Page 47 (0xBC00)
        .equiv WPFP_WPFP48,     0xFF30 ; Page 48 (0xC000)
        .equiv WPFP_WPFP49,     0xFF31 ; Page 49 (0xC400)
        .equiv WPFP_WPFP50,     0xFF32 ; Page 50 (0xC800)
        .equiv WPFP_WPFP51,     0xFF33 ; Page 51 (0xCC00)
        .equiv WPFP_WPFP52,     0xFF34 ; Page 52 (0xD000)
        .equiv WPFP_WPFP53,     0xFF35 ; Page 53 (0xD400)
        .equiv WPFP_WPFP54,     0xFF36 ; Page 54 (0xD800)
        .equiv WPFP_WPFP55,     0xFF37 ; Page 55 (0xDC00)
        .equiv WPFP_WPFP56,     0xFF38 ; Page 56 (0xE000)
        .equiv WPFP_WPFP57,     0xFF39 ; Page 57 (0xE400)
        .equiv WPFP_WPFP58,     0xFF3A ; Page 58 (0xE800)
        .equiv WPFP_WPFP59,     0xFF3B ; Page 59 (0xEC00)
        .equiv WPFP_WPFP60,     0xFF3C ; Page 60 (0xF000)
        .equiv WPFP_WPFP61,     0xFF3D ; Page 61 (0xF400)
        .equiv WPFP_WPFP62,     0xFF3E ; Page 62 (0xF800)
        .equiv WPFP_WPFP63,     0xFF3F ; Page 63 (0xFC00)
        .equiv WPFP_WPFP64,     0xFF40 ; Page 64 (0x10000)
        .equiv WPFP_WPFP65,     0xFF41 ; Page 65 (0x10400)
        .equiv WPFP_WPFP66,     0xFF42 ; Page 66 (0x10800)
        .equiv WPFP_WPFP67,     0xFF43 ; Page 67 (0x10C00)
        .equiv WPFP_WPFP68,     0xFF44 ; Page 68 (0x11000)
        .equiv WPFP_WPFP69,     0xFF45 ; Page 69 (0x11400)
        .equiv WPFP_WPFP70,     0xFF46 ; Page 70 (0x11800)
        .equiv WPFP_WPFP71,     0xFF47 ; Page 71 (0x11C00)
        .equiv WPFP_WPFP72,     0xFF48 ; Page 72 (0x12000)
        .equiv WPFP_WPFP73,     0xFF49 ; Page 73 (0x12400)
        .equiv WPFP_WPFP74,     0xFF4A ; Page 74 (0x12800)
        .equiv WPFP_WPFP75,     0xFF4B ; Page 75 (0x12C00)
        .equiv WPFP_WPFP76,     0xFF4C ; Page 76 (0x13000)
        .equiv WPFP_WPFP77,     0xFF4D ; Page 77 (0x13400)
        .equiv WPFP_WPFP78,     0xFF4E ; Page 78 (0x13800)
        .equiv WPFP_WPFP79,     0xFF4F ; Page 79 (0x13C00)
        .equiv WPFP_WPFP80,     0xFF50 ; Page 80 (0x14000)
        .equiv WPFP_WPFP81,     0xFF51 ; Page 81 (0x14400)
        .equiv WPFP_WPFP82,     0xFF52 ; Page 82 (0x14800)
        .equiv WPFP_WPFP83,     0xFF53 ; Page 83 (0x14C00)
        .equiv WPFP_WPFP84,     0xFF54 ; Page 84 (0x15000)
        .equiv WPFP_WPFP85,     0xFF55 ; Page 85 (0x15400)
        .equiv WPFP_WPFP86,     0xFF56 ; Page 86 (0x15800)
        .equiv WPFP_WPFP87,     0xFF57 ; Page 87 (0x15C00)
        .equiv WPFP_WPFP88,     0xFF58 ; Page 88 (0x16000)
        .equiv WPFP_WPFP89,     0xFF59 ; Page 89 (0x16400)
        .equiv WPFP_WPFP90,     0xFF5A ; Page 90 (0x16800)
        .equiv WPFP_WPFP91,     0xFF5B ; Page 91 (0x16C00)
        .equiv WPFP_WPFP92,     0xFF5C ; Page 92 (0x17000)
        .equiv WPFP_WPFP93,     0xFF5D ; Page 93 (0x17400)
        .equiv WPFP_WPFP94,     0xFF5E ; Page 94 (0x17800)
        .equiv WPFP_WPFP95,     0xFF5F ; Page 95 (0x17C00)
        .equiv WPFP_WPFP96,     0xFF60 ; Page 96 (0x18000)
        .equiv WPFP_WPFP97,     0xFF61 ; Page 97 (0x18400)
        .equiv WPFP_WPFP98,     0xFF62 ; Page 98 (0x18800)
        .equiv WPFP_WPFP99,     0xFF63 ; Page 99 (0x18C00)
        .equiv WPFP_WPFP100,    0xFF64 ; Page 100 (0x19000)
        .equiv WPFP_WPFP101,    0xFF65 ; Page 101 (0x19400)
        .equiv WPFP_WPFP102,    0xFF66 ; Page 102 (0x19800)
        .equiv WPFP_WPFP103,    0xFF67 ; Page 103 (0x19C00)
        .equiv WPFP_WPFP104,    0xFF68 ; Page 104 (0x1A000)
        .equiv WPFP_WPFP105,    0xFF69 ; Page 105 (0x1A400)
        .equiv WPFP_WPFP106,    0xFF6A ; Page 106 (0x1A800)
        .equiv WPFP_WPFP107,    0xFF6B ; Page 107 (0x1AC00)
        .equiv WPFP_WPFP108,    0xFF6C ; Page 108 (0x1B000)
        .equiv WPFP_WPFP109,    0xFF6D ; Page 109 (0x1B400)
        .equiv WPFP_WPFP110,    0xFF6E ; Page 110 (0x1B800)
        .equiv WPFP_WPFP111,    0xFF6F ; Page 111 (0x1BC00)
        .equiv WPFP_WPFP112,    0xFF70 ; Page 112 (0x1C000)
        .equiv WPFP_WPFP113,    0xFF71 ; Page 113 (0x1C400)
        .equiv WPFP_WPFP114,    0xFF72 ; Page 114 (0x1C800)
        .equiv WPFP_WPFP115,    0xFF73 ; Page 115 (0x1CC00)
        .equiv WPFP_WPFP116,    0xFF74 ; Page 116 (0x1D000)
        .equiv WPFP_WPFP117,    0xFF75 ; Page 117 (0x1D400)
        .equiv WPFP_WPFP118,    0xFF76 ; Page 118 (0x1D800)
        .equiv WPFP_WPFP119,    0xFF77 ; Page 119 (0x1DC00)
        .equiv WPFP_WPFP120,    0xFF78 ; Page 120 (0x1E000)
        .equiv WPFP_WPFP121,    0xFF79 ; Page 121 (0x1E400)
        .equiv WPFP_WPFP122,    0xFF7A ; Page 122 (0x1E800)
        .equiv WPFP_WPFP123,    0xFF7B ; Page 123 (0x1EC00)
        .equiv WPFP_WPFP124,    0xFF7C ; Page 124 (0x1F000)
        .equiv WPFP_WPFP125,    0xFF7D ; Page 125 (0x1F400)
        .equiv WPFP_WPFP126,    0xFF7E ; Page 126 (0x1F800)
        .equiv WPFP_WPFP127,    0xFF7F ; Page 127 (0x1FC00)
        .equiv WPFP_WPFP128,    0xFF80 ; Page 128 (0x20000)
        .equiv WPFP_WPFP129,    0xFF81 ; Page 129 (0x20400)
        .equiv WPFP_WPFP130,    0xFF82 ; Page 130 (0x20800)
        .equiv WPFP_WPFP131,    0xFF83 ; Page 131 (0x20C00)
        .equiv WPFP_WPFP132,    0xFF84 ; Page 132 (0x21000)
        .equiv WPFP_WPFP133,    0xFF85 ; Page 133 (0x21400)
        .equiv WPFP_WPFP134,    0xFF86 ; Page 134 (0x21800)
        .equiv WPFP_WPFP135,    0xFF87 ; Page 135 (0x21C00)
        .equiv WPFP_WPFP136,    0xFF88 ; Page 136 (0x22000)
        .equiv WPFP_WPFP137,    0xFF89 ; Page 137 (0x22400)
        .equiv WPFP_WPFP138,    0xFF8A ; Page 138 (0x22800)
        .equiv WPFP_WPFP139,    0xFF8B ; Page 139 (0x22C00)
        .equiv WPFP_WPFP140,    0xFF8C ; Page 140 (0x23000)
        .equiv WPFP_WPFP141,    0xFF8D ; Page 141 (0x23400)
        .equiv WPFP_WPFP142,    0xFF8E ; Page 142 (0x23800)
        .equiv WPFP_WPFP143,    0xFF8F ; Page 143 (0x23C00)
        .equiv WPFP_WPFP144,    0xFF90 ; Page 144 (0x24000)
        .equiv WPFP_WPFP145,    0xFF91 ; Page 145 (0x24400)
        .equiv WPFP_WPFP146,    0xFF92 ; Page 146 (0x24800)
        .equiv WPFP_WPFP147,    0xFF93 ; Page 147 (0x24C00)
        .equiv WPFP_WPFP148,    0xFF94 ; Page 148 (0x25000)
        .equiv WPFP_WPFP149,    0xFF95 ; Page 149 (0x25400)
        .equiv WPFP_WPFP150,    0xFF96 ; Page 150 (0x25800)
        .equiv WPFP_WPFP151,    0xFF97 ; Page 151 (0x25C00)
        .equiv WPFP_WPFP152,    0xFF98 ; Page 152 (0x26000)
        .equiv WPFP_WPFP153,    0xFF99 ; Page 153 (0x26400)
        .equiv WPFP_WPFP154,    0xFF9A ; Page 154 (0x26800)
        .equiv WPFP_WPFP155,    0xFF9B ; Page 155 (0x26C00)
        .equiv WPFP_WPFP156,    0xFF9C ; Page 156 (0x27000)
        .equiv WPFP_WPFP157,    0xFF9D ; Page 157 (0x27400)
        .equiv WPFP_WPFP158,    0xFF9E ; Page 158 (0x27800)
        .equiv WPFP_WPFP159,    0xFF9F ; Page 159 (0x27C00)
        .equiv WPFP_WPFP160,    0xFFA0 ; Page 160 (0x28000)
        .equiv WPFP_WPFP161,    0xFFA1 ; Page 161 (0x28400)
        .equiv WPFP_WPFP162,    0xFFA2 ; Page 162 (0x28800)
        .equiv WPFP_WPFP163,    0xFFA3 ; Page 163 (0x28C00)
        .equiv WPFP_WPFP164,    0xFFA4 ; Page 164 (0x29000)
        .equiv WPFP_WPFP165,    0xFFA5 ; Page 165 (0x29400)
        .equiv WPFP_WPFP166,    0xFFA6 ; Page 166 (0x29800)
        .equiv WPFP_WPFP167,    0xFFA7 ; Page 167 (0x29C00)
        .equiv WPFP_WPFP168,    0xFFA8 ; Page 168 (0x2A000)
        .equiv WPFP_WPFP169,    0xFFA9 ; Page 169 (0x2A400)
        .equiv WPFP_WPFP170,    0xFFAA ; Page 170 (0x2A800)
        .equiv WPFP_WPFP255,    0xFFFF ; Highest Page (same as page 170)

        .equiv SOSCSEL_EC,      0xFCFF ; External clock (SCLKI) or Digital I/O mode(
        .equiv SOSCSEL_LPSOSC,  0xFDFF ; Secondary oscillator is in Low-Power (low drive strength) Oscillator mode
        .equiv SOSCSEL_SOSC,    0xFFFF ; Secondary oscillator is in Default (high drive strength) Oscillator mode

        .equiv WUTSEL_FST,      0xF7FF ; Fast regulator start-up time is used
        .equiv WUTSEL_LEG,      0xFFFF ; Default regulator start-up time is used

        .equiv ALTPMP_ALTPMPEN, 0xEFFF ; EPMP pins are in alternate location mode
        .equiv ALTPMP_ALPMPDIS, 0xFFFF ; EPMP pins are in default location mode

        .equiv WPDIS_WPEN,      0xDFFF ; Segmented code protection is enabled; protected segment is defined by the WPEND, WPCFG and WPFPx Configuration bits
        .equiv WPDIS_WPDIS,     0xFFFF ; Segmented code protection is disabled

        .equiv WPCFG_WPCFGEN,   0xBFFF ; Last page and Flash Configuration Words are write-protected, provided WPDIS = 0
        .equiv WPCFG_WPCFGDIS,  0xFFFF ; Last page (at the top of program memory) and Flash Configuration Words are not write-protected

        .equiv WPEND_WPSTARTMEM, 0x7FFF ; Protected code segment lower boundary is at the bottom of the program memory (000000h); upper boundary is the code page specified by WPFP
        .equiv WPEND_WPENDMEM,  0xFFFF ; Protected code segment upper boundary is at the last page of program memory; the lower boundary is the code page specified by WPFP


;----- CONFIG2 (0x2abfc) --------------------------------------------------
;
;  The following settings are available for CONFIG2:
;
;   Primary Oscillator Select:
;     POSCMOD_EC           EC Oscillator mode is selected
;     POSCMOD_XT           XT Oscillator mode is selected
;     POSCMOD_HS           HS Oscillator mode is selected
;     POSCMOD_NONE         Primary oscillator is disabled
;
;   IOLOCK One-Way Set Enable:
;     IOL1WAY_OFF          The IOLOCK bit can be set and cleared as needed, provided the unlock sequence has been completed
;     IOL1WAY_ON           The IOLOCK bit (OSCCON<6>) can be set once, provided the unlock sequence has been completed. Once set, the Peripheral Pin Select registers cannot be written to a second time.
;
;   OSCO Pin Configuration:
;     OSCIOFNC_ON          OSCO/CLKO/RC15 functions as port I/O (RC15)
;     OSCIOFNC_OFF         OSCO/CLKO/RC15 functions as CLKO (FOSC/2)
;
;   Clock Switching and Fail-Safe Clock Monitor:
;     FCKSM_CSECME         Clock switching is enabled, Fail-Safe Clock Monitor is enabled
;     FCKSM_CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
;     FCKSM_CSDCMD         Clock switching and Fail-Safe Clock Monitor are disabled
;
;   Initial Oscillator Select:
;     FNOSC_FRC            Fast RC Oscillator (FRC)
;     FNOSC_FRCPLL         Fast RC Oscillator with Postscaler and PLL module (FRCPLL)
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary Oscillator with PLL module (XTPLL, HSPLL, ECPLL)
;     FNOSC_SOSC           Secondary Oscillator (SOSC)
;     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
;     FNOSC_FRCDIV         Fast RC Oscillator with Postscaler (FRCDIV)
;
;   96MHz PLL Startup Select:
;     PLL96MHZ_OFF         96 MHz PLL is software controlled (can be enabled by setting the PLLEN bit in CLKDIV<5>)
;     PLL96MHZ_ON          96 MHz PLL is enabled automatically on start-up
;
;   96 MHz PLL Prescaler Select:
;     PLLDIV_NODIV         Oscillator input is used directly (4 MHz input)
;     PLLDIV_DIV2          Oscillator input is divided by 2 (8 MHz input)
;     PLLDIV_DIV3          Oscillator input is divided by 3 (12 MHz input)
;     PLLDIV_DIV4          Oscillator input is divided by 4 (16 MHz input)
;     PLLDIV_DIV5          Oscillator input is divided by 5 (20 MHz input)
;     PLLDIV_DIV6          Oscillator input is divided by 6 (24 MHz input)
;     PLLDIV_DIV8          Oscillator input is divided by 8 (32 MHz input)
;     PLLDIV_DIV12         Oscillator input is divided by 12 (48 MHz input)
;
;   Internal External Switchover:
;     IESO_OFF             IESO mode (Two-Speed Start-up) is disabled
;     IESO_ON              IESO mode (Two-Speed Start-up) is enabled
;
        .equiv POSCMOD_EC,      0xFFFC ; EC Oscillator mode is selected
        .equiv POSCMOD_XT,      0xFFFD ; XT Oscillator mode is selected
        .equiv POSCMOD_HS,      0xFFFE ; HS Oscillator mode is selected
        .equiv POSCMOD_NONE,    0xFFFF ; Primary oscillator is disabled

        .equiv IOL1WAY_OFF,     0xFFEF ; The IOLOCK bit can be set and cleared as needed, provided the unlock sequence has been completed
        .equiv IOL1WAY_ON,      0xFFFF ; The IOLOCK bit (OSCCON<6>) can be set once, provided the unlock sequence has been completed. Once set, the Peripheral Pin Select registers cannot be written to a second time.

        .equiv OSCIOFNC_ON,     0xFFDF ; OSCO/CLKO/RC15 functions as port I/O (RC15)
        .equiv OSCIOFNC_OFF,    0xFFFF ; OSCO/CLKO/RC15 functions as CLKO (FOSC/2)

        .equiv FCKSM_CSECME,    0xFF3F ; Clock switching is enabled, Fail-Safe Clock Monitor is enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Clock switching is enabled, Fail-Safe Clock Monitor is disabled
        .equiv FCKSM_CSDCMD,    0xFFBF ; Clock switching and Fail-Safe Clock Monitor are disabled

        .equiv FNOSC_FRC,       0xF8FF ; Fast RC Oscillator (FRC)
        .equiv FNOSC_FRCPLL,    0xF9FF ; Fast RC Oscillator with Postscaler and PLL module (FRCPLL)
        .equiv FNOSC_PRI,       0xFAFF ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFBFF ; Primary Oscillator with PLL module (XTPLL, HSPLL, ECPLL)
        .equiv FNOSC_SOSC,      0xFCFF ; Secondary Oscillator (SOSC)
        .equiv FNOSC_LPRC,      0xFDFF ; Low-Power RC Oscillator (LPRC)
        .equiv FNOSC_FRCDIV,    0xFFFF ; Fast RC Oscillator with Postscaler (FRCDIV)

        .equiv PLL96MHZ_OFF,    0xF7FF ; 96 MHz PLL is software controlled (can be enabled by setting the PLLEN bit in CLKDIV<5>)
        .equiv PLL96MHZ_ON,     0xFFFF ; 96 MHz PLL is enabled automatically on start-up

        .equiv PLLDIV_NODIV,    0x8FFF ; Oscillator input is used directly (4 MHz input)
        .equiv PLLDIV_DIV2,     0x9FFF ; Oscillator input is divided by 2 (8 MHz input)
        .equiv PLLDIV_DIV3,     0xAFFF ; Oscillator input is divided by 3 (12 MHz input)
        .equiv PLLDIV_DIV4,     0xBFFF ; Oscillator input is divided by 4 (16 MHz input)
        .equiv PLLDIV_DIV5,     0xCFFF ; Oscillator input is divided by 5 (20 MHz input)
        .equiv PLLDIV_DIV6,     0xDFFF ; Oscillator input is divided by 6 (24 MHz input)
        .equiv PLLDIV_DIV8,     0xEFFF ; Oscillator input is divided by 8 (32 MHz input)
        .equiv PLLDIV_DIV12,    0xFFFF ; Oscillator input is divided by 12 (48 MHz input)

        .equiv IESO_OFF,        0x7FFF ; IESO mode (Two-Speed Start-up) is disabled
        .equiv IESO_ON,         0xFFFF ; IESO mode (Two-Speed Start-up) is enabled


;----- CONFIG1 (0x2abfe) --------------------------------------------------
;
;  The following settings are available for CONFIG1:
;
;   Watchdog Timer Postscaler:
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
;   WDT Prescaler:
;     FWPSA_PR32           Prescaler ratio of 1:32
;     FWPSA_PR128          Prescaler ratio of 1:128
;
;   Windowed WDT:
;     WINDIS_ON            Windowed Watchdog Timer is enabled; FWDTEN must be 1
;     WINDIS_OFF           Standard Watchdog Timer enabled,(Windowed-mode is disabled)
;
;   Watchdog Timer:
;     FWDTEN_OFF           Watchdog Timer is disabled
;     FWDTEN_ON            Watchdog Timer is enabled
;
;   Emulator Pin Placement Select bits:
;     ICS_PGx3             Emulator functions are shared with PGEC3/PGED3
;     ICS_PGx2             Emulator functions are shared with PGEC2/PGED2
;     ICS_PGx1             Emulator functions are shared with PGEC1/PGED1
;
;   General Segment Write Protect:
;     GWRP_ON              Writes to program memory are not allowed
;     GWRP_OFF             Writes to program memory are allowed
;
;   General Segment Code Protect:
;     GCP_ON               Code protection is enabled for the entire program memory space
;     GCP_OFF              Code protection is disabled
;
;   JTAG Port Enable:
;     JTAGEN_OFF           JTAG port is disabled
;     JTAGEN_ON            JTAG port is enabled
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

        .equiv FWPSA_PR32,      0x7FEF ; Prescaler ratio of 1:32
        .equiv FWPSA_PR128,     0x7FFF ; Prescaler ratio of 1:128

        .equiv WINDIS_ON,       0x7FBF ; Windowed Watchdog Timer is enabled; FWDTEN must be 1
        .equiv WINDIS_OFF,      0x7FFF ; Standard Watchdog Timer enabled,(Windowed-mode is disabled)

        .equiv FWDTEN_OFF,      0x7F7F ; Watchdog Timer is disabled
        .equiv FWDTEN_ON,       0x7FFF ; Watchdog Timer is enabled

        .equiv ICS_PGx3,        0x7DFF ; Emulator functions are shared with PGEC3/PGED3
        .equiv ICS_PGx2,        0x7EFF ; Emulator functions are shared with PGEC2/PGED2
        .equiv ICS_PGx1,        0x7FFF ; Emulator functions are shared with PGEC1/PGED1

        .equiv GWRP_ON,         0x6FFF ; Writes to program memory are not allowed
        .equiv GWRP_OFF,        0x7FFF ; Writes to program memory are allowed

        .equiv GCP_ON,          0x5FFF ; Code protection is enabled for the entire program memory space
        .equiv GCP_OFF,         0x7FFF ; Code protection is disabled

        .equiv JTAGEN_OFF,      0x3FFF ; JTAG port is disabled
        .equiv JTAGEN_ON,       0x7FFF ; JTAG port is enabled


.LIST
