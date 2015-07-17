;==========================================================================
;  PIC33EP32GS202 Standard Assembly Include File
; 
;  (c) Copyright 2014 Microchip Technology, All rights reserved
;  Part support version v1.22.A(19-Aug-2014)
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC33EP32GS202 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p33EP32GS202
;       2. Placing a ".equ" directive before the ".include":
;               .equ __33EP32GS202, 1
;               .include "p33EP32GS202.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __33EP32GS202
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

        .extern ADCON1L
        .equiv  ADCON1LL, _ADCON1L
        .equiv  ADCON1LH, _ADCON1L+1

        .extern ADCON1H
        .equiv  ADCON1HL, _ADCON1H
        .equiv  ADCON1HH, _ADCON1H+1

        .extern ADCON2L
        .equiv  ADCON2LL, _ADCON2L
        .equiv  ADCON2LH, _ADCON2L+1

        .extern ADCON2H
        .equiv  ADCON2HL, _ADCON2H
        .equiv  ADCON2HH, _ADCON2H+1

        .extern ADCON3L
        .equiv  ADCON3LL, _ADCON3L
        .equiv  ADCON3LH, _ADCON3L+1

        .extern ADCON3H
        .equiv  ADCON3HL, _ADCON3H
        .equiv  ADCON3HH, _ADCON3H+1

        .extern ADCON4L
        .equiv  ADCON4LL, _ADCON4L
        .equiv  ADCON4LH, _ADCON4L+1

        .extern ADCON4H
        .equiv  ADCON4HL, _ADCON4H
        .equiv  ADCON4HH, _ADCON4H+1

        .extern ADMOD0L
        .equiv  ADMOD0LL, _ADMOD0L
        .equiv  ADMOD0LH, _ADMOD0L+1

        .extern ADMOD0H
        .equiv  ADMOD0HL, _ADMOD0H
        .equiv  ADMOD0HH, _ADMOD0H+1

        .extern ADCIE1L
        .equiv  ADCIE1LL, _ADCIE1L
        .equiv  ADCIE1LH, _ADCIE1L+1

        .extern ADCSS1L
        .equiv  ADCSS1LL, _ADCSS1L
        .equiv  ADCSS1LH, _ADCSS1L+1

        .extern ADSTATL
        .equiv  ADSTATLL, _ADSTATL
        .equiv  ADSTATLH, _ADSTATL+1

        .extern ADCMP0ENL
        .equiv  ADCMP0ENLL, _ADCMP0ENL
        .equiv  ADCMP0ENLH, _ADCMP0ENL+1

        .extern ADCMP0LO
        .equiv  ADCMP0LOL, _ADCMP0LO
        .equiv  ADCMP0LOH, _ADCMP0LO+1

        .extern ADCMP0HI
        .equiv  ADCMP0HIL, _ADCMP0HI
        .equiv  ADCMP0HIH, _ADCMP0HI+1

        .extern ADCMP1ENL
        .equiv  ADCMP1ENLL, _ADCMP1ENL
        .equiv  ADCMP1ENLH, _ADCMP1ENL+1

        .extern ADCMP1LO
        .equiv  ADCMP1LOL, _ADCMP1LO
        .equiv  ADCMP1LOH, _ADCMP1LO+1

        .extern ADCMP1HI
        .equiv  ADCMP1HIL, _ADCMP1HI
        .equiv  ADCMP1HIH, _ADCMP1HI+1

        .extern ADFL0DAT
        .equiv  ADFL0DATL, _ADFL0DAT
        .equiv  ADFL0DATH, _ADFL0DAT+1

        .extern ADFL0CON
        .equiv  ADFL0CONL, _ADFL0CON
        .equiv  ADFL0CONH, _ADFL0CON+1

        .extern ADTRIG0L
        .equiv  ADTRIG0LL, _ADTRIG0L
        .equiv  ADTRIG0LH, _ADTRIG0L+1

        .extern ADTRIG0H
        .equiv  ADTRIG0HL, _ADTRIG0H
        .equiv  ADTRIG0HH, _ADTRIG0H+1

        .extern ADTRIG1L
        .equiv  ADTRIG1LL, _ADTRIG1L
        .equiv  ADTRIG1LH, _ADTRIG1L+1

        .extern ADTRIG1H
        .equiv  ADTRIG1HL, _ADTRIG1H
        .equiv  ADTRIG1HH, _ADTRIG1H+1

        .extern ADTRIG2L
        .equiv  ADTRIG2LL, _ADTRIG2L
        .equiv  ADTRIG2LH, _ADTRIG2L+1

        .extern ADTRIG2H
        .equiv  ADTRIG2HL, _ADTRIG2H
        .equiv  ADTRIG2HH, _ADTRIG2H+1

        .extern ADTRIG3L
        .equiv  ADTRIG3LL, _ADTRIG3L
        .equiv  ADTRIG3LH, _ADTRIG3L+1

        .extern ADTRIG3H
        .equiv  ADTRIG3HL, _ADTRIG3H
        .equiv  ADTRIG3HH, _ADTRIG3H+1

        .extern ADCMP0CON
        .equiv  ADCMP0CONL, _ADCMP0CON
        .equiv  ADCMP0CONH, _ADCMP0CON+1

        .extern ADCMP1CON
        .equiv  ADCMP1CONL, _ADCMP1CON
        .equiv  ADCMP1CONH, _ADCMP1CON+1

        .extern ADBASE
        .equiv  ADBASEL, _ADBASE
        .equiv  ADBASEH, _ADBASE+1

        .extern ADLVLTRGL
        .equiv  ADLVLTRGLL, _ADLVLTRGL
        .equiv  ADLVLTRGLH, _ADLVLTRGL+1

        .extern ADCORE0L
        .equiv  ADCORE0LL, _ADCORE0L
        .equiv  ADCORE0LH, _ADCORE0L+1

        .extern ADCORE0H
        .equiv  ADCORE0HL, _ADCORE0H
        .equiv  ADCORE0HH, _ADCORE0H+1

        .extern ADCORE1L
        .equiv  ADCORE1LL, _ADCORE1L
        .equiv  ADCORE1LH, _ADCORE1L+1

        .extern ADCORE1H
        .equiv  ADCORE1HL, _ADCORE1H
        .equiv  ADCORE1HH, _ADCORE1H+1

        .extern ADEICONL
        .equiv  ADEICONLL, _ADEICONL
        .equiv  ADEICONLH, _ADEICONL+1

        .extern ADEICONH
        .equiv  ADEICONHL, _ADEICONH
        .equiv  ADEICONHH, _ADEICONH+1

        .extern ADCON5L
        .equiv  ADCON5LL, _ADCON5L
        .equiv  ADCON5LH, _ADCON5L+1

        .extern ADCON5H
        .equiv  ADCON5HL, _ADCON5H
        .equiv  ADCON5HH, _ADCON5H+1

        .extern ADCAL0L
        .equiv  ADCAL0LL, _ADCAL0L
        .equiv  ADCAL0LH, _ADCAL0L+1

        .extern ADCAL1H
        .equiv  ADCAL1HL, _ADCAL1H
        .equiv  ADCAL1HH, _ADCAL1H+1

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

        .extern RPINR12
        .equiv  RPINR12L, _RPINR12
        .equiv  RPINR12H, _RPINR12+1

        .extern RPINR13
        .equiv  RPINR13L, _RPINR13
        .equiv  RPINR13H, _RPINR13+1

        .extern RPINR18
        .equiv  RPINR18L, _RPINR18
        .equiv  RPINR18H, _RPINR18+1

        .extern RPINR20
        .equiv  RPINR20L, _RPINR20
        .equiv  RPINR20H, _RPINR20+1

        .extern RPINR21
        .equiv  RPINR21L, _RPINR21
        .equiv  RPINR21H, _RPINR21+1

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

        .extern NVMADRL
        .equiv  NVMADRLL, _NVMADRL
        .equiv  NVMADRLH, _NVMADRL+1

        .extern NVMADRH
        .equiv  NVMADRHL, _NVMADRH
        .equiv  NVMADRHH, _NVMADRH+1

        .extern NVMADRU
        .equiv  NVMADRUL, _NVMADRU
        .equiv  NVMADRUH, _NVMADRU+1

        .extern NVMKEY
        .equiv  NVMKEYL, _NVMKEY
        .equiv  NVMKEYH, _NVMKEY+1

        .extern NVMSRCADRL
        .equiv  NVMSRCADRLL, _NVMSRCADRL
        .equiv  NVMSRCADRLH, _NVMSRCADRL+1

        .extern NVMSRCADRH
        .equiv  NVMSRCADRHL, _NVMSRCADRH
        .equiv  NVMSRCADRHH, _NVMSRCADRH+1

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

        .extern IPC7
        .equiv  IPC7L, _IPC7
        .equiv  IPC7H, _IPC7+1

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

        .extern IPC27
        .equiv  IPC27L, _IPC27
        .equiv  IPC27H, _IPC27+1

        .extern IPC28
        .equiv  IPC28L, _IPC28
        .equiv  IPC28H, _IPC28+1

        .extern IPC29
        .equiv  IPC29L, _IPC29
        .equiv  IPC29H, _IPC29+1

        .extern IPC37
        .equiv  IPC37L, _IPC37
        .equiv  IPC37H, _IPC37+1

        .extern IPC38
        .equiv  IPC38L, _IPC38
        .equiv  IPC38H, _IPC38+1

        .extern IPC39
        .equiv  IPC39L, _IPC39
        .equiv  IPC39H, _IPC39+1

        .extern IPC43
        .equiv  IPC43L, _IPC43
        .equiv  IPC43H, _IPC43+1

        .extern IPC44
        .equiv  IPC44L, _IPC44
        .equiv  IPC44H, _IPC44+1

        .extern IPC46
        .equiv  IPC46L, _IPC46
        .equiv  IPC46H, _IPC46+1

        .extern IPC47
        .equiv  IPC47L, _IPC47
        .equiv  IPC47H, _IPC47+1

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

        .equiv SYNCSEL0, 0x0000
        .equiv SYNCSEL1, 0x0001
        .equiv SYNCSEL2, 0x0002
        .equiv SYNCSEL3, 0x0003
        .equiv SYNCSEL4, 0x0004


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


