;==========================================================================
;  PIC33EP64GS506 Standard Assembly Include File
; 
;  (c) Copyright 2014 Microchip Technology, All rights reserved
;  Part support version v1.22.A(19-Aug-2014)
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC33EP64GS506 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p33EP64GS506
;       2. Placing a ".equ" directive before the ".include":
;               .equ __33EP64GS506, 1
;               .include "p33EP64GS506.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __33EP64GS506
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

        .extern DSRPAG
        .equiv  DSRPAGL, _DSRPAG
        .equiv  DSRPAGH, _DSRPAG+1

        .extern DSWPAG
        .equiv  DSWPAGL, _DSWPAG
        .equiv  DSWPAGH, _DSWPAG+1

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

        .extern TBLPAG
        .equiv  TBLPAGL, _TBLPAG
        .equiv  TBLPAGH, _TBLPAG+1

        .extern CTXTSTAT
        .equiv  CTXTSTATL, _CTXTSTAT
        .equiv  CTXTSTATH, _CTXTSTAT+1

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

        .extern I2C1CON1
        .equiv  I2C1CON1L, _I2C1CON1
        .equiv  I2C1CON1H, _I2C1CON1+1

        .extern I2C1CON2
        .equiv  I2C1CON2L, _I2C1CON2
        .equiv  I2C1CON2H, _I2C1CON2+1

        .extern I2C1STAT
        .equiv  I2C1STATL, _I2C1STAT
        .equiv  I2C1STATH, _I2C1STAT+1

        .extern I2C1ADD
        .equiv  I2C1ADDL, _I2C1ADD
        .equiv  I2C1ADDH, _I2C1ADD+1

        .extern I2C1MSK
        .equiv  I2C1MSKL, _I2C1MSK
        .equiv  I2C1MSKH, _I2C1MSK+1

        .extern I2C1BRG
        .equiv  I2C1BRGL, _I2C1BRG
        .equiv  I2C1BRGH, _I2C1BRG+1

        .extern I2C1TRN
        .equiv  I2C1TRNL, _I2C1TRN
        .equiv  I2C1TRNH, _I2C1TRN+1

        .extern I2C1RCV
        .equiv  I2C1RCVL, _I2C1RCV
        .equiv  I2C1RCVH, _I2C1RCV+1

        .extern I2C2CON1
        .equiv  I2C2CON1L, _I2C2CON1
        .equiv  I2C2CON1H, _I2C2CON1+1

        .extern I2C2CON2
        .equiv  I2C2CON2L, _I2C2CON2
        .equiv  I2C2CON2H, _I2C2CON2+1

        .extern I2C2STAT
        .equiv  I2C2STATL, _I2C2STAT
        .equiv  I2C2STATH, _I2C2STAT+1

        .extern I2C2ADD
        .equiv  I2C2ADDL, _I2C2ADD
        .equiv  I2C2ADDH, _I2C2ADD+1

        .extern I2C2MSK
        .equiv  I2C2MSKL, _I2C2MSK
        .equiv  I2C2MSKH, _I2C2MSK+1

        .extern I2C2BRG
        .equiv  I2C2BRGL, _I2C2BRG
        .equiv  I2C2BRGH, _I2C2BRG+1

        .extern I2C2TRN
        .equiv  I2C2TRNL, _I2C2TRN
        .equiv  I2C2TRNH, _I2C2TRN+1

        .extern I2C2RCV
        .equiv  I2C2RCVL, _I2C2RCV
        .equiv  I2C2RCVH, _I2C2RCV+1

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

        .extern ADCON1
        .equiv  ADCON1L, _ADCON1
        .equiv  ADCON1H, _ADCON1+1

        .extern ADCON2
        .equiv  ADCON2L, _ADCON2
        .equiv  ADCON2H, _ADCON2+1

        .extern ADCON3
        .equiv  ADCON3L, _ADCON3
        .equiv  ADCON3H, _ADCON3+1

        .extern ADCON4
        .equiv  ADCON4L, _ADCON4
        .equiv  ADCON4H, _ADCON4+1

        .extern ADCON5
        .equiv  ADCON5L, _ADCON5
        .equiv  ADCON5H, _ADCON5+1

        .extern ADCON6
        .equiv  ADCON6L, _ADCON6
        .equiv  ADCON6H, _ADCON6+1

        .extern ADMOD
        .equiv  ADMODL, _ADMOD
        .equiv  ADMODH, _ADMOD+1

        .extern ADALT
        .equiv  ADALTL, _ADALT
        .equiv  ADALTH, _ADALT+1

        .extern ADGIRQENL
        .equiv  ADGIRQENLL, _ADGIRQENL
        .equiv  ADGIRQENLH, _ADGIRQENL+1

        .extern ADGIRQENH
        .equiv  ADGIRQENHL, _ADGIRQENH
        .equiv  ADGIRQENHH, _ADGIRQENH+1

        .extern ADCSSL
        .equiv  ADCSSLL, _ADCSSL
        .equiv  ADCSSLH, _ADCSSL+1

        .extern ADCSSH
        .equiv  ADCSSHL, _ADCSSH
        .equiv  ADCSSHH, _ADCSSH+1

        .extern ADSTATL
        .equiv  ADSTATLL, _ADSTATL
        .equiv  ADSTATLH, _ADSTATL+1

        .extern ADSTATH
        .equiv  ADSTATHL, _ADSTATH
        .equiv  ADSTATHH, _ADSTATH+1

        .extern DCMP1ENL
        .equiv  DCMP1ENLL, _DCMP1ENL
        .equiv  DCMP1ENLH, _DCMP1ENL+1

        .extern DCMP1ENH
        .equiv  DCMP1ENHL, _DCMP1ENH
        .equiv  DCMP1ENHH, _DCMP1ENH+1

        .extern DCMP1LO
        .equiv  DCMP1LOL, _DCMP1LO
        .equiv  DCMP1LOH, _DCMP1LO+1

        .extern DCMP1HI
        .equiv  DCMP1HIL, _DCMP1HI
        .equiv  DCMP1HIH, _DCMP1HI+1

        .extern DCMP2ENL
        .equiv  DCMP2ENLL, _DCMP2ENL
        .equiv  DCMP2ENLH, _DCMP2ENL+1

        .extern DCMP2ENH
        .equiv  DCMP2ENHL, _DCMP2ENH
        .equiv  DCMP2ENHH, _DCMP2ENH+1

        .extern DCMP2LO
        .equiv  DCMP2LOL, _DCMP2LO
        .equiv  DCMP2LOH, _DCMP2LO+1

        .extern DCMP2HI
        .equiv  DCMP2HIL, _DCMP2HI
        .equiv  DCMP2HIH, _DCMP2HI+1

        .extern ADFLTR1DAT
        .equiv  ADFLTR1DATL, _ADFLTR1DAT
        .equiv  ADFLTR1DATH, _ADFLTR1DAT+1

        .extern ADFLTR1CON
        .equiv  ADFLTR1CONL, _ADFLTR1CON
        .equiv  ADFLTR1CONH, _ADFLTR1CON+1

        .extern ADFLTR2DAT
        .equiv  ADFLTR2DATL, _ADFLTR2DAT
        .equiv  ADFLTR2DATH, _ADFLTR2DAT+1

        .extern ADFLTR2CON
        .equiv  ADFLTR2CONL, _ADFLTR2CON
        .equiv  ADFLTR2CONH, _ADFLTR2CON+1

        .extern ADTRIG1
        .equiv  ADTRIG1L, _ADTRIG1
        .equiv  ADTRIG1H, _ADTRIG1+1

        .extern ADTRIG2
        .equiv  ADTRIG2L, _ADTRIG2
        .equiv  ADTRIG2H, _ADTRIG2+1

        .extern ADTRIG3
        .equiv  ADTRIG3L, _ADTRIG3
        .equiv  ADTRIG3H, _ADTRIG3+1

        .extern ADTRIG4
        .equiv  ADTRIG4L, _ADTRIG4
        .equiv  ADTRIG4H, _ADTRIG4+1

        .extern ADTRIG5
        .equiv  ADTRIG5L, _ADTRIG5
        .equiv  ADTRIG5H, _ADTRIG5+1

        .extern ADTRIG6
        .equiv  ADTRIG6L, _ADTRIG6
        .equiv  ADTRIG6H, _ADTRIG6+1

        .extern ADTRIG7
        .equiv  ADTRIG7L, _ADTRIG7
        .equiv  ADTRIG7H, _ADTRIG7+1

        .extern ADTRIG8
        .equiv  ADTRIG8L, _ADTRIG8
        .equiv  ADTRIG8H, _ADTRIG8+1

        .extern ADTRIG9
        .equiv  ADTRIG9L, _ADTRIG9
        .equiv  ADTRIG9H, _ADTRIG9+1

        .extern ADTRIG10
        .equiv  ADTRIG10L, _ADTRIG10
        .equiv  ADTRIG10H, _ADTRIG10+1

        .extern ADTRIG11
        .equiv  ADTRIG11L, _ADTRIG11
        .equiv  ADTRIG11H, _ADTRIG11+1

        .extern ADTRIG12
        .equiv  ADTRIG12L, _ADTRIG12
        .equiv  ADTRIG12H, _ADTRIG12+1

        .extern ADTRIG13
        .equiv  ADTRIG13L, _ADTRIG13
        .equiv  ADTRIG13H, _ADTRIG13+1

        .extern ADTRIG14
        .equiv  ADTRIG14L, _ADTRIG14
        .equiv  ADTRIG14H, _ADTRIG14+1

        .extern DCMP1CON
        .equiv  DCMP1CONL, _DCMP1CON
        .equiv  DCMP1CONH, _DCMP1CON+1

        .extern DCMP2CON
        .equiv  DCMP2CONL, _DCMP2CON
        .equiv  DCMP2CONH, _DCMP2CON+1

        .extern ADBASE
        .equiv  ADBASEL, _ADBASE
        .equiv  ADBASEH, _ADBASE+1

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

        .extern ADCBUF6
        .equiv  ADCBUF6L, _ADCBUF6
        .equiv  ADCBUF6H, _ADCBUF6+1

        .extern ADCBUF7
        .equiv  ADCBUF7L, _ADCBUF7
        .equiv  ADCBUF7H, _ADCBUF7+1

        .extern ADCBUF8
        .equiv  ADCBUF8L, _ADCBUF8
        .equiv  ADCBUF8H, _ADCBUF8+1

        .extern ADCBUF9
        .equiv  ADCBUF9L, _ADCBUF9
        .equiv  ADCBUF9H, _ADCBUF9+1

        .extern ADCBUF10
        .equiv  ADCBUF10L, _ADCBUF10
        .equiv  ADCBUF10H, _ADCBUF10+1

        .extern ADCBUF11
        .equiv  ADCBUF11L, _ADCBUF11
        .equiv  ADCBUF11H, _ADCBUF11+1

        .extern ADCBUF12
        .equiv  ADCBUF12L, _ADCBUF12
        .equiv  ADCBUF12H, _ADCBUF12+1

        .extern ADCBUF13
        .equiv  ADCBUF13L, _ADCBUF13
        .equiv  ADCBUF13H, _ADCBUF13+1

        .extern ADCBUF14
        .equiv  ADCBUF14L, _ADCBUF14
        .equiv  ADCBUF14H, _ADCBUF14+1

        .extern ADCBUF15
        .equiv  ADCBUF15L, _ADCBUF15
        .equiv  ADCBUF15H, _ADCBUF15+1

        .extern ADCBUF16
        .equiv  ADCBUF16L, _ADCBUF16
        .equiv  ADCBUF16H, _ADCBUF16+1

        .extern ADCBUF17
        .equiv  ADCBUF17L, _ADCBUF17
        .equiv  ADCBUF17H, _ADCBUF17+1

        .extern ADCBUF18
        .equiv  ADCBUF18L, _ADCBUF18
        .equiv  ADCBUF18H, _ADCBUF18+1

        .extern ADCBUF19
        .equiv  ADCBUF19L, _ADCBUF19
        .equiv  ADCBUF19H, _ADCBUF19+1

        .extern ADCBUF20
        .equiv  ADCBUF20L, _ADCBUF20
        .equiv  ADCBUF20H, _ADCBUF20+1

        .extern ADCBUF21
        .equiv  ADCBUF21L, _ADCBUF21
        .equiv  ADCBUF21H, _ADCBUF21+1

        .extern ADCBUF22
        .equiv  ADCBUF22L, _ADCBUF22
        .equiv  ADCBUF22H, _ADCBUF22+1

        .extern ADCBUF23
        .equiv  ADCBUF23L, _ADCBUF23
        .equiv  ADCBUF23H, _ADCBUF23+1

        .extern ADCBUF24
        .equiv  ADCBUF24L, _ADCBUF24
        .equiv  ADCBUF24H, _ADCBUF24+1

        .extern ADCBUF25
        .equiv  ADCBUF25L, _ADCBUF25
        .equiv  ADCBUF25H, _ADCBUF25+1

        .extern ADCBUF26
        .equiv  ADCBUF26L, _ADCBUF26
        .equiv  ADCBUF26H, _ADCBUF26+1

        .extern ISRCCON
        .equiv  ISRCCONL, _ISRCCON
        .equiv  ISRCCONH, _ISRCCON+1

        .extern PGA1CON
        .equiv  PGA1CONL, _PGA1CON
        .equiv  PGA1CONH, _PGA1CON+1

        .extern PGA1CAL
        .equiv  PGA1CALL, _PGA1CAL
        .equiv  PGA1CALH, _PGA1CAL+1

        .extern PGA2CON
        .equiv  PGA2CONL, _PGA2CON
        .equiv  PGA2CONH, _PGA2CON+1

        .extern PGA2CAL
        .equiv  PGA2CALL, _PGA2CAL
        .equiv  PGA2CALH, _PGA2CAL+1

        .extern CMP1CON
        .equiv  CMP1CONL, _CMP1CON
        .equiv  CMP1CONH, _CMP1CON+1

        .extern CMP1DAC
        .equiv  CMP1DACL, _CMP1DAC
        .equiv  CMP1DACH, _CMP1DAC+1

        .extern CMP2CON
        .equiv  CMP2CONL, _CMP2CON
        .equiv  CMP2CONH, _CMP2CON+1

        .extern CMP2DAC
        .equiv  CMP2DACL, _CMP2DAC
        .equiv  CMP2DACH, _CMP2DAC+1

        .extern CMP3CON
        .equiv  CMP3CONL, _CMP3CON
        .equiv  CMP3CONH, _CMP3CON+1

        .extern CMP3DAC
        .equiv  CMP3DACL, _CMP3DAC
        .equiv  CMP3DACH, _CMP3DAC+1

        .extern CMP4CON
        .equiv  CMP4CONL, _CMP4CON
        .equiv  CMP4CONH, _CMP4CON+1

        .extern CMP4DAC
        .equiv  CMP4DACL, _CMP4DAC
        .equiv  CMP4DACH, _CMP4DAC+1

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

        .extern RPOR16
        .equiv  RPOR16L, _RPOR16
        .equiv  RPOR16H, _RPOR16+1

        .extern RPOR17
        .equiv  RPOR17L, _RPOR17
        .equiv  RPOR17H, _RPOR17+1

        .extern RPOR18
        .equiv  RPOR18L, _RPOR18
        .equiv  RPOR18H, _RPOR18+1

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

        .extern RPINR7
        .equiv  RPINR7L, _RPINR7
        .equiv  RPINR7H, _RPINR7+1

        .extern RPINR8
        .equiv  RPINR8L, _RPINR8
        .equiv  RPINR8H, _RPINR8+1

        .extern RPINR11
        .equiv  RPINR11L, _RPINR11
        .equiv  RPINR11H, _RPINR11+1

        .extern RPINR12
        .equiv  RPINR12L, _RPINR12
        .equiv  RPINR12H, _RPINR12+1

        .extern RPINR13
        .equiv  RPINR13L, _RPINR13
        .equiv  RPINR13H, _RPINR13+1

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

        .extern RPINR37
        .equiv  RPINR37L, _RPINR37
        .equiv  RPINR37H, _RPINR37+1

        .extern RPINR38
        .equiv  RPINR38L, _RPINR38
        .equiv  RPINR38H, _RPINR38+1

        .extern RPINR42
        .equiv  RPINR42L, _RPINR42
        .equiv  RPINR42H, _RPINR42+1

        .extern RPINR43
        .equiv  RPINR43L, _RPINR43
        .equiv  RPINR43H, _RPINR43+1

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

        .extern NVMSRCADR
        .equiv  NVMSRCADRL, _NVMSRCADR
        .equiv  NVMSRCADRH, _NVMSRCADR+1

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

        .extern LFSR
        .equiv  LFSRL, _LFSR
        .equiv  LFSRH, _LFSR+1

        .extern REFOCON
        .equiv  REFOCONL, _REFOCON
        .equiv  REFOCONH, _REFOCON+1

        .extern ACLKCON
        .equiv  ACLKCONL, _ACLKCON
        .equiv  ACLKCONH, _ACLKCON+1

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

        .extern PMD8
        .equiv  PMD8L, _PMD8
        .equiv  PMD8H, _PMD8+1

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

        .extern IFS8
        .equiv  IFS8L, _IFS8
        .equiv  IFS8H, _IFS8+1

        .extern IFS9
        .equiv  IFS9L, _IFS9
        .equiv  IFS9H, _IFS9+1

        .extern IFS10
        .equiv  IFS10L, _IFS10
        .equiv  IFS10H, _IFS10+1

        .extern IFS11
        .equiv  IFS11L, _IFS11
        .equiv  IFS11H, _IFS11+1

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

        .extern IEC8
        .equiv  IEC8L, _IEC8
        .equiv  IEC8H, _IEC8+1

        .extern IEC9
        .equiv  IEC9L, _IEC9
        .equiv  IEC9H, _IEC9+1

        .extern IEC10
        .equiv  IEC10L, _IEC10
        .equiv  IEC10H, _IEC10+1

        .extern IEC11
        .equiv  IEC11L, _IEC11
        .equiv  IEC11H, _IEC11+1

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

        .extern IPC13
        .equiv  IPC13L, _IPC13
        .equiv  IPC13H, _IPC13+1

        .extern IPC14
        .equiv  IPC14L, _IPC14
        .equiv  IPC14H, _IPC14+1

        .extern IPC16
        .equiv  IPC16L, _IPC16
        .equiv  IPC16H, _IPC16+1

        .extern IPC18
        .equiv  IPC18L, _IPC18
        .equiv  IPC18H, _IPC18+1

        .extern IPC23
        .equiv  IPC23L, _IPC23
        .equiv  IPC23H, _IPC23+1

        .extern IPC24
        .equiv  IPC24L, _IPC24
        .equiv  IPC24H, _IPC24+1

        .extern IPC25
        .equiv  IPC25L, _IPC25
        .equiv  IPC25H, _IPC25+1

        .extern IPC26
        .equiv  IPC26L, _IPC26
        .equiv  IPC26H, _IPC26+1

        .extern IPC27
        .equiv  IPC27L, _IPC27
        .equiv  IPC27H, _IPC27+1

        .extern IPC28
        .equiv  IPC28L, _IPC28
        .equiv  IPC28H, _IPC28+1

        .extern IPC29
        .equiv  IPC29L, _IPC29
        .equiv  IPC29H, _IPC29+1

        .extern IPC35
        .equiv  IPC35L, _IPC35
        .equiv  IPC35H, _IPC35+1

        .extern IPC37
        .equiv  IPC37L, _IPC37
        .equiv  IPC37H, _IPC37+1

        .extern IPC38
        .equiv  IPC38L, _IPC38
        .equiv  IPC38H, _IPC38+1

        .extern IPC39
        .equiv  IPC39L, _IPC39
        .equiv  IPC39H, _IPC39+1

        .extern IPC40
        .equiv  IPC40L, _IPC40
        .equiv  IPC40H, _IPC40+1

        .extern IPC41
        .equiv  IPC41L, _IPC41
        .equiv  IPC41H, _IPC41+1

        .extern IPC42
        .equiv  IPC42L, _IPC42
        .equiv  IPC42H, _IPC42+1

        .extern IPC43
        .equiv  IPC43L, _IPC43
        .equiv  IPC43H, _IPC43+1

        .extern IPC44
        .equiv  IPC44L, _IPC44
        .equiv  IPC44H, _IPC44+1

        .extern IPC45
        .equiv  IPC45L, _IPC45
        .equiv  IPC45H, _IPC45+1

        .extern INTCON1
        .equiv  INTCON1L, _INTCON1
        .equiv  INTCON1H, _INTCON1+1

        .extern INTCON2
        .equiv  INTCON2L, _INTCON2
        .equiv  INTCON2H, _INTCON2+1

        .extern INTCON3
        .equiv  INTCON3L, _INTCON3
        .equiv  INTCON3H, _INTCON3+1

        .extern INTCON4
        .equiv  INTCON4L, _INTCON4
        .equiv  INTCON4H, _INTCON4+1

        .extern INTTREG
        .equiv  INTTREGL, _INTTREG
        .equiv  INTTREGH, _INTTREG+1

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

        .extern PTCON
        .equiv  PTCONL, _PTCON
        .equiv  PTCONH, _PTCON+1

        .extern PTCON2
        .equiv  PTCON2L, _PTCON2
        .equiv  PTCON2H, _PTCON2+1

        .extern PTPER
        .equiv  PTPERL, _PTPER
        .equiv  PTPERH, _PTPER+1

        .extern SEVTCMP
        .equiv  SEVTCMPL, _SEVTCMP
        .equiv  SEVTCMPH, _SEVTCMP+1

        .extern MDC
        .equiv  MDCL, _MDC
        .equiv  MDCH, _MDC+1

        .extern STCON
        .equiv  STCONL, _STCON
        .equiv  STCONH, _STCON+1

        .extern STCON2
        .equiv  STCON2L, _STCON2
        .equiv  STCON2H, _STCON2+1

        .extern STPER
        .equiv  STPERL, _STPER
        .equiv  STPERH, _STPER+1

        .extern SSEVTCMP
        .equiv  SSEVTCMPL, _SSEVTCMP
        .equiv  SSEVTCMPH, _SSEVTCMP+1

        .extern CHOP
        .equiv  CHOPL, _CHOP
        .equiv  CHOPH, _CHOP+1

        .extern PWMKEY
        .equiv  PWMKEYL, _PWMKEY
        .equiv  PWMKEYH, _PWMKEY+1

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

        .extern SDC1
        .equiv  SDC1L, _SDC1
        .equiv  SDC1H, _SDC1+1

        .extern SPHASE1
        .equiv  SPHASE1L, _SPHASE1
        .equiv  SPHASE1H, _SPHASE1+1

        .extern TRIG1
        .equiv  TRIG1L, _TRIG1
        .equiv  TRIG1H, _TRIG1+1

        .extern TRGCON1
        .equiv  TRGCON1L, _TRGCON1
        .equiv  TRGCON1H, _TRGCON1+1

        .extern STRIG1
        .equiv  STRIG1L, _STRIG1
        .equiv  STRIG1H, _STRIG1+1

        .extern PWMCAP1
        .equiv  PWMCAP1L, _PWMCAP1
        .equiv  PWMCAP1H, _PWMCAP1+1

        .extern LEBCON1
        .equiv  LEBCON1L, _LEBCON1
        .equiv  LEBCON1H, _LEBCON1+1

        .extern LEBDLY1
        .equiv  LEBDLY1L, _LEBDLY1
        .equiv  LEBDLY1H, _LEBDLY1+1

        .extern AUXCON1
        .equiv  AUXCON1L, _AUXCON1
        .equiv  AUXCON1H, _AUXCON1+1

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

        .extern SDC2
        .equiv  SDC2L, _SDC2
        .equiv  SDC2H, _SDC2+1

        .extern SPHASE2
        .equiv  SPHASE2L, _SPHASE2
        .equiv  SPHASE2H, _SPHASE2+1

        .extern TRIG2
        .equiv  TRIG2L, _TRIG2
        .equiv  TRIG2H, _TRIG2+1

        .extern TRGCON2
        .equiv  TRGCON2L, _TRGCON2
        .equiv  TRGCON2H, _TRGCON2+1

        .extern STRIG2
        .equiv  STRIG2L, _STRIG2
        .equiv  STRIG2H, _STRIG2+1

        .extern PWMCAP2
        .equiv  PWMCAP2L, _PWMCAP2
        .equiv  PWMCAP2H, _PWMCAP2+1

        .extern LEBCON2
        .equiv  LEBCON2L, _LEBCON2
        .equiv  LEBCON2H, _LEBCON2+1

        .extern LEBDLY2
        .equiv  LEBDLY2L, _LEBDLY2
        .equiv  LEBDLY2H, _LEBDLY2+1

        .extern AUXCON2
        .equiv  AUXCON2L, _AUXCON2
        .equiv  AUXCON2H, _AUXCON2+1

        .extern PWMCON3
        .equiv  PWMCON3L, _PWMCON3
        .equiv  PWMCON3H, _PWMCON3+1

        .extern IOCON3
        .equiv  IOCON3L, _IOCON3
        .equiv  IOCON3H, _IOCON3+1

        .extern FCLCON3
        .equiv  FCLCON3L, _FCLCON3
        .equiv  FCLCON3H, _FCLCON3+1

        .extern PDC3
        .equiv  PDC3L, _PDC3
        .equiv  PDC3H, _PDC3+1

        .extern PHASE3
        .equiv  PHASE3L, _PHASE3
        .equiv  PHASE3H, _PHASE3+1

        .extern DTR3
        .equiv  DTR3L, _DTR3
        .equiv  DTR3H, _DTR3+1

        .extern ALTDTR3
        .equiv  ALTDTR3L, _ALTDTR3
        .equiv  ALTDTR3H, _ALTDTR3+1

        .extern SDC3
        .equiv  SDC3L, _SDC3
        .equiv  SDC3H, _SDC3+1

        .extern SPHASE3
        .equiv  SPHASE3L, _SPHASE3
        .equiv  SPHASE3H, _SPHASE3+1

        .extern TRIG3
        .equiv  TRIG3L, _TRIG3
        .equiv  TRIG3H, _TRIG3+1

        .extern TRGCON3
        .equiv  TRGCON3L, _TRGCON3
        .equiv  TRGCON3H, _TRGCON3+1

        .extern STRIG3
        .equiv  STRIG3L, _STRIG3
        .equiv  STRIG3H, _STRIG3+1

        .extern PWMCAP3
        .equiv  PWMCAP3L, _PWMCAP3
        .equiv  PWMCAP3H, _PWMCAP3+1

        .extern LEBCON3
        .equiv  LEBCON3L, _LEBCON3
        .equiv  LEBCON3H, _LEBCON3+1

        .extern LEBDLY3
        .equiv  LEBDLY3L, _LEBDLY3
        .equiv  LEBDLY3H, _LEBDLY3+1

        .extern AUXCON3
        .equiv  AUXCON3L, _AUXCON3
        .equiv  AUXCON3H, _AUXCON3+1

        .extern PWMCON4
        .equiv  PWMCON4L, _PWMCON4
        .equiv  PWMCON4H, _PWMCON4+1

        .extern IOCON4
        .equiv  IOCON4L, _IOCON4
        .equiv  IOCON4H, _IOCON4+1

        .extern FCLCON4
        .equiv  FCLCON4L, _FCLCON4
        .equiv  FCLCON4H, _FCLCON4+1

        .extern PDC4
        .equiv  PDC4L, _PDC4
        .equiv  PDC4H, _PDC4+1

        .extern PHASE4
        .equiv  PHASE4L, _PHASE4
        .equiv  PHASE4H, _PHASE4+1

        .extern DTR4
        .equiv  DTR4L, _DTR4
        .equiv  DTR4H, _DTR4+1

        .extern ALTDTR4
        .equiv  ALTDTR4L, _ALTDTR4
        .equiv  ALTDTR4H, _ALTDTR4+1

        .extern SDC4
        .equiv  SDC4L, _SDC4
        .equiv  SDC4H, _SDC4+1

        .extern SPHASE4
        .equiv  SPHASE4L, _SPHASE4
        .equiv  SPHASE4H, _SPHASE4+1

        .extern TRIG4
        .equiv  TRIG4L, _TRIG4
        .equiv  TRIG4H, _TRIG4+1

        .extern TRGCON4
        .equiv  TRGCON4L, _TRGCON4
        .equiv  TRGCON4H, _TRGCON4+1

        .extern STRIG4
        .equiv  STRIG4L, _STRIG4
        .equiv  STRIG4H, _STRIG4+1

        .extern PWMCAP4
        .equiv  PWMCAP4L, _PWMCAP4
        .equiv  PWMCAP4H, _PWMCAP4+1

        .extern LEBCON4
        .equiv  LEBCON4L, _LEBCON4
        .equiv  LEBCON4H, _LEBCON4+1

        .extern LEBDLY4
        .equiv  LEBDLY4L, _LEBDLY4
        .equiv  LEBDLY4H, _LEBDLY4+1

        .extern AUXCON4
        .equiv  AUXCON4L, _AUXCON4
        .equiv  AUXCON4H, _AUXCON4+1

        .extern PWMCON5
        .equiv  PWMCON5L, _PWMCON5
        .equiv  PWMCON5H, _PWMCON5+1

        .extern IOCON5
        .equiv  IOCON5L, _IOCON5
        .equiv  IOCON5H, _IOCON5+1

        .extern FCLCON5
        .equiv  FCLCON5L, _FCLCON5
        .equiv  FCLCON5H, _FCLCON5+1

        .extern PDC5
        .equiv  PDC5L, _PDC5
        .equiv  PDC5H, _PDC5+1

        .extern PHASE5
        .equiv  PHASE5L, _PHASE5
        .equiv  PHASE5H, _PHASE5+1

        .extern DTR5
        .equiv  DTR5L, _DTR5
        .equiv  DTR5H, _DTR5+1

        .extern ALTDTR5
        .equiv  ALTDTR5L, _ALTDTR5
        .equiv  ALTDTR5H, _ALTDTR5+1

        .extern SDC5
        .equiv  SDC5L, _SDC5
        .equiv  SDC5H, _SDC5+1

        .extern SPHASE5
        .equiv  SPHASE5L, _SPHASE5
        .equiv  SPHASE5H, _SPHASE5+1

        .extern TRIG5
        .equiv  TRIG5L, _TRIG5
        .equiv  TRIG5H, _TRIG5+1

        .extern TRGCON5
        .equiv  TRGCON5L, _TRGCON5
        .equiv  TRGCON5H, _TRGCON5+1

        .extern STRIG5
        .equiv  STRIG5L, _STRIG5
        .equiv  STRIG5H, _STRIG5+1

        .extern PWMCAP5
        .equiv  PWMCAP5L, _PWMCAP5
        .equiv  PWMCAP5H, _PWMCAP5+1

        .extern LEBCON5
        .equiv  LEBCON5L, _LEBCON5
        .equiv  LEBCON5H, _LEBCON5+1

        .extern LEBDLY5
        .equiv  LEBDLY5L, _LEBDLY5
        .equiv  LEBDLY5H, _LEBDLY5+1

        .extern AUXCON5
        .equiv  AUXCON5L, _AUXCON5
        .equiv  AUXCON5H, _AUXCON5+1

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

        .extern CNENA
        .equiv  CNENAL, _CNENA
        .equiv  CNENAH, _CNENA+1

        .extern CNPUA
        .equiv  CNPUAL, _CNPUA
        .equiv  CNPUAH, _CNPUA+1

        .extern CNPDA
        .equiv  CNPDAL, _CNPDA
        .equiv  CNPDAH, _CNPDA+1

        .extern ANSELA
        .equiv  ANSELAL, _ANSELA
        .equiv  ANSELAH, _ANSELA+1

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

        .extern CNENB
        .equiv  CNENBL, _CNENB
        .equiv  CNENBH, _CNENB+1

        .extern CNPUB
        .equiv  CNPUBL, _CNPUB
        .equiv  CNPUBH, _CNPUB+1

        .extern CNPDB
        .equiv  CNPDBL, _CNPDB
        .equiv  CNPDBH, _CNPDB+1

        .extern ANSELB
        .equiv  ANSELBL, _ANSELB
        .equiv  ANSELBH, _ANSELB+1

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

        .extern CNENC
        .equiv  CNENCL, _CNENC
        .equiv  CNENCH, _CNENC+1

        .extern CNPUC
        .equiv  CNPUCL, _CNPUC
        .equiv  CNPUCH, _CNPUC+1

        .extern CNPDC
        .equiv  CNPDCL, _CNPDC
        .equiv  CNPDCH, _CNPDC+1

        .extern ANSELC
        .equiv  ANSELCL, _ANSELC
        .equiv  ANSELCH, _ANSELC+1

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

        .extern CNEND
        .equiv  CNENDL, _CNEND
        .equiv  CNENDH, _CNEND+1

        .extern CNPUD
        .equiv  CNPUDL, _CNPUD
        .equiv  CNPUDH, _CNPUD+1

        .extern CNPDD
        .equiv  CNPDDL, _CNPDD
        .equiv  CNPDDH, _CNPDD+1

        .extern ANSELD
        .equiv  ANSELDL, _ANSELD
        .equiv  ANSELDH, _ANSELD+1

        .extern ADCAL1
        .equiv  ADCAL1L, _ADCAL1
        .equiv  ADCAL1H, _ADCAL1+1

        .extern ADCAL2
        .equiv  ADCAL2L, _ADCAL2
        .equiv  ADCAL2H, _ADCAL2+1

        .extern ADCAL3
        .equiv  ADCAL3L, _ADCAL3
        .equiv  ADCAL3H, _ADCAL3+1

        .extern ADCAL4
        .equiv  ADCAL4L, _ADCAL4
        .equiv  ADCAL4H, _ADCAL4+1

        .extern ADCAL5
        .equiv  ADCAL5L, _ADCAL5
        .equiv  ADCAL5H, _ADCAL5+1

        .extern ADCAL6
        .equiv  ADCAL6L, _ADCAL6
        .equiv  ADCAL6H, _ADCAL6+1

        .extern ADCAL7
        .equiv  ADCAL7L, _ADCAL7
        .equiv  ADCAL7H, _ADCAL7+1

        .extern ADCAL8
        .equiv  ADCAL8L, _ADCAL8
        .equiv  ADCAL8H, _ADCAL8+1

        .extern ADCAL9
        .equiv  ADCAL9L, _ADCAL9
        .equiv  ADCAL9H, _ADCAL9+1

        .extern ADCAL10
        .equiv  ADCAL10L, _ADCAL10
        .equiv  ADCAL10H, _ADCAL10+1

        .extern _APPO
        .equiv  _APPOL, __APPO
        .equiv  _APPOH, __APPO+1

        .extern _APPIN
        .equiv  _APPINL, __APPIN
        .equiv  _APPINH, __APPIN+1

        .extern APPS
        .equiv  APPSL, _APPS
        .equiv  APPSH, _APPS+1

        .extern STROUTL
        .equiv  STROUTLL, _STROUTL
        .equiv  STROUTLH, _STROUTL+1

        .extern STROUTH
        .equiv  STROUTHL, _STROUTH
        .equiv  STROUTHH, _STROUTH+1

        .extern STROVCNT
        .equiv  STROVCNTL, _STROVCNT
        .equiv  STROVCNTH, _STROVCNT+1

        .extern JDATAH
        .equiv  JDATAHL, _JDATAH
        .equiv  JDATAHH, _JDATAH+1

        .extern JDATAL
        .equiv  JDATALL, _JDATAL
        .equiv  JDATALH, _JDATAL+1

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
        .equiv SFA,     0x0002
        .equiv IPL3,    0x0003
        .equiv ACCSAT,  0x0004
        .equiv SATDW,   0x0005
        .equiv SATB,    0x0006
        .equiv SATA,    0x0007
        .equiv EDT,     0x000B
        .equiv VAR,     0x000F

        .equiv DL0,     0x0008
        .equiv DL1,     0x0009
        .equiv DL2,     0x000A
        .equiv US0,     0x000C
        .equiv US1,     0x000D


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


