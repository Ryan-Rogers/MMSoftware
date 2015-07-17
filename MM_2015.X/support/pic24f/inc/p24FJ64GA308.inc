;==========================================================================
;  PIC24FJ64GA308 Standard Assembly Include File
; 
;  (c) Copyright 2014 Microchip Technology, All rights reserved
;  Part support version v1.22.A(19-Aug-2014)
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC24FJ64GA308 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p24FJ64GA308
;       2. Placing a ".equ" directive before the ".include":
;               .equ __24FJ64GA308, 1
;               .include "p24FJ64GA308.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __24FJ64GA308
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

        .extern IPC25
        .equiv  IPC25L, _IPC25
        .equiv  IPC25H, _IPC25+1

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

        .extern ADC1BUF24
        .equiv  ADC1BUF24L, _ADC1BUF24
        .equiv  ADC1BUF24H, _ADC1BUF24+1

        .extern ADC1BUF25
        .equiv  ADC1BUF25L, _ADC1BUF25
        .equiv  ADC1BUF25H, _ADC1BUF25+1

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

        .extern AD1CON4
        .equiv  AD1CON4L, _AD1CON4
        .equiv  AD1CON4H, _AD1CON4+1

        .extern AD1CON5
        .equiv  AD1CON5L, _AD1CON5
        .equiv  AD1CON5H, _AD1CON5+1

        .extern AD1CHITL
        .equiv  AD1CHITLL, _AD1CHITL
        .equiv  AD1CHITLH, _AD1CHITL+1

        .extern CTMUCON1
        .equiv  CTMUCON1L, _CTMUCON1
        .equiv  CTMUCON1H, _CTMUCON1+1

        .extern CTMUCON2
        .equiv  CTMUCON2L, _CTMUCON2
        .equiv  CTMUCON2H, _CTMUCON2+1

        .extern CTMUICON
        .equiv  CTMUICONL, _CTMUICON
        .equiv  CTMUICONH, _CTMUICON+1

        .extern AD1CTMENH
        .equiv  AD1CTMENHL, _AD1CTMENH
        .equiv  AD1CTMENHH, _AD1CTMENH+1

        .extern AD1CTMENL
        .equiv  AD1CTMENLL, _AD1CTMENL
        .equiv  AD1CTMENLH, _AD1CTMENL+1

        .extern AD1DMBUF
        .equiv  AD1DMBUFL, _AD1DMBUF
        .equiv  AD1DMBUFH, _AD1DMBUF+1

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

        .extern ANCFG
        .equiv  ANCFGL, _ANCFG
        .equiv  ANCFGH, _ANCFG+1

        .extern ANSA
        .equiv  ANSAL, _ANSA
        .equiv  ANSAH, _ANSA+1

        .extern ANSB
        .equiv  ANSBL, _ANSB
        .equiv  ANSBH, _ANSB+1

        .extern ANSD
        .equiv  ANSDL, _ANSD
        .equiv  ANSDH, _ANSD+1

        .extern ANSE
        .equiv  ANSEL, _ANSE
        .equiv  ANSEH, _ANSE+1

        .extern ANSG
        .equiv  ANSGL, _ANSG
        .equiv  ANSGH, _ANSG+1

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

        .extern PMD6
        .equiv  PMD6L, _PMD6
        .equiv  PMD6H, _PMD6+1

        .extern PMD7
        .equiv  PMD7L, _PMD7
        .equiv  PMD7H, _PMD7+1

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
        .equiv CN46PDE, 0x000E
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
        .equiv CN46IE,  0x000E
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
        .equiv CN46PUE, 0x000E
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


;----- IFS5 Bits -----------------------------------------------------
        .equiv U3ERIF,  0x0001
        .equiv U3RXIF,  0x0002
        .equiv U3TXIF,  0x0003
        .equiv U4ERIF,  0x0007
        .equiv U4RXIF,  0x0008
        .equiv U4TXIF,  0x0009


;----- IFS6 Bits -----------------------------------------------------
        .equiv LCDIF,   0x0004


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


;----- IEC5 Bits -----------------------------------------------------
        .equiv U3ERIE,  0x0001
        .equiv U3RXIE,  0x0002
        .equiv U3TXIE,  0x0003
        .equiv U4ERIE,  0x0007
        .equiv U4RXIE,  0x0008
        .equiv U4TXIE,  0x0009


