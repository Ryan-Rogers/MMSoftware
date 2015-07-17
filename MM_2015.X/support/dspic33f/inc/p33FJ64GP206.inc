;==========================================================================
;  PIC33FJ64GP206 Standard Assembly Include File
; 
;  (c) Copyright 2014 Microchip Technology, All rights reserved
;  Part support version v1.22.A(19-Aug-2014)
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC33FJ64GP206 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p33FJ64GP206
;       2. Placing a ".equ" directive before the ".include":
;               .equ __33FJ64GP206, 1
;               .include "p33FJ64GP206.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __33FJ64GP206
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

        .extern ACCAL
        .equiv  ACCALL, _ACCAL
        .equiv  ACCALH, _ACCAL+1

        .extern ACCAH
        .equiv  ACCAHL, _ACCAH
        .equiv  ACCAHH, _ACCAH+1

        .extern ACCAU
        .equiv  ACCAUL, _ACCAU
        .equiv  ACCAUH, _ACCAU+1

        .extern ACCBL
        .equiv  ACCBLL, _ACCBL
        .equiv  ACCBLH, _ACCBL+1

        .extern ACCBH
        .equiv  ACCBHL, _ACCBH
        .equiv  ACCBHH, _ACCBH+1

        .extern ACCBU
        .equiv  ACCBUL, _ACCBU
        .equiv  ACCBUH, _ACCBU+1

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

        .extern DCOUNT
        .equiv  DCOUNTL, _DCOUNT
        .equiv  DCOUNTH, _DCOUNT+1

        .extern DOSTARTL
        .equiv  DOSTARTLL, _DOSTARTL
        .equiv  DOSTARTLH, _DOSTARTL+1

        .extern DOSTARTH
        .equiv  DOSTARTHL, _DOSTARTH
        .equiv  DOSTARTHH, _DOSTARTH+1

        .extern DOENDL
        .equiv  DOENDLL, _DOENDL
        .equiv  DOENDLH, _DOENDL+1

        .extern DOENDH
        .equiv  DOENDHL, _DOENDH
        .equiv  DOENDHH, _DOENDH+1

        .extern SR
        .equiv  SRL, _SR
        .equiv  SRH, _SR+1

        .extern CORCON
        .equiv  CORCONL, _CORCON
        .equiv  CORCONH, _CORCON+1

        .extern MODCON
        .equiv  MODCONL, _MODCON
        .equiv  MODCONH, _MODCON+1

        .extern XMODSRT
        .equiv  XMODSRTL, _XMODSRT
        .equiv  XMODSRTH, _XMODSRT+1

        .extern XMODEND
        .equiv  XMODENDL, _XMODEND
        .equiv  XMODENDH, _XMODEND+1

        .extern YMODSRT
        .equiv  YMODSRTL, _YMODSRT
        .equiv  YMODSRTH, _YMODSRT+1

        .extern YMODEND
        .equiv  YMODENDL, _YMODEND
        .equiv  YMODENDH, _YMODEND+1

        .extern XBREV
        .equiv  XBREVL, _XBREV
        .equiv  XBREVH, _XBREV+1

        .extern DISICNT
        .equiv  DISICNTL, _DISICNT
        .equiv  DISICNTH, _DISICNT+1

        .extern CNEN1
        .equiv  CNEN1L, _CNEN1
        .equiv  CNEN1H, _CNEN1+1

        .extern CNEN2
        .equiv  CNEN2L, _CNEN2
        .equiv  CNEN2H, _CNEN2+1

        .extern CNPU1
        .equiv  CNPU1L, _CNPU1
        .equiv  CNPU1H, _CNPU1+1

        .extern CNPU2
        .equiv  CNPU2L, _CNPU2
        .equiv  CNPU2H, _CNPU2+1

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

        .extern IPC14
        .equiv  IPC14L, _IPC14
        .equiv  IPC14H, _IPC14+1

        .extern IPC15
        .equiv  IPC15L, _IPC15
        .equiv  IPC15H, _IPC15+1

        .extern IPC16
        .equiv  IPC16L, _IPC16
        .equiv  IPC16H, _IPC16+1

        .extern IPC17
        .equiv  IPC17L, _IPC17
        .equiv  IPC17H, _IPC17+1

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

        .extern TMR6
        .equiv  TMR6L, _TMR6
        .equiv  TMR6H, _TMR6+1

        .extern TMR7HLD
        .equiv  TMR7HLDL, _TMR7HLD
        .equiv  TMR7HLDH, _TMR7HLD+1

        .extern TMR7
        .equiv  TMR7L, _TMR7
        .equiv  TMR7H, _TMR7+1

        .extern PR6
        .equiv  PR6L, _PR6
        .equiv  PR6H, _PR6+1

        .extern PR7
        .equiv  PR7L, _PR7
        .equiv  PR7H, _PR7+1

        .extern T6CON
        .equiv  T6CONL, _T6CON
        .equiv  T6CONH, _T6CON+1

        .extern T7CON
        .equiv  T7CONL, _T7CON
        .equiv  T7CONH, _T7CON+1

        .extern TMR8
        .equiv  TMR8L, _TMR8
        .equiv  TMR8H, _TMR8+1

        .extern TMR9HLD
        .equiv  TMR9HLDL, _TMR9HLD
        .equiv  TMR9HLDH, _TMR9HLD+1

        .extern TMR9
        .equiv  TMR9L, _TMR9
        .equiv  TMR9H, _TMR9+1

        .extern PR8
        .equiv  PR8L, _PR8
        .equiv  PR8H, _PR8+1

        .extern PR9
        .equiv  PR9L, _PR9
        .equiv  PR9H, _PR9+1

        .extern T8CON
        .equiv  T8CONL, _T8CON
        .equiv  T8CONH, _T8CON+1

        .extern T9CON
        .equiv  T9CONL, _T9CON
        .equiv  T9CONH, _T9CON+1

        .extern IC1BUF
        .equiv  IC1BUFL, _IC1BUF
        .equiv  IC1BUFH, _IC1BUF+1

        .extern IC1CON
        .equiv  IC1CONL, _IC1CON
        .equiv  IC1CONH, _IC1CON+1

        .extern IC2BUF
        .equiv  IC2BUFL, _IC2BUF
        .equiv  IC2BUFH, _IC2BUF+1

        .extern IC2CON
        .equiv  IC2CONL, _IC2CON
        .equiv  IC2CONH, _IC2CON+1

        .extern IC3BUF
        .equiv  IC3BUFL, _IC3BUF
        .equiv  IC3BUFH, _IC3BUF+1

        .extern IC3CON
        .equiv  IC3CONL, _IC3CON
        .equiv  IC3CONH, _IC3CON+1

        .extern IC4BUF
        .equiv  IC4BUFL, _IC4BUF
        .equiv  IC4BUFH, _IC4BUF+1

        .extern IC4CON
        .equiv  IC4CONL, _IC4CON
        .equiv  IC4CONH, _IC4CON+1

        .extern IC5BUF
        .equiv  IC5BUFL, _IC5BUF
        .equiv  IC5BUFH, _IC5BUF+1

        .extern IC5CON
        .equiv  IC5CONL, _IC5CON
        .equiv  IC5CONH, _IC5CON+1

        .extern IC6BUF
        .equiv  IC6BUFL, _IC6BUF
        .equiv  IC6BUFH, _IC6BUF+1

        .extern IC6CON
        .equiv  IC6CONL, _IC6CON
        .equiv  IC6CONH, _IC6CON+1

        .extern IC7BUF
        .equiv  IC7BUFL, _IC7BUF
        .equiv  IC7BUFH, _IC7BUF+1

        .extern IC7CON
        .equiv  IC7CONL, _IC7CON
        .equiv  IC7CONH, _IC7CON+1

        .extern IC8BUF
        .equiv  IC8BUFL, _IC8BUF
        .equiv  IC8BUFH, _IC8BUF+1

        .extern IC8CON
        .equiv  IC8CONL, _IC8CON
        .equiv  IC8CONH, _IC8CON+1

        .extern OC1RS
        .equiv  OC1RSL, _OC1RS
        .equiv  OC1RSH, _OC1RS+1

        .extern OC1R
        .equiv  OC1RL, _OC1R
        .equiv  OC1RH, _OC1R+1

        .extern OC1CON
        .equiv  OC1CONL, _OC1CON
        .equiv  OC1CONH, _OC1CON+1

        .extern OC2RS
        .equiv  OC2RSL, _OC2RS
        .equiv  OC2RSH, _OC2RS+1

        .extern OC2R
        .equiv  OC2RL, _OC2R
        .equiv  OC2RH, _OC2R+1

        .extern OC2CON
        .equiv  OC2CONL, _OC2CON
        .equiv  OC2CONH, _OC2CON+1

        .extern OC3RS
        .equiv  OC3RSL, _OC3RS
        .equiv  OC3RSH, _OC3RS+1

        .extern OC3R
        .equiv  OC3RL, _OC3R
        .equiv  OC3RH, _OC3R+1

        .extern OC3CON
        .equiv  OC3CONL, _OC3CON
        .equiv  OC3CONH, _OC3CON+1

        .extern OC4RS
        .equiv  OC4RSL, _OC4RS
        .equiv  OC4RSH, _OC4RS+1

        .extern OC4R
        .equiv  OC4RL, _OC4R
        .equiv  OC4RH, _OC4R+1

        .extern OC4CON
        .equiv  OC4CONL, _OC4CON
        .equiv  OC4CONH, _OC4CON+1

        .extern OC5RS
        .equiv  OC5RSL, _OC5RS
        .equiv  OC5RSH, _OC5RS+1

        .extern OC5R
        .equiv  OC5RL, _OC5R
        .equiv  OC5RH, _OC5R+1

        .extern OC5CON
        .equiv  OC5CONL, _OC5CON
        .equiv  OC5CONH, _OC5CON+1

        .extern OC6RS
        .equiv  OC6RSL, _OC6RS
        .equiv  OC6RSH, _OC6RS+1

        .extern OC6R
        .equiv  OC6RL, _OC6R
        .equiv  OC6RH, _OC6R+1

        .extern OC6CON
        .equiv  OC6CONL, _OC6CON
        .equiv  OC6CONH, _OC6CON+1

        .extern OC7RS
        .equiv  OC7RSL, _OC7RS
        .equiv  OC7RSH, _OC7RS+1

        .extern OC7R
        .equiv  OC7RL, _OC7R
        .equiv  OC7RH, _OC7R+1

        .extern OC7CON
        .equiv  OC7CONL, _OC7CON
        .equiv  OC7CONH, _OC7CON+1

        .extern OC8RS
        .equiv  OC8RSL, _OC8RS
        .equiv  OC8RSH, _OC8RS+1

        .extern OC8R
        .equiv  OC8RL, _OC8R
        .equiv  OC8RH, _OC8R+1

        .extern OC8CON
        .equiv  OC8CONL, _OC8CON
        .equiv  OC8CONH, _OC8CON+1

        .extern I2C1RCV
        .equiv  I2C1RCVL, _I2C1RCV
        .equiv  I2C1RCVH, _I2C1RCV+1

        .extern I2CRCV
        .equiv  I2CRCVL, _I2CRCV
        .equiv  I2CRCVH, _I2CRCV+1

        .extern I2C1TRN
        .equiv  I2C1TRNL, _I2C1TRN
        .equiv  I2C1TRNH, _I2C1TRN+1

        .extern I2CTRN
        .equiv  I2CTRNL, _I2CTRN
        .equiv  I2CTRNH, _I2CTRN+1

        .extern I2C1BRG
        .equiv  I2C1BRGL, _I2C1BRG
        .equiv  I2C1BRGH, _I2C1BRG+1

        .extern I2C1CON
        .equiv  I2C1CONL, _I2C1CON
        .equiv  I2C1CONH, _I2C1CON+1

        .extern I2CCON
        .equiv  I2CCONL, _I2CCON
        .equiv  I2CCONH, _I2CCON+1

        .extern I2C1STAT
        .equiv  I2C1STATL, _I2C1STAT
        .equiv  I2C1STATH, _I2C1STAT+1

        .extern I2CSTAT
        .equiv  I2CSTATL, _I2CSTAT
        .equiv  I2CSTATH, _I2CSTAT+1

        .extern I2C1ADD
        .equiv  I2C1ADDL, _I2C1ADD
        .equiv  I2C1ADDH, _I2C1ADD+1

        .extern I2CADD
        .equiv  I2CADDL, _I2CADD
        .equiv  I2CADDH, _I2CADD+1

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

        .extern DCICON1
        .equiv  DCICON1L, _DCICON1
        .equiv  DCICON1H, _DCICON1+1

        .extern DCICON2
        .equiv  DCICON2L, _DCICON2
        .equiv  DCICON2H, _DCICON2+1

        .extern DCICON3
        .equiv  DCICON3L, _DCICON3
        .equiv  DCICON3H, _DCICON3+1

        .extern DCISTAT
        .equiv  DCISTATL, _DCISTAT
        .equiv  DCISTATH, _DCISTAT+1

        .extern TSCON
        .equiv  TSCONL, _TSCON
        .equiv  TSCONH, _TSCON+1

        .extern RSCON
        .equiv  RSCONL, _RSCON
        .equiv  RSCONH, _RSCON+1

        .extern RXBUF0
        .equiv  RXBUF0L, _RXBUF0
        .equiv  RXBUF0H, _RXBUF0+1

        .extern RXBUF1
        .equiv  RXBUF1L, _RXBUF1
        .equiv  RXBUF1H, _RXBUF1+1

        .extern RXBUF2
        .equiv  RXBUF2L, _RXBUF2
        .equiv  RXBUF2H, _RXBUF2+1

        .extern RXBUF3
        .equiv  RXBUF3L, _RXBUF3
        .equiv  RXBUF3H, _RXBUF3+1

        .extern TXBUF0
        .equiv  TXBUF0L, _TXBUF0
        .equiv  TXBUF0H, _TXBUF0+1

        .extern TXBUF1
        .equiv  TXBUF1L, _TXBUF1
        .equiv  TXBUF1H, _TXBUF1+1

        .extern TXBUF2
        .equiv  TXBUF2L, _TXBUF2
        .equiv  TXBUF2H, _TXBUF2+1

        .extern TXBUF3
        .equiv  TXBUF3L, _TXBUF3
        .equiv  TXBUF3H, _TXBUF3+1

        .extern TRISB
        .equiv  TRISBL, _TRISB
        .equiv  TRISBH, _TRISB+1

        .extern PORTB
        .equiv  PORTBL, _PORTB
        .equiv  PORTBH, _PORTB+1

        .extern LATB
        .equiv  LATBL, _LATB
        .equiv  LATBH, _LATB+1

        .extern TRISC
        .equiv  TRISCL, _TRISC
        .equiv  TRISCH, _TRISC+1

        .extern PORTC
        .equiv  PORTCL, _PORTC
        .equiv  PORTCH, _PORTC+1

        .extern LATC
        .equiv  LATCL, _LATC
        .equiv  LATCH, _LATC+1

        .extern TRISD
        .equiv  TRISDL, _TRISD
        .equiv  TRISDH, _TRISD+1

        .extern PORTD
        .equiv  PORTDL, _PORTD
        .equiv  PORTDH, _PORTD+1

        .extern LATD
        .equiv  LATDL, _LATD
        .equiv  LATDH, _LATD+1

        .extern TRISF
        .equiv  TRISFL, _TRISF
        .equiv  TRISFH, _TRISF+1

        .extern PORTF
        .equiv  PORTFL, _PORTF
        .equiv  PORTFH, _PORTF+1

        .extern LATF
        .equiv  LATFL, _LATF
        .equiv  LATFH, _LATF+1

        .extern TRISG
        .equiv  TRISGL, _TRISG
        .equiv  TRISGH, _TRISG+1

        .extern PORTG
        .equiv  PORTGL, _PORTG
        .equiv  PORTGH, _PORTG+1

        .extern LATG
        .equiv  LATGL, _LATG
        .equiv  LATGH, _LATG+1

        .extern ADC1BUF0
        .equiv  ADC1BUF0L, _ADC1BUF0
        .equiv  ADC1BUF0H, _ADC1BUF0+1

        .extern ADCBUF0
        .equiv  ADCBUF0L, _ADCBUF0
        .equiv  ADCBUF0H, _ADCBUF0+1

        .extern AD1CON1
        .equiv  AD1CON1L, _AD1CON1
        .equiv  AD1CON1H, _AD1CON1+1

        .extern AD1CON2
        .equiv  AD1CON2L, _AD1CON2
        .equiv  AD1CON2H, _AD1CON2+1

        .extern AD1CON3
        .equiv  AD1CON3L, _AD1CON3
        .equiv  AD1CON3H, _AD1CON3+1

        .extern AD1CHS123
        .equiv  AD1CHS123L, _AD1CHS123
        .equiv  AD1CHS123H, _AD1CHS123+1

        .extern AD1CHS0
        .equiv  AD1CHS0L, _AD1CHS0
        .equiv  AD1CHS0H, _AD1CHS0+1

        .extern AD1PCFGH
        .equiv  AD1PCFGHL, _AD1PCFGH
        .equiv  AD1PCFGHH, _AD1PCFGH+1

        .extern AD1PCFGL
        .equiv  AD1PCFGLL, _AD1PCFGL
        .equiv  AD1PCFGLH, _AD1PCFGL+1

        .extern ADPCFG
        .equiv  ADPCFGL, _ADPCFG
        .equiv  ADPCFGH, _ADPCFG+1

        .extern AD1CSSH
        .equiv  AD1CSSHL, _AD1CSSH
        .equiv  AD1CSSHH, _AD1CSSH+1

        .extern AD1CSSL
        .equiv  AD1CSSLL, _AD1CSSL
        .equiv  AD1CSSLH, _AD1CSSL+1

        .extern AD1CON4
        .equiv  AD1CON4L, _AD1CON4
        .equiv  AD1CON4H, _AD1CON4+1

        .extern DMA0CON
        .equiv  DMA0CONL, _DMA0CON
        .equiv  DMA0CONH, _DMA0CON+1

        .extern DMA0REQ
        .equiv  DMA0REQL, _DMA0REQ
        .equiv  DMA0REQH, _DMA0REQ+1

        .extern DMA0STA
        .equiv  DMA0STAL, _DMA0STA
        .equiv  DMA0STAH, _DMA0STA+1

        .extern DMA0STB
        .equiv  DMA0STBL, _DMA0STB
        .equiv  DMA0STBH, _DMA0STB+1

        .extern DMA0PAD
        .equiv  DMA0PADL, _DMA0PAD
        .equiv  DMA0PADH, _DMA0PAD+1

        .extern DMA0CNT
        .equiv  DMA0CNTL, _DMA0CNT
        .equiv  DMA0CNTH, _DMA0CNT+1

        .extern DMA1CON
        .equiv  DMA1CONL, _DMA1CON
        .equiv  DMA1CONH, _DMA1CON+1

        .extern DMA1REQ
        .equiv  DMA1REQL, _DMA1REQ
        .equiv  DMA1REQH, _DMA1REQ+1

        .extern DMA1STA
        .equiv  DMA1STAL, _DMA1STA
        .equiv  DMA1STAH, _DMA1STA+1

        .extern DMA1STB
        .equiv  DMA1STBL, _DMA1STB
        .equiv  DMA1STBH, _DMA1STB+1

        .extern DMA1PAD
        .equiv  DMA1PADL, _DMA1PAD
        .equiv  DMA1PADH, _DMA1PAD+1

        .extern DMA1CNT
        .equiv  DMA1CNTL, _DMA1CNT
        .equiv  DMA1CNTH, _DMA1CNT+1

        .extern DMA2CON
        .equiv  DMA2CONL, _DMA2CON
        .equiv  DMA2CONH, _DMA2CON+1

        .extern DMA2REQ
        .equiv  DMA2REQL, _DMA2REQ
        .equiv  DMA2REQH, _DMA2REQ+1

        .extern DMA2STA
        .equiv  DMA2STAL, _DMA2STA
        .equiv  DMA2STAH, _DMA2STA+1

        .extern DMA2STB
        .equiv  DMA2STBL, _DMA2STB
        .equiv  DMA2STBH, _DMA2STB+1

        .extern DMA2PAD
        .equiv  DMA2PADL, _DMA2PAD
        .equiv  DMA2PADH, _DMA2PAD+1

        .extern DMA2CNT
        .equiv  DMA2CNTL, _DMA2CNT
        .equiv  DMA2CNTH, _DMA2CNT+1

        .extern DMA3CON
        .equiv  DMA3CONL, _DMA3CON
        .equiv  DMA3CONH, _DMA3CON+1

        .extern DMA3REQ
        .equiv  DMA3REQL, _DMA3REQ
        .equiv  DMA3REQH, _DMA3REQ+1

        .extern DMA3STA
        .equiv  DMA3STAL, _DMA3STA
        .equiv  DMA3STAH, _DMA3STA+1

        .extern DMA3STB
        .equiv  DMA3STBL, _DMA3STB
        .equiv  DMA3STBH, _DMA3STB+1

        .extern DMA3PAD
        .equiv  DMA3PADL, _DMA3PAD
        .equiv  DMA3PADH, _DMA3PAD+1

        .extern DMA3CNT
        .equiv  DMA3CNTL, _DMA3CNT
        .equiv  DMA3CNTH, _DMA3CNT+1

        .extern DMA4CON
        .equiv  DMA4CONL, _DMA4CON
        .equiv  DMA4CONH, _DMA4CON+1

        .extern DMA4REQ
        .equiv  DMA4REQL, _DMA4REQ
        .equiv  DMA4REQH, _DMA4REQ+1

        .extern DMA4STA
        .equiv  DMA4STAL, _DMA4STA
        .equiv  DMA4STAH, _DMA4STA+1

        .extern DMA4STB
        .equiv  DMA4STBL, _DMA4STB
        .equiv  DMA4STBH, _DMA4STB+1

        .extern DMA4PAD
        .equiv  DMA4PADL, _DMA4PAD
        .equiv  DMA4PADH, _DMA4PAD+1

        .extern DMA4CNT
        .equiv  DMA4CNTL, _DMA4CNT
        .equiv  DMA4CNTH, _DMA4CNT+1

        .extern DMA5CON
        .equiv  DMA5CONL, _DMA5CON
        .equiv  DMA5CONH, _DMA5CON+1

        .extern DMA5REQ
        .equiv  DMA5REQL, _DMA5REQ
        .equiv  DMA5REQH, _DMA5REQ+1

        .extern DMA5STA
        .equiv  DMA5STAL, _DMA5STA
        .equiv  DMA5STAH, _DMA5STA+1

        .extern DMA5STB
        .equiv  DMA5STBL, _DMA5STB
        .equiv  DMA5STBH, _DMA5STB+1

        .extern DMA5PAD
        .equiv  DMA5PADL, _DMA5PAD
        .equiv  DMA5PADH, _DMA5PAD+1

        .extern DMA5CNT
        .equiv  DMA5CNTL, _DMA5CNT
        .equiv  DMA5CNTH, _DMA5CNT+1

        .extern DMA6CON
        .equiv  DMA6CONL, _DMA6CON
        .equiv  DMA6CONH, _DMA6CON+1

        .extern DMA6REQ
        .equiv  DMA6REQL, _DMA6REQ
        .equiv  DMA6REQH, _DMA6REQ+1

        .extern DMA6STA
        .equiv  DMA6STAL, _DMA6STA
        .equiv  DMA6STAH, _DMA6STA+1

        .extern DMA6STB
        .equiv  DMA6STBL, _DMA6STB
        .equiv  DMA6STBH, _DMA6STB+1

        .extern DMA6PAD
        .equiv  DMA6PADL, _DMA6PAD
        .equiv  DMA6PADH, _DMA6PAD+1

        .extern DMA6CNT
        .equiv  DMA6CNTL, _DMA6CNT
        .equiv  DMA6CNTH, _DMA6CNT+1

        .extern DMA7CON
        .equiv  DMA7CONL, _DMA7CON
        .equiv  DMA7CONH, _DMA7CON+1

        .extern DMA7REQ
        .equiv  DMA7REQL, _DMA7REQ
        .equiv  DMA7REQH, _DMA7REQ+1

        .extern DMA7STA
        .equiv  DMA7STAL, _DMA7STA
        .equiv  DMA7STAH, _DMA7STA+1

        .extern DMA7STB
        .equiv  DMA7STBL, _DMA7STB
        .equiv  DMA7STBH, _DMA7STB+1

        .extern DMA7PAD
        .equiv  DMA7PADL, _DMA7PAD
        .equiv  DMA7PADH, _DMA7PAD+1

        .extern DMA7CNT
        .equiv  DMA7CNTL, _DMA7CNT
        .equiv  DMA7CNTH, _DMA7CNT+1

        .extern DMACS0
        .equiv  DMACS0L, _DMACS0
        .equiv  DMACS0H, _DMACS0+1

        .extern DMACS1
        .equiv  DMACS1L, _DMACS1
        .equiv  DMACS1H, _DMACS1+1

        .extern DSADR
        .equiv  DSADRL, _DSADR
        .equiv  DSADRH, _DSADR+1

        .extern ODCD
        .equiv  ODCDL, _ODCD
        .equiv  ODCDH, _ODCD+1

        .extern ODCF
        .equiv  ODCFL, _ODCF
        .equiv  ODCFH, _ODCF+1

        .extern ODCG
        .equiv  ODCGL, _ODCG
        .equiv  ODCGH, _ODCG+1

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

        .extern PLLFBD
        .equiv  PLLFBDL, _PLLFBD
        .equiv  PLLFBDH, _PLLFBD+1

        .extern OSCTUN
        .equiv  OSCTUNL, _OSCTUN
        .equiv  OSCTUNH, _OSCTUN+1

        .extern BSRAM
        .equiv  BSRAML, _BSRAM
        .equiv  BSRAMH, _BSRAM+1

        .extern SSRAM
        .equiv  SSRAML, _SSRAM
        .equiv  SSRAMH, _SSRAM+1

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