;----- I2C1CON1 Bits -----------------------------------------------------
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
        .equiv STRICT,  0x000B
        .equiv SCLREL,  0x000C
        .equiv I2CSIDL, 0x000D
        .equiv I2CEN,   0x000F


;----- I2C1CON2 Bits -----------------------------------------------------
        .equiv DHEN,    0x0000
        .equiv AHEN,    0x0001
        .equiv SBCDE,   0x0002
        .equiv SDAHT,   0x0003
        .equiv BOEN,    0x0004
        .equiv SCIE,    0x0005
        .equiv PCIE,    0x0006


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
        .equiv BCL_I2C1STAT, 0x000A
        .equiv ACKTIM,  0x000D
        .equiv TRSTAT,  0x000E
        .equiv ACKSTAT, 0x000F


;----- I2C1MSK Bits -----------------------------------------------------
        .equiv AMSK0,   0x0000
        .equiv AMSK1,   0x0001
        .equiv AMSK2,   0x0002
        .equiv AMSK3,   0x0003
        .equiv AMSK4,   0x0004
        .equiv AMSK5,   0x0005
        .equiv AMSK6,   0x0006
        .equiv AMSK7,   0x0007
        .equiv AMSK8,   0x0008
        .equiv AMSK9,   0x0009


;----- I2C2CON1 Bits -----------------------------------------------------
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
       ;.equiv STRICT,  0x000B
       ;.equiv SCLREL,  0x000C
       ;.equiv I2CSIDL, 0x000D
       ;.equiv I2CEN,   0x000F


;----- I2C2CON2 Bits -----------------------------------------------------
       ;.equiv DHEN,    0x0000
       ;.equiv AHEN,    0x0001
       ;.equiv SBCDE,   0x0002
       ;.equiv SDAHT,   0x0003
       ;.equiv BOEN,    0x0004
       ;.equiv SCIE,    0x0005
       ;.equiv PCIE,    0x0006


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
        .equiv BCL_I2C2STAT, 0x000A
       ;.equiv ACKTIM,  0x000D
       ;.equiv TRSTAT,  0x000E
       ;.equiv ACKSTAT, 0x000F


;----- I2C2MSK Bits -----------------------------------------------------
       ;.equiv AMSK0,   0x0000
       ;.equiv AMSK1,   0x0001
       ;.equiv AMSK2,   0x0002
       ;.equiv AMSK3,   0x0003
       ;.equiv AMSK4,   0x0004
       ;.equiv AMSK5,   0x0005
       ;.equiv AMSK6,   0x0006
       ;.equiv AMSK7,   0x0007
       ;.equiv AMSK8,   0x0008
       ;.equiv AMSK9,   0x0009


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
        .equiv FRMDLY,  0x0001
        .equiv FRMPOL,  0x000D
        .equiv SPIFSD,  0x000E
        .equiv FRMEN,   0x000F


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
       ;.equiv FRMDLY,  0x0001
       ;.equiv FRMPOL,  0x000D
       ;.equiv SPIFSD,  0x000E
       ;.equiv FRMEN,   0x000F


;----- ADCON1 Bits -----------------------------------------------------
        .equiv FORM,    0x000B
        .equiv ADSIDL,  0x000D
        .equiv ADON,    0x000F


;----- ADCON2 Bits -----------------------------------------------------
        .equiv EIE0,    0x0000
        .equiv EIE1,    0x0001
        .equiv EIE2,    0x0002
        .equiv STRGSRC0, 0x0006
        .equiv STRGSRC1, 0x0007
        .equiv STRGSRC2, 0x0008
        .equiv STRGSRC3, 0x0009
        .equiv STRGSRC4, 0x000A
        .equiv FLTRDLY0, 0x000B
        .equiv FLTRDLY1, 0x000C
        .equiv FLTRDLY2, 0x000D
        .equiv FLTRDLY3, 0x000E
        .equiv FLTRDLY4, 0x000F


;----- ADCON3 Bits -----------------------------------------------------
        .equiv LOWPWR,  0x000D
        .equiv BOOST,   0x000E

        .equiv ADCS0,   0x0000
        .equiv ADCS1,   0x0001
        .equiv ADCS2,   0x0002
        .equiv ADCS3,   0x0003
        .equiv ADCS4,   0x0004
        .equiv ADCS5,   0x0005
        .equiv ADCS6,   0x0006
        .equiv ADCSEL0, 0x0008
        .equiv ADCSEL1, 0x0009


;----- ADCON4 Bits -----------------------------------------------------
        .equiv ADCRDY,  0x000F

        .equiv SAMC0,   0x0000
        .equiv SAMC1,   0x0001
        .equiv SAMC2,   0x0002
        .equiv SAMC3,   0x0003
        .equiv SAMC4,   0x0004
        .equiv SAMC5,   0x0005
        .equiv SAMC6,   0x0006
        .equiv SAMC7,   0x0007


;----- ADCON5 Bits -----------------------------------------------------
        .equiv ADINSEL0, 0x0000
        .equiv ADINSEL1, 0x0001
        .equiv ADINSEL2, 0x0002
        .equiv ADINSEL3, 0x0003
        .equiv ADINSEL4, 0x0004
        .equiv ADINSEL5, 0x0005
        .equiv VREFSEL0, 0x000A
        .equiv VREFSEL1, 0x000B
        .equiv VREFSEL2, 0x000C


;----- ADCON6 Bits -----------------------------------------------------
        .equiv RQCONVRT, 0x000D
        .equiv GSWTRG,  0x000E
        .equiv CAL,     0x000F


;----- ADMOD Bits -----------------------------------------------------
        .equiv SH0MOD0, 0x0000
        .equiv SH0MOD1, 0x0001
        .equiv SH1MOD0, 0x0002
        .equiv SH1MOD1, 0x0003
        .equiv SH2MOD0, 0x0004
        .equiv SH2MOD1, 0x0005
        .equiv SH3MOD0, 0x0006
        .equiv SH3MOD1, 0x0007
        .equiv SH4MOD0, 0x0008
        .equiv SH4MOD1, 0x0009


;----- ADALT Bits -----------------------------------------------------
        .equiv SH0ALT0, 0x0000
        .equiv SH0ALT1, 0x0001
        .equiv SH1ALT0, 0x0002
        .equiv SH1ALT1, 0x0003
        .equiv SH2ALT0, 0x0004
        .equiv SH2ALT1, 0x0005
        .equiv SH3ALT0, 0x0006
        .equiv SH3ALT1, 0x0007


;----- ADGIRQENL Bits -----------------------------------------------------
        .equiv IRQEN0,  0x0000
        .equiv IRQEN1,  0x0001
        .equiv IRQEN2,  0x0002
        .equiv IRQEN3,  0x0003
        .equiv IRQEN4,  0x0004
        .equiv IRQEN5,  0x0005
        .equiv IRQEN6,  0x0006
        .equiv IRQEN7,  0x0007
        .equiv IRQEN8,  0x0008
        .equiv IRQEN9,  0x0009
        .equiv IRQEN10, 0x000A
        .equiv IRQEN11, 0x000B
        .equiv IRQEN12, 0x000C
        .equiv IRQEN13, 0x000D
        .equiv IRQEN14, 0x000E
        .equiv IRQEN15, 0x000F


;----- ADGIRQENH Bits -----------------------------------------------------
        .equiv IRQEN16, 0x0000
        .equiv IRQEN17, 0x0001
        .equiv IRQEN18, 0x0002
        .equiv IRQEN19, 0x0003
        .equiv IRQEN20, 0x0004
        .equiv IRQEN21, 0x0005
        .equiv IRQEN22, 0x0006
        .equiv IRQEN23, 0x0007
        .equiv IRQEN24, 0x0008
        .equiv IRQEN25, 0x0009
        .equiv IRQEN26, 0x000A


;----- ADCSSL Bits -----------------------------------------------------
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


;----- ADCSSH Bits -----------------------------------------------------
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


;----- ADSTATL Bits -----------------------------------------------------
        .equiv AN0RDY,  0x0000
        .equiv AN1RDY,  0x0001
        .equiv AN2RDY,  0x0002
        .equiv AN3RDY,  0x0003
        .equiv AN4RDY,  0x0004
        .equiv AN5RDY,  0x0005
        .equiv AN6RDY,  0x0006
        .equiv AN7RDY,  0x0007
        .equiv AN8RDY,  0x0008
        .equiv AN9RDY,  0x0009
        .equiv AN10RDY, 0x000A
        .equiv AN11RDY, 0x000B
        .equiv AN12RDY, 0x000C
        .equiv AN13RDY, 0x000D
        .equiv AN14RDY, 0x000E
        .equiv AN15RDY, 0x000F


;----- ADSTATH Bits -----------------------------------------------------
        .equiv AN16RDY, 0x0000
        .equiv AN17RDY, 0x0001
        .equiv AN18RDY, 0x0002
        .equiv AN19RDY, 0x0003
        .equiv AN20RDY, 0x0004
        .equiv AN21RDY, 0x0005
        .equiv AN22RDY, 0x0006
        .equiv AN23RDY, 0x0007
        .equiv AN24RDY, 0x0008
        .equiv AN25RDY, 0x0009
        .equiv AN26RDY, 0x000A


;----- DCMP1ENL Bits -----------------------------------------------------
        .equiv CMPEN0,  0x0000
        .equiv CMPEN1,  0x0001
        .equiv CMPEN2,  0x0002
        .equiv CMPEN3,  0x0003
        .equiv CMPEN4,  0x0004
        .equiv CMPEN5,  0x0005
        .equiv CMPEN6,  0x0006
        .equiv CMPEN7,  0x0007
        .equiv CMPEN8,  0x0008
        .equiv CMPEN9,  0x0009
        .equiv CMPEN10, 0x000A
        .equiv CMPEN11, 0x000B
        .equiv CMPEN12, 0x000C
        .equiv CMPEN13, 0x000D
        .equiv CMPEN14, 0x000E
        .equiv CMPEN15, 0x000F


;----- DCMP1ENH Bits -----------------------------------------------------
        .equiv CMPEN16, 0x0000
        .equiv CMPEN17, 0x0001
        .equiv CMPEN18, 0x0002
        .equiv CMPEN19, 0x0003
        .equiv CMPEN20, 0x0004
        .equiv CMPEN21, 0x0005
        .equiv CMPEN22, 0x0006
        .equiv CMPEN23, 0x0007
        .equiv CMPEN24, 0x0008
        .equiv CMPEN25, 0x0009
        .equiv CMPEN26, 0x000A


