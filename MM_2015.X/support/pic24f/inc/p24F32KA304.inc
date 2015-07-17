;==========================================================================
;  PIC24F32KA304 Standard Assembly Include File
; 
;  (c) Copyright 2014 Microchip Technology, All rights reserved
;  Part support version v1.22.A(19-Aug-2014)
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC24F32KA304 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p24F32KA304
;       2. Placing a ".equ" directive before the ".include":
;               .equ __24F32KA304, 1
;               .include "p24F32KA304.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __24F32KA304
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

        .extern CNEN1
        .equiv  CNEN1L, _CNEN1
        .equiv  CNEN1H, _CNEN1+1

        .extern CNEN2
        .equiv  CNEN2L, _CNEN2
        .equiv  CNEN2H, _CNEN2+1

        .extern CNEN3
        .equiv  CNEN3L, _CNEN3
        .equiv  CNEN3H, _CNEN3+1

        .extern CNPU1
        .equiv  CNPU1L, _CNPU1
        .equiv  CNPU1H, _CNPU1+1

        .extern CNPU2
        .equiv  CNPU2L, _CNPU2
        .equiv  CNPU2H, _CNPU2+1

        .extern CNPU3
        .equiv  CNPU3L, _CNPU3
        .equiv  CNPU3H, _CNPU3+1

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

        .extern IPC12
        .equiv  IPC12L, _IPC12
        .equiv  IPC12H, _IPC12+1

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

        .extern ADC1BUF16
        .equiv  ADC1BUF16L, _ADC1BUF16
        .equiv  ADC1BUF16H, _ADC1BUF16+1

        .extern ADC1BUF17
        .equiv  ADC1BUF17L, _ADC1BUF17
        .equiv  ADC1BUF17H, _ADC1BUF17+1

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

        .extern AD1CSSH
        .equiv  AD1CSSHL, _AD1CSSH
        .equiv  AD1CSSHH, _AD1CSSH+1

        .extern AD1CSSL
        .equiv  AD1CSSLL, _AD1CSSL
        .equiv  AD1CSSLH, _AD1CSSL+1

        .extern AD1CON5
        .equiv  AD1CON5L, _AD1CON5
        .equiv  AD1CON5H, _AD1CON5+1

        .extern AD1CHITH
        .equiv  AD1CHITHL, _AD1CHITH
        .equiv  AD1CHITHH, _AD1CHITH+1

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

        .extern AD1CTMUENH
        .equiv  AD1CTMUENHL, _AD1CTMUENH
        .equiv  AD1CTMUENHH, _AD1CTMUENH+1

        .extern AD1CTMUENL
        .equiv  AD1CTMUENLL, _AD1CTMUENL
        .equiv  AD1CTMUENLH, _AD1CTMUENL+1

        .extern ANSA
        .equiv  ANSAL, _ANSA
        .equiv  ANSAH, _ANSA+1

        .extern ANSELA
        .equiv  ANSELAL, _ANSELA
        .equiv  ANSELAH, _ANSELA+1

        .extern ANSB
        .equiv  ANSBL, _ANSB
        .equiv  ANSBH, _ANSB+1

        .extern ANSELB
        .equiv  ANSELBL, _ANSELB
        .equiv  ANSELBH, _ANSELB+1

        .extern ANSC
        .equiv  ANSCL, _ANSC
        .equiv  ANSCH, _ANSC+1

        .extern ANSELC
        .equiv  ANSELCL, _ANSELC
        .equiv  ANSELCH, _ANSELC+1

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

        .extern CRCXOR

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

        .extern CRCWDAT

        .extern CRCWDATL
        .equiv  CRCWDATLL, _CRCWDATL
        .equiv  CRCWDATLH, _CRCWDATL+1

        .extern CRCWDATH
        .equiv  CRCWDATHL, _CRCWDATH
        .equiv  CRCWDATHH, _CRCWDATH+1

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

        .extern DSWSRC
        .equiv  DSWSRCL, _DSWSRC
        .equiv  DSWSRCH, _DSWSRC+1

        .extern DSGPR0
        .equiv  DSGPR0L, _DSGPR0
        .equiv  DSGPR0H, _DSGPR0+1

        .extern DSGPR1
        .equiv  DSGPR1L, _DSGPR1
        .equiv  DSGPR1H, _DSGPR1+1

        .extern NVMCON
        .equiv  NVMCONL, _NVMCON
        .equiv  NVMCONH, _NVMCON+1

        .extern NVMKEY
        .equiv  NVMKEYL, _NVMKEY
        .equiv  NVMKEYH, _NVMKEY+1

        .extern ULPWCON
        .equiv  ULPWCONL, _ULPWCON
        .equiv  ULPWCONH, _ULPWCON+1

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
        .equiv CN33PDE, 0x0001
        .equiv CN34PDE, 0x0002
        .equiv CN35PDE, 0x0003
        .equiv CN36PDE, 0x0004


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
        .equiv CN33IE,  0x0001
        .equiv CN34IE,  0x0002
        .equiv CN35IE,  0x0003
        .equiv CN36IE,  0x0004


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
        .equiv CN33PUE, 0x0001
        .equiv CN34PUE, 0x0002
        .equiv CN35PUE, 0x0003
        .equiv CN36PUE, 0x0004


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
        .equiv NVMIF,   0x000F


;----- IFS1 Bits -----------------------------------------------------
        .equiv SI2C1IF, 0x0000
        .equiv MI2C1IF, 0x0001
        .equiv CMIF,    0x0002
        .equiv CNIF,    0x0003
        .equiv INT1IF,  0x0004
        .equiv OC3IF,   0x0009
        .equiv T4IF,    0x000B
        .equiv T5IF,    0x000C
        .equiv INT2IF,  0x000D
        .equiv U2RXIF,  0x000E
        .equiv U2TXIF,  0x000F


;----- IFS2 Bits -----------------------------------------------------
        .equiv SPF2IF,  0x0000
        .equiv SPI2IF,  0x0001
        .equiv IC3IF,   0x0005