;----- SR Bits -----------------------------------------------------
        .equiv C,       0x0000
        .equiv Z,       0x0001
        .equiv OV,      0x0002
        .equiv N,       0x0003
        .equiv RA,      0x0004
        .equiv DC,      0x0008
        .equiv DA,      0x0009
        .equiv SAB,     0x000A
        .equiv OAB,     0x000B
        .equiv SB,      0x000C
        .equiv SA,      0x000D
        .equiv OB,      0x000E
        .equiv OA,      0x000F

        .equiv IPL0,    0x0005
        .equiv IPL1,    0x0006
        .equiv IPL2,    0x0007


;----- CORCON Bits -----------------------------------------------------
        .equiv IF,      0x0000
        .equiv RND,     0x0001
        .equiv PSV,     0x0002
        .equiv IPL3,    0x0003
        .equiv ACCSAT,  0x0004
        .equiv SATDW,   0x0005
        .equiv SATB,    0x0006
        .equiv SATA,    0x0007
        .equiv EDT,     0x000B
        .equiv US,      0x000C

        .equiv DL0,     0x0008
        .equiv DL1,     0x0009
        .equiv DL2,     0x000A


;----- MODCON Bits -----------------------------------------------------
        .equiv YMODEN,  0x000E
        .equiv XMODEN,  0x000F

        .equiv XWM0,    0x0000
        .equiv XWM1,    0x0001
        .equiv XWM2,    0x0002
        .equiv XWM3,    0x0003
        .equiv YWM0,    0x0004
        .equiv YWM1,    0x0005
        .equiv YWM2,    0x0006
        .equiv YWM3,    0x0007
        .equiv BWM0,    0x0008
        .equiv BWM1,    0x0009
        .equiv BWM2,    0x000A
        .equiv BWM3,    0x000B


