;==========================================================================
;  PIC24F08KL401 Standard Assembly Include File
; 
;  (c) Copyright 2014 Microchip Technology, All rights reserved
;  Part support version v1.22.A(19-Aug-2014)
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC24F08KL401 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p24F08KL401
;       2. Placing a ".equ" directive before the ".include":
;               .equ __24F08KL401, 1
;               .include "p24F08KL401.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __24F08KL401
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

        .extern IPC9
        .equiv  IPC9L, _IPC9
        .equiv  IPC9H, _IPC9+1

        .extern IPC12
        .equiv  IPC12L, _IPC12
        .equiv  IPC12H, _IPC12+1

        .extern IPC16
        .equiv  IPC16L, _IPC16
        .equiv  IPC16H, _IPC16+1

        .extern IPC18
        .equiv  IPC18L, _IPC18
        .equiv  IPC18H, _IPC18+1

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

        .extern PR2
        .equiv  PR2L, _PR2
        .equiv  PR2H, _PR2+1

        .extern T2CON
        .equiv  T2CONL, _T2CON
        .equiv  T2CONH, _T2CON+1

        .extern TMR3
        .equiv  TMR3L, _TMR3
        .equiv  TMR3H, _TMR3+1

        .extern T3GCON
        .equiv  T3GCONL, _T3GCON
        .equiv  T3GCONH, _T3GCON+1

        .extern T3CON
        .equiv  T3CONL, _T3CON
        .equiv  T3CONH, _T3CON+1

        .extern TMR4
        .equiv  TMR4L, _TMR4
        .equiv  TMR4H, _TMR4+1

        .extern PR4
        .equiv  PR4L, _PR4
        .equiv  PR4H, _PR4+1

        .extern T4CON
        .equiv  T4CONL, _T4CON
        .equiv  T4CONH, _T4CON+1

        .extern CCPTMRS0
        .equiv  CCPTMRS0L, _CCPTMRS0
        .equiv  CCPTMRS0H, _CCPTMRS0+1

        .extern CCP1CON
        .equiv  CCP1CONL, _CCP1CON
        .equiv  CCP1CONH, _CCP1CON+1

        .extern ECCP1CON
        .equiv  ECCP1CONL, _ECCP1CON
        .equiv  ECCP1CONH, _ECCP1CON+1

        .extern CCPR1L
        .equiv  CCPR1LL, _CCPR1L
        .equiv  CCPR1LH, _CCPR1L+1

        .extern CCPR1H
        .equiv  CCPR1HL, _CCPR1H
        .equiv  CCPR1HH, _CCPR1H+1

        .extern ECCP1DEL
        .equiv  ECCP1DELL, _ECCP1DEL
        .equiv  ECCP1DELH, _ECCP1DEL+1

        .extern PWM1CON
        .equiv  PWM1CONL, _PWM1CON
        .equiv  PWM1CONH, _PWM1CON+1

        .extern ECCP1AS
        .equiv  ECCP1ASL, _ECCP1AS
        .equiv  ECCP1ASH, _ECCP1AS+1

        .extern PSTR1CON
        .equiv  PSTR1CONL, _PSTR1CON
        .equiv  PSTR1CONH, _PSTR1CON+1

        .extern CCP2CON
        .equiv  CCP2CONL, _CCP2CON
        .equiv  CCP2CONH, _CCP2CON+1

        .extern CCPR2L
        .equiv  CCPR2LL, _CCPR2L
        .equiv  CCPR2LH, _CCPR2L+1

        .extern CCPR2H
        .equiv  CCPR2HL, _CCPR2H
        .equiv  CCPR2HH, _CCPR2H+1

        .extern CCP3CON
        .equiv  CCP3CONL, _CCP3CON
        .equiv  CCP3CONH, _CCP3CON+1

        .extern CCPR3L
        .equiv  CCPR3LL, _CCPR3L
        .equiv  CCPR3LH, _CCPR3L+1

        .extern CCPR3H
        .equiv  CCPR3HL, _CCPR3H
        .equiv  CCPR3HH, _CCPR3H+1

        .extern SPI1BUF
        .equiv  SPI1BUFL, _SPI1BUF
        .equiv  SPI1BUFH, _SPI1BUF+1

        .extern SSP1BUF
        .equiv  SSP1BUFL, _SSP1BUF
        .equiv  SSP1BUFH, _SSP1BUF+1

        .extern SSP1CON1
        .equiv  SSP1CON1L, _SSP1CON1
        .equiv  SSP1CON1H, _SSP1CON1+1

        .extern SSP1CON2
        .equiv  SSP1CON2L, _SSP1CON2
        .equiv  SSP1CON2H, _SSP1CON2+1

        .extern SSP1CON3
        .equiv  SSP1CON3L, _SSP1CON3
        .equiv  SSP1CON3H, _SSP1CON3+1

        .extern SSP1STAT
        .equiv  SSP1STATL, _SSP1STAT
        .equiv  SSP1STATH, _SSP1STAT+1

        .extern I2C1ADD
        .equiv  I2C1ADDL, _I2C1ADD
        .equiv  I2C1ADDH, _I2C1ADD+1

        .extern SSP1ADD
        .equiv  SSP1ADDL, _SSP1ADD
        .equiv  SSP1ADDH, _SSP1ADD+1

        .extern I2C1MSK
        .equiv  I2C1MSKL, _I2C1MSK
        .equiv  I2C1MSKH, _I2C1MSK+1

        .extern SSP1MSK
        .equiv  SSP1MSKL, _SSP1MSK
        .equiv  SSP1MSKH, _SSP1MSK+1

        .extern SPI2BUF
        .equiv  SPI2BUFL, _SPI2BUF
        .equiv  SPI2BUFH, _SPI2BUF+1

        .extern SSP2BUF
        .equiv  SSP2BUFL, _SSP2BUF
        .equiv  SSP2BUFH, _SSP2BUF+1

        .extern SSP2CON1
        .equiv  SSP2CON1L, _SSP2CON1
        .equiv  SSP2CON1H, _SSP2CON1+1

        .extern SSP2CON2
        .equiv  SSP2CON2L, _SSP2CON2
        .equiv  SSP2CON2H, _SSP2CON2+1

        .extern SSP2CON3
        .equiv  SSP2CON3L, _SSP2CON3
        .equiv  SSP2CON3H, _SSP2CON3+1

        .extern SSP2STAT
        .equiv  SSP2STATL, _SSP2STAT
        .equiv  SSP2STATH, _SSP2STAT+1

        .extern I2C2ADD
        .equiv  I2C2ADDL, _I2C2ADD
        .equiv  I2C2ADDH, _I2C2ADD+1

        .extern SSP2ADD
        .equiv  SSP2ADDL, _SSP2ADD
        .equiv  SSP2ADDH, _SSP2ADD+1

        .extern I2C2MSK
        .equiv  I2C2MSKL, _I2C2MSK
        .equiv  I2C2MSKH, _I2C2MSK+1

        .extern SSP2MSK
        .equiv  SSP2MSKL, _SSP2MSK
        .equiv  SSP2MSKH, _SSP2MSK+1

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

        .extern PADCFG1
        .equiv  PADCFG1L, _PADCFG1
        .equiv  PADCFG1H, _PADCFG1+1

        .extern ADC1BUF0
        .equiv  ADC1BUF0L, _ADC1BUF0
        .equiv  ADC1BUF0H, _ADC1BUF0+1

        .extern ADC1BUF1
        .equiv  ADC1BUF1L, _ADC1BUF1
        .equiv  ADC1BUF1H, _ADC1BUF1+1

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

        .extern AD1CSSL
        .equiv  AD1CSSLL, _AD1CSSL
        .equiv  AD1CSSLH, _AD1CSSL+1

        .extern ANCFG
        .equiv  ANCFGL, _ANCFG
        .equiv  ANCFGH, _ANCFG+1

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

        .extern PMDIS1
        .equiv  PMDIS1L, _PMDIS1
        .equiv  PMDIS1H, _PMDIS1+1

        .extern PMD2
        .equiv  PMD2L, _PMD2
        .equiv  PMD2H, _PMD2+1

        .extern PMDIS2
        .equiv  PMDIS2L, _PMDIS2
        .equiv  PMDIS2H, _PMDIS2+1

        .extern PMD3
        .equiv  PMD3L, _PMD3
        .equiv  PMD3H, _PMD3+1

        .extern PMDIS3
        .equiv  PMDIS3L, _PMDIS3
        .equiv  PMDIS3H, _PMDIS3+1

        .extern PMD4
        .equiv  PMD4L, _PMD4
        .equiv  PMD4H, _PMD4+1

        .extern PMDIS4
        .equiv  PMDIS4L, _PMDIS4
        .equiv  PMDIS4H, _PMDIS4+1

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
        .equiv CN8PDE,  0x0008
        .equiv CN11PDE, 0x000B
        .equiv CN12PDE, 0x000C
        .equiv CN13PDE, 0x000D
        .equiv CN14PDE, 0x000E