;----- ADCON1L Bits -----------------------------------------------------
        .equiv PUMPEN,  0x000C
        .equiv ADSIDL,  0x000D
        .equiv ADON,    0x000F

        .equiv BSHFT0,  0x0004
        .equiv BSHFT1,  0x0005
        .equiv BSHFT2,  0x0006


;----- ADCON1H Bits -----------------------------------------------------
        .equiv FORM,    0x0007
        .equiv TRBERR,  0x000E
        .equiv TRBEN,   0x000F

        .equiv SHRRES0, 0x0005
        .equiv SHRRES1, 0x0006
        .equiv TRBSLV0, 0x0008
        .equiv TRBSLV1, 0x0009
        .equiv TRBSLV2, 0x000A
        .equiv TRBMST0, 0x000B
        .equiv TRBMST1, 0x000C
        .equiv TRBMST2, 0x000D


;----- ADCON2L Bits -----------------------------------------------------
        .equiv REFERCIE, 0x000E
        .equiv REFCIE,  0x000F

        .equiv SHRADCS0, 0x0000
        .equiv SHRADCS1, 0x0001
        .equiv SHRADCS2, 0x0002
        .equiv SHRADCS3, 0x0003
        .equiv SHRADCS4, 0x0004
        .equiv SHRADCS5, 0x0005
        .equiv SHRADCS6, 0x0006
        .equiv SHREISEL0, 0x0008
        .equiv SHREISEL1, 0x0009
        .equiv SHREISEL2, 0x000A