;----- IFS3 Bits -----------------------------------------------------
        .equiv SI2C2IF, 0x0001
        .equiv MI2C2IF, 0x0002
        .equiv RTCIF,   0x000E


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1ERIF,  0x0001
        .equiv U2ERIF,  0x0002
        .equiv CRCIF,   0x0003
        .equiv HLVDIF,  0x0008
        .equiv CTMUIF,  0x000D


;----- IFS5 Bits -----------------------------------------------------
        .equiv ULPWUIF, 0x0000


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
        .equiv NVMIE,   0x000F


;----- IEC1 Bits -----------------------------------------------------
        .equiv SI2C1IE, 0x0000
        .equiv MI2C1IE, 0x0001
        .equiv CMIE,    0x0002
        .equiv CNIE,    0x0003
        .equiv INT1IE,  0x0004
        .equiv OC3IE,   0x0009
        .equiv T4IE,    0x000B
        .equiv T5IE,    0x000C
        .equiv INT2IE,  0x000D
        .equiv U2RXIE,  0x000E
        .equiv U2TXIE,  0x000F


;----- IEC2 Bits -----------------------------------------------------
        .equiv SPF2IE,  0x0000
        .equiv SPI2IE,  0x0001
        .equiv IC3IE,   0x0005


;----- IEC3 Bits -----------------------------------------------------
        .equiv SI2C2IE, 0x0001
        .equiv MI2C2IE, 0x0002
        .equiv RTCIE,   0x000E


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1ERIE,  0x0001
        .equiv U2ERIE,  0x0002
        .equiv CRCIE,   0x0003
        .equiv HLVDIE,  0x0008
        .equiv CTMUIE,  0x000D


;----- IEC5 Bits -----------------------------------------------------
        .equiv ULPWUIE, 0x0000


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
        .equiv NVMIP0,  0x000C
        .equiv NVMIP1,  0x000D
        .equiv NVMIP2,  0x000E


;----- IPC4 Bits -----------------------------------------------------
        .equiv SI2C1P0, 0x0000
        .equiv SI2C1P1, 0x0001
        .equiv SI2C1P2, 0x0002
        .equiv MI2C1P0, 0x0004
        .equiv MI2C1P1, 0x0005
        .equiv MI2C1P2, 0x0006
        .equiv CMIP0,   0x0008
        .equiv CMIP1,   0x0009
        .equiv CMIP2,   0x000A
        .equiv CNIP0,   0x000C
        .equiv CNIP1,   0x000D
        .equiv CNIP2,   0x000E

        .equiv SI2C1IP0, 0x0000
        .equiv SI2C1IP1, 0x0001
        .equiv SI2C1IP2, 0x0002
        .equiv MI2C1IP0, 0x0004
        .equiv MI2C1IP1, 0x0005
        .equiv MI2C1IP2, 0x0006


;----- IPC5 Bits -----------------------------------------------------
        .equiv INT1IP0, 0x0000
        .equiv INT1IP1, 0x0001
        .equiv INT1IP2, 0x0002


;----- IPC6 Bits -----------------------------------------------------
        .equiv OC3IP0,  0x0004
        .equiv OC3IP1,  0x0005
        .equiv OC3IP2,  0x0006
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
        .equiv HLVDIP0, 0x0000
        .equiv HLVDIP1, 0x0001
        .equiv HLVDIP2, 0x0002


;----- IPC19 Bits -----------------------------------------------------
        .equiv CTMUIP0, 0x0004
        .equiv CTMUIP1, 0x0005
        .equiv CTMUIP2, 0x0006


;----- IPC20 Bits -----------------------------------------------------
        .equiv ULPWUIP0, 0x0000
        .equiv ULPWUIP1, 0x0001
        .equiv ULPWUIP2, 0x0002


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
        .equiv IC1TSEL0, 0x000A
        .equiv IC1TSEL1, 0x000B
        .equiv IC1TSEL2, 0x000C


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
        .equiv IC2TSEL0, 0x000A
        .equiv IC2TSEL1, 0x000B
        .equiv IC2TSEL2, 0x000C


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
        .equiv IC3TSEL0, 0x000A
        .equiv IC3TSEL1, 0x000B
        .equiv IC3TSEL2, 0x000C


;----- IC3CON2 Bits -----------------------------------------------------
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
        .equiv OCMPINV, 0x000C
        .equiv FLTTRIEN, 0x000D
        .equiv FLTOUT,  0x000E
        .equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
        .equiv DB0,     0x0009
        .equiv DB1,     0x000A


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
       ;.equiv OCMPINV, 0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DB0,     0x0009
       ;.equiv DB1,     0x000A


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
       ;.equiv OCMPINV, 0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv DB0,     0x0009
       ;.equiv DB1,     0x000A


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
        .equiv SR1MPT,  0x0005
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


;----- SPI2STAT Bits -----------------------------------------------------
       ;.equiv SPIRBF,  0x0000
       ;.equiv SPITBF,  0x0001
       ;.equiv SR1MPT,  0x0005
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


;----- TRISA Bits -----------------------------------------------------
        .equiv TRISA0,  0x0000
        .equiv TRISA1,  0x0001
        .equiv TRISA2,  0x0002
        .equiv TRISA3,  0x0003
        .equiv TRISA4,  0x0004
        .equiv TRISA6,  0x0006
        .equiv TRISA7,  0x0007
        .equiv TRISA8,  0x0008
        .equiv TRISA9,  0x0009
        .equiv TRISA10, 0x000A
        .equiv TRISA11, 0x000B


;----- PORTA Bits -----------------------------------------------------
        .equiv RA0,     0x0000
        .equiv RA1,     0x0001
        .equiv RA2,     0x0002
        .equiv RA3,     0x0003
        .equiv RA4,     0x0004
        .equiv RA5,     0x0005
        .equiv RA6,     0x0006
        .equiv RA7,     0x0007
        .equiv RA8,     0x0008
        .equiv RA9,     0x0009
        .equiv RA10,    0x000A
        .equiv RA11,    0x000B