;----- CNPD2 Bits -----------------------------------------------------
        .equiv CN21PDE, 0x0005
        .equiv CN22PDE, 0x0006
        .equiv CN23PDE, 0x0007
        .equiv CN29PDE, 0x000D
        .equiv CN30PDE, 0x000E


;----- CNEN1 Bits -----------------------------------------------------
        .equiv CN0IE,   0x0000
        .equiv CN1IE,   0x0001
        .equiv CN2IE,   0x0002
        .equiv CN3IE,   0x0003
        .equiv CN4IE,   0x0004
        .equiv CN5IE,   0x0005
        .equiv CN6IE,   0x0006
        .equiv CN8IE,   0x0008
        .equiv CN11IE,  0x000B
        .equiv CN12IE,  0x000C
        .equiv CN13IE,  0x000D
        .equiv CN14IE,  0x000E


;----- CNEN2 Bits -----------------------------------------------------
        .equiv CN21IE,  0x0005
        .equiv CN22IE,  0x0006
        .equiv CN23IE,  0x0007
        .equiv CN29IE,  0x000D
        .equiv CN30IE,  0x000E


;----- CNPU1 Bits -----------------------------------------------------
        .equiv CN0PUE,  0x0000
        .equiv CN1PUE,  0x0001
        .equiv CN2PUE,  0x0002
        .equiv CN3PUE,  0x0003
        .equiv CN4PUE,  0x0004
        .equiv CN5PUE,  0x0005
        .equiv CN6PUE,  0x0006
        .equiv CN8PUE,  0x0008
        .equiv CN11PUE, 0x000B
        .equiv CN12PUE, 0x000C
        .equiv CN13PUE, 0x000D
        .equiv CN14PUE, 0x000E


;----- CNPU2 Bits -----------------------------------------------------
        .equiv CN21PUE, 0x0005
        .equiv CN22PUE, 0x0006
        .equiv CN23PUE, 0x0007
        .equiv CN29PUE, 0x000D
        .equiv CN30PUE, 0x000E


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
        .equiv CCP1IF,  0x0002
        .equiv T1IF,    0x0003
        .equiv CCP2IF,  0x0006
        .equiv T2IF,    0x0007
        .equiv T3IF,    0x0008
        .equiv U1RXIF,  0x000B
        .equiv U1TXIF,  0x000C
        .equiv AD1IF,   0x000D
        .equiv NVMIF,   0x000F


;----- IFS1 Bits -----------------------------------------------------
        .equiv SSP1IF,  0x0000
        .equiv BCL1IF,  0x0001
        .equiv CMIF,    0x0002
        .equiv CNIF,    0x0003
        .equiv INT1IF,  0x0004
        .equiv CCP3IF,  0x0009
        .equiv T4IF,    0x000B
        .equiv INT2IF,  0x000D
        .equiv U2RXIF,  0x000E
        .equiv U2TXIF,  0x000F


;----- IFS2 Bits -----------------------------------------------------
        .equiv T3GIF,   0x0005


;----- IFS3 Bits -----------------------------------------------------
        .equiv SSP2IF,  0x0001
        .equiv BCL2IF,  0x0002


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1ERIF,  0x0001
        .equiv U2ERIF,  0x0002
        .equiv HLVDIF,  0x0008


;----- IFS5 Bits -----------------------------------------------------
        .equiv ULPWUIF, 0x0000


;----- IEC0 Bits -----------------------------------------------------
        .equiv INT0IE,  0x0000
        .equiv CCP1IE,  0x0002
        .equiv T1IE,    0x0003
        .equiv CCP2IE,  0x0006
        .equiv T2IE,    0x0007
        .equiv T3IE,    0x0008
        .equiv U1RXIE,  0x000B
        .equiv U1TXIE,  0x000C
        .equiv AD1IE,   0x000D
        .equiv NVMIE,   0x000F