;----- IEC6 Bits -----------------------------------------------------
        .equiv LCDIE,   0x0004


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


;----- IPC25 Bits -----------------------------------------------------
        .equiv LCDIP0,  0x0000
        .equiv LCDIP1,  0x0001
        .equiv LCDIP2,  0x0002


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
        .equiv TECS0,   0x0008
        .equiv TECS1,   0x0009


        .equiv T1ECS0,  0x0008
        .equiv T1ECS1,  0x0009


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


;----- AD1CON1 Bits -----------------------------------------------------
        .equiv DONE,    0x0000
        .equiv SAMP,    0x0001
        .equiv ASAM,    0x0002
        .equiv MODE12,  0x000A
        .equiv DMAEN_AD1CON1, 0x000B
        .equiv DMABM,   0x000C
        .equiv ADSIDL,  0x000D
        .equiv ADON,    0x000F

        .equiv SSRC0,   0x0004
        .equiv SSRC1,   0x0005
        .equiv SSRC2,   0x0006
        .equiv SSRC3,   0x0007
        .equiv FORM0,   0x0008
        .equiv FORM1,   0x0009


;----- AD1CON2 Bits -----------------------------------------------------
        .equiv ALTS,    0x0000
        .equiv BUFM,    0x0001
        .equiv BUFS,    0x0007
        .equiv CSCNA,   0x000A
        .equiv BUFREGEN, 0x000B
        .equiv OFFCAL,  0x000C
        .equiv NVCFG0,  0x000D

        .equiv SMPI0,   0x0002
        .equiv SMPI1,   0x0003
        .equiv SMPI2,   0x0004
        .equiv SMPI3,   0x0005
        .equiv SMPI4,   0x0006
        .equiv PCVFG0,  0x000E
        .equiv PCVFG1,  0x000F


;----- AD1CON3 Bits -----------------------------------------------------
        .equiv PUMPEN,  0x000D
        .equiv EXTSAM,  0x000E
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
        .equiv CH0SA0,  0x0000
        .equiv CH0SA1,  0x0001
        .equiv CH0SA2,  0x0002
        .equiv CH0SA3,  0x0003
        .equiv CH0SA4,  0x0004
        .equiv CH0NA0,  0x0005
        .equiv CH0NA1,  0x0006
        .equiv CH0NA2,  0x0007
        .equiv CH0SB0,  0x0008
        .equiv CH0SB1,  0x0009
        .equiv CH0SB2,  0x000A
        .equiv CH0SB3,  0x000B
        .equiv CH0SB4,  0x000C
        .equiv CH0NB0,  0x000D
        .equiv CH0NB1,  0x000E
        .equiv CH0NB2,  0x000F


;----- AD1CHS0 Bits -----------------------------------------------------
       ;.equiv CH0SA0,  0x0000
       ;.equiv CH0SA1,  0x0001
       ;.equiv CH0SA2,  0x0002
       ;.equiv CH0SA3,  0x0003
       ;.equiv CH0SA4,  0x0004
       ;.equiv CH0NA0,  0x0005
       ;.equiv CH0NA1,  0x0006
       ;.equiv CH0NA2,  0x0007
       ;.equiv CH0SB0,  0x0008
       ;.equiv CH0SB1,  0x0009
       ;.equiv CH0SB2,  0x000A
       ;.equiv CH0SB3,  0x000B
       ;.equiv CH0SB4,  0x000C
       ;.equiv CH0NB0,  0x000D
       ;.equiv CH0NB1,  0x000E
       ;.equiv CH0NB2,  0x000F


;----- AD1CSSH Bits -----------------------------------------------------
        .equiv CSS16,   0x0000
        .equiv CSS17,   0x0001
        .equiv CSS18,   0x0002
        .equiv CSS19,   0x0003
        .equiv CSS20,   0x0004
        .equiv CSS21,   0x0005
        .equiv CSS22,   0x0006
        .equiv CSS23,   0x0007
        .equiv CSS24,   0x0008
        .equiv CSS25,   0x0009
        .equiv CSS26,   0x000A
        .equiv CSS27,   0x000B
        .equiv CSS28,   0x000C
        .equiv CSS29,   0x000D
        .equiv CSS30,   0x000E