;----- LATA Bits -----------------------------------------------------
        .equiv LATA0,   0x0000
        .equiv LATA1,   0x0001
        .equiv LATA2,   0x0002
        .equiv LATA3,   0x0003
        .equiv LATA4,   0x0004
        .equiv LATA6,   0x0006
        .equiv LATA7,   0x0007
        .equiv LATA8,   0x0008
        .equiv LATA9,   0x0009
        .equiv LATA10,  0x000A
        .equiv LATA11,  0x000B


;----- ODCA Bits -----------------------------------------------------
        .equiv ODA0,    0x0000
        .equiv ODA1,    0x0001
        .equiv ODA2,    0x0002
        .equiv ODA3,    0x0003
        .equiv ODA4,    0x0004
        .equiv ODA6,    0x0006
        .equiv ODA7,    0x0007
        .equiv ODA8,    0x0008
        .equiv ODA9,    0x0009
        .equiv ODA10,   0x000A
        .equiv ODA11,   0x000B


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
        .equiv TRISC0,  0x0000
        .equiv TRISC1,  0x0001
        .equiv TRISC2,  0x0002
        .equiv TRISC3,  0x0003
        .equiv TRISC4,  0x0004
        .equiv TRISC5,  0x0005
        .equiv TRISC6,  0x0006
        .equiv TRISC7,  0x0007
        .equiv TRISC8,  0x0008
        .equiv TRISC9,  0x0009


;----- PORTC Bits -----------------------------------------------------
        .equiv RC0,     0x0000
        .equiv RC1,     0x0001
        .equiv RC2,     0x0002
        .equiv RC3,     0x0003
        .equiv RC4,     0x0004
        .equiv RC5,     0x0005
        .equiv RC6,     0x0006
        .equiv RC7,     0x0007
        .equiv RC8,     0x0008
        .equiv RC9,     0x0009


;----- LATC Bits -----------------------------------------------------
        .equiv LATC0,   0x0000
        .equiv LATC1,   0x0001
        .equiv LATC2,   0x0002
        .equiv LATC3,   0x0003
        .equiv LATC4,   0x0004
        .equiv LATC5,   0x0005
        .equiv LATC6,   0x0006
        .equiv LATC7,   0x0007
        .equiv LATC8,   0x0008
        .equiv LATC9,   0x0009


;----- ODCC Bits -----------------------------------------------------
        .equiv ODC0,    0x0000
        .equiv ODC1,    0x0001
        .equiv ODC2,    0x0002
        .equiv ODC3,    0x0003
        .equiv ODC4,    0x0004
        .equiv ODC5,    0x0005
        .equiv ODC6,    0x0006
        .equiv ODC7,    0x0007
        .equiv ODC8,    0x0008
        .equiv ODC9,    0x0009


;----- PADCFG1 Bits -----------------------------------------------------
        .equiv SMBDEL0, 0x0004
        .equiv SMBDEL1, 0x0005


;----- AD1CON1 Bits -----------------------------------------------------
        .equiv DONE,    0x0000
        .equiv SAMP,    0x0001
        .equiv ASAM,    0x0002
        .equiv MODE12,  0x000A
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
        .equiv NVCFG,   0x000D

        .equiv SMPI0,   0x0002
        .equiv SMPI1,   0x0003
        .equiv SMPI2,   0x0004
        .equiv SMPI3,   0x0005
        .equiv SMPI4,   0x0006
        .equiv VCFG0,   0x000E
        .equiv VCFG1,   0x000F


;----- AD1CON3 Bits -----------------------------------------------------
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


;----- AD1CSSH Bits -----------------------------------------------------
        .equiv CSS16,   0x0000
        .equiv CSS17,   0x0001
        .equiv CSS26,   0x000A
        .equiv CSS27,   0x000B
        .equiv CSS28,   0x000C
        .equiv CSS29,   0x000D
        .equiv CSS30,   0x000E

        .equiv CSSL16,  0x0000
        .equiv CSSL17,  0x0001
        .equiv CSSL26,  0x000A
        .equiv CSSL27,  0x000B
        .equiv CSSL28,  0x000C
        .equiv CSSL29,  0x000D
        .equiv CSSL30,  0x000E


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


;----- AD1CON5 Bits -----------------------------------------------------
        .equiv BGREQ,   0x000C
        .equiv CTMUREQ, 0x000D
        .equiv LPEN,    0x000E
        .equiv ASEN,    0x000F

        .equiv CM0,     0x0000
        .equiv CM1,     0x0001
        .equiv WM0,     0x0002
        .equiv WM1,     0x0003
        .equiv ASINT0,  0x0008
        .equiv ASINT1,  0x0009


;----- AD1CHITH Bits -----------------------------------------------------
        .equiv CHH16,   0x0000
        .equiv CHH17,   0x0001


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

        .equiv EDG1SEL0, 0x0002
        .equiv EDG1SEL1, 0x0003
        .equiv EDG1SEL2, 0x0004
        .equiv EDG1SEL3, 0x0005
        .equiv EDG2EDGE, 0x0007
        .equiv EDG1,    0x0008
        .equiv EDG2,    0x0009
        .equiv EDG2SEL0, 0x000A
        .equiv EDG2SEL1, 0x000B
        .equiv EDG2SEL2, 0x000C
        .equiv EDG2SEL3, 0x000D
        .equiv EDG1EDGE, 0x000F


;----- CTMUICON Bits -----------------------------------------------------
        .equiv IRNG0,   0x0008
        .equiv IRNG1,   0x0009
        .equiv ITRIM0,  0x000A
        .equiv ITRIM1,  0x000B
        .equiv ITRIM2,  0x000C
        .equiv ITRIM3,  0x000D
        .equiv ITRIM4,  0x000E
        .equiv ITRIM5,  0x000F


;----- AD1CTMUENH Bits -----------------------------------------------------
        .equiv CTMEN16, 0x0000
        .equiv CTMEN17, 0x0001
        .equiv CTMEN26, 0x000A
        .equiv CTMEN27, 0x000B
        .equiv CTMEN28, 0x000C
        .equiv CTMEN29, 0x000D
        .equiv CTMEN30, 0x000E