;----- IEC1 Bits -----------------------------------------------------
        .equiv SSP1IE,  0x0000
        .equiv BCL1IE,  0x0001
        .equiv CMIE,    0x0002
        .equiv CNIE,    0x0003
        .equiv INT1IE,  0x0004
        .equiv CCP3IE,  0x0009
        .equiv T4IE,    0x000B
        .equiv INT2IE,  0x000D
        .equiv U2RXIE,  0x000E
        .equiv U2TXIE,  0x000F


;----- IEC2 Bits -----------------------------------------------------
        .equiv T3GIE,   0x0005


;----- IEC3 Bits -----------------------------------------------------
        .equiv SSP2IE,  0x0001
        .equiv BCL2IE,  0x0002


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1ERIE,  0x0001
        .equiv U2ERIE,  0x0002
        .equiv HLVDIE,  0x0008


;----- IEC5 Bits -----------------------------------------------------
        .equiv ULPWUIE, 0x0000


;----- IPC0 Bits -----------------------------------------------------
        .equiv INT0IP0, 0x0000
        .equiv INT0IP1, 0x0001
        .equiv INT0IP2, 0x0002
        .equiv CCP1IP0, 0x0008
        .equiv CCP1IP1, 0x0009
        .equiv CCP1IP2, 0x000A
        .equiv T1IP0,   0x000C
        .equiv T1IP1,   0x000D
        .equiv T1IP2,   0x000E


;----- IPC1 Bits -----------------------------------------------------
        .equiv CCP2IP0, 0x0008
        .equiv CCP2IP1, 0x0009
        .equiv CCP2IP2, 0x000A
        .equiv T2IP0,   0x000C
        .equiv T2IP1,   0x000D
        .equiv T2IP2,   0x000E


;----- IPC2 Bits -----------------------------------------------------
        .equiv T3IP0,   0x0000
        .equiv T3IP1,   0x0001
        .equiv T3IP2,   0x0002
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
        .equiv SSP1IP0, 0x0000
        .equiv SSP1IP1, 0x0001
        .equiv SSP1IP2, 0x0002
        .equiv BCL1IP0, 0x0004
        .equiv BCL1IP1, 0x0005
        .equiv BCL1IP2, 0x0006
        .equiv CMIP0,   0x0008
        .equiv CMIP1,   0x0009
        .equiv CMIP2,   0x000A
        .equiv CNIP0,   0x000C
        .equiv CNIP1,   0x000D
        .equiv CNIP2,   0x000E


;----- IPC5 Bits -----------------------------------------------------
        .equiv INT1IP0, 0x0000
        .equiv INT1IP1, 0x0001
        .equiv INT1IP2, 0x0002


;----- IPC6 Bits -----------------------------------------------------
        .equiv CCP3IP0, 0x0004
        .equiv CCP3IP1, 0x0005
        .equiv CCP3IP2, 0x0006
        .equiv T4IP0,   0x000C
        .equiv T4IP1,   0x000D
        .equiv T4IP2,   0x000E


;----- IPC7 Bits -----------------------------------------------------
        .equiv INT2IP0, 0x0004
        .equiv INT2IP1, 0x0005
        .equiv INT2IP2, 0x0006
        .equiv U2RXIP0, 0x0008
        .equiv U2RXIP1, 0x0009
        .equiv U2RXIP2, 0x000A
        .equiv U2TXIP0, 0x000C
        .equiv U2TXIP1, 0x000D
        .equiv U2TXIP2, 0x000E


;----- IPC9 Bits -----------------------------------------------------
        .equiv T3GIP0,  0x0004
        .equiv T3GIP1,  0x0005
        .equiv T3GIP2,  0x0006


;----- IPC12 Bits -----------------------------------------------------
        .equiv SSP2IP0, 0x0004
        .equiv SSP2IP1, 0x0005
        .equiv SSP2IP2, 0x0006
        .equiv BCL2IP0, 0x0008
        .equiv BCL2IP1, 0x0009
        .equiv BCL2IP2, 0x000A


;----- IPC16 Bits -----------------------------------------------------
        .equiv U1ERIP0, 0x0004
        .equiv U1ERIP1, 0x0005
        .equiv U1ERIP2, 0x0006
        .equiv U2ERIP0, 0x0008
        .equiv U2ERIP1, 0x0009
        .equiv U2ERIP2, 0x000A


;----- IPC18 Bits -----------------------------------------------------
        .equiv HLVDIP0, 0x0000
        .equiv HLVDIP1, 0x0001
        .equiv HLVDIP2, 0x0002


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
        .equiv TCS_T1CON, 0x0001
        .equiv TSYNC,   0x0002
        .equiv TGATE_T1CON, 0x0006
        .equiv TSIDL,   0x000D
        .equiv TON_T1CON, 0x000F

        .equiv TCKPS0,  0x0004
        .equiv TCKPS1,  0x0005
        .equiv TECS0,   0x0008
        .equiv TECS1,   0x0009


        .equiv T1ECS0,  0x0008
        .equiv T1ECS1,  0x0009


;----- T2CON Bits -----------------------------------------------------
        .equiv TMR2ON,  0x0002

        .equiv TON_T2CON, 0x0002

        .equiv T2CKPS0, 0x0000
        .equiv T2CKPS1, 0x0001
        .equiv T2OUTPS0, 0x0003
        .equiv T2OUTPS1, 0x0004
        .equiv T2OUTPS2, 0x0005
        .equiv T2OUTPS3, 0x0006


;----- T3GCON Bits -----------------------------------------------------
        .equiv T3GVAL,  0x0002
        .equiv T3GGO,   0x0003
        .equiv T3GSPM,  0x0004
        .equiv T3GTM,   0x0005
        .equiv T3GPOL,  0x0006
        .equiv TMR3GE,  0x0007

        .equiv T3GSS0,  0x0000
        .equiv T3GSS1,  0x0001
        .equiv NOT_T3DONE, 0x0003

        .equiv TGVAL,   0x0002
        .equiv TGGO,    0x0003
        .equiv TGSE,    0x0004
        .equiv TGTM,    0x0005
        .equiv TGPOL,   0x0006
        .equiv TGATE_T3GCON, 0x0007


;----- T3CON Bits -----------------------------------------------------
        .equiv TMR3ON,  0x0000
        .equiv NOT_T3SYNC, 0x0002
        .equiv T3OSCEN, 0x0003

        .equiv TON_T3CON, 0x0000
        .equiv NOT_TSYNC, 0x0002
        .equiv SOSCEN_T3CON, 0x0003

        .equiv T3CKPS0, 0x0004
        .equiv T3CKPS1, 0x0005
        .equiv TMR3CS0, 0x0006
        .equiv TMR3CS1, 0x0007