;----- ADCON2H Bits -----------------------------------------------------
        .equiv REFERR,  0x000E
        .equiv REFRDY,  0x000F

        .equiv SHRSAMC0, 0x0000
        .equiv SHRSAMC1, 0x0001
        .equiv SHRSAMC2, 0x0002
        .equiv SHRSAMC3, 0x0003
        .equiv SHRSAMC4, 0x0004
        .equiv SHRSAMC5, 0x0005
        .equiv SHRSAMC6, 0x0006
        .equiv SHRSAMC7, 0x0007
        .equiv SHRSAMC8, 0x0008
        .equiv SHRSAMC9, 0x0009


;----- ADCON3L Bits -----------------------------------------------------
        .equiv SWCTRG,  0x0006
        .equiv SWLCTRG, 0x0007
        .equiv CNVRTCH, 0x0008
        .equiv SHRSAMP, 0x0009
        .equiv SUSPRDY, 0x000A
        .equiv SUSPCIE, 0x000B
        .equiv SUSPEND, 0x000C

        .equiv CNVCHSEL0, 0x0000
        .equiv CNVCHSEL1, 0x0001
        .equiv CNVCHSEL2, 0x0002
        .equiv CNVCHSEL3, 0x0003
        .equiv CNVCHSEL4, 0x0004
        .equiv CNVCHSEL5, 0x0005
        .equiv REFSEL0, 0x000D
        .equiv REFSEL1, 0x000E
        .equiv REFSEL2, 0x000F


;----- ADCON3H Bits -----------------------------------------------------
        .equiv C0EN,    0x0000
        .equiv C1EN,    0x0001
        .equiv SHREN,   0x0007

        .equiv CLKDIV0, 0x0008
        .equiv CLKDIV1, 0x0009
        .equiv CLKDIV2, 0x000A
        .equiv CLKDIV3, 0x000B
        .equiv CLKDIV4, 0x000C
        .equiv CLKDIV5, 0x000D
        .equiv CLKSEL0, 0x000E
        .equiv CLKSEL1, 0x000F


;----- ADCON4L Bits -----------------------------------------------------
        .equiv SAMC0EN, 0x0000
        .equiv SAMC1EN, 0x0001
        .equiv SYNCTRG0, 0x0008
        .equiv SYNCTRG1, 0x0009


;----- ADCON4H Bits -----------------------------------------------------
        .equiv C0CHS0,  0x0000
        .equiv C0CHS1,  0x0001
        .equiv C1CHS0,  0x0002
        .equiv C1CHS1,  0x0003


;----- ADMOD0L Bits -----------------------------------------------------
        .equiv SIGN0,   0x0000
        .equiv DIFF0,   0x0001
        .equiv SIGN1,   0x0002
        .equiv DIFF1,   0x0003
        .equiv SIGN2,   0x0004
        .equiv DIFF2,   0x0005
        .equiv SIGN3,   0x0006
        .equiv DIFF3,   0x0007
        .equiv SIGN4,   0x0008
        .equiv DIFF4,   0x0009
        .equiv SIGN5,   0x000A
        .equiv DIFF5,   0x000B
        .equiv SIGN6,   0x000C
        .equiv DIFF6,   0x000D
        .equiv SIGN7,   0x000E
        .equiv DIFF7,   0x000F


;----- ADMOD0H Bits -----------------------------------------------------
        .equiv SIGN8,   0x0000
        .equiv DIFF8,   0x0001
        .equiv SIGN9,   0x0002
        .equiv DIFF9,   0x0003
        .equiv SIGN10,  0x0004
        .equiv DIFF10,  0x0005
        .equiv SIGN11,  0x0006
        .equiv DIFF11,  0x0007
        .equiv SIGN12,  0x0008
        .equiv DIFF12,  0x0009
        .equiv SIGN13,  0x000A
        .equiv DIFF13,  0x000B
        .equiv SIGN14,  0x000C
        .equiv DIFF14,  0x000D


