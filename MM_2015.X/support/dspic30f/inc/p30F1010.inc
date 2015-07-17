;==========================================================================
;  PIC30F1010 Standard Assembly Include File
; 
;  (c) Copyright 2014 Microchip Technology, All rights reserved
;  Part support version v1.22.A(19-Aug-2014)
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC30F1010 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p30F1010
;       2. Placing a ".equ" directive before the ".include":
;               .equ __30F1010, 1
;               .include "p30F1010.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __30F1010
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

        .extern CNPU1
        .equiv  CNPU1L, _CNPU1
        .equiv  CNPU1H, _CNPU1+1

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

        .extern IEC0
        .equiv  IEC0L, _IEC0
        .equiv  IEC0H, _IEC0+1

        .extern IEC1
        .equiv  IEC1L, _IEC1
        .equiv  IEC1H, _IEC1+1

        .extern IEC2
        .equiv  IEC2L, _IEC2
        .equiv  IEC2H, _IEC2+1

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

        .extern OC1RS
        .equiv  OC1RSL, _OC1RS
        .equiv  OC1RSH, _OC1RS+1

        .extern OC1R
        .equiv  OC1RL, _OC1R
        .equiv  OC1RH, _OC1R+1

        .extern OC1CON
        .equiv  OC1CONL, _OC1CON
        .equiv  OC1CONH, _OC1CON+1

        .extern I2CRCV
        .equiv  I2CRCVL, _I2CRCV
        .equiv  I2CRCVH, _I2CRCV+1

        .extern I2CTRN
        .equiv  I2CTRNL, _I2CTRN
        .equiv  I2CTRNH, _I2CTRN+1

        .extern I2CBRG
        .equiv  I2CBRGL, _I2CBRG
        .equiv  I2CBRGH, _I2CBRG+1

        .extern I2CCON
        .equiv  I2CCONL, _I2CCON
        .equiv  I2CCONH, _I2CCON+1

        .extern I2CSTAT
        .equiv  I2CSTATL, _I2CSTAT
        .equiv  I2CSTATH, _I2CSTAT+1

        .extern I2CADD
        .equiv  I2CADDL, _I2CADD
        .equiv  I2CADDH, _I2CADD+1

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

        .extern TRISA
        .equiv  TRISAL, _TRISA
        .equiv  TRISAH, _TRISA+1

        .extern PORTA
        .equiv  PORTAL, _PORTA
        .equiv  PORTAH, _PORTA+1

        .extern LATA
        .equiv  LATAL, _LATA
        .equiv  LATAH, _LATA+1

        .extern TRISB
        .equiv  TRISBL, _TRISB
        .equiv  TRISBH, _TRISB+1

        .extern PORTB
        .equiv  PORTBL, _PORTB
        .equiv  PORTBH, _PORTB+1

        .extern LATB
        .equiv  LATBL, _LATB
        .equiv  LATBH, _LATB+1

        .extern TRISD
        .equiv  TRISDL, _TRISD
        .equiv  TRISDH, _TRISD+1

        .extern PORTD
        .equiv  PORTDL, _PORTD
        .equiv  PORTDH, _PORTD+1

        .extern LATD
        .equiv  LATDL, _LATD
        .equiv  LATDH, _LATD+1

        .extern TRISE
        .equiv  TRISEL, _TRISE
        .equiv  TRISEH, _TRISE+1

        .extern PORTE
        .equiv  PORTEL, _PORTE
        .equiv  PORTEH, _PORTE+1

        .extern LATE
        .equiv  LATEL, _LATE
        .equiv  LATEH, _LATE+1

        .extern TRISF
        .equiv  TRISFL, _TRISF
        .equiv  TRISFH, _TRISF+1

        .extern PORTF
        .equiv  PORTFL, _PORTF
        .equiv  PORTFH, _PORTF+1

        .extern LATF
        .equiv  LATFL, _LATF
        .equiv  LATFH, _LATF+1

        .extern ADCON
        .equiv  ADCONL, _ADCON
        .equiv  ADCONH, _ADCON+1

        .extern ADPCFG
        .equiv  ADPCFGL, _ADPCFG
        .equiv  ADPCFGH, _ADPCFG+1

        .extern ADSTAT
        .equiv  ADSTATL, _ADSTAT
        .equiv  ADSTATH, _ADSTAT+1

        .extern ADBASE
        .equiv  ADBASEL, _ADBASE
        .equiv  ADBASEH, _ADBASE+1

        .extern ADCPC0
        .equiv  ADCPC0L, _ADCPC0
        .equiv  ADCPC0H, _ADCPC0+1

        .extern ADCPC1
        .equiv  ADCPC1L, _ADCPC1
        .equiv  ADCPC1H, _ADCPC1+1

        .extern ADCBUF0
        .equiv  ADCBUF0L, _ADCBUF0
        .equiv  ADCBUF0H, _ADCBUF0+1

        .extern ADCBUF1
        .equiv  ADCBUF1L, _ADCBUF1
        .equiv  ADCBUF1H, _ADCBUF1+1

        .extern ADCBUF2
        .equiv  ADCBUF2L, _ADCBUF2
        .equiv  ADCBUF2H, _ADCBUF2+1

        .extern ADCBUF3
        .equiv  ADCBUF3L, _ADCBUF3
        .equiv  ADCBUF3H, _ADCBUF3+1

        .extern ADCBUF4
        .equiv  ADCBUF4L, _ADCBUF4
        .equiv  ADCBUF4H, _ADCBUF4+1

        .extern ADCBUF5
        .equiv  ADCBUF5L, _ADCBUF5
        .equiv  ADCBUF5H, _ADCBUF5+1

        .extern PTCON
        .equiv  PTCONL, _PTCON
        .equiv  PTCONH, _PTCON+1

        .extern PTPER
        .equiv  PTPERL, _PTPER
        .equiv  PTPERH, _PTPER+1

        .extern MDC
        .equiv  MDCL, _MDC
        .equiv  MDCH, _MDC+1

        .extern SEVTCMP
        .equiv  SEVTCMPL, _SEVTCMP
        .equiv  SEVTCMPH, _SEVTCMP+1

        .extern PWMCON1
        .equiv  PWMCON1L, _PWMCON1
        .equiv  PWMCON1H, _PWMCON1+1

        .extern IOCON1
        .equiv  IOCON1L, _IOCON1
        .equiv  IOCON1H, _IOCON1+1

        .extern FCLCON1
        .equiv  FCLCON1L, _FCLCON1
        .equiv  FCLCON1H, _FCLCON1+1

        .extern PDC1
        .equiv  PDC1L, _PDC1
        .equiv  PDC1H, _PDC1+1

        .extern PHASE1
        .equiv  PHASE1L, _PHASE1
        .equiv  PHASE1H, _PHASE1+1

        .extern DTR1
        .equiv  DTR1L, _DTR1
        .equiv  DTR1H, _DTR1+1

        .extern ALTDTR1
        .equiv  ALTDTR1L, _ALTDTR1
        .equiv  ALTDTR1H, _ALTDTR1+1

        .extern TRIG1
        .equiv  TRIG1L, _TRIG1
        .equiv  TRIG1H, _TRIG1+1

        .extern TRGCON1
        .equiv  TRGCON1L, _TRGCON1
        .equiv  TRGCON1H, _TRGCON1+1

        .extern LEBCON1
        .equiv  LEBCON1L, _LEBCON1
        .equiv  LEBCON1H, _LEBCON1+1

        .extern PWMCON2
        .equiv  PWMCON2L, _PWMCON2
        .equiv  PWMCON2H, _PWMCON2+1

        .extern IOCON2
        .equiv  IOCON2L, _IOCON2
        .equiv  IOCON2H, _IOCON2+1

        .extern FCLCON2
        .equiv  FCLCON2L, _FCLCON2
        .equiv  FCLCON2H, _FCLCON2+1

        .extern PDC2
        .equiv  PDC2L, _PDC2
        .equiv  PDC2H, _PDC2+1

        .extern PHASE2
        .equiv  PHASE2L, _PHASE2
        .equiv  PHASE2H, _PHASE2+1

        .extern DTR2
        .equiv  DTR2L, _DTR2
        .equiv  DTR2H, _DTR2+1

        .extern ALTDTR2
        .equiv  ALTDTR2L, _ALTDTR2
        .equiv  ALTDTR2H, _ALTDTR2+1

        .extern TRIG2
        .equiv  TRIG2L, _TRIG2
        .equiv  TRIG2H, _TRIG2+1

        .extern TRGCON2
        .equiv  TRGCON2L, _TRGCON2
        .equiv  TRGCON2H, _TRGCON2+1

        .extern LEBCON2
        .equiv  LEBCON2L, _LEBCON2
        .equiv  LEBCON2H, _LEBCON2+1

        .extern CMPCON1
        .equiv  CMPCON1L, _CMPCON1
        .equiv  CMPCON1H, _CMPCON1+1

        .extern CMPDAC1
        .equiv  CMPDAC1L, _CMPDAC1
        .equiv  CMPDAC1H, _CMPDAC1+1

        .extern CMPCON2
        .equiv  CMPCON2L, _CMPCON2
        .equiv  CMPCON2H, _CMPCON2+1

        .extern CMPDAC2
        .equiv  CMPDAC2L, _CMPDAC2
        .equiv  CMPDAC2H, _CMPDAC2+1

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

        .extern OSCTUN
        .equiv  OSCTUNL, _OSCTUN
        .equiv  OSCTUNH, _OSCTUN+1

        .extern OSCTUN2
        .equiv  OSCTUN2L, _OSCTUN2
        .equiv  OSCTUN2H, _OSCTUN2+1

        .extern LFSR
        .equiv  LFSRL, _LFSR
        .equiv  LFSRH, _LFSR+1

        .extern BSRAM
        .equiv  BSRAML, _BSRAM
        .equiv  BSRAMH, _BSRAM+1

        .extern NVMCON
        .equiv  NVMCONL, _NVMCON
        .equiv  NVMCONH, _NVMCON+1

        .extern NVMADR
        .equiv  NVMADRL, _NVMADR
        .equiv  NVMADRH, _NVMADR+1

        .extern NVMADRU
        .equiv  NVMADRUL, _NVMADRU
        .equiv  NVMADRUH, _NVMADRU+1

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