;----- XBREV Bits -----------------------------------------------------
        .equiv BREN,    0x000F

        .equiv XB0,     0x0000
        .equiv XB1,     0x0001
        .equiv XB2,     0x0002
        .equiv XB3,     0x0003
        .equiv XB4,     0x0004
        .equiv XB5,     0x0005
        .equiv XB6,     0x0006
        .equiv XB7,     0x0007
        .equiv XB8,     0x0008
        .equiv XB9,     0x0009
        .equiv XB10,    0x000A
        .equiv XB11,    0x000B
        .equiv XB12,    0x000C
        .equiv XB13,    0x000D
        .equiv XB14,    0x000E


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


;----- INTCON1 Bits -----------------------------------------------------
        .equiv OSCFAIL, 0x0001
        .equiv STKERR,  0x0002
        .equiv ADDRERR, 0x0003
        .equiv MATHERR, 0x0004
        .equiv DMACERR, 0x0005
        .equiv DIV0ERR, 0x0006
        .equiv SFTACERR, 0x0007
        .equiv COVTE,   0x0008
        .equiv OVBTE,   0x0009
        .equiv OVATE,   0x000A
        .equiv COVBERR, 0x000B
        .equiv COVAERR, 0x000C
        .equiv OVBERR,  0x000D
        .equiv OVAERR,  0x000E
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
        .equiv SPI1EIF, 0x0009
        .equiv SPI1IF,  0x000A
        .equiv U1RXIF,  0x000B
        .equiv U1TXIF,  0x000C
        .equiv AD1IF,   0x000D
        .equiv DMA1IF,  0x000E


