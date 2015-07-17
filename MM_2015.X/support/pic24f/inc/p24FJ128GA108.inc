;==========================================================================
;  PIC24FJ128GA108 Standard Assembly Include File
; 
;  (c) Copyright 2014 Microchip Technology, All rights reserved
;  Part support version v1.22.A(19-Aug-2014)
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC24FJ128GA108 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p24FJ128GA108
;       2. Placing a ".equ" directive before the ".include":
;               .equ __24FJ128GA108, 1
;               .include "p24FJ128GA108.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __24FJ128GA108
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

        .extern TBLPAG
        .equiv  TBLPAGL, _TBLPAG
        .equiv  TBLPAGH, _TBLPAG+1

        .extern PSVPAG
        .equiv  PSVPAGL, _PSVPAG
        .equiv  PSVPAGH, _PSVPAG+1

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

        .extern AD1PCFGH
        .equiv  AD1PCFGHL, _AD1PCFGH
        .equiv  AD1PCFGHH, _AD1PCFGH+1

        .extern AD1PCFG

        .extern AD1PCFGL
        .equiv  AD1PCFGLL, _AD1PCFGL
        .equiv  AD1PCFGLH, _AD1PCFGL+1

        .extern AD1CSSL
        .equiv  AD1CSSLL, _AD1CSSL
        .equiv  AD1CSSLH, _AD1CSSL+1

        .extern AD1CSSH
        .equiv  AD1CSSHL, _AD1CSSH
        .equiv  AD1CSSHH, _AD1CSSH+1

        .extern CTMUCON
        .equiv  CTMUCONL, _CTMUCON
        .equiv  CTMUCONH, _CTMUCON+1

        .extern CTMUICON
        .equiv  CTMUICONL, _CTMUICON
        .equiv  CTMUICONH, _CTMUICON+1

        .extern PMCON
        .equiv  PMCONL, _PMCON
        .equiv  PMCONH, _PMCON+1

        .extern PMMODE
        .equiv  PMMODEL, _PMMODE
        .equiv  PMMODEH, _PMMODE+1

        .extern PMADDR
        .equiv  PMADDRL, _PMADDR
        .equiv  PMADDRH, _PMADDR+1

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

        .extern PMAEN
        .equiv  PMAENL, _PMAEN
        .equiv  PMAENH, _PMAEN+1

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

        .extern CRCCON
        .equiv  CRCCONL, _CRCCON
        .equiv  CRCCONH, _CRCCON+1

        .extern CRCXOR
        .equiv  CRCXORL, _CRCXOR
        .equiv  CRCXORH, _CRCXOR+1

        .extern CRCDAT
        .equiv  CRCDATL, _CRCDAT
        .equiv  CRCDATH, _CRCDAT+1

        .extern CRCWDAT
        .equiv  CRCWDATL, _CRCWDAT
        .equiv  CRCWDATH, _CRCWDAT+1

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

        .extern RPOR15
        .equiv  RPOR15L, _RPOR15
        .equiv  RPOR15H, _RPOR15+1

        .extern ALTRP
        .equiv  ALTRPL, _ALTRP
        .equiv  ALTRPH, _ALTRP+1

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
        .equiv PSV,     0x0002
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
        .equiv CN19PDE, 0x0003
        .equiv CN20PDE, 0x0004
        .equiv CN21PDE, 0x0005
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
        .equiv CN41PDE, 0x0009
        .equiv CN42PDE, 0x000A
        .equiv CN43PDE, 0x000B
        .equiv CN44PDE, 0x000C
        .equiv CN45PDE, 0x000D
        .equiv CN47PDE, 0x000F


;----- CNPD4 Bits -----------------------------------------------------
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
        .equiv CN77PDE, 0x000D
        .equiv CN78PDE, 0x000E


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
        .equiv CN19IE,  0x0003
        .equiv CN20IE,  0x0004
        .equiv CN21IE,  0x0005
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
        .equiv CN41IE,  0x0009
        .equiv CN42IE,  0x000A
        .equiv CN43IE,  0x000B
        .equiv CN44IE,  0x000C
        .equiv CN45IE,  0x000D
        .equiv CN47IE,  0x000F


;----- CNEN4 Bits -----------------------------------------------------
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
        .equiv CN77IE,  0x000D
        .equiv CN78IE,  0x000E


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
        .equiv CN19PUE, 0x0003
        .equiv CN20PUE, 0x0004
        .equiv CN21PUE, 0x0005
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
        .equiv CN41PUE, 0x0009
        .equiv CN42PUE, 0x000A
        .equiv CN43PUE, 0x000B
        .equiv CN44PUE, 0x000C
        .equiv CN45PUE, 0x000D
        .equiv CN47PUE, 0x000F