;----- ADCIE1L Bits -----------------------------------------------------
        .equiv CIE0,    0x0000
        .equiv CIE1,    0x0001
        .equiv CIE2,    0x0002
        .equiv CIE3,    0x0003
        .equiv CIE4,    0x0004
        .equiv CIE5,    0x0005
        .equiv CIE6,    0x0006
        .equiv CIE7,    0x0007
        .equiv CIE8,    0x0008
        .equiv CIE9,    0x0009
        .equiv CIE10,   0x000A
        .equiv CIE11,   0x000B
        .equiv CIE12,   0x000C
        .equiv CIE13,   0x000D
        .equiv CIE14,   0x000E


;----- ADCSS1L Bits -----------------------------------------------------
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


;----- ADCMP0ENL Bits -----------------------------------------------------
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


;----- ADCMP1ENL Bits -----------------------------------------------------
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


;----- ADFL0CON Bits -----------------------------------------------------
        .equiv RDY,     0x0008
        .equiv CIE_ADFL0CON, 0x0009
        .equiv FLEN,    0x000F

        .equiv FLCHSEL0, 0x0000
        .equiv FLCHSEL1, 0x0001
        .equiv FLCHSEL2, 0x0002
        .equiv FLCHSEL3, 0x0003
        .equiv FLCHSEL4, 0x0004
        .equiv OVRSAM0, 0x000A
        .equiv OVRSAM1, 0x000B
        .equiv OVRSAM2, 0x000C


;----- ADTRIG0L Bits -----------------------------------------------------
        .equiv TRGSRC20, 0x0000
        .equiv TRGSRC21, 0x0001
        .equiv TRGSRC22, 0x0002
        .equiv TRGSRC23, 0x0003
        .equiv TRGSRC24, 0x0004
        .equiv TRGSRC10_ADTRIG0L, 0x0008
        .equiv TRGSRC11_ADTRIG0L, 0x0009
        .equiv TRGSRC12_ADTRIG0L, 0x000A
        .equiv TRGSRC13_ADTRIG0L, 0x000B
        .equiv TRGSRC14_ADTRIG0L, 0x000C


;----- ADTRIG0H Bits -----------------------------------------------------
        .equiv TRGSRC40, 0x0000
        .equiv TRGSRC41, 0x0001
        .equiv TRGSRC42, 0x0002
        .equiv TRGSRC43, 0x0003
        .equiv TRGSRC44, 0x0004
        .equiv TRGSRC30, 0x0008
        .equiv TRGSRC31, 0x0009
        .equiv TRGSRC32, 0x000A
        .equiv TRGSRC33, 0x000B
        .equiv TRGSRC34, 0x000C


;----- ADTRIG1L Bits -----------------------------------------------------
        .equiv TRGSRC60, 0x0000
        .equiv TRGSRC61, 0x0001
        .equiv TRGSRC62, 0x0002
        .equiv TRGSRC63, 0x0003
        .equiv TRGSRC64, 0x0004
        .equiv TRGSRC50, 0x0008
        .equiv TRGSRC51, 0x0009
        .equiv TRGSRC52, 0x000A
        .equiv TRGSRC53, 0x000B
        .equiv TRGSRC54, 0x000C


;----- ADTRIG1H Bits -----------------------------------------------------
        .equiv TRGSRC80, 0x0000
        .equiv TRGSRC81, 0x0001
        .equiv TRGSRC82, 0x0002
        .equiv TRGSRC83, 0x0003
        .equiv TRGSRC84, 0x0004
        .equiv TRGSRC70, 0x0008
        .equiv TRGSRC71, 0x0009
        .equiv TRGSRC72, 0x000A
        .equiv TRGSRC73, 0x000B
        .equiv TRGSRC74, 0x000C


;----- ADTRIG2L Bits -----------------------------------------------------
        .equiv TRGSRC100, 0x0000
        .equiv TRGSRC101, 0x0001
        .equiv TRGSRC102, 0x0002
        .equiv TRGSRC103, 0x0003
        .equiv TRGSRC104, 0x0004
        .equiv TRGSRC90, 0x0008
        .equiv TRGSRC91, 0x0009
        .equiv TRGSRC92, 0x000A
        .equiv TRGSRC93, 0x000B
        .equiv TRGSRC94, 0x000C


;----- ADTRIG2H Bits -----------------------------------------------------
        .equiv TRGSRC120, 0x0000
        .equiv TRGSRC121, 0x0001
        .equiv TRGSRC122, 0x0002
        .equiv TRGSRC123, 0x0003
        .equiv TRGSRC124, 0x0004
        .equiv TRGSRC110, 0x0008
        .equiv TRGSRC111, 0x0009
        .equiv TRGSRC112, 0x000A
        .equiv TRGSRC113, 0x000B
        .equiv TRGSRC114, 0x000C