;----- IFS1 Bits -----------------------------------------------------
        .equiv SI2C1IF, 0x0000
        .equiv MI2C1IF, 0x0001
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

        .equiv SI2CIF,  0x0000


;----- IFS2 Bits -----------------------------------------------------
        .equiv SPI2EIF, 0x0000
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
        .equiv DMA4IF,  0x000E
        .equiv T6IF,    0x000F


;----- IFS3 Bits -----------------------------------------------------
        .equiv T7IF,    0x0000
        .equiv T8IF,    0x0003
        .equiv T9IF,    0x0004
        .equiv INT3IF,  0x0005
        .equiv INT4IF,  0x0006
        .equiv DCIEIF,  0x000B
        .equiv DCIIF,   0x000C
        .equiv DMA5IF,  0x000D


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1EIF,   0x0001
        .equiv U2EIF,   0x0002
        .equiv DMA6IF,  0x0004
        .equiv DMA7IF,  0x0005


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
        .equiv SPI1EIE, 0x0009
        .equiv SPI1IE,  0x000A
        .equiv U1RXIE,  0x000B
        .equiv U1TXIE,  0x000C
        .equiv AD1IE,   0x000D
        .equiv DMA1IE,  0x000E


;----- IEC1 Bits -----------------------------------------------------
        .equiv SI2C1IE, 0x0000
        .equiv MI2C1IE, 0x0001
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

        .equiv SI2CIE,  0x0000


;----- IEC2 Bits -----------------------------------------------------
        .equiv SPI2EIE, 0x0000
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
        .equiv DMA4IE,  0x000E
        .equiv T6IE,    0x000F


;----- IEC3 Bits -----------------------------------------------------
        .equiv T7IE,    0x0000
        .equiv T8IE,    0x0003
        .equiv T9IE,    0x0004
        .equiv INT3IE,  0x0005
        .equiv INT4IE,  0x0006
        .equiv DCIEIE,  0x000B
        .equiv DCIIE,   0x000C
        .equiv DMA5IE,  0x000D


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1EIE,   0x0001
        .equiv U2EIE,   0x0002
        .equiv DMA6IE,  0x0004
        .equiv DMA7IE,  0x0005


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
        .equiv SPI1EIP0, 0x0004
        .equiv SPI1EIP1, 0x0005
        .equiv SPI1EIP2, 0x0006
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
        .equiv CNIP0,   0x000C
        .equiv CNIP1,   0x000D
        .equiv CNIP2,   0x000E


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
        .equiv SPI2EIP0, 0x0000
        .equiv SPI2EIP1, 0x0001
        .equiv SPI2EIP2, 0x0002
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
        .equiv DMA4IP0, 0x0008
        .equiv DMA4IP1, 0x0009
        .equiv DMA4IP2, 0x000A
        .equiv T6IP0,   0x000C
        .equiv T6IP1,   0x000D
        .equiv T6IP2,   0x000E


;----- IPC12 Bits -----------------------------------------------------
        .equiv T7IP0,   0x0000
        .equiv T7IP1,   0x0001
        .equiv T7IP2,   0x0002
        .equiv T8IP0,   0x000C
        .equiv T8IP1,   0x000D
        .equiv T8IP2,   0x000E


;----- IPC13 Bits -----------------------------------------------------
        .equiv T9IP0,   0x0000
        .equiv T9IP1,   0x0001
        .equiv T9IP2,   0x0002
        .equiv INT3IP0, 0x0004
        .equiv INT3IP1, 0x0005
        .equiv INT3IP2, 0x0006
        .equiv INT4IP0, 0x0008
        .equiv INT4IP1, 0x0009
        .equiv INT4IP2, 0x000A


;----- IPC14 Bits -----------------------------------------------------
        .equiv DCIEIP0, 0x000C
        .equiv DCIEIP1, 0x000D
        .equiv DCIEIP2, 0x000E


;----- IPC15 Bits -----------------------------------------------------
        .equiv DCIIP0,  0x0000
        .equiv DCIIP1,  0x0001
        .equiv DCIIP2,  0x0002
        .equiv DMA5IP0, 0x0004
        .equiv DMA5IP1, 0x0005
        .equiv DMA5IP2, 0x0006


;----- IPC16 Bits -----------------------------------------------------
        .equiv U1EIP0,  0x0004
        .equiv U1EIP1,  0x0005
        .equiv U1EIP2,  0x0006
        .equiv U2EIP0,  0x0008
        .equiv U2EIP1,  0x0009
        .equiv U2EIP2,  0x000A


;----- IPC17 Bits -----------------------------------------------------
        .equiv DMA6IP0, 0x0000
        .equiv DMA6IP1, 0x0001
        .equiv DMA6IP2, 0x0002
        .equiv DMA7IP0, 0x0004
        .equiv DMA7IP1, 0x0005
        .equiv DMA7IP2, 0x0006


;----- INTTREG Bits -----------------------------------------------------
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


;----- T6CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T7CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T8CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T9CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- IC1CON Bits -----------------------------------------------------
        .equiv ICBNE,   0x0003
        .equiv ICOV,    0x0004
        .equiv ICTMR,   0x0007
        .equiv ICSIDL,  0x000D

        .equiv ICM0,    0x0000
        .equiv ICM1,    0x0001
        .equiv ICM2,    0x0002
        .equiv ICI0,    0x0005
        .equiv ICI1,    0x0006


;----- IC2CON Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICTMR,   0x0007
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006


;----- IC3CON Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICTMR,   0x0007
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006


;----- IC4CON Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICTMR,   0x0007
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006


;----- IC5CON Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICTMR,   0x0007
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006


;----- IC6CON Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICTMR,   0x0007
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006


;----- IC7CON Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICTMR,   0x0007
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006


;----- IC8CON Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICTMR,   0x0007
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006


;----- OC1CON Bits -----------------------------------------------------
        .equiv OCTSEL,  0x0003
        .equiv OCFLT,   0x0004
        .equiv OCSIDL,  0x000D

        .equiv OCM0,    0x0000
        .equiv OCM1,    0x0001
        .equiv OCM2,    0x0002


;----- OC2CON Bits -----------------------------------------------------
       ;.equiv OCTSEL,  0x0003
       ;.equiv OCFLT,   0x0004
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002


;----- OC3CON Bits -----------------------------------------------------
       ;.equiv OCTSEL,  0x0003
       ;.equiv OCFLT,   0x0004
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002


;----- OC4CON Bits -----------------------------------------------------
       ;.equiv OCTSEL,  0x0003
       ;.equiv OCFLT,   0x0004
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002


;----- OC5CON Bits -----------------------------------------------------
       ;.equiv OCTSEL,  0x0003
       ;.equiv OCFLT,   0x0004
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002


;----- OC6CON Bits -----------------------------------------------------
       ;.equiv OCTSEL,  0x0003
       ;.equiv OCFLT,   0x0004
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002


;----- OC7CON Bits -----------------------------------------------------
       ;.equiv OCTSEL,  0x0003
       ;.equiv OCFLT,   0x0004
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002


