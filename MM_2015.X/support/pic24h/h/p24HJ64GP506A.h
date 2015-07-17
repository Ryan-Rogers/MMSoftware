/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC24HJ64GP506A processor header
 *
 * (c) Copyright 1999-2014 Microchip Technology, All rights reserved
 * Part support version v1.22.A(19-Aug-2014)
 *-------------------------------------------------------------------------*/

#ifndef __PIC24HJ64GP506A__
#error "Include file does not match processor setting"
#endif

#ifndef __24HJ64GP506A_H
#define __24HJ64GP506A_H

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
  unsigned CN6IE:1;
  unsigned CN7IE:1;
  unsigned CN8IE:1;
  unsigned CN9IE:1;
  unsigned CN10IE:1;
  unsigned CN11IE:1;
  unsigned CN12IE:1;
  unsigned CN13IE:1;
  unsigned CN14IE:1;
  unsigned CN15IE:1;
} CNEN1BITS;
extern volatile CNEN1BITS CNEN1bits __attribute__((__sfr__));

#define CNEN2 CNEN2
extern volatile unsigned int  CNEN2 __attribute__((__sfr__));
typedef struct tagCNEN2BITS {
  unsigned CN16IE:1;
  unsigned CN17IE:1;
  unsigned CN18IE:1;
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
  unsigned CN6PUE:1;
  unsigned CN7PUE:1;
  unsigned CN8PUE:1;
  unsigned CN9PUE:1;
  unsigned CN10PUE:1;
  unsigned CN11PUE:1;
  unsigned CN12PUE:1;
  unsigned CN13PUE:1;
  unsigned CN14PUE:1;
  unsigned CN15PUE:1;
} CNPU1BITS;
extern volatile CNPU1BITS CNPU1bits __attribute__((__sfr__));

#define CNPU2 CNPU2
extern volatile unsigned int  CNPU2 __attribute__((__sfr__));
typedef struct tagCNPU2BITS {
  unsigned CN16PUE:1;
  unsigned CN17PUE:1;
  unsigned CN18PUE:1;
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
  unsigned DMACERR:1;
  unsigned DIV0ERR:1;
  unsigned :8;
  unsigned NSTDIS:1;
} INTCON1BITS;
extern volatile INTCON1BITS INTCON1bits __attribute__((__sfr__));

#define INTCON2 INTCON2
extern volatile unsigned int  INTCON2 __attribute__((__sfr__));
typedef struct tagINTCON2BITS {
  unsigned INT0EP:1;
  unsigned INT1EP:1;
  unsigned INT2EP:1;
  unsigned INT3EP:1;
  unsigned INT4EP:1;
  unsigned :9;
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
__extension__ typedef struct tagIFS1BITS {
  union {
    struct {
      unsigned SI2C1IF:1;
      unsigned MI2C1IF:1;
      unsigned :1;
      unsigned CNIF:1;
      unsigned INT1IF:1;
      unsigned :1;
      unsigned IC7IF:1;
      unsigned IC8IF:1;
      unsigned DMA2IF:1;
      unsigned OC3IF:1;
      unsigned OC4IF:1;
      unsigned T4IF:1;
      unsigned T5IF:1;
      unsigned INT2IF:1;
      unsigned U2RXIF:1;
      unsigned U2TXIF:1;
    };
    struct {
      unsigned SI2CIF:1;
    };
  };
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile unsigned int  IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  unsigned SPI2EIF:1;
  unsigned SPI2IF:1;
  unsigned C1RXIF:1;
  unsigned C1IF:1;
  unsigned DMA3IF:1;
  unsigned IC3IF:1;
  unsigned IC4IF:1;
  unsigned IC5IF:1;
  unsigned IC6IF:1;
  unsigned OC5IF:1;
  unsigned OC6IF:1;
  unsigned OC7IF:1;
  unsigned OC8IF:1;
  unsigned :1;
  unsigned DMA4IF:1;
  unsigned T6IF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile unsigned int  IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  unsigned T7IF:1;
  unsigned SI2C2IF:1;
  unsigned MI2C2IF:1;
  unsigned T8IF:1;
  unsigned T9IF:1;
  unsigned INT3IF:1;
  unsigned INT4IF:1;
  unsigned :6;
  unsigned DMA5IF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile unsigned int  IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  unsigned :1;
  unsigned U1EIF:1;
  unsigned U2EIF:1;
  unsigned :1;
  unsigned DMA6IF:1;
  unsigned DMA7IF:1;
  unsigned C1TXIF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

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
__extension__ typedef struct tagIEC1BITS {
  union {
    struct {
      unsigned SI2C1IE:1;
      unsigned MI2C1IE:1;
      unsigned :1;
      unsigned CNIE:1;
      unsigned INT1IE:1;
      unsigned :1;
      unsigned IC7IE:1;
      unsigned IC8IE:1;
      unsigned DMA2IE:1;
      unsigned OC3IE:1;
      unsigned OC4IE:1;
      unsigned T4IE:1;
      unsigned T5IE:1;
      unsigned INT2IE:1;
      unsigned U2RXIE:1;
      unsigned U2TXIE:1;
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
  unsigned SPI2EIE:1;
  unsigned SPI2IE:1;
  unsigned C1RXIE:1;
  unsigned C1IE:1;
  unsigned DMA3IE:1;
  unsigned IC3IE:1;
  unsigned IC4IE:1;
  unsigned IC5IE:1;
  unsigned IC6IE:1;
  unsigned OC5IE:1;
  unsigned OC6IE:1;
  unsigned OC7IE:1;
  unsigned OC8IE:1;
  unsigned :1;
  unsigned DMA4IE:1;
  unsigned T6IE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile unsigned int  IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  unsigned T7IE:1;
  unsigned SI2C2IE:1;
  unsigned MI2C2IE:1;
  unsigned T8IE:1;
  unsigned T9IE:1;
  unsigned INT3IE:1;
  unsigned INT4IE:1;
  unsigned :6;
  unsigned DMA5IE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile unsigned int  IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  unsigned :1;
  unsigned U1EIE:1;
  unsigned U2EIE:1;
  unsigned :1;
  unsigned DMA6IE:1;
  unsigned DMA7IE:1;
  unsigned C1TXIE:1;
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
      unsigned :5;
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
      unsigned :5;
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
      unsigned :5;
      unsigned IC7IP:3;
      unsigned :1;
      unsigned IC8IP:3;
    };
    struct {
      unsigned INT1IP0:1;
      unsigned INT1IP1:1;
      unsigned INT1IP2:1;
      unsigned :5;
      unsigned IC7IP0:1;
      unsigned IC7IP1:1;
      unsigned IC7IP2:1;
      unsigned :1;
      unsigned IC8IP0:1;
      unsigned IC8IP1:1;
      unsigned IC8IP2:1;
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
      unsigned :1;
      unsigned C1RXIP:3;
      unsigned :1;
      unsigned C1IP:3;
    };
    struct {
      unsigned SPI2EIP0:1;
      unsigned SPI2EIP1:1;
      unsigned SPI2EIP2:1;
      unsigned :1;
      unsigned SPI2IP0:1;
      unsigned SPI2IP1:1;
      unsigned SPI2IP2:1;
      unsigned :1;
      unsigned C1RXIP0:1;
      unsigned C1RXIP1:1;
      unsigned C1RXIP2:1;
      unsigned :1;
      unsigned C1IP0:1;
      unsigned C1IP1:1;
      unsigned C1IP2:1;
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
      unsigned :1;
      unsigned IC5IP:3;
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
      unsigned :1;
      unsigned IC5IP0:1;
      unsigned IC5IP1:1;
      unsigned IC5IP2:1;
    };
  };
} IPC9BITS;
extern volatile IPC9BITS IPC9bits __attribute__((__sfr__));

#define IPC10 IPC10
extern volatile unsigned int  IPC10 __attribute__((__sfr__));
__extension__ typedef struct tagIPC10BITS {
  union {
    struct {
      unsigned IC6IP:3;
      unsigned :1;
      unsigned OC5IP:3;
      unsigned :1;
      unsigned OC6IP:3;
      unsigned :1;
      unsigned OC7IP:3;
    };
    struct {
      unsigned IC6IP0:1;
      unsigned IC6IP1:1;
      unsigned IC6IP2:1;
      unsigned :1;
      unsigned OC5IP0:1;
      unsigned OC5IP1:1;
      unsigned OC5IP2:1;
      unsigned :1;
      unsigned OC6IP0:1;
      unsigned OC6IP1:1;
      unsigned OC6IP2:1;
      unsigned :1;
      unsigned OC7IP0:1;
      unsigned OC7IP1:1;
      unsigned OC7IP2:1;
    };
  };
} IPC10BITS;
extern volatile IPC10BITS IPC10bits __attribute__((__sfr__));

#define IPC11 IPC11
extern volatile unsigned int  IPC11 __attribute__((__sfr__));
__extension__ typedef struct tagIPC11BITS {
  union {
    struct {
      unsigned OC8IP:3;
      unsigned :5;
      unsigned DMA4IP:3;
      unsigned :1;
      unsigned T6IP:3;
    };
    struct {
      unsigned OC8IP0:1;
      unsigned OC8IP1:1;
      unsigned OC8IP2:1;
      unsigned :5;
      unsigned DMA4IP0:1;
      unsigned DMA4IP1:1;
      unsigned DMA4IP2:1;
      unsigned :1;
      unsigned T6IP0:1;
      unsigned T6IP1:1;
      unsigned T6IP2:1;
    };
  };
} IPC11BITS;
extern volatile IPC11BITS IPC11bits __attribute__((__sfr__));

#define IPC12 IPC12
extern volatile unsigned int  IPC12 __attribute__((__sfr__));
__extension__ typedef struct tagIPC12BITS {
  union {
    struct {
      unsigned T7IP:3;
      unsigned :1;
      unsigned SI2C2IP:3;
      unsigned :1;
      unsigned MI2C2IP:3;
      unsigned :1;
      unsigned T8IP:3;
    };
    struct {
      unsigned T7IP0:1;
      unsigned T7IP1:1;
      unsigned T7IP2:1;
      unsigned :1;
      unsigned SI2C2IP0:1;
      unsigned SI2C2IP1:1;
      unsigned SI2C2IP2:1;
      unsigned :1;
      unsigned MI2C2IP0:1;
      unsigned MI2C2IP1:1;
      unsigned MI2C2IP2:1;
      unsigned :1;
      unsigned T8IP0:1;
      unsigned T8IP1:1;
      unsigned T8IP2:1;
    };
  };
} IPC12BITS;
extern volatile IPC12BITS IPC12bits __attribute__((__sfr__));

#define IPC13 IPC13
extern volatile unsigned int  IPC13 __attribute__((__sfr__));
__extension__ typedef struct tagIPC13BITS {
  union {
    struct {
      unsigned T9IP:3;
      unsigned :1;
      unsigned INT3IP:3;
      unsigned :1;
      unsigned INT4IP:3;
    };
    struct {
      unsigned T9IP0:1;
      unsigned T9IP1:1;
      unsigned T9IP2:1;
      unsigned :1;
      unsigned INT3IP0:1;
      unsigned INT3IP1:1;
      unsigned INT3IP2:1;
      unsigned :1;
      unsigned INT4IP0:1;
      unsigned INT4IP1:1;
      unsigned INT4IP2:1;
    };
  };
} IPC13BITS;
extern volatile IPC13BITS IPC13bits __attribute__((__sfr__));

#define IPC15 IPC15
extern volatile unsigned int  IPC15 __attribute__((__sfr__));
__extension__ typedef struct tagIPC15BITS {
  union {
    struct {
      unsigned :4;
      unsigned DMA5IP:3;
    };
    struct {
      unsigned :4;
      unsigned DMA5IP0:1;
      unsigned DMA5IP1:1;
      unsigned DMA5IP2:1;
    };
  };
} IPC15BITS;
extern volatile IPC15BITS IPC15bits __attribute__((__sfr__));

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

#define IPC17 IPC17
extern volatile unsigned int  IPC17 __attribute__((__sfr__));
__extension__ typedef struct tagIPC17BITS {
  union {
    struct {
      unsigned DMA6IP:3;
      unsigned :1;
      unsigned DMA7IP:3;
      unsigned :1;
      unsigned C1TXIP:3;
    };
    struct {
      unsigned DMA6IP0:1;
      unsigned DMA6IP1:1;
      unsigned DMA6IP2:1;
      unsigned :1;
      unsigned DMA7IP0:1;
      unsigned DMA7IP1:1;
      unsigned DMA7IP2:1;
      unsigned :1;
      unsigned C1TXIP0:1;
      unsigned C1TXIP1:1;
      unsigned C1TXIP2:1;
    };
  };
} IPC17BITS;
extern volatile IPC17BITS IPC17bits __attribute__((__sfr__));

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

#define TMR6 TMR6
extern volatile unsigned int  TMR6 __attribute__((__sfr__));
#define TMR7HLD TMR7HLD
extern volatile unsigned int  TMR7HLD __attribute__((__sfr__));
#define TMR7 TMR7
extern volatile unsigned int  TMR7 __attribute__((__sfr__));
#define PR6 PR6
extern volatile unsigned int  PR6 __attribute__((__sfr__));
#define PR7 PR7
extern volatile unsigned int  PR7 __attribute__((__sfr__));
#define T6CON T6CON
extern volatile unsigned int  T6CON __attribute__((__sfr__));
__extension__ typedef struct tagT6CONBITS {
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
} T6CONBITS;
extern volatile T6CONBITS T6CONbits __attribute__((__sfr__));

#define T7CON T7CON
extern volatile unsigned int  T7CON __attribute__((__sfr__));
__extension__ typedef struct tagT7CONBITS {
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
} T7CONBITS;
extern volatile T7CONBITS T7CONbits __attribute__((__sfr__));

#define TMR8 TMR8
extern volatile unsigned int  TMR8 __attribute__((__sfr__));
#define TMR9HLD TMR9HLD
extern volatile unsigned int  TMR9HLD __attribute__((__sfr__));
#define TMR9 TMR9
extern volatile unsigned int  TMR9 __attribute__((__sfr__));
#define PR8 PR8
extern volatile unsigned int  PR8 __attribute__((__sfr__));
#define PR9 PR9
extern volatile unsigned int  PR9 __attribute__((__sfr__));
#define T8CON T8CON
extern volatile unsigned int  T8CON __attribute__((__sfr__));
__extension__ typedef struct tagT8CONBITS {
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
} T8CONBITS;
extern volatile T8CONBITS T8CONbits __attribute__((__sfr__));

#define T9CON T9CON
extern volatile unsigned int  T9CON __attribute__((__sfr__));
__extension__ typedef struct tagT9CONBITS {
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
} T9CONBITS;
extern volatile T9CONBITS T9CONbits __attribute__((__sfr__));


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

#define IC4BUF IC4BUF
extern volatile unsigned int  IC4BUF __attribute__((__sfr__));
#define IC4CON IC4CON
extern volatile unsigned int  IC4CON __attribute__((__sfr__));
__extension__ typedef struct tagIC4CONBITS {
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
} IC4CONBITS;
extern volatile IC4CONBITS IC4CONbits __attribute__((__sfr__));

#define IC5BUF IC5BUF
extern volatile unsigned int  IC5BUF __attribute__((__sfr__));
#define IC5CON IC5CON
extern volatile unsigned int  IC5CON __attribute__((__sfr__));
__extension__ typedef struct tagIC5CONBITS {
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
} IC5CONBITS;
extern volatile IC5CONBITS IC5CONbits __attribute__((__sfr__));

#define IC6BUF IC6BUF
extern volatile unsigned int  IC6BUF __attribute__((__sfr__));
#define IC6CON IC6CON
extern volatile unsigned int  IC6CON __attribute__((__sfr__));
__extension__ typedef struct tagIC6CONBITS {
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
} IC6CONBITS;
extern volatile IC6CONBITS IC6CONbits __attribute__((__sfr__));

#define IC7BUF IC7BUF
extern volatile unsigned int  IC7BUF __attribute__((__sfr__));
#define IC7CON IC7CON
extern volatile unsigned int  IC7CON __attribute__((__sfr__));
__extension__ typedef struct tagIC7CONBITS {
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
} IC7CONBITS;
extern volatile IC7CONBITS IC7CONbits __attribute__((__sfr__));

#define IC8BUF IC8BUF
extern volatile unsigned int  IC8BUF __attribute__((__sfr__));
#define IC8CON IC8CON
extern volatile unsigned int  IC8CON __attribute__((__sfr__));
__extension__ typedef struct tagIC8CONBITS {
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
} IC8CONBITS;
extern volatile IC8CONBITS IC8CONbits __attribute__((__sfr__));


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

#define OC3RS OC3RS
extern volatile unsigned int  OC3RS __attribute__((__sfr__));
#define OC3R OC3R
extern volatile unsigned int  OC3R __attribute__((__sfr__));
#define OC3CON OC3CON
extern volatile unsigned int  OC3CON __attribute__((__sfr__));
__extension__ typedef struct tagOC3CONBITS {
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
} OC3CONBITS;
extern volatile OC3CONBITS OC3CONbits __attribute__((__sfr__));

#define OC4RS OC4RS
extern volatile unsigned int  OC4RS __attribute__((__sfr__));
#define OC4R OC4R
extern volatile unsigned int  OC4R __attribute__((__sfr__));
#define OC4CON OC4CON
extern volatile unsigned int  OC4CON __attribute__((__sfr__));
__extension__ typedef struct tagOC4CONBITS {
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
} OC4CONBITS;
extern volatile OC4CONBITS OC4CONbits __attribute__((__sfr__));

#define OC5RS OC5RS
extern volatile unsigned int  OC5RS __attribute__((__sfr__));
#define OC5R OC5R
extern volatile unsigned int  OC5R __attribute__((__sfr__));
#define OC5CON OC5CON
extern volatile unsigned int  OC5CON __attribute__((__sfr__));
__extension__ typedef struct tagOC5CONBITS {
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
} OC5CONBITS;
extern volatile OC5CONBITS OC5CONbits __attribute__((__sfr__));

#define OC6RS OC6RS
extern volatile unsigned int  OC6RS __attribute__((__sfr__));
#define OC6R OC6R
extern volatile unsigned int  OC6R __attribute__((__sfr__));
#define OC6CON OC6CON
extern volatile unsigned int  OC6CON __attribute__((__sfr__));
__extension__ typedef struct tagOC6CONBITS {
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
} OC6CONBITS;
extern volatile OC6CONBITS OC6CONbits __attribute__((__sfr__));

#define OC7RS OC7RS
extern volatile unsigned int  OC7RS __attribute__((__sfr__));
#define OC7R OC7R
extern volatile unsigned int  OC7R __attribute__((__sfr__));
#define OC7CON OC7CON
extern volatile unsigned int  OC7CON __attribute__((__sfr__));
__extension__ typedef struct tagOC7CONBITS {
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
} OC7CONBITS;
extern volatile OC7CONBITS OC7CONbits __attribute__((__sfr__));

#define OC8RS OC8RS
extern volatile unsigned int  OC8RS __attribute__((__sfr__));
#define OC8R OC8R
extern volatile unsigned int  OC8R __attribute__((__sfr__));
#define OC8CON OC8CON
extern volatile unsigned int  OC8CON __attribute__((__sfr__));
__extension__ typedef struct tagOC8CONBITS {
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
} OC8CONBITS;
extern volatile OC8CONBITS OC8CONbits __attribute__((__sfr__));

#define I2C1RCV I2C1RCV
extern volatile unsigned int  I2C1RCV __attribute__((__sfr__));
#define I2CRCV I2CRCV
extern volatile unsigned int  I2CRCV __attribute__((__sfr__));
#define I2C1TRN I2C1TRN
extern volatile unsigned int  I2C1TRN __attribute__((__sfr__));
#define I2CTRN I2CTRN
extern volatile unsigned int  I2CTRN __attribute__((__sfr__));
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

#define I2CCON I2CCON
extern volatile unsigned int  I2CCON __attribute__((__sfr__));
typedef struct tagI2CCONBITS {
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
} I2CCONBITS;
extern volatile I2CCONBITS I2CCONbits __attribute__((__sfr__));

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

#define I2CSTAT I2CSTAT
extern volatile unsigned int  I2CSTAT __attribute__((__sfr__));
typedef struct tagI2CSTATBITS {
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
} I2CSTATBITS;
extern volatile I2CSTATBITS I2CSTATbits __attribute__((__sfr__));

#define I2C1ADD I2C1ADD
extern volatile unsigned int  I2C1ADD __attribute__((__sfr__));
#define I2CADD I2CADD
extern volatile unsigned int  I2CADD __attribute__((__sfr__));
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
      unsigned :5;
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
typedef struct tagU1TXREGBITS {
  unsigned UTXREG0:1;
  unsigned UTXREG1:1;
  unsigned UTXREG2:1;
  unsigned UTXREG3:1;
  unsigned UTXREG4:1;
  unsigned UTXREG5:1;
  unsigned UTXREG6:1;
  unsigned UTXREG7:1;
  unsigned UTXREG8:1;
} U1TXREGBITS;
extern volatile U1TXREGBITS U1TXREGbits __attribute__((__sfr__));

#define U1RXREG U1RXREG
extern volatile unsigned int  U1RXREG __attribute__((__sfr__));
typedef struct tagU1RXREGBITS {
  unsigned URXREG0:1;
  unsigned URXREG1:1;
  unsigned URXREG2:1;
  unsigned URXREG3:1;
  unsigned URXREG4:1;
  unsigned URXREG5:1;
  unsigned URXREG6:1;
  unsigned URXREG7:1;
  unsigned URXREG8:1;
} U1RXREGBITS;
extern volatile U1RXREGBITS U1RXREGbits __attribute__((__sfr__));

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
      unsigned :5;
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
    };
  };
} U2STABITS;
extern volatile U2STABITS U2STAbits __attribute__((__sfr__));

#define U2TXREG U2TXREG
extern volatile unsigned int  U2TXREG __attribute__((__sfr__));
typedef struct tagU2TXREGBITS {
  unsigned UTXREG0:1;
  unsigned UTXREG1:1;
  unsigned UTXREG2:1;
  unsigned UTXREG3:1;
  unsigned UTXREG4:1;
  unsigned UTXREG5:1;
  unsigned UTXREG6:1;
  unsigned UTXREG7:1;
  unsigned UTXREG8:1;
} U2TXREGBITS;
extern volatile U2TXREGBITS U2TXREGbits __attribute__((__sfr__));

#define U2RXREG U2RXREG
extern volatile unsigned int  U2RXREG __attribute__((__sfr__));
typedef struct tagU2RXREGBITS {
  unsigned URXREG0:1;
  unsigned URXREG1:1;
  unsigned URXREG2:1;
  unsigned URXREG3:1;
  unsigned URXREG4:1;
  unsigned URXREG5:1;
  unsigned URXREG6:1;
  unsigned URXREG7:1;
  unsigned URXREG8:1;
} U2RXREGBITS;
extern volatile U2RXREGBITS U2RXREGbits __attribute__((__sfr__));

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
#define SPI2STAT SPI2STAT
extern volatile unsigned int  SPI2STAT __attribute__((__sfr__));
typedef struct tagSPI2STATBITS {
  unsigned SPIRBF:1;
  unsigned SPITBF:1;
  unsigned :4;
  unsigned SPIROV:1;
  unsigned :6;
  unsigned SPISIDL:1;
  unsigned :1;
  unsigned SPIEN:1;
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
  unsigned :1;
  unsigned FRMDLY:1;
  unsigned :11;
  unsigned FRMPOL:1;
  unsigned SPIFSD:1;
  unsigned FRMEN:1;
} SPI2CON2BITS;
extern volatile SPI2CON2BITS SPI2CON2bits __attribute__((__sfr__));

#define SPI2BUF SPI2BUF
extern volatile unsigned int  SPI2BUF __attribute__((__sfr__));
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

#define TRISC TRISC
extern volatile unsigned int  TRISC __attribute__((__sfr__));
typedef struct tagTRISCBITS {
  unsigned :1;
  unsigned TRISC1:1;
  unsigned TRISC2:1;
  unsigned :9;
  unsigned TRISC12:1;
  unsigned TRISC13:1;
  unsigned TRISC14:1;
  unsigned TRISC15:1;
} TRISCBITS;
extern volatile TRISCBITS TRISCbits __attribute__((__sfr__));

#define PORTC PORTC
extern volatile unsigned int  PORTC __attribute__((__sfr__));
typedef struct tagPORTCBITS {
  unsigned :1;
  unsigned RC1:1;
  unsigned RC2:1;
  unsigned :9;
  unsigned RC12:1;
  unsigned RC13:1;
  unsigned RC14:1;
  unsigned RC15:1;
} PORTCBITS;
extern volatile PORTCBITS PORTCbits __attribute__((__sfr__));

#define LATC LATC
extern volatile unsigned int  LATC __attribute__((__sfr__));
typedef struct tagLATCBITS {
  unsigned :1;
  unsigned LATC1:1;
  unsigned LATC2:1;
  unsigned :9;
  unsigned LATC12:1;
  unsigned LATC13:1;
  unsigned LATC14:1;
  unsigned LATC15:1;
} LATCBITS;
extern volatile LATCBITS LATCbits __attribute__((__sfr__));

#define TRISD TRISD
extern volatile unsigned int  TRISD __attribute__((__sfr__));
typedef struct tagTRISDBITS {
  unsigned TRISD0:1;
  unsigned TRISD1:1;
  unsigned TRISD2:1;
  unsigned TRISD3:1;
  unsigned TRISD4:1;
  unsigned TRISD5:1;
  unsigned TRISD6:1;
  unsigned TRISD7:1;
  unsigned TRISD8:1;
  unsigned TRISD9:1;
  unsigned TRISD10:1;
  unsigned TRISD11:1;
} TRISDBITS;
extern volatile TRISDBITS TRISDbits __attribute__((__sfr__));

#define PORTD PORTD
extern volatile unsigned int  PORTD __attribute__((__sfr__));
typedef struct tagPORTDBITS {
  unsigned RD0:1;
  unsigned RD1:1;
  unsigned RD2:1;
  unsigned RD3:1;
  unsigned RD4:1;
  unsigned RD5:1;
  unsigned RD6:1;
  unsigned RD7:1;
  unsigned RD8:1;
  unsigned RD9:1;
  unsigned RD10:1;
  unsigned RD11:1;
} PORTDBITS;
extern volatile PORTDBITS PORTDbits __attribute__((__sfr__));

#define LATD LATD
extern volatile unsigned int  LATD __attribute__((__sfr__));
typedef struct tagLATDBITS {
  unsigned LATD0:1;
  unsigned LATD1:1;
  unsigned LATD2:1;
  unsigned LATD3:1;
  unsigned LATD4:1;
  unsigned LATD5:1;
  unsigned LATD6:1;
  unsigned LATD7:1;
  unsigned LATD8:1;
  unsigned LATD9:1;
  unsigned LATD10:1;
  unsigned LATD11:1;
} LATDBITS;
extern volatile LATDBITS LATDbits __attribute__((__sfr__));

#define TRISF TRISF
extern volatile unsigned int  TRISF __attribute__((__sfr__));
typedef struct tagTRISFBITS {
  unsigned TRISF0:1;
  unsigned TRISF1:1;
  unsigned TRISF2:1;
  unsigned TRISF3:1;
  unsigned TRISF4:1;
  unsigned TRISF5:1;
  unsigned TRISF6:1;
} TRISFBITS;
extern volatile TRISFBITS TRISFbits __attribute__((__sfr__));

#define PORTF PORTF
extern volatile unsigned int  PORTF __attribute__((__sfr__));
typedef struct tagPORTFBITS {
  unsigned RF0:1;
  unsigned RF1:1;
  unsigned RF2:1;
  unsigned RF3:1;
  unsigned RF4:1;
  unsigned RF5:1;
  unsigned RF6:1;
} PORTFBITS;
extern volatile PORTFBITS PORTFbits __attribute__((__sfr__));

#define LATF LATF
extern volatile unsigned int  LATF __attribute__((__sfr__));
typedef struct tagLATFBITS {
  unsigned LATF0:1;
  unsigned LATF1:1;
  unsigned LATF2:1;
  unsigned LATF3:1;
  unsigned LATF4:1;
  unsigned LATF5:1;
  unsigned LATF6:1;
} LATFBITS;
extern volatile LATFBITS LATFbits __attribute__((__sfr__));

#define TRISG TRISG
extern volatile unsigned int  TRISG __attribute__((__sfr__));
typedef struct tagTRISGBITS {
  unsigned TRISG0:1;
  unsigned TRISG1:1;
  unsigned TRISG2:1;
  unsigned TRISG3:1;
  unsigned :2;
  unsigned TRISG6:1;
  unsigned TRISG7:1;
  unsigned TRISG8:1;
  unsigned TRISG9:1;
  unsigned :2;
  unsigned TRISG12:1;
  unsigned TRISG13:1;
  unsigned TRISG14:1;
  unsigned TRISG15:1;
} TRISGBITS;
extern volatile TRISGBITS TRISGbits __attribute__((__sfr__));

#define PORTG PORTG
extern volatile unsigned int  PORTG __attribute__((__sfr__));
typedef struct tagPORTGBITS {
  unsigned RG0:1;
  unsigned RG1:1;
  unsigned RG2:1;
  unsigned RG3:1;
  unsigned :2;
  unsigned RG6:1;
  unsigned RG7:1;
  unsigned RG8:1;
  unsigned RG9:1;
  unsigned :2;
  unsigned RG12:1;
  unsigned RG13:1;
  unsigned RG14:1;
  unsigned RG15:1;
} PORTGBITS;
extern volatile PORTGBITS PORTGbits __attribute__((__sfr__));

#define LATG LATG
extern volatile unsigned int  LATG __attribute__((__sfr__));
typedef struct tagLATGBITS {
  unsigned LATG0:1;
  unsigned LATG1:1;
  unsigned LATG2:1;
  unsigned LATG3:1;
  unsigned :2;
  unsigned LATG6:1;
  unsigned LATG7:1;
  unsigned LATG8:1;
  unsigned LATG9:1;
  unsigned :2;
  unsigned LATG12:1;
  unsigned LATG13:1;
  unsigned LATG14:1;
  unsigned LATG15:1;
} LATGBITS;
extern volatile LATGBITS LATGbits __attribute__((__sfr__));

#define ADC1BUF0 ADC1BUF0
extern volatile unsigned int  ADC1BUF0 __attribute__((__sfr__));
#define ADCBUF0 ADCBUF0
extern volatile unsigned int  ADCBUF0 __attribute__((__sfr__));
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
      unsigned SMPI:4;
      unsigned :1;
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
      unsigned :2;
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

#define AD1PCFGH AD1PCFGH
extern volatile unsigned int  AD1PCFGH __attribute__((__sfr__));
typedef struct tagAD1PCFGHBITS {
  unsigned PCFG16:1;
  unsigned PCFG17:1;
} AD1PCFGHBITS;
extern volatile AD1PCFGHBITS AD1PCFGHbits __attribute__((__sfr__));

#define AD1PCFGL AD1PCFGL
extern volatile unsigned int  AD1PCFGL __attribute__((__sfr__));
typedef struct tagAD1PCFGLBITS {
  unsigned PCFG0:1;
  unsigned PCFG1:1;
  unsigned PCFG2:1;
  unsigned PCFG3:1;
  unsigned PCFG4:1;
  unsigned PCFG5:1;
  unsigned PCFG6:1;
  unsigned PCFG7:1;
  unsigned PCFG8:1;
  unsigned PCFG9:1;
  unsigned PCFG10:1;
  unsigned PCFG11:1;
  unsigned PCFG12:1;
  unsigned PCFG13:1;
  unsigned PCFG14:1;
  unsigned PCFG15:1;
} AD1PCFGLBITS;
extern volatile AD1PCFGLBITS AD1PCFGLbits __attribute__((__sfr__));

#define ADPCFG ADPCFG
extern volatile unsigned int  ADPCFG __attribute__((__sfr__));
typedef struct tagADPCFGBITS {
  unsigned PCFG0:1;
  unsigned PCFG1:1;
  unsigned PCFG2:1;
  unsigned PCFG3:1;
  unsigned PCFG4:1;
  unsigned PCFG5:1;
  unsigned PCFG6:1;
  unsigned PCFG7:1;
  unsigned PCFG8:1;
  unsigned PCFG9:1;
  unsigned PCFG10:1;
  unsigned PCFG11:1;
  unsigned PCFG12:1;
  unsigned PCFG13:1;
  unsigned PCFG14:1;
  unsigned PCFG15:1;
} ADPCFGBITS;
extern volatile ADPCFGBITS ADPCFGbits __attribute__((__sfr__));

#define AD1CSSH AD1CSSH
extern volatile unsigned int  AD1CSSH __attribute__((__sfr__));
typedef struct tagAD1CSSHBITS {
  unsigned CSS16:1;
  unsigned CSS17:1;
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
    };
    struct {
      unsigned DMABL0:1;
      unsigned DMABL1:1;
      unsigned DMABL2:1;
    };
  };
} AD1CON4BITS;
extern volatile AD1CON4BITS AD1CON4bits __attribute__((__sfr__));

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
      unsigned IRQSEL:7;
      unsigned :8;
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
    };
  };
} DMA0REQBITS;
extern volatile DMA0REQBITS DMA0REQbits __attribute__((__sfr__));

#define DMA0STA DMA0STA
extern volatile unsigned int  DMA0STA __attribute__((__sfr__));
#define DMA0STB DMA0STB
extern volatile unsigned int  DMA0STB __attribute__((__sfr__));
#define DMA0PAD DMA0PAD
extern volatile unsigned int  DMA0PAD __attribute__((__sfr__));
#define DMA0CNT DMA0CNT
extern volatile unsigned int  DMA0CNT __attribute__((__sfr__));
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
      unsigned IRQSEL:7;
      unsigned :8;
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
    };
  };
} DMA1REQBITS;
extern volatile DMA1REQBITS DMA1REQbits __attribute__((__sfr__));

#define DMA1STA DMA1STA
extern volatile unsigned int  DMA1STA __attribute__((__sfr__));
#define DMA1STB DMA1STB
extern volatile unsigned int  DMA1STB __attribute__((__sfr__));
#define DMA1PAD DMA1PAD
extern volatile unsigned int  DMA1PAD __attribute__((__sfr__));
#define DMA1CNT DMA1CNT
extern volatile unsigned int  DMA1CNT __attribute__((__sfr__));
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
      unsigned IRQSEL:7;
      unsigned :8;
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
    };
  };
} DMA2REQBITS;
extern volatile DMA2REQBITS DMA2REQbits __attribute__((__sfr__));

#define DMA2STA DMA2STA
extern volatile unsigned int  DMA2STA __attribute__((__sfr__));
#define DMA2STB DMA2STB
extern volatile unsigned int  DMA2STB __attribute__((__sfr__));
#define DMA2PAD DMA2PAD
extern volatile unsigned int  DMA2PAD __attribute__((__sfr__));
#define DMA2CNT DMA2CNT
extern volatile unsigned int  DMA2CNT __attribute__((__sfr__));
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
      unsigned IRQSEL:7;
      unsigned :8;
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
    };
  };
} DMA3REQBITS;
extern volatile DMA3REQBITS DMA3REQbits __attribute__((__sfr__));

#define DMA3STA DMA3STA
extern volatile unsigned int  DMA3STA __attribute__((__sfr__));
#define DMA3STB DMA3STB
extern volatile unsigned int  DMA3STB __attribute__((__sfr__));
#define DMA3PAD DMA3PAD
extern volatile unsigned int  DMA3PAD __attribute__((__sfr__));
#define DMA3CNT DMA3CNT
extern volatile unsigned int  DMA3CNT __attribute__((__sfr__));
#define DMA4CON DMA4CON
extern volatile unsigned int  DMA4CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA4CONBITS {
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
} DMA4CONBITS;
extern volatile DMA4CONBITS DMA4CONbits __attribute__((__sfr__));

#define DMA4REQ DMA4REQ
extern volatile unsigned int  DMA4REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA4REQBITS {
  union {
    struct {
      unsigned IRQSEL:7;
      unsigned :8;
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
    };
  };
} DMA4REQBITS;
extern volatile DMA4REQBITS DMA4REQbits __attribute__((__sfr__));

#define DMA4STA DMA4STA
extern volatile unsigned int  DMA4STA __attribute__((__sfr__));
#define DMA4STB DMA4STB
extern volatile unsigned int  DMA4STB __attribute__((__sfr__));
#define DMA4PAD DMA4PAD
extern volatile unsigned int  DMA4PAD __attribute__((__sfr__));
#define DMA4CNT DMA4CNT
extern volatile unsigned int  DMA4CNT __attribute__((__sfr__));
#define DMA5CON DMA5CON
extern volatile unsigned int  DMA5CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA5CONBITS {
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
} DMA5CONBITS;
extern volatile DMA5CONBITS DMA5CONbits __attribute__((__sfr__));

#define DMA5REQ DMA5REQ
extern volatile unsigned int  DMA5REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA5REQBITS {
  union {
    struct {
      unsigned IRQSEL:7;
      unsigned :8;
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
    };
  };
} DMA5REQBITS;
extern volatile DMA5REQBITS DMA5REQbits __attribute__((__sfr__));

#define DMA5STA DMA5STA
extern volatile unsigned int  DMA5STA __attribute__((__sfr__));
#define DMA5STB DMA5STB
extern volatile unsigned int  DMA5STB __attribute__((__sfr__));
#define DMA5PAD DMA5PAD
extern volatile unsigned int  DMA5PAD __attribute__((__sfr__));
#define DMA5CNT DMA5CNT
extern volatile unsigned int  DMA5CNT __attribute__((__sfr__));
#define DMA6CON DMA6CON
extern volatile unsigned int  DMA6CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA6CONBITS {
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
} DMA6CONBITS;
extern volatile DMA6CONBITS DMA6CONbits __attribute__((__sfr__));

#define DMA6REQ DMA6REQ
extern volatile unsigned int  DMA6REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA6REQBITS {
  union {
    struct {
      unsigned IRQSEL:7;
      unsigned :8;
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
    };
  };
} DMA6REQBITS;
extern volatile DMA6REQBITS DMA6REQbits __attribute__((__sfr__));

#define DMA6STA DMA6STA
extern volatile unsigned int  DMA6STA __attribute__((__sfr__));
#define DMA6STB DMA6STB
extern volatile unsigned int  DMA6STB __attribute__((__sfr__));
#define DMA6PAD DMA6PAD
extern volatile unsigned int  DMA6PAD __attribute__((__sfr__));
#define DMA6CNT DMA6CNT
extern volatile unsigned int  DMA6CNT __attribute__((__sfr__));
#define DMA7CON DMA7CON
extern volatile unsigned int  DMA7CON __attribute__((__sfr__));
__extension__ typedef struct tagDMA7CONBITS {
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
} DMA7CONBITS;
extern volatile DMA7CONBITS DMA7CONbits __attribute__((__sfr__));

#define DMA7REQ DMA7REQ
extern volatile unsigned int  DMA7REQ __attribute__((__sfr__));
__extension__ typedef struct tagDMA7REQBITS {
  union {
    struct {
      unsigned IRQSEL:7;
      unsigned :8;
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
    };
  };
} DMA7REQBITS;
extern volatile DMA7REQBITS DMA7REQbits __attribute__((__sfr__));

#define DMA7STA DMA7STA
extern volatile unsigned int  DMA7STA __attribute__((__sfr__));
#define DMA7STB DMA7STB
extern volatile unsigned int  DMA7STB __attribute__((__sfr__));
#define DMA7PAD DMA7PAD
extern volatile unsigned int  DMA7PAD __attribute__((__sfr__));
#define DMA7CNT DMA7CNT
extern volatile unsigned int  DMA7CNT __attribute__((__sfr__));
#define DMACS0 DMACS0
extern volatile unsigned int  DMACS0 __attribute__((__sfr__));
__extension__ typedef struct tagDMACS0BITS {
  union {
    struct {
      unsigned XWCOL0:1;
      unsigned XWCOL1:1;
      unsigned XWCOL2:1;
      unsigned XWCOL3:1;
      unsigned XWCOL4:1;
      unsigned XWCOL5:1;
      unsigned XWCOL6:1;
      unsigned XWCOL7:1;
      unsigned PWCOL0:1;
      unsigned PWCOL1:1;
      unsigned PWCOL2:1;
      unsigned PWCOL3:1;
      unsigned PWCOL4:1;
      unsigned PWCOL5:1;
      unsigned PWCOL6:1;
      unsigned PWCOL7:1;
    };
    struct {
      unsigned XWCOL:8;
      unsigned PWCOL:8;
    };
  };
} DMACS0BITS;
extern volatile DMACS0BITS DMACS0bits __attribute__((__sfr__));

#define DMACS1 DMACS1
extern volatile unsigned int  DMACS1 __attribute__((__sfr__));
__extension__ typedef struct tagDMACS1BITS {
  union {
    struct {
      unsigned PPST0:1;
      unsigned PPST1:1;
      unsigned PPST2:1;
      unsigned PPST3:1;
      unsigned PPST4:1;
      unsigned PPST5:1;
      unsigned PPST6:1;
      unsigned PPST7:1;
      unsigned LSTCH:4;
    };
    struct {
      unsigned PPST:8;
      unsigned LSTCH0:1;
      unsigned LSTCH1:1;
      unsigned LSTCH2:1;
      unsigned LSTCH3:1;
    };
  };
} DMACS1BITS;
extern volatile DMACS1BITS DMACS1bits __attribute__((__sfr__));

#define DSADR DSADR
extern volatile unsigned int  DSADR __attribute__((__sfr__));
#define C1CTRL1 C1CTRL1
extern volatile unsigned int  C1CTRL1 __attribute__((__sfr__));
__extension__ typedef struct tagC1CTRL1BITS {
  union {
    struct {
      unsigned WIN:1;
      unsigned :2;
      unsigned CANCAP:1;
      unsigned :1;
      unsigned OPMODE:3;
      unsigned REQOP:3;
      unsigned CANCKS:1;
      unsigned ABAT:1;
      unsigned CSIDL:1;
    };
    struct {
      unsigned :5;
      unsigned OPMODE0:1;
      unsigned OPMODE1:1;
      unsigned OPMODE2:1;
      unsigned REQOP0:1;
      unsigned REQOP1:1;
      unsigned REQOP2:1;
    };
  };
} C1CTRL1BITS;
extern volatile C1CTRL1BITS C1CTRL1bits __attribute__((__sfr__));

#define C1CTRL2 C1CTRL2
extern volatile unsigned int  C1CTRL2 __attribute__((__sfr__));
__extension__ typedef struct tagC1CTRL2BITS {
  union {
    struct {
      unsigned DNCNT:5;
    };
    struct {
      unsigned DNCNT0:1;
      unsigned DNCNT1:1;
      unsigned DNCNT2:1;
      unsigned DNCNT3:1;
      unsigned DNCNT4:1;
    };
  };
} C1CTRL2BITS;
extern volatile C1CTRL2BITS C1CTRL2bits __attribute__((__sfr__));

#define C1VEC C1VEC
extern volatile unsigned int  C1VEC __attribute__((__sfr__));
__extension__ typedef struct tagC1VECBITS {
  union {
    struct {
      unsigned ICODE:7;
      unsigned :1;
      unsigned FILHIT:5;
    };
    struct {
      unsigned ICODE0:1;
      unsigned ICODE1:1;
      unsigned ICODE2:1;
      unsigned ICODE3:1;
      unsigned ICODE4:1;
      unsigned ICODE5:1;
      unsigned ICODE6:1;
      unsigned :1;
      unsigned FILHIT0:1;
      unsigned FILHIT1:1;
      unsigned FILHIT2:1;
      unsigned FILHIT3:1;
      unsigned FILHIT4:1;
    };
  };
} C1VECBITS;
extern volatile C1VECBITS C1VECbits __attribute__((__sfr__));

#define C1FCTRL C1FCTRL
extern volatile unsigned int  C1FCTRL __attribute__((__sfr__));
__extension__ typedef struct tagC1FCTRLBITS {
  union {
    struct {
      unsigned FSA:5;
      unsigned :8;
      unsigned DMABS:3;
    };
    struct {
      unsigned FSA0:1;
      unsigned FSA1:1;
      unsigned FSA2:1;
      unsigned FSA3:1;
      unsigned FSA4:1;
      unsigned :8;
      unsigned DMABS0:1;
      unsigned DMABS1:1;
      unsigned DMABS2:1;
    };
  };
} C1FCTRLBITS;
extern volatile C1FCTRLBITS C1FCTRLbits __attribute__((__sfr__));

#define C1FIFO C1FIFO
extern volatile unsigned int  C1FIFO __attribute__((__sfr__));
__extension__ typedef struct tagC1FIFOBITS {
  union {
    struct {
      unsigned FNRB:6;
      unsigned :2;
      unsigned FBP:6;
    };
    struct {
      unsigned FNRB0:1;
      unsigned FNRB1:1;
      unsigned FNRB2:1;
      unsigned FNRB3:1;
      unsigned FNRB4:1;
      unsigned FNRB5:1;
      unsigned :2;
      unsigned FBP0:1;
      unsigned FBP1:1;
      unsigned FBP2:1;
      unsigned FBP3:1;
      unsigned FBP4:1;
      unsigned FBP5:1;
    };
  };
} C1FIFOBITS;
extern volatile C1FIFOBITS C1FIFObits __attribute__((__sfr__));

#define C1INTF C1INTF
extern volatile unsigned int  C1INTF __attribute__((__sfr__));
typedef struct tagC1INTFBITS {
  unsigned TBIF:1;
  unsigned RBIF:1;
  unsigned RBOVIF:1;
  unsigned FIFOIF:1;
  unsigned :1;
  unsigned ERRIF:1;
  unsigned WAKIF:1;
  unsigned IVRIF:1;
  unsigned EWARN:1;
  unsigned RXWAR:1;
  unsigned TXWAR:1;
  unsigned RXBP:1;
  unsigned TXBP:1;
  unsigned TXBO:1;
} C1INTFBITS;
extern volatile C1INTFBITS C1INTFbits __attribute__((__sfr__));

#define C1INTE C1INTE
extern volatile unsigned int  C1INTE __attribute__((__sfr__));
typedef struct tagC1INTEBITS {
  unsigned TBIE:1;
  unsigned RBIE:1;
  unsigned RBOVIE:1;
  unsigned FIFOIE:1;
  unsigned :1;
  unsigned ERRIE:1;
  unsigned WAKIE:1;
  unsigned IVRIE:1;
} C1INTEBITS;
extern volatile C1INTEBITS C1INTEbits __attribute__((__sfr__));

#define C1EC C1EC
extern volatile unsigned int  C1EC __attribute__((__sfr__));
__extension__ typedef struct tagC1ECBITS {
  union {
    struct {
      unsigned RERRCNT:8;
      unsigned TERRCNT:8;
    };
    struct {
      unsigned RERRCNT0:1;
      unsigned RERRCNT1:1;
      unsigned RERRCNT2:1;
      unsigned RERRCNT3:1;
      unsigned RERRCNT4:1;
      unsigned RERRCNT5:1;
      unsigned RERRCNT6:1;
      unsigned RERRCNT7:1;
      unsigned TERRCNT0:1;
      unsigned TERRCNT1:1;
      unsigned TERRCNT2:1;
      unsigned TERRCNT3:1;
      unsigned TERRCNT4:1;
      unsigned TERRCNT5:1;
      unsigned TERRCNT6:1;
      unsigned TERRCNT7:1;
    };
  };
} C1ECBITS;
extern volatile C1ECBITS C1ECbits __attribute__((__sfr__));

#define C1RERRCNT C1RERRCNT
extern volatile unsigned char C1RERRCNT __attribute__((__sfr__));
#define C1TERRCNT C1TERRCNT
extern volatile unsigned char C1TERRCNT __attribute__((__sfr__));
#define C1CFG1 C1CFG1
extern volatile unsigned int  C1CFG1 __attribute__((__sfr__));
__extension__ typedef struct tagC1CFG1BITS {
  union {
    struct {
      unsigned BRP:6;
      unsigned SJW:2;
    };
    struct {
      unsigned BRP0:1;
      unsigned BRP1:1;
      unsigned BRP2:1;
      unsigned BRP3:1;
      unsigned BRP4:1;
      unsigned BRP5:1;
      unsigned SJW0:1;
      unsigned SJW1:1;
    };
  };
} C1CFG1BITS;
extern volatile C1CFG1BITS C1CFG1bits __attribute__((__sfr__));

#define C1CFG2 C1CFG2
extern volatile unsigned int  C1CFG2 __attribute__((__sfr__));
__extension__ typedef struct tagC1CFG2BITS {
  union {
    struct {
      unsigned PRSEG:3;
      unsigned SEG1PH:3;
      unsigned SAM:1;
      unsigned SEG2PHTS:1;
      unsigned SEG2PH:3;
      unsigned :3;
      unsigned WAKFIL:1;
    };
    struct {
      unsigned PRSEG0:1;
      unsigned PRSEG1:1;
      unsigned PRSEG2:1;
      unsigned SEG1PH0:1;
      unsigned SEG1PH1:1;
      unsigned SEG1PH2:1;
      unsigned :2;
      unsigned SEG2PH0:1;
      unsigned SEG2PH1:1;
      unsigned SEG2PH2:1;
    };
  };
} C1CFG2BITS;
extern volatile C1CFG2BITS C1CFG2bits __attribute__((__sfr__));

#define C1FEN1 C1FEN1
extern volatile unsigned int  C1FEN1 __attribute__((__sfr__));
__extension__ typedef struct tagC1FEN1BITS {
  union {
    struct {
      unsigned FLTEN0:1;
      unsigned FLTEN1:1;
      unsigned FLTEN2:1;
      unsigned FLTEN3:1;
      unsigned FLTEN4:1;
      unsigned FLTEN5:1;
      unsigned FLTEN6:1;
      unsigned FLTEN7:1;
      unsigned FLTEN8:1;
      unsigned FLTEN9:1;
      unsigned FLTEN10:1;
      unsigned FLTEN11:1;
      unsigned FLTEN12:1;
      unsigned FLTEN13:1;
      unsigned FLTEN14:1;
      unsigned FLTEN15:1;
    };
    struct {
      unsigned FLTEN:16;
    };
  };
} C1FEN1BITS;
extern volatile C1FEN1BITS C1FEN1bits __attribute__((__sfr__));

#define C1FMSKSEL1 C1FMSKSEL1
extern volatile unsigned int  C1FMSKSEL1 __attribute__((__sfr__));
__extension__ typedef struct tagC1FMSKSEL1BITS {
  union {
    struct {
      unsigned F0MSK:2;
      unsigned F1MSK:2;
      unsigned F2MSK:2;
      unsigned F3MSK:2;
      unsigned F4MSK:2;
      unsigned F5MSK:2;
      unsigned F6MSK:2;
      unsigned F7MSK:2;
    };
    struct {
      unsigned F0MSK0:1;
      unsigned F0MSK1:1;
      unsigned F1MSK0:1;
      unsigned F1MSK1:1;
      unsigned F2MSK0:1;
      unsigned F2MSK1:1;
      unsigned F3MSK0:1;
      unsigned F3MSK1:1;
      unsigned F4MSK0:1;
      unsigned F4MSK1:1;
      unsigned F5MSK0:1;
      unsigned F5MSK1:1;
      unsigned F6MSK0:1;
      unsigned F6MSK1:1;
      unsigned F7MSK0:1;
      unsigned F7MSK1:1;
    };
  };
} C1FMSKSEL1BITS;
extern volatile C1FMSKSEL1BITS C1FMSKSEL1bits __attribute__((__sfr__));

#define C1FMSKSEL2 C1FMSKSEL2
extern volatile unsigned int  C1FMSKSEL2 __attribute__((__sfr__));
__extension__ typedef struct tagC1FMSKSEL2BITS {
  union {
    struct {
      unsigned F8MSK:2;
      unsigned F9MSK:2;
      unsigned F10MSK:2;
      unsigned F11MSK:2;
      unsigned F12MSK:2;
      unsigned F13MSK:2;
      unsigned F14MSK:2;
      unsigned F15MSK:2;
    };
    struct {
      unsigned F8MSK0:1;
      unsigned F8MSK1:1;
      unsigned F9MSK0:1;
      unsigned F9MSK1:1;
      unsigned F10MSK0:1;
      unsigned F10MSK1:1;
      unsigned F11MSK0:1;
      unsigned F11MSK1:1;
      unsigned F12MSK0:1;
      unsigned F12MSK1:1;
      unsigned F13MSK0:1;
      unsigned F13MSK1:1;
      unsigned F14MSK0:1;
      unsigned F14MSK1:1;
      unsigned F15MSK0:1;
      unsigned F15MSK1:1;
    };
  };
} C1FMSKSEL2BITS;
extern volatile C1FMSKSEL2BITS C1FMSKSEL2bits __attribute__((__sfr__));

#define C1BUFPNT1 C1BUFPNT1
extern volatile unsigned int  C1BUFPNT1 __attribute__((__sfr__));
__extension__ typedef struct tagC1BUFPNT1BITS {
  union {
    struct {
      unsigned F0BP:4;
      unsigned F1BP:4;
      unsigned F2BP:4;
      unsigned F3BP:4;
    };
    struct {
      unsigned F0BP0:1;
      unsigned F0BP1:1;
      unsigned F0BP2:1;
      unsigned F0BP3:1;
      unsigned F1BP0:1;
      unsigned F1BP1:1;
      unsigned F1BP2:1;
      unsigned F1BP3:1;
      unsigned F2BP0:1;
      unsigned F2BP1:1;
      unsigned F2BP2:1;
      unsigned F2BP3:1;
      unsigned F3BP0:1;
      unsigned F3BP1:1;
      unsigned F3BP2:1;
      unsigned F3BP3:1;
    };
  };
} C1BUFPNT1BITS;
extern volatile C1BUFPNT1BITS C1BUFPNT1bits __attribute__((__sfr__));

#define C1RXFUL1 C1RXFUL1
extern volatile unsigned int  C1RXFUL1 __attribute__((__sfr__));
typedef struct tagC1RXFUL1BITS {
  unsigned RXFUL0:1;
  unsigned RXFUL1:1;
  unsigned RXFUL2:1;
  unsigned RXFUL3:1;
  unsigned RXFUL4:1;
  unsigned RXFUL5:1;
  unsigned RXFUL6:1;
  unsigned RXFUL7:1;
  unsigned RXFUL8:1;
  unsigned RXFUL9:1;
  unsigned RXFUL10:1;
  unsigned RXFUL11:1;
  unsigned RXFUL12:1;
  unsigned RXFUL13:1;
  unsigned RXFUL14:1;
  unsigned RXFUL15:1;
} C1RXFUL1BITS;
extern volatile C1RXFUL1BITS C1RXFUL1bits __attribute__((__sfr__));

#define C1BUFPNT2 C1BUFPNT2
extern volatile unsigned int  C1BUFPNT2 __attribute__((__sfr__));
__extension__ typedef struct tagC1BUFPNT2BITS {
  union {
    struct {
      unsigned F4BP:4;
      unsigned F5BP:4;
      unsigned F6BP:4;
      unsigned F7BP:4;
    };
    struct {
      unsigned F4BP0:1;
      unsigned F4BP1:1;
      unsigned F4BP2:1;
      unsigned F4BP3:1;
      unsigned F5BP0:1;
      unsigned F5BP1:1;
      unsigned F5BP2:1;
      unsigned F5BP3:1;
      unsigned F6BP0:1;
      unsigned F6BP1:1;
      unsigned F6BP2:1;
      unsigned F6BP3:1;
      unsigned F7BP0:1;
      unsigned F7BP1:1;
      unsigned F7BP2:1;
      unsigned F7BP3:1;
    };
  };
} C1BUFPNT2BITS;
extern volatile C1BUFPNT2BITS C1BUFPNT2bits __attribute__((__sfr__));

#define C1RXFUL2 C1RXFUL2
extern volatile unsigned int  C1RXFUL2 __attribute__((__sfr__));
typedef struct tagC1RXFUL2BITS {
  unsigned RXFUL16:1;
  unsigned RXFUL17:1;
  unsigned RXFUL18:1;
  unsigned RXFUL19:1;
  unsigned RXFUL20:1;
  unsigned RXFUL21:1;
  unsigned RXFUL22:1;
  unsigned RXFUL23:1;
  unsigned RXFUL24:1;
  unsigned RXFUL25:1;
  unsigned RXFUL26:1;
  unsigned RXFUL27:1;
  unsigned RXFUL28:1;
  unsigned RXFUL29:1;
  unsigned RXFUL30:1;
  unsigned RXFUL31:1;
} C1RXFUL2BITS;
extern volatile C1RXFUL2BITS C1RXFUL2bits __attribute__((__sfr__));

#define C1BUFPNT3 C1BUFPNT3
extern volatile unsigned int  C1BUFPNT3 __attribute__((__sfr__));
__extension__ typedef struct tagC1BUFPNT3BITS {
  union {
    struct {
      unsigned F8BP:4;
      unsigned F9BP:4;
      unsigned F10BP:4;
      unsigned F11BP:4;
    };
    struct {
      unsigned F8BP0:1;
      unsigned F8BP1:1;
      unsigned F8BP2:1;
      unsigned F8BP3:1;
      unsigned F9BP0:1;
      unsigned F9BP1:1;
      unsigned F9BP2:1;
      unsigned F9BP3:1;
      unsigned F10BP0:1;
      unsigned F10BP1:1;
      unsigned F10BP2:1;
      unsigned F10BP3:1;
      unsigned F11BP0:1;
      unsigned F11BP1:1;
      unsigned F11BP2:1;
      unsigned F11BP3:1;
    };
  };
} C1BUFPNT3BITS;
extern volatile C1BUFPNT3BITS C1BUFPNT3bits __attribute__((__sfr__));

#define C1BUFPNT4 C1BUFPNT4
extern volatile unsigned int  C1BUFPNT4 __attribute__((__sfr__));
__extension__ typedef struct tagC1BUFPNT4BITS {
  union {
    struct {
      unsigned F12BP:4;
      unsigned F13BP:4;
      unsigned F14BP:4;
      unsigned F15BP:4;
    };
    struct {
      unsigned F12BP0:1;
      unsigned F12BP1:1;
      unsigned F12BP2:1;
      unsigned F12BP3:1;
      unsigned F13BP0:1;
      unsigned F13BP1:1;
      unsigned F13BP2:1;
      unsigned F13BP3:1;
      unsigned F14BP0:1;
      unsigned F14BP1:1;
      unsigned F14BP2:1;
      unsigned F14BP3:1;
      unsigned F15BP0:1;
      unsigned F15BP1:1;
      unsigned F15BP2:1;
      unsigned F15BP3:1;
    };
  };
} C1BUFPNT4BITS;
extern volatile C1BUFPNT4BITS C1BUFPNT4bits __attribute__((__sfr__));

#define C1RXOVF1 C1RXOVF1
extern volatile unsigned int  C1RXOVF1 __attribute__((__sfr__));
typedef struct tagC1RXOVF1BITS {
  unsigned RXOVF0:1;
  unsigned RXOVF1:1;
  unsigned RXOVF2:1;
  unsigned RXOVF3:1;
  unsigned RXOVF4:1;
  unsigned RXOVF5:1;
  unsigned RXOVF6:1;
  unsigned RXOVF7:1;
  unsigned RXOVF8:1;
  unsigned RXOVF9:1;
  unsigned RXOVF10:1;
  unsigned RXOVF11:1;
  unsigned RXOVF12:1;
  unsigned RXOVF13:1;
  unsigned RXOVF14:1;
  unsigned RXOVF15:1;
} C1RXOVF1BITS;
extern volatile C1RXOVF1BITS C1RXOVF1bits __attribute__((__sfr__));

#define C1RXOVF2 C1RXOVF2
extern volatile unsigned int  C1RXOVF2 __attribute__((__sfr__));
typedef struct tagC1RXOVF2BITS {
  unsigned RXOVF16:1;
  unsigned RXOVF17:1;
  unsigned RXOVF18:1;
  unsigned RXOVF19:1;
  unsigned RXOVF20:1;
  unsigned RXOVF21:1;
  unsigned RXOVF22:1;
  unsigned RXOVF23:1;
  unsigned RXOVF24:1;
  unsigned RXOVF25:1;
  unsigned RXOVF26:1;
  unsigned RXOVF27:1;
  unsigned RXOVF28:1;
  unsigned RXOVF29:1;
  unsigned RXOVF30:1;
  unsigned RXOVF31:1;
} C1RXOVF2BITS;
extern volatile C1RXOVF2BITS C1RXOVF2bits __attribute__((__sfr__));

#define C1RXM0SID C1RXM0SID
extern volatile unsigned int  C1RXM0SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM0SIDBITS {
  union {
    struct {
      unsigned EID16:1;
      unsigned EID17:1;
      unsigned :1;
      unsigned MIDE:1;
      unsigned :1;
      unsigned SID0:1;
      unsigned SID1:1;
      unsigned SID2:1;
      unsigned SID3:1;
      unsigned SID4:1;
      unsigned SID5:1;
      unsigned SID6:1;
      unsigned SID7:1;
      unsigned SID8:1;
      unsigned SID9:1;
      unsigned SID10:1;
    };
    struct {
      unsigned EID:2;
      unsigned :3;
      unsigned SID:11;
    };
  };
} C1RXM0SIDBITS;
extern volatile C1RXM0SIDBITS C1RXM0SIDbits __attribute__((__sfr__));

#define C1TR01CON C1TR01CON
extern volatile unsigned int  C1TR01CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TR01CONBITS {
  union {
    struct {
      unsigned TX0PRI:2;
      unsigned RTREN0:1;
      unsigned TXREQ0:1;
      unsigned TXERR0:1;
      unsigned TXLARB0:1;
      unsigned TXABT0:1;
      unsigned TXEN0:1;
      unsigned TX1PRI:2;
      unsigned RTREN1:1;
      unsigned TXREQ1:1;
      unsigned TXERR1:1;
      unsigned TXLARB1:1;
      unsigned TXABT1:1;
      unsigned TXEN1:1;
    };
    struct {
      unsigned TX0PRI0:1;
      unsigned TX0PRI1:1;
      unsigned :6;
      unsigned TX1PRI0:1;
      unsigned TX1PRI1:1;
    };
  };
} C1TR01CONBITS;
extern volatile C1TR01CONBITS C1TR01CONbits __attribute__((__sfr__));

#define C1RXM0EID C1RXM0EID
extern volatile unsigned int  C1RXM0EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM0EIDBITS {
  union {
    struct {
      unsigned EID0:1;
      unsigned EID1:1;
      unsigned EID2:1;
      unsigned EID3:1;
      unsigned EID4:1;
      unsigned EID5:1;
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
    };
    struct {
      unsigned EID:16;
    };
  };
} C1RXM0EIDBITS;
extern volatile C1RXM0EIDBITS C1RXM0EIDbits __attribute__((__sfr__));

#define C1TR23CON C1TR23CON
extern volatile unsigned int  C1TR23CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TR23CONBITS {
  union {
    struct {
      unsigned TX2PRI:2;
      unsigned RTREN2:1;
      unsigned TXREQ2:1;
      unsigned TXERR2:1;
      unsigned TXLARB2:1;
      unsigned TXABT2:1;
      unsigned TXEN2:1;
      unsigned TX3PRI:2;
      unsigned RTREN3:1;
      unsigned TXREQ3:1;
      unsigned TXERR3:1;
      unsigned TXLARB3:1;
      unsigned TXABT3:1;
      unsigned TXEN3:1;
    };
    struct {
      unsigned TX2PRI0:1;
      unsigned TX2PRI1:1;
      unsigned :6;
      unsigned TX3PRI0:1;
      unsigned TX3PRI1:1;
    };
  };
} C1TR23CONBITS;
extern volatile C1TR23CONBITS C1TR23CONbits __attribute__((__sfr__));

#define C1RXM1SID C1RXM1SID
extern volatile unsigned int  C1RXM1SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM1SIDBITS {
  union {
    struct {
      unsigned EID16:1;
      unsigned EID17:1;
      unsigned :1;
      unsigned MIDE:1;
      unsigned :1;
      unsigned SID0:1;
      unsigned SID1:1;
      unsigned SID2:1;
      unsigned SID3:1;
      unsigned SID4:1;
      unsigned SID5:1;
      unsigned SID6:1;
      unsigned SID7:1;
      unsigned SID8:1;
      unsigned SID9:1;
      unsigned SID10:1;
    };
    struct {
      unsigned EID:2;
      unsigned :3;
      unsigned SID:11;
    };
  };
} C1RXM1SIDBITS;
extern volatile C1RXM1SIDBITS C1RXM1SIDbits __attribute__((__sfr__));

#define C1TR45CON C1TR45CON
extern volatile unsigned int  C1TR45CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TR45CONBITS {
  union {
    struct {
      unsigned TX4PRI:2;
      unsigned RTREN4:1;
      unsigned TXREQ4:1;
      unsigned TXERR4:1;
      unsigned TXLARB4:1;
      unsigned TXABT4:1;
      unsigned TXEN4:1;
      unsigned TX5PRI:2;
      unsigned RTREN5:1;
      unsigned TXREQ5:1;
      unsigned TXERR5:1;
      unsigned TXLARB5:1;
      unsigned TXABT5:1;
      unsigned TXEN5:1;
    };
    struct {
      unsigned TX4PRI0:1;
      unsigned TX4PRI1:1;
      unsigned :6;
      unsigned TX5PRI0:1;
      unsigned TX5PRI1:1;
    };
  };
} C1TR45CONBITS;
extern volatile C1TR45CONBITS C1TR45CONbits __attribute__((__sfr__));

#define C1RXM1EID C1RXM1EID
extern volatile unsigned int  C1RXM1EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM1EIDBITS {
  union {
    struct {
      unsigned EID0:1;
      unsigned EID1:1;
      unsigned EID2:1;
      unsigned EID3:1;
      unsigned EID4:1;
      unsigned EID5:1;
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
    };
    struct {
      unsigned EID:16;
    };
  };
} C1RXM1EIDBITS;
extern volatile C1RXM1EIDBITS C1RXM1EIDbits __attribute__((__sfr__));

#define C1TR67CON C1TR67CON
extern volatile unsigned int  C1TR67CON __attribute__((__sfr__));
__extension__ typedef struct tagC1TR67CONBITS {
  union {
    struct {
      unsigned TX6PRI:2;
      unsigned RTREN6:1;
      unsigned TXREQ6:1;
      unsigned TXERR6:1;
      unsigned TXLARB6:1;
      unsigned TXABT6:1;
      unsigned TXEN6:1;
      unsigned TX7PRI:2;
      unsigned RTREN7:1;
      unsigned TXREQ7:1;
      unsigned TXERR7:1;
      unsigned TXLARB7:1;
      unsigned TXABT7:1;
      unsigned TXEN7:1;
    };
    struct {
      unsigned TX6PRI0:1;
      unsigned TX6PRI1:1;
      unsigned :6;
      unsigned TX7PRI0:1;
      unsigned TX7PRI1:1;
    };
  };
} C1TR67CONBITS;
extern volatile C1TR67CONBITS C1TR67CONbits __attribute__((__sfr__));

#define C1RXM2SID C1RXM2SID
extern volatile unsigned int  C1RXM2SID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM2SIDBITS {
  union {
    struct {
      unsigned EID16:1;
      unsigned EID17:1;
      unsigned :1;
      unsigned MIDE:1;
      unsigned :1;
      unsigned SID0:1;
      unsigned SID1:1;
      unsigned SID2:1;
      unsigned SID3:1;
      unsigned SID4:1;
      unsigned SID5:1;
      unsigned SID6:1;
      unsigned SID7:1;
      unsigned SID8:1;
      unsigned SID9:1;
      unsigned SID10:1;
    };
    struct {
      unsigned EID:2;
      unsigned :3;
      unsigned SID:11;
    };
  };
} C1RXM2SIDBITS;
extern volatile C1RXM2SIDBITS C1RXM2SIDbits __attribute__((__sfr__));

#define C1RXM2EID C1RXM2EID
extern volatile unsigned int  C1RXM2EID __attribute__((__sfr__));
__extension__ typedef struct tagC1RXM2EIDBITS {
  union {
    struct {
      unsigned EID0:1;
      unsigned EID1:1;
      unsigned EID2:1;
      unsigned EID3:1;
      unsigned EID4:1;
      unsigned EID5:1;
      unsigned EID6:1;
      unsigned EID7:1;
      unsigned EID8:1;
      unsigned EID9:1;
      unsigned EID10:1;
      unsigned EID11:1;
      unsigned EID12:1;
      unsigned EID13:1;
      unsigned EID14:1;
      unsigned EID15:1;
    };
    struct {
      unsigned EID:16;
    };
  };
} C1RXM2EIDBITS;
extern volatile C1RXM2EIDBITS C1RXM2EIDbits __attribute__((__sfr__));

#define C1RXD C1RXD
extern volatile unsigned int  C1RXD __attribute__((__sfr__));
#define C1RXF0SID C1RXF0SID
extern volatile unsigned int  C1RXF0SID __attribute__((__sfr__));
typedef struct tagC1RXF0SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF0SIDBITS;
extern volatile C1RXF0SIDBITS C1RXF0SIDbits __attribute__((__sfr__));

#define C1RXF0EID C1RXF0EID
extern volatile unsigned int  C1RXF0EID __attribute__((__sfr__));
typedef struct tagC1RXF0EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF0EIDBITS;
extern volatile C1RXF0EIDBITS C1RXF0EIDbits __attribute__((__sfr__));

#define C1TXD C1TXD
extern volatile unsigned int  C1TXD __attribute__((__sfr__));
#define C1RXF1SID C1RXF1SID
extern volatile unsigned int  C1RXF1SID __attribute__((__sfr__));
typedef struct tagC1RXF1SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF1SIDBITS;
extern volatile C1RXF1SIDBITS C1RXF1SIDbits __attribute__((__sfr__));

#define C1RXF1EID C1RXF1EID
extern volatile unsigned int  C1RXF1EID __attribute__((__sfr__));
typedef struct tagC1RXF1EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF1EIDBITS;
extern volatile C1RXF1EIDBITS C1RXF1EIDbits __attribute__((__sfr__));

#define C1RXF2SID C1RXF2SID
extern volatile unsigned int  C1RXF2SID __attribute__((__sfr__));
typedef struct tagC1RXF2SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF2SIDBITS;
extern volatile C1RXF2SIDBITS C1RXF2SIDbits __attribute__((__sfr__));

#define C1RXF2EID C1RXF2EID
extern volatile unsigned int  C1RXF2EID __attribute__((__sfr__));
typedef struct tagC1RXF2EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF2EIDBITS;
extern volatile C1RXF2EIDBITS C1RXF2EIDbits __attribute__((__sfr__));

#define C1RXF3SID C1RXF3SID
extern volatile unsigned int  C1RXF3SID __attribute__((__sfr__));
typedef struct tagC1RXF3SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF3SIDBITS;
extern volatile C1RXF3SIDBITS C1RXF3SIDbits __attribute__((__sfr__));

#define C1RXF3EID C1RXF3EID
extern volatile unsigned int  C1RXF3EID __attribute__((__sfr__));
typedef struct tagC1RXF3EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF3EIDBITS;
extern volatile C1RXF3EIDBITS C1RXF3EIDbits __attribute__((__sfr__));

#define C1RXF4SID C1RXF4SID
extern volatile unsigned int  C1RXF4SID __attribute__((__sfr__));
typedef struct tagC1RXF4SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF4SIDBITS;
extern volatile C1RXF4SIDBITS C1RXF4SIDbits __attribute__((__sfr__));

#define C1RXF4EID C1RXF4EID
extern volatile unsigned int  C1RXF4EID __attribute__((__sfr__));
typedef struct tagC1RXF4EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF4EIDBITS;
extern volatile C1RXF4EIDBITS C1RXF4EIDbits __attribute__((__sfr__));

#define C1RXF5SID C1RXF5SID
extern volatile unsigned int  C1RXF5SID __attribute__((__sfr__));
typedef struct tagC1RXF5SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF5SIDBITS;
extern volatile C1RXF5SIDBITS C1RXF5SIDbits __attribute__((__sfr__));

#define C1RXF5EID C1RXF5EID
extern volatile unsigned int  C1RXF5EID __attribute__((__sfr__));
typedef struct tagC1RXF5EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF5EIDBITS;
extern volatile C1RXF5EIDBITS C1RXF5EIDbits __attribute__((__sfr__));

#define C1RXF6SID C1RXF6SID
extern volatile unsigned int  C1RXF6SID __attribute__((__sfr__));
typedef struct tagC1RXF6SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF6SIDBITS;
extern volatile C1RXF6SIDBITS C1RXF6SIDbits __attribute__((__sfr__));

#define C1RXF6EID C1RXF6EID
extern volatile unsigned int  C1RXF6EID __attribute__((__sfr__));
typedef struct tagC1RXF6EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF6EIDBITS;
extern volatile C1RXF6EIDBITS C1RXF6EIDbits __attribute__((__sfr__));

#define C1RXF7SID C1RXF7SID
extern volatile unsigned int  C1RXF7SID __attribute__((__sfr__));
typedef struct tagC1RXF7SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF7SIDBITS;
extern volatile C1RXF7SIDBITS C1RXF7SIDbits __attribute__((__sfr__));

#define C1RXF7EID C1RXF7EID
extern volatile unsigned int  C1RXF7EID __attribute__((__sfr__));
typedef struct tagC1RXF7EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF7EIDBITS;
extern volatile C1RXF7EIDBITS C1RXF7EIDbits __attribute__((__sfr__));

#define C1RXF8SID C1RXF8SID
extern volatile unsigned int  C1RXF8SID __attribute__((__sfr__));
typedef struct tagC1RXF8SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF8SIDBITS;
extern volatile C1RXF8SIDBITS C1RXF8SIDbits __attribute__((__sfr__));

#define C1RXF8EID C1RXF8EID
extern volatile unsigned int  C1RXF8EID __attribute__((__sfr__));
typedef struct tagC1RXF8EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF8EIDBITS;
extern volatile C1RXF8EIDBITS C1RXF8EIDbits __attribute__((__sfr__));

#define C1RXF9SID C1RXF9SID
extern volatile unsigned int  C1RXF9SID __attribute__((__sfr__));
typedef struct tagC1RXF9SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF9SIDBITS;
extern volatile C1RXF9SIDBITS C1RXF9SIDbits __attribute__((__sfr__));

#define C1RXF9EID C1RXF9EID
extern volatile unsigned int  C1RXF9EID __attribute__((__sfr__));
typedef struct tagC1RXF9EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF9EIDBITS;
extern volatile C1RXF9EIDBITS C1RXF9EIDbits __attribute__((__sfr__));

#define C1RXF10SID C1RXF10SID
extern volatile unsigned int  C1RXF10SID __attribute__((__sfr__));
typedef struct tagC1RXF10SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF10SIDBITS;
extern volatile C1RXF10SIDBITS C1RXF10SIDbits __attribute__((__sfr__));

#define C1RXF10EID C1RXF10EID
extern volatile unsigned int  C1RXF10EID __attribute__((__sfr__));
typedef struct tagC1RXF10EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF10EIDBITS;
extern volatile C1RXF10EIDBITS C1RXF10EIDbits __attribute__((__sfr__));

#define C1RXF11SID C1RXF11SID
extern volatile unsigned int  C1RXF11SID __attribute__((__sfr__));
typedef struct tagC1RXF11SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF11SIDBITS;
extern volatile C1RXF11SIDBITS C1RXF11SIDbits __attribute__((__sfr__));

#define C1RXF11EID C1RXF11EID
extern volatile unsigned int  C1RXF11EID __attribute__((__sfr__));
typedef struct tagC1RXF11EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF11EIDBITS;
extern volatile C1RXF11EIDBITS C1RXF11EIDbits __attribute__((__sfr__));

#define C1RXF12SID C1RXF12SID
extern volatile unsigned int  C1RXF12SID __attribute__((__sfr__));
typedef struct tagC1RXF12SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF12SIDBITS;
extern volatile C1RXF12SIDBITS C1RXF12SIDbits __attribute__((__sfr__));

#define C1RXF12EID C1RXF12EID
extern volatile unsigned int  C1RXF12EID __attribute__((__sfr__));
typedef struct tagC1RXF12EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF12EIDBITS;
extern volatile C1RXF12EIDBITS C1RXF12EIDbits __attribute__((__sfr__));

#define C1RXF13SID C1RXF13SID
extern volatile unsigned int  C1RXF13SID __attribute__((__sfr__));
typedef struct tagC1RXF13SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF13SIDBITS;
extern volatile C1RXF13SIDBITS C1RXF13SIDbits __attribute__((__sfr__));

#define C1RXF13EID C1RXF13EID
extern volatile unsigned int  C1RXF13EID __attribute__((__sfr__));
typedef struct tagC1RXF13EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF13EIDBITS;
extern volatile C1RXF13EIDBITS C1RXF13EIDbits __attribute__((__sfr__));

#define C1RXF14SID C1RXF14SID
extern volatile unsigned int  C1RXF14SID __attribute__((__sfr__));
typedef struct tagC1RXF14SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF14SIDBITS;
extern volatile C1RXF14SIDBITS C1RXF14SIDbits __attribute__((__sfr__));

#define C1RXF14EID C1RXF14EID
extern volatile unsigned int  C1RXF14EID __attribute__((__sfr__));
typedef struct tagC1RXF14EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF14EIDBITS;
extern volatile C1RXF14EIDBITS C1RXF14EIDbits __attribute__((__sfr__));

#define C1RXF15SID C1RXF15SID
extern volatile unsigned int  C1RXF15SID __attribute__((__sfr__));
typedef struct tagC1RXF15SIDBITS {
  unsigned EID16:1;
  unsigned EID17:1;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID0:1;
  unsigned SID1:1;
  unsigned SID2:1;
  unsigned SID3:1;
  unsigned SID4:1;
  unsigned SID5:1;
  unsigned SID6:1;
  unsigned SID7:1;
  unsigned SID8:1;
  unsigned SID9:1;
  unsigned SID10:1;
} C1RXF15SIDBITS;
extern volatile C1RXF15SIDBITS C1RXF15SIDbits __attribute__((__sfr__));

#define C1RXF15EID C1RXF15EID
extern volatile unsigned int  C1RXF15EID __attribute__((__sfr__));
typedef struct tagC1RXF15EIDBITS {
  unsigned EID0:1;
  unsigned EID1:1;
  unsigned EID2:1;
  unsigned EID3:1;
  unsigned EID4:1;
  unsigned EID5:1;
  unsigned EID6:1;
  unsigned EID7:1;
  unsigned EID8:1;
  unsigned EID9:1;
  unsigned EID10:1;
  unsigned EID11:1;
  unsigned EID12:1;
  unsigned EID13:1;
  unsigned EID14:1;
  unsigned EID15:1;
} C1RXF15EIDBITS;
extern volatile C1RXF15EIDBITS C1RXF15EIDbits __attribute__((__sfr__));

#define ODCD ODCD
extern volatile unsigned int  ODCD __attribute__((__sfr__));
typedef struct tagODCDBITS {
  unsigned ODCD0:1;
  unsigned ODCD1:1;
  unsigned ODCD2:1;
  unsigned ODCD3:1;
  unsigned ODCD4:1;
  unsigned ODCD5:1;
  unsigned ODCD6:1;
  unsigned ODCD7:1;
  unsigned ODCD8:1;
  unsigned ODCD9:1;
  unsigned ODCD10:1;
  unsigned ODCD11:1;
} ODCDBITS;
extern volatile ODCDBITS ODCDbits __attribute__((__sfr__));

#define ODCF ODCF
extern volatile unsigned int  ODCF __attribute__((__sfr__));
typedef struct tagODCFBITS {
  unsigned ODCF0:1;
  unsigned ODCF1:1;
  unsigned ODCF2:1;
  unsigned ODCF3:1;
  unsigned ODCF4:1;
  unsigned ODCF5:1;
  unsigned ODCF6:1;
} ODCFBITS;
extern volatile ODCFBITS ODCFbits __attribute__((__sfr__));

#define ODCG ODCG
extern volatile unsigned int  ODCG __attribute__((__sfr__));
typedef struct tagODCGBITS {
  unsigned ODCG0:1;
  unsigned ODCG1:1;
  unsigned ODCG2:1;
  unsigned ODCG3:1;
  unsigned :2;
  unsigned ODCG6:1;
  unsigned ODCG7:1;
  unsigned ODCG8:1;
  unsigned ODCG9:1;
  unsigned :2;
  unsigned ODCG12:1;
  unsigned ODCG13:1;
  unsigned ODCG14:1;
  unsigned ODCG15:1;
} ODCGBITS;
extern volatile ODCGBITS ODCGbits __attribute__((__sfr__));

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
  unsigned :5;
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
      unsigned :1;
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

#define BSRAM BSRAM
extern volatile unsigned int  BSRAM __attribute__((__sfr__));
typedef struct tagBSRAMBITS {
  unsigned RL_BSR:1;
  unsigned IR_BSR:1;
  unsigned IW_BSR:1;
} BSRAMBITS;
extern volatile BSRAMBITS BSRAMbits __attribute__((__sfr__));

#define SSRAM SSRAM
extern volatile unsigned int  SSRAM __attribute__((__sfr__));
typedef struct tagSSRAMBITS {
  unsigned RL_SSR:1;
  unsigned IR_SSR:1;
  unsigned IW_SSR:1;
} SSRAMBITS;
extern volatile SSRAMBITS SSRAMbits __attribute__((__sfr__));

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
  unsigned C1MD:1;
  unsigned :1;
  unsigned SPI1MD:1;
  unsigned SPI2MD:1;
  unsigned U1MD:1;
  unsigned U2MD:1;
  unsigned I2C1MD:1;
  unsigned :3;
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
  unsigned OC5MD:1;
  unsigned OC6MD:1;
  unsigned OC7MD:1;
  unsigned OC8MD:1;
  unsigned IC1MD:1;
  unsigned IC2MD:1;
  unsigned IC3MD:1;
  unsigned IC4MD:1;
  unsigned IC5MD:1;
  unsigned IC6MD:1;
  unsigned IC7MD:1;
  unsigned IC8MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile unsigned int  PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  unsigned :1;
  unsigned I2C2MD:1;
  unsigned :10;
  unsigned T6MD:1;
  unsigned T7MD:1;
  unsigned T8MD:1;
  unsigned T9MD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));



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
#define _CN6IE CNEN1bits.CN6IE
#define _CN7IE CNEN1bits.CN7IE
#define _CN8IE CNEN1bits.CN8IE
#define _CN9IE CNEN1bits.CN9IE
#define _CN10IE CNEN1bits.CN10IE
#define _CN11IE CNEN1bits.CN11IE
#define _CN12IE CNEN1bits.CN12IE
#define _CN13IE CNEN1bits.CN13IE
#define _CN14IE CNEN1bits.CN14IE
#define _CN15IE CNEN1bits.CN15IE

/* CNEN2 */
#define _CN16IE CNEN2bits.CN16IE
#define _CN17IE CNEN2bits.CN17IE
#define _CN18IE CNEN2bits.CN18IE

/* CNPU1 */
#define _CN0PUE CNPU1bits.CN0PUE
#define _CN1PUE CNPU1bits.CN1PUE
#define _CN2PUE CNPU1bits.CN2PUE
#define _CN3PUE CNPU1bits.CN3PUE
#define _CN4PUE CNPU1bits.CN4PUE
#define _CN5PUE CNPU1bits.CN5PUE
#define _CN6PUE CNPU1bits.CN6PUE
#define _CN7PUE CNPU1bits.CN7PUE
#define _CN8PUE CNPU1bits.CN8PUE
#define _CN9PUE CNPU1bits.CN9PUE
#define _CN10PUE CNPU1bits.CN10PUE
#define _CN11PUE CNPU1bits.CN11PUE
#define _CN12PUE CNPU1bits.CN12PUE
#define _CN13PUE CNPU1bits.CN13PUE
#define _CN14PUE CNPU1bits.CN14PUE
#define _CN15PUE CNPU1bits.CN15PUE

/* CNPU2 */
#define _CN16PUE CNPU2bits.CN16PUE
#define _CN17PUE CNPU2bits.CN17PUE
#define _CN18PUE CNPU2bits.CN18PUE

/* INTCON1 */
#define _OSCFAIL INTCON1bits.OSCFAIL
#define _STKERR INTCON1bits.STKERR
#define _ADDRERR INTCON1bits.ADDRERR
#define _MATHERR INTCON1bits.MATHERR
#define _DMACERR INTCON1bits.DMACERR
#define _DIV0ERR INTCON1bits.DIV0ERR
#define _NSTDIS INTCON1bits.NSTDIS

/* INTCON2 */
#define _INT0EP INTCON2bits.INT0EP
#define _INT1EP INTCON2bits.INT1EP
#define _INT2EP INTCON2bits.INT2EP
#define _INT3EP INTCON2bits.INT3EP
#define _INT4EP INTCON2bits.INT4EP
#define _DISI INTCON2bits.DISI
#define _ALTIVT INTCON2bits.ALTIVT

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
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _IC7IF IFS1bits.IC7IF
#define _IC8IF IFS1bits.IC8IF
#define _DMA2IF IFS1bits.DMA2IF
#define _OC3IF IFS1bits.OC3IF
#define _OC4IF IFS1bits.OC4IF
#define _T4IF IFS1bits.T4IF
#define _T5IF IFS1bits.T5IF
#define _INT2IF IFS1bits.INT2IF
#define _U2RXIF IFS1bits.U2RXIF
#define _U2TXIF IFS1bits.U2TXIF
#define _SI2CIF IFS1bits.SI2CIF

/* IFS2 */
#define _SPI2EIF IFS2bits.SPI2EIF
#define _SPI2IF IFS2bits.SPI2IF
#define _C1RXIF IFS2bits.C1RXIF
#define _C1IF IFS2bits.C1IF
#define _DMA3IF IFS2bits.DMA3IF
#define _IC3IF IFS2bits.IC3IF
#define _IC4IF IFS2bits.IC4IF
#define _IC5IF IFS2bits.IC5IF
#define _IC6IF IFS2bits.IC6IF
#define _OC5IF IFS2bits.OC5IF
#define _OC6IF IFS2bits.OC6IF
#define _OC7IF IFS2bits.OC7IF
#define _OC8IF IFS2bits.OC8IF
#define _DMA4IF IFS2bits.DMA4IF
#define _T6IF IFS2bits.T6IF

/* IFS3 */
#define _T7IF IFS3bits.T7IF
#define _SI2C2IF IFS3bits.SI2C2IF
#define _MI2C2IF IFS3bits.MI2C2IF
#define _T8IF IFS3bits.T8IF
#define _T9IF IFS3bits.T9IF
#define _INT3IF IFS3bits.INT3IF
#define _INT4IF IFS3bits.INT4IF
#define _DMA5IF IFS3bits.DMA5IF

/* IFS4 */
#define _U1EIF IFS4bits.U1EIF
#define _U2EIF IFS4bits.U2EIF
#define _DMA6IF IFS4bits.DMA6IF
#define _DMA7IF IFS4bits.DMA7IF
#define _C1TXIF IFS4bits.C1TXIF

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
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _IC7IE IEC1bits.IC7IE
#define _IC8IE IEC1bits.IC8IE
#define _DMA2IE IEC1bits.DMA2IE
#define _OC3IE IEC1bits.OC3IE
#define _OC4IE IEC1bits.OC4IE
#define _T4IE IEC1bits.T4IE
#define _T5IE IEC1bits.T5IE
#define _INT2IE IEC1bits.INT2IE
#define _U2RXIE IEC1bits.U2RXIE
#define _U2TXIE IEC1bits.U2TXIE
#define _SI2CIE IEC1bits.SI2CIE

/* IEC2 */
#define _SPI2EIE IEC2bits.SPI2EIE
#define _SPI2IE IEC2bits.SPI2IE
#define _C1RXIE IEC2bits.C1RXIE
#define _C1IE IEC2bits.C1IE
#define _DMA3IE IEC2bits.DMA3IE
#define _IC3IE IEC2bits.IC3IE
#define _IC4IE IEC2bits.IC4IE
#define _IC5IE IEC2bits.IC5IE
#define _IC6IE IEC2bits.IC6IE
#define _OC5IE IEC2bits.OC5IE
#define _OC6IE IEC2bits.OC6IE
#define _OC7IE IEC2bits.OC7IE
#define _OC8IE IEC2bits.OC8IE
#define _DMA4IE IEC2bits.DMA4IE
#define _T6IE IEC2bits.T6IE

/* IEC3 */
#define _T7IE IEC3bits.T7IE
#define _SI2C2IE IEC3bits.SI2C2IE
#define _MI2C2IE IEC3bits.MI2C2IE
#define _T8IE IEC3bits.T8IE
#define _T9IE IEC3bits.T9IE
#define _INT3IE IEC3bits.INT3IE
#define _INT4IE IEC3bits.INT4IE
#define _DMA5IE IEC3bits.DMA5IE

/* IEC4 */
#define _U1EIE IEC4bits.U1EIE
#define _U2EIE IEC4bits.U2EIE
#define _DMA6IE IEC4bits.DMA6IE
#define _DMA7IE IEC4bits.DMA7IE
#define _C1TXIE IEC4bits.C1TXIE

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

/* IPC4 */
#define _SI2C1IP IPC4bits.SI2C1IP
#define _MI2C1IP IPC4bits.MI2C1IP
#define _CNIP IPC4bits.CNIP
#define _SI2C1IP0 IPC4bits.SI2C1IP0
#define _SI2C1IP1 IPC4bits.SI2C1IP1
#define _SI2C1IP2 IPC4bits.SI2C1IP2
#define _MI2C1IP0 IPC4bits.MI2C1IP0
#define _MI2C1IP1 IPC4bits.MI2C1IP1
#define _MI2C1IP2 IPC4bits.MI2C1IP2
#define _CNIP0 IPC4bits.CNIP0
#define _CNIP1 IPC4bits.CNIP1
#define _CNIP2 IPC4bits.CNIP2

/* IPC5 */
#define _INT1IP IPC5bits.INT1IP
#define _IC7IP IPC5bits.IC7IP
#define _IC8IP IPC5bits.IC8IP
#define _INT1IP0 IPC5bits.INT1IP0
#define _INT1IP1 IPC5bits.INT1IP1
#define _INT1IP2 IPC5bits.INT1IP2
#define _IC7IP0 IPC5bits.IC7IP0
#define _IC7IP1 IPC5bits.IC7IP1
#define _IC7IP2 IPC5bits.IC7IP2
#define _IC8IP0 IPC5bits.IC8IP0
#define _IC8IP1 IPC5bits.IC8IP1
#define _IC8IP2 IPC5bits.IC8IP2

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
#define _C1RXIP IPC8bits.C1RXIP
#define _C1IP IPC8bits.C1IP
#define _SPI2EIP0 IPC8bits.SPI2EIP0
#define _SPI2EIP1 IPC8bits.SPI2EIP1
#define _SPI2EIP2 IPC8bits.SPI2EIP2
#define _SPI2IP0 IPC8bits.SPI2IP0
#define _SPI2IP1 IPC8bits.SPI2IP1
#define _SPI2IP2 IPC8bits.SPI2IP2
#define _C1RXIP0 IPC8bits.C1RXIP0
#define _C1RXIP1 IPC8bits.C1RXIP1
#define _C1RXIP2 IPC8bits.C1RXIP2
#define _C1IP0 IPC8bits.C1IP0
#define _C1IP1 IPC8bits.C1IP1
#define _C1IP2 IPC8bits.C1IP2

/* IPC9 */
#define _DMA3IP IPC9bits.DMA3IP
#define _IC3IP IPC9bits.IC3IP
#define _IC4IP IPC9bits.IC4IP
#define _IC5IP IPC9bits.IC5IP
#define _DMA3IP0 IPC9bits.DMA3IP0
#define _DMA3IP1 IPC9bits.DMA3IP1
#define _DMA3IP2 IPC9bits.DMA3IP2
#define _IC3IP0 IPC9bits.IC3IP0
#define _IC3IP1 IPC9bits.IC3IP1
#define _IC3IP2 IPC9bits.IC3IP2
#define _IC4IP0 IPC9bits.IC4IP0
#define _IC4IP1 IPC9bits.IC4IP1
#define _IC4IP2 IPC9bits.IC4IP2
#define _IC5IP0 IPC9bits.IC5IP0
#define _IC5IP1 IPC9bits.IC5IP1
#define _IC5IP2 IPC9bits.IC5IP2

/* IPC10 */
#define _IC6IP IPC10bits.IC6IP
#define _OC5IP IPC10bits.OC5IP
#define _OC6IP IPC10bits.OC6IP
#define _OC7IP IPC10bits.OC7IP
#define _IC6IP0 IPC10bits.IC6IP0
#define _IC6IP1 IPC10bits.IC6IP1
#define _IC6IP2 IPC10bits.IC6IP2
#define _OC5IP0 IPC10bits.OC5IP0
#define _OC5IP1 IPC10bits.OC5IP1
#define _OC5IP2 IPC10bits.OC5IP2
#define _OC6IP0 IPC10bits.OC6IP0
#define _OC6IP1 IPC10bits.OC6IP1
#define _OC6IP2 IPC10bits.OC6IP2
#define _OC7IP0 IPC10bits.OC7IP0
#define _OC7IP1 IPC10bits.OC7IP1
#define _OC7IP2 IPC10bits.OC7IP2

/* IPC11 */
#define _OC8IP IPC11bits.OC8IP
#define _DMA4IP IPC11bits.DMA4IP
#define _T6IP IPC11bits.T6IP
#define _OC8IP0 IPC11bits.OC8IP0
#define _OC8IP1 IPC11bits.OC8IP1
#define _OC8IP2 IPC11bits.OC8IP2
#define _DMA4IP0 IPC11bits.DMA4IP0
#define _DMA4IP1 IPC11bits.DMA4IP1
#define _DMA4IP2 IPC11bits.DMA4IP2
#define _T6IP0 IPC11bits.T6IP0
#define _T6IP1 IPC11bits.T6IP1
#define _T6IP2 IPC11bits.T6IP2

/* IPC12 */
#define _T7IP IPC12bits.T7IP
#define _SI2C2IP IPC12bits.SI2C2IP
#define _MI2C2IP IPC12bits.MI2C2IP
#define _T8IP IPC12bits.T8IP
#define _T7IP0 IPC12bits.T7IP0
#define _T7IP1 IPC12bits.T7IP1
#define _T7IP2 IPC12bits.T7IP2
#define _SI2C2IP0 IPC12bits.SI2C2IP0
#define _SI2C2IP1 IPC12bits.SI2C2IP1
#define _SI2C2IP2 IPC12bits.SI2C2IP2
#define _MI2C2IP0 IPC12bits.MI2C2IP0
#define _MI2C2IP1 IPC12bits.MI2C2IP1
#define _MI2C2IP2 IPC12bits.MI2C2IP2
#define _T8IP0 IPC12bits.T8IP0
#define _T8IP1 IPC12bits.T8IP1
#define _T8IP2 IPC12bits.T8IP2

/* IPC13 */
#define _T9IP IPC13bits.T9IP
#define _INT3IP IPC13bits.INT3IP
#define _INT4IP IPC13bits.INT4IP
#define _T9IP0 IPC13bits.T9IP0
#define _T9IP1 IPC13bits.T9IP1
#define _T9IP2 IPC13bits.T9IP2
#define _INT3IP0 IPC13bits.INT3IP0
#define _INT3IP1 IPC13bits.INT3IP1
#define _INT3IP2 IPC13bits.INT3IP2
#define _INT4IP0 IPC13bits.INT4IP0
#define _INT4IP1 IPC13bits.INT4IP1
#define _INT4IP2 IPC13bits.INT4IP2

/* IPC15 */
#define _DMA5IP IPC15bits.DMA5IP
#define _DMA5IP0 IPC15bits.DMA5IP0
#define _DMA5IP1 IPC15bits.DMA5IP1
#define _DMA5IP2 IPC15bits.DMA5IP2

/* IPC16 */
#define _U1EIP IPC16bits.U1EIP
#define _U2EIP IPC16bits.U2EIP
#define _U1EIP0 IPC16bits.U1EIP0
#define _U1EIP1 IPC16bits.U1EIP1
#define _U1EIP2 IPC16bits.U1EIP2
#define _U2EIP0 IPC16bits.U2EIP0
#define _U2EIP1 IPC16bits.U2EIP1
#define _U2EIP2 IPC16bits.U2EIP2

/* IPC17 */
#define _DMA6IP IPC17bits.DMA6IP
#define _DMA7IP IPC17bits.DMA7IP
#define _C1TXIP IPC17bits.C1TXIP
#define _DMA6IP0 IPC17bits.DMA6IP0
#define _DMA6IP1 IPC17bits.DMA6IP1
#define _DMA6IP2 IPC17bits.DMA6IP2
#define _DMA7IP0 IPC17bits.DMA7IP0
#define _DMA7IP1 IPC17bits.DMA7IP1
#define _DMA7IP2 IPC17bits.DMA7IP2
#define _C1TXIP0 IPC17bits.C1TXIP0
#define _C1TXIP1 IPC17bits.C1TXIP1
#define _C1TXIP2 IPC17bits.C1TXIP2

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

/* T6CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T7CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T8CON */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
/* Bitname _TSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS1 cannot be defined because it is used by more than one SFR */

/* T9CON */
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

/* IC4CON */
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

/* IC5CON */
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

/* IC6CON */
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

/* IC7CON */
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

/* IC8CON */
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

/* OC3CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* OC4CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* OC5CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* OC6CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* OC7CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

/* OC8CON */
/* Bitname _OCM cannot be defined because it is used by more than one SFR */
/* Bitname _OCTSEL cannot be defined because it is used by more than one SFR */
/* Bitname _OCFLT cannot be defined because it is used by more than one SFR */
/* Bitname _OCSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _OCM0 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM1 cannot be defined because it is used by more than one SFR */
/* Bitname _OCM2 cannot be defined because it is used by more than one SFR */

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

/* U1TXREG */
#define _UTXREG0 U1TXREGbits.UTXREG0
#define _UTXREG1 U1TXREGbits.UTXREG1
#define _UTXREG2 U1TXREGbits.UTXREG2
#define _UTXREG3 U1TXREGbits.UTXREG3
#define _UTXREG4 U1TXREGbits.UTXREG4
#define _UTXREG5 U1TXREGbits.UTXREG5
#define _UTXREG6 U1TXREGbits.UTXREG6
#define _UTXREG7 U1TXREGbits.UTXREG7
#define _UTXREG8 U1TXREGbits.UTXREG8

/* U1RXREG */
#define _URXREG0 U1RXREGbits.URXREG0
#define _URXREG1 U1RXREGbits.URXREG1
#define _URXREG2 U1RXREGbits.URXREG2
#define _URXREG3 U1RXREGbits.URXREG3
#define _URXREG4 U1RXREGbits.URXREG4
#define _URXREG5 U1RXREGbits.URXREG5
#define _URXREG6 U1RXREGbits.URXREG6
#define _URXREG7 U1RXREGbits.URXREG7
#define _URXREG8 U1RXREGbits.URXREG8

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

/* U2TXREG */
/* Bitname _UTXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _UTXREG8 cannot be defined because it is used by more than one SFR */

/* U2RXREG */
/* Bitname _URXREG0 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG1 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG2 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG3 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG4 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG5 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG6 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG7 cannot be defined because it is used by more than one SFR */
/* Bitname _URXREG8 cannot be defined because it is used by more than one SFR */

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

/* SPI2STAT */
/* Bitname _SPIRBF cannot be defined because it is used by more than one SFR */
/* Bitname _SPITBF cannot be defined because it is used by more than one SFR */
/* Bitname _SPIROV cannot be defined because it is used by more than one SFR */
/* Bitname _SPISIDL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIEN cannot be defined because it is used by more than one SFR */

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
/* Bitname _FRMDLY cannot be defined because it is used by more than one SFR */
/* Bitname _FRMPOL cannot be defined because it is used by more than one SFR */
/* Bitname _SPIFSD cannot be defined because it is used by more than one SFR */
/* Bitname _FRMEN cannot be defined because it is used by more than one SFR */

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

/* TRISC */
#define _TRISC1 TRISCbits.TRISC1
#define _TRISC2 TRISCbits.TRISC2
#define _TRISC12 TRISCbits.TRISC12
#define _TRISC13 TRISCbits.TRISC13
#define _TRISC14 TRISCbits.TRISC14
#define _TRISC15 TRISCbits.TRISC15

/* PORTC */
#define _RC1 PORTCbits.RC1
#define _RC2 PORTCbits.RC2
#define _RC12 PORTCbits.RC12
#define _RC13 PORTCbits.RC13
#define _RC14 PORTCbits.RC14
#define _RC15 PORTCbits.RC15

/* LATC */
#define _LATC1 LATCbits.LATC1
#define _LATC2 LATCbits.LATC2
#define _LATC12 LATCbits.LATC12
#define _LATC13 LATCbits.LATC13
#define _LATC14 LATCbits.LATC14
#define _LATC15 LATCbits.LATC15

/* TRISD */
#define _TRISD0 TRISDbits.TRISD0
#define _TRISD1 TRISDbits.TRISD1
#define _TRISD2 TRISDbits.TRISD2
#define _TRISD3 TRISDbits.TRISD3
#define _TRISD4 TRISDbits.TRISD4
#define _TRISD5 TRISDbits.TRISD5
#define _TRISD6 TRISDbits.TRISD6
#define _TRISD7 TRISDbits.TRISD7
#define _TRISD8 TRISDbits.TRISD8
#define _TRISD9 TRISDbits.TRISD9
#define _TRISD10 TRISDbits.TRISD10
#define _TRISD11 TRISDbits.TRISD11

/* PORTD */
#define _RD0 PORTDbits.RD0
#define _RD1 PORTDbits.RD1
#define _RD2 PORTDbits.RD2
#define _RD3 PORTDbits.RD3
#define _RD4 PORTDbits.RD4
#define _RD5 PORTDbits.RD5
#define _RD6 PORTDbits.RD6
#define _RD7 PORTDbits.RD7
#define _RD8 PORTDbits.RD8
#define _RD9 PORTDbits.RD9
#define _RD10 PORTDbits.RD10
#define _RD11 PORTDbits.RD11

/* LATD */
#define _LATD0 LATDbits.LATD0
#define _LATD1 LATDbits.LATD1
#define _LATD2 LATDbits.LATD2
#define _LATD3 LATDbits.LATD3
#define _LATD4 LATDbits.LATD4
#define _LATD5 LATDbits.LATD5
#define _LATD6 LATDbits.LATD6
#define _LATD7 LATDbits.LATD7
#define _LATD8 LATDbits.LATD8
#define _LATD9 LATDbits.LATD9
#define _LATD10 LATDbits.LATD10
#define _LATD11 LATDbits.LATD11

/* TRISF */
#define _TRISF0 TRISFbits.TRISF0
#define _TRISF1 TRISFbits.TRISF1
#define _TRISF2 TRISFbits.TRISF2
#define _TRISF3 TRISFbits.TRISF3
#define _TRISF4 TRISFbits.TRISF4
#define _TRISF5 TRISFbits.TRISF5
#define _TRISF6 TRISFbits.TRISF6

/* PORTF */
#define _RF0 PORTFbits.RF0
#define _RF1 PORTFbits.RF1
#define _RF2 PORTFbits.RF2
#define _RF3 PORTFbits.RF3
#define _RF4 PORTFbits.RF4
#define _RF5 PORTFbits.RF5
#define _RF6 PORTFbits.RF6

/* LATF */
#define _LATF0 LATFbits.LATF0
#define _LATF1 LATFbits.LATF1
#define _LATF2 LATFbits.LATF2
#define _LATF3 LATFbits.LATF3
#define _LATF4 LATFbits.LATF4
#define _LATF5 LATFbits.LATF5
#define _LATF6 LATFbits.LATF6

/* TRISG */
#define _TRISG0 TRISGbits.TRISG0
#define _TRISG1 TRISGbits.TRISG1
#define _TRISG2 TRISGbits.TRISG2
#define _TRISG3 TRISGbits.TRISG3
#define _TRISG6 TRISGbits.TRISG6
#define _TRISG7 TRISGbits.TRISG7
#define _TRISG8 TRISGbits.TRISG8
#define _TRISG9 TRISGbits.TRISG9
#define _TRISG12 TRISGbits.TRISG12
#define _TRISG13 TRISGbits.TRISG13
#define _TRISG14 TRISGbits.TRISG14
#define _TRISG15 TRISGbits.TRISG15

/* PORTG */
#define _RG0 PORTGbits.RG0
#define _RG1 PORTGbits.RG1
#define _RG2 PORTGbits.RG2
#define _RG3 PORTGbits.RG3
#define _RG6 PORTGbits.RG6
#define _RG7 PORTGbits.RG7
#define _RG8 PORTGbits.RG8
#define _RG9 PORTGbits.RG9
#define _RG12 PORTGbits.RG12
#define _RG13 PORTGbits.RG13
#define _RG14 PORTGbits.RG14
#define _RG15 PORTGbits.RG15

/* LATG */
#define _LATG0 LATGbits.LATG0
#define _LATG1 LATGbits.LATG1
#define _LATG2 LATGbits.LATG2
#define _LATG3 LATGbits.LATG3
#define _LATG6 LATGbits.LATG6
#define _LATG7 LATGbits.LATG7
#define _LATG8 LATGbits.LATG8
#define _LATG9 LATGbits.LATG9
#define _LATG12 LATGbits.LATG12
#define _LATG13 LATGbits.LATG13
#define _LATG14 LATGbits.LATG14
#define _LATG15 LATGbits.LATG15

/* AD1CON1 */
#define _DONE AD1CON1bits.DONE
#define _SAMP AD1CON1bits.SAMP
#define _ASAM AD1CON1bits.ASAM
#define _SIMSAM AD1CON1bits.SIMSAM
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

/* AD1PCFGH */
#define _PCFG16 AD1PCFGHbits.PCFG16
#define _PCFG17 AD1PCFGHbits.PCFG17

/* AD1PCFGL */
#define _PCFG0 AD1PCFGLbits.PCFG0
#define _PCFG1 AD1PCFGLbits.PCFG1
#define _PCFG2 AD1PCFGLbits.PCFG2
#define _PCFG3 AD1PCFGLbits.PCFG3
#define _PCFG4 AD1PCFGLbits.PCFG4
#define _PCFG5 AD1PCFGLbits.PCFG5
#define _PCFG6 AD1PCFGLbits.PCFG6
#define _PCFG7 AD1PCFGLbits.PCFG7
#define _PCFG8 AD1PCFGLbits.PCFG8
#define _PCFG9 AD1PCFGLbits.PCFG9
#define _PCFG10 AD1PCFGLbits.PCFG10
#define _PCFG11 AD1PCFGLbits.PCFG11
#define _PCFG12 AD1PCFGLbits.PCFG12
#define _PCFG13 AD1PCFGLbits.PCFG13
#define _PCFG14 AD1PCFGLbits.PCFG14
#define _PCFG15 AD1PCFGLbits.PCFG15

/* AD1CSSH */
#define _CSS16 AD1CSSHbits.CSS16
#define _CSS17 AD1CSSHbits.CSS17

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
#define _DMABL0 AD1CON4bits.DMABL0
#define _DMABL1 AD1CON4bits.DMABL1
#define _DMABL2 AD1CON4bits.DMABL2

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

/* DMA4CON */
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

/* DMA4REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA5CON */
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

/* DMA5REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA6CON */
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

/* DMA6REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMA7CON */
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

/* DMA7REQ */
/* Bitname _IRQSEL cannot be defined because it is used by more than one SFR */
/* Bitname _FORCE cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL3 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL4 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL5 cannot be defined because it is used by more than one SFR */
/* Bitname _IRQSEL6 cannot be defined because it is used by more than one SFR */

/* DMACS0 */
#define _XWCOL0 DMACS0bits.XWCOL0
#define _XWCOL1 DMACS0bits.XWCOL1
#define _XWCOL2 DMACS0bits.XWCOL2
#define _XWCOL3 DMACS0bits.XWCOL3
#define _XWCOL4 DMACS0bits.XWCOL4
#define _XWCOL5 DMACS0bits.XWCOL5
#define _XWCOL6 DMACS0bits.XWCOL6
#define _XWCOL7 DMACS0bits.XWCOL7
#define _PWCOL0 DMACS0bits.PWCOL0
#define _PWCOL1 DMACS0bits.PWCOL1
#define _PWCOL2 DMACS0bits.PWCOL2
#define _PWCOL3 DMACS0bits.PWCOL3
#define _PWCOL4 DMACS0bits.PWCOL4
#define _PWCOL5 DMACS0bits.PWCOL5
#define _PWCOL6 DMACS0bits.PWCOL6
#define _PWCOL7 DMACS0bits.PWCOL7
#define _XWCOL DMACS0bits.XWCOL
#define _PWCOL DMACS0bits.PWCOL

/* DMACS1 */
#define _PPST0 DMACS1bits.PPST0
#define _PPST1 DMACS1bits.PPST1
#define _PPST2 DMACS1bits.PPST2
#define _PPST3 DMACS1bits.PPST3
#define _PPST4 DMACS1bits.PPST4
#define _PPST5 DMACS1bits.PPST5
#define _PPST6 DMACS1bits.PPST6
#define _PPST7 DMACS1bits.PPST7
#define _LSTCH DMACS1bits.LSTCH
#define _PPST DMACS1bits.PPST
#define _LSTCH0 DMACS1bits.LSTCH0
#define _LSTCH1 DMACS1bits.LSTCH1
#define _LSTCH2 DMACS1bits.LSTCH2
#define _LSTCH3 DMACS1bits.LSTCH3

/* C1CTRL1 */
#define _WIN C1CTRL1bits.WIN
#define _CANCAP C1CTRL1bits.CANCAP
#define _OPMODE C1CTRL1bits.OPMODE
#define _REQOP C1CTRL1bits.REQOP
#define _CANCKS C1CTRL1bits.CANCKS
#define _ABAT C1CTRL1bits.ABAT
#define _CSIDL C1CTRL1bits.CSIDL
#define _OPMODE0 C1CTRL1bits.OPMODE0
#define _OPMODE1 C1CTRL1bits.OPMODE1
#define _OPMODE2 C1CTRL1bits.OPMODE2
#define _REQOP0 C1CTRL1bits.REQOP0
#define _REQOP1 C1CTRL1bits.REQOP1
#define _REQOP2 C1CTRL1bits.REQOP2

/* C1CTRL2 */
#define _DNCNT C1CTRL2bits.DNCNT
#define _DNCNT0 C1CTRL2bits.DNCNT0
#define _DNCNT1 C1CTRL2bits.DNCNT1
#define _DNCNT2 C1CTRL2bits.DNCNT2
#define _DNCNT3 C1CTRL2bits.DNCNT3
#define _DNCNT4 C1CTRL2bits.DNCNT4

/* C1VEC */
#define _ICODE C1VECbits.ICODE
#define _FILHIT C1VECbits.FILHIT
#define _ICODE0 C1VECbits.ICODE0
#define _ICODE1 C1VECbits.ICODE1
#define _ICODE2 C1VECbits.ICODE2
#define _ICODE3 C1VECbits.ICODE3
#define _ICODE4 C1VECbits.ICODE4
#define _ICODE5 C1VECbits.ICODE5
#define _ICODE6 C1VECbits.ICODE6
#define _FILHIT0 C1VECbits.FILHIT0
#define _FILHIT1 C1VECbits.FILHIT1
#define _FILHIT2 C1VECbits.FILHIT2
#define _FILHIT3 C1VECbits.FILHIT3
#define _FILHIT4 C1VECbits.FILHIT4

/* C1FCTRL */
#define _FSA C1FCTRLbits.FSA
#define _DMABS C1FCTRLbits.DMABS
#define _FSA0 C1FCTRLbits.FSA0
#define _FSA1 C1FCTRLbits.FSA1
#define _FSA2 C1FCTRLbits.FSA2
#define _FSA3 C1FCTRLbits.FSA3
#define _FSA4 C1FCTRLbits.FSA4
#define _DMABS0 C1FCTRLbits.DMABS0
#define _DMABS1 C1FCTRLbits.DMABS1
#define _DMABS2 C1FCTRLbits.DMABS2

/* C1FIFO */
#define _FNRB C1FIFObits.FNRB
#define _FBP C1FIFObits.FBP
#define _FNRB0 C1FIFObits.FNRB0
#define _FNRB1 C1FIFObits.FNRB1
#define _FNRB2 C1FIFObits.FNRB2
#define _FNRB3 C1FIFObits.FNRB3
#define _FNRB4 C1FIFObits.FNRB4
#define _FNRB5 C1FIFObits.FNRB5
#define _FBP0 C1FIFObits.FBP0
#define _FBP1 C1FIFObits.FBP1
#define _FBP2 C1FIFObits.FBP2
#define _FBP3 C1FIFObits.FBP3
#define _FBP4 C1FIFObits.FBP4
#define _FBP5 C1FIFObits.FBP5

/* C1INTF */
#define _TBIF C1INTFbits.TBIF
#define _RBIF C1INTFbits.RBIF
#define _RBOVIF C1INTFbits.RBOVIF
#define _FIFOIF C1INTFbits.FIFOIF
#define _ERRIF C1INTFbits.ERRIF
#define _WAKIF C1INTFbits.WAKIF
#define _IVRIF C1INTFbits.IVRIF
#define _EWARN C1INTFbits.EWARN
#define _RXWAR C1INTFbits.RXWAR
#define _TXWAR C1INTFbits.TXWAR
#define _RXBP C1INTFbits.RXBP
#define _TXBP C1INTFbits.TXBP
#define _TXBO C1INTFbits.TXBO

/* C1INTE */
#define _TBIE C1INTEbits.TBIE
#define _RBIE C1INTEbits.RBIE
#define _RBOVIE C1INTEbits.RBOVIE
#define _FIFOIE C1INTEbits.FIFOIE
#define _ERRIE C1INTEbits.ERRIE
#define _WAKIE C1INTEbits.WAKIE
#define _IVRIE C1INTEbits.IVRIE

/* C1EC */
#define _RERRCNT C1ECbits.RERRCNT
#define _TERRCNT C1ECbits.TERRCNT
#define _RERRCNT0 C1ECbits.RERRCNT0
#define _RERRCNT1 C1ECbits.RERRCNT1
#define _RERRCNT2 C1ECbits.RERRCNT2
#define _RERRCNT3 C1ECbits.RERRCNT3
#define _RERRCNT4 C1ECbits.RERRCNT4
#define _RERRCNT5 C1ECbits.RERRCNT5
#define _RERRCNT6 C1ECbits.RERRCNT6
#define _RERRCNT7 C1ECbits.RERRCNT7
#define _TERRCNT0 C1ECbits.TERRCNT0
#define _TERRCNT1 C1ECbits.TERRCNT1
#define _TERRCNT2 C1ECbits.TERRCNT2
#define _TERRCNT3 C1ECbits.TERRCNT3
#define _TERRCNT4 C1ECbits.TERRCNT4
#define _TERRCNT5 C1ECbits.TERRCNT5
#define _TERRCNT6 C1ECbits.TERRCNT6
#define _TERRCNT7 C1ECbits.TERRCNT7

/* C1CFG1 */
#define _BRP C1CFG1bits.BRP
#define _SJW C1CFG1bits.SJW
#define _BRP0 C1CFG1bits.BRP0
#define _BRP1 C1CFG1bits.BRP1
#define _BRP2 C1CFG1bits.BRP2
#define _BRP3 C1CFG1bits.BRP3
#define _BRP4 C1CFG1bits.BRP4
#define _BRP5 C1CFG1bits.BRP5
#define _SJW0 C1CFG1bits.SJW0
#define _SJW1 C1CFG1bits.SJW1

/* C1CFG2 */
#define _PRSEG C1CFG2bits.PRSEG
#define _SEG1PH C1CFG2bits.SEG1PH
#define _SAM C1CFG2bits.SAM
#define _SEG2PHTS C1CFG2bits.SEG2PHTS
#define _SEG2PH C1CFG2bits.SEG2PH
#define _WAKFIL C1CFG2bits.WAKFIL
#define _PRSEG0 C1CFG2bits.PRSEG0
#define _PRSEG1 C1CFG2bits.PRSEG1
#define _PRSEG2 C1CFG2bits.PRSEG2
#define _SEG1PH0 C1CFG2bits.SEG1PH0
#define _SEG1PH1 C1CFG2bits.SEG1PH1
#define _SEG1PH2 C1CFG2bits.SEG1PH2
#define _SEG2PH0 C1CFG2bits.SEG2PH0
#define _SEG2PH1 C1CFG2bits.SEG2PH1
#define _SEG2PH2 C1CFG2bits.SEG2PH2

/* C1FEN1 */
#define _FLTEN0 C1FEN1bits.FLTEN0
#define _FLTEN1 C1FEN1bits.FLTEN1
#define _FLTEN2 C1FEN1bits.FLTEN2
#define _FLTEN3 C1FEN1bits.FLTEN3
#define _FLTEN4 C1FEN1bits.FLTEN4
#define _FLTEN5 C1FEN1bits.FLTEN5
#define _FLTEN6 C1FEN1bits.FLTEN6
#define _FLTEN7 C1FEN1bits.FLTEN7
#define _FLTEN8 C1FEN1bits.FLTEN8
#define _FLTEN9 C1FEN1bits.FLTEN9
#define _FLTEN10 C1FEN1bits.FLTEN10
#define _FLTEN11 C1FEN1bits.FLTEN11
#define _FLTEN12 C1FEN1bits.FLTEN12
#define _FLTEN13 C1FEN1bits.FLTEN13
#define _FLTEN14 C1FEN1bits.FLTEN14
#define _FLTEN15 C1FEN1bits.FLTEN15
#define _FLTEN C1FEN1bits.FLTEN

/* C1FMSKSEL1 */
#define _F0MSK C1FMSKSEL1bits.F0MSK
#define _F1MSK C1FMSKSEL1bits.F1MSK
#define _F2MSK C1FMSKSEL1bits.F2MSK
#define _F3MSK C1FMSKSEL1bits.F3MSK
#define _F4MSK C1FMSKSEL1bits.F4MSK
#define _F5MSK C1FMSKSEL1bits.F5MSK
#define _F6MSK C1FMSKSEL1bits.F6MSK
#define _F7MSK C1FMSKSEL1bits.F7MSK
#define _F0MSK0 C1FMSKSEL1bits.F0MSK0
#define _F0MSK1 C1FMSKSEL1bits.F0MSK1
#define _F1MSK0 C1FMSKSEL1bits.F1MSK0
#define _F1MSK1 C1FMSKSEL1bits.F1MSK1
#define _F2MSK0 C1FMSKSEL1bits.F2MSK0
#define _F2MSK1 C1FMSKSEL1bits.F2MSK1
#define _F3MSK0 C1FMSKSEL1bits.F3MSK0
#define _F3MSK1 C1FMSKSEL1bits.F3MSK1
#define _F4MSK0 C1FMSKSEL1bits.F4MSK0
#define _F4MSK1 C1FMSKSEL1bits.F4MSK1
#define _F5MSK0 C1FMSKSEL1bits.F5MSK0
#define _F5MSK1 C1FMSKSEL1bits.F5MSK1
#define _F6MSK0 C1FMSKSEL1bits.F6MSK0
#define _F6MSK1 C1FMSKSEL1bits.F6MSK1
#define _F7MSK0 C1FMSKSEL1bits.F7MSK0
#define _F7MSK1 C1FMSKSEL1bits.F7MSK1

/* C1FMSKSEL2 */
#define _F8MSK C1FMSKSEL2bits.F8MSK
#define _F9MSK C1FMSKSEL2bits.F9MSK
#define _F10MSK C1FMSKSEL2bits.F10MSK
#define _F11MSK C1FMSKSEL2bits.F11MSK
#define _F12MSK C1FMSKSEL2bits.F12MSK
#define _F13MSK C1FMSKSEL2bits.F13MSK
#define _F14MSK C1FMSKSEL2bits.F14MSK
#define _F15MSK C1FMSKSEL2bits.F15MSK
#define _F8MSK0 C1FMSKSEL2bits.F8MSK0
#define _F8MSK1 C1FMSKSEL2bits.F8MSK1
#define _F9MSK0 C1FMSKSEL2bits.F9MSK0
#define _F9MSK1 C1FMSKSEL2bits.F9MSK1
#define _F10MSK0 C1FMSKSEL2bits.F10MSK0
#define _F10MSK1 C1FMSKSEL2bits.F10MSK1
#define _F11MSK0 C1FMSKSEL2bits.F11MSK0
#define _F11MSK1 C1FMSKSEL2bits.F11MSK1
#define _F12MSK0 C1FMSKSEL2bits.F12MSK0
#define _F12MSK1 C1FMSKSEL2bits.F12MSK1
#define _F13MSK0 C1FMSKSEL2bits.F13MSK0
#define _F13MSK1 C1FMSKSEL2bits.F13MSK1
#define _F14MSK0 C1FMSKSEL2bits.F14MSK0
#define _F14MSK1 C1FMSKSEL2bits.F14MSK1
#define _F15MSK0 C1FMSKSEL2bits.F15MSK0
#define _F15MSK1 C1FMSKSEL2bits.F15MSK1

/* C1BUFPNT1 */
#define _F0BP C1BUFPNT1bits.F0BP
#define _F1BP C1BUFPNT1bits.F1BP
#define _F2BP C1BUFPNT1bits.F2BP
#define _F3BP C1BUFPNT1bits.F3BP
#define _F0BP0 C1BUFPNT1bits.F0BP0
#define _F0BP1 C1BUFPNT1bits.F0BP1
#define _F0BP2 C1BUFPNT1bits.F0BP2
#define _F0BP3 C1BUFPNT1bits.F0BP3
#define _F1BP0 C1BUFPNT1bits.F1BP0
#define _F1BP1 C1BUFPNT1bits.F1BP1
#define _F1BP2 C1BUFPNT1bits.F1BP2
#define _F1BP3 C1BUFPNT1bits.F1BP3
#define _F2BP0 C1BUFPNT1bits.F2BP0
#define _F2BP1 C1BUFPNT1bits.F2BP1
#define _F2BP2 C1BUFPNT1bits.F2BP2
#define _F2BP3 C1BUFPNT1bits.F2BP3
#define _F3BP0 C1BUFPNT1bits.F3BP0
#define _F3BP1 C1BUFPNT1bits.F3BP1
#define _F3BP2 C1BUFPNT1bits.F3BP2
#define _F3BP3 C1BUFPNT1bits.F3BP3

/* C1RXFUL1 */
#define _RXFUL0 C1RXFUL1bits.RXFUL0
#define _RXFUL1 C1RXFUL1bits.RXFUL1
#define _RXFUL2 C1RXFUL1bits.RXFUL2
#define _RXFUL3 C1RXFUL1bits.RXFUL3
#define _RXFUL4 C1RXFUL1bits.RXFUL4
#define _RXFUL5 C1RXFUL1bits.RXFUL5
#define _RXFUL6 C1RXFUL1bits.RXFUL6
#define _RXFUL7 C1RXFUL1bits.RXFUL7
#define _RXFUL8 C1RXFUL1bits.RXFUL8
#define _RXFUL9 C1RXFUL1bits.RXFUL9
#define _RXFUL10 C1RXFUL1bits.RXFUL10
#define _RXFUL11 C1RXFUL1bits.RXFUL11
#define _RXFUL12 C1RXFUL1bits.RXFUL12
#define _RXFUL13 C1RXFUL1bits.RXFUL13
#define _RXFUL14 C1RXFUL1bits.RXFUL14
#define _RXFUL15 C1RXFUL1bits.RXFUL15

/* C1BUFPNT2 */
#define _F4BP C1BUFPNT2bits.F4BP
#define _F5BP C1BUFPNT2bits.F5BP
#define _F6BP C1BUFPNT2bits.F6BP
#define _F7BP C1BUFPNT2bits.F7BP
#define _F4BP0 C1BUFPNT2bits.F4BP0
#define _F4BP1 C1BUFPNT2bits.F4BP1
#define _F4BP2 C1BUFPNT2bits.F4BP2
#define _F4BP3 C1BUFPNT2bits.F4BP3
#define _F5BP0 C1BUFPNT2bits.F5BP0
#define _F5BP1 C1BUFPNT2bits.F5BP1
#define _F5BP2 C1BUFPNT2bits.F5BP2
#define _F5BP3 C1BUFPNT2bits.F5BP3
#define _F6BP0 C1BUFPNT2bits.F6BP0
#define _F6BP1 C1BUFPNT2bits.F6BP1
#define _F6BP2 C1BUFPNT2bits.F6BP2
#define _F6BP3 C1BUFPNT2bits.F6BP3
#define _F7BP0 C1BUFPNT2bits.F7BP0
#define _F7BP1 C1BUFPNT2bits.F7BP1
#define _F7BP2 C1BUFPNT2bits.F7BP2
#define _F7BP3 C1BUFPNT2bits.F7BP3

/* C1RXFUL2 */
#define _RXFUL16 C1RXFUL2bits.RXFUL16
#define _RXFUL17 C1RXFUL2bits.RXFUL17
#define _RXFUL18 C1RXFUL2bits.RXFUL18
#define _RXFUL19 C1RXFUL2bits.RXFUL19
#define _RXFUL20 C1RXFUL2bits.RXFUL20
#define _RXFUL21 C1RXFUL2bits.RXFUL21
#define _RXFUL22 C1RXFUL2bits.RXFUL22
#define _RXFUL23 C1RXFUL2bits.RXFUL23
#define _RXFUL24 C1RXFUL2bits.RXFUL24
#define _RXFUL25 C1RXFUL2bits.RXFUL25
#define _RXFUL26 C1RXFUL2bits.RXFUL26
#define _RXFUL27 C1RXFUL2bits.RXFUL27
#define _RXFUL28 C1RXFUL2bits.RXFUL28
#define _RXFUL29 C1RXFUL2bits.RXFUL29
#define _RXFUL30 C1RXFUL2bits.RXFUL30
#define _RXFUL31 C1RXFUL2bits.RXFUL31

/* C1BUFPNT3 */
#define _F8BP C1BUFPNT3bits.F8BP
#define _F9BP C1BUFPNT3bits.F9BP
#define _F10BP C1BUFPNT3bits.F10BP
#define _F11BP C1BUFPNT3bits.F11BP
#define _F8BP0 C1BUFPNT3bits.F8BP0
#define _F8BP1 C1BUFPNT3bits.F8BP1
#define _F8BP2 C1BUFPNT3bits.F8BP2
#define _F8BP3 C1BUFPNT3bits.F8BP3
#define _F9BP0 C1BUFPNT3bits.F9BP0
#define _F9BP1 C1BUFPNT3bits.F9BP1
#define _F9BP2 C1BUFPNT3bits.F9BP2
#define _F9BP3 C1BUFPNT3bits.F9BP3
#define _F10BP0 C1BUFPNT3bits.F10BP0
#define _F10BP1 C1BUFPNT3bits.F10BP1
#define _F10BP2 C1BUFPNT3bits.F10BP2
#define _F10BP3 C1BUFPNT3bits.F10BP3
#define _F11BP0 C1BUFPNT3bits.F11BP0
#define _F11BP1 C1BUFPNT3bits.F11BP1
#define _F11BP2 C1BUFPNT3bits.F11BP2
#define _F11BP3 C1BUFPNT3bits.F11BP3

/* C1BUFPNT4 */
#define _F12BP C1BUFPNT4bits.F12BP
#define _F13BP C1BUFPNT4bits.F13BP
#define _F14BP C1BUFPNT4bits.F14BP
#define _F15BP C1BUFPNT4bits.F15BP
#define _F12BP0 C1BUFPNT4bits.F12BP0
#define _F12BP1 C1BUFPNT4bits.F12BP1
#define _F12BP2 C1BUFPNT4bits.F12BP2
#define _F12BP3 C1BUFPNT4bits.F12BP3
#define _F13BP0 C1BUFPNT4bits.F13BP0
#define _F13BP1 C1BUFPNT4bits.F13BP1
#define _F13BP2 C1BUFPNT4bits.F13BP2
#define _F13BP3 C1BUFPNT4bits.F13BP3
#define _F14BP0 C1BUFPNT4bits.F14BP0
#define _F14BP1 C1BUFPNT4bits.F14BP1
#define _F14BP2 C1BUFPNT4bits.F14BP2
#define _F14BP3 C1BUFPNT4bits.F14BP3
#define _F15BP0 C1BUFPNT4bits.F15BP0
#define _F15BP1 C1BUFPNT4bits.F15BP1
#define _F15BP2 C1BUFPNT4bits.F15BP2
#define _F15BP3 C1BUFPNT4bits.F15BP3

/* C1RXOVF1 */
#define _RXOVF0 C1RXOVF1bits.RXOVF0
#define _RXOVF1 C1RXOVF1bits.RXOVF1
#define _RXOVF2 C1RXOVF1bits.RXOVF2
#define _RXOVF3 C1RXOVF1bits.RXOVF3
#define _RXOVF4 C1RXOVF1bits.RXOVF4
#define _RXOVF5 C1RXOVF1bits.RXOVF5
#define _RXOVF6 C1RXOVF1bits.RXOVF6
#define _RXOVF7 C1RXOVF1bits.RXOVF7
#define _RXOVF8 C1RXOVF1bits.RXOVF8
#define _RXOVF9 C1RXOVF1bits.RXOVF9
#define _RXOVF10 C1RXOVF1bits.RXOVF10
#define _RXOVF11 C1RXOVF1bits.RXOVF11
#define _RXOVF12 C1RXOVF1bits.RXOVF12
#define _RXOVF13 C1RXOVF1bits.RXOVF13
#define _RXOVF14 C1RXOVF1bits.RXOVF14
#define _RXOVF15 C1RXOVF1bits.RXOVF15

/* C1RXOVF2 */
#define _RXOVF16 C1RXOVF2bits.RXOVF16
#define _RXOVF17 C1RXOVF2bits.RXOVF17
#define _RXOVF18 C1RXOVF2bits.RXOVF18
#define _RXOVF19 C1RXOVF2bits.RXOVF19
#define _RXOVF20 C1RXOVF2bits.RXOVF20
#define _RXOVF21 C1RXOVF2bits.RXOVF21
#define _RXOVF22 C1RXOVF2bits.RXOVF22
#define _RXOVF23 C1RXOVF2bits.RXOVF23
#define _RXOVF24 C1RXOVF2bits.RXOVF24
#define _RXOVF25 C1RXOVF2bits.RXOVF25
#define _RXOVF26 C1RXOVF2bits.RXOVF26
#define _RXOVF27 C1RXOVF2bits.RXOVF27
#define _RXOVF28 C1RXOVF2bits.RXOVF28
#define _RXOVF29 C1RXOVF2bits.RXOVF29
#define _RXOVF30 C1RXOVF2bits.RXOVF30
#define _RXOVF31 C1RXOVF2bits.RXOVF31

/* C1RXM0SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _MIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1TR01CON */
#define _TX0PRI C1TR01CONbits.TX0PRI
#define _RTREN0 C1TR01CONbits.RTREN0
#define _TXREQ0 C1TR01CONbits.TXREQ0
#define _TXERR0 C1TR01CONbits.TXERR0
#define _TXLARB0 C1TR01CONbits.TXLARB0
#define _TXABT0 C1TR01CONbits.TXABT0
#define _TXEN0 C1TR01CONbits.TXEN0
#define _TX1PRI C1TR01CONbits.TX1PRI
#define _RTREN1 C1TR01CONbits.RTREN1
#define _TXREQ1 C1TR01CONbits.TXREQ1
#define _TXERR1 C1TR01CONbits.TXERR1
#define _TXLARB1 C1TR01CONbits.TXLARB1
#define _TXABT1 C1TR01CONbits.TXABT1
#define _TXEN1 C1TR01CONbits.TXEN1
#define _TX0PRI0 C1TR01CONbits.TX0PRI0
#define _TX0PRI1 C1TR01CONbits.TX0PRI1
#define _TX1PRI0 C1TR01CONbits.TX1PRI0
#define _TX1PRI1 C1TR01CONbits.TX1PRI1

/* C1RXM0EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */

/* C1TR23CON */
#define _TX2PRI C1TR23CONbits.TX2PRI
#define _RTREN2 C1TR23CONbits.RTREN2
#define _TXREQ2 C1TR23CONbits.TXREQ2
#define _TXERR2 C1TR23CONbits.TXERR2
#define _TXLARB2 C1TR23CONbits.TXLARB2
#define _TXABT2 C1TR23CONbits.TXABT2
#define _TXEN2 C1TR23CONbits.TXEN2
#define _TX3PRI C1TR23CONbits.TX3PRI
#define _RTREN3 C1TR23CONbits.RTREN3
#define _TXREQ3 C1TR23CONbits.TXREQ3
#define _TXERR3 C1TR23CONbits.TXERR3
#define _TXLARB3 C1TR23CONbits.TXLARB3
#define _TXABT3 C1TR23CONbits.TXABT3
#define _TXEN3 C1TR23CONbits.TXEN3
#define _TX2PRI0 C1TR23CONbits.TX2PRI0
#define _TX2PRI1 C1TR23CONbits.TX2PRI1
#define _TX3PRI0 C1TR23CONbits.TX3PRI0
#define _TX3PRI1 C1TR23CONbits.TX3PRI1

/* C1RXM1SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _MIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1TR45CON */
#define _TX4PRI C1TR45CONbits.TX4PRI
#define _RTREN4 C1TR45CONbits.RTREN4
#define _TXREQ4 C1TR45CONbits.TXREQ4
#define _TXERR4 C1TR45CONbits.TXERR4
#define _TXLARB4 C1TR45CONbits.TXLARB4
#define _TXABT4 C1TR45CONbits.TXABT4
#define _TXEN4 C1TR45CONbits.TXEN4
#define _TX5PRI C1TR45CONbits.TX5PRI
#define _RTREN5 C1TR45CONbits.RTREN5
#define _TXREQ5 C1TR45CONbits.TXREQ5
#define _TXERR5 C1TR45CONbits.TXERR5
#define _TXLARB5 C1TR45CONbits.TXLARB5
#define _TXABT5 C1TR45CONbits.TXABT5
#define _TXEN5 C1TR45CONbits.TXEN5
#define _TX4PRI0 C1TR45CONbits.TX4PRI0
#define _TX4PRI1 C1TR45CONbits.TX4PRI1
#define _TX5PRI0 C1TR45CONbits.TX5PRI0
#define _TX5PRI1 C1TR45CONbits.TX5PRI1

/* C1RXM1EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */

/* C1TR67CON */
#define _TX6PRI C1TR67CONbits.TX6PRI
#define _RTREN6 C1TR67CONbits.RTREN6
#define _TXREQ6 C1TR67CONbits.TXREQ6
#define _TXERR6 C1TR67CONbits.TXERR6
#define _TXLARB6 C1TR67CONbits.TXLARB6
#define _TXABT6 C1TR67CONbits.TXABT6
#define _TXEN6 C1TR67CONbits.TXEN6
#define _TX7PRI C1TR67CONbits.TX7PRI
#define _RTREN7 C1TR67CONbits.RTREN7
#define _TXREQ7 C1TR67CONbits.TXREQ7
#define _TXERR7 C1TR67CONbits.TXERR7
#define _TXLARB7 C1TR67CONbits.TXLARB7
#define _TXABT7 C1TR67CONbits.TXABT7
#define _TXEN7 C1TR67CONbits.TXEN7
#define _TX6PRI0 C1TR67CONbits.TX6PRI0
#define _TX6PRI1 C1TR67CONbits.TX6PRI1
#define _TX7PRI0 C1TR67CONbits.TX7PRI0
#define _TX7PRI1 C1TR67CONbits.TX7PRI1

/* C1RXM2SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _MIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */
/* Bitname _SID cannot be defined because it is used by more than one SFR */

/* C1RXM2EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */
/* Bitname _EID cannot be defined because it is used by more than one SFR */

/* C1RXF0SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF0EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF1SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF1EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF2SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF2EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF3SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF3EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF4SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF4EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF5SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF5EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF6SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF6EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF7SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF7EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF8SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF8EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF9SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF9EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF10SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF10EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF11SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF11EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF12SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF12EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF13SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF13EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF14SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF14EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* C1RXF15SID */
/* Bitname _EID16 cannot be defined because it is used by more than one SFR */
/* Bitname _EID17 cannot be defined because it is used by more than one SFR */
/* Bitname _EXIDE cannot be defined because it is used by more than one SFR */
/* Bitname _SID0 cannot be defined because it is used by more than one SFR */
/* Bitname _SID1 cannot be defined because it is used by more than one SFR */
/* Bitname _SID2 cannot be defined because it is used by more than one SFR */
/* Bitname _SID3 cannot be defined because it is used by more than one SFR */
/* Bitname _SID4 cannot be defined because it is used by more than one SFR */
/* Bitname _SID5 cannot be defined because it is used by more than one SFR */
/* Bitname _SID6 cannot be defined because it is used by more than one SFR */
/* Bitname _SID7 cannot be defined because it is used by more than one SFR */
/* Bitname _SID8 cannot be defined because it is used by more than one SFR */
/* Bitname _SID9 cannot be defined because it is used by more than one SFR */
/* Bitname _SID10 cannot be defined because it is used by more than one SFR */

/* C1RXF15EID */
/* Bitname _EID0 cannot be defined because it is used by more than one SFR */
/* Bitname _EID1 cannot be defined because it is used by more than one SFR */
/* Bitname _EID2 cannot be defined because it is used by more than one SFR */
/* Bitname _EID3 cannot be defined because it is used by more than one SFR */
/* Bitname _EID4 cannot be defined because it is used by more than one SFR */
/* Bitname _EID5 cannot be defined because it is used by more than one SFR */
/* Bitname _EID6 cannot be defined because it is used by more than one SFR */
/* Bitname _EID7 cannot be defined because it is used by more than one SFR */
/* Bitname _EID8 cannot be defined because it is used by more than one SFR */
/* Bitname _EID9 cannot be defined because it is used by more than one SFR */
/* Bitname _EID10 cannot be defined because it is used by more than one SFR */
/* Bitname _EID11 cannot be defined because it is used by more than one SFR */
/* Bitname _EID12 cannot be defined because it is used by more than one SFR */
/* Bitname _EID13 cannot be defined because it is used by more than one SFR */
/* Bitname _EID14 cannot be defined because it is used by more than one SFR */
/* Bitname _EID15 cannot be defined because it is used by more than one SFR */

/* ODCD */
#define _ODCD0 ODCDbits.ODCD0
#define _ODCD1 ODCDbits.ODCD1
#define _ODCD2 ODCDbits.ODCD2
#define _ODCD3 ODCDbits.ODCD3
#define _ODCD4 ODCDbits.ODCD4
#define _ODCD5 ODCDbits.ODCD5
#define _ODCD6 ODCDbits.ODCD6
#define _ODCD7 ODCDbits.ODCD7
#define _ODCD8 ODCDbits.ODCD8
#define _ODCD9 ODCDbits.ODCD9
#define _ODCD10 ODCDbits.ODCD10
#define _ODCD11 ODCDbits.ODCD11

/* ODCF */
#define _ODCF0 ODCFbits.ODCF0
#define _ODCF1 ODCFbits.ODCF1
#define _ODCF2 ODCFbits.ODCF2
#define _ODCF3 ODCFbits.ODCF3
#define _ODCF4 ODCFbits.ODCF4
#define _ODCF5 ODCFbits.ODCF5
#define _ODCF6 ODCFbits.ODCF6

/* ODCG */
#define _ODCG0 ODCGbits.ODCG0
#define _ODCG1 ODCGbits.ODCG1
#define _ODCG2 ODCGbits.ODCG2
#define _ODCG3 ODCGbits.ODCG3
#define _ODCG6 ODCGbits.ODCG6
#define _ODCG7 ODCGbits.ODCG7
#define _ODCG8 ODCGbits.ODCG8
#define _ODCG9 ODCGbits.ODCG9
#define _ODCG12 ODCGbits.ODCG12
#define _ODCG13 ODCGbits.ODCG13
#define _ODCG14 ODCGbits.ODCG14
#define _ODCG15 ODCGbits.ODCG15

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
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _LPOSCEN OSCCONbits.LPOSCEN
#define _CF OSCCONbits.CF
#define _LOCK OSCCONbits.LOCK
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

/* BSRAM */
#define _RL_BSR BSRAMbits.RL_BSR
#define _IR_BSR BSRAMbits.IR_BSR
#define _IW_BSR BSRAMbits.IW_BSR

/* SSRAM */
#define _RL_SSR SSRAMbits.RL_SSR
#define _IR_SSR SSRAMbits.IR_SSR
#define _IW_SSR SSRAMbits.IW_SSR

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
#define _C1MD PMD1bits.C1MD
#define _SPI1MD PMD1bits.SPI1MD
#define _SPI2MD PMD1bits.SPI2MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _I2C1MD PMD1bits.I2C1MD
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
#define _OC5MD PMD2bits.OC5MD
#define _OC6MD PMD2bits.OC6MD
#define _OC7MD PMD2bits.OC7MD
#define _OC8MD PMD2bits.OC8MD
#define _IC1MD PMD2bits.IC1MD
#define _IC2MD PMD2bits.IC2MD
#define _IC3MD PMD2bits.IC3MD
#define _IC4MD PMD2bits.IC4MD
#define _IC5MD PMD2bits.IC5MD
#define _IC6MD PMD2bits.IC6MD
#define _IC7MD PMD2bits.IC7MD
#define _IC8MD PMD2bits.IC8MD

/* PMD3 */
#define _I2C2MD PMD3bits.I2C2MD
#define _T6MD PMD3bits.T6MD
#define _T7MD PMD3bits.T7MD
#define _T8MD PMD3bits.T8MD
#define _T9MD PMD3bits.T9MD


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

#define _CNEN1_CN6IE_POSITION                    0x00000006
#define _CNEN1_CN6IE_MASK                        0x00000040
#define _CNEN1_CN6IE_LENGTH                      0x00000001

#define _CNEN1_CN7IE_POSITION                    0x00000007
#define _CNEN1_CN7IE_MASK                        0x00000080
#define _CNEN1_CN7IE_LENGTH                      0x00000001

#define _CNEN1_CN8IE_POSITION                    0x00000008
#define _CNEN1_CN8IE_MASK                        0x00000100
#define _CNEN1_CN8IE_LENGTH                      0x00000001

#define _CNEN1_CN9IE_POSITION                    0x00000009
#define _CNEN1_CN9IE_MASK                        0x00000200
#define _CNEN1_CN9IE_LENGTH                      0x00000001

#define _CNEN1_CN10IE_POSITION                   0x0000000A
#define _CNEN1_CN10IE_MASK                       0x00000400
#define _CNEN1_CN10IE_LENGTH                     0x00000001

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

#define _CNEN1_CN15IE_POSITION                   0x0000000F
#define _CNEN1_CN15IE_MASK                       0x00008000
#define _CNEN1_CN15IE_LENGTH                     0x00000001

#define _CNEN2_CN16IE_POSITION                   0x00000000
#define _CNEN2_CN16IE_MASK                       0x00000001
#define _CNEN2_CN16IE_LENGTH                     0x00000001

#define _CNEN2_CN17IE_POSITION                   0x00000001
#define _CNEN2_CN17IE_MASK                       0x00000002
#define _CNEN2_CN17IE_LENGTH                     0x00000001

#define _CNEN2_CN18IE_POSITION                   0x00000002
#define _CNEN2_CN18IE_MASK                       0x00000004
#define _CNEN2_CN18IE_LENGTH                     0x00000001

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

#define _CNPU1_CN6PUE_POSITION                   0x00000006
#define _CNPU1_CN6PUE_MASK                       0x00000040
#define _CNPU1_CN6PUE_LENGTH                     0x00000001

#define _CNPU1_CN7PUE_POSITION                   0x00000007
#define _CNPU1_CN7PUE_MASK                       0x00000080
#define _CNPU1_CN7PUE_LENGTH                     0x00000001

#define _CNPU1_CN8PUE_POSITION                   0x00000008
#define _CNPU1_CN8PUE_MASK                       0x00000100
#define _CNPU1_CN8PUE_LENGTH                     0x00000001

#define _CNPU1_CN9PUE_POSITION                   0x00000009
#define _CNPU1_CN9PUE_MASK                       0x00000200
#define _CNPU1_CN9PUE_LENGTH                     0x00000001

#define _CNPU1_CN10PUE_POSITION                  0x0000000A
#define _CNPU1_CN10PUE_MASK                      0x00000400
#define _CNPU1_CN10PUE_LENGTH                    0x00000001

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

#define _CNPU1_CN15PUE_POSITION                  0x0000000F
#define _CNPU1_CN15PUE_MASK                      0x00008000
#define _CNPU1_CN15PUE_LENGTH                    0x00000001

#define _CNPU2_CN16PUE_POSITION                  0x00000000
#define _CNPU2_CN16PUE_MASK                      0x00000001
#define _CNPU2_CN16PUE_LENGTH                    0x00000001

#define _CNPU2_CN17PUE_POSITION                  0x00000001
#define _CNPU2_CN17PUE_MASK                      0x00000002
#define _CNPU2_CN17PUE_LENGTH                    0x00000001

#define _CNPU2_CN18PUE_POSITION                  0x00000002
#define _CNPU2_CN18PUE_MASK                      0x00000004
#define _CNPU2_CN18PUE_LENGTH                    0x00000001

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

#define _INTCON2_INT3EP_POSITION                 0x00000003
#define _INTCON2_INT3EP_MASK                     0x00000008
#define _INTCON2_INT3EP_LENGTH                   0x00000001

#define _INTCON2_INT4EP_POSITION                 0x00000004
#define _INTCON2_INT4EP_MASK                     0x00000010
#define _INTCON2_INT4EP_LENGTH                   0x00000001

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

#define _IFS1_CNIF_POSITION                      0x00000003
#define _IFS1_CNIF_MASK                          0x00000008
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000004
#define _IFS1_INT1IF_MASK                        0x00000010
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_IC7IF_POSITION                     0x00000006
#define _IFS1_IC7IF_MASK                         0x00000040
#define _IFS1_IC7IF_LENGTH                       0x00000001

#define _IFS1_IC8IF_POSITION                     0x00000007
#define _IFS1_IC8IF_MASK                         0x00000080
#define _IFS1_IC8IF_LENGTH                       0x00000001

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

#define _IFS1_SI2CIF_POSITION                    0x00000000
#define _IFS1_SI2CIF_MASK                        0x00000001
#define _IFS1_SI2CIF_LENGTH                      0x00000001

#define _IFS2_SPI2EIF_POSITION                   0x00000000
#define _IFS2_SPI2EIF_MASK                       0x00000001
#define _IFS2_SPI2EIF_LENGTH                     0x00000001

#define _IFS2_SPI2IF_POSITION                    0x00000001
#define _IFS2_SPI2IF_MASK                        0x00000002
#define _IFS2_SPI2IF_LENGTH                      0x00000001

#define _IFS2_C1RXIF_POSITION                    0x00000002
#define _IFS2_C1RXIF_MASK                        0x00000004
#define _IFS2_C1RXIF_LENGTH                      0x00000001

#define _IFS2_C1IF_POSITION                      0x00000003
#define _IFS2_C1IF_MASK                          0x00000008
#define _IFS2_C1IF_LENGTH                        0x00000001

#define _IFS2_DMA3IF_POSITION                    0x00000004
#define _IFS2_DMA3IF_MASK                        0x00000010
#define _IFS2_DMA3IF_LENGTH                      0x00000001

#define _IFS2_IC3IF_POSITION                     0x00000005
#define _IFS2_IC3IF_MASK                         0x00000020
#define _IFS2_IC3IF_LENGTH                       0x00000001

#define _IFS2_IC4IF_POSITION                     0x00000006
#define _IFS2_IC4IF_MASK                         0x00000040
#define _IFS2_IC4IF_LENGTH                       0x00000001

#define _IFS2_IC5IF_POSITION                     0x00000007
#define _IFS2_IC5IF_MASK                         0x00000080
#define _IFS2_IC5IF_LENGTH                       0x00000001

#define _IFS2_IC6IF_POSITION                     0x00000008
#define _IFS2_IC6IF_MASK                         0x00000100
#define _IFS2_IC6IF_LENGTH                       0x00000001

#define _IFS2_OC5IF_POSITION                     0x00000009
#define _IFS2_OC5IF_MASK                         0x00000200
#define _IFS2_OC5IF_LENGTH                       0x00000001

#define _IFS2_OC6IF_POSITION                     0x0000000A
#define _IFS2_OC6IF_MASK                         0x00000400
#define _IFS2_OC6IF_LENGTH                       0x00000001

#define _IFS2_OC7IF_POSITION                     0x0000000B
#define _IFS2_OC7IF_MASK                         0x00000800
#define _IFS2_OC7IF_LENGTH                       0x00000001

#define _IFS2_OC8IF_POSITION                     0x0000000C
#define _IFS2_OC8IF_MASK                         0x00001000
#define _IFS2_OC8IF_LENGTH                       0x00000001

#define _IFS2_DMA4IF_POSITION                    0x0000000E
#define _IFS2_DMA4IF_MASK                        0x00004000
#define _IFS2_DMA4IF_LENGTH                      0x00000001

#define _IFS2_T6IF_POSITION                      0x0000000F
#define _IFS2_T6IF_MASK                          0x00008000
#define _IFS2_T6IF_LENGTH                        0x00000001

#define _IFS3_T7IF_POSITION                      0x00000000
#define _IFS3_T7IF_MASK                          0x00000001
#define _IFS3_T7IF_LENGTH                        0x00000001

#define _IFS3_SI2C2IF_POSITION                   0x00000001
#define _IFS3_SI2C2IF_MASK                       0x00000002
#define _IFS3_SI2C2IF_LENGTH                     0x00000001

#define _IFS3_MI2C2IF_POSITION                   0x00000002
#define _IFS3_MI2C2IF_MASK                       0x00000004
#define _IFS3_MI2C2IF_LENGTH                     0x00000001

#define _IFS3_T8IF_POSITION                      0x00000003
#define _IFS3_T8IF_MASK                          0x00000008
#define _IFS3_T8IF_LENGTH                        0x00000001

#define _IFS3_T9IF_POSITION                      0x00000004
#define _IFS3_T9IF_MASK                          0x00000010
#define _IFS3_T9IF_LENGTH                        0x00000001

#define _IFS3_INT3IF_POSITION                    0x00000005
#define _IFS3_INT3IF_MASK                        0x00000020
#define _IFS3_INT3IF_LENGTH                      0x00000001

#define _IFS3_INT4IF_POSITION                    0x00000006
#define _IFS3_INT4IF_MASK                        0x00000040
#define _IFS3_INT4IF_LENGTH                      0x00000001

#define _IFS3_DMA5IF_POSITION                    0x0000000D
#define _IFS3_DMA5IF_MASK                        0x00002000
#define _IFS3_DMA5IF_LENGTH                      0x00000001

#define _IFS4_U1EIF_POSITION                     0x00000001
#define _IFS4_U1EIF_MASK                         0x00000002
#define _IFS4_U1EIF_LENGTH                       0x00000001

#define _IFS4_U2EIF_POSITION                     0x00000002
#define _IFS4_U2EIF_MASK                         0x00000004
#define _IFS4_U2EIF_LENGTH                       0x00000001

#define _IFS4_DMA6IF_POSITION                    0x00000004
#define _IFS4_DMA6IF_MASK                        0x00000010
#define _IFS4_DMA6IF_LENGTH                      0x00000001

#define _IFS4_DMA7IF_POSITION                    0x00000005
#define _IFS4_DMA7IF_MASK                        0x00000020
#define _IFS4_DMA7IF_LENGTH                      0x00000001

#define _IFS4_C1TXIF_POSITION                    0x00000006
#define _IFS4_C1TXIF_MASK                        0x00000040
#define _IFS4_C1TXIF_LENGTH                      0x00000001

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

#define _IEC1_CNIE_POSITION                      0x00000003
#define _IEC1_CNIE_MASK                          0x00000008
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000004
#define _IEC1_INT1IE_MASK                        0x00000010
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_IC7IE_POSITION                     0x00000006
#define _IEC1_IC7IE_MASK                         0x00000040
#define _IEC1_IC7IE_LENGTH                       0x00000001

#define _IEC1_IC8IE_POSITION                     0x00000007
#define _IEC1_IC8IE_MASK                         0x00000080
#define _IEC1_IC8IE_LENGTH                       0x00000001

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

#define _IEC1_SI2CIE_POSITION                    0x00000000
#define _IEC1_SI2CIE_MASK                        0x00000001
#define _IEC1_SI2CIE_LENGTH                      0x00000001

#define _IEC2_SPI2EIE_POSITION                   0x00000000
#define _IEC2_SPI2EIE_MASK                       0x00000001
#define _IEC2_SPI2EIE_LENGTH                     0x00000001

#define _IEC2_SPI2IE_POSITION                    0x00000001
#define _IEC2_SPI2IE_MASK                        0x00000002
#define _IEC2_SPI2IE_LENGTH                      0x00000001

#define _IEC2_C1RXIE_POSITION                    0x00000002
#define _IEC2_C1RXIE_MASK                        0x00000004
#define _IEC2_C1RXIE_LENGTH                      0x00000001

#define _IEC2_C1IE_POSITION                      0x00000003
#define _IEC2_C1IE_MASK                          0x00000008
#define _IEC2_C1IE_LENGTH                        0x00000001

#define _IEC2_DMA3IE_POSITION                    0x00000004
#define _IEC2_DMA3IE_MASK                        0x00000010
#define _IEC2_DMA3IE_LENGTH                      0x00000001

#define _IEC2_IC3IE_POSITION                     0x00000005
#define _IEC2_IC3IE_MASK                         0x00000020
#define _IEC2_IC3IE_LENGTH                       0x00000001

#define _IEC2_IC4IE_POSITION                     0x00000006
#define _IEC2_IC4IE_MASK                         0x00000040
#define _IEC2_IC4IE_LENGTH                       0x00000001

#define _IEC2_IC5IE_POSITION                     0x00000007
#define _IEC2_IC5IE_MASK                         0x00000080
#define _IEC2_IC5IE_LENGTH                       0x00000001

#define _IEC2_IC6IE_POSITION                     0x00000008
#define _IEC2_IC6IE_MASK                         0x00000100
#define _IEC2_IC6IE_LENGTH                       0x00000001

#define _IEC2_OC5IE_POSITION                     0x00000009
#define _IEC2_OC5IE_MASK                         0x00000200
#define _IEC2_OC5IE_LENGTH                       0x00000001

#define _IEC2_OC6IE_POSITION                     0x0000000A
#define _IEC2_OC6IE_MASK                         0x00000400
#define _IEC2_OC6IE_LENGTH                       0x00000001

#define _IEC2_OC7IE_POSITION                     0x0000000B
#define _IEC2_OC7IE_MASK                         0x00000800
#define _IEC2_OC7IE_LENGTH                       0x00000001

#define _IEC2_OC8IE_POSITION                     0x0000000C
#define _IEC2_OC8IE_MASK                         0x00001000
#define _IEC2_OC8IE_LENGTH                       0x00000001

#define _IEC2_DMA4IE_POSITION                    0x0000000E
#define _IEC2_DMA4IE_MASK                        0x00004000
#define _IEC2_DMA4IE_LENGTH                      0x00000001

#define _IEC2_T6IE_POSITION                      0x0000000F
#define _IEC2_T6IE_MASK                          0x00008000
#define _IEC2_T6IE_LENGTH                        0x00000001

#define _IEC3_T7IE_POSITION                      0x00000000
#define _IEC3_T7IE_MASK                          0x00000001
#define _IEC3_T7IE_LENGTH                        0x00000001

#define _IEC3_SI2C2IE_POSITION                   0x00000001
#define _IEC3_SI2C2IE_MASK                       0x00000002
#define _IEC3_SI2C2IE_LENGTH                     0x00000001

#define _IEC3_MI2C2IE_POSITION                   0x00000002
#define _IEC3_MI2C2IE_MASK                       0x00000004
#define _IEC3_MI2C2IE_LENGTH                     0x00000001

#define _IEC3_T8IE_POSITION                      0x00000003
#define _IEC3_T8IE_MASK                          0x00000008
#define _IEC3_T8IE_LENGTH                        0x00000001

#define _IEC3_T9IE_POSITION                      0x00000004
#define _IEC3_T9IE_MASK                          0x00000010
#define _IEC3_T9IE_LENGTH                        0x00000001

#define _IEC3_INT3IE_POSITION                    0x00000005
#define _IEC3_INT3IE_MASK                        0x00000020
#define _IEC3_INT3IE_LENGTH                      0x00000001

#define _IEC3_INT4IE_POSITION                    0x00000006
#define _IEC3_INT4IE_MASK                        0x00000040
#define _IEC3_INT4IE_LENGTH                      0x00000001

#define _IEC3_DMA5IE_POSITION                    0x0000000D
#define _IEC3_DMA5IE_MASK                        0x00002000
#define _IEC3_DMA5IE_LENGTH                      0x00000001

#define _IEC4_U1EIE_POSITION                     0x00000001
#define _IEC4_U1EIE_MASK                         0x00000002
#define _IEC4_U1EIE_LENGTH                       0x00000001

#define _IEC4_U2EIE_POSITION                     0x00000002
#define _IEC4_U2EIE_MASK                         0x00000004
#define _IEC4_U2EIE_LENGTH                       0x00000001

#define _IEC4_DMA6IE_POSITION                    0x00000004
#define _IEC4_DMA6IE_MASK                        0x00000010
#define _IEC4_DMA6IE_LENGTH                      0x00000001

#define _IEC4_DMA7IE_POSITION                    0x00000005
#define _IEC4_DMA7IE_MASK                        0x00000020
#define _IEC4_DMA7IE_LENGTH                      0x00000001

#define _IEC4_C1TXIE_POSITION                    0x00000006
#define _IEC4_C1TXIE_MASK                        0x00000040
#define _IEC4_C1TXIE_LENGTH                      0x00000001

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

#define _IPC4_SI2C1IP_POSITION                   0x00000000
#define _IPC4_SI2C1IP_MASK                       0x00000007
#define _IPC4_SI2C1IP_LENGTH                     0x00000003

#define _IPC4_MI2C1IP_POSITION                   0x00000004
#define _IPC4_MI2C1IP_MASK                       0x00000070
#define _IPC4_MI2C1IP_LENGTH                     0x00000003

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

#define _IPC5_IC7IP_POSITION                     0x00000008
#define _IPC5_IC7IP_MASK                         0x00000700
#define _IPC5_IC7IP_LENGTH                       0x00000003

#define _IPC5_IC8IP_POSITION                     0x0000000C
#define _IPC5_IC8IP_MASK                         0x00007000
#define _IPC5_IC8IP_LENGTH                       0x00000003

#define _IPC5_INT1IP0_POSITION                   0x00000000
#define _IPC5_INT1IP0_MASK                       0x00000001
#define _IPC5_INT1IP0_LENGTH                     0x00000001

#define _IPC5_INT1IP1_POSITION                   0x00000001
#define _IPC5_INT1IP1_MASK                       0x00000002
#define _IPC5_INT1IP1_LENGTH                     0x00000001

#define _IPC5_INT1IP2_POSITION                   0x00000002
#define _IPC5_INT1IP2_MASK                       0x00000004
#define _IPC5_INT1IP2_LENGTH                     0x00000001

#define _IPC5_IC7IP0_POSITION                    0x00000008
#define _IPC5_IC7IP0_MASK                        0x00000100
#define _IPC5_IC7IP0_LENGTH                      0x00000001

#define _IPC5_IC7IP1_POSITION                    0x00000009
#define _IPC5_IC7IP1_MASK                        0x00000200
#define _IPC5_IC7IP1_LENGTH                      0x00000001

#define _IPC5_IC7IP2_POSITION                    0x0000000A
#define _IPC5_IC7IP2_MASK                        0x00000400
#define _IPC5_IC7IP2_LENGTH                      0x00000001

#define _IPC5_IC8IP0_POSITION                    0x0000000C
#define _IPC5_IC8IP0_MASK                        0x00001000
#define _IPC5_IC8IP0_LENGTH                      0x00000001

#define _IPC5_IC8IP1_POSITION                    0x0000000D
#define _IPC5_IC8IP1_MASK                        0x00002000
#define _IPC5_IC8IP1_LENGTH                      0x00000001

#define _IPC5_IC8IP2_POSITION                    0x0000000E
#define _IPC5_IC8IP2_MASK                        0x00004000
#define _IPC5_IC8IP2_LENGTH                      0x00000001

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

#define _IPC8_C1RXIP_POSITION                    0x00000008
#define _IPC8_C1RXIP_MASK                        0x00000700
#define _IPC8_C1RXIP_LENGTH                      0x00000003

#define _IPC8_C1IP_POSITION                      0x0000000C
#define _IPC8_C1IP_MASK                          0x00007000
#define _IPC8_C1IP_LENGTH                        0x00000003

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

#define _IPC8_C1RXIP0_POSITION                   0x00000008
#define _IPC8_C1RXIP0_MASK                       0x00000100
#define _IPC8_C1RXIP0_LENGTH                     0x00000001

#define _IPC8_C1RXIP1_POSITION                   0x00000009
#define _IPC8_C1RXIP1_MASK                       0x00000200
#define _IPC8_C1RXIP1_LENGTH                     0x00000001

#define _IPC8_C1RXIP2_POSITION                   0x0000000A
#define _IPC8_C1RXIP2_MASK                       0x00000400
#define _IPC8_C1RXIP2_LENGTH                     0x00000001

#define _IPC8_C1IP0_POSITION                     0x0000000C
#define _IPC8_C1IP0_MASK                         0x00001000
#define _IPC8_C1IP0_LENGTH                       0x00000001

#define _IPC8_C1IP1_POSITION                     0x0000000D
#define _IPC8_C1IP1_MASK                         0x00002000
#define _IPC8_C1IP1_LENGTH                       0x00000001

#define _IPC8_C1IP2_POSITION                     0x0000000E
#define _IPC8_C1IP2_MASK                         0x00004000
#define _IPC8_C1IP2_LENGTH                       0x00000001

#define _IPC9_DMA3IP_POSITION                    0x00000000
#define _IPC9_DMA3IP_MASK                        0x00000007
#define _IPC9_DMA3IP_LENGTH                      0x00000003

#define _IPC9_IC3IP_POSITION                     0x00000004
#define _IPC9_IC3IP_MASK                         0x00000070
#define _IPC9_IC3IP_LENGTH                       0x00000003

#define _IPC9_IC4IP_POSITION                     0x00000008
#define _IPC9_IC4IP_MASK                         0x00000700
#define _IPC9_IC4IP_LENGTH                       0x00000003

#define _IPC9_IC5IP_POSITION                     0x0000000C
#define _IPC9_IC5IP_MASK                         0x00007000
#define _IPC9_IC5IP_LENGTH                       0x00000003

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

#define _IPC9_IC5IP0_POSITION                    0x0000000C
#define _IPC9_IC5IP0_MASK                        0x00001000
#define _IPC9_IC5IP0_LENGTH                      0x00000001

#define _IPC9_IC5IP1_POSITION                    0x0000000D
#define _IPC9_IC5IP1_MASK                        0x00002000
#define _IPC9_IC5IP1_LENGTH                      0x00000001

#define _IPC9_IC5IP2_POSITION                    0x0000000E
#define _IPC9_IC5IP2_MASK                        0x00004000
#define _IPC9_IC5IP2_LENGTH                      0x00000001

#define _IPC10_IC6IP_POSITION                    0x00000000
#define _IPC10_IC6IP_MASK                        0x00000007
#define _IPC10_IC6IP_LENGTH                      0x00000003

#define _IPC10_OC5IP_POSITION                    0x00000004
#define _IPC10_OC5IP_MASK                        0x00000070
#define _IPC10_OC5IP_LENGTH                      0x00000003

#define _IPC10_OC6IP_POSITION                    0x00000008
#define _IPC10_OC6IP_MASK                        0x00000700
#define _IPC10_OC6IP_LENGTH                      0x00000003

#define _IPC10_OC7IP_POSITION                    0x0000000C
#define _IPC10_OC7IP_MASK                        0x00007000
#define _IPC10_OC7IP_LENGTH                      0x00000003

#define _IPC10_IC6IP0_POSITION                   0x00000000
#define _IPC10_IC6IP0_MASK                       0x00000001
#define _IPC10_IC6IP0_LENGTH                     0x00000001

#define _IPC10_IC6IP1_POSITION                   0x00000001
#define _IPC10_IC6IP1_MASK                       0x00000002
#define _IPC10_IC6IP1_LENGTH                     0x00000001

#define _IPC10_IC6IP2_POSITION                   0x00000002
#define _IPC10_IC6IP2_MASK                       0x00000004
#define _IPC10_IC6IP2_LENGTH                     0x00000001

#define _IPC10_OC5IP0_POSITION                   0x00000004
#define _IPC10_OC5IP0_MASK                       0x00000010
#define _IPC10_OC5IP0_LENGTH                     0x00000001

#define _IPC10_OC5IP1_POSITION                   0x00000005
#define _IPC10_OC5IP1_MASK                       0x00000020
#define _IPC10_OC5IP1_LENGTH                     0x00000001

#define _IPC10_OC5IP2_POSITION                   0x00000006
#define _IPC10_OC5IP2_MASK                       0x00000040
#define _IPC10_OC5IP2_LENGTH                     0x00000001

#define _IPC10_OC6IP0_POSITION                   0x00000008
#define _IPC10_OC6IP0_MASK                       0x00000100
#define _IPC10_OC6IP0_LENGTH                     0x00000001

#define _IPC10_OC6IP1_POSITION                   0x00000009
#define _IPC10_OC6IP1_MASK                       0x00000200
#define _IPC10_OC6IP1_LENGTH                     0x00000001

#define _IPC10_OC6IP2_POSITION                   0x0000000A
#define _IPC10_OC6IP2_MASK                       0x00000400
#define _IPC10_OC6IP2_LENGTH                     0x00000001

#define _IPC10_OC7IP0_POSITION                   0x0000000C
#define _IPC10_OC7IP0_MASK                       0x00001000
#define _IPC10_OC7IP0_LENGTH                     0x00000001

#define _IPC10_OC7IP1_POSITION                   0x0000000D
#define _IPC10_OC7IP1_MASK                       0x00002000
#define _IPC10_OC7IP1_LENGTH                     0x00000001

#define _IPC10_OC7IP2_POSITION                   0x0000000E
#define _IPC10_OC7IP2_MASK                       0x00004000
#define _IPC10_OC7IP2_LENGTH                     0x00000001

#define _IPC11_OC8IP_POSITION                    0x00000000
#define _IPC11_OC8IP_MASK                        0x00000007
#define _IPC11_OC8IP_LENGTH                      0x00000003

#define _IPC11_DMA4IP_POSITION                   0x00000008
#define _IPC11_DMA4IP_MASK                       0x00000700
#define _IPC11_DMA4IP_LENGTH                     0x00000003

#define _IPC11_T6IP_POSITION                     0x0000000C
#define _IPC11_T6IP_MASK                         0x00007000
#define _IPC11_T6IP_LENGTH                       0x00000003

#define _IPC11_OC8IP0_POSITION                   0x00000000
#define _IPC11_OC8IP0_MASK                       0x00000001
#define _IPC11_OC8IP0_LENGTH                     0x00000001

#define _IPC11_OC8IP1_POSITION                   0x00000001
#define _IPC11_OC8IP1_MASK                       0x00000002
#define _IPC11_OC8IP1_LENGTH                     0x00000001

#define _IPC11_OC8IP2_POSITION                   0x00000002
#define _IPC11_OC8IP2_MASK                       0x00000004
#define _IPC11_OC8IP2_LENGTH                     0x00000001

#define _IPC11_DMA4IP0_POSITION                  0x00000008
#define _IPC11_DMA4IP0_MASK                      0x00000100
#define _IPC11_DMA4IP0_LENGTH                    0x00000001

#define _IPC11_DMA4IP1_POSITION                  0x00000009
#define _IPC11_DMA4IP1_MASK                      0x00000200
#define _IPC11_DMA4IP1_LENGTH                    0x00000001

#define _IPC11_DMA4IP2_POSITION                  0x0000000A
#define _IPC11_DMA4IP2_MASK                      0x00000400
#define _IPC11_DMA4IP2_LENGTH                    0x00000001

#define _IPC11_T6IP0_POSITION                    0x0000000C
#define _IPC11_T6IP0_MASK                        0x00001000
#define _IPC11_T6IP0_LENGTH                      0x00000001

#define _IPC11_T6IP1_POSITION                    0x0000000D
#define _IPC11_T6IP1_MASK                        0x00002000
#define _IPC11_T6IP1_LENGTH                      0x00000001

#define _IPC11_T6IP2_POSITION                    0x0000000E
#define _IPC11_T6IP2_MASK                        0x00004000
#define _IPC11_T6IP2_LENGTH                      0x00000001

#define _IPC12_T7IP_POSITION                     0x00000000
#define _IPC12_T7IP_MASK                         0x00000007
#define _IPC12_T7IP_LENGTH                       0x00000003

#define _IPC12_SI2C2IP_POSITION                  0x00000004
#define _IPC12_SI2C2IP_MASK                      0x00000070
#define _IPC12_SI2C2IP_LENGTH                    0x00000003

#define _IPC12_MI2C2IP_POSITION                  0x00000008
#define _IPC12_MI2C2IP_MASK                      0x00000700
#define _IPC12_MI2C2IP_LENGTH                    0x00000003

#define _IPC12_T8IP_POSITION                     0x0000000C
#define _IPC12_T8IP_MASK                         0x00007000
#define _IPC12_T8IP_LENGTH                       0x00000003

#define _IPC12_T7IP0_POSITION                    0x00000000
#define _IPC12_T7IP0_MASK                        0x00000001
#define _IPC12_T7IP0_LENGTH                      0x00000001

#define _IPC12_T7IP1_POSITION                    0x00000001
#define _IPC12_T7IP1_MASK                        0x00000002
#define _IPC12_T7IP1_LENGTH                      0x00000001

#define _IPC12_T7IP2_POSITION                    0x00000002
#define _IPC12_T7IP2_MASK                        0x00000004
#define _IPC12_T7IP2_LENGTH                      0x00000001

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

#define _IPC12_T8IP0_POSITION                    0x0000000C
#define _IPC12_T8IP0_MASK                        0x00001000
#define _IPC12_T8IP0_LENGTH                      0x00000001

#define _IPC12_T8IP1_POSITION                    0x0000000D
#define _IPC12_T8IP1_MASK                        0x00002000
#define _IPC12_T8IP1_LENGTH                      0x00000001

#define _IPC12_T8IP2_POSITION                    0x0000000E
#define _IPC12_T8IP2_MASK                        0x00004000
#define _IPC12_T8IP2_LENGTH                      0x00000001

#define _IPC13_T9IP_POSITION                     0x00000000
#define _IPC13_T9IP_MASK                         0x00000007
#define _IPC13_T9IP_LENGTH                       0x00000003

#define _IPC13_INT3IP_POSITION                   0x00000004
#define _IPC13_INT3IP_MASK                       0x00000070
#define _IPC13_INT3IP_LENGTH                     0x00000003

#define _IPC13_INT4IP_POSITION                   0x00000008
#define _IPC13_INT4IP_MASK                       0x00000700
#define _IPC13_INT4IP_LENGTH                     0x00000003

#define _IPC13_T9IP0_POSITION                    0x00000000
#define _IPC13_T9IP0_MASK                        0x00000001
#define _IPC13_T9IP0_LENGTH                      0x00000001

#define _IPC13_T9IP1_POSITION                    0x00000001
#define _IPC13_T9IP1_MASK                        0x00000002
#define _IPC13_T9IP1_LENGTH                      0x00000001

#define _IPC13_T9IP2_POSITION                    0x00000002
#define _IPC13_T9IP2_MASK                        0x00000004
#define _IPC13_T9IP2_LENGTH                      0x00000001

#define _IPC13_INT3IP0_POSITION                  0x00000004
#define _IPC13_INT3IP0_MASK                      0x00000010
#define _IPC13_INT3IP0_LENGTH                    0x00000001

#define _IPC13_INT3IP1_POSITION                  0x00000005
#define _IPC13_INT3IP1_MASK                      0x00000020
#define _IPC13_INT3IP1_LENGTH                    0x00000001

#define _IPC13_INT3IP2_POSITION                  0x00000006
#define _IPC13_INT3IP2_MASK                      0x00000040
#define _IPC13_INT3IP2_LENGTH                    0x00000001

#define _IPC13_INT4IP0_POSITION                  0x00000008
#define _IPC13_INT4IP0_MASK                      0x00000100
#define _IPC13_INT4IP0_LENGTH                    0x00000001

#define _IPC13_INT4IP1_POSITION                  0x00000009
#define _IPC13_INT4IP1_MASK                      0x00000200
#define _IPC13_INT4IP1_LENGTH                    0x00000001

#define _IPC13_INT4IP2_POSITION                  0x0000000A
#define _IPC13_INT4IP2_MASK                      0x00000400
#define _IPC13_INT4IP2_LENGTH                    0x00000001

#define _IPC15_DMA5IP_POSITION                   0x00000004
#define _IPC15_DMA5IP_MASK                       0x00000070
#define _IPC15_DMA5IP_LENGTH                     0x00000003

#define _IPC15_DMA5IP0_POSITION                  0x00000004
#define _IPC15_DMA5IP0_MASK                      0x00000010
#define _IPC15_DMA5IP0_LENGTH                    0x00000001

#define _IPC15_DMA5IP1_POSITION                  0x00000005
#define _IPC15_DMA5IP1_MASK                      0x00000020
#define _IPC15_DMA5IP1_LENGTH                    0x00000001

#define _IPC15_DMA5IP2_POSITION                  0x00000006
#define _IPC15_DMA5IP2_MASK                      0x00000040
#define _IPC15_DMA5IP2_LENGTH                    0x00000001

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

#define _IPC17_DMA6IP_POSITION                   0x00000000
#define _IPC17_DMA6IP_MASK                       0x00000007
#define _IPC17_DMA6IP_LENGTH                     0x00000003

#define _IPC17_DMA7IP_POSITION                   0x00000004
#define _IPC17_DMA7IP_MASK                       0x00000070
#define _IPC17_DMA7IP_LENGTH                     0x00000003

#define _IPC17_C1TXIP_POSITION                   0x00000008
#define _IPC17_C1TXIP_MASK                       0x00000700
#define _IPC17_C1TXIP_LENGTH                     0x00000003

#define _IPC17_DMA6IP0_POSITION                  0x00000000
#define _IPC17_DMA6IP0_MASK                      0x00000001
#define _IPC17_DMA6IP0_LENGTH                    0x00000001

#define _IPC17_DMA6IP1_POSITION                  0x00000001
#define _IPC17_DMA6IP1_MASK                      0x00000002
#define _IPC17_DMA6IP1_LENGTH                    0x00000001

#define _IPC17_DMA6IP2_POSITION                  0x00000002
#define _IPC17_DMA6IP2_MASK                      0x00000004
#define _IPC17_DMA6IP2_LENGTH                    0x00000001

#define _IPC17_DMA7IP0_POSITION                  0x00000004
#define _IPC17_DMA7IP0_MASK                      0x00000010
#define _IPC17_DMA7IP0_LENGTH                    0x00000001

#define _IPC17_DMA7IP1_POSITION                  0x00000005
#define _IPC17_DMA7IP1_MASK                      0x00000020
#define _IPC17_DMA7IP1_LENGTH                    0x00000001

#define _IPC17_DMA7IP2_POSITION                  0x00000006
#define _IPC17_DMA7IP2_MASK                      0x00000040
#define _IPC17_DMA7IP2_LENGTH                    0x00000001

#define _IPC17_C1TXIP0_POSITION                  0x00000008
#define _IPC17_C1TXIP0_MASK                      0x00000100
#define _IPC17_C1TXIP0_LENGTH                    0x00000001

#define _IPC17_C1TXIP1_POSITION                  0x00000009
#define _IPC17_C1TXIP1_MASK                      0x00000200
#define _IPC17_C1TXIP1_LENGTH                    0x00000001

#define _IPC17_C1TXIP2_POSITION                  0x0000000A
#define _IPC17_C1TXIP2_MASK                      0x00000400
#define _IPC17_C1TXIP2_LENGTH                    0x00000001

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

#define _T6CON_TCS_POSITION                      0x00000001
#define _T6CON_TCS_MASK                          0x00000002
#define _T6CON_TCS_LENGTH                        0x00000001

#define _T6CON_T32_POSITION                      0x00000003
#define _T6CON_T32_MASK                          0x00000008
#define _T6CON_T32_LENGTH                        0x00000001

#define _T6CON_TCKPS_POSITION                    0x00000004
#define _T6CON_TCKPS_MASK                        0x00000030
#define _T6CON_TCKPS_LENGTH                      0x00000002

#define _T6CON_TGATE_POSITION                    0x00000006
#define _T6CON_TGATE_MASK                        0x00000040
#define _T6CON_TGATE_LENGTH                      0x00000001

#define _T6CON_TSIDL_POSITION                    0x0000000D
#define _T6CON_TSIDL_MASK                        0x00002000
#define _T6CON_TSIDL_LENGTH                      0x00000001

#define _T6CON_TON_POSITION                      0x0000000F
#define _T6CON_TON_MASK                          0x00008000
#define _T6CON_TON_LENGTH                        0x00000001

#define _T6CON_TCKPS0_POSITION                   0x00000004
#define _T6CON_TCKPS0_MASK                       0x00000010
#define _T6CON_TCKPS0_LENGTH                     0x00000001

#define _T6CON_TCKPS1_POSITION                   0x00000005
#define _T6CON_TCKPS1_MASK                       0x00000020
#define _T6CON_TCKPS1_LENGTH                     0x00000001

#define _T7CON_TCS_POSITION                      0x00000001
#define _T7CON_TCS_MASK                          0x00000002
#define _T7CON_TCS_LENGTH                        0x00000001

#define _T7CON_TCKPS_POSITION                    0x00000004
#define _T7CON_TCKPS_MASK                        0x00000030
#define _T7CON_TCKPS_LENGTH                      0x00000002

#define _T7CON_TGATE_POSITION                    0x00000006
#define _T7CON_TGATE_MASK                        0x00000040
#define _T7CON_TGATE_LENGTH                      0x00000001

#define _T7CON_TSIDL_POSITION                    0x0000000D
#define _T7CON_TSIDL_MASK                        0x00002000
#define _T7CON_TSIDL_LENGTH                      0x00000001

#define _T7CON_TON_POSITION                      0x0000000F
#define _T7CON_TON_MASK                          0x00008000
#define _T7CON_TON_LENGTH                        0x00000001

#define _T7CON_TCKPS0_POSITION                   0x00000004
#define _T7CON_TCKPS0_MASK                       0x00000010
#define _T7CON_TCKPS0_LENGTH                     0x00000001

#define _T7CON_TCKPS1_POSITION                   0x00000005
#define _T7CON_TCKPS1_MASK                       0x00000020
#define _T7CON_TCKPS1_LENGTH                     0x00000001

#define _T8CON_TCS_POSITION                      0x00000001
#define _T8CON_TCS_MASK                          0x00000002
#define _T8CON_TCS_LENGTH                        0x00000001

#define _T8CON_T32_POSITION                      0x00000003
#define _T8CON_T32_MASK                          0x00000008
#define _T8CON_T32_LENGTH                        0x00000001

#define _T8CON_TCKPS_POSITION                    0x00000004
#define _T8CON_TCKPS_MASK                        0x00000030
#define _T8CON_TCKPS_LENGTH                      0x00000002

#define _T8CON_TGATE_POSITION                    0x00000006
#define _T8CON_TGATE_MASK                        0x00000040
#define _T8CON_TGATE_LENGTH                      0x00000001

#define _T8CON_TSIDL_POSITION                    0x0000000D
#define _T8CON_TSIDL_MASK                        0x00002000
#define _T8CON_TSIDL_LENGTH                      0x00000001

#define _T8CON_TON_POSITION                      0x0000000F
#define _T8CON_TON_MASK                          0x00008000
#define _T8CON_TON_LENGTH                        0x00000001

#define _T8CON_TCKPS0_POSITION                   0x00000004
#define _T8CON_TCKPS0_MASK                       0x00000010
#define _T8CON_TCKPS0_LENGTH                     0x00000001

#define _T8CON_TCKPS1_POSITION                   0x00000005
#define _T8CON_TCKPS1_MASK                       0x00000020
#define _T8CON_TCKPS1_LENGTH                     0x00000001

#define _T9CON_TCS_POSITION                      0x00000001
#define _T9CON_TCS_MASK                          0x00000002
#define _T9CON_TCS_LENGTH                        0x00000001

#define _T9CON_TCKPS_POSITION                    0x00000004
#define _T9CON_TCKPS_MASK                        0x00000030
#define _T9CON_TCKPS_LENGTH                      0x00000002

#define _T9CON_TGATE_POSITION                    0x00000006
#define _T9CON_TGATE_MASK                        0x00000040
#define _T9CON_TGATE_LENGTH                      0x00000001

#define _T9CON_TSIDL_POSITION                    0x0000000D
#define _T9CON_TSIDL_MASK                        0x00002000
#define _T9CON_TSIDL_LENGTH                      0x00000001

#define _T9CON_TON_POSITION                      0x0000000F
#define _T9CON_TON_MASK                          0x00008000
#define _T9CON_TON_LENGTH                        0x00000001

#define _T9CON_TCKPS0_POSITION                   0x00000004
#define _T9CON_TCKPS0_MASK                       0x00000010
#define _T9CON_TCKPS0_LENGTH                     0x00000001

#define _T9CON_TCKPS1_POSITION                   0x00000005
#define _T9CON_TCKPS1_MASK                       0x00000020
#define _T9CON_TCKPS1_LENGTH                     0x00000001

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

#define _IC4CON_ICM_POSITION                     0x00000000
#define _IC4CON_ICM_MASK                         0x00000007
#define _IC4CON_ICM_LENGTH                       0x00000003

#define _IC4CON_ICBNE_POSITION                   0x00000003
#define _IC4CON_ICBNE_MASK                       0x00000008
#define _IC4CON_ICBNE_LENGTH                     0x00000001

#define _IC4CON_ICOV_POSITION                    0x00000004
#define _IC4CON_ICOV_MASK                        0x00000010
#define _IC4CON_ICOV_LENGTH                      0x00000001

#define _IC4CON_ICI_POSITION                     0x00000005
#define _IC4CON_ICI_MASK                         0x00000060
#define _IC4CON_ICI_LENGTH                       0x00000002

#define _IC4CON_ICTMR_POSITION                   0x00000007
#define _IC4CON_ICTMR_MASK                       0x00000080
#define _IC4CON_ICTMR_LENGTH                     0x00000001

#define _IC4CON_ICSIDL_POSITION                  0x0000000D
#define _IC4CON_ICSIDL_MASK                      0x00002000
#define _IC4CON_ICSIDL_LENGTH                    0x00000001

#define _IC4CON_ICM0_POSITION                    0x00000000
#define _IC4CON_ICM0_MASK                        0x00000001
#define _IC4CON_ICM0_LENGTH                      0x00000001

#define _IC4CON_ICM1_POSITION                    0x00000001
#define _IC4CON_ICM1_MASK                        0x00000002
#define _IC4CON_ICM1_LENGTH                      0x00000001

#define _IC4CON_ICM2_POSITION                    0x00000002
#define _IC4CON_ICM2_MASK                        0x00000004
#define _IC4CON_ICM2_LENGTH                      0x00000001

#define _IC4CON_ICI0_POSITION                    0x00000005
#define _IC4CON_ICI0_MASK                        0x00000020
#define _IC4CON_ICI0_LENGTH                      0x00000001

#define _IC4CON_ICI1_POSITION                    0x00000006
#define _IC4CON_ICI1_MASK                        0x00000040
#define _IC4CON_ICI1_LENGTH                      0x00000001

#define _IC5CON_ICM_POSITION                     0x00000000
#define _IC5CON_ICM_MASK                         0x00000007
#define _IC5CON_ICM_LENGTH                       0x00000003

#define _IC5CON_ICBNE_POSITION                   0x00000003
#define _IC5CON_ICBNE_MASK                       0x00000008
#define _IC5CON_ICBNE_LENGTH                     0x00000001

#define _IC5CON_ICOV_POSITION                    0x00000004
#define _IC5CON_ICOV_MASK                        0x00000010
#define _IC5CON_ICOV_LENGTH                      0x00000001

#define _IC5CON_ICI_POSITION                     0x00000005
#define _IC5CON_ICI_MASK                         0x00000060
#define _IC5CON_ICI_LENGTH                       0x00000002

#define _IC5CON_ICTMR_POSITION                   0x00000007
#define _IC5CON_ICTMR_MASK                       0x00000080
#define _IC5CON_ICTMR_LENGTH                     0x00000001

#define _IC5CON_ICSIDL_POSITION                  0x0000000D
#define _IC5CON_ICSIDL_MASK                      0x00002000
#define _IC5CON_ICSIDL_LENGTH                    0x00000001

#define _IC5CON_ICM0_POSITION                    0x00000000
#define _IC5CON_ICM0_MASK                        0x00000001
#define _IC5CON_ICM0_LENGTH                      0x00000001

#define _IC5CON_ICM1_POSITION                    0x00000001
#define _IC5CON_ICM1_MASK                        0x00000002
#define _IC5CON_ICM1_LENGTH                      0x00000001

#define _IC5CON_ICM2_POSITION                    0x00000002
#define _IC5CON_ICM2_MASK                        0x00000004
#define _IC5CON_ICM2_LENGTH                      0x00000001

#define _IC5CON_ICI0_POSITION                    0x00000005
#define _IC5CON_ICI0_MASK                        0x00000020
#define _IC5CON_ICI0_LENGTH                      0x00000001

#define _IC5CON_ICI1_POSITION                    0x00000006
#define _IC5CON_ICI1_MASK                        0x00000040
#define _IC5CON_ICI1_LENGTH                      0x00000001

#define _IC6CON_ICM_POSITION                     0x00000000
#define _IC6CON_ICM_MASK                         0x00000007
#define _IC6CON_ICM_LENGTH                       0x00000003

#define _IC6CON_ICBNE_POSITION                   0x00000003
#define _IC6CON_ICBNE_MASK                       0x00000008
#define _IC6CON_ICBNE_LENGTH                     0x00000001

#define _IC6CON_ICOV_POSITION                    0x00000004
#define _IC6CON_ICOV_MASK                        0x00000010
#define _IC6CON_ICOV_LENGTH                      0x00000001

#define _IC6CON_ICI_POSITION                     0x00000005
#define _IC6CON_ICI_MASK                         0x00000060
#define _IC6CON_ICI_LENGTH                       0x00000002

#define _IC6CON_ICTMR_POSITION                   0x00000007
#define _IC6CON_ICTMR_MASK                       0x00000080
#define _IC6CON_ICTMR_LENGTH                     0x00000001

#define _IC6CON_ICSIDL_POSITION                  0x0000000D
#define _IC6CON_ICSIDL_MASK                      0x00002000
#define _IC6CON_ICSIDL_LENGTH                    0x00000001

#define _IC6CON_ICM0_POSITION                    0x00000000
#define _IC6CON_ICM0_MASK                        0x00000001
#define _IC6CON_ICM0_LENGTH                      0x00000001

#define _IC6CON_ICM1_POSITION                    0x00000001
#define _IC6CON_ICM1_MASK                        0x00000002
#define _IC6CON_ICM1_LENGTH                      0x00000001

#define _IC6CON_ICM2_POSITION                    0x00000002
#define _IC6CON_ICM2_MASK                        0x00000004
#define _IC6CON_ICM2_LENGTH                      0x00000001

#define _IC6CON_ICI0_POSITION                    0x00000005
#define _IC6CON_ICI0_MASK                        0x00000020
#define _IC6CON_ICI0_LENGTH                      0x00000001

#define _IC6CON_ICI1_POSITION                    0x00000006
#define _IC6CON_ICI1_MASK                        0x00000040
#define _IC6CON_ICI1_LENGTH                      0x00000001

#define _IC7CON_ICM_POSITION                     0x00000000
#define _IC7CON_ICM_MASK                         0x00000007
#define _IC7CON_ICM_LENGTH                       0x00000003

#define _IC7CON_ICBNE_POSITION                   0x00000003
#define _IC7CON_ICBNE_MASK                       0x00000008
#define _IC7CON_ICBNE_LENGTH                     0x00000001

#define _IC7CON_ICOV_POSITION                    0x00000004
#define _IC7CON_ICOV_MASK                        0x00000010
#define _IC7CON_ICOV_LENGTH                      0x00000001

#define _IC7CON_ICI_POSITION                     0x00000005
#define _IC7CON_ICI_MASK                         0x00000060
#define _IC7CON_ICI_LENGTH                       0x00000002

#define _IC7CON_ICTMR_POSITION                   0x00000007
#define _IC7CON_ICTMR_MASK                       0x00000080
#define _IC7CON_ICTMR_LENGTH                     0x00000001

#define _IC7CON_ICSIDL_POSITION                  0x0000000D
#define _IC7CON_ICSIDL_MASK                      0x00002000
#define _IC7CON_ICSIDL_LENGTH                    0x00000001

#define _IC7CON_ICM0_POSITION                    0x00000000
#define _IC7CON_ICM0_MASK                        0x00000001
#define _IC7CON_ICM0_LENGTH                      0x00000001

#define _IC7CON_ICM1_POSITION                    0x00000001
#define _IC7CON_ICM1_MASK                        0x00000002
#define _IC7CON_ICM1_LENGTH                      0x00000001

#define _IC7CON_ICM2_POSITION                    0x00000002
#define _IC7CON_ICM2_MASK                        0x00000004
#define _IC7CON_ICM2_LENGTH                      0x00000001

#define _IC7CON_ICI0_POSITION                    0x00000005
#define _IC7CON_ICI0_MASK                        0x00000020
#define _IC7CON_ICI0_LENGTH                      0x00000001

#define _IC7CON_ICI1_POSITION                    0x00000006
#define _IC7CON_ICI1_MASK                        0x00000040
#define _IC7CON_ICI1_LENGTH                      0x00000001

#define _IC8CON_ICM_POSITION                     0x00000000
#define _IC8CON_ICM_MASK                         0x00000007
#define _IC8CON_ICM_LENGTH                       0x00000003

#define _IC8CON_ICBNE_POSITION                   0x00000003
#define _IC8CON_ICBNE_MASK                       0x00000008
#define _IC8CON_ICBNE_LENGTH                     0x00000001

#define _IC8CON_ICOV_POSITION                    0x00000004
#define _IC8CON_ICOV_MASK                        0x00000010
#define _IC8CON_ICOV_LENGTH                      0x00000001

#define _IC8CON_ICI_POSITION                     0x00000005
#define _IC8CON_ICI_MASK                         0x00000060
#define _IC8CON_ICI_LENGTH                       0x00000002

#define _IC8CON_ICTMR_POSITION                   0x00000007
#define _IC8CON_ICTMR_MASK                       0x00000080
#define _IC8CON_ICTMR_LENGTH                     0x00000001

#define _IC8CON_ICSIDL_POSITION                  0x0000000D
#define _IC8CON_ICSIDL_MASK                      0x00002000
#define _IC8CON_ICSIDL_LENGTH                    0x00000001

#define _IC8CON_ICM0_POSITION                    0x00000000
#define _IC8CON_ICM0_MASK                        0x00000001
#define _IC8CON_ICM0_LENGTH                      0x00000001

#define _IC8CON_ICM1_POSITION                    0x00000001
#define _IC8CON_ICM1_MASK                        0x00000002
#define _IC8CON_ICM1_LENGTH                      0x00000001

#define _IC8CON_ICM2_POSITION                    0x00000002
#define _IC8CON_ICM2_MASK                        0x00000004
#define _IC8CON_ICM2_LENGTH                      0x00000001

#define _IC8CON_ICI0_POSITION                    0x00000005
#define _IC8CON_ICI0_MASK                        0x00000020
#define _IC8CON_ICI0_LENGTH                      0x00000001

#define _IC8CON_ICI1_POSITION                    0x00000006
#define _IC8CON_ICI1_MASK                        0x00000040
#define _IC8CON_ICI1_LENGTH                      0x00000001

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

#define _OC3CON_OCM_POSITION                     0x00000000
#define _OC3CON_OCM_MASK                         0x00000007
#define _OC3CON_OCM_LENGTH                       0x00000003

#define _OC3CON_OCTSEL_POSITION                  0x00000003
#define _OC3CON_OCTSEL_MASK                      0x00000008
#define _OC3CON_OCTSEL_LENGTH                    0x00000001

#define _OC3CON_OCFLT_POSITION                   0x00000004
#define _OC3CON_OCFLT_MASK                       0x00000010
#define _OC3CON_OCFLT_LENGTH                     0x00000001

#define _OC3CON_OCSIDL_POSITION                  0x0000000D
#define _OC3CON_OCSIDL_MASK                      0x00002000
#define _OC3CON_OCSIDL_LENGTH                    0x00000001

#define _OC3CON_OCM0_POSITION                    0x00000000
#define _OC3CON_OCM0_MASK                        0x00000001
#define _OC3CON_OCM0_LENGTH                      0x00000001

#define _OC3CON_OCM1_POSITION                    0x00000001
#define _OC3CON_OCM1_MASK                        0x00000002
#define _OC3CON_OCM1_LENGTH                      0x00000001

#define _OC3CON_OCM2_POSITION                    0x00000002
#define _OC3CON_OCM2_MASK                        0x00000004
#define _OC3CON_OCM2_LENGTH                      0x00000001

#define _OC4CON_OCM_POSITION                     0x00000000
#define _OC4CON_OCM_MASK                         0x00000007
#define _OC4CON_OCM_LENGTH                       0x00000003

#define _OC4CON_OCTSEL_POSITION                  0x00000003
#define _OC4CON_OCTSEL_MASK                      0x00000008
#define _OC4CON_OCTSEL_LENGTH                    0x00000001

#define _OC4CON_OCFLT_POSITION                   0x00000004
#define _OC4CON_OCFLT_MASK                       0x00000010
#define _OC4CON_OCFLT_LENGTH                     0x00000001

#define _OC4CON_OCSIDL_POSITION                  0x0000000D
#define _OC4CON_OCSIDL_MASK                      0x00002000
#define _OC4CON_OCSIDL_LENGTH                    0x00000001

#define _OC4CON_OCM0_POSITION                    0x00000000
#define _OC4CON_OCM0_MASK                        0x00000001
#define _OC4CON_OCM0_LENGTH                      0x00000001

#define _OC4CON_OCM1_POSITION                    0x00000001
#define _OC4CON_OCM1_MASK                        0x00000002
#define _OC4CON_OCM1_LENGTH                      0x00000001

#define _OC4CON_OCM2_POSITION                    0x00000002
#define _OC4CON_OCM2_MASK                        0x00000004
#define _OC4CON_OCM2_LENGTH                      0x00000001

#define _OC5CON_OCM_POSITION                     0x00000000
#define _OC5CON_OCM_MASK                         0x00000007
#define _OC5CON_OCM_LENGTH                       0x00000003

#define _OC5CON_OCTSEL_POSITION                  0x00000003
#define _OC5CON_OCTSEL_MASK                      0x00000008
#define _OC5CON_OCTSEL_LENGTH                    0x00000001

#define _OC5CON_OCFLT_POSITION                   0x00000004
#define _OC5CON_OCFLT_MASK                       0x00000010
#define _OC5CON_OCFLT_LENGTH                     0x00000001

#define _OC5CON_OCSIDL_POSITION                  0x0000000D
#define _OC5CON_OCSIDL_MASK                      0x00002000
#define _OC5CON_OCSIDL_LENGTH                    0x00000001

#define _OC5CON_OCM0_POSITION                    0x00000000
#define _OC5CON_OCM0_MASK                        0x00000001
#define _OC5CON_OCM0_LENGTH                      0x00000001

#define _OC5CON_OCM1_POSITION                    0x00000001
#define _OC5CON_OCM1_MASK                        0x00000002
#define _OC5CON_OCM1_LENGTH                      0x00000001

#define _OC5CON_OCM2_POSITION                    0x00000002
#define _OC5CON_OCM2_MASK                        0x00000004
#define _OC5CON_OCM2_LENGTH                      0x00000001

#define _OC6CON_OCM_POSITION                     0x00000000
#define _OC6CON_OCM_MASK                         0x00000007
#define _OC6CON_OCM_LENGTH                       0x00000003

#define _OC6CON_OCTSEL_POSITION                  0x00000003
#define _OC6CON_OCTSEL_MASK                      0x00000008
#define _OC6CON_OCTSEL_LENGTH                    0x00000001

#define _OC6CON_OCFLT_POSITION                   0x00000004
#define _OC6CON_OCFLT_MASK                       0x00000010
#define _OC6CON_OCFLT_LENGTH                     0x00000001

#define _OC6CON_OCSIDL_POSITION                  0x0000000D
#define _OC6CON_OCSIDL_MASK                      0x00002000
#define _OC6CON_OCSIDL_LENGTH                    0x00000001

#define _OC6CON_OCM0_POSITION                    0x00000000
#define _OC6CON_OCM0_MASK                        0x00000001
#define _OC6CON_OCM0_LENGTH                      0x00000001

#define _OC6CON_OCM1_POSITION                    0x00000001
#define _OC6CON_OCM1_MASK                        0x00000002
#define _OC6CON_OCM1_LENGTH                      0x00000001

#define _OC6CON_OCM2_POSITION                    0x00000002
#define _OC6CON_OCM2_MASK                        0x00000004
#define _OC6CON_OCM2_LENGTH                      0x00000001

#define _OC7CON_OCM_POSITION                     0x00000000
#define _OC7CON_OCM_MASK                         0x00000007
#define _OC7CON_OCM_LENGTH                       0x00000003

#define _OC7CON_OCTSEL_POSITION                  0x00000003
#define _OC7CON_OCTSEL_MASK                      0x00000008
#define _OC7CON_OCTSEL_LENGTH                    0x00000001

#define _OC7CON_OCFLT_POSITION                   0x00000004
#define _OC7CON_OCFLT_MASK                       0x00000010
#define _OC7CON_OCFLT_LENGTH                     0x00000001

#define _OC7CON_OCSIDL_POSITION                  0x0000000D
#define _OC7CON_OCSIDL_MASK                      0x00002000
#define _OC7CON_OCSIDL_LENGTH                    0x00000001

#define _OC7CON_OCM0_POSITION                    0x00000000
#define _OC7CON_OCM0_MASK                        0x00000001
#define _OC7CON_OCM0_LENGTH                      0x00000001

#define _OC7CON_OCM1_POSITION                    0x00000001
#define _OC7CON_OCM1_MASK                        0x00000002
#define _OC7CON_OCM1_LENGTH                      0x00000001

#define _OC7CON_OCM2_POSITION                    0x00000002
#define _OC7CON_OCM2_MASK                        0x00000004
#define _OC7CON_OCM2_LENGTH                      0x00000001

#define _OC8CON_OCM_POSITION                     0x00000000
#define _OC8CON_OCM_MASK                         0x00000007
#define _OC8CON_OCM_LENGTH                       0x00000003

#define _OC8CON_OCTSEL_POSITION                  0x00000003
#define _OC8CON_OCTSEL_MASK                      0x00000008
#define _OC8CON_OCTSEL_LENGTH                    0x00000001

#define _OC8CON_OCFLT_POSITION                   0x00000004
#define _OC8CON_OCFLT_MASK                       0x00000010
#define _OC8CON_OCFLT_LENGTH                     0x00000001

#define _OC8CON_OCSIDL_POSITION                  0x0000000D
#define _OC8CON_OCSIDL_MASK                      0x00002000
#define _OC8CON_OCSIDL_LENGTH                    0x00000001

#define _OC8CON_OCM0_POSITION                    0x00000000
#define _OC8CON_OCM0_MASK                        0x00000001
#define _OC8CON_OCM0_LENGTH                      0x00000001

#define _OC8CON_OCM1_POSITION                    0x00000001
#define _OC8CON_OCM1_MASK                        0x00000002
#define _OC8CON_OCM1_LENGTH                      0x00000001

#define _OC8CON_OCM2_POSITION                    0x00000002
#define _OC8CON_OCM2_MASK                        0x00000004
#define _OC8CON_OCM2_LENGTH                      0x00000001

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

#define _I2CCON_SEN_POSITION                     0x00000000
#define _I2CCON_SEN_MASK                         0x00000001
#define _I2CCON_SEN_LENGTH                       0x00000001

#define _I2CCON_RSEN_POSITION                    0x00000001
#define _I2CCON_RSEN_MASK                        0x00000002
#define _I2CCON_RSEN_LENGTH                      0x00000001

#define _I2CCON_PEN_POSITION                     0x00000002
#define _I2CCON_PEN_MASK                         0x00000004
#define _I2CCON_PEN_LENGTH                       0x00000001

#define _I2CCON_RCEN_POSITION                    0x00000003
#define _I2CCON_RCEN_MASK                        0x00000008
#define _I2CCON_RCEN_LENGTH                      0x00000001

#define _I2CCON_ACKEN_POSITION                   0x00000004
#define _I2CCON_ACKEN_MASK                       0x00000010
#define _I2CCON_ACKEN_LENGTH                     0x00000001

#define _I2CCON_ACKDT_POSITION                   0x00000005
#define _I2CCON_ACKDT_MASK                       0x00000020
#define _I2CCON_ACKDT_LENGTH                     0x00000001

#define _I2CCON_STREN_POSITION                   0x00000006
#define _I2CCON_STREN_MASK                       0x00000040
#define _I2CCON_STREN_LENGTH                     0x00000001

#define _I2CCON_GCEN_POSITION                    0x00000007
#define _I2CCON_GCEN_MASK                        0x00000080
#define _I2CCON_GCEN_LENGTH                      0x00000001

#define _I2CCON_SMEN_POSITION                    0x00000008
#define _I2CCON_SMEN_MASK                        0x00000100
#define _I2CCON_SMEN_LENGTH                      0x00000001

#define _I2CCON_DISSLW_POSITION                  0x00000009
#define _I2CCON_DISSLW_MASK                      0x00000200
#define _I2CCON_DISSLW_LENGTH                    0x00000001

#define _I2CCON_A10M_POSITION                    0x0000000A
#define _I2CCON_A10M_MASK                        0x00000400
#define _I2CCON_A10M_LENGTH                      0x00000001

#define _I2CCON_IPMIEN_POSITION                  0x0000000B
#define _I2CCON_IPMIEN_MASK                      0x00000800
#define _I2CCON_IPMIEN_LENGTH                    0x00000001

#define _I2CCON_SCLREL_POSITION                  0x0000000C
#define _I2CCON_SCLREL_MASK                      0x00001000
#define _I2CCON_SCLREL_LENGTH                    0x00000001

#define _I2CCON_I2CSIDL_POSITION                 0x0000000D
#define _I2CCON_I2CSIDL_MASK                     0x00002000
#define _I2CCON_I2CSIDL_LENGTH                   0x00000001

#define _I2CCON_I2CEN_POSITION                   0x0000000F
#define _I2CCON_I2CEN_MASK                       0x00008000
#define _I2CCON_I2CEN_LENGTH                     0x00000001

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

#define _I2CSTAT_TBF_POSITION                    0x00000000
#define _I2CSTAT_TBF_MASK                        0x00000001
#define _I2CSTAT_TBF_LENGTH                      0x00000001

#define _I2CSTAT_RBF_POSITION                    0x00000001
#define _I2CSTAT_RBF_MASK                        0x00000002
#define _I2CSTAT_RBF_LENGTH                      0x00000001

#define _I2CSTAT_R_W_POSITION                    0x00000002
#define _I2CSTAT_R_W_MASK                        0x00000004
#define _I2CSTAT_R_W_LENGTH                      0x00000001

#define _I2CSTAT_S_POSITION                      0x00000003
#define _I2CSTAT_S_MASK                          0x00000008
#define _I2CSTAT_S_LENGTH                        0x00000001

#define _I2CSTAT_P_POSITION                      0x00000004
#define _I2CSTAT_P_MASK                          0x00000010
#define _I2CSTAT_P_LENGTH                        0x00000001

#define _I2CSTAT_D_A_POSITION                    0x00000005
#define _I2CSTAT_D_A_MASK                        0x00000020
#define _I2CSTAT_D_A_LENGTH                      0x00000001

#define _I2CSTAT_I2COV_POSITION                  0x00000006
#define _I2CSTAT_I2COV_MASK                      0x00000040
#define _I2CSTAT_I2COV_LENGTH                    0x00000001

#define _I2CSTAT_IWCOL_POSITION                  0x00000007
#define _I2CSTAT_IWCOL_MASK                      0x00000080
#define _I2CSTAT_IWCOL_LENGTH                    0x00000001

#define _I2CSTAT_ADD10_POSITION                  0x00000008
#define _I2CSTAT_ADD10_MASK                      0x00000100
#define _I2CSTAT_ADD10_LENGTH                    0x00000001

#define _I2CSTAT_GCSTAT_POSITION                 0x00000009
#define _I2CSTAT_GCSTAT_MASK                     0x00000200
#define _I2CSTAT_GCSTAT_LENGTH                   0x00000001

#define _I2CSTAT_BCL_POSITION                    0x0000000A
#define _I2CSTAT_BCL_MASK                        0x00000400
#define _I2CSTAT_BCL_LENGTH                      0x00000001

#define _I2CSTAT_TRSTAT_POSITION                 0x0000000E
#define _I2CSTAT_TRSTAT_MASK                     0x00004000
#define _I2CSTAT_TRSTAT_LENGTH                   0x00000001

#define _I2CSTAT_ACKSTAT_POSITION                0x0000000F
#define _I2CSTAT_ACKSTAT_MASK                    0x00008000
#define _I2CSTAT_ACKSTAT_LENGTH                  0x00000001

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

#define _U1TXREG_UTXREG0_POSITION                0x00000000
#define _U1TXREG_UTXREG0_MASK                    0x00000001
#define _U1TXREG_UTXREG0_LENGTH                  0x00000001

#define _U1TXREG_UTXREG1_POSITION                0x00000001
#define _U1TXREG_UTXREG1_MASK                    0x00000002
#define _U1TXREG_UTXREG1_LENGTH                  0x00000001

#define _U1TXREG_UTXREG2_POSITION                0x00000002
#define _U1TXREG_UTXREG2_MASK                    0x00000004
#define _U1TXREG_UTXREG2_LENGTH                  0x00000001

#define _U1TXREG_UTXREG3_POSITION                0x00000003
#define _U1TXREG_UTXREG3_MASK                    0x00000008
#define _U1TXREG_UTXREG3_LENGTH                  0x00000001

#define _U1TXREG_UTXREG4_POSITION                0x00000004
#define _U1TXREG_UTXREG4_MASK                    0x00000010
#define _U1TXREG_UTXREG4_LENGTH                  0x00000001

#define _U1TXREG_UTXREG5_POSITION                0x00000005
#define _U1TXREG_UTXREG5_MASK                    0x00000020
#define _U1TXREG_UTXREG5_LENGTH                  0x00000001

#define _U1TXREG_UTXREG6_POSITION                0x00000006
#define _U1TXREG_UTXREG6_MASK                    0x00000040
#define _U1TXREG_UTXREG6_LENGTH                  0x00000001

#define _U1TXREG_UTXREG7_POSITION                0x00000007
#define _U1TXREG_UTXREG7_MASK                    0x00000080
#define _U1TXREG_UTXREG7_LENGTH                  0x00000001

#define _U1TXREG_UTXREG8_POSITION                0x00000008
#define _U1TXREG_UTXREG8_MASK                    0x00000100
#define _U1TXREG_UTXREG8_LENGTH                  0x00000001

#define _U1RXREG_URXREG0_POSITION                0x00000000
#define _U1RXREG_URXREG0_MASK                    0x00000001
#define _U1RXREG_URXREG0_LENGTH                  0x00000001

#define _U1RXREG_URXREG1_POSITION                0x00000001
#define _U1RXREG_URXREG1_MASK                    0x00000002
#define _U1RXREG_URXREG1_LENGTH                  0x00000001

#define _U1RXREG_URXREG2_POSITION                0x00000002
#define _U1RXREG_URXREG2_MASK                    0x00000004
#define _U1RXREG_URXREG2_LENGTH                  0x00000001

#define _U1RXREG_URXREG3_POSITION                0x00000003
#define _U1RXREG_URXREG3_MASK                    0x00000008
#define _U1RXREG_URXREG3_LENGTH                  0x00000001

#define _U1RXREG_URXREG4_POSITION                0x00000004
#define _U1RXREG_URXREG4_MASK                    0x00000010
#define _U1RXREG_URXREG4_LENGTH                  0x00000001

#define _U1RXREG_URXREG5_POSITION                0x00000005
#define _U1RXREG_URXREG5_MASK                    0x00000020
#define _U1RXREG_URXREG5_LENGTH                  0x00000001

#define _U1RXREG_URXREG6_POSITION                0x00000006
#define _U1RXREG_URXREG6_MASK                    0x00000040
#define _U1RXREG_URXREG6_LENGTH                  0x00000001

#define _U1RXREG_URXREG7_POSITION                0x00000007
#define _U1RXREG_URXREG7_MASK                    0x00000080
#define _U1RXREG_URXREG7_LENGTH                  0x00000001

#define _U1RXREG_URXREG8_POSITION                0x00000008
#define _U1RXREG_URXREG8_MASK                    0x00000100
#define _U1RXREG_URXREG8_LENGTH                  0x00000001

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

#define _U2TXREG_UTXREG0_POSITION                0x00000000
#define _U2TXREG_UTXREG0_MASK                    0x00000001
#define _U2TXREG_UTXREG0_LENGTH                  0x00000001

#define _U2TXREG_UTXREG1_POSITION                0x00000001
#define _U2TXREG_UTXREG1_MASK                    0x00000002
#define _U2TXREG_UTXREG1_LENGTH                  0x00000001

#define _U2TXREG_UTXREG2_POSITION                0x00000002
#define _U2TXREG_UTXREG2_MASK                    0x00000004
#define _U2TXREG_UTXREG2_LENGTH                  0x00000001

#define _U2TXREG_UTXREG3_POSITION                0x00000003
#define _U2TXREG_UTXREG3_MASK                    0x00000008
#define _U2TXREG_UTXREG3_LENGTH                  0x00000001

#define _U2TXREG_UTXREG4_POSITION                0x00000004
#define _U2TXREG_UTXREG4_MASK                    0x00000010
#define _U2TXREG_UTXREG4_LENGTH                  0x00000001

#define _U2TXREG_UTXREG5_POSITION                0x00000005
#define _U2TXREG_UTXREG5_MASK                    0x00000020
#define _U2TXREG_UTXREG5_LENGTH                  0x00000001

#define _U2TXREG_UTXREG6_POSITION                0x00000006
#define _U2TXREG_UTXREG6_MASK                    0x00000040
#define _U2TXREG_UTXREG6_LENGTH                  0x00000001

#define _U2TXREG_UTXREG7_POSITION                0x00000007
#define _U2TXREG_UTXREG7_MASK                    0x00000080
#define _U2TXREG_UTXREG7_LENGTH                  0x00000001

#define _U2TXREG_UTXREG8_POSITION                0x00000008
#define _U2TXREG_UTXREG8_MASK                    0x00000100
#define _U2TXREG_UTXREG8_LENGTH                  0x00000001

#define _U2RXREG_URXREG0_POSITION                0x00000000
#define _U2RXREG_URXREG0_MASK                    0x00000001
#define _U2RXREG_URXREG0_LENGTH                  0x00000001

#define _U2RXREG_URXREG1_POSITION                0x00000001
#define _U2RXREG_URXREG1_MASK                    0x00000002
#define _U2RXREG_URXREG1_LENGTH                  0x00000001

#define _U2RXREG_URXREG2_POSITION                0x00000002
#define _U2RXREG_URXREG2_MASK                    0x00000004
#define _U2RXREG_URXREG2_LENGTH                  0x00000001

#define _U2RXREG_URXREG3_POSITION                0x00000003
#define _U2RXREG_URXREG3_MASK                    0x00000008
#define _U2RXREG_URXREG3_LENGTH                  0x00000001

#define _U2RXREG_URXREG4_POSITION                0x00000004
#define _U2RXREG_URXREG4_MASK                    0x00000010
#define _U2RXREG_URXREG4_LENGTH                  0x00000001

#define _U2RXREG_URXREG5_POSITION                0x00000005
#define _U2RXREG_URXREG5_MASK                    0x00000020
#define _U2RXREG_URXREG5_LENGTH                  0x00000001

#define _U2RXREG_URXREG6_POSITION                0x00000006
#define _U2RXREG_URXREG6_MASK                    0x00000040
#define _U2RXREG_URXREG6_LENGTH                  0x00000001

#define _U2RXREG_URXREG7_POSITION                0x00000007
#define _U2RXREG_URXREG7_MASK                    0x00000080
#define _U2RXREG_URXREG7_LENGTH                  0x00000001

#define _U2RXREG_URXREG8_POSITION                0x00000008
#define _U2RXREG_URXREG8_MASK                    0x00000100
#define _U2RXREG_URXREG8_LENGTH                  0x00000001

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

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SPISIDL_POSITION               0x0000000D
#define _SPI2STAT_SPISIDL_MASK                   0x00002000
#define _SPI2STAT_SPISIDL_LENGTH                 0x00000001

#define _SPI2STAT_SPIEN_POSITION                 0x0000000F
#define _SPI2STAT_SPIEN_MASK                     0x00008000
#define _SPI2STAT_SPIEN_LENGTH                   0x00000001

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

#define _TRISC_TRISC1_POSITION                   0x00000001
#define _TRISC_TRISC1_MASK                       0x00000002
#define _TRISC_TRISC1_LENGTH                     0x00000001

#define _TRISC_TRISC2_POSITION                   0x00000002
#define _TRISC_TRISC2_MASK                       0x00000004
#define _TRISC_TRISC2_LENGTH                     0x00000001

#define _TRISC_TRISC12_POSITION                  0x0000000C
#define _TRISC_TRISC12_MASK                      0x00001000
#define _TRISC_TRISC12_LENGTH                    0x00000001

#define _TRISC_TRISC13_POSITION                  0x0000000D
#define _TRISC_TRISC13_MASK                      0x00002000
#define _TRISC_TRISC13_LENGTH                    0x00000001

#define _TRISC_TRISC14_POSITION                  0x0000000E
#define _TRISC_TRISC14_MASK                      0x00004000
#define _TRISC_TRISC14_LENGTH                    0x00000001

#define _TRISC_TRISC15_POSITION                  0x0000000F
#define _TRISC_TRISC15_MASK                      0x00008000
#define _TRISC_TRISC15_LENGTH                    0x00000001

#define _PORTC_RC1_POSITION                      0x00000001
#define _PORTC_RC1_MASK                          0x00000002
#define _PORTC_RC1_LENGTH                        0x00000001

#define _PORTC_RC2_POSITION                      0x00000002
#define _PORTC_RC2_MASK                          0x00000004
#define _PORTC_RC2_LENGTH                        0x00000001

#define _PORTC_RC12_POSITION                     0x0000000C
#define _PORTC_RC12_MASK                         0x00001000
#define _PORTC_RC12_LENGTH                       0x00000001

#define _PORTC_RC13_POSITION                     0x0000000D
#define _PORTC_RC13_MASK                         0x00002000
#define _PORTC_RC13_LENGTH                       0x00000001

#define _PORTC_RC14_POSITION                     0x0000000E
#define _PORTC_RC14_MASK                         0x00004000
#define _PORTC_RC14_LENGTH                       0x00000001

#define _PORTC_RC15_POSITION                     0x0000000F
#define _PORTC_RC15_MASK                         0x00008000
#define _PORTC_RC15_LENGTH                       0x00000001

#define _LATC_LATC1_POSITION                     0x00000001
#define _LATC_LATC1_MASK                         0x00000002
#define _LATC_LATC1_LENGTH                       0x00000001

#define _LATC_LATC2_POSITION                     0x00000002
#define _LATC_LATC2_MASK                         0x00000004
#define _LATC_LATC2_LENGTH                       0x00000001

#define _LATC_LATC12_POSITION                    0x0000000C
#define _LATC_LATC12_MASK                        0x00001000
#define _LATC_LATC12_LENGTH                      0x00000001

#define _LATC_LATC13_POSITION                    0x0000000D
#define _LATC_LATC13_MASK                        0x00002000
#define _LATC_LATC13_LENGTH                      0x00000001

#define _LATC_LATC14_POSITION                    0x0000000E
#define _LATC_LATC14_MASK                        0x00004000
#define _LATC_LATC14_LENGTH                      0x00000001

#define _LATC_LATC15_POSITION                    0x0000000F
#define _LATC_LATC15_MASK                        0x00008000
#define _LATC_LATC15_LENGTH                      0x00000001

#define _TRISD_TRISD0_POSITION                   0x00000000
#define _TRISD_TRISD0_MASK                       0x00000001
#define _TRISD_TRISD0_LENGTH                     0x00000001

#define _TRISD_TRISD1_POSITION                   0x00000001
#define _TRISD_TRISD1_MASK                       0x00000002
#define _TRISD_TRISD1_LENGTH                     0x00000001

#define _TRISD_TRISD2_POSITION                   0x00000002
#define _TRISD_TRISD2_MASK                       0x00000004
#define _TRISD_TRISD2_LENGTH                     0x00000001

#define _TRISD_TRISD3_POSITION                   0x00000003
#define _TRISD_TRISD3_MASK                       0x00000008
#define _TRISD_TRISD3_LENGTH                     0x00000001

#define _TRISD_TRISD4_POSITION                   0x00000004
#define _TRISD_TRISD4_MASK                       0x00000010
#define _TRISD_TRISD4_LENGTH                     0x00000001

#define _TRISD_TRISD5_POSITION                   0x00000005
#define _TRISD_TRISD5_MASK                       0x00000020
#define _TRISD_TRISD5_LENGTH                     0x00000001

#define _TRISD_TRISD6_POSITION                   0x00000006
#define _TRISD_TRISD6_MASK                       0x00000040
#define _TRISD_TRISD6_LENGTH                     0x00000001

#define _TRISD_TRISD7_POSITION                   0x00000007
#define _TRISD_TRISD7_MASK                       0x00000080
#define _TRISD_TRISD7_LENGTH                     0x00000001

#define _TRISD_TRISD8_POSITION                   0x00000008
#define _TRISD_TRISD8_MASK                       0x00000100
#define _TRISD_TRISD8_LENGTH                     0x00000001

#define _TRISD_TRISD9_POSITION                   0x00000009
#define _TRISD_TRISD9_MASK                       0x00000200
#define _TRISD_TRISD9_LENGTH                     0x00000001

#define _TRISD_TRISD10_POSITION                  0x0000000A
#define _TRISD_TRISD10_MASK                      0x00000400
#define _TRISD_TRISD10_LENGTH                    0x00000001

#define _TRISD_TRISD11_POSITION                  0x0000000B
#define _TRISD_TRISD11_MASK                      0x00000800
#define _TRISD_TRISD11_LENGTH                    0x00000001

#define _PORTD_RD0_POSITION                      0x00000000
#define _PORTD_RD0_MASK                          0x00000001
#define _PORTD_RD0_LENGTH                        0x00000001

#define _PORTD_RD1_POSITION                      0x00000001
#define _PORTD_RD1_MASK                          0x00000002
#define _PORTD_RD1_LENGTH                        0x00000001

#define _PORTD_RD2_POSITION                      0x00000002
#define _PORTD_RD2_MASK                          0x00000004
#define _PORTD_RD2_LENGTH                        0x00000001

#define _PORTD_RD3_POSITION                      0x00000003
#define _PORTD_RD3_MASK                          0x00000008
#define _PORTD_RD3_LENGTH                        0x00000001

#define _PORTD_RD4_POSITION                      0x00000004
#define _PORTD_RD4_MASK                          0x00000010
#define _PORTD_RD4_LENGTH                        0x00000001

#define _PORTD_RD5_POSITION                      0x00000005
#define _PORTD_RD5_MASK                          0x00000020
#define _PORTD_RD5_LENGTH                        0x00000001

#define _PORTD_RD6_POSITION                      0x00000006
#define _PORTD_RD6_MASK                          0x00000040
#define _PORTD_RD6_LENGTH                        0x00000001

#define _PORTD_RD7_POSITION                      0x00000007
#define _PORTD_RD7_MASK                          0x00000080
#define _PORTD_RD7_LENGTH                        0x00000001

#define _PORTD_RD8_POSITION                      0x00000008
#define _PORTD_RD8_MASK                          0x00000100
#define _PORTD_RD8_LENGTH                        0x00000001

#define _PORTD_RD9_POSITION                      0x00000009
#define _PORTD_RD9_MASK                          0x00000200
#define _PORTD_RD9_LENGTH                        0x00000001

#define _PORTD_RD10_POSITION                     0x0000000A
#define _PORTD_RD10_MASK                         0x00000400
#define _PORTD_RD10_LENGTH                       0x00000001

#define _PORTD_RD11_POSITION                     0x0000000B
#define _PORTD_RD11_MASK                         0x00000800
#define _PORTD_RD11_LENGTH                       0x00000001

#define _LATD_LATD0_POSITION                     0x00000000
#define _LATD_LATD0_MASK                         0x00000001
#define _LATD_LATD0_LENGTH                       0x00000001

#define _LATD_LATD1_POSITION                     0x00000001
#define _LATD_LATD1_MASK                         0x00000002
#define _LATD_LATD1_LENGTH                       0x00000001

#define _LATD_LATD2_POSITION                     0x00000002
#define _LATD_LATD2_MASK                         0x00000004
#define _LATD_LATD2_LENGTH                       0x00000001

#define _LATD_LATD3_POSITION                     0x00000003
#define _LATD_LATD3_MASK                         0x00000008
#define _LATD_LATD3_LENGTH                       0x00000001

#define _LATD_LATD4_POSITION                     0x00000004
#define _LATD_LATD4_MASK                         0x00000010
#define _LATD_LATD4_LENGTH                       0x00000001

#define _LATD_LATD5_POSITION                     0x00000005
#define _LATD_LATD5_MASK                         0x00000020
#define _LATD_LATD5_LENGTH                       0x00000001

#define _LATD_LATD6_POSITION                     0x00000006
#define _LATD_LATD6_MASK                         0x00000040
#define _LATD_LATD6_LENGTH                       0x00000001

#define _LATD_LATD7_POSITION                     0x00000007
#define _LATD_LATD7_MASK                         0x00000080
#define _LATD_LATD7_LENGTH                       0x00000001

#define _LATD_LATD8_POSITION                     0x00000008
#define _LATD_LATD8_MASK                         0x00000100
#define _LATD_LATD8_LENGTH                       0x00000001

#define _LATD_LATD9_POSITION                     0x00000009
#define _LATD_LATD9_MASK                         0x00000200
#define _LATD_LATD9_LENGTH                       0x00000001

#define _LATD_LATD10_POSITION                    0x0000000A
#define _LATD_LATD10_MASK                        0x00000400
#define _LATD_LATD10_LENGTH                      0x00000001

#define _LATD_LATD11_POSITION                    0x0000000B
#define _LATD_LATD11_MASK                        0x00000800
#define _LATD_LATD11_LENGTH                      0x00000001

#define _TRISF_TRISF0_POSITION                   0x00000000
#define _TRISF_TRISF0_MASK                       0x00000001
#define _TRISF_TRISF0_LENGTH                     0x00000001

#define _TRISF_TRISF1_POSITION                   0x00000001
#define _TRISF_TRISF1_MASK                       0x00000002
#define _TRISF_TRISF1_LENGTH                     0x00000001

#define _TRISF_TRISF2_POSITION                   0x00000002
#define _TRISF_TRISF2_MASK                       0x00000004
#define _TRISF_TRISF2_LENGTH                     0x00000001

#define _TRISF_TRISF3_POSITION                   0x00000003
#define _TRISF_TRISF3_MASK                       0x00000008
#define _TRISF_TRISF3_LENGTH                     0x00000001

#define _TRISF_TRISF4_POSITION                   0x00000004
#define _TRISF_TRISF4_MASK                       0x00000010
#define _TRISF_TRISF4_LENGTH                     0x00000001

#define _TRISF_TRISF5_POSITION                   0x00000005
#define _TRISF_TRISF5_MASK                       0x00000020
#define _TRISF_TRISF5_LENGTH                     0x00000001

#define _TRISF_TRISF6_POSITION                   0x00000006
#define _TRISF_TRISF6_MASK                       0x00000040
#define _TRISF_TRISF6_LENGTH                     0x00000001

#define _PORTF_RF0_POSITION                      0x00000000
#define _PORTF_RF0_MASK                          0x00000001
#define _PORTF_RF0_LENGTH                        0x00000001

#define _PORTF_RF1_POSITION                      0x00000001
#define _PORTF_RF1_MASK                          0x00000002
#define _PORTF_RF1_LENGTH                        0x00000001

#define _PORTF_RF2_POSITION                      0x00000002
#define _PORTF_RF2_MASK                          0x00000004
#define _PORTF_RF2_LENGTH                        0x00000001

#define _PORTF_RF3_POSITION                      0x00000003
#define _PORTF_RF3_MASK                          0x00000008
#define _PORTF_RF3_LENGTH                        0x00000001

#define _PORTF_RF4_POSITION                      0x00000004
#define _PORTF_RF4_MASK                          0x00000010
#define _PORTF_RF4_LENGTH                        0x00000001

#define _PORTF_RF5_POSITION                      0x00000005
#define _PORTF_RF5_MASK                          0x00000020
#define _PORTF_RF5_LENGTH                        0x00000001

#define _PORTF_RF6_POSITION                      0x00000006
#define _PORTF_RF6_MASK                          0x00000040
#define _PORTF_RF6_LENGTH                        0x00000001

#define _LATF_LATF0_POSITION                     0x00000000
#define _LATF_LATF0_MASK                         0x00000001
#define _LATF_LATF0_LENGTH                       0x00000001

#define _LATF_LATF1_POSITION                     0x00000001
#define _LATF_LATF1_MASK                         0x00000002
#define _LATF_LATF1_LENGTH                       0x00000001

#define _LATF_LATF2_POSITION                     0x00000002
#define _LATF_LATF2_MASK                         0x00000004
#define _LATF_LATF2_LENGTH                       0x00000001

#define _LATF_LATF3_POSITION                     0x00000003
#define _LATF_LATF3_MASK                         0x00000008
#define _LATF_LATF3_LENGTH                       0x00000001

#define _LATF_LATF4_POSITION                     0x00000004
#define _LATF_LATF4_MASK                         0x00000010
#define _LATF_LATF4_LENGTH                       0x00000001

#define _LATF_LATF5_POSITION                     0x00000005
#define _LATF_LATF5_MASK                         0x00000020
#define _LATF_LATF5_LENGTH                       0x00000001

#define _LATF_LATF6_POSITION                     0x00000006
#define _LATF_LATF6_MASK                         0x00000040
#define _LATF_LATF6_LENGTH                       0x00000001

#define _TRISG_TRISG0_POSITION                   0x00000000
#define _TRISG_TRISG0_MASK                       0x00000001
#define _TRISG_TRISG0_LENGTH                     0x00000001

#define _TRISG_TRISG1_POSITION                   0x00000001
#define _TRISG_TRISG1_MASK                       0x00000002
#define _TRISG_TRISG1_LENGTH                     0x00000001

#define _TRISG_TRISG2_POSITION                   0x00000002
#define _TRISG_TRISG2_MASK                       0x00000004
#define _TRISG_TRISG2_LENGTH                     0x00000001

#define _TRISG_TRISG3_POSITION                   0x00000003
#define _TRISG_TRISG3_MASK                       0x00000008
#define _TRISG_TRISG3_LENGTH                     0x00000001

#define _TRISG_TRISG6_POSITION                   0x00000006
#define _TRISG_TRISG6_MASK                       0x00000040
#define _TRISG_TRISG6_LENGTH                     0x00000001

#define _TRISG_TRISG7_POSITION                   0x00000007
#define _TRISG_TRISG7_MASK                       0x00000080
#define _TRISG_TRISG7_LENGTH                     0x00000001

#define _TRISG_TRISG8_POSITION                   0x00000008
#define _TRISG_TRISG8_MASK                       0x00000100
#define _TRISG_TRISG8_LENGTH                     0x00000001

#define _TRISG_TRISG9_POSITION                   0x00000009
#define _TRISG_TRISG9_MASK                       0x00000200
#define _TRISG_TRISG9_LENGTH                     0x00000001

#define _TRISG_TRISG12_POSITION                  0x0000000C
#define _TRISG_TRISG12_MASK                      0x00001000
#define _TRISG_TRISG12_LENGTH                    0x00000001

#define _TRISG_TRISG13_POSITION                  0x0000000D
#define _TRISG_TRISG13_MASK                      0x00002000
#define _TRISG_TRISG13_LENGTH                    0x00000001

#define _TRISG_TRISG14_POSITION                  0x0000000E
#define _TRISG_TRISG14_MASK                      0x00004000
#define _TRISG_TRISG14_LENGTH                    0x00000001

#define _TRISG_TRISG15_POSITION                  0x0000000F
#define _TRISG_TRISG15_MASK                      0x00008000
#define _TRISG_TRISG15_LENGTH                    0x00000001

#define _PORTG_RG0_POSITION                      0x00000000
#define _PORTG_RG0_MASK                          0x00000001
#define _PORTG_RG0_LENGTH                        0x00000001

#define _PORTG_RG1_POSITION                      0x00000001
#define _PORTG_RG1_MASK                          0x00000002
#define _PORTG_RG1_LENGTH                        0x00000001

#define _PORTG_RG2_POSITION                      0x00000002
#define _PORTG_RG2_MASK                          0x00000004
#define _PORTG_RG2_LENGTH                        0x00000001

#define _PORTG_RG3_POSITION                      0x00000003
#define _PORTG_RG3_MASK                          0x00000008
#define _PORTG_RG3_LENGTH                        0x00000001

#define _PORTG_RG6_POSITION                      0x00000006
#define _PORTG_RG6_MASK                          0x00000040
#define _PORTG_RG6_LENGTH                        0x00000001

#define _PORTG_RG7_POSITION                      0x00000007
#define _PORTG_RG7_MASK                          0x00000080
#define _PORTG_RG7_LENGTH                        0x00000001

#define _PORTG_RG8_POSITION                      0x00000008
#define _PORTG_RG8_MASK                          0x00000100
#define _PORTG_RG8_LENGTH                        0x00000001

#define _PORTG_RG9_POSITION                      0x00000009
#define _PORTG_RG9_MASK                          0x00000200
#define _PORTG_RG9_LENGTH                        0x00000001

#define _PORTG_RG12_POSITION                     0x0000000C
#define _PORTG_RG12_MASK                         0x00001000
#define _PORTG_RG12_LENGTH                       0x00000001

#define _PORTG_RG13_POSITION                     0x0000000D
#define _PORTG_RG13_MASK                         0x00002000
#define _PORTG_RG13_LENGTH                       0x00000001

#define _PORTG_RG14_POSITION                     0x0000000E
#define _PORTG_RG14_MASK                         0x00004000
#define _PORTG_RG14_LENGTH                       0x00000001

#define _PORTG_RG15_POSITION                     0x0000000F
#define _PORTG_RG15_MASK                         0x00008000
#define _PORTG_RG15_LENGTH                       0x00000001

#define _LATG_LATG0_POSITION                     0x00000000
#define _LATG_LATG0_MASK                         0x00000001
#define _LATG_LATG0_LENGTH                       0x00000001

#define _LATG_LATG1_POSITION                     0x00000001
#define _LATG_LATG1_MASK                         0x00000002
#define _LATG_LATG1_LENGTH                       0x00000001

#define _LATG_LATG2_POSITION                     0x00000002
#define _LATG_LATG2_MASK                         0x00000004
#define _LATG_LATG2_LENGTH                       0x00000001

#define _LATG_LATG3_POSITION                     0x00000003
#define _LATG_LATG3_MASK                         0x00000008
#define _LATG_LATG3_LENGTH                       0x00000001

#define _LATG_LATG6_POSITION                     0x00000006
#define _LATG_LATG6_MASK                         0x00000040
#define _LATG_LATG6_LENGTH                       0x00000001

#define _LATG_LATG7_POSITION                     0x00000007
#define _LATG_LATG7_MASK                         0x00000080
#define _LATG_LATG7_LENGTH                       0x00000001

#define _LATG_LATG8_POSITION                     0x00000008
#define _LATG_LATG8_MASK                         0x00000100
#define _LATG_LATG8_LENGTH                       0x00000001

#define _LATG_LATG9_POSITION                     0x00000009
#define _LATG_LATG9_MASK                         0x00000200
#define _LATG_LATG9_LENGTH                       0x00000001

#define _LATG_LATG12_POSITION                    0x0000000C
#define _LATG_LATG12_MASK                        0x00001000
#define _LATG_LATG12_LENGTH                      0x00000001

#define _LATG_LATG13_POSITION                    0x0000000D
#define _LATG_LATG13_MASK                        0x00002000
#define _LATG_LATG13_LENGTH                      0x00000001

#define _LATG_LATG14_POSITION                    0x0000000E
#define _LATG_LATG14_MASK                        0x00004000
#define _LATG_LATG14_LENGTH                      0x00000001

#define _LATG_LATG15_POSITION                    0x0000000F
#define _LATG_LATG15_MASK                        0x00008000
#define _LATG_LATG15_LENGTH                      0x00000001

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
#define _AD1CON2_SMPI_MASK                       0x0000003C
#define _AD1CON2_SMPI_LENGTH                     0x00000004

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

#define _AD1PCFGH_PCFG16_POSITION                0x00000000
#define _AD1PCFGH_PCFG16_MASK                    0x00000001
#define _AD1PCFGH_PCFG16_LENGTH                  0x00000001

#define _AD1PCFGH_PCFG17_POSITION                0x00000001
#define _AD1PCFGH_PCFG17_MASK                    0x00000002
#define _AD1PCFGH_PCFG17_LENGTH                  0x00000001

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

#define _AD1PCFGL_PCFG4_POSITION                 0x00000004
#define _AD1PCFGL_PCFG4_MASK                     0x00000010
#define _AD1PCFGL_PCFG4_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG5_POSITION                 0x00000005
#define _AD1PCFGL_PCFG5_MASK                     0x00000020
#define _AD1PCFGL_PCFG5_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG6_POSITION                 0x00000006
#define _AD1PCFGL_PCFG6_MASK                     0x00000040
#define _AD1PCFGL_PCFG6_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG7_POSITION                 0x00000007
#define _AD1PCFGL_PCFG7_MASK                     0x00000080
#define _AD1PCFGL_PCFG7_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG8_POSITION                 0x00000008
#define _AD1PCFGL_PCFG8_MASK                     0x00000100
#define _AD1PCFGL_PCFG8_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG9_POSITION                 0x00000009
#define _AD1PCFGL_PCFG9_MASK                     0x00000200
#define _AD1PCFGL_PCFG9_LENGTH                   0x00000001

#define _AD1PCFGL_PCFG10_POSITION                0x0000000A
#define _AD1PCFGL_PCFG10_MASK                    0x00000400
#define _AD1PCFGL_PCFG10_LENGTH                  0x00000001

#define _AD1PCFGL_PCFG11_POSITION                0x0000000B
#define _AD1PCFGL_PCFG11_MASK                    0x00000800
#define _AD1PCFGL_PCFG11_LENGTH                  0x00000001

#define _AD1PCFGL_PCFG12_POSITION                0x0000000C
#define _AD1PCFGL_PCFG12_MASK                    0x00001000
#define _AD1PCFGL_PCFG12_LENGTH                  0x00000001

#define _AD1PCFGL_PCFG13_POSITION                0x0000000D
#define _AD1PCFGL_PCFG13_MASK                    0x00002000
#define _AD1PCFGL_PCFG13_LENGTH                  0x00000001

#define _AD1PCFGL_PCFG14_POSITION                0x0000000E
#define _AD1PCFGL_PCFG14_MASK                    0x00004000
#define _AD1PCFGL_PCFG14_LENGTH                  0x00000001

#define _AD1PCFGL_PCFG15_POSITION                0x0000000F
#define _AD1PCFGL_PCFG15_MASK                    0x00008000
#define _AD1PCFGL_PCFG15_LENGTH                  0x00000001

#define _ADPCFG_PCFG0_POSITION                   0x00000000
#define _ADPCFG_PCFG0_MASK                       0x00000001
#define _ADPCFG_PCFG0_LENGTH                     0x00000001

#define _ADPCFG_PCFG1_POSITION                   0x00000001
#define _ADPCFG_PCFG1_MASK                       0x00000002
#define _ADPCFG_PCFG1_LENGTH                     0x00000001

#define _ADPCFG_PCFG2_POSITION                   0x00000002
#define _ADPCFG_PCFG2_MASK                       0x00000004
#define _ADPCFG_PCFG2_LENGTH                     0x00000001

#define _ADPCFG_PCFG3_POSITION                   0x00000003
#define _ADPCFG_PCFG3_MASK                       0x00000008
#define _ADPCFG_PCFG3_LENGTH                     0x00000001

#define _ADPCFG_PCFG4_POSITION                   0x00000004
#define _ADPCFG_PCFG4_MASK                       0x00000010
#define _ADPCFG_PCFG4_LENGTH                     0x00000001

#define _ADPCFG_PCFG5_POSITION                   0x00000005
#define _ADPCFG_PCFG5_MASK                       0x00000020
#define _ADPCFG_PCFG5_LENGTH                     0x00000001

#define _ADPCFG_PCFG6_POSITION                   0x00000006
#define _ADPCFG_PCFG6_MASK                       0x00000040
#define _ADPCFG_PCFG6_LENGTH                     0x00000001

#define _ADPCFG_PCFG7_POSITION                   0x00000007
#define _ADPCFG_PCFG7_MASK                       0x00000080
#define _ADPCFG_PCFG7_LENGTH                     0x00000001

#define _ADPCFG_PCFG8_POSITION                   0x00000008
#define _ADPCFG_PCFG8_MASK                       0x00000100
#define _ADPCFG_PCFG8_LENGTH                     0x00000001

#define _ADPCFG_PCFG9_POSITION                   0x00000009
#define _ADPCFG_PCFG9_MASK                       0x00000200
#define _ADPCFG_PCFG9_LENGTH                     0x00000001

#define _ADPCFG_PCFG10_POSITION                  0x0000000A
#define _ADPCFG_PCFG10_MASK                      0x00000400
#define _ADPCFG_PCFG10_LENGTH                    0x00000001

#define _ADPCFG_PCFG11_POSITION                  0x0000000B
#define _ADPCFG_PCFG11_MASK                      0x00000800
#define _ADPCFG_PCFG11_LENGTH                    0x00000001

#define _ADPCFG_PCFG12_POSITION                  0x0000000C
#define _ADPCFG_PCFG12_MASK                      0x00001000
#define _ADPCFG_PCFG12_LENGTH                    0x00000001

#define _ADPCFG_PCFG13_POSITION                  0x0000000D
#define _ADPCFG_PCFG13_MASK                      0x00002000
#define _ADPCFG_PCFG13_LENGTH                    0x00000001

#define _ADPCFG_PCFG14_POSITION                  0x0000000E
#define _ADPCFG_PCFG14_MASK                      0x00004000
#define _ADPCFG_PCFG14_LENGTH                    0x00000001

#define _ADPCFG_PCFG15_POSITION                  0x0000000F
#define _ADPCFG_PCFG15_MASK                      0x00008000
#define _ADPCFG_PCFG15_LENGTH                    0x00000001

#define _AD1CSSH_CSS16_POSITION                  0x00000000
#define _AD1CSSH_CSS16_MASK                      0x00000001
#define _AD1CSSH_CSS16_LENGTH                    0x00000001

#define _AD1CSSH_CSS17_POSITION                  0x00000001
#define _AD1CSSH_CSS17_MASK                      0x00000002
#define _AD1CSSH_CSS17_LENGTH                    0x00000001

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

#define _AD1CON4_DMABL0_POSITION                 0x00000000
#define _AD1CON4_DMABL0_MASK                     0x00000001
#define _AD1CON4_DMABL0_LENGTH                   0x00000001

#define _AD1CON4_DMABL1_POSITION                 0x00000001
#define _AD1CON4_DMABL1_MASK                     0x00000002
#define _AD1CON4_DMABL1_LENGTH                   0x00000001

#define _AD1CON4_DMABL2_POSITION                 0x00000002
#define _AD1CON4_DMABL2_MASK                     0x00000004
#define _AD1CON4_DMABL2_LENGTH                   0x00000001

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
#define _DMA0REQ_IRQSEL_MASK                     0x0000007F
#define _DMA0REQ_IRQSEL_LENGTH                   0x00000007

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
#define _DMA1REQ_IRQSEL_MASK                     0x0000007F
#define _DMA1REQ_IRQSEL_LENGTH                   0x00000007

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
#define _DMA2REQ_IRQSEL_MASK                     0x0000007F
#define _DMA2REQ_IRQSEL_LENGTH                   0x00000007

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
#define _DMA3REQ_IRQSEL_MASK                     0x0000007F
#define _DMA3REQ_IRQSEL_LENGTH                   0x00000007

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

#define _DMA4CON_MODE_POSITION                   0x00000000
#define _DMA4CON_MODE_MASK                       0x00000003
#define _DMA4CON_MODE_LENGTH                     0x00000002

#define _DMA4CON_AMODE_POSITION                  0x00000004
#define _DMA4CON_AMODE_MASK                      0x00000030
#define _DMA4CON_AMODE_LENGTH                    0x00000002

#define _DMA4CON_NULLW_POSITION                  0x0000000B
#define _DMA4CON_NULLW_MASK                      0x00000800
#define _DMA4CON_NULLW_LENGTH                    0x00000001

#define _DMA4CON_HALF_POSITION                   0x0000000C
#define _DMA4CON_HALF_MASK                       0x00001000
#define _DMA4CON_HALF_LENGTH                     0x00000001

#define _DMA4CON_DIR_POSITION                    0x0000000D
#define _DMA4CON_DIR_MASK                        0x00002000
#define _DMA4CON_DIR_LENGTH                      0x00000001

#define _DMA4CON_SIZE_POSITION                   0x0000000E
#define _DMA4CON_SIZE_MASK                       0x00004000
#define _DMA4CON_SIZE_LENGTH                     0x00000001

#define _DMA4CON_CHEN_POSITION                   0x0000000F
#define _DMA4CON_CHEN_MASK                       0x00008000
#define _DMA4CON_CHEN_LENGTH                     0x00000001

#define _DMA4CON_MODE0_POSITION                  0x00000000
#define _DMA4CON_MODE0_MASK                      0x00000001
#define _DMA4CON_MODE0_LENGTH                    0x00000001

#define _DMA4CON_MODE1_POSITION                  0x00000001
#define _DMA4CON_MODE1_MASK                      0x00000002
#define _DMA4CON_MODE1_LENGTH                    0x00000001

#define _DMA4CON_AMODE0_POSITION                 0x00000004
#define _DMA4CON_AMODE0_MASK                     0x00000010
#define _DMA4CON_AMODE0_LENGTH                   0x00000001

#define _DMA4CON_AMODE1_POSITION                 0x00000005
#define _DMA4CON_AMODE1_MASK                     0x00000020
#define _DMA4CON_AMODE1_LENGTH                   0x00000001

#define _DMA4REQ_IRQSEL_POSITION                 0x00000000
#define _DMA4REQ_IRQSEL_MASK                     0x0000007F
#define _DMA4REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA4REQ_FORCE_POSITION                  0x0000000F
#define _DMA4REQ_FORCE_MASK                      0x00008000
#define _DMA4REQ_FORCE_LENGTH                    0x00000001

#define _DMA4REQ_IRQSEL0_POSITION                0x00000000
#define _DMA4REQ_IRQSEL0_MASK                    0x00000001
#define _DMA4REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL1_POSITION                0x00000001
#define _DMA4REQ_IRQSEL1_MASK                    0x00000002
#define _DMA4REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL2_POSITION                0x00000002
#define _DMA4REQ_IRQSEL2_MASK                    0x00000004
#define _DMA4REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL3_POSITION                0x00000003
#define _DMA4REQ_IRQSEL3_MASK                    0x00000008
#define _DMA4REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL4_POSITION                0x00000004
#define _DMA4REQ_IRQSEL4_MASK                    0x00000010
#define _DMA4REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL5_POSITION                0x00000005
#define _DMA4REQ_IRQSEL5_MASK                    0x00000020
#define _DMA4REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA4REQ_IRQSEL6_POSITION                0x00000006
#define _DMA4REQ_IRQSEL6_MASK                    0x00000040
#define _DMA4REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA5CON_MODE_POSITION                   0x00000000
#define _DMA5CON_MODE_MASK                       0x00000003
#define _DMA5CON_MODE_LENGTH                     0x00000002

#define _DMA5CON_AMODE_POSITION                  0x00000004
#define _DMA5CON_AMODE_MASK                      0x00000030
#define _DMA5CON_AMODE_LENGTH                    0x00000002

#define _DMA5CON_NULLW_POSITION                  0x0000000B
#define _DMA5CON_NULLW_MASK                      0x00000800
#define _DMA5CON_NULLW_LENGTH                    0x00000001

#define _DMA5CON_HALF_POSITION                   0x0000000C
#define _DMA5CON_HALF_MASK                       0x00001000
#define _DMA5CON_HALF_LENGTH                     0x00000001

#define _DMA5CON_DIR_POSITION                    0x0000000D
#define _DMA5CON_DIR_MASK                        0x00002000
#define _DMA5CON_DIR_LENGTH                      0x00000001

#define _DMA5CON_SIZE_POSITION                   0x0000000E
#define _DMA5CON_SIZE_MASK                       0x00004000
#define _DMA5CON_SIZE_LENGTH                     0x00000001

#define _DMA5CON_CHEN_POSITION                   0x0000000F
#define _DMA5CON_CHEN_MASK                       0x00008000
#define _DMA5CON_CHEN_LENGTH                     0x00000001

#define _DMA5CON_MODE0_POSITION                  0x00000000
#define _DMA5CON_MODE0_MASK                      0x00000001
#define _DMA5CON_MODE0_LENGTH                    0x00000001

#define _DMA5CON_MODE1_POSITION                  0x00000001
#define _DMA5CON_MODE1_MASK                      0x00000002
#define _DMA5CON_MODE1_LENGTH                    0x00000001

#define _DMA5CON_AMODE0_POSITION                 0x00000004
#define _DMA5CON_AMODE0_MASK                     0x00000010
#define _DMA5CON_AMODE0_LENGTH                   0x00000001

#define _DMA5CON_AMODE1_POSITION                 0x00000005
#define _DMA5CON_AMODE1_MASK                     0x00000020
#define _DMA5CON_AMODE1_LENGTH                   0x00000001

#define _DMA5REQ_IRQSEL_POSITION                 0x00000000
#define _DMA5REQ_IRQSEL_MASK                     0x0000007F
#define _DMA5REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA5REQ_FORCE_POSITION                  0x0000000F
#define _DMA5REQ_FORCE_MASK                      0x00008000
#define _DMA5REQ_FORCE_LENGTH                    0x00000001

#define _DMA5REQ_IRQSEL0_POSITION                0x00000000
#define _DMA5REQ_IRQSEL0_MASK                    0x00000001
#define _DMA5REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL1_POSITION                0x00000001
#define _DMA5REQ_IRQSEL1_MASK                    0x00000002
#define _DMA5REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL2_POSITION                0x00000002
#define _DMA5REQ_IRQSEL2_MASK                    0x00000004
#define _DMA5REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL3_POSITION                0x00000003
#define _DMA5REQ_IRQSEL3_MASK                    0x00000008
#define _DMA5REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL4_POSITION                0x00000004
#define _DMA5REQ_IRQSEL4_MASK                    0x00000010
#define _DMA5REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL5_POSITION                0x00000005
#define _DMA5REQ_IRQSEL5_MASK                    0x00000020
#define _DMA5REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA5REQ_IRQSEL6_POSITION                0x00000006
#define _DMA5REQ_IRQSEL6_MASK                    0x00000040
#define _DMA5REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA6CON_MODE_POSITION                   0x00000000
#define _DMA6CON_MODE_MASK                       0x00000003
#define _DMA6CON_MODE_LENGTH                     0x00000002

#define _DMA6CON_AMODE_POSITION                  0x00000004
#define _DMA6CON_AMODE_MASK                      0x00000030
#define _DMA6CON_AMODE_LENGTH                    0x00000002

#define _DMA6CON_NULLW_POSITION                  0x0000000B
#define _DMA6CON_NULLW_MASK                      0x00000800
#define _DMA6CON_NULLW_LENGTH                    0x00000001

#define _DMA6CON_HALF_POSITION                   0x0000000C
#define _DMA6CON_HALF_MASK                       0x00001000
#define _DMA6CON_HALF_LENGTH                     0x00000001

#define _DMA6CON_DIR_POSITION                    0x0000000D
#define _DMA6CON_DIR_MASK                        0x00002000
#define _DMA6CON_DIR_LENGTH                      0x00000001

#define _DMA6CON_SIZE_POSITION                   0x0000000E
#define _DMA6CON_SIZE_MASK                       0x00004000
#define _DMA6CON_SIZE_LENGTH                     0x00000001

#define _DMA6CON_CHEN_POSITION                   0x0000000F
#define _DMA6CON_CHEN_MASK                       0x00008000
#define _DMA6CON_CHEN_LENGTH                     0x00000001

#define _DMA6CON_MODE0_POSITION                  0x00000000
#define _DMA6CON_MODE0_MASK                      0x00000001
#define _DMA6CON_MODE0_LENGTH                    0x00000001

#define _DMA6CON_MODE1_POSITION                  0x00000001
#define _DMA6CON_MODE1_MASK                      0x00000002
#define _DMA6CON_MODE1_LENGTH                    0x00000001

#define _DMA6CON_AMODE0_POSITION                 0x00000004
#define _DMA6CON_AMODE0_MASK                     0x00000010
#define _DMA6CON_AMODE0_LENGTH                   0x00000001

#define _DMA6CON_AMODE1_POSITION                 0x00000005
#define _DMA6CON_AMODE1_MASK                     0x00000020
#define _DMA6CON_AMODE1_LENGTH                   0x00000001

#define _DMA6REQ_IRQSEL_POSITION                 0x00000000
#define _DMA6REQ_IRQSEL_MASK                     0x0000007F
#define _DMA6REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA6REQ_FORCE_POSITION                  0x0000000F
#define _DMA6REQ_FORCE_MASK                      0x00008000
#define _DMA6REQ_FORCE_LENGTH                    0x00000001

#define _DMA6REQ_IRQSEL0_POSITION                0x00000000
#define _DMA6REQ_IRQSEL0_MASK                    0x00000001
#define _DMA6REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL1_POSITION                0x00000001
#define _DMA6REQ_IRQSEL1_MASK                    0x00000002
#define _DMA6REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL2_POSITION                0x00000002
#define _DMA6REQ_IRQSEL2_MASK                    0x00000004
#define _DMA6REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL3_POSITION                0x00000003
#define _DMA6REQ_IRQSEL3_MASK                    0x00000008
#define _DMA6REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL4_POSITION                0x00000004
#define _DMA6REQ_IRQSEL4_MASK                    0x00000010
#define _DMA6REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL5_POSITION                0x00000005
#define _DMA6REQ_IRQSEL5_MASK                    0x00000020
#define _DMA6REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA6REQ_IRQSEL6_POSITION                0x00000006
#define _DMA6REQ_IRQSEL6_MASK                    0x00000040
#define _DMA6REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMA7CON_MODE_POSITION                   0x00000000
#define _DMA7CON_MODE_MASK                       0x00000003
#define _DMA7CON_MODE_LENGTH                     0x00000002

#define _DMA7CON_AMODE_POSITION                  0x00000004
#define _DMA7CON_AMODE_MASK                      0x00000030
#define _DMA7CON_AMODE_LENGTH                    0x00000002

#define _DMA7CON_NULLW_POSITION                  0x0000000B
#define _DMA7CON_NULLW_MASK                      0x00000800
#define _DMA7CON_NULLW_LENGTH                    0x00000001

#define _DMA7CON_HALF_POSITION                   0x0000000C
#define _DMA7CON_HALF_MASK                       0x00001000
#define _DMA7CON_HALF_LENGTH                     0x00000001

#define _DMA7CON_DIR_POSITION                    0x0000000D
#define _DMA7CON_DIR_MASK                        0x00002000
#define _DMA7CON_DIR_LENGTH                      0x00000001

#define _DMA7CON_SIZE_POSITION                   0x0000000E
#define _DMA7CON_SIZE_MASK                       0x00004000
#define _DMA7CON_SIZE_LENGTH                     0x00000001

#define _DMA7CON_CHEN_POSITION                   0x0000000F
#define _DMA7CON_CHEN_MASK                       0x00008000
#define _DMA7CON_CHEN_LENGTH                     0x00000001

#define _DMA7CON_MODE0_POSITION                  0x00000000
#define _DMA7CON_MODE0_MASK                      0x00000001
#define _DMA7CON_MODE0_LENGTH                    0x00000001

#define _DMA7CON_MODE1_POSITION                  0x00000001
#define _DMA7CON_MODE1_MASK                      0x00000002
#define _DMA7CON_MODE1_LENGTH                    0x00000001

#define _DMA7CON_AMODE0_POSITION                 0x00000004
#define _DMA7CON_AMODE0_MASK                     0x00000010
#define _DMA7CON_AMODE0_LENGTH                   0x00000001

#define _DMA7CON_AMODE1_POSITION                 0x00000005
#define _DMA7CON_AMODE1_MASK                     0x00000020
#define _DMA7CON_AMODE1_LENGTH                   0x00000001

#define _DMA7REQ_IRQSEL_POSITION                 0x00000000
#define _DMA7REQ_IRQSEL_MASK                     0x0000007F
#define _DMA7REQ_IRQSEL_LENGTH                   0x00000007

#define _DMA7REQ_FORCE_POSITION                  0x0000000F
#define _DMA7REQ_FORCE_MASK                      0x00008000
#define _DMA7REQ_FORCE_LENGTH                    0x00000001

#define _DMA7REQ_IRQSEL0_POSITION                0x00000000
#define _DMA7REQ_IRQSEL0_MASK                    0x00000001
#define _DMA7REQ_IRQSEL0_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL1_POSITION                0x00000001
#define _DMA7REQ_IRQSEL1_MASK                    0x00000002
#define _DMA7REQ_IRQSEL1_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL2_POSITION                0x00000002
#define _DMA7REQ_IRQSEL2_MASK                    0x00000004
#define _DMA7REQ_IRQSEL2_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL3_POSITION                0x00000003
#define _DMA7REQ_IRQSEL3_MASK                    0x00000008
#define _DMA7REQ_IRQSEL3_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL4_POSITION                0x00000004
#define _DMA7REQ_IRQSEL4_MASK                    0x00000010
#define _DMA7REQ_IRQSEL4_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL5_POSITION                0x00000005
#define _DMA7REQ_IRQSEL5_MASK                    0x00000020
#define _DMA7REQ_IRQSEL5_LENGTH                  0x00000001

#define _DMA7REQ_IRQSEL6_POSITION                0x00000006
#define _DMA7REQ_IRQSEL6_MASK                    0x00000040
#define _DMA7REQ_IRQSEL6_LENGTH                  0x00000001

#define _DMACS0_XWCOL0_POSITION                  0x00000000
#define _DMACS0_XWCOL0_MASK                      0x00000001
#define _DMACS0_XWCOL0_LENGTH                    0x00000001

#define _DMACS0_XWCOL1_POSITION                  0x00000001
#define _DMACS0_XWCOL1_MASK                      0x00000002
#define _DMACS0_XWCOL1_LENGTH                    0x00000001

#define _DMACS0_XWCOL2_POSITION                  0x00000002
#define _DMACS0_XWCOL2_MASK                      0x00000004
#define _DMACS0_XWCOL2_LENGTH                    0x00000001

#define _DMACS0_XWCOL3_POSITION                  0x00000003
#define _DMACS0_XWCOL3_MASK                      0x00000008
#define _DMACS0_XWCOL3_LENGTH                    0x00000001

#define _DMACS0_XWCOL4_POSITION                  0x00000004
#define _DMACS0_XWCOL4_MASK                      0x00000010
#define _DMACS0_XWCOL4_LENGTH                    0x00000001

#define _DMACS0_XWCOL5_POSITION                  0x00000005
#define _DMACS0_XWCOL5_MASK                      0x00000020
#define _DMACS0_XWCOL5_LENGTH                    0x00000001

#define _DMACS0_XWCOL6_POSITION                  0x00000006
#define _DMACS0_XWCOL6_MASK                      0x00000040
#define _DMACS0_XWCOL6_LENGTH                    0x00000001

#define _DMACS0_XWCOL7_POSITION                  0x00000007
#define _DMACS0_XWCOL7_MASK                      0x00000080
#define _DMACS0_XWCOL7_LENGTH                    0x00000001

#define _DMACS0_PWCOL0_POSITION                  0x00000008
#define _DMACS0_PWCOL0_MASK                      0x00000100
#define _DMACS0_PWCOL0_LENGTH                    0x00000001

#define _DMACS0_PWCOL1_POSITION                  0x00000009
#define _DMACS0_PWCOL1_MASK                      0x00000200
#define _DMACS0_PWCOL1_LENGTH                    0x00000001

#define _DMACS0_PWCOL2_POSITION                  0x0000000A
#define _DMACS0_PWCOL2_MASK                      0x00000400
#define _DMACS0_PWCOL2_LENGTH                    0x00000001

#define _DMACS0_PWCOL3_POSITION                  0x0000000B
#define _DMACS0_PWCOL3_MASK                      0x00000800
#define _DMACS0_PWCOL3_LENGTH                    0x00000001

#define _DMACS0_PWCOL4_POSITION                  0x0000000C
#define _DMACS0_PWCOL4_MASK                      0x00001000
#define _DMACS0_PWCOL4_LENGTH                    0x00000001

#define _DMACS0_PWCOL5_POSITION                  0x0000000D
#define _DMACS0_PWCOL5_MASK                      0x00002000
#define _DMACS0_PWCOL5_LENGTH                    0x00000001

#define _DMACS0_PWCOL6_POSITION                  0x0000000E
#define _DMACS0_PWCOL6_MASK                      0x00004000
#define _DMACS0_PWCOL6_LENGTH                    0x00000001

#define _DMACS0_PWCOL7_POSITION                  0x0000000F
#define _DMACS0_PWCOL7_MASK                      0x00008000
#define _DMACS0_PWCOL7_LENGTH                    0x00000001

#define _DMACS0_XWCOL_POSITION                   0x00000000
#define _DMACS0_XWCOL_MASK                       0x000000FF
#define _DMACS0_XWCOL_LENGTH                     0x00000008

#define _DMACS0_PWCOL_POSITION                   0x00000008
#define _DMACS0_PWCOL_MASK                       0x0000FF00
#define _DMACS0_PWCOL_LENGTH                     0x00000008

#define _DMACS1_PPST0_POSITION                   0x00000000
#define _DMACS1_PPST0_MASK                       0x00000001
#define _DMACS1_PPST0_LENGTH                     0x00000001

#define _DMACS1_PPST1_POSITION                   0x00000001
#define _DMACS1_PPST1_MASK                       0x00000002
#define _DMACS1_PPST1_LENGTH                     0x00000001

#define _DMACS1_PPST2_POSITION                   0x00000002
#define _DMACS1_PPST2_MASK                       0x00000004
#define _DMACS1_PPST2_LENGTH                     0x00000001

#define _DMACS1_PPST3_POSITION                   0x00000003
#define _DMACS1_PPST3_MASK                       0x00000008
#define _DMACS1_PPST3_LENGTH                     0x00000001

#define _DMACS1_PPST4_POSITION                   0x00000004
#define _DMACS1_PPST4_MASK                       0x00000010
#define _DMACS1_PPST4_LENGTH                     0x00000001

#define _DMACS1_PPST5_POSITION                   0x00000005
#define _DMACS1_PPST5_MASK                       0x00000020
#define _DMACS1_PPST5_LENGTH                     0x00000001

#define _DMACS1_PPST6_POSITION                   0x00000006
#define _DMACS1_PPST6_MASK                       0x00000040
#define _DMACS1_PPST6_LENGTH                     0x00000001

#define _DMACS1_PPST7_POSITION                   0x00000007
#define _DMACS1_PPST7_MASK                       0x00000080
#define _DMACS1_PPST7_LENGTH                     0x00000001

#define _DMACS1_LSTCH_POSITION                   0x00000008
#define _DMACS1_LSTCH_MASK                       0x00000F00
#define _DMACS1_LSTCH_LENGTH                     0x00000004

#define _DMACS1_PPST_POSITION                    0x00000000
#define _DMACS1_PPST_MASK                        0x000000FF
#define _DMACS1_PPST_LENGTH                      0x00000008

#define _DMACS1_LSTCH0_POSITION                  0x00000008
#define _DMACS1_LSTCH0_MASK                      0x00000100
#define _DMACS1_LSTCH0_LENGTH                    0x00000001

#define _DMACS1_LSTCH1_POSITION                  0x00000009
#define _DMACS1_LSTCH1_MASK                      0x00000200
#define _DMACS1_LSTCH1_LENGTH                    0x00000001

#define _DMACS1_LSTCH2_POSITION                  0x0000000A
#define _DMACS1_LSTCH2_MASK                      0x00000400
#define _DMACS1_LSTCH2_LENGTH                    0x00000001

#define _DMACS1_LSTCH3_POSITION                  0x0000000B
#define _DMACS1_LSTCH3_MASK                      0x00000800
#define _DMACS1_LSTCH3_LENGTH                    0x00000001

#define _C1CTRL1_WIN_POSITION                    0x00000000
#define _C1CTRL1_WIN_MASK                        0x00000001
#define _C1CTRL1_WIN_LENGTH                      0x00000001

#define _C1CTRL1_CANCAP_POSITION                 0x00000003
#define _C1CTRL1_CANCAP_MASK                     0x00000008
#define _C1CTRL1_CANCAP_LENGTH                   0x00000001

#define _C1CTRL1_OPMODE_POSITION                 0x00000005
#define _C1CTRL1_OPMODE_MASK                     0x000000E0
#define _C1CTRL1_OPMODE_LENGTH                   0x00000003

#define _C1CTRL1_REQOP_POSITION                  0x00000008
#define _C1CTRL1_REQOP_MASK                      0x00000700
#define _C1CTRL1_REQOP_LENGTH                    0x00000003

#define _C1CTRL1_CANCKS_POSITION                 0x0000000B
#define _C1CTRL1_CANCKS_MASK                     0x00000800
#define _C1CTRL1_CANCKS_LENGTH                   0x00000001

#define _C1CTRL1_ABAT_POSITION                   0x0000000C
#define _C1CTRL1_ABAT_MASK                       0x00001000
#define _C1CTRL1_ABAT_LENGTH                     0x00000001

#define _C1CTRL1_CSIDL_POSITION                  0x0000000D
#define _C1CTRL1_CSIDL_MASK                      0x00002000
#define _C1CTRL1_CSIDL_LENGTH                    0x00000001

#define _C1CTRL1_OPMODE0_POSITION                0x00000005
#define _C1CTRL1_OPMODE0_MASK                    0x00000020
#define _C1CTRL1_OPMODE0_LENGTH                  0x00000001

#define _C1CTRL1_OPMODE1_POSITION                0x00000006
#define _C1CTRL1_OPMODE1_MASK                    0x00000040
#define _C1CTRL1_OPMODE1_LENGTH                  0x00000001

#define _C1CTRL1_OPMODE2_POSITION                0x00000007
#define _C1CTRL1_OPMODE2_MASK                    0x00000080
#define _C1CTRL1_OPMODE2_LENGTH                  0x00000001

#define _C1CTRL1_REQOP0_POSITION                 0x00000008
#define _C1CTRL1_REQOP0_MASK                     0x00000100
#define _C1CTRL1_REQOP0_LENGTH                   0x00000001

#define _C1CTRL1_REQOP1_POSITION                 0x00000009
#define _C1CTRL1_REQOP1_MASK                     0x00000200
#define _C1CTRL1_REQOP1_LENGTH                   0x00000001

#define _C1CTRL1_REQOP2_POSITION                 0x0000000A
#define _C1CTRL1_REQOP2_MASK                     0x00000400
#define _C1CTRL1_REQOP2_LENGTH                   0x00000001

#define _C1CTRL2_DNCNT_POSITION                  0x00000000
#define _C1CTRL2_DNCNT_MASK                      0x0000001F
#define _C1CTRL2_DNCNT_LENGTH                    0x00000005

#define _C1CTRL2_DNCNT0_POSITION                 0x00000000
#define _C1CTRL2_DNCNT0_MASK                     0x00000001
#define _C1CTRL2_DNCNT0_LENGTH                   0x00000001

#define _C1CTRL2_DNCNT1_POSITION                 0x00000001
#define _C1CTRL2_DNCNT1_MASK                     0x00000002
#define _C1CTRL2_DNCNT1_LENGTH                   0x00000001

#define _C1CTRL2_DNCNT2_POSITION                 0x00000002
#define _C1CTRL2_DNCNT2_MASK                     0x00000004
#define _C1CTRL2_DNCNT2_LENGTH                   0x00000001

#define _C1CTRL2_DNCNT3_POSITION                 0x00000003
#define _C1CTRL2_DNCNT3_MASK                     0x00000008
#define _C1CTRL2_DNCNT3_LENGTH                   0x00000001

#define _C1CTRL2_DNCNT4_POSITION                 0x00000004
#define _C1CTRL2_DNCNT4_MASK                     0x00000010
#define _C1CTRL2_DNCNT4_LENGTH                   0x00000001

#define _C1VEC_ICODE_POSITION                    0x00000000
#define _C1VEC_ICODE_MASK                        0x0000007F
#define _C1VEC_ICODE_LENGTH                      0x00000007

#define _C1VEC_FILHIT_POSITION                   0x00000008
#define _C1VEC_FILHIT_MASK                       0x00001F00
#define _C1VEC_FILHIT_LENGTH                     0x00000005

#define _C1VEC_ICODE0_POSITION                   0x00000000
#define _C1VEC_ICODE0_MASK                       0x00000001
#define _C1VEC_ICODE0_LENGTH                     0x00000001

#define _C1VEC_ICODE1_POSITION                   0x00000001
#define _C1VEC_ICODE1_MASK                       0x00000002
#define _C1VEC_ICODE1_LENGTH                     0x00000001

#define _C1VEC_ICODE2_POSITION                   0x00000002
#define _C1VEC_ICODE2_MASK                       0x00000004
#define _C1VEC_ICODE2_LENGTH                     0x00000001

#define _C1VEC_ICODE3_POSITION                   0x00000003
#define _C1VEC_ICODE3_MASK                       0x00000008
#define _C1VEC_ICODE3_LENGTH                     0x00000001

#define _C1VEC_ICODE4_POSITION                   0x00000004
#define _C1VEC_ICODE4_MASK                       0x00000010
#define _C1VEC_ICODE4_LENGTH                     0x00000001

#define _C1VEC_ICODE5_POSITION                   0x00000005
#define _C1VEC_ICODE5_MASK                       0x00000020
#define _C1VEC_ICODE5_LENGTH                     0x00000001

#define _C1VEC_ICODE6_POSITION                   0x00000006
#define _C1VEC_ICODE6_MASK                       0x00000040
#define _C1VEC_ICODE6_LENGTH                     0x00000001

#define _C1VEC_FILHIT0_POSITION                  0x00000008
#define _C1VEC_FILHIT0_MASK                      0x00000100
#define _C1VEC_FILHIT0_LENGTH                    0x00000001

#define _C1VEC_FILHIT1_POSITION                  0x00000009
#define _C1VEC_FILHIT1_MASK                      0x00000200
#define _C1VEC_FILHIT1_LENGTH                    0x00000001

#define _C1VEC_FILHIT2_POSITION                  0x0000000A
#define _C1VEC_FILHIT2_MASK                      0x00000400
#define _C1VEC_FILHIT2_LENGTH                    0x00000001

#define _C1VEC_FILHIT3_POSITION                  0x0000000B
#define _C1VEC_FILHIT3_MASK                      0x00000800
#define _C1VEC_FILHIT3_LENGTH                    0x00000001

#define _C1VEC_FILHIT4_POSITION                  0x0000000C
#define _C1VEC_FILHIT4_MASK                      0x00001000
#define _C1VEC_FILHIT4_LENGTH                    0x00000001

#define _C1FCTRL_FSA_POSITION                    0x00000000
#define _C1FCTRL_FSA_MASK                        0x0000001F
#define _C1FCTRL_FSA_LENGTH                      0x00000005

#define _C1FCTRL_DMABS_POSITION                  0x0000000D
#define _C1FCTRL_DMABS_MASK                      0x0000E000
#define _C1FCTRL_DMABS_LENGTH                    0x00000003

#define _C1FCTRL_FSA0_POSITION                   0x00000000
#define _C1FCTRL_FSA0_MASK                       0x00000001
#define _C1FCTRL_FSA0_LENGTH                     0x00000001

#define _C1FCTRL_FSA1_POSITION                   0x00000001
#define _C1FCTRL_FSA1_MASK                       0x00000002
#define _C1FCTRL_FSA1_LENGTH                     0x00000001

#define _C1FCTRL_FSA2_POSITION                   0x00000002
#define _C1FCTRL_FSA2_MASK                       0x00000004
#define _C1FCTRL_FSA2_LENGTH                     0x00000001

#define _C1FCTRL_FSA3_POSITION                   0x00000003
#define _C1FCTRL_FSA3_MASK                       0x00000008
#define _C1FCTRL_FSA3_LENGTH                     0x00000001

#define _C1FCTRL_FSA4_POSITION                   0x00000004
#define _C1FCTRL_FSA4_MASK                       0x00000010
#define _C1FCTRL_FSA4_LENGTH                     0x00000001

#define _C1FCTRL_DMABS0_POSITION                 0x0000000D
#define _C1FCTRL_DMABS0_MASK                     0x00002000
#define _C1FCTRL_DMABS0_LENGTH                   0x00000001

#define _C1FCTRL_DMABS1_POSITION                 0x0000000E
#define _C1FCTRL_DMABS1_MASK                     0x00004000
#define _C1FCTRL_DMABS1_LENGTH                   0x00000001

#define _C1FCTRL_DMABS2_POSITION                 0x0000000F
#define _C1FCTRL_DMABS2_MASK                     0x00008000
#define _C1FCTRL_DMABS2_LENGTH                   0x00000001

#define _C1FIFO_FNRB_POSITION                    0x00000000
#define _C1FIFO_FNRB_MASK                        0x0000003F
#define _C1FIFO_FNRB_LENGTH                      0x00000006

#define _C1FIFO_FBP_POSITION                     0x00000008
#define _C1FIFO_FBP_MASK                         0x00003F00
#define _C1FIFO_FBP_LENGTH                       0x00000006

#define _C1FIFO_FNRB0_POSITION                   0x00000000
#define _C1FIFO_FNRB0_MASK                       0x00000001
#define _C1FIFO_FNRB0_LENGTH                     0x00000001

#define _C1FIFO_FNRB1_POSITION                   0x00000001
#define _C1FIFO_FNRB1_MASK                       0x00000002
#define _C1FIFO_FNRB1_LENGTH                     0x00000001

#define _C1FIFO_FNRB2_POSITION                   0x00000002
#define _C1FIFO_FNRB2_MASK                       0x00000004
#define _C1FIFO_FNRB2_LENGTH                     0x00000001

#define _C1FIFO_FNRB3_POSITION                   0x00000003
#define _C1FIFO_FNRB3_MASK                       0x00000008
#define _C1FIFO_FNRB3_LENGTH                     0x00000001

#define _C1FIFO_FNRB4_POSITION                   0x00000004
#define _C1FIFO_FNRB4_MASK                       0x00000010
#define _C1FIFO_FNRB4_LENGTH                     0x00000001

#define _C1FIFO_FNRB5_POSITION                   0x00000005
#define _C1FIFO_FNRB5_MASK                       0x00000020
#define _C1FIFO_FNRB5_LENGTH                     0x00000001

#define _C1FIFO_FBP0_POSITION                    0x00000008
#define _C1FIFO_FBP0_MASK                        0x00000100
#define _C1FIFO_FBP0_LENGTH                      0x00000001

#define _C1FIFO_FBP1_POSITION                    0x00000009
#define _C1FIFO_FBP1_MASK                        0x00000200
#define _C1FIFO_FBP1_LENGTH                      0x00000001

#define _C1FIFO_FBP2_POSITION                    0x0000000A
#define _C1FIFO_FBP2_MASK                        0x00000400
#define _C1FIFO_FBP2_LENGTH                      0x00000001

#define _C1FIFO_FBP3_POSITION                    0x0000000B
#define _C1FIFO_FBP3_MASK                        0x00000800
#define _C1FIFO_FBP3_LENGTH                      0x00000001

#define _C1FIFO_FBP4_POSITION                    0x0000000C
#define _C1FIFO_FBP4_MASK                        0x00001000
#define _C1FIFO_FBP4_LENGTH                      0x00000001

#define _C1FIFO_FBP5_POSITION                    0x0000000D
#define _C1FIFO_FBP5_MASK                        0x00002000
#define _C1FIFO_FBP5_LENGTH                      0x00000001

#define _C1INTF_TBIF_POSITION                    0x00000000
#define _C1INTF_TBIF_MASK                        0x00000001
#define _C1INTF_TBIF_LENGTH                      0x00000001

#define _C1INTF_RBIF_POSITION                    0x00000001
#define _C1INTF_RBIF_MASK                        0x00000002
#define _C1INTF_RBIF_LENGTH                      0x00000001

#define _C1INTF_RBOVIF_POSITION                  0x00000002
#define _C1INTF_RBOVIF_MASK                      0x00000004
#define _C1INTF_RBOVIF_LENGTH                    0x00000001

#define _C1INTF_FIFOIF_POSITION                  0x00000003
#define _C1INTF_FIFOIF_MASK                      0x00000008
#define _C1INTF_FIFOIF_LENGTH                    0x00000001

#define _C1INTF_ERRIF_POSITION                   0x00000005
#define _C1INTF_ERRIF_MASK                       0x00000020
#define _C1INTF_ERRIF_LENGTH                     0x00000001

#define _C1INTF_WAKIF_POSITION                   0x00000006
#define _C1INTF_WAKIF_MASK                       0x00000040
#define _C1INTF_WAKIF_LENGTH                     0x00000001

#define _C1INTF_IVRIF_POSITION                   0x00000007
#define _C1INTF_IVRIF_MASK                       0x00000080
#define _C1INTF_IVRIF_LENGTH                     0x00000001

#define _C1INTF_EWARN_POSITION                   0x00000008
#define _C1INTF_EWARN_MASK                       0x00000100
#define _C1INTF_EWARN_LENGTH                     0x00000001

#define _C1INTF_RXWAR_POSITION                   0x00000009
#define _C1INTF_RXWAR_MASK                       0x00000200
#define _C1INTF_RXWAR_LENGTH                     0x00000001

#define _C1INTF_TXWAR_POSITION                   0x0000000A
#define _C1INTF_TXWAR_MASK                       0x00000400
#define _C1INTF_TXWAR_LENGTH                     0x00000001

#define _C1INTF_RXBP_POSITION                    0x0000000B
#define _C1INTF_RXBP_MASK                        0x00000800
#define _C1INTF_RXBP_LENGTH                      0x00000001

#define _C1INTF_TXBP_POSITION                    0x0000000C
#define _C1INTF_TXBP_MASK                        0x00001000
#define _C1INTF_TXBP_LENGTH                      0x00000001

#define _C1INTF_TXBO_POSITION                    0x0000000D
#define _C1INTF_TXBO_MASK                        0x00002000
#define _C1INTF_TXBO_LENGTH                      0x00000001

#define _C1INTE_TBIE_POSITION                    0x00000000
#define _C1INTE_TBIE_MASK                        0x00000001
#define _C1INTE_TBIE_LENGTH                      0x00000001

#define _C1INTE_RBIE_POSITION                    0x00000001
#define _C1INTE_RBIE_MASK                        0x00000002
#define _C1INTE_RBIE_LENGTH                      0x00000001

#define _C1INTE_RBOVIE_POSITION                  0x00000002
#define _C1INTE_RBOVIE_MASK                      0x00000004
#define _C1INTE_RBOVIE_LENGTH                    0x00000001

#define _C1INTE_FIFOIE_POSITION                  0x00000003
#define _C1INTE_FIFOIE_MASK                      0x00000008
#define _C1INTE_FIFOIE_LENGTH                    0x00000001

#define _C1INTE_ERRIE_POSITION                   0x00000005
#define _C1INTE_ERRIE_MASK                       0x00000020
#define _C1INTE_ERRIE_LENGTH                     0x00000001

#define _C1INTE_WAKIE_POSITION                   0x00000006
#define _C1INTE_WAKIE_MASK                       0x00000040
#define _C1INTE_WAKIE_LENGTH                     0x00000001

#define _C1INTE_IVRIE_POSITION                   0x00000007
#define _C1INTE_IVRIE_MASK                       0x00000080
#define _C1INTE_IVRIE_LENGTH                     0x00000001

#define _C1EC_RERRCNT_POSITION                   0x00000000
#define _C1EC_RERRCNT_MASK                       0x000000FF
#define _C1EC_RERRCNT_LENGTH                     0x00000008

#define _C1EC_TERRCNT_POSITION                   0x00000008
#define _C1EC_TERRCNT_MASK                       0x0000FF00
#define _C1EC_TERRCNT_LENGTH                     0x00000008

#define _C1EC_RERRCNT0_POSITION                  0x00000000
#define _C1EC_RERRCNT0_MASK                      0x00000001
#define _C1EC_RERRCNT0_LENGTH                    0x00000001

#define _C1EC_RERRCNT1_POSITION                  0x00000001
#define _C1EC_RERRCNT1_MASK                      0x00000002
#define _C1EC_RERRCNT1_LENGTH                    0x00000001

#define _C1EC_RERRCNT2_POSITION                  0x00000002
#define _C1EC_RERRCNT2_MASK                      0x00000004
#define _C1EC_RERRCNT2_LENGTH                    0x00000001

#define _C1EC_RERRCNT3_POSITION                  0x00000003
#define _C1EC_RERRCNT3_MASK                      0x00000008
#define _C1EC_RERRCNT3_LENGTH                    0x00000001

#define _C1EC_RERRCNT4_POSITION                  0x00000004
#define _C1EC_RERRCNT4_MASK                      0x00000010
#define _C1EC_RERRCNT4_LENGTH                    0x00000001

#define _C1EC_RERRCNT5_POSITION                  0x00000005
#define _C1EC_RERRCNT5_MASK                      0x00000020
#define _C1EC_RERRCNT5_LENGTH                    0x00000001

#define _C1EC_RERRCNT6_POSITION                  0x00000006
#define _C1EC_RERRCNT6_MASK                      0x00000040
#define _C1EC_RERRCNT6_LENGTH                    0x00000001

#define _C1EC_RERRCNT7_POSITION                  0x00000007
#define _C1EC_RERRCNT7_MASK                      0x00000080
#define _C1EC_RERRCNT7_LENGTH                    0x00000001

#define _C1EC_TERRCNT0_POSITION                  0x00000008
#define _C1EC_TERRCNT0_MASK                      0x00000100
#define _C1EC_TERRCNT0_LENGTH                    0x00000001

#define _C1EC_TERRCNT1_POSITION                  0x00000009
#define _C1EC_TERRCNT1_MASK                      0x00000200
#define _C1EC_TERRCNT1_LENGTH                    0x00000001

#define _C1EC_TERRCNT2_POSITION                  0x0000000A
#define _C1EC_TERRCNT2_MASK                      0x00000400
#define _C1EC_TERRCNT2_LENGTH                    0x00000001

#define _C1EC_TERRCNT3_POSITION                  0x0000000B
#define _C1EC_TERRCNT3_MASK                      0x00000800
#define _C1EC_TERRCNT3_LENGTH                    0x00000001

#define _C1EC_TERRCNT4_POSITION                  0x0000000C
#define _C1EC_TERRCNT4_MASK                      0x00001000
#define _C1EC_TERRCNT4_LENGTH                    0x00000001

#define _C1EC_TERRCNT5_POSITION                  0x0000000D
#define _C1EC_TERRCNT5_MASK                      0x00002000
#define _C1EC_TERRCNT5_LENGTH                    0x00000001

#define _C1EC_TERRCNT6_POSITION                  0x0000000E
#define _C1EC_TERRCNT6_MASK                      0x00004000
#define _C1EC_TERRCNT6_LENGTH                    0x00000001

#define _C1EC_TERRCNT7_POSITION                  0x0000000F
#define _C1EC_TERRCNT7_MASK                      0x00008000
#define _C1EC_TERRCNT7_LENGTH                    0x00000001

#define _C1CFG1_BRP_POSITION                     0x00000000
#define _C1CFG1_BRP_MASK                         0x0000003F
#define _C1CFG1_BRP_LENGTH                       0x00000006

#define _C1CFG1_SJW_POSITION                     0x00000006
#define _C1CFG1_SJW_MASK                         0x000000C0
#define _C1CFG1_SJW_LENGTH                       0x00000002

#define _C1CFG1_BRP0_POSITION                    0x00000000
#define _C1CFG1_BRP0_MASK                        0x00000001
#define _C1CFG1_BRP0_LENGTH                      0x00000001

#define _C1CFG1_BRP1_POSITION                    0x00000001
#define _C1CFG1_BRP1_MASK                        0x00000002
#define _C1CFG1_BRP1_LENGTH                      0x00000001

#define _C1CFG1_BRP2_POSITION                    0x00000002
#define _C1CFG1_BRP2_MASK                        0x00000004
#define _C1CFG1_BRP2_LENGTH                      0x00000001

#define _C1CFG1_BRP3_POSITION                    0x00000003
#define _C1CFG1_BRP3_MASK                        0x00000008
#define _C1CFG1_BRP3_LENGTH                      0x00000001

#define _C1CFG1_BRP4_POSITION                    0x00000004
#define _C1CFG1_BRP4_MASK                        0x00000010
#define _C1CFG1_BRP4_LENGTH                      0x00000001

#define _C1CFG1_BRP5_POSITION                    0x00000005
#define _C1CFG1_BRP5_MASK                        0x00000020
#define _C1CFG1_BRP5_LENGTH                      0x00000001

#define _C1CFG1_SJW0_POSITION                    0x00000006
#define _C1CFG1_SJW0_MASK                        0x00000040
#define _C1CFG1_SJW0_LENGTH                      0x00000001

#define _C1CFG1_SJW1_POSITION                    0x00000007
#define _C1CFG1_SJW1_MASK                        0x00000080
#define _C1CFG1_SJW1_LENGTH                      0x00000001

#define _C1CFG2_PRSEG_POSITION                   0x00000000
#define _C1CFG2_PRSEG_MASK                       0x00000007
#define _C1CFG2_PRSEG_LENGTH                     0x00000003

#define _C1CFG2_SEG1PH_POSITION                  0x00000003
#define _C1CFG2_SEG1PH_MASK                      0x00000038
#define _C1CFG2_SEG1PH_LENGTH                    0x00000003

#define _C1CFG2_SAM_POSITION                     0x00000006
#define _C1CFG2_SAM_MASK                         0x00000040
#define _C1CFG2_SAM_LENGTH                       0x00000001

#define _C1CFG2_SEG2PHTS_POSITION                0x00000007
#define _C1CFG2_SEG2PHTS_MASK                    0x00000080
#define _C1CFG2_SEG2PHTS_LENGTH                  0x00000001

#define _C1CFG2_SEG2PH_POSITION                  0x00000008
#define _C1CFG2_SEG2PH_MASK                      0x00000700
#define _C1CFG2_SEG2PH_LENGTH                    0x00000003

#define _C1CFG2_WAKFIL_POSITION                  0x0000000E
#define _C1CFG2_WAKFIL_MASK                      0x00004000
#define _C1CFG2_WAKFIL_LENGTH                    0x00000001

#define _C1CFG2_PRSEG0_POSITION                  0x00000000
#define _C1CFG2_PRSEG0_MASK                      0x00000001
#define _C1CFG2_PRSEG0_LENGTH                    0x00000001

#define _C1CFG2_PRSEG1_POSITION                  0x00000001
#define _C1CFG2_PRSEG1_MASK                      0x00000002
#define _C1CFG2_PRSEG1_LENGTH                    0x00000001

#define _C1CFG2_PRSEG2_POSITION                  0x00000002
#define _C1CFG2_PRSEG2_MASK                      0x00000004
#define _C1CFG2_PRSEG2_LENGTH                    0x00000001

#define _C1CFG2_SEG1PH0_POSITION                 0x00000003
#define _C1CFG2_SEG1PH0_MASK                     0x00000008
#define _C1CFG2_SEG1PH0_LENGTH                   0x00000001

#define _C1CFG2_SEG1PH1_POSITION                 0x00000004
#define _C1CFG2_SEG1PH1_MASK                     0x00000010
#define _C1CFG2_SEG1PH1_LENGTH                   0x00000001

#define _C1CFG2_SEG1PH2_POSITION                 0x00000005
#define _C1CFG2_SEG1PH2_MASK                     0x00000020
#define _C1CFG2_SEG1PH2_LENGTH                   0x00000001

#define _C1CFG2_SEG2PH0_POSITION                 0x00000008
#define _C1CFG2_SEG2PH0_MASK                     0x00000100
#define _C1CFG2_SEG2PH0_LENGTH                   0x00000001

#define _C1CFG2_SEG2PH1_POSITION                 0x00000009
#define _C1CFG2_SEG2PH1_MASK                     0x00000200
#define _C1CFG2_SEG2PH1_LENGTH                   0x00000001

#define _C1CFG2_SEG2PH2_POSITION                 0x0000000A
#define _C1CFG2_SEG2PH2_MASK                     0x00000400
#define _C1CFG2_SEG2PH2_LENGTH                   0x00000001

#define _C1FEN1_FLTEN0_POSITION                  0x00000000
#define _C1FEN1_FLTEN0_MASK                      0x00000001
#define _C1FEN1_FLTEN0_LENGTH                    0x00000001

#define _C1FEN1_FLTEN1_POSITION                  0x00000001
#define _C1FEN1_FLTEN1_MASK                      0x00000002
#define _C1FEN1_FLTEN1_LENGTH                    0x00000001

#define _C1FEN1_FLTEN2_POSITION                  0x00000002
#define _C1FEN1_FLTEN2_MASK                      0x00000004
#define _C1FEN1_FLTEN2_LENGTH                    0x00000001

#define _C1FEN1_FLTEN3_POSITION                  0x00000003
#define _C1FEN1_FLTEN3_MASK                      0x00000008
#define _C1FEN1_FLTEN3_LENGTH                    0x00000001

#define _C1FEN1_FLTEN4_POSITION                  0x00000004
#define _C1FEN1_FLTEN4_MASK                      0x00000010
#define _C1FEN1_FLTEN4_LENGTH                    0x00000001

#define _C1FEN1_FLTEN5_POSITION                  0x00000005
#define _C1FEN1_FLTEN5_MASK                      0x00000020
#define _C1FEN1_FLTEN5_LENGTH                    0x00000001

#define _C1FEN1_FLTEN6_POSITION                  0x00000006
#define _C1FEN1_FLTEN6_MASK                      0x00000040
#define _C1FEN1_FLTEN6_LENGTH                    0x00000001

#define _C1FEN1_FLTEN7_POSITION                  0x00000007
#define _C1FEN1_FLTEN7_MASK                      0x00000080
#define _C1FEN1_FLTEN7_LENGTH                    0x00000001

#define _C1FEN1_FLTEN8_POSITION                  0x00000008
#define _C1FEN1_FLTEN8_MASK                      0x00000100
#define _C1FEN1_FLTEN8_LENGTH                    0x00000001

#define _C1FEN1_FLTEN9_POSITION                  0x00000009
#define _C1FEN1_FLTEN9_MASK                      0x00000200
#define _C1FEN1_FLTEN9_LENGTH                    0x00000001

#define _C1FEN1_FLTEN10_POSITION                 0x0000000A
#define _C1FEN1_FLTEN10_MASK                     0x00000400
#define _C1FEN1_FLTEN10_LENGTH                   0x00000001

#define _C1FEN1_FLTEN11_POSITION                 0x0000000B
#define _C1FEN1_FLTEN11_MASK                     0x00000800
#define _C1FEN1_FLTEN11_LENGTH                   0x00000001

#define _C1FEN1_FLTEN12_POSITION                 0x0000000C
#define _C1FEN1_FLTEN12_MASK                     0x00001000
#define _C1FEN1_FLTEN12_LENGTH                   0x00000001

#define _C1FEN1_FLTEN13_POSITION                 0x0000000D
#define _C1FEN1_FLTEN13_MASK                     0x00002000
#define _C1FEN1_FLTEN13_LENGTH                   0x00000001

#define _C1FEN1_FLTEN14_POSITION                 0x0000000E
#define _C1FEN1_FLTEN14_MASK                     0x00004000
#define _C1FEN1_FLTEN14_LENGTH                   0x00000001

#define _C1FEN1_FLTEN15_POSITION                 0x0000000F
#define _C1FEN1_FLTEN15_MASK                     0x00008000
#define _C1FEN1_FLTEN15_LENGTH                   0x00000001

#define _C1FEN1_FLTEN_POSITION                   0x00000000
#define _C1FEN1_FLTEN_MASK                       0x0000FFFF
#define _C1FEN1_FLTEN_LENGTH                     0x00000010

#define _C1FMSKSEL1_F0MSK_POSITION               0x00000000
#define _C1FMSKSEL1_F0MSK_MASK                   0x00000003
#define _C1FMSKSEL1_F0MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F1MSK_POSITION               0x00000002
#define _C1FMSKSEL1_F1MSK_MASK                   0x0000000C
#define _C1FMSKSEL1_F1MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F2MSK_POSITION               0x00000004
#define _C1FMSKSEL1_F2MSK_MASK                   0x00000030
#define _C1FMSKSEL1_F2MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F3MSK_POSITION               0x00000006
#define _C1FMSKSEL1_F3MSK_MASK                   0x000000C0
#define _C1FMSKSEL1_F3MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F4MSK_POSITION               0x00000008
#define _C1FMSKSEL1_F4MSK_MASK                   0x00000300
#define _C1FMSKSEL1_F4MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F5MSK_POSITION               0x0000000A
#define _C1FMSKSEL1_F5MSK_MASK                   0x00000C00
#define _C1FMSKSEL1_F5MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F6MSK_POSITION               0x0000000C
#define _C1FMSKSEL1_F6MSK_MASK                   0x00003000
#define _C1FMSKSEL1_F6MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F7MSK_POSITION               0x0000000E
#define _C1FMSKSEL1_F7MSK_MASK                   0x0000C000
#define _C1FMSKSEL1_F7MSK_LENGTH                 0x00000002

#define _C1FMSKSEL1_F0MSK0_POSITION              0x00000000
#define _C1FMSKSEL1_F0MSK0_MASK                  0x00000001
#define _C1FMSKSEL1_F0MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F0MSK1_POSITION              0x00000001
#define _C1FMSKSEL1_F0MSK1_MASK                  0x00000002
#define _C1FMSKSEL1_F0MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F1MSK0_POSITION              0x00000002
#define _C1FMSKSEL1_F1MSK0_MASK                  0x00000004
#define _C1FMSKSEL1_F1MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F1MSK1_POSITION              0x00000003
#define _C1FMSKSEL1_F1MSK1_MASK                  0x00000008
#define _C1FMSKSEL1_F1MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F2MSK0_POSITION              0x00000004
#define _C1FMSKSEL1_F2MSK0_MASK                  0x00000010
#define _C1FMSKSEL1_F2MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F2MSK1_POSITION              0x00000005
#define _C1FMSKSEL1_F2MSK1_MASK                  0x00000020
#define _C1FMSKSEL1_F2MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F3MSK0_POSITION              0x00000006
#define _C1FMSKSEL1_F3MSK0_MASK                  0x00000040
#define _C1FMSKSEL1_F3MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F3MSK1_POSITION              0x00000007
#define _C1FMSKSEL1_F3MSK1_MASK                  0x00000080
#define _C1FMSKSEL1_F3MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F4MSK0_POSITION              0x00000008
#define _C1FMSKSEL1_F4MSK0_MASK                  0x00000100
#define _C1FMSKSEL1_F4MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F4MSK1_POSITION              0x00000009
#define _C1FMSKSEL1_F4MSK1_MASK                  0x00000200
#define _C1FMSKSEL1_F4MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F5MSK0_POSITION              0x0000000A
#define _C1FMSKSEL1_F5MSK0_MASK                  0x00000400
#define _C1FMSKSEL1_F5MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F5MSK1_POSITION              0x0000000B
#define _C1FMSKSEL1_F5MSK1_MASK                  0x00000800
#define _C1FMSKSEL1_F5MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F6MSK0_POSITION              0x0000000C
#define _C1FMSKSEL1_F6MSK0_MASK                  0x00001000
#define _C1FMSKSEL1_F6MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F6MSK1_POSITION              0x0000000D
#define _C1FMSKSEL1_F6MSK1_MASK                  0x00002000
#define _C1FMSKSEL1_F6MSK1_LENGTH                0x00000001

#define _C1FMSKSEL1_F7MSK0_POSITION              0x0000000E
#define _C1FMSKSEL1_F7MSK0_MASK                  0x00004000
#define _C1FMSKSEL1_F7MSK0_LENGTH                0x00000001

#define _C1FMSKSEL1_F7MSK1_POSITION              0x0000000F
#define _C1FMSKSEL1_F7MSK1_MASK                  0x00008000
#define _C1FMSKSEL1_F7MSK1_LENGTH                0x00000001

#define _C1FMSKSEL2_F8MSK_POSITION               0x00000000
#define _C1FMSKSEL2_F8MSK_MASK                   0x00000003
#define _C1FMSKSEL2_F8MSK_LENGTH                 0x00000002

#define _C1FMSKSEL2_F9MSK_POSITION               0x00000002
#define _C1FMSKSEL2_F9MSK_MASK                   0x0000000C
#define _C1FMSKSEL2_F9MSK_LENGTH                 0x00000002

#define _C1FMSKSEL2_F10MSK_POSITION              0x00000004
#define _C1FMSKSEL2_F10MSK_MASK                  0x00000030
#define _C1FMSKSEL2_F10MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F11MSK_POSITION              0x00000006
#define _C1FMSKSEL2_F11MSK_MASK                  0x000000C0
#define _C1FMSKSEL2_F11MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F12MSK_POSITION              0x00000008
#define _C1FMSKSEL2_F12MSK_MASK                  0x00000300
#define _C1FMSKSEL2_F12MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F13MSK_POSITION              0x0000000A
#define _C1FMSKSEL2_F13MSK_MASK                  0x00000C00
#define _C1FMSKSEL2_F13MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F14MSK_POSITION              0x0000000C
#define _C1FMSKSEL2_F14MSK_MASK                  0x00003000
#define _C1FMSKSEL2_F14MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F15MSK_POSITION              0x0000000E
#define _C1FMSKSEL2_F15MSK_MASK                  0x0000C000
#define _C1FMSKSEL2_F15MSK_LENGTH                0x00000002

#define _C1FMSKSEL2_F8MSK0_POSITION              0x00000000
#define _C1FMSKSEL2_F8MSK0_MASK                  0x00000001
#define _C1FMSKSEL2_F8MSK0_LENGTH                0x00000001

#define _C1FMSKSEL2_F8MSK1_POSITION              0x00000001
#define _C1FMSKSEL2_F8MSK1_MASK                  0x00000002
#define _C1FMSKSEL2_F8MSK1_LENGTH                0x00000001

#define _C1FMSKSEL2_F9MSK0_POSITION              0x00000002
#define _C1FMSKSEL2_F9MSK0_MASK                  0x00000004
#define _C1FMSKSEL2_F9MSK0_LENGTH                0x00000001

#define _C1FMSKSEL2_F9MSK1_POSITION              0x00000003
#define _C1FMSKSEL2_F9MSK1_MASK                  0x00000008
#define _C1FMSKSEL2_F9MSK1_LENGTH                0x00000001

#define _C1FMSKSEL2_F10MSK0_POSITION             0x00000004
#define _C1FMSKSEL2_F10MSK0_MASK                 0x00000010
#define _C1FMSKSEL2_F10MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F10MSK1_POSITION             0x00000005
#define _C1FMSKSEL2_F10MSK1_MASK                 0x00000020
#define _C1FMSKSEL2_F10MSK1_LENGTH               0x00000001

#define _C1FMSKSEL2_F11MSK0_POSITION             0x00000006
#define _C1FMSKSEL2_F11MSK0_MASK                 0x00000040
#define _C1FMSKSEL2_F11MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F11MSK1_POSITION             0x00000007
#define _C1FMSKSEL2_F11MSK1_MASK                 0x00000080
#define _C1FMSKSEL2_F11MSK1_LENGTH               0x00000001

#define _C1FMSKSEL2_F12MSK0_POSITION             0x00000008
#define _C1FMSKSEL2_F12MSK0_MASK                 0x00000100
#define _C1FMSKSEL2_F12MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F12MSK1_POSITION             0x00000009
#define _C1FMSKSEL2_F12MSK1_MASK                 0x00000200
#define _C1FMSKSEL2_F12MSK1_LENGTH               0x00000001

#define _C1FMSKSEL2_F13MSK0_POSITION             0x0000000A
#define _C1FMSKSEL2_F13MSK0_MASK                 0x00000400
#define _C1FMSKSEL2_F13MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F13MSK1_POSITION             0x0000000B
#define _C1FMSKSEL2_F13MSK1_MASK                 0x00000800
#define _C1FMSKSEL2_F13MSK1_LENGTH               0x00000001

#define _C1FMSKSEL2_F14MSK0_POSITION             0x0000000C
#define _C1FMSKSEL2_F14MSK0_MASK                 0x00001000
#define _C1FMSKSEL2_F14MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F14MSK1_POSITION             0x0000000D
#define _C1FMSKSEL2_F14MSK1_MASK                 0x00002000
#define _C1FMSKSEL2_F14MSK1_LENGTH               0x00000001

#define _C1FMSKSEL2_F15MSK0_POSITION             0x0000000E
#define _C1FMSKSEL2_F15MSK0_MASK                 0x00004000
#define _C1FMSKSEL2_F15MSK0_LENGTH               0x00000001

#define _C1FMSKSEL2_F15MSK1_POSITION             0x0000000F
#define _C1FMSKSEL2_F15MSK1_MASK                 0x00008000
#define _C1FMSKSEL2_F15MSK1_LENGTH               0x00000001

#define _C1BUFPNT1_F0BP_POSITION                 0x00000000
#define _C1BUFPNT1_F0BP_MASK                     0x0000000F
#define _C1BUFPNT1_F0BP_LENGTH                   0x00000004

#define _C1BUFPNT1_F1BP_POSITION                 0x00000004
#define _C1BUFPNT1_F1BP_MASK                     0x000000F0
#define _C1BUFPNT1_F1BP_LENGTH                   0x00000004

#define _C1BUFPNT1_F2BP_POSITION                 0x00000008
#define _C1BUFPNT1_F2BP_MASK                     0x00000F00
#define _C1BUFPNT1_F2BP_LENGTH                   0x00000004

#define _C1BUFPNT1_F3BP_POSITION                 0x0000000C
#define _C1BUFPNT1_F3BP_MASK                     0x0000F000
#define _C1BUFPNT1_F3BP_LENGTH                   0x00000004

#define _C1BUFPNT1_F0BP0_POSITION                0x00000000
#define _C1BUFPNT1_F0BP0_MASK                    0x00000001
#define _C1BUFPNT1_F0BP0_LENGTH                  0x00000001

#define _C1BUFPNT1_F0BP1_POSITION                0x00000001
#define _C1BUFPNT1_F0BP1_MASK                    0x00000002
#define _C1BUFPNT1_F0BP1_LENGTH                  0x00000001

#define _C1BUFPNT1_F0BP2_POSITION                0x00000002
#define _C1BUFPNT1_F0BP2_MASK                    0x00000004
#define _C1BUFPNT1_F0BP2_LENGTH                  0x00000001

#define _C1BUFPNT1_F0BP3_POSITION                0x00000003
#define _C1BUFPNT1_F0BP3_MASK                    0x00000008
#define _C1BUFPNT1_F0BP3_LENGTH                  0x00000001

#define _C1BUFPNT1_F1BP0_POSITION                0x00000004
#define _C1BUFPNT1_F1BP0_MASK                    0x00000010
#define _C1BUFPNT1_F1BP0_LENGTH                  0x00000001

#define _C1BUFPNT1_F1BP1_POSITION                0x00000005
#define _C1BUFPNT1_F1BP1_MASK                    0x00000020
#define _C1BUFPNT1_F1BP1_LENGTH                  0x00000001

#define _C1BUFPNT1_F1BP2_POSITION                0x00000006
#define _C1BUFPNT1_F1BP2_MASK                    0x00000040
#define _C1BUFPNT1_F1BP2_LENGTH                  0x00000001

#define _C1BUFPNT1_F1BP3_POSITION                0x00000007
#define _C1BUFPNT1_F1BP3_MASK                    0x00000080
#define _C1BUFPNT1_F1BP3_LENGTH                  0x00000001

#define _C1BUFPNT1_F2BP0_POSITION                0x00000008
#define _C1BUFPNT1_F2BP0_MASK                    0x00000100
#define _C1BUFPNT1_F2BP0_LENGTH                  0x00000001

#define _C1BUFPNT1_F2BP1_POSITION                0x00000009
#define _C1BUFPNT1_F2BP1_MASK                    0x00000200
#define _C1BUFPNT1_F2BP1_LENGTH                  0x00000001

#define _C1BUFPNT1_F2BP2_POSITION                0x0000000A
#define _C1BUFPNT1_F2BP2_MASK                    0x00000400
#define _C1BUFPNT1_F2BP2_LENGTH                  0x00000001

#define _C1BUFPNT1_F2BP3_POSITION                0x0000000B
#define _C1BUFPNT1_F2BP3_MASK                    0x00000800
#define _C1BUFPNT1_F2BP3_LENGTH                  0x00000001

#define _C1BUFPNT1_F3BP0_POSITION                0x0000000C
#define _C1BUFPNT1_F3BP0_MASK                    0x00001000
#define _C1BUFPNT1_F3BP0_LENGTH                  0x00000001

#define _C1BUFPNT1_F3BP1_POSITION                0x0000000D
#define _C1BUFPNT1_F3BP1_MASK                    0x00002000
#define _C1BUFPNT1_F3BP1_LENGTH                  0x00000001

#define _C1BUFPNT1_F3BP2_POSITION                0x0000000E
#define _C1BUFPNT1_F3BP2_MASK                    0x00004000
#define _C1BUFPNT1_F3BP2_LENGTH                  0x00000001

#define _C1BUFPNT1_F3BP3_POSITION                0x0000000F
#define _C1BUFPNT1_F3BP3_MASK                    0x00008000
#define _C1BUFPNT1_F3BP3_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL0_POSITION                0x00000000
#define _C1RXFUL1_RXFUL0_MASK                    0x00000001
#define _C1RXFUL1_RXFUL0_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL1_POSITION                0x00000001
#define _C1RXFUL1_RXFUL1_MASK                    0x00000002
#define _C1RXFUL1_RXFUL1_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL2_POSITION                0x00000002
#define _C1RXFUL1_RXFUL2_MASK                    0x00000004
#define _C1RXFUL1_RXFUL2_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL3_POSITION                0x00000003
#define _C1RXFUL1_RXFUL3_MASK                    0x00000008
#define _C1RXFUL1_RXFUL3_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL4_POSITION                0x00000004
#define _C1RXFUL1_RXFUL4_MASK                    0x00000010
#define _C1RXFUL1_RXFUL4_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL5_POSITION                0x00000005
#define _C1RXFUL1_RXFUL5_MASK                    0x00000020
#define _C1RXFUL1_RXFUL5_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL6_POSITION                0x00000006
#define _C1RXFUL1_RXFUL6_MASK                    0x00000040
#define _C1RXFUL1_RXFUL6_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL7_POSITION                0x00000007
#define _C1RXFUL1_RXFUL7_MASK                    0x00000080
#define _C1RXFUL1_RXFUL7_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL8_POSITION                0x00000008
#define _C1RXFUL1_RXFUL8_MASK                    0x00000100
#define _C1RXFUL1_RXFUL8_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL9_POSITION                0x00000009
#define _C1RXFUL1_RXFUL9_MASK                    0x00000200
#define _C1RXFUL1_RXFUL9_LENGTH                  0x00000001

#define _C1RXFUL1_RXFUL10_POSITION               0x0000000A
#define _C1RXFUL1_RXFUL10_MASK                   0x00000400
#define _C1RXFUL1_RXFUL10_LENGTH                 0x00000001

#define _C1RXFUL1_RXFUL11_POSITION               0x0000000B
#define _C1RXFUL1_RXFUL11_MASK                   0x00000800
#define _C1RXFUL1_RXFUL11_LENGTH                 0x00000001

#define _C1RXFUL1_RXFUL12_POSITION               0x0000000C
#define _C1RXFUL1_RXFUL12_MASK                   0x00001000
#define _C1RXFUL1_RXFUL12_LENGTH                 0x00000001

#define _C1RXFUL1_RXFUL13_POSITION               0x0000000D
#define _C1RXFUL1_RXFUL13_MASK                   0x00002000
#define _C1RXFUL1_RXFUL13_LENGTH                 0x00000001

#define _C1RXFUL1_RXFUL14_POSITION               0x0000000E
#define _C1RXFUL1_RXFUL14_MASK                   0x00004000
#define _C1RXFUL1_RXFUL14_LENGTH                 0x00000001

#define _C1RXFUL1_RXFUL15_POSITION               0x0000000F
#define _C1RXFUL1_RXFUL15_MASK                   0x00008000
#define _C1RXFUL1_RXFUL15_LENGTH                 0x00000001

#define _C1BUFPNT2_F4BP_POSITION                 0x00000000
#define _C1BUFPNT2_F4BP_MASK                     0x0000000F
#define _C1BUFPNT2_F4BP_LENGTH                   0x00000004

#define _C1BUFPNT2_F5BP_POSITION                 0x00000004
#define _C1BUFPNT2_F5BP_MASK                     0x000000F0
#define _C1BUFPNT2_F5BP_LENGTH                   0x00000004

#define _C1BUFPNT2_F6BP_POSITION                 0x00000008
#define _C1BUFPNT2_F6BP_MASK                     0x00000F00
#define _C1BUFPNT2_F6BP_LENGTH                   0x00000004

#define _C1BUFPNT2_F7BP_POSITION                 0x0000000C
#define _C1BUFPNT2_F7BP_MASK                     0x0000F000
#define _C1BUFPNT2_F7BP_LENGTH                   0x00000004

#define _C1BUFPNT2_F4BP0_POSITION                0x00000000
#define _C1BUFPNT2_F4BP0_MASK                    0x00000001
#define _C1BUFPNT2_F4BP0_LENGTH                  0x00000001

#define _C1BUFPNT2_F4BP1_POSITION                0x00000001
#define _C1BUFPNT2_F4BP1_MASK                    0x00000002
#define _C1BUFPNT2_F4BP1_LENGTH                  0x00000001

#define _C1BUFPNT2_F4BP2_POSITION                0x00000002
#define _C1BUFPNT2_F4BP2_MASK                    0x00000004
#define _C1BUFPNT2_F4BP2_LENGTH                  0x00000001

#define _C1BUFPNT2_F4BP3_POSITION                0x00000003
#define _C1BUFPNT2_F4BP3_MASK                    0x00000008
#define _C1BUFPNT2_F4BP3_LENGTH                  0x00000001

#define _C1BUFPNT2_F5BP0_POSITION                0x00000004
#define _C1BUFPNT2_F5BP0_MASK                    0x00000010
#define _C1BUFPNT2_F5BP0_LENGTH                  0x00000001

#define _C1BUFPNT2_F5BP1_POSITION                0x00000005
#define _C1BUFPNT2_F5BP1_MASK                    0x00000020
#define _C1BUFPNT2_F5BP1_LENGTH                  0x00000001

#define _C1BUFPNT2_F5BP2_POSITION                0x00000006
#define _C1BUFPNT2_F5BP2_MASK                    0x00000040
#define _C1BUFPNT2_F5BP2_LENGTH                  0x00000001

#define _C1BUFPNT2_F5BP3_POSITION                0x00000007
#define _C1BUFPNT2_F5BP3_MASK                    0x00000080
#define _C1BUFPNT2_F5BP3_LENGTH                  0x00000001

#define _C1BUFPNT2_F6BP0_POSITION                0x00000008
#define _C1BUFPNT2_F6BP0_MASK                    0x00000100
#define _C1BUFPNT2_F6BP0_LENGTH                  0x00000001

#define _C1BUFPNT2_F6BP1_POSITION                0x00000009
#define _C1BUFPNT2_F6BP1_MASK                    0x00000200
#define _C1BUFPNT2_F6BP1_LENGTH                  0x00000001

#define _C1BUFPNT2_F6BP2_POSITION                0x0000000A
#define _C1BUFPNT2_F6BP2_MASK                    0x00000400
#define _C1BUFPNT2_F6BP2_LENGTH                  0x00000001

#define _C1BUFPNT2_F6BP3_POSITION                0x0000000B
#define _C1BUFPNT2_F6BP3_MASK                    0x00000800
#define _C1BUFPNT2_F6BP3_LENGTH                  0x00000001

#define _C1BUFPNT2_F7BP0_POSITION                0x0000000C
#define _C1BUFPNT2_F7BP0_MASK                    0x00001000
#define _C1BUFPNT2_F7BP0_LENGTH                  0x00000001

#define _C1BUFPNT2_F7BP1_POSITION                0x0000000D
#define _C1BUFPNT2_F7BP1_MASK                    0x00002000
#define _C1BUFPNT2_F7BP1_LENGTH                  0x00000001

#define _C1BUFPNT2_F7BP2_POSITION                0x0000000E
#define _C1BUFPNT2_F7BP2_MASK                    0x00004000
#define _C1BUFPNT2_F7BP2_LENGTH                  0x00000001

#define _C1BUFPNT2_F7BP3_POSITION                0x0000000F
#define _C1BUFPNT2_F7BP3_MASK                    0x00008000
#define _C1BUFPNT2_F7BP3_LENGTH                  0x00000001

#define _C1RXFUL2_RXFUL16_POSITION               0x00000000
#define _C1RXFUL2_RXFUL16_MASK                   0x00000001
#define _C1RXFUL2_RXFUL16_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL17_POSITION               0x00000001
#define _C1RXFUL2_RXFUL17_MASK                   0x00000002
#define _C1RXFUL2_RXFUL17_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL18_POSITION               0x00000002
#define _C1RXFUL2_RXFUL18_MASK                   0x00000004
#define _C1RXFUL2_RXFUL18_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL19_POSITION               0x00000003
#define _C1RXFUL2_RXFUL19_MASK                   0x00000008
#define _C1RXFUL2_RXFUL19_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL20_POSITION               0x00000004
#define _C1RXFUL2_RXFUL20_MASK                   0x00000010
#define _C1RXFUL2_RXFUL20_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL21_POSITION               0x00000005
#define _C1RXFUL2_RXFUL21_MASK                   0x00000020
#define _C1RXFUL2_RXFUL21_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL22_POSITION               0x00000006
#define _C1RXFUL2_RXFUL22_MASK                   0x00000040
#define _C1RXFUL2_RXFUL22_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL23_POSITION               0x00000007
#define _C1RXFUL2_RXFUL23_MASK                   0x00000080
#define _C1RXFUL2_RXFUL23_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL24_POSITION               0x00000008
#define _C1RXFUL2_RXFUL24_MASK                   0x00000100
#define _C1RXFUL2_RXFUL24_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL25_POSITION               0x00000009
#define _C1RXFUL2_RXFUL25_MASK                   0x00000200
#define _C1RXFUL2_RXFUL25_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL26_POSITION               0x0000000A
#define _C1RXFUL2_RXFUL26_MASK                   0x00000400
#define _C1RXFUL2_RXFUL26_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL27_POSITION               0x0000000B
#define _C1RXFUL2_RXFUL27_MASK                   0x00000800
#define _C1RXFUL2_RXFUL27_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL28_POSITION               0x0000000C
#define _C1RXFUL2_RXFUL28_MASK                   0x00001000
#define _C1RXFUL2_RXFUL28_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL29_POSITION               0x0000000D
#define _C1RXFUL2_RXFUL29_MASK                   0x00002000
#define _C1RXFUL2_RXFUL29_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL30_POSITION               0x0000000E
#define _C1RXFUL2_RXFUL30_MASK                   0x00004000
#define _C1RXFUL2_RXFUL30_LENGTH                 0x00000001

#define _C1RXFUL2_RXFUL31_POSITION               0x0000000F
#define _C1RXFUL2_RXFUL31_MASK                   0x00008000
#define _C1RXFUL2_RXFUL31_LENGTH                 0x00000001

#define _C1BUFPNT3_F8BP_POSITION                 0x00000000
#define _C1BUFPNT3_F8BP_MASK                     0x0000000F
#define _C1BUFPNT3_F8BP_LENGTH                   0x00000004

#define _C1BUFPNT3_F9BP_POSITION                 0x00000004
#define _C1BUFPNT3_F9BP_MASK                     0x000000F0
#define _C1BUFPNT3_F9BP_LENGTH                   0x00000004

#define _C1BUFPNT3_F10BP_POSITION                0x00000008
#define _C1BUFPNT3_F10BP_MASK                    0x00000F00
#define _C1BUFPNT3_F10BP_LENGTH                  0x00000004

#define _C1BUFPNT3_F11BP_POSITION                0x0000000C
#define _C1BUFPNT3_F11BP_MASK                    0x0000F000
#define _C1BUFPNT3_F11BP_LENGTH                  0x00000004

#define _C1BUFPNT3_F8BP0_POSITION                0x00000000
#define _C1BUFPNT3_F8BP0_MASK                    0x00000001
#define _C1BUFPNT3_F8BP0_LENGTH                  0x00000001

#define _C1BUFPNT3_F8BP1_POSITION                0x00000001
#define _C1BUFPNT3_F8BP1_MASK                    0x00000002
#define _C1BUFPNT3_F8BP1_LENGTH                  0x00000001

#define _C1BUFPNT3_F8BP2_POSITION                0x00000002
#define _C1BUFPNT3_F8BP2_MASK                    0x00000004
#define _C1BUFPNT3_F8BP2_LENGTH                  0x00000001

#define _C1BUFPNT3_F8BP3_POSITION                0x00000003
#define _C1BUFPNT3_F8BP3_MASK                    0x00000008
#define _C1BUFPNT3_F8BP3_LENGTH                  0x00000001

#define _C1BUFPNT3_F9BP0_POSITION                0x00000004
#define _C1BUFPNT3_F9BP0_MASK                    0x00000010
#define _C1BUFPNT3_F9BP0_LENGTH                  0x00000001

#define _C1BUFPNT3_F9BP1_POSITION                0x00000005
#define _C1BUFPNT3_F9BP1_MASK                    0x00000020
#define _C1BUFPNT3_F9BP1_LENGTH                  0x00000001

#define _C1BUFPNT3_F9BP2_POSITION                0x00000006
#define _C1BUFPNT3_F9BP2_MASK                    0x00000040
#define _C1BUFPNT3_F9BP2_LENGTH                  0x00000001

#define _C1BUFPNT3_F9BP3_POSITION                0x00000007
#define _C1BUFPNT3_F9BP3_MASK                    0x00000080
#define _C1BUFPNT3_F9BP3_LENGTH                  0x00000001

#define _C1BUFPNT3_F10BP0_POSITION               0x00000008
#define _C1BUFPNT3_F10BP0_MASK                   0x00000100
#define _C1BUFPNT3_F10BP0_LENGTH                 0x00000001

#define _C1BUFPNT3_F10BP1_POSITION               0x00000009
#define _C1BUFPNT3_F10BP1_MASK                   0x00000200
#define _C1BUFPNT3_F10BP1_LENGTH                 0x00000001

#define _C1BUFPNT3_F10BP2_POSITION               0x0000000A
#define _C1BUFPNT3_F10BP2_MASK                   0x00000400
#define _C1BUFPNT3_F10BP2_LENGTH                 0x00000001

#define _C1BUFPNT3_F10BP3_POSITION               0x0000000B
#define _C1BUFPNT3_F10BP3_MASK                   0x00000800
#define _C1BUFPNT3_F10BP3_LENGTH                 0x00000001

#define _C1BUFPNT3_F11BP0_POSITION               0x0000000C
#define _C1BUFPNT3_F11BP0_MASK                   0x00001000
#define _C1BUFPNT3_F11BP0_LENGTH                 0x00000001

#define _C1BUFPNT3_F11BP1_POSITION               0x0000000D
#define _C1BUFPNT3_F11BP1_MASK                   0x00002000
#define _C1BUFPNT3_F11BP1_LENGTH                 0x00000001

#define _C1BUFPNT3_F11BP2_POSITION               0x0000000E
#define _C1BUFPNT3_F11BP2_MASK                   0x00004000
#define _C1BUFPNT3_F11BP2_LENGTH                 0x00000001

#define _C1BUFPNT3_F11BP3_POSITION               0x0000000F
#define _C1BUFPNT3_F11BP3_MASK                   0x00008000
#define _C1BUFPNT3_F11BP3_LENGTH                 0x00000001

#define _C1BUFPNT4_F12BP_POSITION                0x00000000
#define _C1BUFPNT4_F12BP_MASK                    0x0000000F
#define _C1BUFPNT4_F12BP_LENGTH                  0x00000004

#define _C1BUFPNT4_F13BP_POSITION                0x00000004
#define _C1BUFPNT4_F13BP_MASK                    0x000000F0
#define _C1BUFPNT4_F13BP_LENGTH                  0x00000004

#define _C1BUFPNT4_F14BP_POSITION                0x00000008
#define _C1BUFPNT4_F14BP_MASK                    0x00000F00
#define _C1BUFPNT4_F14BP_LENGTH                  0x00000004

#define _C1BUFPNT4_F15BP_POSITION                0x0000000C
#define _C1BUFPNT4_F15BP_MASK                    0x0000F000
#define _C1BUFPNT4_F15BP_LENGTH                  0x00000004

#define _C1BUFPNT4_F12BP0_POSITION               0x00000000
#define _C1BUFPNT4_F12BP0_MASK                   0x00000001
#define _C1BUFPNT4_F12BP0_LENGTH                 0x00000001

#define _C1BUFPNT4_F12BP1_POSITION               0x00000001
#define _C1BUFPNT4_F12BP1_MASK                   0x00000002
#define _C1BUFPNT4_F12BP1_LENGTH                 0x00000001

#define _C1BUFPNT4_F12BP2_POSITION               0x00000002
#define _C1BUFPNT4_F12BP2_MASK                   0x00000004
#define _C1BUFPNT4_F12BP2_LENGTH                 0x00000001

#define _C1BUFPNT4_F12BP3_POSITION               0x00000003
#define _C1BUFPNT4_F12BP3_MASK                   0x00000008
#define _C1BUFPNT4_F12BP3_LENGTH                 0x00000001

#define _C1BUFPNT4_F13BP0_POSITION               0x00000004
#define _C1BUFPNT4_F13BP0_MASK                   0x00000010
#define _C1BUFPNT4_F13BP0_LENGTH                 0x00000001

#define _C1BUFPNT4_F13BP1_POSITION               0x00000005
#define _C1BUFPNT4_F13BP1_MASK                   0x00000020
#define _C1BUFPNT4_F13BP1_LENGTH                 0x00000001

#define _C1BUFPNT4_F13BP2_POSITION               0x00000006
#define _C1BUFPNT4_F13BP2_MASK                   0x00000040
#define _C1BUFPNT4_F13BP2_LENGTH                 0x00000001

#define _C1BUFPNT4_F13BP3_POSITION               0x00000007
#define _C1BUFPNT4_F13BP3_MASK                   0x00000080
#define _C1BUFPNT4_F13BP3_LENGTH                 0x00000001

#define _C1BUFPNT4_F14BP0_POSITION               0x00000008
#define _C1BUFPNT4_F14BP0_MASK                   0x00000100
#define _C1BUFPNT4_F14BP0_LENGTH                 0x00000001

#define _C1BUFPNT4_F14BP1_POSITION               0x00000009
#define _C1BUFPNT4_F14BP1_MASK                   0x00000200
#define _C1BUFPNT4_F14BP1_LENGTH                 0x00000001

#define _C1BUFPNT4_F14BP2_POSITION               0x0000000A
#define _C1BUFPNT4_F14BP2_MASK                   0x00000400
#define _C1BUFPNT4_F14BP2_LENGTH                 0x00000001

#define _C1BUFPNT4_F14BP3_POSITION               0x0000000B
#define _C1BUFPNT4_F14BP3_MASK                   0x00000800
#define _C1BUFPNT4_F14BP3_LENGTH                 0x00000001

#define _C1BUFPNT4_F15BP0_POSITION               0x0000000C
#define _C1BUFPNT4_F15BP0_MASK                   0x00001000
#define _C1BUFPNT4_F15BP0_LENGTH                 0x00000001

#define _C1BUFPNT4_F15BP1_POSITION               0x0000000D
#define _C1BUFPNT4_F15BP1_MASK                   0x00002000
#define _C1BUFPNT4_F15BP1_LENGTH                 0x00000001

#define _C1BUFPNT4_F15BP2_POSITION               0x0000000E
#define _C1BUFPNT4_F15BP2_MASK                   0x00004000
#define _C1BUFPNT4_F15BP2_LENGTH                 0x00000001

#define _C1BUFPNT4_F15BP3_POSITION               0x0000000F
#define _C1BUFPNT4_F15BP3_MASK                   0x00008000
#define _C1BUFPNT4_F15BP3_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF0_POSITION                0x00000000
#define _C1RXOVF1_RXOVF0_MASK                    0x00000001
#define _C1RXOVF1_RXOVF0_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF1_POSITION                0x00000001
#define _C1RXOVF1_RXOVF1_MASK                    0x00000002
#define _C1RXOVF1_RXOVF1_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF2_POSITION                0x00000002
#define _C1RXOVF1_RXOVF2_MASK                    0x00000004
#define _C1RXOVF1_RXOVF2_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF3_POSITION                0x00000003
#define _C1RXOVF1_RXOVF3_MASK                    0x00000008
#define _C1RXOVF1_RXOVF3_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF4_POSITION                0x00000004
#define _C1RXOVF1_RXOVF4_MASK                    0x00000010
#define _C1RXOVF1_RXOVF4_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF5_POSITION                0x00000005
#define _C1RXOVF1_RXOVF5_MASK                    0x00000020
#define _C1RXOVF1_RXOVF5_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF6_POSITION                0x00000006
#define _C1RXOVF1_RXOVF6_MASK                    0x00000040
#define _C1RXOVF1_RXOVF6_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF7_POSITION                0x00000007
#define _C1RXOVF1_RXOVF7_MASK                    0x00000080
#define _C1RXOVF1_RXOVF7_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF8_POSITION                0x00000008
#define _C1RXOVF1_RXOVF8_MASK                    0x00000100
#define _C1RXOVF1_RXOVF8_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF9_POSITION                0x00000009
#define _C1RXOVF1_RXOVF9_MASK                    0x00000200
#define _C1RXOVF1_RXOVF9_LENGTH                  0x00000001

#define _C1RXOVF1_RXOVF10_POSITION               0x0000000A
#define _C1RXOVF1_RXOVF10_MASK                   0x00000400
#define _C1RXOVF1_RXOVF10_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF11_POSITION               0x0000000B
#define _C1RXOVF1_RXOVF11_MASK                   0x00000800
#define _C1RXOVF1_RXOVF11_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF12_POSITION               0x0000000C
#define _C1RXOVF1_RXOVF12_MASK                   0x00001000
#define _C1RXOVF1_RXOVF12_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF13_POSITION               0x0000000D
#define _C1RXOVF1_RXOVF13_MASK                   0x00002000
#define _C1RXOVF1_RXOVF13_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF14_POSITION               0x0000000E
#define _C1RXOVF1_RXOVF14_MASK                   0x00004000
#define _C1RXOVF1_RXOVF14_LENGTH                 0x00000001

#define _C1RXOVF1_RXOVF15_POSITION               0x0000000F
#define _C1RXOVF1_RXOVF15_MASK                   0x00008000
#define _C1RXOVF1_RXOVF15_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF16_POSITION               0x00000000
#define _C1RXOVF2_RXOVF16_MASK                   0x00000001
#define _C1RXOVF2_RXOVF16_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF17_POSITION               0x00000001
#define _C1RXOVF2_RXOVF17_MASK                   0x00000002
#define _C1RXOVF2_RXOVF17_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF18_POSITION               0x00000002
#define _C1RXOVF2_RXOVF18_MASK                   0x00000004
#define _C1RXOVF2_RXOVF18_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF19_POSITION               0x00000003
#define _C1RXOVF2_RXOVF19_MASK                   0x00000008
#define _C1RXOVF2_RXOVF19_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF20_POSITION               0x00000004
#define _C1RXOVF2_RXOVF20_MASK                   0x00000010
#define _C1RXOVF2_RXOVF20_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF21_POSITION               0x00000005
#define _C1RXOVF2_RXOVF21_MASK                   0x00000020
#define _C1RXOVF2_RXOVF21_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF22_POSITION               0x00000006
#define _C1RXOVF2_RXOVF22_MASK                   0x00000040
#define _C1RXOVF2_RXOVF22_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF23_POSITION               0x00000007
#define _C1RXOVF2_RXOVF23_MASK                   0x00000080
#define _C1RXOVF2_RXOVF23_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF24_POSITION               0x00000008
#define _C1RXOVF2_RXOVF24_MASK                   0x00000100
#define _C1RXOVF2_RXOVF24_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF25_POSITION               0x00000009
#define _C1RXOVF2_RXOVF25_MASK                   0x00000200
#define _C1RXOVF2_RXOVF25_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF26_POSITION               0x0000000A
#define _C1RXOVF2_RXOVF26_MASK                   0x00000400
#define _C1RXOVF2_RXOVF26_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF27_POSITION               0x0000000B
#define _C1RXOVF2_RXOVF27_MASK                   0x00000800
#define _C1RXOVF2_RXOVF27_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF28_POSITION               0x0000000C
#define _C1RXOVF2_RXOVF28_MASK                   0x00001000
#define _C1RXOVF2_RXOVF28_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF29_POSITION               0x0000000D
#define _C1RXOVF2_RXOVF29_MASK                   0x00002000
#define _C1RXOVF2_RXOVF29_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF30_POSITION               0x0000000E
#define _C1RXOVF2_RXOVF30_MASK                   0x00004000
#define _C1RXOVF2_RXOVF30_LENGTH                 0x00000001

#define _C1RXOVF2_RXOVF31_POSITION               0x0000000F
#define _C1RXOVF2_RXOVF31_MASK                   0x00008000
#define _C1RXOVF2_RXOVF31_LENGTH                 0x00000001

#define _C1RXM0SID_EID16_POSITION                0x00000000
#define _C1RXM0SID_EID16_MASK                    0x00000001
#define _C1RXM0SID_EID16_LENGTH                  0x00000001

#define _C1RXM0SID_EID17_POSITION                0x00000001
#define _C1RXM0SID_EID17_MASK                    0x00000002
#define _C1RXM0SID_EID17_LENGTH                  0x00000001

#define _C1RXM0SID_MIDE_POSITION                 0x00000003
#define _C1RXM0SID_MIDE_MASK                     0x00000008
#define _C1RXM0SID_MIDE_LENGTH                   0x00000001

#define _C1RXM0SID_SID0_POSITION                 0x00000005
#define _C1RXM0SID_SID0_MASK                     0x00000020
#define _C1RXM0SID_SID0_LENGTH                   0x00000001

#define _C1RXM0SID_SID1_POSITION                 0x00000006
#define _C1RXM0SID_SID1_MASK                     0x00000040
#define _C1RXM0SID_SID1_LENGTH                   0x00000001

#define _C1RXM0SID_SID2_POSITION                 0x00000007
#define _C1RXM0SID_SID2_MASK                     0x00000080
#define _C1RXM0SID_SID2_LENGTH                   0x00000001

#define _C1RXM0SID_SID3_POSITION                 0x00000008
#define _C1RXM0SID_SID3_MASK                     0x00000100
#define _C1RXM0SID_SID3_LENGTH                   0x00000001

#define _C1RXM0SID_SID4_POSITION                 0x00000009
#define _C1RXM0SID_SID4_MASK                     0x00000200
#define _C1RXM0SID_SID4_LENGTH                   0x00000001

#define _C1RXM0SID_SID5_POSITION                 0x0000000A
#define _C1RXM0SID_SID5_MASK                     0x00000400
#define _C1RXM0SID_SID5_LENGTH                   0x00000001

#define _C1RXM0SID_SID6_POSITION                 0x0000000B
#define _C1RXM0SID_SID6_MASK                     0x00000800
#define _C1RXM0SID_SID6_LENGTH                   0x00000001

#define _C1RXM0SID_SID7_POSITION                 0x0000000C
#define _C1RXM0SID_SID7_MASK                     0x00001000
#define _C1RXM0SID_SID7_LENGTH                   0x00000001

#define _C1RXM0SID_SID8_POSITION                 0x0000000D
#define _C1RXM0SID_SID8_MASK                     0x00002000
#define _C1RXM0SID_SID8_LENGTH                   0x00000001

#define _C1RXM0SID_SID9_POSITION                 0x0000000E
#define _C1RXM0SID_SID9_MASK                     0x00004000
#define _C1RXM0SID_SID9_LENGTH                   0x00000001

#define _C1RXM0SID_SID10_POSITION                0x0000000F
#define _C1RXM0SID_SID10_MASK                    0x00008000
#define _C1RXM0SID_SID10_LENGTH                  0x00000001

#define _C1RXM0SID_EID_POSITION                  0x00000000
#define _C1RXM0SID_EID_MASK                      0x00000003
#define _C1RXM0SID_EID_LENGTH                    0x00000002

#define _C1RXM0SID_SID_POSITION                  0x00000005
#define _C1RXM0SID_SID_MASK                      0x0000FFE0
#define _C1RXM0SID_SID_LENGTH                    0x0000000B

#define _C1TR01CON_TX0PRI_POSITION               0x00000000
#define _C1TR01CON_TX0PRI_MASK                   0x00000003
#define _C1TR01CON_TX0PRI_LENGTH                 0x00000002

#define _C1TR01CON_RTREN0_POSITION               0x00000002
#define _C1TR01CON_RTREN0_MASK                   0x00000004
#define _C1TR01CON_RTREN0_LENGTH                 0x00000001

#define _C1TR01CON_TXREQ0_POSITION               0x00000003
#define _C1TR01CON_TXREQ0_MASK                   0x00000008
#define _C1TR01CON_TXREQ0_LENGTH                 0x00000001

#define _C1TR01CON_TXERR0_POSITION               0x00000004
#define _C1TR01CON_TXERR0_MASK                   0x00000010
#define _C1TR01CON_TXERR0_LENGTH                 0x00000001

#define _C1TR01CON_TXLARB0_POSITION              0x00000005
#define _C1TR01CON_TXLARB0_MASK                  0x00000020
#define _C1TR01CON_TXLARB0_LENGTH                0x00000001

#define _C1TR01CON_TXABT0_POSITION               0x00000006
#define _C1TR01CON_TXABT0_MASK                   0x00000040
#define _C1TR01CON_TXABT0_LENGTH                 0x00000001

#define _C1TR01CON_TXEN0_POSITION                0x00000007
#define _C1TR01CON_TXEN0_MASK                    0x00000080
#define _C1TR01CON_TXEN0_LENGTH                  0x00000001

#define _C1TR01CON_TX1PRI_POSITION               0x00000008
#define _C1TR01CON_TX1PRI_MASK                   0x00000300
#define _C1TR01CON_TX1PRI_LENGTH                 0x00000002

#define _C1TR01CON_RTREN1_POSITION               0x0000000A
#define _C1TR01CON_RTREN1_MASK                   0x00000400
#define _C1TR01CON_RTREN1_LENGTH                 0x00000001

#define _C1TR01CON_TXREQ1_POSITION               0x0000000B
#define _C1TR01CON_TXREQ1_MASK                   0x00000800
#define _C1TR01CON_TXREQ1_LENGTH                 0x00000001

#define _C1TR01CON_TXERR1_POSITION               0x0000000C
#define _C1TR01CON_TXERR1_MASK                   0x00001000
#define _C1TR01CON_TXERR1_LENGTH                 0x00000001

#define _C1TR01CON_TXLARB1_POSITION              0x0000000D
#define _C1TR01CON_TXLARB1_MASK                  0x00002000
#define _C1TR01CON_TXLARB1_LENGTH                0x00000001

#define _C1TR01CON_TXABT1_POSITION               0x0000000E
#define _C1TR01CON_TXABT1_MASK                   0x00004000
#define _C1TR01CON_TXABT1_LENGTH                 0x00000001

#define _C1TR01CON_TXEN1_POSITION                0x0000000F
#define _C1TR01CON_TXEN1_MASK                    0x00008000
#define _C1TR01CON_TXEN1_LENGTH                  0x00000001

#define _C1TR01CON_TX0PRI0_POSITION              0x00000000
#define _C1TR01CON_TX0PRI0_MASK                  0x00000001
#define _C1TR01CON_TX0PRI0_LENGTH                0x00000001

#define _C1TR01CON_TX0PRI1_POSITION              0x00000001
#define _C1TR01CON_TX0PRI1_MASK                  0x00000002
#define _C1TR01CON_TX0PRI1_LENGTH                0x00000001

#define _C1TR01CON_TX1PRI0_POSITION              0x00000008
#define _C1TR01CON_TX1PRI0_MASK                  0x00000100
#define _C1TR01CON_TX1PRI0_LENGTH                0x00000001

#define _C1TR01CON_TX1PRI1_POSITION              0x00000009
#define _C1TR01CON_TX1PRI1_MASK                  0x00000200
#define _C1TR01CON_TX1PRI1_LENGTH                0x00000001

#define _C1RXM0EID_EID0_POSITION                 0x00000000
#define _C1RXM0EID_EID0_MASK                     0x00000001
#define _C1RXM0EID_EID0_LENGTH                   0x00000001

#define _C1RXM0EID_EID1_POSITION                 0x00000001
#define _C1RXM0EID_EID1_MASK                     0x00000002
#define _C1RXM0EID_EID1_LENGTH                   0x00000001

#define _C1RXM0EID_EID2_POSITION                 0x00000002
#define _C1RXM0EID_EID2_MASK                     0x00000004
#define _C1RXM0EID_EID2_LENGTH                   0x00000001

#define _C1RXM0EID_EID3_POSITION                 0x00000003
#define _C1RXM0EID_EID3_MASK                     0x00000008
#define _C1RXM0EID_EID3_LENGTH                   0x00000001

#define _C1RXM0EID_EID4_POSITION                 0x00000004
#define _C1RXM0EID_EID4_MASK                     0x00000010
#define _C1RXM0EID_EID4_LENGTH                   0x00000001

#define _C1RXM0EID_EID5_POSITION                 0x00000005
#define _C1RXM0EID_EID5_MASK                     0x00000020
#define _C1RXM0EID_EID5_LENGTH                   0x00000001

#define _C1RXM0EID_EID6_POSITION                 0x00000006
#define _C1RXM0EID_EID6_MASK                     0x00000040
#define _C1RXM0EID_EID6_LENGTH                   0x00000001

#define _C1RXM0EID_EID7_POSITION                 0x00000007
#define _C1RXM0EID_EID7_MASK                     0x00000080
#define _C1RXM0EID_EID7_LENGTH                   0x00000001

#define _C1RXM0EID_EID8_POSITION                 0x00000008
#define _C1RXM0EID_EID8_MASK                     0x00000100
#define _C1RXM0EID_EID8_LENGTH                   0x00000001

#define _C1RXM0EID_EID9_POSITION                 0x00000009
#define _C1RXM0EID_EID9_MASK                     0x00000200
#define _C1RXM0EID_EID9_LENGTH                   0x00000001

#define _C1RXM0EID_EID10_POSITION                0x0000000A
#define _C1RXM0EID_EID10_MASK                    0x00000400
#define _C1RXM0EID_EID10_LENGTH                  0x00000001

#define _C1RXM0EID_EID11_POSITION                0x0000000B
#define _C1RXM0EID_EID11_MASK                    0x00000800
#define _C1RXM0EID_EID11_LENGTH                  0x00000001

#define _C1RXM0EID_EID12_POSITION                0x0000000C
#define _C1RXM0EID_EID12_MASK                    0x00001000
#define _C1RXM0EID_EID12_LENGTH                  0x00000001

#define _C1RXM0EID_EID13_POSITION                0x0000000D
#define _C1RXM0EID_EID13_MASK                    0x00002000
#define _C1RXM0EID_EID13_LENGTH                  0x00000001

#define _C1RXM0EID_EID14_POSITION                0x0000000E
#define _C1RXM0EID_EID14_MASK                    0x00004000
#define _C1RXM0EID_EID14_LENGTH                  0x00000001

#define _C1RXM0EID_EID15_POSITION                0x0000000F
#define _C1RXM0EID_EID15_MASK                    0x00008000
#define _C1RXM0EID_EID15_LENGTH                  0x00000001

#define _C1RXM0EID_EID_POSITION                  0x00000000
#define _C1RXM0EID_EID_MASK                      0x0000FFFF
#define _C1RXM0EID_EID_LENGTH                    0x00000010

#define _C1TR23CON_TX2PRI_POSITION               0x00000000
#define _C1TR23CON_TX2PRI_MASK                   0x00000003
#define _C1TR23CON_TX2PRI_LENGTH                 0x00000002

#define _C1TR23CON_RTREN2_POSITION               0x00000002
#define _C1TR23CON_RTREN2_MASK                   0x00000004
#define _C1TR23CON_RTREN2_LENGTH                 0x00000001

#define _C1TR23CON_TXREQ2_POSITION               0x00000003
#define _C1TR23CON_TXREQ2_MASK                   0x00000008
#define _C1TR23CON_TXREQ2_LENGTH                 0x00000001

#define _C1TR23CON_TXERR2_POSITION               0x00000004
#define _C1TR23CON_TXERR2_MASK                   0x00000010
#define _C1TR23CON_TXERR2_LENGTH                 0x00000001

#define _C1TR23CON_TXLARB2_POSITION              0x00000005
#define _C1TR23CON_TXLARB2_MASK                  0x00000020
#define _C1TR23CON_TXLARB2_LENGTH                0x00000001

#define _C1TR23CON_TXABT2_POSITION               0x00000006
#define _C1TR23CON_TXABT2_MASK                   0x00000040
#define _C1TR23CON_TXABT2_LENGTH                 0x00000001

#define _C1TR23CON_TXEN2_POSITION                0x00000007
#define _C1TR23CON_TXEN2_MASK                    0x00000080
#define _C1TR23CON_TXEN2_LENGTH                  0x00000001

#define _C1TR23CON_TX3PRI_POSITION               0x00000008
#define _C1TR23CON_TX3PRI_MASK                   0x00000300
#define _C1TR23CON_TX3PRI_LENGTH                 0x00000002

#define _C1TR23CON_RTREN3_POSITION               0x0000000A
#define _C1TR23CON_RTREN3_MASK                   0x00000400
#define _C1TR23CON_RTREN3_LENGTH                 0x00000001

#define _C1TR23CON_TXREQ3_POSITION               0x0000000B
#define _C1TR23CON_TXREQ3_MASK                   0x00000800
#define _C1TR23CON_TXREQ3_LENGTH                 0x00000001

#define _C1TR23CON_TXERR3_POSITION               0x0000000C
#define _C1TR23CON_TXERR3_MASK                   0x00001000
#define _C1TR23CON_TXERR3_LENGTH                 0x00000001

#define _C1TR23CON_TXLARB3_POSITION              0x0000000D
#define _C1TR23CON_TXLARB3_MASK                  0x00002000
#define _C1TR23CON_TXLARB3_LENGTH                0x00000001

#define _C1TR23CON_TXABT3_POSITION               0x0000000E
#define _C1TR23CON_TXABT3_MASK                   0x00004000
#define _C1TR23CON_TXABT3_LENGTH                 0x00000001

#define _C1TR23CON_TXEN3_POSITION                0x0000000F
#define _C1TR23CON_TXEN3_MASK                    0x00008000
#define _C1TR23CON_TXEN3_LENGTH                  0x00000001

#define _C1TR23CON_TX2PRI0_POSITION              0x00000000
#define _C1TR23CON_TX2PRI0_MASK                  0x00000001
#define _C1TR23CON_TX2PRI0_LENGTH                0x00000001

#define _C1TR23CON_TX2PRI1_POSITION              0x00000001
#define _C1TR23CON_TX2PRI1_MASK                  0x00000002
#define _C1TR23CON_TX2PRI1_LENGTH                0x00000001

#define _C1TR23CON_TX3PRI0_POSITION              0x00000008
#define _C1TR23CON_TX3PRI0_MASK                  0x00000100
#define _C1TR23CON_TX3PRI0_LENGTH                0x00000001

#define _C1TR23CON_TX3PRI1_POSITION              0x00000009
#define _C1TR23CON_TX3PRI1_MASK                  0x00000200
#define _C1TR23CON_TX3PRI1_LENGTH                0x00000001

#define _C1RXM1SID_EID16_POSITION                0x00000000
#define _C1RXM1SID_EID16_MASK                    0x00000001
#define _C1RXM1SID_EID16_LENGTH                  0x00000001

#define _C1RXM1SID_EID17_POSITION                0x00000001
#define _C1RXM1SID_EID17_MASK                    0x00000002
#define _C1RXM1SID_EID17_LENGTH                  0x00000001

#define _C1RXM1SID_MIDE_POSITION                 0x00000003
#define _C1RXM1SID_MIDE_MASK                     0x00000008
#define _C1RXM1SID_MIDE_LENGTH                   0x00000001

#define _C1RXM1SID_SID0_POSITION                 0x00000005
#define _C1RXM1SID_SID0_MASK                     0x00000020
#define _C1RXM1SID_SID0_LENGTH                   0x00000001

#define _C1RXM1SID_SID1_POSITION                 0x00000006
#define _C1RXM1SID_SID1_MASK                     0x00000040
#define _C1RXM1SID_SID1_LENGTH                   0x00000001

#define _C1RXM1SID_SID2_POSITION                 0x00000007
#define _C1RXM1SID_SID2_MASK                     0x00000080
#define _C1RXM1SID_SID2_LENGTH                   0x00000001

#define _C1RXM1SID_SID3_POSITION                 0x00000008
#define _C1RXM1SID_SID3_MASK                     0x00000100
#define _C1RXM1SID_SID3_LENGTH                   0x00000001

#define _C1RXM1SID_SID4_POSITION                 0x00000009
#define _C1RXM1SID_SID4_MASK                     0x00000200
#define _C1RXM1SID_SID4_LENGTH                   0x00000001

#define _C1RXM1SID_SID5_POSITION                 0x0000000A
#define _C1RXM1SID_SID5_MASK                     0x00000400
#define _C1RXM1SID_SID5_LENGTH                   0x00000001

#define _C1RXM1SID_SID6_POSITION                 0x0000000B
#define _C1RXM1SID_SID6_MASK                     0x00000800
#define _C1RXM1SID_SID6_LENGTH                   0x00000001

#define _C1RXM1SID_SID7_POSITION                 0x0000000C
#define _C1RXM1SID_SID7_MASK                     0x00001000
#define _C1RXM1SID_SID7_LENGTH                   0x00000001

#define _C1RXM1SID_SID8_POSITION                 0x0000000D
#define _C1RXM1SID_SID8_MASK                     0x00002000
#define _C1RXM1SID_SID8_LENGTH                   0x00000001

#define _C1RXM1SID_SID9_POSITION                 0x0000000E
#define _C1RXM1SID_SID9_MASK                     0x00004000
#define _C1RXM1SID_SID9_LENGTH                   0x00000001

#define _C1RXM1SID_SID10_POSITION                0x0000000F
#define _C1RXM1SID_SID10_MASK                    0x00008000
#define _C1RXM1SID_SID10_LENGTH                  0x00000001

#define _C1RXM1SID_EID_POSITION                  0x00000000
#define _C1RXM1SID_EID_MASK                      0x00000003
#define _C1RXM1SID_EID_LENGTH                    0x00000002

#define _C1RXM1SID_SID_POSITION                  0x00000005
#define _C1RXM1SID_SID_MASK                      0x0000FFE0
#define _C1RXM1SID_SID_LENGTH                    0x0000000B

#define _C1TR45CON_TX4PRI_POSITION               0x00000000
#define _C1TR45CON_TX4PRI_MASK                   0x00000003
#define _C1TR45CON_TX4PRI_LENGTH                 0x00000002

#define _C1TR45CON_RTREN4_POSITION               0x00000002
#define _C1TR45CON_RTREN4_MASK                   0x00000004
#define _C1TR45CON_RTREN4_LENGTH                 0x00000001

#define _C1TR45CON_TXREQ4_POSITION               0x00000003
#define _C1TR45CON_TXREQ4_MASK                   0x00000008
#define _C1TR45CON_TXREQ4_LENGTH                 0x00000001

#define _C1TR45CON_TXERR4_POSITION               0x00000004
#define _C1TR45CON_TXERR4_MASK                   0x00000010
#define _C1TR45CON_TXERR4_LENGTH                 0x00000001

#define _C1TR45CON_TXLARB4_POSITION              0x00000005
#define _C1TR45CON_TXLARB4_MASK                  0x00000020
#define _C1TR45CON_TXLARB4_LENGTH                0x00000001

#define _C1TR45CON_TXABT4_POSITION               0x00000006
#define _C1TR45CON_TXABT4_MASK                   0x00000040
#define _C1TR45CON_TXABT4_LENGTH                 0x00000001

#define _C1TR45CON_TXEN4_POSITION                0x00000007
#define _C1TR45CON_TXEN4_MASK                    0x00000080
#define _C1TR45CON_TXEN4_LENGTH                  0x00000001

#define _C1TR45CON_TX5PRI_POSITION               0x00000008
#define _C1TR45CON_TX5PRI_MASK                   0x00000300
#define _C1TR45CON_TX5PRI_LENGTH                 0x00000002

#define _C1TR45CON_RTREN5_POSITION               0x0000000A
#define _C1TR45CON_RTREN5_MASK                   0x00000400
#define _C1TR45CON_RTREN5_LENGTH                 0x00000001

#define _C1TR45CON_TXREQ5_POSITION               0x0000000B
#define _C1TR45CON_TXREQ5_MASK                   0x00000800
#define _C1TR45CON_TXREQ5_LENGTH                 0x00000001

#define _C1TR45CON_TXERR5_POSITION               0x0000000C
#define _C1TR45CON_TXERR5_MASK                   0x00001000
#define _C1TR45CON_TXERR5_LENGTH                 0x00000001

#define _C1TR45CON_TXLARB5_POSITION              0x0000000D
#define _C1TR45CON_TXLARB5_MASK                  0x00002000
#define _C1TR45CON_TXLARB5_LENGTH                0x00000001

#define _C1TR45CON_TXABT5_POSITION               0x0000000E
#define _C1TR45CON_TXABT5_MASK                   0x00004000
#define _C1TR45CON_TXABT5_LENGTH                 0x00000001

#define _C1TR45CON_TXEN5_POSITION                0x0000000F
#define _C1TR45CON_TXEN5_MASK                    0x00008000
#define _C1TR45CON_TXEN5_LENGTH                  0x00000001

#define _C1TR45CON_TX4PRI0_POSITION              0x00000000
#define _C1TR45CON_TX4PRI0_MASK                  0x00000001
#define _C1TR45CON_TX4PRI0_LENGTH                0x00000001

#define _C1TR45CON_TX4PRI1_POSITION              0x00000001
#define _C1TR45CON_TX4PRI1_MASK                  0x00000002
#define _C1TR45CON_TX4PRI1_LENGTH                0x00000001

#define _C1TR45CON_TX5PRI0_POSITION              0x00000008
#define _C1TR45CON_TX5PRI0_MASK                  0x00000100
#define _C1TR45CON_TX5PRI0_LENGTH                0x00000001

#define _C1TR45CON_TX5PRI1_POSITION              0x00000009
#define _C1TR45CON_TX5PRI1_MASK                  0x00000200
#define _C1TR45CON_TX5PRI1_LENGTH                0x00000001

#define _C1RXM1EID_EID0_POSITION                 0x00000000
#define _C1RXM1EID_EID0_MASK                     0x00000001
#define _C1RXM1EID_EID0_LENGTH                   0x00000001

#define _C1RXM1EID_EID1_POSITION                 0x00000001
#define _C1RXM1EID_EID1_MASK                     0x00000002
#define _C1RXM1EID_EID1_LENGTH                   0x00000001

#define _C1RXM1EID_EID2_POSITION                 0x00000002
#define _C1RXM1EID_EID2_MASK                     0x00000004
#define _C1RXM1EID_EID2_LENGTH                   0x00000001

#define _C1RXM1EID_EID3_POSITION                 0x00000003
#define _C1RXM1EID_EID3_MASK                     0x00000008
#define _C1RXM1EID_EID3_LENGTH                   0x00000001

#define _C1RXM1EID_EID4_POSITION                 0x00000004
#define _C1RXM1EID_EID4_MASK                     0x00000010
#define _C1RXM1EID_EID4_LENGTH                   0x00000001

#define _C1RXM1EID_EID5_POSITION                 0x00000005
#define _C1RXM1EID_EID5_MASK                     0x00000020
#define _C1RXM1EID_EID5_LENGTH                   0x00000001

#define _C1RXM1EID_EID6_POSITION                 0x00000006
#define _C1RXM1EID_EID6_MASK                     0x00000040
#define _C1RXM1EID_EID6_LENGTH                   0x00000001

#define _C1RXM1EID_EID7_POSITION                 0x00000007
#define _C1RXM1EID_EID7_MASK                     0x00000080
#define _C1RXM1EID_EID7_LENGTH                   0x00000001

#define _C1RXM1EID_EID8_POSITION                 0x00000008
#define _C1RXM1EID_EID8_MASK                     0x00000100
#define _C1RXM1EID_EID8_LENGTH                   0x00000001

#define _C1RXM1EID_EID9_POSITION                 0x00000009
#define _C1RXM1EID_EID9_MASK                     0x00000200
#define _C1RXM1EID_EID9_LENGTH                   0x00000001

#define _C1RXM1EID_EID10_POSITION                0x0000000A
#define _C1RXM1EID_EID10_MASK                    0x00000400
#define _C1RXM1EID_EID10_LENGTH                  0x00000001

#define _C1RXM1EID_EID11_POSITION                0x0000000B
#define _C1RXM1EID_EID11_MASK                    0x00000800
#define _C1RXM1EID_EID11_LENGTH                  0x00000001

#define _C1RXM1EID_EID12_POSITION                0x0000000C
#define _C1RXM1EID_EID12_MASK                    0x00001000
#define _C1RXM1EID_EID12_LENGTH                  0x00000001

#define _C1RXM1EID_EID13_POSITION                0x0000000D
#define _C1RXM1EID_EID13_MASK                    0x00002000
#define _C1RXM1EID_EID13_LENGTH                  0x00000001

#define _C1RXM1EID_EID14_POSITION                0x0000000E
#define _C1RXM1EID_EID14_MASK                    0x00004000
#define _C1RXM1EID_EID14_LENGTH                  0x00000001

#define _C1RXM1EID_EID15_POSITION                0x0000000F
#define _C1RXM1EID_EID15_MASK                    0x00008000
#define _C1RXM1EID_EID15_LENGTH                  0x00000001

#define _C1RXM1EID_EID_POSITION                  0x00000000
#define _C1RXM1EID_EID_MASK                      0x0000FFFF
#define _C1RXM1EID_EID_LENGTH                    0x00000010

#define _C1TR67CON_TX6PRI_POSITION               0x00000000
#define _C1TR67CON_TX6PRI_MASK                   0x00000003
#define _C1TR67CON_TX6PRI_LENGTH                 0x00000002

#define _C1TR67CON_RTREN6_POSITION               0x00000002
#define _C1TR67CON_RTREN6_MASK                   0x00000004
#define _C1TR67CON_RTREN6_LENGTH                 0x00000001

#define _C1TR67CON_TXREQ6_POSITION               0x00000003
#define _C1TR67CON_TXREQ6_MASK                   0x00000008
#define _C1TR67CON_TXREQ6_LENGTH                 0x00000001

#define _C1TR67CON_TXERR6_POSITION               0x00000004
#define _C1TR67CON_TXERR6_MASK                   0x00000010
#define _C1TR67CON_TXERR6_LENGTH                 0x00000001

#define _C1TR67CON_TXLARB6_POSITION              0x00000005
#define _C1TR67CON_TXLARB6_MASK                  0x00000020
#define _C1TR67CON_TXLARB6_LENGTH                0x00000001

#define _C1TR67CON_TXABT6_POSITION               0x00000006
#define _C1TR67CON_TXABT6_MASK                   0x00000040
#define _C1TR67CON_TXABT6_LENGTH                 0x00000001

#define _C1TR67CON_TXEN6_POSITION                0x00000007
#define _C1TR67CON_TXEN6_MASK                    0x00000080
#define _C1TR67CON_TXEN6_LENGTH                  0x00000001

#define _C1TR67CON_TX7PRI_POSITION               0x00000008
#define _C1TR67CON_TX7PRI_MASK                   0x00000300
#define _C1TR67CON_TX7PRI_LENGTH                 0x00000002

#define _C1TR67CON_RTREN7_POSITION               0x0000000A
#define _C1TR67CON_RTREN7_MASK                   0x00000400
#define _C1TR67CON_RTREN7_LENGTH                 0x00000001

#define _C1TR67CON_TXREQ7_POSITION               0x0000000B
#define _C1TR67CON_TXREQ7_MASK                   0x00000800
#define _C1TR67CON_TXREQ7_LENGTH                 0x00000001

#define _C1TR67CON_TXERR7_POSITION               0x0000000C
#define _C1TR67CON_TXERR7_MASK                   0x00001000
#define _C1TR67CON_TXERR7_LENGTH                 0x00000001

#define _C1TR67CON_TXLARB7_POSITION              0x0000000D
#define _C1TR67CON_TXLARB7_MASK                  0x00002000
#define _C1TR67CON_TXLARB7_LENGTH                0x00000001

#define _C1TR67CON_TXABT7_POSITION               0x0000000E
#define _C1TR67CON_TXABT7_MASK                   0x00004000
#define _C1TR67CON_TXABT7_LENGTH                 0x00000001

#define _C1TR67CON_TXEN7_POSITION                0x0000000F
#define _C1TR67CON_TXEN7_MASK                    0x00008000
#define _C1TR67CON_TXEN7_LENGTH                  0x00000001

#define _C1TR67CON_TX6PRI0_POSITION              0x00000000
#define _C1TR67CON_TX6PRI0_MASK                  0x00000001
#define _C1TR67CON_TX6PRI0_LENGTH                0x00000001

#define _C1TR67CON_TX6PRI1_POSITION              0x00000001
#define _C1TR67CON_TX6PRI1_MASK                  0x00000002
#define _C1TR67CON_TX6PRI1_LENGTH                0x00000001

#define _C1TR67CON_TX7PRI0_POSITION              0x00000008
#define _C1TR67CON_TX7PRI0_MASK                  0x00000100
#define _C1TR67CON_TX7PRI0_LENGTH                0x00000001

#define _C1TR67CON_TX7PRI1_POSITION              0x00000009
#define _C1TR67CON_TX7PRI1_MASK                  0x00000200
#define _C1TR67CON_TX7PRI1_LENGTH                0x00000001

#define _C1RXM2SID_EID16_POSITION                0x00000000
#define _C1RXM2SID_EID16_MASK                    0x00000001
#define _C1RXM2SID_EID16_LENGTH                  0x00000001

#define _C1RXM2SID_EID17_POSITION                0x00000001
#define _C1RXM2SID_EID17_MASK                    0x00000002
#define _C1RXM2SID_EID17_LENGTH                  0x00000001

#define _C1RXM2SID_MIDE_POSITION                 0x00000003
#define _C1RXM2SID_MIDE_MASK                     0x00000008
#define _C1RXM2SID_MIDE_LENGTH                   0x00000001

#define _C1RXM2SID_SID0_POSITION                 0x00000005
#define _C1RXM2SID_SID0_MASK                     0x00000020
#define _C1RXM2SID_SID0_LENGTH                   0x00000001

#define _C1RXM2SID_SID1_POSITION                 0x00000006
#define _C1RXM2SID_SID1_MASK                     0x00000040
#define _C1RXM2SID_SID1_LENGTH                   0x00000001

#define _C1RXM2SID_SID2_POSITION                 0x00000007
#define _C1RXM2SID_SID2_MASK                     0x00000080
#define _C1RXM2SID_SID2_LENGTH                   0x00000001

#define _C1RXM2SID_SID3_POSITION                 0x00000008
#define _C1RXM2SID_SID3_MASK                     0x00000100
#define _C1RXM2SID_SID3_LENGTH                   0x00000001

#define _C1RXM2SID_SID4_POSITION                 0x00000009
#define _C1RXM2SID_SID4_MASK                     0x00000200
#define _C1RXM2SID_SID4_LENGTH                   0x00000001

#define _C1RXM2SID_SID5_POSITION                 0x0000000A
#define _C1RXM2SID_SID5_MASK                     0x00000400
#define _C1RXM2SID_SID5_LENGTH                   0x00000001

#define _C1RXM2SID_SID6_POSITION                 0x0000000B
#define _C1RXM2SID_SID6_MASK                     0x00000800
#define _C1RXM2SID_SID6_LENGTH                   0x00000001

#define _C1RXM2SID_SID7_POSITION                 0x0000000C
#define _C1RXM2SID_SID7_MASK                     0x00001000
#define _C1RXM2SID_SID7_LENGTH                   0x00000001

#define _C1RXM2SID_SID8_POSITION                 0x0000000D
#define _C1RXM2SID_SID8_MASK                     0x00002000
#define _C1RXM2SID_SID8_LENGTH                   0x00000001

#define _C1RXM2SID_SID9_POSITION                 0x0000000E
#define _C1RXM2SID_SID9_MASK                     0x00004000
#define _C1RXM2SID_SID9_LENGTH                   0x00000001

#define _C1RXM2SID_SID10_POSITION                0x0000000F
#define _C1RXM2SID_SID10_MASK                    0x00008000
#define _C1RXM2SID_SID10_LENGTH                  0x00000001

#define _C1RXM2SID_EID_POSITION                  0x00000000
#define _C1RXM2SID_EID_MASK                      0x00000003
#define _C1RXM2SID_EID_LENGTH                    0x00000002

#define _C1RXM2SID_SID_POSITION                  0x00000005
#define _C1RXM2SID_SID_MASK                      0x0000FFE0
#define _C1RXM2SID_SID_LENGTH                    0x0000000B

#define _C1RXM2EID_EID0_POSITION                 0x00000000
#define _C1RXM2EID_EID0_MASK                     0x00000001
#define _C1RXM2EID_EID0_LENGTH                   0x00000001

#define _C1RXM2EID_EID1_POSITION                 0x00000001
#define _C1RXM2EID_EID1_MASK                     0x00000002
#define _C1RXM2EID_EID1_LENGTH                   0x00000001

#define _C1RXM2EID_EID2_POSITION                 0x00000002
#define _C1RXM2EID_EID2_MASK                     0x00000004
#define _C1RXM2EID_EID2_LENGTH                   0x00000001

#define _C1RXM2EID_EID3_POSITION                 0x00000003
#define _C1RXM2EID_EID3_MASK                     0x00000008
#define _C1RXM2EID_EID3_LENGTH                   0x00000001

#define _C1RXM2EID_EID4_POSITION                 0x00000004
#define _C1RXM2EID_EID4_MASK                     0x00000010
#define _C1RXM2EID_EID4_LENGTH                   0x00000001

#define _C1RXM2EID_EID5_POSITION                 0x00000005
#define _C1RXM2EID_EID5_MASK                     0x00000020
#define _C1RXM2EID_EID5_LENGTH                   0x00000001

#define _C1RXM2EID_EID6_POSITION                 0x00000006
#define _C1RXM2EID_EID6_MASK                     0x00000040
#define _C1RXM2EID_EID6_LENGTH                   0x00000001

#define _C1RXM2EID_EID7_POSITION                 0x00000007
#define _C1RXM2EID_EID7_MASK                     0x00000080
#define _C1RXM2EID_EID7_LENGTH                   0x00000001

#define _C1RXM2EID_EID8_POSITION                 0x00000008
#define _C1RXM2EID_EID8_MASK                     0x00000100
#define _C1RXM2EID_EID8_LENGTH                   0x00000001

#define _C1RXM2EID_EID9_POSITION                 0x00000009
#define _C1RXM2EID_EID9_MASK                     0x00000200
#define _C1RXM2EID_EID9_LENGTH                   0x00000001

#define _C1RXM2EID_EID10_POSITION                0x0000000A
#define _C1RXM2EID_EID10_MASK                    0x00000400
#define _C1RXM2EID_EID10_LENGTH                  0x00000001

#define _C1RXM2EID_EID11_POSITION                0x0000000B
#define _C1RXM2EID_EID11_MASK                    0x00000800
#define _C1RXM2EID_EID11_LENGTH                  0x00000001

#define _C1RXM2EID_EID12_POSITION                0x0000000C
#define _C1RXM2EID_EID12_MASK                    0x00001000
#define _C1RXM2EID_EID12_LENGTH                  0x00000001

#define _C1RXM2EID_EID13_POSITION                0x0000000D
#define _C1RXM2EID_EID13_MASK                    0x00002000
#define _C1RXM2EID_EID13_LENGTH                  0x00000001

#define _C1RXM2EID_EID14_POSITION                0x0000000E
#define _C1RXM2EID_EID14_MASK                    0x00004000
#define _C1RXM2EID_EID14_LENGTH                  0x00000001

#define _C1RXM2EID_EID15_POSITION                0x0000000F
#define _C1RXM2EID_EID15_MASK                    0x00008000
#define _C1RXM2EID_EID15_LENGTH                  0x00000001

#define _C1RXM2EID_EID_POSITION                  0x00000000
#define _C1RXM2EID_EID_MASK                      0x0000FFFF
#define _C1RXM2EID_EID_LENGTH                    0x00000010

#define _C1RXF0SID_EID16_POSITION                0x00000000
#define _C1RXF0SID_EID16_MASK                    0x00000001
#define _C1RXF0SID_EID16_LENGTH                  0x00000001

#define _C1RXF0SID_EID17_POSITION                0x00000001
#define _C1RXF0SID_EID17_MASK                    0x00000002
#define _C1RXF0SID_EID17_LENGTH                  0x00000001

#define _C1RXF0SID_EXIDE_POSITION                0x00000003
#define _C1RXF0SID_EXIDE_MASK                    0x00000008
#define _C1RXF0SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF0SID_SID0_POSITION                 0x00000005
#define _C1RXF0SID_SID0_MASK                     0x00000020
#define _C1RXF0SID_SID0_LENGTH                   0x00000001

#define _C1RXF0SID_SID1_POSITION                 0x00000006
#define _C1RXF0SID_SID1_MASK                     0x00000040
#define _C1RXF0SID_SID1_LENGTH                   0x00000001

#define _C1RXF0SID_SID2_POSITION                 0x00000007
#define _C1RXF0SID_SID2_MASK                     0x00000080
#define _C1RXF0SID_SID2_LENGTH                   0x00000001

#define _C1RXF0SID_SID3_POSITION                 0x00000008
#define _C1RXF0SID_SID3_MASK                     0x00000100
#define _C1RXF0SID_SID3_LENGTH                   0x00000001

#define _C1RXF0SID_SID4_POSITION                 0x00000009
#define _C1RXF0SID_SID4_MASK                     0x00000200
#define _C1RXF0SID_SID4_LENGTH                   0x00000001

#define _C1RXF0SID_SID5_POSITION                 0x0000000A
#define _C1RXF0SID_SID5_MASK                     0x00000400
#define _C1RXF0SID_SID5_LENGTH                   0x00000001

#define _C1RXF0SID_SID6_POSITION                 0x0000000B
#define _C1RXF0SID_SID6_MASK                     0x00000800
#define _C1RXF0SID_SID6_LENGTH                   0x00000001

#define _C1RXF0SID_SID7_POSITION                 0x0000000C
#define _C1RXF0SID_SID7_MASK                     0x00001000
#define _C1RXF0SID_SID7_LENGTH                   0x00000001

#define _C1RXF0SID_SID8_POSITION                 0x0000000D
#define _C1RXF0SID_SID8_MASK                     0x00002000
#define _C1RXF0SID_SID8_LENGTH                   0x00000001

#define _C1RXF0SID_SID9_POSITION                 0x0000000E
#define _C1RXF0SID_SID9_MASK                     0x00004000
#define _C1RXF0SID_SID9_LENGTH                   0x00000001

#define _C1RXF0SID_SID10_POSITION                0x0000000F
#define _C1RXF0SID_SID10_MASK                    0x00008000
#define _C1RXF0SID_SID10_LENGTH                  0x00000001

#define _C1RXF0EID_EID0_POSITION                 0x00000000
#define _C1RXF0EID_EID0_MASK                     0x00000001
#define _C1RXF0EID_EID0_LENGTH                   0x00000001

#define _C1RXF0EID_EID1_POSITION                 0x00000001
#define _C1RXF0EID_EID1_MASK                     0x00000002
#define _C1RXF0EID_EID1_LENGTH                   0x00000001

#define _C1RXF0EID_EID2_POSITION                 0x00000002
#define _C1RXF0EID_EID2_MASK                     0x00000004
#define _C1RXF0EID_EID2_LENGTH                   0x00000001

#define _C1RXF0EID_EID3_POSITION                 0x00000003
#define _C1RXF0EID_EID3_MASK                     0x00000008
#define _C1RXF0EID_EID3_LENGTH                   0x00000001

#define _C1RXF0EID_EID4_POSITION                 0x00000004
#define _C1RXF0EID_EID4_MASK                     0x00000010
#define _C1RXF0EID_EID4_LENGTH                   0x00000001

#define _C1RXF0EID_EID5_POSITION                 0x00000005
#define _C1RXF0EID_EID5_MASK                     0x00000020
#define _C1RXF0EID_EID5_LENGTH                   0x00000001

#define _C1RXF0EID_EID6_POSITION                 0x00000006
#define _C1RXF0EID_EID6_MASK                     0x00000040
#define _C1RXF0EID_EID6_LENGTH                   0x00000001

#define _C1RXF0EID_EID7_POSITION                 0x00000007
#define _C1RXF0EID_EID7_MASK                     0x00000080
#define _C1RXF0EID_EID7_LENGTH                   0x00000001

#define _C1RXF0EID_EID8_POSITION                 0x00000008
#define _C1RXF0EID_EID8_MASK                     0x00000100
#define _C1RXF0EID_EID8_LENGTH                   0x00000001

#define _C1RXF0EID_EID9_POSITION                 0x00000009
#define _C1RXF0EID_EID9_MASK                     0x00000200
#define _C1RXF0EID_EID9_LENGTH                   0x00000001

#define _C1RXF0EID_EID10_POSITION                0x0000000A
#define _C1RXF0EID_EID10_MASK                    0x00000400
#define _C1RXF0EID_EID10_LENGTH                  0x00000001

#define _C1RXF0EID_EID11_POSITION                0x0000000B
#define _C1RXF0EID_EID11_MASK                    0x00000800
#define _C1RXF0EID_EID11_LENGTH                  0x00000001

#define _C1RXF0EID_EID12_POSITION                0x0000000C
#define _C1RXF0EID_EID12_MASK                    0x00001000
#define _C1RXF0EID_EID12_LENGTH                  0x00000001

#define _C1RXF0EID_EID13_POSITION                0x0000000D
#define _C1RXF0EID_EID13_MASK                    0x00002000
#define _C1RXF0EID_EID13_LENGTH                  0x00000001

#define _C1RXF0EID_EID14_POSITION                0x0000000E
#define _C1RXF0EID_EID14_MASK                    0x00004000
#define _C1RXF0EID_EID14_LENGTH                  0x00000001

#define _C1RXF0EID_EID15_POSITION                0x0000000F
#define _C1RXF0EID_EID15_MASK                    0x00008000
#define _C1RXF0EID_EID15_LENGTH                  0x00000001

#define _C1RXF1SID_EID16_POSITION                0x00000000
#define _C1RXF1SID_EID16_MASK                    0x00000001
#define _C1RXF1SID_EID16_LENGTH                  0x00000001

#define _C1RXF1SID_EID17_POSITION                0x00000001
#define _C1RXF1SID_EID17_MASK                    0x00000002
#define _C1RXF1SID_EID17_LENGTH                  0x00000001

#define _C1RXF1SID_EXIDE_POSITION                0x00000003
#define _C1RXF1SID_EXIDE_MASK                    0x00000008
#define _C1RXF1SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF1SID_SID0_POSITION                 0x00000005
#define _C1RXF1SID_SID0_MASK                     0x00000020
#define _C1RXF1SID_SID0_LENGTH                   0x00000001

#define _C1RXF1SID_SID1_POSITION                 0x00000006
#define _C1RXF1SID_SID1_MASK                     0x00000040
#define _C1RXF1SID_SID1_LENGTH                   0x00000001

#define _C1RXF1SID_SID2_POSITION                 0x00000007
#define _C1RXF1SID_SID2_MASK                     0x00000080
#define _C1RXF1SID_SID2_LENGTH                   0x00000001

#define _C1RXF1SID_SID3_POSITION                 0x00000008
#define _C1RXF1SID_SID3_MASK                     0x00000100
#define _C1RXF1SID_SID3_LENGTH                   0x00000001

#define _C1RXF1SID_SID4_POSITION                 0x00000009
#define _C1RXF1SID_SID4_MASK                     0x00000200
#define _C1RXF1SID_SID4_LENGTH                   0x00000001

#define _C1RXF1SID_SID5_POSITION                 0x0000000A
#define _C1RXF1SID_SID5_MASK                     0x00000400
#define _C1RXF1SID_SID5_LENGTH                   0x00000001

#define _C1RXF1SID_SID6_POSITION                 0x0000000B
#define _C1RXF1SID_SID6_MASK                     0x00000800
#define _C1RXF1SID_SID6_LENGTH                   0x00000001

#define _C1RXF1SID_SID7_POSITION                 0x0000000C
#define _C1RXF1SID_SID7_MASK                     0x00001000
#define _C1RXF1SID_SID7_LENGTH                   0x00000001

#define _C1RXF1SID_SID8_POSITION                 0x0000000D
#define _C1RXF1SID_SID8_MASK                     0x00002000
#define _C1RXF1SID_SID8_LENGTH                   0x00000001

#define _C1RXF1SID_SID9_POSITION                 0x0000000E
#define _C1RXF1SID_SID9_MASK                     0x00004000
#define _C1RXF1SID_SID9_LENGTH                   0x00000001

#define _C1RXF1SID_SID10_POSITION                0x0000000F
#define _C1RXF1SID_SID10_MASK                    0x00008000
#define _C1RXF1SID_SID10_LENGTH                  0x00000001

#define _C1RXF1EID_EID0_POSITION                 0x00000000
#define _C1RXF1EID_EID0_MASK                     0x00000001
#define _C1RXF1EID_EID0_LENGTH                   0x00000001

#define _C1RXF1EID_EID1_POSITION                 0x00000001
#define _C1RXF1EID_EID1_MASK                     0x00000002
#define _C1RXF1EID_EID1_LENGTH                   0x00000001

#define _C1RXF1EID_EID2_POSITION                 0x00000002
#define _C1RXF1EID_EID2_MASK                     0x00000004
#define _C1RXF1EID_EID2_LENGTH                   0x00000001

#define _C1RXF1EID_EID3_POSITION                 0x00000003
#define _C1RXF1EID_EID3_MASK                     0x00000008
#define _C1RXF1EID_EID3_LENGTH                   0x00000001

#define _C1RXF1EID_EID4_POSITION                 0x00000004
#define _C1RXF1EID_EID4_MASK                     0x00000010
#define _C1RXF1EID_EID4_LENGTH                   0x00000001

#define _C1RXF1EID_EID5_POSITION                 0x00000005
#define _C1RXF1EID_EID5_MASK                     0x00000020
#define _C1RXF1EID_EID5_LENGTH                   0x00000001

#define _C1RXF1EID_EID6_POSITION                 0x00000006
#define _C1RXF1EID_EID6_MASK                     0x00000040
#define _C1RXF1EID_EID6_LENGTH                   0x00000001

#define _C1RXF1EID_EID7_POSITION                 0x00000007
#define _C1RXF1EID_EID7_MASK                     0x00000080
#define _C1RXF1EID_EID7_LENGTH                   0x00000001

#define _C1RXF1EID_EID8_POSITION                 0x00000008
#define _C1RXF1EID_EID8_MASK                     0x00000100
#define _C1RXF1EID_EID8_LENGTH                   0x00000001

#define _C1RXF1EID_EID9_POSITION                 0x00000009
#define _C1RXF1EID_EID9_MASK                     0x00000200
#define _C1RXF1EID_EID9_LENGTH                   0x00000001

#define _C1RXF1EID_EID10_POSITION                0x0000000A
#define _C1RXF1EID_EID10_MASK                    0x00000400
#define _C1RXF1EID_EID10_LENGTH                  0x00000001

#define _C1RXF1EID_EID11_POSITION                0x0000000B
#define _C1RXF1EID_EID11_MASK                    0x00000800
#define _C1RXF1EID_EID11_LENGTH                  0x00000001

#define _C1RXF1EID_EID12_POSITION                0x0000000C
#define _C1RXF1EID_EID12_MASK                    0x00001000
#define _C1RXF1EID_EID12_LENGTH                  0x00000001

#define _C1RXF1EID_EID13_POSITION                0x0000000D
#define _C1RXF1EID_EID13_MASK                    0x00002000
#define _C1RXF1EID_EID13_LENGTH                  0x00000001

#define _C1RXF1EID_EID14_POSITION                0x0000000E
#define _C1RXF1EID_EID14_MASK                    0x00004000
#define _C1RXF1EID_EID14_LENGTH                  0x00000001

#define _C1RXF1EID_EID15_POSITION                0x0000000F
#define _C1RXF1EID_EID15_MASK                    0x00008000
#define _C1RXF1EID_EID15_LENGTH                  0x00000001

#define _C1RXF2SID_EID16_POSITION                0x00000000
#define _C1RXF2SID_EID16_MASK                    0x00000001
#define _C1RXF2SID_EID16_LENGTH                  0x00000001

#define _C1RXF2SID_EID17_POSITION                0x00000001
#define _C1RXF2SID_EID17_MASK                    0x00000002
#define _C1RXF2SID_EID17_LENGTH                  0x00000001

#define _C1RXF2SID_EXIDE_POSITION                0x00000003
#define _C1RXF2SID_EXIDE_MASK                    0x00000008
#define _C1RXF2SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF2SID_SID0_POSITION                 0x00000005
#define _C1RXF2SID_SID0_MASK                     0x00000020
#define _C1RXF2SID_SID0_LENGTH                   0x00000001

#define _C1RXF2SID_SID1_POSITION                 0x00000006
#define _C1RXF2SID_SID1_MASK                     0x00000040
#define _C1RXF2SID_SID1_LENGTH                   0x00000001

#define _C1RXF2SID_SID2_POSITION                 0x00000007
#define _C1RXF2SID_SID2_MASK                     0x00000080
#define _C1RXF2SID_SID2_LENGTH                   0x00000001

#define _C1RXF2SID_SID3_POSITION                 0x00000008
#define _C1RXF2SID_SID3_MASK                     0x00000100
#define _C1RXF2SID_SID3_LENGTH                   0x00000001

#define _C1RXF2SID_SID4_POSITION                 0x00000009
#define _C1RXF2SID_SID4_MASK                     0x00000200
#define _C1RXF2SID_SID4_LENGTH                   0x00000001

#define _C1RXF2SID_SID5_POSITION                 0x0000000A
#define _C1RXF2SID_SID5_MASK                     0x00000400
#define _C1RXF2SID_SID5_LENGTH                   0x00000001

#define _C1RXF2SID_SID6_POSITION                 0x0000000B
#define _C1RXF2SID_SID6_MASK                     0x00000800
#define _C1RXF2SID_SID6_LENGTH                   0x00000001

#define _C1RXF2SID_SID7_POSITION                 0x0000000C
#define _C1RXF2SID_SID7_MASK                     0x00001000
#define _C1RXF2SID_SID7_LENGTH                   0x00000001

#define _C1RXF2SID_SID8_POSITION                 0x0000000D
#define _C1RXF2SID_SID8_MASK                     0x00002000
#define _C1RXF2SID_SID8_LENGTH                   0x00000001

#define _C1RXF2SID_SID9_POSITION                 0x0000000E
#define _C1RXF2SID_SID9_MASK                     0x00004000
#define _C1RXF2SID_SID9_LENGTH                   0x00000001

#define _C1RXF2SID_SID10_POSITION                0x0000000F
#define _C1RXF2SID_SID10_MASK                    0x00008000
#define _C1RXF2SID_SID10_LENGTH                  0x00000001

#define _C1RXF2EID_EID0_POSITION                 0x00000000
#define _C1RXF2EID_EID0_MASK                     0x00000001
#define _C1RXF2EID_EID0_LENGTH                   0x00000001

#define _C1RXF2EID_EID1_POSITION                 0x00000001
#define _C1RXF2EID_EID1_MASK                     0x00000002
#define _C1RXF2EID_EID1_LENGTH                   0x00000001

#define _C1RXF2EID_EID2_POSITION                 0x00000002
#define _C1RXF2EID_EID2_MASK                     0x00000004
#define _C1RXF2EID_EID2_LENGTH                   0x00000001

#define _C1RXF2EID_EID3_POSITION                 0x00000003
#define _C1RXF2EID_EID3_MASK                     0x00000008
#define _C1RXF2EID_EID3_LENGTH                   0x00000001

#define _C1RXF2EID_EID4_POSITION                 0x00000004
#define _C1RXF2EID_EID4_MASK                     0x00000010
#define _C1RXF2EID_EID4_LENGTH                   0x00000001

#define _C1RXF2EID_EID5_POSITION                 0x00000005
#define _C1RXF2EID_EID5_MASK                     0x00000020
#define _C1RXF2EID_EID5_LENGTH                   0x00000001

#define _C1RXF2EID_EID6_POSITION                 0x00000006
#define _C1RXF2EID_EID6_MASK                     0x00000040
#define _C1RXF2EID_EID6_LENGTH                   0x00000001

#define _C1RXF2EID_EID7_POSITION                 0x00000007
#define _C1RXF2EID_EID7_MASK                     0x00000080
#define _C1RXF2EID_EID7_LENGTH                   0x00000001

#define _C1RXF2EID_EID8_POSITION                 0x00000008
#define _C1RXF2EID_EID8_MASK                     0x00000100
#define _C1RXF2EID_EID8_LENGTH                   0x00000001

#define _C1RXF2EID_EID9_POSITION                 0x00000009
#define _C1RXF2EID_EID9_MASK                     0x00000200
#define _C1RXF2EID_EID9_LENGTH                   0x00000001

#define _C1RXF2EID_EID10_POSITION                0x0000000A
#define _C1RXF2EID_EID10_MASK                    0x00000400
#define _C1RXF2EID_EID10_LENGTH                  0x00000001

#define _C1RXF2EID_EID11_POSITION                0x0000000B
#define _C1RXF2EID_EID11_MASK                    0x00000800
#define _C1RXF2EID_EID11_LENGTH                  0x00000001

#define _C1RXF2EID_EID12_POSITION                0x0000000C
#define _C1RXF2EID_EID12_MASK                    0x00001000
#define _C1RXF2EID_EID12_LENGTH                  0x00000001

#define _C1RXF2EID_EID13_POSITION                0x0000000D
#define _C1RXF2EID_EID13_MASK                    0x00002000
#define _C1RXF2EID_EID13_LENGTH                  0x00000001

#define _C1RXF2EID_EID14_POSITION                0x0000000E
#define _C1RXF2EID_EID14_MASK                    0x00004000
#define _C1RXF2EID_EID14_LENGTH                  0x00000001

#define _C1RXF2EID_EID15_POSITION                0x0000000F
#define _C1RXF2EID_EID15_MASK                    0x00008000
#define _C1RXF2EID_EID15_LENGTH                  0x00000001

#define _C1RXF3SID_EID16_POSITION                0x00000000
#define _C1RXF3SID_EID16_MASK                    0x00000001
#define _C1RXF3SID_EID16_LENGTH                  0x00000001

#define _C1RXF3SID_EID17_POSITION                0x00000001
#define _C1RXF3SID_EID17_MASK                    0x00000002
#define _C1RXF3SID_EID17_LENGTH                  0x00000001

#define _C1RXF3SID_EXIDE_POSITION                0x00000003
#define _C1RXF3SID_EXIDE_MASK                    0x00000008
#define _C1RXF3SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF3SID_SID0_POSITION                 0x00000005
#define _C1RXF3SID_SID0_MASK                     0x00000020
#define _C1RXF3SID_SID0_LENGTH                   0x00000001

#define _C1RXF3SID_SID1_POSITION                 0x00000006
#define _C1RXF3SID_SID1_MASK                     0x00000040
#define _C1RXF3SID_SID1_LENGTH                   0x00000001

#define _C1RXF3SID_SID2_POSITION                 0x00000007
#define _C1RXF3SID_SID2_MASK                     0x00000080
#define _C1RXF3SID_SID2_LENGTH                   0x00000001

#define _C1RXF3SID_SID3_POSITION                 0x00000008
#define _C1RXF3SID_SID3_MASK                     0x00000100
#define _C1RXF3SID_SID3_LENGTH                   0x00000001

#define _C1RXF3SID_SID4_POSITION                 0x00000009
#define _C1RXF3SID_SID4_MASK                     0x00000200
#define _C1RXF3SID_SID4_LENGTH                   0x00000001

#define _C1RXF3SID_SID5_POSITION                 0x0000000A
#define _C1RXF3SID_SID5_MASK                     0x00000400
#define _C1RXF3SID_SID5_LENGTH                   0x00000001

#define _C1RXF3SID_SID6_POSITION                 0x0000000B
#define _C1RXF3SID_SID6_MASK                     0x00000800
#define _C1RXF3SID_SID6_LENGTH                   0x00000001

#define _C1RXF3SID_SID7_POSITION                 0x0000000C
#define _C1RXF3SID_SID7_MASK                     0x00001000
#define _C1RXF3SID_SID7_LENGTH                   0x00000001

#define _C1RXF3SID_SID8_POSITION                 0x0000000D
#define _C1RXF3SID_SID8_MASK                     0x00002000
#define _C1RXF3SID_SID8_LENGTH                   0x00000001

#define _C1RXF3SID_SID9_POSITION                 0x0000000E
#define _C1RXF3SID_SID9_MASK                     0x00004000
#define _C1RXF3SID_SID9_LENGTH                   0x00000001

#define _C1RXF3SID_SID10_POSITION                0x0000000F
#define _C1RXF3SID_SID10_MASK                    0x00008000
#define _C1RXF3SID_SID10_LENGTH                  0x00000001

#define _C1RXF3EID_EID0_POSITION                 0x00000000
#define _C1RXF3EID_EID0_MASK                     0x00000001
#define _C1RXF3EID_EID0_LENGTH                   0x00000001

#define _C1RXF3EID_EID1_POSITION                 0x00000001
#define _C1RXF3EID_EID1_MASK                     0x00000002
#define _C1RXF3EID_EID1_LENGTH                   0x00000001

#define _C1RXF3EID_EID2_POSITION                 0x00000002
#define _C1RXF3EID_EID2_MASK                     0x00000004
#define _C1RXF3EID_EID2_LENGTH                   0x00000001

#define _C1RXF3EID_EID3_POSITION                 0x00000003
#define _C1RXF3EID_EID3_MASK                     0x00000008
#define _C1RXF3EID_EID3_LENGTH                   0x00000001

#define _C1RXF3EID_EID4_POSITION                 0x00000004
#define _C1RXF3EID_EID4_MASK                     0x00000010
#define _C1RXF3EID_EID4_LENGTH                   0x00000001

#define _C1RXF3EID_EID5_POSITION                 0x00000005
#define _C1RXF3EID_EID5_MASK                     0x00000020
#define _C1RXF3EID_EID5_LENGTH                   0x00000001

#define _C1RXF3EID_EID6_POSITION                 0x00000006
#define _C1RXF3EID_EID6_MASK                     0x00000040
#define _C1RXF3EID_EID6_LENGTH                   0x00000001

#define _C1RXF3EID_EID7_POSITION                 0x00000007
#define _C1RXF3EID_EID7_MASK                     0x00000080
#define _C1RXF3EID_EID7_LENGTH                   0x00000001

#define _C1RXF3EID_EID8_POSITION                 0x00000008
#define _C1RXF3EID_EID8_MASK                     0x00000100
#define _C1RXF3EID_EID8_LENGTH                   0x00000001

#define _C1RXF3EID_EID9_POSITION                 0x00000009
#define _C1RXF3EID_EID9_MASK                     0x00000200
#define _C1RXF3EID_EID9_LENGTH                   0x00000001

#define _C1RXF3EID_EID10_POSITION                0x0000000A
#define _C1RXF3EID_EID10_MASK                    0x00000400
#define _C1RXF3EID_EID10_LENGTH                  0x00000001

#define _C1RXF3EID_EID11_POSITION                0x0000000B
#define _C1RXF3EID_EID11_MASK                    0x00000800
#define _C1RXF3EID_EID11_LENGTH                  0x00000001

#define _C1RXF3EID_EID12_POSITION                0x0000000C
#define _C1RXF3EID_EID12_MASK                    0x00001000
#define _C1RXF3EID_EID12_LENGTH                  0x00000001

#define _C1RXF3EID_EID13_POSITION                0x0000000D
#define _C1RXF3EID_EID13_MASK                    0x00002000
#define _C1RXF3EID_EID13_LENGTH                  0x00000001

#define _C1RXF3EID_EID14_POSITION                0x0000000E
#define _C1RXF3EID_EID14_MASK                    0x00004000
#define _C1RXF3EID_EID14_LENGTH                  0x00000001

#define _C1RXF3EID_EID15_POSITION                0x0000000F
#define _C1RXF3EID_EID15_MASK                    0x00008000
#define _C1RXF3EID_EID15_LENGTH                  0x00000001

#define _C1RXF4SID_EID16_POSITION                0x00000000
#define _C1RXF4SID_EID16_MASK                    0x00000001
#define _C1RXF4SID_EID16_LENGTH                  0x00000001

#define _C1RXF4SID_EID17_POSITION                0x00000001
#define _C1RXF4SID_EID17_MASK                    0x00000002
#define _C1RXF4SID_EID17_LENGTH                  0x00000001

#define _C1RXF4SID_EXIDE_POSITION                0x00000003
#define _C1RXF4SID_EXIDE_MASK                    0x00000008
#define _C1RXF4SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF4SID_SID0_POSITION                 0x00000005
#define _C1RXF4SID_SID0_MASK                     0x00000020
#define _C1RXF4SID_SID0_LENGTH                   0x00000001

#define _C1RXF4SID_SID1_POSITION                 0x00000006
#define _C1RXF4SID_SID1_MASK                     0x00000040
#define _C1RXF4SID_SID1_LENGTH                   0x00000001

#define _C1RXF4SID_SID2_POSITION                 0x00000007
#define _C1RXF4SID_SID2_MASK                     0x00000080
#define _C1RXF4SID_SID2_LENGTH                   0x00000001

#define _C1RXF4SID_SID3_POSITION                 0x00000008
#define _C1RXF4SID_SID3_MASK                     0x00000100
#define _C1RXF4SID_SID3_LENGTH                   0x00000001

#define _C1RXF4SID_SID4_POSITION                 0x00000009
#define _C1RXF4SID_SID4_MASK                     0x00000200
#define _C1RXF4SID_SID4_LENGTH                   0x00000001

#define _C1RXF4SID_SID5_POSITION                 0x0000000A
#define _C1RXF4SID_SID5_MASK                     0x00000400
#define _C1RXF4SID_SID5_LENGTH                   0x00000001

#define _C1RXF4SID_SID6_POSITION                 0x0000000B
#define _C1RXF4SID_SID6_MASK                     0x00000800
#define _C1RXF4SID_SID6_LENGTH                   0x00000001

#define _C1RXF4SID_SID7_POSITION                 0x0000000C
#define _C1RXF4SID_SID7_MASK                     0x00001000
#define _C1RXF4SID_SID7_LENGTH                   0x00000001

#define _C1RXF4SID_SID8_POSITION                 0x0000000D
#define _C1RXF4SID_SID8_MASK                     0x00002000
#define _C1RXF4SID_SID8_LENGTH                   0x00000001

#define _C1RXF4SID_SID9_POSITION                 0x0000000E
#define _C1RXF4SID_SID9_MASK                     0x00004000
#define _C1RXF4SID_SID9_LENGTH                   0x00000001

#define _C1RXF4SID_SID10_POSITION                0x0000000F
#define _C1RXF4SID_SID10_MASK                    0x00008000
#define _C1RXF4SID_SID10_LENGTH                  0x00000001

#define _C1RXF4EID_EID0_POSITION                 0x00000000
#define _C1RXF4EID_EID0_MASK                     0x00000001
#define _C1RXF4EID_EID0_LENGTH                   0x00000001

#define _C1RXF4EID_EID1_POSITION                 0x00000001
#define _C1RXF4EID_EID1_MASK                     0x00000002
#define _C1RXF4EID_EID1_LENGTH                   0x00000001

#define _C1RXF4EID_EID2_POSITION                 0x00000002
#define _C1RXF4EID_EID2_MASK                     0x00000004
#define _C1RXF4EID_EID2_LENGTH                   0x00000001

#define _C1RXF4EID_EID3_POSITION                 0x00000003
#define _C1RXF4EID_EID3_MASK                     0x00000008
#define _C1RXF4EID_EID3_LENGTH                   0x00000001

#define _C1RXF4EID_EID4_POSITION                 0x00000004
#define _C1RXF4EID_EID4_MASK                     0x00000010
#define _C1RXF4EID_EID4_LENGTH                   0x00000001

#define _C1RXF4EID_EID5_POSITION                 0x00000005
#define _C1RXF4EID_EID5_MASK                     0x00000020
#define _C1RXF4EID_EID5_LENGTH                   0x00000001

#define _C1RXF4EID_EID6_POSITION                 0x00000006
#define _C1RXF4EID_EID6_MASK                     0x00000040
#define _C1RXF4EID_EID6_LENGTH                   0x00000001

#define _C1RXF4EID_EID7_POSITION                 0x00000007
#define _C1RXF4EID_EID7_MASK                     0x00000080
#define _C1RXF4EID_EID7_LENGTH                   0x00000001

#define _C1RXF4EID_EID8_POSITION                 0x00000008
#define _C1RXF4EID_EID8_MASK                     0x00000100
#define _C1RXF4EID_EID8_LENGTH                   0x00000001

#define _C1RXF4EID_EID9_POSITION                 0x00000009
#define _C1RXF4EID_EID9_MASK                     0x00000200
#define _C1RXF4EID_EID9_LENGTH                   0x00000001

#define _C1RXF4EID_EID10_POSITION                0x0000000A
#define _C1RXF4EID_EID10_MASK                    0x00000400
#define _C1RXF4EID_EID10_LENGTH                  0x00000001

#define _C1RXF4EID_EID11_POSITION                0x0000000B
#define _C1RXF4EID_EID11_MASK                    0x00000800
#define _C1RXF4EID_EID11_LENGTH                  0x00000001

#define _C1RXF4EID_EID12_POSITION                0x0000000C
#define _C1RXF4EID_EID12_MASK                    0x00001000
#define _C1RXF4EID_EID12_LENGTH                  0x00000001

#define _C1RXF4EID_EID13_POSITION                0x0000000D
#define _C1RXF4EID_EID13_MASK                    0x00002000
#define _C1RXF4EID_EID13_LENGTH                  0x00000001

#define _C1RXF4EID_EID14_POSITION                0x0000000E
#define _C1RXF4EID_EID14_MASK                    0x00004000
#define _C1RXF4EID_EID14_LENGTH                  0x00000001

#define _C1RXF4EID_EID15_POSITION                0x0000000F
#define _C1RXF4EID_EID15_MASK                    0x00008000
#define _C1RXF4EID_EID15_LENGTH                  0x00000001

#define _C1RXF5SID_EID16_POSITION                0x00000000
#define _C1RXF5SID_EID16_MASK                    0x00000001
#define _C1RXF5SID_EID16_LENGTH                  0x00000001

#define _C1RXF5SID_EID17_POSITION                0x00000001
#define _C1RXF5SID_EID17_MASK                    0x00000002
#define _C1RXF5SID_EID17_LENGTH                  0x00000001

#define _C1RXF5SID_EXIDE_POSITION                0x00000003
#define _C1RXF5SID_EXIDE_MASK                    0x00000008
#define _C1RXF5SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF5SID_SID0_POSITION                 0x00000005
#define _C1RXF5SID_SID0_MASK                     0x00000020
#define _C1RXF5SID_SID0_LENGTH                   0x00000001

#define _C1RXF5SID_SID1_POSITION                 0x00000006
#define _C1RXF5SID_SID1_MASK                     0x00000040
#define _C1RXF5SID_SID1_LENGTH                   0x00000001

#define _C1RXF5SID_SID2_POSITION                 0x00000007
#define _C1RXF5SID_SID2_MASK                     0x00000080
#define _C1RXF5SID_SID2_LENGTH                   0x00000001

#define _C1RXF5SID_SID3_POSITION                 0x00000008
#define _C1RXF5SID_SID3_MASK                     0x00000100
#define _C1RXF5SID_SID3_LENGTH                   0x00000001

#define _C1RXF5SID_SID4_POSITION                 0x00000009
#define _C1RXF5SID_SID4_MASK                     0x00000200
#define _C1RXF5SID_SID4_LENGTH                   0x00000001

#define _C1RXF5SID_SID5_POSITION                 0x0000000A
#define _C1RXF5SID_SID5_MASK                     0x00000400
#define _C1RXF5SID_SID5_LENGTH                   0x00000001

#define _C1RXF5SID_SID6_POSITION                 0x0000000B
#define _C1RXF5SID_SID6_MASK                     0x00000800
#define _C1RXF5SID_SID6_LENGTH                   0x00000001

#define _C1RXF5SID_SID7_POSITION                 0x0000000C
#define _C1RXF5SID_SID7_MASK                     0x00001000
#define _C1RXF5SID_SID7_LENGTH                   0x00000001

#define _C1RXF5SID_SID8_POSITION                 0x0000000D
#define _C1RXF5SID_SID8_MASK                     0x00002000
#define _C1RXF5SID_SID8_LENGTH                   0x00000001

#define _C1RXF5SID_SID9_POSITION                 0x0000000E
#define _C1RXF5SID_SID9_MASK                     0x00004000
#define _C1RXF5SID_SID9_LENGTH                   0x00000001

#define _C1RXF5SID_SID10_POSITION                0x0000000F
#define _C1RXF5SID_SID10_MASK                    0x00008000
#define _C1RXF5SID_SID10_LENGTH                  0x00000001

#define _C1RXF5EID_EID0_POSITION                 0x00000000
#define _C1RXF5EID_EID0_MASK                     0x00000001
#define _C1RXF5EID_EID0_LENGTH                   0x00000001

#define _C1RXF5EID_EID1_POSITION                 0x00000001
#define _C1RXF5EID_EID1_MASK                     0x00000002
#define _C1RXF5EID_EID1_LENGTH                   0x00000001

#define _C1RXF5EID_EID2_POSITION                 0x00000002
#define _C1RXF5EID_EID2_MASK                     0x00000004
#define _C1RXF5EID_EID2_LENGTH                   0x00000001

#define _C1RXF5EID_EID3_POSITION                 0x00000003
#define _C1RXF5EID_EID3_MASK                     0x00000008
#define _C1RXF5EID_EID3_LENGTH                   0x00000001

#define _C1RXF5EID_EID4_POSITION                 0x00000004
#define _C1RXF5EID_EID4_MASK                     0x00000010
#define _C1RXF5EID_EID4_LENGTH                   0x00000001

#define _C1RXF5EID_EID5_POSITION                 0x00000005
#define _C1RXF5EID_EID5_MASK                     0x00000020
#define _C1RXF5EID_EID5_LENGTH                   0x00000001

#define _C1RXF5EID_EID6_POSITION                 0x00000006
#define _C1RXF5EID_EID6_MASK                     0x00000040
#define _C1RXF5EID_EID6_LENGTH                   0x00000001

#define _C1RXF5EID_EID7_POSITION                 0x00000007
#define _C1RXF5EID_EID7_MASK                     0x00000080
#define _C1RXF5EID_EID7_LENGTH                   0x00000001

#define _C1RXF5EID_EID8_POSITION                 0x00000008
#define _C1RXF5EID_EID8_MASK                     0x00000100
#define _C1RXF5EID_EID8_LENGTH                   0x00000001

#define _C1RXF5EID_EID9_POSITION                 0x00000009
#define _C1RXF5EID_EID9_MASK                     0x00000200
#define _C1RXF5EID_EID9_LENGTH                   0x00000001

#define _C1RXF5EID_EID10_POSITION                0x0000000A
#define _C1RXF5EID_EID10_MASK                    0x00000400
#define _C1RXF5EID_EID10_LENGTH                  0x00000001

#define _C1RXF5EID_EID11_POSITION                0x0000000B
#define _C1RXF5EID_EID11_MASK                    0x00000800
#define _C1RXF5EID_EID11_LENGTH                  0x00000001

#define _C1RXF5EID_EID12_POSITION                0x0000000C
#define _C1RXF5EID_EID12_MASK                    0x00001000
#define _C1RXF5EID_EID12_LENGTH                  0x00000001

#define _C1RXF5EID_EID13_POSITION                0x0000000D
#define _C1RXF5EID_EID13_MASK                    0x00002000
#define _C1RXF5EID_EID13_LENGTH                  0x00000001

#define _C1RXF5EID_EID14_POSITION                0x0000000E
#define _C1RXF5EID_EID14_MASK                    0x00004000
#define _C1RXF5EID_EID14_LENGTH                  0x00000001

#define _C1RXF5EID_EID15_POSITION                0x0000000F
#define _C1RXF5EID_EID15_MASK                    0x00008000
#define _C1RXF5EID_EID15_LENGTH                  0x00000001

#define _C1RXF6SID_EID16_POSITION                0x00000000
#define _C1RXF6SID_EID16_MASK                    0x00000001
#define _C1RXF6SID_EID16_LENGTH                  0x00000001

#define _C1RXF6SID_EID17_POSITION                0x00000001
#define _C1RXF6SID_EID17_MASK                    0x00000002
#define _C1RXF6SID_EID17_LENGTH                  0x00000001

#define _C1RXF6SID_EXIDE_POSITION                0x00000003
#define _C1RXF6SID_EXIDE_MASK                    0x00000008
#define _C1RXF6SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF6SID_SID0_POSITION                 0x00000005
#define _C1RXF6SID_SID0_MASK                     0x00000020
#define _C1RXF6SID_SID0_LENGTH                   0x00000001

#define _C1RXF6SID_SID1_POSITION                 0x00000006
#define _C1RXF6SID_SID1_MASK                     0x00000040
#define _C1RXF6SID_SID1_LENGTH                   0x00000001

#define _C1RXF6SID_SID2_POSITION                 0x00000007
#define _C1RXF6SID_SID2_MASK                     0x00000080
#define _C1RXF6SID_SID2_LENGTH                   0x00000001

#define _C1RXF6SID_SID3_POSITION                 0x00000008
#define _C1RXF6SID_SID3_MASK                     0x00000100
#define _C1RXF6SID_SID3_LENGTH                   0x00000001

#define _C1RXF6SID_SID4_POSITION                 0x00000009
#define _C1RXF6SID_SID4_MASK                     0x00000200
#define _C1RXF6SID_SID4_LENGTH                   0x00000001

#define _C1RXF6SID_SID5_POSITION                 0x0000000A
#define _C1RXF6SID_SID5_MASK                     0x00000400
#define _C1RXF6SID_SID5_LENGTH                   0x00000001

#define _C1RXF6SID_SID6_POSITION                 0x0000000B
#define _C1RXF6SID_SID6_MASK                     0x00000800
#define _C1RXF6SID_SID6_LENGTH                   0x00000001

#define _C1RXF6SID_SID7_POSITION                 0x0000000C
#define _C1RXF6SID_SID7_MASK                     0x00001000
#define _C1RXF6SID_SID7_LENGTH                   0x00000001

#define _C1RXF6SID_SID8_POSITION                 0x0000000D
#define _C1RXF6SID_SID8_MASK                     0x00002000
#define _C1RXF6SID_SID8_LENGTH                   0x00000001

#define _C1RXF6SID_SID9_POSITION                 0x0000000E
#define _C1RXF6SID_SID9_MASK                     0x00004000
#define _C1RXF6SID_SID9_LENGTH                   0x00000001

#define _C1RXF6SID_SID10_POSITION                0x0000000F
#define _C1RXF6SID_SID10_MASK                    0x00008000
#define _C1RXF6SID_SID10_LENGTH                  0x00000001

#define _C1RXF6EID_EID0_POSITION                 0x00000000
#define _C1RXF6EID_EID0_MASK                     0x00000001
#define _C1RXF6EID_EID0_LENGTH                   0x00000001

#define _C1RXF6EID_EID1_POSITION                 0x00000001
#define _C1RXF6EID_EID1_MASK                     0x00000002
#define _C1RXF6EID_EID1_LENGTH                   0x00000001

#define _C1RXF6EID_EID2_POSITION                 0x00000002
#define _C1RXF6EID_EID2_MASK                     0x00000004
#define _C1RXF6EID_EID2_LENGTH                   0x00000001

#define _C1RXF6EID_EID3_POSITION                 0x00000003
#define _C1RXF6EID_EID3_MASK                     0x00000008
#define _C1RXF6EID_EID3_LENGTH                   0x00000001

#define _C1RXF6EID_EID4_POSITION                 0x00000004
#define _C1RXF6EID_EID4_MASK                     0x00000010
#define _C1RXF6EID_EID4_LENGTH                   0x00000001

#define _C1RXF6EID_EID5_POSITION                 0x00000005
#define _C1RXF6EID_EID5_MASK                     0x00000020
#define _C1RXF6EID_EID5_LENGTH                   0x00000001

#define _C1RXF6EID_EID6_POSITION                 0x00000006
#define _C1RXF6EID_EID6_MASK                     0x00000040
#define _C1RXF6EID_EID6_LENGTH                   0x00000001

#define _C1RXF6EID_EID7_POSITION                 0x00000007
#define _C1RXF6EID_EID7_MASK                     0x00000080
#define _C1RXF6EID_EID7_LENGTH                   0x00000001

#define _C1RXF6EID_EID8_POSITION                 0x00000008
#define _C1RXF6EID_EID8_MASK                     0x00000100
#define _C1RXF6EID_EID8_LENGTH                   0x00000001

#define _C1RXF6EID_EID9_POSITION                 0x00000009
#define _C1RXF6EID_EID9_MASK                     0x00000200
#define _C1RXF6EID_EID9_LENGTH                   0x00000001

#define _C1RXF6EID_EID10_POSITION                0x0000000A
#define _C1RXF6EID_EID10_MASK                    0x00000400
#define _C1RXF6EID_EID10_LENGTH                  0x00000001

#define _C1RXF6EID_EID11_POSITION                0x0000000B
#define _C1RXF6EID_EID11_MASK                    0x00000800
#define _C1RXF6EID_EID11_LENGTH                  0x00000001

#define _C1RXF6EID_EID12_POSITION                0x0000000C
#define _C1RXF6EID_EID12_MASK                    0x00001000
#define _C1RXF6EID_EID12_LENGTH                  0x00000001

#define _C1RXF6EID_EID13_POSITION                0x0000000D
#define _C1RXF6EID_EID13_MASK                    0x00002000
#define _C1RXF6EID_EID13_LENGTH                  0x00000001

#define _C1RXF6EID_EID14_POSITION                0x0000000E
#define _C1RXF6EID_EID14_MASK                    0x00004000
#define _C1RXF6EID_EID14_LENGTH                  0x00000001

#define _C1RXF6EID_EID15_POSITION                0x0000000F
#define _C1RXF6EID_EID15_MASK                    0x00008000
#define _C1RXF6EID_EID15_LENGTH                  0x00000001

#define _C1RXF7SID_EID16_POSITION                0x00000000
#define _C1RXF7SID_EID16_MASK                    0x00000001
#define _C1RXF7SID_EID16_LENGTH                  0x00000001

#define _C1RXF7SID_EID17_POSITION                0x00000001
#define _C1RXF7SID_EID17_MASK                    0x00000002
#define _C1RXF7SID_EID17_LENGTH                  0x00000001

#define _C1RXF7SID_EXIDE_POSITION                0x00000003
#define _C1RXF7SID_EXIDE_MASK                    0x00000008
#define _C1RXF7SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF7SID_SID0_POSITION                 0x00000005
#define _C1RXF7SID_SID0_MASK                     0x00000020
#define _C1RXF7SID_SID0_LENGTH                   0x00000001

#define _C1RXF7SID_SID1_POSITION                 0x00000006
#define _C1RXF7SID_SID1_MASK                     0x00000040
#define _C1RXF7SID_SID1_LENGTH                   0x00000001

#define _C1RXF7SID_SID2_POSITION                 0x00000007
#define _C1RXF7SID_SID2_MASK                     0x00000080
#define _C1RXF7SID_SID2_LENGTH                   0x00000001

#define _C1RXF7SID_SID3_POSITION                 0x00000008
#define _C1RXF7SID_SID3_MASK                     0x00000100
#define _C1RXF7SID_SID3_LENGTH                   0x00000001

#define _C1RXF7SID_SID4_POSITION                 0x00000009
#define _C1RXF7SID_SID4_MASK                     0x00000200
#define _C1RXF7SID_SID4_LENGTH                   0x00000001

#define _C1RXF7SID_SID5_POSITION                 0x0000000A
#define _C1RXF7SID_SID5_MASK                     0x00000400
#define _C1RXF7SID_SID5_LENGTH                   0x00000001

#define _C1RXF7SID_SID6_POSITION                 0x0000000B
#define _C1RXF7SID_SID6_MASK                     0x00000800
#define _C1RXF7SID_SID6_LENGTH                   0x00000001

#define _C1RXF7SID_SID7_POSITION                 0x0000000C
#define _C1RXF7SID_SID7_MASK                     0x00001000
#define _C1RXF7SID_SID7_LENGTH                   0x00000001

#define _C1RXF7SID_SID8_POSITION                 0x0000000D
#define _C1RXF7SID_SID8_MASK                     0x00002000
#define _C1RXF7SID_SID8_LENGTH                   0x00000001

#define _C1RXF7SID_SID9_POSITION                 0x0000000E
#define _C1RXF7SID_SID9_MASK                     0x00004000
#define _C1RXF7SID_SID9_LENGTH                   0x00000001

#define _C1RXF7SID_SID10_POSITION                0x0000000F
#define _C1RXF7SID_SID10_MASK                    0x00008000
#define _C1RXF7SID_SID10_LENGTH                  0x00000001

#define _C1RXF7EID_EID0_POSITION                 0x00000000
#define _C1RXF7EID_EID0_MASK                     0x00000001
#define _C1RXF7EID_EID0_LENGTH                   0x00000001

#define _C1RXF7EID_EID1_POSITION                 0x00000001
#define _C1RXF7EID_EID1_MASK                     0x00000002
#define _C1RXF7EID_EID1_LENGTH                   0x00000001

#define _C1RXF7EID_EID2_POSITION                 0x00000002
#define _C1RXF7EID_EID2_MASK                     0x00000004
#define _C1RXF7EID_EID2_LENGTH                   0x00000001

#define _C1RXF7EID_EID3_POSITION                 0x00000003
#define _C1RXF7EID_EID3_MASK                     0x00000008
#define _C1RXF7EID_EID3_LENGTH                   0x00000001

#define _C1RXF7EID_EID4_POSITION                 0x00000004
#define _C1RXF7EID_EID4_MASK                     0x00000010
#define _C1RXF7EID_EID4_LENGTH                   0x00000001

#define _C1RXF7EID_EID5_POSITION                 0x00000005
#define _C1RXF7EID_EID5_MASK                     0x00000020
#define _C1RXF7EID_EID5_LENGTH                   0x00000001

#define _C1RXF7EID_EID6_POSITION                 0x00000006
#define _C1RXF7EID_EID6_MASK                     0x00000040
#define _C1RXF7EID_EID6_LENGTH                   0x00000001

#define _C1RXF7EID_EID7_POSITION                 0x00000007
#define _C1RXF7EID_EID7_MASK                     0x00000080
#define _C1RXF7EID_EID7_LENGTH                   0x00000001

#define _C1RXF7EID_EID8_POSITION                 0x00000008
#define _C1RXF7EID_EID8_MASK                     0x00000100
#define _C1RXF7EID_EID8_LENGTH                   0x00000001

#define _C1RXF7EID_EID9_POSITION                 0x00000009
#define _C1RXF7EID_EID9_MASK                     0x00000200
#define _C1RXF7EID_EID9_LENGTH                   0x00000001

#define _C1RXF7EID_EID10_POSITION                0x0000000A
#define _C1RXF7EID_EID10_MASK                    0x00000400
#define _C1RXF7EID_EID10_LENGTH                  0x00000001

#define _C1RXF7EID_EID11_POSITION                0x0000000B
#define _C1RXF7EID_EID11_MASK                    0x00000800
#define _C1RXF7EID_EID11_LENGTH                  0x00000001

#define _C1RXF7EID_EID12_POSITION                0x0000000C
#define _C1RXF7EID_EID12_MASK                    0x00001000
#define _C1RXF7EID_EID12_LENGTH                  0x00000001

#define _C1RXF7EID_EID13_POSITION                0x0000000D
#define _C1RXF7EID_EID13_MASK                    0x00002000
#define _C1RXF7EID_EID13_LENGTH                  0x00000001

#define _C1RXF7EID_EID14_POSITION                0x0000000E
#define _C1RXF7EID_EID14_MASK                    0x00004000
#define _C1RXF7EID_EID14_LENGTH                  0x00000001

#define _C1RXF7EID_EID15_POSITION                0x0000000F
#define _C1RXF7EID_EID15_MASK                    0x00008000
#define _C1RXF7EID_EID15_LENGTH                  0x00000001

#define _C1RXF8SID_EID16_POSITION                0x00000000
#define _C1RXF8SID_EID16_MASK                    0x00000001
#define _C1RXF8SID_EID16_LENGTH                  0x00000001

#define _C1RXF8SID_EID17_POSITION                0x00000001
#define _C1RXF8SID_EID17_MASK                    0x00000002
#define _C1RXF8SID_EID17_LENGTH                  0x00000001

#define _C1RXF8SID_EXIDE_POSITION                0x00000003
#define _C1RXF8SID_EXIDE_MASK                    0x00000008
#define _C1RXF8SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF8SID_SID0_POSITION                 0x00000005
#define _C1RXF8SID_SID0_MASK                     0x00000020
#define _C1RXF8SID_SID0_LENGTH                   0x00000001

#define _C1RXF8SID_SID1_POSITION                 0x00000006
#define _C1RXF8SID_SID1_MASK                     0x00000040
#define _C1RXF8SID_SID1_LENGTH                   0x00000001

#define _C1RXF8SID_SID2_POSITION                 0x00000007
#define _C1RXF8SID_SID2_MASK                     0x00000080
#define _C1RXF8SID_SID2_LENGTH                   0x00000001

#define _C1RXF8SID_SID3_POSITION                 0x00000008
#define _C1RXF8SID_SID3_MASK                     0x00000100
#define _C1RXF8SID_SID3_LENGTH                   0x00000001

#define _C1RXF8SID_SID4_POSITION                 0x00000009
#define _C1RXF8SID_SID4_MASK                     0x00000200
#define _C1RXF8SID_SID4_LENGTH                   0x00000001

#define _C1RXF8SID_SID5_POSITION                 0x0000000A
#define _C1RXF8SID_SID5_MASK                     0x00000400
#define _C1RXF8SID_SID5_LENGTH                   0x00000001

#define _C1RXF8SID_SID6_POSITION                 0x0000000B
#define _C1RXF8SID_SID6_MASK                     0x00000800
#define _C1RXF8SID_SID6_LENGTH                   0x00000001

#define _C1RXF8SID_SID7_POSITION                 0x0000000C
#define _C1RXF8SID_SID7_MASK                     0x00001000
#define _C1RXF8SID_SID7_LENGTH                   0x00000001

#define _C1RXF8SID_SID8_POSITION                 0x0000000D
#define _C1RXF8SID_SID8_MASK                     0x00002000
#define _C1RXF8SID_SID8_LENGTH                   0x00000001

#define _C1RXF8SID_SID9_POSITION                 0x0000000E
#define _C1RXF8SID_SID9_MASK                     0x00004000
#define _C1RXF8SID_SID9_LENGTH                   0x00000001

#define _C1RXF8SID_SID10_POSITION                0x0000000F
#define _C1RXF8SID_SID10_MASK                    0x00008000
#define _C1RXF8SID_SID10_LENGTH                  0x00000001

#define _C1RXF8EID_EID0_POSITION                 0x00000000
#define _C1RXF8EID_EID0_MASK                     0x00000001
#define _C1RXF8EID_EID0_LENGTH                   0x00000001

#define _C1RXF8EID_EID1_POSITION                 0x00000001
#define _C1RXF8EID_EID1_MASK                     0x00000002
#define _C1RXF8EID_EID1_LENGTH                   0x00000001

#define _C1RXF8EID_EID2_POSITION                 0x00000002
#define _C1RXF8EID_EID2_MASK                     0x00000004
#define _C1RXF8EID_EID2_LENGTH                   0x00000001

#define _C1RXF8EID_EID3_POSITION                 0x00000003
#define _C1RXF8EID_EID3_MASK                     0x00000008
#define _C1RXF8EID_EID3_LENGTH                   0x00000001

#define _C1RXF8EID_EID4_POSITION                 0x00000004
#define _C1RXF8EID_EID4_MASK                     0x00000010
#define _C1RXF8EID_EID4_LENGTH                   0x00000001

#define _C1RXF8EID_EID5_POSITION                 0x00000005
#define _C1RXF8EID_EID5_MASK                     0x00000020
#define _C1RXF8EID_EID5_LENGTH                   0x00000001

#define _C1RXF8EID_EID6_POSITION                 0x00000006
#define _C1RXF8EID_EID6_MASK                     0x00000040
#define _C1RXF8EID_EID6_LENGTH                   0x00000001

#define _C1RXF8EID_EID7_POSITION                 0x00000007
#define _C1RXF8EID_EID7_MASK                     0x00000080
#define _C1RXF8EID_EID7_LENGTH                   0x00000001

#define _C1RXF8EID_EID8_POSITION                 0x00000008
#define _C1RXF8EID_EID8_MASK                     0x00000100
#define _C1RXF8EID_EID8_LENGTH                   0x00000001

#define _C1RXF8EID_EID9_POSITION                 0x00000009
#define _C1RXF8EID_EID9_MASK                     0x00000200
#define _C1RXF8EID_EID9_LENGTH                   0x00000001

#define _C1RXF8EID_EID10_POSITION                0x0000000A
#define _C1RXF8EID_EID10_MASK                    0x00000400
#define _C1RXF8EID_EID10_LENGTH                  0x00000001

#define _C1RXF8EID_EID11_POSITION                0x0000000B
#define _C1RXF8EID_EID11_MASK                    0x00000800
#define _C1RXF8EID_EID11_LENGTH                  0x00000001

#define _C1RXF8EID_EID12_POSITION                0x0000000C
#define _C1RXF8EID_EID12_MASK                    0x00001000
#define _C1RXF8EID_EID12_LENGTH                  0x00000001

#define _C1RXF8EID_EID13_POSITION                0x0000000D
#define _C1RXF8EID_EID13_MASK                    0x00002000
#define _C1RXF8EID_EID13_LENGTH                  0x00000001

#define _C1RXF8EID_EID14_POSITION                0x0000000E
#define _C1RXF8EID_EID14_MASK                    0x00004000
#define _C1RXF8EID_EID14_LENGTH                  0x00000001

#define _C1RXF8EID_EID15_POSITION                0x0000000F
#define _C1RXF8EID_EID15_MASK                    0x00008000
#define _C1RXF8EID_EID15_LENGTH                  0x00000001

#define _C1RXF9SID_EID16_POSITION                0x00000000
#define _C1RXF9SID_EID16_MASK                    0x00000001
#define _C1RXF9SID_EID16_LENGTH                  0x00000001

#define _C1RXF9SID_EID17_POSITION                0x00000001
#define _C1RXF9SID_EID17_MASK                    0x00000002
#define _C1RXF9SID_EID17_LENGTH                  0x00000001

#define _C1RXF9SID_EXIDE_POSITION                0x00000003
#define _C1RXF9SID_EXIDE_MASK                    0x00000008
#define _C1RXF9SID_EXIDE_LENGTH                  0x00000001

#define _C1RXF9SID_SID0_POSITION                 0x00000005
#define _C1RXF9SID_SID0_MASK                     0x00000020
#define _C1RXF9SID_SID0_LENGTH                   0x00000001

#define _C1RXF9SID_SID1_POSITION                 0x00000006
#define _C1RXF9SID_SID1_MASK                     0x00000040
#define _C1RXF9SID_SID1_LENGTH                   0x00000001

#define _C1RXF9SID_SID2_POSITION                 0x00000007
#define _C1RXF9SID_SID2_MASK                     0x00000080
#define _C1RXF9SID_SID2_LENGTH                   0x00000001

#define _C1RXF9SID_SID3_POSITION                 0x00000008
#define _C1RXF9SID_SID3_MASK                     0x00000100
#define _C1RXF9SID_SID3_LENGTH                   0x00000001

#define _C1RXF9SID_SID4_POSITION                 0x00000009
#define _C1RXF9SID_SID4_MASK                     0x00000200
#define _C1RXF9SID_SID4_LENGTH                   0x00000001

#define _C1RXF9SID_SID5_POSITION                 0x0000000A
#define _C1RXF9SID_SID5_MASK                     0x00000400
#define _C1RXF9SID_SID5_LENGTH                   0x00000001

#define _C1RXF9SID_SID6_POSITION                 0x0000000B
#define _C1RXF9SID_SID6_MASK                     0x00000800
#define _C1RXF9SID_SID6_LENGTH                   0x00000001

#define _C1RXF9SID_SID7_POSITION                 0x0000000C
#define _C1RXF9SID_SID7_MASK                     0x00001000
#define _C1RXF9SID_SID7_LENGTH                   0x00000001

#define _C1RXF9SID_SID8_POSITION                 0x0000000D
#define _C1RXF9SID_SID8_MASK                     0x00002000
#define _C1RXF9SID_SID8_LENGTH                   0x00000001

#define _C1RXF9SID_SID9_POSITION                 0x0000000E
#define _C1RXF9SID_SID9_MASK                     0x00004000
#define _C1RXF9SID_SID9_LENGTH                   0x00000001

#define _C1RXF9SID_SID10_POSITION                0x0000000F
#define _C1RXF9SID_SID10_MASK                    0x00008000
#define _C1RXF9SID_SID10_LENGTH                  0x00000001

#define _C1RXF9EID_EID0_POSITION                 0x00000000
#define _C1RXF9EID_EID0_MASK                     0x00000001
#define _C1RXF9EID_EID0_LENGTH                   0x00000001

#define _C1RXF9EID_EID1_POSITION                 0x00000001
#define _C1RXF9EID_EID1_MASK                     0x00000002
#define _C1RXF9EID_EID1_LENGTH                   0x00000001

#define _C1RXF9EID_EID2_POSITION                 0x00000002
#define _C1RXF9EID_EID2_MASK                     0x00000004
#define _C1RXF9EID_EID2_LENGTH                   0x00000001

#define _C1RXF9EID_EID3_POSITION                 0x00000003
#define _C1RXF9EID_EID3_MASK                     0x00000008
#define _C1RXF9EID_EID3_LENGTH                   0x00000001

#define _C1RXF9EID_EID4_POSITION                 0x00000004
#define _C1RXF9EID_EID4_MASK                     0x00000010
#define _C1RXF9EID_EID4_LENGTH                   0x00000001

#define _C1RXF9EID_EID5_POSITION                 0x00000005
#define _C1RXF9EID_EID5_MASK                     0x00000020
#define _C1RXF9EID_EID5_LENGTH                   0x00000001

#define _C1RXF9EID_EID6_POSITION                 0x00000006
#define _C1RXF9EID_EID6_MASK                     0x00000040
#define _C1RXF9EID_EID6_LENGTH                   0x00000001

#define _C1RXF9EID_EID7_POSITION                 0x00000007
#define _C1RXF9EID_EID7_MASK                     0x00000080
#define _C1RXF9EID_EID7_LENGTH                   0x00000001

#define _C1RXF9EID_EID8_POSITION                 0x00000008
#define _C1RXF9EID_EID8_MASK                     0x00000100
#define _C1RXF9EID_EID8_LENGTH                   0x00000001

#define _C1RXF9EID_EID9_POSITION                 0x00000009
#define _C1RXF9EID_EID9_MASK                     0x00000200
#define _C1RXF9EID_EID9_LENGTH                   0x00000001

#define _C1RXF9EID_EID10_POSITION                0x0000000A
#define _C1RXF9EID_EID10_MASK                    0x00000400
#define _C1RXF9EID_EID10_LENGTH                  0x00000001

#define _C1RXF9EID_EID11_POSITION                0x0000000B
#define _C1RXF9EID_EID11_MASK                    0x00000800
#define _C1RXF9EID_EID11_LENGTH                  0x00000001

#define _C1RXF9EID_EID12_POSITION                0x0000000C
#define _C1RXF9EID_EID12_MASK                    0x00001000
#define _C1RXF9EID_EID12_LENGTH                  0x00000001

#define _C1RXF9EID_EID13_POSITION                0x0000000D
#define _C1RXF9EID_EID13_MASK                    0x00002000
#define _C1RXF9EID_EID13_LENGTH                  0x00000001

#define _C1RXF9EID_EID14_POSITION                0x0000000E
#define _C1RXF9EID_EID14_MASK                    0x00004000
#define _C1RXF9EID_EID14_LENGTH                  0x00000001

#define _C1RXF9EID_EID15_POSITION                0x0000000F
#define _C1RXF9EID_EID15_MASK                    0x00008000
#define _C1RXF9EID_EID15_LENGTH                  0x00000001

#define _C1RXF10SID_EID16_POSITION               0x00000000
#define _C1RXF10SID_EID16_MASK                   0x00000001
#define _C1RXF10SID_EID16_LENGTH                 0x00000001

#define _C1RXF10SID_EID17_POSITION               0x00000001
#define _C1RXF10SID_EID17_MASK                   0x00000002
#define _C1RXF10SID_EID17_LENGTH                 0x00000001

#define _C1RXF10SID_EXIDE_POSITION               0x00000003
#define _C1RXF10SID_EXIDE_MASK                   0x00000008
#define _C1RXF10SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF10SID_SID0_POSITION                0x00000005
#define _C1RXF10SID_SID0_MASK                    0x00000020
#define _C1RXF10SID_SID0_LENGTH                  0x00000001

#define _C1RXF10SID_SID1_POSITION                0x00000006
#define _C1RXF10SID_SID1_MASK                    0x00000040
#define _C1RXF10SID_SID1_LENGTH                  0x00000001

#define _C1RXF10SID_SID2_POSITION                0x00000007
#define _C1RXF10SID_SID2_MASK                    0x00000080
#define _C1RXF10SID_SID2_LENGTH                  0x00000001

#define _C1RXF10SID_SID3_POSITION                0x00000008
#define _C1RXF10SID_SID3_MASK                    0x00000100
#define _C1RXF10SID_SID3_LENGTH                  0x00000001

#define _C1RXF10SID_SID4_POSITION                0x00000009
#define _C1RXF10SID_SID4_MASK                    0x00000200
#define _C1RXF10SID_SID4_LENGTH                  0x00000001

#define _C1RXF10SID_SID5_POSITION                0x0000000A
#define _C1RXF10SID_SID5_MASK                    0x00000400
#define _C1RXF10SID_SID5_LENGTH                  0x00000001

#define _C1RXF10SID_SID6_POSITION                0x0000000B
#define _C1RXF10SID_SID6_MASK                    0x00000800
#define _C1RXF10SID_SID6_LENGTH                  0x00000001

#define _C1RXF10SID_SID7_POSITION                0x0000000C
#define _C1RXF10SID_SID7_MASK                    0x00001000
#define _C1RXF10SID_SID7_LENGTH                  0x00000001

#define _C1RXF10SID_SID8_POSITION                0x0000000D
#define _C1RXF10SID_SID8_MASK                    0x00002000
#define _C1RXF10SID_SID8_LENGTH                  0x00000001

#define _C1RXF10SID_SID9_POSITION                0x0000000E
#define _C1RXF10SID_SID9_MASK                    0x00004000
#define _C1RXF10SID_SID9_LENGTH                  0x00000001

#define _C1RXF10SID_SID10_POSITION               0x0000000F
#define _C1RXF10SID_SID10_MASK                   0x00008000
#define _C1RXF10SID_SID10_LENGTH                 0x00000001

#define _C1RXF10EID_EID0_POSITION                0x00000000
#define _C1RXF10EID_EID0_MASK                    0x00000001
#define _C1RXF10EID_EID0_LENGTH                  0x00000001

#define _C1RXF10EID_EID1_POSITION                0x00000001
#define _C1RXF10EID_EID1_MASK                    0x00000002
#define _C1RXF10EID_EID1_LENGTH                  0x00000001

#define _C1RXF10EID_EID2_POSITION                0x00000002
#define _C1RXF10EID_EID2_MASK                    0x00000004
#define _C1RXF10EID_EID2_LENGTH                  0x00000001

#define _C1RXF10EID_EID3_POSITION                0x00000003
#define _C1RXF10EID_EID3_MASK                    0x00000008
#define _C1RXF10EID_EID3_LENGTH                  0x00000001

#define _C1RXF10EID_EID4_POSITION                0x00000004
#define _C1RXF10EID_EID4_MASK                    0x00000010
#define _C1RXF10EID_EID4_LENGTH                  0x00000001

#define _C1RXF10EID_EID5_POSITION                0x00000005
#define _C1RXF10EID_EID5_MASK                    0x00000020
#define _C1RXF10EID_EID5_LENGTH                  0x00000001

#define _C1RXF10EID_EID6_POSITION                0x00000006
#define _C1RXF10EID_EID6_MASK                    0x00000040
#define _C1RXF10EID_EID6_LENGTH                  0x00000001

#define _C1RXF10EID_EID7_POSITION                0x00000007
#define _C1RXF10EID_EID7_MASK                    0x00000080
#define _C1RXF10EID_EID7_LENGTH                  0x00000001

#define _C1RXF10EID_EID8_POSITION                0x00000008
#define _C1RXF10EID_EID8_MASK                    0x00000100
#define _C1RXF10EID_EID8_LENGTH                  0x00000001

#define _C1RXF10EID_EID9_POSITION                0x00000009
#define _C1RXF10EID_EID9_MASK                    0x00000200
#define _C1RXF10EID_EID9_LENGTH                  0x00000001

#define _C1RXF10EID_EID10_POSITION               0x0000000A
#define _C1RXF10EID_EID10_MASK                   0x00000400
#define _C1RXF10EID_EID10_LENGTH                 0x00000001

#define _C1RXF10EID_EID11_POSITION               0x0000000B
#define _C1RXF10EID_EID11_MASK                   0x00000800
#define _C1RXF10EID_EID11_LENGTH                 0x00000001

#define _C1RXF10EID_EID12_POSITION               0x0000000C
#define _C1RXF10EID_EID12_MASK                   0x00001000
#define _C1RXF10EID_EID12_LENGTH                 0x00000001

#define _C1RXF10EID_EID13_POSITION               0x0000000D
#define _C1RXF10EID_EID13_MASK                   0x00002000
#define _C1RXF10EID_EID13_LENGTH                 0x00000001

#define _C1RXF10EID_EID14_POSITION               0x0000000E
#define _C1RXF10EID_EID14_MASK                   0x00004000
#define _C1RXF10EID_EID14_LENGTH                 0x00000001

#define _C1RXF10EID_EID15_POSITION               0x0000000F
#define _C1RXF10EID_EID15_MASK                   0x00008000
#define _C1RXF10EID_EID15_LENGTH                 0x00000001

#define _C1RXF11SID_EID16_POSITION               0x00000000
#define _C1RXF11SID_EID16_MASK                   0x00000001
#define _C1RXF11SID_EID16_LENGTH                 0x00000001

#define _C1RXF11SID_EID17_POSITION               0x00000001
#define _C1RXF11SID_EID17_MASK                   0x00000002
#define _C1RXF11SID_EID17_LENGTH                 0x00000001

#define _C1RXF11SID_EXIDE_POSITION               0x00000003
#define _C1RXF11SID_EXIDE_MASK                   0x00000008
#define _C1RXF11SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF11SID_SID0_POSITION                0x00000005
#define _C1RXF11SID_SID0_MASK                    0x00000020
#define _C1RXF11SID_SID0_LENGTH                  0x00000001

#define _C1RXF11SID_SID1_POSITION                0x00000006
#define _C1RXF11SID_SID1_MASK                    0x00000040
#define _C1RXF11SID_SID1_LENGTH                  0x00000001

#define _C1RXF11SID_SID2_POSITION                0x00000007
#define _C1RXF11SID_SID2_MASK                    0x00000080
#define _C1RXF11SID_SID2_LENGTH                  0x00000001

#define _C1RXF11SID_SID3_POSITION                0x00000008
#define _C1RXF11SID_SID3_MASK                    0x00000100
#define _C1RXF11SID_SID3_LENGTH                  0x00000001

#define _C1RXF11SID_SID4_POSITION                0x00000009
#define _C1RXF11SID_SID4_MASK                    0x00000200
#define _C1RXF11SID_SID4_LENGTH                  0x00000001

#define _C1RXF11SID_SID5_POSITION                0x0000000A
#define _C1RXF11SID_SID5_MASK                    0x00000400
#define _C1RXF11SID_SID5_LENGTH                  0x00000001

#define _C1RXF11SID_SID6_POSITION                0x0000000B
#define _C1RXF11SID_SID6_MASK                    0x00000800
#define _C1RXF11SID_SID6_LENGTH                  0x00000001

#define _C1RXF11SID_SID7_POSITION                0x0000000C
#define _C1RXF11SID_SID7_MASK                    0x00001000
#define _C1RXF11SID_SID7_LENGTH                  0x00000001

#define _C1RXF11SID_SID8_POSITION                0x0000000D
#define _C1RXF11SID_SID8_MASK                    0x00002000
#define _C1RXF11SID_SID8_LENGTH                  0x00000001

#define _C1RXF11SID_SID9_POSITION                0x0000000E
#define _C1RXF11SID_SID9_MASK                    0x00004000
#define _C1RXF11SID_SID9_LENGTH                  0x00000001

#define _C1RXF11SID_SID10_POSITION               0x0000000F
#define _C1RXF11SID_SID10_MASK                   0x00008000
#define _C1RXF11SID_SID10_LENGTH                 0x00000001

#define _C1RXF11EID_EID0_POSITION                0x00000000
#define _C1RXF11EID_EID0_MASK                    0x00000001
#define _C1RXF11EID_EID0_LENGTH                  0x00000001

#define _C1RXF11EID_EID1_POSITION                0x00000001
#define _C1RXF11EID_EID1_MASK                    0x00000002
#define _C1RXF11EID_EID1_LENGTH                  0x00000001

#define _C1RXF11EID_EID2_POSITION                0x00000002
#define _C1RXF11EID_EID2_MASK                    0x00000004
#define _C1RXF11EID_EID2_LENGTH                  0x00000001

#define _C1RXF11EID_EID3_POSITION                0x00000003
#define _C1RXF11EID_EID3_MASK                    0x00000008
#define _C1RXF11EID_EID3_LENGTH                  0x00000001

#define _C1RXF11EID_EID4_POSITION                0x00000004
#define _C1RXF11EID_EID4_MASK                    0x00000010
#define _C1RXF11EID_EID4_LENGTH                  0x00000001

#define _C1RXF11EID_EID5_POSITION                0x00000005
#define _C1RXF11EID_EID5_MASK                    0x00000020
#define _C1RXF11EID_EID5_LENGTH                  0x00000001

#define _C1RXF11EID_EID6_POSITION                0x00000006
#define _C1RXF11EID_EID6_MASK                    0x00000040
#define _C1RXF11EID_EID6_LENGTH                  0x00000001

#define _C1RXF11EID_EID7_POSITION                0x00000007
#define _C1RXF11EID_EID7_MASK                    0x00000080
#define _C1RXF11EID_EID7_LENGTH                  0x00000001

#define _C1RXF11EID_EID8_POSITION                0x00000008
#define _C1RXF11EID_EID8_MASK                    0x00000100
#define _C1RXF11EID_EID8_LENGTH                  0x00000001

#define _C1RXF11EID_EID9_POSITION                0x00000009
#define _C1RXF11EID_EID9_MASK                    0x00000200
#define _C1RXF11EID_EID9_LENGTH                  0x00000001

#define _C1RXF11EID_EID10_POSITION               0x0000000A
#define _C1RXF11EID_EID10_MASK                   0x00000400
#define _C1RXF11EID_EID10_LENGTH                 0x00000001

#define _C1RXF11EID_EID11_POSITION               0x0000000B
#define _C1RXF11EID_EID11_MASK                   0x00000800
#define _C1RXF11EID_EID11_LENGTH                 0x00000001

#define _C1RXF11EID_EID12_POSITION               0x0000000C
#define _C1RXF11EID_EID12_MASK                   0x00001000
#define _C1RXF11EID_EID12_LENGTH                 0x00000001

#define _C1RXF11EID_EID13_POSITION               0x0000000D
#define _C1RXF11EID_EID13_MASK                   0x00002000
#define _C1RXF11EID_EID13_LENGTH                 0x00000001

#define _C1RXF11EID_EID14_POSITION               0x0000000E
#define _C1RXF11EID_EID14_MASK                   0x00004000
#define _C1RXF11EID_EID14_LENGTH                 0x00000001

#define _C1RXF11EID_EID15_POSITION               0x0000000F
#define _C1RXF11EID_EID15_MASK                   0x00008000
#define _C1RXF11EID_EID15_LENGTH                 0x00000001

#define _C1RXF12SID_EID16_POSITION               0x00000000
#define _C1RXF12SID_EID16_MASK                   0x00000001
#define _C1RXF12SID_EID16_LENGTH                 0x00000001

#define _C1RXF12SID_EID17_POSITION               0x00000001
#define _C1RXF12SID_EID17_MASK                   0x00000002
#define _C1RXF12SID_EID17_LENGTH                 0x00000001

#define _C1RXF12SID_EXIDE_POSITION               0x00000003
#define _C1RXF12SID_EXIDE_MASK                   0x00000008
#define _C1RXF12SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF12SID_SID0_POSITION                0x00000005
#define _C1RXF12SID_SID0_MASK                    0x00000020
#define _C1RXF12SID_SID0_LENGTH                  0x00000001

#define _C1RXF12SID_SID1_POSITION                0x00000006
#define _C1RXF12SID_SID1_MASK                    0x00000040
#define _C1RXF12SID_SID1_LENGTH                  0x00000001

#define _C1RXF12SID_SID2_POSITION                0x00000007
#define _C1RXF12SID_SID2_MASK                    0x00000080
#define _C1RXF12SID_SID2_LENGTH                  0x00000001

#define _C1RXF12SID_SID3_POSITION                0x00000008
#define _C1RXF12SID_SID3_MASK                    0x00000100
#define _C1RXF12SID_SID3_LENGTH                  0x00000001

#define _C1RXF12SID_SID4_POSITION                0x00000009
#define _C1RXF12SID_SID4_MASK                    0x00000200
#define _C1RXF12SID_SID4_LENGTH                  0x00000001

#define _C1RXF12SID_SID5_POSITION                0x0000000A
#define _C1RXF12SID_SID5_MASK                    0x00000400
#define _C1RXF12SID_SID5_LENGTH                  0x00000001

#define _C1RXF12SID_SID6_POSITION                0x0000000B
#define _C1RXF12SID_SID6_MASK                    0x00000800
#define _C1RXF12SID_SID6_LENGTH                  0x00000001

#define _C1RXF12SID_SID7_POSITION                0x0000000C
#define _C1RXF12SID_SID7_MASK                    0x00001000
#define _C1RXF12SID_SID7_LENGTH                  0x00000001

#define _C1RXF12SID_SID8_POSITION                0x0000000D
#define _C1RXF12SID_SID8_MASK                    0x00002000
#define _C1RXF12SID_SID8_LENGTH                  0x00000001

#define _C1RXF12SID_SID9_POSITION                0x0000000E
#define _C1RXF12SID_SID9_MASK                    0x00004000
#define _C1RXF12SID_SID9_LENGTH                  0x00000001

#define _C1RXF12SID_SID10_POSITION               0x0000000F
#define _C1RXF12SID_SID10_MASK                   0x00008000
#define _C1RXF12SID_SID10_LENGTH                 0x00000001

#define _C1RXF12EID_EID0_POSITION                0x00000000
#define _C1RXF12EID_EID0_MASK                    0x00000001
#define _C1RXF12EID_EID0_LENGTH                  0x00000001

#define _C1RXF12EID_EID1_POSITION                0x00000001
#define _C1RXF12EID_EID1_MASK                    0x00000002
#define _C1RXF12EID_EID1_LENGTH                  0x00000001

#define _C1RXF12EID_EID2_POSITION                0x00000002
#define _C1RXF12EID_EID2_MASK                    0x00000004
#define _C1RXF12EID_EID2_LENGTH                  0x00000001

#define _C1RXF12EID_EID3_POSITION                0x00000003
#define _C1RXF12EID_EID3_MASK                    0x00000008
#define _C1RXF12EID_EID3_LENGTH                  0x00000001

#define _C1RXF12EID_EID4_POSITION                0x00000004
#define _C1RXF12EID_EID4_MASK                    0x00000010
#define _C1RXF12EID_EID4_LENGTH                  0x00000001

#define _C1RXF12EID_EID5_POSITION                0x00000005
#define _C1RXF12EID_EID5_MASK                    0x00000020
#define _C1RXF12EID_EID5_LENGTH                  0x00000001

#define _C1RXF12EID_EID6_POSITION                0x00000006
#define _C1RXF12EID_EID6_MASK                    0x00000040
#define _C1RXF12EID_EID6_LENGTH                  0x00000001

#define _C1RXF12EID_EID7_POSITION                0x00000007
#define _C1RXF12EID_EID7_MASK                    0x00000080
#define _C1RXF12EID_EID7_LENGTH                  0x00000001

#define _C1RXF12EID_EID8_POSITION                0x00000008
#define _C1RXF12EID_EID8_MASK                    0x00000100
#define _C1RXF12EID_EID8_LENGTH                  0x00000001

#define _C1RXF12EID_EID9_POSITION                0x00000009
#define _C1RXF12EID_EID9_MASK                    0x00000200
#define _C1RXF12EID_EID9_LENGTH                  0x00000001

#define _C1RXF12EID_EID10_POSITION               0x0000000A
#define _C1RXF12EID_EID10_MASK                   0x00000400
#define _C1RXF12EID_EID10_LENGTH                 0x00000001

#define _C1RXF12EID_EID11_POSITION               0x0000000B
#define _C1RXF12EID_EID11_MASK                   0x00000800
#define _C1RXF12EID_EID11_LENGTH                 0x00000001

#define _C1RXF12EID_EID12_POSITION               0x0000000C
#define _C1RXF12EID_EID12_MASK                   0x00001000
#define _C1RXF12EID_EID12_LENGTH                 0x00000001

#define _C1RXF12EID_EID13_POSITION               0x0000000D
#define _C1RXF12EID_EID13_MASK                   0x00002000
#define _C1RXF12EID_EID13_LENGTH                 0x00000001

#define _C1RXF12EID_EID14_POSITION               0x0000000E
#define _C1RXF12EID_EID14_MASK                   0x00004000
#define _C1RXF12EID_EID14_LENGTH                 0x00000001

#define _C1RXF12EID_EID15_POSITION               0x0000000F
#define _C1RXF12EID_EID15_MASK                   0x00008000
#define _C1RXF12EID_EID15_LENGTH                 0x00000001

#define _C1RXF13SID_EID16_POSITION               0x00000000
#define _C1RXF13SID_EID16_MASK                   0x00000001
#define _C1RXF13SID_EID16_LENGTH                 0x00000001

#define _C1RXF13SID_EID17_POSITION               0x00000001
#define _C1RXF13SID_EID17_MASK                   0x00000002
#define _C1RXF13SID_EID17_LENGTH                 0x00000001

#define _C1RXF13SID_EXIDE_POSITION               0x00000003
#define _C1RXF13SID_EXIDE_MASK                   0x00000008
#define _C1RXF13SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF13SID_SID0_POSITION                0x00000005
#define _C1RXF13SID_SID0_MASK                    0x00000020
#define _C1RXF13SID_SID0_LENGTH                  0x00000001

#define _C1RXF13SID_SID1_POSITION                0x00000006
#define _C1RXF13SID_SID1_MASK                    0x00000040
#define _C1RXF13SID_SID1_LENGTH                  0x00000001

#define _C1RXF13SID_SID2_POSITION                0x00000007
#define _C1RXF13SID_SID2_MASK                    0x00000080
#define _C1RXF13SID_SID2_LENGTH                  0x00000001

#define _C1RXF13SID_SID3_POSITION                0x00000008
#define _C1RXF13SID_SID3_MASK                    0x00000100
#define _C1RXF13SID_SID3_LENGTH                  0x00000001

#define _C1RXF13SID_SID4_POSITION                0x00000009
#define _C1RXF13SID_SID4_MASK                    0x00000200
#define _C1RXF13SID_SID4_LENGTH                  0x00000001

#define _C1RXF13SID_SID5_POSITION                0x0000000A
#define _C1RXF13SID_SID5_MASK                    0x00000400
#define _C1RXF13SID_SID5_LENGTH                  0x00000001

#define _C1RXF13SID_SID6_POSITION                0x0000000B
#define _C1RXF13SID_SID6_MASK                    0x00000800
#define _C1RXF13SID_SID6_LENGTH                  0x00000001

#define _C1RXF13SID_SID7_POSITION                0x0000000C
#define _C1RXF13SID_SID7_MASK                    0x00001000
#define _C1RXF13SID_SID7_LENGTH                  0x00000001

#define _C1RXF13SID_SID8_POSITION                0x0000000D
#define _C1RXF13SID_SID8_MASK                    0x00002000
#define _C1RXF13SID_SID8_LENGTH                  0x00000001

#define _C1RXF13SID_SID9_POSITION                0x0000000E
#define _C1RXF13SID_SID9_MASK                    0x00004000
#define _C1RXF13SID_SID9_LENGTH                  0x00000001

#define _C1RXF13SID_SID10_POSITION               0x0000000F
#define _C1RXF13SID_SID10_MASK                   0x00008000
#define _C1RXF13SID_SID10_LENGTH                 0x00000001

#define _C1RXF13EID_EID0_POSITION                0x00000000
#define _C1RXF13EID_EID0_MASK                    0x00000001
#define _C1RXF13EID_EID0_LENGTH                  0x00000001

#define _C1RXF13EID_EID1_POSITION                0x00000001
#define _C1RXF13EID_EID1_MASK                    0x00000002
#define _C1RXF13EID_EID1_LENGTH                  0x00000001

#define _C1RXF13EID_EID2_POSITION                0x00000002
#define _C1RXF13EID_EID2_MASK                    0x00000004
#define _C1RXF13EID_EID2_LENGTH                  0x00000001

#define _C1RXF13EID_EID3_POSITION                0x00000003
#define _C1RXF13EID_EID3_MASK                    0x00000008
#define _C1RXF13EID_EID3_LENGTH                  0x00000001

#define _C1RXF13EID_EID4_POSITION                0x00000004
#define _C1RXF13EID_EID4_MASK                    0x00000010
#define _C1RXF13EID_EID4_LENGTH                  0x00000001

#define _C1RXF13EID_EID5_POSITION                0x00000005
#define _C1RXF13EID_EID5_MASK                    0x00000020
#define _C1RXF13EID_EID5_LENGTH                  0x00000001

#define _C1RXF13EID_EID6_POSITION                0x00000006
#define _C1RXF13EID_EID6_MASK                    0x00000040
#define _C1RXF13EID_EID6_LENGTH                  0x00000001

#define _C1RXF13EID_EID7_POSITION                0x00000007
#define _C1RXF13EID_EID7_MASK                    0x00000080
#define _C1RXF13EID_EID7_LENGTH                  0x00000001

#define _C1RXF13EID_EID8_POSITION                0x00000008
#define _C1RXF13EID_EID8_MASK                    0x00000100
#define _C1RXF13EID_EID8_LENGTH                  0x00000001

#define _C1RXF13EID_EID9_POSITION                0x00000009
#define _C1RXF13EID_EID9_MASK                    0x00000200
#define _C1RXF13EID_EID9_LENGTH                  0x00000001

#define _C1RXF13EID_EID10_POSITION               0x0000000A
#define _C1RXF13EID_EID10_MASK                   0x00000400
#define _C1RXF13EID_EID10_LENGTH                 0x00000001

#define _C1RXF13EID_EID11_POSITION               0x0000000B
#define _C1RXF13EID_EID11_MASK                   0x00000800
#define _C1RXF13EID_EID11_LENGTH                 0x00000001

#define _C1RXF13EID_EID12_POSITION               0x0000000C
#define _C1RXF13EID_EID12_MASK                   0x00001000
#define _C1RXF13EID_EID12_LENGTH                 0x00000001

#define _C1RXF13EID_EID13_POSITION               0x0000000D
#define _C1RXF13EID_EID13_MASK                   0x00002000
#define _C1RXF13EID_EID13_LENGTH                 0x00000001

#define _C1RXF13EID_EID14_POSITION               0x0000000E
#define _C1RXF13EID_EID14_MASK                   0x00004000
#define _C1RXF13EID_EID14_LENGTH                 0x00000001

#define _C1RXF13EID_EID15_POSITION               0x0000000F
#define _C1RXF13EID_EID15_MASK                   0x00008000
#define _C1RXF13EID_EID15_LENGTH                 0x00000001

#define _C1RXF14SID_EID16_POSITION               0x00000000
#define _C1RXF14SID_EID16_MASK                   0x00000001
#define _C1RXF14SID_EID16_LENGTH                 0x00000001

#define _C1RXF14SID_EID17_POSITION               0x00000001
#define _C1RXF14SID_EID17_MASK                   0x00000002
#define _C1RXF14SID_EID17_LENGTH                 0x00000001

#define _C1RXF14SID_EXIDE_POSITION               0x00000003
#define _C1RXF14SID_EXIDE_MASK                   0x00000008
#define _C1RXF14SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF14SID_SID0_POSITION                0x00000005
#define _C1RXF14SID_SID0_MASK                    0x00000020
#define _C1RXF14SID_SID0_LENGTH                  0x00000001

#define _C1RXF14SID_SID1_POSITION                0x00000006
#define _C1RXF14SID_SID1_MASK                    0x00000040
#define _C1RXF14SID_SID1_LENGTH                  0x00000001

#define _C1RXF14SID_SID2_POSITION                0x00000007
#define _C1RXF14SID_SID2_MASK                    0x00000080
#define _C1RXF14SID_SID2_LENGTH                  0x00000001

#define _C1RXF14SID_SID3_POSITION                0x00000008
#define _C1RXF14SID_SID3_MASK                    0x00000100
#define _C1RXF14SID_SID3_LENGTH                  0x00000001

#define _C1RXF14SID_SID4_POSITION                0x00000009
#define _C1RXF14SID_SID4_MASK                    0x00000200
#define _C1RXF14SID_SID4_LENGTH                  0x00000001

#define _C1RXF14SID_SID5_POSITION                0x0000000A
#define _C1RXF14SID_SID5_MASK                    0x00000400
#define _C1RXF14SID_SID5_LENGTH                  0x00000001

#define _C1RXF14SID_SID6_POSITION                0x0000000B
#define _C1RXF14SID_SID6_MASK                    0x00000800
#define _C1RXF14SID_SID6_LENGTH                  0x00000001

#define _C1RXF14SID_SID7_POSITION                0x0000000C
#define _C1RXF14SID_SID7_MASK                    0x00001000
#define _C1RXF14SID_SID7_LENGTH                  0x00000001

#define _C1RXF14SID_SID8_POSITION                0x0000000D
#define _C1RXF14SID_SID8_MASK                    0x00002000
#define _C1RXF14SID_SID8_LENGTH                  0x00000001

#define _C1RXF14SID_SID9_POSITION                0x0000000E
#define _C1RXF14SID_SID9_MASK                    0x00004000
#define _C1RXF14SID_SID9_LENGTH                  0x00000001

#define _C1RXF14SID_SID10_POSITION               0x0000000F
#define _C1RXF14SID_SID10_MASK                   0x00008000
#define _C1RXF14SID_SID10_LENGTH                 0x00000001

#define _C1RXF14EID_EID0_POSITION                0x00000000
#define _C1RXF14EID_EID0_MASK                    0x00000001
#define _C1RXF14EID_EID0_LENGTH                  0x00000001

#define _C1RXF14EID_EID1_POSITION                0x00000001
#define _C1RXF14EID_EID1_MASK                    0x00000002
#define _C1RXF14EID_EID1_LENGTH                  0x00000001

#define _C1RXF14EID_EID2_POSITION                0x00000002
#define _C1RXF14EID_EID2_MASK                    0x00000004
#define _C1RXF14EID_EID2_LENGTH                  0x00000001

#define _C1RXF14EID_EID3_POSITION                0x00000003
#define _C1RXF14EID_EID3_MASK                    0x00000008
#define _C1RXF14EID_EID3_LENGTH                  0x00000001

#define _C1RXF14EID_EID4_POSITION                0x00000004
#define _C1RXF14EID_EID4_MASK                    0x00000010
#define _C1RXF14EID_EID4_LENGTH                  0x00000001

#define _C1RXF14EID_EID5_POSITION                0x00000005
#define _C1RXF14EID_EID5_MASK                    0x00000020
#define _C1RXF14EID_EID5_LENGTH                  0x00000001

#define _C1RXF14EID_EID6_POSITION                0x00000006
#define _C1RXF14EID_EID6_MASK                    0x00000040
#define _C1RXF14EID_EID6_LENGTH                  0x00000001

#define _C1RXF14EID_EID7_POSITION                0x00000007
#define _C1RXF14EID_EID7_MASK                    0x00000080
#define _C1RXF14EID_EID7_LENGTH                  0x00000001

#define _C1RXF14EID_EID8_POSITION                0x00000008
#define _C1RXF14EID_EID8_MASK                    0x00000100
#define _C1RXF14EID_EID8_LENGTH                  0x00000001

#define _C1RXF14EID_EID9_POSITION                0x00000009
#define _C1RXF14EID_EID9_MASK                    0x00000200
#define _C1RXF14EID_EID9_LENGTH                  0x00000001

#define _C1RXF14EID_EID10_POSITION               0x0000000A
#define _C1RXF14EID_EID10_MASK                   0x00000400
#define _C1RXF14EID_EID10_LENGTH                 0x00000001

#define _C1RXF14EID_EID11_POSITION               0x0000000B
#define _C1RXF14EID_EID11_MASK                   0x00000800
#define _C1RXF14EID_EID11_LENGTH                 0x00000001

#define _C1RXF14EID_EID12_POSITION               0x0000000C
#define _C1RXF14EID_EID12_MASK                   0x00001000
#define _C1RXF14EID_EID12_LENGTH                 0x00000001

#define _C1RXF14EID_EID13_POSITION               0x0000000D
#define _C1RXF14EID_EID13_MASK                   0x00002000
#define _C1RXF14EID_EID13_LENGTH                 0x00000001

#define _C1RXF14EID_EID14_POSITION               0x0000000E
#define _C1RXF14EID_EID14_MASK                   0x00004000
#define _C1RXF14EID_EID14_LENGTH                 0x00000001

#define _C1RXF14EID_EID15_POSITION               0x0000000F
#define _C1RXF14EID_EID15_MASK                   0x00008000
#define _C1RXF14EID_EID15_LENGTH                 0x00000001

#define _C1RXF15SID_EID16_POSITION               0x00000000
#define _C1RXF15SID_EID16_MASK                   0x00000001
#define _C1RXF15SID_EID16_LENGTH                 0x00000001

#define _C1RXF15SID_EID17_POSITION               0x00000001
#define _C1RXF15SID_EID17_MASK                   0x00000002
#define _C1RXF15SID_EID17_LENGTH                 0x00000001

#define _C1RXF15SID_EXIDE_POSITION               0x00000003
#define _C1RXF15SID_EXIDE_MASK                   0x00000008
#define _C1RXF15SID_EXIDE_LENGTH                 0x00000001

#define _C1RXF15SID_SID0_POSITION                0x00000005
#define _C1RXF15SID_SID0_MASK                    0x00000020
#define _C1RXF15SID_SID0_LENGTH                  0x00000001

#define _C1RXF15SID_SID1_POSITION                0x00000006
#define _C1RXF15SID_SID1_MASK                    0x00000040
#define _C1RXF15SID_SID1_LENGTH                  0x00000001

#define _C1RXF15SID_SID2_POSITION                0x00000007
#define _C1RXF15SID_SID2_MASK                    0x00000080
#define _C1RXF15SID_SID2_LENGTH                  0x00000001

#define _C1RXF15SID_SID3_POSITION                0x00000008
#define _C1RXF15SID_SID3_MASK                    0x00000100
#define _C1RXF15SID_SID3_LENGTH                  0x00000001

#define _C1RXF15SID_SID4_POSITION                0x00000009
#define _C1RXF15SID_SID4_MASK                    0x00000200
#define _C1RXF15SID_SID4_LENGTH                  0x00000001

#define _C1RXF15SID_SID5_POSITION                0x0000000A
#define _C1RXF15SID_SID5_MASK                    0x00000400
#define _C1RXF15SID_SID5_LENGTH                  0x00000001

#define _C1RXF15SID_SID6_POSITION                0x0000000B
#define _C1RXF15SID_SID6_MASK                    0x00000800
#define _C1RXF15SID_SID6_LENGTH                  0x00000001

#define _C1RXF15SID_SID7_POSITION                0x0000000C
#define _C1RXF15SID_SID7_MASK                    0x00001000
#define _C1RXF15SID_SID7_LENGTH                  0x00000001

#define _C1RXF15SID_SID8_POSITION                0x0000000D
#define _C1RXF15SID_SID8_MASK                    0x00002000
#define _C1RXF15SID_SID8_LENGTH                  0x00000001

#define _C1RXF15SID_SID9_POSITION                0x0000000E
#define _C1RXF15SID_SID9_MASK                    0x00004000
#define _C1RXF15SID_SID9_LENGTH                  0x00000001

#define _C1RXF15SID_SID10_POSITION               0x0000000F
#define _C1RXF15SID_SID10_MASK                   0x00008000
#define _C1RXF15SID_SID10_LENGTH                 0x00000001

#define _C1RXF15EID_EID0_POSITION                0x00000000
#define _C1RXF15EID_EID0_MASK                    0x00000001
#define _C1RXF15EID_EID0_LENGTH                  0x00000001

#define _C1RXF15EID_EID1_POSITION                0x00000001
#define _C1RXF15EID_EID1_MASK                    0x00000002
#define _C1RXF15EID_EID1_LENGTH                  0x00000001

#define _C1RXF15EID_EID2_POSITION                0x00000002
#define _C1RXF15EID_EID2_MASK                    0x00000004
#define _C1RXF15EID_EID2_LENGTH                  0x00000001

#define _C1RXF15EID_EID3_POSITION                0x00000003
#define _C1RXF15EID_EID3_MASK                    0x00000008
#define _C1RXF15EID_EID3_LENGTH                  0x00000001

#define _C1RXF15EID_EID4_POSITION                0x00000004
#define _C1RXF15EID_EID4_MASK                    0x00000010
#define _C1RXF15EID_EID4_LENGTH                  0x00000001

#define _C1RXF15EID_EID5_POSITION                0x00000005
#define _C1RXF15EID_EID5_MASK                    0x00000020
#define _C1RXF15EID_EID5_LENGTH                  0x00000001

#define _C1RXF15EID_EID6_POSITION                0x00000006
#define _C1RXF15EID_EID6_MASK                    0x00000040
#define _C1RXF15EID_EID6_LENGTH                  0x00000001

#define _C1RXF15EID_EID7_POSITION                0x00000007
#define _C1RXF15EID_EID7_MASK                    0x00000080
#define _C1RXF15EID_EID7_LENGTH                  0x00000001

#define _C1RXF15EID_EID8_POSITION                0x00000008
#define _C1RXF15EID_EID8_MASK                    0x00000100
#define _C1RXF15EID_EID8_LENGTH                  0x00000001

#define _C1RXF15EID_EID9_POSITION                0x00000009
#define _C1RXF15EID_EID9_MASK                    0x00000200
#define _C1RXF15EID_EID9_LENGTH                  0x00000001

#define _C1RXF15EID_EID10_POSITION               0x0000000A
#define _C1RXF15EID_EID10_MASK                   0x00000400
#define _C1RXF15EID_EID10_LENGTH                 0x00000001

#define _C1RXF15EID_EID11_POSITION               0x0000000B
#define _C1RXF15EID_EID11_MASK                   0x00000800
#define _C1RXF15EID_EID11_LENGTH                 0x00000001

#define _C1RXF15EID_EID12_POSITION               0x0000000C
#define _C1RXF15EID_EID12_MASK                   0x00001000
#define _C1RXF15EID_EID12_LENGTH                 0x00000001

#define _C1RXF15EID_EID13_POSITION               0x0000000D
#define _C1RXF15EID_EID13_MASK                   0x00002000
#define _C1RXF15EID_EID13_LENGTH                 0x00000001

#define _C1RXF15EID_EID14_POSITION               0x0000000E
#define _C1RXF15EID_EID14_MASK                   0x00004000
#define _C1RXF15EID_EID14_LENGTH                 0x00000001

#define _C1RXF15EID_EID15_POSITION               0x0000000F
#define _C1RXF15EID_EID15_MASK                   0x00008000
#define _C1RXF15EID_EID15_LENGTH                 0x00000001

#define _ODCD_ODCD0_POSITION                     0x00000000
#define _ODCD_ODCD0_MASK                         0x00000001
#define _ODCD_ODCD0_LENGTH                       0x00000001

#define _ODCD_ODCD1_POSITION                     0x00000001
#define _ODCD_ODCD1_MASK                         0x00000002
#define _ODCD_ODCD1_LENGTH                       0x00000001

#define _ODCD_ODCD2_POSITION                     0x00000002
#define _ODCD_ODCD2_MASK                         0x00000004
#define _ODCD_ODCD2_LENGTH                       0x00000001

#define _ODCD_ODCD3_POSITION                     0x00000003
#define _ODCD_ODCD3_MASK                         0x00000008
#define _ODCD_ODCD3_LENGTH                       0x00000001

#define _ODCD_ODCD4_POSITION                     0x00000004
#define _ODCD_ODCD4_MASK                         0x00000010
#define _ODCD_ODCD4_LENGTH                       0x00000001

#define _ODCD_ODCD5_POSITION                     0x00000005
#define _ODCD_ODCD5_MASK                         0x00000020
#define _ODCD_ODCD5_LENGTH                       0x00000001

#define _ODCD_ODCD6_POSITION                     0x00000006
#define _ODCD_ODCD6_MASK                         0x00000040
#define _ODCD_ODCD6_LENGTH                       0x00000001

#define _ODCD_ODCD7_POSITION                     0x00000007
#define _ODCD_ODCD7_MASK                         0x00000080
#define _ODCD_ODCD7_LENGTH                       0x00000001

#define _ODCD_ODCD8_POSITION                     0x00000008
#define _ODCD_ODCD8_MASK                         0x00000100
#define _ODCD_ODCD8_LENGTH                       0x00000001

#define _ODCD_ODCD9_POSITION                     0x00000009
#define _ODCD_ODCD9_MASK                         0x00000200
#define _ODCD_ODCD9_LENGTH                       0x00000001

#define _ODCD_ODCD10_POSITION                    0x0000000A
#define _ODCD_ODCD10_MASK                        0x00000400
#define _ODCD_ODCD10_LENGTH                      0x00000001

#define _ODCD_ODCD11_POSITION                    0x0000000B
#define _ODCD_ODCD11_MASK                        0x00000800
#define _ODCD_ODCD11_LENGTH                      0x00000001

#define _ODCF_ODCF0_POSITION                     0x00000000
#define _ODCF_ODCF0_MASK                         0x00000001
#define _ODCF_ODCF0_LENGTH                       0x00000001

#define _ODCF_ODCF1_POSITION                     0x00000001
#define _ODCF_ODCF1_MASK                         0x00000002
#define _ODCF_ODCF1_LENGTH                       0x00000001

#define _ODCF_ODCF2_POSITION                     0x00000002
#define _ODCF_ODCF2_MASK                         0x00000004
#define _ODCF_ODCF2_LENGTH                       0x00000001

#define _ODCF_ODCF3_POSITION                     0x00000003
#define _ODCF_ODCF3_MASK                         0x00000008
#define _ODCF_ODCF3_LENGTH                       0x00000001

#define _ODCF_ODCF4_POSITION                     0x00000004
#define _ODCF_ODCF4_MASK                         0x00000010
#define _ODCF_ODCF4_LENGTH                       0x00000001

#define _ODCF_ODCF5_POSITION                     0x00000005
#define _ODCF_ODCF5_MASK                         0x00000020
#define _ODCF_ODCF5_LENGTH                       0x00000001

#define _ODCF_ODCF6_POSITION                     0x00000006
#define _ODCF_ODCF6_MASK                         0x00000040
#define _ODCF_ODCF6_LENGTH                       0x00000001

#define _ODCG_ODCG0_POSITION                     0x00000000
#define _ODCG_ODCG0_MASK                         0x00000001
#define _ODCG_ODCG0_LENGTH                       0x00000001

#define _ODCG_ODCG1_POSITION                     0x00000001
#define _ODCG_ODCG1_MASK                         0x00000002
#define _ODCG_ODCG1_LENGTH                       0x00000001

#define _ODCG_ODCG2_POSITION                     0x00000002
#define _ODCG_ODCG2_MASK                         0x00000004
#define _ODCG_ODCG2_LENGTH                       0x00000001

#define _ODCG_ODCG3_POSITION                     0x00000003
#define _ODCG_ODCG3_MASK                         0x00000008
#define _ODCG_ODCG3_LENGTH                       0x00000001

#define _ODCG_ODCG6_POSITION                     0x00000006
#define _ODCG_ODCG6_MASK                         0x00000040
#define _ODCG_ODCG6_LENGTH                       0x00000001

#define _ODCG_ODCG7_POSITION                     0x00000007
#define _ODCG_ODCG7_MASK                         0x00000080
#define _ODCG_ODCG7_LENGTH                       0x00000001

#define _ODCG_ODCG8_POSITION                     0x00000008
#define _ODCG_ODCG8_MASK                         0x00000100
#define _ODCG_ODCG8_LENGTH                       0x00000001

#define _ODCG_ODCG9_POSITION                     0x00000009
#define _ODCG_ODCG9_MASK                         0x00000200
#define _ODCG_ODCG9_LENGTH                       0x00000001

#define _ODCG_ODCG12_POSITION                    0x0000000C
#define _ODCG_ODCG12_MASK                        0x00001000
#define _ODCG_ODCG12_LENGTH                      0x00000001

#define _ODCG_ODCG13_POSITION                    0x0000000D
#define _ODCG_ODCG13_MASK                        0x00002000
#define _ODCG_ODCG13_LENGTH                      0x00000001

#define _ODCG_ODCG14_POSITION                    0x0000000E
#define _ODCG_ODCG14_MASK                        0x00004000
#define _ODCG_ODCG14_LENGTH                      0x00000001

#define _ODCG_ODCG15_POSITION                    0x0000000F
#define _ODCG_ODCG15_MASK                        0x00008000
#define _ODCG_ODCG15_LENGTH                      0x00000001

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

#define _BSRAM_RL_BSR_POSITION                   0x00000000
#define _BSRAM_RL_BSR_MASK                       0x00000001
#define _BSRAM_RL_BSR_LENGTH                     0x00000001

#define _BSRAM_IR_BSR_POSITION                   0x00000001
#define _BSRAM_IR_BSR_MASK                       0x00000002
#define _BSRAM_IR_BSR_LENGTH                     0x00000001

#define _BSRAM_IW_BSR_POSITION                   0x00000002
#define _BSRAM_IW_BSR_MASK                       0x00000004
#define _BSRAM_IW_BSR_LENGTH                     0x00000001

#define _SSRAM_RL_SSR_POSITION                   0x00000000
#define _SSRAM_RL_SSR_MASK                       0x00000001
#define _SSRAM_RL_SSR_LENGTH                     0x00000001

#define _SSRAM_IR_SSR_POSITION                   0x00000001
#define _SSRAM_IR_SSR_MASK                       0x00000002
#define _SSRAM_IR_SSR_LENGTH                     0x00000001

#define _SSRAM_IW_SSR_POSITION                   0x00000002
#define _SSRAM_IW_SSR_MASK                       0x00000004
#define _SSRAM_IW_SSR_LENGTH                     0x00000001

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

#define _PMD1_C1MD_POSITION                      0x00000001
#define _PMD1_C1MD_MASK                          0x00000002
#define _PMD1_C1MD_LENGTH                        0x00000001

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

#define _PMD2_OC5MD_POSITION                     0x00000004
#define _PMD2_OC5MD_MASK                         0x00000010
#define _PMD2_OC5MD_LENGTH                       0x00000001

#define _PMD2_OC6MD_POSITION                     0x00000005
#define _PMD2_OC6MD_MASK                         0x00000020
#define _PMD2_OC6MD_LENGTH                       0x00000001

#define _PMD2_OC7MD_POSITION                     0x00000006
#define _PMD2_OC7MD_MASK                         0x00000040
#define _PMD2_OC7MD_LENGTH                       0x00000001

#define _PMD2_OC8MD_POSITION                     0x00000007
#define _PMD2_OC8MD_MASK                         0x00000080
#define _PMD2_OC8MD_LENGTH                       0x00000001

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

#define _PMD2_IC5MD_POSITION                     0x0000000C
#define _PMD2_IC5MD_MASK                         0x00001000
#define _PMD2_IC5MD_LENGTH                       0x00000001

#define _PMD2_IC6MD_POSITION                     0x0000000D
#define _PMD2_IC6MD_MASK                         0x00002000
#define _PMD2_IC6MD_LENGTH                       0x00000001

#define _PMD2_IC7MD_POSITION                     0x0000000E
#define _PMD2_IC7MD_MASK                         0x00004000
#define _PMD2_IC7MD_LENGTH                       0x00000001

#define _PMD2_IC8MD_POSITION                     0x0000000F
#define _PMD2_IC8MD_MASK                         0x00008000
#define _PMD2_IC8MD_LENGTH                       0x00000001

#define _PMD3_I2C2MD_POSITION                    0x00000001
#define _PMD3_I2C2MD_MASK                        0x00000002
#define _PMD3_I2C2MD_LENGTH                      0x00000001

#define _PMD3_T6MD_POSITION                      0x0000000C
#define _PMD3_T6MD_MASK                          0x00001000
#define _PMD3_T6MD_LENGTH                        0x00000001

#define _PMD3_T7MD_POSITION                      0x0000000D
#define _PMD3_T7MD_MASK                          0x00002000
#define _PMD3_T7MD_LENGTH                        0x00000001

#define _PMD3_T8MD_POSITION                      0x0000000E
#define _PMD3_T8MD_MASK                          0x00004000
#define _PMD3_T8MD_LENGTH                        0x00000001

#define _PMD3_T9MD_POSITION                      0x0000000F
#define _PMD3_T9MD_MASK                          0x00008000
#define _PMD3_T9MD_LENGTH                        0x00000001


/* -------------------------------------------------------- */
/* External declaration for DMA memory base address         */
/*                                                          */
/* For example:                                             */
/*                                                          */
/*   unsigned int addr = (unsigned int) &_DMA_BASE;         */
/*                                                          */
/* Note: Use __builtin_dmaoffset() to calculate offsets     */
/*       within DMA memory.                                 */
/*                                                          */
/* -------------------------------------------------------- */

extern void *_DMA_BASE __attribute__((far));


/* -------------------------------------------------------- */
/* Macros for setting device configuration registers        */
/* -------------------------------------------------------- */

/* Register FBS (0xf80000)                               */

extern __attribute__((space(prog))) unsigned int _FBS;
#define _FBS(x) __attribute__((section("__FBS.sec"),space(prog))) unsigned int _FBS = (x);

/*
** Only one invocation of FBS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FBS.
** Multiple options may be combined, as shown:
**
** _FBS( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Boot Segment Write Protect:
**     BWRP_WRPROTECT_ON    Boot segment is write-protected
**     BWRP_WRPROTECT_OFF   Boot Segment may be written
**
**   Boot Segment Program Flash Code Protection:
**     BSS_LARGE_FLASH_HIGH High Security, Large-sized Boot Flash
**     BSS_HIGH_LARGE_BOOT_CODEHigh Security, Large-sized Boot Flash
**     BSS_MEDIUM_FLASH_HIGHHigh Security, Medium-sized Boot Flash
**     BSS_HIGH_MEDIUM_BOOT_CODEHigh Security, Medium-sized Boot Flash
**     BSS_SMALL_FLASH_HIGH High Security, Small-sized Boot Flash
**     BSS_HIGH_SMALL_BOOT_CODEHigh Security, Small-sized Boot Flash
**     BSS_LARGE_FLASH_STD  Standard Security, Large-sized Boot Flash
**     BSS_STRD_LARGE_BOOT_CODEStandard Security, Large-sized Boot Flash
**     BSS_MEDIUM_FLASH_STD Standard Security, Medium-sized Boot Flash
**     BSS_STRD_MEDIUM_BOOT_CODEStandard Security, Medium-sized Boot Flash
**     BSS_SMALL_FLASH_STD  Standard Security, Small-sized Boot Flash
**     BSS_STRD_SMALL_BOOT_CODEStandard Security, Small-sized Boot Flash
**     BSS_NO_FLASH         No Boot program Flash segment
**     BSS_NO_BOOT_CODE     No Boot program Flash segment
**
**   Boot Segment RAM Protection:
**     RBS_LARGE_RAM        Large-sized Boot RAM
**     RBS_LARGE_BOOT_RAM   Large-sized Boot RAM
**     RBS_MEDIUM_RAM       Medium-sized Boot RAM
**     RBS_MEDIUM_BOOT_RAM  Medium-sized Boot RAM
**     RBS_SMALL_RAM        Small-sized Boot RAM
**     RBS_SMALL_BOOT_RAM   Small-sized Boot RAM
**     RBS_NO_RAM           No Boot RAM
**     RBS_NO_BOOT_RAM      No Boot RAM
**
*/

#define BWRP_WRPROTECT_ON    0xFFFE
#define BWRP_WRPROTECT_OFF   0xFFFF

#define BSS_LARGE_FLASH_HIGH 0xFFF1
#define BSS_HIGH_LARGE_BOOT_CODE 0xFFF1
#define BSS_MEDIUM_FLASH_HIGH 0xFFF3
#define BSS_HIGH_MEDIUM_BOOT_CODE 0xFFF3
#define BSS_SMALL_FLASH_HIGH 0xFFF5
#define BSS_HIGH_SMALL_BOOT_CODE 0xFFF5
#define BSS_LARGE_FLASH_STD  0xFFF9
#define BSS_STRD_LARGE_BOOT_CODE 0xFFF9
#define BSS_MEDIUM_FLASH_STD 0xFFFB
#define BSS_STRD_MEDIUM_BOOT_CODE 0xFFFB
#define BSS_SMALL_FLASH_STD  0xFFFD
#define BSS_STRD_SMALL_BOOT_CODE 0xFFFD
#define BSS_NO_FLASH         0xFFFF
#define BSS_NO_BOOT_CODE     0xFFFF

#define RBS_LARGE_RAM        0xFF3F
#define RBS_LARGE_BOOT_RAM   0xFF3F
#define RBS_MEDIUM_RAM       0xFF7F
#define RBS_MEDIUM_BOOT_RAM  0xFF7F
#define RBS_SMALL_RAM        0xFFBF
#define RBS_SMALL_BOOT_RAM   0xFFBF
#define RBS_NO_RAM           0xFFFF
#define RBS_NO_BOOT_RAM      0xFFFF

/* Register FSS (0xf80002)                               */

extern __attribute__((space(prog))) unsigned int _FSS;
#define _FSS(x) __attribute__((section("__FSS.sec"),space(prog))) unsigned int _FSS = (x);

/*
** Only one invocation of FSS should appear in a project,
** at the top of a C source file (outside of any function).
**
** The following constants can be used to set FSS.
** Multiple options may be combined, as shown:
**
** _FSS( OPT1_ON & OPT2_OFF & OPT3_PLL )
**
**   Secure Segment Program Write Protect:
**     SWRP_WRPROTECT_ON    Secure segment is write-protected
**     SWRP_WRPROTECT_OFF   Secure segment may be written
**
**   Secure Segment Program Flash Code Protection:
**     SSS_LARGE_FLASH_HIGH High Security, Large-sized Secure Flash
**     SSS_HIGH_LARGE_SEC_CODEHigh Security, Large-sized Secure Flash
**     SSS_MEDIUM_FLASH_HIGHHigh Security, Medium-sized Secure Flash
**     SSS_HIGH_MEDIUM_SEC_CODEHigh Security, Medium-sized Secure Flash
**     SSS_SMALL_FLASH_HIGH High Security, Small-sized Secure Flash
**     SSS_HIGH_SMALL_SEC_CODEHigh Security, Small-sized Secure Flash
**     SSS_LARGE_FLASH_STD  Standard Security, Large-sized Secure Flash
**     SSS_STRD_LARGE_SEC_CODEStandard Security, Large-sized Secure Flash
**     SSS_MEDIUM_FLASH_STD Standard Security, Medium-sized Secure Flash
**     SSS_STRD_MEDIUM_SEC_CODEStandard Security, Medium-sized Secure Flash
**     SSS_SMALL_FLASH_STD  Standard Security, Small-sized Secure Flash
**     SSS_STRD_SMALL_SEC_CODEStandard Security, Small-sized Secure Flash
**     SSS_NO_FLASH         No Secure Segment
**     SSS_NO_SEC_CODE      No Secure Segment
**
**   Secure Segment Data RAM Protection:
**     RSS_LARGE_RAM        Large-sized Secure RAM
**     RSS_LARGE_SEC_RAM    Large-sized Secure RAM
**     RSS_MEDIUM_RAM       Medium-sized Secure RAM
**     RSS_MEDIUM_SEC_RAM   Medium-sized Secure RAM
**     RSS_SMALL_RAM        Small-sized Secure RAM
**     RSS_SMALL_SEC_RAM    Small-sized Secure RAM
**     RSS_NO_RAM           No Secure RAM
**     RSS_NO_SEC_RAM       No Secure RAM
**
*/

#define SWRP_WRPROTECT_ON    0xFFFE
#define SWRP_WRPROTECT_OFF   0xFFFF

#define SSS_LARGE_FLASH_HIGH 0xFFF1
#define SSS_HIGH_LARGE_SEC_CODE 0xFFF1
#define SSS_MEDIUM_FLASH_HIGH 0xFFF3
#define SSS_HIGH_MEDIUM_SEC_CODE 0xFFF3
#define SSS_SMALL_FLASH_HIGH 0xFFF5
#define SSS_HIGH_SMALL_SEC_CODE 0xFFF5
#define SSS_LARGE_FLASH_STD  0xFFF9
#define SSS_STRD_LARGE_SEC_CODE 0xFFF9
#define SSS_MEDIUM_FLASH_STD 0xFFFB
#define SSS_STRD_MEDIUM_SEC_CODE 0xFFFB
#define SSS_SMALL_FLASH_STD  0xFFFD
#define SSS_STRD_SMALL_SEC_CODE 0xFFFD
#define SSS_NO_FLASH         0xFFFF
#define SSS_NO_SEC_CODE      0xFFFF

#define RSS_LARGE_RAM        0xFF3F
#define RSS_LARGE_SEC_RAM    0xFF3F
#define RSS_MEDIUM_RAM       0xFF7F
#define RSS_MEDIUM_SEC_RAM   0xFF7F
#define RSS_SMALL_RAM        0xFFBF
#define RSS_SMALL_SEC_RAM    0xFFBF
#define RSS_NO_RAM           0xFFFF
#define RSS_NO_SEC_RAM       0xFFFF

/* Register FGS (0xf80004)                               */

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
**   General Code Segment Write Protect:
**     GWRP_ON              User program memory is write-protected
**     GWRP_OFF             User program memory is not write-protected
**
**   General Segment Code Protection:
**     GSS_HIGH             High Security Code Protection is Enabled
**     GSS_STD              Standard Security Code Protection is Enabled
**     GCP_ON               Standard Security Code Protection is Enabled
**     GSS_OFF              User program memory is not code-protected
**     GCP_OFF              User program memory is not code-protected
**
*/

#define GWRP_ON              0xFFFE
#define GWRP_OFF             0xFFFF

#define GSS_HIGH             0xFFFB
#define GSS_STD              0xFFFD
#define GCP_ON               0xFFFD
#define GSS_OFF              0xFFFF
#define GCP_OFF              0xFFFF

/* Register FOSCSEL (0xf80006)                               */

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
**   Oscillator Mode:
**     FNOSC_FRC            Internal Fast RC (FRC)
**     FNOSC_FRCPLL         Internal Fast RC (FRC) w/ PLL
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator (XT, HS, EC) w/ PLL
**     FNOSC_SOSC           Secondary Oscillator (SOSC)
**     FNOSC_LPRC           Low Power RC Oscillator (LPRC)
**     FNOSC_FRCDIV16       Internal Fast RC (FRC) divide by 16
**     FNOSC_LPRCDIVN       Internal Fast RC (FRC) with divide by N
**
**   Two-speed Oscillator Start-Up Enable:
**     IESO_OFF             Start up with user-selected oscillator
**     IESO_ON              Start up with FRC, then switch
**
*/

#define FNOSC_FRC            0xFFF8
#define FNOSC_FRCPLL         0xFFF9
#define FNOSC_PRI            0xFFFA
#define FNOSC_PRIPLL         0xFFFB
#define FNOSC_SOSC           0xFFFC
#define FNOSC_LPRC           0xFFFD
#define FNOSC_FRCDIV16       0xFFFE
#define FNOSC_LPRCDIVN       0xFFFF

#define IESO_OFF             0xFF7F
#define IESO_ON              0xFFFF

/* Register FOSC (0xf80008)                               */

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
**   Primary Oscillator Source:
**     POSCMD_EC            EC Oscillator Mode
**     POSCMD_XT            XT Oscillator Mode
**     POSCMD_HS            HS Oscillator Mode
**     POSCMD_NONE          Primary Oscillator Disabled
**
**   OSC2 Pin Function:
**     OSCIOFNC_ON          OSC2 pin has digital I/O function
**     OSCIOFNC_OFF         OSC2 pin has clock out function
**
**   Clock Switching and Monitor:
**     FCKSM_CSECME         Both Clock Switching and Fail-Safe Clock Monitor are enabled
**     FCKSM_CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Both Clock Switching and Fail-Safe Clock Monitor are disabled
**
*/

#define POSCMD_EC            0xFFFC
#define POSCMD_XT            0xFFFD
#define POSCMD_HS            0xFFFE
#define POSCMD_NONE          0xFFFF

#define OSCIOFNC_ON          0xFFFB
#define OSCIOFNC_OFF         0xFFFF

#define FCKSM_CSECME         0xFF3F
#define FCKSM_CSECMD         0xFF7F
#define FCKSM_CSDCMD         0xFFBF

/* Register FWDT (0xf8000a)                               */

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
**     WDTPRE_PR32          1:32
**     WDTPRE_PR128         1:128
**
**   Watchdog Timer Window:
**     WINDIS_ON            Watchdog Timer in Window mode
**     WINDIS_OFF           Watchdog Timer in Non-Window mode
**
**   Watchdog Timer Enable:
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

#define WINDIS_ON            0xFFBF
#define WINDIS_OFF           0xFFFF

#define FWDTEN_OFF           0xFF7F
#define FWDTEN_ON            0xFFFF

/* Register FPOR (0xf8000c)                               */

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
**   POR Timer Value:
**     FPWRT_PWR1           Disabled
**     FPWRT_PWR2           2ms
**     FPWRT_PWR4           4ms
**     FPWRT_PWR8           8ms
**     FPWRT_PWR16          16ms
**     FPWRT_PWR32          32ms
**     FPWRT_PWR64          64ms
**     FPWRT_PWR128         128ms
**
*/

#define FPWRT_PWR1           0xFFF8
#define FPWRT_PWR2           0xFFF9
#define FPWRT_PWR4           0xFFFA
#define FPWRT_PWR8           0xFFFB
#define FPWRT_PWR16          0xFFFC
#define FPWRT_PWR32          0xFFFD
#define FPWRT_PWR64          0xFFFE
#define FPWRT_PWR128         0xFFFF

/* Register FICD (0xf8000e)                               */

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
**   Comm Channel Select:
**     ICS_PGD3             Communicate on PGC3/EMUC3 and PGD3/EMUD3
**     ICS_PGD2             Communicate on PGC2/EMUC2 and PGD2/EMUD2
**     ICS_PGD1             Communicate on PGC1/EMUC1 and PGD1/EMUD1
**
**   JTAG Port Enable:
**     JTAGEN_OFF           JTAG is Disabled
**     JTAGEN_ON            JTAG is Enabled
**
*/

#define ICS_PGD3             0xFFFD
#define ICS_PGD2             0xFFFE
#define ICS_PGD1             0xFFFF

#define JTAGEN_OFF           0xFFDF
#define JTAGEN_ON            0xFFFF

/* Register FUID0 (0xf80010)                               */

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


/* Register FUID1 (0xf80012)                               */

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


/* Register FUID2 (0xf80014)                               */

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


/* Register FUID3 (0xf80016)                               */

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
#define __IVT_LENGTH 0xfc

#define ___RESERVED_BASE 0x100
#define ___RESERVED_LENGTH 0x4

#define __AIVT_BASE 0x104
#define __AIVT_LENGTH 0xfc

#define __PROGRAM_BASE 0x200
#define __PROGRAM_LENGTH 0xaa00

#define __FBS_BASE 0xf80000
#define __FBS_LENGTH 0x2

#define __FSS_BASE 0xf80002
#define __FSS_LENGTH 0x2

#define __FGS_BASE 0xf80004
#define __FGS_LENGTH 0x2

#define __FOSCSEL_BASE 0xf80006
#define __FOSCSEL_LENGTH 0x2

#define __FOSC_BASE 0xf80008
#define __FOSC_LENGTH 0x2

#define __FWDT_BASE 0xf8000a
#define __FWDT_LENGTH 0x2

#define __FPOR_BASE 0xf8000c
#define __FPOR_LENGTH 0x2

#define __FICD_BASE 0xf8000e
#define __FICD_LENGTH 0x2

#define __FUID0_BASE 0xf80010
#define __FUID0_LENGTH 0x2

#define __FUID1_BASE 0xf80012
#define __FUID1_LENGTH 0x2

#define __FUID2_BASE 0xf80014
#define __FUID2_LENGTH 0x2

#define __FUID3_BASE 0xf80016
#define __FUID3_LENGTH 0x2

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x1800

#define __DMA_BASE 0x2000
#define __DMA_LENGTH 0x800


#endif
