/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC24FJ16MC101 processor header
 *
 * (c) Copyright 1999-2014 Microchip Technology, All rights reserved
 * Part support version v1.22.A(19-Aug-2014)
 *-------------------------------------------------------------------------*/

#ifndef __PIC24FJ16MC101__
#error "Include file does not match processor setting"
#endif

#ifndef __24FJ16MC101_H
#define __24FJ16MC101_H

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
#define PCL PCL
extern volatile unsigned int  PCL __attribute__((__sfr__));
#define PCH PCH
extern volatile unsigned char PCH __attribute__((__sfr__));
#define TBLPAG TBLPAG
extern volatile unsigned char TBLPAG __attribute__((__sfr__));
#define PSVPAG PSVPAG
extern volatile unsigned char PSVPAG __attribute__((__sfr__));
#define RCOUNT RCOUNT
extern volatile unsigned int  RCOUNT __attribute__((__sfr__));
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
typedef struct tagCORCONBITS {
  unsigned :2;
  unsigned PSV:1;
  unsigned IPL3:1;
} CORCONBITS;
extern volatile CORCONBITS CORCONbits __attribute__((__sfr__));

#define DISICNT DISICNT
extern volatile unsigned int  DISICNT __attribute__((__sfr__));
#define CNEN1 CNEN1
extern volatile unsigned int  CNEN1 __attribute__((__sfr__));
typedef struct tagCNEN1BITS {
  unsigned CN0IE:1;
  unsigned CN1IE:1;
  unsigned CN2IE:1;
  unsigned CN3IE:1;
  unsigned CN4IE:1;
  unsigned CN5IE:1;
  unsigned :5;
  unsigned CN11IE:1;
  unsigned CN12IE:1;
  unsigned CN13IE:1;
  unsigned CN14IE:1;
} CNEN1BITS;
extern volatile CNEN1BITS CNEN1bits __attribute__((__sfr__));

#define CNEN2 CNEN2
extern volatile unsigned int  CNEN2 __attribute__((__sfr__));
typedef struct tagCNEN2BITS {
  unsigned :5;
  unsigned CN21IE:1;
  unsigned CN22IE:1;
  unsigned CN23IE:1;
  unsigned :5;
  unsigned CN29IE:1;
  unsigned CN30IE:1;
} CNEN2BITS;
extern volatile CNEN2BITS CNEN2bits __attribute__((__sfr__));

#define CNPU1 CNPU1
extern volatile unsigned int  CNPU1 __attribute__((__sfr__));
typedef struct tagCNPU1BITS {
  unsigned CN0PUE:1;
  unsigned CN1PUE:1;
  unsigned CN2PUE:1;
  unsigned CN3PUE:1;
  unsigned CN4PUE:1;
  unsigned CN5PUE:1;
  unsigned :5;
  unsigned CN11PUE:1;
  unsigned CN12PUE:1;
  unsigned CN13PUE:1;
  unsigned CN14PUE:1;
} CNPU1BITS;
extern volatile CNPU1BITS CNPU1bits __attribute__((__sfr__));

#define CNPU2 CNPU2
extern volatile unsigned int  CNPU2 __attribute__((__sfr__));
typedef struct tagCNPU2BITS {
  unsigned :5;
  unsigned CN21PUE:1;
  unsigned CN22PUE:1;
  unsigned CN23PUE:1;
  unsigned :5;
  unsigned CN29PUE:1;
  unsigned CN30PUE:1;
} CNPU2BITS;
extern volatile CNPU2BITS CNPU2bits __attribute__((__sfr__));

#define INTCON1 INTCON1
extern volatile unsigned int  INTCON1 __attribute__((__sfr__));
typedef struct tagINTCON1BITS {
  unsigned :1;
  unsigned OSCFAIL:1;
  unsigned STKERR:1;
  unsigned ADDRERR:1;
  unsigned MATHERR:1;
  unsigned :10;
  unsigned NSTDIS:1;
} INTCON1BITS;
extern volatile INTCON1BITS INTCON1bits __attribute__((__sfr__));

#define INTCON2 INTCON2
extern volatile unsigned int  INTCON2 __attribute__((__sfr__));
typedef struct tagINTCON2BITS {
  unsigned INT0EP:1;
  unsigned INT1EP:1;
  unsigned INT2EP:1;
  unsigned :11;
  unsigned DISI:1;
  unsigned ALTIVT:1;
} INTCON2BITS;
extern volatile INTCON2BITS INTCON2bits __attribute__((__sfr__));

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
  unsigned AD1IF:1;
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
  unsigned :8;
  unsigned INT2IF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile unsigned int  IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  unsigned :5;
  unsigned IC3IF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile unsigned int  IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  unsigned :9;
  unsigned PWM1IF:1;
  unsigned :4;
  unsigned RTCIF:1;
  unsigned FLTA1IF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile unsigned int  IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  unsigned FLTB1IF:1;
  unsigned U1EIF:1;
  unsigned :11;
  unsigned CTMUIF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

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
  unsigned AD1IE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile unsigned int  IEC1 __attribute__((__sfr__));