;----- CNPU4 Bits -----------------------------------------------------
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
        .equiv CN77PUE, 0x000D
        .equiv CN78PUE, 0x000E


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
        .equiv PMPIF,   0x000D


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
        .equiv U4ERIF,  0x0007
        .equiv U4RXIF,  0x0008
        .equiv U4TXIF,  0x0009
        .equiv SPF3IF,  0x000A
        .equiv SPI3IF,  0x000B
        .equiv OC9IF,   0x000C
        .equiv IC9IF,   0x000D


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
        .equiv PMPIE,   0x000D


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
        .equiv U4ERIE,  0x0007
        .equiv U4RXIE,  0x0008
        .equiv U4TXIE,  0x0009
        .equiv SPF3IE,  0x000A
        .equiv SPI3IE,  0x000B
        .equiv OC9IE,   0x000C
        .equiv IC9IE,   0x000D


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
        .equiv PMPIP0,  0x0004
        .equiv PMPIP1,  0x0005
        .equiv PMPIP2,  0x0006


;----- IPC12 Bits -----------------------------------------------------
        .equiv SI2C2P0, 0x0004
        .equiv SI2C2P1, 0x0005
        .equiv SI2C2P2, 0x0006
        .equiv MI2C2P0, 0x0008
        .equiv MI2C2P1, 0x0009
        .equiv MI2C2P2, 0x000A

        .equiv SI2C2IP0, 0x0004
        .equiv SI2C2IP1, 0x0005
        .equiv SI2C2IP2, 0x0006
        .equiv MI2C2IP0, 0x0008
        .equiv MI2C2IP1, 0x0009
        .equiv MI2C2IP2, 0x000A


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
        .equiv SI2C3P0, 0x0000
        .equiv SI2C3P1, 0x0001
        .equiv SI2C3P2, 0x0002
        .equiv MI2C3P0, 0x0004
        .equiv MI2C3P1, 0x0005
        .equiv MI2C3P2, 0x0006
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


;----- INTTREG Bits -----------------------------------------------------
        .equiv TMODE,   0x000E
        .equiv IRQtoCPU, 0x000F

        .equiv VECNUM0, 0x0000
        .equiv VECNUM1, 0x0001
        .equiv VECNUM2, 0x0002
        .equiv VECNUM3, 0x0003
        .equiv VECNUM4, 0x0004
        .equiv VECNUM5, 0x0005
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
       ;.equiv T32,     0x0003
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
        .equiv OCFLT0,  0x0004
        .equiv ENFLT0,  0x0007
        .equiv OCSIDL,  0x000D

        .equiv OCM0,    0x0000
        .equiv OCM1,    0x0001
        .equiv OCM2,    0x0002
        .equiv OCFLT,   0x0004
        .equiv ENFLT,   0x0007
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
        .equiv FLTMODE, 0x000F


;----- OC2CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT,   0x0004
       ;.equiv ENFLT,   0x0007
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
       ;.equiv FLTMODE, 0x000F


;----- OC3CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT,   0x0004
       ;.equiv ENFLT,   0x0007
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
       ;.equiv FLTMODE, 0x000F


;----- OC4CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT,   0x0004
       ;.equiv ENFLT,   0x0007
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
       ;.equiv FLTMODE, 0x000F


;----- OC5CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT,   0x0004
       ;.equiv ENFLT,   0x0007
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
       ;.equiv FLTMODE, 0x000F


;----- OC6CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT,   0x0004
       ;.equiv ENFLT,   0x0007
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
       ;.equiv FLTMODE, 0x000F


;----- OC7CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT,   0x0004
       ;.equiv ENFLT,   0x0007
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
       ;.equiv FLTMODE, 0x000F


;----- OC8CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT,   0x0004
       ;.equiv ENFLT,   0x0007
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
       ;.equiv FLTMODE, 0x000F


;----- OC9CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCFLT,   0x0004
       ;.equiv ENFLT,   0x0007
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


;----- TRISA Bits -----------------------------------------------------
        .equiv TRISA9,  0x0009
        .equiv TRISA10, 0x000A
        .equiv TRISA14, 0x000E
        .equiv TRISA15, 0x000F


;----- PORTA Bits -----------------------------------------------------
        .equiv RA9,     0x0009
        .equiv RA10,    0x000A
        .equiv RA14,    0x000E
        .equiv RA15,    0x000F


;----- LATA Bits -----------------------------------------------------
        .equiv LATA9,   0x0009
        .equiv LATA10,  0x000A
        .equiv LATA14,  0x000E
        .equiv LATA15,  0x000F


;----- ODCA Bits -----------------------------------------------------
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
        .equiv TRISC1,  0x0001
        .equiv TRISC3,  0x0003
        .equiv TRISC12, 0x000C
        .equiv TRISC13, 0x000D
        .equiv TRISC14, 0x000E
        .equiv TRISC15, 0x000F