;----- CNPU1 Bits -----------------------------------------------------
        .equiv CN0PUE,  0x0000
        .equiv CN1PUE,  0x0001
        .equiv CN2PUE,  0x0002
        .equiv CN3PUE,  0x0003
        .equiv CN4PUE,  0x0004
        .equiv CN5PUE,  0x0005
        .equiv CN6PUE,  0x0006
        .equiv CN7PUE,  0x0007


;----- INTCON1 Bits -----------------------------------------------------
        .equiv OSCFAIL, 0x0001
        .equiv STKERR,  0x0002
        .equiv ADDRERR, 0x0003
        .equiv MATHERR, 0x0004
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
        .equiv DISI,    0x000E
        .equiv ALTIVT,  0x000F


;----- IFS0 Bits -----------------------------------------------------
        .equiv INT0IF,  0x0000
        .equiv OC1IF,   0x0002
        .equiv T1IF,    0x0003
        .equiv T2IF,    0x0006
        .equiv SPI1IF,  0x0008
        .equiv U1RXIF,  0x0009
        .equiv U1TXIF,  0x000A
        .equiv ADIF,    0x000B
        .equiv NVMIF,   0x000C
        .equiv SI2CIF,  0x000D
        .equiv MI2CIF,  0x000E


;----- IFS1 Bits -----------------------------------------------------
        .equiv INT1IF,  0x0000
        .equiv INT2IF,  0x0001
        .equiv PSEMIF,  0x0002
        .equiv PWM1IF,  0x0003
        .equiv PWM2IF,  0x0004
        .equiv CNIF,    0x000B
        .equiv AC1IF,   0x000D
        .equiv AC2IF,   0x000E

        .equiv PWMEVIF, 0x0002