;----- OC8CON Bits -----------------------------------------------------
       ;.equiv OCTSEL,  0x0003
       ;.equiv OCFLT,   0x0004
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002


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


;----- I2CCON Bits -----------------------------------------------------
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


;----- I2C1STAT Bits -----------------------------------------------------
        .equiv TBF,     0x0000
        .equiv RBF,     0x0001
        .equiv R_W,     0x0002
        .equiv S,       0x0003
        .equiv P,       0x0004
        .equiv D_A,     0x0005
        .equiv I2COV,   0x0006
        .equiv IWCOL,   0x0007
        .equiv ADD10,   0x0008
        .equiv GCSTAT,  0x0009
        .equiv BCL,     0x000A
        .equiv TRSTAT,  0x000E
        .equiv ACKSTAT, 0x000F


;----- I2CSTAT Bits -----------------------------------------------------
       ;.equiv TBF,     0x0000
       ;.equiv RBF,     0x0001
       ;.equiv R_W,     0x0002
       ;.equiv S,       0x0003
       ;.equiv P,       0x0004
       ;.equiv D_A,     0x0005
       ;.equiv I2COV,   0x0006
       ;.equiv IWCOL,   0x0007
       ;.equiv ADD10,   0x0008
       ;.equiv GCSTAT,  0x0009
       ;.equiv BCL,     0x000A
       ;.equiv TRSTAT,  0x000E
       ;.equiv ACKSTAT, 0x000F


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
       ;.equiv R_W,     0x0002
       ;.equiv S,       0x0003
       ;.equiv P,       0x0004
       ;.equiv D_A,     0x0005
       ;.equiv I2COV,   0x0006
       ;.equiv IWCOL,   0x0007
       ;.equiv ADD10,   0x0008
       ;.equiv GCSTAT,  0x0009
       ;.equiv BCL,     0x000A
       ;.equiv TRSTAT,  0x000E
       ;.equiv ACKSTAT, 0x000F


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
        .equiv SPIROV,  0x0006
        .equiv SPISIDL, 0x000D
        .equiv SPIEN,   0x000F


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
        .equiv FRMDLY,  0x0001
        .equiv FRMPOL,  0x000D
        .equiv SPIFSD,  0x000E
        .equiv FRMEN,   0x000F


;----- SPI2STAT Bits -----------------------------------------------------
       ;.equiv SPIRBF,  0x0000
       ;.equiv SPITBF,  0x0001
       ;.equiv SPIROV,  0x0006
       ;.equiv SPISIDL, 0x000D
       ;.equiv SPIEN,   0x000F


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
       ;.equiv FRMDLY,  0x0001
       ;.equiv FRMPOL,  0x000D
       ;.equiv SPIFSD,  0x000E
       ;.equiv FRMEN,   0x000F


;----- DCICON1 Bits -----------------------------------------------------
        .equiv DJST,    0x0005
        .equiv CSDOM,   0x0006
        .equiv UNFM,    0x0007
        .equiv COFSD,   0x0008
        .equiv CSCKE,   0x0009
        .equiv CSCKD,   0x000A
        .equiv DLOOP,   0x000B
        .equiv DCISIDL, 0x000D
        .equiv DCIEN,   0x000F

        .equiv COFSM0,  0x0000
        .equiv COFSM1,  0x0001


;----- DCICON2 Bits -----------------------------------------------------
        .equiv WS0,     0x0000
        .equiv WS1,     0x0001
        .equiv WS2,     0x0002
        .equiv WS3,     0x0003
        .equiv COFSG0,  0x0005
        .equiv COFSG1,  0x0006
        .equiv COFSG2,  0x0007
        .equiv COFSG3,  0x0008
        .equiv BLEN0,   0x000A
        .equiv BLEN1,   0x000B


;----- DCISTAT Bits -----------------------------------------------------
        .equiv TMPTY,   0x0000
        .equiv TUNF,    0x0001
        .equiv RFUL,    0x0002
        .equiv ROV,     0x0003

        .equiv SLOT0,   0x0008
        .equiv SLOT1,   0x0009
        .equiv SLOT2,   0x000A
        .equiv SLOT3,   0x000B


;----- TSCON Bits -----------------------------------------------------
        .equiv TSE0,    0x0000
        .equiv TSE1,    0x0001
        .equiv TSE2,    0x0002
        .equiv TSE3,    0x0003
        .equiv TSE4,    0x0004
        .equiv TSE5,    0x0005
        .equiv TSE6,    0x0006
        .equiv TSE7,    0x0007
        .equiv TSE8,    0x0008
        .equiv TSE9,    0x0009
        .equiv TSE10,   0x000A
        .equiv TSE11,   0x000B
        .equiv TSE12,   0x000C
        .equiv TSE13,   0x000D
        .equiv TSE14,   0x000E
        .equiv TSE15,   0x000F


;----- RSCON Bits -----------------------------------------------------
        .equiv RSE0,    0x0000
        .equiv RSE1,    0x0001
        .equiv RSE2,    0x0002
        .equiv RSE3,    0x0003
        .equiv RSE4,    0x0004
        .equiv RSE5,    0x0005
        .equiv RSE6,    0x0006
        .equiv RSE7,    0x0007
        .equiv RSE8,    0x0008
        .equiv RSE9,    0x0009
        .equiv RSE10,   0x000A
        .equiv RSE11,   0x000B
        .equiv RSE12,   0x000C
        .equiv RSE13,   0x000D
        .equiv RSE14,   0x000E
        .equiv RSE15,   0x000F


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


;----- TRISC Bits -----------------------------------------------------
        .equiv TRISC1,  0x0001
        .equiv TRISC2,  0x0002
        .equiv TRISC12, 0x000C
        .equiv TRISC13, 0x000D
        .equiv TRISC14, 0x000E
        .equiv TRISC15, 0x000F


;----- PORTC Bits -----------------------------------------------------
        .equiv RC1,     0x0001
        .equiv RC2,     0x0002
        .equiv RC12,    0x000C
        .equiv RC13,    0x000D
        .equiv RC14,    0x000E
        .equiv RC15,    0x000F


;----- LATC Bits -----------------------------------------------------
        .equiv LATC1,   0x0001
        .equiv LATC2,   0x0002
        .equiv LATC12,  0x000C
        .equiv LATC13,  0x000D
        .equiv LATC14,  0x000E
        .equiv LATC15,  0x000F


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


;----- TRISF Bits -----------------------------------------------------
        .equiv TRISF0,  0x0000
        .equiv TRISF1,  0x0001
        .equiv TRISF2,  0x0002
        .equiv TRISF3,  0x0003
        .equiv TRISF4,  0x0004
        .equiv TRISF5,  0x0005
        .equiv TRISF6,  0x0006


;----- PORTF Bits -----------------------------------------------------
        .equiv RF0,     0x0000
        .equiv RF1,     0x0001
        .equiv RF2,     0x0002
        .equiv RF3,     0x0003
        .equiv RF4,     0x0004
        .equiv RF5,     0x0005
        .equiv RF6,     0x0006


;----- LATF Bits -----------------------------------------------------
        .equiv LATF0,   0x0000
        .equiv LATF1,   0x0001
        .equiv LATF2,   0x0002
        .equiv LATF3,   0x0003
        .equiv LATF4,   0x0004
        .equiv LATF5,   0x0005
        .equiv LATF6,   0x0006


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


;----- AD1CON1 Bits -----------------------------------------------------
        .equiv DONE,    0x0000
        .equiv SAMP,    0x0001
        .equiv ASAM,    0x0002
        .equiv SIMSAM,  0x0003
        .equiv AD12B,   0x000A
        .equiv ADDMABM, 0x000C
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
        .equiv CHPS0,   0x0008
        .equiv CHPS1,   0x0009
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


;----- AD1CHS123 Bits -----------------------------------------------------
        .equiv CH123SA, 0x0000
        .equiv CH123SB, 0x0008

        .equiv CH123NA0, 0x0001
        .equiv CH123NA1, 0x0002
        .equiv CH123NB0, 0x0009
        .equiv CH123NB1, 0x000A


;----- AD1CHS0 Bits -----------------------------------------------------
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


;----- AD1PCFGH Bits -----------------------------------------------------
        .equiv PCFG16,  0x0000
        .equiv PCFG17,  0x0001


;----- AD1PCFGL Bits -----------------------------------------------------
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


;----- ADPCFG Bits -----------------------------------------------------
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


;----- AD1CSSH Bits -----------------------------------------------------
        .equiv CSS16,   0x0000
        .equiv CSS17,   0x0001


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


;----- DMA0CON Bits -----------------------------------------------------
        .equiv NULLW,   0x000B
        .equiv HALF,    0x000C
        .equiv DIR,     0x000D
        .equiv SIZE,    0x000E
        .equiv CHEN,    0x000F

        .equiv MODE0,   0x0000
        .equiv MODE1,   0x0001
        .equiv AMODE0,  0x0004
        .equiv AMODE1,  0x0005


;----- DMA0REQ Bits -----------------------------------------------------
        .equiv FORCE,   0x000F

        .equiv IRQSEL0, 0x0000
        .equiv IRQSEL1, 0x0001
        .equiv IRQSEL2, 0x0002
        .equiv IRQSEL3, 0x0003
        .equiv IRQSEL4, 0x0004
        .equiv IRQSEL5, 0x0005
        .equiv IRQSEL6, 0x0006