;----- PORTC Bits -----------------------------------------------------
        .equiv RC1,     0x0001
        .equiv RC3,     0x0003
        .equiv RC12,    0x000C
        .equiv RC13,    0x000D
        .equiv RC14,    0x000E
        .equiv RC15,    0x000F


;----- LATC Bits -----------------------------------------------------
        .equiv LATC1,   0x0001
        .equiv LATC3,   0x0003
        .equiv LATC12,  0x000C
        .equiv LATC13,  0x000D
        .equiv LATC14,  0x000E
        .equiv LATC15,  0x000F


;----- ODCC Bits -----------------------------------------------------
        .equiv ODC1,    0x0001
        .equiv ODC3,    0x0003
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
        .equiv TRISF6,  0x0006
        .equiv TRISF7,  0x0007
        .equiv TRISF8,  0x0008


;----- PORTF Bits -----------------------------------------------------
        .equiv RF0,     0x0000
        .equiv RF1,     0x0001
        .equiv RF2,     0x0002
        .equiv RF3,     0x0003
        .equiv RF4,     0x0004
        .equiv RF5,     0x0005
        .equiv RF6,     0x0006
        .equiv RF7,     0x0007
        .equiv RF8,     0x0008


;----- LATF Bits -----------------------------------------------------
        .equiv LATF0,   0x0000
        .equiv LATF1,   0x0001
        .equiv LATF2,   0x0002
        .equiv LATF3,   0x0003
        .equiv LATF4,   0x0004
        .equiv LATF5,   0x0005
        .equiv LATF6,   0x0006
        .equiv LATF7,   0x0007
        .equiv LATF8,   0x0008


;----- ODCF Bits -----------------------------------------------------
        .equiv ODF0,    0x0000
        .equiv ODF1,    0x0001
        .equiv ODF2,    0x0002
        .equiv ODF3,    0x0003
        .equiv ODF4,    0x0004
        .equiv ODF5,    0x0005
        .equiv ODF6,    0x0006
        .equiv ODF7,    0x0007
        .equiv ODF8,    0x0008


;----- TRISG Bits -----------------------------------------------------
        .equiv TRISG0,  0x0000
        .equiv TRISG1,  0x0001
        .equiv TRISG2,  0x0002
        .equiv TRISG3,  0x0003
        .equiv TRISG6,  0x0006
        .equiv TRISG7,  0x0007
        .equiv TRISG8,  0x0008
        .equiv TRISG9,  0x0009


;----- PORTG Bits -----------------------------------------------------
        .equiv RG0,     0x0000
        .equiv RG1,     0x0001
        .equiv RG2,     0x0002
        .equiv RG3,     0x0003
        .equiv RG6,     0x0006
        .equiv RG7,     0x0007
        .equiv RG8,     0x0008
        .equiv RG9,     0x0009


;----- LATG Bits -----------------------------------------------------
        .equiv LATG0,   0x0000
        .equiv LATG1,   0x0001
        .equiv LATG2,   0x0002
        .equiv LATG3,   0x0003
        .equiv LATG6,   0x0006
        .equiv LATG7,   0x0007
        .equiv LATG8,   0x0008
        .equiv LATG9,   0x0009


;----- ODCG Bits -----------------------------------------------------
        .equiv ODG0,    0x0000
        .equiv ODG1,    0x0001
        .equiv ODG2,    0x0002
        .equiv ODG3,    0x0003
        .equiv ODG6,    0x0006
        .equiv ODG7,    0x0007
        .equiv ODG8,    0x0008
        .equiv ODG9,    0x0009


;----- PADCFG1 Bits -----------------------------------------------------
        .equiv PMPTTL,  0x0000
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


;----- AD1PCFGH Bits -----------------------------------------------------
        .equiv PCFG16,  0x0000
        .equiv PCFG17,  0x0001


;----- AD1PCFG Bits -----------------------------------------------------
        .equiv PCFG0,   0x0000
        .equiv PCFG1,   0x0001
        .equiv PCFG2,   0x0002
        .equiv PCFG3,   0x0003
        .equiv PCFG4,   0x0004
        .equiv PCFG5,   0x0005
        .equiv PCFG6,   0x0006
        .equiv PCFG7,   0x0007
        .equiv PCFG8,   0x0008
        .equiv PCFG9,   0x0009
        .equiv PCFG10,  0x000A
        .equiv PCFG11,  0x000B
        .equiv PCFG12,  0x000C
        .equiv PCFG13,  0x000D
        .equiv PCFG14,  0x000E
        .equiv PCFG15,  0x000F