;----- IFS2 Bits -----------------------------------------------------
        .equiv ADCP0IF, 0x0005
        .equiv ADCP1IF, 0x0006
        .equiv ADCP2IF, 0x0007


;----- IEC0 Bits -----------------------------------------------------
        .equiv INT0IE,  0x0000
        .equiv OC1IE,   0x0002
        .equiv T1IE,    0x0003
        .equiv T2IE,    0x0006
        .equiv SPI1IE,  0x0008
        .equiv U1RXIE,  0x0009
        .equiv U1TXIE,  0x000A
        .equiv ADIE,    0x000B
        .equiv NVMIE,   0x000C
        .equiv SI2CIE,  0x000D
        .equiv MI2CIE,  0x000E


;----- IEC1 Bits -----------------------------------------------------
        .equiv INT1IE,  0x0000
        .equiv INT2IE,  0x0001
        .equiv PSEMIE,  0x0002
        .equiv PWM1IE,  0x0003
        .equiv PWM2IE,  0x0004
        .equiv CNIE,    0x000B
        .equiv AC1IE,   0x000D
        .equiv AC2IE,   0x000E

        .equiv PWMEVIE, 0x0002


;----- IEC2 Bits -----------------------------------------------------
        .equiv ADCP0IE, 0x0005
        .equiv ADCP1IE, 0x0006
        .equiv ADCP2IE, 0x0007


;----- IPC0 Bits -----------------------------------------------------
        .equiv INT0IP0, 0x0000
        .equiv INT0IP1, 0x0001
        .equiv INT0IP2, 0x0002
        .equiv OC1IP0,  0x0008
        .equiv OC1IP1,  0x0009
        .equiv OC1IP2,  0x000A
        .equiv T1IP0,   0x000C
        .equiv T1IP1,   0x000D
        .equiv T1IP2,   0x000E


;----- IPC1 Bits -----------------------------------------------------
        .equiv T2IP0,   0x0008
        .equiv T2IP1,   0x0009
        .equiv T2IP2,   0x000A


;----- IPC2 Bits -----------------------------------------------------
        .equiv SPI1IP0, 0x0000
        .equiv SPI1IP1, 0x0001
        .equiv SPI1IP2, 0x0002
        .equiv U1RXIP0, 0x0004
        .equiv U1RXIP1, 0x0005
        .equiv U1RXIP2, 0x0006
        .equiv U1TXIP0, 0x0008
        .equiv U1TXIP1, 0x0009
        .equiv U1TXIP2, 0x000A
        .equiv ADIP0,   0x000C
        .equiv ADIP1,   0x000D
        .equiv ADIP2,   0x000E


;----- IPC3 Bits -----------------------------------------------------
        .equiv NVMIP0,  0x0000
        .equiv NVMIP1,  0x0001
        .equiv NVMIP2,  0x0002
        .equiv SI2CIP0, 0x0004
        .equiv SI2CIP1, 0x0005
        .equiv SI2CIP2, 0x0006
        .equiv MI2CIP0, 0x0008
        .equiv MI2CIP1, 0x0009
        .equiv MI2CIP2, 0x000A


;----- IPC4 Bits -----------------------------------------------------
        .equiv INT1IP0, 0x0000
        .equiv INT1IP1, 0x0001
        .equiv INT1IP2, 0x0002
        .equiv INT2IP0, 0x0004
        .equiv INT2IP1, 0x0005
        .equiv INT2IP2, 0x0006
        .equiv PSEMIP0, 0x0008
        .equiv PSEMIP1, 0x0009
        .equiv PSEMIP2, 0x000A
        .equiv PWM1IP0, 0x000C
        .equiv PWM1IP1, 0x000D
        .equiv PWM1IP2, 0x000E


;----- IPC5 Bits -----------------------------------------------------
        .equiv PWM2IP0, 0x0000
        .equiv PWM2IP1, 0x0001
        .equiv PWM2IP2, 0x0002


;----- IPC6 Bits -----------------------------------------------------
        .equiv CNIP0,   0x000C
        .equiv CNIP1,   0x000D
        .equiv CNIP2,   0x000E


;----- IPC7 Bits -----------------------------------------------------
        .equiv AC1IP0,  0x0004
        .equiv AC1IP1,  0x0005
        .equiv AC1IP2,  0x0006
        .equiv AC2IP0,  0x0008
        .equiv AC2IP1,  0x0009
        .equiv AC2IP2,  0x000A