;----- DMA1CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
       ;.equiv DIR,     0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

       ;.equiv MODE0,   0x0000
       ;.equiv MODE1,   0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA1REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006


;----- DMA2CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
       ;.equiv DIR,     0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

       ;.equiv MODE0,   0x0000
       ;.equiv MODE1,   0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA2REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006


;----- DMA3CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
       ;.equiv DIR,     0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

       ;.equiv MODE0,   0x0000
       ;.equiv MODE1,   0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA3REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006


;----- DMA4CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
       ;.equiv DIR,     0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

       ;.equiv MODE0,   0x0000
       ;.equiv MODE1,   0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA4REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006


;----- DMA5CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
       ;.equiv DIR,     0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

       ;.equiv MODE0,   0x0000
       ;.equiv MODE1,   0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA5REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006


;----- DMA6CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
       ;.equiv DIR,     0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

       ;.equiv MODE0,   0x0000
       ;.equiv MODE1,   0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA6REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006


;----- DMA7CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
       ;.equiv DIR,     0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

       ;.equiv MODE0,   0x0000
       ;.equiv MODE1,   0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA7REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006


;----- DMACS0 Bits -----------------------------------------------------
        .equiv XWCOL0,  0x0000
        .equiv XWCOL1,  0x0001
        .equiv XWCOL2,  0x0002
        .equiv XWCOL3,  0x0003
        .equiv XWCOL4,  0x0004
        .equiv XWCOL5,  0x0005
        .equiv XWCOL6,  0x0006
        .equiv XWCOL7,  0x0007
        .equiv PWCOL0,  0x0008
        .equiv PWCOL1,  0x0009
        .equiv PWCOL2,  0x000A
        .equiv PWCOL3,  0x000B
        .equiv PWCOL4,  0x000C
        .equiv PWCOL5,  0x000D
        .equiv PWCOL6,  0x000E
        .equiv PWCOL7,  0x000F



;----- DMACS1 Bits -----------------------------------------------------
        .equiv PPST0,   0x0000
        .equiv PPST1,   0x0001
        .equiv PPST2,   0x0002
        .equiv PPST3,   0x0003
        .equiv PPST4,   0x0004
        .equiv PPST5,   0x0005
        .equiv PPST6,   0x0006
        .equiv PPST7,   0x0007

        .equiv LSTCH0,  0x0008
        .equiv LSTCH1,  0x0009
        .equiv LSTCH2,  0x000A
        .equiv LSTCH3,  0x000B


;----- ODCD Bits -----------------------------------------------------
        .equiv ODCD0,   0x0000
        .equiv ODCD1,   0x0001
        .equiv ODCD2,   0x0002
        .equiv ODCD3,   0x0003
        .equiv ODCD4,   0x0004
        .equiv ODCD5,   0x0005
        .equiv ODCD6,   0x0006
        .equiv ODCD7,   0x0007
        .equiv ODCD8,   0x0008
        .equiv ODCD9,   0x0009
        .equiv ODCD10,  0x000A
        .equiv ODCD11,  0x000B


;----- ODCF Bits -----------------------------------------------------
        .equiv ODCF0,   0x0000
        .equiv ODCF1,   0x0001
        .equiv ODCF2,   0x0002
        .equiv ODCF3,   0x0003
        .equiv ODCF4,   0x0004
        .equiv ODCF5,   0x0005
        .equiv ODCF6,   0x0006


;----- ODCG Bits -----------------------------------------------------
        .equiv ODCG0,   0x0000
        .equiv ODCG1,   0x0001
        .equiv ODCG2,   0x0002
        .equiv ODCG3,   0x0003
        .equiv ODCG6,   0x0006
        .equiv ODCG7,   0x0007
        .equiv ODCG8,   0x0008
        .equiv ODCG9,   0x0009
        .equiv ODCG12,  0x000C
        .equiv ODCG13,  0x000D
        .equiv ODCG14,  0x000E
        .equiv ODCG15,  0x000F


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
        .equiv IOPUWR,  0x000E
        .equiv TRAPR,   0x000F


;----- OSCCON Bits -----------------------------------------------------
        .equiv OSWEN,   0x0000
        .equiv LPOSCEN, 0x0001
        .equiv CF,      0x0003
        .equiv LOCK,    0x0005
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

        .equiv PLLPRE0, 0x0000
        .equiv PLLPRE1, 0x0001
        .equiv PLLPRE2, 0x0002
        .equiv PLLPRE3, 0x0003
        .equiv PLLPRE4, 0x0004
        .equiv PLLPOST0, 0x0006
        .equiv PLLPOST1, 0x0007
        .equiv FRCDIV0, 0x0008
        .equiv FRCDIV1, 0x0009
        .equiv FRCDIV2, 0x000A
        .equiv DOZE0,   0x000C
        .equiv DOZE1,   0x000D
        .equiv DOZE2,   0x000E


;----- PLLFBD Bits -----------------------------------------------------
        .equiv PLLDIV0, 0x0000
        .equiv PLLDIV1, 0x0001
        .equiv PLLDIV2, 0x0002
        .equiv PLLDIV3, 0x0003
        .equiv PLLDIV4, 0x0004
        .equiv PLLDIV5, 0x0005
        .equiv PLLDIV6, 0x0006
        .equiv PLLDIV7, 0x0007
        .equiv PLLDIV8, 0x0008


;----- OSCTUN Bits -----------------------------------------------------
        .equiv TUN0,    0x0000
        .equiv TUN1,    0x0001
        .equiv TUN2,    0x0002
        .equiv TUN3,    0x0003
        .equiv TUN4,    0x0004
        .equiv TUN5,    0x0005


;----- BSRAM Bits -----------------------------------------------------
        .equiv RL_BSR,  0x0000
        .equiv IR_BSR,  0x0001
        .equiv IW_BSR,  0x0002


;----- SSRAM Bits -----------------------------------------------------
        .equiv RL_SSR,  0x0000
        .equiv IR_SSR,  0x0001
        .equiv IW_SSR,  0x0002


;----- NVMCON Bits -----------------------------------------------------
        .equiv ERASE,   0x0006
        .equiv WRERR,   0x000D
        .equiv WREN,    0x000E
        .equiv WR,      0x000F

        .equiv NVMOP0,  0x0000
        .equiv NVMOP1,  0x0001
        .equiv NVMOP2,  0x0002
        .equiv NVMOP3,  0x0003


;----- PMD1 Bits -----------------------------------------------------
        .equiv AD1MD,   0x0000
        .equiv SPI1MD,  0x0003
        .equiv SPI2MD,  0x0004
        .equiv U1MD,    0x0005
        .equiv U2MD,    0x0006
        .equiv I2C1MD,  0x0007
        .equiv DCIMD,   0x0008
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
        .equiv T6MD,    0x000C
        .equiv T7MD,    0x000D
        .equiv T8MD,    0x000E
        .equiv T9MD,    0x000F




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


