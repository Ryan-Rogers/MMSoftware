/*-------------------------------------------------------------------------
 * MPLAB-Cxx  dsPIC33EP32GS202 processor header
 *
 * (c) Copyright 1999-2014 Microchip Technology, All rights reserved
 * Part support version v1.22.A(19-Aug-2014)
 *-------------------------------------------------------------------------*/

#ifndef __dsPIC33EP32GS202__
#error "Include file does not match processor setting"
#endif

#ifndef __33EP32GS202_H
#define __33EP32GS202_H

#define WREG0 WREG0
extern volatile unsigned int  WREG0 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG1 WREG1
extern volatile unsigned int  WREG1 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG2 WREG2
extern volatile unsigned int  WREG2 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG3 WREG3
extern volatile unsigned int  WREG3 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG4 WREG4
extern volatile unsigned int  WREG4 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG5 WREG5
extern volatile unsigned int  WREG5 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG6 WREG6
extern volatile unsigned int  WREG6 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG7 WREG7
extern volatile unsigned int  WREG7 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG8 WREG8
extern volatile unsigned int  WREG8 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG9 WREG9
extern volatile unsigned int  WREG9 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG10 WREG10
extern volatile unsigned int  WREG10 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG11 WREG11
extern volatile unsigned int  WREG11 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG12 WREG12
extern volatile unsigned int  WREG12 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG13 WREG13
extern volatile unsigned int  WREG13 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG14 WREG14
extern volatile unsigned int  WREG14 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define WREG15 WREG15
extern volatile unsigned int  WREG15 __attribute__((__sfr__,__deprecated__,__unsafe__));
#define SPLIM SPLIM
extern volatile unsigned int  SPLIM __attribute__((__sfr__));
#define ACCAL ACCAL
extern volatile unsigned int  ACCAL __attribute__((__sfr__));
#define ACCAH ACCAH
extern volatile unsigned int  ACCAH __attribute__((__sfr__));
#define ACCAU ACCAU
extern volatile unsigned char ACCAU __attribute__((__sfr__));
#define ACCBL ACCBL
extern volatile unsigned int  ACCBL __attribute__((__sfr__));
#define ACCBH ACCBH
extern volatile unsigned int  ACCBH __attribute__((__sfr__));
#define ACCBU ACCBU
extern volatile unsigned char ACCBU __attribute__((__sfr__));
#define PCL PCL
extern volatile unsigned int  PCL __attribute__((__sfr__));
#define PCH PCH
extern volatile unsigned char PCH __attribute__((__sfr__));
#define DSRPAG DSRPAG
extern volatile unsigned int  DSRPAG __attribute__((__sfr__));
typedef struct tagDSRPAGBITS {
  unsigned DSRPAG:10;
} DSRPAGBITS;
extern volatile DSRPAGBITS DSRPAGbits __attribute__((__sfr__));

#define DSWPAG DSWPAG
extern volatile unsigned int  DSWPAG __attribute__((__sfr__));
typedef struct tagDSWPAGBITS {
  unsigned DSWPAG:9;
} DSWPAGBITS;
extern volatile DSWPAGBITS DSWPAGbits __attribute__((__sfr__));

#define RCOUNT RCOUNT
extern volatile unsigned int  RCOUNT __attribute__((__sfr__));
#define DCOUNT DCOUNT
extern volatile unsigned int  DCOUNT __attribute__((__sfr__));
#define DOSTARTL DOSTARTL
extern volatile unsigned int  DOSTARTL __attribute__((__sfr__));
#define DOSTARTH DOSTARTH
extern volatile unsigned int  DOSTARTH __attribute__((__sfr__));
#define DOENDL DOENDL
extern volatile unsigned int  DOENDL __attribute__((__sfr__));
#define DOENDH DOENDH
extern volatile unsigned int  DOENDH __attribute__((__sfr__));
#define SR SR
extern volatile unsigned int  SR __attribute__((__sfr__));
__extension__ typedef struct tagSRBITS {
  union {
    struct {
      unsigned C:1;
      unsigned Z:1;
      unsigned OV:1;
      unsigned N:1;
      unsigned RA:1;
      unsigned IPL:3;
      unsigned DC:1;
      unsigned DA:1;
      unsigned SAB:1;
      unsigned OAB:1;
      unsigned SB:1;
      unsigned SA:1;
      unsigned OB:1;
      unsigned OA:1;
    };
    struct {
      unsigned :5;
      unsigned IPL0:1;
      unsigned IPL1:1;
      unsigned IPL2:1;
    };
  };
} SRBITS;
extern volatile SRBITS SRbits __attribute__((__sfr__));

#define CORCON CORCON
extern volatile unsigned int  CORCON __attribute__((__sfr__));
__extension__ typedef struct tagCORCONBITS {
  union {
    struct {
      unsigned IF:1;
      unsigned RND:1;
      unsigned SFA:1;
      unsigned IPL3:1;
      unsigned ACCSAT:1;
      unsigned SATDW:1;
      unsigned SATB:1;
      unsigned SATA:1;
      unsigned DL:3;
      unsigned EDT:1;
      unsigned US:2;
      unsigned :1;
      unsigned VAR:1;
    };
    struct {
      unsigned :8;
      unsigned DL0:1;
      unsigned DL1:1;
      unsigned DL2:1;
      unsigned :1;
      unsigned US0:1;
      unsigned US1:1;
    };
  };
} CORCONBITS;
extern volatile CORCONBITS CORCONbits __attribute__((__sfr__));

#define MODCON MODCON
extern volatile unsigned int  MODCON __attribute__((__sfr__));
__extension__ typedef struct tagMODCONBITS {
  union {
    struct {
      unsigned XWM:4;
      unsigned YWM:4;
      unsigned BWM:4;
      unsigned :2;
      unsigned YMODEN:1;
      unsigned XMODEN:1;
    };
    struct {
      unsigned XWM0:1;
      unsigned XWM1:1;
      unsigned XWM2:1;
      unsigned XWM3:1;
      unsigned YWM0:1;
      unsigned YWM1:1;
      unsigned YWM2:1;
      unsigned YWM3:1;
      unsigned BWM0:1;
      unsigned BWM1:1;
      unsigned BWM2:1;
      unsigned BWM3:1;
    };
  };
} MODCONBITS;
extern volatile MODCONBITS MODCONbits __attribute__((__sfr__));

#define XMODSRT XMODSRT
extern volatile unsigned int  XMODSRT __attribute__((__sfr__));
#define XMODEND XMODEND
extern volatile unsigned int  XMODEND __attribute__((__sfr__));
#define YMODSRT YMODSRT
extern volatile unsigned int  YMODSRT __attribute__((__sfr__));
#define YMODEND YMODEND
extern volatile unsigned int  YMODEND __attribute__((__sfr__));
#define XBREV XBREV
extern volatile unsigned int  XBREV __attribute__((__sfr__));
__extension__ typedef struct tagXBREVBITS {
  union {
    struct {
      unsigned XB:15;
      unsigned BREN:1;
    };
    struct {
      unsigned XB0:1;
      unsigned XB1:1;
      unsigned XB2:1;
      unsigned XB3:1;
      unsigned XB4:1;
      unsigned XB5:1;
      unsigned XB6:1;
      unsigned XB7:1;
      unsigned XB8:1;
      unsigned XB9:1;
      unsigned XB10:1;
      unsigned XB11:1;
      unsigned XB12:1;
      unsigned XB13:1;
      unsigned XB14:1;
    };
  };
} XBREVBITS;
extern volatile XBREVBITS XBREVbits __attribute__((__sfr__));

#define DISICNT DISICNT
extern volatile unsigned int  DISICNT __attribute__((__sfr__));
#define TBLPAG TBLPAG
extern volatile unsigned int  TBLPAG __attribute__((__sfr__));
typedef struct tagTBLPAGBITS {
  unsigned TBLPAG:8;
} TBLPAGBITS;
extern volatile TBLPAGBITS TBLPAGbits __attribute__((__sfr__));

#define CTXTSTAT CTXTSTAT
extern volatile unsigned int  CTXTSTAT __attribute__((__sfr__));
typedef struct tagCTXTSTATBITS {
  unsigned MCTXI:3;
  unsigned :5;
  unsigned CCTXI:3;
} CTXTSTATBITS;
extern volatile CTXTSTATBITS CTXTSTATbits __attribute__((__sfr__));

#define TMR1 TMR1
extern volatile unsigned int  TMR1 __attribute__((__sfr__));
#define PR1 PR1
extern volatile unsigned int  PR1 __attribute__((__sfr__));
#define T1CON T1CON
extern volatile unsigned int  T1CON __attribute__((__sfr__));
__extension__ typedef struct tagT1CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned TCS:1;
      unsigned TSYNC:1;
      unsigned :1;
      unsigned TCKPS:2;
      unsigned TGATE:1;
      unsigned :6;
      unsigned TSIDL:1;
      unsigned :1;
      unsigned TON:1;
    };
    struct {
      unsigned :4;
      unsigned TCKPS0:1;
      unsigned TCKPS1:1;
    };
  };
} T1CONBITS;
extern volatile T1CONBITS T1CONbits __attribute__((__sfr__));

#define TMR2 TMR2
extern volatile unsigned int  TMR2 __attribute__((__sfr__));
#define TMR3HLD TMR3HLD
extern volatile unsigned int  TMR3HLD __attribute__((__sfr__));
#define TMR3 TMR3
extern volatile unsigned int  TMR3 __attribute__((__sfr__));
#define PR2 PR2
extern volatile unsigned int  PR2 __attribute__((__sfr__));
#define PR3 PR3
extern volatile unsigned int  PR3 __attribute__((__sfr__));
#define T2CON T2CON
extern volatile unsigned int  T2CON __attribute__((__sfr__));
__extension__ typedef struct tagT2CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned TCS:1;
      unsigned :1;
      unsigned T32:1;
      unsigned TCKPS:2;
      unsigned TGATE:1;
      unsigned :6;
      unsigned TSIDL:1;
      unsigned :1;
      unsigned TON:1;
    };
    struct {
      unsigned :4;
      unsigned TCKPS0:1;
      unsigned TCKPS1:1;
    };
  };
} T2CONBITS;
extern volatile T2CONBITS T2CONbits __attribute__((__sfr__));

#define T3CON T3CON
extern volatile unsigned int  T3CON __attribute__((__sfr__));
__extension__ typedef struct tagT3CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned TCS:1;
      unsigned :2;
      unsigned TCKPS:2;
      unsigned TGATE:1;
      unsigned :6;
      unsigned TSIDL:1;
      unsigned :1;
      unsigned TON:1;
    };
    struct {
      unsigned :4;
      unsigned TCKPS0:1;
      unsigned TCKPS1:1;
    };
  };
} T3CONBITS;
extern volatile T3CONBITS T3CONbits __attribute__((__sfr__));

#define IC1CON1 IC1CON1
extern volatile unsigned int  IC1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC1CON1BITS {
  union {
    struct {
      unsigned ICM:3;
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICI:2;
      unsigned :3;
      unsigned ICTSEL:3;
      unsigned ICSIDL:1;
    };
    struct {
      unsigned ICM0:1;
      unsigned ICM1:1;
      unsigned ICM2:1;
      unsigned :2;
      unsigned ICI0:1;
      unsigned ICI1:1;
      unsigned :3;
      unsigned ICTSEL0:1;
      unsigned ICTSEL1:1;
      unsigned ICTSEL2:1;
    };
  };
} IC1CON1BITS;
extern volatile IC1CON1BITS IC1CON1bits __attribute__((__sfr__));

#define IC1CON2 IC1CON2
extern volatile unsigned int  IC1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC1CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned :1;
      unsigned TRIGSTAT:1;
      unsigned ICTRIG:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
    };
  };
} IC1CON2BITS;
extern volatile IC1CON2BITS IC1CON2bits __attribute__((__sfr__));


/* Generic structure of entire SFR area for Input Capture modules */
typedef struct tagIC {
        unsigned int icxbuf;
        unsigned int icxcon;
} IC, *PIC;

/* SFR blocks for Input Capture modules */
#define IC1 ACC1
extern volatile IC IC1 __attribute__((__sfr__));
#define IC2 ACC2
extern volatile IC IC2 __attribute__((__sfr__));
#define IC3 ACC3
extern volatile IC IC3 __attribute__((__sfr__));
#define IC4 ACC4
extern volatile IC IC4 __attribute__((__sfr__));
#define IC5 ACC5
extern volatile IC IC5 __attribute__((__sfr__));
#define IC6 ACC6
extern volatile IC IC6 __attribute__((__sfr__));
#define IC7 ACC7
extern volatile IC IC7 __attribute__((__sfr__));
#define IC8 ACC8
extern volatile IC IC8 __attribute__((__sfr__));

#define IC1BUF IC1BUF
extern volatile unsigned int  IC1BUF __attribute__((__sfr__));
#define IC1TMR IC1TMR
extern volatile unsigned int  IC1TMR __attribute__((__sfr__));
#define I2C1CON1 I2C1CON1
extern volatile unsigned int  I2C1CON1 __attribute__((__sfr__));
typedef struct tagI2C1CON1BITS {
  unsigned SEN:1;
  unsigned RSEN:1;
  unsigned PEN:1;
  unsigned RCEN:1;
  unsigned ACKEN:1;
  unsigned ACKDT:1;
  unsigned STREN:1;
  unsigned GCEN:1;
  unsigned SMEN:1;
  unsigned DISSLW:1;
  unsigned A10M:1;
  unsigned STRICT:1;
  unsigned SCLREL:1;
  unsigned I2CSIDL:1;
  unsigned :1;
  unsigned I2CEN:1;
} I2C1CON1BITS;
extern volatile I2C1CON1BITS I2C1CON1bits __attribute__((__sfr__));

#define I2C1CON2 I2C1CON2
extern volatile unsigned int  I2C1CON2 __attribute__((__sfr__));
typedef struct tagI2C1CON2BITS {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
} I2C1CON2BITS;
extern volatile I2C1CON2BITS I2C1CON2bits __attribute__((__sfr__));

#define I2C1STAT I2C1STAT
extern volatile unsigned int  I2C1STAT __attribute__((__sfr__));
typedef struct tagI2C1STATBITS {
  unsigned TBF:1;
  unsigned RBF:1;
  unsigned R_W:1;
  unsigned S:1;
  unsigned P:1;
  unsigned D_A:1;
  unsigned I2COV:1;
  unsigned IWCOL:1;
  unsigned ADD10:1;
  unsigned GCSTAT:1;
  unsigned BCL:1;
  unsigned :2;
  unsigned ACKTIM:1;
  unsigned TRSTAT:1;
  unsigned ACKSTAT:1;
} I2C1STATBITS;
extern volatile I2C1STATBITS I2C1STATbits __attribute__((__sfr__));

#define I2C1ADD I2C1ADD
extern volatile unsigned int  I2C1ADD __attribute__((__sfr__));
typedef struct tagI2C1ADDBITS {
  unsigned ADD:10;
} I2C1ADDBITS;
extern volatile I2C1ADDBITS I2C1ADDbits __attribute__((__sfr__));

#define I2C1MSK I2C1MSK
extern volatile unsigned int  I2C1MSK __attribute__((__sfr__));
__extension__ typedef struct tagI2C1MSKBITS {
  union {
    struct {
      unsigned AMSK:10;
    };
    struct {
      unsigned AMSK0:1;
      unsigned AMSK1:1;
      unsigned AMSK2:1;
      unsigned AMSK3:1;
      unsigned AMSK4:1;
      unsigned AMSK5:1;
      unsigned AMSK6:1;
      unsigned AMSK7:1;
      unsigned AMSK8:1;
      unsigned AMSK9:1;
    };
  };
} I2C1MSKBITS;
extern volatile I2C1MSKBITS I2C1MSKbits __attribute__((__sfr__));

#define I2C1BRG I2C1BRG
extern volatile unsigned int  I2C1BRG __attribute__((__sfr__));
#define I2C1TRN I2C1TRN
extern volatile unsigned int  I2C1TRN __attribute__((__sfr__));
typedef struct tagI2C1TRNBITS {
  unsigned I2CTXDATA:8;
} I2C1TRNBITS;
extern volatile I2C1TRNBITS I2C1TRNbits __attribute__((__sfr__));

#define I2C1RCV I2C1RCV
extern volatile unsigned int  I2C1RCV __attribute__((__sfr__));
typedef struct tagI2C1RCVBITS {
  unsigned I2CRXDATA:8;
} I2C1RCVBITS;
extern volatile I2C1RCVBITS I2C1RCVbits __attribute__((__sfr__));


/* Generic structure of entire SFR area for each UART module */
typedef struct tagUART {
        unsigned int uxmode;
        unsigned int uxsta;
        unsigned int uxtxreg;
        unsigned int uxrxreg;
        unsigned int uxbrg;
} UART, *PUART;

#define UxMODEBITS U1MODEBITS
#define UxSTABITS U1STABITS
#define UxTXREGBITS U1TXREGBITS
#define UxRXREGBITS U1RXREGBITS
#define UxBRGBITS U1BRGBITS

/* SFR blocks for each UART module */
#define UART1 UART1
extern volatile UART UART1 __attribute__((__sfr__));
#define UART2 UART2
extern volatile UART UART2 __attribute__((__sfr__));

#define U1MODE U1MODE
extern volatile unsigned int  U1MODE __attribute__((__sfr__));
__extension__ typedef struct tagU1MODEBITS {
  union {
    struct {
      unsigned STSEL:1;
      unsigned PDSEL:2;
      unsigned BRGH:1;
      unsigned URXINV:1;
      unsigned ABAUD:1;
      unsigned LPBACK:1;
      unsigned WAKE:1;
      unsigned UEN:2;
      unsigned :1;
      unsigned RTSMD:1;
      unsigned IREN:1;
      unsigned USIDL:1;
      unsigned :1;
      unsigned UARTEN:1;
    };
    struct {
      unsigned :1;
      unsigned PDSEL0:1;
      unsigned PDSEL1:1;
      unsigned :1;
      unsigned RXINV:1;
      unsigned :3;
      unsigned UEN0:1;
      unsigned UEN1:1;
    };
  };
} U1MODEBITS;
extern volatile U1MODEBITS U1MODEbits __attribute__((__sfr__));

#define U1STA U1STA
extern volatile unsigned int  U1STA __attribute__((__sfr__));
__extension__ typedef struct tagU1STABITS {
  union {
    struct {
      unsigned URXDA:1;
      unsigned OERR:1;
      unsigned FERR:1;
      unsigned PERR:1;
      unsigned RIDLE:1;
      unsigned ADDEN:1;
      unsigned URXISEL:2;
      unsigned TRMT:1;
      unsigned UTXBF:1;
      unsigned UTXEN:1;
      unsigned UTXBRK:1;
      unsigned :1;
      unsigned UTXISEL0:1;
      unsigned UTXINV:1;
      unsigned UTXISEL1:1;
    };
    struct {
      unsigned :6;
      unsigned URXISEL0:1;
      unsigned URXISEL1:1;
      unsigned :6;
      unsigned TXINV:1;
    };
  };
} U1STABITS;
extern volatile U1STABITS U1STAbits __attribute__((__sfr__));

#define U1TXREG U1TXREG
extern volatile unsigned int  U1TXREG __attribute__((__sfr__));
#define U1RXREG U1RXREG
extern volatile unsigned int  U1RXREG __attribute__((__sfr__));
#define U1BRG U1BRG
extern volatile unsigned int  U1BRG __attribute__((__sfr__));

/* Generic structure of entire SFR area for each SPI module */
typedef struct tagSPI {
        unsigned int spixstat;
        unsigned int spixcon1;
        unsigned int spixcon2;
        unsigned int unused;
        unsigned int spixbuf;
} SPI, *PSPI;

#define SPIxSTATBITS SPI1STATBITS
#define SPIxCONBITS SPI1CONBITS

/* SFR blocks for each SPI module */
#define SPI1 SPI1
extern volatile SPI SPI1 __attribute__((__sfr__));
#define SPI2 SPI2
extern volatile SPI SPI2 __attribute__((__sfr__));

#define SPI1STAT SPI1STAT
extern volatile unsigned int  SPI1STAT __attribute__((__sfr__));
__extension__ typedef struct tagSPI1STATBITS {
  union {
    struct {
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned SISEL:3;
      unsigned SRXMPT:1;
      unsigned SPIROV:1;
      unsigned SRMPT:1;
      unsigned SPIBEC:3;
      unsigned :2;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
    };
    struct {
      unsigned :2;
      unsigned SISEL0:1;
      unsigned SISEL1:1;
      unsigned SISEL2:1;
      unsigned :3;
      unsigned SPIBEC0:1;
      unsigned SPIBEC1:1;
      unsigned SPIBEC2:1;
    };
  };
} SPI1STATBITS;
extern volatile SPI1STATBITS SPI1STATbits __attribute__((__sfr__));

#define SPI1CON1 SPI1CON1
extern volatile unsigned int  SPI1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSPI1CON1BITS {
  union {
    struct {
      unsigned PPRE:2;
      unsigned SPRE:3;
      unsigned MSTEN:1;
      unsigned CKP:1;
      unsigned SSEN:1;
      unsigned CKE:1;
      unsigned SMP:1;
      unsigned MODE16:1;
      unsigned DISSDO:1;
      unsigned DISSCK:1;
    };
    struct {
      unsigned PPRE0:1;
      unsigned PPRE1:1;
      unsigned SPRE0:1;
      unsigned SPRE1:1;
      unsigned SPRE2:1;
    };
  };
} SPI1CON1BITS;
extern volatile SPI1CON1BITS SPI1CON1bits __attribute__((__sfr__));

#define SPI1CON2 SPI1CON2
extern volatile unsigned int  SPI1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagSPI1CON2BITS {
  union {
    struct {
      unsigned SPIBEN:1;
      unsigned SPIFE:1;
      unsigned :11;
      unsigned SPIFPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
    };
    struct {
      unsigned :1;
      unsigned FRMDLY:1;
      unsigned :11;
      unsigned FRMPOL:1;
    };
  };
} SPI1CON2BITS;
extern volatile SPI1CON2BITS SPI1CON2bits __attribute__((__sfr__));

#define SPI1BUF SPI1BUF
extern volatile unsigned int  SPI1BUF __attribute__((__sfr__));
#define ADCON1L ADCON1L
extern volatile unsigned int  ADCON1L __attribute__((__sfr__));
__extension__ typedef struct tagADCON1LBITS {
  union {
    struct {
      unsigned :4;
      unsigned BSHFT:3;
      unsigned :5;
      unsigned PUMPEN:1;
      unsigned ADSIDL:1;
      unsigned :1;
      unsigned ADON:1;
    };
    struct {
      unsigned :4;
      unsigned BSHFT0:1;
      unsigned BSHFT1:1;
      unsigned BSHFT2:1;
    };
  };
} ADCON1LBITS;
extern volatile ADCON1LBITS ADCON1Lbits __attribute__((__sfr__));

#define ADCON1H ADCON1H
extern volatile unsigned int  ADCON1H __attribute__((__sfr__));
__extension__ typedef struct tagADCON1HBITS {
  union {
    struct {
      unsigned :5;
      unsigned SHRRES:2;
      unsigned FORM:1;
      unsigned TRBSLV:3;
      unsigned TRBMST:3;
      unsigned TRBERR:1;
      unsigned TRBEN:1;
    };
    struct {
      unsigned :5;
      unsigned SHRRES0:1;
      unsigned SHRRES1:1;
      unsigned :1;
      unsigned TRBSLV0:1;
      unsigned TRBSLV1:1;
      unsigned TRBSLV2:1;
      unsigned TRBMST0:1;
      unsigned TRBMST1:1;
      unsigned TRBMST2:1;
    };
  };
} ADCON1HBITS;
extern volatile ADCON1HBITS ADCON1Hbits __attribute__((__sfr__));

#define ADCON2L ADCON2L
extern volatile unsigned int  ADCON2L __attribute__((__sfr__));
__extension__ typedef struct tagADCON2LBITS {
  union {
    struct {
      unsigned SHRADCS:7;
      unsigned :1;
      unsigned SHREISEL:3;
      unsigned :3;
      unsigned REFERCIE:1;
      unsigned REFCIE:1;
    };
    struct {
      unsigned SHRADCS0:1;
      unsigned SHRADCS1:1;
      unsigned SHRADCS2:1;
      unsigned SHRADCS3:1;
      unsigned SHRADCS4:1;
      unsigned SHRADCS5:1;
      unsigned SHRADCS6:1;
      unsigned :1;
      unsigned SHREISEL0:1;
      unsigned SHREISEL1:1;
      unsigned SHREISEL2:1;
    };
  };
} ADCON2LBITS;
extern volatile ADCON2LBITS ADCON2Lbits __attribute__((__sfr__));

#define ADCON2H ADCON2H
extern volatile unsigned int  ADCON2H __attribute__((__sfr__));
__extension__ typedef struct tagADCON2HBITS {
  union {
    struct {
      unsigned SHRSAMC:10;
      unsigned :4;
      unsigned REFERR:1;
      unsigned REFRDY:1;
    };
    struct {
      unsigned SHRSAMC0:1;
      unsigned SHRSAMC1:1;
      unsigned SHRSAMC2:1;
      unsigned SHRSAMC3:1;
      unsigned SHRSAMC4:1;
      unsigned SHRSAMC5:1;
      unsigned SHRSAMC6:1;
      unsigned SHRSAMC7:1;
      unsigned SHRSAMC8:1;
      unsigned SHRSAMC9:1;
    };
  };
} ADCON2HBITS;
extern volatile ADCON2HBITS ADCON2Hbits __attribute__((__sfr__));

#define ADCON3L ADCON3L
extern volatile unsigned int  ADCON3L __attribute__((__sfr__));
__extension__ typedef struct tagADCON3LBITS {
  union {
    struct {
      unsigned CNVCHSEL:6;
      unsigned SWCTRG:1;
      unsigned SWLCTRG:1;
      unsigned CNVRTCH:1;
      unsigned SHRSAMP:1;
      unsigned SUSPRDY:1;
      unsigned SUSPCIE:1;
      unsigned SUSPEND:1;
      unsigned REFSEL:3;
    };
    struct {
      unsigned CNVCHSEL0:1;
      unsigned CNVCHSEL1:1;
      unsigned CNVCHSEL2:1;
      unsigned CNVCHSEL3:1;
      unsigned CNVCHSEL4:1;
      unsigned CNVCHSEL5:1;
      unsigned :7;
      unsigned REFSEL0:1;
      unsigned REFSEL1:1;
      unsigned REFSEL2:1;
    };
  };
} ADCON3LBITS;
extern volatile ADCON3LBITS ADCON3Lbits __attribute__((__sfr__));

#define ADCON3H ADCON3H
extern volatile unsigned int  ADCON3H __attribute__((__sfr__));
__extension__ typedef struct tagADCON3HBITS {
  union {
    struct {
      unsigned C0EN:1;
      unsigned C1EN:1;
      unsigned :5;
      unsigned SHREN:1;
      unsigned CLKDIV:6;
      unsigned CLKSEL:2;
    };
    struct {
      unsigned :8;
      unsigned CLKDIV0:1;
      unsigned CLKDIV1:1;
      unsigned CLKDIV2:1;
      unsigned CLKDIV3:1;
      unsigned CLKDIV4:1;
      unsigned CLKDIV5:1;
      unsigned CLKSEL0:1;
      unsigned CLKSEL1:1;
    };
  };
} ADCON3HBITS;
extern volatile ADCON3HBITS ADCON3Hbits __attribute__((__sfr__));

#define ADCON4L ADCON4L
extern volatile unsigned int  ADCON4L __attribute__((__sfr__));
typedef struct tagADCON4LBITS {
  unsigned SAMC0EN:1;
  unsigned SAMC1EN:1;
  unsigned :6;
  unsigned SYNCTRG0:1;
  unsigned SYNCTRG1:1;
} ADCON4LBITS;
extern volatile ADCON4LBITS ADCON4Lbits __attribute__((__sfr__));

#define ADCON4H ADCON4H
extern volatile unsigned int  ADCON4H __attribute__((__sfr__));
__extension__ typedef struct tagADCON4HBITS {
  union {
    struct {
      unsigned C0CHS:2;
      unsigned C1CHS:2;
    };
    struct {
      unsigned C0CHS0:1;
      unsigned C0CHS1:1;
      unsigned C1CHS0:1;
      unsigned C1CHS1:1;
    };
  };
} ADCON4HBITS;
extern volatile ADCON4HBITS ADCON4Hbits __attribute__((__sfr__));

#define ADMOD0L ADMOD0L
extern volatile unsigned int  ADMOD0L __attribute__((__sfr__));
typedef struct tagADMOD0LBITS {
  unsigned SIGN0:1;
  unsigned DIFF0:1;
  unsigned SIGN1:1;
  unsigned DIFF1:1;
  unsigned SIGN2:1;
  unsigned DIFF2:1;
  unsigned SIGN3:1;
  unsigned DIFF3:1;
  unsigned SIGN4:1;
  unsigned DIFF4:1;
  unsigned SIGN5:1;
  unsigned DIFF5:1;
  unsigned SIGN6:1;
  unsigned DIFF6:1;
  unsigned SIGN7:1;
  unsigned DIFF7:1;
} ADMOD0LBITS;
extern volatile ADMOD0LBITS ADMOD0Lbits __attribute__((__sfr__));

#define ADMOD0H ADMOD0H
extern volatile unsigned int  ADMOD0H __attribute__((__sfr__));
typedef struct tagADMOD0HBITS {
  unsigned SIGN8:1;
  unsigned DIFF8:1;
  unsigned SIGN9:1;
  unsigned DIFF9:1;
  unsigned SIGN10:1;
  unsigned DIFF10:1;
  unsigned SIGN11:1;
  unsigned DIFF11:1;
  unsigned SIGN12:1;
  unsigned DIFF12:1;
  unsigned SIGN13:1;
  unsigned DIFF13:1;
  unsigned SIGN14:1;
  unsigned DIFF14:1;
} ADMOD0HBITS;
extern volatile ADMOD0HBITS ADMOD0Hbits __attribute__((__sfr__));

#define ADCIE1L ADCIE1L
extern volatile unsigned int  ADCIE1L __attribute__((__sfr__));
typedef struct tagADCIE1LBITS {
  unsigned CIE0:1;
  unsigned CIE1:1;
  unsigned CIE2:1;
  unsigned CIE3:1;
  unsigned CIE4:1;
  unsigned CIE5:1;
  unsigned CIE6:1;
  unsigned CIE7:1;
  unsigned CIE8:1;
  unsigned CIE9:1;
  unsigned CIE10:1;
  unsigned CIE11:1;
  unsigned CIE12:1;
  unsigned CIE13:1;
  unsigned CIE14:1;
} ADCIE1LBITS;
extern volatile ADCIE1LBITS ADCIE1Lbits __attribute__((__sfr__));

#define ADCSS1L ADCSS1L
extern volatile unsigned int  ADCSS1L __attribute__((__sfr__));
typedef struct tagADCSS1LBITS {
  unsigned CSS0:1;
  unsigned CSS1:1;
  unsigned CSS2:1;
  unsigned CSS3:1;
  unsigned CSS4:1;
  unsigned CSS5:1;
  unsigned CSS6:1;
  unsigned CSS7:1;
  unsigned CSS8:1;
  unsigned CSS9:1;
  unsigned CSS10:1;
  unsigned CSS11:1;
  unsigned CSS12:1;
  unsigned CSS13:1;
  unsigned CSS14:1;
} ADCSS1LBITS;
extern volatile ADCSS1LBITS ADCSS1Lbits __attribute__((__sfr__));

#define ADSTATL ADSTATL
extern volatile unsigned int  ADSTATL __attribute__((__sfr__));
typedef struct tagADSTATLBITS {
  unsigned AN0RDY:1;
  unsigned AN1RDY:1;
  unsigned AN2RDY:1;
  unsigned AN3RDY:1;
  unsigned AN4RDY:1;
  unsigned AN5RDY:1;
  unsigned AN6RDY:1;
  unsigned AN7RDY:1;
  unsigned AN8RDY:1;
  unsigned AN9RDY:1;
  unsigned AN10RDY:1;
  unsigned AN11RDY:1;
  unsigned AN12RDY:1;
  unsigned AN13RDY:1;
  unsigned AN14RDY:1;
} ADSTATLBITS;
extern volatile ADSTATLBITS ADSTATLbits __attribute__((__sfr__));

#define ADCMP0ENL ADCMP0ENL
extern volatile unsigned int  ADCMP0ENL __attribute__((__sfr__));
typedef struct tagADCMP0ENLBITS {
  unsigned CMPEN0:1;
  unsigned CMPEN1:1;
  unsigned CMPEN2:1;
  unsigned CMPEN3:1;
  unsigned CMPEN4:1;
  unsigned CMPEN5:1;
  unsigned CMPEN6:1;
  unsigned CMPEN7:1;
  unsigned CMPEN8:1;
  unsigned CMPEN9:1;
  unsigned CMPEN10:1;
  unsigned CMPEN11:1;
  unsigned CMPEN12:1;
  unsigned CMPEN13:1;
  unsigned CMPEN14:1;
} ADCMP0ENLBITS;
extern volatile ADCMP0ENLBITS ADCMP0ENLbits __attribute__((__sfr__));

#define ADCMP0LO ADCMP0LO
extern volatile unsigned int  ADCMP0LO __attribute__((__sfr__));
#define ADCMP0HI ADCMP0HI
extern volatile unsigned int  ADCMP0HI __attribute__((__sfr__));
#define ADCMP1ENL ADCMP1ENL
extern volatile unsigned int  ADCMP1ENL __attribute__((__sfr__));
typedef struct tagADCMP1ENLBITS {
  unsigned CMPEN0:1;
  unsigned CMPEN1:1;
  unsigned CMPEN2:1;
  unsigned CMPEN3:1;
  unsigned CMPEN4:1;
  unsigned CMPEN5:1;
  unsigned CMPEN6:1;
  unsigned CMPEN7:1;
  unsigned CMPEN8:1;
  unsigned CMPEN9:1;
  unsigned CMPEN10:1;
  unsigned CMPEN11:1;
  unsigned CMPEN12:1;
  unsigned CMPEN13:1;
  unsigned CMPEN14:1;
} ADCMP1ENLBITS;
extern volatile ADCMP1ENLBITS ADCMP1ENLbits __attribute__((__sfr__));

#define ADCMP1LO ADCMP1LO
extern volatile unsigned int  ADCMP1LO __attribute__((__sfr__));
#define ADCMP1HI ADCMP1HI
extern volatile unsigned int  ADCMP1HI __attribute__((__sfr__));
#define ADFL0DAT ADFL0DAT
extern volatile unsigned int  ADFL0DAT __attribute__((__sfr__));
#define ADFL0CON ADFL0CON
extern volatile unsigned int  ADFL0CON __attribute__((__sfr__));
__extension__ typedef struct tagADFL0CONBITS {
  union {
    struct {
      unsigned FLCHSEL:5;
      unsigned :3;
      unsigned RDY:1;
      unsigned CIE:1;
      unsigned OVRSAM:3;
      unsigned MODE:2;
      unsigned FLEN:1;
    };
    struct {
      unsigned FLCHSEL0:1;
      unsigned FLCHSEL1:1;
      unsigned FLCHSEL2:1;
      unsigned FLCHSEL3:1;
      unsigned FLCHSEL4:1;
      unsigned :5;
      unsigned OVRSAM0:1;
      unsigned OVRSAM1:1;
      unsigned OVRSAM2:1;
    };
  };
} ADFL0CONBITS;
extern volatile ADFL0CONBITS ADFL0CONbits __attribute__((__sfr__));

#define ADTRIG0L ADTRIG0L
extern volatile unsigned int  ADTRIG0L __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG0LBITS {
  union {
    struct {
      unsigned TRGSRC0:5;
      unsigned :3;
      unsigned TRGSRC1:5;
    };
    struct {
      unsigned TRGSRC20:1;
      unsigned TRGSRC21:1;
      unsigned TRGSRC22:1;
      unsigned TRGSRC23:1;
      unsigned TRGSRC24:1;
      unsigned :3;
      unsigned TRGSRC10:1;
      unsigned TRGSRC11:1;
      unsigned TRGSRC12:1;
      unsigned TRGSRC13:1;
      unsigned TRGSRC14:1;
    };
  };
} ADTRIG0LBITS;
extern volatile ADTRIG0LBITS ADTRIG0Lbits __attribute__((__sfr__));

#define ADTRIG0H ADTRIG0H
extern volatile unsigned int  ADTRIG0H __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG0HBITS {
  union {
    struct {
      unsigned TRGSRC2:5;
      unsigned :3;
      unsigned TRGSRC3:5;
    };
    struct {
      unsigned TRGSRC40:1;
      unsigned TRGSRC41:1;
      unsigned TRGSRC42:1;
      unsigned TRGSRC43:1;
      unsigned TRGSRC44:1;
      unsigned :3;
      unsigned TRGSRC30:1;
      unsigned TRGSRC31:1;
      unsigned TRGSRC32:1;
      unsigned TRGSRC33:1;
      unsigned TRGSRC34:1;
    };
  };
} ADTRIG0HBITS;
extern volatile ADTRIG0HBITS ADTRIG0Hbits __attribute__((__sfr__));

#define ADTRIG1L ADTRIG1L
extern volatile unsigned int  ADTRIG1L __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG1LBITS {
  union {
    struct {
      unsigned TRGSRC4:5;
      unsigned :3;
      unsigned TRGSRC5:5;
    };
    struct {
      unsigned TRGSRC60:1;
      unsigned TRGSRC61:1;
      unsigned TRGSRC62:1;
      unsigned TRGSRC63:1;
      unsigned TRGSRC64:1;
      unsigned :3;
      unsigned TRGSRC50:1;
      unsigned TRGSRC51:1;
      unsigned TRGSRC52:1;
      unsigned TRGSRC53:1;
      unsigned TRGSRC54:1;
    };
  };
} ADTRIG1LBITS;
extern volatile ADTRIG1LBITS ADTRIG1Lbits __attribute__((__sfr__));

#define ADTRIG1H ADTRIG1H
extern volatile unsigned int  ADTRIG1H __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG1HBITS {
  union {
    struct {
      unsigned TRGSRC6:5;
      unsigned :3;
      unsigned TRGSRC7:5;
    };
    struct {
      unsigned TRGSRC80:1;
      unsigned TRGSRC81:1;
      unsigned TRGSRC82:1;
      unsigned TRGSRC83:1;
      unsigned TRGSRC84:1;
      unsigned :3;
      unsigned TRGSRC70:1;
      unsigned TRGSRC71:1;
      unsigned TRGSRC72:1;
      unsigned TRGSRC73:1;
      unsigned TRGSRC74:1;
    };
  };
} ADTRIG1HBITS;
extern volatile ADTRIG1HBITS ADTRIG1Hbits __attribute__((__sfr__));

#define ADTRIG2L ADTRIG2L
extern volatile unsigned int  ADTRIG2L __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG2LBITS {
  union {
    struct {
      unsigned TRGSRC8:5;
      unsigned :3;
      unsigned TRGSRC9:5;
    };
    struct {
      unsigned TRGSRC100:1;
      unsigned TRGSRC101:1;
      unsigned TRGSRC102:1;
      unsigned TRGSRC103:1;
      unsigned TRGSRC104:1;
      unsigned :3;
      unsigned TRGSRC90:1;
      unsigned TRGSRC91:1;
      unsigned TRGSRC92:1;
      unsigned TRGSRC93:1;
      unsigned TRGSRC94:1;
    };
  };
} ADTRIG2LBITS;
extern volatile ADTRIG2LBITS ADTRIG2Lbits __attribute__((__sfr__));

#define ADTRIG2H ADTRIG2H
extern volatile unsigned int  ADTRIG2H __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG2HBITS {
  union {
    struct {
      unsigned TRGSRC10:5;
      unsigned :3;
      unsigned TRGSRC11:5;
    };
    struct {
      unsigned TRGSRC120:1;
      unsigned TRGSRC121:1;
      unsigned TRGSRC122:1;
      unsigned TRGSRC123:1;
      unsigned TRGSRC124:1;
      unsigned :3;
      unsigned TRGSRC110:1;
      unsigned TRGSRC111:1;
      unsigned TRGSRC112:1;
      unsigned TRGSRC113:1;
      unsigned TRGSRC114:1;
    };
  };
} ADTRIG2HBITS;
extern volatile ADTRIG2HBITS ADTRIG2Hbits __attribute__((__sfr__));

#define ADTRIG3L ADTRIG3L
extern volatile unsigned int  ADTRIG3L __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG3LBITS {
  union {
    struct {
      unsigned TRGSRC12:5;
      unsigned :3;
      unsigned TRGSRC13:5;
    };
    struct {
      unsigned TRGSRC140:1;
      unsigned TRGSRC141:1;
      unsigned TRGSRC142:1;
      unsigned TRGSRC143:1;
      unsigned TRGSRC144:1;
      unsigned :3;
      unsigned TRGSRC130:1;
      unsigned TRGSRC131:1;
      unsigned TRGSRC132:1;
      unsigned TRGSRC133:1;
      unsigned TRGSRC134:1;
    };
  };
} ADTRIG3LBITS;
extern volatile ADTRIG3LBITS ADTRIG3Lbits __attribute__((__sfr__));

#define ADTRIG3H ADTRIG3H
extern volatile unsigned int  ADTRIG3H __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG3HBITS {
  union {
    struct {
      unsigned TRGSRC14:5;
    };
    struct {
      unsigned TRGSRC160:1;
      unsigned TRGSRC161:1;
      unsigned TRGSRC162:1;
      unsigned TRGSRC163:1;
      unsigned TRGSRC164:1;
    };
  };
} ADTRIG3HBITS;
extern volatile ADTRIG3HBITS ADTRIG3Hbits __attribute__((__sfr__));

#define ADCMP0CON ADCMP0CON
extern volatile unsigned int  ADCMP0CON __attribute__((__sfr__));
__extension__ typedef struct tagADCMP0CONBITS {
  union {
    struct {
      unsigned LOLO:1;
      unsigned LOHI:1;
      unsigned HILO:1;
      unsigned HIHI:1;
      unsigned BTWN:1;
      unsigned STAT:1;
      unsigned CIE:1;
      unsigned CMPEN:1;
      unsigned CHNL:5;
    };
    struct {
      unsigned :8;
      unsigned CHNL0:1;
      unsigned CHNL1:1;
      unsigned CHNL2:1;
      unsigned CHNL3:1;
      unsigned CHNL4:1;
    };
  };
} ADCMP0CONBITS;
extern volatile ADCMP0CONBITS ADCMP0CONbits __attribute__((__sfr__));

#define ADCMP1CON ADCMP1CON
extern volatile unsigned int  ADCMP1CON __attribute__((__sfr__));
__extension__ typedef struct tagADCMP1CONBITS {
  union {
    struct {
      unsigned LOLO:1;
      unsigned LOHI:1;
      unsigned HILO:1;
      unsigned HIHI:1;
      unsigned BTWN:1;
      unsigned STAT:1;
      unsigned CIE:1;
      unsigned CMPEN:1;
      unsigned CHNL:5;
    };
    struct {
      unsigned :8;
      unsigned CHNL0:1;
      unsigned CHNL1:1;
      unsigned CHNL2:1;
      unsigned CHNL3:1;
      unsigned CHNL4:1;
    };
  };
} ADCMP1CONBITS;
extern volatile ADCMP1CONBITS ADCMP1CONbits __attribute__((__sfr__));

#define ADBASE ADBASE
extern volatile unsigned int  ADBASE __attribute__((__sfr__));
__extension__ typedef struct tagADBASEBITS {
  union {
    struct {
      unsigned CHOFFSET:16;
    };
    struct {
      unsigned CHOFFSET0:1;
      unsigned CHOFFSET1:1;
      unsigned CHOFFSET2:1;
      unsigned CHOFFSET3:1;
      unsigned CHOFFSET4:1;
      unsigned CHOFFSET5:1;
      unsigned CHOFFSET6:1;
      unsigned CHOFFSET7:1;
      unsigned CHOFFSET8:1;
      unsigned CHOFFSET9:1;
      unsigned CHOFFSET10:1;
      unsigned CHOFFSET11:1;
      unsigned CHOFFSET12:1;
      unsigned CHOFFSET13:1;
      unsigned CHOFFSET14:1;
      unsigned CHOFFSET15:1;
    };
  };
} ADBASEBITS;
extern volatile ADBASEBITS ADBASEbits __attribute__((__sfr__));

#define ADLVLTRGL ADLVLTRGL
extern volatile unsigned int  ADLVLTRGL __attribute__((__sfr__));
typedef struct tagADLVLTRGLBITS {
  unsigned LVLEN0:1;
  unsigned LVLEN1:1;
  unsigned LVLEN2:1;
  unsigned LVLEN3:1;
  unsigned LVLEN4:1;
  unsigned LVLEN5:1;
  unsigned LVLEN6:1;
  unsigned LVLEN7:1;
  unsigned LVLEN8:1;
  unsigned LVLEN9:1;
  unsigned LVLEN10:1;
  unsigned LVLEN11:1;
  unsigned LVLEN12:1;
  unsigned LVLEN13:1;
  unsigned LVLEN14:1;
} ADLVLTRGLBITS;
extern volatile ADLVLTRGLBITS ADLVLTRGLbits __attribute__((__sfr__));

#define ADCORE0L ADCORE0L
extern volatile unsigned int  ADCORE0L __attribute__((__sfr__));
__extension__ typedef struct tagADCORE0LBITS {
  union {
    struct {
      unsigned SAMC:10;
    };
    struct {
      unsigned SAMC0:1;
      unsigned SAMC1:1;
      unsigned SAMC2:1;
      unsigned SAMC3:1;
      unsigned SAMC4:1;
      unsigned SAMC5:1;
      unsigned SAMC6:1;
      unsigned SAMC7:1;
      unsigned SAMC8:1;
      unsigned SAMC9:1;
    };
  };
} ADCORE0LBITS;
extern volatile ADCORE0LBITS ADCORE0Lbits __attribute__((__sfr__));

#define ADCORE0H ADCORE0H
extern volatile unsigned int  ADCORE0H __attribute__((__sfr__));
__extension__ typedef struct tagADCORE0HBITS {
  union {
    struct {
      unsigned ADCS:7;
      unsigned :1;
      unsigned RES:2;
      unsigned EISEL:3;
    };
    struct {
      unsigned ADCS0:1;
      unsigned ADCS1:1;
      unsigned ADCS2:1;
      unsigned ADCS3:1;
      unsigned ADCS4:1;
      unsigned ADCS5:1;
      unsigned ADCS6:1;
      unsigned :1;
      unsigned RES0:1;
      unsigned RES1:1;
      unsigned EISEL0:1;
      unsigned EISEL1:1;
      unsigned EISEL2:1;
    };
  };
} ADCORE0HBITS;
extern volatile ADCORE0HBITS ADCORE0Hbits __attribute__((__sfr__));

#define ADCORE1L ADCORE1L
extern volatile unsigned int  ADCORE1L __attribute__((__sfr__));
__extension__ typedef struct tagADCORE1LBITS {
  union {
    struct {
      unsigned SAMC:10;
    };
    struct {
      unsigned SAMC0:1;
      unsigned SAMC1:1;
      unsigned SAMC2:1;
      unsigned SAMC3:1;
      unsigned SAMC4:1;
      unsigned SAMC5:1;
      unsigned SAMC6:1;
      unsigned SAMC7:1;
      unsigned SAMC8:1;
      unsigned SAMC9:1;
    };
  };
} ADCORE1LBITS;
extern volatile ADCORE1LBITS ADCORE1Lbits __attribute__((__sfr__));

#define ADCORE1H ADCORE1H
extern volatile unsigned int  ADCORE1H __attribute__((__sfr__));
__extension__ typedef struct tagADCORE1HBITS {
  union {
    struct {
      unsigned ADCS:7;
      unsigned :1;
      unsigned RES:2;
      unsigned EISEL:3;
    };
    struct {
      unsigned ADCS0:1;
      unsigned ADCS1:1;
      unsigned ADCS2:1;
      unsigned ADCS3:1;
      unsigned ADCS4:1;
      unsigned ADCS5:1;
      unsigned ADCS6:1;
      unsigned :1;
      unsigned RES0:1;
      unsigned RES1:1;
      unsigned EISEL0:1;
      unsigned EISEL1:1;
      unsigned EISEL2:1;
    };
  };
} ADCORE1HBITS;
extern volatile ADCORE1HBITS ADCORE1Hbits __attribute__((__sfr__));

#define ADEICONL ADEICONL
extern volatile unsigned int  ADEICONL __attribute__((__sfr__));
typedef struct tagADEICONLBITS {
  unsigned C0EIF:1;
  unsigned C1EIF:1;
  unsigned :5;
  unsigned SHREIF:1;
  unsigned C0EIEN:1;
  unsigned C1EIEN:1;
  unsigned :5;
  unsigned SHREIEN:1;
} ADEICONLBITS;
extern volatile ADEICONLBITS ADEICONLbits __attribute__((__sfr__));

#define ADEICONH ADEICONH
extern volatile unsigned int  ADEICONH __attribute__((__sfr__));
typedef struct tagADEICONHBITS {
  unsigned SHREICH:6;
} ADEICONHBITS;
extern volatile ADEICONHBITS ADEICONHbits __attribute__((__sfr__));

#define ADCON5L ADCON5L
extern volatile unsigned int  ADCON5L __attribute__((__sfr__));
typedef struct tagADCON5LBITS {
  unsigned C0PWR:1;
  unsigned C1PWR:1;
  unsigned :5;
  unsigned SHRPWR:1;
  unsigned C0RDY:1;
  unsigned C1RDY:1;
  unsigned :5;
  unsigned SHRRDY:1;
} ADCON5LBITS;
extern volatile ADCON5LBITS ADCON5Lbits __attribute__((__sfr__));

#define ADCON5H ADCON5H
extern volatile unsigned int  ADCON5H __attribute__((__sfr__));
typedef struct tagADCON5HBITS {
  unsigned C0C1E:1;
  unsigned C1C1E:1;
  unsigned C2C1E:1;
  unsigned C3C1E:1;
  unsigned C4C1E:1;
  unsigned C5C1E:1;
  unsigned C6C1E:1;
  unsigned SHRCIE:1;
  unsigned WARMTIME:5;
} ADCON5HBITS;
extern volatile ADCON5HBITS ADCON5Hbits __attribute__((__sfr__));

#define ADCAL0L ADCAL0L
extern volatile unsigned int  ADCAL0L __attribute__((__sfr__));
typedef struct tagADCAL0LBITS {
  unsigned CAL0RUN:1;
  unsigned CAL0EN:1;
  unsigned CAL0DIFF:1;
  unsigned CAL0SKIP:1;
  unsigned :3;
  unsigned CAL0RDY:1;
  unsigned CAL1RUN:1;
  unsigned CAL1EN:1;
  unsigned CAL1DIFF:1;
  unsigned CAL1SKIP:1;
  unsigned :3;
  unsigned CAL1RDY:1;
} ADCAL0LBITS;
extern volatile ADCAL0LBITS ADCAL0Lbits __attribute__((__sfr__));

#define ADCAL1H ADCAL1H
extern volatile unsigned int  ADCAL1H __attribute__((__sfr__));
typedef struct tagADCAL1HBITS {
  unsigned :8;
  unsigned CSHRRUN:1;
  unsigned CSHREN:1;
  unsigned CSHRDIFF:1;
  unsigned CSHRSKIP:1;
  unsigned :3;
  unsigned CSHRRDY:1;
} ADCAL1HBITS;
extern volatile ADCAL1HBITS ADCAL1Hbits __attribute__((__sfr__));

#define ADCBUF0 ADCBUF0
extern volatile unsigned int  ADCBUF0 __attribute__((__sfr__));
#define ADCBUF1 ADCBUF1
extern volatile unsigned int  ADCBUF1 __attribute__((__sfr__));
#define ADCBUF2 ADCBUF2
extern volatile unsigned int  ADCBUF2 __attribute__((__sfr__));
#define ADCBUF3 ADCBUF3
extern volatile unsigned int  ADCBUF3 __attribute__((__sfr__));
#define ADCBUF4 ADCBUF4
extern volatile unsigned int  ADCBUF4 __attribute__((__sfr__));
#define ADCBUF5 ADCBUF5
extern volatile unsigned int  ADCBUF5 __attribute__((__sfr__));
#define ADCBUF6 ADCBUF6
extern volatile unsigned int  ADCBUF6 __attribute__((__sfr__));
#define ADCBUF7 ADCBUF7
extern volatile unsigned int  ADCBUF7 __attribute__((__sfr__));
#define ADCBUF8 ADCBUF8
extern volatile unsigned int  ADCBUF8 __attribute__((__sfr__));
#define ADCBUF9 ADCBUF9
extern volatile unsigned int  ADCBUF9 __attribute__((__sfr__));
#define ADCBUF10 ADCBUF10
extern volatile unsigned int  ADCBUF10 __attribute__((__sfr__));
#define ADCBUF11 ADCBUF11
extern volatile unsigned int  ADCBUF11 __attribute__((__sfr__));
#define ADCBUF12 ADCBUF12
extern volatile unsigned int  ADCBUF12 __attribute__((__sfr__));
#define ADCBUF13 ADCBUF13
extern volatile unsigned int  ADCBUF13 __attribute__((__sfr__));
#define ADCBUF14 ADCBUF14
extern volatile unsigned int  ADCBUF14 __attribute__((__sfr__));
#define PGA1CON PGA1CON
extern volatile unsigned int  PGA1CON __attribute__((__sfr__));
__extension__ typedef struct tagPGA1CONBITS {
  union {
    struct {
      unsigned GAIN:3;
      unsigned :5;
      unsigned SELNI:3;
      unsigned SELPI:3;
      unsigned PGAOEN:1;
      unsigned PGAEN:1;
    };
    struct {
      unsigned GAIN0:1;
      unsigned GAIN1:1;
      unsigned GAIN2:1;
      unsigned :5;
      unsigned SELNI0:1;
      unsigned SELNI1:1;
      unsigned SELNI2:1;
      unsigned SELPI0:1;
      unsigned SELPI1:1;
      unsigned SELPI2:1;
    };
  };
} PGA1CONBITS;
extern volatile PGA1CONBITS PGA1CONbits __attribute__((__sfr__));

#define PGA1CAL PGA1CAL
extern volatile unsigned int  PGA1CAL __attribute__((__sfr__));
typedef struct tagPGA1CALBITS {
  unsigned PGACAL:6;
} PGA1CALBITS;
extern volatile PGA1CALBITS PGA1CALbits __attribute__((__sfr__));

#define PGA2CON PGA2CON
extern volatile unsigned int  PGA2CON __attribute__((__sfr__));
__extension__ typedef struct tagPGA2CONBITS {
  union {
    struct {
      unsigned GAIN:3;
      unsigned :5;
      unsigned SELNI:3;
      unsigned SELPI:3;
      unsigned PGAOEN:1;
      unsigned PGAEN:1;
    };
    struct {
      unsigned GAIN0:1;
      unsigned GAIN1:1;
      unsigned GAIN2:1;
      unsigned :5;
      unsigned SELNI0:1;
      unsigned SELNI1:1;
      unsigned SELNI2:1;
      unsigned SELPI0:1;
      unsigned SELPI1:1;
      unsigned SELPI2:1;
    };
  };
} PGA2CONBITS;
extern volatile PGA2CONBITS PGA2CONbits __attribute__((__sfr__));

#define PGA2CAL PGA2CAL
extern volatile unsigned int  PGA2CAL __attribute__((__sfr__));
typedef struct tagPGA2CALBITS {
  unsigned PGACAL:6;
} PGA2CALBITS;
extern volatile PGA2CALBITS PGA2CALbits __attribute__((__sfr__));

#define CMP1CON CMP1CON
extern volatile unsigned int  CMP1CON __attribute__((__sfr__));
__extension__ typedef struct tagCMP1CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned :1;
      unsigned INSEL:2;
      unsigned :1;
      unsigned FCLKSEL:1;
      unsigned FLTREN:1;
      unsigned HYSSEL:2;
      unsigned CMPSIDL:1;
      unsigned :1;
      unsigned CMPON:1;
    };
    struct {
      unsigned :6;
      unsigned INSEL0:1;
      unsigned INSEL1:1;
      unsigned :3;
      unsigned HYSSEL0:1;
      unsigned HYSSEL1:1;
    };
  };
} CMP1CONBITS;
extern volatile CMP1CONBITS CMP1CONbits __attribute__((__sfr__));

#define CMP1DAC CMP1DAC
extern volatile unsigned int  CMP1DAC __attribute__((__sfr__));
__extension__ typedef struct tagCMP1DACBITS {
  union {
    struct {
      unsigned CMREF:12;
    };
    struct {
      unsigned CMREF0:1;
      unsigned CMREF1:1;
      unsigned CMREF2:1;
      unsigned CMREF3:1;
      unsigned CMREF4:1;
      unsigned CMREF5:1;
      unsigned CMREF6:1;
      unsigned CMREF7:1;
      unsigned CMREF8:1;
      unsigned CMREF9:1;
      unsigned CMREF10:1;
      unsigned CMREF11:1;
    };
  };
} CMP1DACBITS;
extern volatile CMP1DACBITS CMP1DACbits __attribute__((__sfr__));

#define CMP2CON CMP2CON
extern volatile unsigned int  CMP2CON __attribute__((__sfr__));
__extension__ typedef struct tagCMP2CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned :1;
      unsigned INSEL:2;
      unsigned :1;
      unsigned FCLKSEL:1;
      unsigned FLTREN:1;
      unsigned HYSSEL:2;
      unsigned CMPSIDL:1;
      unsigned :1;
      unsigned CMPON:1;
    };
    struct {
      unsigned :6;
      unsigned INSEL0:1;
      unsigned INSEL1:1;
      unsigned :3;
      unsigned HYSSEL0:1;
      unsigned HYSSEL1:1;
    };
  };
} CMP2CONBITS;
extern volatile CMP2CONBITS CMP2CONbits __attribute__((__sfr__));

#define CMP2DAC CMP2DAC
extern volatile unsigned int  CMP2DAC __attribute__((__sfr__));
__extension__ typedef struct tagCMP2DACBITS {
  union {
    struct {
      unsigned CMREF:12;
    };
    struct {
      unsigned CMREF0:1;
      unsigned CMREF1:1;
      unsigned CMREF2:1;
      unsigned CMREF3:1;
      unsigned CMREF4:1;
      unsigned CMREF5:1;
      unsigned CMREF6:1;
      unsigned CMREF7:1;
      unsigned CMREF8:1;
      unsigned CMREF9:1;
      unsigned CMREF10:1;
      unsigned CMREF11:1;
    };
  };
} CMP2DACBITS;
extern volatile CMP2DACBITS CMP2DACbits __attribute__((__sfr__));

#define RPOR0 RPOR0
extern volatile unsigned int  RPOR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR0BITS {
  union {
    struct {
      unsigned RP32R:6;
      unsigned :2;
      unsigned RP33R:6;
    };
    struct {
      unsigned RP32R0:1;
      unsigned RP32R1:1;
      unsigned RP32R2:1;
      unsigned RP32R3:1;
      unsigned RP32R4:1;
      unsigned RP32R5:1;
      unsigned :2;
      unsigned RP33R0:1;
      unsigned RP33R1:1;
      unsigned RP33R2:1;
      unsigned RP33R3:1;
      unsigned RP33R4:1;
      unsigned RP33R5:1;
    };
  };
} RPOR0BITS;
extern volatile RPOR0BITS RPOR0bits __attribute__((__sfr__));

#define RPOR1 RPOR1
extern volatile unsigned int  RPOR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR1BITS {
  union {
    struct {
      unsigned RP34R:6;
      unsigned :2;
      unsigned RP35R:6;
    };
    struct {
      unsigned RP34R0:1;
      unsigned RP34R1:1;
      unsigned RP34R2:1;
      unsigned RP34R3:1;
      unsigned RP34R4:1;
      unsigned RP34R5:1;
      unsigned :2;
      unsigned RP35R0:1;
      unsigned RP35R1:1;
      unsigned RP35R2:1;
      unsigned RP35R3:1;
      unsigned RP35R4:1;
      unsigned RP35R5:1;
    };
  };
} RPOR1BITS;
extern volatile RPOR1BITS RPOR1bits __attribute__((__sfr__));

#define RPOR2 RPOR2
extern volatile unsigned int  RPOR2 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR2BITS {
  union {
    struct {
      unsigned RP36R:6;
      unsigned :2;
      unsigned RP37R:6;
    };
    struct {
      unsigned RP36R0:1;
      unsigned RP36R1:1;
      unsigned RP36R2:1;
      unsigned RP36R3:1;
      unsigned RP36R4:1;
      unsigned RP36R5:1;
      unsigned :2;
      unsigned RP37R0:1;
      unsigned RP37R1:1;
      unsigned RP37R2:1;
      unsigned RP37R3:1;
      unsigned RP37R4:1;
      unsigned RP37R5:1;
    };
  };
} RPOR2BITS;
extern volatile RPOR2BITS RPOR2bits __attribute__((__sfr__));

#define RPOR3 RPOR3
extern volatile unsigned int  RPOR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR3BITS {
  union {
    struct {
      unsigned RP38R:6;
      unsigned :2;
      unsigned RP39R:6;
    };
    struct {
      unsigned RP38R0:1;
      unsigned RP38R1:1;
      unsigned RP38R2:1;
      unsigned RP38R3:1;
      unsigned RP38R4:1;
      unsigned RP38R5:1;
      unsigned :2;
      unsigned RP39R0:1;
      unsigned RP39R1:1;
      unsigned RP39R2:1;
      unsigned RP39R3:1;
      unsigned RP39R4:1;
      unsigned RP39R5:1;
    };
  };
} RPOR3BITS;
extern volatile RPOR3BITS RPOR3bits __attribute__((__sfr__));

#define RPOR4 RPOR4
extern volatile unsigned int  RPOR4 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR4BITS {
  union {
    struct {
      unsigned RP40R:6;
      unsigned :2;
      unsigned RP41R:6;
    };
    struct {
      unsigned RP40R0:1;
      unsigned RP40R1:1;
      unsigned RP40R2:1;
      unsigned RP40R3:1;
      unsigned RP40R4:1;
      unsigned RP40R5:1;
      unsigned :2;
      unsigned RP41R0:1;
      unsigned RP41R1:1;
      unsigned RP41R2:1;
      unsigned RP41R3:1;
      unsigned RP41R4:1;
      unsigned RP41R5:1;
    };
  };
} RPOR4BITS;
extern volatile RPOR4BITS RPOR4bits __attribute__((__sfr__));

#define RPOR5 RPOR5
extern volatile unsigned int  RPOR5 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR5BITS {
  union {
    struct {
      unsigned RP42R:6;
      unsigned :2;
      unsigned RP43R:6;
    };
    struct {
      unsigned RP42R0:1;
      unsigned RP42R1:1;
      unsigned RP42R2:1;
      unsigned RP42R3:1;
      unsigned RP42R4:1;
      unsigned RP42R5:1;
      unsigned :2;
      unsigned RP43R0:1;
      unsigned RP43R1:1;
      unsigned RP43R2:1;
      unsigned RP43R3:1;
      unsigned RP43R4:1;
      unsigned RP43R5:1;
    };
  };
} RPOR5BITS;
extern volatile RPOR5BITS RPOR5bits __attribute__((__sfr__));

#define RPOR6 RPOR6
extern volatile unsigned int  RPOR6 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR6BITS {
  union {
    struct {
      unsigned RP44R:6;
      unsigned :2;
      unsigned RP45R:6;
    };
    struct {
      unsigned RP44R0:1;
      unsigned RP44R1:1;
      unsigned RP44R2:1;
      unsigned RP44R3:1;
      unsigned RP44R4:1;
      unsigned RP44R5:1;
      unsigned :2;
      unsigned RP45R0:1;
      unsigned RP45R1:1;
      unsigned RP45R2:1;
      unsigned RP45R3:1;
      unsigned RP45R4:1;
      unsigned RP45R5:1;
    };
  };
} RPOR6BITS;
extern volatile RPOR6BITS RPOR6bits __attribute__((__sfr__));

#define RPOR7 RPOR7
extern volatile unsigned int  RPOR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR7BITS {
  union {
    struct {
      unsigned RP46R:6;
      unsigned :2;
      unsigned RP47R:6;
    };
    struct {
      unsigned RP46R0:1;
      unsigned RP46R1:1;
      unsigned RP46R2:1;
      unsigned RP46R3:1;
      unsigned RP46R4:1;
      unsigned RP46R5:1;
      unsigned :2;
      unsigned RP47R0:1;
      unsigned RP47R1:1;
      unsigned RP47R2:1;
      unsigned RP47R3:1;
      unsigned RP47R4:1;
      unsigned RP47R5:1;
    };
  };
} RPOR7BITS;
extern volatile RPOR7BITS RPOR7bits __attribute__((__sfr__));

#define RPOR16 RPOR16
extern volatile unsigned int  RPOR16 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR16BITS {
  union {
    struct {
      unsigned RP176R:6;
      unsigned :2;
      unsigned RP177R:6;
    };
    struct {
      unsigned RP176R0:1;
      unsigned RP176R1:1;
      unsigned RP176R2:1;
      unsigned RP176R3:1;
      unsigned RP176R4:1;
      unsigned RP176R5:1;
      unsigned :2;
      unsigned RP177R0:1;
      unsigned RP177R1:1;
      unsigned RP177R2:1;
      unsigned RP177R3:1;
      unsigned RP177R4:1;
      unsigned RP177R5:1;
    };
  };
} RPOR16BITS;
extern volatile RPOR16BITS RPOR16bits __attribute__((__sfr__));

#define RPOR17 RPOR17
extern volatile unsigned int  RPOR17 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR17BITS {
  union {
    struct {
      unsigned RP178R:6;
      unsigned :2;
      unsigned RP179R:6;
    };
    struct {
      unsigned RP178R0:1;
      unsigned RP178R1:1;
      unsigned RP178R2:1;
      unsigned RP178R3:1;
      unsigned RP178R4:1;
      unsigned RP178R5:1;
      unsigned :2;
      unsigned RP179R0:1;
      unsigned RP179R1:1;
      unsigned RP179R2:1;
      unsigned RP179R3:1;
      unsigned RP179R4:1;
      unsigned RP179R5:1;
    };
  };
} RPOR17BITS;
extern volatile RPOR17BITS RPOR17bits __attribute__((__sfr__));

#define RPOR18 RPOR18
extern volatile unsigned int  RPOR18 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR18BITS {
  union {
    struct {
      unsigned RP180R:6;
      unsigned :2;
      unsigned RP181R:6;
    };
    struct {
      unsigned RP180R0:1;
      unsigned RP180R1:1;
      unsigned RP180R2:1;
      unsigned RP180R3:1;
      unsigned RP180R4:1;
      unsigned RP180R5:1;
      unsigned :2;
      unsigned RP181R0:1;
      unsigned RP181R1:1;
      unsigned RP181R2:1;
      unsigned RP181R3:1;
      unsigned RP181R4:1;
      unsigned RP181R5:1;
    };
  };
} RPOR18BITS;
extern volatile RPOR18BITS RPOR18bits __attribute__((__sfr__));

#define RPINR0 RPINR0
extern volatile unsigned int  RPINR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR0BITS {
  union {
    struct {
      unsigned :8;
      unsigned INT1R:8;
    };
    struct {
      unsigned :8;
      unsigned INT1R0:1;
      unsigned INT1R1:1;
      unsigned INT1R2:1;
      unsigned INT1R3:1;
      unsigned INT1R4:1;
      unsigned INT1R5:1;
      unsigned INT1R6:1;
      unsigned INT1R7:1;
    };
  };
} RPINR0BITS;
extern volatile RPINR0BITS RPINR0bits __attribute__((__sfr__));

#define RPINR1 RPINR1
extern volatile unsigned int  RPINR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR1BITS {
  union {
    struct {
      unsigned INT2R:8;
    };
    struct {
      unsigned INT2R0:1;
      unsigned INT2R1:1;
      unsigned INT2R2:1;
      unsigned INT2R3:1;
      unsigned INT2R4:1;
      unsigned INT2R5:1;
      unsigned INT2R6:1;
      unsigned INT2R7:1;
    };
  };
} RPINR1BITS;
extern volatile RPINR1BITS RPINR1bits __attribute__((__sfr__));

#define RPINR2 RPINR2
extern volatile unsigned int  RPINR2 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR2BITS {
  union {
    struct {
      unsigned INT4RR:8;
      unsigned T1CKRR:8;
    };
    struct {
      unsigned INT4RR0:1;
      unsigned INT4RR1:1;
      unsigned INT4RR2:1;
      unsigned INT4RR3:1;
      unsigned INT4RR4:1;
      unsigned INT4RR5:1;
      unsigned INT4RR6:1;
      unsigned INT4RR7:1;
      unsigned T1CKRR0:1;
      unsigned T1CKRR1:1;
      unsigned T1CKRR2:1;
      unsigned T1CKRR3:1;
      unsigned T1CKRR4:1;
      unsigned T1CKRR5:1;
      unsigned T1CKRR6:1;
      unsigned T1CKRR7:1;
    };
  };
} RPINR2BITS;
extern volatile RPINR2BITS RPINR2bits __attribute__((__sfr__));

#define RPINR3 RPINR3
extern volatile unsigned int  RPINR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR3BITS {
  union {
    struct {
      unsigned T2CKR:8;
      unsigned T3CKR:8;
    };
    struct {
      unsigned T2CKR0:1;
      unsigned T2CKR1:1;
      unsigned T2CKR2:1;
      unsigned T2CKR3:1;
      unsigned T2CKR4:1;
      unsigned T2CKR5:1;
      unsigned T2CKR6:1;
      unsigned T2CKR7:1;
      unsigned T3CKR0:1;
      unsigned T3CKR1:1;
      unsigned T3CKR2:1;
      unsigned T3CKR3:1;
      unsigned T3CKR4:1;
      unsigned T3CKR5:1;
      unsigned T3CKR6:1;
      unsigned T3CKR7:1;
    };
  };
} RPINR3BITS;
extern volatile RPINR3BITS RPINR3bits __attribute__((__sfr__));

#define RPINR7 RPINR7
extern volatile unsigned int  RPINR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR7BITS {
  union {
    struct {
      unsigned IC1R:8;
    };
    struct {
      unsigned IC1R0:1;
      unsigned IC1R1:1;
      unsigned IC1R2:1;
      unsigned IC1R3:1;
      unsigned IC1R4:1;
      unsigned IC1R5:1;
      unsigned IC1R6:1;
      unsigned IC1R7:1;
    };
  };
} RPINR7BITS;
extern volatile RPINR7BITS RPINR7bits __attribute__((__sfr__));

#define RPINR12 RPINR12
extern volatile unsigned int  RPINR12 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR12BITS {
  union {
    struct {
      unsigned FLT1R:8;
      unsigned FLT2R:8;
    };
    struct {
      unsigned FLT1R0:1;
      unsigned FLT1R1:1;
      unsigned FLT1R2:1;
      unsigned FLT1R3:1;
      unsigned FLT1R4:1;
      unsigned FLT1R5:1;
      unsigned FLT1R6:1;
      unsigned FLT1R7:1;
      unsigned FLT2R0:1;
      unsigned FLT2R1:1;
      unsigned FLT2R2:1;
      unsigned FLT2R3:1;
      unsigned FLT2R4:1;
      unsigned FLT2R5:1;
      unsigned FLT2R6:1;
      unsigned FLT2R7:1;
    };
  };
} RPINR12BITS;
extern volatile RPINR12BITS RPINR12bits __attribute__((__sfr__));

#define RPINR13 RPINR13
extern volatile unsigned int  RPINR13 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR13BITS {
  union {
    struct {
      unsigned FLT3R:8;
      unsigned FLT4R:8;
    };
    struct {
      unsigned FLT3R0:1;
      unsigned FLT3R1:1;
      unsigned FLT3R2:1;
      unsigned FLT3R3:1;
      unsigned FLT3R4:1;
      unsigned FLT3R5:1;
      unsigned FLT3R6:1;
      unsigned FLT3R7:1;
      unsigned FLT4R0:1;
      unsigned FLT4R1:1;
      unsigned FLT4R2:1;
      unsigned FLT4R3:1;
      unsigned FLT4R4:1;
      unsigned FLT4R5:1;
      unsigned FLT4R6:1;
      unsigned FLT4R7:1;
    };
  };
} RPINR13BITS;
extern volatile RPINR13BITS RPINR13bits __attribute__((__sfr__));

#define RPINR18 RPINR18
extern volatile unsigned int  RPINR18 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR18BITS {
  union {
    struct {
      unsigned U1RXR:8;
      unsigned U1CTSR:8;
    };
    struct {
      unsigned U1RXR0:1;
      unsigned U1RXR1:1;
      unsigned U1RXR2:1;
      unsigned U1RXR3:1;
      unsigned U1RXR4:1;
      unsigned U1RXR5:1;
      unsigned U1RXR6:1;
      unsigned U1RXR7:1;
      unsigned U1CTSR0:1;
      unsigned U1CTSR1:1;
      unsigned U1CTSR2:1;
      unsigned U1CTSR3:1;
      unsigned U1CTSR4:1;
      unsigned U1CTSR5:1;
      unsigned U1CTSR6:1;
      unsigned U1CTSR7:1;
    };
  };
} RPINR18BITS;
extern volatile RPINR18BITS RPINR18bits __attribute__((__sfr__));

#define RPINR20 RPINR20
extern volatile unsigned int  RPINR20 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR20BITS {
  union {
    struct {
      unsigned SDI1R:8;
      unsigned SCK1INR:8;
    };
    struct {
      unsigned SDI1R0:1;
      unsigned SDI1R1:1;
      unsigned SDI1R2:1;
      unsigned SDI1R3:1;
      unsigned SDI1R4:1;
      unsigned SDI1R5:1;
      unsigned SDI1R6:1;
      unsigned SDI1R7:1;
      unsigned SCK1INR0:1;
      unsigned SCK1INR1:1;
      unsigned SCK1INR2:1;
      unsigned SCK1INR3:1;
      unsigned SCK1INR4:1;
      unsigned SCK1INR5:1;
      unsigned SCK1INR6:1;
      unsigned SCK1INR7:1;
    };
  };
} RPINR20BITS;
extern volatile RPINR20BITS RPINR20bits __attribute__((__sfr__));

#define RPINR21 RPINR21
extern volatile unsigned int  RPINR21 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR21BITS {
  union {
    struct {
      unsigned SS1R:8;
    };
    struct {
      unsigned SS1R0:1;
      unsigned SS1R1:1;
      unsigned SS1R2:1;
      unsigned SS1R3:1;
      unsigned SS1R4:1;
      unsigned SS1R5:1;
      unsigned SS1R6:1;
      unsigned SS1R7:1;
    };
  };
} RPINR21BITS;
extern volatile RPINR21BITS RPINR21bits __attribute__((__sfr__));

#define RPINR37 RPINR37
extern volatile unsigned int  RPINR37 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR37BITS {
  union {
    struct {
      unsigned :8;
      unsigned SYCI1R:8;
    };
    struct {
      unsigned :8;
      unsigned SYCI1R0:1;
      unsigned SYCI1R1:1;
      unsigned SYCI1R2:1;
      unsigned SYCI1R3:1;
      unsigned SYCI1R4:1;
      unsigned SYCI1R5:1;
      unsigned SYCI1R6:1;
      unsigned SYCI1R7:1;
    };
  };
} RPINR37BITS;
extern volatile RPINR37BITS RPINR37bits __attribute__((__sfr__));

#define RPINR38 RPINR38
extern volatile unsigned int  RPINR38 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR38BITS {
  union {
    struct {
      unsigned SYCI2R:8;
    };
    struct {
      unsigned SYCI2R0:1;
      unsigned SYCI2R1:1;
      unsigned SYCI2R2:1;
      unsigned SYCI2R3:1;
      unsigned SYCI2R4:1;
      unsigned SYCI2R5:1;
      unsigned SYCI2R6:1;
      unsigned SYCI2R7:1;
    };
  };
} RPINR38BITS;
extern volatile RPINR38BITS RPINR38bits __attribute__((__sfr__));

#define RPINR42 RPINR42
extern volatile unsigned int  RPINR42 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR42BITS {
  union {
    struct {
      unsigned FLT5R:8;
      unsigned FLT6R:8;
    };
    struct {
      unsigned FLT5R0:1;
      unsigned FLT5R1:1;
      unsigned FLT5R2:1;
      unsigned FLT5R3:1;
      unsigned FLT5R4:1;
      unsigned FLT5R5:1;
      unsigned FLT5R6:1;
      unsigned FLT5R7:1;
      unsigned FLT6R0:1;
      unsigned FLT6R1:1;
      unsigned FLT6R2:1;
      unsigned FLT6R3:1;
      unsigned FLT6R4:1;
      unsigned FLT6R5:1;
      unsigned FLT6R6:1;
      unsigned FLT6R7:1;
    };
  };
} RPINR42BITS;
extern volatile RPINR42BITS RPINR42bits __attribute__((__sfr__));

#define RPINR43 RPINR43
extern volatile unsigned int  RPINR43 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR43BITS {
  union {
    struct {
      unsigned FLT7R:8;
      unsigned FLT8R:8;
    };
    struct {
      unsigned FLT7R0:1;
      unsigned FLT7R1:1;
      unsigned FLT7R2:1;
      unsigned FLT7R3:1;
      unsigned FLT7R4:1;
      unsigned FLT7R5:1;
      unsigned FLT7R6:1;
      unsigned FLT7R7:1;
      unsigned FLT8R0:1;
      unsigned FLT8R1:1;
      unsigned FLT8R2:1;
      unsigned FLT8R3:1;
      unsigned FLT8R4:1;
      unsigned FLT8R5:1;
      unsigned FLT8R6:1;
      unsigned FLT8R7:1;
    };
  };
} RPINR43BITS;
extern volatile RPINR43BITS RPINR43bits __attribute__((__sfr__));

#define NVMCON NVMCON
extern volatile unsigned int  NVMCON __attribute__((__sfr__));
__extension__ typedef struct tagNVMCONBITS {
  union {
    struct {
      unsigned NVMOP:4;
      unsigned :4;
      unsigned URERR:1;
      unsigned RPDF:1;
      unsigned :2;
      unsigned NVMSIDL:1;
      unsigned WRERR:1;
      unsigned WREN:1;
      unsigned WR:1;
    };
    struct {
      unsigned NVMOP0:1;
      unsigned NVMOP1:1;
      unsigned NVMOP2:1;
      unsigned NVMOP3:1;
    };
  };
} NVMCONBITS;
extern volatile NVMCONBITS NVMCONbits __attribute__((__sfr__));

#define NVMADR NVMADR
extern volatile unsigned int  NVMADR __attribute__((__sfr__));
__extension__ typedef struct tagNVMADRBITS {
  union {
    struct {
      unsigned NVMADR:16;
    };
    struct {
      unsigned NVMADRL:16;
    };
  };
} NVMADRBITS;
extern volatile NVMADRBITS NVMADRbits __attribute__((__sfr__));

#define NVMADRL NVMADRL
extern volatile unsigned int  NVMADRL __attribute__((__sfr__));
__extension__ typedef struct tagNVMADRLBITS {
  union {
    struct {
      unsigned NVMADR:16;
    };
    struct {
      unsigned NVMADRL:16;
    };
  };
} NVMADRLBITS;
extern volatile NVMADRLBITS NVMADRLbits __attribute__((__sfr__));

#define NVMADRH NVMADRH
extern volatile unsigned int  NVMADRH __attribute__((__sfr__));
__extension__ typedef struct tagNVMADRHBITS {
  union {
    struct {
      unsigned NVMADRU:8;
    };
    struct {
      unsigned NVMADRH:8;
    };
  };
} NVMADRHBITS;
extern volatile NVMADRHBITS NVMADRHbits __attribute__((__sfr__));

#define NVMADRU NVMADRU
extern volatile unsigned int  NVMADRU __attribute__((__sfr__));
__extension__ typedef struct tagNVMADRUBITS {
  union {
    struct {
      unsigned NVMADRU:8;
    };
    struct {
      unsigned NVMADRH:8;
    };
  };
} NVMADRUBITS;
extern volatile NVMADRUBITS NVMADRUbits __attribute__((__sfr__));

#define NVMKEY NVMKEY
extern volatile unsigned int  NVMKEY __attribute__((__sfr__));
#define NVMSRCADRL NVMSRCADRL
extern volatile unsigned int  NVMSRCADRL __attribute__((__sfr__));
#define NVMSRCADRH NVMSRCADRH
extern volatile unsigned int  NVMSRCADRH __attribute__((__sfr__));
typedef struct tagNVMSRCADRHBITS {
  unsigned NVMSRCADRH:8;
} NVMSRCADRHBITS;
extern volatile NVMSRCADRHBITS NVMSRCADRHbits __attribute__((__sfr__));

#define RCON RCON
extern volatile unsigned int  RCON __attribute__((__sfr__));
typedef struct tagRCONBITS {
  unsigned POR:1;
  unsigned BOR:1;
  unsigned IDLE:1;
  unsigned SLEEP:1;
  unsigned WDTO:1;
  unsigned SWDTEN:1;
  unsigned SWR:1;
  unsigned EXTR:1;
  unsigned VREGS:1;
  unsigned CM:1;
  unsigned :1;
  unsigned VREGSF:1;
  unsigned :1;
  unsigned SBOREN:1;
  unsigned IOPUWR:1;
  unsigned TRAPR:1;
} RCONBITS;
extern volatile RCONBITS RCONbits __attribute__((__sfr__));

#define OSCCON OSCCON
extern volatile unsigned int  OSCCON __attribute__((__sfr__));
__extension__ typedef struct tagOSCCONBITS {
  union {
    struct {
      unsigned OSWEN:1;
      unsigned :2;
      unsigned CF:1;
      unsigned :1;
      unsigned LOCK:1;
      unsigned IOLOCK:1;
      unsigned CLKLOCK:1;
      unsigned NOSC:3;
      unsigned :1;
      unsigned COSC:3;
    };
    struct {
      unsigned :8;
      unsigned NOSC0:1;
      unsigned NOSC1:1;
      unsigned NOSC2:1;
      unsigned :1;
      unsigned COSC0:1;
      unsigned COSC1:1;
      unsigned COSC2:1;
    };
  };
} OSCCONBITS;
extern volatile OSCCONBITS OSCCONbits __attribute__((__sfr__));

#define OSCCONL OSCCONL
extern volatile unsigned char OSCCONL __attribute__((__sfr__));
#define OSCCONH OSCCONH
extern volatile unsigned char OSCCONH __attribute__((__sfr__));
#define CLKDIV CLKDIV
extern volatile unsigned int  CLKDIV __attribute__((__sfr__));
__extension__ typedef struct tagCLKDIVBITS {
  union {
    struct {
      unsigned PLLPRE:5;
      unsigned :1;
      unsigned PLLPOST:2;
      unsigned FRCDIV:3;
      unsigned DOZEN:1;
      unsigned DOZE:3;
      unsigned ROI:1;
    };
    struct {
      unsigned PLLPRE0:1;
      unsigned PLLPRE1:1;
      unsigned PLLPRE2:1;
      unsigned PLLPRE3:1;
      unsigned PLLPRE4:1;
      unsigned :1;
      unsigned PLLPOST0:1;
      unsigned PLLPOST1:1;
      unsigned FRCDIV0:1;
      unsigned FRCDIV1:1;
      unsigned FRCDIV2:1;
      unsigned :1;
      unsigned DOZE0:1;
      unsigned DOZE1:1;
      unsigned DOZE2:1;
    };
  };
} CLKDIVBITS;
extern volatile CLKDIVBITS CLKDIVbits __attribute__((__sfr__));

#define PLLFBD PLLFBD
extern volatile unsigned int  PLLFBD __attribute__((__sfr__));
__extension__ typedef struct tagPLLFBDBITS {
  union {
    struct {
      unsigned PLLDIV:9;
    };
    struct {
      unsigned PLLDIV0:1;
      unsigned PLLDIV1:1;
      unsigned PLLDIV2:1;
      unsigned PLLDIV3:1;
      unsigned PLLDIV4:1;
      unsigned PLLDIV5:1;
      unsigned PLLDIV6:1;
      unsigned PLLDIV7:1;
      unsigned PLLDIV8:1;
    };
  };
} PLLFBDBITS;
extern volatile PLLFBDBITS PLLFBDbits __attribute__((__sfr__));

#define OSCTUN OSCTUN
extern volatile unsigned int  OSCTUN __attribute__((__sfr__));
__extension__ typedef struct tagOSCTUNBITS {
  union {
    struct {
      unsigned TUN:6;
    };
    struct {
      unsigned TUN0:1;
      unsigned TUN1:1;
      unsigned TUN2:1;
      unsigned TUN3:1;
      unsigned TUN4:1;
      unsigned TUN5:1;
    };
  };
} OSCTUNBITS;
extern volatile OSCTUNBITS OSCTUNbits __attribute__((__sfr__));

#define LFSR LFSR
extern volatile unsigned int  LFSR __attribute__((__sfr__));
typedef struct tagLFSRBITS {
  unsigned LFSR:15;
} LFSRBITS;
extern volatile LFSRBITS LFSRbits __attribute__((__sfr__));

#define ACLKCON ACLKCON
extern volatile unsigned int  ACLKCON __attribute__((__sfr__));
__extension__ typedef struct tagACLKCONBITS {
  union {
    struct {
      unsigned :6;
      unsigned FRCSEL:1;
      unsigned ASRCSEL:1;
      unsigned APSTSCLR:3;
      unsigned :2;
      unsigned SELACLK:1;
      unsigned APLLCK:1;
      unsigned ENAPLL:1;
    };
    struct {
      unsigned :8;
      unsigned APSTSCLR0:1;
      unsigned APSTSCLR1:1;
      unsigned APSTSCLR2:1;
    };
  };
} ACLKCONBITS;
extern volatile ACLKCONBITS ACLKCONbits __attribute__((__sfr__));

#define PMD1 PMD1
extern volatile unsigned int  PMD1 __attribute__((__sfr__));
typedef struct tagPMD1BITS {
  unsigned ADCMD:1;
  unsigned :2;
  unsigned SPI1MD:1;
  unsigned :1;
  unsigned U1MD:1;
  unsigned :1;
  unsigned I2C1MD:1;
  unsigned :1;
  unsigned PWMMD:1;
  unsigned :1;
  unsigned T1MD:1;
  unsigned T2MD:1;
  unsigned T3MD:1;
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

#define PMD2 PMD2
extern volatile unsigned int  PMD2 __attribute__((__sfr__));
typedef struct tagPMD2BITS {
  unsigned OC1MD:1;
  unsigned :7;
  unsigned IC1MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile unsigned int  PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  unsigned :10;
  unsigned CMPMD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD6 PMD6
extern volatile unsigned int  PMD6 __attribute__((__sfr__));
typedef struct tagPMD6BITS {
  unsigned :8;
  unsigned PWM1MD:1;
  unsigned PWM2MD:1;
  unsigned PWM3MD:1;
} PMD6BITS;
extern volatile PMD6BITS PMD6bits __attribute__((__sfr__));

#define PMD7 PMD7
extern volatile unsigned int  PMD7 __attribute__((__sfr__));
typedef struct tagPMD7BITS {
  unsigned :1;
  unsigned PGA1MD:1;
  unsigned :6;
  unsigned CMP1MD:1;
  unsigned CMP2MD:1;
} PMD7BITS;
extern volatile PMD7BITS PMD7bits __attribute__((__sfr__));

#define PMD8 PMD8
extern volatile unsigned int  PMD8 __attribute__((__sfr__));
typedef struct tagPMD8BITS {
  unsigned :10;
  unsigned PGA2MD:1;
} PMD8BITS;
extern volatile PMD8BITS PMD8bits __attribute__((__sfr__));

#define IFS0 IFS0
extern volatile unsigned int  IFS0 __attribute__((__sfr__));
typedef struct tagIFS0BITS {
  unsigned INT0IF:1;
  unsigned IC1IF:1;
  unsigned OC1IF:1;
  unsigned T1IF:1;
  unsigned :3;
  unsigned T2IF:1;
  unsigned T3IF:1;
  unsigned SPI1EIF:1;
  unsigned SPI1IF:1;
  unsigned U1RXIF:1;
  unsigned U1TXIF:1;
  unsigned ADCIF:1;
  unsigned :1;
  unsigned NVMIF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile unsigned int  IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  unsigned SI2C1IF:1;
  unsigned MI2C1IF:1;
  unsigned AC1IF:1;
  unsigned CNIF:1;
  unsigned INT1IF:1;
  unsigned :8;
  unsigned INT2IF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile unsigned int  IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  unsigned :6;
  unsigned INT4IF:1;
  unsigned :2;
  unsigned PSEMIF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile unsigned int  IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  unsigned :1;
  unsigned U1EIF:1;
  unsigned :7;
  unsigned PSESIF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

#define IFS5 IFS5
extern volatile unsigned int  IFS5 __attribute__((__sfr__));
typedef struct tagIFS5BITS {
  unsigned :14;
  unsigned PWM1IF:1;
  unsigned PWM2IF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

#define IFS6 IFS6
extern volatile unsigned int  IFS6 __attribute__((__sfr__));
typedef struct tagIFS6BITS {
  unsigned PWM3IF:1;
  unsigned :6;
  unsigned AC2IF:1;
  unsigned :6;
  unsigned ADCAN0IF:1;
  unsigned ADCAN1IF:1;
} IFS6BITS;
extern volatile IFS6BITS IFS6bits __attribute__((__sfr__));

#define IFS7 IFS7
extern volatile unsigned int  IFS7 __attribute__((__sfr__));
typedef struct tagIFS7BITS {
  unsigned ADCAN2IF:1;
  unsigned ADCAN3IF:1;
  unsigned ADCAN4IF:1;
  unsigned ADCAN5IF:1;
  unsigned ADCAN6IF:1;
  unsigned ADCAN7IF:1;
} IFS7BITS;
extern volatile IFS7BITS IFS7bits __attribute__((__sfr__));

#define IFS8 IFS8
extern volatile unsigned int  IFS8 __attribute__((__sfr__));
#define IFS9 IFS9
extern volatile unsigned int  IFS9 __attribute__((__sfr__));
typedef struct tagIFS9BITS {
  unsigned :7;
  unsigned ADCAN8IF:1;
  unsigned ADCAN9IF:1;
  unsigned ADCAN10IF:1;
  unsigned ADCAN11IF:1;
  unsigned ADCAN12IF:1;
  unsigned ADCAN13IF:1;
  unsigned ADCAN14IF:1;
} IFS9BITS;
extern volatile IFS9BITS IFS9bits __attribute__((__sfr__));

#define IFS10 IFS10
extern volatile unsigned int  IFS10 __attribute__((__sfr__));
typedef struct tagIFS10BITS {
  unsigned :13;
  unsigned I2C1BCIF:1;
} IFS10BITS;
extern volatile IFS10BITS IFS10bits __attribute__((__sfr__));

#define IFS11 IFS11
extern volatile unsigned int  IFS11 __attribute__((__sfr__));
typedef struct tagIFS11BITS {
  unsigned ADCFLTIF:1;
  unsigned ADCMP1IF:1;
  unsigned ADCMP2IF:1;
  unsigned ADCFLTR1IF:1;
  unsigned :7;
  unsigned ADCC0EIF:1;
  unsigned ADCC1EIF:1;
} IFS11BITS;
extern volatile IFS11BITS IFS11bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile unsigned int  IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  unsigned INT0IE:1;
  unsigned IC1IE:1;
  unsigned OC1IE:1;
  unsigned T1IE:1;
  unsigned :3;
  unsigned T2IE:1;
  unsigned T3IE:1;
  unsigned SPI1EIE:1;
  unsigned SPI1IE:1;
  unsigned U1RXIE:1;
  unsigned U1TXIE:1;
  unsigned ADCIE:1;
  unsigned :1;
  unsigned NVMIE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile unsigned int  IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  unsigned SI2C1IE:1;
  unsigned MI2C1IE:1;
  unsigned AC1IE:1;
  unsigned CNIE:1;
  unsigned INT1IE:1;
  unsigned :8;
  unsigned INT2IE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile unsigned int  IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  unsigned :6;
  unsigned INT4IE:1;
  unsigned :2;
  unsigned PSEMIE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile unsigned int  IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  unsigned :1;
  unsigned U1EIE:1;
  unsigned :7;
  unsigned PSESIE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

#define IEC5 IEC5
extern volatile unsigned int  IEC5 __attribute__((__sfr__));
typedef struct tagIEC5BITS {
  unsigned :14;
  unsigned PWM1IE:1;
  unsigned PWM2IE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

#define IEC6 IEC6
extern volatile unsigned int  IEC6 __attribute__((__sfr__));
typedef struct tagIEC6BITS {
  unsigned PWM3IE:1;
  unsigned :6;
  unsigned AC2IE:1;
  unsigned :6;
  unsigned ADCAN0IE:1;
  unsigned ADCAN1IE:1;
} IEC6BITS;
extern volatile IEC6BITS IEC6bits __attribute__((__sfr__));

#define IEC7 IEC7
extern volatile unsigned int  IEC7 __attribute__((__sfr__));
typedef struct tagIEC7BITS {
  unsigned ADCAN2IE:1;
  unsigned ADCAN3IE:1;
  unsigned ADCAN4IE:1;
  unsigned ADCAN5IE:1;
  unsigned ADCAN6IE:1;
  unsigned ADCAN7IE:1;
} IEC7BITS;
extern volatile IEC7BITS IEC7bits __attribute__((__sfr__));

#define IEC9 IEC9
extern volatile unsigned int  IEC9 __attribute__((__sfr__));
typedef struct tagIEC9BITS {
  unsigned :7;
  unsigned ADCAN8IE:1;
  unsigned ADCAN9IE:1;
  unsigned ADCAN10IE:1;
  unsigned ADCAN11IE:1;
  unsigned ADCAN12IE:1;
  unsigned ADCAN13IE:1;
  unsigned ADCAN14IE:1;
} IEC9BITS;
extern volatile IEC9BITS IEC9bits __attribute__((__sfr__));

#define IEC10 IEC10
extern volatile unsigned int  IEC10 __attribute__((__sfr__));
typedef struct tagIEC10BITS {
  unsigned :13;
  unsigned I2C1BCIE:1;
} IEC10BITS;
extern volatile IEC10BITS IEC10bits __attribute__((__sfr__));

#define IEC11 IEC11
extern volatile unsigned int  IEC11 __attribute__((__sfr__));
typedef struct tagIEC11BITS {
  unsigned ADCFLTIE:1;
  unsigned ADCMP1IE:1;
  unsigned ADCMP2IE:1;
  unsigned ADCFLTR1IE:1;
  unsigned :7;
  unsigned ADCC0EIE:1;
  unsigned ADCC1EIE:1;
} IEC11BITS;
extern volatile IEC11BITS IEC11bits __attribute__((__sfr__));

#define IPC0 IPC0
extern volatile unsigned int  IPC0 __attribute__((__sfr__));
__extension__ typedef struct tagIPC0BITS {
  union {
    struct {
      unsigned INT0IP:3;
      unsigned :1;
      unsigned IC1IP:3;
      unsigned :1;
      unsigned OC1IP:3;
      unsigned :1;
      unsigned T1IP:3;
    };
    struct {
      unsigned INT0IP0:1;
      unsigned INT0IP1:1;
      unsigned INT0IP2:1;
      unsigned :1;
      unsigned IC1IP0:1;
      unsigned IC1IP1:1;
      unsigned IC1IP2:1;
      unsigned :1;
      unsigned OC1IP0:1;
      unsigned OC1IP1:1;
      unsigned OC1IP2:1;
      unsigned :1;
      unsigned T1IP0:1;
      unsigned T1IP1:1;
      unsigned T1IP2:1;
    };
  };
} IPC0BITS;
extern volatile IPC0BITS IPC0bits __attribute__((__sfr__));

#define IPC1 IPC1
extern volatile unsigned int  IPC1 __attribute__((__sfr__));
__extension__ typedef struct tagIPC1BITS {
  union {
    struct {
      unsigned :12;
      unsigned T2IP:3;
    };
    struct {
      unsigned :12;
      unsigned T2IP0:1;
      unsigned T2IP1:1;
      unsigned T2IP2:1;
    };
  };
} IPC1BITS;
extern volatile IPC1BITS IPC1bits __attribute__((__sfr__));

#define IPC2 IPC2
extern volatile unsigned int  IPC2 __attribute__((__sfr__));
__extension__ typedef struct tagIPC2BITS {
  union {
    struct {
      unsigned T3IP:3;
      unsigned :1;
      unsigned SPI1EIP:3;
      unsigned :1;
      unsigned SPI1IP:3;
      unsigned :1;
      unsigned U1RXIP:3;
    };
    struct {
      unsigned T3IP0:1;
      unsigned T3IP1:1;
      unsigned T3IP2:1;
      unsigned :1;
      unsigned SPI1EIP0:1;
      unsigned SPI1EIP1:1;
      unsigned SPI1EIP2:1;
      unsigned :1;
      unsigned SPI1IP0:1;
      unsigned SPI1IP1:1;
      unsigned SPI1IP2:1;
      unsigned :1;
      unsigned U1RXIP0:1;
      unsigned U1RXIP1:1;
      unsigned U1RXIP2:1;
    };
  };
} IPC2BITS;
extern volatile IPC2BITS IPC2bits __attribute__((__sfr__));

#define IPC3 IPC3
extern volatile unsigned int  IPC3 __attribute__((__sfr__));
__extension__ typedef struct tagIPC3BITS {
  union {
    struct {
      unsigned U1TXIP:3;
      unsigned :1;
      unsigned ADCIP:3;
      unsigned :5;
      unsigned NVMIP:3;
    };
    struct {
      unsigned U1TXIP0:1;
      unsigned U1TXIP1:1;
      unsigned U1TXIP2:1;
      unsigned :1;
      unsigned ADCIP0:1;
      unsigned ADCIP1:1;
      unsigned ADCIP2:1;
      unsigned :5;
      unsigned NVMIP0:1;
      unsigned NVMIP1:1;
      unsigned NVMIP2:1;
    };
  };
} IPC3BITS;
extern volatile IPC3BITS IPC3bits __attribute__((__sfr__));

#define IPC4 IPC4
extern volatile unsigned int  IPC4 __attribute__((__sfr__));
__extension__ typedef struct tagIPC4BITS {
  union {
    struct {
      unsigned SI2C1IP:3;
      unsigned :1;
      unsigned MI2C1IP:3;
      unsigned :1;
      unsigned AC1IP:3;
      unsigned :1;
      unsigned CNIP:3;
    };
    struct {
      unsigned SI2C1IP0:1;
      unsigned SI2C1IP1:1;
      unsigned SI2C1IP2:1;
      unsigned :1;
      unsigned MI2C1IP0:1;
      unsigned MI2C1IP1:1;
      unsigned MI2C1IP2:1;
      unsigned :1;
      unsigned AC1IP0:1;
      unsigned AC1IP1:1;
      unsigned AC1IP2:1;
      unsigned :1;
      unsigned CNIP0:1;
      unsigned CNIP1:1;
      unsigned CNIP2:1;
    };
  };
} IPC4BITS;
extern volatile IPC4BITS IPC4bits __attribute__((__sfr__));

#define IPC5 IPC5
extern volatile unsigned int  IPC5 __attribute__((__sfr__));
__extension__ typedef struct tagIPC5BITS {
  union {
    struct {
      unsigned INT1IP:3;
    };
    struct {
      unsigned INT1IP0:1;
      unsigned INT1IP1:1;
      unsigned INT1IP2:1;
    };
  };
} IPC5BITS;
extern volatile IPC5BITS IPC5bits __attribute__((__sfr__));

#define IPC7 IPC7
extern volatile unsigned int  IPC7 __attribute__((__sfr__));
__extension__ typedef struct tagIPC7BITS {
  union {
    struct {
      unsigned :4;
      unsigned INT2IP:3;
    };
    struct {
      unsigned :4;
      unsigned INT2IP0:1;
      unsigned INT2IP1:1;
      unsigned INT2IP2:1;
    };
  };
} IPC7BITS;
extern volatile IPC7BITS IPC7bits __attribute__((__sfr__));

#define IPC13 IPC13
extern volatile unsigned int  IPC13 __attribute__((__sfr__));
__extension__ typedef struct tagIPC13BITS {
  union {
    struct {
      unsigned :8;
      unsigned INT4IP:3;
    };
    struct {
      unsigned :8;
      unsigned INT4IP0:1;
      unsigned INT4IP1:1;
      unsigned INT4IP2:1;
    };
  };
} IPC13BITS;
extern volatile IPC13BITS IPC13bits __attribute__((__sfr__));

#define IPC14 IPC14
extern volatile unsigned int  IPC14 __attribute__((__sfr__));
__extension__ typedef struct tagIPC14BITS {
  union {
    struct {
      unsigned :4;
      unsigned PSEMIP:3;
    };
    struct {
      unsigned :4;
      unsigned PSEMIP0:1;
      unsigned PSEMIP1:1;
      unsigned PSEMIP2:1;
    };
  };
} IPC14BITS;
extern volatile IPC14BITS IPC14bits __attribute__((__sfr__));

#define IPC16 IPC16
extern volatile unsigned int  IPC16 __attribute__((__sfr__));
__extension__ typedef struct tagIPC16BITS {
  union {
    struct {
      unsigned :4;
      unsigned U1EIP:3;
    };
    struct {
      unsigned :4;
      unsigned U1EIP0:1;
      unsigned U1EIP1:1;
      unsigned U1EIP2:1;
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

#define IPC18 IPC18
extern volatile unsigned int  IPC18 __attribute__((__sfr__));
__extension__ typedef struct tagIPC18BITS {
  union {
    struct {
      unsigned :4;
      unsigned PSESIP:3;
    };
    struct {
      unsigned :4;
      unsigned PSESIP0:1;
      unsigned PSESIP1:1;
      unsigned PSESIP2:1;
    };
  };
} IPC18BITS;
extern volatile IPC18BITS IPC18bits __attribute__((__sfr__));

#define IPC23 IPC23
extern volatile unsigned int  IPC23 __attribute__((__sfr__));
__extension__ typedef struct tagIPC23BITS {
  union {
    struct {
      unsigned :8;
      unsigned PWM1IP:3;
      unsigned :1;
      unsigned PWM2IP:3;
    };
    struct {
      unsigned :8;
      unsigned PWM1IP0:1;
      unsigned PWM1IP1:1;
      unsigned PWM1IP2:1;
      unsigned :1;
      unsigned PWM2IP0:1;
      unsigned PWM2IP1:1;
      unsigned PWM2IP2:1;
    };
  };
} IPC23BITS;
extern volatile IPC23BITS IPC23bits __attribute__((__sfr__));

#define IPC24 IPC24
extern volatile unsigned int  IPC24 __attribute__((__sfr__));
__extension__ typedef struct tagIPC24BITS {
  union {
    struct {
      unsigned PWM3IP:3;
    };
    struct {
      unsigned PWM3IP0:1;
      unsigned PWM3IP1:1;
      unsigned PWM3IP2:1;
    };
  };
} IPC24BITS;
extern volatile IPC24BITS IPC24bits __attribute__((__sfr__));

#define IPC25 IPC25
extern volatile unsigned int  IPC25 __attribute__((__sfr__));
__extension__ typedef struct tagIPC25BITS {
  union {
    struct {
      unsigned :12;
      unsigned AC2IP:3;
    };
    struct {
      unsigned :12;
      unsigned AC2IP0:1;
      unsigned AC2IP1:1;
      unsigned AC2IP2:1;
    };
  };
} IPC25BITS;
extern volatile IPC25BITS IPC25bits __attribute__((__sfr__));

#define IPC27 IPC27
extern volatile unsigned int  IPC27 __attribute__((__sfr__));
__extension__ typedef struct tagIPC27BITS {
  union {
    struct {
      unsigned :8;
      unsigned ADCAN0IP:3;
      unsigned :1;
      unsigned ADCAN1IP:3;
    };
    struct {
      unsigned :8;
      unsigned ADCAN0IP0:1;
      unsigned ADCAN0IP1:1;
      unsigned ADCAN0IP2:1;
      unsigned :1;
      unsigned ADCAN1IP0:1;
      unsigned ADCAN1IP1:1;
      unsigned ADCAN1IP2:1;
    };
  };
} IPC27BITS;
extern volatile IPC27BITS IPC27bits __attribute__((__sfr__));

#define IPC28 IPC28
extern volatile unsigned int  IPC28 __attribute__((__sfr__));
__extension__ typedef struct tagIPC28BITS {
  union {
    struct {
      unsigned ADCAN2IP:3;
      unsigned :1;
      unsigned ADCAN3IP:3;
      unsigned :1;
      unsigned ADCAN4IP:3;
      unsigned :1;
      unsigned ADCAN5IP:3;
    };
    struct {
      unsigned ADCAN2IP0:1;
      unsigned ADCAN2IP1:1;
      unsigned ADCAN2IP2:1;
      unsigned :1;
      unsigned ADCAN3IP0:1;
      unsigned ADCAN3IP1:1;
      unsigned ADCAN3IP2:1;
      unsigned :1;
      unsigned ADCAN4IP0:1;
      unsigned ADCAN4IP1:1;
      unsigned ADCAN4IP2:1;
      unsigned :1;
      unsigned ADCAN5IP0:1;
      unsigned ADCAN5IP1:1;
      unsigned ADCAN5IP2:1;
    };
  };
} IPC28BITS;
extern volatile IPC28BITS IPC28bits __attribute__((__sfr__));

#define IPC29 IPC29
extern volatile unsigned int  IPC29 __attribute__((__sfr__));
__extension__ typedef struct tagIPC29BITS {
  union {
    struct {
      unsigned ADCAN6IP:3;
      unsigned :1;
      unsigned ADCAN7IP:3;
    };
    struct {
      unsigned ADCAN6IP0:1;
      unsigned ADCAN6IP1:1;
      unsigned ADCAN6IP2:1;
      unsigned :1;
      unsigned ADCAN7IP0:1;
      unsigned ADCAN7IP1:1;
      unsigned ADCAN7IP2:1;
    };
  };
} IPC29BITS;
extern volatile IPC29BITS IPC29bits __attribute__((__sfr__));

#define IPC37 IPC37
extern volatile unsigned int  IPC37 __attribute__((__sfr__));
__extension__ typedef struct tagIPC37BITS {
  union {
    struct {
      unsigned :12;
      unsigned ADCAN8IP:3;
    };
    struct {
      unsigned :12;
      unsigned ADCAN8IP0:1;
      unsigned ADCAN8IP1:1;
      unsigned ADCAN8IP2:1;
    };
  };
} IPC37BITS;
extern volatile IPC37BITS IPC37bits __attribute__((__sfr__));

#define IPC38 IPC38
extern volatile unsigned int  IPC38 __attribute__((__sfr__));
__extension__ typedef struct tagIPC38BITS {
  union {
    struct {
      unsigned ADCAN9IP:3;
      unsigned :1;
      unsigned ADCAN10IP:3;
      unsigned :1;
      unsigned ADCAN11IP:3;
      unsigned :1;
      unsigned ADCAN12IP:3;
    };
    struct {
      unsigned ADCAN9IP0:1;
      unsigned ADCAN9IP1:1;
      unsigned ADCAN9IP2:1;
      unsigned :1;
      unsigned ADCAN10IP0:1;
      unsigned ADCAN10IP1:1;
      unsigned ADCAN10IP2:1;
      unsigned :1;
      unsigned ADCAN11IP0:1;
      unsigned ADCAN11IP1:1;
      unsigned ADCAN11IP2:1;
      unsigned :1;
      unsigned ADCAN12IP0:1;
      unsigned ADCAN12IP1:1;
      unsigned ADCAN12IP2:1;
    };
  };
} IPC38BITS;
extern volatile IPC38BITS IPC38bits __attribute__((__sfr__));

#define IPC39 IPC39
extern volatile unsigned int  IPC39 __attribute__((__sfr__));
__extension__ typedef struct tagIPC39BITS {
  union {
    struct {
      unsigned ADCAN13IP:3;
      unsigned :1;
      unsigned ADCAN14IP:3;
    };
    struct {
      unsigned ADCAN13IP0:1;
      unsigned ADCAN13IP1:1;
      unsigned ADCAN13IP2:1;
      unsigned :1;
      unsigned ADCAN14IP0:1;
      unsigned ADCAN14IP1:1;
      unsigned ADCAN14IP2:1;
    };
  };
} IPC39BITS;
extern volatile IPC39BITS IPC39bits __attribute__((__sfr__));

#define IPC43 IPC43
extern volatile unsigned int  IPC43 __attribute__((__sfr__));
__extension__ typedef struct tagIPC43BITS {
  union {
    struct {
      unsigned :4;
      unsigned I2C1BCIP:3;
    };
    struct {
      unsigned :4;
      unsigned I2C1BCIP0:1;
      unsigned I2C1BCIP1:1;
      unsigned I2C1BCIP2:1;
    };
  };
} IPC43BITS;
extern volatile IPC43BITS IPC43bits __attribute__((__sfr__));

#define IPC44 IPC44
extern volatile unsigned int  IPC44 __attribute__((__sfr__));
__extension__ typedef struct tagIPC44BITS {
  union {
    struct {
      unsigned ADCFLTIP:3;
      unsigned :1;
      unsigned ADCMP1IP:3;
      unsigned :1;
      unsigned ADCMP2IP:3;
      unsigned :1;
      unsigned ADCFLTR1IP:3;
    };
    struct {
      unsigned ADCFLTIP0:1;
      unsigned ADCFLTIP1:1;
      unsigned ADCFLTIP2:1;
      unsigned :1;
      unsigned ADCMP1IP0:1;
      unsigned ADCMP1IP1:1;
      unsigned ADCMP1IP2:1;
      unsigned :1;
      unsigned ADCMP2IP0:1;
      unsigned ADCMP2IP1:1;
      unsigned ADCMP2IP2:1;
      unsigned :1;
      unsigned ADCFLTR1IP0:1;
      unsigned ADCFLTR1IP1:1;
      unsigned ADCFLTR1IP2:1;
    };
  };
} IPC44BITS;
extern volatile IPC44BITS IPC44bits __attribute__((__sfr__));

#define IPC46 IPC46
extern volatile unsigned int  IPC46 __attribute__((__sfr__));
__extension__ typedef struct tagIPC46BITS {
  union {
    struct {
      unsigned :12;
      unsigned ADCC0EIP:3;
    };
    struct {
      unsigned :12;
      unsigned ADCC0EIP0:1;
      unsigned ADCC0EIP1:1;
      unsigned ADCC0EIP2:1;
    };
  };
} IPC46BITS;
extern volatile IPC46BITS IPC46bits __attribute__((__sfr__));

#define IPC47 IPC47
extern volatile unsigned int  IPC47 __attribute__((__sfr__));
__extension__ typedef struct tagIPC47BITS {
  union {
    struct {
      unsigned ADCC1EIP:3;
    };
    struct {
      unsigned ADCC1EIP0:1;
      unsigned ADCC1EIP1:1;
      unsigned ADCC1EIP2:1;
    };
  };
} IPC47BITS;
extern volatile IPC47BITS IPC47bits __attribute__((__sfr__));

#define INTCON1 INTCON1
extern volatile unsigned int  INTCON1 __attribute__((__sfr__));
typedef struct tagINTCON1BITS {
  unsigned :1;
  unsigned OSCFAIL:1;
  unsigned STKERR:1;
  unsigned ADDRERR:1;
  unsigned MATHERR:1;
  unsigned :1;
  unsigned DIV0ERR:1;
  unsigned SFTACERR:1;
  unsigned COVTE:1;
  unsigned OVBTE:1;
  unsigned OVATE:1;
  unsigned COVBERR:1;
  unsigned COVAERR:1;
  unsigned OVBERR:1;
  unsigned OVAERR:1;
  unsigned NSTDIS:1;
} INTCON1BITS;
extern volatile INTCON1BITS INTCON1bits __attribute__((__sfr__));

#define INTCON2 INTCON2
extern volatile unsigned int  INTCON2 __attribute__((__sfr__));
typedef struct tagINTCON2BITS {
  unsigned INT0EP:1;
  unsigned INT1EP:1;
  unsigned INT2EP:1;
  unsigned :1;
  unsigned INT4EP:1;
  unsigned :3;
  unsigned AIVTEN:1;
  unsigned :4;
  unsigned SWTRAP:1;
  unsigned DISI:1;
  unsigned GIE:1;
} INTCON2BITS;
extern volatile INTCON2BITS INTCON2bits __attribute__((__sfr__));

#define INTCON3 INTCON3
extern volatile unsigned int  INTCON3 __attribute__((__sfr__));
typedef struct tagINTCON3BITS {
  unsigned APLL:1;
  unsigned :3;
  unsigned DOOVR:1;
  unsigned :3;
  unsigned NAE:1;
} INTCON3BITS;
extern volatile INTCON3BITS INTCON3bits __attribute__((__sfr__));

#define INTCON4 INTCON4
extern volatile unsigned int  INTCON4 __attribute__((__sfr__));
typedef struct tagINTCON4BITS {
  unsigned SGHT:1;
} INTCON4BITS;
extern volatile INTCON4BITS INTCON4bits __attribute__((__sfr__));

#define INTTREG INTTREG
extern volatile unsigned int  INTTREG __attribute__((__sfr__));
__extension__ typedef struct tagINTTREGBITS {
  union {
    struct {
      unsigned VECNUM:8;
      unsigned ILR:4;
    };
    struct {
      unsigned VECNUM0:1;
      unsigned VECNUM1:1;
      unsigned VECNUM2:1;
      unsigned VECNUM3:1;
      unsigned VECNUM4:1;
      unsigned VECNUM5:1;
      unsigned VECNUM6:1;
      unsigned VECNUM7:1;
      unsigned ILR0:1;
      unsigned ILR1:1;
      unsigned ILR2:1;
      unsigned ILR3:1;
    };
  };
} INTTREGBITS;
extern volatile INTTREGBITS INTTREGbits __attribute__((__sfr__));

#define OC1CON1 OC1CON1
extern volatile unsigned int  OC1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC1CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLTA:1;
      unsigned :2;
      unsigned ENFLTA:1;
      unsigned :2;
      unsigned OCTSEL:3;
      unsigned OCSIDL:1;
    };
    struct {
      unsigned OCM0:1;
      unsigned OCM1:1;
      unsigned OCM2:1;
      unsigned :1;
      unsigned OCFLT:3;
      unsigned ENFLT:3;
      unsigned OCTSEL0:1;
      unsigned OCTSEL1:1;
      unsigned OCTSEL2:1;
    };
    struct {
      unsigned :4;
      unsigned OCFLT0:1;
      unsigned :2;
      unsigned ENFLT0:1;
    };
  };
} OC1CON1BITS;
extern volatile OC1CON1BITS OC1CON1bits __attribute__((__sfr__));

#define OC1CON2 OC1CON2
extern volatile unsigned int  OC1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC1CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned OCTRIS:1;
      unsigned TRIGSTAT:1;
      unsigned OCTRIG:1;
      unsigned OC32:1;
      unsigned :3;
      unsigned OCINV:1;
      unsigned FLTTRIEN:1;
      unsigned FLTOUT:1;
      unsigned FLTMD:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
      unsigned :9;
      unsigned FLTMODE:1;
    };
  };
} OC1CON2BITS;
extern volatile OC1CON2BITS OC1CON2bits __attribute__((__sfr__));


/* Generic structure of entire SFR area for Output Compare modules */
typedef struct tagOC {
        unsigned int ocxrs;
        unsigned int ocxr;
        unsigned int ocxcon;
} OC, *POC;

/* SFR blocks for Output Compare modules */
#define OC1 OC1
extern volatile OC OC1 __attribute__((__sfr__));
#define OC2 OC2
extern volatile OC OC2 __attribute__((__sfr__));
#define OC3 OC3
extern volatile OC OC3 __attribute__((__sfr__));
#define OC4 OC4
extern volatile OC OC4 __attribute__((__sfr__));
#define OC5 OC5
extern volatile OC OC5 __attribute__((__sfr__));
#define OC6 OC6
extern volatile OC OC6 __attribute__((__sfr__));
#define OC7 OC7
extern volatile OC OC7 __attribute__((__sfr__));
#define OC8 OC8
extern volatile OC OC8 __attribute__((__sfr__));

#define OC1RS OC1RS
extern volatile unsigned int  OC1RS __attribute__((__sfr__));
#define OC1R OC1R
extern volatile unsigned int  OC1R __attribute__((__sfr__));
#define OC1TMR OC1TMR
extern volatile unsigned int  OC1TMR __attribute__((__sfr__));
#define PTCON PTCON
extern volatile unsigned int  PTCON __attribute__((__sfr__));
__extension__ typedef struct tagPTCONBITS {
  union {
    struct {
      unsigned SEVTPS:4;
      unsigned SYNCSRC:3;
      unsigned SYNCEN:1;
      unsigned SYNCOEN:1;
      unsigned SYNCPOL:1;
      unsigned EIPU:1;
      unsigned SEIEN:1;
      unsigned SESTAT:1;
      unsigned PTSIDL:1;
      unsigned :1;
      unsigned PTEN:1;
    };
    struct {
      unsigned SEVTPS0:1;
      unsigned SEVTPS1:1;
      unsigned SEVTPS2:1;
      unsigned SEVTPS3:1;
      unsigned SYNCSRC0:1;
      unsigned SYNCSRC1:1;
      unsigned SYNCSRC2:1;
    };
  };
} PTCONBITS;
extern volatile PTCONBITS PTCONbits __attribute__((__sfr__));

#define PTCON2 PTCON2
extern volatile unsigned int  PTCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPTCON2BITS {
  union {
    struct {
      unsigned PCLKDIV:3;
    };
    struct {
      unsigned PCLKDIV0:1;
      unsigned PCLKDIV1:1;
      unsigned PCLKDIV2:1;
    };
  };
} PTCON2BITS;
extern volatile PTCON2BITS PTCON2bits __attribute__((__sfr__));

#define PTPER PTPER
extern volatile unsigned int  PTPER __attribute__((__sfr__));
#define SEVTCMP SEVTCMP
extern volatile unsigned int  SEVTCMP __attribute__((__sfr__));
typedef struct tagSEVTCMPBITS {
  unsigned :3;
  unsigned SEVTCMP:13;
} SEVTCMPBITS;
extern volatile SEVTCMPBITS SEVTCMPbits __attribute__((__sfr__));

#define MDC MDC
extern volatile unsigned int  MDC __attribute__((__sfr__));
#define STCON STCON
extern volatile unsigned int  STCON __attribute__((__sfr__));
__extension__ typedef struct tagSTCONBITS {
  union {
    struct {
      unsigned SEVTPS:4;
      unsigned SYNCSRC:3;
      unsigned SYNCEN:1;
      unsigned SYNCOEN:1;
      unsigned SYNCPOL:1;
      unsigned EIPU:1;
      unsigned SEIEN:1;
      unsigned SESTAT:1;
    };
    struct {
      unsigned SEVTPS0:1;
      unsigned SEVTPS1:1;
      unsigned SEVTPS2:1;
      unsigned SEVTPS3:1;
      unsigned SYNCSRC0:1;
      unsigned SYNCSRC1:1;
      unsigned SYNCSRC2:1;
    };
  };
} STCONBITS;
extern volatile STCONBITS STCONbits __attribute__((__sfr__));

#define STCON2 STCON2
extern volatile unsigned int  STCON2 __attribute__((__sfr__));
__extension__ typedef struct tagSTCON2BITS {
  union {
    struct {
      unsigned PCLKDIV:3;
    };
    struct {
      unsigned PCLKDIV0:1;
      unsigned PCLKDIV1:1;
      unsigned PCLKDIV2:1;
    };
  };
} STCON2BITS;
extern volatile STCON2BITS STCON2bits __attribute__((__sfr__));

#define STPER STPER
extern volatile unsigned int  STPER __attribute__((__sfr__));
#define SSEVTCMP SSEVTCMP
extern volatile unsigned int  SSEVTCMP __attribute__((__sfr__));
__extension__ typedef struct tagSSEVTCMPBITS {
  union {
    struct {
      unsigned :3;
      unsigned SSEVTCMP:13;
    };
    struct {
      unsigned :3;
      unsigned SSEVTCMP0:1;
      unsigned SSEVTCMP1:1;
      unsigned SSEVTCMP2:1;
      unsigned SSEVTCMP3:1;
      unsigned SSEVTCMP4:1;
      unsigned SSEVTCMP5:1;
      unsigned SSEVTCMP6:1;
      unsigned SSEVTCMP7:1;
      unsigned SSEVTCMP8:1;
      unsigned SSEVTCMP9:1;
      unsigned SSEVTCMP10:1;
      unsigned SSEVTCMP11:1;
      unsigned SSEVTCMP12:1;
    };
  };
} SSEVTCMPBITS;
extern volatile SSEVTCMPBITS SSEVTCMPbits __attribute__((__sfr__));

#define CHOP CHOP
extern volatile unsigned int  CHOP __attribute__((__sfr__));
__extension__ typedef struct tagCHOPBITS {
  union {
    struct {
      unsigned :3;
      unsigned CHOPCLK:7;
      unsigned :5;
      unsigned CHPCLKEN:1;
    };
    struct {
      unsigned :3;
      unsigned CHOPCLK3:1;
      unsigned CHOPCLK4:1;
      unsigned CHOPCLK5:1;
      unsigned CHOPCLK6:1;
      unsigned CHOPCLK7:1;
      unsigned CHOPCLK8:1;
      unsigned CHOPCLK9:1;
    };
  };
} CHOPBITS;
extern volatile CHOPBITS CHOPbits __attribute__((__sfr__));

#define PWMKEY PWMKEY
extern volatile unsigned int  PWMKEY __attribute__((__sfr__));
#define PWMCON1 PWMCON1
extern volatile unsigned int  PWMCON1 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON1BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
      unsigned DTC:2;
      unsigned MDCS:1;
      unsigned ITB:1;
      unsigned TRGIEN:1;
      unsigned CLIEN:1;
      unsigned FLTIEN:1;
      unsigned TRGSTAT:1;
      unsigned CLSTAT:1;
      unsigned FLTSTAT:1;
    };
    struct {
      unsigned :6;
      unsigned DTC0:1;
      unsigned DTC1:1;
    };
  };
} PWMCON1BITS;
extern volatile PWMCON1BITS PWMCON1bits __attribute__((__sfr__));

#define IOCON1 IOCON1
extern volatile unsigned int  IOCON1 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON1BITS {
  union {
    struct {
      unsigned OSYNC:1;
      unsigned SWAP:1;
      unsigned CLDAT:2;
      unsigned FLTDAT:2;
      unsigned OVRDAT:2;
      unsigned OVRENL:1;
      unsigned OVRENH:1;
      unsigned PMOD:2;
      unsigned POLL:1;
      unsigned POLH:1;
      unsigned PENL:1;
      unsigned PENH:1;
    };
    struct {
      unsigned :2;
      unsigned CLDAT0:1;
      unsigned CLDAT1:1;
      unsigned FLTDAT0:1;
      unsigned FLTDAT1:1;
      unsigned OVRDAT0:1;
      unsigned OVRDAT1:1;
      unsigned :2;
      unsigned PMOD0:1;
      unsigned PMOD1:1;
    };
  };
} IOCON1BITS;
extern volatile IOCON1BITS IOCON1bits __attribute__((__sfr__));

#define FCLCON1 FCLCON1
extern volatile unsigned int  FCLCON1 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON1BITS {
  union {
    struct {
      unsigned FLTMOD:2;
      unsigned FLTPOL:1;
      unsigned FLTSRC:5;
      unsigned CLMOD:1;
      unsigned CLPOL:1;
      unsigned CLSRC:5;
      unsigned IFLTMOD:1;
    };
    struct {
      unsigned FLTMOD0:1;
      unsigned FLTMOD1:1;
      unsigned :1;
      unsigned FLTSRC0:1;
      unsigned FLTSRC1:1;
      unsigned FLTSRC2:1;
      unsigned FLTSRC3:1;
      unsigned FLTSRC4:1;
      unsigned :2;
      unsigned CLSRC0:1;
      unsigned CLSRC1:1;
      unsigned CLSRC2:1;
      unsigned CLSRC3:1;
      unsigned CLSRC4:1;
    };
  };
} FCLCON1BITS;
extern volatile FCLCON1BITS FCLCON1bits __attribute__((__sfr__));

#define PDC1 PDC1
extern volatile unsigned int  PDC1 __attribute__((__sfr__));
#define PHASE1 PHASE1
extern volatile unsigned int  PHASE1 __attribute__((__sfr__));
#define DTR1 DTR1
extern volatile unsigned int  DTR1 __attribute__((__sfr__));
#define ALTDTR1 ALTDTR1
extern volatile unsigned int  ALTDTR1 __attribute__((__sfr__));
#define SDC1 SDC1
extern volatile unsigned int  SDC1 __attribute__((__sfr__));
#define SPHASE1 SPHASE1
extern volatile unsigned int  SPHASE1 __attribute__((__sfr__));
#define TRIG1 TRIG1
extern volatile unsigned int  TRIG1 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG1BITS {
  union {
    struct {
      unsigned :3;
      unsigned TRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned TRGCMP0:1;
      unsigned TRGCMP1:1;
      unsigned TRGCMP2:1;
      unsigned TRGCMP3:1;
      unsigned TRGCMP4:1;
      unsigned TRGCMP5:1;
      unsigned TRGCMP6:1;
      unsigned TRGCMP7:1;
      unsigned TRGCMP8:1;
      unsigned TRGCMP9:1;
      unsigned TRGCMP10:1;
      unsigned TRGCMP11:1;
      unsigned TRGCMP12:1;
    };
  };
} TRIG1BITS;
extern volatile TRIG1BITS TRIG1bits __attribute__((__sfr__));

#define TRGCON1 TRGCON1
extern volatile unsigned int  TRGCON1 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON1BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :1;
      unsigned DTM:1;
      unsigned :4;
      unsigned TRGDIV:4;
    };
    struct {
      unsigned TRGSTRT0:1;
      unsigned TRGSTRT1:1;
      unsigned TRGSTRT2:1;
      unsigned TRGSTRT3:1;
      unsigned TRGSTRT4:1;
      unsigned TRGSTRT5:1;
      unsigned :6;
      unsigned TRGDIV0:1;
      unsigned TRGDIV1:1;
      unsigned TRGDIV2:1;
      unsigned TRGDIV3:1;
    };
  };
} TRGCON1BITS;
extern volatile TRGCON1BITS TRGCON1bits __attribute__((__sfr__));

#define STRIG1 STRIG1
extern volatile unsigned int  STRIG1 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG1BITS {
  union {
    struct {
      unsigned :3;
      unsigned STRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned STRGCMP0:1;
      unsigned STRGCMP1:1;
      unsigned STRGCMP2:1;
      unsigned STRGCMP3:1;
      unsigned STRGCMP4:1;
      unsigned STRGCMP5:1;
      unsigned STRGCMP6:1;
      unsigned STRGCMP7:1;
      unsigned STRGCMP8:1;
      unsigned STRGCMP9:1;
      unsigned STRGCMP10:1;
      unsigned STRGCMP11:1;
      unsigned STRGCMP12:1;
    };
  };
} STRIG1BITS;
extern volatile STRIG1BITS STRIG1bits __attribute__((__sfr__));

#define PWMCAP1 PWMCAP1
extern volatile unsigned int  PWMCAP1 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCAP1BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} PWMCAP1BITS;
extern volatile PWMCAP1BITS PWMCAP1bits __attribute__((__sfr__));

#define LEBCON1 LEBCON1
extern volatile unsigned int  LEBCON1 __attribute__((__sfr__));
typedef struct tagLEBCON1BITS {
  unsigned BPLL:1;
  unsigned BPLH:1;
  unsigned BPHL:1;
  unsigned BPHH:1;
  unsigned BCL:1;
  unsigned BCH:1;
  unsigned :4;
  unsigned CLLEBEN:1;
  unsigned FLTLEBEN:1;
  unsigned PLF:1;
  unsigned PLR:1;
  unsigned PHF:1;
  unsigned PHR:1;
} LEBCON1BITS;
extern volatile LEBCON1BITS LEBCON1bits __attribute__((__sfr__));

#define LEBDLY1 LEBDLY1
extern volatile unsigned int  LEBDLY1 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY1BITS {
  union {
    struct {
      unsigned :3;
      unsigned LEB:9;
    };
    struct {
      unsigned :3;
      unsigned LEB0:1;
      unsigned LEB1:1;
      unsigned LEB2:1;
      unsigned LEB3:1;
      unsigned LEB4:1;
      unsigned LEB5:1;
      unsigned LEB6:1;
      unsigned LEB7:1;
      unsigned LEB8:1;
    };
  };
} LEBDLY1BITS;
extern volatile LEBDLY1BITS LEBDLY1bits __attribute__((__sfr__));

#define AUXCON1 AUXCON1
extern volatile unsigned int  AUXCON1 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON1BITS {
  union {
    struct {
      unsigned CHOPLEN:1;
      unsigned CHOPHEN:1;
      unsigned CHOPSEL:4;
      unsigned :2;
      unsigned BLANKSEL:4;
      unsigned :2;
      unsigned HRDDIS:1;
      unsigned HRPDIS:1;
    };
    struct {
      unsigned :2;
      unsigned CHOPSEL0:1;
      unsigned CHOPSEL1:1;
      unsigned CHOPSEL2:1;
      unsigned CHOPSEL3:1;
      unsigned :2;
      unsigned BLANKSEL0:1;
      unsigned BLANKSEL1:1;
      unsigned BLANKSEL2:1;
      unsigned BLANKSEL3:1;
    };
  };
} AUXCON1BITS;
extern volatile AUXCON1BITS AUXCON1bits __attribute__((__sfr__));

#define PWMCON2 PWMCON2
extern volatile unsigned int  PWMCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON2BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
      unsigned DTC:2;
      unsigned MDCS:1;
      unsigned ITB:1;
      unsigned TRGIEN:1;
      unsigned CLIEN:1;
      unsigned FLTIEN:1;
      unsigned TRGSTAT:1;
      unsigned CLSTAT:1;
      unsigned FLTSTAT:1;
    };
    struct {
      unsigned :6;
      unsigned DTC0:1;
      unsigned DTC1:1;
    };
  };
} PWMCON2BITS;
extern volatile PWMCON2BITS PWMCON2bits __attribute__((__sfr__));

#define IOCON2 IOCON2
extern volatile unsigned int  IOCON2 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON2BITS {
  union {
    struct {
      unsigned OSYNC:1;
      unsigned SWAP:1;
      unsigned CLDAT:2;
      unsigned FLTDAT:2;
      unsigned OVRDAT:2;
      unsigned OVRENL:1;
      unsigned OVRENH:1;
      unsigned PMOD:2;
      unsigned POLL:1;
      unsigned POLH:1;
      unsigned PENL:1;
      unsigned PENH:1;
    };
    struct {
      unsigned :2;
      unsigned CLDAT0:1;
      unsigned CLDAT1:1;
      unsigned FLTDAT0:1;
      unsigned FLTDAT1:1;
      unsigned OVRDAT0:1;
      unsigned OVRDAT1:1;
      unsigned :2;
      unsigned PMOD0:1;
      unsigned PMOD1:1;
    };
  };
} IOCON2BITS;
extern volatile IOCON2BITS IOCON2bits __attribute__((__sfr__));

#define FCLCON2 FCLCON2
extern volatile unsigned int  FCLCON2 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON2BITS {
  union {
    struct {
      unsigned FLTMOD:2;
      unsigned FLTPOL:1;
      unsigned FLTSRC:5;
      unsigned CLMOD:1;
      unsigned CLPOL:1;
      unsigned CLSRC:5;
      unsigned IFLTMOD:1;
    };
    struct {
      unsigned FLTMOD0:1;
      unsigned FLTMOD1:1;
      unsigned :1;
      unsigned FLTSRC0:1;
      unsigned FLTSRC1:1;
      unsigned FLTSRC2:1;
      unsigned FLTSRC3:1;
      unsigned FLTSRC4:1;
      unsigned :2;
      unsigned CLSRC0:1;
      unsigned CLSRC1:1;
      unsigned CLSRC2:1;
      unsigned CLSRC3:1;
      unsigned CLSRC4:1;
    };
  };
} FCLCON2BITS;
extern volatile FCLCON2BITS FCLCON2bits __attribute__((__sfr__));

#define PDC2 PDC2
extern volatile unsigned int  PDC2 __attribute__((__sfr__));
#define PHASE2 PHASE2
extern volatile unsigned int  PHASE2 __attribute__((__sfr__));
#define DTR2 DTR2
extern volatile unsigned int  DTR2 __attribute__((__sfr__));
#define ALTDTR2 ALTDTR2
extern volatile unsigned int  ALTDTR2 __attribute__((__sfr__));
#define SDC2 SDC2
extern volatile unsigned int  SDC2 __attribute__((__sfr__));
#define SPHASE2 SPHASE2
extern volatile unsigned int  SPHASE2 __attribute__((__sfr__));
#define TRIG2 TRIG2
extern volatile unsigned int  TRIG2 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG2BITS {
  union {
    struct {
      unsigned :3;
      unsigned TRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned TRGCMP0:1;
      unsigned TRGCMP1:1;
      unsigned TRGCMP2:1;
      unsigned TRGCMP3:1;
      unsigned TRGCMP4:1;
      unsigned TRGCMP5:1;
      unsigned TRGCMP6:1;
      unsigned TRGCMP7:1;
      unsigned TRGCMP8:1;
      unsigned TRGCMP9:1;
      unsigned TRGCMP10:1;
      unsigned TRGCMP11:1;
      unsigned TRGCMP12:1;
    };
  };
} TRIG2BITS;
extern volatile TRIG2BITS TRIG2bits __attribute__((__sfr__));

#define TRGCON2 TRGCON2
extern volatile unsigned int  TRGCON2 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON2BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :1;
      unsigned DTM:1;
      unsigned :4;
      unsigned TRGDIV:4;
    };
    struct {
      unsigned TRGSTRT0:1;
      unsigned TRGSTRT1:1;
      unsigned TRGSTRT2:1;
      unsigned TRGSTRT3:1;
      unsigned TRGSTRT4:1;
      unsigned TRGSTRT5:1;
      unsigned :6;
      unsigned TRGDIV0:1;
      unsigned TRGDIV1:1;
      unsigned TRGDIV2:1;
      unsigned TRGDIV3:1;
    };
  };
} TRGCON2BITS;
extern volatile TRGCON2BITS TRGCON2bits __attribute__((__sfr__));

#define STRIG2 STRIG2
extern volatile unsigned int  STRIG2 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG2BITS {
  union {
    struct {
      unsigned :3;
      unsigned STRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned STRGCMP0:1;
      unsigned STRGCMP1:1;
      unsigned STRGCMP2:1;
      unsigned STRGCMP3:1;
      unsigned STRGCMP4:1;
      unsigned STRGCMP5:1;
      unsigned STRGCMP6:1;
      unsigned STRGCMP7:1;
      unsigned STRGCMP8:1;
      unsigned STRGCMP9:1;
      unsigned STRGCMP10:1;
      unsigned STRGCMP11:1;
      unsigned STRGCMP12:1;
    };
  };
} STRIG2BITS;
extern volatile STRIG2BITS STRIG2bits __attribute__((__sfr__));

#define PWMCAP2 PWMCAP2
extern volatile unsigned int  PWMCAP2 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCAP2BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} PWMCAP2BITS;
extern volatile PWMCAP2BITS PWMCAP2bits __attribute__((__sfr__));

#define LEBCON2 LEBCON2
extern volatile unsigned int  LEBCON2 __attribute__((__sfr__));
typedef struct tagLEBCON2BITS {
  unsigned BPLL:1;
  unsigned BPLH:1;
  unsigned BPHL:1;
  unsigned BPHH:1;
  unsigned BCL:1;
  unsigned BCH:1;
  unsigned :4;
  unsigned CLLEBEN:1;
  unsigned FLTLEBEN:1;
  unsigned PLF:1;
  unsigned PLR:1;
  unsigned PHF:1;
  unsigned PHR:1;
} LEBCON2BITS;
extern volatile LEBCON2BITS LEBCON2bits __attribute__((__sfr__));

#define LEBDLY2 LEBDLY2
extern volatile unsigned int  LEBDLY2 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY2BITS {
  union {
    struct {
      unsigned :3;
      unsigned LEB:9;
    };
    struct {
      unsigned :3;
      unsigned LEB0:1;
      unsigned LEB1:1;
      unsigned LEB2:1;
      unsigned LEB3:1;
      unsigned LEB4:1;
      unsigned LEB5:1;
      unsigned LEB6:1;
      unsigned LEB7:1;
      unsigned LEB8:1;
    };
  };
} LEBDLY2BITS;
extern volatile LEBDLY2BITS LEBDLY2bits __attribute__((__sfr__));

#define AUXCON2 AUXCON2
extern volatile unsigned int  AUXCON2 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON2BITS {
  union {
    struct {
      unsigned CHOPLEN:1;
      unsigned CHOPHEN:1;
      unsigned CHOPSEL:4;
      unsigned :2;
      unsigned BLANKSEL:4;
      unsigned :2;
      unsigned HRDDIS:1;
      unsigned HRPDIS:1;
    };
    struct {
      unsigned :2;
      unsigned CHOPSEL0:1;
      unsigned CHOPSEL1:1;
      unsigned CHOPSEL2:1;
      unsigned CHOPSEL3:1;
      unsigned :2;
      unsigned BLANKSEL0:1;
      unsigned BLANKSEL1:1;
      unsigned BLANKSEL2:1;
      unsigned BLANKSEL3:1;
    };
  };
} AUXCON2BITS;
extern volatile AUXCON2BITS AUXCON2bits __attribute__((__sfr__));

#define PWMCON3 PWMCON3
extern volatile unsigned int  PWMCON3 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON3BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
      unsigned DTC:2;
      unsigned MDCS:1;
      unsigned ITB:1;
      unsigned TRGIEN:1;
      unsigned CLIEN:1;
      unsigned FLTIEN:1;
      unsigned TRGSTAT:1;
      unsigned CLSTAT:1;
      unsigned FLTSTAT:1;
    };
    struct {
      unsigned :6;
      unsigned DTC0:1;
      unsigned DTC1:1;
    };
  };
} PWMCON3BITS;
extern volatile PWMCON3BITS PWMCON3bits __attribute__((__sfr__));

#define IOCON3 IOCON3
extern volatile unsigned int  IOCON3 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON3BITS {
  union {
    struct {
      unsigned OSYNC:1;
      unsigned SWAP:1;
      unsigned CLDAT:2;
      unsigned FLTDAT:2;
      unsigned OVRDAT:2;
      unsigned OVRENL:1;
      unsigned OVRENH:1;
      unsigned PMOD:2;
      unsigned POLL:1;
      unsigned POLH:1;
      unsigned PENL:1;
      unsigned PENH:1;
    };
    struct {
      unsigned :2;
      unsigned CLDAT0:1;
      unsigned CLDAT1:1;
      unsigned FLTDAT0:1;
      unsigned FLTDAT1:1;
      unsigned OVRDAT0:1;
      unsigned OVRDAT1:1;
      unsigned :2;
      unsigned PMOD0:1;
      unsigned PMOD1:1;
    };
  };
} IOCON3BITS;
extern volatile IOCON3BITS IOCON3bits __attribute__((__sfr__));

#define FCLCON3 FCLCON3
extern volatile unsigned int  FCLCON3 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON3BITS {
  union {
    struct {
      unsigned FLTMOD:2;
      unsigned FLTPOL:1;
      unsigned FLTSRC:5;
      unsigned CLMOD:1;
      unsigned CLPOL:1;
      unsigned CLSRC:5;
      unsigned IFLTMOD:1;
    };
    struct {
      unsigned FLTMOD0:1;
      unsigned FLTMOD1:1;
      unsigned :1;
      unsigned FLTSRC0:1;
      unsigned FLTSRC1:1;
      unsigned FLTSRC2:1;
      unsigned FLTSRC3:1;
      unsigned FLTSRC4:1;
      unsigned :2;
      unsigned CLSRC0:1;
      unsigned CLSRC1:1;
      unsigned CLSRC2:1;
      unsigned CLSRC3:1;
      unsigned CLSRC4:1;
    };
  };
} FCLCON3BITS;
extern volatile FCLCON3BITS FCLCON3bits __attribute__((__sfr__));

#define PDC3 PDC3
extern volatile unsigned int  PDC3 __attribute__((__sfr__));
#define PHASE3 PHASE3
extern volatile unsigned int  PHASE3 __attribute__((__sfr__));
#define DTR3 DTR3
extern volatile unsigned int  DTR3 __attribute__((__sfr__));
#define ALTDTR3 ALTDTR3
extern volatile unsigned int  ALTDTR3 __attribute__((__sfr__));
#define SDC3 SDC3
extern volatile unsigned int  SDC3 __attribute__((__sfr__));
#define SPHASE3 SPHASE3
extern volatile unsigned int  SPHASE3 __attribute__((__sfr__));
#define TRIG3 TRIG3
extern volatile unsigned int  TRIG3 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG3BITS {
  union {
    struct {
      unsigned :3;
      unsigned TRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned TRGCMP0:1;
      unsigned TRGCMP1:1;
      unsigned TRGCMP2:1;
      unsigned TRGCMP3:1;
      unsigned TRGCMP4:1;
      unsigned TRGCMP5:1;
      unsigned TRGCMP6:1;
      unsigned TRGCMP7:1;
      unsigned TRGCMP8:1;
      unsigned TRGCMP9:1;
      unsigned TRGCMP10:1;
      unsigned TRGCMP11:1;
      unsigned TRGCMP12:1;
    };
  };
} TRIG3BITS;
extern volatile TRIG3BITS TRIG3bits __attribute__((__sfr__));

#define TRGCON3 TRGCON3
extern volatile unsigned int  TRGCON3 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON3BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :1;
      unsigned DTM:1;
      unsigned :4;
      unsigned TRGDIV:4;
    };
    struct {
      unsigned TRGSTRT0:1;
      unsigned TRGSTRT1:1;
      unsigned TRGSTRT2:1;
      unsigned TRGSTRT3:1;
      unsigned TRGSTRT4:1;
      unsigned TRGSTRT5:1;
      unsigned :6;
      unsigned TRGDIV0:1;
      unsigned TRGDIV1:1;
      unsigned TRGDIV2:1;
      unsigned TRGDIV3:1;
    };
  };
} TRGCON3BITS;
extern volatile TRGCON3BITS TRGCON3bits __attribute__((__sfr__));

#define STRIG3 STRIG3
extern volatile unsigned int  STRIG3 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG3BITS {
  union {
    struct {
      unsigned :3;
      unsigned STRGCMP:13;
    };
    struct {
      unsigned :3;
      unsigned STRGCMP0:1;
      unsigned STRGCMP1:1;
      unsigned STRGCMP2:1;
      unsigned STRGCMP3:1;
      unsigned STRGCMP4:1;
      unsigned STRGCMP5:1;
      unsigned STRGCMP6:1;
      unsigned STRGCMP7:1;
      unsigned STRGCMP8:1;
      unsigned STRGCMP9:1;
      unsigned STRGCMP10:1;
      unsigned STRGCMP11:1;
      unsigned STRGCMP12:1;
    };
  };
} STRIG3BITS;
extern volatile STRIG3BITS STRIG3bits __attribute__((__sfr__));

#define PWMCAP3 PWMCAP3
extern volatile unsigned int  PWMCAP3 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCAP3BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} PWMCAP3BITS;
extern volatile PWMCAP3BITS PWMCAP3bits __attribute__((__sfr__));

#define LEBCON3 LEBCON3
extern volatile unsigned int  LEBCON3 __attribute__((__sfr__));
typedef struct tagLEBCON3BITS {
  unsigned BPLL:1;
  unsigned BPLH:1;
  unsigned BPHL:1;
  unsigned BPHH:1;
  unsigned BCL:1;
  unsigned BCH:1;
  unsigned :4;
  unsigned CLLEBEN:1;
  unsigned FLTLEBEN:1;
  unsigned PLF:1;
  unsigned PLR:1;
  unsigned PHF:1;
  unsigned PHR:1;
} LEBCON3BITS;
extern volatile LEBCON3BITS LEBCON3bits __attribute__((__sfr__));

#define LEBDLY3 LEBDLY3
extern volatile unsigned int  LEBDLY3 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY3BITS {
  union {
    struct {
      unsigned :3;
      unsigned LEB:9;
    };
    struct {
      unsigned :3;
      unsigned LEB0:1;
      unsigned LEB1:1;
      unsigned LEB2:1;
      unsigned LEB3:1;
      unsigned LEB4:1;
      unsigned LEB5:1;
      unsigned LEB6:1;
      unsigned LEB7:1;
      unsigned LEB8:1;
    };
  };
} LEBDLY3BITS;
extern volatile LEBDLY3BITS LEBDLY3bits __attribute__((__sfr__));

#define AUXCON3 AUXCON3
extern volatile unsigned int  AUXCON3 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON3BITS {
  union {
    struct {
      unsigned CHOPLEN:1;
      unsigned CHOPHEN:1;
      unsigned CHOPSEL:4;
      unsigned :2;
      unsigned BLANKSEL:4;
      unsigned :2;
      unsigned HRDDIS:1;
      unsigned HRPDIS:1;
    };
    struct {
      unsigned :2;
      unsigned CHOPSEL0:1;
      unsigned CHOPSEL1:1;
      unsigned CHOPSEL2:1;
      unsigned CHOPSEL3:1;
      unsigned :2;
      unsigned BLANKSEL0:1;
      unsigned BLANKSEL1:1;
      unsigned BLANKSEL2:1;
      unsigned BLANKSEL3:1;
    };
  };
} AUXCON3BITS;
extern volatile AUXCON3BITS AUXCON3bits __attribute__((__sfr__));

#define TRISA TRISA
extern volatile unsigned int  TRISA __attribute__((__sfr__));
typedef struct tagTRISABITS {
  unsigned TRISA0:1;
  unsigned TRISA1:1;
  unsigned TRISA2:1;
  unsigned TRISA3:1;
  unsigned TRISA4:1;
} TRISABITS;
extern volatile TRISABITS TRISAbits __attribute__((__sfr__));

#define PORTA PORTA
extern volatile unsigned int  PORTA __attribute__((__sfr__));
typedef struct tagPORTABITS {
  unsigned RA0:1;
  unsigned RA1:1;
  unsigned RA2:1;
  unsigned RA3:1;
  unsigned RA4:1;
} PORTABITS;
extern volatile PORTABITS PORTAbits __attribute__((__sfr__));

#define LATA LATA
extern volatile unsigned int  LATA __attribute__((__sfr__));
typedef struct tagLATABITS {
  unsigned LATA0:1;
  unsigned LATA1:1;
  unsigned LATA2:1;
  unsigned LATA3:1;
  unsigned LATA4:1;
} LATABITS;
extern volatile LATABITS LATAbits __attribute__((__sfr__));

#define ODCA ODCA
extern volatile unsigned int  ODCA __attribute__((__sfr__));
typedef struct tagODCABITS {
  unsigned ODCA0:1;
  unsigned ODCA1:1;
  unsigned ODCA2:1;
  unsigned ODCA3:1;
  unsigned ODCA4:1;
} ODCABITS;
extern volatile ODCABITS ODCAbits __attribute__((__sfr__));

#define CNENA CNENA
extern volatile unsigned int  CNENA __attribute__((__sfr__));
typedef struct tagCNENABITS {
  unsigned CNIEA0:1;
  unsigned CNIEA1:1;
  unsigned CNIEA2:1;
  unsigned CNIEA3:1;
  unsigned CNIEA4:1;
} CNENABITS;
extern volatile CNENABITS CNENAbits __attribute__((__sfr__));

#define CNPUA CNPUA
extern volatile unsigned int  CNPUA __attribute__((__sfr__));
typedef struct tagCNPUABITS {
  unsigned CNPUA0:1;
  unsigned CNPUA1:1;
  unsigned CNPUA2:1;
  unsigned CNPUA3:1;
  unsigned CNPUA4:1;
} CNPUABITS;
extern volatile CNPUABITS CNPUAbits __attribute__((__sfr__));

#define CNPDA CNPDA
extern volatile unsigned int  CNPDA __attribute__((__sfr__));
typedef struct tagCNPDABITS {
  unsigned CNPDA0:1;
  unsigned CNPDA1:1;
  unsigned CNPDA2:1;
  unsigned CNPDA3:1;
  unsigned CNPDA4:1;
} CNPDABITS;
extern volatile CNPDABITS CNPDAbits __attribute__((__sfr__));

#define ANSELA ANSELA
extern volatile unsigned int  ANSELA __attribute__((__sfr__));
typedef struct tagANSELABITS {
  unsigned ANSA0:1;
  unsigned ANSA1:1;
  unsigned ANSA2:1;
} ANSELABITS;
extern volatile ANSELABITS ANSELAbits __attribute__((__sfr__));

#define TRISB TRISB
extern volatile unsigned int  TRISB __attribute__((__sfr__));
typedef struct tagTRISBBITS {
  unsigned TRISB0:1;
  unsigned TRISB1:1;
  unsigned TRISB2:1;
  unsigned TRISB3:1;
  unsigned TRISB4:1;
  unsigned TRISB5:1;
  unsigned TRISB6:1;
  unsigned TRISB7:1;
  unsigned TRISB8:1;
  unsigned TRISB9:1;
  unsigned TRISB10:1;
  unsigned TRISB11:1;
  unsigned TRISB12:1;
  unsigned TRISB13:1;
  unsigned TRISB14:1;
  unsigned TRISB15:1;
} TRISBBITS;
extern volatile TRISBBITS TRISBbits __attribute__((__sfr__));

#define PORTB PORTB
extern volatile unsigned int  PORTB __attribute__((__sfr__));
typedef struct tagPORTBBITS {
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RB2:1;
  unsigned RB3:1;
  unsigned RB4:1;
  unsigned RB5:1;
  unsigned RB6:1;
  unsigned RB7:1;
  unsigned RB8:1;
  unsigned RB9:1;
  unsigned RB10:1;
  unsigned RB11:1;
  unsigned RB12:1;
  unsigned RB13:1;
  unsigned RB14:1;
  unsigned RB15:1;
} PORTBBITS;
extern volatile PORTBBITS PORTBbits __attribute__((__sfr__));

#define LATB LATB
extern volatile unsigned int  LATB __attribute__((__sfr__));
typedef struct tagLATBBITS {
  unsigned LATB0:1;
  unsigned LATB1:1;
  unsigned LATB2:1;
  unsigned LATB3:1;
  unsigned LATB4:1;
  unsigned LATB5:1;
  unsigned LATB6:1;
  unsigned LATB7:1;
  unsigned LATB8:1;
  unsigned LATB9:1;
  unsigned LATB10:1;
  unsigned LATB11:1;
  unsigned LATB12:1;
  unsigned LATB13:1;
  unsigned LATB14:1;
  unsigned LATB15:1;
} LATBBITS;
extern volatile LATBBITS LATBbits __attribute__((__sfr__));

#define ODCB ODCB
extern volatile unsigned int  ODCB __attribute__((__sfr__));
typedef struct tagODCBBITS {
  unsigned ODCB0:1;
  unsigned ODCB1:1;
  unsigned ODCB2:1;
  unsigned ODCB3:1;
  unsigned ODCB4:1;
  unsigned ODCB5:1;
  unsigned ODCB6:1;
  unsigned ODCB7:1;
  unsigned ODCB8:1;
  unsigned ODCB9:1;
  unsigned ODCB10:1;
  unsigned ODCB11:1;
  unsigned ODCB12:1;
  unsigned ODCB13:1;
  unsigned ODCB14:1;
  unsigned ODCB15:1;
} ODCBBITS;
extern volatile ODCBBITS ODCBbits __attribute__((__sfr__));

#define CNENB CNENB
extern volatile unsigned int  CNENB __attribute__((__sfr__));
typedef struct tagCNENBBITS {
  unsigned CNIEB0:1;
  unsigned CNIEB1:1;
  unsigned CNIEB2:1;
  unsigned CNIEB3:1;
  unsigned CNIEB4:1;
  unsigned CNIEB5:1;
  unsigned CNIEB6:1;
  unsigned CNIEB7:1;
  unsigned CNIEB8:1;
  unsigned CNIEB9:1;
  unsigned CNIEB10:1;
  unsigned CNIEB11:1;
  unsigned CNIEB12:1;
  unsigned CNIEB13:1;
  unsigned CNIEB14:1;
  unsigned CNIEB15:1;
} CNENBBITS;
extern volatile CNENBBITS CNENBbits __attribute__((__sfr__));

#define CNPUB CNPUB
extern volatile unsigned int  CNPUB __attribute__((__sfr__));
typedef struct tagCNPUBBITS {
  unsigned CNPUB0:1;
  unsigned CNPUB1:1;
  unsigned CNPUB2:1;
  unsigned CNPUB3:1;
  unsigned CNPUB4:1;
  unsigned CNPUB5:1;
  unsigned CNPUB6:1;
  unsigned CNPUB7:1;
  unsigned CNPUB8:1;
  unsigned CNPUB9:1;
  unsigned CNPUB10:1;
  unsigned CNPUB11:1;
  unsigned CNPUB12:1;
  unsigned CNPUB13:1;
  unsigned CNPUB14:1;
  unsigned CNPUB15:1;
} CNPUBBITS;
extern volatile CNPUBBITS CNPUBbits __attribute__((__sfr__));

#define CNPDB CNPDB
extern volatile unsigned int  CNPDB __attribute__((__sfr__));
typedef struct tagCNPDBBITS {
  unsigned CNPDB0:1;
  unsigned CNPDB1:1;
  unsigned CNPDB2:1;
  unsigned CNPDB3:1;
  unsigned CNPDB4:1;
  unsigned CNPDB5:1;
  unsigned CNPDB6:1;
  unsigned CNPDB7:1;
  unsigned CNPDB8:1;
  unsigned CNPDB9:1;
  unsigned CNPDB10:1;
  unsigned CNPDB11:1;
  unsigned CNPDB12:1;
  unsigned CNPDB13:1;
  unsigned CNPDB14:1;
  unsigned CNPDB15:1;
} CNPDBBITS;
extern volatile CNPDBBITS CNPDBbits __attribute__((__sfr__));

#define ANSELB ANSELB
extern volatile unsigned int  ANSELB __attribute__((__sfr__));
typedef struct tagANSELBBITS {
  unsigned ANSB0:1;
  unsigned ANSB1:1;
  unsigned ANSB2:1;
  unsigned ANSB3:1;
  unsigned ANSB4:1;
  unsigned ANSB5:1;
  unsigned ANSB6:1;
  unsigned ANSB7:1;
  unsigned :1;
  unsigned ANSB9:1;
  unsigned ANSB10:1;
} ANSELBBITS;
extern volatile ANSELBBITS ANSELBbits __attribute__((__sfr__));



/* ---------------------------------------------------------- */
/* Defines for unique SFR bit names                           */
/* ---------------------------------------------------------- */

/* DSRPAG */
#define _DSRPAG DSRPAGbits.DSRPAG

/* DSWPAG */
#define _DSWPAG DSWPAGbits.DSWPAG

/* SR */
#define _C SRbits.C
#define _Z SRbits.Z
#define _OV SRbits.OV
#define _N SRbits.N
#define _RA SRbits.RA
#define _IPL SRbits.IPL
#define _DC SRbits.DC
#define _DA SRbits.DA
#define _SAB SRbits.SAB
#define _OAB SRbits.OAB
#define _SB SRbits.SB
#define _SA SRbits.SA
#define _OB SRbits.OB
#define _OA SRbits.OA
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2

/* CORCON */
#define _IF CORCONbits.IF
#define _RND CORCONbits.RND
#define _SFA CORCONbits.SFA
#define _IPL3 CORCONbits.IPL3
#define _ACCSAT CORCONbits.ACCSAT
#define _SATDW CORCONbits.SATDW
#define _SATB CORCONbits.SATB
#define _SATA CORCONbits.SATA
#define _DL CORCONbits.DL
#define _EDT CORCONbits.EDT
#define _US CORCONbits.US
#define _VAR CORCONbits.VAR
#define _DL0 CORCONbits.DL0
#define _DL1 CORCONbits.DL1
#define _DL2 CORCONbits.DL2
#define _US0 CORCONbits.US0
#define _US1 CORCONbits.US1

/* MODCON */
#define _XWM MODCONbits.XWM
#define _YWM MODCONbits.YWM
#define _BWM MODCONbits.BWM
#define _YMODEN MODCONbits.YMODEN
#define _XMODEN MODCONbits.XMODEN
#define _XWM0 MODCONbits.XWM0
#define _XWM1 MODCONbits.XWM1
#define _XWM2 MODCONbits.XWM2
#define _XWM3 MODCONbits.XWM3
#define _YWM0 MODCONbits.YWM0
#define _YWM1 MODCONbits.YWM1
#define _YWM2 MODCONbits.YWM2
#define _YWM3 MODCONbits.YWM3
#define _BWM0 MODCONbits.BWM0
#define _BWM1 MODCONbits.BWM1
#define _BWM2 MODCONbits.BWM2
#define _BWM3 MODCONbits.BWM3

/* XBREV */
#define _XB XBREVbits.XB
#define _BREN XBREVbits.BREN
#define _XB0 XBREVbits.XB0
#define _XB1 XBREVbits.XB1
#define _XB2 XBREVbits.XB2
#define _XB3 XBREVbits.XB3
#define _XB4 XBREVbits.XB4
#define _XB5 XBREVbits.XB5
#define _XB6 XBREVbits.XB6
#define _XB7 XBREVbits.XB7
#define _XB8 XBREVbits.XB8
#define _XB9 XBREVbits.XB9
#define _XB10 XBREVbits.XB10
#define _XB11 XBREVbits.XB11
#define _XB12 XBREVbits.XB12
#define _XB13 XBREVbits.XB13
#define _XB14 XBREVbits.XB14

/* TBLPAG */
#define _TBLPAG TBLPAGbits.TBLPAG

/* CTXTSTAT */
#define _MCTXI CTXTSTATbits.MCTXI
#define _CCTXI CTXTSTATbits.CCTXI

/* T1CON */
#define _TCS T1CONbits.TCS
#define _TSYNC T1CONbits.TSYNC
#define _TCKPS T1CONbits.TCKPS
#define _TGATE T1CONbits.TGATE
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1

/* T2CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
#define _T32 T2CONbits.T32
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T3CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* IC1CON1 */
#define _ICM IC1CON1bits.ICM
#define _ICBNE IC1CON1bits.ICBNE
#define _ICOV IC1CON1bits.ICOV
#define _ICI IC1CON1bits.ICI
#define _ICTSEL IC1CON1bits.ICTSEL
#define _ICSIDL IC1CON1bits.ICSIDL
#define _ICM0 IC1CON1bits.ICM0
#define _ICM1 IC1CON1bits.ICM1
#define _ICM2 IC1CON1bits.ICM2
#define _ICI0 IC1CON1bits.ICI0
#define _ICI1 IC1CON1bits.ICI1
#define _ICTSEL0 IC1CON1bits.ICTSEL0
#define _ICTSEL1 IC1CON1bits.ICTSEL1
#define _ICTSEL2 IC1CON1bits.ICTSEL2

/* IC1CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
#define _ICTRIG IC1CON2bits.ICTRIG
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* I2C1CON1 */
#define _SEN I2C1CON1bits.SEN
#define _RSEN I2C1CON1bits.RSEN
#define _PEN I2C1CON1bits.PEN
#define _RCEN I2C1CON1bits.RCEN
#define _ACKEN I2C1CON1bits.ACKEN
#define _ACKDT I2C1CON1bits.ACKDT
#define _STREN I2C1CON1bits.STREN
#define _GCEN I2C1CON1bits.GCEN
#define _SMEN I2C1CON1bits.SMEN
#define _DISSLW I2C1CON1bits.DISSLW
#define _A10M I2C1CON1bits.A10M
#define _STRICT I2C1CON1bits.STRICT
#define _SCLREL I2C1CON1bits.SCLREL
#define _I2CSIDL I2C1CON1bits.I2CSIDL
#define _I2CEN I2C1CON1bits.I2CEN

/* I2C1CON2 */
#define _DHEN I2C1CON2bits.DHEN
#define _AHEN I2C1CON2bits.AHEN
#define _SBCDE I2C1CON2bits.SBCDE
#define _SDAHT I2C1CON2bits.SDAHT
#define _BOEN I2C1CON2bits.BOEN
#define _SCIE I2C1CON2bits.SCIE
#define _PCIE I2C1CON2bits.PCIE

/* I2C1STAT */
#define _TBF I2C1STATbits.TBF
#define _RBF I2C1STATbits.RBF
#define _R_W I2C1STATbits.R_W
#define _S I2C1STATbits.S
#define _P I2C1STATbits.P
#define _D_A I2C1STATbits.D_A
#define _I2COV I2C1STATbits.I2COV
#define _IWCOL I2C1STATbits.IWCOL
#define _ADD10 I2C1STATbits.ADD10
#define _GCSTAT I2C1STATbits.GCSTAT
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
#define _ACKTIM I2C1STATbits.ACKTIM
#define _TRSTAT I2C1STATbits.TRSTAT
#define _ACKSTAT I2C1STATbits.ACKSTAT

/* I2C1ADD */
#define _ADD I2C1ADDbits.ADD

/* I2C1MSK */
#define _AMSK I2C1MSKbits.AMSK
#define _AMSK0 I2C1MSKbits.AMSK0
#define _AMSK1 I2C1MSKbits.AMSK1
#define _AMSK2 I2C1MSKbits.AMSK2
#define _AMSK3 I2C1MSKbits.AMSK3
#define _AMSK4 I2C1MSKbits.AMSK4
#define _AMSK5 I2C1MSKbits.AMSK5
#define _AMSK6 I2C1MSKbits.AMSK6
#define _AMSK7 I2C1MSKbits.AMSK7
#define _AMSK8 I2C1MSKbits.AMSK8
#define _AMSK9 I2C1MSKbits.AMSK9

/* I2C1TRN */
#define _I2CTXDATA I2C1TRNbits.I2CTXDATA

/* I2C1RCV */
#define _I2CRXDATA I2C1RCVbits.I2CRXDATA

/* U1MODE */
#define _STSEL U1MODEbits.STSEL
#define _PDSEL U1MODEbits.PDSEL
#define _BRGH U1MODEbits.BRGH
#define _URXINV U1MODEbits.URXINV
#define _ABAUD U1MODEbits.ABAUD
#define _LPBACK U1MODEbits.LPBACK
#define _WAKE U1MODEbits.WAKE
#define _UEN U1MODEbits.UEN
#define _RTSMD U1MODEbits.RTSMD
#define _IREN U1MODEbits.IREN
#define _USIDL U1MODEbits.USIDL
#define _UARTEN U1MODEbits.UARTEN
#define _PDSEL0 U1MODEbits.PDSEL0
#define _PDSEL1 U1MODEbits.PDSEL1
#define _RXINV U1MODEbits.RXINV
#define _UEN0 U1MODEbits.UEN0
#define _UEN1 U1MODEbits.UEN1

/* U1STA */
#define _URXDA U1STAbits.URXDA
#define _OERR U1STAbits.OERR
#define _FERR U1STAbits.FERR
#define _PERR U1STAbits.PERR
#define _RIDLE U1STAbits.RIDLE
#define _ADDEN U1STAbits.ADDEN
#define _URXISEL U1STAbits.URXISEL
#define _TRMT U1STAbits.TRMT
#define _UTXBF U1STAbits.UTXBF
#define _UTXEN U1STAbits.UTXEN
#define _UTXBRK U1STAbits.UTXBRK
#define _UTXISEL0 U1STAbits.UTXISEL0
#define _UTXINV U1STAbits.UTXINV
#define _UTXISEL1 U1STAbits.UTXISEL1
#define _URXISEL0 U1STAbits.URXISEL0
#define _URXISEL1 U1STAbits.URXISEL1
#define _TXINV U1STAbits.TXINV

/* SPI1STAT */
#define _SPIRBF SPI1STATbits.SPIRBF
#define _SPITBF SPI1STATbits.SPITBF
#define _SISEL SPI1STATbits.SISEL
#define _SRXMPT SPI1STATbits.SRXMPT
#define _SPIROV SPI1STATbits.SPIROV
#define _SRMPT SPI1STATbits.SRMPT
#define _SPIBEC SPI1STATbits.SPIBEC
#define _SPISIDL SPI1STATbits.SPISIDL
#define _SPIEN SPI1STATbits.SPIEN
#define _SISEL0 SPI1STATbits.SISEL0
#define _SISEL1 SPI1STATbits.SISEL1
#define _SISEL2 SPI1STATbits.SISEL2
#define _SPIBEC0 SPI1STATbits.SPIBEC0
#define _SPIBEC1 SPI1STATbits.SPIBEC1
#define _SPIBEC2 SPI1STATbits.SPIBEC2

/* SPI1CON1 */
#define _PPRE SPI1CON1bits.PPRE
#define _SPRE SPI1CON1bits.SPRE
#define _MSTEN SPI1CON1bits.MSTEN
#define _CKP SPI1CON1bits.CKP
#define _SSEN SPI1CON1bits.SSEN
#define _CKE SPI1CON1bits.CKE
#define _SMP SPI1CON1bits.SMP
#define _MODE16 SPI1CON1bits.MODE16
#define _DISSDO SPI1CON1bits.DISSDO
#define _DISSCK SPI1CON1bits.DISSCK
#define _PPRE0 SPI1CON1bits.PPRE0
#define _PPRE1 SPI1CON1bits.PPRE1
#define _SPRE0 SPI1CON1bits.SPRE0
#define _SPRE1 SPI1CON1bits.SPRE1
#define _SPRE2 SPI1CON1bits.SPRE2

/* SPI1CON2 */
#define _SPIBEN SPI1CON2bits.SPIBEN
#define _SPIFE SPI1CON2bits.SPIFE
#define _SPIFPOL SPI1CON2bits.SPIFPOL
#define _SPIFSD SPI1CON2bits.SPIFSD
#define _FRMEN SPI1CON2bits.FRMEN
#define _FRMDLY SPI1CON2bits.FRMDLY
#define _FRMPOL SPI1CON2bits.FRMPOL

/* ADCON1L */
#define _BSHFT ADCON1Lbits.BSHFT
#define _PUMPEN ADCON1Lbits.PUMPEN
#define _ADSIDL ADCON1Lbits.ADSIDL
#define _ADON ADCON1Lbits.ADON
#define _BSHFT0 ADCON1Lbits.BSHFT0
#define _BSHFT1 ADCON1Lbits.BSHFT1
#define _BSHFT2 ADCON1Lbits.BSHFT2

/* ADCON1H */
#define _SHRRES ADCON1Hbits.SHRRES
#define _FORM ADCON1Hbits.FORM
#define _TRBSLV ADCON1Hbits.TRBSLV
#define _TRBMST ADCON1Hbits.TRBMST
#define _TRBERR ADCON1Hbits.TRBERR
#define _TRBEN ADCON1Hbits.TRBEN
#define _SHRRES0 ADCON1Hbits.SHRRES0
#define _SHRRES1 ADCON1Hbits.SHRRES1
#define _TRBSLV0 ADCON1Hbits.TRBSLV0
#define _TRBSLV1 ADCON1Hbits.TRBSLV1
#define _TRBSLV2 ADCON1Hbits.TRBSLV2
#define _TRBMST0 ADCON1Hbits.TRBMST0
#define _TRBMST1 ADCON1Hbits.TRBMST1
#define _TRBMST2 ADCON1Hbits.TRBMST2

/* ADCON2L */
#define _SHRADCS ADCON2Lbits.SHRADCS
#define _SHREISEL ADCON2Lbits.SHREISEL
#define _REFERCIE ADCON2Lbits.REFERCIE
#define _REFCIE ADCON2Lbits.REFCIE
#define _SHRADCS0 ADCON2Lbits.SHRADCS0
#define _SHRADCS1 ADCON2Lbits.SHRADCS1
#define _SHRADCS2 ADCON2Lbits.SHRADCS2
#define _SHRADCS3 ADCON2Lbits.SHRADCS3
#define _SHRADCS4 ADCON2Lbits.SHRADCS4
#define _SHRADCS5 ADCON2Lbits.SHRADCS5
#define _SHRADCS6 ADCON2Lbits.SHRADCS6
#define _SHREISEL0 ADCON2Lbits.SHREISEL0
#define _SHREISEL1 ADCON2Lbits.SHREISEL1
#define _SHREISEL2 ADCON2Lbits.SHREISEL2

/* ADCON2H */
#define _SHRSAMC ADCON2Hbits.SHRSAMC
#define _REFERR ADCON2Hbits.REFERR
#define _REFRDY ADCON2Hbits.REFRDY
#define _SHRSAMC0 ADCON2Hbits.SHRSAMC0
#define _SHRSAMC1 ADCON2Hbits.SHRSAMC1
#define _SHRSAMC2 ADCON2Hbits.SHRSAMC2
#define _SHRSAMC3 ADCON2Hbits.SHRSAMC3
#define _SHRSAMC4 ADCON2Hbits.SHRSAMC4
#define _SHRSAMC5 ADCON2Hbits.SHRSAMC5
#define _SHRSAMC6 ADCON2Hbits.SHRSAMC6
#define _SHRSAMC7 ADCON2Hbits.SHRSAMC7
#define _SHRSAMC8 ADCON2Hbits.SHRSAMC8
#define _SHRSAMC9 ADCON2Hbits.SHRSAMC9

/* ADCON3L */
#define _CNVCHSEL ADCON3Lbits.CNVCHSEL
#define _SWCTRG ADCON3Lbits.SWCTRG
#define _SWLCTRG ADCON3Lbits.SWLCTRG
#define _CNVRTCH ADCON3Lbits.CNVRTCH
#define _SHRSAMP ADCON3Lbits.SHRSAMP
#define _SUSPRDY ADCON3Lbits.SUSPRDY
#define _SUSPCIE ADCON3Lbits.SUSPCIE
#define _SUSPEND ADCON3Lbits.SUSPEND
#define _REFSEL ADCON3Lbits.REFSEL
#define _CNVCHSEL0 ADCON3Lbits.CNVCHSEL0
#define _CNVCHSEL1 ADCON3Lbits.CNVCHSEL1
#define _CNVCHSEL2 ADCON3Lbits.CNVCHSEL2
#define _CNVCHSEL3 ADCON3Lbits.CNVCHSEL3
#define _CNVCHSEL4 ADCON3Lbits.CNVCHSEL4
#define _CNVCHSEL5 ADCON3Lbits.CNVCHSEL5
#define _REFSEL0 ADCON3Lbits.REFSEL0
#define _REFSEL1 ADCON3Lbits.REFSEL1
#define _REFSEL2 ADCON3Lbits.REFSEL2

/* ADCON3H */
#define _C0EN ADCON3Hbits.C0EN
#define _C1EN ADCON3Hbits.C1EN
#define _SHREN ADCON3Hbits.SHREN
#define _CLKDIV ADCON3Hbits.CLKDIV
#define _CLKSEL ADCON3Hbits.CLKSEL
#define _CLKDIV0 ADCON3Hbits.CLKDIV0
#define _CLKDIV1 ADCON3Hbits.CLKDIV1
#define _CLKDIV2 ADCON3Hbits.CLKDIV2
#define _CLKDIV3 ADCON3Hbits.CLKDIV3
#define _CLKDIV4 ADCON3Hbits.CLKDIV4
#define _CLKDIV5 ADCON3Hbits.CLKDIV5
#define _CLKSEL0 ADCON3Hbits.CLKSEL0
#define _CLKSEL1 ADCON3Hbits.CLKSEL1

/* ADCON4L */
#define _SAMC0EN ADCON4Lbits.SAMC0EN
#define _SAMC1EN ADCON4Lbits.SAMC1EN
#define _SYNCTRG0 ADCON4Lbits.SYNCTRG0
#define _SYNCTRG1 ADCON4Lbits.SYNCTRG1

/* ADCON4H */
#define _C0CHS ADCON4Hbits.C0CHS
#define _C1CHS ADCON4Hbits.C1CHS
#define _C0CHS0 ADCON4Hbits.C0CHS0
#define _C0CHS1 ADCON4Hbits.C0CHS1
#define _C1CHS0 ADCON4Hbits.C1CHS0
#define _C1CHS1 ADCON4Hbits.C1CHS1

/* ADMOD0L */
#define _SIGN0 ADMOD0Lbits.SIGN0
#define _DIFF0 ADMOD0Lbits.DIFF0
#define _SIGN1 ADMOD0Lbits.SIGN1
#define _DIFF1 ADMOD0Lbits.DIFF1
#define _SIGN2 ADMOD0Lbits.SIGN2
#define _DIFF2 ADMOD0Lbits.DIFF2
#define _SIGN3 ADMOD0Lbits.SIGN3
#define _DIFF3 ADMOD0Lbits.DIFF3
#define _SIGN4 ADMOD0Lbits.SIGN4
#define _DIFF4 ADMOD0Lbits.DIFF4
#define _SIGN5 ADMOD0Lbits.SIGN5
#define _DIFF5 ADMOD0Lbits.DIFF5
#define _SIGN6 ADMOD0Lbits.SIGN6
#define _DIFF6 ADMOD0Lbits.DIFF6
#define _SIGN7 ADMOD0Lbits.SIGN7
#define _DIFF7 ADMOD0Lbits.DIFF7

/* ADMOD0H */
#define _SIGN8 ADMOD0Hbits.SIGN8
#define _DIFF8 ADMOD0Hbits.DIFF8
#define _SIGN9 ADMOD0Hbits.SIGN9
#define _DIFF9 ADMOD0Hbits.DIFF9
#define _SIGN10 ADMOD0Hbits.SIGN10
#define _DIFF10 ADMOD0Hbits.DIFF10
#define _SIGN11 ADMOD0Hbits.SIGN11
#define _DIFF11 ADMOD0Hbits.DIFF11
#define _SIGN12 ADMOD0Hbits.SIGN12
#define _DIFF12 ADMOD0Hbits.DIFF12
#define _SIGN13 ADMOD0Hbits.SIGN13
#define _DIFF13 ADMOD0Hbits.DIFF13
#define _SIGN14 ADMOD0Hbits.SIGN14
#define _DIFF14 ADMOD0Hbits.DIFF14

/* ADCIE1L */
#define _CIE0 ADCIE1Lbits.CIE0
#define _CIE1 ADCIE1Lbits.CIE1
#define _CIE2 ADCIE1Lbits.CIE2
#define _CIE3 ADCIE1Lbits.CIE3
#define _CIE4 ADCIE1Lbits.CIE4
#define _CIE5 ADCIE1Lbits.CIE5
#define _CIE6 ADCIE1Lbits.CIE6
#define _CIE7 ADCIE1Lbits.CIE7
#define _CIE8 ADCIE1Lbits.CIE8
#define _CIE9 ADCIE1Lbits.CIE9
#define _CIE10 ADCIE1Lbits.CIE10
#define _CIE11 ADCIE1Lbits.CIE11
#define _CIE12 ADCIE1Lbits.CIE12
#define _CIE13 ADCIE1Lbits.CIE13
#define _CIE14 ADCIE1Lbits.CIE14

/* ADCSS1L */
#define _CSS0 ADCSS1Lbits.CSS0
#define _CSS1 ADCSS1Lbits.CSS1
#define _CSS2 ADCSS1Lbits.CSS2
#define _CSS3 ADCSS1Lbits.CSS3
#define _CSS4 ADCSS1Lbits.CSS4
#define _CSS5 ADCSS1Lbits.CSS5
#define _CSS6 ADCSS1Lbits.CSS6
#define _CSS7 ADCSS1Lbits.CSS7
#define _CSS8 ADCSS1Lbits.CSS8
#define _CSS9 ADCSS1Lbits.CSS9
#define _CSS10 ADCSS1Lbits.CSS10
#define _CSS11 ADCSS1Lbits.CSS11
#define _CSS12 ADCSS1Lbits.CSS12
#define _CSS13 ADCSS1Lbits.CSS13
#define _CSS14 ADCSS1Lbits.CSS14

/* ADSTATL */
#define _AN0RDY ADSTATLbits.AN0RDY
#define _AN1RDY ADSTATLbits.AN1RDY
#define _AN2RDY ADSTATLbits.AN2RDY
#define _AN3RDY ADSTATLbits.AN3RDY
#define _AN4RDY ADSTATLbits.AN4RDY
#define _AN5RDY ADSTATLbits.AN5RDY
#define _AN6RDY ADSTATLbits.AN6RDY
#define _AN7RDY ADSTATLbits.AN7RDY
#define _AN8RDY ADSTATLbits.AN8RDY
#define _AN9RDY ADSTATLbits.AN9RDY
#define _AN10RDY ADSTATLbits.AN10RDY
#define _AN11RDY ADSTATLbits.AN11RDY
#define _AN12RDY ADSTATLbits.AN12RDY
#define _AN13RDY ADSTATLbits.AN13RDY
#define _AN14RDY ADSTATLbits.AN14RDY

/* ADCMP0ENL */
/* Bitname _CMPEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN9 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN10 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN11 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN12 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN13 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN14 cannot be defined because it is used by more than one SFR */

/* ADCMP1ENL */
/* Bitname _CMPEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN9 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN10 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN11 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN12 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN13 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN14 cannot be defined because it is used by more than one SFR */

/* ADFL0CON */
#define _FLCHSEL ADFL0CONbits.FLCHSEL
#define _RDY ADFL0CONbits.RDY
/* Bitname _CIE cannot be defined because it is used by more than one SFR */
#define _OVRSAM ADFL0CONbits.OVRSAM
#define _MODE ADFL0CONbits.MODE
#define _FLEN ADFL0CONbits.FLEN
#define _FLCHSEL0 ADFL0CONbits.FLCHSEL0
#define _FLCHSEL1 ADFL0CONbits.FLCHSEL1
#define _FLCHSEL2 ADFL0CONbits.FLCHSEL2
#define _FLCHSEL3 ADFL0CONbits.FLCHSEL3
#define _FLCHSEL4 ADFL0CONbits.FLCHSEL4
#define _OVRSAM0 ADFL0CONbits.OVRSAM0
#define _OVRSAM1 ADFL0CONbits.OVRSAM1
#define _OVRSAM2 ADFL0CONbits.OVRSAM2

/* ADTRIG0L */
#define _TRGSRC0 ADTRIG0Lbits.TRGSRC0
#define _TRGSRC1 ADTRIG0Lbits.TRGSRC1
#define _TRGSRC20 ADTRIG0Lbits.TRGSRC20
#define _TRGSRC21 ADTRIG0Lbits.TRGSRC21
#define _TRGSRC22 ADTRIG0Lbits.TRGSRC22
#define _TRGSRC23 ADTRIG0Lbits.TRGSRC23
#define _TRGSRC24 ADTRIG0Lbits.TRGSRC24
/* Bitname _TRGSRC10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC12 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC13 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC14 cannot be defined because it is used by more than one SFR */

/* ADTRIG0H */
#define _TRGSRC2 ADTRIG0Hbits.TRGSRC2
#define _TRGSRC3 ADTRIG0Hbits.TRGSRC3
#define _TRGSRC40 ADTRIG0Hbits.TRGSRC40
#define _TRGSRC41 ADTRIG0Hbits.TRGSRC41
#define _TRGSRC42 ADTRIG0Hbits.TRGSRC42
#define _TRGSRC43 ADTRIG0Hbits.TRGSRC43
#define _TRGSRC44 ADTRIG0Hbits.TRGSRC44
#define _TRGSRC30 ADTRIG0Hbits.TRGSRC30
#define _TRGSRC31 ADTRIG0Hbits.TRGSRC31
#define _TRGSRC32 ADTRIG0Hbits.TRGSRC32
#define _TRGSRC33 ADTRIG0Hbits.TRGSRC33
#define _TRGSRC34 ADTRIG0Hbits.TRGSRC34

/* ADTRIG1L */
#define _TRGSRC4 ADTRIG1Lbits.TRGSRC4
#define _TRGSRC5 ADTRIG1Lbits.TRGSRC5
#define _TRGSRC60 ADTRIG1Lbits.TRGSRC60
#define _TRGSRC61 ADTRIG1Lbits.TRGSRC61
#define _TRGSRC62 ADTRIG1Lbits.TRGSRC62
#define _TRGSRC63 ADTRIG1Lbits.TRGSRC63
#define _TRGSRC64 ADTRIG1Lbits.TRGSRC64
#define _TRGSRC50 ADTRIG1Lbits.TRGSRC50
#define _TRGSRC51 ADTRIG1Lbits.TRGSRC51
#define _TRGSRC52 ADTRIG1Lbits.TRGSRC52
#define _TRGSRC53 ADTRIG1Lbits.TRGSRC53
#define _TRGSRC54 ADTRIG1Lbits.TRGSRC54

/* ADTRIG1H */
#define _TRGSRC6 ADTRIG1Hbits.TRGSRC6
#define _TRGSRC7 ADTRIG1Hbits.TRGSRC7
#define _TRGSRC80 ADTRIG1Hbits.TRGSRC80
#define _TRGSRC81 ADTRIG1Hbits.TRGSRC81
#define _TRGSRC82 ADTRIG1Hbits.TRGSRC82
#define _TRGSRC83 ADTRIG1Hbits.TRGSRC83
#define _TRGSRC84 ADTRIG1Hbits.TRGSRC84
#define _TRGSRC70 ADTRIG1Hbits.TRGSRC70
#define _TRGSRC71 ADTRIG1Hbits.TRGSRC71
#define _TRGSRC72 ADTRIG1Hbits.TRGSRC72
#define _TRGSRC73 ADTRIG1Hbits.TRGSRC73
#define _TRGSRC74 ADTRIG1Hbits.TRGSRC74

/* ADTRIG2L */
#define _TRGSRC8 ADTRIG2Lbits.TRGSRC8
#define _TRGSRC9 ADTRIG2Lbits.TRGSRC9
#define _TRGSRC100 ADTRIG2Lbits.TRGSRC100
#define _TRGSRC101 ADTRIG2Lbits.TRGSRC101
#define _TRGSRC102 ADTRIG2Lbits.TRGSRC102
#define _TRGSRC103 ADTRIG2Lbits.TRGSRC103
#define _TRGSRC104 ADTRIG2Lbits.TRGSRC104
#define _TRGSRC90 ADTRIG2Lbits.TRGSRC90
#define _TRGSRC91 ADTRIG2Lbits.TRGSRC91
#define _TRGSRC92 ADTRIG2Lbits.TRGSRC92
#define _TRGSRC93 ADTRIG2Lbits.TRGSRC93
#define _TRGSRC94 ADTRIG2Lbits.TRGSRC94

/* ADTRIG2H */
/* Bitname _TRGSRC10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC11 cannot be defined because it is used by more than one SFR */
#define _TRGSRC120 ADTRIG2Hbits.TRGSRC120
#define _TRGSRC121 ADTRIG2Hbits.TRGSRC121
#define _TRGSRC122 ADTRIG2Hbits.TRGSRC122
#define _TRGSRC123 ADTRIG2Hbits.TRGSRC123
#define _TRGSRC124 ADTRIG2Hbits.TRGSRC124
#define _TRGSRC110 ADTRIG2Hbits.TRGSRC110
#define _TRGSRC111 ADTRIG2Hbits.TRGSRC111
#define _TRGSRC112 ADTRIG2Hbits.TRGSRC112
#define _TRGSRC113 ADTRIG2Hbits.TRGSRC113
#define _TRGSRC114 ADTRIG2Hbits.TRGSRC114

/* ADTRIG3L */
/* Bitname _TRGSRC12 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC13 cannot be defined because it is used by more than one SFR */
#define _TRGSRC140 ADTRIG3Lbits.TRGSRC140
#define _TRGSRC141 ADTRIG3Lbits.TRGSRC141
#define _TRGSRC142 ADTRIG3Lbits.TRGSRC142
#define _TRGSRC143 ADTRIG3Lbits.TRGSRC143
#define _TRGSRC144 ADTRIG3Lbits.TRGSRC144
#define _TRGSRC130 ADTRIG3Lbits.TRGSRC130
#define _TRGSRC131 ADTRIG3Lbits.TRGSRC131
#define _TRGSRC132 ADTRIG3Lbits.TRGSRC132
#define _TRGSRC133 ADTRIG3Lbits.TRGSRC133
#define _TRGSRC134 ADTRIG3Lbits.TRGSRC134

/* ADTRIG3H */
/* Bitname _TRGSRC14 cannot be defined because it is used by more than one SFR */
#define _TRGSRC160 ADTRIG3Hbits.TRGSRC160
#define _TRGSRC161 ADTRIG3Hbits.TRGSRC161
#define _TRGSRC162 ADTRIG3Hbits.TRGSRC162
#define _TRGSRC163 ADTRIG3Hbits.TRGSRC163
#define _TRGSRC164 ADTRIG3Hbits.TRGSRC164

/* ADCMP0CON */
/* Bitname _LOLO cannot be defined because it is used by more than one SFR */
/* Bitname _LOHI cannot be defined because it is used by more than one SFR */
/* Bitname _HILO cannot be defined because it is used by more than one SFR */
/* Bitname _HIHI cannot be defined because it is used by more than one SFR */
/* Bitname _BTWN cannot be defined because it is used by more than one SFR */
/* Bitname _STAT cannot be defined because it is used by more than one SFR */
/* Bitname _CIE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL4 cannot be defined because it is used by more than one SFR */

/* ADCMP1CON */
/* Bitname _LOLO cannot be defined because it is used by more than one SFR */
/* Bitname _LOHI cannot be defined because it is used by more than one SFR */
/* Bitname _HILO cannot be defined because it is used by more than one SFR */
/* Bitname _HIHI cannot be defined because it is used by more than one SFR */
/* Bitname _BTWN cannot be defined because it is used by more than one SFR */
/* Bitname _STAT cannot be defined because it is used by more than one SFR */
/* Bitname _CIE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNL4 cannot be defined because it is used by more than one SFR */

/* ADBASE */
#define _CHOFFSET ADBASEbits.CHOFFSET
#define _CHOFFSET0 ADBASEbits.CHOFFSET0
#define _CHOFFSET1 ADBASEbits.CHOFFSET1
#define _CHOFFSET2 ADBASEbits.CHOFFSET2
#define _CHOFFSET3 ADBASEbits.CHOFFSET3
#define _CHOFFSET4 ADBASEbits.CHOFFSET4
#define _CHOFFSET5 ADBASEbits.CHOFFSET5
#define _CHOFFSET6 ADBASEbits.CHOFFSET6
#define _CHOFFSET7 ADBASEbits.CHOFFSET7
#define _CHOFFSET8 ADBASEbits.CHOFFSET8
#define _CHOFFSET9 ADBASEbits.CHOFFSET9
#define _CHOFFSET10 ADBASEbits.CHOFFSET10
#define _CHOFFSET11 ADBASEbits.CHOFFSET11
#define _CHOFFSET12 ADBASEbits.CHOFFSET12
#define _CHOFFSET13 ADBASEbits.CHOFFSET13
#define _CHOFFSET14 ADBASEbits.CHOFFSET14
#define _CHOFFSET15 ADBASEbits.CHOFFSET15

/* ADLVLTRGL */
#define _LVLEN0 ADLVLTRGLbits.LVLEN0
#define _LVLEN1 ADLVLTRGLbits.LVLEN1
#define _LVLEN2 ADLVLTRGLbits.LVLEN2
#define _LVLEN3 ADLVLTRGLbits.LVLEN3
#define _LVLEN4 ADLVLTRGLbits.LVLEN4
#define _LVLEN5 ADLVLTRGLbits.LVLEN5
#define _LVLEN6 ADLVLTRGLbits.LVLEN6
#define _LVLEN7 ADLVLTRGLbits.LVLEN7
#define _LVLEN8 ADLVLTRGLbits.LVLEN8
#define _LVLEN9 ADLVLTRGLbits.LVLEN9
#define _LVLEN10 ADLVLTRGLbits.LVLEN10
#define _LVLEN11 ADLVLTRGLbits.LVLEN11
#define _LVLEN12 ADLVLTRGLbits.LVLEN12
#define _LVLEN13 ADLVLTRGLbits.LVLEN13
#define _LVLEN14 ADLVLTRGLbits.LVLEN14

/* ADCORE0L */
/* Bitname _SAMC cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC4 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC5 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC6 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC7 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC8 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC9 cannot be defined because it is used by more than one SFR */

/* ADCORE0H */
/* Bitname _ADCS cannot be defined because it is used by more than one SFR */
/* Bitname _RES cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS5 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS6 cannot be defined because it is used by more than one SFR */
/* Bitname _RES0 cannot be defined because it is used by more than one SFR */
/* Bitname _RES1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL2 cannot be defined because it is used by more than one SFR */

/* ADCORE1L */
/* Bitname _SAMC cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC4 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC5 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC6 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC7 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC8 cannot be defined because it is used by more than one SFR */
/* Bitname _SAMC9 cannot be defined because it is used by more than one SFR */

/* ADCORE1H */
/* Bitname _ADCS cannot be defined because it is used by more than one SFR */
/* Bitname _RES cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS5 cannot be defined because it is used by more than one SFR */
/* Bitname _ADCS6 cannot be defined because it is used by more than one SFR */
/* Bitname _RES0 cannot be defined because it is used by more than one SFR */
/* Bitname _RES1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _EISEL2 cannot be defined because it is used by more than one SFR */

/* ADEICONL */
#define _C0EIF ADEICONLbits.C0EIF
#define _C1EIF ADEICONLbits.C1EIF
#define _SHREIF ADEICONLbits.SHREIF
#define _C0EIEN ADEICONLbits.C0EIEN
#define _C1EIEN ADEICONLbits.C1EIEN
#define _SHREIEN ADEICONLbits.SHREIEN

/* ADEICONH */
#define _SHREICH ADEICONHbits.SHREICH

/* ADCON5L */
#define _C0PWR ADCON5Lbits.C0PWR
#define _C1PWR ADCON5Lbits.C1PWR
#define _SHRPWR ADCON5Lbits.SHRPWR
#define _C0RDY ADCON5Lbits.C0RDY
#define _C1RDY ADCON5Lbits.C1RDY
#define _SHRRDY ADCON5Lbits.SHRRDY

/* ADCON5H */
#define _C0C1E ADCON5Hbits.C0C1E
#define _C1C1E ADCON5Hbits.C1C1E
#define _C2C1E ADCON5Hbits.C2C1E
#define _C3C1E ADCON5Hbits.C3C1E
#define _C4C1E ADCON5Hbits.C4C1E
#define _C5C1E ADCON5Hbits.C5C1E
#define _C6C1E ADCON5Hbits.C6C1E
#define _SHRCIE ADCON5Hbits.SHRCIE
#define _WARMTIME ADCON5Hbits.WARMTIME

/* ADCAL0L */
#define _CAL0RUN ADCAL0Lbits.CAL0RUN
#define _CAL0EN ADCAL0Lbits.CAL0EN
#define _CAL0DIFF ADCAL0Lbits.CAL0DIFF
#define _CAL0SKIP ADCAL0Lbits.CAL0SKIP
#define _CAL0RDY ADCAL0Lbits.CAL0RDY
#define _CAL1RUN ADCAL0Lbits.CAL1RUN
#define _CAL1EN ADCAL0Lbits.CAL1EN
#define _CAL1DIFF ADCAL0Lbits.CAL1DIFF
#define _CAL1SKIP ADCAL0Lbits.CAL1SKIP
#define _CAL1RDY ADCAL0Lbits.CAL1RDY

/* ADCAL1H */
#define _CSHRRUN ADCAL1Hbits.CSHRRUN
#define _CSHREN ADCAL1Hbits.CSHREN
#define _CSHRDIFF ADCAL1Hbits.CSHRDIFF
#define _CSHRSKIP ADCAL1Hbits.CSHRSKIP
#define _CSHRRDY ADCAL1Hbits.CSHRRDY

/* PGA1CON */
/* Bitname _GAIN cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI cannot be defined because it is used by more than one SFR */
/* Bitname _PGAOEN cannot be defined because it is used by more than one SFR */
/* Bitname _PGAEN cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN0 cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN1 cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI2 cannot be defined because it is used by more than one SFR */

/* PGA1CAL */
/* Bitname _PGACAL cannot be defined because it is used by more than one SFR */

/* PGA2CON */
/* Bitname _GAIN cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI cannot be defined because it is used by more than one SFR */
/* Bitname _PGAOEN cannot be defined because it is used by more than one SFR */
/* Bitname _PGAEN cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN0 cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN1 cannot be defined because it is used by more than one SFR */
/* Bitname _GAIN2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELNI2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELPI2 cannot be defined because it is used by more than one SFR */

/* PGA2CAL */
/* Bitname _PGACAL cannot be defined because it is used by more than one SFR */

/* CMP1CON */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _ALTINP cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FCLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL1 cannot be defined because it is used by more than one SFR */

/* CMP1DAC */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF9 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF10 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF11 cannot be defined because it is used by more than one SFR */

/* CMP2CON */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _ALTINP cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FCLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL1 cannot be defined because it is used by more than one SFR */

/* CMP2DAC */
/* Bitname _CMREF cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF0 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF1 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF2 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF3 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF4 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF5 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF6 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF7 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF8 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF9 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF10 cannot be defined because it is used by more than one SFR */
/* Bitname _CMREF11 cannot be defined because it is used by more than one SFR */

/* RPOR0 */
#define _RP32R RPOR0bits.RP32R
#define _RP33R RPOR0bits.RP33R
#define _RP32R0 RPOR0bits.RP32R0
#define _RP32R1 RPOR0bits.RP32R1
#define _RP32R2 RPOR0bits.RP32R2
#define _RP32R3 RPOR0bits.RP32R3
#define _RP32R4 RPOR0bits.RP32R4
#define _RP32R5 RPOR0bits.RP32R5
#define _RP33R0 RPOR0bits.RP33R0
#define _RP33R1 RPOR0bits.RP33R1
#define _RP33R2 RPOR0bits.RP33R2
#define _RP33R3 RPOR0bits.RP33R3
#define _RP33R4 RPOR0bits.RP33R4
#define _RP33R5 RPOR0bits.RP33R5

/* RPOR1 */
#define _RP34R RPOR1bits.RP34R
#define _RP35R RPOR1bits.RP35R
#define _RP34R0 RPOR1bits.RP34R0
#define _RP34R1 RPOR1bits.RP34R1
#define _RP34R2 RPOR1bits.RP34R2
#define _RP34R3 RPOR1bits.RP34R3
#define _RP34R4 RPOR1bits.RP34R4
#define _RP34R5 RPOR1bits.RP34R5
#define _RP35R0 RPOR1bits.RP35R0
#define _RP35R1 RPOR1bits.RP35R1
#define _RP35R2 RPOR1bits.RP35R2
#define _RP35R3 RPOR1bits.RP35R3
#define _RP35R4 RPOR1bits.RP35R4
#define _RP35R5 RPOR1bits.RP35R5

/* RPOR2 */
#define _RP36R RPOR2bits.RP36R
#define _RP37R RPOR2bits.RP37R
#define _RP36R0 RPOR2bits.RP36R0
#define _RP36R1 RPOR2bits.RP36R1
#define _RP36R2 RPOR2bits.RP36R2
#define _RP36R3 RPOR2bits.RP36R3
#define _RP36R4 RPOR2bits.RP36R4
#define _RP36R5 RPOR2bits.RP36R5
#define _RP37R0 RPOR2bits.RP37R0
#define _RP37R1 RPOR2bits.RP37R1
#define _RP37R2 RPOR2bits.RP37R2
#define _RP37R3 RPOR2bits.RP37R3
#define _RP37R4 RPOR2bits.RP37R4
#define _RP37R5 RPOR2bits.RP37R5

/* RPOR3 */
#define _RP38R RPOR3bits.RP38R
#define _RP39R RPOR3bits.RP39R
#define _RP38R0 RPOR3bits.RP38R0
#define _RP38R1 RPOR3bits.RP38R1
#define _RP38R2 RPOR3bits.RP38R2
#define _RP38R3 RPOR3bits.RP38R3
#define _RP38R4 RPOR3bits.RP38R4
#define _RP38R5 RPOR3bits.RP38R5
#define _RP39R0 RPOR3bits.RP39R0
#define _RP39R1 RPOR3bits.RP39R1
#define _RP39R2 RPOR3bits.RP39R2
#define _RP39R3 RPOR3bits.RP39R3
#define _RP39R4 RPOR3bits.RP39R4
#define _RP39R5 RPOR3bits.RP39R5

/* RPOR4 */
#define _RP40R RPOR4bits.RP40R
#define _RP41R RPOR4bits.RP41R
#define _RP40R0 RPOR4bits.RP40R0
#define _RP40R1 RPOR4bits.RP40R1
#define _RP40R2 RPOR4bits.RP40R2
#define _RP40R3 RPOR4bits.RP40R3
#define _RP40R4 RPOR4bits.RP40R4
#define _RP40R5 RPOR4bits.RP40R5
#define _RP41R0 RPOR4bits.RP41R0
#define _RP41R1 RPOR4bits.RP41R1
#define _RP41R2 RPOR4bits.RP41R2
#define _RP41R3 RPOR4bits.RP41R3
#define _RP41R4 RPOR4bits.RP41R4
#define _RP41R5 RPOR4bits.RP41R5

/* RPOR5 */
#define _RP42R RPOR5bits.RP42R
#define _RP43R RPOR5bits.RP43R
#define _RP42R0 RPOR5bits.RP42R0
#define _RP42R1 RPOR5bits.RP42R1
#define _RP42R2 RPOR5bits.RP42R2
#define _RP42R3 RPOR5bits.RP42R3
#define _RP42R4 RPOR5bits.RP42R4
#define _RP42R5 RPOR5bits.RP42R5
#define _RP43R0 RPOR5bits.RP43R0
#define _RP43R1 RPOR5bits.RP43R1
#define _RP43R2 RPOR5bits.RP43R2
#define _RP43R3 RPOR5bits.RP43R3
#define _RP43R4 RPOR5bits.RP43R4
#define _RP43R5 RPOR5bits.RP43R5

/* RPOR6 */
#define _RP44R RPOR6bits.RP44R
#define _RP45R RPOR6bits.RP45R
#define _RP44R0 RPOR6bits.RP44R0
#define _RP44R1 RPOR6bits.RP44R1
#define _RP44R2 RPOR6bits.RP44R2
#define _RP44R3 RPOR6bits.RP44R3
#define _RP44R4 RPOR6bits.RP44R4
#define _RP44R5 RPOR6bits.RP44R5
#define _RP45R0 RPOR6bits.RP45R0
#define _RP45R1 RPOR6bits.RP45R1
#define _RP45R2 RPOR6bits.RP45R2
#define _RP45R3 RPOR6bits.RP45R3
#define _RP45R4 RPOR6bits.RP45R4
#define _RP45R5 RPOR6bits.RP45R5

/* RPOR7 */
#define _RP46R RPOR7bits.RP46R
#define _RP47R RPOR7bits.RP47R
#define _RP46R0 RPOR7bits.RP46R0
#define _RP46R1 RPOR7bits.RP46R1
#define _RP46R2 RPOR7bits.RP46R2
#define _RP46R3 RPOR7bits.RP46R3
#define _RP46R4 RPOR7bits.RP46R4
#define _RP46R5 RPOR7bits.RP46R5
#define _RP47R0 RPOR7bits.RP47R0
#define _RP47R1 RPOR7bits.RP47R1
#define _RP47R2 RPOR7bits.RP47R2
#define _RP47R3 RPOR7bits.RP47R3
#define _RP47R4 RPOR7bits.RP47R4
#define _RP47R5 RPOR7bits.RP47R5

/* RPOR16 */
#define _RP176R RPOR16bits.RP176R
#define _RP177R RPOR16bits.RP177R
#define _RP176R0 RPOR16bits.RP176R0
#define _RP176R1 RPOR16bits.RP176R1
#define _RP176R2 RPOR16bits.RP176R2
#define _RP176R3 RPOR16bits.RP176R3
#define _RP176R4 RPOR16bits.RP176R4
#define _RP176R5 RPOR16bits.RP176R5
#define _RP177R0 RPOR16bits.RP177R0
#define _RP177R1 RPOR16bits.RP177R1
#define _RP177R2 RPOR16bits.RP177R2
#define _RP177R3 RPOR16bits.RP177R3
#define _RP177R4 RPOR16bits.RP177R4
#define _RP177R5 RPOR16bits.RP177R5

/* RPOR17 */
#define _RP178R RPOR17bits.RP178R
#define _RP179R RPOR17bits.RP179R
#define _RP178R0 RPOR17bits.RP178R0
#define _RP178R1 RPOR17bits.RP178R1
#define _RP178R2 RPOR17bits.RP178R2
#define _RP178R3 RPOR17bits.RP178R3
#define _RP178R4 RPOR17bits.RP178R4
#define _RP178R5 RPOR17bits.RP178R5
#define _RP179R0 RPOR17bits.RP179R0
#define _RP179R1 RPOR17bits.RP179R1
#define _RP179R2 RPOR17bits.RP179R2
#define _RP179R3 RPOR17bits.RP179R3
#define _RP179R4 RPOR17bits.RP179R4
#define _RP179R5 RPOR17bits.RP179R5

/* RPOR18 */
#define _RP180R RPOR18bits.RP180R
#define _RP181R RPOR18bits.RP181R
#define _RP180R0 RPOR18bits.RP180R0
#define _RP180R1 RPOR18bits.RP180R1
#define _RP180R2 RPOR18bits.RP180R2
#define _RP180R3 RPOR18bits.RP180R3
#define _RP180R4 RPOR18bits.RP180R4
#define _RP180R5 RPOR18bits.RP180R5
#define _RP181R0 RPOR18bits.RP181R0
#define _RP181R1 RPOR18bits.RP181R1
#define _RP181R2 RPOR18bits.RP181R2
#define _RP181R3 RPOR18bits.RP181R3
#define _RP181R4 RPOR18bits.RP181R4
#define _RP181R5 RPOR18bits.RP181R5

/* RPINR0 */
#define _INT1R RPINR0bits.INT1R
#define _INT1R0 RPINR0bits.INT1R0
#define _INT1R1 RPINR0bits.INT1R1
#define _INT1R2 RPINR0bits.INT1R2
#define _INT1R3 RPINR0bits.INT1R3
#define _INT1R4 RPINR0bits.INT1R4
#define _INT1R5 RPINR0bits.INT1R5
#define _INT1R6 RPINR0bits.INT1R6
#define _INT1R7 RPINR0bits.INT1R7

/* RPINR1 */
#define _INT2R RPINR1bits.INT2R
#define _INT2R0 RPINR1bits.INT2R0
#define _INT2R1 RPINR1bits.INT2R1
#define _INT2R2 RPINR1bits.INT2R2
#define _INT2R3 RPINR1bits.INT2R3
#define _INT2R4 RPINR1bits.INT2R4
#define _INT2R5 RPINR1bits.INT2R5
#define _INT2R6 RPINR1bits.INT2R6
#define _INT2R7 RPINR1bits.INT2R7

/* RPINR2 */
#define _INT4RR RPINR2bits.INT4RR
#define _T1CKRR RPINR2bits.T1CKRR
#define _INT4RR0 RPINR2bits.INT4RR0
#define _INT4RR1 RPINR2bits.INT4RR1
#define _INT4RR2 RPINR2bits.INT4RR2
#define _INT4RR3 RPINR2bits.INT4RR3
#define _INT4RR4 RPINR2bits.INT4RR4
#define _INT4RR5 RPINR2bits.INT4RR5
#define _INT4RR6 RPINR2bits.INT4RR6
#define _INT4RR7 RPINR2bits.INT4RR7
#define _T1CKRR0 RPINR2bits.T1CKRR0
#define _T1CKRR1 RPINR2bits.T1CKRR1
#define _T1CKRR2 RPINR2bits.T1CKRR2
#define _T1CKRR3 RPINR2bits.T1CKRR3
#define _T1CKRR4 RPINR2bits.T1CKRR4
#define _T1CKRR5 RPINR2bits.T1CKRR5
#define _T1CKRR6 RPINR2bits.T1CKRR6
#define _T1CKRR7 RPINR2bits.T1CKRR7

/* RPINR3 */
#define _T2CKR RPINR3bits.T2CKR
#define _T3CKR RPINR3bits.T3CKR
#define _T2CKR0 RPINR3bits.T2CKR0
#define _T2CKR1 RPINR3bits.T2CKR1
#define _T2CKR2 RPINR3bits.T2CKR2
#define _T2CKR3 RPINR3bits.T2CKR3
#define _T2CKR4 RPINR3bits.T2CKR4
#define _T2CKR5 RPINR3bits.T2CKR5
#define _T2CKR6 RPINR3bits.T2CKR6
#define _T2CKR7 RPINR3bits.T2CKR7
#define _T3CKR0 RPINR3bits.T3CKR0
#define _T3CKR1 RPINR3bits.T3CKR1
#define _T3CKR2 RPINR3bits.T3CKR2
#define _T3CKR3 RPINR3bits.T3CKR3
#define _T3CKR4 RPINR3bits.T3CKR4
#define _T3CKR5 RPINR3bits.T3CKR5
#define _T3CKR6 RPINR3bits.T3CKR6
#define _T3CKR7 RPINR3bits.T3CKR7

/* RPINR7 */
#define _IC1R RPINR7bits.IC1R
#define _IC1R0 RPINR7bits.IC1R0
#define _IC1R1 RPINR7bits.IC1R1
#define _IC1R2 RPINR7bits.IC1R2
#define _IC1R3 RPINR7bits.IC1R3
#define _IC1R4 RPINR7bits.IC1R4
#define _IC1R5 RPINR7bits.IC1R5
#define _IC1R6 RPINR7bits.IC1R6
#define _IC1R7 RPINR7bits.IC1R7

/* RPINR12 */
#define _FLT1R RPINR12bits.FLT1R
#define _FLT2R RPINR12bits.FLT2R
#define _FLT1R0 RPINR12bits.FLT1R0
#define _FLT1R1 RPINR12bits.FLT1R1
#define _FLT1R2 RPINR12bits.FLT1R2
#define _FLT1R3 RPINR12bits.FLT1R3
#define _FLT1R4 RPINR12bits.FLT1R4
#define _FLT1R5 RPINR12bits.FLT1R5
#define _FLT1R6 RPINR12bits.FLT1R6
#define _FLT1R7 RPINR12bits.FLT1R7
#define _FLT2R0 RPINR12bits.FLT2R0
#define _FLT2R1 RPINR12bits.FLT2R1
#define _FLT2R2 RPINR12bits.FLT2R2
#define _FLT2R3 RPINR12bits.FLT2R3
#define _FLT2R4 RPINR12bits.FLT2R4
#define _FLT2R5 RPINR12bits.FLT2R5
#define _FLT2R6 RPINR12bits.FLT2R6
#define _FLT2R7 RPINR12bits.FLT2R7

/* RPINR13 */
#define _FLT3R RPINR13bits.FLT3R
#define _FLT4R RPINR13bits.FLT4R
#define _FLT3R0 RPINR13bits.FLT3R0
#define _FLT3R1 RPINR13bits.FLT3R1
#define _FLT3R2 RPINR13bits.FLT3R2
#define _FLT3R3 RPINR13bits.FLT3R3
#define _FLT3R4 RPINR13bits.FLT3R4
#define _FLT3R5 RPINR13bits.FLT3R5
#define _FLT3R6 RPINR13bits.FLT3R6
#define _FLT3R7 RPINR13bits.FLT3R7
#define _FLT4R0 RPINR13bits.FLT4R0
#define _FLT4R1 RPINR13bits.FLT4R1
#define _FLT4R2 RPINR13bits.FLT4R2
#define _FLT4R3 RPINR13bits.FLT4R3
#define _FLT4R4 RPINR13bits.FLT4R4
#define _FLT4R5 RPINR13bits.FLT4R5
#define _FLT4R6 RPINR13bits.FLT4R6
#define _FLT4R7 RPINR13bits.FLT4R7

/* RPINR18 */
#define _U1RXR RPINR18bits.U1RXR
#define _U1CTSR RPINR18bits.U1CTSR
#define _U1RXR0 RPINR18bits.U1RXR0
#define _U1RXR1 RPINR18bits.U1RXR1
#define _U1RXR2 RPINR18bits.U1RXR2
#define _U1RXR3 RPINR18bits.U1RXR3
#define _U1RXR4 RPINR18bits.U1RXR4
#define _U1RXR5 RPINR18bits.U1RXR5
#define _U1RXR6 RPINR18bits.U1RXR6
#define _U1RXR7 RPINR18bits.U1RXR7
#define _U1CTSR0 RPINR18bits.U1CTSR0
#define _U1CTSR1 RPINR18bits.U1CTSR1
#define _U1CTSR2 RPINR18bits.U1CTSR2
#define _U1CTSR3 RPINR18bits.U1CTSR3
#define _U1CTSR4 RPINR18bits.U1CTSR4
#define _U1CTSR5 RPINR18bits.U1CTSR5
#define _U1CTSR6 RPINR18bits.U1CTSR6
#define _U1CTSR7 RPINR18bits.U1CTSR7

/* RPINR20 */
#define _SDI1R RPINR20bits.SDI1R
#define _SCK1INR RPINR20bits.SCK1INR
#define _SDI1R0 RPINR20bits.SDI1R0
#define _SDI1R1 RPINR20bits.SDI1R1
#define _SDI1R2 RPINR20bits.SDI1R2
#define _SDI1R3 RPINR20bits.SDI1R3
#define _SDI1R4 RPINR20bits.SDI1R4
#define _SDI1R5 RPINR20bits.SDI1R5
#define _SDI1R6 RPINR20bits.SDI1R6
#define _SDI1R7 RPINR20bits.SDI1R7
#define _SCK1INR0 RPINR20bits.SCK1INR0
#define _SCK1INR1 RPINR20bits.SCK1INR1
#define _SCK1INR2 RPINR20bits.SCK1INR2
#define _SCK1INR3 RPINR20bits.SCK1INR3
#define _SCK1INR4 RPINR20bits.SCK1INR4
#define _SCK1INR5 RPINR20bits.SCK1INR5
#define _SCK1INR6 RPINR20bits.SCK1INR6
#define _SCK1INR7 RPINR20bits.SCK1INR7

/* RPINR21 */
#define _SS1R RPINR21bits.SS1R
#define _SS1R0 RPINR21bits.SS1R0
#define _SS1R1 RPINR21bits.SS1R1
#define _SS1R2 RPINR21bits.SS1R2
#define _SS1R3 RPINR21bits.SS1R3
#define _SS1R4 RPINR21bits.SS1R4
#define _SS1R5 RPINR21bits.SS1R5
#define _SS1R6 RPINR21bits.SS1R6
#define _SS1R7 RPINR21bits.SS1R7

/* RPINR37 */
#define _SYCI1R RPINR37bits.SYCI1R
#define _SYCI1R0 RPINR37bits.SYCI1R0
#define _SYCI1R1 RPINR37bits.SYCI1R1
#define _SYCI1R2 RPINR37bits.SYCI1R2
#define _SYCI1R3 RPINR37bits.SYCI1R3
#define _SYCI1R4 RPINR37bits.SYCI1R4
#define _SYCI1R5 RPINR37bits.SYCI1R5
#define _SYCI1R6 RPINR37bits.SYCI1R6
#define _SYCI1R7 RPINR37bits.SYCI1R7

/* RPINR38 */
#define _SYCI2R RPINR38bits.SYCI2R
#define _SYCI2R0 RPINR38bits.SYCI2R0
#define _SYCI2R1 RPINR38bits.SYCI2R1
#define _SYCI2R2 RPINR38bits.SYCI2R2
#define _SYCI2R3 RPINR38bits.SYCI2R3
#define _SYCI2R4 RPINR38bits.SYCI2R4
#define _SYCI2R5 RPINR38bits.SYCI2R5
#define _SYCI2R6 RPINR38bits.SYCI2R6
#define _SYCI2R7 RPINR38bits.SYCI2R7

/* RPINR42 */
#define _FLT5R RPINR42bits.FLT5R
#define _FLT6R RPINR42bits.FLT6R
#define _FLT5R0 RPINR42bits.FLT5R0
#define _FLT5R1 RPINR42bits.FLT5R1
#define _FLT5R2 RPINR42bits.FLT5R2
#define _FLT5R3 RPINR42bits.FLT5R3
#define _FLT5R4 RPINR42bits.FLT5R4
#define _FLT5R5 RPINR42bits.FLT5R5
#define _FLT5R6 RPINR42bits.FLT5R6
#define _FLT5R7 RPINR42bits.FLT5R7
#define _FLT6R0 RPINR42bits.FLT6R0
#define _FLT6R1 RPINR42bits.FLT6R1
#define _FLT6R2 RPINR42bits.FLT6R2
#define _FLT6R3 RPINR42bits.FLT6R3
#define _FLT6R4 RPINR42bits.FLT6R4
#define _FLT6R5 RPINR42bits.FLT6R5
#define _FLT6R6 RPINR42bits.FLT6R6
#define _FLT6R7 RPINR42bits.FLT6R7

/* RPINR43 */
#define _FLT7R RPINR43bits.FLT7R
#define _FLT8R RPINR43bits.FLT8R
#define _FLT7R0 RPINR43bits.FLT7R0
#define _FLT7R1 RPINR43bits.FLT7R1
#define _FLT7R2 RPINR43bits.FLT7R2
#define _FLT7R3 RPINR43bits.FLT7R3
#define _FLT7R4 RPINR43bits.FLT7R4
#define _FLT7R5 RPINR43bits.FLT7R5
#define _FLT7R6 RPINR43bits.FLT7R6
#define _FLT7R7 RPINR43bits.FLT7R7
#define _FLT8R0 RPINR43bits.FLT8R0
#define _FLT8R1 RPINR43bits.FLT8R1
#define _FLT8R2 RPINR43bits.FLT8R2
#define _FLT8R3 RPINR43bits.FLT8R3
#define _FLT8R4 RPINR43bits.FLT8R4
#define _FLT8R5 RPINR43bits.FLT8R5
#define _FLT8R6 RPINR43bits.FLT8R6
#define _FLT8R7 RPINR43bits.FLT8R7

/* NVMCON */
#define _NVMOP NVMCONbits.NVMOP
#define _URERR NVMCONbits.URERR
#define _RPDF NVMCONbits.RPDF
#define _NVMSIDL NVMCONbits.NVMSIDL
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _NVMOP0 NVMCONbits.NVMOP0
#define _NVMOP1 NVMCONbits.NVMOP1
#define _NVMOP2 NVMCONbits.NVMOP2
#define _NVMOP3 NVMCONbits.NVMOP3

/* NVMADR */
#define _NVMADR NVMADRbits.NVMADR
#define _NVMADRL NVMADRbits.NVMADRL

/* NVMADRH */
#define _NVMADRU NVMADRHbits.NVMADRU
#define _NVMADRH NVMADRHbits.NVMADRH

/* NVMSRCADRH */
#define _NVMSRCADRH NVMSRCADRHbits.NVMSRCADRH

/* RCON */
#define _POR RCONbits.POR
#define _BOR RCONbits.BOR
#define _IDLE RCONbits.IDLE
#define _SLEEP RCONbits.SLEEP
#define _WDTO RCONbits.WDTO
#define _SWDTEN RCONbits.SWDTEN
#define _SWR RCONbits.SWR
#define _EXTR RCONbits.EXTR
#define _VREGS RCONbits.VREGS
#define _CM RCONbits.CM
#define _VREGSF RCONbits.VREGSF
#define _SBOREN RCONbits.SBOREN
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _CF OSCCONbits.CF
#define _LOCK OSCCONbits.LOCK
#define _IOLOCK OSCCONbits.IOLOCK
#define _CLKLOCK OSCCONbits.CLKLOCK
#define _NOSC OSCCONbits.NOSC
#define _COSC OSCCONbits.COSC
#define _NOSC0 OSCCONbits.NOSC0
#define _NOSC1 OSCCONbits.NOSC1
#define _NOSC2 OSCCONbits.NOSC2
#define _COSC0 OSCCONbits.COSC0
#define _COSC1 OSCCONbits.COSC1
#define _COSC2 OSCCONbits.COSC2

/* CLKDIV */
#define _PLLPRE CLKDIVbits.PLLPRE
#define _PLLPOST CLKDIVbits.PLLPOST
#define _FRCDIV CLKDIVbits.FRCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _PLLPRE0 CLKDIVbits.PLLPRE0
#define _PLLPRE1 CLKDIVbits.PLLPRE1
#define _PLLPRE2 CLKDIVbits.PLLPRE2
#define _PLLPRE3 CLKDIVbits.PLLPRE3
#define _PLLPRE4 CLKDIVbits.PLLPRE4
#define _PLLPOST0 CLKDIVbits.PLLPOST0
#define _PLLPOST1 CLKDIVbits.PLLPOST1
#define _FRCDIV0 CLKDIVbits.FRCDIV0
#define _FRCDIV1 CLKDIVbits.FRCDIV1
#define _FRCDIV2 CLKDIVbits.FRCDIV2
#define _DOZE0 CLKDIVbits.DOZE0
#define _DOZE1 CLKDIVbits.DOZE1
#define _DOZE2 CLKDIVbits.DOZE2

/* PLLFBD */
#define _PLLDIV PLLFBDbits.PLLDIV
#define _PLLDIV0 PLLFBDbits.PLLDIV0
#define _PLLDIV1 PLLFBDbits.PLLDIV1
#define _PLLDIV2 PLLFBDbits.PLLDIV2
#define _PLLDIV3 PLLFBDbits.PLLDIV3
#define _PLLDIV4 PLLFBDbits.PLLDIV4
#define _PLLDIV5 PLLFBDbits.PLLDIV5
#define _PLLDIV6 PLLFBDbits.PLLDIV6
#define _PLLDIV7 PLLFBDbits.PLLDIV7
#define _PLLDIV8 PLLFBDbits.PLLDIV8

/* OSCTUN */
#define _TUN OSCTUNbits.TUN
#define _TUN0 OSCTUNbits.TUN0
#define _TUN1 OSCTUNbits.TUN1
#define _TUN2 OSCTUNbits.TUN2
#define _TUN3 OSCTUNbits.TUN3
#define _TUN4 OSCTUNbits.TUN4
#define _TUN5 OSCTUNbits.TUN5

/* LFSR */
#define _LFSR LFSRbits.LFSR

/* ACLKCON */
#define _FRCSEL ACLKCONbits.FRCSEL
#define _ASRCSEL ACLKCONbits.ASRCSEL
#define _APSTSCLR ACLKCONbits.APSTSCLR
#define _SELACLK ACLKCONbits.SELACLK
#define _APLLCK ACLKCONbits.APLLCK
#define _ENAPLL ACLKCONbits.ENAPLL
#define _APSTSCLR0 ACLKCONbits.APSTSCLR0
#define _APSTSCLR1 ACLKCONbits.APSTSCLR1
#define _APSTSCLR2 ACLKCONbits.APSTSCLR2

/* PMD1 */
#define _ADCMD PMD1bits.ADCMD
#define _SPI1MD PMD1bits.SPI1MD
#define _U1MD PMD1bits.U1MD
#define _I2C1MD PMD1bits.I2C1MD
#define _PWMMD PMD1bits.PWMMD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD
#define _T3MD PMD1bits.T3MD

/* PMD2 */
#define _OC1MD PMD2bits.OC1MD
#define _IC1MD PMD2bits.IC1MD

/* PMD3 */
#define _CMPMD PMD3bits.CMPMD

/* PMD6 */
#define _PWM1MD PMD6bits.PWM1MD
#define _PWM2MD PMD6bits.PWM2MD
#define _PWM3MD PMD6bits.PWM3MD

/* PMD7 */
#define _PGA1MD PMD7bits.PGA1MD
#define _CMP1MD PMD7bits.CMP1MD
#define _CMP2MD PMD7bits.CMP2MD

/* PMD8 */
#define _PGA2MD PMD8bits.PGA2MD

/* IFS0 */
#define _INT0IF IFS0bits.INT0IF
#define _IC1IF IFS0bits.IC1IF
#define _OC1IF IFS0bits.OC1IF
#define _T1IF IFS0bits.T1IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _SPI1EIF IFS0bits.SPI1EIF
#define _SPI1IF IFS0bits.SPI1IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _ADCIF IFS0bits.ADCIF
#define _NVMIF IFS0bits.NVMIF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _AC1IF IFS1bits.AC1IF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _INT2IF IFS1bits.INT2IF

/* IFS3 */
#define _INT4IF IFS3bits.INT4IF
#define _PSEMIF IFS3bits.PSEMIF

/* IFS4 */
#define _U1EIF IFS4bits.U1EIF
#define _PSESIF IFS4bits.PSESIF

/* IFS5 */
#define _PWM1IF IFS5bits.PWM1IF
#define _PWM2IF IFS5bits.PWM2IF

/* IFS6 */
#define _PWM3IF IFS6bits.PWM3IF
#define _AC2IF IFS6bits.AC2IF
#define _ADCAN0IF IFS6bits.ADCAN0IF
#define _ADCAN1IF IFS6bits.ADCAN1IF

/* IFS7 */
#define _ADCAN2IF IFS7bits.ADCAN2IF
#define _ADCAN3IF IFS7bits.ADCAN3IF
#define _ADCAN4IF IFS7bits.ADCAN4IF
#define _ADCAN5IF IFS7bits.ADCAN5IF
#define _ADCAN6IF IFS7bits.ADCAN6IF
#define _ADCAN7IF IFS7bits.ADCAN7IF

/* IFS9 */
#define _ADCAN8IF IFS9bits.ADCAN8IF
#define _ADCAN9IF IFS9bits.ADCAN9IF
#define _ADCAN10IF IFS9bits.ADCAN10IF
#define _ADCAN11IF IFS9bits.ADCAN11IF
#define _ADCAN12IF IFS9bits.ADCAN12IF
#define _ADCAN13IF IFS9bits.ADCAN13IF
#define _ADCAN14IF IFS9bits.ADCAN14IF

/* IFS10 */
#define _I2C1BCIF IFS10bits.I2C1BCIF

/* IFS11 */
#define _ADCFLTIF IFS11bits.ADCFLTIF
#define _ADCMP1IF IFS11bits.ADCMP1IF
#define _ADCMP2IF IFS11bits.ADCMP2IF
#define _ADCFLTR1IF IFS11bits.ADCFLTR1IF
#define _ADCC0EIF IFS11bits.ADCC0EIF
#define _ADCC1EIF IFS11bits.ADCC1EIF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _SPI1EIE IEC0bits.SPI1EIE
#define _SPI1IE IEC0bits.SPI1IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _ADCIE IEC0bits.ADCIE
#define _NVMIE IEC0bits.NVMIE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _AC1IE IEC1bits.AC1IE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _INT2IE IEC1bits.INT2IE

/* IEC3 */
#define _INT4IE IEC3bits.INT4IE
#define _PSEMIE IEC3bits.PSEMIE

/* IEC4 */
#define _U1EIE IEC4bits.U1EIE
#define _PSESIE IEC4bits.PSESIE

/* IEC5 */
#define _PWM1IE IEC5bits.PWM1IE
#define _PWM2IE IEC5bits.PWM2IE

/* IEC6 */
#define _PWM3IE IEC6bits.PWM3IE
#define _AC2IE IEC6bits.AC2IE
#define _ADCAN0IE IEC6bits.ADCAN0IE
#define _ADCAN1IE IEC6bits.ADCAN1IE

/* IEC7 */
#define _ADCAN2IE IEC7bits.ADCAN2IE
#define _ADCAN3IE IEC7bits.ADCAN3IE
#define _ADCAN4IE IEC7bits.ADCAN4IE
#define _ADCAN5IE IEC7bits.ADCAN5IE
#define _ADCAN6IE IEC7bits.ADCAN6IE
#define _ADCAN7IE IEC7bits.ADCAN7IE

/* IEC9 */
#define _ADCAN8IE IEC9bits.ADCAN8IE
#define _ADCAN9IE IEC9bits.ADCAN9IE
#define _ADCAN10IE IEC9bits.ADCAN10IE
#define _ADCAN11IE IEC9bits.ADCAN11IE
#define _ADCAN12IE IEC9bits.ADCAN12IE
#define _ADCAN13IE IEC9bits.ADCAN13IE
#define _ADCAN14IE IEC9bits.ADCAN14IE

/* IEC10 */
#define _I2C1BCIE IEC10bits.I2C1BCIE

/* IEC11 */
#define _ADCFLTIE IEC11bits.ADCFLTIE
#define _ADCMP1IE IEC11bits.ADCMP1IE
#define _ADCMP2IE IEC11bits.ADCMP2IE
#define _ADCFLTR1IE IEC11bits.ADCFLTR1IE
#define _ADCC0EIE IEC11bits.ADCC0EIE
#define _ADCC1EIE IEC11bits.ADCC1EIE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _IC1IP IPC0bits.IC1IP
#define _OC1IP IPC0bits.OC1IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _IC1IP0 IPC0bits.IC1IP0
#define _IC1IP1 IPC0bits.IC1IP1
#define _IC1IP2 IPC0bits.IC1IP2
#define _OC1IP0 IPC0bits.OC1IP0
#define _OC1IP1 IPC0bits.OC1IP1
#define _OC1IP2 IPC0bits.OC1IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _T2IP IPC1bits.T2IP
#define _T2IP0 IPC1bits.T2IP0
#define _T2IP1 IPC1bits.T2IP1
#define _T2IP2 IPC1bits.T2IP2

/* IPC2 */
#define _T3IP IPC2bits.T3IP
#define _SPI1EIP IPC2bits.SPI1EIP
#define _SPI1IP IPC2bits.SPI1IP
#define _U1RXIP IPC2bits.U1RXIP
#define _T3IP0 IPC2bits.T3IP0
#define _T3IP1 IPC2bits.T3IP1
#define _T3IP2 IPC2bits.T3IP2
#define _SPI1EIP0 IPC2bits.SPI1EIP0
#define _SPI1EIP1 IPC2bits.SPI1EIP1
#define _SPI1EIP2 IPC2bits.SPI1EIP2
#define _SPI1IP0 IPC2bits.SPI1IP0
#define _SPI1IP1 IPC2bits.SPI1IP1
#define _SPI1IP2 IPC2bits.SPI1IP2
#define _U1RXIP0 IPC2bits.U1RXIP0
#define _U1RXIP1 IPC2bits.U1RXIP1
#define _U1RXIP2 IPC2bits.U1RXIP2

/* IPC3 */
#define _U1TXIP IPC3bits.U1TXIP
#define _ADCIP IPC3bits.ADCIP
#define _NVMIP IPC3bits.NVMIP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _ADCIP0 IPC3bits.ADCIP0
#define _ADCIP1 IPC3bits.ADCIP1
#define _ADCIP2 IPC3bits.ADCIP2
#define _NVMIP0 IPC3bits.NVMIP0
#define _NVMIP1 IPC3bits.NVMIP1
#define _NVMIP2 IPC3bits.NVMIP2

/* IPC4 */
#define _SI2C1IP IPC4bits.SI2C1IP
#define _MI2C1IP IPC4bits.MI2C1IP
#define _AC1IP IPC4bits.AC1IP
#define _CNIP IPC4bits.CNIP
#define _SI2C1IP0 IPC4bits.SI2C1IP0
#define _SI2C1IP1 IPC4bits.SI2C1IP1
#define _SI2C1IP2 IPC4bits.SI2C1IP2
#define _MI2C1IP0 IPC4bits.MI2C1IP0
#define _MI2C1IP1 IPC4bits.MI2C1IP1
#define _MI2C1IP2 IPC4bits.MI2C1IP2
#define _AC1IP0 IPC4bits.AC1IP0
#define _AC1IP1 IPC4bits.AC1IP1
#define _AC1IP2 IPC4bits.AC1IP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2

/* IPC7 */
#define _INT2IP IPC7bits.INT2IP
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2

/* IPC13 */
#define _INT4IP IPC13bits.INT4IP
#define _INT4IP0 IPC13bits.INT4IP0
#define _INT4IP1 IPC13bits.INT4IP1
#define _INT4IP2 IPC13bits.INT4IP2

/* IPC14 */
#define _PSEMIP IPC14bits.PSEMIP
#define _PSEMIP0 IPC14bits.PSEMIP0
#define _PSEMIP1 IPC14bits.PSEMIP1
#define _PSEMIP2 IPC14bits.PSEMIP2

/* IPC16 */
#define _U1EIP IPC16bits.U1EIP
#define _U1EIP0 IPC16bits.U1EIP0
#define _U1EIP1 IPC16bits.U1EIP1
#define _U1EIP2 IPC16bits.U1EIP2

/* IPC18 */
#define _PSESIP IPC18bits.PSESIP
#define _PSESIP0 IPC18bits.PSESIP0
#define _PSESIP1 IPC18bits.PSESIP1
#define _PSESIP2 IPC18bits.PSESIP2

/* IPC23 */
#define _PWM1IP IPC23bits.PWM1IP
#define _PWM2IP IPC23bits.PWM2IP
#define _PWM1IP0 IPC23bits.PWM1IP0
#define _PWM1IP1 IPC23bits.PWM1IP1
#define _PWM1IP2 IPC23bits.PWM1IP2
#define _PWM2IP0 IPC23bits.PWM2IP0
#define _PWM2IP1 IPC23bits.PWM2IP1
#define _PWM2IP2 IPC23bits.PWM2IP2

/* IPC24 */
#define _PWM3IP IPC24bits.PWM3IP
#define _PWM3IP0 IPC24bits.PWM3IP0
#define _PWM3IP1 IPC24bits.PWM3IP1
#define _PWM3IP2 IPC24bits.PWM3IP2

/* IPC25 */
#define _AC2IP IPC25bits.AC2IP
#define _AC2IP0 IPC25bits.AC2IP0
#define _AC2IP1 IPC25bits.AC2IP1
#define _AC2IP2 IPC25bits.AC2IP2

/* IPC27 */
#define _ADCAN0IP IPC27bits.ADCAN0IP
#define _ADCAN1IP IPC27bits.ADCAN1IP
#define _ADCAN0IP0 IPC27bits.ADCAN0IP0
#define _ADCAN0IP1 IPC27bits.ADCAN0IP1
#define _ADCAN0IP2 IPC27bits.ADCAN0IP2
#define _ADCAN1IP0 IPC27bits.ADCAN1IP0
#define _ADCAN1IP1 IPC27bits.ADCAN1IP1
#define _ADCAN1IP2 IPC27bits.ADCAN1IP2

/* IPC28 */
#define _ADCAN2IP IPC28bits.ADCAN2IP
#define _ADCAN3IP IPC28bits.ADCAN3IP
#define _ADCAN4IP IPC28bits.ADCAN4IP
#define _ADCAN5IP IPC28bits.ADCAN5IP
#define _ADCAN2IP0 IPC28bits.ADCAN2IP0
#define _ADCAN2IP1 IPC28bits.ADCAN2IP1
#define _ADCAN2IP2 IPC28bits.ADCAN2IP2
#define _ADCAN3IP0 IPC28bits.ADCAN3IP0
#define _ADCAN3IP1 IPC28bits.ADCAN3IP1
#define _ADCAN3IP2 IPC28bits.ADCAN3IP2
#define _ADCAN4IP0 IPC28bits.ADCAN4IP0
#define _ADCAN4IP1 IPC28bits.ADCAN4IP1
#define _ADCAN4IP2 IPC28bits.ADCAN4IP2
#define _ADCAN5IP0 IPC28bits.ADCAN5IP0
#define _ADCAN5IP1 IPC28bits.ADCAN5IP1
#define _ADCAN5IP2 IPC28bits.ADCAN5IP2

/* IPC29 */
#define _ADCAN6IP IPC29bits.ADCAN6IP
#define _ADCAN7IP IPC29bits.ADCAN7IP
#define _ADCAN6IP0 IPC29bits.ADCAN6IP0
#define _ADCAN6IP1 IPC29bits.ADCAN6IP1
#define _ADCAN6IP2 IPC29bits.ADCAN6IP2
#define _ADCAN7IP0 IPC29bits.ADCAN7IP0
#define _ADCAN7IP1 IPC29bits.ADCAN7IP1
#define _ADCAN7IP2 IPC29bits.ADCAN7IP2

/* IPC37 */
#define _ADCAN8IP IPC37bits.ADCAN8IP
#define _ADCAN8IP0 IPC37bits.ADCAN8IP0
#define _ADCAN8IP1 IPC37bits.ADCAN8IP1
#define _ADCAN8IP2 IPC37bits.ADCAN8IP2

/* IPC38 */
#define _ADCAN9IP IPC38bits.ADCAN9IP
#define _ADCAN10IP IPC38bits.ADCAN10IP
#define _ADCAN11IP IPC38bits.ADCAN11IP
#define _ADCAN12IP IPC38bits.ADCAN12IP
#define _ADCAN9IP0 IPC38bits.ADCAN9IP0
#define _ADCAN9IP1 IPC38bits.ADCAN9IP1
#define _ADCAN9IP2 IPC38bits.ADCAN9IP2
#define _ADCAN10IP0 IPC38bits.ADCAN10IP0
#define _ADCAN10IP1 IPC38bits.ADCAN10IP1
#define _ADCAN10IP2 IPC38bits.ADCAN10IP2
#define _ADCAN11IP0 IPC38bits.ADCAN11IP0
#define _ADCAN11IP1 IPC38bits.ADCAN11IP1
#define _ADCAN11IP2 IPC38bits.ADCAN11IP2
#define _ADCAN12IP0 IPC38bits.ADCAN12IP0
#define _ADCAN12IP1 IPC38bits.ADCAN12IP1
#define _ADCAN12IP2 IPC38bits.ADCAN12IP2

/* IPC39 */
#define _ADCAN13IP IPC39bits.ADCAN13IP
#define _ADCAN14IP IPC39bits.ADCAN14IP
#define _ADCAN13IP0 IPC39bits.ADCAN13IP0
#define _ADCAN13IP1 IPC39bits.ADCAN13IP1
#define _ADCAN13IP2 IPC39bits.ADCAN13IP2
#define _ADCAN14IP0 IPC39bits.ADCAN14IP0
#define _ADCAN14IP1 IPC39bits.ADCAN14IP1
#define _ADCAN14IP2 IPC39bits.ADCAN14IP2

/* IPC43 */
#define _I2C1BCIP IPC43bits.I2C1BCIP
#define _I2C1BCIP0 IPC43bits.I2C1BCIP0
#define _I2C1BCIP1 IPC43bits.I2C1BCIP1
#define _I2C1BCIP2 IPC43bits.I2C1BCIP2

/* IPC44 */
#define _ADCFLTIP IPC44bits.ADCFLTIP
#define _ADCMP1IP IPC44bits.ADCMP1IP
#define _ADCMP2IP IPC44bits.ADCMP2IP
#define _ADCFLTR1IP IPC44bits.ADCFLTR1IP
#define _ADCFLTIP0 IPC44bits.ADCFLTIP0
#define _ADCFLTIP1 IPC44bits.ADCFLTIP1
#define _ADCFLTIP2 IPC44bits.ADCFLTIP2
#define _ADCMP1IP0 IPC44bits.ADCMP1IP0
#define _ADCMP1IP1 IPC44bits.ADCMP1IP1
#define _ADCMP1IP2 IPC44bits.ADCMP1IP2
#define _ADCMP2IP0 IPC44bits.ADCMP2IP0
#define _ADCMP2IP1 IPC44bits.ADCMP2IP1
#define _ADCMP2IP2 IPC44bits.ADCMP2IP2
#define _ADCFLTR1IP0 IPC44bits.ADCFLTR1IP0
#define _ADCFLTR1IP1 IPC44bits.ADCFLTR1IP1
#define _ADCFLTR1IP2 IPC44bits.ADCFLTR1IP2

/* IPC46 */
#define _ADCC0EIP IPC46bits.ADCC0EIP
#define _ADCC0EIP0 IPC46bits.ADCC0EIP0
#define _ADCC0EIP1 IPC46bits.ADCC0EIP1
#define _ADCC0EIP2 IPC46bits.ADCC0EIP2

/* IPC47 */
#define _ADCC1EIP IPC47bits.ADCC1EIP
#define _ADCC1EIP0 IPC47bits.ADCC1EIP0
#define _ADCC1EIP1 IPC47bits.ADCC1EIP1
#define _ADCC1EIP2 IPC47bits.ADCC1EIP2

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _DIV0ERR INTCON1bits.DIV0ERR
#define _SFTACERR INTCON1bits.SFTACERR
#define _COVTE INTCON1bits.COVTE
#define _OVBTE INTCON1bits.OVBTE
#define _OVATE INTCON1bits.OVATE
#define _COVBERR INTCON1bits.COVBERR
#define _COVAERR INTCON1bits.COVAERR
#define _OVBERR INTCON1bits.OVBERR
#define _OVAERR INTCON1bits.OVAERR
#define _NSTDIS INTCON1bits.NSTDIS

/* INTCON2 */
#define _INT0EP INTCON2bits.INT0EP
#define _INT1EP INTCON2bits.INT1EP
#define _INT2EP INTCON2bits.INT2EP
#define _INT4EP INTCON2bits.INT4EP
#define _AIVTEN INTCON2bits.AIVTEN
#define _SWTRAP INTCON2bits.SWTRAP
#define _DISI INTCON2bits.DISI
#define _GIE INTCON2bits.GIE

/* INTCON3 */
#define _APLL INTCON3bits.APLL
#define _DOOVR INTCON3bits.DOOVR
#define _NAE INTCON3bits.NAE

/* INTCON4 */
#define _SGHT INTCON4bits.SGHT

/* INTTREG */
#define _VECNUM INTTREGbits.VECNUM
#define _ILR INTTREGbits.ILR
#define _VECNUM0 INTTREGbits.VECNUM0
#define _VECNUM1 INTTREGbits.VECNUM1
#define _VECNUM2 INTTREGbits.VECNUM2
#define _VECNUM3 INTTREGbits.VECNUM3
#define _VECNUM4 INTTREGbits.VECNUM4
#define _VECNUM5 INTTREGbits.VECNUM5
#define _VECNUM6 INTTREGbits.VECNUM6
#define _VECNUM7 INTTREGbits.VECNUM7
#define _ILR0 INTTREGbits.ILR0
#define _ILR1 INTTREGbits.ILR1
#define _ILR2 INTTREGbits.ILR2
#define _ILR3 INTTREGbits.ILR3

/* OC1CON1 */
#define _OCM OC1CON1bits.OCM
#define _TRIGMODE OC1CON1bits.TRIGMODE
#define _OCFLTA OC1CON1bits.OCFLTA
#define _ENFLTA OC1CON1bits.ENFLTA
#define _OCTSEL OC1CON1bits.OCTSEL
#define _OCSIDL OC1CON1bits.OCSIDL
#define _OCM0 OC1CON1bits.OCM0
#define _OCM1 OC1CON1bits.OCM1
#define _OCM2 OC1CON1bits.OCM2
#define _OCFLT OC1CON1bits.OCFLT
#define _ENFLT OC1CON1bits.ENFLT
#define _OCTSEL0 OC1CON1bits.OCTSEL0
#define _OCTSEL1 OC1CON1bits.OCTSEL1
#define _OCTSEL2 OC1CON1bits.OCTSEL2
#define _OCFLT0 OC1CON1bits.OCFLT0
#define _ENFLT0 OC1CON1bits.ENFLT0

/* OC1CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
#define _OCTRIS OC1CON2bits.OCTRIS
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
#define _OCTRIG OC1CON2bits.OCTRIG
#define _OC32 OC1CON2bits.OC32
#define _OCINV OC1CON2bits.OCINV
#define _FLTTRIEN OC1CON2bits.FLTTRIEN
#define _FLTOUT OC1CON2bits.FLTOUT
#define _FLTMD OC1CON2bits.FLTMD
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
#define _FLTMODE OC1CON2bits.FLTMODE

/* PTCON */
/* Bitname _SEVTPS cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EIPU cannot be defined because it is used by more than one SFR */
/* Bitname _SEIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SESTAT cannot be defined because it is used by more than one SFR */
#define _PTSIDL PTCONbits.PTSIDL
#define _PTEN PTCONbits.PTEN
/* Bitname _SEVTPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC2 cannot be defined because it is used by more than one SFR */

/* PTCON2 */
/* Bitname _PCLKDIV cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV2 cannot be defined because it is used by more than one SFR */

/* SEVTCMP */
#define _SEVTCMP SEVTCMPbits.SEVTCMP

/* STCON */
/* Bitname _SEVTPS cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EIPU cannot be defined because it is used by more than one SFR */
/* Bitname _SEIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SESTAT cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _SEVTPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSRC2 cannot be defined because it is used by more than one SFR */

/* STCON2 */
/* Bitname _PCLKDIV cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _PCLKDIV2 cannot be defined because it is used by more than one SFR */

/* SSEVTCMP */
#define _SSEVTCMP SSEVTCMPbits.SSEVTCMP
#define _SSEVTCMP0 SSEVTCMPbits.SSEVTCMP0
#define _SSEVTCMP1 SSEVTCMPbits.SSEVTCMP1
#define _SSEVTCMP2 SSEVTCMPbits.SSEVTCMP2
#define _SSEVTCMP3 SSEVTCMPbits.SSEVTCMP3
#define _SSEVTCMP4 SSEVTCMPbits.SSEVTCMP4
#define _SSEVTCMP5 SSEVTCMPbits.SSEVTCMP5
#define _SSEVTCMP6 SSEVTCMPbits.SSEVTCMP6
#define _SSEVTCMP7 SSEVTCMPbits.SSEVTCMP7
#define _SSEVTCMP8 SSEVTCMPbits.SSEVTCMP8
#define _SSEVTCMP9 SSEVTCMPbits.SSEVTCMP9
#define _SSEVTCMP10 SSEVTCMPbits.SSEVTCMP10
#define _SSEVTCMP11 SSEVTCMPbits.SSEVTCMP11
#define _SSEVTCMP12 SSEVTCMPbits.SSEVTCMP12

/* CHOP */
#define _CHOPCLK CHOPbits.CHOPCLK
#define _CHPCLKEN CHOPbits.CHPCLKEN
#define _CHOPCLK3 CHOPbits.CHOPCLK3
#define _CHOPCLK4 CHOPbits.CHOPCLK4
#define _CHOPCLK5 CHOPbits.CHOPCLK5
#define _CHOPCLK6 CHOPbits.CHOPCLK6
#define _CHOPCLK7 CHOPbits.CHOPCLK7
#define _CHOPCLK8 CHOPbits.CHOPCLK8
#define _CHOPCLK9 CHOPbits.CHOPCLK9

/* PWMCON1 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON1 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON1 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG1 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON1 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG1 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* PWMCAP1 */
/* Bitname _PWMCAP cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP0 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP1 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP2 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP3 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP4 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP5 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP6 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP7 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP8 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP9 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP10 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP11 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP12 cannot be defined because it is used by more than one SFR */

/* LEBCON1 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY1 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON1 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON2 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON2 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON2 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG2 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON2 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG2 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* PWMCAP2 */
/* Bitname _PWMCAP cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP0 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP1 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP2 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP3 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP4 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP5 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP6 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP7 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP8 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP9 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP10 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP11 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP12 cannot be defined because it is used by more than one SFR */

/* LEBCON2 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY2 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON2 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* PWMCON3 */
/* Bitname _IUE cannot be defined because it is used by more than one SFR */
/* Bitname _XPRES cannot be defined because it is used by more than one SFR */
/* Bitname _CAM cannot be defined because it is used by more than one SFR */
/* Bitname _MTBS cannot be defined because it is used by more than one SFR */
/* Bitname _DTC cannot be defined because it is used by more than one SFR */
/* Bitname _MDCS cannot be defined because it is used by more than one SFR */
/* Bitname _ITB cannot be defined because it is used by more than one SFR */
/* Bitname _TRGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _CLIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTIEN cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _CLSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _DTC0 cannot be defined because it is used by more than one SFR */
/* Bitname _DTC1 cannot be defined because it is used by more than one SFR */

/* IOCON3 */
/* Bitname _OSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _SWAP cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENL cannot be defined because it is used by more than one SFR */
/* Bitname _OVRENH cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD cannot be defined because it is used by more than one SFR */
/* Bitname _POLL cannot be defined because it is used by more than one SFR */
/* Bitname _POLH cannot be defined because it is used by more than one SFR */
/* Bitname _PENL cannot be defined because it is used by more than one SFR */
/* Bitname _PENH cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRDAT1 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _PMOD1 cannot be defined because it is used by more than one SFR */

/* FCLCON3 */
/* Bitname _FLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTPOL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC cannot be defined because it is used by more than one SFR */
/* Bitname _CLMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CLPOL cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IFLTMOD cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTSRC4 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC2 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC3 cannot be defined because it is used by more than one SFR */
/* Bitname _CLSRC4 cannot be defined because it is used by more than one SFR */

/* TRIG3 */
/* Bitname _TRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGCMP12 cannot be defined because it is used by more than one SFR */

/* TRGCON3 */
/* Bitname _TRGSTRT cannot be defined because it is used by more than one SFR */
/* Bitname _DTM cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT3 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT4 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSTRT5 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGDIV3 cannot be defined because it is used by more than one SFR */

/* STRIG3 */
/* Bitname _STRGCMP cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP0 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP1 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP2 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP3 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP4 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP5 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP6 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP7 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP8 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP9 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP10 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP11 cannot be defined because it is used by more than one SFR */
/* Bitname _STRGCMP12 cannot be defined because it is used by more than one SFR */

/* PWMCAP3 */
/* Bitname _PWMCAP cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP0 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP1 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP2 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP3 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP4 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP5 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP6 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP7 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP8 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP9 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP10 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP11 cannot be defined because it is used by more than one SFR */
/* Bitname _PWMCAP12 cannot be defined because it is used by more than one SFR */

/* LEBCON3 */
/* Bitname _BPLL cannot be defined because it is used by more than one SFR */
/* Bitname _BPLH cannot be defined because it is used by more than one SFR */
/* Bitname _BPHL cannot be defined because it is used by more than one SFR */
/* Bitname _BPHH cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _BCH cannot be defined because it is used by more than one SFR */
/* Bitname _CLLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTLEBEN cannot be defined because it is used by more than one SFR */
/* Bitname _PLF cannot be defined because it is used by more than one SFR */
/* Bitname _PLR cannot be defined because it is used by more than one SFR */
/* Bitname _PHF cannot be defined because it is used by more than one SFR */
/* Bitname _PHR cannot be defined because it is used by more than one SFR */

/* LEBDLY3 */
/* Bitname _LEB cannot be defined because it is used by more than one SFR */
/* Bitname _LEB0 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB1 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB2 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB3 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB4 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB5 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB6 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB7 cannot be defined because it is used by more than one SFR */
/* Bitname _LEB8 cannot be defined because it is used by more than one SFR */

/* AUXCON3 */
/* Bitname _CHOPLEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPHEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _HRDDIS cannot be defined because it is used by more than one SFR */
/* Bitname _HRPDIS cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHOPSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _BLANKSEL3 cannot be defined because it is used by more than one SFR */

/* TRISA */
#define _TRISA0 TRISAbits.TRISA0
#define _TRISA1 TRISAbits.TRISA1
#define _TRISA2 TRISAbits.TRISA2
#define _TRISA3 TRISAbits.TRISA3
#define _TRISA4 TRISAbits.TRISA4

/* PORTA */
#define _RA0 PORTAbits.RA0
#define _RA1 PORTAbits.RA1
#define _RA2 PORTAbits.RA2
#define _RA3 PORTAbits.RA3
#define _RA4 PORTAbits.RA4

/* LATA */
#define _LATA0 LATAbits.LATA0
#define _LATA1 LATAbits.LATA1
#define _LATA2 LATAbits.LATA2
#define _LATA3 LATAbits.LATA3
#define _LATA4 LATAbits.LATA4

/* ODCA */
#define _ODCA0 ODCAbits.ODCA0
#define _ODCA1 ODCAbits.ODCA1
#define _ODCA2 ODCAbits.ODCA2
#define _ODCA3 ODCAbits.ODCA3
#define _ODCA4 ODCAbits.ODCA4

/* CNENA */
#define _CNIEA0 CNENAbits.CNIEA0
#define _CNIEA1 CNENAbits.CNIEA1
#define _CNIEA2 CNENAbits.CNIEA2
#define _CNIEA3 CNENAbits.CNIEA3
#define _CNIEA4 CNENAbits.CNIEA4

/* CNPUA */
#define _CNPUA0 CNPUAbits.CNPUA0
#define _CNPUA1 CNPUAbits.CNPUA1
#define _CNPUA2 CNPUAbits.CNPUA2
#define _CNPUA3 CNPUAbits.CNPUA3
#define _CNPUA4 CNPUAbits.CNPUA4

/* CNPDA */
#define _CNPDA0 CNPDAbits.CNPDA0
#define _CNPDA1 CNPDAbits.CNPDA1
#define _CNPDA2 CNPDAbits.CNPDA2
#define _CNPDA3 CNPDAbits.CNPDA3
#define _CNPDA4 CNPDAbits.CNPDA4

/* ANSELA */
#define _ANSA0 ANSELAbits.ANSA0
#define _ANSA1 ANSELAbits.ANSA1
#define _ANSA2 ANSELAbits.ANSA2

/* TRISB */
#define _TRISB0 TRISBbits.TRISB0
#define _TRISB1 TRISBbits.TRISB1
#define _TRISB2 TRISBbits.TRISB2
#define _TRISB3 TRISBbits.TRISB3
#define _TRISB4 TRISBbits.TRISB4
#define _TRISB5 TRISBbits.TRISB5
#define _TRISB6 TRISBbits.TRISB6
#define _TRISB7 TRISBbits.TRISB7
#define _TRISB8 TRISBbits.TRISB8
#define _TRISB9 TRISBbits.TRISB9
#define _TRISB10 TRISBbits.TRISB10
#define _TRISB11 TRISBbits.TRISB11
#define _TRISB12 TRISBbits.TRISB12
#define _TRISB13 TRISBbits.TRISB13
#define _TRISB14 TRISBbits.TRISB14
#define _TRISB15 TRISBbits.TRISB15

/* PORTB */
#define _RB0 PORTBbits.RB0
#define _RB1 PORTBbits.RB1
#define _RB2 PORTBbits.RB2
#define _RB3 PORTBbits.RB3
#define _RB4 PORTBbits.RB4
#define _RB5 PORTBbits.RB5
#define _RB6 PORTBbits.RB6
#define _RB7 PORTBbits.RB7
#define _RB8 PORTBbits.RB8
#define _RB9 PORTBbits.RB9
#define _RB10 PORTBbits.RB10
#define _RB11 PORTBbits.RB11
#define _RB12 PORTBbits.RB12
#define _RB13 PORTBbits.RB13
#define _RB14 PORTBbits.RB14
#define _RB15 PORTBbits.RB15

/* LATB */
#define _LATB0 LATBbits.LATB0
#define _LATB1 LATBbits.LATB1
#define _LATB2 LATBbits.LATB2
#define _LATB3 LATBbits.LATB3
#define _LATB4 LATBbits.LATB4
#define _LATB5 LATBbits.LATB5
#define _LATB6 LATBbits.LATB6
#define _LATB7 LATBbits.LATB7
#define _LATB8 LATBbits.LATB8
#define _LATB9 LATBbits.LATB9
#define _LATB10 LATBbits.LATB10
#define _LATB11 LATBbits.LATB11
#define _LATB12 LATBbits.LATB12
#define _LATB13 LATBbits.LATB13
#define _LATB14 LATBbits.LATB14
#define _LATB15 LATBbits.LATB15

/* ODCB */
#define _ODCB0 ODCBbits.ODCB0
#define _ODCB1 ODCBbits.ODCB1
#define _ODCB2 ODCBbits.ODCB2
#define _ODCB3 ODCBbits.ODCB3
#define _ODCB4 ODCBbits.ODCB4
#define _ODCB5 ODCBbits.ODCB5
#define _ODCB6 ODCBbits.ODCB6
#define _ODCB7 ODCBbits.ODCB7
#define _ODCB8 ODCBbits.ODCB8
#define _ODCB9 ODCBbits.ODCB9
#define _ODCB10 ODCBbits.ODCB10
#define _ODCB11 ODCBbits.ODCB11
#define _ODCB12 ODCBbits.ODCB12
#define _ODCB13 ODCBbits.ODCB13
#define _ODCB14 ODCBbits.ODCB14
#define _ODCB15 ODCBbits.ODCB15

/* CNENB */
#define _CNIEB0 CNENBbits.CNIEB0
#define _CNIEB1 CNENBbits.CNIEB1
#define _CNIEB2 CNENBbits.CNIEB2
#define _CNIEB3 CNENBbits.CNIEB3
#define _CNIEB4 CNENBbits.CNIEB4
#define _CNIEB5 CNENBbits.CNIEB5
#define _CNIEB6 CNENBbits.CNIEB6
#define _CNIEB7 CNENBbits.CNIEB7
#define _CNIEB8 CNENBbits.CNIEB8
#define _CNIEB9 CNENBbits.CNIEB9
#define _CNIEB10 CNENBbits.CNIEB10
#define _CNIEB11 CNENBbits.CNIEB11
#define _CNIEB12 CNENBbits.CNIEB12
#define _CNIEB13 CNENBbits.CNIEB13
#define _CNIEB14 CNENBbits.CNIEB14
#define _CNIEB15 CNENBbits.CNIEB15

/* CNPUB */
#define _CNPUB0 CNPUBbits.CNPUB0
#define _CNPUB1 CNPUBbits.CNPUB1
#define _CNPUB2 CNPUBbits.CNPUB2
#define _CNPUB3 CNPUBbits.CNPUB3
#define _CNPUB4 CNPUBbits.CNPUB4
#define _CNPUB5 CNPUBbits.CNPUB5
#define _CNPUB6 CNPUBbits.CNPUB6
#define _CNPUB7 CNPUBbits.CNPUB7
#define _CNPUB8 CNPUBbits.CNPUB8
#define _CNPUB9 CNPUBbits.CNPUB9
#define _CNPUB10 CNPUBbits.CNPUB10
#define _CNPUB11 CNPUBbits.CNPUB11
#define _CNPUB12 CNPUBbits.CNPUB12
#define _CNPUB13 CNPUBbits.CNPUB13
#define _CNPUB14 CNPUBbits.CNPUB14
#define _CNPUB15 CNPUBbits.CNPUB15

/* CNPDB */
#define _CNPDB0 CNPDBbits.CNPDB0
#define _CNPDB1 CNPDBbits.CNPDB1
#define _CNPDB2 CNPDBbits.CNPDB2
#define _CNPDB3 CNPDBbits.CNPDB3
#define _CNPDB4 CNPDBbits.CNPDB4
#define _CNPDB5 CNPDBbits.CNPDB5
#define _CNPDB6 CNPDBbits.CNPDB6
#define _CNPDB7 CNPDBbits.CNPDB7
#define _CNPDB8 CNPDBbits.CNPDB8
#define _CNPDB9 CNPDBbits.CNPDB9
#define _CNPDB10 CNPDBbits.CNPDB10
#define _CNPDB11 CNPDBbits.CNPDB11
#define _CNPDB12 CNPDBbits.CNPDB12
#define _CNPDB13 CNPDBbits.CNPDB13
#define _CNPDB14 CNPDBbits.CNPDB14
#define _CNPDB15 CNPDBbits.CNPDB15

/* ANSELB */
#define _ANSB0 ANSELBbits.ANSB0
#define _ANSB1 ANSELBbits.ANSB1
#define _ANSB2 ANSELBbits.ANSB2
#define _ANSB3 ANSELBbits.ANSB3
#define _ANSB4 ANSELBbits.ANSB4
#define _ANSB5 ANSELBbits.ANSB5
#define _ANSB6 ANSELBbits.ANSB6
#define _ANSB7 ANSELBbits.ANSB7
#define _ANSB9 ANSELBbits.ANSB9
#define _ANSB10 ANSELBbits.ANSB10


/* ---------------------------------------------------------- */
/* Some useful macros for inline assembler instructions       */
/* ---------------------------------------------------------- */

#define Nop()    __builtin_nop()
#define ClrWdt() {__asm__ volatile ("clrwdt");}
#define Sleep()  {__asm__ volatile ("pwrsav #0");}
#define Idle()   {__asm__ volatile ("pwrsav #1");}

/*----------------------------------------------------------- */
/* Some useful macros for allocating data memory              */
/*----------------------------------------------------------- */

/* The following macros require an argument N that specifies  */
/* alignment. N must a power of two, minimum value = 2.       */
/* For example, to declare an uninitialized array in X memory */
/* that is aligned to a 32 byte address:                      */
/*                                                            */
/* int _XBSS(32) xbuf[16];                                    */
/*                                                            */
#define _XBSS(N)    __attribute__((space(xmemory),far,aligned(N)))
#define _XDATA(N)   __attribute__((space(xmemory),far,aligned(N)))
#define _YBSS(N)    __attribute__((space(ymemory),far,aligned(N)))
#define _YDATA(N)   __attribute__((space(ymemory),far,aligned(N)))

/* The following macros do not require an argument. They can  */
/* be used to locate a variable in persistent data memory or  */
/* in near data memory. For example, to declare two variables */
/* that retain their values across a device reset:            */
/*                                                            */
/* int _PERSISTENT var1,var2;                                 */
/*                                                            */
#define _PERSISTENT __attribute__((persistent))
#define _NEAR       __attribute__((near))

/* ---------------------------------------------------------- */
/* Some useful macros for declaring functions                 */
/* ---------------------------------------------------------- */

/* The following macros can be used to declare interrupt      */
/* service routines (ISRs). For example, to declare an ISR    */
/* for the timer1 interrupt:                                  */
/*                                                            */
/* void _ISR _T1Interrupt(void);                              */
/*                                                            */
/* To declare an ISR for the SPI1 interrupt with fast         */
/* context save:                                              */
/*                                                            */
/* void _ISRFAST _SPI1Interrupt(void);                        */
/*                                                            */
/* Note: ISRs will be installed into the interrupt vector     */
/* tables automatically if the reserved names listed in the   */
/* MPLAB C30 Compiler User's Guide (DS51284) are used.        */
/*                                                            */
#define _ISR __attribute__((interrupt))
#define _ISRFAST __attribute__((interrupt, shadow))

/* ---------------------------------------------------------- */
/* Some useful macros for changing the CPU IPL                */
/* ---------------------------------------------------------- */

/* The following macros can be used to modify the current CPU */
/* IPL. The definition of the macro may vary from device to   */
/* device.                                                    */
/*                                                            */
/* To safely set the CPU IPL, use SET_CPU_IPL(ipl); the       */
/* valid range of ipl is 0-7, it may be any expression.       */
/*                                                            */
/* SET_CPU_IPL(7);                                            */
/*                                                            */
/* To preserve the current IPL and save it use                */
/* SET_AND_SAVE_CPU_IPL(save_to, ipl); the valid range of ipl */
/* is 0-7 and may be any expression, save_to should denote    */
/* some temporary storage.                                    */
/*                                                            */
/* unsigned int old_ipl;                                      */
/*                                                            */
/* SET_AND_SAVE_CPU_IPL(old_ipl, 7);                          */
/*                                                            */
/* The IPL can be restored with RESTORE_CPU_IPL(saved_to)     */
/*                                                            */
/* RESTORE_CPU_IPL(old_ipl);                                  */

#define SET_CPU_IPL(ipl) {       \
  unsigned int DISI_save;        \
                                 \
  DISI_save = DISICNT;           \
  asm volatile ("disi #0x3FFF"); \
  SRbits.IPL = ipl;              \
  __builtin_write_DISICNT( DISI_save); } (void) 0

#define SET_AND_SAVE_CPU_IPL(save_to, ipl) { \
  save_to = SRbits.IPL; \
  SET_CPU_IPL(ipl); } (void) 0;

#define RESTORE_CPU_IPL(saved_to) SET_CPU_IPL(saved_to)

#define _DSRPAG_DSRPAG_POSITION                  0x00000000
#define _DSRPAG_DSRPAG_MASK                      0x000003FF
#define _DSRPAG_DSRPAG_LENGTH                    0x0000000A

#define _DSWPAG_DSWPAG_POSITION                  0x00000000
#define _DSWPAG_DSWPAG_MASK                      0x000001FF
#define _DSWPAG_DSWPAG_LENGTH                    0x00000009

#define _SR_C_POSITION                           0x00000000
#define _SR_C_MASK                               0x00000001
#define _SR_C_LENGTH                             0x00000001

#define _SR_Z_POSITION                           0x00000001
#define _SR_Z_MASK                               0x00000002
#define _SR_Z_LENGTH                             0x00000001

#define _SR_OV_POSITION                          0x00000002
#define _SR_OV_MASK                              0x00000004
#define _SR_OV_LENGTH                            0x00000001

#define _SR_N_POSITION                           0x00000003
#define _SR_N_MASK                               0x00000008
#define _SR_N_LENGTH                             0x00000001

#define _SR_RA_POSITION                          0x00000004
#define _SR_RA_MASK                              0x00000010
#define _SR_RA_LENGTH                            0x00000001

#define _SR_IPL_POSITION                         0x00000005
#define _SR_IPL_MASK                             0x000000E0
#define _SR_IPL_LENGTH                           0x00000003

#define _SR_DC_POSITION                          0x00000008
#define _SR_DC_MASK                              0x00000100
#define _SR_DC_LENGTH                            0x00000001

#define _SR_DA_POSITION                          0x00000009
#define _SR_DA_MASK                              0x00000200
#define _SR_DA_LENGTH                            0x00000001

#define _SR_SAB_POSITION                         0x0000000A
#define _SR_SAB_MASK                             0x00000400
#define _SR_SAB_LENGTH                           0x00000001

#define _SR_OAB_POSITION                         0x0000000B
#define _SR_OAB_MASK                             0x00000800
#define _SR_OAB_LENGTH                           0x00000001

#define _SR_SB_POSITION                          0x0000000C
#define _SR_SB_MASK                              0x00001000
#define _SR_SB_LENGTH                            0x00000001

#define _SR_SA_POSITION                          0x0000000D
#define _SR_SA_MASK                              0x00002000
#define _SR_SA_LENGTH                            0x00000001

#define _SR_OB_POSITION                          0x0000000E
#define _SR_OB_MASK                              0x00004000
#define _SR_OB_LENGTH                            0x00000001

#define _SR_OA_POSITION                          0x0000000F
#define _SR_OA_MASK                              0x00008000
#define _SR_OA_LENGTH                            0x00000001

#define _SR_IPL0_POSITION                        0x00000005
#define _SR_IPL0_MASK                            0x00000020
#define _SR_IPL0_LENGTH                          0x00000001

#define _SR_IPL1_POSITION                        0x00000006
#define _SR_IPL1_MASK                            0x00000040
#define _SR_IPL1_LENGTH                          0x00000001

#define _SR_IPL2_POSITION                        0x00000007
#define _SR_IPL2_MASK                            0x00000080
#define _SR_IPL2_LENGTH                          0x00000001

#define _CORCON_IF_POSITION                      0x00000000
#define _CORCON_IF_MASK                          0x00000001
#define _CORCON_IF_LENGTH                        0x00000001

#define _CORCON_RND_POSITION                     0x00000001
#define _CORCON_RND_MASK                         0x00000002
#define _CORCON_RND_LENGTH                       0x00000001

#define _CORCON_SFA_POSITION                     0x00000002
#define _CORCON_SFA_MASK                         0x00000004
#define _CORCON_SFA_LENGTH                       0x00000001

#define _CORCON_IPL3_POSITION                    0x00000003
#define _CORCON_IPL3_MASK                        0x00000008
#define _CORCON_IPL3_LENGTH                      0x00000001

#define _CORCON_ACCSAT_POSITION                  0x00000004
#define _CORCON_ACCSAT_MASK                      0x00000010
#define _CORCON_ACCSAT_LENGTH                    0x00000001

#define _CORCON_SATDW_POSITION                   0x00000005
#define _CORCON_SATDW_MASK                       0x00000020
#define _CORCON_SATDW_LENGTH                     0x00000001

#define _CORCON_SATB_POSITION                    0x00000006
#define _CORCON_SATB_MASK                        0x00000040
#define _CORCON_SATB_LENGTH                      0x00000001

#define _CORCON_SATA_POSITION                    0x00000007
#define _CORCON_SATA_MASK                        0x00000080
#define _CORCON_SATA_LENGTH                      0x00000001

#define _CORCON_DL_POSITION                      0x00000008
#define _CORCON_DL_MASK                          0x00000700
#define _CORCON_DL_LENGTH                        0x00000003

#define _CORCON_EDT_POSITION                     0x0000000B
#define _CORCON_EDT_MASK                         0x00000800
#define _CORCON_EDT_LENGTH                       0x00000001

#define _CORCON_US_POSITION                      0x0000000C
#define _CORCON_US_MASK                          0x00003000
#define _CORCON_US_LENGTH                        0x00000002

#define _CORCON_VAR_POSITION                     0x0000000F
#define _CORCON_VAR_MASK                         0x00008000
#define _CORCON_VAR_LENGTH                       0x00000001

#define _CORCON_DL0_POSITION                     0x00000008
#define _CORCON_DL0_MASK                         0x00000100
#define _CORCON_DL0_LENGTH                       0x00000001

#define _CORCON_DL1_POSITION                     0x00000009
#define _CORCON_DL1_MASK                         0x00000200
#define _CORCON_DL1_LENGTH                       0x00000001

#define _CORCON_DL2_POSITION                     0x0000000A
#define _CORCON_DL2_MASK                         0x00000400
#define _CORCON_DL2_LENGTH                       0x00000001

#define _CORCON_US0_POSITION                     0x0000000C
#define _CORCON_US0_MASK                         0x00001000
#define _CORCON_US0_LENGTH                       0x00000001

#define _CORCON_US1_POSITION                     0x0000000D
#define _CORCON_US1_MASK                         0x00002000
#define _CORCON_US1_LENGTH                       0x00000001

#define _MODCON_XWM_POSITION                     0x00000000
#define _MODCON_XWM_MASK                         0x0000000F
#define _MODCON_XWM_LENGTH                       0x00000004

#define _MODCON_YWM_POSITION                     0x00000004
#define _MODCON_YWM_MASK                         0x000000F0
#define _MODCON_YWM_LENGTH                       0x00000004

#define _MODCON_BWM_POSITION                     0x00000008
#define _MODCON_BWM_MASK                         0x00000F00
#define _MODCON_BWM_LENGTH                       0x00000004

#define _MODCON_YMODEN_POSITION                  0x0000000E
#define _MODCON_YMODEN_MASK                      0x00004000
#define _MODCON_YMODEN_LENGTH                    0x00000001

#define _MODCON_XMODEN_POSITION                  0x0000000F
#define _MODCON_XMODEN_MASK                      0x00008000
#define _MODCON_XMODEN_LENGTH                    0x00000001

#define _MODCON_XWM0_POSITION                    0x00000000
#define _MODCON_XWM0_MASK                        0x00000001
#define _MODCON_XWM0_LENGTH                      0x00000001

#define _MODCON_XWM1_POSITION                    0x00000001
#define _MODCON_XWM1_MASK                        0x00000002
#define _MODCON_XWM1_LENGTH                      0x00000001

#define _MODCON_XWM2_POSITION                    0x00000002
#define _MODCON_XWM2_MASK                        0x00000004
#define _MODCON_XWM2_LENGTH                      0x00000001

#define _MODCON_XWM3_POSITION                    0x00000003
#define _MODCON_XWM3_MASK                        0x00000008
#define _MODCON_XWM3_LENGTH                      0x00000001

#define _MODCON_YWM0_POSITION                    0x00000004
#define _MODCON_YWM0_MASK                        0x00000010
#define _MODCON_YWM0_LENGTH                      0x00000001

#define _MODCON_YWM1_POSITION                    0x00000005
#define _MODCON_YWM1_MASK                        0x00000020
#define _MODCON_YWM1_LENGTH                      0x00000001

#define _MODCON_YWM2_POSITION                    0x00000006
#define _MODCON_YWM2_MASK                        0x00000040
#define _MODCON_YWM2_LENGTH                      0x00000001

#define _MODCON_YWM3_POSITION                    0x00000007
#define _MODCON_YWM3_MASK                        0x00000080
#define _MODCON_YWM3_LENGTH                      0x00000001

#define _MODCON_BWM0_POSITION                    0x00000008
#define _MODCON_BWM0_MASK                        0x00000100
#define _MODCON_BWM0_LENGTH                      0x00000001

#define _MODCON_BWM1_POSITION                    0x00000009
#define _MODCON_BWM1_MASK                        0x00000200
#define _MODCON_BWM1_LENGTH                      0x00000001

#define _MODCON_BWM2_POSITION                    0x0000000A
#define _MODCON_BWM2_MASK                        0x00000400
#define _MODCON_BWM2_LENGTH                      0x00000001

#define _MODCON_BWM3_POSITION                    0x0000000B
#define _MODCON_BWM3_MASK                        0x00000800
#define _MODCON_BWM3_LENGTH                      0x00000001

#define _XBREV_XB_POSITION                       0x00000000
#define _XBREV_XB_MASK                           0x00007FFF
#define _XBREV_XB_LENGTH                         0x0000000F

#define _XBREV_BREN_POSITION                     0x0000000F
#define _XBREV_BREN_MASK                         0x00008000
#define _XBREV_BREN_LENGTH                       0x00000001

#define _XBREV_XB0_POSITION                      0x00000000
#define _XBREV_XB0_MASK                          0x00000001
#define _XBREV_XB0_LENGTH                        0x00000001

#define _XBREV_XB1_POSITION                      0x00000001
#define _XBREV_XB1_MASK                          0x00000002
#define _XBREV_XB1_LENGTH                        0x00000001

#define _XBREV_XB2_POSITION                      0x00000002
#define _XBREV_XB2_MASK                          0x00000004
#define _XBREV_XB2_LENGTH                        0x00000001

#define _XBREV_XB3_POSITION                      0x00000003
#define _XBREV_XB3_MASK                          0x00000008
#define _XBREV_XB3_LENGTH                        0x00000001

#define _XBREV_XB4_POSITION                      0x00000004
#define _XBREV_XB4_MASK                          0x00000010
#define _XBREV_XB4_LENGTH                        0x00000001

#define _XBREV_XB5_POSITION                      0x00000005
#define _XBREV_XB5_MASK                          0x00000020
#define _XBREV_XB5_LENGTH                        0x00000001

#define _XBREV_XB6_POSITION                      0x00000006
#define _XBREV_XB6_MASK                          0x00000040
#define _XBREV_XB6_LENGTH                        0x00000001

#define _XBREV_XB7_POSITION                      0x00000007
#define _XBREV_XB7_MASK                          0x00000080
#define _XBREV_XB7_LENGTH                        0x00000001

#define _XBREV_XB8_POSITION                      0x00000008
#define _XBREV_XB8_MASK                          0x00000100
#define _XBREV_XB8_LENGTH                        0x00000001

#define _XBREV_XB9_POSITION                      0x00000009
#define _XBREV_XB9_MASK                          0x00000200
#define _XBREV_XB9_LENGTH                        0x00000001

#define _XBREV_XB10_POSITION                     0x0000000A
#define _XBREV_XB10_MASK                         0x00000400
#define _XBREV_XB10_LENGTH                       0x00000001

#define _XBREV_XB11_POSITION                     0x0000000B
#define _XBREV_XB11_MASK                         0x00000800
#define _XBREV_XB11_LENGTH                       0x00000001

#define _XBREV_XB12_POSITION                     0x0000000C
#define _XBREV_XB12_MASK                         0x00001000
#define _XBREV_XB12_LENGTH                       0x00000001

#define _XBREV_XB13_POSITION                     0x0000000D
#define _XBREV_XB13_MASK                         0x00002000
#define _XBREV_XB13_LENGTH                       0x00000001

#define _XBREV_XB14_POSITION                     0x0000000E
#define _XBREV_XB14_MASK                         0x00004000
#define _XBREV_XB14_LENGTH                       0x00000001

#define _TBLPAG_TBLPAG_POSITION                  0x00000000
#define _TBLPAG_TBLPAG_MASK                      0x000000FF
#define _TBLPAG_TBLPAG_LENGTH                    0x00000008

#define _CTXTSTAT_MCTXI_POSITION                 0x00000000
#define _CTXTSTAT_MCTXI_MASK                     0x00000007
#define _CTXTSTAT_MCTXI_LENGTH                   0x00000003

#define _CTXTSTAT_CCTXI_POSITION                 0x00000008
#define _CTXTSTAT_CCTXI_MASK                     0x00000700
#define _CTXTSTAT_CCTXI_LENGTH                   0x00000003

#define _T1CON_TCS_POSITION                      0x00000001
#define _T1CON_TCS_MASK                          0x00000002
#define _T1CON_TCS_LENGTH                        0x00000001

#define _T1CON_TSYNC_POSITION                    0x00000002
#define _T1CON_TSYNC_MASK                        0x00000004
#define _T1CON_TSYNC_LENGTH                      0x00000001

#define _T1CON_TCKPS_POSITION                    0x00000004
#define _T1CON_TCKPS_MASK                        0x00000030
#define _T1CON_TCKPS_LENGTH                      0x00000002

#define _T1CON_TGATE_POSITION                    0x00000006
#define _T1CON_TGATE_MASK                        0x00000040
#define _T1CON_TGATE_LENGTH                      0x00000001

#define _T1CON_TSIDL_POSITION                    0x0000000D
#define _T1CON_TSIDL_MASK                        0x00002000
#define _T1CON_TSIDL_LENGTH                      0x00000001

#define _T1CON_TON_POSITION                      0x0000000F
#define _T1CON_TON_MASK                          0x00008000
#define _T1CON_TON_LENGTH                        0x00000001

#define _T1CON_TCKPS0_POSITION                   0x00000004
#define _T1CON_TCKPS0_MASK                       0x00000010
#define _T1CON_TCKPS0_LENGTH                     0x00000001

#define _T1CON_TCKPS1_POSITION                   0x00000005
#define _T1CON_TCKPS1_MASK                       0x00000020
#define _T1CON_TCKPS1_LENGTH                     0x00000001

#define _T2CON_TCS_POSITION                      0x00000001
#define _T2CON_TCS_MASK                          0x00000002
#define _T2CON_TCS_LENGTH                        0x00000001

#define _T2CON_T32_POSITION                      0x00000003
#define _T2CON_T32_MASK                          0x00000008
#define _T2CON_T32_LENGTH                        0x00000001

#define _T2CON_TCKPS_POSITION                    0x00000004
#define _T2CON_TCKPS_MASK                        0x00000030
#define _T2CON_TCKPS_LENGTH                      0x00000002

#define _T2CON_TGATE_POSITION                    0x00000006
#define _T2CON_TGATE_MASK                        0x00000040
#define _T2CON_TGATE_LENGTH                      0x00000001

#define _T2CON_TSIDL_POSITION                    0x0000000D
#define _T2CON_TSIDL_MASK                        0x00002000
#define _T2CON_TSIDL_LENGTH                      0x00000001

#define _T2CON_TON_POSITION                      0x0000000F
#define _T2CON_TON_MASK                          0x00008000
#define _T2CON_TON_LENGTH                        0x00000001

#define _T2CON_TCKPS0_POSITION                   0x00000004
#define _T2CON_TCKPS0_MASK                       0x00000010
#define _T2CON_TCKPS0_LENGTH                     0x00000001

#define _T2CON_TCKPS1_POSITION                   0x00000005
#define _T2CON_TCKPS1_MASK                       0x00000020
#define _T2CON_TCKPS1_LENGTH                     0x00000001

#define _T3CON_TCS_POSITION                      0x00000001
#define _T3CON_TCS_MASK                          0x00000002
#define _T3CON_TCS_LENGTH                        0x00000001

#define _T3CON_TCKPS_POSITION                    0x00000004
#define _T3CON_TCKPS_MASK                        0x00000030
#define _T3CON_TCKPS_LENGTH                      0x00000002

#define _T3CON_TGATE_POSITION                    0x00000006
#define _T3CON_TGATE_MASK                        0x00000040
#define _T3CON_TGATE_LENGTH                      0x00000001

#define _T3CON_TSIDL_POSITION                    0x0000000D
#define _T3CON_TSIDL_MASK                        0x00002000
#define _T3CON_TSIDL_LENGTH                      0x00000001

#define _T3CON_TON_POSITION                      0x0000000F
#define _T3CON_TON_MASK                          0x00008000
#define _T3CON_TON_LENGTH                        0x00000001

#define _T3CON_TCKPS0_POSITION                   0x00000004
#define _T3CON_TCKPS0_MASK                       0x00000010
#define _T3CON_TCKPS0_LENGTH                     0x00000001

#define _T3CON_TCKPS1_POSITION                   0x00000005
#define _T3CON_TCKPS1_MASK                       0x00000020
#define _T3CON_TCKPS1_LENGTH                     0x00000001

#define _IC1CON1_ICM_POSITION                    0x00000000
#define _IC1CON1_ICM_MASK                        0x00000007
#define _IC1CON1_ICM_LENGTH                      0x00000003

#define _IC1CON1_ICBNE_POSITION                  0x00000003
#define _IC1CON1_ICBNE_MASK                      0x00000008
#define _IC1CON1_ICBNE_LENGTH                    0x00000001

#define _IC1CON1_ICOV_POSITION                   0x00000004
#define _IC1CON1_ICOV_MASK                       0x00000010
#define _IC1CON1_ICOV_LENGTH                     0x00000001

#define _IC1CON1_ICI_POSITION                    0x00000005
#define _IC1CON1_ICI_MASK                        0x00000060
#define _IC1CON1_ICI_LENGTH                      0x00000002

#define _IC1CON1_ICTSEL_POSITION                 0x0000000A
#define _IC1CON1_ICTSEL_MASK                     0x00001C00
#define _IC1CON1_ICTSEL_LENGTH                   0x00000003

#define _IC1CON1_ICSIDL_POSITION                 0x0000000D
#define _IC1CON1_ICSIDL_MASK                     0x00002000
#define _IC1CON1_ICSIDL_LENGTH                   0x00000001

#define _IC1CON1_ICM0_POSITION                   0x00000000
#define _IC1CON1_ICM0_MASK                       0x00000001
#define _IC1CON1_ICM0_LENGTH                     0x00000001

#define _IC1CON1_ICM1_POSITION                   0x00000001
#define _IC1CON1_ICM1_MASK                       0x00000002
#define _IC1CON1_ICM1_LENGTH                     0x00000001

#define _IC1CON1_ICM2_POSITION                   0x00000002
#define _IC1CON1_ICM2_MASK                       0x00000004
#define _IC1CON1_ICM2_LENGTH                     0x00000001

#define _IC1CON1_ICI0_POSITION                   0x00000005
#define _IC1CON1_ICI0_MASK                       0x00000020
#define _IC1CON1_ICI0_LENGTH                     0x00000001

#define _IC1CON1_ICI1_POSITION                   0x00000006
#define _IC1CON1_ICI1_MASK                       0x00000040
#define _IC1CON1_ICI1_LENGTH                     0x00000001

#define _IC1CON1_ICTSEL0_POSITION                0x0000000A
#define _IC1CON1_ICTSEL0_MASK                    0x00000400
#define _IC1CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC1CON1_ICTSEL1_POSITION                0x0000000B
#define _IC1CON1_ICTSEL1_MASK                    0x00000800
#define _IC1CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC1CON1_ICTSEL2_POSITION                0x0000000C
#define _IC1CON1_ICTSEL2_MASK                    0x00001000
#define _IC1CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC1CON2_SYNCSEL_POSITION                0x00000000
#define _IC1CON2_SYNCSEL_MASK                    0x0000001F
#define _IC1CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC1CON2_TRIGSTAT_POSITION               0x00000006
#define _IC1CON2_TRIGSTAT_MASK                   0x00000040
#define _IC1CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC1CON2_ICTRIG_POSITION                 0x00000007
#define _IC1CON2_ICTRIG_MASK                     0x00000080
#define _IC1CON2_ICTRIG_LENGTH                   0x00000001

#define _IC1CON2_SYNCSEL0_POSITION               0x00000000
#define _IC1CON2_SYNCSEL0_MASK                   0x00000001
#define _IC1CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL1_POSITION               0x00000001
#define _IC1CON2_SYNCSEL1_MASK                   0x00000002
#define _IC1CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL2_POSITION               0x00000002
#define _IC1CON2_SYNCSEL2_MASK                   0x00000004
#define _IC1CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL3_POSITION               0x00000003
#define _IC1CON2_SYNCSEL3_MASK                   0x00000008
#define _IC1CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC1CON2_SYNCSEL4_POSITION               0x00000004
#define _IC1CON2_SYNCSEL4_MASK                   0x00000010
#define _IC1CON2_SYNCSEL4_LENGTH                 0x00000001

#define _I2C1CON1_SEN_POSITION                   0x00000000
#define _I2C1CON1_SEN_MASK                       0x00000001
#define _I2C1CON1_SEN_LENGTH                     0x00000001

#define _I2C1CON1_RSEN_POSITION                  0x00000001
#define _I2C1CON1_RSEN_MASK                      0x00000002
#define _I2C1CON1_RSEN_LENGTH                    0x00000001

#define _I2C1CON1_PEN_POSITION                   0x00000002
#define _I2C1CON1_PEN_MASK                       0x00000004
#define _I2C1CON1_PEN_LENGTH                     0x00000001

#define _I2C1CON1_RCEN_POSITION                  0x00000003
#define _I2C1CON1_RCEN_MASK                      0x00000008
#define _I2C1CON1_RCEN_LENGTH                    0x00000001

#define _I2C1CON1_ACKEN_POSITION                 0x00000004
#define _I2C1CON1_ACKEN_MASK                     0x00000010
#define _I2C1CON1_ACKEN_LENGTH                   0x00000001

#define _I2C1CON1_ACKDT_POSITION                 0x00000005
#define _I2C1CON1_ACKDT_MASK                     0x00000020
#define _I2C1CON1_ACKDT_LENGTH                   0x00000001

#define _I2C1CON1_STREN_POSITION                 0x00000006
#define _I2C1CON1_STREN_MASK                     0x00000040
#define _I2C1CON1_STREN_LENGTH                   0x00000001

#define _I2C1CON1_GCEN_POSITION                  0x00000007
#define _I2C1CON1_GCEN_MASK                      0x00000080
#define _I2C1CON1_GCEN_LENGTH                    0x00000001

#define _I2C1CON1_SMEN_POSITION                  0x00000008
#define _I2C1CON1_SMEN_MASK                      0x00000100
#define _I2C1CON1_SMEN_LENGTH                    0x00000001

#define _I2C1CON1_DISSLW_POSITION                0x00000009
#define _I2C1CON1_DISSLW_MASK                    0x00000200
#define _I2C1CON1_DISSLW_LENGTH                  0x00000001

#define _I2C1CON1_A10M_POSITION                  0x0000000A
#define _I2C1CON1_A10M_MASK                      0x00000400
#define _I2C1CON1_A10M_LENGTH                    0x00000001

#define _I2C1CON1_STRICT_POSITION                0x0000000B
#define _I2C1CON1_STRICT_MASK                    0x00000800
#define _I2C1CON1_STRICT_LENGTH                  0x00000001

#define _I2C1CON1_SCLREL_POSITION                0x0000000C
#define _I2C1CON1_SCLREL_MASK                    0x00001000
#define _I2C1CON1_SCLREL_LENGTH                  0x00000001

#define _I2C1CON1_I2CSIDL_POSITION               0x0000000D
#define _I2C1CON1_I2CSIDL_MASK                   0x00002000
#define _I2C1CON1_I2CSIDL_LENGTH                 0x00000001

#define _I2C1CON1_I2CEN_POSITION                 0x0000000F
#define _I2C1CON1_I2CEN_MASK                     0x00008000
#define _I2C1CON1_I2CEN_LENGTH                   0x00000001

#define _I2C1CON2_DHEN_POSITION                  0x00000000
#define _I2C1CON2_DHEN_MASK                      0x00000001
#define _I2C1CON2_DHEN_LENGTH                    0x00000001

#define _I2C1CON2_AHEN_POSITION                  0x00000001
#define _I2C1CON2_AHEN_MASK                      0x00000002
#define _I2C1CON2_AHEN_LENGTH                    0x00000001

#define _I2C1CON2_SBCDE_POSITION                 0x00000002
#define _I2C1CON2_SBCDE_MASK                     0x00000004
#define _I2C1CON2_SBCDE_LENGTH                   0x00000001

#define _I2C1CON2_SDAHT_POSITION                 0x00000003
#define _I2C1CON2_SDAHT_MASK                     0x00000008
#define _I2C1CON2_SDAHT_LENGTH                   0x00000001

#define _I2C1CON2_BOEN_POSITION                  0x00000004
#define _I2C1CON2_BOEN_MASK                      0x00000010
#define _I2C1CON2_BOEN_LENGTH                    0x00000001

#define _I2C1CON2_SCIE_POSITION                  0x00000005
#define _I2C1CON2_SCIE_MASK                      0x00000020
#define _I2C1CON2_SCIE_LENGTH                    0x00000001

#define _I2C1CON2_PCIE_POSITION                  0x00000006
#define _I2C1CON2_PCIE_MASK                      0x00000040
#define _I2C1CON2_PCIE_LENGTH                    0x00000001

#define _I2C1STAT_TBF_POSITION                   0x00000000
#define _I2C1STAT_TBF_MASK                       0x00000001
#define _I2C1STAT_TBF_LENGTH                     0x00000001

#define _I2C1STAT_RBF_POSITION                   0x00000001
#define _I2C1STAT_RBF_MASK                       0x00000002
#define _I2C1STAT_RBF_LENGTH                     0x00000001

#define _I2C1STAT_R_W_POSITION                   0x00000002
#define _I2C1STAT_R_W_MASK                       0x00000004
#define _I2C1STAT_R_W_LENGTH                     0x00000001

#define _I2C1STAT_S_POSITION                     0x00000003
#define _I2C1STAT_S_MASK                         0x00000008
#define _I2C1STAT_S_LENGTH                       0x00000001

#define _I2C1STAT_P_POSITION                     0x00000004
#define _I2C1STAT_P_MASK                         0x00000010
#define _I2C1STAT_P_LENGTH                       0x00000001

#define _I2C1STAT_D_A_POSITION                   0x00000005
#define _I2C1STAT_D_A_MASK                       0x00000020
#define _I2C1STAT_D_A_LENGTH                     0x00000001

#define _I2C1STAT_I2COV_POSITION                 0x00000006
#define _I2C1STAT_I2COV_MASK                     0x00000040
#define _I2C1STAT_I2COV_LENGTH                   0x00000001

#define _I2C1STAT_IWCOL_POSITION                 0x00000007
#define _I2C1STAT_IWCOL_MASK                     0x00000080
#define _I2C1STAT_IWCOL_LENGTH                   0x00000001

#define _I2C1STAT_ADD10_POSITION                 0x00000008
#define _I2C1STAT_ADD10_MASK                     0x00000100
#define _I2C1STAT_ADD10_LENGTH                   0x00000001

#define _I2C1STAT_GCSTAT_POSITION                0x00000009
#define _I2C1STAT_GCSTAT_MASK                    0x00000200
#define _I2C1STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C1STAT_BCL_POSITION                   0x0000000A
#define _I2C1STAT_BCL_MASK                       0x00000400
#define _I2C1STAT_BCL_LENGTH                     0x00000001

#define _I2C1STAT_ACKTIM_POSITION                0x0000000D
#define _I2C1STAT_ACKTIM_MASK                    0x00002000
#define _I2C1STAT_ACKTIM_LENGTH                  0x00000001

#define _I2C1STAT_TRSTAT_POSITION                0x0000000E
#define _I2C1STAT_TRSTAT_MASK                    0x00004000
#define _I2C1STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C1STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C1STAT_ACKSTAT_MASK                   0x00008000
#define _I2C1STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C1ADD_ADD_POSITION                    0x00000000
#define _I2C1ADD_ADD_MASK                        0x000003FF
#define _I2C1ADD_ADD_LENGTH                      0x0000000A

#define _I2C1MSK_AMSK_POSITION                   0x00000000
#define _I2C1MSK_AMSK_MASK                       0x000003FF
#define _I2C1MSK_AMSK_LENGTH                     0x0000000A

#define _I2C1MSK_AMSK0_POSITION                  0x00000000
#define _I2C1MSK_AMSK0_MASK                      0x00000001
#define _I2C1MSK_AMSK0_LENGTH                    0x00000001

#define _I2C1MSK_AMSK1_POSITION                  0x00000001
#define _I2C1MSK_AMSK1_MASK                      0x00000002
#define _I2C1MSK_AMSK1_LENGTH                    0x00000001

#define _I2C1MSK_AMSK2_POSITION                  0x00000002
#define _I2C1MSK_AMSK2_MASK                      0x00000004
#define _I2C1MSK_AMSK2_LENGTH                    0x00000001

#define _I2C1MSK_AMSK3_POSITION                  0x00000003
#define _I2C1MSK_AMSK3_MASK                      0x00000008
#define _I2C1MSK_AMSK3_LENGTH                    0x00000001

#define _I2C1MSK_AMSK4_POSITION                  0x00000004
#define _I2C1MSK_AMSK4_MASK                      0x00000010
#define _I2C1MSK_AMSK4_LENGTH                    0x00000001

#define _I2C1MSK_AMSK5_POSITION                  0x00000005
#define _I2C1MSK_AMSK5_MASK                      0x00000020
#define _I2C1MSK_AMSK5_LENGTH                    0x00000001

#define _I2C1MSK_AMSK6_POSITION                  0x00000006
#define _I2C1MSK_AMSK6_MASK                      0x00000040
#define _I2C1MSK_AMSK6_LENGTH                    0x00000001

#define _I2C1MSK_AMSK7_POSITION                  0x00000007
#define _I2C1MSK_AMSK7_MASK                      0x00000080
#define _I2C1MSK_AMSK7_LENGTH                    0x00000001

#define _I2C1MSK_AMSK8_POSITION                  0x00000008
#define _I2C1MSK_AMSK8_MASK                      0x00000100
#define _I2C1MSK_AMSK8_LENGTH                    0x00000001

#define _I2C1MSK_AMSK9_POSITION                  0x00000009
#define _I2C1MSK_AMSK9_MASK                      0x00000200
#define _I2C1MSK_AMSK9_LENGTH                    0x00000001

#define _I2C1TRN_I2CTXDATA_POSITION              0x00000000
#define _I2C1TRN_I2CTXDATA_MASK                  0x000000FF
#define _I2C1TRN_I2CTXDATA_LENGTH                0x00000008

#define _I2C1RCV_I2CRXDATA_POSITION              0x00000000
#define _I2C1RCV_I2CRXDATA_MASK                  0x000000FF
#define _I2C1RCV_I2CRXDATA_LENGTH                0x00000008

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_URXINV_POSITION                  0x00000004
#define _U1MODE_URXINV_MASK                      0x00000010
#define _U1MODE_URXINV_LENGTH                    0x00000001

#define _U1MODE_ABAUD_POSITION                   0x00000005
#define _U1MODE_ABAUD_MASK                       0x00000020
#define _U1MODE_ABAUD_LENGTH                     0x00000001

#define _U1MODE_LPBACK_POSITION                  0x00000006
#define _U1MODE_LPBACK_MASK                      0x00000040
#define _U1MODE_LPBACK_LENGTH                    0x00000001

#define _U1MODE_WAKE_POSITION                    0x00000007
#define _U1MODE_WAKE_MASK                        0x00000080
#define _U1MODE_WAKE_LENGTH                      0x00000001

#define _U1MODE_UEN_POSITION                     0x00000008
#define _U1MODE_UEN_MASK                         0x00000300
#define _U1MODE_UEN_LENGTH                       0x00000002

#define _U1MODE_RTSMD_POSITION                   0x0000000B
#define _U1MODE_RTSMD_MASK                       0x00000800
#define _U1MODE_RTSMD_LENGTH                     0x00000001

#define _U1MODE_IREN_POSITION                    0x0000000C
#define _U1MODE_IREN_MASK                        0x00001000
#define _U1MODE_IREN_LENGTH                      0x00000001

#define _U1MODE_USIDL_POSITION                   0x0000000D
#define _U1MODE_USIDL_MASK                       0x00002000
#define _U1MODE_USIDL_LENGTH                     0x00000001

#define _U1MODE_UARTEN_POSITION                  0x0000000F
#define _U1MODE_UARTEN_MASK                      0x00008000
#define _U1MODE_UARTEN_LENGTH                    0x00000001

#define _U1MODE_PDSEL0_POSITION                  0x00000001
#define _U1MODE_PDSEL0_MASK                      0x00000002
#define _U1MODE_PDSEL0_LENGTH                    0x00000001

#define _U1MODE_PDSEL1_POSITION                  0x00000002
#define _U1MODE_PDSEL1_MASK                      0x00000004
#define _U1MODE_PDSEL1_LENGTH                    0x00000001

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

#define _U1MODE_UEN0_POSITION                    0x00000008
#define _U1MODE_UEN0_MASK                        0x00000100
#define _U1MODE_UEN0_LENGTH                      0x00000001

#define _U1MODE_UEN1_POSITION                    0x00000009
#define _U1MODE_UEN1_MASK                        0x00000200
#define _U1MODE_UEN1_LENGTH                      0x00000001

#define _U1STA_URXDA_POSITION                    0x00000000
#define _U1STA_URXDA_MASK                        0x00000001
#define _U1STA_URXDA_LENGTH                      0x00000001

#define _U1STA_OERR_POSITION                     0x00000001
#define _U1STA_OERR_MASK                         0x00000002
#define _U1STA_OERR_LENGTH                       0x00000001

#define _U1STA_FERR_POSITION                     0x00000002
#define _U1STA_FERR_MASK                         0x00000004
#define _U1STA_FERR_LENGTH                       0x00000001

#define _U1STA_PERR_POSITION                     0x00000003
#define _U1STA_PERR_MASK                         0x00000008
#define _U1STA_PERR_LENGTH                       0x00000001

#define _U1STA_RIDLE_POSITION                    0x00000004
#define _U1STA_RIDLE_MASK                        0x00000010
#define _U1STA_RIDLE_LENGTH                      0x00000001

#define _U1STA_ADDEN_POSITION                    0x00000005
#define _U1STA_ADDEN_MASK                        0x00000020
#define _U1STA_ADDEN_LENGTH                      0x00000001

#define _U1STA_URXISEL_POSITION                  0x00000006
#define _U1STA_URXISEL_MASK                      0x000000C0
#define _U1STA_URXISEL_LENGTH                    0x00000002

#define _U1STA_TRMT_POSITION                     0x00000008
#define _U1STA_TRMT_MASK                         0x00000100
#define _U1STA_TRMT_LENGTH                       0x00000001

#define _U1STA_UTXBF_POSITION                    0x00000009
#define _U1STA_UTXBF_MASK                        0x00000200
#define _U1STA_UTXBF_LENGTH                      0x00000001

#define _U1STA_UTXEN_POSITION                    0x0000000A
#define _U1STA_UTXEN_MASK                        0x00000400
#define _U1STA_UTXEN_LENGTH                      0x00000001

#define _U1STA_UTXBRK_POSITION                   0x0000000B
#define _U1STA_UTXBRK_MASK                       0x00000800
#define _U1STA_UTXBRK_LENGTH                     0x00000001

#define _U1STA_UTXISEL0_POSITION                 0x0000000D
#define _U1STA_UTXISEL0_MASK                     0x00002000
#define _U1STA_UTXISEL0_LENGTH                   0x00000001

#define _U1STA_UTXINV_POSITION                   0x0000000E
#define _U1STA_UTXINV_MASK                       0x00004000
#define _U1STA_UTXINV_LENGTH                     0x00000001

#define _U1STA_UTXISEL1_POSITION                 0x0000000F
#define _U1STA_UTXISEL1_MASK                     0x00008000
#define _U1STA_UTXISEL1_LENGTH                   0x00000001

#define _U1STA_URXISEL0_POSITION                 0x00000006
#define _U1STA_URXISEL0_MASK                     0x00000040
#define _U1STA_URXISEL0_LENGTH                   0x00000001

#define _U1STA_URXISEL1_POSITION                 0x00000007
#define _U1STA_URXISEL1_MASK                     0x00000080
#define _U1STA_URXISEL1_LENGTH                   0x00000001

#define _U1STA_TXINV_POSITION                    0x0000000E
#define _U1STA_TXINV_MASK                        0x00004000
#define _U1STA_TXINV_LENGTH                      0x00000001

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SISEL_POSITION                 0x00000002
#define _SPI1STAT_SISEL_MASK                     0x0000001C
#define _SPI1STAT_SISEL_LENGTH                   0x00000003

#define _SPI1STAT_SRXMPT_POSITION                0x00000005
#define _SPI1STAT_SRXMPT_MASK                    0x00000020
#define _SPI1STAT_SRXMPT_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SRMPT_POSITION                 0x00000007
#define _SPI1STAT_SRMPT_MASK                     0x00000080
#define _SPI1STAT_SRMPT_LENGTH                   0x00000001

#define _SPI1STAT_SPIBEC_POSITION                0x00000008
#define _SPI1STAT_SPIBEC_MASK                    0x00000700
#define _SPI1STAT_SPIBEC_LENGTH                  0x00000003

#define _SPI1STAT_SPISIDL_POSITION               0x0000000D
#define _SPI1STAT_SPISIDL_MASK                   0x00002000
#define _SPI1STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI1STAT_SPIEN_POSITION                 0x0000000F
#define _SPI1STAT_SPIEN_MASK                     0x00008000
#define _SPI1STAT_SPIEN_LENGTH                   0x00000001

#define _SPI1STAT_SISEL0_POSITION                0x00000002
#define _SPI1STAT_SISEL0_MASK                    0x00000004
#define _SPI1STAT_SISEL0_LENGTH                  0x00000001

#define _SPI1STAT_SISEL1_POSITION                0x00000003
#define _SPI1STAT_SISEL1_MASK                    0x00000008
#define _SPI1STAT_SISEL1_LENGTH                  0x00000001

#define _SPI1STAT_SISEL2_POSITION                0x00000004
#define _SPI1STAT_SISEL2_MASK                    0x00000010
#define _SPI1STAT_SISEL2_LENGTH                  0x00000001

#define _SPI1STAT_SPIBEC0_POSITION               0x00000008
#define _SPI1STAT_SPIBEC0_MASK                   0x00000100
#define _SPI1STAT_SPIBEC0_LENGTH                 0x00000001

#define _SPI1STAT_SPIBEC1_POSITION               0x00000009
#define _SPI1STAT_SPIBEC1_MASK                   0x00000200
#define _SPI1STAT_SPIBEC1_LENGTH                 0x00000001

#define _SPI1STAT_SPIBEC2_POSITION               0x0000000A
#define _SPI1STAT_SPIBEC2_MASK                   0x00000400
#define _SPI1STAT_SPIBEC2_LENGTH                 0x00000001

#define _SPI1CON1_PPRE_POSITION                  0x00000000
#define _SPI1CON1_PPRE_MASK                      0x00000003
#define _SPI1CON1_PPRE_LENGTH                    0x00000002

#define _SPI1CON1_SPRE_POSITION                  0x00000002
#define _SPI1CON1_SPRE_MASK                      0x0000001C
#define _SPI1CON1_SPRE_LENGTH                    0x00000003

#define _SPI1CON1_MSTEN_POSITION                 0x00000005
#define _SPI1CON1_MSTEN_MASK                     0x00000020
#define _SPI1CON1_MSTEN_LENGTH                   0x00000001

#define _SPI1CON1_CKP_POSITION                   0x00000006
#define _SPI1CON1_CKP_MASK                       0x00000040
#define _SPI1CON1_CKP_LENGTH                     0x00000001

#define _SPI1CON1_SSEN_POSITION                  0x00000007
#define _SPI1CON1_SSEN_MASK                      0x00000080
#define _SPI1CON1_SSEN_LENGTH                    0x00000001

#define _SPI1CON1_CKE_POSITION                   0x00000008
#define _SPI1CON1_CKE_MASK                       0x00000100
#define _SPI1CON1_CKE_LENGTH                     0x00000001

#define _SPI1CON1_SMP_POSITION                   0x00000009
#define _SPI1CON1_SMP_MASK                       0x00000200
#define _SPI1CON1_SMP_LENGTH                     0x00000001

#define _SPI1CON1_MODE16_POSITION                0x0000000A
#define _SPI1CON1_MODE16_MASK                    0x00000400
#define _SPI1CON1_MODE16_LENGTH                  0x00000001

#define _SPI1CON1_DISSDO_POSITION                0x0000000B
#define _SPI1CON1_DISSDO_MASK                    0x00000800
#define _SPI1CON1_DISSDO_LENGTH                  0x00000001

#define _SPI1CON1_DISSCK_POSITION                0x0000000C
#define _SPI1CON1_DISSCK_MASK                    0x00001000
#define _SPI1CON1_DISSCK_LENGTH                  0x00000001

#define _SPI1CON1_PPRE0_POSITION                 0x00000000
#define _SPI1CON1_PPRE0_MASK                     0x00000001
#define _SPI1CON1_PPRE0_LENGTH                   0x00000001

#define _SPI1CON1_PPRE1_POSITION                 0x00000001
#define _SPI1CON1_PPRE1_MASK                     0x00000002
#define _SPI1CON1_PPRE1_LENGTH                   0x00000001

#define _SPI1CON1_SPRE0_POSITION                 0x00000002
#define _SPI1CON1_SPRE0_MASK                     0x00000004
#define _SPI1CON1_SPRE0_LENGTH                   0x00000001

#define _SPI1CON1_SPRE1_POSITION                 0x00000003
#define _SPI1CON1_SPRE1_MASK                     0x00000008
#define _SPI1CON1_SPRE1_LENGTH                   0x00000001

#define _SPI1CON1_SPRE2_POSITION                 0x00000004
#define _SPI1CON1_SPRE2_MASK                     0x00000010
#define _SPI1CON1_SPRE2_LENGTH                   0x00000001

#define _SPI1CON2_SPIBEN_POSITION                0x00000000
#define _SPI1CON2_SPIBEN_MASK                    0x00000001
#define _SPI1CON2_SPIBEN_LENGTH                  0x00000001

#define _SPI1CON2_SPIFE_POSITION                 0x00000001
#define _SPI1CON2_SPIFE_MASK                     0x00000002
#define _SPI1CON2_SPIFE_LENGTH                   0x00000001

#define _SPI1CON2_SPIFPOL_POSITION               0x0000000D
#define _SPI1CON2_SPIFPOL_MASK                   0x00002000
#define _SPI1CON2_SPIFPOL_LENGTH                 0x00000001

#define _SPI1CON2_SPIFSD_POSITION                0x0000000E
#define _SPI1CON2_SPIFSD_MASK                    0x00004000
#define _SPI1CON2_SPIFSD_LENGTH                  0x00000001

#define _SPI1CON2_FRMEN_POSITION                 0x0000000F
#define _SPI1CON2_FRMEN_MASK                     0x00008000
#define _SPI1CON2_FRMEN_LENGTH                   0x00000001

#define _SPI1CON2_FRMDLY_POSITION                0x00000001
#define _SPI1CON2_FRMDLY_MASK                    0x00000002
#define _SPI1CON2_FRMDLY_LENGTH                  0x00000001

#define _SPI1CON2_FRMPOL_POSITION                0x0000000D
#define _SPI1CON2_FRMPOL_MASK                    0x00002000
#define _SPI1CON2_FRMPOL_LENGTH                  0x00000001

#define _ADCON1L_BSHFT_POSITION                  0x00000004
#define _ADCON1L_BSHFT_MASK                      0x00000070
#define _ADCON1L_BSHFT_LENGTH                    0x00000003

#define _ADCON1L_PUMPEN_POSITION                 0x0000000C
#define _ADCON1L_PUMPEN_MASK                     0x00001000
#define _ADCON1L_PUMPEN_LENGTH                   0x00000001

#define _ADCON1L_ADSIDL_POSITION                 0x0000000D
#define _ADCON1L_ADSIDL_MASK                     0x00002000
#define _ADCON1L_ADSIDL_LENGTH                   0x00000001

#define _ADCON1L_ADON_POSITION                   0x0000000F
#define _ADCON1L_ADON_MASK                       0x00008000
#define _ADCON1L_ADON_LENGTH                     0x00000001

#define _ADCON1L_BSHFT0_POSITION                 0x00000004
#define _ADCON1L_BSHFT0_MASK                     0x00000010
#define _ADCON1L_BSHFT0_LENGTH                   0x00000001

#define _ADCON1L_BSHFT1_POSITION                 0x00000005
#define _ADCON1L_BSHFT1_MASK                     0x00000020
#define _ADCON1L_BSHFT1_LENGTH                   0x00000001

#define _ADCON1L_BSHFT2_POSITION                 0x00000006
#define _ADCON1L_BSHFT2_MASK                     0x00000040
#define _ADCON1L_BSHFT2_LENGTH                   0x00000001

#define _ADCON1H_SHRRES_POSITION                 0x00000005
#define _ADCON1H_SHRRES_MASK                     0x00000060
#define _ADCON1H_SHRRES_LENGTH                   0x00000002

#define _ADCON1H_FORM_POSITION                   0x00000007
#define _ADCON1H_FORM_MASK                       0x00000080
#define _ADCON1H_FORM_LENGTH                     0x00000001

#define _ADCON1H_TRBSLV_POSITION                 0x00000008
#define _ADCON1H_TRBSLV_MASK                     0x00000700
#define _ADCON1H_TRBSLV_LENGTH                   0x00000003

#define _ADCON1H_TRBMST_POSITION                 0x0000000B
#define _ADCON1H_TRBMST_MASK                     0x00003800
#define _ADCON1H_TRBMST_LENGTH                   0x00000003

#define _ADCON1H_TRBERR_POSITION                 0x0000000E
#define _ADCON1H_TRBERR_MASK                     0x00004000
#define _ADCON1H_TRBERR_LENGTH                   0x00000001

#define _ADCON1H_TRBEN_POSITION                  0x0000000F
#define _ADCON1H_TRBEN_MASK                      0x00008000
#define _ADCON1H_TRBEN_LENGTH                    0x00000001

#define _ADCON1H_SHRRES0_POSITION                0x00000005
#define _ADCON1H_SHRRES0_MASK                    0x00000020
#define _ADCON1H_SHRRES0_LENGTH                  0x00000001

#define _ADCON1H_SHRRES1_POSITION                0x00000006
#define _ADCON1H_SHRRES1_MASK                    0x00000040
#define _ADCON1H_SHRRES1_LENGTH                  0x00000001

#define _ADCON1H_TRBSLV0_POSITION                0x00000008
#define _ADCON1H_TRBSLV0_MASK                    0x00000100
#define _ADCON1H_TRBSLV0_LENGTH                  0x00000001

#define _ADCON1H_TRBSLV1_POSITION                0x00000009
#define _ADCON1H_TRBSLV1_MASK                    0x00000200
#define _ADCON1H_TRBSLV1_LENGTH                  0x00000001

#define _ADCON1H_TRBSLV2_POSITION                0x0000000A
#define _ADCON1H_TRBSLV2_MASK                    0x00000400
#define _ADCON1H_TRBSLV2_LENGTH                  0x00000001

#define _ADCON1H_TRBMST0_POSITION                0x0000000B
#define _ADCON1H_TRBMST0_MASK                    0x00000800
#define _ADCON1H_TRBMST0_LENGTH                  0x00000001

#define _ADCON1H_TRBMST1_POSITION                0x0000000C
#define _ADCON1H_TRBMST1_MASK                    0x00001000
#define _ADCON1H_TRBMST1_LENGTH                  0x00000001

#define _ADCON1H_TRBMST2_POSITION                0x0000000D
#define _ADCON1H_TRBMST2_MASK                    0x00002000
#define _ADCON1H_TRBMST2_LENGTH                  0x00000001

#define _ADCON2L_SHRADCS_POSITION                0x00000000
#define _ADCON2L_SHRADCS_MASK                    0x0000007F
#define _ADCON2L_SHRADCS_LENGTH                  0x00000007

#define _ADCON2L_SHREISEL_POSITION               0x00000008
#define _ADCON2L_SHREISEL_MASK                   0x00000700
#define _ADCON2L_SHREISEL_LENGTH                 0x00000003

#define _ADCON2L_REFERCIE_POSITION               0x0000000E
#define _ADCON2L_REFERCIE_MASK                   0x00004000
#define _ADCON2L_REFERCIE_LENGTH                 0x00000001

#define _ADCON2L_REFCIE_POSITION                 0x0000000F
#define _ADCON2L_REFCIE_MASK                     0x00008000
#define _ADCON2L_REFCIE_LENGTH                   0x00000001

#define _ADCON2L_SHRADCS0_POSITION               0x00000000
#define _ADCON2L_SHRADCS0_MASK                   0x00000001
#define _ADCON2L_SHRADCS0_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS1_POSITION               0x00000001
#define _ADCON2L_SHRADCS1_MASK                   0x00000002
#define _ADCON2L_SHRADCS1_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS2_POSITION               0x00000002
#define _ADCON2L_SHRADCS2_MASK                   0x00000004
#define _ADCON2L_SHRADCS2_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS3_POSITION               0x00000003
#define _ADCON2L_SHRADCS3_MASK                   0x00000008
#define _ADCON2L_SHRADCS3_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS4_POSITION               0x00000004
#define _ADCON2L_SHRADCS4_MASK                   0x00000010
#define _ADCON2L_SHRADCS4_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS5_POSITION               0x00000005
#define _ADCON2L_SHRADCS5_MASK                   0x00000020
#define _ADCON2L_SHRADCS5_LENGTH                 0x00000001

#define _ADCON2L_SHRADCS6_POSITION               0x00000006
#define _ADCON2L_SHRADCS6_MASK                   0x00000040
#define _ADCON2L_SHRADCS6_LENGTH                 0x00000001

#define _ADCON2L_SHREISEL0_POSITION              0x00000008
#define _ADCON2L_SHREISEL0_MASK                  0x00000100
#define _ADCON2L_SHREISEL0_LENGTH                0x00000001

#define _ADCON2L_SHREISEL1_POSITION              0x00000009
#define _ADCON2L_SHREISEL1_MASK                  0x00000200
#define _ADCON2L_SHREISEL1_LENGTH                0x00000001

#define _ADCON2L_SHREISEL2_POSITION              0x0000000A
#define _ADCON2L_SHREISEL2_MASK                  0x00000400
#define _ADCON2L_SHREISEL2_LENGTH                0x00000001

#define _ADCON2H_SHRSAMC_POSITION                0x00000000
#define _ADCON2H_SHRSAMC_MASK                    0x000003FF
#define _ADCON2H_SHRSAMC_LENGTH                  0x0000000A

#define _ADCON2H_REFERR_POSITION                 0x0000000E
#define _ADCON2H_REFERR_MASK                     0x00004000
#define _ADCON2H_REFERR_LENGTH                   0x00000001

#define _ADCON2H_REFRDY_POSITION                 0x0000000F
#define _ADCON2H_REFRDY_MASK                     0x00008000
#define _ADCON2H_REFRDY_LENGTH                   0x00000001

#define _ADCON2H_SHRSAMC0_POSITION               0x00000000
#define _ADCON2H_SHRSAMC0_MASK                   0x00000001
#define _ADCON2H_SHRSAMC0_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC1_POSITION               0x00000001
#define _ADCON2H_SHRSAMC1_MASK                   0x00000002
#define _ADCON2H_SHRSAMC1_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC2_POSITION               0x00000002
#define _ADCON2H_SHRSAMC2_MASK                   0x00000004
#define _ADCON2H_SHRSAMC2_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC3_POSITION               0x00000003
#define _ADCON2H_SHRSAMC3_MASK                   0x00000008
#define _ADCON2H_SHRSAMC3_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC4_POSITION               0x00000004
#define _ADCON2H_SHRSAMC4_MASK                   0x00000010
#define _ADCON2H_SHRSAMC4_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC5_POSITION               0x00000005
#define _ADCON2H_SHRSAMC5_MASK                   0x00000020
#define _ADCON2H_SHRSAMC5_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC6_POSITION               0x00000006
#define _ADCON2H_SHRSAMC6_MASK                   0x00000040
#define _ADCON2H_SHRSAMC6_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC7_POSITION               0x00000007
#define _ADCON2H_SHRSAMC7_MASK                   0x00000080
#define _ADCON2H_SHRSAMC7_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC8_POSITION               0x00000008
#define _ADCON2H_SHRSAMC8_MASK                   0x00000100
#define _ADCON2H_SHRSAMC8_LENGTH                 0x00000001

#define _ADCON2H_SHRSAMC9_POSITION               0x00000009
#define _ADCON2H_SHRSAMC9_MASK                   0x00000200
#define _ADCON2H_SHRSAMC9_LENGTH                 0x00000001

#define _ADCON3L_CNVCHSEL_POSITION               0x00000000
#define _ADCON3L_CNVCHSEL_MASK                   0x0000003F
#define _ADCON3L_CNVCHSEL_LENGTH                 0x00000006

#define _ADCON3L_SWCTRG_POSITION                 0x00000006
#define _ADCON3L_SWCTRG_MASK                     0x00000040
#define _ADCON3L_SWCTRG_LENGTH                   0x00000001

#define _ADCON3L_SWLCTRG_POSITION                0x00000007
#define _ADCON3L_SWLCTRG_MASK                    0x00000080
#define _ADCON3L_SWLCTRG_LENGTH                  0x00000001

#define _ADCON3L_CNVRTCH_POSITION                0x00000008
#define _ADCON3L_CNVRTCH_MASK                    0x00000100
#define _ADCON3L_CNVRTCH_LENGTH                  0x00000001

#define _ADCON3L_SHRSAMP_POSITION                0x00000009
#define _ADCON3L_SHRSAMP_MASK                    0x00000200
#define _ADCON3L_SHRSAMP_LENGTH                  0x00000001

#define _ADCON3L_SUSPRDY_POSITION                0x0000000A
#define _ADCON3L_SUSPRDY_MASK                    0x00000400
#define _ADCON3L_SUSPRDY_LENGTH                  0x00000001

#define _ADCON3L_SUSPCIE_POSITION                0x0000000B
#define _ADCON3L_SUSPCIE_MASK                    0x00000800
#define _ADCON3L_SUSPCIE_LENGTH                  0x00000001

#define _ADCON3L_SUSPEND_POSITION                0x0000000C
#define _ADCON3L_SUSPEND_MASK                    0x00001000
#define _ADCON3L_SUSPEND_LENGTH                  0x00000001

#define _ADCON3L_REFSEL_POSITION                 0x0000000D
#define _ADCON3L_REFSEL_MASK                     0x0000E000
#define _ADCON3L_REFSEL_LENGTH                   0x00000003

#define _ADCON3L_CNVCHSEL0_POSITION              0x00000000
#define _ADCON3L_CNVCHSEL0_MASK                  0x00000001
#define _ADCON3L_CNVCHSEL0_LENGTH                0x00000001

#define _ADCON3L_CNVCHSEL1_POSITION              0x00000001
#define _ADCON3L_CNVCHSEL1_MASK                  0x00000002
#define _ADCON3L_CNVCHSEL1_LENGTH                0x00000001

#define _ADCON3L_CNVCHSEL2_POSITION              0x00000002
#define _ADCON3L_CNVCHSEL2_MASK                  0x00000004
#define _ADCON3L_CNVCHSEL2_LENGTH                0x00000001

#define _ADCON3L_CNVCHSEL3_POSITION              0x00000003
#define _ADCON3L_CNVCHSEL3_MASK                  0x00000008
#define _ADCON3L_CNVCHSEL3_LENGTH                0x00000001

#define _ADCON3L_CNVCHSEL4_POSITION              0x00000004
#define _ADCON3L_CNVCHSEL4_MASK                  0x00000010
#define _ADCON3L_CNVCHSEL4_LENGTH                0x00000001

#define _ADCON3L_CNVCHSEL5_POSITION              0x00000005
#define _ADCON3L_CNVCHSEL5_MASK                  0x00000020
#define _ADCON3L_CNVCHSEL5_LENGTH                0x00000001

#define _ADCON3L_REFSEL0_POSITION                0x0000000D
#define _ADCON3L_REFSEL0_MASK                    0x00002000
#define _ADCON3L_REFSEL0_LENGTH                  0x00000001

#define _ADCON3L_REFSEL1_POSITION                0x0000000E
#define _ADCON3L_REFSEL1_MASK                    0x00004000
#define _ADCON3L_REFSEL1_LENGTH                  0x00000001

#define _ADCON3L_REFSEL2_POSITION                0x0000000F
#define _ADCON3L_REFSEL2_MASK                    0x00008000
#define _ADCON3L_REFSEL2_LENGTH                  0x00000001

#define _ADCON3H_C0EN_POSITION                   0x00000000
#define _ADCON3H_C0EN_MASK                       0x00000001
#define _ADCON3H_C0EN_LENGTH                     0x00000001

#define _ADCON3H_C1EN_POSITION                   0x00000001
#define _ADCON3H_C1EN_MASK                       0x00000002
#define _ADCON3H_C1EN_LENGTH                     0x00000001

#define _ADCON3H_SHREN_POSITION                  0x00000007
#define _ADCON3H_SHREN_MASK                      0x00000080
#define _ADCON3H_SHREN_LENGTH                    0x00000001

#define _ADCON3H_CLKDIV_POSITION                 0x00000008
#define _ADCON3H_CLKDIV_MASK                     0x00003F00
#define _ADCON3H_CLKDIV_LENGTH                   0x00000006

#define _ADCON3H_CLKSEL_POSITION                 0x0000000E
#define _ADCON3H_CLKSEL_MASK                     0x0000C000
#define _ADCON3H_CLKSEL_LENGTH                   0x00000002

#define _ADCON3H_CLKDIV0_POSITION                0x00000008
#define _ADCON3H_CLKDIV0_MASK                    0x00000100
#define _ADCON3H_CLKDIV0_LENGTH                  0x00000001

#define _ADCON3H_CLKDIV1_POSITION                0x00000009
#define _ADCON3H_CLKDIV1_MASK                    0x00000200
#define _ADCON3H_CLKDIV1_LENGTH                  0x00000001

#define _ADCON3H_CLKDIV2_POSITION                0x0000000A
#define _ADCON3H_CLKDIV2_MASK                    0x00000400
#define _ADCON3H_CLKDIV2_LENGTH                  0x00000001

#define _ADCON3H_CLKDIV3_POSITION                0x0000000B
#define _ADCON3H_CLKDIV3_MASK                    0x00000800
#define _ADCON3H_CLKDIV3_LENGTH                  0x00000001

#define _ADCON3H_CLKDIV4_POSITION                0x0000000C
#define _ADCON3H_CLKDIV4_MASK                    0x00001000
#define _ADCON3H_CLKDIV4_LENGTH                  0x00000001

#define _ADCON3H_CLKDIV5_POSITION                0x0000000D
#define _ADCON3H_CLKDIV5_MASK                    0x00002000
#define _ADCON3H_CLKDIV5_LENGTH                  0x00000001

#define _ADCON3H_CLKSEL0_POSITION                0x0000000E
#define _ADCON3H_CLKSEL0_MASK                    0x00004000
#define _ADCON3H_CLKSEL0_LENGTH                  0x00000001

#define _ADCON3H_CLKSEL1_POSITION                0x0000000F
#define _ADCON3H_CLKSEL1_MASK                    0x00008000
#define _ADCON3H_CLKSEL1_LENGTH                  0x00000001

#define _ADCON4L_SAMC0EN_POSITION                0x00000000
#define _ADCON4L_SAMC0EN_MASK                    0x00000001
#define _ADCON4L_SAMC0EN_LENGTH                  0x00000001

#define _ADCON4L_SAMC1EN_POSITION                0x00000001
#define _ADCON4L_SAMC1EN_MASK                    0x00000002
#define _ADCON4L_SAMC1EN_LENGTH                  0x00000001

#define _ADCON4L_SYNCTRG0_POSITION               0x00000008
#define _ADCON4L_SYNCTRG0_MASK                   0x00000100
#define _ADCON4L_SYNCTRG0_LENGTH                 0x00000001

#define _ADCON4L_SYNCTRG1_POSITION               0x00000009
#define _ADCON4L_SYNCTRG1_MASK                   0x00000200
#define _ADCON4L_SYNCTRG1_LENGTH                 0x00000001

#define _ADCON4H_C0CHS_POSITION                  0x00000000
#define _ADCON4H_C0CHS_MASK                      0x00000003
#define _ADCON4H_C0CHS_LENGTH                    0x00000002

#define _ADCON4H_C1CHS_POSITION                  0x00000002
#define _ADCON4H_C1CHS_MASK                      0x0000000C
#define _ADCON4H_C1CHS_LENGTH                    0x00000002

#define _ADCON4H_C0CHS0_POSITION                 0x00000000
#define _ADCON4H_C0CHS0_MASK                     0x00000001
#define _ADCON4H_C0CHS0_LENGTH                   0x00000001

#define _ADCON4H_C0CHS1_POSITION                 0x00000001
#define _ADCON4H_C0CHS1_MASK                     0x00000002
#define _ADCON4H_C0CHS1_LENGTH                   0x00000001

#define _ADCON4H_C1CHS0_POSITION                 0x00000002
#define _ADCON4H_C1CHS0_MASK                     0x00000004
#define _ADCON4H_C1CHS0_LENGTH                   0x00000001

#define _ADCON4H_C1CHS1_POSITION                 0x00000003
#define _ADCON4H_C1CHS1_MASK                     0x00000008
#define _ADCON4H_C1CHS1_LENGTH                   0x00000001

#define _ADMOD0L_SIGN0_POSITION                  0x00000000
#define _ADMOD0L_SIGN0_MASK                      0x00000001
#define _ADMOD0L_SIGN0_LENGTH                    0x00000001

#define _ADMOD0L_DIFF0_POSITION                  0x00000001
#define _ADMOD0L_DIFF0_MASK                      0x00000002
#define _ADMOD0L_DIFF0_LENGTH                    0x00000001

#define _ADMOD0L_SIGN1_POSITION                  0x00000002
#define _ADMOD0L_SIGN1_MASK                      0x00000004
#define _ADMOD0L_SIGN1_LENGTH                    0x00000001

#define _ADMOD0L_DIFF1_POSITION                  0x00000003
#define _ADMOD0L_DIFF1_MASK                      0x00000008
#define _ADMOD0L_DIFF1_LENGTH                    0x00000001

#define _ADMOD0L_SIGN2_POSITION                  0x00000004
#define _ADMOD0L_SIGN2_MASK                      0x00000010
#define _ADMOD0L_SIGN2_LENGTH                    0x00000001

#define _ADMOD0L_DIFF2_POSITION                  0x00000005
#define _ADMOD0L_DIFF2_MASK                      0x00000020
#define _ADMOD0L_DIFF2_LENGTH                    0x00000001

#define _ADMOD0L_SIGN3_POSITION                  0x00000006
#define _ADMOD0L_SIGN3_MASK                      0x00000040
#define _ADMOD0L_SIGN3_LENGTH                    0x00000001

#define _ADMOD0L_DIFF3_POSITION                  0x00000007
#define _ADMOD0L_DIFF3_MASK                      0x00000080
#define _ADMOD0L_DIFF3_LENGTH                    0x00000001

#define _ADMOD0L_SIGN4_POSITION                  0x00000008
#define _ADMOD0L_SIGN4_MASK                      0x00000100
#define _ADMOD0L_SIGN4_LENGTH                    0x00000001

#define _ADMOD0L_DIFF4_POSITION                  0x00000009
#define _ADMOD0L_DIFF4_MASK                      0x00000200
#define _ADMOD0L_DIFF4_LENGTH                    0x00000001

#define _ADMOD0L_SIGN5_POSITION                  0x0000000A
#define _ADMOD0L_SIGN5_MASK                      0x00000400
#define _ADMOD0L_SIGN5_LENGTH                    0x00000001

#define _ADMOD0L_DIFF5_POSITION                  0x0000000B
#define _ADMOD0L_DIFF5_MASK                      0x00000800
#define _ADMOD0L_DIFF5_LENGTH                    0x00000001

#define _ADMOD0L_SIGN6_POSITION                  0x0000000C
#define _ADMOD0L_SIGN6_MASK                      0x00001000
#define _ADMOD0L_SIGN6_LENGTH                    0x00000001

#define _ADMOD0L_DIFF6_POSITION                  0x0000000D
#define _ADMOD0L_DIFF6_MASK                      0x00002000
#define _ADMOD0L_DIFF6_LENGTH                    0x00000001

#define _ADMOD0L_SIGN7_POSITION                  0x0000000E
#define _ADMOD0L_SIGN7_MASK                      0x00004000
#define _ADMOD0L_SIGN7_LENGTH                    0x00000001

#define _ADMOD0L_DIFF7_POSITION                  0x0000000F
#define _ADMOD0L_DIFF7_MASK                      0x00008000
#define _ADMOD0L_DIFF7_LENGTH                    0x00000001

#define _ADMOD0H_SIGN8_POSITION                  0x00000000
#define _ADMOD0H_SIGN8_MASK                      0x00000001
#define _ADMOD0H_SIGN8_LENGTH                    0x00000001

#define _ADMOD0H_DIFF8_POSITION                  0x00000001
#define _ADMOD0H_DIFF8_MASK                      0x00000002
#define _ADMOD0H_DIFF8_LENGTH                    0x00000001

#define _ADMOD0H_SIGN9_POSITION                  0x00000002
#define _ADMOD0H_SIGN9_MASK                      0x00000004
#define _ADMOD0H_SIGN9_LENGTH                    0x00000001

#define _ADMOD0H_DIFF9_POSITION                  0x00000003
#define _ADMOD0H_DIFF9_MASK                      0x00000008
#define _ADMOD0H_DIFF9_LENGTH                    0x00000001

#define _ADMOD0H_SIGN10_POSITION                 0x00000004
#define _ADMOD0H_SIGN10_MASK                     0x00000010
#define _ADMOD0H_SIGN10_LENGTH                   0x00000001

#define _ADMOD0H_DIFF10_POSITION                 0x00000005
#define _ADMOD0H_DIFF10_MASK                     0x00000020
#define _ADMOD0H_DIFF10_LENGTH                   0x00000001

#define _ADMOD0H_SIGN11_POSITION                 0x00000006
#define _ADMOD0H_SIGN11_MASK                     0x00000040
#define _ADMOD0H_SIGN11_LENGTH                   0x00000001

#define _ADMOD0H_DIFF11_POSITION                 0x00000007
#define _ADMOD0H_DIFF11_MASK                     0x00000080
#define _ADMOD0H_DIFF11_LENGTH                   0x00000001

#define _ADMOD0H_SIGN12_POSITION                 0x00000008
#define _ADMOD0H_SIGN12_MASK                     0x00000100
#define _ADMOD0H_SIGN12_LENGTH                   0x00000001

#define _ADMOD0H_DIFF12_POSITION                 0x00000009
#define _ADMOD0H_DIFF12_MASK                     0x00000200
#define _ADMOD0H_DIFF12_LENGTH                   0x00000001

#define _ADMOD0H_SIGN13_POSITION                 0x0000000A
#define _ADMOD0H_SIGN13_MASK                     0x00000400
#define _ADMOD0H_SIGN13_LENGTH                   0x00000001

#define _ADMOD0H_DIFF13_POSITION                 0x0000000B
#define _ADMOD0H_DIFF13_MASK                     0x00000800
#define _ADMOD0H_DIFF13_LENGTH                   0x00000001

#define _ADMOD0H_SIGN14_POSITION                 0x0000000C
#define _ADMOD0H_SIGN14_MASK                     0x00001000
#define _ADMOD0H_SIGN14_LENGTH                   0x00000001

#define _ADMOD0H_DIFF14_POSITION                 0x0000000D
#define _ADMOD0H_DIFF14_MASK                     0x00002000
#define _ADMOD0H_DIFF14_LENGTH                   0x00000001

#define _ADCIE1L_CIE0_POSITION                   0x00000000
#define _ADCIE1L_CIE0_MASK                       0x00000001
#define _ADCIE1L_CIE0_LENGTH                     0x00000001

#define _ADCIE1L_CIE1_POSITION                   0x00000001
#define _ADCIE1L_CIE1_MASK                       0x00000002
#define _ADCIE1L_CIE1_LENGTH                     0x00000001

#define _ADCIE1L_CIE2_POSITION                   0x00000002
#define _ADCIE1L_CIE2_MASK                       0x00000004
#define _ADCIE1L_CIE2_LENGTH                     0x00000001

#define _ADCIE1L_CIE3_POSITION                   0x00000003
#define _ADCIE1L_CIE3_MASK                       0x00000008
#define _ADCIE1L_CIE3_LENGTH                     0x00000001

#define _ADCIE1L_CIE4_POSITION                   0x00000004
#define _ADCIE1L_CIE4_MASK                       0x00000010
#define _ADCIE1L_CIE4_LENGTH                     0x00000001

#define _ADCIE1L_CIE5_POSITION                   0x00000005
#define _ADCIE1L_CIE5_MASK                       0x00000020
#define _ADCIE1L_CIE5_LENGTH                     0x00000001

#define _ADCIE1L_CIE6_POSITION                   0x00000006
#define _ADCIE1L_CIE6_MASK                       0x00000040
#define _ADCIE1L_CIE6_LENGTH                     0x00000001

#define _ADCIE1L_CIE7_POSITION                   0x00000007
#define _ADCIE1L_CIE7_MASK                       0x00000080
#define _ADCIE1L_CIE7_LENGTH                     0x00000001

#define _ADCIE1L_CIE8_POSITION                   0x00000008
#define _ADCIE1L_CIE8_MASK                       0x00000100
#define _ADCIE1L_CIE8_LENGTH                     0x00000001

#define _ADCIE1L_CIE9_POSITION                   0x00000009
#define _ADCIE1L_CIE9_MASK                       0x00000200
#define _ADCIE1L_CIE9_LENGTH                     0x00000001

#define _ADCIE1L_CIE10_POSITION                  0x0000000A
#define _ADCIE1L_CIE10_MASK                      0x00000400
#define _ADCIE1L_CIE10_LENGTH                    0x00000001

#define _ADCIE1L_CIE11_POSITION                  0x0000000B
#define _ADCIE1L_CIE11_MASK                      0x00000800
#define _ADCIE1L_CIE11_LENGTH                    0x00000001

#define _ADCIE1L_CIE12_POSITION                  0x0000000C
#define _ADCIE1L_CIE12_MASK                      0x00001000
#define _ADCIE1L_CIE12_LENGTH                    0x00000001

#define _ADCIE1L_CIE13_POSITION                  0x0000000D
#define _ADCIE1L_CIE13_MASK                      0x00002000
#define _ADCIE1L_CIE13_LENGTH                    0x00000001

#define _ADCIE1L_CIE14_POSITION                  0x0000000E
#define _ADCIE1L_CIE14_MASK                      0x00004000
#define _ADCIE1L_CIE14_LENGTH                    0x00000001

#define _ADCSS1L_CSS0_POSITION                   0x00000000
#define _ADCSS1L_CSS0_MASK                       0x00000001
#define _ADCSS1L_CSS0_LENGTH                     0x00000001

#define _ADCSS1L_CSS1_POSITION                   0x00000001
#define _ADCSS1L_CSS1_MASK                       0x00000002
#define _ADCSS1L_CSS1_LENGTH                     0x00000001

#define _ADCSS1L_CSS2_POSITION                   0x00000002
#define _ADCSS1L_CSS2_MASK                       0x00000004
#define _ADCSS1L_CSS2_LENGTH                     0x00000001

#define _ADCSS1L_CSS3_POSITION                   0x00000003
#define _ADCSS1L_CSS3_MASK                       0x00000008
#define _ADCSS1L_CSS3_LENGTH                     0x00000001

#define _ADCSS1L_CSS4_POSITION                   0x00000004
#define _ADCSS1L_CSS4_MASK                       0x00000010
#define _ADCSS1L_CSS4_LENGTH                     0x00000001

#define _ADCSS1L_CSS5_POSITION                   0x00000005
#define _ADCSS1L_CSS5_MASK                       0x00000020
#define _ADCSS1L_CSS5_LENGTH                     0x00000001

#define _ADCSS1L_CSS6_POSITION                   0x00000006
#define _ADCSS1L_CSS6_MASK                       0x00000040
#define _ADCSS1L_CSS6_LENGTH                     0x00000001

#define _ADCSS1L_CSS7_POSITION                   0x00000007
#define _ADCSS1L_CSS7_MASK                       0x00000080
#define _ADCSS1L_CSS7_LENGTH                     0x00000001

#define _ADCSS1L_CSS8_POSITION                   0x00000008
#define _ADCSS1L_CSS8_MASK                       0x00000100
#define _ADCSS1L_CSS8_LENGTH                     0x00000001

#define _ADCSS1L_CSS9_POSITION                   0x00000009
#define _ADCSS1L_CSS9_MASK                       0x00000200
#define _ADCSS1L_CSS9_LENGTH                     0x00000001

#define _ADCSS1L_CSS10_POSITION                  0x0000000A
#define _ADCSS1L_CSS10_MASK                      0x00000400
#define _ADCSS1L_CSS10_LENGTH                    0x00000001

#define _ADCSS1L_CSS11_POSITION                  0x0000000B
#define _ADCSS1L_CSS11_MASK                      0x00000800
#define _ADCSS1L_CSS11_LENGTH                    0x00000001

#define _ADCSS1L_CSS12_POSITION                  0x0000000C
#define _ADCSS1L_CSS12_MASK                      0x00001000
#define _ADCSS1L_CSS12_LENGTH                    0x00000001

#define _ADCSS1L_CSS13_POSITION                  0x0000000D
#define _ADCSS1L_CSS13_MASK                      0x00002000
#define _ADCSS1L_CSS13_LENGTH                    0x00000001

#define _ADCSS1L_CSS14_POSITION                  0x0000000E
#define _ADCSS1L_CSS14_MASK                      0x00004000
#define _ADCSS1L_CSS14_LENGTH                    0x00000001

#define _ADSTATL_AN0RDY_POSITION                 0x00000000
#define _ADSTATL_AN0RDY_MASK                     0x00000001
#define _ADSTATL_AN0RDY_LENGTH                   0x00000001

#define _ADSTATL_AN1RDY_POSITION                 0x00000001
#define _ADSTATL_AN1RDY_MASK                     0x00000002
#define _ADSTATL_AN1RDY_LENGTH                   0x00000001

#define _ADSTATL_AN2RDY_POSITION                 0x00000002
#define _ADSTATL_AN2RDY_MASK                     0x00000004
#define _ADSTATL_AN2RDY_LENGTH                   0x00000001

#define _ADSTATL_AN3RDY_POSITION                 0x00000003
#define _ADSTATL_AN3RDY_MASK                     0x00000008
#define _ADSTATL_AN3RDY_LENGTH                   0x00000001

#define _ADSTATL_AN4RDY_POSITION                 0x00000004
#define _ADSTATL_AN4RDY_MASK                     0x00000010
#define _ADSTATL_AN4RDY_LENGTH                   0x00000001

#define _ADSTATL_AN5RDY_POSITION                 0x00000005
#define _ADSTATL_AN5RDY_MASK                     0x00000020
#define _ADSTATL_AN5RDY_LENGTH                   0x00000001

#define _ADSTATL_AN6RDY_POSITION                 0x00000006
#define _ADSTATL_AN6RDY_MASK                     0x00000040
#define _ADSTATL_AN6RDY_LENGTH                   0x00000001

#define _ADSTATL_AN7RDY_POSITION                 0x00000007
#define _ADSTATL_AN7RDY_MASK                     0x00000080
#define _ADSTATL_AN7RDY_LENGTH                   0x00000001

#define _ADSTATL_AN8RDY_POSITION                 0x00000008
#define _ADSTATL_AN8RDY_MASK                     0x00000100
#define _ADSTATL_AN8RDY_LENGTH                   0x00000001

#define _ADSTATL_AN9RDY_POSITION                 0x00000009
#define _ADSTATL_AN9RDY_MASK                     0x00000200
#define _ADSTATL_AN9RDY_LENGTH                   0x00000001

#define _ADSTATL_AN10RDY_POSITION                0x0000000A
#define _ADSTATL_AN10RDY_MASK                    0x00000400
#define _ADSTATL_AN10RDY_LENGTH                  0x00000001

#define _ADSTATL_AN11RDY_POSITION                0x0000000B
#define _ADSTATL_AN11RDY_MASK                    0x00000800
#define _ADSTATL_AN11RDY_LENGTH                  0x00000001

#define _ADSTATL_AN12RDY_POSITION                0x0000000C
#define _ADSTATL_AN12RDY_MASK                    0x00001000
#define _ADSTATL_AN12RDY_LENGTH                  0x00000001

#define _ADSTATL_AN13RDY_POSITION                0x0000000D
#define _ADSTATL_AN13RDY_MASK                    0x00002000
#define _ADSTATL_AN13RDY_LENGTH                  0x00000001

#define _ADSTATL_AN14RDY_POSITION                0x0000000E
#define _ADSTATL_AN14RDY_MASK                    0x00004000
#define _ADSTATL_AN14RDY_LENGTH                  0x00000001

#define _ADCMP0ENL_CMPEN0_POSITION               0x00000000
#define _ADCMP0ENL_CMPEN0_MASK                   0x00000001
#define _ADCMP0ENL_CMPEN0_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN1_POSITION               0x00000001
#define _ADCMP0ENL_CMPEN1_MASK                   0x00000002
#define _ADCMP0ENL_CMPEN1_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN2_POSITION               0x00000002
#define _ADCMP0ENL_CMPEN2_MASK                   0x00000004
#define _ADCMP0ENL_CMPEN2_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN3_POSITION               0x00000003
#define _ADCMP0ENL_CMPEN3_MASK                   0x00000008
#define _ADCMP0ENL_CMPEN3_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN4_POSITION               0x00000004
#define _ADCMP0ENL_CMPEN4_MASK                   0x00000010
#define _ADCMP0ENL_CMPEN4_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN5_POSITION               0x00000005
#define _ADCMP0ENL_CMPEN5_MASK                   0x00000020
#define _ADCMP0ENL_CMPEN5_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN6_POSITION               0x00000006
#define _ADCMP0ENL_CMPEN6_MASK                   0x00000040
#define _ADCMP0ENL_CMPEN6_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN7_POSITION               0x00000007
#define _ADCMP0ENL_CMPEN7_MASK                   0x00000080
#define _ADCMP0ENL_CMPEN7_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN8_POSITION               0x00000008
#define _ADCMP0ENL_CMPEN8_MASK                   0x00000100
#define _ADCMP0ENL_CMPEN8_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN9_POSITION               0x00000009
#define _ADCMP0ENL_CMPEN9_MASK                   0x00000200
#define _ADCMP0ENL_CMPEN9_LENGTH                 0x00000001

#define _ADCMP0ENL_CMPEN10_POSITION              0x0000000A
#define _ADCMP0ENL_CMPEN10_MASK                  0x00000400
#define _ADCMP0ENL_CMPEN10_LENGTH                0x00000001

#define _ADCMP0ENL_CMPEN11_POSITION              0x0000000B
#define _ADCMP0ENL_CMPEN11_MASK                  0x00000800
#define _ADCMP0ENL_CMPEN11_LENGTH                0x00000001

#define _ADCMP0ENL_CMPEN12_POSITION              0x0000000C
#define _ADCMP0ENL_CMPEN12_MASK                  0x00001000
#define _ADCMP0ENL_CMPEN12_LENGTH                0x00000001

#define _ADCMP0ENL_CMPEN13_POSITION              0x0000000D
#define _ADCMP0ENL_CMPEN13_MASK                  0x00002000
#define _ADCMP0ENL_CMPEN13_LENGTH                0x00000001

#define _ADCMP0ENL_CMPEN14_POSITION              0x0000000E
#define _ADCMP0ENL_CMPEN14_MASK                  0x00004000
#define _ADCMP0ENL_CMPEN14_LENGTH                0x00000001

#define _ADCMP1ENL_CMPEN0_POSITION               0x00000000
#define _ADCMP1ENL_CMPEN0_MASK                   0x00000001
#define _ADCMP1ENL_CMPEN0_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN1_POSITION               0x00000001
#define _ADCMP1ENL_CMPEN1_MASK                   0x00000002
#define _ADCMP1ENL_CMPEN1_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN2_POSITION               0x00000002
#define _ADCMP1ENL_CMPEN2_MASK                   0x00000004
#define _ADCMP1ENL_CMPEN2_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN3_POSITION               0x00000003
#define _ADCMP1ENL_CMPEN3_MASK                   0x00000008
#define _ADCMP1ENL_CMPEN3_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN4_POSITION               0x00000004
#define _ADCMP1ENL_CMPEN4_MASK                   0x00000010
#define _ADCMP1ENL_CMPEN4_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN5_POSITION               0x00000005
#define _ADCMP1ENL_CMPEN5_MASK                   0x00000020
#define _ADCMP1ENL_CMPEN5_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN6_POSITION               0x00000006
#define _ADCMP1ENL_CMPEN6_MASK                   0x00000040
#define _ADCMP1ENL_CMPEN6_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN7_POSITION               0x00000007
#define _ADCMP1ENL_CMPEN7_MASK                   0x00000080
#define _ADCMP1ENL_CMPEN7_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN8_POSITION               0x00000008
#define _ADCMP1ENL_CMPEN8_MASK                   0x00000100
#define _ADCMP1ENL_CMPEN8_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN9_POSITION               0x00000009
#define _ADCMP1ENL_CMPEN9_MASK                   0x00000200
#define _ADCMP1ENL_CMPEN9_LENGTH                 0x00000001

#define _ADCMP1ENL_CMPEN10_POSITION              0x0000000A
#define _ADCMP1ENL_CMPEN10_MASK                  0x00000400
#define _ADCMP1ENL_CMPEN10_LENGTH                0x00000001

#define _ADCMP1ENL_CMPEN11_POSITION              0x0000000B
#define _ADCMP1ENL_CMPEN11_MASK                  0x00000800
#define _ADCMP1ENL_CMPEN11_LENGTH                0x00000001

#define _ADCMP1ENL_CMPEN12_POSITION              0x0000000C
#define _ADCMP1ENL_CMPEN12_MASK                  0x00001000
#define _ADCMP1ENL_CMPEN12_LENGTH                0x00000001

#define _ADCMP1ENL_CMPEN13_POSITION              0x0000000D
#define _ADCMP1ENL_CMPEN13_MASK                  0x00002000
#define _ADCMP1ENL_CMPEN13_LENGTH                0x00000001

#define _ADCMP1ENL_CMPEN14_POSITION              0x0000000E
#define _ADCMP1ENL_CMPEN14_MASK                  0x00004000
#define _ADCMP1ENL_CMPEN14_LENGTH                0x00000001

#define _ADFL0CON_FLCHSEL_POSITION               0x00000000
#define _ADFL0CON_FLCHSEL_MASK                   0x0000001F
#define _ADFL0CON_FLCHSEL_LENGTH                 0x00000005

#define _ADFL0CON_RDY_POSITION                   0x00000008
#define _ADFL0CON_RDY_MASK                       0x00000100
#define _ADFL0CON_RDY_LENGTH                     0x00000001

#define _ADFL0CON_CIE_POSITION                   0x00000009
#define _ADFL0CON_CIE_MASK                       0x00000200
#define _ADFL0CON_CIE_LENGTH                     0x00000001

#define _ADFL0CON_OVRSAM_POSITION                0x0000000A
#define _ADFL0CON_OVRSAM_MASK                    0x00001C00
#define _ADFL0CON_OVRSAM_LENGTH                  0x00000003

#define _ADFL0CON_MODE_POSITION                  0x0000000D
#define _ADFL0CON_MODE_MASK                      0x00006000
#define _ADFL0CON_MODE_LENGTH                    0x00000002

#define _ADFL0CON_FLEN_POSITION                  0x0000000F
#define _ADFL0CON_FLEN_MASK                      0x00008000
#define _ADFL0CON_FLEN_LENGTH                    0x00000001

#define _ADFL0CON_FLCHSEL0_POSITION              0x00000000
#define _ADFL0CON_FLCHSEL0_MASK                  0x00000001
#define _ADFL0CON_FLCHSEL0_LENGTH                0x00000001

#define _ADFL0CON_FLCHSEL1_POSITION              0x00000001
#define _ADFL0CON_FLCHSEL1_MASK                  0x00000002
#define _ADFL0CON_FLCHSEL1_LENGTH                0x00000001

#define _ADFL0CON_FLCHSEL2_POSITION              0x00000002
#define _ADFL0CON_FLCHSEL2_MASK                  0x00000004
#define _ADFL0CON_FLCHSEL2_LENGTH                0x00000001

#define _ADFL0CON_FLCHSEL3_POSITION              0x00000003
#define _ADFL0CON_FLCHSEL3_MASK                  0x00000008
#define _ADFL0CON_FLCHSEL3_LENGTH                0x00000001

#define _ADFL0CON_FLCHSEL4_POSITION              0x00000004
#define _ADFL0CON_FLCHSEL4_MASK                  0x00000010
#define _ADFL0CON_FLCHSEL4_LENGTH                0x00000001

#define _ADFL0CON_OVRSAM0_POSITION               0x0000000A
#define _ADFL0CON_OVRSAM0_MASK                   0x00000400
#define _ADFL0CON_OVRSAM0_LENGTH                 0x00000001

#define _ADFL0CON_OVRSAM1_POSITION               0x0000000B
#define _ADFL0CON_OVRSAM1_MASK                   0x00000800
#define _ADFL0CON_OVRSAM1_LENGTH                 0x00000001

#define _ADFL0CON_OVRSAM2_POSITION               0x0000000C
#define _ADFL0CON_OVRSAM2_MASK                   0x00001000
#define _ADFL0CON_OVRSAM2_LENGTH                 0x00000001

#define _ADTRIG0L_TRGSRC0_POSITION               0x00000000
#define _ADTRIG0L_TRGSRC0_MASK                   0x0000001F
#define _ADTRIG0L_TRGSRC0_LENGTH                 0x00000005

#define _ADTRIG0L_TRGSRC1_POSITION               0x00000008
#define _ADTRIG0L_TRGSRC1_MASK                   0x00001F00
#define _ADTRIG0L_TRGSRC1_LENGTH                 0x00000005

#define _ADTRIG0L_TRGSRC20_POSITION              0x00000000
#define _ADTRIG0L_TRGSRC20_MASK                  0x00000001
#define _ADTRIG0L_TRGSRC20_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC21_POSITION              0x00000001
#define _ADTRIG0L_TRGSRC21_MASK                  0x00000002
#define _ADTRIG0L_TRGSRC21_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC22_POSITION              0x00000002
#define _ADTRIG0L_TRGSRC22_MASK                  0x00000004
#define _ADTRIG0L_TRGSRC22_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC23_POSITION              0x00000003
#define _ADTRIG0L_TRGSRC23_MASK                  0x00000008
#define _ADTRIG0L_TRGSRC23_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC24_POSITION              0x00000004
#define _ADTRIG0L_TRGSRC24_MASK                  0x00000010
#define _ADTRIG0L_TRGSRC24_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC10_POSITION              0x00000008
#define _ADTRIG0L_TRGSRC10_MASK                  0x00000100
#define _ADTRIG0L_TRGSRC10_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC11_POSITION              0x00000009
#define _ADTRIG0L_TRGSRC11_MASK                  0x00000200
#define _ADTRIG0L_TRGSRC11_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC12_POSITION              0x0000000A
#define _ADTRIG0L_TRGSRC12_MASK                  0x00000400
#define _ADTRIG0L_TRGSRC12_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC13_POSITION              0x0000000B
#define _ADTRIG0L_TRGSRC13_MASK                  0x00000800
#define _ADTRIG0L_TRGSRC13_LENGTH                0x00000001

#define _ADTRIG0L_TRGSRC14_POSITION              0x0000000C
#define _ADTRIG0L_TRGSRC14_MASK                  0x00001000
#define _ADTRIG0L_TRGSRC14_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC2_POSITION               0x00000000
#define _ADTRIG0H_TRGSRC2_MASK                   0x0000001F
#define _ADTRIG0H_TRGSRC2_LENGTH                 0x00000005

#define _ADTRIG0H_TRGSRC3_POSITION               0x00000008
#define _ADTRIG0H_TRGSRC3_MASK                   0x00001F00
#define _ADTRIG0H_TRGSRC3_LENGTH                 0x00000005

#define _ADTRIG0H_TRGSRC40_POSITION              0x00000000
#define _ADTRIG0H_TRGSRC40_MASK                  0x00000001
#define _ADTRIG0H_TRGSRC40_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC41_POSITION              0x00000001
#define _ADTRIG0H_TRGSRC41_MASK                  0x00000002
#define _ADTRIG0H_TRGSRC41_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC42_POSITION              0x00000002
#define _ADTRIG0H_TRGSRC42_MASK                  0x00000004
#define _ADTRIG0H_TRGSRC42_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC43_POSITION              0x00000003
#define _ADTRIG0H_TRGSRC43_MASK                  0x00000008
#define _ADTRIG0H_TRGSRC43_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC44_POSITION              0x00000004
#define _ADTRIG0H_TRGSRC44_MASK                  0x00000010
#define _ADTRIG0H_TRGSRC44_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC30_POSITION              0x00000008
#define _ADTRIG0H_TRGSRC30_MASK                  0x00000100
#define _ADTRIG0H_TRGSRC30_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC31_POSITION              0x00000009
#define _ADTRIG0H_TRGSRC31_MASK                  0x00000200
#define _ADTRIG0H_TRGSRC31_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC32_POSITION              0x0000000A
#define _ADTRIG0H_TRGSRC32_MASK                  0x00000400
#define _ADTRIG0H_TRGSRC32_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC33_POSITION              0x0000000B
#define _ADTRIG0H_TRGSRC33_MASK                  0x00000800
#define _ADTRIG0H_TRGSRC33_LENGTH                0x00000001

#define _ADTRIG0H_TRGSRC34_POSITION              0x0000000C
#define _ADTRIG0H_TRGSRC34_MASK                  0x00001000
#define _ADTRIG0H_TRGSRC34_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC4_POSITION               0x00000000
#define _ADTRIG1L_TRGSRC4_MASK                   0x0000001F
#define _ADTRIG1L_TRGSRC4_LENGTH                 0x00000005

#define _ADTRIG1L_TRGSRC5_POSITION               0x00000008
#define _ADTRIG1L_TRGSRC5_MASK                   0x00001F00
#define _ADTRIG1L_TRGSRC5_LENGTH                 0x00000005

#define _ADTRIG1L_TRGSRC60_POSITION              0x00000000
#define _ADTRIG1L_TRGSRC60_MASK                  0x00000001
#define _ADTRIG1L_TRGSRC60_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC61_POSITION              0x00000001
#define _ADTRIG1L_TRGSRC61_MASK                  0x00000002
#define _ADTRIG1L_TRGSRC61_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC62_POSITION              0x00000002
#define _ADTRIG1L_TRGSRC62_MASK                  0x00000004
#define _ADTRIG1L_TRGSRC62_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC63_POSITION              0x00000003
#define _ADTRIG1L_TRGSRC63_MASK                  0x00000008
#define _ADTRIG1L_TRGSRC63_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC64_POSITION              0x00000004
#define _ADTRIG1L_TRGSRC64_MASK                  0x00000010
#define _ADTRIG1L_TRGSRC64_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC50_POSITION              0x00000008
#define _ADTRIG1L_TRGSRC50_MASK                  0x00000100
#define _ADTRIG1L_TRGSRC50_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC51_POSITION              0x00000009
#define _ADTRIG1L_TRGSRC51_MASK                  0x00000200
#define _ADTRIG1L_TRGSRC51_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC52_POSITION              0x0000000A
#define _ADTRIG1L_TRGSRC52_MASK                  0x00000400
#define _ADTRIG1L_TRGSRC52_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC53_POSITION              0x0000000B
#define _ADTRIG1L_TRGSRC53_MASK                  0x00000800
#define _ADTRIG1L_TRGSRC53_LENGTH                0x00000001

#define _ADTRIG1L_TRGSRC54_POSITION              0x0000000C
#define _ADTRIG1L_TRGSRC54_MASK                  0x00001000
#define _ADTRIG1L_TRGSRC54_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC6_POSITION               0x00000000
#define _ADTRIG1H_TRGSRC6_MASK                   0x0000001F
#define _ADTRIG1H_TRGSRC6_LENGTH                 0x00000005

#define _ADTRIG1H_TRGSRC7_POSITION               0x00000008
#define _ADTRIG1H_TRGSRC7_MASK                   0x00001F00
#define _ADTRIG1H_TRGSRC7_LENGTH                 0x00000005

#define _ADTRIG1H_TRGSRC80_POSITION              0x00000000
#define _ADTRIG1H_TRGSRC80_MASK                  0x00000001
#define _ADTRIG1H_TRGSRC80_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC81_POSITION              0x00000001
#define _ADTRIG1H_TRGSRC81_MASK                  0x00000002
#define _ADTRIG1H_TRGSRC81_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC82_POSITION              0x00000002
#define _ADTRIG1H_TRGSRC82_MASK                  0x00000004
#define _ADTRIG1H_TRGSRC82_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC83_POSITION              0x00000003
#define _ADTRIG1H_TRGSRC83_MASK                  0x00000008
#define _ADTRIG1H_TRGSRC83_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC84_POSITION              0x00000004
#define _ADTRIG1H_TRGSRC84_MASK                  0x00000010
#define _ADTRIG1H_TRGSRC84_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC70_POSITION              0x00000008
#define _ADTRIG1H_TRGSRC70_MASK                  0x00000100
#define _ADTRIG1H_TRGSRC70_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC71_POSITION              0x00000009
#define _ADTRIG1H_TRGSRC71_MASK                  0x00000200
#define _ADTRIG1H_TRGSRC71_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC72_POSITION              0x0000000A
#define _ADTRIG1H_TRGSRC72_MASK                  0x00000400
#define _ADTRIG1H_TRGSRC72_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC73_POSITION              0x0000000B
#define _ADTRIG1H_TRGSRC73_MASK                  0x00000800
#define _ADTRIG1H_TRGSRC73_LENGTH                0x00000001

#define _ADTRIG1H_TRGSRC74_POSITION              0x0000000C
#define _ADTRIG1H_TRGSRC74_MASK                  0x00001000
#define _ADTRIG1H_TRGSRC74_LENGTH                0x00000001

#define _ADTRIG2L_TRGSRC8_POSITION               0x00000000
#define _ADTRIG2L_TRGSRC8_MASK                   0x0000001F
#define _ADTRIG2L_TRGSRC8_LENGTH                 0x00000005

#define _ADTRIG2L_TRGSRC9_POSITION               0x00000008
#define _ADTRIG2L_TRGSRC9_MASK                   0x00001F00
#define _ADTRIG2L_TRGSRC9_LENGTH                 0x00000005

#define _ADTRIG2L_TRGSRC100_POSITION             0x00000000
#define _ADTRIG2L_TRGSRC100_MASK                 0x00000001
#define _ADTRIG2L_TRGSRC100_LENGTH               0x00000001

#define _ADTRIG2L_TRGSRC101_POSITION             0x00000001
#define _ADTRIG2L_TRGSRC101_MASK                 0x00000002
#define _ADTRIG2L_TRGSRC101_LENGTH               0x00000001

#define _ADTRIG2L_TRGSRC102_POSITION             0x00000002
#define _ADTRIG2L_TRGSRC102_MASK                 0x00000004
#define _ADTRIG2L_TRGSRC102_LENGTH               0x00000001

#define _ADTRIG2L_TRGSRC103_POSITION             0x00000003
#define _ADTRIG2L_TRGSRC103_MASK                 0x00000008
#define _ADTRIG2L_TRGSRC103_LENGTH               0x00000001

#define _ADTRIG2L_TRGSRC104_POSITION             0x00000004
#define _ADTRIG2L_TRGSRC104_MASK                 0x00000010
#define _ADTRIG2L_TRGSRC104_LENGTH               0x00000001

#define _ADTRIG2L_TRGSRC90_POSITION              0x00000008
#define _ADTRIG2L_TRGSRC90_MASK                  0x00000100
#define _ADTRIG2L_TRGSRC90_LENGTH                0x00000001

#define _ADTRIG2L_TRGSRC91_POSITION              0x00000009
#define _ADTRIG2L_TRGSRC91_MASK                  0x00000200
#define _ADTRIG2L_TRGSRC91_LENGTH                0x00000001

#define _ADTRIG2L_TRGSRC92_POSITION              0x0000000A
#define _ADTRIG2L_TRGSRC92_MASK                  0x00000400
#define _ADTRIG2L_TRGSRC92_LENGTH                0x00000001

#define _ADTRIG2L_TRGSRC93_POSITION              0x0000000B
#define _ADTRIG2L_TRGSRC93_MASK                  0x00000800
#define _ADTRIG2L_TRGSRC93_LENGTH                0x00000001

#define _ADTRIG2L_TRGSRC94_POSITION              0x0000000C
#define _ADTRIG2L_TRGSRC94_MASK                  0x00001000
#define _ADTRIG2L_TRGSRC94_LENGTH                0x00000001

#define _ADTRIG2H_TRGSRC10_POSITION              0x00000000
#define _ADTRIG2H_TRGSRC10_MASK                  0x0000001F
#define _ADTRIG2H_TRGSRC10_LENGTH                0x00000005

#define _ADTRIG2H_TRGSRC11_POSITION              0x00000008
#define _ADTRIG2H_TRGSRC11_MASK                  0x00001F00
#define _ADTRIG2H_TRGSRC11_LENGTH                0x00000005

#define _ADTRIG2H_TRGSRC120_POSITION             0x00000000
#define _ADTRIG2H_TRGSRC120_MASK                 0x00000001
#define _ADTRIG2H_TRGSRC120_LENGTH               0x00000001

#define _ADTRIG2H_TRGSRC121_POSITION             0x00000001
#define _ADTRIG2H_TRGSRC121_MASK                 0x00000002
#define _ADTRIG2H_TRGSRC121_LENGTH               0x00000001

#define _ADTRIG2H_TRGSRC122_POSITION             0x00000002
#define _ADTRIG2H_TRGSRC122_MASK                 0x00000004
#define _ADTRIG2H_TRGSRC122_LENGTH               0x00000001

#define _ADTRIG2H_TRGSRC123_POSITION             0x00000003
#define _ADTRIG2H_TRGSRC123_MASK                 0x00000008
#define _ADTRIG2H_TRGSRC123_LENGTH               0x00000001

#define _ADTRIG2H_TRGSRC124_POSITION             0x00000004
#define _ADTRIG2H_TRGSRC124_MASK                 0x00000010
#define _ADTRIG2H_TRGSRC124_LENGTH               0x00000001

#define _ADTRIG2H_TRGSRC110_POSITION             0x00000008
#define _ADTRIG2H_TRGSRC110_MASK                 0x00000100
#define _ADTRIG2H_TRGSRC110_LENGTH               0x00000001

#define _ADTRIG2H_TRGSRC111_POSITION             0x00000009
#define _ADTRIG2H_TRGSRC111_MASK                 0x00000200
#define _ADTRIG2H_TRGSRC111_LENGTH               0x00000001

#define _ADTRIG2H_TRGSRC112_POSITION             0x0000000A
#define _ADTRIG2H_TRGSRC112_MASK                 0x00000400
#define _ADTRIG2H_TRGSRC112_LENGTH               0x00000001

#define _ADTRIG2H_TRGSRC113_POSITION             0x0000000B
#define _ADTRIG2H_TRGSRC113_MASK                 0x00000800
#define _ADTRIG2H_TRGSRC113_LENGTH               0x00000001

#define _ADTRIG2H_TRGSRC114_POSITION             0x0000000C
#define _ADTRIG2H_TRGSRC114_MASK                 0x00001000
#define _ADTRIG2H_TRGSRC114_LENGTH               0x00000001

#define _ADTRIG3L_TRGSRC12_POSITION              0x00000000
#define _ADTRIG3L_TRGSRC12_MASK                  0x0000001F
#define _ADTRIG3L_TRGSRC12_LENGTH                0x00000005

#define _ADTRIG3L_TRGSRC13_POSITION              0x00000008
#define _ADTRIG3L_TRGSRC13_MASK                  0x00001F00
#define _ADTRIG3L_TRGSRC13_LENGTH                0x00000005

#define _ADTRIG3L_TRGSRC140_POSITION             0x00000000
#define _ADTRIG3L_TRGSRC140_MASK                 0x00000001
#define _ADTRIG3L_TRGSRC140_LENGTH               0x00000001

#define _ADTRIG3L_TRGSRC141_POSITION             0x00000001
#define _ADTRIG3L_TRGSRC141_MASK                 0x00000002
#define _ADTRIG3L_TRGSRC141_LENGTH               0x00000001

#define _ADTRIG3L_TRGSRC142_POSITION             0x00000002
#define _ADTRIG3L_TRGSRC142_MASK                 0x00000004
#define _ADTRIG3L_TRGSRC142_LENGTH               0x00000001

#define _ADTRIG3L_TRGSRC143_POSITION             0x00000003
#define _ADTRIG3L_TRGSRC143_MASK                 0x00000008
#define _ADTRIG3L_TRGSRC143_LENGTH               0x00000001

#define _ADTRIG3L_TRGSRC144_POSITION             0x00000004
#define _ADTRIG3L_TRGSRC144_MASK                 0x00000010
#define _ADTRIG3L_TRGSRC144_LENGTH               0x00000001

#define _ADTRIG3L_TRGSRC130_POSITION             0x00000008
#define _ADTRIG3L_TRGSRC130_MASK                 0x00000100
#define _ADTRIG3L_TRGSRC130_LENGTH               0x00000001

#define _ADTRIG3L_TRGSRC131_POSITION             0x00000009
#define _ADTRIG3L_TRGSRC131_MASK                 0x00000200
#define _ADTRIG3L_TRGSRC131_LENGTH               0x00000001

#define _ADTRIG3L_TRGSRC132_POSITION             0x0000000A
#define _ADTRIG3L_TRGSRC132_MASK                 0x00000400
#define _ADTRIG3L_TRGSRC132_LENGTH               0x00000001

#define _ADTRIG3L_TRGSRC133_POSITION             0x0000000B
#define _ADTRIG3L_TRGSRC133_MASK                 0x00000800
#define _ADTRIG3L_TRGSRC133_LENGTH               0x00000001

#define _ADTRIG3L_TRGSRC134_POSITION             0x0000000C
#define _ADTRIG3L_TRGSRC134_MASK                 0x00001000
#define _ADTRIG3L_TRGSRC134_LENGTH               0x00000001

#define _ADTRIG3H_TRGSRC14_POSITION              0x00000000
#define _ADTRIG3H_TRGSRC14_MASK                  0x0000001F
#define _ADTRIG3H_TRGSRC14_LENGTH                0x00000005

#define _ADTRIG3H_TRGSRC160_POSITION             0x00000000
#define _ADTRIG3H_TRGSRC160_MASK                 0x00000001
#define _ADTRIG3H_TRGSRC160_LENGTH               0x00000001

#define _ADTRIG3H_TRGSRC161_POSITION             0x00000001
#define _ADTRIG3H_TRGSRC161_MASK                 0x00000002
#define _ADTRIG3H_TRGSRC161_LENGTH               0x00000001

#define _ADTRIG3H_TRGSRC162_POSITION             0x00000002
#define _ADTRIG3H_TRGSRC162_MASK                 0x00000004
#define _ADTRIG3H_TRGSRC162_LENGTH               0x00000001

#define _ADTRIG3H_TRGSRC163_POSITION             0x00000003
#define _ADTRIG3H_TRGSRC163_MASK                 0x00000008
#define _ADTRIG3H_TRGSRC163_LENGTH               0x00000001

#define _ADTRIG3H_TRGSRC164_POSITION             0x00000004
#define _ADTRIG3H_TRGSRC164_MASK                 0x00000010
#define _ADTRIG3H_TRGSRC164_LENGTH               0x00000001

#define _ADCMP0CON_LOLO_POSITION                 0x00000000
#define _ADCMP0CON_LOLO_MASK                     0x00000001
#define _ADCMP0CON_LOLO_LENGTH                   0x00000001

#define _ADCMP0CON_LOHI_POSITION                 0x00000001
#define _ADCMP0CON_LOHI_MASK                     0x00000002
#define _ADCMP0CON_LOHI_LENGTH                   0x00000001

#define _ADCMP0CON_HILO_POSITION                 0x00000002
#define _ADCMP0CON_HILO_MASK                     0x00000004
#define _ADCMP0CON_HILO_LENGTH                   0x00000001

#define _ADCMP0CON_HIHI_POSITION                 0x00000003
#define _ADCMP0CON_HIHI_MASK                     0x00000008
#define _ADCMP0CON_HIHI_LENGTH                   0x00000001

#define _ADCMP0CON_BTWN_POSITION                 0x00000004
#define _ADCMP0CON_BTWN_MASK                     0x00000010
#define _ADCMP0CON_BTWN_LENGTH                   0x00000001

#define _ADCMP0CON_STAT_POSITION                 0x00000005
#define _ADCMP0CON_STAT_MASK                     0x00000020
#define _ADCMP0CON_STAT_LENGTH                   0x00000001

#define _ADCMP0CON_CIE_POSITION                  0x00000006
#define _ADCMP0CON_CIE_MASK                      0x00000040
#define _ADCMP0CON_CIE_LENGTH                    0x00000001

#define _ADCMP0CON_CMPEN_POSITION                0x00000007
#define _ADCMP0CON_CMPEN_MASK                    0x00000080
#define _ADCMP0CON_CMPEN_LENGTH                  0x00000001

#define _ADCMP0CON_CHNL_POSITION                 0x00000008
#define _ADCMP0CON_CHNL_MASK                     0x00001F00
#define _ADCMP0CON_CHNL_LENGTH                   0x00000005

#define _ADCMP0CON_CHNL0_POSITION                0x00000008
#define _ADCMP0CON_CHNL0_MASK                    0x00000100
#define _ADCMP0CON_CHNL0_LENGTH                  0x00000001

#define _ADCMP0CON_CHNL1_POSITION                0x00000009
#define _ADCMP0CON_CHNL1_MASK                    0x00000200
#define _ADCMP0CON_CHNL1_LENGTH                  0x00000001

#define _ADCMP0CON_CHNL2_POSITION                0x0000000A
#define _ADCMP0CON_CHNL2_MASK                    0x00000400
#define _ADCMP0CON_CHNL2_LENGTH                  0x00000001

#define _ADCMP0CON_CHNL3_POSITION                0x0000000B
#define _ADCMP0CON_CHNL3_MASK                    0x00000800
#define _ADCMP0CON_CHNL3_LENGTH                  0x00000001

#define _ADCMP0CON_CHNL4_POSITION                0x0000000C
#define _ADCMP0CON_CHNL4_MASK                    0x00001000
#define _ADCMP0CON_CHNL4_LENGTH                  0x00000001

#define _ADCMP1CON_LOLO_POSITION                 0x00000000
#define _ADCMP1CON_LOLO_MASK                     0x00000001
#define _ADCMP1CON_LOLO_LENGTH                   0x00000001

#define _ADCMP1CON_LOHI_POSITION                 0x00000001
#define _ADCMP1CON_LOHI_MASK                     0x00000002
#define _ADCMP1CON_LOHI_LENGTH                   0x00000001

#define _ADCMP1CON_HILO_POSITION                 0x00000002
#define _ADCMP1CON_HILO_MASK                     0x00000004
#define _ADCMP1CON_HILO_LENGTH                   0x00000001

#define _ADCMP1CON_HIHI_POSITION                 0x00000003
#define _ADCMP1CON_HIHI_MASK                     0x00000008
#define _ADCMP1CON_HIHI_LENGTH                   0x00000001

#define _ADCMP1CON_BTWN_POSITION                 0x00000004
#define _ADCMP1CON_BTWN_MASK                     0x00000010
#define _ADCMP1CON_BTWN_LENGTH                   0x00000001

#define _ADCMP1CON_STAT_POSITION                 0x00000005
#define _ADCMP1CON_STAT_MASK                     0x00000020
#define _ADCMP1CON_STAT_LENGTH                   0x00000001

#define _ADCMP1CON_CIE_POSITION                  0x00000006
#define _ADCMP1CON_CIE_MASK                      0x00000040
#define _ADCMP1CON_CIE_LENGTH                    0x00000001

#define _ADCMP1CON_CMPEN_POSITION                0x00000007
#define _ADCMP1CON_CMPEN_MASK                    0x00000080
#define _ADCMP1CON_CMPEN_LENGTH                  0x00000001

#define _ADCMP1CON_CHNL_POSITION                 0x00000008
#define _ADCMP1CON_CHNL_MASK                     0x00001F00
#define _ADCMP1CON_CHNL_LENGTH                   0x00000005

#define _ADCMP1CON_CHNL0_POSITION                0x00000008
#define _ADCMP1CON_CHNL0_MASK                    0x00000100
#define _ADCMP1CON_CHNL0_LENGTH                  0x00000001

#define _ADCMP1CON_CHNL1_POSITION                0x00000009
#define _ADCMP1CON_CHNL1_MASK                    0x00000200
#define _ADCMP1CON_CHNL1_LENGTH                  0x00000001

#define _ADCMP1CON_CHNL2_POSITION                0x0000000A
#define _ADCMP1CON_CHNL2_MASK                    0x00000400
#define _ADCMP1CON_CHNL2_LENGTH                  0x00000001

#define _ADCMP1CON_CHNL3_POSITION                0x0000000B
#define _ADCMP1CON_CHNL3_MASK                    0x00000800
#define _ADCMP1CON_CHNL3_LENGTH                  0x00000001

#define _ADCMP1CON_CHNL4_POSITION                0x0000000C
#define _ADCMP1CON_CHNL4_MASK                    0x00001000
#define _ADCMP1CON_CHNL4_LENGTH                  0x00000001

#define _ADBASE_CHOFFSET_POSITION                0x00000000
#define _ADBASE_CHOFFSET_MASK                    0x0000FFFF
#define _ADBASE_CHOFFSET_LENGTH                  0x00000010

#define _ADBASE_CHOFFSET0_POSITION               0x00000000
#define _ADBASE_CHOFFSET0_MASK                   0x00000001
#define _ADBASE_CHOFFSET0_LENGTH                 0x00000001

#define _ADBASE_CHOFFSET1_POSITION               0x00000001
#define _ADBASE_CHOFFSET1_MASK                   0x00000002
#define _ADBASE_CHOFFSET1_LENGTH                 0x00000001

#define _ADBASE_CHOFFSET2_POSITION               0x00000002
#define _ADBASE_CHOFFSET2_MASK                   0x00000004
#define _ADBASE_CHOFFSET2_LENGTH                 0x00000001

#define _ADBASE_CHOFFSET3_POSITION               0x00000003
#define _ADBASE_CHOFFSET3_MASK                   0x00000008
#define _ADBASE_CHOFFSET3_LENGTH                 0x00000001

#define _ADBASE_CHOFFSET4_POSITION               0x00000004
#define _ADBASE_CHOFFSET4_MASK                   0x00000010
#define _ADBASE_CHOFFSET4_LENGTH                 0x00000001

#define _ADBASE_CHOFFSET5_POSITION               0x00000005
#define _ADBASE_CHOFFSET5_MASK                   0x00000020
#define _ADBASE_CHOFFSET5_LENGTH                 0x00000001

#define _ADBASE_CHOFFSET6_POSITION               0x00000006
#define _ADBASE_CHOFFSET6_MASK                   0x00000040
#define _ADBASE_CHOFFSET6_LENGTH                 0x00000001

#define _ADBASE_CHOFFSET7_POSITION               0x00000007
#define _ADBASE_CHOFFSET7_MASK                   0x00000080
#define _ADBASE_CHOFFSET7_LENGTH                 0x00000001

#define _ADBASE_CHOFFSET8_POSITION               0x00000008
#define _ADBASE_CHOFFSET8_MASK                   0x00000100
#define _ADBASE_CHOFFSET8_LENGTH                 0x00000001

#define _ADBASE_CHOFFSET9_POSITION               0x00000009
#define _ADBASE_CHOFFSET9_MASK                   0x00000200
#define _ADBASE_CHOFFSET9_LENGTH                 0x00000001

#define _ADBASE_CHOFFSET10_POSITION              0x0000000A
#define _ADBASE_CHOFFSET10_MASK                  0x00000400
#define _ADBASE_CHOFFSET10_LENGTH                0x00000001

#define _ADBASE_CHOFFSET11_POSITION              0x0000000B
#define _ADBASE_CHOFFSET11_MASK                  0x00000800
#define _ADBASE_CHOFFSET11_LENGTH                0x00000001

#define _ADBASE_CHOFFSET12_POSITION              0x0000000C
#define _ADBASE_CHOFFSET12_MASK                  0x00001000
#define _ADBASE_CHOFFSET12_LENGTH                0x00000001

#define _ADBASE_CHOFFSET13_POSITION              0x0000000D
#define _ADBASE_CHOFFSET13_MASK                  0x00002000
#define _ADBASE_CHOFFSET13_LENGTH                0x00000001

#define _ADBASE_CHOFFSET14_POSITION              0x0000000E
#define _ADBASE_CHOFFSET14_MASK                  0x00004000
#define _ADBASE_CHOFFSET14_LENGTH                0x00000001

#define _ADBASE_CHOFFSET15_POSITION              0x0000000F
#define _ADBASE_CHOFFSET15_MASK                  0x00008000
#define _ADBASE_CHOFFSET15_LENGTH                0x00000001

#define _ADLVLTRGL_LVLEN0_POSITION               0x00000000
#define _ADLVLTRGL_LVLEN0_MASK                   0x00000001
#define _ADLVLTRGL_LVLEN0_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN1_POSITION               0x00000001
#define _ADLVLTRGL_LVLEN1_MASK                   0x00000002
#define _ADLVLTRGL_LVLEN1_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN2_POSITION               0x00000002
#define _ADLVLTRGL_LVLEN2_MASK                   0x00000004
#define _ADLVLTRGL_LVLEN2_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN3_POSITION               0x00000003
#define _ADLVLTRGL_LVLEN3_MASK                   0x00000008
#define _ADLVLTRGL_LVLEN3_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN4_POSITION               0x00000004
#define _ADLVLTRGL_LVLEN4_MASK                   0x00000010
#define _ADLVLTRGL_LVLEN4_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN5_POSITION               0x00000005
#define _ADLVLTRGL_LVLEN5_MASK                   0x00000020
#define _ADLVLTRGL_LVLEN5_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN6_POSITION               0x00000006
#define _ADLVLTRGL_LVLEN6_MASK                   0x00000040
#define _ADLVLTRGL_LVLEN6_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN7_POSITION               0x00000007
#define _ADLVLTRGL_LVLEN7_MASK                   0x00000080
#define _ADLVLTRGL_LVLEN7_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN8_POSITION               0x00000008
#define _ADLVLTRGL_LVLEN8_MASK                   0x00000100
#define _ADLVLTRGL_LVLEN8_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN9_POSITION               0x00000009
#define _ADLVLTRGL_LVLEN9_MASK                   0x00000200
#define _ADLVLTRGL_LVLEN9_LENGTH                 0x00000001

#define _ADLVLTRGL_LVLEN10_POSITION              0x0000000A
#define _ADLVLTRGL_LVLEN10_MASK                  0x00000400
#define _ADLVLTRGL_LVLEN10_LENGTH                0x00000001

#define _ADLVLTRGL_LVLEN11_POSITION              0x0000000B
#define _ADLVLTRGL_LVLEN11_MASK                  0x00000800
#define _ADLVLTRGL_LVLEN11_LENGTH                0x00000001

#define _ADLVLTRGL_LVLEN12_POSITION              0x0000000C
#define _ADLVLTRGL_LVLEN12_MASK                  0x00001000
#define _ADLVLTRGL_LVLEN12_LENGTH                0x00000001

#define _ADLVLTRGL_LVLEN13_POSITION              0x0000000D
#define _ADLVLTRGL_LVLEN13_MASK                  0x00002000
#define _ADLVLTRGL_LVLEN13_LENGTH                0x00000001

#define _ADLVLTRGL_LVLEN14_POSITION              0x0000000E
#define _ADLVLTRGL_LVLEN14_MASK                  0x00004000
#define _ADLVLTRGL_LVLEN14_LENGTH                0x00000001

#define _ADCORE0L_SAMC_POSITION                  0x00000000
#define _ADCORE0L_SAMC_MASK                      0x000003FF
#define _ADCORE0L_SAMC_LENGTH                    0x0000000A

#define _ADCORE0L_SAMC0_POSITION                 0x00000000
#define _ADCORE0L_SAMC0_MASK                     0x00000001
#define _ADCORE0L_SAMC0_LENGTH                   0x00000001

#define _ADCORE0L_SAMC1_POSITION                 0x00000001
#define _ADCORE0L_SAMC1_MASK                     0x00000002
#define _ADCORE0L_SAMC1_LENGTH                   0x00000001

#define _ADCORE0L_SAMC2_POSITION                 0x00000002
#define _ADCORE0L_SAMC2_MASK                     0x00000004
#define _ADCORE0L_SAMC2_LENGTH                   0x00000001

#define _ADCORE0L_SAMC3_POSITION                 0x00000003
#define _ADCORE0L_SAMC3_MASK                     0x00000008
#define _ADCORE0L_SAMC3_LENGTH                   0x00000001

#define _ADCORE0L_SAMC4_POSITION                 0x00000004
#define _ADCORE0L_SAMC4_MASK                     0x00000010
#define _ADCORE0L_SAMC4_LENGTH                   0x00000001

#define _ADCORE0L_SAMC5_POSITION                 0x00000005
#define _ADCORE0L_SAMC5_MASK                     0x00000020
#define _ADCORE0L_SAMC5_LENGTH                   0x00000001

#define _ADCORE0L_SAMC6_POSITION                 0x00000006
#define _ADCORE0L_SAMC6_MASK                     0x00000040
#define _ADCORE0L_SAMC6_LENGTH                   0x00000001

#define _ADCORE0L_SAMC7_POSITION                 0x00000007
#define _ADCORE0L_SAMC7_MASK                     0x00000080
#define _ADCORE0L_SAMC7_LENGTH                   0x00000001

#define _ADCORE0L_SAMC8_POSITION                 0x00000008
#define _ADCORE0L_SAMC8_MASK                     0x00000100
#define _ADCORE0L_SAMC8_LENGTH                   0x00000001

#define _ADCORE0L_SAMC9_POSITION                 0x00000009
#define _ADCORE0L_SAMC9_MASK                     0x00000200
#define _ADCORE0L_SAMC9_LENGTH                   0x00000001

#define _ADCORE0H_ADCS_POSITION                  0x00000000
#define _ADCORE0H_ADCS_MASK                      0x0000007F
#define _ADCORE0H_ADCS_LENGTH                    0x00000007

#define _ADCORE0H_RES_POSITION                   0x00000008
#define _ADCORE0H_RES_MASK                       0x00000300
#define _ADCORE0H_RES_LENGTH                     0x00000002

#define _ADCORE0H_EISEL_POSITION                 0x0000000A
#define _ADCORE0H_EISEL_MASK                     0x00001C00
#define _ADCORE0H_EISEL_LENGTH                   0x00000003

#define _ADCORE0H_ADCS0_POSITION                 0x00000000
#define _ADCORE0H_ADCS0_MASK                     0x00000001
#define _ADCORE0H_ADCS0_LENGTH                   0x00000001

#define _ADCORE0H_ADCS1_POSITION                 0x00000001
#define _ADCORE0H_ADCS1_MASK                     0x00000002
#define _ADCORE0H_ADCS1_LENGTH                   0x00000001

#define _ADCORE0H_ADCS2_POSITION                 0x00000002
#define _ADCORE0H_ADCS2_MASK                     0x00000004
#define _ADCORE0H_ADCS2_LENGTH                   0x00000001

#define _ADCORE0H_ADCS3_POSITION                 0x00000003
#define _ADCORE0H_ADCS3_MASK                     0x00000008
#define _ADCORE0H_ADCS3_LENGTH                   0x00000001

#define _ADCORE0H_ADCS4_POSITION                 0x00000004
#define _ADCORE0H_ADCS4_MASK                     0x00000010
#define _ADCORE0H_ADCS4_LENGTH                   0x00000001

#define _ADCORE0H_ADCS5_POSITION                 0x00000005
#define _ADCORE0H_ADCS5_MASK                     0x00000020
#define _ADCORE0H_ADCS5_LENGTH                   0x00000001

#define _ADCORE0H_ADCS6_POSITION                 0x00000006
#define _ADCORE0H_ADCS6_MASK                     0x00000040
#define _ADCORE0H_ADCS6_LENGTH                   0x00000001

#define _ADCORE0H_RES0_POSITION                  0x00000008
#define _ADCORE0H_RES0_MASK                      0x00000100
#define _ADCORE0H_RES0_LENGTH                    0x00000001

#define _ADCORE0H_RES1_POSITION                  0x00000009
#define _ADCORE0H_RES1_MASK                      0x00000200
#define _ADCORE0H_RES1_LENGTH                    0x00000001

#define _ADCORE0H_EISEL0_POSITION                0x0000000A
#define _ADCORE0H_EISEL0_MASK                    0x00000400
#define _ADCORE0H_EISEL0_LENGTH                  0x00000001

#define _ADCORE0H_EISEL1_POSITION                0x0000000B
#define _ADCORE0H_EISEL1_MASK                    0x00000800
#define _ADCORE0H_EISEL1_LENGTH                  0x00000001

#define _ADCORE0H_EISEL2_POSITION                0x0000000C
#define _ADCORE0H_EISEL2_MASK                    0x00001000
#define _ADCORE0H_EISEL2_LENGTH                  0x00000001

#define _ADCORE1L_SAMC_POSITION                  0x00000000
#define _ADCORE1L_SAMC_MASK                      0x000003FF
#define _ADCORE1L_SAMC_LENGTH                    0x0000000A

#define _ADCORE1L_SAMC0_POSITION                 0x00000000
#define _ADCORE1L_SAMC0_MASK                     0x00000001
#define _ADCORE1L_SAMC0_LENGTH                   0x00000001

#define _ADCORE1L_SAMC1_POSITION                 0x00000001
#define _ADCORE1L_SAMC1_MASK                     0x00000002
#define _ADCORE1L_SAMC1_LENGTH                   0x00000001

#define _ADCORE1L_SAMC2_POSITION                 0x00000002
#define _ADCORE1L_SAMC2_MASK                     0x00000004
#define _ADCORE1L_SAMC2_LENGTH                   0x00000001

#define _ADCORE1L_SAMC3_POSITION                 0x00000003
#define _ADCORE1L_SAMC3_MASK                     0x00000008
#define _ADCORE1L_SAMC3_LENGTH                   0x00000001

#define _ADCORE1L_SAMC4_POSITION                 0x00000004
#define _ADCORE1L_SAMC4_MASK                     0x00000010
#define _ADCORE1L_SAMC4_LENGTH                   0x00000001

#define _ADCORE1L_SAMC5_POSITION                 0x00000005
#define _ADCORE1L_SAMC5_MASK                     0x00000020
#define _ADCORE1L_SAMC5_LENGTH                   0x00000001

#define _ADCORE1L_SAMC6_POSITION                 0x00000006
#define _ADCORE1L_SAMC6_MASK                     0x00000040
#define _ADCORE1L_SAMC6_LENGTH                   0x00000001

#define _ADCORE1L_SAMC7_POSITION                 0x00000007
#define _ADCORE1L_SAMC7_MASK                     0x00000080
#define _ADCORE1L_SAMC7_LENGTH                   0x00000001

#define _ADCORE1L_SAMC8_POSITION                 0x00000008
#define _ADCORE1L_SAMC8_MASK                     0x00000100
#define _ADCORE1L_SAMC8_LENGTH                   0x00000001

#define _ADCORE1L_SAMC9_POSITION                 0x00000009
#define _ADCORE1L_SAMC9_MASK                     0x00000200
#define _ADCORE1L_SAMC9_LENGTH                   0x00000001

#define _ADCORE1H_ADCS_POSITION                  0x00000000
#define _ADCORE1H_ADCS_MASK                      0x0000007F
#define _ADCORE1H_ADCS_LENGTH                    0x00000007

#define _ADCORE1H_RES_POSITION                   0x00000008
#define _ADCORE1H_RES_MASK                       0x00000300
#define _ADCORE1H_RES_LENGTH                     0x00000002

#define _ADCORE1H_EISEL_POSITION                 0x0000000A
#define _ADCORE1H_EISEL_MASK                     0x00001C00
#define _ADCORE1H_EISEL_LENGTH                   0x00000003

#define _ADCORE1H_ADCS0_POSITION                 0x00000000
#define _ADCORE1H_ADCS0_MASK                     0x00000001
#define _ADCORE1H_ADCS0_LENGTH                   0x00000001

#define _ADCORE1H_ADCS1_POSITION                 0x00000001
#define _ADCORE1H_ADCS1_MASK                     0x00000002
#define _ADCORE1H_ADCS1_LENGTH                   0x00000001

#define _ADCORE1H_ADCS2_POSITION                 0x00000002
#define _ADCORE1H_ADCS2_MASK                     0x00000004
#define _ADCORE1H_ADCS2_LENGTH                   0x00000001

#define _ADCORE1H_ADCS3_POSITION                 0x00000003
#define _ADCORE1H_ADCS3_MASK                     0x00000008
#define _ADCORE1H_ADCS3_LENGTH                   0x00000001

#define _ADCORE1H_ADCS4_POSITION                 0x00000004
#define _ADCORE1H_ADCS4_MASK                     0x00000010
#define _ADCORE1H_ADCS4_LENGTH                   0x00000001

#define _ADCORE1H_ADCS5_POSITION                 0x00000005
#define _ADCORE1H_ADCS5_MASK                     0x00000020
#define _ADCORE1H_ADCS5_LENGTH                   0x00000001

#define _ADCORE1H_ADCS6_POSITION                 0x00000006
#define _ADCORE1H_ADCS6_MASK                     0x00000040
#define _ADCORE1H_ADCS6_LENGTH                   0x00000001

#define _ADCORE1H_RES0_POSITION                  0x00000008
#define _ADCORE1H_RES0_MASK                      0x00000100
#define _ADCORE1H_RES0_LENGTH                    0x00000001

#define _ADCORE1H_RES1_POSITION                  0x00000009
#define _ADCORE1H_RES1_MASK                      0x00000200
#define _ADCORE1H_RES1_LENGTH                    0x00000001

#define _ADCORE1H_EISEL0_POSITION                0x0000000A
#define _ADCORE1H_EISEL0_MASK                    0x00000400
#define _ADCORE1H_EISEL0_LENGTH                  0x00000001

#define _ADCORE1H_EISEL1_POSITION                0x0000000B
#define _ADCORE1H_EISEL1_MASK                    0x00000800
#define _ADCORE1H_EISEL1_LENGTH                  0x00000001

#define _ADCORE1H_EISEL2_POSITION                0x0000000C
#define _ADCORE1H_EISEL2_MASK                    0x00001000
#define _ADCORE1H_EISEL2_LENGTH                  0x00000001

#define _ADEICONL_C0EIF_POSITION                 0x00000000
#define _ADEICONL_C0EIF_MASK                     0x00000001
#define _ADEICONL_C0EIF_LENGTH                   0x00000001

#define _ADEICONL_C1EIF_POSITION                 0x00000001
#define _ADEICONL_C1EIF_MASK                     0x00000002
#define _ADEICONL_C1EIF_LENGTH                   0x00000001

#define _ADEICONL_SHREIF_POSITION                0x00000007
#define _ADEICONL_SHREIF_MASK                    0x00000080
#define _ADEICONL_SHREIF_LENGTH                  0x00000001

#define _ADEICONL_C0EIEN_POSITION                0x00000008
#define _ADEICONL_C0EIEN_MASK                    0x00000100
#define _ADEICONL_C0EIEN_LENGTH                  0x00000001

#define _ADEICONL_C1EIEN_POSITION                0x00000009
#define _ADEICONL_C1EIEN_MASK                    0x00000200
#define _ADEICONL_C1EIEN_LENGTH                  0x00000001

#define _ADEICONL_SHREIEN_POSITION               0x0000000F
#define _ADEICONL_SHREIEN_MASK                   0x00008000
#define _ADEICONL_SHREIEN_LENGTH                 0x00000001

#define _ADEICONH_SHREICH_POSITION               0x00000000
#define _ADEICONH_SHREICH_MASK                   0x0000003F
#define _ADEICONH_SHREICH_LENGTH                 0x00000006

#define _ADCON5L_C0PWR_POSITION                  0x00000000
#define _ADCON5L_C0PWR_MASK                      0x00000001
#define _ADCON5L_C0PWR_LENGTH                    0x00000001

#define _ADCON5L_C1PWR_POSITION                  0x00000001
#define _ADCON5L_C1PWR_MASK                      0x00000002
#define _ADCON5L_C1PWR_LENGTH                    0x00000001

#define _ADCON5L_SHRPWR_POSITION                 0x00000007
#define _ADCON5L_SHRPWR_MASK                     0x00000080
#define _ADCON5L_SHRPWR_LENGTH                   0x00000001

#define _ADCON5L_C0RDY_POSITION                  0x00000008
#define _ADCON5L_C0RDY_MASK                      0x00000100
#define _ADCON5L_C0RDY_LENGTH                    0x00000001

#define _ADCON5L_C1RDY_POSITION                  0x00000009
#define _ADCON5L_C1RDY_MASK                      0x00000200
#define _ADCON5L_C1RDY_LENGTH                    0x00000001

#define _ADCON5L_SHRRDY_POSITION                 0x0000000F
#define _ADCON5L_SHRRDY_MASK                     0x00008000
#define _ADCON5L_SHRRDY_LENGTH                   0x00000001

#define _ADCON5H_C0C1E_POSITION                  0x00000000
#define _ADCON5H_C0C1E_MASK                      0x00000001
#define _ADCON5H_C0C1E_LENGTH                    0x00000001

#define _ADCON5H_C1C1E_POSITION                  0x00000001
#define _ADCON5H_C1C1E_MASK                      0x00000002
#define _ADCON5H_C1C1E_LENGTH                    0x00000001

#define _ADCON5H_C2C1E_POSITION                  0x00000002
#define _ADCON5H_C2C1E_MASK                      0x00000004
#define _ADCON5H_C2C1E_LENGTH                    0x00000001

#define _ADCON5H_C3C1E_POSITION                  0x00000003
#define _ADCON5H_C3C1E_MASK                      0x00000008
#define _ADCON5H_C3C1E_LENGTH                    0x00000001

#define _ADCON5H_C4C1E_POSITION                  0x00000004
#define _ADCON5H_C4C1E_MASK                      0x00000010
#define _ADCON5H_C4C1E_LENGTH                    0x00000001

#define _ADCON5H_C5C1E_POSITION                  0x00000005
#define _ADCON5H_C5C1E_MASK                      0x00000020
#define _ADCON5H_C5C1E_LENGTH                    0x00000001

#define _ADCON5H_C6C1E_POSITION                  0x00000006
#define _ADCON5H_C6C1E_MASK                      0x00000040
#define _ADCON5H_C6C1E_LENGTH                    0x00000001

#define _ADCON5H_SHRCIE_POSITION                 0x00000007
#define _ADCON5H_SHRCIE_MASK                     0x00000080
#define _ADCON5H_SHRCIE_LENGTH                   0x00000001

#define _ADCON5H_WARMTIME_POSITION               0x00000008
#define _ADCON5H_WARMTIME_MASK                   0x00001F00
#define _ADCON5H_WARMTIME_LENGTH                 0x00000005

#define _ADCAL0L_CAL0RUN_POSITION                0x00000000
#define _ADCAL0L_CAL0RUN_MASK                    0x00000001
#define _ADCAL0L_CAL0RUN_LENGTH                  0x00000001

#define _ADCAL0L_CAL0EN_POSITION                 0x00000001
#define _ADCAL0L_CAL0EN_MASK                     0x00000002
#define _ADCAL0L_CAL0EN_LENGTH                   0x00000001

#define _ADCAL0L_CAL0DIFF_POSITION               0x00000002
#define _ADCAL0L_CAL0DIFF_MASK                   0x00000004
#define _ADCAL0L_CAL0DIFF_LENGTH                 0x00000001

#define _ADCAL0L_CAL0SKIP_POSITION               0x00000003
#define _ADCAL0L_CAL0SKIP_MASK                   0x00000008
#define _ADCAL0L_CAL0SKIP_LENGTH                 0x00000001

#define _ADCAL0L_CAL0RDY_POSITION                0x00000007
#define _ADCAL0L_CAL0RDY_MASK                    0x00000080
#define _ADCAL0L_CAL0RDY_LENGTH                  0x00000001

#define _ADCAL0L_CAL1RUN_POSITION                0x00000008
#define _ADCAL0L_CAL1RUN_MASK                    0x00000100
#define _ADCAL0L_CAL1RUN_LENGTH                  0x00000001

#define _ADCAL0L_CAL1EN_POSITION                 0x00000009
#define _ADCAL0L_CAL1EN_MASK                     0x00000200
#define _ADCAL0L_CAL1EN_LENGTH                   0x00000001

#define _ADCAL0L_CAL1DIFF_POSITION               0x0000000A
#define _ADCAL0L_CAL1DIFF_MASK                   0x00000400
#define _ADCAL0L_CAL1DIFF_LENGTH                 0x00000001

#define _ADCAL0L_CAL1SKIP_POSITION               0x0000000B
#define _ADCAL0L_CAL1SKIP_MASK                   0x00000800
#define _ADCAL0L_CAL1SKIP_LENGTH                 0x00000001

#define _ADCAL0L_CAL1RDY_POSITION                0x0000000F
#define _ADCAL0L_CAL1RDY_MASK                    0x00008000
#define _ADCAL0L_CAL1RDY_LENGTH                  0x00000001

#define _ADCAL1H_CSHRRUN_POSITION                0x00000008
#define _ADCAL1H_CSHRRUN_MASK                    0x00000100
#define _ADCAL1H_CSHRRUN_LENGTH                  0x00000001

#define _ADCAL1H_CSHREN_POSITION                 0x00000009
#define _ADCAL1H_CSHREN_MASK                     0x00000200
#define _ADCAL1H_CSHREN_LENGTH                   0x00000001

#define _ADCAL1H_CSHRDIFF_POSITION               0x0000000A
#define _ADCAL1H_CSHRDIFF_MASK                   0x00000400
#define _ADCAL1H_CSHRDIFF_LENGTH                 0x00000001

#define _ADCAL1H_CSHRSKIP_POSITION               0x0000000B
#define _ADCAL1H_CSHRSKIP_MASK                   0x00000800
#define _ADCAL1H_CSHRSKIP_LENGTH                 0x00000001

#define _ADCAL1H_CSHRRDY_POSITION                0x0000000F
#define _ADCAL1H_CSHRRDY_MASK                    0x00008000
#define _ADCAL1H_CSHRRDY_LENGTH                  0x00000001

#define _PGA1CON_GAIN_POSITION                   0x00000000
#define _PGA1CON_GAIN_MASK                       0x00000007
#define _PGA1CON_GAIN_LENGTH                     0x00000003

#define _PGA1CON_SELNI_POSITION                  0x00000008
#define _PGA1CON_SELNI_MASK                      0x00000700
#define _PGA1CON_SELNI_LENGTH                    0x00000003

#define _PGA1CON_SELPI_POSITION                  0x0000000B
#define _PGA1CON_SELPI_MASK                      0x00003800
#define _PGA1CON_SELPI_LENGTH                    0x00000003

#define _PGA1CON_PGAOEN_POSITION                 0x0000000E
#define _PGA1CON_PGAOEN_MASK                     0x00004000
#define _PGA1CON_PGAOEN_LENGTH                   0x00000001

#define _PGA1CON_PGAEN_POSITION                  0x0000000F
#define _PGA1CON_PGAEN_MASK                      0x00008000
#define _PGA1CON_PGAEN_LENGTH                    0x00000001

#define _PGA1CON_GAIN0_POSITION                  0x00000000
#define _PGA1CON_GAIN0_MASK                      0x00000001
#define _PGA1CON_GAIN0_LENGTH                    0x00000001

#define _PGA1CON_GAIN1_POSITION                  0x00000001
#define _PGA1CON_GAIN1_MASK                      0x00000002
#define _PGA1CON_GAIN1_LENGTH                    0x00000001

#define _PGA1CON_GAIN2_POSITION                  0x00000002
#define _PGA1CON_GAIN2_MASK                      0x00000004
#define _PGA1CON_GAIN2_LENGTH                    0x00000001

#define _PGA1CON_SELNI0_POSITION                 0x00000008
#define _PGA1CON_SELNI0_MASK                     0x00000100
#define _PGA1CON_SELNI0_LENGTH                   0x00000001

#define _PGA1CON_SELNI1_POSITION                 0x00000009
#define _PGA1CON_SELNI1_MASK                     0x00000200
#define _PGA1CON_SELNI1_LENGTH                   0x00000001

#define _PGA1CON_SELNI2_POSITION                 0x0000000A
#define _PGA1CON_SELNI2_MASK                     0x00000400
#define _PGA1CON_SELNI2_LENGTH                   0x00000001

#define _PGA1CON_SELPI0_POSITION                 0x0000000B
#define _PGA1CON_SELPI0_MASK                     0x00000800
#define _PGA1CON_SELPI0_LENGTH                   0x00000001

#define _PGA1CON_SELPI1_POSITION                 0x0000000C
#define _PGA1CON_SELPI1_MASK                     0x00001000
#define _PGA1CON_SELPI1_LENGTH                   0x00000001

#define _PGA1CON_SELPI2_POSITION                 0x0000000D
#define _PGA1CON_SELPI2_MASK                     0x00002000
#define _PGA1CON_SELPI2_LENGTH                   0x00000001

#define _PGA1CAL_PGACAL_POSITION                 0x00000000
#define _PGA1CAL_PGACAL_MASK                     0x0000003F
#define _PGA1CAL_PGACAL_LENGTH                   0x00000006

#define _PGA2CON_GAIN_POSITION                   0x00000000
#define _PGA2CON_GAIN_MASK                       0x00000007
#define _PGA2CON_GAIN_LENGTH                     0x00000003

#define _PGA2CON_SELNI_POSITION                  0x00000008
#define _PGA2CON_SELNI_MASK                      0x00000700
#define _PGA2CON_SELNI_LENGTH                    0x00000003

#define _PGA2CON_SELPI_POSITION                  0x0000000B
#define _PGA2CON_SELPI_MASK                      0x00003800
#define _PGA2CON_SELPI_LENGTH                    0x00000003

#define _PGA2CON_PGAOEN_POSITION                 0x0000000E
#define _PGA2CON_PGAOEN_MASK                     0x00004000
#define _PGA2CON_PGAOEN_LENGTH                   0x00000001

#define _PGA2CON_PGAEN_POSITION                  0x0000000F
#define _PGA2CON_PGAEN_MASK                      0x00008000
#define _PGA2CON_PGAEN_LENGTH                    0x00000001

#define _PGA2CON_GAIN0_POSITION                  0x00000000
#define _PGA2CON_GAIN0_MASK                      0x00000001
#define _PGA2CON_GAIN0_LENGTH                    0x00000001

#define _PGA2CON_GAIN1_POSITION                  0x00000001
#define _PGA2CON_GAIN1_MASK                      0x00000002
#define _PGA2CON_GAIN1_LENGTH                    0x00000001

#define _PGA2CON_GAIN2_POSITION                  0x00000002
#define _PGA2CON_GAIN2_MASK                      0x00000004
#define _PGA2CON_GAIN2_LENGTH                    0x00000001

#define _PGA2CON_SELNI0_POSITION                 0x00000008
#define _PGA2CON_SELNI0_MASK                     0x00000100
#define _PGA2CON_SELNI0_LENGTH                   0x00000001

#define _PGA2CON_SELNI1_POSITION                 0x00000009
#define _PGA2CON_SELNI1_MASK                     0x00000200
#define _PGA2CON_SELNI1_LENGTH                   0x00000001

#define _PGA2CON_SELNI2_POSITION                 0x0000000A
#define _PGA2CON_SELNI2_MASK                     0x00000400
#define _PGA2CON_SELNI2_LENGTH                   0x00000001

#define _PGA2CON_SELPI0_POSITION                 0x0000000B
#define _PGA2CON_SELPI0_MASK                     0x00000800
#define _PGA2CON_SELPI0_LENGTH                   0x00000001

#define _PGA2CON_SELPI1_POSITION                 0x0000000C
#define _PGA2CON_SELPI1_MASK                     0x00001000
#define _PGA2CON_SELPI1_LENGTH                   0x00000001

#define _PGA2CON_SELPI2_POSITION                 0x0000000D
#define _PGA2CON_SELPI2_MASK                     0x00002000
#define _PGA2CON_SELPI2_LENGTH                   0x00000001

#define _PGA2CAL_PGACAL_POSITION                 0x00000000
#define _PGA2CAL_PGACAL_MASK                     0x0000003F
#define _PGA2CAL_PGACAL_LENGTH                   0x00000006

#define _CMP1CON_CMPPOL_POSITION                 0x00000001
#define _CMP1CON_CMPPOL_MASK                     0x00000002
#define _CMP1CON_CMPPOL_LENGTH                   0x00000001

#define _CMP1CON_ALTINP_POSITION                 0x00000002
#define _CMP1CON_ALTINP_MASK                     0x00000004
#define _CMP1CON_ALTINP_LENGTH                   0x00000001

#define _CMP1CON_CMPSTAT_POSITION                0x00000003
#define _CMP1CON_CMPSTAT_MASK                    0x00000008
#define _CMP1CON_CMPSTAT_LENGTH                  0x00000001

#define _CMP1CON_HYSPOL_POSITION                 0x00000004
#define _CMP1CON_HYSPOL_MASK                     0x00000010
#define _CMP1CON_HYSPOL_LENGTH                   0x00000001

#define _CMP1CON_INSEL_POSITION                  0x00000006
#define _CMP1CON_INSEL_MASK                      0x000000C0
#define _CMP1CON_INSEL_LENGTH                    0x00000002

#define _CMP1CON_FCLKSEL_POSITION                0x00000009
#define _CMP1CON_FCLKSEL_MASK                    0x00000200
#define _CMP1CON_FCLKSEL_LENGTH                  0x00000001

#define _CMP1CON_FLTREN_POSITION                 0x0000000A
#define _CMP1CON_FLTREN_MASK                     0x00000400
#define _CMP1CON_FLTREN_LENGTH                   0x00000001

#define _CMP1CON_HYSSEL_POSITION                 0x0000000B
#define _CMP1CON_HYSSEL_MASK                     0x00001800
#define _CMP1CON_HYSSEL_LENGTH                   0x00000002

#define _CMP1CON_CMPSIDL_POSITION                0x0000000D
#define _CMP1CON_CMPSIDL_MASK                    0x00002000
#define _CMP1CON_CMPSIDL_LENGTH                  0x00000001

#define _CMP1CON_CMPON_POSITION                  0x0000000F
#define _CMP1CON_CMPON_MASK                      0x00008000
#define _CMP1CON_CMPON_LENGTH                    0x00000001

#define _CMP1CON_INSEL0_POSITION                 0x00000006
#define _CMP1CON_INSEL0_MASK                     0x00000040
#define _CMP1CON_INSEL0_LENGTH                   0x00000001

#define _CMP1CON_INSEL1_POSITION                 0x00000007
#define _CMP1CON_INSEL1_MASK                     0x00000080
#define _CMP1CON_INSEL1_LENGTH                   0x00000001

#define _CMP1CON_HYSSEL0_POSITION                0x0000000B
#define _CMP1CON_HYSSEL0_MASK                    0x00000800
#define _CMP1CON_HYSSEL0_LENGTH                  0x00000001

#define _CMP1CON_HYSSEL1_POSITION                0x0000000C
#define _CMP1CON_HYSSEL1_MASK                    0x00001000
#define _CMP1CON_HYSSEL1_LENGTH                  0x00000001

#define _CMP1DAC_CMREF_POSITION                  0x00000000
#define _CMP1DAC_CMREF_MASK                      0x00000FFF
#define _CMP1DAC_CMREF_LENGTH                    0x0000000C

#define _CMP1DAC_CMREF0_POSITION                 0x00000000
#define _CMP1DAC_CMREF0_MASK                     0x00000001
#define _CMP1DAC_CMREF0_LENGTH                   0x00000001

#define _CMP1DAC_CMREF1_POSITION                 0x00000001
#define _CMP1DAC_CMREF1_MASK                     0x00000002
#define _CMP1DAC_CMREF1_LENGTH                   0x00000001

#define _CMP1DAC_CMREF2_POSITION                 0x00000002
#define _CMP1DAC_CMREF2_MASK                     0x00000004
#define _CMP1DAC_CMREF2_LENGTH                   0x00000001

#define _CMP1DAC_CMREF3_POSITION                 0x00000003
#define _CMP1DAC_CMREF3_MASK                     0x00000008
#define _CMP1DAC_CMREF3_LENGTH                   0x00000001

#define _CMP1DAC_CMREF4_POSITION                 0x00000004
#define _CMP1DAC_CMREF4_MASK                     0x00000010
#define _CMP1DAC_CMREF4_LENGTH                   0x00000001

#define _CMP1DAC_CMREF5_POSITION                 0x00000005
#define _CMP1DAC_CMREF5_MASK                     0x00000020
#define _CMP1DAC_CMREF5_LENGTH                   0x00000001

#define _CMP1DAC_CMREF6_POSITION                 0x00000006
#define _CMP1DAC_CMREF6_MASK                     0x00000040
#define _CMP1DAC_CMREF6_LENGTH                   0x00000001

#define _CMP1DAC_CMREF7_POSITION                 0x00000007
#define _CMP1DAC_CMREF7_MASK                     0x00000080
#define _CMP1DAC_CMREF7_LENGTH                   0x00000001

#define _CMP1DAC_CMREF8_POSITION                 0x00000008
#define _CMP1DAC_CMREF8_MASK                     0x00000100
#define _CMP1DAC_CMREF8_LENGTH                   0x00000001

#define _CMP1DAC_CMREF9_POSITION                 0x00000009
#define _CMP1DAC_CMREF9_MASK                     0x00000200
#define _CMP1DAC_CMREF9_LENGTH                   0x00000001

#define _CMP1DAC_CMREF10_POSITION                0x0000000A
#define _CMP1DAC_CMREF10_MASK                    0x00000400
#define _CMP1DAC_CMREF10_LENGTH                  0x00000001

#define _CMP1DAC_CMREF11_POSITION                0x0000000B
#define _CMP1DAC_CMREF11_MASK                    0x00000800
#define _CMP1DAC_CMREF11_LENGTH                  0x00000001

#define _CMP2CON_CMPPOL_POSITION                 0x00000001
#define _CMP2CON_CMPPOL_MASK                     0x00000002
#define _CMP2CON_CMPPOL_LENGTH                   0x00000001

#define _CMP2CON_ALTINP_POSITION                 0x00000002
#define _CMP2CON_ALTINP_MASK                     0x00000004
#define _CMP2CON_ALTINP_LENGTH                   0x00000001

#define _CMP2CON_CMPSTAT_POSITION                0x00000003
#define _CMP2CON_CMPSTAT_MASK                    0x00000008
#define _CMP2CON_CMPSTAT_LENGTH                  0x00000001

#define _CMP2CON_HYSPOL_POSITION                 0x00000004
#define _CMP2CON_HYSPOL_MASK                     0x00000010
#define _CMP2CON_HYSPOL_LENGTH                   0x00000001

#define _CMP2CON_INSEL_POSITION                  0x00000006
#define _CMP2CON_INSEL_MASK                      0x000000C0
#define _CMP2CON_INSEL_LENGTH                    0x00000002

#define _CMP2CON_FCLKSEL_POSITION                0x00000009
#define _CMP2CON_FCLKSEL_MASK                    0x00000200
#define _CMP2CON_FCLKSEL_LENGTH                  0x00000001

#define _CMP2CON_FLTREN_POSITION                 0x0000000A
#define _CMP2CON_FLTREN_MASK                     0x00000400
#define _CMP2CON_FLTREN_LENGTH                   0x00000001

#define _CMP2CON_HYSSEL_POSITION                 0x0000000B
#define _CMP2CON_HYSSEL_MASK                     0x00001800
#define _CMP2CON_HYSSEL_LENGTH                   0x00000002

#define _CMP2CON_CMPSIDL_POSITION                0x0000000D
#define _CMP2CON_CMPSIDL_MASK                    0x00002000
#define _CMP2CON_CMPSIDL_LENGTH                  0x00000001

#define _CMP2CON_CMPON_POSITION                  0x0000000F
#define _CMP2CON_CMPON_MASK                      0x00008000
#define _CMP2CON_CMPON_LENGTH                    0x00000001

#define _CMP2CON_INSEL0_POSITION                 0x00000006
#define _CMP2CON_INSEL0_MASK                     0x00000040
#define _CMP2CON_INSEL0_LENGTH                   0x00000001

#define _CMP2CON_INSEL1_POSITION                 0x00000007
#define _CMP2CON_INSEL1_MASK                     0x00000080
#define _CMP2CON_INSEL1_LENGTH                   0x00000001

#define _CMP2CON_HYSSEL0_POSITION                0x0000000B
#define _CMP2CON_HYSSEL0_MASK                    0x00000800
#define _CMP2CON_HYSSEL0_LENGTH                  0x00000001

#define _CMP2CON_HYSSEL1_POSITION                0x0000000C
#define _CMP2CON_HYSSEL1_MASK                    0x00001000
#define _CMP2CON_HYSSEL1_LENGTH                  0x00000001

#define _CMP2DAC_CMREF_POSITION                  0x00000000
#define _CMP2DAC_CMREF_MASK                      0x00000FFF
#define _CMP2DAC_CMREF_LENGTH                    0x0000000C

#define _CMP2DAC_CMREF0_POSITION                 0x00000000
#define _CMP2DAC_CMREF0_MASK                     0x00000001
#define _CMP2DAC_CMREF0_LENGTH                   0x00000001

#define _CMP2DAC_CMREF1_POSITION                 0x00000001
#define _CMP2DAC_CMREF1_MASK                     0x00000002
#define _CMP2DAC_CMREF1_LENGTH                   0x00000001

#define _CMP2DAC_CMREF2_POSITION                 0x00000002
#define _CMP2DAC_CMREF2_MASK                     0x00000004
#define _CMP2DAC_CMREF2_LENGTH                   0x00000001

#define _CMP2DAC_CMREF3_POSITION                 0x00000003
#define _CMP2DAC_CMREF3_MASK                     0x00000008
#define _CMP2DAC_CMREF3_LENGTH                   0x00000001

#define _CMP2DAC_CMREF4_POSITION                 0x00000004
#define _CMP2DAC_CMREF4_MASK                     0x00000010
#define _CMP2DAC_CMREF4_LENGTH                   0x00000001

#define _CMP2DAC_CMREF5_POSITION                 0x00000005
#define _CMP2DAC_CMREF5_MASK                     0x00000020
#define _CMP2DAC_CMREF5_LENGTH                   0x00000001

#define _CMP2DAC_CMREF6_POSITION                 0x00000006
#define _CMP2DAC_CMREF6_MASK                     0x00000040
#define _CMP2DAC_CMREF6_LENGTH                   0x00000001

#define _CMP2DAC_CMREF7_POSITION                 0x00000007
#define _CMP2DAC_CMREF7_MASK                     0x00000080
#define _CMP2DAC_CMREF7_LENGTH                   0x00000001

#define _CMP2DAC_CMREF8_POSITION                 0x00000008
#define _CMP2DAC_CMREF8_MASK                     0x00000100
#define _CMP2DAC_CMREF8_LENGTH                   0x00000001

#define _CMP2DAC_CMREF9_POSITION                 0x00000009
#define _CMP2DAC_CMREF9_MASK                     0x00000200
#define _CMP2DAC_CMREF9_LENGTH                   0x00000001

#define _CMP2DAC_CMREF10_POSITION                0x0000000A
#define _CMP2DAC_CMREF10_MASK                    0x00000400
#define _CMP2DAC_CMREF10_LENGTH                  0x00000001

#define _CMP2DAC_CMREF11_POSITION                0x0000000B
#define _CMP2DAC_CMREF11_MASK                    0x00000800
#define _CMP2DAC_CMREF11_LENGTH                  0x00000001

#define _RPOR0_RP32R_POSITION                    0x00000000
#define _RPOR0_RP32R_MASK                        0x0000003F
#define _RPOR0_RP32R_LENGTH                      0x00000006

#define _RPOR0_RP33R_POSITION                    0x00000008
#define _RPOR0_RP33R_MASK                        0x00003F00
#define _RPOR0_RP33R_LENGTH                      0x00000006

#define _RPOR0_RP32R0_POSITION                   0x00000000
#define _RPOR0_RP32R0_MASK                       0x00000001
#define _RPOR0_RP32R0_LENGTH                     0x00000001

#define _RPOR0_RP32R1_POSITION                   0x00000001
#define _RPOR0_RP32R1_MASK                       0x00000002
#define _RPOR0_RP32R1_LENGTH                     0x00000001

#define _RPOR0_RP32R2_POSITION                   0x00000002
#define _RPOR0_RP32R2_MASK                       0x00000004
#define _RPOR0_RP32R2_LENGTH                     0x00000001

#define _RPOR0_RP32R3_POSITION                   0x00000003
#define _RPOR0_RP32R3_MASK                       0x00000008
#define _RPOR0_RP32R3_LENGTH                     0x00000001

#define _RPOR0_RP32R4_POSITION                   0x00000004
#define _RPOR0_RP32R4_MASK                       0x00000010
#define _RPOR0_RP32R4_LENGTH                     0x00000001

#define _RPOR0_RP32R5_POSITION                   0x00000005
#define _RPOR0_RP32R5_MASK                       0x00000020
#define _RPOR0_RP32R5_LENGTH                     0x00000001

#define _RPOR0_RP33R0_POSITION                   0x00000008
#define _RPOR0_RP33R0_MASK                       0x00000100
#define _RPOR0_RP33R0_LENGTH                     0x00000001

#define _RPOR0_RP33R1_POSITION                   0x00000009
#define _RPOR0_RP33R1_MASK                       0x00000200
#define _RPOR0_RP33R1_LENGTH                     0x00000001

#define _RPOR0_RP33R2_POSITION                   0x0000000A
#define _RPOR0_RP33R2_MASK                       0x00000400
#define _RPOR0_RP33R2_LENGTH                     0x00000001

#define _RPOR0_RP33R3_POSITION                   0x0000000B
#define _RPOR0_RP33R3_MASK                       0x00000800
#define _RPOR0_RP33R3_LENGTH                     0x00000001

#define _RPOR0_RP33R4_POSITION                   0x0000000C
#define _RPOR0_RP33R4_MASK                       0x00001000
#define _RPOR0_RP33R4_LENGTH                     0x00000001

#define _RPOR0_RP33R5_POSITION                   0x0000000D
#define _RPOR0_RP33R5_MASK                       0x00002000
#define _RPOR0_RP33R5_LENGTH                     0x00000001

#define _RPOR1_RP34R_POSITION                    0x00000000
#define _RPOR1_RP34R_MASK                        0x0000003F
#define _RPOR1_RP34R_LENGTH                      0x00000006

#define _RPOR1_RP35R_POSITION                    0x00000008
#define _RPOR1_RP35R_MASK                        0x00003F00
#define _RPOR1_RP35R_LENGTH                      0x00000006

#define _RPOR1_RP34R0_POSITION                   0x00000000
#define _RPOR1_RP34R0_MASK                       0x00000001
#define _RPOR1_RP34R0_LENGTH                     0x00000001

#define _RPOR1_RP34R1_POSITION                   0x00000001
#define _RPOR1_RP34R1_MASK                       0x00000002
#define _RPOR1_RP34R1_LENGTH                     0x00000001

#define _RPOR1_RP34R2_POSITION                   0x00000002
#define _RPOR1_RP34R2_MASK                       0x00000004
#define _RPOR1_RP34R2_LENGTH                     0x00000001

#define _RPOR1_RP34R3_POSITION                   0x00000003
#define _RPOR1_RP34R3_MASK                       0x00000008
#define _RPOR1_RP34R3_LENGTH                     0x00000001

#define _RPOR1_RP34R4_POSITION                   0x00000004
#define _RPOR1_RP34R4_MASK                       0x00000010
#define _RPOR1_RP34R4_LENGTH                     0x00000001

#define _RPOR1_RP34R5_POSITION                   0x00000005
#define _RPOR1_RP34R5_MASK                       0x00000020
#define _RPOR1_RP34R5_LENGTH                     0x00000001

#define _RPOR1_RP35R0_POSITION                   0x00000008
#define _RPOR1_RP35R0_MASK                       0x00000100
#define _RPOR1_RP35R0_LENGTH                     0x00000001

#define _RPOR1_RP35R1_POSITION                   0x00000009
#define _RPOR1_RP35R1_MASK                       0x00000200
#define _RPOR1_RP35R1_LENGTH                     0x00000001

#define _RPOR1_RP35R2_POSITION                   0x0000000A
#define _RPOR1_RP35R2_MASK                       0x00000400
#define _RPOR1_RP35R2_LENGTH                     0x00000001

#define _RPOR1_RP35R3_POSITION                   0x0000000B
#define _RPOR1_RP35R3_MASK                       0x00000800
#define _RPOR1_RP35R3_LENGTH                     0x00000001

#define _RPOR1_RP35R4_POSITION                   0x0000000C
#define _RPOR1_RP35R4_MASK                       0x00001000
#define _RPOR1_RP35R4_LENGTH                     0x00000001

#define _RPOR1_RP35R5_POSITION                   0x0000000D
#define _RPOR1_RP35R5_MASK                       0x00002000
#define _RPOR1_RP35R5_LENGTH                     0x00000001

#define _RPOR2_RP36R_POSITION                    0x00000000
#define _RPOR2_RP36R_MASK                        0x0000003F
#define _RPOR2_RP36R_LENGTH                      0x00000006

#define _RPOR2_RP37R_POSITION                    0x00000008
#define _RPOR2_RP37R_MASK                        0x00003F00
#define _RPOR2_RP37R_LENGTH                      0x00000006

#define _RPOR2_RP36R0_POSITION                   0x00000000
#define _RPOR2_RP36R0_MASK                       0x00000001
#define _RPOR2_RP36R0_LENGTH                     0x00000001

#define _RPOR2_RP36R1_POSITION                   0x00000001
#define _RPOR2_RP36R1_MASK                       0x00000002
#define _RPOR2_RP36R1_LENGTH                     0x00000001

#define _RPOR2_RP36R2_POSITION                   0x00000002
#define _RPOR2_RP36R2_MASK                       0x00000004
#define _RPOR2_RP36R2_LENGTH                     0x00000001

#define _RPOR2_RP36R3_POSITION                   0x00000003
#define _RPOR2_RP36R3_MASK                       0x00000008
#define _RPOR2_RP36R3_LENGTH                     0x00000001

#define _RPOR2_RP36R4_POSITION                   0x00000004
#define _RPOR2_RP36R4_MASK                       0x00000010
#define _RPOR2_RP36R4_LENGTH                     0x00000001

#define _RPOR2_RP36R5_POSITION                   0x00000005
#define _RPOR2_RP36R5_MASK                       0x00000020
#define _RPOR2_RP36R5_LENGTH                     0x00000001

#define _RPOR2_RP37R0_POSITION                   0x00000008
#define _RPOR2_RP37R0_MASK                       0x00000100
#define _RPOR2_RP37R0_LENGTH                     0x00000001

#define _RPOR2_RP37R1_POSITION                   0x00000009
#define _RPOR2_RP37R1_MASK                       0x00000200
#define _RPOR2_RP37R1_LENGTH                     0x00000001

#define _RPOR2_RP37R2_POSITION                   0x0000000A
#define _RPOR2_RP37R2_MASK                       0x00000400
#define _RPOR2_RP37R2_LENGTH                     0x00000001

#define _RPOR2_RP37R3_POSITION                   0x0000000B
#define _RPOR2_RP37R3_MASK                       0x00000800
#define _RPOR2_RP37R3_LENGTH                     0x00000001

#define _RPOR2_RP37R4_POSITION                   0x0000000C
#define _RPOR2_RP37R4_MASK                       0x00001000
#define _RPOR2_RP37R4_LENGTH                     0x00000001

#define _RPOR2_RP37R5_POSITION                   0x0000000D
#define _RPOR2_RP37R5_MASK                       0x00002000
#define _RPOR2_RP37R5_LENGTH                     0x00000001

#define _RPOR3_RP38R_POSITION                    0x00000000
#define _RPOR3_RP38R_MASK                        0x0000003F
#define _RPOR3_RP38R_LENGTH                      0x00000006

#define _RPOR3_RP39R_POSITION                    0x00000008
#define _RPOR3_RP39R_MASK                        0x00003F00
#define _RPOR3_RP39R_LENGTH                      0x00000006

#define _RPOR3_RP38R0_POSITION                   0x00000000
#define _RPOR3_RP38R0_MASK                       0x00000001
#define _RPOR3_RP38R0_LENGTH                     0x00000001

#define _RPOR3_RP38R1_POSITION                   0x00000001
#define _RPOR3_RP38R1_MASK                       0x00000002
#define _RPOR3_RP38R1_LENGTH                     0x00000001

#define _RPOR3_RP38R2_POSITION                   0x00000002
#define _RPOR3_RP38R2_MASK                       0x00000004
#define _RPOR3_RP38R2_LENGTH                     0x00000001

#define _RPOR3_RP38R3_POSITION                   0x00000003
#define _RPOR3_RP38R3_MASK                       0x00000008
#define _RPOR3_RP38R3_LENGTH                     0x00000001

#define _RPOR3_RP38R4_POSITION                   0x00000004
#define _RPOR3_RP38R4_MASK                       0x00000010
#define _RPOR3_RP38R4_LENGTH                     0x00000001

#define _RPOR3_RP38R5_POSITION                   0x00000005
#define _RPOR3_RP38R5_MASK                       0x00000020
#define _RPOR3_RP38R5_LENGTH                     0x00000001

#define _RPOR3_RP39R0_POSITION                   0x00000008
#define _RPOR3_RP39R0_MASK                       0x00000100
#define _RPOR3_RP39R0_LENGTH                     0x00000001

#define _RPOR3_RP39R1_POSITION                   0x00000009
#define _RPOR3_RP39R1_MASK                       0x00000200
#define _RPOR3_RP39R1_LENGTH                     0x00000001

#define _RPOR3_RP39R2_POSITION                   0x0000000A
#define _RPOR3_RP39R2_MASK                       0x00000400
#define _RPOR3_RP39R2_LENGTH                     0x00000001

#define _RPOR3_RP39R3_POSITION                   0x0000000B
#define _RPOR3_RP39R3_MASK                       0x00000800
#define _RPOR3_RP39R3_LENGTH                     0x00000001

#define _RPOR3_RP39R4_POSITION                   0x0000000C
#define _RPOR3_RP39R4_MASK                       0x00001000
#define _RPOR3_RP39R4_LENGTH                     0x00000001

#define _RPOR3_RP39R5_POSITION                   0x0000000D
#define _RPOR3_RP39R5_MASK                       0x00002000
#define _RPOR3_RP39R5_LENGTH                     0x00000001

#define _RPOR4_RP40R_POSITION                    0x00000000
#define _RPOR4_RP40R_MASK                        0x0000003F
#define _RPOR4_RP40R_LENGTH                      0x00000006

#define _RPOR4_RP41R_POSITION                    0x00000008
#define _RPOR4_RP41R_MASK                        0x00003F00
#define _RPOR4_RP41R_LENGTH                      0x00000006

#define _RPOR4_RP40R0_POSITION                   0x00000000
#define _RPOR4_RP40R0_MASK                       0x00000001
#define _RPOR4_RP40R0_LENGTH                     0x00000001

#define _RPOR4_RP40R1_POSITION                   0x00000001
#define _RPOR4_RP40R1_MASK                       0x00000002
#define _RPOR4_RP40R1_LENGTH                     0x00000001

#define _RPOR4_RP40R2_POSITION                   0x00000002
#define _RPOR4_RP40R2_MASK                       0x00000004
#define _RPOR4_RP40R2_LENGTH                     0x00000001

#define _RPOR4_RP40R3_POSITION                   0x00000003
#define _RPOR4_RP40R3_MASK                       0x00000008
#define _RPOR4_RP40R3_LENGTH                     0x00000001

#define _RPOR4_RP40R4_POSITION                   0x00000004
#define _RPOR4_RP40R4_MASK                       0x00000010
#define _RPOR4_RP40R4_LENGTH                     0x00000001

#define _RPOR4_RP40R5_POSITION                   0x00000005
#define _RPOR4_RP40R5_MASK                       0x00000020
#define _RPOR4_RP40R5_LENGTH                     0x00000001

#define _RPOR4_RP41R0_POSITION                   0x00000008
#define _RPOR4_RP41R0_MASK                       0x00000100
#define _RPOR4_RP41R0_LENGTH                     0x00000001

#define _RPOR4_RP41R1_POSITION                   0x00000009
#define _RPOR4_RP41R1_MASK                       0x00000200
#define _RPOR4_RP41R1_LENGTH                     0x00000001

#define _RPOR4_RP41R2_POSITION                   0x0000000A
#define _RPOR4_RP41R2_MASK                       0x00000400
#define _RPOR4_RP41R2_LENGTH                     0x00000001

#define _RPOR4_RP41R3_POSITION                   0x0000000B
#define _RPOR4_RP41R3_MASK                       0x00000800
#define _RPOR4_RP41R3_LENGTH                     0x00000001

#define _RPOR4_RP41R4_POSITION                   0x0000000C
#define _RPOR4_RP41R4_MASK                       0x00001000
#define _RPOR4_RP41R4_LENGTH                     0x00000001

#define _RPOR4_RP41R5_POSITION                   0x0000000D
#define _RPOR4_RP41R5_MASK                       0x00002000
#define _RPOR4_RP41R5_LENGTH                     0x00000001

#define _RPOR5_RP42R_POSITION                    0x00000000
#define _RPOR5_RP42R_MASK                        0x0000003F
#define _RPOR5_RP42R_LENGTH                      0x00000006

#define _RPOR5_RP43R_POSITION                    0x00000008
#define _RPOR5_RP43R_MASK                        0x00003F00
#define _RPOR5_RP43R_LENGTH                      0x00000006

#define _RPOR5_RP42R0_POSITION                   0x00000000
#define _RPOR5_RP42R0_MASK                       0x00000001
#define _RPOR5_RP42R0_LENGTH                     0x00000001

#define _RPOR5_RP42R1_POSITION                   0x00000001
#define _RPOR5_RP42R1_MASK                       0x00000002
#define _RPOR5_RP42R1_LENGTH                     0x00000001

#define _RPOR5_RP42R2_POSITION                   0x00000002
#define _RPOR5_RP42R2_MASK                       0x00000004
#define _RPOR5_RP42R2_LENGTH                     0x00000001

#define _RPOR5_RP42R3_POSITION                   0x00000003
#define _RPOR5_RP42R3_MASK                       0x00000008
#define _RPOR5_RP42R3_LENGTH                     0x00000001

#define _RPOR5_RP42R4_POSITION                   0x00000004
#define _RPOR5_RP42R4_MASK                       0x00000010
#define _RPOR5_RP42R4_LENGTH                     0x00000001

#define _RPOR5_RP42R5_POSITION                   0x00000005
#define _RPOR5_RP42R5_MASK                       0x00000020
#define _RPOR5_RP42R5_LENGTH                     0x00000001

#define _RPOR5_RP43R0_POSITION                   0x00000008
#define _RPOR5_RP43R0_MASK                       0x00000100
#define _RPOR5_RP43R0_LENGTH                     0x00000001

#define _RPOR5_RP43R1_POSITION                   0x00000009
#define _RPOR5_RP43R1_MASK                       0x00000200
#define _RPOR5_RP43R1_LENGTH                     0x00000001

#define _RPOR5_RP43R2_POSITION                   0x0000000A
#define _RPOR5_RP43R2_MASK                       0x00000400
#define _RPOR5_RP43R2_LENGTH                     0x00000001

#define _RPOR5_RP43R3_POSITION                   0x0000000B
#define _RPOR5_RP43R3_MASK                       0x00000800
#define _RPOR5_RP43R3_LENGTH                     0x00000001

#define _RPOR5_RP43R4_POSITION                   0x0000000C
#define _RPOR5_RP43R4_MASK                       0x00001000
#define _RPOR5_RP43R4_LENGTH                     0x00000001

#define _RPOR5_RP43R5_POSITION                   0x0000000D
#define _RPOR5_RP43R5_MASK                       0x00002000
#define _RPOR5_RP43R5_LENGTH                     0x00000001

#define _RPOR6_RP44R_POSITION                    0x00000000
#define _RPOR6_RP44R_MASK                        0x0000003F
#define _RPOR6_RP44R_LENGTH                      0x00000006

#define _RPOR6_RP45R_POSITION                    0x00000008
#define _RPOR6_RP45R_MASK                        0x00003F00
#define _RPOR6_RP45R_LENGTH                      0x00000006

#define _RPOR6_RP44R0_POSITION                   0x00000000
#define _RPOR6_RP44R0_MASK                       0x00000001
#define _RPOR6_RP44R0_LENGTH                     0x00000001

#define _RPOR6_RP44R1_POSITION                   0x00000001
#define _RPOR6_RP44R1_MASK                       0x00000002
#define _RPOR6_RP44R1_LENGTH                     0x00000001

#define _RPOR6_RP44R2_POSITION                   0x00000002
#define _RPOR6_RP44R2_MASK                       0x00000004
#define _RPOR6_RP44R2_LENGTH                     0x00000001

#define _RPOR6_RP44R3_POSITION                   0x00000003
#define _RPOR6_RP44R3_MASK                       0x00000008
#define _RPOR6_RP44R3_LENGTH                     0x00000001

#define _RPOR6_RP44R4_POSITION                   0x00000004
#define _RPOR6_RP44R4_MASK                       0x00000010
#define _RPOR6_RP44R4_LENGTH                     0x00000001

#define _RPOR6_RP44R5_POSITION                   0x00000005
#define _RPOR6_RP44R5_MASK                       0x00000020
#define _RPOR6_RP44R5_LENGTH                     0x00000001

#define _RPOR6_RP45R0_POSITION                   0x00000008
#define _RPOR6_RP45R0_MASK                       0x00000100
#define _RPOR6_RP45R0_LENGTH                     0x00000001

#define _RPOR6_RP45R1_POSITION                   0x00000009
#define _RPOR6_RP45R1_MASK                       0x00000200
#define _RPOR6_RP45R1_LENGTH                     0x00000001

#define _RPOR6_RP45R2_POSITION                   0x0000000A
#define _RPOR6_RP45R2_MASK                       0x00000400
#define _RPOR6_RP45R2_LENGTH                     0x00000001

#define _RPOR6_RP45R3_POSITION                   0x0000000B
#define _RPOR6_RP45R3_MASK                       0x00000800
#define _RPOR6_RP45R3_LENGTH                     0x00000001

#define _RPOR6_RP45R4_POSITION                   0x0000000C
#define _RPOR6_RP45R4_MASK                       0x00001000
#define _RPOR6_RP45R4_LENGTH                     0x00000001

#define _RPOR6_RP45R5_POSITION                   0x0000000D
#define _RPOR6_RP45R5_MASK                       0x00002000
#define _RPOR6_RP45R5_LENGTH                     0x00000001

#define _RPOR7_RP46R_POSITION                    0x00000000
#define _RPOR7_RP46R_MASK                        0x0000003F
#define _RPOR7_RP46R_LENGTH                      0x00000006

#define _RPOR7_RP47R_POSITION                    0x00000008
#define _RPOR7_RP47R_MASK                        0x00003F00
#define _RPOR7_RP47R_LENGTH                      0x00000006

#define _RPOR7_RP46R0_POSITION                   0x00000000
#define _RPOR7_RP46R0_MASK                       0x00000001
#define _RPOR7_RP46R0_LENGTH                     0x00000001

#define _RPOR7_RP46R1_POSITION                   0x00000001
#define _RPOR7_RP46R1_MASK                       0x00000002
#define _RPOR7_RP46R1_LENGTH                     0x00000001

#define _RPOR7_RP46R2_POSITION                   0x00000002
#define _RPOR7_RP46R2_MASK                       0x00000004
#define _RPOR7_RP46R2_LENGTH                     0x00000001

#define _RPOR7_RP46R3_POSITION                   0x00000003
#define _RPOR7_RP46R3_MASK                       0x00000008
#define _RPOR7_RP46R3_LENGTH                     0x00000001

#define _RPOR7_RP46R4_POSITION                   0x00000004
#define _RPOR7_RP46R4_MASK                       0x00000010
#define _RPOR7_RP46R4_LENGTH                     0x00000001

#define _RPOR7_RP46R5_POSITION                   0x00000005
#define _RPOR7_RP46R5_MASK                       0x00000020
#define _RPOR7_RP46R5_LENGTH                     0x00000001

#define _RPOR7_RP47R0_POSITION                   0x00000008
#define _RPOR7_RP47R0_MASK                       0x00000100
#define _RPOR7_RP47R0_LENGTH                     0x00000001

#define _RPOR7_RP47R1_POSITION                   0x00000009
#define _RPOR7_RP47R1_MASK                       0x00000200
#define _RPOR7_RP47R1_LENGTH                     0x00000001

#define _RPOR7_RP47R2_POSITION                   0x0000000A
#define _RPOR7_RP47R2_MASK                       0x00000400
#define _RPOR7_RP47R2_LENGTH                     0x00000001

#define _RPOR7_RP47R3_POSITION                   0x0000000B
#define _RPOR7_RP47R3_MASK                       0x00000800
#define _RPOR7_RP47R3_LENGTH                     0x00000001

#define _RPOR7_RP47R4_POSITION                   0x0000000C
#define _RPOR7_RP47R4_MASK                       0x00001000
#define _RPOR7_RP47R4_LENGTH                     0x00000001

#define _RPOR7_RP47R5_POSITION                   0x0000000D
#define _RPOR7_RP47R5_MASK                       0x00002000
#define _RPOR7_RP47R5_LENGTH                     0x00000001

#define _RPOR16_RP176R_POSITION                  0x00000000
#define _RPOR16_RP176R_MASK                      0x0000003F
#define _RPOR16_RP176R_LENGTH                    0x00000006

#define _RPOR16_RP177R_POSITION                  0x00000008
#define _RPOR16_RP177R_MASK                      0x00003F00
#define _RPOR16_RP177R_LENGTH                    0x00000006

#define _RPOR16_RP176R0_POSITION                 0x00000000
#define _RPOR16_RP176R0_MASK                     0x00000001
#define _RPOR16_RP176R0_LENGTH                   0x00000001

#define _RPOR16_RP176R1_POSITION                 0x00000001
#define _RPOR16_RP176R1_MASK                     0x00000002
#define _RPOR16_RP176R1_LENGTH                   0x00000001

#define _RPOR16_RP176R2_POSITION                 0x00000002
#define _RPOR16_RP176R2_MASK                     0x00000004
#define _RPOR16_RP176R2_LENGTH                   0x00000001

#define _RPOR16_RP176R3_POSITION                 0x00000003
#define _RPOR16_RP176R3_MASK                     0x00000008
#define _RPOR16_RP176R3_LENGTH                   0x00000001

#define _RPOR16_RP176R4_POSITION                 0x00000004
#define _RPOR16_RP176R4_MASK                     0x00000010
#define _RPOR16_RP176R4_LENGTH                   0x00000001

#define _RPOR16_RP176R5_POSITION                 0x00000005
#define _RPOR16_RP176R5_MASK                     0x00000020
#define _RPOR16_RP176R5_LENGTH                   0x00000001

#define _RPOR16_RP177R0_POSITION                 0x00000008
#define _RPOR16_RP177R0_MASK                     0x00000100
#define _RPOR16_RP177R0_LENGTH                   0x00000001

#define _RPOR16_RP177R1_POSITION                 0x00000009
#define _RPOR16_RP177R1_MASK                     0x00000200
#define _RPOR16_RP177R1_LENGTH                   0x00000001

#define _RPOR16_RP177R2_POSITION                 0x0000000A
#define _RPOR16_RP177R2_MASK                     0x00000400
#define _RPOR16_RP177R2_LENGTH                   0x00000001

#define _RPOR16_RP177R3_POSITION                 0x0000000B
#define _RPOR16_RP177R3_MASK                     0x00000800
#define _RPOR16_RP177R3_LENGTH                   0x00000001

#define _RPOR16_RP177R4_POSITION                 0x0000000C
#define _RPOR16_RP177R4_MASK                     0x00001000
#define _RPOR16_RP177R4_LENGTH                   0x00000001

#define _RPOR16_RP177R5_POSITION                 0x0000000D
#define _RPOR16_RP177R5_MASK                     0x00002000
#define _RPOR16_RP177R5_LENGTH                   0x00000001

#define _RPOR17_RP178R_POSITION                  0x00000000
#define _RPOR17_RP178R_MASK                      0x0000003F
#define _RPOR17_RP178R_LENGTH                    0x00000006

#define _RPOR17_RP179R_POSITION                  0x00000008
#define _RPOR17_RP179R_MASK                      0x00003F00
#define _RPOR17_RP179R_LENGTH                    0x00000006

#define _RPOR17_RP178R0_POSITION                 0x00000000
#define _RPOR17_RP178R0_MASK                     0x00000001
#define _RPOR17_RP178R0_LENGTH                   0x00000001

#define _RPOR17_RP178R1_POSITION                 0x00000001
#define _RPOR17_RP178R1_MASK                     0x00000002
#define _RPOR17_RP178R1_LENGTH                   0x00000001

#define _RPOR17_RP178R2_POSITION                 0x00000002
#define _RPOR17_RP178R2_MASK                     0x00000004
#define _RPOR17_RP178R2_LENGTH                   0x00000001

#define _RPOR17_RP178R3_POSITION                 0x00000003
#define _RPOR17_RP178R3_MASK                     0x00000008
#define _RPOR17_RP178R3_LENGTH                   0x00000001

#define _RPOR17_RP178R4_POSITION                 0x00000004
#define _RPOR17_RP178R4_MASK                     0x00000010
#define _RPOR17_RP178R4_LENGTH                   0x00000001

#define _RPOR17_RP178R5_POSITION                 0x00000005
#define _RPOR17_RP178R5_MASK                     0x00000020
#define _RPOR17_RP178R5_LENGTH                   0x00000001

#define _RPOR17_RP179R0_POSITION                 0x00000008
#define _RPOR17_RP179R0_MASK                     0x00000100
#define _RPOR17_RP179R0_LENGTH                   0x00000001

#define _RPOR17_RP179R1_POSITION                 0x00000009
#define _RPOR17_RP179R1_MASK                     0x00000200
#define _RPOR17_RP179R1_LENGTH                   0x00000001

#define _RPOR17_RP179R2_POSITION                 0x0000000A
#define _RPOR17_RP179R2_MASK                     0x00000400
#define _RPOR17_RP179R2_LENGTH                   0x00000001

#define _RPOR17_RP179R3_POSITION                 0x0000000B
#define _RPOR17_RP179R3_MASK                     0x00000800
#define _RPOR17_RP179R3_LENGTH                   0x00000001

#define _RPOR17_RP179R4_POSITION                 0x0000000C
#define _RPOR17_RP179R4_MASK                     0x00001000
#define _RPOR17_RP179R4_LENGTH                   0x00000001

#define _RPOR17_RP179R5_POSITION                 0x0000000D
#define _RPOR17_RP179R5_MASK                     0x00002000
#define _RPOR17_RP179R5_LENGTH                   0x00000001

#define _RPOR18_RP180R_POSITION                  0x00000000
#define _RPOR18_RP180R_MASK                      0x0000003F
#define _RPOR18_RP180R_LENGTH                    0x00000006

#define _RPOR18_RP181R_POSITION                  0x00000008
#define _RPOR18_RP181R_MASK                      0x00003F00
#define _RPOR18_RP181R_LENGTH                    0x00000006

#define _RPOR18_RP180R0_POSITION                 0x00000000
#define _RPOR18_RP180R0_MASK                     0x00000001
#define _RPOR18_RP180R0_LENGTH                   0x00000001

#define _RPOR18_RP180R1_POSITION                 0x00000001
#define _RPOR18_RP180R1_MASK                     0x00000002
#define _RPOR18_RP180R1_LENGTH                   0x00000001

#define _RPOR18_RP180R2_POSITION                 0x00000002
#define _RPOR18_RP180R2_MASK                     0x00000004
#define _RPOR18_RP180R2_LENGTH                   0x00000001

#define _RPOR18_RP180R3_POSITION                 0x00000003
#define _RPOR18_RP180R3_MASK                     0x00000008
#define _RPOR18_RP180R3_LENGTH                   0x00000001

#define _RPOR18_RP180R4_POSITION                 0x00000004
#define _RPOR18_RP180R4_MASK                     0x00000010
#define _RPOR18_RP180R4_LENGTH                   0x00000001

#define _RPOR18_RP180R5_POSITION                 0x00000005
#define _RPOR18_RP180R5_MASK                     0x00000020
#define _RPOR18_RP180R5_LENGTH                   0x00000001

#define _RPOR18_RP181R0_POSITION                 0x00000008
#define _RPOR18_RP181R0_MASK                     0x00000100
#define _RPOR18_RP181R0_LENGTH                   0x00000001

#define _RPOR18_RP181R1_POSITION                 0x00000009
#define _RPOR18_RP181R1_MASK                     0x00000200
#define _RPOR18_RP181R1_LENGTH                   0x00000001

#define _RPOR18_RP181R2_POSITION                 0x0000000A
#define _RPOR18_RP181R2_MASK                     0x00000400
#define _RPOR18_RP181R2_LENGTH                   0x00000001

#define _RPOR18_RP181R3_POSITION                 0x0000000B
#define _RPOR18_RP181R3_MASK                     0x00000800
#define _RPOR18_RP181R3_LENGTH                   0x00000001

#define _RPOR18_RP181R4_POSITION                 0x0000000C
#define _RPOR18_RP181R4_MASK                     0x00001000
#define _RPOR18_RP181R4_LENGTH                   0x00000001

#define _RPOR18_RP181R5_POSITION                 0x0000000D
#define _RPOR18_RP181R5_MASK                     0x00002000
#define _RPOR18_RP181R5_LENGTH                   0x00000001

#define _RPINR0_INT1R_POSITION                   0x00000008
#define _RPINR0_INT1R_MASK                       0x0000FF00
#define _RPINR0_INT1R_LENGTH                     0x00000008

#define _RPINR0_INT1R0_POSITION                  0x00000008
#define _RPINR0_INT1R0_MASK                      0x00000100
#define _RPINR0_INT1R0_LENGTH                    0x00000001

#define _RPINR0_INT1R1_POSITION                  0x00000009
#define _RPINR0_INT1R1_MASK                      0x00000200
#define _RPINR0_INT1R1_LENGTH                    0x00000001

#define _RPINR0_INT1R2_POSITION                  0x0000000A
#define _RPINR0_INT1R2_MASK                      0x00000400
#define _RPINR0_INT1R2_LENGTH                    0x00000001

#define _RPINR0_INT1R3_POSITION                  0x0000000B
#define _RPINR0_INT1R3_MASK                      0x00000800
#define _RPINR0_INT1R3_LENGTH                    0x00000001

#define _RPINR0_INT1R4_POSITION                  0x0000000C
#define _RPINR0_INT1R4_MASK                      0x00001000
#define _RPINR0_INT1R4_LENGTH                    0x00000001

#define _RPINR0_INT1R5_POSITION                  0x0000000D
#define _RPINR0_INT1R5_MASK                      0x00002000
#define _RPINR0_INT1R5_LENGTH                    0x00000001

#define _RPINR0_INT1R6_POSITION                  0x0000000E
#define _RPINR0_INT1R6_MASK                      0x00004000
#define _RPINR0_INT1R6_LENGTH                    0x00000001

#define _RPINR0_INT1R7_POSITION                  0x0000000F
#define _RPINR0_INT1R7_MASK                      0x00008000
#define _RPINR0_INT1R7_LENGTH                    0x00000001

#define _RPINR1_INT2R_POSITION                   0x00000000
#define _RPINR1_INT2R_MASK                       0x000000FF
#define _RPINR1_INT2R_LENGTH                     0x00000008

#define _RPINR1_INT2R0_POSITION                  0x00000000
#define _RPINR1_INT2R0_MASK                      0x00000001
#define _RPINR1_INT2R0_LENGTH                    0x00000001

#define _RPINR1_INT2R1_POSITION                  0x00000001
#define _RPINR1_INT2R1_MASK                      0x00000002
#define _RPINR1_INT2R1_LENGTH                    0x00000001

#define _RPINR1_INT2R2_POSITION                  0x00000002
#define _RPINR1_INT2R2_MASK                      0x00000004
#define _RPINR1_INT2R2_LENGTH                    0x00000001

#define _RPINR1_INT2R3_POSITION                  0x00000003
#define _RPINR1_INT2R3_MASK                      0x00000008
#define _RPINR1_INT2R3_LENGTH                    0x00000001

#define _RPINR1_INT2R4_POSITION                  0x00000004
#define _RPINR1_INT2R4_MASK                      0x00000010
#define _RPINR1_INT2R4_LENGTH                    0x00000001

#define _RPINR1_INT2R5_POSITION                  0x00000005
#define _RPINR1_INT2R5_MASK                      0x00000020
#define _RPINR1_INT2R5_LENGTH                    0x00000001

#define _RPINR1_INT2R6_POSITION                  0x00000006
#define _RPINR1_INT2R6_MASK                      0x00000040
#define _RPINR1_INT2R6_LENGTH                    0x00000001

#define _RPINR1_INT2R7_POSITION                  0x00000007
#define _RPINR1_INT2R7_MASK                      0x00000080
#define _RPINR1_INT2R7_LENGTH                    0x00000001

#define _RPINR2_INT4RR_POSITION                  0x00000000
#define _RPINR2_INT4RR_MASK                      0x000000FF
#define _RPINR2_INT4RR_LENGTH                    0x00000008

#define _RPINR2_T1CKRR_POSITION                  0x00000008
#define _RPINR2_T1CKRR_MASK                      0x0000FF00
#define _RPINR2_T1CKRR_LENGTH                    0x00000008

#define _RPINR2_INT4RR0_POSITION                 0x00000000
#define _RPINR2_INT4RR0_MASK                     0x00000001
#define _RPINR2_INT4RR0_LENGTH                   0x00000001

#define _RPINR2_INT4RR1_POSITION                 0x00000001
#define _RPINR2_INT4RR1_MASK                     0x00000002
#define _RPINR2_INT4RR1_LENGTH                   0x00000001

#define _RPINR2_INT4RR2_POSITION                 0x00000002
#define _RPINR2_INT4RR2_MASK                     0x00000004
#define _RPINR2_INT4RR2_LENGTH                   0x00000001

#define _RPINR2_INT4RR3_POSITION                 0x00000003
#define _RPINR2_INT4RR3_MASK                     0x00000008
#define _RPINR2_INT4RR3_LENGTH                   0x00000001

#define _RPINR2_INT4RR4_POSITION                 0x00000004
#define _RPINR2_INT4RR4_MASK                     0x00000010
#define _RPINR2_INT4RR4_LENGTH                   0x00000001

#define _RPINR2_INT4RR5_POSITION                 0x00000005
#define _RPINR2_INT4RR5_MASK                     0x00000020
#define _RPINR2_INT4RR5_LENGTH                   0x00000001

#define _RPINR2_INT4RR6_POSITION                 0x00000006
#define _RPINR2_INT4RR6_MASK                     0x00000040
#define _RPINR2_INT4RR6_LENGTH                   0x00000001

#define _RPINR2_INT4RR7_POSITION                 0x00000007
#define _RPINR2_INT4RR7_MASK                     0x00000080
#define _RPINR2_INT4RR7_LENGTH                   0x00000001

#define _RPINR2_T1CKRR0_POSITION                 0x00000008
#define _RPINR2_T1CKRR0_MASK                     0x00000100
#define _RPINR2_T1CKRR0_LENGTH                   0x00000001

#define _RPINR2_T1CKRR1_POSITION                 0x00000009
#define _RPINR2_T1CKRR1_MASK                     0x00000200
#define _RPINR2_T1CKRR1_LENGTH                   0x00000001

#define _RPINR2_T1CKRR2_POSITION                 0x0000000A
#define _RPINR2_T1CKRR2_MASK                     0x00000400
#define _RPINR2_T1CKRR2_LENGTH                   0x00000001

#define _RPINR2_T1CKRR3_POSITION                 0x0000000B
#define _RPINR2_T1CKRR3_MASK                     0x00000800
#define _RPINR2_T1CKRR3_LENGTH                   0x00000001

#define _RPINR2_T1CKRR4_POSITION                 0x0000000C
#define _RPINR2_T1CKRR4_MASK                     0x00001000
#define _RPINR2_T1CKRR4_LENGTH                   0x00000001

#define _RPINR2_T1CKRR5_POSITION                 0x0000000D
#define _RPINR2_T1CKRR5_MASK                     0x00002000
#define _RPINR2_T1CKRR5_LENGTH                   0x00000001

#define _RPINR2_T1CKRR6_POSITION                 0x0000000E
#define _RPINR2_T1CKRR6_MASK                     0x00004000
#define _RPINR2_T1CKRR6_LENGTH                   0x00000001

#define _RPINR2_T1CKRR7_POSITION                 0x0000000F
#define _RPINR2_T1CKRR7_MASK                     0x00008000
#define _RPINR2_T1CKRR7_LENGTH                   0x00000001

#define _RPINR3_T2CKR_POSITION                   0x00000000
#define _RPINR3_T2CKR_MASK                       0x000000FF
#define _RPINR3_T2CKR_LENGTH                     0x00000008

#define _RPINR3_T3CKR_POSITION                   0x00000008
#define _RPINR3_T3CKR_MASK                       0x0000FF00
#define _RPINR3_T3CKR_LENGTH                     0x00000008

#define _RPINR3_T2CKR0_POSITION                  0x00000000
#define _RPINR3_T2CKR0_MASK                      0x00000001
#define _RPINR3_T2CKR0_LENGTH                    0x00000001

#define _RPINR3_T2CKR1_POSITION                  0x00000001
#define _RPINR3_T2CKR1_MASK                      0x00000002
#define _RPINR3_T2CKR1_LENGTH                    0x00000001

#define _RPINR3_T2CKR2_POSITION                  0x00000002
#define _RPINR3_T2CKR2_MASK                      0x00000004
#define _RPINR3_T2CKR2_LENGTH                    0x00000001

#define _RPINR3_T2CKR3_POSITION                  0x00000003
#define _RPINR3_T2CKR3_MASK                      0x00000008
#define _RPINR3_T2CKR3_LENGTH                    0x00000001

#define _RPINR3_T2CKR4_POSITION                  0x00000004
#define _RPINR3_T2CKR4_MASK                      0x00000010
#define _RPINR3_T2CKR4_LENGTH                    0x00000001

#define _RPINR3_T2CKR5_POSITION                  0x00000005
#define _RPINR3_T2CKR5_MASK                      0x00000020
#define _RPINR3_T2CKR5_LENGTH                    0x00000001

#define _RPINR3_T2CKR6_POSITION                  0x00000006
#define _RPINR3_T2CKR6_MASK                      0x00000040
#define _RPINR3_T2CKR6_LENGTH                    0x00000001

#define _RPINR3_T2CKR7_POSITION                  0x00000007
#define _RPINR3_T2CKR7_MASK                      0x00000080
#define _RPINR3_T2CKR7_LENGTH                    0x00000001

#define _RPINR3_T3CKR0_POSITION                  0x00000008
#define _RPINR3_T3CKR0_MASK                      0x00000100
#define _RPINR3_T3CKR0_LENGTH                    0x00000001

#define _RPINR3_T3CKR1_POSITION                  0x00000009
#define _RPINR3_T3CKR1_MASK                      0x00000200
#define _RPINR3_T3CKR1_LENGTH                    0x00000001

#define _RPINR3_T3CKR2_POSITION                  0x0000000A
#define _RPINR3_T3CKR2_MASK                      0x00000400
#define _RPINR3_T3CKR2_LENGTH                    0x00000001

#define _RPINR3_T3CKR3_POSITION                  0x0000000B
#define _RPINR3_T3CKR3_MASK                      0x00000800
#define _RPINR3_T3CKR3_LENGTH                    0x00000001

#define _RPINR3_T3CKR4_POSITION                  0x0000000C
#define _RPINR3_T3CKR4_MASK                      0x00001000
#define _RPINR3_T3CKR4_LENGTH                    0x00000001

#define _RPINR3_T3CKR5_POSITION                  0x0000000D
#define _RPINR3_T3CKR5_MASK                      0x00002000
#define _RPINR3_T3CKR5_LENGTH                    0x00000001

#define _RPINR3_T3CKR6_POSITION                  0x0000000E
#define _RPINR3_T3CKR6_MASK                      0x00004000
#define _RPINR3_T3CKR6_LENGTH                    0x00000001

#define _RPINR3_T3CKR7_POSITION                  0x0000000F
#define _RPINR3_T3CKR7_MASK                      0x00008000
#define _RPINR3_T3CKR7_LENGTH                    0x00000001

#define _RPINR7_IC1R_POSITION                    0x00000000
#define _RPINR7_IC1R_MASK                        0x000000FF
#define _RPINR7_IC1R_LENGTH                      0x00000008

#define _RPINR7_IC1R0_POSITION                   0x00000000
#define _RPINR7_IC1R0_MASK                       0x00000001
#define _RPINR7_IC1R0_LENGTH                     0x00000001

#define _RPINR7_IC1R1_POSITION                   0x00000001
#define _RPINR7_IC1R1_MASK                       0x00000002
#define _RPINR7_IC1R1_LENGTH                     0x00000001

#define _RPINR7_IC1R2_POSITION                   0x00000002
#define _RPINR7_IC1R2_MASK                       0x00000004
#define _RPINR7_IC1R2_LENGTH                     0x00000001

#define _RPINR7_IC1R3_POSITION                   0x00000003
#define _RPINR7_IC1R3_MASK                       0x00000008
#define _RPINR7_IC1R3_LENGTH                     0x00000001

#define _RPINR7_IC1R4_POSITION                   0x00000004
#define _RPINR7_IC1R4_MASK                       0x00000010
#define _RPINR7_IC1R4_LENGTH                     0x00000001

#define _RPINR7_IC1R5_POSITION                   0x00000005
#define _RPINR7_IC1R5_MASK                       0x00000020
#define _RPINR7_IC1R5_LENGTH                     0x00000001

#define _RPINR7_IC1R6_POSITION                   0x00000006
#define _RPINR7_IC1R6_MASK                       0x00000040
#define _RPINR7_IC1R6_LENGTH                     0x00000001

#define _RPINR7_IC1R7_POSITION                   0x00000007
#define _RPINR7_IC1R7_MASK                       0x00000080
#define _RPINR7_IC1R7_LENGTH                     0x00000001

#define _RPINR12_FLT1R_POSITION                  0x00000000
#define _RPINR12_FLT1R_MASK                      0x000000FF
#define _RPINR12_FLT1R_LENGTH                    0x00000008

#define _RPINR12_FLT2R_POSITION                  0x00000008
#define _RPINR12_FLT2R_MASK                      0x0000FF00
#define _RPINR12_FLT2R_LENGTH                    0x00000008

#define _RPINR12_FLT1R0_POSITION                 0x00000000
#define _RPINR12_FLT1R0_MASK                     0x00000001
#define _RPINR12_FLT1R0_LENGTH                   0x00000001

#define _RPINR12_FLT1R1_POSITION                 0x00000001
#define _RPINR12_FLT1R1_MASK                     0x00000002
#define _RPINR12_FLT1R1_LENGTH                   0x00000001

#define _RPINR12_FLT1R2_POSITION                 0x00000002
#define _RPINR12_FLT1R2_MASK                     0x00000004
#define _RPINR12_FLT1R2_LENGTH                   0x00000001

#define _RPINR12_FLT1R3_POSITION                 0x00000003
#define _RPINR12_FLT1R3_MASK                     0x00000008
#define _RPINR12_FLT1R3_LENGTH                   0x00000001

#define _RPINR12_FLT1R4_POSITION                 0x00000004
#define _RPINR12_FLT1R4_MASK                     0x00000010
#define _RPINR12_FLT1R4_LENGTH                   0x00000001

#define _RPINR12_FLT1R5_POSITION                 0x00000005
#define _RPINR12_FLT1R5_MASK                     0x00000020
#define _RPINR12_FLT1R5_LENGTH                   0x00000001

#define _RPINR12_FLT1R6_POSITION                 0x00000006
#define _RPINR12_FLT1R6_MASK                     0x00000040
#define _RPINR12_FLT1R6_LENGTH                   0x00000001

#define _RPINR12_FLT1R7_POSITION                 0x00000007
#define _RPINR12_FLT1R7_MASK                     0x00000080
#define _RPINR12_FLT1R7_LENGTH                   0x00000001

#define _RPINR12_FLT2R0_POSITION                 0x00000008
#define _RPINR12_FLT2R0_MASK                     0x00000100
#define _RPINR12_FLT2R0_LENGTH                   0x00000001

#define _RPINR12_FLT2R1_POSITION                 0x00000009
#define _RPINR12_FLT2R1_MASK                     0x00000200
#define _RPINR12_FLT2R1_LENGTH                   0x00000001

#define _RPINR12_FLT2R2_POSITION                 0x0000000A
#define _RPINR12_FLT2R2_MASK                     0x00000400
#define _RPINR12_FLT2R2_LENGTH                   0x00000001

#define _RPINR12_FLT2R3_POSITION                 0x0000000B
#define _RPINR12_FLT2R3_MASK                     0x00000800
#define _RPINR12_FLT2R3_LENGTH                   0x00000001

#define _RPINR12_FLT2R4_POSITION                 0x0000000C
#define _RPINR12_FLT2R4_MASK                     0x00001000
#define _RPINR12_FLT2R4_LENGTH                   0x00000001

#define _RPINR12_FLT2R5_POSITION                 0x0000000D
#define _RPINR12_FLT2R5_MASK                     0x00002000
#define _RPINR12_FLT2R5_LENGTH                   0x00000001

#define _RPINR12_FLT2R6_POSITION                 0x0000000E
#define _RPINR12_FLT2R6_MASK                     0x00004000
#define _RPINR12_FLT2R6_LENGTH                   0x00000001

#define _RPINR12_FLT2R7_POSITION                 0x0000000F
#define _RPINR12_FLT2R7_MASK                     0x00008000
#define _RPINR12_FLT2R7_LENGTH                   0x00000001

#define _RPINR13_FLT3R_POSITION                  0x00000000
#define _RPINR13_FLT3R_MASK                      0x000000FF
#define _RPINR13_FLT3R_LENGTH                    0x00000008

#define _RPINR13_FLT4R_POSITION                  0x00000008
#define _RPINR13_FLT4R_MASK                      0x0000FF00
#define _RPINR13_FLT4R_LENGTH                    0x00000008

#define _RPINR13_FLT3R0_POSITION                 0x00000000
#define _RPINR13_FLT3R0_MASK                     0x00000001
#define _RPINR13_FLT3R0_LENGTH                   0x00000001

#define _RPINR13_FLT3R1_POSITION                 0x00000001
#define _RPINR13_FLT3R1_MASK                     0x00000002
#define _RPINR13_FLT3R1_LENGTH                   0x00000001

#define _RPINR13_FLT3R2_POSITION                 0x00000002
#define _RPINR13_FLT3R2_MASK                     0x00000004
#define _RPINR13_FLT3R2_LENGTH                   0x00000001

#define _RPINR13_FLT3R3_POSITION                 0x00000003
#define _RPINR13_FLT3R3_MASK                     0x00000008
#define _RPINR13_FLT3R3_LENGTH                   0x00000001

#define _RPINR13_FLT3R4_POSITION                 0x00000004
#define _RPINR13_FLT3R4_MASK                     0x00000010
#define _RPINR13_FLT3R4_LENGTH                   0x00000001

#define _RPINR13_FLT3R5_POSITION                 0x00000005
#define _RPINR13_FLT3R5_MASK                     0x00000020
#define _RPINR13_FLT3R5_LENGTH                   0x00000001

#define _RPINR13_FLT3R6_POSITION                 0x00000006
#define _RPINR13_FLT3R6_MASK                     0x00000040
#define _RPINR13_FLT3R6_LENGTH                   0x00000001

#define _RPINR13_FLT3R7_POSITION                 0x00000007
#define _RPINR13_FLT3R7_MASK                     0x00000080
#define _RPINR13_FLT3R7_LENGTH                   0x00000001

#define _RPINR13_FLT4R0_POSITION                 0x00000008
#define _RPINR13_FLT4R0_MASK                     0x00000100
#define _RPINR13_FLT4R0_LENGTH                   0x00000001

#define _RPINR13_FLT4R1_POSITION                 0x00000009
#define _RPINR13_FLT4R1_MASK                     0x00000200
#define _RPINR13_FLT4R1_LENGTH                   0x00000001

#define _RPINR13_FLT4R2_POSITION                 0x0000000A
#define _RPINR13_FLT4R2_MASK                     0x00000400
#define _RPINR13_FLT4R2_LENGTH                   0x00000001

#define _RPINR13_FLT4R3_POSITION                 0x0000000B
#define _RPINR13_FLT4R3_MASK                     0x00000800
#define _RPINR13_FLT4R3_LENGTH                   0x00000001

#define _RPINR13_FLT4R4_POSITION                 0x0000000C
#define _RPINR13_FLT4R4_MASK                     0x00001000
#define _RPINR13_FLT4R4_LENGTH                   0x00000001

#define _RPINR13_FLT4R5_POSITION                 0x0000000D
#define _RPINR13_FLT4R5_MASK                     0x00002000
#define _RPINR13_FLT4R5_LENGTH                   0x00000001

#define _RPINR13_FLT4R6_POSITION                 0x0000000E
#define _RPINR13_FLT4R6_MASK                     0x00004000
#define _RPINR13_FLT4R6_LENGTH                   0x00000001

#define _RPINR13_FLT4R7_POSITION                 0x0000000F
#define _RPINR13_FLT4R7_MASK                     0x00008000
#define _RPINR13_FLT4R7_LENGTH                   0x00000001

#define _RPINR18_U1RXR_POSITION                  0x00000000
#define _RPINR18_U1RXR_MASK                      0x000000FF
#define _RPINR18_U1RXR_LENGTH                    0x00000008

#define _RPINR18_U1CTSR_POSITION                 0x00000008
#define _RPINR18_U1CTSR_MASK                     0x0000FF00
#define _RPINR18_U1CTSR_LENGTH                   0x00000008

#define _RPINR18_U1RXR0_POSITION                 0x00000000
#define _RPINR18_U1RXR0_MASK                     0x00000001
#define _RPINR18_U1RXR0_LENGTH                   0x00000001

#define _RPINR18_U1RXR1_POSITION                 0x00000001
#define _RPINR18_U1RXR1_MASK                     0x00000002
#define _RPINR18_U1RXR1_LENGTH                   0x00000001

#define _RPINR18_U1RXR2_POSITION                 0x00000002
#define _RPINR18_U1RXR2_MASK                     0x00000004
#define _RPINR18_U1RXR2_LENGTH                   0x00000001

#define _RPINR18_U1RXR3_POSITION                 0x00000003
#define _RPINR18_U1RXR3_MASK                     0x00000008
#define _RPINR18_U1RXR3_LENGTH                   0x00000001

#define _RPINR18_U1RXR4_POSITION                 0x00000004
#define _RPINR18_U1RXR4_MASK                     0x00000010
#define _RPINR18_U1RXR4_LENGTH                   0x00000001

#define _RPINR18_U1RXR5_POSITION                 0x00000005
#define _RPINR18_U1RXR5_MASK                     0x00000020
#define _RPINR18_U1RXR5_LENGTH                   0x00000001

#define _RPINR18_U1RXR6_POSITION                 0x00000006
#define _RPINR18_U1RXR6_MASK                     0x00000040
#define _RPINR18_U1RXR6_LENGTH                   0x00000001

#define _RPINR18_U1RXR7_POSITION                 0x00000007
#define _RPINR18_U1RXR7_MASK                     0x00000080
#define _RPINR18_U1RXR7_LENGTH                   0x00000001

#define _RPINR18_U1CTSR0_POSITION                0x00000008
#define _RPINR18_U1CTSR0_MASK                    0x00000100
#define _RPINR18_U1CTSR0_LENGTH                  0x00000001

#define _RPINR18_U1CTSR1_POSITION                0x00000009
#define _RPINR18_U1CTSR1_MASK                    0x00000200
#define _RPINR18_U1CTSR1_LENGTH                  0x00000001

#define _RPINR18_U1CTSR2_POSITION                0x0000000A
#define _RPINR18_U1CTSR2_MASK                    0x00000400
#define _RPINR18_U1CTSR2_LENGTH                  0x00000001

#define _RPINR18_U1CTSR3_POSITION                0x0000000B
#define _RPINR18_U1CTSR3_MASK                    0x00000800
#define _RPINR18_U1CTSR3_LENGTH                  0x00000001

#define _RPINR18_U1CTSR4_POSITION                0x0000000C
#define _RPINR18_U1CTSR4_MASK                    0x00001000
#define _RPINR18_U1CTSR4_LENGTH                  0x00000001

#define _RPINR18_U1CTSR5_POSITION                0x0000000D
#define _RPINR18_U1CTSR5_MASK                    0x00002000
#define _RPINR18_U1CTSR5_LENGTH                  0x00000001

#define _RPINR18_U1CTSR6_POSITION                0x0000000E
#define _RPINR18_U1CTSR6_MASK                    0x00004000
#define _RPINR18_U1CTSR6_LENGTH                  0x00000001

#define _RPINR18_U1CTSR7_POSITION                0x0000000F
#define _RPINR18_U1CTSR7_MASK                    0x00008000
#define _RPINR18_U1CTSR7_LENGTH                  0x00000001

#define _RPINR20_SDI1R_POSITION                  0x00000000
#define _RPINR20_SDI1R_MASK                      0x000000FF
#define _RPINR20_SDI1R_LENGTH                    0x00000008

#define _RPINR20_SCK1INR_POSITION                0x00000008
#define _RPINR20_SCK1INR_MASK                    0x0000FF00
#define _RPINR20_SCK1INR_LENGTH                  0x00000008

#define _RPINR20_SDI1R0_POSITION                 0x00000000
#define _RPINR20_SDI1R0_MASK                     0x00000001
#define _RPINR20_SDI1R0_LENGTH                   0x00000001

#define _RPINR20_SDI1R1_POSITION                 0x00000001
#define _RPINR20_SDI1R1_MASK                     0x00000002
#define _RPINR20_SDI1R1_LENGTH                   0x00000001

#define _RPINR20_SDI1R2_POSITION                 0x00000002
#define _RPINR20_SDI1R2_MASK                     0x00000004
#define _RPINR20_SDI1R2_LENGTH                   0x00000001

#define _RPINR20_SDI1R3_POSITION                 0x00000003
#define _RPINR20_SDI1R3_MASK                     0x00000008
#define _RPINR20_SDI1R3_LENGTH                   0x00000001

#define _RPINR20_SDI1R4_POSITION                 0x00000004
#define _RPINR20_SDI1R4_MASK                     0x00000010
#define _RPINR20_SDI1R4_LENGTH                   0x00000001

#define _RPINR20_SDI1R5_POSITION                 0x00000005
#define _RPINR20_SDI1R5_MASK                     0x00000020
#define _RPINR20_SDI1R5_LENGTH                   0x00000001

#define _RPINR20_SDI1R6_POSITION                 0x00000006
#define _RPINR20_SDI1R6_MASK                     0x00000040
#define _RPINR20_SDI1R6_LENGTH                   0x00000001

#define _RPINR20_SDI1R7_POSITION                 0x00000007
#define _RPINR20_SDI1R7_MASK                     0x00000080
#define _RPINR20_SDI1R7_LENGTH                   0x00000001

#define _RPINR20_SCK1INR0_POSITION               0x00000008
#define _RPINR20_SCK1INR0_MASK                   0x00000100
#define _RPINR20_SCK1INR0_LENGTH                 0x00000001

#define _RPINR20_SCK1INR1_POSITION               0x00000009
#define _RPINR20_SCK1INR1_MASK                   0x00000200
#define _RPINR20_SCK1INR1_LENGTH                 0x00000001

#define _RPINR20_SCK1INR2_POSITION               0x0000000A
#define _RPINR20_SCK1INR2_MASK                   0x00000400
#define _RPINR20_SCK1INR2_LENGTH                 0x00000001

#define _RPINR20_SCK1INR3_POSITION               0x0000000B
#define _RPINR20_SCK1INR3_MASK                   0x00000800
#define _RPINR20_SCK1INR3_LENGTH                 0x00000001

#define _RPINR20_SCK1INR4_POSITION               0x0000000C
#define _RPINR20_SCK1INR4_MASK                   0x00001000
#define _RPINR20_SCK1INR4_LENGTH                 0x00000001

#define _RPINR20_SCK1INR5_POSITION               0x0000000D
#define _RPINR20_SCK1INR5_MASK                   0x00002000
#define _RPINR20_SCK1INR5_LENGTH                 0x00000001

#define _RPINR20_SCK1INR6_POSITION               0x0000000E
#define _RPINR20_SCK1INR6_MASK                   0x00004000
#define _RPINR20_SCK1INR6_LENGTH                 0x00000001

#define _RPINR20_SCK1INR7_POSITION               0x0000000F
#define _RPINR20_SCK1INR7_MASK                   0x00008000
#define _RPINR20_SCK1INR7_LENGTH                 0x00000001

#define _RPINR21_SS1R_POSITION                   0x00000000
#define _RPINR21_SS1R_MASK                       0x000000FF
#define _RPINR21_SS1R_LENGTH                     0x00000008

#define _RPINR21_SS1R0_POSITION                  0x00000000
#define _RPINR21_SS1R0_MASK                      0x00000001
#define _RPINR21_SS1R0_LENGTH                    0x00000001

#define _RPINR21_SS1R1_POSITION                  0x00000001
#define _RPINR21_SS1R1_MASK                      0x00000002
#define _RPINR21_SS1R1_LENGTH                    0x00000001

#define _RPINR21_SS1R2_POSITION                  0x00000002
#define _RPINR21_SS1R2_MASK                      0x00000004
#define _RPINR21_SS1R2_LENGTH                    0x00000001

#define _RPINR21_SS1R3_POSITION                  0x00000003
#define _RPINR21_SS1R3_MASK                      0x00000008
#define _RPINR21_SS1R3_LENGTH                    0x00000001

#define _RPINR21_SS1R4_POSITION                  0x00000004
#define _RPINR21_SS1R4_MASK                      0x00000010
#define _RPINR21_SS1R4_LENGTH                    0x00000001

#define _RPINR21_SS1R5_POSITION                  0x00000005
#define _RPINR21_SS1R5_MASK                      0x00000020
#define _RPINR21_SS1R5_LENGTH                    0x00000001

#define _RPINR21_SS1R6_POSITION                  0x00000006
#define _RPINR21_SS1R6_MASK                      0x00000040
#define _RPINR21_SS1R6_LENGTH                    0x00000001

#define _RPINR21_SS1R7_POSITION                  0x00000007
#define _RPINR21_SS1R7_MASK                      0x00000080
#define _RPINR21_SS1R7_LENGTH                    0x00000001

#define _RPINR37_SYCI1R_POSITION                 0x00000008
#define _RPINR37_SYCI1R_MASK                     0x0000FF00
#define _RPINR37_SYCI1R_LENGTH                   0x00000008

#define _RPINR37_SYCI1R0_POSITION                0x00000008
#define _RPINR37_SYCI1R0_MASK                    0x00000100
#define _RPINR37_SYCI1R0_LENGTH                  0x00000001

#define _RPINR37_SYCI1R1_POSITION                0x00000009
#define _RPINR37_SYCI1R1_MASK                    0x00000200
#define _RPINR37_SYCI1R1_LENGTH                  0x00000001

#define _RPINR37_SYCI1R2_POSITION                0x0000000A
#define _RPINR37_SYCI1R2_MASK                    0x00000400
#define _RPINR37_SYCI1R2_LENGTH                  0x00000001

#define _RPINR37_SYCI1R3_POSITION                0x0000000B
#define _RPINR37_SYCI1R3_MASK                    0x00000800
#define _RPINR37_SYCI1R3_LENGTH                  0x00000001

#define _RPINR37_SYCI1R4_POSITION                0x0000000C
#define _RPINR37_SYCI1R4_MASK                    0x00001000
#define _RPINR37_SYCI1R4_LENGTH                  0x00000001

#define _RPINR37_SYCI1R5_POSITION                0x0000000D
#define _RPINR37_SYCI1R5_MASK                    0x00002000
#define _RPINR37_SYCI1R5_LENGTH                  0x00000001

#define _RPINR37_SYCI1R6_POSITION                0x0000000E
#define _RPINR37_SYCI1R6_MASK                    0x00004000
#define _RPINR37_SYCI1R6_LENGTH                  0x00000001

#define _RPINR37_SYCI1R7_POSITION                0x0000000F
#define _RPINR37_SYCI1R7_MASK                    0x00008000
#define _RPINR37_SYCI1R7_LENGTH                  0x00000001

#define _RPINR38_SYCI2R_POSITION                 0x00000000
#define _RPINR38_SYCI2R_MASK                     0x000000FF
#define _RPINR38_SYCI2R_LENGTH                   0x00000008

#define _RPINR38_SYCI2R0_POSITION                0x00000000
#define _RPINR38_SYCI2R0_MASK                    0x00000001
#define _RPINR38_SYCI2R0_LENGTH                  0x00000001

#define _RPINR38_SYCI2R1_POSITION                0x00000001
#define _RPINR38_SYCI2R1_MASK                    0x00000002
#define _RPINR38_SYCI2R1_LENGTH                  0x00000001

#define _RPINR38_SYCI2R2_POSITION                0x00000002
#define _RPINR38_SYCI2R2_MASK                    0x00000004
#define _RPINR38_SYCI2R2_LENGTH                  0x00000001

#define _RPINR38_SYCI2R3_POSITION                0x00000003
#define _RPINR38_SYCI2R3_MASK                    0x00000008
#define _RPINR38_SYCI2R3_LENGTH                  0x00000001

#define _RPINR38_SYCI2R4_POSITION                0x00000004
#define _RPINR38_SYCI2R4_MASK                    0x00000010
#define _RPINR38_SYCI2R4_LENGTH                  0x00000001

#define _RPINR38_SYCI2R5_POSITION                0x00000005
#define _RPINR38_SYCI2R5_MASK                    0x00000020
#define _RPINR38_SYCI2R5_LENGTH                  0x00000001

#define _RPINR38_SYCI2R6_POSITION                0x00000006
#define _RPINR38_SYCI2R6_MASK                    0x00000040
#define _RPINR38_SYCI2R6_LENGTH                  0x00000001

#define _RPINR38_SYCI2R7_POSITION                0x00000007
#define _RPINR38_SYCI2R7_MASK                    0x00000080
#define _RPINR38_SYCI2R7_LENGTH                  0x00000001

#define _RPINR42_FLT5R_POSITION                  0x00000000
#define _RPINR42_FLT5R_MASK                      0x000000FF
#define _RPINR42_FLT5R_LENGTH                    0x00000008

#define _RPINR42_FLT6R_POSITION                  0x00000008
#define _RPINR42_FLT6R_MASK                      0x0000FF00
#define _RPINR42_FLT6R_LENGTH                    0x00000008

#define _RPINR42_FLT5R0_POSITION                 0x00000000
#define _RPINR42_FLT5R0_MASK                     0x00000001
#define _RPINR42_FLT5R0_LENGTH                   0x00000001

#define _RPINR42_FLT5R1_POSITION                 0x00000001
#define _RPINR42_FLT5R1_MASK                     0x00000002
#define _RPINR42_FLT5R1_LENGTH                   0x00000001

#define _RPINR42_FLT5R2_POSITION                 0x00000002
#define _RPINR42_FLT5R2_MASK                     0x00000004
#define _RPINR42_FLT5R2_LENGTH                   0x00000001

#define _RPINR42_FLT5R3_POSITION                 0x00000003
#define _RPINR42_FLT5R3_MASK                     0x00000008
#define _RPINR42_FLT5R3_LENGTH                   0x00000001

#define _RPINR42_FLT5R4_POSITION                 0x00000004
#define _RPINR42_FLT5R4_MASK                     0x00000010
#define _RPINR42_FLT5R4_LENGTH                   0x00000001

#define _RPINR42_FLT5R5_POSITION                 0x00000005
#define _RPINR42_FLT5R5_MASK                     0x00000020
#define _RPINR42_FLT5R5_LENGTH                   0x00000001

#define _RPINR42_FLT5R6_POSITION                 0x00000006
#define _RPINR42_FLT5R6_MASK                     0x00000040
#define _RPINR42_FLT5R6_LENGTH                   0x00000001

#define _RPINR42_FLT5R7_POSITION                 0x00000007
#define _RPINR42_FLT5R7_MASK                     0x00000080
#define _RPINR42_FLT5R7_LENGTH                   0x00000001

#define _RPINR42_FLT6R0_POSITION                 0x00000008
#define _RPINR42_FLT6R0_MASK                     0x00000100
#define _RPINR42_FLT6R0_LENGTH                   0x00000001

#define _RPINR42_FLT6R1_POSITION                 0x00000009
#define _RPINR42_FLT6R1_MASK                     0x00000200
#define _RPINR42_FLT6R1_LENGTH                   0x00000001

#define _RPINR42_FLT6R2_POSITION                 0x0000000A
#define _RPINR42_FLT6R2_MASK                     0x00000400
#define _RPINR42_FLT6R2_LENGTH                   0x00000001

#define _RPINR42_FLT6R3_POSITION                 0x0000000B
#define _RPINR42_FLT6R3_MASK                     0x00000800
#define _RPINR42_FLT6R3_LENGTH                   0x00000001

#define _RPINR42_FLT6R4_POSITION                 0x0000000C
#define _RPINR42_FLT6R4_MASK                     0x00001000
#define _RPINR42_FLT6R4_LENGTH                   0x00000001

#define _RPINR42_FLT6R5_POSITION                 0x0000000D
#define _RPINR42_FLT6R5_MASK                     0x00002000
#define _RPINR42_FLT6R5_LENGTH                   0x00000001

#define _RPINR42_FLT6R6_POSITION                 0x0000000E
#define _RPINR42_FLT6R6_MASK                     0x00004000
#define _RPINR42_FLT6R6_LENGTH                   0x00000001

#define _RPINR42_FLT6R7_POSITION                 0x0000000F
#define _RPINR42_FLT6R7_MASK                     0x00008000
#define _RPINR42_FLT6R7_LENGTH                   0x00000001

#define _RPINR43_FLT7R_POSITION                  0x00000000
#define _RPINR43_FLT7R_MASK                      0x000000FF
#define _RPINR43_FLT7R_LENGTH                    0x00000008

#define _RPINR43_FLT8R_POSITION                  0x00000008
#define _RPINR43_FLT8R_MASK                      0x0000FF00
#define _RPINR43_FLT8R_LENGTH                    0x00000008

#define _RPINR43_FLT7R0_POSITION                 0x00000000
#define _RPINR43_FLT7R0_MASK                     0x00000001
#define _RPINR43_FLT7R0_LENGTH                   0x00000001

#define _RPINR43_FLT7R1_POSITION                 0x00000001
#define _RPINR43_FLT7R1_MASK                     0x00000002
#define _RPINR43_FLT7R1_LENGTH                   0x00000001

#define _RPINR43_FLT7R2_POSITION                 0x00000002
#define _RPINR43_FLT7R2_MASK                     0x00000004
#define _RPINR43_FLT7R2_LENGTH                   0x00000001

#define _RPINR43_FLT7R3_POSITION                 0x00000003
#define _RPINR43_FLT7R3_MASK                     0x00000008
#define _RPINR43_FLT7R3_LENGTH                   0x00000001

#define _RPINR43_FLT7R4_POSITION                 0x00000004
#define _RPINR43_FLT7R4_MASK                     0x00000010
#define _RPINR43_FLT7R4_LENGTH                   0x00000001

#define _RPINR43_FLT7R5_POSITION                 0x00000005
#define _RPINR43_FLT7R5_MASK                     0x00000020
#define _RPINR43_FLT7R5_LENGTH                   0x00000001

#define _RPINR43_FLT7R6_POSITION                 0x00000006
#define _RPINR43_FLT7R6_MASK                     0x00000040
#define _RPINR43_FLT7R6_LENGTH                   0x00000001

#define _RPINR43_FLT7R7_POSITION                 0x00000007
#define _RPINR43_FLT7R7_MASK                     0x00000080
#define _RPINR43_FLT7R7_LENGTH                   0x00000001

#define _RPINR43_FLT8R0_POSITION                 0x00000008
#define _RPINR43_FLT8R0_MASK                     0x00000100
#define _RPINR43_FLT8R0_LENGTH                   0x00000001

#define _RPINR43_FLT8R1_POSITION                 0x00000009
#define _RPINR43_FLT8R1_MASK                     0x00000200
#define _RPINR43_FLT8R1_LENGTH                   0x00000001

#define _RPINR43_FLT8R2_POSITION                 0x0000000A
#define _RPINR43_FLT8R2_MASK                     0x00000400
#define _RPINR43_FLT8R2_LENGTH                   0x00000001

#define _RPINR43_FLT8R3_POSITION                 0x0000000B
#define _RPINR43_FLT8R3_MASK                     0x00000800
#define _RPINR43_FLT8R3_LENGTH                   0x00000001

#define _RPINR43_FLT8R4_POSITION                 0x0000000C
#define _RPINR43_FLT8R4_MASK                     0x00001000
#define _RPINR43_FLT8R4_LENGTH                   0x00000001

#define _RPINR43_FLT8R5_POSITION                 0x0000000D
#define _RPINR43_FLT8R5_MASK                     0x00002000
#define _RPINR43_FLT8R5_LENGTH                   0x00000001

#define _RPINR43_FLT8R6_POSITION                 0x0000000E
#define _RPINR43_FLT8R6_MASK                     0x00004000
#define _RPINR43_FLT8R6_LENGTH                   0x00000001

#define _RPINR43_FLT8R7_POSITION                 0x0000000F
#define _RPINR43_FLT8R7_MASK                     0x00008000
#define _RPINR43_FLT8R7_LENGTH                   0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_URERR_POSITION                   0x00000008
#define _NVMCON_URERR_MASK                       0x00000100
#define _NVMCON_URERR_LENGTH                     0x00000001

#define _NVMCON_RPDF_POSITION                    0x00000009
#define _NVMCON_RPDF_MASK                        0x00000200
#define _NVMCON_RPDF_LENGTH                      0x00000001

#define _NVMCON_NVMSIDL_POSITION                 0x0000000C
#define _NVMCON_NVMSIDL_MASK                     0x00001000
#define _NVMCON_NVMSIDL_LENGTH                   0x00000001

#define _NVMCON_WRERR_POSITION                   0x0000000D
#define _NVMCON_WRERR_MASK                       0x00002000
#define _NVMCON_WRERR_LENGTH                     0x00000001

#define _NVMCON_WREN_POSITION                    0x0000000E
#define _NVMCON_WREN_MASK                        0x00004000
#define _NVMCON_WREN_LENGTH                      0x00000001

#define _NVMCON_WR_POSITION                      0x0000000F
#define _NVMCON_WR_MASK                          0x00008000
#define _NVMCON_WR_LENGTH                        0x00000001

#define _NVMCON_NVMOP0_POSITION                  0x00000000
#define _NVMCON_NVMOP0_MASK                      0x00000001
#define _NVMCON_NVMOP0_LENGTH                    0x00000001

#define _NVMCON_NVMOP1_POSITION                  0x00000001
#define _NVMCON_NVMOP1_MASK                      0x00000002
#define _NVMCON_NVMOP1_LENGTH                    0x00000001

#define _NVMCON_NVMOP2_POSITION                  0x00000002
#define _NVMCON_NVMOP2_MASK                      0x00000004
#define _NVMCON_NVMOP2_LENGTH                    0x00000001

#define _NVMCON_NVMOP3_POSITION                  0x00000003
#define _NVMCON_NVMOP3_MASK                      0x00000008
#define _NVMCON_NVMOP3_LENGTH                    0x00000001

#define _NVMADR_NVMADR_POSITION                  0x00000000
#define _NVMADR_NVMADR_MASK                      0x0000FFFF
#define _NVMADR_NVMADR_LENGTH                    0x00000010

#define _NVMADR_NVMADRL_POSITION                 0x00000000
#define _NVMADR_NVMADRL_MASK                     0x0000FFFF
#define _NVMADR_NVMADRL_LENGTH                   0x00000010

#define _NVMADRL_NVMADR_POSITION                 0x00000000
#define _NVMADRL_NVMADR_MASK                     0x0000FFFF
#define _NVMADRL_NVMADR_LENGTH                   0x00000010

#define _NVMADRL_NVMADRL_POSITION                0x00000000
#define _NVMADRL_NVMADRL_MASK                    0x0000FFFF
#define _NVMADRL_NVMADRL_LENGTH                  0x00000010

#define _NVMADRH_NVMADRU_POSITION                0x00000000
#define _NVMADRH_NVMADRU_MASK                    0x000000FF
#define _NVMADRH_NVMADRU_LENGTH                  0x00000008

#define _NVMADRH_NVMADRH_POSITION                0x00000000
#define _NVMADRH_NVMADRH_MASK                    0x000000FF
#define _NVMADRH_NVMADRH_LENGTH                  0x00000008

#define _NVMADRU_NVMADRU_POSITION                0x00000000
#define _NVMADRU_NVMADRU_MASK                    0x000000FF
#define _NVMADRU_NVMADRU_LENGTH                  0x00000008

#define _NVMADRU_NVMADRH_POSITION                0x00000000
#define _NVMADRU_NVMADRH_MASK                    0x000000FF
#define _NVMADRU_NVMADRH_LENGTH                  0x00000008

#define _NVMSRCADRH_NVMSRCADRH_POSITION          0x00000000
#define _NVMSRCADRH_NVMSRCADRH_MASK              0x000000FF
#define _NVMSRCADRH_NVMSRCADRH_LENGTH            0x00000008

#define _RCON_POR_POSITION                       0x00000000
#define _RCON_POR_MASK                           0x00000001
#define _RCON_POR_LENGTH                         0x00000001

#define _RCON_BOR_POSITION                       0x00000001
#define _RCON_BOR_MASK                           0x00000002
#define _RCON_BOR_LENGTH                         0x00000001

#define _RCON_IDLE_POSITION                      0x00000002
#define _RCON_IDLE_MASK                          0x00000004
#define _RCON_IDLE_LENGTH                        0x00000001

#define _RCON_SLEEP_POSITION                     0x00000003
#define _RCON_SLEEP_MASK                         0x00000008
#define _RCON_SLEEP_LENGTH                       0x00000001

#define _RCON_WDTO_POSITION                      0x00000004
#define _RCON_WDTO_MASK                          0x00000010
#define _RCON_WDTO_LENGTH                        0x00000001

#define _RCON_SWDTEN_POSITION                    0x00000005
#define _RCON_SWDTEN_MASK                        0x00000020
#define _RCON_SWDTEN_LENGTH                      0x00000001

#define _RCON_SWR_POSITION                       0x00000006
#define _RCON_SWR_MASK                           0x00000040
#define _RCON_SWR_LENGTH                         0x00000001

#define _RCON_EXTR_POSITION                      0x00000007
#define _RCON_EXTR_MASK                          0x00000080
#define _RCON_EXTR_LENGTH                        0x00000001

#define _RCON_VREGS_POSITION                     0x00000008
#define _RCON_VREGS_MASK                         0x00000100
#define _RCON_VREGS_LENGTH                       0x00000001

#define _RCON_CM_POSITION                        0x00000009
#define _RCON_CM_MASK                            0x00000200
#define _RCON_CM_LENGTH                          0x00000001

#define _RCON_VREGSF_POSITION                    0x0000000B
#define _RCON_VREGSF_MASK                        0x00000800
#define _RCON_VREGSF_LENGTH                      0x00000001

#define _RCON_SBOREN_POSITION                    0x0000000D
#define _RCON_SBOREN_MASK                        0x00002000
#define _RCON_SBOREN_LENGTH                      0x00000001

#define _RCON_IOPUWR_POSITION                    0x0000000E
#define _RCON_IOPUWR_MASK                        0x00004000
#define _RCON_IOPUWR_LENGTH                      0x00000001

#define _RCON_TRAPR_POSITION                     0x0000000F
#define _RCON_TRAPR_MASK                         0x00008000
#define _RCON_TRAPR_LENGTH                       0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_LOCK_POSITION                    0x00000005
#define _OSCCON_LOCK_MASK                        0x00000020
#define _OSCCON_LOCK_LENGTH                      0x00000001

#define _OSCCON_IOLOCK_POSITION                  0x00000006
#define _OSCCON_IOLOCK_MASK                      0x00000040
#define _OSCCON_IOLOCK_LENGTH                    0x00000001

#define _OSCCON_CLKLOCK_POSITION                 0x00000007
#define _OSCCON_CLKLOCK_MASK                     0x00000080
#define _OSCCON_CLKLOCK_LENGTH                   0x00000001

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

#define _OSCCON_NOSC0_POSITION                   0x00000008
#define _OSCCON_NOSC0_MASK                       0x00000100
#define _OSCCON_NOSC0_LENGTH                     0x00000001

#define _OSCCON_NOSC1_POSITION                   0x00000009
#define _OSCCON_NOSC1_MASK                       0x00000200
#define _OSCCON_NOSC1_LENGTH                     0x00000001

#define _OSCCON_NOSC2_POSITION                   0x0000000A
#define _OSCCON_NOSC2_MASK                       0x00000400
#define _OSCCON_NOSC2_LENGTH                     0x00000001

#define _OSCCON_COSC0_POSITION                   0x0000000C
#define _OSCCON_COSC0_MASK                       0x00001000
#define _OSCCON_COSC0_LENGTH                     0x00000001

#define _OSCCON_COSC1_POSITION                   0x0000000D
#define _OSCCON_COSC1_MASK                       0x00002000
#define _OSCCON_COSC1_LENGTH                     0x00000001

#define _OSCCON_COSC2_POSITION                   0x0000000E
#define _OSCCON_COSC2_MASK                       0x00004000
#define _OSCCON_COSC2_LENGTH                     0x00000001

#define _CLKDIV_PLLPRE_POSITION                  0x00000000
#define _CLKDIV_PLLPRE_MASK                      0x0000001F
#define _CLKDIV_PLLPRE_LENGTH                    0x00000005

#define _CLKDIV_PLLPOST_POSITION                 0x00000006
#define _CLKDIV_PLLPOST_MASK                     0x000000C0
#define _CLKDIV_PLLPOST_LENGTH                   0x00000002

#define _CLKDIV_FRCDIV_POSITION                  0x00000008
#define _CLKDIV_FRCDIV_MASK                      0x00000700
#define _CLKDIV_FRCDIV_LENGTH                    0x00000003

#define _CLKDIV_DOZEN_POSITION                   0x0000000B
#define _CLKDIV_DOZEN_MASK                       0x00000800
#define _CLKDIV_DOZEN_LENGTH                     0x00000001

#define _CLKDIV_DOZE_POSITION                    0x0000000C
#define _CLKDIV_DOZE_MASK                        0x00007000
#define _CLKDIV_DOZE_LENGTH                      0x00000003

#define _CLKDIV_ROI_POSITION                     0x0000000F
#define _CLKDIV_ROI_MASK                         0x00008000
#define _CLKDIV_ROI_LENGTH                       0x00000001

#define _CLKDIV_PLLPRE0_POSITION                 0x00000000
#define _CLKDIV_PLLPRE0_MASK                     0x00000001
#define _CLKDIV_PLLPRE0_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE1_POSITION                 0x00000001
#define _CLKDIV_PLLPRE1_MASK                     0x00000002
#define _CLKDIV_PLLPRE1_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE2_POSITION                 0x00000002
#define _CLKDIV_PLLPRE2_MASK                     0x00000004
#define _CLKDIV_PLLPRE2_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE3_POSITION                 0x00000003
#define _CLKDIV_PLLPRE3_MASK                     0x00000008
#define _CLKDIV_PLLPRE3_LENGTH                   0x00000001

#define _CLKDIV_PLLPRE4_POSITION                 0x00000004
#define _CLKDIV_PLLPRE4_MASK                     0x00000010
#define _CLKDIV_PLLPRE4_LENGTH                   0x00000001

#define _CLKDIV_PLLPOST0_POSITION                0x00000006
#define _CLKDIV_PLLPOST0_MASK                    0x00000040
#define _CLKDIV_PLLPOST0_LENGTH                  0x00000001

#define _CLKDIV_PLLPOST1_POSITION                0x00000007
#define _CLKDIV_PLLPOST1_MASK                    0x00000080
#define _CLKDIV_PLLPOST1_LENGTH                  0x00000001

#define _CLKDIV_FRCDIV0_POSITION                 0x00000008
#define _CLKDIV_FRCDIV0_MASK                     0x00000100
#define _CLKDIV_FRCDIV0_LENGTH                   0x00000001

#define _CLKDIV_FRCDIV1_POSITION                 0x00000009
#define _CLKDIV_FRCDIV1_MASK                     0x00000200
#define _CLKDIV_FRCDIV1_LENGTH                   0x00000001

#define _CLKDIV_FRCDIV2_POSITION                 0x0000000A
#define _CLKDIV_FRCDIV2_MASK                     0x00000400
#define _CLKDIV_FRCDIV2_LENGTH                   0x00000001

#define _CLKDIV_DOZE0_POSITION                   0x0000000C
#define _CLKDIV_DOZE0_MASK                       0x00001000
#define _CLKDIV_DOZE0_LENGTH                     0x00000001

#define _CLKDIV_DOZE1_POSITION                   0x0000000D
#define _CLKDIV_DOZE1_MASK                       0x00002000
#define _CLKDIV_DOZE1_LENGTH                     0x00000001

#define _CLKDIV_DOZE2_POSITION                   0x0000000E
#define _CLKDIV_DOZE2_MASK                       0x00004000
#define _CLKDIV_DOZE2_LENGTH                     0x00000001

#define _PLLFBD_PLLDIV_POSITION                  0x00000000
#define _PLLFBD_PLLDIV_MASK                      0x000001FF
#define _PLLFBD_PLLDIV_LENGTH                    0x00000009

#define _PLLFBD_PLLDIV0_POSITION                 0x00000000
#define _PLLFBD_PLLDIV0_MASK                     0x00000001
#define _PLLFBD_PLLDIV0_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV1_POSITION                 0x00000001
#define _PLLFBD_PLLDIV1_MASK                     0x00000002
#define _PLLFBD_PLLDIV1_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV2_POSITION                 0x00000002
#define _PLLFBD_PLLDIV2_MASK                     0x00000004
#define _PLLFBD_PLLDIV2_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV3_POSITION                 0x00000003
#define _PLLFBD_PLLDIV3_MASK                     0x00000008
#define _PLLFBD_PLLDIV3_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV4_POSITION                 0x00000004
#define _PLLFBD_PLLDIV4_MASK                     0x00000010
#define _PLLFBD_PLLDIV4_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV5_POSITION                 0x00000005
#define _PLLFBD_PLLDIV5_MASK                     0x00000020
#define _PLLFBD_PLLDIV5_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV6_POSITION                 0x00000006
#define _PLLFBD_PLLDIV6_MASK                     0x00000040
#define _PLLFBD_PLLDIV6_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV7_POSITION                 0x00000007
#define _PLLFBD_PLLDIV7_MASK                     0x00000080
#define _PLLFBD_PLLDIV7_LENGTH                   0x00000001

#define _PLLFBD_PLLDIV8_POSITION                 0x00000008
#define _PLLFBD_PLLDIV8_MASK                     0x00000100
#define _PLLFBD_PLLDIV8_LENGTH                   0x00000001

#define _OSCTUN_TUN_POSITION                     0x00000000
#define _OSCTUN_TUN_MASK                         0x0000003F
#define _OSCTUN_TUN_LENGTH                       0x00000006

#define _OSCTUN_TUN0_POSITION                    0x00000000
#define _OSCTUN_TUN0_MASK                        0x00000001
#define _OSCTUN_TUN0_LENGTH                      0x00000001

#define _OSCTUN_TUN1_POSITION                    0x00000001
#define _OSCTUN_TUN1_MASK                        0x00000002
#define _OSCTUN_TUN1_LENGTH                      0x00000001

#define _OSCTUN_TUN2_POSITION                    0x00000002
#define _OSCTUN_TUN2_MASK                        0x00000004
#define _OSCTUN_TUN2_LENGTH                      0x00000001

#define _OSCTUN_TUN3_POSITION                    0x00000003
#define _OSCTUN_TUN3_MASK                        0x00000008
#define _OSCTUN_TUN3_LENGTH                      0x00000001

#define _OSCTUN_TUN4_POSITION                    0x00000004
#define _OSCTUN_TUN4_MASK                        0x00000010
#define _OSCTUN_TUN4_LENGTH                      0x00000001

#define _OSCTUN_TUN5_POSITION                    0x00000005
#define _OSCTUN_TUN5_MASK                        0x00000020
#define _OSCTUN_TUN5_LENGTH                      0x00000001

#define _LFSR_LFSR_POSITION                      0x00000000
#define _LFSR_LFSR_MASK                          0x00007FFF
#define _LFSR_LFSR_LENGTH                        0x0000000F

#define _ACLKCON_FRCSEL_POSITION                 0x00000006
#define _ACLKCON_FRCSEL_MASK                     0x00000040
#define _ACLKCON_FRCSEL_LENGTH                   0x00000001

#define _ACLKCON_ASRCSEL_POSITION                0x00000007
#define _ACLKCON_ASRCSEL_MASK                    0x00000080
#define _ACLKCON_ASRCSEL_LENGTH                  0x00000001

#define _ACLKCON_APSTSCLR_POSITION               0x00000008
#define _ACLKCON_APSTSCLR_MASK                   0x00000700
#define _ACLKCON_APSTSCLR_LENGTH                 0x00000003

#define _ACLKCON_SELACLK_POSITION                0x0000000D
#define _ACLKCON_SELACLK_MASK                    0x00002000
#define _ACLKCON_SELACLK_LENGTH                  0x00000001

#define _ACLKCON_APLLCK_POSITION                 0x0000000E
#define _ACLKCON_APLLCK_MASK                     0x00004000
#define _ACLKCON_APLLCK_LENGTH                   0x00000001

#define _ACLKCON_ENAPLL_POSITION                 0x0000000F
#define _ACLKCON_ENAPLL_MASK                     0x00008000
#define _ACLKCON_ENAPLL_LENGTH                   0x00000001

#define _ACLKCON_APSTSCLR0_POSITION              0x00000008
#define _ACLKCON_APSTSCLR0_MASK                  0x00000100
#define _ACLKCON_APSTSCLR0_LENGTH                0x00000001

#define _ACLKCON_APSTSCLR1_POSITION              0x00000009
#define _ACLKCON_APSTSCLR1_MASK                  0x00000200
#define _ACLKCON_APSTSCLR1_LENGTH                0x00000001

#define _ACLKCON_APSTSCLR2_POSITION              0x0000000A
#define _ACLKCON_APSTSCLR2_MASK                  0x00000400
#define _ACLKCON_APSTSCLR2_LENGTH                0x00000001

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_SPI1MD_POSITION                    0x00000003
#define _PMD1_SPI1MD_MASK                        0x00000008
#define _PMD1_SPI1MD_LENGTH                      0x00000001

#define _PMD1_U1MD_POSITION                      0x00000005
#define _PMD1_U1MD_MASK                          0x00000020
#define _PMD1_U1MD_LENGTH                        0x00000001

#define _PMD1_I2C1MD_POSITION                    0x00000007
#define _PMD1_I2C1MD_MASK                        0x00000080
#define _PMD1_I2C1MD_LENGTH                      0x00000001

#define _PMD1_PWMMD_POSITION                     0x00000009
#define _PMD1_PWMMD_MASK                         0x00000200
#define _PMD1_PWMMD_LENGTH                       0x00000001

#define _PMD1_T1MD_POSITION                      0x0000000B
#define _PMD1_T1MD_MASK                          0x00000800
#define _PMD1_T1MD_LENGTH                        0x00000001

#define _PMD1_T2MD_POSITION                      0x0000000C
#define _PMD1_T2MD_MASK                          0x00001000
#define _PMD1_T2MD_LENGTH                        0x00000001

#define _PMD1_T3MD_POSITION                      0x0000000D
#define _PMD1_T3MD_MASK                          0x00002000
#define _PMD1_T3MD_LENGTH                        0x00000001

#define _PMD2_OC1MD_POSITION                     0x00000000
#define _PMD2_OC1MD_MASK                         0x00000001
#define _PMD2_OC1MD_LENGTH                       0x00000001

#define _PMD2_IC1MD_POSITION                     0x00000008
#define _PMD2_IC1MD_MASK                         0x00000100
#define _PMD2_IC1MD_LENGTH                       0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD6_PWM1MD_POSITION                    0x00000008
#define _PMD6_PWM1MD_MASK                        0x00000100
#define _PMD6_PWM1MD_LENGTH                      0x00000001

#define _PMD6_PWM2MD_POSITION                    0x00000009
#define _PMD6_PWM2MD_MASK                        0x00000200
#define _PMD6_PWM2MD_LENGTH                      0x00000001

#define _PMD6_PWM3MD_POSITION                    0x0000000A
#define _PMD6_PWM3MD_MASK                        0x00000400
#define _PMD6_PWM3MD_LENGTH                      0x00000001

#define _PMD7_PGA1MD_POSITION                    0x00000001
#define _PMD7_PGA1MD_MASK                        0x00000002
#define _PMD7_PGA1MD_LENGTH                      0x00000001

#define _PMD7_CMP1MD_POSITION                    0x00000008
#define _PMD7_CMP1MD_MASK                        0x00000100
#define _PMD7_CMP1MD_LENGTH                      0x00000001

#define _PMD7_CMP2MD_POSITION                    0x00000009
#define _PMD7_CMP2MD_MASK                        0x00000200
#define _PMD7_CMP2MD_LENGTH                      0x00000001

#define _PMD8_PGA2MD_POSITION                    0x0000000A
#define _PMD8_PGA2MD_MASK                        0x00000400
#define _PMD8_PGA2MD_LENGTH                      0x00000001

#define _IFS0_INT0IF_POSITION                    0x00000000
#define _IFS0_INT0IF_MASK                        0x00000001
#define _IFS0_INT0IF_LENGTH                      0x00000001

#define _IFS0_IC1IF_POSITION                     0x00000001
#define _IFS0_IC1IF_MASK                         0x00000002
#define _IFS0_IC1IF_LENGTH                       0x00000001

#define _IFS0_OC1IF_POSITION                     0x00000002
#define _IFS0_OC1IF_MASK                         0x00000004
#define _IFS0_OC1IF_LENGTH                       0x00000001

#define _IFS0_T1IF_POSITION                      0x00000003
#define _IFS0_T1IF_MASK                          0x00000008
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_T2IF_POSITION                      0x00000007
#define _IFS0_T2IF_MASK                          0x00000080
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_T3IF_POSITION                      0x00000008
#define _IFS0_T3IF_MASK                          0x00000100
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_SPI1EIF_POSITION                   0x00000009
#define _IFS0_SPI1EIF_MASK                       0x00000200
#define _IFS0_SPI1EIF_LENGTH                     0x00000001

#define _IFS0_SPI1IF_POSITION                    0x0000000A
#define _IFS0_SPI1IF_MASK                        0x00000400
#define _IFS0_SPI1IF_LENGTH                      0x00000001

#define _IFS0_U1RXIF_POSITION                    0x0000000B
#define _IFS0_U1RXIF_MASK                        0x00000800
#define _IFS0_U1RXIF_LENGTH                      0x00000001

#define _IFS0_U1TXIF_POSITION                    0x0000000C
#define _IFS0_U1TXIF_MASK                        0x00001000
#define _IFS0_U1TXIF_LENGTH                      0x00000001

#define _IFS0_ADCIF_POSITION                     0x0000000D
#define _IFS0_ADCIF_MASK                         0x00002000
#define _IFS0_ADCIF_LENGTH                       0x00000001

#define _IFS0_NVMIF_POSITION                     0x0000000F
#define _IFS0_NVMIF_MASK                         0x00008000
#define _IFS0_NVMIF_LENGTH                       0x00000001

#define _IFS1_SI2C1IF_POSITION                   0x00000000
#define _IFS1_SI2C1IF_MASK                       0x00000001
#define _IFS1_SI2C1IF_LENGTH                     0x00000001

#define _IFS1_MI2C1IF_POSITION                   0x00000001
#define _IFS1_MI2C1IF_MASK                       0x00000002
#define _IFS1_MI2C1IF_LENGTH                     0x00000001

#define _IFS1_AC1IF_POSITION                     0x00000002
#define _IFS1_AC1IF_MASK                         0x00000004
#define _IFS1_AC1IF_LENGTH                       0x00000001

#define _IFS1_CNIF_POSITION                      0x00000003
#define _IFS1_CNIF_MASK                          0x00000008
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000004
#define _IFS1_INT1IF_MASK                        0x00000010
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS3_INT4IF_POSITION                    0x00000006
#define _IFS3_INT4IF_MASK                        0x00000040
#define _IFS3_INT4IF_LENGTH                      0x00000001

#define _IFS3_PSEMIF_POSITION                    0x00000009
#define _IFS3_PSEMIF_MASK                        0x00000200
#define _IFS3_PSEMIF_LENGTH                      0x00000001

#define _IFS4_U1EIF_POSITION                     0x00000001
#define _IFS4_U1EIF_MASK                         0x00000002
#define _IFS4_U1EIF_LENGTH                       0x00000001

#define _IFS4_PSESIF_POSITION                    0x00000009
#define _IFS4_PSESIF_MASK                        0x00000200
#define _IFS4_PSESIF_LENGTH                      0x00000001

#define _IFS5_PWM1IF_POSITION                    0x0000000E
#define _IFS5_PWM1IF_MASK                        0x00004000
#define _IFS5_PWM1IF_LENGTH                      0x00000001

#define _IFS5_PWM2IF_POSITION                    0x0000000F
#define _IFS5_PWM2IF_MASK                        0x00008000
#define _IFS5_PWM2IF_LENGTH                      0x00000001

#define _IFS6_PWM3IF_POSITION                    0x00000000
#define _IFS6_PWM3IF_MASK                        0x00000001
#define _IFS6_PWM3IF_LENGTH                      0x00000001

#define _IFS6_AC2IF_POSITION                     0x00000007
#define _IFS6_AC2IF_MASK                         0x00000080
#define _IFS6_AC2IF_LENGTH                       0x00000001

#define _IFS6_ADCAN0IF_POSITION                  0x0000000E
#define _IFS6_ADCAN0IF_MASK                      0x00004000
#define _IFS6_ADCAN0IF_LENGTH                    0x00000001

#define _IFS6_ADCAN1IF_POSITION                  0x0000000F
#define _IFS6_ADCAN1IF_MASK                      0x00008000
#define _IFS6_ADCAN1IF_LENGTH                    0x00000001

#define _IFS7_ADCAN2IF_POSITION                  0x00000000
#define _IFS7_ADCAN2IF_MASK                      0x00000001
#define _IFS7_ADCAN2IF_LENGTH                    0x00000001

#define _IFS7_ADCAN3IF_POSITION                  0x00000001
#define _IFS7_ADCAN3IF_MASK                      0x00000002
#define _IFS7_ADCAN3IF_LENGTH                    0x00000001

#define _IFS7_ADCAN4IF_POSITION                  0x00000002
#define _IFS7_ADCAN4IF_MASK                      0x00000004
#define _IFS7_ADCAN4IF_LENGTH                    0x00000001

#define _IFS7_ADCAN5IF_POSITION                  0x00000003
#define _IFS7_ADCAN5IF_MASK                      0x00000008
#define _IFS7_ADCAN5IF_LENGTH                    0x00000001

#define _IFS7_ADCAN6IF_POSITION                  0x00000004
#define _IFS7_ADCAN6IF_MASK                      0x00000010
#define _IFS7_ADCAN6IF_LENGTH                    0x00000001

#define _IFS7_ADCAN7IF_POSITION                  0x00000005
#define _IFS7_ADCAN7IF_MASK                      0x00000020
#define _IFS7_ADCAN7IF_LENGTH                    0x00000001

#define _IFS9_ADCAN8IF_POSITION                  0x00000007
#define _IFS9_ADCAN8IF_MASK                      0x00000080
#define _IFS9_ADCAN8IF_LENGTH                    0x00000001

#define _IFS9_ADCAN9IF_POSITION                  0x00000008
#define _IFS9_ADCAN9IF_MASK                      0x00000100
#define _IFS9_ADCAN9IF_LENGTH                    0x00000001

#define _IFS9_ADCAN10IF_POSITION                 0x00000009
#define _IFS9_ADCAN10IF_MASK                     0x00000200
#define _IFS9_ADCAN10IF_LENGTH                   0x00000001

#define _IFS9_ADCAN11IF_POSITION                 0x0000000A
#define _IFS9_ADCAN11IF_MASK                     0x00000400
#define _IFS9_ADCAN11IF_LENGTH                   0x00000001

#define _IFS9_ADCAN12IF_POSITION                 0x0000000B
#define _IFS9_ADCAN12IF_MASK                     0x00000800
#define _IFS9_ADCAN12IF_LENGTH                   0x00000001

#define _IFS9_ADCAN13IF_POSITION                 0x0000000C
#define _IFS9_ADCAN13IF_MASK                     0x00001000
#define _IFS9_ADCAN13IF_LENGTH                   0x00000001

#define _IFS9_ADCAN14IF_POSITION                 0x0000000D
#define _IFS9_ADCAN14IF_MASK                     0x00002000
#define _IFS9_ADCAN14IF_LENGTH                   0x00000001

#define _IFS10_I2C1BCIF_POSITION                 0x0000000D
#define _IFS10_I2C1BCIF_MASK                     0x00002000
#define _IFS10_I2C1BCIF_LENGTH                   0x00000001

#define _IFS11_ADCFLTIF_POSITION                 0x00000000
#define _IFS11_ADCFLTIF_MASK                     0x00000001
#define _IFS11_ADCFLTIF_LENGTH                   0x00000001

#define _IFS11_ADCMP1IF_POSITION                 0x00000001
#define _IFS11_ADCMP1IF_MASK                     0x00000002
#define _IFS11_ADCMP1IF_LENGTH                   0x00000001

#define _IFS11_ADCMP2IF_POSITION                 0x00000002
#define _IFS11_ADCMP2IF_MASK                     0x00000004
#define _IFS11_ADCMP2IF_LENGTH                   0x00000001

#define _IFS11_ADCFLTR1IF_POSITION               0x00000003
#define _IFS11_ADCFLTR1IF_MASK                   0x00000008
#define _IFS11_ADCFLTR1IF_LENGTH                 0x00000001

#define _IFS11_ADCC0EIF_POSITION                 0x0000000B
#define _IFS11_ADCC0EIF_MASK                     0x00000800
#define _IFS11_ADCC0EIF_LENGTH                   0x00000001

#define _IFS11_ADCC1EIF_POSITION                 0x0000000C
#define _IFS11_ADCC1EIF_MASK                     0x00001000
#define _IFS11_ADCC1EIF_LENGTH                   0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000000
#define _IEC0_INT0IE_MASK                        0x00000001
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_IC1IE_POSITION                     0x00000001
#define _IEC0_IC1IE_MASK                         0x00000002
#define _IEC0_IC1IE_LENGTH                       0x00000001

#define _IEC0_OC1IE_POSITION                     0x00000002
#define _IEC0_OC1IE_MASK                         0x00000004
#define _IEC0_OC1IE_LENGTH                       0x00000001

#define _IEC0_T1IE_POSITION                      0x00000003
#define _IEC0_T1IE_MASK                          0x00000008
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_T2IE_POSITION                      0x00000007
#define _IEC0_T2IE_MASK                          0x00000080
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_T3IE_POSITION                      0x00000008
#define _IEC0_T3IE_MASK                          0x00000100
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_SPI1EIE_POSITION                   0x00000009
#define _IEC0_SPI1EIE_MASK                       0x00000200
#define _IEC0_SPI1EIE_LENGTH                     0x00000001

#define _IEC0_SPI1IE_POSITION                    0x0000000A
#define _IEC0_SPI1IE_MASK                        0x00000400
#define _IEC0_SPI1IE_LENGTH                      0x00000001

#define _IEC0_U1RXIE_POSITION                    0x0000000B
#define _IEC0_U1RXIE_MASK                        0x00000800
#define _IEC0_U1RXIE_LENGTH                      0x00000001

#define _IEC0_U1TXIE_POSITION                    0x0000000C
#define _IEC0_U1TXIE_MASK                        0x00001000
#define _IEC0_U1TXIE_LENGTH                      0x00000001

#define _IEC0_ADCIE_POSITION                     0x0000000D
#define _IEC0_ADCIE_MASK                         0x00002000
#define _IEC0_ADCIE_LENGTH                       0x00000001

#define _IEC0_NVMIE_POSITION                     0x0000000F
#define _IEC0_NVMIE_MASK                         0x00008000
#define _IEC0_NVMIE_LENGTH                       0x00000001

#define _IEC1_SI2C1IE_POSITION                   0x00000000
#define _IEC1_SI2C1IE_MASK                       0x00000001
#define _IEC1_SI2C1IE_LENGTH                     0x00000001

#define _IEC1_MI2C1IE_POSITION                   0x00000001
#define _IEC1_MI2C1IE_MASK                       0x00000002
#define _IEC1_MI2C1IE_LENGTH                     0x00000001

#define _IEC1_AC1IE_POSITION                     0x00000002
#define _IEC1_AC1IE_MASK                         0x00000004
#define _IEC1_AC1IE_LENGTH                       0x00000001

#define _IEC1_CNIE_POSITION                      0x00000003
#define _IEC1_CNIE_MASK                          0x00000008
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000004
#define _IEC1_INT1IE_MASK                        0x00000010
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC3_INT4IE_POSITION                    0x00000006
#define _IEC3_INT4IE_MASK                        0x00000040
#define _IEC3_INT4IE_LENGTH                      0x00000001

#define _IEC3_PSEMIE_POSITION                    0x00000009
#define _IEC3_PSEMIE_MASK                        0x00000200
#define _IEC3_PSEMIE_LENGTH                      0x00000001

#define _IEC4_U1EIE_POSITION                     0x00000001
#define _IEC4_U1EIE_MASK                         0x00000002
#define _IEC4_U1EIE_LENGTH                       0x00000001

#define _IEC4_PSESIE_POSITION                    0x00000009
#define _IEC4_PSESIE_MASK                        0x00000200
#define _IEC4_PSESIE_LENGTH                      0x00000001

#define _IEC5_PWM1IE_POSITION                    0x0000000E
#define _IEC5_PWM1IE_MASK                        0x00004000
#define _IEC5_PWM1IE_LENGTH                      0x00000001

#define _IEC5_PWM2IE_POSITION                    0x0000000F
#define _IEC5_PWM2IE_MASK                        0x00008000
#define _IEC5_PWM2IE_LENGTH                      0x00000001

#define _IEC6_PWM3IE_POSITION                    0x00000000
#define _IEC6_PWM3IE_MASK                        0x00000001
#define _IEC6_PWM3IE_LENGTH                      0x00000001

#define _IEC6_AC2IE_POSITION                     0x00000007
#define _IEC6_AC2IE_MASK                         0x00000080
#define _IEC6_AC2IE_LENGTH                       0x00000001

#define _IEC6_ADCAN0IE_POSITION                  0x0000000E
#define _IEC6_ADCAN0IE_MASK                      0x00004000
#define _IEC6_ADCAN0IE_LENGTH                    0x00000001

#define _IEC6_ADCAN1IE_POSITION                  0x0000000F
#define _IEC6_ADCAN1IE_MASK                      0x00008000
#define _IEC6_ADCAN1IE_LENGTH                    0x00000001

#define _IEC7_ADCAN2IE_POSITION                  0x00000000
#define _IEC7_ADCAN2IE_MASK                      0x00000001
#define _IEC7_ADCAN2IE_LENGTH                    0x00000001

#define _IEC7_ADCAN3IE_POSITION                  0x00000001
#define _IEC7_ADCAN3IE_MASK                      0x00000002
#define _IEC7_ADCAN3IE_LENGTH                    0x00000001

#define _IEC7_ADCAN4IE_POSITION                  0x00000002
#define _IEC7_ADCAN4IE_MASK                      0x00000004
#define _IEC7_ADCAN4IE_LENGTH                    0x00000001

#define _IEC7_ADCAN5IE_POSITION                  0x00000003
#define _IEC7_ADCAN5IE_MASK                      0x00000008
#define _IEC7_ADCAN5IE_LENGTH                    0x00000001

#define _IEC7_ADCAN6IE_POSITION                  0x00000004
#define _IEC7_ADCAN6IE_MASK                      0x00000010
#define _IEC7_ADCAN6IE_LENGTH                    0x00000001

#define _IEC7_ADCAN7IE_POSITION                  0x00000005
#define _IEC7_ADCAN7IE_MASK                      0x00000020
#define _IEC7_ADCAN7IE_LENGTH                    0x00000001

#define _IEC9_ADCAN8IE_POSITION                  0x00000007
#define _IEC9_ADCAN8IE_MASK                      0x00000080
#define _IEC9_ADCAN8IE_LENGTH                    0x00000001

#define _IEC9_ADCAN9IE_POSITION                  0x00000008
#define _IEC9_ADCAN9IE_MASK                      0x00000100
#define _IEC9_ADCAN9IE_LENGTH                    0x00000001

#define _IEC9_ADCAN10IE_POSITION                 0x00000009
#define _IEC9_ADCAN10IE_MASK                     0x00000200
#define _IEC9_ADCAN10IE_LENGTH                   0x00000001

#define _IEC9_ADCAN11IE_POSITION                 0x0000000A
#define _IEC9_ADCAN11IE_MASK                     0x00000400
#define _IEC9_ADCAN11IE_LENGTH                   0x00000001

#define _IEC9_ADCAN12IE_POSITION                 0x0000000B
#define _IEC9_ADCAN12IE_MASK                     0x00000800
#define _IEC9_ADCAN12IE_LENGTH                   0x00000001

#define _IEC9_ADCAN13IE_POSITION                 0x0000000C
#define _IEC9_ADCAN13IE_MASK                     0x00001000
#define _IEC9_ADCAN13IE_LENGTH                   0x00000001

#define _IEC9_ADCAN14IE_POSITION                 0x0000000D
#define _IEC9_ADCAN14IE_MASK                     0x00002000
#define _IEC9_ADCAN14IE_LENGTH                   0x00000001

#define _IEC10_I2C1BCIE_POSITION                 0x0000000D
#define _IEC10_I2C1BCIE_MASK                     0x00002000
#define _IEC10_I2C1BCIE_LENGTH                   0x00000001

#define _IEC11_ADCFLTIE_POSITION                 0x00000000
#define _IEC11_ADCFLTIE_MASK                     0x00000001
#define _IEC11_ADCFLTIE_LENGTH                   0x00000001

#define _IEC11_ADCMP1IE_POSITION                 0x00000001
#define _IEC11_ADCMP1IE_MASK                     0x00000002
#define _IEC11_ADCMP1IE_LENGTH                   0x00000001

#define _IEC11_ADCMP2IE_POSITION                 0x00000002
#define _IEC11_ADCMP2IE_MASK                     0x00000004
#define _IEC11_ADCMP2IE_LENGTH                   0x00000001

#define _IEC11_ADCFLTR1IE_POSITION               0x00000003
#define _IEC11_ADCFLTR1IE_MASK                   0x00000008
#define _IEC11_ADCFLTR1IE_LENGTH                 0x00000001

#define _IEC11_ADCC0EIE_POSITION                 0x0000000B
#define _IEC11_ADCC0EIE_MASK                     0x00000800
#define _IEC11_ADCC0EIE_LENGTH                   0x00000001

#define _IEC11_ADCC1EIE_POSITION                 0x0000000C
#define _IEC11_ADCC1EIE_MASK                     0x00001000
#define _IEC11_ADCC1EIE_LENGTH                   0x00000001

#define _IPC0_INT0IP_POSITION                    0x00000000
#define _IPC0_INT0IP_MASK                        0x00000007
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_IC1IP_POSITION                     0x00000004
#define _IPC0_IC1IP_MASK                         0x00000070
#define _IPC0_IC1IP_LENGTH                       0x00000003

#define _IPC0_OC1IP_POSITION                     0x00000008
#define _IPC0_OC1IP_MASK                         0x00000700
#define _IPC0_OC1IP_LENGTH                       0x00000003

#define _IPC0_T1IP_POSITION                      0x0000000C
#define _IPC0_T1IP_MASK                          0x00007000
#define _IPC0_T1IP_LENGTH                        0x00000003

#define _IPC0_INT0IP0_POSITION                   0x00000000
#define _IPC0_INT0IP0_MASK                       0x00000001
#define _IPC0_INT0IP0_LENGTH                     0x00000001

#define _IPC0_INT0IP1_POSITION                   0x00000001
#define _IPC0_INT0IP1_MASK                       0x00000002
#define _IPC0_INT0IP1_LENGTH                     0x00000001

#define _IPC0_INT0IP2_POSITION                   0x00000002
#define _IPC0_INT0IP2_MASK                       0x00000004
#define _IPC0_INT0IP2_LENGTH                     0x00000001

#define _IPC0_IC1IP0_POSITION                    0x00000004
#define _IPC0_IC1IP0_MASK                        0x00000010
#define _IPC0_IC1IP0_LENGTH                      0x00000001

#define _IPC0_IC1IP1_POSITION                    0x00000005
#define _IPC0_IC1IP1_MASK                        0x00000020
#define _IPC0_IC1IP1_LENGTH                      0x00000001

#define _IPC0_IC1IP2_POSITION                    0x00000006
#define _IPC0_IC1IP2_MASK                        0x00000040
#define _IPC0_IC1IP2_LENGTH                      0x00000001

#define _IPC0_OC1IP0_POSITION                    0x00000008
#define _IPC0_OC1IP0_MASK                        0x00000100
#define _IPC0_OC1IP0_LENGTH                      0x00000001

#define _IPC0_OC1IP1_POSITION                    0x00000009
#define _IPC0_OC1IP1_MASK                        0x00000200
#define _IPC0_OC1IP1_LENGTH                      0x00000001

#define _IPC0_OC1IP2_POSITION                    0x0000000A
#define _IPC0_OC1IP2_MASK                        0x00000400
#define _IPC0_OC1IP2_LENGTH                      0x00000001

#define _IPC0_T1IP0_POSITION                     0x0000000C
#define _IPC0_T1IP0_MASK                         0x00001000
#define _IPC0_T1IP0_LENGTH                       0x00000001

#define _IPC0_T1IP1_POSITION                     0x0000000D
#define _IPC0_T1IP1_MASK                         0x00002000
#define _IPC0_T1IP1_LENGTH                       0x00000001

#define _IPC0_T1IP2_POSITION                     0x0000000E
#define _IPC0_T1IP2_MASK                         0x00004000
#define _IPC0_T1IP2_LENGTH                       0x00000001

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

#define _IPC1_T2IP0_POSITION                     0x0000000C
#define _IPC1_T2IP0_MASK                         0x00001000
#define _IPC1_T2IP0_LENGTH                       0x00000001

#define _IPC1_T2IP1_POSITION                     0x0000000D
#define _IPC1_T2IP1_MASK                         0x00002000
#define _IPC1_T2IP1_LENGTH                       0x00000001

#define _IPC1_T2IP2_POSITION                     0x0000000E
#define _IPC1_T2IP2_MASK                         0x00004000
#define _IPC1_T2IP2_LENGTH                       0x00000001

#define _IPC2_T3IP_POSITION                      0x00000000
#define _IPC2_T3IP_MASK                          0x00000007
#define _IPC2_T3IP_LENGTH                        0x00000003

#define _IPC2_SPI1EIP_POSITION                   0x00000004
#define _IPC2_SPI1EIP_MASK                       0x00000070
#define _IPC2_SPI1EIP_LENGTH                     0x00000003

#define _IPC2_SPI1IP_POSITION                    0x00000008
#define _IPC2_SPI1IP_MASK                        0x00000700
#define _IPC2_SPI1IP_LENGTH                      0x00000003

#define _IPC2_U1RXIP_POSITION                    0x0000000C
#define _IPC2_U1RXIP_MASK                        0x00007000
#define _IPC2_U1RXIP_LENGTH                      0x00000003

#define _IPC2_T3IP0_POSITION                     0x00000000
#define _IPC2_T3IP0_MASK                         0x00000001
#define _IPC2_T3IP0_LENGTH                       0x00000001

#define _IPC2_T3IP1_POSITION                     0x00000001
#define _IPC2_T3IP1_MASK                         0x00000002
#define _IPC2_T3IP1_LENGTH                       0x00000001

#define _IPC2_T3IP2_POSITION                     0x00000002
#define _IPC2_T3IP2_MASK                         0x00000004
#define _IPC2_T3IP2_LENGTH                       0x00000001

#define _IPC2_SPI1EIP0_POSITION                  0x00000004
#define _IPC2_SPI1EIP0_MASK                      0x00000010
#define _IPC2_SPI1EIP0_LENGTH                    0x00000001

#define _IPC2_SPI1EIP1_POSITION                  0x00000005
#define _IPC2_SPI1EIP1_MASK                      0x00000020
#define _IPC2_SPI1EIP1_LENGTH                    0x00000001

#define _IPC2_SPI1EIP2_POSITION                  0x00000006
#define _IPC2_SPI1EIP2_MASK                      0x00000040
#define _IPC2_SPI1EIP2_LENGTH                    0x00000001

#define _IPC2_SPI1IP0_POSITION                   0x00000008
#define _IPC2_SPI1IP0_MASK                       0x00000100
#define _IPC2_SPI1IP0_LENGTH                     0x00000001

#define _IPC2_SPI1IP1_POSITION                   0x00000009
#define _IPC2_SPI1IP1_MASK                       0x00000200
#define _IPC2_SPI1IP1_LENGTH                     0x00000001

#define _IPC2_SPI1IP2_POSITION                   0x0000000A
#define _IPC2_SPI1IP2_MASK                       0x00000400
#define _IPC2_SPI1IP2_LENGTH                     0x00000001

#define _IPC2_U1RXIP0_POSITION                   0x0000000C
#define _IPC2_U1RXIP0_MASK                       0x00001000
#define _IPC2_U1RXIP0_LENGTH                     0x00000001

#define _IPC2_U1RXIP1_POSITION                   0x0000000D
#define _IPC2_U1RXIP1_MASK                       0x00002000
#define _IPC2_U1RXIP1_LENGTH                     0x00000001

#define _IPC2_U1RXIP2_POSITION                   0x0000000E
#define _IPC2_U1RXIP2_MASK                       0x00004000
#define _IPC2_U1RXIP2_LENGTH                     0x00000001

#define _IPC3_U1TXIP_POSITION                    0x00000000
#define _IPC3_U1TXIP_MASK                        0x00000007
#define _IPC3_U1TXIP_LENGTH                      0x00000003

#define _IPC3_ADCIP_POSITION                     0x00000004
#define _IPC3_ADCIP_MASK                         0x00000070
#define _IPC3_ADCIP_LENGTH                       0x00000003

#define _IPC3_NVMIP_POSITION                     0x0000000C
#define _IPC3_NVMIP_MASK                         0x00007000
#define _IPC3_NVMIP_LENGTH                       0x00000003

#define _IPC3_U1TXIP0_POSITION                   0x00000000
#define _IPC3_U1TXIP0_MASK                       0x00000001
#define _IPC3_U1TXIP0_LENGTH                     0x00000001

#define _IPC3_U1TXIP1_POSITION                   0x00000001
#define _IPC3_U1TXIP1_MASK                       0x00000002
#define _IPC3_U1TXIP1_LENGTH                     0x00000001

#define _IPC3_U1TXIP2_POSITION                   0x00000002
#define _IPC3_U1TXIP2_MASK                       0x00000004
#define _IPC3_U1TXIP2_LENGTH                     0x00000001

#define _IPC3_ADCIP0_POSITION                    0x00000004
#define _IPC3_ADCIP0_MASK                        0x00000010
#define _IPC3_ADCIP0_LENGTH                      0x00000001

#define _IPC3_ADCIP1_POSITION                    0x00000005
#define _IPC3_ADCIP1_MASK                        0x00000020
#define _IPC3_ADCIP1_LENGTH                      0x00000001

#define _IPC3_ADCIP2_POSITION                    0x00000006
#define _IPC3_ADCIP2_MASK                        0x00000040
#define _IPC3_ADCIP2_LENGTH                      0x00000001

#define _IPC3_NVMIP0_POSITION                    0x0000000C
#define _IPC3_NVMIP0_MASK                        0x00001000
#define _IPC3_NVMIP0_LENGTH                      0x00000001

#define _IPC3_NVMIP1_POSITION                    0x0000000D
#define _IPC3_NVMIP1_MASK                        0x00002000
#define _IPC3_NVMIP1_LENGTH                      0x00000001

#define _IPC3_NVMIP2_POSITION                    0x0000000E
#define _IPC3_NVMIP2_MASK                        0x00004000
#define _IPC3_NVMIP2_LENGTH                      0x00000001

#define _IPC4_SI2C1IP_POSITION                   0x00000000
#define _IPC4_SI2C1IP_MASK                       0x00000007
#define _IPC4_SI2C1IP_LENGTH                     0x00000003

#define _IPC4_MI2C1IP_POSITION                   0x00000004
#define _IPC4_MI2C1IP_MASK                       0x00000070
#define _IPC4_MI2C1IP_LENGTH                     0x00000003

#define _IPC4_AC1IP_POSITION                     0x00000008
#define _IPC4_AC1IP_MASK                         0x00000700
#define _IPC4_AC1IP_LENGTH                       0x00000003

#define _IPC4_CNIP_POSITION                      0x0000000C
#define _IPC4_CNIP_MASK                          0x00007000
#define _IPC4_CNIP_LENGTH                        0x00000003

#define _IPC4_SI2C1IP0_POSITION                  0x00000000
#define _IPC4_SI2C1IP0_MASK                      0x00000001
#define _IPC4_SI2C1IP0_LENGTH                    0x00000001

#define _IPC4_SI2C1IP1_POSITION                  0x00000001
#define _IPC4_SI2C1IP1_MASK                      0x00000002
#define _IPC4_SI2C1IP1_LENGTH                    0x00000001

#define _IPC4_SI2C1IP2_POSITION                  0x00000002
#define _IPC4_SI2C1IP2_MASK                      0x00000004
#define _IPC4_SI2C1IP2_LENGTH                    0x00000001

#define _IPC4_MI2C1IP0_POSITION                  0x00000004
#define _IPC4_MI2C1IP0_MASK                      0x00000010
#define _IPC4_MI2C1IP0_LENGTH                    0x00000001

#define _IPC4_MI2C1IP1_POSITION                  0x00000005
#define _IPC4_MI2C1IP1_MASK                      0x00000020
#define _IPC4_MI2C1IP1_LENGTH                    0x00000001

#define _IPC4_MI2C1IP2_POSITION                  0x00000006
#define _IPC4_MI2C1IP2_MASK                      0x00000040
#define _IPC4_MI2C1IP2_LENGTH                    0x00000001

#define _IPC4_AC1IP0_POSITION                    0x00000008
#define _IPC4_AC1IP0_MASK                        0x00000100
#define _IPC4_AC1IP0_LENGTH                      0x00000001

#define _IPC4_AC1IP1_POSITION                    0x00000009
#define _IPC4_AC1IP1_MASK                        0x00000200
#define _IPC4_AC1IP1_LENGTH                      0x00000001

#define _IPC4_AC1IP2_POSITION                    0x0000000A
#define _IPC4_AC1IP2_MASK                        0x00000400
#define _IPC4_AC1IP2_LENGTH                      0x00000001

#define _IPC4_CNIP0_POSITION                     0x0000000C
#define _IPC4_CNIP0_MASK                         0x00001000
#define _IPC4_CNIP0_LENGTH                       0x00000001

#define _IPC4_CNIP1_POSITION                     0x0000000D
#define _IPC4_CNIP1_MASK                         0x00002000
#define _IPC4_CNIP1_LENGTH                       0x00000001

#define _IPC4_CNIP2_POSITION                     0x0000000E
#define _IPC4_CNIP2_MASK                         0x00004000
#define _IPC4_CNIP2_LENGTH                       0x00000001

#define _IPC5_INT1IP_POSITION                    0x00000000
#define _IPC5_INT1IP_MASK                        0x00000007
#define _IPC5_INT1IP_LENGTH                      0x00000003

#define _IPC5_INT1IP0_POSITION                   0x00000000
#define _IPC5_INT1IP0_MASK                       0x00000001
#define _IPC5_INT1IP0_LENGTH                     0x00000001

#define _IPC5_INT1IP1_POSITION                   0x00000001
#define _IPC5_INT1IP1_MASK                       0x00000002
#define _IPC5_INT1IP1_LENGTH                     0x00000001

#define _IPC5_INT1IP2_POSITION                   0x00000002
#define _IPC5_INT1IP2_MASK                       0x00000004
#define _IPC5_INT1IP2_LENGTH                     0x00000001

#define _IPC7_INT2IP_POSITION                    0x00000004
#define _IPC7_INT2IP_MASK                        0x00000070
#define _IPC7_INT2IP_LENGTH                      0x00000003

#define _IPC7_INT2IP0_POSITION                   0x00000004
#define _IPC7_INT2IP0_MASK                       0x00000010
#define _IPC7_INT2IP0_LENGTH                     0x00000001

#define _IPC7_INT2IP1_POSITION                   0x00000005
#define _IPC7_INT2IP1_MASK                       0x00000020
#define _IPC7_INT2IP1_LENGTH                     0x00000001

#define _IPC7_INT2IP2_POSITION                   0x00000006
#define _IPC7_INT2IP2_MASK                       0x00000040
#define _IPC7_INT2IP2_LENGTH                     0x00000001

#define _IPC13_INT4IP_POSITION                   0x00000008
#define _IPC13_INT4IP_MASK                       0x00000700
#define _IPC13_INT4IP_LENGTH                     0x00000003

#define _IPC13_INT4IP0_POSITION                  0x00000008
#define _IPC13_INT4IP0_MASK                      0x00000100
#define _IPC13_INT4IP0_LENGTH                    0x00000001

#define _IPC13_INT4IP1_POSITION                  0x00000009
#define _IPC13_INT4IP1_MASK                      0x00000200
#define _IPC13_INT4IP1_LENGTH                    0x00000001

#define _IPC13_INT4IP2_POSITION                  0x0000000A
#define _IPC13_INT4IP2_MASK                      0x00000400
#define _IPC13_INT4IP2_LENGTH                    0x00000001

#define _IPC14_PSEMIP_POSITION                   0x00000004
#define _IPC14_PSEMIP_MASK                       0x00000070
#define _IPC14_PSEMIP_LENGTH                     0x00000003

#define _IPC14_PSEMIP0_POSITION                  0x00000004
#define _IPC14_PSEMIP0_MASK                      0x00000010
#define _IPC14_PSEMIP0_LENGTH                    0x00000001

#define _IPC14_PSEMIP1_POSITION                  0x00000005
#define _IPC14_PSEMIP1_MASK                      0x00000020
#define _IPC14_PSEMIP1_LENGTH                    0x00000001

#define _IPC14_PSEMIP2_POSITION                  0x00000006
#define _IPC14_PSEMIP2_MASK                      0x00000040
#define _IPC14_PSEMIP2_LENGTH                    0x00000001

#define _IPC16_U1EIP_POSITION                    0x00000004
#define _IPC16_U1EIP_MASK                        0x00000070
#define _IPC16_U1EIP_LENGTH                      0x00000003

#define _IPC16_U1EIP0_POSITION                   0x00000004
#define _IPC16_U1EIP0_MASK                       0x00000010
#define _IPC16_U1EIP0_LENGTH                     0x00000001

#define _IPC16_U1EIP1_POSITION                   0x00000005
#define _IPC16_U1EIP1_MASK                       0x00000020
#define _IPC16_U1EIP1_LENGTH                     0x00000001

#define _IPC16_U1EIP2_POSITION                   0x00000006
#define _IPC16_U1EIP2_MASK                       0x00000040
#define _IPC16_U1EIP2_LENGTH                     0x00000001

#define _IPC18_PSESIP_POSITION                   0x00000004
#define _IPC18_PSESIP_MASK                       0x00000070
#define _IPC18_PSESIP_LENGTH                     0x00000003

#define _IPC18_PSESIP0_POSITION                  0x00000004
#define _IPC18_PSESIP0_MASK                      0x00000010
#define _IPC18_PSESIP0_LENGTH                    0x00000001

#define _IPC18_PSESIP1_POSITION                  0x00000005
#define _IPC18_PSESIP1_MASK                      0x00000020
#define _IPC18_PSESIP1_LENGTH                    0x00000001

#define _IPC18_PSESIP2_POSITION                  0x00000006
#define _IPC18_PSESIP2_MASK                      0x00000040
#define _IPC18_PSESIP2_LENGTH                    0x00000001

#define _IPC23_PWM1IP_POSITION                   0x00000008
#define _IPC23_PWM1IP_MASK                       0x00000700
#define _IPC23_PWM1IP_LENGTH                     0x00000003

#define _IPC23_PWM2IP_POSITION                   0x0000000C
#define _IPC23_PWM2IP_MASK                       0x00007000
#define _IPC23_PWM2IP_LENGTH                     0x00000003

#define _IPC23_PWM1IP0_POSITION                  0x00000008
#define _IPC23_PWM1IP0_MASK                      0x00000100
#define _IPC23_PWM1IP0_LENGTH                    0x00000001

#define _IPC23_PWM1IP1_POSITION                  0x00000009
#define _IPC23_PWM1IP1_MASK                      0x00000200
#define _IPC23_PWM1IP1_LENGTH                    0x00000001

#define _IPC23_PWM1IP2_POSITION                  0x0000000A
#define _IPC23_PWM1IP2_MASK                      0x00000400
#define _IPC23_PWM1IP2_LENGTH                    0x00000001

#define _IPC23_PWM2IP0_POSITION                  0x0000000C
#define _IPC23_PWM2IP0_MASK                      0x00001000
#define _IPC23_PWM2IP0_LENGTH                    0x00000001

#define _IPC23_PWM2IP1_POSITION                  0x0000000D
#define _IPC23_PWM2IP1_MASK                      0x00002000
#define _IPC23_PWM2IP1_LENGTH                    0x00000001

#define _IPC23_PWM2IP2_POSITION                  0x0000000E
#define _IPC23_PWM2IP2_MASK                      0x00004000
#define _IPC23_PWM2IP2_LENGTH                    0x00000001

#define _IPC24_PWM3IP_POSITION                   0x00000000
#define _IPC24_PWM3IP_MASK                       0x00000007
#define _IPC24_PWM3IP_LENGTH                     0x00000003

#define _IPC24_PWM3IP0_POSITION                  0x00000000
#define _IPC24_PWM3IP0_MASK                      0x00000001
#define _IPC24_PWM3IP0_LENGTH                    0x00000001

#define _IPC24_PWM3IP1_POSITION                  0x00000001
#define _IPC24_PWM3IP1_MASK                      0x00000002
#define _IPC24_PWM3IP1_LENGTH                    0x00000001

#define _IPC24_PWM3IP2_POSITION                  0x00000002
#define _IPC24_PWM3IP2_MASK                      0x00000004
#define _IPC24_PWM3IP2_LENGTH                    0x00000001

#define _IPC25_AC2IP_POSITION                    0x0000000C
#define _IPC25_AC2IP_MASK                        0x00007000
#define _IPC25_AC2IP_LENGTH                      0x00000003

#define _IPC25_AC2IP0_POSITION                   0x0000000C
#define _IPC25_AC2IP0_MASK                       0x00001000
#define _IPC25_AC2IP0_LENGTH                     0x00000001

#define _IPC25_AC2IP1_POSITION                   0x0000000D
#define _IPC25_AC2IP1_MASK                       0x00002000
#define _IPC25_AC2IP1_LENGTH                     0x00000001

#define _IPC25_AC2IP2_POSITION                   0x0000000E
#define _IPC25_AC2IP2_MASK                       0x00004000
#define _IPC25_AC2IP2_LENGTH                     0x00000001

#define _IPC27_ADCAN0IP_POSITION                 0x00000008
#define _IPC27_ADCAN0IP_MASK                     0x00000700
#define _IPC27_ADCAN0IP_LENGTH                   0x00000003

#define _IPC27_ADCAN1IP_POSITION                 0x0000000C
#define _IPC27_ADCAN1IP_MASK                     0x00007000
#define _IPC27_ADCAN1IP_LENGTH                   0x00000003

#define _IPC27_ADCAN0IP0_POSITION                0x00000008
#define _IPC27_ADCAN0IP0_MASK                    0x00000100
#define _IPC27_ADCAN0IP0_LENGTH                  0x00000001

#define _IPC27_ADCAN0IP1_POSITION                0x00000009
#define _IPC27_ADCAN0IP1_MASK                    0x00000200
#define _IPC27_ADCAN0IP1_LENGTH                  0x00000001

#define _IPC27_ADCAN0IP2_POSITION                0x0000000A
#define _IPC27_ADCAN0IP2_MASK                    0x00000400
#define _IPC27_ADCAN0IP2_LENGTH                  0x00000001

#define _IPC27_ADCAN1IP0_POSITION                0x0000000C
#define _IPC27_ADCAN1IP0_MASK                    0x00001000
#define _IPC27_ADCAN1IP0_LENGTH                  0x00000001

#define _IPC27_ADCAN1IP1_POSITION                0x0000000D
#define _IPC27_ADCAN1IP1_MASK                    0x00002000
#define _IPC27_ADCAN1IP1_LENGTH                  0x00000001

#define _IPC27_ADCAN1IP2_POSITION                0x0000000E
#define _IPC27_ADCAN1IP2_MASK                    0x00004000
#define _IPC27_ADCAN1IP2_LENGTH                  0x00000001

#define _IPC28_ADCAN2IP_POSITION                 0x00000000
#define _IPC28_ADCAN2IP_MASK                     0x00000007
#define _IPC28_ADCAN2IP_LENGTH                   0x00000003

#define _IPC28_ADCAN3IP_POSITION                 0x00000004
#define _IPC28_ADCAN3IP_MASK                     0x00000070
#define _IPC28_ADCAN3IP_LENGTH                   0x00000003

#define _IPC28_ADCAN4IP_POSITION                 0x00000008
#define _IPC28_ADCAN4IP_MASK                     0x00000700
#define _IPC28_ADCAN4IP_LENGTH                   0x00000003

#define _IPC28_ADCAN5IP_POSITION                 0x0000000C
#define _IPC28_ADCAN5IP_MASK                     0x00007000
#define _IPC28_ADCAN5IP_LENGTH                   0x00000003

#define _IPC28_ADCAN2IP0_POSITION                0x00000000
#define _IPC28_ADCAN2IP0_MASK                    0x00000001
#define _IPC28_ADCAN2IP0_LENGTH                  0x00000001

#define _IPC28_ADCAN2IP1_POSITION                0x00000001
#define _IPC28_ADCAN2IP1_MASK                    0x00000002
#define _IPC28_ADCAN2IP1_LENGTH                  0x00000001

#define _IPC28_ADCAN2IP2_POSITION                0x00000002
#define _IPC28_ADCAN2IP2_MASK                    0x00000004
#define _IPC28_ADCAN2IP2_LENGTH                  0x00000001

#define _IPC28_ADCAN3IP0_POSITION                0x00000004
#define _IPC28_ADCAN3IP0_MASK                    0x00000010
#define _IPC28_ADCAN3IP0_LENGTH                  0x00000001

#define _IPC28_ADCAN3IP1_POSITION                0x00000005
#define _IPC28_ADCAN3IP1_MASK                    0x00000020
#define _IPC28_ADCAN3IP1_LENGTH                  0x00000001

#define _IPC28_ADCAN3IP2_POSITION                0x00000006
#define _IPC28_ADCAN3IP2_MASK                    0x00000040
#define _IPC28_ADCAN3IP2_LENGTH                  0x00000001

#define _IPC28_ADCAN4IP0_POSITION                0x00000008
#define _IPC28_ADCAN4IP0_MASK                    0x00000100
#define _IPC28_ADCAN4IP0_LENGTH                  0x00000001

#define _IPC28_ADCAN4IP1_POSITION                0x00000009
#define _IPC28_ADCAN4IP1_MASK                    0x00000200
#define _IPC28_ADCAN4IP1_LENGTH                  0x00000001

#define _IPC28_ADCAN4IP2_POSITION                0x0000000A
#define _IPC28_ADCAN4IP2_MASK                    0x00000400
#define _IPC28_ADCAN4IP2_LENGTH                  0x00000001

#define _IPC28_ADCAN5IP0_POSITION                0x0000000C
#define _IPC28_ADCAN5IP0_MASK                    0x00001000
#define _IPC28_ADCAN5IP0_LENGTH                  0x00000001

#define _IPC28_ADCAN5IP1_POSITION                0x0000000D
#define _IPC28_ADCAN5IP1_MASK                    0x00002000
#define _IPC28_ADCAN5IP1_LENGTH                  0x00000001

#define _IPC28_ADCAN5IP2_POSITION                0x0000000E
#define _IPC28_ADCAN5IP2_MASK                    0x00004000
#define _IPC28_ADCAN5IP2_LENGTH                  0x00000001

#define _IPC29_ADCAN6IP_POSITION                 0x00000000
#define _IPC29_ADCAN6IP_MASK                     0x00000007
#define _IPC29_ADCAN6IP_LENGTH                   0x00000003

#define _IPC29_ADCAN7IP_POSITION                 0x00000004
#define _IPC29_ADCAN7IP_MASK                     0x00000070
#define _IPC29_ADCAN7IP_LENGTH                   0x00000003

#define _IPC29_ADCAN6IP0_POSITION                0x00000000
#define _IPC29_ADCAN6IP0_MASK                    0x00000001
#define _IPC29_ADCAN6IP0_LENGTH                  0x00000001

#define _IPC29_ADCAN6IP1_POSITION                0x00000001
#define _IPC29_ADCAN6IP1_MASK                    0x00000002
#define _IPC29_ADCAN6IP1_LENGTH                  0x00000001

#define _IPC29_ADCAN6IP2_POSITION                0x00000002
#define _IPC29_ADCAN6IP2_MASK                    0x00000004
#define _IPC29_ADCAN6IP2_LENGTH                  0x00000001

#define _IPC29_ADCAN7IP0_POSITION                0x00000004
#define _IPC29_ADCAN7IP0_MASK                    0x00000010
#define _IPC29_ADCAN7IP0_LENGTH                  0x00000001

#define _IPC29_ADCAN7IP1_POSITION                0x00000005
#define _IPC29_ADCAN7IP1_MASK                    0x00000020
#define _IPC29_ADCAN7IP1_LENGTH                  0x00000001

#define _IPC29_ADCAN7IP2_POSITION                0x00000006
#define _IPC29_ADCAN7IP2_MASK                    0x00000040
#define _IPC29_ADCAN7IP2_LENGTH                  0x00000001

#define _IPC37_ADCAN8IP_POSITION                 0x0000000C
#define _IPC37_ADCAN8IP_MASK                     0x00007000
#define _IPC37_ADCAN8IP_LENGTH                   0x00000003

#define _IPC37_ADCAN8IP0_POSITION                0x0000000C
#define _IPC37_ADCAN8IP0_MASK                    0x00001000
#define _IPC37_ADCAN8IP0_LENGTH                  0x00000001

#define _IPC37_ADCAN8IP1_POSITION                0x0000000D
#define _IPC37_ADCAN8IP1_MASK                    0x00002000
#define _IPC37_ADCAN8IP1_LENGTH                  0x00000001

#define _IPC37_ADCAN8IP2_POSITION                0x0000000E
#define _IPC37_ADCAN8IP2_MASK                    0x00004000
#define _IPC37_ADCAN8IP2_LENGTH                  0x00000001

#define _IPC38_ADCAN9IP_POSITION                 0x00000000
#define _IPC38_ADCAN9IP_MASK                     0x00000007
#define _IPC38_ADCAN9IP_LENGTH                   0x00000003

#define _IPC38_ADCAN10IP_POSITION                0x00000004
#define _IPC38_ADCAN10IP_MASK                    0x00000070
#define _IPC38_ADCAN10IP_LENGTH                  0x00000003

#define _IPC38_ADCAN11IP_POSITION                0x00000008
#define _IPC38_ADCAN11IP_MASK                    0x00000700
#define _IPC38_ADCAN11IP_LENGTH                  0x00000003

#define _IPC38_ADCAN12IP_POSITION                0x0000000C
#define _IPC38_ADCAN12IP_MASK                    0x00007000
#define _IPC38_ADCAN12IP_LENGTH                  0x00000003

#define _IPC38_ADCAN9IP0_POSITION                0x00000000
#define _IPC38_ADCAN9IP0_MASK                    0x00000001
#define _IPC38_ADCAN9IP0_LENGTH                  0x00000001

#define _IPC38_ADCAN9IP1_POSITION                0x00000001
#define _IPC38_ADCAN9IP1_MASK                    0x00000002
#define _IPC38_ADCAN9IP1_LENGTH                  0x00000001

#define _IPC38_ADCAN9IP2_POSITION                0x00000002
#define _IPC38_ADCAN9IP2_MASK                    0x00000004
#define _IPC38_ADCAN9IP2_LENGTH                  0x00000001

#define _IPC38_ADCAN10IP0_POSITION               0x00000004
#define _IPC38_ADCAN10IP0_MASK                   0x00000010
#define _IPC38_ADCAN10IP0_LENGTH                 0x00000001

#define _IPC38_ADCAN10IP1_POSITION               0x00000005
#define _IPC38_ADCAN10IP1_MASK                   0x00000020
#define _IPC38_ADCAN10IP1_LENGTH                 0x00000001

#define _IPC38_ADCAN10IP2_POSITION               0x00000006
#define _IPC38_ADCAN10IP2_MASK                   0x00000040
#define _IPC38_ADCAN10IP2_LENGTH                 0x00000001

#define _IPC38_ADCAN11IP0_POSITION               0x00000008
#define _IPC38_ADCAN11IP0_MASK                   0x00000100
#define _IPC38_ADCAN11IP0_LENGTH                 0x00000001

#define _IPC38_ADCAN11IP1_POSITION               0x00000009
#define _IPC38_ADCAN11IP1_MASK                   0x00000200
#define _IPC38_ADCAN11IP1_LENGTH                 0x00000001

#define _IPC38_ADCAN11IP2_POSITION               0x0000000A
#define _IPC38_ADCAN11IP2_MASK                   0x00000400
#define _IPC38_ADCAN11IP2_LENGTH                 0x00000001

#define _IPC38_ADCAN12IP0_POSITION               0x0000000C
#define _IPC38_ADCAN12IP0_MASK                   0x00001000
#define _IPC38_ADCAN12IP0_LENGTH                 0x00000001

#define _IPC38_ADCAN12IP1_POSITION               0x0000000D
#define _IPC38_ADCAN12IP1_MASK                   0x00002000
#define _IPC38_ADCAN12IP1_LENGTH                 0x00000001

#define _IPC38_ADCAN12IP2_POSITION               0x0000000E
#define _IPC38_ADCAN12IP2_MASK                   0x00004000
#define _IPC38_ADCAN12IP2_LENGTH                 0x00000001

#define _IPC39_ADCAN13IP_POSITION                0x00000000
#define _IPC39_ADCAN13IP_MASK                    0x00000007
#define _IPC39_ADCAN13IP_LENGTH                  0x00000003

#define _IPC39_ADCAN14IP_POSITION                0x00000004
#define _IPC39_ADCAN14IP_MASK                    0x00000070
#define _IPC39_ADCAN14IP_LENGTH                  0x00000003

#define _IPC39_ADCAN13IP0_POSITION               0x00000000
#define _IPC39_ADCAN13IP0_MASK                   0x00000001
#define _IPC39_ADCAN13IP0_LENGTH                 0x00000001

#define _IPC39_ADCAN13IP1_POSITION               0x00000001
#define _IPC39_ADCAN13IP1_MASK                   0x00000002
#define _IPC39_ADCAN13IP1_LENGTH                 0x00000001

#define _IPC39_ADCAN13IP2_POSITION               0x00000002
#define _IPC39_ADCAN13IP2_MASK                   0x00000004
#define _IPC39_ADCAN13IP2_LENGTH                 0x00000001

#define _IPC39_ADCAN14IP0_POSITION               0x00000004
#define _IPC39_ADCAN14IP0_MASK                   0x00000010
#define _IPC39_ADCAN14IP0_LENGTH                 0x00000001

#define _IPC39_ADCAN14IP1_POSITION               0x00000005
#define _IPC39_ADCAN14IP1_MASK                   0x00000020
#define _IPC39_ADCAN14IP1_LENGTH                 0x00000001

#define _IPC39_ADCAN14IP2_POSITION               0x00000006
#define _IPC39_ADCAN14IP2_MASK                   0x00000040
#define _IPC39_ADCAN14IP2_LENGTH                 0x00000001

#define _IPC43_I2C1BCIP_POSITION                 0x00000004
#define _IPC43_I2C1BCIP_MASK                     0x00000070
#define _IPC43_I2C1BCIP_LENGTH                   0x00000003

#define _IPC43_I2C1BCIP0_POSITION                0x00000004
#define _IPC43_I2C1BCIP0_MASK                    0x00000010
#define _IPC43_I2C1BCIP0_LENGTH                  0x00000001

#define _IPC43_I2C1BCIP1_POSITION                0x00000005
#define _IPC43_I2C1BCIP1_MASK                    0x00000020
#define _IPC43_I2C1BCIP1_LENGTH                  0x00000001

#define _IPC43_I2C1BCIP2_POSITION                0x00000006
#define _IPC43_I2C1BCIP2_MASK                    0x00000040
#define _IPC43_I2C1BCIP2_LENGTH                  0x00000001

#define _IPC44_ADCFLTIP_POSITION                 0x00000000
#define _IPC44_ADCFLTIP_MASK                     0x00000007
#define _IPC44_ADCFLTIP_LENGTH                   0x00000003

#define _IPC44_ADCMP1IP_POSITION                 0x00000004
#define _IPC44_ADCMP1IP_MASK                     0x00000070
#define _IPC44_ADCMP1IP_LENGTH                   0x00000003

#define _IPC44_ADCMP2IP_POSITION                 0x00000008
#define _IPC44_ADCMP2IP_MASK                     0x00000700
#define _IPC44_ADCMP2IP_LENGTH                   0x00000003

#define _IPC44_ADCFLTR1IP_POSITION               0x0000000C
#define _IPC44_ADCFLTR1IP_MASK                   0x00007000
#define _IPC44_ADCFLTR1IP_LENGTH                 0x00000003

#define _IPC44_ADCFLTIP0_POSITION                0x00000000
#define _IPC44_ADCFLTIP0_MASK                    0x00000001
#define _IPC44_ADCFLTIP0_LENGTH                  0x00000001

#define _IPC44_ADCFLTIP1_POSITION                0x00000001
#define _IPC44_ADCFLTIP1_MASK                    0x00000002
#define _IPC44_ADCFLTIP1_LENGTH                  0x00000001

#define _IPC44_ADCFLTIP2_POSITION                0x00000002
#define _IPC44_ADCFLTIP2_MASK                    0x00000004
#define _IPC44_ADCFLTIP2_LENGTH                  0x00000001

#define _IPC44_ADCMP1IP0_POSITION                0x00000004
#define _IPC44_ADCMP1IP0_MASK                    0x00000010
#define _IPC44_ADCMP1IP0_LENGTH                  0x00000001

#define _IPC44_ADCMP1IP1_POSITION                0x00000005
#define _IPC44_ADCMP1IP1_MASK                    0x00000020
#define _IPC44_ADCMP1IP1_LENGTH                  0x00000001

#define _IPC44_ADCMP1IP2_POSITION                0x00000006
#define _IPC44_ADCMP1IP2_MASK                    0x00000040
#define _IPC44_ADCMP1IP2_LENGTH                  0x00000001

#define _IPC44_ADCMP2IP0_POSITION                0x00000008
#define _IPC44_ADCMP2IP0_MASK                    0x00000100
#define _IPC44_ADCMP2IP0_LENGTH                  0x00000001

#define _IPC44_ADCMP2IP1_POSITION                0x00000009
#define _IPC44_ADCMP2IP1_MASK                    0x00000200
#define _IPC44_ADCMP2IP1_LENGTH                  0x00000001

#define _IPC44_ADCMP2IP2_POSITION                0x0000000A
#define _IPC44_ADCMP2IP2_MASK                    0x00000400
#define _IPC44_ADCMP2IP2_LENGTH                  0x00000001

#define _IPC44_ADCFLTR1IP0_POSITION              0x0000000C
#define _IPC44_ADCFLTR1IP0_MASK                  0x00001000
#define _IPC44_ADCFLTR1IP0_LENGTH                0x00000001

#define _IPC44_ADCFLTR1IP1_POSITION              0x0000000D
#define _IPC44_ADCFLTR1IP1_MASK                  0x00002000
#define _IPC44_ADCFLTR1IP1_LENGTH                0x00000001

#define _IPC44_ADCFLTR1IP2_POSITION              0x0000000E
#define _IPC44_ADCFLTR1IP2_MASK                  0x00004000
#define _IPC44_ADCFLTR1IP2_LENGTH                0x00000001

#define _IPC46_ADCC0EIP_POSITION                 0x0000000C
#define _IPC46_ADCC0EIP_MASK                     0x00007000
#define _IPC46_ADCC0EIP_LENGTH                   0x00000003

#define _IPC46_ADCC0EIP0_POSITION                0x0000000C
#define _IPC46_ADCC0EIP0_MASK                    0x00001000
#define _IPC46_ADCC0EIP0_LENGTH                  0x00000001

#define _IPC46_ADCC0EIP1_POSITION                0x0000000D
#define _IPC46_ADCC0EIP1_MASK                    0x00002000
#define _IPC46_ADCC0EIP1_LENGTH                  0x00000001

#define _IPC46_ADCC0EIP2_POSITION                0x0000000E
#define _IPC46_ADCC0EIP2_MASK                    0x00004000
#define _IPC46_ADCC0EIP2_LENGTH                  0x00000001

#define _IPC47_ADCC1EIP_POSITION                 0x00000000
#define _IPC47_ADCC1EIP_MASK                     0x00000007
#define _IPC47_ADCC1EIP_LENGTH                   0x00000003

#define _IPC47_ADCC1EIP0_POSITION                0x00000000
#define _IPC47_ADCC1EIP0_MASK                    0x00000001
#define _IPC47_ADCC1EIP0_LENGTH                  0x00000001

#define _IPC47_ADCC1EIP1_POSITION                0x00000001
#define _IPC47_ADCC1EIP1_MASK                    0x00000002
#define _IPC47_ADCC1EIP1_LENGTH                  0x00000001

#define _IPC47_ADCC1EIP2_POSITION                0x00000002
#define _IPC47_ADCC1EIP2_MASK                    0x00000004
#define _IPC47_ADCC1EIP2_LENGTH                  0x00000001

#define _INTCON1_OSCFAIL_POSITION                0x00000001
#define _INTCON1_OSCFAIL_MASK                    0x00000002
#define _INTCON1_OSCFAIL_LENGTH                  0x00000001

#define _INTCON1_STKERR_POSITION                 0x00000002
#define _INTCON1_STKERR_MASK                     0x00000004
#define _INTCON1_STKERR_LENGTH                   0x00000001

#define _INTCON1_ADDRERR_POSITION                0x00000003
#define _INTCON1_ADDRERR_MASK                    0x00000008
#define _INTCON1_ADDRERR_LENGTH                  0x00000001

#define _INTCON1_MATHERR_POSITION                0x00000004
#define _INTCON1_MATHERR_MASK                    0x00000010
#define _INTCON1_MATHERR_LENGTH                  0x00000001

#define _INTCON1_DIV0ERR_POSITION                0x00000006
#define _INTCON1_DIV0ERR_MASK                    0x00000040
#define _INTCON1_DIV0ERR_LENGTH                  0x00000001

#define _INTCON1_SFTACERR_POSITION               0x00000007
#define _INTCON1_SFTACERR_MASK                   0x00000080
#define _INTCON1_SFTACERR_LENGTH                 0x00000001

#define _INTCON1_COVTE_POSITION                  0x00000008
#define _INTCON1_COVTE_MASK                      0x00000100
#define _INTCON1_COVTE_LENGTH                    0x00000001

#define _INTCON1_OVBTE_POSITION                  0x00000009
#define _INTCON1_OVBTE_MASK                      0x00000200
#define _INTCON1_OVBTE_LENGTH                    0x00000001

#define _INTCON1_OVATE_POSITION                  0x0000000A
#define _INTCON1_OVATE_MASK                      0x00000400
#define _INTCON1_OVATE_LENGTH                    0x00000001

#define _INTCON1_COVBERR_POSITION                0x0000000B
#define _INTCON1_COVBERR_MASK                    0x00000800
#define _INTCON1_COVBERR_LENGTH                  0x00000001

#define _INTCON1_COVAERR_POSITION                0x0000000C
#define _INTCON1_COVAERR_MASK                    0x00001000
#define _INTCON1_COVAERR_LENGTH                  0x00000001

#define _INTCON1_OVBERR_POSITION                 0x0000000D
#define _INTCON1_OVBERR_MASK                     0x00002000
#define _INTCON1_OVBERR_LENGTH                   0x00000001

#define _INTCON1_OVAERR_POSITION                 0x0000000E
#define _INTCON1_OVAERR_MASK                     0x00004000
#define _INTCON1_OVAERR_LENGTH                   0x00000001

#define _INTCON1_NSTDIS_POSITION                 0x0000000F
#define _INTCON1_NSTDIS_MASK                     0x00008000
#define _INTCON1_NSTDIS_LENGTH                   0x00000001

#define _INTCON2_INT0EP_POSITION                 0x00000000
#define _INTCON2_INT0EP_MASK                     0x00000001
#define _INTCON2_INT0EP_LENGTH                   0x00000001

#define _INTCON2_INT1EP_POSITION                 0x00000001
#define _INTCON2_INT1EP_MASK                     0x00000002
#define _INTCON2_INT1EP_LENGTH                   0x00000001

#define _INTCON2_INT2EP_POSITION                 0x00000002
#define _INTCON2_INT2EP_MASK                     0x00000004
#define _INTCON2_INT2EP_LENGTH                   0x00000001

#define _INTCON2_INT4EP_POSITION                 0x00000004
#define _INTCON2_INT4EP_MASK                     0x00000010
#define _INTCON2_INT4EP_LENGTH                   0x00000001

#define _INTCON2_AIVTEN_POSITION                 0x00000008
#define _INTCON2_AIVTEN_MASK                     0x00000100
#define _INTCON2_AIVTEN_LENGTH                   0x00000001

#define _INTCON2_SWTRAP_POSITION                 0x0000000D
#define _INTCON2_SWTRAP_MASK                     0x00002000
#define _INTCON2_SWTRAP_LENGTH                   0x00000001

#define _INTCON2_DISI_POSITION                   0x0000000E
#define _INTCON2_DISI_MASK                       0x00004000
#define _INTCON2_DISI_LENGTH                     0x00000001

#define _INTCON2_GIE_POSITION                    0x0000000F
#define _INTCON2_GIE_MASK                        0x00008000
#define _INTCON2_GIE_LENGTH                      0x00000001

#define _INTCON3_APLL_POSITION                   0x00000000
#define _INTCON3_APLL_MASK                       0x00000001
#define _INTCON3_APLL_LENGTH                     0x00000001

#define _INTCON3_DOOVR_POSITION                  0x00000004
#define _INTCON3_DOOVR_MASK                      0x00000010
#define _INTCON3_DOOVR_LENGTH                    0x00000001

#define _INTCON3_NAE_POSITION                    0x00000008
#define _INTCON3_NAE_MASK                        0x00000100
#define _INTCON3_NAE_LENGTH                      0x00000001

#define _INTCON4_SGHT_POSITION                   0x00000000
#define _INTCON4_SGHT_MASK                       0x00000001
#define _INTCON4_SGHT_LENGTH                     0x00000001

#define _INTTREG_VECNUM_POSITION                 0x00000000
#define _INTTREG_VECNUM_MASK                     0x000000FF
#define _INTTREG_VECNUM_LENGTH                   0x00000008

#define _INTTREG_ILR_POSITION                    0x00000008
#define _INTTREG_ILR_MASK                        0x00000F00
#define _INTTREG_ILR_LENGTH                      0x00000004

#define _INTTREG_VECNUM0_POSITION                0x00000000
#define _INTTREG_VECNUM0_MASK                    0x00000001
#define _INTTREG_VECNUM0_LENGTH                  0x00000001

#define _INTTREG_VECNUM1_POSITION                0x00000001
#define _INTTREG_VECNUM1_MASK                    0x00000002
#define _INTTREG_VECNUM1_LENGTH                  0x00000001

#define _INTTREG_VECNUM2_POSITION                0x00000002
#define _INTTREG_VECNUM2_MASK                    0x00000004
#define _INTTREG_VECNUM2_LENGTH                  0x00000001

#define _INTTREG_VECNUM3_POSITION                0x00000003
#define _INTTREG_VECNUM3_MASK                    0x00000008
#define _INTTREG_VECNUM3_LENGTH                  0x00000001

#define _INTTREG_VECNUM4_POSITION                0x00000004
#define _INTTREG_VECNUM4_MASK                    0x00000010
#define _INTTREG_VECNUM4_LENGTH                  0x00000001

#define _INTTREG_VECNUM5_POSITION                0x00000005
#define _INTTREG_VECNUM5_MASK                    0x00000020
#define _INTTREG_VECNUM5_LENGTH                  0x00000001

#define _INTTREG_VECNUM6_POSITION                0x00000006
#define _INTTREG_VECNUM6_MASK                    0x00000040
#define _INTTREG_VECNUM6_LENGTH                  0x00000001

#define _INTTREG_VECNUM7_POSITION                0x00000007
#define _INTTREG_VECNUM7_MASK                    0x00000080
#define _INTTREG_VECNUM7_LENGTH                  0x00000001

#define _INTTREG_ILR0_POSITION                   0x00000008
#define _INTTREG_ILR0_MASK                       0x00000100
#define _INTTREG_ILR0_LENGTH                     0x00000001

#define _INTTREG_ILR1_POSITION                   0x00000009
#define _INTTREG_ILR1_MASK                       0x00000200
#define _INTTREG_ILR1_LENGTH                     0x00000001

#define _INTTREG_ILR2_POSITION                   0x0000000A
#define _INTTREG_ILR2_MASK                       0x00000400
#define _INTTREG_ILR2_LENGTH                     0x00000001

#define _INTTREG_ILR3_POSITION                   0x0000000B
#define _INTTREG_ILR3_MASK                       0x00000800
#define _INTTREG_ILR3_LENGTH                     0x00000001

#define _OC1CON1_OCM_POSITION                    0x00000000
#define _OC1CON1_OCM_MASK                        0x00000007
#define _OC1CON1_OCM_LENGTH                      0x00000003

#define _OC1CON1_TRIGMODE_POSITION               0x00000003
#define _OC1CON1_TRIGMODE_MASK                   0x00000008
#define _OC1CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC1CON1_OCFLTA_POSITION                 0x00000004
#define _OC1CON1_OCFLTA_MASK                     0x00000010
#define _OC1CON1_OCFLTA_LENGTH                   0x00000001

#define _OC1CON1_ENFLTA_POSITION                 0x00000007
#define _OC1CON1_ENFLTA_MASK                     0x00000080
#define _OC1CON1_ENFLTA_LENGTH                   0x00000001

#define _OC1CON1_OCTSEL_POSITION                 0x0000000A
#define _OC1CON1_OCTSEL_MASK                     0x00001C00
#define _OC1CON1_OCTSEL_LENGTH                   0x00000003

#define _OC1CON1_OCSIDL_POSITION                 0x0000000D
#define _OC1CON1_OCSIDL_MASK                     0x00002000
#define _OC1CON1_OCSIDL_LENGTH                   0x00000001

#define _OC1CON1_OCM0_POSITION                   0x00000000
#define _OC1CON1_OCM0_MASK                       0x00000001
#define _OC1CON1_OCM0_LENGTH                     0x00000001

#define _OC1CON1_OCM1_POSITION                   0x00000001
#define _OC1CON1_OCM1_MASK                       0x00000002
#define _OC1CON1_OCM1_LENGTH                     0x00000001

#define _OC1CON1_OCM2_POSITION                   0x00000002
#define _OC1CON1_OCM2_MASK                       0x00000004
#define _OC1CON1_OCM2_LENGTH                     0x00000001

#define _OC1CON1_OCFLT_POSITION                  0x00000004
#define _OC1CON1_OCFLT_MASK                      0x00000070
#define _OC1CON1_OCFLT_LENGTH                    0x00000003

#define _OC1CON1_ENFLT_POSITION                  0x00000007
#define _OC1CON1_ENFLT_MASK                      0x00000380
#define _OC1CON1_ENFLT_LENGTH                    0x00000003

#define _OC1CON1_OCTSEL0_POSITION                0x0000000A
#define _OC1CON1_OCTSEL0_MASK                    0x00000400
#define _OC1CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC1CON1_OCTSEL1_POSITION                0x0000000B
#define _OC1CON1_OCTSEL1_MASK                    0x00000800
#define _OC1CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC1CON1_OCTSEL2_POSITION                0x0000000C
#define _OC1CON1_OCTSEL2_MASK                    0x00001000
#define _OC1CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC1CON1_OCFLT0_POSITION                 0x00000004
#define _OC1CON1_OCFLT0_MASK                     0x00000010
#define _OC1CON1_OCFLT0_LENGTH                   0x00000001

#define _OC1CON1_ENFLT0_POSITION                 0x00000007
#define _OC1CON1_ENFLT0_MASK                     0x00000080
#define _OC1CON1_ENFLT0_LENGTH                   0x00000001

#define _OC1CON2_SYNCSEL_POSITION                0x00000000
#define _OC1CON2_SYNCSEL_MASK                    0x0000001F
#define _OC1CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC1CON2_OCTRIS_POSITION                 0x00000005
#define _OC1CON2_OCTRIS_MASK                     0x00000020
#define _OC1CON2_OCTRIS_LENGTH                   0x00000001

#define _OC1CON2_TRIGSTAT_POSITION               0x00000006
#define _OC1CON2_TRIGSTAT_MASK                   0x00000040
#define _OC1CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC1CON2_OCTRIG_POSITION                 0x00000007
#define _OC1CON2_OCTRIG_MASK                     0x00000080
#define _OC1CON2_OCTRIG_LENGTH                   0x00000001

#define _OC1CON2_OC32_POSITION                   0x00000008
#define _OC1CON2_OC32_MASK                       0x00000100
#define _OC1CON2_OC32_LENGTH                     0x00000001

#define _OC1CON2_OCINV_POSITION                  0x0000000C
#define _OC1CON2_OCINV_MASK                      0x00001000
#define _OC1CON2_OCINV_LENGTH                    0x00000001

#define _OC1CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC1CON2_FLTTRIEN_MASK                   0x00002000
#define _OC1CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC1CON2_FLTOUT_POSITION                 0x0000000E
#define _OC1CON2_FLTOUT_MASK                     0x00004000
#define _OC1CON2_FLTOUT_LENGTH                   0x00000001

#define _OC1CON2_FLTMD_POSITION                  0x0000000F
#define _OC1CON2_FLTMD_MASK                      0x00008000
#define _OC1CON2_FLTMD_LENGTH                    0x00000001

#define _OC1CON2_SYNCSEL0_POSITION               0x00000000
#define _OC1CON2_SYNCSEL0_MASK                   0x00000001
#define _OC1CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL1_POSITION               0x00000001
#define _OC1CON2_SYNCSEL1_MASK                   0x00000002
#define _OC1CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL2_POSITION               0x00000002
#define _OC1CON2_SYNCSEL2_MASK                   0x00000004
#define _OC1CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL3_POSITION               0x00000003
#define _OC1CON2_SYNCSEL3_MASK                   0x00000008
#define _OC1CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC1CON2_SYNCSEL4_POSITION               0x00000004
#define _OC1CON2_SYNCSEL4_MASK                   0x00000010
#define _OC1CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC1CON2_FLTMODE_POSITION                0x0000000E
#define _OC1CON2_FLTMODE_MASK                    0x00004000
#define _OC1CON2_FLTMODE_LENGTH                  0x00000001

#define _PTCON_SEVTPS_POSITION                   0x00000000
#define _PTCON_SEVTPS_MASK                       0x0000000F
#define _PTCON_SEVTPS_LENGTH                     0x00000004

#define _PTCON_SYNCSRC_POSITION                  0x00000004
#define _PTCON_SYNCSRC_MASK                      0x00000070
#define _PTCON_SYNCSRC_LENGTH                    0x00000003

#define _PTCON_SYNCEN_POSITION                   0x00000007
#define _PTCON_SYNCEN_MASK                       0x00000080
#define _PTCON_SYNCEN_LENGTH                     0x00000001

#define _PTCON_SYNCOEN_POSITION                  0x00000008
#define _PTCON_SYNCOEN_MASK                      0x00000100
#define _PTCON_SYNCOEN_LENGTH                    0x00000001

#define _PTCON_SYNCPOL_POSITION                  0x00000009
#define _PTCON_SYNCPOL_MASK                      0x00000200
#define _PTCON_SYNCPOL_LENGTH                    0x00000001

#define _PTCON_EIPU_POSITION                     0x0000000A
#define _PTCON_EIPU_MASK                         0x00000400
#define _PTCON_EIPU_LENGTH                       0x00000001

#define _PTCON_SEIEN_POSITION                    0x0000000B
#define _PTCON_SEIEN_MASK                        0x00000800
#define _PTCON_SEIEN_LENGTH                      0x00000001

#define _PTCON_SESTAT_POSITION                   0x0000000C
#define _PTCON_SESTAT_MASK                       0x00001000
#define _PTCON_SESTAT_LENGTH                     0x00000001

#define _PTCON_PTSIDL_POSITION                   0x0000000D
#define _PTCON_PTSIDL_MASK                       0x00002000
#define _PTCON_PTSIDL_LENGTH                     0x00000001

#define _PTCON_PTEN_POSITION                     0x0000000F
#define _PTCON_PTEN_MASK                         0x00008000
#define _PTCON_PTEN_LENGTH                       0x00000001

#define _PTCON_SEVTPS0_POSITION                  0x00000000
#define _PTCON_SEVTPS0_MASK                      0x00000001
#define _PTCON_SEVTPS0_LENGTH                    0x00000001

#define _PTCON_SEVTPS1_POSITION                  0x00000001
#define _PTCON_SEVTPS1_MASK                      0x00000002
#define _PTCON_SEVTPS1_LENGTH                    0x00000001

#define _PTCON_SEVTPS2_POSITION                  0x00000002
#define _PTCON_SEVTPS2_MASK                      0x00000004
#define _PTCON_SEVTPS2_LENGTH                    0x00000001

#define _PTCON_SEVTPS3_POSITION                  0x00000003
#define _PTCON_SEVTPS3_MASK                      0x00000008
#define _PTCON_SEVTPS3_LENGTH                    0x00000001

#define _PTCON_SYNCSRC0_POSITION                 0x00000004
#define _PTCON_SYNCSRC0_MASK                     0x00000010
#define _PTCON_SYNCSRC0_LENGTH                   0x00000001

#define _PTCON_SYNCSRC1_POSITION                 0x00000005
#define _PTCON_SYNCSRC1_MASK                     0x00000020
#define _PTCON_SYNCSRC1_LENGTH                   0x00000001

#define _PTCON_SYNCSRC2_POSITION                 0x00000006
#define _PTCON_SYNCSRC2_MASK                     0x00000040
#define _PTCON_SYNCSRC2_LENGTH                   0x00000001

#define _PTCON2_PCLKDIV_POSITION                 0x00000000
#define _PTCON2_PCLKDIV_MASK                     0x00000007
#define _PTCON2_PCLKDIV_LENGTH                   0x00000003

#define _PTCON2_PCLKDIV0_POSITION                0x00000000
#define _PTCON2_PCLKDIV0_MASK                    0x00000001
#define _PTCON2_PCLKDIV0_LENGTH                  0x00000001

#define _PTCON2_PCLKDIV1_POSITION                0x00000001
#define _PTCON2_PCLKDIV1_MASK                    0x00000002
#define _PTCON2_PCLKDIV1_LENGTH                  0x00000001

#define _PTCON2_PCLKDIV2_POSITION                0x00000002
#define _PTCON2_PCLKDIV2_MASK                    0x00000004
#define _PTCON2_PCLKDIV2_LENGTH                  0x00000001

#define _SEVTCMP_SEVTCMP_POSITION                0x00000003
#define _SEVTCMP_SEVTCMP_MASK                    0x0000FFF8
#define _SEVTCMP_SEVTCMP_LENGTH                  0x0000000D

#define _STCON_SEVTPS_POSITION                   0x00000000
#define _STCON_SEVTPS_MASK                       0x0000000F
#define _STCON_SEVTPS_LENGTH                     0x00000004

#define _STCON_SYNCSRC_POSITION                  0x00000004
#define _STCON_SYNCSRC_MASK                      0x00000070
#define _STCON_SYNCSRC_LENGTH                    0x00000003

#define _STCON_SYNCEN_POSITION                   0x00000007
#define _STCON_SYNCEN_MASK                       0x00000080
#define _STCON_SYNCEN_LENGTH                     0x00000001

#define _STCON_SYNCOEN_POSITION                  0x00000008
#define _STCON_SYNCOEN_MASK                      0x00000100
#define _STCON_SYNCOEN_LENGTH                    0x00000001

#define _STCON_SYNCPOL_POSITION                  0x00000009
#define _STCON_SYNCPOL_MASK                      0x00000200
#define _STCON_SYNCPOL_LENGTH                    0x00000001

#define _STCON_EIPU_POSITION                     0x0000000A
#define _STCON_EIPU_MASK                         0x00000400
#define _STCON_EIPU_LENGTH                       0x00000001

#define _STCON_SEIEN_POSITION                    0x0000000B
#define _STCON_SEIEN_MASK                        0x00000800
#define _STCON_SEIEN_LENGTH                      0x00000001

#define _STCON_SESTAT_POSITION                   0x0000000C
#define _STCON_SESTAT_MASK                       0x00001000
#define _STCON_SESTAT_LENGTH                     0x00000001

#define _STCON_SEVTPS0_POSITION                  0x00000000
#define _STCON_SEVTPS0_MASK                      0x00000001
#define _STCON_SEVTPS0_LENGTH                    0x00000001

#define _STCON_SEVTPS1_POSITION                  0x00000001
#define _STCON_SEVTPS1_MASK                      0x00000002
#define _STCON_SEVTPS1_LENGTH                    0x00000001

#define _STCON_SEVTPS2_POSITION                  0x00000002
#define _STCON_SEVTPS2_MASK                      0x00000004
#define _STCON_SEVTPS2_LENGTH                    0x00000001

#define _STCON_SEVTPS3_POSITION                  0x00000003
#define _STCON_SEVTPS3_MASK                      0x00000008
#define _STCON_SEVTPS3_LENGTH                    0x00000001

#define _STCON_SYNCSRC0_POSITION                 0x00000004
#define _STCON_SYNCSRC0_MASK                     0x00000010
#define _STCON_SYNCSRC0_LENGTH                   0x00000001

#define _STCON_SYNCSRC1_POSITION                 0x00000005
#define _STCON_SYNCSRC1_MASK                     0x00000020
#define _STCON_SYNCSRC1_LENGTH                   0x00000001

#define _STCON_SYNCSRC2_POSITION                 0x00000006
#define _STCON_SYNCSRC2_MASK                     0x00000040
#define _STCON_SYNCSRC2_LENGTH                   0x00000001

#define _STCON2_PCLKDIV_POSITION                 0x00000000
#define _STCON2_PCLKDIV_MASK                     0x00000007
#define _STCON2_PCLKDIV_LENGTH                   0x00000003

#define _STCON2_PCLKDIV0_POSITION                0x00000000
#define _STCON2_PCLKDIV0_MASK                    0x00000001
#define _STCON2_PCLKDIV0_LENGTH                  0x00000001

#define _STCON2_PCLKDIV1_POSITION                0x00000001
#define _STCON2_PCLKDIV1_MASK                    0x00000002
#define _STCON2_PCLKDIV1_LENGTH                  0x00000001

#define _STCON2_PCLKDIV2_POSITION                0x00000002
#define _STCON2_PCLKDIV2_MASK                    0x00000004
#define _STCON2_PCLKDIV2_LENGTH                  0x00000001

#define _SSEVTCMP_SSEVTCMP_POSITION              0x00000003
#define _SSEVTCMP_SSEVTCMP_MASK                  0x0000FFF8
#define _SSEVTCMP_SSEVTCMP_LENGTH                0x0000000D

#define _SSEVTCMP_SSEVTCMP0_POSITION             0x00000003
#define _SSEVTCMP_SSEVTCMP0_MASK                 0x00000008
#define _SSEVTCMP_SSEVTCMP0_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP1_POSITION             0x00000004
#define _SSEVTCMP_SSEVTCMP1_MASK                 0x00000010
#define _SSEVTCMP_SSEVTCMP1_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP2_POSITION             0x00000005
#define _SSEVTCMP_SSEVTCMP2_MASK                 0x00000020
#define _SSEVTCMP_SSEVTCMP2_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP3_POSITION             0x00000006
#define _SSEVTCMP_SSEVTCMP3_MASK                 0x00000040
#define _SSEVTCMP_SSEVTCMP3_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP4_POSITION             0x00000007
#define _SSEVTCMP_SSEVTCMP4_MASK                 0x00000080
#define _SSEVTCMP_SSEVTCMP4_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP5_POSITION             0x00000008
#define _SSEVTCMP_SSEVTCMP5_MASK                 0x00000100
#define _SSEVTCMP_SSEVTCMP5_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP6_POSITION             0x00000009
#define _SSEVTCMP_SSEVTCMP6_MASK                 0x00000200
#define _SSEVTCMP_SSEVTCMP6_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP7_POSITION             0x0000000A
#define _SSEVTCMP_SSEVTCMP7_MASK                 0x00000400
#define _SSEVTCMP_SSEVTCMP7_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP8_POSITION             0x0000000B
#define _SSEVTCMP_SSEVTCMP8_MASK                 0x00000800
#define _SSEVTCMP_SSEVTCMP8_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP9_POSITION             0x0000000C
#define _SSEVTCMP_SSEVTCMP9_MASK                 0x00001000
#define _SSEVTCMP_SSEVTCMP9_LENGTH               0x00000001

#define _SSEVTCMP_SSEVTCMP10_POSITION            0x0000000D
#define _SSEVTCMP_SSEVTCMP10_MASK                0x00002000
#define _SSEVTCMP_SSEVTCMP10_LENGTH              0x00000001

#define _SSEVTCMP_SSEVTCMP11_POSITION            0x0000000E
#define _SSEVTCMP_SSEVTCMP11_MASK                0x00004000
#define _SSEVTCMP_SSEVTCMP11_LENGTH              0x00000001

#define _SSEVTCMP_SSEVTCMP12_POSITION            0x0000000F
#define _SSEVTCMP_SSEVTCMP12_MASK                0x00008000
#define _SSEVTCMP_SSEVTCMP12_LENGTH              0x00000001

#define _CHOP_CHOPCLK_POSITION                   0x00000003
#define _CHOP_CHOPCLK_MASK                       0x000003F8
#define _CHOP_CHOPCLK_LENGTH                     0x00000007

#define _CHOP_CHPCLKEN_POSITION                  0x0000000F
#define _CHOP_CHPCLKEN_MASK                      0x00008000
#define _CHOP_CHPCLKEN_LENGTH                    0x00000001

#define _CHOP_CHOPCLK3_POSITION                  0x00000003
#define _CHOP_CHOPCLK3_MASK                      0x00000008
#define _CHOP_CHOPCLK3_LENGTH                    0x00000001

#define _CHOP_CHOPCLK4_POSITION                  0x00000004
#define _CHOP_CHOPCLK4_MASK                      0x00000010
#define _CHOP_CHOPCLK4_LENGTH                    0x00000001

#define _CHOP_CHOPCLK5_POSITION                  0x00000005
#define _CHOP_CHOPCLK5_MASK                      0x00000020
#define _CHOP_CHOPCLK5_LENGTH                    0x00000001

#define _CHOP_CHOPCLK6_POSITION                  0x00000006
#define _CHOP_CHOPCLK6_MASK                      0x00000040
#define _CHOP_CHOPCLK6_LENGTH                    0x00000001

#define _CHOP_CHOPCLK7_POSITION                  0x00000007
#define _CHOP_CHOPCLK7_MASK                      0x00000080
#define _CHOP_CHOPCLK7_LENGTH                    0x00000001

#define _CHOP_CHOPCLK8_POSITION                  0x00000008
#define _CHOP_CHOPCLK8_MASK                      0x00000100
#define _CHOP_CHOPCLK8_LENGTH                    0x00000001

#define _CHOP_CHOPCLK9_POSITION                  0x00000009
#define _CHOP_CHOPCLK9_MASK                      0x00000200
#define _CHOP_CHOPCLK9_LENGTH                    0x00000001

#define _PWMCON1_IUE_POSITION                    0x00000000
#define _PWMCON1_IUE_MASK                        0x00000001
#define _PWMCON1_IUE_LENGTH                      0x00000001

#define _PWMCON1_XPRES_POSITION                  0x00000001
#define _PWMCON1_XPRES_MASK                      0x00000002
#define _PWMCON1_XPRES_LENGTH                    0x00000001

#define _PWMCON1_CAM_POSITION                    0x00000002
#define _PWMCON1_CAM_MASK                        0x00000004
#define _PWMCON1_CAM_LENGTH                      0x00000001

#define _PWMCON1_MTBS_POSITION                   0x00000003
#define _PWMCON1_MTBS_MASK                       0x00000008
#define _PWMCON1_MTBS_LENGTH                     0x00000001

#define _PWMCON1_DTC_POSITION                    0x00000006
#define _PWMCON1_DTC_MASK                        0x000000C0
#define _PWMCON1_DTC_LENGTH                      0x00000002

#define _PWMCON1_MDCS_POSITION                   0x00000008
#define _PWMCON1_MDCS_MASK                       0x00000100
#define _PWMCON1_MDCS_LENGTH                     0x00000001

#define _PWMCON1_ITB_POSITION                    0x00000009
#define _PWMCON1_ITB_MASK                        0x00000200
#define _PWMCON1_ITB_LENGTH                      0x00000001

#define _PWMCON1_TRGIEN_POSITION                 0x0000000A
#define _PWMCON1_TRGIEN_MASK                     0x00000400
#define _PWMCON1_TRGIEN_LENGTH                   0x00000001

#define _PWMCON1_CLIEN_POSITION                  0x0000000B
#define _PWMCON1_CLIEN_MASK                      0x00000800
#define _PWMCON1_CLIEN_LENGTH                    0x00000001

#define _PWMCON1_FLTIEN_POSITION                 0x0000000C
#define _PWMCON1_FLTIEN_MASK                     0x00001000
#define _PWMCON1_FLTIEN_LENGTH                   0x00000001

#define _PWMCON1_TRGSTAT_POSITION                0x0000000D
#define _PWMCON1_TRGSTAT_MASK                    0x00002000
#define _PWMCON1_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON1_CLSTAT_POSITION                 0x0000000E
#define _PWMCON1_CLSTAT_MASK                     0x00004000
#define _PWMCON1_CLSTAT_LENGTH                   0x00000001

#define _PWMCON1_FLTSTAT_POSITION                0x0000000F
#define _PWMCON1_FLTSTAT_MASK                    0x00008000
#define _PWMCON1_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON1_DTC0_POSITION                   0x00000006
#define _PWMCON1_DTC0_MASK                       0x00000040
#define _PWMCON1_DTC0_LENGTH                     0x00000001

#define _PWMCON1_DTC1_POSITION                   0x00000007
#define _PWMCON1_DTC1_MASK                       0x00000080
#define _PWMCON1_DTC1_LENGTH                     0x00000001

#define _IOCON1_OSYNC_POSITION                   0x00000000
#define _IOCON1_OSYNC_MASK                       0x00000001
#define _IOCON1_OSYNC_LENGTH                     0x00000001

#define _IOCON1_SWAP_POSITION                    0x00000001
#define _IOCON1_SWAP_MASK                        0x00000002
#define _IOCON1_SWAP_LENGTH                      0x00000001

#define _IOCON1_CLDAT_POSITION                   0x00000002
#define _IOCON1_CLDAT_MASK                       0x0000000C
#define _IOCON1_CLDAT_LENGTH                     0x00000002

#define _IOCON1_FLTDAT_POSITION                  0x00000004
#define _IOCON1_FLTDAT_MASK                      0x00000030
#define _IOCON1_FLTDAT_LENGTH                    0x00000002

#define _IOCON1_OVRDAT_POSITION                  0x00000006
#define _IOCON1_OVRDAT_MASK                      0x000000C0
#define _IOCON1_OVRDAT_LENGTH                    0x00000002

#define _IOCON1_OVRENL_POSITION                  0x00000008
#define _IOCON1_OVRENL_MASK                      0x00000100
#define _IOCON1_OVRENL_LENGTH                    0x00000001

#define _IOCON1_OVRENH_POSITION                  0x00000009
#define _IOCON1_OVRENH_MASK                      0x00000200
#define _IOCON1_OVRENH_LENGTH                    0x00000001

#define _IOCON1_PMOD_POSITION                    0x0000000A
#define _IOCON1_PMOD_MASK                        0x00000C00
#define _IOCON1_PMOD_LENGTH                      0x00000002

#define _IOCON1_POLL_POSITION                    0x0000000C
#define _IOCON1_POLL_MASK                        0x00001000
#define _IOCON1_POLL_LENGTH                      0x00000001

#define _IOCON1_POLH_POSITION                    0x0000000D
#define _IOCON1_POLH_MASK                        0x00002000
#define _IOCON1_POLH_LENGTH                      0x00000001

#define _IOCON1_PENL_POSITION                    0x0000000E
#define _IOCON1_PENL_MASK                        0x00004000
#define _IOCON1_PENL_LENGTH                      0x00000001

#define _IOCON1_PENH_POSITION                    0x0000000F
#define _IOCON1_PENH_MASK                        0x00008000
#define _IOCON1_PENH_LENGTH                      0x00000001

#define _IOCON1_CLDAT0_POSITION                  0x00000002
#define _IOCON1_CLDAT0_MASK                      0x00000004
#define _IOCON1_CLDAT0_LENGTH                    0x00000001

#define _IOCON1_CLDAT1_POSITION                  0x00000003
#define _IOCON1_CLDAT1_MASK                      0x00000008
#define _IOCON1_CLDAT1_LENGTH                    0x00000001

#define _IOCON1_FLTDAT0_POSITION                 0x00000004
#define _IOCON1_FLTDAT0_MASK                     0x00000010
#define _IOCON1_FLTDAT0_LENGTH                   0x00000001

#define _IOCON1_FLTDAT1_POSITION                 0x00000005
#define _IOCON1_FLTDAT1_MASK                     0x00000020
#define _IOCON1_FLTDAT1_LENGTH                   0x00000001

#define _IOCON1_OVRDAT0_POSITION                 0x00000006
#define _IOCON1_OVRDAT0_MASK                     0x00000040
#define _IOCON1_OVRDAT0_LENGTH                   0x00000001

#define _IOCON1_OVRDAT1_POSITION                 0x00000007
#define _IOCON1_OVRDAT1_MASK                     0x00000080
#define _IOCON1_OVRDAT1_LENGTH                   0x00000001

#define _IOCON1_PMOD0_POSITION                   0x0000000A
#define _IOCON1_PMOD0_MASK                       0x00000400
#define _IOCON1_PMOD0_LENGTH                     0x00000001

#define _IOCON1_PMOD1_POSITION                   0x0000000B
#define _IOCON1_PMOD1_MASK                       0x00000800
#define _IOCON1_PMOD1_LENGTH                     0x00000001

#define _FCLCON1_FLTMOD_POSITION                 0x00000000
#define _FCLCON1_FLTMOD_MASK                     0x00000003
#define _FCLCON1_FLTMOD_LENGTH                   0x00000002

#define _FCLCON1_FLTPOL_POSITION                 0x00000002
#define _FCLCON1_FLTPOL_MASK                     0x00000004
#define _FCLCON1_FLTPOL_LENGTH                   0x00000001

#define _FCLCON1_FLTSRC_POSITION                 0x00000003
#define _FCLCON1_FLTSRC_MASK                     0x000000F8
#define _FCLCON1_FLTSRC_LENGTH                   0x00000005

#define _FCLCON1_CLMOD_POSITION                  0x00000008
#define _FCLCON1_CLMOD_MASK                      0x00000100
#define _FCLCON1_CLMOD_LENGTH                    0x00000001

#define _FCLCON1_CLPOL_POSITION                  0x00000009
#define _FCLCON1_CLPOL_MASK                      0x00000200
#define _FCLCON1_CLPOL_LENGTH                    0x00000001

#define _FCLCON1_CLSRC_POSITION                  0x0000000A
#define _FCLCON1_CLSRC_MASK                      0x00007C00
#define _FCLCON1_CLSRC_LENGTH                    0x00000005

#define _FCLCON1_IFLTMOD_POSITION                0x0000000F
#define _FCLCON1_IFLTMOD_MASK                    0x00008000
#define _FCLCON1_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON1_FLTMOD0_POSITION                0x00000000
#define _FCLCON1_FLTMOD0_MASK                    0x00000001
#define _FCLCON1_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON1_FLTMOD1_POSITION                0x00000001
#define _FCLCON1_FLTMOD1_MASK                    0x00000002
#define _FCLCON1_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC0_POSITION                0x00000003
#define _FCLCON1_FLTSRC0_MASK                    0x00000008
#define _FCLCON1_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC1_POSITION                0x00000004
#define _FCLCON1_FLTSRC1_MASK                    0x00000010
#define _FCLCON1_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC2_POSITION                0x00000005
#define _FCLCON1_FLTSRC2_MASK                    0x00000020
#define _FCLCON1_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC3_POSITION                0x00000006
#define _FCLCON1_FLTSRC3_MASK                    0x00000040
#define _FCLCON1_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON1_FLTSRC4_POSITION                0x00000007
#define _FCLCON1_FLTSRC4_MASK                    0x00000080
#define _FCLCON1_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON1_CLSRC0_POSITION                 0x0000000A
#define _FCLCON1_CLSRC0_MASK                     0x00000400
#define _FCLCON1_CLSRC0_LENGTH                   0x00000001

#define _FCLCON1_CLSRC1_POSITION                 0x0000000B
#define _FCLCON1_CLSRC1_MASK                     0x00000800
#define _FCLCON1_CLSRC1_LENGTH                   0x00000001

#define _FCLCON1_CLSRC2_POSITION                 0x0000000C
#define _FCLCON1_CLSRC2_MASK                     0x00001000
#define _FCLCON1_CLSRC2_LENGTH                   0x00000001

#define _FCLCON1_CLSRC3_POSITION                 0x0000000D
#define _FCLCON1_CLSRC3_MASK                     0x00002000
#define _FCLCON1_CLSRC3_LENGTH                   0x00000001

#define _FCLCON1_CLSRC4_POSITION                 0x0000000E
#define _FCLCON1_CLSRC4_MASK                     0x00004000
#define _FCLCON1_CLSRC4_LENGTH                   0x00000001

#define _TRIG1_TRGCMP_POSITION                   0x00000003
#define _TRIG1_TRGCMP_MASK                       0x0000FFF8
#define _TRIG1_TRGCMP_LENGTH                     0x0000000D

#define _TRIG1_TRGCMP0_POSITION                  0x00000003
#define _TRIG1_TRGCMP0_MASK                      0x00000008
#define _TRIG1_TRGCMP0_LENGTH                    0x00000001

#define _TRIG1_TRGCMP1_POSITION                  0x00000004
#define _TRIG1_TRGCMP1_MASK                      0x00000010
#define _TRIG1_TRGCMP1_LENGTH                    0x00000001

#define _TRIG1_TRGCMP2_POSITION                  0x00000005
#define _TRIG1_TRGCMP2_MASK                      0x00000020
#define _TRIG1_TRGCMP2_LENGTH                    0x00000001

#define _TRIG1_TRGCMP3_POSITION                  0x00000006
#define _TRIG1_TRGCMP3_MASK                      0x00000040
#define _TRIG1_TRGCMP3_LENGTH                    0x00000001

#define _TRIG1_TRGCMP4_POSITION                  0x00000007
#define _TRIG1_TRGCMP4_MASK                      0x00000080
#define _TRIG1_TRGCMP4_LENGTH                    0x00000001

#define _TRIG1_TRGCMP5_POSITION                  0x00000008
#define _TRIG1_TRGCMP5_MASK                      0x00000100
#define _TRIG1_TRGCMP5_LENGTH                    0x00000001

#define _TRIG1_TRGCMP6_POSITION                  0x00000009
#define _TRIG1_TRGCMP6_MASK                      0x00000200
#define _TRIG1_TRGCMP6_LENGTH                    0x00000001

#define _TRIG1_TRGCMP7_POSITION                  0x0000000A
#define _TRIG1_TRGCMP7_MASK                      0x00000400
#define _TRIG1_TRGCMP7_LENGTH                    0x00000001

#define _TRIG1_TRGCMP8_POSITION                  0x0000000B
#define _TRIG1_TRGCMP8_MASK                      0x00000800
#define _TRIG1_TRGCMP8_LENGTH                    0x00000001

#define _TRIG1_TRGCMP9_POSITION                  0x0000000C
#define _TRIG1_TRGCMP9_MASK                      0x00001000
#define _TRIG1_TRGCMP9_LENGTH                    0x00000001

#define _TRIG1_TRGCMP10_POSITION                 0x0000000D
#define _TRIG1_TRGCMP10_MASK                     0x00002000
#define _TRIG1_TRGCMP10_LENGTH                   0x00000001

#define _TRIG1_TRGCMP11_POSITION                 0x0000000E
#define _TRIG1_TRGCMP11_MASK                     0x00004000
#define _TRIG1_TRGCMP11_LENGTH                   0x00000001

#define _TRIG1_TRGCMP12_POSITION                 0x0000000F
#define _TRIG1_TRGCMP12_MASK                     0x00008000
#define _TRIG1_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON1_TRGSTRT_POSITION                0x00000000
#define _TRGCON1_TRGSTRT_MASK                    0x0000003F
#define _TRGCON1_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON1_DTM_POSITION                    0x00000007
#define _TRGCON1_DTM_MASK                        0x00000080
#define _TRGCON1_DTM_LENGTH                      0x00000001

#define _TRGCON1_TRGDIV_POSITION                 0x0000000C
#define _TRGCON1_TRGDIV_MASK                     0x0000F000
#define _TRGCON1_TRGDIV_LENGTH                   0x00000004

#define _TRGCON1_TRGSTRT0_POSITION               0x00000000
#define _TRGCON1_TRGSTRT0_MASK                   0x00000001
#define _TRGCON1_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT1_POSITION               0x00000001
#define _TRGCON1_TRGSTRT1_MASK                   0x00000002
#define _TRGCON1_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT2_POSITION               0x00000002
#define _TRGCON1_TRGSTRT2_MASK                   0x00000004
#define _TRGCON1_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT3_POSITION               0x00000003
#define _TRGCON1_TRGSTRT3_MASK                   0x00000008
#define _TRGCON1_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT4_POSITION               0x00000004
#define _TRGCON1_TRGSTRT4_MASK                   0x00000010
#define _TRGCON1_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON1_TRGSTRT5_POSITION               0x00000005
#define _TRGCON1_TRGSTRT5_MASK                   0x00000020
#define _TRGCON1_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON1_TRGDIV0_POSITION                0x0000000C
#define _TRGCON1_TRGDIV0_MASK                    0x00001000
#define _TRGCON1_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV1_POSITION                0x0000000D
#define _TRGCON1_TRGDIV1_MASK                    0x00002000
#define _TRGCON1_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV2_POSITION                0x0000000E
#define _TRGCON1_TRGDIV2_MASK                    0x00004000
#define _TRGCON1_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON1_TRGDIV3_POSITION                0x0000000F
#define _TRGCON1_TRGDIV3_MASK                    0x00008000
#define _TRGCON1_TRGDIV3_LENGTH                  0x00000001

#define _STRIG1_STRGCMP_POSITION                 0x00000003
#define _STRIG1_STRGCMP_MASK                     0x0000FFF8
#define _STRIG1_STRGCMP_LENGTH                   0x0000000D

#define _STRIG1_STRGCMP0_POSITION                0x00000003
#define _STRIG1_STRGCMP0_MASK                    0x00000008
#define _STRIG1_STRGCMP0_LENGTH                  0x00000001

#define _STRIG1_STRGCMP1_POSITION                0x00000004
#define _STRIG1_STRGCMP1_MASK                    0x00000010
#define _STRIG1_STRGCMP1_LENGTH                  0x00000001

#define _STRIG1_STRGCMP2_POSITION                0x00000005
#define _STRIG1_STRGCMP2_MASK                    0x00000020
#define _STRIG1_STRGCMP2_LENGTH                  0x00000001

#define _STRIG1_STRGCMP3_POSITION                0x00000006
#define _STRIG1_STRGCMP3_MASK                    0x00000040
#define _STRIG1_STRGCMP3_LENGTH                  0x00000001

#define _STRIG1_STRGCMP4_POSITION                0x00000007
#define _STRIG1_STRGCMP4_MASK                    0x00000080
#define _STRIG1_STRGCMP4_LENGTH                  0x00000001

#define _STRIG1_STRGCMP5_POSITION                0x00000008
#define _STRIG1_STRGCMP5_MASK                    0x00000100
#define _STRIG1_STRGCMP5_LENGTH                  0x00000001

#define _STRIG1_STRGCMP6_POSITION                0x00000009
#define _STRIG1_STRGCMP6_MASK                    0x00000200
#define _STRIG1_STRGCMP6_LENGTH                  0x00000001

#define _STRIG1_STRGCMP7_POSITION                0x0000000A
#define _STRIG1_STRGCMP7_MASK                    0x00000400
#define _STRIG1_STRGCMP7_LENGTH                  0x00000001

#define _STRIG1_STRGCMP8_POSITION                0x0000000B
#define _STRIG1_STRGCMP8_MASK                    0x00000800
#define _STRIG1_STRGCMP8_LENGTH                  0x00000001

#define _STRIG1_STRGCMP9_POSITION                0x0000000C
#define _STRIG1_STRGCMP9_MASK                    0x00001000
#define _STRIG1_STRGCMP9_LENGTH                  0x00000001

#define _STRIG1_STRGCMP10_POSITION               0x0000000D
#define _STRIG1_STRGCMP10_MASK                   0x00002000
#define _STRIG1_STRGCMP10_LENGTH                 0x00000001

#define _STRIG1_STRGCMP11_POSITION               0x0000000E
#define _STRIG1_STRGCMP11_MASK                   0x00004000
#define _STRIG1_STRGCMP11_LENGTH                 0x00000001

#define _STRIG1_STRGCMP12_POSITION               0x0000000F
#define _STRIG1_STRGCMP12_MASK                   0x00008000
#define _STRIG1_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP_POSITION                 0x00000003
#define _PWMCAP1_PWMCAP_MASK                     0x0000FFF8
#define _PWMCAP1_PWMCAP_LENGTH                   0x0000000D

#define _PWMCAP1_PWMCAP0_POSITION                0x00000003
#define _PWMCAP1_PWMCAP0_MASK                    0x00000008
#define _PWMCAP1_PWMCAP0_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP1_POSITION                0x00000004
#define _PWMCAP1_PWMCAP1_MASK                    0x00000010
#define _PWMCAP1_PWMCAP1_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP2_POSITION                0x00000005
#define _PWMCAP1_PWMCAP2_MASK                    0x00000020
#define _PWMCAP1_PWMCAP2_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP3_POSITION                0x00000006
#define _PWMCAP1_PWMCAP3_MASK                    0x00000040
#define _PWMCAP1_PWMCAP3_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP4_POSITION                0x00000007
#define _PWMCAP1_PWMCAP4_MASK                    0x00000080
#define _PWMCAP1_PWMCAP4_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP5_POSITION                0x00000008
#define _PWMCAP1_PWMCAP5_MASK                    0x00000100
#define _PWMCAP1_PWMCAP5_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP6_POSITION                0x00000009
#define _PWMCAP1_PWMCAP6_MASK                    0x00000200
#define _PWMCAP1_PWMCAP6_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP7_POSITION                0x0000000A
#define _PWMCAP1_PWMCAP7_MASK                    0x00000400
#define _PWMCAP1_PWMCAP7_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP8_POSITION                0x0000000B
#define _PWMCAP1_PWMCAP8_MASK                    0x00000800
#define _PWMCAP1_PWMCAP8_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP9_POSITION                0x0000000C
#define _PWMCAP1_PWMCAP9_MASK                    0x00001000
#define _PWMCAP1_PWMCAP9_LENGTH                  0x00000001

#define _PWMCAP1_PWMCAP10_POSITION               0x0000000D
#define _PWMCAP1_PWMCAP10_MASK                   0x00002000
#define _PWMCAP1_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP11_POSITION               0x0000000E
#define _PWMCAP1_PWMCAP11_MASK                   0x00004000
#define _PWMCAP1_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP1_PWMCAP12_POSITION               0x0000000F
#define _PWMCAP1_PWMCAP12_MASK                   0x00008000
#define _PWMCAP1_PWMCAP12_LENGTH                 0x00000001

#define _LEBCON1_BPLL_POSITION                   0x00000000
#define _LEBCON1_BPLL_MASK                       0x00000001
#define _LEBCON1_BPLL_LENGTH                     0x00000001

#define _LEBCON1_BPLH_POSITION                   0x00000001
#define _LEBCON1_BPLH_MASK                       0x00000002
#define _LEBCON1_BPLH_LENGTH                     0x00000001

#define _LEBCON1_BPHL_POSITION                   0x00000002
#define _LEBCON1_BPHL_MASK                       0x00000004
#define _LEBCON1_BPHL_LENGTH                     0x00000001

#define _LEBCON1_BPHH_POSITION                   0x00000003
#define _LEBCON1_BPHH_MASK                       0x00000008
#define _LEBCON1_BPHH_LENGTH                     0x00000001

#define _LEBCON1_BCL_POSITION                    0x00000004
#define _LEBCON1_BCL_MASK                        0x00000010
#define _LEBCON1_BCL_LENGTH                      0x00000001

#define _LEBCON1_BCH_POSITION                    0x00000005
#define _LEBCON1_BCH_MASK                        0x00000020
#define _LEBCON1_BCH_LENGTH                      0x00000001

#define _LEBCON1_CLLEBEN_POSITION                0x0000000A
#define _LEBCON1_CLLEBEN_MASK                    0x00000400
#define _LEBCON1_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON1_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON1_FLTLEBEN_MASK                   0x00000800
#define _LEBCON1_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON1_PLF_POSITION                    0x0000000C
#define _LEBCON1_PLF_MASK                        0x00001000
#define _LEBCON1_PLF_LENGTH                      0x00000001

#define _LEBCON1_PLR_POSITION                    0x0000000D
#define _LEBCON1_PLR_MASK                        0x00002000
#define _LEBCON1_PLR_LENGTH                      0x00000001

#define _LEBCON1_PHF_POSITION                    0x0000000E
#define _LEBCON1_PHF_MASK                        0x00004000
#define _LEBCON1_PHF_LENGTH                      0x00000001

#define _LEBCON1_PHR_POSITION                    0x0000000F
#define _LEBCON1_PHR_MASK                        0x00008000
#define _LEBCON1_PHR_LENGTH                      0x00000001

#define _LEBDLY1_LEB_POSITION                    0x00000003
#define _LEBDLY1_LEB_MASK                        0x00000FF8
#define _LEBDLY1_LEB_LENGTH                      0x00000009

#define _LEBDLY1_LEB0_POSITION                   0x00000003
#define _LEBDLY1_LEB0_MASK                       0x00000008
#define _LEBDLY1_LEB0_LENGTH                     0x00000001

#define _LEBDLY1_LEB1_POSITION                   0x00000004
#define _LEBDLY1_LEB1_MASK                       0x00000010
#define _LEBDLY1_LEB1_LENGTH                     0x00000001

#define _LEBDLY1_LEB2_POSITION                   0x00000005
#define _LEBDLY1_LEB2_MASK                       0x00000020
#define _LEBDLY1_LEB2_LENGTH                     0x00000001

#define _LEBDLY1_LEB3_POSITION                   0x00000006
#define _LEBDLY1_LEB3_MASK                       0x00000040
#define _LEBDLY1_LEB3_LENGTH                     0x00000001

#define _LEBDLY1_LEB4_POSITION                   0x00000007
#define _LEBDLY1_LEB4_MASK                       0x00000080
#define _LEBDLY1_LEB4_LENGTH                     0x00000001

#define _LEBDLY1_LEB5_POSITION                   0x00000008
#define _LEBDLY1_LEB5_MASK                       0x00000100
#define _LEBDLY1_LEB5_LENGTH                     0x00000001

#define _LEBDLY1_LEB6_POSITION                   0x00000009
#define _LEBDLY1_LEB6_MASK                       0x00000200
#define _LEBDLY1_LEB6_LENGTH                     0x00000001

#define _LEBDLY1_LEB7_POSITION                   0x0000000A
#define _LEBDLY1_LEB7_MASK                       0x00000400
#define _LEBDLY1_LEB7_LENGTH                     0x00000001

#define _LEBDLY1_LEB8_POSITION                   0x0000000B
#define _LEBDLY1_LEB8_MASK                       0x00000800
#define _LEBDLY1_LEB8_LENGTH                     0x00000001

#define _AUXCON1_CHOPLEN_POSITION                0x00000000
#define _AUXCON1_CHOPLEN_MASK                    0x00000001
#define _AUXCON1_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON1_CHOPHEN_POSITION                0x00000001
#define _AUXCON1_CHOPHEN_MASK                    0x00000002
#define _AUXCON1_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON1_CHOPSEL_POSITION                0x00000002
#define _AUXCON1_CHOPSEL_MASK                    0x0000003C
#define _AUXCON1_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON1_BLANKSEL_POSITION               0x00000008
#define _AUXCON1_BLANKSEL_MASK                   0x00000F00
#define _AUXCON1_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON1_HRDDIS_POSITION                 0x0000000E
#define _AUXCON1_HRDDIS_MASK                     0x00004000
#define _AUXCON1_HRDDIS_LENGTH                   0x00000001

#define _AUXCON1_HRPDIS_POSITION                 0x0000000F
#define _AUXCON1_HRPDIS_MASK                     0x00008000
#define _AUXCON1_HRPDIS_LENGTH                   0x00000001

#define _AUXCON1_CHOPSEL0_POSITION               0x00000002
#define _AUXCON1_CHOPSEL0_MASK                   0x00000004
#define _AUXCON1_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON1_CHOPSEL1_POSITION               0x00000003
#define _AUXCON1_CHOPSEL1_MASK                   0x00000008
#define _AUXCON1_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON1_CHOPSEL2_POSITION               0x00000004
#define _AUXCON1_CHOPSEL2_MASK                   0x00000010
#define _AUXCON1_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON1_CHOPSEL3_POSITION               0x00000005
#define _AUXCON1_CHOPSEL3_MASK                   0x00000020
#define _AUXCON1_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON1_BLANKSEL0_POSITION              0x00000008
#define _AUXCON1_BLANKSEL0_MASK                  0x00000100
#define _AUXCON1_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON1_BLANKSEL1_POSITION              0x00000009
#define _AUXCON1_BLANKSEL1_MASK                  0x00000200
#define _AUXCON1_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON1_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON1_BLANKSEL2_MASK                  0x00000400
#define _AUXCON1_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON1_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON1_BLANKSEL3_MASK                  0x00000800
#define _AUXCON1_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON2_IUE_POSITION                    0x00000000
#define _PWMCON2_IUE_MASK                        0x00000001
#define _PWMCON2_IUE_LENGTH                      0x00000001

#define _PWMCON2_XPRES_POSITION                  0x00000001
#define _PWMCON2_XPRES_MASK                      0x00000002
#define _PWMCON2_XPRES_LENGTH                    0x00000001

#define _PWMCON2_CAM_POSITION                    0x00000002
#define _PWMCON2_CAM_MASK                        0x00000004
#define _PWMCON2_CAM_LENGTH                      0x00000001

#define _PWMCON2_MTBS_POSITION                   0x00000003
#define _PWMCON2_MTBS_MASK                       0x00000008
#define _PWMCON2_MTBS_LENGTH                     0x00000001

#define _PWMCON2_DTC_POSITION                    0x00000006
#define _PWMCON2_DTC_MASK                        0x000000C0
#define _PWMCON2_DTC_LENGTH                      0x00000002

#define _PWMCON2_MDCS_POSITION                   0x00000008
#define _PWMCON2_MDCS_MASK                       0x00000100
#define _PWMCON2_MDCS_LENGTH                     0x00000001

#define _PWMCON2_ITB_POSITION                    0x00000009
#define _PWMCON2_ITB_MASK                        0x00000200
#define _PWMCON2_ITB_LENGTH                      0x00000001

#define _PWMCON2_TRGIEN_POSITION                 0x0000000A
#define _PWMCON2_TRGIEN_MASK                     0x00000400
#define _PWMCON2_TRGIEN_LENGTH                   0x00000001

#define _PWMCON2_CLIEN_POSITION                  0x0000000B
#define _PWMCON2_CLIEN_MASK                      0x00000800
#define _PWMCON2_CLIEN_LENGTH                    0x00000001

#define _PWMCON2_FLTIEN_POSITION                 0x0000000C
#define _PWMCON2_FLTIEN_MASK                     0x00001000
#define _PWMCON2_FLTIEN_LENGTH                   0x00000001

#define _PWMCON2_TRGSTAT_POSITION                0x0000000D
#define _PWMCON2_TRGSTAT_MASK                    0x00002000
#define _PWMCON2_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON2_CLSTAT_POSITION                 0x0000000E
#define _PWMCON2_CLSTAT_MASK                     0x00004000
#define _PWMCON2_CLSTAT_LENGTH                   0x00000001

#define _PWMCON2_FLTSTAT_POSITION                0x0000000F
#define _PWMCON2_FLTSTAT_MASK                    0x00008000
#define _PWMCON2_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON2_DTC0_POSITION                   0x00000006
#define _PWMCON2_DTC0_MASK                       0x00000040
#define _PWMCON2_DTC0_LENGTH                     0x00000001

#define _PWMCON2_DTC1_POSITION                   0x00000007
#define _PWMCON2_DTC1_MASK                       0x00000080
#define _PWMCON2_DTC1_LENGTH                     0x00000001

#define _IOCON2_OSYNC_POSITION                   0x00000000
#define _IOCON2_OSYNC_MASK                       0x00000001
#define _IOCON2_OSYNC_LENGTH                     0x00000001

#define _IOCON2_SWAP_POSITION                    0x00000001
#define _IOCON2_SWAP_MASK                        0x00000002
#define _IOCON2_SWAP_LENGTH                      0x00000001

#define _IOCON2_CLDAT_POSITION                   0x00000002
#define _IOCON2_CLDAT_MASK                       0x0000000C
#define _IOCON2_CLDAT_LENGTH                     0x00000002

#define _IOCON2_FLTDAT_POSITION                  0x00000004
#define _IOCON2_FLTDAT_MASK                      0x00000030
#define _IOCON2_FLTDAT_LENGTH                    0x00000002

#define _IOCON2_OVRDAT_POSITION                  0x00000006
#define _IOCON2_OVRDAT_MASK                      0x000000C0
#define _IOCON2_OVRDAT_LENGTH                    0x00000002

#define _IOCON2_OVRENL_POSITION                  0x00000008
#define _IOCON2_OVRENL_MASK                      0x00000100
#define _IOCON2_OVRENL_LENGTH                    0x00000001

#define _IOCON2_OVRENH_POSITION                  0x00000009
#define _IOCON2_OVRENH_MASK                      0x00000200
#define _IOCON2_OVRENH_LENGTH                    0x00000001

#define _IOCON2_PMOD_POSITION                    0x0000000A
#define _IOCON2_PMOD_MASK                        0x00000C00
#define _IOCON2_PMOD_LENGTH                      0x00000002

#define _IOCON2_POLL_POSITION                    0x0000000C
#define _IOCON2_POLL_MASK                        0x00001000
#define _IOCON2_POLL_LENGTH                      0x00000001

#define _IOCON2_POLH_POSITION                    0x0000000D
#define _IOCON2_POLH_MASK                        0x00002000
#define _IOCON2_POLH_LENGTH                      0x00000001

#define _IOCON2_PENL_POSITION                    0x0000000E
#define _IOCON2_PENL_MASK                        0x00004000
#define _IOCON2_PENL_LENGTH                      0x00000001

#define _IOCON2_PENH_POSITION                    0x0000000F
#define _IOCON2_PENH_MASK                        0x00008000
#define _IOCON2_PENH_LENGTH                      0x00000001

#define _IOCON2_CLDAT0_POSITION                  0x00000002
#define _IOCON2_CLDAT0_MASK                      0x00000004
#define _IOCON2_CLDAT0_LENGTH                    0x00000001

#define _IOCON2_CLDAT1_POSITION                  0x00000003
#define _IOCON2_CLDAT1_MASK                      0x00000008
#define _IOCON2_CLDAT1_LENGTH                    0x00000001

#define _IOCON2_FLTDAT0_POSITION                 0x00000004
#define _IOCON2_FLTDAT0_MASK                     0x00000010
#define _IOCON2_FLTDAT0_LENGTH                   0x00000001

#define _IOCON2_FLTDAT1_POSITION                 0x00000005
#define _IOCON2_FLTDAT1_MASK                     0x00000020
#define _IOCON2_FLTDAT1_LENGTH                   0x00000001

#define _IOCON2_OVRDAT0_POSITION                 0x00000006
#define _IOCON2_OVRDAT0_MASK                     0x00000040
#define _IOCON2_OVRDAT0_LENGTH                   0x00000001

#define _IOCON2_OVRDAT1_POSITION                 0x00000007
#define _IOCON2_OVRDAT1_MASK                     0x00000080
#define _IOCON2_OVRDAT1_LENGTH                   0x00000001

#define _IOCON2_PMOD0_POSITION                   0x0000000A
#define _IOCON2_PMOD0_MASK                       0x00000400
#define _IOCON2_PMOD0_LENGTH                     0x00000001

#define _IOCON2_PMOD1_POSITION                   0x0000000B
#define _IOCON2_PMOD1_MASK                       0x00000800
#define _IOCON2_PMOD1_LENGTH                     0x00000001

#define _FCLCON2_FLTMOD_POSITION                 0x00000000
#define _FCLCON2_FLTMOD_MASK                     0x00000003
#define _FCLCON2_FLTMOD_LENGTH                   0x00000002

#define _FCLCON2_FLTPOL_POSITION                 0x00000002
#define _FCLCON2_FLTPOL_MASK                     0x00000004
#define _FCLCON2_FLTPOL_LENGTH                   0x00000001

#define _FCLCON2_FLTSRC_POSITION                 0x00000003
#define _FCLCON2_FLTSRC_MASK                     0x000000F8
#define _FCLCON2_FLTSRC_LENGTH                   0x00000005

#define _FCLCON2_CLMOD_POSITION                  0x00000008
#define _FCLCON2_CLMOD_MASK                      0x00000100
#define _FCLCON2_CLMOD_LENGTH                    0x00000001

#define _FCLCON2_CLPOL_POSITION                  0x00000009
#define _FCLCON2_CLPOL_MASK                      0x00000200
#define _FCLCON2_CLPOL_LENGTH                    0x00000001

#define _FCLCON2_CLSRC_POSITION                  0x0000000A
#define _FCLCON2_CLSRC_MASK                      0x00007C00
#define _FCLCON2_CLSRC_LENGTH                    0x00000005

#define _FCLCON2_IFLTMOD_POSITION                0x0000000F
#define _FCLCON2_IFLTMOD_MASK                    0x00008000
#define _FCLCON2_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON2_FLTMOD0_POSITION                0x00000000
#define _FCLCON2_FLTMOD0_MASK                    0x00000001
#define _FCLCON2_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON2_FLTMOD1_POSITION                0x00000001
#define _FCLCON2_FLTMOD1_MASK                    0x00000002
#define _FCLCON2_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC0_POSITION                0x00000003
#define _FCLCON2_FLTSRC0_MASK                    0x00000008
#define _FCLCON2_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC1_POSITION                0x00000004
#define _FCLCON2_FLTSRC1_MASK                    0x00000010
#define _FCLCON2_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC2_POSITION                0x00000005
#define _FCLCON2_FLTSRC2_MASK                    0x00000020
#define _FCLCON2_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC3_POSITION                0x00000006
#define _FCLCON2_FLTSRC3_MASK                    0x00000040
#define _FCLCON2_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON2_FLTSRC4_POSITION                0x00000007
#define _FCLCON2_FLTSRC4_MASK                    0x00000080
#define _FCLCON2_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON2_CLSRC0_POSITION                 0x0000000A
#define _FCLCON2_CLSRC0_MASK                     0x00000400
#define _FCLCON2_CLSRC0_LENGTH                   0x00000001

#define _FCLCON2_CLSRC1_POSITION                 0x0000000B
#define _FCLCON2_CLSRC1_MASK                     0x00000800
#define _FCLCON2_CLSRC1_LENGTH                   0x00000001

#define _FCLCON2_CLSRC2_POSITION                 0x0000000C
#define _FCLCON2_CLSRC2_MASK                     0x00001000
#define _FCLCON2_CLSRC2_LENGTH                   0x00000001

#define _FCLCON2_CLSRC3_POSITION                 0x0000000D
#define _FCLCON2_CLSRC3_MASK                     0x00002000
#define _FCLCON2_CLSRC3_LENGTH                   0x00000001

#define _FCLCON2_CLSRC4_POSITION                 0x0000000E
#define _FCLCON2_CLSRC4_MASK                     0x00004000
#define _FCLCON2_CLSRC4_LENGTH                   0x00000001

#define _TRIG2_TRGCMP_POSITION                   0x00000003
#define _TRIG2_TRGCMP_MASK                       0x0000FFF8
#define _TRIG2_TRGCMP_LENGTH                     0x0000000D

#define _TRIG2_TRGCMP0_POSITION                  0x00000003
#define _TRIG2_TRGCMP0_MASK                      0x00000008
#define _TRIG2_TRGCMP0_LENGTH                    0x00000001

#define _TRIG2_TRGCMP1_POSITION                  0x00000004
#define _TRIG2_TRGCMP1_MASK                      0x00000010
#define _TRIG2_TRGCMP1_LENGTH                    0x00000001

#define _TRIG2_TRGCMP2_POSITION                  0x00000005
#define _TRIG2_TRGCMP2_MASK                      0x00000020
#define _TRIG2_TRGCMP2_LENGTH                    0x00000001

#define _TRIG2_TRGCMP3_POSITION                  0x00000006
#define _TRIG2_TRGCMP3_MASK                      0x00000040
#define _TRIG2_TRGCMP3_LENGTH                    0x00000001

#define _TRIG2_TRGCMP4_POSITION                  0x00000007
#define _TRIG2_TRGCMP4_MASK                      0x00000080
#define _TRIG2_TRGCMP4_LENGTH                    0x00000001

#define _TRIG2_TRGCMP5_POSITION                  0x00000008
#define _TRIG2_TRGCMP5_MASK                      0x00000100
#define _TRIG2_TRGCMP5_LENGTH                    0x00000001

#define _TRIG2_TRGCMP6_POSITION                  0x00000009
#define _TRIG2_TRGCMP6_MASK                      0x00000200
#define _TRIG2_TRGCMP6_LENGTH                    0x00000001

#define _TRIG2_TRGCMP7_POSITION                  0x0000000A
#define _TRIG2_TRGCMP7_MASK                      0x00000400
#define _TRIG2_TRGCMP7_LENGTH                    0x00000001

#define _TRIG2_TRGCMP8_POSITION                  0x0000000B
#define _TRIG2_TRGCMP8_MASK                      0x00000800
#define _TRIG2_TRGCMP8_LENGTH                    0x00000001

#define _TRIG2_TRGCMP9_POSITION                  0x0000000C
#define _TRIG2_TRGCMP9_MASK                      0x00001000
#define _TRIG2_TRGCMP9_LENGTH                    0x00000001

#define _TRIG2_TRGCMP10_POSITION                 0x0000000D
#define _TRIG2_TRGCMP10_MASK                     0x00002000
#define _TRIG2_TRGCMP10_LENGTH                   0x00000001

#define _TRIG2_TRGCMP11_POSITION                 0x0000000E
#define _TRIG2_TRGCMP11_MASK                     0x00004000
#define _TRIG2_TRGCMP11_LENGTH                   0x00000001

#define _TRIG2_TRGCMP12_POSITION                 0x0000000F
#define _TRIG2_TRGCMP12_MASK                     0x00008000
#define _TRIG2_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON2_TRGSTRT_POSITION                0x00000000
#define _TRGCON2_TRGSTRT_MASK                    0x0000003F
#define _TRGCON2_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON2_DTM_POSITION                    0x00000007
#define _TRGCON2_DTM_MASK                        0x00000080
#define _TRGCON2_DTM_LENGTH                      0x00000001

#define _TRGCON2_TRGDIV_POSITION                 0x0000000C
#define _TRGCON2_TRGDIV_MASK                     0x0000F000
#define _TRGCON2_TRGDIV_LENGTH                   0x00000004

#define _TRGCON2_TRGSTRT0_POSITION               0x00000000
#define _TRGCON2_TRGSTRT0_MASK                   0x00000001
#define _TRGCON2_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT1_POSITION               0x00000001
#define _TRGCON2_TRGSTRT1_MASK                   0x00000002
#define _TRGCON2_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT2_POSITION               0x00000002
#define _TRGCON2_TRGSTRT2_MASK                   0x00000004
#define _TRGCON2_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT3_POSITION               0x00000003
#define _TRGCON2_TRGSTRT3_MASK                   0x00000008
#define _TRGCON2_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT4_POSITION               0x00000004
#define _TRGCON2_TRGSTRT4_MASK                   0x00000010
#define _TRGCON2_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON2_TRGSTRT5_POSITION               0x00000005
#define _TRGCON2_TRGSTRT5_MASK                   0x00000020
#define _TRGCON2_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON2_TRGDIV0_POSITION                0x0000000C
#define _TRGCON2_TRGDIV0_MASK                    0x00001000
#define _TRGCON2_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON2_TRGDIV1_POSITION                0x0000000D
#define _TRGCON2_TRGDIV1_MASK                    0x00002000
#define _TRGCON2_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON2_TRGDIV2_POSITION                0x0000000E
#define _TRGCON2_TRGDIV2_MASK                    0x00004000
#define _TRGCON2_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON2_TRGDIV3_POSITION                0x0000000F
#define _TRGCON2_TRGDIV3_MASK                    0x00008000
#define _TRGCON2_TRGDIV3_LENGTH                  0x00000001

#define _STRIG2_STRGCMP_POSITION                 0x00000003
#define _STRIG2_STRGCMP_MASK                     0x0000FFF8
#define _STRIG2_STRGCMP_LENGTH                   0x0000000D

#define _STRIG2_STRGCMP0_POSITION                0x00000003
#define _STRIG2_STRGCMP0_MASK                    0x00000008
#define _STRIG2_STRGCMP0_LENGTH                  0x00000001

#define _STRIG2_STRGCMP1_POSITION                0x00000004
#define _STRIG2_STRGCMP1_MASK                    0x00000010
#define _STRIG2_STRGCMP1_LENGTH                  0x00000001

#define _STRIG2_STRGCMP2_POSITION                0x00000005
#define _STRIG2_STRGCMP2_MASK                    0x00000020
#define _STRIG2_STRGCMP2_LENGTH                  0x00000001

#define _STRIG2_STRGCMP3_POSITION                0x00000006
#define _STRIG2_STRGCMP3_MASK                    0x00000040
#define _STRIG2_STRGCMP3_LENGTH                  0x00000001

#define _STRIG2_STRGCMP4_POSITION                0x00000007
#define _STRIG2_STRGCMP4_MASK                    0x00000080
#define _STRIG2_STRGCMP4_LENGTH                  0x00000001

#define _STRIG2_STRGCMP5_POSITION                0x00000008
#define _STRIG2_STRGCMP5_MASK                    0x00000100
#define _STRIG2_STRGCMP5_LENGTH                  0x00000001

#define _STRIG2_STRGCMP6_POSITION                0x00000009
#define _STRIG2_STRGCMP6_MASK                    0x00000200
#define _STRIG2_STRGCMP6_LENGTH                  0x00000001

#define _STRIG2_STRGCMP7_POSITION                0x0000000A
#define _STRIG2_STRGCMP7_MASK                    0x00000400
#define _STRIG2_STRGCMP7_LENGTH                  0x00000001

#define _STRIG2_STRGCMP8_POSITION                0x0000000B
#define _STRIG2_STRGCMP8_MASK                    0x00000800
#define _STRIG2_STRGCMP8_LENGTH                  0x00000001

#define _STRIG2_STRGCMP9_POSITION                0x0000000C
#define _STRIG2_STRGCMP9_MASK                    0x00001000
#define _STRIG2_STRGCMP9_LENGTH                  0x00000001

#define _STRIG2_STRGCMP10_POSITION               0x0000000D
#define _STRIG2_STRGCMP10_MASK                   0x00002000
#define _STRIG2_STRGCMP10_LENGTH                 0x00000001

#define _STRIG2_STRGCMP11_POSITION               0x0000000E
#define _STRIG2_STRGCMP11_MASK                   0x00004000
#define _STRIG2_STRGCMP11_LENGTH                 0x00000001

#define _STRIG2_STRGCMP12_POSITION               0x0000000F
#define _STRIG2_STRGCMP12_MASK                   0x00008000
#define _STRIG2_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP2_PWMCAP_POSITION                 0x00000003
#define _PWMCAP2_PWMCAP_MASK                     0x0000FFF8
#define _PWMCAP2_PWMCAP_LENGTH                   0x0000000D

#define _PWMCAP2_PWMCAP0_POSITION                0x00000003
#define _PWMCAP2_PWMCAP0_MASK                    0x00000008
#define _PWMCAP2_PWMCAP0_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP1_POSITION                0x00000004
#define _PWMCAP2_PWMCAP1_MASK                    0x00000010
#define _PWMCAP2_PWMCAP1_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP2_POSITION                0x00000005
#define _PWMCAP2_PWMCAP2_MASK                    0x00000020
#define _PWMCAP2_PWMCAP2_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP3_POSITION                0x00000006
#define _PWMCAP2_PWMCAP3_MASK                    0x00000040
#define _PWMCAP2_PWMCAP3_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP4_POSITION                0x00000007
#define _PWMCAP2_PWMCAP4_MASK                    0x00000080
#define _PWMCAP2_PWMCAP4_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP5_POSITION                0x00000008
#define _PWMCAP2_PWMCAP5_MASK                    0x00000100
#define _PWMCAP2_PWMCAP5_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP6_POSITION                0x00000009
#define _PWMCAP2_PWMCAP6_MASK                    0x00000200
#define _PWMCAP2_PWMCAP6_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP7_POSITION                0x0000000A
#define _PWMCAP2_PWMCAP7_MASK                    0x00000400
#define _PWMCAP2_PWMCAP7_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP8_POSITION                0x0000000B
#define _PWMCAP2_PWMCAP8_MASK                    0x00000800
#define _PWMCAP2_PWMCAP8_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP9_POSITION                0x0000000C
#define _PWMCAP2_PWMCAP9_MASK                    0x00001000
#define _PWMCAP2_PWMCAP9_LENGTH                  0x00000001

#define _PWMCAP2_PWMCAP10_POSITION               0x0000000D
#define _PWMCAP2_PWMCAP10_MASK                   0x00002000
#define _PWMCAP2_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP2_PWMCAP11_POSITION               0x0000000E
#define _PWMCAP2_PWMCAP11_MASK                   0x00004000
#define _PWMCAP2_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP2_PWMCAP12_POSITION               0x0000000F
#define _PWMCAP2_PWMCAP12_MASK                   0x00008000
#define _PWMCAP2_PWMCAP12_LENGTH                 0x00000001

#define _LEBCON2_BPLL_POSITION                   0x00000000
#define _LEBCON2_BPLL_MASK                       0x00000001
#define _LEBCON2_BPLL_LENGTH                     0x00000001

#define _LEBCON2_BPLH_POSITION                   0x00000001
#define _LEBCON2_BPLH_MASK                       0x00000002
#define _LEBCON2_BPLH_LENGTH                     0x00000001

#define _LEBCON2_BPHL_POSITION                   0x00000002
#define _LEBCON2_BPHL_MASK                       0x00000004
#define _LEBCON2_BPHL_LENGTH                     0x00000001

#define _LEBCON2_BPHH_POSITION                   0x00000003
#define _LEBCON2_BPHH_MASK                       0x00000008
#define _LEBCON2_BPHH_LENGTH                     0x00000001

#define _LEBCON2_BCL_POSITION                    0x00000004
#define _LEBCON2_BCL_MASK                        0x00000010
#define _LEBCON2_BCL_LENGTH                      0x00000001

#define _LEBCON2_BCH_POSITION                    0x00000005
#define _LEBCON2_BCH_MASK                        0x00000020
#define _LEBCON2_BCH_LENGTH                      0x00000001

#define _LEBCON2_CLLEBEN_POSITION                0x0000000A
#define _LEBCON2_CLLEBEN_MASK                    0x00000400
#define _LEBCON2_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON2_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON2_FLTLEBEN_MASK                   0x00000800
#define _LEBCON2_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON2_PLF_POSITION                    0x0000000C
#define _LEBCON2_PLF_MASK                        0x00001000
#define _LEBCON2_PLF_LENGTH                      0x00000001

#define _LEBCON2_PLR_POSITION                    0x0000000D
#define _LEBCON2_PLR_MASK                        0x00002000
#define _LEBCON2_PLR_LENGTH                      0x00000001

#define _LEBCON2_PHF_POSITION                    0x0000000E
#define _LEBCON2_PHF_MASK                        0x00004000
#define _LEBCON2_PHF_LENGTH                      0x00000001

#define _LEBCON2_PHR_POSITION                    0x0000000F
#define _LEBCON2_PHR_MASK                        0x00008000
#define _LEBCON2_PHR_LENGTH                      0x00000001

#define _LEBDLY2_LEB_POSITION                    0x00000003
#define _LEBDLY2_LEB_MASK                        0x00000FF8
#define _LEBDLY2_LEB_LENGTH                      0x00000009

#define _LEBDLY2_LEB0_POSITION                   0x00000003
#define _LEBDLY2_LEB0_MASK                       0x00000008
#define _LEBDLY2_LEB0_LENGTH                     0x00000001

#define _LEBDLY2_LEB1_POSITION                   0x00000004
#define _LEBDLY2_LEB1_MASK                       0x00000010
#define _LEBDLY2_LEB1_LENGTH                     0x00000001

#define _LEBDLY2_LEB2_POSITION                   0x00000005
#define _LEBDLY2_LEB2_MASK                       0x00000020
#define _LEBDLY2_LEB2_LENGTH                     0x00000001

#define _LEBDLY2_LEB3_POSITION                   0x00000006
#define _LEBDLY2_LEB3_MASK                       0x00000040
#define _LEBDLY2_LEB3_LENGTH                     0x00000001

#define _LEBDLY2_LEB4_POSITION                   0x00000007
#define _LEBDLY2_LEB4_MASK                       0x00000080
#define _LEBDLY2_LEB4_LENGTH                     0x00000001

#define _LEBDLY2_LEB5_POSITION                   0x00000008
#define _LEBDLY2_LEB5_MASK                       0x00000100
#define _LEBDLY2_LEB5_LENGTH                     0x00000001

#define _LEBDLY2_LEB6_POSITION                   0x00000009
#define _LEBDLY2_LEB6_MASK                       0x00000200
#define _LEBDLY2_LEB6_LENGTH                     0x00000001

#define _LEBDLY2_LEB7_POSITION                   0x0000000A
#define _LEBDLY2_LEB7_MASK                       0x00000400
#define _LEBDLY2_LEB7_LENGTH                     0x00000001

#define _LEBDLY2_LEB8_POSITION                   0x0000000B
#define _LEBDLY2_LEB8_MASK                       0x00000800
#define _LEBDLY2_LEB8_LENGTH                     0x00000001

#define _AUXCON2_CHOPLEN_POSITION                0x00000000
#define _AUXCON2_CHOPLEN_MASK                    0x00000001
#define _AUXCON2_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON2_CHOPHEN_POSITION                0x00000001
#define _AUXCON2_CHOPHEN_MASK                    0x00000002
#define _AUXCON2_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON2_CHOPSEL_POSITION                0x00000002
#define _AUXCON2_CHOPSEL_MASK                    0x0000003C
#define _AUXCON2_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON2_BLANKSEL_POSITION               0x00000008
#define _AUXCON2_BLANKSEL_MASK                   0x00000F00
#define _AUXCON2_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON2_HRDDIS_POSITION                 0x0000000E
#define _AUXCON2_HRDDIS_MASK                     0x00004000
#define _AUXCON2_HRDDIS_LENGTH                   0x00000001

#define _AUXCON2_HRPDIS_POSITION                 0x0000000F
#define _AUXCON2_HRPDIS_MASK                     0x00008000
#define _AUXCON2_HRPDIS_LENGTH                   0x00000001

#define _AUXCON2_CHOPSEL0_POSITION               0x00000002
#define _AUXCON2_CHOPSEL0_MASK                   0x00000004
#define _AUXCON2_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON2_CHOPSEL1_POSITION               0x00000003
#define _AUXCON2_CHOPSEL1_MASK                   0x00000008
#define _AUXCON2_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON2_CHOPSEL2_POSITION               0x00000004
#define _AUXCON2_CHOPSEL2_MASK                   0x00000010
#define _AUXCON2_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON2_CHOPSEL3_POSITION               0x00000005
#define _AUXCON2_CHOPSEL3_MASK                   0x00000020
#define _AUXCON2_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON2_BLANKSEL0_POSITION              0x00000008
#define _AUXCON2_BLANKSEL0_MASK                  0x00000100
#define _AUXCON2_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON2_BLANKSEL1_POSITION              0x00000009
#define _AUXCON2_BLANKSEL1_MASK                  0x00000200
#define _AUXCON2_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON2_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON2_BLANKSEL2_MASK                  0x00000400
#define _AUXCON2_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON2_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON2_BLANKSEL3_MASK                  0x00000800
#define _AUXCON2_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON3_IUE_POSITION                    0x00000000
#define _PWMCON3_IUE_MASK                        0x00000001
#define _PWMCON3_IUE_LENGTH                      0x00000001

#define _PWMCON3_XPRES_POSITION                  0x00000001
#define _PWMCON3_XPRES_MASK                      0x00000002
#define _PWMCON3_XPRES_LENGTH                    0x00000001

#define _PWMCON3_CAM_POSITION                    0x00000002
#define _PWMCON3_CAM_MASK                        0x00000004
#define _PWMCON3_CAM_LENGTH                      0x00000001

#define _PWMCON3_MTBS_POSITION                   0x00000003
#define _PWMCON3_MTBS_MASK                       0x00000008
#define _PWMCON3_MTBS_LENGTH                     0x00000001

#define _PWMCON3_DTC_POSITION                    0x00000006
#define _PWMCON3_DTC_MASK                        0x000000C0
#define _PWMCON3_DTC_LENGTH                      0x00000002

#define _PWMCON3_MDCS_POSITION                   0x00000008
#define _PWMCON3_MDCS_MASK                       0x00000100
#define _PWMCON3_MDCS_LENGTH                     0x00000001

#define _PWMCON3_ITB_POSITION                    0x00000009
#define _PWMCON3_ITB_MASK                        0x00000200
#define _PWMCON3_ITB_LENGTH                      0x00000001

#define _PWMCON3_TRGIEN_POSITION                 0x0000000A
#define _PWMCON3_TRGIEN_MASK                     0x00000400
#define _PWMCON3_TRGIEN_LENGTH                   0x00000001

#define _PWMCON3_CLIEN_POSITION                  0x0000000B
#define _PWMCON3_CLIEN_MASK                      0x00000800
#define _PWMCON3_CLIEN_LENGTH                    0x00000001

#define _PWMCON3_FLTIEN_POSITION                 0x0000000C
#define _PWMCON3_FLTIEN_MASK                     0x00001000
#define _PWMCON3_FLTIEN_LENGTH                   0x00000001

#define _PWMCON3_TRGSTAT_POSITION                0x0000000D
#define _PWMCON3_TRGSTAT_MASK                    0x00002000
#define _PWMCON3_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON3_CLSTAT_POSITION                 0x0000000E
#define _PWMCON3_CLSTAT_MASK                     0x00004000
#define _PWMCON3_CLSTAT_LENGTH                   0x00000001

#define _PWMCON3_FLTSTAT_POSITION                0x0000000F
#define _PWMCON3_FLTSTAT_MASK                    0x00008000
#define _PWMCON3_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON3_DTC0_POSITION                   0x00000006
#define _PWMCON3_DTC0_MASK                       0x00000040
#define _PWMCON3_DTC0_LENGTH                     0x00000001

#define _PWMCON3_DTC1_POSITION                   0x00000007
#define _PWMCON3_DTC1_MASK                       0x00000080
#define _PWMCON3_DTC1_LENGTH                     0x00000001

#define _IOCON3_OSYNC_POSITION                   0x00000000
#define _IOCON3_OSYNC_MASK                       0x00000001
#define _IOCON3_OSYNC_LENGTH                     0x00000001

#define _IOCON3_SWAP_POSITION                    0x00000001
#define _IOCON3_SWAP_MASK                        0x00000002
#define _IOCON3_SWAP_LENGTH                      0x00000001

#define _IOCON3_CLDAT_POSITION                   0x00000002
#define _IOCON3_CLDAT_MASK                       0x0000000C
#define _IOCON3_CLDAT_LENGTH                     0x00000002

#define _IOCON3_FLTDAT_POSITION                  0x00000004
#define _IOCON3_FLTDAT_MASK                      0x00000030
#define _IOCON3_FLTDAT_LENGTH                    0x00000002

#define _IOCON3_OVRDAT_POSITION                  0x00000006
#define _IOCON3_OVRDAT_MASK                      0x000000C0
#define _IOCON3_OVRDAT_LENGTH                    0x00000002

#define _IOCON3_OVRENL_POSITION                  0x00000008
#define _IOCON3_OVRENL_MASK                      0x00000100
#define _IOCON3_OVRENL_LENGTH                    0x00000001

#define _IOCON3_OVRENH_POSITION                  0x00000009
#define _IOCON3_OVRENH_MASK                      0x00000200
#define _IOCON3_OVRENH_LENGTH                    0x00000001

#define _IOCON3_PMOD_POSITION                    0x0000000A
#define _IOCON3_PMOD_MASK                        0x00000C00
#define _IOCON3_PMOD_LENGTH                      0x00000002

#define _IOCON3_POLL_POSITION                    0x0000000C
#define _IOCON3_POLL_MASK                        0x00001000
#define _IOCON3_POLL_LENGTH                      0x00000001

#define _IOCON3_POLH_POSITION                    0x0000000D
#define _IOCON3_POLH_MASK                        0x00002000
#define _IOCON3_POLH_LENGTH                      0x00000001

#define _IOCON3_PENL_POSITION                    0x0000000E
#define _IOCON3_PENL_MASK                        0x00004000
#define _IOCON3_PENL_LENGTH                      0x00000001

#define _IOCON3_PENH_POSITION                    0x0000000F
#define _IOCON3_PENH_MASK                        0x00008000
#define _IOCON3_PENH_LENGTH                      0x00000001

#define _IOCON3_CLDAT0_POSITION                  0x00000002
#define _IOCON3_CLDAT0_MASK                      0x00000004
#define _IOCON3_CLDAT0_LENGTH                    0x00000001

#define _IOCON3_CLDAT1_POSITION                  0x00000003
#define _IOCON3_CLDAT1_MASK                      0x00000008
#define _IOCON3_CLDAT1_LENGTH                    0x00000001

#define _IOCON3_FLTDAT0_POSITION                 0x00000004
#define _IOCON3_FLTDAT0_MASK                     0x00000010
#define _IOCON3_FLTDAT0_LENGTH                   0x00000001

#define _IOCON3_FLTDAT1_POSITION                 0x00000005
#define _IOCON3_FLTDAT1_MASK                     0x00000020
#define _IOCON3_FLTDAT1_LENGTH                   0x00000001

#define _IOCON3_OVRDAT0_POSITION                 0x00000006
#define _IOCON3_OVRDAT0_MASK                     0x00000040
#define _IOCON3_OVRDAT0_LENGTH                   0x00000001

#define _IOCON3_OVRDAT1_POSITION                 0x00000007
#define _IOCON3_OVRDAT1_MASK                     0x00000080
#define _IOCON3_OVRDAT1_LENGTH                   0x00000001

#define _IOCON3_PMOD0_POSITION                   0x0000000A
#define _IOCON3_PMOD0_MASK                       0x00000400
#define _IOCON3_PMOD0_LENGTH                     0x00000001

#define _IOCON3_PMOD1_POSITION                   0x0000000B
#define _IOCON3_PMOD1_MASK                       0x00000800
#define _IOCON3_PMOD1_LENGTH                     0x00000001

#define _FCLCON3_FLTMOD_POSITION                 0x00000000
#define _FCLCON3_FLTMOD_MASK                     0x00000003
#define _FCLCON3_FLTMOD_LENGTH                   0x00000002

#define _FCLCON3_FLTPOL_POSITION                 0x00000002
#define _FCLCON3_FLTPOL_MASK                     0x00000004
#define _FCLCON3_FLTPOL_LENGTH                   0x00000001

#define _FCLCON3_FLTSRC_POSITION                 0x00000003
#define _FCLCON3_FLTSRC_MASK                     0x000000F8
#define _FCLCON3_FLTSRC_LENGTH                   0x00000005

#define _FCLCON3_CLMOD_POSITION                  0x00000008
#define _FCLCON3_CLMOD_MASK                      0x00000100
#define _FCLCON3_CLMOD_LENGTH                    0x00000001

#define _FCLCON3_CLPOL_POSITION                  0x00000009
#define _FCLCON3_CLPOL_MASK                      0x00000200
#define _FCLCON3_CLPOL_LENGTH                    0x00000001

#define _FCLCON3_CLSRC_POSITION                  0x0000000A
#define _FCLCON3_CLSRC_MASK                      0x00007C00
#define _FCLCON3_CLSRC_LENGTH                    0x00000005

#define _FCLCON3_IFLTMOD_POSITION                0x0000000F
#define _FCLCON3_IFLTMOD_MASK                    0x00008000
#define _FCLCON3_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON3_FLTMOD0_POSITION                0x00000000
#define _FCLCON3_FLTMOD0_MASK                    0x00000001
#define _FCLCON3_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON3_FLTMOD1_POSITION                0x00000001
#define _FCLCON3_FLTMOD1_MASK                    0x00000002
#define _FCLCON3_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC0_POSITION                0x00000003
#define _FCLCON3_FLTSRC0_MASK                    0x00000008
#define _FCLCON3_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC1_POSITION                0x00000004
#define _FCLCON3_FLTSRC1_MASK                    0x00000010
#define _FCLCON3_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC2_POSITION                0x00000005
#define _FCLCON3_FLTSRC2_MASK                    0x00000020
#define _FCLCON3_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC3_POSITION                0x00000006
#define _FCLCON3_FLTSRC3_MASK                    0x00000040
#define _FCLCON3_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON3_FLTSRC4_POSITION                0x00000007
#define _FCLCON3_FLTSRC4_MASK                    0x00000080
#define _FCLCON3_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON3_CLSRC0_POSITION                 0x0000000A
#define _FCLCON3_CLSRC0_MASK                     0x00000400
#define _FCLCON3_CLSRC0_LENGTH                   0x00000001

#define _FCLCON3_CLSRC1_POSITION                 0x0000000B
#define _FCLCON3_CLSRC1_MASK                     0x00000800
#define _FCLCON3_CLSRC1_LENGTH                   0x00000001

#define _FCLCON3_CLSRC2_POSITION                 0x0000000C
#define _FCLCON3_CLSRC2_MASK                     0x00001000
#define _FCLCON3_CLSRC2_LENGTH                   0x00000001

#define _FCLCON3_CLSRC3_POSITION                 0x0000000D
#define _FCLCON3_CLSRC3_MASK                     0x00002000
#define _FCLCON3_CLSRC3_LENGTH                   0x00000001

#define _FCLCON3_CLSRC4_POSITION                 0x0000000E
#define _FCLCON3_CLSRC4_MASK                     0x00004000
#define _FCLCON3_CLSRC4_LENGTH                   0x00000001

#define _TRIG3_TRGCMP_POSITION                   0x00000003
#define _TRIG3_TRGCMP_MASK                       0x0000FFF8
#define _TRIG3_TRGCMP_LENGTH                     0x0000000D

#define _TRIG3_TRGCMP0_POSITION                  0x00000003
#define _TRIG3_TRGCMP0_MASK                      0x00000008
#define _TRIG3_TRGCMP0_LENGTH                    0x00000001

#define _TRIG3_TRGCMP1_POSITION                  0x00000004
#define _TRIG3_TRGCMP1_MASK                      0x00000010
#define _TRIG3_TRGCMP1_LENGTH                    0x00000001

#define _TRIG3_TRGCMP2_POSITION                  0x00000005
#define _TRIG3_TRGCMP2_MASK                      0x00000020
#define _TRIG3_TRGCMP2_LENGTH                    0x00000001

#define _TRIG3_TRGCMP3_POSITION                  0x00000006
#define _TRIG3_TRGCMP3_MASK                      0x00000040
#define _TRIG3_TRGCMP3_LENGTH                    0x00000001

#define _TRIG3_TRGCMP4_POSITION                  0x00000007
#define _TRIG3_TRGCMP4_MASK                      0x00000080
#define _TRIG3_TRGCMP4_LENGTH                    0x00000001

#define _TRIG3_TRGCMP5_POSITION                  0x00000008
#define _TRIG3_TRGCMP5_MASK                      0x00000100
#define _TRIG3_TRGCMP5_LENGTH                    0x00000001

#define _TRIG3_TRGCMP6_POSITION                  0x00000009
#define _TRIG3_TRGCMP6_MASK                      0x00000200
#define _TRIG3_TRGCMP6_LENGTH                    0x00000001

#define _TRIG3_TRGCMP7_POSITION                  0x0000000A
#define _TRIG3_TRGCMP7_MASK                      0x00000400
#define _TRIG3_TRGCMP7_LENGTH                    0x00000001

#define _TRIG3_TRGCMP8_POSITION                  0x0000000B
#define _TRIG3_TRGCMP8_MASK                      0x00000800
#define _TRIG3_TRGCMP8_LENGTH                    0x00000001

#define _TRIG3_TRGCMP9_POSITION                  0x0000000C
#define _TRIG3_TRGCMP9_MASK                      0x00001000
#define _TRIG3_TRGCMP9_LENGTH                    0x00000001

#define _TRIG3_TRGCMP10_POSITION                 0x0000000D
#define _TRIG3_TRGCMP10_MASK                     0x00002000
#define _TRIG3_TRGCMP10_LENGTH                   0x00000001

#define _TRIG3_TRGCMP11_POSITION                 0x0000000E
#define _TRIG3_TRGCMP11_MASK                     0x00004000
#define _TRIG3_TRGCMP11_LENGTH                   0x00000001

#define _TRIG3_TRGCMP12_POSITION                 0x0000000F
#define _TRIG3_TRGCMP12_MASK                     0x00008000
#define _TRIG3_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON3_TRGSTRT_POSITION                0x00000000
#define _TRGCON3_TRGSTRT_MASK                    0x0000003F
#define _TRGCON3_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON3_DTM_POSITION                    0x00000007
#define _TRGCON3_DTM_MASK                        0x00000080
#define _TRGCON3_DTM_LENGTH                      0x00000001

#define _TRGCON3_TRGDIV_POSITION                 0x0000000C
#define _TRGCON3_TRGDIV_MASK                     0x0000F000
#define _TRGCON3_TRGDIV_LENGTH                   0x00000004

#define _TRGCON3_TRGSTRT0_POSITION               0x00000000
#define _TRGCON3_TRGSTRT0_MASK                   0x00000001
#define _TRGCON3_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT1_POSITION               0x00000001
#define _TRGCON3_TRGSTRT1_MASK                   0x00000002
#define _TRGCON3_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT2_POSITION               0x00000002
#define _TRGCON3_TRGSTRT2_MASK                   0x00000004
#define _TRGCON3_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT3_POSITION               0x00000003
#define _TRGCON3_TRGSTRT3_MASK                   0x00000008
#define _TRGCON3_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT4_POSITION               0x00000004
#define _TRGCON3_TRGSTRT4_MASK                   0x00000010
#define _TRGCON3_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON3_TRGSTRT5_POSITION               0x00000005
#define _TRGCON3_TRGSTRT5_MASK                   0x00000020
#define _TRGCON3_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON3_TRGDIV0_POSITION                0x0000000C
#define _TRGCON3_TRGDIV0_MASK                    0x00001000
#define _TRGCON3_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON3_TRGDIV1_POSITION                0x0000000D
#define _TRGCON3_TRGDIV1_MASK                    0x00002000
#define _TRGCON3_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON3_TRGDIV2_POSITION                0x0000000E
#define _TRGCON3_TRGDIV2_MASK                    0x00004000
#define _TRGCON3_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON3_TRGDIV3_POSITION                0x0000000F
#define _TRGCON3_TRGDIV3_MASK                    0x00008000
#define _TRGCON3_TRGDIV3_LENGTH                  0x00000001

#define _STRIG3_STRGCMP_POSITION                 0x00000003
#define _STRIG3_STRGCMP_MASK                     0x0000FFF8
#define _STRIG3_STRGCMP_LENGTH                   0x0000000D

#define _STRIG3_STRGCMP0_POSITION                0x00000003
#define _STRIG3_STRGCMP0_MASK                    0x00000008
#define _STRIG3_STRGCMP0_LENGTH                  0x00000001

#define _STRIG3_STRGCMP1_POSITION                0x00000004
#define _STRIG3_STRGCMP1_MASK                    0x00000010
#define _STRIG3_STRGCMP1_LENGTH                  0x00000001

#define _STRIG3_STRGCMP2_POSITION                0x00000005
#define _STRIG3_STRGCMP2_MASK                    0x00000020
#define _STRIG3_STRGCMP2_LENGTH                  0x00000001

#define _STRIG3_STRGCMP3_POSITION                0x00000006
#define _STRIG3_STRGCMP3_MASK                    0x00000040
#define _STRIG3_STRGCMP3_LENGTH                  0x00000001

#define _STRIG3_STRGCMP4_POSITION                0x00000007
#define _STRIG3_STRGCMP4_MASK                    0x00000080
#define _STRIG3_STRGCMP4_LENGTH                  0x00000001

#define _STRIG3_STRGCMP5_POSITION                0x00000008
#define _STRIG3_STRGCMP5_MASK                    0x00000100
#define _STRIG3_STRGCMP5_LENGTH                  0x00000001

#define _STRIG3_STRGCMP6_POSITION                0x00000009
#define _STRIG3_STRGCMP6_MASK                    0x00000200
#define _STRIG3_STRGCMP6_LENGTH                  0x00000001

#define _STRIG3_STRGCMP7_POSITION                0x0000000A
#define _STRIG3_STRGCMP7_MASK                    0x00000400
#define _STRIG3_STRGCMP7_LENGTH                  0x00000001

#define _STRIG3_STRGCMP8_POSITION                0x0000000B
#define _STRIG3_STRGCMP8_MASK                    0x00000800
#define _STRIG3_STRGCMP8_LENGTH                  0x00000001

#define _STRIG3_STRGCMP9_POSITION                0x0000000C
#define _STRIG3_STRGCMP9_MASK                    0x00001000
#define _STRIG3_STRGCMP9_LENGTH                  0x00000001

#define _STRIG3_STRGCMP10_POSITION               0x0000000D
#define _STRIG3_STRGCMP10_MASK                   0x00002000
#define _STRIG3_STRGCMP10_LENGTH                 0x00000001

#define _STRIG3_STRGCMP11_POSITION               0x0000000E
#define _STRIG3_STRGCMP11_MASK                   0x00004000
#define _STRIG3_STRGCMP11_LENGTH                 0x00000001

#define _STRIG3_STRGCMP12_POSITION               0x0000000F
#define _STRIG3_STRGCMP12_MASK                   0x00008000
#define _STRIG3_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP3_PWMCAP_POSITION                 0x00000003
#define _PWMCAP3_PWMCAP_MASK                     0x0000FFF8
#define _PWMCAP3_PWMCAP_LENGTH                   0x0000000D

#define _PWMCAP3_PWMCAP0_POSITION                0x00000003
#define _PWMCAP3_PWMCAP0_MASK                    0x00000008
#define _PWMCAP3_PWMCAP0_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP1_POSITION                0x00000004
#define _PWMCAP3_PWMCAP1_MASK                    0x00000010
#define _PWMCAP3_PWMCAP1_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP2_POSITION                0x00000005
#define _PWMCAP3_PWMCAP2_MASK                    0x00000020
#define _PWMCAP3_PWMCAP2_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP3_POSITION                0x00000006
#define _PWMCAP3_PWMCAP3_MASK                    0x00000040
#define _PWMCAP3_PWMCAP3_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP4_POSITION                0x00000007
#define _PWMCAP3_PWMCAP4_MASK                    0x00000080
#define _PWMCAP3_PWMCAP4_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP5_POSITION                0x00000008
#define _PWMCAP3_PWMCAP5_MASK                    0x00000100
#define _PWMCAP3_PWMCAP5_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP6_POSITION                0x00000009
#define _PWMCAP3_PWMCAP6_MASK                    0x00000200
#define _PWMCAP3_PWMCAP6_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP7_POSITION                0x0000000A
#define _PWMCAP3_PWMCAP7_MASK                    0x00000400
#define _PWMCAP3_PWMCAP7_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP8_POSITION                0x0000000B
#define _PWMCAP3_PWMCAP8_MASK                    0x00000800
#define _PWMCAP3_PWMCAP8_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP9_POSITION                0x0000000C
#define _PWMCAP3_PWMCAP9_MASK                    0x00001000
#define _PWMCAP3_PWMCAP9_LENGTH                  0x00000001

#define _PWMCAP3_PWMCAP10_POSITION               0x0000000D
#define _PWMCAP3_PWMCAP10_MASK                   0x00002000
#define _PWMCAP3_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP3_PWMCAP11_POSITION               0x0000000E
#define _PWMCAP3_PWMCAP11_MASK                   0x00004000
#define _PWMCAP3_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP3_PWMCAP12_POSITION               0x0000000F
#define _PWMCAP3_PWMCAP12_MASK                   0x00008000
#define _PWMCAP3_PWMCAP12_LENGTH                 0x00000001

#define _LEBCON3_BPLL_POSITION                   0x00000000
#define _LEBCON3_BPLL_MASK                       0x00000001
#define _LEBCON3_BPLL_LENGTH                     0x00000001

#define _LEBCON3_BPLH_POSITION                   0x00000001
#define _LEBCON3_BPLH_MASK                       0x00000002
#define _LEBCON3_BPLH_LENGTH                     0x00000001

#define _LEBCON3_BPHL_POSITION                   0x00000002
#define _LEBCON3_BPHL_MASK                       0x00000004
#define _LEBCON3_BPHL_LENGTH                     0x00000001

#define _LEBCON3_BPHH_POSITION                   0x00000003
#define _LEBCON3_BPHH_MASK                       0x00000008
#define _LEBCON3_BPHH_LENGTH                     0x00000001

#define _LEBCON3_BCL_POSITION                    0x00000004
#define _LEBCON3_BCL_MASK                        0x00000010
#define _LEBCON3_BCL_LENGTH                      0x00000001

#define _LEBCON3_BCH_POSITION                    0x00000005
#define _LEBCON3_BCH_MASK                        0x00000020
#define _LEBCON3_BCH_LENGTH                      0x00000001

#define _LEBCON3_CLLEBEN_POSITION                0x0000000A
#define _LEBCON3_CLLEBEN_MASK                    0x00000400
#define _LEBCON3_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON3_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON3_FLTLEBEN_MASK                   0x00000800
#define _LEBCON3_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON3_PLF_POSITION                    0x0000000C
#define _LEBCON3_PLF_MASK                        0x00001000
#define _LEBCON3_PLF_LENGTH                      0x00000001

#define _LEBCON3_PLR_POSITION                    0x0000000D
#define _LEBCON3_PLR_MASK                        0x00002000
#define _LEBCON3_PLR_LENGTH                      0x00000001

#define _LEBCON3_PHF_POSITION                    0x0000000E
#define _LEBCON3_PHF_MASK                        0x00004000
#define _LEBCON3_PHF_LENGTH                      0x00000001

#define _LEBCON3_PHR_POSITION                    0x0000000F
#define _LEBCON3_PHR_MASK                        0x00008000
#define _LEBCON3_PHR_LENGTH                      0x00000001

#define _LEBDLY3_LEB_POSITION                    0x00000003
#define _LEBDLY3_LEB_MASK                        0x00000FF8
#define _LEBDLY3_LEB_LENGTH                      0x00000009

#define _LEBDLY3_LEB0_POSITION                   0x00000003
#define _LEBDLY3_LEB0_MASK                       0x00000008
#define _LEBDLY3_LEB0_LENGTH                     0x00000001

#define _LEBDLY3_LEB1_POSITION                   0x00000004
#define _LEBDLY3_LEB1_MASK                       0x00000010
#define _LEBDLY3_LEB1_LENGTH                     0x00000001

#define _LEBDLY3_LEB2_POSITION                   0x00000005
#define _LEBDLY3_LEB2_MASK                       0x00000020
#define _LEBDLY3_LEB2_LENGTH                     0x00000001

#define _LEBDLY3_LEB3_POSITION                   0x00000006
#define _LEBDLY3_LEB3_MASK                       0x00000040
#define _LEBDLY3_LEB3_LENGTH                     0x00000001

#define _LEBDLY3_LEB4_POSITION                   0x00000007
#define _LEBDLY3_LEB4_MASK                       0x00000080
#define _LEBDLY3_LEB4_LENGTH                     0x00000001

#define _LEBDLY3_LEB5_POSITION                   0x00000008
#define _LEBDLY3_LEB5_MASK                       0x00000100
#define _LEBDLY3_LEB5_LENGTH                     0x00000001

#define _LEBDLY3_LEB6_POSITION                   0x00000009
#define _LEBDLY3_LEB6_MASK                       0x00000200
#define _LEBDLY3_LEB6_LENGTH                     0x00000001

#define _LEBDLY3_LEB7_POSITION                   0x0000000A
#define _LEBDLY3_LEB7_MASK                       0x00000400
#define _LEBDLY3_LEB7_LENGTH                     0x00000001

#define _LEBDLY3_LEB8_POSITION                   0x0000000B
#define _LEBDLY3_LEB8_MASK                       0x00000800
#define _LEBDLY3_LEB8_LENGTH                     0x00000001

#define _AUXCON3_CHOPLEN_POSITION                0x00000000
#define _AUXCON3_CHOPLEN_MASK                    0x00000001
#define _AUXCON3_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON3_CHOPHEN_POSITION                0x00000001
#define _AUXCON3_CHOPHEN_MASK                    0x00000002
#define _AUXCON3_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON3_CHOPSEL_POSITION                0x00000002
#define _AUXCON3_CHOPSEL_MASK                    0x0000003C
#define _AUXCON3_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON3_BLANKSEL_POSITION               0x00000008
#define _AUXCON3_BLANKSEL_MASK                   0x00000F00
#define _AUXCON3_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON3_HRDDIS_POSITION                 0x0000000E
#define _AUXCON3_HRDDIS_MASK                     0x00004000
#define _AUXCON3_HRDDIS_LENGTH                   0x00000001

#define _AUXCON3_HRPDIS_POSITION                 0x0000000F
#define _AUXCON3_HRPDIS_MASK                     0x00008000
#define _AUXCON3_HRPDIS_LENGTH                   0x00000001

#define _AUXCON3_CHOPSEL0_POSITION               0x00000002
#define _AUXCON3_CHOPSEL0_MASK                   0x00000004
#define _AUXCON3_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON3_CHOPSEL1_POSITION               0x00000003
#define _AUXCON3_CHOPSEL1_MASK                   0x00000008
#define _AUXCON3_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON3_CHOPSEL2_POSITION               0x00000004
#define _AUXCON3_CHOPSEL2_MASK                   0x00000010
#define _AUXCON3_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON3_CHOPSEL3_POSITION               0x00000005
#define _AUXCON3_CHOPSEL3_MASK                   0x00000020
#define _AUXCON3_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON3_BLANKSEL0_POSITION              0x00000008
#define _AUXCON3_BLANKSEL0_MASK                  0x00000100
#define _AUXCON3_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON3_BLANKSEL1_POSITION              0x00000009
#define _AUXCON3_BLANKSEL1_MASK                  0x00000200
#define _AUXCON3_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON3_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON3_BLANKSEL2_MASK                  0x00000400
#define _AUXCON3_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON3_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON3_BLANKSEL3_MASK                  0x00000800
#define _AUXCON3_BLANKSEL3_LENGTH                0x00000001

#define _TRISA_TRISA0_POSITION                   0x00000000
#define _TRISA_TRISA0_MASK                       0x00000001
#define _TRISA_TRISA0_LENGTH                     0x00000001

#define _TRISA_TRISA1_POSITION                   0x00000001
#define _TRISA_TRISA1_MASK                       0x00000002
#define _TRISA_TRISA1_LENGTH                     0x00000001

#define _TRISA_TRISA2_POSITION                   0x00000002
#define _TRISA_TRISA2_MASK                       0x00000004
#define _TRISA_TRISA2_LENGTH                     0x00000001

#define _TRISA_TRISA3_POSITION                   0x00000003
#define _TRISA_TRISA3_MASK                       0x00000008
#define _TRISA_TRISA3_LENGTH                     0x00000001

#define _TRISA_TRISA4_POSITION                   0x00000004
#define _TRISA_TRISA4_MASK                       0x00000010
#define _TRISA_TRISA4_LENGTH                     0x00000001

#define _PORTA_RA0_POSITION                      0x00000000
#define _PORTA_RA0_MASK                          0x00000001
#define _PORTA_RA0_LENGTH                        0x00000001

#define _PORTA_RA1_POSITION                      0x00000001
#define _PORTA_RA1_MASK                          0x00000002
#define _PORTA_RA1_LENGTH                        0x00000001

#define _PORTA_RA2_POSITION                      0x00000002
#define _PORTA_RA2_MASK                          0x00000004
#define _PORTA_RA2_LENGTH                        0x00000001

#define _PORTA_RA3_POSITION                      0x00000003
#define _PORTA_RA3_MASK                          0x00000008
#define _PORTA_RA3_LENGTH                        0x00000001

#define _PORTA_RA4_POSITION                      0x00000004
#define _PORTA_RA4_MASK                          0x00000010
#define _PORTA_RA4_LENGTH                        0x00000001

#define _LATA_LATA0_POSITION                     0x00000000
#define _LATA_LATA0_MASK                         0x00000001
#define _LATA_LATA0_LENGTH                       0x00000001

#define _LATA_LATA1_POSITION                     0x00000001
#define _LATA_LATA1_MASK                         0x00000002
#define _LATA_LATA1_LENGTH                       0x00000001

#define _LATA_LATA2_POSITION                     0x00000002
#define _LATA_LATA2_MASK                         0x00000004
#define _LATA_LATA2_LENGTH                       0x00000001

#define _LATA_LATA3_POSITION                     0x00000003
#define _LATA_LATA3_MASK                         0x00000008
#define _LATA_LATA3_LENGTH                       0x00000001

#define _LATA_LATA4_POSITION                     0x00000004
#define _LATA_LATA4_MASK                         0x00000010
#define _LATA_LATA4_LENGTH                       0x00000001

#define _ODCA_ODCA0_POSITION                     0x00000000
#define _ODCA_ODCA0_MASK                         0x00000001
#define _ODCA_ODCA0_LENGTH                       0x00000001

#define _ODCA_ODCA1_POSITION                     0x00000001
#define _ODCA_ODCA1_MASK                         0x00000002
#define _ODCA_ODCA1_LENGTH                       0x00000001

#define _ODCA_ODCA2_POSITION                     0x00000002
#define _ODCA_ODCA2_MASK                         0x00000004
#define _ODCA_ODCA2_LENGTH                       0x00000001

#define _ODCA_ODCA3_POSITION                     0x00000003
#define _ODCA_ODCA3_MASK                         0x00000008
#define _ODCA_ODCA3_LENGTH                       0x00000001

#define _ODCA_ODCA4_POSITION                     0x00000004
#define _ODCA_ODCA4_MASK                         0x00000010
#define _ODCA_ODCA4_LENGTH                       0x00000001

#define _CNENA_CNIEA0_POSITION                   0x00000000
#define _CNENA_CNIEA0_MASK                       0x00000001
#define _CNENA_CNIEA0_LENGTH                     0x00000001

#define _CNENA_CNIEA1_POSITION                   0x00000001
#define _CNENA_CNIEA1_MASK                       0x00000002
#define _CNENA_CNIEA1_LENGTH                     0x00000001

#define _CNENA_CNIEA2_POSITION                   0x00000002
#define _CNENA_CNIEA2_MASK                       0x00000004
#define _CNENA_CNIEA2_LENGTH                     0x00000001

#define _CNENA_CNIEA3_POSITION                   0x00000003
#define _CNENA_CNIEA3_MASK                       0x00000008
#define _CNENA_CNIEA3_LENGTH                     0x00000001

#define _CNENA_CNIEA4_POSITION                   0x00000004
#define _CNENA_CNIEA4_MASK                       0x00000010
#define _CNENA_CNIEA4_LENGTH                     0x00000001

#define _CNPUA_CNPUA0_POSITION                   0x00000000
#define _CNPUA_CNPUA0_MASK                       0x00000001
#define _CNPUA_CNPUA0_LENGTH                     0x00000001

#define _CNPUA_CNPUA1_POSITION                   0x00000001
#define _CNPUA_CNPUA1_MASK                       0x00000002
#define _CNPUA_CNPUA1_LENGTH                     0x00000001

#define _CNPUA_CNPUA2_POSITION                   0x00000002
#define _CNPUA_CNPUA2_MASK                       0x00000004
#define _CNPUA_CNPUA2_LENGTH                     0x00000001

#define _CNPUA_CNPUA3_POSITION                   0x00000003
#define _CNPUA_CNPUA3_MASK                       0x00000008
#define _CNPUA_CNPUA3_LENGTH                     0x00000001

#define _CNPUA_CNPUA4_POSITION                   0x00000004
#define _CNPUA_CNPUA4_MASK                       0x00000010
#define _CNPUA_CNPUA4_LENGTH                     0x00000001

#define _CNPDA_CNPDA0_POSITION                   0x00000000
#define _CNPDA_CNPDA0_MASK                       0x00000001
#define _CNPDA_CNPDA0_LENGTH                     0x00000001

#define _CNPDA_CNPDA1_POSITION                   0x00000001
#define _CNPDA_CNPDA1_MASK                       0x00000002
#define _CNPDA_CNPDA1_LENGTH                     0x00000001

#define _CNPDA_CNPDA2_POSITION                   0x00000002
#define _CNPDA_CNPDA2_MASK                       0x00000004
#define _CNPDA_CNPDA2_LENGTH                     0x00000001

#define _CNPDA_CNPDA3_POSITION                   0x00000003
#define _CNPDA_CNPDA3_MASK                       0x00000008
#define _CNPDA_CNPDA3_LENGTH                     0x00000001

#define _CNPDA_CNPDA4_POSITION                   0x00000004
#define _CNPDA_CNPDA4_MASK                       0x00000010
#define _CNPDA_CNPDA4_LENGTH                     0x00000001

#define _ANSELA_ANSA0_POSITION                   0x00000000
#define _ANSELA_ANSA0_MASK                       0x00000001
#define _ANSELA_ANSA0_LENGTH                     0x00000001

#define _ANSELA_ANSA1_POSITION                   0x00000001
#define _ANSELA_ANSA1_MASK                       0x00000002
#define _ANSELA_ANSA1_LENGTH                     0x00000001

#define _ANSELA_ANSA2_POSITION                   0x00000002
#define _ANSELA_ANSA2_MASK                       0x00000004
#define _ANSELA_ANSA2_LENGTH                     0x00000001

#define _TRISB_TRISB0_POSITION                   0x00000000
#define _TRISB_TRISB0_MASK                       0x00000001
#define _TRISB_TRISB0_LENGTH                     0x00000001

#define _TRISB_TRISB1_POSITION                   0x00000001
#define _TRISB_TRISB1_MASK                       0x00000002
#define _TRISB_TRISB1_LENGTH                     0x00000001

#define _TRISB_TRISB2_POSITION                   0x00000002
#define _TRISB_TRISB2_MASK                       0x00000004
#define _TRISB_TRISB2_LENGTH                     0x00000001

#define _TRISB_TRISB3_POSITION                   0x00000003
#define _TRISB_TRISB3_MASK                       0x00000008
#define _TRISB_TRISB3_LENGTH                     0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB5_POSITION                   0x00000005
#define _TRISB_TRISB5_MASK                       0x00000020
#define _TRISB_TRISB5_LENGTH                     0x00000001

#define _TRISB_TRISB6_POSITION                   0x00000006
#define _TRISB_TRISB6_MASK                       0x00000040
#define _TRISB_TRISB6_LENGTH                     0x00000001

#define _TRISB_TRISB7_POSITION                   0x00000007
#define _TRISB_TRISB7_MASK                       0x00000080
#define _TRISB_TRISB7_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

#define _TRISB_TRISB10_POSITION                  0x0000000A
#define _TRISB_TRISB10_MASK                      0x00000400
#define _TRISB_TRISB10_LENGTH                    0x00000001

#define _TRISB_TRISB11_POSITION                  0x0000000B
#define _TRISB_TRISB11_MASK                      0x00000800
#define _TRISB_TRISB11_LENGTH                    0x00000001

#define _TRISB_TRISB12_POSITION                  0x0000000C
#define _TRISB_TRISB12_MASK                      0x00001000
#define _TRISB_TRISB12_LENGTH                    0x00000001

#define _TRISB_TRISB13_POSITION                  0x0000000D
#define _TRISB_TRISB13_MASK                      0x00002000
#define _TRISB_TRISB13_LENGTH                    0x00000001

#define _TRISB_TRISB14_POSITION                  0x0000000E
#define _TRISB_TRISB14_MASK                      0x00004000
#define _TRISB_TRISB14_LENGTH                    0x00000001

#define _TRISB_TRISB15_POSITION                  0x0000000F
#define _TRISB_TRISB15_MASK                      0x00008000
#define _TRISB_TRISB15_LENGTH                    0x00000001

#define _PORTB_RB0_POSITION                      0x00000000
#define _PORTB_RB0_MASK                          0x00000001
#define _PORTB_RB0_LENGTH                        0x00000001

#define _PORTB_RB1_POSITION                      0x00000001
#define _PORTB_RB1_MASK                          0x00000002
#define _PORTB_RB1_LENGTH                        0x00000001

#define _PORTB_RB2_POSITION                      0x00000002
#define _PORTB_RB2_MASK                          0x00000004
#define _PORTB_RB2_LENGTH                        0x00000001

#define _PORTB_RB3_POSITION                      0x00000003
#define _PORTB_RB3_MASK                          0x00000008
#define _PORTB_RB3_LENGTH                        0x00000001

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB5_POSITION                      0x00000005
#define _PORTB_RB5_MASK                          0x00000020
#define _PORTB_RB5_LENGTH                        0x00000001

#define _PORTB_RB6_POSITION                      0x00000006
#define _PORTB_RB6_MASK                          0x00000040
#define _PORTB_RB6_LENGTH                        0x00000001

#define _PORTB_RB7_POSITION                      0x00000007
#define _PORTB_RB7_MASK                          0x00000080
#define _PORTB_RB7_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

#define _PORTB_RB10_POSITION                     0x0000000A
#define _PORTB_RB10_MASK                         0x00000400
#define _PORTB_RB10_LENGTH                       0x00000001

#define _PORTB_RB11_POSITION                     0x0000000B
#define _PORTB_RB11_MASK                         0x00000800
#define _PORTB_RB11_LENGTH                       0x00000001

#define _PORTB_RB12_POSITION                     0x0000000C
#define _PORTB_RB12_MASK                         0x00001000
#define _PORTB_RB12_LENGTH                       0x00000001

#define _PORTB_RB13_POSITION                     0x0000000D
#define _PORTB_RB13_MASK                         0x00002000
#define _PORTB_RB13_LENGTH                       0x00000001

#define _PORTB_RB14_POSITION                     0x0000000E
#define _PORTB_RB14_MASK                         0x00004000
#define _PORTB_RB14_LENGTH                       0x00000001

#define _PORTB_RB15_POSITION                     0x0000000F
#define _PORTB_RB15_MASK                         0x00008000
#define _PORTB_RB15_LENGTH                       0x00000001

#define _LATB_LATB0_POSITION                     0x00000000
#define _LATB_LATB0_MASK                         0x00000001
#define _LATB_LATB0_LENGTH                       0x00000001

#define _LATB_LATB1_POSITION                     0x00000001
#define _LATB_LATB1_MASK                         0x00000002
#define _LATB_LATB1_LENGTH                       0x00000001

#define _LATB_LATB2_POSITION                     0x00000002
#define _LATB_LATB2_MASK                         0x00000004
#define _LATB_LATB2_LENGTH                       0x00000001

#define _LATB_LATB3_POSITION                     0x00000003
#define _LATB_LATB3_MASK                         0x00000008
#define _LATB_LATB3_LENGTH                       0x00000001

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB5_POSITION                     0x00000005
#define _LATB_LATB5_MASK                         0x00000020
#define _LATB_LATB5_LENGTH                       0x00000001

#define _LATB_LATB6_POSITION                     0x00000006
#define _LATB_LATB6_MASK                         0x00000040
#define _LATB_LATB6_LENGTH                       0x00000001

#define _LATB_LATB7_POSITION                     0x00000007
#define _LATB_LATB7_MASK                         0x00000080
#define _LATB_LATB7_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

#define _LATB_LATB10_POSITION                    0x0000000A
#define _LATB_LATB10_MASK                        0x00000400
#define _LATB_LATB10_LENGTH                      0x00000001

#define _LATB_LATB11_POSITION                    0x0000000B
#define _LATB_LATB11_MASK                        0x00000800
#define _LATB_LATB11_LENGTH                      0x00000001

#define _LATB_LATB12_POSITION                    0x0000000C
#define _LATB_LATB12_MASK                        0x00001000
#define _LATB_LATB12_LENGTH                      0x00000001

#define _LATB_LATB13_POSITION                    0x0000000D
#define _LATB_LATB13_MASK                        0x00002000
#define _LATB_LATB13_LENGTH                      0x00000001

#define _LATB_LATB14_POSITION                    0x0000000E
#define _LATB_LATB14_MASK                        0x00004000
#define _LATB_LATB14_LENGTH                      0x00000001

#define _LATB_LATB15_POSITION                    0x0000000F
#define _LATB_LATB15_MASK                        0x00008000
#define _LATB_LATB15_LENGTH                      0x00000001

#define _ODCB_ODCB0_POSITION                     0x00000000
#define _ODCB_ODCB0_MASK                         0x00000001
#define _ODCB_ODCB0_LENGTH                       0x00000001

#define _ODCB_ODCB1_POSITION                     0x00000001
#define _ODCB_ODCB1_MASK                         0x00000002
#define _ODCB_ODCB1_LENGTH                       0x00000001

#define _ODCB_ODCB2_POSITION                     0x00000002
#define _ODCB_ODCB2_MASK                         0x00000004
#define _ODCB_ODCB2_LENGTH                       0x00000001

#define _ODCB_ODCB3_POSITION                     0x00000003
#define _ODCB_ODCB3_MASK                         0x00000008
#define _ODCB_ODCB3_LENGTH                       0x00000001

#define _ODCB_ODCB4_POSITION                     0x00000004
#define _ODCB_ODCB4_MASK                         0x00000010
#define _ODCB_ODCB4_LENGTH                       0x00000001

#define _ODCB_ODCB5_POSITION                     0x00000005
#define _ODCB_ODCB5_MASK                         0x00000020
#define _ODCB_ODCB5_LENGTH                       0x00000001

#define _ODCB_ODCB6_POSITION                     0x00000006
#define _ODCB_ODCB6_MASK                         0x00000040
#define _ODCB_ODCB6_LENGTH                       0x00000001

#define _ODCB_ODCB7_POSITION                     0x00000007
#define _ODCB_ODCB7_MASK                         0x00000080
#define _ODCB_ODCB7_LENGTH                       0x00000001

#define _ODCB_ODCB8_POSITION                     0x00000008
#define _ODCB_ODCB8_MASK                         0x00000100
#define _ODCB_ODCB8_LENGTH                       0x00000001

#define _ODCB_ODCB9_POSITION                     0x00000009
#define _ODCB_ODCB9_MASK                         0x00000200
#define _ODCB_ODCB9_LENGTH                       0x00000001

#define _ODCB_ODCB10_POSITION                    0x0000000A
#define _ODCB_ODCB10_MASK                        0x00000400
#define _ODCB_ODCB10_LENGTH                      0x00000001

#define _ODCB_ODCB11_POSITION                    0x0000000B
#define _ODCB_ODCB11_MASK                        0x00000800
#define _ODCB_ODCB11_LENGTH                      0x00000001

#define _ODCB_ODCB12_POSITION                    0x0000000C
#define _ODCB_ODCB12_MASK                        0x00001000
#define _ODCB_ODCB12_LENGTH                      0x00000001

#define _ODCB_ODCB13_POSITION                    0x0000000D
#define _ODCB_ODCB13_MASK                        0x00002000
#define _ODCB_ODCB13_LENGTH                      0x00000001

#define _ODCB_ODCB14_POSITION                    0x0000000E
#define _ODCB_ODCB14_MASK                        0x00004000
#define _ODCB_ODCB14_LENGTH                      0x00000001

#define _ODCB_ODCB15_POSITION                    0x0000000F
#define _ODCB_ODCB15_MASK                        0x00008000
#define _ODCB_ODCB15_LENGTH                      0x00000001

#define _CNENB_CNIEB0_POSITION                   0x00000000
#define _CNENB_CNIEB0_MASK                       0x00000001
#define _CNENB_CNIEB0_LENGTH                     0x00000001

#define _CNENB_CNIEB1_POSITION                   0x00000001
#define _CNENB_CNIEB1_MASK                       0x00000002
#define _CNENB_CNIEB1_LENGTH                     0x00000001

#define _CNENB_CNIEB2_POSITION                   0x00000002
#define _CNENB_CNIEB2_MASK                       0x00000004
#define _CNENB_CNIEB2_LENGTH                     0x00000001

#define _CNENB_CNIEB3_POSITION                   0x00000003
#define _CNENB_CNIEB3_MASK                       0x00000008
#define _CNENB_CNIEB3_LENGTH                     0x00000001

#define _CNENB_CNIEB4_POSITION                   0x00000004
#define _CNENB_CNIEB4_MASK                       0x00000010
#define _CNENB_CNIEB4_LENGTH                     0x00000001

#define _CNENB_CNIEB5_POSITION                   0x00000005
#define _CNENB_CNIEB5_MASK                       0x00000020
#define _CNENB_CNIEB5_LENGTH                     0x00000001

#define _CNENB_CNIEB6_POSITION                   0x00000006
#define _CNENB_CNIEB6_MASK                       0x00000040
#define _CNENB_CNIEB6_LENGTH                     0x00000001

#define _CNENB_CNIEB7_POSITION                   0x00000007
#define _CNENB_CNIEB7_MASK                       0x00000080
#define _CNENB_CNIEB7_LENGTH                     0x00000001

#define _CNENB_CNIEB8_POSITION                   0x00000008
#define _CNENB_CNIEB8_MASK                       0x00000100
#define _CNENB_CNIEB8_LENGTH                     0x00000001

#define _CNENB_CNIEB9_POSITION                   0x00000009
#define _CNENB_CNIEB9_MASK                       0x00000200
#define _CNENB_CNIEB9_LENGTH                     0x00000001

#define _CNENB_CNIEB10_POSITION                  0x0000000A
#define _CNENB_CNIEB10_MASK                      0x00000400
#define _CNENB_CNIEB10_LENGTH                    0x00000001

#define _CNENB_CNIEB11_POSITION                  0x0000000B
#define _CNENB_CNIEB11_MASK                      0x00000800
#define _CNENB_CNIEB11_LENGTH                    0x00000001

#define _CNENB_CNIEB12_POSITION                  0x0000000C
#define _CNENB_CNIEB12_MASK                      0x00001000
#define _CNENB_CNIEB12_LENGTH                    0x00000001

#define _CNENB_CNIEB13_POSITION                  0x0000000D
#define _CNENB_CNIEB13_MASK                      0x00002000
#define _CNENB_CNIEB13_LENGTH                    0x00000001

#define _CNENB_CNIEB14_POSITION                  0x0000000E
#define _CNENB_CNIEB14_MASK                      0x00004000
#define _CNENB_CNIEB14_LENGTH                    0x00000001

#define _CNENB_CNIEB15_POSITION                  0x0000000F
#define _CNENB_CNIEB15_MASK                      0x00008000
#define _CNENB_CNIEB15_LENGTH                    0x00000001

#define _CNPUB_CNPUB0_POSITION                   0x00000000
#define _CNPUB_CNPUB0_MASK                       0x00000001
#define _CNPUB_CNPUB0_LENGTH                     0x00000001

#define _CNPUB_CNPUB1_POSITION                   0x00000001
#define _CNPUB_CNPUB1_MASK                       0x00000002
#define _CNPUB_CNPUB1_LENGTH                     0x00000001

#define _CNPUB_CNPUB2_POSITION                   0x00000002
#define _CNPUB_CNPUB2_MASK                       0x00000004
#define _CNPUB_CNPUB2_LENGTH                     0x00000001

#define _CNPUB_CNPUB3_POSITION                   0x00000003
#define _CNPUB_CNPUB3_MASK                       0x00000008
#define _CNPUB_CNPUB3_LENGTH                     0x00000001

#define _CNPUB_CNPUB4_POSITION                   0x00000004
#define _CNPUB_CNPUB4_MASK                       0x00000010
#define _CNPUB_CNPUB4_LENGTH                     0x00000001

#define _CNPUB_CNPUB5_POSITION                   0x00000005
#define _CNPUB_CNPUB5_MASK                       0x00000020
#define _CNPUB_CNPUB5_LENGTH                     0x00000001

#define _CNPUB_CNPUB6_POSITION                   0x00000006
#define _CNPUB_CNPUB6_MASK                       0x00000040
#define _CNPUB_CNPUB6_LENGTH                     0x00000001

#define _CNPUB_CNPUB7_POSITION                   0x00000007
#define _CNPUB_CNPUB7_MASK                       0x00000080
#define _CNPUB_CNPUB7_LENGTH                     0x00000001

#define _CNPUB_CNPUB8_POSITION                   0x00000008
#define _CNPUB_CNPUB8_MASK                       0x00000100
#define _CNPUB_CNPUB8_LENGTH                     0x00000001

#define _CNPUB_CNPUB9_POSITION                   0x00000009
#define _CNPUB_CNPUB9_MASK                       0x00000200
#define _CNPUB_CNPUB9_LENGTH                     0x00000001

#define _CNPUB_CNPUB10_POSITION                  0x0000000A
#define _CNPUB_CNPUB10_MASK                      0x00000400
#define _CNPUB_CNPUB10_LENGTH                    0x00000001

#define _CNPUB_CNPUB11_POSITION                  0x0000000B
#define _CNPUB_CNPUB11_MASK                      0x00000800
#define _CNPUB_CNPUB11_LENGTH                    0x00000001

#define _CNPUB_CNPUB12_POSITION                  0x0000000C
#define _CNPUB_CNPUB12_MASK                      0x00001000
#define _CNPUB_CNPUB12_LENGTH                    0x00000001

#define _CNPUB_CNPUB13_POSITION                  0x0000000D
#define _CNPUB_CNPUB13_MASK                      0x00002000
#define _CNPUB_CNPUB13_LENGTH                    0x00000001

#define _CNPUB_CNPUB14_POSITION                  0x0000000E
#define _CNPUB_CNPUB14_MASK                      0x00004000
#define _CNPUB_CNPUB14_LENGTH                    0x00000001

#define _CNPUB_CNPUB15_POSITION                  0x0000000F
#define _CNPUB_CNPUB15_MASK                      0x00008000
#define _CNPUB_CNPUB15_LENGTH                    0x00000001

#define _CNPDB_CNPDB0_POSITION                   0x00000000
#define _CNPDB_CNPDB0_MASK                       0x00000001
#define _CNPDB_CNPDB0_LENGTH                     0x00000001

#define _CNPDB_CNPDB1_POSITION                   0x00000001
#define _CNPDB_CNPDB1_MASK                       0x00000002
#define _CNPDB_CNPDB1_LENGTH                     0x00000001

#define _CNPDB_CNPDB2_POSITION                   0x00000002
#define _CNPDB_CNPDB2_MASK                       0x00000004
#define _CNPDB_CNPDB2_LENGTH                     0x00000001

#define _CNPDB_CNPDB3_POSITION                   0x00000003
#define _CNPDB_CNPDB3_MASK                       0x00000008
#define _CNPDB_CNPDB3_LENGTH                     0x00000001

#define _CNPDB_CNPDB4_POSITION                   0x00000004
#define _CNPDB_CNPDB4_MASK                       0x00000010
#define _CNPDB_CNPDB4_LENGTH                     0x00000001

#define _CNPDB_CNPDB5_POSITION                   0x00000005
#define _CNPDB_CNPDB5_MASK                       0x00000020
#define _CNPDB_CNPDB5_LENGTH                     0x00000001

#define _CNPDB_CNPDB6_POSITION                   0x00000006
#define _CNPDB_CNPDB6_MASK                       0x00000040
#define _CNPDB_CNPDB6_LENGTH                     0x00000001

#define _CNPDB_CNPDB7_POSITION                   0x00000007
#define _CNPDB_CNPDB7_MASK                       0x00000080
#define _CNPDB_CNPDB7_LENGTH                     0x00000001

#define _CNPDB_CNPDB8_POSITION                   0x00000008
#define _CNPDB_CNPDB8_MASK                       0x00000100
#define _CNPDB_CNPDB8_LENGTH                     0x00000001

#define _CNPDB_CNPDB9_POSITION                   0x00000009
#define _CNPDB_CNPDB9_MASK                       0x00000200
#define _CNPDB_CNPDB9_LENGTH                     0x00000001

#define _CNPDB_CNPDB10_POSITION                  0x0000000A
#define _CNPDB_CNPDB10_MASK                      0x00000400
#define _CNPDB_CNPDB10_LENGTH                    0x00000001

#define _CNPDB_CNPDB11_POSITION                  0x0000000B
#define _CNPDB_CNPDB11_MASK                      0x00000800
#define _CNPDB_CNPDB11_LENGTH                    0x00000001

#define _CNPDB_CNPDB12_POSITION                  0x0000000C
#define _CNPDB_CNPDB12_MASK                      0x00001000
#define _CNPDB_CNPDB12_LENGTH                    0x00000001

#define _CNPDB_CNPDB13_POSITION                  0x0000000D
#define _CNPDB_CNPDB13_MASK                      0x00002000
#define _CNPDB_CNPDB13_LENGTH                    0x00000001

#define _CNPDB_CNPDB14_POSITION                  0x0000000E
#define _CNPDB_CNPDB14_MASK                      0x00004000
#define _CNPDB_CNPDB14_LENGTH                    0x00000001

#define _CNPDB_CNPDB15_POSITION                  0x0000000F
#define _CNPDB_CNPDB15_MASK                      0x00008000
#define _CNPDB_CNPDB15_LENGTH                    0x00000001

#define _ANSELB_ANSB0_POSITION                   0x00000000
#define _ANSELB_ANSB0_MASK                       0x00000001
#define _ANSELB_ANSB0_LENGTH                     0x00000001

#define _ANSELB_ANSB1_POSITION                   0x00000001
#define _ANSELB_ANSB1_MASK                       0x00000002
#define _ANSELB_ANSB1_LENGTH                     0x00000001

#define _ANSELB_ANSB2_POSITION                   0x00000002
#define _ANSELB_ANSB2_MASK                       0x00000004
#define _ANSELB_ANSB2_LENGTH                     0x00000001

#define _ANSELB_ANSB3_POSITION                   0x00000003
#define _ANSELB_ANSB3_MASK                       0x00000008
#define _ANSELB_ANSB3_LENGTH                     0x00000001

#define _ANSELB_ANSB4_POSITION                   0x00000004
#define _ANSELB_ANSB4_MASK                       0x00000010
#define _ANSELB_ANSB4_LENGTH                     0x00000001

#define _ANSELB_ANSB5_POSITION                   0x00000005
#define _ANSELB_ANSB5_MASK                       0x00000020
#define _ANSELB_ANSB5_LENGTH                     0x00000001

#define _ANSELB_ANSB6_POSITION                   0x00000006
#define _ANSELB_ANSB6_MASK                       0x00000040
#define _ANSELB_ANSB6_LENGTH                     0x00000001

#define _ANSELB_ANSB7_POSITION                   0x00000007
#define _ANSELB_ANSB7_MASK                       0x00000080
#define _ANSELB_ANSB7_LENGTH                     0x00000001

#define _ANSELB_ANSB9_POSITION                   0x00000009
#define _ANSELB_ANSB9_MASK                       0x00000200
#define _ANSELB_ANSB9_LENGTH                     0x00000001

#define _ANSELB_ANSB10_POSITION                  0x0000000A
#define _ANSELB_ANSB10_MASK                      0x00000400
#define _ANSELB_ANSB10_LENGTH                    0x00000001



/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register FSEC (0x5780)                               */

extern __attribute__((space(prog))) unsigned int _FSEC;
#define _FSEC(x) __attribute__((section("__FSEC.sec"),space(prog))) unsigned int _FSEC = (x);

/*
** Only one invocation of FSEC should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FSEC.
** Multiple options may be combined, as shown:
**
** _FSEC( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Boot Segment Write-Protect bit:
**     BWRP_ON              Boot Segment is write protected
**     BWRP_OFF             Boot Segment may be written
**
**   Boot Segment Code-Protect Level bits:
**     BSS_HIGH             High Security
**     BSS_HIGH_BOOT        High Security
**     BSS_STNDRD           Standard Security
**     BSS_STNDRD_BOOT      Standard Security
**     BSS_DISABLED         No Protection (other than BWRP)
**     BSS_NO_BOOT          No Protection (other than BWRP)
**
**   Boot Segment Control bit:
**     BSS2_ON              Boot Segment size determined by FBSLIM
**     BSS2_OFF             No Boot Segment
**
**   General Segment Write-Protect bit:
**     GWRP_ON              General Segment is write protected
**     GWRP_OFF             General Segment may be written
**
**   General Segment Code-Protect Level bits:
**     GSS_HIGH             High Security
**     GSS_HIGH_GENERAL     High Security
**     GSS_STNDRD           Standard Security
**     GSS_STNDRD_GENERAL   Standard Security
**     GSS_DISABLED         No Protection (other than GWRP)
**     GSS_NO_GENERAL       No Protection (other than GWRP)
**
**   Configuration Segment Write-Protect bit:
**     CWRP_ON              Configuration Segment is write protected
**     CWRP_OFF             Configuration Segment may be written
**
**   Configuration Segment Code-Protect Level bits:
**     CSS_HIGH             High Security
**     CSS_HIGH_CONFIG      High Security
**     CSS_ENHNCD           Enhanced Security
**     CSS_ENHNCD_CONFIG    Enhanced Security
**     CSS_STNDRD           Standard Security
**     CSS_STNDRD_CONFIG    Standard Security
**     CSS_DISABLED         No Protection (other than CWRP)
**     CSS_NO_CONFIG        No Protection (other than CWRP)
**
**   Alternate Interrupt Vector Table bit:
**     AIVTDIS_ON           Enabled AIVT
**     AIVTDIS_OFF          Disabled AIVT
**
*/

#define BWRP_ON              0xFFFE
#define BWRP_OFF             0xFFFF

#define BSS_HIGH             0xFFF9
#define BSS_HIGH_BOOT        0xFFF9
#define BSS_STNDRD           0xFFFD
#define BSS_STNDRD_BOOT      0xFFFD
#define BSS_DISABLED         0xFFFF
#define BSS_NO_BOOT          0xFFFF

#define BSS2_ON              0xFFF7
#define BSS2_OFF             0xFFFF

#define GWRP_ON              0xFFDF
#define GWRP_OFF             0xFFFF

#define GSS_HIGH             0xFF3F
#define GSS_HIGH_GENERAL     0xFF3F
#define GSS_STNDRD           0xFFBF
#define GSS_STNDRD_GENERAL   0xFFBF
#define GSS_DISABLED         0xFFFF
#define GSS_NO_GENERAL       0xFFFF

#define CWRP_ON              0xFEFF
#define CWRP_OFF             0xFFFF

#define CSS_HIGH             0xF1FF
#define CSS_HIGH_CONFIG      0xF1FF
#define CSS_ENHNCD           0xF9FF
#define CSS_ENHNCD_CONFIG    0xF9FF
#define CSS_STNDRD           0xFDFF
#define CSS_STNDRD_CONFIG    0xFDFF
#define CSS_DISABLED         0xFFFF
#define CSS_NO_CONFIG        0xFFFF

#define AIVTDIS_ON           0x7FFF
#define AIVTDIS_OFF          0xFFFF

/* Register FBSLIM (0x5790)                               */

extern __attribute__((space(prog))) unsigned int _FBSLIM;
#define _FBSLIM(x) __attribute__((section("__FBSLIM.sec"),space(prog))) unsigned int _FBSLIM = (x);

/*
** Only one invocation of FBSLIM should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FBSLIM.
** Multiple options may be combined, as shown:
**
** _FBSLIM( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Boot Segment Flash Page Address Limit bits:
**
*/


/* Register FSIGN (0x5794)                               */

extern __attribute__((space(prog))) unsigned int _FSIGN;
#define _FSIGN(x) __attribute__((section("__FSIGN.sec"),space(prog))) unsigned int _FSIGN = (x);

/*
** Only one invocation of FSIGN should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FSIGN.
** Multiple options may be combined, as shown:
**
** _FSIGN( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
*/

/* Register FOSCSEL (0x5798)                               */

extern __attribute__((space(prog))) unsigned int _FOSCSEL;
#define _FOSCSEL(x) __attribute__((section("__FOSCSEL.sec"),space(prog))) unsigned int _FOSCSEL = (x);

/*
** Only one invocation of FOSCSEL should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSCSEL.
** Multiple options may be combined, as shown:
**
** _FOSCSEL( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Oscillator Source Selection:
**     FNOSC_FRC            Internal Fast RC (FRC)
**     FNOSC_FRCPLL         Fast RC Oscillator with divide-by-N with PLL module (FRCPLL) 
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator with PLL module (XT + PLL, HS + PLL, EC + PLL)
**     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
**     FNOSC_FRCDIV16       Fast RC Oscillator with divide-by-16
**     FNOSC_FRCDIVN        Internal Fast RC (FRC) Oscillator with postscaler
**
**   Two-speed Oscillator Start-up Enable bit:
**     IESO_OFF             Start up with user-selected oscillator source
**     IESO_ON              Start up device with FRC, then switch to user-selected oscillator source
**
*/

#define FNOSC_FRC            0xFFF8
#define FNOSC_FRCPLL         0xFFF9
#define FNOSC_PRI            0xFFFA
#define FNOSC_PRIPLL         0xFFFB
#define FNOSC_LPRC           0xFFFD
#define FNOSC_FRCDIV16       0xFFFE
#define FNOSC_FRCDIVN        0xFFFF

#define IESO_OFF             0xFF7F
#define IESO_ON              0xFFFF

/* Register FOSC (0x579c)                               */

extern __attribute__((space(prog))) unsigned int _FOSC;
#define _FOSC(x) __attribute__((section("__FOSC.sec"),space(prog))) unsigned int _FOSC = (x);

/*
** Only one invocation of FOSC should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FOSC.
** Multiple options may be combined, as shown:
**
** _FOSC( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Primary Oscillator Mode Select bits:
**     POSCMD_EC            EC (External Clock) Mode
**     POSCMD_XT            XT Crystal Oscillator Mode
**     POSCMD_HS            HS Crystal Oscillator Mode
**     POSCMD_NONE          Primary Oscillator disabled
**
**   OSC2 Pin Function bit:
**     OSCIOFNC_ON          OSC2 is general purpose digital I/O pin
**     OSCIOFNC_OFF         OSC2 is clock output
**
**   Peripheral pin select configuration:
**     IOL1WAY_OFF          Allow multiple reconfigurations
**     IOL1WAY_ON           Allow only one reconfiguration
**
**   Clock Switching Mode bits:
**     FCKSM_CSECME         Both Clock switching and Fail-safe Clock Monitor are enabled
**     FCKSM_CSECMD         Clock switching is enabled,Fail-safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Both Clock switching and Fail-safe Clock Monitor are disabled
**
**   PLL Lock Enable Bit:
**     PLLKEN_OFF           Clock switch will not wait for the PLL lock signal
**     PLLKEN_ON            Clock switch to PLL source will wait until the PLL lock signal is valid
**
*/

#define POSCMD_EC            0xFFFC
#define POSCMD_XT            0xFFFD
#define POSCMD_HS            0xFFFE
#define POSCMD_NONE          0xFFFF

#define OSCIOFNC_ON          0xFFFB
#define OSCIOFNC_OFF         0xFFFF

#define IOL1WAY_OFF          0xFFDF
#define IOL1WAY_ON           0xFFFF

#define FCKSM_CSECME         0xFF3F
#define FCKSM_CSECMD         0xFF7F
#define FCKSM_CSDCMD         0xFFBF

#define PLLKEN_OFF           0xFEFF
#define PLLKEN_ON            0xFFFF

/* Register FWDT (0x57a0)                               */

extern __attribute__((space(prog))) unsigned int _FWDT;
#define _FWDT(x) __attribute__((section("__FWDT.sec"),space(prog))) unsigned int _FWDT = (x);

/*
** Only one invocation of FWDT should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FWDT.
** Multiple options may be combined, as shown:
**
** _FWDT( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Watchdog Timer Postscaler bits:
**     WDTPOST_PS1          1:1
**     WDTPOST_PS2          1:2
**     WDTPOST_PS4          1:4
**     WDTPOST_PS8          1:8
**     WDTPOST_PS16         1:16
**     WDTPOST_PS32         1:32
**     WDTPOST_PS64         1:64
**     WDTPOST_PS128        1:128
**     WDTPOST_PS256        1:256
**     WDTPOST_PS512        1:512
**     WDTPOST_PS1024       1:1,024
**     WDTPOST_PS2048       1:2,048
**     WDTPOST_PS4096       1:4,096
**     WDTPOST_PS8192       1:8,192
**     WDTPOST_PS16384      1:16,384
**     WDTPOST_PS32768      1:32,768
**
**   Watchdog Timer Prescaler bit:
**     WDTPRE_PR32          1:32
**     WDTPRE_PR128         1:128
**
**   Watchdog Timer Enable bits:
**     WDTEN_OFF            WDT and SWDTEN disabled
**     WDTEN_ON_DIS_SLEEP   WDT Enabled only while device is active (disabled in sleep, SWDTEN disabled)
**     WDTEN_ON_SWDTEN      WDT Enabled/Disabled (controlled using SWDTEN bit)
**     WDTEN_ON             WDT Enabled
**
**   Watchdog Timer Window Enable bit:
**     WINDIS_ON            Watchdog Timer in Window mode
**     WINDIS_OFF           Watchdog Timer in Non-Window mode
**
**   Watchdog Timer Window Select bits:
**     WDTWIN_WIN75         WDT Windo is 75% of WDT period
**     WDTWIN_WIN50         WDT Window is 50% of WDT period
**     WDTWIN_WIN37         WDT Window is 37.5% of WDT period
**     WDTWIN_WIN25         WDT Window is 25% of WDT period
**
*/

#define WDTPOST_PS1          0xFFF0
#define WDTPOST_PS2          0xFFF1
#define WDTPOST_PS4          0xFFF2
#define WDTPOST_PS8          0xFFF3
#define WDTPOST_PS16         0xFFF4
#define WDTPOST_PS32         0xFFF5
#define WDTPOST_PS64         0xFFF6
#define WDTPOST_PS128        0xFFF7
#define WDTPOST_PS256        0xFFF8
#define WDTPOST_PS512        0xFFF9
#define WDTPOST_PS1024       0xFFFA
#define WDTPOST_PS2048       0xFFFB
#define WDTPOST_PS4096       0xFFFC
#define WDTPOST_PS8192       0xFFFD
#define WDTPOST_PS16384      0xFFFE
#define WDTPOST_PS32768      0xFFFF

#define WDTPRE_PR32          0xFFEF
#define WDTPRE_PR128         0xFFFF

#define WDTEN_OFF            0xFF9F
#define WDTEN_ON_DIS_SLEEP   0xFFBF
#define WDTEN_ON_SWDTEN      0xFFDF
#define WDTEN_ON             0xFFFF

#define WINDIS_ON            0xFF7F
#define WINDIS_OFF           0xFFFF

#define WDTWIN_WIN75         0xFCFF
#define WDTWIN_WIN50         0xFDFF
#define WDTWIN_WIN37         0xFEFF
#define WDTWIN_WIN25         0xFFFF

/* Register FPOR (0x57a4)                               */

extern __attribute__((space(prog))) unsigned int _FPOR;
#define _FPOR(x) __attribute__((section("__FPOR.sec"),space(prog))) unsigned int _FPOR = (x);

/*
** Only one invocation of FPOR should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FPOR.
** Multiple options may be combined, as shown:
**
** _FPOR( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
*/

/* Register FICD (0x57a8)                               */

extern __attribute__((space(prog))) unsigned int _FICD;
#define _FICD(x) __attribute__((section("__FICD.sec"),space(prog))) unsigned int _FICD = (x);

/*
** Only one invocation of FICD should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FICD.
** Multiple options may be combined, as shown:
**
** _FICD( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   ICD Communication Channel Select bits:
**     ICS_NONE             Reserved, do not use
**     ICS_PGD3             Communicate on PGEC3 and PGED3
**     ICS_PGD2             Communicate on PGEC2 and PGED2
**     ICS_PGD1             Communicate on PGEC1 and PGED1
**
**   JTAG Enable bit:
**     JTAGEN_OFF           JTAG is disabled
**     JTAGEN_ON            JTAG is enabled
**
*/

#define ICS_NONE             0xFFFC
#define ICS_PGD3             0xFFFD
#define ICS_PGD2             0xFFFE
#define ICS_PGD1             0xFFFF

#define JTAGEN_OFF           0xFFDF
#define JTAGEN_ON            0xFFFF

/* Register FDEVOPT (0x57ac)                               */

extern __attribute__((space(prog))) unsigned int _FDEVOPT;
#define _FDEVOPT(x) __attribute__((section("__FDEVOPT.sec"),space(prog))) unsigned int _FDEVOPT = (x);

/*
** Only one invocation of FDEVOPT should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FDEVOPT.
** Multiple options may be combined, as shown:
**
** _FDEVOPT( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   PWMx Lock Enable bit:
**     PWMLOCK_OFF          PWM registers may be written without key sequence
**     PWMLOCK_ON           Certain PWM registers may only be written after key sequency
**
**   Alternate I2C1 Pin bit:
**     ALTI2C1_ON           I2C1 mapped to ASDA1/ASCL1 pins
**     ALTI2C1_OFF          I2C1 mapped to SDA1/SCL1 pins
**
*/

#define PWMLOCK_OFF          0xFFFE
#define PWMLOCK_ON           0xFFFF

#define ALTI2C1_ON           0xFFF7
#define ALTI2C1_OFF          0xFFFF

/* Register FALTREG (0x57b0)                               */

extern __attribute__((space(prog))) unsigned int _FALTREG;
#define _FALTREG(x) __attribute__((section("__FALTREG.sec"),space(prog))) unsigned int _FALTREG = (x);

/*
** Only one invocation of FALTREG should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FALTREG.
** Multiple options may be combined, as shown:
**
** _FALTREG( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 1 bits:
**     CTXT1_IPL1           Alternate Register set assigned to IPL level 1
**     CTXT1_IPL2           Alternate Register set assigned to IPL level 2
**     CTXT1_IPL3           Alternate Register set assigned to IPL level 3
**     CTXT1_IPL4           Alternate Register set assigned to IPL level 4
**     CTXT1_IPL5           Alternate Register set assigned to IPL level 5
**     CTXT1_IPL6           Alternate Register set assigned to IPL level 6
**     CTXT1_IPL7           Alternate Register set assigned to IPL level 7
**     CTXT1_OFF            Not Assigned
**
**   Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 2 bits:
**     CTXT2_IPL1           Alternate Register set assigned to IPL level 1
**     CTXT2_IPL2           Alternate Register set assigned to IPL level 2
**     CTXT2_IPL3           Alternate Register set assigned to IPL level 3
**     CTXT2_IPL4           Alternate Register set assigned to IPL level 4
**     CTXT2_IPL5           Alternate Register set assigned to IPL level 5
**     CTXT2_IPL6           Alternate Register set assigned to IPL level 6
**     CTXT2_IPL7           Alternate Register set assigned to IPL level 7
**     CTXT2_OFF            Not Assigned
**
*/

#define CTXT1_IPL1           0xFFF8
#define CTXT1_IPL2           0xFFF9
#define CTXT1_IPL3           0xFFFA
#define CTXT1_IPL4           0xFFFB
#define CTXT1_IPL5           0xFFFC
#define CTXT1_IPL6           0xFFFD
#define CTXT1_IPL7           0xFFFE
#define CTXT1_OFF            0xFFFF

#define CTXT2_IPL1           0xFF8F
#define CTXT2_IPL2           0xFF9F
#define CTXT2_IPL3           0xFFAF
#define CTXT2_IPL4           0xFFBF
#define CTXT2_IPL5           0xFFCF
#define CTXT2_IPL6           0xFFDF
#define CTXT2_IPL7           0xFFEF
#define CTXT2_OFF            0xFFFF



/*
 * Memory Segments Sizes
 */

#define __AIVT_BASE 0x0
#define __AIVT_LENGTH 0x100

#define __RESET_BASE 0x0
#define __RESET_LENGTH 0x4

#define __IVT_BASE 0x4
#define __IVT_LENGTH 0x1fc

#define __PROGRAM_BASE 0x200
#define __PROGRAM_LENGTH 0x5580

#define __FSEC_BASE 0x5780
#define __FSEC_LENGTH 0x2

#define __FBSLIM_BASE 0x5790
#define __FBSLIM_LENGTH 0x2

#define __FSIGN_BASE 0x5794
#define __FSIGN_LENGTH 0x2

#define __FOSCSEL_BASE 0x5798
#define __FOSCSEL_LENGTH 0x2

#define __FOSC_BASE 0x579c
#define __FOSC_LENGTH 0x2

#define __FWDT_BASE 0x57a0
#define __FWDT_LENGTH 0x2

#define __FPOR_BASE 0x57a4
#define __FPOR_LENGTH 0x2

#define __FICD_BASE 0x57a8
#define __FICD_LENGTH 0x2

#define __FDEVOPT_BASE 0x57ac
#define __FDEVOPT_LENGTH 0x2

#define __FALTREG_BASE 0x57b0
#define __FALTREG_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x1000

#define __DATA_BASE 0x1000
#define __DATA_LENGTH 0x800


#endif