;----- IPC9 Bits -----------------------------------------------------
        .equiv ADCP0IP0, 0x0004
        .equiv ADCP0IP1, 0x0005
        .equiv ADCP0IP2, 0x0006
        .equiv ADCP1IP0, 0x0008
        .equiv ADCP1IP1, 0x0009
        .equiv ADCP1IP2, 0x000A
        .equiv ADCP2IP0, 0x000C
        .equiv ADCP2IP1, 0x000D
        .equiv ADCP2IP2, 0x000E


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


;----- OC1CON Bits -----------------------------------------------------
        .equiv OCTSEL,  0x0003
        .equiv OCFLT,   0x0004
        .equiv OCSIDL,  0x000D

        .equiv OCM0,    0x0000
        .equiv OCM1,    0x0001
        .equiv OCM2,    0x0002


;----- I2CRCV Bits -----------------------------------------------------
        .equiv I2CRCV0, 0x0000
        .equiv I2CRCV1, 0x0001
        .equiv I2CRCV2, 0x0002
        .equiv I2CRCV3, 0x0003
        .equiv I2CRCV4, 0x0004
        .equiv I2CRCV5, 0x0005
        .equiv I2CRCV6, 0x0006
        .equiv I2CRCV7, 0x0007


;----- I2CTRN Bits -----------------------------------------------------
        .equiv I2CTRN0, 0x0000
        .equiv I2CTRN1, 0x0001
        .equiv I2CTRN2, 0x0002
        .equiv I2CTRN3, 0x0003
        .equiv I2CTRN4, 0x0004
        .equiv I2CTRN5, 0x0005
        .equiv I2CTRN6, 0x0006
        .equiv I2CTRN7, 0x0007


;----- I2CCON Bits -----------------------------------------------------
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


;----- I2CSTAT Bits -----------------------------------------------------
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


;----- U1MODE Bits -----------------------------------------------------
        .equiv STSEL,   0x0000
        .equiv BRGH,    0x0003
        .equiv RXINV,   0x0004
        .equiv ABAUD,   0x0005
        .equiv LPBACK,  0x0006
        .equiv WAKE,    0x0007
        .equiv ALTIO,   0x000A
        .equiv IREN,    0x000C
        .equiv USIDL,   0x000D
        .equiv UARTEN,  0x000F

        .equiv PDSEL0,  0x0001
        .equiv PDSEL1,  0x0002


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

        .equiv UTX8,    0x0008


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

        .equiv URX8,    0x0008


;----- SPI1STAT Bits -----------------------------------------------------
        .equiv SPIRBF,  0x0000
        .equiv SPITBF,  0x0001
        .equiv SPIROV,  0x0006
        .equiv SPISIDL, 0x000D
        .equiv SPIEN,   0x000F


;----- SPI1CON1 Bits -----------------------------------------------------
        .equiv PPRE0,   0x0000
        .equiv PPRE1,   0x0001
        .equiv SPRE0,   0x0002
        .equiv SPRE1,   0x0003
        .equiv SPRE2,   0x0004
        .equiv MSTEN,   0x0005
        .equiv CKP,     0x0006
        .equiv SSEN,    0x0007
        .equiv CKE,     0x0008
        .equiv SMP,     0x0009
        .equiv MODE16,  0x000A
        .equiv DISSDO,  0x000B
        .equiv DISSCK,  0x000C



;----- SPI1CON2 Bits -----------------------------------------------------
        .equiv FRMDLY,  0x0001
        .equiv FRMPOL,  0x000D
        .equiv SPIFSD,  0x000E
        .equiv FRMEN,   0x000F


;----- TRISA Bits -----------------------------------------------------
        .equiv TRISA9,  0x0009


;----- PORTA Bits -----------------------------------------------------
        .equiv RA9,     0x0009


;----- LATA Bits -----------------------------------------------------
        .equiv LATA9,   0x0009


;----- TRISB Bits -----------------------------------------------------
        .equiv TRISB0,  0x0000
        .equiv TRISB1,  0x0001
        .equiv TRISB2,  0x0002
        .equiv TRISB3,  0x0003
        .equiv TRISB4,  0x0004
        .equiv TRISB5,  0x0005
        .equiv TRISB6,  0x0006
        .equiv TRISB7,  0x0007


;----- PORTB Bits -----------------------------------------------------
        .equiv RB0,     0x0000
        .equiv RB1,     0x0001
        .equiv RB2,     0x0002
        .equiv RB3,     0x0003
        .equiv RB4,     0x0004
        .equiv RB5,     0x0005
        .equiv RB6,     0x0006
        .equiv RB7,     0x0007


;----- LATB Bits -----------------------------------------------------
        .equiv LATB0,   0x0000
        .equiv LATB1,   0x0001
        .equiv LATB2,   0x0002
        .equiv LATB3,   0x0003
        .equiv LATB4,   0x0004
        .equiv LATB5,   0x0005
        .equiv LATB6,   0x0006
        .equiv LATB7,   0x0007


;----- TRISD Bits -----------------------------------------------------
        .equiv TRISD0,  0x0000


;----- PORTD Bits -----------------------------------------------------
        .equiv RD0,     0x0000


;----- LATD Bits -----------------------------------------------------
        .equiv LATD0,   0x0000


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


;----- TRISF Bits -----------------------------------------------------
        .equiv TRISF6,  0x0006
        .equiv TRISF7,  0x0007
        .equiv TRISF8,  0x0008


;----- PORTF Bits -----------------------------------------------------
        .equiv RF6,     0x0006
        .equiv RF7,     0x0007
        .equiv RF8,     0x0008