;----- AD1PCFGL Bits -----------------------------------------------------
       ;.equiv PCFG0,   0x0000
       ;.equiv PCFG1,   0x0001
       ;.equiv PCFG2,   0x0002
       ;.equiv PCFG3,   0x0003
       ;.equiv PCFG4,   0x0004
       ;.equiv PCFG5,   0x0005
       ;.equiv PCFG6,   0x0006
       ;.equiv PCFG7,   0x0007
       ;.equiv PCFG8,   0x0008
       ;.equiv PCFG9,   0x0009
       ;.equiv PCFG10,  0x000A
       ;.equiv PCFG11,  0x000B
       ;.equiv PCFG12,  0x000C
       ;.equiv PCFG13,  0x000D
       ;.equiv PCFG14,  0x000E
       ;.equiv PCFG15,  0x000F


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


;----- AD1CSSH Bits -----------------------------------------------------
        .equiv CSSL16,  0x0000
        .equiv CSSL17,  0x0001


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


;----- PMCON Bits -----------------------------------------------------
        .equiv RDSP,    0x0000
        .equiv WRSP,    0x0001
        .equiv BEP,     0x0002
        .equiv CS1P,    0x0003
        .equiv CS2P,    0x0004
        .equiv ALP,     0x0005
        .equiv PTRDEN,  0x0008
        .equiv PTWREN,  0x0009
        .equiv PTBEEN,  0x000A
        .equiv PSIDL,   0x000D
        .equiv PMPEN,   0x000F

        .equiv CSF0,    0x0006
        .equiv CSF1,    0x0007
        .equiv ADRMUX0, 0x000B
        .equiv ADRMUX1, 0x000C


;----- PMMODE Bits -----------------------------------------------------
       ;.equiv MODE16,  0x000A
        .equiv BUSY,    0x000F

        .equiv WAITE0,  0x0000
        .equiv WAITE1,  0x0001
        .equiv WAITM0,  0x0002
        .equiv WAITM1,  0x0003
        .equiv WAITM2,  0x0004
        .equiv WAITM3,  0x0005
        .equiv WAITB0,  0x0006
        .equiv WAITB1,  0x0007
        .equiv MODE0,   0x0008
        .equiv MODE1,   0x0009
        .equiv INCM0,   0x000B
        .equiv INCM1,   0x000C
        .equiv IRQM0,   0x000D
        .equiv IRQM1,   0x000E


;----- PMADDR Bits -----------------------------------------------------
        .equiv ADDR0,   0x0000
        .equiv ADDR1,   0x0001
        .equiv ADDR2,   0x0002
        .equiv ADDR3,   0x0003
        .equiv ADDR4,   0x0004
        .equiv ADDR5,   0x0005
        .equiv ADDR6,   0x0006
        .equiv ADDR7,   0x0007
        .equiv ADDR8,   0x0008
        .equiv ADDR9,   0x0009
        .equiv ADDR10,  0x000A
        .equiv ADDR11,  0x000B
        .equiv ADDR12,  0x000C
        .equiv ADDR13,  0x000D
        .equiv CS1,     0x000E
        .equiv CS2,     0x000F


;----- PMDOUT1 Bits -----------------------------------------------------
       ;.equiv ADDR0,   0x0000
       ;.equiv ADDR1,   0x0001
       ;.equiv ADDR2,   0x0002
       ;.equiv ADDR3,   0x0003
       ;.equiv ADDR4,   0x0004
       ;.equiv ADDR5,   0x0005
       ;.equiv ADDR6,   0x0006
       ;.equiv ADDR7,   0x0007
       ;.equiv ADDR8,   0x0008
       ;.equiv ADDR9,   0x0009
       ;.equiv ADDR10,  0x000A
       ;.equiv ADDR11,  0x000B
       ;.equiv ADDR12,  0x000C
       ;.equiv ADDR13,  0x000D
       ;.equiv CS1,     0x000E
       ;.equiv CS2,     0x000F


;----- PMAEN Bits -----------------------------------------------------
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


;----- CMSTAT Bits -----------------------------------------------------
        .equiv C1OUT,   0x0000
        .equiv C2OUT,   0x0001
        .equiv C3OUT,   0x0002
        .equiv C4OUT,   0x0003
        .equiv C5OUT,   0x0004
        .equiv C6OUT,   0x0005
        .equiv C1EVT,   0x0008
        .equiv C2EVT,   0x0009
        .equiv C3EVT,   0x000A
        .equiv C4EVT,   0x000B
        .equiv C5EVT,   0x000C
        .equiv C6EVT,   0x000D
        .equiv CMIDL,   0x000F


;----- CVRCON Bits -----------------------------------------------------
        .equiv CVRSS,   0x0004
        .equiv CVRR,    0x0005
        .equiv CVROE,   0x0006
        .equiv CVREN,   0x0007

        .equiv CVR0,    0x0000
        .equiv CVR1,    0x0001
        .equiv CVR2,    0x0002
        .equiv CVR3,    0x0003