;----- T4CON Bits -----------------------------------------------------
        .equiv TMR4ON,  0x0002

        .equiv TON_T4CON, 0x0002

        .equiv T4CKPS0, 0x0000
        .equiv T4CKPS1, 0x0001
        .equiv T4OUTPS0, 0x0003
        .equiv T4OUTPS1, 0x0004
        .equiv T4OUTPS2, 0x0005
        .equiv T4OUTPS3, 0x0006


;----- CCPTMRS0 Bits -----------------------------------------------------
        .equiv C1TSEL0, 0x0000
        .equiv C2TSEL0, 0x0003
        .equiv C3TSEL0, 0x0006


;----- CCP1CON Bits -----------------------------------------------------
        .equiv CCPM0,   0x0000
        .equiv CCPM1,   0x0001
        .equiv CCPM2,   0x0002
        .equiv CCPM3,   0x0003
        .equiv DCB0,    0x0004
        .equiv DCB1,    0x0005
        .equiv PM0,     0x0006
        .equiv PM1,     0x0007


        .equiv CCP1M0,  0x0000
        .equiv CCP1M1,  0x0001
        .equiv CCP1M2,  0x0002
        .equiv CCP1M3,  0x0003
        .equiv DC1B0,   0x0004
        .equiv DC1B1,   0x0005
        .equiv P1M0,    0x0006
        .equiv P1M1,    0x0007


;----- ECCP1CON Bits -----------------------------------------------------
       ;.equiv CCPM0,   0x0000
       ;.equiv CCPM1,   0x0001
       ;.equiv CCPM2,   0x0002
       ;.equiv CCPM3,   0x0003
       ;.equiv DCB0,    0x0004
       ;.equiv DCB1,    0x0005
       ;.equiv PM0,     0x0006
       ;.equiv PM1,     0x0007


       ;.equiv CCP1M0,  0x0000
       ;.equiv CCP1M1,  0x0001
       ;.equiv CCP1M2,  0x0002
       ;.equiv CCP1M3,  0x0003
       ;.equiv DC1B0,   0x0004
       ;.equiv DC1B1,   0x0005
       ;.equiv P1M0,    0x0006
       ;.equiv P1M1,    0x0007


;----- ECCP1DEL Bits -----------------------------------------------------
        .equiv PRSEN,   0x0007

        .equiv PDC0,    0x0000
        .equiv PDC1,    0x0001
        .equiv PDC2,    0x0002
        .equiv PDC3,    0x0003
        .equiv PDC4,    0x0004
        .equiv PDC5,    0x0005
        .equiv PDC6,    0x0006

        .equiv P1RSEN,  0x0007

        .equiv P1DC0,   0x0000
        .equiv P1DC1,   0x0001
        .equiv P1DC2,   0x0002
        .equiv P1DC3,   0x0003
        .equiv P1DC4,   0x0004
        .equiv P1DC5,   0x0005
        .equiv P1DC6,   0x0006


;----- PWM1CON Bits -----------------------------------------------------
       ;.equiv PRSEN,   0x0007

       ;.equiv PDC0,    0x0000
       ;.equiv PDC1,    0x0001
       ;.equiv PDC2,    0x0002
       ;.equiv PDC3,    0x0003
       ;.equiv PDC4,    0x0004
       ;.equiv PDC5,    0x0005
       ;.equiv PDC6,    0x0006

       ;.equiv P1RSEN,  0x0007

       ;.equiv P1DC0,   0x0000
       ;.equiv P1DC1,   0x0001
       ;.equiv P1DC2,   0x0002
       ;.equiv P1DC3,   0x0003
       ;.equiv P1DC4,   0x0004
       ;.equiv P1DC5,   0x0005
       ;.equiv P1DC6,   0x0006


;----- ECCP1AS Bits -----------------------------------------------------
        .equiv ECCPASE, 0x0007

        .equiv PSSBD0,  0x0000
        .equiv PSSBD1,  0x0001
        .equiv PSSAC0,  0x0002
        .equiv PSSAC1,  0x0003
        .equiv ECCPAS0, 0x0004
        .equiv ECCPAS1, 0x0005
        .equiv ECCPAS2, 0x0006


        .equiv PSS1BD0, 0x0000
        .equiv PSS1BD1, 0x0001
        .equiv PSS1AC0, 0x0002
        .equiv PSS1AC1, 0x0003
        .equiv ECCP1AS0, 0x0004
        .equiv ECCP1AS1, 0x0005
        .equiv ECCP1AS2, 0x0006


;----- PSTR1CON Bits -----------------------------------------------------
        .equiv STRA,    0x0000
        .equiv STRB,    0x0001
        .equiv STRC,    0x0002
        .equiv STRD,    0x0003
        .equiv STRSYNC, 0x0004

        .equiv CMPL0,   0x0006
        .equiv CMPL1,   0x0007


;----- CCP2CON Bits -----------------------------------------------------
       ;.equiv CCPM0,   0x0000
       ;.equiv CCPM1,   0x0001
       ;.equiv CCPM2,   0x0002
       ;.equiv CCPM3,   0x0003
       ;.equiv DCB0,    0x0004
       ;.equiv DCB1,    0x0005


        .equiv CCP2M0,  0x0000
        .equiv CCP2M1,  0x0001
        .equiv CCP2M2,  0x0002
        .equiv CCP2M3,  0x0003
        .equiv DC2B0,   0x0004
        .equiv DC2B1,   0x0005


;----- CCP3CON Bits -----------------------------------------------------
       ;.equiv CCPM0,   0x0000
       ;.equiv CCPM1,   0x0001
       ;.equiv CCPM2,   0x0002
       ;.equiv CCPM3,   0x0003
       ;.equiv DCB0,    0x0004
       ;.equiv DCB1,    0x0005


        .equiv CCP3M0,  0x0000
        .equiv CCP3M1,  0x0001
        .equiv CCP3M2,  0x0002
        .equiv CCP3M3,  0x0003
        .equiv DC3B0,   0x0004
        .equiv DC3B1,   0x0005


;----- SSP1CON1 Bits -----------------------------------------------------
        .equiv CKP,     0x0004
        .equiv SSPEN,   0x0005
        .equiv SSPOV,   0x0006
        .equiv WCOL,    0x0007

        .equiv SSPM0,   0x0000
        .equiv SSPM1,   0x0001
        .equiv SSPM2,   0x0002
        .equiv SSPM3,   0x0003