;----- LATF Bits -----------------------------------------------------
        .equiv LATF6,   0x0006
        .equiv LATF7,   0x0007
        .equiv LATF8,   0x0008


;----- ADCON Bits -----------------------------------------------------
        .equiv SEQSAMP, 0x0005
        .equiv ORDER,   0x0006
        .equiv EIE,     0x0007
        .equiv FORM,    0x0008
        .equiv GSWTRG,  0x000A
        .equiv ADSIDL,  0x000D
        .equiv ADON,    0x000F

        .equiv ADCS0,   0x0000
        .equiv ADCS1,   0x0001
        .equiv ADCS2,   0x0002


;----- ADPCFG Bits -----------------------------------------------------
        .equiv PCFG0,   0x0000
        .equiv PCFG1,   0x0001
        .equiv PCFG2,   0x0002
        .equiv PCFG3,   0x0003
        .equiv PCFG4,   0x0004
        .equiv PCFG5,   0x0005
        .equiv PCFG6,   0x0006
        .equiv PCFG7,   0x0007


;----- ADSTAT Bits -----------------------------------------------------
        .equiv P0RDY,   0x0000
        .equiv P1RDY,   0x0001
        .equiv P2RDY,   0x0002


;----- ADCPC0 Bits -----------------------------------------------------
        .equiv SWTRG0,  0x0005
        .equiv PEND0,   0x0006
        .equiv IRQEN0,  0x0007
        .equiv SWTRG1,  0x000D
        .equiv PEND1,   0x000E
        .equiv IRQEN1,  0x000F

        .equiv TRGSRC00, 0x0000
        .equiv TRGSRC01, 0x0001
        .equiv TRGSRC02, 0x0002
        .equiv TRGSRC03, 0x0003
        .equiv TRGSRC04, 0x0004
        .equiv TRGSRC10, 0x0008
        .equiv TRGSRC11, 0x0009
        .equiv TRGSRC12, 0x000A
        .equiv TRGSRC13, 0x000B
        .equiv TRGSRC14, 0x000C
        .equiv TRGSRC15, 0x000D


;----- ADCPC1 Bits -----------------------------------------------------
        .equiv SWTRG2,  0x0005
        .equiv PEND2,   0x0006
        .equiv IRQEN2,  0x0007

        .equiv TRGSRC20, 0x0000
        .equiv TRGSRC21, 0x0001
        .equiv TRGSRC22, 0x0002
        .equiv TRGSRC23, 0x0003
        .equiv TRGSRC24, 0x0004


;----- PTCON Bits -----------------------------------------------------
        .equiv SYNCEN,  0x0007
        .equiv SYNCOEN, 0x0008
        .equiv SYNCPOL, 0x0009
        .equiv EIPU,    0x000A
        .equiv SEIEN,   0x000B
        .equiv SESTAT,  0x000C
        .equiv PTSIDL,  0x000D
        .equiv PTEN,    0x000F

        .equiv SEVTPS0, 0x0000
        .equiv SEVTPS1, 0x0001
        .equiv SEVTPS2, 0x0002
        .equiv SEVTPS3, 0x0003
        .equiv SYNCSRC0, 0x0004
        .equiv SYNCSRC1, 0x0005
        .equiv SYNCSRC2, 0x0006


;----- PWMCON1 Bits -----------------------------------------------------
        .equiv IUE,     0x0000
        .equiv XPRES,   0x0001
        .equiv MDCS,    0x0008
        .equiv ITB,     0x0009
        .equiv TRGIEN,  0x000A
        .equiv CLIEN,   0x000B
        .equiv FLTIEN,  0x000C
        .equiv TRGSTAT, 0x000D
        .equiv CLSTAT,  0x000E
        .equiv FLTSTAT, 0x000F

        .equiv DTC0,    0x0006
        .equiv DTC1,    0x0007


;----- IOCON1 Bits -----------------------------------------------------
        .equiv OSYNC,   0x0000
        .equiv OVRENL,  0x0008
        .equiv OVRENH,  0x0009
        .equiv POLL,    0x000C
        .equiv POLH,    0x000D
        .equiv PENL,    0x000E
        .equiv PENH,    0x000F

        .equiv CLDAT0,  0x0002
        .equiv CLDAT1,  0x0003
        .equiv FLTDAT0, 0x0004
        .equiv FLTDAT1, 0x0005
        .equiv OVRDAT0, 0x0006
        .equiv OVRDAT1, 0x0007
        .equiv PMOD0,   0x000A
        .equiv PMOD1,   0x000B


;----- FCLCON1 Bits -----------------------------------------------------
        .equiv FLTPOL,  0x0002
        .equiv CLMODE,  0x0007
        .equiv CLPOL,   0x0008

        .equiv FLTMOD0, 0x0000
        .equiv FLTMOD1, 0x0001
        .equiv FLTSRC0, 0x0003
        .equiv FLTSRC1, 0x0004
        .equiv FLTSRC2, 0x0005
        .equiv FLTSRC3, 0x0006
        .equiv CLSRC0,  0x0009
        .equiv CLSRC1,  0x000A
        .equiv CLSRC2,  0x000B
        .equiv CLSRC3,  0x000C


;----- TRGCON1 Bits -----------------------------------------------------
        .equiv TRGSTRT0, 0x0000
        .equiv TRGSTRT1, 0x0001
        .equiv TRGSTRT2, 0x0002
        .equiv TRGSTRT3, 0x0003
        .equiv TRGSTRT4, 0x0004
        .equiv TRGSTRT5, 0x0005
        .equiv TRGDIV0, 0x000D
        .equiv TRGDIV1, 0x000E
        .equiv TRGDIV2, 0x000F