;----- DCMP2ENL Bits -----------------------------------------------------
       ;.equiv CMPEN0,  0x0000
       ;.equiv CMPEN1,  0x0001
       ;.equiv CMPEN2,  0x0002
       ;.equiv CMPEN3,  0x0003
       ;.equiv CMPEN4,  0x0004
       ;.equiv CMPEN5,  0x0005
       ;.equiv CMPEN6,  0x0006
       ;.equiv CMPEN7,  0x0007
       ;.equiv CMPEN8,  0x0008
       ;.equiv CMPEN9,  0x0009
       ;.equiv CMPEN10, 0x000A
       ;.equiv CMPEN11, 0x000B
       ;.equiv CMPEN12, 0x000C
       ;.equiv CMPEN13, 0x000D
       ;.equiv CMPEN14, 0x000E
       ;.equiv CMPEN15, 0x000F


;----- DCMP2ENH Bits -----------------------------------------------------
       ;.equiv CMPEN16, 0x0000
       ;.equiv CMPEN17, 0x0001
       ;.equiv CMPEN18, 0x0002
       ;.equiv CMPEN19, 0x0003
       ;.equiv CMPEN20, 0x0004
       ;.equiv CMPEN21, 0x0005
       ;.equiv CMPEN22, 0x0006
       ;.equiv CMPEN23, 0x0007
       ;.equiv CMPEN24, 0x0008
       ;.equiv CMPEN25, 0x0009
       ;.equiv CMPEN26, 0x000A


;----- ADFLTR1CON Bits -----------------------------------------------------
        .equiv AFRDY,   0x0008
        .equiv AFGIEN,  0x0009
        .equiv AFEN,    0x000F

        .equiv CHNLID0, 0x0000
        .equiv CHNLID1, 0x0001
        .equiv CHNLID2, 0x0002
        .equiv CHNLID3, 0x0003
        .equiv CHNLID4, 0x0004
        .equiv CHNLID5, 0x0005
        .equiv OVRSAM0, 0x000A
        .equiv OVRSAM1, 0x000B
        .equiv OVRSAM2, 0x000C


;----- ADFLTR2CON Bits -----------------------------------------------------
       ;.equiv AFRDY,   0x0008
       ;.equiv AFGIEN,  0x0009
       ;.equiv AFEN,    0x000F

       ;.equiv CHNLID0, 0x0000
       ;.equiv CHNLID1, 0x0001
       ;.equiv CHNLID2, 0x0002
       ;.equiv CHNLID3, 0x0003
       ;.equiv CHNLID4, 0x0004
       ;.equiv CHNLID5, 0x0005
       ;.equiv OVRSAM0, 0x000A
       ;.equiv OVRSAM1, 0x000B
       ;.equiv OVRSAM2, 0x000C


;----- ADTRIG1 Bits -----------------------------------------------------
        .equiv TRGSRC00, 0x0000
        .equiv TRGSRC01, 0x0001
        .equiv TRGSRC02, 0x0002
        .equiv TRGSRC03, 0x0003
        .equiv TRGSRC04, 0x0004
        .equiv TRGSRC10_ADTRIG1, 0x0008
        .equiv TRGSRC11_ADTRIG1, 0x0009
        .equiv TRGSRC12_ADTRIG1, 0x000A
        .equiv TRGSRC13_ADTRIG1, 0x000B
        .equiv TRGSRC14_ADTRIG1, 0x000C


;----- ADTRIG2 Bits -----------------------------------------------------
        .equiv TRGSRC20, 0x0000
        .equiv TRGSRC21_ADTRIG2, 0x0001
        .equiv TRGSRC22_ADTRIG2, 0x0002
        .equiv TRGSRC23_ADTRIG2, 0x0003
        .equiv TRGSRC24_ADTRIG2, 0x0004
        .equiv TRGSRC30, 0x0008
        .equiv TRGSRC31, 0x0009
        .equiv TRGSRC32, 0x000A
        .equiv TRGSRC33, 0x000B
        .equiv TRGSRC34, 0x000C


;----- ADTRIG3 Bits -----------------------------------------------------
        .equiv TRGSRC40, 0x0000
        .equiv TRGSRC41, 0x0001
        .equiv TRGSRC42, 0x0002
        .equiv TRGSRC43, 0x0003
        .equiv TRGSRC44, 0x0004
        .equiv TRGSRC50, 0x0008
        .equiv TRGSRC51, 0x0009
        .equiv TRGSRC52, 0x000A
        .equiv TRGSRC53, 0x000B
        .equiv TRGSRC54, 0x000C


;----- ADTRIG4 Bits -----------------------------------------------------
        .equiv TRGSRC60, 0x0000
        .equiv TRGSRC61, 0x0001
        .equiv TRGSRC62, 0x0002
        .equiv TRGSRC63, 0x0003
        .equiv TRGSRC64, 0x0004
        .equiv TRGSRC70, 0x0008
        .equiv TRGSRC71, 0x0009
        .equiv TRGSRC72, 0x000A
        .equiv TRGSRC73, 0x000B
        .equiv TRGSRC74, 0x000C


;----- ADTRIG5 Bits -----------------------------------------------------
        .equiv TRGSRC80, 0x0000
        .equiv TRGSRC81, 0x0001
        .equiv TRGSRC82, 0x0002
        .equiv TRGSRC83, 0x0003
        .equiv TRGSRC84, 0x0004
        .equiv TRGSRC90, 0x0008
        .equiv TRGSRC91, 0x0009
        .equiv TRGSRC92, 0x000A
        .equiv TRIGSRC93, 0x000B
        .equiv TRGSRC94, 0x000C


;----- ADTRIG6 Bits -----------------------------------------------------
        .equiv TRGSRC100, 0x0000
        .equiv TRGSRC101, 0x0001
        .equiv TRGSRC102, 0x0002
        .equiv TRGSRC103, 0x0003
        .equiv TRGSRC104, 0x0004
        .equiv TRGSRC110, 0x0008
        .equiv TRGSRC111, 0x0009
        .equiv TRGSRC112, 0x000A
        .equiv TRGSRC113, 0x000B
        .equiv TRGSRC114, 0x000C


;----- ADTRIG7 Bits -----------------------------------------------------
        .equiv TRGSRC120, 0x0000
        .equiv TRGSRC121, 0x0001
        .equiv TRGSRC122, 0x0002
        .equiv TRGSRC123, 0x0003
        .equiv TRGSRC124, 0x0004
        .equiv TRGSRC130, 0x0008
        .equiv TRGSRC131, 0x0009
        .equiv TRGSRC132, 0x000A
        .equiv TRGSRC133, 0x000B
        .equiv TRGSRC134, 0x000C


;----- ADTRIG8 Bits -----------------------------------------------------
        .equiv TRGSRC140, 0x0000
        .equiv TRGSRC141, 0x0001
        .equiv TRGSRC142, 0x0002
        .equiv TRGSRC143, 0x0003
        .equiv TRGSRC144, 0x0004
        .equiv TRGSRC150, 0x0008
        .equiv TRGSRC151, 0x0009
        .equiv TRGSRC152, 0x000A
        .equiv TRGSRC153, 0x000B
        .equiv TRGSRC154, 0x000C


;----- ADTRIG9 Bits -----------------------------------------------------
        .equiv TRGSRC160, 0x0000
        .equiv TRGSRC161, 0x0001
        .equiv TRGSRC162, 0x0002
        .equiv TRGSRC163, 0x0003
        .equiv TRGSRC164, 0x0004
        .equiv TRGSRC170, 0x0008
        .equiv TRGSRC171, 0x0009
        .equiv TRGSRC172, 0x000A
        .equiv TRGSRC173, 0x000B
        .equiv TRGSRC174, 0x000C


;----- ADTRIG10 Bits -----------------------------------------------------
        .equiv TRGSRC180, 0x0000
        .equiv TRGSRC181, 0x0001
        .equiv TRGSRC182, 0x0002
        .equiv TRGSRC183, 0x0003
        .equiv TRGSRC184, 0x0004
        .equiv TRGSRC190, 0x0008
        .equiv TRGSRC191, 0x0009
        .equiv TRGSRC192, 0x000A
        .equiv TRGSRC193, 0x000B
        .equiv TRGSRC194, 0x000C


;----- ADTRIG11 Bits -----------------------------------------------------
        .equiv TRGSRC200, 0x0000
        .equiv TRGSRC201, 0x0001
        .equiv TRGSRC202, 0x0002
        .equiv TRGSRC203, 0x0003
        .equiv TRGSRC204, 0x0004
        .equiv TRGSRC210, 0x0008
        .equiv TRGSRC211, 0x0009
        .equiv TRGSRC212, 0x000A
        .equiv TRGSRC213, 0x000B
        .equiv TRGSRC214, 0x000C


;----- ADTRIG12 Bits -----------------------------------------------------
        .equiv TRGSRC220, 0x0000
        .equiv TRGSRC221, 0x0001
        .equiv TRGSRC222, 0x0002
        .equiv TRGSRC223, 0x0003
        .equiv TRGSRC224, 0x0004
        .equiv TRGSRC230, 0x0008
        .equiv TRGSRC231, 0x0009
        .equiv TRGSRC232, 0x000A
        .equiv TRGSRC233, 0x000B
        .equiv TRGSRC234, 0x000C


;----- ADTRIG13 Bits -----------------------------------------------------
        .equiv TRGSRC240, 0x0000
        .equiv TRGSRC241, 0x0001
        .equiv TRGSRC242, 0x0002
        .equiv TRGSRC243, 0x0003
        .equiv TRGSRC244, 0x0004
        .equiv TRGSRC250, 0x0008
        .equiv TRGSRC251, 0x0009
        .equiv TRGSRC252, 0x000A
        .equiv TRGSRC253, 0x000B
        .equiv TRGSRC254, 0x000C


;----- ADTRIG14 Bits -----------------------------------------------------
        .equiv TRGSRC260, 0x0000
        .equiv TRGSRC261, 0x0001
        .equiv TRGSRC262, 0x0002
        .equiv TRGSRC263, 0x0003
        .equiv TRGSRC264, 0x0004


;----- DCMP1CON Bits -----------------------------------------------------
        .equiv IELOLO,  0x0000
        .equiv IELOHI,  0x0001
        .equiv IEHILO,  0x0002
        .equiv IEHIHI,  0x0003
        .equiv IEBTWN,  0x0004
        .equiv DCMPED,  0x0005
        .equiv DCMPGIEN, 0x0006
        .equiv DCMPEN,  0x0007

        .equiv AINID0,  0x0008
        .equiv AINID1,  0x0009
        .equiv AINID2,  0x000A
        .equiv AINID3,  0x000B
        .equiv AINID4,  0x000C


;----- DCMP2CON Bits -----------------------------------------------------
       ;.equiv IELOLO,  0x0000
       ;.equiv IELOHI,  0x0001
       ;.equiv IEHILO,  0x0002
       ;.equiv IEHIHI,  0x0003
       ;.equiv IEBTWN,  0x0004
       ;.equiv DCMPED,  0x0005
       ;.equiv DCMPGIEN, 0x0006
       ;.equiv DCMPEN,  0x0007

       ;.equiv AINID0,  0x0008
       ;.equiv AINID1,  0x0009
       ;.equiv AINID2,  0x000A
       ;.equiv AINID3,  0x000B
       ;.equiv AINID4,  0x000C


;----- ISRCCON Bits -----------------------------------------------------
        .equiv ISRCEN,  0x000F

        .equiv ISRCCAL0, 0x0000
        .equiv ISRCCAL1, 0x0001
        .equiv ISRCCAL2, 0x0002
        .equiv ISRCCAL3, 0x0003
        .equiv ISRCCAL4, 0x0004
        .equiv ISRCCAL5, 0x0005
        .equiv OUTSEL0, 0x0008
        .equiv OUTSEL1, 0x0009
        .equiv OUTSEL2, 0x000A


;----- PGA1CON Bits -----------------------------------------------------
        .equiv PGAOEN,  0x000E
        .equiv PGAEN,   0x000F

        .equiv GAIN0,   0x0000
        .equiv GAIN1,   0x0001
        .equiv GAIN2,   0x0002
        .equiv SELNI0,  0x0008
        .equiv SELNI1,  0x0009
        .equiv SELNI2,  0x000A
        .equiv SELPI0,  0x000B
        .equiv SELPI1,  0x000C
        .equiv SELPI2,  0x000D


;----- PGA2CON Bits -----------------------------------------------------
       ;.equiv PGAOEN,  0x000E
       ;.equiv PGAEN,   0x000F

       ;.equiv GAIN0,   0x0000
       ;.equiv GAIN1,   0x0001
       ;.equiv GAIN2,   0x0002
       ;.equiv SELNI0,  0x0008
       ;.equiv SELNI1,  0x0009
       ;.equiv SELNI2,  0x000A
       ;.equiv SELPI0,  0x000B
       ;.equiv SELPI1,  0x000C
       ;.equiv SELPI2,  0x000D


;----- CMP1CON Bits -----------------------------------------------------
        .equiv RANGE,   0x0000
        .equiv CMPPOL,  0x0001
        .equiv ALTINP,  0x0002
        .equiv CMPSTAT, 0x0003
        .equiv HYSPOL,  0x0004
        .equiv EXTREF,  0x0005
        .equiv DACOE,   0x0008
        .equiv FCLKSEL, 0x0009
        .equiv FLTREN,  0x000A
        .equiv CMPSIDL, 0x000D
        .equiv CMPON,   0x000F

        .equiv INSEL0,  0x0006
        .equiv INSEL1,  0x0007
        .equiv HYSSEL0, 0x000B
        .equiv HYSSEL1, 0x000C


;----- CMP1DAC Bits -----------------------------------------------------
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
        .equiv CMREF10, 0x000A
        .equiv CMREF11, 0x000B


;----- CMP2CON Bits -----------------------------------------------------
       ;.equiv RANGE,   0x0000
       ;.equiv CMPPOL,  0x0001
       ;.equiv ALTINP,  0x0002
       ;.equiv CMPSTAT, 0x0003
       ;.equiv HYSPOL,  0x0004
       ;.equiv EXTREF,  0x0005
       ;.equiv DACOE,   0x0008
       ;.equiv FCLKSEL, 0x0009
       ;.equiv FLTREN,  0x000A
       ;.equiv CMPSIDL, 0x000D
       ;.equiv CMPON,   0x000F

       ;.equiv INSEL0,  0x0006
       ;.equiv INSEL1,  0x0007
       ;.equiv HYSSEL0, 0x000B
       ;.equiv HYSSEL1, 0x000C


;----- CMP2DAC Bits -----------------------------------------------------
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
       ;.equiv CMREF10, 0x000A
       ;.equiv CMREF11, 0x000B


;----- CMP3CON Bits -----------------------------------------------------
       ;.equiv RANGE,   0x0000
       ;.equiv CMPPOL,  0x0001
       ;.equiv ALTINP,  0x0002
       ;.equiv CMPSTAT, 0x0003
       ;.equiv HYSPOL,  0x0004
       ;.equiv EXTREF,  0x0005
       ;.equiv DACOE,   0x0008
       ;.equiv FCLKSEL, 0x0009
       ;.equiv FLTREN,  0x000A
       ;.equiv CMPSIDL, 0x000D
       ;.equiv CMPON,   0x000F

       ;.equiv INSEL0,  0x0006
       ;.equiv INSEL1,  0x0007
       ;.equiv HYSSEL0, 0x000B
       ;.equiv HYSSEL1, 0x000C


;----- CMP3DAC Bits -----------------------------------------------------
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
       ;.equiv CMREF10, 0x000A
       ;.equiv CMREF11, 0x000B


;----- CMP4CON Bits -----------------------------------------------------
       ;.equiv RANGE,   0x0000
       ;.equiv CMPPOL,  0x0001
       ;.equiv ALTINP,  0x0002
       ;.equiv CMPSTAT, 0x0003
       ;.equiv HYSPOL,  0x0004
       ;.equiv EXTREF,  0x0005
       ;.equiv DACOE,   0x0008
       ;.equiv FCLKSEL, 0x0009
       ;.equiv FLTREN,  0x000A
       ;.equiv CMPSIDL, 0x000D
       ;.equiv CMPON,   0x000F

       ;.equiv INSEL0,  0x0006
       ;.equiv INSEL1,  0x0007
       ;.equiv HYSSEL0, 0x000B
       ;.equiv HYSSEL1, 0x000C


;----- CMP4DAC Bits -----------------------------------------------------
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
       ;.equiv CMREF10, 0x000A
       ;.equiv CMREF11, 0x000B


;----- RPOR0 Bits -----------------------------------------------------
        .equiv RP32R0,  0x0000
        .equiv RP32R1,  0x0001
        .equiv RP32R2,  0x0002
        .equiv RP32R3,  0x0003
        .equiv RP32R4,  0x0004
        .equiv RP32R5,  0x0005
        .equiv RP33R0,  0x0008
        .equiv RP33R1,  0x0009
        .equiv RP33R2,  0x000A
        .equiv RP33R3,  0x000B
        .equiv RP33R4,  0x000C
        .equiv RP33R5,  0x000D


;----- RPOR1 Bits -----------------------------------------------------
        .equiv RP34R0,  0x0000
        .equiv RP34R1,  0x0001
        .equiv RP34R2,  0x0002
        .equiv RP34R3,  0x0003
        .equiv RP34R4,  0x0004
        .equiv RP34R5,  0x0005
        .equiv RP35R0,  0x0008
        .equiv RP35R1,  0x0009
        .equiv RP35R2,  0x000A
        .equiv RP35R3,  0x000B
        .equiv RP35R4,  0x000C
        .equiv RP35R5,  0x000D


;----- RPOR2 Bits -----------------------------------------------------
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


;----- RPOR3 Bits -----------------------------------------------------
        .equiv RP38R0,  0x0000
        .equiv RP38R1,  0x0001
        .equiv RP38R2,  0x0002
        .equiv RP38R3,  0x0003
        .equiv RP38R4,  0x0004
        .equiv RP38R5,  0x0005
        .equiv RP39R0,  0x0008
        .equiv RP39R1,  0x0009
        .equiv RP39R2,  0x000A
        .equiv RP39R3,  0x000B
        .equiv RP39R4,  0x000C
        .equiv RP39R5,  0x000D


;----- RPOR4 Bits -----------------------------------------------------
        .equiv RP40R0,  0x0000
        .equiv RP40R1,  0x0001
        .equiv RP40R2,  0x0002
        .equiv RP40R3,  0x0003
        .equiv RP40R4,  0x0004
        .equiv RP40R5,  0x0005
        .equiv RP41R0,  0x0008
        .equiv RP41R1,  0x0009
        .equiv RP41R2,  0x000A
        .equiv RP41R3,  0x000B
        .equiv RP41R4,  0x000C
        .equiv RP41R5,  0x000D


;----- RPOR5 Bits -----------------------------------------------------
        .equiv RP42R0,  0x0000
        .equiv RP42R1,  0x0001
        .equiv RP42R2,  0x0002
        .equiv RP42R3,  0x0003
        .equiv RP42R4,  0x0004
        .equiv RP42R5,  0x0005
        .equiv RP43R0,  0x0008
        .equiv RP43R1,  0x0009
        .equiv RP43R2,  0x000A
        .equiv RP43R3,  0x000B
        .equiv RP43R4,  0x000C
        .equiv RP43R5,  0x000D


;----- RPOR6 Bits -----------------------------------------------------
        .equiv RP44R0,  0x0000
        .equiv RP44R1,  0x0001
        .equiv RP44R2,  0x0002
        .equiv RP44R3,  0x0003
        .equiv RP44R4,  0x0004
        .equiv RP44R5,  0x0005
        .equiv RP45R0,  0x0008
        .equiv RP45R1,  0x0009
        .equiv RP45R2,  0x000A
        .equiv RP45R3,  0x000B
        .equiv RP45R4,  0x000C
        .equiv RP45R5,  0x000D


;----- RPOR7 Bits -----------------------------------------------------
        .equiv RP46R0,  0x0000
        .equiv RP46R1,  0x0001
        .equiv RP46R2,  0x0002
        .equiv RP46R3,  0x0003
        .equiv RP46R4,  0x0004
        .equiv RP46R5,  0x0005
        .equiv RP47R0,  0x0008
        .equiv RP47R1,  0x0009
        .equiv RP47R2,  0x000A
        .equiv RP47R3,  0x000B
        .equiv RP47R4,  0x000C
        .equiv RP47R5,  0x000D


;----- RPOR8 Bits -----------------------------------------------------
        .equiv RP48R0,  0x0000
        .equiv RP48R1,  0x0001
        .equiv RP48R2,  0x0002
        .equiv RP48R3,  0x0003
        .equiv RP48R4,  0x0004
        .equiv RP48R5,  0x0005
        .equiv RP49R0,  0x0008
        .equiv RP49R1,  0x0009
        .equiv RP49R2,  0x000A
        .equiv RP49R3,  0x000B
        .equiv RP49R4,  0x000C
        .equiv RP49R5,  0x000D


;----- RPOR9 Bits -----------------------------------------------------
        .equiv RP50R0,  0x0000
        .equiv RP50R1,  0x0001
        .equiv RP50R2,  0x0002
        .equiv RP50R3,  0x0003
        .equiv RP50R4,  0x0004
        .equiv RP50R5,  0x0005
        .equiv RP51R0,  0x0008
        .equiv RP51R1,  0x0009
        .equiv RP51R2,  0x000A
        .equiv RP51R3,  0x000B
        .equiv RP51R4,  0x000C
        .equiv RP51R5,  0x000D


;----- RPOR10 Bits -----------------------------------------------------
        .equiv RP52R0,  0x0000
        .equiv RP52R1,  0x0001
        .equiv RP52R2,  0x0002
        .equiv RP52R3,  0x0003
        .equiv RP52R4,  0x0004
        .equiv RP52R5,  0x0005
        .equiv RP53R0,  0x0008
        .equiv RP53R1,  0x0009
        .equiv RP53R2,  0x000A
        .equiv RP53R3,  0x000B
        .equiv RP53R4,  0x000C
        .equiv RP53R5,  0x000D


;----- RPOR11 Bits -----------------------------------------------------
        .equiv RP54R0,  0x0000
        .equiv RP54R1,  0x0001
        .equiv RP54R2,  0x0002
        .equiv RP54R3,  0x0003
        .equiv RP54R4,  0x0004
        .equiv RP54R5,  0x0005
        .equiv RP55R0,  0x0008
        .equiv RP55R1,  0x0009
        .equiv RP55R2,  0x000A
        .equiv RP55R3,  0x000B
        .equiv RP55R4,  0x000C
        .equiv RP55R5,  0x000D