;----- AD1CTMUENL Bits -----------------------------------------------------
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


;----- ANSA Bits -----------------------------------------------------
        .equiv ANSA0,   0x0000
        .equiv ANSA1,   0x0001
        .equiv ANSA2,   0x0002
        .equiv ANSA3,   0x0003


;----- ANSELA Bits -----------------------------------------------------
       ;.equiv ANSA0,   0x0000
       ;.equiv ANSA1,   0x0001
       ;.equiv ANSA2,   0x0002
       ;.equiv ANSA3,   0x0003


;----- ANSB Bits -----------------------------------------------------
        .equiv ANSB0,   0x0000
        .equiv ANSB1,   0x0001
        .equiv ANSB2,   0x0002
        .equiv ANSB3,   0x0003
        .equiv ANSB4,   0x0004
        .equiv ANSB12,  0x000C
        .equiv ANSB13,  0x000D
        .equiv ANSB14,  0x000E
        .equiv ANSB15,  0x000F


;----- ANSELB Bits -----------------------------------------------------
       ;.equiv ANSB0,   0x0000
       ;.equiv ANSB1,   0x0001
       ;.equiv ANSB2,   0x0002
       ;.equiv ANSB3,   0x0003
       ;.equiv ANSB4,   0x0004
       ;.equiv ANSB12,  0x000C
       ;.equiv ANSB13,  0x000D
       ;.equiv ANSB14,  0x000E
       ;.equiv ANSB15,  0x000F


;----- ANSC Bits -----------------------------------------------------
        .equiv ANSC0,   0x0000
        .equiv ANSC1,   0x0001
        .equiv ANSC2,   0x0002


;----- ANSELC Bits -----------------------------------------------------
       ;.equiv ANSC0,   0x0000
       ;.equiv ANSC1,   0x0001
       ;.equiv ANSC2,   0x0002


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
        .equiv PWCSPRE, 0x000C
        .equiv PWCCPRE, 0x000D
        .equiv PWCPOL,  0x000E
        .equiv PWCEN,   0x000F


;----- CMSTAT Bits -----------------------------------------------------
        .equiv C1OUT,   0x0000
        .equiv C2OUT,   0x0001
        .equiv C3OUT,   0x0002
        .equiv C1EVT,   0x0008
        .equiv C2EVT,   0x0009
        .equiv C3EVT,   0x000A
        .equiv CMIDL,   0x000F


;----- CVRCON Bits -----------------------------------------------------
        .equiv CVRSS,   0x0005
        .equiv CVROE,   0x0006
        .equiv CVREN,   0x0007

        .equiv CVR0,    0x0000
        .equiv CVR1,    0x0001
        .equiv CVR2,    0x0002
        .equiv CVR3,    0x0003
        .equiv CVR4,    0x0004


;----- CM1CON Bits -----------------------------------------------------
        .equiv CREF,    0x0004
        .equiv COUT,    0x0008
        .equiv CEVT,    0x0009
        .equiv CLPWR,   0x000C
        .equiv CPOL,    0x000D
        .equiv COE,     0x000E
        .equiv CON,     0x000F

        .equiv CCH0,    0x0000
        .equiv CCH1,    0x0001
        .equiv EVPOL0,  0x0006
        .equiv EVPOL1,  0x0007


;----- CM2CON Bits -----------------------------------------------------
       ;.equiv CREF,    0x0004
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CLPWR,   0x000C
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007


;----- CM3CON Bits -----------------------------------------------------
       ;.equiv CREF,    0x0004
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CLPWR,   0x000C
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007


;----- CRCCON1 Bits -----------------------------------------------------
        .equiv LENDIAN, 0x0003
        .equiv CRCGO,   0x0004
        .equiv CRCISEL, 0x0005
        .equiv CRCMPT,  0x0006
        .equiv CRCFUL,  0x0007
        .equiv CSIDL,   0x000D
        .equiv CRCEN,   0x000F

        .equiv PLEN0,   0x0000
        .equiv PLEN1,   0x0001
        .equiv PLEN2,   0x0002
        .equiv PLEN3,   0x0003
        .equiv VWORD0,  0x0008
        .equiv VWORD1,  0x0009
        .equiv VWORD2,  0x000A
        .equiv VWORD3,  0x000B
        .equiv VWORD4,  0x000C


;----- CRCCON2 Bits -----------------------------------------------------
       ;.equiv PLEN0,   0x0000
       ;.equiv PLEN1,   0x0001
       ;.equiv PLEN2,   0x0002
       ;.equiv PLEN3,   0x0003
        .equiv PLEN4,   0x0004
        .equiv DWIDTH0, 0x0008
        .equiv DWIDTH1, 0x0009
        .equiv DWIDTH2, 0x000A
        .equiv DWIDTH3, 0x000B
        .equiv DWIDTH4, 0x000C


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


;----- CRCXORL Bits -----------------------------------------------------
       ;.equiv X1,      0x0001
       ;.equiv X2,      0x0002
       ;.equiv X3,      0x0003
       ;.equiv X4,      0x0004
       ;.equiv X5,      0x0005
       ;.equiv X6,      0x0006
       ;.equiv X7,      0x0007
       ;.equiv X8,      0x0008
       ;.equiv X9,      0x0009
       ;.equiv X10,     0x000A
       ;.equiv X11,     0x000B
       ;.equiv X12,     0x000C
       ;.equiv X13,     0x000D
       ;.equiv X14,     0x000E
       ;.equiv X15,     0x000F


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


;----- RCON Bits -----------------------------------------------------
        .equiv POR,     0x0000
        .equiv BOR,     0x0001
        .equiv IDLE,    0x0002
        .equiv SLEEP,   0x0003
        .equiv WDTO,    0x0004
        .equiv SWDTEN,  0x0005
        .equiv SWR,     0x0006
        .equiv EXTR,    0x0007
        .equiv PMSLP,   0x0008
        .equiv CM_RCON, 0x0009
        .equiv DPSLP,   0x000A
        .equiv LVREN,   0x000C
        .equiv SBOREN,  0x000D
        .equiv IOPUWR,  0x000E
        .equiv TRAPR,   0x000F

        .equiv VREGS,   0x0008
        .equiv RETEN,   0x000C