;----- LEBCON1 Bits -----------------------------------------------------
        .equiv CLLEBEN, 0x000A
        .equiv FLTLEBEN, 0x000B
        .equiv PLF,     0x000C
        .equiv PLR,     0x000D
        .equiv PHF,     0x000E
        .equiv PHR,     0x000F

        .equiv LEB0,    0x0003
        .equiv LEB1,    0x0004
        .equiv LEB2,    0x0005
        .equiv LEB3,    0x0006
        .equiv LEB4,    0x0007
        .equiv LEB5,    0x0008
        .equiv LEB6,    0x0009


;----- PWMCON2 Bits -----------------------------------------------------
       ;.equiv IUE,     0x0000
       ;.equiv XPRES,   0x0001
       ;.equiv MDCS,    0x0008
       ;.equiv ITB,     0x0009
       ;.equiv TRGIEN,  0x000A
       ;.equiv CLIEN,   0x000B
       ;.equiv FLTIEN,  0x000C
       ;.equiv TRGSTAT, 0x000D
       ;.equiv CLSTAT,  0x000E
       ;.equiv FLTSTAT, 0x000F

       ;.equiv DTC0,    0x0006
       ;.equiv DTC1,    0x0007


;----- IOCON2 Bits -----------------------------------------------------
       ;.equiv OSYNC,   0x0000
       ;.equiv OVRENL,  0x0008
       ;.equiv OVRENH,  0x0009
       ;.equiv POLL,    0x000C
       ;.equiv POLH,    0x000D
       ;.equiv PENL,    0x000E
       ;.equiv PENH,    0x000F

       ;.equiv CLDAT0,  0x0002
       ;.equiv CLDAT1,  0x0003
       ;.equiv FLTDAT0, 0x0004
       ;.equiv FLTDAT1, 0x0005
       ;.equiv OVRDAT0, 0x0006
       ;.equiv OVRDAT1, 0x0007
       ;.equiv PMOD0,   0x000A
       ;.equiv PMOD1,   0x000B


;----- FCLCON2 Bits -----------------------------------------------------
       ;.equiv FLTPOL,  0x0002
       ;.equiv CLMODE,  0x0007
       ;.equiv CLPOL,   0x0008

       ;.equiv FLTMOD0, 0x0000
       ;.equiv FLTMOD1, 0x0001
       ;.equiv FLTSRC0, 0x0003
       ;.equiv FLTSRC1, 0x0004
       ;.equiv FLTSRC2, 0x0005
       ;.equiv FLTSRC3, 0x0006
       ;.equiv CLSRC0,  0x0009
       ;.equiv CLSRC1,  0x000A
       ;.equiv CLSRC2,  0x000B
       ;.equiv CLSRC3,  0x000C


;----- TRGCON2 Bits -----------------------------------------------------
       ;.equiv TRGSTRT0, 0x0000
       ;.equiv TRGSTRT1, 0x0001
       ;.equiv TRGSTRT2, 0x0002
       ;.equiv TRGSTRT3, 0x0003
       ;.equiv TRGSTRT4, 0x0004
       ;.equiv TRGSTRT5, 0x0005
       ;.equiv TRGDIV0, 0x000D
       ;.equiv TRGDIV1, 0x000E
       ;.equiv TRGDIV2, 0x000F


;----- LEBCON2 Bits -----------------------------------------------------
       ;.equiv CLLEBEN, 0x000A
       ;.equiv FLTLEBEN, 0x000B
       ;.equiv PLF,     0x000C
       ;.equiv PLR,     0x000D
       ;.equiv PHF,     0x000E
       ;.equiv PHR,     0x000F

       ;.equiv LEB0,    0x0003
       ;.equiv LEB1,    0x0004
       ;.equiv LEB2,    0x0005
       ;.equiv LEB3,    0x0006
       ;.equiv LEB4,    0x0007
       ;.equiv LEB5,    0x0008
       ;.equiv LEB6,    0x0009


;----- CMPCON1 Bits -----------------------------------------------------
        .equiv RANGE,   0x0000
        .equiv CMPPOL,  0x0001
        .equiv CMPSTAT, 0x0003
        .equiv EXTREF,  0x0005
        .equiv CMPSIDL, 0x000D
        .equiv CMPON,   0x000F

        .equiv INSEL0,  0x0006
        .equiv INSEL1,  0x0007


;----- CMPDAC1 Bits -----------------------------------------------------
        .equiv CMREF0,  0x0000
        .equiv CMREF1,  0x0001
        .equiv CMREF2,  0x0002
        .equiv CMREF3,  0x0003
        .equiv CMREF4,  0x0004
        .equiv CMREF5,  0x0005
        .equiv CMREF6,  0x0006
        .equiv CMREF7,  0x0007
        .equiv CMREF8,  0x0008
        .equiv CMREF9,  0x0009



;----- CMPCON2 Bits -----------------------------------------------------
       ;.equiv RANGE,   0x0000
       ;.equiv CMPPOL,  0x0001
       ;.equiv CMPSTAT, 0x0003
       ;.equiv EXTREF,  0x0005
       ;.equiv CMPSIDL, 0x000D
       ;.equiv CMPON,   0x000F

       ;.equiv INSEL0,  0x0006
       ;.equiv INSEL1,  0x0007