;----- RPOR12 Bits -----------------------------------------------------
        .equiv RP56R0,  0x0000
        .equiv RP56R1,  0x0001
        .equiv RP56R2,  0x0002
        .equiv RP56R3,  0x0003
        .equiv RP56R4,  0x0004
        .equiv RP56R5,  0x0005
        .equiv RP57R0,  0x0008
        .equiv RP57R1,  0x0009
        .equiv RP57R2,  0x000A
        .equiv RP57R3,  0x000B
        .equiv RP57R4,  0x000C
        .equiv RP57R5,  0x000D


;----- RPOR13 Bits -----------------------------------------------------
        .equiv RP58R0,  0x0000
        .equiv RP58R1,  0x0001
        .equiv RP58R2,  0x0002
        .equiv RP58R3,  0x0003
        .equiv RP58R4,  0x0004
        .equiv RP58R5,  0x0005
        .equiv RP59R0,  0x0008
        .equiv RP59R1,  0x0009
        .equiv RP59R2,  0x000A
        .equiv RP59R3,  0x000B
        .equiv RP59R4,  0x000C
        .equiv RP59R5,  0x000D


;----- RPOR14 Bits -----------------------------------------------------
        .equiv RP60R0,  0x0000
        .equiv RP60R1,  0x0001
        .equiv RP60R2,  0x0002
        .equiv RP60R3,  0x0003
        .equiv RP60R4,  0x0004
        .equiv RP60R5,  0x0005
        .equiv RP61R0,  0x0008
        .equiv RP61R1,  0x0009
        .equiv RP61R2,  0x000A
        .equiv RP61R3,  0x000B
        .equiv RP61R4,  0x000C
        .equiv RP61R5,  0x000D


;----- RPOR15 Bits -----------------------------------------------------
        .equiv RP62R0,  0x0000
        .equiv RP62R1,  0x0001
        .equiv RP62R2,  0x0002
        .equiv RP62R3,  0x0003
        .equiv RP62R4,  0x0004
        .equiv RP62R5,  0x0005
        .equiv RP63R0,  0x0008
        .equiv RP63R1,  0x0009
        .equiv RP63R2,  0x000A
        .equiv RP63R3,  0x000B
        .equiv RP63R4,  0x000C
        .equiv RP63R5,  0x000D


;----- RPOR16 Bits -----------------------------------------------------
        .equiv RP176R0, 0x0000
        .equiv RP176R1, 0x0001
        .equiv RP176R2, 0x0002
        .equiv RP176R3, 0x0003
        .equiv RP176R4, 0x0004
        .equiv RP176R5, 0x0005
        .equiv RP177R0, 0x0008
        .equiv RP177R1, 0x0009
        .equiv RP177R2, 0x000A
        .equiv RP177R3, 0x000B
        .equiv RP177R4, 0x000C
        .equiv RP177R5, 0x000D


;----- RPOR17 Bits -----------------------------------------------------
        .equiv RP178R0, 0x0000
        .equiv RP178R1, 0x0001
        .equiv RP178R2, 0x0002
        .equiv RP178R3, 0x0003
        .equiv RP178R4, 0x0004
        .equiv RP178R5, 0x0005
        .equiv RP179R0, 0x0008
        .equiv RP179R1, 0x0009
        .equiv RP179R2, 0x000A
        .equiv RP179R3, 0x000B
        .equiv RP179R4, 0x000C
        .equiv RP179R5, 0x000D


;----- RPOR18 Bits -----------------------------------------------------
        .equiv RP180R0, 0x0000
        .equiv RP180R1, 0x0001
        .equiv RP180R2, 0x0002
        .equiv RP180R3, 0x0003
        .equiv RP180R4, 0x0004
        .equiv RP180R5, 0x0005
        .equiv RP181R0, 0x0008
        .equiv RP181R1, 0x0009
        .equiv RP181R2, 0x000A
        .equiv RP181R3, 0x000B
        .equiv RP181R4, 0x000C
        .equiv RP181R5, 0x000D


;----- RPINR0 Bits -----------------------------------------------------
        .equiv INT1R0,  0x0008
        .equiv INT1R1,  0x0009
        .equiv INT1R2,  0x000A
        .equiv INT1R3,  0x000B
        .equiv INT1R4,  0x000C
        .equiv INT1R5,  0x000D
        .equiv INT1R6,  0x000E
        .equiv INT1R7,  0x000F


;----- RPINR1 Bits -----------------------------------------------------
        .equiv INT2R0,  0x0000
        .equiv INT2R1,  0x0001
        .equiv INT2R2,  0x0002
        .equiv INT2R3,  0x0003
        .equiv INT2R4,  0x0004
        .equiv INT2R5,  0x0005
        .equiv INT2R6,  0x0006
        .equiv INT2R7,  0x0007


;----- RPINR2 Bits -----------------------------------------------------
        .equiv T1CKRR0, 0x0008
        .equiv T1CKRR1, 0x0009
        .equiv T1CKRR2, 0x000A
        .equiv T1CKRR3, 0x000B
        .equiv T1CKRR4, 0x000C
        .equiv T1CKRR5, 0x000D
        .equiv T1CKRR6, 0x000E
        .equiv T1CKRR7, 0x000F


;----- RPINR3 Bits -----------------------------------------------------
        .equiv T2CKR0,  0x0000
        .equiv T2CKR1,  0x0001
        .equiv T2CKR2,  0x0002
        .equiv T2CKR3,  0x0003
        .equiv T2CKR4,  0x0004
        .equiv T2CKR5,  0x0005
        .equiv T2CKR6,  0x0006
        .equiv T2CKR7,  0x0007
        .equiv T3CKR0,  0x0008
        .equiv T3CKR1,  0x0009
        .equiv T3CKR2,  0x000A
        .equiv T3CKR3,  0x000B
        .equiv T3CKR4,  0x000C
        .equiv T3CKR5,  0x000D
        .equiv T3CKR6,  0x000E
        .equiv T3CKR7,  0x000F


;----- RPINR7 Bits -----------------------------------------------------
        .equiv IC1R0,   0x0000
        .equiv IC1R1,   0x0001
        .equiv IC1R2,   0x0002
        .equiv IC1R3,   0x0003
        .equiv IC1R4,   0x0004
        .equiv IC1R5,   0x0005
        .equiv IC1R6,   0x0006
        .equiv IC1R7,   0x0007
        .equiv IC2R0,   0x0008
        .equiv IC2R1,   0x0009
        .equiv IC2R2,   0x000A
        .equiv IC2R3,   0x000B
        .equiv IC2R4,   0x000C
        .equiv IC2R5,   0x000D
        .equiv IC2R6,   0x000E
        .equiv IC2R7,   0x000F


;----- RPINR8 Bits -----------------------------------------------------
        .equiv IC3R0,   0x0000
        .equiv IC3R1,   0x0001
        .equiv IC3R2,   0x0002
        .equiv IC3R3,   0x0003
        .equiv IC3R4,   0x0004
        .equiv IC3R5,   0x0005
        .equiv IC3R6,   0x0006
        .equiv IC3R7,   0x0007
        .equiv IC4R0,   0x0008
        .equiv IC4R1,   0x0009
        .equiv IC4R2,   0x000A
        .equiv IC4R3,   0x000B
        .equiv IC4R4,   0x000C
        .equiv IC4R5,   0x000D
        .equiv IC4R6,   0x000E
        .equiv IC4R7,   0x000F


;----- RPINR11 Bits -----------------------------------------------------
        .equiv OCFAR0,  0x0000
        .equiv OCFAR1,  0x0001
        .equiv OCFAR2,  0x0002
        .equiv OCFAR3,  0x0003
        .equiv OCFAR4,  0x0004
        .equiv OCFAR5,  0x0005
        .equiv OCFAR6,  0x0006
        .equiv OCFAR7,  0x0007


;----- RPINR12 Bits -----------------------------------------------------
        .equiv FLT1R0,  0x0000
        .equiv FLT1R1,  0x0001
        .equiv FLT1R2,  0x0002
        .equiv FLT1R3,  0x0003
        .equiv FLT1R4,  0x0004
        .equiv FLT1R5,  0x0005
        .equiv FLT1R6,  0x0006
        .equiv FLT1R7,  0x0007
        .equiv FLT2R0,  0x0008
        .equiv FLT2R1,  0x0009
        .equiv FLT2R2,  0x000A
        .equiv FLT2R3,  0x000B
        .equiv FLT2R4,  0x000C
        .equiv FLT2R5,  0x000D
        .equiv FLT2R6,  0x000E
        .equiv FLT2R7,  0x000F


;----- RPINR13 Bits -----------------------------------------------------
        .equiv FLT3R0,  0x0000
        .equiv FLT3R1,  0x0001
        .equiv FLT3R2,  0x0002
        .equiv FLT3R3,  0x0003
        .equiv FLT3R4,  0x0004
        .equiv FLT3R5,  0x0005
        .equiv FLT3R6,  0x0006
        .equiv FLT3R7,  0x0007
        .equiv FLT4R0,  0x0008
        .equiv FLT4R1,  0x0009
        .equiv FLT4R2,  0x000A
        .equiv FLT4R3,  0x000B
        .equiv FLT4R4,  0x000C
        .equiv FLT4R5,  0x000D
        .equiv FLT4R6,  0x000E
        .equiv FLT4R7,  0x000F


;----- RPINR18 Bits -----------------------------------------------------
        .equiv U1RXR0,  0x0000
        .equiv U1RXR1,  0x0001
        .equiv U1RXR2,  0x0002
        .equiv U1RXR3,  0x0003
        .equiv U1RXR4,  0x0004
        .equiv U1RXR5,  0x0005
        .equiv U1RXR6,  0x0006
        .equiv U1RXR7,  0x0007
        .equiv U1CTSR0, 0x0008
        .equiv U1CTSR1, 0x0009
        .equiv U1CTSR2, 0x000A
        .equiv U1CTSR3, 0x000B
        .equiv U1CTSR4, 0x000C
        .equiv U1CTSR5, 0x000D
        .equiv U1CTSR6, 0x000E
        .equiv U1CTSR7, 0x000F


;----- RPINR19 Bits -----------------------------------------------------
        .equiv U2RXR0,  0x0000
        .equiv U2RXR1,  0x0001
        .equiv U2RXR2,  0x0002
        .equiv U2RXR3,  0x0003
        .equiv U2RXR4,  0x0004
        .equiv U2RXR5,  0x0005
        .equiv U2RXR6,  0x0006
        .equiv U2RXR7,  0x0007
        .equiv U2CTSR0, 0x0008
        .equiv U2CTSR1, 0x0009
        .equiv U2CTSR2, 0x000A
        .equiv U2CTSR3, 0x000B
        .equiv U2CTSR4, 0x000C
        .equiv U2CTSR5, 0x000D
        .equiv U2CTSR6, 0x000E
        .equiv U2CTSR7, 0x000F


;----- RPINR20 Bits -----------------------------------------------------
        .equiv SDI1R0,  0x0000
        .equiv SDI1R1,  0x0001
        .equiv SDI1R2,  0x0002
        .equiv SDI1R3,  0x0003
        .equiv SDI1R4,  0x0004
        .equiv SDI1R5,  0x0005
        .equiv SDI1R6,  0x0006
        .equiv SDI1R7,  0x0007
        .equiv SCK1INR0, 0x0008
        .equiv SCK1INR1, 0x0009
        .equiv SCK1INR2, 0x000A
        .equiv SCK1INR3, 0x000B
        .equiv SCK1INR4, 0x000C
        .equiv SCK1INR5, 0x000D
        .equiv SCK1INR6, 0x000E
        .equiv SCK1INR7, 0x000F


;----- RPINR21 Bits -----------------------------------------------------
        .equiv SS1R0,   0x0000
        .equiv SS1R1,   0x0001
        .equiv SS1R2,   0x0002
        .equiv SS1R3,   0x0003
        .equiv SS1R4,   0x0004
        .equiv SS1R5,   0x0005
        .equiv SS1R6,   0x0006
        .equiv SS1R7,   0x0007


;----- RPINR22 Bits -----------------------------------------------------
        .equiv SDI2R0,  0x0000
        .equiv SDI2R1,  0x0001
        .equiv SDI2R2,  0x0002
        .equiv SDI2R3,  0x0003
        .equiv SDI2R4,  0x0004
        .equiv SDI2R5,  0x0005
        .equiv SDI2R6,  0x0006
        .equiv SDI2R7,  0x0007
        .equiv SCK2INR0, 0x0008
        .equiv SCK2INR1, 0x0009
        .equiv SCK2INR2, 0x000A
        .equiv SCK2INR3, 0x000B
        .equiv SCK2INR4, 0x000C
        .equiv SCK2INR5, 0x000D
        .equiv SCK2INR6, 0x000E
        .equiv SCK2INR7, 0x000F


;----- RPINR23 Bits -----------------------------------------------------
        .equiv SS2R0,   0x0000
        .equiv SS2R1,   0x0001
        .equiv SS2R2,   0x0002
        .equiv SS2R3,   0x0003
        .equiv SS2R4,   0x0004
        .equiv SS2R5,   0x0005
        .equiv SS2R6,   0x0006
        .equiv SS2R7,   0x0007


;----- RPINR37 Bits -----------------------------------------------------
        .equiv SYCI1R0, 0x0008
        .equiv SYCI1R1, 0x0009
        .equiv SYCI1R2, 0x000A
        .equiv SYCI1R3, 0x000B
        .equiv SYCI1R4, 0x000C
        .equiv SYCI1R5, 0x000D
        .equiv SYCI1R6, 0x000E
        .equiv SYCI1R7, 0x000F


;----- RPINR38 Bits -----------------------------------------------------
        .equiv SYCI2R0, 0x0000
        .equiv SYCI2R1, 0x0001
        .equiv SYCI2R2, 0x0002
        .equiv SYCI2R3, 0x0003
        .equiv SYCI2R4, 0x0004
        .equiv SYCI2R5, 0x0005
        .equiv SYCI2R6, 0x0006
        .equiv SYCI2R7, 0x0007


;----- RPINR42 Bits -----------------------------------------------------
        .equiv FLT5R0,  0x0000
        .equiv FLT5R1,  0x0001
        .equiv FLT5R2,  0x0002
        .equiv FLT5R3,  0x0003
        .equiv FLT5R4,  0x0004
        .equiv FLT5R5,  0x0005
        .equiv FLT5R6,  0x0006
        .equiv FLT5R7,  0x0007
        .equiv FLT6R0,  0x0008
        .equiv FLT6R1,  0x0009
        .equiv FLT6R2,  0x000A
        .equiv FLT6R3,  0x000B
        .equiv FLT6R4,  0x000C
        .equiv FLT6R5,  0x000D
        .equiv FLT6R6,  0x000E
        .equiv FLT6R7,  0x000F


;----- RPINR43 Bits -----------------------------------------------------
        .equiv FLT7R0,  0x0000
        .equiv FLT7R1,  0x0001
        .equiv FLT7R2,  0x0002
        .equiv FLT7R3,  0x0003
        .equiv FLT7R4,  0x0004
        .equiv FLT7R5,  0x0005
        .equiv FLT7R6,  0x0006
        .equiv FLT7R7,  0x0007
        .equiv FLT8R0,  0x0008
        .equiv FLT8R1,  0x0009
        .equiv FLT8R2,  0x000A
        .equiv FLT8R3,  0x000B
        .equiv FLT8R4,  0x000C
        .equiv FLT8R5,  0x000D
        .equiv FLT8R6,  0x000E
        .equiv FLT8R7,  0x000F


;----- NVMCON Bits -----------------------------------------------------
        .equiv URERR,   0x0008
        .equiv RPDF,    0x0009
        .equiv P2ACTIV, 0x000A
        .equiv SFTSWP,  0x000B
        .equiv NVMSIDL, 0x000C
        .equiv WRERR,   0x000D
        .equiv WREN,    0x000E
        .equiv WR,      0x000F

        .equiv NVMOP0,  0x0000
        .equiv NVMOP1,  0x0001
        .equiv NVMOP2,  0x0002
        .equiv NVMOP3,  0x0003


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
        .equiv VREGSF,  0x000B
        .equiv IOPUWR,  0x000E
        .equiv TRAPR,   0x000F


;----- OSCCON Bits -----------------------------------------------------
        .equiv OSWEN,   0x0000
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


;----- REFOCON Bits -----------------------------------------------------
        .equiv ROSEL,   0x000C
        .equiv ROSSLP,  0x000D
        .equiv ROON,    0x000F

        .equiv RODIV0,  0x0008
        .equiv RODIV1,  0x0009
        .equiv RODIV2,  0x000A
        .equiv RODIV3,  0x000B


;----- ACLKCON Bits -----------------------------------------------------
        .equiv FRCSEL,  0x0006
        .equiv ASRCSEL, 0x0007
        .equiv SELACLK, 0x000D
        .equiv APLLCK,  0x000E
        .equiv ENAPLL,  0x000F

        .equiv APSTSCLR0, 0x0008
        .equiv APSTSCLR1, 0x0009
        .equiv APSTSCLR2, 0x000A


;----- PMD1 Bits -----------------------------------------------------
        .equiv ADCMD,   0x0000
        .equiv SPI1MD,  0x0003
        .equiv SPI2MD,  0x0004
        .equiv U1MD,    0x0005
        .equiv U2MD,    0x0006
        .equiv I2C1MD,  0x0007
        .equiv PWMMD,   0x0009
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
        .equiv IC1MD,   0x0008
        .equiv IC2MD,   0x0009
        .equiv IC3MD,   0x000A
        .equiv IC4MD,   0x000B


;----- PMD3 Bits -----------------------------------------------------
        .equiv I2C2MD,  0x0001
        .equiv CMPMD,   0x000A


;----- PMD4 Bits -----------------------------------------------------
        .equiv REFOMD,  0x0003


;----- PMD6 Bits -----------------------------------------------------
        .equiv PWM1MD,  0x0008
        .equiv PWM2MD,  0x0009
        .equiv PWM3MD,  0x000A
        .equiv PWM4MD,  0x000B
        .equiv PWM5MD,  0x000C


;----- PMD7 Bits -----------------------------------------------------
        .equiv PGA1MD,  0x0001
        .equiv CMP1MD,  0x0008
        .equiv CMP2MD,  0x0009
        .equiv CMP3MD,  0x000A
        .equiv CMP4MD,  0x000B


;----- PMD8 Bits -----------------------------------------------------
        .equiv CCSMD,   0x0001
        .equiv ABGMD,   0x0009
        .equiv PGA2MD,  0x000A


;----- IFS0 Bits -----------------------------------------------------
        .equiv INT0IF,  0x0000
        .equiv IC1IF,   0x0001
        .equiv OC1IF,   0x0002
        .equiv T1IF,    0x0003
        .equiv IC2IF,   0x0005
        .equiv OC2IF,   0x0006
        .equiv T2IF,    0x0007
        .equiv T3IF,    0x0008
        .equiv SPI1EIF, 0x0009
        .equiv SPI1IF,  0x000A
        .equiv U1RXIF,  0x000B
        .equiv U1TXIF,  0x000C
        .equiv ADCIF,   0x000D
        .equiv NVMIF,   0x000F


;----- IFS1 Bits -----------------------------------------------------
        .equiv SI2C1IF, 0x0000
        .equiv MI2C1IF, 0x0001
        .equiv AC1IF,   0x0002
        .equiv CNIF,    0x0003
        .equiv INT1IF,  0x0004
        .equiv OC3IF,   0x0009
        .equiv OC4IF,   0x000A
        .equiv T4IF,    0x000B
        .equiv T5IF,    0x000C
        .equiv INT2IF,  0x000D
        .equiv U2RXIF,  0x000E
        .equiv U2TXIF,  0x000F


;----- IFS2 Bits -----------------------------------------------------
        .equiv SPI2EIF, 0x0000
        .equiv SPI2IF,  0x0001
        .equiv IC3IF,   0x0005
        .equiv IC4IF,   0x0006


;----- IFS3 Bits -----------------------------------------------------
        .equiv SI2C2IF, 0x0001
        .equiv MI2C2IF, 0x0002
        .equiv INT4IF,  0x0006
        .equiv PSEMIF,  0x0009


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1EIF,   0x0001
        .equiv U2EIF,   0x0002
        .equiv PSESIF,  0x0009


;----- IFS5 Bits -----------------------------------------------------
        .equiv PWM1IF,  0x000E
        .equiv PWM2IF,  0x000F


;----- IFS6 Bits -----------------------------------------------------
        .equiv PWM3IF,  0x0000
        .equiv PWM4IF,  0x0001
        .equiv PWM5IF,  0x0002
        .equiv AC2IF,   0x0007
        .equiv AC3IF,   0x0008
        .equiv AC4IF,   0x0009
        .equiv ADCAN0IF, 0x000E
        .equiv ADCAN1IF, 0x000F


;----- IFS7 Bits -----------------------------------------------------
        .equiv ADCAN2IF, 0x0000
        .equiv ADCAN3IF, 0x0001
        .equiv ADCAN4IF, 0x0002
        .equiv ADCAN5IF, 0x0003
        .equiv ADCAN6IF, 0x0004
        .equiv ADCAN7IF, 0x0005


;----- IFS8 Bits -----------------------------------------------------
        .equiv ICDIF,   0x000E
        .equiv JTAGIF,  0x000F


;----- IFS9 Bits -----------------------------------------------------
        .equiv ADCAN8IF, 0x0007
        .equiv ADCAN9IF, 0x0008
        .equiv ADCAN10IF, 0x0009
        .equiv ADCAN11IF, 0x000A
        .equiv ADCAN12IF, 0x000B
        .equiv ADCAN13IF, 0x000C
        .equiv ADCAN14IF, 0x000D
        .equiv ADCAN15IF, 0x000E
        .equiv ADCAN16IF, 0x000F


;----- IFS10 Bits -----------------------------------------------------
        .equiv ADCAN17IF, 0x0000
        .equiv ADCAN18IF, 0x0001
        .equiv ADCAN19IF, 0x0002
        .equiv ADCAN20IF, 0x0003
        .equiv ADCAN21IF, 0x0004
        .equiv ADCAN22IF, 0x0005
        .equiv ADCAN23IF, 0x0006
        .equiv ADCAN24IF, 0x0007
        .equiv ADCAN25IF, 0x0008
        .equiv ADCAN26IF, 0x0009
        .equiv I2C1BCIF, 0x000D
        .equiv I2C2BCIF, 0x000E


;----- IFS11 Bits -----------------------------------------------------
        .equiv ADCMP1IF, 0x0001
        .equiv ADCMP2IF, 0x0002
        .equiv ADFLTR1IF, 0x0003
        .equiv ADFLTR2IF, 0x0004


;----- IEC0 Bits -----------------------------------------------------
        .equiv INT0IE,  0x0000
        .equiv IC1IE,   0x0001
        .equiv OC1IE,   0x0002
        .equiv T1IE,    0x0003
        .equiv IC2IE,   0x0005
        .equiv OC2IE,   0x0006
        .equiv T2IE,    0x0007
        .equiv T3IE,    0x0008
        .equiv SPI1EIE, 0x0009
        .equiv SPI1IE,  0x000A
        .equiv U1RXIE,  0x000B
        .equiv U1TXIE,  0x000C
        .equiv ADCIE,   0x000D
        .equiv NVMIE,   0x000F