;----- OSCCON Bits -----------------------------------------------------
        .equiv OSWEN,   0x0000
        .equiv SOSCEN,  0x0001
        .equiv SOSCDRV, 0x0002
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


;----- HLVDCON Bits -----------------------------------------------------
        .equiv IRVST,   0x0005
        .equiv BGVST,   0x0006
        .equiv VDIR,    0x0007
        .equiv HLSIDL,  0x000D
        .equiv HLVDEN,  0x000F

        .equiv HLVDL0,  0x0000
        .equiv HLVDL1,  0x0001
        .equiv HLVDL2,  0x0002
        .equiv HLVDL3,  0x0003


;----- DSCON Bits -----------------------------------------------------
        .equiv RELEASE, 0x0000
        .equiv DSBOR,   0x0001
        .equiv ULPWUDIS, 0x0002
        .equiv RTCCWDIS, 0x0008
        .equiv DSEN,    0x000F


;----- DSWAKE Bits -----------------------------------------------------
        .equiv DSPOR,   0x0000
        .equiv DSMCLR,  0x0002
        .equiv DSRTCC,  0x0003
        .equiv DSWDT,   0x0004
        .equiv DSFLT,   0x0007
        .equiv DSINT0,  0x0008


;----- DSWSRC Bits -----------------------------------------------------
       ;.equiv DSPOR,   0x0000
       ;.equiv DSMCLR,  0x0002
       ;.equiv DSRTCC,  0x0003
       ;.equiv DSWDT,   0x0004
       ;.equiv DSFLT,   0x0007
       ;.equiv DSINT0,  0x0008


;----- NVMCON Bits -----------------------------------------------------
        .equiv ERASE,   0x0006
        .equiv PGMONLY, 0x000C
        .equiv WRERR,   0x000D
        .equiv WREN,    0x000E
        .equiv WR,      0x000F

        .equiv NVMOP0,  0x0000
        .equiv NVMOP1,  0x0001
        .equiv NVMOP2,  0x0002
        .equiv NVMOP3,  0x0003
        .equiv NVMOP4,  0x0004
        .equiv NVMOP5,  0x0005


;----- NVMKEY Bits -----------------------------------------------------
        .equiv NVMKEY0, 0x0000
        .equiv NVMKEY1, 0x0001
        .equiv NVMKEY2, 0x0002
        .equiv NVMKEY3, 0x0003
        .equiv NVMKEY4, 0x0004
        .equiv NVMKEY5, 0x0005
        .equiv NVMKEY6, 0x0006
        .equiv NVMKEY7, 0x0007


;----- ULPWCON Bits -----------------------------------------------------
        .equiv ULPSINK, 0x0008
        .equiv ULPSIDL, 0x000D
        .equiv ULPEN,   0x000F


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
        .equiv IC1MD,   0x0008
        .equiv IC2MD,   0x0009
        .equiv IC3MD,   0x000A


;----- PMD3 Bits -----------------------------------------------------
        .equiv I2C2MD,  0x0001
        .equiv CRCPMD,  0x0007
        .equiv RTCCMD,  0x0009
        .equiv CMPMD,   0x000A


;----- PMD4 Bits -----------------------------------------------------
        .equiv HLVDMD,  0x0001
        .equiv CTMUMD,  0x0002
        .equiv REFOMD,  0x0003
        .equiv EEMD,    0x0004
        .equiv ULPWUMD, 0x0007




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
;     BWRP_ON              Enabled
;     BWRP_OFF             Disabled
;
;   Boot segment Protect:
;     BSS_HI5K             High Security Boot Protect 000200h - 002BFEh
;     BSS_HI2K             High Security Boot Protect 000200h - 0015FEh
;     BSS_HI1K             High Security Boot Protect 000200h - 000AFEh
;     BSS_STD5K            Standard Security Boot Protect 000200h - 002BFEh
;     BSS_STD2K            Standard Security Boot Protect 000200h - 0015FEh
;     BSS_STD1K            Standard Security Boot Protect 000200h - 000AFEh
;     BSS_OFF              No boot program flash segment
;
        .equiv BWRP_ON,         0xFFFE ; Enabled
        .equiv BWRP_OFF,        0xFFFF ; Disabled

        .equiv BSS_HI5K,        0xFFF1 ; High Security Boot Protect 000200h - 002BFEh
        .equiv BSS_HI2K,        0xFFF3 ; High Security Boot Protect 000200h - 0015FEh
        .equiv BSS_HI1K,        0xFFF5 ; High Security Boot Protect 000200h - 000AFEh
        .equiv BSS_STD5K,       0xFFF9 ; Standard Security Boot Protect 000200h - 002BFEh
        .equiv BSS_STD2K,       0xFFFB ; Standard Security Boot Protect 000200h - 0015FEh
        .equiv BSS_STD1K,       0xFFFD ; Standard Security Boot Protect 000200h - 000AFEh
        .equiv BSS_OFF,         0xFFFF ; No boot program flash segment


;----- FGS (0xf80004) --------------------------------------------------
;
;  The following settings are available for FGS:
;
;   General Segment Write Protect:
;     GWRP_ON              General segment is write-protected
;     GWRP_OFF             General segment may be written
;
;   General Segment Code Protect:
;     GSS0_ON              Standard security enabled
;     GSS0_OFF             No Protection
;
        .equiv GWRP_ON,         0xFFFE ; General segment is write-protected
        .equiv GWRP_OFF,        0xFFFF ; General segment may be written

        .equiv GSS0_ON,         0xFFFD ; Standard security enabled
        .equiv GSS0_OFF,        0xFFFF ; No Protection