;----- CMPDAC2 Bits -----------------------------------------------------
       ;.equiv CMREF0,  0x0000
       ;.equiv CMREF1,  0x0001
       ;.equiv CMREF2,  0x0002
       ;.equiv CMREF3,  0x0003
       ;.equiv CMREF4,  0x0004
       ;.equiv CMREF5,  0x0005
       ;.equiv CMREF6,  0x0006
       ;.equiv CMREF7,  0x0007
       ;.equiv CMREF8,  0x0008
       ;.equiv CMREF9,  0x0009



;----- RCON Bits -----------------------------------------------------
        .equiv POR,     0x0000
        .equiv IDLE,    0x0002
        .equiv SLEEP,   0x0003
        .equiv WDTO,    0x0004
        .equiv SWDTEN,  0x0005
        .equiv SWR,     0x0006
        .equiv EXTR,    0x0007
        .equiv IOPUWR,  0x000E
        .equiv TRAPR,   0x000F


;----- OSCCON Bits -----------------------------------------------------
        .equiv OSWEN,   0x0000
        .equiv TSEQEN,  0x0002
        .equiv CF,      0x0003
        .equiv PRCDEN,  0x0004
        .equiv LOCK,    0x0005
        .equiv CLKLOCK, 0x0007

        .equiv NOSC0,   0x0008
        .equiv NOSC1,   0x0009
        .equiv NOSC2,   0x000A
        .equiv COSC0,   0x000C
        .equiv COSC1,   0x000D
        .equiv COSC2,   0x000E


;----- OSCTUN Bits -----------------------------------------------------
        .equiv TUN0,    0x0000
        .equiv TUN1,    0x0001
        .equiv TUN2,    0x0002
        .equiv TUN3,    0x0003


;----- BSRAM Bits -----------------------------------------------------
        .equiv RL_BSR,  0x0000
        .equiv IR_BSR,  0x0001
        .equiv IW_BSR,  0x0002


;----- NVMCON Bits -----------------------------------------------------
        .equiv TWRI,    0x0008
        .equiv WRERR,   0x000D
        .equiv WREN,    0x000E
        .equiv WR,      0x000F

        .equiv PROGOP0, 0x0000
        .equiv PROGOP1, 0x0001
        .equiv PROGOP2, 0x0002
        .equiv PROGOP3, 0x0003
        .equiv PROGOP4, 0x0004
        .equiv PROGOP5, 0x0005
        .equiv PROGOP6, 0x0006


;----- PMD1 Bits -----------------------------------------------------
        .equiv ADCMD,   0x0000
        .equiv SPI1MD,  0x0003
        .equiv U1MD,    0x0005
        .equiv I2CMD,   0x0007
        .equiv PWMMD,   0x0009
        .equiv T1MD,    0x000B
        .equiv T2MD,    0x000C
        .equiv T3MD,    0x000D


;----- PMD2 Bits -----------------------------------------------------
        .equiv OC1MD,   0x0000
        .equiv OC2MD,   0x0001


;----- PMD3 Bits -----------------------------------------------------
        .equiv CMP_PSMD, 0x000B




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
;     BWRP_ON              Boot Segment is write protected
;     WR_PROT_BOOT_ON      Boot Segment is write protected
;     BWRP_OFF             Boot Segment may be written
;     WR_PROT_BOOT_OFF     Boot Segment may be written
;
;   Boot Segment Program Flash Code Protection:
;     HIGH_MEDIUM_BOOT_CODEHigh Security, Medium-sized Boot Flash
;     HIGH_SMALL_BOOT_CODE High Security, Small-sized Boot Flash
;     STRD_MEDIUM_BOOT_CODEStandard Security, Medium-sized Boot Flash
;     STRD_SMALL_BOOT_CODE Standard Security, Small-sized Boot Flash
;     NO_BOOT_CODE         No Boot Segment
;
        .equiv BWRP_ON,         0xFFFE ; Boot Segment is write protected
        .equiv WR_PROT_BOOT_ON, 0xFFFE ; Boot Segment is write protected
        .equiv BWRP_OFF,        0xFFFF ; Boot Segment may be written
        .equiv WR_PROT_BOOT_OFF, 0xFFFF ; Boot Segment may be written

        .equiv HIGH_MEDIUM_BOOT_CODE, 0xFFF3 ; High Security, Medium-sized Boot Flash
        .equiv HIGH_SMALL_BOOT_CODE, 0xFFF5 ; High Security, Small-sized Boot Flash
        .equiv STRD_MEDIUM_BOOT_CODE, 0xFFFB ; Standard Security, Medium-sized Boot Flash
        .equiv STRD_SMALL_BOOT_CODE, 0xFFFD ; Standard Security, Small-sized Boot Flash
        .equiv NO_BOOT_CODE,    0xFFFF ; No Boot Segment


;----- FGS (0xf80004) --------------------------------------------------
;
;  The following settings are available for FGS:
;
;   General Code Segment Write Protect:
;     GWRP_ON              General Segment is write protected
;     GWRP_OFF             General Segment may be written
;
;   General Segment Code Protection:
;     GSS_HIGH             High Security Code Protection Enabled
;     GSS_ON               Enabled
;     GSS_STD              Enabled
;     CODE_PROT_ON         Enabled
;     GSS_OFF              Disabled
;     CODE_PROT_OFF        Disabled
;
        .equiv GWRP_ON,         0xFFFE ; General Segment is write protected
        .equiv GWRP_OFF,        0xFFFF ; General Segment may be written

        .equiv GSS_HIGH,        0xFFFB ; High Security Code Protection Enabled
        .equiv GSS_ON,          0xFFFD ; Enabled
        .equiv GSS_STD,         0xFFFD ; Enabled
        .equiv CODE_PROT_ON,    0xFFFD ; Enabled
        .equiv GSS_OFF,         0xFFFF ; Disabled
        .equiv CODE_PROT_OFF,   0xFFFF ; Disabled