;----- SSP1CON2 Bits -----------------------------------------------------
        .equiv SEN,     0x0000
        .equiv RSEN,    0x0001
        .equiv PEN,     0x0002
        .equiv RCEN,    0x0003
        .equiv ACKEN,   0x0004
        .equiv ACKDT,   0x0005
        .equiv ACKSTAT, 0x0006
        .equiv GCEN,    0x0007


        .equiv ADMSK1,  0x0001
        .equiv ADMSK2,  0x0002
        .equiv ADMSK3,  0x0003
        .equiv ADMSK4,  0x0004
        .equiv ADMSK5,  0x0005


;----- SSP1CON3 Bits -----------------------------------------------------
        .equiv DHEN,    0x0000
        .equiv AHEN,    0x0001
        .equiv SBCDE,   0x0002
        .equiv SDAHT,   0x0003
        .equiv BOEN,    0x0004
        .equiv SCIE,    0x0005
        .equiv PCIE,    0x0006
        .equiv ACKTIM,  0x0007


;----- SSP1STAT Bits -----------------------------------------------------
        .equiv BF,      0x0000
        .equiv UA,      0x0001
        .equiv R_NOT_W, 0x0002
        .equiv S,       0x0003
        .equiv P,       0x0004
        .equiv D_NOT_A, 0x0005
        .equiv CKE,     0x0006
        .equiv SMP,     0x0007

        .equiv R_W,     0x0002
        .equiv D_A,     0x0005

        .equiv NOT_W,   0x0002
        .equiv NOT_A,   0x0005

        .equiv NOT_WRITE, 0x0002
        .equiv NOT_ADDRESS, 0x0005

        .equiv READ_WRITE, 0x0002
        .equiv DATA_ADDRESS, 0x0005

        .equiv I2C_READ, 0x0002
        .equiv I2C_START, 0x0003
        .equiv I2C_STOP, 0x0004
        .equiv I2C_DAT, 0x0005


;----- I2C1MSK Bits -----------------------------------------------------
        .equiv MSK0,    0x0000
        .equiv MSK1,    0x0001
        .equiv MSK2,    0x0002
        .equiv MSK3,    0x0003
        .equiv MSK4,    0x0004
        .equiv MSK5,    0x0005
        .equiv MSK6,    0x0006
        .equiv MSK7,    0x0007



;----- SSP1MSK Bits -----------------------------------------------------
       ;.equiv MSK0,    0x0000
       ;.equiv MSK1,    0x0001
       ;.equiv MSK2,    0x0002
       ;.equiv MSK3,    0x0003
       ;.equiv MSK4,    0x0004
       ;.equiv MSK5,    0x0005
       ;.equiv MSK6,    0x0006
       ;.equiv MSK7,    0x0007



;----- SSP2CON1 Bits -----------------------------------------------------
       ;.equiv CKP,     0x0004
       ;.equiv SSPEN,   0x0005
       ;.equiv SSPOV,   0x0006
       ;.equiv WCOL,    0x0007

       ;.equiv SSPM0,   0x0000
       ;.equiv SSPM1,   0x0001
       ;.equiv SSPM2,   0x0002
       ;.equiv SSPM3,   0x0003


;----- SSP2CON2 Bits -----------------------------------------------------
       ;.equiv SEN,     0x0000
       ;.equiv RSEN,    0x0001
       ;.equiv PEN,     0x0002
       ;.equiv RCEN,    0x0003
       ;.equiv ACKEN,   0x0004
       ;.equiv ACKDT,   0x0005
       ;.equiv ACKSTAT, 0x0006
       ;.equiv GCEN,    0x0007


       ;.equiv ADMSK1,  0x0001
       ;.equiv ADMSK2,  0x0002
       ;.equiv ADMSK3,  0x0003
       ;.equiv ADMSK4,  0x0004
       ;.equiv ADMSK5,  0x0005


;----- SSP2CON3 Bits -----------------------------------------------------
       ;.equiv DHEN,    0x0000
       ;.equiv AHEN,    0x0001
       ;.equiv SBCDE,   0x0002
       ;.equiv SDAHT,   0x0003
       ;.equiv BOEN,    0x0004
       ;.equiv SCIE,    0x0005
       ;.equiv PCIE,    0x0006
       ;.equiv ACKTIM,  0x0007


;----- SSP2STAT Bits -----------------------------------------------------
       ;.equiv BF,      0x0000
       ;.equiv UA,      0x0001
       ;.equiv R_NOT_W, 0x0002
       ;.equiv S,       0x0003
       ;.equiv P,       0x0004
       ;.equiv D_NOT_A, 0x0005
       ;.equiv CKE,     0x0006
       ;.equiv SMP,     0x0007

       ;.equiv R_W,     0x0002
       ;.equiv D_A,     0x0005

       ;.equiv NOT_W,   0x0002
       ;.equiv NOT_A,   0x0005

       ;.equiv NOT_WRITE, 0x0002
       ;.equiv NOT_ADDRESS, 0x0005

       ;.equiv READ_WRITE, 0x0002
       ;.equiv DATA_ADDRESS, 0x0005

       ;.equiv I2C_READ, 0x0002
       ;.equiv I2C_START, 0x0003
       ;.equiv I2C_STOP, 0x0004
       ;.equiv I2C_DAT, 0x0005


;----- I2C2MSK Bits -----------------------------------------------------
       ;.equiv MSK0,    0x0000
       ;.equiv MSK1,    0x0001
       ;.equiv MSK2,    0x0002
       ;.equiv MSK3,    0x0003
       ;.equiv MSK4,    0x0004
       ;.equiv MSK5,    0x0005
       ;.equiv MSK6,    0x0006
       ;.equiv MSK7,    0x0007



;----- SSP2MSK Bits -----------------------------------------------------
       ;.equiv MSK0,    0x0000
       ;.equiv MSK1,    0x0001
       ;.equiv MSK2,    0x0002
       ;.equiv MSK3,    0x0003
       ;.equiv MSK4,    0x0004
       ;.equiv MSK5,    0x0005
       ;.equiv MSK6,    0x0006
       ;.equiv MSK7,    0x0007



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


;----- TRISA Bits -----------------------------------------------------
        .equiv TRISA0,  0x0000
        .equiv TRISA1,  0x0001
        .equiv TRISA2,  0x0002
        .equiv TRISA3,  0x0003
        .equiv TRISA4,  0x0004
        .equiv TRISA6,  0x0006