;----- AD1CSSL Bits -----------------------------------------------------
        .equiv CSS0,    0x0000
        .equiv CSS1,    0x0001
        .equiv CSS2,    0x0002
        .equiv CSS3,    0x0003
        .equiv CSS4,    0x0004
        .equiv CSS5,    0x0005
        .equiv CSS6,    0x0006
        .equiv CSS7,    0x0007
        .equiv CSS8,    0x0008
        .equiv CSS9,    0x0009
        .equiv CSS10,   0x000A
        .equiv CSS11,   0x000B
        .equiv CSS12,   0x000C
        .equiv CSS13,   0x000D
        .equiv CSS14,   0x000E
        .equiv CSS15,   0x000F


;----- AD1CON4 Bits -----------------------------------------------------
        .equiv DMABL0,  0x0000
        .equiv DMABL1,  0x0001
        .equiv DMABL2,  0x0002


;----- AD1CON5 Bits -----------------------------------------------------
        .equiv BGREQ,   0x000C
        .equiv CTMREQ,  0x000D
        .equiv LPEN,    0x000E
        .equiv ASEN,    0x000F

        .equiv CM0,     0x0000
        .equiv CM1,     0x0001
        .equiv WM0,     0x0002
        .equiv WM1,     0x0003
        .equiv ASINT0,  0x0008
        .equiv ASINT1,  0x0009


;----- AD1CHITL Bits -----------------------------------------------------
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


;----- AD1CTMENH Bits -----------------------------------------------------
        .equiv CTMEN16, 0x0000
        .equiv CTMEN17, 0x0001
        .equiv CTMEN18, 0x0002
        .equiv CTMEN19, 0x0003
        .equiv CTMEN20, 0x0004
        .equiv CTMEN21, 0x0005
        .equiv CTMEN22, 0x0006
        .equiv CTMEN23, 0x0007
        .equiv CTMEN24, 0x0008
        .equiv CTMEN25, 0x0009
        .equiv CTMEN26, 0x000A
        .equiv CTMEN27, 0x000B
        .equiv CTMEN28, 0x000C
        .equiv CTMEN29, 0x000D
        .equiv CTMEN30, 0x000E
        .equiv CTMEN31, 0x000F


;----- AD1CTMENL Bits -----------------------------------------------------
        .equiv CTMEN0,  0x0000
        .equiv CTMEN1,  0x0001
        .equiv CTMEN2,  0x0002
        .equiv CTMEN3,  0x0003
        .equiv CTMEN4,  0x0004
        .equiv CTMEN5,  0x0005
        .equiv CTMEN6,  0x0006
        .equiv CTMEN7,  0x0007
        .equiv CTMEN8,  0x0008
        .equiv CTMEN9,  0x0009
        .equiv CTMEN10, 0x000A
        .equiv CTMEN11, 0x000B
        .equiv CTMEN12, 0x000C
        .equiv CTMEN13, 0x000D
        .equiv CTMEN14, 0x000E
        .equiv CTMEN15, 0x000F


;----- DMACON Bits -----------------------------------------------------
        .equiv PRSSEL,  0x0000
        .equiv DMAEN_DMACON, 0x000F


;----- DMACH0 Bits -----------------------------------------------------
        .equiv CHEN,    0x0000
        .equiv BYTE,    0x0001
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
       ;.equiv BYTE,    0x0001
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
       ;.equiv BYTE,    0x0001
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
       ;.equiv BYTE,    0x0001
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
       ;.equiv BYTE,    0x0001
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
       ;.equiv BYTE,    0x0001
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


;----- ANCFG Bits -----------------------------------------------------
        .equiv VBGEN,   0x0000
        .equiv VBG2EN,  0x0001
        .equiv VBG6EN,  0x0002


;----- ANSA Bits -----------------------------------------------------
        .equiv ANSA9,   0x0009
        .equiv ANSA10,  0x000A


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


;----- ANSD Bits -----------------------------------------------------
        .equiv ANSD6,   0x0006
        .equiv ANSD7,   0x0007
        .equiv ANSD10,  0x000A
        .equiv ANSD11,  0x000B