;----- ADTRIG3L Bits -----------------------------------------------------
        .equiv TRGSRC140, 0x0000
        .equiv TRGSRC141, 0x0001
        .equiv TRGSRC142, 0x0002
        .equiv TRGSRC143, 0x0003
        .equiv TRGSRC144, 0x0004
        .equiv TRGSRC130, 0x0008
        .equiv TRGSRC131, 0x0009
        .equiv TRGSRC132, 0x000A
        .equiv TRGSRC133, 0x000B
        .equiv TRGSRC134, 0x000C


;----- ADTRIG3H Bits -----------------------------------------------------
        .equiv TRGSRC160, 0x0000
        .equiv TRGSRC161, 0x0001
        .equiv TRGSRC162, 0x0002
        .equiv TRGSRC163, 0x0003
        .equiv TRGSRC164, 0x0004


;----- ADCMP0CON Bits -----------------------------------------------------
        .equiv LOLO,    0x0000
        .equiv LOHI,    0x0001
        .equiv HILO,    0x0002
        .equiv HIHI,    0x0003
        .equiv BTWN,    0x0004
        .equiv STAT,    0x0005
        .equiv CIE_ADCMP0CON, 0x0006
        .equiv CMPEN,   0x0007

        .equiv CHNL0,   0x0008
        .equiv CHNL1,   0x0009
        .equiv CHNL2,   0x000A
        .equiv CHNL3,   0x000B
        .equiv CHNL4,   0x000C


;----- ADCMP1CON Bits -----------------------------------------------------
       ;.equiv LOLO,    0x0000
       ;.equiv LOHI,    0x0001
       ;.equiv HILO,    0x0002
       ;.equiv HIHI,    0x0003
       ;.equiv BTWN,    0x0004
       ;.equiv STAT,    0x0005
        .equiv CIE_ADCMP1CON, 0x0006
       ;.equiv CMPEN,   0x0007

       ;.equiv CHNL0,   0x0008
       ;.equiv CHNL1,   0x0009
       ;.equiv CHNL2,   0x000A
       ;.equiv CHNL3,   0x000B
       ;.equiv CHNL4,   0x000C


;----- ADBASE Bits -----------------------------------------------------
        .equiv CHOFFSET0, 0x0000
        .equiv CHOFFSET1, 0x0001
        .equiv CHOFFSET2, 0x0002
        .equiv CHOFFSET3, 0x0003
        .equiv CHOFFSET4, 0x0004
        .equiv CHOFFSET5, 0x0005
        .equiv CHOFFSET6, 0x0006
        .equiv CHOFFSET7, 0x0007
        .equiv CHOFFSET8, 0x0008
        .equiv CHOFFSET9, 0x0009
        .equiv CHOFFSET10, 0x000A
        .equiv CHOFFSET11, 0x000B
        .equiv CHOFFSET12, 0x000C
        .equiv CHOFFSET13, 0x000D
        .equiv CHOFFSET14, 0x000E
        .equiv CHOFFSET15, 0x000F


;----- ADLVLTRGL Bits -----------------------------------------------------
        .equiv LVLEN0,  0x0000
        .equiv LVLEN1,  0x0001
        .equiv LVLEN2,  0x0002
        .equiv LVLEN3,  0x0003
        .equiv LVLEN4,  0x0004
        .equiv LVLEN5,  0x0005
        .equiv LVLEN6,  0x0006
        .equiv LVLEN7,  0x0007
        .equiv LVLEN8,  0x0008
        .equiv LVLEN9,  0x0009
        .equiv LVLEN10, 0x000A
        .equiv LVLEN11, 0x000B
        .equiv LVLEN12, 0x000C
        .equiv LVLEN13, 0x000D
        .equiv LVLEN14, 0x000E


;----- ADCORE0L Bits -----------------------------------------------------
        .equiv SAMC0,   0x0000
        .equiv SAMC1,   0x0001
        .equiv SAMC2,   0x0002
        .equiv SAMC3,   0x0003
        .equiv SAMC4,   0x0004
        .equiv SAMC5,   0x0005
        .equiv SAMC6,   0x0006
        .equiv SAMC7,   0x0007
        .equiv SAMC8,   0x0008
        .equiv SAMC9,   0x0009


;----- ADCORE0H Bits -----------------------------------------------------
        .equiv ADCS0,   0x0000
        .equiv ADCS1,   0x0001
        .equiv ADCS2,   0x0002
        .equiv ADCS3,   0x0003
        .equiv ADCS4,   0x0004
        .equiv ADCS5,   0x0005
        .equiv ADCS6,   0x0006
        .equiv RES0,    0x0008
        .equiv RES1,    0x0009
        .equiv EISEL0,  0x000A
        .equiv EISEL1,  0x000B
        .equiv EISEL2,  0x000C


;----- ADCORE1L Bits -----------------------------------------------------
       ;.equiv SAMC0,   0x0000
       ;.equiv SAMC1,   0x0001
       ;.equiv SAMC2,   0x0002
       ;.equiv SAMC3,   0x0003
       ;.equiv SAMC4,   0x0004
       ;.equiv SAMC5,   0x0005
       ;.equiv SAMC6,   0x0006
       ;.equiv SAMC7,   0x0007
       ;.equiv SAMC8,   0x0008
       ;.equiv SAMC9,   0x0009