;----- PORTA Bits -----------------------------------------------------
        .equiv RA0,     0x0000
        .equiv RA1,     0x0001
        .equiv RA2,     0x0002
        .equiv RA3,     0x0003
        .equiv RA4,     0x0004
        .equiv RA5,     0x0005
        .equiv RA6,     0x0006


;----- LATA Bits -----------------------------------------------------
        .equiv LATA0,   0x0000
        .equiv LATA1,   0x0001
        .equiv LATA2,   0x0002
        .equiv LATA3,   0x0003
        .equiv LATA4,   0x0004
        .equiv LATA6,   0x0006


;----- ODCA Bits -----------------------------------------------------
        .equiv ODA0,    0x0000
        .equiv ODA1,    0x0001
        .equiv ODA2,    0x0002
        .equiv ODA3,    0x0003
        .equiv ODA4,    0x0004
        .equiv ODA6,    0x0006


;----- TRISB Bits -----------------------------------------------------
        .equiv TRISB0,  0x0000
        .equiv TRISB1,  0x0001
        .equiv TRISB2,  0x0002
        .equiv TRISB4,  0x0004
        .equiv TRISB7,  0x0007
        .equiv TRISB8,  0x0008
        .equiv TRISB9,  0x0009
        .equiv TRISB12, 0x000C
        .equiv TRISB13, 0x000D
        .equiv TRISB14, 0x000E
        .equiv TRISB15, 0x000F


;----- PORTB Bits -----------------------------------------------------
        .equiv RB0,     0x0000
        .equiv RB1,     0x0001
        .equiv RB2,     0x0002
        .equiv RB4,     0x0004
        .equiv RB7,     0x0007
        .equiv RB8,     0x0008
        .equiv RB9,     0x0009
        .equiv RB12,    0x000C
        .equiv RB13,    0x000D
        .equiv RB14,    0x000E
        .equiv RB15,    0x000F


;----- LATB Bits -----------------------------------------------------
        .equiv LATB0,   0x0000
        .equiv LATB1,   0x0001
        .equiv LATB2,   0x0002
        .equiv LATB4,   0x0004
        .equiv LATB7,   0x0007
        .equiv LATB8,   0x0008
        .equiv LATB9,   0x0009
        .equiv LATB12,  0x000C
        .equiv LATB13,  0x000D
        .equiv LATB14,  0x000E
        .equiv LATB15,  0x000F


;----- ODCB Bits -----------------------------------------------------
        .equiv ODB0,    0x0000
        .equiv ODB1,    0x0001
        .equiv ODB2,    0x0002
        .equiv ODB4,    0x0004
        .equiv ODB7,    0x0007
        .equiv ODB8,    0x0008
        .equiv ODB9,    0x0009
        .equiv ODB12,   0x000C
        .equiv ODB13,   0x000D
        .equiv ODB14,   0x000E
        .equiv ODB15,   0x000F


;----- PADCFG1 Bits -----------------------------------------------------
        .equiv SCK1DIS, 0x0008
        .equiv SDO1DIS, 0x0009
        .equiv SCK2DIS, 0x000A
        .equiv SDO2DIS, 0x000B

        .equiv SMBDEL0, 0x0004
        .equiv SMBDEL1, 0x0005


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
        .equiv OFFCAL,  0x000C

        .equiv SMPI0,   0x0002
        .equiv SMPI1,   0x0003
        .equiv SMPI2,   0x0004
        .equiv SMPI3,   0x0005
        .equiv VCFG0,   0x000D
        .equiv VCFG1,   0x000E
        .equiv VCFG2,   0x000F


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
        .equiv CH0NA,   0x0007
        .equiv CH0NB,   0x000F

        .equiv CH0SA0,  0x0000
        .equiv CH0SA1,  0x0001
        .equiv CH0SA2,  0x0002
        .equiv CH0SA3,  0x0003
        .equiv CH0SB0,  0x0008
        .equiv CH0SB1,  0x0009
        .equiv CH0SB2,  0x000A
        .equiv CH0SB3,  0x000B


;----- AD1CSSL Bits -----------------------------------------------------
        .equiv CSSL0,   0x0000
        .equiv CSSL1,   0x0001
        .equiv CSSL2,   0x0002
        .equiv CSSL3,   0x0003
        .equiv CSSL4,   0x0004
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


;----- ANCFG Bits -----------------------------------------------------
        .equiv VBGEN,   0x0000


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
        .equiv ANSB4,   0x0004
        .equiv ANSB12,  0x000C
        .equiv ANSB13,  0x000D
        .equiv ANSB14,  0x000E
        .equiv ANSB15,  0x000F


;----- ANSELB Bits -----------------------------------------------------
       ;.equiv ANSB0,   0x0000
       ;.equiv ANSB1,   0x0001
       ;.equiv ANSB2,   0x0002
       ;.equiv ANSB4,   0x0004
       ;.equiv ANSB12,  0x000C
       ;.equiv ANSB13,  0x000D
       ;.equiv ANSB14,  0x000E
       ;.equiv ANSB15,  0x000F


;----- CMSTAT Bits -----------------------------------------------------
        .equiv C1OUT,   0x0000
        .equiv C2OUT,   0x0001
        .equiv C1EVT,   0x0008
        .equiv C2EVT,   0x0009
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
        .equiv CM,      0x0009
        .equiv SBOREN,  0x000D
        .equiv IOPUWR,  0x000E
        .equiv TRAPR,   0x000F

        .equiv VREGS,   0x0008


;----- OSCCON Bits -----------------------------------------------------
        .equiv OSWEN,   0x0000
        .equiv SOSCEN_OSCCON, 0x0001
        .equiv SOSCDRV, 0x0002
        .equiv CF,      0x0003
        .equiv LOCK,    0x0005
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
        .equiv HLSIDL,  0x000D
        .equiv HLVDEN,  0x000F

        .equiv HLVDL0,  0x0000
        .equiv HLVDL1,  0x0001
        .equiv HLVDL2,  0x0002
        .equiv HLVDL3,  0x0003


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

        .equiv CRNTEN,  0x0008
        .equiv PSIDL,   0x000D
        .equiv WUEN,    0x000F


;----- PMD1 Bits -----------------------------------------------------
        .equiv ADC1MD,  0x0000
        .equiv U1MD,    0x0005
        .equiv U2MD,    0x0006
        .equiv SSP1MD,  0x0007
        .equiv T1MD,    0x000B
        .equiv T2MD,    0x000C
        .equiv T3MD,    0x000D
        .equiv T4MD,    0x000E

        .equiv ADCMD,   0x0000
        .equiv I2C1MD,  0x0007

        .equiv SPI1MD,  0x0007