;----- ANSE Bits -----------------------------------------------------
        .equiv ANSE4,   0x0004
        .equiv ANSE5,   0x0005
        .equiv ANSE6,   0x0006
        .equiv ANSE7,   0x0007
        .equiv ANSE9,   0x0009


;----- ANSG Bits -----------------------------------------------------
        .equiv ANSG6,   0x0006
        .equiv ANSG7,   0x0007
        .equiv ANSG8,   0x0008
        .equiv ANSG9,   0x0009


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
        .equiv SE50,    0x0002


;----- LCDDATA0 Bits -----------------------------------------------------
        .equiv S00C0,   0x0000
        .equiv S01C0,   0x0001
        .equiv S02C0,   0x0002
        .equiv S03C0,   0x0003
        .equiv S04C0,   0x0004
        .equiv S05C0,   0x0005
        .equiv S06C0,   0x0006
        .equiv S07C0,   0x0007
        .equiv S08C0,   0x0008
        .equiv S09C0,   0x0009
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
        .equiv S50C0,   0x0002


;----- LCDDATA4 Bits -----------------------------------------------------
        .equiv S00C1,   0x0000
        .equiv S01C1,   0x0001
        .equiv S02C1,   0x0002
        .equiv S03C1,   0x0003
        .equiv S04C1,   0x0004
        .equiv S05C1,   0x0005
        .equiv S06C1,   0x0006
        .equiv S07C1,   0x0007
        .equiv S08C1,   0x0008
        .equiv S09C1,   0x0009
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
        .equiv S50C1,   0x0002


;----- LCDDATA8 Bits -----------------------------------------------------
        .equiv S00C2,   0x0000
        .equiv S01C2,   0x0001
        .equiv S02C2,   0x0002
        .equiv S03C2,   0x0003
        .equiv S04C2,   0x0004
        .equiv S05C2,   0x0005
        .equiv S06C2,   0x0006
        .equiv S07C2,   0x0007
        .equiv S08C2,   0x0008
        .equiv S09C2,   0x0009
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
        .equiv S50C2,   0x0002


;----- LCDDATA12 Bits -----------------------------------------------------
        .equiv S00C3,   0x0000
        .equiv S01C3,   0x0001
        .equiv S02C3,   0x0002
        .equiv S03C3,   0x0003
        .equiv S04C3,   0x0004
        .equiv S05C3,   0x0005
        .equiv S06C3,   0x0006
        .equiv S07C3,   0x0007
        .equiv S08C3,   0x0008
        .equiv S09C3,   0x0009
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
        .equiv S50C3,   0x0002


;----- LCDDATA16 Bits -----------------------------------------------------
        .equiv S00C4,   0x0000
        .equiv S01C4,   0x0001
        .equiv S02C4,   0x0002
        .equiv S03C4,   0x0003
        .equiv S04C4,   0x0004
        .equiv S05C4,   0x0005
        .equiv S06C4,   0x0006
        .equiv S07C4,   0x0007
        .equiv S08C4,   0x0008
        .equiv S09C4,   0x0009
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
        .equiv S50C4,   0x0002


;----- LCDDATA20 Bits -----------------------------------------------------
        .equiv S00C5,   0x0000
        .equiv S01C5,   0x0001
        .equiv S02C5,   0x0002
        .equiv S03C5,   0x0003
        .equiv S04C5,   0x0004
        .equiv S05C5,   0x0005
        .equiv S06C5,   0x0006
        .equiv S07C5,   0x0007
        .equiv S08C5,   0x0008
        .equiv S09C5,   0x0009
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
        .equiv S50C5,   0x0002


;----- LCDDATA24 Bits -----------------------------------------------------
        .equiv S00C6,   0x0000
        .equiv S01C6,   0x0001
        .equiv S02C6,   0x0002
        .equiv S03C6,   0x0003
        .equiv S04C6,   0x0004
        .equiv S05C6,   0x0005
        .equiv S06C6,   0x0006
        .equiv S07C6,   0x0007
        .equiv S08C6,   0x0008
        .equiv S09C6,   0x0009
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
        .equiv S50C6,   0x0002