;----- CM1CON Bits -----------------------------------------------------
        .equiv CCH0,    0x0000
        .equiv CCH1,    0x0001
        .equiv CREF,    0x0004
        .equiv EVPOL0,  0x0006
        .equiv EVPOL1,  0x0007
        .equiv COUT,    0x0008
        .equiv CEVT,    0x0009
        .equiv CPOL,    0x000D
        .equiv COE,     0x000E
        .equiv CON,     0x000F

        .equiv CEN,     0x000F


;----- CM2CON Bits -----------------------------------------------------
       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv CREF,    0x0004
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CEN,     0x000F


;----- CM3CON Bits -----------------------------------------------------
       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv CREF,    0x0004
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CEN,     0x000F


;----- CRCCON Bits -----------------------------------------------------
        .equiv CRCGO,   0x0004
        .equiv CRCMPT,  0x0006
        .equiv CRCFUL,  0x0007
        .equiv CSIDL,   0x000D

        .equiv PLEN0,   0x0000
        .equiv PLEN1,   0x0001
        .equiv PLEN2,   0x0002
        .equiv PLEN3,   0x0003
        .equiv VWORD0,  0x0008
        .equiv VWORD1,  0x0009
        .equiv VWORD2,  0x000A
        .equiv VWORD3,  0x000B
        .equiv VWORD4,  0x000C


;----- CRCXOR Bits -----------------------------------------------------
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
        .equiv T1CKR0,  0x0008
        .equiv T1CKR1,  0x0009
        .equiv T1CKR2,  0x000A
        .equiv T1CKR3,  0x000B
        .equiv T1CKR4,  0x000C
        .equiv T1CKR5,  0x000D


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


;----- ALTRP Bits -----------------------------------------------------
        .equiv SCK1CM,  0x0000


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
        .equiv DOZEN,   0x000B
        .equiv ROI,     0x000F

        .equiv RCDIV0,  0x0008
        .equiv RCDIV1,  0x0009
        .equiv RCDIV2,  0x000A
        .equiv DOZE0,   0x000C
        .equiv DOZE1,   0x000D
        .equiv DOZE2,   0x000E


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
        .equiv PMPMD,   0x0008
        .equiv RTCCMD,  0x0009
        .equiv CMPMD,   0x000A

        .equiv CRCPMD,  0x0007


;----- PMD4 Bits -----------------------------------------------------
        .equiv LVDMD,   0x0001
        .equiv CTMUMD,  0x0002
        .equiv REFOMD,  0x0003
        .equiv U4MD,    0x0005


;----- PMD5 Bits -----------------------------------------------------
        .equiv OC9MD,   0x0000
        .equiv IC9MD,   0x0008