;----- PMDIS1 Bits -----------------------------------------------------
       ;.equiv ADC1MD,  0x0000
       ;.equiv U1MD,    0x0005
       ;.equiv U2MD,    0x0006
       ;.equiv SSP1MD,  0x0007
       ;.equiv T1MD,    0x000B
       ;.equiv T2MD,    0x000C
       ;.equiv T3MD,    0x000D
       ;.equiv T4MD,    0x000E

       ;.equiv ADCMD,   0x0000
       ;.equiv I2C1MD,  0x0007

       ;.equiv SPI1MD,  0x0007


;----- PMD2 Bits -----------------------------------------------------
        .equiv CCP1MD,  0x0000
        .equiv CCP2MD,  0x0001
        .equiv CCP3MD,  0x0002


;----- PMDIS2 Bits -----------------------------------------------------
       ;.equiv CCP1MD,  0x0000
       ;.equiv CCP2MD,  0x0001
       ;.equiv CCP3MD,  0x0002


;----- PMD3 Bits -----------------------------------------------------
        .equiv SSP2MD,  0x0001
        .equiv CMPMD,   0x000A

        .equiv I2C2MD,  0x0001

        .equiv SPI2MD,  0x0001


;----- PMDIS3 Bits -----------------------------------------------------
       ;.equiv SSP2MD,  0x0001
       ;.equiv CMPMD,   0x000A

       ;.equiv I2C2MD,  0x0001

       ;.equiv SPI2MD,  0x0001


;----- PMD4 Bits -----------------------------------------------------
        .equiv HLVDMD,  0x0001
        .equiv REFOMD,  0x0003
        .equiv EEMD,    0x0004
        .equiv ULPWUMD, 0x0007


;----- PMDIS4 Bits -----------------------------------------------------
       ;.equiv HLVDMD,  0x0001
       ;.equiv REFOMD,  0x0003
       ;.equiv EEMD,    0x0004
       ;.equiv ULPWUMD, 0x0007




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
;     BSS_HI1K             High Security Boot Protect 000200 - 000AFE
;     BSS_STD1K            Standard Security Boot Protect 000200 - 000AFE
;     BSS_OFF              No boot flash segment
;
        .equiv BWRP_ON,         0xFFFE ; Enabled
        .equiv BWRP_OFF,        0xFFFF ; Disabled

        .equiv BSS_HI1K,        0xFFF5 ; High Security Boot Protect 000200 - 000AFE
        .equiv BSS_STD1K,       0xFFFD ; Standard Security Boot Protect 000200 - 000AFE
        .equiv BSS_OFF,         0xFFFF ; No boot flash segment


;----- FGS (0xf80004) --------------------------------------------------
;
;  The following settings are available for FGS:
;
;   General Segment Flash Write Protect:
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
;     FNOSC_FRCPLL         Fast RC Oscillator with Postscaler and PLL (FRCDIV+PLL)
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary Oscillator with PLL (XT+PLL, HS+PLL, EC+PLL)
;     FNOSC_SOSC           Secondary Oscillator (SOSC)
;     FNOSC_LPRC           Low Power RC Oscillator (LPRC)
;     FNOSC_LPFRC          500KHz Low Power FRC with Postscaler (LPFRC)
;     FNOSC_FRCDIV         8MHz FRC with Postscaler (FRCDIV)
;
;   SOSC Source Type:
;     SOSCSRC_DIG          Digital Mode for use with external clock on SCLKI
;     SOSCSRC_ANA          Analog Mode for use with crystal
;
;   LPRC Power and Accuracy:
;     LPRCSEL_LP           Low Power/Low Accuracy
;     LPRCSEL_HP           High Power/High Accuracy
;
;   Internal External Switch Over bit:
;     IESO_OFF             Internal External Switchover mode disabled (Two-speed Start-up disabled)
;     IESO_ON              Internal External Switchover mode enabled (Two-speed Start-up enabled)
;
        .equiv FNOSC_FRC,       0xFFF8 ; Fast RC Oscillator (FRC)
        .equiv FNOSC_FRCPLL,    0xFFF9 ; Fast RC Oscillator with Postscaler and PLL (FRCDIV+PLL)
        .equiv FNOSC_PRI,       0xFFFA ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFFFB ; Primary Oscillator with PLL (XT+PLL, HS+PLL, EC+PLL)
        .equiv FNOSC_SOSC,      0xFFFC ; Secondary Oscillator (SOSC)
        .equiv FNOSC_LPRC,      0xFFFD ; Low Power RC Oscillator (LPRC)
        .equiv FNOSC_LPFRC,     0xFFFE ; 500KHz Low Power FRC with Postscaler (LPFRC)
        .equiv FNOSC_FRCDIV,    0xFFFF ; 8MHz FRC with Postscaler (FRCDIV)

        .equiv SOSCSRC_DIG,     0xFFDF ; Digital Mode for use with external clock on SCLKI
        .equiv SOSCSRC_ANA,     0xFFFF ; Analog Mode for use with crystal

        .equiv LPRCSEL_LP,      0xFFBF ; Low Power/Low Accuracy
        .equiv LPRCSEL_HP,      0xFFFF ; High Power/High Accuracy

        .equiv IESO_OFF,        0xFF7F ; Internal External Switchover mode disabled (Two-speed Start-up disabled)
        .equiv IESO_ON,         0xFFFF ; Internal External Switchover mode enabled (Two-speed Start-up enabled)


