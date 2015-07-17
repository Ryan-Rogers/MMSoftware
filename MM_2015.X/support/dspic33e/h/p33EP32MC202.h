/*-------------------------------------------------------------------------
 * MPLAB-Cxx  dsPIC33EP32MC202 processor header
 *
 * (c) Copyright 1999-2014 Microchip Technology, All rights reserved
 * Part support version v1.22.A(19-Aug-2014)
 *-------------------------------------------------------------------------*/

#ifndef __dsPIC33EP32MC202__
#error "Include file does not match processor setting"
#endif

#ifndef __33EP32MC202_H
#define __33EP32MC202_H

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

#define MSTRPR MSTRPR
extern volatile unsigned int  MSTRPR __attribute__((__sfr__));
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

#define TMR4 TMR4
extern volatile unsigned int  TMR4 __attribute__((__sfr__));
#define TMR5HLD TMR5HLD
extern volatile unsigned int  TMR5HLD __attribute__((__sfr__));
#define TMR5 TMR5
extern volatile unsigned int  TMR5 __attribute__((__sfr__));
#define PR4 PR4
extern volatile unsigned int  PR4 __attribute__((__sfr__));
#define PR5 PR5
extern volatile unsigned int  PR5 __attribute__((__sfr__));
#define T4CON T4CON
extern volatile unsigned int  T4CON __attribute__((__sfr__));
__extension__ typedef struct tagT4CONBITS {
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
} T4CONBITS;
extern volatile T4CONBITS T4CONbits __attribute__((__sfr__));

#define T5CON T5CON
extern volatile unsigned int  T5CON __attribute__((__sfr__));
__extension__ typedef struct tagT5CONBITS {
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
} T5CONBITS;
extern volatile T5CONBITS T5CONbits __attribute__((__sfr__));

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
      unsigned IC32:1;
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

#define IC1BUF IC1BUF
extern volatile unsigned int  IC1BUF __attribute__((__sfr__));
#define IC1TMR IC1TMR
extern volatile unsigned int  IC1TMR __attribute__((__sfr__));
#define IC2CON1 IC2CON1
extern volatile unsigned int  IC2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC2CON1BITS {
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
} IC2CON1BITS;
extern volatile IC2CON1BITS IC2CON1bits __attribute__((__sfr__));

#define IC2CON2 IC2CON2
extern volatile unsigned int  IC2CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC2CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned :1;
      unsigned TRIGSTAT:1;
      unsigned ICTRIG:1;
      unsigned IC32:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
    };
  };
} IC2CON2BITS;
extern volatile IC2CON2BITS IC2CON2bits __attribute__((__sfr__));

#define IC2BUF IC2BUF
extern volatile unsigned int  IC2BUF __attribute__((__sfr__));
#define IC2TMR IC2TMR
extern volatile unsigned int  IC2TMR __attribute__((__sfr__));
#define IC3CON1 IC3CON1
extern volatile unsigned int  IC3CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC3CON1BITS {
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
} IC3CON1BITS;
extern volatile IC3CON1BITS IC3CON1bits __attribute__((__sfr__));

#define IC3CON2 IC3CON2
extern volatile unsigned int  IC3CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC3CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned :1;
      unsigned TRIGSTAT:1;
      unsigned ICTRIG:1;
      unsigned IC32:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
    };
  };
} IC3CON2BITS;
extern volatile IC3CON2BITS IC3CON2bits __attribute__((__sfr__));

#define IC3BUF IC3BUF
extern volatile unsigned int  IC3BUF __attribute__((__sfr__));
#define IC3TMR IC3TMR
extern volatile unsigned int  IC3TMR __attribute__((__sfr__));
#define IC4CON1 IC4CON1
extern volatile unsigned int  IC4CON1 __attribute__((__sfr__));
__extension__ typedef struct tagIC4CON1BITS {
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
} IC4CON1BITS;
extern volatile IC4CON1BITS IC4CON1bits __attribute__((__sfr__));

#define IC4CON2 IC4CON2
extern volatile unsigned int  IC4CON2 __attribute__((__sfr__));
__extension__ typedef struct tagIC4CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned :1;
      unsigned TRIGSTAT:1;
      unsigned ICTRIG:1;
      unsigned IC32:1;
    };
    struct {
      unsigned SYNCSEL0:1;
      unsigned SYNCSEL1:1;
      unsigned SYNCSEL2:1;
      unsigned SYNCSEL3:1;
      unsigned SYNCSEL4:1;
    };
  };
} IC4CON2BITS;
extern volatile IC4CON2BITS IC4CON2bits __attribute__((__sfr__));

#define IC4BUF IC4BUF
extern volatile unsigned int  IC4BUF __attribute__((__sfr__));
#define IC4TMR IC4TMR
extern volatile unsigned int  IC4TMR __attribute__((__sfr__));
#define QEI1CON QEI1CON
extern volatile unsigned int  QEI1CON __attribute__((__sfr__));
typedef struct tagQEI1CONBITS {
  unsigned CCM:2;
  unsigned GATEN:1;
  unsigned CNTPOL:1;
  unsigned INTDIV:3;
  unsigned :1;
  unsigned IMV:2;
  unsigned PIMOD:3;
  unsigned QEISIDL:1;
  unsigned :1;
  unsigned QEIEN:1;
} QEI1CONBITS;
extern volatile QEI1CONBITS QEI1CONbits __attribute__((__sfr__));

#define QEI1IOC QEI1IOC
extern volatile unsigned int  QEI1IOC __attribute__((__sfr__));
typedef struct tagQEI1IOCBITS {
  unsigned QEA:1;
  unsigned QEB:1;
  unsigned INDEX:1;
  unsigned HOME:1;
  unsigned QEAPOL:1;
  unsigned QEBPOL:1;
  unsigned IDXPOL:1;
  unsigned HOMPOL:1;
  unsigned SWPAB:1;
  unsigned OUTFNC:2;
  unsigned QFDIV:3;
  unsigned FLTREN:1;
  unsigned QCAPEN:1;
} QEI1IOCBITS;
extern volatile QEI1IOCBITS QEI1IOCbits __attribute__((__sfr__));

#define QEI1STAT QEI1STAT
extern volatile unsigned int  QEI1STAT __attribute__((__sfr__));
typedef struct tagQEI1STATBITS {
  unsigned IDXIEN:1;
  unsigned IDXIRQ:1;
  unsigned HOMIEN:1;
  unsigned HOMIRQ:1;
  unsigned VELOVIEN:1;
  unsigned VELOVIRQ:1;
  unsigned PCIIEN:1;
  unsigned PCIIRQ:1;
  unsigned POSOVIEN:1;
  unsigned POSOVIRQ:1;
  unsigned PCLEQIEN:1;
  unsigned PCLEQIRQ:1;
  unsigned PCHEQIEN:1;
  unsigned PCHEQIRQ:1;
} QEI1STATBITS;
extern volatile QEI1STATBITS QEI1STATbits __attribute__((__sfr__));

#define POS1CNTL POS1CNTL
extern volatile unsigned int  POS1CNTL __attribute__((__sfr__));
#define POS1CNTH POS1CNTH
extern volatile unsigned int  POS1CNTH __attribute__((__sfr__));
#define POS1HLD POS1HLD
extern volatile unsigned int  POS1HLD __attribute__((__sfr__));
#define VEL1CNT VEL1CNT
extern volatile unsigned int  VEL1CNT __attribute__((__sfr__));
#define INT1TMRL INT1TMRL
extern volatile unsigned int  INT1TMRL __attribute__((__sfr__));
#define INT1TMRH INT1TMRH
extern volatile unsigned int  INT1TMRH __attribute__((__sfr__));
#define INT1HLDL INT1HLDL
extern volatile unsigned int  INT1HLDL __attribute__((__sfr__));
#define INT1HLDH INT1HLDH
extern volatile unsigned int  INT1HLDH __attribute__((__sfr__));
#define INDX1CNTL INDX1CNTL
extern volatile unsigned int  INDX1CNTL __attribute__((__sfr__));
#define INDX1CNTH INDX1CNTH
extern volatile unsigned int  INDX1CNTH __attribute__((__sfr__));
#define INDX1HLD INDX1HLD
extern volatile unsigned int  INDX1HLD __attribute__((__sfr__));
#define QEI1GECL QEI1GECL
extern volatile unsigned int  QEI1GECL __attribute__((__sfr__));
#define QEI1ICL QEI1ICL
extern volatile unsigned int  QEI1ICL __attribute__((__sfr__));
#define QEI1GECH QEI1GECH
extern volatile unsigned int  QEI1GECH __attribute__((__sfr__));
#define QEI1ICH QEI1ICH
extern volatile unsigned int  QEI1ICH __attribute__((__sfr__));
#define QEI1LECL QEI1LECL
extern volatile unsigned int  QEI1LECL __attribute__((__sfr__));
#define QEI1LECH QEI1LECH
extern volatile unsigned int  QEI1LECH __attribute__((__sfr__));
#define I2C1RCV I2C1RCV
extern volatile unsigned int  I2C1RCV __attribute__((__sfr__));
#define I2C1TRN I2C1TRN
extern volatile unsigned int  I2C1TRN __attribute__((__sfr__));
#define I2C1BRG I2C1BRG
extern volatile unsigned int  I2C1BRG __attribute__((__sfr__));
#define I2C1CON I2C1CON
extern volatile unsigned int  I2C1CON __attribute__((__sfr__));
typedef struct tagI2C1CONBITS {
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
  unsigned IPMIEN:1;
  unsigned SCLREL:1;
  unsigned I2CSIDL:1;
  unsigned :1;
  unsigned I2CEN:1;
} I2C1CONBITS;
extern volatile I2C1CONBITS I2C1CONbits __attribute__((__sfr__));

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
  unsigned :3;
  unsigned TRSTAT:1;
  unsigned ACKSTAT:1;
} I2C1STATBITS;
extern volatile I2C1STATBITS I2C1STATbits __attribute__((__sfr__));

#define I2C1ADD I2C1ADD
extern volatile unsigned int  I2C1ADD __attribute__((__sfr__));
#define I2C1MSK I2C1MSK
extern volatile unsigned int  I2C1MSK __attribute__((__sfr__));
#define I2C2RCV I2C2RCV
extern volatile unsigned int  I2C2RCV __attribute__((__sfr__));
#define I2C2TRN I2C2TRN
extern volatile unsigned int  I2C2TRN __attribute__((__sfr__));
#define I2C2BRG I2C2BRG
extern volatile unsigned int  I2C2BRG __attribute__((__sfr__));
#define I2C2CON I2C2CON
extern volatile unsigned int  I2C2CON __attribute__((__sfr__));
typedef struct tagI2C2CONBITS {
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
  unsigned IPMIEN:1;
  unsigned SCLREL:1;
  unsigned I2CSIDL:1;
  unsigned :1;
  unsigned I2CEN:1;
} I2C2CONBITS;
extern volatile I2C2CONBITS I2C2CONbits __attribute__((__sfr__));

#define I2C2STAT I2C2STAT
extern volatile unsigned int  I2C2STAT __attribute__((__sfr__));
typedef struct tagI2C2STATBITS {
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
  unsigned :3;
  unsigned TRSTAT:1;
  unsigned ACKSTAT:1;
} I2C2STATBITS;
extern volatile I2C2STATBITS I2C2STATbits __attribute__((__sfr__));

#define I2C2ADD I2C2ADD
extern volatile unsigned int  I2C2ADD __attribute__((__sfr__));
#define I2C2MSK I2C2MSK
extern volatile unsigned int  I2C2MSK __attribute__((__sfr__));

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
#define U2MODE U2MODE
extern volatile unsigned int  U2MODE __attribute__((__sfr__));
__extension__ typedef struct tagU2MODEBITS {
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
} U2MODEBITS;
extern volatile U2MODEBITS U2MODEbits __attribute__((__sfr__));

#define U2STA U2STA
extern volatile unsigned int  U2STA __attribute__((__sfr__));
__extension__ typedef struct tagU2STABITS {
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
} U2STABITS;
extern volatile U2STABITS U2STAbits __attribute__((__sfr__));

#define U2TXREG U2TXREG
extern volatile unsigned int  U2TXREG __attribute__((__sfr__));
#define U2RXREG U2RXREG
extern volatile unsigned int  U2RXREG __attribute__((__sfr__));
#define U2BRG U2BRG
extern volatile unsigned int  U2BRG __attribute__((__sfr__));

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
typedef struct tagSPI1CON2BITS {
  unsigned SPIBEN:1;
  unsigned FRMDLY:1;
  unsigned :11;
  unsigned FRMPOL:1;
  unsigned SPIFSD:1;
  unsigned FRMEN:1;
} SPI1CON2BITS;
extern volatile SPI1CON2BITS SPI1CON2bits __attribute__((__sfr__));

#define SPI1BUF SPI1BUF
extern volatile unsigned int  SPI1BUF __attribute__((__sfr__));
#define SPI2STAT SPI2STAT
extern volatile unsigned int  SPI2STAT __attribute__((__sfr__));
__extension__ typedef struct tagSPI2STATBITS {
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
} SPI2STATBITS;
extern volatile SPI2STATBITS SPI2STATbits __attribute__((__sfr__));

#define SPI2CON1 SPI2CON1
extern volatile unsigned int  SPI2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSPI2CON1BITS {
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
} SPI2CON1BITS;
extern volatile SPI2CON1BITS SPI2CON1bits __attribute__((__sfr__));

#define SPI2CON2 SPI2CON2
extern volatile unsigned int  SPI2CON2 __attribute__((__sfr__));
typedef struct tagSPI2CON2BITS {
  unsigned SPIBEN:1;
  unsigned FRMDLY:1;
  unsigned :11;
  unsigned FRMPOL:1;
  unsigned SPIFSD:1;
  unsigned FRMEN:1;
} SPI2CON2BITS;
extern volatile SPI2CON2BITS SPI2CON2bits __attribute__((__sfr__));

#define SPI2BUF SPI2BUF
extern volatile unsigned int  SPI2BUF __attribute__((__sfr__));
#define ADC1BUF0 ADC1BUF0
extern volatile unsigned int  ADC1BUF0 __attribute__((__sfr__));
#define ADC1BUF1 ADC1BUF1
extern volatile unsigned int  ADC1BUF1 __attribute__((__sfr__));
#define ADC1BUF2 ADC1BUF2
extern volatile unsigned int  ADC1BUF2 __attribute__((__sfr__));
#define ADC1BUF3 ADC1BUF3
extern volatile unsigned int  ADC1BUF3 __attribute__((__sfr__));
#define ADC1BUF4 ADC1BUF4
extern volatile unsigned int  ADC1BUF4 __attribute__((__sfr__));
#define ADC1BUF5 ADC1BUF5
extern volatile unsigned int  ADC1BUF5 __attribute__((__sfr__));
#define ADC1BUF6 ADC1BUF6
extern volatile unsigned int  ADC1BUF6 __attribute__((__sfr__));
#define ADC1BUF7 ADC1BUF7
extern volatile unsigned int  ADC1BUF7 __attribute__((__sfr__));
#define ADC1BUF8 ADC1BUF8
extern volatile unsigned int  ADC1BUF8 __attribute__((__sfr__));
#define ADC1BUF9 ADC1BUF9
extern volatile unsigned int  ADC1BUF9 __attribute__((__sfr__));
#define ADC1BUFA ADC1BUFA
extern volatile unsigned int  ADC1BUFA __attribute__((__sfr__));
#define ADC1BUFB ADC1BUFB
extern volatile unsigned int  ADC1BUFB __attribute__((__sfr__));
#define ADC1BUFC ADC1BUFC
extern volatile unsigned int  ADC1BUFC __attribute__((__sfr__));
#define ADC1BUFD ADC1BUFD
extern volatile unsigned int  ADC1BUFD __attribute__((__sfr__));
#define ADC1BUFE ADC1BUFE
extern volatile unsigned int  ADC1BUFE __attribute__((__sfr__));
#define ADC1BUFF ADC1BUFF
extern volatile unsigned int  ADC1BUFF __attribute__((__sfr__));
#define AD1CON1 AD1CON1
extern volatile unsigned int  AD1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON1BITS {
  union {
    struct {
      unsigned DONE:1;
      unsigned SAMP:1;
      unsigned ASAM:1;
      unsigned SIMSAM:1;
      unsigned SSRCG:1;
      unsigned SSRC:3;
      unsigned FORM:2;
      unsigned AD12B:1;
      unsigned :1;
      unsigned ADDMABM:1;
      unsigned ADSIDL:1;
      unsigned :1;
      unsigned ADON:1;
    };
    struct {
      unsigned :5;
      unsigned SSRC0:1;
      unsigned SSRC1:1;
      unsigned SSRC2:1;
      unsigned FORM0:1;
      unsigned FORM1:1;
    };
  };
} AD1CON1BITS;
extern volatile AD1CON1BITS AD1CON1bits __attribute__((__sfr__));

#define AD1CON2 AD1CON2
extern volatile unsigned int  AD1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON2BITS {
  union {
    struct {
      unsigned ALTS:1;
      unsigned BUFM:1;
      unsigned SMPI:5;
      unsigned BUFS:1;
      unsigned CHPS:2;
      unsigned CSCNA:1;
      unsigned :2;
      unsigned VCFG:3;
    };
    struct {
      unsigned :2;
      unsigned SMPI0:1;
      unsigned SMPI1:1;
      unsigned SMPI2:1;
      unsigned SMPI3:1;
      unsigned SMPI4:1;
      unsigned :1;
      unsigned CHPS0:1;
      unsigned CHPS1:1;
      unsigned :3;
      unsigned VCFG0:1;
      unsigned VCFG1:1;
      unsigned VCFG2:1;
    };
  };
} AD1CON2BITS;
extern volatile AD1CON2BITS AD1CON2bits __attribute__((__sfr__));

#define AD1CON3 AD1CON3
extern volatile unsigned int  AD1CON3 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON3BITS {
  union {
    struct {
      unsigned ADCS:8;
      unsigned SAMC:5;
      unsigned :2;
      unsigned ADRC:1;
    };
    struct {
      unsigned ADCS0:1;
      unsigned ADCS1:1;
      unsigned ADCS2:1;
      unsigned ADCS3:1;
      unsigned ADCS4:1;
      unsigned ADCS5:1;
      unsigned ADCS6:1;
      unsigned ADCS7:1;
      unsigned SAMC0:1;
      unsigned SAMC1:1;
      unsigned SAMC2:1;
      unsigned SAMC3:1;
      unsigned SAMC4:1;
    };
  };
} AD1CON3BITS;
extern volatile AD1CON3BITS AD1CON3bits __attribute__((__sfr__));

#define AD1CHS123 AD1CHS123
extern volatile unsigned int  AD1CHS123 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CHS123BITS {
  union {
    struct {
      unsigned CH123SA:1;
      unsigned CH123NA:2;
      unsigned :5;
      unsigned CH123SB:1;
      unsigned CH123NB:2;
    };
    struct {
      unsigned :1;
      unsigned CH123NA0:1;
      unsigned CH123NA1:1;
      unsigned :6;
      unsigned CH123NB0:1;
      unsigned CH123NB1:1;
    };
  };
} AD1CHS123BITS;
extern volatile AD1CHS123BITS AD1CHS123bits __attribute__((__sfr__));

#define AD1CHS0 AD1CHS0
extern volatile unsigned int  AD1CHS0 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CHS0BITS {
  union {
    struct {
      unsigned CH0SA:5;
      unsigned :2;
      unsigned CH0NA:1;
      unsigned CH0SB:5;
      unsigned :2;
      unsigned CH0NB:1;
    };
    struct {
      unsigned CH0SA0:1;
      unsigned CH0SA1:1;
      unsigned CH0SA2:1;
      unsigned CH0SA3:1;
      unsigned CH0SA4:1;
      unsigned :3;
      unsigned CH0SB0:1;
      unsigned CH0SB1:1;
      unsigned CH0SB2:1;
      unsigned CH0SB3:1;
      unsigned CH0SB4:1;
    };
  };
} AD1CHS0BITS;
extern volatile AD1CHS0BITS AD1CHS0bits __attribute__((__sfr__));

#define AD1CSSH AD1CSSH
extern volatile unsigned int  AD1CSSH __attribute__((__sfr__));
typedef struct tagAD1CSSHBITS {
  unsigned :8;
  unsigned CSS24:1;
  unsigned CSS25:1;
  unsigned CSS26:1;
  unsigned :3;
  unsigned CSS30:1;
  unsigned CSS31:1;
} AD1CSSHBITS;
extern volatile AD1CSSHBITS AD1CSSHbits __attribute__((__sfr__));

#define AD1CSSL AD1CSSL
extern volatile unsigned int  AD1CSSL __attribute__((__sfr__));
typedef struct tagAD1CSSLBITS {
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
  unsigned CSS15:1;
} AD1CSSLBITS;
extern volatile AD1CSSLBITS AD1CSSLbits __attribute__((__sfr__));

#define AD1CON4 AD1CON4
extern volatile unsigned int  AD1CON4 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON4BITS {
  union {
    struct {
      unsigned DMABL:3;
      unsigned :5;
      unsigned ADDMAEN:1;
    };
    struct {
      unsigned DMABL0:1;
      unsigned DMABL1:1;
      unsigned DMABL2:1;
    };
  };
} AD1CON4BITS;
extern volatile AD1CON4BITS AD1CON4bits __attribute__((__sfr__));

#define CTMUCON1 CTMUCON1
extern volatile unsigned int  CTMUCON1 __attribute__((__sfr__));
typedef struct tagCTMUCON1BITS {
  unsigned :8;
  unsigned CTTRIG:1;
  unsigned IDISSEN:1;
  unsigned EDGSEQEN:1;
  unsigned EDGEN:1;
  unsigned TGEN:1;
  unsigned CTMUSIDL:1;
  unsigned :1;
  unsigned CTMUEN:1;
} CTMUCON1BITS;
extern volatile CTMUCON1BITS CTMUCON1bits __attribute__((__sfr__));

#define CTMUCON2 CTMUCON2
extern volatile unsigned int  CTMUCON2 __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCON2BITS {
  union {
    struct {
      unsigned :2;
      unsigned EDG2SEL:4;
      unsigned EDG2POL:1;
      unsigned EDG2MOD:1;
      unsigned EDG1STAT:1;
      unsigned EDG2STAT:1;
      unsigned EDG1SEL:4;
      unsigned EDG1POL:1;
      unsigned EDG1MOD:1;
    };
    struct {
      unsigned :2;
      unsigned EDG2SEL0:1;
      unsigned EDG2SEL1:1;
      unsigned EDG2SEL2:1;
      unsigned EDG2SEL3:1;
      unsigned :4;
      unsigned EDG1SEL0:1;
      unsigned EDG1SEL1:1;
      unsigned EDG1SEL2:1;
      unsigned EDG1SEL3:1;
    };
  };
} CTMUCON2BITS;
extern volatile CTMUCON2BITS CTMUCON2bits __attribute__((__sfr__));

#define CTMUICON CTMUICON
extern volatile unsigned int  CTMUICON __attribute__((__sfr__));
__extension__ typedef struct tagCTMUICONBITS {
  union {
    struct {
      unsigned :8;
      unsigned IRNG:2;
      unsigned ITRIM:6;
    };
    struct {
      unsigned :8;
      unsigned IRNG0:1;
      unsigned IRNG1:1;
      unsigned ITRIM0:1;
      unsigned ITRIM1:1;
      unsigned ITRIM2:1;
      unsigned ITRIM3:1;
      unsigned ITRIM4:1;
      unsigned ITRIM5:1;
    };
  };
} CTMUICONBITS;
extern volatile CTMUICONBITS CTMUICONbits __attribute__((__sfr__));

#define CRCCON1 CRCCON1
extern volatile unsigned int  CRCCON1 __attribute__((__sfr__));
__extension__ typedef struct tagCRCCON1BITS {
  union {
    struct {
      unsigned :3;
      unsigned LENDIAN:1;
      unsigned CRCGO:1;
      unsigned CRCISEL:1;
      unsigned CRCMPT:1;
      unsigned CRCFUL:1;
      unsigned VWORD:5;
      unsigned CSIDL:1;
      unsigned :1;
      unsigned CRCEN:1;
    };
    struct {
      unsigned :8;
      unsigned VWORD0:1;
      unsigned VWORD1:1;
      unsigned VWORD2:1;
      unsigned VWORD3:1;
      unsigned VWORD4:1;
    };
  };
} CRCCON1BITS;
extern volatile CRCCON1BITS CRCCON1bits __attribute__((__sfr__));

#define CRCCON2 CRCCON2
extern volatile unsigned int  CRCCON2 __attribute__((__sfr__));
__extension__ typedef struct tagCRCCON2BITS {
  union {
    struct {
      unsigned PLEN:5;
      unsigned :3;
      unsigned DWIDTH:5;
    };
    struct {
      unsigned PLEN0:1;
      unsigned PLEN1:1;
      unsigned PLEN2:1;
      unsigned PLEN3:1;
      unsigned PLEN4:1;
      unsigned :3;
      unsigned DWIDTH0:1;
      unsigned DWIDTH1:1;
      unsigned DWIDTH2:1;
      unsigned DWIDTH3:1;
      unsigned DWIDTH4:1;
    };
  };
} CRCCON2BITS;
extern volatile CRCCON2BITS CRCCON2bits __attribute__((__sfr__));

#define CRCXORL CRCXORL
extern volatile unsigned int  CRCXORL __attribute__((__sfr__));
typedef struct tagCRCXORLBITS {
  unsigned :1;
  unsigned X1:1;
  unsigned X2:1;
  unsigned X3:1;
  unsigned X4:1;
  unsigned X5:1;
  unsigned X6:1;
  unsigned X7:1;
  unsigned X8:1;
  unsigned X9:1;
  unsigned X10:1;
  unsigned X11:1;
  unsigned X12:1;
  unsigned X13:1;
  unsigned X14:1;
  unsigned X15:1;
} CRCXORLBITS;
extern volatile CRCXORLBITS CRCXORLbits __attribute__((__sfr__));

#define CRCXORH CRCXORH
extern volatile unsigned int  CRCXORH __attribute__((__sfr__));
typedef struct tagCRCXORHBITS {
  unsigned X16:1;
  unsigned X17:1;
  unsigned X18:1;
  unsigned X19:1;
  unsigned X20:1;
  unsigned X21:1;
  unsigned X22:1;
  unsigned X23:1;
  unsigned X24:1;
  unsigned X25:1;
  unsigned X26:1;
  unsigned X27:1;
  unsigned X28:1;
  unsigned X29:1;
  unsigned X30:1;
  unsigned X31:1;
} CRCXORHBITS;
extern volatile CRCXORHBITS CRCXORHbits __attribute__((__sfr__));

#define CRCDAT CRCDAT
extern volatile unsigned int  CRCDAT __attribute__((__sfr__));
#define CRCDATL CRCDATL
extern volatile unsigned int  CRCDATL __attribute__((__sfr__));
#define CRCDATH CRCDATH
extern volatile unsigned int  CRCDATH __attribute__((__sfr__));
#define CRCWDAT CRCWDAT
extern volatile unsigned int  CRCWDAT __attribute__((__sfr__));
#define CRCWDATL CRCWDATL
extern volatile unsigned int  CRCWDATL __attribute__((__sfr__));
#define CRCWDATH CRCWDATH
extern volatile unsigned int  CRCWDATH __attribute__((__sfr__));
#define RPOR0 RPOR0
extern volatile unsigned int  RPOR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR0BITS {
  union {
    struct {
      unsigned RP20R:6;
      unsigned :2;
      unsigned RP35R:6;
    };
    struct {
      unsigned RP20R0:1;
      unsigned RP20R1:1;
      unsigned RP20R2:1;
      unsigned RP20R3:1;
      unsigned RP20R4:1;
      unsigned RP20R5:1;
      unsigned :2;
      unsigned RP35R0:1;
      unsigned RP35R1:1;
      unsigned RP35R2:1;
      unsigned RP35R3:1;
      unsigned RP35R4:1;
      unsigned RP35R5:1;
    };
  };
} RPOR0BITS;
extern volatile RPOR0BITS RPOR0bits __attribute__((__sfr__));

#define RPOR1 RPOR1
extern volatile unsigned int  RPOR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR1BITS {
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
} RPOR1BITS;
extern volatile RPOR1BITS RPOR1bits __attribute__((__sfr__));

#define RPOR2 RPOR2
extern volatile unsigned int  RPOR2 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR2BITS {
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
} RPOR2BITS;
extern volatile RPOR2BITS RPOR2bits __attribute__((__sfr__));

#define RPOR3 RPOR3
extern volatile unsigned int  RPOR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR3BITS {
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
} RPOR3BITS;
extern volatile RPOR3BITS RPOR3bits __attribute__((__sfr__));

#define RPOR4 RPOR4
extern volatile unsigned int  RPOR4 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR4BITS {
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
} RPOR4BITS;
extern volatile RPOR4BITS RPOR4bits __attribute__((__sfr__));

#define RPINR0 RPINR0
extern volatile unsigned int  RPINR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR0BITS {
  union {
    struct {
      unsigned :8;
      unsigned INT1R:7;
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
    };
  };
} RPINR0BITS;
extern volatile RPINR0BITS RPINR0bits __attribute__((__sfr__));

#define RPINR1 RPINR1
extern volatile unsigned int  RPINR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR1BITS {
  union {
    struct {
      unsigned INT2R:7;
    };
    struct {
      unsigned INT2R0:1;
      unsigned INT2R1:1;
      unsigned INT2R2:1;
      unsigned INT2R3:1;
      unsigned INT2R4:1;
      unsigned INT2R5:1;
      unsigned INT2R6:1;
    };
  };
} RPINR1BITS;
extern volatile RPINR1BITS RPINR1bits __attribute__((__sfr__));

#define RPINR3 RPINR3
extern volatile unsigned int  RPINR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR3BITS {
  union {
    struct {
      unsigned T2CKR:7;
    };
    struct {
      unsigned T2CKR0:1;
      unsigned T2CKR1:1;
      unsigned T2CKR2:1;
      unsigned T2CKR3:1;
      unsigned T2CKR4:1;
      unsigned T2CKR5:1;
      unsigned T2CKR6:1;
    };
  };
} RPINR3BITS;
extern volatile RPINR3BITS RPINR3bits __attribute__((__sfr__));

#define RPINR7 RPINR7
extern volatile unsigned int  RPINR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR7BITS {
  union {
    struct {
      unsigned IC1R:7;
      unsigned :1;
      unsigned IC2R:7;
    };
    struct {
      unsigned IC1R0:1;
      unsigned IC1R1:1;
      unsigned IC1R2:1;
      unsigned IC1R3:1;
      unsigned IC1R4:1;
      unsigned IC1R5:1;
      unsigned IC1R6:1;
      unsigned :1;
      unsigned IC2R0:1;
      unsigned IC2R1:1;
      unsigned IC2R2:1;
      unsigned IC2R3:1;
      unsigned IC2R4:1;
      unsigned IC2R5:1;
      unsigned IC2R6:1;
    };
  };
} RPINR7BITS;
extern volatile RPINR7BITS RPINR7bits __attribute__((__sfr__));

#define RPINR8 RPINR8
extern volatile unsigned int  RPINR8 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR8BITS {
  union {
    struct {
      unsigned IC3R:7;
      unsigned :1;
      unsigned IC4R:7;
    };
    struct {
      unsigned IC3R0:1;
      unsigned IC3R1:1;
      unsigned IC3R2:1;
      unsigned IC3R3:1;
      unsigned IC3R4:1;
      unsigned IC3R5:1;
      unsigned IC3R6:1;
      unsigned :1;
      unsigned IC4R0:1;
      unsigned IC4R1:1;
      unsigned IC4R2:1;
      unsigned IC4R3:1;
      unsigned IC4R4:1;
      unsigned IC4R5:1;
      unsigned IC4R6:1;
    };
  };
} RPINR8BITS;
extern volatile RPINR8BITS RPINR8bits __attribute__((__sfr__));

#define RPINR11 RPINR11
extern volatile unsigned int  RPINR11 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR11BITS {
  union {
    struct {
      unsigned OCFAR:7;
    };
    struct {
      unsigned OCFAR0:1;
      unsigned OCFAR1:1;
      unsigned OCFAR2:1;
      unsigned OCFAR3:1;
      unsigned OCFAR4:1;
      unsigned OCFAR5:1;
      unsigned OCFAR6:1;
    };
  };
} RPINR11BITS;
extern volatile RPINR11BITS RPINR11bits __attribute__((__sfr__));

#define RPINR12 RPINR12
extern volatile unsigned int  RPINR12 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR12BITS {
  union {
    struct {
      unsigned FLT1R:7;
      unsigned :1;
      unsigned FLT2R:7;
    };
    struct {
      unsigned FLT1R0:1;
      unsigned FLT1R1:1;
      unsigned FLT1R2:1;
      unsigned FLT1R3:1;
      unsigned FLT1R4:1;
      unsigned FLT1R5:1;
      unsigned FLT1R6:1;
      unsigned :1;
      unsigned FLT2R0:1;
      unsigned FLT2R1:1;
      unsigned FLT2R2:1;
      unsigned FLT2R3:1;
      unsigned FLT2R4:1;
      unsigned FLT2R5:1;
      unsigned FLT2R6:1;
    };
  };
} RPINR12BITS;
extern volatile RPINR12BITS RPINR12bits __attribute__((__sfr__));

#define RPINR14 RPINR14
extern volatile unsigned int  RPINR14 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR14BITS {
  union {
    struct {
      unsigned QEA1R:7;
      unsigned :1;
      unsigned QEB1R:7;
    };
    struct {
      unsigned QEA1R0:1;
      unsigned QEA1R1:1;
      unsigned QEA1R2:1;
      unsigned QEA1R3:1;
      unsigned QEA1R4:1;
      unsigned QEA1R5:1;
      unsigned QEA1R6:1;
      unsigned :1;
      unsigned QEB1R0:1;
      unsigned QEB1R1:1;
      unsigned QEB1R2:1;
      unsigned QEB1R3:1;
      unsigned QEB1R4:1;
      unsigned QEB1R5:1;
      unsigned QEB1R6:1;
    };
  };
} RPINR14BITS;
extern volatile RPINR14BITS RPINR14bits __attribute__((__sfr__));

#define RPINR15 RPINR15
extern volatile unsigned int  RPINR15 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR15BITS {
  union {
    struct {
      unsigned INDX1R:7;
      unsigned :1;
      unsigned HOME1R:7;
    };
    struct {
      unsigned INDX1R0:1;
      unsigned INDX1R1:1;
      unsigned INDX1R2:1;
      unsigned INDX1R3:1;
      unsigned INDX1R4:1;
      unsigned INDX1R5:1;
      unsigned INDX1R6:1;
      unsigned :1;
      unsigned HOME1R0:1;
      unsigned HOME1R1:1;
      unsigned HOME1R2:1;
      unsigned HOME1R3:1;
      unsigned HOME1R4:1;
      unsigned HOME1R5:1;
      unsigned HOME1R6:1;
    };
  };
} RPINR15BITS;
extern volatile RPINR15BITS RPINR15bits __attribute__((__sfr__));

#define RPINR18 RPINR18
extern volatile unsigned int  RPINR18 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR18BITS {
  union {
    struct {
      unsigned U1RXR:7;
    };
    struct {
      unsigned U1RXR0:1;
      unsigned U1RXR1:1;
      unsigned U1RXR2:1;
      unsigned U1RXR3:1;
      unsigned U1RXR4:1;
      unsigned U1RXR5:1;
      unsigned U1RXR6:1;
    };
  };
} RPINR18BITS;
extern volatile RPINR18BITS RPINR18bits __attribute__((__sfr__));

#define RPINR19 RPINR19
extern volatile unsigned int  RPINR19 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR19BITS {
  union {
    struct {
      unsigned U2RXR:7;
    };
    struct {
      unsigned U2RXR0:1;
      unsigned U2RXR1:1;
      unsigned U2RXR2:1;
      unsigned U2RXR3:1;
      unsigned U2RXR4:1;
      unsigned U2RXR5:1;
      unsigned U2RXR6:1;
    };
  };
} RPINR19BITS;
extern volatile RPINR19BITS RPINR19bits __attribute__((__sfr__));

#define RPINR22 RPINR22
extern volatile unsigned int  RPINR22 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR22BITS {
  union {
    struct {
      unsigned SDI2R:7;
      unsigned :1;
      unsigned SCK2R:7;
    };
    struct {
      unsigned SDI2R0:1;
      unsigned SDI2R1:1;
      unsigned SDI2R2:1;
      unsigned SDI2R3:1;
      unsigned SDI2R4:1;
      unsigned SDI2R5:1;
      unsigned SDI2R6:1;
      unsigned :1;
      unsigned SCK2R0:1;
      unsigned SCK2R1:1;
      unsigned SCK2R2:1;
      unsigned SCK2R3:1;
      unsigned SCK2R4:1;
      unsigned SCK2R5:1;
      unsigned SCK2R6:1;
    };
  };
} RPINR22BITS;
extern volatile RPINR22BITS RPINR22bits __attribute__((__sfr__));

#define RPINR23 RPINR23
extern volatile unsigned int  RPINR23 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR23BITS {
  union {
    struct {
      unsigned SS2R:7;
    };
    struct {
      unsigned SS2R0:1;
      unsigned SS2R1:1;
      unsigned SS2R2:1;
      unsigned SS2R3:1;
      unsigned SS2R4:1;
      unsigned SS2R5:1;
      unsigned SS2R6:1;
    };
  };
} RPINR23BITS;
extern volatile RPINR23BITS RPINR23bits __attribute__((__sfr__));

#define RPINR26 RPINR26
extern volatile unsigned int  RPINR26 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR26BITS {
  union {
    struct {
      unsigned C1RXR:7;
    };
    struct {
      unsigned C1RXR0:1;
      unsigned C1RXR1:1;
      unsigned C1RXR2:1;
      unsigned C1RXR3:1;
      unsigned C1RXR4:1;
      unsigned C1RXR5:1;
      unsigned C1RXR6:1;
    };
  };
} RPINR26BITS;
extern volatile RPINR26BITS RPINR26bits __attribute__((__sfr__));

#define RPINR37 RPINR37
extern volatile unsigned int  RPINR37 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR37BITS {
  union {
    struct {
      unsigned :8;
      unsigned SYNCI1R:7;
    };
    struct {
      unsigned :8;
      unsigned SYNCI1R0:1;
      unsigned SYNCI1R1:1;
      unsigned SYNCI1R2:1;
      unsigned SYNCI1R3:1;
      unsigned SYNCI1R4:1;
      unsigned SYNCI1R5:1;
      unsigned SYNCI1R6:1;
    };
  };
} RPINR37BITS;
extern volatile RPINR37BITS RPINR37bits __attribute__((__sfr__));

#define RPINR38 RPINR38
extern volatile unsigned int  RPINR38 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR38BITS {
  union {
    struct {
      unsigned :8;
      unsigned DTCMP1R:7;
    };
    struct {
      unsigned :8;
      unsigned DTCMP1R0:1;
      unsigned DTCMP1R1:1;
      unsigned DTCMP1R2:1;
      unsigned DTCMP1R3:1;
      unsigned DTCMP1R4:1;
      unsigned DTCMP1R5:1;
      unsigned DTCMP1R6:1;
    };
  };
} RPINR38BITS;
extern volatile RPINR38BITS RPINR38bits __attribute__((__sfr__));

#define RPINR39 RPINR39
extern volatile unsigned int  RPINR39 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR39BITS {
  union {
    struct {
      unsigned DTCMP2R:7;
      unsigned :1;
      unsigned DTCMP3R:7;
    };
    struct {
      unsigned DTCMP2R0:1;
      unsigned DTCMP2R1:1;
      unsigned DTCMP2R2:1;
      unsigned DTCMP2R3:1;
      unsigned DTCMP2R4:1;
      unsigned DTCMP2R5:1;
      unsigned DTCMP2R6:1;
      unsigned :1;
      unsigned DTCMP3R0:1;
      unsigned DTCMP3R1:1;
      unsigned DTCMP3R2:1;
      unsigned DTCMP3R3:1;
      unsigned DTCMP3R4:1;
      unsigned DTCMP3R5:1;
      unsigned DTCMP3R6:1;
    };
  };
} RPINR39BITS;
extern volatile RPINR39BITS RPINR39bits __attribute__((__sfr__));

#define NVMCON NVMCON
extern volatile unsigned int  NVMCON __attribute__((__sfr__));
__extension__ typedef struct tagNVMCONBITS {
  union {
    struct {
      unsigned NVMOP:4;
      unsigned :8;
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
#define NVMADRU NVMADRU
extern volatile unsigned int  NVMADRU __attribute__((__sfr__));
typedef struct tagNVMADRUBITS {
  unsigned NVMADRU:8;
} NVMADRUBITS;
extern volatile NVMADRUBITS NVMADRUbits __attribute__((__sfr__));

#define NVMKEY NVMKEY
extern volatile unsigned int  NVMKEY __attribute__((__sfr__));
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
  unsigned :2;
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

#define REFOCON REFOCON
extern volatile unsigned int  REFOCON __attribute__((__sfr__));
__extension__ typedef struct tagREFOCONBITS {
  union {
    struct {
      unsigned :8;
      unsigned RODIV:4;
      unsigned ROSEL:1;
      unsigned ROSSLP:1;
      unsigned :1;
      unsigned ROON:1;
    };
    struct {
      unsigned :8;
      unsigned RODIV0:1;
      unsigned RODIV1:1;
      unsigned RODIV2:1;
      unsigned RODIV3:1;
    };
  };
} REFOCONBITS;
extern volatile REFOCONBITS REFOCONbits __attribute__((__sfr__));

#define PMD1 PMD1
extern volatile unsigned int  PMD1 __attribute__((__sfr__));
typedef struct tagPMD1BITS {
  unsigned AD1MD:1;
  unsigned :2;
  unsigned SPI1MD:1;
  unsigned SPI2MD:1;
  unsigned U1MD:1;
  unsigned U2MD:1;
  unsigned I2C1MD:1;
  unsigned :1;
  unsigned PWMMD:1;
  unsigned QEI1MD:1;
  unsigned T1MD:1;
  unsigned T2MD:1;
  unsigned T3MD:1;
  unsigned T4MD:1;
  unsigned T5MD:1;
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

#define PMD2 PMD2
extern volatile unsigned int  PMD2 __attribute__((__sfr__));
typedef struct tagPMD2BITS {
  unsigned OC1MD:1;
  unsigned OC2MD:1;
  unsigned OC3MD:1;
  unsigned OC4MD:1;
  unsigned :4;
  unsigned IC1MD:1;
  unsigned IC2MD:1;
  unsigned IC3MD:1;
  unsigned IC4MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile unsigned int  PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  unsigned :1;
  unsigned I2C2MD:1;
  unsigned :5;
  unsigned CRCMD:1;
  unsigned :2;
  unsigned CMPMD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile unsigned int  PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  unsigned :2;
  unsigned CTMUMD:1;
  unsigned REFOMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

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
__extension__ typedef struct tagPMD7BITS {
  union {
    struct {
      unsigned :3;
      unsigned PTGMD:1;
      unsigned DMA0MD:1;
    };
    struct {
      unsigned :4;
      unsigned DMA1MD:1;
      unsigned DMA5MD:1;
      unsigned DMA9MD:1;
      unsigned DMA13MD:1;
    };
    struct {
      unsigned :4;
      unsigned DMA2MD:1;
      unsigned DMA6MD:1;
      unsigned DMA10MD:1;
      unsigned DMA14MD:1;
    };
    struct {
      unsigned :4;
      unsigned DMA3MD:1;
      unsigned DMA7MD:1;
      unsigned DMA11MD:1;
    };
  };
} PMD7BITS;
extern volatile PMD7BITS PMD7bits __attribute__((__sfr__));

#define IFS0 IFS0
extern volatile unsigned int  IFS0 __attribute__((__sfr__));
typedef struct tagIFS0BITS {
  unsigned INT0IF:1;
  unsigned IC1IF:1;
  unsigned OC1IF:1;
  unsigned T1IF:1;
  unsigned DMA0IF:1;
  unsigned IC2IF:1;
  unsigned OC2IF:1;
  unsigned T2IF:1;
  unsigned T3IF:1;
  unsigned SPI1EIF:1;
  unsigned SPI1IF:1;
  unsigned U1RXIF:1;
  unsigned U1TXIF:1;
  unsigned AD1IF:1;
  unsigned DMA1IF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile unsigned int  IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  unsigned SI2C1IF:1;
  unsigned MI2C1IF:1;
  unsigned CMIF:1;
  unsigned CNIF:1;
  unsigned INT1IF:1;
  unsigned :3;
  unsigned DMA2IF:1;
  unsigned OC3IF:1;
  unsigned OC4IF:1;
  unsigned T4IF:1;
  unsigned T5IF:1;
  unsigned INT2IF:1;
  unsigned U2RXIF:1;
  unsigned U2TXIF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile unsigned int  IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  unsigned SPI2EIF:1;
  unsigned SPI2IF:1;
  unsigned :2;
  unsigned DMA3IF:1;
  unsigned IC3IF:1;
  unsigned IC4IF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile unsigned int  IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  unsigned :1;
  unsigned SI2C2IF:1;
  unsigned MI2C2IF:1;
  unsigned :6;
  unsigned PSEMIF:1;
  unsigned QEI1IF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile unsigned int  IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  unsigned :1;
  unsigned U1EIF:1;
  unsigned U2EIF:1;
  unsigned CRCIF:1;
  unsigned :9;
  unsigned CTMUIF:1;
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
} IFS6BITS;
extern volatile IFS6BITS IFS6bits __attribute__((__sfr__));

#define IFS8 IFS8
extern volatile unsigned int  IFS8 __attribute__((__sfr__));
typedef struct tagIFS8BITS {
  unsigned :14;
  unsigned ICDIF:1;
  unsigned JTAGIF:1;
} IFS8BITS;
extern volatile IFS8BITS IFS8bits __attribute__((__sfr__));

#define IFS9 IFS9
extern volatile unsigned int  IFS9 __attribute__((__sfr__));
typedef struct tagIFS9BITS {
  unsigned :1;
  unsigned PTGSTEPIF:1;
  unsigned PTGWDTIF:1;
  unsigned PTG0IF:1;
  unsigned PTG1IF:1;
  unsigned PTG2IF:1;
  unsigned PTG3IF:1;
} IFS9BITS;
extern volatile IFS9BITS IFS9bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile unsigned int  IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  unsigned INT0IE:1;
  unsigned IC1IE:1;
  unsigned OC1IE:1;
  unsigned T1IE:1;
  unsigned DMA0IE:1;
  unsigned IC2IE:1;
  unsigned OC2IE:1;
  unsigned T2IE:1;
  unsigned T3IE:1;
  unsigned SPI1EIE:1;
  unsigned SPI1IE:1;
  unsigned U1RXIE:1;
  unsigned U1TXIE:1;
  unsigned AD1IE:1;
  unsigned DMA1IE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile unsigned int  IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  unsigned SI2C1IE:1;
  unsigned MI2C1IE:1;
  unsigned CMIE:1;
  unsigned CNIE:1;
  unsigned INT1IE:1;
  unsigned :3;
  unsigned DMA2IE:1;
  unsigned OC3IE:1;
  unsigned OC4IE:1;
  unsigned T4IE:1;
  unsigned T5IE:1;
  unsigned INT2IE:1;
  unsigned U2RXIE:1;
  unsigned U2TXIE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC2 IEC2
extern volatile unsigned int  IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  unsigned SPI2EIE:1;
  unsigned SPI2IE:1;
  unsigned :2;
  unsigned DMA3IE:1;
  unsigned IC3IE:1;
  unsigned IC4IE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile unsigned int  IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  unsigned :1;
  unsigned SI2C2IE:1;
  unsigned MI2C2IE:1;
  unsigned :6;
  unsigned PSEMIE:1;
  unsigned QEI1IE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile unsigned int  IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  unsigned :1;
  unsigned U1EIE:1;
  unsigned U2EIE:1;
  unsigned CRCIE:1;
  unsigned :9;
  unsigned CTMUIE:1;
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
} IEC6BITS;
extern volatile IEC6BITS IEC6bits __attribute__((__sfr__));

#define IEC8 IEC8
extern volatile unsigned int  IEC8 __attribute__((__sfr__));
typedef struct tagIEC8BITS {
  unsigned :14;
  unsigned ICDIF:1;
  unsigned JTAGIE:1;
} IEC8BITS;
extern volatile IEC8BITS IEC8bits __attribute__((__sfr__));

#define IEC9 IEC9
extern volatile unsigned int  IEC9 __attribute__((__sfr__));
typedef struct tagIEC9BITS {
  unsigned :1;
  unsigned PTGSTEPIE:1;
  unsigned PTGWDTIE:1;
  unsigned PTG0IE:1;
  unsigned PTG1IE:1;
  unsigned PTG2IE:1;
  unsigned PTG3IE:1;
} IEC9BITS;
extern volatile IEC9BITS IEC9bits __attribute__((__sfr__));

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
      unsigned DMA0IP:3;
      unsigned :1;
      unsigned IC2IP:3;
      unsigned :1;
      unsigned OC2IP:3;
      unsigned :1;
      unsigned T2IP:3;
    };
    struct {
      unsigned DMA0IP0:1;
      unsigned DMA0IP1:1;
      unsigned DMA0IP2:1;
      unsigned :1;
      unsigned IC2IP0:1;
      unsigned IC2IP1:1;
      unsigned IC2IP2:1;
      unsigned :1;
      unsigned OC2IP0:1;
      unsigned OC2IP1:1;
      unsigned OC2IP2:1;
      unsigned :1;
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
      unsigned AD1IP:3;
      unsigned :1;
      unsigned DMA1IP:3;
    };
    struct {
      unsigned U1TXIP0:1;
      unsigned U1TXIP1:1;
      unsigned U1TXIP2:1;
      unsigned :1;
      unsigned AD1IP0:1;
      unsigned AD1IP1:1;
      unsigned AD1IP2:1;
      unsigned :1;
      unsigned DMA1IP0:1;
      unsigned DMA1IP1:1;
      unsigned DMA1IP2:1;
      unsigned :1;
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
      unsigned CMIP:3;
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
      unsigned CMIP0:1;
      unsigned CMIP1:1;
      unsigned CMIP2:1;
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

#define IPC6 IPC6
extern volatile unsigned int  IPC6 __attribute__((__sfr__));
__extension__ typedef struct tagIPC6BITS {
  union {
    struct {
      unsigned DMA2IP:3;
      unsigned :1;
      unsigned OC3IP:3;
      unsigned :1;
      unsigned OC4IP:3;
      unsigned :1;
      unsigned T4IP:3;
    };
    struct {
      unsigned DMA2IP0:1;
      unsigned DMA2IP1:1;
      unsigned DMA2IP2:1;
      unsigned :1;
      unsigned OC3IP0:1;
      unsigned OC3IP1:1;
      unsigned OC3IP2:1;
      unsigned :1;
      unsigned OC4IP0:1;
      unsigned OC4IP1:1;
      unsigned OC4IP2:1;
      unsigned :1;
      unsigned T4IP0:1;
      unsigned T4IP1:1;
      unsigned T4IP2:1;
    };
  };
} IPC6BITS;
extern volatile IPC6BITS IPC6bits __attribute__((__sfr__));

#define IPC7 IPC7
extern volatile unsigned int  IPC7 __attribute__((__sfr__));
__extension__ typedef struct tagIPC7BITS {
  union {
    struct {
      unsigned T5IP:3;
      unsigned :1;
      unsigned INT2IP:3;
      unsigned :1;
      unsigned U2RXIP:3;
      unsigned :1;
      unsigned U2TXIP:3;
    };
    struct {
      unsigned T5IP0:1;
      unsigned T5IP1:1;
      unsigned T5IP2:1;
      unsigned :1;
      unsigned INT2IP0:1;
      unsigned INT2IP1:1;
      unsigned INT2IP2:1;
      unsigned :1;
      unsigned U2RXIP0:1;
      unsigned U2RXIP1:1;
      unsigned U2RXIP2:1;
      unsigned :1;
      unsigned U2TXIP0:1;
      unsigned U2TXIP1:1;
      unsigned U2TXIP2:1;
    };
  };
} IPC7BITS;
extern volatile IPC7BITS IPC7bits __attribute__((__sfr__));

#define IPC8 IPC8
extern volatile unsigned int  IPC8 __attribute__((__sfr__));
__extension__ typedef struct tagIPC8BITS {
  union {
    struct {
      unsigned SPI2EIP:3;
      unsigned :1;
      unsigned SPI2IP:3;
    };
    struct {
      unsigned SPI2EIP0:1;
      unsigned SPI2EIP1:1;
      unsigned SPI2EIP2:1;
      unsigned :1;
      unsigned SPI2IP0:1;
      unsigned SPI2IP1:1;
      unsigned SPI2IP2:1;
    };
  };
} IPC8BITS;
extern volatile IPC8BITS IPC8bits __attribute__((__sfr__));

#define IPC9 IPC9
extern volatile unsigned int  IPC9 __attribute__((__sfr__));
__extension__ typedef struct tagIPC9BITS {
  union {
    struct {
      unsigned DMA3IP:3;
      unsigned :1;
      unsigned IC3IP:3;
      unsigned :1;
      unsigned IC4IP:3;
    };
    struct {
      unsigned DMA3IP0:1;
      unsigned DMA3IP1:1;
      unsigned DMA3IP2:1;
      unsigned :1;
      unsigned IC3IP0:1;
      unsigned IC3IP1:1;
      unsigned IC3IP2:1;
      unsigned :1;
      unsigned IC4IP0:1;
      unsigned IC4IP1:1;
      unsigned IC4IP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

#define IPC12 IPC12
extern volatile unsigned int  IPC12 __attribute__((__sfr__));
__extension__ typedef struct tagIPC12BITS {
  union {
    struct {
      unsigned :4;
      unsigned SI2C2IP:3;
      unsigned :1;
      unsigned MI2C2IP:3;
    };
    struct {
      unsigned :4;
      unsigned SI2C2IP0:1;
      unsigned SI2C2IP1:1;
      unsigned SI2C2IP2:1;
      unsigned :1;
      unsigned MI2C2IP0:1;
      unsigned MI2C2IP1:1;
      unsigned MI2C2IP2:1;
    };
  };
} IPC12BITS;
extern volatile IPC12BITS IPC12bits __attribute__((__sfr__));

#define IPC14 IPC14
extern volatile unsigned int  IPC14 __attribute__((__sfr__));
__extension__ typedef struct tagIPC14BITS {
  union {
    struct {
      unsigned :4;
      unsigned PSEMIP:3;
      unsigned :1;
      unsigned QEI1IP:3;
    };
    struct {
      unsigned :4;
      unsigned PSEMIP0:1;
      unsigned PSEMIP1:1;
      unsigned PSEMIP2:1;
      unsigned :1;
      unsigned QEI1IP0:1;
      unsigned QEI1IP1:1;
      unsigned QEI1IP2:1;
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
      unsigned :1;
      unsigned U2EIP:3;
      unsigned :1;
      unsigned CRCIP:3;
    };
    struct {
      unsigned :4;
      unsigned U1EIP0:1;
      unsigned U1EIP1:1;
      unsigned U1EIP2:1;
      unsigned :1;
      unsigned U2EIP0:1;
      unsigned U2EIP1:1;
      unsigned U2EIP2:1;
      unsigned :1;
      unsigned CRCIP0:1;
      unsigned CRCIP1:1;
      unsigned CRCIP2:1;
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

#define IPC19 IPC19
extern volatile unsigned int  IPC19 __attribute__((__sfr__));
typedef struct tagIPC19BITS {
  unsigned :4;
  unsigned CTMUIP:3;
} IPC19BITS;
extern volatile IPC19BITS IPC19bits __attribute__((__sfr__));

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

#define IPC35 IPC35
extern volatile unsigned int  IPC35 __attribute__((__sfr__));
__extension__ typedef struct tagIPC35BITS {
  union {
    struct {
      unsigned :8;
      unsigned ICDIP:3;
      unsigned :1;
      unsigned JTAGIP:3;
    };
    struct {
      unsigned :8;
      unsigned ICDIP0:1;
      unsigned ICDIP1:1;
      unsigned ICDIP2:1;
      unsigned :1;
      unsigned JTAGIP0:1;
      unsigned JTAGIP1:1;
      unsigned JTAGIP2:1;
    };
  };
} IPC35BITS;
extern volatile IPC35BITS IPC35bits __attribute__((__sfr__));

#define IPC36 IPC36
extern volatile unsigned int  IPC36 __attribute__((__sfr__));
typedef struct tagIPC36BITS {
  unsigned :4;
  unsigned PTGSTEPIP:3;
  unsigned :1;
  unsigned PTGWDTIP:3;
  unsigned :1;
  unsigned PTG0IP:3;
} IPC36BITS;
extern volatile IPC36BITS IPC36bits __attribute__((__sfr__));

#define IPC37 IPC37
extern volatile unsigned int  IPC37 __attribute__((__sfr__));
typedef struct tagIPC37BITS {
  unsigned PTG1IP:3;
  unsigned :1;
  unsigned PTG2IP:3;
  unsigned :1;
  unsigned PTG3IP:3;
} IPC37BITS;
extern volatile IPC37BITS IPC37bits __attribute__((__sfr__));

#define INTCON1 INTCON1
extern volatile unsigned int  INTCON1 __attribute__((__sfr__));
typedef struct tagINTCON1BITS {
  unsigned :1;
  unsigned OSCFAIL:1;
  unsigned STKERR:1;
  unsigned ADDRERR:1;
  unsigned MATHERR:1;
  unsigned DMACERR:1;
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
  unsigned :10;
  unsigned SWTRAP:1;
  unsigned DISI:1;
  unsigned GIE:1;
} INTCON2BITS;
extern volatile INTCON2BITS INTCON2bits __attribute__((__sfr__));

#define INTCON3 INTCON3
extern volatile unsigned int  INTCON3 __attribute__((__sfr__));
typedef struct tagINTCON3BITS {
  unsigned :4;
  unsigned DOOVR:1;
  unsigned DAE:1;
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
      unsigned OCFLTB:1;
      unsigned :1;
      unsigned ENFLTA:1;
      unsigned ENFLTB:1;
      unsigned :1;
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
      unsigned OCFLT1:1;
      unsigned :1;
      unsigned ENFLT0:1;
      unsigned ENFLT1:1;
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

#define OC1RS OC1RS
extern volatile unsigned int  OC1RS __attribute__((__sfr__));
#define OC1R OC1R
extern volatile unsigned int  OC1R __attribute__((__sfr__));
#define OC1TMR OC1TMR
extern volatile unsigned int  OC1TMR __attribute__((__sfr__));
#define OC2CON1 OC2CON1
extern volatile unsigned int  OC2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC2CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLTA:1;
      unsigned OCFLTB:1;
      unsigned :1;
      unsigned ENFLTA:1;
      unsigned ENFLTB:1;
      unsigned :1;
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
      unsigned OCFLT1:1;
      unsigned :1;
      unsigned ENFLT0:1;
      unsigned ENFLT1:1;
    };
  };
} OC2CON1BITS;
extern volatile OC2CON1BITS OC2CON1bits __attribute__((__sfr__));

#define OC2CON2 OC2CON2
extern volatile unsigned int  OC2CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC2CON2BITS {
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
} OC2CON2BITS;
extern volatile OC2CON2BITS OC2CON2bits __attribute__((__sfr__));

#define OC2RS OC2RS
extern volatile unsigned int  OC2RS __attribute__((__sfr__));
#define OC2R OC2R
extern volatile unsigned int  OC2R __attribute__((__sfr__));
#define OC2TMR OC2TMR
extern volatile unsigned int  OC2TMR __attribute__((__sfr__));
#define OC3CON1 OC3CON1
extern volatile unsigned int  OC3CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC3CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLTA:1;
      unsigned OCFLTB:1;
      unsigned :1;
      unsigned ENFLTA:1;
      unsigned ENFLTB:1;
      unsigned :1;
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
      unsigned OCFLT1:1;
      unsigned :1;
      unsigned ENFLT0:1;
      unsigned ENFLT1:1;
    };
  };
} OC3CON1BITS;
extern volatile OC3CON1BITS OC3CON1bits __attribute__((__sfr__));

#define OC3CON2 OC3CON2
extern volatile unsigned int  OC3CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC3CON2BITS {
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
} OC3CON2BITS;
extern volatile OC3CON2BITS OC3CON2bits __attribute__((__sfr__));

#define OC3RS OC3RS
extern volatile unsigned int  OC3RS __attribute__((__sfr__));
#define OC3R OC3R
extern volatile unsigned int  OC3R __attribute__((__sfr__));
#define OC3TMR OC3TMR
extern volatile unsigned int  OC3TMR __attribute__((__sfr__));
#define OC4CON1 OC4CON1
extern volatile unsigned int  OC4CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC4CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLTA:1;
      unsigned OCFLTB:1;
      unsigned :1;
      unsigned ENFLTA:1;
      unsigned ENFLTB:1;
      unsigned :1;
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
      unsigned OCFLT1:1;
      unsigned :1;
      unsigned ENFLT0:1;
      unsigned ENFLT1:1;
    };
  };
} OC4CON1BITS;
extern volatile OC4CON1BITS OC4CON1bits __attribute__((__sfr__));

#define OC4CON2 OC4CON2
extern volatile unsigned int  OC4CON2 __attribute__((__sfr__));
__extension__ typedef struct tagOC4CON2BITS {
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
} OC4CON2BITS;
extern volatile OC4CON2BITS OC4CON2bits __attribute__((__sfr__));

#define OC4RS OC4RS
extern volatile unsigned int  OC4RS __attribute__((__sfr__));
#define OC4R OC4R
extern volatile unsigned int  OC4R __attribute__((__sfr__));
#define OC4TMR OC4TMR
extern volatile unsigned int  OC4TMR __attribute__((__sfr__));
#define CMSTAT CMSTAT
extern volatile unsigned int  CMSTAT __attribute__((__sfr__));
typedef struct tagCMSTATBITS {
  unsigned C1OUT:1;
  unsigned C2OUT:1;
  unsigned C3OUT:1;
  unsigned C4OUT:1;
  unsigned :4;
  unsigned C1EVT:1;
  unsigned C2EVT:1;
  unsigned C3EVT:1;
  unsigned C4EVT:1;
  unsigned :3;
  unsigned PSIDL:1;
} CMSTATBITS;
extern volatile CMSTATBITS CMSTATbits __attribute__((__sfr__));

#define CVRCON CVRCON
extern volatile unsigned int  CVRCON __attribute__((__sfr__));
__extension__ typedef struct tagCVRCONBITS {
  union {
    struct {
      unsigned CVR:4;
      unsigned CVRSS:1;
      unsigned CVRR:1;
      unsigned CVROE:1;
      unsigned CVREN:1;
      unsigned :2;
      unsigned VREFSEL:1;
      unsigned :3;
      unsigned CVR2OE:1;
    };
    struct {
      unsigned CVR0:1;
      unsigned CVR1:1;
      unsigned CVR2:1;
      unsigned CVR3:1;
      unsigned :2;
      unsigned CVR1OE:1;
    };
  };
} CVRCONBITS;
extern volatile CVRCONBITS CVRCONbits __attribute__((__sfr__));

#define CM1CON CM1CON
extern volatile unsigned int  CM1CON __attribute__((__sfr__));
__extension__ typedef struct tagCM1CONBITS {
  union {
    struct {
      unsigned CCH:2;
      unsigned :2;
      unsigned CREF:1;
      unsigned :1;
      unsigned EVPOL:2;
      unsigned COUT:1;
      unsigned CEVT:1;
      unsigned OPMODE:1;
      unsigned :2;
      unsigned CPOL:1;
      unsigned COE:1;
      unsigned CON:1;
    };
    struct {
      unsigned CCH0:1;
      unsigned CCH1:1;
      unsigned :4;
      unsigned EVPOL0:1;
      unsigned EVPOL1:1;
      unsigned :7;
      unsigned CEN:1;
    };
  };
} CM1CONBITS;
extern volatile CM1CONBITS CM1CONbits __attribute__((__sfr__));

#define CM1MSKSRC CM1MSKSRC
extern volatile unsigned int  CM1MSKSRC __attribute__((__sfr__));
__extension__ typedef struct tagCM1MSKSRCBITS {
  union {
    struct {
      unsigned SELSRCA:4;
      unsigned SELSRCB:4;
      unsigned SELSRCC:4;
    };
    struct {
      unsigned SELSRCA0:1;
      unsigned SELSRCA1:1;
      unsigned SELSRCA2:1;
      unsigned SELSRCA3:1;
      unsigned SELSRCB0:1;
      unsigned SELSRCB1:1;
      unsigned SELSRCB2:1;
      unsigned SELSRCB3:1;
      unsigned SELSRCC0:1;
      unsigned SELSRCC1:1;
      unsigned SELSRCC2:1;
      unsigned SELSRCC3:1;
    };
  };
} CM1MSKSRCBITS;
extern volatile CM1MSKSRCBITS CM1MSKSRCbits __attribute__((__sfr__));

#define CM1MSKCON CM1MSKCON
extern volatile unsigned int  CM1MSKCON __attribute__((__sfr__));
typedef struct tagCM1MSKCONBITS {
  unsigned AANEN:1;
  unsigned AAEN:1;
  unsigned ABNEN:1;
  unsigned ABEN:1;
  unsigned ACNEN:1;
  unsigned ACEN:1;
  unsigned PAGS:1;
  unsigned NAGS:1;
  unsigned OANEN:1;
  unsigned OAEN:1;
  unsigned OBNEN:1;
  unsigned OBEN:1;
  unsigned OCNEN:1;
  unsigned OCEN:1;
  unsigned :1;
  unsigned HLMS:1;
} CM1MSKCONBITS;
extern volatile CM1MSKCONBITS CM1MSKCONbits __attribute__((__sfr__));

#define CM1FLTR CM1FLTR
extern volatile unsigned int  CM1FLTR __attribute__((__sfr__));
__extension__ typedef struct tagCM1FLTRBITS {
  union {
    struct {
      unsigned CFDIV:3;
      unsigned CFLTREN:1;
      unsigned CFSEL:3;
    };
    struct {
      unsigned CFDIV0:1;
      unsigned CFDIV1:1;
      unsigned CFDIV2:1;
      unsigned :1;
      unsigned CFSEL0:1;
      unsigned CFSEL1:1;
      unsigned CFSEL2:1;
    };
  };
} CM1FLTRBITS;
extern volatile CM1FLTRBITS CM1FLTRbits __attribute__((__sfr__));

#define CM2CON CM2CON
extern volatile unsigned int  CM2CON __attribute__((__sfr__));
__extension__ typedef struct tagCM2CONBITS {
  union {
    struct {
      unsigned CCH:2;
      unsigned :2;
      unsigned CREF:1;
      unsigned :1;
      unsigned EVPOL:2;
      unsigned COUT:1;
      unsigned CEVT:1;
      unsigned OPMODE:1;
      unsigned :2;
      unsigned CPOL:1;
      unsigned COE:1;
      unsigned CON:1;
    };
    struct {
      unsigned CCH0:1;
      unsigned CCH1:1;
      unsigned :4;
      unsigned EVPOL0:1;
      unsigned EVPOL1:1;
      unsigned :7;
      unsigned CEN:1;
    };
  };
} CM2CONBITS;
extern volatile CM2CONBITS CM2CONbits __attribute__((__sfr__));

#define CM2MSKSRC CM2MSKSRC
extern volatile unsigned int  CM2MSKSRC __attribute__((__sfr__));
__extension__ typedef struct tagCM2MSKSRCBITS {
  union {
    struct {
      unsigned SELSRCA:4;
      unsigned SELSRCB:4;
      unsigned SELSRCC:4;
    };
    struct {
      unsigned SELSRCA0:1;
      unsigned SELSRCA1:1;
      unsigned SELSRCA2:1;
      unsigned SELSRCA3:1;
      unsigned SELSRCB0:1;
      unsigned SELSRCB1:1;
      unsigned SELSRCB2:1;
      unsigned SELSRCB3:1;
      unsigned SELSRCC0:1;
      unsigned SELSRCC1:1;
      unsigned SELSRCC2:1;
      unsigned SELSRCC3:1;
    };
  };
} CM2MSKSRCBITS;
extern volatile CM2MSKSRCBITS CM2MSKSRCbits __attribute__((__sfr__));

#define CM2MSKCON CM2MSKCON
extern volatile unsigned int  CM2MSKCON __attribute__((__sfr__));
typedef struct tagCM2MSKCONBITS {
  unsigned AANEN:1;
  unsigned AAEN:1;
  unsigned ABNEN:1;
  unsigned ABEN:1;
  unsigned ACNEN:1;
  unsigned ACEN:1;
  unsigned PAGS:1;
  unsigned NAGS:1;
  unsigned OANEN:1;
  unsigned OAEN:1;
  unsigned OBNEN:1;
  unsigned OBEN:1;
  unsigned OCNEN:1;
  unsigned OCEN:1;
  unsigned :1;
  unsigned HLMS:1;
} CM2MSKCONBITS;
extern volatile CM2MSKCONBITS CM2MSKCONbits __attribute__((__sfr__));

#define CM2FLTR CM2FLTR
extern volatile unsigned int  CM2FLTR __attribute__((__sfr__));
__extension__ typedef struct tagCM2FLTRBITS {
  union {
    struct {
      unsigned CFDIV:3;
      unsigned CFLTREN:1;
      unsigned CFSEL:3;
    };
    struct {
      unsigned CFDIV0:1;
      unsigned CFDIV1:1;
      unsigned CFDIV2:1;
      unsigned :1;
      unsigned CFSEL0:1;
      unsigned CFSEL1:1;
      unsigned CFSEL2:1;
    };
  };
} CM2FLTRBITS;
extern volatile CM2FLTRBITS CM2FLTRbits __attribute__((__sfr__));

#define CM3CON CM3CON
extern volatile unsigned int  CM3CON __attribute__((__sfr__));
__extension__ typedef struct tagCM3CONBITS {
  union {
    struct {
      unsigned CCH:2;
      unsigned :2;
      unsigned CREF:1;
      unsigned :1;
      unsigned EVPOL:2;
      unsigned COUT:1;
      unsigned CEVT:1;
      unsigned OPMODE:1;
      unsigned :2;
      unsigned CPOL:1;
      unsigned COE:1;
      unsigned CON:1;
    };
    struct {
      unsigned CCH0:1;
      unsigned CCH1:1;
      unsigned :4;
      unsigned EVPOL0:1;
      unsigned EVPOL1:1;
      unsigned :7;
      unsigned CEN:1;
    };
  };
} CM3CONBITS;
extern volatile CM3CONBITS CM3CONbits __attribute__((__sfr__));

#define CM3MSKSRC CM3MSKSRC
extern volatile unsigned int  CM3MSKSRC __attribute__((__sfr__));
__extension__ typedef struct tagCM3MSKSRCBITS {
  union {
    struct {
      unsigned SELSRCA:4;
      unsigned SELSRCB:4;
      unsigned SELSRCC:4;
    };
    struct {
      unsigned SELSRCA0:1;
      unsigned SELSRCA1:1;
      unsigned SELSRCA2:1;
      unsigned SELSRCA3:1;
      unsigned SELSRCB0:1;
      unsigned SELSRCB1:1;
      unsigned SELSRCB2:1;
      unsigned SELSRCB3:1;
      unsigned SELSRCC0:1;
      unsigned SELSRCC1:1;
      unsigned SELSRCC2:1;
      unsigned SELSRCC3:1;
    };
  };
} CM3MSKSRCBITS;
extern volatile CM3MSKSRCBITS CM3MSKSRCbits __attribute__((__sfr__));

#define CM3MSKCON CM3MSKCON
extern volatile unsigned int  CM3MSKCON __attribute__((__sfr__));
typedef struct tagCM3MSKCONBITS {
  unsigned AANEN:1;
  unsigned AAEN:1;
  unsigned ABNEN:1;
  unsigned ABEN:1;
  unsigned ACNEN:1;
  unsigned ACEN:1;
  unsigned PAGS:1;
  unsigned NAGS:1;
  unsigned OANEN:1;
  unsigned OAEN:1;
  unsigned OBNEN:1;
  unsigned OBEN:1;
  unsigned OCNEN:1;
  unsigned OCEN:1;
  unsigned :1;
  unsigned HLMS:1;
} CM3MSKCONBITS;
extern volatile CM3MSKCONBITS CM3MSKCONbits __attribute__((__sfr__));

#define CM3FLTR CM3FLTR
extern volatile unsigned int  CM3FLTR __attribute__((__sfr__));
__extension__ typedef struct tagCM3FLTRBITS {
  union {
    struct {
      unsigned CFDIV:3;
      unsigned CFLTREN:1;
      unsigned CFSEL:3;
    };
    struct {
      unsigned CFDIV0:1;
      unsigned CFDIV1:1;
      unsigned CFDIV2:1;
      unsigned :1;
      unsigned CFSEL0:1;
      unsigned CFSEL1:1;
      unsigned CFSEL2:1;
    };
  };
} CM3FLTRBITS;
extern volatile CM3FLTRBITS CM3FLTRbits __attribute__((__sfr__));

#define CM4CON CM4CON
extern volatile unsigned int  CM4CON __attribute__((__sfr__));
__extension__ typedef struct tagCM4CONBITS {
  union {
    struct {
      unsigned CCH:2;
      unsigned :2;
      unsigned CREF:1;
      unsigned :1;
      unsigned EVPOL:2;
      unsigned COUT:1;
      unsigned CEVT:1;
      unsigned :3;
      unsigned CPOL:1;
      unsigned COE:1;
      unsigned CON:1;
    };
    struct {
      unsigned CCH0:1;
      unsigned CCH1:1;
      unsigned :4;
      unsigned EVPOL0:1;
      unsigned EVPOL1:1;
      unsigned :7;
      unsigned CEN:1;
    };
  };
} CM4CONBITS;
extern volatile CM4CONBITS CM4CONbits __attribute__((__sfr__));

#define CM4MSKSRC CM4MSKSRC
extern volatile unsigned int  CM4MSKSRC __attribute__((__sfr__));
__extension__ typedef struct tagCM4MSKSRCBITS {
  union {
    struct {
      unsigned SELSRCA:4;
      unsigned SELSRCB:4;
      unsigned SELSRCC:4;
    };
    struct {
      unsigned SELSRCA0:1;
      unsigned SELSRCA1:1;
      unsigned SELSRCA2:1;
      unsigned SELSRCA3:1;
      unsigned SELSRCB0:1;
      unsigned SELSRCB1:1;
      unsigned SELSRCB2:1;
      unsigned SELSRCB3:1;
      unsigned SELSRCC0:1;
      unsigned SELSRCC1:1;
      unsigned SELSRCC2:1;
      unsigned SELSRCC3:1;
    };
  };
} CM4MSKSRCBITS;
extern volatile CM4MSKSRCBITS CM4MSKSRCbits __attribute__((__sfr__));

#define CM4MSKCON CM4MSKCON
extern volatile unsigned int  CM4MSKCON __attribute__((__sfr__));
typedef struct tagCM4MSKCONBITS {
  unsigned AANEN:1;
  unsigned AAEN:1;
  unsigned ABNEN:1;
  unsigned ABEN:1;
  unsigned ACNEN:1;
  unsigned ACEN:1;
  unsigned PAGS:1;
  unsigned NAGS:1;
  unsigned OANEN:1;
  unsigned OAEN:1;
  unsigned OBNEN:1;
  unsigned OBEN:1;
  unsigned OCNEN:1;
  unsigned OCEN:1;
  unsigned :1;
  unsigned HLMS:1;
} CM4MSKCONBITS;
extern volatile CM4MSKCONBITS CM4MSKCONbits __attribute__((__sfr__));

#define CM4FLTR CM4FLTR
extern volatile unsigned int  CM4FLTR __attribute__((__sfr__));
__extension__ typedef struct tagCM4FLTRBITS {
  union {
    struct {
      unsigned CFDIV:3;
      unsigned CFLTREN:1;
      unsigned CFSEL:3;
    };
    struct {
      unsigned CFDIV0:1;
      unsigned CFDIV1:1;
      unsigned CFDIV2:1;
      unsigned :1;
      unsigned CFSEL0:1;
      unsigned CFSEL1:1;
      unsigned CFSEL2:1;
    };
  };
} CM4FLTRBITS;
extern volatile CM4FLTRBITS CM4FLTRbits __attribute__((__sfr__));

#define PTGCST PTGCST
extern volatile unsigned int  PTGCST __attribute__((__sfr__));
typedef struct tagPTGCSTBITS {
  unsigned PTGITM:2;
  unsigned :4;
  unsigned PTGWTO:1;
  unsigned PTGSTRT:1;
  unsigned PTGIVIS:1;
  unsigned PTGSSEN:1;
  unsigned PTGSWT:1;
  unsigned :1;
  unsigned PTGTOGL:1;
  unsigned PTGSIDL:1;
  unsigned :1;
  unsigned PTGEN:1;
} PTGCSTBITS;
extern volatile PTGCSTBITS PTGCSTbits __attribute__((__sfr__));

#define PTGCON PTGCON
extern volatile unsigned int  PTGCON __attribute__((__sfr__));
typedef struct tagPTGCONBITS {
  unsigned PTGWDT:3;
  unsigned :1;
  unsigned PTGPWD:4;
  unsigned PTGDIV:5;
  unsigned PTGCLK:3;
} PTGCONBITS;
extern volatile PTGCONBITS PTGCONbits __attribute__((__sfr__));

#define PTGBTE PTGBTE
extern volatile unsigned int  PTGBTE __attribute__((__sfr__));
__extension__ typedef struct tagPTGBTEBITS {
  union {
    struct {
      unsigned OC1TSS:1;
      unsigned OC2TSS:1;
      unsigned OC3TSS:1;
      unsigned OC4TSS:1;
      unsigned OC1CS:1;
      unsigned OC2CS:1;
      unsigned OC3CS:1;
      unsigned OC4CS:1;
      unsigned IC1TSS:1;
      unsigned IC2TSS:1;
      unsigned IC3TSS:1;
      unsigned IC4TSS:1;
      unsigned ADCTS1:1;
      unsigned ADCTS2:1;
      unsigned ADCTS3:1;
      unsigned ADCTS4:1;
    };
    struct {
      unsigned PTGBTE:16;
    };
  };
} PTGBTEBITS;
extern volatile PTGBTEBITS PTGBTEbits __attribute__((__sfr__));

#define PTGHOLD PTGHOLD
extern volatile unsigned int  PTGHOLD __attribute__((__sfr__));
#define PTGT0LIM PTGT0LIM
extern volatile unsigned int  PTGT0LIM __attribute__((__sfr__));
#define PTGT1LIM PTGT1LIM
extern volatile unsigned int  PTGT1LIM __attribute__((__sfr__));
#define PTGSDLIM PTGSDLIM
extern volatile unsigned int  PTGSDLIM __attribute__((__sfr__));
#define PTGC0LIM PTGC0LIM
extern volatile unsigned int  PTGC0LIM __attribute__((__sfr__));
#define PTGC1LIM PTGC1LIM
extern volatile unsigned int  PTGC1LIM __attribute__((__sfr__));
#define PTGADJ PTGADJ
extern volatile unsigned int  PTGADJ __attribute__((__sfr__));
#define PTGL0 PTGL0
extern volatile unsigned int  PTGL0 __attribute__((__sfr__));
#define PTGQPTR PTGQPTR
extern volatile unsigned int  PTGQPTR __attribute__((__sfr__));
typedef struct tagPTGQPTRBITS {
  unsigned PTGQPTR:5;
} PTGQPTRBITS;
extern volatile PTGQPTRBITS PTGQPTRbits __attribute__((__sfr__));

#define PTGQUE0 PTGQUE0
extern volatile unsigned int  PTGQUE0 __attribute__((__sfr__));
typedef struct tagPTGQUE0BITS {
  unsigned STEP0:8;
  unsigned STEP1:8;
} PTGQUE0BITS;
extern volatile PTGQUE0BITS PTGQUE0bits __attribute__((__sfr__));

#define PTGQUE1 PTGQUE1
extern volatile unsigned int  PTGQUE1 __attribute__((__sfr__));
typedef struct tagPTGQUE1BITS {
  unsigned STEP2:8;
  unsigned STEP3:8;
} PTGQUE1BITS;
extern volatile PTGQUE1BITS PTGQUE1bits __attribute__((__sfr__));

#define PTGQUE2 PTGQUE2
extern volatile unsigned int  PTGQUE2 __attribute__((__sfr__));
typedef struct tagPTGQUE2BITS {
  unsigned STEP4:8;
  unsigned STEP5:8;
} PTGQUE2BITS;
extern volatile PTGQUE2BITS PTGQUE2bits __attribute__((__sfr__));

#define PTGQUE3 PTGQUE3
extern volatile unsigned int  PTGQUE3 __attribute__((__sfr__));
typedef struct tagPTGQUE3BITS {
  unsigned STEP6:8;
  unsigned STEP7:8;
} PTGQUE3BITS;
extern volatile PTGQUE3BITS PTGQUE3bits __attribute__((__sfr__));

#define PTGQUE4 PTGQUE4
extern volatile unsigned int  PTGQUE4 __attribute__((__sfr__));
typedef struct tagPTGQUE4BITS {
  unsigned STEP8:8;
  unsigned STEP9:8;
} PTGQUE4BITS;
extern volatile PTGQUE4BITS PTGQUE4bits __attribute__((__sfr__));

#define PTGQUE5 PTGQUE5
extern volatile unsigned int  PTGQUE5 __attribute__((__sfr__));
typedef struct tagPTGQUE5BITS {
  unsigned STEP10:8;
  unsigned STEP11:8;
} PTGQUE5BITS;
extern volatile PTGQUE5BITS PTGQUE5bits __attribute__((__sfr__));

#define PTGQUE6 PTGQUE6
extern volatile unsigned int  PTGQUE6 __attribute__((__sfr__));
typedef struct tagPTGQUE6BITS {
  unsigned STEP12:8;
  unsigned STEP13:8;
} PTGQUE6BITS;
extern volatile PTGQUE6BITS PTGQUE6bits __attribute__((__sfr__));

#define PTGQUE7 PTGQUE7
extern volatile unsigned int  PTGQUE7 __attribute__((__sfr__));
typedef struct tagPTGQUE7BITS {
  unsigned STEP14:8;
  unsigned STEP15:8;
} PTGQUE7BITS;
extern volatile PTGQUE7BITS PTGQUE7bits __attribute__((__sfr__));

#define DMA0CON DMA0CON
extern volatile unsigned int  DMA0CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA0CONBITS {
  union {
    struct {
      unsigned MODE:2;
      unsigned :2;
      unsigned AMODE:2;
      unsigned :5;
      unsigned NULLW:1;
      unsigned HALF:1;
      unsigned DIR:1;
      unsigned SIZE:1;
      unsigned CHEN:1;
    };
    struct {
      unsigned MODE0:1;
      unsigned MODE1:1;
      unsigned :2;
      unsigned AMODE0:1;
      unsigned AMODE1:1;
    };
  };
} DMA0CONBITS;
extern volatile DMA0CONBITS DMA0CONbits __attribute__((__sfr__));

#define DMA0REQ DMA0REQ
extern volatile unsigned int  DMA0REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA0REQBITS {
  union {
    struct {
      unsigned IRQSEL:8;
      unsigned :7;
      unsigned FORCE:1;
    };
    struct {
      unsigned IRQSEL0:1;
      unsigned IRQSEL1:1;
      unsigned IRQSEL2:1;
      unsigned IRQSEL3:1;
      unsigned IRQSEL4:1;
      unsigned IRQSEL5:1;
      unsigned IRQSEL6:1;
      unsigned IRQSEL7:1;
    };
  };
} DMA0REQBITS;
extern volatile DMA0REQBITS DMA0REQbits __attribute__((__sfr__));

#define DMA0STAL DMA0STAL
extern volatile unsigned int  DMA0STAL __attribute__((__sfr__));
#define DMA0STAH DMA0STAH
extern volatile unsigned int  DMA0STAH __attribute__((__sfr__));
typedef struct tagDMA0STAHBITS {
  unsigned STA:8;
} DMA0STAHBITS;
extern volatile DMA0STAHBITS DMA0STAHbits __attribute__((__sfr__));

#define DMA0STBL DMA0STBL
extern volatile unsigned int  DMA0STBL __attribute__((__sfr__));
#define DMA0STBH DMA0STBH
extern volatile unsigned int  DMA0STBH __attribute__((__sfr__));
typedef struct tagDMA0STBHBITS {
  unsigned STB:8;
} DMA0STBHBITS;
extern volatile DMA0STBHBITS DMA0STBHbits __attribute__((__sfr__));

#define DMA0PAD DMA0PAD
extern volatile unsigned int  DMA0PAD __attribute__((__sfr__));
#define DMA0CNT DMA0CNT
extern volatile unsigned int  DMA0CNT __attribute__((__sfr__));
typedef struct tagDMA0CNTBITS {
  unsigned CNT:14;
} DMA0CNTBITS;
extern volatile DMA0CNTBITS DMA0CNTbits __attribute__((__sfr__));

#define DMA1CON DMA1CON
extern volatile unsigned int  DMA1CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA1CONBITS {
  union {
    struct {
      unsigned MODE:2;
      unsigned :2;
      unsigned AMODE:2;
      unsigned :5;
      unsigned NULLW:1;
      unsigned HALF:1;
      unsigned DIR:1;
      unsigned SIZE:1;
      unsigned CHEN:1;
    };
    struct {
      unsigned MODE0:1;
      unsigned MODE1:1;
      unsigned :2;
      unsigned AMODE0:1;
      unsigned AMODE1:1;
    };
  };
} DMA1CONBITS;
extern volatile DMA1CONBITS DMA1CONbits __attribute__((__sfr__));

#define DMA1REQ DMA1REQ
extern volatile unsigned int  DMA1REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA1REQBITS {
  union {
    struct {
      unsigned IRQSEL:8;
      unsigned :7;
      unsigned FORCE:1;
    };
    struct {
      unsigned IRQSEL0:1;
      unsigned IRQSEL1:1;
      unsigned IRQSEL2:1;
      unsigned IRQSEL3:1;
      unsigned IRQSEL4:1;
      unsigned IRQSEL5:1;
      unsigned IRQSEL6:1;
      unsigned IRQSEL7:1;
    };
  };
} DMA1REQBITS;
extern volatile DMA1REQBITS DMA1REQbits __attribute__((__sfr__));

#define DMA1STAL DMA1STAL
extern volatile unsigned int  DMA1STAL __attribute__((__sfr__));
#define DMA1STAH DMA1STAH
extern volatile unsigned int  DMA1STAH __attribute__((__sfr__));
typedef struct tagDMA1STAHBITS {
  unsigned STA:8;
} DMA1STAHBITS;
extern volatile DMA1STAHBITS DMA1STAHbits __attribute__((__sfr__));

#define DMA1STBL DMA1STBL
extern volatile unsigned int  DMA1STBL __attribute__((__sfr__));
#define DMA1STBH DMA1STBH
extern volatile unsigned int  DMA1STBH __attribute__((__sfr__));
typedef struct tagDMA1STBHBITS {
  unsigned STB:8;
} DMA1STBHBITS;
extern volatile DMA1STBHBITS DMA1STBHbits __attribute__((__sfr__));

#define DMA1PAD DMA1PAD
extern volatile unsigned int  DMA1PAD __attribute__((__sfr__));
#define DMA1CNT DMA1CNT
extern volatile unsigned int  DMA1CNT __attribute__((__sfr__));
typedef struct tagDMA1CNTBITS {
  unsigned CNT:14;
} DMA1CNTBITS;
extern volatile DMA1CNTBITS DMA1CNTbits __attribute__((__sfr__));

#define DMA2CON DMA2CON
extern volatile unsigned int  DMA2CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA2CONBITS {
  union {
    struct {
      unsigned MODE:2;
      unsigned :2;
      unsigned AMODE:2;
      unsigned :5;
      unsigned NULLW:1;
      unsigned HALF:1;
      unsigned DIR:1;
      unsigned SIZE:1;
      unsigned CHEN:1;
    };
    struct {
      unsigned MODE0:1;
      unsigned MODE1:1;
      unsigned :2;
      unsigned AMODE0:1;
      unsigned AMODE1:1;
    };
  };
} DMA2CONBITS;
extern volatile DMA2CONBITS DMA2CONbits __attribute__((__sfr__));

#define DMA2REQ DMA2REQ
extern volatile unsigned int  DMA2REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA2REQBITS {
  union {
    struct {
      unsigned IRQSEL:8;
      unsigned :7;
      unsigned FORCE:1;
    };
    struct {
      unsigned IRQSEL0:1;
      unsigned IRQSEL1:1;
      unsigned IRQSEL2:1;
      unsigned IRQSEL3:1;
      unsigned IRQSEL4:1;
      unsigned IRQSEL5:1;
      unsigned IRQSEL6:1;
      unsigned IRQSEL7:1;
    };
  };
} DMA2REQBITS;
extern volatile DMA2REQBITS DMA2REQbits __attribute__((__sfr__));

#define DMA2STAL DMA2STAL
extern volatile unsigned int  DMA2STAL __attribute__((__sfr__));
#define DMA2STAH DMA2STAH
extern volatile unsigned int  DMA2STAH __attribute__((__sfr__));
typedef struct tagDMA2STAHBITS {
  unsigned STA:8;
} DMA2STAHBITS;
extern volatile DMA2STAHBITS DMA2STAHbits __attribute__((__sfr__));

#define DMA2STBL DMA2STBL
extern volatile unsigned int  DMA2STBL __attribute__((__sfr__));
#define DMA2STBH DMA2STBH
extern volatile unsigned int  DMA2STBH __attribute__((__sfr__));
typedef struct tagDMA2STBHBITS {
  unsigned STB:8;
} DMA2STBHBITS;
extern volatile DMA2STBHBITS DMA2STBHbits __attribute__((__sfr__));

#define DMA2PAD DMA2PAD
extern volatile unsigned int  DMA2PAD __attribute__((__sfr__));
#define DMA2CNT DMA2CNT
extern volatile unsigned int  DMA2CNT __attribute__((__sfr__));
typedef struct tagDMA2CNTBITS {
  unsigned CNT:14;
} DMA2CNTBITS;
extern volatile DMA2CNTBITS DMA2CNTbits __attribute__((__sfr__));

#define DMA3CON DMA3CON
extern volatile unsigned int  DMA3CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA3CONBITS {
  union {
    struct {
      unsigned MODE:2;
      unsigned :2;
      unsigned AMODE:2;
      unsigned :5;
      unsigned NULLW:1;
      unsigned HALF:1;
      unsigned DIR:1;
      unsigned SIZE:1;
      unsigned CHEN:1;
    };
    struct {
      unsigned MODE0:1;
      unsigned MODE1:1;
      unsigned :2;
      unsigned AMODE0:1;
      unsigned AMODE1:1;
    };
  };
} DMA3CONBITS;
extern volatile DMA3CONBITS DMA3CONbits __attribute__((__sfr__));

#define DMA3REQ DMA3REQ
extern volatile unsigned int  DMA3REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA3REQBITS {
  union {
    struct {
      unsigned IRQSEL:8;
      unsigned :7;
      unsigned FORCE:1;
    };
    struct {
      unsigned IRQSEL0:1;
      unsigned IRQSEL1:1;
      unsigned IRQSEL2:1;
      unsigned IRQSEL3:1;
      unsigned IRQSEL4:1;
      unsigned IRQSEL5:1;
      unsigned IRQSEL6:1;
      unsigned IRQSEL7:1;
    };
  };
} DMA3REQBITS;
extern volatile DMA3REQBITS DMA3REQbits __attribute__((__sfr__));

#define DMA3STAL DMA3STAL
extern volatile unsigned int  DMA3STAL __attribute__((__sfr__));
#define DMA3STAH DMA3STAH
extern volatile unsigned int  DMA3STAH __attribute__((__sfr__));
typedef struct tagDMA3STAHBITS {
  unsigned STA:8;
} DMA3STAHBITS;
extern volatile DMA3STAHBITS DMA3STAHbits __attribute__((__sfr__));

#define DMA3STBL DMA3STBL
extern volatile unsigned int  DMA3STBL __attribute__((__sfr__));
#define DMA3STBH DMA3STBH
extern volatile unsigned int  DMA3STBH __attribute__((__sfr__));
typedef struct tagDMA3STBHBITS {
  unsigned STB:8;
} DMA3STBHBITS;
extern volatile DMA3STBHBITS DMA3STBHbits __attribute__((__sfr__));

#define DMA3PAD DMA3PAD
extern volatile unsigned int  DMA3PAD __attribute__((__sfr__));
#define DMA3CNT DMA3CNT
extern volatile unsigned int  DMA3CNT __attribute__((__sfr__));
typedef struct tagDMA3CNTBITS {
  unsigned CNT:14;
} DMA3CNTBITS;
extern volatile DMA3CNTBITS DMA3CNTbits __attribute__((__sfr__));

#define DMAPWC DMAPWC
extern volatile unsigned int  DMAPWC __attribute__((__sfr__));
typedef struct tagDMAPWCBITS {
  unsigned PWCOL0:1;
  unsigned PWCOL1:1;
  unsigned PWCOL2:1;
  unsigned PWCOL3:1;
} DMAPWCBITS;
extern volatile DMAPWCBITS DMAPWCbits __attribute__((__sfr__));

#define DMARQC DMARQC
extern volatile unsigned int  DMARQC __attribute__((__sfr__));
typedef struct tagDMARQCBITS {
  unsigned RQCOL0:1;
  unsigned RQCOL1:1;
  unsigned RQCOL2:1;
  unsigned RQCOL3:1;
} DMARQCBITS;
extern volatile DMARQCBITS DMARQCbits __attribute__((__sfr__));

#define DMAPPS DMAPPS
extern volatile unsigned int  DMAPPS __attribute__((__sfr__));
typedef struct tagDMAPPSBITS {
  unsigned PPST0:1;
  unsigned PPST1:1;
  unsigned PPST2:1;
  unsigned PPST3:1;
} DMAPPSBITS;
extern volatile DMAPPSBITS DMAPPSbits __attribute__((__sfr__));

#define DMALCA DMALCA
extern volatile unsigned int  DMALCA __attribute__((__sfr__));
__extension__ typedef struct tagDMALCABITS {
  union {
    struct {
      unsigned LSTCH:4;
    };
    struct {
      unsigned LSTCH0:1;
      unsigned LSTCH1:1;
      unsigned LSTCH2:1;
      unsigned LSTCH3:1;
    };
  };
} DMALCABITS;
extern volatile DMALCABITS DMALCAbits __attribute__((__sfr__));

#define DSADRL DSADRL
extern volatile unsigned int  DSADRL __attribute__((__sfr__));
#define DSADRH DSADRH
extern volatile unsigned int  DSADRH __attribute__((__sfr__));
typedef struct tagDSADRHBITS {
  unsigned DSADR:8;
} DSADRHBITS;
extern volatile DSADRHBITS DSADRHbits __attribute__((__sfr__));

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
#define CHOP CHOP
extern volatile unsigned int  CHOP __attribute__((__sfr__));
__extension__ typedef struct tagCHOPBITS {
  union {
    struct {
      unsigned CHOPCLK:10;
      unsigned :5;
      unsigned CHPCLKEN:1;
    };
    struct {
      unsigned CHOPCLK0:1;
      unsigned CHOPCLK1:1;
      unsigned CHOPCLK2:1;
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
      unsigned :1;
      unsigned DTCP:1;
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
      unsigned :6;
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
      unsigned :1;
      unsigned DTCP:1;
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
      unsigned :6;
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
      unsigned :1;
      unsigned DTCP:1;
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
      unsigned :6;
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
  unsigned :2;
  unsigned ANSA4:1;
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
  unsigned :4;
  unsigned ANSB8:1;
} ANSELBBITS;
extern volatile ANSELBBITS ANSELBbits __attribute__((__sfr__));

#define _APPO _APPO
extern volatile unsigned int  _APPO __attribute__((__sfr__));
#define _APPIN _APPIN
extern volatile unsigned int  _APPIN __attribute__((__sfr__));
#define APPS APPS
extern volatile unsigned int  APPS __attribute__((__sfr__));
typedef struct tagAPPSBITS {
  unsigned APIFUL:1;
  unsigned APIOV:1;
  unsigned APOFUL:1;
  unsigned APOOV:1;
  unsigned STRFUL:1;
} APPSBITS;
extern volatile APPSBITS APPSbits __attribute__((__sfr__));

#define STROUTL STROUTL
extern volatile unsigned int  STROUTL __attribute__((__sfr__));
#define STROUTH STROUTH
extern volatile unsigned int  STROUTH __attribute__((__sfr__));
#define STROVCNT STROVCNT
extern volatile unsigned int  STROVCNT __attribute__((__sfr__));
#define JDATAH JDATAH
extern volatile unsigned int  JDATAH __attribute__((__sfr__));
#define JDATAL JDATAL
extern volatile unsigned int  JDATAL __attribute__((__sfr__));


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
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
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

/* T4CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T5CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* IC1CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC1CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC2CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC2CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC3CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC3CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* IC4CON1 */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICTSEL2 cannot be defined because it is used by more than one SFR */

/* IC4CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ICTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _IC32 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */

/* QEI1CON */
#define _CCM QEI1CONbits.CCM
#define _GATEN QEI1CONbits.GATEN
#define _CNTPOL QEI1CONbits.CNTPOL
#define _INTDIV QEI1CONbits.INTDIV
#define _IMV QEI1CONbits.IMV
#define _PIMOD QEI1CONbits.PIMOD
#define _QEISIDL QEI1CONbits.QEISIDL
#define _QEIEN QEI1CONbits.QEIEN

/* QEI1IOC */
#define _QEA QEI1IOCbits.QEA
#define _QEB QEI1IOCbits.QEB
#define _INDEX QEI1IOCbits.INDEX
#define _HOME QEI1IOCbits.HOME
#define _QEAPOL QEI1IOCbits.QEAPOL
#define _QEBPOL QEI1IOCbits.QEBPOL
#define _IDXPOL QEI1IOCbits.IDXPOL
#define _HOMPOL QEI1IOCbits.HOMPOL
#define _SWPAB QEI1IOCbits.SWPAB
#define _OUTFNC QEI1IOCbits.OUTFNC
#define _QFDIV QEI1IOCbits.QFDIV
#define _FLTREN QEI1IOCbits.FLTREN
#define _QCAPEN QEI1IOCbits.QCAPEN

/* QEI1STAT */
#define _IDXIEN QEI1STATbits.IDXIEN
#define _IDXIRQ QEI1STATbits.IDXIRQ
#define _HOMIEN QEI1STATbits.HOMIEN
#define _HOMIRQ QEI1STATbits.HOMIRQ
#define _VELOVIEN QEI1STATbits.VELOVIEN
#define _VELOVIRQ QEI1STATbits.VELOVIRQ
#define _PCIIEN QEI1STATbits.PCIIEN
#define _PCIIRQ QEI1STATbits.PCIIRQ
#define _POSOVIEN QEI1STATbits.POSOVIEN
#define _POSOVIRQ QEI1STATbits.POSOVIRQ
#define _PCLEQIEN QEI1STATbits.PCLEQIEN
#define _PCLEQIRQ QEI1STATbits.PCLEQIRQ
#define _PCHEQIEN QEI1STATbits.PCHEQIEN
#define _PCHEQIRQ QEI1STATbits.PCHEQIRQ

/* I2C1CON */
#define _SEN I2C1CONbits.SEN
#define _RSEN I2C1CONbits.RSEN
#define _PEN I2C1CONbits.PEN
#define _RCEN I2C1CONbits.RCEN
#define _ACKEN I2C1CONbits.ACKEN
#define _ACKDT I2C1CONbits.ACKDT
#define _STREN I2C1CONbits.STREN
#define _GCEN I2C1CONbits.GCEN
#define _SMEN I2C1CONbits.SMEN
#define _DISSLW I2C1CONbits.DISSLW
#define _A10M I2C1CONbits.A10M
#define _IPMIEN I2C1CONbits.IPMIEN
#define _SCLREL I2C1CONbits.SCLREL
#define _I2CSIDL I2C1CONbits.I2CSIDL
#define _I2CEN I2C1CONbits.I2CEN

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
#define _TRSTAT I2C1STATbits.TRSTAT
#define _ACKSTAT I2C1STATbits.ACKSTAT

/* I2C2CON */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _STREN cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _SMEN cannot be defined because it is used by more than one SFR */
/* Bitname _DISSLW cannot be defined because it is used by more than one SFR */
/* Bitname _A10M cannot be defined because it is used by more than one SFR */
/* Bitname _IPMIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCLREL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CEN cannot be defined because it is used by more than one SFR */

/* I2C2STAT */
/* Bitname _TBF cannot be defined because it is used by more than one SFR */
/* Bitname _RBF cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */
/* Bitname _I2COV cannot be defined because it is used by more than one SFR */
/* Bitname _IWCOL cannot be defined because it is used by more than one SFR */
/* Bitname _ADD10 cannot be defined because it is used by more than one SFR */
/* Bitname _GCSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _BCL cannot be defined because it is used by more than one SFR */
/* Bitname _TRSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */

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

/* U2MODE */
/* Bitname _STSEL cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL cannot be defined because it is used by more than one SFR */
/* Bitname _BRGH cannot be defined because it is used by more than one SFR */
/* Bitname _URXINV cannot be defined because it is used by more than one SFR */
/* Bitname _ABAUD cannot be defined because it is used by more than one SFR */
/* Bitname _LPBACK cannot be defined because it is used by more than one SFR */
/* Bitname _WAKE cannot be defined because it is used by more than one SFR */
/* Bitname _UEN cannot be defined because it is used by more than one SFR */
/* Bitname _RTSMD cannot be defined because it is used by more than one SFR */
/* Bitname _IREN cannot be defined because it is used by more than one SFR */
/* Bitname _USIDL cannot be defined because it is used by more than one SFR */
/* Bitname _UARTEN cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _PDSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _RXINV cannot be defined because it is used by more than one SFR */
/* Bitname _UEN0 cannot be defined because it is used by more than one SFR */
/* Bitname _UEN1 cannot be defined because it is used by more than one SFR */

/* U2STA */
/* Bitname _URXDA cannot be defined because it is used by more than one SFR */
/* Bitname _OERR cannot be defined because it is used by more than one SFR */
/* Bitname _FERR cannot be defined because it is used by more than one SFR */
/* Bitname _PERR cannot be defined because it is used by more than one SFR */
/* Bitname _RIDLE cannot be defined because it is used by more than one SFR */
/* Bitname _ADDEN cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL cannot be defined because it is used by more than one SFR */
/* Bitname _TRMT cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBF cannot be defined because it is used by more than one SFR */
/* Bitname _UTXEN cannot be defined because it is used by more than one SFR */
/* Bitname _UTXBRK cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXINV cannot be defined because it is used by more than one SFR */
/* Bitname _UTXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _TXINV cannot be defined because it is used by more than one SFR */

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
#define _FRMDLY SPI1CON2bits.FRMDLY
#define _FRMPOL SPI1CON2bits.FRMPOL
#define _SPIFSD SPI1CON2bits.SPIFSD
#define _FRMEN SPI1CON2bits.FRMEN

/* SPI2STAT */
/* Bitname _SPIRBF cannot be defined because it is used by more than one SFR */
/* Bitname _SPITBF cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL cannot be defined because it is used by more than one SFR */
/* Bitname _SRXMPT cannot be defined because it is used by more than one SFR */
/* Bitname _SPIROV cannot be defined because it is used by more than one SFR */
/* Bitname _SRMPT cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC cannot be defined because it is used by more than one SFR */
/* Bitname _SPISIDL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIEN cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SISEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPIBEC2 cannot be defined because it is used by more than one SFR */

/* SPI2CON1 */
/* Bitname _PPRE cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE cannot be defined because it is used by more than one SFR */
/* Bitname _MSTEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSEN cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _MODE16 cannot be defined because it is used by more than one SFR */
/* Bitname _DISSDO cannot be defined because it is used by more than one SFR */
/* Bitname _DISSCK cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE0 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE1 cannot be defined because it is used by more than one SFR */
/* Bitname _SPRE2 cannot be defined because it is used by more than one SFR */

/* SPI2CON2 */
/* Bitname _SPIBEN cannot be defined because it is used by more than one SFR */
/* Bitname _FRMDLY cannot be defined because it is used by more than one SFR */
/* Bitname _FRMPOL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFSD cannot be defined because it is used by more than one SFR */
/* Bitname _FRMEN cannot be defined because it is used by more than one SFR */

/* AD1CON1 */
#define _DONE AD1CON1bits.DONE
#define _SAMP AD1CON1bits.SAMP
#define _ASAM AD1CON1bits.ASAM
#define _SIMSAM AD1CON1bits.SIMSAM
#define _SSRCG AD1CON1bits.SSRCG
#define _SSRC AD1CON1bits.SSRC
#define _FORM AD1CON1bits.FORM
#define _AD12B AD1CON1bits.AD12B
#define _ADDMABM AD1CON1bits.ADDMABM
#define _ADSIDL AD1CON1bits.ADSIDL
#define _ADON AD1CON1bits.ADON
#define _SSRC0 AD1CON1bits.SSRC0
#define _SSRC1 AD1CON1bits.SSRC1
#define _SSRC2 AD1CON1bits.SSRC2
#define _FORM0 AD1CON1bits.FORM0
#define _FORM1 AD1CON1bits.FORM1

/* AD1CON2 */
#define _ALTS AD1CON2bits.ALTS
#define _BUFM AD1CON2bits.BUFM
#define _SMPI AD1CON2bits.SMPI
#define _BUFS AD1CON2bits.BUFS
#define _CHPS AD1CON2bits.CHPS
#define _CSCNA AD1CON2bits.CSCNA
#define _VCFG AD1CON2bits.VCFG
#define _SMPI0 AD1CON2bits.SMPI0
#define _SMPI1 AD1CON2bits.SMPI1
#define _SMPI2 AD1CON2bits.SMPI2
#define _SMPI3 AD1CON2bits.SMPI3
#define _SMPI4 AD1CON2bits.SMPI4
#define _CHPS0 AD1CON2bits.CHPS0
#define _CHPS1 AD1CON2bits.CHPS1
#define _VCFG0 AD1CON2bits.VCFG0
#define _VCFG1 AD1CON2bits.VCFG1
#define _VCFG2 AD1CON2bits.VCFG2

/* AD1CON3 */
#define _ADCS AD1CON3bits.ADCS
#define _SAMC AD1CON3bits.SAMC
#define _ADRC AD1CON3bits.ADRC
#define _ADCS0 AD1CON3bits.ADCS0
#define _ADCS1 AD1CON3bits.ADCS1
#define _ADCS2 AD1CON3bits.ADCS2
#define _ADCS3 AD1CON3bits.ADCS3
#define _ADCS4 AD1CON3bits.ADCS4
#define _ADCS5 AD1CON3bits.ADCS5
#define _ADCS6 AD1CON3bits.ADCS6
#define _ADCS7 AD1CON3bits.ADCS7
#define _SAMC0 AD1CON3bits.SAMC0
#define _SAMC1 AD1CON3bits.SAMC1
#define _SAMC2 AD1CON3bits.SAMC2
#define _SAMC3 AD1CON3bits.SAMC3
#define _SAMC4 AD1CON3bits.SAMC4

/* AD1CHS123 */
#define _CH123SA AD1CHS123bits.CH123SA
#define _CH123NA AD1CHS123bits.CH123NA
#define _CH123SB AD1CHS123bits.CH123SB
#define _CH123NB AD1CHS123bits.CH123NB
#define _CH123NA0 AD1CHS123bits.CH123NA0
#define _CH123NA1 AD1CHS123bits.CH123NA1
#define _CH123NB0 AD1CHS123bits.CH123NB0
#define _CH123NB1 AD1CHS123bits.CH123NB1

/* AD1CHS0 */
#define _CH0SA AD1CHS0bits.CH0SA
#define _CH0NA AD1CHS0bits.CH0NA
#define _CH0SB AD1CHS0bits.CH0SB
#define _CH0NB AD1CHS0bits.CH0NB
#define _CH0SA0 AD1CHS0bits.CH0SA0
#define _CH0SA1 AD1CHS0bits.CH0SA1
#define _CH0SA2 AD1CHS0bits.CH0SA2
#define _CH0SA3 AD1CHS0bits.CH0SA3
#define _CH0SA4 AD1CHS0bits.CH0SA4
#define _CH0SB0 AD1CHS0bits.CH0SB0
#define _CH0SB1 AD1CHS0bits.CH0SB1
#define _CH0SB2 AD1CHS0bits.CH0SB2
#define _CH0SB3 AD1CHS0bits.CH0SB3
#define _CH0SB4 AD1CHS0bits.CH0SB4

/* AD1CSSH */
#define _CSS24 AD1CSSHbits.CSS24
#define _CSS25 AD1CSSHbits.CSS25
#define _CSS26 AD1CSSHbits.CSS26
#define _CSS30 AD1CSSHbits.CSS30
#define _CSS31 AD1CSSHbits.CSS31

/* AD1CSSL */
#define _CSS0 AD1CSSLbits.CSS0
#define _CSS1 AD1CSSLbits.CSS1
#define _CSS2 AD1CSSLbits.CSS2
#define _CSS3 AD1CSSLbits.CSS3
#define _CSS4 AD1CSSLbits.CSS4
#define _CSS5 AD1CSSLbits.CSS5
#define _CSS6 AD1CSSLbits.CSS6
#define _CSS7 AD1CSSLbits.CSS7
#define _CSS8 AD1CSSLbits.CSS8
#define _CSS9 AD1CSSLbits.CSS9
#define _CSS10 AD1CSSLbits.CSS10
#define _CSS11 AD1CSSLbits.CSS11
#define _CSS12 AD1CSSLbits.CSS12
#define _CSS13 AD1CSSLbits.CSS13
#define _CSS14 AD1CSSLbits.CSS14
#define _CSS15 AD1CSSLbits.CSS15

/* AD1CON4 */
#define _DMABL AD1CON4bits.DMABL
#define _ADDMAEN AD1CON4bits.ADDMAEN
#define _DMABL0 AD1CON4bits.DMABL0
#define _DMABL1 AD1CON4bits.DMABL1
#define _DMABL2 AD1CON4bits.DMABL2

/* CTMUCON1 */
#define _CTTRIG CTMUCON1bits.CTTRIG
#define _IDISSEN CTMUCON1bits.IDISSEN
#define _EDGSEQEN CTMUCON1bits.EDGSEQEN
#define _EDGEN CTMUCON1bits.EDGEN
#define _TGEN CTMUCON1bits.TGEN
#define _CTMUSIDL CTMUCON1bits.CTMUSIDL
#define _CTMUEN CTMUCON1bits.CTMUEN

/* CTMUCON2 */
#define _EDG2SEL CTMUCON2bits.EDG2SEL
#define _EDG2POL CTMUCON2bits.EDG2POL
#define _EDG2MOD CTMUCON2bits.EDG2MOD
#define _EDG1STAT CTMUCON2bits.EDG1STAT
#define _EDG2STAT CTMUCON2bits.EDG2STAT
#define _EDG1SEL CTMUCON2bits.EDG1SEL
#define _EDG1POL CTMUCON2bits.EDG1POL
#define _EDG1MOD CTMUCON2bits.EDG1MOD
#define _EDG2SEL0 CTMUCON2bits.EDG2SEL0
#define _EDG2SEL1 CTMUCON2bits.EDG2SEL1
#define _EDG2SEL2 CTMUCON2bits.EDG2SEL2
#define _EDG2SEL3 CTMUCON2bits.EDG2SEL3
#define _EDG1SEL0 CTMUCON2bits.EDG1SEL0
#define _EDG1SEL1 CTMUCON2bits.EDG1SEL1
#define _EDG1SEL2 CTMUCON2bits.EDG1SEL2
#define _EDG1SEL3 CTMUCON2bits.EDG1SEL3

/* CTMUICON */
#define _IRNG CTMUICONbits.IRNG
#define _ITRIM CTMUICONbits.ITRIM
#define _IRNG0 CTMUICONbits.IRNG0
#define _IRNG1 CTMUICONbits.IRNG1
#define _ITRIM0 CTMUICONbits.ITRIM0
#define _ITRIM1 CTMUICONbits.ITRIM1
#define _ITRIM2 CTMUICONbits.ITRIM2
#define _ITRIM3 CTMUICONbits.ITRIM3
#define _ITRIM4 CTMUICONbits.ITRIM4
#define _ITRIM5 CTMUICONbits.ITRIM5

/* CRCCON1 */
#define _LENDIAN CRCCON1bits.LENDIAN
#define _CRCGO CRCCON1bits.CRCGO
#define _CRCISEL CRCCON1bits.CRCISEL
#define _CRCMPT CRCCON1bits.CRCMPT
#define _CRCFUL CRCCON1bits.CRCFUL
#define _VWORD CRCCON1bits.VWORD
#define _CSIDL CRCCON1bits.CSIDL
#define _CRCEN CRCCON1bits.CRCEN
#define _VWORD0 CRCCON1bits.VWORD0
#define _VWORD1 CRCCON1bits.VWORD1
#define _VWORD2 CRCCON1bits.VWORD2
#define _VWORD3 CRCCON1bits.VWORD3
#define _VWORD4 CRCCON1bits.VWORD4

/* CRCCON2 */
#define _PLEN CRCCON2bits.PLEN
#define _DWIDTH CRCCON2bits.DWIDTH
#define _PLEN0 CRCCON2bits.PLEN0
#define _PLEN1 CRCCON2bits.PLEN1
#define _PLEN2 CRCCON2bits.PLEN2
#define _PLEN3 CRCCON2bits.PLEN3
#define _PLEN4 CRCCON2bits.PLEN4
#define _DWIDTH0 CRCCON2bits.DWIDTH0
#define _DWIDTH1 CRCCON2bits.DWIDTH1
#define _DWIDTH2 CRCCON2bits.DWIDTH2
#define _DWIDTH3 CRCCON2bits.DWIDTH3
#define _DWIDTH4 CRCCON2bits.DWIDTH4

/* CRCXORL */
#define _X1 CRCXORLbits.X1
#define _X2 CRCXORLbits.X2
#define _X3 CRCXORLbits.X3
#define _X4 CRCXORLbits.X4
#define _X5 CRCXORLbits.X5
#define _X6 CRCXORLbits.X6
#define _X7 CRCXORLbits.X7
#define _X8 CRCXORLbits.X8
#define _X9 CRCXORLbits.X9
#define _X10 CRCXORLbits.X10
#define _X11 CRCXORLbits.X11
#define _X12 CRCXORLbits.X12
#define _X13 CRCXORLbits.X13
#define _X14 CRCXORLbits.X14
#define _X15 CRCXORLbits.X15

/* CRCXORH */
#define _X16 CRCXORHbits.X16
#define _X17 CRCXORHbits.X17
#define _X18 CRCXORHbits.X18
#define _X19 CRCXORHbits.X19
#define _X20 CRCXORHbits.X20
#define _X21 CRCXORHbits.X21
#define _X22 CRCXORHbits.X22
#define _X23 CRCXORHbits.X23
#define _X24 CRCXORHbits.X24
#define _X25 CRCXORHbits.X25
#define _X26 CRCXORHbits.X26
#define _X27 CRCXORHbits.X27
#define _X28 CRCXORHbits.X28
#define _X29 CRCXORHbits.X29
#define _X30 CRCXORHbits.X30
#define _X31 CRCXORHbits.X31

/* RPOR0 */
#define _RP20R RPOR0bits.RP20R
#define _RP35R RPOR0bits.RP35R
#define _RP20R0 RPOR0bits.RP20R0
#define _RP20R1 RPOR0bits.RP20R1
#define _RP20R2 RPOR0bits.RP20R2
#define _RP20R3 RPOR0bits.RP20R3
#define _RP20R4 RPOR0bits.RP20R4
#define _RP20R5 RPOR0bits.RP20R5
#define _RP35R0 RPOR0bits.RP35R0
#define _RP35R1 RPOR0bits.RP35R1
#define _RP35R2 RPOR0bits.RP35R2
#define _RP35R3 RPOR0bits.RP35R3
#define _RP35R4 RPOR0bits.RP35R4
#define _RP35R5 RPOR0bits.RP35R5

/* RPOR1 */
#define _RP36R RPOR1bits.RP36R
#define _RP37R RPOR1bits.RP37R
#define _RP36R0 RPOR1bits.RP36R0
#define _RP36R1 RPOR1bits.RP36R1
#define _RP36R2 RPOR1bits.RP36R2
#define _RP36R3 RPOR1bits.RP36R3
#define _RP36R4 RPOR1bits.RP36R4
#define _RP36R5 RPOR1bits.RP36R5
#define _RP37R0 RPOR1bits.RP37R0
#define _RP37R1 RPOR1bits.RP37R1
#define _RP37R2 RPOR1bits.RP37R2
#define _RP37R3 RPOR1bits.RP37R3
#define _RP37R4 RPOR1bits.RP37R4
#define _RP37R5 RPOR1bits.RP37R5

/* RPOR2 */
#define _RP38R RPOR2bits.RP38R
#define _RP39R RPOR2bits.RP39R
#define _RP38R0 RPOR2bits.RP38R0
#define _RP38R1 RPOR2bits.RP38R1
#define _RP38R2 RPOR2bits.RP38R2
#define _RP38R3 RPOR2bits.RP38R3
#define _RP38R4 RPOR2bits.RP38R4
#define _RP38R5 RPOR2bits.RP38R5
#define _RP39R0 RPOR2bits.RP39R0
#define _RP39R1 RPOR2bits.RP39R1
#define _RP39R2 RPOR2bits.RP39R2
#define _RP39R3 RPOR2bits.RP39R3
#define _RP39R4 RPOR2bits.RP39R4
#define _RP39R5 RPOR2bits.RP39R5

/* RPOR3 */
#define _RP40R RPOR3bits.RP40R
#define _RP41R RPOR3bits.RP41R
#define _RP40R0 RPOR3bits.RP40R0
#define _RP40R1 RPOR3bits.RP40R1
#define _RP40R2 RPOR3bits.RP40R2
#define _RP40R3 RPOR3bits.RP40R3
#define _RP40R4 RPOR3bits.RP40R4
#define _RP40R5 RPOR3bits.RP40R5
#define _RP41R0 RPOR3bits.RP41R0
#define _RP41R1 RPOR3bits.RP41R1
#define _RP41R2 RPOR3bits.RP41R2
#define _RP41R3 RPOR3bits.RP41R3
#define _RP41R4 RPOR3bits.RP41R4
#define _RP41R5 RPOR3bits.RP41R5

/* RPOR4 */
#define _RP42R RPOR4bits.RP42R
#define _RP43R RPOR4bits.RP43R
#define _RP42R0 RPOR4bits.RP42R0
#define _RP42R1 RPOR4bits.RP42R1
#define _RP42R2 RPOR4bits.RP42R2
#define _RP42R3 RPOR4bits.RP42R3
#define _RP42R4 RPOR4bits.RP42R4
#define _RP42R5 RPOR4bits.RP42R5
#define _RP43R0 RPOR4bits.RP43R0
#define _RP43R1 RPOR4bits.RP43R1
#define _RP43R2 RPOR4bits.RP43R2
#define _RP43R3 RPOR4bits.RP43R3
#define _RP43R4 RPOR4bits.RP43R4
#define _RP43R5 RPOR4bits.RP43R5

/* RPINR0 */
#define _INT1R RPINR0bits.INT1R
#define _INT1R0 RPINR0bits.INT1R0
#define _INT1R1 RPINR0bits.INT1R1
#define _INT1R2 RPINR0bits.INT1R2
#define _INT1R3 RPINR0bits.INT1R3
#define _INT1R4 RPINR0bits.INT1R4
#define _INT1R5 RPINR0bits.INT1R5
#define _INT1R6 RPINR0bits.INT1R6

/* RPINR1 */
#define _INT2R RPINR1bits.INT2R
#define _INT2R0 RPINR1bits.INT2R0
#define _INT2R1 RPINR1bits.INT2R1
#define _INT2R2 RPINR1bits.INT2R2
#define _INT2R3 RPINR1bits.INT2R3
#define _INT2R4 RPINR1bits.INT2R4
#define _INT2R5 RPINR1bits.INT2R5
#define _INT2R6 RPINR1bits.INT2R6

/* RPINR3 */
#define _T2CKR RPINR3bits.T2CKR
#define _T2CKR0 RPINR3bits.T2CKR0
#define _T2CKR1 RPINR3bits.T2CKR1
#define _T2CKR2 RPINR3bits.T2CKR2
#define _T2CKR3 RPINR3bits.T2CKR3
#define _T2CKR4 RPINR3bits.T2CKR4
#define _T2CKR5 RPINR3bits.T2CKR5
#define _T2CKR6 RPINR3bits.T2CKR6

/* RPINR7 */
#define _IC1R RPINR7bits.IC1R
#define _IC2R RPINR7bits.IC2R
#define _IC1R0 RPINR7bits.IC1R0
#define _IC1R1 RPINR7bits.IC1R1
#define _IC1R2 RPINR7bits.IC1R2
#define _IC1R3 RPINR7bits.IC1R3
#define _IC1R4 RPINR7bits.IC1R4
#define _IC1R5 RPINR7bits.IC1R5
#define _IC1R6 RPINR7bits.IC1R6
#define _IC2R0 RPINR7bits.IC2R0
#define _IC2R1 RPINR7bits.IC2R1
#define _IC2R2 RPINR7bits.IC2R2
#define _IC2R3 RPINR7bits.IC2R3
#define _IC2R4 RPINR7bits.IC2R4
#define _IC2R5 RPINR7bits.IC2R5
#define _IC2R6 RPINR7bits.IC2R6

/* RPINR8 */
#define _IC3R RPINR8bits.IC3R
#define _IC4R RPINR8bits.IC4R
#define _IC3R0 RPINR8bits.IC3R0
#define _IC3R1 RPINR8bits.IC3R1
#define _IC3R2 RPINR8bits.IC3R2
#define _IC3R3 RPINR8bits.IC3R3
#define _IC3R4 RPINR8bits.IC3R4
#define _IC3R5 RPINR8bits.IC3R5
#define _IC3R6 RPINR8bits.IC3R6
#define _IC4R0 RPINR8bits.IC4R0
#define _IC4R1 RPINR8bits.IC4R1
#define _IC4R2 RPINR8bits.IC4R2
#define _IC4R3 RPINR8bits.IC4R3
#define _IC4R4 RPINR8bits.IC4R4
#define _IC4R5 RPINR8bits.IC4R5
#define _IC4R6 RPINR8bits.IC4R6

/* RPINR11 */
#define _OCFAR RPINR11bits.OCFAR
#define _OCFAR0 RPINR11bits.OCFAR0
#define _OCFAR1 RPINR11bits.OCFAR1
#define _OCFAR2 RPINR11bits.OCFAR2
#define _OCFAR3 RPINR11bits.OCFAR3
#define _OCFAR4 RPINR11bits.OCFAR4
#define _OCFAR5 RPINR11bits.OCFAR5
#define _OCFAR6 RPINR11bits.OCFAR6

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
#define _FLT2R0 RPINR12bits.FLT2R0
#define _FLT2R1 RPINR12bits.FLT2R1
#define _FLT2R2 RPINR12bits.FLT2R2
#define _FLT2R3 RPINR12bits.FLT2R3
#define _FLT2R4 RPINR12bits.FLT2R4
#define _FLT2R5 RPINR12bits.FLT2R5
#define _FLT2R6 RPINR12bits.FLT2R6

/* RPINR14 */
#define _QEA1R RPINR14bits.QEA1R
#define _QEB1R RPINR14bits.QEB1R
#define _QEA1R0 RPINR14bits.QEA1R0
#define _QEA1R1 RPINR14bits.QEA1R1
#define _QEA1R2 RPINR14bits.QEA1R2
#define _QEA1R3 RPINR14bits.QEA1R3
#define _QEA1R4 RPINR14bits.QEA1R4
#define _QEA1R5 RPINR14bits.QEA1R5
#define _QEA1R6 RPINR14bits.QEA1R6
#define _QEB1R0 RPINR14bits.QEB1R0
#define _QEB1R1 RPINR14bits.QEB1R1
#define _QEB1R2 RPINR14bits.QEB1R2
#define _QEB1R3 RPINR14bits.QEB1R3
#define _QEB1R4 RPINR14bits.QEB1R4
#define _QEB1R5 RPINR14bits.QEB1R5
#define _QEB1R6 RPINR14bits.QEB1R6

/* RPINR15 */
#define _INDX1R RPINR15bits.INDX1R
#define _HOME1R RPINR15bits.HOME1R
#define _INDX1R0 RPINR15bits.INDX1R0
#define _INDX1R1 RPINR15bits.INDX1R1
#define _INDX1R2 RPINR15bits.INDX1R2
#define _INDX1R3 RPINR15bits.INDX1R3
#define _INDX1R4 RPINR15bits.INDX1R4
#define _INDX1R5 RPINR15bits.INDX1R5
#define _INDX1R6 RPINR15bits.INDX1R6
#define _HOME1R0 RPINR15bits.HOME1R0
#define _HOME1R1 RPINR15bits.HOME1R1
#define _HOME1R2 RPINR15bits.HOME1R2
#define _HOME1R3 RPINR15bits.HOME1R3
#define _HOME1R4 RPINR15bits.HOME1R4
#define _HOME1R5 RPINR15bits.HOME1R5
#define _HOME1R6 RPINR15bits.HOME1R6

/* RPINR18 */
#define _U1RXR RPINR18bits.U1RXR
#define _U1RXR0 RPINR18bits.U1RXR0
#define _U1RXR1 RPINR18bits.U1RXR1
#define _U1RXR2 RPINR18bits.U1RXR2
#define _U1RXR3 RPINR18bits.U1RXR3
#define _U1RXR4 RPINR18bits.U1RXR4
#define _U1RXR5 RPINR18bits.U1RXR5
#define _U1RXR6 RPINR18bits.U1RXR6

/* RPINR19 */
#define _U2RXR RPINR19bits.U2RXR
#define _U2RXR0 RPINR19bits.U2RXR0
#define _U2RXR1 RPINR19bits.U2RXR1
#define _U2RXR2 RPINR19bits.U2RXR2
#define _U2RXR3 RPINR19bits.U2RXR3
#define _U2RXR4 RPINR19bits.U2RXR4
#define _U2RXR5 RPINR19bits.U2RXR5
#define _U2RXR6 RPINR19bits.U2RXR6

/* RPINR22 */
#define _SDI2R RPINR22bits.SDI2R
#define _SCK2R RPINR22bits.SCK2R
#define _SDI2R0 RPINR22bits.SDI2R0
#define _SDI2R1 RPINR22bits.SDI2R1
#define _SDI2R2 RPINR22bits.SDI2R2
#define _SDI2R3 RPINR22bits.SDI2R3
#define _SDI2R4 RPINR22bits.SDI2R4
#define _SDI2R5 RPINR22bits.SDI2R5
#define _SDI2R6 RPINR22bits.SDI2R6
#define _SCK2R0 RPINR22bits.SCK2R0
#define _SCK2R1 RPINR22bits.SCK2R1
#define _SCK2R2 RPINR22bits.SCK2R2
#define _SCK2R3 RPINR22bits.SCK2R3
#define _SCK2R4 RPINR22bits.SCK2R4
#define _SCK2R5 RPINR22bits.SCK2R5
#define _SCK2R6 RPINR22bits.SCK2R6

/* RPINR23 */
#define _SS2R RPINR23bits.SS2R
#define _SS2R0 RPINR23bits.SS2R0
#define _SS2R1 RPINR23bits.SS2R1
#define _SS2R2 RPINR23bits.SS2R2
#define _SS2R3 RPINR23bits.SS2R3
#define _SS2R4 RPINR23bits.SS2R4
#define _SS2R5 RPINR23bits.SS2R5
#define _SS2R6 RPINR23bits.SS2R6

/* RPINR26 */
#define _C1RXR RPINR26bits.C1RXR
#define _C1RXR0 RPINR26bits.C1RXR0
#define _C1RXR1 RPINR26bits.C1RXR1
#define _C1RXR2 RPINR26bits.C1RXR2
#define _C1RXR3 RPINR26bits.C1RXR3
#define _C1RXR4 RPINR26bits.C1RXR4
#define _C1RXR5 RPINR26bits.C1RXR5
#define _C1RXR6 RPINR26bits.C1RXR6

/* RPINR37 */
#define _SYNCI1R RPINR37bits.SYNCI1R
#define _SYNCI1R0 RPINR37bits.SYNCI1R0
#define _SYNCI1R1 RPINR37bits.SYNCI1R1
#define _SYNCI1R2 RPINR37bits.SYNCI1R2
#define _SYNCI1R3 RPINR37bits.SYNCI1R3
#define _SYNCI1R4 RPINR37bits.SYNCI1R4
#define _SYNCI1R5 RPINR37bits.SYNCI1R5
#define _SYNCI1R6 RPINR37bits.SYNCI1R6

/* RPINR38 */
#define _DTCMP1R RPINR38bits.DTCMP1R
#define _DTCMP1R0 RPINR38bits.DTCMP1R0
#define _DTCMP1R1 RPINR38bits.DTCMP1R1
#define _DTCMP1R2 RPINR38bits.DTCMP1R2
#define _DTCMP1R3 RPINR38bits.DTCMP1R3
#define _DTCMP1R4 RPINR38bits.DTCMP1R4
#define _DTCMP1R5 RPINR38bits.DTCMP1R5
#define _DTCMP1R6 RPINR38bits.DTCMP1R6

/* RPINR39 */
#define _DTCMP2R RPINR39bits.DTCMP2R
#define _DTCMP3R RPINR39bits.DTCMP3R
#define _DTCMP2R0 RPINR39bits.DTCMP2R0
#define _DTCMP2R1 RPINR39bits.DTCMP2R1
#define _DTCMP2R2 RPINR39bits.DTCMP2R2
#define _DTCMP2R3 RPINR39bits.DTCMP2R3
#define _DTCMP2R4 RPINR39bits.DTCMP2R4
#define _DTCMP2R5 RPINR39bits.DTCMP2R5
#define _DTCMP2R6 RPINR39bits.DTCMP2R6
#define _DTCMP3R0 RPINR39bits.DTCMP3R0
#define _DTCMP3R1 RPINR39bits.DTCMP3R1
#define _DTCMP3R2 RPINR39bits.DTCMP3R2
#define _DTCMP3R3 RPINR39bits.DTCMP3R3
#define _DTCMP3R4 RPINR39bits.DTCMP3R4
#define _DTCMP3R5 RPINR39bits.DTCMP3R5
#define _DTCMP3R6 RPINR39bits.DTCMP3R6

/* NVMCON */
#define _NVMOP NVMCONbits.NVMOP
#define _NVMSIDL NVMCONbits.NVMSIDL
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _NVMOP0 NVMCONbits.NVMOP0
#define _NVMOP1 NVMCONbits.NVMOP1
#define _NVMOP2 NVMCONbits.NVMOP2
#define _NVMOP3 NVMCONbits.NVMOP3

/* NVMADRU */
#define _NVMADRU NVMADRUbits.NVMADRU

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

/* REFOCON */
#define _RODIV REFOCONbits.RODIV
#define _ROSEL REFOCONbits.ROSEL
#define _ROSSLP REFOCONbits.ROSSLP
#define _ROON REFOCONbits.ROON
#define _RODIV0 REFOCONbits.RODIV0
#define _RODIV1 REFOCONbits.RODIV1
#define _RODIV2 REFOCONbits.RODIV2
#define _RODIV3 REFOCONbits.RODIV3

/* PMD1 */
#define _AD1MD PMD1bits.AD1MD
#define _SPI1MD PMD1bits.SPI1MD
#define _SPI2MD PMD1bits.SPI2MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _I2C1MD PMD1bits.I2C1MD
#define _PWMMD PMD1bits.PWMMD
#define _QEI1MD PMD1bits.QEI1MD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD
#define _T3MD PMD1bits.T3MD
#define _T4MD PMD1bits.T4MD
#define _T5MD PMD1bits.T5MD

/* PMD2 */
#define _OC1MD PMD2bits.OC1MD
#define _OC2MD PMD2bits.OC2MD
#define _OC3MD PMD2bits.OC3MD
#define _OC4MD PMD2bits.OC4MD
#define _IC1MD PMD2bits.IC1MD
#define _IC2MD PMD2bits.IC2MD
#define _IC3MD PMD2bits.IC3MD
#define _IC4MD PMD2bits.IC4MD

/* PMD3 */
#define _I2C2MD PMD3bits.I2C2MD
#define _CRCMD PMD3bits.CRCMD
#define _CMPMD PMD3bits.CMPMD

/* PMD4 */
#define _CTMUMD PMD4bits.CTMUMD
#define _REFOMD PMD4bits.REFOMD

/* PMD6 */
#define _PWM1MD PMD6bits.PWM1MD
#define _PWM2MD PMD6bits.PWM2MD
#define _PWM3MD PMD6bits.PWM3MD

/* PMD7 */
#define _PTGMD PMD7bits.PTGMD
#define _DMA0MD PMD7bits.DMA0MD
#define _DMA1MD PMD7bits.DMA1MD
#define _DMA5MD PMD7bits.DMA5MD
#define _DMA9MD PMD7bits.DMA9MD
#define _DMA13MD PMD7bits.DMA13MD
#define _DMA2MD PMD7bits.DMA2MD
#define _DMA6MD PMD7bits.DMA6MD
#define _DMA10MD PMD7bits.DMA10MD
#define _DMA14MD PMD7bits.DMA14MD
#define _DMA3MD PMD7bits.DMA3MD
#define _DMA7MD PMD7bits.DMA7MD
#define _DMA11MD PMD7bits.DMA11MD

/* IFS0 */
#define _INT0IF IFS0bits.INT0IF
#define _IC1IF IFS0bits.IC1IF
#define _OC1IF IFS0bits.OC1IF
#define _T1IF IFS0bits.T1IF
#define _DMA0IF IFS0bits.DMA0IF
#define _IC2IF IFS0bits.IC2IF
#define _OC2IF IFS0bits.OC2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _SPI1EIF IFS0bits.SPI1EIF
#define _SPI1IF IFS0bits.SPI1IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _AD1IF IFS0bits.AD1IF
#define _DMA1IF IFS0bits.DMA1IF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _CMIF IFS1bits.CMIF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _DMA2IF IFS1bits.DMA2IF
#define _OC3IF IFS1bits.OC3IF
#define _OC4IF IFS1bits.OC4IF
#define _T4IF IFS1bits.T4IF
#define _T5IF IFS1bits.T5IF
#define _INT2IF IFS1bits.INT2IF
#define _U2RXIF IFS1bits.U2RXIF
#define _U2TXIF IFS1bits.U2TXIF

/* IFS2 */
#define _SPI2EIF IFS2bits.SPI2EIF
#define _SPI2IF IFS2bits.SPI2IF
#define _DMA3IF IFS2bits.DMA3IF
#define _IC3IF IFS2bits.IC3IF
#define _IC4IF IFS2bits.IC4IF

/* IFS3 */
#define _SI2C2IF IFS3bits.SI2C2IF
#define _MI2C2IF IFS3bits.MI2C2IF
#define _PSEMIF IFS3bits.PSEMIF
#define _QEI1IF IFS3bits.QEI1IF

/* IFS4 */
#define _U1EIF IFS4bits.U1EIF
#define _U2EIF IFS4bits.U2EIF
#define _CRCIF IFS4bits.CRCIF
#define _CTMUIF IFS4bits.CTMUIF

/* IFS5 */
#define _PWM1IF IFS5bits.PWM1IF
#define _PWM2IF IFS5bits.PWM2IF

/* IFS6 */
#define _PWM3IF IFS6bits.PWM3IF

/* IFS8 */
/* Bitname _ICDIF cannot be defined because it is used by more than one SFR */
#define _JTAGIF IFS8bits.JTAGIF

/* IFS9 */
#define _PTGSTEPIF IFS9bits.PTGSTEPIF
#define _PTGWDTIF IFS9bits.PTGWDTIF
#define _PTG0IF IFS9bits.PTG0IF
#define _PTG1IF IFS9bits.PTG1IF
#define _PTG2IF IFS9bits.PTG2IF
#define _PTG3IF IFS9bits.PTG3IF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _DMA0IE IEC0bits.DMA0IE
#define _IC2IE IEC0bits.IC2IE
#define _OC2IE IEC0bits.OC2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _SPI1EIE IEC0bits.SPI1EIE
#define _SPI1IE IEC0bits.SPI1IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _AD1IE IEC0bits.AD1IE
#define _DMA1IE IEC0bits.DMA1IE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _CMIE IEC1bits.CMIE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _DMA2IE IEC1bits.DMA2IE
#define _OC3IE IEC1bits.OC3IE
#define _OC4IE IEC1bits.OC4IE
#define _T4IE IEC1bits.T4IE
#define _T5IE IEC1bits.T5IE
#define _INT2IE IEC1bits.INT2IE
#define _U2RXIE IEC1bits.U2RXIE
#define _U2TXIE IEC1bits.U2TXIE

/* IEC2 */
#define _SPI2EIE IEC2bits.SPI2EIE
#define _SPI2IE IEC2bits.SPI2IE
#define _DMA3IE IEC2bits.DMA3IE
#define _IC3IE IEC2bits.IC3IE
#define _IC4IE IEC2bits.IC4IE

/* IEC3 */
#define _SI2C2IE IEC3bits.SI2C2IE
#define _MI2C2IE IEC3bits.MI2C2IE
#define _PSEMIE IEC3bits.PSEMIE
#define _QEI1IE IEC3bits.QEI1IE

/* IEC4 */
#define _U1EIE IEC4bits.U1EIE
#define _U2EIE IEC4bits.U2EIE
#define _CRCIE IEC4bits.CRCIE
#define _CTMUIE IEC4bits.CTMUIE

/* IEC5 */
#define _PWM1IE IEC5bits.PWM1IE
#define _PWM2IE IEC5bits.PWM2IE

/* IEC6 */
#define _PWM3IE IEC6bits.PWM3IE

/* IEC8 */
/* Bitname _ICDIF cannot be defined because it is used by more than one SFR */
#define _JTAGIE IEC8bits.JTAGIE

/* IEC9 */
#define _PTGSTEPIE IEC9bits.PTGSTEPIE
#define _PTGWDTIE IEC9bits.PTGWDTIE
#define _PTG0IE IEC9bits.PTG0IE
#define _PTG1IE IEC9bits.PTG1IE
#define _PTG2IE IEC9bits.PTG2IE
#define _PTG3IE IEC9bits.PTG3IE

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
#define _DMA0IP IPC1bits.DMA0IP
#define _IC2IP IPC1bits.IC2IP
#define _OC2IP IPC1bits.OC2IP
#define _T2IP IPC1bits.T2IP
#define _DMA0IP0 IPC1bits.DMA0IP0
#define _DMA0IP1 IPC1bits.DMA0IP1
#define _DMA0IP2 IPC1bits.DMA0IP2
#define _IC2IP0 IPC1bits.IC2IP0
#define _IC2IP1 IPC1bits.IC2IP1
#define _IC2IP2 IPC1bits.IC2IP2
#define _OC2IP0 IPC1bits.OC2IP0
#define _OC2IP1 IPC1bits.OC2IP1
#define _OC2IP2 IPC1bits.OC2IP2
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
#define _AD1IP IPC3bits.AD1IP
#define _DMA1IP IPC3bits.DMA1IP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _AD1IP0 IPC3bits.AD1IP0
#define _AD1IP1 IPC3bits.AD1IP1
#define _AD1IP2 IPC3bits.AD1IP2
#define _DMA1IP0 IPC3bits.DMA1IP0
#define _DMA1IP1 IPC3bits.DMA1IP1
#define _DMA1IP2 IPC3bits.DMA1IP2
#define _NVMIP0 IPC3bits.NVMIP0
#define _NVMIP1 IPC3bits.NVMIP1
#define _NVMIP2 IPC3bits.NVMIP2

/* IPC4 */
#define _SI2C1IP IPC4bits.SI2C1IP
#define _MI2C1IP IPC4bits.MI2C1IP
#define _CMIP IPC4bits.CMIP
#define _CNIP IPC4bits.CNIP
#define _SI2C1IP0 IPC4bits.SI2C1IP0
#define _SI2C1IP1 IPC4bits.SI2C1IP1
#define _SI2C1IP2 IPC4bits.SI2C1IP2
#define _MI2C1IP0 IPC4bits.MI2C1IP0
#define _MI2C1IP1 IPC4bits.MI2C1IP1
#define _MI2C1IP2 IPC4bits.MI2C1IP2
#define _CMIP0 IPC4bits.CMIP0
#define _CMIP1 IPC4bits.CMIP1
#define _CMIP2 IPC4bits.CMIP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2

/* IPC6 */
#define _DMA2IP IPC6bits.DMA2IP
#define _OC3IP IPC6bits.OC3IP
#define _OC4IP IPC6bits.OC4IP
#define _T4IP IPC6bits.T4IP
#define _DMA2IP0 IPC6bits.DMA2IP0
#define _DMA2IP1 IPC6bits.DMA2IP1
#define _DMA2IP2 IPC6bits.DMA2IP2
#define _OC3IP0 IPC6bits.OC3IP0
#define _OC3IP1 IPC6bits.OC3IP1
#define _OC3IP2 IPC6bits.OC3IP2
#define _OC4IP0 IPC6bits.OC4IP0
#define _OC4IP1 IPC6bits.OC4IP1
#define _OC4IP2 IPC6bits.OC4IP2
#define _T4IP0 IPC6bits.T4IP0
#define _T4IP1 IPC6bits.T4IP1
#define _T4IP2 IPC6bits.T4IP2

/* IPC7 */
#define _T5IP IPC7bits.T5IP
#define _INT2IP IPC7bits.INT2IP
#define _U2RXIP IPC7bits.U2RXIP
#define _U2TXIP IPC7bits.U2TXIP
#define _T5IP0 IPC7bits.T5IP0
#define _T5IP1 IPC7bits.T5IP1
#define _T5IP2 IPC7bits.T5IP2
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2
#define _U2RXIP0 IPC7bits.U2RXIP0
#define _U2RXIP1 IPC7bits.U2RXIP1
#define _U2RXIP2 IPC7bits.U2RXIP2
#define _U2TXIP0 IPC7bits.U2TXIP0
#define _U2TXIP1 IPC7bits.U2TXIP1
#define _U2TXIP2 IPC7bits.U2TXIP2

/* IPC8 */
#define _SPI2EIP IPC8bits.SPI2EIP
#define _SPI2IP IPC8bits.SPI2IP
#define _SPI2EIP0 IPC8bits.SPI2EIP0
#define _SPI2EIP1 IPC8bits.SPI2EIP1
#define _SPI2EIP2 IPC8bits.SPI2EIP2
#define _SPI2IP0 IPC8bits.SPI2IP0
#define _SPI2IP1 IPC8bits.SPI2IP1
#define _SPI2IP2 IPC8bits.SPI2IP2

/* IPC9 */
#define _DMA3IP IPC9bits.DMA3IP
#define _IC3IP IPC9bits.IC3IP
#define _IC4IP IPC9bits.IC4IP
#define _DMA3IP0 IPC9bits.DMA3IP0
#define _DMA3IP1 IPC9bits.DMA3IP1
#define _DMA3IP2 IPC9bits.DMA3IP2
#define _IC3IP0 IPC9bits.IC3IP0
#define _IC3IP1 IPC9bits.IC3IP1
#define _IC3IP2 IPC9bits.IC3IP2
#define _IC4IP0 IPC9bits.IC4IP0
#define _IC4IP1 IPC9bits.IC4IP1
#define _IC4IP2 IPC9bits.IC4IP2

/* IPC12 */
#define _SI2C2IP IPC12bits.SI2C2IP
#define _MI2C2IP IPC12bits.MI2C2IP
#define _SI2C2IP0 IPC12bits.SI2C2IP0
#define _SI2C2IP1 IPC12bits.SI2C2IP1
#define _SI2C2IP2 IPC12bits.SI2C2IP2
#define _MI2C2IP0 IPC12bits.MI2C2IP0
#define _MI2C2IP1 IPC12bits.MI2C2IP1
#define _MI2C2IP2 IPC12bits.MI2C2IP2

/* IPC14 */
#define _PSEMIP IPC14bits.PSEMIP
#define _QEI1IP IPC14bits.QEI1IP
#define _PSEMIP0 IPC14bits.PSEMIP0
#define _PSEMIP1 IPC14bits.PSEMIP1
#define _PSEMIP2 IPC14bits.PSEMIP2
#define _QEI1IP0 IPC14bits.QEI1IP0
#define _QEI1IP1 IPC14bits.QEI1IP1
#define _QEI1IP2 IPC14bits.QEI1IP2

/* IPC16 */
#define _U1EIP IPC16bits.U1EIP
#define _U2EIP IPC16bits.U2EIP
#define _CRCIP IPC16bits.CRCIP
#define _U1EIP0 IPC16bits.U1EIP0
#define _U1EIP1 IPC16bits.U1EIP1
#define _U1EIP2 IPC16bits.U1EIP2
#define _U2EIP0 IPC16bits.U2EIP0
#define _U2EIP1 IPC16bits.U2EIP1
#define _U2EIP2 IPC16bits.U2EIP2
#define _CRCIP0 IPC16bits.CRCIP0
#define _CRCIP1 IPC16bits.CRCIP1
#define _CRCIP2 IPC16bits.CRCIP2

/* IPC19 */
#define _CTMUIP IPC19bits.CTMUIP

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

/* IPC35 */
#define _ICDIP IPC35bits.ICDIP
#define _JTAGIP IPC35bits.JTAGIP
#define _ICDIP0 IPC35bits.ICDIP0
#define _ICDIP1 IPC35bits.ICDIP1
#define _ICDIP2 IPC35bits.ICDIP2
#define _JTAGIP0 IPC35bits.JTAGIP0
#define _JTAGIP1 IPC35bits.JTAGIP1
#define _JTAGIP2 IPC35bits.JTAGIP2

/* IPC36 */
#define _PTGSTEPIP IPC36bits.PTGSTEPIP
#define _PTGWDTIP IPC36bits.PTGWDTIP
#define _PTG0IP IPC36bits.PTG0IP

/* IPC37 */
#define _PTG1IP IPC37bits.PTG1IP
#define _PTG2IP IPC37bits.PTG2IP
#define _PTG3IP IPC37bits.PTG3IP

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _DMACERR INTCON1bits.DMACERR
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
#define _SWTRAP INTCON2bits.SWTRAP
#define _DISI INTCON2bits.DISI
#define _GIE INTCON2bits.GIE

/* INTCON3 */
#define _DOOVR INTCON3bits.DOOVR
#define _DAE INTCON3bits.DAE

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
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTB cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTB cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */

/* OC1CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC2CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTB cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTB cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */

/* OC2CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC3CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTB cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTB cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */

/* OC3CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* OC4CON1 */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTB cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTB cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLT1 cannot be defined because it is used by more than one SFR */

/* OC4CON2 */
/* Bitname _SYNCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIS cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _OCTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _OC32 cannot be defined because it is used by more than one SFR */
/* Bitname _OCINV cannot be defined because it is used by more than one SFR */
/* Bitname _FLTTRIEN cannot be defined because it is used by more than one SFR */
/* Bitname _FLTOUT cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMD cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNCSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _FLTMODE cannot be defined because it is used by more than one SFR */

/* CMSTAT */
#define _C1OUT CMSTATbits.C1OUT
#define _C2OUT CMSTATbits.C2OUT
#define _C3OUT CMSTATbits.C3OUT
#define _C4OUT CMSTATbits.C4OUT
#define _C1EVT CMSTATbits.C1EVT
#define _C2EVT CMSTATbits.C2EVT
#define _C3EVT CMSTATbits.C3EVT
#define _C4EVT CMSTATbits.C4EVT
#define _PSIDL CMSTATbits.PSIDL

/* CVRCON */
#define _CVR CVRCONbits.CVR
#define _CVRSS CVRCONbits.CVRSS
#define _CVRR CVRCONbits.CVRR
#define _CVROE CVRCONbits.CVROE
#define _CVREN CVRCONbits.CVREN
#define _VREFSEL CVRCONbits.VREFSEL
#define _CVR2OE CVRCONbits.CVR2OE
#define _CVR0 CVRCONbits.CVR0
#define _CVR1 CVRCONbits.CVR1
#define _CVR2 CVRCONbits.CVR2
#define _CVR3 CVRCONbits.CVR3
#define _CVR1OE CVRCONbits.CVR1OE

/* CM1CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _OPMODE cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CEN cannot be defined because it is used by more than one SFR */

/* CM1MSKSRC */
/* Bitname _SELSRCA cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA3 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB3 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC3 cannot be defined because it is used by more than one SFR */

/* CM1MSKCON */
/* Bitname _AANEN cannot be defined because it is used by more than one SFR */
/* Bitname _AAEN cannot be defined because it is used by more than one SFR */
/* Bitname _ABNEN cannot be defined because it is used by more than one SFR */
/* Bitname _ABEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACNEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACEN cannot be defined because it is used by more than one SFR */
/* Bitname _PAGS cannot be defined because it is used by more than one SFR */
/* Bitname _NAGS cannot be defined because it is used by more than one SFR */
/* Bitname _OANEN cannot be defined because it is used by more than one SFR */
/* Bitname _OAEN cannot be defined because it is used by more than one SFR */
/* Bitname _OBNEN cannot be defined because it is used by more than one SFR */
/* Bitname _OBEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCNEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCEN cannot be defined because it is used by more than one SFR */
/* Bitname _HLMS cannot be defined because it is used by more than one SFR */

/* CM1FLTR */
/* Bitname _CFDIV cannot be defined because it is used by more than one SFR */
/* Bitname _CFLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL2 cannot be defined because it is used by more than one SFR */

/* CM2CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _OPMODE cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CEN cannot be defined because it is used by more than one SFR */

/* CM2MSKSRC */
/* Bitname _SELSRCA cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA3 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB3 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC3 cannot be defined because it is used by more than one SFR */

/* CM2MSKCON */
/* Bitname _AANEN cannot be defined because it is used by more than one SFR */
/* Bitname _AAEN cannot be defined because it is used by more than one SFR */
/* Bitname _ABNEN cannot be defined because it is used by more than one SFR */
/* Bitname _ABEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACNEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACEN cannot be defined because it is used by more than one SFR */
/* Bitname _PAGS cannot be defined because it is used by more than one SFR */
/* Bitname _NAGS cannot be defined because it is used by more than one SFR */
/* Bitname _OANEN cannot be defined because it is used by more than one SFR */
/* Bitname _OAEN cannot be defined because it is used by more than one SFR */
/* Bitname _OBNEN cannot be defined because it is used by more than one SFR */
/* Bitname _OBEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCNEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCEN cannot be defined because it is used by more than one SFR */
/* Bitname _HLMS cannot be defined because it is used by more than one SFR */

/* CM2FLTR */
/* Bitname _CFDIV cannot be defined because it is used by more than one SFR */
/* Bitname _CFLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL2 cannot be defined because it is used by more than one SFR */

/* CM3CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _OPMODE cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CEN cannot be defined because it is used by more than one SFR */

/* CM3MSKSRC */
/* Bitname _SELSRCA cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA3 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB3 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC3 cannot be defined because it is used by more than one SFR */

/* CM3MSKCON */
/* Bitname _AANEN cannot be defined because it is used by more than one SFR */
/* Bitname _AAEN cannot be defined because it is used by more than one SFR */
/* Bitname _ABNEN cannot be defined because it is used by more than one SFR */
/* Bitname _ABEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACNEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACEN cannot be defined because it is used by more than one SFR */
/* Bitname _PAGS cannot be defined because it is used by more than one SFR */
/* Bitname _NAGS cannot be defined because it is used by more than one SFR */
/* Bitname _OANEN cannot be defined because it is used by more than one SFR */
/* Bitname _OAEN cannot be defined because it is used by more than one SFR */
/* Bitname _OBNEN cannot be defined because it is used by more than one SFR */
/* Bitname _OBEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCNEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCEN cannot be defined because it is used by more than one SFR */
/* Bitname _HLMS cannot be defined because it is used by more than one SFR */

/* CM3FLTR */
/* Bitname _CFDIV cannot be defined because it is used by more than one SFR */
/* Bitname _CFLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL2 cannot be defined because it is used by more than one SFR */

/* CM4CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CEN cannot be defined because it is used by more than one SFR */

/* CM4MSKSRC */
/* Bitname _SELSRCA cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCA3 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCB3 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SELSRCC3 cannot be defined because it is used by more than one SFR */

/* CM4MSKCON */
/* Bitname _AANEN cannot be defined because it is used by more than one SFR */
/* Bitname _AAEN cannot be defined because it is used by more than one SFR */
/* Bitname _ABNEN cannot be defined because it is used by more than one SFR */
/* Bitname _ABEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACNEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACEN cannot be defined because it is used by more than one SFR */
/* Bitname _PAGS cannot be defined because it is used by more than one SFR */
/* Bitname _NAGS cannot be defined because it is used by more than one SFR */
/* Bitname _OANEN cannot be defined because it is used by more than one SFR */
/* Bitname _OAEN cannot be defined because it is used by more than one SFR */
/* Bitname _OBNEN cannot be defined because it is used by more than one SFR */
/* Bitname _OBEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCNEN cannot be defined because it is used by more than one SFR */
/* Bitname _OCEN cannot be defined because it is used by more than one SFR */
/* Bitname _HLMS cannot be defined because it is used by more than one SFR */

/* CM4FLTR */
/* Bitname _CFDIV cannot be defined because it is used by more than one SFR */
/* Bitname _CFLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV0 cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV1 cannot be defined because it is used by more than one SFR */
/* Bitname _CFDIV2 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CFSEL2 cannot be defined because it is used by more than one SFR */

/* PTGCST */
#define _PTGITM PTGCSTbits.PTGITM
#define _PTGWTO PTGCSTbits.PTGWTO
#define _PTGSTRT PTGCSTbits.PTGSTRT
#define _PTGIVIS PTGCSTbits.PTGIVIS
#define _PTGSSEN PTGCSTbits.PTGSSEN
#define _PTGSWT PTGCSTbits.PTGSWT
#define _PTGTOGL PTGCSTbits.PTGTOGL
#define _PTGSIDL PTGCSTbits.PTGSIDL
#define _PTGEN PTGCSTbits.PTGEN

/* PTGCON */
#define _PTGWDT PTGCONbits.PTGWDT
#define _PTGPWD PTGCONbits.PTGPWD
#define _PTGDIV PTGCONbits.PTGDIV
#define _PTGCLK PTGCONbits.PTGCLK

/* PTGBTE */
#define _OC1TSS PTGBTEbits.OC1TSS
#define _OC2TSS PTGBTEbits.OC2TSS
#define _OC3TSS PTGBTEbits.OC3TSS
#define _OC4TSS PTGBTEbits.OC4TSS
#define _OC1CS PTGBTEbits.OC1CS
#define _OC2CS PTGBTEbits.OC2CS
#define _OC3CS PTGBTEbits.OC3CS
#define _OC4CS PTGBTEbits.OC4CS
#define _IC1TSS PTGBTEbits.IC1TSS
#define _IC2TSS PTGBTEbits.IC2TSS
#define _IC3TSS PTGBTEbits.IC3TSS
#define _IC4TSS PTGBTEbits.IC4TSS
#define _ADCTS1 PTGBTEbits.ADCTS1
#define _ADCTS2 PTGBTEbits.ADCTS2
#define _ADCTS3 PTGBTEbits.ADCTS3
#define _ADCTS4 PTGBTEbits.ADCTS4
#define _PTGBTE PTGBTEbits.PTGBTE

/* PTGQPTR */
#define _PTGQPTR PTGQPTRbits.PTGQPTR

/* PTGQUE0 */
#define _STEP0 PTGQUE0bits.STEP0
#define _STEP1 PTGQUE0bits.STEP1

/* PTGQUE1 */
#define _STEP2 PTGQUE1bits.STEP2
#define _STEP3 PTGQUE1bits.STEP3

/* PTGQUE2 */
#define _STEP4 PTGQUE2bits.STEP4
#define _STEP5 PTGQUE2bits.STEP5

/* PTGQUE3 */
#define _STEP6 PTGQUE3bits.STEP6
#define _STEP7 PTGQUE3bits.STEP7

/* PTGQUE4 */
#define _STEP8 PTGQUE4bits.STEP8
#define _STEP9 PTGQUE4bits.STEP9

/* PTGQUE5 */
#define _STEP10 PTGQUE5bits.STEP10
#define _STEP11 PTGQUE5bits.STEP11

/* PTGQUE6 */
#define _STEP12 PTGQUE6bits.STEP12
#define _STEP13 PTGQUE6bits.STEP13

/* PTGQUE7 */
#define _STEP14 PTGQUE7bits.STEP14
#define _STEP15 PTGQUE7bits.STEP15

/* DMA0CON */
#define _MODE DMA0CONbits.MODE
#define _AMODE DMA0CONbits.AMODE
#define _NULLW DMA0CONbits.NULLW
#define _HALF DMA0CONbits.HALF
#define _DIR DMA0CONbits.DIR
#define _SIZE DMA0CONbits.SIZE
#define _CHEN DMA0CONbits.CHEN
#define _MODE0 DMA0CONbits.MODE0
#define _MODE1 DMA0CONbits.MODE1
#define _AMODE0 DMA0CONbits.AMODE0
#define _AMODE1 DMA0CONbits.AMODE1

/* DMA0REQ */
#define _IRQSEL DMA0REQbits.IRQSEL
#define _FORCE DMA0REQbits.FORCE
#define _IRQSEL0 DMA0REQbits.IRQSEL0
#define _IRQSEL1 DMA0REQbits.IRQSEL1
#define _IRQSEL2 DMA0REQbits.IRQSEL2
#define _IRQSEL3 DMA0REQbits.IRQSEL3
#define _IRQSEL4 DMA0REQbits.IRQSEL4
#define _IRQSEL5 DMA0REQbits.IRQSEL5
#define _IRQSEL6 DMA0REQbits.IRQSEL6
#define _IRQSEL7 DMA0REQbits.IRQSEL7

/* DMA0STAH */
/* Bitname _STA cannot be defined because it is used by more than one SFR */

/* DMA0STBH */
/* Bitname _STB cannot be defined because it is used by more than one SFR */

/* DMA0CNT */
#define _CNT DMA0CNTbits.CNT

/* DMA1CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _HALF cannot be defined because it is used by more than one SFR */
/* Bitname _DIR cannot be defined because it is used by more than one SFR */
/* Bitname _SIZE cannot be defined because it is used by more than one SFR */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA1REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL7 cannot be defined because it is used by more than one SFR */

/* DMA1STAH */
/* Bitname _STA cannot be defined because it is used by more than one SFR */

/* DMA1STBH */
/* Bitname _STB cannot be defined because it is used by more than one SFR */

/* DMA1CNT */
/* Bitname _CNT cannot be defined because it is used by more than one SFR */

/* DMA2CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _HALF cannot be defined because it is used by more than one SFR */
/* Bitname _DIR cannot be defined because it is used by more than one SFR */
/* Bitname _SIZE cannot be defined because it is used by more than one SFR */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA2REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL7 cannot be defined because it is used by more than one SFR */

/* DMA2STAH */
/* Bitname _STA cannot be defined because it is used by more than one SFR */

/* DMA2STBH */
/* Bitname _STB cannot be defined because it is used by more than one SFR */

/* DMA2CNT */
/* Bitname _CNT cannot be defined because it is used by more than one SFR */

/* DMA3CON */
/* Bitname _MODE cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE cannot be defined because it is used by more than one SFR */
/* Bitname _NULLW cannot be defined because it is used by more than one SFR */
/* Bitname _HALF cannot be defined because it is used by more than one SFR */
/* Bitname _DIR cannot be defined because it is used by more than one SFR */
/* Bitname _SIZE cannot be defined because it is used by more than one SFR */
/* Bitname _CHEN cannot be defined because it is used by more than one SFR */
/* Bitname _MODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _MODE1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMODE1 cannot be defined because it is used by more than one SFR */

/* DMA3REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL7 cannot be defined because it is used by more than one SFR */

/* DMA3STAH */
/* Bitname _STA cannot be defined because it is used by more than one SFR */

/* DMA3STBH */
/* Bitname _STB cannot be defined because it is used by more than one SFR */

/* DMA3CNT */
/* Bitname _CNT cannot be defined because it is used by more than one SFR */

/* DMAPWC */
#define _PWCOL0 DMAPWCbits.PWCOL0
#define _PWCOL1 DMAPWCbits.PWCOL1
#define _PWCOL2 DMAPWCbits.PWCOL2
#define _PWCOL3 DMAPWCbits.PWCOL3

/* DMARQC */
#define _RQCOL0 DMARQCbits.RQCOL0
#define _RQCOL1 DMARQCbits.RQCOL1
#define _RQCOL2 DMARQCbits.RQCOL2
#define _RQCOL3 DMARQCbits.RQCOL3

/* DMAPPS */
#define _PPST0 DMAPPSbits.PPST0
#define _PPST1 DMAPPSbits.PPST1
#define _PPST2 DMAPPSbits.PPST2
#define _PPST3 DMAPPSbits.PPST3

/* DMALCA */
#define _LSTCH DMALCAbits.LSTCH
#define _LSTCH0 DMALCAbits.LSTCH0
#define _LSTCH1 DMALCAbits.LSTCH1
#define _LSTCH2 DMALCAbits.LSTCH2
#define _LSTCH3 DMALCAbits.LSTCH3

/* DSADRH */
#define _DSADR DSADRHbits.DSADR

/* PTCON */
#define _SEVTPS PTCONbits.SEVTPS
#define _SYNCSRC PTCONbits.SYNCSRC
#define _SYNCEN PTCONbits.SYNCEN
#define _SYNCOEN PTCONbits.SYNCOEN
#define _SYNCPOL PTCONbits.SYNCPOL
#define _EIPU PTCONbits.EIPU
#define _SEIEN PTCONbits.SEIEN
#define _SESTAT PTCONbits.SESTAT
#define _PTSIDL PTCONbits.PTSIDL
#define _PTEN PTCONbits.PTEN
#define _SEVTPS0 PTCONbits.SEVTPS0
#define _SEVTPS1 PTCONbits.SEVTPS1
#define _SEVTPS2 PTCONbits.SEVTPS2
#define _SEVTPS3 PTCONbits.SEVTPS3
#define _SYNCSRC0 PTCONbits.SYNCSRC0
#define _SYNCSRC1 PTCONbits.SYNCSRC1
#define _SYNCSRC2 PTCONbits.SYNCSRC2

/* PTCON2 */
#define _PCLKDIV PTCON2bits.PCLKDIV
#define _PCLKDIV0 PTCON2bits.PCLKDIV0
#define _PCLKDIV1 PTCON2bits.PCLKDIV1
#define _PCLKDIV2 PTCON2bits.PCLKDIV2

/* SEVTCMP */
#define _SEVTCMP SEVTCMPbits.SEVTCMP

/* CHOP */
#define _CHOPCLK CHOPbits.CHOPCLK
#define _CHPCLKEN CHOPbits.CHPCLKEN
#define _CHOPCLK0 CHOPbits.CHOPCLK0
#define _CHOPCLK1 CHOPbits.CHOPCLK1
#define _CHOPCLK2 CHOPbits.CHOPCLK2
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
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
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
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
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
/* Bitname _DTCP cannot be defined because it is used by more than one SFR */
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
#define _ANSA4 ANSELAbits.ANSA4

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
#define _ANSB8 ANSELBbits.ANSB8

/* APPS */
#define _APIFUL APPSbits.APIFUL
#define _APIOV APPSbits.APIOV
#define _APOFUL APPSbits.APOFUL
#define _APOOV APPSbits.APOOV
#define _STRFUL APPSbits.STRFUL


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

#define _T4CON_TCS_POSITION                      0x00000001
#define _T4CON_TCS_MASK                          0x00000002
#define _T4CON_TCS_LENGTH                        0x00000001

#define _T4CON_T32_POSITION                      0x00000003
#define _T4CON_T32_MASK                          0x00000008
#define _T4CON_T32_LENGTH                        0x00000001

#define _T4CON_TCKPS_POSITION                    0x00000004
#define _T4CON_TCKPS_MASK                        0x00000030
#define _T4CON_TCKPS_LENGTH                      0x00000002

#define _T4CON_TGATE_POSITION                    0x00000006
#define _T4CON_TGATE_MASK                        0x00000040
#define _T4CON_TGATE_LENGTH                      0x00000001

#define _T4CON_TSIDL_POSITION                    0x0000000D
#define _T4CON_TSIDL_MASK                        0x00002000
#define _T4CON_TSIDL_LENGTH                      0x00000001

#define _T4CON_TON_POSITION                      0x0000000F
#define _T4CON_TON_MASK                          0x00008000
#define _T4CON_TON_LENGTH                        0x00000001

#define _T4CON_TCKPS0_POSITION                   0x00000004
#define _T4CON_TCKPS0_MASK                       0x00000010
#define _T4CON_TCKPS0_LENGTH                     0x00000001

#define _T4CON_TCKPS1_POSITION                   0x00000005
#define _T4CON_TCKPS1_MASK                       0x00000020
#define _T4CON_TCKPS1_LENGTH                     0x00000001

#define _T5CON_TCS_POSITION                      0x00000001
#define _T5CON_TCS_MASK                          0x00000002
#define _T5CON_TCS_LENGTH                        0x00000001

#define _T5CON_TCKPS_POSITION                    0x00000004
#define _T5CON_TCKPS_MASK                        0x00000030
#define _T5CON_TCKPS_LENGTH                      0x00000002

#define _T5CON_TGATE_POSITION                    0x00000006
#define _T5CON_TGATE_MASK                        0x00000040
#define _T5CON_TGATE_LENGTH                      0x00000001

#define _T5CON_TSIDL_POSITION                    0x0000000D
#define _T5CON_TSIDL_MASK                        0x00002000
#define _T5CON_TSIDL_LENGTH                      0x00000001

#define _T5CON_TON_POSITION                      0x0000000F
#define _T5CON_TON_MASK                          0x00008000
#define _T5CON_TON_LENGTH                        0x00000001

#define _T5CON_TCKPS0_POSITION                   0x00000004
#define _T5CON_TCKPS0_MASK                       0x00000010
#define _T5CON_TCKPS0_LENGTH                     0x00000001

#define _T5CON_TCKPS1_POSITION                   0x00000005
#define _T5CON_TCKPS1_MASK                       0x00000020
#define _T5CON_TCKPS1_LENGTH                     0x00000001

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

#define _IC1CON2_IC32_POSITION                   0x00000008
#define _IC1CON2_IC32_MASK                       0x00000100
#define _IC1CON2_IC32_LENGTH                     0x00000001

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

#define _IC2CON1_ICM_POSITION                    0x00000000
#define _IC2CON1_ICM_MASK                        0x00000007
#define _IC2CON1_ICM_LENGTH                      0x00000003

#define _IC2CON1_ICBNE_POSITION                  0x00000003
#define _IC2CON1_ICBNE_MASK                      0x00000008
#define _IC2CON1_ICBNE_LENGTH                    0x00000001

#define _IC2CON1_ICOV_POSITION                   0x00000004
#define _IC2CON1_ICOV_MASK                       0x00000010
#define _IC2CON1_ICOV_LENGTH                     0x00000001

#define _IC2CON1_ICI_POSITION                    0x00000005
#define _IC2CON1_ICI_MASK                        0x00000060
#define _IC2CON1_ICI_LENGTH                      0x00000002

#define _IC2CON1_ICTSEL_POSITION                 0x0000000A
#define _IC2CON1_ICTSEL_MASK                     0x00001C00
#define _IC2CON1_ICTSEL_LENGTH                   0x00000003

#define _IC2CON1_ICSIDL_POSITION                 0x0000000D
#define _IC2CON1_ICSIDL_MASK                     0x00002000
#define _IC2CON1_ICSIDL_LENGTH                   0x00000001

#define _IC2CON1_ICM0_POSITION                   0x00000000
#define _IC2CON1_ICM0_MASK                       0x00000001
#define _IC2CON1_ICM0_LENGTH                     0x00000001

#define _IC2CON1_ICM1_POSITION                   0x00000001
#define _IC2CON1_ICM1_MASK                       0x00000002
#define _IC2CON1_ICM1_LENGTH                     0x00000001

#define _IC2CON1_ICM2_POSITION                   0x00000002
#define _IC2CON1_ICM2_MASK                       0x00000004
#define _IC2CON1_ICM2_LENGTH                     0x00000001

#define _IC2CON1_ICI0_POSITION                   0x00000005
#define _IC2CON1_ICI0_MASK                       0x00000020
#define _IC2CON1_ICI0_LENGTH                     0x00000001

#define _IC2CON1_ICI1_POSITION                   0x00000006
#define _IC2CON1_ICI1_MASK                       0x00000040
#define _IC2CON1_ICI1_LENGTH                     0x00000001

#define _IC2CON1_ICTSEL0_POSITION                0x0000000A
#define _IC2CON1_ICTSEL0_MASK                    0x00000400
#define _IC2CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC2CON1_ICTSEL1_POSITION                0x0000000B
#define _IC2CON1_ICTSEL1_MASK                    0x00000800
#define _IC2CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC2CON1_ICTSEL2_POSITION                0x0000000C
#define _IC2CON1_ICTSEL2_MASK                    0x00001000
#define _IC2CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC2CON2_SYNCSEL_POSITION                0x00000000
#define _IC2CON2_SYNCSEL_MASK                    0x0000001F
#define _IC2CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC2CON2_TRIGSTAT_POSITION               0x00000006
#define _IC2CON2_TRIGSTAT_MASK                   0x00000040
#define _IC2CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC2CON2_ICTRIG_POSITION                 0x00000007
#define _IC2CON2_ICTRIG_MASK                     0x00000080
#define _IC2CON2_ICTRIG_LENGTH                   0x00000001

#define _IC2CON2_IC32_POSITION                   0x00000008
#define _IC2CON2_IC32_MASK                       0x00000100
#define _IC2CON2_IC32_LENGTH                     0x00000001

#define _IC2CON2_SYNCSEL0_POSITION               0x00000000
#define _IC2CON2_SYNCSEL0_MASK                   0x00000001
#define _IC2CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL1_POSITION               0x00000001
#define _IC2CON2_SYNCSEL1_MASK                   0x00000002
#define _IC2CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL2_POSITION               0x00000002
#define _IC2CON2_SYNCSEL2_MASK                   0x00000004
#define _IC2CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL3_POSITION               0x00000003
#define _IC2CON2_SYNCSEL3_MASK                   0x00000008
#define _IC2CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC2CON2_SYNCSEL4_POSITION               0x00000004
#define _IC2CON2_SYNCSEL4_MASK                   0x00000010
#define _IC2CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC3CON1_ICM_POSITION                    0x00000000
#define _IC3CON1_ICM_MASK                        0x00000007
#define _IC3CON1_ICM_LENGTH                      0x00000003

#define _IC3CON1_ICBNE_POSITION                  0x00000003
#define _IC3CON1_ICBNE_MASK                      0x00000008
#define _IC3CON1_ICBNE_LENGTH                    0x00000001

#define _IC3CON1_ICOV_POSITION                   0x00000004
#define _IC3CON1_ICOV_MASK                       0x00000010
#define _IC3CON1_ICOV_LENGTH                     0x00000001

#define _IC3CON1_ICI_POSITION                    0x00000005
#define _IC3CON1_ICI_MASK                        0x00000060
#define _IC3CON1_ICI_LENGTH                      0x00000002

#define _IC3CON1_ICTSEL_POSITION                 0x0000000A
#define _IC3CON1_ICTSEL_MASK                     0x00001C00
#define _IC3CON1_ICTSEL_LENGTH                   0x00000003

#define _IC3CON1_ICSIDL_POSITION                 0x0000000D
#define _IC3CON1_ICSIDL_MASK                     0x00002000
#define _IC3CON1_ICSIDL_LENGTH                   0x00000001

#define _IC3CON1_ICM0_POSITION                   0x00000000
#define _IC3CON1_ICM0_MASK                       0x00000001
#define _IC3CON1_ICM0_LENGTH                     0x00000001

#define _IC3CON1_ICM1_POSITION                   0x00000001
#define _IC3CON1_ICM1_MASK                       0x00000002
#define _IC3CON1_ICM1_LENGTH                     0x00000001

#define _IC3CON1_ICM2_POSITION                   0x00000002
#define _IC3CON1_ICM2_MASK                       0x00000004
#define _IC3CON1_ICM2_LENGTH                     0x00000001

#define _IC3CON1_ICI0_POSITION                   0x00000005
#define _IC3CON1_ICI0_MASK                       0x00000020
#define _IC3CON1_ICI0_LENGTH                     0x00000001

#define _IC3CON1_ICI1_POSITION                   0x00000006
#define _IC3CON1_ICI1_MASK                       0x00000040
#define _IC3CON1_ICI1_LENGTH                     0x00000001

#define _IC3CON1_ICTSEL0_POSITION                0x0000000A
#define _IC3CON1_ICTSEL0_MASK                    0x00000400
#define _IC3CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC3CON1_ICTSEL1_POSITION                0x0000000B
#define _IC3CON1_ICTSEL1_MASK                    0x00000800
#define _IC3CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC3CON1_ICTSEL2_POSITION                0x0000000C
#define _IC3CON1_ICTSEL2_MASK                    0x00001000
#define _IC3CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC3CON2_SYNCSEL_POSITION                0x00000000
#define _IC3CON2_SYNCSEL_MASK                    0x0000001F
#define _IC3CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC3CON2_TRIGSTAT_POSITION               0x00000006
#define _IC3CON2_TRIGSTAT_MASK                   0x00000040
#define _IC3CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC3CON2_ICTRIG_POSITION                 0x00000007
#define _IC3CON2_ICTRIG_MASK                     0x00000080
#define _IC3CON2_ICTRIG_LENGTH                   0x00000001

#define _IC3CON2_IC32_POSITION                   0x00000008
#define _IC3CON2_IC32_MASK                       0x00000100
#define _IC3CON2_IC32_LENGTH                     0x00000001

#define _IC3CON2_SYNCSEL0_POSITION               0x00000000
#define _IC3CON2_SYNCSEL0_MASK                   0x00000001
#define _IC3CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL1_POSITION               0x00000001
#define _IC3CON2_SYNCSEL1_MASK                   0x00000002
#define _IC3CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL2_POSITION               0x00000002
#define _IC3CON2_SYNCSEL2_MASK                   0x00000004
#define _IC3CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL3_POSITION               0x00000003
#define _IC3CON2_SYNCSEL3_MASK                   0x00000008
#define _IC3CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC3CON2_SYNCSEL4_POSITION               0x00000004
#define _IC3CON2_SYNCSEL4_MASK                   0x00000010
#define _IC3CON2_SYNCSEL4_LENGTH                 0x00000001

#define _IC4CON1_ICM_POSITION                    0x00000000
#define _IC4CON1_ICM_MASK                        0x00000007
#define _IC4CON1_ICM_LENGTH                      0x00000003

#define _IC4CON1_ICBNE_POSITION                  0x00000003
#define _IC4CON1_ICBNE_MASK                      0x00000008
#define _IC4CON1_ICBNE_LENGTH                    0x00000001

#define _IC4CON1_ICOV_POSITION                   0x00000004
#define _IC4CON1_ICOV_MASK                       0x00000010
#define _IC4CON1_ICOV_LENGTH                     0x00000001

#define _IC4CON1_ICI_POSITION                    0x00000005
#define _IC4CON1_ICI_MASK                        0x00000060
#define _IC4CON1_ICI_LENGTH                      0x00000002

#define _IC4CON1_ICTSEL_POSITION                 0x0000000A
#define _IC4CON1_ICTSEL_MASK                     0x00001C00
#define _IC4CON1_ICTSEL_LENGTH                   0x00000003

#define _IC4CON1_ICSIDL_POSITION                 0x0000000D
#define _IC4CON1_ICSIDL_MASK                     0x00002000
#define _IC4CON1_ICSIDL_LENGTH                   0x00000001

#define _IC4CON1_ICM0_POSITION                   0x00000000
#define _IC4CON1_ICM0_MASK                       0x00000001
#define _IC4CON1_ICM0_LENGTH                     0x00000001

#define _IC4CON1_ICM1_POSITION                   0x00000001
#define _IC4CON1_ICM1_MASK                       0x00000002
#define _IC4CON1_ICM1_LENGTH                     0x00000001

#define _IC4CON1_ICM2_POSITION                   0x00000002
#define _IC4CON1_ICM2_MASK                       0x00000004
#define _IC4CON1_ICM2_LENGTH                     0x00000001

#define _IC4CON1_ICI0_POSITION                   0x00000005
#define _IC4CON1_ICI0_MASK                       0x00000020
#define _IC4CON1_ICI0_LENGTH                     0x00000001

#define _IC4CON1_ICI1_POSITION                   0x00000006
#define _IC4CON1_ICI1_MASK                       0x00000040
#define _IC4CON1_ICI1_LENGTH                     0x00000001

#define _IC4CON1_ICTSEL0_POSITION                0x0000000A
#define _IC4CON1_ICTSEL0_MASK                    0x00000400
#define _IC4CON1_ICTSEL0_LENGTH                  0x00000001

#define _IC4CON1_ICTSEL1_POSITION                0x0000000B
#define _IC4CON1_ICTSEL1_MASK                    0x00000800
#define _IC4CON1_ICTSEL1_LENGTH                  0x00000001

#define _IC4CON1_ICTSEL2_POSITION                0x0000000C
#define _IC4CON1_ICTSEL2_MASK                    0x00001000
#define _IC4CON1_ICTSEL2_LENGTH                  0x00000001

#define _IC4CON2_SYNCSEL_POSITION                0x00000000
#define _IC4CON2_SYNCSEL_MASK                    0x0000001F
#define _IC4CON2_SYNCSEL_LENGTH                  0x00000005

#define _IC4CON2_TRIGSTAT_POSITION               0x00000006
#define _IC4CON2_TRIGSTAT_MASK                   0x00000040
#define _IC4CON2_TRIGSTAT_LENGTH                 0x00000001

#define _IC4CON2_ICTRIG_POSITION                 0x00000007
#define _IC4CON2_ICTRIG_MASK                     0x00000080
#define _IC4CON2_ICTRIG_LENGTH                   0x00000001

#define _IC4CON2_IC32_POSITION                   0x00000008
#define _IC4CON2_IC32_MASK                       0x00000100
#define _IC4CON2_IC32_LENGTH                     0x00000001

#define _IC4CON2_SYNCSEL0_POSITION               0x00000000
#define _IC4CON2_SYNCSEL0_MASK                   0x00000001
#define _IC4CON2_SYNCSEL0_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL1_POSITION               0x00000001
#define _IC4CON2_SYNCSEL1_MASK                   0x00000002
#define _IC4CON2_SYNCSEL1_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL2_POSITION               0x00000002
#define _IC4CON2_SYNCSEL2_MASK                   0x00000004
#define _IC4CON2_SYNCSEL2_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL3_POSITION               0x00000003
#define _IC4CON2_SYNCSEL3_MASK                   0x00000008
#define _IC4CON2_SYNCSEL3_LENGTH                 0x00000001

#define _IC4CON2_SYNCSEL4_POSITION               0x00000004
#define _IC4CON2_SYNCSEL4_MASK                   0x00000010
#define _IC4CON2_SYNCSEL4_LENGTH                 0x00000001

#define _QEI1CON_CCM_POSITION                    0x00000000
#define _QEI1CON_CCM_MASK                        0x00000003
#define _QEI1CON_CCM_LENGTH                      0x00000002

#define _QEI1CON_GATEN_POSITION                  0x00000002
#define _QEI1CON_GATEN_MASK                      0x00000004
#define _QEI1CON_GATEN_LENGTH                    0x00000001

#define _QEI1CON_CNTPOL_POSITION                 0x00000003
#define _QEI1CON_CNTPOL_MASK                     0x00000008
#define _QEI1CON_CNTPOL_LENGTH                   0x00000001

#define _QEI1CON_INTDIV_POSITION                 0x00000004
#define _QEI1CON_INTDIV_MASK                     0x00000070
#define _QEI1CON_INTDIV_LENGTH                   0x00000003

#define _QEI1CON_IMV_POSITION                    0x00000008
#define _QEI1CON_IMV_MASK                        0x00000300
#define _QEI1CON_IMV_LENGTH                      0x00000002

#define _QEI1CON_PIMOD_POSITION                  0x0000000A
#define _QEI1CON_PIMOD_MASK                      0x00001C00
#define _QEI1CON_PIMOD_LENGTH                    0x00000003

#define _QEI1CON_QEISIDL_POSITION                0x0000000D
#define _QEI1CON_QEISIDL_MASK                    0x00002000
#define _QEI1CON_QEISIDL_LENGTH                  0x00000001

#define _QEI1CON_QEIEN_POSITION                  0x0000000F
#define _QEI1CON_QEIEN_MASK                      0x00008000
#define _QEI1CON_QEIEN_LENGTH                    0x00000001

#define _QEI1IOC_QEA_POSITION                    0x00000000
#define _QEI1IOC_QEA_MASK                        0x00000001
#define _QEI1IOC_QEA_LENGTH                      0x00000001

#define _QEI1IOC_QEB_POSITION                    0x00000001
#define _QEI1IOC_QEB_MASK                        0x00000002
#define _QEI1IOC_QEB_LENGTH                      0x00000001

#define _QEI1IOC_INDEX_POSITION                  0x00000002
#define _QEI1IOC_INDEX_MASK                      0x00000004
#define _QEI1IOC_INDEX_LENGTH                    0x00000001

#define _QEI1IOC_HOME_POSITION                   0x00000003
#define _QEI1IOC_HOME_MASK                       0x00000008
#define _QEI1IOC_HOME_LENGTH                     0x00000001

#define _QEI1IOC_QEAPOL_POSITION                 0x00000004
#define _QEI1IOC_QEAPOL_MASK                     0x00000010
#define _QEI1IOC_QEAPOL_LENGTH                   0x00000001

#define _QEI1IOC_QEBPOL_POSITION                 0x00000005
#define _QEI1IOC_QEBPOL_MASK                     0x00000020
#define _QEI1IOC_QEBPOL_LENGTH                   0x00000001

#define _QEI1IOC_IDXPOL_POSITION                 0x00000006
#define _QEI1IOC_IDXPOL_MASK                     0x00000040
#define _QEI1IOC_IDXPOL_LENGTH                   0x00000001

#define _QEI1IOC_HOMPOL_POSITION                 0x00000007
#define _QEI1IOC_HOMPOL_MASK                     0x00000080
#define _QEI1IOC_HOMPOL_LENGTH                   0x00000001

#define _QEI1IOC_SWPAB_POSITION                  0x00000008
#define _QEI1IOC_SWPAB_MASK                      0x00000100
#define _QEI1IOC_SWPAB_LENGTH                    0x00000001

#define _QEI1IOC_OUTFNC_POSITION                 0x00000009
#define _QEI1IOC_OUTFNC_MASK                     0x00000600
#define _QEI1IOC_OUTFNC_LENGTH                   0x00000002

#define _QEI1IOC_QFDIV_POSITION                  0x0000000B
#define _QEI1IOC_QFDIV_MASK                      0x00003800
#define _QEI1IOC_QFDIV_LENGTH                    0x00000003

#define _QEI1IOC_FLTREN_POSITION                 0x0000000E
#define _QEI1IOC_FLTREN_MASK                     0x00004000
#define _QEI1IOC_FLTREN_LENGTH                   0x00000001

#define _QEI1IOC_QCAPEN_POSITION                 0x0000000F
#define _QEI1IOC_QCAPEN_MASK                     0x00008000
#define _QEI1IOC_QCAPEN_LENGTH                   0x00000001

#define _QEI1STAT_IDXIEN_POSITION                0x00000000
#define _QEI1STAT_IDXIEN_MASK                    0x00000001
#define _QEI1STAT_IDXIEN_LENGTH                  0x00000001

#define _QEI1STAT_IDXIRQ_POSITION                0x00000001
#define _QEI1STAT_IDXIRQ_MASK                    0x00000002
#define _QEI1STAT_IDXIRQ_LENGTH                  0x00000001

#define _QEI1STAT_HOMIEN_POSITION                0x00000002
#define _QEI1STAT_HOMIEN_MASK                    0x00000004
#define _QEI1STAT_HOMIEN_LENGTH                  0x00000001

#define _QEI1STAT_HOMIRQ_POSITION                0x00000003
#define _QEI1STAT_HOMIRQ_MASK                    0x00000008
#define _QEI1STAT_HOMIRQ_LENGTH                  0x00000001

#define _QEI1STAT_VELOVIEN_POSITION              0x00000004
#define _QEI1STAT_VELOVIEN_MASK                  0x00000010
#define _QEI1STAT_VELOVIEN_LENGTH                0x00000001

#define _QEI1STAT_VELOVIRQ_POSITION              0x00000005
#define _QEI1STAT_VELOVIRQ_MASK                  0x00000020
#define _QEI1STAT_VELOVIRQ_LENGTH                0x00000001

#define _QEI1STAT_PCIIEN_POSITION                0x00000006
#define _QEI1STAT_PCIIEN_MASK                    0x00000040
#define _QEI1STAT_PCIIEN_LENGTH                  0x00000001

#define _QEI1STAT_PCIIRQ_POSITION                0x00000007
#define _QEI1STAT_PCIIRQ_MASK                    0x00000080
#define _QEI1STAT_PCIIRQ_LENGTH                  0x00000001

#define _QEI1STAT_POSOVIEN_POSITION              0x00000008
#define _QEI1STAT_POSOVIEN_MASK                  0x00000100
#define _QEI1STAT_POSOVIEN_LENGTH                0x00000001

#define _QEI1STAT_POSOVIRQ_POSITION              0x00000009
#define _QEI1STAT_POSOVIRQ_MASK                  0x00000200
#define _QEI1STAT_POSOVIRQ_LENGTH                0x00000001

#define _QEI1STAT_PCLEQIEN_POSITION              0x0000000A
#define _QEI1STAT_PCLEQIEN_MASK                  0x00000400
#define _QEI1STAT_PCLEQIEN_LENGTH                0x00000001

#define _QEI1STAT_PCLEQIRQ_POSITION              0x0000000B
#define _QEI1STAT_PCLEQIRQ_MASK                  0x00000800
#define _QEI1STAT_PCLEQIRQ_LENGTH                0x00000001

#define _QEI1STAT_PCHEQIEN_POSITION              0x0000000C
#define _QEI1STAT_PCHEQIEN_MASK                  0x00001000
#define _QEI1STAT_PCHEQIEN_LENGTH                0x00000001

#define _QEI1STAT_PCHEQIRQ_POSITION              0x0000000D
#define _QEI1STAT_PCHEQIRQ_MASK                  0x00002000
#define _QEI1STAT_PCHEQIRQ_LENGTH                0x00000001

#define _I2C1CON_SEN_POSITION                    0x00000000
#define _I2C1CON_SEN_MASK                        0x00000001
#define _I2C1CON_SEN_LENGTH                      0x00000001

#define _I2C1CON_RSEN_POSITION                   0x00000001
#define _I2C1CON_RSEN_MASK                       0x00000002
#define _I2C1CON_RSEN_LENGTH                     0x00000001

#define _I2C1CON_PEN_POSITION                    0x00000002
#define _I2C1CON_PEN_MASK                        0x00000004
#define _I2C1CON_PEN_LENGTH                      0x00000001

#define _I2C1CON_RCEN_POSITION                   0x00000003
#define _I2C1CON_RCEN_MASK                       0x00000008
#define _I2C1CON_RCEN_LENGTH                     0x00000001

#define _I2C1CON_ACKEN_POSITION                  0x00000004
#define _I2C1CON_ACKEN_MASK                      0x00000010
#define _I2C1CON_ACKEN_LENGTH                    0x00000001

#define _I2C1CON_ACKDT_POSITION                  0x00000005
#define _I2C1CON_ACKDT_MASK                      0x00000020
#define _I2C1CON_ACKDT_LENGTH                    0x00000001

#define _I2C1CON_STREN_POSITION                  0x00000006
#define _I2C1CON_STREN_MASK                      0x00000040
#define _I2C1CON_STREN_LENGTH                    0x00000001

#define _I2C1CON_GCEN_POSITION                   0x00000007
#define _I2C1CON_GCEN_MASK                       0x00000080
#define _I2C1CON_GCEN_LENGTH                     0x00000001

#define _I2C1CON_SMEN_POSITION                   0x00000008
#define _I2C1CON_SMEN_MASK                       0x00000100
#define _I2C1CON_SMEN_LENGTH                     0x00000001

#define _I2C1CON_DISSLW_POSITION                 0x00000009
#define _I2C1CON_DISSLW_MASK                     0x00000200
#define _I2C1CON_DISSLW_LENGTH                   0x00000001

#define _I2C1CON_A10M_POSITION                   0x0000000A
#define _I2C1CON_A10M_MASK                       0x00000400
#define _I2C1CON_A10M_LENGTH                     0x00000001

#define _I2C1CON_IPMIEN_POSITION                 0x0000000B
#define _I2C1CON_IPMIEN_MASK                     0x00000800
#define _I2C1CON_IPMIEN_LENGTH                   0x00000001

#define _I2C1CON_SCLREL_POSITION                 0x0000000C
#define _I2C1CON_SCLREL_MASK                     0x00001000
#define _I2C1CON_SCLREL_LENGTH                   0x00000001

#define _I2C1CON_I2CSIDL_POSITION                0x0000000D
#define _I2C1CON_I2CSIDL_MASK                    0x00002000
#define _I2C1CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C1CON_I2CEN_POSITION                  0x0000000F
#define _I2C1CON_I2CEN_MASK                      0x00008000
#define _I2C1CON_I2CEN_LENGTH                    0x00000001

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

#define _I2C1STAT_TRSTAT_POSITION                0x0000000E
#define _I2C1STAT_TRSTAT_MASK                    0x00004000
#define _I2C1STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C1STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C1STAT_ACKSTAT_MASK                   0x00008000
#define _I2C1STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C2CON_SEN_POSITION                    0x00000000
#define _I2C2CON_SEN_MASK                        0x00000001
#define _I2C2CON_SEN_LENGTH                      0x00000001

#define _I2C2CON_RSEN_POSITION                   0x00000001
#define _I2C2CON_RSEN_MASK                       0x00000002
#define _I2C2CON_RSEN_LENGTH                     0x00000001

#define _I2C2CON_PEN_POSITION                    0x00000002
#define _I2C2CON_PEN_MASK                        0x00000004
#define _I2C2CON_PEN_LENGTH                      0x00000001

#define _I2C2CON_RCEN_POSITION                   0x00000003
#define _I2C2CON_RCEN_MASK                       0x00000008
#define _I2C2CON_RCEN_LENGTH                     0x00000001

#define _I2C2CON_ACKEN_POSITION                  0x00000004
#define _I2C2CON_ACKEN_MASK                      0x00000010
#define _I2C2CON_ACKEN_LENGTH                    0x00000001

#define _I2C2CON_ACKDT_POSITION                  0x00000005
#define _I2C2CON_ACKDT_MASK                      0x00000020
#define _I2C2CON_ACKDT_LENGTH                    0x00000001

#define _I2C2CON_STREN_POSITION                  0x00000006
#define _I2C2CON_STREN_MASK                      0x00000040
#define _I2C2CON_STREN_LENGTH                    0x00000001

#define _I2C2CON_GCEN_POSITION                   0x00000007
#define _I2C2CON_GCEN_MASK                       0x00000080
#define _I2C2CON_GCEN_LENGTH                     0x00000001

#define _I2C2CON_SMEN_POSITION                   0x00000008
#define _I2C2CON_SMEN_MASK                       0x00000100
#define _I2C2CON_SMEN_LENGTH                     0x00000001

#define _I2C2CON_DISSLW_POSITION                 0x00000009
#define _I2C2CON_DISSLW_MASK                     0x00000200
#define _I2C2CON_DISSLW_LENGTH                   0x00000001

#define _I2C2CON_A10M_POSITION                   0x0000000A
#define _I2C2CON_A10M_MASK                       0x00000400
#define _I2C2CON_A10M_LENGTH                     0x00000001

#define _I2C2CON_IPMIEN_POSITION                 0x0000000B
#define _I2C2CON_IPMIEN_MASK                     0x00000800
#define _I2C2CON_IPMIEN_LENGTH                   0x00000001

#define _I2C2CON_SCLREL_POSITION                 0x0000000C
#define _I2C2CON_SCLREL_MASK                     0x00001000
#define _I2C2CON_SCLREL_LENGTH                   0x00000001

#define _I2C2CON_I2CSIDL_POSITION                0x0000000D
#define _I2C2CON_I2CSIDL_MASK                    0x00002000
#define _I2C2CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C2CON_I2CEN_POSITION                  0x0000000F
#define _I2C2CON_I2CEN_MASK                      0x00008000
#define _I2C2CON_I2CEN_LENGTH                    0x00000001

#define _I2C2STAT_TBF_POSITION                   0x00000000
#define _I2C2STAT_TBF_MASK                       0x00000001
#define _I2C2STAT_TBF_LENGTH                     0x00000001

#define _I2C2STAT_RBF_POSITION                   0x00000001
#define _I2C2STAT_RBF_MASK                       0x00000002
#define _I2C2STAT_RBF_LENGTH                     0x00000001

#define _I2C2STAT_R_W_POSITION                   0x00000002
#define _I2C2STAT_R_W_MASK                       0x00000004
#define _I2C2STAT_R_W_LENGTH                     0x00000001

#define _I2C2STAT_S_POSITION                     0x00000003
#define _I2C2STAT_S_MASK                         0x00000008
#define _I2C2STAT_S_LENGTH                       0x00000001

#define _I2C2STAT_P_POSITION                     0x00000004
#define _I2C2STAT_P_MASK                         0x00000010
#define _I2C2STAT_P_LENGTH                       0x00000001

#define _I2C2STAT_D_A_POSITION                   0x00000005
#define _I2C2STAT_D_A_MASK                       0x00000020
#define _I2C2STAT_D_A_LENGTH                     0x00000001

#define _I2C2STAT_I2COV_POSITION                 0x00000006
#define _I2C2STAT_I2COV_MASK                     0x00000040
#define _I2C2STAT_I2COV_LENGTH                   0x00000001

#define _I2C2STAT_IWCOL_POSITION                 0x00000007
#define _I2C2STAT_IWCOL_MASK                     0x00000080
#define _I2C2STAT_IWCOL_LENGTH                   0x00000001

#define _I2C2STAT_ADD10_POSITION                 0x00000008
#define _I2C2STAT_ADD10_MASK                     0x00000100
#define _I2C2STAT_ADD10_LENGTH                   0x00000001

#define _I2C2STAT_GCSTAT_POSITION                0x00000009
#define _I2C2STAT_GCSTAT_MASK                    0x00000200
#define _I2C2STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C2STAT_BCL_POSITION                   0x0000000A
#define _I2C2STAT_BCL_MASK                       0x00000400
#define _I2C2STAT_BCL_LENGTH                     0x00000001

#define _I2C2STAT_TRSTAT_POSITION                0x0000000E
#define _I2C2STAT_TRSTAT_MASK                    0x00004000
#define _I2C2STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C2STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C2STAT_ACKSTAT_MASK                   0x00008000
#define _I2C2STAT_ACKSTAT_LENGTH                 0x00000001

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

#define _U2MODE_STSEL_POSITION                   0x00000000
#define _U2MODE_STSEL_MASK                       0x00000001
#define _U2MODE_STSEL_LENGTH                     0x00000001

#define _U2MODE_PDSEL_POSITION                   0x00000001
#define _U2MODE_PDSEL_MASK                       0x00000006
#define _U2MODE_PDSEL_LENGTH                     0x00000002

#define _U2MODE_BRGH_POSITION                    0x00000003
#define _U2MODE_BRGH_MASK                        0x00000008
#define _U2MODE_BRGH_LENGTH                      0x00000001

#define _U2MODE_URXINV_POSITION                  0x00000004
#define _U2MODE_URXINV_MASK                      0x00000010
#define _U2MODE_URXINV_LENGTH                    0x00000001

#define _U2MODE_ABAUD_POSITION                   0x00000005
#define _U2MODE_ABAUD_MASK                       0x00000020
#define _U2MODE_ABAUD_LENGTH                     0x00000001

#define _U2MODE_LPBACK_POSITION                  0x00000006
#define _U2MODE_LPBACK_MASK                      0x00000040
#define _U2MODE_LPBACK_LENGTH                    0x00000001

#define _U2MODE_WAKE_POSITION                    0x00000007
#define _U2MODE_WAKE_MASK                        0x00000080
#define _U2MODE_WAKE_LENGTH                      0x00000001

#define _U2MODE_UEN_POSITION                     0x00000008
#define _U2MODE_UEN_MASK                         0x00000300
#define _U2MODE_UEN_LENGTH                       0x00000002

#define _U2MODE_RTSMD_POSITION                   0x0000000B
#define _U2MODE_RTSMD_MASK                       0x00000800
#define _U2MODE_RTSMD_LENGTH                     0x00000001

#define _U2MODE_IREN_POSITION                    0x0000000C
#define _U2MODE_IREN_MASK                        0x00001000
#define _U2MODE_IREN_LENGTH                      0x00000001

#define _U2MODE_USIDL_POSITION                   0x0000000D
#define _U2MODE_USIDL_MASK                       0x00002000
#define _U2MODE_USIDL_LENGTH                     0x00000001

#define _U2MODE_UARTEN_POSITION                  0x0000000F
#define _U2MODE_UARTEN_MASK                      0x00008000
#define _U2MODE_UARTEN_LENGTH                    0x00000001

#define _U2MODE_PDSEL0_POSITION                  0x00000001
#define _U2MODE_PDSEL0_MASK                      0x00000002
#define _U2MODE_PDSEL0_LENGTH                    0x00000001

#define _U2MODE_PDSEL1_POSITION                  0x00000002
#define _U2MODE_PDSEL1_MASK                      0x00000004
#define _U2MODE_PDSEL1_LENGTH                    0x00000001

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

#define _U2MODE_UEN0_POSITION                    0x00000008
#define _U2MODE_UEN0_MASK                        0x00000100
#define _U2MODE_UEN0_LENGTH                      0x00000001

#define _U2MODE_UEN1_POSITION                    0x00000009
#define _U2MODE_UEN1_MASK                        0x00000200
#define _U2MODE_UEN1_LENGTH                      0x00000001

#define _U2STA_URXDA_POSITION                    0x00000000
#define _U2STA_URXDA_MASK                        0x00000001
#define _U2STA_URXDA_LENGTH                      0x00000001

#define _U2STA_OERR_POSITION                     0x00000001
#define _U2STA_OERR_MASK                         0x00000002
#define _U2STA_OERR_LENGTH                       0x00000001

#define _U2STA_FERR_POSITION                     0x00000002
#define _U2STA_FERR_MASK                         0x00000004
#define _U2STA_FERR_LENGTH                       0x00000001

#define _U2STA_PERR_POSITION                     0x00000003
#define _U2STA_PERR_MASK                         0x00000008
#define _U2STA_PERR_LENGTH                       0x00000001

#define _U2STA_RIDLE_POSITION                    0x00000004
#define _U2STA_RIDLE_MASK                        0x00000010
#define _U2STA_RIDLE_LENGTH                      0x00000001

#define _U2STA_ADDEN_POSITION                    0x00000005
#define _U2STA_ADDEN_MASK                        0x00000020
#define _U2STA_ADDEN_LENGTH                      0x00000001

#define _U2STA_URXISEL_POSITION                  0x00000006
#define _U2STA_URXISEL_MASK                      0x000000C0
#define _U2STA_URXISEL_LENGTH                    0x00000002

#define _U2STA_TRMT_POSITION                     0x00000008
#define _U2STA_TRMT_MASK                         0x00000100
#define _U2STA_TRMT_LENGTH                       0x00000001

#define _U2STA_UTXBF_POSITION                    0x00000009
#define _U2STA_UTXBF_MASK                        0x00000200
#define _U2STA_UTXBF_LENGTH                      0x00000001

#define _U2STA_UTXEN_POSITION                    0x0000000A
#define _U2STA_UTXEN_MASK                        0x00000400
#define _U2STA_UTXEN_LENGTH                      0x00000001

#define _U2STA_UTXBRK_POSITION                   0x0000000B
#define _U2STA_UTXBRK_MASK                       0x00000800
#define _U2STA_UTXBRK_LENGTH                     0x00000001

#define _U2STA_UTXISEL0_POSITION                 0x0000000D
#define _U2STA_UTXISEL0_MASK                     0x00002000
#define _U2STA_UTXISEL0_LENGTH                   0x00000001

#define _U2STA_UTXINV_POSITION                   0x0000000E
#define _U2STA_UTXINV_MASK                       0x00004000
#define _U2STA_UTXINV_LENGTH                     0x00000001

#define _U2STA_UTXISEL1_POSITION                 0x0000000F
#define _U2STA_UTXISEL1_MASK                     0x00008000
#define _U2STA_UTXISEL1_LENGTH                   0x00000001

#define _U2STA_URXISEL0_POSITION                 0x00000006
#define _U2STA_URXISEL0_MASK                     0x00000040
#define _U2STA_URXISEL0_LENGTH                   0x00000001

#define _U2STA_URXISEL1_POSITION                 0x00000007
#define _U2STA_URXISEL1_MASK                     0x00000080
#define _U2STA_URXISEL1_LENGTH                   0x00000001

#define _U2STA_TXINV_POSITION                    0x0000000E
#define _U2STA_TXINV_MASK                        0x00004000
#define _U2STA_TXINV_LENGTH                      0x00000001

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

#define _SPI1CON2_FRMDLY_POSITION                0x00000001
#define _SPI1CON2_FRMDLY_MASK                    0x00000002
#define _SPI1CON2_FRMDLY_LENGTH                  0x00000001

#define _SPI1CON2_FRMPOL_POSITION                0x0000000D
#define _SPI1CON2_FRMPOL_MASK                    0x00002000
#define _SPI1CON2_FRMPOL_LENGTH                  0x00000001

#define _SPI1CON2_SPIFSD_POSITION                0x0000000E
#define _SPI1CON2_SPIFSD_MASK                    0x00004000
#define _SPI1CON2_SPIFSD_LENGTH                  0x00000001

#define _SPI1CON2_FRMEN_POSITION                 0x0000000F
#define _SPI1CON2_FRMEN_MASK                     0x00008000
#define _SPI1CON2_FRMEN_LENGTH                   0x00000001

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SISEL_POSITION                 0x00000002
#define _SPI2STAT_SISEL_MASK                     0x0000001C
#define _SPI2STAT_SISEL_LENGTH                   0x00000003

#define _SPI2STAT_SRXMPT_POSITION                0x00000005
#define _SPI2STAT_SRXMPT_MASK                    0x00000020
#define _SPI2STAT_SRXMPT_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SRMPT_POSITION                 0x00000007
#define _SPI2STAT_SRMPT_MASK                     0x00000080
#define _SPI2STAT_SRMPT_LENGTH                   0x00000001

#define _SPI2STAT_SPIBEC_POSITION                0x00000008
#define _SPI2STAT_SPIBEC_MASK                    0x00000700
#define _SPI2STAT_SPIBEC_LENGTH                  0x00000003

#define _SPI2STAT_SPISIDL_POSITION               0x0000000D
#define _SPI2STAT_SPISIDL_MASK                   0x00002000
#define _SPI2STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI2STAT_SPIEN_POSITION                 0x0000000F
#define _SPI2STAT_SPIEN_MASK                     0x00008000
#define _SPI2STAT_SPIEN_LENGTH                   0x00000001

#define _SPI2STAT_SISEL0_POSITION                0x00000002
#define _SPI2STAT_SISEL0_MASK                    0x00000004
#define _SPI2STAT_SISEL0_LENGTH                  0x00000001

#define _SPI2STAT_SISEL1_POSITION                0x00000003
#define _SPI2STAT_SISEL1_MASK                    0x00000008
#define _SPI2STAT_SISEL1_LENGTH                  0x00000001

#define _SPI2STAT_SISEL2_POSITION                0x00000004
#define _SPI2STAT_SISEL2_MASK                    0x00000010
#define _SPI2STAT_SISEL2_LENGTH                  0x00000001

#define _SPI2STAT_SPIBEC0_POSITION               0x00000008
#define _SPI2STAT_SPIBEC0_MASK                   0x00000100
#define _SPI2STAT_SPIBEC0_LENGTH                 0x00000001

#define _SPI2STAT_SPIBEC1_POSITION               0x00000009
#define _SPI2STAT_SPIBEC1_MASK                   0x00000200
#define _SPI2STAT_SPIBEC1_LENGTH                 0x00000001

#define _SPI2STAT_SPIBEC2_POSITION               0x0000000A
#define _SPI2STAT_SPIBEC2_MASK                   0x00000400
#define _SPI2STAT_SPIBEC2_LENGTH                 0x00000001

#define _SPI2CON1_PPRE_POSITION                  0x00000000
#define _SPI2CON1_PPRE_MASK                      0x00000003
#define _SPI2CON1_PPRE_LENGTH                    0x00000002

#define _SPI2CON1_SPRE_POSITION                  0x00000002
#define _SPI2CON1_SPRE_MASK                      0x0000001C
#define _SPI2CON1_SPRE_LENGTH                    0x00000003

#define _SPI2CON1_MSTEN_POSITION                 0x00000005
#define _SPI2CON1_MSTEN_MASK                     0x00000020
#define _SPI2CON1_MSTEN_LENGTH                   0x00000001

#define _SPI2CON1_CKP_POSITION                   0x00000006
#define _SPI2CON1_CKP_MASK                       0x00000040
#define _SPI2CON1_CKP_LENGTH                     0x00000001

#define _SPI2CON1_SSEN_POSITION                  0x00000007
#define _SPI2CON1_SSEN_MASK                      0x00000080
#define _SPI2CON1_SSEN_LENGTH                    0x00000001

#define _SPI2CON1_CKE_POSITION                   0x00000008
#define _SPI2CON1_CKE_MASK                       0x00000100
#define _SPI2CON1_CKE_LENGTH                     0x00000001

#define _SPI2CON1_SMP_POSITION                   0x00000009
#define _SPI2CON1_SMP_MASK                       0x00000200
#define _SPI2CON1_SMP_LENGTH                     0x00000001

#define _SPI2CON1_MODE16_POSITION                0x0000000A
#define _SPI2CON1_MODE16_MASK                    0x00000400
#define _SPI2CON1_MODE16_LENGTH                  0x00000001

#define _SPI2CON1_DISSDO_POSITION                0x0000000B
#define _SPI2CON1_DISSDO_MASK                    0x00000800
#define _SPI2CON1_DISSDO_LENGTH                  0x00000001

#define _SPI2CON1_DISSCK_POSITION                0x0000000C
#define _SPI2CON1_DISSCK_MASK                    0x00001000
#define _SPI2CON1_DISSCK_LENGTH                  0x00000001

#define _SPI2CON1_PPRE0_POSITION                 0x00000000
#define _SPI2CON1_PPRE0_MASK                     0x00000001
#define _SPI2CON1_PPRE0_LENGTH                   0x00000001

#define _SPI2CON1_PPRE1_POSITION                 0x00000001
#define _SPI2CON1_PPRE1_MASK                     0x00000002
#define _SPI2CON1_PPRE1_LENGTH                   0x00000001

#define _SPI2CON1_SPRE0_POSITION                 0x00000002
#define _SPI2CON1_SPRE0_MASK                     0x00000004
#define _SPI2CON1_SPRE0_LENGTH                   0x00000001

#define _SPI2CON1_SPRE1_POSITION                 0x00000003
#define _SPI2CON1_SPRE1_MASK                     0x00000008
#define _SPI2CON1_SPRE1_LENGTH                   0x00000001

#define _SPI2CON1_SPRE2_POSITION                 0x00000004
#define _SPI2CON1_SPRE2_MASK                     0x00000010
#define _SPI2CON1_SPRE2_LENGTH                   0x00000001

#define _SPI2CON2_SPIBEN_POSITION                0x00000000
#define _SPI2CON2_SPIBEN_MASK                    0x00000001
#define _SPI2CON2_SPIBEN_LENGTH                  0x00000001

#define _SPI2CON2_FRMDLY_POSITION                0x00000001
#define _SPI2CON2_FRMDLY_MASK                    0x00000002
#define _SPI2CON2_FRMDLY_LENGTH                  0x00000001

#define _SPI2CON2_FRMPOL_POSITION                0x0000000D
#define _SPI2CON2_FRMPOL_MASK                    0x00002000
#define _SPI2CON2_FRMPOL_LENGTH                  0x00000001

#define _SPI2CON2_SPIFSD_POSITION                0x0000000E
#define _SPI2CON2_SPIFSD_MASK                    0x00004000
#define _SPI2CON2_SPIFSD_LENGTH                  0x00000001

#define _SPI2CON2_FRMEN_POSITION                 0x0000000F
#define _SPI2CON2_FRMEN_MASK                     0x00008000
#define _SPI2CON2_FRMEN_LENGTH                   0x00000001

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_SIMSAM_POSITION                 0x00000003
#define _AD1CON1_SIMSAM_MASK                     0x00000008
#define _AD1CON1_SIMSAM_LENGTH                   0x00000001

#define _AD1CON1_SSRCG_POSITION                  0x00000004
#define _AD1CON1_SSRCG_MASK                      0x00000010
#define _AD1CON1_SSRCG_LENGTH                    0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000005
#define _AD1CON1_SSRC_MASK                       0x000000E0
#define _AD1CON1_SSRC_LENGTH                     0x00000003

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000300
#define _AD1CON1_FORM_LENGTH                     0x00000002

#define _AD1CON1_AD12B_POSITION                  0x0000000A
#define _AD1CON1_AD12B_MASK                      0x00000400
#define _AD1CON1_AD12B_LENGTH                    0x00000001

#define _AD1CON1_ADDMABM_POSITION                0x0000000C
#define _AD1CON1_ADDMABM_MASK                    0x00001000
#define _AD1CON1_ADDMABM_LENGTH                  0x00000001

#define _AD1CON1_ADSIDL_POSITION                 0x0000000D
#define _AD1CON1_ADSIDL_MASK                     0x00002000
#define _AD1CON1_ADSIDL_LENGTH                   0x00000001

#define _AD1CON1_ADON_POSITION                   0x0000000F
#define _AD1CON1_ADON_MASK                       0x00008000
#define _AD1CON1_ADON_LENGTH                     0x00000001

#define _AD1CON1_SSRC0_POSITION                  0x00000005
#define _AD1CON1_SSRC0_MASK                      0x00000020
#define _AD1CON1_SSRC0_LENGTH                    0x00000001

#define _AD1CON1_SSRC1_POSITION                  0x00000006
#define _AD1CON1_SSRC1_MASK                      0x00000040
#define _AD1CON1_SSRC1_LENGTH                    0x00000001

#define _AD1CON1_SSRC2_POSITION                  0x00000007
#define _AD1CON1_SSRC2_MASK                      0x00000080
#define _AD1CON1_SSRC2_LENGTH                    0x00000001

#define _AD1CON1_FORM0_POSITION                  0x00000008
#define _AD1CON1_FORM0_MASK                      0x00000100
#define _AD1CON1_FORM0_LENGTH                    0x00000001

#define _AD1CON1_FORM1_POSITION                  0x00000009
#define _AD1CON1_FORM1_MASK                      0x00000200
#define _AD1CON1_FORM1_LENGTH                    0x00000001

#define _AD1CON2_ALTS_POSITION                   0x00000000
#define _AD1CON2_ALTS_MASK                       0x00000001
#define _AD1CON2_ALTS_LENGTH                     0x00000001

#define _AD1CON2_BUFM_POSITION                   0x00000001
#define _AD1CON2_BUFM_MASK                       0x00000002
#define _AD1CON2_BUFM_LENGTH                     0x00000001

#define _AD1CON2_SMPI_POSITION                   0x00000002
#define _AD1CON2_SMPI_MASK                       0x0000007C
#define _AD1CON2_SMPI_LENGTH                     0x00000005

#define _AD1CON2_BUFS_POSITION                   0x00000007
#define _AD1CON2_BUFS_MASK                       0x00000080
#define _AD1CON2_BUFS_LENGTH                     0x00000001

#define _AD1CON2_CHPS_POSITION                   0x00000008
#define _AD1CON2_CHPS_MASK                       0x00000300
#define _AD1CON2_CHPS_LENGTH                     0x00000002

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_VCFG_POSITION                   0x0000000D
#define _AD1CON2_VCFG_MASK                       0x0000E000
#define _AD1CON2_VCFG_LENGTH                     0x00000003

#define _AD1CON2_SMPI0_POSITION                  0x00000002
#define _AD1CON2_SMPI0_MASK                      0x00000004
#define _AD1CON2_SMPI0_LENGTH                    0x00000001

#define _AD1CON2_SMPI1_POSITION                  0x00000003
#define _AD1CON2_SMPI1_MASK                      0x00000008
#define _AD1CON2_SMPI1_LENGTH                    0x00000001

#define _AD1CON2_SMPI2_POSITION                  0x00000004
#define _AD1CON2_SMPI2_MASK                      0x00000010
#define _AD1CON2_SMPI2_LENGTH                    0x00000001

#define _AD1CON2_SMPI3_POSITION                  0x00000005
#define _AD1CON2_SMPI3_MASK                      0x00000020
#define _AD1CON2_SMPI3_LENGTH                    0x00000001

#define _AD1CON2_SMPI4_POSITION                  0x00000006
#define _AD1CON2_SMPI4_MASK                      0x00000040
#define _AD1CON2_SMPI4_LENGTH                    0x00000001

#define _AD1CON2_CHPS0_POSITION                  0x00000008
#define _AD1CON2_CHPS0_MASK                      0x00000100
#define _AD1CON2_CHPS0_LENGTH                    0x00000001

#define _AD1CON2_CHPS1_POSITION                  0x00000009
#define _AD1CON2_CHPS1_MASK                      0x00000200
#define _AD1CON2_CHPS1_LENGTH                    0x00000001

#define _AD1CON2_VCFG0_POSITION                  0x0000000D
#define _AD1CON2_VCFG0_MASK                      0x00002000
#define _AD1CON2_VCFG0_LENGTH                    0x00000001

#define _AD1CON2_VCFG1_POSITION                  0x0000000E
#define _AD1CON2_VCFG1_MASK                      0x00004000
#define _AD1CON2_VCFG1_LENGTH                    0x00000001

#define _AD1CON2_VCFG2_POSITION                  0x0000000F
#define _AD1CON2_VCFG2_MASK                      0x00008000
#define _AD1CON2_VCFG2_LENGTH                    0x00000001

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

#define _AD1CON3_ADRC_POSITION                   0x0000000F
#define _AD1CON3_ADRC_MASK                       0x00008000
#define _AD1CON3_ADRC_LENGTH                     0x00000001

#define _AD1CON3_ADCS0_POSITION                  0x00000000
#define _AD1CON3_ADCS0_MASK                      0x00000001
#define _AD1CON3_ADCS0_LENGTH                    0x00000001

#define _AD1CON3_ADCS1_POSITION                  0x00000001
#define _AD1CON3_ADCS1_MASK                      0x00000002
#define _AD1CON3_ADCS1_LENGTH                    0x00000001

#define _AD1CON3_ADCS2_POSITION                  0x00000002
#define _AD1CON3_ADCS2_MASK                      0x00000004
#define _AD1CON3_ADCS2_LENGTH                    0x00000001

#define _AD1CON3_ADCS3_POSITION                  0x00000003
#define _AD1CON3_ADCS3_MASK                      0x00000008
#define _AD1CON3_ADCS3_LENGTH                    0x00000001

#define _AD1CON3_ADCS4_POSITION                  0x00000004
#define _AD1CON3_ADCS4_MASK                      0x00000010
#define _AD1CON3_ADCS4_LENGTH                    0x00000001

#define _AD1CON3_ADCS5_POSITION                  0x00000005
#define _AD1CON3_ADCS5_MASK                      0x00000020
#define _AD1CON3_ADCS5_LENGTH                    0x00000001

#define _AD1CON3_ADCS6_POSITION                  0x00000006
#define _AD1CON3_ADCS6_MASK                      0x00000040
#define _AD1CON3_ADCS6_LENGTH                    0x00000001

#define _AD1CON3_ADCS7_POSITION                  0x00000007
#define _AD1CON3_ADCS7_MASK                      0x00000080
#define _AD1CON3_ADCS7_LENGTH                    0x00000001

#define _AD1CON3_SAMC0_POSITION                  0x00000008
#define _AD1CON3_SAMC0_MASK                      0x00000100
#define _AD1CON3_SAMC0_LENGTH                    0x00000001

#define _AD1CON3_SAMC1_POSITION                  0x00000009
#define _AD1CON3_SAMC1_MASK                      0x00000200
#define _AD1CON3_SAMC1_LENGTH                    0x00000001

#define _AD1CON3_SAMC2_POSITION                  0x0000000A
#define _AD1CON3_SAMC2_MASK                      0x00000400
#define _AD1CON3_SAMC2_LENGTH                    0x00000001

#define _AD1CON3_SAMC3_POSITION                  0x0000000B
#define _AD1CON3_SAMC3_MASK                      0x00000800
#define _AD1CON3_SAMC3_LENGTH                    0x00000001

#define _AD1CON3_SAMC4_POSITION                  0x0000000C
#define _AD1CON3_SAMC4_MASK                      0x00001000
#define _AD1CON3_SAMC4_LENGTH                    0x00000001

#define _AD1CHS123_CH123SA_POSITION              0x00000000
#define _AD1CHS123_CH123SA_MASK                  0x00000001
#define _AD1CHS123_CH123SA_LENGTH                0x00000001

#define _AD1CHS123_CH123NA_POSITION              0x00000001
#define _AD1CHS123_CH123NA_MASK                  0x00000006
#define _AD1CHS123_CH123NA_LENGTH                0x00000002

#define _AD1CHS123_CH123SB_POSITION              0x00000008
#define _AD1CHS123_CH123SB_MASK                  0x00000100
#define _AD1CHS123_CH123SB_LENGTH                0x00000001

#define _AD1CHS123_CH123NB_POSITION              0x00000009
#define _AD1CHS123_CH123NB_MASK                  0x00000600
#define _AD1CHS123_CH123NB_LENGTH                0x00000002

#define _AD1CHS123_CH123NA0_POSITION             0x00000001
#define _AD1CHS123_CH123NA0_MASK                 0x00000002
#define _AD1CHS123_CH123NA0_LENGTH               0x00000001

#define _AD1CHS123_CH123NA1_POSITION             0x00000002
#define _AD1CHS123_CH123NA1_MASK                 0x00000004
#define _AD1CHS123_CH123NA1_LENGTH               0x00000001

#define _AD1CHS123_CH123NB0_POSITION             0x00000009
#define _AD1CHS123_CH123NB0_MASK                 0x00000200
#define _AD1CHS123_CH123NB0_LENGTH               0x00000001

#define _AD1CHS123_CH123NB1_POSITION             0x0000000A
#define _AD1CHS123_CH123NB1_MASK                 0x00000400
#define _AD1CHS123_CH123NB1_LENGTH               0x00000001

#define _AD1CHS0_CH0SA_POSITION                  0x00000000
#define _AD1CHS0_CH0SA_MASK                      0x0000001F
#define _AD1CHS0_CH0SA_LENGTH                    0x00000005

#define _AD1CHS0_CH0NA_POSITION                  0x00000007
#define _AD1CHS0_CH0NA_MASK                      0x00000080
#define _AD1CHS0_CH0NA_LENGTH                    0x00000001

#define _AD1CHS0_CH0SB_POSITION                  0x00000008
#define _AD1CHS0_CH0SB_MASK                      0x00001F00
#define _AD1CHS0_CH0SB_LENGTH                    0x00000005

#define _AD1CHS0_CH0NB_POSITION                  0x0000000F
#define _AD1CHS0_CH0NB_MASK                      0x00008000
#define _AD1CHS0_CH0NB_LENGTH                    0x00000001

#define _AD1CHS0_CH0SA0_POSITION                 0x00000000
#define _AD1CHS0_CH0SA0_MASK                     0x00000001
#define _AD1CHS0_CH0SA0_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA1_POSITION                 0x00000001
#define _AD1CHS0_CH0SA1_MASK                     0x00000002
#define _AD1CHS0_CH0SA1_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA2_POSITION                 0x00000002
#define _AD1CHS0_CH0SA2_MASK                     0x00000004
#define _AD1CHS0_CH0SA2_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA3_POSITION                 0x00000003
#define _AD1CHS0_CH0SA3_MASK                     0x00000008
#define _AD1CHS0_CH0SA3_LENGTH                   0x00000001

#define _AD1CHS0_CH0SA4_POSITION                 0x00000004
#define _AD1CHS0_CH0SA4_MASK                     0x00000010
#define _AD1CHS0_CH0SA4_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB0_POSITION                 0x00000008
#define _AD1CHS0_CH0SB0_MASK                     0x00000100
#define _AD1CHS0_CH0SB0_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB1_POSITION                 0x00000009
#define _AD1CHS0_CH0SB1_MASK                     0x00000200
#define _AD1CHS0_CH0SB1_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB2_POSITION                 0x0000000A
#define _AD1CHS0_CH0SB2_MASK                     0x00000400
#define _AD1CHS0_CH0SB2_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB3_POSITION                 0x0000000B
#define _AD1CHS0_CH0SB3_MASK                     0x00000800
#define _AD1CHS0_CH0SB3_LENGTH                   0x00000001

#define _AD1CHS0_CH0SB4_POSITION                 0x0000000C
#define _AD1CHS0_CH0SB4_MASK                     0x00001000
#define _AD1CHS0_CH0SB4_LENGTH                   0x00000001

#define _AD1CSSH_CSS24_POSITION                  0x00000008
#define _AD1CSSH_CSS24_MASK                      0x00000100
#define _AD1CSSH_CSS24_LENGTH                    0x00000001

#define _AD1CSSH_CSS25_POSITION                  0x00000009
#define _AD1CSSH_CSS25_MASK                      0x00000200
#define _AD1CSSH_CSS25_LENGTH                    0x00000001

#define _AD1CSSH_CSS26_POSITION                  0x0000000A
#define _AD1CSSH_CSS26_MASK                      0x00000400
#define _AD1CSSH_CSS26_LENGTH                    0x00000001

#define _AD1CSSH_CSS30_POSITION                  0x0000000E
#define _AD1CSSH_CSS30_MASK                      0x00004000
#define _AD1CSSH_CSS30_LENGTH                    0x00000001

#define _AD1CSSH_CSS31_POSITION                  0x0000000F
#define _AD1CSSH_CSS31_MASK                      0x00008000
#define _AD1CSSH_CSS31_LENGTH                    0x00000001

#define _AD1CSSL_CSS0_POSITION                   0x00000000
#define _AD1CSSL_CSS0_MASK                       0x00000001
#define _AD1CSSL_CSS0_LENGTH                     0x00000001

#define _AD1CSSL_CSS1_POSITION                   0x00000001
#define _AD1CSSL_CSS1_MASK                       0x00000002
#define _AD1CSSL_CSS1_LENGTH                     0x00000001

#define _AD1CSSL_CSS2_POSITION                   0x00000002
#define _AD1CSSL_CSS2_MASK                       0x00000004
#define _AD1CSSL_CSS2_LENGTH                     0x00000001

#define _AD1CSSL_CSS3_POSITION                   0x00000003
#define _AD1CSSL_CSS3_MASK                       0x00000008
#define _AD1CSSL_CSS3_LENGTH                     0x00000001

#define _AD1CSSL_CSS4_POSITION                   0x00000004
#define _AD1CSSL_CSS4_MASK                       0x00000010
#define _AD1CSSL_CSS4_LENGTH                     0x00000001

#define _AD1CSSL_CSS5_POSITION                   0x00000005
#define _AD1CSSL_CSS5_MASK                       0x00000020
#define _AD1CSSL_CSS5_LENGTH                     0x00000001

#define _AD1CSSL_CSS6_POSITION                   0x00000006
#define _AD1CSSL_CSS6_MASK                       0x00000040
#define _AD1CSSL_CSS6_LENGTH                     0x00000001

#define _AD1CSSL_CSS7_POSITION                   0x00000007
#define _AD1CSSL_CSS7_MASK                       0x00000080
#define _AD1CSSL_CSS7_LENGTH                     0x00000001

#define _AD1CSSL_CSS8_POSITION                   0x00000008
#define _AD1CSSL_CSS8_MASK                       0x00000100
#define _AD1CSSL_CSS8_LENGTH                     0x00000001

#define _AD1CSSL_CSS9_POSITION                   0x00000009
#define _AD1CSSL_CSS9_MASK                       0x00000200
#define _AD1CSSL_CSS9_LENGTH                     0x00000001

#define _AD1CSSL_CSS10_POSITION                  0x0000000A
#define _AD1CSSL_CSS10_MASK                      0x00000400
#define _AD1CSSL_CSS10_LENGTH                    0x00000001

#define _AD1CSSL_CSS11_POSITION                  0x0000000B
#define _AD1CSSL_CSS11_MASK                      0x00000800
#define _AD1CSSL_CSS11_LENGTH                    0x00000001

#define _AD1CSSL_CSS12_POSITION                  0x0000000C
#define _AD1CSSL_CSS12_MASK                      0x00001000
#define _AD1CSSL_CSS12_LENGTH                    0x00000001

#define _AD1CSSL_CSS13_POSITION                  0x0000000D
#define _AD1CSSL_CSS13_MASK                      0x00002000
#define _AD1CSSL_CSS13_LENGTH                    0x00000001

#define _AD1CSSL_CSS14_POSITION                  0x0000000E
#define _AD1CSSL_CSS14_MASK                      0x00004000
#define _AD1CSSL_CSS14_LENGTH                    0x00000001

#define _AD1CSSL_CSS15_POSITION                  0x0000000F
#define _AD1CSSL_CSS15_MASK                      0x00008000
#define _AD1CSSL_CSS15_LENGTH                    0x00000001

#define _AD1CON4_DMABL_POSITION                  0x00000000
#define _AD1CON4_DMABL_MASK                      0x00000007
#define _AD1CON4_DMABL_LENGTH                    0x00000003

#define _AD1CON4_ADDMAEN_POSITION                0x00000008
#define _AD1CON4_ADDMAEN_MASK                    0x00000100
#define _AD1CON4_ADDMAEN_LENGTH                  0x00000001

#define _AD1CON4_DMABL0_POSITION                 0x00000000
#define _AD1CON4_DMABL0_MASK                     0x00000001
#define _AD1CON4_DMABL0_LENGTH                   0x00000001

#define _AD1CON4_DMABL1_POSITION                 0x00000001
#define _AD1CON4_DMABL1_MASK                     0x00000002
#define _AD1CON4_DMABL1_LENGTH                   0x00000001

#define _AD1CON4_DMABL2_POSITION                 0x00000002
#define _AD1CON4_DMABL2_MASK                     0x00000004
#define _AD1CON4_DMABL2_LENGTH                   0x00000001

#define _CTMUCON1_CTTRIG_POSITION                0x00000008
#define _CTMUCON1_CTTRIG_MASK                    0x00000100
#define _CTMUCON1_CTTRIG_LENGTH                  0x00000001

#define _CTMUCON1_IDISSEN_POSITION               0x00000009
#define _CTMUCON1_IDISSEN_MASK                   0x00000200
#define _CTMUCON1_IDISSEN_LENGTH                 0x00000001

#define _CTMUCON1_EDGSEQEN_POSITION              0x0000000A
#define _CTMUCON1_EDGSEQEN_MASK                  0x00000400
#define _CTMUCON1_EDGSEQEN_LENGTH                0x00000001

#define _CTMUCON1_EDGEN_POSITION                 0x0000000B
#define _CTMUCON1_EDGEN_MASK                     0x00000800
#define _CTMUCON1_EDGEN_LENGTH                   0x00000001

#define _CTMUCON1_TGEN_POSITION                  0x0000000C
#define _CTMUCON1_TGEN_MASK                      0x00001000
#define _CTMUCON1_TGEN_LENGTH                    0x00000001

#define _CTMUCON1_CTMUSIDL_POSITION              0x0000000D
#define _CTMUCON1_CTMUSIDL_MASK                  0x00002000
#define _CTMUCON1_CTMUSIDL_LENGTH                0x00000001

#define _CTMUCON1_CTMUEN_POSITION                0x0000000F
#define _CTMUCON1_CTMUEN_MASK                    0x00008000
#define _CTMUCON1_CTMUEN_LENGTH                  0x00000001

#define _CTMUCON2_EDG2SEL_POSITION               0x00000002
#define _CTMUCON2_EDG2SEL_MASK                   0x0000003C
#define _CTMUCON2_EDG2SEL_LENGTH                 0x00000004

#define _CTMUCON2_EDG2POL_POSITION               0x00000006
#define _CTMUCON2_EDG2POL_MASK                   0x00000040
#define _CTMUCON2_EDG2POL_LENGTH                 0x00000001

#define _CTMUCON2_EDG2MOD_POSITION               0x00000007
#define _CTMUCON2_EDG2MOD_MASK                   0x00000080
#define _CTMUCON2_EDG2MOD_LENGTH                 0x00000001

#define _CTMUCON2_EDG1STAT_POSITION              0x00000008
#define _CTMUCON2_EDG1STAT_MASK                  0x00000100
#define _CTMUCON2_EDG1STAT_LENGTH                0x00000001

#define _CTMUCON2_EDG2STAT_POSITION              0x00000009
#define _CTMUCON2_EDG2STAT_MASK                  0x00000200
#define _CTMUCON2_EDG2STAT_LENGTH                0x00000001

#define _CTMUCON2_EDG1SEL_POSITION               0x0000000A
#define _CTMUCON2_EDG1SEL_MASK                   0x00003C00
#define _CTMUCON2_EDG1SEL_LENGTH                 0x00000004

#define _CTMUCON2_EDG1POL_POSITION               0x0000000E
#define _CTMUCON2_EDG1POL_MASK                   0x00004000
#define _CTMUCON2_EDG1POL_LENGTH                 0x00000001

#define _CTMUCON2_EDG1MOD_POSITION               0x0000000F
#define _CTMUCON2_EDG1MOD_MASK                   0x00008000
#define _CTMUCON2_EDG1MOD_LENGTH                 0x00000001

#define _CTMUCON2_EDG2SEL0_POSITION              0x00000002
#define _CTMUCON2_EDG2SEL0_MASK                  0x00000004
#define _CTMUCON2_EDG2SEL0_LENGTH                0x00000001

#define _CTMUCON2_EDG2SEL1_POSITION              0x00000003
#define _CTMUCON2_EDG2SEL1_MASK                  0x00000008
#define _CTMUCON2_EDG2SEL1_LENGTH                0x00000001

#define _CTMUCON2_EDG2SEL2_POSITION              0x00000004
#define _CTMUCON2_EDG2SEL2_MASK                  0x00000010
#define _CTMUCON2_EDG2SEL2_LENGTH                0x00000001

#define _CTMUCON2_EDG2SEL3_POSITION              0x00000005
#define _CTMUCON2_EDG2SEL3_MASK                  0x00000020
#define _CTMUCON2_EDG2SEL3_LENGTH                0x00000001

#define _CTMUCON2_EDG1SEL0_POSITION              0x0000000A
#define _CTMUCON2_EDG1SEL0_MASK                  0x00000400
#define _CTMUCON2_EDG1SEL0_LENGTH                0x00000001

#define _CTMUCON2_EDG1SEL1_POSITION              0x0000000B
#define _CTMUCON2_EDG1SEL1_MASK                  0x00000800
#define _CTMUCON2_EDG1SEL1_LENGTH                0x00000001

#define _CTMUCON2_EDG1SEL2_POSITION              0x0000000C
#define _CTMUCON2_EDG1SEL2_MASK                  0x00001000
#define _CTMUCON2_EDG1SEL2_LENGTH                0x00000001

#define _CTMUCON2_EDG1SEL3_POSITION              0x0000000D
#define _CTMUCON2_EDG1SEL3_MASK                  0x00002000
#define _CTMUCON2_EDG1SEL3_LENGTH                0x00000001

#define _CTMUICON_IRNG_POSITION                  0x00000008
#define _CTMUICON_IRNG_MASK                      0x00000300
#define _CTMUICON_IRNG_LENGTH                    0x00000002

#define _CTMUICON_ITRIM_POSITION                 0x0000000A
#define _CTMUICON_ITRIM_MASK                     0x0000FC00
#define _CTMUICON_ITRIM_LENGTH                   0x00000006

#define _CTMUICON_IRNG0_POSITION                 0x00000008
#define _CTMUICON_IRNG0_MASK                     0x00000100
#define _CTMUICON_IRNG0_LENGTH                   0x00000001

#define _CTMUICON_IRNG1_POSITION                 0x00000009
#define _CTMUICON_IRNG1_MASK                     0x00000200
#define _CTMUICON_IRNG1_LENGTH                   0x00000001

#define _CTMUICON_ITRIM0_POSITION                0x0000000A
#define _CTMUICON_ITRIM0_MASK                    0x00000400
#define _CTMUICON_ITRIM0_LENGTH                  0x00000001

#define _CTMUICON_ITRIM1_POSITION                0x0000000B
#define _CTMUICON_ITRIM1_MASK                    0x00000800
#define _CTMUICON_ITRIM1_LENGTH                  0x00000001

#define _CTMUICON_ITRIM2_POSITION                0x0000000C
#define _CTMUICON_ITRIM2_MASK                    0x00001000
#define _CTMUICON_ITRIM2_LENGTH                  0x00000001

#define _CTMUICON_ITRIM3_POSITION                0x0000000D
#define _CTMUICON_ITRIM3_MASK                    0x00002000
#define _CTMUICON_ITRIM3_LENGTH                  0x00000001

#define _CTMUICON_ITRIM4_POSITION                0x0000000E
#define _CTMUICON_ITRIM4_MASK                    0x00004000
#define _CTMUICON_ITRIM4_LENGTH                  0x00000001

#define _CTMUICON_ITRIM5_POSITION                0x0000000F
#define _CTMUICON_ITRIM5_MASK                    0x00008000
#define _CTMUICON_ITRIM5_LENGTH                  0x00000001

#define _CRCCON1_LENDIAN_POSITION                0x00000003
#define _CRCCON1_LENDIAN_MASK                    0x00000008
#define _CRCCON1_LENDIAN_LENGTH                  0x00000001

#define _CRCCON1_CRCGO_POSITION                  0x00000004
#define _CRCCON1_CRCGO_MASK                      0x00000010
#define _CRCCON1_CRCGO_LENGTH                    0x00000001

#define _CRCCON1_CRCISEL_POSITION                0x00000005
#define _CRCCON1_CRCISEL_MASK                    0x00000020
#define _CRCCON1_CRCISEL_LENGTH                  0x00000001

#define _CRCCON1_CRCMPT_POSITION                 0x00000006
#define _CRCCON1_CRCMPT_MASK                     0x00000040
#define _CRCCON1_CRCMPT_LENGTH                   0x00000001

#define _CRCCON1_CRCFUL_POSITION                 0x00000007
#define _CRCCON1_CRCFUL_MASK                     0x00000080
#define _CRCCON1_CRCFUL_LENGTH                   0x00000001

#define _CRCCON1_VWORD_POSITION                  0x00000008
#define _CRCCON1_VWORD_MASK                      0x00001F00
#define _CRCCON1_VWORD_LENGTH                    0x00000005

#define _CRCCON1_CSIDL_POSITION                  0x0000000D
#define _CRCCON1_CSIDL_MASK                      0x00002000
#define _CRCCON1_CSIDL_LENGTH                    0x00000001

#define _CRCCON1_CRCEN_POSITION                  0x0000000F
#define _CRCCON1_CRCEN_MASK                      0x00008000
#define _CRCCON1_CRCEN_LENGTH                    0x00000001

#define _CRCCON1_VWORD0_POSITION                 0x00000008
#define _CRCCON1_VWORD0_MASK                     0x00000100
#define _CRCCON1_VWORD0_LENGTH                   0x00000001

#define _CRCCON1_VWORD1_POSITION                 0x00000009
#define _CRCCON1_VWORD1_MASK                     0x00000200
#define _CRCCON1_VWORD1_LENGTH                   0x00000001

#define _CRCCON1_VWORD2_POSITION                 0x0000000A
#define _CRCCON1_VWORD2_MASK                     0x00000400
#define _CRCCON1_VWORD2_LENGTH                   0x00000001

#define _CRCCON1_VWORD3_POSITION                 0x0000000B
#define _CRCCON1_VWORD3_MASK                     0x00000800
#define _CRCCON1_VWORD3_LENGTH                   0x00000001

#define _CRCCON1_VWORD4_POSITION                 0x0000000C
#define _CRCCON1_VWORD4_MASK                     0x00001000
#define _CRCCON1_VWORD4_LENGTH                   0x00000001

#define _CRCCON2_PLEN_POSITION                   0x00000000
#define _CRCCON2_PLEN_MASK                       0x0000001F
#define _CRCCON2_PLEN_LENGTH                     0x00000005

#define _CRCCON2_DWIDTH_POSITION                 0x00000008
#define _CRCCON2_DWIDTH_MASK                     0x00001F00
#define _CRCCON2_DWIDTH_LENGTH                   0x00000005

#define _CRCCON2_PLEN0_POSITION                  0x00000000
#define _CRCCON2_PLEN0_MASK                      0x00000001
#define _CRCCON2_PLEN0_LENGTH                    0x00000001

#define _CRCCON2_PLEN1_POSITION                  0x00000001
#define _CRCCON2_PLEN1_MASK                      0x00000002
#define _CRCCON2_PLEN1_LENGTH                    0x00000001

#define _CRCCON2_PLEN2_POSITION                  0x00000002
#define _CRCCON2_PLEN2_MASK                      0x00000004
#define _CRCCON2_PLEN2_LENGTH                    0x00000001

#define _CRCCON2_PLEN3_POSITION                  0x00000003
#define _CRCCON2_PLEN3_MASK                      0x00000008
#define _CRCCON2_PLEN3_LENGTH                    0x00000001

#define _CRCCON2_PLEN4_POSITION                  0x00000004
#define _CRCCON2_PLEN4_MASK                      0x00000010
#define _CRCCON2_PLEN4_LENGTH                    0x00000001

#define _CRCCON2_DWIDTH0_POSITION                0x00000008
#define _CRCCON2_DWIDTH0_MASK                    0x00000100
#define _CRCCON2_DWIDTH0_LENGTH                  0x00000001

#define _CRCCON2_DWIDTH1_POSITION                0x00000009
#define _CRCCON2_DWIDTH1_MASK                    0x00000200
#define _CRCCON2_DWIDTH1_LENGTH                  0x00000001

#define _CRCCON2_DWIDTH2_POSITION                0x0000000A
#define _CRCCON2_DWIDTH2_MASK                    0x00000400
#define _CRCCON2_DWIDTH2_LENGTH                  0x00000001

#define _CRCCON2_DWIDTH3_POSITION                0x0000000B
#define _CRCCON2_DWIDTH3_MASK                    0x00000800
#define _CRCCON2_DWIDTH3_LENGTH                  0x00000001

#define _CRCCON2_DWIDTH4_POSITION                0x0000000C
#define _CRCCON2_DWIDTH4_MASK                    0x00001000
#define _CRCCON2_DWIDTH4_LENGTH                  0x00000001

#define _CRCXORL_X1_POSITION                     0x00000001
#define _CRCXORL_X1_MASK                         0x00000002
#define _CRCXORL_X1_LENGTH                       0x00000001

#define _CRCXORL_X2_POSITION                     0x00000002
#define _CRCXORL_X2_MASK                         0x00000004
#define _CRCXORL_X2_LENGTH                       0x00000001

#define _CRCXORL_X3_POSITION                     0x00000003
#define _CRCXORL_X3_MASK                         0x00000008
#define _CRCXORL_X3_LENGTH                       0x00000001

#define _CRCXORL_X4_POSITION                     0x00000004
#define _CRCXORL_X4_MASK                         0x00000010
#define _CRCXORL_X4_LENGTH                       0x00000001

#define _CRCXORL_X5_POSITION                     0x00000005
#define _CRCXORL_X5_MASK                         0x00000020
#define _CRCXORL_X5_LENGTH                       0x00000001

#define _CRCXORL_X6_POSITION                     0x00000006
#define _CRCXORL_X6_MASK                         0x00000040
#define _CRCXORL_X6_LENGTH                       0x00000001

#define _CRCXORL_X7_POSITION                     0x00000007
#define _CRCXORL_X7_MASK                         0x00000080
#define _CRCXORL_X7_LENGTH                       0x00000001

#define _CRCXORL_X8_POSITION                     0x00000008
#define _CRCXORL_X8_MASK                         0x00000100
#define _CRCXORL_X8_LENGTH                       0x00000001

#define _CRCXORL_X9_POSITION                     0x00000009
#define _CRCXORL_X9_MASK                         0x00000200
#define _CRCXORL_X9_LENGTH                       0x00000001

#define _CRCXORL_X10_POSITION                    0x0000000A
#define _CRCXORL_X10_MASK                        0x00000400
#define _CRCXORL_X10_LENGTH                      0x00000001

#define _CRCXORL_X11_POSITION                    0x0000000B
#define _CRCXORL_X11_MASK                        0x00000800
#define _CRCXORL_X11_LENGTH                      0x00000001

#define _CRCXORL_X12_POSITION                    0x0000000C
#define _CRCXORL_X12_MASK                        0x00001000
#define _CRCXORL_X12_LENGTH                      0x00000001

#define _CRCXORL_X13_POSITION                    0x0000000D
#define _CRCXORL_X13_MASK                        0x00002000
#define _CRCXORL_X13_LENGTH                      0x00000001

#define _CRCXORL_X14_POSITION                    0x0000000E
#define _CRCXORL_X14_MASK                        0x00004000
#define _CRCXORL_X14_LENGTH                      0x00000001

#define _CRCXORL_X15_POSITION                    0x0000000F
#define _CRCXORL_X15_MASK                        0x00008000
#define _CRCXORL_X15_LENGTH                      0x00000001

#define _CRCXORH_X16_POSITION                    0x00000000
#define _CRCXORH_X16_MASK                        0x00000001
#define _CRCXORH_X16_LENGTH                      0x00000001

#define _CRCXORH_X17_POSITION                    0x00000001
#define _CRCXORH_X17_MASK                        0x00000002
#define _CRCXORH_X17_LENGTH                      0x00000001

#define _CRCXORH_X18_POSITION                    0x00000002
#define _CRCXORH_X18_MASK                        0x00000004
#define _CRCXORH_X18_LENGTH                      0x00000001

#define _CRCXORH_X19_POSITION                    0x00000003
#define _CRCXORH_X19_MASK                        0x00000008
#define _CRCXORH_X19_LENGTH                      0x00000001

#define _CRCXORH_X20_POSITION                    0x00000004
#define _CRCXORH_X20_MASK                        0x00000010
#define _CRCXORH_X20_LENGTH                      0x00000001

#define _CRCXORH_X21_POSITION                    0x00000005
#define _CRCXORH_X21_MASK                        0x00000020
#define _CRCXORH_X21_LENGTH                      0x00000001

#define _CRCXORH_X22_POSITION                    0x00000006
#define _CRCXORH_X22_MASK                        0x00000040
#define _CRCXORH_X22_LENGTH                      0x00000001

#define _CRCXORH_X23_POSITION                    0x00000007
#define _CRCXORH_X23_MASK                        0x00000080
#define _CRCXORH_X23_LENGTH                      0x00000001

#define _CRCXORH_X24_POSITION                    0x00000008
#define _CRCXORH_X24_MASK                        0x00000100
#define _CRCXORH_X24_LENGTH                      0x00000001

#define _CRCXORH_X25_POSITION                    0x00000009
#define _CRCXORH_X25_MASK                        0x00000200
#define _CRCXORH_X25_LENGTH                      0x00000001

#define _CRCXORH_X26_POSITION                    0x0000000A
#define _CRCXORH_X26_MASK                        0x00000400
#define _CRCXORH_X26_LENGTH                      0x00000001

#define _CRCXORH_X27_POSITION                    0x0000000B
#define _CRCXORH_X27_MASK                        0x00000800
#define _CRCXORH_X27_LENGTH                      0x00000001

#define _CRCXORH_X28_POSITION                    0x0000000C
#define _CRCXORH_X28_MASK                        0x00001000
#define _CRCXORH_X28_LENGTH                      0x00000001

#define _CRCXORH_X29_POSITION                    0x0000000D
#define _CRCXORH_X29_MASK                        0x00002000
#define _CRCXORH_X29_LENGTH                      0x00000001

#define _CRCXORH_X30_POSITION                    0x0000000E
#define _CRCXORH_X30_MASK                        0x00004000
#define _CRCXORH_X30_LENGTH                      0x00000001

#define _CRCXORH_X31_POSITION                    0x0000000F
#define _CRCXORH_X31_MASK                        0x00008000
#define _CRCXORH_X31_LENGTH                      0x00000001

#define _RPOR0_RP20R_POSITION                    0x00000000
#define _RPOR0_RP20R_MASK                        0x0000003F
#define _RPOR0_RP20R_LENGTH                      0x00000006

#define _RPOR0_RP35R_POSITION                    0x00000008
#define _RPOR0_RP35R_MASK                        0x00003F00
#define _RPOR0_RP35R_LENGTH                      0x00000006

#define _RPOR0_RP20R0_POSITION                   0x00000000
#define _RPOR0_RP20R0_MASK                       0x00000001
#define _RPOR0_RP20R0_LENGTH                     0x00000001

#define _RPOR0_RP20R1_POSITION                   0x00000001
#define _RPOR0_RP20R1_MASK                       0x00000002
#define _RPOR0_RP20R1_LENGTH                     0x00000001

#define _RPOR0_RP20R2_POSITION                   0x00000002
#define _RPOR0_RP20R2_MASK                       0x00000004
#define _RPOR0_RP20R2_LENGTH                     0x00000001

#define _RPOR0_RP20R3_POSITION                   0x00000003
#define _RPOR0_RP20R3_MASK                       0x00000008
#define _RPOR0_RP20R3_LENGTH                     0x00000001

#define _RPOR0_RP20R4_POSITION                   0x00000004
#define _RPOR0_RP20R4_MASK                       0x00000010
#define _RPOR0_RP20R4_LENGTH                     0x00000001

#define _RPOR0_RP20R5_POSITION                   0x00000005
#define _RPOR0_RP20R5_MASK                       0x00000020
#define _RPOR0_RP20R5_LENGTH                     0x00000001

#define _RPOR0_RP35R0_POSITION                   0x00000008
#define _RPOR0_RP35R0_MASK                       0x00000100
#define _RPOR0_RP35R0_LENGTH                     0x00000001

#define _RPOR0_RP35R1_POSITION                   0x00000009
#define _RPOR0_RP35R1_MASK                       0x00000200
#define _RPOR0_RP35R1_LENGTH                     0x00000001

#define _RPOR0_RP35R2_POSITION                   0x0000000A
#define _RPOR0_RP35R2_MASK                       0x00000400
#define _RPOR0_RP35R2_LENGTH                     0x00000001

#define _RPOR0_RP35R3_POSITION                   0x0000000B
#define _RPOR0_RP35R3_MASK                       0x00000800
#define _RPOR0_RP35R3_LENGTH                     0x00000001

#define _RPOR0_RP35R4_POSITION                   0x0000000C
#define _RPOR0_RP35R4_MASK                       0x00001000
#define _RPOR0_RP35R4_LENGTH                     0x00000001

#define _RPOR0_RP35R5_POSITION                   0x0000000D
#define _RPOR0_RP35R5_MASK                       0x00002000
#define _RPOR0_RP35R5_LENGTH                     0x00000001

#define _RPOR1_RP36R_POSITION                    0x00000000
#define _RPOR1_RP36R_MASK                        0x0000003F
#define _RPOR1_RP36R_LENGTH                      0x00000006

#define _RPOR1_RP37R_POSITION                    0x00000008
#define _RPOR1_RP37R_MASK                        0x00003F00
#define _RPOR1_RP37R_LENGTH                      0x00000006

#define _RPOR1_RP36R0_POSITION                   0x00000000
#define _RPOR1_RP36R0_MASK                       0x00000001
#define _RPOR1_RP36R0_LENGTH                     0x00000001

#define _RPOR1_RP36R1_POSITION                   0x00000001
#define _RPOR1_RP36R1_MASK                       0x00000002
#define _RPOR1_RP36R1_LENGTH                     0x00000001

#define _RPOR1_RP36R2_POSITION                   0x00000002
#define _RPOR1_RP36R2_MASK                       0x00000004
#define _RPOR1_RP36R2_LENGTH                     0x00000001

#define _RPOR1_RP36R3_POSITION                   0x00000003
#define _RPOR1_RP36R3_MASK                       0x00000008
#define _RPOR1_RP36R3_LENGTH                     0x00000001

#define _RPOR1_RP36R4_POSITION                   0x00000004
#define _RPOR1_RP36R4_MASK                       0x00000010
#define _RPOR1_RP36R4_LENGTH                     0x00000001

#define _RPOR1_RP36R5_POSITION                   0x00000005
#define _RPOR1_RP36R5_MASK                       0x00000020
#define _RPOR1_RP36R5_LENGTH                     0x00000001

#define _RPOR1_RP37R0_POSITION                   0x00000008
#define _RPOR1_RP37R0_MASK                       0x00000100
#define _RPOR1_RP37R0_LENGTH                     0x00000001

#define _RPOR1_RP37R1_POSITION                   0x00000009
#define _RPOR1_RP37R1_MASK                       0x00000200
#define _RPOR1_RP37R1_LENGTH                     0x00000001

#define _RPOR1_RP37R2_POSITION                   0x0000000A
#define _RPOR1_RP37R2_MASK                       0x00000400
#define _RPOR1_RP37R2_LENGTH                     0x00000001

#define _RPOR1_RP37R3_POSITION                   0x0000000B
#define _RPOR1_RP37R3_MASK                       0x00000800
#define _RPOR1_RP37R3_LENGTH                     0x00000001

#define _RPOR1_RP37R4_POSITION                   0x0000000C
#define _RPOR1_RP37R4_MASK                       0x00001000
#define _RPOR1_RP37R4_LENGTH                     0x00000001

#define _RPOR1_RP37R5_POSITION                   0x0000000D
#define _RPOR1_RP37R5_MASK                       0x00002000
#define _RPOR1_RP37R5_LENGTH                     0x00000001

#define _RPOR2_RP38R_POSITION                    0x00000000
#define _RPOR2_RP38R_MASK                        0x0000003F
#define _RPOR2_RP38R_LENGTH                      0x00000006

#define _RPOR2_RP39R_POSITION                    0x00000008
#define _RPOR2_RP39R_MASK                        0x00003F00
#define _RPOR2_RP39R_LENGTH                      0x00000006

#define _RPOR2_RP38R0_POSITION                   0x00000000
#define _RPOR2_RP38R0_MASK                       0x00000001
#define _RPOR2_RP38R0_LENGTH                     0x00000001

#define _RPOR2_RP38R1_POSITION                   0x00000001
#define _RPOR2_RP38R1_MASK                       0x00000002
#define _RPOR2_RP38R1_LENGTH                     0x00000001

#define _RPOR2_RP38R2_POSITION                   0x00000002
#define _RPOR2_RP38R2_MASK                       0x00000004
#define _RPOR2_RP38R2_LENGTH                     0x00000001

#define _RPOR2_RP38R3_POSITION                   0x00000003
#define _RPOR2_RP38R3_MASK                       0x00000008
#define _RPOR2_RP38R3_LENGTH                     0x00000001

#define _RPOR2_RP38R4_POSITION                   0x00000004
#define _RPOR2_RP38R4_MASK                       0x00000010
#define _RPOR2_RP38R4_LENGTH                     0x00000001

#define _RPOR2_RP38R5_POSITION                   0x00000005
#define _RPOR2_RP38R5_MASK                       0x00000020
#define _RPOR2_RP38R5_LENGTH                     0x00000001

#define _RPOR2_RP39R0_POSITION                   0x00000008
#define _RPOR2_RP39R0_MASK                       0x00000100
#define _RPOR2_RP39R0_LENGTH                     0x00000001

#define _RPOR2_RP39R1_POSITION                   0x00000009
#define _RPOR2_RP39R1_MASK                       0x00000200
#define _RPOR2_RP39R1_LENGTH                     0x00000001

#define _RPOR2_RP39R2_POSITION                   0x0000000A
#define _RPOR2_RP39R2_MASK                       0x00000400
#define _RPOR2_RP39R2_LENGTH                     0x00000001

#define _RPOR2_RP39R3_POSITION                   0x0000000B
#define _RPOR2_RP39R3_MASK                       0x00000800
#define _RPOR2_RP39R3_LENGTH                     0x00000001

#define _RPOR2_RP39R4_POSITION                   0x0000000C
#define _RPOR2_RP39R4_MASK                       0x00001000
#define _RPOR2_RP39R4_LENGTH                     0x00000001

#define _RPOR2_RP39R5_POSITION                   0x0000000D
#define _RPOR2_RP39R5_MASK                       0x00002000
#define _RPOR2_RP39R5_LENGTH                     0x00000001

#define _RPOR3_RP40R_POSITION                    0x00000000
#define _RPOR3_RP40R_MASK                        0x0000003F
#define _RPOR3_RP40R_LENGTH                      0x00000006

#define _RPOR3_RP41R_POSITION                    0x00000008
#define _RPOR3_RP41R_MASK                        0x00003F00
#define _RPOR3_RP41R_LENGTH                      0x00000006

#define _RPOR3_RP40R0_POSITION                   0x00000000
#define _RPOR3_RP40R0_MASK                       0x00000001
#define _RPOR3_RP40R0_LENGTH                     0x00000001

#define _RPOR3_RP40R1_POSITION                   0x00000001
#define _RPOR3_RP40R1_MASK                       0x00000002
#define _RPOR3_RP40R1_LENGTH                     0x00000001

#define _RPOR3_RP40R2_POSITION                   0x00000002
#define _RPOR3_RP40R2_MASK                       0x00000004
#define _RPOR3_RP40R2_LENGTH                     0x00000001

#define _RPOR3_RP40R3_POSITION                   0x00000003
#define _RPOR3_RP40R3_MASK                       0x00000008
#define _RPOR3_RP40R3_LENGTH                     0x00000001

#define _RPOR3_RP40R4_POSITION                   0x00000004
#define _RPOR3_RP40R4_MASK                       0x00000010
#define _RPOR3_RP40R4_LENGTH                     0x00000001

#define _RPOR3_RP40R5_POSITION                   0x00000005
#define _RPOR3_RP40R5_MASK                       0x00000020
#define _RPOR3_RP40R5_LENGTH                     0x00000001

#define _RPOR3_RP41R0_POSITION                   0x00000008
#define _RPOR3_RP41R0_MASK                       0x00000100
#define _RPOR3_RP41R0_LENGTH                     0x00000001

#define _RPOR3_RP41R1_POSITION                   0x00000009
#define _RPOR3_RP41R1_MASK                       0x00000200
#define _RPOR3_RP41R1_LENGTH                     0x00000001

#define _RPOR3_RP41R2_POSITION                   0x0000000A
#define _RPOR3_RP41R2_MASK                       0x00000400
#define _RPOR3_RP41R2_LENGTH                     0x00000001

#define _RPOR3_RP41R3_POSITION                   0x0000000B
#define _RPOR3_RP41R3_MASK                       0x00000800
#define _RPOR3_RP41R3_LENGTH                     0x00000001

#define _RPOR3_RP41R4_POSITION                   0x0000000C
#define _RPOR3_RP41R4_MASK                       0x00001000
#define _RPOR3_RP41R4_LENGTH                     0x00000001

#define _RPOR3_RP41R5_POSITION                   0x0000000D
#define _RPOR3_RP41R5_MASK                       0x00002000
#define _RPOR3_RP41R5_LENGTH                     0x00000001

#define _RPOR4_RP42R_POSITION                    0x00000000
#define _RPOR4_RP42R_MASK                        0x0000003F
#define _RPOR4_RP42R_LENGTH                      0x00000006

#define _RPOR4_RP43R_POSITION                    0x00000008
#define _RPOR4_RP43R_MASK                        0x00003F00
#define _RPOR4_RP43R_LENGTH                      0x00000006

#define _RPOR4_RP42R0_POSITION                   0x00000000
#define _RPOR4_RP42R0_MASK                       0x00000001
#define _RPOR4_RP42R0_LENGTH                     0x00000001

#define _RPOR4_RP42R1_POSITION                   0x00000001
#define _RPOR4_RP42R1_MASK                       0x00000002
#define _RPOR4_RP42R1_LENGTH                     0x00000001

#define _RPOR4_RP42R2_POSITION                   0x00000002
#define _RPOR4_RP42R2_MASK                       0x00000004
#define _RPOR4_RP42R2_LENGTH                     0x00000001

#define _RPOR4_RP42R3_POSITION                   0x00000003
#define _RPOR4_RP42R3_MASK                       0x00000008
#define _RPOR4_RP42R3_LENGTH                     0x00000001

#define _RPOR4_RP42R4_POSITION                   0x00000004
#define _RPOR4_RP42R4_MASK                       0x00000010
#define _RPOR4_RP42R4_LENGTH                     0x00000001

#define _RPOR4_RP42R5_POSITION                   0x00000005
#define _RPOR4_RP42R5_MASK                       0x00000020
#define _RPOR4_RP42R5_LENGTH                     0x00000001

#define _RPOR4_RP43R0_POSITION                   0x00000008
#define _RPOR4_RP43R0_MASK                       0x00000100
#define _RPOR4_RP43R0_LENGTH                     0x00000001

#define _RPOR4_RP43R1_POSITION                   0x00000009
#define _RPOR4_RP43R1_MASK                       0x00000200
#define _RPOR4_RP43R1_LENGTH                     0x00000001

#define _RPOR4_RP43R2_POSITION                   0x0000000A
#define _RPOR4_RP43R2_MASK                       0x00000400
#define _RPOR4_RP43R2_LENGTH                     0x00000001

#define _RPOR4_RP43R3_POSITION                   0x0000000B
#define _RPOR4_RP43R3_MASK                       0x00000800
#define _RPOR4_RP43R3_LENGTH                     0x00000001

#define _RPOR4_RP43R4_POSITION                   0x0000000C
#define _RPOR4_RP43R4_MASK                       0x00001000
#define _RPOR4_RP43R4_LENGTH                     0x00000001

#define _RPOR4_RP43R5_POSITION                   0x0000000D
#define _RPOR4_RP43R5_MASK                       0x00002000
#define _RPOR4_RP43R5_LENGTH                     0x00000001

#define _RPINR0_INT1R_POSITION                   0x00000008
#define _RPINR0_INT1R_MASK                       0x00007F00
#define _RPINR0_INT1R_LENGTH                     0x00000007

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

#define _RPINR1_INT2R_POSITION                   0x00000000
#define _RPINR1_INT2R_MASK                       0x0000007F
#define _RPINR1_INT2R_LENGTH                     0x00000007

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

#define _RPINR3_T2CKR_POSITION                   0x00000000
#define _RPINR3_T2CKR_MASK                       0x0000007F
#define _RPINR3_T2CKR_LENGTH                     0x00000007

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

#define _RPINR7_IC1R_POSITION                    0x00000000
#define _RPINR7_IC1R_MASK                        0x0000007F
#define _RPINR7_IC1R_LENGTH                      0x00000007

#define _RPINR7_IC2R_POSITION                    0x00000008
#define _RPINR7_IC2R_MASK                        0x00007F00
#define _RPINR7_IC2R_LENGTH                      0x00000007

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

#define _RPINR7_IC2R0_POSITION                   0x00000008
#define _RPINR7_IC2R0_MASK                       0x00000100
#define _RPINR7_IC2R0_LENGTH                     0x00000001

#define _RPINR7_IC2R1_POSITION                   0x00000009
#define _RPINR7_IC2R1_MASK                       0x00000200
#define _RPINR7_IC2R1_LENGTH                     0x00000001

#define _RPINR7_IC2R2_POSITION                   0x0000000A
#define _RPINR7_IC2R2_MASK                       0x00000400
#define _RPINR7_IC2R2_LENGTH                     0x00000001

#define _RPINR7_IC2R3_POSITION                   0x0000000B
#define _RPINR7_IC2R3_MASK                       0x00000800
#define _RPINR7_IC2R3_LENGTH                     0x00000001

#define _RPINR7_IC2R4_POSITION                   0x0000000C
#define _RPINR7_IC2R4_MASK                       0x00001000
#define _RPINR7_IC2R4_LENGTH                     0x00000001

#define _RPINR7_IC2R5_POSITION                   0x0000000D
#define _RPINR7_IC2R5_MASK                       0x00002000
#define _RPINR7_IC2R5_LENGTH                     0x00000001

#define _RPINR7_IC2R6_POSITION                   0x0000000E
#define _RPINR7_IC2R6_MASK                       0x00004000
#define _RPINR7_IC2R6_LENGTH                     0x00000001

#define _RPINR8_IC3R_POSITION                    0x00000000
#define _RPINR8_IC3R_MASK                        0x0000007F
#define _RPINR8_IC3R_LENGTH                      0x00000007

#define _RPINR8_IC4R_POSITION                    0x00000008
#define _RPINR8_IC4R_MASK                        0x00007F00
#define _RPINR8_IC4R_LENGTH                      0x00000007

#define _RPINR8_IC3R0_POSITION                   0x00000000
#define _RPINR8_IC3R0_MASK                       0x00000001
#define _RPINR8_IC3R0_LENGTH                     0x00000001

#define _RPINR8_IC3R1_POSITION                   0x00000001
#define _RPINR8_IC3R1_MASK                       0x00000002
#define _RPINR8_IC3R1_LENGTH                     0x00000001

#define _RPINR8_IC3R2_POSITION                   0x00000002
#define _RPINR8_IC3R2_MASK                       0x00000004
#define _RPINR8_IC3R2_LENGTH                     0x00000001

#define _RPINR8_IC3R3_POSITION                   0x00000003
#define _RPINR8_IC3R3_MASK                       0x00000008
#define _RPINR8_IC3R3_LENGTH                     0x00000001

#define _RPINR8_IC3R4_POSITION                   0x00000004
#define _RPINR8_IC3R4_MASK                       0x00000010
#define _RPINR8_IC3R4_LENGTH                     0x00000001

#define _RPINR8_IC3R5_POSITION                   0x00000005
#define _RPINR8_IC3R5_MASK                       0x00000020
#define _RPINR8_IC3R5_LENGTH                     0x00000001

#define _RPINR8_IC3R6_POSITION                   0x00000006
#define _RPINR8_IC3R6_MASK                       0x00000040
#define _RPINR8_IC3R6_LENGTH                     0x00000001

#define _RPINR8_IC4R0_POSITION                   0x00000008
#define _RPINR8_IC4R0_MASK                       0x00000100
#define _RPINR8_IC4R0_LENGTH                     0x00000001

#define _RPINR8_IC4R1_POSITION                   0x00000009
#define _RPINR8_IC4R1_MASK                       0x00000200
#define _RPINR8_IC4R1_LENGTH                     0x00000001

#define _RPINR8_IC4R2_POSITION                   0x0000000A
#define _RPINR8_IC4R2_MASK                       0x00000400
#define _RPINR8_IC4R2_LENGTH                     0x00000001

#define _RPINR8_IC4R3_POSITION                   0x0000000B
#define _RPINR8_IC4R3_MASK                       0x00000800
#define _RPINR8_IC4R3_LENGTH                     0x00000001

#define _RPINR8_IC4R4_POSITION                   0x0000000C
#define _RPINR8_IC4R4_MASK                       0x00001000
#define _RPINR8_IC4R4_LENGTH                     0x00000001

#define _RPINR8_IC4R5_POSITION                   0x0000000D
#define _RPINR8_IC4R5_MASK                       0x00002000
#define _RPINR8_IC4R5_LENGTH                     0x00000001

#define _RPINR8_IC4R6_POSITION                   0x0000000E
#define _RPINR8_IC4R6_MASK                       0x00004000
#define _RPINR8_IC4R6_LENGTH                     0x00000001

#define _RPINR11_OCFAR_POSITION                  0x00000000
#define _RPINR11_OCFAR_MASK                      0x0000007F
#define _RPINR11_OCFAR_LENGTH                    0x00000007

#define _RPINR11_OCFAR0_POSITION                 0x00000000
#define _RPINR11_OCFAR0_MASK                     0x00000001
#define _RPINR11_OCFAR0_LENGTH                   0x00000001

#define _RPINR11_OCFAR1_POSITION                 0x00000001
#define _RPINR11_OCFAR1_MASK                     0x00000002
#define _RPINR11_OCFAR1_LENGTH                   0x00000001

#define _RPINR11_OCFAR2_POSITION                 0x00000002
#define _RPINR11_OCFAR2_MASK                     0x00000004
#define _RPINR11_OCFAR2_LENGTH                   0x00000001

#define _RPINR11_OCFAR3_POSITION                 0x00000003
#define _RPINR11_OCFAR3_MASK                     0x00000008
#define _RPINR11_OCFAR3_LENGTH                   0x00000001

#define _RPINR11_OCFAR4_POSITION                 0x00000004
#define _RPINR11_OCFAR4_MASK                     0x00000010
#define _RPINR11_OCFAR4_LENGTH                   0x00000001

#define _RPINR11_OCFAR5_POSITION                 0x00000005
#define _RPINR11_OCFAR5_MASK                     0x00000020
#define _RPINR11_OCFAR5_LENGTH                   0x00000001

#define _RPINR11_OCFAR6_POSITION                 0x00000006
#define _RPINR11_OCFAR6_MASK                     0x00000040
#define _RPINR11_OCFAR6_LENGTH                   0x00000001

#define _RPINR12_FLT1R_POSITION                  0x00000000
#define _RPINR12_FLT1R_MASK                      0x0000007F
#define _RPINR12_FLT1R_LENGTH                    0x00000007

#define _RPINR12_FLT2R_POSITION                  0x00000008
#define _RPINR12_FLT2R_MASK                      0x00007F00
#define _RPINR12_FLT2R_LENGTH                    0x00000007

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

#define _RPINR14_QEA1R_POSITION                  0x00000000
#define _RPINR14_QEA1R_MASK                      0x0000007F
#define _RPINR14_QEA1R_LENGTH                    0x00000007

#define _RPINR14_QEB1R_POSITION                  0x00000008
#define _RPINR14_QEB1R_MASK                      0x00007F00
#define _RPINR14_QEB1R_LENGTH                    0x00000007

#define _RPINR14_QEA1R0_POSITION                 0x00000000
#define _RPINR14_QEA1R0_MASK                     0x00000001
#define _RPINR14_QEA1R0_LENGTH                   0x00000001

#define _RPINR14_QEA1R1_POSITION                 0x00000001
#define _RPINR14_QEA1R1_MASK                     0x00000002
#define _RPINR14_QEA1R1_LENGTH                   0x00000001

#define _RPINR14_QEA1R2_POSITION                 0x00000002
#define _RPINR14_QEA1R2_MASK                     0x00000004
#define _RPINR14_QEA1R2_LENGTH                   0x00000001

#define _RPINR14_QEA1R3_POSITION                 0x00000003
#define _RPINR14_QEA1R3_MASK                     0x00000008
#define _RPINR14_QEA1R3_LENGTH                   0x00000001

#define _RPINR14_QEA1R4_POSITION                 0x00000004
#define _RPINR14_QEA1R4_MASK                     0x00000010
#define _RPINR14_QEA1R4_LENGTH                   0x00000001

#define _RPINR14_QEA1R5_POSITION                 0x00000005
#define _RPINR14_QEA1R5_MASK                     0x00000020
#define _RPINR14_QEA1R5_LENGTH                   0x00000001

#define _RPINR14_QEA1R6_POSITION                 0x00000006
#define _RPINR14_QEA1R6_MASK                     0x00000040
#define _RPINR14_QEA1R6_LENGTH                   0x00000001

#define _RPINR14_QEB1R0_POSITION                 0x00000008
#define _RPINR14_QEB1R0_MASK                     0x00000100
#define _RPINR14_QEB1R0_LENGTH                   0x00000001

#define _RPINR14_QEB1R1_POSITION                 0x00000009
#define _RPINR14_QEB1R1_MASK                     0x00000200
#define _RPINR14_QEB1R1_LENGTH                   0x00000001

#define _RPINR14_QEB1R2_POSITION                 0x0000000A
#define _RPINR14_QEB1R2_MASK                     0x00000400
#define _RPINR14_QEB1R2_LENGTH                   0x00000001

#define _RPINR14_QEB1R3_POSITION                 0x0000000B
#define _RPINR14_QEB1R3_MASK                     0x00000800
#define _RPINR14_QEB1R3_LENGTH                   0x00000001

#define _RPINR14_QEB1R4_POSITION                 0x0000000C
#define _RPINR14_QEB1R4_MASK                     0x00001000
#define _RPINR14_QEB1R4_LENGTH                   0x00000001

#define _RPINR14_QEB1R5_POSITION                 0x0000000D
#define _RPINR14_QEB1R5_MASK                     0x00002000
#define _RPINR14_QEB1R5_LENGTH                   0x00000001

#define _RPINR14_QEB1R6_POSITION                 0x0000000E
#define _RPINR14_QEB1R6_MASK                     0x00004000
#define _RPINR14_QEB1R6_LENGTH                   0x00000001

#define _RPINR15_INDX1R_POSITION                 0x00000000
#define _RPINR15_INDX1R_MASK                     0x0000007F
#define _RPINR15_INDX1R_LENGTH                   0x00000007

#define _RPINR15_HOME1R_POSITION                 0x00000008
#define _RPINR15_HOME1R_MASK                     0x00007F00
#define _RPINR15_HOME1R_LENGTH                   0x00000007

#define _RPINR15_INDX1R0_POSITION                0x00000000
#define _RPINR15_INDX1R0_MASK                    0x00000001
#define _RPINR15_INDX1R0_LENGTH                  0x00000001

#define _RPINR15_INDX1R1_POSITION                0x00000001
#define _RPINR15_INDX1R1_MASK                    0x00000002
#define _RPINR15_INDX1R1_LENGTH                  0x00000001

#define _RPINR15_INDX1R2_POSITION                0x00000002
#define _RPINR15_INDX1R2_MASK                    0x00000004
#define _RPINR15_INDX1R2_LENGTH                  0x00000001

#define _RPINR15_INDX1R3_POSITION                0x00000003
#define _RPINR15_INDX1R3_MASK                    0x00000008
#define _RPINR15_INDX1R3_LENGTH                  0x00000001

#define _RPINR15_INDX1R4_POSITION                0x00000004
#define _RPINR15_INDX1R4_MASK                    0x00000010
#define _RPINR15_INDX1R4_LENGTH                  0x00000001

#define _RPINR15_INDX1R5_POSITION                0x00000005
#define _RPINR15_INDX1R5_MASK                    0x00000020
#define _RPINR15_INDX1R5_LENGTH                  0x00000001

#define _RPINR15_INDX1R6_POSITION                0x00000006
#define _RPINR15_INDX1R6_MASK                    0x00000040
#define _RPINR15_INDX1R6_LENGTH                  0x00000001

#define _RPINR15_HOME1R0_POSITION                0x00000008
#define _RPINR15_HOME1R0_MASK                    0x00000100
#define _RPINR15_HOME1R0_LENGTH                  0x00000001

#define _RPINR15_HOME1R1_POSITION                0x00000009
#define _RPINR15_HOME1R1_MASK                    0x00000200
#define _RPINR15_HOME1R1_LENGTH                  0x00000001

#define _RPINR15_HOME1R2_POSITION                0x0000000A
#define _RPINR15_HOME1R2_MASK                    0x00000400
#define _RPINR15_HOME1R2_LENGTH                  0x00000001

#define _RPINR15_HOME1R3_POSITION                0x0000000B
#define _RPINR15_HOME1R3_MASK                    0x00000800
#define _RPINR15_HOME1R3_LENGTH                  0x00000001

#define _RPINR15_HOME1R4_POSITION                0x0000000C
#define _RPINR15_HOME1R4_MASK                    0x00001000
#define _RPINR15_HOME1R4_LENGTH                  0x00000001

#define _RPINR15_HOME1R5_POSITION                0x0000000D
#define _RPINR15_HOME1R5_MASK                    0x00002000
#define _RPINR15_HOME1R5_LENGTH                  0x00000001

#define _RPINR15_HOME1R6_POSITION                0x0000000E
#define _RPINR15_HOME1R6_MASK                    0x00004000
#define _RPINR15_HOME1R6_LENGTH                  0x00000001

#define _RPINR18_U1RXR_POSITION                  0x00000000
#define _RPINR18_U1RXR_MASK                      0x0000007F
#define _RPINR18_U1RXR_LENGTH                    0x00000007

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

#define _RPINR19_U2RXR_POSITION                  0x00000000
#define _RPINR19_U2RXR_MASK                      0x0000007F
#define _RPINR19_U2RXR_LENGTH                    0x00000007

#define _RPINR19_U2RXR0_POSITION                 0x00000000
#define _RPINR19_U2RXR0_MASK                     0x00000001
#define _RPINR19_U2RXR0_LENGTH                   0x00000001

#define _RPINR19_U2RXR1_POSITION                 0x00000001
#define _RPINR19_U2RXR1_MASK                     0x00000002
#define _RPINR19_U2RXR1_LENGTH                   0x00000001

#define _RPINR19_U2RXR2_POSITION                 0x00000002
#define _RPINR19_U2RXR2_MASK                     0x00000004
#define _RPINR19_U2RXR2_LENGTH                   0x00000001

#define _RPINR19_U2RXR3_POSITION                 0x00000003
#define _RPINR19_U2RXR3_MASK                     0x00000008
#define _RPINR19_U2RXR3_LENGTH                   0x00000001

#define _RPINR19_U2RXR4_POSITION                 0x00000004
#define _RPINR19_U2RXR4_MASK                     0x00000010
#define _RPINR19_U2RXR4_LENGTH                   0x00000001

#define _RPINR19_U2RXR5_POSITION                 0x00000005
#define _RPINR19_U2RXR5_MASK                     0x00000020
#define _RPINR19_U2RXR5_LENGTH                   0x00000001

#define _RPINR19_U2RXR6_POSITION                 0x00000006
#define _RPINR19_U2RXR6_MASK                     0x00000040
#define _RPINR19_U2RXR6_LENGTH                   0x00000001

#define _RPINR22_SDI2R_POSITION                  0x00000000
#define _RPINR22_SDI2R_MASK                      0x0000007F
#define _RPINR22_SDI2R_LENGTH                    0x00000007

#define _RPINR22_SCK2R_POSITION                  0x00000008
#define _RPINR22_SCK2R_MASK                      0x00007F00
#define _RPINR22_SCK2R_LENGTH                    0x00000007

#define _RPINR22_SDI2R0_POSITION                 0x00000000
#define _RPINR22_SDI2R0_MASK                     0x00000001
#define _RPINR22_SDI2R0_LENGTH                   0x00000001

#define _RPINR22_SDI2R1_POSITION                 0x00000001
#define _RPINR22_SDI2R1_MASK                     0x00000002
#define _RPINR22_SDI2R1_LENGTH                   0x00000001

#define _RPINR22_SDI2R2_POSITION                 0x00000002
#define _RPINR22_SDI2R2_MASK                     0x00000004
#define _RPINR22_SDI2R2_LENGTH                   0x00000001

#define _RPINR22_SDI2R3_POSITION                 0x00000003
#define _RPINR22_SDI2R3_MASK                     0x00000008
#define _RPINR22_SDI2R3_LENGTH                   0x00000001

#define _RPINR22_SDI2R4_POSITION                 0x00000004
#define _RPINR22_SDI2R4_MASK                     0x00000010
#define _RPINR22_SDI2R4_LENGTH                   0x00000001

#define _RPINR22_SDI2R5_POSITION                 0x00000005
#define _RPINR22_SDI2R5_MASK                     0x00000020
#define _RPINR22_SDI2R5_LENGTH                   0x00000001

#define _RPINR22_SDI2R6_POSITION                 0x00000006
#define _RPINR22_SDI2R6_MASK                     0x00000040
#define _RPINR22_SDI2R6_LENGTH                   0x00000001

#define _RPINR22_SCK2R0_POSITION                 0x00000008
#define _RPINR22_SCK2R0_MASK                     0x00000100
#define _RPINR22_SCK2R0_LENGTH                   0x00000001

#define _RPINR22_SCK2R1_POSITION                 0x00000009
#define _RPINR22_SCK2R1_MASK                     0x00000200
#define _RPINR22_SCK2R1_LENGTH                   0x00000001

#define _RPINR22_SCK2R2_POSITION                 0x0000000A
#define _RPINR22_SCK2R2_MASK                     0x00000400
#define _RPINR22_SCK2R2_LENGTH                   0x00000001

#define _RPINR22_SCK2R3_POSITION                 0x0000000B
#define _RPINR22_SCK2R3_MASK                     0x00000800
#define _RPINR22_SCK2R3_LENGTH                   0x00000001

#define _RPINR22_SCK2R4_POSITION                 0x0000000C
#define _RPINR22_SCK2R4_MASK                     0x00001000
#define _RPINR22_SCK2R4_LENGTH                   0x00000001

#define _RPINR22_SCK2R5_POSITION                 0x0000000D
#define _RPINR22_SCK2R5_MASK                     0x00002000
#define _RPINR22_SCK2R5_LENGTH                   0x00000001

#define _RPINR22_SCK2R6_POSITION                 0x0000000E
#define _RPINR22_SCK2R6_MASK                     0x00004000
#define _RPINR22_SCK2R6_LENGTH                   0x00000001

#define _RPINR23_SS2R_POSITION                   0x00000000
#define _RPINR23_SS2R_MASK                       0x0000007F
#define _RPINR23_SS2R_LENGTH                     0x00000007

#define _RPINR23_SS2R0_POSITION                  0x00000000
#define _RPINR23_SS2R0_MASK                      0x00000001
#define _RPINR23_SS2R0_LENGTH                    0x00000001

#define _RPINR23_SS2R1_POSITION                  0x00000001
#define _RPINR23_SS2R1_MASK                      0x00000002
#define _RPINR23_SS2R1_LENGTH                    0x00000001

#define _RPINR23_SS2R2_POSITION                  0x00000002
#define _RPINR23_SS2R2_MASK                      0x00000004
#define _RPINR23_SS2R2_LENGTH                    0x00000001

#define _RPINR23_SS2R3_POSITION                  0x00000003
#define _RPINR23_SS2R3_MASK                      0x00000008
#define _RPINR23_SS2R3_LENGTH                    0x00000001

#define _RPINR23_SS2R4_POSITION                  0x00000004
#define _RPINR23_SS2R4_MASK                      0x00000010
#define _RPINR23_SS2R4_LENGTH                    0x00000001

#define _RPINR23_SS2R5_POSITION                  0x00000005
#define _RPINR23_SS2R5_MASK                      0x00000020
#define _RPINR23_SS2R5_LENGTH                    0x00000001

#define _RPINR23_SS2R6_POSITION                  0x00000006
#define _RPINR23_SS2R6_MASK                      0x00000040
#define _RPINR23_SS2R6_LENGTH                    0x00000001

#define _RPINR26_C1RXR_POSITION                  0x00000000
#define _RPINR26_C1RXR_MASK                      0x0000007F
#define _RPINR26_C1RXR_LENGTH                    0x00000007

#define _RPINR26_C1RXR0_POSITION                 0x00000000
#define _RPINR26_C1RXR0_MASK                     0x00000001
#define _RPINR26_C1RXR0_LENGTH                   0x00000001

#define _RPINR26_C1RXR1_POSITION                 0x00000001
#define _RPINR26_C1RXR1_MASK                     0x00000002
#define _RPINR26_C1RXR1_LENGTH                   0x00000001

#define _RPINR26_C1RXR2_POSITION                 0x00000002
#define _RPINR26_C1RXR2_MASK                     0x00000004
#define _RPINR26_C1RXR2_LENGTH                   0x00000001

#define _RPINR26_C1RXR3_POSITION                 0x00000003
#define _RPINR26_C1RXR3_MASK                     0x00000008
#define _RPINR26_C1RXR3_LENGTH                   0x00000001

#define _RPINR26_C1RXR4_POSITION                 0x00000004
#define _RPINR26_C1RXR4_MASK                     0x00000010
#define _RPINR26_C1RXR4_LENGTH                   0x00000001

#define _RPINR26_C1RXR5_POSITION                 0x00000005
#define _RPINR26_C1RXR5_MASK                     0x00000020
#define _RPINR26_C1RXR5_LENGTH                   0x00000001

#define _RPINR26_C1RXR6_POSITION                 0x00000006
#define _RPINR26_C1RXR6_MASK                     0x00000040
#define _RPINR26_C1RXR6_LENGTH                   0x00000001

#define _RPINR37_SYNCI1R_POSITION                0x00000008
#define _RPINR37_SYNCI1R_MASK                    0x00007F00
#define _RPINR37_SYNCI1R_LENGTH                  0x00000007

#define _RPINR37_SYNCI1R0_POSITION               0x00000008
#define _RPINR37_SYNCI1R0_MASK                   0x00000100
#define _RPINR37_SYNCI1R0_LENGTH                 0x00000001

#define _RPINR37_SYNCI1R1_POSITION               0x00000009
#define _RPINR37_SYNCI1R1_MASK                   0x00000200
#define _RPINR37_SYNCI1R1_LENGTH                 0x00000001

#define _RPINR37_SYNCI1R2_POSITION               0x0000000A
#define _RPINR37_SYNCI1R2_MASK                   0x00000400
#define _RPINR37_SYNCI1R2_LENGTH                 0x00000001

#define _RPINR37_SYNCI1R3_POSITION               0x0000000B
#define _RPINR37_SYNCI1R3_MASK                   0x00000800
#define _RPINR37_SYNCI1R3_LENGTH                 0x00000001

#define _RPINR37_SYNCI1R4_POSITION               0x0000000C
#define _RPINR37_SYNCI1R4_MASK                   0x00001000
#define _RPINR37_SYNCI1R4_LENGTH                 0x00000001

#define _RPINR37_SYNCI1R5_POSITION               0x0000000D
#define _RPINR37_SYNCI1R5_MASK                   0x00002000
#define _RPINR37_SYNCI1R5_LENGTH                 0x00000001

#define _RPINR37_SYNCI1R6_POSITION               0x0000000E
#define _RPINR37_SYNCI1R6_MASK                   0x00004000
#define _RPINR37_SYNCI1R6_LENGTH                 0x00000001

#define _RPINR38_DTCMP1R_POSITION                0x00000008
#define _RPINR38_DTCMP1R_MASK                    0x00007F00
#define _RPINR38_DTCMP1R_LENGTH                  0x00000007

#define _RPINR38_DTCMP1R0_POSITION               0x00000008
#define _RPINR38_DTCMP1R0_MASK                   0x00000100
#define _RPINR38_DTCMP1R0_LENGTH                 0x00000001

#define _RPINR38_DTCMP1R1_POSITION               0x00000009
#define _RPINR38_DTCMP1R1_MASK                   0x00000200
#define _RPINR38_DTCMP1R1_LENGTH                 0x00000001

#define _RPINR38_DTCMP1R2_POSITION               0x0000000A
#define _RPINR38_DTCMP1R2_MASK                   0x00000400
#define _RPINR38_DTCMP1R2_LENGTH                 0x00000001

#define _RPINR38_DTCMP1R3_POSITION               0x0000000B
#define _RPINR38_DTCMP1R3_MASK                   0x00000800
#define _RPINR38_DTCMP1R3_LENGTH                 0x00000001

#define _RPINR38_DTCMP1R4_POSITION               0x0000000C
#define _RPINR38_DTCMP1R4_MASK                   0x00001000
#define _RPINR38_DTCMP1R4_LENGTH                 0x00000001

#define _RPINR38_DTCMP1R5_POSITION               0x0000000D
#define _RPINR38_DTCMP1R5_MASK                   0x00002000
#define _RPINR38_DTCMP1R5_LENGTH                 0x00000001

#define _RPINR38_DTCMP1R6_POSITION               0x0000000E
#define _RPINR38_DTCMP1R6_MASK                   0x00004000
#define _RPINR38_DTCMP1R6_LENGTH                 0x00000001

#define _RPINR39_DTCMP2R_POSITION                0x00000000
#define _RPINR39_DTCMP2R_MASK                    0x0000007F
#define _RPINR39_DTCMP2R_LENGTH                  0x00000007

#define _RPINR39_DTCMP3R_POSITION                0x00000008
#define _RPINR39_DTCMP3R_MASK                    0x00007F00
#define _RPINR39_DTCMP3R_LENGTH                  0x00000007

#define _RPINR39_DTCMP2R0_POSITION               0x00000000
#define _RPINR39_DTCMP2R0_MASK                   0x00000001
#define _RPINR39_DTCMP2R0_LENGTH                 0x00000001

#define _RPINR39_DTCMP2R1_POSITION               0x00000001
#define _RPINR39_DTCMP2R1_MASK                   0x00000002
#define _RPINR39_DTCMP2R1_LENGTH                 0x00000001

#define _RPINR39_DTCMP2R2_POSITION               0x00000002
#define _RPINR39_DTCMP2R2_MASK                   0x00000004
#define _RPINR39_DTCMP2R2_LENGTH                 0x00000001

#define _RPINR39_DTCMP2R3_POSITION               0x00000003
#define _RPINR39_DTCMP2R3_MASK                   0x00000008
#define _RPINR39_DTCMP2R3_LENGTH                 0x00000001

#define _RPINR39_DTCMP2R4_POSITION               0x00000004
#define _RPINR39_DTCMP2R4_MASK                   0x00000010
#define _RPINR39_DTCMP2R4_LENGTH                 0x00000001

#define _RPINR39_DTCMP2R5_POSITION               0x00000005
#define _RPINR39_DTCMP2R5_MASK                   0x00000020
#define _RPINR39_DTCMP2R5_LENGTH                 0x00000001

#define _RPINR39_DTCMP2R6_POSITION               0x00000006
#define _RPINR39_DTCMP2R6_MASK                   0x00000040
#define _RPINR39_DTCMP2R6_LENGTH                 0x00000001

#define _RPINR39_DTCMP3R0_POSITION               0x00000008
#define _RPINR39_DTCMP3R0_MASK                   0x00000100
#define _RPINR39_DTCMP3R0_LENGTH                 0x00000001

#define _RPINR39_DTCMP3R1_POSITION               0x00000009
#define _RPINR39_DTCMP3R1_MASK                   0x00000200
#define _RPINR39_DTCMP3R1_LENGTH                 0x00000001

#define _RPINR39_DTCMP3R2_POSITION               0x0000000A
#define _RPINR39_DTCMP3R2_MASK                   0x00000400
#define _RPINR39_DTCMP3R2_LENGTH                 0x00000001

#define _RPINR39_DTCMP3R3_POSITION               0x0000000B
#define _RPINR39_DTCMP3R3_MASK                   0x00000800
#define _RPINR39_DTCMP3R3_LENGTH                 0x00000001

#define _RPINR39_DTCMP3R4_POSITION               0x0000000C
#define _RPINR39_DTCMP3R4_MASK                   0x00001000
#define _RPINR39_DTCMP3R4_LENGTH                 0x00000001

#define _RPINR39_DTCMP3R5_POSITION               0x0000000D
#define _RPINR39_DTCMP3R5_MASK                   0x00002000
#define _RPINR39_DTCMP3R5_LENGTH                 0x00000001

#define _RPINR39_DTCMP3R6_POSITION               0x0000000E
#define _RPINR39_DTCMP3R6_MASK                   0x00004000
#define _RPINR39_DTCMP3R6_LENGTH                 0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

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

#define _NVMADRU_NVMADRU_POSITION                0x00000000
#define _NVMADRU_NVMADRU_MASK                    0x000000FF
#define _NVMADRU_NVMADRU_LENGTH                  0x00000008

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

#define _REFOCON_RODIV_POSITION                  0x00000008
#define _REFOCON_RODIV_MASK                      0x00000F00
#define _REFOCON_RODIV_LENGTH                    0x00000004

#define _REFOCON_ROSEL_POSITION                  0x0000000C
#define _REFOCON_ROSEL_MASK                      0x00001000
#define _REFOCON_ROSEL_LENGTH                    0x00000001

#define _REFOCON_ROSSLP_POSITION                 0x0000000D
#define _REFOCON_ROSSLP_MASK                     0x00002000
#define _REFOCON_ROSSLP_LENGTH                   0x00000001

#define _REFOCON_ROON_POSITION                   0x0000000F
#define _REFOCON_ROON_MASK                       0x00008000
#define _REFOCON_ROON_LENGTH                     0x00000001

#define _REFOCON_RODIV0_POSITION                 0x00000008
#define _REFOCON_RODIV0_MASK                     0x00000100
#define _REFOCON_RODIV0_LENGTH                   0x00000001

#define _REFOCON_RODIV1_POSITION                 0x00000009
#define _REFOCON_RODIV1_MASK                     0x00000200
#define _REFOCON_RODIV1_LENGTH                   0x00000001

#define _REFOCON_RODIV2_POSITION                 0x0000000A
#define _REFOCON_RODIV2_MASK                     0x00000400
#define _REFOCON_RODIV2_LENGTH                   0x00000001

#define _REFOCON_RODIV3_POSITION                 0x0000000B
#define _REFOCON_RODIV3_MASK                     0x00000800
#define _REFOCON_RODIV3_LENGTH                   0x00000001

#define _PMD1_AD1MD_POSITION                     0x00000000
#define _PMD1_AD1MD_MASK                         0x00000001
#define _PMD1_AD1MD_LENGTH                       0x00000001

#define _PMD1_SPI1MD_POSITION                    0x00000003
#define _PMD1_SPI1MD_MASK                        0x00000008
#define _PMD1_SPI1MD_LENGTH                      0x00000001

#define _PMD1_SPI2MD_POSITION                    0x00000004
#define _PMD1_SPI2MD_MASK                        0x00000010
#define _PMD1_SPI2MD_LENGTH                      0x00000001

#define _PMD1_U1MD_POSITION                      0x00000005
#define _PMD1_U1MD_MASK                          0x00000020
#define _PMD1_U1MD_LENGTH                        0x00000001

#define _PMD1_U2MD_POSITION                      0x00000006
#define _PMD1_U2MD_MASK                          0x00000040
#define _PMD1_U2MD_LENGTH                        0x00000001

#define _PMD1_I2C1MD_POSITION                    0x00000007
#define _PMD1_I2C1MD_MASK                        0x00000080
#define _PMD1_I2C1MD_LENGTH                      0x00000001

#define _PMD1_PWMMD_POSITION                     0x00000009
#define _PMD1_PWMMD_MASK                         0x00000200
#define _PMD1_PWMMD_LENGTH                       0x00000001

#define _PMD1_QEI1MD_POSITION                    0x0000000A
#define _PMD1_QEI1MD_MASK                        0x00000400
#define _PMD1_QEI1MD_LENGTH                      0x00000001

#define _PMD1_T1MD_POSITION                      0x0000000B
#define _PMD1_T1MD_MASK                          0x00000800
#define _PMD1_T1MD_LENGTH                        0x00000001

#define _PMD1_T2MD_POSITION                      0x0000000C
#define _PMD1_T2MD_MASK                          0x00001000
#define _PMD1_T2MD_LENGTH                        0x00000001

#define _PMD1_T3MD_POSITION                      0x0000000D
#define _PMD1_T3MD_MASK                          0x00002000
#define _PMD1_T3MD_LENGTH                        0x00000001

#define _PMD1_T4MD_POSITION                      0x0000000E
#define _PMD1_T4MD_MASK                          0x00004000
#define _PMD1_T4MD_LENGTH                        0x00000001

#define _PMD1_T5MD_POSITION                      0x0000000F
#define _PMD1_T5MD_MASK                          0x00008000
#define _PMD1_T5MD_LENGTH                        0x00000001

#define _PMD2_OC1MD_POSITION                     0x00000000
#define _PMD2_OC1MD_MASK                         0x00000001
#define _PMD2_OC1MD_LENGTH                       0x00000001

#define _PMD2_OC2MD_POSITION                     0x00000001
#define _PMD2_OC2MD_MASK                         0x00000002
#define _PMD2_OC2MD_LENGTH                       0x00000001

#define _PMD2_OC3MD_POSITION                     0x00000002
#define _PMD2_OC3MD_MASK                         0x00000004
#define _PMD2_OC3MD_LENGTH                       0x00000001

#define _PMD2_OC4MD_POSITION                     0x00000003
#define _PMD2_OC4MD_MASK                         0x00000008
#define _PMD2_OC4MD_LENGTH                       0x00000001

#define _PMD2_IC1MD_POSITION                     0x00000008
#define _PMD2_IC1MD_MASK                         0x00000100
#define _PMD2_IC1MD_LENGTH                       0x00000001

#define _PMD2_IC2MD_POSITION                     0x00000009
#define _PMD2_IC2MD_MASK                         0x00000200
#define _PMD2_IC2MD_LENGTH                       0x00000001

#define _PMD2_IC3MD_POSITION                     0x0000000A
#define _PMD2_IC3MD_MASK                         0x00000400
#define _PMD2_IC3MD_LENGTH                       0x00000001

#define _PMD2_IC4MD_POSITION                     0x0000000B
#define _PMD2_IC4MD_MASK                         0x00000800
#define _PMD2_IC4MD_LENGTH                       0x00000001

#define _PMD3_I2C2MD_POSITION                    0x00000001
#define _PMD3_I2C2MD_MASK                        0x00000002
#define _PMD3_I2C2MD_LENGTH                      0x00000001

#define _PMD3_CRCMD_POSITION                     0x00000007
#define _PMD3_CRCMD_MASK                         0x00000080
#define _PMD3_CRCMD_LENGTH                       0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD4_CTMUMD_POSITION                    0x00000002
#define _PMD4_CTMUMD_MASK                        0x00000004
#define _PMD4_CTMUMD_LENGTH                      0x00000001

#define _PMD4_REFOMD_POSITION                    0x00000003
#define _PMD4_REFOMD_MASK                        0x00000008
#define _PMD4_REFOMD_LENGTH                      0x00000001

#define _PMD6_PWM1MD_POSITION                    0x00000008
#define _PMD6_PWM1MD_MASK                        0x00000100
#define _PMD6_PWM1MD_LENGTH                      0x00000001

#define _PMD6_PWM2MD_POSITION                    0x00000009
#define _PMD6_PWM2MD_MASK                        0x00000200
#define _PMD6_PWM2MD_LENGTH                      0x00000001

#define _PMD6_PWM3MD_POSITION                    0x0000000A
#define _PMD6_PWM3MD_MASK                        0x00000400
#define _PMD6_PWM3MD_LENGTH                      0x00000001

#define _PMD7_PTGMD_POSITION                     0x00000003
#define _PMD7_PTGMD_MASK                         0x00000008
#define _PMD7_PTGMD_LENGTH                       0x00000001

#define _PMD7_DMA0MD_POSITION                    0x00000004
#define _PMD7_DMA0MD_MASK                        0x00000010
#define _PMD7_DMA0MD_LENGTH                      0x00000001

#define _PMD7_DMA1MD_POSITION                    0x00000004
#define _PMD7_DMA1MD_MASK                        0x00000010
#define _PMD7_DMA1MD_LENGTH                      0x00000001

#define _PMD7_DMA5MD_POSITION                    0x00000005
#define _PMD7_DMA5MD_MASK                        0x00000020
#define _PMD7_DMA5MD_LENGTH                      0x00000001

#define _PMD7_DMA9MD_POSITION                    0x00000006
#define _PMD7_DMA9MD_MASK                        0x00000040
#define _PMD7_DMA9MD_LENGTH                      0x00000001

#define _PMD7_DMA13MD_POSITION                   0x00000007
#define _PMD7_DMA13MD_MASK                       0x00000080
#define _PMD7_DMA13MD_LENGTH                     0x00000001

#define _PMD7_DMA2MD_POSITION                    0x00000004
#define _PMD7_DMA2MD_MASK                        0x00000010
#define _PMD7_DMA2MD_LENGTH                      0x00000001

#define _PMD7_DMA6MD_POSITION                    0x00000005
#define _PMD7_DMA6MD_MASK                        0x00000020
#define _PMD7_DMA6MD_LENGTH                      0x00000001

#define _PMD7_DMA10MD_POSITION                   0x00000006
#define _PMD7_DMA10MD_MASK                       0x00000040
#define _PMD7_DMA10MD_LENGTH                     0x00000001

#define _PMD7_DMA14MD_POSITION                   0x00000007
#define _PMD7_DMA14MD_MASK                       0x00000080
#define _PMD7_DMA14MD_LENGTH                     0x00000001

#define _PMD7_DMA3MD_POSITION                    0x00000004
#define _PMD7_DMA3MD_MASK                        0x00000010
#define _PMD7_DMA3MD_LENGTH                      0x00000001

#define _PMD7_DMA7MD_POSITION                    0x00000005
#define _PMD7_DMA7MD_MASK                        0x00000020
#define _PMD7_DMA7MD_LENGTH                      0x00000001

#define _PMD7_DMA11MD_POSITION                   0x00000006
#define _PMD7_DMA11MD_MASK                       0x00000040
#define _PMD7_DMA11MD_LENGTH                     0x00000001

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

#define _IFS0_DMA0IF_POSITION                    0x00000004
#define _IFS0_DMA0IF_MASK                        0x00000010
#define _IFS0_DMA0IF_LENGTH                      0x00000001

#define _IFS0_IC2IF_POSITION                     0x00000005
#define _IFS0_IC2IF_MASK                         0x00000020
#define _IFS0_IC2IF_LENGTH                       0x00000001

#define _IFS0_OC2IF_POSITION                     0x00000006
#define _IFS0_OC2IF_MASK                         0x00000040
#define _IFS0_OC2IF_LENGTH                       0x00000001

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

#define _IFS0_AD1IF_POSITION                     0x0000000D
#define _IFS0_AD1IF_MASK                         0x00002000
#define _IFS0_AD1IF_LENGTH                       0x00000001

#define _IFS0_DMA1IF_POSITION                    0x0000000E
#define _IFS0_DMA1IF_MASK                        0x00004000
#define _IFS0_DMA1IF_LENGTH                      0x00000001

#define _IFS1_SI2C1IF_POSITION                   0x00000000
#define _IFS1_SI2C1IF_MASK                       0x00000001
#define _IFS1_SI2C1IF_LENGTH                     0x00000001

#define _IFS1_MI2C1IF_POSITION                   0x00000001
#define _IFS1_MI2C1IF_MASK                       0x00000002
#define _IFS1_MI2C1IF_LENGTH                     0x00000001

#define _IFS1_CMIF_POSITION                      0x00000002
#define _IFS1_CMIF_MASK                          0x00000004
#define _IFS1_CMIF_LENGTH                        0x00000001

#define _IFS1_CNIF_POSITION                      0x00000003
#define _IFS1_CNIF_MASK                          0x00000008
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000004
#define _IFS1_INT1IF_MASK                        0x00000010
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_DMA2IF_POSITION                    0x00000008
#define _IFS1_DMA2IF_MASK                        0x00000100
#define _IFS1_DMA2IF_LENGTH                      0x00000001

#define _IFS1_OC3IF_POSITION                     0x00000009
#define _IFS1_OC3IF_MASK                         0x00000200
#define _IFS1_OC3IF_LENGTH                       0x00000001

#define _IFS1_OC4IF_POSITION                     0x0000000A
#define _IFS1_OC4IF_MASK                         0x00000400
#define _IFS1_OC4IF_LENGTH                       0x00000001

#define _IFS1_T4IF_POSITION                      0x0000000B
#define _IFS1_T4IF_MASK                          0x00000800
#define _IFS1_T4IF_LENGTH                        0x00000001

#define _IFS1_T5IF_POSITION                      0x0000000C
#define _IFS1_T5IF_MASK                          0x00001000
#define _IFS1_T5IF_LENGTH                        0x00000001

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS1_U2RXIF_POSITION                    0x0000000E
#define _IFS1_U2RXIF_MASK                        0x00004000
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x0000000F
#define _IFS1_U2TXIF_MASK                        0x00008000
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS2_SPI2EIF_POSITION                   0x00000000
#define _IFS2_SPI2EIF_MASK                       0x00000001
#define _IFS2_SPI2EIF_LENGTH                     0x00000001

#define _IFS2_SPI2IF_POSITION                    0x00000001
#define _IFS2_SPI2IF_MASK                        0x00000002
#define _IFS2_SPI2IF_LENGTH                      0x00000001

#define _IFS2_DMA3IF_POSITION                    0x00000004
#define _IFS2_DMA3IF_MASK                        0x00000010
#define _IFS2_DMA3IF_LENGTH                      0x00000001

#define _IFS2_IC3IF_POSITION                     0x00000005
#define _IFS2_IC3IF_MASK                         0x00000020
#define _IFS2_IC3IF_LENGTH                       0x00000001

#define _IFS2_IC4IF_POSITION                     0x00000006
#define _IFS2_IC4IF_MASK                         0x00000040
#define _IFS2_IC4IF_LENGTH                       0x00000001

#define _IFS3_SI2C2IF_POSITION                   0x00000001
#define _IFS3_SI2C2IF_MASK                       0x00000002
#define _IFS3_SI2C2IF_LENGTH                     0x00000001

#define _IFS3_MI2C2IF_POSITION                   0x00000002
#define _IFS3_MI2C2IF_MASK                       0x00000004
#define _IFS3_MI2C2IF_LENGTH                     0x00000001

#define _IFS3_PSEMIF_POSITION                    0x00000009
#define _IFS3_PSEMIF_MASK                        0x00000200
#define _IFS3_PSEMIF_LENGTH                      0x00000001

#define _IFS3_QEI1IF_POSITION                    0x0000000A
#define _IFS3_QEI1IF_MASK                        0x00000400
#define _IFS3_QEI1IF_LENGTH                      0x00000001

#define _IFS4_U1EIF_POSITION                     0x00000001
#define _IFS4_U1EIF_MASK                         0x00000002
#define _IFS4_U1EIF_LENGTH                       0x00000001

#define _IFS4_U2EIF_POSITION                     0x00000002
#define _IFS4_U2EIF_MASK                         0x00000004
#define _IFS4_U2EIF_LENGTH                       0x00000001

#define _IFS4_CRCIF_POSITION                     0x00000003
#define _IFS4_CRCIF_MASK                         0x00000008
#define _IFS4_CRCIF_LENGTH                       0x00000001

#define _IFS4_CTMUIF_POSITION                    0x0000000D
#define _IFS4_CTMUIF_MASK                        0x00002000
#define _IFS4_CTMUIF_LENGTH                      0x00000001

#define _IFS5_PWM1IF_POSITION                    0x0000000E
#define _IFS5_PWM1IF_MASK                        0x00004000
#define _IFS5_PWM1IF_LENGTH                      0x00000001

#define _IFS5_PWM2IF_POSITION                    0x0000000F
#define _IFS5_PWM2IF_MASK                        0x00008000
#define _IFS5_PWM2IF_LENGTH                      0x00000001

#define _IFS6_PWM3IF_POSITION                    0x00000000
#define _IFS6_PWM3IF_MASK                        0x00000001
#define _IFS6_PWM3IF_LENGTH                      0x00000001

#define _IFS8_ICDIF_POSITION                     0x0000000E
#define _IFS8_ICDIF_MASK                         0x00004000
#define _IFS8_ICDIF_LENGTH                       0x00000001

#define _IFS8_JTAGIF_POSITION                    0x0000000F
#define _IFS8_JTAGIF_MASK                        0x00008000
#define _IFS8_JTAGIF_LENGTH                      0x00000001

#define _IFS9_PTGSTEPIF_POSITION                 0x00000001
#define _IFS9_PTGSTEPIF_MASK                     0x00000002
#define _IFS9_PTGSTEPIF_LENGTH                   0x00000001

#define _IFS9_PTGWDTIF_POSITION                  0x00000002
#define _IFS9_PTGWDTIF_MASK                      0x00000004
#define _IFS9_PTGWDTIF_LENGTH                    0x00000001

#define _IFS9_PTG0IF_POSITION                    0x00000003
#define _IFS9_PTG0IF_MASK                        0x00000008
#define _IFS9_PTG0IF_LENGTH                      0x00000001

#define _IFS9_PTG1IF_POSITION                    0x00000004
#define _IFS9_PTG1IF_MASK                        0x00000010
#define _IFS9_PTG1IF_LENGTH                      0x00000001

#define _IFS9_PTG2IF_POSITION                    0x00000005
#define _IFS9_PTG2IF_MASK                        0x00000020
#define _IFS9_PTG2IF_LENGTH                      0x00000001

#define _IFS9_PTG3IF_POSITION                    0x00000006
#define _IFS9_PTG3IF_MASK                        0x00000040
#define _IFS9_PTG3IF_LENGTH                      0x00000001

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

#define _IEC0_DMA0IE_POSITION                    0x00000004
#define _IEC0_DMA0IE_MASK                        0x00000010
#define _IEC0_DMA0IE_LENGTH                      0x00000001

#define _IEC0_IC2IE_POSITION                     0x00000005
#define _IEC0_IC2IE_MASK                         0x00000020
#define _IEC0_IC2IE_LENGTH                       0x00000001

#define _IEC0_OC2IE_POSITION                     0x00000006
#define _IEC0_OC2IE_MASK                         0x00000040
#define _IEC0_OC2IE_LENGTH                       0x00000001

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

#define _IEC0_AD1IE_POSITION                     0x0000000D
#define _IEC0_AD1IE_MASK                         0x00002000
#define _IEC0_AD1IE_LENGTH                       0x00000001

#define _IEC0_DMA1IE_POSITION                    0x0000000E
#define _IEC0_DMA1IE_MASK                        0x00004000
#define _IEC0_DMA1IE_LENGTH                      0x00000001

#define _IEC1_SI2C1IE_POSITION                   0x00000000
#define _IEC1_SI2C1IE_MASK                       0x00000001
#define _IEC1_SI2C1IE_LENGTH                     0x00000001

#define _IEC1_MI2C1IE_POSITION                   0x00000001
#define _IEC1_MI2C1IE_MASK                       0x00000002
#define _IEC1_MI2C1IE_LENGTH                     0x00000001

#define _IEC1_CMIE_POSITION                      0x00000002
#define _IEC1_CMIE_MASK                          0x00000004
#define _IEC1_CMIE_LENGTH                        0x00000001

#define _IEC1_CNIE_POSITION                      0x00000003
#define _IEC1_CNIE_MASK                          0x00000008
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000004
#define _IEC1_INT1IE_MASK                        0x00000010
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_DMA2IE_POSITION                    0x00000008
#define _IEC1_DMA2IE_MASK                        0x00000100
#define _IEC1_DMA2IE_LENGTH                      0x00000001

#define _IEC1_OC3IE_POSITION                     0x00000009
#define _IEC1_OC3IE_MASK                         0x00000200
#define _IEC1_OC3IE_LENGTH                       0x00000001

#define _IEC1_OC4IE_POSITION                     0x0000000A
#define _IEC1_OC4IE_MASK                         0x00000400
#define _IEC1_OC4IE_LENGTH                       0x00000001

#define _IEC1_T4IE_POSITION                      0x0000000B
#define _IEC1_T4IE_MASK                          0x00000800
#define _IEC1_T4IE_LENGTH                        0x00000001

#define _IEC1_T5IE_POSITION                      0x0000000C
#define _IEC1_T5IE_MASK                          0x00001000
#define _IEC1_T5IE_LENGTH                        0x00000001

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC1_U2RXIE_POSITION                    0x0000000E
#define _IEC1_U2RXIE_MASK                        0x00004000
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x0000000F
#define _IEC1_U2TXIE_MASK                        0x00008000
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC2_SPI2EIE_POSITION                   0x00000000
#define _IEC2_SPI2EIE_MASK                       0x00000001
#define _IEC2_SPI2EIE_LENGTH                     0x00000001

#define _IEC2_SPI2IE_POSITION                    0x00000001
#define _IEC2_SPI2IE_MASK                        0x00000002
#define _IEC2_SPI2IE_LENGTH                      0x00000001

#define _IEC2_DMA3IE_POSITION                    0x00000004
#define _IEC2_DMA3IE_MASK                        0x00000010
#define _IEC2_DMA3IE_LENGTH                      0x00000001

#define _IEC2_IC3IE_POSITION                     0x00000005
#define _IEC2_IC3IE_MASK                         0x00000020
#define _IEC2_IC3IE_LENGTH                       0x00000001

#define _IEC2_IC4IE_POSITION                     0x00000006
#define _IEC2_IC4IE_MASK                         0x00000040
#define _IEC2_IC4IE_LENGTH                       0x00000001

#define _IEC3_SI2C2IE_POSITION                   0x00000001
#define _IEC3_SI2C2IE_MASK                       0x00000002
#define _IEC3_SI2C2IE_LENGTH                     0x00000001

#define _IEC3_MI2C2IE_POSITION                   0x00000002
#define _IEC3_MI2C2IE_MASK                       0x00000004
#define _IEC3_MI2C2IE_LENGTH                     0x00000001

#define _IEC3_PSEMIE_POSITION                    0x00000009
#define _IEC3_PSEMIE_MASK                        0x00000200
#define _IEC3_PSEMIE_LENGTH                      0x00000001

#define _IEC3_QEI1IE_POSITION                    0x0000000A
#define _IEC3_QEI1IE_MASK                        0x00000400
#define _IEC3_QEI1IE_LENGTH                      0x00000001

#define _IEC4_U1EIE_POSITION                     0x00000001
#define _IEC4_U1EIE_MASK                         0x00000002
#define _IEC4_U1EIE_LENGTH                       0x00000001

#define _IEC4_U2EIE_POSITION                     0x00000002
#define _IEC4_U2EIE_MASK                         0x00000004
#define _IEC4_U2EIE_LENGTH                       0x00000001

#define _IEC4_CRCIE_POSITION                     0x00000003
#define _IEC4_CRCIE_MASK                         0x00000008
#define _IEC4_CRCIE_LENGTH                       0x00000001

#define _IEC4_CTMUIE_POSITION                    0x0000000D
#define _IEC4_CTMUIE_MASK                        0x00002000
#define _IEC4_CTMUIE_LENGTH                      0x00000001

#define _IEC5_PWM1IE_POSITION                    0x0000000E
#define _IEC5_PWM1IE_MASK                        0x00004000
#define _IEC5_PWM1IE_LENGTH                      0x00000001

#define _IEC5_PWM2IE_POSITION                    0x0000000F
#define _IEC5_PWM2IE_MASK                        0x00008000
#define _IEC5_PWM2IE_LENGTH                      0x00000001

#define _IEC6_PWM3IE_POSITION                    0x00000000
#define _IEC6_PWM3IE_MASK                        0x00000001
#define _IEC6_PWM3IE_LENGTH                      0x00000001

#define _IEC8_ICDIF_POSITION                     0x0000000E
#define _IEC8_ICDIF_MASK                         0x00004000
#define _IEC8_ICDIF_LENGTH                       0x00000001

#define _IEC8_JTAGIE_POSITION                    0x0000000F
#define _IEC8_JTAGIE_MASK                        0x00008000
#define _IEC8_JTAGIE_LENGTH                      0x00000001

#define _IEC9_PTGSTEPIE_POSITION                 0x00000001
#define _IEC9_PTGSTEPIE_MASK                     0x00000002
#define _IEC9_PTGSTEPIE_LENGTH                   0x00000001

#define _IEC9_PTGWDTIE_POSITION                  0x00000002
#define _IEC9_PTGWDTIE_MASK                      0x00000004
#define _IEC9_PTGWDTIE_LENGTH                    0x00000001

#define _IEC9_PTG0IE_POSITION                    0x00000003
#define _IEC9_PTG0IE_MASK                        0x00000008
#define _IEC9_PTG0IE_LENGTH                      0x00000001

#define _IEC9_PTG1IE_POSITION                    0x00000004
#define _IEC9_PTG1IE_MASK                        0x00000010
#define _IEC9_PTG1IE_LENGTH                      0x00000001

#define _IEC9_PTG2IE_POSITION                    0x00000005
#define _IEC9_PTG2IE_MASK                        0x00000020
#define _IEC9_PTG2IE_LENGTH                      0x00000001

#define _IEC9_PTG3IE_POSITION                    0x00000006
#define _IEC9_PTG3IE_MASK                        0x00000040
#define _IEC9_PTG3IE_LENGTH                      0x00000001

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

#define _IPC1_DMA0IP_POSITION                    0x00000000
#define _IPC1_DMA0IP_MASK                        0x00000007
#define _IPC1_DMA0IP_LENGTH                      0x00000003

#define _IPC1_IC2IP_POSITION                     0x00000004
#define _IPC1_IC2IP_MASK                         0x00000070
#define _IPC1_IC2IP_LENGTH                       0x00000003

#define _IPC1_OC2IP_POSITION                     0x00000008
#define _IPC1_OC2IP_MASK                         0x00000700
#define _IPC1_OC2IP_LENGTH                       0x00000003

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

#define _IPC1_DMA0IP0_POSITION                   0x00000000
#define _IPC1_DMA0IP0_MASK                       0x00000001
#define _IPC1_DMA0IP0_LENGTH                     0x00000001

#define _IPC1_DMA0IP1_POSITION                   0x00000001
#define _IPC1_DMA0IP1_MASK                       0x00000002
#define _IPC1_DMA0IP1_LENGTH                     0x00000001

#define _IPC1_DMA0IP2_POSITION                   0x00000002
#define _IPC1_DMA0IP2_MASK                       0x00000004
#define _IPC1_DMA0IP2_LENGTH                     0x00000001

#define _IPC1_IC2IP0_POSITION                    0x00000004
#define _IPC1_IC2IP0_MASK                        0x00000010
#define _IPC1_IC2IP0_LENGTH                      0x00000001

#define _IPC1_IC2IP1_POSITION                    0x00000005
#define _IPC1_IC2IP1_MASK                        0x00000020
#define _IPC1_IC2IP1_LENGTH                      0x00000001

#define _IPC1_IC2IP2_POSITION                    0x00000006
#define _IPC1_IC2IP2_MASK                        0x00000040
#define _IPC1_IC2IP2_LENGTH                      0x00000001

#define _IPC1_OC2IP0_POSITION                    0x00000008
#define _IPC1_OC2IP0_MASK                        0x00000100
#define _IPC1_OC2IP0_LENGTH                      0x00000001

#define _IPC1_OC2IP1_POSITION                    0x00000009
#define _IPC1_OC2IP1_MASK                        0x00000200
#define _IPC1_OC2IP1_LENGTH                      0x00000001

#define _IPC1_OC2IP2_POSITION                    0x0000000A
#define _IPC1_OC2IP2_MASK                        0x00000400
#define _IPC1_OC2IP2_LENGTH                      0x00000001

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

#define _IPC3_AD1IP_POSITION                     0x00000004
#define _IPC3_AD1IP_MASK                         0x00000070
#define _IPC3_AD1IP_LENGTH                       0x00000003

#define _IPC3_DMA1IP_POSITION                    0x00000008
#define _IPC3_DMA1IP_MASK                        0x00000700
#define _IPC3_DMA1IP_LENGTH                      0x00000003

#define _IPC3_U1TXIP0_POSITION                   0x00000000
#define _IPC3_U1TXIP0_MASK                       0x00000001
#define _IPC3_U1TXIP0_LENGTH                     0x00000001

#define _IPC3_U1TXIP1_POSITION                   0x00000001
#define _IPC3_U1TXIP1_MASK                       0x00000002
#define _IPC3_U1TXIP1_LENGTH                     0x00000001

#define _IPC3_U1TXIP2_POSITION                   0x00000002
#define _IPC3_U1TXIP2_MASK                       0x00000004
#define _IPC3_U1TXIP2_LENGTH                     0x00000001

#define _IPC3_AD1IP0_POSITION                    0x00000004
#define _IPC3_AD1IP0_MASK                        0x00000010
#define _IPC3_AD1IP0_LENGTH                      0x00000001

#define _IPC3_AD1IP1_POSITION                    0x00000005
#define _IPC3_AD1IP1_MASK                        0x00000020
#define _IPC3_AD1IP1_LENGTH                      0x00000001

#define _IPC3_AD1IP2_POSITION                    0x00000006
#define _IPC3_AD1IP2_MASK                        0x00000040
#define _IPC3_AD1IP2_LENGTH                      0x00000001

#define _IPC3_DMA1IP0_POSITION                   0x00000008
#define _IPC3_DMA1IP0_MASK                       0x00000100
#define _IPC3_DMA1IP0_LENGTH                     0x00000001

#define _IPC3_DMA1IP1_POSITION                   0x00000009
#define _IPC3_DMA1IP1_MASK                       0x00000200
#define _IPC3_DMA1IP1_LENGTH                     0x00000001

#define _IPC3_DMA1IP2_POSITION                   0x0000000A
#define _IPC3_DMA1IP2_MASK                       0x00000400
#define _IPC3_DMA1IP2_LENGTH                     0x00000001

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

#define _IPC4_CMIP_POSITION                      0x00000008
#define _IPC4_CMIP_MASK                          0x00000700
#define _IPC4_CMIP_LENGTH                        0x00000003

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

#define _IPC4_CMIP0_POSITION                     0x00000008
#define _IPC4_CMIP0_MASK                         0x00000100
#define _IPC4_CMIP0_LENGTH                       0x00000001

#define _IPC4_CMIP1_POSITION                     0x00000009
#define _IPC4_CMIP1_MASK                         0x00000200
#define _IPC4_CMIP1_LENGTH                       0x00000001

#define _IPC4_CMIP2_POSITION                     0x0000000A
#define _IPC4_CMIP2_MASK                         0x00000400
#define _IPC4_CMIP2_LENGTH                       0x00000001

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

#define _IPC6_DMA2IP_POSITION                    0x00000000
#define _IPC6_DMA2IP_MASK                        0x00000007
#define _IPC6_DMA2IP_LENGTH                      0x00000003

#define _IPC6_OC3IP_POSITION                     0x00000004
#define _IPC6_OC3IP_MASK                         0x00000070
#define _IPC6_OC3IP_LENGTH                       0x00000003

#define _IPC6_OC4IP_POSITION                     0x00000008
#define _IPC6_OC4IP_MASK                         0x00000700
#define _IPC6_OC4IP_LENGTH                       0x00000003

#define _IPC6_T4IP_POSITION                      0x0000000C
#define _IPC6_T4IP_MASK                          0x00007000
#define _IPC6_T4IP_LENGTH                        0x00000003

#define _IPC6_DMA2IP0_POSITION                   0x00000000
#define _IPC6_DMA2IP0_MASK                       0x00000001
#define _IPC6_DMA2IP0_LENGTH                     0x00000001

#define _IPC6_DMA2IP1_POSITION                   0x00000001
#define _IPC6_DMA2IP1_MASK                       0x00000002
#define _IPC6_DMA2IP1_LENGTH                     0x00000001

#define _IPC6_DMA2IP2_POSITION                   0x00000002
#define _IPC6_DMA2IP2_MASK                       0x00000004
#define _IPC6_DMA2IP2_LENGTH                     0x00000001

#define _IPC6_OC3IP0_POSITION                    0x00000004
#define _IPC6_OC3IP0_MASK                        0x00000010
#define _IPC6_OC3IP0_LENGTH                      0x00000001

#define _IPC6_OC3IP1_POSITION                    0x00000005
#define _IPC6_OC3IP1_MASK                        0x00000020
#define _IPC6_OC3IP1_LENGTH                      0x00000001

#define _IPC6_OC3IP2_POSITION                    0x00000006
#define _IPC6_OC3IP2_MASK                        0x00000040
#define _IPC6_OC3IP2_LENGTH                      0x00000001

#define _IPC6_OC4IP0_POSITION                    0x00000008
#define _IPC6_OC4IP0_MASK                        0x00000100
#define _IPC6_OC4IP0_LENGTH                      0x00000001

#define _IPC6_OC4IP1_POSITION                    0x00000009
#define _IPC6_OC4IP1_MASK                        0x00000200
#define _IPC6_OC4IP1_LENGTH                      0x00000001

#define _IPC6_OC4IP2_POSITION                    0x0000000A
#define _IPC6_OC4IP2_MASK                        0x00000400
#define _IPC6_OC4IP2_LENGTH                      0x00000001

#define _IPC6_T4IP0_POSITION                     0x0000000C
#define _IPC6_T4IP0_MASK                         0x00001000
#define _IPC6_T4IP0_LENGTH                       0x00000001

#define _IPC6_T4IP1_POSITION                     0x0000000D
#define _IPC6_T4IP1_MASK                         0x00002000
#define _IPC6_T4IP1_LENGTH                       0x00000001

#define _IPC6_T4IP2_POSITION                     0x0000000E
#define _IPC6_T4IP2_MASK                         0x00004000
#define _IPC6_T4IP2_LENGTH                       0x00000001

#define _IPC7_T5IP_POSITION                      0x00000000
#define _IPC7_T5IP_MASK                          0x00000007
#define _IPC7_T5IP_LENGTH                        0x00000003

#define _IPC7_INT2IP_POSITION                    0x00000004
#define _IPC7_INT2IP_MASK                        0x00000070
#define _IPC7_INT2IP_LENGTH                      0x00000003

#define _IPC7_U2RXIP_POSITION                    0x00000008
#define _IPC7_U2RXIP_MASK                        0x00000700
#define _IPC7_U2RXIP_LENGTH                      0x00000003

#define _IPC7_U2TXIP_POSITION                    0x0000000C
#define _IPC7_U2TXIP_MASK                        0x00007000
#define _IPC7_U2TXIP_LENGTH                      0x00000003

#define _IPC7_T5IP0_POSITION                     0x00000000
#define _IPC7_T5IP0_MASK                         0x00000001
#define _IPC7_T5IP0_LENGTH                       0x00000001

#define _IPC7_T5IP1_POSITION                     0x00000001
#define _IPC7_T5IP1_MASK                         0x00000002
#define _IPC7_T5IP1_LENGTH                       0x00000001

#define _IPC7_T5IP2_POSITION                     0x00000002
#define _IPC7_T5IP2_MASK                         0x00000004
#define _IPC7_T5IP2_LENGTH                       0x00000001

#define _IPC7_INT2IP0_POSITION                   0x00000004
#define _IPC7_INT2IP0_MASK                       0x00000010
#define _IPC7_INT2IP0_LENGTH                     0x00000001

#define _IPC7_INT2IP1_POSITION                   0x00000005
#define _IPC7_INT2IP1_MASK                       0x00000020
#define _IPC7_INT2IP1_LENGTH                     0x00000001

#define _IPC7_INT2IP2_POSITION                   0x00000006
#define _IPC7_INT2IP2_MASK                       0x00000040
#define _IPC7_INT2IP2_LENGTH                     0x00000001

#define _IPC7_U2RXIP0_POSITION                   0x00000008
#define _IPC7_U2RXIP0_MASK                       0x00000100
#define _IPC7_U2RXIP0_LENGTH                     0x00000001

#define _IPC7_U2RXIP1_POSITION                   0x00000009
#define _IPC7_U2RXIP1_MASK                       0x00000200
#define _IPC7_U2RXIP1_LENGTH                     0x00000001

#define _IPC7_U2RXIP2_POSITION                   0x0000000A
#define _IPC7_U2RXIP2_MASK                       0x00000400
#define _IPC7_U2RXIP2_LENGTH                     0x00000001

#define _IPC7_U2TXIP0_POSITION                   0x0000000C
#define _IPC7_U2TXIP0_MASK                       0x00001000
#define _IPC7_U2TXIP0_LENGTH                     0x00000001

#define _IPC7_U2TXIP1_POSITION                   0x0000000D
#define _IPC7_U2TXIP1_MASK                       0x00002000
#define _IPC7_U2TXIP1_LENGTH                     0x00000001

#define _IPC7_U2TXIP2_POSITION                   0x0000000E
#define _IPC7_U2TXIP2_MASK                       0x00004000
#define _IPC7_U2TXIP2_LENGTH                     0x00000001

#define _IPC8_SPI2EIP_POSITION                   0x00000000
#define _IPC8_SPI2EIP_MASK                       0x00000007
#define _IPC8_SPI2EIP_LENGTH                     0x00000003

#define _IPC8_SPI2IP_POSITION                    0x00000004
#define _IPC8_SPI2IP_MASK                        0x00000070
#define _IPC8_SPI2IP_LENGTH                      0x00000003

#define _IPC8_SPI2EIP0_POSITION                  0x00000000
#define _IPC8_SPI2EIP0_MASK                      0x00000001
#define _IPC8_SPI2EIP0_LENGTH                    0x00000001

#define _IPC8_SPI2EIP1_POSITION                  0x00000001
#define _IPC8_SPI2EIP1_MASK                      0x00000002
#define _IPC8_SPI2EIP1_LENGTH                    0x00000001

#define _IPC8_SPI2EIP2_POSITION                  0x00000002
#define _IPC8_SPI2EIP2_MASK                      0x00000004
#define _IPC8_SPI2EIP2_LENGTH                    0x00000001

#define _IPC8_SPI2IP0_POSITION                   0x00000004
#define _IPC8_SPI2IP0_MASK                       0x00000010
#define _IPC8_SPI2IP0_LENGTH                     0x00000001

#define _IPC8_SPI2IP1_POSITION                   0x00000005
#define _IPC8_SPI2IP1_MASK                       0x00000020
#define _IPC8_SPI2IP1_LENGTH                     0x00000001

#define _IPC8_SPI2IP2_POSITION                   0x00000006
#define _IPC8_SPI2IP2_MASK                       0x00000040
#define _IPC8_SPI2IP2_LENGTH                     0x00000001

#define _IPC9_DMA3IP_POSITION                    0x00000000
#define _IPC9_DMA3IP_MASK                        0x00000007
#define _IPC9_DMA3IP_LENGTH                      0x00000003

#define _IPC9_IC3IP_POSITION                     0x00000004
#define _IPC9_IC3IP_MASK                         0x00000070
#define _IPC9_IC3IP_LENGTH                       0x00000003

#define _IPC9_IC4IP_POSITION                     0x00000008
#define _IPC9_IC4IP_MASK                         0x00000700
#define _IPC9_IC4IP_LENGTH                       0x00000003

#define _IPC9_DMA3IP0_POSITION                   0x00000000
#define _IPC9_DMA3IP0_MASK                       0x00000001
#define _IPC9_DMA3IP0_LENGTH                     0x00000001

#define _IPC9_DMA3IP1_POSITION                   0x00000001
#define _IPC9_DMA3IP1_MASK                       0x00000002
#define _IPC9_DMA3IP1_LENGTH                     0x00000001

#define _IPC9_DMA3IP2_POSITION                   0x00000002
#define _IPC9_DMA3IP2_MASK                       0x00000004
#define _IPC9_DMA3IP2_LENGTH                     0x00000001

#define _IPC9_IC3IP0_POSITION                    0x00000004
#define _IPC9_IC3IP0_MASK                        0x00000010
#define _IPC9_IC3IP0_LENGTH                      0x00000001

#define _IPC9_IC3IP1_POSITION                    0x00000005
#define _IPC9_IC3IP1_MASK                        0x00000020
#define _IPC9_IC3IP1_LENGTH                      0x00000001

#define _IPC9_IC3IP2_POSITION                    0x00000006
#define _IPC9_IC3IP2_MASK                        0x00000040
#define _IPC9_IC3IP2_LENGTH                      0x00000001

#define _IPC9_IC4IP0_POSITION                    0x00000008
#define _IPC9_IC4IP0_MASK                        0x00000100
#define _IPC9_IC4IP0_LENGTH                      0x00000001

#define _IPC9_IC4IP1_POSITION                    0x00000009
#define _IPC9_IC4IP1_MASK                        0x00000200
#define _IPC9_IC4IP1_LENGTH                      0x00000001

#define _IPC9_IC4IP2_POSITION                    0x0000000A
#define _IPC9_IC4IP2_MASK                        0x00000400
#define _IPC9_IC4IP2_LENGTH                      0x00000001

#define _IPC12_SI2C2IP_POSITION                  0x00000004
#define _IPC12_SI2C2IP_MASK                      0x00000070
#define _IPC12_SI2C2IP_LENGTH                    0x00000003

#define _IPC12_MI2C2IP_POSITION                  0x00000008
#define _IPC12_MI2C2IP_MASK                      0x00000700
#define _IPC12_MI2C2IP_LENGTH                    0x00000003

#define _IPC12_SI2C2IP0_POSITION                 0x00000004
#define _IPC12_SI2C2IP0_MASK                     0x00000010
#define _IPC12_SI2C2IP0_LENGTH                   0x00000001

#define _IPC12_SI2C2IP1_POSITION                 0x00000005
#define _IPC12_SI2C2IP1_MASK                     0x00000020
#define _IPC12_SI2C2IP1_LENGTH                   0x00000001

#define _IPC12_SI2C2IP2_POSITION                 0x00000006
#define _IPC12_SI2C2IP2_MASK                     0x00000040
#define _IPC12_SI2C2IP2_LENGTH                   0x00000001

#define _IPC12_MI2C2IP0_POSITION                 0x00000008
#define _IPC12_MI2C2IP0_MASK                     0x00000100
#define _IPC12_MI2C2IP0_LENGTH                   0x00000001

#define _IPC12_MI2C2IP1_POSITION                 0x00000009
#define _IPC12_MI2C2IP1_MASK                     0x00000200
#define _IPC12_MI2C2IP1_LENGTH                   0x00000001

#define _IPC12_MI2C2IP2_POSITION                 0x0000000A
#define _IPC12_MI2C2IP2_MASK                     0x00000400
#define _IPC12_MI2C2IP2_LENGTH                   0x00000001

#define _IPC14_PSEMIP_POSITION                   0x00000004
#define _IPC14_PSEMIP_MASK                       0x00000070
#define _IPC14_PSEMIP_LENGTH                     0x00000003

#define _IPC14_QEI1IP_POSITION                   0x00000008
#define _IPC14_QEI1IP_MASK                       0x00000700
#define _IPC14_QEI1IP_LENGTH                     0x00000003

#define _IPC14_PSEMIP0_POSITION                  0x00000004
#define _IPC14_PSEMIP0_MASK                      0x00000010
#define _IPC14_PSEMIP0_LENGTH                    0x00000001

#define _IPC14_PSEMIP1_POSITION                  0x00000005
#define _IPC14_PSEMIP1_MASK                      0x00000020
#define _IPC14_PSEMIP1_LENGTH                    0x00000001

#define _IPC14_PSEMIP2_POSITION                  0x00000006
#define _IPC14_PSEMIP2_MASK                      0x00000040
#define _IPC14_PSEMIP2_LENGTH                    0x00000001

#define _IPC14_QEI1IP0_POSITION                  0x00000008
#define _IPC14_QEI1IP0_MASK                      0x00000100
#define _IPC14_QEI1IP0_LENGTH                    0x00000001

#define _IPC14_QEI1IP1_POSITION                  0x00000009
#define _IPC14_QEI1IP1_MASK                      0x00000200
#define _IPC14_QEI1IP1_LENGTH                    0x00000001

#define _IPC14_QEI1IP2_POSITION                  0x0000000A
#define _IPC14_QEI1IP2_MASK                      0x00000400
#define _IPC14_QEI1IP2_LENGTH                    0x00000001

#define _IPC16_U1EIP_POSITION                    0x00000004
#define _IPC16_U1EIP_MASK                        0x00000070
#define _IPC16_U1EIP_LENGTH                      0x00000003

#define _IPC16_U2EIP_POSITION                    0x00000008
#define _IPC16_U2EIP_MASK                        0x00000700
#define _IPC16_U2EIP_LENGTH                      0x00000003

#define _IPC16_CRCIP_POSITION                    0x0000000C
#define _IPC16_CRCIP_MASK                        0x00007000
#define _IPC16_CRCIP_LENGTH                      0x00000003

#define _IPC16_U1EIP0_POSITION                   0x00000004
#define _IPC16_U1EIP0_MASK                       0x00000010
#define _IPC16_U1EIP0_LENGTH                     0x00000001

#define _IPC16_U1EIP1_POSITION                   0x00000005
#define _IPC16_U1EIP1_MASK                       0x00000020
#define _IPC16_U1EIP1_LENGTH                     0x00000001

#define _IPC16_U1EIP2_POSITION                   0x00000006
#define _IPC16_U1EIP2_MASK                       0x00000040
#define _IPC16_U1EIP2_LENGTH                     0x00000001

#define _IPC16_U2EIP0_POSITION                   0x00000008
#define _IPC16_U2EIP0_MASK                       0x00000100
#define _IPC16_U2EIP0_LENGTH                     0x00000001

#define _IPC16_U2EIP1_POSITION                   0x00000009
#define _IPC16_U2EIP1_MASK                       0x00000200
#define _IPC16_U2EIP1_LENGTH                     0x00000001

#define _IPC16_U2EIP2_POSITION                   0x0000000A
#define _IPC16_U2EIP2_MASK                       0x00000400
#define _IPC16_U2EIP2_LENGTH                     0x00000001

#define _IPC16_CRCIP0_POSITION                   0x0000000C
#define _IPC16_CRCIP0_MASK                       0x00001000
#define _IPC16_CRCIP0_LENGTH                     0x00000001

#define _IPC16_CRCIP1_POSITION                   0x0000000D
#define _IPC16_CRCIP1_MASK                       0x00002000
#define _IPC16_CRCIP1_LENGTH                     0x00000001

#define _IPC16_CRCIP2_POSITION                   0x0000000E
#define _IPC16_CRCIP2_MASK                       0x00004000
#define _IPC16_CRCIP2_LENGTH                     0x00000001

#define _IPC19_CTMUIP_POSITION                   0x00000004
#define _IPC19_CTMUIP_MASK                       0x00000070
#define _IPC19_CTMUIP_LENGTH                     0x00000003

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

#define _IPC35_ICDIP_POSITION                    0x00000008
#define _IPC35_ICDIP_MASK                        0x00000700
#define _IPC35_ICDIP_LENGTH                      0x00000003

#define _IPC35_JTAGIP_POSITION                   0x0000000C
#define _IPC35_JTAGIP_MASK                       0x00007000
#define _IPC35_JTAGIP_LENGTH                     0x00000003

#define _IPC35_ICDIP0_POSITION                   0x00000008
#define _IPC35_ICDIP0_MASK                       0x00000100
#define _IPC35_ICDIP0_LENGTH                     0x00000001

#define _IPC35_ICDIP1_POSITION                   0x00000009
#define _IPC35_ICDIP1_MASK                       0x00000200
#define _IPC35_ICDIP1_LENGTH                     0x00000001

#define _IPC35_ICDIP2_POSITION                   0x0000000A
#define _IPC35_ICDIP2_MASK                       0x00000400
#define _IPC35_ICDIP2_LENGTH                     0x00000001

#define _IPC35_JTAGIP0_POSITION                  0x0000000C
#define _IPC35_JTAGIP0_MASK                      0x00001000
#define _IPC35_JTAGIP0_LENGTH                    0x00000001

#define _IPC35_JTAGIP1_POSITION                  0x0000000D
#define _IPC35_JTAGIP1_MASK                      0x00002000
#define _IPC35_JTAGIP1_LENGTH                    0x00000001

#define _IPC35_JTAGIP2_POSITION                  0x0000000E
#define _IPC35_JTAGIP2_MASK                      0x00004000
#define _IPC35_JTAGIP2_LENGTH                    0x00000001

#define _IPC36_PTGSTEPIP_POSITION                0x00000004
#define _IPC36_PTGSTEPIP_MASK                    0x00000070
#define _IPC36_PTGSTEPIP_LENGTH                  0x00000003

#define _IPC36_PTGWDTIP_POSITION                 0x00000008
#define _IPC36_PTGWDTIP_MASK                     0x00000700
#define _IPC36_PTGWDTIP_LENGTH                   0x00000003

#define _IPC36_PTG0IP_POSITION                   0x0000000C
#define _IPC36_PTG0IP_MASK                       0x00007000
#define _IPC36_PTG0IP_LENGTH                     0x00000003

#define _IPC37_PTG1IP_POSITION                   0x00000000
#define _IPC37_PTG1IP_MASK                       0x00000007
#define _IPC37_PTG1IP_LENGTH                     0x00000003

#define _IPC37_PTG2IP_POSITION                   0x00000004
#define _IPC37_PTG2IP_MASK                       0x00000070
#define _IPC37_PTG2IP_LENGTH                     0x00000003

#define _IPC37_PTG3IP_POSITION                   0x00000008
#define _IPC37_PTG3IP_MASK                       0x00000700
#define _IPC37_PTG3IP_LENGTH                     0x00000003

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

#define _INTCON1_DMACERR_POSITION                0x00000005
#define _INTCON1_DMACERR_MASK                    0x00000020
#define _INTCON1_DMACERR_LENGTH                  0x00000001

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

#define _INTCON2_SWTRAP_POSITION                 0x0000000D
#define _INTCON2_SWTRAP_MASK                     0x00002000
#define _INTCON2_SWTRAP_LENGTH                   0x00000001

#define _INTCON2_DISI_POSITION                   0x0000000E
#define _INTCON2_DISI_MASK                       0x00004000
#define _INTCON2_DISI_LENGTH                     0x00000001

#define _INTCON2_GIE_POSITION                    0x0000000F
#define _INTCON2_GIE_MASK                        0x00008000
#define _INTCON2_GIE_LENGTH                      0x00000001

#define _INTCON3_DOOVR_POSITION                  0x00000004
#define _INTCON3_DOOVR_MASK                      0x00000010
#define _INTCON3_DOOVR_LENGTH                    0x00000001

#define _INTCON3_DAE_POSITION                    0x00000005
#define _INTCON3_DAE_MASK                        0x00000020
#define _INTCON3_DAE_LENGTH                      0x00000001

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

#define _OC1CON1_OCFLTB_POSITION                 0x00000005
#define _OC1CON1_OCFLTB_MASK                     0x00000020
#define _OC1CON1_OCFLTB_LENGTH                   0x00000001

#define _OC1CON1_ENFLTA_POSITION                 0x00000007
#define _OC1CON1_ENFLTA_MASK                     0x00000080
#define _OC1CON1_ENFLTA_LENGTH                   0x00000001

#define _OC1CON1_ENFLTB_POSITION                 0x00000008
#define _OC1CON1_ENFLTB_MASK                     0x00000100
#define _OC1CON1_ENFLTB_LENGTH                   0x00000001

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

#define _OC1CON1_OCFLT1_POSITION                 0x00000005
#define _OC1CON1_OCFLT1_MASK                     0x00000020
#define _OC1CON1_OCFLT1_LENGTH                   0x00000001

#define _OC1CON1_ENFLT0_POSITION                 0x00000007
#define _OC1CON1_ENFLT0_MASK                     0x00000080
#define _OC1CON1_ENFLT0_LENGTH                   0x00000001

#define _OC1CON1_ENFLT1_POSITION                 0x00000008
#define _OC1CON1_ENFLT1_MASK                     0x00000100
#define _OC1CON1_ENFLT1_LENGTH                   0x00000001

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

#define _OC2CON1_OCM_POSITION                    0x00000000
#define _OC2CON1_OCM_MASK                        0x00000007
#define _OC2CON1_OCM_LENGTH                      0x00000003

#define _OC2CON1_TRIGMODE_POSITION               0x00000003
#define _OC2CON1_TRIGMODE_MASK                   0x00000008
#define _OC2CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC2CON1_OCFLTA_POSITION                 0x00000004
#define _OC2CON1_OCFLTA_MASK                     0x00000010
#define _OC2CON1_OCFLTA_LENGTH                   0x00000001

#define _OC2CON1_OCFLTB_POSITION                 0x00000005
#define _OC2CON1_OCFLTB_MASK                     0x00000020
#define _OC2CON1_OCFLTB_LENGTH                   0x00000001

#define _OC2CON1_ENFLTA_POSITION                 0x00000007
#define _OC2CON1_ENFLTA_MASK                     0x00000080
#define _OC2CON1_ENFLTA_LENGTH                   0x00000001

#define _OC2CON1_ENFLTB_POSITION                 0x00000008
#define _OC2CON1_ENFLTB_MASK                     0x00000100
#define _OC2CON1_ENFLTB_LENGTH                   0x00000001

#define _OC2CON1_OCTSEL_POSITION                 0x0000000A
#define _OC2CON1_OCTSEL_MASK                     0x00001C00
#define _OC2CON1_OCTSEL_LENGTH                   0x00000003

#define _OC2CON1_OCSIDL_POSITION                 0x0000000D
#define _OC2CON1_OCSIDL_MASK                     0x00002000
#define _OC2CON1_OCSIDL_LENGTH                   0x00000001

#define _OC2CON1_OCM0_POSITION                   0x00000000
#define _OC2CON1_OCM0_MASK                       0x00000001
#define _OC2CON1_OCM0_LENGTH                     0x00000001

#define _OC2CON1_OCM1_POSITION                   0x00000001
#define _OC2CON1_OCM1_MASK                       0x00000002
#define _OC2CON1_OCM1_LENGTH                     0x00000001

#define _OC2CON1_OCM2_POSITION                   0x00000002
#define _OC2CON1_OCM2_MASK                       0x00000004
#define _OC2CON1_OCM2_LENGTH                     0x00000001

#define _OC2CON1_OCFLT_POSITION                  0x00000004
#define _OC2CON1_OCFLT_MASK                      0x00000070
#define _OC2CON1_OCFLT_LENGTH                    0x00000003

#define _OC2CON1_ENFLT_POSITION                  0x00000007
#define _OC2CON1_ENFLT_MASK                      0x00000380
#define _OC2CON1_ENFLT_LENGTH                    0x00000003

#define _OC2CON1_OCTSEL0_POSITION                0x0000000A
#define _OC2CON1_OCTSEL0_MASK                    0x00000400
#define _OC2CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC2CON1_OCTSEL1_POSITION                0x0000000B
#define _OC2CON1_OCTSEL1_MASK                    0x00000800
#define _OC2CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC2CON1_OCTSEL2_POSITION                0x0000000C
#define _OC2CON1_OCTSEL2_MASK                    0x00001000
#define _OC2CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC2CON1_OCFLT0_POSITION                 0x00000004
#define _OC2CON1_OCFLT0_MASK                     0x00000010
#define _OC2CON1_OCFLT0_LENGTH                   0x00000001

#define _OC2CON1_OCFLT1_POSITION                 0x00000005
#define _OC2CON1_OCFLT1_MASK                     0x00000020
#define _OC2CON1_OCFLT1_LENGTH                   0x00000001

#define _OC2CON1_ENFLT0_POSITION                 0x00000007
#define _OC2CON1_ENFLT0_MASK                     0x00000080
#define _OC2CON1_ENFLT0_LENGTH                   0x00000001

#define _OC2CON1_ENFLT1_POSITION                 0x00000008
#define _OC2CON1_ENFLT1_MASK                     0x00000100
#define _OC2CON1_ENFLT1_LENGTH                   0x00000001

#define _OC2CON2_SYNCSEL_POSITION                0x00000000
#define _OC2CON2_SYNCSEL_MASK                    0x0000001F
#define _OC2CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC2CON2_OCTRIS_POSITION                 0x00000005
#define _OC2CON2_OCTRIS_MASK                     0x00000020
#define _OC2CON2_OCTRIS_LENGTH                   0x00000001

#define _OC2CON2_TRIGSTAT_POSITION               0x00000006
#define _OC2CON2_TRIGSTAT_MASK                   0x00000040
#define _OC2CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC2CON2_OCTRIG_POSITION                 0x00000007
#define _OC2CON2_OCTRIG_MASK                     0x00000080
#define _OC2CON2_OCTRIG_LENGTH                   0x00000001

#define _OC2CON2_OC32_POSITION                   0x00000008
#define _OC2CON2_OC32_MASK                       0x00000100
#define _OC2CON2_OC32_LENGTH                     0x00000001

#define _OC2CON2_OCINV_POSITION                  0x0000000C
#define _OC2CON2_OCINV_MASK                      0x00001000
#define _OC2CON2_OCINV_LENGTH                    0x00000001

#define _OC2CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC2CON2_FLTTRIEN_MASK                   0x00002000
#define _OC2CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC2CON2_FLTOUT_POSITION                 0x0000000E
#define _OC2CON2_FLTOUT_MASK                     0x00004000
#define _OC2CON2_FLTOUT_LENGTH                   0x00000001

#define _OC2CON2_FLTMD_POSITION                  0x0000000F
#define _OC2CON2_FLTMD_MASK                      0x00008000
#define _OC2CON2_FLTMD_LENGTH                    0x00000001

#define _OC2CON2_SYNCSEL0_POSITION               0x00000000
#define _OC2CON2_SYNCSEL0_MASK                   0x00000001
#define _OC2CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL1_POSITION               0x00000001
#define _OC2CON2_SYNCSEL1_MASK                   0x00000002
#define _OC2CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL2_POSITION               0x00000002
#define _OC2CON2_SYNCSEL2_MASK                   0x00000004
#define _OC2CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL3_POSITION               0x00000003
#define _OC2CON2_SYNCSEL3_MASK                   0x00000008
#define _OC2CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC2CON2_SYNCSEL4_POSITION               0x00000004
#define _OC2CON2_SYNCSEL4_MASK                   0x00000010
#define _OC2CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC2CON2_FLTMODE_POSITION                0x0000000E
#define _OC2CON2_FLTMODE_MASK                    0x00004000
#define _OC2CON2_FLTMODE_LENGTH                  0x00000001

#define _OC3CON1_OCM_POSITION                    0x00000000
#define _OC3CON1_OCM_MASK                        0x00000007
#define _OC3CON1_OCM_LENGTH                      0x00000003

#define _OC3CON1_TRIGMODE_POSITION               0x00000003
#define _OC3CON1_TRIGMODE_MASK                   0x00000008
#define _OC3CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC3CON1_OCFLTA_POSITION                 0x00000004
#define _OC3CON1_OCFLTA_MASK                     0x00000010
#define _OC3CON1_OCFLTA_LENGTH                   0x00000001

#define _OC3CON1_OCFLTB_POSITION                 0x00000005
#define _OC3CON1_OCFLTB_MASK                     0x00000020
#define _OC3CON1_OCFLTB_LENGTH                   0x00000001

#define _OC3CON1_ENFLTA_POSITION                 0x00000007
#define _OC3CON1_ENFLTA_MASK                     0x00000080
#define _OC3CON1_ENFLTA_LENGTH                   0x00000001

#define _OC3CON1_ENFLTB_POSITION                 0x00000008
#define _OC3CON1_ENFLTB_MASK                     0x00000100
#define _OC3CON1_ENFLTB_LENGTH                   0x00000001

#define _OC3CON1_OCTSEL_POSITION                 0x0000000A
#define _OC3CON1_OCTSEL_MASK                     0x00001C00
#define _OC3CON1_OCTSEL_LENGTH                   0x00000003

#define _OC3CON1_OCSIDL_POSITION                 0x0000000D
#define _OC3CON1_OCSIDL_MASK                     0x00002000
#define _OC3CON1_OCSIDL_LENGTH                   0x00000001

#define _OC3CON1_OCM0_POSITION                   0x00000000
#define _OC3CON1_OCM0_MASK                       0x00000001
#define _OC3CON1_OCM0_LENGTH                     0x00000001

#define _OC3CON1_OCM1_POSITION                   0x00000001
#define _OC3CON1_OCM1_MASK                       0x00000002
#define _OC3CON1_OCM1_LENGTH                     0x00000001

#define _OC3CON1_OCM2_POSITION                   0x00000002
#define _OC3CON1_OCM2_MASK                       0x00000004
#define _OC3CON1_OCM2_LENGTH                     0x00000001

#define _OC3CON1_OCFLT_POSITION                  0x00000004
#define _OC3CON1_OCFLT_MASK                      0x00000070
#define _OC3CON1_OCFLT_LENGTH                    0x00000003

#define _OC3CON1_ENFLT_POSITION                  0x00000007
#define _OC3CON1_ENFLT_MASK                      0x00000380
#define _OC3CON1_ENFLT_LENGTH                    0x00000003

#define _OC3CON1_OCTSEL0_POSITION                0x0000000A
#define _OC3CON1_OCTSEL0_MASK                    0x00000400
#define _OC3CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC3CON1_OCTSEL1_POSITION                0x0000000B
#define _OC3CON1_OCTSEL1_MASK                    0x00000800
#define _OC3CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC3CON1_OCTSEL2_POSITION                0x0000000C
#define _OC3CON1_OCTSEL2_MASK                    0x00001000
#define _OC3CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC3CON1_OCFLT0_POSITION                 0x00000004
#define _OC3CON1_OCFLT0_MASK                     0x00000010
#define _OC3CON1_OCFLT0_LENGTH                   0x00000001

#define _OC3CON1_OCFLT1_POSITION                 0x00000005
#define _OC3CON1_OCFLT1_MASK                     0x00000020
#define _OC3CON1_OCFLT1_LENGTH                   0x00000001

#define _OC3CON1_ENFLT0_POSITION                 0x00000007
#define _OC3CON1_ENFLT0_MASK                     0x00000080
#define _OC3CON1_ENFLT0_LENGTH                   0x00000001

#define _OC3CON1_ENFLT1_POSITION                 0x00000008
#define _OC3CON1_ENFLT1_MASK                     0x00000100
#define _OC3CON1_ENFLT1_LENGTH                   0x00000001

#define _OC3CON2_SYNCSEL_POSITION                0x00000000
#define _OC3CON2_SYNCSEL_MASK                    0x0000001F
#define _OC3CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC3CON2_OCTRIS_POSITION                 0x00000005
#define _OC3CON2_OCTRIS_MASK                     0x00000020
#define _OC3CON2_OCTRIS_LENGTH                   0x00000001

#define _OC3CON2_TRIGSTAT_POSITION               0x00000006
#define _OC3CON2_TRIGSTAT_MASK                   0x00000040
#define _OC3CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC3CON2_OCTRIG_POSITION                 0x00000007
#define _OC3CON2_OCTRIG_MASK                     0x00000080
#define _OC3CON2_OCTRIG_LENGTH                   0x00000001

#define _OC3CON2_OC32_POSITION                   0x00000008
#define _OC3CON2_OC32_MASK                       0x00000100
#define _OC3CON2_OC32_LENGTH                     0x00000001

#define _OC3CON2_OCINV_POSITION                  0x0000000C
#define _OC3CON2_OCINV_MASK                      0x00001000
#define _OC3CON2_OCINV_LENGTH                    0x00000001

#define _OC3CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC3CON2_FLTTRIEN_MASK                   0x00002000
#define _OC3CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC3CON2_FLTOUT_POSITION                 0x0000000E
#define _OC3CON2_FLTOUT_MASK                     0x00004000
#define _OC3CON2_FLTOUT_LENGTH                   0x00000001

#define _OC3CON2_FLTMD_POSITION                  0x0000000F
#define _OC3CON2_FLTMD_MASK                      0x00008000
#define _OC3CON2_FLTMD_LENGTH                    0x00000001

#define _OC3CON2_SYNCSEL0_POSITION               0x00000000
#define _OC3CON2_SYNCSEL0_MASK                   0x00000001
#define _OC3CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL1_POSITION               0x00000001
#define _OC3CON2_SYNCSEL1_MASK                   0x00000002
#define _OC3CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL2_POSITION               0x00000002
#define _OC3CON2_SYNCSEL2_MASK                   0x00000004
#define _OC3CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL3_POSITION               0x00000003
#define _OC3CON2_SYNCSEL3_MASK                   0x00000008
#define _OC3CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC3CON2_SYNCSEL4_POSITION               0x00000004
#define _OC3CON2_SYNCSEL4_MASK                   0x00000010
#define _OC3CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC3CON2_FLTMODE_POSITION                0x0000000E
#define _OC3CON2_FLTMODE_MASK                    0x00004000
#define _OC3CON2_FLTMODE_LENGTH                  0x00000001

#define _OC4CON1_OCM_POSITION                    0x00000000
#define _OC4CON1_OCM_MASK                        0x00000007
#define _OC4CON1_OCM_LENGTH                      0x00000003

#define _OC4CON1_TRIGMODE_POSITION               0x00000003
#define _OC4CON1_TRIGMODE_MASK                   0x00000008
#define _OC4CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC4CON1_OCFLTA_POSITION                 0x00000004
#define _OC4CON1_OCFLTA_MASK                     0x00000010
#define _OC4CON1_OCFLTA_LENGTH                   0x00000001

#define _OC4CON1_OCFLTB_POSITION                 0x00000005
#define _OC4CON1_OCFLTB_MASK                     0x00000020
#define _OC4CON1_OCFLTB_LENGTH                   0x00000001

#define _OC4CON1_ENFLTA_POSITION                 0x00000007
#define _OC4CON1_ENFLTA_MASK                     0x00000080
#define _OC4CON1_ENFLTA_LENGTH                   0x00000001

#define _OC4CON1_ENFLTB_POSITION                 0x00000008
#define _OC4CON1_ENFLTB_MASK                     0x00000100
#define _OC4CON1_ENFLTB_LENGTH                   0x00000001

#define _OC4CON1_OCTSEL_POSITION                 0x0000000A
#define _OC4CON1_OCTSEL_MASK                     0x00001C00
#define _OC4CON1_OCTSEL_LENGTH                   0x00000003

#define _OC4CON1_OCSIDL_POSITION                 0x0000000D
#define _OC4CON1_OCSIDL_MASK                     0x00002000
#define _OC4CON1_OCSIDL_LENGTH                   0x00000001

#define _OC4CON1_OCM0_POSITION                   0x00000000
#define _OC4CON1_OCM0_MASK                       0x00000001
#define _OC4CON1_OCM0_LENGTH                     0x00000001

#define _OC4CON1_OCM1_POSITION                   0x00000001
#define _OC4CON1_OCM1_MASK                       0x00000002
#define _OC4CON1_OCM1_LENGTH                     0x00000001

#define _OC4CON1_OCM2_POSITION                   0x00000002
#define _OC4CON1_OCM2_MASK                       0x00000004
#define _OC4CON1_OCM2_LENGTH                     0x00000001

#define _OC4CON1_OCFLT_POSITION                  0x00000004
#define _OC4CON1_OCFLT_MASK                      0x00000070
#define _OC4CON1_OCFLT_LENGTH                    0x00000003

#define _OC4CON1_ENFLT_POSITION                  0x00000007
#define _OC4CON1_ENFLT_MASK                      0x00000380
#define _OC4CON1_ENFLT_LENGTH                    0x00000003

#define _OC4CON1_OCTSEL0_POSITION                0x0000000A
#define _OC4CON1_OCTSEL0_MASK                    0x00000400
#define _OC4CON1_OCTSEL0_LENGTH                  0x00000001

#define _OC4CON1_OCTSEL1_POSITION                0x0000000B
#define _OC4CON1_OCTSEL1_MASK                    0x00000800
#define _OC4CON1_OCTSEL1_LENGTH                  0x00000001

#define _OC4CON1_OCTSEL2_POSITION                0x0000000C
#define _OC4CON1_OCTSEL2_MASK                    0x00001000
#define _OC4CON1_OCTSEL2_LENGTH                  0x00000001

#define _OC4CON1_OCFLT0_POSITION                 0x00000004
#define _OC4CON1_OCFLT0_MASK                     0x00000010
#define _OC4CON1_OCFLT0_LENGTH                   0x00000001

#define _OC4CON1_OCFLT1_POSITION                 0x00000005
#define _OC4CON1_OCFLT1_MASK                     0x00000020
#define _OC4CON1_OCFLT1_LENGTH                   0x00000001

#define _OC4CON1_ENFLT0_POSITION                 0x00000007
#define _OC4CON1_ENFLT0_MASK                     0x00000080
#define _OC4CON1_ENFLT0_LENGTH                   0x00000001

#define _OC4CON1_ENFLT1_POSITION                 0x00000008
#define _OC4CON1_ENFLT1_MASK                     0x00000100
#define _OC4CON1_ENFLT1_LENGTH                   0x00000001

#define _OC4CON2_SYNCSEL_POSITION                0x00000000
#define _OC4CON2_SYNCSEL_MASK                    0x0000001F
#define _OC4CON2_SYNCSEL_LENGTH                  0x00000005

#define _OC4CON2_OCTRIS_POSITION                 0x00000005
#define _OC4CON2_OCTRIS_MASK                     0x00000020
#define _OC4CON2_OCTRIS_LENGTH                   0x00000001

#define _OC4CON2_TRIGSTAT_POSITION               0x00000006
#define _OC4CON2_TRIGSTAT_MASK                   0x00000040
#define _OC4CON2_TRIGSTAT_LENGTH                 0x00000001

#define _OC4CON2_OCTRIG_POSITION                 0x00000007
#define _OC4CON2_OCTRIG_MASK                     0x00000080
#define _OC4CON2_OCTRIG_LENGTH                   0x00000001

#define _OC4CON2_OC32_POSITION                   0x00000008
#define _OC4CON2_OC32_MASK                       0x00000100
#define _OC4CON2_OC32_LENGTH                     0x00000001

#define _OC4CON2_OCINV_POSITION                  0x0000000C
#define _OC4CON2_OCINV_MASK                      0x00001000
#define _OC4CON2_OCINV_LENGTH                    0x00000001

#define _OC4CON2_FLTTRIEN_POSITION               0x0000000D
#define _OC4CON2_FLTTRIEN_MASK                   0x00002000
#define _OC4CON2_FLTTRIEN_LENGTH                 0x00000001

#define _OC4CON2_FLTOUT_POSITION                 0x0000000E
#define _OC4CON2_FLTOUT_MASK                     0x00004000
#define _OC4CON2_FLTOUT_LENGTH                   0x00000001

#define _OC4CON2_FLTMD_POSITION                  0x0000000F
#define _OC4CON2_FLTMD_MASK                      0x00008000
#define _OC4CON2_FLTMD_LENGTH                    0x00000001

#define _OC4CON2_SYNCSEL0_POSITION               0x00000000
#define _OC4CON2_SYNCSEL0_MASK                   0x00000001
#define _OC4CON2_SYNCSEL0_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL1_POSITION               0x00000001
#define _OC4CON2_SYNCSEL1_MASK                   0x00000002
#define _OC4CON2_SYNCSEL1_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL2_POSITION               0x00000002
#define _OC4CON2_SYNCSEL2_MASK                   0x00000004
#define _OC4CON2_SYNCSEL2_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL3_POSITION               0x00000003
#define _OC4CON2_SYNCSEL3_MASK                   0x00000008
#define _OC4CON2_SYNCSEL3_LENGTH                 0x00000001

#define _OC4CON2_SYNCSEL4_POSITION               0x00000004
#define _OC4CON2_SYNCSEL4_MASK                   0x00000010
#define _OC4CON2_SYNCSEL4_LENGTH                 0x00000001

#define _OC4CON2_FLTMODE_POSITION                0x0000000E
#define _OC4CON2_FLTMODE_MASK                    0x00004000
#define _OC4CON2_FLTMODE_LENGTH                  0x00000001

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_C3OUT_POSITION                   0x00000002
#define _CMSTAT_C3OUT_MASK                       0x00000004
#define _CMSTAT_C3OUT_LENGTH                     0x00000001

#define _CMSTAT_C4OUT_POSITION                   0x00000003
#define _CMSTAT_C4OUT_MASK                       0x00000008
#define _CMSTAT_C4OUT_LENGTH                     0x00000001

#define _CMSTAT_C1EVT_POSITION                   0x00000008
#define _CMSTAT_C1EVT_MASK                       0x00000100
#define _CMSTAT_C1EVT_LENGTH                     0x00000001

#define _CMSTAT_C2EVT_POSITION                   0x00000009
#define _CMSTAT_C2EVT_MASK                       0x00000200
#define _CMSTAT_C2EVT_LENGTH                     0x00000001

#define _CMSTAT_C3EVT_POSITION                   0x0000000A
#define _CMSTAT_C3EVT_MASK                       0x00000400
#define _CMSTAT_C3EVT_LENGTH                     0x00000001

#define _CMSTAT_C4EVT_POSITION                   0x0000000B
#define _CMSTAT_C4EVT_MASK                       0x00000800
#define _CMSTAT_C4EVT_LENGTH                     0x00000001

#define _CMSTAT_PSIDL_POSITION                   0x0000000F
#define _CMSTAT_PSIDL_MASK                       0x00008000
#define _CMSTAT_PSIDL_LENGTH                     0x00000001

#define _CVRCON_CVR_POSITION                     0x00000000
#define _CVRCON_CVR_MASK                         0x0000000F
#define _CVRCON_CVR_LENGTH                       0x00000004

#define _CVRCON_CVRSS_POSITION                   0x00000004
#define _CVRCON_CVRSS_MASK                       0x00000010
#define _CVRCON_CVRSS_LENGTH                     0x00000001

#define _CVRCON_CVRR_POSITION                    0x00000005
#define _CVRCON_CVRR_MASK                        0x00000020
#define _CVRCON_CVRR_LENGTH                      0x00000001

#define _CVRCON_CVROE_POSITION                   0x00000006
#define _CVRCON_CVROE_MASK                       0x00000040
#define _CVRCON_CVROE_LENGTH                     0x00000001

#define _CVRCON_CVREN_POSITION                   0x00000007
#define _CVRCON_CVREN_MASK                       0x00000080
#define _CVRCON_CVREN_LENGTH                     0x00000001

#define _CVRCON_VREFSEL_POSITION                 0x0000000A
#define _CVRCON_VREFSEL_MASK                     0x00000400
#define _CVRCON_VREFSEL_LENGTH                   0x00000001

#define _CVRCON_CVR2OE_POSITION                  0x0000000E
#define _CVRCON_CVR2OE_MASK                      0x00004000
#define _CVRCON_CVR2OE_LENGTH                    0x00000001

#define _CVRCON_CVR0_POSITION                    0x00000000
#define _CVRCON_CVR0_MASK                        0x00000001
#define _CVRCON_CVR0_LENGTH                      0x00000001

#define _CVRCON_CVR1_POSITION                    0x00000001
#define _CVRCON_CVR1_MASK                        0x00000002
#define _CVRCON_CVR1_LENGTH                      0x00000001

#define _CVRCON_CVR2_POSITION                    0x00000002
#define _CVRCON_CVR2_MASK                        0x00000004
#define _CVRCON_CVR2_LENGTH                      0x00000001

#define _CVRCON_CVR3_POSITION                    0x00000003
#define _CVRCON_CVR3_MASK                        0x00000008
#define _CVRCON_CVR3_LENGTH                      0x00000001

#define _CVRCON_CVR1OE_POSITION                  0x00000006
#define _CVRCON_CVR1OE_MASK                      0x00000040
#define _CVRCON_CVR1OE_LENGTH                    0x00000001

#define _CM1CON_CCH_POSITION                     0x00000000
#define _CM1CON_CCH_MASK                         0x00000003
#define _CM1CON_CCH_LENGTH                       0x00000002

#define _CM1CON_CREF_POSITION                    0x00000004
#define _CM1CON_CREF_MASK                        0x00000010
#define _CM1CON_CREF_LENGTH                      0x00000001

#define _CM1CON_EVPOL_POSITION                   0x00000006
#define _CM1CON_EVPOL_MASK                       0x000000C0
#define _CM1CON_EVPOL_LENGTH                     0x00000002

#define _CM1CON_COUT_POSITION                    0x00000008
#define _CM1CON_COUT_MASK                        0x00000100
#define _CM1CON_COUT_LENGTH                      0x00000001

#define _CM1CON_CEVT_POSITION                    0x00000009
#define _CM1CON_CEVT_MASK                        0x00000200
#define _CM1CON_CEVT_LENGTH                      0x00000001

#define _CM1CON_OPMODE_POSITION                  0x0000000A
#define _CM1CON_OPMODE_MASK                      0x00000400
#define _CM1CON_OPMODE_LENGTH                    0x00000001

#define _CM1CON_CPOL_POSITION                    0x0000000D
#define _CM1CON_CPOL_MASK                        0x00002000
#define _CM1CON_CPOL_LENGTH                      0x00000001

#define _CM1CON_COE_POSITION                     0x0000000E
#define _CM1CON_COE_MASK                         0x00004000
#define _CM1CON_COE_LENGTH                       0x00000001

#define _CM1CON_CON_POSITION                     0x0000000F
#define _CM1CON_CON_MASK                         0x00008000
#define _CM1CON_CON_LENGTH                       0x00000001

#define _CM1CON_CCH0_POSITION                    0x00000000
#define _CM1CON_CCH0_MASK                        0x00000001
#define _CM1CON_CCH0_LENGTH                      0x00000001

#define _CM1CON_CCH1_POSITION                    0x00000001
#define _CM1CON_CCH1_MASK                        0x00000002
#define _CM1CON_CCH1_LENGTH                      0x00000001

#define _CM1CON_EVPOL0_POSITION                  0x00000006
#define _CM1CON_EVPOL0_MASK                      0x00000040
#define _CM1CON_EVPOL0_LENGTH                    0x00000001

#define _CM1CON_EVPOL1_POSITION                  0x00000007
#define _CM1CON_EVPOL1_MASK                      0x00000080
#define _CM1CON_EVPOL1_LENGTH                    0x00000001

#define _CM1CON_CEN_POSITION                     0x0000000F
#define _CM1CON_CEN_MASK                         0x00008000
#define _CM1CON_CEN_LENGTH                       0x00000001

#define _CM1MSKSRC_SELSRCA_POSITION              0x00000000
#define _CM1MSKSRC_SELSRCA_MASK                  0x0000000F
#define _CM1MSKSRC_SELSRCA_LENGTH                0x00000004

#define _CM1MSKSRC_SELSRCB_POSITION              0x00000004
#define _CM1MSKSRC_SELSRCB_MASK                  0x000000F0
#define _CM1MSKSRC_SELSRCB_LENGTH                0x00000004

#define _CM1MSKSRC_SELSRCC_POSITION              0x00000008
#define _CM1MSKSRC_SELSRCC_MASK                  0x00000F00
#define _CM1MSKSRC_SELSRCC_LENGTH                0x00000004

#define _CM1MSKSRC_SELSRCA0_POSITION             0x00000000
#define _CM1MSKSRC_SELSRCA0_MASK                 0x00000001
#define _CM1MSKSRC_SELSRCA0_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCA1_POSITION             0x00000001
#define _CM1MSKSRC_SELSRCA1_MASK                 0x00000002
#define _CM1MSKSRC_SELSRCA1_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCA2_POSITION             0x00000002
#define _CM1MSKSRC_SELSRCA2_MASK                 0x00000004
#define _CM1MSKSRC_SELSRCA2_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCA3_POSITION             0x00000003
#define _CM1MSKSRC_SELSRCA3_MASK                 0x00000008
#define _CM1MSKSRC_SELSRCA3_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCB0_POSITION             0x00000004
#define _CM1MSKSRC_SELSRCB0_MASK                 0x00000010
#define _CM1MSKSRC_SELSRCB0_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCB1_POSITION             0x00000005
#define _CM1MSKSRC_SELSRCB1_MASK                 0x00000020
#define _CM1MSKSRC_SELSRCB1_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCB2_POSITION             0x00000006
#define _CM1MSKSRC_SELSRCB2_MASK                 0x00000040
#define _CM1MSKSRC_SELSRCB2_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCB3_POSITION             0x00000007
#define _CM1MSKSRC_SELSRCB3_MASK                 0x00000080
#define _CM1MSKSRC_SELSRCB3_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCC0_POSITION             0x00000008
#define _CM1MSKSRC_SELSRCC0_MASK                 0x00000100
#define _CM1MSKSRC_SELSRCC0_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCC1_POSITION             0x00000009
#define _CM1MSKSRC_SELSRCC1_MASK                 0x00000200
#define _CM1MSKSRC_SELSRCC1_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCC2_POSITION             0x0000000A
#define _CM1MSKSRC_SELSRCC2_MASK                 0x00000400
#define _CM1MSKSRC_SELSRCC2_LENGTH               0x00000001

#define _CM1MSKSRC_SELSRCC3_POSITION             0x0000000B
#define _CM1MSKSRC_SELSRCC3_MASK                 0x00000800
#define _CM1MSKSRC_SELSRCC3_LENGTH               0x00000001

#define _CM1MSKCON_AANEN_POSITION                0x00000000
#define _CM1MSKCON_AANEN_MASK                    0x00000001
#define _CM1MSKCON_AANEN_LENGTH                  0x00000001

#define _CM1MSKCON_AAEN_POSITION                 0x00000001
#define _CM1MSKCON_AAEN_MASK                     0x00000002
#define _CM1MSKCON_AAEN_LENGTH                   0x00000001

#define _CM1MSKCON_ABNEN_POSITION                0x00000002
#define _CM1MSKCON_ABNEN_MASK                    0x00000004
#define _CM1MSKCON_ABNEN_LENGTH                  0x00000001

#define _CM1MSKCON_ABEN_POSITION                 0x00000003
#define _CM1MSKCON_ABEN_MASK                     0x00000008
#define _CM1MSKCON_ABEN_LENGTH                   0x00000001

#define _CM1MSKCON_ACNEN_POSITION                0x00000004
#define _CM1MSKCON_ACNEN_MASK                    0x00000010
#define _CM1MSKCON_ACNEN_LENGTH                  0x00000001

#define _CM1MSKCON_ACEN_POSITION                 0x00000005
#define _CM1MSKCON_ACEN_MASK                     0x00000020
#define _CM1MSKCON_ACEN_LENGTH                   0x00000001

#define _CM1MSKCON_PAGS_POSITION                 0x00000006
#define _CM1MSKCON_PAGS_MASK                     0x00000040
#define _CM1MSKCON_PAGS_LENGTH                   0x00000001

#define _CM1MSKCON_NAGS_POSITION                 0x00000007
#define _CM1MSKCON_NAGS_MASK                     0x00000080
#define _CM1MSKCON_NAGS_LENGTH                   0x00000001

#define _CM1MSKCON_OANEN_POSITION                0x00000008
#define _CM1MSKCON_OANEN_MASK                    0x00000100
#define _CM1MSKCON_OANEN_LENGTH                  0x00000001

#define _CM1MSKCON_OAEN_POSITION                 0x00000009
#define _CM1MSKCON_OAEN_MASK                     0x00000200
#define _CM1MSKCON_OAEN_LENGTH                   0x00000001

#define _CM1MSKCON_OBNEN_POSITION                0x0000000A
#define _CM1MSKCON_OBNEN_MASK                    0x00000400
#define _CM1MSKCON_OBNEN_LENGTH                  0x00000001

#define _CM1MSKCON_OBEN_POSITION                 0x0000000B
#define _CM1MSKCON_OBEN_MASK                     0x00000800
#define _CM1MSKCON_OBEN_LENGTH                   0x00000001

#define _CM1MSKCON_OCNEN_POSITION                0x0000000C
#define _CM1MSKCON_OCNEN_MASK                    0x00001000
#define _CM1MSKCON_OCNEN_LENGTH                  0x00000001

#define _CM1MSKCON_OCEN_POSITION                 0x0000000D
#define _CM1MSKCON_OCEN_MASK                     0x00002000
#define _CM1MSKCON_OCEN_LENGTH                   0x00000001

#define _CM1MSKCON_HLMS_POSITION                 0x0000000F
#define _CM1MSKCON_HLMS_MASK                     0x00008000
#define _CM1MSKCON_HLMS_LENGTH                   0x00000001

#define _CM1FLTR_CFDIV_POSITION                  0x00000000
#define _CM1FLTR_CFDIV_MASK                      0x00000007
#define _CM1FLTR_CFDIV_LENGTH                    0x00000003

#define _CM1FLTR_CFLTREN_POSITION                0x00000003
#define _CM1FLTR_CFLTREN_MASK                    0x00000008
#define _CM1FLTR_CFLTREN_LENGTH                  0x00000001

#define _CM1FLTR_CFSEL_POSITION                  0x00000004
#define _CM1FLTR_CFSEL_MASK                      0x00000070
#define _CM1FLTR_CFSEL_LENGTH                    0x00000003

#define _CM1FLTR_CFDIV0_POSITION                 0x00000000
#define _CM1FLTR_CFDIV0_MASK                     0x00000001
#define _CM1FLTR_CFDIV0_LENGTH                   0x00000001

#define _CM1FLTR_CFDIV1_POSITION                 0x00000001
#define _CM1FLTR_CFDIV1_MASK                     0x00000002
#define _CM1FLTR_CFDIV1_LENGTH                   0x00000001

#define _CM1FLTR_CFDIV2_POSITION                 0x00000002
#define _CM1FLTR_CFDIV2_MASK                     0x00000004
#define _CM1FLTR_CFDIV2_LENGTH                   0x00000001

#define _CM1FLTR_CFSEL0_POSITION                 0x00000004
#define _CM1FLTR_CFSEL0_MASK                     0x00000010
#define _CM1FLTR_CFSEL0_LENGTH                   0x00000001

#define _CM1FLTR_CFSEL1_POSITION                 0x00000005
#define _CM1FLTR_CFSEL1_MASK                     0x00000020
#define _CM1FLTR_CFSEL1_LENGTH                   0x00000001

#define _CM1FLTR_CFSEL2_POSITION                 0x00000006
#define _CM1FLTR_CFSEL2_MASK                     0x00000040
#define _CM1FLTR_CFSEL2_LENGTH                   0x00000001

#define _CM2CON_CCH_POSITION                     0x00000000
#define _CM2CON_CCH_MASK                         0x00000003
#define _CM2CON_CCH_LENGTH                       0x00000002

#define _CM2CON_CREF_POSITION                    0x00000004
#define _CM2CON_CREF_MASK                        0x00000010
#define _CM2CON_CREF_LENGTH                      0x00000001

#define _CM2CON_EVPOL_POSITION                   0x00000006
#define _CM2CON_EVPOL_MASK                       0x000000C0
#define _CM2CON_EVPOL_LENGTH                     0x00000002

#define _CM2CON_COUT_POSITION                    0x00000008
#define _CM2CON_COUT_MASK                        0x00000100
#define _CM2CON_COUT_LENGTH                      0x00000001

#define _CM2CON_CEVT_POSITION                    0x00000009
#define _CM2CON_CEVT_MASK                        0x00000200
#define _CM2CON_CEVT_LENGTH                      0x00000001

#define _CM2CON_OPMODE_POSITION                  0x0000000A
#define _CM2CON_OPMODE_MASK                      0x00000400
#define _CM2CON_OPMODE_LENGTH                    0x00000001

#define _CM2CON_CPOL_POSITION                    0x0000000D
#define _CM2CON_CPOL_MASK                        0x00002000
#define _CM2CON_CPOL_LENGTH                      0x00000001

#define _CM2CON_COE_POSITION                     0x0000000E
#define _CM2CON_COE_MASK                         0x00004000
#define _CM2CON_COE_LENGTH                       0x00000001

#define _CM2CON_CON_POSITION                     0x0000000F
#define _CM2CON_CON_MASK                         0x00008000
#define _CM2CON_CON_LENGTH                       0x00000001

#define _CM2CON_CCH0_POSITION                    0x00000000
#define _CM2CON_CCH0_MASK                        0x00000001
#define _CM2CON_CCH0_LENGTH                      0x00000001

#define _CM2CON_CCH1_POSITION                    0x00000001
#define _CM2CON_CCH1_MASK                        0x00000002
#define _CM2CON_CCH1_LENGTH                      0x00000001

#define _CM2CON_EVPOL0_POSITION                  0x00000006
#define _CM2CON_EVPOL0_MASK                      0x00000040
#define _CM2CON_EVPOL0_LENGTH                    0x00000001

#define _CM2CON_EVPOL1_POSITION                  0x00000007
#define _CM2CON_EVPOL1_MASK                      0x00000080
#define _CM2CON_EVPOL1_LENGTH                    0x00000001

#define _CM2CON_CEN_POSITION                     0x0000000F
#define _CM2CON_CEN_MASK                         0x00008000
#define _CM2CON_CEN_LENGTH                       0x00000001

#define _CM2MSKSRC_SELSRCA_POSITION              0x00000000
#define _CM2MSKSRC_SELSRCA_MASK                  0x0000000F
#define _CM2MSKSRC_SELSRCA_LENGTH                0x00000004

#define _CM2MSKSRC_SELSRCB_POSITION              0x00000004
#define _CM2MSKSRC_SELSRCB_MASK                  0x000000F0
#define _CM2MSKSRC_SELSRCB_LENGTH                0x00000004

#define _CM2MSKSRC_SELSRCC_POSITION              0x00000008
#define _CM2MSKSRC_SELSRCC_MASK                  0x00000F00
#define _CM2MSKSRC_SELSRCC_LENGTH                0x00000004

#define _CM2MSKSRC_SELSRCA0_POSITION             0x00000000
#define _CM2MSKSRC_SELSRCA0_MASK                 0x00000001
#define _CM2MSKSRC_SELSRCA0_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCA1_POSITION             0x00000001
#define _CM2MSKSRC_SELSRCA1_MASK                 0x00000002
#define _CM2MSKSRC_SELSRCA1_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCA2_POSITION             0x00000002
#define _CM2MSKSRC_SELSRCA2_MASK                 0x00000004
#define _CM2MSKSRC_SELSRCA2_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCA3_POSITION             0x00000003
#define _CM2MSKSRC_SELSRCA3_MASK                 0x00000008
#define _CM2MSKSRC_SELSRCA3_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCB0_POSITION             0x00000004
#define _CM2MSKSRC_SELSRCB0_MASK                 0x00000010
#define _CM2MSKSRC_SELSRCB0_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCB1_POSITION             0x00000005
#define _CM2MSKSRC_SELSRCB1_MASK                 0x00000020
#define _CM2MSKSRC_SELSRCB1_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCB2_POSITION             0x00000006
#define _CM2MSKSRC_SELSRCB2_MASK                 0x00000040
#define _CM2MSKSRC_SELSRCB2_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCB3_POSITION             0x00000007
#define _CM2MSKSRC_SELSRCB3_MASK                 0x00000080
#define _CM2MSKSRC_SELSRCB3_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCC0_POSITION             0x00000008
#define _CM2MSKSRC_SELSRCC0_MASK                 0x00000100
#define _CM2MSKSRC_SELSRCC0_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCC1_POSITION             0x00000009
#define _CM2MSKSRC_SELSRCC1_MASK                 0x00000200
#define _CM2MSKSRC_SELSRCC1_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCC2_POSITION             0x0000000A
#define _CM2MSKSRC_SELSRCC2_MASK                 0x00000400
#define _CM2MSKSRC_SELSRCC2_LENGTH               0x00000001

#define _CM2MSKSRC_SELSRCC3_POSITION             0x0000000B
#define _CM2MSKSRC_SELSRCC3_MASK                 0x00000800
#define _CM2MSKSRC_SELSRCC3_LENGTH               0x00000001

#define _CM2MSKCON_AANEN_POSITION                0x00000000
#define _CM2MSKCON_AANEN_MASK                    0x00000001
#define _CM2MSKCON_AANEN_LENGTH                  0x00000001

#define _CM2MSKCON_AAEN_POSITION                 0x00000001
#define _CM2MSKCON_AAEN_MASK                     0x00000002
#define _CM2MSKCON_AAEN_LENGTH                   0x00000001

#define _CM2MSKCON_ABNEN_POSITION                0x00000002
#define _CM2MSKCON_ABNEN_MASK                    0x00000004
#define _CM2MSKCON_ABNEN_LENGTH                  0x00000001

#define _CM2MSKCON_ABEN_POSITION                 0x00000003
#define _CM2MSKCON_ABEN_MASK                     0x00000008
#define _CM2MSKCON_ABEN_LENGTH                   0x00000001

#define _CM2MSKCON_ACNEN_POSITION                0x00000004
#define _CM2MSKCON_ACNEN_MASK                    0x00000010
#define _CM2MSKCON_ACNEN_LENGTH                  0x00000001

#define _CM2MSKCON_ACEN_POSITION                 0x00000005
#define _CM2MSKCON_ACEN_MASK                     0x00000020
#define _CM2MSKCON_ACEN_LENGTH                   0x00000001

#define _CM2MSKCON_PAGS_POSITION                 0x00000006
#define _CM2MSKCON_PAGS_MASK                     0x00000040
#define _CM2MSKCON_PAGS_LENGTH                   0x00000001

#define _CM2MSKCON_NAGS_POSITION                 0x00000007
#define _CM2MSKCON_NAGS_MASK                     0x00000080
#define _CM2MSKCON_NAGS_LENGTH                   0x00000001

#define _CM2MSKCON_OANEN_POSITION                0x00000008
#define _CM2MSKCON_OANEN_MASK                    0x00000100
#define _CM2MSKCON_OANEN_LENGTH                  0x00000001

#define _CM2MSKCON_OAEN_POSITION                 0x00000009
#define _CM2MSKCON_OAEN_MASK                     0x00000200
#define _CM2MSKCON_OAEN_LENGTH                   0x00000001

#define _CM2MSKCON_OBNEN_POSITION                0x0000000A
#define _CM2MSKCON_OBNEN_MASK                    0x00000400
#define _CM2MSKCON_OBNEN_LENGTH                  0x00000001

#define _CM2MSKCON_OBEN_POSITION                 0x0000000B
#define _CM2MSKCON_OBEN_MASK                     0x00000800
#define _CM2MSKCON_OBEN_LENGTH                   0x00000001

#define _CM2MSKCON_OCNEN_POSITION                0x0000000C
#define _CM2MSKCON_OCNEN_MASK                    0x00001000
#define _CM2MSKCON_OCNEN_LENGTH                  0x00000001

#define _CM2MSKCON_OCEN_POSITION                 0x0000000D
#define _CM2MSKCON_OCEN_MASK                     0x00002000
#define _CM2MSKCON_OCEN_LENGTH                   0x00000001

#define _CM2MSKCON_HLMS_POSITION                 0x0000000F
#define _CM2MSKCON_HLMS_MASK                     0x00008000
#define _CM2MSKCON_HLMS_LENGTH                   0x00000001

#define _CM2FLTR_CFDIV_POSITION                  0x00000000
#define _CM2FLTR_CFDIV_MASK                      0x00000007
#define _CM2FLTR_CFDIV_LENGTH                    0x00000003

#define _CM2FLTR_CFLTREN_POSITION                0x00000003
#define _CM2FLTR_CFLTREN_MASK                    0x00000008
#define _CM2FLTR_CFLTREN_LENGTH                  0x00000001

#define _CM2FLTR_CFSEL_POSITION                  0x00000004
#define _CM2FLTR_CFSEL_MASK                      0x00000070
#define _CM2FLTR_CFSEL_LENGTH                    0x00000003

#define _CM2FLTR_CFDIV0_POSITION                 0x00000000
#define _CM2FLTR_CFDIV0_MASK                     0x00000001
#define _CM2FLTR_CFDIV0_LENGTH                   0x00000001

#define _CM2FLTR_CFDIV1_POSITION                 0x00000001
#define _CM2FLTR_CFDIV1_MASK                     0x00000002
#define _CM2FLTR_CFDIV1_LENGTH                   0x00000001

#define _CM2FLTR_CFDIV2_POSITION                 0x00000002
#define _CM2FLTR_CFDIV2_MASK                     0x00000004
#define _CM2FLTR_CFDIV2_LENGTH                   0x00000001

#define _CM2FLTR_CFSEL0_POSITION                 0x00000004
#define _CM2FLTR_CFSEL0_MASK                     0x00000010
#define _CM2FLTR_CFSEL0_LENGTH                   0x00000001

#define _CM2FLTR_CFSEL1_POSITION                 0x00000005
#define _CM2FLTR_CFSEL1_MASK                     0x00000020
#define _CM2FLTR_CFSEL1_LENGTH                   0x00000001

#define _CM2FLTR_CFSEL2_POSITION                 0x00000006
#define _CM2FLTR_CFSEL2_MASK                     0x00000040
#define _CM2FLTR_CFSEL2_LENGTH                   0x00000001

#define _CM3CON_CCH_POSITION                     0x00000000
#define _CM3CON_CCH_MASK                         0x00000003
#define _CM3CON_CCH_LENGTH                       0x00000002

#define _CM3CON_CREF_POSITION                    0x00000004
#define _CM3CON_CREF_MASK                        0x00000010
#define _CM3CON_CREF_LENGTH                      0x00000001

#define _CM3CON_EVPOL_POSITION                   0x00000006
#define _CM3CON_EVPOL_MASK                       0x000000C0
#define _CM3CON_EVPOL_LENGTH                     0x00000002

#define _CM3CON_COUT_POSITION                    0x00000008
#define _CM3CON_COUT_MASK                        0x00000100
#define _CM3CON_COUT_LENGTH                      0x00000001

#define _CM3CON_CEVT_POSITION                    0x00000009
#define _CM3CON_CEVT_MASK                        0x00000200
#define _CM3CON_CEVT_LENGTH                      0x00000001

#define _CM3CON_OPMODE_POSITION                  0x0000000A
#define _CM3CON_OPMODE_MASK                      0x00000400
#define _CM3CON_OPMODE_LENGTH                    0x00000001

#define _CM3CON_CPOL_POSITION                    0x0000000D
#define _CM3CON_CPOL_MASK                        0x00002000
#define _CM3CON_CPOL_LENGTH                      0x00000001

#define _CM3CON_COE_POSITION                     0x0000000E
#define _CM3CON_COE_MASK                         0x00004000
#define _CM3CON_COE_LENGTH                       0x00000001

#define _CM3CON_CON_POSITION                     0x0000000F
#define _CM3CON_CON_MASK                         0x00008000
#define _CM3CON_CON_LENGTH                       0x00000001

#define _CM3CON_CCH0_POSITION                    0x00000000
#define _CM3CON_CCH0_MASK                        0x00000001
#define _CM3CON_CCH0_LENGTH                      0x00000001

#define _CM3CON_CCH1_POSITION                    0x00000001
#define _CM3CON_CCH1_MASK                        0x00000002
#define _CM3CON_CCH1_LENGTH                      0x00000001

#define _CM3CON_EVPOL0_POSITION                  0x00000006
#define _CM3CON_EVPOL0_MASK                      0x00000040
#define _CM3CON_EVPOL0_LENGTH                    0x00000001

#define _CM3CON_EVPOL1_POSITION                  0x00000007
#define _CM3CON_EVPOL1_MASK                      0x00000080
#define _CM3CON_EVPOL1_LENGTH                    0x00000001

#define _CM3CON_CEN_POSITION                     0x0000000F
#define _CM3CON_CEN_MASK                         0x00008000
#define _CM3CON_CEN_LENGTH                       0x00000001

#define _CM3MSKSRC_SELSRCA_POSITION              0x00000000
#define _CM3MSKSRC_SELSRCA_MASK                  0x0000000F
#define _CM3MSKSRC_SELSRCA_LENGTH                0x00000004

#define _CM3MSKSRC_SELSRCB_POSITION              0x00000004
#define _CM3MSKSRC_SELSRCB_MASK                  0x000000F0
#define _CM3MSKSRC_SELSRCB_LENGTH                0x00000004

#define _CM3MSKSRC_SELSRCC_POSITION              0x00000008
#define _CM3MSKSRC_SELSRCC_MASK                  0x00000F00
#define _CM3MSKSRC_SELSRCC_LENGTH                0x00000004

#define _CM3MSKSRC_SELSRCA0_POSITION             0x00000000
#define _CM3MSKSRC_SELSRCA0_MASK                 0x00000001
#define _CM3MSKSRC_SELSRCA0_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCA1_POSITION             0x00000001
#define _CM3MSKSRC_SELSRCA1_MASK                 0x00000002
#define _CM3MSKSRC_SELSRCA1_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCA2_POSITION             0x00000002
#define _CM3MSKSRC_SELSRCA2_MASK                 0x00000004
#define _CM3MSKSRC_SELSRCA2_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCA3_POSITION             0x00000003
#define _CM3MSKSRC_SELSRCA3_MASK                 0x00000008
#define _CM3MSKSRC_SELSRCA3_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCB0_POSITION             0x00000004
#define _CM3MSKSRC_SELSRCB0_MASK                 0x00000010
#define _CM3MSKSRC_SELSRCB0_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCB1_POSITION             0x00000005
#define _CM3MSKSRC_SELSRCB1_MASK                 0x00000020
#define _CM3MSKSRC_SELSRCB1_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCB2_POSITION             0x00000006
#define _CM3MSKSRC_SELSRCB2_MASK                 0x00000040
#define _CM3MSKSRC_SELSRCB2_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCB3_POSITION             0x00000007
#define _CM3MSKSRC_SELSRCB3_MASK                 0x00000080
#define _CM3MSKSRC_SELSRCB3_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCC0_POSITION             0x00000008
#define _CM3MSKSRC_SELSRCC0_MASK                 0x00000100
#define _CM3MSKSRC_SELSRCC0_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCC1_POSITION             0x00000009
#define _CM3MSKSRC_SELSRCC1_MASK                 0x00000200
#define _CM3MSKSRC_SELSRCC1_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCC2_POSITION             0x0000000A
#define _CM3MSKSRC_SELSRCC2_MASK                 0x00000400
#define _CM3MSKSRC_SELSRCC2_LENGTH               0x00000001

#define _CM3MSKSRC_SELSRCC3_POSITION             0x0000000B
#define _CM3MSKSRC_SELSRCC3_MASK                 0x00000800
#define _CM3MSKSRC_SELSRCC3_LENGTH               0x00000001

#define _CM3MSKCON_AANEN_POSITION                0x00000000
#define _CM3MSKCON_AANEN_MASK                    0x00000001
#define _CM3MSKCON_AANEN_LENGTH                  0x00000001

#define _CM3MSKCON_AAEN_POSITION                 0x00000001
#define _CM3MSKCON_AAEN_MASK                     0x00000002
#define _CM3MSKCON_AAEN_LENGTH                   0x00000001

#define _CM3MSKCON_ABNEN_POSITION                0x00000002
#define _CM3MSKCON_ABNEN_MASK                    0x00000004
#define _CM3MSKCON_ABNEN_LENGTH                  0x00000001

#define _CM3MSKCON_ABEN_POSITION                 0x00000003
#define _CM3MSKCON_ABEN_MASK                     0x00000008
#define _CM3MSKCON_ABEN_LENGTH                   0x00000001

#define _CM3MSKCON_ACNEN_POSITION                0x00000004
#define _CM3MSKCON_ACNEN_MASK                    0x00000010
#define _CM3MSKCON_ACNEN_LENGTH                  0x00000001

#define _CM3MSKCON_ACEN_POSITION                 0x00000005
#define _CM3MSKCON_ACEN_MASK                     0x00000020
#define _CM3MSKCON_ACEN_LENGTH                   0x00000001

#define _CM3MSKCON_PAGS_POSITION                 0x00000006
#define _CM3MSKCON_PAGS_MASK                     0x00000040
#define _CM3MSKCON_PAGS_LENGTH                   0x00000001

#define _CM3MSKCON_NAGS_POSITION                 0x00000007
#define _CM3MSKCON_NAGS_MASK                     0x00000080
#define _CM3MSKCON_NAGS_LENGTH                   0x00000001

#define _CM3MSKCON_OANEN_POSITION                0x00000008
#define _CM3MSKCON_OANEN_MASK                    0x00000100
#define _CM3MSKCON_OANEN_LENGTH                  0x00000001

#define _CM3MSKCON_OAEN_POSITION                 0x00000009
#define _CM3MSKCON_OAEN_MASK                     0x00000200
#define _CM3MSKCON_OAEN_LENGTH                   0x00000001

#define _CM3MSKCON_OBNEN_POSITION                0x0000000A
#define _CM3MSKCON_OBNEN_MASK                    0x00000400
#define _CM3MSKCON_OBNEN_LENGTH                  0x00000001

#define _CM3MSKCON_OBEN_POSITION                 0x0000000B
#define _CM3MSKCON_OBEN_MASK                     0x00000800
#define _CM3MSKCON_OBEN_LENGTH                   0x00000001

#define _CM3MSKCON_OCNEN_POSITION                0x0000000C
#define _CM3MSKCON_OCNEN_MASK                    0x00001000
#define _CM3MSKCON_OCNEN_LENGTH                  0x00000001

#define _CM3MSKCON_OCEN_POSITION                 0x0000000D
#define _CM3MSKCON_OCEN_MASK                     0x00002000
#define _CM3MSKCON_OCEN_LENGTH                   0x00000001

#define _CM3MSKCON_HLMS_POSITION                 0x0000000F
#define _CM3MSKCON_HLMS_MASK                     0x00008000
#define _CM3MSKCON_HLMS_LENGTH                   0x00000001

#define _CM3FLTR_CFDIV_POSITION                  0x00000000
#define _CM3FLTR_CFDIV_MASK                      0x00000007
#define _CM3FLTR_CFDIV_LENGTH                    0x00000003

#define _CM3FLTR_CFLTREN_POSITION                0x00000003
#define _CM3FLTR_CFLTREN_MASK                    0x00000008
#define _CM3FLTR_CFLTREN_LENGTH                  0x00000001

#define _CM3FLTR_CFSEL_POSITION                  0x00000004
#define _CM3FLTR_CFSEL_MASK                      0x00000070
#define _CM3FLTR_CFSEL_LENGTH                    0x00000003

#define _CM3FLTR_CFDIV0_POSITION                 0x00000000
#define _CM3FLTR_CFDIV0_MASK                     0x00000001
#define _CM3FLTR_CFDIV0_LENGTH                   0x00000001

#define _CM3FLTR_CFDIV1_POSITION                 0x00000001
#define _CM3FLTR_CFDIV1_MASK                     0x00000002
#define _CM3FLTR_CFDIV1_LENGTH                   0x00000001

#define _CM3FLTR_CFDIV2_POSITION                 0x00000002
#define _CM3FLTR_CFDIV2_MASK                     0x00000004
#define _CM3FLTR_CFDIV2_LENGTH                   0x00000001

#define _CM3FLTR_CFSEL0_POSITION                 0x00000004
#define _CM3FLTR_CFSEL0_MASK                     0x00000010
#define _CM3FLTR_CFSEL0_LENGTH                   0x00000001

#define _CM3FLTR_CFSEL1_POSITION                 0x00000005
#define _CM3FLTR_CFSEL1_MASK                     0x00000020
#define _CM3FLTR_CFSEL1_LENGTH                   0x00000001

#define _CM3FLTR_CFSEL2_POSITION                 0x00000006
#define _CM3FLTR_CFSEL2_MASK                     0x00000040
#define _CM3FLTR_CFSEL2_LENGTH                   0x00000001

#define _CM4CON_CCH_POSITION                     0x00000000
#define _CM4CON_CCH_MASK                         0x00000003
#define _CM4CON_CCH_LENGTH                       0x00000002

#define _CM4CON_CREF_POSITION                    0x00000004
#define _CM4CON_CREF_MASK                        0x00000010
#define _CM4CON_CREF_LENGTH                      0x00000001

#define _CM4CON_EVPOL_POSITION                   0x00000006
#define _CM4CON_EVPOL_MASK                       0x000000C0
#define _CM4CON_EVPOL_LENGTH                     0x00000002

#define _CM4CON_COUT_POSITION                    0x00000008
#define _CM4CON_COUT_MASK                        0x00000100
#define _CM4CON_COUT_LENGTH                      0x00000001

#define _CM4CON_CEVT_POSITION                    0x00000009
#define _CM4CON_CEVT_MASK                        0x00000200
#define _CM4CON_CEVT_LENGTH                      0x00000001

#define _CM4CON_CPOL_POSITION                    0x0000000D
#define _CM4CON_CPOL_MASK                        0x00002000
#define _CM4CON_CPOL_LENGTH                      0x00000001

#define _CM4CON_COE_POSITION                     0x0000000E
#define _CM4CON_COE_MASK                         0x00004000
#define _CM4CON_COE_LENGTH                       0x00000001

#define _CM4CON_CON_POSITION                     0x0000000F
#define _CM4CON_CON_MASK                         0x00008000
#define _CM4CON_CON_LENGTH                       0x00000001

#define _CM4CON_CCH0_POSITION                    0x00000000
#define _CM4CON_CCH0_MASK                        0x00000001
#define _CM4CON_CCH0_LENGTH                      0x00000001

#define _CM4CON_CCH1_POSITION                    0x00000001
#define _CM4CON_CCH1_MASK                        0x00000002
#define _CM4CON_CCH1_LENGTH                      0x00000001

#define _CM4CON_EVPOL0_POSITION                  0x00000006
#define _CM4CON_EVPOL0_MASK                      0x00000040
#define _CM4CON_EVPOL0_LENGTH                    0x00000001

#define _CM4CON_EVPOL1_POSITION                  0x00000007
#define _CM4CON_EVPOL1_MASK                      0x00000080
#define _CM4CON_EVPOL1_LENGTH                    0x00000001

#define _CM4CON_CEN_POSITION                     0x0000000F
#define _CM4CON_CEN_MASK                         0x00008000
#define _CM4CON_CEN_LENGTH                       0x00000001

#define _CM4MSKSRC_SELSRCA_POSITION              0x00000000
#define _CM4MSKSRC_SELSRCA_MASK                  0x0000000F
#define _CM4MSKSRC_SELSRCA_LENGTH                0x00000004

#define _CM4MSKSRC_SELSRCB_POSITION              0x00000004
#define _CM4MSKSRC_SELSRCB_MASK                  0x000000F0
#define _CM4MSKSRC_SELSRCB_LENGTH                0x00000004

#define _CM4MSKSRC_SELSRCC_POSITION              0x00000008
#define _CM4MSKSRC_SELSRCC_MASK                  0x00000F00
#define _CM4MSKSRC_SELSRCC_LENGTH                0x00000004

#define _CM4MSKSRC_SELSRCA0_POSITION             0x00000000
#define _CM4MSKSRC_SELSRCA0_MASK                 0x00000001
#define _CM4MSKSRC_SELSRCA0_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCA1_POSITION             0x00000001
#define _CM4MSKSRC_SELSRCA1_MASK                 0x00000002
#define _CM4MSKSRC_SELSRCA1_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCA2_POSITION             0x00000002
#define _CM4MSKSRC_SELSRCA2_MASK                 0x00000004
#define _CM4MSKSRC_SELSRCA2_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCA3_POSITION             0x00000003
#define _CM4MSKSRC_SELSRCA3_MASK                 0x00000008
#define _CM4MSKSRC_SELSRCA3_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCB0_POSITION             0x00000004
#define _CM4MSKSRC_SELSRCB0_MASK                 0x00000010
#define _CM4MSKSRC_SELSRCB0_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCB1_POSITION             0x00000005
#define _CM4MSKSRC_SELSRCB1_MASK                 0x00000020
#define _CM4MSKSRC_SELSRCB1_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCB2_POSITION             0x00000006
#define _CM4MSKSRC_SELSRCB2_MASK                 0x00000040
#define _CM4MSKSRC_SELSRCB2_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCB3_POSITION             0x00000007
#define _CM4MSKSRC_SELSRCB3_MASK                 0x00000080
#define _CM4MSKSRC_SELSRCB3_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCC0_POSITION             0x00000008
#define _CM4MSKSRC_SELSRCC0_MASK                 0x00000100
#define _CM4MSKSRC_SELSRCC0_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCC1_POSITION             0x00000009
#define _CM4MSKSRC_SELSRCC1_MASK                 0x00000200
#define _CM4MSKSRC_SELSRCC1_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCC2_POSITION             0x0000000A
#define _CM4MSKSRC_SELSRCC2_MASK                 0x00000400
#define _CM4MSKSRC_SELSRCC2_LENGTH               0x00000001

#define _CM4MSKSRC_SELSRCC3_POSITION             0x0000000B
#define _CM4MSKSRC_SELSRCC3_MASK                 0x00000800
#define _CM4MSKSRC_SELSRCC3_LENGTH               0x00000001

#define _CM4MSKCON_AANEN_POSITION                0x00000000
#define _CM4MSKCON_AANEN_MASK                    0x00000001
#define _CM4MSKCON_AANEN_LENGTH                  0x00000001

#define _CM4MSKCON_AAEN_POSITION                 0x00000001
#define _CM4MSKCON_AAEN_MASK                     0x00000002
#define _CM4MSKCON_AAEN_LENGTH                   0x00000001

#define _CM4MSKCON_ABNEN_POSITION                0x00000002
#define _CM4MSKCON_ABNEN_MASK                    0x00000004
#define _CM4MSKCON_ABNEN_LENGTH                  0x00000001

#define _CM4MSKCON_ABEN_POSITION                 0x00000003
#define _CM4MSKCON_ABEN_MASK                     0x00000008
#define _CM4MSKCON_ABEN_LENGTH                   0x00000001

#define _CM4MSKCON_ACNEN_POSITION                0x00000004
#define _CM4MSKCON_ACNEN_MASK                    0x00000010
#define _CM4MSKCON_ACNEN_LENGTH                  0x00000001

#define _CM4MSKCON_ACEN_POSITION                 0x00000005
#define _CM4MSKCON_ACEN_MASK                     0x00000020
#define _CM4MSKCON_ACEN_LENGTH                   0x00000001

#define _CM4MSKCON_PAGS_POSITION                 0x00000006
#define _CM4MSKCON_PAGS_MASK                     0x00000040
#define _CM4MSKCON_PAGS_LENGTH                   0x00000001

#define _CM4MSKCON_NAGS_POSITION                 0x00000007
#define _CM4MSKCON_NAGS_MASK                     0x00000080
#define _CM4MSKCON_NAGS_LENGTH                   0x00000001

#define _CM4MSKCON_OANEN_POSITION                0x00000008
#define _CM4MSKCON_OANEN_MASK                    0x00000100
#define _CM4MSKCON_OANEN_LENGTH                  0x00000001

#define _CM4MSKCON_OAEN_POSITION                 0x00000009
#define _CM4MSKCON_OAEN_MASK                     0x00000200
#define _CM4MSKCON_OAEN_LENGTH                   0x00000001

#define _CM4MSKCON_OBNEN_POSITION                0x0000000A
#define _CM4MSKCON_OBNEN_MASK                    0x00000400
#define _CM4MSKCON_OBNEN_LENGTH                  0x00000001

#define _CM4MSKCON_OBEN_POSITION                 0x0000000B
#define _CM4MSKCON_OBEN_MASK                     0x00000800
#define _CM4MSKCON_OBEN_LENGTH                   0x00000001

#define _CM4MSKCON_OCNEN_POSITION                0x0000000C
#define _CM4MSKCON_OCNEN_MASK                    0x00001000
#define _CM4MSKCON_OCNEN_LENGTH                  0x00000001

#define _CM4MSKCON_OCEN_POSITION                 0x0000000D
#define _CM4MSKCON_OCEN_MASK                     0x00002000
#define _CM4MSKCON_OCEN_LENGTH                   0x00000001

#define _CM4MSKCON_HLMS_POSITION                 0x0000000F
#define _CM4MSKCON_HLMS_MASK                     0x00008000
#define _CM4MSKCON_HLMS_LENGTH                   0x00000001

#define _CM4FLTR_CFDIV_POSITION                  0x00000000
#define _CM4FLTR_CFDIV_MASK                      0x00000007
#define _CM4FLTR_CFDIV_LENGTH                    0x00000003

#define _CM4FLTR_CFLTREN_POSITION                0x00000003
#define _CM4FLTR_CFLTREN_MASK                    0x00000008
#define _CM4FLTR_CFLTREN_LENGTH                  0x00000001

#define _CM4FLTR_CFSEL_POSITION                  0x00000004
#define _CM4FLTR_CFSEL_MASK                      0x00000070
#define _CM4FLTR_CFSEL_LENGTH                    0x00000003

#define _CM4FLTR_CFDIV0_POSITION                 0x00000000
#define _CM4FLTR_CFDIV0_MASK                     0x00000001
#define _CM4FLTR_CFDIV0_LENGTH                   0x00000001

#define _CM4FLTR_CFDIV1_POSITION                 0x00000001
#define _CM4FLTR_CFDIV1_MASK                     0x00000002
#define _CM4FLTR_CFDIV1_LENGTH                   0x00000001

#define _CM4FLTR_CFDIV2_POSITION                 0x00000002
#define _CM4FLTR_CFDIV2_MASK                     0x00000004
#define _CM4FLTR_CFDIV2_LENGTH                   0x00000001

#define _CM4FLTR_CFSEL0_POSITION                 0x00000004
#define _CM4FLTR_CFSEL0_MASK                     0x00000010
#define _CM4FLTR_CFSEL0_LENGTH                   0x00000001

#define _CM4FLTR_CFSEL1_POSITION                 0x00000005
#define _CM4FLTR_CFSEL1_MASK                     0x00000020
#define _CM4FLTR_CFSEL1_LENGTH                   0x00000001

#define _CM4FLTR_CFSEL2_POSITION                 0x00000006
#define _CM4FLTR_CFSEL2_MASK                     0x00000040
#define _CM4FLTR_CFSEL2_LENGTH                   0x00000001

#define _PTGCST_PTGITM_POSITION                  0x00000000
#define _PTGCST_PTGITM_MASK                      0x00000003
#define _PTGCST_PTGITM_LENGTH                    0x00000002

#define _PTGCST_PTGWTO_POSITION                  0x00000006
#define _PTGCST_PTGWTO_MASK                      0x00000040
#define _PTGCST_PTGWTO_LENGTH                    0x00000001

#define _PTGCST_PTGSTRT_POSITION                 0x00000007
#define _PTGCST_PTGSTRT_MASK                     0x00000080
#define _PTGCST_PTGSTRT_LENGTH                   0x00000001

#define _PTGCST_PTGIVIS_POSITION                 0x00000008
#define _PTGCST_PTGIVIS_MASK                     0x00000100
#define _PTGCST_PTGIVIS_LENGTH                   0x00000001

#define _PTGCST_PTGSSEN_POSITION                 0x00000009
#define _PTGCST_PTGSSEN_MASK                     0x00000200
#define _PTGCST_PTGSSEN_LENGTH                   0x00000001

#define _PTGCST_PTGSWT_POSITION                  0x0000000A
#define _PTGCST_PTGSWT_MASK                      0x00000400
#define _PTGCST_PTGSWT_LENGTH                    0x00000001

#define _PTGCST_PTGTOGL_POSITION                 0x0000000C
#define _PTGCST_PTGTOGL_MASK                     0x00001000
#define _PTGCST_PTGTOGL_LENGTH                   0x00000001

#define _PTGCST_PTGSIDL_POSITION                 0x0000000D
#define _PTGCST_PTGSIDL_MASK                     0x00002000
#define _PTGCST_PTGSIDL_LENGTH                   0x00000001

#define _PTGCST_PTGEN_POSITION                   0x0000000F
#define _PTGCST_PTGEN_MASK                       0x00008000
#define _PTGCST_PTGEN_LENGTH                     0x00000001

#define _PTGCON_PTGWDT_POSITION                  0x00000000
#define _PTGCON_PTGWDT_MASK                      0x00000007
#define _PTGCON_PTGWDT_LENGTH                    0x00000003

#define _PTGCON_PTGPWD_POSITION                  0x00000004
#define _PTGCON_PTGPWD_MASK                      0x000000F0
#define _PTGCON_PTGPWD_LENGTH                    0x00000004

#define _PTGCON_PTGDIV_POSITION                  0x00000008
#define _PTGCON_PTGDIV_MASK                      0x00001F00
#define _PTGCON_PTGDIV_LENGTH                    0x00000005

#define _PTGCON_PTGCLK_POSITION                  0x0000000D
#define _PTGCON_PTGCLK_MASK                      0x0000E000
#define _PTGCON_PTGCLK_LENGTH                    0x00000003

#define _PTGBTE_OC1TSS_POSITION                  0x00000000
#define _PTGBTE_OC1TSS_MASK                      0x00000001
#define _PTGBTE_OC1TSS_LENGTH                    0x00000001

#define _PTGBTE_OC2TSS_POSITION                  0x00000001
#define _PTGBTE_OC2TSS_MASK                      0x00000002
#define _PTGBTE_OC2TSS_LENGTH                    0x00000001

#define _PTGBTE_OC3TSS_POSITION                  0x00000002
#define _PTGBTE_OC3TSS_MASK                      0x00000004
#define _PTGBTE_OC3TSS_LENGTH                    0x00000001

#define _PTGBTE_OC4TSS_POSITION                  0x00000003
#define _PTGBTE_OC4TSS_MASK                      0x00000008
#define _PTGBTE_OC4TSS_LENGTH                    0x00000001

#define _PTGBTE_OC1CS_POSITION                   0x00000004
#define _PTGBTE_OC1CS_MASK                       0x00000010
#define _PTGBTE_OC1CS_LENGTH                     0x00000001

#define _PTGBTE_OC2CS_POSITION                   0x00000005
#define _PTGBTE_OC2CS_MASK                       0x00000020
#define _PTGBTE_OC2CS_LENGTH                     0x00000001

#define _PTGBTE_OC3CS_POSITION                   0x00000006
#define _PTGBTE_OC3CS_MASK                       0x00000040
#define _PTGBTE_OC3CS_LENGTH                     0x00000001

#define _PTGBTE_OC4CS_POSITION                   0x00000007
#define _PTGBTE_OC4CS_MASK                       0x00000080
#define _PTGBTE_OC4CS_LENGTH                     0x00000001

#define _PTGBTE_IC1TSS_POSITION                  0x00000008
#define _PTGBTE_IC1TSS_MASK                      0x00000100
#define _PTGBTE_IC1TSS_LENGTH                    0x00000001

#define _PTGBTE_IC2TSS_POSITION                  0x00000009
#define _PTGBTE_IC2TSS_MASK                      0x00000200
#define _PTGBTE_IC2TSS_LENGTH                    0x00000001

#define _PTGBTE_IC3TSS_POSITION                  0x0000000A
#define _PTGBTE_IC3TSS_MASK                      0x00000400
#define _PTGBTE_IC3TSS_LENGTH                    0x00000001

#define _PTGBTE_IC4TSS_POSITION                  0x0000000B
#define _PTGBTE_IC4TSS_MASK                      0x00000800
#define _PTGBTE_IC4TSS_LENGTH                    0x00000001

#define _PTGBTE_ADCTS1_POSITION                  0x0000000C
#define _PTGBTE_ADCTS1_MASK                      0x00001000
#define _PTGBTE_ADCTS1_LENGTH                    0x00000001

#define _PTGBTE_ADCTS2_POSITION                  0x0000000D
#define _PTGBTE_ADCTS2_MASK                      0x00002000
#define _PTGBTE_ADCTS2_LENGTH                    0x00000001

#define _PTGBTE_ADCTS3_POSITION                  0x0000000E
#define _PTGBTE_ADCTS3_MASK                      0x00004000
#define _PTGBTE_ADCTS3_LENGTH                    0x00000001

#define _PTGBTE_ADCTS4_POSITION                  0x0000000F
#define _PTGBTE_ADCTS4_MASK                      0x00008000
#define _PTGBTE_ADCTS4_LENGTH                    0x00000001

#define _PTGBTE_PTGBTE_POSITION                  0x00000000
#define _PTGBTE_PTGBTE_MASK                      0x0000FFFF
#define _PTGBTE_PTGBTE_LENGTH                    0x00000010

#define _PTGQPTR_PTGQPTR_POSITION                0x00000000
#define _PTGQPTR_PTGQPTR_MASK                    0x0000001F
#define _PTGQPTR_PTGQPTR_LENGTH                  0x00000005

#define _PTGQUE0_STEP0_POSITION                  0x00000000
#define _PTGQUE0_STEP0_MASK                      0x000000FF
#define _PTGQUE0_STEP0_LENGTH                    0x00000008

#define _PTGQUE0_STEP1_POSITION                  0x00000008
#define _PTGQUE0_STEP1_MASK                      0x0000FF00
#define _PTGQUE0_STEP1_LENGTH                    0x00000008

#define _PTGQUE1_STEP2_POSITION                  0x00000000
#define _PTGQUE1_STEP2_MASK                      0x000000FF
#define _PTGQUE1_STEP2_LENGTH                    0x00000008

#define _PTGQUE1_STEP3_POSITION                  0x00000008
#define _PTGQUE1_STEP3_MASK                      0x0000FF00
#define _PTGQUE1_STEP3_LENGTH                    0x00000008

#define _PTGQUE2_STEP4_POSITION                  0x00000000
#define _PTGQUE2_STEP4_MASK                      0x000000FF
#define _PTGQUE2_STEP4_LENGTH                    0x00000008

#define _PTGQUE2_STEP5_POSITION                  0x00000008
#define _PTGQUE2_STEP5_MASK                      0x0000FF00
#define _PTGQUE2_STEP5_LENGTH                    0x00000008

#define _PTGQUE3_STEP6_POSITION                  0x00000000
#define _PTGQUE3_STEP6_MASK                      0x000000FF
#define _PTGQUE3_STEP6_LENGTH                    0x00000008

#define _PTGQUE3_STEP7_POSITION                  0x00000008
#define _PTGQUE3_STEP7_MASK                      0x0000FF00
#define _PTGQUE3_STEP7_LENGTH                    0x00000008

#define _PTGQUE4_STEP8_POSITION                  0x00000000
#define _PTGQUE4_STEP8_MASK                      0x000000FF
#define _PTGQUE4_STEP8_LENGTH                    0x00000008

#define _PTGQUE4_STEP9_POSITION                  0x00000008
#define _PTGQUE4_STEP9_MASK                      0x0000FF00
#define _PTGQUE4_STEP9_LENGTH                    0x00000008

#define _PTGQUE5_STEP10_POSITION                 0x00000000
#define _PTGQUE5_STEP10_MASK                     0x000000FF
#define _PTGQUE5_STEP10_LENGTH                   0x00000008

#define _PTGQUE5_STEP11_POSITION                 0x00000008
#define _PTGQUE5_STEP11_MASK                     0x0000FF00
#define _PTGQUE5_STEP11_LENGTH                   0x00000008

#define _PTGQUE6_STEP12_POSITION                 0x00000000
#define _PTGQUE6_STEP12_MASK                     0x000000FF
#define _PTGQUE6_STEP12_LENGTH                   0x00000008

#define _PTGQUE6_STEP13_POSITION                 0x00000008
#define _PTGQUE6_STEP13_MASK                     0x0000FF00
#define _PTGQUE6_STEP13_LENGTH                   0x00000008

#define _PTGQUE7_STEP14_POSITION                 0x00000000
#define _PTGQUE7_STEP14_MASK                     0x000000FF
#define _PTGQUE7_STEP14_LENGTH                   0x00000008

#define _PTGQUE7_STEP15_POSITION                 0x00000008
#define _PTGQUE7_STEP15_MASK                     0x0000FF00
#define _PTGQUE7_STEP15_LENGTH                   0x00000008

#define _DMA0CON_MODE_POSITION                   0x00000000
#define _DMA0CON_MODE_MASK                       0x00000003
#define _DMA0CON_MODE_LENGTH                     0x00000002

#define _DMA0CON_AMODE_POSITION                  0x00000004
#define _DMA0CON_AMODE_MASK                      0x00000030
#define _DMA0CON_AMODE_LENGTH                    0x00000002

#define _DMA0CON_NULLW_POSITION                  0x0000000B
#define _DMA0CON_NULLW_MASK                      0x00000800
#define _DMA0CON_NULLW_LENGTH                    0x00000001

#define _DMA0CON_HALF_POSITION                   0x0000000C
#define _DMA0CON_HALF_MASK                       0x00001000
#define _DMA0CON_HALF_LENGTH                     0x00000001

#define _DMA0CON_DIR_POSITION                    0x0000000D
#define _DMA0CON_DIR_MASK                        0x00002000
#define _DMA0CON_DIR_LENGTH                      0x00000001

#define _DMA0CON_SIZE_POSITION                   0x0000000E
#define _DMA0CON_SIZE_MASK                       0x00004000
#define _DMA0CON_SIZE_LENGTH                     0x00000001

#define _DMA0CON_CHEN_POSITION                   0x0000000F
#define _DMA0CON_CHEN_MASK                       0x00008000
#define _DMA0CON_CHEN_LENGTH                     0x00000001

#define _DMA0CON_MODE0_POSITION                  0x00000000
#define _DMA0CON_MODE0_MASK                      0x00000001
#define _DMA0CON_MODE0_LENGTH                    0x00000001

#define _DMA0CON_MODE1_POSITION                  0x00000001
#define _DMA0CON_MODE1_MASK                      0x00000002
#define _DMA0CON_MODE1_LENGTH                    0x00000001

#define _DMA0CON_AMODE0_POSITION                 0x00000004
#define _DMA0CON_AMODE0_MASK                     0x00000010
#define _DMA0CON_AMODE0_LENGTH                   0x00000001

#define _DMA0CON_AMODE1_POSITION                 0x00000005
#define _DMA0CON_AMODE1_MASK                     0x00000020
#define _DMA0CON_AMODE1_LENGTH                   0x00000001

#define _DMA0REQ_IRQSEL_POSITION                 0x00000000
#define _DMA0REQ_IRQSEL_MASK                     0x000000FF
#define _DMA0REQ_IRQSEL_LENGTH                   0x00000008

#define _DMA0REQ_FORCE_POSITION                  0x0000000F
#define _DMA0REQ_FORCE_MASK                      0x00008000
#define _DMA0REQ_FORCE_LENGTH                    0x00000001

#define _DMA0REQ_IRQSEL0_POSITION                0x00000000
#define _DMA0REQ_IRQSEL0_MASK                    0x00000001
#define _DMA0REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL1_POSITION                0x00000001
#define _DMA0REQ_IRQSEL1_MASK                    0x00000002
#define _DMA0REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL2_POSITION                0x00000002
#define _DMA0REQ_IRQSEL2_MASK                    0x00000004
#define _DMA0REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL3_POSITION                0x00000003
#define _DMA0REQ_IRQSEL3_MASK                    0x00000008
#define _DMA0REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL4_POSITION                0x00000004
#define _DMA0REQ_IRQSEL4_MASK                    0x00000010
#define _DMA0REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL5_POSITION                0x00000005
#define _DMA0REQ_IRQSEL5_MASK                    0x00000020
#define _DMA0REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL6_POSITION                0x00000006
#define _DMA0REQ_IRQSEL6_MASK                    0x00000040
#define _DMA0REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA0REQ_IRQSEL7_POSITION                0x00000007
#define _DMA0REQ_IRQSEL7_MASK                    0x00000080
#define _DMA0REQ_IRQSEL7_LENGTH                  0x00000001

#define _DMA0STAH_STA_POSITION                   0x00000000
#define _DMA0STAH_STA_MASK                       0x000000FF
#define _DMA0STAH_STA_LENGTH                     0x00000008

#define _DMA0STBH_STB_POSITION                   0x00000000
#define _DMA0STBH_STB_MASK                       0x000000FF
#define _DMA0STBH_STB_LENGTH                     0x00000008

#define _DMA0CNT_CNT_POSITION                    0x00000000
#define _DMA0CNT_CNT_MASK                        0x00003FFF
#define _DMA0CNT_CNT_LENGTH                      0x0000000E

#define _DMA1CON_MODE_POSITION                   0x00000000
#define _DMA1CON_MODE_MASK                       0x00000003
#define _DMA1CON_MODE_LENGTH                     0x00000002

#define _DMA1CON_AMODE_POSITION                  0x00000004
#define _DMA1CON_AMODE_MASK                      0x00000030
#define _DMA1CON_AMODE_LENGTH                    0x00000002

#define _DMA1CON_NULLW_POSITION                  0x0000000B
#define _DMA1CON_NULLW_MASK                      0x00000800
#define _DMA1CON_NULLW_LENGTH                    0x00000001

#define _DMA1CON_HALF_POSITION                   0x0000000C
#define _DMA1CON_HALF_MASK                       0x00001000
#define _DMA1CON_HALF_LENGTH                     0x00000001

#define _DMA1CON_DIR_POSITION                    0x0000000D
#define _DMA1CON_DIR_MASK                        0x00002000
#define _DMA1CON_DIR_LENGTH                      0x00000001

#define _DMA1CON_SIZE_POSITION                   0x0000000E
#define _DMA1CON_SIZE_MASK                       0x00004000
#define _DMA1CON_SIZE_LENGTH                     0x00000001

#define _DMA1CON_CHEN_POSITION                   0x0000000F
#define _DMA1CON_CHEN_MASK                       0x00008000
#define _DMA1CON_CHEN_LENGTH                     0x00000001

#define _DMA1CON_MODE0_POSITION                  0x00000000
#define _DMA1CON_MODE0_MASK                      0x00000001
#define _DMA1CON_MODE0_LENGTH                    0x00000001

#define _DMA1CON_MODE1_POSITION                  0x00000001
#define _DMA1CON_MODE1_MASK                      0x00000002
#define _DMA1CON_MODE1_LENGTH                    0x00000001

#define _DMA1CON_AMODE0_POSITION                 0x00000004
#define _DMA1CON_AMODE0_MASK                     0x00000010
#define _DMA1CON_AMODE0_LENGTH                   0x00000001

#define _DMA1CON_AMODE1_POSITION                 0x00000005
#define _DMA1CON_AMODE1_MASK                     0x00000020
#define _DMA1CON_AMODE1_LENGTH                   0x00000001

#define _DMA1REQ_IRQSEL_POSITION                 0x00000000
#define _DMA1REQ_IRQSEL_MASK                     0x000000FF
#define _DMA1REQ_IRQSEL_LENGTH                   0x00000008

#define _DMA1REQ_FORCE_POSITION                  0x0000000F
#define _DMA1REQ_FORCE_MASK                      0x00008000
#define _DMA1REQ_FORCE_LENGTH                    0x00000001

#define _DMA1REQ_IRQSEL0_POSITION                0x00000000
#define _DMA1REQ_IRQSEL0_MASK                    0x00000001
#define _DMA1REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL1_POSITION                0x00000001
#define _DMA1REQ_IRQSEL1_MASK                    0x00000002
#define _DMA1REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL2_POSITION                0x00000002
#define _DMA1REQ_IRQSEL2_MASK                    0x00000004
#define _DMA1REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL3_POSITION                0x00000003
#define _DMA1REQ_IRQSEL3_MASK                    0x00000008
#define _DMA1REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL4_POSITION                0x00000004
#define _DMA1REQ_IRQSEL4_MASK                    0x00000010
#define _DMA1REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL5_POSITION                0x00000005
#define _DMA1REQ_IRQSEL5_MASK                    0x00000020
#define _DMA1REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL6_POSITION                0x00000006
#define _DMA1REQ_IRQSEL6_MASK                    0x00000040
#define _DMA1REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA1REQ_IRQSEL7_POSITION                0x00000007
#define _DMA1REQ_IRQSEL7_MASK                    0x00000080
#define _DMA1REQ_IRQSEL7_LENGTH                  0x00000001

#define _DMA1STAH_STA_POSITION                   0x00000000
#define _DMA1STAH_STA_MASK                       0x000000FF
#define _DMA1STAH_STA_LENGTH                     0x00000008

#define _DMA1STBH_STB_POSITION                   0x00000000
#define _DMA1STBH_STB_MASK                       0x000000FF
#define _DMA1STBH_STB_LENGTH                     0x00000008

#define _DMA1CNT_CNT_POSITION                    0x00000000
#define _DMA1CNT_CNT_MASK                        0x00003FFF
#define _DMA1CNT_CNT_LENGTH                      0x0000000E

#define _DMA2CON_MODE_POSITION                   0x00000000
#define _DMA2CON_MODE_MASK                       0x00000003
#define _DMA2CON_MODE_LENGTH                     0x00000002

#define _DMA2CON_AMODE_POSITION                  0x00000004
#define _DMA2CON_AMODE_MASK                      0x00000030
#define _DMA2CON_AMODE_LENGTH                    0x00000002

#define _DMA2CON_NULLW_POSITION                  0x0000000B
#define _DMA2CON_NULLW_MASK                      0x00000800
#define _DMA2CON_NULLW_LENGTH                    0x00000001

#define _DMA2CON_HALF_POSITION                   0x0000000C
#define _DMA2CON_HALF_MASK                       0x00001000
#define _DMA2CON_HALF_LENGTH                     0x00000001

#define _DMA2CON_DIR_POSITION                    0x0000000D
#define _DMA2CON_DIR_MASK                        0x00002000
#define _DMA2CON_DIR_LENGTH                      0x00000001

#define _DMA2CON_SIZE_POSITION                   0x0000000E
#define _DMA2CON_SIZE_MASK                       0x00004000
#define _DMA2CON_SIZE_LENGTH                     0x00000001

#define _DMA2CON_CHEN_POSITION                   0x0000000F
#define _DMA2CON_CHEN_MASK                       0x00008000
#define _DMA2CON_CHEN_LENGTH                     0x00000001

#define _DMA2CON_MODE0_POSITION                  0x00000000
#define _DMA2CON_MODE0_MASK                      0x00000001
#define _DMA2CON_MODE0_LENGTH                    0x00000001

#define _DMA2CON_MODE1_POSITION                  0x00000001
#define _DMA2CON_MODE1_MASK                      0x00000002
#define _DMA2CON_MODE1_LENGTH                    0x00000001

#define _DMA2CON_AMODE0_POSITION                 0x00000004
#define _DMA2CON_AMODE0_MASK                     0x00000010
#define _DMA2CON_AMODE0_LENGTH                   0x00000001

#define _DMA2CON_AMODE1_POSITION                 0x00000005
#define _DMA2CON_AMODE1_MASK                     0x00000020
#define _DMA2CON_AMODE1_LENGTH                   0x00000001

#define _DMA2REQ_IRQSEL_POSITION                 0x00000000
#define _DMA2REQ_IRQSEL_MASK                     0x000000FF
#define _DMA2REQ_IRQSEL_LENGTH                   0x00000008

#define _DMA2REQ_FORCE_POSITION                  0x0000000F
#define _DMA2REQ_FORCE_MASK                      0x00008000
#define _DMA2REQ_FORCE_LENGTH                    0x00000001

#define _DMA2REQ_IRQSEL0_POSITION                0x00000000
#define _DMA2REQ_IRQSEL0_MASK                    0x00000001
#define _DMA2REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL1_POSITION                0x00000001
#define _DMA2REQ_IRQSEL1_MASK                    0x00000002
#define _DMA2REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL2_POSITION                0x00000002
#define _DMA2REQ_IRQSEL2_MASK                    0x00000004
#define _DMA2REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL3_POSITION                0x00000003
#define _DMA2REQ_IRQSEL3_MASK                    0x00000008
#define _DMA2REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL4_POSITION                0x00000004
#define _DMA2REQ_IRQSEL4_MASK                    0x00000010
#define _DMA2REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL5_POSITION                0x00000005
#define _DMA2REQ_IRQSEL5_MASK                    0x00000020
#define _DMA2REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL6_POSITION                0x00000006
#define _DMA2REQ_IRQSEL6_MASK                    0x00000040
#define _DMA2REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA2REQ_IRQSEL7_POSITION                0x00000007
#define _DMA2REQ_IRQSEL7_MASK                    0x00000080
#define _DMA2REQ_IRQSEL7_LENGTH                  0x00000001

#define _DMA2STAH_STA_POSITION                   0x00000000
#define _DMA2STAH_STA_MASK                       0x000000FF
#define _DMA2STAH_STA_LENGTH                     0x00000008

#define _DMA2STBH_STB_POSITION                   0x00000000
#define _DMA2STBH_STB_MASK                       0x000000FF
#define _DMA2STBH_STB_LENGTH                     0x00000008

#define _DMA2CNT_CNT_POSITION                    0x00000000
#define _DMA2CNT_CNT_MASK                        0x00003FFF
#define _DMA2CNT_CNT_LENGTH                      0x0000000E

#define _DMA3CON_MODE_POSITION                   0x00000000
#define _DMA3CON_MODE_MASK                       0x00000003
#define _DMA3CON_MODE_LENGTH                     0x00000002

#define _DMA3CON_AMODE_POSITION                  0x00000004
#define _DMA3CON_AMODE_MASK                      0x00000030
#define _DMA3CON_AMODE_LENGTH                    0x00000002

#define _DMA3CON_NULLW_POSITION                  0x0000000B
#define _DMA3CON_NULLW_MASK                      0x00000800
#define _DMA3CON_NULLW_LENGTH                    0x00000001

#define _DMA3CON_HALF_POSITION                   0x0000000C
#define _DMA3CON_HALF_MASK                       0x00001000
#define _DMA3CON_HALF_LENGTH                     0x00000001

#define _DMA3CON_DIR_POSITION                    0x0000000D
#define _DMA3CON_DIR_MASK                        0x00002000
#define _DMA3CON_DIR_LENGTH                      0x00000001

#define _DMA3CON_SIZE_POSITION                   0x0000000E
#define _DMA3CON_SIZE_MASK                       0x00004000
#define _DMA3CON_SIZE_LENGTH                     0x00000001

#define _DMA3CON_CHEN_POSITION                   0x0000000F
#define _DMA3CON_CHEN_MASK                       0x00008000
#define _DMA3CON_CHEN_LENGTH                     0x00000001

#define _DMA3CON_MODE0_POSITION                  0x00000000
#define _DMA3CON_MODE0_MASK                      0x00000001
#define _DMA3CON_MODE0_LENGTH                    0x00000001

#define _DMA3CON_MODE1_POSITION                  0x00000001
#define _DMA3CON_MODE1_MASK                      0x00000002
#define _DMA3CON_MODE1_LENGTH                    0x00000001

#define _DMA3CON_AMODE0_POSITION                 0x00000004
#define _DMA3CON_AMODE0_MASK                     0x00000010
#define _DMA3CON_AMODE0_LENGTH                   0x00000001

#define _DMA3CON_AMODE1_POSITION                 0x00000005
#define _DMA3CON_AMODE1_MASK                     0x00000020
#define _DMA3CON_AMODE1_LENGTH                   0x00000001

#define _DMA3REQ_IRQSEL_POSITION                 0x00000000
#define _DMA3REQ_IRQSEL_MASK                     0x000000FF
#define _DMA3REQ_IRQSEL_LENGTH                   0x00000008

#define _DMA3REQ_FORCE_POSITION                  0x0000000F
#define _DMA3REQ_FORCE_MASK                      0x00008000
#define _DMA3REQ_FORCE_LENGTH                    0x00000001

#define _DMA3REQ_IRQSEL0_POSITION                0x00000000
#define _DMA3REQ_IRQSEL0_MASK                    0x00000001
#define _DMA3REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL1_POSITION                0x00000001
#define _DMA3REQ_IRQSEL1_MASK                    0x00000002
#define _DMA3REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL2_POSITION                0x00000002
#define _DMA3REQ_IRQSEL2_MASK                    0x00000004
#define _DMA3REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL3_POSITION                0x00000003
#define _DMA3REQ_IRQSEL3_MASK                    0x00000008
#define _DMA3REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL4_POSITION                0x00000004
#define _DMA3REQ_IRQSEL4_MASK                    0x00000010
#define _DMA3REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL5_POSITION                0x00000005
#define _DMA3REQ_IRQSEL5_MASK                    0x00000020
#define _DMA3REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL6_POSITION                0x00000006
#define _DMA3REQ_IRQSEL6_MASK                    0x00000040
#define _DMA3REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA3REQ_IRQSEL7_POSITION                0x00000007
#define _DMA3REQ_IRQSEL7_MASK                    0x00000080
#define _DMA3REQ_IRQSEL7_LENGTH                  0x00000001

#define _DMA3STAH_STA_POSITION                   0x00000000
#define _DMA3STAH_STA_MASK                       0x000000FF
#define _DMA3STAH_STA_LENGTH                     0x00000008

#define _DMA3STBH_STB_POSITION                   0x00000000
#define _DMA3STBH_STB_MASK                       0x000000FF
#define _DMA3STBH_STB_LENGTH                     0x00000008

#define _DMA3CNT_CNT_POSITION                    0x00000000
#define _DMA3CNT_CNT_MASK                        0x00003FFF
#define _DMA3CNT_CNT_LENGTH                      0x0000000E

#define _DMAPWC_PWCOL0_POSITION                  0x00000000
#define _DMAPWC_PWCOL0_MASK                      0x00000001
#define _DMAPWC_PWCOL0_LENGTH                    0x00000001

#define _DMAPWC_PWCOL1_POSITION                  0x00000001
#define _DMAPWC_PWCOL1_MASK                      0x00000002
#define _DMAPWC_PWCOL1_LENGTH                    0x00000001

#define _DMAPWC_PWCOL2_POSITION                  0x00000002
#define _DMAPWC_PWCOL2_MASK                      0x00000004
#define _DMAPWC_PWCOL2_LENGTH                    0x00000001

#define _DMAPWC_PWCOL3_POSITION                  0x00000003
#define _DMAPWC_PWCOL3_MASK                      0x00000008
#define _DMAPWC_PWCOL3_LENGTH                    0x00000001

#define _DMARQC_RQCOL0_POSITION                  0x00000000
#define _DMARQC_RQCOL0_MASK                      0x00000001
#define _DMARQC_RQCOL0_LENGTH                    0x00000001

#define _DMARQC_RQCOL1_POSITION                  0x00000001
#define _DMARQC_RQCOL1_MASK                      0x00000002
#define _DMARQC_RQCOL1_LENGTH                    0x00000001

#define _DMARQC_RQCOL2_POSITION                  0x00000002
#define _DMARQC_RQCOL2_MASK                      0x00000004
#define _DMARQC_RQCOL2_LENGTH                    0x00000001

#define _DMARQC_RQCOL3_POSITION                  0x00000003
#define _DMARQC_RQCOL3_MASK                      0x00000008
#define _DMARQC_RQCOL3_LENGTH                    0x00000001

#define _DMAPPS_PPST0_POSITION                   0x00000000
#define _DMAPPS_PPST0_MASK                       0x00000001
#define _DMAPPS_PPST0_LENGTH                     0x00000001

#define _DMAPPS_PPST1_POSITION                   0x00000001
#define _DMAPPS_PPST1_MASK                       0x00000002
#define _DMAPPS_PPST1_LENGTH                     0x00000001

#define _DMAPPS_PPST2_POSITION                   0x00000002
#define _DMAPPS_PPST2_MASK                       0x00000004
#define _DMAPPS_PPST2_LENGTH                     0x00000001

#define _DMAPPS_PPST3_POSITION                   0x00000003
#define _DMAPPS_PPST3_MASK                       0x00000008
#define _DMAPPS_PPST3_LENGTH                     0x00000001

#define _DMALCA_LSTCH_POSITION                   0x00000000
#define _DMALCA_LSTCH_MASK                       0x0000000F
#define _DMALCA_LSTCH_LENGTH                     0x00000004

#define _DMALCA_LSTCH0_POSITION                  0x00000000
#define _DMALCA_LSTCH0_MASK                      0x00000001
#define _DMALCA_LSTCH0_LENGTH                    0x00000001

#define _DMALCA_LSTCH1_POSITION                  0x00000001
#define _DMALCA_LSTCH1_MASK                      0x00000002
#define _DMALCA_LSTCH1_LENGTH                    0x00000001

#define _DMALCA_LSTCH2_POSITION                  0x00000002
#define _DMALCA_LSTCH2_MASK                      0x00000004
#define _DMALCA_LSTCH2_LENGTH                    0x00000001

#define _DMALCA_LSTCH3_POSITION                  0x00000003
#define _DMALCA_LSTCH3_MASK                      0x00000008
#define _DMALCA_LSTCH3_LENGTH                    0x00000001

#define _DSADRH_DSADR_POSITION                   0x00000000
#define _DSADRH_DSADR_MASK                       0x000000FF
#define _DSADRH_DSADR_LENGTH                     0x00000008

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

#define _CHOP_CHOPCLK_POSITION                   0x00000000
#define _CHOP_CHOPCLK_MASK                       0x000003FF
#define _CHOP_CHOPCLK_LENGTH                     0x0000000A

#define _CHOP_CHPCLKEN_POSITION                  0x0000000F
#define _CHOP_CHPCLKEN_MASK                      0x00008000
#define _CHOP_CHPCLKEN_LENGTH                    0x00000001

#define _CHOP_CHOPCLK0_POSITION                  0x00000000
#define _CHOP_CHOPCLK0_MASK                      0x00000001
#define _CHOP_CHOPCLK0_LENGTH                    0x00000001

#define _CHOP_CHOPCLK1_POSITION                  0x00000001
#define _CHOP_CHOPCLK1_MASK                      0x00000002
#define _CHOP_CHOPCLK1_LENGTH                    0x00000001

#define _CHOP_CHOPCLK2_POSITION                  0x00000002
#define _CHOP_CHOPCLK2_MASK                      0x00000004
#define _CHOP_CHOPCLK2_LENGTH                    0x00000001

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

#define _PWMCON1_DTCP_POSITION                   0x00000005
#define _PWMCON1_DTCP_MASK                       0x00000020
#define _PWMCON1_DTCP_LENGTH                     0x00000001

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

#define _PWMCON2_DTCP_POSITION                   0x00000005
#define _PWMCON2_DTCP_MASK                       0x00000020
#define _PWMCON2_DTCP_LENGTH                     0x00000001

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

#define _PWMCON3_DTCP_POSITION                   0x00000005
#define _PWMCON3_DTCP_MASK                       0x00000020
#define _PWMCON3_DTCP_LENGTH                     0x00000001

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

#define _ANSELA_ANSA4_POSITION                   0x00000004
#define _ANSELA_ANSA4_MASK                       0x00000010
#define _ANSELA_ANSA4_LENGTH                     0x00000001

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

#define _ANSELB_ANSB8_POSITION                   0x00000008
#define _ANSELB_ANSB8_MASK                       0x00000100
#define _ANSELB_ANSB8_LENGTH                     0x00000001

#define _APPS_APIFUL_POSITION                    0x00000000
#define _APPS_APIFUL_MASK                        0x00000001
#define _APPS_APIFUL_LENGTH                      0x00000001

#define _APPS_APIOV_POSITION                     0x00000001
#define _APPS_APIOV_MASK                         0x00000002
#define _APPS_APIOV_LENGTH                       0x00000001

#define _APPS_APOFUL_POSITION                    0x00000002
#define _APPS_APOFUL_MASK                        0x00000004
#define _APPS_APOFUL_LENGTH                      0x00000001

#define _APPS_APOOV_POSITION                     0x00000003
#define _APPS_APOOV_MASK                         0x00000008
#define _APPS_APOOV_LENGTH                       0x00000001

#define _APPS_STRFUL_POSITION                    0x00000004
#define _APPS_STRFUL_MASK                        0x00000010
#define _APPS_STRFUL_LENGTH                      0x00000001



/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register FICD (0x57f0)                               */

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

/* Register FPOR (0x57f2)                               */

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
**   Alternate I2C1 pins:
**     ALTI2C1_ON           I2C1 mapped to ASDA1/ASCL1 pins
**     ALTI2C1_OFF          I2C1 mapped to SDA1/SCL1 pins
**
**   Alternate I2C2 pins:
**     ALTI2C2_ON           I2C2 mapped to ASDA2/ASCL2 pins
**     ALTI2C2_OFF          I2C2 mapped to SDA2/SCL2 pins
**
**   Watchdog Window Select bits:
**     WDTWIN_WIN75         WDT Window is 75% of WDT period
**     WDTWIN_WIN50         WDT Window is 50% of WDT period
**     WDTWIN_WIN37         WDT Window is 37.5% of WDT period
**     WDTWIN_WIN25         WDT Window is 25% of WDT period
**
*/

#define ALTI2C1_ON           0xFFEF
#define ALTI2C1_OFF          0xFFFF

#define ALTI2C2_ON           0xFFDF
#define ALTI2C2_OFF          0xFFFF

#define WDTWIN_WIN75         0xFF3F
#define WDTWIN_WIN50         0xFF7F
#define WDTWIN_WIN37         0xFFBF
#define WDTWIN_WIN25         0xFFFF

/* Register FWDT (0x57f4)                               */

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
**   PLL Lock Enable bit:
**     PLLKEN_OFF           Clock switch will not wait for the PLL lock signal.
**     PLLKEN_ON            Clock switch to PLL source will wait until the PLL lock signal is valid.
**
**   Watchdog Timer Window Enable bit:
**     WINDIS_ON            Watchdog Timer in Window mode
**     WINDIS_OFF           Watchdog Timer in Non-Window mode
**
**   Watchdog Timer Enable bit:
**     FWDTEN_OFF           Watchdog timer enabled/disabled by user software
**     FWDTEN_ON            Watchdog timer always enabled
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

#define PLLKEN_OFF           0xFFDF
#define PLLKEN_ON            0xFFFF

#define WINDIS_ON            0xFFBF
#define WINDIS_OFF           0xFFFF

#define FWDTEN_OFF           0xFF7F
#define FWDTEN_ON            0xFFFF

/* Register FOSC (0x57f6)                               */

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

/* Register FOSCSEL (0x57f8)                               */

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
**     FNOSC_FRCDIVN        Internal Fast RC (FRC) Oscillator with postscaler
**
**   PWM Lock Enable bit:
**     PWMLOCK_OFF          PWM registers may be written without key sequence
**     PWMLOCK_ON           Certain PWM registers may only be written after key sequence
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
#define FNOSC_FRCDIVN        0xFFFF

#define PWMLOCK_OFF          0xFFBF
#define PWMLOCK_ON           0xFFFF

#define IESO_OFF             0xFF7F
#define IESO_ON              0xFFFF

/* Register FGS (0x57fa)                               */

extern __attribute__((space(prog))) unsigned int _FGS;
#define _FGS(x) __attribute__((section("__FGS.sec"),space(prog))) unsigned int _FGS = (x);

/*
** Only one invocation of FGS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FGS.
** Multiple options may be combined, as shown:
**
** _FGS( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   General Segment Write-Protect bit:
**     GWRP_ON              General Segment is write protected
**     GWRP_OFF             General Segment may be written
**
**   General Segment Code-Protect bit:
**     GCP_ON               General Segment Code protection Enabled
**     GCP_OFF              General Segment Code protect is Disabled
**
*/

#define GWRP_ON              0xFFFE
#define GWRP_OFF             0xFFFF

#define GCP_ON               0xFFFD
#define GCP_OFF              0xFFFF

/* Register FUID0 (0x800ff8)                               */

extern __attribute__((space(prog))) unsigned int _FUID0;
#define _FUID0(x) __attribute__((section("__FUID0.sec"),space(prog))) unsigned int _FUID0 = (x);

/*
** Only one invocation of FUID0 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID0.
** Multiple options may be combined, as shown:
**
** _FUID0( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/


/* Register FUID1 (0x800ffa)                               */

extern __attribute__((space(prog))) unsigned int _FUID1;
#define _FUID1(x) __attribute__((section("__FUID1.sec"),space(prog))) unsigned int _FUID1 = (x);

/*
** Only one invocation of FUID1 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID1.
** Multiple options may be combined, as shown:
**
** _FUID1( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/


/* Register FUID2 (0x800ffc)                               */

extern __attribute__((space(prog))) unsigned int _FUID2;
#define _FUID2(x) __attribute__((section("__FUID2.sec"),space(prog))) unsigned int _FUID2 = (x);

/*
** Only one invocation of FUID2 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID2.
** Multiple options may be combined, as shown:
**
** _FUID2( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/


/* Register FUID3 (0x800ffe)                               */

extern __attribute__((space(prog))) unsigned int _FUID3;
#define _FUID3(x) __attribute__((section("__FUID3.sec"),space(prog))) unsigned int _FUID3 = (x);

/*
** Only one invocation of FUID3 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FUID3.
** Multiple options may be combined, as shown:
**
** _FUID3( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   :
**
*/




/*
 * Memory Segments Sizes
 */

#define __RESET_BASE 0x0
#define __RESET_LENGTH 0x4

#define __IVT_BASE 0x4
#define __IVT_LENGTH 0x1fc

#define __PROGRAM_BASE 0x200
#define __PROGRAM_LENGTH 0x55ec

#define __FICD_BASE 0x57f0
#define __FICD_LENGTH 0x2

#define __FPOR_BASE 0x57f2
#define __FPOR_LENGTH 0x2

#define __FWDT_BASE 0x57f4
#define __FWDT_LENGTH 0x2

#define __FOSC_BASE 0x57f6
#define __FOSC_LENGTH 0x2

#define __FOSCSEL_BASE 0x57f8
#define __FOSCSEL_LENGTH 0x2

#define __FGS_BASE 0x57fa
#define __FGS_LENGTH 0x2

#define __FUID0_BASE 0x800ff8
#define __FUID0_LENGTH 0x2

#define __FUID1_BASE 0x800ffa
#define __FUID1_LENGTH 0x2

#define __FUID2_BASE 0x800ffc
#define __FUID2_LENGTH 0x2

#define __FUID3_BASE 0x800ffe
#define __FUID3_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x1000

#define __DATA_BASE 0x1000
#define __DATA_LENGTH 0x1000


#endif