;----- PMD6 Bits -----------------------------------------------------
        .equiv SPI3MD,  0x0000




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
;     WPFP_WPFP511         Highest Page (same as page 85)
;
;   Segment Write Protection Disable bit:
;     WPDIS_WPEN           Segmented code protection enabled
;     WPDIS_WPDIS          Segmented code protection disabled
;
;   Configuration Word Code Page Protection Select bit:
;     WPCFG_WPCFGEN        Last page and Flash configuration words are code-protected
;     WPCFG_WPCFGDIS       Last page(at the top of program memory) and Flash configuration words are not protected
;
;   Segment Write Protection End Page Select bit:
;     WPEND_WPSTARTMEM     Write Protect from page 0 to WPFP
;     WPEND_WPENDMEM       Write Protect from WPFP to the last page of memory
;
        .equiv WPFP_WPFP0,      0xFE00 ; Page 0 (0x00)
        .equiv WPFP_WPFP1,      0xFE01 ; Page 1 (0x400)
        .equiv WPFP_WPFP2,      0xFE02 ; Page 2 (0x800)
        .equiv WPFP_WPFP3,      0xFE03 ; Page 3 (0xC00)
        .equiv WPFP_WPFP4,      0xFE04 ; Page 4 (0x1000)
        .equiv WPFP_WPFP5,      0xFE05 ; Page 5 (0x1400)
        .equiv WPFP_WPFP6,      0xFE06 ; Page 6 (0x1800)
        .equiv WPFP_WPFP7,      0xFE07 ; Page 7 (0x1C00)
        .equiv WPFP_WPFP8,      0xFE08 ; Page 8 (0x2000)
        .equiv WPFP_WPFP9,      0xFE09 ; Page 9 (0x2400)
        .equiv WPFP_WPFP10,     0xFE0A ; Page 10 (0x2800)
        .equiv WPFP_WPFP11,     0xFE0B ; Page 11 (0x2C00)
        .equiv WPFP_WPFP12,     0xFE0C ; Page 12 (0x3000)
        .equiv WPFP_WPFP13,     0xFE0D ; Page 13 (0x3400)
        .equiv WPFP_WPFP14,     0xFE0E ; Page 14 (0x3800)
        .equiv WPFP_WPFP15,     0xFE0F ; Page 15 (0x3C00)
        .equiv WPFP_WPFP16,     0xFE10 ; Page 16 (0x4000)
        .equiv WPFP_WPFP17,     0xFE11 ; Page 17 (0x4400)
        .equiv WPFP_WPFP18,     0xFE12 ; Page 18 (0x4800)
        .equiv WPFP_WPFP19,     0xFE13 ; Page 19 (0x4C00)
        .equiv WPFP_WPFP20,     0xFE14 ; Page 20 (0x5000)
        .equiv WPFP_WPFP21,     0xFE15 ; Page 21 (0x5400)
        .equiv WPFP_WPFP22,     0xFE16 ; Page 22 (0x5800)
        .equiv WPFP_WPFP23,     0xFE17 ; Page 23 (0x5C00)
        .equiv WPFP_WPFP24,     0xFE18 ; Page 24 (0x6000)
        .equiv WPFP_WPFP25,     0xFE19 ; Page 25 (0x6400)
        .equiv WPFP_WPFP26,     0xFE1A ; Page 26 (0x6800)
        .equiv WPFP_WPFP27,     0xFE1B ; Page 27 (0x6C00)
        .equiv WPFP_WPFP28,     0xFE1C ; Page 28 (0x7000)
        .equiv WPFP_WPFP29,     0xFE1D ; Page 29 (0x7400)
        .equiv WPFP_WPFP30,     0xFE1E ; Page 30 (0x7800)
        .equiv WPFP_WPFP31,     0xFE1F ; Page 31 (0x7C00)
        .equiv WPFP_WPFP32,     0xFE20 ; Page 32 (0x8000)
        .equiv WPFP_WPFP33,     0xFE21 ; Page 33 (0x8400)
        .equiv WPFP_WPFP34,     0xFE22 ; Page 34 (0x8800)
        .equiv WPFP_WPFP35,     0xFE23 ; Page 35 (0x8C00)
        .equiv WPFP_WPFP36,     0xFE24 ; Page 36 (0x9000)
        .equiv WPFP_WPFP37,     0xFE25 ; Page 37 (0x9400)
        .equiv WPFP_WPFP38,     0xFE26 ; Page 38 (0x9800)
        .equiv WPFP_WPFP39,     0xFE27 ; Page 39 (0x9C00)
        .equiv WPFP_WPFP40,     0xFE28 ; Page 40 (0xA000)
        .equiv WPFP_WPFP41,     0xFE29 ; Page 41 (0xA400)
        .equiv WPFP_WPFP42,     0xFE2A ; Page 42 (0xA800)
        .equiv WPFP_WPFP43,     0xFE2B ; Page 43 (0xAC00)
        .equiv WPFP_WPFP44,     0xFE2C ; Page 44 (0xB000)
        .equiv WPFP_WPFP45,     0xFE2D ; Page 45 (0xB400)
        .equiv WPFP_WPFP46,     0xFE2E ; Page 46 (0xB800)
        .equiv WPFP_WPFP47,     0xFE2F ; Page 47 (0xBC00)
        .equiv WPFP_WPFP48,     0xFE30 ; Page 48 (0xC000)
        .equiv WPFP_WPFP49,     0xFE31 ; Page 49 (0xC400)
        .equiv WPFP_WPFP50,     0xFE32 ; Page 50 (0xC800)
        .equiv WPFP_WPFP51,     0xFE33 ; Page 51 (0xCC00)
        .equiv WPFP_WPFP52,     0xFE34 ; Page 52 (0xD000)
        .equiv WPFP_WPFP53,     0xFE35 ; Page 53 (0xD400)
        .equiv WPFP_WPFP54,     0xFE36 ; Page 54 (0xD800)
        .equiv WPFP_WPFP55,     0xFE37 ; Page 55 (0xDC00)
        .equiv WPFP_WPFP56,     0xFE38 ; Page 56 (0xE000)
        .equiv WPFP_WPFP57,     0xFE39 ; Page 57 (0xE400)
        .equiv WPFP_WPFP58,     0xFE3A ; Page 58 (0xE800)
        .equiv WPFP_WPFP59,     0xFE3B ; Page 59 (0xEC00)
        .equiv WPFP_WPFP60,     0xFE3C ; Page 60 (0xF000)
        .equiv WPFP_WPFP61,     0xFE3D ; Page 61 (0xF400)
        .equiv WPFP_WPFP62,     0xFE3E ; Page 62 (0xF800)
        .equiv WPFP_WPFP63,     0xFE3F ; Page 63 (0xFC00)
        .equiv WPFP_WPFP64,     0xFE40 ; Page 64 (0x10000)
        .equiv WPFP_WPFP65,     0xFE41 ; Page 65 (0x10400)
        .equiv WPFP_WPFP66,     0xFE42 ; Page 66 (0x10800)
        .equiv WPFP_WPFP67,     0xFE43 ; Page 67 (0x10C00)
        .equiv WPFP_WPFP68,     0xFE44 ; Page 68 (0x11000)
        .equiv WPFP_WPFP69,     0xFE45 ; Page 69 (0x11400)
        .equiv WPFP_WPFP70,     0xFE46 ; Page 70 (0x11800)
        .equiv WPFP_WPFP71,     0xFE47 ; Page 71 (0x11C00)
        .equiv WPFP_WPFP72,     0xFE48 ; Page 72 (0x12000)
        .equiv WPFP_WPFP73,     0xFE49 ; Page 73 (0x12400)
        .equiv WPFP_WPFP74,     0xFE4A ; Page 74 (0x12800)
        .equiv WPFP_WPFP75,     0xFE4B ; Page 75 (0x12C00)
        .equiv WPFP_WPFP76,     0xFE4C ; Page 76 (0x13000)
        .equiv WPFP_WPFP77,     0xFE4D ; Page 77 (0x13400)
        .equiv WPFP_WPFP78,     0xFE4E ; Page 78 (0x13800)
        .equiv WPFP_WPFP79,     0xFE4F ; Page 79 (0x13C00)
        .equiv WPFP_WPFP80,     0xFE50 ; Page 80 (0x14000)
        .equiv WPFP_WPFP81,     0xFE51 ; Page 81 (0x14400)
        .equiv WPFP_WPFP82,     0xFE52 ; Page 82 (0x14800)
        .equiv WPFP_WPFP83,     0xFE53 ; Page 83 (0x14C00)
        .equiv WPFP_WPFP84,     0xFE54 ; Page 84 (0x15000)
        .equiv WPFP_WPFP85,     0xFE55 ; Page 85 (0x15400)
        .equiv WPFP_WPFP511,    0xFFFF ; Highest Page (same as page 85)

        .equiv WPDIS_WPEN,      0xDFFF ; Segmented code protection enabled
        .equiv WPDIS_WPDIS,     0xFFFF ; Segmented code protection disabled

        .equiv WPCFG_WPCFGEN,   0xBFFF ; Last page and Flash configuration words are code-protected
        .equiv WPCFG_WPCFGDIS,  0xFFFF ; Last page(at the top of program memory) and Flash configuration words are not protected

        .equiv WPEND_WPSTARTMEM, 0x7FFF ; Write Protect from page 0 to WPFP
        .equiv WPEND_WPENDMEM,  0xFFFF ; Write Protect from WPFP to the last page of memory