;----- FOSC (0xf80008) --------------------------------------------------
;
;  The following settings are available for FOSC:
;
;   Primary Oscillator Mode:
;     POSCMD_EC            External clock mode selected
;     POSCMD_XT            XT oscillator mode selected
;     POSCMD_HS            HS oscillator mode selected
;     POSCMD_NONE          Primary oscillator disabled
;
;   CLKO Pin I/O Function:
;     OSCIOFNC_ON          Port I/O enabled (CLKO disabled)
;     OSCIOFNC_OFF         CLKO output signal enabled
;
;   Primary Oscillator Frequency Range:
;     POSCFREQ_LS          Primary Oscillator/External Clock frequency <100kHz
;     POSCFREQ_MS          Primary Oscillator/External Clock frequency between 100kHz to 8MHz
;     POSCFREQ_HS          Primary Oscillator/External Clock frequency >8MHz
;
;   SOSC Power Selection Configuration bits:
;     SOSCSEL_SOSCLP       Secondary Oscillator configured for low-power operation
;     SOSCSEL_SOSCHP       Secondary Oscillator configured for high-power operation
;
;   Clock Switching and Monitor Selection:
;     FCKSM_CSECME         Clock Switching and Fail-safe Clock Monitor Enabled
;     FCKSM_CSECMD         Clock Switching Enabled; Fail-safe Clock Monitor Disabled
;     FCKSM_CSDCMD         Clock Switching and Fail-safe Clock Monitor Disabled
;
        .equiv POSCMD_EC,       0xFFFC ; External clock mode selected
        .equiv POSCMD_XT,       0xFFFD ; XT oscillator mode selected
        .equiv POSCMD_HS,       0xFFFE ; HS oscillator mode selected
        .equiv POSCMD_NONE,     0xFFFF ; Primary oscillator disabled

        .equiv OSCIOFNC_ON,     0xFFFB ; Port I/O enabled (CLKO disabled)
        .equiv OSCIOFNC_OFF,    0xFFFF ; CLKO output signal enabled

        .equiv POSCFREQ_LS,     0xFFEF ; Primary Oscillator/External Clock frequency <100kHz
        .equiv POSCFREQ_MS,     0xFFF7 ; Primary Oscillator/External Clock frequency between 100kHz to 8MHz
        .equiv POSCFREQ_HS,     0xFFFF ; Primary Oscillator/External Clock frequency >8MHz

        .equiv SOSCSEL_SOSCLP,  0xFFDF ; Secondary Oscillator configured for low-power operation
        .equiv SOSCSEL_SOSCHP,  0xFFFF ; Secondary Oscillator configured for high-power operation

        .equiv FCKSM_CSECME,    0xFF3F ; Clock Switching and Fail-safe Clock Monitor Enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Clock Switching Enabled; Fail-safe Clock Monitor Disabled
        .equiv FCKSM_CSDCMD,    0xFFFF ; Clock Switching and Fail-safe Clock Monitor Disabled


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
;     FWDTEN_NOSLP         WDT enabled while device is active; SWDTEN bit disabled
;     FWDTEN_SWON          WDT controlled with SWDTEN bit setting
;     FWDTEN_ON            WDT enabled in hardware
;
;   Windowed Watchdog Timer Disable bit:
;     WINDIS_ON            Windowed WDT enabled
;     WINDIS_OFF           Standard WDT selected (windowed WDT disabled)
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
        .equiv FWDTEN_NOSLP,    0xFF7F ; WDT enabled while device is active; SWDTEN bit disabled
        .equiv FWDTEN_SWON,     0xFFDF ; WDT controlled with SWDTEN bit setting
        .equiv FWDTEN_ON,       0xFFFF ; WDT enabled in hardware

        .equiv WINDIS_ON,       0xFFBF ; Windowed WDT enabled
        .equiv WINDIS_OFF,      0xFFFF ; Standard WDT selected (windowed WDT disabled)


;----- FPOR (0xf8000c) --------------------------------------------------
;
;  The following settings are available for FPOR:
;
;   Brown-out Reset Enable bits:
;     BOREN_BOR0           Brown-out Reset disabled in hardware; SBOREN bit disabled
;     BOREN_BOR1           Brown-out Rest controlled by SBOREN bit
;     BOREN_BOR2           Enabled only while device is active; SBOREN bit disabled
;     BOREN_BOR3           Enabled in hardware; SBOREN bit disabled
;
;   Power-up Timer Enable:
;     PWRTEN_OFF           PWRT disabled
;     PWRTEN_ON            PWRT enabled
;
;   Alternate I2C1 Pin Mapping bit:
;     I2C1SEL_SEC          Alternate ASCL1/ASDA1 Pins for I2C1
;     I2C1SEL_PRI          Default SCL1/SDA1 Pins for I2C1
;
;   Brown-out Reset Voltage bits:
;     BORV_LPBOR           Low-power Brown-Out Reset occurs around 2.0V
;     BORV_V30             Brown-out Reset at 3.0V
;     BORV_V27             Brown-out Reset at 2.7V
;     BORV_V18             Brown-out Reset at 1.8V
;
;   MCLR Pin Enable bit:
;     MCLRE_OFF            RA5 input enabled; MCLR disabled
;     MCLRE_ON             RA5 input disabled; MCLR enabled
;
        .equiv BOREN_BOR0,      0xFFFC ; Brown-out Reset disabled in hardware; SBOREN bit disabled
        .equiv BOREN_BOR1,      0xFFFD ; Brown-out Rest controlled by SBOREN bit
        .equiv BOREN_BOR2,      0xFFFE ; Enabled only while device is active; SBOREN bit disabled
        .equiv BOREN_BOR3,      0xFFFF ; Enabled in hardware; SBOREN bit disabled

        .equiv PWRTEN_OFF,      0xFFF7 ; PWRT disabled
        .equiv PWRTEN_ON,       0xFFFF ; PWRT enabled

        .equiv I2C1SEL_SEC,     0xFFEF ; Alternate ASCL1/ASDA1 Pins for I2C1
        .equiv I2C1SEL_PRI,     0xFFFF ; Default SCL1/SDA1 Pins for I2C1

        .equiv BORV_LPBOR,      0xFF9F ; Low-power Brown-Out Reset occurs around 2.0V
        .equiv BORV_V30,        0xFFBF ; Brown-out Reset at 3.0V
        .equiv BORV_V27,        0xFFDF ; Brown-out Reset at 2.7V
        .equiv BORV_V18,        0xFFFF ; Brown-out Reset at 1.8V

        .equiv MCLRE_OFF,       0xFF7F ; RA5 input enabled; MCLR disabled
        .equiv MCLRE_ON,        0xFFFF ; RA5 input disabled; MCLR enabled


;----- FICD (0xf8000e) --------------------------------------------------
;
;  The following settings are available for FICD:
;
;   ICD Pin Placement Select:
;     ICS_PGx3             EMUC/EMUD share PGC3/PGD3
;     ICS_PGx2             EMUC/EMUD share PGC2/PGD2
;     ICS_PGx1             EMUC/EMUD share PGC1/PGD1
;
        .equiv ICS_PGx3,        0xFFFD ; EMUC/EMUD share PGC3/PGD3
        .equiv ICS_PGx2,        0xFFFE ; EMUC/EMUD share PGC2/PGD2
        .equiv ICS_PGx1,        0xFFFF ; EMUC/EMUD share PGC1/PGD1


.LIST