;----- FOSCSEL (0xf80006) --------------------------------------------------
;
;  The following settings are available for FOSCSEL:
;
;   Oscillator Select:
;     FNOSC_FRC            Fast RC Oscillator (FRC)
;     FNOSC_FRCPLL         Fast RC Oscillator with Postscaler and PLL Module (FRCDIV+PLL)
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary oscillator with PLL Module (HS+PLL, EC+PLL)
;     FNOSC_SOSC           Secondary oscillator (SOSC)
;     FNOSC_LPRC           Low Power RC oscillator (LPRC)
;     FNOSC_LPFRC          500kHz Low-Power FRC oscillator with Postscaler(LPFRCDIV)
;     FNOSC_FRCDIV         8MHz FRC oscillator With Postscaler (FRCDIV)
;
;   SOSC Source Type:
;     SOSCSRC_DIG          Digital Mode for use with external source
;     SOSCSRC_ANA          Analog Mode for use with crystal
;
;   LPRC Oscillator Power and Accuracy:
;     LPRCSEL_LP           Low Power, Low Accuracy Mode
;     LPRCSEL_HP           High Power, High Accuracy Mode
;
;   Internal External Switch Over bit:
;     IESO_OFF             Internal External Switchover mode disabled (Two-speed Start-up disabled)
;     IESO_ON              Internal External Switchover mode enabled (Two-speed Start-up enabled)
;
        .equiv FNOSC_FRC,       0xFFF8 ; Fast RC Oscillator (FRC)
        .equiv FNOSC_FRCPLL,    0xFFF9 ; Fast RC Oscillator with Postscaler and PLL Module (FRCDIV+PLL)
        .equiv FNOSC_PRI,       0xFFFA ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFFFB ; Primary oscillator with PLL Module (HS+PLL, EC+PLL)
        .equiv FNOSC_SOSC,      0xFFFC ; Secondary oscillator (SOSC)
        .equiv FNOSC_LPRC,      0xFFFD ; Low Power RC oscillator (LPRC)
        .equiv FNOSC_LPFRC,     0xFFFE ; 500kHz Low-Power FRC oscillator with Postscaler(LPFRCDIV)
        .equiv FNOSC_FRCDIV,    0xFFFF ; 8MHz FRC oscillator With Postscaler (FRCDIV)

        .equiv SOSCSRC_DIG,     0xFFDF ; Digital Mode for use with external source
        .equiv SOSCSRC_ANA,     0xFFFF ; Analog Mode for use with crystal

        .equiv LPRCSEL_LP,      0xFFBF ; Low Power, Low Accuracy Mode
        .equiv LPRCSEL_HP,      0xFFFF ; High Power, High Accuracy Mode

        .equiv IESO_OFF,        0xFF7F ; Internal External Switchover mode disabled (Two-speed Start-up disabled)
        .equiv IESO_ON,         0xFFFF ; Internal External Switchover mode enabled (Two-speed Start-up enabled)


;----- FOSC (0xf80008) --------------------------------------------------
;
;  The following settings are available for FOSC:
;
;   Primary Oscillator Configuration bits:
;     POSCMOD_EC           External clock mode selected
;     POSCMOD_XT           XT oscillator mode selected
;     POSCMOD_HS           HS oscillator mode selected
;     POSCMOD_NONE         Primary oscillator disabled
;
;   CLKO Enable Configuration bit:
;     OSCIOFNC_OFF         CLKO output disabled
;     OSCIOFNC_ON          CLKO output signal is active on the OSCO pin
;
;   Primary Oscillator Frequency Range Configuration bits:
;     POSCFREQ_LS          Primary oscillator/external clock input frequency less than 100kHz
;     POSCFREQ_MS          Primary oscillator/external clock input frequency between 100kHz and 8MHz
;     POSCFREQ_HS          Primary oscillator/external clock input frequency greater than 8MHz
;
;   SOSC Power Selection Configuration bits:
;     SOSCSEL_SOSCLP       Secondary Oscillator configured for low-power operation
;     SOSCSEL_SOSCHP       Secondary Oscillator configured for high-power operation
;
;   Clock Switching and Monitor Selection:
;     FCKSM_CSECME         Both Clock Switching and Fail-safe Clock Monitor are enabled
;     FCKSM_CSECMD         Clock Switching is enabled, Fail-safe Clock Monitor is disabled
;     FCKSM_CSDCMD         Both Clock Switching and Fail-safe Clock Monitor are disabled
;
        .equiv POSCMOD_EC,      0xFFFC ; External clock mode selected
        .equiv POSCMOD_XT,      0xFFFD ; XT oscillator mode selected
        .equiv POSCMOD_HS,      0xFFFE ; HS oscillator mode selected
        .equiv POSCMOD_NONE,    0xFFFF ; Primary oscillator disabled

        .equiv OSCIOFNC_OFF,    0xFFFB ; CLKO output disabled
        .equiv OSCIOFNC_ON,     0xFFFF ; CLKO output signal is active on the OSCO pin

        .equiv POSCFREQ_LS,     0xFFEF ; Primary oscillator/external clock input frequency less than 100kHz
        .equiv POSCFREQ_MS,     0xFFF7 ; Primary oscillator/external clock input frequency between 100kHz and 8MHz
        .equiv POSCFREQ_HS,     0xFFFF ; Primary oscillator/external clock input frequency greater than 8MHz

        .equiv SOSCSEL_SOSCLP,  0xFFDF ; Secondary Oscillator configured for low-power operation
        .equiv SOSCSEL_SOSCHP,  0xFFFF ; Secondary Oscillator configured for high-power operation

        .equiv FCKSM_CSECME,    0xFF3F ; Both Clock Switching and Fail-safe Clock Monitor are enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Clock Switching is enabled, Fail-safe Clock Monitor is disabled
        .equiv FCKSM_CSDCMD,    0xFFBF ; Both Clock Switching and Fail-safe Clock Monitor are disabled


