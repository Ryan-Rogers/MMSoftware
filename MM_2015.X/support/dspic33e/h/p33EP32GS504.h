/*-------------------------------------------------------------------------
 * MPLAB-Cxx  dsPIC33EP32GS504 processor header
 *
 * (c) Copyright 1999-2014 Microchip Technology, All rights reserved
 * Part support version v1.22.A(19-Aug-2014)
 *-------------------------------------------------------------------------*/

#ifndef __dsPIC33EP32GS504__
#error "Include file does not match processor setting"
#endif

#ifndef __33EP32GS504_H
#define __33EP32GS504_H

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

#define I2C2CON1 I2C2CON1
extern volatile unsigned int  I2C2CON1 __attribute__((__sfr__));
typedef struct tagI2C2CON1BITS {
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
} I2C2CON1BITS;
extern volatile I2C2CON1BITS I2C2CON1bits __attribute__((__sfr__));

#define I2C2CON2 I2C2CON2
extern volatile unsigned int  I2C2CON2 __attribute__((__sfr__));
typedef struct tagI2C2CON2BITS {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
} I2C2CON2BITS;
extern volatile I2C2CON2BITS I2C2CON2bits __attribute__((__sfr__));

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
  unsigned :2;
  unsigned ACKTIM:1;
  unsigned TRSTAT:1;
  unsigned ACKSTAT:1;
} I2C2STATBITS;
extern volatile I2C2STATBITS I2C2STATbits __attribute__((__sfr__));

#define I2C2ADD I2C2ADD
extern volatile unsigned int  I2C2ADD __attribute__((__sfr__));
typedef struct tagI2C2ADDBITS {
  unsigned ADD:10;
} I2C2ADDBITS;
extern volatile I2C2ADDBITS I2C2ADDbits __attribute__((__sfr__));

#define I2C2MSK I2C2MSK
extern volatile unsigned int  I2C2MSK __attribute__((__sfr__));
__extension__ typedef struct tagI2C2MSKBITS {
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
} I2C2MSKBITS;
extern volatile I2C2MSKBITS I2C2MSKbits __attribute__((__sfr__));

#define I2C2BRG I2C2BRG
extern volatile unsigned int  I2C2BRG __attribute__((__sfr__));
#define I2C2TRN I2C2TRN
extern volatile unsigned int  I2C2TRN __attribute__((__sfr__));
typedef struct tagI2C2TRNBITS {
  unsigned I2CTXDATA:8;
} I2C2TRNBITS;
extern volatile I2C2TRNBITS I2C2TRNbits __attribute__((__sfr__));

#define I2C2RCV I2C2RCV
extern volatile unsigned int  I2C2RCV __attribute__((__sfr__));
typedef struct tagI2C2RCVBITS {
  unsigned I2CRXDATA:8;
} I2C2RCVBITS;
extern volatile I2C2RCVBITS I2C2RCVbits __attribute__((__sfr__));


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
#define ADCON1 ADCON1
extern volatile unsigned int  ADCON1 __attribute__((__sfr__));
typedef struct tagADCON1BITS {
  unsigned :11;
  unsigned FORM:1;
  unsigned :1;
  unsigned ADSIDL:1;
  unsigned :1;
  unsigned ADON:1;
} ADCON1BITS;
extern volatile ADCON1BITS ADCON1bits __attribute__((__sfr__));

#define ADCON2 ADCON2
extern volatile unsigned int  ADCON2 __attribute__((__sfr__));
__extension__ typedef struct tagADCON2BITS {
  union {
    struct {
      unsigned EIE:3;
      unsigned :3;
      unsigned STRGSRC:5;
      unsigned FLTRDLY:5;
    };
    struct {
      unsigned EIE0:1;
      unsigned EIE1:1;
      unsigned EIE2:1;
      unsigned :3;
      unsigned STRGSRC0:1;
      unsigned STRGSRC1:1;
      unsigned STRGSRC2:1;
      unsigned STRGSRC3:1;
      unsigned STRGSRC4:1;
      unsigned FLTRDLY0:1;
      unsigned FLTRDLY1:1;
      unsigned FLTRDLY2:1;
      unsigned FLTRDLY3:1;
      unsigned FLTRDLY4:1;
    };
  };
} ADCON2BITS;
extern volatile ADCON2BITS ADCON2bits __attribute__((__sfr__));

#define ADCON3 ADCON3
extern volatile unsigned int  ADCON3 __attribute__((__sfr__));
__extension__ typedef struct tagADCON3BITS {
  union {
    struct {
      unsigned ADCS:7;
      unsigned :1;
      unsigned ADCSEL:2;
      unsigned :3;
      unsigned LOWPWR:1;
      unsigned BOOST:1;
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
      unsigned ADCSEL0:1;
      unsigned ADCSEL1:1;
    };
  };
} ADCON3BITS;
extern volatile ADCON3BITS ADCON3bits __attribute__((__sfr__));

#define ADCON4 ADCON4
extern volatile unsigned int  ADCON4 __attribute__((__sfr__));
__extension__ typedef struct tagADCON4BITS {
  union {
    struct {
      unsigned SAMC:8;
      unsigned :7;
      unsigned ADCRDY:1;
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
    };
  };
} ADCON4BITS;
extern volatile ADCON4BITS ADCON4bits __attribute__((__sfr__));

#define ADCON5 ADCON5
extern volatile unsigned int  ADCON5 __attribute__((__sfr__));
__extension__ typedef struct tagADCON5BITS {
  union {
    struct {
      unsigned ADINSEL:6;
      unsigned :4;
      unsigned VREFSEL:3;
    };
    struct {
      unsigned ADINSEL0:1;
      unsigned ADINSEL1:1;
      unsigned ADINSEL2:1;
      unsigned ADINSEL3:1;
      unsigned ADINSEL4:1;
      unsigned ADINSEL5:1;
      unsigned :4;
      unsigned VREFSEL0:1;
      unsigned VREFSEL1:1;
      unsigned VREFSEL2:1;
    };
  };
} ADCON5BITS;
extern volatile ADCON5BITS ADCON5bits __attribute__((__sfr__));

#define ADCON6 ADCON6
extern volatile unsigned int  ADCON6 __attribute__((__sfr__));
typedef struct tagADCON6BITS {
  unsigned :13;
  unsigned RQCONVRT:1;
  unsigned GSWTRG:1;
  unsigned CAL:1;
} ADCON6BITS;
extern volatile ADCON6BITS ADCON6bits __attribute__((__sfr__));

#define ADMOD ADMOD
extern volatile unsigned int  ADMOD __attribute__((__sfr__));
__extension__ typedef struct tagADMODBITS {
  union {
    struct {
      unsigned SH0MOD:2;
      unsigned SH1MOD:2;
      unsigned SH2MOD:2;
      unsigned SH3MOD:2;
      unsigned SH4MOD:2;
    };
    struct {
      unsigned SH0MOD0:1;
      unsigned SH0MOD1:1;
      unsigned SH1MOD0:1;
      unsigned SH1MOD1:1;
      unsigned SH2MOD0:1;
      unsigned SH2MOD1:1;
      unsigned SH3MOD0:1;
      unsigned SH3MOD1:1;
      unsigned SH4MOD0:1;
      unsigned SH4MOD1:1;
    };
  };
} ADMODBITS;
extern volatile ADMODBITS ADMODbits __attribute__((__sfr__));

#define ADALT ADALT
extern volatile unsigned int  ADALT __attribute__((__sfr__));
__extension__ typedef struct tagADALTBITS {
  union {
    struct {
      unsigned SH0ALT:2;
      unsigned SH1ALT:2;
      unsigned SH2ALT:2;
      unsigned SH3ALT:2;
    };
    struct {
      unsigned SH0ALT0:1;
      unsigned SH0ALT1:1;
      unsigned SH1ALT0:1;
      unsigned SH1ALT1:1;
      unsigned SH2ALT0:1;
      unsigned SH2ALT1:1;
      unsigned SH3ALT0:1;
      unsigned SH3ALT1:1;
    };
  };
} ADALTBITS;
extern volatile ADALTBITS ADALTbits __attribute__((__sfr__));

#define ADGIRQENL ADGIRQENL
extern volatile unsigned int  ADGIRQENL __attribute__((__sfr__));
typedef struct tagADGIRQENLBITS {
  unsigned IRQEN0:1;
  unsigned IRQEN1:1;
  unsigned IRQEN2:1;
  unsigned IRQEN3:1;
  unsigned IRQEN4:1;
  unsigned IRQEN5:1;
  unsigned IRQEN6:1;
  unsigned IRQEN7:1;
  unsigned IRQEN8:1;
  unsigned IRQEN9:1;
  unsigned IRQEN10:1;
  unsigned IRQEN11:1;
  unsigned IRQEN12:1;
  unsigned :1;
  unsigned IRQEN14:1;
} ADGIRQENLBITS;
extern volatile ADGIRQENLBITS ADGIRQENLbits __attribute__((__sfr__));

#define ADGIRQENH ADGIRQENH
extern volatile unsigned int  ADGIRQENH __attribute__((__sfr__));
typedef struct tagADGIRQENHBITS {
  unsigned :1;
  unsigned IRQEN17:1;
  unsigned IRQEN18:1;
  unsigned IRQEN19:1;
  unsigned IRQEN20:1;
  unsigned IRQEN21:1;
  unsigned IRQEN22:1;
  unsigned IRQEN23:1;
  unsigned IRQEN24:1;
  unsigned IRQEN25:1;
  unsigned IRQEN26:1;
} ADGIRQENHBITS;
extern volatile ADGIRQENHBITS ADGIRQENHbits __attribute__((__sfr__));

#define ADCSSL ADCSSL
extern volatile unsigned int  ADCSSL __attribute__((__sfr__));
typedef struct tagADCSSLBITS {
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
  unsigned :1;
  unsigned CSS14:1;
} ADCSSLBITS;
extern volatile ADCSSLBITS ADCSSLbits __attribute__((__sfr__));

#define ADCSSH ADCSSH
extern volatile unsigned int  ADCSSH __attribute__((__sfr__));
typedef struct tagADCSSHBITS {
  unsigned :1;
  unsigned CSS17:1;
  unsigned CSS18:1;
  unsigned CSS19:1;
  unsigned CSS20:1;
  unsigned CSS21:1;
  unsigned CSS22:1;
  unsigned CSS23:1;
  unsigned CSS24:1;
  unsigned CSS25:1;
  unsigned CSS26:1;
} ADCSSHBITS;
extern volatile ADCSSHBITS ADCSSHbits __attribute__((__sfr__));

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
  unsigned :1;
  unsigned AN14RDY:1;
} ADSTATLBITS;
extern volatile ADSTATLBITS ADSTATLbits __attribute__((__sfr__));

#define ADSTATH ADSTATH
extern volatile unsigned int  ADSTATH __attribute__((__sfr__));
typedef struct tagADSTATHBITS {
  unsigned :1;
  unsigned AN17RDY:1;
  unsigned AN18RDY:1;
  unsigned AN19RDY:1;
  unsigned AN20RDY:1;
  unsigned AN21RDY:1;
  unsigned AN22RDY:1;
  unsigned AN23RDY:1;
  unsigned AN24RDY:1;
  unsigned AN25RDY:1;
  unsigned AN26RDY:1;
} ADSTATHBITS;
extern volatile ADSTATHBITS ADSTATHbits __attribute__((__sfr__));

#define DCMP1ENL DCMP1ENL
extern volatile unsigned int  DCMP1ENL __attribute__((__sfr__));
typedef struct tagDCMP1ENLBITS {
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
  unsigned :1;
  unsigned CMPEN14:1;
} DCMP1ENLBITS;
extern volatile DCMP1ENLBITS DCMP1ENLbits __attribute__((__sfr__));

#define DCMP1ENH DCMP1ENH
extern volatile unsigned int  DCMP1ENH __attribute__((__sfr__));
typedef struct tagDCMP1ENHBITS {
  unsigned :1;
  unsigned CMPEN17:1;
  unsigned CMPEN18:1;
  unsigned CMPEN19:1;
  unsigned CMPEN20:1;
  unsigned CMPEN21:1;
  unsigned CMPEN22:1;
  unsigned CMPEN23:1;
  unsigned CMPEN24:1;
  unsigned CMPEN25:1;
  unsigned CMPEN26:1;
} DCMP1ENHBITS;
extern volatile DCMP1ENHBITS DCMP1ENHbits __attribute__((__sfr__));

#define DCMP1LO DCMP1LO
extern volatile unsigned int  DCMP1LO __attribute__((__sfr__));
#define DCMP1HI DCMP1HI
extern volatile unsigned int  DCMP1HI __attribute__((__sfr__));
#define DCMP2ENL DCMP2ENL
extern volatile unsigned int  DCMP2ENL __attribute__((__sfr__));
typedef struct tagDCMP2ENLBITS {
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
  unsigned :1;
  unsigned CMPEN14:1;
} DCMP2ENLBITS;
extern volatile DCMP2ENLBITS DCMP2ENLbits __attribute__((__sfr__));

#define DCMP2ENH DCMP2ENH
extern volatile unsigned int  DCMP2ENH __attribute__((__sfr__));
typedef struct tagDCMP2ENHBITS {
  unsigned :1;
  unsigned CMPEN17:1;
  unsigned CMPEN18:1;
  unsigned CMPEN19:1;
  unsigned CMPEN20:1;
  unsigned CMPEN21:1;
  unsigned CMPEN22:1;
  unsigned CMPEN23:1;
  unsigned CMPEN24:1;
  unsigned CMPEN25:1;
  unsigned CMPEN26:1;
} DCMP2ENHBITS;
extern volatile DCMP2ENHBITS DCMP2ENHbits __attribute__((__sfr__));

#define DCMP2LO DCMP2LO
extern volatile unsigned int  DCMP2LO __attribute__((__sfr__));
#define DCMP2HI DCMP2HI
extern volatile unsigned int  DCMP2HI __attribute__((__sfr__));
#define ADFLTR1DAT ADFLTR1DAT
extern volatile unsigned int  ADFLTR1DAT __attribute__((__sfr__));
#define ADFLTR1CON ADFLTR1CON
extern volatile unsigned int  ADFLTR1CON __attribute__((__sfr__));
__extension__ typedef struct tagADFLTR1CONBITS {
  union {
    struct {
      unsigned CHNLID:6;
      unsigned :2;
      unsigned AFRDY:1;
      unsigned AFGIEN:1;
      unsigned OVRSAM:3;
      unsigned :2;
      unsigned AFEN:1;
    };
    struct {
      unsigned CHNLID0:1;
      unsigned CHNLID1:1;
      unsigned CHNLID2:1;
      unsigned CHNLID3:1;
      unsigned CHNLID4:1;
      unsigned CHNLID5:1;
      unsigned :4;
      unsigned OVRSAM0:1;
      unsigned OVRSAM1:1;
      unsigned OVRSAM2:1;
    };
  };
} ADFLTR1CONBITS;
extern volatile ADFLTR1CONBITS ADFLTR1CONbits __attribute__((__sfr__));

#define ADFLTR2DAT ADFLTR2DAT
extern volatile unsigned int  ADFLTR2DAT __attribute__((__sfr__));
#define ADFLTR2CON ADFLTR2CON
extern volatile unsigned int  ADFLTR2CON __attribute__((__sfr__));
__extension__ typedef struct tagADFLTR2CONBITS {
  union {
    struct {
      unsigned CHNLID:6;
      unsigned :2;
      unsigned AFRDY:1;
      unsigned AFGIEN:1;
      unsigned OVRSAM:3;
      unsigned :2;
      unsigned AFEN:1;
    };
    struct {
      unsigned CHNLID0:1;
      unsigned CHNLID1:1;
      unsigned CHNLID2:1;
      unsigned CHNLID3:1;
      unsigned CHNLID4:1;
      unsigned CHNLID5:1;
      unsigned :4;
      unsigned OVRSAM0:1;
      unsigned OVRSAM1:1;
      unsigned OVRSAM2:1;
    };
  };
} ADFLTR2CONBITS;
extern volatile ADFLTR2CONBITS ADFLTR2CONbits __attribute__((__sfr__));

#define ADTRIG1 ADTRIG1
extern volatile unsigned int  ADTRIG1 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG1BITS {
  union {
    struct {
      unsigned TRGSRC0:5;
      unsigned :3;
      unsigned TRGSRC1:5;
    };
    struct {
      unsigned TRGSRC00:1;
      unsigned TRGSRC01:1;
      unsigned TRGSRC02:1;
      unsigned TRGSRC03:1;
      unsigned TRGSRC04:1;
      unsigned :3;
      unsigned TRGSRC10:1;
      unsigned TRGSRC11:1;
      unsigned TRGSRC12:1;
      unsigned TRGSRC13:1;
      unsigned TRGSRC14:1;
    };
  };
} ADTRIG1BITS;
extern volatile ADTRIG1BITS ADTRIG1bits __attribute__((__sfr__));

#define ADTRIG2 ADTRIG2
extern volatile unsigned int  ADTRIG2 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG2BITS {
  union {
    struct {
      unsigned TRGSRC2:5;
      unsigned :3;
      unsigned TRGSRC3:5;
    };
    struct {
      unsigned TRGSRC20:1;
      unsigned TRGSRC21:1;
      unsigned TRGSRC22:1;
      unsigned TRGSRC23:1;
      unsigned TRGSRC24:1;
      unsigned :3;
      unsigned TRGSRC30:1;
      unsigned TRGSRC31:1;
      unsigned TRGSRC32:1;
      unsigned TRGSRC33:1;
      unsigned TRGSRC34:1;
    };
  };
} ADTRIG2BITS;
extern volatile ADTRIG2BITS ADTRIG2bits __attribute__((__sfr__));

#define ADTRIG3 ADTRIG3
extern volatile unsigned int  ADTRIG3 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG3BITS {
  union {
    struct {
      unsigned TRGSRC4:5;
      unsigned :3;
      unsigned TRGSRC5:5;
    };
    struct {
      unsigned TRGSRC40:1;
      unsigned TRGSRC41:1;
      unsigned TRGSRC42:1;
      unsigned TRGSRC43:1;
      unsigned TRGSRC44:1;
      unsigned :3;
      unsigned TRGSRC50:1;
      unsigned TRGSRC51:1;
      unsigned TRGSRC52:1;
      unsigned TRGSRC53:1;
      unsigned TRGSRC54:1;
    };
  };
} ADTRIG3BITS;
extern volatile ADTRIG3BITS ADTRIG3bits __attribute__((__sfr__));

#define ADTRIG4 ADTRIG4
extern volatile unsigned int  ADTRIG4 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG4BITS {
  union {
    struct {
      unsigned TRGSRC6:5;
      unsigned :3;
      unsigned TRGSRC7:5;
    };
    struct {
      unsigned TRGSRC60:1;
      unsigned TRGSRC61:1;
      unsigned TRGSRC62:1;
      unsigned TRGSRC63:1;
      unsigned TRGSRC64:1;
      unsigned :3;
      unsigned TRGSRC70:1;
      unsigned TRGSRC71:1;
      unsigned TRGSRC72:1;
      unsigned TRGSRC73:1;
      unsigned TRGSRC74:1;
    };
  };
} ADTRIG4BITS;
extern volatile ADTRIG4BITS ADTRIG4bits __attribute__((__sfr__));

#define ADTRIG5 ADTRIG5
extern volatile unsigned int  ADTRIG5 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG5BITS {
  union {
    struct {
      unsigned TRGSRC8:5;
      unsigned :3;
      unsigned TRGSRC9:5;
    };
    struct {
      unsigned TRGSRC80:1;
      unsigned TRGSRC81:1;
      unsigned TRGSRC82:1;
      unsigned TRGSRC83:1;
      unsigned TRGSRC84:1;
      unsigned :3;
      unsigned TRGSRC90:1;
      unsigned TRGSRC91:1;
      unsigned TRGSRC92:1;
      unsigned TRIGSRC93:1;
      unsigned TRGSRC94:1;
    };
  };
} ADTRIG5BITS;
extern volatile ADTRIG5BITS ADTRIG5bits __attribute__((__sfr__));

#define ADTRIG6 ADTRIG6
extern volatile unsigned int  ADTRIG6 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG6BITS {
  union {
    struct {
      unsigned TRGSRC10:5;
      unsigned :3;
      unsigned TRGSRC11:5;
    };
    struct {
      unsigned TRGSRC100:1;
      unsigned TRGSRC101:1;
      unsigned TRGSRC102:1;
      unsigned TRGSRC103:1;
      unsigned TRGSRC104:1;
      unsigned :3;
      unsigned TRGSRC110:1;
      unsigned TRGSRC111:1;
      unsigned TRGSRC112:1;
      unsigned TRGSRC113:1;
      unsigned TRGSRC114:1;
    };
  };
} ADTRIG6BITS;
extern volatile ADTRIG6BITS ADTRIG6bits __attribute__((__sfr__));

#define ADTRIG7 ADTRIG7
extern volatile unsigned int  ADTRIG7 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG7BITS {
  union {
    struct {
      unsigned TRGSRC12:5;
    };
    struct {
      unsigned TRGSRC120:1;
      unsigned TRGSRC121:1;
      unsigned TRGSRC122:1;
      unsigned TRGSRC123:1;
      unsigned TRGSRC124:1;
    };
  };
} ADTRIG7BITS;
extern volatile ADTRIG7BITS ADTRIG7bits __attribute__((__sfr__));

#define ADTRIG8 ADTRIG8
extern volatile unsigned int  ADTRIG8 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG8BITS {
  union {
    struct {
      unsigned TRGSRC14:5;
    };
    struct {
      unsigned TRGSRC140:1;
      unsigned TRGSRC141:1;
      unsigned TRGSRC142:1;
      unsigned TRGSRC143:1;
      unsigned TRGSRC144:1;
    };
  };
} ADTRIG8BITS;
extern volatile ADTRIG8BITS ADTRIG8bits __attribute__((__sfr__));

#define ADTRIG9 ADTRIG9
extern volatile unsigned int  ADTRIG9 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG9BITS {
  union {
    struct {
      unsigned :8;
      unsigned TRGSRC17:5;
    };
    struct {
      unsigned :8;
      unsigned TRGSRC170:1;
      unsigned TRGSRC171:1;
      unsigned TRGSRC172:1;
      unsigned TRGSRC173:1;
      unsigned TRGSRC174:1;
    };
  };
} ADTRIG9BITS;
extern volatile ADTRIG9BITS ADTRIG9bits __attribute__((__sfr__));

#define ADTRIG10 ADTRIG10
extern volatile unsigned int  ADTRIG10 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG10BITS {
  union {
    struct {
      unsigned TRGSRC18:5;
      unsigned :3;
      unsigned TRGSRC19:5;
    };
    struct {
      unsigned TRGSRC180:1;
      unsigned TRGSRC181:1;
      unsigned TRGSRC182:1;
      unsigned TRGSRC183:1;
      unsigned TRGSRC184:1;
      unsigned :3;
      unsigned TRGSRC190:1;
      unsigned TRGSRC191:1;
      unsigned TRGSRC192:1;
      unsigned TRGSRC193:1;
      unsigned TRGSRC194:1;
    };
  };
} ADTRIG10BITS;
extern volatile ADTRIG10BITS ADTRIG10bits __attribute__((__sfr__));

#define ADTRIG11 ADTRIG11
extern volatile unsigned int  ADTRIG11 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG11BITS {
  union {
    struct {
      unsigned TRGSRC20:5;
      unsigned :3;
      unsigned TRGSRC21:5;
    };
    struct {
      unsigned TRGSRC200:1;
      unsigned TRGSRC201:1;
      unsigned TRGSRC202:1;
      unsigned TRGSRC203:1;
      unsigned TRGSRC204:1;
      unsigned :3;
      unsigned TRGSRC210:1;
      unsigned TRGSRC211:1;
      unsigned TRGSRC212:1;
      unsigned TRGSRC213:1;
      unsigned TRGSRC214:1;
    };
  };
} ADTRIG11BITS;
extern volatile ADTRIG11BITS ADTRIG11bits __attribute__((__sfr__));

#define ADTRIG12 ADTRIG12
extern volatile unsigned int  ADTRIG12 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG12BITS {
  union {
    struct {
      unsigned TRGSRC22:5;
      unsigned :3;
      unsigned TRGSRC23:5;
    };
    struct {
      unsigned TRGSRC220:1;
      unsigned TRGSRC221:1;
      unsigned TRGSRC222:1;
      unsigned TRGSRC223:1;
      unsigned TRGSRC224:1;
      unsigned :3;
      unsigned TRGSRC230:1;
      unsigned TRGSRC231:1;
      unsigned TRGSRC232:1;
      unsigned TRGSRC233:1;
      unsigned TRGSRC234:1;
    };
  };
} ADTRIG12BITS;
extern volatile ADTRIG12BITS ADTRIG12bits __attribute__((__sfr__));

#define ADTRIG13 ADTRIG13
extern volatile unsigned int  ADTRIG13 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG13BITS {
  union {
    struct {
      unsigned TRGSRC24:5;
      unsigned :3;
      unsigned TRGSRC25:5;
    };
    struct {
      unsigned TRGSRC240:1;
      unsigned TRGSRC241:1;
      unsigned TRGSRC242:1;
      unsigned TRGSRC243:1;
      unsigned TRGSRC244:1;
      unsigned :3;
      unsigned TRGSRC250:1;
      unsigned TRGSRC251:1;
      unsigned TRGSRC252:1;
      unsigned TRGSRC253:1;
      unsigned TRGSRC254:1;
    };
  };
} ADTRIG13BITS;
extern volatile ADTRIG13BITS ADTRIG13bits __attribute__((__sfr__));

#define ADTRIG14 ADTRIG14
extern volatile unsigned int  ADTRIG14 __attribute__((__sfr__));
__extension__ typedef struct tagADTRIG14BITS {
  union {
    struct {
      unsigned TRGSRC26:5;
    };
    struct {
      unsigned TRGSRC260:1;
      unsigned TRGSRC261:1;
      unsigned TRGSRC262:1;
      unsigned TRGSRC263:1;
      unsigned TRGSRC264:1;
    };
  };
} ADTRIG14BITS;
extern volatile ADTRIG14BITS ADTRIG14bits __attribute__((__sfr__));

#define DCMP1CON DCMP1CON
extern volatile unsigned int  DCMP1CON __attribute__((__sfr__));
__extension__ typedef struct tagDCMP1CONBITS {
  union {
    struct {
      unsigned IELOLO:1;
      unsigned IELOHI:1;
      unsigned IEHILO:1;
      unsigned IEHIHI:1;
      unsigned IEBTWN:1;
      unsigned DCMPED:1;
      unsigned DCMPGIEN:1;
      unsigned DCMPEN:1;
      unsigned AINID:5;
    };
    struct {
      unsigned :8;
      unsigned AINID0:1;
      unsigned AINID1:1;
      unsigned AINID2:1;
      unsigned AINID3:1;
      unsigned AINID4:1;
    };
  };
} DCMP1CONBITS;
extern volatile DCMP1CONBITS DCMP1CONbits __attribute__((__sfr__));

#define DCMP2CON DCMP2CON
extern volatile unsigned int  DCMP2CON __attribute__((__sfr__));
__extension__ typedef struct tagDCMP2CONBITS {
  union {
    struct {
      unsigned IELOLO:1;
      unsigned IELOHI:1;
      unsigned IEHILO:1;
      unsigned IEHIHI:1;
      unsigned IEBTWN:1;
      unsigned DCMPED:1;
      unsigned DCMPGIEN:1;
      unsigned DCMPEN:1;
      unsigned AINID:5;
    };
    struct {
      unsigned :8;
      unsigned AINID0:1;
      unsigned AINID1:1;
      unsigned AINID2:1;
      unsigned AINID3:1;
      unsigned AINID4:1;
    };
  };
} DCMP2CONBITS;
extern volatile DCMP2CONBITS DCMP2CONbits __attribute__((__sfr__));

#define ADBASE ADBASE
extern volatile unsigned int  ADBASE __attribute__((__sfr__));
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
#define ADCBUF14 ADCBUF14
extern volatile unsigned int  ADCBUF14 __attribute__((__sfr__));
#define ADCBUF17 ADCBUF17
extern volatile unsigned int  ADCBUF17 __attribute__((__sfr__));
#define ADCBUF18 ADCBUF18
extern volatile unsigned int  ADCBUF18 __attribute__((__sfr__));
#define ADCBUF19 ADCBUF19
extern volatile unsigned int  ADCBUF19 __attribute__((__sfr__));
#define ADCBUF20 ADCBUF20
extern volatile unsigned int  ADCBUF20 __attribute__((__sfr__));
#define ADCBUF21 ADCBUF21
extern volatile unsigned int  ADCBUF21 __attribute__((__sfr__));
#define ADCBUF22 ADCBUF22
extern volatile unsigned int  ADCBUF22 __attribute__((__sfr__));
#define ADCBUF23 ADCBUF23
extern volatile unsigned int  ADCBUF23 __attribute__((__sfr__));
#define ADCBUF24 ADCBUF24
extern volatile unsigned int  ADCBUF24 __attribute__((__sfr__));
#define ADCBUF25 ADCBUF25
extern volatile unsigned int  ADCBUF25 __attribute__((__sfr__));
#define ADCBUF26 ADCBUF26
extern volatile unsigned int  ADCBUF26 __attribute__((__sfr__));
#define ISRCCON ISRCCON
extern volatile unsigned int  ISRCCON __attribute__((__sfr__));
__extension__ typedef struct tagISRCCONBITS {
  union {
    struct {
      unsigned ISRCCAL:6;
      unsigned :2;
      unsigned OUTSEL:3;
      unsigned :4;
      unsigned ISRCEN:1;
    };
    struct {
      unsigned ISRCCAL0:1;
      unsigned ISRCCAL1:1;
      unsigned ISRCCAL2:1;
      unsigned ISRCCAL3:1;
      unsigned ISRCCAL4:1;
      unsigned ISRCCAL5:1;
      unsigned :2;
      unsigned OUTSEL0:1;
      unsigned OUTSEL1:1;
      unsigned OUTSEL2:1;
    };
  };
} ISRCCONBITS;
extern volatile ISRCCONBITS ISRCCONbits __attribute__((__sfr__));

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
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
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
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
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

#define CMP3CON CMP3CON
extern volatile unsigned int  CMP3CON __attribute__((__sfr__));
__extension__ typedef struct tagCMP3CONBITS {
  union {
    struct {
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
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
} CMP3CONBITS;
extern volatile CMP3CONBITS CMP3CONbits __attribute__((__sfr__));

#define CMP3DAC CMP3DAC
extern volatile unsigned int  CMP3DAC __attribute__((__sfr__));
__extension__ typedef struct tagCMP3DACBITS {
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
} CMP3DACBITS;
extern volatile CMP3DACBITS CMP3DACbits __attribute__((__sfr__));

#define CMP4CON CMP4CON
extern volatile unsigned int  CMP4CON __attribute__((__sfr__));
__extension__ typedef struct tagCMP4CONBITS {
  union {
    struct {
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
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
} CMP4CONBITS;
extern volatile CMP4CONBITS CMP4CONbits __attribute__((__sfr__));

#define CMP4DAC CMP4DAC
extern volatile unsigned int  CMP4DAC __attribute__((__sfr__));
__extension__ typedef struct tagCMP4DACBITS {
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
} CMP4DACBITS;
extern volatile CMP4DACBITS CMP4DACbits __attribute__((__sfr__));

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

#define RPOR8 RPOR8
extern volatile unsigned int  RPOR8 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR8BITS {
  union {
    struct {
      unsigned RP48R:6;
      unsigned :2;
      unsigned RP49R:6;
    };
    struct {
      unsigned RP48R0:1;
      unsigned RP48R1:1;
      unsigned RP48R2:1;
      unsigned RP48R3:1;
      unsigned RP48R4:1;
      unsigned RP48R5:1;
      unsigned :2;
      unsigned RP49R0:1;
      unsigned RP49R1:1;
      unsigned RP49R2:1;
      unsigned RP49R3:1;
      unsigned RP49R4:1;
      unsigned RP49R5:1;
    };
  };
} RPOR8BITS;
extern volatile RPOR8BITS RPOR8bits __attribute__((__sfr__));

#define RPOR9 RPOR9
extern volatile unsigned int  RPOR9 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR9BITS {
  union {
    struct {
      unsigned RP50R:6;
      unsigned :2;
      unsigned RP51R:6;
    };
    struct {
      unsigned RP50R0:1;
      unsigned RP50R1:1;
      unsigned RP50R2:1;
      unsigned RP50R3:1;
      unsigned RP50R4:1;
      unsigned RP50R5:1;
      unsigned :2;
      unsigned RP51R0:1;
      unsigned RP51R1:1;
      unsigned RP51R2:1;
      unsigned RP51R3:1;
      unsigned RP51R4:1;
      unsigned RP51R5:1;
    };
  };
} RPOR9BITS;
extern volatile RPOR9BITS RPOR9bits __attribute__((__sfr__));

#define RPOR10 RPOR10
extern volatile unsigned int  RPOR10 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR10BITS {
  union {
    struct {
      unsigned RP52R:6;
      unsigned :2;
      unsigned RP53R:6;
    };
    struct {
      unsigned RP52R0:1;
      unsigned RP52R1:1;
      unsigned RP52R2:1;
      unsigned RP52R3:1;
      unsigned RP52R4:1;
      unsigned RP52R5:1;
      unsigned :2;
      unsigned RP53R0:1;
      unsigned RP53R1:1;
      unsigned RP53R2:1;
      unsigned RP53R3:1;
      unsigned RP53R4:1;
      unsigned RP53R5:1;
    };
  };
} RPOR10BITS;
extern volatile RPOR10BITS RPOR10bits __attribute__((__sfr__));

#define RPOR11 RPOR11
extern volatile unsigned int  RPOR11 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR11BITS {
  union {
    struct {
      unsigned RP54R:6;
      unsigned :2;
      unsigned RP55R:6;
    };
    struct {
      unsigned RP54R0:1;
      unsigned RP54R1:1;
      unsigned RP54R2:1;
      unsigned RP54R3:1;
      unsigned RP54R4:1;
      unsigned RP54R5:1;
      unsigned :2;
      unsigned RP55R0:1;
      unsigned RP55R1:1;
      unsigned RP55R2:1;
      unsigned RP55R3:1;
      unsigned RP55R4:1;
      unsigned RP55R5:1;
    };
  };
} RPOR11BITS;
extern volatile RPOR11BITS RPOR11bits __attribute__((__sfr__));

#define RPOR12 RPOR12
extern volatile unsigned int  RPOR12 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR12BITS {
  union {
    struct {
      unsigned RP56R:6;
      unsigned :2;
      unsigned RP57R:6;
    };
    struct {
      unsigned RP56R0:1;
      unsigned RP56R1:1;
      unsigned RP56R2:1;
      unsigned RP56R3:1;
      unsigned RP56R4:1;
      unsigned RP56R5:1;
      unsigned :2;
      unsigned RP57R0:1;
      unsigned RP57R1:1;
      unsigned RP57R2:1;
      unsigned RP57R3:1;
      unsigned RP57R4:1;
      unsigned RP57R5:1;
    };
  };
} RPOR12BITS;
extern volatile RPOR12BITS RPOR12bits __attribute__((__sfr__));

#define RPOR13 RPOR13
extern volatile unsigned int  RPOR13 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR13BITS {
  union {
    struct {
      unsigned RP58R:6;
      unsigned :2;
      unsigned RP59R:6;
    };
    struct {
      unsigned RP58R0:1;
      unsigned RP58R1:1;
      unsigned RP58R2:1;
      unsigned RP58R3:1;
      unsigned RP58R4:1;
      unsigned RP58R5:1;
      unsigned :2;
      unsigned RP59R0:1;
      unsigned RP59R1:1;
      unsigned RP59R2:1;
      unsigned RP59R3:1;
      unsigned RP59R4:1;
      unsigned RP59R5:1;
    };
  };
} RPOR13BITS;
extern volatile RPOR13BITS RPOR13bits __attribute__((__sfr__));

#define RPOR14 RPOR14
extern volatile unsigned int  RPOR14 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR14BITS {
  union {
    struct {
      unsigned RP60R:6;
      unsigned :2;
      unsigned RP61R:6;
    };
    struct {
      unsigned RP60R0:1;
      unsigned RP60R1:1;
      unsigned RP60R2:1;
      unsigned RP60R3:1;
      unsigned RP60R4:1;
      unsigned RP60R5:1;
      unsigned :2;
      unsigned RP61R0:1;
      unsigned RP61R1:1;
      unsigned RP61R2:1;
      unsigned RP61R3:1;
      unsigned RP61R4:1;
      unsigned RP61R5:1;
    };
  };
} RPOR14BITS;
extern volatile RPOR14BITS RPOR14bits __attribute__((__sfr__));

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
      unsigned :8;
      unsigned T1CKRR:8;
    };
    struct {
      unsigned :8;
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
      unsigned IC2R:8;
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
      unsigned IC2R0:1;
      unsigned IC2R1:1;
      unsigned IC2R2:1;
      unsigned IC2R3:1;
      unsigned IC2R4:1;
      unsigned IC2R5:1;
      unsigned IC2R6:1;
      unsigned IC2R7:1;
    };
  };
} RPINR7BITS;
extern volatile RPINR7BITS RPINR7bits __attribute__((__sfr__));

#define RPINR8 RPINR8
extern volatile unsigned int  RPINR8 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR8BITS {
  union {
    struct {
      unsigned IC3R:8;
      unsigned IC4R:8;
    };
    struct {
      unsigned IC3R0:1;
      unsigned IC3R1:1;
      unsigned IC3R2:1;
      unsigned IC3R3:1;
      unsigned IC3R4:1;
      unsigned IC3R5:1;
      unsigned IC3R6:1;
      unsigned IC3R7:1;
      unsigned IC4R0:1;
      unsigned IC4R1:1;
      unsigned IC4R2:1;
      unsigned IC4R3:1;
      unsigned IC4R4:1;
      unsigned IC4R5:1;
      unsigned IC4R6:1;
      unsigned IC4R7:1;
    };
  };
} RPINR8BITS;
extern volatile RPINR8BITS RPINR8bits __attribute__((__sfr__));

#define RPINR11 RPINR11
extern volatile unsigned int  RPINR11 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR11BITS {
  union {
    struct {
      unsigned OCFAR:8;
    };
    struct {
      unsigned OCFAR0:1;
      unsigned OCFAR1:1;
      unsigned OCFAR2:1;
      unsigned OCFAR3:1;
      unsigned OCFAR4:1;
      unsigned OCFAR5:1;
      unsigned OCFAR6:1;
      unsigned OCFAR7:1;
    };
  };
} RPINR11BITS;
extern volatile RPINR11BITS RPINR11bits __attribute__((__sfr__));

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

#define RPINR19 RPINR19
extern volatile unsigned int  RPINR19 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR19BITS {
  union {
    struct {
      unsigned U2RXR:8;
      unsigned U2CTSR:8;
    };
    struct {
      unsigned U2RXR0:1;
      unsigned U2RXR1:1;
      unsigned U2RXR2:1;
      unsigned U2RXR3:1;
      unsigned U2RXR4:1;
      unsigned U2RXR5:1;
      unsigned U2RXR6:1;
      unsigned U2RXR7:1;
      unsigned U2CTSR0:1;
      unsigned U2CTSR1:1;
      unsigned U2CTSR2:1;
      unsigned U2CTSR3:1;
      unsigned U2CTSR4:1;
      unsigned U2CTSR5:1;
      unsigned U2CTSR6:1;
      unsigned U2CTSR7:1;
    };
  };
} RPINR19BITS;
extern volatile RPINR19BITS RPINR19bits __attribute__((__sfr__));

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

#define RPINR22 RPINR22
extern volatile unsigned int  RPINR22 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR22BITS {
  union {
    struct {
      unsigned SDI2R:8;
      unsigned SCK2INR:8;
    };
    struct {
      unsigned SDI2R0:1;
      unsigned SDI2R1:1;
      unsigned SDI2R2:1;
      unsigned SDI2R3:1;
      unsigned SDI2R4:1;
      unsigned SDI2R5:1;
      unsigned SDI2R6:1;
      unsigned SDI2R7:1;
      unsigned SCK2INR0:1;
      unsigned SCK2INR1:1;
      unsigned SCK2INR2:1;
      unsigned SCK2INR3:1;
      unsigned SCK2INR4:1;
      unsigned SCK2INR5:1;
      unsigned SCK2INR6:1;
      unsigned SCK2INR7:1;
    };
  };
} RPINR22BITS;
extern volatile RPINR22BITS RPINR22bits __attribute__((__sfr__));

#define RPINR23 RPINR23
extern volatile unsigned int  RPINR23 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR23BITS {
  union {
    struct {
      unsigned SS2R:8;
    };
    struct {
      unsigned SS2R0:1;
      unsigned SS2R1:1;
      unsigned SS2R2:1;
      unsigned SS2R3:1;
      unsigned SS2R4:1;
      unsigned SS2R5:1;
      unsigned SS2R6:1;
      unsigned SS2R7:1;
    };
  };
} RPINR23BITS;
extern volatile RPINR23BITS RPINR23bits __attribute__((__sfr__));

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
      unsigned P2ACTIV:1;
      unsigned SFTSWP:1;
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
#define NVMSRCADR NVMSRCADR
extern volatile unsigned int  NVMSRCADR __attribute__((__sfr__));
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

#define LFSR LFSR
extern volatile unsigned int  LFSR __attribute__((__sfr__));
typedef struct tagLFSRBITS {
  unsigned LFSR:15;
} LFSRBITS;
extern volatile LFSRBITS LFSRbits __attribute__((__sfr__));

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
  unsigned SPI2MD:1;
  unsigned U1MD:1;
  unsigned U2MD:1;
  unsigned I2C1MD:1;
  unsigned :1;
  unsigned PWMMD:1;
  unsigned :1;
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
  unsigned :8;
  unsigned CMPMD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile unsigned int  PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  unsigned :3;
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
  unsigned PWM4MD:1;
  unsigned PWM5MD:1;
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
  unsigned CMP3MD:1;
  unsigned CMP4MD:1;
} PMD7BITS;
extern volatile PMD7BITS PMD7bits __attribute__((__sfr__));

#define PMD8 PMD8
extern volatile unsigned int  PMD8 __attribute__((__sfr__));
typedef struct tagPMD8BITS {
  unsigned :1;
  unsigned CCSMD:1;
  unsigned :7;
  unsigned ABGMD:1;
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
  unsigned :1;
  unsigned IC2IF:1;
  unsigned OC2IF:1;
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
  unsigned :4;
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
  unsigned :3;
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
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile unsigned int  IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  unsigned :1;
  unsigned U1EIF:1;
  unsigned U2EIF:1;
  unsigned :6;
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
  unsigned PWM4IF:1;
  unsigned PWM5IF:1;
  unsigned :4;
  unsigned AC2IF:1;
  unsigned AC3IF:1;
  unsigned AC4IF:1;
  unsigned :4;
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
typedef struct tagIFS8BITS {
  unsigned :14;
  unsigned ICDIF:1;
  unsigned JTAGIF:1;
} IFS8BITS;
extern volatile IFS8BITS IFS8bits __attribute__((__sfr__));

#define IFS9 IFS9
extern volatile unsigned int  IFS9 __attribute__((__sfr__));
typedef struct tagIFS9BITS {
  unsigned :7;
  unsigned ADCAN8IF:1;
  unsigned ADCAN9IF:1;
  unsigned ADCAN10IF:1;
  unsigned ADCAN11IF:1;
  unsigned ADCAN12IF:1;
  unsigned :1;
  unsigned ADCAN14IF:1;
} IFS9BITS;
extern volatile IFS9BITS IFS9bits __attribute__((__sfr__));

#define IFS10 IFS10
extern volatile unsigned int  IFS10 __attribute__((__sfr__));
typedef struct tagIFS10BITS {
  unsigned ADCAN17IF:1;
  unsigned ADCAN18IF:1;
  unsigned ADCAN19IF:1;
  unsigned ADCAN20IF:1;
  unsigned ADCAN21IF:1;
  unsigned ADCAN22IF:1;
  unsigned ADCAN23IF:1;
  unsigned ADCAN24IF:1;
  unsigned ADCAN25IF:1;
  unsigned ADCAN26IF:1;
  unsigned :3;
  unsigned I2C1BCIF:1;
  unsigned I2C2BCIF:1;
} IFS10BITS;
extern volatile IFS10BITS IFS10bits __attribute__((__sfr__));

#define IFS11 IFS11
extern volatile unsigned int  IFS11 __attribute__((__sfr__));
typedef struct tagIFS11BITS {
  unsigned :1;
  unsigned ADCMP1IF:1;
  unsigned ADCMP2IF:1;
  unsigned ADFLTR1IF:1;
  unsigned ADFLTR2IF:1;
} IFS11BITS;
extern volatile IFS11BITS IFS11bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile unsigned int  IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  unsigned INT0IE:1;
  unsigned IC1IE:1;
  unsigned OC1IE:1;
  unsigned T1IE:1;
  unsigned :1;
  unsigned IC2IE:1;
  unsigned OC2IE:1;
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
  unsigned :4;
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
  unsigned :3;
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
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile unsigned int  IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  unsigned :1;
  unsigned U1EIE:1;
  unsigned U2EIE:1;
  unsigned :6;
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
  unsigned PWM4IE:1;
  unsigned PWM5IE:1;
  unsigned :4;
  unsigned AC2IE:1;
  unsigned AC3IE:1;
  unsigned AC4IE:1;
  unsigned :4;
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
  unsigned :7;
  unsigned ADCAN8IE:1;
  unsigned ADCAN9IE:1;
  unsigned ADCAN10IE:1;
  unsigned ADCAN11IE:1;
  unsigned ADCAN12IE:1;
  unsigned :1;
  unsigned ADCAN14IE:1;
} IEC9BITS;
extern volatile IEC9BITS IEC9bits __attribute__((__sfr__));

#define IEC10 IEC10
extern volatile unsigned int  IEC10 __attribute__((__sfr__));
typedef struct tagIEC10BITS {
  unsigned ADCAN17IE:1;
  unsigned ADCAN18IE:1;
  unsigned ADCAN19IE:1;
  unsigned ADCAN20IE:1;
  unsigned ADCAN21IE:1;
  unsigned ADCAN22IE:1;
  unsigned ADCAN23IE:1;
  unsigned ADCAN24IE:1;
  unsigned ADCAN25IE:1;
  unsigned ADCAN26IE:1;
  unsigned :3;
  unsigned I2C1BCIE:1;
  unsigned I2C2BCIE:1;
} IEC10BITS;
extern volatile IEC10BITS IEC10bits __attribute__((__sfr__));

#define IEC11 IEC11
extern volatile unsigned int  IEC11 __attribute__((__sfr__));
typedef struct tagIEC11BITS {
  unsigned :1;
  unsigned ADCMP1IE:1;
  unsigned ADCMP2IE:1;
  unsigned ADFLTR1IE:1;
  unsigned ADFLTR2IE:1;
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
      unsigned :4;
      unsigned IC2IP:3;
      unsigned :1;
      unsigned OC2IP:3;
      unsigned :1;
      unsigned T2IP:3;
    };
    struct {
      unsigned :4;
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

#define IPC6 IPC6
extern volatile unsigned int  IPC6 __attribute__((__sfr__));
__extension__ typedef struct tagIPC6BITS {
  union {
    struct {
      unsigned :4;
      unsigned OC3IP:3;
      unsigned :1;
      unsigned OC4IP:3;
      unsigned :1;
      unsigned T4IP:3;
    };
    struct {
      unsigned :4;
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
      unsigned :4;
      unsigned IC3IP:3;
      unsigned :1;
      unsigned IC4IP:3;
    };
    struct {
      unsigned :4;
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
      unsigned :1;
      unsigned U2EIP:3;
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
      unsigned :1;
      unsigned PWM4IP:3;
      unsigned :1;
      unsigned PWM5IP:3;
    };
    struct {
      unsigned PWM3IP0:1;
      unsigned PWM3IP1:1;
      unsigned PWM3IP2:1;
      unsigned :1;
      unsigned PWM4IP0:1;
      unsigned PWM4IP1:1;
      unsigned PWM4IP2:1;
      unsigned :1;
      unsigned PWM5IP0:1;
      unsigned PWM5IP1:1;
      unsigned PWM5IP2:1;
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

#define IPC26 IPC26
extern volatile unsigned int  IPC26 __attribute__((__sfr__));
__extension__ typedef struct tagIPC26BITS {
  union {
    struct {
      unsigned AC3IP:3;
      unsigned :1;
      unsigned AC4IP:3;
    };
    struct {
      unsigned AC3IP0:1;
      unsigned AC3IP1:1;
      unsigned AC3IP2:1;
      unsigned :1;
      unsigned AC4IP0:1;
      unsigned AC4IP1:1;
      unsigned AC4IP2:1;
    };
  };
} IPC26BITS;
extern volatile IPC26BITS IPC26bits __attribute__((__sfr__));

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
      unsigned :4;
      unsigned ADCAN14IP:3;
    };
    struct {
      unsigned :4;
      unsigned ADCAN14IP0:1;
      unsigned ADCAN14IP1:1;
      unsigned ADCAN14IP2:1;
    };
  };
} IPC39BITS;
extern volatile IPC39BITS IPC39bits __attribute__((__sfr__));

#define IPC40 IPC40
extern volatile unsigned int  IPC40 __attribute__((__sfr__));
__extension__ typedef struct tagIPC40BITS {
  union {
    struct {
      unsigned ADCAN17IP:3;
      unsigned :1;
      unsigned ADCAN18IP:3;
      unsigned :1;
      unsigned ADCAN19IP:3;
      unsigned :1;
      unsigned ADCAN20IP:3;
    };
    struct {
      unsigned ADCAN17IP0:1;
      unsigned ADCAN17IP1:1;
      unsigned ADCAN17IP2:1;
      unsigned :1;
      unsigned ADCAN18IP0:1;
      unsigned ADCAN18IP1:1;
      unsigned ADCAN18IP2:1;
      unsigned :1;
      unsigned ADCAN19IP0:1;
      unsigned ADCAN19IP1:1;
      unsigned ADCAN19IP2:1;
      unsigned :1;
      unsigned ADCAN20IP0:1;
      unsigned ADCAN20IP1:1;
      unsigned ADCAN20IP2:1;
    };
  };
} IPC40BITS;
extern volatile IPC40BITS IPC40bits __attribute__((__sfr__));

#define IPC41 IPC41
extern volatile unsigned int  IPC41 __attribute__((__sfr__));
__extension__ typedef struct tagIPC41BITS {
  union {
    struct {
      unsigned ADCAN21IP:3;
      unsigned :1;
      unsigned ADCAN22IP:3;
      unsigned :1;
      unsigned ADCAN23IP:3;
      unsigned :1;
      unsigned ADCAN24IP:3;
    };
    struct {
      unsigned ADCAN21IP0:1;
      unsigned ADCAN21IP1:1;
      unsigned ADCAN21IP2:1;
      unsigned :1;
      unsigned ADCAN22IP0:1;
      unsigned ADCAN22IP1:1;
      unsigned ADCAN22IP2:1;
      unsigned :1;
      unsigned ADCAN23IP0:1;
      unsigned ADCAN23IP1:1;
      unsigned ADCAN23IP2:1;
      unsigned :1;
      unsigned ADCAN24IP0:1;
      unsigned ADCAN24IP1:1;
      unsigned ADCAN24IP2:1;
    };
  };
} IPC41BITS;
extern volatile IPC41BITS IPC41bits __attribute__((__sfr__));

#define IPC42 IPC42
extern volatile unsigned int  IPC42 __attribute__((__sfr__));
__extension__ typedef struct tagIPC42BITS {
  union {
    struct {
      unsigned ADCAN25IP:3;
      unsigned :1;
      unsigned ADCAN26IP:3;
    };
    struct {
      unsigned ADCAN25IP0:1;
      unsigned ADCAN25IP1:1;
      unsigned ADCAN25IP2:1;
      unsigned :1;
      unsigned ADCAN26IP0:1;
      unsigned ADCAN26IP1:1;
      unsigned ADCAN26IP2:1;
    };
  };
} IPC42BITS;
extern volatile IPC42BITS IPC42bits __attribute__((__sfr__));

#define IPC43 IPC43
extern volatile unsigned int  IPC43 __attribute__((__sfr__));
__extension__ typedef struct tagIPC43BITS {
  union {
    struct {
      unsigned :4;
      unsigned I2C1BCIP:3;
      unsigned :1;
      unsigned I2C2BCIP:3;
    };
    struct {
      unsigned :4;
      unsigned I2C1BCIP0:1;
      unsigned I2C1BCIP1:1;
      unsigned I2C1BCIP2:1;
      unsigned :1;
      unsigned I2C2BCIP0:1;
      unsigned I2C2BCIP1:1;
      unsigned I2C2BCIP2:1;
    };
  };
} IPC43BITS;
extern volatile IPC43BITS IPC43bits __attribute__((__sfr__));

#define IPC44 IPC44
extern volatile unsigned int  IPC44 __attribute__((__sfr__));
__extension__ typedef struct tagIPC44BITS {
  union {
    struct {
      unsigned :4;
      unsigned ADCMP1IP:3;
      unsigned :1;
      unsigned ADCMP2IP:3;
      unsigned :1;
      unsigned ADFLTR1IP:3;
    };
    struct {
      unsigned :4;
      unsigned ADCMP1IP0:1;
      unsigned ADCMP1IP1:1;
      unsigned ADCMP1IP2:1;
      unsigned :1;
      unsigned ADCMP2IP0:1;
      unsigned ADCMP2IP1:1;
      unsigned ADCMP2IP2:1;
      unsigned :1;
      unsigned ADFLTR1IP0:1;
      unsigned ADFLTR1IP1:1;
      unsigned ADFLTR1IP2:1;
    };
  };
} IPC44BITS;
extern volatile IPC44BITS IPC44bits __attribute__((__sfr__));

#define IPC45 IPC45
extern volatile unsigned int  IPC45 __attribute__((__sfr__));
__extension__ typedef struct tagIPC45BITS {
  union {
    struct {
      unsigned ADFLTR2IP:3;
    };
    struct {
      unsigned ADFLTR2IP0:1;
      unsigned ADFLTR2IP1:1;
      unsigned ADFLTR2IP2:1;
    };
  };
} IPC45BITS;
extern volatile IPC45BITS IPC45bits __attribute__((__sfr__));

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
  unsigned :5;
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
#define OC2CON1 OC2CON1
extern volatile unsigned int  OC2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagOC2CON1BITS {
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

#define PWMCON4 PWMCON4
extern volatile unsigned int  PWMCON4 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON4BITS {
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
} PWMCON4BITS;
extern volatile PWMCON4BITS PWMCON4bits __attribute__((__sfr__));

#define IOCON4 IOCON4
extern volatile unsigned int  IOCON4 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON4BITS {
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
} IOCON4BITS;
extern volatile IOCON4BITS IOCON4bits __attribute__((__sfr__));

#define FCLCON4 FCLCON4
extern volatile unsigned int  FCLCON4 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON4BITS {
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
} FCLCON4BITS;
extern volatile FCLCON4BITS FCLCON4bits __attribute__((__sfr__));

#define PDC4 PDC4
extern volatile unsigned int  PDC4 __attribute__((__sfr__));
#define PHASE4 PHASE4
extern volatile unsigned int  PHASE4 __attribute__((__sfr__));
#define DTR4 DTR4
extern volatile unsigned int  DTR4 __attribute__((__sfr__));
#define ALTDTR4 ALTDTR4
extern volatile unsigned int  ALTDTR4 __attribute__((__sfr__));
#define SDC4 SDC4
extern volatile unsigned int  SDC4 __attribute__((__sfr__));
#define SPHASE4 SPHASE4
extern volatile unsigned int  SPHASE4 __attribute__((__sfr__));
#define TRIG4 TRIG4
extern volatile unsigned int  TRIG4 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG4BITS {
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
} TRIG4BITS;
extern volatile TRIG4BITS TRIG4bits __attribute__((__sfr__));

#define TRGCON4 TRGCON4
extern volatile unsigned int  TRGCON4 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON4BITS {
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
} TRGCON4BITS;
extern volatile TRGCON4BITS TRGCON4bits __attribute__((__sfr__));

#define STRIG4 STRIG4
extern volatile unsigned int  STRIG4 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG4BITS {
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
} STRIG4BITS;
extern volatile STRIG4BITS STRIG4bits __attribute__((__sfr__));

#define PWMCAP4 PWMCAP4
extern volatile unsigned int  PWMCAP4 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCAP4BITS {
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
} PWMCAP4BITS;
extern volatile PWMCAP4BITS PWMCAP4bits __attribute__((__sfr__));

#define LEBCON4 LEBCON4
extern volatile unsigned int  LEBCON4 __attribute__((__sfr__));
typedef struct tagLEBCON4BITS {
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
} LEBCON4BITS;
extern volatile LEBCON4BITS LEBCON4bits __attribute__((__sfr__));

#define LEBDLY4 LEBDLY4
extern volatile unsigned int  LEBDLY4 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY4BITS {
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
} LEBDLY4BITS;
extern volatile LEBDLY4BITS LEBDLY4bits __attribute__((__sfr__));

#define AUXCON4 AUXCON4
extern volatile unsigned int  AUXCON4 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON4BITS {
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
} AUXCON4BITS;
extern volatile AUXCON4BITS AUXCON4bits __attribute__((__sfr__));

#define PWMCON5 PWMCON5
extern volatile unsigned int  PWMCON5 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON5BITS {
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
} PWMCON5BITS;
extern volatile PWMCON5BITS PWMCON5bits __attribute__((__sfr__));

#define IOCON5 IOCON5
extern volatile unsigned int  IOCON5 __attribute__((__sfr__));
__extension__ typedef struct tagIOCON5BITS {
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
} IOCON5BITS;
extern volatile IOCON5BITS IOCON5bits __attribute__((__sfr__));

#define FCLCON5 FCLCON5
extern volatile unsigned int  FCLCON5 __attribute__((__sfr__));
__extension__ typedef struct tagFCLCON5BITS {
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
} FCLCON5BITS;
extern volatile FCLCON5BITS FCLCON5bits __attribute__((__sfr__));

#define PDC5 PDC5
extern volatile unsigned int  PDC5 __attribute__((__sfr__));
#define PHASE5 PHASE5
extern volatile unsigned int  PHASE5 __attribute__((__sfr__));
#define DTR5 DTR5
extern volatile unsigned int  DTR5 __attribute__((__sfr__));
#define ALTDTR5 ALTDTR5
extern volatile unsigned int  ALTDTR5 __attribute__((__sfr__));
#define SDC5 SDC5
extern volatile unsigned int  SDC5 __attribute__((__sfr__));
#define SPHASE5 SPHASE5
extern volatile unsigned int  SPHASE5 __attribute__((__sfr__));
#define TRIG5 TRIG5
extern volatile unsigned int  TRIG5 __attribute__((__sfr__));
__extension__ typedef struct tagTRIG5BITS {
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
} TRIG5BITS;
extern volatile TRIG5BITS TRIG5bits __attribute__((__sfr__));

#define TRGCON5 TRGCON5
extern volatile unsigned int  TRGCON5 __attribute__((__sfr__));
__extension__ typedef struct tagTRGCON5BITS {
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
} TRGCON5BITS;
extern volatile TRGCON5BITS TRGCON5bits __attribute__((__sfr__));

#define STRIG5 STRIG5
extern volatile unsigned int  STRIG5 __attribute__((__sfr__));
__extension__ typedef struct tagSTRIG5BITS {
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
} STRIG5BITS;
extern volatile STRIG5BITS STRIG5bits __attribute__((__sfr__));

#define PWMCAP5 PWMCAP5
extern volatile unsigned int  PWMCAP5 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCAP5BITS {
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
} PWMCAP5BITS;
extern volatile PWMCAP5BITS PWMCAP5bits __attribute__((__sfr__));

#define LEBCON5 LEBCON5
extern volatile unsigned int  LEBCON5 __attribute__((__sfr__));
typedef struct tagLEBCON5BITS {
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
} LEBCON5BITS;
extern volatile LEBCON5BITS LEBCON5bits __attribute__((__sfr__));

#define LEBDLY5 LEBDLY5
extern volatile unsigned int  LEBDLY5 __attribute__((__sfr__));
__extension__ typedef struct tagLEBDLY5BITS {
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
} LEBDLY5BITS;
extern volatile LEBDLY5BITS LEBDLY5bits __attribute__((__sfr__));

#define AUXCON5 AUXCON5
extern volatile unsigned int  AUXCON5 __attribute__((__sfr__));
__extension__ typedef struct tagAUXCON5BITS {
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
} AUXCON5BITS;
extern volatile AUXCON5BITS AUXCON5bits __attribute__((__sfr__));

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
  unsigned :1;
  unsigned ANSB5:1;
  unsigned ANSB6:1;
  unsigned ANSB7:1;
  unsigned :1;
  unsigned ANSB9:1;
  unsigned ANSB10:1;
} ANSELBBITS;
extern volatile ANSELBBITS ANSELBbits __attribute__((__sfr__));

#define TRISC TRISC
extern volatile unsigned int  TRISC __attribute__((__sfr__));
typedef struct tagTRISCBITS {
  unsigned TRISC0:1;
  unsigned TRISC1:1;
  unsigned TRISC2:1;
  unsigned TRISC3:1;
  unsigned TRISC4:1;
  unsigned TRISC5:1;
  unsigned TRISC6:1;
  unsigned TRISC7:1;
  unsigned TRISC8:1;
  unsigned TRISC9:1;
  unsigned TRISC10:1;
  unsigned TRISC11:1;
  unsigned TRISC12:1;
  unsigned TRISC13:1;
} TRISCBITS;
extern volatile TRISCBITS TRISCbits __attribute__((__sfr__));

#define PORTC PORTC
extern volatile unsigned int  PORTC __attribute__((__sfr__));
typedef struct tagPORTCBITS {
  unsigned RC0:1;
  unsigned RC1:1;
  unsigned RC2:1;
  unsigned RC3:1;
  unsigned RC4:1;
  unsigned RC5:1;
  unsigned RC6:1;
  unsigned RC7:1;
  unsigned RC8:1;
  unsigned RC9:1;
  unsigned RC10:1;
  unsigned RC11:1;
  unsigned RC12:1;
  unsigned RC13:1;
} PORTCBITS;
extern volatile PORTCBITS PORTCbits __attribute__((__sfr__));

#define LATC LATC
extern volatile unsigned int  LATC __attribute__((__sfr__));
typedef struct tagLATCBITS {
  unsigned LATC0:1;
  unsigned LATC1:1;
  unsigned LATC2:1;
  unsigned LATC3:1;
  unsigned LATC4:1;
  unsigned LATC5:1;
  unsigned LATC6:1;
  unsigned LATC7:1;
  unsigned LATC8:1;
  unsigned LATC9:1;
  unsigned LATC10:1;
  unsigned LATC11:1;
  unsigned LATC12:1;
  unsigned LATC13:1;
} LATCBITS;
extern volatile LATCBITS LATCbits __attribute__((__sfr__));

#define ODCC ODCC
extern volatile unsigned int  ODCC __attribute__((__sfr__));
typedef struct tagODCCBITS {
  unsigned ODCC0:1;
  unsigned ODCC1:1;
  unsigned ODCC2:1;
  unsigned ODCC3:1;
  unsigned ODCC4:1;
  unsigned ODCC5:1;
  unsigned ODCC6:1;
  unsigned ODCC7:1;
  unsigned ODCC8:1;
  unsigned ODCC9:1;
  unsigned ODCC10:1;
  unsigned ODCC11:1;
  unsigned ODCC12:1;
  unsigned ODCC13:1;
} ODCCBITS;
extern volatile ODCCBITS ODCCbits __attribute__((__sfr__));

#define CNENC CNENC
extern volatile unsigned int  CNENC __attribute__((__sfr__));
typedef struct tagCNENCBITS {
  unsigned CNIEC0:1;
  unsigned CNIEC1:1;
  unsigned CNIEC2:1;
  unsigned CNIEC3:1;
  unsigned CNIEC4:1;
  unsigned CNIEC5:1;
  unsigned CNIEC6:1;
  unsigned CNIEC7:1;
  unsigned CNIEC8:1;
  unsigned CNIEC9:1;
  unsigned CNIEC10:1;
  unsigned CNIEC11:1;
  unsigned CNIEC12:1;
  unsigned CNIEC13:1;
} CNENCBITS;
extern volatile CNENCBITS CNENCbits __attribute__((__sfr__));

#define CNPUC CNPUC
extern volatile unsigned int  CNPUC __attribute__((__sfr__));
typedef struct tagCNPUCBITS {
  unsigned CNPUC0:1;
  unsigned CNPUC1:1;
  unsigned CNPUC2:1;
  unsigned CNPUC3:1;
  unsigned CNPUC4:1;
  unsigned CNPUC5:1;
  unsigned CNPUC6:1;
  unsigned CNPUC7:1;
  unsigned CNPUC8:1;
  unsigned CNPUC9:1;
  unsigned CNPUC10:1;
  unsigned CNPUC11:1;
  unsigned CNPUC12:1;
  unsigned CNPUC13:1;
} CNPUCBITS;
extern volatile CNPUCBITS CNPUCbits __attribute__((__sfr__));

#define CNPDC CNPDC
extern volatile unsigned int  CNPDC __attribute__((__sfr__));
typedef struct tagCNPDCBITS {
  unsigned CNPDC0:1;
  unsigned CNPDC1:1;
  unsigned CNPDC2:1;
  unsigned CNPDC3:1;
  unsigned CNPDC4:1;
  unsigned CNPDC5:1;
  unsigned CNPDC6:1;
  unsigned CNPDC7:1;
  unsigned CNPDC8:1;
  unsigned CNPDC9:1;
  unsigned CNPDC10:1;
  unsigned CNPDC11:1;
  unsigned CNPDC12:1;
  unsigned CNPDC13:1;
} CNPDCBITS;
extern volatile CNPDCBITS CNPDCbits __attribute__((__sfr__));

#define ANSELC ANSELC
extern volatile unsigned int  ANSELC __attribute__((__sfr__));
typedef struct tagANSELCBITS {
  unsigned ANSC0:1;
  unsigned ANSC1:1;
  unsigned ANSC2:1;
  unsigned :1;
  unsigned ANSC4:1;
  unsigned ANSC5:1;
  unsigned ANSC6:1;
  unsigned :2;
  unsigned ANSC9:1;
  unsigned ANSC10:1;
  unsigned ANSC11:1;
  unsigned ANSC12:1;
} ANSELCBITS;
extern volatile ANSELCBITS ANSELCbits __attribute__((__sfr__));

#define ADCAL1 ADCAL1
extern volatile unsigned int  ADCAL1 __attribute__((__sfr__));
#define ADCAL2 ADCAL2
extern volatile unsigned int  ADCAL2 __attribute__((__sfr__));
#define ADCAL3 ADCAL3
extern volatile unsigned int  ADCAL3 __attribute__((__sfr__));
#define ADCAL4 ADCAL4
extern volatile unsigned int  ADCAL4 __attribute__((__sfr__));
#define ADCAL5 ADCAL5
extern volatile unsigned int  ADCAL5 __attribute__((__sfr__));
#define ADCAL6 ADCAL6
extern volatile unsigned int  ADCAL6 __attribute__((__sfr__));
#define ADCAL7 ADCAL7
extern volatile unsigned int  ADCAL7 __attribute__((__sfr__));
#define ADCAL8 ADCAL8
extern volatile unsigned int  ADCAL8 __attribute__((__sfr__));
#define ADCAL9 ADCAL9
extern volatile unsigned int  ADCAL9 __attribute__((__sfr__));
#define ADCAL10 ADCAL10
extern volatile unsigned int  ADCAL10 __attribute__((__sfr__));
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

/* I2C1CON1 */
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
/* Bitname _STRICT cannot be defined because it is used by more than one SFR */
/* Bitname _SCLREL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CEN cannot be defined because it is used by more than one SFR */

/* I2C1CON2 */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */

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

/* I2C2CON1 */
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
/* Bitname _STRICT cannot be defined because it is used by more than one SFR */
/* Bitname _SCLREL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _I2CEN cannot be defined because it is used by more than one SFR */

/* I2C2CON2 */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */

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
/* Bitname _ACKTIM cannot be defined because it is used by more than one SFR */
/* Bitname _TRSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */

/* I2C2ADD */
/* Bitname _ADD cannot be defined because it is used by more than one SFR */

/* I2C2MSK */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK8 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK9 cannot be defined because it is used by more than one SFR */

/* I2C2TRN */
/* Bitname _I2CTXDATA cannot be defined because it is used by more than one SFR */

/* I2C2RCV */
/* Bitname _I2CRXDATA cannot be defined because it is used by more than one SFR */

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

/* ADCON1 */
#define _FORM ADCON1bits.FORM
#define _ADSIDL ADCON1bits.ADSIDL
#define _ADON ADCON1bits.ADON

/* ADCON2 */
#define _EIE ADCON2bits.EIE
#define _STRGSRC ADCON2bits.STRGSRC
#define _FLTRDLY ADCON2bits.FLTRDLY
#define _EIE0 ADCON2bits.EIE0
#define _EIE1 ADCON2bits.EIE1
#define _EIE2 ADCON2bits.EIE2
#define _STRGSRC0 ADCON2bits.STRGSRC0
#define _STRGSRC1 ADCON2bits.STRGSRC1
#define _STRGSRC2 ADCON2bits.STRGSRC2
#define _STRGSRC3 ADCON2bits.STRGSRC3
#define _STRGSRC4 ADCON2bits.STRGSRC4
#define _FLTRDLY0 ADCON2bits.FLTRDLY0
#define _FLTRDLY1 ADCON2bits.FLTRDLY1
#define _FLTRDLY2 ADCON2bits.FLTRDLY2
#define _FLTRDLY3 ADCON2bits.FLTRDLY3
#define _FLTRDLY4 ADCON2bits.FLTRDLY4

/* ADCON3 */
#define _ADCS ADCON3bits.ADCS
#define _ADCSEL ADCON3bits.ADCSEL
#define _LOWPWR ADCON3bits.LOWPWR
#define _BOOST ADCON3bits.BOOST
#define _ADCS0 ADCON3bits.ADCS0
#define _ADCS1 ADCON3bits.ADCS1
#define _ADCS2 ADCON3bits.ADCS2
#define _ADCS3 ADCON3bits.ADCS3
#define _ADCS4 ADCON3bits.ADCS4
#define _ADCS5 ADCON3bits.ADCS5
#define _ADCS6 ADCON3bits.ADCS6
#define _ADCSEL0 ADCON3bits.ADCSEL0
#define _ADCSEL1 ADCON3bits.ADCSEL1

/* ADCON4 */
#define _SAMC ADCON4bits.SAMC
#define _ADCRDY ADCON4bits.ADCRDY
#define _SAMC0 ADCON4bits.SAMC0
#define _SAMC1 ADCON4bits.SAMC1
#define _SAMC2 ADCON4bits.SAMC2
#define _SAMC3 ADCON4bits.SAMC3
#define _SAMC4 ADCON4bits.SAMC4
#define _SAMC5 ADCON4bits.SAMC5
#define _SAMC6 ADCON4bits.SAMC6
#define _SAMC7 ADCON4bits.SAMC7

/* ADCON5 */
#define _ADINSEL ADCON5bits.ADINSEL
#define _VREFSEL ADCON5bits.VREFSEL
#define _ADINSEL0 ADCON5bits.ADINSEL0
#define _ADINSEL1 ADCON5bits.ADINSEL1
#define _ADINSEL2 ADCON5bits.ADINSEL2
#define _ADINSEL3 ADCON5bits.ADINSEL3
#define _ADINSEL4 ADCON5bits.ADINSEL4
#define _ADINSEL5 ADCON5bits.ADINSEL5
#define _VREFSEL0 ADCON5bits.VREFSEL0
#define _VREFSEL1 ADCON5bits.VREFSEL1
#define _VREFSEL2 ADCON5bits.VREFSEL2

/* ADCON6 */
#define _RQCONVRT ADCON6bits.RQCONVRT
#define _GSWTRG ADCON6bits.GSWTRG
#define _CAL ADCON6bits.CAL

/* ADMOD */
#define _SH0MOD ADMODbits.SH0MOD
#define _SH1MOD ADMODbits.SH1MOD
#define _SH2MOD ADMODbits.SH2MOD
#define _SH3MOD ADMODbits.SH3MOD
#define _SH4MOD ADMODbits.SH4MOD
#define _SH0MOD0 ADMODbits.SH0MOD0
#define _SH0MOD1 ADMODbits.SH0MOD1
#define _SH1MOD0 ADMODbits.SH1MOD0
#define _SH1MOD1 ADMODbits.SH1MOD1
#define _SH2MOD0 ADMODbits.SH2MOD0
#define _SH2MOD1 ADMODbits.SH2MOD1
#define _SH3MOD0 ADMODbits.SH3MOD0
#define _SH3MOD1 ADMODbits.SH3MOD1
#define _SH4MOD0 ADMODbits.SH4MOD0
#define _SH4MOD1 ADMODbits.SH4MOD1

/* ADALT */
#define _SH0ALT ADALTbits.SH0ALT
#define _SH1ALT ADALTbits.SH1ALT
#define _SH2ALT ADALTbits.SH2ALT
#define _SH3ALT ADALTbits.SH3ALT
#define _SH0ALT0 ADALTbits.SH0ALT0
#define _SH0ALT1 ADALTbits.SH0ALT1
#define _SH1ALT0 ADALTbits.SH1ALT0
#define _SH1ALT1 ADALTbits.SH1ALT1
#define _SH2ALT0 ADALTbits.SH2ALT0
#define _SH2ALT1 ADALTbits.SH2ALT1
#define _SH3ALT0 ADALTbits.SH3ALT0
#define _SH3ALT1 ADALTbits.SH3ALT1

/* ADGIRQENL */
#define _IRQEN0 ADGIRQENLbits.IRQEN0
#define _IRQEN1 ADGIRQENLbits.IRQEN1
#define _IRQEN2 ADGIRQENLbits.IRQEN2
#define _IRQEN3 ADGIRQENLbits.IRQEN3
#define _IRQEN4 ADGIRQENLbits.IRQEN4
#define _IRQEN5 ADGIRQENLbits.IRQEN5
#define _IRQEN6 ADGIRQENLbits.IRQEN6
#define _IRQEN7 ADGIRQENLbits.IRQEN7
#define _IRQEN8 ADGIRQENLbits.IRQEN8
#define _IRQEN9 ADGIRQENLbits.IRQEN9
#define _IRQEN10 ADGIRQENLbits.IRQEN10
#define _IRQEN11 ADGIRQENLbits.IRQEN11
#define _IRQEN12 ADGIRQENLbits.IRQEN12
#define _IRQEN14 ADGIRQENLbits.IRQEN14

/* ADGIRQENH */
#define _IRQEN17 ADGIRQENHbits.IRQEN17
#define _IRQEN18 ADGIRQENHbits.IRQEN18
#define _IRQEN19 ADGIRQENHbits.IRQEN19
#define _IRQEN20 ADGIRQENHbits.IRQEN20
#define _IRQEN21 ADGIRQENHbits.IRQEN21
#define _IRQEN22 ADGIRQENHbits.IRQEN22
#define _IRQEN23 ADGIRQENHbits.IRQEN23
#define _IRQEN24 ADGIRQENHbits.IRQEN24
#define _IRQEN25 ADGIRQENHbits.IRQEN25
#define _IRQEN26 ADGIRQENHbits.IRQEN26

/* ADCSSL */
#define _CSS0 ADCSSLbits.CSS0
#define _CSS1 ADCSSLbits.CSS1
#define _CSS2 ADCSSLbits.CSS2
#define _CSS3 ADCSSLbits.CSS3
#define _CSS4 ADCSSLbits.CSS4
#define _CSS5 ADCSSLbits.CSS5
#define _CSS6 ADCSSLbits.CSS6
#define _CSS7 ADCSSLbits.CSS7
#define _CSS8 ADCSSLbits.CSS8
#define _CSS9 ADCSSLbits.CSS9
#define _CSS10 ADCSSLbits.CSS10
#define _CSS11 ADCSSLbits.CSS11
#define _CSS12 ADCSSLbits.CSS12
#define _CSS14 ADCSSLbits.CSS14

/* ADCSSH */
#define _CSS17 ADCSSHbits.CSS17
#define _CSS18 ADCSSHbits.CSS18
#define _CSS19 ADCSSHbits.CSS19
#define _CSS20 ADCSSHbits.CSS20
#define _CSS21 ADCSSHbits.CSS21
#define _CSS22 ADCSSHbits.CSS22
#define _CSS23 ADCSSHbits.CSS23
#define _CSS24 ADCSSHbits.CSS24
#define _CSS25 ADCSSHbits.CSS25
#define _CSS26 ADCSSHbits.CSS26

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
#define _AN14RDY ADSTATLbits.AN14RDY

/* ADSTATH */
#define _AN17RDY ADSTATHbits.AN17RDY
#define _AN18RDY ADSTATHbits.AN18RDY
#define _AN19RDY ADSTATHbits.AN19RDY
#define _AN20RDY ADSTATHbits.AN20RDY
#define _AN21RDY ADSTATHbits.AN21RDY
#define _AN22RDY ADSTATHbits.AN22RDY
#define _AN23RDY ADSTATHbits.AN23RDY
#define _AN24RDY ADSTATHbits.AN24RDY
#define _AN25RDY ADSTATHbits.AN25RDY
#define _AN26RDY ADSTATHbits.AN26RDY

/* DCMP1ENL */
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
/* Bitname _CMPEN14 cannot be defined because it is used by more than one SFR */

/* DCMP1ENH */
/* Bitname _CMPEN17 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN18 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN19 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN20 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN21 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN22 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN23 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN24 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN25 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN26 cannot be defined because it is used by more than one SFR */

/* DCMP2ENL */
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
/* Bitname _CMPEN14 cannot be defined because it is used by more than one SFR */

/* DCMP2ENH */
/* Bitname _CMPEN17 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN18 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN19 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN20 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN21 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN22 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN23 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN24 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN25 cannot be defined because it is used by more than one SFR */
/* Bitname _CMPEN26 cannot be defined because it is used by more than one SFR */

/* ADFLTR1CON */
/* Bitname _CHNLID cannot be defined because it is used by more than one SFR */
/* Bitname _AFRDY cannot be defined because it is used by more than one SFR */
/* Bitname _AFGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM cannot be defined because it is used by more than one SFR */
/* Bitname _AFEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID4 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID5 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM2 cannot be defined because it is used by more than one SFR */

/* ADFLTR2CON */
/* Bitname _CHNLID cannot be defined because it is used by more than one SFR */
/* Bitname _AFRDY cannot be defined because it is used by more than one SFR */
/* Bitname _AFGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM cannot be defined because it is used by more than one SFR */
/* Bitname _AFEN cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID0 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID1 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID2 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID3 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID4 cannot be defined because it is used by more than one SFR */
/* Bitname _CHNLID5 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OVRSAM2 cannot be defined because it is used by more than one SFR */

/* ADTRIG1 */
#define _TRGSRC0 ADTRIG1bits.TRGSRC0
#define _TRGSRC1 ADTRIG1bits.TRGSRC1
#define _TRGSRC00 ADTRIG1bits.TRGSRC00
#define _TRGSRC01 ADTRIG1bits.TRGSRC01
#define _TRGSRC02 ADTRIG1bits.TRGSRC02
#define _TRGSRC03 ADTRIG1bits.TRGSRC03
#define _TRGSRC04 ADTRIG1bits.TRGSRC04
/* Bitname _TRGSRC10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC11 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC12 cannot be defined because it is used by more than one SFR */
#define _TRGSRC13 ADTRIG1bits.TRGSRC13
/* Bitname _TRGSRC14 cannot be defined because it is used by more than one SFR */

/* ADTRIG2 */
#define _TRGSRC2 ADTRIG2bits.TRGSRC2
#define _TRGSRC3 ADTRIG2bits.TRGSRC3
/* Bitname _TRGSRC20 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC21 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC22 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC23 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC24 cannot be defined because it is used by more than one SFR */
#define _TRGSRC30 ADTRIG2bits.TRGSRC30
#define _TRGSRC31 ADTRIG2bits.TRGSRC31
#define _TRGSRC32 ADTRIG2bits.TRGSRC32
#define _TRGSRC33 ADTRIG2bits.TRGSRC33
#define _TRGSRC34 ADTRIG2bits.TRGSRC34

/* ADTRIG3 */
#define _TRGSRC4 ADTRIG3bits.TRGSRC4
#define _TRGSRC5 ADTRIG3bits.TRGSRC5
#define _TRGSRC40 ADTRIG3bits.TRGSRC40
#define _TRGSRC41 ADTRIG3bits.TRGSRC41
#define _TRGSRC42 ADTRIG3bits.TRGSRC42
#define _TRGSRC43 ADTRIG3bits.TRGSRC43
#define _TRGSRC44 ADTRIG3bits.TRGSRC44
#define _TRGSRC50 ADTRIG3bits.TRGSRC50
#define _TRGSRC51 ADTRIG3bits.TRGSRC51
#define _TRGSRC52 ADTRIG3bits.TRGSRC52
#define _TRGSRC53 ADTRIG3bits.TRGSRC53
#define _TRGSRC54 ADTRIG3bits.TRGSRC54

/* ADTRIG4 */
#define _TRGSRC6 ADTRIG4bits.TRGSRC6
#define _TRGSRC7 ADTRIG4bits.TRGSRC7
#define _TRGSRC60 ADTRIG4bits.TRGSRC60
#define _TRGSRC61 ADTRIG4bits.TRGSRC61
#define _TRGSRC62 ADTRIG4bits.TRGSRC62
#define _TRGSRC63 ADTRIG4bits.TRGSRC63
#define _TRGSRC64 ADTRIG4bits.TRGSRC64
#define _TRGSRC70 ADTRIG4bits.TRGSRC70
#define _TRGSRC71 ADTRIG4bits.TRGSRC71
#define _TRGSRC72 ADTRIG4bits.TRGSRC72
#define _TRGSRC73 ADTRIG4bits.TRGSRC73
#define _TRGSRC74 ADTRIG4bits.TRGSRC74

/* ADTRIG5 */
#define _TRGSRC8 ADTRIG5bits.TRGSRC8
#define _TRGSRC9 ADTRIG5bits.TRGSRC9
#define _TRGSRC80 ADTRIG5bits.TRGSRC80
#define _TRGSRC81 ADTRIG5bits.TRGSRC81
#define _TRGSRC82 ADTRIG5bits.TRGSRC82
#define _TRGSRC83 ADTRIG5bits.TRGSRC83
#define _TRGSRC84 ADTRIG5bits.TRGSRC84
#define _TRGSRC90 ADTRIG5bits.TRGSRC90
#define _TRGSRC91 ADTRIG5bits.TRGSRC91
#define _TRGSRC92 ADTRIG5bits.TRGSRC92
#define _TRIGSRC93 ADTRIG5bits.TRIGSRC93
#define _TRGSRC94 ADTRIG5bits.TRGSRC94

/* ADTRIG6 */
/* Bitname _TRGSRC10 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC11 cannot be defined because it is used by more than one SFR */
#define _TRGSRC100 ADTRIG6bits.TRGSRC100
#define _TRGSRC101 ADTRIG6bits.TRGSRC101
#define _TRGSRC102 ADTRIG6bits.TRGSRC102
#define _TRGSRC103 ADTRIG6bits.TRGSRC103
#define _TRGSRC104 ADTRIG6bits.TRGSRC104
#define _TRGSRC110 ADTRIG6bits.TRGSRC110
#define _TRGSRC111 ADTRIG6bits.TRGSRC111
#define _TRGSRC112 ADTRIG6bits.TRGSRC112
#define _TRGSRC113 ADTRIG6bits.TRGSRC113
#define _TRGSRC114 ADTRIG6bits.TRGSRC114

/* ADTRIG7 */
/* Bitname _TRGSRC12 cannot be defined because it is used by more than one SFR */
#define _TRGSRC120 ADTRIG7bits.TRGSRC120
#define _TRGSRC121 ADTRIG7bits.TRGSRC121
#define _TRGSRC122 ADTRIG7bits.TRGSRC122
#define _TRGSRC123 ADTRIG7bits.TRGSRC123
#define _TRGSRC124 ADTRIG7bits.TRGSRC124

/* ADTRIG8 */
/* Bitname _TRGSRC14 cannot be defined because it is used by more than one SFR */
#define _TRGSRC140 ADTRIG8bits.TRGSRC140
#define _TRGSRC141 ADTRIG8bits.TRGSRC141
#define _TRGSRC142 ADTRIG8bits.TRGSRC142
#define _TRGSRC143 ADTRIG8bits.TRGSRC143
#define _TRGSRC144 ADTRIG8bits.TRGSRC144

/* ADTRIG9 */
#define _TRGSRC17 ADTRIG9bits.TRGSRC17
#define _TRGSRC170 ADTRIG9bits.TRGSRC170
#define _TRGSRC171 ADTRIG9bits.TRGSRC171
#define _TRGSRC172 ADTRIG9bits.TRGSRC172
#define _TRGSRC173 ADTRIG9bits.TRGSRC173
#define _TRGSRC174 ADTRIG9bits.TRGSRC174

/* ADTRIG10 */
#define _TRGSRC18 ADTRIG10bits.TRGSRC18
#define _TRGSRC19 ADTRIG10bits.TRGSRC19
#define _TRGSRC180 ADTRIG10bits.TRGSRC180
#define _TRGSRC181 ADTRIG10bits.TRGSRC181
#define _TRGSRC182 ADTRIG10bits.TRGSRC182
#define _TRGSRC183 ADTRIG10bits.TRGSRC183
#define _TRGSRC184 ADTRIG10bits.TRGSRC184
#define _TRGSRC190 ADTRIG10bits.TRGSRC190
#define _TRGSRC191 ADTRIG10bits.TRGSRC191
#define _TRGSRC192 ADTRIG10bits.TRGSRC192
#define _TRGSRC193 ADTRIG10bits.TRGSRC193
#define _TRGSRC194 ADTRIG10bits.TRGSRC194

/* ADTRIG11 */
/* Bitname _TRGSRC20 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC21 cannot be defined because it is used by more than one SFR */
#define _TRGSRC200 ADTRIG11bits.TRGSRC200
#define _TRGSRC201 ADTRIG11bits.TRGSRC201
#define _TRGSRC202 ADTRIG11bits.TRGSRC202
#define _TRGSRC203 ADTRIG11bits.TRGSRC203
#define _TRGSRC204 ADTRIG11bits.TRGSRC204
#define _TRGSRC210 ADTRIG11bits.TRGSRC210
#define _TRGSRC211 ADTRIG11bits.TRGSRC211
#define _TRGSRC212 ADTRIG11bits.TRGSRC212
#define _TRGSRC213 ADTRIG11bits.TRGSRC213
#define _TRGSRC214 ADTRIG11bits.TRGSRC214

/* ADTRIG12 */
/* Bitname _TRGSRC22 cannot be defined because it is used by more than one SFR */
/* Bitname _TRGSRC23 cannot be defined because it is used by more than one SFR */
#define _TRGSRC220 ADTRIG12bits.TRGSRC220
#define _TRGSRC221 ADTRIG12bits.TRGSRC221
#define _TRGSRC222 ADTRIG12bits.TRGSRC222
#define _TRGSRC223 ADTRIG12bits.TRGSRC223
#define _TRGSRC224 ADTRIG12bits.TRGSRC224
#define _TRGSRC230 ADTRIG12bits.TRGSRC230
#define _TRGSRC231 ADTRIG12bits.TRGSRC231
#define _TRGSRC232 ADTRIG12bits.TRGSRC232
#define _TRGSRC233 ADTRIG12bits.TRGSRC233
#define _TRGSRC234 ADTRIG12bits.TRGSRC234

/* ADTRIG13 */
/* Bitname _TRGSRC24 cannot be defined because it is used by more than one SFR */
#define _TRGSRC25 ADTRIG13bits.TRGSRC25
#define _TRGSRC240 ADTRIG13bits.TRGSRC240
#define _TRGSRC241 ADTRIG13bits.TRGSRC241
#define _TRGSRC242 ADTRIG13bits.TRGSRC242
#define _TRGSRC243 ADTRIG13bits.TRGSRC243
#define _TRGSRC244 ADTRIG13bits.TRGSRC244
#define _TRGSRC250 ADTRIG13bits.TRGSRC250
#define _TRGSRC251 ADTRIG13bits.TRGSRC251
#define _TRGSRC252 ADTRIG13bits.TRGSRC252
#define _TRGSRC253 ADTRIG13bits.TRGSRC253
#define _TRGSRC254 ADTRIG13bits.TRGSRC254

/* ADTRIG14 */
#define _TRGSRC26 ADTRIG14bits.TRGSRC26
#define _TRGSRC260 ADTRIG14bits.TRGSRC260
#define _TRGSRC261 ADTRIG14bits.TRGSRC261
#define _TRGSRC262 ADTRIG14bits.TRGSRC262
#define _TRGSRC263 ADTRIG14bits.TRGSRC263
#define _TRGSRC264 ADTRIG14bits.TRGSRC264

/* DCMP1CON */
/* Bitname _IELOLO cannot be defined because it is used by more than one SFR */
/* Bitname _IELOHI cannot be defined because it is used by more than one SFR */
/* Bitname _IEHILO cannot be defined because it is used by more than one SFR */
/* Bitname _IEHIHI cannot be defined because it is used by more than one SFR */
/* Bitname _IEBTWN cannot be defined because it is used by more than one SFR */
/* Bitname _DCMPED cannot be defined because it is used by more than one SFR */
/* Bitname _DCMPGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _DCMPEN cannot be defined because it is used by more than one SFR */
/* Bitname _AINID cannot be defined because it is used by more than one SFR */
/* Bitname _AINID0 cannot be defined because it is used by more than one SFR */
/* Bitname _AINID1 cannot be defined because it is used by more than one SFR */
/* Bitname _AINID2 cannot be defined because it is used by more than one SFR */
/* Bitname _AINID3 cannot be defined because it is used by more than one SFR */
/* Bitname _AINID4 cannot be defined because it is used by more than one SFR */

/* DCMP2CON */
/* Bitname _IELOLO cannot be defined because it is used by more than one SFR */
/* Bitname _IELOHI cannot be defined because it is used by more than one SFR */
/* Bitname _IEHILO cannot be defined because it is used by more than one SFR */
/* Bitname _IEHIHI cannot be defined because it is used by more than one SFR */
/* Bitname _IEBTWN cannot be defined because it is used by more than one SFR */
/* Bitname _DCMPED cannot be defined because it is used by more than one SFR */
/* Bitname _DCMPGIEN cannot be defined because it is used by more than one SFR */
/* Bitname _DCMPEN cannot be defined because it is used by more than one SFR */
/* Bitname _AINID cannot be defined because it is used by more than one SFR */
/* Bitname _AINID0 cannot be defined because it is used by more than one SFR */
/* Bitname _AINID1 cannot be defined because it is used by more than one SFR */
/* Bitname _AINID2 cannot be defined because it is used by more than one SFR */
/* Bitname _AINID3 cannot be defined because it is used by more than one SFR */
/* Bitname _AINID4 cannot be defined because it is used by more than one SFR */

/* ISRCCON */
#define _ISRCCAL ISRCCONbits.ISRCCAL
#define _OUTSEL ISRCCONbits.OUTSEL
#define _ISRCEN ISRCCONbits.ISRCEN
#define _ISRCCAL0 ISRCCONbits.ISRCCAL0
#define _ISRCCAL1 ISRCCONbits.ISRCCAL1
#define _ISRCCAL2 ISRCCONbits.ISRCCAL2
#define _ISRCCAL3 ISRCCONbits.ISRCCAL3
#define _ISRCCAL4 ISRCCONbits.ISRCCAL4
#define _ISRCCAL5 ISRCCONbits.ISRCCAL5
#define _OUTSEL0 ISRCCONbits.OUTSEL0
#define _OUTSEL1 ISRCCONbits.OUTSEL1
#define _OUTSEL2 ISRCCONbits.OUTSEL2

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
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _ALTINP cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
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
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _ALTINP cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
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

/* CMP3CON */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _ALTINP cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _FCLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL1 cannot be defined because it is used by more than one SFR */

/* CMP3DAC */
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

/* CMP4CON */
/* Bitname _RANGE cannot be defined because it is used by more than one SFR */
/* Bitname _CMPPOL cannot be defined because it is used by more than one SFR */
/* Bitname _ALTINP cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _HYSPOL cannot be defined because it is used by more than one SFR */
/* Bitname _EXTREF cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL cannot be defined because it is used by more than one SFR */
/* Bitname _DACOE cannot be defined because it is used by more than one SFR */
/* Bitname _FCLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FLTREN cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CMPON cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _INSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _HYSSEL1 cannot be defined because it is used by more than one SFR */

/* CMP4DAC */
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

/* RPOR8 */
#define _RP48R RPOR8bits.RP48R
#define _RP49R RPOR8bits.RP49R
#define _RP48R0 RPOR8bits.RP48R0
#define _RP48R1 RPOR8bits.RP48R1
#define _RP48R2 RPOR8bits.RP48R2
#define _RP48R3 RPOR8bits.RP48R3
#define _RP48R4 RPOR8bits.RP48R4
#define _RP48R5 RPOR8bits.RP48R5
#define _RP49R0 RPOR8bits.RP49R0
#define _RP49R1 RPOR8bits.RP49R1
#define _RP49R2 RPOR8bits.RP49R2
#define _RP49R3 RPOR8bits.RP49R3
#define _RP49R4 RPOR8bits.RP49R4
#define _RP49R5 RPOR8bits.RP49R5

/* RPOR9 */
#define _RP50R RPOR9bits.RP50R
#define _RP51R RPOR9bits.RP51R
#define _RP50R0 RPOR9bits.RP50R0
#define _RP50R1 RPOR9bits.RP50R1
#define _RP50R2 RPOR9bits.RP50R2
#define _RP50R3 RPOR9bits.RP50R3
#define _RP50R4 RPOR9bits.RP50R4
#define _RP50R5 RPOR9bits.RP50R5
#define _RP51R0 RPOR9bits.RP51R0
#define _RP51R1 RPOR9bits.RP51R1
#define _RP51R2 RPOR9bits.RP51R2
#define _RP51R3 RPOR9bits.RP51R3
#define _RP51R4 RPOR9bits.RP51R4
#define _RP51R5 RPOR9bits.RP51R5

/* RPOR10 */
#define _RP52R RPOR10bits.RP52R
#define _RP53R RPOR10bits.RP53R
#define _RP52R0 RPOR10bits.RP52R0
#define _RP52R1 RPOR10bits.RP52R1
#define _RP52R2 RPOR10bits.RP52R2
#define _RP52R3 RPOR10bits.RP52R3
#define _RP52R4 RPOR10bits.RP52R4
#define _RP52R5 RPOR10bits.RP52R5
#define _RP53R0 RPOR10bits.RP53R0
#define _RP53R1 RPOR10bits.RP53R1
#define _RP53R2 RPOR10bits.RP53R2
#define _RP53R3 RPOR10bits.RP53R3
#define _RP53R4 RPOR10bits.RP53R4
#define _RP53R5 RPOR10bits.RP53R5

/* RPOR11 */
#define _RP54R RPOR11bits.RP54R
#define _RP55R RPOR11bits.RP55R
#define _RP54R0 RPOR11bits.RP54R0
#define _RP54R1 RPOR11bits.RP54R1
#define _RP54R2 RPOR11bits.RP54R2
#define _RP54R3 RPOR11bits.RP54R3
#define _RP54R4 RPOR11bits.RP54R4
#define _RP54R5 RPOR11bits.RP54R5
#define _RP55R0 RPOR11bits.RP55R0
#define _RP55R1 RPOR11bits.RP55R1
#define _RP55R2 RPOR11bits.RP55R2
#define _RP55R3 RPOR11bits.RP55R3
#define _RP55R4 RPOR11bits.RP55R4
#define _RP55R5 RPOR11bits.RP55R5

/* RPOR12 */
#define _RP56R RPOR12bits.RP56R
#define _RP57R RPOR12bits.RP57R
#define _RP56R0 RPOR12bits.RP56R0
#define _RP56R1 RPOR12bits.RP56R1
#define _RP56R2 RPOR12bits.RP56R2
#define _RP56R3 RPOR12bits.RP56R3
#define _RP56R4 RPOR12bits.RP56R4
#define _RP56R5 RPOR12bits.RP56R5
#define _RP57R0 RPOR12bits.RP57R0
#define _RP57R1 RPOR12bits.RP57R1
#define _RP57R2 RPOR12bits.RP57R2
#define _RP57R3 RPOR12bits.RP57R3
#define _RP57R4 RPOR12bits.RP57R4
#define _RP57R5 RPOR12bits.RP57R5

/* RPOR13 */
#define _RP58R RPOR13bits.RP58R
#define _RP59R RPOR13bits.RP59R
#define _RP58R0 RPOR13bits.RP58R0
#define _RP58R1 RPOR13bits.RP58R1
#define _RP58R2 RPOR13bits.RP58R2
#define _RP58R3 RPOR13bits.RP58R3
#define _RP58R4 RPOR13bits.RP58R4
#define _RP58R5 RPOR13bits.RP58R5
#define _RP59R0 RPOR13bits.RP59R0
#define _RP59R1 RPOR13bits.RP59R1
#define _RP59R2 RPOR13bits.RP59R2
#define _RP59R3 RPOR13bits.RP59R3
#define _RP59R4 RPOR13bits.RP59R4
#define _RP59R5 RPOR13bits.RP59R5

/* RPOR14 */
#define _RP60R RPOR14bits.RP60R
#define _RP61R RPOR14bits.RP61R
#define _RP60R0 RPOR14bits.RP60R0
#define _RP60R1 RPOR14bits.RP60R1
#define _RP60R2 RPOR14bits.RP60R2
#define _RP60R3 RPOR14bits.RP60R3
#define _RP60R4 RPOR14bits.RP60R4
#define _RP60R5 RPOR14bits.RP60R5
#define _RP61R0 RPOR14bits.RP61R0
#define _RP61R1 RPOR14bits.RP61R1
#define _RP61R2 RPOR14bits.RP61R2
#define _RP61R3 RPOR14bits.RP61R3
#define _RP61R4 RPOR14bits.RP61R4
#define _RP61R5 RPOR14bits.RP61R5

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
#define _T1CKRR RPINR2bits.T1CKRR
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
#define _IC2R RPINR7bits.IC2R
#define _IC1R0 RPINR7bits.IC1R0
#define _IC1R1 RPINR7bits.IC1R1
#define _IC1R2 RPINR7bits.IC1R2
#define _IC1R3 RPINR7bits.IC1R3
#define _IC1R4 RPINR7bits.IC1R4
#define _IC1R5 RPINR7bits.IC1R5
#define _IC1R6 RPINR7bits.IC1R6
#define _IC1R7 RPINR7bits.IC1R7
#define _IC2R0 RPINR7bits.IC2R0
#define _IC2R1 RPINR7bits.IC2R1
#define _IC2R2 RPINR7bits.IC2R2
#define _IC2R3 RPINR7bits.IC2R3
#define _IC2R4 RPINR7bits.IC2R4
#define _IC2R5 RPINR7bits.IC2R5
#define _IC2R6 RPINR7bits.IC2R6
#define _IC2R7 RPINR7bits.IC2R7

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
#define _IC3R7 RPINR8bits.IC3R7
#define _IC4R0 RPINR8bits.IC4R0
#define _IC4R1 RPINR8bits.IC4R1
#define _IC4R2 RPINR8bits.IC4R2
#define _IC4R3 RPINR8bits.IC4R3
#define _IC4R4 RPINR8bits.IC4R4
#define _IC4R5 RPINR8bits.IC4R5
#define _IC4R6 RPINR8bits.IC4R6
#define _IC4R7 RPINR8bits.IC4R7

/* RPINR11 */
#define _OCFAR RPINR11bits.OCFAR
#define _OCFAR0 RPINR11bits.OCFAR0
#define _OCFAR1 RPINR11bits.OCFAR1
#define _OCFAR2 RPINR11bits.OCFAR2
#define _OCFAR3 RPINR11bits.OCFAR3
#define _OCFAR4 RPINR11bits.OCFAR4
#define _OCFAR5 RPINR11bits.OCFAR5
#define _OCFAR6 RPINR11bits.OCFAR6
#define _OCFAR7 RPINR11bits.OCFAR7

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

/* RPINR19 */
#define _U2RXR RPINR19bits.U2RXR
#define _U2CTSR RPINR19bits.U2CTSR
#define _U2RXR0 RPINR19bits.U2RXR0
#define _U2RXR1 RPINR19bits.U2RXR1
#define _U2RXR2 RPINR19bits.U2RXR2
#define _U2RXR3 RPINR19bits.U2RXR3
#define _U2RXR4 RPINR19bits.U2RXR4
#define _U2RXR5 RPINR19bits.U2RXR5
#define _U2RXR6 RPINR19bits.U2RXR6
#define _U2RXR7 RPINR19bits.U2RXR7
#define _U2CTSR0 RPINR19bits.U2CTSR0
#define _U2CTSR1 RPINR19bits.U2CTSR1
#define _U2CTSR2 RPINR19bits.U2CTSR2
#define _U2CTSR3 RPINR19bits.U2CTSR3
#define _U2CTSR4 RPINR19bits.U2CTSR4
#define _U2CTSR5 RPINR19bits.U2CTSR5
#define _U2CTSR6 RPINR19bits.U2CTSR6
#define _U2CTSR7 RPINR19bits.U2CTSR7

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

/* RPINR22 */
#define _SDI2R RPINR22bits.SDI2R
#define _SCK2INR RPINR22bits.SCK2INR
#define _SDI2R0 RPINR22bits.SDI2R0
#define _SDI2R1 RPINR22bits.SDI2R1
#define _SDI2R2 RPINR22bits.SDI2R2
#define _SDI2R3 RPINR22bits.SDI2R3
#define _SDI2R4 RPINR22bits.SDI2R4
#define _SDI2R5 RPINR22bits.SDI2R5
#define _SDI2R6 RPINR22bits.SDI2R6
#define _SDI2R7 RPINR22bits.SDI2R7
#define _SCK2INR0 RPINR22bits.SCK2INR0
#define _SCK2INR1 RPINR22bits.SCK2INR1
#define _SCK2INR2 RPINR22bits.SCK2INR2
#define _SCK2INR3 RPINR22bits.SCK2INR3
#define _SCK2INR4 RPINR22bits.SCK2INR4
#define _SCK2INR5 RPINR22bits.SCK2INR5
#define _SCK2INR6 RPINR22bits.SCK2INR6
#define _SCK2INR7 RPINR22bits.SCK2INR7

/* RPINR23 */
#define _SS2R RPINR23bits.SS2R
#define _SS2R0 RPINR23bits.SS2R0
#define _SS2R1 RPINR23bits.SS2R1
#define _SS2R2 RPINR23bits.SS2R2
#define _SS2R3 RPINR23bits.SS2R3
#define _SS2R4 RPINR23bits.SS2R4
#define _SS2R5 RPINR23bits.SS2R5
#define _SS2R6 RPINR23bits.SS2R6
#define _SS2R7 RPINR23bits.SS2R7

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
#define _P2ACTIV NVMCONbits.P2ACTIV
#define _SFTSWP NVMCONbits.SFTSWP
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

/* LFSR */
#define _LFSR LFSRbits.LFSR

/* REFOCON */
#define _RODIV REFOCONbits.RODIV
#define _ROSEL REFOCONbits.ROSEL
#define _ROSSLP REFOCONbits.ROSSLP
#define _ROON REFOCONbits.ROON
#define _RODIV0 REFOCONbits.RODIV0
#define _RODIV1 REFOCONbits.RODIV1
#define _RODIV2 REFOCONbits.RODIV2
#define _RODIV3 REFOCONbits.RODIV3

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
#define _SPI2MD PMD1bits.SPI2MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _I2C1MD PMD1bits.I2C1MD
#define _PWMMD PMD1bits.PWMMD
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
#define _CMPMD PMD3bits.CMPMD

/* PMD4 */
#define _REFOMD PMD4bits.REFOMD

/* PMD6 */
#define _PWM1MD PMD6bits.PWM1MD
#define _PWM2MD PMD6bits.PWM2MD
#define _PWM3MD PMD6bits.PWM3MD
#define _PWM4MD PMD6bits.PWM4MD
#define _PWM5MD PMD6bits.PWM5MD

/* PMD7 */
#define _PGA1MD PMD7bits.PGA1MD
#define _CMP1MD PMD7bits.CMP1MD
#define _CMP2MD PMD7bits.CMP2MD
#define _CMP3MD PMD7bits.CMP3MD
#define _CMP4MD PMD7bits.CMP4MD

/* PMD8 */
#define _CCSMD PMD8bits.CCSMD
#define _ABGMD PMD8bits.ABGMD
#define _PGA2MD PMD8bits.PGA2MD

/* IFS0 */
#define _INT0IF IFS0bits.INT0IF
#define _IC1IF IFS0bits.IC1IF
#define _OC1IF IFS0bits.OC1IF
#define _T1IF IFS0bits.T1IF
#define _IC2IF IFS0bits.IC2IF
#define _OC2IF IFS0bits.OC2IF
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
#define _IC3IF IFS2bits.IC3IF
#define _IC4IF IFS2bits.IC4IF

/* IFS3 */
#define _SI2C2IF IFS3bits.SI2C2IF
#define _MI2C2IF IFS3bits.MI2C2IF
#define _PSEMIF IFS3bits.PSEMIF

/* IFS4 */
#define _U1EIF IFS4bits.U1EIF
#define _U2EIF IFS4bits.U2EIF
#define _PSESIF IFS4bits.PSESIF

/* IFS5 */
#define _PWM1IF IFS5bits.PWM1IF
#define _PWM2IF IFS5bits.PWM2IF

/* IFS6 */
#define _PWM3IF IFS6bits.PWM3IF
#define _PWM4IF IFS6bits.PWM4IF
#define _PWM5IF IFS6bits.PWM5IF
#define _AC2IF IFS6bits.AC2IF
#define _AC3IF IFS6bits.AC3IF
#define _AC4IF IFS6bits.AC4IF
#define _ADCAN0IF IFS6bits.ADCAN0IF
#define _ADCAN1IF IFS6bits.ADCAN1IF

/* IFS7 */
#define _ADCAN2IF IFS7bits.ADCAN2IF
#define _ADCAN3IF IFS7bits.ADCAN3IF
#define _ADCAN4IF IFS7bits.ADCAN4IF
#define _ADCAN5IF IFS7bits.ADCAN5IF
#define _ADCAN6IF IFS7bits.ADCAN6IF
#define _ADCAN7IF IFS7bits.ADCAN7IF

/* IFS8 */
/* Bitname _ICDIF cannot be defined because it is used by more than one SFR */
#define _JTAGIF IFS8bits.JTAGIF

/* IFS9 */
#define _ADCAN8IF IFS9bits.ADCAN8IF
#define _ADCAN9IF IFS9bits.ADCAN9IF
#define _ADCAN10IF IFS9bits.ADCAN10IF
#define _ADCAN11IF IFS9bits.ADCAN11IF
#define _ADCAN12IF IFS9bits.ADCAN12IF
#define _ADCAN14IF IFS9bits.ADCAN14IF

/* IFS10 */
#define _ADCAN17IF IFS10bits.ADCAN17IF
#define _ADCAN18IF IFS10bits.ADCAN18IF
#define _ADCAN19IF IFS10bits.ADCAN19IF
#define _ADCAN20IF IFS10bits.ADCAN20IF
#define _ADCAN21IF IFS10bits.ADCAN21IF
#define _ADCAN22IF IFS10bits.ADCAN22IF
#define _ADCAN23IF IFS10bits.ADCAN23IF
#define _ADCAN24IF IFS10bits.ADCAN24IF
#define _ADCAN25IF IFS10bits.ADCAN25IF
#define _ADCAN26IF IFS10bits.ADCAN26IF
#define _I2C1BCIF IFS10bits.I2C1BCIF
#define _I2C2BCIF IFS10bits.I2C2BCIF

/* IFS11 */
#define _ADCMP1IF IFS11bits.ADCMP1IF
#define _ADCMP2IF IFS11bits.ADCMP2IF
#define _ADFLTR1IF IFS11bits.ADFLTR1IF
#define _ADFLTR2IF IFS11bits.ADFLTR2IF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _IC1IE IEC0bits.IC1IE
#define _OC1IE IEC0bits.OC1IE
#define _T1IE IEC0bits.T1IE
#define _IC2IE IEC0bits.IC2IE
#define _OC2IE IEC0bits.OC2IE
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
#define _IC3IE IEC2bits.IC3IE
#define _IC4IE IEC2bits.IC4IE

/* IEC3 */
#define _SI2C2IE IEC3bits.SI2C2IE
#define _MI2C2IE IEC3bits.MI2C2IE
#define _PSEMIE IEC3bits.PSEMIE

/* IEC4 */
#define _U1EIE IEC4bits.U1EIE
#define _U2EIE IEC4bits.U2EIE
#define _PSESIE IEC4bits.PSESIE

/* IEC5 */
#define _PWM1IE IEC5bits.PWM1IE
#define _PWM2IE IEC5bits.PWM2IE

/* IEC6 */
#define _PWM3IE IEC6bits.PWM3IE
#define _PWM4IE IEC6bits.PWM4IE
#define _PWM5IE IEC6bits.PWM5IE
#define _AC2IE IEC6bits.AC2IE
#define _AC3IE IEC6bits.AC3IE
#define _AC4IE IEC6bits.AC4IE
#define _ADCAN0IE IEC6bits.ADCAN0IE
#define _ADCAN1IE IEC6bits.ADCAN1IE

/* IEC7 */
#define _ADCAN2IE IEC7bits.ADCAN2IE
#define _ADCAN3IE IEC7bits.ADCAN3IE
#define _ADCAN4IE IEC7bits.ADCAN4IE
#define _ADCAN5IE IEC7bits.ADCAN5IE
#define _ADCAN6IE IEC7bits.ADCAN6IE
#define _ADCAN7IE IEC7bits.ADCAN7IE

/* IEC8 */
/* Bitname _ICDIF cannot be defined because it is used by more than one SFR */
#define _JTAGIE IEC8bits.JTAGIE

/* IEC9 */
#define _ADCAN8IE IEC9bits.ADCAN8IE
#define _ADCAN9IE IEC9bits.ADCAN9IE
#define _ADCAN10IE IEC9bits.ADCAN10IE
#define _ADCAN11IE IEC9bits.ADCAN11IE
#define _ADCAN12IE IEC9bits.ADCAN12IE
#define _ADCAN14IE IEC9bits.ADCAN14IE

/* IEC10 */
#define _ADCAN17IE IEC10bits.ADCAN17IE
#define _ADCAN18IE IEC10bits.ADCAN18IE
#define _ADCAN19IE IEC10bits.ADCAN19IE
#define _ADCAN20IE IEC10bits.ADCAN20IE
#define _ADCAN21IE IEC10bits.ADCAN21IE
#define _ADCAN22IE IEC10bits.ADCAN22IE
#define _ADCAN23IE IEC10bits.ADCAN23IE
#define _ADCAN24IE IEC10bits.ADCAN24IE
#define _ADCAN25IE IEC10bits.ADCAN25IE
#define _ADCAN26IE IEC10bits.ADCAN26IE
#define _I2C1BCIE IEC10bits.I2C1BCIE
#define _I2C2BCIE IEC10bits.I2C2BCIE

/* IEC11 */
#define _ADCMP1IE IEC11bits.ADCMP1IE
#define _ADCMP2IE IEC11bits.ADCMP2IE
#define _ADFLTR1IE IEC11bits.ADFLTR1IE
#define _ADFLTR2IE IEC11bits.ADFLTR2IE

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
#define _IC2IP IPC1bits.IC2IP
#define _OC2IP IPC1bits.OC2IP
#define _T2IP IPC1bits.T2IP
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

/* IPC6 */
#define _OC3IP IPC6bits.OC3IP
#define _OC4IP IPC6bits.OC4IP
#define _T4IP IPC6bits.T4IP
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
#define _IC3IP IPC9bits.IC3IP
#define _IC4IP IPC9bits.IC4IP
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
#define _PSEMIP0 IPC14bits.PSEMIP0
#define _PSEMIP1 IPC14bits.PSEMIP1
#define _PSEMIP2 IPC14bits.PSEMIP2

/* IPC16 */
#define _U1EIP IPC16bits.U1EIP
#define _U2EIP IPC16bits.U2EIP
#define _U1EIP0 IPC16bits.U1EIP0
#define _U1EIP1 IPC16bits.U1EIP1
#define _U1EIP2 IPC16bits.U1EIP2
#define _U2EIP0 IPC16bits.U2EIP0
#define _U2EIP1 IPC16bits.U2EIP1
#define _U2EIP2 IPC16bits.U2EIP2

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
#define _PWM4IP IPC24bits.PWM4IP
#define _PWM5IP IPC24bits.PWM5IP
#define _PWM3IP0 IPC24bits.PWM3IP0
#define _PWM3IP1 IPC24bits.PWM3IP1
#define _PWM3IP2 IPC24bits.PWM3IP2
#define _PWM4IP0 IPC24bits.PWM4IP0
#define _PWM4IP1 IPC24bits.PWM4IP1
#define _PWM4IP2 IPC24bits.PWM4IP2
#define _PWM5IP0 IPC24bits.PWM5IP0
#define _PWM5IP1 IPC24bits.PWM5IP1
#define _PWM5IP2 IPC24bits.PWM5IP2

/* IPC25 */
#define _AC2IP IPC25bits.AC2IP
#define _AC2IP0 IPC25bits.AC2IP0
#define _AC2IP1 IPC25bits.AC2IP1
#define _AC2IP2 IPC25bits.AC2IP2

/* IPC26 */
#define _AC3IP IPC26bits.AC3IP
#define _AC4IP IPC26bits.AC4IP
#define _AC3IP0 IPC26bits.AC3IP0
#define _AC3IP1 IPC26bits.AC3IP1
#define _AC3IP2 IPC26bits.AC3IP2
#define _AC4IP0 IPC26bits.AC4IP0
#define _AC4IP1 IPC26bits.AC4IP1
#define _AC4IP2 IPC26bits.AC4IP2

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

/* IPC35 */
#define _ICDIP IPC35bits.ICDIP
#define _JTAGIP IPC35bits.JTAGIP
#define _ICDIP0 IPC35bits.ICDIP0
#define _ICDIP1 IPC35bits.ICDIP1
#define _ICDIP2 IPC35bits.ICDIP2
#define _JTAGIP0 IPC35bits.JTAGIP0
#define _JTAGIP1 IPC35bits.JTAGIP1
#define _JTAGIP2 IPC35bits.JTAGIP2

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
#define _ADCAN14IP IPC39bits.ADCAN14IP
#define _ADCAN14IP0 IPC39bits.ADCAN14IP0
#define _ADCAN14IP1 IPC39bits.ADCAN14IP1
#define _ADCAN14IP2 IPC39bits.ADCAN14IP2

/* IPC40 */
#define _ADCAN17IP IPC40bits.ADCAN17IP
#define _ADCAN18IP IPC40bits.ADCAN18IP
#define _ADCAN19IP IPC40bits.ADCAN19IP
#define _ADCAN20IP IPC40bits.ADCAN20IP
#define _ADCAN17IP0 IPC40bits.ADCAN17IP0
#define _ADCAN17IP1 IPC40bits.ADCAN17IP1
#define _ADCAN17IP2 IPC40bits.ADCAN17IP2
#define _ADCAN18IP0 IPC40bits.ADCAN18IP0
#define _ADCAN18IP1 IPC40bits.ADCAN18IP1
#define _ADCAN18IP2 IPC40bits.ADCAN18IP2
#define _ADCAN19IP0 IPC40bits.ADCAN19IP0
#define _ADCAN19IP1 IPC40bits.ADCAN19IP1
#define _ADCAN19IP2 IPC40bits.ADCAN19IP2
#define _ADCAN20IP0 IPC40bits.ADCAN20IP0
#define _ADCAN20IP1 IPC40bits.ADCAN20IP1
#define _ADCAN20IP2 IPC40bits.ADCAN20IP2

/* IPC41 */
#define _ADCAN21IP IPC41bits.ADCAN21IP
#define _ADCAN22IP IPC41bits.ADCAN22IP
#define _ADCAN23IP IPC41bits.ADCAN23IP
#define _ADCAN24IP IPC41bits.ADCAN24IP
#define _ADCAN21IP0 IPC41bits.ADCAN21IP0
#define _ADCAN21IP1 IPC41bits.ADCAN21IP1
#define _ADCAN21IP2 IPC41bits.ADCAN21IP2
#define _ADCAN22IP0 IPC41bits.ADCAN22IP0
#define _ADCAN22IP1 IPC41bits.ADCAN22IP1
#define _ADCAN22IP2 IPC41bits.ADCAN22IP2
#define _ADCAN23IP0 IPC41bits.ADCAN23IP0
#define _ADCAN23IP1 IPC41bits.ADCAN23IP1
#define _ADCAN23IP2 IPC41bits.ADCAN23IP2
#define _ADCAN24IP0 IPC41bits.ADCAN24IP0
#define _ADCAN24IP1 IPC41bits.ADCAN24IP1
#define _ADCAN24IP2 IPC41bits.ADCAN24IP2

/* IPC42 */
#define _ADCAN25IP IPC42bits.ADCAN25IP
#define _ADCAN26IP IPC42bits.ADCAN26IP
#define _ADCAN25IP0 IPC42bits.ADCAN25IP0
#define _ADCAN25IP1 IPC42bits.ADCAN25IP1
#define _ADCAN25IP2 IPC42bits.ADCAN25IP2
#define _ADCAN26IP0 IPC42bits.ADCAN26IP0
#define _ADCAN26IP1 IPC42bits.ADCAN26IP1
#define _ADCAN26IP2 IPC42bits.ADCAN26IP2

/* IPC43 */
#define _I2C1BCIP IPC43bits.I2C1BCIP
#define _I2C2BCIP IPC43bits.I2C2BCIP
#define _I2C1BCIP0 IPC43bits.I2C1BCIP0
#define _I2C1BCIP1 IPC43bits.I2C1BCIP1
#define _I2C1BCIP2 IPC43bits.I2C1BCIP2
#define _I2C2BCIP0 IPC43bits.I2C2BCIP0
#define _I2C2BCIP1 IPC43bits.I2C2BCIP1
#define _I2C2BCIP2 IPC43bits.I2C2BCIP2

/* IPC44 */
#define _ADCMP1IP IPC44bits.ADCMP1IP
#define _ADCMP2IP IPC44bits.ADCMP2IP
#define _ADFLTR1IP IPC44bits.ADFLTR1IP
#define _ADCMP1IP0 IPC44bits.ADCMP1IP0
#define _ADCMP1IP1 IPC44bits.ADCMP1IP1
#define _ADCMP1IP2 IPC44bits.ADCMP1IP2
#define _ADCMP2IP0 IPC44bits.ADCMP2IP0
#define _ADCMP2IP1 IPC44bits.ADCMP2IP1
#define _ADCMP2IP2 IPC44bits.ADCMP2IP2
#define _ADFLTR1IP0 IPC44bits.ADFLTR1IP0
#define _ADFLTR1IP1 IPC44bits.ADFLTR1IP1
#define _ADFLTR1IP2 IPC44bits.ADFLTR1IP2

/* IPC45 */
#define _ADFLTR2IP IPC45bits.ADFLTR2IP
#define _ADFLTR2IP0 IPC45bits.ADFLTR2IP0
#define _ADFLTR2IP1 IPC45bits.ADFLTR2IP1
#define _ADFLTR2IP2 IPC45bits.ADFLTR2IP2

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
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGMODE cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLTA cannot be defined because it is used by more than one SFR */
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
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
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */

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
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
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
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */

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
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
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
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */

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
/* Bitname _ENFLTA cannot be defined because it is used by more than one SFR */
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
/* Bitname _ENFLT0 cannot be defined because it is used by more than one SFR */

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

/* PWMCON4 */
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

/* IOCON4 */
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

/* FCLCON4 */
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

/* TRIG4 */
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

/* TRGCON4 */
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

/* STRIG4 */
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

/* PWMCAP4 */
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

/* LEBCON4 */
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

/* LEBDLY4 */
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

/* AUXCON4 */
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

/* PWMCON5 */
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

/* IOCON5 */
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

/* FCLCON5 */
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

/* TRIG5 */
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

/* TRGCON5 */
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

/* STRIG5 */
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

/* PWMCAP5 */
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

/* LEBCON5 */
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

/* LEBDLY5 */
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

/* AUXCON5 */
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
#define _ANSB5 ANSELBbits.ANSB5
#define _ANSB6 ANSELBbits.ANSB6
#define _ANSB7 ANSELBbits.ANSB7
#define _ANSB9 ANSELBbits.ANSB9
#define _ANSB10 ANSELBbits.ANSB10

/* TRISC */
#define _TRISC0 TRISCbits.TRISC0
#define _TRISC1 TRISCbits.TRISC1
#define _TRISC2 TRISCbits.TRISC2
#define _TRISC3 TRISCbits.TRISC3
#define _TRISC4 TRISCbits.TRISC4
#define _TRISC5 TRISCbits.TRISC5
#define _TRISC6 TRISCbits.TRISC6
#define _TRISC7 TRISCbits.TRISC7
#define _TRISC8 TRISCbits.TRISC8
#define _TRISC9 TRISCbits.TRISC9
#define _TRISC10 TRISCbits.TRISC10
#define _TRISC11 TRISCbits.TRISC11
#define _TRISC12 TRISCbits.TRISC12
#define _TRISC13 TRISCbits.TRISC13

/* PORTC */
#define _RC0 PORTCbits.RC0
#define _RC1 PORTCbits.RC1
#define _RC2 PORTCbits.RC2
#define _RC3 PORTCbits.RC3
#define _RC4 PORTCbits.RC4
#define _RC5 PORTCbits.RC5
#define _RC6 PORTCbits.RC6
#define _RC7 PORTCbits.RC7
#define _RC8 PORTCbits.RC8
#define _RC9 PORTCbits.RC9
#define _RC10 PORTCbits.RC10
#define _RC11 PORTCbits.RC11
#define _RC12 PORTCbits.RC12
#define _RC13 PORTCbits.RC13

/* LATC */
#define _LATC0 LATCbits.LATC0
#define _LATC1 LATCbits.LATC1
#define _LATC2 LATCbits.LATC2
#define _LATC3 LATCbits.LATC3
#define _LATC4 LATCbits.LATC4
#define _LATC5 LATCbits.LATC5
#define _LATC6 LATCbits.LATC6
#define _LATC7 LATCbits.LATC7
#define _LATC8 LATCbits.LATC8
#define _LATC9 LATCbits.LATC9
#define _LATC10 LATCbits.LATC10
#define _LATC11 LATCbits.LATC11
#define _LATC12 LATCbits.LATC12
#define _LATC13 LATCbits.LATC13

/* ODCC */
#define _ODCC0 ODCCbits.ODCC0
#define _ODCC1 ODCCbits.ODCC1
#define _ODCC2 ODCCbits.ODCC2
#define _ODCC3 ODCCbits.ODCC3
#define _ODCC4 ODCCbits.ODCC4
#define _ODCC5 ODCCbits.ODCC5
#define _ODCC6 ODCCbits.ODCC6
#define _ODCC7 ODCCbits.ODCC7
#define _ODCC8 ODCCbits.ODCC8
#define _ODCC9 ODCCbits.ODCC9
#define _ODCC10 ODCCbits.ODCC10
#define _ODCC11 ODCCbits.ODCC11
#define _ODCC12 ODCCbits.ODCC12
#define _ODCC13 ODCCbits.ODCC13

/* CNENC */
#define _CNIEC0 CNENCbits.CNIEC0
#define _CNIEC1 CNENCbits.CNIEC1
#define _CNIEC2 CNENCbits.CNIEC2
#define _CNIEC3 CNENCbits.CNIEC3
#define _CNIEC4 CNENCbits.CNIEC4
#define _CNIEC5 CNENCbits.CNIEC5
#define _CNIEC6 CNENCbits.CNIEC6
#define _CNIEC7 CNENCbits.CNIEC7
#define _CNIEC8 CNENCbits.CNIEC8
#define _CNIEC9 CNENCbits.CNIEC9
#define _CNIEC10 CNENCbits.CNIEC10
#define _CNIEC11 CNENCbits.CNIEC11
#define _CNIEC12 CNENCbits.CNIEC12
#define _CNIEC13 CNENCbits.CNIEC13

/* CNPUC */
#define _CNPUC0 CNPUCbits.CNPUC0
#define _CNPUC1 CNPUCbits.CNPUC1
#define _CNPUC2 CNPUCbits.CNPUC2
#define _CNPUC3 CNPUCbits.CNPUC3
#define _CNPUC4 CNPUCbits.CNPUC4
#define _CNPUC5 CNPUCbits.CNPUC5
#define _CNPUC6 CNPUCbits.CNPUC6
#define _CNPUC7 CNPUCbits.CNPUC7
#define _CNPUC8 CNPUCbits.CNPUC8
#define _CNPUC9 CNPUCbits.CNPUC9
#define _CNPUC10 CNPUCbits.CNPUC10
#define _CNPUC11 CNPUCbits.CNPUC11
#define _CNPUC12 CNPUCbits.CNPUC12
#define _CNPUC13 CNPUCbits.CNPUC13

/* CNPDC */
#define _CNPDC0 CNPDCbits.CNPDC0
#define _CNPDC1 CNPDCbits.CNPDC1
#define _CNPDC2 CNPDCbits.CNPDC2
#define _CNPDC3 CNPDCbits.CNPDC3
#define _CNPDC4 CNPDCbits.CNPDC4
#define _CNPDC5 CNPDCbits.CNPDC5
#define _CNPDC6 CNPDCbits.CNPDC6
#define _CNPDC7 CNPDCbits.CNPDC7
#define _CNPDC8 CNPDCbits.CNPDC8
#define _CNPDC9 CNPDCbits.CNPDC9
#define _CNPDC10 CNPDCbits.CNPDC10
#define _CNPDC11 CNPDCbits.CNPDC11
#define _CNPDC12 CNPDCbits.CNPDC12
#define _CNPDC13 CNPDCbits.CNPDC13

/* ANSELC */
#define _ANSC0 ANSELCbits.ANSC0
#define _ANSC1 ANSELCbits.ANSC1
#define _ANSC2 ANSELCbits.ANSC2
#define _ANSC4 ANSELCbits.ANSC4
#define _ANSC5 ANSELCbits.ANSC5
#define _ANSC6 ANSELCbits.ANSC6
#define _ANSC9 ANSELCbits.ANSC9
#define _ANSC10 ANSELCbits.ANSC10
#define _ANSC11 ANSELCbits.ANSC11
#define _ANSC12 ANSELCbits.ANSC12

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

#define _I2C2CON1_SEN_POSITION                   0x00000000
#define _I2C2CON1_SEN_MASK                       0x00000001
#define _I2C2CON1_SEN_LENGTH                     0x00000001

#define _I2C2CON1_RSEN_POSITION                  0x00000001
#define _I2C2CON1_RSEN_MASK                      0x00000002
#define _I2C2CON1_RSEN_LENGTH                    0x00000001

#define _I2C2CON1_PEN_POSITION                   0x00000002
#define _I2C2CON1_PEN_MASK                       0x00000004
#define _I2C2CON1_PEN_LENGTH                     0x00000001

#define _I2C2CON1_RCEN_POSITION                  0x00000003
#define _I2C2CON1_RCEN_MASK                      0x00000008
#define _I2C2CON1_RCEN_LENGTH                    0x00000001

#define _I2C2CON1_ACKEN_POSITION                 0x00000004
#define _I2C2CON1_ACKEN_MASK                     0x00000010
#define _I2C2CON1_ACKEN_LENGTH                   0x00000001

#define _I2C2CON1_ACKDT_POSITION                 0x00000005
#define _I2C2CON1_ACKDT_MASK                     0x00000020
#define _I2C2CON1_ACKDT_LENGTH                   0x00000001

#define _I2C2CON1_STREN_POSITION                 0x00000006
#define _I2C2CON1_STREN_MASK                     0x00000040
#define _I2C2CON1_STREN_LENGTH                   0x00000001

#define _I2C2CON1_GCEN_POSITION                  0x00000007
#define _I2C2CON1_GCEN_MASK                      0x00000080
#define _I2C2CON1_GCEN_LENGTH                    0x00000001

#define _I2C2CON1_SMEN_POSITION                  0x00000008
#define _I2C2CON1_SMEN_MASK                      0x00000100
#define _I2C2CON1_SMEN_LENGTH                    0x00000001

#define _I2C2CON1_DISSLW_POSITION                0x00000009
#define _I2C2CON1_DISSLW_MASK                    0x00000200
#define _I2C2CON1_DISSLW_LENGTH                  0x00000001

#define _I2C2CON1_A10M_POSITION                  0x0000000A
#define _I2C2CON1_A10M_MASK                      0x00000400
#define _I2C2CON1_A10M_LENGTH                    0x00000001

#define _I2C2CON1_STRICT_POSITION                0x0000000B
#define _I2C2CON1_STRICT_MASK                    0x00000800
#define _I2C2CON1_STRICT_LENGTH                  0x00000001

#define _I2C2CON1_SCLREL_POSITION                0x0000000C
#define _I2C2CON1_SCLREL_MASK                    0x00001000
#define _I2C2CON1_SCLREL_LENGTH                  0x00000001

#define _I2C2CON1_I2CSIDL_POSITION               0x0000000D
#define _I2C2CON1_I2CSIDL_MASK                   0x00002000
#define _I2C2CON1_I2CSIDL_LENGTH                 0x00000001

#define _I2C2CON1_I2CEN_POSITION                 0x0000000F
#define _I2C2CON1_I2CEN_MASK                     0x00008000
#define _I2C2CON1_I2CEN_LENGTH                   0x00000001

#define _I2C2CON2_DHEN_POSITION                  0x00000000
#define _I2C2CON2_DHEN_MASK                      0x00000001
#define _I2C2CON2_DHEN_LENGTH                    0x00000001

#define _I2C2CON2_AHEN_POSITION                  0x00000001
#define _I2C2CON2_AHEN_MASK                      0x00000002
#define _I2C2CON2_AHEN_LENGTH                    0x00000001

#define _I2C2CON2_SBCDE_POSITION                 0x00000002
#define _I2C2CON2_SBCDE_MASK                     0x00000004
#define _I2C2CON2_SBCDE_LENGTH                   0x00000001

#define _I2C2CON2_SDAHT_POSITION                 0x00000003
#define _I2C2CON2_SDAHT_MASK                     0x00000008
#define _I2C2CON2_SDAHT_LENGTH                   0x00000001

#define _I2C2CON2_BOEN_POSITION                  0x00000004
#define _I2C2CON2_BOEN_MASK                      0x00000010
#define _I2C2CON2_BOEN_LENGTH                    0x00000001

#define _I2C2CON2_SCIE_POSITION                  0x00000005
#define _I2C2CON2_SCIE_MASK                      0x00000020
#define _I2C2CON2_SCIE_LENGTH                    0x00000001

#define _I2C2CON2_PCIE_POSITION                  0x00000006
#define _I2C2CON2_PCIE_MASK                      0x00000040
#define _I2C2CON2_PCIE_LENGTH                    0x00000001

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

#define _I2C2STAT_ACKTIM_POSITION                0x0000000D
#define _I2C2STAT_ACKTIM_MASK                    0x00002000
#define _I2C2STAT_ACKTIM_LENGTH                  0x00000001

#define _I2C2STAT_TRSTAT_POSITION                0x0000000E
#define _I2C2STAT_TRSTAT_MASK                    0x00004000
#define _I2C2STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C2STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C2STAT_ACKSTAT_MASK                   0x00008000
#define _I2C2STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C2ADD_ADD_POSITION                    0x00000000
#define _I2C2ADD_ADD_MASK                        0x000003FF
#define _I2C2ADD_ADD_LENGTH                      0x0000000A

#define _I2C2MSK_AMSK_POSITION                   0x00000000
#define _I2C2MSK_AMSK_MASK                       0x000003FF
#define _I2C2MSK_AMSK_LENGTH                     0x0000000A

#define _I2C2MSK_AMSK0_POSITION                  0x00000000
#define _I2C2MSK_AMSK0_MASK                      0x00000001
#define _I2C2MSK_AMSK0_LENGTH                    0x00000001

#define _I2C2MSK_AMSK1_POSITION                  0x00000001
#define _I2C2MSK_AMSK1_MASK                      0x00000002
#define _I2C2MSK_AMSK1_LENGTH                    0x00000001

#define _I2C2MSK_AMSK2_POSITION                  0x00000002
#define _I2C2MSK_AMSK2_MASK                      0x00000004
#define _I2C2MSK_AMSK2_LENGTH                    0x00000001

#define _I2C2MSK_AMSK3_POSITION                  0x00000003
#define _I2C2MSK_AMSK3_MASK                      0x00000008
#define _I2C2MSK_AMSK3_LENGTH                    0x00000001

#define _I2C2MSK_AMSK4_POSITION                  0x00000004
#define _I2C2MSK_AMSK4_MASK                      0x00000010
#define _I2C2MSK_AMSK4_LENGTH                    0x00000001

#define _I2C2MSK_AMSK5_POSITION                  0x00000005
#define _I2C2MSK_AMSK5_MASK                      0x00000020
#define _I2C2MSK_AMSK5_LENGTH                    0x00000001

#define _I2C2MSK_AMSK6_POSITION                  0x00000006
#define _I2C2MSK_AMSK6_MASK                      0x00000040
#define _I2C2MSK_AMSK6_LENGTH                    0x00000001

#define _I2C2MSK_AMSK7_POSITION                  0x00000007
#define _I2C2MSK_AMSK7_MASK                      0x00000080
#define _I2C2MSK_AMSK7_LENGTH                    0x00000001

#define _I2C2MSK_AMSK8_POSITION                  0x00000008
#define _I2C2MSK_AMSK8_MASK                      0x00000100
#define _I2C2MSK_AMSK8_LENGTH                    0x00000001

#define _I2C2MSK_AMSK9_POSITION                  0x00000009
#define _I2C2MSK_AMSK9_MASK                      0x00000200
#define _I2C2MSK_AMSK9_LENGTH                    0x00000001

#define _I2C2TRN_I2CTXDATA_POSITION              0x00000000
#define _I2C2TRN_I2CTXDATA_MASK                  0x000000FF
#define _I2C2TRN_I2CTXDATA_LENGTH                0x00000008

#define _I2C2RCV_I2CRXDATA_POSITION              0x00000000
#define _I2C2RCV_I2CRXDATA_MASK                  0x000000FF
#define _I2C2RCV_I2CRXDATA_LENGTH                0x00000008

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

#define _ADCON1_FORM_POSITION                    0x0000000B
#define _ADCON1_FORM_MASK                        0x00000800
#define _ADCON1_FORM_LENGTH                      0x00000001

#define _ADCON1_ADSIDL_POSITION                  0x0000000D
#define _ADCON1_ADSIDL_MASK                      0x00002000
#define _ADCON1_ADSIDL_LENGTH                    0x00000001

#define _ADCON1_ADON_POSITION                    0x0000000F
#define _ADCON1_ADON_MASK                        0x00008000
#define _ADCON1_ADON_LENGTH                      0x00000001

#define _ADCON2_EIE_POSITION                     0x00000000
#define _ADCON2_EIE_MASK                         0x00000007
#define _ADCON2_EIE_LENGTH                       0x00000003

#define _ADCON2_STRGSRC_POSITION                 0x00000006
#define _ADCON2_STRGSRC_MASK                     0x000007C0
#define _ADCON2_STRGSRC_LENGTH                   0x00000005

#define _ADCON2_FLTRDLY_POSITION                 0x0000000B
#define _ADCON2_FLTRDLY_MASK                     0x0000F800
#define _ADCON2_FLTRDLY_LENGTH                   0x00000005

#define _ADCON2_EIE0_POSITION                    0x00000000
#define _ADCON2_EIE0_MASK                        0x00000001
#define _ADCON2_EIE0_LENGTH                      0x00000001

#define _ADCON2_EIE1_POSITION                    0x00000001
#define _ADCON2_EIE1_MASK                        0x00000002
#define _ADCON2_EIE1_LENGTH                      0x00000001

#define _ADCON2_EIE2_POSITION                    0x00000002
#define _ADCON2_EIE2_MASK                        0x00000004
#define _ADCON2_EIE2_LENGTH                      0x00000001

#define _ADCON2_STRGSRC0_POSITION                0x00000006
#define _ADCON2_STRGSRC0_MASK                    0x00000040
#define _ADCON2_STRGSRC0_LENGTH                  0x00000001

#define _ADCON2_STRGSRC1_POSITION                0x00000007
#define _ADCON2_STRGSRC1_MASK                    0x00000080
#define _ADCON2_STRGSRC1_LENGTH                  0x00000001

#define _ADCON2_STRGSRC2_POSITION                0x00000008
#define _ADCON2_STRGSRC2_MASK                    0x00000100
#define _ADCON2_STRGSRC2_LENGTH                  0x00000001

#define _ADCON2_STRGSRC3_POSITION                0x00000009
#define _ADCON2_STRGSRC3_MASK                    0x00000200
#define _ADCON2_STRGSRC3_LENGTH                  0x00000001

#define _ADCON2_STRGSRC4_POSITION                0x0000000A
#define _ADCON2_STRGSRC4_MASK                    0x00000400
#define _ADCON2_STRGSRC4_LENGTH                  0x00000001

#define _ADCON2_FLTRDLY0_POSITION                0x0000000B
#define _ADCON2_FLTRDLY0_MASK                    0x00000800
#define _ADCON2_FLTRDLY0_LENGTH                  0x00000001

#define _ADCON2_FLTRDLY1_POSITION                0x0000000C
#define _ADCON2_FLTRDLY1_MASK                    0x00001000
#define _ADCON2_FLTRDLY1_LENGTH                  0x00000001

#define _ADCON2_FLTRDLY2_POSITION                0x0000000D
#define _ADCON2_FLTRDLY2_MASK                    0x00002000
#define _ADCON2_FLTRDLY2_LENGTH                  0x00000001

#define _ADCON2_FLTRDLY3_POSITION                0x0000000E
#define _ADCON2_FLTRDLY3_MASK                    0x00004000
#define _ADCON2_FLTRDLY3_LENGTH                  0x00000001

#define _ADCON2_FLTRDLY4_POSITION                0x0000000F
#define _ADCON2_FLTRDLY4_MASK                    0x00008000
#define _ADCON2_FLTRDLY4_LENGTH                  0x00000001

#define _ADCON3_ADCS_POSITION                    0x00000000
#define _ADCON3_ADCS_MASK                        0x0000007F
#define _ADCON3_ADCS_LENGTH                      0x00000007

#define _ADCON3_ADCSEL_POSITION                  0x00000008
#define _ADCON3_ADCSEL_MASK                      0x00000300
#define _ADCON3_ADCSEL_LENGTH                    0x00000002

#define _ADCON3_LOWPWR_POSITION                  0x0000000D
#define _ADCON3_LOWPWR_MASK                      0x00002000
#define _ADCON3_LOWPWR_LENGTH                    0x00000001

#define _ADCON3_BOOST_POSITION                   0x0000000E
#define _ADCON3_BOOST_MASK                       0x00004000
#define _ADCON3_BOOST_LENGTH                     0x00000001

#define _ADCON3_ADCS0_POSITION                   0x00000000
#define _ADCON3_ADCS0_MASK                       0x00000001
#define _ADCON3_ADCS0_LENGTH                     0x00000001

#define _ADCON3_ADCS1_POSITION                   0x00000001
#define _ADCON3_ADCS1_MASK                       0x00000002
#define _ADCON3_ADCS1_LENGTH                     0x00000001

#define _ADCON3_ADCS2_POSITION                   0x00000002
#define _ADCON3_ADCS2_MASK                       0x00000004
#define _ADCON3_ADCS2_LENGTH                     0x00000001

#define _ADCON3_ADCS3_POSITION                   0x00000003
#define _ADCON3_ADCS3_MASK                       0x00000008
#define _ADCON3_ADCS3_LENGTH                     0x00000001

#define _ADCON3_ADCS4_POSITION                   0x00000004
#define _ADCON3_ADCS4_MASK                       0x00000010
#define _ADCON3_ADCS4_LENGTH                     0x00000001

#define _ADCON3_ADCS5_POSITION                   0x00000005
#define _ADCON3_ADCS5_MASK                       0x00000020
#define _ADCON3_ADCS5_LENGTH                     0x00000001

#define _ADCON3_ADCS6_POSITION                   0x00000006
#define _ADCON3_ADCS6_MASK                       0x00000040
#define _ADCON3_ADCS6_LENGTH                     0x00000001

#define _ADCON3_ADCSEL0_POSITION                 0x00000008
#define _ADCON3_ADCSEL0_MASK                     0x00000100
#define _ADCON3_ADCSEL0_LENGTH                   0x00000001

#define _ADCON3_ADCSEL1_POSITION                 0x00000009
#define _ADCON3_ADCSEL1_MASK                     0x00000200
#define _ADCON3_ADCSEL1_LENGTH                   0x00000001

#define _ADCON4_SAMC_POSITION                    0x00000000
#define _ADCON4_SAMC_MASK                        0x000000FF
#define _ADCON4_SAMC_LENGTH                      0x00000008

#define _ADCON4_ADCRDY_POSITION                  0x0000000F
#define _ADCON4_ADCRDY_MASK                      0x00008000
#define _ADCON4_ADCRDY_LENGTH                    0x00000001

#define _ADCON4_SAMC0_POSITION                   0x00000000
#define _ADCON4_SAMC0_MASK                       0x00000001
#define _ADCON4_SAMC0_LENGTH                     0x00000001

#define _ADCON4_SAMC1_POSITION                   0x00000001
#define _ADCON4_SAMC1_MASK                       0x00000002
#define _ADCON4_SAMC1_LENGTH                     0x00000001

#define _ADCON4_SAMC2_POSITION                   0x00000002
#define _ADCON4_SAMC2_MASK                       0x00000004
#define _ADCON4_SAMC2_LENGTH                     0x00000001

#define _ADCON4_SAMC3_POSITION                   0x00000003
#define _ADCON4_SAMC3_MASK                       0x00000008
#define _ADCON4_SAMC3_LENGTH                     0x00000001

#define _ADCON4_SAMC4_POSITION                   0x00000004
#define _ADCON4_SAMC4_MASK                       0x00000010
#define _ADCON4_SAMC4_LENGTH                     0x00000001

#define _ADCON4_SAMC5_POSITION                   0x00000005
#define _ADCON4_SAMC5_MASK                       0x00000020
#define _ADCON4_SAMC5_LENGTH                     0x00000001

#define _ADCON4_SAMC6_POSITION                   0x00000006
#define _ADCON4_SAMC6_MASK                       0x00000040
#define _ADCON4_SAMC6_LENGTH                     0x00000001

#define _ADCON4_SAMC7_POSITION                   0x00000007
#define _ADCON4_SAMC7_MASK                       0x00000080
#define _ADCON4_SAMC7_LENGTH                     0x00000001

#define _ADCON5_ADINSEL_POSITION                 0x00000000
#define _ADCON5_ADINSEL_MASK                     0x0000003F
#define _ADCON5_ADINSEL_LENGTH                   0x00000006

#define _ADCON5_VREFSEL_POSITION                 0x0000000A
#define _ADCON5_VREFSEL_MASK                     0x00001C00
#define _ADCON5_VREFSEL_LENGTH                   0x00000003

#define _ADCON5_ADINSEL0_POSITION                0x00000000
#define _ADCON5_ADINSEL0_MASK                    0x00000001
#define _ADCON5_ADINSEL0_LENGTH                  0x00000001

#define _ADCON5_ADINSEL1_POSITION                0x00000001
#define _ADCON5_ADINSEL1_MASK                    0x00000002
#define _ADCON5_ADINSEL1_LENGTH                  0x00000001

#define _ADCON5_ADINSEL2_POSITION                0x00000002
#define _ADCON5_ADINSEL2_MASK                    0x00000004
#define _ADCON5_ADINSEL2_LENGTH                  0x00000001

#define _ADCON5_ADINSEL3_POSITION                0x00000003
#define _ADCON5_ADINSEL3_MASK                    0x00000008
#define _ADCON5_ADINSEL3_LENGTH                  0x00000001

#define _ADCON5_ADINSEL4_POSITION                0x00000004
#define _ADCON5_ADINSEL4_MASK                    0x00000010
#define _ADCON5_ADINSEL4_LENGTH                  0x00000001

#define _ADCON5_ADINSEL5_POSITION                0x00000005
#define _ADCON5_ADINSEL5_MASK                    0x00000020
#define _ADCON5_ADINSEL5_LENGTH                  0x00000001

#define _ADCON5_VREFSEL0_POSITION                0x0000000A
#define _ADCON5_VREFSEL0_MASK                    0x00000400
#define _ADCON5_VREFSEL0_LENGTH                  0x00000001

#define _ADCON5_VREFSEL1_POSITION                0x0000000B
#define _ADCON5_VREFSEL1_MASK                    0x00000800
#define _ADCON5_VREFSEL1_LENGTH                  0x00000001

#define _ADCON5_VREFSEL2_POSITION                0x0000000C
#define _ADCON5_VREFSEL2_MASK                    0x00001000
#define _ADCON5_VREFSEL2_LENGTH                  0x00000001

#define _ADCON6_RQCONVRT_POSITION                0x0000000D
#define _ADCON6_RQCONVRT_MASK                    0x00002000
#define _ADCON6_RQCONVRT_LENGTH                  0x00000001

#define _ADCON6_GSWTRG_POSITION                  0x0000000E
#define _ADCON6_GSWTRG_MASK                      0x00004000
#define _ADCON6_GSWTRG_LENGTH                    0x00000001

#define _ADCON6_CAL_POSITION                     0x0000000F
#define _ADCON6_CAL_MASK                         0x00008000
#define _ADCON6_CAL_LENGTH                       0x00000001

#define _ADMOD_SH0MOD_POSITION                   0x00000000
#define _ADMOD_SH0MOD_MASK                       0x00000003
#define _ADMOD_SH0MOD_LENGTH                     0x00000002

#define _ADMOD_SH1MOD_POSITION                   0x00000002
#define _ADMOD_SH1MOD_MASK                       0x0000000C
#define _ADMOD_SH1MOD_LENGTH                     0x00000002

#define _ADMOD_SH2MOD_POSITION                   0x00000004
#define _ADMOD_SH2MOD_MASK                       0x00000030
#define _ADMOD_SH2MOD_LENGTH                     0x00000002

#define _ADMOD_SH3MOD_POSITION                   0x00000006
#define _ADMOD_SH3MOD_MASK                       0x000000C0
#define _ADMOD_SH3MOD_LENGTH                     0x00000002

#define _ADMOD_SH4MOD_POSITION                   0x00000008
#define _ADMOD_SH4MOD_MASK                       0x00000300
#define _ADMOD_SH4MOD_LENGTH                     0x00000002

#define _ADMOD_SH0MOD0_POSITION                  0x00000000
#define _ADMOD_SH0MOD0_MASK                      0x00000001
#define _ADMOD_SH0MOD0_LENGTH                    0x00000001

#define _ADMOD_SH0MOD1_POSITION                  0x00000001
#define _ADMOD_SH0MOD1_MASK                      0x00000002
#define _ADMOD_SH0MOD1_LENGTH                    0x00000001

#define _ADMOD_SH1MOD0_POSITION                  0x00000002
#define _ADMOD_SH1MOD0_MASK                      0x00000004
#define _ADMOD_SH1MOD0_LENGTH                    0x00000001

#define _ADMOD_SH1MOD1_POSITION                  0x00000003
#define _ADMOD_SH1MOD1_MASK                      0x00000008
#define _ADMOD_SH1MOD1_LENGTH                    0x00000001

#define _ADMOD_SH2MOD0_POSITION                  0x00000004
#define _ADMOD_SH2MOD0_MASK                      0x00000010
#define _ADMOD_SH2MOD0_LENGTH                    0x00000001

#define _ADMOD_SH2MOD1_POSITION                  0x00000005
#define _ADMOD_SH2MOD1_MASK                      0x00000020
#define _ADMOD_SH2MOD1_LENGTH                    0x00000001

#define _ADMOD_SH3MOD0_POSITION                  0x00000006
#define _ADMOD_SH3MOD0_MASK                      0x00000040
#define _ADMOD_SH3MOD0_LENGTH                    0x00000001

#define _ADMOD_SH3MOD1_POSITION                  0x00000007
#define _ADMOD_SH3MOD1_MASK                      0x00000080
#define _ADMOD_SH3MOD1_LENGTH                    0x00000001

#define _ADMOD_SH4MOD0_POSITION                  0x00000008
#define _ADMOD_SH4MOD0_MASK                      0x00000100
#define _ADMOD_SH4MOD0_LENGTH                    0x00000001

#define _ADMOD_SH4MOD1_POSITION                  0x00000009
#define _ADMOD_SH4MOD1_MASK                      0x00000200
#define _ADMOD_SH4MOD1_LENGTH                    0x00000001

#define _ADALT_SH0ALT_POSITION                   0x00000000
#define _ADALT_SH0ALT_MASK                       0x00000003
#define _ADALT_SH0ALT_LENGTH                     0x00000002

#define _ADALT_SH1ALT_POSITION                   0x00000002
#define _ADALT_SH1ALT_MASK                       0x0000000C
#define _ADALT_SH1ALT_LENGTH                     0x00000002

#define _ADALT_SH2ALT_POSITION                   0x00000004
#define _ADALT_SH2ALT_MASK                       0x00000030
#define _ADALT_SH2ALT_LENGTH                     0x00000002

#define _ADALT_SH3ALT_POSITION                   0x00000006
#define _ADALT_SH3ALT_MASK                       0x000000C0
#define _ADALT_SH3ALT_LENGTH                     0x00000002

#define _ADALT_SH0ALT0_POSITION                  0x00000000
#define _ADALT_SH0ALT0_MASK                      0x00000001
#define _ADALT_SH0ALT0_LENGTH                    0x00000001

#define _ADALT_SH0ALT1_POSITION                  0x00000001
#define _ADALT_SH0ALT1_MASK                      0x00000002
#define _ADALT_SH0ALT1_LENGTH                    0x00000001

#define _ADALT_SH1ALT0_POSITION                  0x00000002
#define _ADALT_SH1ALT0_MASK                      0x00000004
#define _ADALT_SH1ALT0_LENGTH                    0x00000001

#define _ADALT_SH1ALT1_POSITION                  0x00000003
#define _ADALT_SH1ALT1_MASK                      0x00000008
#define _ADALT_SH1ALT1_LENGTH                    0x00000001

#define _ADALT_SH2ALT0_POSITION                  0x00000004
#define _ADALT_SH2ALT0_MASK                      0x00000010
#define _ADALT_SH2ALT0_LENGTH                    0x00000001

#define _ADALT_SH2ALT1_POSITION                  0x00000005
#define _ADALT_SH2ALT1_MASK                      0x00000020
#define _ADALT_SH2ALT1_LENGTH                    0x00000001

#define _ADALT_SH3ALT0_POSITION                  0x00000006
#define _ADALT_SH3ALT0_MASK                      0x00000040
#define _ADALT_SH3ALT0_LENGTH                    0x00000001

#define _ADALT_SH3ALT1_POSITION                  0x00000007
#define _ADALT_SH3ALT1_MASK                      0x00000080
#define _ADALT_SH3ALT1_LENGTH                    0x00000001

#define _ADGIRQENL_IRQEN0_POSITION               0x00000000
#define _ADGIRQENL_IRQEN0_MASK                   0x00000001
#define _ADGIRQENL_IRQEN0_LENGTH                 0x00000001

#define _ADGIRQENL_IRQEN1_POSITION               0x00000001
#define _ADGIRQENL_IRQEN1_MASK                   0x00000002
#define _ADGIRQENL_IRQEN1_LENGTH                 0x00000001

#define _ADGIRQENL_IRQEN2_POSITION               0x00000002
#define _ADGIRQENL_IRQEN2_MASK                   0x00000004
#define _ADGIRQENL_IRQEN2_LENGTH                 0x00000001

#define _ADGIRQENL_IRQEN3_POSITION               0x00000003
#define _ADGIRQENL_IRQEN3_MASK                   0x00000008
#define _ADGIRQENL_IRQEN3_LENGTH                 0x00000001

#define _ADGIRQENL_IRQEN4_POSITION               0x00000004
#define _ADGIRQENL_IRQEN4_MASK                   0x00000010
#define _ADGIRQENL_IRQEN4_LENGTH                 0x00000001

#define _ADGIRQENL_IRQEN5_POSITION               0x00000005
#define _ADGIRQENL_IRQEN5_MASK                   0x00000020
#define _ADGIRQENL_IRQEN5_LENGTH                 0x00000001

#define _ADGIRQENL_IRQEN6_POSITION               0x00000006
#define _ADGIRQENL_IRQEN6_MASK                   0x00000040
#define _ADGIRQENL_IRQEN6_LENGTH                 0x00000001

#define _ADGIRQENL_IRQEN7_POSITION               0x00000007
#define _ADGIRQENL_IRQEN7_MASK                   0x00000080
#define _ADGIRQENL_IRQEN7_LENGTH                 0x00000001

#define _ADGIRQENL_IRQEN8_POSITION               0x00000008
#define _ADGIRQENL_IRQEN8_MASK                   0x00000100
#define _ADGIRQENL_IRQEN8_LENGTH                 0x00000001

#define _ADGIRQENL_IRQEN9_POSITION               0x00000009
#define _ADGIRQENL_IRQEN9_MASK                   0x00000200
#define _ADGIRQENL_IRQEN9_LENGTH                 0x00000001

#define _ADGIRQENL_IRQEN10_POSITION              0x0000000A
#define _ADGIRQENL_IRQEN10_MASK                  0x00000400
#define _ADGIRQENL_IRQEN10_LENGTH                0x00000001

#define _ADGIRQENL_IRQEN11_POSITION              0x0000000B
#define _ADGIRQENL_IRQEN11_MASK                  0x00000800
#define _ADGIRQENL_IRQEN11_LENGTH                0x00000001

#define _ADGIRQENL_IRQEN12_POSITION              0x0000000C
#define _ADGIRQENL_IRQEN12_MASK                  0x00001000
#define _ADGIRQENL_IRQEN12_LENGTH                0x00000001

#define _ADGIRQENL_IRQEN14_POSITION              0x0000000E
#define _ADGIRQENL_IRQEN14_MASK                  0x00004000
#define _ADGIRQENL_IRQEN14_LENGTH                0x00000001

#define _ADGIRQENH_IRQEN17_POSITION              0x00000001
#define _ADGIRQENH_IRQEN17_MASK                  0x00000002
#define _ADGIRQENH_IRQEN17_LENGTH                0x00000001

#define _ADGIRQENH_IRQEN18_POSITION              0x00000002
#define _ADGIRQENH_IRQEN18_MASK                  0x00000004
#define _ADGIRQENH_IRQEN18_LENGTH                0x00000001

#define _ADGIRQENH_IRQEN19_POSITION              0x00000003
#define _ADGIRQENH_IRQEN19_MASK                  0x00000008
#define _ADGIRQENH_IRQEN19_LENGTH                0x00000001

#define _ADGIRQENH_IRQEN20_POSITION              0x00000004
#define _ADGIRQENH_IRQEN20_MASK                  0x00000010
#define _ADGIRQENH_IRQEN20_LENGTH                0x00000001

#define _ADGIRQENH_IRQEN21_POSITION              0x00000005
#define _ADGIRQENH_IRQEN21_MASK                  0x00000020
#define _ADGIRQENH_IRQEN21_LENGTH                0x00000001

#define _ADGIRQENH_IRQEN22_POSITION              0x00000006
#define _ADGIRQENH_IRQEN22_MASK                  0x00000040
#define _ADGIRQENH_IRQEN22_LENGTH                0x00000001

#define _ADGIRQENH_IRQEN23_POSITION              0x00000007
#define _ADGIRQENH_IRQEN23_MASK                  0x00000080
#define _ADGIRQENH_IRQEN23_LENGTH                0x00000001

#define _ADGIRQENH_IRQEN24_POSITION              0x00000008
#define _ADGIRQENH_IRQEN24_MASK                  0x00000100
#define _ADGIRQENH_IRQEN24_LENGTH                0x00000001

#define _ADGIRQENH_IRQEN25_POSITION              0x00000009
#define _ADGIRQENH_IRQEN25_MASK                  0x00000200
#define _ADGIRQENH_IRQEN25_LENGTH                0x00000001

#define _ADGIRQENH_IRQEN26_POSITION              0x0000000A
#define _ADGIRQENH_IRQEN26_MASK                  0x00000400
#define _ADGIRQENH_IRQEN26_LENGTH                0x00000001

#define _ADCSSL_CSS0_POSITION                    0x00000000
#define _ADCSSL_CSS0_MASK                        0x00000001
#define _ADCSSL_CSS0_LENGTH                      0x00000001

#define _ADCSSL_CSS1_POSITION                    0x00000001
#define _ADCSSL_CSS1_MASK                        0x00000002
#define _ADCSSL_CSS1_LENGTH                      0x00000001

#define _ADCSSL_CSS2_POSITION                    0x00000002
#define _ADCSSL_CSS2_MASK                        0x00000004
#define _ADCSSL_CSS2_LENGTH                      0x00000001

#define _ADCSSL_CSS3_POSITION                    0x00000003
#define _ADCSSL_CSS3_MASK                        0x00000008
#define _ADCSSL_CSS3_LENGTH                      0x00000001

#define _ADCSSL_CSS4_POSITION                    0x00000004
#define _ADCSSL_CSS4_MASK                        0x00000010
#define _ADCSSL_CSS4_LENGTH                      0x00000001

#define _ADCSSL_CSS5_POSITION                    0x00000005
#define _ADCSSL_CSS5_MASK                        0x00000020
#define _ADCSSL_CSS5_LENGTH                      0x00000001

#define _ADCSSL_CSS6_POSITION                    0x00000006
#define _ADCSSL_CSS6_MASK                        0x00000040
#define _ADCSSL_CSS6_LENGTH                      0x00000001

#define _ADCSSL_CSS7_POSITION                    0x00000007
#define _ADCSSL_CSS7_MASK                        0x00000080
#define _ADCSSL_CSS7_LENGTH                      0x00000001

#define _ADCSSL_CSS8_POSITION                    0x00000008
#define _ADCSSL_CSS8_MASK                        0x00000100
#define _ADCSSL_CSS8_LENGTH                      0x00000001

#define _ADCSSL_CSS9_POSITION                    0x00000009
#define _ADCSSL_CSS9_MASK                        0x00000200
#define _ADCSSL_CSS9_LENGTH                      0x00000001

#define _ADCSSL_CSS10_POSITION                   0x0000000A
#define _ADCSSL_CSS10_MASK                       0x00000400
#define _ADCSSL_CSS10_LENGTH                     0x00000001

#define _ADCSSL_CSS11_POSITION                   0x0000000B
#define _ADCSSL_CSS11_MASK                       0x00000800
#define _ADCSSL_CSS11_LENGTH                     0x00000001

#define _ADCSSL_CSS12_POSITION                   0x0000000C
#define _ADCSSL_CSS12_MASK                       0x00001000
#define _ADCSSL_CSS12_LENGTH                     0x00000001

#define _ADCSSL_CSS14_POSITION                   0x0000000E
#define _ADCSSL_CSS14_MASK                       0x00004000
#define _ADCSSL_CSS14_LENGTH                     0x00000001

#define _ADCSSH_CSS17_POSITION                   0x00000001
#define _ADCSSH_CSS17_MASK                       0x00000002
#define _ADCSSH_CSS17_LENGTH                     0x00000001

#define _ADCSSH_CSS18_POSITION                   0x00000002
#define _ADCSSH_CSS18_MASK                       0x00000004
#define _ADCSSH_CSS18_LENGTH                     0x00000001

#define _ADCSSH_CSS19_POSITION                   0x00000003
#define _ADCSSH_CSS19_MASK                       0x00000008
#define _ADCSSH_CSS19_LENGTH                     0x00000001

#define _ADCSSH_CSS20_POSITION                   0x00000004
#define _ADCSSH_CSS20_MASK                       0x00000010
#define _ADCSSH_CSS20_LENGTH                     0x00000001

#define _ADCSSH_CSS21_POSITION                   0x00000005
#define _ADCSSH_CSS21_MASK                       0x00000020
#define _ADCSSH_CSS21_LENGTH                     0x00000001

#define _ADCSSH_CSS22_POSITION                   0x00000006
#define _ADCSSH_CSS22_MASK                       0x00000040
#define _ADCSSH_CSS22_LENGTH                     0x00000001

#define _ADCSSH_CSS23_POSITION                   0x00000007
#define _ADCSSH_CSS23_MASK                       0x00000080
#define _ADCSSH_CSS23_LENGTH                     0x00000001

#define _ADCSSH_CSS24_POSITION                   0x00000008
#define _ADCSSH_CSS24_MASK                       0x00000100
#define _ADCSSH_CSS24_LENGTH                     0x00000001

#define _ADCSSH_CSS25_POSITION                   0x00000009
#define _ADCSSH_CSS25_MASK                       0x00000200
#define _ADCSSH_CSS25_LENGTH                     0x00000001

#define _ADCSSH_CSS26_POSITION                   0x0000000A
#define _ADCSSH_CSS26_MASK                       0x00000400
#define _ADCSSH_CSS26_LENGTH                     0x00000001

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

#define _ADSTATL_AN14RDY_POSITION                0x0000000E
#define _ADSTATL_AN14RDY_MASK                    0x00004000
#define _ADSTATL_AN14RDY_LENGTH                  0x00000001

#define _ADSTATH_AN17RDY_POSITION                0x00000001
#define _ADSTATH_AN17RDY_MASK                    0x00000002
#define _ADSTATH_AN17RDY_LENGTH                  0x00000001

#define _ADSTATH_AN18RDY_POSITION                0x00000002
#define _ADSTATH_AN18RDY_MASK                    0x00000004
#define _ADSTATH_AN18RDY_LENGTH                  0x00000001

#define _ADSTATH_AN19RDY_POSITION                0x00000003
#define _ADSTATH_AN19RDY_MASK                    0x00000008
#define _ADSTATH_AN19RDY_LENGTH                  0x00000001

#define _ADSTATH_AN20RDY_POSITION                0x00000004
#define _ADSTATH_AN20RDY_MASK                    0x00000010
#define _ADSTATH_AN20RDY_LENGTH                  0x00000001

#define _ADSTATH_AN21RDY_POSITION                0x00000005
#define _ADSTATH_AN21RDY_MASK                    0x00000020
#define _ADSTATH_AN21RDY_LENGTH                  0x00000001

#define _ADSTATH_AN22RDY_POSITION                0x00000006
#define _ADSTATH_AN22RDY_MASK                    0x00000040
#define _ADSTATH_AN22RDY_LENGTH                  0x00000001

#define _ADSTATH_AN23RDY_POSITION                0x00000007
#define _ADSTATH_AN23RDY_MASK                    0x00000080
#define _ADSTATH_AN23RDY_LENGTH                  0x00000001

#define _ADSTATH_AN24RDY_POSITION                0x00000008
#define _ADSTATH_AN24RDY_MASK                    0x00000100
#define _ADSTATH_AN24RDY_LENGTH                  0x00000001

#define _ADSTATH_AN25RDY_POSITION                0x00000009
#define _ADSTATH_AN25RDY_MASK                    0x00000200
#define _ADSTATH_AN25RDY_LENGTH                  0x00000001

#define _ADSTATH_AN26RDY_POSITION                0x0000000A
#define _ADSTATH_AN26RDY_MASK                    0x00000400
#define _ADSTATH_AN26RDY_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN0_POSITION                0x00000000
#define _DCMP1ENL_CMPEN0_MASK                    0x00000001
#define _DCMP1ENL_CMPEN0_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN1_POSITION                0x00000001
#define _DCMP1ENL_CMPEN1_MASK                    0x00000002
#define _DCMP1ENL_CMPEN1_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN2_POSITION                0x00000002
#define _DCMP1ENL_CMPEN2_MASK                    0x00000004
#define _DCMP1ENL_CMPEN2_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN3_POSITION                0x00000003
#define _DCMP1ENL_CMPEN3_MASK                    0x00000008
#define _DCMP1ENL_CMPEN3_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN4_POSITION                0x00000004
#define _DCMP1ENL_CMPEN4_MASK                    0x00000010
#define _DCMP1ENL_CMPEN4_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN5_POSITION                0x00000005
#define _DCMP1ENL_CMPEN5_MASK                    0x00000020
#define _DCMP1ENL_CMPEN5_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN6_POSITION                0x00000006
#define _DCMP1ENL_CMPEN6_MASK                    0x00000040
#define _DCMP1ENL_CMPEN6_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN7_POSITION                0x00000007
#define _DCMP1ENL_CMPEN7_MASK                    0x00000080
#define _DCMP1ENL_CMPEN7_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN8_POSITION                0x00000008
#define _DCMP1ENL_CMPEN8_MASK                    0x00000100
#define _DCMP1ENL_CMPEN8_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN9_POSITION                0x00000009
#define _DCMP1ENL_CMPEN9_MASK                    0x00000200
#define _DCMP1ENL_CMPEN9_LENGTH                  0x00000001

#define _DCMP1ENL_CMPEN10_POSITION               0x0000000A
#define _DCMP1ENL_CMPEN10_MASK                   0x00000400
#define _DCMP1ENL_CMPEN10_LENGTH                 0x00000001

#define _DCMP1ENL_CMPEN11_POSITION               0x0000000B
#define _DCMP1ENL_CMPEN11_MASK                   0x00000800
#define _DCMP1ENL_CMPEN11_LENGTH                 0x00000001

#define _DCMP1ENL_CMPEN12_POSITION               0x0000000C
#define _DCMP1ENL_CMPEN12_MASK                   0x00001000
#define _DCMP1ENL_CMPEN12_LENGTH                 0x00000001

#define _DCMP1ENL_CMPEN14_POSITION               0x0000000E
#define _DCMP1ENL_CMPEN14_MASK                   0x00004000
#define _DCMP1ENL_CMPEN14_LENGTH                 0x00000001

#define _DCMP1ENH_CMPEN17_POSITION               0x00000001
#define _DCMP1ENH_CMPEN17_MASK                   0x00000002
#define _DCMP1ENH_CMPEN17_LENGTH                 0x00000001

#define _DCMP1ENH_CMPEN18_POSITION               0x00000002
#define _DCMP1ENH_CMPEN18_MASK                   0x00000004
#define _DCMP1ENH_CMPEN18_LENGTH                 0x00000001

#define _DCMP1ENH_CMPEN19_POSITION               0x00000003
#define _DCMP1ENH_CMPEN19_MASK                   0x00000008
#define _DCMP1ENH_CMPEN19_LENGTH                 0x00000001

#define _DCMP1ENH_CMPEN20_POSITION               0x00000004
#define _DCMP1ENH_CMPEN20_MASK                   0x00000010
#define _DCMP1ENH_CMPEN20_LENGTH                 0x00000001

#define _DCMP1ENH_CMPEN21_POSITION               0x00000005
#define _DCMP1ENH_CMPEN21_MASK                   0x00000020
#define _DCMP1ENH_CMPEN21_LENGTH                 0x00000001

#define _DCMP1ENH_CMPEN22_POSITION               0x00000006
#define _DCMP1ENH_CMPEN22_MASK                   0x00000040
#define _DCMP1ENH_CMPEN22_LENGTH                 0x00000001

#define _DCMP1ENH_CMPEN23_POSITION               0x00000007
#define _DCMP1ENH_CMPEN23_MASK                   0x00000080
#define _DCMP1ENH_CMPEN23_LENGTH                 0x00000001

#define _DCMP1ENH_CMPEN24_POSITION               0x00000008
#define _DCMP1ENH_CMPEN24_MASK                   0x00000100
#define _DCMP1ENH_CMPEN24_LENGTH                 0x00000001

#define _DCMP1ENH_CMPEN25_POSITION               0x00000009
#define _DCMP1ENH_CMPEN25_MASK                   0x00000200
#define _DCMP1ENH_CMPEN25_LENGTH                 0x00000001

#define _DCMP1ENH_CMPEN26_POSITION               0x0000000A
#define _DCMP1ENH_CMPEN26_MASK                   0x00000400
#define _DCMP1ENH_CMPEN26_LENGTH                 0x00000001

#define _DCMP2ENL_CMPEN0_POSITION                0x00000000
#define _DCMP2ENL_CMPEN0_MASK                    0x00000001
#define _DCMP2ENL_CMPEN0_LENGTH                  0x00000001

#define _DCMP2ENL_CMPEN1_POSITION                0x00000001
#define _DCMP2ENL_CMPEN1_MASK                    0x00000002
#define _DCMP2ENL_CMPEN1_LENGTH                  0x00000001

#define _DCMP2ENL_CMPEN2_POSITION                0x00000002
#define _DCMP2ENL_CMPEN2_MASK                    0x00000004
#define _DCMP2ENL_CMPEN2_LENGTH                  0x00000001

#define _DCMP2ENL_CMPEN3_POSITION                0x00000003
#define _DCMP2ENL_CMPEN3_MASK                    0x00000008
#define _DCMP2ENL_CMPEN3_LENGTH                  0x00000001

#define _DCMP2ENL_CMPEN4_POSITION                0x00000004
#define _DCMP2ENL_CMPEN4_MASK                    0x00000010
#define _DCMP2ENL_CMPEN4_LENGTH                  0x00000001

#define _DCMP2ENL_CMPEN5_POSITION                0x00000005
#define _DCMP2ENL_CMPEN5_MASK                    0x00000020
#define _DCMP2ENL_CMPEN5_LENGTH                  0x00000001

#define _DCMP2ENL_CMPEN6_POSITION                0x00000006
#define _DCMP2ENL_CMPEN6_MASK                    0x00000040
#define _DCMP2ENL_CMPEN6_LENGTH                  0x00000001

#define _DCMP2ENL_CMPEN7_POSITION                0x00000007
#define _DCMP2ENL_CMPEN7_MASK                    0x00000080
#define _DCMP2ENL_CMPEN7_LENGTH                  0x00000001

#define _DCMP2ENL_CMPEN8_POSITION                0x00000008
#define _DCMP2ENL_CMPEN8_MASK                    0x00000100
#define _DCMP2ENL_CMPEN8_LENGTH                  0x00000001

#define _DCMP2ENL_CMPEN9_POSITION                0x00000009
#define _DCMP2ENL_CMPEN9_MASK                    0x00000200
#define _DCMP2ENL_CMPEN9_LENGTH                  0x00000001

#define _DCMP2ENL_CMPEN10_POSITION               0x0000000A
#define _DCMP2ENL_CMPEN10_MASK                   0x00000400
#define _DCMP2ENL_CMPEN10_LENGTH                 0x00000001

#define _DCMP2ENL_CMPEN11_POSITION               0x0000000B
#define _DCMP2ENL_CMPEN11_MASK                   0x00000800
#define _DCMP2ENL_CMPEN11_LENGTH                 0x00000001

#define _DCMP2ENL_CMPEN12_POSITION               0x0000000C
#define _DCMP2ENL_CMPEN12_MASK                   0x00001000
#define _DCMP2ENL_CMPEN12_LENGTH                 0x00000001

#define _DCMP2ENL_CMPEN14_POSITION               0x0000000E
#define _DCMP2ENL_CMPEN14_MASK                   0x00004000
#define _DCMP2ENL_CMPEN14_LENGTH                 0x00000001

#define _DCMP2ENH_CMPEN17_POSITION               0x00000001
#define _DCMP2ENH_CMPEN17_MASK                   0x00000002
#define _DCMP2ENH_CMPEN17_LENGTH                 0x00000001

#define _DCMP2ENH_CMPEN18_POSITION               0x00000002
#define _DCMP2ENH_CMPEN18_MASK                   0x00000004
#define _DCMP2ENH_CMPEN18_LENGTH                 0x00000001

#define _DCMP2ENH_CMPEN19_POSITION               0x00000003
#define _DCMP2ENH_CMPEN19_MASK                   0x00000008
#define _DCMP2ENH_CMPEN19_LENGTH                 0x00000001

#define _DCMP2ENH_CMPEN20_POSITION               0x00000004
#define _DCMP2ENH_CMPEN20_MASK                   0x00000010
#define _DCMP2ENH_CMPEN20_LENGTH                 0x00000001

#define _DCMP2ENH_CMPEN21_POSITION               0x00000005
#define _DCMP2ENH_CMPEN21_MASK                   0x00000020
#define _DCMP2ENH_CMPEN21_LENGTH                 0x00000001

#define _DCMP2ENH_CMPEN22_POSITION               0x00000006
#define _DCMP2ENH_CMPEN22_MASK                   0x00000040
#define _DCMP2ENH_CMPEN22_LENGTH                 0x00000001

#define _DCMP2ENH_CMPEN23_POSITION               0x00000007
#define _DCMP2ENH_CMPEN23_MASK                   0x00000080
#define _DCMP2ENH_CMPEN23_LENGTH                 0x00000001

#define _DCMP2ENH_CMPEN24_POSITION               0x00000008
#define _DCMP2ENH_CMPEN24_MASK                   0x00000100
#define _DCMP2ENH_CMPEN24_LENGTH                 0x00000001

#define _DCMP2ENH_CMPEN25_POSITION               0x00000009
#define _DCMP2ENH_CMPEN25_MASK                   0x00000200
#define _DCMP2ENH_CMPEN25_LENGTH                 0x00000001

#define _DCMP2ENH_CMPEN26_POSITION               0x0000000A
#define _DCMP2ENH_CMPEN26_MASK                   0x00000400
#define _DCMP2ENH_CMPEN26_LENGTH                 0x00000001

#define _ADFLTR1CON_CHNLID_POSITION              0x00000000
#define _ADFLTR1CON_CHNLID_MASK                  0x0000003F
#define _ADFLTR1CON_CHNLID_LENGTH                0x00000006

#define _ADFLTR1CON_AFRDY_POSITION               0x00000008
#define _ADFLTR1CON_AFRDY_MASK                   0x00000100
#define _ADFLTR1CON_AFRDY_LENGTH                 0x00000001

#define _ADFLTR1CON_AFGIEN_POSITION              0x00000009
#define _ADFLTR1CON_AFGIEN_MASK                  0x00000200
#define _ADFLTR1CON_AFGIEN_LENGTH                0x00000001

#define _ADFLTR1CON_OVRSAM_POSITION              0x0000000A
#define _ADFLTR1CON_OVRSAM_MASK                  0x00001C00
#define _ADFLTR1CON_OVRSAM_LENGTH                0x00000003

#define _ADFLTR1CON_AFEN_POSITION                0x0000000F
#define _ADFLTR1CON_AFEN_MASK                    0x00008000
#define _ADFLTR1CON_AFEN_LENGTH                  0x00000001

#define _ADFLTR1CON_CHNLID0_POSITION             0x00000000
#define _ADFLTR1CON_CHNLID0_MASK                 0x00000001
#define _ADFLTR1CON_CHNLID0_LENGTH               0x00000001

#define _ADFLTR1CON_CHNLID1_POSITION             0x00000001
#define _ADFLTR1CON_CHNLID1_MASK                 0x00000002
#define _ADFLTR1CON_CHNLID1_LENGTH               0x00000001

#define _ADFLTR1CON_CHNLID2_POSITION             0x00000002
#define _ADFLTR1CON_CHNLID2_MASK                 0x00000004
#define _ADFLTR1CON_CHNLID2_LENGTH               0x00000001

#define _ADFLTR1CON_CHNLID3_POSITION             0x00000003
#define _ADFLTR1CON_CHNLID3_MASK                 0x00000008
#define _ADFLTR1CON_CHNLID3_LENGTH               0x00000001

#define _ADFLTR1CON_CHNLID4_POSITION             0x00000004
#define _ADFLTR1CON_CHNLID4_MASK                 0x00000010
#define _ADFLTR1CON_CHNLID4_LENGTH               0x00000001

#define _ADFLTR1CON_CHNLID5_POSITION             0x00000005
#define _ADFLTR1CON_CHNLID5_MASK                 0x00000020
#define _ADFLTR1CON_CHNLID5_LENGTH               0x00000001

#define _ADFLTR1CON_OVRSAM0_POSITION             0x0000000A
#define _ADFLTR1CON_OVRSAM0_MASK                 0x00000400
#define _ADFLTR1CON_OVRSAM0_LENGTH               0x00000001

#define _ADFLTR1CON_OVRSAM1_POSITION             0x0000000B
#define _ADFLTR1CON_OVRSAM1_MASK                 0x00000800
#define _ADFLTR1CON_OVRSAM1_LENGTH               0x00000001

#define _ADFLTR1CON_OVRSAM2_POSITION             0x0000000C
#define _ADFLTR1CON_OVRSAM2_MASK                 0x00001000
#define _ADFLTR1CON_OVRSAM2_LENGTH               0x00000001

#define _ADFLTR2CON_CHNLID_POSITION              0x00000000
#define _ADFLTR2CON_CHNLID_MASK                  0x0000003F
#define _ADFLTR2CON_CHNLID_LENGTH                0x00000006

#define _ADFLTR2CON_AFRDY_POSITION               0x00000008
#define _ADFLTR2CON_AFRDY_MASK                   0x00000100
#define _ADFLTR2CON_AFRDY_LENGTH                 0x00000001

#define _ADFLTR2CON_AFGIEN_POSITION              0x00000009
#define _ADFLTR2CON_AFGIEN_MASK                  0x00000200
#define _ADFLTR2CON_AFGIEN_LENGTH                0x00000001

#define _ADFLTR2CON_OVRSAM_POSITION              0x0000000A
#define _ADFLTR2CON_OVRSAM_MASK                  0x00001C00
#define _ADFLTR2CON_OVRSAM_LENGTH                0x00000003

#define _ADFLTR2CON_AFEN_POSITION                0x0000000F
#define _ADFLTR2CON_AFEN_MASK                    0x00008000
#define _ADFLTR2CON_AFEN_LENGTH                  0x00000001

#define _ADFLTR2CON_CHNLID0_POSITION             0x00000000
#define _ADFLTR2CON_CHNLID0_MASK                 0x00000001
#define _ADFLTR2CON_CHNLID0_LENGTH               0x00000001

#define _ADFLTR2CON_CHNLID1_POSITION             0x00000001
#define _ADFLTR2CON_CHNLID1_MASK                 0x00000002
#define _ADFLTR2CON_CHNLID1_LENGTH               0x00000001

#define _ADFLTR2CON_CHNLID2_POSITION             0x00000002
#define _ADFLTR2CON_CHNLID2_MASK                 0x00000004
#define _ADFLTR2CON_CHNLID2_LENGTH               0x00000001

#define _ADFLTR2CON_CHNLID3_POSITION             0x00000003
#define _ADFLTR2CON_CHNLID3_MASK                 0x00000008
#define _ADFLTR2CON_CHNLID3_LENGTH               0x00000001

#define _ADFLTR2CON_CHNLID4_POSITION             0x00000004
#define _ADFLTR2CON_CHNLID4_MASK                 0x00000010
#define _ADFLTR2CON_CHNLID4_LENGTH               0x00000001

#define _ADFLTR2CON_CHNLID5_POSITION             0x00000005
#define _ADFLTR2CON_CHNLID5_MASK                 0x00000020
#define _ADFLTR2CON_CHNLID5_LENGTH               0x00000001

#define _ADFLTR2CON_OVRSAM0_POSITION             0x0000000A
#define _ADFLTR2CON_OVRSAM0_MASK                 0x00000400
#define _ADFLTR2CON_OVRSAM0_LENGTH               0x00000001

#define _ADFLTR2CON_OVRSAM1_POSITION             0x0000000B
#define _ADFLTR2CON_OVRSAM1_MASK                 0x00000800
#define _ADFLTR2CON_OVRSAM1_LENGTH               0x00000001

#define _ADFLTR2CON_OVRSAM2_POSITION             0x0000000C
#define _ADFLTR2CON_OVRSAM2_MASK                 0x00001000
#define _ADFLTR2CON_OVRSAM2_LENGTH               0x00000001

#define _ADTRIG1_TRGSRC0_POSITION                0x00000000
#define _ADTRIG1_TRGSRC0_MASK                    0x0000001F
#define _ADTRIG1_TRGSRC0_LENGTH                  0x00000005

#define _ADTRIG1_TRGSRC1_POSITION                0x00000008
#define _ADTRIG1_TRGSRC1_MASK                    0x00001F00
#define _ADTRIG1_TRGSRC1_LENGTH                  0x00000005

#define _ADTRIG1_TRGSRC00_POSITION               0x00000000
#define _ADTRIG1_TRGSRC00_MASK                   0x00000001
#define _ADTRIG1_TRGSRC00_LENGTH                 0x00000001

#define _ADTRIG1_TRGSRC01_POSITION               0x00000001
#define _ADTRIG1_TRGSRC01_MASK                   0x00000002
#define _ADTRIG1_TRGSRC01_LENGTH                 0x00000001

#define _ADTRIG1_TRGSRC02_POSITION               0x00000002
#define _ADTRIG1_TRGSRC02_MASK                   0x00000004
#define _ADTRIG1_TRGSRC02_LENGTH                 0x00000001

#define _ADTRIG1_TRGSRC03_POSITION               0x00000003
#define _ADTRIG1_TRGSRC03_MASK                   0x00000008
#define _ADTRIG1_TRGSRC03_LENGTH                 0x00000001

#define _ADTRIG1_TRGSRC04_POSITION               0x00000004
#define _ADTRIG1_TRGSRC04_MASK                   0x00000010
#define _ADTRIG1_TRGSRC04_LENGTH                 0x00000001

#define _ADTRIG1_TRGSRC10_POSITION               0x00000008
#define _ADTRIG1_TRGSRC10_MASK                   0x00000100
#define _ADTRIG1_TRGSRC10_LENGTH                 0x00000001

#define _ADTRIG1_TRGSRC11_POSITION               0x00000009
#define _ADTRIG1_TRGSRC11_MASK                   0x00000200
#define _ADTRIG1_TRGSRC11_LENGTH                 0x00000001

#define _ADTRIG1_TRGSRC12_POSITION               0x0000000A
#define _ADTRIG1_TRGSRC12_MASK                   0x00000400
#define _ADTRIG1_TRGSRC12_LENGTH                 0x00000001

#define _ADTRIG1_TRGSRC13_POSITION               0x0000000B
#define _ADTRIG1_TRGSRC13_MASK                   0x00000800
#define _ADTRIG1_TRGSRC13_LENGTH                 0x00000001

#define _ADTRIG1_TRGSRC14_POSITION               0x0000000C
#define _ADTRIG1_TRGSRC14_MASK                   0x00001000
#define _ADTRIG1_TRGSRC14_LENGTH                 0x00000001

#define _ADTRIG2_TRGSRC2_POSITION                0x00000000
#define _ADTRIG2_TRGSRC2_MASK                    0x0000001F
#define _ADTRIG2_TRGSRC2_LENGTH                  0x00000005

#define _ADTRIG2_TRGSRC3_POSITION                0x00000008
#define _ADTRIG2_TRGSRC3_MASK                    0x00001F00
#define _ADTRIG2_TRGSRC3_LENGTH                  0x00000005

#define _ADTRIG2_TRGSRC20_POSITION               0x00000000
#define _ADTRIG2_TRGSRC20_MASK                   0x00000001
#define _ADTRIG2_TRGSRC20_LENGTH                 0x00000001

#define _ADTRIG2_TRGSRC21_POSITION               0x00000001
#define _ADTRIG2_TRGSRC21_MASK                   0x00000002
#define _ADTRIG2_TRGSRC21_LENGTH                 0x00000001

#define _ADTRIG2_TRGSRC22_POSITION               0x00000002
#define _ADTRIG2_TRGSRC22_MASK                   0x00000004
#define _ADTRIG2_TRGSRC22_LENGTH                 0x00000001

#define _ADTRIG2_TRGSRC23_POSITION               0x00000003
#define _ADTRIG2_TRGSRC23_MASK                   0x00000008
#define _ADTRIG2_TRGSRC23_LENGTH                 0x00000001

#define _ADTRIG2_TRGSRC24_POSITION               0x00000004
#define _ADTRIG2_TRGSRC24_MASK                   0x00000010
#define _ADTRIG2_TRGSRC24_LENGTH                 0x00000001

#define _ADTRIG2_TRGSRC30_POSITION               0x00000008
#define _ADTRIG2_TRGSRC30_MASK                   0x00000100
#define _ADTRIG2_TRGSRC30_LENGTH                 0x00000001

#define _ADTRIG2_TRGSRC31_POSITION               0x00000009
#define _ADTRIG2_TRGSRC31_MASK                   0x00000200
#define _ADTRIG2_TRGSRC31_LENGTH                 0x00000001

#define _ADTRIG2_TRGSRC32_POSITION               0x0000000A
#define _ADTRIG2_TRGSRC32_MASK                   0x00000400
#define _ADTRIG2_TRGSRC32_LENGTH                 0x00000001

#define _ADTRIG2_TRGSRC33_POSITION               0x0000000B
#define _ADTRIG2_TRGSRC33_MASK                   0x00000800
#define _ADTRIG2_TRGSRC33_LENGTH                 0x00000001

#define _ADTRIG2_TRGSRC34_POSITION               0x0000000C
#define _ADTRIG2_TRGSRC34_MASK                   0x00001000
#define _ADTRIG2_TRGSRC34_LENGTH                 0x00000001

#define _ADTRIG3_TRGSRC4_POSITION                0x00000000
#define _ADTRIG3_TRGSRC4_MASK                    0x0000001F
#define _ADTRIG3_TRGSRC4_LENGTH                  0x00000005

#define _ADTRIG3_TRGSRC5_POSITION                0x00000008
#define _ADTRIG3_TRGSRC5_MASK                    0x00001F00
#define _ADTRIG3_TRGSRC5_LENGTH                  0x00000005

#define _ADTRIG3_TRGSRC40_POSITION               0x00000000
#define _ADTRIG3_TRGSRC40_MASK                   0x00000001
#define _ADTRIG3_TRGSRC40_LENGTH                 0x00000001

#define _ADTRIG3_TRGSRC41_POSITION               0x00000001
#define _ADTRIG3_TRGSRC41_MASK                   0x00000002
#define _ADTRIG3_TRGSRC41_LENGTH                 0x00000001

#define _ADTRIG3_TRGSRC42_POSITION               0x00000002
#define _ADTRIG3_TRGSRC42_MASK                   0x00000004
#define _ADTRIG3_TRGSRC42_LENGTH                 0x00000001

#define _ADTRIG3_TRGSRC43_POSITION               0x00000003
#define _ADTRIG3_TRGSRC43_MASK                   0x00000008
#define _ADTRIG3_TRGSRC43_LENGTH                 0x00000001

#define _ADTRIG3_TRGSRC44_POSITION               0x00000004
#define _ADTRIG3_TRGSRC44_MASK                   0x00000010
#define _ADTRIG3_TRGSRC44_LENGTH                 0x00000001

#define _ADTRIG3_TRGSRC50_POSITION               0x00000008
#define _ADTRIG3_TRGSRC50_MASK                   0x00000100
#define _ADTRIG3_TRGSRC50_LENGTH                 0x00000001

#define _ADTRIG3_TRGSRC51_POSITION               0x00000009
#define _ADTRIG3_TRGSRC51_MASK                   0x00000200
#define _ADTRIG3_TRGSRC51_LENGTH                 0x00000001

#define _ADTRIG3_TRGSRC52_POSITION               0x0000000A
#define _ADTRIG3_TRGSRC52_MASK                   0x00000400
#define _ADTRIG3_TRGSRC52_LENGTH                 0x00000001

#define _ADTRIG3_TRGSRC53_POSITION               0x0000000B
#define _ADTRIG3_TRGSRC53_MASK                   0x00000800
#define _ADTRIG3_TRGSRC53_LENGTH                 0x00000001

#define _ADTRIG3_TRGSRC54_POSITION               0x0000000C
#define _ADTRIG3_TRGSRC54_MASK                   0x00001000
#define _ADTRIG3_TRGSRC54_LENGTH                 0x00000001

#define _ADTRIG4_TRGSRC6_POSITION                0x00000000
#define _ADTRIG4_TRGSRC6_MASK                    0x0000001F
#define _ADTRIG4_TRGSRC6_LENGTH                  0x00000005

#define _ADTRIG4_TRGSRC7_POSITION                0x00000008
#define _ADTRIG4_TRGSRC7_MASK                    0x00001F00
#define _ADTRIG4_TRGSRC7_LENGTH                  0x00000005

#define _ADTRIG4_TRGSRC60_POSITION               0x00000000
#define _ADTRIG4_TRGSRC60_MASK                   0x00000001
#define _ADTRIG4_TRGSRC60_LENGTH                 0x00000001

#define _ADTRIG4_TRGSRC61_POSITION               0x00000001
#define _ADTRIG4_TRGSRC61_MASK                   0x00000002
#define _ADTRIG4_TRGSRC61_LENGTH                 0x00000001

#define _ADTRIG4_TRGSRC62_POSITION               0x00000002
#define _ADTRIG4_TRGSRC62_MASK                   0x00000004
#define _ADTRIG4_TRGSRC62_LENGTH                 0x00000001

#define _ADTRIG4_TRGSRC63_POSITION               0x00000003
#define _ADTRIG4_TRGSRC63_MASK                   0x00000008
#define _ADTRIG4_TRGSRC63_LENGTH                 0x00000001

#define _ADTRIG4_TRGSRC64_POSITION               0x00000004
#define _ADTRIG4_TRGSRC64_MASK                   0x00000010
#define _ADTRIG4_TRGSRC64_LENGTH                 0x00000001

#define _ADTRIG4_TRGSRC70_POSITION               0x00000008
#define _ADTRIG4_TRGSRC70_MASK                   0x00000100
#define _ADTRIG4_TRGSRC70_LENGTH                 0x00000001

#define _ADTRIG4_TRGSRC71_POSITION               0x00000009
#define _ADTRIG4_TRGSRC71_MASK                   0x00000200
#define _ADTRIG4_TRGSRC71_LENGTH                 0x00000001

#define _ADTRIG4_TRGSRC72_POSITION               0x0000000A
#define _ADTRIG4_TRGSRC72_MASK                   0x00000400
#define _ADTRIG4_TRGSRC72_LENGTH                 0x00000001

#define _ADTRIG4_TRGSRC73_POSITION               0x0000000B
#define _ADTRIG4_TRGSRC73_MASK                   0x00000800
#define _ADTRIG4_TRGSRC73_LENGTH                 0x00000001

#define _ADTRIG4_TRGSRC74_POSITION               0x0000000C
#define _ADTRIG4_TRGSRC74_MASK                   0x00001000
#define _ADTRIG4_TRGSRC74_LENGTH                 0x00000001

#define _ADTRIG5_TRGSRC8_POSITION                0x00000000
#define _ADTRIG5_TRGSRC8_MASK                    0x0000001F
#define _ADTRIG5_TRGSRC8_LENGTH                  0x00000005

#define _ADTRIG5_TRGSRC9_POSITION                0x00000008
#define _ADTRIG5_TRGSRC9_MASK                    0x00001F00
#define _ADTRIG5_TRGSRC9_LENGTH                  0x00000005

#define _ADTRIG5_TRGSRC80_POSITION               0x00000000
#define _ADTRIG5_TRGSRC80_MASK                   0x00000001
#define _ADTRIG5_TRGSRC80_LENGTH                 0x00000001

#define _ADTRIG5_TRGSRC81_POSITION               0x00000001
#define _ADTRIG5_TRGSRC81_MASK                   0x00000002
#define _ADTRIG5_TRGSRC81_LENGTH                 0x00000001

#define _ADTRIG5_TRGSRC82_POSITION               0x00000002
#define _ADTRIG5_TRGSRC82_MASK                   0x00000004
#define _ADTRIG5_TRGSRC82_LENGTH                 0x00000001

#define _ADTRIG5_TRGSRC83_POSITION               0x00000003
#define _ADTRIG5_TRGSRC83_MASK                   0x00000008
#define _ADTRIG5_TRGSRC83_LENGTH                 0x00000001

#define _ADTRIG5_TRGSRC84_POSITION               0x00000004
#define _ADTRIG5_TRGSRC84_MASK                   0x00000010
#define _ADTRIG5_TRGSRC84_LENGTH                 0x00000001

#define _ADTRIG5_TRGSRC90_POSITION               0x00000008
#define _ADTRIG5_TRGSRC90_MASK                   0x00000100
#define _ADTRIG5_TRGSRC90_LENGTH                 0x00000001

#define _ADTRIG5_TRGSRC91_POSITION               0x00000009
#define _ADTRIG5_TRGSRC91_MASK                   0x00000200
#define _ADTRIG5_TRGSRC91_LENGTH                 0x00000001

#define _ADTRIG5_TRGSRC92_POSITION               0x0000000A
#define _ADTRIG5_TRGSRC92_MASK                   0x00000400
#define _ADTRIG5_TRGSRC92_LENGTH                 0x00000001

#define _ADTRIG5_TRIGSRC93_POSITION              0x0000000B
#define _ADTRIG5_TRIGSRC93_MASK                  0x00000800
#define _ADTRIG5_TRIGSRC93_LENGTH                0x00000001

#define _ADTRIG5_TRGSRC94_POSITION               0x0000000C
#define _ADTRIG5_TRGSRC94_MASK                   0x00001000
#define _ADTRIG5_TRGSRC94_LENGTH                 0x00000001

#define _ADTRIG6_TRGSRC10_POSITION               0x00000000
#define _ADTRIG6_TRGSRC10_MASK                   0x0000001F
#define _ADTRIG6_TRGSRC10_LENGTH                 0x00000005

#define _ADTRIG6_TRGSRC11_POSITION               0x00000008
#define _ADTRIG6_TRGSRC11_MASK                   0x00001F00
#define _ADTRIG6_TRGSRC11_LENGTH                 0x00000005

#define _ADTRIG6_TRGSRC100_POSITION              0x00000000
#define _ADTRIG6_TRGSRC100_MASK                  0x00000001
#define _ADTRIG6_TRGSRC100_LENGTH                0x00000001

#define _ADTRIG6_TRGSRC101_POSITION              0x00000001
#define _ADTRIG6_TRGSRC101_MASK                  0x00000002
#define _ADTRIG6_TRGSRC101_LENGTH                0x00000001

#define _ADTRIG6_TRGSRC102_POSITION              0x00000002
#define _ADTRIG6_TRGSRC102_MASK                  0x00000004
#define _ADTRIG6_TRGSRC102_LENGTH                0x00000001

#define _ADTRIG6_TRGSRC103_POSITION              0x00000003
#define _ADTRIG6_TRGSRC103_MASK                  0x00000008
#define _ADTRIG6_TRGSRC103_LENGTH                0x00000001

#define _ADTRIG6_TRGSRC104_POSITION              0x00000004
#define _ADTRIG6_TRGSRC104_MASK                  0x00000010
#define _ADTRIG6_TRGSRC104_LENGTH                0x00000001

#define _ADTRIG6_TRGSRC110_POSITION              0x00000008
#define _ADTRIG6_TRGSRC110_MASK                  0x00000100
#define _ADTRIG6_TRGSRC110_LENGTH                0x00000001

#define _ADTRIG6_TRGSRC111_POSITION              0x00000009
#define _ADTRIG6_TRGSRC111_MASK                  0x00000200
#define _ADTRIG6_TRGSRC111_LENGTH                0x00000001

#define _ADTRIG6_TRGSRC112_POSITION              0x0000000A
#define _ADTRIG6_TRGSRC112_MASK                  0x00000400
#define _ADTRIG6_TRGSRC112_LENGTH                0x00000001

#define _ADTRIG6_TRGSRC113_POSITION              0x0000000B
#define _ADTRIG6_TRGSRC113_MASK                  0x00000800
#define _ADTRIG6_TRGSRC113_LENGTH                0x00000001

#define _ADTRIG6_TRGSRC114_POSITION              0x0000000C
#define _ADTRIG6_TRGSRC114_MASK                  0x00001000
#define _ADTRIG6_TRGSRC114_LENGTH                0x00000001

#define _ADTRIG7_TRGSRC12_POSITION               0x00000000
#define _ADTRIG7_TRGSRC12_MASK                   0x0000001F
#define _ADTRIG7_TRGSRC12_LENGTH                 0x00000005

#define _ADTRIG7_TRGSRC120_POSITION              0x00000000
#define _ADTRIG7_TRGSRC120_MASK                  0x00000001
#define _ADTRIG7_TRGSRC120_LENGTH                0x00000001

#define _ADTRIG7_TRGSRC121_POSITION              0x00000001
#define _ADTRIG7_TRGSRC121_MASK                  0x00000002
#define _ADTRIG7_TRGSRC121_LENGTH                0x00000001

#define _ADTRIG7_TRGSRC122_POSITION              0x00000002
#define _ADTRIG7_TRGSRC122_MASK                  0x00000004
#define _ADTRIG7_TRGSRC122_LENGTH                0x00000001

#define _ADTRIG7_TRGSRC123_POSITION              0x00000003
#define _ADTRIG7_TRGSRC123_MASK                  0x00000008
#define _ADTRIG7_TRGSRC123_LENGTH                0x00000001

#define _ADTRIG7_TRGSRC124_POSITION              0x00000004
#define _ADTRIG7_TRGSRC124_MASK                  0x00000010
#define _ADTRIG7_TRGSRC124_LENGTH                0x00000001

#define _ADTRIG8_TRGSRC14_POSITION               0x00000000
#define _ADTRIG8_TRGSRC14_MASK                   0x0000001F
#define _ADTRIG8_TRGSRC14_LENGTH                 0x00000005

#define _ADTRIG8_TRGSRC140_POSITION              0x00000000
#define _ADTRIG8_TRGSRC140_MASK                  0x00000001
#define _ADTRIG8_TRGSRC140_LENGTH                0x00000001

#define _ADTRIG8_TRGSRC141_POSITION              0x00000001
#define _ADTRIG8_TRGSRC141_MASK                  0x00000002
#define _ADTRIG8_TRGSRC141_LENGTH                0x00000001

#define _ADTRIG8_TRGSRC142_POSITION              0x00000002
#define _ADTRIG8_TRGSRC142_MASK                  0x00000004
#define _ADTRIG8_TRGSRC142_LENGTH                0x00000001

#define _ADTRIG8_TRGSRC143_POSITION              0x00000003
#define _ADTRIG8_TRGSRC143_MASK                  0x00000008
#define _ADTRIG8_TRGSRC143_LENGTH                0x00000001

#define _ADTRIG8_TRGSRC144_POSITION              0x00000004
#define _ADTRIG8_TRGSRC144_MASK                  0x00000010
#define _ADTRIG8_TRGSRC144_LENGTH                0x00000001

#define _ADTRIG9_TRGSRC17_POSITION               0x00000008
#define _ADTRIG9_TRGSRC17_MASK                   0x00001F00
#define _ADTRIG9_TRGSRC17_LENGTH                 0x00000005

#define _ADTRIG9_TRGSRC170_POSITION              0x00000008
#define _ADTRIG9_TRGSRC170_MASK                  0x00000100
#define _ADTRIG9_TRGSRC170_LENGTH                0x00000001

#define _ADTRIG9_TRGSRC171_POSITION              0x00000009
#define _ADTRIG9_TRGSRC171_MASK                  0x00000200
#define _ADTRIG9_TRGSRC171_LENGTH                0x00000001

#define _ADTRIG9_TRGSRC172_POSITION              0x0000000A
#define _ADTRIG9_TRGSRC172_MASK                  0x00000400
#define _ADTRIG9_TRGSRC172_LENGTH                0x00000001

#define _ADTRIG9_TRGSRC173_POSITION              0x0000000B
#define _ADTRIG9_TRGSRC173_MASK                  0x00000800
#define _ADTRIG9_TRGSRC173_LENGTH                0x00000001

#define _ADTRIG9_TRGSRC174_POSITION              0x0000000C
#define _ADTRIG9_TRGSRC174_MASK                  0x00001000
#define _ADTRIG9_TRGSRC174_LENGTH                0x00000001

#define _ADTRIG10_TRGSRC18_POSITION              0x00000000
#define _ADTRIG10_TRGSRC18_MASK                  0x0000001F
#define _ADTRIG10_TRGSRC18_LENGTH                0x00000005

#define _ADTRIG10_TRGSRC19_POSITION              0x00000008
#define _ADTRIG10_TRGSRC19_MASK                  0x00001F00
#define _ADTRIG10_TRGSRC19_LENGTH                0x00000005

#define _ADTRIG10_TRGSRC180_POSITION             0x00000000
#define _ADTRIG10_TRGSRC180_MASK                 0x00000001
#define _ADTRIG10_TRGSRC180_LENGTH               0x00000001

#define _ADTRIG10_TRGSRC181_POSITION             0x00000001
#define _ADTRIG10_TRGSRC181_MASK                 0x00000002
#define _ADTRIG10_TRGSRC181_LENGTH               0x00000001

#define _ADTRIG10_TRGSRC182_POSITION             0x00000002
#define _ADTRIG10_TRGSRC182_MASK                 0x00000004
#define _ADTRIG10_TRGSRC182_LENGTH               0x00000001

#define _ADTRIG10_TRGSRC183_POSITION             0x00000003
#define _ADTRIG10_TRGSRC183_MASK                 0x00000008
#define _ADTRIG10_TRGSRC183_LENGTH               0x00000001

#define _ADTRIG10_TRGSRC184_POSITION             0x00000004
#define _ADTRIG10_TRGSRC184_MASK                 0x00000010
#define _ADTRIG10_TRGSRC184_LENGTH               0x00000001

#define _ADTRIG10_TRGSRC190_POSITION             0x00000008
#define _ADTRIG10_TRGSRC190_MASK                 0x00000100
#define _ADTRIG10_TRGSRC190_LENGTH               0x00000001

#define _ADTRIG10_TRGSRC191_POSITION             0x00000009
#define _ADTRIG10_TRGSRC191_MASK                 0x00000200
#define _ADTRIG10_TRGSRC191_LENGTH               0x00000001

#define _ADTRIG10_TRGSRC192_POSITION             0x0000000A
#define _ADTRIG10_TRGSRC192_MASK                 0x00000400
#define _ADTRIG10_TRGSRC192_LENGTH               0x00000001

#define _ADTRIG10_TRGSRC193_POSITION             0x0000000B
#define _ADTRIG10_TRGSRC193_MASK                 0x00000800
#define _ADTRIG10_TRGSRC193_LENGTH               0x00000001

#define _ADTRIG10_TRGSRC194_POSITION             0x0000000C
#define _ADTRIG10_TRGSRC194_MASK                 0x00001000
#define _ADTRIG10_TRGSRC194_LENGTH               0x00000001

#define _ADTRIG11_TRGSRC20_POSITION              0x00000000
#define _ADTRIG11_TRGSRC20_MASK                  0x0000001F
#define _ADTRIG11_TRGSRC20_LENGTH                0x00000005

#define _ADTRIG11_TRGSRC21_POSITION              0x00000008
#define _ADTRIG11_TRGSRC21_MASK                  0x00001F00
#define _ADTRIG11_TRGSRC21_LENGTH                0x00000005

#define _ADTRIG11_TRGSRC200_POSITION             0x00000000
#define _ADTRIG11_TRGSRC200_MASK                 0x00000001
#define _ADTRIG11_TRGSRC200_LENGTH               0x00000001

#define _ADTRIG11_TRGSRC201_POSITION             0x00000001
#define _ADTRIG11_TRGSRC201_MASK                 0x00000002
#define _ADTRIG11_TRGSRC201_LENGTH               0x00000001

#define _ADTRIG11_TRGSRC202_POSITION             0x00000002
#define _ADTRIG11_TRGSRC202_MASK                 0x00000004
#define _ADTRIG11_TRGSRC202_LENGTH               0x00000001

#define _ADTRIG11_TRGSRC203_POSITION             0x00000003
#define _ADTRIG11_TRGSRC203_MASK                 0x00000008
#define _ADTRIG11_TRGSRC203_LENGTH               0x00000001

#define _ADTRIG11_TRGSRC204_POSITION             0x00000004
#define _ADTRIG11_TRGSRC204_MASK                 0x00000010
#define _ADTRIG11_TRGSRC204_LENGTH               0x00000001

#define _ADTRIG11_TRGSRC210_POSITION             0x00000008
#define _ADTRIG11_TRGSRC210_MASK                 0x00000100
#define _ADTRIG11_TRGSRC210_LENGTH               0x00000001

#define _ADTRIG11_TRGSRC211_POSITION             0x00000009
#define _ADTRIG11_TRGSRC211_MASK                 0x00000200
#define _ADTRIG11_TRGSRC211_LENGTH               0x00000001

#define _ADTRIG11_TRGSRC212_POSITION             0x0000000A
#define _ADTRIG11_TRGSRC212_MASK                 0x00000400
#define _ADTRIG11_TRGSRC212_LENGTH               0x00000001

#define _ADTRIG11_TRGSRC213_POSITION             0x0000000B
#define _ADTRIG11_TRGSRC213_MASK                 0x00000800
#define _ADTRIG11_TRGSRC213_LENGTH               0x00000001

#define _ADTRIG11_TRGSRC214_POSITION             0x0000000C
#define _ADTRIG11_TRGSRC214_MASK                 0x00001000
#define _ADTRIG11_TRGSRC214_LENGTH               0x00000001

#define _ADTRIG12_TRGSRC22_POSITION              0x00000000
#define _ADTRIG12_TRGSRC22_MASK                  0x0000001F
#define _ADTRIG12_TRGSRC22_LENGTH                0x00000005

#define _ADTRIG12_TRGSRC23_POSITION              0x00000008
#define _ADTRIG12_TRGSRC23_MASK                  0x00001F00
#define _ADTRIG12_TRGSRC23_LENGTH                0x00000005

#define _ADTRIG12_TRGSRC220_POSITION             0x00000000
#define _ADTRIG12_TRGSRC220_MASK                 0x00000001
#define _ADTRIG12_TRGSRC220_LENGTH               0x00000001

#define _ADTRIG12_TRGSRC221_POSITION             0x00000001
#define _ADTRIG12_TRGSRC221_MASK                 0x00000002
#define _ADTRIG12_TRGSRC221_LENGTH               0x00000001

#define _ADTRIG12_TRGSRC222_POSITION             0x00000002
#define _ADTRIG12_TRGSRC222_MASK                 0x00000004
#define _ADTRIG12_TRGSRC222_LENGTH               0x00000001

#define _ADTRIG12_TRGSRC223_POSITION             0x00000003
#define _ADTRIG12_TRGSRC223_MASK                 0x00000008
#define _ADTRIG12_TRGSRC223_LENGTH               0x00000001

#define _ADTRIG12_TRGSRC224_POSITION             0x00000004
#define _ADTRIG12_TRGSRC224_MASK                 0x00000010
#define _ADTRIG12_TRGSRC224_LENGTH               0x00000001

#define _ADTRIG12_TRGSRC230_POSITION             0x00000008
#define _ADTRIG12_TRGSRC230_MASK                 0x00000100
#define _ADTRIG12_TRGSRC230_LENGTH               0x00000001

#define _ADTRIG12_TRGSRC231_POSITION             0x00000009
#define _ADTRIG12_TRGSRC231_MASK                 0x00000200
#define _ADTRIG12_TRGSRC231_LENGTH               0x00000001

#define _ADTRIG12_TRGSRC232_POSITION             0x0000000A
#define _ADTRIG12_TRGSRC232_MASK                 0x00000400
#define _ADTRIG12_TRGSRC232_LENGTH               0x00000001

#define _ADTRIG12_TRGSRC233_POSITION             0x0000000B
#define _ADTRIG12_TRGSRC233_MASK                 0x00000800
#define _ADTRIG12_TRGSRC233_LENGTH               0x00000001

#define _ADTRIG12_TRGSRC234_POSITION             0x0000000C
#define _ADTRIG12_TRGSRC234_MASK                 0x00001000
#define _ADTRIG12_TRGSRC234_LENGTH               0x00000001

#define _ADTRIG13_TRGSRC24_POSITION              0x00000000
#define _ADTRIG13_TRGSRC24_MASK                  0x0000001F
#define _ADTRIG13_TRGSRC24_LENGTH                0x00000005

#define _ADTRIG13_TRGSRC25_POSITION              0x00000008
#define _ADTRIG13_TRGSRC25_MASK                  0x00001F00
#define _ADTRIG13_TRGSRC25_LENGTH                0x00000005

#define _ADTRIG13_TRGSRC240_POSITION             0x00000000
#define _ADTRIG13_TRGSRC240_MASK                 0x00000001
#define _ADTRIG13_TRGSRC240_LENGTH               0x00000001

#define _ADTRIG13_TRGSRC241_POSITION             0x00000001
#define _ADTRIG13_TRGSRC241_MASK                 0x00000002
#define _ADTRIG13_TRGSRC241_LENGTH               0x00000001

#define _ADTRIG13_TRGSRC242_POSITION             0x00000002
#define _ADTRIG13_TRGSRC242_MASK                 0x00000004
#define _ADTRIG13_TRGSRC242_LENGTH               0x00000001

#define _ADTRIG13_TRGSRC243_POSITION             0x00000003
#define _ADTRIG13_TRGSRC243_MASK                 0x00000008
#define _ADTRIG13_TRGSRC243_LENGTH               0x00000001

#define _ADTRIG13_TRGSRC244_POSITION             0x00000004
#define _ADTRIG13_TRGSRC244_MASK                 0x00000010
#define _ADTRIG13_TRGSRC244_LENGTH               0x00000001

#define _ADTRIG13_TRGSRC250_POSITION             0x00000008
#define _ADTRIG13_TRGSRC250_MASK                 0x00000100
#define _ADTRIG13_TRGSRC250_LENGTH               0x00000001

#define _ADTRIG13_TRGSRC251_POSITION             0x00000009
#define _ADTRIG13_TRGSRC251_MASK                 0x00000200
#define _ADTRIG13_TRGSRC251_LENGTH               0x00000001

#define _ADTRIG13_TRGSRC252_POSITION             0x0000000A
#define _ADTRIG13_TRGSRC252_MASK                 0x00000400
#define _ADTRIG13_TRGSRC252_LENGTH               0x00000001

#define _ADTRIG13_TRGSRC253_POSITION             0x0000000B
#define _ADTRIG13_TRGSRC253_MASK                 0x00000800
#define _ADTRIG13_TRGSRC253_LENGTH               0x00000001

#define _ADTRIG13_TRGSRC254_POSITION             0x0000000C
#define _ADTRIG13_TRGSRC254_MASK                 0x00001000
#define _ADTRIG13_TRGSRC254_LENGTH               0x00000001

#define _ADTRIG14_TRGSRC26_POSITION              0x00000000
#define _ADTRIG14_TRGSRC26_MASK                  0x0000001F
#define _ADTRIG14_TRGSRC26_LENGTH                0x00000005

#define _ADTRIG14_TRGSRC260_POSITION             0x00000000
#define _ADTRIG14_TRGSRC260_MASK                 0x00000001
#define _ADTRIG14_TRGSRC260_LENGTH               0x00000001

#define _ADTRIG14_TRGSRC261_POSITION             0x00000001
#define _ADTRIG14_TRGSRC261_MASK                 0x00000002
#define _ADTRIG14_TRGSRC261_LENGTH               0x00000001

#define _ADTRIG14_TRGSRC262_POSITION             0x00000002
#define _ADTRIG14_TRGSRC262_MASK                 0x00000004
#define _ADTRIG14_TRGSRC262_LENGTH               0x00000001

#define _ADTRIG14_TRGSRC263_POSITION             0x00000003
#define _ADTRIG14_TRGSRC263_MASK                 0x00000008
#define _ADTRIG14_TRGSRC263_LENGTH               0x00000001

#define _ADTRIG14_TRGSRC264_POSITION             0x00000004
#define _ADTRIG14_TRGSRC264_MASK                 0x00000010
#define _ADTRIG14_TRGSRC264_LENGTH               0x00000001

#define _DCMP1CON_IELOLO_POSITION                0x00000000
#define _DCMP1CON_IELOLO_MASK                    0x00000001
#define _DCMP1CON_IELOLO_LENGTH                  0x00000001

#define _DCMP1CON_IELOHI_POSITION                0x00000001
#define _DCMP1CON_IELOHI_MASK                    0x00000002
#define _DCMP1CON_IELOHI_LENGTH                  0x00000001

#define _DCMP1CON_IEHILO_POSITION                0x00000002
#define _DCMP1CON_IEHILO_MASK                    0x00000004
#define _DCMP1CON_IEHILO_LENGTH                  0x00000001

#define _DCMP1CON_IEHIHI_POSITION                0x00000003
#define _DCMP1CON_IEHIHI_MASK                    0x00000008
#define _DCMP1CON_IEHIHI_LENGTH                  0x00000001

#define _DCMP1CON_IEBTWN_POSITION                0x00000004
#define _DCMP1CON_IEBTWN_MASK                    0x00000010
#define _DCMP1CON_IEBTWN_LENGTH                  0x00000001

#define _DCMP1CON_DCMPED_POSITION                0x00000005
#define _DCMP1CON_DCMPED_MASK                    0x00000020
#define _DCMP1CON_DCMPED_LENGTH                  0x00000001

#define _DCMP1CON_DCMPGIEN_POSITION              0x00000006
#define _DCMP1CON_DCMPGIEN_MASK                  0x00000040
#define _DCMP1CON_DCMPGIEN_LENGTH                0x00000001

#define _DCMP1CON_DCMPEN_POSITION                0x00000007
#define _DCMP1CON_DCMPEN_MASK                    0x00000080
#define _DCMP1CON_DCMPEN_LENGTH                  0x00000001

#define _DCMP1CON_AINID_POSITION                 0x00000008
#define _DCMP1CON_AINID_MASK                     0x00001F00
#define _DCMP1CON_AINID_LENGTH                   0x00000005

#define _DCMP1CON_AINID0_POSITION                0x00000008
#define _DCMP1CON_AINID0_MASK                    0x00000100
#define _DCMP1CON_AINID0_LENGTH                  0x00000001

#define _DCMP1CON_AINID1_POSITION                0x00000009
#define _DCMP1CON_AINID1_MASK                    0x00000200
#define _DCMP1CON_AINID1_LENGTH                  0x00000001

#define _DCMP1CON_AINID2_POSITION                0x0000000A
#define _DCMP1CON_AINID2_MASK                    0x00000400
#define _DCMP1CON_AINID2_LENGTH                  0x00000001

#define _DCMP1CON_AINID3_POSITION                0x0000000B
#define _DCMP1CON_AINID3_MASK                    0x00000800
#define _DCMP1CON_AINID3_LENGTH                  0x00000001

#define _DCMP1CON_AINID4_POSITION                0x0000000C
#define _DCMP1CON_AINID4_MASK                    0x00001000
#define _DCMP1CON_AINID4_LENGTH                  0x00000001

#define _DCMP2CON_IELOLO_POSITION                0x00000000
#define _DCMP2CON_IELOLO_MASK                    0x00000001
#define _DCMP2CON_IELOLO_LENGTH                  0x00000001

#define _DCMP2CON_IELOHI_POSITION                0x00000001
#define _DCMP2CON_IELOHI_MASK                    0x00000002
#define _DCMP2CON_IELOHI_LENGTH                  0x00000001

#define _DCMP2CON_IEHILO_POSITION                0x00000002
#define _DCMP2CON_IEHILO_MASK                    0x00000004
#define _DCMP2CON_IEHILO_LENGTH                  0x00000001

#define _DCMP2CON_IEHIHI_POSITION                0x00000003
#define _DCMP2CON_IEHIHI_MASK                    0x00000008
#define _DCMP2CON_IEHIHI_LENGTH                  0x00000001

#define _DCMP2CON_IEBTWN_POSITION                0x00000004
#define _DCMP2CON_IEBTWN_MASK                    0x00000010
#define _DCMP2CON_IEBTWN_LENGTH                  0x00000001

#define _DCMP2CON_DCMPED_POSITION                0x00000005
#define _DCMP2CON_DCMPED_MASK                    0x00000020
#define _DCMP2CON_DCMPED_LENGTH                  0x00000001

#define _DCMP2CON_DCMPGIEN_POSITION              0x00000006
#define _DCMP2CON_DCMPGIEN_MASK                  0x00000040
#define _DCMP2CON_DCMPGIEN_LENGTH                0x00000001

#define _DCMP2CON_DCMPEN_POSITION                0x00000007
#define _DCMP2CON_DCMPEN_MASK                    0x00000080
#define _DCMP2CON_DCMPEN_LENGTH                  0x00000001

#define _DCMP2CON_AINID_POSITION                 0x00000008
#define _DCMP2CON_AINID_MASK                     0x00001F00
#define _DCMP2CON_AINID_LENGTH                   0x00000005

#define _DCMP2CON_AINID0_POSITION                0x00000008
#define _DCMP2CON_AINID0_MASK                    0x00000100
#define _DCMP2CON_AINID0_LENGTH                  0x00000001

#define _DCMP2CON_AINID1_POSITION                0x00000009
#define _DCMP2CON_AINID1_MASK                    0x00000200
#define _DCMP2CON_AINID1_LENGTH                  0x00000001

#define _DCMP2CON_AINID2_POSITION                0x0000000A
#define _DCMP2CON_AINID2_MASK                    0x00000400
#define _DCMP2CON_AINID2_LENGTH                  0x00000001

#define _DCMP2CON_AINID3_POSITION                0x0000000B
#define _DCMP2CON_AINID3_MASK                    0x00000800
#define _DCMP2CON_AINID3_LENGTH                  0x00000001

#define _DCMP2CON_AINID4_POSITION                0x0000000C
#define _DCMP2CON_AINID4_MASK                    0x00001000
#define _DCMP2CON_AINID4_LENGTH                  0x00000001

#define _ISRCCON_ISRCCAL_POSITION                0x00000000
#define _ISRCCON_ISRCCAL_MASK                    0x0000003F
#define _ISRCCON_ISRCCAL_LENGTH                  0x00000006

#define _ISRCCON_OUTSEL_POSITION                 0x00000008
#define _ISRCCON_OUTSEL_MASK                     0x00000700
#define _ISRCCON_OUTSEL_LENGTH                   0x00000003

#define _ISRCCON_ISRCEN_POSITION                 0x0000000F
#define _ISRCCON_ISRCEN_MASK                     0x00008000
#define _ISRCCON_ISRCEN_LENGTH                   0x00000001

#define _ISRCCON_ISRCCAL0_POSITION               0x00000000
#define _ISRCCON_ISRCCAL0_MASK                   0x00000001
#define _ISRCCON_ISRCCAL0_LENGTH                 0x00000001

#define _ISRCCON_ISRCCAL1_POSITION               0x00000001
#define _ISRCCON_ISRCCAL1_MASK                   0x00000002
#define _ISRCCON_ISRCCAL1_LENGTH                 0x00000001

#define _ISRCCON_ISRCCAL2_POSITION               0x00000002
#define _ISRCCON_ISRCCAL2_MASK                   0x00000004
#define _ISRCCON_ISRCCAL2_LENGTH                 0x00000001

#define _ISRCCON_ISRCCAL3_POSITION               0x00000003
#define _ISRCCON_ISRCCAL3_MASK                   0x00000008
#define _ISRCCON_ISRCCAL3_LENGTH                 0x00000001

#define _ISRCCON_ISRCCAL4_POSITION               0x00000004
#define _ISRCCON_ISRCCAL4_MASK                   0x00000010
#define _ISRCCON_ISRCCAL4_LENGTH                 0x00000001

#define _ISRCCON_ISRCCAL5_POSITION               0x00000005
#define _ISRCCON_ISRCCAL5_MASK                   0x00000020
#define _ISRCCON_ISRCCAL5_LENGTH                 0x00000001

#define _ISRCCON_OUTSEL0_POSITION                0x00000008
#define _ISRCCON_OUTSEL0_MASK                    0x00000100
#define _ISRCCON_OUTSEL0_LENGTH                  0x00000001

#define _ISRCCON_OUTSEL1_POSITION                0x00000009
#define _ISRCCON_OUTSEL1_MASK                    0x00000200
#define _ISRCCON_OUTSEL1_LENGTH                  0x00000001

#define _ISRCCON_OUTSEL2_POSITION                0x0000000A
#define _ISRCCON_OUTSEL2_MASK                    0x00000400
#define _ISRCCON_OUTSEL2_LENGTH                  0x00000001

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

#define _CMP1CON_RANGE_POSITION                  0x00000000
#define _CMP1CON_RANGE_MASK                      0x00000001
#define _CMP1CON_RANGE_LENGTH                    0x00000001

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

#define _CMP1CON_EXTREF_POSITION                 0x00000005
#define _CMP1CON_EXTREF_MASK                     0x00000020
#define _CMP1CON_EXTREF_LENGTH                   0x00000001

#define _CMP1CON_INSEL_POSITION                  0x00000006
#define _CMP1CON_INSEL_MASK                      0x000000C0
#define _CMP1CON_INSEL_LENGTH                    0x00000002

#define _CMP1CON_DACOE_POSITION                  0x00000008
#define _CMP1CON_DACOE_MASK                      0x00000100
#define _CMP1CON_DACOE_LENGTH                    0x00000001

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

#define _CMP2CON_RANGE_POSITION                  0x00000000
#define _CMP2CON_RANGE_MASK                      0x00000001
#define _CMP2CON_RANGE_LENGTH                    0x00000001

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

#define _CMP2CON_EXTREF_POSITION                 0x00000005
#define _CMP2CON_EXTREF_MASK                     0x00000020
#define _CMP2CON_EXTREF_LENGTH                   0x00000001

#define _CMP2CON_INSEL_POSITION                  0x00000006
#define _CMP2CON_INSEL_MASK                      0x000000C0
#define _CMP2CON_INSEL_LENGTH                    0x00000002

#define _CMP2CON_DACOE_POSITION                  0x00000008
#define _CMP2CON_DACOE_MASK                      0x00000100
#define _CMP2CON_DACOE_LENGTH                    0x00000001

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

#define _CMP3CON_RANGE_POSITION                  0x00000000
#define _CMP3CON_RANGE_MASK                      0x00000001
#define _CMP3CON_RANGE_LENGTH                    0x00000001

#define _CMP3CON_CMPPOL_POSITION                 0x00000001
#define _CMP3CON_CMPPOL_MASK                     0x00000002
#define _CMP3CON_CMPPOL_LENGTH                   0x00000001

#define _CMP3CON_ALTINP_POSITION                 0x00000002
#define _CMP3CON_ALTINP_MASK                     0x00000004
#define _CMP3CON_ALTINP_LENGTH                   0x00000001

#define _CMP3CON_CMPSTAT_POSITION                0x00000003
#define _CMP3CON_CMPSTAT_MASK                    0x00000008
#define _CMP3CON_CMPSTAT_LENGTH                  0x00000001

#define _CMP3CON_HYSPOL_POSITION                 0x00000004
#define _CMP3CON_HYSPOL_MASK                     0x00000010
#define _CMP3CON_HYSPOL_LENGTH                   0x00000001

#define _CMP3CON_EXTREF_POSITION                 0x00000005
#define _CMP3CON_EXTREF_MASK                     0x00000020
#define _CMP3CON_EXTREF_LENGTH                   0x00000001

#define _CMP3CON_INSEL_POSITION                  0x00000006
#define _CMP3CON_INSEL_MASK                      0x000000C0
#define _CMP3CON_INSEL_LENGTH                    0x00000002

#define _CMP3CON_DACOE_POSITION                  0x00000008
#define _CMP3CON_DACOE_MASK                      0x00000100
#define _CMP3CON_DACOE_LENGTH                    0x00000001

#define _CMP3CON_FCLKSEL_POSITION                0x00000009
#define _CMP3CON_FCLKSEL_MASK                    0x00000200
#define _CMP3CON_FCLKSEL_LENGTH                  0x00000001

#define _CMP3CON_FLTREN_POSITION                 0x0000000A
#define _CMP3CON_FLTREN_MASK                     0x00000400
#define _CMP3CON_FLTREN_LENGTH                   0x00000001

#define _CMP3CON_HYSSEL_POSITION                 0x0000000B
#define _CMP3CON_HYSSEL_MASK                     0x00001800
#define _CMP3CON_HYSSEL_LENGTH                   0x00000002

#define _CMP3CON_CMPSIDL_POSITION                0x0000000D
#define _CMP3CON_CMPSIDL_MASK                    0x00002000
#define _CMP3CON_CMPSIDL_LENGTH                  0x00000001

#define _CMP3CON_CMPON_POSITION                  0x0000000F
#define _CMP3CON_CMPON_MASK                      0x00008000
#define _CMP3CON_CMPON_LENGTH                    0x00000001

#define _CMP3CON_INSEL0_POSITION                 0x00000006
#define _CMP3CON_INSEL0_MASK                     0x00000040
#define _CMP3CON_INSEL0_LENGTH                   0x00000001

#define _CMP3CON_INSEL1_POSITION                 0x00000007
#define _CMP3CON_INSEL1_MASK                     0x00000080
#define _CMP3CON_INSEL1_LENGTH                   0x00000001

#define _CMP3CON_HYSSEL0_POSITION                0x0000000B
#define _CMP3CON_HYSSEL0_MASK                    0x00000800
#define _CMP3CON_HYSSEL0_LENGTH                  0x00000001

#define _CMP3CON_HYSSEL1_POSITION                0x0000000C
#define _CMP3CON_HYSSEL1_MASK                    0x00001000
#define _CMP3CON_HYSSEL1_LENGTH                  0x00000001

#define _CMP3DAC_CMREF_POSITION                  0x00000000
#define _CMP3DAC_CMREF_MASK                      0x00000FFF
#define _CMP3DAC_CMREF_LENGTH                    0x0000000C

#define _CMP3DAC_CMREF0_POSITION                 0x00000000
#define _CMP3DAC_CMREF0_MASK                     0x00000001
#define _CMP3DAC_CMREF0_LENGTH                   0x00000001

#define _CMP3DAC_CMREF1_POSITION                 0x00000001
#define _CMP3DAC_CMREF1_MASK                     0x00000002
#define _CMP3DAC_CMREF1_LENGTH                   0x00000001

#define _CMP3DAC_CMREF2_POSITION                 0x00000002
#define _CMP3DAC_CMREF2_MASK                     0x00000004
#define _CMP3DAC_CMREF2_LENGTH                   0x00000001

#define _CMP3DAC_CMREF3_POSITION                 0x00000003
#define _CMP3DAC_CMREF3_MASK                     0x00000008
#define _CMP3DAC_CMREF3_LENGTH                   0x00000001

#define _CMP3DAC_CMREF4_POSITION                 0x00000004
#define _CMP3DAC_CMREF4_MASK                     0x00000010
#define _CMP3DAC_CMREF4_LENGTH                   0x00000001

#define _CMP3DAC_CMREF5_POSITION                 0x00000005
#define _CMP3DAC_CMREF5_MASK                     0x00000020
#define _CMP3DAC_CMREF5_LENGTH                   0x00000001

#define _CMP3DAC_CMREF6_POSITION                 0x00000006
#define _CMP3DAC_CMREF6_MASK                     0x00000040
#define _CMP3DAC_CMREF6_LENGTH                   0x00000001

#define _CMP3DAC_CMREF7_POSITION                 0x00000007
#define _CMP3DAC_CMREF7_MASK                     0x00000080
#define _CMP3DAC_CMREF7_LENGTH                   0x00000001

#define _CMP3DAC_CMREF8_POSITION                 0x00000008
#define _CMP3DAC_CMREF8_MASK                     0x00000100
#define _CMP3DAC_CMREF8_LENGTH                   0x00000001

#define _CMP3DAC_CMREF9_POSITION                 0x00000009
#define _CMP3DAC_CMREF9_MASK                     0x00000200
#define _CMP3DAC_CMREF9_LENGTH                   0x00000001

#define _CMP3DAC_CMREF10_POSITION                0x0000000A
#define _CMP3DAC_CMREF10_MASK                    0x00000400
#define _CMP3DAC_CMREF10_LENGTH                  0x00000001

#define _CMP3DAC_CMREF11_POSITION                0x0000000B
#define _CMP3DAC_CMREF11_MASK                    0x00000800
#define _CMP3DAC_CMREF11_LENGTH                  0x00000001

#define _CMP4CON_RANGE_POSITION                  0x00000000
#define _CMP4CON_RANGE_MASK                      0x00000001
#define _CMP4CON_RANGE_LENGTH                    0x00000001

#define _CMP4CON_CMPPOL_POSITION                 0x00000001
#define _CMP4CON_CMPPOL_MASK                     0x00000002
#define _CMP4CON_CMPPOL_LENGTH                   0x00000001

#define _CMP4CON_ALTINP_POSITION                 0x00000002
#define _CMP4CON_ALTINP_MASK                     0x00000004
#define _CMP4CON_ALTINP_LENGTH                   0x00000001

#define _CMP4CON_CMPSTAT_POSITION                0x00000003
#define _CMP4CON_CMPSTAT_MASK                    0x00000008
#define _CMP4CON_CMPSTAT_LENGTH                  0x00000001

#define _CMP4CON_HYSPOL_POSITION                 0x00000004
#define _CMP4CON_HYSPOL_MASK                     0x00000010
#define _CMP4CON_HYSPOL_LENGTH                   0x00000001

#define _CMP4CON_EXTREF_POSITION                 0x00000005
#define _CMP4CON_EXTREF_MASK                     0x00000020
#define _CMP4CON_EXTREF_LENGTH                   0x00000001

#define _CMP4CON_INSEL_POSITION                  0x00000006
#define _CMP4CON_INSEL_MASK                      0x000000C0
#define _CMP4CON_INSEL_LENGTH                    0x00000002

#define _CMP4CON_DACOE_POSITION                  0x00000008
#define _CMP4CON_DACOE_MASK                      0x00000100
#define _CMP4CON_DACOE_LENGTH                    0x00000001

#define _CMP4CON_FCLKSEL_POSITION                0x00000009
#define _CMP4CON_FCLKSEL_MASK                    0x00000200
#define _CMP4CON_FCLKSEL_LENGTH                  0x00000001

#define _CMP4CON_FLTREN_POSITION                 0x0000000A
#define _CMP4CON_FLTREN_MASK                     0x00000400
#define _CMP4CON_FLTREN_LENGTH                   0x00000001

#define _CMP4CON_HYSSEL_POSITION                 0x0000000B
#define _CMP4CON_HYSSEL_MASK                     0x00001800
#define _CMP4CON_HYSSEL_LENGTH                   0x00000002

#define _CMP4CON_CMPSIDL_POSITION                0x0000000D
#define _CMP4CON_CMPSIDL_MASK                    0x00002000
#define _CMP4CON_CMPSIDL_LENGTH                  0x00000001

#define _CMP4CON_CMPON_POSITION                  0x0000000F
#define _CMP4CON_CMPON_MASK                      0x00008000
#define _CMP4CON_CMPON_LENGTH                    0x00000001

#define _CMP4CON_INSEL0_POSITION                 0x00000006
#define _CMP4CON_INSEL0_MASK                     0x00000040
#define _CMP4CON_INSEL0_LENGTH                   0x00000001

#define _CMP4CON_INSEL1_POSITION                 0x00000007
#define _CMP4CON_INSEL1_MASK                     0x00000080
#define _CMP4CON_INSEL1_LENGTH                   0x00000001

#define _CMP4CON_HYSSEL0_POSITION                0x0000000B
#define _CMP4CON_HYSSEL0_MASK                    0x00000800
#define _CMP4CON_HYSSEL0_LENGTH                  0x00000001

#define _CMP4CON_HYSSEL1_POSITION                0x0000000C
#define _CMP4CON_HYSSEL1_MASK                    0x00001000
#define _CMP4CON_HYSSEL1_LENGTH                  0x00000001

#define _CMP4DAC_CMREF_POSITION                  0x00000000
#define _CMP4DAC_CMREF_MASK                      0x00000FFF
#define _CMP4DAC_CMREF_LENGTH                    0x0000000C

#define _CMP4DAC_CMREF0_POSITION                 0x00000000
#define _CMP4DAC_CMREF0_MASK                     0x00000001
#define _CMP4DAC_CMREF0_LENGTH                   0x00000001

#define _CMP4DAC_CMREF1_POSITION                 0x00000001
#define _CMP4DAC_CMREF1_MASK                     0x00000002
#define _CMP4DAC_CMREF1_LENGTH                   0x00000001

#define _CMP4DAC_CMREF2_POSITION                 0x00000002
#define _CMP4DAC_CMREF2_MASK                     0x00000004
#define _CMP4DAC_CMREF2_LENGTH                   0x00000001

#define _CMP4DAC_CMREF3_POSITION                 0x00000003
#define _CMP4DAC_CMREF3_MASK                     0x00000008
#define _CMP4DAC_CMREF3_LENGTH                   0x00000001

#define _CMP4DAC_CMREF4_POSITION                 0x00000004
#define _CMP4DAC_CMREF4_MASK                     0x00000010
#define _CMP4DAC_CMREF4_LENGTH                   0x00000001

#define _CMP4DAC_CMREF5_POSITION                 0x00000005
#define _CMP4DAC_CMREF5_MASK                     0x00000020
#define _CMP4DAC_CMREF5_LENGTH                   0x00000001

#define _CMP4DAC_CMREF6_POSITION                 0x00000006
#define _CMP4DAC_CMREF6_MASK                     0x00000040
#define _CMP4DAC_CMREF6_LENGTH                   0x00000001

#define _CMP4DAC_CMREF7_POSITION                 0x00000007
#define _CMP4DAC_CMREF7_MASK                     0x00000080
#define _CMP4DAC_CMREF7_LENGTH                   0x00000001

#define _CMP4DAC_CMREF8_POSITION                 0x00000008
#define _CMP4DAC_CMREF8_MASK                     0x00000100
#define _CMP4DAC_CMREF8_LENGTH                   0x00000001

#define _CMP4DAC_CMREF9_POSITION                 0x00000009
#define _CMP4DAC_CMREF9_MASK                     0x00000200
#define _CMP4DAC_CMREF9_LENGTH                   0x00000001

#define _CMP4DAC_CMREF10_POSITION                0x0000000A
#define _CMP4DAC_CMREF10_MASK                    0x00000400
#define _CMP4DAC_CMREF10_LENGTH                  0x00000001

#define _CMP4DAC_CMREF11_POSITION                0x0000000B
#define _CMP4DAC_CMREF11_MASK                    0x00000800
#define _CMP4DAC_CMREF11_LENGTH                  0x00000001

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

#define _RPOR8_RP48R_POSITION                    0x00000000
#define _RPOR8_RP48R_MASK                        0x0000003F
#define _RPOR8_RP48R_LENGTH                      0x00000006

#define _RPOR8_RP49R_POSITION                    0x00000008
#define _RPOR8_RP49R_MASK                        0x00003F00
#define _RPOR8_RP49R_LENGTH                      0x00000006

#define _RPOR8_RP48R0_POSITION                   0x00000000
#define _RPOR8_RP48R0_MASK                       0x00000001
#define _RPOR8_RP48R0_LENGTH                     0x00000001

#define _RPOR8_RP48R1_POSITION                   0x00000001
#define _RPOR8_RP48R1_MASK                       0x00000002
#define _RPOR8_RP48R1_LENGTH                     0x00000001

#define _RPOR8_RP48R2_POSITION                   0x00000002
#define _RPOR8_RP48R2_MASK                       0x00000004
#define _RPOR8_RP48R2_LENGTH                     0x00000001

#define _RPOR8_RP48R3_POSITION                   0x00000003
#define _RPOR8_RP48R3_MASK                       0x00000008
#define _RPOR8_RP48R3_LENGTH                     0x00000001

#define _RPOR8_RP48R4_POSITION                   0x00000004
#define _RPOR8_RP48R4_MASK                       0x00000010
#define _RPOR8_RP48R4_LENGTH                     0x00000001

#define _RPOR8_RP48R5_POSITION                   0x00000005
#define _RPOR8_RP48R5_MASK                       0x00000020
#define _RPOR8_RP48R5_LENGTH                     0x00000001

#define _RPOR8_RP49R0_POSITION                   0x00000008
#define _RPOR8_RP49R0_MASK                       0x00000100
#define _RPOR8_RP49R0_LENGTH                     0x00000001

#define _RPOR8_RP49R1_POSITION                   0x00000009
#define _RPOR8_RP49R1_MASK                       0x00000200
#define _RPOR8_RP49R1_LENGTH                     0x00000001

#define _RPOR8_RP49R2_POSITION                   0x0000000A
#define _RPOR8_RP49R2_MASK                       0x00000400
#define _RPOR8_RP49R2_LENGTH                     0x00000001

#define _RPOR8_RP49R3_POSITION                   0x0000000B
#define _RPOR8_RP49R3_MASK                       0x00000800
#define _RPOR8_RP49R3_LENGTH                     0x00000001

#define _RPOR8_RP49R4_POSITION                   0x0000000C
#define _RPOR8_RP49R4_MASK                       0x00001000
#define _RPOR8_RP49R4_LENGTH                     0x00000001

#define _RPOR8_RP49R5_POSITION                   0x0000000D
#define _RPOR8_RP49R5_MASK                       0x00002000
#define _RPOR8_RP49R5_LENGTH                     0x00000001

#define _RPOR9_RP50R_POSITION                    0x00000000
#define _RPOR9_RP50R_MASK                        0x0000003F
#define _RPOR9_RP50R_LENGTH                      0x00000006

#define _RPOR9_RP51R_POSITION                    0x00000008
#define _RPOR9_RP51R_MASK                        0x00003F00
#define _RPOR9_RP51R_LENGTH                      0x00000006

#define _RPOR9_RP50R0_POSITION                   0x00000000
#define _RPOR9_RP50R0_MASK                       0x00000001
#define _RPOR9_RP50R0_LENGTH                     0x00000001

#define _RPOR9_RP50R1_POSITION                   0x00000001
#define _RPOR9_RP50R1_MASK                       0x00000002
#define _RPOR9_RP50R1_LENGTH                     0x00000001

#define _RPOR9_RP50R2_POSITION                   0x00000002
#define _RPOR9_RP50R2_MASK                       0x00000004
#define _RPOR9_RP50R2_LENGTH                     0x00000001

#define _RPOR9_RP50R3_POSITION                   0x00000003
#define _RPOR9_RP50R3_MASK                       0x00000008
#define _RPOR9_RP50R3_LENGTH                     0x00000001

#define _RPOR9_RP50R4_POSITION                   0x00000004
#define _RPOR9_RP50R4_MASK                       0x00000010
#define _RPOR9_RP50R4_LENGTH                     0x00000001

#define _RPOR9_RP50R5_POSITION                   0x00000005
#define _RPOR9_RP50R5_MASK                       0x00000020
#define _RPOR9_RP50R5_LENGTH                     0x00000001

#define _RPOR9_RP51R0_POSITION                   0x00000008
#define _RPOR9_RP51R0_MASK                       0x00000100
#define _RPOR9_RP51R0_LENGTH                     0x00000001

#define _RPOR9_RP51R1_POSITION                   0x00000009
#define _RPOR9_RP51R1_MASK                       0x00000200
#define _RPOR9_RP51R1_LENGTH                     0x00000001

#define _RPOR9_RP51R2_POSITION                   0x0000000A
#define _RPOR9_RP51R2_MASK                       0x00000400
#define _RPOR9_RP51R2_LENGTH                     0x00000001

#define _RPOR9_RP51R3_POSITION                   0x0000000B
#define _RPOR9_RP51R3_MASK                       0x00000800
#define _RPOR9_RP51R3_LENGTH                     0x00000001

#define _RPOR9_RP51R4_POSITION                   0x0000000C
#define _RPOR9_RP51R4_MASK                       0x00001000
#define _RPOR9_RP51R4_LENGTH                     0x00000001

#define _RPOR9_RP51R5_POSITION                   0x0000000D
#define _RPOR9_RP51R5_MASK                       0x00002000
#define _RPOR9_RP51R5_LENGTH                     0x00000001

#define _RPOR10_RP52R_POSITION                   0x00000000
#define _RPOR10_RP52R_MASK                       0x0000003F
#define _RPOR10_RP52R_LENGTH                     0x00000006

#define _RPOR10_RP53R_POSITION                   0x00000008
#define _RPOR10_RP53R_MASK                       0x00003F00
#define _RPOR10_RP53R_LENGTH                     0x00000006

#define _RPOR10_RP52R0_POSITION                  0x00000000
#define _RPOR10_RP52R0_MASK                      0x00000001
#define _RPOR10_RP52R0_LENGTH                    0x00000001

#define _RPOR10_RP52R1_POSITION                  0x00000001
#define _RPOR10_RP52R1_MASK                      0x00000002
#define _RPOR10_RP52R1_LENGTH                    0x00000001

#define _RPOR10_RP52R2_POSITION                  0x00000002
#define _RPOR10_RP52R2_MASK                      0x00000004
#define _RPOR10_RP52R2_LENGTH                    0x00000001

#define _RPOR10_RP52R3_POSITION                  0x00000003
#define _RPOR10_RP52R3_MASK                      0x00000008
#define _RPOR10_RP52R3_LENGTH                    0x00000001

#define _RPOR10_RP52R4_POSITION                  0x00000004
#define _RPOR10_RP52R4_MASK                      0x00000010
#define _RPOR10_RP52R4_LENGTH                    0x00000001

#define _RPOR10_RP52R5_POSITION                  0x00000005
#define _RPOR10_RP52R5_MASK                      0x00000020
#define _RPOR10_RP52R5_LENGTH                    0x00000001

#define _RPOR10_RP53R0_POSITION                  0x00000008
#define _RPOR10_RP53R0_MASK                      0x00000100
#define _RPOR10_RP53R0_LENGTH                    0x00000001

#define _RPOR10_RP53R1_POSITION                  0x00000009
#define _RPOR10_RP53R1_MASK                      0x00000200
#define _RPOR10_RP53R1_LENGTH                    0x00000001

#define _RPOR10_RP53R2_POSITION                  0x0000000A
#define _RPOR10_RP53R2_MASK                      0x00000400
#define _RPOR10_RP53R2_LENGTH                    0x00000001

#define _RPOR10_RP53R3_POSITION                  0x0000000B
#define _RPOR10_RP53R3_MASK                      0x00000800
#define _RPOR10_RP53R3_LENGTH                    0x00000001

#define _RPOR10_RP53R4_POSITION                  0x0000000C
#define _RPOR10_RP53R4_MASK                      0x00001000
#define _RPOR10_RP53R4_LENGTH                    0x00000001

#define _RPOR10_RP53R5_POSITION                  0x0000000D
#define _RPOR10_RP53R5_MASK                      0x00002000
#define _RPOR10_RP53R5_LENGTH                    0x00000001

#define _RPOR11_RP54R_POSITION                   0x00000000
#define _RPOR11_RP54R_MASK                       0x0000003F
#define _RPOR11_RP54R_LENGTH                     0x00000006

#define _RPOR11_RP55R_POSITION                   0x00000008
#define _RPOR11_RP55R_MASK                       0x00003F00
#define _RPOR11_RP55R_LENGTH                     0x00000006

#define _RPOR11_RP54R0_POSITION                  0x00000000
#define _RPOR11_RP54R0_MASK                      0x00000001
#define _RPOR11_RP54R0_LENGTH                    0x00000001

#define _RPOR11_RP54R1_POSITION                  0x00000001
#define _RPOR11_RP54R1_MASK                      0x00000002
#define _RPOR11_RP54R1_LENGTH                    0x00000001

#define _RPOR11_RP54R2_POSITION                  0x00000002
#define _RPOR11_RP54R2_MASK                      0x00000004
#define _RPOR11_RP54R2_LENGTH                    0x00000001

#define _RPOR11_RP54R3_POSITION                  0x00000003
#define _RPOR11_RP54R3_MASK                      0x00000008
#define _RPOR11_RP54R3_LENGTH                    0x00000001

#define _RPOR11_RP54R4_POSITION                  0x00000004
#define _RPOR11_RP54R4_MASK                      0x00000010
#define _RPOR11_RP54R4_LENGTH                    0x00000001

#define _RPOR11_RP54R5_POSITION                  0x00000005
#define _RPOR11_RP54R5_MASK                      0x00000020
#define _RPOR11_RP54R5_LENGTH                    0x00000001

#define _RPOR11_RP55R0_POSITION                  0x00000008
#define _RPOR11_RP55R0_MASK                      0x00000100
#define _RPOR11_RP55R0_LENGTH                    0x00000001

#define _RPOR11_RP55R1_POSITION                  0x00000009
#define _RPOR11_RP55R1_MASK                      0x00000200
#define _RPOR11_RP55R1_LENGTH                    0x00000001

#define _RPOR11_RP55R2_POSITION                  0x0000000A
#define _RPOR11_RP55R2_MASK                      0x00000400
#define _RPOR11_RP55R2_LENGTH                    0x00000001

#define _RPOR11_RP55R3_POSITION                  0x0000000B
#define _RPOR11_RP55R3_MASK                      0x00000800
#define _RPOR11_RP55R3_LENGTH                    0x00000001

#define _RPOR11_RP55R4_POSITION                  0x0000000C
#define _RPOR11_RP55R4_MASK                      0x00001000
#define _RPOR11_RP55R4_LENGTH                    0x00000001

#define _RPOR11_RP55R5_POSITION                  0x0000000D
#define _RPOR11_RP55R5_MASK                      0x00002000
#define _RPOR11_RP55R5_LENGTH                    0x00000001

#define _RPOR12_RP56R_POSITION                   0x00000000
#define _RPOR12_RP56R_MASK                       0x0000003F
#define _RPOR12_RP56R_LENGTH                     0x00000006

#define _RPOR12_RP57R_POSITION                   0x00000008
#define _RPOR12_RP57R_MASK                       0x00003F00
#define _RPOR12_RP57R_LENGTH                     0x00000006

#define _RPOR12_RP56R0_POSITION                  0x00000000
#define _RPOR12_RP56R0_MASK                      0x00000001
#define _RPOR12_RP56R0_LENGTH                    0x00000001

#define _RPOR12_RP56R1_POSITION                  0x00000001
#define _RPOR12_RP56R1_MASK                      0x00000002
#define _RPOR12_RP56R1_LENGTH                    0x00000001

#define _RPOR12_RP56R2_POSITION                  0x00000002
#define _RPOR12_RP56R2_MASK                      0x00000004
#define _RPOR12_RP56R2_LENGTH                    0x00000001

#define _RPOR12_RP56R3_POSITION                  0x00000003
#define _RPOR12_RP56R3_MASK                      0x00000008
#define _RPOR12_RP56R3_LENGTH                    0x00000001

#define _RPOR12_RP56R4_POSITION                  0x00000004
#define _RPOR12_RP56R4_MASK                      0x00000010
#define _RPOR12_RP56R4_LENGTH                    0x00000001

#define _RPOR12_RP56R5_POSITION                  0x00000005
#define _RPOR12_RP56R5_MASK                      0x00000020
#define _RPOR12_RP56R5_LENGTH                    0x00000001

#define _RPOR12_RP57R0_POSITION                  0x00000008
#define _RPOR12_RP57R0_MASK                      0x00000100
#define _RPOR12_RP57R0_LENGTH                    0x00000001

#define _RPOR12_RP57R1_POSITION                  0x00000009
#define _RPOR12_RP57R1_MASK                      0x00000200
#define _RPOR12_RP57R1_LENGTH                    0x00000001

#define _RPOR12_RP57R2_POSITION                  0x0000000A
#define _RPOR12_RP57R2_MASK                      0x00000400
#define _RPOR12_RP57R2_LENGTH                    0x00000001

#define _RPOR12_RP57R3_POSITION                  0x0000000B
#define _RPOR12_RP57R3_MASK                      0x00000800
#define _RPOR12_RP57R3_LENGTH                    0x00000001

#define _RPOR12_RP57R4_POSITION                  0x0000000C
#define _RPOR12_RP57R4_MASK                      0x00001000
#define _RPOR12_RP57R4_LENGTH                    0x00000001

#define _RPOR12_RP57R5_POSITION                  0x0000000D
#define _RPOR12_RP57R5_MASK                      0x00002000
#define _RPOR12_RP57R5_LENGTH                    0x00000001

#define _RPOR13_RP58R_POSITION                   0x00000000
#define _RPOR13_RP58R_MASK                       0x0000003F
#define _RPOR13_RP58R_LENGTH                     0x00000006

#define _RPOR13_RP59R_POSITION                   0x00000008
#define _RPOR13_RP59R_MASK                       0x00003F00
#define _RPOR13_RP59R_LENGTH                     0x00000006

#define _RPOR13_RP58R0_POSITION                  0x00000000
#define _RPOR13_RP58R0_MASK                      0x00000001
#define _RPOR13_RP58R0_LENGTH                    0x00000001

#define _RPOR13_RP58R1_POSITION                  0x00000001
#define _RPOR13_RP58R1_MASK                      0x00000002
#define _RPOR13_RP58R1_LENGTH                    0x00000001

#define _RPOR13_RP58R2_POSITION                  0x00000002
#define _RPOR13_RP58R2_MASK                      0x00000004
#define _RPOR13_RP58R2_LENGTH                    0x00000001

#define _RPOR13_RP58R3_POSITION                  0x00000003
#define _RPOR13_RP58R3_MASK                      0x00000008
#define _RPOR13_RP58R3_LENGTH                    0x00000001

#define _RPOR13_RP58R4_POSITION                  0x00000004
#define _RPOR13_RP58R4_MASK                      0x00000010
#define _RPOR13_RP58R4_LENGTH                    0x00000001

#define _RPOR13_RP58R5_POSITION                  0x00000005
#define _RPOR13_RP58R5_MASK                      0x00000020
#define _RPOR13_RP58R5_LENGTH                    0x00000001

#define _RPOR13_RP59R0_POSITION                  0x00000008
#define _RPOR13_RP59R0_MASK                      0x00000100
#define _RPOR13_RP59R0_LENGTH                    0x00000001

#define _RPOR13_RP59R1_POSITION                  0x00000009
#define _RPOR13_RP59R1_MASK                      0x00000200
#define _RPOR13_RP59R1_LENGTH                    0x00000001

#define _RPOR13_RP59R2_POSITION                  0x0000000A
#define _RPOR13_RP59R2_MASK                      0x00000400
#define _RPOR13_RP59R2_LENGTH                    0x00000001

#define _RPOR13_RP59R3_POSITION                  0x0000000B
#define _RPOR13_RP59R3_MASK                      0x00000800
#define _RPOR13_RP59R3_LENGTH                    0x00000001

#define _RPOR13_RP59R4_POSITION                  0x0000000C
#define _RPOR13_RP59R4_MASK                      0x00001000
#define _RPOR13_RP59R4_LENGTH                    0x00000001

#define _RPOR13_RP59R5_POSITION                  0x0000000D
#define _RPOR13_RP59R5_MASK                      0x00002000
#define _RPOR13_RP59R5_LENGTH                    0x00000001

#define _RPOR14_RP60R_POSITION                   0x00000000
#define _RPOR14_RP60R_MASK                       0x0000003F
#define _RPOR14_RP60R_LENGTH                     0x00000006

#define _RPOR14_RP61R_POSITION                   0x00000008
#define _RPOR14_RP61R_MASK                       0x00003F00
#define _RPOR14_RP61R_LENGTH                     0x00000006

#define _RPOR14_RP60R0_POSITION                  0x00000000
#define _RPOR14_RP60R0_MASK                      0x00000001
#define _RPOR14_RP60R0_LENGTH                    0x00000001

#define _RPOR14_RP60R1_POSITION                  0x00000001
#define _RPOR14_RP60R1_MASK                      0x00000002
#define _RPOR14_RP60R1_LENGTH                    0x00000001

#define _RPOR14_RP60R2_POSITION                  0x00000002
#define _RPOR14_RP60R2_MASK                      0x00000004
#define _RPOR14_RP60R2_LENGTH                    0x00000001

#define _RPOR14_RP60R3_POSITION                  0x00000003
#define _RPOR14_RP60R3_MASK                      0x00000008
#define _RPOR14_RP60R3_LENGTH                    0x00000001

#define _RPOR14_RP60R4_POSITION                  0x00000004
#define _RPOR14_RP60R4_MASK                      0x00000010
#define _RPOR14_RP60R4_LENGTH                    0x00000001

#define _RPOR14_RP60R5_POSITION                  0x00000005
#define _RPOR14_RP60R5_MASK                      0x00000020
#define _RPOR14_RP60R5_LENGTH                    0x00000001

#define _RPOR14_RP61R0_POSITION                  0x00000008
#define _RPOR14_RP61R0_MASK                      0x00000100
#define _RPOR14_RP61R0_LENGTH                    0x00000001

#define _RPOR14_RP61R1_POSITION                  0x00000009
#define _RPOR14_RP61R1_MASK                      0x00000200
#define _RPOR14_RP61R1_LENGTH                    0x00000001

#define _RPOR14_RP61R2_POSITION                  0x0000000A
#define _RPOR14_RP61R2_MASK                      0x00000400
#define _RPOR14_RP61R2_LENGTH                    0x00000001

#define _RPOR14_RP61R3_POSITION                  0x0000000B
#define _RPOR14_RP61R3_MASK                      0x00000800
#define _RPOR14_RP61R3_LENGTH                    0x00000001

#define _RPOR14_RP61R4_POSITION                  0x0000000C
#define _RPOR14_RP61R4_MASK                      0x00001000
#define _RPOR14_RP61R4_LENGTH                    0x00000001

#define _RPOR14_RP61R5_POSITION                  0x0000000D
#define _RPOR14_RP61R5_MASK                      0x00002000
#define _RPOR14_RP61R5_LENGTH                    0x00000001

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

#define _RPINR2_T1CKRR_POSITION                  0x00000008
#define _RPINR2_T1CKRR_MASK                      0x0000FF00
#define _RPINR2_T1CKRR_LENGTH                    0x00000008

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

#define _RPINR7_IC2R_POSITION                    0x00000008
#define _RPINR7_IC2R_MASK                        0x0000FF00
#define _RPINR7_IC2R_LENGTH                      0x00000008

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

#define _RPINR7_IC2R7_POSITION                   0x0000000F
#define _RPINR7_IC2R7_MASK                       0x00008000
#define _RPINR7_IC2R7_LENGTH                     0x00000001

#define _RPINR8_IC3R_POSITION                    0x00000000
#define _RPINR8_IC3R_MASK                        0x000000FF
#define _RPINR8_IC3R_LENGTH                      0x00000008

#define _RPINR8_IC4R_POSITION                    0x00000008
#define _RPINR8_IC4R_MASK                        0x0000FF00
#define _RPINR8_IC4R_LENGTH                      0x00000008

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

#define _RPINR8_IC3R7_POSITION                   0x00000007
#define _RPINR8_IC3R7_MASK                       0x00000080
#define _RPINR8_IC3R7_LENGTH                     0x00000001

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

#define _RPINR8_IC4R7_POSITION                   0x0000000F
#define _RPINR8_IC4R7_MASK                       0x00008000
#define _RPINR8_IC4R7_LENGTH                     0x00000001

#define _RPINR11_OCFAR_POSITION                  0x00000000
#define _RPINR11_OCFAR_MASK                      0x000000FF
#define _RPINR11_OCFAR_LENGTH                    0x00000008

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

#define _RPINR11_OCFAR7_POSITION                 0x00000007
#define _RPINR11_OCFAR7_MASK                     0x00000080
#define _RPINR11_OCFAR7_LENGTH                   0x00000001

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

#define _RPINR19_U2RXR_POSITION                  0x00000000
#define _RPINR19_U2RXR_MASK                      0x000000FF
#define _RPINR19_U2RXR_LENGTH                    0x00000008

#define _RPINR19_U2CTSR_POSITION                 0x00000008
#define _RPINR19_U2CTSR_MASK                     0x0000FF00
#define _RPINR19_U2CTSR_LENGTH                   0x00000008

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

#define _RPINR19_U2RXR7_POSITION                 0x00000007
#define _RPINR19_U2RXR7_MASK                     0x00000080
#define _RPINR19_U2RXR7_LENGTH                   0x00000001

#define _RPINR19_U2CTSR0_POSITION                0x00000008
#define _RPINR19_U2CTSR0_MASK                    0x00000100
#define _RPINR19_U2CTSR0_LENGTH                  0x00000001

#define _RPINR19_U2CTSR1_POSITION                0x00000009
#define _RPINR19_U2CTSR1_MASK                    0x00000200
#define _RPINR19_U2CTSR1_LENGTH                  0x00000001

#define _RPINR19_U2CTSR2_POSITION                0x0000000A
#define _RPINR19_U2CTSR2_MASK                    0x00000400
#define _RPINR19_U2CTSR2_LENGTH                  0x00000001

#define _RPINR19_U2CTSR3_POSITION                0x0000000B
#define _RPINR19_U2CTSR3_MASK                    0x00000800
#define _RPINR19_U2CTSR3_LENGTH                  0x00000001

#define _RPINR19_U2CTSR4_POSITION                0x0000000C
#define _RPINR19_U2CTSR4_MASK                    0x00001000
#define _RPINR19_U2CTSR4_LENGTH                  0x00000001

#define _RPINR19_U2CTSR5_POSITION                0x0000000D
#define _RPINR19_U2CTSR5_MASK                    0x00002000
#define _RPINR19_U2CTSR5_LENGTH                  0x00000001

#define _RPINR19_U2CTSR6_POSITION                0x0000000E
#define _RPINR19_U2CTSR6_MASK                    0x00004000
#define _RPINR19_U2CTSR6_LENGTH                  0x00000001

#define _RPINR19_U2CTSR7_POSITION                0x0000000F
#define _RPINR19_U2CTSR7_MASK                    0x00008000
#define _RPINR19_U2CTSR7_LENGTH                  0x00000001

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

#define _RPINR22_SDI2R_POSITION                  0x00000000
#define _RPINR22_SDI2R_MASK                      0x000000FF
#define _RPINR22_SDI2R_LENGTH                    0x00000008

#define _RPINR22_SCK2INR_POSITION                0x00000008
#define _RPINR22_SCK2INR_MASK                    0x0000FF00
#define _RPINR22_SCK2INR_LENGTH                  0x00000008

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

#define _RPINR22_SDI2R7_POSITION                 0x00000007
#define _RPINR22_SDI2R7_MASK                     0x00000080
#define _RPINR22_SDI2R7_LENGTH                   0x00000001

#define _RPINR22_SCK2INR0_POSITION               0x00000008
#define _RPINR22_SCK2INR0_MASK                   0x00000100
#define _RPINR22_SCK2INR0_LENGTH                 0x00000001

#define _RPINR22_SCK2INR1_POSITION               0x00000009
#define _RPINR22_SCK2INR1_MASK                   0x00000200
#define _RPINR22_SCK2INR1_LENGTH                 0x00000001

#define _RPINR22_SCK2INR2_POSITION               0x0000000A
#define _RPINR22_SCK2INR2_MASK                   0x00000400
#define _RPINR22_SCK2INR2_LENGTH                 0x00000001

#define _RPINR22_SCK2INR3_POSITION               0x0000000B
#define _RPINR22_SCK2INR3_MASK                   0x00000800
#define _RPINR22_SCK2INR3_LENGTH                 0x00000001

#define _RPINR22_SCK2INR4_POSITION               0x0000000C
#define _RPINR22_SCK2INR4_MASK                   0x00001000
#define _RPINR22_SCK2INR4_LENGTH                 0x00000001

#define _RPINR22_SCK2INR5_POSITION               0x0000000D
#define _RPINR22_SCK2INR5_MASK                   0x00002000
#define _RPINR22_SCK2INR5_LENGTH                 0x00000001

#define _RPINR22_SCK2INR6_POSITION               0x0000000E
#define _RPINR22_SCK2INR6_MASK                   0x00004000
#define _RPINR22_SCK2INR6_LENGTH                 0x00000001

#define _RPINR22_SCK2INR7_POSITION               0x0000000F
#define _RPINR22_SCK2INR7_MASK                   0x00008000
#define _RPINR22_SCK2INR7_LENGTH                 0x00000001

#define _RPINR23_SS2R_POSITION                   0x00000000
#define _RPINR23_SS2R_MASK                       0x000000FF
#define _RPINR23_SS2R_LENGTH                     0x00000008

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

#define _RPINR23_SS2R7_POSITION                  0x00000007
#define _RPINR23_SS2R7_MASK                      0x00000080
#define _RPINR23_SS2R7_LENGTH                    0x00000001

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

#define _NVMCON_P2ACTIV_POSITION                 0x0000000A
#define _NVMCON_P2ACTIV_MASK                     0x00000400
#define _NVMCON_P2ACTIV_LENGTH                   0x00000001

#define _NVMCON_SFTSWP_POSITION                  0x0000000B
#define _NVMCON_SFTSWP_MASK                      0x00000800
#define _NVMCON_SFTSWP_LENGTH                    0x00000001

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

#define _LFSR_LFSR_POSITION                      0x00000000
#define _LFSR_LFSR_MASK                          0x00007FFF
#define _LFSR_LFSR_LENGTH                        0x0000000F

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

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

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

#define _PMD6_PWM4MD_POSITION                    0x0000000B
#define _PMD6_PWM4MD_MASK                        0x00000800
#define _PMD6_PWM4MD_LENGTH                      0x00000001

#define _PMD6_PWM5MD_POSITION                    0x0000000C
#define _PMD6_PWM5MD_MASK                        0x00001000
#define _PMD6_PWM5MD_LENGTH                      0x00000001

#define _PMD7_PGA1MD_POSITION                    0x00000001
#define _PMD7_PGA1MD_MASK                        0x00000002
#define _PMD7_PGA1MD_LENGTH                      0x00000001

#define _PMD7_CMP1MD_POSITION                    0x00000008
#define _PMD7_CMP1MD_MASK                        0x00000100
#define _PMD7_CMP1MD_LENGTH                      0x00000001

#define _PMD7_CMP2MD_POSITION                    0x00000009
#define _PMD7_CMP2MD_MASK                        0x00000200
#define _PMD7_CMP2MD_LENGTH                      0x00000001

#define _PMD7_CMP3MD_POSITION                    0x0000000A
#define _PMD7_CMP3MD_MASK                        0x00000400
#define _PMD7_CMP3MD_LENGTH                      0x00000001

#define _PMD7_CMP4MD_POSITION                    0x0000000B
#define _PMD7_CMP4MD_MASK                        0x00000800
#define _PMD7_CMP4MD_LENGTH                      0x00000001

#define _PMD8_CCSMD_POSITION                     0x00000001
#define _PMD8_CCSMD_MASK                         0x00000002
#define _PMD8_CCSMD_LENGTH                       0x00000001

#define _PMD8_ABGMD_POSITION                     0x00000009
#define _PMD8_ABGMD_MASK                         0x00000200
#define _PMD8_ABGMD_LENGTH                       0x00000001

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

#define _IFS4_U1EIF_POSITION                     0x00000001
#define _IFS4_U1EIF_MASK                         0x00000002
#define _IFS4_U1EIF_LENGTH                       0x00000001

#define _IFS4_U2EIF_POSITION                     0x00000002
#define _IFS4_U2EIF_MASK                         0x00000004
#define _IFS4_U2EIF_LENGTH                       0x00000001

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

#define _IFS6_PWM4IF_POSITION                    0x00000001
#define _IFS6_PWM4IF_MASK                        0x00000002
#define _IFS6_PWM4IF_LENGTH                      0x00000001

#define _IFS6_PWM5IF_POSITION                    0x00000002
#define _IFS6_PWM5IF_MASK                        0x00000004
#define _IFS6_PWM5IF_LENGTH                      0x00000001

#define _IFS6_AC2IF_POSITION                     0x00000007
#define _IFS6_AC2IF_MASK                         0x00000080
#define _IFS6_AC2IF_LENGTH                       0x00000001

#define _IFS6_AC3IF_POSITION                     0x00000008
#define _IFS6_AC3IF_MASK                         0x00000100
#define _IFS6_AC3IF_LENGTH                       0x00000001

#define _IFS6_AC4IF_POSITION                     0x00000009
#define _IFS6_AC4IF_MASK                         0x00000200
#define _IFS6_AC4IF_LENGTH                       0x00000001

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

#define _IFS8_ICDIF_POSITION                     0x0000000E
#define _IFS8_ICDIF_MASK                         0x00004000
#define _IFS8_ICDIF_LENGTH                       0x00000001

#define _IFS8_JTAGIF_POSITION                    0x0000000F
#define _IFS8_JTAGIF_MASK                        0x00008000
#define _IFS8_JTAGIF_LENGTH                      0x00000001

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

#define _IFS9_ADCAN14IF_POSITION                 0x0000000D
#define _IFS9_ADCAN14IF_MASK                     0x00002000
#define _IFS9_ADCAN14IF_LENGTH                   0x00000001

#define _IFS10_ADCAN17IF_POSITION                0x00000000
#define _IFS10_ADCAN17IF_MASK                    0x00000001
#define _IFS10_ADCAN17IF_LENGTH                  0x00000001

#define _IFS10_ADCAN18IF_POSITION                0x00000001
#define _IFS10_ADCAN18IF_MASK                    0x00000002
#define _IFS10_ADCAN18IF_LENGTH                  0x00000001

#define _IFS10_ADCAN19IF_POSITION                0x00000002
#define _IFS10_ADCAN19IF_MASK                    0x00000004
#define _IFS10_ADCAN19IF_LENGTH                  0x00000001

#define _IFS10_ADCAN20IF_POSITION                0x00000003
#define _IFS10_ADCAN20IF_MASK                    0x00000008
#define _IFS10_ADCAN20IF_LENGTH                  0x00000001

#define _IFS10_ADCAN21IF_POSITION                0x00000004
#define _IFS10_ADCAN21IF_MASK                    0x00000010
#define _IFS10_ADCAN21IF_LENGTH                  0x00000001

#define _IFS10_ADCAN22IF_POSITION                0x00000005
#define _IFS10_ADCAN22IF_MASK                    0x00000020
#define _IFS10_ADCAN22IF_LENGTH                  0x00000001

#define _IFS10_ADCAN23IF_POSITION                0x00000006
#define _IFS10_ADCAN23IF_MASK                    0x00000040
#define _IFS10_ADCAN23IF_LENGTH                  0x00000001

#define _IFS10_ADCAN24IF_POSITION                0x00000007
#define _IFS10_ADCAN24IF_MASK                    0x00000080
#define _IFS10_ADCAN24IF_LENGTH                  0x00000001

#define _IFS10_ADCAN25IF_POSITION                0x00000008
#define _IFS10_ADCAN25IF_MASK                    0x00000100
#define _IFS10_ADCAN25IF_LENGTH                  0x00000001

#define _IFS10_ADCAN26IF_POSITION                0x00000009
#define _IFS10_ADCAN26IF_MASK                    0x00000200
#define _IFS10_ADCAN26IF_LENGTH                  0x00000001

#define _IFS10_I2C1BCIF_POSITION                 0x0000000D
#define _IFS10_I2C1BCIF_MASK                     0x00002000
#define _IFS10_I2C1BCIF_LENGTH                   0x00000001

#define _IFS10_I2C2BCIF_POSITION                 0x0000000E
#define _IFS10_I2C2BCIF_MASK                     0x00004000
#define _IFS10_I2C2BCIF_LENGTH                   0x00000001

#define _IFS11_ADCMP1IF_POSITION                 0x00000001
#define _IFS11_ADCMP1IF_MASK                     0x00000002
#define _IFS11_ADCMP1IF_LENGTH                   0x00000001

#define _IFS11_ADCMP2IF_POSITION                 0x00000002
#define _IFS11_ADCMP2IF_MASK                     0x00000004
#define _IFS11_ADCMP2IF_LENGTH                   0x00000001

#define _IFS11_ADFLTR1IF_POSITION                0x00000003
#define _IFS11_ADFLTR1IF_MASK                    0x00000008
#define _IFS11_ADFLTR1IF_LENGTH                  0x00000001

#define _IFS11_ADFLTR2IF_POSITION                0x00000004
#define _IFS11_ADFLTR2IF_MASK                    0x00000010
#define _IFS11_ADFLTR2IF_LENGTH                  0x00000001

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

#define _IEC4_U1EIE_POSITION                     0x00000001
#define _IEC4_U1EIE_MASK                         0x00000002
#define _IEC4_U1EIE_LENGTH                       0x00000001

#define _IEC4_U2EIE_POSITION                     0x00000002
#define _IEC4_U2EIE_MASK                         0x00000004
#define _IEC4_U2EIE_LENGTH                       0x00000001

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

#define _IEC6_PWM4IE_POSITION                    0x00000001
#define _IEC6_PWM4IE_MASK                        0x00000002
#define _IEC6_PWM4IE_LENGTH                      0x00000001

#define _IEC6_PWM5IE_POSITION                    0x00000002
#define _IEC6_PWM5IE_MASK                        0x00000004
#define _IEC6_PWM5IE_LENGTH                      0x00000001

#define _IEC6_AC2IE_POSITION                     0x00000007
#define _IEC6_AC2IE_MASK                         0x00000080
#define _IEC6_AC2IE_LENGTH                       0x00000001

#define _IEC6_AC3IE_POSITION                     0x00000008
#define _IEC6_AC3IE_MASK                         0x00000100
#define _IEC6_AC3IE_LENGTH                       0x00000001

#define _IEC6_AC4IE_POSITION                     0x00000009
#define _IEC6_AC4IE_MASK                         0x00000200
#define _IEC6_AC4IE_LENGTH                       0x00000001

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

#define _IEC8_ICDIF_POSITION                     0x0000000E
#define _IEC8_ICDIF_MASK                         0x00004000
#define _IEC8_ICDIF_LENGTH                       0x00000001

#define _IEC8_JTAGIE_POSITION                    0x0000000F
#define _IEC8_JTAGIE_MASK                        0x00008000
#define _IEC8_JTAGIE_LENGTH                      0x00000001

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

#define _IEC9_ADCAN14IE_POSITION                 0x0000000D
#define _IEC9_ADCAN14IE_MASK                     0x00002000
#define _IEC9_ADCAN14IE_LENGTH                   0x00000001

#define _IEC10_ADCAN17IE_POSITION                0x00000000
#define _IEC10_ADCAN17IE_MASK                    0x00000001
#define _IEC10_ADCAN17IE_LENGTH                  0x00000001

#define _IEC10_ADCAN18IE_POSITION                0x00000001
#define _IEC10_ADCAN18IE_MASK                    0x00000002
#define _IEC10_ADCAN18IE_LENGTH                  0x00000001

#define _IEC10_ADCAN19IE_POSITION                0x00000002
#define _IEC10_ADCAN19IE_MASK                    0x00000004
#define _IEC10_ADCAN19IE_LENGTH                  0x00000001

#define _IEC10_ADCAN20IE_POSITION                0x00000003
#define _IEC10_ADCAN20IE_MASK                    0x00000008
#define _IEC10_ADCAN20IE_LENGTH                  0x00000001

#define _IEC10_ADCAN21IE_POSITION                0x00000004
#define _IEC10_ADCAN21IE_MASK                    0x00000010
#define _IEC10_ADCAN21IE_LENGTH                  0x00000001

#define _IEC10_ADCAN22IE_POSITION                0x00000005
#define _IEC10_ADCAN22IE_MASK                    0x00000020
#define _IEC10_ADCAN22IE_LENGTH                  0x00000001

#define _IEC10_ADCAN23IE_POSITION                0x00000006
#define _IEC10_ADCAN23IE_MASK                    0x00000040
#define _IEC10_ADCAN23IE_LENGTH                  0x00000001

#define _IEC10_ADCAN24IE_POSITION                0x00000007
#define _IEC10_ADCAN24IE_MASK                    0x00000080
#define _IEC10_ADCAN24IE_LENGTH                  0x00000001

#define _IEC10_ADCAN25IE_POSITION                0x00000008
#define _IEC10_ADCAN25IE_MASK                    0x00000100
#define _IEC10_ADCAN25IE_LENGTH                  0x00000001

#define _IEC10_ADCAN26IE_POSITION                0x00000009
#define _IEC10_ADCAN26IE_MASK                    0x00000200
#define _IEC10_ADCAN26IE_LENGTH                  0x00000001

#define _IEC10_I2C1BCIE_POSITION                 0x0000000D
#define _IEC10_I2C1BCIE_MASK                     0x00002000
#define _IEC10_I2C1BCIE_LENGTH                   0x00000001

#define _IEC10_I2C2BCIE_POSITION                 0x0000000E
#define _IEC10_I2C2BCIE_MASK                     0x00004000
#define _IEC10_I2C2BCIE_LENGTH                   0x00000001

#define _IEC11_ADCMP1IE_POSITION                 0x00000001
#define _IEC11_ADCMP1IE_MASK                     0x00000002
#define _IEC11_ADCMP1IE_LENGTH                   0x00000001

#define _IEC11_ADCMP2IE_POSITION                 0x00000002
#define _IEC11_ADCMP2IE_MASK                     0x00000004
#define _IEC11_ADCMP2IE_LENGTH                   0x00000001

#define _IEC11_ADFLTR1IE_POSITION                0x00000003
#define _IEC11_ADFLTR1IE_MASK                    0x00000008
#define _IEC11_ADFLTR1IE_LENGTH                  0x00000001

#define _IEC11_ADFLTR2IE_POSITION                0x00000004
#define _IEC11_ADFLTR2IE_MASK                    0x00000010
#define _IEC11_ADFLTR2IE_LENGTH                  0x00000001

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

#define _IPC1_IC2IP_POSITION                     0x00000004
#define _IPC1_IC2IP_MASK                         0x00000070
#define _IPC1_IC2IP_LENGTH                       0x00000003

#define _IPC1_OC2IP_POSITION                     0x00000008
#define _IPC1_OC2IP_MASK                         0x00000700
#define _IPC1_OC2IP_LENGTH                       0x00000003

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

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

#define _IPC6_OC3IP_POSITION                     0x00000004
#define _IPC6_OC3IP_MASK                         0x00000070
#define _IPC6_OC3IP_LENGTH                       0x00000003

#define _IPC6_OC4IP_POSITION                     0x00000008
#define _IPC6_OC4IP_MASK                         0x00000700
#define _IPC6_OC4IP_LENGTH                       0x00000003

#define _IPC6_T4IP_POSITION                      0x0000000C
#define _IPC6_T4IP_MASK                          0x00007000
#define _IPC6_T4IP_LENGTH                        0x00000003

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

#define _IPC9_IC3IP_POSITION                     0x00000004
#define _IPC9_IC3IP_MASK                         0x00000070
#define _IPC9_IC3IP_LENGTH                       0x00000003

#define _IPC9_IC4IP_POSITION                     0x00000008
#define _IPC9_IC4IP_MASK                         0x00000700
#define _IPC9_IC4IP_LENGTH                       0x00000003

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

#define _IPC16_U2EIP_POSITION                    0x00000008
#define _IPC16_U2EIP_MASK                        0x00000700
#define _IPC16_U2EIP_LENGTH                      0x00000003

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

#define _IPC24_PWM4IP_POSITION                   0x00000004
#define _IPC24_PWM4IP_MASK                       0x00000070
#define _IPC24_PWM4IP_LENGTH                     0x00000003

#define _IPC24_PWM5IP_POSITION                   0x00000008
#define _IPC24_PWM5IP_MASK                       0x00000700
#define _IPC24_PWM5IP_LENGTH                     0x00000003

#define _IPC24_PWM3IP0_POSITION                  0x00000000
#define _IPC24_PWM3IP0_MASK                      0x00000001
#define _IPC24_PWM3IP0_LENGTH                    0x00000001

#define _IPC24_PWM3IP1_POSITION                  0x00000001
#define _IPC24_PWM3IP1_MASK                      0x00000002
#define _IPC24_PWM3IP1_LENGTH                    0x00000001

#define _IPC24_PWM3IP2_POSITION                  0x00000002
#define _IPC24_PWM3IP2_MASK                      0x00000004
#define _IPC24_PWM3IP2_LENGTH                    0x00000001

#define _IPC24_PWM4IP0_POSITION                  0x00000004
#define _IPC24_PWM4IP0_MASK                      0x00000010
#define _IPC24_PWM4IP0_LENGTH                    0x00000001

#define _IPC24_PWM4IP1_POSITION                  0x00000005
#define _IPC24_PWM4IP1_MASK                      0x00000020
#define _IPC24_PWM4IP1_LENGTH                    0x00000001

#define _IPC24_PWM4IP2_POSITION                  0x00000006
#define _IPC24_PWM4IP2_MASK                      0x00000040
#define _IPC24_PWM4IP2_LENGTH                    0x00000001

#define _IPC24_PWM5IP0_POSITION                  0x00000008
#define _IPC24_PWM5IP0_MASK                      0x00000100
#define _IPC24_PWM5IP0_LENGTH                    0x00000001

#define _IPC24_PWM5IP1_POSITION                  0x00000009
#define _IPC24_PWM5IP1_MASK                      0x00000200
#define _IPC24_PWM5IP1_LENGTH                    0x00000001

#define _IPC24_PWM5IP2_POSITION                  0x0000000A
#define _IPC24_PWM5IP2_MASK                      0x00000400
#define _IPC24_PWM5IP2_LENGTH                    0x00000001

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

#define _IPC26_AC3IP_POSITION                    0x00000000
#define _IPC26_AC3IP_MASK                        0x00000007
#define _IPC26_AC3IP_LENGTH                      0x00000003

#define _IPC26_AC4IP_POSITION                    0x00000004
#define _IPC26_AC4IP_MASK                        0x00000070
#define _IPC26_AC4IP_LENGTH                      0x00000003

#define _IPC26_AC3IP0_POSITION                   0x00000000
#define _IPC26_AC3IP0_MASK                       0x00000001
#define _IPC26_AC3IP0_LENGTH                     0x00000001

#define _IPC26_AC3IP1_POSITION                   0x00000001
#define _IPC26_AC3IP1_MASK                       0x00000002
#define _IPC26_AC3IP1_LENGTH                     0x00000001

#define _IPC26_AC3IP2_POSITION                   0x00000002
#define _IPC26_AC3IP2_MASK                       0x00000004
#define _IPC26_AC3IP2_LENGTH                     0x00000001

#define _IPC26_AC4IP0_POSITION                   0x00000004
#define _IPC26_AC4IP0_MASK                       0x00000010
#define _IPC26_AC4IP0_LENGTH                     0x00000001

#define _IPC26_AC4IP1_POSITION                   0x00000005
#define _IPC26_AC4IP1_MASK                       0x00000020
#define _IPC26_AC4IP1_LENGTH                     0x00000001

#define _IPC26_AC4IP2_POSITION                   0x00000006
#define _IPC26_AC4IP2_MASK                       0x00000040
#define _IPC26_AC4IP2_LENGTH                     0x00000001

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

#define _IPC39_ADCAN14IP_POSITION                0x00000004
#define _IPC39_ADCAN14IP_MASK                    0x00000070
#define _IPC39_ADCAN14IP_LENGTH                  0x00000003

#define _IPC39_ADCAN14IP0_POSITION               0x00000004
#define _IPC39_ADCAN14IP0_MASK                   0x00000010
#define _IPC39_ADCAN14IP0_LENGTH                 0x00000001

#define _IPC39_ADCAN14IP1_POSITION               0x00000005
#define _IPC39_ADCAN14IP1_MASK                   0x00000020
#define _IPC39_ADCAN14IP1_LENGTH                 0x00000001

#define _IPC39_ADCAN14IP2_POSITION               0x00000006
#define _IPC39_ADCAN14IP2_MASK                   0x00000040
#define _IPC39_ADCAN14IP2_LENGTH                 0x00000001

#define _IPC40_ADCAN17IP_POSITION                0x00000000
#define _IPC40_ADCAN17IP_MASK                    0x00000007
#define _IPC40_ADCAN17IP_LENGTH                  0x00000003

#define _IPC40_ADCAN18IP_POSITION                0x00000004
#define _IPC40_ADCAN18IP_MASK                    0x00000070
#define _IPC40_ADCAN18IP_LENGTH                  0x00000003

#define _IPC40_ADCAN19IP_POSITION                0x00000008
#define _IPC40_ADCAN19IP_MASK                    0x00000700
#define _IPC40_ADCAN19IP_LENGTH                  0x00000003

#define _IPC40_ADCAN20IP_POSITION                0x0000000C
#define _IPC40_ADCAN20IP_MASK                    0x00007000
#define _IPC40_ADCAN20IP_LENGTH                  0x00000003

#define _IPC40_ADCAN17IP0_POSITION               0x00000000
#define _IPC40_ADCAN17IP0_MASK                   0x00000001
#define _IPC40_ADCAN17IP0_LENGTH                 0x00000001

#define _IPC40_ADCAN17IP1_POSITION               0x00000001
#define _IPC40_ADCAN17IP1_MASK                   0x00000002
#define _IPC40_ADCAN17IP1_LENGTH                 0x00000001

#define _IPC40_ADCAN17IP2_POSITION               0x00000002
#define _IPC40_ADCAN17IP2_MASK                   0x00000004
#define _IPC40_ADCAN17IP2_LENGTH                 0x00000001

#define _IPC40_ADCAN18IP0_POSITION               0x00000004
#define _IPC40_ADCAN18IP0_MASK                   0x00000010
#define _IPC40_ADCAN18IP0_LENGTH                 0x00000001

#define _IPC40_ADCAN18IP1_POSITION               0x00000005
#define _IPC40_ADCAN18IP1_MASK                   0x00000020
#define _IPC40_ADCAN18IP1_LENGTH                 0x00000001

#define _IPC40_ADCAN18IP2_POSITION               0x00000006
#define _IPC40_ADCAN18IP2_MASK                   0x00000040
#define _IPC40_ADCAN18IP2_LENGTH                 0x00000001

#define _IPC40_ADCAN19IP0_POSITION               0x00000008
#define _IPC40_ADCAN19IP0_MASK                   0x00000100
#define _IPC40_ADCAN19IP0_LENGTH                 0x00000001

#define _IPC40_ADCAN19IP1_POSITION               0x00000009
#define _IPC40_ADCAN19IP1_MASK                   0x00000200
#define _IPC40_ADCAN19IP1_LENGTH                 0x00000001

#define _IPC40_ADCAN19IP2_POSITION               0x0000000A
#define _IPC40_ADCAN19IP2_MASK                   0x00000400
#define _IPC40_ADCAN19IP2_LENGTH                 0x00000001

#define _IPC40_ADCAN20IP0_POSITION               0x0000000C
#define _IPC40_ADCAN20IP0_MASK                   0x00001000
#define _IPC40_ADCAN20IP0_LENGTH                 0x00000001

#define _IPC40_ADCAN20IP1_POSITION               0x0000000D
#define _IPC40_ADCAN20IP1_MASK                   0x00002000
#define _IPC40_ADCAN20IP1_LENGTH                 0x00000001

#define _IPC40_ADCAN20IP2_POSITION               0x0000000E
#define _IPC40_ADCAN20IP2_MASK                   0x00004000
#define _IPC40_ADCAN20IP2_LENGTH                 0x00000001

#define _IPC41_ADCAN21IP_POSITION                0x00000000
#define _IPC41_ADCAN21IP_MASK                    0x00000007
#define _IPC41_ADCAN21IP_LENGTH                  0x00000003

#define _IPC41_ADCAN22IP_POSITION                0x00000004
#define _IPC41_ADCAN22IP_MASK                    0x00000070
#define _IPC41_ADCAN22IP_LENGTH                  0x00000003

#define _IPC41_ADCAN23IP_POSITION                0x00000008
#define _IPC41_ADCAN23IP_MASK                    0x00000700
#define _IPC41_ADCAN23IP_LENGTH                  0x00000003

#define _IPC41_ADCAN24IP_POSITION                0x0000000C
#define _IPC41_ADCAN24IP_MASK                    0x00007000
#define _IPC41_ADCAN24IP_LENGTH                  0x00000003

#define _IPC41_ADCAN21IP0_POSITION               0x00000000
#define _IPC41_ADCAN21IP0_MASK                   0x00000001
#define _IPC41_ADCAN21IP0_LENGTH                 0x00000001

#define _IPC41_ADCAN21IP1_POSITION               0x00000001
#define _IPC41_ADCAN21IP1_MASK                   0x00000002
#define _IPC41_ADCAN21IP1_LENGTH                 0x00000001

#define _IPC41_ADCAN21IP2_POSITION               0x00000002
#define _IPC41_ADCAN21IP2_MASK                   0x00000004
#define _IPC41_ADCAN21IP2_LENGTH                 0x00000001

#define _IPC41_ADCAN22IP0_POSITION               0x00000004
#define _IPC41_ADCAN22IP0_MASK                   0x00000010
#define _IPC41_ADCAN22IP0_LENGTH                 0x00000001

#define _IPC41_ADCAN22IP1_POSITION               0x00000005
#define _IPC41_ADCAN22IP1_MASK                   0x00000020
#define _IPC41_ADCAN22IP1_LENGTH                 0x00000001

#define _IPC41_ADCAN22IP2_POSITION               0x00000006
#define _IPC41_ADCAN22IP2_MASK                   0x00000040
#define _IPC41_ADCAN22IP2_LENGTH                 0x00000001

#define _IPC41_ADCAN23IP0_POSITION               0x00000008
#define _IPC41_ADCAN23IP0_MASK                   0x00000100
#define _IPC41_ADCAN23IP0_LENGTH                 0x00000001

#define _IPC41_ADCAN23IP1_POSITION               0x00000009
#define _IPC41_ADCAN23IP1_MASK                   0x00000200
#define _IPC41_ADCAN23IP1_LENGTH                 0x00000001

#define _IPC41_ADCAN23IP2_POSITION               0x0000000A
#define _IPC41_ADCAN23IP2_MASK                   0x00000400
#define _IPC41_ADCAN23IP2_LENGTH                 0x00000001

#define _IPC41_ADCAN24IP0_POSITION               0x0000000C
#define _IPC41_ADCAN24IP0_MASK                   0x00001000
#define _IPC41_ADCAN24IP0_LENGTH                 0x00000001

#define _IPC41_ADCAN24IP1_POSITION               0x0000000D
#define _IPC41_ADCAN24IP1_MASK                   0x00002000
#define _IPC41_ADCAN24IP1_LENGTH                 0x00000001

#define _IPC41_ADCAN24IP2_POSITION               0x0000000E
#define _IPC41_ADCAN24IP2_MASK                   0x00004000
#define _IPC41_ADCAN24IP2_LENGTH                 0x00000001

#define _IPC42_ADCAN25IP_POSITION                0x00000000
#define _IPC42_ADCAN25IP_MASK                    0x00000007
#define _IPC42_ADCAN25IP_LENGTH                  0x00000003

#define _IPC42_ADCAN26IP_POSITION                0x00000004
#define _IPC42_ADCAN26IP_MASK                    0x00000070
#define _IPC42_ADCAN26IP_LENGTH                  0x00000003

#define _IPC42_ADCAN25IP0_POSITION               0x00000000
#define _IPC42_ADCAN25IP0_MASK                   0x00000001
#define _IPC42_ADCAN25IP0_LENGTH                 0x00000001

#define _IPC42_ADCAN25IP1_POSITION               0x00000001
#define _IPC42_ADCAN25IP1_MASK                   0x00000002
#define _IPC42_ADCAN25IP1_LENGTH                 0x00000001

#define _IPC42_ADCAN25IP2_POSITION               0x00000002
#define _IPC42_ADCAN25IP2_MASK                   0x00000004
#define _IPC42_ADCAN25IP2_LENGTH                 0x00000001

#define _IPC42_ADCAN26IP0_POSITION               0x00000004
#define _IPC42_ADCAN26IP0_MASK                   0x00000010
#define _IPC42_ADCAN26IP0_LENGTH                 0x00000001

#define _IPC42_ADCAN26IP1_POSITION               0x00000005
#define _IPC42_ADCAN26IP1_MASK                   0x00000020
#define _IPC42_ADCAN26IP1_LENGTH                 0x00000001

#define _IPC42_ADCAN26IP2_POSITION               0x00000006
#define _IPC42_ADCAN26IP2_MASK                   0x00000040
#define _IPC42_ADCAN26IP2_LENGTH                 0x00000001

#define _IPC43_I2C1BCIP_POSITION                 0x00000004
#define _IPC43_I2C1BCIP_MASK                     0x00000070
#define _IPC43_I2C1BCIP_LENGTH                   0x00000003

#define _IPC43_I2C2BCIP_POSITION                 0x00000008
#define _IPC43_I2C2BCIP_MASK                     0x00000700
#define _IPC43_I2C2BCIP_LENGTH                   0x00000003

#define _IPC43_I2C1BCIP0_POSITION                0x00000004
#define _IPC43_I2C1BCIP0_MASK                    0x00000010
#define _IPC43_I2C1BCIP0_LENGTH                  0x00000001

#define _IPC43_I2C1BCIP1_POSITION                0x00000005
#define _IPC43_I2C1BCIP1_MASK                    0x00000020
#define _IPC43_I2C1BCIP1_LENGTH                  0x00000001

#define _IPC43_I2C1BCIP2_POSITION                0x00000006
#define _IPC43_I2C1BCIP2_MASK                    0x00000040
#define _IPC43_I2C1BCIP2_LENGTH                  0x00000001

#define _IPC43_I2C2BCIP0_POSITION                0x00000008
#define _IPC43_I2C2BCIP0_MASK                    0x00000100
#define _IPC43_I2C2BCIP0_LENGTH                  0x00000001

#define _IPC43_I2C2BCIP1_POSITION                0x00000009
#define _IPC43_I2C2BCIP1_MASK                    0x00000200
#define _IPC43_I2C2BCIP1_LENGTH                  0x00000001

#define _IPC43_I2C2BCIP2_POSITION                0x0000000A
#define _IPC43_I2C2BCIP2_MASK                    0x00000400
#define _IPC43_I2C2BCIP2_LENGTH                  0x00000001

#define _IPC44_ADCMP1IP_POSITION                 0x00000004
#define _IPC44_ADCMP1IP_MASK                     0x00000070
#define _IPC44_ADCMP1IP_LENGTH                   0x00000003

#define _IPC44_ADCMP2IP_POSITION                 0x00000008
#define _IPC44_ADCMP2IP_MASK                     0x00000700
#define _IPC44_ADCMP2IP_LENGTH                   0x00000003

#define _IPC44_ADFLTR1IP_POSITION                0x0000000C
#define _IPC44_ADFLTR1IP_MASK                    0x00007000
#define _IPC44_ADFLTR1IP_LENGTH                  0x00000003

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

#define _IPC44_ADFLTR1IP0_POSITION               0x0000000C
#define _IPC44_ADFLTR1IP0_MASK                   0x00001000
#define _IPC44_ADFLTR1IP0_LENGTH                 0x00000001

#define _IPC44_ADFLTR1IP1_POSITION               0x0000000D
#define _IPC44_ADFLTR1IP1_MASK                   0x00002000
#define _IPC44_ADFLTR1IP1_LENGTH                 0x00000001

#define _IPC44_ADFLTR1IP2_POSITION               0x0000000E
#define _IPC44_ADFLTR1IP2_MASK                   0x00004000
#define _IPC44_ADFLTR1IP2_LENGTH                 0x00000001

#define _IPC45_ADFLTR2IP_POSITION                0x00000000
#define _IPC45_ADFLTR2IP_MASK                    0x00000007
#define _IPC45_ADFLTR2IP_LENGTH                  0x00000003

#define _IPC45_ADFLTR2IP0_POSITION               0x00000000
#define _IPC45_ADFLTR2IP0_MASK                   0x00000001
#define _IPC45_ADFLTR2IP0_LENGTH                 0x00000001

#define _IPC45_ADFLTR2IP1_POSITION               0x00000001
#define _IPC45_ADFLTR2IP1_MASK                   0x00000002
#define _IPC45_ADFLTR2IP1_LENGTH                 0x00000001

#define _IPC45_ADFLTR2IP2_POSITION               0x00000002
#define _IPC45_ADFLTR2IP2_MASK                   0x00000004
#define _IPC45_ADFLTR2IP2_LENGTH                 0x00000001

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

#define _OC2CON1_OCM_POSITION                    0x00000000
#define _OC2CON1_OCM_MASK                        0x00000007
#define _OC2CON1_OCM_LENGTH                      0x00000003

#define _OC2CON1_TRIGMODE_POSITION               0x00000003
#define _OC2CON1_TRIGMODE_MASK                   0x00000008
#define _OC2CON1_TRIGMODE_LENGTH                 0x00000001

#define _OC2CON1_OCFLTA_POSITION                 0x00000004
#define _OC2CON1_OCFLTA_MASK                     0x00000010
#define _OC2CON1_OCFLTA_LENGTH                   0x00000001

#define _OC2CON1_ENFLTA_POSITION                 0x00000007
#define _OC2CON1_ENFLTA_MASK                     0x00000080
#define _OC2CON1_ENFLTA_LENGTH                   0x00000001

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

#define _OC2CON1_ENFLT0_POSITION                 0x00000007
#define _OC2CON1_ENFLT0_MASK                     0x00000080
#define _OC2CON1_ENFLT0_LENGTH                   0x00000001

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

#define _OC3CON1_ENFLTA_POSITION                 0x00000007
#define _OC3CON1_ENFLTA_MASK                     0x00000080
#define _OC3CON1_ENFLTA_LENGTH                   0x00000001

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

#define _OC3CON1_ENFLT0_POSITION                 0x00000007
#define _OC3CON1_ENFLT0_MASK                     0x00000080
#define _OC3CON1_ENFLT0_LENGTH                   0x00000001

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

#define _OC4CON1_ENFLTA_POSITION                 0x00000007
#define _OC4CON1_ENFLTA_MASK                     0x00000080
#define _OC4CON1_ENFLTA_LENGTH                   0x00000001

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

#define _OC4CON1_ENFLT0_POSITION                 0x00000007
#define _OC4CON1_ENFLT0_MASK                     0x00000080
#define _OC4CON1_ENFLT0_LENGTH                   0x00000001

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

#define _PWMCON4_IUE_POSITION                    0x00000000
#define _PWMCON4_IUE_MASK                        0x00000001
#define _PWMCON4_IUE_LENGTH                      0x00000001

#define _PWMCON4_XPRES_POSITION                  0x00000001
#define _PWMCON4_XPRES_MASK                      0x00000002
#define _PWMCON4_XPRES_LENGTH                    0x00000001

#define _PWMCON4_CAM_POSITION                    0x00000002
#define _PWMCON4_CAM_MASK                        0x00000004
#define _PWMCON4_CAM_LENGTH                      0x00000001

#define _PWMCON4_MTBS_POSITION                   0x00000003
#define _PWMCON4_MTBS_MASK                       0x00000008
#define _PWMCON4_MTBS_LENGTH                     0x00000001

#define _PWMCON4_DTC_POSITION                    0x00000006
#define _PWMCON4_DTC_MASK                        0x000000C0
#define _PWMCON4_DTC_LENGTH                      0x00000002

#define _PWMCON4_MDCS_POSITION                   0x00000008
#define _PWMCON4_MDCS_MASK                       0x00000100
#define _PWMCON4_MDCS_LENGTH                     0x00000001

#define _PWMCON4_ITB_POSITION                    0x00000009
#define _PWMCON4_ITB_MASK                        0x00000200
#define _PWMCON4_ITB_LENGTH                      0x00000001

#define _PWMCON4_TRGIEN_POSITION                 0x0000000A
#define _PWMCON4_TRGIEN_MASK                     0x00000400
#define _PWMCON4_TRGIEN_LENGTH                   0x00000001

#define _PWMCON4_CLIEN_POSITION                  0x0000000B
#define _PWMCON4_CLIEN_MASK                      0x00000800
#define _PWMCON4_CLIEN_LENGTH                    0x00000001

#define _PWMCON4_FLTIEN_POSITION                 0x0000000C
#define _PWMCON4_FLTIEN_MASK                     0x00001000
#define _PWMCON4_FLTIEN_LENGTH                   0x00000001

#define _PWMCON4_TRGSTAT_POSITION                0x0000000D
#define _PWMCON4_TRGSTAT_MASK                    0x00002000
#define _PWMCON4_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON4_CLSTAT_POSITION                 0x0000000E
#define _PWMCON4_CLSTAT_MASK                     0x00004000
#define _PWMCON4_CLSTAT_LENGTH                   0x00000001

#define _PWMCON4_FLTSTAT_POSITION                0x0000000F
#define _PWMCON4_FLTSTAT_MASK                    0x00008000
#define _PWMCON4_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON4_DTC0_POSITION                   0x00000006
#define _PWMCON4_DTC0_MASK                       0x00000040
#define _PWMCON4_DTC0_LENGTH                     0x00000001

#define _PWMCON4_DTC1_POSITION                   0x00000007
#define _PWMCON4_DTC1_MASK                       0x00000080
#define _PWMCON4_DTC1_LENGTH                     0x00000001

#define _IOCON4_OSYNC_POSITION                   0x00000000
#define _IOCON4_OSYNC_MASK                       0x00000001
#define _IOCON4_OSYNC_LENGTH                     0x00000001

#define _IOCON4_SWAP_POSITION                    0x00000001
#define _IOCON4_SWAP_MASK                        0x00000002
#define _IOCON4_SWAP_LENGTH                      0x00000001

#define _IOCON4_CLDAT_POSITION                   0x00000002
#define _IOCON4_CLDAT_MASK                       0x0000000C
#define _IOCON4_CLDAT_LENGTH                     0x00000002

#define _IOCON4_FLTDAT_POSITION                  0x00000004
#define _IOCON4_FLTDAT_MASK                      0x00000030
#define _IOCON4_FLTDAT_LENGTH                    0x00000002

#define _IOCON4_OVRDAT_POSITION                  0x00000006
#define _IOCON4_OVRDAT_MASK                      0x000000C0
#define _IOCON4_OVRDAT_LENGTH                    0x00000002

#define _IOCON4_OVRENL_POSITION                  0x00000008
#define _IOCON4_OVRENL_MASK                      0x00000100
#define _IOCON4_OVRENL_LENGTH                    0x00000001

#define _IOCON4_OVRENH_POSITION                  0x00000009
#define _IOCON4_OVRENH_MASK                      0x00000200
#define _IOCON4_OVRENH_LENGTH                    0x00000001

#define _IOCON4_PMOD_POSITION                    0x0000000A
#define _IOCON4_PMOD_MASK                        0x00000C00
#define _IOCON4_PMOD_LENGTH                      0x00000002

#define _IOCON4_POLL_POSITION                    0x0000000C
#define _IOCON4_POLL_MASK                        0x00001000
#define _IOCON4_POLL_LENGTH                      0x00000001

#define _IOCON4_POLH_POSITION                    0x0000000D
#define _IOCON4_POLH_MASK                        0x00002000
#define _IOCON4_POLH_LENGTH                      0x00000001

#define _IOCON4_PENL_POSITION                    0x0000000E
#define _IOCON4_PENL_MASK                        0x00004000
#define _IOCON4_PENL_LENGTH                      0x00000001

#define _IOCON4_PENH_POSITION                    0x0000000F
#define _IOCON4_PENH_MASK                        0x00008000
#define _IOCON4_PENH_LENGTH                      0x00000001

#define _IOCON4_CLDAT0_POSITION                  0x00000002
#define _IOCON4_CLDAT0_MASK                      0x00000004
#define _IOCON4_CLDAT0_LENGTH                    0x00000001

#define _IOCON4_CLDAT1_POSITION                  0x00000003
#define _IOCON4_CLDAT1_MASK                      0x00000008
#define _IOCON4_CLDAT1_LENGTH                    0x00000001

#define _IOCON4_FLTDAT0_POSITION                 0x00000004
#define _IOCON4_FLTDAT0_MASK                     0x00000010
#define _IOCON4_FLTDAT0_LENGTH                   0x00000001

#define _IOCON4_FLTDAT1_POSITION                 0x00000005
#define _IOCON4_FLTDAT1_MASK                     0x00000020
#define _IOCON4_FLTDAT1_LENGTH                   0x00000001

#define _IOCON4_OVRDAT0_POSITION                 0x00000006
#define _IOCON4_OVRDAT0_MASK                     0x00000040
#define _IOCON4_OVRDAT0_LENGTH                   0x00000001

#define _IOCON4_OVRDAT1_POSITION                 0x00000007
#define _IOCON4_OVRDAT1_MASK                     0x00000080
#define _IOCON4_OVRDAT1_LENGTH                   0x00000001

#define _IOCON4_PMOD0_POSITION                   0x0000000A
#define _IOCON4_PMOD0_MASK                       0x00000400
#define _IOCON4_PMOD0_LENGTH                     0x00000001

#define _IOCON4_PMOD1_POSITION                   0x0000000B
#define _IOCON4_PMOD1_MASK                       0x00000800
#define _IOCON4_PMOD1_LENGTH                     0x00000001

#define _FCLCON4_FLTMOD_POSITION                 0x00000000
#define _FCLCON4_FLTMOD_MASK                     0x00000003
#define _FCLCON4_FLTMOD_LENGTH                   0x00000002

#define _FCLCON4_FLTPOL_POSITION                 0x00000002
#define _FCLCON4_FLTPOL_MASK                     0x00000004
#define _FCLCON4_FLTPOL_LENGTH                   0x00000001

#define _FCLCON4_FLTSRC_POSITION                 0x00000003
#define _FCLCON4_FLTSRC_MASK                     0x000000F8
#define _FCLCON4_FLTSRC_LENGTH                   0x00000005

#define _FCLCON4_CLMOD_POSITION                  0x00000008
#define _FCLCON4_CLMOD_MASK                      0x00000100
#define _FCLCON4_CLMOD_LENGTH                    0x00000001

#define _FCLCON4_CLPOL_POSITION                  0x00000009
#define _FCLCON4_CLPOL_MASK                      0x00000200
#define _FCLCON4_CLPOL_LENGTH                    0x00000001

#define _FCLCON4_CLSRC_POSITION                  0x0000000A
#define _FCLCON4_CLSRC_MASK                      0x00007C00
#define _FCLCON4_CLSRC_LENGTH                    0x00000005

#define _FCLCON4_IFLTMOD_POSITION                0x0000000F
#define _FCLCON4_IFLTMOD_MASK                    0x00008000
#define _FCLCON4_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON4_FLTMOD0_POSITION                0x00000000
#define _FCLCON4_FLTMOD0_MASK                    0x00000001
#define _FCLCON4_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON4_FLTMOD1_POSITION                0x00000001
#define _FCLCON4_FLTMOD1_MASK                    0x00000002
#define _FCLCON4_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC0_POSITION                0x00000003
#define _FCLCON4_FLTSRC0_MASK                    0x00000008
#define _FCLCON4_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC1_POSITION                0x00000004
#define _FCLCON4_FLTSRC1_MASK                    0x00000010
#define _FCLCON4_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC2_POSITION                0x00000005
#define _FCLCON4_FLTSRC2_MASK                    0x00000020
#define _FCLCON4_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC3_POSITION                0x00000006
#define _FCLCON4_FLTSRC3_MASK                    0x00000040
#define _FCLCON4_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON4_FLTSRC4_POSITION                0x00000007
#define _FCLCON4_FLTSRC4_MASK                    0x00000080
#define _FCLCON4_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON4_CLSRC0_POSITION                 0x0000000A
#define _FCLCON4_CLSRC0_MASK                     0x00000400
#define _FCLCON4_CLSRC0_LENGTH                   0x00000001

#define _FCLCON4_CLSRC1_POSITION                 0x0000000B
#define _FCLCON4_CLSRC1_MASK                     0x00000800
#define _FCLCON4_CLSRC1_LENGTH                   0x00000001

#define _FCLCON4_CLSRC2_POSITION                 0x0000000C
#define _FCLCON4_CLSRC2_MASK                     0x00001000
#define _FCLCON4_CLSRC2_LENGTH                   0x00000001

#define _FCLCON4_CLSRC3_POSITION                 0x0000000D
#define _FCLCON4_CLSRC3_MASK                     0x00002000
#define _FCLCON4_CLSRC3_LENGTH                   0x00000001

#define _FCLCON4_CLSRC4_POSITION                 0x0000000E
#define _FCLCON4_CLSRC4_MASK                     0x00004000
#define _FCLCON4_CLSRC4_LENGTH                   0x00000001

#define _TRIG4_TRGCMP_POSITION                   0x00000003
#define _TRIG4_TRGCMP_MASK                       0x0000FFF8
#define _TRIG4_TRGCMP_LENGTH                     0x0000000D

#define _TRIG4_TRGCMP0_POSITION                  0x00000003
#define _TRIG4_TRGCMP0_MASK                      0x00000008
#define _TRIG4_TRGCMP0_LENGTH                    0x00000001

#define _TRIG4_TRGCMP1_POSITION                  0x00000004
#define _TRIG4_TRGCMP1_MASK                      0x00000010
#define _TRIG4_TRGCMP1_LENGTH                    0x00000001

#define _TRIG4_TRGCMP2_POSITION                  0x00000005
#define _TRIG4_TRGCMP2_MASK                      0x00000020
#define _TRIG4_TRGCMP2_LENGTH                    0x00000001

#define _TRIG4_TRGCMP3_POSITION                  0x00000006
#define _TRIG4_TRGCMP3_MASK                      0x00000040
#define _TRIG4_TRGCMP3_LENGTH                    0x00000001

#define _TRIG4_TRGCMP4_POSITION                  0x00000007
#define _TRIG4_TRGCMP4_MASK                      0x00000080
#define _TRIG4_TRGCMP4_LENGTH                    0x00000001

#define _TRIG4_TRGCMP5_POSITION                  0x00000008
#define _TRIG4_TRGCMP5_MASK                      0x00000100
#define _TRIG4_TRGCMP5_LENGTH                    0x00000001

#define _TRIG4_TRGCMP6_POSITION                  0x00000009
#define _TRIG4_TRGCMP6_MASK                      0x00000200
#define _TRIG4_TRGCMP6_LENGTH                    0x00000001

#define _TRIG4_TRGCMP7_POSITION                  0x0000000A
#define _TRIG4_TRGCMP7_MASK                      0x00000400
#define _TRIG4_TRGCMP7_LENGTH                    0x00000001

#define _TRIG4_TRGCMP8_POSITION                  0x0000000B
#define _TRIG4_TRGCMP8_MASK                      0x00000800
#define _TRIG4_TRGCMP8_LENGTH                    0x00000001

#define _TRIG4_TRGCMP9_POSITION                  0x0000000C
#define _TRIG4_TRGCMP9_MASK                      0x00001000
#define _TRIG4_TRGCMP9_LENGTH                    0x00000001

#define _TRIG4_TRGCMP10_POSITION                 0x0000000D
#define _TRIG4_TRGCMP10_MASK                     0x00002000
#define _TRIG4_TRGCMP10_LENGTH                   0x00000001

#define _TRIG4_TRGCMP11_POSITION                 0x0000000E
#define _TRIG4_TRGCMP11_MASK                     0x00004000
#define _TRIG4_TRGCMP11_LENGTH                   0x00000001

#define _TRIG4_TRGCMP12_POSITION                 0x0000000F
#define _TRIG4_TRGCMP12_MASK                     0x00008000
#define _TRIG4_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON4_TRGSTRT_POSITION                0x00000000
#define _TRGCON4_TRGSTRT_MASK                    0x0000003F
#define _TRGCON4_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON4_DTM_POSITION                    0x00000007
#define _TRGCON4_DTM_MASK                        0x00000080
#define _TRGCON4_DTM_LENGTH                      0x00000001

#define _TRGCON4_TRGDIV_POSITION                 0x0000000C
#define _TRGCON4_TRGDIV_MASK                     0x0000F000
#define _TRGCON4_TRGDIV_LENGTH                   0x00000004

#define _TRGCON4_TRGSTRT0_POSITION               0x00000000
#define _TRGCON4_TRGSTRT0_MASK                   0x00000001
#define _TRGCON4_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT1_POSITION               0x00000001
#define _TRGCON4_TRGSTRT1_MASK                   0x00000002
#define _TRGCON4_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT2_POSITION               0x00000002
#define _TRGCON4_TRGSTRT2_MASK                   0x00000004
#define _TRGCON4_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT3_POSITION               0x00000003
#define _TRGCON4_TRGSTRT3_MASK                   0x00000008
#define _TRGCON4_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT4_POSITION               0x00000004
#define _TRGCON4_TRGSTRT4_MASK                   0x00000010
#define _TRGCON4_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON4_TRGSTRT5_POSITION               0x00000005
#define _TRGCON4_TRGSTRT5_MASK                   0x00000020
#define _TRGCON4_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON4_TRGDIV0_POSITION                0x0000000C
#define _TRGCON4_TRGDIV0_MASK                    0x00001000
#define _TRGCON4_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV1_POSITION                0x0000000D
#define _TRGCON4_TRGDIV1_MASK                    0x00002000
#define _TRGCON4_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV2_POSITION                0x0000000E
#define _TRGCON4_TRGDIV2_MASK                    0x00004000
#define _TRGCON4_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON4_TRGDIV3_POSITION                0x0000000F
#define _TRGCON4_TRGDIV3_MASK                    0x00008000
#define _TRGCON4_TRGDIV3_LENGTH                  0x00000001

#define _STRIG4_STRGCMP_POSITION                 0x00000003
#define _STRIG4_STRGCMP_MASK                     0x0000FFF8
#define _STRIG4_STRGCMP_LENGTH                   0x0000000D

#define _STRIG4_STRGCMP0_POSITION                0x00000003
#define _STRIG4_STRGCMP0_MASK                    0x00000008
#define _STRIG4_STRGCMP0_LENGTH                  0x00000001

#define _STRIG4_STRGCMP1_POSITION                0x00000004
#define _STRIG4_STRGCMP1_MASK                    0x00000010
#define _STRIG4_STRGCMP1_LENGTH                  0x00000001

#define _STRIG4_STRGCMP2_POSITION                0x00000005
#define _STRIG4_STRGCMP2_MASK                    0x00000020
#define _STRIG4_STRGCMP2_LENGTH                  0x00000001

#define _STRIG4_STRGCMP3_POSITION                0x00000006
#define _STRIG4_STRGCMP3_MASK                    0x00000040
#define _STRIG4_STRGCMP3_LENGTH                  0x00000001

#define _STRIG4_STRGCMP4_POSITION                0x00000007
#define _STRIG4_STRGCMP4_MASK                    0x00000080
#define _STRIG4_STRGCMP4_LENGTH                  0x00000001

#define _STRIG4_STRGCMP5_POSITION                0x00000008
#define _STRIG4_STRGCMP5_MASK                    0x00000100
#define _STRIG4_STRGCMP5_LENGTH                  0x00000001

#define _STRIG4_STRGCMP6_POSITION                0x00000009
#define _STRIG4_STRGCMP6_MASK                    0x00000200
#define _STRIG4_STRGCMP6_LENGTH                  0x00000001

#define _STRIG4_STRGCMP7_POSITION                0x0000000A
#define _STRIG4_STRGCMP7_MASK                    0x00000400
#define _STRIG4_STRGCMP7_LENGTH                  0x00000001

#define _STRIG4_STRGCMP8_POSITION                0x0000000B
#define _STRIG4_STRGCMP8_MASK                    0x00000800
#define _STRIG4_STRGCMP8_LENGTH                  0x00000001

#define _STRIG4_STRGCMP9_POSITION                0x0000000C
#define _STRIG4_STRGCMP9_MASK                    0x00001000
#define _STRIG4_STRGCMP9_LENGTH                  0x00000001

#define _STRIG4_STRGCMP10_POSITION               0x0000000D
#define _STRIG4_STRGCMP10_MASK                   0x00002000
#define _STRIG4_STRGCMP10_LENGTH                 0x00000001

#define _STRIG4_STRGCMP11_POSITION               0x0000000E
#define _STRIG4_STRGCMP11_MASK                   0x00004000
#define _STRIG4_STRGCMP11_LENGTH                 0x00000001

#define _STRIG4_STRGCMP12_POSITION               0x0000000F
#define _STRIG4_STRGCMP12_MASK                   0x00008000
#define _STRIG4_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP4_PWMCAP_POSITION                 0x00000003
#define _PWMCAP4_PWMCAP_MASK                     0x0000FFF8
#define _PWMCAP4_PWMCAP_LENGTH                   0x0000000D

#define _PWMCAP4_PWMCAP0_POSITION                0x00000003
#define _PWMCAP4_PWMCAP0_MASK                    0x00000008
#define _PWMCAP4_PWMCAP0_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP1_POSITION                0x00000004
#define _PWMCAP4_PWMCAP1_MASK                    0x00000010
#define _PWMCAP4_PWMCAP1_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP2_POSITION                0x00000005
#define _PWMCAP4_PWMCAP2_MASK                    0x00000020
#define _PWMCAP4_PWMCAP2_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP3_POSITION                0x00000006
#define _PWMCAP4_PWMCAP3_MASK                    0x00000040
#define _PWMCAP4_PWMCAP3_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP4_POSITION                0x00000007
#define _PWMCAP4_PWMCAP4_MASK                    0x00000080
#define _PWMCAP4_PWMCAP4_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP5_POSITION                0x00000008
#define _PWMCAP4_PWMCAP5_MASK                    0x00000100
#define _PWMCAP4_PWMCAP5_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP6_POSITION                0x00000009
#define _PWMCAP4_PWMCAP6_MASK                    0x00000200
#define _PWMCAP4_PWMCAP6_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP7_POSITION                0x0000000A
#define _PWMCAP4_PWMCAP7_MASK                    0x00000400
#define _PWMCAP4_PWMCAP7_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP8_POSITION                0x0000000B
#define _PWMCAP4_PWMCAP8_MASK                    0x00000800
#define _PWMCAP4_PWMCAP8_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP9_POSITION                0x0000000C
#define _PWMCAP4_PWMCAP9_MASK                    0x00001000
#define _PWMCAP4_PWMCAP9_LENGTH                  0x00000001

#define _PWMCAP4_PWMCAP10_POSITION               0x0000000D
#define _PWMCAP4_PWMCAP10_MASK                   0x00002000
#define _PWMCAP4_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP4_PWMCAP11_POSITION               0x0000000E
#define _PWMCAP4_PWMCAP11_MASK                   0x00004000
#define _PWMCAP4_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP4_PWMCAP12_POSITION               0x0000000F
#define _PWMCAP4_PWMCAP12_MASK                   0x00008000
#define _PWMCAP4_PWMCAP12_LENGTH                 0x00000001

#define _LEBCON4_BPLL_POSITION                   0x00000000
#define _LEBCON4_BPLL_MASK                       0x00000001
#define _LEBCON4_BPLL_LENGTH                     0x00000001

#define _LEBCON4_BPLH_POSITION                   0x00000001
#define _LEBCON4_BPLH_MASK                       0x00000002
#define _LEBCON4_BPLH_LENGTH                     0x00000001

#define _LEBCON4_BPHL_POSITION                   0x00000002
#define _LEBCON4_BPHL_MASK                       0x00000004
#define _LEBCON4_BPHL_LENGTH                     0x00000001

#define _LEBCON4_BPHH_POSITION                   0x00000003
#define _LEBCON4_BPHH_MASK                       0x00000008
#define _LEBCON4_BPHH_LENGTH                     0x00000001

#define _LEBCON4_BCL_POSITION                    0x00000004
#define _LEBCON4_BCL_MASK                        0x00000010
#define _LEBCON4_BCL_LENGTH                      0x00000001

#define _LEBCON4_BCH_POSITION                    0x00000005
#define _LEBCON4_BCH_MASK                        0x00000020
#define _LEBCON4_BCH_LENGTH                      0x00000001

#define _LEBCON4_CLLEBEN_POSITION                0x0000000A
#define _LEBCON4_CLLEBEN_MASK                    0x00000400
#define _LEBCON4_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON4_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON4_FLTLEBEN_MASK                   0x00000800
#define _LEBCON4_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON4_PLF_POSITION                    0x0000000C
#define _LEBCON4_PLF_MASK                        0x00001000
#define _LEBCON4_PLF_LENGTH                      0x00000001

#define _LEBCON4_PLR_POSITION                    0x0000000D
#define _LEBCON4_PLR_MASK                        0x00002000
#define _LEBCON4_PLR_LENGTH                      0x00000001

#define _LEBCON4_PHF_POSITION                    0x0000000E
#define _LEBCON4_PHF_MASK                        0x00004000
#define _LEBCON4_PHF_LENGTH                      0x00000001

#define _LEBCON4_PHR_POSITION                    0x0000000F
#define _LEBCON4_PHR_MASK                        0x00008000
#define _LEBCON4_PHR_LENGTH                      0x00000001

#define _LEBDLY4_LEB_POSITION                    0x00000003
#define _LEBDLY4_LEB_MASK                        0x00000FF8
#define _LEBDLY4_LEB_LENGTH                      0x00000009

#define _LEBDLY4_LEB0_POSITION                   0x00000003
#define _LEBDLY4_LEB0_MASK                       0x00000008
#define _LEBDLY4_LEB0_LENGTH                     0x00000001

#define _LEBDLY4_LEB1_POSITION                   0x00000004
#define _LEBDLY4_LEB1_MASK                       0x00000010
#define _LEBDLY4_LEB1_LENGTH                     0x00000001

#define _LEBDLY4_LEB2_POSITION                   0x00000005
#define _LEBDLY4_LEB2_MASK                       0x00000020
#define _LEBDLY4_LEB2_LENGTH                     0x00000001

#define _LEBDLY4_LEB3_POSITION                   0x00000006
#define _LEBDLY4_LEB3_MASK                       0x00000040
#define _LEBDLY4_LEB3_LENGTH                     0x00000001

#define _LEBDLY4_LEB4_POSITION                   0x00000007
#define _LEBDLY4_LEB4_MASK                       0x00000080
#define _LEBDLY4_LEB4_LENGTH                     0x00000001

#define _LEBDLY4_LEB5_POSITION                   0x00000008
#define _LEBDLY4_LEB5_MASK                       0x00000100
#define _LEBDLY4_LEB5_LENGTH                     0x00000001

#define _LEBDLY4_LEB6_POSITION                   0x00000009
#define _LEBDLY4_LEB6_MASK                       0x00000200
#define _LEBDLY4_LEB6_LENGTH                     0x00000001

#define _LEBDLY4_LEB7_POSITION                   0x0000000A
#define _LEBDLY4_LEB7_MASK                       0x00000400
#define _LEBDLY4_LEB7_LENGTH                     0x00000001

#define _LEBDLY4_LEB8_POSITION                   0x0000000B
#define _LEBDLY4_LEB8_MASK                       0x00000800
#define _LEBDLY4_LEB8_LENGTH                     0x00000001

#define _AUXCON4_CHOPLEN_POSITION                0x00000000
#define _AUXCON4_CHOPLEN_MASK                    0x00000001
#define _AUXCON4_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON4_CHOPHEN_POSITION                0x00000001
#define _AUXCON4_CHOPHEN_MASK                    0x00000002
#define _AUXCON4_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON4_CHOPSEL_POSITION                0x00000002
#define _AUXCON4_CHOPSEL_MASK                    0x0000003C
#define _AUXCON4_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON4_BLANKSEL_POSITION               0x00000008
#define _AUXCON4_BLANKSEL_MASK                   0x00000F00
#define _AUXCON4_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON4_HRDDIS_POSITION                 0x0000000E
#define _AUXCON4_HRDDIS_MASK                     0x00004000
#define _AUXCON4_HRDDIS_LENGTH                   0x00000001

#define _AUXCON4_HRPDIS_POSITION                 0x0000000F
#define _AUXCON4_HRPDIS_MASK                     0x00008000
#define _AUXCON4_HRPDIS_LENGTH                   0x00000001

#define _AUXCON4_CHOPSEL0_POSITION               0x00000002
#define _AUXCON4_CHOPSEL0_MASK                   0x00000004
#define _AUXCON4_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON4_CHOPSEL1_POSITION               0x00000003
#define _AUXCON4_CHOPSEL1_MASK                   0x00000008
#define _AUXCON4_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON4_CHOPSEL2_POSITION               0x00000004
#define _AUXCON4_CHOPSEL2_MASK                   0x00000010
#define _AUXCON4_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON4_CHOPSEL3_POSITION               0x00000005
#define _AUXCON4_CHOPSEL3_MASK                   0x00000020
#define _AUXCON4_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON4_BLANKSEL0_POSITION              0x00000008
#define _AUXCON4_BLANKSEL0_MASK                  0x00000100
#define _AUXCON4_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON4_BLANKSEL1_POSITION              0x00000009
#define _AUXCON4_BLANKSEL1_MASK                  0x00000200
#define _AUXCON4_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON4_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON4_BLANKSEL2_MASK                  0x00000400
#define _AUXCON4_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON4_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON4_BLANKSEL3_MASK                  0x00000800
#define _AUXCON4_BLANKSEL3_LENGTH                0x00000001

#define _PWMCON5_IUE_POSITION                    0x00000000
#define _PWMCON5_IUE_MASK                        0x00000001
#define _PWMCON5_IUE_LENGTH                      0x00000001

#define _PWMCON5_XPRES_POSITION                  0x00000001
#define _PWMCON5_XPRES_MASK                      0x00000002
#define _PWMCON5_XPRES_LENGTH                    0x00000001

#define _PWMCON5_CAM_POSITION                    0x00000002
#define _PWMCON5_CAM_MASK                        0x00000004
#define _PWMCON5_CAM_LENGTH                      0x00000001

#define _PWMCON5_MTBS_POSITION                   0x00000003
#define _PWMCON5_MTBS_MASK                       0x00000008
#define _PWMCON5_MTBS_LENGTH                     0x00000001

#define _PWMCON5_DTC_POSITION                    0x00000006
#define _PWMCON5_DTC_MASK                        0x000000C0
#define _PWMCON5_DTC_LENGTH                      0x00000002

#define _PWMCON5_MDCS_POSITION                   0x00000008
#define _PWMCON5_MDCS_MASK                       0x00000100
#define _PWMCON5_MDCS_LENGTH                     0x00000001

#define _PWMCON5_ITB_POSITION                    0x00000009
#define _PWMCON5_ITB_MASK                        0x00000200
#define _PWMCON5_ITB_LENGTH                      0x00000001

#define _PWMCON5_TRGIEN_POSITION                 0x0000000A
#define _PWMCON5_TRGIEN_MASK                     0x00000400
#define _PWMCON5_TRGIEN_LENGTH                   0x00000001

#define _PWMCON5_CLIEN_POSITION                  0x0000000B
#define _PWMCON5_CLIEN_MASK                      0x00000800
#define _PWMCON5_CLIEN_LENGTH                    0x00000001

#define _PWMCON5_FLTIEN_POSITION                 0x0000000C
#define _PWMCON5_FLTIEN_MASK                     0x00001000
#define _PWMCON5_FLTIEN_LENGTH                   0x00000001

#define _PWMCON5_TRGSTAT_POSITION                0x0000000D
#define _PWMCON5_TRGSTAT_MASK                    0x00002000
#define _PWMCON5_TRGSTAT_LENGTH                  0x00000001

#define _PWMCON5_CLSTAT_POSITION                 0x0000000E
#define _PWMCON5_CLSTAT_MASK                     0x00004000
#define _PWMCON5_CLSTAT_LENGTH                   0x00000001

#define _PWMCON5_FLTSTAT_POSITION                0x0000000F
#define _PWMCON5_FLTSTAT_MASK                    0x00008000
#define _PWMCON5_FLTSTAT_LENGTH                  0x00000001

#define _PWMCON5_DTC0_POSITION                   0x00000006
#define _PWMCON5_DTC0_MASK                       0x00000040
#define _PWMCON5_DTC0_LENGTH                     0x00000001

#define _PWMCON5_DTC1_POSITION                   0x00000007
#define _PWMCON5_DTC1_MASK                       0x00000080
#define _PWMCON5_DTC1_LENGTH                     0x00000001

#define _IOCON5_OSYNC_POSITION                   0x00000000
#define _IOCON5_OSYNC_MASK                       0x00000001
#define _IOCON5_OSYNC_LENGTH                     0x00000001

#define _IOCON5_SWAP_POSITION                    0x00000001
#define _IOCON5_SWAP_MASK                        0x00000002
#define _IOCON5_SWAP_LENGTH                      0x00000001

#define _IOCON5_CLDAT_POSITION                   0x00000002
#define _IOCON5_CLDAT_MASK                       0x0000000C
#define _IOCON5_CLDAT_LENGTH                     0x00000002

#define _IOCON5_FLTDAT_POSITION                  0x00000004
#define _IOCON5_FLTDAT_MASK                      0x00000030
#define _IOCON5_FLTDAT_LENGTH                    0x00000002

#define _IOCON5_OVRDAT_POSITION                  0x00000006
#define _IOCON5_OVRDAT_MASK                      0x000000C0
#define _IOCON5_OVRDAT_LENGTH                    0x00000002

#define _IOCON5_OVRENL_POSITION                  0x00000008
#define _IOCON5_OVRENL_MASK                      0x00000100
#define _IOCON5_OVRENL_LENGTH                    0x00000001

#define _IOCON5_OVRENH_POSITION                  0x00000009
#define _IOCON5_OVRENH_MASK                      0x00000200
#define _IOCON5_OVRENH_LENGTH                    0x00000001

#define _IOCON5_PMOD_POSITION                    0x0000000A
#define _IOCON5_PMOD_MASK                        0x00000C00
#define _IOCON5_PMOD_LENGTH                      0x00000002

#define _IOCON5_POLL_POSITION                    0x0000000C
#define _IOCON5_POLL_MASK                        0x00001000
#define _IOCON5_POLL_LENGTH                      0x00000001

#define _IOCON5_POLH_POSITION                    0x0000000D
#define _IOCON5_POLH_MASK                        0x00002000
#define _IOCON5_POLH_LENGTH                      0x00000001

#define _IOCON5_PENL_POSITION                    0x0000000E
#define _IOCON5_PENL_MASK                        0x00004000
#define _IOCON5_PENL_LENGTH                      0x00000001

#define _IOCON5_PENH_POSITION                    0x0000000F
#define _IOCON5_PENH_MASK                        0x00008000
#define _IOCON5_PENH_LENGTH                      0x00000001

#define _IOCON5_CLDAT0_POSITION                  0x00000002
#define _IOCON5_CLDAT0_MASK                      0x00000004
#define _IOCON5_CLDAT0_LENGTH                    0x00000001

#define _IOCON5_CLDAT1_POSITION                  0x00000003
#define _IOCON5_CLDAT1_MASK                      0x00000008
#define _IOCON5_CLDAT1_LENGTH                    0x00000001

#define _IOCON5_FLTDAT0_POSITION                 0x00000004
#define _IOCON5_FLTDAT0_MASK                     0x00000010
#define _IOCON5_FLTDAT0_LENGTH                   0x00000001

#define _IOCON5_FLTDAT1_POSITION                 0x00000005
#define _IOCON5_FLTDAT1_MASK                     0x00000020
#define _IOCON5_FLTDAT1_LENGTH                   0x00000001

#define _IOCON5_OVRDAT0_POSITION                 0x00000006
#define _IOCON5_OVRDAT0_MASK                     0x00000040
#define _IOCON5_OVRDAT0_LENGTH                   0x00000001

#define _IOCON5_OVRDAT1_POSITION                 0x00000007
#define _IOCON5_OVRDAT1_MASK                     0x00000080
#define _IOCON5_OVRDAT1_LENGTH                   0x00000001

#define _IOCON5_PMOD0_POSITION                   0x0000000A
#define _IOCON5_PMOD0_MASK                       0x00000400
#define _IOCON5_PMOD0_LENGTH                     0x00000001

#define _IOCON5_PMOD1_POSITION                   0x0000000B
#define _IOCON5_PMOD1_MASK                       0x00000800
#define _IOCON5_PMOD1_LENGTH                     0x00000001

#define _FCLCON5_FLTMOD_POSITION                 0x00000000
#define _FCLCON5_FLTMOD_MASK                     0x00000003
#define _FCLCON5_FLTMOD_LENGTH                   0x00000002

#define _FCLCON5_FLTPOL_POSITION                 0x00000002
#define _FCLCON5_FLTPOL_MASK                     0x00000004
#define _FCLCON5_FLTPOL_LENGTH                   0x00000001

#define _FCLCON5_FLTSRC_POSITION                 0x00000003
#define _FCLCON5_FLTSRC_MASK                     0x000000F8
#define _FCLCON5_FLTSRC_LENGTH                   0x00000005

#define _FCLCON5_CLMOD_POSITION                  0x00000008
#define _FCLCON5_CLMOD_MASK                      0x00000100
#define _FCLCON5_CLMOD_LENGTH                    0x00000001

#define _FCLCON5_CLPOL_POSITION                  0x00000009
#define _FCLCON5_CLPOL_MASK                      0x00000200
#define _FCLCON5_CLPOL_LENGTH                    0x00000001

#define _FCLCON5_CLSRC_POSITION                  0x0000000A
#define _FCLCON5_CLSRC_MASK                      0x00007C00
#define _FCLCON5_CLSRC_LENGTH                    0x00000005

#define _FCLCON5_IFLTMOD_POSITION                0x0000000F
#define _FCLCON5_IFLTMOD_MASK                    0x00008000
#define _FCLCON5_IFLTMOD_LENGTH                  0x00000001

#define _FCLCON5_FLTMOD0_POSITION                0x00000000
#define _FCLCON5_FLTMOD0_MASK                    0x00000001
#define _FCLCON5_FLTMOD0_LENGTH                  0x00000001

#define _FCLCON5_FLTMOD1_POSITION                0x00000001
#define _FCLCON5_FLTMOD1_MASK                    0x00000002
#define _FCLCON5_FLTMOD1_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC0_POSITION                0x00000003
#define _FCLCON5_FLTSRC0_MASK                    0x00000008
#define _FCLCON5_FLTSRC0_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC1_POSITION                0x00000004
#define _FCLCON5_FLTSRC1_MASK                    0x00000010
#define _FCLCON5_FLTSRC1_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC2_POSITION                0x00000005
#define _FCLCON5_FLTSRC2_MASK                    0x00000020
#define _FCLCON5_FLTSRC2_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC3_POSITION                0x00000006
#define _FCLCON5_FLTSRC3_MASK                    0x00000040
#define _FCLCON5_FLTSRC3_LENGTH                  0x00000001

#define _FCLCON5_FLTSRC4_POSITION                0x00000007
#define _FCLCON5_FLTSRC4_MASK                    0x00000080
#define _FCLCON5_FLTSRC4_LENGTH                  0x00000001

#define _FCLCON5_CLSRC0_POSITION                 0x0000000A
#define _FCLCON5_CLSRC0_MASK                     0x00000400
#define _FCLCON5_CLSRC0_LENGTH                   0x00000001

#define _FCLCON5_CLSRC1_POSITION                 0x0000000B
#define _FCLCON5_CLSRC1_MASK                     0x00000800
#define _FCLCON5_CLSRC1_LENGTH                   0x00000001

#define _FCLCON5_CLSRC2_POSITION                 0x0000000C
#define _FCLCON5_CLSRC2_MASK                     0x00001000
#define _FCLCON5_CLSRC2_LENGTH                   0x00000001

#define _FCLCON5_CLSRC3_POSITION                 0x0000000D
#define _FCLCON5_CLSRC3_MASK                     0x00002000
#define _FCLCON5_CLSRC3_LENGTH                   0x00000001

#define _FCLCON5_CLSRC4_POSITION                 0x0000000E
#define _FCLCON5_CLSRC4_MASK                     0x00004000
#define _FCLCON5_CLSRC4_LENGTH                   0x00000001

#define _TRIG5_TRGCMP_POSITION                   0x00000003
#define _TRIG5_TRGCMP_MASK                       0x0000FFF8
#define _TRIG5_TRGCMP_LENGTH                     0x0000000D

#define _TRIG5_TRGCMP0_POSITION                  0x00000003
#define _TRIG5_TRGCMP0_MASK                      0x00000008
#define _TRIG5_TRGCMP0_LENGTH                    0x00000001

#define _TRIG5_TRGCMP1_POSITION                  0x00000004
#define _TRIG5_TRGCMP1_MASK                      0x00000010
#define _TRIG5_TRGCMP1_LENGTH                    0x00000001

#define _TRIG5_TRGCMP2_POSITION                  0x00000005
#define _TRIG5_TRGCMP2_MASK                      0x00000020
#define _TRIG5_TRGCMP2_LENGTH                    0x00000001

#define _TRIG5_TRGCMP3_POSITION                  0x00000006
#define _TRIG5_TRGCMP3_MASK                      0x00000040
#define _TRIG5_TRGCMP3_LENGTH                    0x00000001

#define _TRIG5_TRGCMP4_POSITION                  0x00000007
#define _TRIG5_TRGCMP4_MASK                      0x00000080
#define _TRIG5_TRGCMP4_LENGTH                    0x00000001

#define _TRIG5_TRGCMP5_POSITION                  0x00000008
#define _TRIG5_TRGCMP5_MASK                      0x00000100
#define _TRIG5_TRGCMP5_LENGTH                    0x00000001

#define _TRIG5_TRGCMP6_POSITION                  0x00000009
#define _TRIG5_TRGCMP6_MASK                      0x00000200
#define _TRIG5_TRGCMP6_LENGTH                    0x00000001

#define _TRIG5_TRGCMP7_POSITION                  0x0000000A
#define _TRIG5_TRGCMP7_MASK                      0x00000400
#define _TRIG5_TRGCMP7_LENGTH                    0x00000001

#define _TRIG5_TRGCMP8_POSITION                  0x0000000B
#define _TRIG5_TRGCMP8_MASK                      0x00000800
#define _TRIG5_TRGCMP8_LENGTH                    0x00000001

#define _TRIG5_TRGCMP9_POSITION                  0x0000000C
#define _TRIG5_TRGCMP9_MASK                      0x00001000
#define _TRIG5_TRGCMP9_LENGTH                    0x00000001

#define _TRIG5_TRGCMP10_POSITION                 0x0000000D
#define _TRIG5_TRGCMP10_MASK                     0x00002000
#define _TRIG5_TRGCMP10_LENGTH                   0x00000001

#define _TRIG5_TRGCMP11_POSITION                 0x0000000E
#define _TRIG5_TRGCMP11_MASK                     0x00004000
#define _TRIG5_TRGCMP11_LENGTH                   0x00000001

#define _TRIG5_TRGCMP12_POSITION                 0x0000000F
#define _TRIG5_TRGCMP12_MASK                     0x00008000
#define _TRIG5_TRGCMP12_LENGTH                   0x00000001

#define _TRGCON5_TRGSTRT_POSITION                0x00000000
#define _TRGCON5_TRGSTRT_MASK                    0x0000003F
#define _TRGCON5_TRGSTRT_LENGTH                  0x00000006

#define _TRGCON5_DTM_POSITION                    0x00000007
#define _TRGCON5_DTM_MASK                        0x00000080
#define _TRGCON5_DTM_LENGTH                      0x00000001

#define _TRGCON5_TRGDIV_POSITION                 0x0000000C
#define _TRGCON5_TRGDIV_MASK                     0x0000F000
#define _TRGCON5_TRGDIV_LENGTH                   0x00000004

#define _TRGCON5_TRGSTRT0_POSITION               0x00000000
#define _TRGCON5_TRGSTRT0_MASK                   0x00000001
#define _TRGCON5_TRGSTRT0_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT1_POSITION               0x00000001
#define _TRGCON5_TRGSTRT1_MASK                   0x00000002
#define _TRGCON5_TRGSTRT1_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT2_POSITION               0x00000002
#define _TRGCON5_TRGSTRT2_MASK                   0x00000004
#define _TRGCON5_TRGSTRT2_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT3_POSITION               0x00000003
#define _TRGCON5_TRGSTRT3_MASK                   0x00000008
#define _TRGCON5_TRGSTRT3_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT4_POSITION               0x00000004
#define _TRGCON5_TRGSTRT4_MASK                   0x00000010
#define _TRGCON5_TRGSTRT4_LENGTH                 0x00000001

#define _TRGCON5_TRGSTRT5_POSITION               0x00000005
#define _TRGCON5_TRGSTRT5_MASK                   0x00000020
#define _TRGCON5_TRGSTRT5_LENGTH                 0x00000001

#define _TRGCON5_TRGDIV0_POSITION                0x0000000C
#define _TRGCON5_TRGDIV0_MASK                    0x00001000
#define _TRGCON5_TRGDIV0_LENGTH                  0x00000001

#define _TRGCON5_TRGDIV1_POSITION                0x0000000D
#define _TRGCON5_TRGDIV1_MASK                    0x00002000
#define _TRGCON5_TRGDIV1_LENGTH                  0x00000001

#define _TRGCON5_TRGDIV2_POSITION                0x0000000E
#define _TRGCON5_TRGDIV2_MASK                    0x00004000
#define _TRGCON5_TRGDIV2_LENGTH                  0x00000001

#define _TRGCON5_TRGDIV3_POSITION                0x0000000F
#define _TRGCON5_TRGDIV3_MASK                    0x00008000
#define _TRGCON5_TRGDIV3_LENGTH                  0x00000001

#define _STRIG5_STRGCMP_POSITION                 0x00000003
#define _STRIG5_STRGCMP_MASK                     0x0000FFF8
#define _STRIG5_STRGCMP_LENGTH                   0x0000000D

#define _STRIG5_STRGCMP0_POSITION                0x00000003
#define _STRIG5_STRGCMP0_MASK                    0x00000008
#define _STRIG5_STRGCMP0_LENGTH                  0x00000001

#define _STRIG5_STRGCMP1_POSITION                0x00000004
#define _STRIG5_STRGCMP1_MASK                    0x00000010
#define _STRIG5_STRGCMP1_LENGTH                  0x00000001

#define _STRIG5_STRGCMP2_POSITION                0x00000005
#define _STRIG5_STRGCMP2_MASK                    0x00000020
#define _STRIG5_STRGCMP2_LENGTH                  0x00000001

#define _STRIG5_STRGCMP3_POSITION                0x00000006
#define _STRIG5_STRGCMP3_MASK                    0x00000040
#define _STRIG5_STRGCMP3_LENGTH                  0x00000001

#define _STRIG5_STRGCMP4_POSITION                0x00000007
#define _STRIG5_STRGCMP4_MASK                    0x00000080
#define _STRIG5_STRGCMP4_LENGTH                  0x00000001

#define _STRIG5_STRGCMP5_POSITION                0x00000008
#define _STRIG5_STRGCMP5_MASK                    0x00000100
#define _STRIG5_STRGCMP5_LENGTH                  0x00000001

#define _STRIG5_STRGCMP6_POSITION                0x00000009
#define _STRIG5_STRGCMP6_MASK                    0x00000200
#define _STRIG5_STRGCMP6_LENGTH                  0x00000001

#define _STRIG5_STRGCMP7_POSITION                0x0000000A
#define _STRIG5_STRGCMP7_MASK                    0x00000400
#define _STRIG5_STRGCMP7_LENGTH                  0x00000001

#define _STRIG5_STRGCMP8_POSITION                0x0000000B
#define _STRIG5_STRGCMP8_MASK                    0x00000800
#define _STRIG5_STRGCMP8_LENGTH                  0x00000001

#define _STRIG5_STRGCMP9_POSITION                0x0000000C
#define _STRIG5_STRGCMP9_MASK                    0x00001000
#define _STRIG5_STRGCMP9_LENGTH                  0x00000001

#define _STRIG5_STRGCMP10_POSITION               0x0000000D
#define _STRIG5_STRGCMP10_MASK                   0x00002000
#define _STRIG5_STRGCMP10_LENGTH                 0x00000001

#define _STRIG5_STRGCMP11_POSITION               0x0000000E
#define _STRIG5_STRGCMP11_MASK                   0x00004000
#define _STRIG5_STRGCMP11_LENGTH                 0x00000001

#define _STRIG5_STRGCMP12_POSITION               0x0000000F
#define _STRIG5_STRGCMP12_MASK                   0x00008000
#define _STRIG5_STRGCMP12_LENGTH                 0x00000001

#define _PWMCAP5_PWMCAP_POSITION                 0x00000003
#define _PWMCAP5_PWMCAP_MASK                     0x0000FFF8
#define _PWMCAP5_PWMCAP_LENGTH                   0x0000000D

#define _PWMCAP5_PWMCAP0_POSITION                0x00000003
#define _PWMCAP5_PWMCAP0_MASK                    0x00000008
#define _PWMCAP5_PWMCAP0_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP1_POSITION                0x00000004
#define _PWMCAP5_PWMCAP1_MASK                    0x00000010
#define _PWMCAP5_PWMCAP1_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP2_POSITION                0x00000005
#define _PWMCAP5_PWMCAP2_MASK                    0x00000020
#define _PWMCAP5_PWMCAP2_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP3_POSITION                0x00000006
#define _PWMCAP5_PWMCAP3_MASK                    0x00000040
#define _PWMCAP5_PWMCAP3_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP4_POSITION                0x00000007
#define _PWMCAP5_PWMCAP4_MASK                    0x00000080
#define _PWMCAP5_PWMCAP4_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP5_POSITION                0x00000008
#define _PWMCAP5_PWMCAP5_MASK                    0x00000100
#define _PWMCAP5_PWMCAP5_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP6_POSITION                0x00000009
#define _PWMCAP5_PWMCAP6_MASK                    0x00000200
#define _PWMCAP5_PWMCAP6_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP7_POSITION                0x0000000A
#define _PWMCAP5_PWMCAP7_MASK                    0x00000400
#define _PWMCAP5_PWMCAP7_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP8_POSITION                0x0000000B
#define _PWMCAP5_PWMCAP8_MASK                    0x00000800
#define _PWMCAP5_PWMCAP8_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP9_POSITION                0x0000000C
#define _PWMCAP5_PWMCAP9_MASK                    0x00001000
#define _PWMCAP5_PWMCAP9_LENGTH                  0x00000001

#define _PWMCAP5_PWMCAP10_POSITION               0x0000000D
#define _PWMCAP5_PWMCAP10_MASK                   0x00002000
#define _PWMCAP5_PWMCAP10_LENGTH                 0x00000001

#define _PWMCAP5_PWMCAP11_POSITION               0x0000000E
#define _PWMCAP5_PWMCAP11_MASK                   0x00004000
#define _PWMCAP5_PWMCAP11_LENGTH                 0x00000001

#define _PWMCAP5_PWMCAP12_POSITION               0x0000000F
#define _PWMCAP5_PWMCAP12_MASK                   0x00008000
#define _PWMCAP5_PWMCAP12_LENGTH                 0x00000001

#define _LEBCON5_BPLL_POSITION                   0x00000000
#define _LEBCON5_BPLL_MASK                       0x00000001
#define _LEBCON5_BPLL_LENGTH                     0x00000001

#define _LEBCON5_BPLH_POSITION                   0x00000001
#define _LEBCON5_BPLH_MASK                       0x00000002
#define _LEBCON5_BPLH_LENGTH                     0x00000001

#define _LEBCON5_BPHL_POSITION                   0x00000002
#define _LEBCON5_BPHL_MASK                       0x00000004
#define _LEBCON5_BPHL_LENGTH                     0x00000001

#define _LEBCON5_BPHH_POSITION                   0x00000003
#define _LEBCON5_BPHH_MASK                       0x00000008
#define _LEBCON5_BPHH_LENGTH                     0x00000001

#define _LEBCON5_BCL_POSITION                    0x00000004
#define _LEBCON5_BCL_MASK                        0x00000010
#define _LEBCON5_BCL_LENGTH                      0x00000001

#define _LEBCON5_BCH_POSITION                    0x00000005
#define _LEBCON5_BCH_MASK                        0x00000020
#define _LEBCON5_BCH_LENGTH                      0x00000001

#define _LEBCON5_CLLEBEN_POSITION                0x0000000A
#define _LEBCON5_CLLEBEN_MASK                    0x00000400
#define _LEBCON5_CLLEBEN_LENGTH                  0x00000001

#define _LEBCON5_FLTLEBEN_POSITION               0x0000000B
#define _LEBCON5_FLTLEBEN_MASK                   0x00000800
#define _LEBCON5_FLTLEBEN_LENGTH                 0x00000001

#define _LEBCON5_PLF_POSITION                    0x0000000C
#define _LEBCON5_PLF_MASK                        0x00001000
#define _LEBCON5_PLF_LENGTH                      0x00000001

#define _LEBCON5_PLR_POSITION                    0x0000000D
#define _LEBCON5_PLR_MASK                        0x00002000
#define _LEBCON5_PLR_LENGTH                      0x00000001

#define _LEBCON5_PHF_POSITION                    0x0000000E
#define _LEBCON5_PHF_MASK                        0x00004000
#define _LEBCON5_PHF_LENGTH                      0x00000001

#define _LEBCON5_PHR_POSITION                    0x0000000F
#define _LEBCON5_PHR_MASK                        0x00008000
#define _LEBCON5_PHR_LENGTH                      0x00000001

#define _LEBDLY5_LEB_POSITION                    0x00000003
#define _LEBDLY5_LEB_MASK                        0x00000FF8
#define _LEBDLY5_LEB_LENGTH                      0x00000009

#define _LEBDLY5_LEB0_POSITION                   0x00000003
#define _LEBDLY5_LEB0_MASK                       0x00000008
#define _LEBDLY5_LEB0_LENGTH                     0x00000001

#define _LEBDLY5_LEB1_POSITION                   0x00000004
#define _LEBDLY5_LEB1_MASK                       0x00000010
#define _LEBDLY5_LEB1_LENGTH                     0x00000001

#define _LEBDLY5_LEB2_POSITION                   0x00000005
#define _LEBDLY5_LEB2_MASK                       0x00000020
#define _LEBDLY5_LEB2_LENGTH                     0x00000001

#define _LEBDLY5_LEB3_POSITION                   0x00000006
#define _LEBDLY5_LEB3_MASK                       0x00000040
#define _LEBDLY5_LEB3_LENGTH                     0x00000001

#define _LEBDLY5_LEB4_POSITION                   0x00000007
#define _LEBDLY5_LEB4_MASK                       0x00000080
#define _LEBDLY5_LEB4_LENGTH                     0x00000001

#define _LEBDLY5_LEB5_POSITION                   0x00000008
#define _LEBDLY5_LEB5_MASK                       0x00000100
#define _LEBDLY5_LEB5_LENGTH                     0x00000001

#define _LEBDLY5_LEB6_POSITION                   0x00000009
#define _LEBDLY5_LEB6_MASK                       0x00000200
#define _LEBDLY5_LEB6_LENGTH                     0x00000001

#define _LEBDLY5_LEB7_POSITION                   0x0000000A
#define _LEBDLY5_LEB7_MASK                       0x00000400
#define _LEBDLY5_LEB7_LENGTH                     0x00000001

#define _LEBDLY5_LEB8_POSITION                   0x0000000B
#define _LEBDLY5_LEB8_MASK                       0x00000800
#define _LEBDLY5_LEB8_LENGTH                     0x00000001

#define _AUXCON5_CHOPLEN_POSITION                0x00000000
#define _AUXCON5_CHOPLEN_MASK                    0x00000001
#define _AUXCON5_CHOPLEN_LENGTH                  0x00000001

#define _AUXCON5_CHOPHEN_POSITION                0x00000001
#define _AUXCON5_CHOPHEN_MASK                    0x00000002
#define _AUXCON5_CHOPHEN_LENGTH                  0x00000001

#define _AUXCON5_CHOPSEL_POSITION                0x00000002
#define _AUXCON5_CHOPSEL_MASK                    0x0000003C
#define _AUXCON5_CHOPSEL_LENGTH                  0x00000004

#define _AUXCON5_BLANKSEL_POSITION               0x00000008
#define _AUXCON5_BLANKSEL_MASK                   0x00000F00
#define _AUXCON5_BLANKSEL_LENGTH                 0x00000004

#define _AUXCON5_HRDDIS_POSITION                 0x0000000E
#define _AUXCON5_HRDDIS_MASK                     0x00004000
#define _AUXCON5_HRDDIS_LENGTH                   0x00000001

#define _AUXCON5_HRPDIS_POSITION                 0x0000000F
#define _AUXCON5_HRPDIS_MASK                     0x00008000
#define _AUXCON5_HRPDIS_LENGTH                   0x00000001

#define _AUXCON5_CHOPSEL0_POSITION               0x00000002
#define _AUXCON5_CHOPSEL0_MASK                   0x00000004
#define _AUXCON5_CHOPSEL0_LENGTH                 0x00000001

#define _AUXCON5_CHOPSEL1_POSITION               0x00000003
#define _AUXCON5_CHOPSEL1_MASK                   0x00000008
#define _AUXCON5_CHOPSEL1_LENGTH                 0x00000001

#define _AUXCON5_CHOPSEL2_POSITION               0x00000004
#define _AUXCON5_CHOPSEL2_MASK                   0x00000010
#define _AUXCON5_CHOPSEL2_LENGTH                 0x00000001

#define _AUXCON5_CHOPSEL3_POSITION               0x00000005
#define _AUXCON5_CHOPSEL3_MASK                   0x00000020
#define _AUXCON5_CHOPSEL3_LENGTH                 0x00000001

#define _AUXCON5_BLANKSEL0_POSITION              0x00000008
#define _AUXCON5_BLANKSEL0_MASK                  0x00000100
#define _AUXCON5_BLANKSEL0_LENGTH                0x00000001

#define _AUXCON5_BLANKSEL1_POSITION              0x00000009
#define _AUXCON5_BLANKSEL1_MASK                  0x00000200
#define _AUXCON5_BLANKSEL1_LENGTH                0x00000001

#define _AUXCON5_BLANKSEL2_POSITION              0x0000000A
#define _AUXCON5_BLANKSEL2_MASK                  0x00000400
#define _AUXCON5_BLANKSEL2_LENGTH                0x00000001

#define _AUXCON5_BLANKSEL3_POSITION              0x0000000B
#define _AUXCON5_BLANKSEL3_MASK                  0x00000800
#define _AUXCON5_BLANKSEL3_LENGTH                0x00000001

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

#define _TRISC_TRISC0_POSITION                   0x00000000
#define _TRISC_TRISC0_MASK                       0x00000001
#define _TRISC_TRISC0_LENGTH                     0x00000001

#define _TRISC_TRISC1_POSITION                   0x00000001
#define _TRISC_TRISC1_MASK                       0x00000002
#define _TRISC_TRISC1_LENGTH                     0x00000001

#define _TRISC_TRISC2_POSITION                   0x00000002
#define _TRISC_TRISC2_MASK                       0x00000004
#define _TRISC_TRISC2_LENGTH                     0x00000001

#define _TRISC_TRISC3_POSITION                   0x00000003
#define _TRISC_TRISC3_MASK                       0x00000008
#define _TRISC_TRISC3_LENGTH                     0x00000001

#define _TRISC_TRISC4_POSITION                   0x00000004
#define _TRISC_TRISC4_MASK                       0x00000010
#define _TRISC_TRISC4_LENGTH                     0x00000001

#define _TRISC_TRISC5_POSITION                   0x00000005
#define _TRISC_TRISC5_MASK                       0x00000020
#define _TRISC_TRISC5_LENGTH                     0x00000001

#define _TRISC_TRISC6_POSITION                   0x00000006
#define _TRISC_TRISC6_MASK                       0x00000040
#define _TRISC_TRISC6_LENGTH                     0x00000001

#define _TRISC_TRISC7_POSITION                   0x00000007
#define _TRISC_TRISC7_MASK                       0x00000080
#define _TRISC_TRISC7_LENGTH                     0x00000001

#define _TRISC_TRISC8_POSITION                   0x00000008
#define _TRISC_TRISC8_MASK                       0x00000100
#define _TRISC_TRISC8_LENGTH                     0x00000001

#define _TRISC_TRISC9_POSITION                   0x00000009
#define _TRISC_TRISC9_MASK                       0x00000200
#define _TRISC_TRISC9_LENGTH                     0x00000001

#define _TRISC_TRISC10_POSITION                  0x0000000A
#define _TRISC_TRISC10_MASK                      0x00000400
#define _TRISC_TRISC10_LENGTH                    0x00000001

#define _TRISC_TRISC11_POSITION                  0x0000000B
#define _TRISC_TRISC11_MASK                      0x00000800
#define _TRISC_TRISC11_LENGTH                    0x00000001

#define _TRISC_TRISC12_POSITION                  0x0000000C
#define _TRISC_TRISC12_MASK                      0x00001000
#define _TRISC_TRISC12_LENGTH                    0x00000001

#define _TRISC_TRISC13_POSITION                  0x0000000D
#define _TRISC_TRISC13_MASK                      0x00002000
#define _TRISC_TRISC13_LENGTH                    0x00000001

#define _PORTC_RC0_POSITION                      0x00000000
#define _PORTC_RC0_MASK                          0x00000001
#define _PORTC_RC0_LENGTH                        0x00000001

#define _PORTC_RC1_POSITION                      0x00000001
#define _PORTC_RC1_MASK                          0x00000002
#define _PORTC_RC1_LENGTH                        0x00000001

#define _PORTC_RC2_POSITION                      0x00000002
#define _PORTC_RC2_MASK                          0x00000004
#define _PORTC_RC2_LENGTH                        0x00000001

#define _PORTC_RC3_POSITION                      0x00000003
#define _PORTC_RC3_MASK                          0x00000008
#define _PORTC_RC3_LENGTH                        0x00000001

#define _PORTC_RC4_POSITION                      0x00000004
#define _PORTC_RC4_MASK                          0x00000010
#define _PORTC_RC4_LENGTH                        0x00000001

#define _PORTC_RC5_POSITION                      0x00000005
#define _PORTC_RC5_MASK                          0x00000020
#define _PORTC_RC5_LENGTH                        0x00000001

#define _PORTC_RC6_POSITION                      0x00000006
#define _PORTC_RC6_MASK                          0x00000040
#define _PORTC_RC6_LENGTH                        0x00000001

#define _PORTC_RC7_POSITION                      0x00000007
#define _PORTC_RC7_MASK                          0x00000080
#define _PORTC_RC7_LENGTH                        0x00000001

#define _PORTC_RC8_POSITION                      0x00000008
#define _PORTC_RC8_MASK                          0x00000100
#define _PORTC_RC8_LENGTH                        0x00000001

#define _PORTC_RC9_POSITION                      0x00000009
#define _PORTC_RC9_MASK                          0x00000200
#define _PORTC_RC9_LENGTH                        0x00000001

#define _PORTC_RC10_POSITION                     0x0000000A
#define _PORTC_RC10_MASK                         0x00000400
#define _PORTC_RC10_LENGTH                       0x00000001

#define _PORTC_RC11_POSITION                     0x0000000B
#define _PORTC_RC11_MASK                         0x00000800
#define _PORTC_RC11_LENGTH                       0x00000001

#define _PORTC_RC12_POSITION                     0x0000000C
#define _PORTC_RC12_MASK                         0x00001000
#define _PORTC_RC12_LENGTH                       0x00000001

#define _PORTC_RC13_POSITION                     0x0000000D
#define _PORTC_RC13_MASK                         0x00002000
#define _PORTC_RC13_LENGTH                       0x00000001

#define _LATC_LATC0_POSITION                     0x00000000
#define _LATC_LATC0_MASK                         0x00000001
#define _LATC_LATC0_LENGTH                       0x00000001

#define _LATC_LATC1_POSITION                     0x00000001
#define _LATC_LATC1_MASK                         0x00000002
#define _LATC_LATC1_LENGTH                       0x00000001

#define _LATC_LATC2_POSITION                     0x00000002
#define _LATC_LATC2_MASK                         0x00000004
#define _LATC_LATC2_LENGTH                       0x00000001

#define _LATC_LATC3_POSITION                     0x00000003
#define _LATC_LATC3_MASK                         0x00000008
#define _LATC_LATC3_LENGTH                       0x00000001

#define _LATC_LATC4_POSITION                     0x00000004
#define _LATC_LATC4_MASK                         0x00000010
#define _LATC_LATC4_LENGTH                       0x00000001

#define _LATC_LATC5_POSITION                     0x00000005
#define _LATC_LATC5_MASK                         0x00000020
#define _LATC_LATC5_LENGTH                       0x00000001

#define _LATC_LATC6_POSITION                     0x00000006
#define _LATC_LATC6_MASK                         0x00000040
#define _LATC_LATC6_LENGTH                       0x00000001

#define _LATC_LATC7_POSITION                     0x00000007
#define _LATC_LATC7_MASK                         0x00000080
#define _LATC_LATC7_LENGTH                       0x00000001

#define _LATC_LATC8_POSITION                     0x00000008
#define _LATC_LATC8_MASK                         0x00000100
#define _LATC_LATC8_LENGTH                       0x00000001

#define _LATC_LATC9_POSITION                     0x00000009
#define _LATC_LATC9_MASK                         0x00000200
#define _LATC_LATC9_LENGTH                       0x00000001

#define _LATC_LATC10_POSITION                    0x0000000A
#define _LATC_LATC10_MASK                        0x00000400
#define _LATC_LATC10_LENGTH                      0x00000001

#define _LATC_LATC11_POSITION                    0x0000000B
#define _LATC_LATC11_MASK                        0x00000800
#define _LATC_LATC11_LENGTH                      0x00000001

#define _LATC_LATC12_POSITION                    0x0000000C
#define _LATC_LATC12_MASK                        0x00001000
#define _LATC_LATC12_LENGTH                      0x00000001

#define _LATC_LATC13_POSITION                    0x0000000D
#define _LATC_LATC13_MASK                        0x00002000
#define _LATC_LATC13_LENGTH                      0x00000001

#define _ODCC_ODCC0_POSITION                     0x00000000
#define _ODCC_ODCC0_MASK                         0x00000001
#define _ODCC_ODCC0_LENGTH                       0x00000001

#define _ODCC_ODCC1_POSITION                     0x00000001
#define _ODCC_ODCC1_MASK                         0x00000002
#define _ODCC_ODCC1_LENGTH                       0x00000001

#define _ODCC_ODCC2_POSITION                     0x00000002
#define _ODCC_ODCC2_MASK                         0x00000004
#define _ODCC_ODCC2_LENGTH                       0x00000001

#define _ODCC_ODCC3_POSITION                     0x00000003
#define _ODCC_ODCC3_MASK                         0x00000008
#define _ODCC_ODCC3_LENGTH                       0x00000001

#define _ODCC_ODCC4_POSITION                     0x00000004
#define _ODCC_ODCC4_MASK                         0x00000010
#define _ODCC_ODCC4_LENGTH                       0x00000001

#define _ODCC_ODCC5_POSITION                     0x00000005
#define _ODCC_ODCC5_MASK                         0x00000020
#define _ODCC_ODCC5_LENGTH                       0x00000001

#define _ODCC_ODCC6_POSITION                     0x00000006
#define _ODCC_ODCC6_MASK                         0x00000040
#define _ODCC_ODCC6_LENGTH                       0x00000001

#define _ODCC_ODCC7_POSITION                     0x00000007
#define _ODCC_ODCC7_MASK                         0x00000080
#define _ODCC_ODCC7_LENGTH                       0x00000001

#define _ODCC_ODCC8_POSITION                     0x00000008
#define _ODCC_ODCC8_MASK                         0x00000100
#define _ODCC_ODCC8_LENGTH                       0x00000001

#define _ODCC_ODCC9_POSITION                     0x00000009
#define _ODCC_ODCC9_MASK                         0x00000200
#define _ODCC_ODCC9_LENGTH                       0x00000001

#define _ODCC_ODCC10_POSITION                    0x0000000A
#define _ODCC_ODCC10_MASK                        0x00000400
#define _ODCC_ODCC10_LENGTH                      0x00000001

#define _ODCC_ODCC11_POSITION                    0x0000000B
#define _ODCC_ODCC11_MASK                        0x00000800
#define _ODCC_ODCC11_LENGTH                      0x00000001

#define _ODCC_ODCC12_POSITION                    0x0000000C
#define _ODCC_ODCC12_MASK                        0x00001000
#define _ODCC_ODCC12_LENGTH                      0x00000001

#define _ODCC_ODCC13_POSITION                    0x0000000D
#define _ODCC_ODCC13_MASK                        0x00002000
#define _ODCC_ODCC13_LENGTH                      0x00000001

#define _CNENC_CNIEC0_POSITION                   0x00000000
#define _CNENC_CNIEC0_MASK                       0x00000001
#define _CNENC_CNIEC0_LENGTH                     0x00000001

#define _CNENC_CNIEC1_POSITION                   0x00000001
#define _CNENC_CNIEC1_MASK                       0x00000002
#define _CNENC_CNIEC1_LENGTH                     0x00000001

#define _CNENC_CNIEC2_POSITION                   0x00000002
#define _CNENC_CNIEC2_MASK                       0x00000004
#define _CNENC_CNIEC2_LENGTH                     0x00000001

#define _CNENC_CNIEC3_POSITION                   0x00000003
#define _CNENC_CNIEC3_MASK                       0x00000008
#define _CNENC_CNIEC3_LENGTH                     0x00000001

#define _CNENC_CNIEC4_POSITION                   0x00000004
#define _CNENC_CNIEC4_MASK                       0x00000010
#define _CNENC_CNIEC4_LENGTH                     0x00000001

#define _CNENC_CNIEC5_POSITION                   0x00000005
#define _CNENC_CNIEC5_MASK                       0x00000020
#define _CNENC_CNIEC5_LENGTH                     0x00000001

#define _CNENC_CNIEC6_POSITION                   0x00000006
#define _CNENC_CNIEC6_MASK                       0x00000040
#define _CNENC_CNIEC6_LENGTH                     0x00000001

#define _CNENC_CNIEC7_POSITION                   0x00000007
#define _CNENC_CNIEC7_MASK                       0x00000080
#define _CNENC_CNIEC7_LENGTH                     0x00000001

#define _CNENC_CNIEC8_POSITION                   0x00000008
#define _CNENC_CNIEC8_MASK                       0x00000100
#define _CNENC_CNIEC8_LENGTH                     0x00000001

#define _CNENC_CNIEC9_POSITION                   0x00000009
#define _CNENC_CNIEC9_MASK                       0x00000200
#define _CNENC_CNIEC9_LENGTH                     0x00000001

#define _CNENC_CNIEC10_POSITION                  0x0000000A
#define _CNENC_CNIEC10_MASK                      0x00000400
#define _CNENC_CNIEC10_LENGTH                    0x00000001

#define _CNENC_CNIEC11_POSITION                  0x0000000B
#define _CNENC_CNIEC11_MASK                      0x00000800
#define _CNENC_CNIEC11_LENGTH                    0x00000001

#define _CNENC_CNIEC12_POSITION                  0x0000000C
#define _CNENC_CNIEC12_MASK                      0x00001000
#define _CNENC_CNIEC12_LENGTH                    0x00000001

#define _CNENC_CNIEC13_POSITION                  0x0000000D
#define _CNENC_CNIEC13_MASK                      0x00002000
#define _CNENC_CNIEC13_LENGTH                    0x00000001

#define _CNPUC_CNPUC0_POSITION                   0x00000000
#define _CNPUC_CNPUC0_MASK                       0x00000001
#define _CNPUC_CNPUC0_LENGTH                     0x00000001

#define _CNPUC_CNPUC1_POSITION                   0x00000001
#define _CNPUC_CNPUC1_MASK                       0x00000002
#define _CNPUC_CNPUC1_LENGTH                     0x00000001

#define _CNPUC_CNPUC2_POSITION                   0x00000002
#define _CNPUC_CNPUC2_MASK                       0x00000004
#define _CNPUC_CNPUC2_LENGTH                     0x00000001

#define _CNPUC_CNPUC3_POSITION                   0x00000003
#define _CNPUC_CNPUC3_MASK                       0x00000008
#define _CNPUC_CNPUC3_LENGTH                     0x00000001

#define _CNPUC_CNPUC4_POSITION                   0x00000004
#define _CNPUC_CNPUC4_MASK                       0x00000010
#define _CNPUC_CNPUC4_LENGTH                     0x00000001

#define _CNPUC_CNPUC5_POSITION                   0x00000005
#define _CNPUC_CNPUC5_MASK                       0x00000020
#define _CNPUC_CNPUC5_LENGTH                     0x00000001

#define _CNPUC_CNPUC6_POSITION                   0x00000006
#define _CNPUC_CNPUC6_MASK                       0x00000040
#define _CNPUC_CNPUC6_LENGTH                     0x00000001

#define _CNPUC_CNPUC7_POSITION                   0x00000007
#define _CNPUC_CNPUC7_MASK                       0x00000080
#define _CNPUC_CNPUC7_LENGTH                     0x00000001

#define _CNPUC_CNPUC8_POSITION                   0x00000008
#define _CNPUC_CNPUC8_MASK                       0x00000100
#define _CNPUC_CNPUC8_LENGTH                     0x00000001

#define _CNPUC_CNPUC9_POSITION                   0x00000009
#define _CNPUC_CNPUC9_MASK                       0x00000200
#define _CNPUC_CNPUC9_LENGTH                     0x00000001

#define _CNPUC_CNPUC10_POSITION                  0x0000000A
#define _CNPUC_CNPUC10_MASK                      0x00000400
#define _CNPUC_CNPUC10_LENGTH                    0x00000001

#define _CNPUC_CNPUC11_POSITION                  0x0000000B
#define _CNPUC_CNPUC11_MASK                      0x00000800
#define _CNPUC_CNPUC11_LENGTH                    0x00000001

#define _CNPUC_CNPUC12_POSITION                  0x0000000C
#define _CNPUC_CNPUC12_MASK                      0x00001000
#define _CNPUC_CNPUC12_LENGTH                    0x00000001

#define _CNPUC_CNPUC13_POSITION                  0x0000000D
#define _CNPUC_CNPUC13_MASK                      0x00002000
#define _CNPUC_CNPUC13_LENGTH                    0x00000001

#define _CNPDC_CNPDC0_POSITION                   0x00000000
#define _CNPDC_CNPDC0_MASK                       0x00000001
#define _CNPDC_CNPDC0_LENGTH                     0x00000001

#define _CNPDC_CNPDC1_POSITION                   0x00000001
#define _CNPDC_CNPDC1_MASK                       0x00000002
#define _CNPDC_CNPDC1_LENGTH                     0x00000001

#define _CNPDC_CNPDC2_POSITION                   0x00000002
#define _CNPDC_CNPDC2_MASK                       0x00000004
#define _CNPDC_CNPDC2_LENGTH                     0x00000001

#define _CNPDC_CNPDC3_POSITION                   0x00000003
#define _CNPDC_CNPDC3_MASK                       0x00000008
#define _CNPDC_CNPDC3_LENGTH                     0x00000001

#define _CNPDC_CNPDC4_POSITION                   0x00000004
#define _CNPDC_CNPDC4_MASK                       0x00000010
#define _CNPDC_CNPDC4_LENGTH                     0x00000001

#define _CNPDC_CNPDC5_POSITION                   0x00000005
#define _CNPDC_CNPDC5_MASK                       0x00000020
#define _CNPDC_CNPDC5_LENGTH                     0x00000001

#define _CNPDC_CNPDC6_POSITION                   0x00000006
#define _CNPDC_CNPDC6_MASK                       0x00000040
#define _CNPDC_CNPDC6_LENGTH                     0x00000001

#define _CNPDC_CNPDC7_POSITION                   0x00000007
#define _CNPDC_CNPDC7_MASK                       0x00000080
#define _CNPDC_CNPDC7_LENGTH                     0x00000001

#define _CNPDC_CNPDC8_POSITION                   0x00000008
#define _CNPDC_CNPDC8_MASK                       0x00000100
#define _CNPDC_CNPDC8_LENGTH                     0x00000001

#define _CNPDC_CNPDC9_POSITION                   0x00000009
#define _CNPDC_CNPDC9_MASK                       0x00000200
#define _CNPDC_CNPDC9_LENGTH                     0x00000001

#define _CNPDC_CNPDC10_POSITION                  0x0000000A
#define _CNPDC_CNPDC10_MASK                      0x00000400
#define _CNPDC_CNPDC10_LENGTH                    0x00000001

#define _CNPDC_CNPDC11_POSITION                  0x0000000B
#define _CNPDC_CNPDC11_MASK                      0x00000800
#define _CNPDC_CNPDC11_LENGTH                    0x00000001

#define _CNPDC_CNPDC12_POSITION                  0x0000000C
#define _CNPDC_CNPDC12_MASK                      0x00001000
#define _CNPDC_CNPDC12_LENGTH                    0x00000001

#define _CNPDC_CNPDC13_POSITION                  0x0000000D
#define _CNPDC_CNPDC13_MASK                      0x00002000
#define _CNPDC_CNPDC13_LENGTH                    0x00000001

#define _ANSELC_ANSC0_POSITION                   0x00000000
#define _ANSELC_ANSC0_MASK                       0x00000001
#define _ANSELC_ANSC0_LENGTH                     0x00000001

#define _ANSELC_ANSC1_POSITION                   0x00000001
#define _ANSELC_ANSC1_MASK                       0x00000002
#define _ANSELC_ANSC1_LENGTH                     0x00000001

#define _ANSELC_ANSC2_POSITION                   0x00000002
#define _ANSELC_ANSC2_MASK                       0x00000004
#define _ANSELC_ANSC2_LENGTH                     0x00000001

#define _ANSELC_ANSC4_POSITION                   0x00000004
#define _ANSELC_ANSC4_MASK                       0x00000010
#define _ANSELC_ANSC4_LENGTH                     0x00000001

#define _ANSELC_ANSC5_POSITION                   0x00000005
#define _ANSELC_ANSC5_MASK                       0x00000020
#define _ANSELC_ANSC5_LENGTH                     0x00000001

#define _ANSELC_ANSC6_POSITION                   0x00000006
#define _ANSELC_ANSC6_MASK                       0x00000040
#define _ANSELC_ANSC6_LENGTH                     0x00000001

#define _ANSELC_ANSC9_POSITION                   0x00000009
#define _ANSELC_ANSC9_MASK                       0x00000200
#define _ANSELC_ANSC9_LENGTH                     0x00000001

#define _ANSELC_ANSC10_POSITION                  0x0000000A
#define _ANSELC_ANSC10_MASK                      0x00000400
#define _ANSELC_ANSC10_LENGTH                    0x00000001

#define _ANSELC_ANSC11_POSITION                  0x0000000B
#define _ANSELC_ANSC11_MASK                      0x00000800
#define _ANSELC_ANSC11_LENGTH                    0x00000001

#define _ANSELC_ANSC12_POSITION                  0x0000000C
#define _ANSELC_ANSC12_MASK                      0x00001000
#define _ANSELC_ANSC12_LENGTH                    0x00000001

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
**     BSS_STNDRD           Standard Security
**     BSS_DISABLED         No Protection (other than BWRP)
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
**     GSS_STNDRD           Standard Security
**     GSS_DISABLED         No Protection (other than GWRP)
**
**   Configuration Segment Write-Protect bit:
**     CWRP_ON              Configuration Segment is write protected
**     CWRP_OFF             Configuration Segment may be written
**
**   Configuration Segment Code-Protect Level bits:
**     CSS_HIGH             High Security
**     CSS_ENHNCD           Enhanced Security
**     CSS_STNDRD           Standard Security
**     CSS_DISABLED         No Protection (other than CWRP)
**
**   Alternate Interrupt Vector Table bit:
**     AIVTDIS_ON           Enabled AIVT
**     AIVTDIS_OFF          Disabled AIVT
**
*/

#define BWRP_ON              0xFFFE
#define BWRP_OFF             0xFFFF

#define BSS_HIGH             0xFFF9
#define BSS_STNDRD           0xFFFD
#define BSS_DISABLED         0xFFFF

#define BSS2_ON              0xFFF7
#define BSS2_OFF             0xFFFF

#define GWRP_ON              0xFFDF
#define GWRP_OFF             0xFFFF

#define GSS_HIGH             0xFF3F
#define GSS_STNDRD           0xFFBF
#define GSS_DISABLED         0xFFFF

#define CWRP_ON              0xFEFF
#define CWRP_OFF             0xFFFF

#define CSS_HIGH             0xF1FF
#define CSS_ENHNCD           0xF9FF
#define CSS_STNDRD           0xFDFF
#define CSS_DISABLED         0xFFFF

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
**     BSLIM_BSLIM          Boot Segment Flash page address  limit
**
*/

#define BSLIM_BSLIM          0xE000

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
**   Peripheral pin select configuration bit:
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
**   BOOTSWP Instruction Enable/Disable bit:
**     BTSWP_ON             BOOTSWP instruction is enabled
**     BTSWP_OFF            BOOTSWP instruction is disabled
**
*/

#define ICS_NONE             0xFFFC
#define ICS_PGD3             0xFFFD
#define ICS_PGD2             0xFFFE
#define ICS_PGD1             0xFFFF

#define JTAGEN_OFF           0xFFDF
#define JTAGEN_ON            0xFFFF

#define BTSWP_ON             0x7FFF
#define BTSWP_OFF            0xFFFF

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
**   Alternate I2C2 Pin bit:
**     ALTI2C2_ON           I2C2 mapped to ASDA2/ASCL2 pins
**     ALTI2C2_OFF          I2C2 mapped to SDA2/SCL2 pins
**
*/

#define PWMLOCK_OFF          0xFFFE
#define PWMLOCK_ON           0xFFFF

#define ALTI2C1_ON           0xFFF7
#define ALTI2C1_OFF          0xFFFF

#define ALTI2C2_ON           0xFFEF
#define ALTI2C2_OFF          0xFFFF

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

#define __RESET_BASE 0x0
#define __RESET_LENGTH 0x4

#define __IVT_BASE 0x4
#define __IVT_LENGTH 0x1fc

#define __PROGRAM_BASE 0x200
#define __PROGRAM_LENGTH 0xad80

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
#define __DATA_LENGTH 0x1000


#endif