;----- ADCORE1H Bits -----------------------------------------------------
       ;.equiv ADCS0,   0x0000
       ;.equiv ADCS1,   0x0001
       ;.equiv ADCS2,   0x0002
       ;.equiv ADCS3,   0x0003
       ;.equiv ADCS4,   0x0004
       ;.equiv ADCS5,   0x0005
       ;.equiv ADCS6,   0x0006
       ;.equiv RES0,    0x0008
       ;.equiv RES1,    0x0009
       ;.equiv EISEL0,  0x000A
       ;.equiv EISEL1,  0x000B
       ;.equiv EISEL2,  0x000C


;----- ADEICONL Bits -----------------------------------------------------
        .equiv C0EIF,   0x0000
        .equiv C1EIF,   0x0001
        .equiv SHREIF,  0x0007
        .equiv C0EIEN,  0x0008
        .equiv C1EIEN,  0x0009
        .equiv SHREIEN, 0x000F


;----- ADCON5L Bits -----------------------------------------------------
        .equiv C0PWR,   0x0000
        .equiv C1PWR,   0x0001
        .equiv SHRPWR,  0x0007
        .equiv C0RDY,   0x0008
        .equiv C1RDY,   0x0009
        .equiv SHRRDY,  0x000F


;----- ADCON5H Bits -----------------------------------------------------
        .equiv C0C1E,   0x0000
        .equiv C1C1E,   0x0001
        .equiv C2C1E,   0x0002
        .equiv C3C1E,   0x0003
        .equiv C4C1E,   0x0004
        .equiv C5C1E,   0x0005
        .equiv C6C1E,   0x0006
        .equiv SHRCIE,  0x0007


;----- ADCAL0L Bits -----------------------------------------------------
        .equiv CAL0RUN, 0x0000
        .equiv CAL0EN,  0x0001
        .equiv CAL0DIFF, 0x0002
        .equiv CAL0SKIP, 0x0003
        .equiv CAL0RDY, 0x0007
        .equiv CAL1RUN, 0x0008
        .equiv CAL1EN,  0x0009
        .equiv CAL1DIFF, 0x000A
        .equiv CAL1SKIP, 0x000B
        .equiv CAL1RDY, 0x000F


;----- ADCAL1H Bits -----------------------------------------------------
        .equiv CSHRRUN, 0x0008
        .equiv CSHREN,  0x0009
        .equiv CSHRDIFF, 0x000A
        .equiv CSHRSKIP, 0x000B
        .equiv CSHRRDY, 0x000F


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
        .equiv CMPPOL,  0x0001
        .equiv ALTINP,  0x0002
        .equiv CMPSTAT, 0x0003
        .equiv HYSPOL,  0x0004
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
       ;.equiv CMPPOL,  0x0001
       ;.equiv ALTINP,  0x0002
       ;.equiv CMPSTAT, 0x0003
       ;.equiv HYSPOL,  0x0004
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
        .equiv INT4RR0, 0x0000
        .equiv INT4RR1, 0x0001
        .equiv INT4RR2, 0x0002
        .equiv INT4RR3, 0x0003
        .equiv INT4RR4, 0x0004
        .equiv INT4RR5, 0x0005
        .equiv INT4RR6, 0x0006
        .equiv INT4RR7, 0x0007
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
        .equiv SBOREN,  0x000D
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
        .equiv U1MD,    0x0005
        .equiv I2C1MD,  0x0007
        .equiv PWMMD,   0x0009
        .equiv T1MD,    0x000B
        .equiv T2MD,    0x000C
        .equiv T3MD,    0x000D


;----- PMD2 Bits -----------------------------------------------------
        .equiv OC1MD,   0x0000
        .equiv IC1MD,   0x0008


;----- PMD3 Bits -----------------------------------------------------
        .equiv CMPMD,   0x000A


;----- PMD6 Bits -----------------------------------------------------
        .equiv PWM1MD,  0x0008
        .equiv PWM2MD,  0x0009
        .equiv PWM3MD,  0x000A


;----- PMD7 Bits -----------------------------------------------------
        .equiv PGA1MD,  0x0001
        .equiv CMP1MD,  0x0008
        .equiv CMP2MD,  0x0009


;----- PMD8 Bits -----------------------------------------------------
        .equiv PGA2MD,  0x000A


;----- IFS0 Bits -----------------------------------------------------
        .equiv INT0IF,  0x0000
        .equiv IC1IF,   0x0001
        .equiv OC1IF,   0x0002
        .equiv T1IF,    0x0003
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
        .equiv INT2IF,  0x000D


;----- IFS3 Bits -----------------------------------------------------
        .equiv INT4IF,  0x0006
        .equiv PSEMIF,  0x0009


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1EIF,   0x0001
        .equiv PSESIF,  0x0009


;----- IFS5 Bits -----------------------------------------------------
        .equiv PWM1IF,  0x000E
        .equiv PWM2IF,  0x000F


;----- IFS6 Bits -----------------------------------------------------
        .equiv PWM3IF,  0x0000
        .equiv AC2IF,   0x0007
        .equiv ADCAN0IF, 0x000E
        .equiv ADCAN1IF, 0x000F