;----- CONFIG2 (0x157fc) --------------------------------------------------
;
;  The following settings are available for CONFIG2:
;
;   Primary Oscillator Select:
;     POSCMOD_EC           EC oscillator mode selected
;     POSCMOD_XT           XT oscillator mode selected
;     POSCMOD_HS           HS oscillator mode selected
;     POSCMOD_NONE         Primary oscillator disabled
;
;   IOLOCK One-Way Set Enable bit:
;     IOL1WAY_OFF          Unlimited Writes To RP Registers
;     IOL1WAY_ON           Write RP Registers Once
;
;   Primary Oscillator Output Function:
;     OSCIOFNC_ON          OSCO functions as port I/O (RC15)
;     OSCIOFNC_OFF         OSCO functions as CLKO (FOSC/2)
;
;   Clock Switching and Monitor:
;     FCKSM_CSECME         Both Clock switching and Fail-safe Clock Monitor are enabled
;     FCKSM_CSECMD         Clock switching is enabled, Fail-safe Clock Monitor is disabled
;     FCKSM_CSDCMD         Both Clock Switching and Fail-safe Clock Monitor are disabled
;
;   Oscillator Select:
;     FNOSC_FRC            Fast RC Oscillator (FRC)
;     FNOSC_FRCPLL         Fast RC oscillator with Postscaler and PLL module (FRCPLL)
;     FNOSC_PRI            Primary oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary oscillator (XT, HS, EC) with PLL module (XTPLL,HSPLL, ECPLL)
;     FNOSC_SOSC           Secondary oscillator (SOSC)
;     FNOSC_LPRC           Low-Power RC oscillator (LPRC)
;     FNOSC_FRCDIV         Fast RC oscillator with Postscaler (FRCDIV)
;
;   Internal External Switch Over Mode:
;     IESO_OFF             IESO mode (Two-speed start-up)disabled
;     IESO_ON              IESO mode (Two-speed start-up) enabled
;
        .equiv POSCMOD_EC,      0xFFFC ; EC oscillator mode selected
        .equiv POSCMOD_XT,      0xFFFD ; XT oscillator mode selected
        .equiv POSCMOD_HS,      0xFFFE ; HS oscillator mode selected
        .equiv POSCMOD_NONE,    0xFFFF ; Primary oscillator disabled

        .equiv IOL1WAY_OFF,     0xFFEF ; Unlimited Writes To RP Registers
        .equiv IOL1WAY_ON,      0xFFFF ; Write RP Registers Once

        .equiv OSCIOFNC_ON,     0xFFDF ; OSCO functions as port I/O (RC15)
        .equiv OSCIOFNC_OFF,    0xFFFF ; OSCO functions as CLKO (FOSC/2)

        .equiv FCKSM_CSECME,    0xFF3F ; Both Clock switching and Fail-safe Clock Monitor are enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Clock switching is enabled, Fail-safe Clock Monitor is disabled
        .equiv FCKSM_CSDCMD,    0xFFBF ; Both Clock Switching and Fail-safe Clock Monitor are disabled

        .equiv FNOSC_FRC,       0xF8FF ; Fast RC Oscillator (FRC)
        .equiv FNOSC_FRCPLL,    0xF9FF ; Fast RC oscillator with Postscaler and PLL module (FRCPLL)
        .equiv FNOSC_PRI,       0xFAFF ; Primary oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFBFF ; Primary oscillator (XT, HS, EC) with PLL module (XTPLL,HSPLL, ECPLL)
        .equiv FNOSC_SOSC,      0xFCFF ; Secondary oscillator (SOSC)
        .equiv FNOSC_LPRC,      0xFDFF ; Low-Power RC oscillator (LPRC)
        .equiv FNOSC_FRCDIV,    0xFFFF ; Fast RC oscillator with Postscaler (FRCDIV)

        .equiv IESO_OFF,        0x7FFF ; IESO mode (Two-speed start-up)disabled
        .equiv IESO_ON,         0xFFFF ; IESO mode (Two-speed start-up) enabled