;----- IEC1 Bits -----------------------------------------------------
        .equiv SI2C1IE, 0x0000
        .equiv MI2C1IE, 0x0001
        .equiv AC1IE,   0x0002
        .equiv CNIE,    0x0003
        .equiv INT1IE,  0x0004
        .equiv OC3IE,   0x0009
        .equiv OC4IE,   0x000A
        .equiv T4IE,    0x000B
        .equiv T5IE,    0x000C
        .equiv INT2IE,  0x000D
        .equiv U2RXIE,  0x000E
        .equiv U2TXIE,  0x000F


;----- IEC2 Bits -----------------------------------------------------
        .equiv SPI2EIE, 0x0000
        .equiv SPI2IE,  0x0001
        .equiv IC3IE,   0x0005
        .equiv IC4IE,   0x0006


;----- IEC3 Bits -----------------------------------------------------
        .equiv SI2C2IE, 0x0001
        .equiv MI2C2IE, 0x0002
        .equiv INT4IE,  0x0006
        .equiv PSEMIE,  0x0009


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1EIE,   0x0001
        .equiv U2EIE,   0x0002
        .equiv PSESIE,  0x0009


;----- IEC5 Bits -----------------------------------------------------
        .equiv PWM1IE,  0x000E
        .equiv PWM2IE,  0x000F


;----- IEC6 Bits -----------------------------------------------------
        .equiv PWM3IE,  0x0000
        .equiv PWM4IE,  0x0001
        .equiv PWM5IE,  0x0002
        .equiv AC2IE,   0x0007
        .equiv AC3IE,   0x0008
        .equiv AC4IE,   0x0009
        .equiv ADCAN0IE, 0x000E
        .equiv ADCAN1IE, 0x000F


;----- IEC7 Bits -----------------------------------------------------
        .equiv ADCAN2IE, 0x0000
        .equiv ADCAN3IE, 0x0001
        .equiv ADCAN4IE, 0x0002
        .equiv ADCAN5IE, 0x0003
        .equiv ADCAN6IE, 0x0004
        .equiv ADCAN7IE, 0x0005


;----- IEC8 Bits -----------------------------------------------------
       ;.equiv ICDIF,   0x000E
        .equiv JTAGIE,  0x000F


;----- IEC9 Bits -----------------------------------------------------
        .equiv ADCAN8IE, 0x0007
        .equiv ADCAN9IE, 0x0008
        .equiv ADCAN10IE, 0x0009
        .equiv ADCAN11IE, 0x000A
        .equiv ADCAN12IE, 0x000B
        .equiv ADCAN13IE, 0x000C
        .equiv ADCAN14IE, 0x000D
        .equiv ADCAN15IE, 0x000E
        .equiv ADCAN16IE, 0x000F


;----- IEC10 Bits -----------------------------------------------------
        .equiv ADCAN17IE, 0x0000
        .equiv ADCAN18IE, 0x0001
        .equiv ADCAN19IE, 0x0002
        .equiv ADCAN20IE, 0x0003
        .equiv ADCAN21IE, 0x0004
        .equiv ADCAN22IE, 0x0005
        .equiv ADCAN23IE, 0x0006
        .equiv ADCAN24IE, 0x0007
        .equiv ADCAN25IE, 0x0008
        .equiv ADCAN26IE, 0x0009
        .equiv I2C1BCIE, 0x000D
        .equiv I2C2BCIE, 0x000E


;----- IEC11 Bits -----------------------------------------------------
        .equiv ADCMP1IE, 0x0001
        .equiv ADCMP2IE, 0x0002
        .equiv ADFLTR1IE, 0x0003
        .equiv ADFLTR2IE, 0x0004


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
        .equiv ADCIP0,  0x0004
        .equiv ADCIP1,  0x0005
        .equiv ADCIP2,  0x0006
        .equiv NVMIP0,  0x000C
        .equiv NVMIP1,  0x000D
        .equiv NVMIP2,  0x000E


;----- IPC4 Bits -----------------------------------------------------
        .equiv SI2C1IP0, 0x0000
        .equiv SI2C1IP1, 0x0001
        .equiv SI2C1IP2, 0x0002
        .equiv MI2C1IP0, 0x0004
        .equiv MI2C1IP1, 0x0005
        .equiv MI2C1IP2, 0x0006
        .equiv AC1IP0,  0x0008
        .equiv AC1IP1,  0x0009
        .equiv AC1IP2,  0x000A
        .equiv CNIP0,   0x000C
        .equiv CNIP1,   0x000D
        .equiv CNIP2,   0x000E


;----- IPC5 Bits -----------------------------------------------------
        .equiv INT1IP0, 0x0000
        .equiv INT1IP1, 0x0001
        .equiv INT1IP2, 0x0002


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
        .equiv SPI2EIP0, 0x0000
        .equiv SPI2EIP1, 0x0001
        .equiv SPI2EIP2, 0x0002
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


;----- IPC12 Bits -----------------------------------------------------
        .equiv SI2C2IP0, 0x0004
        .equiv SI2C2IP1, 0x0005
        .equiv SI2C2IP2, 0x0006
        .equiv MI2C2IP0, 0x0008
        .equiv MI2C2IP1, 0x0009
        .equiv MI2C2IP2, 0x000A


;----- IPC13 Bits -----------------------------------------------------
        .equiv INT4IP0, 0x0008
        .equiv INT4IP1, 0x0009
        .equiv INT4IP2, 0x000A


;----- IPC14 Bits -----------------------------------------------------
        .equiv PSEMIP0, 0x0004
        .equiv PSEMIP1, 0x0005
        .equiv PSEMIP2, 0x0006


;----- IPC16 Bits -----------------------------------------------------
        .equiv U1EIP0,  0x0004
        .equiv U1EIP1,  0x0005
        .equiv U1EIP2,  0x0006
        .equiv U2EIP0,  0x0008
        .equiv U2EIP1,  0x0009
        .equiv U2EIP2,  0x000A


;----- IPC18 Bits -----------------------------------------------------
        .equiv PSESIP0, 0x0004
        .equiv PSESIP1, 0x0005
        .equiv PSESIP2, 0x0006


;----- IPC23 Bits -----------------------------------------------------
        .equiv PWM1IP0, 0x0008
        .equiv PWM1IP1, 0x0009
        .equiv PWM1IP2, 0x000A
        .equiv PWM2IP0, 0x000C
        .equiv PWM2IP1, 0x000D
        .equiv PWM2IP2, 0x000E


;----- IPC24 Bits -----------------------------------------------------
        .equiv PWM3IP0, 0x0000
        .equiv PWM3IP1, 0x0001
        .equiv PWM3IP2, 0x0002
        .equiv PWM4IP0, 0x0004
        .equiv PWM4IP1, 0x0005
        .equiv PWM4IP2, 0x0006
        .equiv PWM5IP0, 0x0008
        .equiv PWM5IP1, 0x0009
        .equiv PWM5IP2, 0x000A


;----- IPC25 Bits -----------------------------------------------------
        .equiv AC2IP0,  0x000C
        .equiv AC2IP1,  0x000D
        .equiv AC2IP2,  0x000E


;----- IPC26 Bits -----------------------------------------------------
        .equiv AC3IP0,  0x0000
        .equiv AC3IP1,  0x0001
        .equiv AC3IP2,  0x0002
        .equiv AC4IP0,  0x0004
        .equiv AC4IP1,  0x0005
        .equiv AC4IP2,  0x0006


;----- IPC27 Bits -----------------------------------------------------
        .equiv ADCAN0IP0, 0x0008
        .equiv ADCAN0IP1, 0x0009
        .equiv ADCAN0IP2, 0x000A
        .equiv ADCAN1IP0, 0x000C
        .equiv ADCAN1IP1, 0x000D
        .equiv ADCAN1IP2, 0x000E


;----- IPC28 Bits -----------------------------------------------------
        .equiv ADCAN2IP0, 0x0000
        .equiv ADCAN2IP1, 0x0001
        .equiv ADCAN2IP2, 0x0002
        .equiv ADCAN3IP0, 0x0004
        .equiv ADCAN3IP1, 0x0005
        .equiv ADCAN3IP2, 0x0006
        .equiv ADCAN4IP0, 0x0008
        .equiv ADCAN4IP1, 0x0009
        .equiv ADCAN4IP2, 0x000A
        .equiv ADCAN5IP0, 0x000C
        .equiv ADCAN5IP1, 0x000D
        .equiv ADCAN5IP2, 0x000E


;----- IPC29 Bits -----------------------------------------------------
        .equiv ADCAN6IP0, 0x0000
        .equiv ADCAN6IP1, 0x0001
        .equiv ADCAN6IP2, 0x0002
        .equiv ADCAN7IP0, 0x0004
        .equiv ADCAN7IP1, 0x0005
        .equiv ADCAN7IP2, 0x0006


;----- IPC35 Bits -----------------------------------------------------
        .equiv ICDIP0,  0x0008
        .equiv ICDIP1,  0x0009
        .equiv ICDIP2,  0x000A
        .equiv JTAGIP0, 0x000C
        .equiv JTAGIP1, 0x000D
        .equiv JTAGIP2, 0x000E


;----- IPC37 Bits -----------------------------------------------------
        .equiv ADCAN8IP0, 0x000C
        .equiv ADCAN8IP1, 0x000D
        .equiv ADCAN8IP2, 0x000E


;----- IPC38 Bits -----------------------------------------------------
        .equiv ADCAN9IP0, 0x0000
        .equiv ADCAN9IP1, 0x0001
        .equiv ADCAN9IP2, 0x0002
        .equiv ADCAN10IP0, 0x0004
        .equiv ADCAN10IP1, 0x0005
        .equiv ADCAN10IP2, 0x0006
        .equiv ADCAN11IP0, 0x0008
        .equiv ADCAN11IP1, 0x0009
        .equiv ADCAN11IP2, 0x000A
        .equiv ADCAN12IP0, 0x000C
        .equiv ADCAN12IP1, 0x000D
        .equiv ADCAN12IP2, 0x000E


;----- IPC39 Bits -----------------------------------------------------
        .equiv ADCAN13IP0, 0x0000
        .equiv ADCAN13IP1, 0x0001
        .equiv ADCAN13IP2, 0x0002
        .equiv ADCAN14IP0, 0x0004
        .equiv ADCAN14IP1, 0x0005
        .equiv ADCAN14IP2, 0x0006
        .equiv ADCAN15IP0, 0x0008
        .equiv ADCAN15IP1, 0x0009
        .equiv ADCAN15IP2, 0x000A
        .equiv ADCAN16IP0, 0x000C
        .equiv ADCAN16IP1, 0x000D
        .equiv ADCAN16IP2, 0x000E


;----- IPC40 Bits -----------------------------------------------------
        .equiv ADCAN17IP0, 0x0000
        .equiv ADCAN17IP1, 0x0001
        .equiv ADCAN17IP2, 0x0002
        .equiv ADCAN18IP0, 0x0004
        .equiv ADCAN18IP1, 0x0005
        .equiv ADCAN18IP2, 0x0006
        .equiv ADCAN19IP0, 0x0008
        .equiv ADCAN19IP1, 0x0009
        .equiv ADCAN19IP2, 0x000A
        .equiv ADCAN20IP0, 0x000C
        .equiv ADCAN20IP1, 0x000D
        .equiv ADCAN20IP2, 0x000E


;----- IPC41 Bits -----------------------------------------------------
        .equiv ADCAN21IP0, 0x0000
        .equiv ADCAN21IP1, 0x0001
        .equiv ADCAN21IP2, 0x0002
        .equiv ADCAN22IP0, 0x0004
        .equiv ADCAN22IP1, 0x0005
        .equiv ADCAN22IP2, 0x0006
        .equiv ADCAN23IP0, 0x0008
        .equiv ADCAN23IP1, 0x0009
        .equiv ADCAN23IP2, 0x000A
        .equiv ADCAN24IP0, 0x000C
        .equiv ADCAN24IP1, 0x000D
        .equiv ADCAN24IP2, 0x000E


;----- IPC42 Bits -----------------------------------------------------
        .equiv ADCAN25IP0, 0x0000
        .equiv ADCAN25IP1, 0x0001
        .equiv ADCAN25IP2, 0x0002
        .equiv ADCAN26IP0, 0x0004
        .equiv ADCAN26IP1, 0x0005
        .equiv ADCAN26IP2, 0x0006


;----- IPC43 Bits -----------------------------------------------------
        .equiv I2C1BCIP0, 0x0004
        .equiv I2C1BCIP1, 0x0005
        .equiv I2C1BCIP2, 0x0006
        .equiv I2C2BCIP0, 0x0008
        .equiv I2C2BCIP1, 0x0009
        .equiv I2C2BCIP2, 0x000A


;----- IPC44 Bits -----------------------------------------------------
        .equiv ADCMP1IP0, 0x0004
        .equiv ADCMP1IP1, 0x0005
        .equiv ADCMP1IP2, 0x0006
        .equiv ADCMP2IP0, 0x0008
        .equiv ADCMP2IP1, 0x0009
        .equiv ADCMP2IP2, 0x000A
        .equiv ADFLTR1IP0, 0x000C
        .equiv ADFLTR1IP1, 0x000D
        .equiv ADFLTR1IP2, 0x000E


;----- IPC45 Bits -----------------------------------------------------
        .equiv ADFLTR2IP0, 0x0000
        .equiv ADFLTR2IP1, 0x0001
        .equiv ADFLTR2IP2, 0x0002


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
        .equiv INT4EP,  0x0004
        .equiv AIVTEN,  0x0008
        .equiv SWTRAP,  0x000D
        .equiv DISI,    0x000E
        .equiv GIE,     0x000F


;----- INTCON3 Bits -----------------------------------------------------
        .equiv APLL,    0x0000
        .equiv DOOVR,   0x0004
        .equiv NAE,     0x0008


;----- INTCON4 Bits -----------------------------------------------------
        .equiv SGHT,    0x0000


;----- INTTREG Bits -----------------------------------------------------
        .equiv VECNUM0, 0x0000
        .equiv VECNUM1, 0x0001
        .equiv VECNUM2, 0x0002
        .equiv VECNUM3, 0x0003
        .equiv VECNUM4, 0x0004
        .equiv VECNUM5, 0x0005
        .equiv VECNUM6, 0x0006
        .equiv VECNUM7, 0x0007
        .equiv ILR0,    0x0008
        .equiv ILR1,    0x0009
        .equiv ILR2,    0x000A
        .equiv ILR3,    0x000B


;----- OC1CON1 Bits -----------------------------------------------------
        .equiv TRIGMODE, 0x0003
        .equiv OCFLTA,  0x0004
        .equiv ENFLTA,  0x0007
        .equiv OCSIDL,  0x000D

        .equiv OCM0,    0x0000
        .equiv OCM1,    0x0001
        .equiv OCM2,    0x0002
        .equiv OCTSEL0, 0x000A
        .equiv OCTSEL1, 0x000B
        .equiv OCTSEL2, 0x000C

        .equiv OCFLT0,  0x0004
        .equiv ENFLT0,  0x0007


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
        .equiv FLTMODE, 0x000E


;----- OC2CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv ENFLTA,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007


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
       ;.equiv FLTMODE, 0x000E


;----- OC3CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv ENFLTA,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007


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
       ;.equiv FLTMODE, 0x000E


;----- OC4CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv ENFLTA,  0x0007
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv ENFLT0,  0x0007


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
       ;.equiv FLTMODE, 0x000E


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


;----- PTCON2 Bits -----------------------------------------------------
        .equiv PCLKDIV0, 0x0000
        .equiv PCLKDIV1, 0x0001
        .equiv PCLKDIV2, 0x0002


;----- STCON Bits -----------------------------------------------------
       ;.equiv SYNCEN,  0x0007
       ;.equiv SYNCOEN, 0x0008
       ;.equiv SYNCPOL, 0x0009
       ;.equiv EIPU,    0x000A
       ;.equiv SEIEN,   0x000B
       ;.equiv SESTAT,  0x000C

       ;.equiv SEVTPS0, 0x0000
       ;.equiv SEVTPS1, 0x0001
       ;.equiv SEVTPS2, 0x0002
       ;.equiv SEVTPS3, 0x0003
       ;.equiv SYNCSRC0, 0x0004
       ;.equiv SYNCSRC1, 0x0005
       ;.equiv SYNCSRC2, 0x0006


;----- STCON2 Bits -----------------------------------------------------
       ;.equiv PCLKDIV0, 0x0000
       ;.equiv PCLKDIV1, 0x0001
       ;.equiv PCLKDIV2, 0x0002


;----- SSEVTCMP Bits -----------------------------------------------------
        .equiv SSEVTCMP0, 0x0003
        .equiv SSEVTCMP1, 0x0004
        .equiv SSEVTCMP2, 0x0005
        .equiv SSEVTCMP3, 0x0006
        .equiv SSEVTCMP4, 0x0007
        .equiv SSEVTCMP5, 0x0008
        .equiv SSEVTCMP6, 0x0009
        .equiv SSEVTCMP7, 0x000A
        .equiv SSEVTCMP8, 0x000B
        .equiv SSEVTCMP9, 0x000C
        .equiv SSEVTCMP10, 0x000D
        .equiv SSEVTCMP11, 0x000E
        .equiv SSEVTCMP12, 0x000F


;----- CHOP Bits -----------------------------------------------------
        .equiv CHPCLKEN, 0x000F

        .equiv CHOPCLK3, 0x0003
        .equiv CHOPCLK4, 0x0004
        .equiv CHOPCLK5, 0x0005
        .equiv CHOPCLK6, 0x0006
        .equiv CHOPCLK7, 0x0007
        .equiv CHOPCLK8, 0x0008
        .equiv CHOPCLK9, 0x0009


;----- PWMCON1 Bits -----------------------------------------------------
        .equiv IUE,     0x0000
        .equiv XPRES,   0x0001
        .equiv CAM,     0x0002
        .equiv MTBS,    0x0003
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
        .equiv SWAP,    0x0001
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
        .equiv CLMOD,   0x0008
        .equiv CLPOL,   0x0009
        .equiv IFLTMOD, 0x000F

        .equiv FLTMOD0, 0x0000
        .equiv FLTMOD1, 0x0001
        .equiv FLTSRC0, 0x0003
        .equiv FLTSRC1, 0x0004
        .equiv FLTSRC2, 0x0005
        .equiv FLTSRC3, 0x0006
        .equiv FLTSRC4, 0x0007
        .equiv CLSRC0,  0x000A
        .equiv CLSRC1,  0x000B
        .equiv CLSRC2,  0x000C
        .equiv CLSRC3,  0x000D
        .equiv CLSRC4,  0x000E


;----- TRIG1 Bits -----------------------------------------------------
        .equiv TRGCMP0, 0x0003
        .equiv TRGCMP1, 0x0004
        .equiv TRGCMP2, 0x0005
        .equiv TRGCMP3, 0x0006
        .equiv TRGCMP4, 0x0007
        .equiv TRGCMP5, 0x0008
        .equiv TRGCMP6, 0x0009
        .equiv TRGCMP7, 0x000A
        .equiv TRGCMP8, 0x000B
        .equiv TRGCMP9, 0x000C
        .equiv TRGCMP10, 0x000D
        .equiv TRGCMP11, 0x000E
        .equiv TRGCMP12, 0x000F


;----- TRGCON1 Bits -----------------------------------------------------
        .equiv DTM,     0x0007

        .equiv TRGSTRT0, 0x0000
        .equiv TRGSTRT1, 0x0001
        .equiv TRGSTRT2, 0x0002
        .equiv TRGSTRT3, 0x0003
        .equiv TRGSTRT4, 0x0004
        .equiv TRGSTRT5, 0x0005
        .equiv TRGDIV0, 0x000C
        .equiv TRGDIV1, 0x000D
        .equiv TRGDIV2, 0x000E
        .equiv TRGDIV3, 0x000F


;----- STRIG1 Bits -----------------------------------------------------
        .equiv STRGCMP0, 0x0003
        .equiv STRGCMP1, 0x0004
        .equiv STRGCMP2, 0x0005
        .equiv STRGCMP3, 0x0006
        .equiv STRGCMP4, 0x0007
        .equiv STRGCMP5, 0x0008
        .equiv STRGCMP6, 0x0009
        .equiv STRGCMP7, 0x000A
        .equiv STRGCMP8, 0x000B
        .equiv STRGCMP9, 0x000C
        .equiv STRGCMP10, 0x000D
        .equiv STRGCMP11, 0x000E
        .equiv STRGCMP12, 0x000F


;----- PWMCAP1 Bits -----------------------------------------------------
        .equiv PWMCAP0, 0x0003
        .equiv PWMCAP1, 0x0004
        .equiv PWMCAP2, 0x0005
        .equiv PWMCAP3, 0x0006
        .equiv PWMCAP4, 0x0007
        .equiv PWMCAP5, 0x0008
        .equiv PWMCAP6, 0x0009
        .equiv PWMCAP7, 0x000A
        .equiv PWMCAP8, 0x000B
        .equiv PWMCAP9, 0x000C
        .equiv PWMCAP10, 0x000D
        .equiv PWMCAP11, 0x000E
        .equiv PWMCAP12, 0x000F


;----- LEBCON1 Bits -----------------------------------------------------
        .equiv BPLL,    0x0000
        .equiv BPLH,    0x0001
        .equiv BPHL,    0x0002
        .equiv BPHH,    0x0003
        .equiv BCL_LEBCON1, 0x0004
        .equiv BCH,     0x0005
        .equiv CLLEBEN, 0x000A
        .equiv FLTLEBEN, 0x000B
        .equiv PLF,     0x000C
        .equiv PLR,     0x000D
        .equiv PHF,     0x000E
        .equiv PHR,     0x000F


;----- LEBDLY1 Bits -----------------------------------------------------
        .equiv LEB0,    0x0003
        .equiv LEB1,    0x0004
        .equiv LEB2,    0x0005
        .equiv LEB3,    0x0006
        .equiv LEB4,    0x0007
        .equiv LEB5,    0x0008
        .equiv LEB6,    0x0009
        .equiv LEB7,    0x000A
        .equiv LEB8,    0x000B


;----- AUXCON1 Bits -----------------------------------------------------
        .equiv CHOPLEN, 0x0000
        .equiv CHOPHEN, 0x0001
        .equiv HRDDIS,  0x000E
        .equiv HRPDIS,  0x000F

        .equiv CHOPSEL0, 0x0002
        .equiv CHOPSEL1, 0x0003
        .equiv CHOPSEL2, 0x0004
        .equiv CHOPSEL3, 0x0005
        .equiv BLANKSEL0, 0x0008
        .equiv BLANKSEL1, 0x0009
        .equiv BLANKSEL2, 0x000A
        .equiv BLANKSEL3, 0x000B