;----- LCDDATA28 Bits -----------------------------------------------------
        .equiv S00C7,   0x0000
        .equiv S01C7,   0x0001
        .equiv S02C7,   0x0002
        .equiv S03C7,   0x0003
        .equiv S04C7,   0x0004
        .equiv S05C7,   0x0005
        .equiv S06C7,   0x0006
        .equiv S07C7,   0x0007
        .equiv S08C7,   0x0008
        .equiv S09C7,   0x0009
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
        .equiv S50C7,   0x0002


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
        .equiv INT5R3,  0x0003
        .equiv INT4R4,  0x0004
        .equiv INT4R5,  0x0005
        .equiv OC3R0,   0x0008
        .equiv OC3R1,   0x0009
        .equiv OC3R2,   0x000A
        .equiv OC3R3,   0x000B
        .equiv OC3R4,   0x000C
        .equiv OC3R5,   0x000D


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
        .equiv T1CKR0,  0x0008
        .equiv T1CKR1,  0x0009
        .equiv T1CKR2,  0x000A
        .equiv T1CKR3,  0x000B
        .equiv T1CKR4,  0x000C
        .equiv T1CKR5,  0x000D


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


;----- RPINR30 Bits -----------------------------------------------------
        .equiv MDMIR0,  0x0000
        .equiv MDMIR1,  0x0001
        .equiv MDMIR2,  0x0002
        .equiv MDMIR3,  0x0003
        .equiv MDMIR4,  0x0004
        .equiv MDMIR5,  0x0005


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


;----- DSCON Bits -----------------------------------------------------
        .equiv RELEASE, 0x0000
        .equiv DSBOR,   0x0001
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

        .equiv PROGOP0, 0x0000
        .equiv PROGOP1, 0x0001
        .equiv PROGOP2, 0x0002
        .equiv PROGOP3, 0x0003



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
        .equiv IC1MD,   0x0008
        .equiv IC2MD,   0x0009
        .equiv IC3MD,   0x000A
        .equiv IC4MD,   0x000B
        .equiv IC5MD,   0x000C
        .equiv IC6MD,   0x000D
        .equiv IC7MD,   0x000E


;----- PMD3 Bits -----------------------------------------------------
        .equiv I2C2MD,  0x0001
        .equiv U3MD,    0x0003
        .equiv CRCMD,   0x0007
        .equiv PMPMD,   0x0008
        .equiv RTCCMD,  0x0009
        .equiv CMPMD,   0x000A
        .equiv TXMMD,   0x000B

        .equiv CRCPMD,  0x0007
        .equiv DSMMD,   0x000B


;----- PMD4 Bits -----------------------------------------------------
        .equiv LVDMD,   0x0001
        .equiv CTMUMD,  0x0002
        .equiv REFOMD,  0x0003
        .equiv U4MD,    0x0005
        .equiv UPWMMD,  0x0006


;----- PMD6 Bits -----------------------------------------------------
        .equiv SPI3MD,  0x0000
        .equiv LCDMD,   0x0006


;----- PMD7 Bits -----------------------------------------------------
        .equiv DMA0MD,  0x0004
        .equiv DMA1MD,  0x0005




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


;----- CONFIG4 (0xabf8) --------------------------------------------------
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