;----- FWDT (0xf8000a) --------------------------------------------------
;
;  The following settings are available for FWDT:
;
;   Watchdog Timer Postscale Select bits:
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
;     WDTPS_PS1024         1:1024
;     WDTPS_PS2048         1:2048
;     WDTPS_PS4096         1:4096
;     WDTPS_PS8192         1:8192
;     WDTPS_PS16384        1:16384
;     WDTPS_PS32768        1:32768
;
;   WDT Prescaler bit:
;     FWPSA_PR32           WDT prescaler ratio of 1:32
;     FWPSA_PR128          WDT prescaler ratio of 1:128
;
;   Watchdog Timer Enable bits:
;     FWDTEN_OFF           WDT disabled in hardware; SWDTEN bit disabled
;     FWDTEN_NOSLP         WDT enabled while device is active and disabled in Sleep; SWDTEN bit disabled
;     FWDTEN_SWON          WDT controlled with the SWDTEN bit setting
;     FWDTEN_ON            WDT enabled in hardware
;
;   Windowed Watchdog Timer Disable bit:
;     WINDIS_ON            Windowed WDT enabled
;     WINDIS_OFF           Standard WDT selected(windowed WDT disabled)
;
        .equiv WDTPS_PS1,       0xFFF0 ; 1:1
        .equiv WDTPS_PS2,       0xFFF1 ; 1:2
        .equiv WDTPS_PS4,       0xFFF2 ; 1:4
        .equiv WDTPS_PS8,       0xFFF3 ; 1:8
        .equiv WDTPS_PS16,      0xFFF4 ; 1:16
        .equiv WDTPS_PS32,      0xFFF5 ; 1:32
        .equiv WDTPS_PS64,      0xFFF6 ; 1:64
        .equiv WDTPS_PS128,     0xFFF7 ; 1:128
        .equiv WDTPS_PS256,     0xFFF8 ; 1:256
        .equiv WDTPS_PS512,     0xFFF9 ; 1:512
        .equiv WDTPS_PS1024,    0xFFFA ; 1:1024
        .equiv WDTPS_PS2048,    0xFFFB ; 1:2048
        .equiv WDTPS_PS4096,    0xFFFC ; 1:4096
        .equiv WDTPS_PS8192,    0xFFFD ; 1:8192
        .equiv WDTPS_PS16384,   0xFFFE ; 1:16384
        .equiv WDTPS_PS32768,   0xFFFF ; 1:32768

        .equiv FWPSA_PR32,      0xFFEF ; WDT prescaler ratio of 1:32
        .equiv FWPSA_PR128,     0xFFFF ; WDT prescaler ratio of 1:128

        .equiv FWDTEN_OFF,      0xFF5F ; WDT disabled in hardware; SWDTEN bit disabled
        .equiv FWDTEN_NOSLP,    0xFF7F ; WDT enabled while device is active and disabled in Sleep; SWDTEN bit disabled
        .equiv FWDTEN_SWON,     0xFFDF ; WDT controlled with the SWDTEN bit setting
        .equiv FWDTEN_ON,       0xFFFF ; WDT enabled in hardware

        .equiv WINDIS_ON,       0xFFBF ; Windowed WDT enabled
        .equiv WINDIS_OFF,      0xFFFF ; Standard WDT selected(windowed WDT disabled)


;----- FPOR (0xf8000c) --------------------------------------------------
;
;  The following settings are available for FPOR:
;
;   Brown-out Reset Enable bits:
;     BOREN_BOR0           Brown-out Reset disabled in hardware, SBOREN bit disabled
;     BOREN_BOR1           Brown-out Rest controlled by SBOREN bit
;     BOREN_BOR2           Brown-out Reset enabled only while device is active and disabled in SLEEP, SBOREN bit disabled
;     BOREN_BOR3           Brown-out Reset enabled in hardware, SBOREN bit disabled
;
;   :
;     LVRCFG_ON            Low Voltage regulator is available and controlled by LVREN bit
;     LVRCFG_OFF           Low Voltage regulator is not available
;
;   Power-up Timer Enable bit:
;     PWRTEN_OFF           PWRT disabled
;     PWRTEN_ON            PWRT enabled
;
;   Alternate I2C1 Pin Mapping bit:
;     I2C1SEL_SEC          Use  Alternate SCL1/ASDA1 Pins For I2C1
;     I2C1SEL_PRI          Use Default SCL1/SDA1 Pins For I2C1
;
;   Brown-out Reset Voltage bits:
;     BORV_LPBOR           Low-power Brown-Out Reset occurs around 2.0V
;     BORV_V30             Brown-out Reset set to Highest Voltage (3.0V)
;     BORV_V27             Brown-out Reset set at 2.7V
;     BORV_V18             Brown-out Reset set to lowest voltage (1.8V)
;
;   MCLR Pin Enable bit:
;     MCLRE_OFF            RA5 input pin enabled,MCLR disabled
;     MCLRE_ON             RA5 input pin disabled,MCLR pin enabled
;
        .equiv BOREN_BOR0,      0xFFFC ; Brown-out Reset disabled in hardware, SBOREN bit disabled
        .equiv BOREN_BOR1,      0xFFFD ; Brown-out Rest controlled by SBOREN bit
        .equiv BOREN_BOR2,      0xFFFE ; Brown-out Reset enabled only while device is active and disabled in SLEEP, SBOREN bit disabled
        .equiv BOREN_BOR3,      0xFFFF ; Brown-out Reset enabled in hardware, SBOREN bit disabled

        .equiv LVRCFG_ON,       0xFFFB ; Low Voltage regulator is available and controlled by LVREN bit
        .equiv LVRCFG_OFF,      0xFFFF ; Low Voltage regulator is not available

        .equiv PWRTEN_OFF,      0xFFF7 ; PWRT disabled
        .equiv PWRTEN_ON,       0xFFFF ; PWRT enabled

        .equiv I2C1SEL_SEC,     0xFFEF ; Use  Alternate SCL1/ASDA1 Pins For I2C1
        .equiv I2C1SEL_PRI,     0xFFFF ; Use Default SCL1/SDA1 Pins For I2C1

        .equiv BORV_LPBOR,      0xFF9F ; Low-power Brown-Out Reset occurs around 2.0V
        .equiv BORV_V30,        0xFFBF ; Brown-out Reset set to Highest Voltage (3.0V)
        .equiv BORV_V27,        0xFFDF ; Brown-out Reset set at 2.7V
        .equiv BORV_V18,        0xFFFF ; Brown-out Reset set to lowest voltage (1.8V)

        .equiv MCLRE_OFF,       0xFF7F ; RA5 input pin enabled,MCLR disabled
        .equiv MCLRE_ON,        0xFFFF ; RA5 input pin disabled,MCLR pin enabled