;----- PWMCON2 Bits -----------------------------------------------------
       ;.equiv IUE,     0x0000
       ;.equiv XPRES,   0x0001
       ;.equiv CAM,     0x0002
       ;.equiv MTBS,    0x0003
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
       ;.equiv SWAP,    0x0001
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
       ;.equiv CLMOD,   0x0008
       ;.equiv CLPOL,   0x0009
       ;.equiv IFLTMOD, 0x000F

       ;.equiv FLTMOD0, 0x0000
       ;.equiv FLTMOD1, 0x0001
       ;.equiv FLTSRC0, 0x0003
       ;.equiv FLTSRC1, 0x0004
       ;.equiv FLTSRC2, 0x0005
       ;.equiv FLTSRC3, 0x0006
       ;.equiv FLTSRC4, 0x0007
       ;.equiv CLSRC0,  0x000A
       ;.equiv CLSRC1,  0x000B
       ;.equiv CLSRC2,  0x000C
       ;.equiv CLSRC3,  0x000D
       ;.equiv CLSRC4,  0x000E


;----- TRIG2 Bits -----------------------------------------------------
       ;.equiv TRGCMP0, 0x0003
       ;.equiv TRGCMP1, 0x0004
       ;.equiv TRGCMP2, 0x0005
       ;.equiv TRGCMP3, 0x0006
       ;.equiv TRGCMP4, 0x0007
       ;.equiv TRGCMP5, 0x0008
       ;.equiv TRGCMP6, 0x0009
       ;.equiv TRGCMP7, 0x000A
       ;.equiv TRGCMP8, 0x000B
       ;.equiv TRGCMP9, 0x000C
       ;.equiv TRGCMP10, 0x000D
       ;.equiv TRGCMP11, 0x000E
       ;.equiv TRGCMP12, 0x000F


;----- TRGCON2 Bits -----------------------------------------------------
       ;.equiv DTM,     0x0007

       ;.equiv TRGSTRT0, 0x0000
       ;.equiv TRGSTRT1, 0x0001
       ;.equiv TRGSTRT2, 0x0002
       ;.equiv TRGSTRT3, 0x0003
       ;.equiv TRGSTRT4, 0x0004
       ;.equiv TRGSTRT5, 0x0005
       ;.equiv TRGDIV0, 0x000C
       ;.equiv TRGDIV1, 0x000D
       ;.equiv TRGDIV2, 0x000E
       ;.equiv TRGDIV3, 0x000F


;----- STRIG2 Bits -----------------------------------------------------
       ;.equiv STRGCMP0, 0x0003
       ;.equiv STRGCMP1, 0x0004
       ;.equiv STRGCMP2, 0x0005
       ;.equiv STRGCMP3, 0x0006
       ;.equiv STRGCMP4, 0x0007
       ;.equiv STRGCMP5, 0x0008
       ;.equiv STRGCMP6, 0x0009
       ;.equiv STRGCMP7, 0x000A
       ;.equiv STRGCMP8, 0x000B
       ;.equiv STRGCMP9, 0x000C
       ;.equiv STRGCMP10, 0x000D
       ;.equiv STRGCMP11, 0x000E
       ;.equiv STRGCMP12, 0x000F


;----- PWMCAP2 Bits -----------------------------------------------------
       ;.equiv PWMCAP0, 0x0003
       ;.equiv PWMCAP1, 0x0004
       ;.equiv PWMCAP2, 0x0005
       ;.equiv PWMCAP3, 0x0006
       ;.equiv PWMCAP4, 0x0007
       ;.equiv PWMCAP5, 0x0008
       ;.equiv PWMCAP6, 0x0009
       ;.equiv PWMCAP7, 0x000A
       ;.equiv PWMCAP8, 0x000B
       ;.equiv PWMCAP9, 0x000C
       ;.equiv PWMCAP10, 0x000D
       ;.equiv PWMCAP11, 0x000E
       ;.equiv PWMCAP12, 0x000F


;----- LEBCON2 Bits -----------------------------------------------------
       ;.equiv BPLL,    0x0000
       ;.equiv BPLH,    0x0001
       ;.equiv BPHL,    0x0002
       ;.equiv BPHH,    0x0003
        .equiv BCL_LEBCON2, 0x0004
       ;.equiv BCH,     0x0005
       ;.equiv CLLEBEN, 0x000A
       ;.equiv FLTLEBEN, 0x000B
       ;.equiv PLF,     0x000C
       ;.equiv PLR,     0x000D
       ;.equiv PHF,     0x000E
       ;.equiv PHR,     0x000F


;----- LEBDLY2 Bits -----------------------------------------------------
       ;.equiv LEB0,    0x0003
       ;.equiv LEB1,    0x0004
       ;.equiv LEB2,    0x0005
       ;.equiv LEB3,    0x0006
       ;.equiv LEB4,    0x0007
       ;.equiv LEB5,    0x0008
       ;.equiv LEB6,    0x0009
       ;.equiv LEB7,    0x000A
       ;.equiv LEB8,    0x000B


;----- AUXCON2 Bits -----------------------------------------------------
       ;.equiv CHOPLEN, 0x0000
       ;.equiv CHOPHEN, 0x0001
       ;.equiv HRDDIS,  0x000E
       ;.equiv HRPDIS,  0x000F

       ;.equiv CHOPSEL0, 0x0002
       ;.equiv CHOPSEL1, 0x0003
       ;.equiv CHOPSEL2, 0x0004
       ;.equiv CHOPSEL3, 0x0005
       ;.equiv BLANKSEL0, 0x0008
       ;.equiv BLANKSEL1, 0x0009
       ;.equiv BLANKSEL2, 0x000A
       ;.equiv BLANKSEL3, 0x000B


;----- PWMCON3 Bits -----------------------------------------------------
       ;.equiv IUE,     0x0000
       ;.equiv XPRES,   0x0001
       ;.equiv CAM,     0x0002
       ;.equiv MTBS,    0x0003
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


;----- IOCON3 Bits -----------------------------------------------------
       ;.equiv OSYNC,   0x0000
       ;.equiv SWAP,    0x0001
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


;----- FCLCON3 Bits -----------------------------------------------------
       ;.equiv FLTPOL,  0x0002
       ;.equiv CLMOD,   0x0008
       ;.equiv CLPOL,   0x0009
       ;.equiv IFLTMOD, 0x000F

       ;.equiv FLTMOD0, 0x0000
       ;.equiv FLTMOD1, 0x0001
       ;.equiv FLTSRC0, 0x0003
       ;.equiv FLTSRC1, 0x0004
       ;.equiv FLTSRC2, 0x0005
       ;.equiv FLTSRC3, 0x0006
       ;.equiv FLTSRC4, 0x0007
       ;.equiv CLSRC0,  0x000A
       ;.equiv CLSRC1,  0x000B
       ;.equiv CLSRC2,  0x000C
       ;.equiv CLSRC3,  0x000D
       ;.equiv CLSRC4,  0x000E


;----- TRIG3 Bits -----------------------------------------------------
       ;.equiv TRGCMP0, 0x0003
       ;.equiv TRGCMP1, 0x0004
       ;.equiv TRGCMP2, 0x0005
       ;.equiv TRGCMP3, 0x0006
       ;.equiv TRGCMP4, 0x0007
       ;.equiv TRGCMP5, 0x0008
       ;.equiv TRGCMP6, 0x0009
       ;.equiv TRGCMP7, 0x000A
       ;.equiv TRGCMP8, 0x000B
       ;.equiv TRGCMP9, 0x000C
       ;.equiv TRGCMP10, 0x000D
       ;.equiv TRGCMP11, 0x000E
       ;.equiv TRGCMP12, 0x000F


;----- TRGCON3 Bits -----------------------------------------------------
       ;.equiv DTM,     0x0007

       ;.equiv TRGSTRT0, 0x0000
       ;.equiv TRGSTRT1, 0x0001
       ;.equiv TRGSTRT2, 0x0002
       ;.equiv TRGSTRT3, 0x0003
       ;.equiv TRGSTRT4, 0x0004
       ;.equiv TRGSTRT5, 0x0005
       ;.equiv TRGDIV0, 0x000C
       ;.equiv TRGDIV1, 0x000D
       ;.equiv TRGDIV2, 0x000E
       ;.equiv TRGDIV3, 0x000F


;----- STRIG3 Bits -----------------------------------------------------
       ;.equiv STRGCMP0, 0x0003
       ;.equiv STRGCMP1, 0x0004
       ;.equiv STRGCMP2, 0x0005
       ;.equiv STRGCMP3, 0x0006
       ;.equiv STRGCMP4, 0x0007
       ;.equiv STRGCMP5, 0x0008
       ;.equiv STRGCMP6, 0x0009
       ;.equiv STRGCMP7, 0x000A
       ;.equiv STRGCMP8, 0x000B
       ;.equiv STRGCMP9, 0x000C
       ;.equiv STRGCMP10, 0x000D
       ;.equiv STRGCMP11, 0x000E
       ;.equiv STRGCMP12, 0x000F


;----- PWMCAP3 Bits -----------------------------------------------------
       ;.equiv PWMCAP0, 0x0003
       ;.equiv PWMCAP1, 0x0004
       ;.equiv PWMCAP2, 0x0005
       ;.equiv PWMCAP3, 0x0006
       ;.equiv PWMCAP4, 0x0007
       ;.equiv PWMCAP5, 0x0008
       ;.equiv PWMCAP6, 0x0009
       ;.equiv PWMCAP7, 0x000A
       ;.equiv PWMCAP8, 0x000B
       ;.equiv PWMCAP9, 0x000C
       ;.equiv PWMCAP10, 0x000D
       ;.equiv PWMCAP11, 0x000E
       ;.equiv PWMCAP12, 0x000F


;----- LEBCON3 Bits -----------------------------------------------------
       ;.equiv BPLL,    0x0000
       ;.equiv BPLH,    0x0001
       ;.equiv BPHL,    0x0002
       ;.equiv BPHH,    0x0003
        .equiv BCL_LEBCON3, 0x0004
       ;.equiv BCH,     0x0005
       ;.equiv CLLEBEN, 0x000A
       ;.equiv FLTLEBEN, 0x000B
       ;.equiv PLF,     0x000C
       ;.equiv PLR,     0x000D
       ;.equiv PHF,     0x000E
       ;.equiv PHR,     0x000F


;----- LEBDLY3 Bits -----------------------------------------------------
       ;.equiv LEB0,    0x0003
       ;.equiv LEB1,    0x0004
       ;.equiv LEB2,    0x0005
       ;.equiv LEB3,    0x0006
       ;.equiv LEB4,    0x0007
       ;.equiv LEB5,    0x0008
       ;.equiv LEB6,    0x0009
       ;.equiv LEB7,    0x000A
       ;.equiv LEB8,    0x000B


;----- AUXCON3 Bits -----------------------------------------------------
       ;.equiv CHOPLEN, 0x0000
       ;.equiv CHOPHEN, 0x0001
       ;.equiv HRDDIS,  0x000E
       ;.equiv HRPDIS,  0x000F

       ;.equiv CHOPSEL0, 0x0002
       ;.equiv CHOPSEL1, 0x0003
       ;.equiv CHOPSEL2, 0x0004
       ;.equiv CHOPSEL3, 0x0005
       ;.equiv BLANKSEL0, 0x0008
       ;.equiv BLANKSEL1, 0x0009
       ;.equiv BLANKSEL2, 0x000A
       ;.equiv BLANKSEL3, 0x000B


;----- PWMCON4 Bits -----------------------------------------------------
       ;.equiv IUE,     0x0000
       ;.equiv XPRES,   0x0001
       ;.equiv CAM,     0x0002
       ;.equiv MTBS,    0x0003
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


;----- IOCON4 Bits -----------------------------------------------------
       ;.equiv OSYNC,   0x0000
       ;.equiv SWAP,    0x0001
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


;----- FCLCON4 Bits -----------------------------------------------------
       ;.equiv FLTPOL,  0x0002
       ;.equiv CLMOD,   0x0008
       ;.equiv CLPOL,   0x0009
       ;.equiv IFLTMOD, 0x000F

       ;.equiv FLTMOD0, 0x0000
       ;.equiv FLTMOD1, 0x0001
       ;.equiv FLTSRC0, 0x0003
       ;.equiv FLTSRC1, 0x0004
       ;.equiv FLTSRC2, 0x0005
       ;.equiv FLTSRC3, 0x0006
       ;.equiv FLTSRC4, 0x0007
       ;.equiv CLSRC0,  0x000A
       ;.equiv CLSRC1,  0x000B
       ;.equiv CLSRC2,  0x000C
       ;.equiv CLSRC3,  0x000D
       ;.equiv CLSRC4,  0x000E


;----- TRIG4 Bits -----------------------------------------------------
       ;.equiv TRGCMP0, 0x0003
       ;.equiv TRGCMP1, 0x0004
       ;.equiv TRGCMP2, 0x0005
       ;.equiv TRGCMP3, 0x0006
       ;.equiv TRGCMP4, 0x0007
       ;.equiv TRGCMP5, 0x0008
       ;.equiv TRGCMP6, 0x0009
       ;.equiv TRGCMP7, 0x000A
       ;.equiv TRGCMP8, 0x000B
       ;.equiv TRGCMP9, 0x000C
       ;.equiv TRGCMP10, 0x000D
       ;.equiv TRGCMP11, 0x000E
       ;.equiv TRGCMP12, 0x000F


;----- TRGCON4 Bits -----------------------------------------------------
       ;.equiv DTM,     0x0007

       ;.equiv TRGSTRT0, 0x0000
       ;.equiv TRGSTRT1, 0x0001
       ;.equiv TRGSTRT2, 0x0002
       ;.equiv TRGSTRT3, 0x0003
       ;.equiv TRGSTRT4, 0x0004
       ;.equiv TRGSTRT5, 0x0005
       ;.equiv TRGDIV0, 0x000C
       ;.equiv TRGDIV1, 0x000D
       ;.equiv TRGDIV2, 0x000E
       ;.equiv TRGDIV3, 0x000F


;----- STRIG4 Bits -----------------------------------------------------
       ;.equiv STRGCMP0, 0x0003
       ;.equiv STRGCMP1, 0x0004
       ;.equiv STRGCMP2, 0x0005
       ;.equiv STRGCMP3, 0x0006
       ;.equiv STRGCMP4, 0x0007
       ;.equiv STRGCMP5, 0x0008
       ;.equiv STRGCMP6, 0x0009
       ;.equiv STRGCMP7, 0x000A
       ;.equiv STRGCMP8, 0x000B
       ;.equiv STRGCMP9, 0x000C
       ;.equiv STRGCMP10, 0x000D
       ;.equiv STRGCMP11, 0x000E
       ;.equiv STRGCMP12, 0x000F


;----- PWMCAP4 Bits -----------------------------------------------------
       ;.equiv PWMCAP0, 0x0003
       ;.equiv PWMCAP1, 0x0004
       ;.equiv PWMCAP2, 0x0005
       ;.equiv PWMCAP3, 0x0006
       ;.equiv PWMCAP4, 0x0007
       ;.equiv PWMCAP5, 0x0008
       ;.equiv PWMCAP6, 0x0009
       ;.equiv PWMCAP7, 0x000A
       ;.equiv PWMCAP8, 0x000B
       ;.equiv PWMCAP9, 0x000C
       ;.equiv PWMCAP10, 0x000D
       ;.equiv PWMCAP11, 0x000E
       ;.equiv PWMCAP12, 0x000F


;----- LEBCON4 Bits -----------------------------------------------------
       ;.equiv BPLL,    0x0000
       ;.equiv BPLH,    0x0001
       ;.equiv BPHL,    0x0002
       ;.equiv BPHH,    0x0003
        .equiv BCL_LEBCON4, 0x0004
       ;.equiv BCH,     0x0005
       ;.equiv CLLEBEN, 0x000A
       ;.equiv FLTLEBEN, 0x000B
       ;.equiv PLF,     0x000C
       ;.equiv PLR,     0x000D
       ;.equiv PHF,     0x000E
       ;.equiv PHR,     0x000F


;----- LEBDLY4 Bits -----------------------------------------------------
       ;.equiv LEB0,    0x0003
       ;.equiv LEB1,    0x0004
       ;.equiv LEB2,    0x0005
       ;.equiv LEB3,    0x0006
       ;.equiv LEB4,    0x0007
       ;.equiv LEB5,    0x0008
       ;.equiv LEB6,    0x0009
       ;.equiv LEB7,    0x000A
       ;.equiv LEB8,    0x000B


;----- AUXCON4 Bits -----------------------------------------------------
       ;.equiv CHOPLEN, 0x0000
       ;.equiv CHOPHEN, 0x0001
       ;.equiv HRDDIS,  0x000E
       ;.equiv HRPDIS,  0x000F

       ;.equiv CHOPSEL0, 0x0002
       ;.equiv CHOPSEL1, 0x0003
       ;.equiv CHOPSEL2, 0x0004
       ;.equiv CHOPSEL3, 0x0005
       ;.equiv BLANKSEL0, 0x0008
       ;.equiv BLANKSEL1, 0x0009
       ;.equiv BLANKSEL2, 0x000A
       ;.equiv BLANKSEL3, 0x000B


;----- PWMCON5 Bits -----------------------------------------------------
       ;.equiv IUE,     0x0000
       ;.equiv XPRES,   0x0001
       ;.equiv CAM,     0x0002
       ;.equiv MTBS,    0x0003
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


;----- IOCON5 Bits -----------------------------------------------------
       ;.equiv OSYNC,   0x0000
       ;.equiv SWAP,    0x0001
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


;----- FCLCON5 Bits -----------------------------------------------------
       ;.equiv FLTPOL,  0x0002
       ;.equiv CLMOD,   0x0008
       ;.equiv CLPOL,   0x0009
       ;.equiv IFLTMOD, 0x000F

       ;.equiv FLTMOD0, 0x0000
       ;.equiv FLTMOD1, 0x0001
       ;.equiv FLTSRC0, 0x0003
       ;.equiv FLTSRC1, 0x0004
       ;.equiv FLTSRC2, 0x0005
       ;.equiv FLTSRC3, 0x0006
       ;.equiv FLTSRC4, 0x0007
       ;.equiv CLSRC0,  0x000A
       ;.equiv CLSRC1,  0x000B
       ;.equiv CLSRC2,  0x000C
       ;.equiv CLSRC3,  0x000D
       ;.equiv CLSRC4,  0x000E


;----- TRIG5 Bits -----------------------------------------------------
       ;.equiv TRGCMP0, 0x0003
       ;.equiv TRGCMP1, 0x0004
       ;.equiv TRGCMP2, 0x0005
       ;.equiv TRGCMP3, 0x0006
       ;.equiv TRGCMP4, 0x0007
       ;.equiv TRGCMP5, 0x0008
       ;.equiv TRGCMP6, 0x0009
       ;.equiv TRGCMP7, 0x000A
       ;.equiv TRGCMP8, 0x000B
       ;.equiv TRGCMP9, 0x000C
       ;.equiv TRGCMP10, 0x000D
       ;.equiv TRGCMP11, 0x000E
       ;.equiv TRGCMP12, 0x000F


;----- TRGCON5 Bits -----------------------------------------------------
       ;.equiv DTM,     0x0007

       ;.equiv TRGSTRT0, 0x0000
       ;.equiv TRGSTRT1, 0x0001
       ;.equiv TRGSTRT2, 0x0002
       ;.equiv TRGSTRT3, 0x0003
       ;.equiv TRGSTRT4, 0x0004
       ;.equiv TRGSTRT5, 0x0005
       ;.equiv TRGDIV0, 0x000C
       ;.equiv TRGDIV1, 0x000D
       ;.equiv TRGDIV2, 0x000E
       ;.equiv TRGDIV3, 0x000F


;----- STRIG5 Bits -----------------------------------------------------
       ;.equiv STRGCMP0, 0x0003
       ;.equiv STRGCMP1, 0x0004
       ;.equiv STRGCMP2, 0x0005
       ;.equiv STRGCMP3, 0x0006
       ;.equiv STRGCMP4, 0x0007
       ;.equiv STRGCMP5, 0x0008
       ;.equiv STRGCMP6, 0x0009
       ;.equiv STRGCMP7, 0x000A
       ;.equiv STRGCMP8, 0x000B
       ;.equiv STRGCMP9, 0x000C
       ;.equiv STRGCMP10, 0x000D
       ;.equiv STRGCMP11, 0x000E
       ;.equiv STRGCMP12, 0x000F


;----- PWMCAP5 Bits -----------------------------------------------------
       ;.equiv PWMCAP0, 0x0003
       ;.equiv PWMCAP1, 0x0004
       ;.equiv PWMCAP2, 0x0005
       ;.equiv PWMCAP3, 0x0006
       ;.equiv PWMCAP4, 0x0007
       ;.equiv PWMCAP5, 0x0008
       ;.equiv PWMCAP6, 0x0009
       ;.equiv PWMCAP7, 0x000A
       ;.equiv PWMCAP8, 0x000B
       ;.equiv PWMCAP9, 0x000C
       ;.equiv PWMCAP10, 0x000D
       ;.equiv PWMCAP11, 0x000E
       ;.equiv PWMCAP12, 0x000F


;----- LEBCON5 Bits -----------------------------------------------------
       ;.equiv BPLL,    0x0000
       ;.equiv BPLH,    0x0001
       ;.equiv BPHL,    0x0002
       ;.equiv BPHH,    0x0003
        .equiv BCL_LEBCON5, 0x0004
       ;.equiv BCH,     0x0005
       ;.equiv CLLEBEN, 0x000A
       ;.equiv FLTLEBEN, 0x000B
       ;.equiv PLF,     0x000C
       ;.equiv PLR,     0x000D
       ;.equiv PHF,     0x000E
       ;.equiv PHR,     0x000F


;----- LEBDLY5 Bits -----------------------------------------------------
       ;.equiv LEB0,    0x0003
       ;.equiv LEB1,    0x0004
       ;.equiv LEB2,    0x0005
       ;.equiv LEB3,    0x0006
       ;.equiv LEB4,    0x0007
       ;.equiv LEB5,    0x0008
       ;.equiv LEB6,    0x0009
       ;.equiv LEB7,    0x000A
       ;.equiv LEB8,    0x000B


;----- AUXCON5 Bits -----------------------------------------------------
       ;.equiv CHOPLEN, 0x0000
       ;.equiv CHOPHEN, 0x0001
       ;.equiv HRDDIS,  0x000E
       ;.equiv HRPDIS,  0x000F

       ;.equiv CHOPSEL0, 0x0002
       ;.equiv CHOPSEL1, 0x0003
       ;.equiv CHOPSEL2, 0x0004
       ;.equiv CHOPSEL3, 0x0005
       ;.equiv BLANKSEL0, 0x0008
       ;.equiv BLANKSEL1, 0x0009
       ;.equiv BLANKSEL2, 0x000A
       ;.equiv BLANKSEL3, 0x000B


;----- TRISA Bits -----------------------------------------------------
        .equiv TRISA0,  0x0000
        .equiv TRISA1,  0x0001
        .equiv TRISA2,  0x0002
        .equiv TRISA3,  0x0003
        .equiv TRISA4,  0x0004


;----- PORTA Bits -----------------------------------------------------
        .equiv RA0,     0x0000
        .equiv RA1,     0x0001
        .equiv RA2,     0x0002
        .equiv RA3,     0x0003
        .equiv RA4,     0x0004


;----- LATA Bits -----------------------------------------------------
        .equiv LATA0,   0x0000
        .equiv LATA1,   0x0001
        .equiv LATA2,   0x0002
        .equiv LATA3,   0x0003
        .equiv LATA4,   0x0004