;----- IFS7 Bits -----------------------------------------------------
        .equiv ADCAN2IF, 0x0000
        .equiv ADCAN3IF, 0x0001
        .equiv ADCAN4IF, 0x0002
        .equiv ADCAN5IF, 0x0003
        .equiv ADCAN6IF, 0x0004
        .equiv ADCAN7IF, 0x0005


;----- IFS9 Bits -----------------------------------------------------
        .equiv ADCAN8IF, 0x0007
        .equiv ADCAN9IF, 0x0008
        .equiv ADCAN10IF, 0x0009
        .equiv ADCAN11IF, 0x000A
        .equiv ADCAN12IF, 0x000B
        .equiv ADCAN13IF, 0x000C
        .equiv ADCAN14IF, 0x000D


;----- IFS10 Bits -----------------------------------------------------
        .equiv I2C1BCIF, 0x000D


;----- IFS11 Bits -----------------------------------------------------
        .equiv ADCFLTIF, 0x0000
        .equiv ADCMP1IF, 0x0001
        .equiv ADCMP2IF, 0x0002
        .equiv ADCFLTR1IF, 0x0003
        .equiv ADCC0EIF, 0x000B
        .equiv ADCC1EIF, 0x000C


;----- IEC0 Bits -----------------------------------------------------
        .equiv INT0IE,  0x0000
        .equiv IC1IE,   0x0001
        .equiv OC1IE,   0x0002
        .equiv T1IE,    0x0003
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
        .equiv INT2IE,  0x000D


;----- IEC3 Bits -----------------------------------------------------
        .equiv INT4IE,  0x0006
        .equiv PSEMIE,  0x0009


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1EIE,   0x0001
        .equiv PSESIE,  0x0009


;----- IEC5 Bits -----------------------------------------------------
        .equiv PWM1IE,  0x000E
        .equiv PWM2IE,  0x000F


;----- IEC6 Bits -----------------------------------------------------
        .equiv PWM3IE,  0x0000
        .equiv AC2IE,   0x0007
        .equiv ADCAN0IE, 0x000E
        .equiv ADCAN1IE, 0x000F


;----- IEC7 Bits -----------------------------------------------------
        .equiv ADCAN2IE, 0x0000
        .equiv ADCAN3IE, 0x0001
        .equiv ADCAN4IE, 0x0002
        .equiv ADCAN5IE, 0x0003
        .equiv ADCAN6IE, 0x0004
        .equiv ADCAN7IE, 0x0005


;----- IEC9 Bits -----------------------------------------------------
        .equiv ADCAN8IE, 0x0007
        .equiv ADCAN9IE, 0x0008
        .equiv ADCAN10IE, 0x0009
        .equiv ADCAN11IE, 0x000A
        .equiv ADCAN12IE, 0x000B
        .equiv ADCAN13IE, 0x000C
        .equiv ADCAN14IE, 0x000D


;----- IEC10 Bits -----------------------------------------------------
        .equiv I2C1BCIE, 0x000D


;----- IEC11 Bits -----------------------------------------------------
        .equiv ADCFLTIE, 0x0000
        .equiv ADCMP1IE, 0x0001
        .equiv ADCMP2IE, 0x0002
        .equiv ADCFLTR1IE, 0x0003
        .equiv ADCC0EIE, 0x000B
        .equiv ADCC1EIE, 0x000C


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


;----- IPC7 Bits -----------------------------------------------------
        .equiv INT2IP0, 0x0004
        .equiv INT2IP1, 0x0005
        .equiv INT2IP2, 0x0006


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


;----- IPC25 Bits -----------------------------------------------------
        .equiv AC2IP0,  0x000C
        .equiv AC2IP1,  0x000D
        .equiv AC2IP2,  0x000E


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


;----- IPC43 Bits -----------------------------------------------------
        .equiv I2C1BCIP0, 0x0004
        .equiv I2C1BCIP1, 0x0005
        .equiv I2C1BCIP2, 0x0006


;----- IPC44 Bits -----------------------------------------------------
        .equiv ADCFLTIP0, 0x0000
        .equiv ADCFLTIP1, 0x0001
        .equiv ADCFLTIP2, 0x0002
        .equiv ADCMP1IP0, 0x0004
        .equiv ADCMP1IP1, 0x0005
        .equiv ADCMP1IP2, 0x0006
        .equiv ADCMP2IP0, 0x0008
        .equiv ADCMP2IP1, 0x0009
        .equiv ADCMP2IP2, 0x000A
        .equiv ADCFLTR1IP0, 0x000C
        .equiv ADCFLTR1IP1, 0x000D
        .equiv ADCFLTR1IP2, 0x000E


;----- IPC46 Bits -----------------------------------------------------
        .equiv ADCC0EIP0, 0x000C
        .equiv ADCC0EIP1, 0x000D
        .equiv ADCC0EIP2, 0x000E