;----- FICD (0xf8000e) --------------------------------------------------
;
;  The following settings are available for FICD:
;
;   ICD Pin Placement Select bits:
;     ICS_PGx3             EMUC/EMUD share PGC3/PGD3
;     ICS_PGx2             EMUC/EMUD share PGC2/PGD2
;     ICS_PGx1             EMUC/EMUD share PGC1/PGD1
;
        .equiv ICS_PGx3,        0xFFFD ; EMUC/EMUD share PGC3/PGD3
        .equiv ICS_PGx2,        0xFFFE ; EMUC/EMUD share PGC2/PGD2
        .equiv ICS_PGx1,        0xFFFF ; EMUC/EMUD share PGC1/PGD1


;----- FDS (0xf80010) --------------------------------------------------
;
;  The following settings are available for FDS:
;
;   Deep Sleep Watchdog Timer Postscale Select bits:
;     DSWDTPS_DSWDTPS0     1:2 (2.1 ms)
;     DSWDTPS_DSWDTPS1     1:8 (8.3 ms)
;     DSWDTPS_DSWDTPS2     1:32 (33 ms)
;     DSWDTPS_DSWDTPS3     1:128 (132 ms)
;     DSWDTPS_DSWDTPS4     1:512 (528 ms)
;     DSWDTPS_DSWDTPS5     1:2048 (2.1 Seconds)
;     DSWDTPS_DSWDTPS6     1:8192 (8.5 Seconds)
;     DSWDTPS_DSWDTPS7     1:32,768 (34 Seconds)
;     DSWDTPS_DSWDTPS8     1:131,072 (135 Seconds)
;     DSWDTPS_DSWDTPS9     1:524,288 (9 Minutes)
;     DSWDTPS_DSWDTPSA     1:2,097,152 (36 Minutes)
;     DSWDTPS_DSWDTPSB     1:8,388,608 (2.4 Hours)
;     DSWDTPS_DSWDTPSC     1:33,554,432 (9.6 Hours)
;     DSWDTPS_DSWDTPSD     1:134,217,728 (38.5 Hours)
;     DSWDTPS_DSWDTPSE     1:536,870,912 (6.4 Days)
;     DSWDTPS_DSWDTPSF     1:2,147,483,648 (25.7 Days)
;
;   DSWDT Reference Clock Select bit:
;     DSWDTOSC_SOSC        DSWDT uses Secondary Oscillator (SOSC)
;     DSWDTOSC_LPRC        DSWDT uses Low Power RC Oscillator (LPRC)
;
;   Deep Sleep Zero-Power BOR Enable bit:
;     DSBOREN_OFF          Deep Sleep BOR disabled in Deep Sleep
;     DSBOREN_ON           Deep Sleep BOR enabled in Deep Sleep
;
;   Deep Sleep Watchdog Timer Enable bit:
;     DSWDTEN_OFF          DSWDT disabled
;     DSWDTEN_ON           DSWDT enabled
;
        .equiv DSWDTPS_DSWDTPS0, 0xFFF0 ; 1:2 (2.1 ms)
        .equiv DSWDTPS_DSWDTPS1, 0xFFF1 ; 1:8 (8.3 ms)
        .equiv DSWDTPS_DSWDTPS2, 0xFFF2 ; 1:32 (33 ms)
        .equiv DSWDTPS_DSWDTPS3, 0xFFF3 ; 1:128 (132 ms)
        .equiv DSWDTPS_DSWDTPS4, 0xFFF4 ; 1:512 (528 ms)
        .equiv DSWDTPS_DSWDTPS5, 0xFFF5 ; 1:2048 (2.1 Seconds)
        .equiv DSWDTPS_DSWDTPS6, 0xFFF6 ; 1:8192 (8.5 Seconds)
        .equiv DSWDTPS_DSWDTPS7, 0xFFF7 ; 1:32,768 (34 Seconds)
        .equiv DSWDTPS_DSWDTPS8, 0xFFF8 ; 1:131,072 (135 Seconds)
        .equiv DSWDTPS_DSWDTPS9, 0xFFF9 ; 1:524,288 (9 Minutes)
        .equiv DSWDTPS_DSWDTPSA, 0xFFFA ; 1:2,097,152 (36 Minutes)
        .equiv DSWDTPS_DSWDTPSB, 0xFFFB ; 1:8,388,608 (2.4 Hours)
        .equiv DSWDTPS_DSWDTPSC, 0xFFFC ; 1:33,554,432 (9.6 Hours)
        .equiv DSWDTPS_DSWDTPSD, 0xFFFD ; 1:134,217,728 (38.5 Hours)
        .equiv DSWDTPS_DSWDTPSE, 0xFFFE ; 1:536,870,912 (6.4 Days)
        .equiv DSWDTPS_DSWDTPSF, 0xFFFF ; 1:2,147,483,648 (25.7 Days)

        .equiv DSWDTOSC_SOSC,   0xFFEF ; DSWDT uses Secondary Oscillator (SOSC)
        .equiv DSWDTOSC_LPRC,   0xFFFF ; DSWDT uses Low Power RC Oscillator (LPRC)

        .equiv DSBOREN_OFF,     0xFFBF ; Deep Sleep BOR disabled in Deep Sleep
        .equiv DSBOREN_ON,      0xFFFF ; Deep Sleep BOR enabled in Deep Sleep

        .equiv DSWDTEN_OFF,     0xFF7F ; DSWDT disabled
        .equiv DSWDTEN_ON,      0xFFFF ; DSWDT enabled


.LIST