;----- ODCA Bits -----------------------------------------------------
        .equiv ODCA0,   0x0000
        .equiv ODCA1,   0x0001
        .equiv ODCA2,   0x0002
        .equiv ODCA3,   0x0003
        .equiv ODCA4,   0x0004


;----- CNENA Bits -----------------------------------------------------
        .equiv CNIEA0,  0x0000
        .equiv CNIEA1,  0x0001
        .equiv CNIEA2,  0x0002
        .equiv CNIEA3,  0x0003
        .equiv CNIEA4,  0x0004


;----- CNPUA Bits -----------------------------------------------------
        .equiv CNPUA0,  0x0000
        .equiv CNPUA1,  0x0001
        .equiv CNPUA2,  0x0002
        .equiv CNPUA3,  0x0003
        .equiv CNPUA4,  0x0004


;----- CNPDA Bits -----------------------------------------------------
        .equiv CNPDA0,  0x0000
        .equiv CNPDA1,  0x0001
        .equiv CNPDA2,  0x0002
        .equiv CNPDA3,  0x0003
        .equiv CNPDA4,  0x0004


;----- ANSELA Bits -----------------------------------------------------
        .equiv ANSA0,   0x0000
        .equiv ANSA1,   0x0001
        .equiv ANSA2,   0x0002


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
        .equiv ODCB0,   0x0000
        .equiv ODCB1,   0x0001
        .equiv ODCB2,   0x0002
        .equiv ODCB3,   0x0003
        .equiv ODCB4,   0x0004
        .equiv ODCB5,   0x0005
        .equiv ODCB6,   0x0006
        .equiv ODCB7,   0x0007
        .equiv ODCB8,   0x0008
        .equiv ODCB9,   0x0009
        .equiv ODCB10,  0x000A
        .equiv ODCB11,  0x000B
        .equiv ODCB12,  0x000C
        .equiv ODCB13,  0x000D
        .equiv ODCB14,  0x000E
        .equiv ODCB15,  0x000F


;----- CNENB Bits -----------------------------------------------------
        .equiv CNIEB0,  0x0000
        .equiv CNIEB1,  0x0001
        .equiv CNIEB2,  0x0002
        .equiv CNIEB3,  0x0003
        .equiv CNIEB4,  0x0004
        .equiv CNIEB5,  0x0005
        .equiv CNIEB6,  0x0006
        .equiv CNIEB7,  0x0007
        .equiv CNIEB8,  0x0008
        .equiv CNIEB9,  0x0009
        .equiv CNIEB10, 0x000A
        .equiv CNIEB11, 0x000B
        .equiv CNIEB12, 0x000C
        .equiv CNIEB13, 0x000D
        .equiv CNIEB14, 0x000E
        .equiv CNIEB15, 0x000F


;----- CNPUB Bits -----------------------------------------------------
        .equiv CNPUB0,  0x0000
        .equiv CNPUB1,  0x0001
        .equiv CNPUB2,  0x0002
        .equiv CNPUB3,  0x0003
        .equiv CNPUB4,  0x0004
        .equiv CNPUB5,  0x0005
        .equiv CNPUB6,  0x0006
        .equiv CNPUB7,  0x0007
        .equiv CNPUB8,  0x0008
        .equiv CNPUB9,  0x0009
        .equiv CNPUB10, 0x000A
        .equiv CNPUB11, 0x000B
        .equiv CNPUB12, 0x000C
        .equiv CNPUB13, 0x000D
        .equiv CNPUB14, 0x000E
        .equiv CNPUB15, 0x000F


;----- CNPDB Bits -----------------------------------------------------
        .equiv CNPDB0,  0x0000
        .equiv CNPDB1,  0x0001
        .equiv CNPDB2,  0x0002
        .equiv CNPDB3,  0x0003
        .equiv CNPDB4,  0x0004
        .equiv CNPDB5,  0x0005
        .equiv CNPDB6,  0x0006
        .equiv CNPDB7,  0x0007
        .equiv CNPDB8,  0x0008
        .equiv CNPDB9,  0x0009
        .equiv CNPDB10, 0x000A
        .equiv CNPDB11, 0x000B
        .equiv CNPDB12, 0x000C
        .equiv CNPDB13, 0x000D
        .equiv CNPDB14, 0x000E
        .equiv CNPDB15, 0x000F


;----- ANSELB Bits -----------------------------------------------------
        .equiv ANSB0,   0x0000
        .equiv ANSB1,   0x0001
        .equiv ANSB2,   0x0002
        .equiv ANSB3,   0x0003
        .equiv ANSB5,   0x0005
        .equiv ANSB6,   0x0006
        .equiv ANSB7,   0x0007
        .equiv ANSB9,   0x0009
        .equiv ANSB10,  0x000A


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
        .equiv TRISC10, 0x000A
        .equiv TRISC11, 0x000B
        .equiv TRISC12, 0x000C
        .equiv TRISC13, 0x000D
        .equiv TRISC14, 0x000E
        .equiv TRISC15, 0x000F


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
        .equiv RC10,    0x000A
        .equiv RC11,    0x000B
        .equiv RC12,    0x000C
        .equiv RC13,    0x000D
        .equiv RC14,    0x000E
        .equiv RC15,    0x000F


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
        .equiv LATC10,  0x000A
        .equiv LATC11,  0x000B
        .equiv LATC12,  0x000C
        .equiv LATC13,  0x000D
        .equiv LATC14,  0x000E
        .equiv LATC15,  0x000F


;----- ODCC Bits -----------------------------------------------------
        .equiv ODCC0,   0x0000
        .equiv ODCC1,   0x0001
        .equiv ODCC2,   0x0002
        .equiv ODCC3,   0x0003
        .equiv ODCC4,   0x0004
        .equiv ODCC5,   0x0005
        .equiv ODCC6,   0x0006
        .equiv ODCC7,   0x0007
        .equiv ODCC8,   0x0008
        .equiv ODCC9,   0x0009
        .equiv ODCC10,  0x000A
        .equiv ODCC11,  0x000B
        .equiv ODCC12,  0x000C
        .equiv ODCC13,  0x000D
        .equiv ODCC14,  0x000E
        .equiv ODCC15,  0x000F


;----- CNENC Bits -----------------------------------------------------
        .equiv CNIEC0,  0x0000
        .equiv CNIEC1,  0x0001
        .equiv CNIEC2,  0x0002
        .equiv CNIEC3,  0x0003
        .equiv CNIEC4,  0x0004
        .equiv CNIEC5,  0x0005
        .equiv CNIEC6,  0x0006
        .equiv CNIEC7,  0x0007
        .equiv CNIEC8,  0x0008
        .equiv CNIEC9,  0x0009
        .equiv CNIEC10, 0x000A
        .equiv CNIEC11, 0x000B
        .equiv CNIEC12, 0x000C
        .equiv CNIEC13, 0x000D
        .equiv CNIEC14, 0x000E
        .equiv CNIEC15, 0x000F


;----- CNPUC Bits -----------------------------------------------------
        .equiv CNPUC0,  0x0000
        .equiv CNPUC1,  0x0001
        .equiv CNPUC2,  0x0002
        .equiv CNPUC3,  0x0003
        .equiv CNPUC4,  0x0004
        .equiv CNPUC5,  0x0005
        .equiv CNPUC6,  0x0006
        .equiv CNPUC7,  0x0007
        .equiv CNPUC8,  0x0008
        .equiv CNPUC9,  0x0009
        .equiv CNPUC10, 0x000A
        .equiv CNPUC11, 0x000B
        .equiv CNPUC12, 0x000C
        .equiv CNPUC13, 0x000D
        .equiv CNPUC14, 0x000E
        .equiv CNPUC15, 0x000F


;----- CNPDC Bits -----------------------------------------------------
        .equiv CNPDC0,  0x0000
        .equiv CNPDC1,  0x0001
        .equiv CNPDC2,  0x0002
        .equiv CNPDC3,  0x0003
        .equiv CNPDC4,  0x0004
        .equiv CNPDC5,  0x0005
        .equiv CNPDC6,  0x0006
        .equiv CNPDC7,  0x0007
        .equiv CNPDC8,  0x0008
        .equiv CNPDC9,  0x0009
        .equiv CNPDC10, 0x000A
        .equiv CNPDC11, 0x000B
        .equiv CNPDC12, 0x000C
        .equiv CNPDC13, 0x000D
        .equiv CNPDC14, 0x000E
        .equiv CNPDC15, 0x000F


;----- ANSELC Bits -----------------------------------------------------
        .equiv ANSC0,   0x0000
        .equiv ANSC1,   0x0001
        .equiv ANSC2,   0x0002
        .equiv ANSC4,   0x0004
        .equiv ANSC5,   0x0005
        .equiv ANSC6,   0x0006
        .equiv ANSC9,   0x0009
        .equiv ANSC10,  0x000A
        .equiv ANSC11,  0x000B
        .equiv ANSC12,  0x000C


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
        .equiv ODCD12,  0x000C
        .equiv ODCD13,  0x000D
        .equiv ODCD14,  0x000E
        .equiv ODCD15,  0x000F


;----- CNEND Bits -----------------------------------------------------
        .equiv CNIED0,  0x0000
        .equiv CNIED1,  0x0001
        .equiv CNIED2,  0x0002
        .equiv CNIED3,  0x0003
        .equiv CNIED4,  0x0004
        .equiv CNIED5,  0x0005
        .equiv CNIED6,  0x0006
        .equiv CNIED7,  0x0007
        .equiv CNIED8,  0x0008
        .equiv CNIED9,  0x0009
        .equiv CNIED10, 0x000A
        .equiv CNIED11, 0x000B
        .equiv CNIED12, 0x000C
        .equiv CNIED13, 0x000D
        .equiv CNIED14, 0x000E
        .equiv CNIED15, 0x000F


;----- CNPUD Bits -----------------------------------------------------
        .equiv CNPUD0,  0x0000
        .equiv CNPUD1,  0x0001
        .equiv CNPUD2,  0x0002
        .equiv CNPUD3,  0x0003
        .equiv CNPUD4,  0x0004
        .equiv CNPUD5,  0x0005
        .equiv CNPUD6,  0x0006
        .equiv CNPUD7,  0x0007
        .equiv CNPUD8,  0x0008
        .equiv CNPUD9,  0x0009
        .equiv CNPUD10, 0x000A
        .equiv CNPUD11, 0x000B
        .equiv CNPUD12, 0x000C
        .equiv CNPUD13, 0x000D
        .equiv CNPUD14, 0x000E
        .equiv CNPUD15, 0x000F


;----- CNPDD Bits -----------------------------------------------------
        .equiv CNPDD0,  0x0000
        .equiv CNPDD1,  0x0001
        .equiv CNPDD2,  0x0002
        .equiv CNPDD3,  0x0003
        .equiv CNPDD4,  0x0004
        .equiv CNPDD5,  0x0005
        .equiv CNPDD6,  0x0006
        .equiv CNPDD7,  0x0007
        .equiv CNPDD8,  0x0008
        .equiv CNPDD9,  0x0009
        .equiv CNPDD10, 0x000A
        .equiv CNPDD11, 0x000B
        .equiv CNPDD12, 0x000C
        .equiv CNPDD13, 0x000D
        .equiv CNPDD14, 0x000E
        .equiv CNPDD15, 0x000F


;----- ANSELD Bits -----------------------------------------------------
        .equiv ANSD7,   0x0007
        .equiv ANSD13,  0x000D
        .equiv ANSD14,  0x000E


;----- APPS Bits -----------------------------------------------------
        .equiv APIFUL,  0x0000
        .equiv APIOV,   0x0001
        .equiv APOFUL,  0x0002
        .equiv APOOV,   0x0003
        .equiv STRFUL,  0x0004




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

; Fuses that are always present


;----- FBOOT (0x801000) --------------------------------------------------
;
;  The following settings are available for FBOOT:
;
;   Boot Mode Configuration Bits:
;     BTMODE_DUALPRIV      Device is in Dual Boot Privilege mode
;     BTMODE_DUALPROT      Device is in Dual Boot Protected mode
;     BTMODE_DUAL          Device is in Dual Boot mode
;     BTMODE_SINGLE        Device is in Single Boot (legacy) mode
;
        .equiv BTMODE_DUALPRIV, 0xFFFC ; Device is in Dual Boot Privilege mode
        .equiv BTMODE_DUALPROT, 0xFFFD ; Device is in Dual Boot Protected mode
        .equiv BTMODE_DUAL,     0xFFFE ; Device is in Dual Boot mode
        .equiv BTMODE_SINGLE,   0xFFFF ; Device is in Single Boot (legacy) mode

; Fuses that are only present in single panel mode */

.ifndef __DUAL_PARTITION

;----- FSEC (0xaf80) --------------------------------------------------
;
;  The following settings are available for FSEC:
;
;   Boot Segment Write-Protect bit:
;     BWRP_ON              Boot Segment is write protected
;     BWRP_OFF             Boot Segment may be written
;
;   Boot Segment Code-Protect Level bits:
;     BSS_HIGH             High Security
;     BSS_STNDRD           Standard Security
;     BSS_DISABLED         No Protection (other than BWRP)
;
;   Boot Segment Control bit:
;     BSS2_ON              Boot Segment size determined by FBSLIM
;     BSS2_OFF             No Boot Segment
;
;   General Segment Write-Protect bit:
;     GWRP_ON              General Segment is write protected
;     GWRP_OFF             General Segment may be written
;
;   General Segment Code-Protect Level bits:
;     GSS_HIGH             High Security
;     GSS_STNDRD           Standard Security
;     GSS_DISABLED         No Protection (other than GWRP)
;
;   Configuration Segment Write-Protect bit:
;     CWRP_ON              Configuration Segment is write protected
;     CWRP_OFF             Configuration Segment may be written
;
;   Configuration Segment Code-Protect Level bits:
;     CSS_HIGH             High Security
;     CSS_ENHNCD           Enhanced Security
;     CSS_STNDRD           Standard Security
;     CSS_DISABLED         No Protection (other than CWRP)
;
;   Alternate Interrupt Vector Table bit:
;     AIVTDIS_ON           Enabled AIVT
;     AIVTDIS_OFF          Disabled AIVT
;
        .equiv BWRP_ON,         0xFFFE ; Boot Segment is write protected
        .equiv BWRP_OFF,        0xFFFF ; Boot Segment may be written

        .equiv BSS_HIGH,        0xFFF9 ; High Security
        .equiv BSS_STNDRD,      0xFFFD ; Standard Security
        .equiv BSS_DISABLED,    0xFFFF ; No Protection (other than BWRP)

        .equiv BSS2_ON,         0xFFF7 ; Boot Segment size determined by FBSLIM
        .equiv BSS2_OFF,        0xFFFF ; No Boot Segment

        .equiv GWRP_ON,         0xFFDF ; General Segment is write protected
        .equiv GWRP_OFF,        0xFFFF ; General Segment may be written

        .equiv GSS_HIGH,        0xFF3F ; High Security
        .equiv GSS_STNDRD,      0xFFBF ; Standard Security
        .equiv GSS_DISABLED,    0xFFFF ; No Protection (other than GWRP)

        .equiv CWRP_ON,         0xFEFF ; Configuration Segment is write protected
        .equiv CWRP_OFF,        0xFFFF ; Configuration Segment may be written

        .equiv CSS_HIGH,        0xF1FF ; High Security
        .equiv CSS_ENHNCD,      0xF9FF ; Enhanced Security
        .equiv CSS_STNDRD,      0xFDFF ; Standard Security
        .equiv CSS_DISABLED,    0xFFFF ; No Protection (other than CWRP)

        .equiv AIVTDIS_ON,      0x7FFF ; Enabled AIVT
        .equiv AIVTDIS_OFF,     0xFFFF ; Disabled AIVT


;----- FBSLIM (0xaf90) --------------------------------------------------
;
;  The following settings are available for FBSLIM:
;
;   Boot Segment Flash Page Address Limit bits:
;     BSLIM_BSLIM          Boot Segment Flash page address  limit
;
        .equiv BSLIM_BSLIM,     0xE000 ; Boot Segment Flash page address  limit


;----- FSIGN (0xaf94) --------------------------------------------------
;
;  The following settings are available for FSIGN:
;

;----- FOSCSEL (0xaf98) --------------------------------------------------
;
;  The following settings are available for FOSCSEL:
;
;   Oscillator Source Selection:
;     FNOSC_FRC            Internal Fast RC (FRC)
;     FNOSC_FRCPLL         Fast RC Oscillator with divide-by-N with PLL module (FRCPLL) 
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary Oscillator with PLL module (XT + PLL, HS + PLL, EC + PLL)
;     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
;     FNOSC_FRCDIV16       Fast RC Oscillator with divide-by-16
;     FNOSC_FRCDIVN        Internal Fast RC (FRC) Oscillator with postscaler
;
;   Two-speed Oscillator Start-up Enable bit:
;     IESO_OFF             Start up with user-selected oscillator source
;     IESO_ON              Start up device with FRC, then switch to user-selected oscillator source
;
        .equiv FNOSC_FRC,       0xFFF8 ; Internal Fast RC (FRC)
        .equiv FNOSC_FRCPLL,    0xFFF9 ; Fast RC Oscillator with divide-by-N with PLL module (FRCPLL) 
        .equiv FNOSC_PRI,       0xFFFA ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFFFB ; Primary Oscillator with PLL module (XT + PLL, HS + PLL, EC + PLL)
        .equiv FNOSC_LPRC,      0xFFFD ; Low-Power RC Oscillator (LPRC)
        .equiv FNOSC_FRCDIV16,  0xFFFE ; Fast RC Oscillator with divide-by-16
        .equiv FNOSC_FRCDIVN,   0xFFFF ; Internal Fast RC (FRC) Oscillator with postscaler

        .equiv IESO_OFF,        0xFF7F ; Start up with user-selected oscillator source
        .equiv IESO_ON,         0xFFFF ; Start up device with FRC, then switch to user-selected oscillator source


;----- FOSC (0xaf9c) --------------------------------------------------
;
;  The following settings are available for FOSC:
;
;   Primary Oscillator Mode Select bits:
;     POSCMD_EC            EC (External Clock) Mode
;     POSCMD_XT            XT Crystal Oscillator Mode
;     POSCMD_HS            HS Crystal Oscillator Mode
;     POSCMD_NONE          Primary Oscillator disabled
;
;   OSC2 Pin Function bit:
;     OSCIOFNC_ON          OSC2 is general purpose digital I/O pin
;     OSCIOFNC_OFF         OSC2 is clock output
;
;   Peripheral pin select configuration bit:
;     IOL1WAY_OFF          Allow multiple reconfigurations
;     IOL1WAY_ON           Allow only one reconfiguration
;
;   Clock Switching Mode bits:
;     FCKSM_CSECME         Both Clock switching and Fail-safe Clock Monitor are enabled
;     FCKSM_CSECMD         Clock switching is enabled,Fail-safe Clock Monitor is disabled
;     FCKSM_CSDCMD         Both Clock switching and Fail-safe Clock Monitor are disabled
;
;   PLL Lock Enable Bit:
;     PLLKEN_OFF           Clock switch will not wait for the PLL lock signal
;     PLLKEN_ON            Clock switch to PLL source will wait until the PLL lock signal is valid
;
        .equiv POSCMD_EC,       0xFFFC ; EC (External Clock) Mode
        .equiv POSCMD_XT,       0xFFFD ; XT Crystal Oscillator Mode
        .equiv POSCMD_HS,       0xFFFE ; HS Crystal Oscillator Mode
        .equiv POSCMD_NONE,     0xFFFF ; Primary Oscillator disabled

        .equiv OSCIOFNC_ON,     0xFFFB ; OSC2 is general purpose digital I/O pin
        .equiv OSCIOFNC_OFF,    0xFFFF ; OSC2 is clock output

        .equiv IOL1WAY_OFF,     0xFFDF ; Allow multiple reconfigurations
        .equiv IOL1WAY_ON,      0xFFFF ; Allow only one reconfiguration

        .equiv FCKSM_CSECME,    0xFF3F ; Both Clock switching and Fail-safe Clock Monitor are enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Clock switching is enabled,Fail-safe Clock Monitor is disabled
        .equiv FCKSM_CSDCMD,    0xFFBF ; Both Clock switching and Fail-safe Clock Monitor are disabled

        .equiv PLLKEN_OFF,      0xFEFF ; Clock switch will not wait for the PLL lock signal
        .equiv PLLKEN_ON,       0xFFFF ; Clock switch to PLL source will wait until the PLL lock signal is valid


;----- FWDT (0xafa0) --------------------------------------------------
;
;  The following settings are available for FWDT:
;
;   Watchdog Timer Postscaler bits:
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
;   Watchdog Timer Prescaler bit:
;     WDTPRE_PR32          1:32
;     WDTPRE_PR128         1:128
;
;   Watchdog Timer Enable bits:
;     WDTEN_OFF            WDT and SWDTEN disabled
;     WDTEN_ON_DIS_SLEEP   WDT Enabled only while device is active (disabled in sleep, SWDTEN disabled)
;     WDTEN_ON_SWDTEN      WDT Enabled/Disabled (controlled using SWDTEN bit)
;     WDTEN_ON             WDT Enabled
;
;   Watchdog Timer Window Enable bit:
;     WINDIS_ON            Watchdog Timer in Window mode
;     WINDIS_OFF           Watchdog Timer in Non-Window mode
;
;   Watchdog Timer Window Select bits:
;     WDTWIN_WIN75         WDT Windo is 75% of WDT period
;     WDTWIN_WIN50         WDT Window is 50% of WDT period
;     WDTWIN_WIN37         WDT Window is 37.5% of WDT period
;     WDTWIN_WIN25         WDT Window is 25% of WDT period
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

        .equiv WDTEN_OFF,       0xFF9F ; WDT and SWDTEN disabled
        .equiv WDTEN_ON_DIS_SLEEP, 0xFFBF ; WDT Enabled only while device is active (disabled in sleep, SWDTEN disabled)
        .equiv WDTEN_ON_SWDTEN, 0xFFDF ; WDT Enabled/Disabled (controlled using SWDTEN bit)
        .equiv WDTEN_ON,        0xFFFF ; WDT Enabled

        .equiv WINDIS_ON,       0xFF7F ; Watchdog Timer in Window mode
        .equiv WINDIS_OFF,      0xFFFF ; Watchdog Timer in Non-Window mode

        .equiv WDTWIN_WIN75,    0xFCFF ; WDT Windo is 75% of WDT period
        .equiv WDTWIN_WIN50,    0xFDFF ; WDT Window is 50% of WDT period
        .equiv WDTWIN_WIN37,    0xFEFF ; WDT Window is 37.5% of WDT period
        .equiv WDTWIN_WIN25,    0xFFFF ; WDT Window is 25% of WDT period


;----- FPOR (0xafa4) --------------------------------------------------
;
;  The following settings are available for FPOR:
;