;----- FBS (0xf80000) --------------------------------------------------
;
;  The following settings are available for FBS:
;
;   Boot Segment Write Protect:
;     BWRP_WRPROTECT_ON    Boot segment is write-protected
;     BWRP_WRPROTECT_OFF   Boot Segment may be written
;
;   Boot Segment Program Flash Code Protection:
;     BSS_LARGE_FLASH_HIGH High Security, Large-sized Boot Flash
;     BSS_HIGH_LARGE_BOOT_CODEHigh Security, Large-sized Boot Flash
;     BSS_MEDIUM_FLASH_HIGHHigh Security, Medium-sized Boot Flash
;     BSS_HIGH_MEDIUM_BOOT_CODEHigh Security, Medium-sized Boot Flash
;     BSS_SMALL_FLASH_HIGH High Security, Small-sized Boot Flash
;     BSS_HIGH_SMALL_BOOT_CODEHigh Security, Small-sized Boot Flash
;     BSS_LARGE_FLASH_STD  Standard Security, Large-sized Boot Flash
;     BSS_STRD_LARGE_BOOT_CODEStandard Security, Large-sized Boot Flash
;     BSS_MEDIUM_FLASH_STD Standard Security, Medium-sized Boot Flash
;     BSS_STRD_MEDIUM_BOOT_CODEStandard Security, Medium-sized Boot Flash
;     BSS_SMALL_FLASH_STD  Standard Security, Small-sized Boot Flash
;     BSS_STRD_SMALL_BOOT_CODEStandard Security, Small-sized Boot Flash
;     BSS_NO_FLASH         No Boot program Flash segment
;     BSS_NO_BOOT_CODE     No Boot program Flash segment
;
;   Boot Segment RAM Protection:
;     RBS_LARGE_RAM        Large-sized Boot RAM
;     RBS_LARGE_BOOT_RAM   Large-sized Boot RAM
;     RBS_MEDIUM_RAM       Medium-sized Boot RAM
;     RBS_MEDIUM_BOOT_RAM  Medium-sized Boot RAM
;     RBS_SMALL_RAM        Small-sized Boot RAM
;     RBS_SMALL_BOOT_RAM   Small-sized Boot RAM
;     RBS_NO_RAM           No Boot RAM
;     RBS_NO_BOOT_RAM      No Boot RAM
;
        .equiv BWRP_WRPROTECT_ON, 0xFFFE ; Boot segment is write-protected
        .equiv BWRP_WRPROTECT_OFF, 0xFFFF ; Boot Segment may be written

        .equiv BSS_LARGE_FLASH_HIGH, 0xFFF1 ; High Security, Large-sized Boot Flash
        .equiv BSS_HIGH_LARGE_BOOT_CODE, 0xFFF1 ; High Security, Large-sized Boot Flash
        .equiv BSS_MEDIUM_FLASH_HIGH, 0xFFF3 ; High Security, Medium-sized Boot Flash
        .equiv BSS_HIGH_MEDIUM_BOOT_CODE, 0xFFF3 ; High Security, Medium-sized Boot Flash
        .equiv BSS_SMALL_FLASH_HIGH, 0xFFF5 ; High Security, Small-sized Boot Flash
        .equiv BSS_HIGH_SMALL_BOOT_CODE, 0xFFF5 ; High Security, Small-sized Boot Flash
        .equiv BSS_LARGE_FLASH_STD, 0xFFF9 ; Standard Security, Large-sized Boot Flash
        .equiv BSS_STRD_LARGE_BOOT_CODE, 0xFFF9 ; Standard Security, Large-sized Boot Flash
        .equiv BSS_MEDIUM_FLASH_STD, 0xFFFB ; Standard Security, Medium-sized Boot Flash
        .equiv BSS_STRD_MEDIUM_BOOT_CODE, 0xFFFB ; Standard Security, Medium-sized Boot Flash
        .equiv BSS_SMALL_FLASH_STD, 0xFFFD ; Standard Security, Small-sized Boot Flash
        .equiv BSS_STRD_SMALL_BOOT_CODE, 0xFFFD ; Standard Security, Small-sized Boot Flash
        .equiv BSS_NO_FLASH,    0xFFFF ; No Boot program Flash segment
        .equiv BSS_NO_BOOT_CODE, 0xFFFF ; No Boot program Flash segment

        .equiv RBS_LARGE_RAM,   0xFF3F ; Large-sized Boot RAM
        .equiv RBS_LARGE_BOOT_RAM, 0xFF3F ; Large-sized Boot RAM
        .equiv RBS_MEDIUM_RAM,  0xFF7F ; Medium-sized Boot RAM
        .equiv RBS_MEDIUM_BOOT_RAM, 0xFF7F ; Medium-sized Boot RAM
        .equiv RBS_SMALL_RAM,   0xFFBF ; Small-sized Boot RAM
        .equiv RBS_SMALL_BOOT_RAM, 0xFFBF ; Small-sized Boot RAM
        .equiv RBS_NO_RAM,      0xFFFF ; No Boot RAM
        .equiv RBS_NO_BOOT_RAM, 0xFFFF ; No Boot RAM


;----- FSS (0xf80002) --------------------------------------------------
;
;  The following settings are available for FSS:
;
;   Secure Segment Program Write Protect:
;     SWRP_WRPROTECT_ON    Secure segment is write-protected
;     SWRP_WRPROTECT_OFF   Secure segment may be written
;
;   Secure Segment Program Flash Code Protection:
;     SSS_LARGE_FLASH_HIGH High Security, Large-sized Secure Flash
;     SSS_HIGH_LARGE_SEC_CODEHigh Security, Large-sized Secure Flash
;     SSS_MEDIUM_FLASH_HIGHHigh Security, Medium-sized Secure Flash
;     SSS_HIGH_MEDIUM_SEC_CODEHigh Security, Medium-sized Secure Flash
;     SSS_SMALL_FLASH_HIGH High Security, Small-sized Secure Flash
;     SSS_HIGH_SMALL_SEC_CODEHigh Security, Small-sized Secure Flash
;     SSS_LARGE_FLASH_STD  Standard Security, Large-sized Secure Flash
;     SSS_STRD_LARGE_SEC_CODEStandard Security, Large-sized Secure Flash
;     SSS_MEDIUM_FLASH_STD Standard Security, Medium-sized Secure Flash
;     SSS_STRD_MEDIUM_SEC_CODEStandard Security, Medium-sized Secure Flash
;     SSS_SMALL_FLASH_STD  Standard Security, Small-sized Secure Flash
;     SSS_STRD_SMALL_SEC_CODEStandard Security, Small-sized Secure Flash
;     SSS_NO_FLASH         No Secure Segment
;     SSS_NO_SEC_CODE      No Secure Segment
;
;   Secure Segment Data RAM Protection:
;     RSS_LARGE_RAM        Large-sized Secure RAM
;     RSS_LARGE_SEC_RAM    Large-sized Secure RAM
;     RSS_MEDIUM_RAM       Medium-sized Secure RAM
;     RSS_MEDIUM_SEC_RAM   Medium-sized Secure RAM
;     RSS_SMALL_RAM        Small-sized Secure RAM
;     RSS_SMALL_SEC_RAM    Small-sized Secure RAM
;     RSS_NO_RAM           No Secure RAM
;     RSS_NO_SEC_RAM       No Secure RAM
;
        .equiv SWRP_WRPROTECT_ON, 0xFFFE ; Secure segment is write-protected
        .equiv SWRP_WRPROTECT_OFF, 0xFFFF ; Secure segment may be written

        .equiv SSS_LARGE_FLASH_HIGH, 0xFFF1 ; High Security, Large-sized Secure Flash
        .equiv SSS_HIGH_LARGE_SEC_CODE, 0xFFF1 ; High Security, Large-sized Secure Flash
        .equiv SSS_MEDIUM_FLASH_HIGH, 0xFFF3 ; High Security, Medium-sized Secure Flash
        .equiv SSS_HIGH_MEDIUM_SEC_CODE, 0xFFF3 ; High Security, Medium-sized Secure Flash
        .equiv SSS_SMALL_FLASH_HIGH, 0xFFF5 ; High Security, Small-sized Secure Flash
        .equiv SSS_HIGH_SMALL_SEC_CODE, 0xFFF5 ; High Security, Small-sized Secure Flash
        .equiv SSS_LARGE_FLASH_STD, 0xFFF9 ; Standard Security, Large-sized Secure Flash
        .equiv SSS_STRD_LARGE_SEC_CODE, 0xFFF9 ; Standard Security, Large-sized Secure Flash
        .equiv SSS_MEDIUM_FLASH_STD, 0xFFFB ; Standard Security, Medium-sized Secure Flash
        .equiv SSS_STRD_MEDIUM_SEC_CODE, 0xFFFB ; Standard Security, Medium-sized Secure Flash
        .equiv SSS_SMALL_FLASH_STD, 0xFFFD ; Standard Security, Small-sized Secure Flash
        .equiv SSS_STRD_SMALL_SEC_CODE, 0xFFFD ; Standard Security, Small-sized Secure Flash
        .equiv SSS_NO_FLASH,    0xFFFF ; No Secure Segment
        .equiv SSS_NO_SEC_CODE, 0xFFFF ; No Secure Segment

        .equiv RSS_LARGE_RAM,   0xFF3F ; Large-sized Secure RAM
        .equiv RSS_LARGE_SEC_RAM, 0xFF3F ; Large-sized Secure RAM
        .equiv RSS_MEDIUM_RAM,  0xFF7F ; Medium-sized Secure RAM
        .equiv RSS_MEDIUM_SEC_RAM, 0xFF7F ; Medium-sized Secure RAM
        .equiv RSS_SMALL_RAM,   0xFFBF ; Small-sized Secure RAM
        .equiv RSS_SMALL_SEC_RAM, 0xFFBF ; Small-sized Secure RAM
        .equiv RSS_NO_RAM,      0xFFFF ; No Secure RAM
        .equiv RSS_NO_SEC_RAM,  0xFFFF ; No Secure RAM


;----- FGS (0xf80004) --------------------------------------------------
;
;  The following settings are available for FGS:
;
;   General Code Segment Write Protect:
;     GWRP_ON              User program memory is write-protected
;     GWRP_OFF             User program memory is not write-protected
;
;   General Segment Code Protection:
;     GSS_HIGH             High Security Code Protection is Enabled
;     GSS_STD              Standard Security Code Protection is Enabled
;     GCP_ON               Standard Security Code Protection is Enabled
;     GSS_OFF              User program memory is not code-protected
;     GCP_OFF              User program memory is not code-protected
;
        .equiv GWRP_ON,         0xFFFE ; User program memory is write-protected
        .equiv GWRP_OFF,        0xFFFF ; User program memory is not write-protected

        .equiv GSS_HIGH,        0xFFFB ; High Security Code Protection is Enabled
        .equiv GSS_STD,         0xFFFD ; Standard Security Code Protection is Enabled
        .equiv GCP_ON,          0xFFFD ; Standard Security Code Protection is Enabled
        .equiv GSS_OFF,         0xFFFF ; User program memory is not code-protected
        .equiv GCP_OFF,         0xFFFF ; User program memory is not code-protected