;----- FOSCSEL (0xf80006) --------------------------------------------------
;
;  The following settings are available for FOSCSEL:
;
;   Oscillator Mode:
;     FRC                  Internal Fast RC (FRC)
;     FRC_PLL              Internal Fast RC (FRC) w/ PLL
;     PRIOSC               Primary Oscillator (HS, EC)
;     PRIOSC_PLL           Primary Oscillator (HS, EC) w/ PLL
;
        .equiv FRC,             0xFFFC ; Internal Fast RC (FRC)
        .equiv FRC_PLL,         0xFFFD ; Internal Fast RC (FRC) w/ PLL
        .equiv PRIOSC,          0xFFFE ; Primary Oscillator (HS, EC)
        .equiv PRIOSC_PLL,      0xFFFF ; Primary Oscillator (HS, EC) w/ PLL


;----- FOSC (0xf80008) --------------------------------------------------
;
;  The following settings are available for FOSC:
;
;   Primary Oscillator Source:
;     EC                   EC Oscillator Mode
;     HS                   HS Oscillator Mode
;     PRIOSC_OFF           Primary Oscillator Disabled
;     HS_EC_DIS            Primary Oscillator Disabled
;
;   OSCI/OSCO Pin Function:
;     OSC2_IO              OSCO pin has digital I/O function
;     OSC2_CLKO            OSCO pin has clock out function
;
;   Frequency Range Select:
;     FRC_LO_RANGE         Low Range
;     FRC_HI_RANGE         High Range
;
;   Clock Switching and Monitor:
;     CSW_FSCM_ON          Sw Enabled, Mon Enabled
;     CSW_ON_FSCM_OFF      Sw Enabled, Mon Disabled
;     CSW_FSCM_OFF         Sw Disabled, Mon Disabled
;
        .equiv EC,              0xFFFC ; EC Oscillator Mode
        .equiv HS,              0xFFFE ; HS Oscillator Mode
        .equiv PRIOSC_OFF,      0xFFFF ; Primary Oscillator Disabled
        .equiv HS_EC_DIS,       0xFFFF ; Primary Oscillator Disabled

        .equiv OSC2_IO,         0xFFFB ; OSCO pin has digital I/O function
        .equiv OSC2_CLKO,       0xFFFF ; OSCO pin has clock out function

        .equiv FRC_LO_RANGE,    0xFFDF ; Low Range
        .equiv FRC_HI_RANGE,    0xFFFF ; High Range

        .equiv CSW_FSCM_ON,     0xFF3F ; Sw Enabled, Mon Enabled
        .equiv CSW_ON_FSCM_OFF, 0xFF7F ; Sw Enabled, Mon Disabled
        .equiv CSW_FSCM_OFF,    0xFFBF ; Sw Disabled, Mon Disabled


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
;     WINDIS_ON            Window mode
;     WINDIS_OFF           Non-Window mode
;
;   Watchdog Timer Enable:
;     FWDTEN_OFF           Disable
;     FWDTEN_ON            Enable
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

        .equiv WINDIS_ON,       0xFFBF ; Window mode
        .equiv WINDIS_OFF,      0xFFFF ; Non-Window mode

        .equiv FWDTEN_OFF,      0xFF7F ; Disable
        .equiv FWDTEN_ON,       0xFFFF ; Enable


;----- FPOR (0xf8000c) --------------------------------------------------
;
;  The following settings are available for FPOR:
;
;   POR Timer Value:
;     PWRT_OFF             Off
;     PWRT_2               2ms
;     PWRT_4               4ms
;     PWRT_8               8ms
;     PWRT_16              16ms
;     PWRT_32              32ms
;     PWRT_64              64ms
;     PWRT_128             128ms
;
        .equiv PWRT_OFF,        0xFFF8 ; Off
        .equiv PWRT_2,          0xFFF9 ; 2ms
        .equiv PWRT_4,          0xFFFA ; 4ms
        .equiv PWRT_8,          0xFFFB ; 8ms
        .equiv PWRT_16,         0xFFFC ; 16ms
        .equiv PWRT_32,         0xFFFD ; 32ms
        .equiv PWRT_64,         0xFFFE ; 64ms
        .equiv PWRT_128,        0xFFFF ; 128ms


;----- FICD (0xf8000e) --------------------------------------------------
;
;  The following settings are available for FICD:
;
;   Comm Channel Select:
;     NONE                 Reserved
;     ICS_PGD2             Use EMUC2 and EMUD2
;     ICS_PGD1             Use EMUC1 and EMUD1
;     ICS_PGD              Use PGC/EMUC and PGD/EMUD
;
        .equiv NONE,            0xFFFC ; Reserved
        .equiv ICS_PGD2,        0xFFFD ; Use EMUC2 and EMUD2
        .equiv ICS_PGD1,        0xFFFE ; Use EMUC1 and EMUD1
        .equiv ICS_PGD,         0xFFFF ; Use PGC/EMUC and PGD/EMUD


;----- FUID0 (0xf80010) --------------------------------------------------
;
;  The following settings are available for FUID0:
;

;----- FUID1 (0xf80012) --------------------------------------------------
;
;  The following settings are available for FUID1:
;

.LIST