;----- FICD (0xafa8) --------------------------------------------------
;
;  The following settings are available for FICD:
;
;   ICD Communication Channel Select bits:
;     ICS_NONE             Reserved, do not use
;     ICS_PGD3             Communicate on PGEC3 and PGED3
;     ICS_PGD2             Communicate on PGEC2 and PGED2
;     ICS_PGD1             Communicate on PGEC1 and PGED1
;
;   JTAG Enable bit:
;     JTAGEN_OFF           JTAG is disabled
;     JTAGEN_ON            JTAG is enabled
;
;   BOOTSWP Instruction Enable/Disable bit:
;     BTSWP_ON             BOOTSWP instruction is enabled
;     BTSWP_OFF            BOOTSWP instruction is disabled
;
        .equiv ICS_NONE,        0xFFFC ; Reserved, do not use
        .equiv ICS_PGD3,        0xFFFD ; Communicate on PGEC3 and PGED3
        .equiv ICS_PGD2,        0xFFFE ; Communicate on PGEC2 and PGED2
        .equiv ICS_PGD1,        0xFFFF ; Communicate on PGEC1 and PGED1

        .equiv JTAGEN_OFF,      0xFFDF ; JTAG is disabled
        .equiv JTAGEN_ON,       0xFFFF ; JTAG is enabled

        .equiv BTSWP_ON,        0x7FFF ; BOOTSWP instruction is enabled
        .equiv BTSWP_OFF,       0xFFFF ; BOOTSWP instruction is disabled


;----- FDEVOPT (0xafac) --------------------------------------------------
;
;  The following settings are available for FDEVOPT:
;
;   PWMx Lock Enable bit:
;     PWMLOCK_OFF          PWM registers may be written without key sequence
;     PWMLOCK_ON           Certain PWM registers may only be written after key sequency
;
;   Alternate I2C1 Pin bit:
;     ALTI2C1_ON           I2C1 mapped to ASDA1/ASCL1 pins
;     ALTI2C1_OFF          I2C1 mapped to SDA1/SCL1 pins
;
;   Alternate I2C2 Pin bit:
;     ALTI2C2_ON           I2C2 mapped to ASDA2/ASCL2 pins
;     ALTI2C2_OFF          I2C2 mapped to SDA2/SCL2 pins
;
;   DACx Output Cross Connection bit:
;     DBCC_ON              Interconnects DACOUT1 and DACOUT2
;     DBCC_OFF             No Cross Connection between DAC outputs
;
        .equiv PWMLOCK_OFF,     0xFFFE ; PWM registers may be written without key sequence
        .equiv PWMLOCK_ON,      0xFFFF ; Certain PWM registers may only be written after key sequency

        .equiv ALTI2C1_ON,      0xFFF7 ; I2C1 mapped to ASDA1/ASCL1 pins
        .equiv ALTI2C1_OFF,     0xFFFF ; I2C1 mapped to SDA1/SCL1 pins

        .equiv ALTI2C2_ON,      0xFFEF ; I2C2 mapped to ASDA2/ASCL2 pins
        .equiv ALTI2C2_OFF,     0xFFFF ; I2C2 mapped to SDA2/SCL2 pins

        .equiv DBCC_ON,         0xFFBF ; Interconnects DACOUT1 and DACOUT2
        .equiv DBCC_OFF,        0xFFFF ; No Cross Connection between DAC outputs


;----- FALTREG (0xafb0) --------------------------------------------------
;
;  The following settings are available for FALTREG:
;
;   Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 1 bits:
;     CTXT1_IPL1           Alternate Register set assigned to IPL level 1
;     CTXT1_IPL2           Alternate Register set assigned to IPL level 2
;     CTXT1_IPL3           Alternate Register set assigned to IPL level 3
;     CTXT1_IPL4           Alternate Register set assigned to IPL level 4
;     CTXT1_IPL5           Alternate Register set assigned to IPL level 5
;     CTXT1_IPL6           Alternate Register set assigned to IPL level 6
;     CTXT1_IPL7           Alternate Register set assigned to IPL level 7
;     CTXT1_OFF            Not Assigned
;
;   Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 2 bits:
;     CTXT2_IPL1           Alternate Register set assigned to IPL level 1
;     CTXT2_IPL2           Alternate Register set assigned to IPL level 2
;     CTXT2_IPL3           Alternate Register set assigned to IPL level 3
;     CTXT2_IPL4           Alternate Register set assigned to IPL level 4
;     CTXT2_IPL5           Alternate Register set assigned to IPL level 5
;     CTXT2_IPL6           Alternate Register set assigned to IPL level 6
;     CTXT2_IPL7           Alternate Register set assigned to IPL level 7
;     CTXT2_OFF            Not Assigned
;
        .equiv CTXT1_IPL1,      0xFFF8 ; Alternate Register set assigned to IPL level 1
        .equiv CTXT1_IPL2,      0xFFF9 ; Alternate Register set assigned to IPL level 2
        .equiv CTXT1_IPL3,      0xFFFA ; Alternate Register set assigned to IPL level 3
        .equiv CTXT1_IPL4,      0xFFFB ; Alternate Register set assigned to IPL level 4
        .equiv CTXT1_IPL5,      0xFFFC ; Alternate Register set assigned to IPL level 5
        .equiv CTXT1_IPL6,      0xFFFD ; Alternate Register set assigned to IPL level 6
        .equiv CTXT1_IPL7,      0xFFFE ; Alternate Register set assigned to IPL level 7
        .equiv CTXT1_OFF,       0xFFFF ; Not Assigned

        .equiv CTXT2_IPL1,      0xFF8F ; Alternate Register set assigned to IPL level 1
        .equiv CTXT2_IPL2,      0xFF9F ; Alternate Register set assigned to IPL level 2
        .equiv CTXT2_IPL3,      0xFFAF ; Alternate Register set assigned to IPL level 3
        .equiv CTXT2_IPL4,      0xFFBF ; Alternate Register set assigned to IPL level 4
        .equiv CTXT2_IPL5,      0xFFCF ; Alternate Register set assigned to IPL level 5
        .equiv CTXT2_IPL6,      0xFFDF ; Alternate Register set assigned to IPL level 6
        .equiv CTXT2_IPL7,      0xFFEF ; Alternate Register set assigned to IPL level 7
        .equiv CTXT2_OFF,       0xFFFF ; Not Assigned


;----- FBTSEQ (0xaffc) --------------------------------------------------
;
;  The following settings are available for FBTSEQ:
;
;   Relative value defining which partition will be active after device Reset; the partition containing a lower boot number will be active:
;
;   The one's complement of BSEQ; must be calculated by the user and written during device programming.:
;


.endif

/* Fuses that are only present in dual panel mode */

.ifdef __DUAL_PARTITION

;----- FSEC (0x5780) --------------------------------------------------
;
;  The following settings are available for FSEC:
;
;   Boot Segment Write-Protect bit:
;     BWRP_ON              Boot Segment is write protected
;     BWRP_OFF             Boot Segment may be written
;
;   Boot Segment Code-Protect Level bits:
;     BSS_HIGH             High Security
;     BSS_STNDRD           Standard Security
;     BSS_DISABLED         No Protection (other than BWRP)
;
;   Boot Segment Control bit:
;     BSS2_ON              Boot Segment size determined by FBSLIM
;     BSS2_OFF             No Boot Segment
;
;   General Segment Write-Protect bit:
;     GWRP_ON              General Segment is write protected
;     GWRP_OFF             General Segment may be written
;
;   General Segment Code-Protect Level bits:
;     GSS_HIGH             High Security
;     GSS_STNDRD           Standard Security
;     GSS_DISABLED         No Protection (other than GWRP)
;
;   Configuration Segment Write-Protect bit:
;     CWRP_ON              Configuration Segment is write protected
;     CWRP_OFF             Configuration Segment may be written
;
;   Configuration Segment Code-Protect Level bits:
;     CSS_HIGH             High Security
;     CSS_ENHNCD           Enhanced Security
;     CSS_STNDRD           Standard Security
;     CSS_DISABLED         No Protection (other than CWRP)
;
;   Alternate Interrupt Vector Table bit:
;     AIVTDIS_ON           Enabled AIVT
;     AIVTDIS_OFF          Disabled AIVT
;
        .equiv BWRP_ON,         0xFFFE ; Boot Segment is write protected
        .equiv BWRP_OFF,        0xFFFF ; Boot Segment may be written

        .equiv BSS_HIGH,        0xFFF9 ; High Security
        .equiv BSS_STNDRD,      0xFFFD ; Standard Security
        .equiv BSS_DISABLED,    0xFFFF ; No Protection (other than BWRP)

        .equiv BSS2_ON,         0xFFF7 ; Boot Segment size determined by FBSLIM
        .equiv BSS2_OFF,        0xFFFF ; No Boot Segment

        .equiv GWRP_ON,         0xFFDF ; General Segment is write protected
        .equiv GWRP_OFF,        0xFFFF ; General Segment may be written

        .equiv GSS_HIGH,        0xFF3F ; High Security
        .equiv GSS_STNDRD,      0xFFBF ; Standard Security
        .equiv GSS_DISABLED,    0xFFFF ; No Protection (other than GWRP)

        .equiv CWRP_ON,         0xFEFF ; Configuration Segment is write protected
        .equiv CWRP_OFF,        0xFFFF ; Configuration Segment may be written

        .equiv CSS_HIGH,        0xF1FF ; High Security
        .equiv CSS_ENHNCD,      0xF9FF ; Enhanced Security
        .equiv CSS_STNDRD,      0xFDFF ; Standard Security
        .equiv CSS_DISABLED,    0xFFFF ; No Protection (other than CWRP)

        .equiv AIVTDIS_ON,      0x7FFF ; Enabled AIVT
        .equiv AIVTDIS_OFF,     0xFFFF ; Disabled AIVT


;----- FBSLIM (0x5790) --------------------------------------------------
;
;  The following settings are available for FBSLIM:
;
;   Boot Segment Flash Page Address Limit bits:
;     BSLIM_BSLIM          Boot Segment Flash page address  limit
;
        .equiv BSLIM_BSLIM,     0xE000 ; Boot Segment Flash page address  limit


;----- FSIGN (0x5794) --------------------------------------------------
;
;  The following settings are available for FSIGN:
;

;----- FOSCSEL (0x5798) --------------------------------------------------
;
;  The following settings are available for FOSCSEL:
;
;   Oscillator Source Selection:
;     FNOSC_FRC            Internal Fast RC (FRC)
;     FNOSC_FRCPLL         Fast RC Oscillator with divide-by-N with PLL module (FRCPLL) 
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary Oscillator with PLL module (XT + PLL, HS + PLL, EC + PLL)
;     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
;     FNOSC_FRCDIV16       Fast RC Oscillator with divide-by-16
;     FNOSC_FRCDIVN        Internal Fast RC (FRC) Oscillator with postscaler
;
;   Two-speed Oscillator Start-up Enable bit:
;     IESO_OFF             Start up with user-selected oscillator source
;     IESO_ON              Start up device with FRC, then switch to user-selected oscillator source
;
        .equiv FNOSC_FRC,       0xFFF8 ; Internal Fast RC (FRC)
        .equiv FNOSC_FRCPLL,    0xFFF9 ; Fast RC Oscillator with divide-by-N with PLL module (FRCPLL) 
        .equiv FNOSC_PRI,       0xFFFA ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFFFB ; Primary Oscillator with PLL module (XT + PLL, HS + PLL, EC + PLL)
        .equiv FNOSC_LPRC,      0xFFFD ; Low-Power RC Oscillator (LPRC)
        .equiv FNOSC_FRCDIV16,  0xFFFE ; Fast RC Oscillator with divide-by-16
        .equiv FNOSC_FRCDIVN,   0xFFFF ; Internal Fast RC (FRC) Oscillator with postscaler

        .equiv IESO_OFF,        0xFF7F ; Start up with user-selected oscillator source
        .equiv IESO_ON,         0xFFFF ; Start up device with FRC, then switch to user-selected oscillator source


;----- FOSC (0x579c) --------------------------------------------------
;
;  The following settings are available for FOSC:
;
;   Primary Oscillator Mode Select bits:
;     POSCMD_EC            EC (External Clock) Mode
;     POSCMD_XT            XT Crystal Oscillator Mode
;     POSCMD_HS            HS Crystal Oscillator Mode
;     POSCMD_NONE          Primary Oscillator disabled
;
;   OSC2 Pin Function bit:
;     OSCIOFNC_ON          OSC2 is general purpose digital I/O pin
;     OSCIOFNC_OFF         OSC2 is clock output
;
;   Peripheral pin select configuration bit:
;     IOL1WAY_OFF          Allow multiple reconfigurations
;     IOL1WAY_ON           Allow only one reconfiguration
;
;   Clock Switching Mode bits:
;     FCKSM_CSECME         Both Clock switching and Fail-safe Clock Monitor are enabled
;     FCKSM_CSECMD         Clock switching is enabled,Fail-safe Clock Monitor is disabled
;     FCKSM_CSDCMD         Both Clock switching and Fail-safe Clock Monitor are disabled
;
;   PLL Lock Enable Bit:
;     PLLKEN_OFF           Clock switch will not wait for the PLL lock signal
;     PLLKEN_ON            Clock switch to PLL source will wait until the PLL lock signal is valid
;
        .equiv POSCMD_EC,       0xFFFC ; EC (External Clock) Mode
        .equiv POSCMD_XT,       0xFFFD ; XT Crystal Oscillator Mode
        .equiv POSCMD_HS,       0xFFFE ; HS Crystal Oscillator Mode
        .equiv POSCMD_NONE,     0xFFFF ; Primary Oscillator disabled

        .equiv OSCIOFNC_ON,     0xFFFB ; OSC2 is general purpose digital I/O pin
        .equiv OSCIOFNC_OFF,    0xFFFF ; OSC2 is clock output

        .equiv IOL1WAY_OFF,     0xFFDF ; Allow multiple reconfigurations
        .equiv IOL1WAY_ON,      0xFFFF ; Allow only one reconfiguration

        .equiv FCKSM_CSECME,    0xFF3F ; Both Clock switching and Fail-safe Clock Monitor are enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Clock switching is enabled,Fail-safe Clock Monitor is disabled
        .equiv FCKSM_CSDCMD,    0xFFBF ; Both Clock switching and Fail-safe Clock Monitor are disabled

        .equiv PLLKEN_OFF,      0xFEFF ; Clock switch will not wait for the PLL lock signal
        .equiv PLLKEN_ON,       0xFFFF ; Clock switch to PLL source will wait until the PLL lock signal is valid


;----- FWDT (0x57a0) --------------------------------------------------
;
;  The following settings are available for FWDT:
;
;   Watchdog Timer Postscaler bits:
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
;   Watchdog Timer Prescaler bit:
;     WDTPRE_PR32          1:32
;     WDTPRE_PR128         1:128
;
;   Watchdog Timer Enable bits:
;     WDTEN_OFF            WDT and SWDTEN disabled
;     WDTEN_ON_DIS_SLEEP   WDT Enabled only while device is active (disabled in sleep, SWDTEN disabled)
;     WDTEN_ON_SWDTEN      WDT Enabled/Disabled (controlled using SWDTEN bit)
;     WDTEN_ON             WDT Enabled
;
;   Watchdog Timer Window Enable bit:
;     WINDIS_ON            Watchdog Timer in Window mode
;     WINDIS_OFF           Watchdog Timer in Non-Window mode
;
;   Watchdog Timer Window Select bits:
;     WDTWIN_WIN75         WDT Windo is 75% of WDT period
;     WDTWIN_WIN50         WDT Window is 50% of WDT period
;     WDTWIN_WIN37         WDT Window is 37.5% of WDT period
;     WDTWIN_WIN25         WDT Window is 25% of WDT period
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

        .equiv WDTEN_OFF,       0xFF9F ; WDT and SWDTEN disabled
        .equiv WDTEN_ON_DIS_SLEEP, 0xFFBF ; WDT Enabled only while device is active (disabled in sleep, SWDTEN disabled)
        .equiv WDTEN_ON_SWDTEN, 0xFFDF ; WDT Enabled/Disabled (controlled using SWDTEN bit)
        .equiv WDTEN_ON,        0xFFFF ; WDT Enabled

        .equiv WINDIS_ON,       0xFF7F ; Watchdog Timer in Window mode
        .equiv WINDIS_OFF,      0xFFFF ; Watchdog Timer in Non-Window mode

        .equiv WDTWIN_WIN75,    0xFCFF ; WDT Windo is 75% of WDT period
        .equiv WDTWIN_WIN50,    0xFDFF ; WDT Window is 50% of WDT period
        .equiv WDTWIN_WIN37,    0xFEFF ; WDT Window is 37.5% of WDT period
        .equiv WDTWIN_WIN25,    0xFFFF ; WDT Window is 25% of WDT period


;----- FPOR (0x57a4) --------------------------------------------------
;
;  The following settings are available for FPOR:
;

;----- FICD (0x57a8) --------------------------------------------------
;
;  The following settings are available for FICD:
;
;   ICD Communication Channel Select bits:
;     ICS_NONE             Reserved, do not use
;     ICS_PGD3             Communicate on PGEC3 and PGED3
;     ICS_PGD2             Communicate on PGEC2 and PGED2
;     ICS_PGD1             Communicate on PGEC1 and PGED1
;
;   JTAG Enable bit:
;     JTAGEN_OFF           JTAG is disabled
;     JTAGEN_ON            JTAG is enabled
;
;   BOOTSWP Instruction Enable/Disable bit:
;     BTSWP_ON             BOOTSWP instruction is enabled
;     BTSWP_OFF            BOOTSWP instruction is disabled
;
        .equiv ICS_NONE,        0xFFFC ; Reserved, do not use
        .equiv ICS_PGD3,        0xFFFD ; Communicate on PGEC3 and PGED3
        .equiv ICS_PGD2,        0xFFFE ; Communicate on PGEC2 and PGED2
        .equiv ICS_PGD1,        0xFFFF ; Communicate on PGEC1 and PGED1

        .equiv JTAGEN_OFF,      0xFFDF ; JTAG is disabled
        .equiv JTAGEN_ON,       0xFFFF ; JTAG is enabled

        .equiv BTSWP_ON,        0x7FFF ; BOOTSWP instruction is enabled
        .equiv BTSWP_OFF,       0xFFFF ; BOOTSWP instruction is disabled


;----- FDEVOPT (0x57ac) --------------------------------------------------
;
;  The following settings are available for FDEVOPT:
;
;   PWMx Lock Enable bit:
;     PWMLOCK_OFF          PWM registers may be written without key sequence
;     PWMLOCK_ON           Certain PWM registers may only be written after key sequency
;
;   Alternate I2C1 Pin bit:
;     ALTI2C1_ON           I2C1 mapped to ASDA1/ASCL1 pins
;     ALTI2C1_OFF          I2C1 mapped to SDA1/SCL1 pins
;
;   Alternate I2C2 Pin bit:
;     ALTI2C2_ON           I2C2 mapped to ASDA2/ASCL2 pins
;     ALTI2C2_OFF          I2C2 mapped to SDA2/SCL2 pins
;
;   DACx Output Cross Connection bit:
;     DBCC_ON              Interconnects DACOUT1 and DACOUT2
;     DBCC_OFF             No Cross Connection between DAC outputs
;
        .equiv PWMLOCK_OFF,     0xFFFE ; PWM registers may be written without key sequence
        .equiv PWMLOCK_ON,      0xFFFF ; Certain PWM registers may only be written after key sequency

        .equiv ALTI2C1_ON,      0xFFF7 ; I2C1 mapped to ASDA1/ASCL1 pins
        .equiv ALTI2C1_OFF,     0xFFFF ; I2C1 mapped to SDA1/SCL1 pins

        .equiv ALTI2C2_ON,      0xFFEF ; I2C2 mapped to ASDA2/ASCL2 pins
        .equiv ALTI2C2_OFF,     0xFFFF ; I2C2 mapped to SDA2/SCL2 pins

        .equiv DBCC_ON,         0xFFBF ; Interconnects DACOUT1 and DACOUT2
        .equiv DBCC_OFF,        0xFFFF ; No Cross Connection between DAC outputs


;----- FALTREG (0x57b0) --------------------------------------------------
;
;  The following settings are available for FALTREG:
;
;   Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 1 bits:
;     CTXT1_IPL1           Alternate Register set assigned to IPL level 1
;     CTXT1_IPL2           Alternate Register set assigned to IPL level 2
;     CTXT1_IPL3           Alternate Register set assigned to IPL level 3
;     CTXT1_IPL4           Alternate Register set assigned to IPL level 4
;     CTXT1_IPL5           Alternate Register set assigned to IPL level 5
;     CTXT1_IPL6           Alternate Register set assigned to IPL level 6
;     CTXT1_IPL7           Alternate Register set assigned to IPL level 7
;     CTXT1_OFF            Not Assigned
;
;   Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 2 bits:
;     CTXT2_IPL1           Alternate Register set assigned to IPL level 1
;     CTXT2_IPL2           Alternate Register set assigned to IPL level 2
;     CTXT2_IPL3           Alternate Register set assigned to IPL level 3
;     CTXT2_IPL4           Alternate Register set assigned to IPL level 4
;     CTXT2_IPL5           Alternate Register set assigned to IPL level 5
;     CTXT2_IPL6           Alternate Register set assigned to IPL level 6
;     CTXT2_IPL7           Alternate Register set assigned to IPL level 7
;     CTXT2_OFF            Not Assigned
;
        .equiv CTXT1_IPL1,      0xFFF8 ; Alternate Register set assigned to IPL level 1
        .equiv CTXT1_IPL2,      0xFFF9 ; Alternate Register set assigned to IPL level 2
        .equiv CTXT1_IPL3,      0xFFFA ; Alternate Register set assigned to IPL level 3
        .equiv CTXT1_IPL4,      0xFFFB ; Alternate Register set assigned to IPL level 4
        .equiv CTXT1_IPL5,      0xFFFC ; Alternate Register set assigned to IPL level 5
        .equiv CTXT1_IPL6,      0xFFFD ; Alternate Register set assigned to IPL level 6
        .equiv CTXT1_IPL7,      0xFFFE ; Alternate Register set assigned to IPL level 7
        .equiv CTXT1_OFF,       0xFFFF ; Not Assigned

        .equiv CTXT2_IPL1,      0xFF8F ; Alternate Register set assigned to IPL level 1
        .equiv CTXT2_IPL2,      0xFF9F ; Alternate Register set assigned to IPL level 2
        .equiv CTXT2_IPL3,      0xFFAF ; Alternate Register set assigned to IPL level 3
        .equiv CTXT2_IPL4,      0xFFBF ; Alternate Register set assigned to IPL level 4
        .equiv CTXT2_IPL5,      0xFFCF ; Alternate Register set assigned to IPL level 5
        .equiv CTXT2_IPL6,      0xFFDF ; Alternate Register set assigned to IPL level 6
        .equiv CTXT2_IPL7,      0xFFEF ; Alternate Register set assigned to IPL level 7
        .equiv CTXT2_OFF,       0xFFFF ; Not Assigned


;----- FBTSEQ (0x57fc) --------------------------------------------------
;
;  The following settings are available for FBTSEQ:
;
;   Relative value defining which partition will be active after device Reset; the partition containing a lower boot number will be active:
;
;   The one's complement of BSEQ; must be calculated by the user and written during device programming.:
;


.endif


.LIST