;----- CONFIG3 (0xabfa) --------------------------------------------------
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
;     WPFP_WPFP63          Page 52 (0xFC00)
;
;   VBAT BOR enable bit:
;     VBTBOR_OFF           VBAT BOR disabled
;     VBTBOR_ON            VBAT BOR enabled
;
;   SOSC Selection bits:
;     SOSCSEL_OFF          Digital (SCLKI) mode
;     SOSCSEL_ON           SOSC circuit selected
;
;   Watch Dog Timer Window Width:
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
        .equiv WPFP_WPFP0,      0xFFC0 ; Page 0 (0x00)
        .equiv WPFP_WPFP1,      0xFFC1 ; Page 1 (0x400)
        .equiv WPFP_WPFP2,      0xFFC2 ; Page 2 (0x800)
        .equiv WPFP_WPFP3,      0xFFC3 ; Page 3 (0xC00)
        .equiv WPFP_WPFP4,      0xFFC4 ; Page 4 (0x1000)
        .equiv WPFP_WPFP5,      0xFFC5 ; Page 5 (0x1400)
        .equiv WPFP_WPFP6,      0xFFC6 ; Page 6 (0x1800)
        .equiv WPFP_WPFP7,      0xFFC7 ; Page 7 (0x1C00)
        .equiv WPFP_WPFP8,      0xFFC8 ; Page 8 (0x2000)
        .equiv WPFP_WPFP9,      0xFFC9 ; Page 9 (0x2400)
        .equiv WPFP_WPFP10,     0xFFCA ; Page 10 (0x2800)
        .equiv WPFP_WPFP11,     0xFFCB ; Page 11 (0x2C00)
        .equiv WPFP_WPFP12,     0xFFCC ; Page 12 (0x3000)
        .equiv WPFP_WPFP13,     0xFFCD ; Page 13 (0x3400)
        .equiv WPFP_WPFP14,     0xFFCE ; Page 14 (0x3800)
        .equiv WPFP_WPFP15,     0xFFCF ; Page 15 (0x3C00)
        .equiv WPFP_WPFP16,     0xFFD0 ; Page 16 (0x4000)
        .equiv WPFP_WPFP17,     0xFFD1 ; Page 17 (0x4400)
        .equiv WPFP_WPFP18,     0xFFD2 ; Page 18 (0x4800)
        .equiv WPFP_WPFP19,     0xFFD3 ; Page 19 (0x4C00)
        .equiv WPFP_WPFP20,     0xFFD4 ; Page 20 (0x5000)
        .equiv WPFP_WPFP21,     0xFFD5 ; Page 21 (0x5400)
        .equiv WPFP_WPFP22,     0xFFD6 ; Page 22 (0x5800)
        .equiv WPFP_WPFP23,     0xFFD7 ; Page 23 (0x5C00)
        .equiv WPFP_WPFP24,     0xFFD8 ; Page 24 (0x6000)
        .equiv WPFP_WPFP25,     0xFFD9 ; Page 25 (0x6400)
        .equiv WPFP_WPFP26,     0xFFDA ; Page 26 (0x6800)
        .equiv WPFP_WPFP27,     0xFFDB ; Page 27 (0x6C00)
        .equiv WPFP_WPFP28,     0xFFDC ; Page 28 (0x7000)
        .equiv WPFP_WPFP29,     0xFFDD ; Page 29 (0x7400)
        .equiv WPFP_WPFP30,     0xFFDE ; Page 30 (0x7800)
        .equiv WPFP_WPFP31,     0xFFDF ; Page 31 (0x7C00)
        .equiv WPFP_WPFP32,     0xFFE0 ; Page 32 (0x8000)
        .equiv WPFP_WPFP33,     0xFFE1 ; Page 33 (0x8400)
        .equiv WPFP_WPFP34,     0xFFE2 ; Page 34 (0x8800)
        .equiv WPFP_WPFP35,     0xFFE3 ; Page 35 (0x8C00)
        .equiv WPFP_WPFP36,     0xFFE4 ; Page 36 (0x9000)
        .equiv WPFP_WPFP37,     0xFFE5 ; Page 37 (0x9400)
        .equiv WPFP_WPFP38,     0xFFE6 ; Page 38 (0x9800)
        .equiv WPFP_WPFP39,     0xFFE7 ; Page 39 (0x9C00)
        .equiv WPFP_WPFP40,     0xFFE8 ; Page 40 (0xA000)
        .equiv WPFP_WPFP41,     0xFFE9 ; Page 41 (0xA400)
        .equiv WPFP_WPFP42,     0xFFEA ; Page 42 (0xA800)
        .equiv WPFP_WPFP43,     0xFFEB ; Page 43 (0xAC00)
        .equiv WPFP_WPFP44,     0xFFEC ; Page 44 (0xB000)
        .equiv WPFP_WPFP45,     0xFFED ; Page 45 (0xB400)
        .equiv WPFP_WPFP46,     0xFFEE ; Page 46 (0xB800)
        .equiv WPFP_WPFP47,     0xFFEF ; Page 47 (0xBC00)
        .equiv WPFP_WPFP48,     0xFFF0 ; Page 48 (0xC000)
        .equiv WPFP_WPFP49,     0xFFF1 ; Page 49 (0xC400)
        .equiv WPFP_WPFP50,     0xFFF2 ; Page 50 (0xC800)
        .equiv WPFP_WPFP51,     0xFFF3 ; Page 51 (0xCC00)
        .equiv WPFP_WPFP52,     0xFFF4 ; Page 52 (0xD000)
        .equiv WPFP_WPFP53,     0xFFF5 ; Page 53 (0xD400)
        .equiv WPFP_WPFP54,     0xFFF6 ; Page 54 (0xD800)
        .equiv WPFP_WPFP55,     0xFFF7 ; Page 55 (0xDC00)
        .equiv WPFP_WPFP56,     0xFFF8 ; Page 56 (0xE000)
        .equiv WPFP_WPFP57,     0xFFF9 ; Page 57 (0xE400)
        .equiv WPFP_WPFP58,     0xFFFA ; Page 58 (0xE800)
        .equiv WPFP_WPFP59,     0xFFFB ; Page 59 (0xEC00)
        .equiv WPFP_WPFP60,     0xFFFC ; Page 60 (0xF000)
        .equiv WPFP_WPFP61,     0xFFFD ; Page 61 (0xF400)
        .equiv WPFP_WPFP62,     0xFFFE ; Page 62 (0xF800)
        .equiv WPFP_WPFP63,     0xFFFF ; Page 52 (0xFC00)

        .equiv VBTBOR_OFF,      0xFF7F ; VBAT BOR disabled
        .equiv VBTBOR_ON,       0xFFFF ; VBAT BOR enabled

        .equiv SOSCSEL_OFF,     0xFEFF ; Digital (SCLKI) mode
        .equiv SOSCSEL_ON,      0xFFFF ; SOSC circuit selected

        .equiv WDTWIN_PS75_0,   0xF3FF ; Watch Dog Timer Window Width is 75 percent
        .equiv WDTWIN_PS50_0,   0xF7FF ; Watch Dog Timer Window Width is 50 percent
        .equiv WDTWIN_PS37_5,   0xFBFF ; Watch Dog Timer Window Width is 37.5 percent 
        .equiv WDTWIN_PS25_0,   0xFFFF ; Watch Dog Timer Window Width is 25 percent

        .equiv BOREN_OFF,       0xEFFF ; Brown-out Reset Disabled
        .equiv BOREN_ON,        0xFFFF ; Brown-out Reset Enable

        .equiv WPDIS_WPEN,      0xDFFF ; Enabled
        .equiv WPDIS_WPDIS,     0xFFFF ; Disabled

        .equiv WPCFG_WPCFGEN,   0xBFFF ; Enabled
        .equiv WPCFG_WPCFGDIS,  0xFFFF ; Disabled

        .equiv WPEND_WPSTARTMEM, 0x7FFF ; Write Protect from page 0 to WPFP
        .equiv WPEND_WPENDMEM,  0xFFFF ; Write Protect from WPFP to the last page of memory