;----- FOSCSEL (0xf80006) --------------------------------------------------
;
;  The following settings are available for FOSCSEL:
;
;   Oscillator Mode:
;     FNOSC_FRC            Internal Fast RC (FRC)
;     FNOSC_FRCPLL         Internal Fast RC (FRC) w/ PLL
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary Oscillator (XT, HS, EC) w/ PLL
;     FNOSC_SOSC           Secondary Oscillator (SOSC)
;     FNOSC_LPRC           Low Power RC Oscillator (LPRC)
;     FNOSC_FRCDIV16       Internal Fast RC (FRC) divide by 16
;     FNOSC_LPRCDIVN       Internal Fast RC (FRC) with divide by N
;
;   Two-speed Oscillator Start-Up Enable:
;     IESO_OFF             Start up with user-selected oscillator
;     IESO_ON              Start up with FRC, then switch
;
        .equiv FNOSC_FRC,       0xFFF8 ; Internal Fast RC (FRC)
        .equiv FNOSC_FRCPLL,    0xFFF9 ; Internal Fast RC (FRC) w/ PLL
        .equiv FNOSC_PRI,       0xFFFA ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFFFB ; Primary Oscillator (XT, HS, EC) w/ PLL
        .equiv FNOSC_SOSC,      0xFFFC ; Secondary Oscillator (SOSC)
        .equiv FNOSC_LPRC,      0xFFFD ; Low Power RC Oscillator (LPRC)
        .equiv FNOSC_FRCDIV16,  0xFFFE ; Internal Fast RC (FRC) divide by 16
        .equiv FNOSC_LPRCDIVN,  0xFFFF ; Internal Fast RC (FRC) with divide by N

        .equiv IESO_OFF,        0xFF7F ; Start up with user-selected oscillator
        .equiv IESO_ON,         0xFFFF ; Start up with FRC, then switch


;----- FOSC (0xf80008) --------------------------------------------------
;
;  The following settings are available for FOSC:
;
;   Primary Oscillator Source:
;     POSCMD_EC            EC Oscillator Mode
;     POSCMD_XT            XT Oscillator Mode
;     POSCMD_HS            HS Oscillator Mode
;     POSCMD_NONE          Primary Oscillator Disabled
;
;   OSC2 Pin Function:
;     OSCIOFNC_ON          OSC2 pin has digital I/O function
;     OSCIOFNC_OFF         OSC2 pin has clock out function
;
;   Clock Switching and Monitor:
;     FCKSM_CSECME         Both Clock Switching and Fail-Safe Clock Monitor are enabled
;     FCKSM_CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
;     FCKSM_CSDCMD         Both Clock Switching and Fail-Safe Clock Monitor are disabled
;
        .equiv POSCMD_EC,       0xFFFC ; EC Oscillator Mode
        .equiv POSCMD_XT,       0xFFFD ; XT Oscillator Mode
        .equiv POSCMD_HS,       0xFFFE ; HS Oscillator Mode
        .equiv POSCMD_NONE,     0xFFFF ; Primary Oscillator Disabled

        .equiv OSCIOFNC_ON,     0xFFFB ; OSC2 pin has digital I/O function
        .equiv OSCIOFNC_OFF,    0xFFFF ; OSC2 pin has clock out function

        .equiv FCKSM_CSECME,    0xFF3F ; Both Clock Switching and Fail-Safe Clock Monitor are enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Clock switching is enabled, Fail-Safe Clock Monitor is disabled
        .equiv FCKSM_CSDCMD,    0xFFBF ; Both Clock Switching and Fail-Safe Clock Monitor are disabled


;----- FWDT (0xf8000a) --------------------------------------------------
;
;  The following settings are available for FWDT:
;
;   Watchdog Timer Postscaler:
;     WDTPOST_PS1          1:1
;     WDTPOST_PS2          1:2
;     WDTPOST_PS4          1:4
;     WDTPOST_PS8          1:8
;     WDTPOST_PS16         1:16
;     WDTPOST_PS32         1:32
;     WDTPOST_PS64         1:64
;     WDTPOST_PS128        1:128
;     WDTPOST_PS256        1:256
;     WDTPOST_PS512        1:512
;     WDTPOST_PS1024       1:1,024
;     WDTPOST_PS2048       1:2,048
;     WDTPOST_PS4096       1:4,096
;     WDTPOST_PS8192       1:8,192
;     WDTPOST_PS16384      1:16,384
;     WDTPOST_PS32768      1:32,768
;
;   WDT Prescaler:
;     WDTPRE_PR32          1:32
;     WDTPRE_PR128         1:128
;
;   Watchdog Timer Window:
;     WINDIS_ON            Watchdog Timer in Window mode
;     WINDIS_OFF           Watchdog Timer in Non-Window mode
;
;   Watchdog Timer Enable:
;     FWDTEN_OFF           Watchdog timer enabled/disabled by user software
;     FWDTEN_ON            Watchdog timer always enabled
;
        .equiv WDTPOST_PS1,     0xFFF0 ; 1:1
        .equiv WDTPOST_PS2,     0xFFF1 ; 1:2
        .equiv WDTPOST_PS4,     0xFFF2 ; 1:4
        .equiv WDTPOST_PS8,     0xFFF3 ; 1:8
        .equiv WDTPOST_PS16,    0xFFF4 ; 1:16
        .equiv WDTPOST_PS32,    0xFFF5 ; 1:32
        .equiv WDTPOST_PS64,    0xFFF6 ; 1:64
        .equiv WDTPOST_PS128,   0xFFF7 ; 1:128
        .equiv WDTPOST_PS256,   0xFFF8 ; 1:256
        .equiv WDTPOST_PS512,   0xFFF9 ; 1:512
        .equiv WDTPOST_PS1024,  0xFFFA ; 1:1,024
        .equiv WDTPOST_PS2048,  0xFFFB ; 1:2,048
        .equiv WDTPOST_PS4096,  0xFFFC ; 1:4,096
        .equiv WDTPOST_PS8192,  0xFFFD ; 1:8,192
        .equiv WDTPOST_PS16384, 0xFFFE ; 1:16,384
        .equiv WDTPOST_PS32768, 0xFFFF ; 1:32,768

        .equiv WDTPRE_PR32,     0xFFEF ; 1:32
        .equiv WDTPRE_PR128,    0xFFFF ; 1:128

        .equiv WINDIS_ON,       0xFFBF ; Watchdog Timer in Window mode
        .equiv WINDIS_OFF,      0xFFFF ; Watchdog Timer in Non-Window mode

        .equiv FWDTEN_OFF,      0xFF7F ; Watchdog timer enabled/disabled by user software
        .equiv FWDTEN_ON,       0xFFFF ; Watchdog timer always enabled


;----- FPOR (0xf8000c) --------------------------------------------------
;
;  The following settings are available for FPOR:
;
;   POR Timer Value:
;     FPWRT_PWR1           Disabled
;     FPWRT_PWR2           2ms
;     FPWRT_PWR4           4ms
;     FPWRT_PWR8           8ms
;     FPWRT_PWR16          16ms
;     FPWRT_PWR32          32ms
;     FPWRT_PWR64          64ms
;     FPWRT_PWR128         128ms
;
        .equiv FPWRT_PWR1,      0xFFF8 ; Disabled
        .equiv FPWRT_PWR2,      0xFFF9 ; 2ms
        .equiv FPWRT_PWR4,      0xFFFA ; 4ms
        .equiv FPWRT_PWR8,      0xFFFB ; 8ms
        .equiv FPWRT_PWR16,     0xFFFC ; 16ms
        .equiv FPWRT_PWR32,     0xFFFD ; 32ms
        .equiv FPWRT_PWR64,     0xFFFE ; 64ms
        .equiv FPWRT_PWR128,    0xFFFF ; 128ms


;----- FICD (0xf8000e) --------------------------------------------------
;
;  The following settings are available for FICD:
;
;   Comm Channel Select:
;     ICS_PGD3             Communicate on PGC3/EMUC3 and PGD3/EMUD3
;     ICS_PGD2             Communicate on PGC2/EMUC2 and PGD2/EMUD2
;     ICS_PGD1             Communicate on PGC1/EMUC1 and PGD1/EMUD1
;
;   JTAG Port Enable:
;     JTAGEN_OFF           JTAG is Disabled
;     JTAGEN_ON            JTAG is Enabled
;
        .equiv ICS_PGD3,        0xFFFD ; Communicate on PGC3/EMUC3 and PGD3/EMUD3
        .equiv ICS_PGD2,        0xFFFE ; Communicate on PGC2/EMUC2 and PGD2/EMUD2
        .equiv ICS_PGD1,        0xFFFF ; Communicate on PGC1/EMUC1 and PGD1/EMUD1

        .equiv JTAGEN_OFF,      0xFFDF ; JTAG is Disabled
        .equiv JTAGEN_ON,       0xFFFF ; JTAG is Enabled


;----- FUID0 (0xf80010) --------------------------------------------------
;
;  The following settings are available for FUID0:
;
;   :
;


;----- FUID1 (0xf80012) --------------------------------------------------
;
;  The following settings are available for FUID1:
;
;   :
;


;----- FUID2 (0xf80014) --------------------------------------------------
;
;  The following settings are available for FUID2:
;
;   :
;


;----- FUID3 (0xf80016) --------------------------------------------------
;
;  The following settings are available for FUID3:
;
;   :
;


.LIST