__extension__ typedef struct tagIEC1BITS {
  union {
    struct {
      unsigned SI2C1IE:1;
      unsigned MI2C1IE:1;
      unsigned CMIE:1;
      unsigned CNIE:1;
      unsigned INT1IE:1;
      unsigned :8;
      unsigned INT2IE:1;
    };
    struct {
      unsigned SI2CIE:1;
    };
  };
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC2 IEC2
extern volatile unsigned int  IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  unsigned :5;
  unsigned IC3IE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile unsigned int  IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  unsigned :9;
  unsigned PWM1IE:1;
  unsigned :4;
  unsigned RTCIE:1;
  unsigned FLTA1IE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile unsigned int  IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  unsigned FLTB1IE:1;
  unsigned U1EIE:1;
  unsigned :11;
  unsigned CTMUIE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

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
      unsigned AD1IP:3;
    };
    struct {
      unsigned U1TXIP0:1;
      unsigned U1TXIP1:1;
      unsigned U1TXIP2:1;
      unsigned :1;
      unsigned AD1IP0:1;
      unsigned AD1IP1:1;
      unsigned AD1IP2:1;
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

#define IPC9 IPC9
extern volatile unsigned int  IPC9 __attribute__((__sfr__));
__extension__ typedef struct tagIPC9BITS {
  union {
    struct {
      unsigned :4;
      unsigned IC3IP:3;
    };
    struct {
      unsigned :4;
      unsigned IC3IP0:1;
      unsigned IC3IP1:1;
      unsigned IC3IP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

#define IPC14 IPC14
extern volatile unsigned int  IPC14 __attribute__((__sfr__));
__extension__ typedef struct tagIPC14BITS {
  union {
    struct {
      unsigned :4;
      unsigned PWM1IP:3;
    };
    struct {
      unsigned :4;
      unsigned PWM1IP0:1;
      unsigned PWM1IP1:1;
      unsigned PWM1IP2:1;
    };
  };
} IPC14BITS;
extern volatile IPC14BITS IPC14bits __attribute__((__sfr__));

#define IPC15 IPC15
extern volatile unsigned int  IPC15 __attribute__((__sfr__));
__extension__ typedef struct tagIPC15BITS {
  union {
    struct {
      unsigned :8;
      unsigned RTCIP:3;
      unsigned :1;
      unsigned FLTA1IP:3;
    };
    struct {
      unsigned :8;
      unsigned RTCIP0:1;
      unsigned RTCIP1:1;
      unsigned RTCIP2:1;
      unsigned :1;
      unsigned FLTA1IP0:1;
      unsigned FLTA1IP1:1;
      unsigned FLTA1IP2:1;
    };
  };
} IPC15BITS;
extern volatile IPC15BITS IPC15bits __attribute__((__sfr__));

#define IPC16 IPC16
extern volatile unsigned int  IPC16 __attribute__((__sfr__));
__extension__ typedef struct tagIPC16BITS {
  union {
    struct {
      unsigned FLTB1IP:3;
      unsigned :1;
      unsigned U1EIP:3;
    };
    struct {
      unsigned FLTB1IP0:1;
      unsigned FLTB1IP1:1;
      unsigned FLTB1IP2:1;
      unsigned :1;
      unsigned U1EIP0:1;
      unsigned U1EIP1:1;
      unsigned U1EIP2:1;
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

#define IPC19 IPC19
extern volatile unsigned int  IPC19 __attribute__((__sfr__));
__extension__ typedef struct tagIPC19BITS {
  union {
    struct {
      unsigned :4;
      unsigned CTMUIP:3;
    };
    struct {
      unsigned :4;
      unsigned CTMUIP0:1;
      unsigned CTMUIP1:1;
      unsigned CTMUIP2:1;
    };
  };
} IPC19BITS;
extern volatile IPC19BITS IPC19bits __attribute__((__sfr__));

#define INTTREG INTTREG
extern volatile unsigned int  INTTREG __attribute__((__sfr__));
__extension__ typedef struct tagINTTREGBITS {
  union {
    struct {
      unsigned VECNUM:7;
      unsigned :1;
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
      unsigned :1;
      unsigned ILR0:1;
      unsigned ILR1:1;
      unsigned ILR2:1;
      unsigned ILR3:1;
    };
  };
} INTTREGBITS;
extern volatile INTTREGBITS INTTREGbits __attribute__((__sfr__));

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

#define IC1BUF IC1BUF
extern volatile unsigned int  IC1BUF __attribute__((__sfr__));
#define IC1CON IC1CON
extern volatile unsigned int  IC1CON __attribute__((__sfr__));
__extension__ typedef struct tagIC1CONBITS {
  union {
    struct {
      unsigned ICM:3;
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICI:2;
      unsigned ICTMR:1;
      unsigned :5;
      unsigned ICSIDL:1;
    };
    struct {
      unsigned ICM0:1;
      unsigned ICM1:1;
      unsigned ICM2:1;
      unsigned :2;
      unsigned ICI0:1;
      unsigned ICI1:1;
    };
  };
} IC1CONBITS;
extern volatile IC1CONBITS IC1CONbits __attribute__((__sfr__));

#define IC2BUF IC2BUF
extern volatile unsigned int  IC2BUF __attribute__((__sfr__));
#define IC2CON IC2CON
extern volatile unsigned int  IC2CON __attribute__((__sfr__));
__extension__ typedef struct tagIC2CONBITS {
  union {
    struct {
      unsigned ICM:3;
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICI:2;
      unsigned ICTMR:1;
      unsigned :5;
      unsigned ICSIDL:1;
    };
    struct {
      unsigned ICM0:1;
      unsigned ICM1:1;
      unsigned ICM2:1;
      unsigned :2;
      unsigned ICI0:1;
      unsigned ICI1:1;
    };
  };
} IC2CONBITS;
extern volatile IC2CONBITS IC2CONbits __attribute__((__sfr__));

#define IC3BUF IC3BUF
extern volatile unsigned int  IC3BUF __attribute__((__sfr__));
#define IC3CON IC3CON
extern volatile unsigned int  IC3CON __attribute__((__sfr__));
__extension__ typedef struct tagIC3CONBITS {
  union {
    struct {
      unsigned ICM:3;
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICI:2;
      unsigned ICTMR:1;
      unsigned :5;
      unsigned ICSIDL:1;
    };
    struct {
      unsigned ICM0:1;
      unsigned ICM1:1;
      unsigned ICM2:1;
      unsigned :2;
      unsigned ICI0:1;
      unsigned ICI1:1;
    };
  };
} IC3CONBITS;
extern volatile IC3CONBITS IC3CONbits __attribute__((__sfr__));


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

#define OC1RS OC1RS
extern volatile unsigned int  OC1RS __attribute__((__sfr__));
#define OC1R OC1R
extern volatile unsigned int  OC1R __attribute__((__sfr__));
#define OC1CON OC1CON
extern volatile unsigned int  OC1CON __attribute__((__sfr__));
__extension__ typedef struct tagOC1CONBITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned OCTSEL:1;
      unsigned OCFLT:1;
      unsigned :8;
      unsigned OCSIDL:1;
    };
    struct {
      unsigned OCM0:1;
      unsigned OCM1:1;
      unsigned OCM2:1;
    };
  };
} OC1CONBITS;
extern volatile OC1CONBITS OC1CONbits __attribute__((__sfr__));

#define OC2RS OC2RS
extern volatile unsigned int  OC2RS __attribute__((__sfr__));
#define OC2R OC2R
extern volatile unsigned int  OC2R __attribute__((__sfr__));
#define OC2CON OC2CON
extern volatile unsigned int  OC2CON __attribute__((__sfr__));
__extension__ typedef struct tagOC2CONBITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned OCTSEL:1;
      unsigned OCFLT:1;
      unsigned :8;
      unsigned OCSIDL:1;
    };
    struct {
      unsigned OCM0:1;
      unsigned OCM1:1;
      unsigned OCM2:1;
    };
  };
} OC2CONBITS;
extern volatile OC2CONBITS OC2CONbits __attribute__((__sfr__));

#define P1TCON P1TCON
extern volatile unsigned int  P1TCON __attribute__((__sfr__));
__extension__ typedef struct tagP1TCONBITS {
  union {
    struct {
      unsigned PTMOD:2;
      unsigned PTCKPS:2;
      unsigned PTOPS:4;
      unsigned :5;
      unsigned PTSIDL:1;
      unsigned :1;
      unsigned PTEN:1;
    };
    struct {
      unsigned PTMOD0:1;
      unsigned PTMOD1:1;
      unsigned PTCKPS0:1;
      unsigned PTCKPS1:1;
      unsigned PTOPS0:1;
      unsigned PTOPS1:1;
      unsigned PTOPS2:1;
      unsigned PTOPS3:1;
    };
  };
} P1TCONBITS;
extern volatile P1TCONBITS P1TCONbits __attribute__((__sfr__));

#define PTCON PTCON
extern volatile unsigned int  PTCON __attribute__((__sfr__));
__extension__ typedef struct tagPTCONBITS {
  union {
    struct {
      unsigned PTMOD:2;
      unsigned PTCKPS:2;
      unsigned PTOPS:4;
      unsigned :5;
      unsigned PTSIDL:1;
      unsigned :1;
      unsigned PTEN:1;
    };
    struct {
      unsigned PTMOD0:1;
      unsigned PTMOD1:1;
      unsigned PTCKPS0:1;
      unsigned PTCKPS1:1;
      unsigned PTOPS0:1;
      unsigned PTOPS1:1;
      unsigned PTOPS2:1;
      unsigned PTOPS3:1;
    };
  };
} PTCONBITS;
extern volatile PTCONBITS PTCONbits __attribute__((__sfr__));

#define P1TMR P1TMR
extern volatile unsigned int  P1TMR __attribute__((__sfr__));
typedef struct tagP1TMRBITS {
  unsigned PTMR:15;
  unsigned PTDIR:1;
} P1TMRBITS;
extern volatile P1TMRBITS P1TMRbits __attribute__((__sfr__));

#define PTMR PTMR
extern volatile unsigned int  PTMR __attribute__((__sfr__));
typedef struct tagPTMRBITS {
  unsigned PTMR:15;
  unsigned PTDIR:1;
} PTMRBITS;
extern volatile PTMRBITS PTMRbits __attribute__((__sfr__));

#define P1TPER P1TPER
extern volatile unsigned int  P1TPER __attribute__((__sfr__));
typedef struct tagP1TPERBITS {
  unsigned PTPER:15;
} P1TPERBITS;
extern volatile P1TPERBITS P1TPERbits __attribute__((__sfr__));

#define PTPER PTPER
extern volatile unsigned int  PTPER __attribute__((__sfr__));
typedef struct tagPTPERBITS {
  unsigned PTPER:15;
} PTPERBITS;
extern volatile PTPERBITS PTPERbits __attribute__((__sfr__));

#define P1SECMP P1SECMP
extern volatile unsigned int  P1SECMP __attribute__((__sfr__));
typedef struct tagP1SECMPBITS {
  unsigned SEVTCMP:15;
  unsigned SEVTDIR:1;
} P1SECMPBITS;
extern volatile P1SECMPBITS P1SECMPbits __attribute__((__sfr__));

#define SEVTCMP SEVTCMP
extern volatile unsigned int  SEVTCMP __attribute__((__sfr__));
typedef struct tagSEVTCMPBITS {
  unsigned SEVTCMP:15;
  unsigned SEVTDIR:1;
} SEVTCMPBITS;
extern volatile SEVTCMPBITS SEVTCMPbits __attribute__((__sfr__));

#define PWM1CON1 PWM1CON1
extern volatile unsigned int  PWM1CON1 __attribute__((__sfr__));
typedef struct tagPWM1CON1BITS {
  unsigned PEN1L:1;
  unsigned PEN2L:1;
  unsigned PEN3L:1;
  unsigned :1;
  unsigned PEN1H:1;
  unsigned PEN2H:1;
  unsigned PEN3H:1;
  unsigned :1;
  unsigned PMOD1:1;
  unsigned PMOD2:1;
  unsigned PMOD3:1;
} PWM1CON1BITS;
extern volatile PWM1CON1BITS PWM1CON1bits __attribute__((__sfr__));

#define PWMCON1 PWMCON1
extern volatile unsigned int  PWMCON1 __attribute__((__sfr__));
typedef struct tagPWMCON1BITS {
  unsigned PEN1L:1;
  unsigned PEN2L:1;
  unsigned PEN3L:1;
  unsigned :1;
  unsigned PEN1H:1;
  unsigned PEN2H:1;
  unsigned PEN3H:1;
  unsigned :1;
  unsigned PMOD1:1;
  unsigned PMOD2:1;
  unsigned PMOD3:1;
} PWMCON1BITS;
extern volatile PWMCON1BITS PWMCON1bits __attribute__((__sfr__));

#define PWM1CON2 PWM1CON2
extern volatile unsigned int  PWM1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagPWM1CON2BITS {
  union {
    struct {
      unsigned UDIS:1;
      unsigned OSYNC:1;
      unsigned IUE:1;
      unsigned :5;
      unsigned SEVOPS:4;
    };
    struct {
      unsigned :8;
      unsigned SEVOPS0:1;
      unsigned SEVOPS1:1;
      unsigned SEVOPS2:1;
      unsigned SEVOPS3:1;
    };
  };
} PWM1CON2BITS;
extern volatile PWM1CON2BITS PWM1CON2bits __attribute__((__sfr__));

#define PWMCON2 PWMCON2
extern volatile unsigned int  PWMCON2 __attribute__((__sfr__));
__extension__ typedef struct tagPWMCON2BITS {
  union {
    struct {
      unsigned UDIS:1;
      unsigned OSYNC:1;
      unsigned IUE:1;
      unsigned :5;
      unsigned SEVOPS:4;
    };
    struct {
      unsigned :8;
      unsigned SEVOPS0:1;
      unsigned SEVOPS1:1;
      unsigned SEVOPS2:1;
      unsigned SEVOPS3:1;
    };
  };
} PWMCON2BITS;
extern volatile PWMCON2BITS PWMCON2bits __attribute__((__sfr__));

#define DTCON1 DTCON1
extern volatile unsigned int  DTCON1 __attribute__((__sfr__));
__extension__ typedef struct tagDTCON1BITS {
  union {
    struct {
      unsigned DTA:6;
      unsigned DTAPS:2;
      unsigned DTB:6;
      unsigned DTBPS:2;
    };
    struct {
      unsigned DTA0:1;
      unsigned DTA1:1;
      unsigned DTA2:1;
      unsigned DTA3:1;
      unsigned DTA4:1;
      unsigned DTA5:1;
      unsigned DTAPS0:1;
      unsigned DTAPS1:1;
      unsigned DTB0:1;
      unsigned DTB1:1;
      unsigned DTB2:1;
      unsigned DTB3:1;
      unsigned DTB4:1;
      unsigned DTB5:1;
      unsigned DTBPS0:1;
      unsigned DTBPS1:1;
    };
  };
} DTCON1BITS;
extern volatile DTCON1BITS DTCON1bits __attribute__((__sfr__));

#define P1DTCON1 P1DTCON1
extern volatile unsigned int  P1DTCON1 __attribute__((__sfr__));
__extension__ typedef struct tagP1DTCON1BITS {
  union {
    struct {
      unsigned DTA:6;
      unsigned DTAPS:2;
      unsigned DTB:6;
      unsigned DTBPS:2;
    };
    struct {
      unsigned DTA0:1;
      unsigned DTA1:1;
      unsigned DTA2:1;
      unsigned DTA3:1;
      unsigned DTA4:1;
      unsigned DTA5:1;
      unsigned DTAPS0:1;
      unsigned DTAPS1:1;
      unsigned DTB0:1;
      unsigned DTB1:1;
      unsigned DTB2:1;
      unsigned DTB3:1;
      unsigned DTB4:1;
      unsigned DTB5:1;
      unsigned DTBPS0:1;
      unsigned DTBPS1:1;
    };
  };
} P1DTCON1BITS;
extern volatile P1DTCON1BITS P1DTCON1bits __attribute__((__sfr__));

#define DTCON2 DTCON2
extern volatile unsigned int  DTCON2 __attribute__((__sfr__));
typedef struct tagDTCON2BITS {
  unsigned DTS1I:1;
  unsigned DTS1A:1;
  unsigned DTS2I:1;
  unsigned DTS2A:1;
  unsigned DTS3I:1;
  unsigned DTS3A:1;
} DTCON2BITS;
extern volatile DTCON2BITS DTCON2bits __attribute__((__sfr__));

#define P1DTCON2 P1DTCON2
extern volatile unsigned int  P1DTCON2 __attribute__((__sfr__));
typedef struct tagP1DTCON2BITS {
  unsigned DTS1I:1;
  unsigned DTS1A:1;
  unsigned DTS2I:1;
  unsigned DTS2A:1;
  unsigned DTS3I:1;
  unsigned DTS3A:1;
} P1DTCON2BITS;
extern volatile P1DTCON2BITS P1DTCON2bits __attribute__((__sfr__));

#define FLTACON FLTACON
extern volatile unsigned int  FLTACON __attribute__((__sfr__));
typedef struct tagFLTACONBITS {
  unsigned FAEN1:1;
  unsigned FAEN2:1;
  unsigned FAEN3:1;
  unsigned :4;
  unsigned FLTAM:1;
  unsigned FAOV1L:1;
  unsigned FAOV1H:1;
  unsigned FAOV2L:1;
  unsigned FAOV2H:1;
  unsigned FAOV3L:1;
  unsigned FAOV3H:1;
} FLTACONBITS;
extern volatile FLTACONBITS FLTACONbits __attribute__((__sfr__));

#define P1FLTACON P1FLTACON
extern volatile unsigned int  P1FLTACON __attribute__((__sfr__));
typedef struct tagP1FLTACONBITS {
  unsigned FAEN1:1;
  unsigned FAEN2:1;
  unsigned FAEN3:1;
  unsigned :4;
  unsigned FLTAM:1;
  unsigned FAOV1L:1;
  unsigned FAOV1H:1;
  unsigned FAOV2L:1;
  unsigned FAOV2H:1;
  unsigned FAOV3L:1;
  unsigned FAOV3H:1;
} P1FLTACONBITS;
extern volatile P1FLTACONBITS P1FLTACONbits __attribute__((__sfr__));

#define FLTBCON FLTBCON
extern volatile unsigned int  FLTBCON __attribute__((__sfr__));
typedef struct tagFLTBCONBITS {
  unsigned FBEN1:1;
  unsigned FBEN2:1;
  unsigned FBEN3:1;
  unsigned :4;
  unsigned FLTBM:1;
  unsigned FBOV1L:1;
  unsigned FBOV1H:1;
  unsigned FBOV2L:1;
  unsigned FBOV2H:1;
  unsigned FBOV3L:1;
  unsigned FBOV3H:1;
} FLTBCONBITS;
extern volatile FLTBCONBITS FLTBCONbits __attribute__((__sfr__));

#define P1FLTBCON P1FLTBCON
extern volatile unsigned int  P1FLTBCON __attribute__((__sfr__));
typedef struct tagP1FLTBCONBITS {
  unsigned FBEN1:1;
  unsigned FBEN2:1;
  unsigned FBEN3:1;
  unsigned :4;
  unsigned FLTBM:1;
  unsigned FBOV1L:1;
  unsigned FBOV1H:1;
  unsigned FBOV2L:1;
  unsigned FBOV2H:1;
  unsigned FBOV3L:1;
  unsigned FBOV3H:1;
} P1FLTBCONBITS;
extern volatile P1FLTBCONBITS P1FLTBCONbits __attribute__((__sfr__));

#define OVDCON OVDCON
extern volatile unsigned int  OVDCON __attribute__((__sfr__));
typedef struct tagOVDCONBITS {
  unsigned POUT1L:1;
  unsigned POUT1H:1;
  unsigned POUT2L:1;
  unsigned POUT2H:1;
  unsigned POUT3L:1;
  unsigned POUT3H:1;
  unsigned :2;
  unsigned POVD1L:1;
  unsigned POVD1H:1;
  unsigned POVD2L:1;
  unsigned POVD2H:1;
  unsigned POVD3L:1;
  unsigned POVD3H:1;
} OVDCONBITS;
extern volatile OVDCONBITS OVDCONbits __attribute__((__sfr__));

#define P1OVDCON P1OVDCON
extern volatile unsigned int  P1OVDCON __attribute__((__sfr__));
typedef struct tagP1OVDCONBITS {
  unsigned POUT1L:1;
  unsigned POUT1H:1;
  unsigned POUT2L:1;
  unsigned POUT2H:1;
  unsigned POUT3L:1;
  unsigned POUT3H:1;
  unsigned :2;
  unsigned POVD1L:1;
  unsigned POVD1H:1;
  unsigned POVD2L:1;
  unsigned POVD2H:1;
  unsigned POVD3L:1;
  unsigned POVD3H:1;
} P1OVDCONBITS;
extern volatile P1OVDCONBITS P1OVDCONbits __attribute__((__sfr__));

#define P1DC1 P1DC1
extern volatile unsigned int  P1DC1 __attribute__((__sfr__));
#define PDC1 PDC1
extern volatile unsigned int  PDC1 __attribute__((__sfr__));
#define P1DC2 P1DC2
extern volatile unsigned int  P1DC2 __attribute__((__sfr__));
#define PDC2 PDC2
extern volatile unsigned int  PDC2 __attribute__((__sfr__));
#define P1DC3 P1DC3
extern volatile unsigned int  P1DC3 __attribute__((__sfr__));
#define PDC3 PDC3
extern volatile unsigned int  PDC3 __attribute__((__sfr__));
#define PWM1KEY PWM1KEY
extern volatile unsigned int  PWM1KEY __attribute__((__sfr__));
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
typedef struct tagSPI1STATBITS {
  unsigned SPIRBF:1;
  unsigned SPITBF:1;
  unsigned :4;
  unsigned SPIROV:1;
  unsigned :6;
  unsigned SPISIDL:1;
  unsigned :1;
  unsigned SPIEN:1;
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
  unsigned :1;
  unsigned FRMDLY:1;
  unsigned :11;
  unsigned FRMPOL:1;
  unsigned SPIFSD:1;
  unsigned FRMEN:1;
} SPI1CON2BITS;
extern volatile SPI1CON2BITS SPI1CON2bits __attribute__((__sfr__));

#define SPI1BUF SPI1BUF
extern volatile unsigned int  SPI1BUF __attribute__((__sfr__));
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

#define TRISB TRISB
extern volatile unsigned int  TRISB __attribute__((__sfr__));
typedef struct tagTRISBBITS {
  unsigned TRISB0:1;
  unsigned TRISB1:1;
  unsigned :2;
  unsigned TRISB4:1;
  unsigned :2;
  unsigned TRISB7:1;
  unsigned TRISB8:1;
  unsigned TRISB9:1;
  unsigned :2;
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
  unsigned :2;
  unsigned RB4:1;
  unsigned :2;
  unsigned RB7:1;
  unsigned RB8:1;
  unsigned RB9:1;
  unsigned :2;
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
  unsigned :2;
  unsigned LATB4:1;
  unsigned :2;
  unsigned LATB7:1;
  unsigned LATB8:1;
  unsigned LATB9:1;
  unsigned :2;
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
  unsigned :2;
  unsigned ODCB4:1;
  unsigned :2;
  unsigned ODCB7:1;
  unsigned ODCB8:1;
  unsigned ODCB9:1;
  unsigned :2;
  unsigned ODCB12:1;
  unsigned ODCB13:1;
  unsigned ODCB14:1;
  unsigned ODCB15:1;
} ODCBBITS;
extern volatile ODCBBITS ODCBbits __attribute__((__sfr__));

#define PADCFG1 PADCFG1
extern volatile unsigned int  PADCFG1 __attribute__((__sfr__));
typedef struct tagPADCFG1BITS {
  unsigned :1;
  unsigned RTSECSEL:1;
} PADCFG1BITS;
extern volatile PADCFG1BITS PADCFG1bits __attribute__((__sfr__));

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
      unsigned :1;
      unsigned SSRC:3;
      unsigned FORM:2;
      unsigned :3;
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

#define AD1PCFGL AD1PCFGL
extern volatile unsigned int  AD1PCFGL __attribute__((__sfr__));
typedef struct tagAD1PCFGLBITS {
  unsigned PCFG0:1;
  unsigned PCFG1:1;
  unsigned PCFG2:1;
  unsigned PCFG3:1;
} AD1PCFGLBITS;
extern volatile AD1PCFGLBITS AD1PCFGLbits __attribute__((__sfr__));

#define AD1CSSL AD1CSSL
extern volatile unsigned int  AD1CSSL __attribute__((__sfr__));
typedef struct tagAD1CSSLBITS {
  unsigned CSS0:1;
  unsigned CSS1:1;
  unsigned CSS2:1;
  unsigned CSS3:1;
} AD1CSSLBITS;
extern volatile AD1CSSLBITS AD1CSSLbits __attribute__((__sfr__));

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

#define ALRMVAL ALRMVAL
extern volatile unsigned int  ALRMVAL __attribute__((__sfr__));
#define ALCFGRPT ALCFGRPT
extern volatile unsigned int  ALCFGRPT __attribute__((__sfr__));
__extension__ typedef struct tagALCFGRPTBITS {
  union {
    struct {
      unsigned ARPT:8;
      unsigned ALRMPTR:2;
      unsigned AMASK:4;
      unsigned CHIME:1;
      unsigned ALRMEN:1;
    };
    struct {
      unsigned ARPT0:1;
      unsigned ARPT1:1;
      unsigned ARPT2:1;
      unsigned ARPT3:1;
      unsigned ARPT4:1;
      unsigned ARPT5:1;
      unsigned ARPT6:1;
      unsigned ARPT7:1;
      unsigned ALRMPTR0:1;
      unsigned ALRMPTR1:1;
      unsigned AMASK0:1;
      unsigned AMASK1:1;
      unsigned AMASK2:1;
      unsigned AMASK3:1;
    };
  };
} ALCFGRPTBITS;
extern volatile ALCFGRPTBITS ALCFGRPTbits __attribute__((__sfr__));

#define RTCVAL RTCVAL
extern volatile unsigned int  RTCVAL __attribute__((__sfr__));
#define RCFGCAL RCFGCAL
extern volatile unsigned int  RCFGCAL __attribute__((__sfr__));
__extension__ typedef struct tagRCFGCALBITS {
  union {
    struct {
      unsigned CAL:8;
      unsigned RTCPTR:2;
      unsigned RTCOE:1;
      unsigned HALFSEC:1;
      unsigned RTCSYNC:1;
      unsigned RTCWREN:1;
      unsigned :1;
      unsigned RTCEN:1;
    };
    struct {
      unsigned CAL0:1;
      unsigned CAL1:1;
      unsigned CAL2:1;
      unsigned CAL3:1;
      unsigned CAL4:1;
      unsigned CAL5:1;
      unsigned CAL6:1;
      unsigned CAL7:1;
      unsigned RTCPTR0:1;
      unsigned RTCPTR1:1;
    };
  };
} RCFGCALBITS;
extern volatile RCFGCALBITS RCFGCALbits __attribute__((__sfr__));

#define CMSTAT CMSTAT
extern volatile unsigned int  CMSTAT __attribute__((__sfr__));
typedef struct tagCMSTATBITS {
  unsigned C1OUT:1;
  unsigned C2OUT:1;
  unsigned C3OUT:1;
  unsigned :5;
  unsigned C1EVT:1;
  unsigned C2EVT:1;
  unsigned C3EVT:1;
  unsigned :4;
  unsigned CMSIDL:1;
} CMSTATBITS;
extern volatile CMSTATBITS CMSTATbits __attribute__((__sfr__));

#define CVRCON CVRCON
extern volatile unsigned int  CVRCON __attribute__((__sfr__));
__extension__ typedef struct tagCVRCONBITS {
  union {
    struct {
      unsigned CVR:4;
      unsigned :1;
      unsigned CVRR:1;
      unsigned CVROE:1;
      unsigned CVREN:1;
      unsigned BGSEL:2;
      unsigned VREFSEL:1;
    };
    struct {
      unsigned CVR0:1;
      unsigned CVR1:1;
      unsigned CVR2:1;
      unsigned CVR3:1;
      unsigned :4;
      unsigned BGSEL0:1;
      unsigned BGSEL1:1;
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

#define RPINR0 RPINR0
extern volatile unsigned int  RPINR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR0BITS {
  union {
    struct {
      unsigned :8;
      unsigned INT1R:5;
    };
    struct {
      unsigned :8;
      unsigned INT1R0:1;
      unsigned INT1R1:1;
      unsigned INT1R2:1;
      unsigned INT1R3:1;
      unsigned INT1R4:1;
    };
  };
} RPINR0BITS;
extern volatile RPINR0BITS RPINR0bits __attribute__((__sfr__));

#define RPINR1 RPINR1
extern volatile unsigned int  RPINR1 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR1BITS {
  union {
    struct {
      unsigned INT2R:5;
    };
    struct {
      unsigned INT2R0:1;
      unsigned INT2R1:1;
      unsigned INT2R2:1;
      unsigned INT2R3:1;
      unsigned INT2R4:1;
    };
  };
} RPINR1BITS;
extern volatile RPINR1BITS RPINR1bits __attribute__((__sfr__));

#define RPINR3 RPINR3
extern volatile unsigned int  RPINR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR3BITS {
  union {
    struct {
      unsigned T2CKR:5;
      unsigned :3;
      unsigned T3CKR:5;
    };
    struct {
      unsigned T2CKR0:1;
      unsigned T2CKR1:1;
      unsigned T2CKR2:1;
      unsigned T2CKR3:1;
      unsigned T2CKR4:1;
      unsigned :3;
      unsigned T3CKR0:1;
      unsigned T3CKR1:1;
      unsigned T3CKR2:1;
      unsigned T3CKR3:1;
      unsigned T3CKR4:1;
    };
  };
} RPINR3BITS;
extern volatile RPINR3BITS RPINR3bits __attribute__((__sfr__));

#define RPINR7 RPINR7
extern volatile unsigned int  RPINR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR7BITS {
  union {
    struct {
      unsigned IC1R:5;
      unsigned :3;
      unsigned IC2R:5;
    };
    struct {
      unsigned IC1R0:1;
      unsigned IC1R1:1;
      unsigned IC1R2:1;
      unsigned IC1R3:1;
      unsigned IC1R4:1;
      unsigned :3;
      unsigned IC2R0:1;
      unsigned IC2R1:1;
      unsigned IC2R2:1;
      unsigned IC2R3:1;
      unsigned IC2R4:1;
    };
  };
} RPINR7BITS;
extern volatile RPINR7BITS RPINR7bits __attribute__((__sfr__));

#define RPINR8 RPINR8
extern volatile unsigned int  RPINR8 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR8BITS {
  union {
    struct {
      unsigned IC3R:5;
    };
    struct {
      unsigned IC3R0:1;
      unsigned IC3R1:1;
      unsigned IC3R2:1;
      unsigned IC3R3:1;
      unsigned IC3R4:1;
    };
  };
} RPINR8BITS;
extern volatile RPINR8BITS RPINR8bits __attribute__((__sfr__));

#define RPINR11 RPINR11
extern volatile unsigned int  RPINR11 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR11BITS {
  union {
    struct {
      unsigned OCFAR:5;
    };
    struct {
      unsigned OCFAR0:1;
      unsigned OCFAR1:1;
      unsigned OCFAR2:1;
      unsigned OCFAR3:1;
      unsigned OCFAR4:1;
    };
  };
} RPINR11BITS;
extern volatile RPINR11BITS RPINR11bits __attribute__((__sfr__));

#define RPINR18 RPINR18
extern volatile unsigned int  RPINR18 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR18BITS {
  union {
    struct {
      unsigned U1RXR:5;
      unsigned :3;
      unsigned U1CTSR:5;
    };
    struct {
      unsigned U1RXR0:1;
      unsigned U1RXR1:1;
      unsigned U1RXR2:1;
      unsigned U1RXR3:1;
      unsigned U1RXR4:1;
      unsigned :3;
      unsigned U1CTSR0:1;
      unsigned U1CTSR1:1;
      unsigned U1CTSR2:1;
      unsigned U1CTSR3:1;
      unsigned U1CTSR4:1;
    };
  };
} RPINR18BITS;
extern volatile RPINR18BITS RPINR18bits __attribute__((__sfr__));

#define RPINR21 RPINR21
extern volatile unsigned int  RPINR21 __attribute__((__sfr__));
__extension__ typedef struct tagRPINR21BITS {
  union {
    struct {
      unsigned SS1R:5;
    };
    struct {
      unsigned SS1R0:1;
      unsigned SS1R1:1;
      unsigned SS1R2:1;
      unsigned SS1R3:1;
      unsigned SS1R4:1;
    };
  };
} RPINR21BITS;
extern volatile RPINR21BITS RPINR21bits __attribute__((__sfr__));

#define RPOR0 RPOR0
extern volatile unsigned int  RPOR0 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR0BITS {
  union {
    struct {
      unsigned RP0R:5;
      unsigned :3;
      unsigned RP1R:5;
    };
    struct {
      unsigned RP0R0:1;
      unsigned RP0R1:1;
      unsigned RP0R2:1;
      unsigned RP0R3:1;
      unsigned RP0R4:1;
      unsigned :3;
      unsigned RP1R0:1;
      unsigned RP1R1:1;
      unsigned RP1R2:1;
      unsigned RP1R3:1;
      unsigned RP1R4:1;
    };
  };
} RPOR0BITS;
extern volatile RPOR0BITS RPOR0bits __attribute__((__sfr__));

#define RPOR2 RPOR2
extern volatile unsigned int  RPOR2 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR2BITS {
  union {
    struct {
      unsigned RP4R:5;
    };
    struct {
      unsigned RP4R0:1;
      unsigned RP4R1:1;
      unsigned RP4R2:1;
      unsigned RP4R3:1;
      unsigned RP4R4:1;
    };
  };
} RPOR2BITS;
extern volatile RPOR2BITS RPOR2bits __attribute__((__sfr__));

#define RPOR3 RPOR3
extern volatile unsigned int  RPOR3 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR3BITS {
  union {
    struct {
      unsigned :8;
      unsigned RP7R:5;
    };
    struct {
      unsigned :8;
      unsigned RP7R0:1;
      unsigned RP7R1:1;
      unsigned RP7R2:1;
      unsigned RP7R3:1;
      unsigned RP7R4:1;
    };
  };
} RPOR3BITS;
extern volatile RPOR3BITS RPOR3bits __attribute__((__sfr__));

#define RPOR4 RPOR4
extern volatile unsigned int  RPOR4 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR4BITS {
  union {
    struct {
      unsigned RP8R:5;
      unsigned :3;
      unsigned RP9R:5;
    };
    struct {
      unsigned RP8R0:1;
      unsigned RP8R1:1;
      unsigned RP8R2:1;
      unsigned RP8R3:1;
      unsigned RP8R4:1;
      unsigned :3;
      unsigned RP9R0:1;
      unsigned RP9R1:1;
      unsigned RP9R2:1;
      unsigned RP9R3:1;
      unsigned RP9R4:1;
    };
  };
} RPOR4BITS;
extern volatile RPOR4BITS RPOR4bits __attribute__((__sfr__));

#define RPOR6 RPOR6
extern volatile unsigned int  RPOR6 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR6BITS {
  union {
    struct {
      unsigned RP12R:5;
      unsigned :3;
      unsigned RP13R:5;
    };
    struct {
      unsigned RP12R0:1;
      unsigned RP12R1:1;
      unsigned RP12R2:1;
      unsigned RP12R3:1;
      unsigned RP12R4:1;
      unsigned :3;
      unsigned RP13R0:1;
      unsigned RP13R1:1;
      unsigned RP13R2:1;
      unsigned RP13R3:1;
      unsigned RP13R4:1;
    };
  };
} RPOR6BITS;
extern volatile RPOR6BITS RPOR6bits __attribute__((__sfr__));

#define RPOR7 RPOR7
extern volatile unsigned int  RPOR7 __attribute__((__sfr__));
__extension__ typedef struct tagRPOR7BITS {
  union {
    struct {
      unsigned RP14R:5;
      unsigned :3;
      unsigned RP15R:5;
    };
    struct {
      unsigned RP14R0:1;
      unsigned RP14R1:1;
      unsigned RP14R2:1;
      unsigned RP14R3:1;
      unsigned RP14R4:1;
      unsigned :3;
      unsigned RP15R0:1;
      unsigned RP15R1:1;
      unsigned RP15R2:1;
      unsigned RP15R3:1;
      unsigned RP15R4:1;
    };
  };
} RPOR7BITS;
extern volatile RPOR7BITS RPOR7bits __attribute__((__sfr__));

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
  unsigned :4;
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
      unsigned LPOSCEN:1;
      unsigned :1;
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
      unsigned :8;
      unsigned FRCDIV:3;
      unsigned DOZEN:1;
      unsigned DOZE:3;
      unsigned ROI:1;
    };
    struct {
      unsigned :8;
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

#define NVMCON NVMCON
extern volatile unsigned int  NVMCON __attribute__((__sfr__));
__extension__ typedef struct tagNVMCONBITS {
  union {
    struct {
      unsigned NVMOP:4;
      unsigned :2;
      unsigned ERASE:1;
      unsigned :6;
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

#define NVMKEY NVMKEY
extern volatile unsigned int  NVMKEY __attribute__((__sfr__));
#define PMD1 PMD1
extern volatile unsigned int  PMD1 __attribute__((__sfr__));
typedef struct tagPMD1BITS {
  unsigned AD1MD:1;
  unsigned :2;
  unsigned SPI1MD:1;
  unsigned :1;
  unsigned U1MD:1;
  unsigned :1;
  unsigned I2C1MD:1;
  unsigned :1;
  unsigned PWM1MD:1;
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
  unsigned OC2MD:1;
  unsigned :6;
  unsigned IC1MD:1;
  unsigned IC2MD:1;
  unsigned IC3MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile unsigned int  PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  unsigned :9;
  unsigned RTCCMD:1;
  unsigned CMPMD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile unsigned int  PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  unsigned :2;
  unsigned CTMUMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));



/* ---------------------------------------------------------- */
/* Defines for unique SFR bit names                           */
/* ---------------------------------------------------------- */

/* SR */
#define _C SRbits.C
#define _Z SRbits.Z
#define _OV SRbits.OV
#define _N SRbits.N
#define _RA SRbits.RA
#define _IPL SRbits.IPL
#define _DC SRbits.DC
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2

/* CORCON */
#define _PSV CORCONbits.PSV
#define _IPL3 CORCONbits.IPL3

/* CNEN1 */
#define _CN0IE CNEN1bits.CN0IE
#define _CN1IE CNEN1bits.CN1IE
#define _CN2IE CNEN1bits.CN2IE
#define _CN3IE CNEN1bits.CN3IE
#define _CN4IE CNEN1bits.CN4IE
#define _CN5IE CNEN1bits.CN5IE
#define _CN11IE CNEN1bits.CN11IE
#define _CN12IE CNEN1bits.CN12IE
#define _CN13IE CNEN1bits.CN13IE
#define _CN14IE CNEN1bits.CN14IE

/* CNEN2 */
#define _CN21IE CNEN2bits.CN21IE
#define _CN22IE CNEN2bits.CN22IE
#define _CN23IE CNEN2bits.CN23IE
#define _CN29IE CNEN2bits.CN29IE
#define _CN30IE CNEN2bits.CN30IE

/* CNPU1 */
#define _CN0PUE CNPU1bits.CN0PUE
#define _CN1PUE CNPU1bits.CN1PUE
#define _CN2PUE CNPU1bits.CN2PUE
#define _CN3PUE CNPU1bits.CN3PUE
#define _CN4PUE CNPU1bits.CN4PUE
#define _CN5PUE CNPU1bits.CN5PUE
#define _CN11PUE CNPU1bits.CN11PUE
#define _CN12PUE CNPU1bits.CN12PUE
#define _CN13PUE CNPU1bits.CN13PUE
#define _CN14PUE CNPU1bits.CN14PUE

/* CNPU2 */
#define _CN21PUE CNPU2bits.CN21PUE
#define _CN22PUE CNPU2bits.CN22PUE
#define _CN23PUE CNPU2bits.CN23PUE
#define _CN29PUE CNPU2bits.CN29PUE
#define _CN30PUE CNPU2bits.CN30PUE

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _NSTDIS INTCON1bits.NSTDIS

/* INTCON2 */
#define _INT0EP INTCON2bits.INT0EP
#define _INT1EP INTCON2bits.INT1EP
#define _INT2EP INTCON2bits.INT2EP
#define _DISI INTCON2bits.DISI
#define _ALTIVT INTCON2bits.ALTIVT

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
#define _AD1IF IFS0bits.AD1IF

/* IFS1 */
#define _SI2C1IF IFS1bits.SI2C1IF
#define _MI2C1IF IFS1bits.MI2C1IF
#define _CMIF IFS1bits.CMIF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _INT2IF IFS1bits.INT2IF

/* IFS2 */
#define _IC3IF IFS2bits.IC3IF

/* IFS3 */
#define _PWM1IF IFS3bits.PWM1IF
#define _RTCIF IFS3bits.RTCIF
#define _FLTA1IF IFS3bits.FLTA1IF

/* IFS4 */
#define _FLTB1IF IFS4bits.FLTB1IF
#define _U1EIF IFS4bits.U1EIF
#define _CTMUIF IFS4bits.CTMUIF

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
#define _AD1IE IEC0bits.AD1IE

/* IEC1 */
#define _SI2C1IE IEC1bits.SI2C1IE
#define _MI2C1IE IEC1bits.MI2C1IE
#define _CMIE IEC1bits.CMIE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _INT2IE IEC1bits.INT2IE
#define _SI2CIE IEC1bits.SI2CIE

/* IEC2 */
#define _IC3IE IEC2bits.IC3IE

/* IEC3 */
#define _PWM1IE IEC3bits.PWM1IE
#define _RTCIE IEC3bits.RTCIE
#define _FLTA1IE IEC3bits.FLTA1IE

/* IEC4 */
#define _FLTB1IE IEC4bits.FLTB1IE
#define _U1EIE IEC4bits.U1EIE
#define _CTMUIE IEC4bits.CTMUIE

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
#define _AD1IP IPC3bits.AD1IP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _AD1IP0 IPC3bits.AD1IP0
#define _AD1IP1 IPC3bits.AD1IP1
#define _AD1IP2 IPC3bits.AD1IP2

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

/* IPC7 */
#define _INT2IP IPC7bits.INT2IP
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2

/* IPC9 */
#define _IC3IP IPC9bits.IC3IP
#define _IC3IP0 IPC9bits.IC3IP0
#define _IC3IP1 IPC9bits.IC3IP1
#define _IC3IP2 IPC9bits.IC3IP2

/* IPC14 */
#define _PWM1IP IPC14bits.PWM1IP
#define _PWM1IP0 IPC14bits.PWM1IP0
#define _PWM1IP1 IPC14bits.PWM1IP1
#define _PWM1IP2 IPC14bits.PWM1IP2

/* IPC15 */
#define _RTCIP IPC15bits.RTCIP
#define _FLTA1IP IPC15bits.FLTA1IP
#define _RTCIP0 IPC15bits.RTCIP0
#define _RTCIP1 IPC15bits.RTCIP1
#define _RTCIP2 IPC15bits.RTCIP2
#define _FLTA1IP0 IPC15bits.FLTA1IP0
#define _FLTA1IP1 IPC15bits.FLTA1IP1
#define _FLTA1IP2 IPC15bits.FLTA1IP2

/* IPC16 */
#define _FLTB1IP IPC16bits.FLTB1IP
#define _U1EIP IPC16bits.U1EIP
#define _FLTB1IP0 IPC16bits.FLTB1IP0
#define _FLTB1IP1 IPC16bits.FLTB1IP1
#define _FLTB1IP2 IPC16bits.FLTB1IP2
#define _U1EIP0 IPC16bits.U1EIP0
#define _U1EIP1 IPC16bits.U1EIP1
#define _U1EIP2 IPC16bits.U1EIP2

/* IPC19 */
#define _CTMUIP IPC19bits.CTMUIP
#define _CTMUIP0 IPC19bits.CTMUIP0
#define _CTMUIP1 IPC19bits.CTMUIP1
#define _CTMUIP2 IPC19bits.CTMUIP2

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
#define _ILR0 INTTREGbits.ILR0
#define _ILR1 INTTREGbits.ILR1
#define _ILR2 INTTREGbits.ILR2
#define _ILR3 INTTREGbits.ILR3

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

/* IC1CON */
#define _ICM IC1CONbits.ICM
#define _ICBNE IC1CONbits.ICBNE
#define _ICOV IC1CONbits.ICOV
#define _ICI IC1CONbits.ICI
#define _ICTMR IC1CONbits.ICTMR
#define _ICSIDL IC1CONbits.ICSIDL
#define _ICM0 IC1CONbits.ICM0
#define _ICM1 IC1CONbits.ICM1
#define _ICM2 IC1CONbits.ICM2
#define _ICI0 IC1CONbits.ICI0
#define _ICI1 IC1CONbits.ICI1

/* IC2CON */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */

/* IC3CON */
/* Bitname _ICM cannot be defined because it is used by more than one SFR */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICI cannot be defined because it is used by more than one SFR */
/* Bitname _ICTMR cannot be defined because it is used by more than one SFR */
/* Bitname _ICSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _ICM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICM2 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICI1 cannot be defined because it is used by more than one SFR */

/* OC1CON */
#define _OCM OC1CONbits.OCM
#define _OCTSEL OC1CONbits.OCTSEL
#define _OCFLT OC1CONbits.OCFLT
#define _OCSIDL OC1CONbits.OCSIDL
#define _OCM0 OC1CONbits.OCM0
#define _OCM1 OC1CONbits.OCM1
#define _OCM2 OC1CONbits.OCM2

/* OC2CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* P1TCON */
#define _PTMOD P1TCONbits.PTMOD
#define _PTCKPS P1TCONbits.PTCKPS
#define _PTOPS P1TCONbits.PTOPS
#define _PTSIDL P1TCONbits.PTSIDL
#define _PTEN P1TCONbits.PTEN
#define _PTMOD0 P1TCONbits.PTMOD0
#define _PTMOD1 P1TCONbits.PTMOD1
#define _PTCKPS0 P1TCONbits.PTCKPS0
#define _PTCKPS1 P1TCONbits.PTCKPS1
#define _PTOPS0 P1TCONbits.PTOPS0
#define _PTOPS1 P1TCONbits.PTOPS1
#define _PTOPS2 P1TCONbits.PTOPS2
#define _PTOPS3 P1TCONbits.PTOPS3

/* P1TMR */
#define _PTMR P1TMRbits.PTMR
#define _PTDIR P1TMRbits.PTDIR

/* P1TPER */
#define _PTPER P1TPERbits.PTPER

/* P1SECMP */
#define _SEVTCMP P1SECMPbits.SEVTCMP
#define _SEVTDIR P1SECMPbits.SEVTDIR

/* PWM1CON1 */
#define _PEN1L PWM1CON1bits.PEN1L
#define _PEN2L PWM1CON1bits.PEN2L
#define _PEN3L PWM1CON1bits.PEN3L
#define _PEN1H PWM1CON1bits.PEN1H
#define _PEN2H PWM1CON1bits.PEN2H
#define _PEN3H PWM1CON1bits.PEN3H
#define _PMOD1 PWM1CON1bits.PMOD1
#define _PMOD2 PWM1CON1bits.PMOD2
#define _PMOD3 PWM1CON1bits.PMOD3

/* PWM1CON2 */
#define _UDIS PWM1CON2bits.UDIS
#define _OSYNC PWM1CON2bits.OSYNC
#define _IUE PWM1CON2bits.IUE
#define _SEVOPS PWM1CON2bits.SEVOPS
#define _SEVOPS0 PWM1CON2bits.SEVOPS0
#define _SEVOPS1 PWM1CON2bits.SEVOPS1
#define _SEVOPS2 PWM1CON2bits.SEVOPS2
#define _SEVOPS3 PWM1CON2bits.SEVOPS3

/* DTCON1 */
#define _DTA DTCON1bits.DTA
#define _DTAPS DTCON1bits.DTAPS
#define _DTB DTCON1bits.DTB
#define _DTBPS DTCON1bits.DTBPS
#define _DTA0 DTCON1bits.DTA0
#define _DTA1 DTCON1bits.DTA1
#define _DTA2 DTCON1bits.DTA2
#define _DTA3 DTCON1bits.DTA3
#define _DTA4 DTCON1bits.DTA4
#define _DTA5 DTCON1bits.DTA5
#define _DTAPS0 DTCON1bits.DTAPS0
#define _DTAPS1 DTCON1bits.DTAPS1
#define _DTB0 DTCON1bits.DTB0
#define _DTB1 DTCON1bits.DTB1
#define _DTB2 DTCON1bits.DTB2
#define _DTB3 DTCON1bits.DTB3
#define _DTB4 DTCON1bits.DTB4
#define _DTB5 DTCON1bits.DTB5
#define _DTBPS0 DTCON1bits.DTBPS0
#define _DTBPS1 DTCON1bits.DTBPS1

/* DTCON2 */
#define _DTS1I DTCON2bits.DTS1I
#define _DTS1A DTCON2bits.DTS1A
#define _DTS2I DTCON2bits.DTS2I
#define _DTS2A DTCON2bits.DTS2A
#define _DTS3I DTCON2bits.DTS3I
#define _DTS3A DTCON2bits.DTS3A

/* FLTACON */
#define _FAEN1 FLTACONbits.FAEN1
#define _FAEN2 FLTACONbits.FAEN2
#define _FAEN3 FLTACONbits.FAEN3
#define _FLTAM FLTACONbits.FLTAM
#define _FAOV1L FLTACONbits.FAOV1L
#define _FAOV1H FLTACONbits.FAOV1H
#define _FAOV2L FLTACONbits.FAOV2L
#define _FAOV2H FLTACONbits.FAOV2H
#define _FAOV3L FLTACONbits.FAOV3L
#define _FAOV3H FLTACONbits.FAOV3H

/* FLTBCON */
#define _FBEN1 FLTBCONbits.FBEN1
#define _FBEN2 FLTBCONbits.FBEN2
#define _FBEN3 FLTBCONbits.FBEN3
#define _FLTBM FLTBCONbits.FLTBM
#define _FBOV1L FLTBCONbits.FBOV1L
#define _FBOV1H FLTBCONbits.FBOV1H
#define _FBOV2L FLTBCONbits.FBOV2L
#define _FBOV2H FLTBCONbits.FBOV2H
#define _FBOV3L FLTBCONbits.FBOV3L
#define _FBOV3H FLTBCONbits.FBOV3H

/* OVDCON */
#define _POUT1L OVDCONbits.POUT1L
#define _POUT1H OVDCONbits.POUT1H
#define _POUT2L OVDCONbits.POUT2L
#define _POUT2H OVDCONbits.POUT2H
#define _POUT3L OVDCONbits.POUT3L
#define _POUT3H OVDCONbits.POUT3H
#define _POVD1L OVDCONbits.POVD1L
#define _POVD1H OVDCONbits.POVD1H
#define _POVD2L OVDCONbits.POVD2L
#define _POVD2H OVDCONbits.POVD2H
#define _POVD3L OVDCONbits.POVD3L
#define _POVD3H OVDCONbits.POVD3H

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
#define _BCL I2C1STATbits.BCL
#define _TRSTAT I2C1STATbits.TRSTAT
#define _ACKSTAT I2C1STATbits.ACKSTAT

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

/* SPI1STAT */
#define _SPIRBF SPI1STATbits.SPIRBF
#define _SPITBF SPI1STATbits.SPITBF
#define _SPIROV SPI1STATbits.SPIROV
#define _SPISIDL SPI1STATbits.SPISIDL
#define _SPIEN SPI1STATbits.SPIEN

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
#define _FRMDLY SPI1CON2bits.FRMDLY
#define _FRMPOL SPI1CON2bits.FRMPOL
#define _SPIFSD SPI1CON2bits.SPIFSD
#define _FRMEN SPI1CON2bits.FRMEN

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

/* TRISB */
#define _TRISB0 TRISBbits.TRISB0
#define _TRISB1 TRISBbits.TRISB1
#define _TRISB4 TRISBbits.TRISB4
#define _TRISB7 TRISBbits.TRISB7
#define _TRISB8 TRISBbits.TRISB8
#define _TRISB9 TRISBbits.TRISB9
#define _TRISB12 TRISBbits.TRISB12
#define _TRISB13 TRISBbits.TRISB13
#define _TRISB14 TRISBbits.TRISB14
#define _TRISB15 TRISBbits.TRISB15

/* PORTB */
#define _RB0 PORTBbits.RB0
#define _RB1 PORTBbits.RB1
#define _RB4 PORTBbits.RB4
#define _RB7 PORTBbits.RB7
#define _RB8 PORTBbits.RB8
#define _RB9 PORTBbits.RB9
#define _RB12 PORTBbits.RB12
#define _RB13 PORTBbits.RB13
#define _RB14 PORTBbits.RB14
#define _RB15 PORTBbits.RB15

/* LATB */
#define _LATB0 LATBbits.LATB0
#define _LATB1 LATBbits.LATB1
#define _LATB4 LATBbits.LATB4
#define _LATB7 LATBbits.LATB7
#define _LATB8 LATBbits.LATB8
#define _LATB9 LATBbits.LATB9
#define _LATB12 LATBbits.LATB12
#define _LATB13 LATBbits.LATB13
#define _LATB14 LATBbits.LATB14
#define _LATB15 LATBbits.LATB15

/* ODCB */
#define _ODCB0 ODCBbits.ODCB0
#define _ODCB1 ODCBbits.ODCB1
#define _ODCB4 ODCBbits.ODCB4
#define _ODCB7 ODCBbits.ODCB7
#define _ODCB8 ODCBbits.ODCB8
#define _ODCB9 ODCBbits.ODCB9
#define _ODCB12 ODCBbits.ODCB12
#define _ODCB13 ODCBbits.ODCB13
#define _ODCB14 ODCBbits.ODCB14
#define _ODCB15 ODCBbits.ODCB15

/* PADCFG1 */
#define _RTSECSEL PADCFG1bits.RTSECSEL

/* AD1CON1 */
#define _DONE AD1CON1bits.DONE
#define _SAMP AD1CON1bits.SAMP
#define _ASAM AD1CON1bits.ASAM
#define _SIMSAM AD1CON1bits.SIMSAM
#define _SSRC AD1CON1bits.SSRC
#define _FORM AD1CON1bits.FORM
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

/* AD1PCFGL */
#define _PCFG0 AD1PCFGLbits.PCFG0
#define _PCFG1 AD1PCFGLbits.PCFG1
#define _PCFG2 AD1PCFGLbits.PCFG2
#define _PCFG3 AD1PCFGLbits.PCFG3

/* AD1CSSL */
#define _CSS0 AD1CSSLbits.CSS0
#define _CSS1 AD1CSSLbits.CSS1
#define _CSS2 AD1CSSLbits.CSS2
#define _CSS3 AD1CSSLbits.CSS3

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

/* ALCFGRPT */
#define _ARPT ALCFGRPTbits.ARPT
#define _ALRMPTR ALCFGRPTbits.ALRMPTR
#define _AMASK ALCFGRPTbits.AMASK
#define _CHIME ALCFGRPTbits.CHIME
#define _ALRMEN ALCFGRPTbits.ALRMEN
#define _ARPT0 ALCFGRPTbits.ARPT0
#define _ARPT1 ALCFGRPTbits.ARPT1
#define _ARPT2 ALCFGRPTbits.ARPT2
#define _ARPT3 ALCFGRPTbits.ARPT3
#define _ARPT4 ALCFGRPTbits.ARPT4
#define _ARPT5 ALCFGRPTbits.ARPT5
#define _ARPT6 ALCFGRPTbits.ARPT6
#define _ARPT7 ALCFGRPTbits.ARPT7
#define _ALRMPTR0 ALCFGRPTbits.ALRMPTR0
#define _ALRMPTR1 ALCFGRPTbits.ALRMPTR1
#define _AMASK0 ALCFGRPTbits.AMASK0
#define _AMASK1 ALCFGRPTbits.AMASK1
#define _AMASK2 ALCFGRPTbits.AMASK2
#define _AMASK3 ALCFGRPTbits.AMASK3

/* RCFGCAL */
#define _CAL RCFGCALbits.CAL
#define _RTCPTR RCFGCALbits.RTCPTR
#define _RTCOE RCFGCALbits.RTCOE
#define _HALFSEC RCFGCALbits.HALFSEC
#define _RTCSYNC RCFGCALbits.RTCSYNC
#define _RTCWREN RCFGCALbits.RTCWREN
#define _RTCEN RCFGCALbits.RTCEN
#define _CAL0 RCFGCALbits.CAL0
#define _CAL1 RCFGCALbits.CAL1
#define _CAL2 RCFGCALbits.CAL2
#define _CAL3 RCFGCALbits.CAL3
#define _CAL4 RCFGCALbits.CAL4
#define _CAL5 RCFGCALbits.CAL5
#define _CAL6 RCFGCALbits.CAL6
#define _CAL7 RCFGCALbits.CAL7
#define _RTCPTR0 RCFGCALbits.RTCPTR0
#define _RTCPTR1 RCFGCALbits.RTCPTR1

/* CMSTAT */
#define _C1OUT CMSTATbits.C1OUT
#define _C2OUT CMSTATbits.C2OUT
#define _C3OUT CMSTATbits.C3OUT
#define _C1EVT CMSTATbits.C1EVT
#define _C2EVT CMSTATbits.C2EVT
#define _C3EVT CMSTATbits.C3EVT
#define _CMSIDL CMSTATbits.CMSIDL

/* CVRCON */
#define _CVR CVRCONbits.CVR
#define _CVRR CVRCONbits.CVRR
#define _CVROE CVRCONbits.CVROE
#define _CVREN CVRCONbits.CVREN
#define _BGSEL CVRCONbits.BGSEL
#define _VREFSEL CVRCONbits.VREFSEL
#define _CVR0 CVRCONbits.CVR0
#define _CVR1 CVRCONbits.CVR1
#define _CVR2 CVRCONbits.CVR2
#define _CVR3 CVRCONbits.CVR3
#define _BGSEL0 CVRCONbits.BGSEL0
#define _BGSEL1 CVRCONbits.BGSEL1

/* CM1CON */
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

/* RPINR0 */
#define _INT1R RPINR0bits.INT1R
#define _INT1R0 RPINR0bits.INT1R0
#define _INT1R1 RPINR0bits.INT1R1
#define _INT1R2 RPINR0bits.INT1R2
#define _INT1R3 RPINR0bits.INT1R3
#define _INT1R4 RPINR0bits.INT1R4

/* RPINR1 */
#define _INT2R RPINR1bits.INT2R
#define _INT2R0 RPINR1bits.INT2R0
#define _INT2R1 RPINR1bits.INT2R1
#define _INT2R2 RPINR1bits.INT2R2
#define _INT2R3 RPINR1bits.INT2R3
#define _INT2R4 RPINR1bits.INT2R4

/* RPINR3 */
#define _T2CKR RPINR3bits.T2CKR
#define _T3CKR RPINR3bits.T3CKR
#define _T2CKR0 RPINR3bits.T2CKR0
#define _T2CKR1 RPINR3bits.T2CKR1
#define _T2CKR2 RPINR3bits.T2CKR2
#define _T2CKR3 RPINR3bits.T2CKR3
#define _T2CKR4 RPINR3bits.T2CKR4
#define _T3CKR0 RPINR3bits.T3CKR0
#define _T3CKR1 RPINR3bits.T3CKR1
#define _T3CKR2 RPINR3bits.T3CKR2
#define _T3CKR3 RPINR3bits.T3CKR3
#define _T3CKR4 RPINR3bits.T3CKR4

/* RPINR7 */
#define _IC1R RPINR7bits.IC1R
#define _IC2R RPINR7bits.IC2R
#define _IC1R0 RPINR7bits.IC1R0
#define _IC1R1 RPINR7bits.IC1R1
#define _IC1R2 RPINR7bits.IC1R2
#define _IC1R3 RPINR7bits.IC1R3
#define _IC1R4 RPINR7bits.IC1R4
#define _IC2R0 RPINR7bits.IC2R0
#define _IC2R1 RPINR7bits.IC2R1
#define _IC2R2 RPINR7bits.IC2R2
#define _IC2R3 RPINR7bits.IC2R3
#define _IC2R4 RPINR7bits.IC2R4

/* RPINR8 */
#define _IC3R RPINR8bits.IC3R
#define _IC3R0 RPINR8bits.IC3R0
#define _IC3R1 RPINR8bits.IC3R1
#define _IC3R2 RPINR8bits.IC3R2
#define _IC3R3 RPINR8bits.IC3R3
#define _IC3R4 RPINR8bits.IC3R4

/* RPINR11 */
#define _OCFAR RPINR11bits.OCFAR
#define _OCFAR0 RPINR11bits.OCFAR0
#define _OCFAR1 RPINR11bits.OCFAR1
#define _OCFAR2 RPINR11bits.OCFAR2
#define _OCFAR3 RPINR11bits.OCFAR3
#define _OCFAR4 RPINR11bits.OCFAR4

/* RPINR18 */
#define _U1RXR RPINR18bits.U1RXR
#define _U1CTSR RPINR18bits.U1CTSR
#define _U1RXR0 RPINR18bits.U1RXR0
#define _U1RXR1 RPINR18bits.U1RXR1
#define _U1RXR2 RPINR18bits.U1RXR2
#define _U1RXR3 RPINR18bits.U1RXR3
#define _U1RXR4 RPINR18bits.U1RXR4
#define _U1CTSR0 RPINR18bits.U1CTSR0
#define _U1CTSR1 RPINR18bits.U1CTSR1
#define _U1CTSR2 RPINR18bits.U1CTSR2
#define _U1CTSR3 RPINR18bits.U1CTSR3
#define _U1CTSR4 RPINR18bits.U1CTSR4

/* RPINR21 */
#define _SS1R RPINR21bits.SS1R
#define _SS1R0 RPINR21bits.SS1R0
#define _SS1R1 RPINR21bits.SS1R1
#define _SS1R2 RPINR21bits.SS1R2
#define _SS1R3 RPINR21bits.SS1R3
#define _SS1R4 RPINR21bits.SS1R4

/* RPOR0 */
#define _RP0R RPOR0bits.RP0R
#define _RP1R RPOR0bits.RP1R
#define _RP0R0 RPOR0bits.RP0R0
#define _RP0R1 RPOR0bits.RP0R1
#define _RP0R2 RPOR0bits.RP0R2
#define _RP0R3 RPOR0bits.RP0R3
#define _RP0R4 RPOR0bits.RP0R4
#define _RP1R0 RPOR0bits.RP1R0
#define _RP1R1 RPOR0bits.RP1R1
#define _RP1R2 RPOR0bits.RP1R2
#define _RP1R3 RPOR0bits.RP1R3
#define _RP1R4 RPOR0bits.RP1R4

/* RPOR2 */
#define _RP4R RPOR2bits.RP4R
#define _RP4R0 RPOR2bits.RP4R0
#define _RP4R1 RPOR2bits.RP4R1
#define _RP4R2 RPOR2bits.RP4R2
#define _RP4R3 RPOR2bits.RP4R3
#define _RP4R4 RPOR2bits.RP4R4

/* RPOR3 */
#define _RP7R RPOR3bits.RP7R
#define _RP7R0 RPOR3bits.RP7R0
#define _RP7R1 RPOR3bits.RP7R1
#define _RP7R2 RPOR3bits.RP7R2
#define _RP7R3 RPOR3bits.RP7R3
#define _RP7R4 RPOR3bits.RP7R4

/* RPOR4 */
#define _RP8R RPOR4bits.RP8R
#define _RP9R RPOR4bits.RP9R
#define _RP8R0 RPOR4bits.RP8R0
#define _RP8R1 RPOR4bits.RP8R1
#define _RP8R2 RPOR4bits.RP8R2
#define _RP8R3 RPOR4bits.RP8R3
#define _RP8R4 RPOR4bits.RP8R4
#define _RP9R0 RPOR4bits.RP9R0
#define _RP9R1 RPOR4bits.RP9R1
#define _RP9R2 RPOR4bits.RP9R2
#define _RP9R3 RPOR4bits.RP9R3
#define _RP9R4 RPOR4bits.RP9R4

/* RPOR6 */
#define _RP12R RPOR6bits.RP12R
#define _RP13R RPOR6bits.RP13R
#define _RP12R0 RPOR6bits.RP12R0
#define _RP12R1 RPOR6bits.RP12R1
#define _RP12R2 RPOR6bits.RP12R2
#define _RP12R3 RPOR6bits.RP12R3
#define _RP12R4 RPOR6bits.RP12R4
#define _RP13R0 RPOR6bits.RP13R0
#define _RP13R1 RPOR6bits.RP13R1
#define _RP13R2 RPOR6bits.RP13R2
#define _RP13R3 RPOR6bits.RP13R3
#define _RP13R4 RPOR6bits.RP13R4

/* RPOR7 */
#define _RP14R RPOR7bits.RP14R
#define _RP15R RPOR7bits.RP15R
#define _RP14R0 RPOR7bits.RP14R0
#define _RP14R1 RPOR7bits.RP14R1
#define _RP14R2 RPOR7bits.RP14R2
#define _RP14R3 RPOR7bits.RP14R3
#define _RP14R4 RPOR7bits.RP14R4
#define _RP15R0 RPOR7bits.RP15R0
#define _RP15R1 RPOR7bits.RP15R1
#define _RP15R2 RPOR7bits.RP15R2
#define _RP15R3 RPOR7bits.RP15R3
#define _RP15R4 RPOR7bits.RP15R4

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
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _LPOSCEN OSCCONbits.LPOSCEN
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
#define _FRCDIV CLKDIVbits.FRCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _FRCDIV0 CLKDIVbits.FRCDIV0
#define _FRCDIV1 CLKDIVbits.FRCDIV1
#define _FRCDIV2 CLKDIVbits.FRCDIV2
#define _DOZE0 CLKDIVbits.DOZE0
#define _DOZE1 CLKDIVbits.DOZE1
#define _DOZE2 CLKDIVbits.DOZE2

/* OSCTUN */
#define _TUN OSCTUNbits.TUN
#define _TUN0 OSCTUNbits.TUN0
#define _TUN1 OSCTUNbits.TUN1
#define _TUN2 OSCTUNbits.TUN2
#define _TUN3 OSCTUNbits.TUN3
#define _TUN4 OSCTUNbits.TUN4
#define _TUN5 OSCTUNbits.TUN5

/* NVMCON */
#define _NVMOP NVMCONbits.NVMOP
#define _ERASE NVMCONbits.ERASE
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _NVMOP0 NVMCONbits.NVMOP0
#define _NVMOP1 NVMCONbits.NVMOP1
#define _NVMOP2 NVMCONbits.NVMOP2
#define _NVMOP3 NVMCONbits.NVMOP3

/* PMD1 */
#define _AD1MD PMD1bits.AD1MD
#define _SPI1MD PMD1bits.SPI1MD
#define _U1MD PMD1bits.U1MD
#define _I2C1MD PMD1bits.I2C1MD
#define _PWM1MD PMD1bits.PWM1MD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD
#define _T3MD PMD1bits.T3MD

/* PMD2 */
#define _OC1MD PMD2bits.OC1MD
#define _OC2MD PMD2bits.OC2MD
#define _IC1MD PMD2bits.IC1MD
#define _IC2MD PMD2bits.IC2MD
#define _IC3MD PMD2bits.IC3MD

/* PMD3 */
#define _RTCCMD PMD3bits.RTCCMD
#define _CMPMD PMD3bits.CMPMD

/* PMD4 */
#define _CTMUMD PMD4bits.CTMUMD


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
/* For example, to declare an uninitialized array that is     */
/* aligned to a 32 byte address:                              */
/*                                                            */
/* int _BSS(32) buf[16];                                      */
/*                                                            */
/* To declare an initialized array without special            */
/* alignment:                                                 */
/*                                                            */
/* int _DATA(2) table1[] = {0, 1, 1, 2, 3, 5, 8, 13, 21};     */
/*                                                            */
#define _BSS(N)    __attribute__((aligned(N)))
#define _DATA(N)   __attribute__((aligned(N)))

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

#define _SR_IPL0_POSITION                        0x00000005
#define _SR_IPL0_MASK                            0x00000020
#define _SR_IPL0_LENGTH                          0x00000001

#define _SR_IPL1_POSITION                        0x00000006
#define _SR_IPL1_MASK                            0x00000040
#define _SR_IPL1_LENGTH                          0x00000001

#define _SR_IPL2_POSITION                        0x00000007
#define _SR_IPL2_MASK                            0x00000080
#define _SR_IPL2_LENGTH                          0x00000001

#define _CORCON_PSV_POSITION                     0x00000002
#define _CORCON_PSV_MASK                         0x00000004
#define _CORCON_PSV_LENGTH                       0x00000001

#define _CORCON_IPL3_POSITION                    0x00000003
#define _CORCON_IPL3_MASK                        0x00000008
#define _CORCON_IPL3_LENGTH                      0x00000001

#define _CNEN1_CN0IE_POSITION                    0x00000000
#define _CNEN1_CN0IE_MASK                        0x00000001
#define _CNEN1_CN0IE_LENGTH                      0x00000001

#define _CNEN1_CN1IE_POSITION                    0x00000001
#define _CNEN1_CN1IE_MASK                        0x00000002
#define _CNEN1_CN1IE_LENGTH                      0x00000001

#define _CNEN1_CN2IE_POSITION                    0x00000002
#define _CNEN1_CN2IE_MASK                        0x00000004
#define _CNEN1_CN2IE_LENGTH                      0x00000001

#define _CNEN1_CN3IE_POSITION                    0x00000003
#define _CNEN1_CN3IE_MASK                        0x00000008
#define _CNEN1_CN3IE_LENGTH                      0x00000001

#define _CNEN1_CN4IE_POSITION                    0x00000004
#define _CNEN1_CN4IE_MASK                        0x00000010
#define _CNEN1_CN4IE_LENGTH                      0x00000001

#define _CNEN1_CN5IE_POSITION                    0x00000005
#define _CNEN1_CN5IE_MASK                        0x00000020
#define _CNEN1_CN5IE_LENGTH                      0x00000001

#define _CNEN1_CN11IE_POSITION                   0x0000000B
#define _CNEN1_CN11IE_MASK                       0x00000800
#define _CNEN1_CN11IE_LENGTH                     0x00000001

#define _CNEN1_CN12IE_POSITION                   0x0000000C
#define _CNEN1_CN12IE_MASK                       0x00001000
#define _CNEN1_CN12IE_LENGTH                     0x00000001

#define _CNEN1_CN13IE_POSITION                   0x0000000D
#define _CNEN1_CN13IE_MASK                       0x00002000
#define _CNEN1_CN13IE_LENGTH                     0x00000001

#define _CNEN1_CN14IE_POSITION                   0x0000000E
#define _CNEN1_CN14IE_MASK                       0x00004000
#define _CNEN1_CN14IE_LENGTH                     0x00000001

#define _CNEN2_CN21IE_POSITION                   0x00000005
#define _CNEN2_CN21IE_MASK                       0x00000020
#define _CNEN2_CN21IE_LENGTH                     0x00000001

#define _CNEN2_CN22IE_POSITION                   0x00000006
#define _CNEN2_CN22IE_MASK                       0x00000040
#define _CNEN2_CN22IE_LENGTH                     0x00000001

#define _CNEN2_CN23IE_POSITION                   0x00000007
#define _CNEN2_CN23IE_MASK                       0x00000080
#define _CNEN2_CN23IE_LENGTH                     0x00000001

#define _CNEN2_CN29IE_POSITION                   0x0000000D
#define _CNEN2_CN29IE_MASK                       0x00002000
#define _CNEN2_CN29IE_LENGTH                     0x00000001

#define _CNEN2_CN30IE_POSITION                   0x0000000E
#define _CNEN2_CN30IE_MASK                       0x00004000
#define _CNEN2_CN30IE_LENGTH                     0x00000001

#define _CNPU1_CN0PUE_POSITION                   0x00000000
#define _CNPU1_CN0PUE_MASK                       0x00000001
#define _CNPU1_CN0PUE_LENGTH                     0x00000001

#define _CNPU1_CN1PUE_POSITION                   0x00000001
#define _CNPU1_CN1PUE_MASK                       0x00000002
#define _CNPU1_CN1PUE_LENGTH                     0x00000001

#define _CNPU1_CN2PUE_POSITION                   0x00000002
#define _CNPU1_CN2PUE_MASK                       0x00000004
#define _CNPU1_CN2PUE_LENGTH                     0x00000001

#define _CNPU1_CN3PUE_POSITION                   0x00000003
#define _CNPU1_CN3PUE_MASK                       0x00000008
#define _CNPU1_CN3PUE_LENGTH                     0x00000001

#define _CNPU1_CN4PUE_POSITION                   0x00000004
#define _CNPU1_CN4PUE_MASK                       0x00000010
#define _CNPU1_CN4PUE_LENGTH                     0x00000001

#define _CNPU1_CN5PUE_POSITION                   0x00000005
#define _CNPU1_CN5PUE_MASK                       0x00000020
#define _CNPU1_CN5PUE_LENGTH                     0x00000001

#define _CNPU1_CN11PUE_POSITION                  0x0000000B
#define _CNPU1_CN11PUE_MASK                      0x00000800
#define _CNPU1_CN11PUE_LENGTH                    0x00000001

#define _CNPU1_CN12PUE_POSITION                  0x0000000C
#define _CNPU1_CN12PUE_MASK                      0x00001000
#define _CNPU1_CN12PUE_LENGTH                    0x00000001

#define _CNPU1_CN13PUE_POSITION                  0x0000000D
#define _CNPU1_CN13PUE_MASK                      0x00002000
#define _CNPU1_CN13PUE_LENGTH                    0x00000001

#define _CNPU1_CN14PUE_POSITION                  0x0000000E
#define _CNPU1_CN14PUE_MASK                      0x00004000
#define _CNPU1_CN14PUE_LENGTH                    0x00000001

#define _CNPU2_CN21PUE_POSITION                  0x00000005
#define _CNPU2_CN21PUE_MASK                      0x00000020
#define _CNPU2_CN21PUE_LENGTH                    0x00000001

#define _CNPU2_CN22PUE_POSITION                  0x00000006
#define _CNPU2_CN22PUE_MASK                      0x00000040
#define _CNPU2_CN22PUE_LENGTH                    0x00000001

#define _CNPU2_CN23PUE_POSITION                  0x00000007
#define _CNPU2_CN23PUE_MASK                      0x00000080
#define _CNPU2_CN23PUE_LENGTH                    0x00000001

#define _CNPU2_CN29PUE_POSITION                  0x0000000D
#define _CNPU2_CN29PUE_MASK                      0x00002000
#define _CNPU2_CN29PUE_LENGTH                    0x00000001

#define _CNPU2_CN30PUE_POSITION                  0x0000000E
#define _CNPU2_CN30PUE_MASK                      0x00004000
#define _CNPU2_CN30PUE_LENGTH                    0x00000001

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

#define _INTCON2_DISI_POSITION                   0x0000000E
#define _INTCON2_DISI_MASK                       0x00004000
#define _INTCON2_DISI_LENGTH                     0x00000001

#define _INTCON2_ALTIVT_POSITION                 0x0000000F
#define _INTCON2_ALTIVT_MASK                     0x00008000
#define _INTCON2_ALTIVT_LENGTH                   0x00000001

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

#define _IFS0_AD1IF_POSITION                     0x0000000D
#define _IFS0_AD1IF_MASK                         0x00002000
#define _IFS0_AD1IF_LENGTH                       0x00000001

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

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS2_IC3IF_POSITION                     0x00000005
#define _IFS2_IC3IF_MASK                         0x00000020
#define _IFS2_IC3IF_LENGTH                       0x00000001

#define _IFS3_PWM1IF_POSITION                    0x00000009
#define _IFS3_PWM1IF_MASK                        0x00000200
#define _IFS3_PWM1IF_LENGTH                      0x00000001

#define _IFS3_RTCIF_POSITION                     0x0000000E
#define _IFS3_RTCIF_MASK                         0x00004000
#define _IFS3_RTCIF_LENGTH                       0x00000001

#define _IFS3_FLTA1IF_POSITION                   0x0000000F
#define _IFS3_FLTA1IF_MASK                       0x00008000
#define _IFS3_FLTA1IF_LENGTH                     0x00000001

#define _IFS4_FLTB1IF_POSITION                   0x00000000
#define _IFS4_FLTB1IF_MASK                       0x00000001
#define _IFS4_FLTB1IF_LENGTH                     0x00000001

#define _IFS4_U1EIF_POSITION                     0x00000001
#define _IFS4_U1EIF_MASK                         0x00000002
#define _IFS4_U1EIF_LENGTH                       0x00000001

#define _IFS4_CTMUIF_POSITION                    0x0000000D
#define _IFS4_CTMUIF_MASK                        0x00002000
#define _IFS4_CTMUIF_LENGTH                      0x00000001

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

#define _IEC0_AD1IE_POSITION                     0x0000000D
#define _IEC0_AD1IE_MASK                         0x00002000
#define _IEC0_AD1IE_LENGTH                       0x00000001

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

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC1_SI2CIE_POSITION                    0x00000000
#define _IEC1_SI2CIE_MASK                        0x00000001
#define _IEC1_SI2CIE_LENGTH                      0x00000001

#define _IEC2_IC3IE_POSITION                     0x00000005
#define _IEC2_IC3IE_MASK                         0x00000020
#define _IEC2_IC3IE_LENGTH                       0x00000001

#define _IEC3_PWM1IE_POSITION                    0x00000009
#define _IEC3_PWM1IE_MASK                        0x00000200
#define _IEC3_PWM1IE_LENGTH                      0x00000001

#define _IEC3_RTCIE_POSITION                     0x0000000E
#define _IEC3_RTCIE_MASK                         0x00004000
#define _IEC3_RTCIE_LENGTH                       0x00000001

#define _IEC3_FLTA1IE_POSITION                   0x0000000F
#define _IEC3_FLTA1IE_MASK                       0x00008000
#define _IEC3_FLTA1IE_LENGTH                     0x00000001

#define _IEC4_FLTB1IE_POSITION                   0x00000000
#define _IEC4_FLTB1IE_MASK                       0x00000001
#define _IEC4_FLTB1IE_LENGTH                     0x00000001

#define _IEC4_U1EIE_POSITION                     0x00000001
#define _IEC4_U1EIE_MASK                         0x00000002
#define _IEC4_U1EIE_LENGTH                       0x00000001

#define _IEC4_CTMUIE_POSITION                    0x0000000D
#define _IEC4_CTMUIE_MASK                        0x00002000
#define _IEC4_CTMUIE_LENGTH                      0x00000001

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

#define _IPC3_AD1IP_POSITION                     0x00000004
#define _IPC3_AD1IP_MASK                         0x00000070
#define _IPC3_AD1IP_LENGTH                       0x00000003

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

#define _IPC9_IC3IP_POSITION                     0x00000004
#define _IPC9_IC3IP_MASK                         0x00000070
#define _IPC9_IC3IP_LENGTH                       0x00000003

#define _IPC9_IC3IP0_POSITION                    0x00000004
#define _IPC9_IC3IP0_MASK                        0x00000010
#define _IPC9_IC3IP0_LENGTH                      0x00000001

#define _IPC9_IC3IP1_POSITION                    0x00000005
#define _IPC9_IC3IP1_MASK                        0x00000020
#define _IPC9_IC3IP1_LENGTH                      0x00000001

#define _IPC9_IC3IP2_POSITION                    0x00000006
#define _IPC9_IC3IP2_MASK                        0x00000040
#define _IPC9_IC3IP2_LENGTH                      0x00000001

#define _IPC14_PWM1IP_POSITION                   0x00000004
#define _IPC14_PWM1IP_MASK                       0x00000070
#define _IPC14_PWM1IP_LENGTH                     0x00000003

#define _IPC14_PWM1IP0_POSITION                  0x00000004
#define _IPC14_PWM1IP0_MASK                      0x00000010
#define _IPC14_PWM1IP0_LENGTH                    0x00000001

#define _IPC14_PWM1IP1_POSITION                  0x00000005
#define _IPC14_PWM1IP1_MASK                      0x00000020
#define _IPC14_PWM1IP1_LENGTH                    0x00000001

#define _IPC14_PWM1IP2_POSITION                  0x00000006
#define _IPC14_PWM1IP2_MASK                      0x00000040
#define _IPC14_PWM1IP2_LENGTH                    0x00000001

#define _IPC15_RTCIP_POSITION                    0x00000008
#define _IPC15_RTCIP_MASK                        0x00000700
#define _IPC15_RTCIP_LENGTH                      0x00000003

#define _IPC15_FLTA1IP_POSITION                  0x0000000C
#define _IPC15_FLTA1IP_MASK                      0x00007000
#define _IPC15_FLTA1IP_LENGTH                    0x00000003

#define _IPC15_RTCIP0_POSITION                   0x00000008
#define _IPC15_RTCIP0_MASK                       0x00000100
#define _IPC15_RTCIP0_LENGTH                     0x00000001

#define _IPC15_RTCIP1_POSITION                   0x00000009
#define _IPC15_RTCIP1_MASK                       0x00000200
#define _IPC15_RTCIP1_LENGTH                     0x00000001

#define _IPC15_RTCIP2_POSITION                   0x0000000A
#define _IPC15_RTCIP2_MASK                       0x00000400
#define _IPC15_RTCIP2_LENGTH                     0x00000001

#define _IPC15_FLTA1IP0_POSITION                 0x0000000C
#define _IPC15_FLTA1IP0_MASK                     0x00001000
#define _IPC15_FLTA1IP0_LENGTH                   0x00000001

#define _IPC15_FLTA1IP1_POSITION                 0x0000000D
#define _IPC15_FLTA1IP1_MASK                     0x00002000
#define _IPC15_FLTA1IP1_LENGTH                   0x00000001

#define _IPC15_FLTA1IP2_POSITION                 0x0000000E
#define _IPC15_FLTA1IP2_MASK                     0x00004000
#define _IPC15_FLTA1IP2_LENGTH                   0x00000001

#define _IPC16_FLTB1IP_POSITION                  0x00000000
#define _IPC16_FLTB1IP_MASK                      0x00000007
#define _IPC16_FLTB1IP_LENGTH                    0x00000003

#define _IPC16_U1EIP_POSITION                    0x00000004
#define _IPC16_U1EIP_MASK                        0x00000070
#define _IPC16_U1EIP_LENGTH                      0x00000003

#define _IPC16_FLTB1IP0_POSITION                 0x00000000
#define _IPC16_FLTB1IP0_MASK                     0x00000001
#define _IPC16_FLTB1IP0_LENGTH                   0x00000001

#define _IPC16_FLTB1IP1_POSITION                 0x00000001
#define _IPC16_FLTB1IP1_MASK                     0x00000002
#define _IPC16_FLTB1IP1_LENGTH                   0x00000001

#define _IPC16_FLTB1IP2_POSITION                 0x00000002
#define _IPC16_FLTB1IP2_MASK                     0x00000004
#define _IPC16_FLTB1IP2_LENGTH                   0x00000001

#define _IPC16_U1EIP0_POSITION                   0x00000004
#define _IPC16_U1EIP0_MASK                       0x00000010
#define _IPC16_U1EIP0_LENGTH                     0x00000001

#define _IPC16_U1EIP1_POSITION                   0x00000005
#define _IPC16_U1EIP1_MASK                       0x00000020
#define _IPC16_U1EIP1_LENGTH                     0x00000001

#define _IPC16_U1EIP2_POSITION                   0x00000006
#define _IPC16_U1EIP2_MASK                       0x00000040
#define _IPC16_U1EIP2_LENGTH                     0x00000001

#define _IPC19_CTMUIP_POSITION                   0x00000004
#define _IPC19_CTMUIP_MASK                       0x00000070
#define _IPC19_CTMUIP_LENGTH                     0x00000003

#define _IPC19_CTMUIP0_POSITION                  0x00000004
#define _IPC19_CTMUIP0_MASK                      0x00000010
#define _IPC19_CTMUIP0_LENGTH                    0x00000001

#define _IPC19_CTMUIP1_POSITION                  0x00000005
#define _IPC19_CTMUIP1_MASK                      0x00000020
#define _IPC19_CTMUIP1_LENGTH                    0x00000001

#define _IPC19_CTMUIP2_POSITION                  0x00000006
#define _IPC19_CTMUIP2_MASK                      0x00000040
#define _IPC19_CTMUIP2_LENGTH                    0x00000001

#define _INTTREG_VECNUM_POSITION                 0x00000000
#define _INTTREG_VECNUM_MASK                     0x0000007F
#define _INTTREG_VECNUM_LENGTH                   0x00000007

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

#define _IC1CON_ICM_POSITION                     0x00000000
#define _IC1CON_ICM_MASK                         0x00000007
#define _IC1CON_ICM_LENGTH                       0x00000003

#define _IC1CON_ICBNE_POSITION                   0x00000003
#define _IC1CON_ICBNE_MASK                       0x00000008
#define _IC1CON_ICBNE_LENGTH                     0x00000001

#define _IC1CON_ICOV_POSITION                    0x00000004
#define _IC1CON_ICOV_MASK                        0x00000010
#define _IC1CON_ICOV_LENGTH                      0x00000001

#define _IC1CON_ICI_POSITION                     0x00000005
#define _IC1CON_ICI_MASK                         0x00000060
#define _IC1CON_ICI_LENGTH                       0x00000002

#define _IC1CON_ICTMR_POSITION                   0x00000007
#define _IC1CON_ICTMR_MASK                       0x00000080
#define _IC1CON_ICTMR_LENGTH                     0x00000001

#define _IC1CON_ICSIDL_POSITION                  0x0000000D
#define _IC1CON_ICSIDL_MASK                      0x00002000
#define _IC1CON_ICSIDL_LENGTH                    0x00000001

#define _IC1CON_ICM0_POSITION                    0x00000000
#define _IC1CON_ICM0_MASK                        0x00000001
#define _IC1CON_ICM0_LENGTH                      0x00000001

#define _IC1CON_ICM1_POSITION                    0x00000001
#define _IC1CON_ICM1_MASK                        0x00000002
#define _IC1CON_ICM1_LENGTH                      0x00000001

#define _IC1CON_ICM2_POSITION                    0x00000002
#define _IC1CON_ICM2_MASK                        0x00000004
#define _IC1CON_ICM2_LENGTH                      0x00000001

#define _IC1CON_ICI0_POSITION                    0x00000005
#define _IC1CON_ICI0_MASK                        0x00000020
#define _IC1CON_ICI0_LENGTH                      0x00000001

#define _IC1CON_ICI1_POSITION                    0x00000006
#define _IC1CON_ICI1_MASK                        0x00000040
#define _IC1CON_ICI1_LENGTH                      0x00000001

#define _IC2CON_ICM_POSITION                     0x00000000
#define _IC2CON_ICM_MASK                         0x00000007
#define _IC2CON_ICM_LENGTH                       0x00000003

#define _IC2CON_ICBNE_POSITION                   0x00000003
#define _IC2CON_ICBNE_MASK                       0x00000008
#define _IC2CON_ICBNE_LENGTH                     0x00000001

#define _IC2CON_ICOV_POSITION                    0x00000004
#define _IC2CON_ICOV_MASK                        0x00000010
#define _IC2CON_ICOV_LENGTH                      0x00000001

#define _IC2CON_ICI_POSITION                     0x00000005
#define _IC2CON_ICI_MASK                         0x00000060
#define _IC2CON_ICI_LENGTH                       0x00000002

#define _IC2CON_ICTMR_POSITION                   0x00000007
#define _IC2CON_ICTMR_MASK                       0x00000080
#define _IC2CON_ICTMR_LENGTH                     0x00000001

#define _IC2CON_ICSIDL_POSITION                  0x0000000D
#define _IC2CON_ICSIDL_MASK                      0x00002000
#define _IC2CON_ICSIDL_LENGTH                    0x00000001

#define _IC2CON_ICM0_POSITION                    0x00000000
#define _IC2CON_ICM0_MASK                        0x00000001
#define _IC2CON_ICM0_LENGTH                      0x00000001

#define _IC2CON_ICM1_POSITION                    0x00000001
#define _IC2CON_ICM1_MASK                        0x00000002
#define _IC2CON_ICM1_LENGTH                      0x00000001

#define _IC2CON_ICM2_POSITION                    0x00000002
#define _IC2CON_ICM2_MASK                        0x00000004
#define _IC2CON_ICM2_LENGTH                      0x00000001

#define _IC2CON_ICI0_POSITION                    0x00000005
#define _IC2CON_ICI0_MASK                        0x00000020
#define _IC2CON_ICI0_LENGTH                      0x00000001

#define _IC2CON_ICI1_POSITION                    0x00000006
#define _IC2CON_ICI1_MASK                        0x00000040
#define _IC2CON_ICI1_LENGTH                      0x00000001

#define _IC3CON_ICM_POSITION                     0x00000000
#define _IC3CON_ICM_MASK                         0x00000007
#define _IC3CON_ICM_LENGTH                       0x00000003

#define _IC3CON_ICBNE_POSITION                   0x00000003
#define _IC3CON_ICBNE_MASK                       0x00000008
#define _IC3CON_ICBNE_LENGTH                     0x00000001

#define _IC3CON_ICOV_POSITION                    0x00000004
#define _IC3CON_ICOV_MASK                        0x00000010
#define _IC3CON_ICOV_LENGTH                      0x00000001

#define _IC3CON_ICI_POSITION                     0x00000005
#define _IC3CON_ICI_MASK                         0x00000060
#define _IC3CON_ICI_LENGTH                       0x00000002

#define _IC3CON_ICTMR_POSITION                   0x00000007
#define _IC3CON_ICTMR_MASK                       0x00000080
#define _IC3CON_ICTMR_LENGTH                     0x00000001

#define _IC3CON_ICSIDL_POSITION                  0x0000000D
#define _IC3CON_ICSIDL_MASK                      0x00002000
#define _IC3CON_ICSIDL_LENGTH                    0x00000001

#define _IC3CON_ICM0_POSITION                    0x00000000
#define _IC3CON_ICM0_MASK                        0x00000001
#define _IC3CON_ICM0_LENGTH                      0x00000001

#define _IC3CON_ICM1_POSITION                    0x00000001
#define _IC3CON_ICM1_MASK                        0x00000002
#define _IC3CON_ICM1_LENGTH                      0x00000001

#define _IC3CON_ICM2_POSITION                    0x00000002
#define _IC3CON_ICM2_MASK                        0x00000004
#define _IC3CON_ICM2_LENGTH                      0x00000001

#define _IC3CON_ICI0_POSITION                    0x00000005
#define _IC3CON_ICI0_MASK                        0x00000020
#define _IC3CON_ICI0_LENGTH                      0x00000001

#define _IC3CON_ICI1_POSITION                    0x00000006
#define _IC3CON_ICI1_MASK                        0x00000040
#define _IC3CON_ICI1_LENGTH                      0x00000001

#define _OC1CON_OCM_POSITION                     0x00000000
#define _OC1CON_OCM_MASK                         0x00000007
#define _OC1CON_OCM_LENGTH                       0x00000003

#define _OC1CON_OCTSEL_POSITION                  0x00000003
#define _OC1CON_OCTSEL_MASK                      0x00000008
#define _OC1CON_OCTSEL_LENGTH                    0x00000001

#define _OC1CON_OCFLT_POSITION                   0x00000004
#define _OC1CON_OCFLT_MASK                       0x00000010
#define _OC1CON_OCFLT_LENGTH                     0x00000001

#define _OC1CON_OCSIDL_POSITION                  0x0000000D
#define _OC1CON_OCSIDL_MASK                      0x00002000
#define _OC1CON_OCSIDL_LENGTH                    0x00000001

#define _OC1CON_OCM0_POSITION                    0x00000000
#define _OC1CON_OCM0_MASK                        0x00000001
#define _OC1CON_OCM0_LENGTH                      0x00000001

#define _OC1CON_OCM1_POSITION                    0x00000001
#define _OC1CON_OCM1_MASK                        0x00000002
#define _OC1CON_OCM1_LENGTH                      0x00000001

#define _OC1CON_OCM2_POSITION                    0x00000002
#define _OC1CON_OCM2_MASK                        0x00000004
#define _OC1CON_OCM2_LENGTH                      0x00000001

#define _OC2CON_OCM_POSITION                     0x00000000
#define _OC2CON_OCM_MASK                         0x00000007
#define _OC2CON_OCM_LENGTH                       0x00000003

#define _OC2CON_OCTSEL_POSITION                  0x00000003
#define _OC2CON_OCTSEL_MASK                      0x00000008
#define _OC2CON_OCTSEL_LENGTH                    0x00000001

#define _OC2CON_OCFLT_POSITION                   0x00000004
#define _OC2CON_OCFLT_MASK                       0x00000010
#define _OC2CON_OCFLT_LENGTH                     0x00000001

#define _OC2CON_OCSIDL_POSITION                  0x0000000D
#define _OC2CON_OCSIDL_MASK                      0x00002000
#define _OC2CON_OCSIDL_LENGTH                    0x00000001

#define _OC2CON_OCM0_POSITION                    0x00000000
#define _OC2CON_OCM0_MASK                        0x00000001
#define _OC2CON_OCM0_LENGTH                      0x00000001

#define _OC2CON_OCM1_POSITION                    0x00000001
#define _OC2CON_OCM1_MASK                        0x00000002
#define _OC2CON_OCM1_LENGTH                      0x00000001

#define _OC2CON_OCM2_POSITION                    0x00000002
#define _OC2CON_OCM2_MASK                        0x00000004
#define _OC2CON_OCM2_LENGTH                      0x00000001

#define _P1TCON_PTMOD_POSITION                   0x00000000
#define _P1TCON_PTMOD_MASK                       0x00000003
#define _P1TCON_PTMOD_LENGTH                     0x00000002

#define _P1TCON_PTCKPS_POSITION                  0x00000002
#define _P1TCON_PTCKPS_MASK                      0x0000000C
#define _P1TCON_PTCKPS_LENGTH                    0x00000002

#define _P1TCON_PTOPS_POSITION                   0x00000004
#define _P1TCON_PTOPS_MASK                       0x000000F0
#define _P1TCON_PTOPS_LENGTH                     0x00000004

#define _P1TCON_PTSIDL_POSITION                  0x0000000D
#define _P1TCON_PTSIDL_MASK                      0x00002000
#define _P1TCON_PTSIDL_LENGTH                    0x00000001

#define _P1TCON_PTEN_POSITION                    0x0000000F
#define _P1TCON_PTEN_MASK                        0x00008000
#define _P1TCON_PTEN_LENGTH                      0x00000001

#define _P1TCON_PTMOD0_POSITION                  0x00000000
#define _P1TCON_PTMOD0_MASK                      0x00000001
#define _P1TCON_PTMOD0_LENGTH                    0x00000001

#define _P1TCON_PTMOD1_POSITION                  0x00000001
#define _P1TCON_PTMOD1_MASK                      0x00000002
#define _P1TCON_PTMOD1_LENGTH                    0x00000001

#define _P1TCON_PTCKPS0_POSITION                 0x00000002
#define _P1TCON_PTCKPS0_MASK                     0x00000004
#define _P1TCON_PTCKPS0_LENGTH                   0x00000001

#define _P1TCON_PTCKPS1_POSITION                 0x00000003
#define _P1TCON_PTCKPS1_MASK                     0x00000008
#define _P1TCON_PTCKPS1_LENGTH                   0x00000001

#define _P1TCON_PTOPS0_POSITION                  0x00000004
#define _P1TCON_PTOPS0_MASK                      0x00000010
#define _P1TCON_PTOPS0_LENGTH                    0x00000001

#define _P1TCON_PTOPS1_POSITION                  0x00000005
#define _P1TCON_PTOPS1_MASK                      0x00000020
#define _P1TCON_PTOPS1_LENGTH                    0x00000001

#define _P1TCON_PTOPS2_POSITION                  0x00000006
#define _P1TCON_PTOPS2_MASK                      0x00000040
#define _P1TCON_PTOPS2_LENGTH                    0x00000001

#define _P1TCON_PTOPS3_POSITION                  0x00000007
#define _P1TCON_PTOPS3_MASK                      0x00000080
#define _P1TCON_PTOPS3_LENGTH                    0x00000001

#define _PTCON_PTMOD_POSITION                    0x00000000
#define _PTCON_PTMOD_MASK                        0x00000003
#define _PTCON_PTMOD_LENGTH                      0x00000002

#define _PTCON_PTCKPS_POSITION                   0x00000002
#define _PTCON_PTCKPS_MASK                       0x0000000C
#define _PTCON_PTCKPS_LENGTH                     0x00000002

#define _PTCON_PTOPS_POSITION                    0x00000004
#define _PTCON_PTOPS_MASK                        0x000000F0
#define _PTCON_PTOPS_LENGTH                      0x00000004

#define _PTCON_PTSIDL_POSITION                   0x0000000D
#define _PTCON_PTSIDL_MASK                       0x00002000
#define _PTCON_PTSIDL_LENGTH                     0x00000001

#define _PTCON_PTEN_POSITION                     0x0000000F
#define _PTCON_PTEN_MASK                         0x00008000
#define _PTCON_PTEN_LENGTH                       0x00000001

#define _PTCON_PTMOD0_POSITION                   0x00000000
#define _PTCON_PTMOD0_MASK                       0x00000001
#define _PTCON_PTMOD0_LENGTH                     0x00000001

#define _PTCON_PTMOD1_POSITION                   0x00000001
#define _PTCON_PTMOD1_MASK                       0x00000002
#define _PTCON_PTMOD1_LENGTH                     0x00000001

#define _PTCON_PTCKPS0_POSITION                  0x00000002
#define _PTCON_PTCKPS0_MASK                      0x00000004
#define _PTCON_PTCKPS0_LENGTH                    0x00000001

#define _PTCON_PTCKPS1_POSITION                  0x00000003
#define _PTCON_PTCKPS1_MASK                      0x00000008
#define _PTCON_PTCKPS1_LENGTH                    0x00000001

#define _PTCON_PTOPS0_POSITION                   0x00000004
#define _PTCON_PTOPS0_MASK                       0x00000010
#define _PTCON_PTOPS0_LENGTH                     0x00000001

#define _PTCON_PTOPS1_POSITION                   0x00000005
#define _PTCON_PTOPS1_MASK                       0x00000020
#define _PTCON_PTOPS1_LENGTH                     0x00000001

#define _PTCON_PTOPS2_POSITION                   0x00000006
#define _PTCON_PTOPS2_MASK                       0x00000040
#define _PTCON_PTOPS2_LENGTH                     0x00000001

#define _PTCON_PTOPS3_POSITION                   0x00000007
#define _PTCON_PTOPS3_MASK                       0x00000080
#define _PTCON_PTOPS3_LENGTH                     0x00000001

#define _P1TMR_PTMR_POSITION                     0x00000000
#define _P1TMR_PTMR_MASK                         0x00007FFF
#define _P1TMR_PTMR_LENGTH                       0x0000000F

#define _P1TMR_PTDIR_POSITION                    0x0000000F
#define _P1TMR_PTDIR_MASK                        0x00008000
#define _P1TMR_PTDIR_LENGTH                      0x00000001

#define _PTMR_PTMR_POSITION                      0x00000000
#define _PTMR_PTMR_MASK                          0x00007FFF
#define _PTMR_PTMR_LENGTH                        0x0000000F

#define _PTMR_PTDIR_POSITION                     0x0000000F
#define _PTMR_PTDIR_MASK                         0x00008000
#define _PTMR_PTDIR_LENGTH                       0x00000001

#define _P1TPER_PTPER_POSITION                   0x00000000
#define _P1TPER_PTPER_MASK                       0x00007FFF
#define _P1TPER_PTPER_LENGTH                     0x0000000F

#define _PTPER_PTPER_POSITION                    0x00000000
#define _PTPER_PTPER_MASK                        0x00007FFF
#define _PTPER_PTPER_LENGTH                      0x0000000F

#define _P1SECMP_SEVTCMP_POSITION                0x00000000
#define _P1SECMP_SEVTCMP_MASK                    0x00007FFF
#define _P1SECMP_SEVTCMP_LENGTH                  0x0000000F

#define _P1SECMP_SEVTDIR_POSITION                0x0000000F
#define _P1SECMP_SEVTDIR_MASK                    0x00008000
#define _P1SECMP_SEVTDIR_LENGTH                  0x00000001

#define _SEVTCMP_SEVTCMP_POSITION                0x00000000
#define _SEVTCMP_SEVTCMP_MASK                    0x00007FFF
#define _SEVTCMP_SEVTCMP_LENGTH                  0x0000000F

#define _SEVTCMP_SEVTDIR_POSITION                0x0000000F
#define _SEVTCMP_SEVTDIR_MASK                    0x00008000
#define _SEVTCMP_SEVTDIR_LENGTH                  0x00000001

#define _PWM1CON1_PEN1L_POSITION                 0x00000000
#define _PWM1CON1_PEN1L_MASK                     0x00000001
#define _PWM1CON1_PEN1L_LENGTH                   0x00000001

#define _PWM1CON1_PEN2L_POSITION                 0x00000001
#define _PWM1CON1_PEN2L_MASK                     0x00000002
#define _PWM1CON1_PEN2L_LENGTH                   0x00000001

#define _PWM1CON1_PEN3L_POSITION                 0x00000002
#define _PWM1CON1_PEN3L_MASK                     0x00000004
#define _PWM1CON1_PEN3L_LENGTH                   0x00000001

#define _PWM1CON1_PEN1H_POSITION                 0x00000004
#define _PWM1CON1_PEN1H_MASK                     0x00000010
#define _PWM1CON1_PEN1H_LENGTH                   0x00000001

#define _PWM1CON1_PEN2H_POSITION                 0x00000005
#define _PWM1CON1_PEN2H_MASK                     0x00000020
#define _PWM1CON1_PEN2H_LENGTH                   0x00000001

#define _PWM1CON1_PEN3H_POSITION                 0x00000006
#define _PWM1CON1_PEN3H_MASK                     0x00000040
#define _PWM1CON1_PEN3H_LENGTH                   0x00000001

#define _PWM1CON1_PMOD1_POSITION                 0x00000008
#define _PWM1CON1_PMOD1_MASK                     0x00000100
#define _PWM1CON1_PMOD1_LENGTH                   0x00000001

#define _PWM1CON1_PMOD2_POSITION                 0x00000009
#define _PWM1CON1_PMOD2_MASK                     0x00000200
#define _PWM1CON1_PMOD2_LENGTH                   0x00000001

#define _PWM1CON1_PMOD3_POSITION                 0x0000000A
#define _PWM1CON1_PMOD3_MASK                     0x00000400
#define _PWM1CON1_PMOD3_LENGTH                   0x00000001

#define _PWMCON1_PEN1L_POSITION                  0x00000000
#define _PWMCON1_PEN1L_MASK                      0x00000001
#define _PWMCON1_PEN1L_LENGTH                    0x00000001

#define _PWMCON1_PEN2L_POSITION                  0x00000001
#define _PWMCON1_PEN2L_MASK                      0x00000002
#define _PWMCON1_PEN2L_LENGTH                    0x00000001

#define _PWMCON1_PEN3L_POSITION                  0x00000002
#define _PWMCON1_PEN3L_MASK                      0x00000004
#define _PWMCON1_PEN3L_LENGTH                    0x00000001

#define _PWMCON1_PEN1H_POSITION                  0x00000004
#define _PWMCON1_PEN1H_MASK                      0x00000010
#define _PWMCON1_PEN1H_LENGTH                    0x00000001

#define _PWMCON1_PEN2H_POSITION                  0x00000005
#define _PWMCON1_PEN2H_MASK                      0x00000020
#define _PWMCON1_PEN2H_LENGTH                    0x00000001

#define _PWMCON1_PEN3H_POSITION                  0x00000006
#define _PWMCON1_PEN3H_MASK                      0x00000040
#define _PWMCON1_PEN3H_LENGTH                    0x00000001

#define _PWMCON1_PMOD1_POSITION                  0x00000008
#define _PWMCON1_PMOD1_MASK                      0x00000100
#define _PWMCON1_PMOD1_LENGTH                    0x00000001

#define _PWMCON1_PMOD2_POSITION                  0x00000009
#define _PWMCON1_PMOD2_MASK                      0x00000200
#define _PWMCON1_PMOD2_LENGTH                    0x00000001

#define _PWMCON1_PMOD3_POSITION                  0x0000000A
#define _PWMCON1_PMOD3_MASK                      0x00000400
#define _PWMCON1_PMOD3_LENGTH                    0x00000001

#define _PWM1CON2_UDIS_POSITION                  0x00000000
#define _PWM1CON2_UDIS_MASK                      0x00000001
#define _PWM1CON2_UDIS_LENGTH                    0x00000001

#define _PWM1CON2_OSYNC_POSITION                 0x00000001
#define _PWM1CON2_OSYNC_MASK                     0x00000002
#define _PWM1CON2_OSYNC_LENGTH                   0x00000001

#define _PWM1CON2_IUE_POSITION                   0x00000002
#define _PWM1CON2_IUE_MASK                       0x00000004
#define _PWM1CON2_IUE_LENGTH                     0x00000001

#define _PWM1CON2_SEVOPS_POSITION                0x00000008
#define _PWM1CON2_SEVOPS_MASK                    0x00000F00
#define _PWM1CON2_SEVOPS_LENGTH                  0x00000004

#define _PWM1CON2_SEVOPS0_POSITION               0x00000008
#define _PWM1CON2_SEVOPS0_MASK                   0x00000100
#define _PWM1CON2_SEVOPS0_LENGTH                 0x00000001

#define _PWM1CON2_SEVOPS1_POSITION               0x00000009
#define _PWM1CON2_SEVOPS1_MASK                   0x00000200
#define _PWM1CON2_SEVOPS1_LENGTH                 0x00000001

#define _PWM1CON2_SEVOPS2_POSITION               0x0000000A
#define _PWM1CON2_SEVOPS2_MASK                   0x00000400
#define _PWM1CON2_SEVOPS2_LENGTH                 0x00000001

#define _PWM1CON2_SEVOPS3_POSITION               0x0000000B
#define _PWM1CON2_SEVOPS3_MASK                   0x00000800
#define _PWM1CON2_SEVOPS3_LENGTH                 0x00000001

#define _PWMCON2_UDIS_POSITION                   0x00000000
#define _PWMCON2_UDIS_MASK                       0x00000001
#define _PWMCON2_UDIS_LENGTH                     0x00000001

#define _PWMCON2_OSYNC_POSITION                  0x00000001
#define _PWMCON2_OSYNC_MASK                      0x00000002
#define _PWMCON2_OSYNC_LENGTH                    0x00000001

#define _PWMCON2_IUE_POSITION                    0x00000002
#define _PWMCON2_IUE_MASK                        0x00000004
#define _PWMCON2_IUE_LENGTH                      0x00000001

#define _PWMCON2_SEVOPS_POSITION                 0x00000008
#define _PWMCON2_SEVOPS_MASK                     0x00000F00
#define _PWMCON2_SEVOPS_LENGTH                   0x00000004

#define _PWMCON2_SEVOPS0_POSITION                0x00000008
#define _PWMCON2_SEVOPS0_MASK                    0x00000100
#define _PWMCON2_SEVOPS0_LENGTH                  0x00000001

#define _PWMCON2_SEVOPS1_POSITION                0x00000009
#define _PWMCON2_SEVOPS1_MASK                    0x00000200
#define _PWMCON2_SEVOPS1_LENGTH                  0x00000001

#define _PWMCON2_SEVOPS2_POSITION                0x0000000A
#define _PWMCON2_SEVOPS2_MASK                    0x00000400
#define _PWMCON2_SEVOPS2_LENGTH                  0x00000001

#define _PWMCON2_SEVOPS3_POSITION                0x0000000B
#define _PWMCON2_SEVOPS3_MASK                    0x00000800
#define _PWMCON2_SEVOPS3_LENGTH                  0x00000001

#define _DTCON1_DTA_POSITION                     0x00000000
#define _DTCON1_DTA_MASK                         0x0000003F
#define _DTCON1_DTA_LENGTH                       0x00000006

#define _DTCON1_DTAPS_POSITION                   0x00000006
#define _DTCON1_DTAPS_MASK                       0x000000C0
#define _DTCON1_DTAPS_LENGTH                     0x00000002

#define _DTCON1_DTB_POSITION                     0x00000008
#define _DTCON1_DTB_MASK                         0x00003F00
#define _DTCON1_DTB_LENGTH                       0x00000006

#define _DTCON1_DTBPS_POSITION                   0x0000000E
#define _DTCON1_DTBPS_MASK                       0x0000C000
#define _DTCON1_DTBPS_LENGTH                     0x00000002

#define _DTCON1_DTA0_POSITION                    0x00000000
#define _DTCON1_DTA0_MASK                        0x00000001
#define _DTCON1_DTA0_LENGTH                      0x00000001

#define _DTCON1_DTA1_POSITION                    0x00000001
#define _DTCON1_DTA1_MASK                        0x00000002
#define _DTCON1_DTA1_LENGTH                      0x00000001

#define _DTCON1_DTA2_POSITION                    0x00000002
#define _DTCON1_DTA2_MASK                        0x00000004
#define _DTCON1_DTA2_LENGTH                      0x00000001

#define _DTCON1_DTA3_POSITION                    0x00000003
#define _DTCON1_DTA3_MASK                        0x00000008
#define _DTCON1_DTA3_LENGTH                      0x00000001

#define _DTCON1_DTA4_POSITION                    0x00000004
#define _DTCON1_DTA4_MASK                        0x00000010
#define _DTCON1_DTA4_LENGTH                      0x00000001

#define _DTCON1_DTA5_POSITION                    0x00000005
#define _DTCON1_DTA5_MASK                        0x00000020
#define _DTCON1_DTA5_LENGTH                      0x00000001

#define _DTCON1_DTAPS0_POSITION                  0x00000006
#define _DTCON1_DTAPS0_MASK                      0x00000040
#define _DTCON1_DTAPS0_LENGTH                    0x00000001

#define _DTCON1_DTAPS1_POSITION                  0x00000007
#define _DTCON1_DTAPS1_MASK                      0x00000080
#define _DTCON1_DTAPS1_LENGTH                    0x00000001

#define _DTCON1_DTB0_POSITION                    0x00000008
#define _DTCON1_DTB0_MASK                        0x00000100
#define _DTCON1_DTB0_LENGTH                      0x00000001

#define _DTCON1_DTB1_POSITION                    0x00000009
#define _DTCON1_DTB1_MASK                        0x00000200
#define _DTCON1_DTB1_LENGTH                      0x00000001

#define _DTCON1_DTB2_POSITION                    0x0000000A
#define _DTCON1_DTB2_MASK                        0x00000400
#define _DTCON1_DTB2_LENGTH                      0x00000001

#define _DTCON1_DTB3_POSITION                    0x0000000B
#define _DTCON1_DTB3_MASK                        0x00000800
#define _DTCON1_DTB3_LENGTH                      0x00000001

#define _DTCON1_DTB4_POSITION                    0x0000000C
#define _DTCON1_DTB4_MASK                        0x00001000
#define _DTCON1_DTB4_LENGTH                      0x00000001

#define _DTCON1_DTB5_POSITION                    0x0000000D
#define _DTCON1_DTB5_MASK                        0x00002000
#define _DTCON1_DTB5_LENGTH                      0x00000001

#define _DTCON1_DTBPS0_POSITION                  0x0000000E
#define _DTCON1_DTBPS0_MASK                      0x00004000
#define _DTCON1_DTBPS0_LENGTH                    0x00000001

#define _DTCON1_DTBPS1_POSITION                  0x0000000F
#define _DTCON1_DTBPS1_MASK                      0x00008000
#define _DTCON1_DTBPS1_LENGTH                    0x00000001

#define _P1DTCON1_DTA_POSITION                   0x00000000
#define _P1DTCON1_DTA_MASK                       0x0000003F
#define _P1DTCON1_DTA_LENGTH                     0x00000006

#define _P1DTCON1_DTAPS_POSITION                 0x00000006
#define _P1DTCON1_DTAPS_MASK                     0x000000C0
#define _P1DTCON1_DTAPS_LENGTH                   0x00000002

#define _P1DTCON1_DTB_POSITION                   0x00000008
#define _P1DTCON1_DTB_MASK                       0x00003F00
#define _P1DTCON1_DTB_LENGTH                     0x00000006

#define _P1DTCON1_DTBPS_POSITION                 0x0000000E
#define _P1DTCON1_DTBPS_MASK                     0x0000C000
#define _P1DTCON1_DTBPS_LENGTH                   0x00000002

#define _P1DTCON1_DTA0_POSITION                  0x00000000
#define _P1DTCON1_DTA0_MASK                      0x00000001
#define _P1DTCON1_DTA0_LENGTH                    0x00000001

#define _P1DTCON1_DTA1_POSITION                  0x00000001
#define _P1DTCON1_DTA1_MASK                      0x00000002
#define _P1DTCON1_DTA1_LENGTH                    0x00000001

#define _P1DTCON1_DTA2_POSITION                  0x00000002
#define _P1DTCON1_DTA2_MASK                      0x00000004
#define _P1DTCON1_DTA2_LENGTH                    0x00000001

#define _P1DTCON1_DTA3_POSITION                  0x00000003
#define _P1DTCON1_DTA3_MASK                      0x00000008
#define _P1DTCON1_DTA3_LENGTH                    0x00000001

#define _P1DTCON1_DTA4_POSITION                  0x00000004
#define _P1DTCON1_DTA4_MASK                      0x00000010
#define _P1DTCON1_DTA4_LENGTH                    0x00000001

#define _P1DTCON1_DTA5_POSITION                  0x00000005
#define _P1DTCON1_DTA5_MASK                      0x00000020
#define _P1DTCON1_DTA5_LENGTH                    0x00000001

#define _P1DTCON1_DTAPS0_POSITION                0x00000006
#define _P1DTCON1_DTAPS0_MASK                    0x00000040
#define _P1DTCON1_DTAPS0_LENGTH                  0x00000001

#define _P1DTCON1_DTAPS1_POSITION                0x00000007
#define _P1DTCON1_DTAPS1_MASK                    0x00000080
#define _P1DTCON1_DTAPS1_LENGTH                  0x00000001

#define _P1DTCON1_DTB0_POSITION                  0x00000008
#define _P1DTCON1_DTB0_MASK                      0x00000100
#define _P1DTCON1_DTB0_LENGTH                    0x00000001

#define _P1DTCON1_DTB1_POSITION                  0x00000009
#define _P1DTCON1_DTB1_MASK                      0x00000200
#define _P1DTCON1_DTB1_LENGTH                    0x00000001

#define _P1DTCON1_DTB2_POSITION                  0x0000000A
#define _P1DTCON1_DTB2_MASK                      0x00000400
#define _P1DTCON1_DTB2_LENGTH                    0x00000001

#define _P1DTCON1_DTB3_POSITION                  0x0000000B
#define _P1DTCON1_DTB3_MASK                      0x00000800
#define _P1DTCON1_DTB3_LENGTH                    0x00000001

#define _P1DTCON1_DTB4_POSITION                  0x0000000C
#define _P1DTCON1_DTB4_MASK                      0x00001000
#define _P1DTCON1_DTB4_LENGTH                    0x00000001

#define _P1DTCON1_DTB5_POSITION                  0x0000000D
#define _P1DTCON1_DTB5_MASK                      0x00002000
#define _P1DTCON1_DTB5_LENGTH                    0x00000001

#define _P1DTCON1_DTBPS0_POSITION                0x0000000E
#define _P1DTCON1_DTBPS0_MASK                    0x00004000
#define _P1DTCON1_DTBPS0_LENGTH                  0x00000001

#define _P1DTCON1_DTBPS1_POSITION                0x0000000F
#define _P1DTCON1_DTBPS1_MASK                    0x00008000
#define _P1DTCON1_DTBPS1_LENGTH                  0x00000001

#define _DTCON2_DTS1I_POSITION                   0x00000000
#define _DTCON2_DTS1I_MASK                       0x00000001
#define _DTCON2_DTS1I_LENGTH                     0x00000001

#define _DTCON2_DTS1A_POSITION                   0x00000001
#define _DTCON2_DTS1A_MASK                       0x00000002
#define _DTCON2_DTS1A_LENGTH                     0x00000001

#define _DTCON2_DTS2I_POSITION                   0x00000002
#define _DTCON2_DTS2I_MASK                       0x00000004
#define _DTCON2_DTS2I_LENGTH                     0x00000001

#define _DTCON2_DTS2A_POSITION                   0x00000003
#define _DTCON2_DTS2A_MASK                       0x00000008
#define _DTCON2_DTS2A_LENGTH                     0x00000001

#define _DTCON2_DTS3I_POSITION                   0x00000004
#define _DTCON2_DTS3I_MASK                       0x00000010
#define _DTCON2_DTS3I_LENGTH                     0x00000001

#define _DTCON2_DTS3A_POSITION                   0x00000005
#define _DTCON2_DTS3A_MASK                       0x00000020
#define _DTCON2_DTS3A_LENGTH                     0x00000001

#define _P1DTCON2_DTS1I_POSITION                 0x00000000
#define _P1DTCON2_DTS1I_MASK                     0x00000001
#define _P1DTCON2_DTS1I_LENGTH                   0x00000001

#define _P1DTCON2_DTS1A_POSITION                 0x00000001
#define _P1DTCON2_DTS1A_MASK                     0x00000002
#define _P1DTCON2_DTS1A_LENGTH                   0x00000001

#define _P1DTCON2_DTS2I_POSITION                 0x00000002
#define _P1DTCON2_DTS2I_MASK                     0x00000004
#define _P1DTCON2_DTS2I_LENGTH                   0x00000001

#define _P1DTCON2_DTS2A_POSITION                 0x00000003
#define _P1DTCON2_DTS2A_MASK                     0x00000008
#define _P1DTCON2_DTS2A_LENGTH                   0x00000001

#define _P1DTCON2_DTS3I_POSITION                 0x00000004
#define _P1DTCON2_DTS3I_MASK                     0x00000010
#define _P1DTCON2_DTS3I_LENGTH                   0x00000001

#define _P1DTCON2_DTS3A_POSITION                 0x00000005
#define _P1DTCON2_DTS3A_MASK                     0x00000020
#define _P1DTCON2_DTS3A_LENGTH                   0x00000001

#define _FLTACON_FAEN1_POSITION                  0x00000000
#define _FLTACON_FAEN1_MASK                      0x00000001
#define _FLTACON_FAEN1_LENGTH                    0x00000001

#define _FLTACON_FAEN2_POSITION                  0x00000001
#define _FLTACON_FAEN2_MASK                      0x00000002
#define _FLTACON_FAEN2_LENGTH                    0x00000001

#define _FLTACON_FAEN3_POSITION                  0x00000002
#define _FLTACON_FAEN3_MASK                      0x00000004
#define _FLTACON_FAEN3_LENGTH                    0x00000001

#define _FLTACON_FLTAM_POSITION                  0x00000007
#define _FLTACON_FLTAM_MASK                      0x00000080
#define _FLTACON_FLTAM_LENGTH                    0x00000001

#define _FLTACON_FAOV1L_POSITION                 0x00000008
#define _FLTACON_FAOV1L_MASK                     0x00000100
#define _FLTACON_FAOV1L_LENGTH                   0x00000001

#define _FLTACON_FAOV1H_POSITION                 0x00000009
#define _FLTACON_FAOV1H_MASK                     0x00000200
#define _FLTACON_FAOV1H_LENGTH                   0x00000001

#define _FLTACON_FAOV2L_POSITION                 0x0000000A
#define _FLTACON_FAOV2L_MASK                     0x00000400
#define _FLTACON_FAOV2L_LENGTH                   0x00000001

#define _FLTACON_FAOV2H_POSITION                 0x0000000B
#define _FLTACON_FAOV2H_MASK                     0x00000800
#define _FLTACON_FAOV2H_LENGTH                   0x00000001

#define _FLTACON_FAOV3L_POSITION                 0x0000000C
#define _FLTACON_FAOV3L_MASK                     0x00001000
#define _FLTACON_FAOV3L_LENGTH                   0x00000001

#define _FLTACON_FAOV3H_POSITION                 0x0000000D
#define _FLTACON_FAOV3H_MASK                     0x00002000
#define _FLTACON_FAOV3H_LENGTH                   0x00000001

#define _P1FLTACON_FAEN1_POSITION                0x00000000
#define _P1FLTACON_FAEN1_MASK                    0x00000001
#define _P1FLTACON_FAEN1_LENGTH                  0x00000001

#define _P1FLTACON_FAEN2_POSITION                0x00000001
#define _P1FLTACON_FAEN2_MASK                    0x00000002
#define _P1FLTACON_FAEN2_LENGTH                  0x00000001

#define _P1FLTACON_FAEN3_POSITION                0x00000002
#define _P1FLTACON_FAEN3_MASK                    0x00000004
#define _P1FLTACON_FAEN3_LENGTH                  0x00000001

#define _P1FLTACON_FLTAM_POSITION                0x00000007
#define _P1FLTACON_FLTAM_MASK                    0x00000080
#define _P1FLTACON_FLTAM_LENGTH                  0x00000001

#define _P1FLTACON_FAOV1L_POSITION               0x00000008
#define _P1FLTACON_FAOV1L_MASK                   0x00000100
#define _P1FLTACON_FAOV1L_LENGTH                 0x00000001

#define _P1FLTACON_FAOV1H_POSITION               0x00000009
#define _P1FLTACON_FAOV1H_MASK                   0x00000200
#define _P1FLTACON_FAOV1H_LENGTH                 0x00000001

#define _P1FLTACON_FAOV2L_POSITION               0x0000000A
#define _P1FLTACON_FAOV2L_MASK                   0x00000400
#define _P1FLTACON_FAOV2L_LENGTH                 0x00000001

#define _P1FLTACON_FAOV2H_POSITION               0x0000000B
#define _P1FLTACON_FAOV2H_MASK                   0x00000800
#define _P1FLTACON_FAOV2H_LENGTH                 0x00000001

#define _P1FLTACON_FAOV3L_POSITION               0x0000000C
#define _P1FLTACON_FAOV3L_MASK                   0x00001000
#define _P1FLTACON_FAOV3L_LENGTH                 0x00000001

#define _P1FLTACON_FAOV3H_POSITION               0x0000000D
#define _P1FLTACON_FAOV3H_MASK                   0x00002000
#define _P1FLTACON_FAOV3H_LENGTH                 0x00000001

#define _FLTBCON_FBEN1_POSITION                  0x00000000
#define _FLTBCON_FBEN1_MASK                      0x00000001
#define _FLTBCON_FBEN1_LENGTH                    0x00000001

#define _FLTBCON_FBEN2_POSITION                  0x00000001
#define _FLTBCON_FBEN2_MASK                      0x00000002
#define _FLTBCON_FBEN2_LENGTH                    0x00000001

#define _FLTBCON_FBEN3_POSITION                  0x00000002
#define _FLTBCON_FBEN3_MASK                      0x00000004
#define _FLTBCON_FBEN3_LENGTH                    0x00000001

#define _FLTBCON_FLTBM_POSITION                  0x00000007
#define _FLTBCON_FLTBM_MASK                      0x00000080
#define _FLTBCON_FLTBM_LENGTH                    0x00000001

#define _FLTBCON_FBOV1L_POSITION                 0x00000008
#define _FLTBCON_FBOV1L_MASK                     0x00000100
#define _FLTBCON_FBOV1L_LENGTH                   0x00000001

#define _FLTBCON_FBOV1H_POSITION                 0x00000009
#define _FLTBCON_FBOV1H_MASK                     0x00000200
#define _FLTBCON_FBOV1H_LENGTH                   0x00000001

#define _FLTBCON_FBOV2L_POSITION                 0x0000000A
#define _FLTBCON_FBOV2L_MASK                     0x00000400
#define _FLTBCON_FBOV2L_LENGTH                   0x00000001

#define _FLTBCON_FBOV2H_POSITION                 0x0000000B
#define _FLTBCON_FBOV2H_MASK                     0x00000800
#define _FLTBCON_FBOV2H_LENGTH                   0x00000001

#define _FLTBCON_FBOV3L_POSITION                 0x0000000C
#define _FLTBCON_FBOV3L_MASK                     0x00001000
#define _FLTBCON_FBOV3L_LENGTH                   0x00000001

#define _FLTBCON_FBOV3H_POSITION                 0x0000000D
#define _FLTBCON_FBOV3H_MASK                     0x00002000
#define _FLTBCON_FBOV3H_LENGTH                   0x00000001

#define _P1FLTBCON_FBEN1_POSITION                0x00000000
#define _P1FLTBCON_FBEN1_MASK                    0x00000001
#define _P1FLTBCON_FBEN1_LENGTH                  0x00000001

#define _P1FLTBCON_FBEN2_POSITION                0x00000001
#define _P1FLTBCON_FBEN2_MASK                    0x00000002
#define _P1FLTBCON_FBEN2_LENGTH                  0x00000001

#define _P1FLTBCON_FBEN3_POSITION                0x00000002
#define _P1FLTBCON_FBEN3_MASK                    0x00000004
#define _P1FLTBCON_FBEN3_LENGTH                  0x00000001

#define _P1FLTBCON_FLTBM_POSITION                0x00000007
#define _P1FLTBCON_FLTBM_MASK                    0x00000080
#define _P1FLTBCON_FLTBM_LENGTH                  0x00000001

#define _P1FLTBCON_FBOV1L_POSITION               0x00000008
#define _P1FLTBCON_FBOV1L_MASK                   0x00000100
#define _P1FLTBCON_FBOV1L_LENGTH                 0x00000001

#define _P1FLTBCON_FBOV1H_POSITION               0x00000009
#define _P1FLTBCON_FBOV1H_MASK                   0x00000200
#define _P1FLTBCON_FBOV1H_LENGTH                 0x00000001

#define _P1FLTBCON_FBOV2L_POSITION               0x0000000A
#define _P1FLTBCON_FBOV2L_MASK                   0x00000400
#define _P1FLTBCON_FBOV2L_LENGTH                 0x00000001

#define _P1FLTBCON_FBOV2H_POSITION               0x0000000B
#define _P1FLTBCON_FBOV2H_MASK                   0x00000800
#define _P1FLTBCON_FBOV2H_LENGTH                 0x00000001

#define _P1FLTBCON_FBOV3L_POSITION               0x0000000C
#define _P1FLTBCON_FBOV3L_MASK                   0x00001000
#define _P1FLTBCON_FBOV3L_LENGTH                 0x00000001

#define _P1FLTBCON_FBOV3H_POSITION               0x0000000D
#define _P1FLTBCON_FBOV3H_MASK                   0x00002000
#define _P1FLTBCON_FBOV3H_LENGTH                 0x00000001

#define _OVDCON_POUT1L_POSITION                  0x00000000
#define _OVDCON_POUT1L_MASK                      0x00000001
#define _OVDCON_POUT1L_LENGTH                    0x00000001

#define _OVDCON_POUT1H_POSITION                  0x00000001
#define _OVDCON_POUT1H_MASK                      0x00000002
#define _OVDCON_POUT1H_LENGTH                    0x00000001

#define _OVDCON_POUT2L_POSITION                  0x00000002
#define _OVDCON_POUT2L_MASK                      0x00000004
#define _OVDCON_POUT2L_LENGTH                    0x00000001

#define _OVDCON_POUT2H_POSITION                  0x00000003
#define _OVDCON_POUT2H_MASK                      0x00000008
#define _OVDCON_POUT2H_LENGTH                    0x00000001

#define _OVDCON_POUT3L_POSITION                  0x00000004
#define _OVDCON_POUT3L_MASK                      0x00000010
#define _OVDCON_POUT3L_LENGTH                    0x00000001

#define _OVDCON_POUT3H_POSITION                  0x00000005
#define _OVDCON_POUT3H_MASK                      0x00000020
#define _OVDCON_POUT3H_LENGTH                    0x00000001

#define _OVDCON_POVD1L_POSITION                  0x00000008
#define _OVDCON_POVD1L_MASK                      0x00000100
#define _OVDCON_POVD1L_LENGTH                    0x00000001

#define _OVDCON_POVD1H_POSITION                  0x00000009
#define _OVDCON_POVD1H_MASK                      0x00000200
#define _OVDCON_POVD1H_LENGTH                    0x00000001

#define _OVDCON_POVD2L_POSITION                  0x0000000A
#define _OVDCON_POVD2L_MASK                      0x00000400
#define _OVDCON_POVD2L_LENGTH                    0x00000001

#define _OVDCON_POVD2H_POSITION                  0x0000000B
#define _OVDCON_POVD2H_MASK                      0x00000800
#define _OVDCON_POVD2H_LENGTH                    0x00000001

#define _OVDCON_POVD3L_POSITION                  0x0000000C
#define _OVDCON_POVD3L_MASK                      0x00001000
#define _OVDCON_POVD3L_LENGTH                    0x00000001

#define _OVDCON_POVD3H_POSITION                  0x0000000D
#define _OVDCON_POVD3H_MASK                      0x00002000
#define _OVDCON_POVD3H_LENGTH                    0x00000001

#define _P1OVDCON_POUT1L_POSITION                0x00000000
#define _P1OVDCON_POUT1L_MASK                    0x00000001
#define _P1OVDCON_POUT1L_LENGTH                  0x00000001

#define _P1OVDCON_POUT1H_POSITION                0x00000001
#define _P1OVDCON_POUT1H_MASK                    0x00000002
#define _P1OVDCON_POUT1H_LENGTH                  0x00000001

#define _P1OVDCON_POUT2L_POSITION                0x00000002
#define _P1OVDCON_POUT2L_MASK                    0x00000004
#define _P1OVDCON_POUT2L_LENGTH                  0x00000001

#define _P1OVDCON_POUT2H_POSITION                0x00000003
#define _P1OVDCON_POUT2H_MASK                    0x00000008
#define _P1OVDCON_POUT2H_LENGTH                  0x00000001

#define _P1OVDCON_POUT3L_POSITION                0x00000004
#define _P1OVDCON_POUT3L_MASK                    0x00000010
#define _P1OVDCON_POUT3L_LENGTH                  0x00000001

#define _P1OVDCON_POUT3H_POSITION                0x00000005
#define _P1OVDCON_POUT3H_MASK                    0x00000020
#define _P1OVDCON_POUT3H_LENGTH                  0x00000001

#define _P1OVDCON_POVD1L_POSITION                0x00000008
#define _P1OVDCON_POVD1L_MASK                    0x00000100
#define _P1OVDCON_POVD1L_LENGTH                  0x00000001

#define _P1OVDCON_POVD1H_POSITION                0x00000009
#define _P1OVDCON_POVD1H_MASK                    0x00000200
#define _P1OVDCON_POVD1H_LENGTH                  0x00000001

#define _P1OVDCON_POVD2L_POSITION                0x0000000A
#define _P1OVDCON_POVD2L_MASK                    0x00000400
#define _P1OVDCON_POVD2L_LENGTH                  0x00000001

#define _P1OVDCON_POVD2H_POSITION                0x0000000B
#define _P1OVDCON_POVD2H_MASK                    0x00000800
#define _P1OVDCON_POVD2H_LENGTH                  0x00000001

#define _P1OVDCON_POVD3L_POSITION                0x0000000C
#define _P1OVDCON_POVD3L_MASK                    0x00001000
#define _P1OVDCON_POVD3L_LENGTH                  0x00000001

#define _P1OVDCON_POVD3H_POSITION                0x0000000D
#define _P1OVDCON_POVD3H_MASK                    0x00002000
#define _P1OVDCON_POVD3H_LENGTH                  0x00000001

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

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SPISIDL_POSITION               0x0000000D
#define _SPI1STAT_SPISIDL_MASK                   0x00002000
#define _SPI1STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI1STAT_SPIEN_POSITION                 0x0000000F
#define _SPI1STAT_SPIEN_MASK                     0x00008000
#define _SPI1STAT_SPIEN_LENGTH                   0x00000001

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

#define _TRISB_TRISB0_POSITION                   0x00000000
#define _TRISB_TRISB0_MASK                       0x00000001
#define _TRISB_TRISB0_LENGTH                     0x00000001

#define _TRISB_TRISB1_POSITION                   0x00000001
#define _TRISB_TRISB1_MASK                       0x00000002
#define _TRISB_TRISB1_LENGTH                     0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB7_POSITION                   0x00000007
#define _TRISB_TRISB7_MASK                       0x00000080
#define _TRISB_TRISB7_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

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

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB7_POSITION                      0x00000007
#define _PORTB_RB7_MASK                          0x00000080
#define _PORTB_RB7_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

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

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB7_POSITION                     0x00000007
#define _LATB_LATB7_MASK                         0x00000080
#define _LATB_LATB7_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

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

#define _ODCB_ODCB4_POSITION                     0x00000004
#define _ODCB_ODCB4_MASK                         0x00000010
#define _ODCB_ODCB4_LENGTH                       0x00000001

#define _ODCB_ODCB7_POSITION                     0x00000007
#define _ODCB_ODCB7_MASK                         0x00000080
#define _ODCB_ODCB7_LENGTH                       0x00000001

#define _ODCB_ODCB8_POSITION                     0x00000008
#define _ODCB_ODCB8_MASK                         0x00000100
#define _ODCB_ODCB8_LENGTH                       0x00000001

#define _ODCB_ODCB9_POSITION                     0x00000009
#define _ODCB_ODCB9_MASK                         0x00000200
#define _ODCB_ODCB9_LENGTH                       0x00000001

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

#define _PADCFG1_RTSECSEL_POSITION               0x00000001
#define _PADCFG1_RTSECSEL_MASK                   0x00000002
#define _PADCFG1_RTSECSEL_LENGTH                 0x00000001

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

#define _AD1CON1_SSRC_POSITION                   0x00000005
#define _AD1CON1_SSRC_MASK                       0x000000E0
#define _AD1CON1_SSRC_LENGTH                     0x00000003

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000300
#define _AD1CON1_FORM_LENGTH                     0x00000002

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

#define _AD1PCFGL_PCFG0_POSITION                 0x00000000
#define _AD1PCFGL_PCFG0_MASK                     0x00000001
#define _AD1PCFGL_PCFG0_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG1_POSITION                 0x00000001
#define _AD1PCFGL_PCFG1_MASK                     0x00000002
#define _AD1PCFGL_PCFG1_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG2_POSITION                 0x00000002
#define _AD1PCFGL_PCFG2_MASK                     0x00000004
#define _AD1PCFGL_PCFG2_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG3_POSITION                 0x00000003
#define _AD1PCFGL_PCFG3_MASK                     0x00000008
#define _AD1PCFGL_PCFG3_LENGTH                   0x00000001

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

#define _ALCFGRPT_ARPT_POSITION                  0x00000000
#define _ALCFGRPT_ARPT_MASK                      0x000000FF
#define _ALCFGRPT_ARPT_LENGTH                    0x00000008

#define _ALCFGRPT_ALRMPTR_POSITION               0x00000008
#define _ALCFGRPT_ALRMPTR_MASK                   0x00000300
#define _ALCFGRPT_ALRMPTR_LENGTH                 0x00000002

#define _ALCFGRPT_AMASK_POSITION                 0x0000000A
#define _ALCFGRPT_AMASK_MASK                     0x00003C00
#define _ALCFGRPT_AMASK_LENGTH                   0x00000004

#define _ALCFGRPT_CHIME_POSITION                 0x0000000E
#define _ALCFGRPT_CHIME_MASK                     0x00004000
#define _ALCFGRPT_CHIME_LENGTH                   0x00000001

#define _ALCFGRPT_ALRMEN_POSITION                0x0000000F
#define _ALCFGRPT_ALRMEN_MASK                    0x00008000
#define _ALCFGRPT_ALRMEN_LENGTH                  0x00000001

#define _ALCFGRPT_ARPT0_POSITION                 0x00000000
#define _ALCFGRPT_ARPT0_MASK                     0x00000001
#define _ALCFGRPT_ARPT0_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT1_POSITION                 0x00000001
#define _ALCFGRPT_ARPT1_MASK                     0x00000002
#define _ALCFGRPT_ARPT1_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT2_POSITION                 0x00000002
#define _ALCFGRPT_ARPT2_MASK                     0x00000004
#define _ALCFGRPT_ARPT2_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT3_POSITION                 0x00000003
#define _ALCFGRPT_ARPT3_MASK                     0x00000008
#define _ALCFGRPT_ARPT3_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT4_POSITION                 0x00000004
#define _ALCFGRPT_ARPT4_MASK                     0x00000010
#define _ALCFGRPT_ARPT4_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT5_POSITION                 0x00000005
#define _ALCFGRPT_ARPT5_MASK                     0x00000020
#define _ALCFGRPT_ARPT5_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT6_POSITION                 0x00000006
#define _ALCFGRPT_ARPT6_MASK                     0x00000040
#define _ALCFGRPT_ARPT6_LENGTH                   0x00000001

#define _ALCFGRPT_ARPT7_POSITION                 0x00000007
#define _ALCFGRPT_ARPT7_MASK                     0x00000080
#define _ALCFGRPT_ARPT7_LENGTH                   0x00000001

#define _ALCFGRPT_ALRMPTR0_POSITION              0x00000008
#define _ALCFGRPT_ALRMPTR0_MASK                  0x00000100
#define _ALCFGRPT_ALRMPTR0_LENGTH                0x00000001

#define _ALCFGRPT_ALRMPTR1_POSITION              0x00000009
#define _ALCFGRPT_ALRMPTR1_MASK                  0x00000200
#define _ALCFGRPT_ALRMPTR1_LENGTH                0x00000001

#define _ALCFGRPT_AMASK0_POSITION                0x0000000A
#define _ALCFGRPT_AMASK0_MASK                    0x00000400
#define _ALCFGRPT_AMASK0_LENGTH                  0x00000001

#define _ALCFGRPT_AMASK1_POSITION                0x0000000B
#define _ALCFGRPT_AMASK1_MASK                    0x00000800
#define _ALCFGRPT_AMASK1_LENGTH                  0x00000001

#define _ALCFGRPT_AMASK2_POSITION                0x0000000C
#define _ALCFGRPT_AMASK2_MASK                    0x00001000
#define _ALCFGRPT_AMASK2_LENGTH                  0x00000001

#define _ALCFGRPT_AMASK3_POSITION                0x0000000D
#define _ALCFGRPT_AMASK3_MASK                    0x00002000
#define _ALCFGRPT_AMASK3_LENGTH                  0x00000001

#define _RCFGCAL_CAL_POSITION                    0x00000000
#define _RCFGCAL_CAL_MASK                        0x000000FF
#define _RCFGCAL_CAL_LENGTH                      0x00000008

#define _RCFGCAL_RTCPTR_POSITION                 0x00000008
#define _RCFGCAL_RTCPTR_MASK                     0x00000300
#define _RCFGCAL_RTCPTR_LENGTH                   0x00000002

#define _RCFGCAL_RTCOE_POSITION                  0x0000000A
#define _RCFGCAL_RTCOE_MASK                      0x00000400
#define _RCFGCAL_RTCOE_LENGTH                    0x00000001

#define _RCFGCAL_HALFSEC_POSITION                0x0000000B
#define _RCFGCAL_HALFSEC_MASK                    0x00000800
#define _RCFGCAL_HALFSEC_LENGTH                  0x00000001

#define _RCFGCAL_RTCSYNC_POSITION                0x0000000C
#define _RCFGCAL_RTCSYNC_MASK                    0x00001000
#define _RCFGCAL_RTCSYNC_LENGTH                  0x00000001

#define _RCFGCAL_RTCWREN_POSITION                0x0000000D
#define _RCFGCAL_RTCWREN_MASK                    0x00002000
#define _RCFGCAL_RTCWREN_LENGTH                  0x00000001

#define _RCFGCAL_RTCEN_POSITION                  0x0000000F
#define _RCFGCAL_RTCEN_MASK                      0x00008000
#define _RCFGCAL_RTCEN_LENGTH                    0x00000001

#define _RCFGCAL_CAL0_POSITION                   0x00000000
#define _RCFGCAL_CAL0_MASK                       0x00000001
#define _RCFGCAL_CAL0_LENGTH                     0x00000001

#define _RCFGCAL_CAL1_POSITION                   0x00000001
#define _RCFGCAL_CAL1_MASK                       0x00000002
#define _RCFGCAL_CAL1_LENGTH                     0x00000001

#define _RCFGCAL_CAL2_POSITION                   0x00000002
#define _RCFGCAL_CAL2_MASK                       0x00000004
#define _RCFGCAL_CAL2_LENGTH                     0x00000001

#define _RCFGCAL_CAL3_POSITION                   0x00000003
#define _RCFGCAL_CAL3_MASK                       0x00000008
#define _RCFGCAL_CAL3_LENGTH                     0x00000001

#define _RCFGCAL_CAL4_POSITION                   0x00000004
#define _RCFGCAL_CAL4_MASK                       0x00000010
#define _RCFGCAL_CAL4_LENGTH                     0x00000001

#define _RCFGCAL_CAL5_POSITION                   0x00000005
#define _RCFGCAL_CAL5_MASK                       0x00000020
#define _RCFGCAL_CAL5_LENGTH                     0x00000001

#define _RCFGCAL_CAL6_POSITION                   0x00000006
#define _RCFGCAL_CAL6_MASK                       0x00000040
#define _RCFGCAL_CAL6_LENGTH                     0x00000001

#define _RCFGCAL_CAL7_POSITION                   0x00000007
#define _RCFGCAL_CAL7_MASK                       0x00000080
#define _RCFGCAL_CAL7_LENGTH                     0x00000001

#define _RCFGCAL_RTCPTR0_POSITION                0x00000008
#define _RCFGCAL_RTCPTR0_MASK                    0x00000100
#define _RCFGCAL_RTCPTR0_LENGTH                  0x00000001

#define _RCFGCAL_RTCPTR1_POSITION                0x00000009
#define _RCFGCAL_RTCPTR1_MASK                    0x00000200
#define _RCFGCAL_RTCPTR1_LENGTH                  0x00000001

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_C3OUT_POSITION                   0x00000002
#define _CMSTAT_C3OUT_MASK                       0x00000004
#define _CMSTAT_C3OUT_LENGTH                     0x00000001

#define _CMSTAT_C1EVT_POSITION                   0x00000008
#define _CMSTAT_C1EVT_MASK                       0x00000100
#define _CMSTAT_C1EVT_LENGTH                     0x00000001

#define _CMSTAT_C2EVT_POSITION                   0x00000009
#define _CMSTAT_C2EVT_MASK                       0x00000200
#define _CMSTAT_C2EVT_LENGTH                     0x00000001

#define _CMSTAT_C3EVT_POSITION                   0x0000000A
#define _CMSTAT_C3EVT_MASK                       0x00000400
#define _CMSTAT_C3EVT_LENGTH                     0x00000001

#define _CMSTAT_CMSIDL_POSITION                  0x0000000F
#define _CMSTAT_CMSIDL_MASK                      0x00008000
#define _CMSTAT_CMSIDL_LENGTH                    0x00000001

#define _CVRCON_CVR_POSITION                     0x00000000
#define _CVRCON_CVR_MASK                         0x0000000F
#define _CVRCON_CVR_LENGTH                       0x00000004

#define _CVRCON_CVRR_POSITION                    0x00000005
#define _CVRCON_CVRR_MASK                        0x00000020
#define _CVRCON_CVRR_LENGTH                      0x00000001

#define _CVRCON_CVROE_POSITION                   0x00000006
#define _CVRCON_CVROE_MASK                       0x00000040
#define _CVRCON_CVROE_LENGTH                     0x00000001

#define _CVRCON_CVREN_POSITION                   0x00000007
#define _CVRCON_CVREN_MASK                       0x00000080
#define _CVRCON_CVREN_LENGTH                     0x00000001

#define _CVRCON_BGSEL_POSITION                   0x00000008
#define _CVRCON_BGSEL_MASK                       0x00000300
#define _CVRCON_BGSEL_LENGTH                     0x00000002

#define _CVRCON_VREFSEL_POSITION                 0x0000000A
#define _CVRCON_VREFSEL_MASK                     0x00000400
#define _CVRCON_VREFSEL_LENGTH                   0x00000001

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

#define _CVRCON_BGSEL0_POSITION                  0x00000008
#define _CVRCON_BGSEL0_MASK                      0x00000100
#define _CVRCON_BGSEL0_LENGTH                    0x00000001

#define _CVRCON_BGSEL1_POSITION                  0x00000009
#define _CVRCON_BGSEL1_MASK                      0x00000200
#define _CVRCON_BGSEL1_LENGTH                    0x00000001

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

#define _RPINR0_INT1R_POSITION                   0x00000008
#define _RPINR0_INT1R_MASK                       0x00001F00
#define _RPINR0_INT1R_LENGTH                     0x00000005

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

#define _RPINR1_INT2R_POSITION                   0x00000000
#define _RPINR1_INT2R_MASK                       0x0000001F
#define _RPINR1_INT2R_LENGTH                     0x00000005

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

#define _RPINR3_T2CKR_POSITION                   0x00000000
#define _RPINR3_T2CKR_MASK                       0x0000001F
#define _RPINR3_T2CKR_LENGTH                     0x00000005

#define _RPINR3_T3CKR_POSITION                   0x00000008
#define _RPINR3_T3CKR_MASK                       0x00001F00
#define _RPINR3_T3CKR_LENGTH                     0x00000005

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

#define _RPINR7_IC1R_POSITION                    0x00000000
#define _RPINR7_IC1R_MASK                        0x0000001F
#define _RPINR7_IC1R_LENGTH                      0x00000005

#define _RPINR7_IC2R_POSITION                    0x00000008
#define _RPINR7_IC2R_MASK                        0x00001F00
#define _RPINR7_IC2R_LENGTH                      0x00000005

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

#define _RPINR8_IC3R_POSITION                    0x00000000
#define _RPINR8_IC3R_MASK                        0x0000001F
#define _RPINR8_IC3R_LENGTH                      0x00000005

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

#define _RPINR11_OCFAR_POSITION                  0x00000000
#define _RPINR11_OCFAR_MASK                      0x0000001F
#define _RPINR11_OCFAR_LENGTH                    0x00000005

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

#define _RPINR18_U1RXR_POSITION                  0x00000000
#define _RPINR18_U1RXR_MASK                      0x0000001F
#define _RPINR18_U1RXR_LENGTH                    0x00000005

#define _RPINR18_U1CTSR_POSITION                 0x00000008
#define _RPINR18_U1CTSR_MASK                     0x00001F00
#define _RPINR18_U1CTSR_LENGTH                   0x00000005

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

#define _RPINR21_SS1R_POSITION                   0x00000000
#define _RPINR21_SS1R_MASK                       0x0000001F
#define _RPINR21_SS1R_LENGTH                     0x00000005

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

#define _RPOR0_RP0R_POSITION                     0x00000000
#define _RPOR0_RP0R_MASK                         0x0000001F
#define _RPOR0_RP0R_LENGTH                       0x00000005

#define _RPOR0_RP1R_POSITION                     0x00000008
#define _RPOR0_RP1R_MASK                         0x00001F00
#define _RPOR0_RP1R_LENGTH                       0x00000005

#define _RPOR0_RP0R0_POSITION                    0x00000000
#define _RPOR0_RP0R0_MASK                        0x00000001
#define _RPOR0_RP0R0_LENGTH                      0x00000001

#define _RPOR0_RP0R1_POSITION                    0x00000001
#define _RPOR0_RP0R1_MASK                        0x00000002
#define _RPOR0_RP0R1_LENGTH                      0x00000001

#define _RPOR0_RP0R2_POSITION                    0x00000002
#define _RPOR0_RP0R2_MASK                        0x00000004
#define _RPOR0_RP0R2_LENGTH                      0x00000001

#define _RPOR0_RP0R3_POSITION                    0x00000003
#define _RPOR0_RP0R3_MASK                        0x00000008
#define _RPOR0_RP0R3_LENGTH                      0x00000001

#define _RPOR0_RP0R4_POSITION                    0x00000004
#define _RPOR0_RP0R4_MASK                        0x00000010
#define _RPOR0_RP0R4_LENGTH                      0x00000001

#define _RPOR0_RP1R0_POSITION                    0x00000008
#define _RPOR0_RP1R0_MASK                        0x00000100
#define _RPOR0_RP1R0_LENGTH                      0x00000001

#define _RPOR0_RP1R1_POSITION                    0x00000009
#define _RPOR0_RP1R1_MASK                        0x00000200
#define _RPOR0_RP1R1_LENGTH                      0x00000001

#define _RPOR0_RP1R2_POSITION                    0x0000000A
#define _RPOR0_RP1R2_MASK                        0x00000400
#define _RPOR0_RP1R2_LENGTH                      0x00000001

#define _RPOR0_RP1R3_POSITION                    0x0000000B
#define _RPOR0_RP1R3_MASK                        0x00000800
#define _RPOR0_RP1R3_LENGTH                      0x00000001

#define _RPOR0_RP1R4_POSITION                    0x0000000C
#define _RPOR0_RP1R4_MASK                        0x00001000
#define _RPOR0_RP1R4_LENGTH                      0x00000001

#define _RPOR2_RP4R_POSITION                     0x00000000
#define _RPOR2_RP4R_MASK                         0x0000001F
#define _RPOR2_RP4R_LENGTH                       0x00000005

#define _RPOR2_RP4R0_POSITION                    0x00000000
#define _RPOR2_RP4R0_MASK                        0x00000001
#define _RPOR2_RP4R0_LENGTH                      0x00000001

#define _RPOR2_RP4R1_POSITION                    0x00000001
#define _RPOR2_RP4R1_MASK                        0x00000002
#define _RPOR2_RP4R1_LENGTH                      0x00000001

#define _RPOR2_RP4R2_POSITION                    0x00000002
#define _RPOR2_RP4R2_MASK                        0x00000004
#define _RPOR2_RP4R2_LENGTH                      0x00000001

#define _RPOR2_RP4R3_POSITION                    0x00000003
#define _RPOR2_RP4R3_MASK                        0x00000008
#define _RPOR2_RP4R3_LENGTH                      0x00000001

#define _RPOR2_RP4R4_POSITION                    0x00000004
#define _RPOR2_RP4R4_MASK                        0x00000010
#define _RPOR2_RP4R4_LENGTH                      0x00000001

#define _RPOR3_RP7R_POSITION                     0x00000008
#define _RPOR3_RP7R_MASK                         0x00001F00
#define _RPOR3_RP7R_LENGTH                       0x00000005

#define _RPOR3_RP7R0_POSITION                    0x00000008
#define _RPOR3_RP7R0_MASK                        0x00000100
#define _RPOR3_RP7R0_LENGTH                      0x00000001

#define _RPOR3_RP7R1_POSITION                    0x00000009
#define _RPOR3_RP7R1_MASK                        0x00000200
#define _RPOR3_RP7R1_LENGTH                      0x00000001

#define _RPOR3_RP7R2_POSITION                    0x0000000A
#define _RPOR3_RP7R2_MASK                        0x00000400
#define _RPOR3_RP7R2_LENGTH                      0x00000001

#define _RPOR3_RP7R3_POSITION                    0x0000000B
#define _RPOR3_RP7R3_MASK                        0x00000800
#define _RPOR3_RP7R3_LENGTH                      0x00000001

#define _RPOR3_RP7R4_POSITION                    0x0000000C
#define _RPOR3_RP7R4_MASK                        0x00001000
#define _RPOR3_RP7R4_LENGTH                      0x00000001

#define _RPOR4_RP8R_POSITION                     0x00000000
#define _RPOR4_RP8R_MASK                         0x0000001F
#define _RPOR4_RP8R_LENGTH                       0x00000005

#define _RPOR4_RP9R_POSITION                     0x00000008
#define _RPOR4_RP9R_MASK                         0x00001F00
#define _RPOR4_RP9R_LENGTH                       0x00000005

#define _RPOR4_RP8R0_POSITION                    0x00000000
#define _RPOR4_RP8R0_MASK                        0x00000001
#define _RPOR4_RP8R0_LENGTH                      0x00000001

#define _RPOR4_RP8R1_POSITION                    0x00000001
#define _RPOR4_RP8R1_MASK                        0x00000002
#define _RPOR4_RP8R1_LENGTH                      0x00000001

#define _RPOR4_RP8R2_POSITION                    0x00000002
#define _RPOR4_RP8R2_MASK                        0x00000004
#define _RPOR4_RP8R2_LENGTH                      0x00000001

#define _RPOR4_RP8R3_POSITION                    0x00000003
#define _RPOR4_RP8R3_MASK                        0x00000008
#define _RPOR4_RP8R3_LENGTH                      0x00000001

#define _RPOR4_RP8R4_POSITION                    0x00000004
#define _RPOR4_RP8R4_MASK                        0x00000010
#define _RPOR4_RP8R4_LENGTH                      0x00000001

#define _RPOR4_RP9R0_POSITION                    0x00000008
#define _RPOR4_RP9R0_MASK                        0x00000100
#define _RPOR4_RP9R0_LENGTH                      0x00000001

#define _RPOR4_RP9R1_POSITION                    0x00000009
#define _RPOR4_RP9R1_MASK                        0x00000200
#define _RPOR4_RP9R1_LENGTH                      0x00000001

#define _RPOR4_RP9R2_POSITION                    0x0000000A
#define _RPOR4_RP9R2_MASK                        0x00000400
#define _RPOR4_RP9R2_LENGTH                      0x00000001

#define _RPOR4_RP9R3_POSITION                    0x0000000B
#define _RPOR4_RP9R3_MASK                        0x00000800
#define _RPOR4_RP9R3_LENGTH                      0x00000001

#define _RPOR4_RP9R4_POSITION                    0x0000000C
#define _RPOR4_RP9R4_MASK                        0x00001000
#define _RPOR4_RP9R4_LENGTH                      0x00000001

#define _RPOR6_RP12R_POSITION                    0x00000000
#define _RPOR6_RP12R_MASK                        0x0000001F
#define _RPOR6_RP12R_LENGTH                      0x00000005

#define _RPOR6_RP13R_POSITION                    0x00000008
#define _RPOR6_RP13R_MASK                        0x00001F00
#define _RPOR6_RP13R_LENGTH                      0x00000005

#define _RPOR6_RP12R0_POSITION                   0x00000000
#define _RPOR6_RP12R0_MASK                       0x00000001
#define _RPOR6_RP12R0_LENGTH                     0x00000001

#define _RPOR6_RP12R1_POSITION                   0x00000001
#define _RPOR6_RP12R1_MASK                       0x00000002
#define _RPOR6_RP12R1_LENGTH                     0x00000001

#define _RPOR6_RP12R2_POSITION                   0x00000002
#define _RPOR6_RP12R2_MASK                       0x00000004
#define _RPOR6_RP12R2_LENGTH                     0x00000001

#define _RPOR6_RP12R3_POSITION                   0x00000003
#define _RPOR6_RP12R3_MASK                       0x00000008
#define _RPOR6_RP12R3_LENGTH                     0x00000001

#define _RPOR6_RP12R4_POSITION                   0x00000004
#define _RPOR6_RP12R4_MASK                       0x00000010
#define _RPOR6_RP12R4_LENGTH                     0x00000001

#define _RPOR6_RP13R0_POSITION                   0x00000008
#define _RPOR6_RP13R0_MASK                       0x00000100
#define _RPOR6_RP13R0_LENGTH                     0x00000001

#define _RPOR6_RP13R1_POSITION                   0x00000009
#define _RPOR6_RP13R1_MASK                       0x00000200
#define _RPOR6_RP13R1_LENGTH                     0x00000001

#define _RPOR6_RP13R2_POSITION                   0x0000000A
#define _RPOR6_RP13R2_MASK                       0x00000400
#define _RPOR6_RP13R2_LENGTH                     0x00000001

#define _RPOR6_RP13R3_POSITION                   0x0000000B
#define _RPOR6_RP13R3_MASK                       0x00000800
#define _RPOR6_RP13R3_LENGTH                     0x00000001

#define _RPOR6_RP13R4_POSITION                   0x0000000C
#define _RPOR6_RP13R4_MASK                       0x00001000
#define _RPOR6_RP13R4_LENGTH                     0x00000001

#define _RPOR7_RP14R_POSITION                    0x00000000
#define _RPOR7_RP14R_MASK                        0x0000001F
#define _RPOR7_RP14R_LENGTH                      0x00000005

#define _RPOR7_RP15R_POSITION                    0x00000008
#define _RPOR7_RP15R_MASK                        0x00001F00
#define _RPOR7_RP15R_LENGTH                      0x00000005

#define _RPOR7_RP14R0_POSITION                   0x00000000
#define _RPOR7_RP14R0_MASK                       0x00000001
#define _RPOR7_RP14R0_LENGTH                     0x00000001

#define _RPOR7_RP14R1_POSITION                   0x00000001
#define _RPOR7_RP14R1_MASK                       0x00000002
#define _RPOR7_RP14R1_LENGTH                     0x00000001

#define _RPOR7_RP14R2_POSITION                   0x00000002
#define _RPOR7_RP14R2_MASK                       0x00000004
#define _RPOR7_RP14R2_LENGTH                     0x00000001

#define _RPOR7_RP14R3_POSITION                   0x00000003
#define _RPOR7_RP14R3_MASK                       0x00000008
#define _RPOR7_RP14R3_LENGTH                     0x00000001

#define _RPOR7_RP14R4_POSITION                   0x00000004
#define _RPOR7_RP14R4_MASK                       0x00000010
#define _RPOR7_RP14R4_LENGTH                     0x00000001

#define _RPOR7_RP15R0_POSITION                   0x00000008
#define _RPOR7_RP15R0_MASK                       0x00000100
#define _RPOR7_RP15R0_LENGTH                     0x00000001

#define _RPOR7_RP15R1_POSITION                   0x00000009
#define _RPOR7_RP15R1_MASK                       0x00000200
#define _RPOR7_RP15R1_LENGTH                     0x00000001

#define _RPOR7_RP15R2_POSITION                   0x0000000A
#define _RPOR7_RP15R2_MASK                       0x00000400
#define _RPOR7_RP15R2_LENGTH                     0x00000001

#define _RPOR7_RP15R3_POSITION                   0x0000000B
#define _RPOR7_RP15R3_MASK                       0x00000800
#define _RPOR7_RP15R3_LENGTH                     0x00000001

#define _RPOR7_RP15R4_POSITION                   0x0000000C
#define _RPOR7_RP15R4_MASK                       0x00001000
#define _RPOR7_RP15R4_LENGTH                     0x00000001

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

#define _RCON_IOPUWR_POSITION                    0x0000000E
#define _RCON_IOPUWR_MASK                        0x00004000
#define _RCON_IOPUWR_LENGTH                      0x00000001

#define _RCON_TRAPR_POSITION                     0x0000000F
#define _RCON_TRAPR_MASK                         0x00008000
#define _RCON_TRAPR_LENGTH                       0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_LPOSCEN_POSITION                 0x00000001
#define _OSCCON_LPOSCEN_MASK                     0x00000002
#define _OSCCON_LPOSCEN_LENGTH                   0x00000001

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

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_ERASE_POSITION                   0x00000006
#define _NVMCON_ERASE_MASK                       0x00000040
#define _NVMCON_ERASE_LENGTH                     0x00000001

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

#define _PMD1_AD1MD_POSITION                     0x00000000
#define _PMD1_AD1MD_MASK                         0x00000001
#define _PMD1_AD1MD_LENGTH                       0x00000001

#define _PMD1_SPI1MD_POSITION                    0x00000003
#define _PMD1_SPI1MD_MASK                        0x00000008
#define _PMD1_SPI1MD_LENGTH                      0x00000001

#define _PMD1_U1MD_POSITION                      0x00000005
#define _PMD1_U1MD_MASK                          0x00000020
#define _PMD1_U1MD_LENGTH                        0x00000001

#define _PMD1_I2C1MD_POSITION                    0x00000007
#define _PMD1_I2C1MD_MASK                        0x00000080
#define _PMD1_I2C1MD_LENGTH                      0x00000001

#define _PMD1_PWM1MD_POSITION                    0x00000009
#define _PMD1_PWM1MD_MASK                        0x00000200
#define _PMD1_PWM1MD_LENGTH                      0x00000001

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

#define _PMD2_OC2MD_POSITION                     0x00000001
#define _PMD2_OC2MD_MASK                         0x00000002
#define _PMD2_OC2MD_LENGTH                       0x00000001

#define _PMD2_IC1MD_POSITION                     0x00000008
#define _PMD2_IC1MD_MASK                         0x00000100
#define _PMD2_IC1MD_LENGTH                       0x00000001

#define _PMD2_IC2MD_POSITION                     0x00000009
#define _PMD2_IC2MD_MASK                         0x00000200
#define _PMD2_IC2MD_LENGTH                       0x00000001

#define _PMD2_IC3MD_POSITION                     0x0000000A
#define _PMD2_IC3MD_MASK                         0x00000400
#define _PMD2_IC3MD_LENGTH                       0x00000001

#define _PMD3_RTCCMD_POSITION                    0x00000009
#define _PMD3_RTCCMD_MASK                        0x00000200
#define _PMD3_RTCCMD_LENGTH                      0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD4_CTMUMD_POSITION                    0x00000002
#define _PMD4_CTMUMD_MASK                        0x00000004
#define _PMD4_CTMUMD_LENGTH                      0x00000001



/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register CONFIG2 (0x2bfc)                               */

extern __attribute__((space(prog))) unsigned int _CONFIG2;
#define _CONFIG2(x) __attribute__((section("__CONFIG2.sec"),space(prog))) unsigned int _CONFIG2 = (x);

/*
** Only one invocation of CONFIG2 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set CONFIG2.
** Multiple options may be combined, as shown:
**
** _CONFIG2( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Primary Oscillator Select:
**     POSCMOD_EC           EC Oscillator mode selected
**     POSCMOD_MS           MS Oscillator mode selected
**     POSCMOD_HS           HS Oscillator mode selected
**     POSCMOD_NONE         Primary oscillator disabled
**
**   Alternate I2C pins:
**     ALTI2C_ON            I2C mapped to ASDA1/ASCL1
**     ALTI2C_OFF           I2C mapped to SDA1/SCL1
**
**   Motor Control PWM Low Side Polarity bit:
**     LPOL_OFF             PWM module low side output pins have active-low output polarity
**     LPOL_ON              PWM module low side output pins have active-high output polarity
**
**   IOLOCK Protection:
**     IOL1WAY_OFF          Allow Multiple Re-configurations
**     IOL1WAY_ON           Allow Only One Re-configuration
**
**   Primary Oscillator Output Function:
**     OSCIOFNC_ON          OSC2 pin has digital I/O function
**     OSCIOFNC_OFF         OSC2 pin has clock out function
**
**   Clock Switching and Monitor:
**     FCKSM_CSECME         Clock switching is enabled, Fail-Safe Clock Monitor is enabled
**     FCKSM_CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Clock switching and Fail-Safe Clock Monitor are disabled
**
**   Oscillator Mode:
**     FNOSC_FRC            Internal Fast RC (FRC)
**     FNOSC_FRCPLL         Internal Fast RC (FRC) w/ PLL
**     FNOSC_PRI            Primary Oscillator (MS, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator (MS, HS, EC) w/ PLL
**     FNOSC_SOSC           Secondary Oscillator (SOSC)
**     FNOSC_LPRC           Low Power RC Oscillator (LPRC)
**     FNOSC_FRCDIVN        Internal Fast RC (FRC) with divide by N
**
**   Watchdog Window Select:
**     WDTWIN_WDTWIN75      Watchdog Window is 75% of WDT period
**     WDTWIN_WDTWIN50      Watchdog Window is 50% of WDT period
**     WDTWIN_WDTWIN37      Watchdog Window is 37.5% of WDT period
**     WDTWIN_WDTWIN25      Watchdog Window is 25% of WDT period
**
**   Motor Control PWM Module Pin Mode bit:
**     PWMPIN_OFF           PWM module pins controlled by PWM module at device Reset
**     PWMPIN_ON            PWM module pins controlled by PORT register at device Reset
**
**   PWM Lock Enable:
**     PWMLOCK_OFF          PWM registers may be written without key sequence
**     PWMLOCK_ON           Certain PWM registers may only be written after key sequence
**
**   Internal External Switch Over Mode:
**     IESO_OFF             Start-up device with user-selected oscillator source
**     IESO_ON              Start-up device with FRC, then automatically switch to user-selected oscillator source when ready
**
*/

#define POSCMOD_EC           0xFFFC
#define POSCMOD_MS           0xFFFD
#define POSCMOD_HS           0xFFFE
#define POSCMOD_NONE         0xFFFF

#define ALTI2C_ON            0xFFFB
#define ALTI2C_OFF           0xFFFF

#define LPOL_OFF             0xFFF7
#define LPOL_ON              0xFFFF

#define IOL1WAY_OFF          0xFFEF
#define IOL1WAY_ON           0xFFFF

#define OSCIOFNC_ON          0xFFDF
#define OSCIOFNC_OFF         0xFFFF

#define FCKSM_CSECME         0xFF3F
#define FCKSM_CSECMD         0xFF7F
#define FCKSM_CSDCMD         0xFFBF

#define FNOSC_FRC            0xF8FF
#define FNOSC_FRCPLL         0xF9FF
#define FNOSC_PRI            0xFAFF
#define FNOSC_PRIPLL         0xFBFF
#define FNOSC_SOSC           0xFCFF
#define FNOSC_LPRC           0xFDFF
#define FNOSC_FRCDIVN        0xFFFF

#define WDTWIN_WDTWIN75      0xE7FF
#define WDTWIN_WDTWIN50      0xEFFF
#define WDTWIN_WDTWIN37      0xF7FF
#define WDTWIN_WDTWIN25      0xFFFF

#define PWMPIN_OFF           0xDFFF
#define PWMPIN_ON            0xFFFF

#define PWMLOCK_OFF          0xBFFF
#define PWMLOCK_ON           0xFFFF

#define IESO_OFF             0x7FFF
#define IESO_ON              0xFFFF

/* Register CONFIG1 (0x2bfe)                               */

extern __attribute__((space(prog))) unsigned int _CONFIG1;
#define _CONFIG1(x) __attribute__((section("__CONFIG1.sec"),space(prog))) unsigned int _CONFIG1 = (x);

/*
** Only one invocation of CONFIG1 should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set CONFIG1.
** Multiple options may be combined, as shown:
**
** _CONFIG1( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Watchdog Timer Postscaler:
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
**   WDT Prescaler:
**     WDTPRE_PR32          Prescaler ratio of 1:32
**     WDTPRE_PR128         Prescaler ratio of 1:128
**
**   PLL Lock Enable:
**     PLLKEN_OFF           Clock switch will not wait for the PLL lock signal.
**     PLLKEN_ON            Clock switch to PLL source will wait until the PLL lock signal is valid.
**
**   Watchdog Timer Window:
**     WINDIS_ON            Watchdog Timer in Window mode
**     WINDIS_OFF           Watchdog Timer in Non-Window mode
**
**   Watchdog Timer Enable:
**     FWDTEN_OFF           Watchdog timer enabled/disabled by user software
**     FWDTEN_ON            Watchdog timer always enabled
**
**   Comm Channel Select:
**     ICS_PGD3             Communicate on PGEC3/PGED3
**     ICS_PGD2             Communicate on PGEC2/PGED2
**     ICS_PGD1             Communicate on PGEC1/PGED1
**
**   Motor Control PWM High Side Polarity bit:
**     HPOL_OFF             PWM module high side output pins have active-low output polarity
**     HPOL_ON              PWM module high side output pins have active-high output polarity
**
**   General Code Segment Write Protect:
**     GWRP_ON              Writes to program memory are disabled
**     GWRP_OFF             Writes to program memory are allowed
**
**   General Segment Code Protection:
**     GCP_ON               Standard Security Code protection Enabled
**     GCP_OFF              General Segment Code protect is disabled
**
*/

#define WDTPOST_PS1          0x3FF0
#define WDTPOST_PS2          0x3FF1
#define WDTPOST_PS4          0x3FF2
#define WDTPOST_PS8          0x3FF3
#define WDTPOST_PS16         0x3FF4
#define WDTPOST_PS32         0x3FF5
#define WDTPOST_PS64         0x3FF6
#define WDTPOST_PS128        0x3FF7
#define WDTPOST_PS256        0x3FF8
#define WDTPOST_PS512        0x3FF9
#define WDTPOST_PS1024       0x3FFA
#define WDTPOST_PS2048       0x3FFB
#define WDTPOST_PS4096       0x3FFC
#define WDTPOST_PS8192       0x3FFD
#define WDTPOST_PS16384      0x3FFE
#define WDTPOST_PS32768      0x3FFF

#define WDTPRE_PR32          0x3FEF
#define WDTPRE_PR128         0x3FFF

#define PLLKEN_OFF           0x3FDF
#define PLLKEN_ON            0x3FFF

#define WINDIS_ON            0x3FBF
#define WINDIS_OFF           0x3FFF

#define FWDTEN_OFF           0x3F7F
#define FWDTEN_ON            0x3FFF

#define ICS_PGD3             0x3DFF
#define ICS_PGD2             0x3EFF
#define ICS_PGD1             0x3FFF

#define HPOL_OFF             0x3BFF
#define HPOL_ON              0x3FFF

#define GWRP_ON              0x2FFF
#define GWRP_OFF             0x3FFF

#define GCP_ON               0x1FFF
#define GCP_OFF              0x3FFF



/*
 * Memory Segments Sizes
 */

#define __RESET_BASE 0x0
#define __RESET_LENGTH 0x4

#define __IVT_BASE 0x4
#define __IVT_LENGTH 0xfc

#define ___RESERVED_BASE 0x100
#define ___RESERVED_LENGTH 0x4

#define __AIVT_BASE 0x104
#define __AIVT_LENGTH 0xfc

#define __PROGRAM_BASE 0x200
#define __PROGRAM_LENGTH 0x29fc

#define __CONFIG2_BASE 0x2bfc
#define __CONFIG2_LENGTH 0x2

#define __CONFIG1_BASE 0x2bfe
#define __CONFIG1_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x400


#endif