;----- CONFIG2 (0xabfc) --------------------------------------------------
;
;  The following settings are available for CONFIG2:
;
;   Primary Oscillator Select:
;     POSCMD_EC            External-Clock Mode Enabled
;     POSCMD_XT            XT Oscillator Enabled
;     POSCMD_HS            HS Oscillator Enabled
;     POSCMD_NONE          Primary Oscillator Disabled
;
;   BOR Override bit:
;     BOREN1_DIS           BOR Disabled [When BOREN=0]
;     BOREN1_EN            BOR Enabled [When BOREN=1]
;
;   IOLOCK One-Way Set Enable bit:
;     IOL1WAY_OFF          The IOLOCK bit can be set and cleared using the unlock sequence
;     IOL1WAY_ON           Once set, the IOLOCK bit cannot be cleared
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
;   Alternate VREF/CVREF Pins Selection bit:
;     ALTVREF_ALT_AV_ALT_CVVoltage reference input, ADC =RB0/RB1   Comparator =RB0/RB1
;     ALTVREF_ALT_AV_DLT_CVVoltage reference input, ADC =RB0/RB1   Comparator =RA9,RA10
;     ALTVREF_DLT_AV_ALT_CVVoltage reference input, ADC =RA9/RA10 Comparator =RB0,RB1
;     ALTVREF_DLT_AV_DLT_CVVoltage reference input, ADC =RA9/RA10 Comparator =RA9,RA10
;
;   Internal External Switchover:
;     IESO_OFF             Disabled
;     IESO_ON              Enabled
;
        .equiv POSCMD_EC,       0xFFFC ; External-Clock Mode Enabled
        .equiv POSCMD_XT,       0xFFFD ; XT Oscillator Enabled
        .equiv POSCMD_HS,       0xFFFE ; HS Oscillator Enabled
        .equiv POSCMD_NONE,     0xFFFF ; Primary Oscillator Disabled

        .equiv BOREN1_DIS,      0xFFF7 ; BOR Disabled [When BOREN=0]
        .equiv BOREN1_EN,       0xFFFF ; BOR Enabled [When BOREN=1]

        .equiv IOL1WAY_OFF,     0xFFEF ; The IOLOCK bit can be set and cleared using the unlock sequence
        .equiv IOL1WAY_ON,      0xFFFF ; Once set, the IOLOCK bit cannot be cleared

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

        .equiv ALTVREF_ALT_AV_ALT_CV, 0xE7FF ; Voltage reference input, ADC =RB0/RB1   Comparator =RB0/RB1
        .equiv ALTVREF_ALT_AV_DLT_CV, 0xEFFF ; Voltage reference input, ADC =RB0/RB1   Comparator =RA9,RA10
        .equiv ALTVREF_DLT_AV_ALT_CV, 0xF7FF ; Voltage reference input, ADC =RA9/RA10 Comparator =RB0,RB1
        .equiv ALTVREF_DLT_AV_DLT_CV, 0xFFFF ; Voltage reference input, ADC =RA9/RA10 Comparator =RA9,RA10

        .equiv IESO_OFF,        0x7FFF ; Disabled
        .equiv IESO_ON,         0xFFFF ; Enabled