;----- IPC47 Bits -----------------------------------------------------
        .equiv ADCC1EIP0, 0x0000
        .equiv ADCC1EIP1, 0x0001
        .equiv ADCC1EIP2, 0x0002


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
        .equiv ANSB4,   0x0004
        .equiv ANSB5,   0x0005
        .equiv ANSB6,   0x0006
        .equiv ANSB7,   0x0007
        .equiv ANSB9,   0x0009
        .equiv ANSB10,  0x000A




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
;     BSS_HIGH_BOOT        High Security
;     BSS_STNDRD           Standard Security
;     BSS_STNDRD_BOOT      Standard Security
;     BSS_DISABLED         No Protection (other than BWRP)
;     BSS_NO_BOOT          No Protection (other than BWRP)
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
;     GSS_HIGH_GENERAL     High Security
;     GSS_STNDRD           Standard Security
;     GSS_STNDRD_GENERAL   Standard Security
;     GSS_DISABLED         No Protection (other than GWRP)
;     GSS_NO_GENERAL       No Protection (other than GWRP)
;
;   Configuration Segment Write-Protect bit:
;     CWRP_ON              Configuration Segment is write protected
;     CWRP_OFF             Configuration Segment may be written
;
;   Configuration Segment Code-Protect Level bits:
;     CSS_HIGH             High Security
;     CSS_HIGH_CONFIG      High Security
;     CSS_ENHNCD           Enhanced Security
;     CSS_ENHNCD_CONFIG    Enhanced Security
;     CSS_STNDRD           Standard Security
;     CSS_STNDRD_CONFIG    Standard Security
;     CSS_DISABLED         No Protection (other than CWRP)
;     CSS_NO_CONFIG        No Protection (other than CWRP)
;
;   Alternate Interrupt Vector Table bit:
;     AIVTDIS_ON           Enabled AIVT
;     AIVTDIS_OFF          Disabled AIVT
;
        .equiv BWRP_ON,         0xFFFE ; Boot Segment is write protected
        .equiv BWRP_OFF,        0xFFFF ; Boot Segment may be written

        .equiv BSS_HIGH,        0xFFF9 ; High Security
        .equiv BSS_HIGH_BOOT,   0xFFF9 ; High Security
        .equiv BSS_STNDRD,      0xFFFD ; Standard Security
        .equiv BSS_STNDRD_BOOT, 0xFFFD ; Standard Security
        .equiv BSS_DISABLED,    0xFFFF ; No Protection (other than BWRP)
        .equiv BSS_NO_BOOT,     0xFFFF ; No Protection (other than BWRP)

        .equiv BSS2_ON,         0xFFF7 ; Boot Segment size determined by FBSLIM
        .equiv BSS2_OFF,        0xFFFF ; No Boot Segment

        .equiv GWRP_ON,         0xFFDF ; General Segment is write protected
        .equiv GWRP_OFF,        0xFFFF ; General Segment may be written

        .equiv GSS_HIGH,        0xFF3F ; High Security
        .equiv GSS_HIGH_GENERAL, 0xFF3F ; High Security
        .equiv GSS_STNDRD,      0xFFBF ; Standard Security
        .equiv GSS_STNDRD_GENERAL, 0xFFBF ; Standard Security
        .equiv GSS_DISABLED,    0xFFFF ; No Protection (other than GWRP)
        .equiv GSS_NO_GENERAL,  0xFFFF ; No Protection (other than GWRP)

        .equiv CWRP_ON,         0xFEFF ; Configuration Segment is write protected
        .equiv CWRP_OFF,        0xFFFF ; Configuration Segment may be written

        .equiv CSS_HIGH,        0xF1FF ; High Security
        .equiv CSS_HIGH_CONFIG, 0xF1FF ; High Security
        .equiv CSS_ENHNCD,      0xF9FF ; Enhanced Security
        .equiv CSS_ENHNCD_CONFIG, 0xF9FF ; Enhanced Security
        .equiv CSS_STNDRD,      0xFDFF ; Standard Security
        .equiv CSS_STNDRD_CONFIG, 0xFDFF ; Standard Security
        .equiv CSS_DISABLED,    0xFFFF ; No Protection (other than CWRP)
        .equiv CSS_NO_CONFIG,   0xFFFF ; No Protection (other than CWRP)

        .equiv AIVTDIS_ON,      0x7FFF ; Enabled AIVT
        .equiv AIVTDIS_OFF,     0xFFFF ; Disabled AIVT


;----- FBSLIM (0x5790) --------------------------------------------------
;
;  The following settings are available for FBSLIM:
;
;   Boot Segment Flash Page Address Limit bits:
;


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
;   Peripheral pin select configuration:
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
        .equiv ICS_NONE,        0xFFFC ; Reserved, do not use
        .equiv ICS_PGD3,        0xFFFD ; Communicate on PGEC3 and PGED3
        .equiv ICS_PGD2,        0xFFFE ; Communicate on PGEC2 and PGED2
        .equiv ICS_PGD1,        0xFFFF ; Communicate on PGEC1 and PGED1

        .equiv JTAGEN_OFF,      0xFFDF ; JTAG is disabled
        .equiv JTAGEN_ON,       0xFFFF ; JTAG is enabled


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
        .equiv PWMLOCK_OFF,     0xFFFE ; PWM registers may be written without key sequence
        .equiv PWMLOCK_ON,      0xFFFF ; Certain PWM registers may only be written after key sequency

        .equiv ALTI2C1_ON,      0xFFF7 ; I2C1 mapped to ASDA1/ASCL1 pins
        .equiv ALTI2C1_OFF,     0xFFFF ; I2C1 mapped to SDA1/SCL1 pins


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


.LIST