;----- CONFIG1 (0x157fe) --------------------------------------------------
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
;   Watchdog Timer Window:
;     WINDIS_ON            Windowed Watchdog Timer enabled; FWDTEN must be 1
;     WINDIS_OFF           Standard Watchdog Timer enabled,(Windowed-mode is disabled)
;
;   Watchdog Timer Enable:
;     FWDTEN_OFF           Watchdog Timer is disabled
;     FWDTEN_ON            Watchdog Timer is enabled
;
;   Comm Channel Select:
;     ICS_PGx3             Emulator functions are shared with PGEC3/PGED3
;     ICS_PGx2             Emulator functions are shared with PGEC2/PGED2
;     ICS_PGx1             Emulator functions are shared with PGEC1/PGED1
;
;   Set Clip On Emulation Mode:
;     COE_ON               Enabled
;     COE_OFF              Disabled
;
;   Background Debug:
;     BKBUG_ON             Device resets into Debug mode
;     BKBUG_OFF            Device resets into Operational mode
;
;   General Code Segment Write Protect:
;     GWRP_ON              Writes to program memory are disabled
;     GWRP_OFF             Writes to program memory are allowed
;
;   General Code Segment Code Protect:
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

        .equiv WINDIS_ON,       0x7FBF ; Windowed Watchdog Timer enabled; FWDTEN must be 1
        .equiv WINDIS_OFF,      0x7FFF ; Standard Watchdog Timer enabled,(Windowed-mode is disabled)

        .equiv FWDTEN_OFF,      0x7F7F ; Watchdog Timer is disabled
        .equiv FWDTEN_ON,       0x7FFF ; Watchdog Timer is enabled

        .equiv ICS_PGx3,        0x7DFF ; Emulator functions are shared with PGEC3/PGED3
        .equiv ICS_PGx2,        0x7EFF ; Emulator functions are shared with PGEC2/PGED2
        .equiv ICS_PGx1,        0x7FFF ; Emulator functions are shared with PGEC1/PGED1

        .equiv COE_ON,          0x7FFF ; Enabled
        .equiv COE_OFF,         0x7FFF ; Disabled

        .equiv BKBUG_ON,        0x7FFF ; Device resets into Debug mode
        .equiv BKBUG_OFF,       0x7FFF ; Device resets into Operational mode

        .equiv GWRP_ON,         0x6FFF ; Writes to program memory are disabled
        .equiv GWRP_OFF,        0x7FFF ; Writes to program memory are allowed

        .equiv GCP_ON,          0x5FFF ; Code protection is enabled for the entire program memory space
        .equiv GCP_OFF,         0x7FFF ; Code protection is disabled

        .equiv JTAGEN_OFF,      0x3FFF ; JTAG port is disabled
        .equiv JTAGEN_ON,       0x7FFF ; JTAG port is enabled


.LIST