;----- CONFIG1 (0xabfe) --------------------------------------------------
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
;   Watchdog Timer Enable:
;     FWDTEN_WDT_DIS       WDT disabled in hardware; SWDTEN bit disabled
;     FWDTEN_WDT_ACT       WDT enabled only while device active and disabled in Sleep
;     FWDTEN_WDT_SW        WDT controlled with the SWDTEN bit
;     FWDTEN_WDT_HW        WDT enabled in hardware
;
;   Windowed WDT Disable:
;     WINDIS_ON            Windowed Watchdog Timer
;     WINDIS_OFF           Standard Watchdog Timer
;
;   Emulator Pin Placement Select bits:
;     ICS_PGx3             Emulator functions are shared with PGEC3/PGED3
;     ICS_PGx2             Emulator functions are shared with PGEC2/PGED2
;     ICS_PGx1             Emulator functions are shared with PGEC1/PGED1
;
;   Low power regulator control:
;     LPCFG_ON             Enabled
;     LPCFG_OFF            Disabled
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

        .equiv FWDTEN_WDT_DIS,  0x7F9F ; WDT disabled in hardware; SWDTEN bit disabled
        .equiv FWDTEN_WDT_ACT,  0x7FBF ; WDT enabled only while device active and disabled in Sleep
        .equiv FWDTEN_WDT_SW,   0x7FDF ; WDT controlled with the SWDTEN bit
        .equiv FWDTEN_WDT_HW,   0x7FFF ; WDT enabled in hardware

        .equiv WINDIS_ON,       0x7F7F ; Windowed Watchdog Timer
        .equiv WINDIS_OFF,      0x7FFF ; Standard Watchdog Timer

        .equiv ICS_PGx3,        0x7DFF ; Emulator functions are shared with PGEC3/PGED3
        .equiv ICS_PGx2,        0x7EFF ; Emulator functions are shared with PGEC2/PGED2
        .equiv ICS_PGx1,        0x7FFF ; Emulator functions are shared with PGEC1/PGED1

        .equiv LPCFG_ON,        0x7BFF ; Enabled
        .equiv LPCFG_OFF,       0x7FFF ; Disabled

        .equiv GWRP_ON,         0x6FFF ; Enabled
        .equiv GWRP_OFF,        0x7FFF ; Disabled

        .equiv GCP_ON,          0x5FFF ; Code protection is enabled
        .equiv GCP_OFF,         0x7FFF ; Code protection is disabled

        .equiv JTAGEN_OFF,      0x3FFF ; Disabled
        .equiv JTAGEN_ON,       0x7FFF ; Enabled


.LIST
