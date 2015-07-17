/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC24F16KL402 processor header
 *
 * (c) Copyright 1999-2014 Microchip Technology, All rights reserved
 * Part support version v1.22.A(19-Aug-2014)
 *-------------------------------------------------------------------------*/

#ifndef __PIC24F16KL402__
#error "Include file does not match processor setting"
#endif

#ifndef __24F16KL402_H
#define __24F16KL402_H

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
#define CNPD1 CNPD1
extern volatile unsigned int  CNPD1 __attribute__((__sfr__));
typedef struct tagCNPD1BITS {
  unsigned CN0PDE:1;
  unsigned CN1PDE:1;
  unsigned CN2PDE:1;
  unsigned CN3PDE:1;
  unsigned CN4PDE:1;
  unsigned CN5PDE:1;
  unsigned CN6PDE:1;
  unsigned CN7PDE:1;
  unsigned CN8PDE:1;
  unsigned CN9PDE:1;
  unsigned :1;
  unsigned CN11PDE:1;
  unsigned CN12PDE:1;
  unsigned CN13PDE:1;
  unsigned CN14PDE:1;
  unsigned CN15PDE:1;
} CNPD1BITS;
extern volatile CNPD1BITS CNPD1bits __attribute__((__sfr__));

#define CNPD2 CNPD2
extern volatile unsigned int  CNPD2 __attribute__((__sfr__));
typedef struct tagCNPD2BITS {
  unsigned CN16PDE:1;
  unsigned :4;
  unsigned CN21PDE:1;
  unsigned CN22PDE:1;
  unsigned CN23PDE:1;
  unsigned CN24PDE:1;
  unsigned :2;
  unsigned CN27PDE:1;
  unsigned :1;
  unsigned CN29PDE:1;
  unsigned CN30PDE:1;
} CNPD2BITS;
extern volatile CNPD2BITS CNPD2bits __attribute__((__sfr__));

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
  unsigned :1;
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
  unsigned :4;
  unsigned CN21IE:1;
  unsigned CN22IE:1;
  unsigned CN23IE:1;
  unsigned CN24IE:1;
  unsigned :2;
  unsigned CN27IE:1;
  unsigned :1;
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
  unsigned CN6PUE:1;
  unsigned CN7PUE:1;
  unsigned CN8PUE:1;
  unsigned CN9PUE:1;
  unsigned :1;
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
  unsigned :4;
  unsigned CN21PUE:1;
  unsigned CN22PUE:1;
  unsigned CN23PUE:1;
  unsigned CN24PUE:1;
  unsigned :2;
  unsigned CN27PUE:1;
  unsigned :1;
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
  unsigned :1;
  unsigned CCP1IF:1;
  unsigned T1IF:1;
  unsigned :2;
  unsigned CCP2IF:1;
  unsigned T2IF:1;
  unsigned T3IF:1;
  unsigned :2;
  unsigned U1RXIF:1;
  unsigned U1TXIF:1;
  unsigned AD1IF:1;
  unsigned :1;
  unsigned NVMIF:1;
} IFS0BITS;
extern volatile IFS0BITS IFS0bits __attribute__((__sfr__));

#define IFS1 IFS1
extern volatile unsigned int  IFS1 __attribute__((__sfr__));
typedef struct tagIFS1BITS {
  unsigned SSP1IF:1;
  unsigned BCL1IF:1;
  unsigned CMIF:1;
  unsigned CNIF:1;
  unsigned INT1IF:1;
  unsigned :4;
  unsigned CCP3IF:1;
  unsigned :1;
  unsigned T4IF:1;
  unsigned :1;
  unsigned INT2IF:1;
  unsigned U2RXIF:1;
  unsigned U2TXIF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS2 IFS2
extern volatile unsigned int  IFS2 __attribute__((__sfr__));
typedef struct tagIFS2BITS {
  unsigned :5;
  unsigned T3GIF:1;
} IFS2BITS;
extern volatile IFS2BITS IFS2bits __attribute__((__sfr__));

#define IFS3 IFS3
extern volatile unsigned int  IFS3 __attribute__((__sfr__));
typedef struct tagIFS3BITS {
  unsigned :1;
  unsigned SSP2IF:1;
  unsigned BCL2IF:1;
} IFS3BITS;
extern volatile IFS3BITS IFS3bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile unsigned int  IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  unsigned :1;
  unsigned U1ERIF:1;
  unsigned U2ERIF:1;
  unsigned :5;
  unsigned HLVDIF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

#define IFS5 IFS5
extern volatile unsigned int  IFS5 __attribute__((__sfr__));
typedef struct tagIFS5BITS {
  unsigned ULPWUIF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile unsigned int  IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  unsigned INT0IE:1;
  unsigned :1;
  unsigned CCP1IE:1;
  unsigned T1IE:1;
  unsigned :2;
  unsigned CCP2IE:1;
  unsigned T2IE:1;
  unsigned T3IE:1;
  unsigned :2;
  unsigned U1RXIE:1;
  unsigned U1TXIE:1;
  unsigned AD1IE:1;
  unsigned :1;
  unsigned NVMIE:1;
} IEC0BITS;
extern volatile IEC0BITS IEC0bits __attribute__((__sfr__));

#define IEC1 IEC1
extern volatile unsigned int  IEC1 __attribute__((__sfr__));
typedef struct tagIEC1BITS {
  unsigned SSP1IE:1;
  unsigned BCL1IE:1;
  unsigned CMIE:1;
  unsigned CNIE:1;
  unsigned INT1IE:1;
  unsigned :4;
  unsigned CCP3IE:1;
  unsigned :1;
  unsigned T4IE:1;
  unsigned :1;
  unsigned INT2IE:1;
  unsigned U2RXIE:1;
  unsigned U2TXIE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC2 IEC2
extern volatile unsigned int  IEC2 __attribute__((__sfr__));
typedef struct tagIEC2BITS {
  unsigned :5;
  unsigned T3GIE:1;
} IEC2BITS;
extern volatile IEC2BITS IEC2bits __attribute__((__sfr__));

#define IEC3 IEC3
extern volatile unsigned int  IEC3 __attribute__((__sfr__));
typedef struct tagIEC3BITS {
  unsigned :1;
  unsigned SSP2IE:1;
  unsigned BCL2IE:1;
} IEC3BITS;
extern volatile IEC3BITS IEC3bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile unsigned int  IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  unsigned :1;
  unsigned U1ERIE:1;
  unsigned U2ERIE:1;
  unsigned :5;
  unsigned HLVDIE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

#define IEC5 IEC5
extern volatile unsigned int  IEC5 __attribute__((__sfr__));
typedef struct tagIEC5BITS {
  unsigned ULPWUIE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

#define IPC0 IPC0
extern volatile unsigned int  IPC0 __attribute__((__sfr__));
__extension__ typedef struct tagIPC0BITS {
  union {
    struct {
      unsigned INT0IP:3;
      unsigned :5;
      unsigned CCP1IP:3;
      unsigned :1;
      unsigned T1IP:3;
    };
    struct {
      unsigned INT0IP0:1;
      unsigned INT0IP1:1;
      unsigned INT0IP2:1;
      unsigned :5;
      unsigned CCP1IP0:1;
      unsigned CCP1IP1:1;
      unsigned CCP1IP2:1;
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
      unsigned :8;
      unsigned CCP2IP:3;
      unsigned :1;
      unsigned T2IP:3;
    };
    struct {
      unsigned :8;
      unsigned CCP2IP0:1;
      unsigned CCP2IP1:1;
      unsigned CCP2IP2:1;
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
      unsigned :9;
      unsigned U1RXIP:3;
    };
    struct {
      unsigned T3IP0:1;
      unsigned T3IP1:1;
      unsigned T3IP2:1;
      unsigned :9;
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
      unsigned :5;
      unsigned NVMIP:3;
    };
    struct {
      unsigned U1TXIP0:1;
      unsigned U1TXIP1:1;
      unsigned U1TXIP2:1;
      unsigned :1;
      unsigned AD1IP0:1;
      unsigned AD1IP1:1;
      unsigned AD1IP2:1;
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
      unsigned SSP1IP:3;
      unsigned :1;
      unsigned BCL1IP:3;
      unsigned :1;
      unsigned CMIP:3;
      unsigned :1;
      unsigned CNIP:3;
    };
    struct {
      unsigned SSP1IP0:1;
      unsigned SSP1IP1:1;
      unsigned SSP1IP2:1;
      unsigned :1;
      unsigned BCL1IP0:1;
      unsigned BCL1IP1:1;
      unsigned BCL1IP2:1;
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
      unsigned :4;
      unsigned CCP3IP:3;
      unsigned :5;
      unsigned T4IP:3;
    };
    struct {
      unsigned :4;
      unsigned CCP3IP0:1;
      unsigned CCP3IP1:1;
      unsigned CCP3IP2:1;
      unsigned :5;
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
      unsigned :4;
      unsigned INT2IP:3;
      unsigned :1;
      unsigned U2RXIP:3;
      unsigned :1;
      unsigned U2TXIP:3;
    };
    struct {
      unsigned :4;
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

#define IPC9 IPC9
extern volatile unsigned int  IPC9 __attribute__((__sfr__));
__extension__ typedef struct tagIPC9BITS {
  union {
    struct {
      unsigned :4;
      unsigned T3GIP:3;
    };
    struct {
      unsigned :4;
      unsigned T3GIP0:1;
      unsigned T3GIP1:1;
      unsigned T3GIP2:1;
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
      unsigned SSP2IP:3;
      unsigned :1;
      unsigned BCL2IP:3;
    };
    struct {
      unsigned :4;
      unsigned SSP2IP0:1;
      unsigned SSP2IP1:1;
      unsigned SSP2IP2:1;
      unsigned :1;
      unsigned BCL2IP0:1;
      unsigned BCL2IP1:1;
      unsigned BCL2IP2:1;
    };
  };
} IPC12BITS;
extern volatile IPC12BITS IPC12bits __attribute__((__sfr__));

#define IPC16 IPC16
extern volatile unsigned int  IPC16 __attribute__((__sfr__));
__extension__ typedef struct tagIPC16BITS {
  union {
    struct {
      unsigned :4;
      unsigned U1ERIP:3;
      unsigned :1;
      unsigned U2ERIP:3;
    };
    struct {
      unsigned :4;
      unsigned U1ERIP0:1;
      unsigned U1ERIP1:1;
      unsigned U1ERIP2:1;
      unsigned :1;
      unsigned U2ERIP0:1;
      unsigned U2ERIP1:1;
      unsigned U2ERIP2:1;
    };
  };
} IPC16BITS;
extern volatile IPC16BITS IPC16bits __attribute__((__sfr__));

#define IPC18 IPC18
extern volatile unsigned int  IPC18 __attribute__((__sfr__));
__extension__ typedef struct tagIPC18BITS {
  union {
    struct {
      unsigned HLVDIP:3;
    };
    struct {
      unsigned HLVDIP0:1;
      unsigned HLVDIP1:1;
      unsigned HLVDIP2:1;
    };
  };
} IPC18BITS;
extern volatile IPC18BITS IPC18bits __attribute__((__sfr__));

#define IPC20 IPC20
extern volatile unsigned int  IPC20 __attribute__((__sfr__));
__extension__ typedef struct tagIPC20BITS {
  union {
    struct {
      unsigned ULPWUIP:3;
    };
    struct {
      unsigned ULPWUIP0:1;
      unsigned ULPWUIP1:1;
      unsigned ULPWUIP2:1;
    };
  };
} IPC20BITS;
extern volatile IPC20BITS IPC20bits __attribute__((__sfr__));

#define INTTREG INTTREG
extern volatile unsigned int  INTTREG __attribute__((__sfr__));
__extension__ typedef struct tagINTTREGBITS {
  union {
    struct {
      unsigned VECNUM:7;
      unsigned :1;
      unsigned ILR:4;
      unsigned :1;
      unsigned VHOLD:1;
      unsigned :1;
      unsigned CPUIRQ:1;
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
      unsigned :1;
      unsigned TECS:2;
      unsigned :3;
      unsigned TSIDL:1;
      unsigned :1;
      unsigned TON:1;
    };
    struct {
      unsigned :4;
      unsigned TCKPS0:1;
      unsigned TCKPS1:1;
      unsigned :2;
      unsigned TECS0:1;
      unsigned TECS1:1;
    };
    struct {
      unsigned :8;
      unsigned T1ECS:2;
    };
    struct {
      unsigned :8;
      unsigned T1ECS0:1;
      unsigned T1ECS1:1;
    };
  };
} T1CONBITS;
extern volatile T1CONBITS T1CONbits __attribute__((__sfr__));

#define TMR2 TMR2
extern volatile unsigned char TMR2 __attribute__((__sfr__));
#define PR2 PR2
extern volatile unsigned int  PR2 __attribute__((__sfr__));
#define T2CON T2CON
extern volatile unsigned int  T2CON __attribute__((__sfr__));
__extension__ typedef struct tagT2CONBITS {
  union {
    struct {
      unsigned T2CKPS:2;
      unsigned TMR2ON:1;
      unsigned T2OUTPS:4;
    };
    struct {
      unsigned TCKPS:2;
      unsigned TON:1;
      unsigned TOUTPS:4;
    };
    struct {
      unsigned T2CKPS0:1;
      unsigned T2CKPS1:1;
      unsigned :1;
      unsigned T2OUTPS0:1;
      unsigned T2OUTPS1:1;
      unsigned T2OUTPS2:1;
      unsigned T2OUTPS3:1;
    };
  };
} T2CONBITS;
extern volatile T2CONBITS T2CONbits __attribute__((__sfr__));

#define TMR3 TMR3
extern volatile unsigned int  TMR3 __attribute__((__sfr__));
#define T3GCON T3GCON
extern volatile unsigned int  T3GCON __attribute__((__sfr__));
__extension__ typedef struct tagT3GCONBITS {
  union {
    struct {
      unsigned T3GSS:2;
      unsigned T3GVAL:1;
      unsigned T3GGO:1;
      unsigned T3GSPM:1;
      unsigned T3GTM:1;
      unsigned T3GPOL:1;
      unsigned TMR3GE:1;
    };
    struct {
      unsigned T3GSS0:1;
      unsigned T3GSS1:1;
      unsigned :1;
      unsigned NOT_T3DONE:1;
    };
    struct {
      unsigned TGSS:2;
      unsigned TGVAL:1;
      unsigned TGGO:1;
      unsigned TGSE:1;
      unsigned TGTM:1;
      unsigned TGPOL:1;
      unsigned TGATE:1;
    };
  };
} T3GCONBITS;
extern volatile T3GCONBITS T3GCONbits __attribute__((__sfr__));

#define T3CON T3CON
extern volatile unsigned int  T3CON __attribute__((__sfr__));
__extension__ typedef struct tagT3CONBITS {
  union {
    struct {
      unsigned TMR3ON:1;
      unsigned :1;
      unsigned NOT_T3SYNC:1;
      unsigned T3OSCEN:1;
      unsigned T3CKPS:2;
      unsigned TMR3CS:2;
    };
    struct {
      unsigned TON:1;
      unsigned :1;
      unsigned NOT_TSYNC:1;
      unsigned SOSCEN:1;
      unsigned TCKPS:2;
      unsigned TCS:2;
    };
    struct {
      unsigned :4;
      unsigned T3CKPS0:1;
      unsigned T3CKPS1:1;
      unsigned TMR3CS0:1;
      unsigned TMR3CS1:1;
    };
  };
} T3CONBITS;
extern volatile T3CONBITS T3CONbits __attribute__((__sfr__));

#define TMR4 TMR4
extern volatile unsigned int  TMR4 __attribute__((__sfr__));
#define PR4 PR4
extern volatile unsigned int  PR4 __attribute__((__sfr__));
#define T4CON T4CON
extern volatile unsigned int  T4CON __attribute__((__sfr__));
__extension__ typedef struct tagT4CONBITS {
  union {
    struct {
      unsigned T4CKPS:2;
      unsigned TMR4ON:1;
      unsigned T4OUTPS:4;
    };
    struct {
      unsigned TCKPS:2;
      unsigned TON:1;
      unsigned TOUTPS:4;
    };
    struct {
      unsigned T4CKPS0:1;
      unsigned T4CKPS1:1;
      unsigned :1;
      unsigned T4OUTPS0:1;
      unsigned T4OUTPS1:1;
      unsigned T4OUTPS2:1;
      unsigned T4OUTPS3:1;
    };
  };
} T4CONBITS;
extern volatile T4CONBITS T4CONbits __attribute__((__sfr__));

#define CCPTMRS0 CCPTMRS0
extern volatile unsigned int  CCPTMRS0 __attribute__((__sfr__));
typedef struct tagCCPTMRS0BITS {
  unsigned C1TSEL0:1;
  unsigned :2;
  unsigned C2TSEL0:1;
  unsigned :2;
  unsigned C3TSEL0:1;
} CCPTMRS0BITS;
extern volatile CCPTMRS0BITS CCPTMRS0bits __attribute__((__sfr__));

#define CCP1CON CCP1CON
extern volatile unsigned int  CCP1CON __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CONBITS {
  union {
    struct {
      unsigned CCPM:4;
      unsigned DCB:2;
      unsigned PM:2;
    };
    struct {
      unsigned CCPM0:1;
      unsigned CCPM1:1;
      unsigned CCPM2:1;
      unsigned CCPM3:1;
      unsigned DCB0:1;
      unsigned DCB1:1;
      unsigned PM0:1;
      unsigned PM1:1;
    };
    struct {
      unsigned CCP1M:4;
      unsigned DC1B:2;
      unsigned P1M:2;
    };
    struct {
      unsigned CCP1M0:1;
      unsigned CCP1M1:1;
      unsigned CCP1M2:1;
      unsigned CCP1M3:1;
      unsigned DC1B0:1;
      unsigned DC1B1:1;
      unsigned P1M0:1;
      unsigned P1M1:1;
    };
  };
} CCP1CONBITS;
extern volatile CCP1CONBITS CCP1CONbits __attribute__((__sfr__));

#define ECCP1CON ECCP1CON
extern volatile unsigned int  ECCP1CON __attribute__((__sfr__));
__extension__ typedef struct tagECCP1CONBITS {
  union {
    struct {
      unsigned CCPM:4;
      unsigned DCB:2;
      unsigned PM:2;
    };
    struct {
      unsigned CCPM0:1;
      unsigned CCPM1:1;
      unsigned CCPM2:1;
      unsigned CCPM3:1;
      unsigned DCB0:1;
      unsigned DCB1:1;
      unsigned PM0:1;
      unsigned PM1:1;
    };
    struct {
      unsigned CCP1M:4;
      unsigned DC1B:2;
      unsigned P1M:2;
    };
    struct {
      unsigned CCP1M0:1;
      unsigned CCP1M1:1;
      unsigned CCP1M2:1;
      unsigned CCP1M3:1;
      unsigned DC1B0:1;
      unsigned DC1B1:1;
      unsigned P1M0:1;
      unsigned P1M1:1;
    };
  };
} ECCP1CONBITS;
extern volatile ECCP1CONBITS ECCP1CONbits __attribute__((__sfr__));

#define CCPR1L CCPR1L
extern volatile unsigned char CCPR1L __attribute__((__sfr__));
#define CCPR1H CCPR1H
extern volatile unsigned char CCPR1H __attribute__((__sfr__));
#define ECCP1DEL ECCP1DEL
extern volatile unsigned int  ECCP1DEL __attribute__((__sfr__));
__extension__ typedef struct tagECCP1DELBITS {
  union {
    struct {
      unsigned PDC:7;
      unsigned PRSEN:1;
    };
    struct {
      unsigned PDC0:1;
      unsigned PDC1:1;
      unsigned PDC2:1;
      unsigned PDC3:1;
      unsigned PDC4:1;
      unsigned PDC5:1;
      unsigned PDC6:1;
    };
    struct {
      unsigned P1DC:7;
      unsigned P1RSEN:1;
    };
    struct {
      unsigned P1DC0:1;
      unsigned P1DC1:1;
      unsigned P1DC2:1;
      unsigned P1DC3:1;
      unsigned P1DC4:1;
      unsigned P1DC5:1;
      unsigned P1DC6:1;
    };
  };
} ECCP1DELBITS;
extern volatile ECCP1DELBITS ECCP1DELbits __attribute__((__sfr__));

#define PWM1CON PWM1CON
extern volatile unsigned int  PWM1CON __attribute__((__sfr__));
__extension__ typedef struct tagPWM1CONBITS {
  union {
    struct {
      unsigned PDC:7;
      unsigned PRSEN:1;
    };
    struct {
      unsigned PDC0:1;
      unsigned PDC1:1;
      unsigned PDC2:1;
      unsigned PDC3:1;
      unsigned PDC4:1;
      unsigned PDC5:1;
      unsigned PDC6:1;
    };
    struct {
      unsigned P1DC:7;
      unsigned P1RSEN:1;
    };
    struct {
      unsigned P1DC0:1;
      unsigned P1DC1:1;
      unsigned P1DC2:1;
      unsigned P1DC3:1;
      unsigned P1DC4:1;
      unsigned P1DC5:1;
      unsigned P1DC6:1;
    };
  };
} PWM1CONBITS;
extern volatile PWM1CONBITS PWM1CONbits __attribute__((__sfr__));

#define ECCP1AS ECCP1AS
extern volatile unsigned int  ECCP1AS __attribute__((__sfr__));
__extension__ typedef struct tagECCP1ASBITS {
  union {
    struct {
      unsigned PSSBD:2;
      unsigned PSSAC:2;
      unsigned ECCPAS:3;
      unsigned ECCPASE:1;
    };
    struct {
      unsigned PSSBD0:1;
      unsigned PSSBD1:1;
      unsigned PSSAC0:1;
      unsigned PSSAC1:1;
      unsigned ECCPAS0:1;
      unsigned ECCPAS1:1;
      unsigned ECCPAS2:1;
    };
    struct {
      unsigned PSS1BD:2;
      unsigned PSS1AC:2;
      unsigned ECCP1AS:3;
    };
    struct {
      unsigned PSS1BD0:1;
      unsigned PSS1BD1:1;
      unsigned PSS1AC0:1;
      unsigned PSS1AC1:1;
      unsigned ECCP1AS0:1;
      unsigned ECCP1AS1:1;
      unsigned ECCP1AS2:1;
    };
  };
} ECCP1ASBITS;
extern volatile ECCP1ASBITS ECCP1ASbits __attribute__((__sfr__));

#define PSTR1CON PSTR1CON
extern volatile unsigned int  PSTR1CON __attribute__((__sfr__));
__extension__ typedef struct tagPSTR1CONBITS {
  union {
    struct {
      unsigned STRA:1;
      unsigned STRB:1;
      unsigned STRC:1;
      unsigned STRD:1;
      unsigned STRSYNC:1;
      unsigned :1;
      unsigned CMPL:2;
    };
    struct {
      unsigned :6;
      unsigned CMPL0:1;
      unsigned CMPL1:1;
    };
  };
} PSTR1CONBITS;
extern volatile PSTR1CONBITS PSTR1CONbits __attribute__((__sfr__));

#define CCP2CON CCP2CON
extern volatile unsigned int  CCP2CON __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CONBITS {
  union {
    struct {
      unsigned CCPM:4;
      unsigned DCB:2;
    };
    struct {
      unsigned CCPM0:1;
      unsigned CCPM1:1;
      unsigned CCPM2:1;
      unsigned CCPM3:1;
      unsigned DCB0:1;
      unsigned DCB1:1;
    };
    struct {
      unsigned CCP2M:4;
      unsigned DC2B:2;
    };
    struct {
      unsigned CCP2M0:1;
      unsigned CCP2M1:1;
      unsigned CCP2M2:1;
      unsigned CCP2M3:1;
      unsigned DC2B0:1;
      unsigned DC2B1:1;
    };
  };
} CCP2CONBITS;
extern volatile CCP2CONBITS CCP2CONbits __attribute__((__sfr__));

#define CCPR2L CCPR2L
extern volatile unsigned char CCPR2L __attribute__((__sfr__));
#define CCPR2H CCPR2H
extern volatile unsigned char CCPR2H __attribute__((__sfr__));
#define CCP3CON CCP3CON
extern volatile unsigned int  CCP3CON __attribute__((__sfr__));
__extension__ typedef struct tagCCP3CONBITS {
  union {
    struct {
      unsigned CCPM:4;
      unsigned DCB:2;
    };
    struct {
      unsigned CCPM0:1;
      unsigned CCPM1:1;
      unsigned CCPM2:1;
      unsigned CCPM3:1;
      unsigned DCB0:1;
      unsigned DCB1:1;
    };
    struct {
      unsigned CCP3M:4;
      unsigned DC3B:2;
    };
    struct {
      unsigned CCP3M0:1;
      unsigned CCP3M1:1;
      unsigned CCP3M2:1;
      unsigned CCP3M3:1;
      unsigned DC3B0:1;
      unsigned DC3B1:1;
    };
  };
} CCP3CONBITS;
extern volatile CCP3CONBITS CCP3CONbits __attribute__((__sfr__));

#define CCPR3L CCPR3L
extern volatile unsigned char CCPR3L __attribute__((__sfr__));
#define CCPR3H CCPR3H
extern volatile unsigned char CCPR3H __attribute__((__sfr__));
#define SPI1BUF SPI1BUF
extern volatile unsigned int  SPI1BUF __attribute__((__sfr__));
__extension__ typedef struct tagSPI1BUFBITS {
  union {
    struct {
      unsigned SSPBUF:8;
    };
    struct {
      unsigned SPI1BUF:8;
    };
  };
} SPI1BUFBITS;
extern volatile SPI1BUFBITS SPI1BUFbits __attribute__((__sfr__));

#define SSP1BUF SSP1BUF
extern volatile unsigned int  SSP1BUF __attribute__((__sfr__));
__extension__ typedef struct tagSSP1BUFBITS {
  union {
    struct {
      unsigned SSPBUF:8;
    };
    struct {
      unsigned SPI1BUF:8;
    };
  };
} SSP1BUFBITS;
extern volatile SSP1BUFBITS SSP1BUFbits __attribute__((__sfr__));

#define SSP1CON1 SSP1CON1
extern volatile unsigned int  SSP1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSSP1CON1BITS {
  union {
    struct {
      unsigned SSPM:4;
      unsigned CKP:1;
      unsigned SSPEN:1;
      unsigned SSPOV:1;
      unsigned WCOL:1;
    };
    struct {
      unsigned SSPM0:1;
      unsigned SSPM1:1;
      unsigned SSPM2:1;
      unsigned SSPM3:1;
    };
  };
} SSP1CON1BITS;
extern volatile SSP1CON1BITS SSP1CON1bits __attribute__((__sfr__));

#define SSP1CON2 SSP1CON2
extern volatile unsigned int  SSP1CON2 __attribute__((__sfr__));
__extension__ typedef struct tagSSP1CON2BITS {
  union {
    struct {
      unsigned SEN:1;
      unsigned RSEN:1;
      unsigned PEN:1;
      unsigned RCEN:1;
      unsigned ACKEN:1;
      unsigned ACKDT:1;
      unsigned ACKSTAT:1;
      unsigned GCEN:1;
    };
    struct {
      unsigned :1;
      unsigned ADMSK:5;
    };
    struct {
      unsigned :1;
      unsigned ADMSK1:1;
      unsigned ADMSK2:1;
      unsigned ADMSK3:1;
      unsigned ADMSK4:1;
      unsigned ADMSK5:1;
    };
  };
} SSP1CON2BITS;
extern volatile SSP1CON2BITS SSP1CON2bits __attribute__((__sfr__));

#define SSP1CON3 SSP1CON3
extern volatile unsigned int  SSP1CON3 __attribute__((__sfr__));
typedef struct tagSSP1CON3BITS {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
  unsigned ACKTIM:1;
} SSP1CON3BITS;
extern volatile SSP1CON3BITS SSP1CON3bits __attribute__((__sfr__));

#define SSP1STAT SSP1STAT
extern volatile unsigned int  SSP1STAT __attribute__((__sfr__));
__extension__ typedef struct tagSSP1STATBITS {
  union {
    struct {
      unsigned BF:1;
      unsigned UA:1;
      unsigned R_NOT_W:1;
      unsigned S:1;
      unsigned P:1;
      unsigned D_NOT_A:1;
      unsigned CKE:1;
      unsigned SMP:1;
    };
    struct {
      unsigned :2;
      unsigned R_W:1;
      unsigned :2;
      unsigned D_A:1;
    };
    struct {
      unsigned :2;
      unsigned NOT_W:1;
      unsigned :2;
      unsigned NOT_A:1;
    };
    struct {
      unsigned :2;
      unsigned NOT_WRITE:1;
      unsigned :2;
      unsigned NOT_ADDRESS:1;
    };
    struct {
      unsigned :2;
      unsigned READ_WRITE:1;
      unsigned :2;
      unsigned DATA_ADDRESS:1;
    };
    struct {
      unsigned :2;
      unsigned I2C_READ:1;
      unsigned I2C_START:1;
      unsigned I2C_STOP:1;
      unsigned I2C_DAT:1;
    };
  };
} SSP1STATBITS;
extern volatile SSP1STATBITS SSP1STATbits __attribute__((__sfr__));

#define I2C1ADD I2C1ADD
extern volatile unsigned int  I2C1ADD __attribute__((__sfr__));
__extension__ typedef struct tagI2C1ADDBITS {
  union {
    struct {
      unsigned SSPADD:8;
    };
    struct {
      unsigned I2CADD:8;
    };
  };
} I2C1ADDBITS;
extern volatile I2C1ADDBITS I2C1ADDbits __attribute__((__sfr__));

#define SSP1ADD SSP1ADD
extern volatile unsigned int  SSP1ADD __attribute__((__sfr__));
__extension__ typedef struct tagSSP1ADDBITS {
  union {
    struct {
      unsigned SSPADD:8;
    };
    struct {
      unsigned I2CADD:8;
    };
  };
} SSP1ADDBITS;
extern volatile SSP1ADDBITS SSP1ADDbits __attribute__((__sfr__));

#define I2C1MSK I2C1MSK
extern volatile unsigned int  I2C1MSK __attribute__((__sfr__));
__extension__ typedef struct tagI2C1MSKBITS {
  union {
    struct {
      unsigned MSK0:1;
      unsigned MSK1:1;
      unsigned MSK2:1;
      unsigned MSK3:1;
      unsigned MSK4:1;
      unsigned MSK5:1;
      unsigned MSK6:1;
      unsigned MSK7:1;
    };
    struct {
      unsigned AMSK:8;
    };
  };
} I2C1MSKBITS;
extern volatile I2C1MSKBITS I2C1MSKbits __attribute__((__sfr__));

#define SSP1MSK SSP1MSK
extern volatile unsigned int  SSP1MSK __attribute__((__sfr__));
__extension__ typedef struct tagSSP1MSKBITS {
  union {
    struct {
      unsigned MSK0:1;
      unsigned MSK1:1;
      unsigned MSK2:1;
      unsigned MSK3:1;
      unsigned MSK4:1;
      unsigned MSK5:1;
      unsigned MSK6:1;
      unsigned MSK7:1;
    };
    struct {
      unsigned AMSK:8;
    };
  };
} SSP1MSKBITS;
extern volatile SSP1MSKBITS SSP1MSKbits __attribute__((__sfr__));

#define SPI2BUF SPI2BUF
extern volatile unsigned int  SPI2BUF __attribute__((__sfr__));
__extension__ typedef struct tagSPI2BUFBITS {
  union {
    struct {
      unsigned SSPBUF:8;
    };
    struct {
      unsigned SPI2BUF:8;
    };
  };
} SPI2BUFBITS;
extern volatile SPI2BUFBITS SPI2BUFbits __attribute__((__sfr__));

#define SSP2BUF SSP2BUF
extern volatile unsigned int  SSP2BUF __attribute__((__sfr__));
__extension__ typedef struct tagSSP2BUFBITS {
  union {
    struct {
      unsigned SSPBUF:8;
    };
    struct {
      unsigned SPI2BUF:8;
    };
  };
} SSP2BUFBITS;
extern volatile SSP2BUFBITS SSP2BUFbits __attribute__((__sfr__));

#define SSP2CON1 SSP2CON1
extern volatile unsigned int  SSP2CON1 __attribute__((__sfr__));
__extension__ typedef struct tagSSP2CON1BITS {
  union {
    struct {
      unsigned SSPM:4;
      unsigned CKP:1;
      unsigned SSPEN:1;
      unsigned SSPOV:1;
      unsigned WCOL:1;
    };
    struct {
      unsigned SSPM0:1;
      unsigned SSPM1:1;
      unsigned SSPM2:1;
      unsigned SSPM3:1;
    };
  };
} SSP2CON1BITS;
extern volatile SSP2CON1BITS SSP2CON1bits __attribute__((__sfr__));

#define SSP2CON2 SSP2CON2
extern volatile unsigned int  SSP2CON2 __attribute__((__sfr__));
__extension__ typedef struct tagSSP2CON2BITS {
  union {
    struct {
      unsigned SEN:1;
      unsigned RSEN:1;
      unsigned PEN:1;
      unsigned RCEN:1;
      unsigned ACKEN:1;
      unsigned ACKDT:1;
      unsigned ACKSTAT:1;
      unsigned GCEN:1;
    };
    struct {
      unsigned :1;
      unsigned ADMSK:5;
    };
    struct {
      unsigned :1;
      unsigned ADMSK1:1;
      unsigned ADMSK2:1;
      unsigned ADMSK3:1;
      unsigned ADMSK4:1;
      unsigned ADMSK5:1;
    };
  };
} SSP2CON2BITS;
extern volatile SSP2CON2BITS SSP2CON2bits __attribute__((__sfr__));

#define SSP2CON3 SSP2CON3
extern volatile unsigned int  SSP2CON3 __attribute__((__sfr__));
typedef struct tagSSP2CON3BITS {
  unsigned DHEN:1;
  unsigned AHEN:1;
  unsigned SBCDE:1;
  unsigned SDAHT:1;
  unsigned BOEN:1;
  unsigned SCIE:1;
  unsigned PCIE:1;
  unsigned ACKTIM:1;
} SSP2CON3BITS;
extern volatile SSP2CON3BITS SSP2CON3bits __attribute__((__sfr__));

#define SSP2STAT SSP2STAT
extern volatile unsigned int  SSP2STAT __attribute__((__sfr__));
__extension__ typedef struct tagSSP2STATBITS {
  union {
    struct {
      unsigned BF:1;
      unsigned UA:1;
      unsigned R_NOT_W:1;
      unsigned S:1;
      unsigned P:1;
      unsigned D_NOT_A:1;
      unsigned CKE:1;
      unsigned SMP:1;
    };
    struct {
      unsigned :2;
      unsigned R_W:1;
      unsigned :2;
      unsigned D_A:1;
    };
    struct {
      unsigned :2;
      unsigned NOT_W:1;
      unsigned :2;
      unsigned NOT_A:1;
    };
    struct {
      unsigned :2;
      unsigned NOT_WRITE:1;
      unsigned :2;
      unsigned NOT_ADDRESS:1;
    };
    struct {
      unsigned :2;
      unsigned READ_WRITE:1;
      unsigned :2;
      unsigned DATA_ADDRESS:1;
    };
    struct {
      unsigned :2;
      unsigned I2C_READ:1;
      unsigned I2C_START:1;
      unsigned I2C_STOP:1;
      unsigned I2C_DAT:1;
    };
  };
} SSP2STATBITS;
extern volatile SSP2STATBITS SSP2STATbits __attribute__((__sfr__));

#define I2C2ADD I2C2ADD
extern volatile unsigned int  I2C2ADD __attribute__((__sfr__));
__extension__ typedef struct tagI2C2ADDBITS {
  union {
    struct {
      unsigned SSPADD:8;
    };
    struct {
      unsigned I2CADD:8;
    };
  };
} I2C2ADDBITS;
extern volatile I2C2ADDBITS I2C2ADDbits __attribute__((__sfr__));

#define SSP2ADD SSP2ADD
extern volatile unsigned int  SSP2ADD __attribute__((__sfr__));
__extension__ typedef struct tagSSP2ADDBITS {
  union {
    struct {
      unsigned SSPADD:8;
    };
    struct {
      unsigned I2CADD:8;
    };
  };
} SSP2ADDBITS;
extern volatile SSP2ADDBITS SSP2ADDbits __attribute__((__sfr__));

#define I2C2MSK I2C2MSK
extern volatile unsigned int  I2C2MSK __attribute__((__sfr__));
__extension__ typedef struct tagI2C2MSKBITS {
  union {
    struct {
      unsigned MSK0:1;
      unsigned MSK1:1;
      unsigned MSK2:1;
      unsigned MSK3:1;
      unsigned MSK4:1;
      unsigned MSK5:1;
      unsigned MSK6:1;
      unsigned MSK7:1;
    };
    struct {
      unsigned AMSK:8;
    };
  };
} I2C2MSKBITS;
extern volatile I2C2MSKBITS I2C2MSKbits __attribute__((__sfr__));

#define SSP2MSK SSP2MSK
extern volatile unsigned int  SSP2MSK __attribute__((__sfr__));
__extension__ typedef struct tagSSP2MSKBITS {
  union {
    struct {
      unsigned MSK0:1;
      unsigned MSK1:1;
      unsigned MSK2:1;
      unsigned MSK3:1;
      unsigned MSK4:1;
      unsigned MSK5:1;
      unsigned MSK6:1;
      unsigned MSK7:1;
    };
    struct {
      unsigned AMSK:8;
    };
  };
} SSP2MSKBITS;
extern volatile SSP2MSKBITS SSP2MSKbits __attribute__((__sfr__));


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
      unsigned RXINV:1;
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
      unsigned RXINV:1;
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
#define TRISA TRISA
extern volatile unsigned int  TRISA __attribute__((__sfr__));
typedef struct tagTRISABITS {
  unsigned TRISA0:1;
  unsigned TRISA1:1;
  unsigned TRISA2:1;
  unsigned TRISA3:1;
  unsigned TRISA4:1;
  unsigned :1;
  unsigned TRISA6:1;
  unsigned TRISA7:1;
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
  unsigned RA5:1;
  unsigned RA6:1;
  unsigned RA7:1;
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
  unsigned :1;
  unsigned LATA6:1;
  unsigned LATA7:1;
} LATABITS;
extern volatile LATABITS LATAbits __attribute__((__sfr__));

#define ODCA ODCA
extern volatile unsigned int  ODCA __attribute__((__sfr__));
typedef struct tagODCABITS {
  unsigned ODA0:1;
  unsigned ODA1:1;
  unsigned ODA2:1;
  unsigned ODA3:1;
  unsigned ODA4:1;
  unsigned :1;
  unsigned ODA6:1;
  unsigned ODA7:1;
} ODCABITS;
extern volatile ODCABITS ODCAbits __attribute__((__sfr__));

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
  unsigned ODB0:1;
  unsigned ODB1:1;
  unsigned ODB2:1;
  unsigned ODB3:1;
  unsigned ODB4:1;
  unsigned ODB5:1;
  unsigned ODB6:1;
  unsigned ODB7:1;
  unsigned ODB8:1;
  unsigned ODB9:1;
  unsigned ODB10:1;
  unsigned ODB11:1;
  unsigned ODB12:1;
  unsigned ODB13:1;
  unsigned ODB14:1;
  unsigned ODB15:1;
} ODCBBITS;
extern volatile ODCBBITS ODCBbits __attribute__((__sfr__));

#define PADCFG1 PADCFG1
extern volatile unsigned int  PADCFG1 __attribute__((__sfr__));
__extension__ typedef struct tagPADCFG1BITS {
  union {
    struct {
      unsigned :8;
      unsigned SCK1DIS:1;
      unsigned SDO1DIS:1;
      unsigned SCK2DIS:1;
      unsigned SDO2DIS:1;
    };
    struct {
      unsigned :4;
      unsigned SMBDEL0:1;
      unsigned SMBDEL1:1;
    };
  };
} PADCFG1BITS;
extern volatile PADCFG1BITS PADCFG1bits __attribute__((__sfr__));

#define ADC1BUF0 ADC1BUF0
extern volatile unsigned int  ADC1BUF0 __attribute__((__sfr__));
#define ADC1BUF1 ADC1BUF1
extern volatile unsigned int  ADC1BUF1 __attribute__((__sfr__));
#define AD1CON1 AD1CON1
extern volatile unsigned int  AD1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON1BITS {
  union {
    struct {
      unsigned DONE:1;
      unsigned SAMP:1;
      unsigned ASAM:1;
      unsigned :2;
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
      unsigned SMPI:4;
      unsigned :1;
      unsigned BUFS:1;
      unsigned :2;
      unsigned CSCNA:1;
      unsigned :1;
      unsigned OFFCAL:1;
      unsigned VCFG:3;
    };
    struct {
      unsigned :2;
      unsigned SMPI0:1;
      unsigned SMPI1:1;
      unsigned SMPI2:1;
      unsigned SMPI3:1;
      unsigned :7;
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
      unsigned PUMPEN:1;
      unsigned EXTSAM:1;
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

#define AD1CHS AD1CHS
extern volatile unsigned int  AD1CHS __attribute__((__sfr__));
__extension__ typedef struct tagAD1CHSBITS {
  union {
    struct {
      unsigned CH0SA:4;
      unsigned :3;
      unsigned CH0NA:1;
      unsigned CH0SB:4;
      unsigned :3;
      unsigned CH0NB:1;
    };
    struct {
      unsigned CH0SA0:1;
      unsigned CH0SA1:1;
      unsigned CH0SA2:1;
      unsigned CH0SA3:1;
      unsigned :4;
      unsigned CH0SB0:1;
      unsigned CH0SB1:1;
      unsigned CH0SB2:1;
      unsigned CH0SB3:1;
    };
  };
} AD1CHSBITS;
extern volatile AD1CHSBITS AD1CHSbits __attribute__((__sfr__));

#define AD1CSSL AD1CSSL
extern volatile unsigned int  AD1CSSL __attribute__((__sfr__));
typedef struct tagAD1CSSLBITS {
  unsigned CSSL0:1;
  unsigned CSSL1:1;
  unsigned CSSL2:1;
  unsigned CSSL3:1;
  unsigned CSSL4:1;
  unsigned :1;
  unsigned CSSL6:1;
  unsigned CSSL7:1;
  unsigned CSSL8:1;
  unsigned CSSL9:1;
  unsigned CSSL10:1;
  unsigned CSSL11:1;
  unsigned CSSL12:1;
  unsigned CSSL13:1;
  unsigned CSSL14:1;
  unsigned CSSL15:1;
} AD1CSSLBITS;
extern volatile AD1CSSLBITS AD1CSSLbits __attribute__((__sfr__));

#define ANCFG ANCFG
extern volatile unsigned int  ANCFG __attribute__((__sfr__));
typedef struct tagANCFGBITS {
  unsigned VBGEN:1;
} ANCFGBITS;
extern volatile ANCFGBITS ANCFGbits __attribute__((__sfr__));

#define ANSA ANSA
extern volatile unsigned int  ANSA __attribute__((__sfr__));
typedef struct tagANSABITS {
  unsigned ANSA0:1;
  unsigned ANSA1:1;
  unsigned ANSA2:1;
  unsigned ANSA3:1;
} ANSABITS;
extern volatile ANSABITS ANSAbits __attribute__((__sfr__));

#define ANSELA ANSELA
extern volatile unsigned int  ANSELA __attribute__((__sfr__));
typedef struct tagANSELABITS {
  unsigned ANSA0:1;
  unsigned ANSA1:1;
  unsigned ANSA2:1;
  unsigned ANSA3:1;
} ANSELABITS;
extern volatile ANSELABITS ANSELAbits __attribute__((__sfr__));

#define ANSB ANSB
extern volatile unsigned int  ANSB __attribute__((__sfr__));
typedef struct tagANSBBITS {
  unsigned ANSB0:1;
  unsigned ANSB1:1;
  unsigned ANSB2:1;
  unsigned ANSB3:1;
  unsigned ANSB4:1;
  unsigned :7;
  unsigned ANSB12:1;
  unsigned ANSB13:1;
  unsigned ANSB14:1;
  unsigned ANSB15:1;
} ANSBBITS;
extern volatile ANSBBITS ANSBbits __attribute__((__sfr__));

#define ANSELB ANSELB
extern volatile unsigned int  ANSELB __attribute__((__sfr__));
typedef struct tagANSELBBITS {
  unsigned ANSB0:1;
  unsigned ANSB1:1;
  unsigned ANSB2:1;
  unsigned ANSB3:1;
  unsigned ANSB4:1;
  unsigned :7;
  unsigned ANSB12:1;
  unsigned ANSB13:1;
  unsigned ANSB14:1;
  unsigned ANSB15:1;
} ANSELBBITS;
extern volatile ANSELBBITS ANSELBbits __attribute__((__sfr__));

#define CMSTAT CMSTAT
extern volatile unsigned int  CMSTAT __attribute__((__sfr__));
typedef struct tagCMSTATBITS {
  unsigned C1OUT:1;
  unsigned C2OUT:1;
  unsigned :6;
  unsigned C1EVT:1;
  unsigned C2EVT:1;
  unsigned :5;
  unsigned CMIDL:1;
} CMSTATBITS;
extern volatile CMSTATBITS CMSTATbits __attribute__((__sfr__));

#define CVRCON CVRCON
extern volatile unsigned int  CVRCON __attribute__((__sfr__));
__extension__ typedef struct tagCVRCONBITS {
  union {
    struct {
      unsigned CVR:5;
      unsigned CVRSS:1;
      unsigned CVROE:1;
      unsigned CVREN:1;
    };
    struct {
      unsigned CVR0:1;
      unsigned CVR1:1;
      unsigned CVR2:1;
      unsigned CVR3:1;
      unsigned CVR4:1;
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
      unsigned :2;
      unsigned CLPWR:1;
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
    };
  };
} CM1CONBITS;
extern volatile CM1CONBITS CM1CONbits __attribute__((__sfr__));

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
      unsigned :2;
      unsigned CLPWR:1;
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
    };
  };
} CM2CONBITS;
extern volatile CM2CONBITS CM2CONbits __attribute__((__sfr__));

#define RCON RCON
extern volatile unsigned int  RCON __attribute__((__sfr__));
__extension__ typedef struct tagRCONBITS {
  union {
    struct {
      unsigned POR:1;
      unsigned BOR:1;
      unsigned IDLE:1;
      unsigned SLEEP:1;
      unsigned WDTO:1;
      unsigned SWDTEN:1;
      unsigned SWR:1;
      unsigned EXTR:1;
      unsigned PMSLP:1;
      unsigned CM:1;
      unsigned :3;
      unsigned SBOREN:1;
      unsigned IOPUWR:1;
      unsigned TRAPR:1;
    };
    struct {
      unsigned :8;
      unsigned VREGS:1;
    };
  };
} RCONBITS;
extern volatile RCONBITS RCONbits __attribute__((__sfr__));

#define OSCCON OSCCON
extern volatile unsigned int  OSCCON __attribute__((__sfr__));
__extension__ typedef struct tagOSCCONBITS {
  union {
    struct {
      unsigned OSWEN:1;
      unsigned SOSCEN:1;
      unsigned SOSCDRV:1;
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
      unsigned :1;
      unsigned LPOSCEN:1;
      unsigned :6;
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
      unsigned RCDIV:3;
      unsigned DOZEN:1;
      unsigned DOZE:3;
      unsigned ROI:1;
    };
    struct {
      unsigned :8;
      unsigned RCDIV0:1;
      unsigned RCDIV1:1;
      unsigned RCDIV2:1;
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
      unsigned ROEN:1;
    };
    struct {
      unsigned :8;
      unsigned RODIV0:1;
      unsigned RODIV1:1;
      unsigned RODIV2:1;
      unsigned RODIV3:1;
      unsigned :3;
      unsigned ROON:1;
    };
  };
} REFOCONBITS;
extern volatile REFOCONBITS REFOCONbits __attribute__((__sfr__));

#define HLVDCON HLVDCON
extern volatile unsigned int  HLVDCON __attribute__((__sfr__));
__extension__ typedef struct tagHLVDCONBITS {
  union {
    struct {
      unsigned HLVDL:4;
      unsigned :1;
      unsigned IRVST:1;
      unsigned BGVST:1;
      unsigned VDIR:1;
      unsigned :5;
      unsigned HLSIDL:1;
      unsigned :1;
      unsigned HLVDEN:1;
    };
    struct {
      unsigned HLVDL0:1;
      unsigned HLVDL1:1;
      unsigned HLVDL2:1;
      unsigned HLVDL3:1;
    };
  };
} HLVDCONBITS;
extern volatile HLVDCONBITS HLVDCONbits __attribute__((__sfr__));

#define NVMCON NVMCON
extern volatile unsigned int  NVMCON __attribute__((__sfr__));
__extension__ typedef struct tagNVMCONBITS {
  union {
    struct {
      unsigned NVMOP:6;
      unsigned ERASE:1;
      unsigned :5;
      unsigned PGMONLY:1;
      unsigned WRERR:1;
      unsigned WREN:1;
      unsigned WR:1;
    };
    struct {
      unsigned NVMOP0:1;
      unsigned NVMOP1:1;
      unsigned NVMOP2:1;
      unsigned NVMOP3:1;
      unsigned NVMOP4:1;
      unsigned NVMOP5:1;
    };
  };
} NVMCONBITS;
extern volatile NVMCONBITS NVMCONbits __attribute__((__sfr__));

#define NVMKEY NVMKEY
extern volatile unsigned int  NVMKEY __attribute__((__sfr__));
__extension__ typedef struct tagNVMKEYBITS {
  union {
    struct {
      unsigned NVMKEY:8;
    };
    struct {
      unsigned NVMKEY0:1;
      unsigned NVMKEY1:1;
      unsigned NVMKEY2:1;
      unsigned NVMKEY3:1;
      unsigned NVMKEY4:1;
      unsigned NVMKEY5:1;
      unsigned NVMKEY6:1;
      unsigned NVMKEY7:1;
    };
  };
} NVMKEYBITS;
extern volatile NVMKEYBITS NVMKEYbits __attribute__((__sfr__));

#define ULPWCON ULPWCON
extern volatile unsigned int  ULPWCON __attribute__((__sfr__));
__extension__ typedef struct tagULPWCONBITS {
  union {
    struct {
      unsigned :8;
      unsigned ULPSINK:1;
      unsigned :4;
      unsigned ULPSIDL:1;
      unsigned :1;
      unsigned ULPEN:1;
    };
    struct {
      unsigned :8;
      unsigned CRNTEN:1;
      unsigned :4;
      unsigned PSIDL:1;
      unsigned :1;
      unsigned WUEN:1;
    };
  };
} ULPWCONBITS;
extern volatile ULPWCONBITS ULPWCONbits __attribute__((__sfr__));

#define PMD1 PMD1
extern volatile unsigned int  PMD1 __attribute__((__sfr__));
__extension__ typedef struct tagPMD1BITS {
  union {
    struct {
      unsigned ADC1MD:1;
      unsigned :4;
      unsigned U1MD:1;
      unsigned U2MD:1;
      unsigned SSP1MD:1;
      unsigned :3;
      unsigned T1MD:1;
      unsigned T2MD:1;
      unsigned T3MD:1;
      unsigned T4MD:1;
    };
    struct {
      unsigned ADCMD:1;
      unsigned :6;
      unsigned I2C1MD:1;
    };
    struct {
      unsigned :7;
      unsigned SPI1MD:1;
    };
  };
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

#define PMDIS1 PMDIS1
extern volatile unsigned int  PMDIS1 __attribute__((__sfr__));
__extension__ typedef struct tagPMDIS1BITS {
  union {
    struct {
      unsigned ADC1MD:1;
      unsigned :4;
      unsigned U1MD:1;
      unsigned U2MD:1;
      unsigned SSP1MD:1;
      unsigned :3;
      unsigned T1MD:1;
      unsigned T2MD:1;
      unsigned T3MD:1;
      unsigned T4MD:1;
    };
    struct {
      unsigned ADCMD:1;
      unsigned :6;
      unsigned I2C1MD:1;
    };
    struct {
      unsigned :7;
      unsigned SPI1MD:1;
    };
  };
} PMDIS1BITS;
extern volatile PMDIS1BITS PMDIS1bits __attribute__((__sfr__));

#define PMD2 PMD2
extern volatile unsigned int  PMD2 __attribute__((__sfr__));
typedef struct tagPMD2BITS {
  unsigned CCP1MD:1;
  unsigned CCP2MD:1;
  unsigned CCP3MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMDIS2 PMDIS2
extern volatile unsigned int  PMDIS2 __attribute__((__sfr__));
typedef struct tagPMDIS2BITS {
  unsigned CCP1MD:1;
  unsigned CCP2MD:1;
  unsigned CCP3MD:1;
} PMDIS2BITS;
extern volatile PMDIS2BITS PMDIS2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile unsigned int  PMD3 __attribute__((__sfr__));
__extension__ typedef struct tagPMD3BITS {
  union {
    struct {
      unsigned :1;
      unsigned SSP2MD:1;
      unsigned :8;
      unsigned CMPMD:1;
    };
    struct {
      unsigned :1;
      unsigned I2C2MD:1;
    };
    struct {
      unsigned :1;
      unsigned SPI2MD:1;
    };
  };
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMDIS3 PMDIS3
extern volatile unsigned int  PMDIS3 __attribute__((__sfr__));
__extension__ typedef struct tagPMDIS3BITS {
  union {
    struct {
      unsigned :1;
      unsigned SSP2MD:1;
      unsigned :8;
      unsigned CMPMD:1;
    };
    struct {
      unsigned :1;
      unsigned I2C2MD:1;
    };
    struct {
      unsigned :1;
      unsigned SPI2MD:1;
    };
  };
} PMDIS3BITS;
extern volatile PMDIS3BITS PMDIS3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile unsigned int  PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  unsigned :1;
  unsigned HLVDMD:1;
  unsigned :1;
  unsigned REFOMD:1;
  unsigned EEMD:1;
  unsigned :2;
  unsigned ULPWUMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

#define PMDIS4 PMDIS4
extern volatile unsigned int  PMDIS4 __attribute__((__sfr__));
typedef struct tagPMDIS4BITS {
  unsigned :1;
  unsigned HLVDMD:1;
  unsigned :1;
  unsigned REFOMD:1;
  unsigned EEMD:1;
  unsigned :2;
  unsigned ULPWUMD:1;
} PMDIS4BITS;
extern volatile PMDIS4BITS PMDIS4bits __attribute__((__sfr__));



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

/* CNPD1 */
#define _CN0PDE CNPD1bits.CN0PDE
#define _CN1PDE CNPD1bits.CN1PDE
#define _CN2PDE CNPD1bits.CN2PDE
#define _CN3PDE CNPD1bits.CN3PDE
#define _CN4PDE CNPD1bits.CN4PDE
#define _CN5PDE CNPD1bits.CN5PDE
#define _CN6PDE CNPD1bits.CN6PDE
#define _CN7PDE CNPD1bits.CN7PDE
#define _CN8PDE CNPD1bits.CN8PDE
#define _CN9PDE CNPD1bits.CN9PDE
#define _CN11PDE CNPD1bits.CN11PDE
#define _CN12PDE CNPD1bits.CN12PDE
#define _CN13PDE CNPD1bits.CN13PDE
#define _CN14PDE CNPD1bits.CN14PDE
#define _CN15PDE CNPD1bits.CN15PDE

/* CNPD2 */
#define _CN16PDE CNPD2bits.CN16PDE
#define _CN21PDE CNPD2bits.CN21PDE
#define _CN22PDE CNPD2bits.CN22PDE
#define _CN23PDE CNPD2bits.CN23PDE
#define _CN24PDE CNPD2bits.CN24PDE
#define _CN27PDE CNPD2bits.CN27PDE
#define _CN29PDE CNPD2bits.CN29PDE
#define _CN30PDE CNPD2bits.CN30PDE

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
#define _CN11IE CNEN1bits.CN11IE
#define _CN12IE CNEN1bits.CN12IE
#define _CN13IE CNEN1bits.CN13IE
#define _CN14IE CNEN1bits.CN14IE
#define _CN15IE CNEN1bits.CN15IE

/* CNEN2 */
#define _CN16IE CNEN2bits.CN16IE
#define _CN21IE CNEN2bits.CN21IE
#define _CN22IE CNEN2bits.CN22IE
#define _CN23IE CNEN2bits.CN23IE
#define _CN24IE CNEN2bits.CN24IE
#define _CN27IE CNEN2bits.CN27IE
#define _CN29IE CNEN2bits.CN29IE
#define _CN30IE CNEN2bits.CN30IE

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
#define _CN11PUE CNPU1bits.CN11PUE
#define _CN12PUE CNPU1bits.CN12PUE
#define _CN13PUE CNPU1bits.CN13PUE
#define _CN14PUE CNPU1bits.CN14PUE
#define _CN15PUE CNPU1bits.CN15PUE

/* CNPU2 */
#define _CN16PUE CNPU2bits.CN16PUE
#define _CN21PUE CNPU2bits.CN21PUE
#define _CN22PUE CNPU2bits.CN22PUE
#define _CN23PUE CNPU2bits.CN23PUE
#define _CN24PUE CNPU2bits.CN24PUE
#define _CN27PUE CNPU2bits.CN27PUE
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
#define _CCP1IF IFS0bits.CCP1IF
#define _T1IF IFS0bits.T1IF
#define _CCP2IF IFS0bits.CCP2IF
#define _T2IF IFS0bits.T2IF
#define _T3IF IFS0bits.T3IF
#define _U1RXIF IFS0bits.U1RXIF
#define _U1TXIF IFS0bits.U1TXIF
#define _AD1IF IFS0bits.AD1IF
#define _NVMIF IFS0bits.NVMIF

/* IFS1 */
#define _SSP1IF IFS1bits.SSP1IF
#define _BCL1IF IFS1bits.BCL1IF
#define _CMIF IFS1bits.CMIF
#define _CNIF IFS1bits.CNIF
#define _INT1IF IFS1bits.INT1IF
#define _CCP3IF IFS1bits.CCP3IF
#define _T4IF IFS1bits.T4IF
#define _INT2IF IFS1bits.INT2IF
#define _U2RXIF IFS1bits.U2RXIF
#define _U2TXIF IFS1bits.U2TXIF

/* IFS2 */
#define _T3GIF IFS2bits.T3GIF

/* IFS3 */
#define _SSP2IF IFS3bits.SSP2IF
#define _BCL2IF IFS3bits.BCL2IF

/* IFS4 */
#define _U1ERIF IFS4bits.U1ERIF
#define _U2ERIF IFS4bits.U2ERIF
#define _HLVDIF IFS4bits.HLVDIF

/* IFS5 */
#define _ULPWUIF IFS5bits.ULPWUIF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _CCP1IE IEC0bits.CCP1IE
#define _T1IE IEC0bits.T1IE
#define _CCP2IE IEC0bits.CCP2IE
#define _T2IE IEC0bits.T2IE
#define _T3IE IEC0bits.T3IE
#define _U1RXIE IEC0bits.U1RXIE
#define _U1TXIE IEC0bits.U1TXIE
#define _AD1IE IEC0bits.AD1IE
#define _NVMIE IEC0bits.NVMIE

/* IEC1 */
#define _SSP1IE IEC1bits.SSP1IE
#define _BCL1IE IEC1bits.BCL1IE
#define _CMIE IEC1bits.CMIE
#define _CNIE IEC1bits.CNIE
#define _INT1IE IEC1bits.INT1IE
#define _CCP3IE IEC1bits.CCP3IE
#define _T4IE IEC1bits.T4IE
#define _INT2IE IEC1bits.INT2IE
#define _U2RXIE IEC1bits.U2RXIE
#define _U2TXIE IEC1bits.U2TXIE

/* IEC2 */
#define _T3GIE IEC2bits.T3GIE

/* IEC3 */
#define _SSP2IE IEC3bits.SSP2IE
#define _BCL2IE IEC3bits.BCL2IE

/* IEC4 */
#define _U1ERIE IEC4bits.U1ERIE
#define _U2ERIE IEC4bits.U2ERIE
#define _HLVDIE IEC4bits.HLVDIE

/* IEC5 */
#define _ULPWUIE IEC5bits.ULPWUIE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _CCP1IP IPC0bits.CCP1IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _CCP1IP0 IPC0bits.CCP1IP0
#define _CCP1IP1 IPC0bits.CCP1IP1
#define _CCP1IP2 IPC0bits.CCP1IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _CCP2IP IPC1bits.CCP2IP
#define _T2IP IPC1bits.T2IP
#define _CCP2IP0 IPC1bits.CCP2IP0
#define _CCP2IP1 IPC1bits.CCP2IP1
#define _CCP2IP2 IPC1bits.CCP2IP2
#define _T2IP0 IPC1bits.T2IP0
#define _T2IP1 IPC1bits.T2IP1
#define _T2IP2 IPC1bits.T2IP2

/* IPC2 */
#define _T3IP IPC2bits.T3IP
#define _U1RXIP IPC2bits.U1RXIP
#define _T3IP0 IPC2bits.T3IP0
#define _T3IP1 IPC2bits.T3IP1
#define _T3IP2 IPC2bits.T3IP2
#define _U1RXIP0 IPC2bits.U1RXIP0
#define _U1RXIP1 IPC2bits.U1RXIP1
#define _U1RXIP2 IPC2bits.U1RXIP2

/* IPC3 */
#define _U1TXIP IPC3bits.U1TXIP
#define _AD1IP IPC3bits.AD1IP
#define _NVMIP IPC3bits.NVMIP
#define _U1TXIP0 IPC3bits.U1TXIP0
#define _U1TXIP1 IPC3bits.U1TXIP1
#define _U1TXIP2 IPC3bits.U1TXIP2
#define _AD1IP0 IPC3bits.AD1IP0
#define _AD1IP1 IPC3bits.AD1IP1
#define _AD1IP2 IPC3bits.AD1IP2
#define _NVMIP0 IPC3bits.NVMIP0
#define _NVMIP1 IPC3bits.NVMIP1
#define _NVMIP2 IPC3bits.NVMIP2

/* IPC4 */
#define _SSP1IP IPC4bits.SSP1IP
#define _BCL1IP IPC4bits.BCL1IP
#define _CMIP IPC4bits.CMIP
#define _CNIP IPC4bits.CNIP
#define _SSP1IP0 IPC4bits.SSP1IP0
#define _SSP1IP1 IPC4bits.SSP1IP1
#define _SSP1IP2 IPC4bits.SSP1IP2
#define _BCL1IP0 IPC4bits.BCL1IP0
#define _BCL1IP1 IPC4bits.BCL1IP1
#define _BCL1IP2 IPC4bits.BCL1IP2
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
#define _CCP3IP IPC6bits.CCP3IP
#define _T4IP IPC6bits.T4IP
#define _CCP3IP0 IPC6bits.CCP3IP0
#define _CCP3IP1 IPC6bits.CCP3IP1
#define _CCP3IP2 IPC6bits.CCP3IP2
#define _T4IP0 IPC6bits.T4IP0
#define _T4IP1 IPC6bits.T4IP1
#define _T4IP2 IPC6bits.T4IP2

/* IPC7 */
#define _INT2IP IPC7bits.INT2IP
#define _U2RXIP IPC7bits.U2RXIP
#define _U2TXIP IPC7bits.U2TXIP
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2
#define _U2RXIP0 IPC7bits.U2RXIP0
#define _U2RXIP1 IPC7bits.U2RXIP1
#define _U2RXIP2 IPC7bits.U2RXIP2
#define _U2TXIP0 IPC7bits.U2TXIP0
#define _U2TXIP1 IPC7bits.U2TXIP1
#define _U2TXIP2 IPC7bits.U2TXIP2

/* IPC9 */
#define _T3GIP IPC9bits.T3GIP
#define _T3GIP0 IPC9bits.T3GIP0
#define _T3GIP1 IPC9bits.T3GIP1
#define _T3GIP2 IPC9bits.T3GIP2

/* IPC12 */
#define _SSP2IP IPC12bits.SSP2IP
#define _BCL2IP IPC12bits.BCL2IP
#define _SSP2IP0 IPC12bits.SSP2IP0
#define _SSP2IP1 IPC12bits.SSP2IP1
#define _SSP2IP2 IPC12bits.SSP2IP2
#define _BCL2IP0 IPC12bits.BCL2IP0
#define _BCL2IP1 IPC12bits.BCL2IP1
#define _BCL2IP2 IPC12bits.BCL2IP2

/* IPC16 */
#define _U1ERIP IPC16bits.U1ERIP
#define _U2ERIP IPC16bits.U2ERIP
#define _U1ERIP0 IPC16bits.U1ERIP0
#define _U1ERIP1 IPC16bits.U1ERIP1
#define _U1ERIP2 IPC16bits.U1ERIP2
#define _U2ERIP0 IPC16bits.U2ERIP0
#define _U2ERIP1 IPC16bits.U2ERIP1
#define _U2ERIP2 IPC16bits.U2ERIP2

/* IPC18 */
#define _HLVDIP IPC18bits.HLVDIP
#define _HLVDIP0 IPC18bits.HLVDIP0
#define _HLVDIP1 IPC18bits.HLVDIP1
#define _HLVDIP2 IPC18bits.HLVDIP2

/* IPC20 */
#define _ULPWUIP IPC20bits.ULPWUIP
#define _ULPWUIP0 IPC20bits.ULPWUIP0
#define _ULPWUIP1 IPC20bits.ULPWUIP1
#define _ULPWUIP2 IPC20bits.ULPWUIP2

/* INTTREG */
#define _VECNUM INTTREGbits.VECNUM
#define _ILR INTTREGbits.ILR
#define _VHOLD INTTREGbits.VHOLD
#define _CPUIRQ INTTREGbits.CPUIRQ
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
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */
#define _TECS T1CONbits.TECS
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1
#define _TECS0 T1CONbits.TECS0
#define _TECS1 T1CONbits.TECS1
#define _T1ECS T1CONbits.T1ECS
#define _T1ECS0 T1CONbits.T1ECS0
#define _T1ECS1 T1CONbits.T1ECS1

/* T2CON */
#define _T2CKPS T2CONbits.T2CKPS
#define _TMR2ON T2CONbits.TMR2ON
#define _T2OUTPS T2CONbits.T2OUTPS
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TOUTPS cannot be defined because it is used by more than one SFR */
#define _T2CKPS0 T2CONbits.T2CKPS0
#define _T2CKPS1 T2CONbits.T2CKPS1
#define _T2OUTPS0 T2CONbits.T2OUTPS0
#define _T2OUTPS1 T2CONbits.T2OUTPS1
#define _T2OUTPS2 T2CONbits.T2OUTPS2
#define _T2OUTPS3 T2CONbits.T2OUTPS3

/* T3GCON */
#define _T3GSS T3GCONbits.T3GSS
#define _T3GVAL T3GCONbits.T3GVAL
#define _T3GGO T3GCONbits.T3GGO
#define _T3GSPM T3GCONbits.T3GSPM
#define _T3GTM T3GCONbits.T3GTM
#define _T3GPOL T3GCONbits.T3GPOL
#define _TMR3GE T3GCONbits.TMR3GE
#define _T3GSS0 T3GCONbits.T3GSS0
#define _T3GSS1 T3GCONbits.T3GSS1
#define _NOT_T3DONE T3GCONbits.NOT_T3DONE
#define _TGSS T3GCONbits.TGSS
#define _TGVAL T3GCONbits.TGVAL
#define _TGGO T3GCONbits.TGGO
#define _TGSE T3GCONbits.TGSE
#define _TGTM T3GCONbits.TGTM
#define _TGPOL T3GCONbits.TGPOL
/* Bitname _TGATE cannot be defined because it is used by more than one SFR */

/* T3CON */
#define _TMR3ON T3CONbits.TMR3ON
#define _NOT_T3SYNC T3CONbits.NOT_T3SYNC
#define _T3OSCEN T3CONbits.T3OSCEN
#define _T3CKPS T3CONbits.T3CKPS
#define _TMR3CS T3CONbits.TMR3CS
/* Bitname _TON cannot be defined because it is used by more than one SFR */
#define _NOT_TSYNC T3CONbits.NOT_TSYNC
/* Bitname _SOSCEN cannot be defined because it is used by more than one SFR */
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TCS cannot be defined because it is used by more than one SFR */
#define _T3CKPS0 T3CONbits.T3CKPS0
#define _T3CKPS1 T3CONbits.T3CKPS1
#define _TMR3CS0 T3CONbits.TMR3CS0
#define _TMR3CS1 T3CONbits.TMR3CS1

/* T4CON */
#define _T4CKPS T4CONbits.T4CKPS
#define _TMR4ON T4CONbits.TMR4ON
#define _T4OUTPS T4CONbits.T4OUTPS
/* Bitname _TCKPS cannot be defined because it is used by more than one SFR */
/* Bitname _TON cannot be defined because it is used by more than one SFR */
/* Bitname _TOUTPS cannot be defined because it is used by more than one SFR */
#define _T4CKPS0 T4CONbits.T4CKPS0
#define _T4CKPS1 T4CONbits.T4CKPS1
#define _T4OUTPS0 T4CONbits.T4OUTPS0
#define _T4OUTPS1 T4CONbits.T4OUTPS1
#define _T4OUTPS2 T4CONbits.T4OUTPS2
#define _T4OUTPS3 T4CONbits.T4OUTPS3

/* CCPTMRS0 */
#define _C1TSEL0 CCPTMRS0bits.C1TSEL0
#define _C2TSEL0 CCPTMRS0bits.C2TSEL0
#define _C3TSEL0 CCPTMRS0bits.C3TSEL0

/* CCP1CON */
/* Bitname _CCPM cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
#define _PM CCP1CONbits.PM
/* Bitname _CCPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM3 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
#define _PM0 CCP1CONbits.PM0
#define _PM1 CCP1CONbits.PM1
#define _CCP1M CCP1CONbits.CCP1M
#define _DC1B CCP1CONbits.DC1B
#define _P1M CCP1CONbits.P1M
#define _CCP1M0 CCP1CONbits.CCP1M0
#define _CCP1M1 CCP1CONbits.CCP1M1
#define _CCP1M2 CCP1CONbits.CCP1M2
#define _CCP1M3 CCP1CONbits.CCP1M3
#define _DC1B0 CCP1CONbits.DC1B0
#define _DC1B1 CCP1CONbits.DC1B1
#define _P1M0 CCP1CONbits.P1M0
#define _P1M1 CCP1CONbits.P1M1

/* ECCP1DEL */
#define _PDC ECCP1DELbits.PDC
#define _PRSEN ECCP1DELbits.PRSEN
#define _PDC0 ECCP1DELbits.PDC0
#define _PDC1 ECCP1DELbits.PDC1
#define _PDC2 ECCP1DELbits.PDC2
#define _PDC3 ECCP1DELbits.PDC3
#define _PDC4 ECCP1DELbits.PDC4
#define _PDC5 ECCP1DELbits.PDC5
#define _PDC6 ECCP1DELbits.PDC6
#define _P1DC ECCP1DELbits.P1DC
#define _P1RSEN ECCP1DELbits.P1RSEN
#define _P1DC0 ECCP1DELbits.P1DC0
#define _P1DC1 ECCP1DELbits.P1DC1
#define _P1DC2 ECCP1DELbits.P1DC2
#define _P1DC3 ECCP1DELbits.P1DC3
#define _P1DC4 ECCP1DELbits.P1DC4
#define _P1DC5 ECCP1DELbits.P1DC5
#define _P1DC6 ECCP1DELbits.P1DC6

/* ECCP1AS */
#define _PSSBD ECCP1ASbits.PSSBD
#define _PSSAC ECCP1ASbits.PSSAC
#define _ECCPAS ECCP1ASbits.ECCPAS
#define _ECCPASE ECCP1ASbits.ECCPASE
#define _PSSBD0 ECCP1ASbits.PSSBD0
#define _PSSBD1 ECCP1ASbits.PSSBD1
#define _PSSAC0 ECCP1ASbits.PSSAC0
#define _PSSAC1 ECCP1ASbits.PSSAC1
#define _ECCPAS0 ECCP1ASbits.ECCPAS0
#define _ECCPAS1 ECCP1ASbits.ECCPAS1
#define _ECCPAS2 ECCP1ASbits.ECCPAS2
#define _PSS1BD ECCP1ASbits.PSS1BD
#define _PSS1AC ECCP1ASbits.PSS1AC
#define _ECCP1AS ECCP1ASbits.ECCP1AS
#define _PSS1BD0 ECCP1ASbits.PSS1BD0
#define _PSS1BD1 ECCP1ASbits.PSS1BD1
#define _PSS1AC0 ECCP1ASbits.PSS1AC0
#define _PSS1AC1 ECCP1ASbits.PSS1AC1
#define _ECCP1AS0 ECCP1ASbits.ECCP1AS0
#define _ECCP1AS1 ECCP1ASbits.ECCP1AS1
#define _ECCP1AS2 ECCP1ASbits.ECCP1AS2

/* PSTR1CON */
#define _STRA PSTR1CONbits.STRA
#define _STRB PSTR1CONbits.STRB
#define _STRC PSTR1CONbits.STRC
#define _STRD PSTR1CONbits.STRD
#define _STRSYNC PSTR1CONbits.STRSYNC
#define _CMPL PSTR1CONbits.CMPL
#define _CMPL0 PSTR1CONbits.CMPL0
#define _CMPL1 PSTR1CONbits.CMPL1

/* CCP2CON */
/* Bitname _CCPM cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM3 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
#define _CCP2M CCP2CONbits.CCP2M
#define _DC2B CCP2CONbits.DC2B
#define _CCP2M0 CCP2CONbits.CCP2M0
#define _CCP2M1 CCP2CONbits.CCP2M1
#define _CCP2M2 CCP2CONbits.CCP2M2
#define _CCP2M3 CCP2CONbits.CCP2M3
#define _DC2B0 CCP2CONbits.DC2B0
#define _DC2B1 CCP2CONbits.DC2B1

/* CCP3CON */
/* Bitname _CCPM cannot be defined because it is used by more than one SFR */
/* Bitname _DCB cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPM3 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB0 cannot be defined because it is used by more than one SFR */
/* Bitname _DCB1 cannot be defined because it is used by more than one SFR */
#define _CCP3M CCP3CONbits.CCP3M
#define _DC3B CCP3CONbits.DC3B
#define _CCP3M0 CCP3CONbits.CCP3M0
#define _CCP3M1 CCP3CONbits.CCP3M1
#define _CCP3M2 CCP3CONbits.CCP3M2
#define _CCP3M3 CCP3CONbits.CCP3M3
#define _DC3B0 CCP3CONbits.DC3B0
#define _DC3B1 CCP3CONbits.DC3B1

/* SPI1BUF */
/* Bitname _SSPBUF cannot be defined because it is used by more than one SFR */
#define _SPI1BUF SPI1BUFbits.SPI1BUF

/* SSP1CON1 */
/* Bitname _SSPM cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSPEN cannot be defined because it is used by more than one SFR */
/* Bitname _SSPOV cannot be defined because it is used by more than one SFR */
/* Bitname _WCOL cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM3 cannot be defined because it is used by more than one SFR */

/* SSP1CON2 */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK5 cannot be defined because it is used by more than one SFR */

/* SSP1CON3 */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */
/* Bitname _ACKTIM cannot be defined because it is used by more than one SFR */

/* SSP1STAT */
/* Bitname _BF cannot be defined because it is used by more than one SFR */
/* Bitname _UA cannot be defined because it is used by more than one SFR */
/* Bitname _R_NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _READ_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _DATA_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_READ cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_START cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_STOP cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_DAT cannot be defined because it is used by more than one SFR */

/* I2C1ADD */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* I2C1MSK */
/* Bitname _MSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */

/* SPI2BUF */
/* Bitname _SSPBUF cannot be defined because it is used by more than one SFR */
#define _SPI2BUF SPI2BUFbits.SPI2BUF

/* SSP2CON1 */
/* Bitname _SSPM cannot be defined because it is used by more than one SFR */
/* Bitname _CKP cannot be defined because it is used by more than one SFR */
/* Bitname _SSPEN cannot be defined because it is used by more than one SFR */
/* Bitname _SSPOV cannot be defined because it is used by more than one SFR */
/* Bitname _WCOL cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM0 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM1 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM2 cannot be defined because it is used by more than one SFR */
/* Bitname _SSPM3 cannot be defined because it is used by more than one SFR */

/* SSP2CON2 */
/* Bitname _SEN cannot be defined because it is used by more than one SFR */
/* Bitname _RSEN cannot be defined because it is used by more than one SFR */
/* Bitname _PEN cannot be defined because it is used by more than one SFR */
/* Bitname _RCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKEN cannot be defined because it is used by more than one SFR */
/* Bitname _ACKDT cannot be defined because it is used by more than one SFR */
/* Bitname _ACKSTAT cannot be defined because it is used by more than one SFR */
/* Bitname _GCEN cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _ADMSK5 cannot be defined because it is used by more than one SFR */

/* SSP2CON3 */
/* Bitname _DHEN cannot be defined because it is used by more than one SFR */
/* Bitname _AHEN cannot be defined because it is used by more than one SFR */
/* Bitname _SBCDE cannot be defined because it is used by more than one SFR */
/* Bitname _SDAHT cannot be defined because it is used by more than one SFR */
/* Bitname _BOEN cannot be defined because it is used by more than one SFR */
/* Bitname _SCIE cannot be defined because it is used by more than one SFR */
/* Bitname _PCIE cannot be defined because it is used by more than one SFR */
/* Bitname _ACKTIM cannot be defined because it is used by more than one SFR */

/* SSP2STAT */
/* Bitname _BF cannot be defined because it is used by more than one SFR */
/* Bitname _UA cannot be defined because it is used by more than one SFR */
/* Bitname _R_NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _S cannot be defined because it is used by more than one SFR */
/* Bitname _P cannot be defined because it is used by more than one SFR */
/* Bitname _D_NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _CKE cannot be defined because it is used by more than one SFR */
/* Bitname _SMP cannot be defined because it is used by more than one SFR */
/* Bitname _R_W cannot be defined because it is used by more than one SFR */
/* Bitname _D_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_W cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_A cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _NOT_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _READ_WRITE cannot be defined because it is used by more than one SFR */
/* Bitname _DATA_ADDRESS cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_READ cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_START cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_STOP cannot be defined because it is used by more than one SFR */
/* Bitname _I2C_DAT cannot be defined because it is used by more than one SFR */

/* I2C2ADD */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* SSP2ADD */
/* Bitname _SSPADD cannot be defined because it is used by more than one SFR */
/* Bitname _I2CADD cannot be defined because it is used by more than one SFR */

/* I2C2MSK */
/* Bitname _MSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */

/* SSP2MSK */
/* Bitname _MSK0 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK1 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK2 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK3 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK4 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK5 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK6 cannot be defined because it is used by more than one SFR */
/* Bitname _MSK7 cannot be defined because it is used by more than one SFR */
/* Bitname _AMSK cannot be defined because it is used by more than one SFR */

/* U1MODE */
#define _STSEL U1MODEbits.STSEL
#define _PDSEL U1MODEbits.PDSEL
#define _BRGH U1MODEbits.BRGH
#define _RXINV U1MODEbits.RXINV
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
/* Bitname _RXINV cannot be defined because it is used by more than one SFR */
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

/* TRISA */
#define _TRISA0 TRISAbits.TRISA0
#define _TRISA1 TRISAbits.TRISA1
#define _TRISA2 TRISAbits.TRISA2
#define _TRISA3 TRISAbits.TRISA3
#define _TRISA4 TRISAbits.TRISA4
#define _TRISA6 TRISAbits.TRISA6
#define _TRISA7 TRISAbits.TRISA7

/* PORTA */
#define _RA0 PORTAbits.RA0
#define _RA1 PORTAbits.RA1
#define _RA2 PORTAbits.RA2
#define _RA3 PORTAbits.RA3
#define _RA4 PORTAbits.RA4
#define _RA5 PORTAbits.RA5
#define _RA6 PORTAbits.RA6
#define _RA7 PORTAbits.RA7

/* LATA */
#define _LATA0 LATAbits.LATA0
#define _LATA1 LATAbits.LATA1
#define _LATA2 LATAbits.LATA2
#define _LATA3 LATAbits.LATA3
#define _LATA4 LATAbits.LATA4
#define _LATA6 LATAbits.LATA6
#define _LATA7 LATAbits.LATA7

/* ODCA */
#define _ODA0 ODCAbits.ODA0
#define _ODA1 ODCAbits.ODA1
#define _ODA2 ODCAbits.ODA2
#define _ODA3 ODCAbits.ODA3
#define _ODA4 ODCAbits.ODA4
#define _ODA6 ODCAbits.ODA6
#define _ODA7 ODCAbits.ODA7

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
#define _ODB0 ODCBbits.ODB0
#define _ODB1 ODCBbits.ODB1
#define _ODB2 ODCBbits.ODB2
#define _ODB3 ODCBbits.ODB3
#define _ODB4 ODCBbits.ODB4
#define _ODB5 ODCBbits.ODB5
#define _ODB6 ODCBbits.ODB6
#define _ODB7 ODCBbits.ODB7
#define _ODB8 ODCBbits.ODB8
#define _ODB9 ODCBbits.ODB9
#define _ODB10 ODCBbits.ODB10
#define _ODB11 ODCBbits.ODB11
#define _ODB12 ODCBbits.ODB12
#define _ODB13 ODCBbits.ODB13
#define _ODB14 ODCBbits.ODB14
#define _ODB15 ODCBbits.ODB15

/* PADCFG1 */
#define _SCK1DIS PADCFG1bits.SCK1DIS
#define _SDO1DIS PADCFG1bits.SDO1DIS
#define _SCK2DIS PADCFG1bits.SCK2DIS
#define _SDO2DIS PADCFG1bits.SDO2DIS
#define _SMBDEL0 PADCFG1bits.SMBDEL0
#define _SMBDEL1 PADCFG1bits.SMBDEL1

/* AD1CON1 */
#define _DONE AD1CON1bits.DONE
#define _SAMP AD1CON1bits.SAMP
#define _ASAM AD1CON1bits.ASAM
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
#define _CSCNA AD1CON2bits.CSCNA
#define _OFFCAL AD1CON2bits.OFFCAL
#define _VCFG AD1CON2bits.VCFG
#define _SMPI0 AD1CON2bits.SMPI0
#define _SMPI1 AD1CON2bits.SMPI1
#define _SMPI2 AD1CON2bits.SMPI2
#define _SMPI3 AD1CON2bits.SMPI3
#define _VCFG0 AD1CON2bits.VCFG0
#define _VCFG1 AD1CON2bits.VCFG1
#define _VCFG2 AD1CON2bits.VCFG2

/* AD1CON3 */
#define _ADCS AD1CON3bits.ADCS
#define _SAMC AD1CON3bits.SAMC
#define _PUMPEN AD1CON3bits.PUMPEN
#define _EXTSAM AD1CON3bits.EXTSAM
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

/* AD1CHS */
#define _CH0SA AD1CHSbits.CH0SA
#define _CH0NA AD1CHSbits.CH0NA
#define _CH0SB AD1CHSbits.CH0SB
#define _CH0NB AD1CHSbits.CH0NB
#define _CH0SA0 AD1CHSbits.CH0SA0
#define _CH0SA1 AD1CHSbits.CH0SA1
#define _CH0SA2 AD1CHSbits.CH0SA2
#define _CH0SA3 AD1CHSbits.CH0SA3
#define _CH0SB0 AD1CHSbits.CH0SB0
#define _CH0SB1 AD1CHSbits.CH0SB1
#define _CH0SB2 AD1CHSbits.CH0SB2
#define _CH0SB3 AD1CHSbits.CH0SB3

/* AD1CSSL */
#define _CSSL0 AD1CSSLbits.CSSL0
#define _CSSL1 AD1CSSLbits.CSSL1
#define _CSSL2 AD1CSSLbits.CSSL2
#define _CSSL3 AD1CSSLbits.CSSL3
#define _CSSL4 AD1CSSLbits.CSSL4
#define _CSSL6 AD1CSSLbits.CSSL6
#define _CSSL7 AD1CSSLbits.CSSL7
#define _CSSL8 AD1CSSLbits.CSSL8
#define _CSSL9 AD1CSSLbits.CSSL9
#define _CSSL10 AD1CSSLbits.CSSL10
#define _CSSL11 AD1CSSLbits.CSSL11
#define _CSSL12 AD1CSSLbits.CSSL12
#define _CSSL13 AD1CSSLbits.CSSL13
#define _CSSL14 AD1CSSLbits.CSSL14
#define _CSSL15 AD1CSSLbits.CSSL15

/* ANCFG */
#define _VBGEN ANCFGbits.VBGEN

/* ANSA */
#define _ANSA0 ANSAbits.ANSA0
#define _ANSA1 ANSAbits.ANSA1
#define _ANSA2 ANSAbits.ANSA2
#define _ANSA3 ANSAbits.ANSA3

/* ANSB */
#define _ANSB0 ANSBbits.ANSB0
#define _ANSB1 ANSBbits.ANSB1
#define _ANSB2 ANSBbits.ANSB2
#define _ANSB3 ANSBbits.ANSB3
#define _ANSB4 ANSBbits.ANSB4
#define _ANSB12 ANSBbits.ANSB12
#define _ANSB13 ANSBbits.ANSB13
#define _ANSB14 ANSBbits.ANSB14
#define _ANSB15 ANSBbits.ANSB15

/* CMSTAT */
#define _C1OUT CMSTATbits.C1OUT
#define _C2OUT CMSTATbits.C2OUT
#define _C1EVT CMSTATbits.C1EVT
#define _C2EVT CMSTATbits.C2EVT
#define _CMIDL CMSTATbits.CMIDL

/* CVRCON */
#define _CVR CVRCONbits.CVR
#define _CVRSS CVRCONbits.CVRSS
#define _CVROE CVRCONbits.CVROE
#define _CVREN CVRCONbits.CVREN
#define _CVR0 CVRCONbits.CVR0
#define _CVR1 CVRCONbits.CVR1
#define _CVR2 CVRCONbits.CVR2
#define _CVR3 CVRCONbits.CVR3
#define _CVR4 CVRCONbits.CVR4

/* CM1CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CLPWR cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */

/* CM2CON */
/* Bitname _CCH cannot be defined because it is used by more than one SFR */
/* Bitname _CREF cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COUT cannot be defined because it is used by more than one SFR */
/* Bitname _CEVT cannot be defined because it is used by more than one SFR */
/* Bitname _CLPWR cannot be defined because it is used by more than one SFR */
/* Bitname _CPOL cannot be defined because it is used by more than one SFR */
/* Bitname _COE cannot be defined because it is used by more than one SFR */
/* Bitname _CON cannot be defined because it is used by more than one SFR */
/* Bitname _CCH0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCH1 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL0 cannot be defined because it is used by more than one SFR */
/* Bitname _EVPOL1 cannot be defined because it is used by more than one SFR */

/* RCON */
#define _POR RCONbits.POR
#define _BOR RCONbits.BOR
#define _IDLE RCONbits.IDLE
#define _SLEEP RCONbits.SLEEP
#define _WDTO RCONbits.WDTO
#define _SWDTEN RCONbits.SWDTEN
#define _SWR RCONbits.SWR
#define _EXTR RCONbits.EXTR
#define _PMSLP RCONbits.PMSLP
#define _CM RCONbits.CM
#define _SBOREN RCONbits.SBOREN
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR
#define _VREGS RCONbits.VREGS

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
/* Bitname _SOSCEN cannot be defined because it is used by more than one SFR */
#define _SOSCDRV OSCCONbits.SOSCDRV
#define _CF OSCCONbits.CF
#define _LOCK OSCCONbits.LOCK
#define _CLKLOCK OSCCONbits.CLKLOCK
#define _NOSC OSCCONbits.NOSC
#define _COSC OSCCONbits.COSC
#define _LPOSCEN OSCCONbits.LPOSCEN
#define _NOSC0 OSCCONbits.NOSC0
#define _NOSC1 OSCCONbits.NOSC1
#define _NOSC2 OSCCONbits.NOSC2
#define _COSC0 OSCCONbits.COSC0
#define _COSC1 OSCCONbits.COSC1
#define _COSC2 OSCCONbits.COSC2

/* CLKDIV */
#define _RCDIV CLKDIVbits.RCDIV
#define _DOZEN CLKDIVbits.DOZEN
#define _DOZE CLKDIVbits.DOZE
#define _ROI CLKDIVbits.ROI
#define _RCDIV0 CLKDIVbits.RCDIV0
#define _RCDIV1 CLKDIVbits.RCDIV1
#define _RCDIV2 CLKDIVbits.RCDIV2
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

/* REFOCON */
#define _RODIV REFOCONbits.RODIV
#define _ROSEL REFOCONbits.ROSEL
#define _ROSSLP REFOCONbits.ROSSLP
#define _ROEN REFOCONbits.ROEN
#define _RODIV0 REFOCONbits.RODIV0
#define _RODIV1 REFOCONbits.RODIV1
#define _RODIV2 REFOCONbits.RODIV2
#define _RODIV3 REFOCONbits.RODIV3
#define _ROON REFOCONbits.ROON

/* HLVDCON */
#define _HLVDL HLVDCONbits.HLVDL
#define _IRVST HLVDCONbits.IRVST
#define _BGVST HLVDCONbits.BGVST
#define _VDIR HLVDCONbits.VDIR
#define _HLSIDL HLVDCONbits.HLSIDL
#define _HLVDEN HLVDCONbits.HLVDEN
#define _HLVDL0 HLVDCONbits.HLVDL0
#define _HLVDL1 HLVDCONbits.HLVDL1
#define _HLVDL2 HLVDCONbits.HLVDL2
#define _HLVDL3 HLVDCONbits.HLVDL3

/* NVMCON */
#define _NVMOP NVMCONbits.NVMOP
#define _ERASE NVMCONbits.ERASE
#define _PGMONLY NVMCONbits.PGMONLY
#define _WRERR NVMCONbits.WRERR
#define _WREN NVMCONbits.WREN
#define _WR NVMCONbits.WR
#define _NVMOP0 NVMCONbits.NVMOP0
#define _NVMOP1 NVMCONbits.NVMOP1
#define _NVMOP2 NVMCONbits.NVMOP2
#define _NVMOP3 NVMCONbits.NVMOP3
#define _NVMOP4 NVMCONbits.NVMOP4
#define _NVMOP5 NVMCONbits.NVMOP5

/* NVMKEY */
#define _NVMKEY NVMKEYbits.NVMKEY
#define _NVMKEY0 NVMKEYbits.NVMKEY0
#define _NVMKEY1 NVMKEYbits.NVMKEY1
#define _NVMKEY2 NVMKEYbits.NVMKEY2
#define _NVMKEY3 NVMKEYbits.NVMKEY3
#define _NVMKEY4 NVMKEYbits.NVMKEY4
#define _NVMKEY5 NVMKEYbits.NVMKEY5
#define _NVMKEY6 NVMKEYbits.NVMKEY6
#define _NVMKEY7 NVMKEYbits.NVMKEY7

/* ULPWCON */
#define _ULPSINK ULPWCONbits.ULPSINK
#define _ULPSIDL ULPWCONbits.ULPSIDL
#define _ULPEN ULPWCONbits.ULPEN
#define _CRNTEN ULPWCONbits.CRNTEN
#define _PSIDL ULPWCONbits.PSIDL
#define _WUEN ULPWCONbits.WUEN

/* PMD1 */
#define _ADC1MD PMD1bits.ADC1MD
#define _U1MD PMD1bits.U1MD
#define _U2MD PMD1bits.U2MD
#define _SSP1MD PMD1bits.SSP1MD
#define _T1MD PMD1bits.T1MD
#define _T2MD PMD1bits.T2MD
#define _T3MD PMD1bits.T3MD
#define _T4MD PMD1bits.T4MD
#define _ADCMD PMD1bits.ADCMD
#define _I2C1MD PMD1bits.I2C1MD
#define _SPI1MD PMD1bits.SPI1MD

/* PMD2 */
#define _CCP1MD PMD2bits.CCP1MD
#define _CCP2MD PMD2bits.CCP2MD
#define _CCP3MD PMD2bits.CCP3MD

/* PMD3 */
#define _SSP2MD PMD3bits.SSP2MD
#define _CMPMD PMD3bits.CMPMD
#define _I2C2MD PMD3bits.I2C2MD
#define _SPI2MD PMD3bits.SPI2MD

/* PMD4 */
#define _HLVDMD PMD4bits.HLVDMD
#define _REFOMD PMD4bits.REFOMD
#define _EEMD PMD4bits.EEMD
#define _ULPWUMD PMD4bits.ULPWUMD


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

#define _CNPD1_CN0PDE_POSITION                   0x00000000
#define _CNPD1_CN0PDE_MASK                       0x00000001
#define _CNPD1_CN0PDE_LENGTH                     0x00000001

#define _CNPD1_CN1PDE_POSITION                   0x00000001
#define _CNPD1_CN1PDE_MASK                       0x00000002
#define _CNPD1_CN1PDE_LENGTH                     0x00000001

#define _CNPD1_CN2PDE_POSITION                   0x00000002
#define _CNPD1_CN2PDE_MASK                       0x00000004
#define _CNPD1_CN2PDE_LENGTH                     0x00000001

#define _CNPD1_CN3PDE_POSITION                   0x00000003
#define _CNPD1_CN3PDE_MASK                       0x00000008
#define _CNPD1_CN3PDE_LENGTH                     0x00000001

#define _CNPD1_CN4PDE_POSITION                   0x00000004
#define _CNPD1_CN4PDE_MASK                       0x00000010
#define _CNPD1_CN4PDE_LENGTH                     0x00000001

#define _CNPD1_CN5PDE_POSITION                   0x00000005
#define _CNPD1_CN5PDE_MASK                       0x00000020
#define _CNPD1_CN5PDE_LENGTH                     0x00000001

#define _CNPD1_CN6PDE_POSITION                   0x00000006
#define _CNPD1_CN6PDE_MASK                       0x00000040
#define _CNPD1_CN6PDE_LENGTH                     0x00000001

#define _CNPD1_CN7PDE_POSITION                   0x00000007
#define _CNPD1_CN7PDE_MASK                       0x00000080
#define _CNPD1_CN7PDE_LENGTH                     0x00000001

#define _CNPD1_CN8PDE_POSITION                   0x00000008
#define _CNPD1_CN8PDE_MASK                       0x00000100
#define _CNPD1_CN8PDE_LENGTH                     0x00000001

#define _CNPD1_CN9PDE_POSITION                   0x00000009
#define _CNPD1_CN9PDE_MASK                       0x00000200
#define _CNPD1_CN9PDE_LENGTH                     0x00000001

#define _CNPD1_CN11PDE_POSITION                  0x0000000B
#define _CNPD1_CN11PDE_MASK                      0x00000800
#define _CNPD1_CN11PDE_LENGTH                    0x00000001

#define _CNPD1_CN12PDE_POSITION                  0x0000000C
#define _CNPD1_CN12PDE_MASK                      0x00001000
#define _CNPD1_CN12PDE_LENGTH                    0x00000001

#define _CNPD1_CN13PDE_POSITION                  0x0000000D
#define _CNPD1_CN13PDE_MASK                      0x00002000
#define _CNPD1_CN13PDE_LENGTH                    0x00000001

#define _CNPD1_CN14PDE_POSITION                  0x0000000E
#define _CNPD1_CN14PDE_MASK                      0x00004000
#define _CNPD1_CN14PDE_LENGTH                    0x00000001

#define _CNPD1_CN15PDE_POSITION                  0x0000000F
#define _CNPD1_CN15PDE_MASK                      0x00008000
#define _CNPD1_CN15PDE_LENGTH                    0x00000001

#define _CNPD2_CN16PDE_POSITION                  0x00000000
#define _CNPD2_CN16PDE_MASK                      0x00000001
#define _CNPD2_CN16PDE_LENGTH                    0x00000001

#define _CNPD2_CN21PDE_POSITION                  0x00000005
#define _CNPD2_CN21PDE_MASK                      0x00000020
#define _CNPD2_CN21PDE_LENGTH                    0x00000001

#define _CNPD2_CN22PDE_POSITION                  0x00000006
#define _CNPD2_CN22PDE_MASK                      0x00000040
#define _CNPD2_CN22PDE_LENGTH                    0x00000001

#define _CNPD2_CN23PDE_POSITION                  0x00000007
#define _CNPD2_CN23PDE_MASK                      0x00000080
#define _CNPD2_CN23PDE_LENGTH                    0x00000001

#define _CNPD2_CN24PDE_POSITION                  0x00000008
#define _CNPD2_CN24PDE_MASK                      0x00000100
#define _CNPD2_CN24PDE_LENGTH                    0x00000001

#define _CNPD2_CN27PDE_POSITION                  0x0000000B
#define _CNPD2_CN27PDE_MASK                      0x00000800
#define _CNPD2_CN27PDE_LENGTH                    0x00000001

#define _CNPD2_CN29PDE_POSITION                  0x0000000D
#define _CNPD2_CN29PDE_MASK                      0x00002000
#define _CNPD2_CN29PDE_LENGTH                    0x00000001

#define _CNPD2_CN30PDE_POSITION                  0x0000000E
#define _CNPD2_CN30PDE_MASK                      0x00004000
#define _CNPD2_CN30PDE_LENGTH                    0x00000001

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

#define _CNEN2_CN21IE_POSITION                   0x00000005
#define _CNEN2_CN21IE_MASK                       0x00000020
#define _CNEN2_CN21IE_LENGTH                     0x00000001

#define _CNEN2_CN22IE_POSITION                   0x00000006
#define _CNEN2_CN22IE_MASK                       0x00000040
#define _CNEN2_CN22IE_LENGTH                     0x00000001

#define _CNEN2_CN23IE_POSITION                   0x00000007
#define _CNEN2_CN23IE_MASK                       0x00000080
#define _CNEN2_CN23IE_LENGTH                     0x00000001

#define _CNEN2_CN24IE_POSITION                   0x00000008
#define _CNEN2_CN24IE_MASK                       0x00000100
#define _CNEN2_CN24IE_LENGTH                     0x00000001

#define _CNEN2_CN27IE_POSITION                   0x0000000B
#define _CNEN2_CN27IE_MASK                       0x00000800
#define _CNEN2_CN27IE_LENGTH                     0x00000001

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

#define _CNPU2_CN21PUE_POSITION                  0x00000005
#define _CNPU2_CN21PUE_MASK                      0x00000020
#define _CNPU2_CN21PUE_LENGTH                    0x00000001

#define _CNPU2_CN22PUE_POSITION                  0x00000006
#define _CNPU2_CN22PUE_MASK                      0x00000040
#define _CNPU2_CN22PUE_LENGTH                    0x00000001

#define _CNPU2_CN23PUE_POSITION                  0x00000007
#define _CNPU2_CN23PUE_MASK                      0x00000080
#define _CNPU2_CN23PUE_LENGTH                    0x00000001

#define _CNPU2_CN24PUE_POSITION                  0x00000008
#define _CNPU2_CN24PUE_MASK                      0x00000100
#define _CNPU2_CN24PUE_LENGTH                    0x00000001

#define _CNPU2_CN27PUE_POSITION                  0x0000000B
#define _CNPU2_CN27PUE_MASK                      0x00000800
#define _CNPU2_CN27PUE_LENGTH                    0x00000001

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

#define _IFS0_CCP1IF_POSITION                    0x00000002
#define _IFS0_CCP1IF_MASK                        0x00000004
#define _IFS0_CCP1IF_LENGTH                      0x00000001

#define _IFS0_T1IF_POSITION                      0x00000003
#define _IFS0_T1IF_MASK                          0x00000008
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_CCP2IF_POSITION                    0x00000006
#define _IFS0_CCP2IF_MASK                        0x00000040
#define _IFS0_CCP2IF_LENGTH                      0x00000001

#define _IFS0_T2IF_POSITION                      0x00000007
#define _IFS0_T2IF_MASK                          0x00000080
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_T3IF_POSITION                      0x00000008
#define _IFS0_T3IF_MASK                          0x00000100
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_U1RXIF_POSITION                    0x0000000B
#define _IFS0_U1RXIF_MASK                        0x00000800
#define _IFS0_U1RXIF_LENGTH                      0x00000001

#define _IFS0_U1TXIF_POSITION                    0x0000000C
#define _IFS0_U1TXIF_MASK                        0x00001000
#define _IFS0_U1TXIF_LENGTH                      0x00000001

#define _IFS0_AD1IF_POSITION                     0x0000000D
#define _IFS0_AD1IF_MASK                         0x00002000
#define _IFS0_AD1IF_LENGTH                       0x00000001

#define _IFS0_NVMIF_POSITION                     0x0000000F
#define _IFS0_NVMIF_MASK                         0x00008000
#define _IFS0_NVMIF_LENGTH                       0x00000001

#define _IFS1_SSP1IF_POSITION                    0x00000000
#define _IFS1_SSP1IF_MASK                        0x00000001
#define _IFS1_SSP1IF_LENGTH                      0x00000001

#define _IFS1_BCL1IF_POSITION                    0x00000001
#define _IFS1_BCL1IF_MASK                        0x00000002
#define _IFS1_BCL1IF_LENGTH                      0x00000001

#define _IFS1_CMIF_POSITION                      0x00000002
#define _IFS1_CMIF_MASK                          0x00000004
#define _IFS1_CMIF_LENGTH                        0x00000001

#define _IFS1_CNIF_POSITION                      0x00000003
#define _IFS1_CNIF_MASK                          0x00000008
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_INT1IF_POSITION                    0x00000004
#define _IFS1_INT1IF_MASK                        0x00000010
#define _IFS1_INT1IF_LENGTH                      0x00000001

#define _IFS1_CCP3IF_POSITION                    0x00000009
#define _IFS1_CCP3IF_MASK                        0x00000200
#define _IFS1_CCP3IF_LENGTH                      0x00000001

#define _IFS1_T4IF_POSITION                      0x0000000B
#define _IFS1_T4IF_MASK                          0x00000800
#define _IFS1_T4IF_LENGTH                        0x00000001

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS1_U2RXIF_POSITION                    0x0000000E
#define _IFS1_U2RXIF_MASK                        0x00004000
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x0000000F
#define _IFS1_U2TXIF_MASK                        0x00008000
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS2_T3GIF_POSITION                     0x00000005
#define _IFS2_T3GIF_MASK                         0x00000020
#define _IFS2_T3GIF_LENGTH                       0x00000001

#define _IFS3_SSP2IF_POSITION                    0x00000001
#define _IFS3_SSP2IF_MASK                        0x00000002
#define _IFS3_SSP2IF_LENGTH                      0x00000001

#define _IFS3_BCL2IF_POSITION                    0x00000002
#define _IFS3_BCL2IF_MASK                        0x00000004
#define _IFS3_BCL2IF_LENGTH                      0x00000001

#define _IFS4_U1ERIF_POSITION                    0x00000001
#define _IFS4_U1ERIF_MASK                        0x00000002
#define _IFS4_U1ERIF_LENGTH                      0x00000001

#define _IFS4_U2ERIF_POSITION                    0x00000002
#define _IFS4_U2ERIF_MASK                        0x00000004
#define _IFS4_U2ERIF_LENGTH                      0x00000001

#define _IFS4_HLVDIF_POSITION                    0x00000008
#define _IFS4_HLVDIF_MASK                        0x00000100
#define _IFS4_HLVDIF_LENGTH                      0x00000001

#define _IFS5_ULPWUIF_POSITION                   0x00000000
#define _IFS5_ULPWUIF_MASK                       0x00000001
#define _IFS5_ULPWUIF_LENGTH                     0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000000
#define _IEC0_INT0IE_MASK                        0x00000001
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_CCP1IE_POSITION                    0x00000002
#define _IEC0_CCP1IE_MASK                        0x00000004
#define _IEC0_CCP1IE_LENGTH                      0x00000001

#define _IEC0_T1IE_POSITION                      0x00000003
#define _IEC0_T1IE_MASK                          0x00000008
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_CCP2IE_POSITION                    0x00000006
#define _IEC0_CCP2IE_MASK                        0x00000040
#define _IEC0_CCP2IE_LENGTH                      0x00000001

#define _IEC0_T2IE_POSITION                      0x00000007
#define _IEC0_T2IE_MASK                          0x00000080
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_T3IE_POSITION                      0x00000008
#define _IEC0_T3IE_MASK                          0x00000100
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_U1RXIE_POSITION                    0x0000000B
#define _IEC0_U1RXIE_MASK                        0x00000800
#define _IEC0_U1RXIE_LENGTH                      0x00000001

#define _IEC0_U1TXIE_POSITION                    0x0000000C
#define _IEC0_U1TXIE_MASK                        0x00001000
#define _IEC0_U1TXIE_LENGTH                      0x00000001

#define _IEC0_AD1IE_POSITION                     0x0000000D
#define _IEC0_AD1IE_MASK                         0x00002000
#define _IEC0_AD1IE_LENGTH                       0x00000001

#define _IEC0_NVMIE_POSITION                     0x0000000F
#define _IEC0_NVMIE_MASK                         0x00008000
#define _IEC0_NVMIE_LENGTH                       0x00000001

#define _IEC1_SSP1IE_POSITION                    0x00000000
#define _IEC1_SSP1IE_MASK                        0x00000001
#define _IEC1_SSP1IE_LENGTH                      0x00000001

#define _IEC1_BCL1IE_POSITION                    0x00000001
#define _IEC1_BCL1IE_MASK                        0x00000002
#define _IEC1_BCL1IE_LENGTH                      0x00000001

#define _IEC1_CMIE_POSITION                      0x00000002
#define _IEC1_CMIE_MASK                          0x00000004
#define _IEC1_CMIE_LENGTH                        0x00000001

#define _IEC1_CNIE_POSITION                      0x00000003
#define _IEC1_CNIE_MASK                          0x00000008
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_INT1IE_POSITION                    0x00000004
#define _IEC1_INT1IE_MASK                        0x00000010
#define _IEC1_INT1IE_LENGTH                      0x00000001

#define _IEC1_CCP3IE_POSITION                    0x00000009
#define _IEC1_CCP3IE_MASK                        0x00000200
#define _IEC1_CCP3IE_LENGTH                      0x00000001

#define _IEC1_T4IE_POSITION                      0x0000000B
#define _IEC1_T4IE_MASK                          0x00000800
#define _IEC1_T4IE_LENGTH                        0x00000001

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC1_U2RXIE_POSITION                    0x0000000E
#define _IEC1_U2RXIE_MASK                        0x00004000
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x0000000F
#define _IEC1_U2TXIE_MASK                        0x00008000
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC2_T3GIE_POSITION                     0x00000005
#define _IEC2_T3GIE_MASK                         0x00000020
#define _IEC2_T3GIE_LENGTH                       0x00000001

#define _IEC3_SSP2IE_POSITION                    0x00000001
#define _IEC3_SSP2IE_MASK                        0x00000002
#define _IEC3_SSP2IE_LENGTH                      0x00000001

#define _IEC3_BCL2IE_POSITION                    0x00000002
#define _IEC3_BCL2IE_MASK                        0x00000004
#define _IEC3_BCL2IE_LENGTH                      0x00000001

#define _IEC4_U1ERIE_POSITION                    0x00000001
#define _IEC4_U1ERIE_MASK                        0x00000002
#define _IEC4_U1ERIE_LENGTH                      0x00000001

#define _IEC4_U2ERIE_POSITION                    0x00000002
#define _IEC4_U2ERIE_MASK                        0x00000004
#define _IEC4_U2ERIE_LENGTH                      0x00000001

#define _IEC4_HLVDIE_POSITION                    0x00000008
#define _IEC4_HLVDIE_MASK                        0x00000100
#define _IEC4_HLVDIE_LENGTH                      0x00000001

#define _IEC5_ULPWUIE_POSITION                   0x00000000
#define _IEC5_ULPWUIE_MASK                       0x00000001
#define _IEC5_ULPWUIE_LENGTH                     0x00000001

#define _IPC0_INT0IP_POSITION                    0x00000000
#define _IPC0_INT0IP_MASK                        0x00000007
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_CCP1IP_POSITION                    0x00000008
#define _IPC0_CCP1IP_MASK                        0x00000700
#define _IPC0_CCP1IP_LENGTH                      0x00000003

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

#define _IPC0_CCP1IP0_POSITION                   0x00000008
#define _IPC0_CCP1IP0_MASK                       0x00000100
#define _IPC0_CCP1IP0_LENGTH                     0x00000001

#define _IPC0_CCP1IP1_POSITION                   0x00000009
#define _IPC0_CCP1IP1_MASK                       0x00000200
#define _IPC0_CCP1IP1_LENGTH                     0x00000001

#define _IPC0_CCP1IP2_POSITION                   0x0000000A
#define _IPC0_CCP1IP2_MASK                       0x00000400
#define _IPC0_CCP1IP2_LENGTH                     0x00000001

#define _IPC0_T1IP0_POSITION                     0x0000000C
#define _IPC0_T1IP0_MASK                         0x00001000
#define _IPC0_T1IP0_LENGTH                       0x00000001

#define _IPC0_T1IP1_POSITION                     0x0000000D
#define _IPC0_T1IP1_MASK                         0x00002000
#define _IPC0_T1IP1_LENGTH                       0x00000001

#define _IPC0_T1IP2_POSITION                     0x0000000E
#define _IPC0_T1IP2_MASK                         0x00004000
#define _IPC0_T1IP2_LENGTH                       0x00000001

#define _IPC1_CCP2IP_POSITION                    0x00000008
#define _IPC1_CCP2IP_MASK                        0x00000700
#define _IPC1_CCP2IP_LENGTH                      0x00000003

#define _IPC1_T2IP_POSITION                      0x0000000C
#define _IPC1_T2IP_MASK                          0x00007000
#define _IPC1_T2IP_LENGTH                        0x00000003

#define _IPC1_CCP2IP0_POSITION                   0x00000008
#define _IPC1_CCP2IP0_MASK                       0x00000100
#define _IPC1_CCP2IP0_LENGTH                     0x00000001

#define _IPC1_CCP2IP1_POSITION                   0x00000009
#define _IPC1_CCP2IP1_MASK                       0x00000200
#define _IPC1_CCP2IP1_LENGTH                     0x00000001

#define _IPC1_CCP2IP2_POSITION                   0x0000000A
#define _IPC1_CCP2IP2_MASK                       0x00000400
#define _IPC1_CCP2IP2_LENGTH                     0x00000001

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

#define _IPC3_AD1IP0_POSITION                    0x00000004
#define _IPC3_AD1IP0_MASK                        0x00000010
#define _IPC3_AD1IP0_LENGTH                      0x00000001

#define _IPC3_AD1IP1_POSITION                    0x00000005
#define _IPC3_AD1IP1_MASK                        0x00000020
#define _IPC3_AD1IP1_LENGTH                      0x00000001

#define _IPC3_AD1IP2_POSITION                    0x00000006
#define _IPC3_AD1IP2_MASK                        0x00000040
#define _IPC3_AD1IP2_LENGTH                      0x00000001

#define _IPC3_NVMIP0_POSITION                    0x0000000C
#define _IPC3_NVMIP0_MASK                        0x00001000
#define _IPC3_NVMIP0_LENGTH                      0x00000001

#define _IPC3_NVMIP1_POSITION                    0x0000000D
#define _IPC3_NVMIP1_MASK                        0x00002000
#define _IPC3_NVMIP1_LENGTH                      0x00000001

#define _IPC3_NVMIP2_POSITION                    0x0000000E
#define _IPC3_NVMIP2_MASK                        0x00004000
#define _IPC3_NVMIP2_LENGTH                      0x00000001

#define _IPC4_SSP1IP_POSITION                    0x00000000
#define _IPC4_SSP1IP_MASK                        0x00000007
#define _IPC4_SSP1IP_LENGTH                      0x00000003

#define _IPC4_BCL1IP_POSITION                    0x00000004
#define _IPC4_BCL1IP_MASK                        0x00000070
#define _IPC4_BCL1IP_LENGTH                      0x00000003

#define _IPC4_CMIP_POSITION                      0x00000008
#define _IPC4_CMIP_MASK                          0x00000700
#define _IPC4_CMIP_LENGTH                        0x00000003

#define _IPC4_CNIP_POSITION                      0x0000000C
#define _IPC4_CNIP_MASK                          0x00007000
#define _IPC4_CNIP_LENGTH                        0x00000003

#define _IPC4_SSP1IP0_POSITION                   0x00000000
#define _IPC4_SSP1IP0_MASK                       0x00000001
#define _IPC4_SSP1IP0_LENGTH                     0x00000001

#define _IPC4_SSP1IP1_POSITION                   0x00000001
#define _IPC4_SSP1IP1_MASK                       0x00000002
#define _IPC4_SSP1IP1_LENGTH                     0x00000001

#define _IPC4_SSP1IP2_POSITION                   0x00000002
#define _IPC4_SSP1IP2_MASK                       0x00000004
#define _IPC4_SSP1IP2_LENGTH                     0x00000001

#define _IPC4_BCL1IP0_POSITION                   0x00000004
#define _IPC4_BCL1IP0_MASK                       0x00000010
#define _IPC4_BCL1IP0_LENGTH                     0x00000001

#define _IPC4_BCL1IP1_POSITION                   0x00000005
#define _IPC4_BCL1IP1_MASK                       0x00000020
#define _IPC4_BCL1IP1_LENGTH                     0x00000001

#define _IPC4_BCL1IP2_POSITION                   0x00000006
#define _IPC4_BCL1IP2_MASK                       0x00000040
#define _IPC4_BCL1IP2_LENGTH                     0x00000001

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

#define _IPC6_CCP3IP_POSITION                    0x00000004
#define _IPC6_CCP3IP_MASK                        0x00000070
#define _IPC6_CCP3IP_LENGTH                      0x00000003

#define _IPC6_T4IP_POSITION                      0x0000000C
#define _IPC6_T4IP_MASK                          0x00007000
#define _IPC6_T4IP_LENGTH                        0x00000003

#define _IPC6_CCP3IP0_POSITION                   0x00000004
#define _IPC6_CCP3IP0_MASK                       0x00000010
#define _IPC6_CCP3IP0_LENGTH                     0x00000001

#define _IPC6_CCP3IP1_POSITION                   0x00000005
#define _IPC6_CCP3IP1_MASK                       0x00000020
#define _IPC6_CCP3IP1_LENGTH                     0x00000001

#define _IPC6_CCP3IP2_POSITION                   0x00000006
#define _IPC6_CCP3IP2_MASK                       0x00000040
#define _IPC6_CCP3IP2_LENGTH                     0x00000001

#define _IPC6_T4IP0_POSITION                     0x0000000C
#define _IPC6_T4IP0_MASK                         0x00001000
#define _IPC6_T4IP0_LENGTH                       0x00000001

#define _IPC6_T4IP1_POSITION                     0x0000000D
#define _IPC6_T4IP1_MASK                         0x00002000
#define _IPC6_T4IP1_LENGTH                       0x00000001

#define _IPC6_T4IP2_POSITION                     0x0000000E
#define _IPC6_T4IP2_MASK                         0x00004000
#define _IPC6_T4IP2_LENGTH                       0x00000001

#define _IPC7_INT2IP_POSITION                    0x00000004
#define _IPC7_INT2IP_MASK                        0x00000070
#define _IPC7_INT2IP_LENGTH                      0x00000003

#define _IPC7_U2RXIP_POSITION                    0x00000008
#define _IPC7_U2RXIP_MASK                        0x00000700
#define _IPC7_U2RXIP_LENGTH                      0x00000003

#define _IPC7_U2TXIP_POSITION                    0x0000000C
#define _IPC7_U2TXIP_MASK                        0x00007000
#define _IPC7_U2TXIP_LENGTH                      0x00000003

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

#define _IPC9_T3GIP_POSITION                     0x00000004
#define _IPC9_T3GIP_MASK                         0x00000070
#define _IPC9_T3GIP_LENGTH                       0x00000003

#define _IPC9_T3GIP0_POSITION                    0x00000004
#define _IPC9_T3GIP0_MASK                        0x00000010
#define _IPC9_T3GIP0_LENGTH                      0x00000001

#define _IPC9_T3GIP1_POSITION                    0x00000005
#define _IPC9_T3GIP1_MASK                        0x00000020
#define _IPC9_T3GIP1_LENGTH                      0x00000001

#define _IPC9_T3GIP2_POSITION                    0x00000006
#define _IPC9_T3GIP2_MASK                        0x00000040
#define _IPC9_T3GIP2_LENGTH                      0x00000001

#define _IPC12_SSP2IP_POSITION                   0x00000004
#define _IPC12_SSP2IP_MASK                       0x00000070
#define _IPC12_SSP2IP_LENGTH                     0x00000003

#define _IPC12_BCL2IP_POSITION                   0x00000008
#define _IPC12_BCL2IP_MASK                       0x00000700
#define _IPC12_BCL2IP_LENGTH                     0x00000003

#define _IPC12_SSP2IP0_POSITION                  0x00000004
#define _IPC12_SSP2IP0_MASK                      0x00000010
#define _IPC12_SSP2IP0_LENGTH                    0x00000001

#define _IPC12_SSP2IP1_POSITION                  0x00000005
#define _IPC12_SSP2IP1_MASK                      0x00000020
#define _IPC12_SSP2IP1_LENGTH                    0x00000001

#define _IPC12_SSP2IP2_POSITION                  0x00000006
#define _IPC12_SSP2IP2_MASK                      0x00000040
#define _IPC12_SSP2IP2_LENGTH                    0x00000001

#define _IPC12_BCL2IP0_POSITION                  0x00000008
#define _IPC12_BCL2IP0_MASK                      0x00000100
#define _IPC12_BCL2IP0_LENGTH                    0x00000001

#define _IPC12_BCL2IP1_POSITION                  0x00000009
#define _IPC12_BCL2IP1_MASK                      0x00000200
#define _IPC12_BCL2IP1_LENGTH                    0x00000001

#define _IPC12_BCL2IP2_POSITION                  0x0000000A
#define _IPC12_BCL2IP2_MASK                      0x00000400
#define _IPC12_BCL2IP2_LENGTH                    0x00000001

#define _IPC16_U1ERIP_POSITION                   0x00000004
#define _IPC16_U1ERIP_MASK                       0x00000070
#define _IPC16_U1ERIP_LENGTH                     0x00000003

#define _IPC16_U2ERIP_POSITION                   0x00000008
#define _IPC16_U2ERIP_MASK                       0x00000700
#define _IPC16_U2ERIP_LENGTH                     0x00000003

#define _IPC16_U1ERIP0_POSITION                  0x00000004
#define _IPC16_U1ERIP0_MASK                      0x00000010
#define _IPC16_U1ERIP0_LENGTH                    0x00000001

#define _IPC16_U1ERIP1_POSITION                  0x00000005
#define _IPC16_U1ERIP1_MASK                      0x00000020
#define _IPC16_U1ERIP1_LENGTH                    0x00000001

#define _IPC16_U1ERIP2_POSITION                  0x00000006
#define _IPC16_U1ERIP2_MASK                      0x00000040
#define _IPC16_U1ERIP2_LENGTH                    0x00000001

#define _IPC16_U2ERIP0_POSITION                  0x00000008
#define _IPC16_U2ERIP0_MASK                      0x00000100
#define _IPC16_U2ERIP0_LENGTH                    0x00000001

#define _IPC16_U2ERIP1_POSITION                  0x00000009
#define _IPC16_U2ERIP1_MASK                      0x00000200
#define _IPC16_U2ERIP1_LENGTH                    0x00000001

#define _IPC16_U2ERIP2_POSITION                  0x0000000A
#define _IPC16_U2ERIP2_MASK                      0x00000400
#define _IPC16_U2ERIP2_LENGTH                    0x00000001

#define _IPC18_HLVDIP_POSITION                   0x00000000
#define _IPC18_HLVDIP_MASK                       0x00000007
#define _IPC18_HLVDIP_LENGTH                     0x00000003

#define _IPC18_HLVDIP0_POSITION                  0x00000000
#define _IPC18_HLVDIP0_MASK                      0x00000001
#define _IPC18_HLVDIP0_LENGTH                    0x00000001

#define _IPC18_HLVDIP1_POSITION                  0x00000001
#define _IPC18_HLVDIP1_MASK                      0x00000002
#define _IPC18_HLVDIP1_LENGTH                    0x00000001

#define _IPC18_HLVDIP2_POSITION                  0x00000002
#define _IPC18_HLVDIP2_MASK                      0x00000004
#define _IPC18_HLVDIP2_LENGTH                    0x00000001

#define _IPC20_ULPWUIP_POSITION                  0x00000000
#define _IPC20_ULPWUIP_MASK                      0x00000007
#define _IPC20_ULPWUIP_LENGTH                    0x00000003

#define _IPC20_ULPWUIP0_POSITION                 0x00000000
#define _IPC20_ULPWUIP0_MASK                     0x00000001
#define _IPC20_ULPWUIP0_LENGTH                   0x00000001

#define _IPC20_ULPWUIP1_POSITION                 0x00000001
#define _IPC20_ULPWUIP1_MASK                     0x00000002
#define _IPC20_ULPWUIP1_LENGTH                   0x00000001

#define _IPC20_ULPWUIP2_POSITION                 0x00000002
#define _IPC20_ULPWUIP2_MASK                     0x00000004
#define _IPC20_ULPWUIP2_LENGTH                   0x00000001

#define _INTTREG_VECNUM_POSITION                 0x00000000
#define _INTTREG_VECNUM_MASK                     0x0000007F
#define _INTTREG_VECNUM_LENGTH                   0x00000007

#define _INTTREG_ILR_POSITION                    0x00000008
#define _INTTREG_ILR_MASK                        0x00000F00
#define _INTTREG_ILR_LENGTH                      0x00000004

#define _INTTREG_VHOLD_POSITION                  0x0000000D
#define _INTTREG_VHOLD_MASK                      0x00002000
#define _INTTREG_VHOLD_LENGTH                    0x00000001

#define _INTTREG_CPUIRQ_POSITION                 0x0000000F
#define _INTTREG_CPUIRQ_MASK                     0x00008000
#define _INTTREG_CPUIRQ_LENGTH                   0x00000001

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

#define _T1CON_TECS_POSITION                     0x00000008
#define _T1CON_TECS_MASK                         0x00000300
#define _T1CON_TECS_LENGTH                       0x00000002

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

#define _T1CON_TECS0_POSITION                    0x00000008
#define _T1CON_TECS0_MASK                        0x00000100
#define _T1CON_TECS0_LENGTH                      0x00000001

#define _T1CON_TECS1_POSITION                    0x00000009
#define _T1CON_TECS1_MASK                        0x00000200
#define _T1CON_TECS1_LENGTH                      0x00000001

#define _T1CON_T1ECS_POSITION                    0x00000008
#define _T1CON_T1ECS_MASK                        0x00000300
#define _T1CON_T1ECS_LENGTH                      0x00000002

#define _T1CON_T1ECS0_POSITION                   0x00000008
#define _T1CON_T1ECS0_MASK                       0x00000100
#define _T1CON_T1ECS0_LENGTH                     0x00000001

#define _T1CON_T1ECS1_POSITION                   0x00000009
#define _T1CON_T1ECS1_MASK                       0x00000200
#define _T1CON_T1ECS1_LENGTH                     0x00000001

#define _T2CON_T2CKPS_POSITION                   0x00000000
#define _T2CON_T2CKPS_MASK                       0x00000003
#define _T2CON_T2CKPS_LENGTH                     0x00000002

#define _T2CON_TMR2ON_POSITION                   0x00000002
#define _T2CON_TMR2ON_MASK                       0x00000004
#define _T2CON_TMR2ON_LENGTH                     0x00000001

#define _T2CON_T2OUTPS_POSITION                  0x00000003
#define _T2CON_T2OUTPS_MASK                      0x00000078
#define _T2CON_T2OUTPS_LENGTH                    0x00000004

#define _T2CON_TCKPS_POSITION                    0x00000000
#define _T2CON_TCKPS_MASK                        0x00000003
#define _T2CON_TCKPS_LENGTH                      0x00000002

#define _T2CON_TON_POSITION                      0x00000002
#define _T2CON_TON_MASK                          0x00000004
#define _T2CON_TON_LENGTH                        0x00000001

#define _T2CON_TOUTPS_POSITION                   0x00000003
#define _T2CON_TOUTPS_MASK                       0x00000078
#define _T2CON_TOUTPS_LENGTH                     0x00000004

#define _T2CON_T2CKPS0_POSITION                  0x00000000
#define _T2CON_T2CKPS0_MASK                      0x00000001
#define _T2CON_T2CKPS0_LENGTH                    0x00000001

#define _T2CON_T2CKPS1_POSITION                  0x00000001
#define _T2CON_T2CKPS1_MASK                      0x00000002
#define _T2CON_T2CKPS1_LENGTH                    0x00000001

#define _T2CON_T2OUTPS0_POSITION                 0x00000003
#define _T2CON_T2OUTPS0_MASK                     0x00000008
#define _T2CON_T2OUTPS0_LENGTH                   0x00000001

#define _T2CON_T2OUTPS1_POSITION                 0x00000004
#define _T2CON_T2OUTPS1_MASK                     0x00000010
#define _T2CON_T2OUTPS1_LENGTH                   0x00000001

#define _T2CON_T2OUTPS2_POSITION                 0x00000005
#define _T2CON_T2OUTPS2_MASK                     0x00000020
#define _T2CON_T2OUTPS2_LENGTH                   0x00000001

#define _T2CON_T2OUTPS3_POSITION                 0x00000006
#define _T2CON_T2OUTPS3_MASK                     0x00000040
#define _T2CON_T2OUTPS3_LENGTH                   0x00000001

#define _T3GCON_T3GSS_POSITION                   0x00000000
#define _T3GCON_T3GSS_MASK                       0x00000003
#define _T3GCON_T3GSS_LENGTH                     0x00000002

#define _T3GCON_T3GVAL_POSITION                  0x00000002
#define _T3GCON_T3GVAL_MASK                      0x00000004
#define _T3GCON_T3GVAL_LENGTH                    0x00000001

#define _T3GCON_T3GGO_POSITION                   0x00000003
#define _T3GCON_T3GGO_MASK                       0x00000008
#define _T3GCON_T3GGO_LENGTH                     0x00000001

#define _T3GCON_T3GSPM_POSITION                  0x00000004
#define _T3GCON_T3GSPM_MASK                      0x00000010
#define _T3GCON_T3GSPM_LENGTH                    0x00000001

#define _T3GCON_T3GTM_POSITION                   0x00000005
#define _T3GCON_T3GTM_MASK                       0x00000020
#define _T3GCON_T3GTM_LENGTH                     0x00000001

#define _T3GCON_T3GPOL_POSITION                  0x00000006
#define _T3GCON_T3GPOL_MASK                      0x00000040
#define _T3GCON_T3GPOL_LENGTH                    0x00000001

#define _T3GCON_TMR3GE_POSITION                  0x00000007
#define _T3GCON_TMR3GE_MASK                      0x00000080
#define _T3GCON_TMR3GE_LENGTH                    0x00000001

#define _T3GCON_T3GSS0_POSITION                  0x00000000
#define _T3GCON_T3GSS0_MASK                      0x00000001
#define _T3GCON_T3GSS0_LENGTH                    0x00000001

#define _T3GCON_T3GSS1_POSITION                  0x00000001
#define _T3GCON_T3GSS1_MASK                      0x00000002
#define _T3GCON_T3GSS1_LENGTH                    0x00000001

#define _T3GCON_NOT_T3DONE_POSITION              0x00000003
#define _T3GCON_NOT_T3DONE_MASK                  0x00000008
#define _T3GCON_NOT_T3DONE_LENGTH                0x00000001

#define _T3GCON_TGSS_POSITION                    0x00000000
#define _T3GCON_TGSS_MASK                        0x00000003
#define _T3GCON_TGSS_LENGTH                      0x00000002

#define _T3GCON_TGVAL_POSITION                   0x00000002
#define _T3GCON_TGVAL_MASK                       0x00000004
#define _T3GCON_TGVAL_LENGTH                     0x00000001

#define _T3GCON_TGGO_POSITION                    0x00000003
#define _T3GCON_TGGO_MASK                        0x00000008
#define _T3GCON_TGGO_LENGTH                      0x00000001

#define _T3GCON_TGSE_POSITION                    0x00000004
#define _T3GCON_TGSE_MASK                        0x00000010
#define _T3GCON_TGSE_LENGTH                      0x00000001

#define _T3GCON_TGTM_POSITION                    0x00000005
#define _T3GCON_TGTM_MASK                        0x00000020
#define _T3GCON_TGTM_LENGTH                      0x00000001

#define _T3GCON_TGPOL_POSITION                   0x00000006
#define _T3GCON_TGPOL_MASK                       0x00000040
#define _T3GCON_TGPOL_LENGTH                     0x00000001

#define _T3GCON_TGATE_POSITION                   0x00000007
#define _T3GCON_TGATE_MASK                       0x00000080
#define _T3GCON_TGATE_LENGTH                     0x00000001

#define _T3CON_TMR3ON_POSITION                   0x00000000
#define _T3CON_TMR3ON_MASK                       0x00000001
#define _T3CON_TMR3ON_LENGTH                     0x00000001

#define _T3CON_NOT_T3SYNC_POSITION               0x00000002
#define _T3CON_NOT_T3SYNC_MASK                   0x00000004
#define _T3CON_NOT_T3SYNC_LENGTH                 0x00000001

#define _T3CON_T3OSCEN_POSITION                  0x00000003
#define _T3CON_T3OSCEN_MASK                      0x00000008
#define _T3CON_T3OSCEN_LENGTH                    0x00000001

#define _T3CON_T3CKPS_POSITION                   0x00000004
#define _T3CON_T3CKPS_MASK                       0x00000030
#define _T3CON_T3CKPS_LENGTH                     0x00000002

#define _T3CON_TMR3CS_POSITION                   0x00000006
#define _T3CON_TMR3CS_MASK                       0x000000C0
#define _T3CON_TMR3CS_LENGTH                     0x00000002

#define _T3CON_TON_POSITION                      0x00000000
#define _T3CON_TON_MASK                          0x00000001
#define _T3CON_TON_LENGTH                        0x00000001

#define _T3CON_NOT_TSYNC_POSITION                0x00000002
#define _T3CON_NOT_TSYNC_MASK                    0x00000004
#define _T3CON_NOT_TSYNC_LENGTH                  0x00000001

#define _T3CON_SOSCEN_POSITION                   0x00000003
#define _T3CON_SOSCEN_MASK                       0x00000008
#define _T3CON_SOSCEN_LENGTH                     0x00000001

#define _T3CON_TCKPS_POSITION                    0x00000004
#define _T3CON_TCKPS_MASK                        0x00000030
#define _T3CON_TCKPS_LENGTH                      0x00000002

#define _T3CON_TCS_POSITION                      0x00000006
#define _T3CON_TCS_MASK                          0x000000C0
#define _T3CON_TCS_LENGTH                        0x00000002

#define _T3CON_T3CKPS0_POSITION                  0x00000004
#define _T3CON_T3CKPS0_MASK                      0x00000010
#define _T3CON_T3CKPS0_LENGTH                    0x00000001

#define _T3CON_T3CKPS1_POSITION                  0x00000005
#define _T3CON_T3CKPS1_MASK                      0x00000020
#define _T3CON_T3CKPS1_LENGTH                    0x00000001

#define _T3CON_TMR3CS0_POSITION                  0x00000006
#define _T3CON_TMR3CS0_MASK                      0x00000040
#define _T3CON_TMR3CS0_LENGTH                    0x00000001

#define _T3CON_TMR3CS1_POSITION                  0x00000007
#define _T3CON_TMR3CS1_MASK                      0x00000080
#define _T3CON_TMR3CS1_LENGTH                    0x00000001

#define _T4CON_T4CKPS_POSITION                   0x00000000
#define _T4CON_T4CKPS_MASK                       0x00000003
#define _T4CON_T4CKPS_LENGTH                     0x00000002

#define _T4CON_TMR4ON_POSITION                   0x00000002
#define _T4CON_TMR4ON_MASK                       0x00000004
#define _T4CON_TMR4ON_LENGTH                     0x00000001

#define _T4CON_T4OUTPS_POSITION                  0x00000003
#define _T4CON_T4OUTPS_MASK                      0x00000078
#define _T4CON_T4OUTPS_LENGTH                    0x00000004

#define _T4CON_TCKPS_POSITION                    0x00000000
#define _T4CON_TCKPS_MASK                        0x00000003
#define _T4CON_TCKPS_LENGTH                      0x00000002

#define _T4CON_TON_POSITION                      0x00000002
#define _T4CON_TON_MASK                          0x00000004
#define _T4CON_TON_LENGTH                        0x00000001

#define _T4CON_TOUTPS_POSITION                   0x00000003
#define _T4CON_TOUTPS_MASK                       0x00000078
#define _T4CON_TOUTPS_LENGTH                     0x00000004

#define _T4CON_T4CKPS0_POSITION                  0x00000000
#define _T4CON_T4CKPS0_MASK                      0x00000001
#define _T4CON_T4CKPS0_LENGTH                    0x00000001

#define _T4CON_T4CKPS1_POSITION                  0x00000001
#define _T4CON_T4CKPS1_MASK                      0x00000002
#define _T4CON_T4CKPS1_LENGTH                    0x00000001

#define _T4CON_T4OUTPS0_POSITION                 0x00000003
#define _T4CON_T4OUTPS0_MASK                     0x00000008
#define _T4CON_T4OUTPS0_LENGTH                   0x00000001

#define _T4CON_T4OUTPS1_POSITION                 0x00000004
#define _T4CON_T4OUTPS1_MASK                     0x00000010
#define _T4CON_T4OUTPS1_LENGTH                   0x00000001

#define _T4CON_T4OUTPS2_POSITION                 0x00000005
#define _T4CON_T4OUTPS2_MASK                     0x00000020
#define _T4CON_T4OUTPS2_LENGTH                   0x00000001

#define _T4CON_T4OUTPS3_POSITION                 0x00000006
#define _T4CON_T4OUTPS3_MASK                     0x00000040
#define _T4CON_T4OUTPS3_LENGTH                   0x00000001

#define _CCPTMRS0_C1TSEL0_POSITION               0x00000000
#define _CCPTMRS0_C1TSEL0_MASK                   0x00000001
#define _CCPTMRS0_C1TSEL0_LENGTH                 0x00000001

#define _CCPTMRS0_C2TSEL0_POSITION               0x00000003
#define _CCPTMRS0_C2TSEL0_MASK                   0x00000008
#define _CCPTMRS0_C2TSEL0_LENGTH                 0x00000001

#define _CCPTMRS0_C3TSEL0_POSITION               0x00000006
#define _CCPTMRS0_C3TSEL0_MASK                   0x00000040
#define _CCPTMRS0_C3TSEL0_LENGTH                 0x00000001

#define _CCP1CON_CCPM_POSITION                   0x00000000
#define _CCP1CON_CCPM_MASK                       0x0000000F
#define _CCP1CON_CCPM_LENGTH                     0x00000004

#define _CCP1CON_DCB_POSITION                    0x00000004
#define _CCP1CON_DCB_MASK                        0x00000030
#define _CCP1CON_DCB_LENGTH                      0x00000002

#define _CCP1CON_PM_POSITION                     0x00000006
#define _CCP1CON_PM_MASK                         0x000000C0
#define _CCP1CON_PM_LENGTH                       0x00000002

#define _CCP1CON_CCPM0_POSITION                  0x00000000
#define _CCP1CON_CCPM0_MASK                      0x00000001
#define _CCP1CON_CCPM0_LENGTH                    0x00000001

#define _CCP1CON_CCPM1_POSITION                  0x00000001
#define _CCP1CON_CCPM1_MASK                      0x00000002
#define _CCP1CON_CCPM1_LENGTH                    0x00000001

#define _CCP1CON_CCPM2_POSITION                  0x00000002
#define _CCP1CON_CCPM2_MASK                      0x00000004
#define _CCP1CON_CCPM2_LENGTH                    0x00000001

#define _CCP1CON_CCPM3_POSITION                  0x00000003
#define _CCP1CON_CCPM3_MASK                      0x00000008
#define _CCP1CON_CCPM3_LENGTH                    0x00000001

#define _CCP1CON_DCB0_POSITION                   0x00000004
#define _CCP1CON_DCB0_MASK                       0x00000010
#define _CCP1CON_DCB0_LENGTH                     0x00000001

#define _CCP1CON_DCB1_POSITION                   0x00000005
#define _CCP1CON_DCB1_MASK                       0x00000020
#define _CCP1CON_DCB1_LENGTH                     0x00000001

#define _CCP1CON_PM0_POSITION                    0x00000006
#define _CCP1CON_PM0_MASK                        0x00000040
#define _CCP1CON_PM0_LENGTH                      0x00000001

#define _CCP1CON_PM1_POSITION                    0x00000007
#define _CCP1CON_PM1_MASK                        0x00000080
#define _CCP1CON_PM1_LENGTH                      0x00000001

#define _CCP1CON_CCP1M_POSITION                  0x00000000
#define _CCP1CON_CCP1M_MASK                      0x0000000F
#define _CCP1CON_CCP1M_LENGTH                    0x00000004

#define _CCP1CON_DC1B_POSITION                   0x00000004
#define _CCP1CON_DC1B_MASK                       0x00000030
#define _CCP1CON_DC1B_LENGTH                     0x00000002

#define _CCP1CON_P1M_POSITION                    0x00000006
#define _CCP1CON_P1M_MASK                        0x000000C0
#define _CCP1CON_P1M_LENGTH                      0x00000002

#define _CCP1CON_CCP1M0_POSITION                 0x00000000
#define _CCP1CON_CCP1M0_MASK                     0x00000001
#define _CCP1CON_CCP1M0_LENGTH                   0x00000001

#define _CCP1CON_CCP1M1_POSITION                 0x00000001
#define _CCP1CON_CCP1M1_MASK                     0x00000002
#define _CCP1CON_CCP1M1_LENGTH                   0x00000001

#define _CCP1CON_CCP1M2_POSITION                 0x00000002
#define _CCP1CON_CCP1M2_MASK                     0x00000004
#define _CCP1CON_CCP1M2_LENGTH                   0x00000001

#define _CCP1CON_CCP1M3_POSITION                 0x00000003
#define _CCP1CON_CCP1M3_MASK                     0x00000008
#define _CCP1CON_CCP1M3_LENGTH                   0x00000001

#define _CCP1CON_DC1B0_POSITION                  0x00000004
#define _CCP1CON_DC1B0_MASK                      0x00000010
#define _CCP1CON_DC1B0_LENGTH                    0x00000001

#define _CCP1CON_DC1B1_POSITION                  0x00000005
#define _CCP1CON_DC1B1_MASK                      0x00000020
#define _CCP1CON_DC1B1_LENGTH                    0x00000001

#define _CCP1CON_P1M0_POSITION                   0x00000006
#define _CCP1CON_P1M0_MASK                       0x00000040
#define _CCP1CON_P1M0_LENGTH                     0x00000001

#define _CCP1CON_P1M1_POSITION                   0x00000007
#define _CCP1CON_P1M1_MASK                       0x00000080
#define _CCP1CON_P1M1_LENGTH                     0x00000001

#define _ECCP1CON_CCPM_POSITION                  0x00000000
#define _ECCP1CON_CCPM_MASK                      0x0000000F
#define _ECCP1CON_CCPM_LENGTH                    0x00000004

#define _ECCP1CON_DCB_POSITION                   0x00000004
#define _ECCP1CON_DCB_MASK                       0x00000030
#define _ECCP1CON_DCB_LENGTH                     0x00000002

#define _ECCP1CON_PM_POSITION                    0x00000006
#define _ECCP1CON_PM_MASK                        0x000000C0
#define _ECCP1CON_PM_LENGTH                      0x00000002

#define _ECCP1CON_CCPM0_POSITION                 0x00000000
#define _ECCP1CON_CCPM0_MASK                     0x00000001
#define _ECCP1CON_CCPM0_LENGTH                   0x00000001

#define _ECCP1CON_CCPM1_POSITION                 0x00000001
#define _ECCP1CON_CCPM1_MASK                     0x00000002
#define _ECCP1CON_CCPM1_LENGTH                   0x00000001

#define _ECCP1CON_CCPM2_POSITION                 0x00000002
#define _ECCP1CON_CCPM2_MASK                     0x00000004
#define _ECCP1CON_CCPM2_LENGTH                   0x00000001

#define _ECCP1CON_CCPM3_POSITION                 0x00000003
#define _ECCP1CON_CCPM3_MASK                     0x00000008
#define _ECCP1CON_CCPM3_LENGTH                   0x00000001

#define _ECCP1CON_DCB0_POSITION                  0x00000004
#define _ECCP1CON_DCB0_MASK                      0x00000010
#define _ECCP1CON_DCB0_LENGTH                    0x00000001

#define _ECCP1CON_DCB1_POSITION                  0x00000005
#define _ECCP1CON_DCB1_MASK                      0x00000020
#define _ECCP1CON_DCB1_LENGTH                    0x00000001

#define _ECCP1CON_PM0_POSITION                   0x00000006
#define _ECCP1CON_PM0_MASK                       0x00000040
#define _ECCP1CON_PM0_LENGTH                     0x00000001

#define _ECCP1CON_PM1_POSITION                   0x00000007
#define _ECCP1CON_PM1_MASK                       0x00000080
#define _ECCP1CON_PM1_LENGTH                     0x00000001

#define _ECCP1CON_CCP1M_POSITION                 0x00000000
#define _ECCP1CON_CCP1M_MASK                     0x0000000F
#define _ECCP1CON_CCP1M_LENGTH                   0x00000004

#define _ECCP1CON_DC1B_POSITION                  0x00000004
#define _ECCP1CON_DC1B_MASK                      0x00000030
#define _ECCP1CON_DC1B_LENGTH                    0x00000002

#define _ECCP1CON_P1M_POSITION                   0x00000006
#define _ECCP1CON_P1M_MASK                       0x000000C0
#define _ECCP1CON_P1M_LENGTH                     0x00000002

#define _ECCP1CON_CCP1M0_POSITION                0x00000000
#define _ECCP1CON_CCP1M0_MASK                    0x00000001
#define _ECCP1CON_CCP1M0_LENGTH                  0x00000001

#define _ECCP1CON_CCP1M1_POSITION                0x00000001
#define _ECCP1CON_CCP1M1_MASK                    0x00000002
#define _ECCP1CON_CCP1M1_LENGTH                  0x00000001

#define _ECCP1CON_CCP1M2_POSITION                0x00000002
#define _ECCP1CON_CCP1M2_MASK                    0x00000004
#define _ECCP1CON_CCP1M2_LENGTH                  0x00000001

#define _ECCP1CON_CCP1M3_POSITION                0x00000003
#define _ECCP1CON_CCP1M3_MASK                    0x00000008
#define _ECCP1CON_CCP1M3_LENGTH                  0x00000001

#define _ECCP1CON_DC1B0_POSITION                 0x00000004
#define _ECCP1CON_DC1B0_MASK                     0x00000010
#define _ECCP1CON_DC1B0_LENGTH                   0x00000001

#define _ECCP1CON_DC1B1_POSITION                 0x00000005
#define _ECCP1CON_DC1B1_MASK                     0x00000020
#define _ECCP1CON_DC1B1_LENGTH                   0x00000001

#define _ECCP1CON_P1M0_POSITION                  0x00000006
#define _ECCP1CON_P1M0_MASK                      0x00000040
#define _ECCP1CON_P1M0_LENGTH                    0x00000001

#define _ECCP1CON_P1M1_POSITION                  0x00000007
#define _ECCP1CON_P1M1_MASK                      0x00000080
#define _ECCP1CON_P1M1_LENGTH                    0x00000001

#define _ECCP1DEL_PDC_POSITION                   0x00000000
#define _ECCP1DEL_PDC_MASK                       0x0000007F
#define _ECCP1DEL_PDC_LENGTH                     0x00000007

#define _ECCP1DEL_PRSEN_POSITION                 0x00000007
#define _ECCP1DEL_PRSEN_MASK                     0x00000080
#define _ECCP1DEL_PRSEN_LENGTH                   0x00000001

#define _ECCP1DEL_PDC0_POSITION                  0x00000000
#define _ECCP1DEL_PDC0_MASK                      0x00000001
#define _ECCP1DEL_PDC0_LENGTH                    0x00000001

#define _ECCP1DEL_PDC1_POSITION                  0x00000001
#define _ECCP1DEL_PDC1_MASK                      0x00000002
#define _ECCP1DEL_PDC1_LENGTH                    0x00000001

#define _ECCP1DEL_PDC2_POSITION                  0x00000002
#define _ECCP1DEL_PDC2_MASK                      0x00000004
#define _ECCP1DEL_PDC2_LENGTH                    0x00000001

#define _ECCP1DEL_PDC3_POSITION                  0x00000003
#define _ECCP1DEL_PDC3_MASK                      0x00000008
#define _ECCP1DEL_PDC3_LENGTH                    0x00000001

#define _ECCP1DEL_PDC4_POSITION                  0x00000004
#define _ECCP1DEL_PDC4_MASK                      0x00000010
#define _ECCP1DEL_PDC4_LENGTH                    0x00000001

#define _ECCP1DEL_PDC5_POSITION                  0x00000005
#define _ECCP1DEL_PDC5_MASK                      0x00000020
#define _ECCP1DEL_PDC5_LENGTH                    0x00000001

#define _ECCP1DEL_PDC6_POSITION                  0x00000006
#define _ECCP1DEL_PDC6_MASK                      0x00000040
#define _ECCP1DEL_PDC6_LENGTH                    0x00000001

#define _ECCP1DEL_P1DC_POSITION                  0x00000000
#define _ECCP1DEL_P1DC_MASK                      0x0000007F
#define _ECCP1DEL_P1DC_LENGTH                    0x00000007

#define _ECCP1DEL_P1RSEN_POSITION                0x00000007
#define _ECCP1DEL_P1RSEN_MASK                    0x00000080
#define _ECCP1DEL_P1RSEN_LENGTH                  0x00000001

#define _ECCP1DEL_P1DC0_POSITION                 0x00000000
#define _ECCP1DEL_P1DC0_MASK                     0x00000001
#define _ECCP1DEL_P1DC0_LENGTH                   0x00000001

#define _ECCP1DEL_P1DC1_POSITION                 0x00000001
#define _ECCP1DEL_P1DC1_MASK                     0x00000002
#define _ECCP1DEL_P1DC1_LENGTH                   0x00000001

#define _ECCP1DEL_P1DC2_POSITION                 0x00000002
#define _ECCP1DEL_P1DC2_MASK                     0x00000004
#define _ECCP1DEL_P1DC2_LENGTH                   0x00000001

#define _ECCP1DEL_P1DC3_POSITION                 0x00000003
#define _ECCP1DEL_P1DC3_MASK                     0x00000008
#define _ECCP1DEL_P1DC3_LENGTH                   0x00000001

#define _ECCP1DEL_P1DC4_POSITION                 0x00000004
#define _ECCP1DEL_P1DC4_MASK                     0x00000010
#define _ECCP1DEL_P1DC4_LENGTH                   0x00000001

#define _ECCP1DEL_P1DC5_POSITION                 0x00000005
#define _ECCP1DEL_P1DC5_MASK                     0x00000020
#define _ECCP1DEL_P1DC5_LENGTH                   0x00000001

#define _ECCP1DEL_P1DC6_POSITION                 0x00000006
#define _ECCP1DEL_P1DC6_MASK                     0x00000040
#define _ECCP1DEL_P1DC6_LENGTH                   0x00000001

#define _PWM1CON_PDC_POSITION                    0x00000000
#define _PWM1CON_PDC_MASK                        0x0000007F
#define _PWM1CON_PDC_LENGTH                      0x00000007

#define _PWM1CON_PRSEN_POSITION                  0x00000007
#define _PWM1CON_PRSEN_MASK                      0x00000080
#define _PWM1CON_PRSEN_LENGTH                    0x00000001

#define _PWM1CON_PDC0_POSITION                   0x00000000
#define _PWM1CON_PDC0_MASK                       0x00000001
#define _PWM1CON_PDC0_LENGTH                     0x00000001

#define _PWM1CON_PDC1_POSITION                   0x00000001
#define _PWM1CON_PDC1_MASK                       0x00000002
#define _PWM1CON_PDC1_LENGTH                     0x00000001

#define _PWM1CON_PDC2_POSITION                   0x00000002
#define _PWM1CON_PDC2_MASK                       0x00000004
#define _PWM1CON_PDC2_LENGTH                     0x00000001

#define _PWM1CON_PDC3_POSITION                   0x00000003
#define _PWM1CON_PDC3_MASK                       0x00000008
#define _PWM1CON_PDC3_LENGTH                     0x00000001

#define _PWM1CON_PDC4_POSITION                   0x00000004
#define _PWM1CON_PDC4_MASK                       0x00000010
#define _PWM1CON_PDC4_LENGTH                     0x00000001

#define _PWM1CON_PDC5_POSITION                   0x00000005
#define _PWM1CON_PDC5_MASK                       0x00000020
#define _PWM1CON_PDC5_LENGTH                     0x00000001

#define _PWM1CON_PDC6_POSITION                   0x00000006
#define _PWM1CON_PDC6_MASK                       0x00000040
#define _PWM1CON_PDC6_LENGTH                     0x00000001

#define _PWM1CON_P1DC_POSITION                   0x00000000
#define _PWM1CON_P1DC_MASK                       0x0000007F
#define _PWM1CON_P1DC_LENGTH                     0x00000007

#define _PWM1CON_P1RSEN_POSITION                 0x00000007
#define _PWM1CON_P1RSEN_MASK                     0x00000080
#define _PWM1CON_P1RSEN_LENGTH                   0x00000001

#define _PWM1CON_P1DC0_POSITION                  0x00000000
#define _PWM1CON_P1DC0_MASK                      0x00000001
#define _PWM1CON_P1DC0_LENGTH                    0x00000001

#define _PWM1CON_P1DC1_POSITION                  0x00000001
#define _PWM1CON_P1DC1_MASK                      0x00000002
#define _PWM1CON_P1DC1_LENGTH                    0x00000001

#define _PWM1CON_P1DC2_POSITION                  0x00000002
#define _PWM1CON_P1DC2_MASK                      0x00000004
#define _PWM1CON_P1DC2_LENGTH                    0x00000001

#define _PWM1CON_P1DC3_POSITION                  0x00000003
#define _PWM1CON_P1DC3_MASK                      0x00000008
#define _PWM1CON_P1DC3_LENGTH                    0x00000001

#define _PWM1CON_P1DC4_POSITION                  0x00000004
#define _PWM1CON_P1DC4_MASK                      0x00000010
#define _PWM1CON_P1DC4_LENGTH                    0x00000001

#define _PWM1CON_P1DC5_POSITION                  0x00000005
#define _PWM1CON_P1DC5_MASK                      0x00000020
#define _PWM1CON_P1DC5_LENGTH                    0x00000001

#define _PWM1CON_P1DC6_POSITION                  0x00000006
#define _PWM1CON_P1DC6_MASK                      0x00000040
#define _PWM1CON_P1DC6_LENGTH                    0x00000001

#define _ECCP1AS_PSSBD_POSITION                  0x00000000
#define _ECCP1AS_PSSBD_MASK                      0x00000003
#define _ECCP1AS_PSSBD_LENGTH                    0x00000002

#define _ECCP1AS_PSSAC_POSITION                  0x00000002
#define _ECCP1AS_PSSAC_MASK                      0x0000000C
#define _ECCP1AS_PSSAC_LENGTH                    0x00000002

#define _ECCP1AS_ECCPAS_POSITION                 0x00000004
#define _ECCP1AS_ECCPAS_MASK                     0x00000070
#define _ECCP1AS_ECCPAS_LENGTH                   0x00000003

#define _ECCP1AS_ECCPASE_POSITION                0x00000007
#define _ECCP1AS_ECCPASE_MASK                    0x00000080
#define _ECCP1AS_ECCPASE_LENGTH                  0x00000001

#define _ECCP1AS_PSSBD0_POSITION                 0x00000000
#define _ECCP1AS_PSSBD0_MASK                     0x00000001
#define _ECCP1AS_PSSBD0_LENGTH                   0x00000001

#define _ECCP1AS_PSSBD1_POSITION                 0x00000001
#define _ECCP1AS_PSSBD1_MASK                     0x00000002
#define _ECCP1AS_PSSBD1_LENGTH                   0x00000001

#define _ECCP1AS_PSSAC0_POSITION                 0x00000002
#define _ECCP1AS_PSSAC0_MASK                     0x00000004
#define _ECCP1AS_PSSAC0_LENGTH                   0x00000001

#define _ECCP1AS_PSSAC1_POSITION                 0x00000003
#define _ECCP1AS_PSSAC1_MASK                     0x00000008
#define _ECCP1AS_PSSAC1_LENGTH                   0x00000001

#define _ECCP1AS_ECCPAS0_POSITION                0x00000004
#define _ECCP1AS_ECCPAS0_MASK                    0x00000010
#define _ECCP1AS_ECCPAS0_LENGTH                  0x00000001

#define _ECCP1AS_ECCPAS1_POSITION                0x00000005
#define _ECCP1AS_ECCPAS1_MASK                    0x00000020
#define _ECCP1AS_ECCPAS1_LENGTH                  0x00000001

#define _ECCP1AS_ECCPAS2_POSITION                0x00000006
#define _ECCP1AS_ECCPAS2_MASK                    0x00000040
#define _ECCP1AS_ECCPAS2_LENGTH                  0x00000001

#define _ECCP1AS_PSS1BD_POSITION                 0x00000000
#define _ECCP1AS_PSS1BD_MASK                     0x00000003
#define _ECCP1AS_PSS1BD_LENGTH                   0x00000002

#define _ECCP1AS_PSS1AC_POSITION                 0x00000002
#define _ECCP1AS_PSS1AC_MASK                     0x0000000C
#define _ECCP1AS_PSS1AC_LENGTH                   0x00000002

#define _ECCP1AS_ECCP1AS_POSITION                0x00000004
#define _ECCP1AS_ECCP1AS_MASK                    0x00000070
#define _ECCP1AS_ECCP1AS_LENGTH                  0x00000003

#define _ECCP1AS_PSS1BD0_POSITION                0x00000000
#define _ECCP1AS_PSS1BD0_MASK                    0x00000001
#define _ECCP1AS_PSS1BD0_LENGTH                  0x00000001

#define _ECCP1AS_PSS1BD1_POSITION                0x00000001
#define _ECCP1AS_PSS1BD1_MASK                    0x00000002
#define _ECCP1AS_PSS1BD1_LENGTH                  0x00000001

#define _ECCP1AS_PSS1AC0_POSITION                0x00000002
#define _ECCP1AS_PSS1AC0_MASK                    0x00000004
#define _ECCP1AS_PSS1AC0_LENGTH                  0x00000001

#define _ECCP1AS_PSS1AC1_POSITION                0x00000003
#define _ECCP1AS_PSS1AC1_MASK                    0x00000008
#define _ECCP1AS_PSS1AC1_LENGTH                  0x00000001

#define _ECCP1AS_ECCP1AS0_POSITION               0x00000004
#define _ECCP1AS_ECCP1AS0_MASK                   0x00000010
#define _ECCP1AS_ECCP1AS0_LENGTH                 0x00000001

#define _ECCP1AS_ECCP1AS1_POSITION               0x00000005
#define _ECCP1AS_ECCP1AS1_MASK                   0x00000020
#define _ECCP1AS_ECCP1AS1_LENGTH                 0x00000001

#define _ECCP1AS_ECCP1AS2_POSITION               0x00000006
#define _ECCP1AS_ECCP1AS2_MASK                   0x00000040
#define _ECCP1AS_ECCP1AS2_LENGTH                 0x00000001

#define _PSTR1CON_STRA_POSITION                  0x00000000
#define _PSTR1CON_STRA_MASK                      0x00000001
#define _PSTR1CON_STRA_LENGTH                    0x00000001

#define _PSTR1CON_STRB_POSITION                  0x00000001
#define _PSTR1CON_STRB_MASK                      0x00000002
#define _PSTR1CON_STRB_LENGTH                    0x00000001

#define _PSTR1CON_STRC_POSITION                  0x00000002
#define _PSTR1CON_STRC_MASK                      0x00000004
#define _PSTR1CON_STRC_LENGTH                    0x00000001

#define _PSTR1CON_STRD_POSITION                  0x00000003
#define _PSTR1CON_STRD_MASK                      0x00000008
#define _PSTR1CON_STRD_LENGTH                    0x00000001

#define _PSTR1CON_STRSYNC_POSITION               0x00000004
#define _PSTR1CON_STRSYNC_MASK                   0x00000010
#define _PSTR1CON_STRSYNC_LENGTH                 0x00000001

#define _PSTR1CON_CMPL_POSITION                  0x00000006
#define _PSTR1CON_CMPL_MASK                      0x000000C0
#define _PSTR1CON_CMPL_LENGTH                    0x00000002

#define _PSTR1CON_CMPL0_POSITION                 0x00000006
#define _PSTR1CON_CMPL0_MASK                     0x00000040
#define _PSTR1CON_CMPL0_LENGTH                   0x00000001

#define _PSTR1CON_CMPL1_POSITION                 0x00000007
#define _PSTR1CON_CMPL1_MASK                     0x00000080
#define _PSTR1CON_CMPL1_LENGTH                   0x00000001

#define _CCP2CON_CCPM_POSITION                   0x00000000
#define _CCP2CON_CCPM_MASK                       0x0000000F
#define _CCP2CON_CCPM_LENGTH                     0x00000004

#define _CCP2CON_DCB_POSITION                    0x00000004
#define _CCP2CON_DCB_MASK                        0x00000030
#define _CCP2CON_DCB_LENGTH                      0x00000002

#define _CCP2CON_CCPM0_POSITION                  0x00000000
#define _CCP2CON_CCPM0_MASK                      0x00000001
#define _CCP2CON_CCPM0_LENGTH                    0x00000001

#define _CCP2CON_CCPM1_POSITION                  0x00000001
#define _CCP2CON_CCPM1_MASK                      0x00000002
#define _CCP2CON_CCPM1_LENGTH                    0x00000001

#define _CCP2CON_CCPM2_POSITION                  0x00000002
#define _CCP2CON_CCPM2_MASK                      0x00000004
#define _CCP2CON_CCPM2_LENGTH                    0x00000001

#define _CCP2CON_CCPM3_POSITION                  0x00000003
#define _CCP2CON_CCPM3_MASK                      0x00000008
#define _CCP2CON_CCPM3_LENGTH                    0x00000001

#define _CCP2CON_DCB0_POSITION                   0x00000004
#define _CCP2CON_DCB0_MASK                       0x00000010
#define _CCP2CON_DCB0_LENGTH                     0x00000001

#define _CCP2CON_DCB1_POSITION                   0x00000005
#define _CCP2CON_DCB1_MASK                       0x00000020
#define _CCP2CON_DCB1_LENGTH                     0x00000001

#define _CCP2CON_CCP2M_POSITION                  0x00000000
#define _CCP2CON_CCP2M_MASK                      0x0000000F
#define _CCP2CON_CCP2M_LENGTH                    0x00000004

#define _CCP2CON_DC2B_POSITION                   0x00000004
#define _CCP2CON_DC2B_MASK                       0x00000030
#define _CCP2CON_DC2B_LENGTH                     0x00000002

#define _CCP2CON_CCP2M0_POSITION                 0x00000000
#define _CCP2CON_CCP2M0_MASK                     0x00000001
#define _CCP2CON_CCP2M0_LENGTH                   0x00000001

#define _CCP2CON_CCP2M1_POSITION                 0x00000001
#define _CCP2CON_CCP2M1_MASK                     0x00000002
#define _CCP2CON_CCP2M1_LENGTH                   0x00000001

#define _CCP2CON_CCP2M2_POSITION                 0x00000002
#define _CCP2CON_CCP2M2_MASK                     0x00000004
#define _CCP2CON_CCP2M2_LENGTH                   0x00000001

#define _CCP2CON_CCP2M3_POSITION                 0x00000003
#define _CCP2CON_CCP2M3_MASK                     0x00000008
#define _CCP2CON_CCP2M3_LENGTH                   0x00000001

#define _CCP2CON_DC2B0_POSITION                  0x00000004
#define _CCP2CON_DC2B0_MASK                      0x00000010
#define _CCP2CON_DC2B0_LENGTH                    0x00000001

#define _CCP2CON_DC2B1_POSITION                  0x00000005
#define _CCP2CON_DC2B1_MASK                      0x00000020
#define _CCP2CON_DC2B1_LENGTH                    0x00000001

#define _CCP3CON_CCPM_POSITION                   0x00000000
#define _CCP3CON_CCPM_MASK                       0x0000000F
#define _CCP3CON_CCPM_LENGTH                     0x00000004

#define _CCP3CON_DCB_POSITION                    0x00000004
#define _CCP3CON_DCB_MASK                        0x00000030
#define _CCP3CON_DCB_LENGTH                      0x00000002

#define _CCP3CON_CCPM0_POSITION                  0x00000000
#define _CCP3CON_CCPM0_MASK                      0x00000001
#define _CCP3CON_CCPM0_LENGTH                    0x00000001

#define _CCP3CON_CCPM1_POSITION                  0x00000001
#define _CCP3CON_CCPM1_MASK                      0x00000002
#define _CCP3CON_CCPM1_LENGTH                    0x00000001

#define _CCP3CON_CCPM2_POSITION                  0x00000002
#define _CCP3CON_CCPM2_MASK                      0x00000004
#define _CCP3CON_CCPM2_LENGTH                    0x00000001

#define _CCP3CON_CCPM3_POSITION                  0x00000003
#define _CCP3CON_CCPM3_MASK                      0x00000008
#define _CCP3CON_CCPM3_LENGTH                    0x00000001

#define _CCP3CON_DCB0_POSITION                   0x00000004
#define _CCP3CON_DCB0_MASK                       0x00000010
#define _CCP3CON_DCB0_LENGTH                     0x00000001

#define _CCP3CON_DCB1_POSITION                   0x00000005
#define _CCP3CON_DCB1_MASK                       0x00000020
#define _CCP3CON_DCB1_LENGTH                     0x00000001

#define _CCP3CON_CCP3M_POSITION                  0x00000000
#define _CCP3CON_CCP3M_MASK                      0x0000000F
#define _CCP3CON_CCP3M_LENGTH                    0x00000004

#define _CCP3CON_DC3B_POSITION                   0x00000004
#define _CCP3CON_DC3B_MASK                       0x00000030
#define _CCP3CON_DC3B_LENGTH                     0x00000002

#define _CCP3CON_CCP3M0_POSITION                 0x00000000
#define _CCP3CON_CCP3M0_MASK                     0x00000001
#define _CCP3CON_CCP3M0_LENGTH                   0x00000001

#define _CCP3CON_CCP3M1_POSITION                 0x00000001
#define _CCP3CON_CCP3M1_MASK                     0x00000002
#define _CCP3CON_CCP3M1_LENGTH                   0x00000001

#define _CCP3CON_CCP3M2_POSITION                 0x00000002
#define _CCP3CON_CCP3M2_MASK                     0x00000004
#define _CCP3CON_CCP3M2_LENGTH                   0x00000001

#define _CCP3CON_CCP3M3_POSITION                 0x00000003
#define _CCP3CON_CCP3M3_MASK                     0x00000008
#define _CCP3CON_CCP3M3_LENGTH                   0x00000001

#define _CCP3CON_DC3B0_POSITION                  0x00000004
#define _CCP3CON_DC3B0_MASK                      0x00000010
#define _CCP3CON_DC3B0_LENGTH                    0x00000001

#define _CCP3CON_DC3B1_POSITION                  0x00000005
#define _CCP3CON_DC3B1_MASK                      0x00000020
#define _CCP3CON_DC3B1_LENGTH                    0x00000001

#define _SPI1BUF_SSPBUF_POSITION                 0x00000000
#define _SPI1BUF_SSPBUF_MASK                     0x000000FF
#define _SPI1BUF_SSPBUF_LENGTH                   0x00000008

#define _SPI1BUF_SPI1BUF_POSITION                0x00000000
#define _SPI1BUF_SPI1BUF_MASK                    0x000000FF
#define _SPI1BUF_SPI1BUF_LENGTH                  0x00000008

#define _SSP1BUF_SSPBUF_POSITION                 0x00000000
#define _SSP1BUF_SSPBUF_MASK                     0x000000FF
#define _SSP1BUF_SSPBUF_LENGTH                   0x00000008

#define _SSP1BUF_SPI1BUF_POSITION                0x00000000
#define _SSP1BUF_SPI1BUF_MASK                    0x000000FF
#define _SSP1BUF_SPI1BUF_LENGTH                  0x00000008

#define _SSP1CON1_SSPM_POSITION                  0x00000000
#define _SSP1CON1_SSPM_MASK                      0x0000000F
#define _SSP1CON1_SSPM_LENGTH                    0x00000004

#define _SSP1CON1_CKP_POSITION                   0x00000004
#define _SSP1CON1_CKP_MASK                       0x00000010
#define _SSP1CON1_CKP_LENGTH                     0x00000001

#define _SSP1CON1_SSPEN_POSITION                 0x00000005
#define _SSP1CON1_SSPEN_MASK                     0x00000020
#define _SSP1CON1_SSPEN_LENGTH                   0x00000001

#define _SSP1CON1_SSPOV_POSITION                 0x00000006
#define _SSP1CON1_SSPOV_MASK                     0x00000040
#define _SSP1CON1_SSPOV_LENGTH                   0x00000001

#define _SSP1CON1_WCOL_POSITION                  0x00000007
#define _SSP1CON1_WCOL_MASK                      0x00000080
#define _SSP1CON1_WCOL_LENGTH                    0x00000001

#define _SSP1CON1_SSPM0_POSITION                 0x00000000
#define _SSP1CON1_SSPM0_MASK                     0x00000001
#define _SSP1CON1_SSPM0_LENGTH                   0x00000001

#define _SSP1CON1_SSPM1_POSITION                 0x00000001
#define _SSP1CON1_SSPM1_MASK                     0x00000002
#define _SSP1CON1_SSPM1_LENGTH                   0x00000001

#define _SSP1CON1_SSPM2_POSITION                 0x00000002
#define _SSP1CON1_SSPM2_MASK                     0x00000004
#define _SSP1CON1_SSPM2_LENGTH                   0x00000001

#define _SSP1CON1_SSPM3_POSITION                 0x00000003
#define _SSP1CON1_SSPM3_MASK                     0x00000008
#define _SSP1CON1_SSPM3_LENGTH                   0x00000001

#define _SSP1CON2_SEN_POSITION                   0x00000000
#define _SSP1CON2_SEN_MASK                       0x00000001
#define _SSP1CON2_SEN_LENGTH                     0x00000001

#define _SSP1CON2_RSEN_POSITION                  0x00000001
#define _SSP1CON2_RSEN_MASK                      0x00000002
#define _SSP1CON2_RSEN_LENGTH                    0x00000001

#define _SSP1CON2_PEN_POSITION                   0x00000002
#define _SSP1CON2_PEN_MASK                       0x00000004
#define _SSP1CON2_PEN_LENGTH                     0x00000001

#define _SSP1CON2_RCEN_POSITION                  0x00000003
#define _SSP1CON2_RCEN_MASK                      0x00000008
#define _SSP1CON2_RCEN_LENGTH                    0x00000001

#define _SSP1CON2_ACKEN_POSITION                 0x00000004
#define _SSP1CON2_ACKEN_MASK                     0x00000010
#define _SSP1CON2_ACKEN_LENGTH                   0x00000001

#define _SSP1CON2_ACKDT_POSITION                 0x00000005
#define _SSP1CON2_ACKDT_MASK                     0x00000020
#define _SSP1CON2_ACKDT_LENGTH                   0x00000001

#define _SSP1CON2_ACKSTAT_POSITION               0x00000006
#define _SSP1CON2_ACKSTAT_MASK                   0x00000040
#define _SSP1CON2_ACKSTAT_LENGTH                 0x00000001

#define _SSP1CON2_GCEN_POSITION                  0x00000007
#define _SSP1CON2_GCEN_MASK                      0x00000080
#define _SSP1CON2_GCEN_LENGTH                    0x00000001

#define _SSP1CON2_ADMSK_POSITION                 0x00000001
#define _SSP1CON2_ADMSK_MASK                     0x0000003E
#define _SSP1CON2_ADMSK_LENGTH                   0x00000005

#define _SSP1CON2_ADMSK1_POSITION                0x00000001
#define _SSP1CON2_ADMSK1_MASK                    0x00000002
#define _SSP1CON2_ADMSK1_LENGTH                  0x00000001

#define _SSP1CON2_ADMSK2_POSITION                0x00000002
#define _SSP1CON2_ADMSK2_MASK                    0x00000004
#define _SSP1CON2_ADMSK2_LENGTH                  0x00000001

#define _SSP1CON2_ADMSK3_POSITION                0x00000003
#define _SSP1CON2_ADMSK3_MASK                    0x00000008
#define _SSP1CON2_ADMSK3_LENGTH                  0x00000001

#define _SSP1CON2_ADMSK4_POSITION                0x00000004
#define _SSP1CON2_ADMSK4_MASK                    0x00000010
#define _SSP1CON2_ADMSK4_LENGTH                  0x00000001

#define _SSP1CON2_ADMSK5_POSITION                0x00000005
#define _SSP1CON2_ADMSK5_MASK                    0x00000020
#define _SSP1CON2_ADMSK5_LENGTH                  0x00000001

#define _SSP1CON3_DHEN_POSITION                  0x00000000
#define _SSP1CON3_DHEN_MASK                      0x00000001
#define _SSP1CON3_DHEN_LENGTH                    0x00000001

#define _SSP1CON3_AHEN_POSITION                  0x00000001
#define _SSP1CON3_AHEN_MASK                      0x00000002
#define _SSP1CON3_AHEN_LENGTH                    0x00000001

#define _SSP1CON3_SBCDE_POSITION                 0x00000002
#define _SSP1CON3_SBCDE_MASK                     0x00000004
#define _SSP1CON3_SBCDE_LENGTH                   0x00000001

#define _SSP1CON3_SDAHT_POSITION                 0x00000003
#define _SSP1CON3_SDAHT_MASK                     0x00000008
#define _SSP1CON3_SDAHT_LENGTH                   0x00000001

#define _SSP1CON3_BOEN_POSITION                  0x00000004
#define _SSP1CON3_BOEN_MASK                      0x00000010
#define _SSP1CON3_BOEN_LENGTH                    0x00000001

#define _SSP1CON3_SCIE_POSITION                  0x00000005
#define _SSP1CON3_SCIE_MASK                      0x00000020
#define _SSP1CON3_SCIE_LENGTH                    0x00000001

#define _SSP1CON3_PCIE_POSITION                  0x00000006
#define _SSP1CON3_PCIE_MASK                      0x00000040
#define _SSP1CON3_PCIE_LENGTH                    0x00000001

#define _SSP1CON3_ACKTIM_POSITION                0x00000007
#define _SSP1CON3_ACKTIM_MASK                    0x00000080
#define _SSP1CON3_ACKTIM_LENGTH                  0x00000001

#define _SSP1STAT_BF_POSITION                    0x00000000
#define _SSP1STAT_BF_MASK                        0x00000001
#define _SSP1STAT_BF_LENGTH                      0x00000001

#define _SSP1STAT_UA_POSITION                    0x00000001
#define _SSP1STAT_UA_MASK                        0x00000002
#define _SSP1STAT_UA_LENGTH                      0x00000001

#define _SSP1STAT_R_NOT_W_POSITION               0x00000002
#define _SSP1STAT_R_NOT_W_MASK                   0x00000004
#define _SSP1STAT_R_NOT_W_LENGTH                 0x00000001

#define _SSP1STAT_S_POSITION                     0x00000003
#define _SSP1STAT_S_MASK                         0x00000008
#define _SSP1STAT_S_LENGTH                       0x00000001

#define _SSP1STAT_P_POSITION                     0x00000004
#define _SSP1STAT_P_MASK                         0x00000010
#define _SSP1STAT_P_LENGTH                       0x00000001

#define _SSP1STAT_D_NOT_A_POSITION               0x00000005
#define _SSP1STAT_D_NOT_A_MASK                   0x00000020
#define _SSP1STAT_D_NOT_A_LENGTH                 0x00000001

#define _SSP1STAT_CKE_POSITION                   0x00000006
#define _SSP1STAT_CKE_MASK                       0x00000040
#define _SSP1STAT_CKE_LENGTH                     0x00000001

#define _SSP1STAT_SMP_POSITION                   0x00000007
#define _SSP1STAT_SMP_MASK                       0x00000080
#define _SSP1STAT_SMP_LENGTH                     0x00000001

#define _SSP1STAT_R_W_POSITION                   0x00000002
#define _SSP1STAT_R_W_MASK                       0x00000004
#define _SSP1STAT_R_W_LENGTH                     0x00000001

#define _SSP1STAT_D_A_POSITION                   0x00000005
#define _SSP1STAT_D_A_MASK                       0x00000020
#define _SSP1STAT_D_A_LENGTH                     0x00000001

#define _SSP1STAT_NOT_W_POSITION                 0x00000002
#define _SSP1STAT_NOT_W_MASK                     0x00000004
#define _SSP1STAT_NOT_W_LENGTH                   0x00000001

#define _SSP1STAT_NOT_A_POSITION                 0x00000005
#define _SSP1STAT_NOT_A_MASK                     0x00000020
#define _SSP1STAT_NOT_A_LENGTH                   0x00000001

#define _SSP1STAT_NOT_WRITE_POSITION             0x00000002
#define _SSP1STAT_NOT_WRITE_MASK                 0x00000004
#define _SSP1STAT_NOT_WRITE_LENGTH               0x00000001

#define _SSP1STAT_NOT_ADDRESS_POSITION           0x00000005
#define _SSP1STAT_NOT_ADDRESS_MASK               0x00000020
#define _SSP1STAT_NOT_ADDRESS_LENGTH             0x00000001

#define _SSP1STAT_READ_WRITE_POSITION            0x00000002
#define _SSP1STAT_READ_WRITE_MASK                0x00000004
#define _SSP1STAT_READ_WRITE_LENGTH              0x00000001

#define _SSP1STAT_DATA_ADDRESS_POSITION          0x00000005
#define _SSP1STAT_DATA_ADDRESS_MASK              0x00000020
#define _SSP1STAT_DATA_ADDRESS_LENGTH            0x00000001

#define _SSP1STAT_I2C_READ_POSITION              0x00000002
#define _SSP1STAT_I2C_READ_MASK                  0x00000004
#define _SSP1STAT_I2C_READ_LENGTH                0x00000001

#define _SSP1STAT_I2C_START_POSITION             0x00000003
#define _SSP1STAT_I2C_START_MASK                 0x00000008
#define _SSP1STAT_I2C_START_LENGTH               0x00000001

#define _SSP1STAT_I2C_STOP_POSITION              0x00000004
#define _SSP1STAT_I2C_STOP_MASK                  0x00000010
#define _SSP1STAT_I2C_STOP_LENGTH                0x00000001

#define _SSP1STAT_I2C_DAT_POSITION               0x00000005
#define _SSP1STAT_I2C_DAT_MASK                   0x00000020
#define _SSP1STAT_I2C_DAT_LENGTH                 0x00000001

#define _I2C1ADD_SSPADD_POSITION                 0x00000000
#define _I2C1ADD_SSPADD_MASK                     0x000000FF
#define _I2C1ADD_SSPADD_LENGTH                   0x00000008

#define _I2C1ADD_I2CADD_POSITION                 0x00000000
#define _I2C1ADD_I2CADD_MASK                     0x000000FF
#define _I2C1ADD_I2CADD_LENGTH                   0x00000008

#define _SSP1ADD_SSPADD_POSITION                 0x00000000
#define _SSP1ADD_SSPADD_MASK                     0x000000FF
#define _SSP1ADD_SSPADD_LENGTH                   0x00000008

#define _SSP1ADD_I2CADD_POSITION                 0x00000000
#define _SSP1ADD_I2CADD_MASK                     0x000000FF
#define _SSP1ADD_I2CADD_LENGTH                   0x00000008

#define _I2C1MSK_MSK0_POSITION                   0x00000000
#define _I2C1MSK_MSK0_MASK                       0x00000001
#define _I2C1MSK_MSK0_LENGTH                     0x00000001

#define _I2C1MSK_MSK1_POSITION                   0x00000001
#define _I2C1MSK_MSK1_MASK                       0x00000002
#define _I2C1MSK_MSK1_LENGTH                     0x00000001

#define _I2C1MSK_MSK2_POSITION                   0x00000002
#define _I2C1MSK_MSK2_MASK                       0x00000004
#define _I2C1MSK_MSK2_LENGTH                     0x00000001

#define _I2C1MSK_MSK3_POSITION                   0x00000003
#define _I2C1MSK_MSK3_MASK                       0x00000008
#define _I2C1MSK_MSK3_LENGTH                     0x00000001

#define _I2C1MSK_MSK4_POSITION                   0x00000004
#define _I2C1MSK_MSK4_MASK                       0x00000010
#define _I2C1MSK_MSK4_LENGTH                     0x00000001

#define _I2C1MSK_MSK5_POSITION                   0x00000005
#define _I2C1MSK_MSK5_MASK                       0x00000020
#define _I2C1MSK_MSK5_LENGTH                     0x00000001

#define _I2C1MSK_MSK6_POSITION                   0x00000006
#define _I2C1MSK_MSK6_MASK                       0x00000040
#define _I2C1MSK_MSK6_LENGTH                     0x00000001

#define _I2C1MSK_MSK7_POSITION                   0x00000007
#define _I2C1MSK_MSK7_MASK                       0x00000080
#define _I2C1MSK_MSK7_LENGTH                     0x00000001

#define _I2C1MSK_AMSK_POSITION                   0x00000000
#define _I2C1MSK_AMSK_MASK                       0x000000FF
#define _I2C1MSK_AMSK_LENGTH                     0x00000008

#define _SSP1MSK_MSK0_POSITION                   0x00000000
#define _SSP1MSK_MSK0_MASK                       0x00000001
#define _SSP1MSK_MSK0_LENGTH                     0x00000001

#define _SSP1MSK_MSK1_POSITION                   0x00000001
#define _SSP1MSK_MSK1_MASK                       0x00000002
#define _SSP1MSK_MSK1_LENGTH                     0x00000001

#define _SSP1MSK_MSK2_POSITION                   0x00000002
#define _SSP1MSK_MSK2_MASK                       0x00000004
#define _SSP1MSK_MSK2_LENGTH                     0x00000001

#define _SSP1MSK_MSK3_POSITION                   0x00000003
#define _SSP1MSK_MSK3_MASK                       0x00000008
#define _SSP1MSK_MSK3_LENGTH                     0x00000001

#define _SSP1MSK_MSK4_POSITION                   0x00000004
#define _SSP1MSK_MSK4_MASK                       0x00000010
#define _SSP1MSK_MSK4_LENGTH                     0x00000001

#define _SSP1MSK_MSK5_POSITION                   0x00000005
#define _SSP1MSK_MSK5_MASK                       0x00000020
#define _SSP1MSK_MSK5_LENGTH                     0x00000001

#define _SSP1MSK_MSK6_POSITION                   0x00000006
#define _SSP1MSK_MSK6_MASK                       0x00000040
#define _SSP1MSK_MSK6_LENGTH                     0x00000001

#define _SSP1MSK_MSK7_POSITION                   0x00000007
#define _SSP1MSK_MSK7_MASK                       0x00000080
#define _SSP1MSK_MSK7_LENGTH                     0x00000001

#define _SSP1MSK_AMSK_POSITION                   0x00000000
#define _SSP1MSK_AMSK_MASK                       0x000000FF
#define _SSP1MSK_AMSK_LENGTH                     0x00000008

#define _SPI2BUF_SSPBUF_POSITION                 0x00000000
#define _SPI2BUF_SSPBUF_MASK                     0x000000FF
#define _SPI2BUF_SSPBUF_LENGTH                   0x00000008

#define _SPI2BUF_SPI2BUF_POSITION                0x00000000
#define _SPI2BUF_SPI2BUF_MASK                    0x000000FF
#define _SPI2BUF_SPI2BUF_LENGTH                  0x00000008

#define _SSP2BUF_SSPBUF_POSITION                 0x00000000
#define _SSP2BUF_SSPBUF_MASK                     0x000000FF
#define _SSP2BUF_SSPBUF_LENGTH                   0x00000008

#define _SSP2BUF_SPI2BUF_POSITION                0x00000000
#define _SSP2BUF_SPI2BUF_MASK                    0x000000FF
#define _SSP2BUF_SPI2BUF_LENGTH                  0x00000008

#define _SSP2CON1_SSPM_POSITION                  0x00000000
#define _SSP2CON1_SSPM_MASK                      0x0000000F
#define _SSP2CON1_SSPM_LENGTH                    0x00000004

#define _SSP2CON1_CKP_POSITION                   0x00000004
#define _SSP2CON1_CKP_MASK                       0x00000010
#define _SSP2CON1_CKP_LENGTH                     0x00000001

#define _SSP2CON1_SSPEN_POSITION                 0x00000005
#define _SSP2CON1_SSPEN_MASK                     0x00000020
#define _SSP2CON1_SSPEN_LENGTH                   0x00000001

#define _SSP2CON1_SSPOV_POSITION                 0x00000006
#define _SSP2CON1_SSPOV_MASK                     0x00000040
#define _SSP2CON1_SSPOV_LENGTH                   0x00000001

#define _SSP2CON1_WCOL_POSITION                  0x00000007
#define _SSP2CON1_WCOL_MASK                      0x00000080
#define _SSP2CON1_WCOL_LENGTH                    0x00000001

#define _SSP2CON1_SSPM0_POSITION                 0x00000000
#define _SSP2CON1_SSPM0_MASK                     0x00000001
#define _SSP2CON1_SSPM0_LENGTH                   0x00000001

#define _SSP2CON1_SSPM1_POSITION                 0x00000001
#define _SSP2CON1_SSPM1_MASK                     0x00000002
#define _SSP2CON1_SSPM1_LENGTH                   0x00000001

#define _SSP2CON1_SSPM2_POSITION                 0x00000002
#define _SSP2CON1_SSPM2_MASK                     0x00000004
#define _SSP2CON1_SSPM2_LENGTH                   0x00000001

#define _SSP2CON1_SSPM3_POSITION                 0x00000003
#define _SSP2CON1_SSPM3_MASK                     0x00000008
#define _SSP2CON1_SSPM3_LENGTH                   0x00000001

#define _SSP2CON2_SEN_POSITION                   0x00000000
#define _SSP2CON2_SEN_MASK                       0x00000001
#define _SSP2CON2_SEN_LENGTH                     0x00000001

#define _SSP2CON2_RSEN_POSITION                  0x00000001
#define _SSP2CON2_RSEN_MASK                      0x00000002
#define _SSP2CON2_RSEN_LENGTH                    0x00000001

#define _SSP2CON2_PEN_POSITION                   0x00000002
#define _SSP2CON2_PEN_MASK                       0x00000004
#define _SSP2CON2_PEN_LENGTH                     0x00000001

#define _SSP2CON2_RCEN_POSITION                  0x00000003
#define _SSP2CON2_RCEN_MASK                      0x00000008
#define _SSP2CON2_RCEN_LENGTH                    0x00000001

#define _SSP2CON2_ACKEN_POSITION                 0x00000004
#define _SSP2CON2_ACKEN_MASK                     0x00000010
#define _SSP2CON2_ACKEN_LENGTH                   0x00000001

#define _SSP2CON2_ACKDT_POSITION                 0x00000005
#define _SSP2CON2_ACKDT_MASK                     0x00000020
#define _SSP2CON2_ACKDT_LENGTH                   0x00000001

#define _SSP2CON2_ACKSTAT_POSITION               0x00000006
#define _SSP2CON2_ACKSTAT_MASK                   0x00000040
#define _SSP2CON2_ACKSTAT_LENGTH                 0x00000001

#define _SSP2CON2_GCEN_POSITION                  0x00000007
#define _SSP2CON2_GCEN_MASK                      0x00000080
#define _SSP2CON2_GCEN_LENGTH                    0x00000001

#define _SSP2CON2_ADMSK_POSITION                 0x00000001
#define _SSP2CON2_ADMSK_MASK                     0x0000003E
#define _SSP2CON2_ADMSK_LENGTH                   0x00000005

#define _SSP2CON2_ADMSK1_POSITION                0x00000001
#define _SSP2CON2_ADMSK1_MASK                    0x00000002
#define _SSP2CON2_ADMSK1_LENGTH                  0x00000001

#define _SSP2CON2_ADMSK2_POSITION                0x00000002
#define _SSP2CON2_ADMSK2_MASK                    0x00000004
#define _SSP2CON2_ADMSK2_LENGTH                  0x00000001

#define _SSP2CON2_ADMSK3_POSITION                0x00000003
#define _SSP2CON2_ADMSK3_MASK                    0x00000008
#define _SSP2CON2_ADMSK3_LENGTH                  0x00000001

#define _SSP2CON2_ADMSK4_POSITION                0x00000004
#define _SSP2CON2_ADMSK4_MASK                    0x00000010
#define _SSP2CON2_ADMSK4_LENGTH                  0x00000001

#define _SSP2CON2_ADMSK5_POSITION                0x00000005
#define _SSP2CON2_ADMSK5_MASK                    0x00000020
#define _SSP2CON2_ADMSK5_LENGTH                  0x00000001

#define _SSP2CON3_DHEN_POSITION                  0x00000000
#define _SSP2CON3_DHEN_MASK                      0x00000001
#define _SSP2CON3_DHEN_LENGTH                    0x00000001

#define _SSP2CON3_AHEN_POSITION                  0x00000001
#define _SSP2CON3_AHEN_MASK                      0x00000002
#define _SSP2CON3_AHEN_LENGTH                    0x00000001

#define _SSP2CON3_SBCDE_POSITION                 0x00000002
#define _SSP2CON3_SBCDE_MASK                     0x00000004
#define _SSP2CON3_SBCDE_LENGTH                   0x00000001

#define _SSP2CON3_SDAHT_POSITION                 0x00000003
#define _SSP2CON3_SDAHT_MASK                     0x00000008
#define _SSP2CON3_SDAHT_LENGTH                   0x00000001

#define _SSP2CON3_BOEN_POSITION                  0x00000004
#define _SSP2CON3_BOEN_MASK                      0x00000010
#define _SSP2CON3_BOEN_LENGTH                    0x00000001

#define _SSP2CON3_SCIE_POSITION                  0x00000005
#define _SSP2CON3_SCIE_MASK                      0x00000020
#define _SSP2CON3_SCIE_LENGTH                    0x00000001

#define _SSP2CON3_PCIE_POSITION                  0x00000006
#define _SSP2CON3_PCIE_MASK                      0x00000040
#define _SSP2CON3_PCIE_LENGTH                    0x00000001

#define _SSP2CON3_ACKTIM_POSITION                0x00000007
#define _SSP2CON3_ACKTIM_MASK                    0x00000080
#define _SSP2CON3_ACKTIM_LENGTH                  0x00000001

#define _SSP2STAT_BF_POSITION                    0x00000000
#define _SSP2STAT_BF_MASK                        0x00000001
#define _SSP2STAT_BF_LENGTH                      0x00000001

#define _SSP2STAT_UA_POSITION                    0x00000001
#define _SSP2STAT_UA_MASK                        0x00000002
#define _SSP2STAT_UA_LENGTH                      0x00000001

#define _SSP2STAT_R_NOT_W_POSITION               0x00000002
#define _SSP2STAT_R_NOT_W_MASK                   0x00000004
#define _SSP2STAT_R_NOT_W_LENGTH                 0x00000001

#define _SSP2STAT_S_POSITION                     0x00000003
#define _SSP2STAT_S_MASK                         0x00000008
#define _SSP2STAT_S_LENGTH                       0x00000001

#define _SSP2STAT_P_POSITION                     0x00000004
#define _SSP2STAT_P_MASK                         0x00000010
#define _SSP2STAT_P_LENGTH                       0x00000001

#define _SSP2STAT_D_NOT_A_POSITION               0x00000005
#define _SSP2STAT_D_NOT_A_MASK                   0x00000020
#define _SSP2STAT_D_NOT_A_LENGTH                 0x00000001

#define _SSP2STAT_CKE_POSITION                   0x00000006
#define _SSP2STAT_CKE_MASK                       0x00000040
#define _SSP2STAT_CKE_LENGTH                     0x00000001

#define _SSP2STAT_SMP_POSITION                   0x00000007
#define _SSP2STAT_SMP_MASK                       0x00000080
#define _SSP2STAT_SMP_LENGTH                     0x00000001

#define _SSP2STAT_R_W_POSITION                   0x00000002
#define _SSP2STAT_R_W_MASK                       0x00000004
#define _SSP2STAT_R_W_LENGTH                     0x00000001

#define _SSP2STAT_D_A_POSITION                   0x00000005
#define _SSP2STAT_D_A_MASK                       0x00000020
#define _SSP2STAT_D_A_LENGTH                     0x00000001

#define _SSP2STAT_NOT_W_POSITION                 0x00000002
#define _SSP2STAT_NOT_W_MASK                     0x00000004
#define _SSP2STAT_NOT_W_LENGTH                   0x00000001

#define _SSP2STAT_NOT_A_POSITION                 0x00000005
#define _SSP2STAT_NOT_A_MASK                     0x00000020
#define _SSP2STAT_NOT_A_LENGTH                   0x00000001

#define _SSP2STAT_NOT_WRITE_POSITION             0x00000002
#define _SSP2STAT_NOT_WRITE_MASK                 0x00000004
#define _SSP2STAT_NOT_WRITE_LENGTH               0x00000001

#define _SSP2STAT_NOT_ADDRESS_POSITION           0x00000005
#define _SSP2STAT_NOT_ADDRESS_MASK               0x00000020
#define _SSP2STAT_NOT_ADDRESS_LENGTH             0x00000001

#define _SSP2STAT_READ_WRITE_POSITION            0x00000002
#define _SSP2STAT_READ_WRITE_MASK                0x00000004
#define _SSP2STAT_READ_WRITE_LENGTH              0x00000001

#define _SSP2STAT_DATA_ADDRESS_POSITION          0x00000005
#define _SSP2STAT_DATA_ADDRESS_MASK              0x00000020
#define _SSP2STAT_DATA_ADDRESS_LENGTH            0x00000001

#define _SSP2STAT_I2C_READ_POSITION              0x00000002
#define _SSP2STAT_I2C_READ_MASK                  0x00000004
#define _SSP2STAT_I2C_READ_LENGTH                0x00000001

#define _SSP2STAT_I2C_START_POSITION             0x00000003
#define _SSP2STAT_I2C_START_MASK                 0x00000008
#define _SSP2STAT_I2C_START_LENGTH               0x00000001

#define _SSP2STAT_I2C_STOP_POSITION              0x00000004
#define _SSP2STAT_I2C_STOP_MASK                  0x00000010
#define _SSP2STAT_I2C_STOP_LENGTH                0x00000001

#define _SSP2STAT_I2C_DAT_POSITION               0x00000005
#define _SSP2STAT_I2C_DAT_MASK                   0x00000020
#define _SSP2STAT_I2C_DAT_LENGTH                 0x00000001

#define _I2C2ADD_SSPADD_POSITION                 0x00000000
#define _I2C2ADD_SSPADD_MASK                     0x000000FF
#define _I2C2ADD_SSPADD_LENGTH                   0x00000008

#define _I2C2ADD_I2CADD_POSITION                 0x00000000
#define _I2C2ADD_I2CADD_MASK                     0x000000FF
#define _I2C2ADD_I2CADD_LENGTH                   0x00000008

#define _SSP2ADD_SSPADD_POSITION                 0x00000000
#define _SSP2ADD_SSPADD_MASK                     0x000000FF
#define _SSP2ADD_SSPADD_LENGTH                   0x00000008

#define _SSP2ADD_I2CADD_POSITION                 0x00000000
#define _SSP2ADD_I2CADD_MASK                     0x000000FF
#define _SSP2ADD_I2CADD_LENGTH                   0x00000008

#define _I2C2MSK_MSK0_POSITION                   0x00000000
#define _I2C2MSK_MSK0_MASK                       0x00000001
#define _I2C2MSK_MSK0_LENGTH                     0x00000001

#define _I2C2MSK_MSK1_POSITION                   0x00000001
#define _I2C2MSK_MSK1_MASK                       0x00000002
#define _I2C2MSK_MSK1_LENGTH                     0x00000001

#define _I2C2MSK_MSK2_POSITION                   0x00000002
#define _I2C2MSK_MSK2_MASK                       0x00000004
#define _I2C2MSK_MSK2_LENGTH                     0x00000001

#define _I2C2MSK_MSK3_POSITION                   0x00000003
#define _I2C2MSK_MSK3_MASK                       0x00000008
#define _I2C2MSK_MSK3_LENGTH                     0x00000001

#define _I2C2MSK_MSK4_POSITION                   0x00000004
#define _I2C2MSK_MSK4_MASK                       0x00000010
#define _I2C2MSK_MSK4_LENGTH                     0x00000001

#define _I2C2MSK_MSK5_POSITION                   0x00000005
#define _I2C2MSK_MSK5_MASK                       0x00000020
#define _I2C2MSK_MSK5_LENGTH                     0x00000001

#define _I2C2MSK_MSK6_POSITION                   0x00000006
#define _I2C2MSK_MSK6_MASK                       0x00000040
#define _I2C2MSK_MSK6_LENGTH                     0x00000001

#define _I2C2MSK_MSK7_POSITION                   0x00000007
#define _I2C2MSK_MSK7_MASK                       0x00000080
#define _I2C2MSK_MSK7_LENGTH                     0x00000001

#define _I2C2MSK_AMSK_POSITION                   0x00000000
#define _I2C2MSK_AMSK_MASK                       0x000000FF
#define _I2C2MSK_AMSK_LENGTH                     0x00000008

#define _SSP2MSK_MSK0_POSITION                   0x00000000
#define _SSP2MSK_MSK0_MASK                       0x00000001
#define _SSP2MSK_MSK0_LENGTH                     0x00000001

#define _SSP2MSK_MSK1_POSITION                   0x00000001
#define _SSP2MSK_MSK1_MASK                       0x00000002
#define _SSP2MSK_MSK1_LENGTH                     0x00000001

#define _SSP2MSK_MSK2_POSITION                   0x00000002
#define _SSP2MSK_MSK2_MASK                       0x00000004
#define _SSP2MSK_MSK2_LENGTH                     0x00000001

#define _SSP2MSK_MSK3_POSITION                   0x00000003
#define _SSP2MSK_MSK3_MASK                       0x00000008
#define _SSP2MSK_MSK3_LENGTH                     0x00000001

#define _SSP2MSK_MSK4_POSITION                   0x00000004
#define _SSP2MSK_MSK4_MASK                       0x00000010
#define _SSP2MSK_MSK4_LENGTH                     0x00000001

#define _SSP2MSK_MSK5_POSITION                   0x00000005
#define _SSP2MSK_MSK5_MASK                       0x00000020
#define _SSP2MSK_MSK5_LENGTH                     0x00000001

#define _SSP2MSK_MSK6_POSITION                   0x00000006
#define _SSP2MSK_MSK6_MASK                       0x00000040
#define _SSP2MSK_MSK6_LENGTH                     0x00000001

#define _SSP2MSK_MSK7_POSITION                   0x00000007
#define _SSP2MSK_MSK7_MASK                       0x00000080
#define _SSP2MSK_MSK7_LENGTH                     0x00000001

#define _SSP2MSK_AMSK_POSITION                   0x00000000
#define _SSP2MSK_AMSK_MASK                       0x000000FF
#define _SSP2MSK_AMSK_LENGTH                     0x00000008

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

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

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

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

#define _TRISA_TRISA6_POSITION                   0x00000006
#define _TRISA_TRISA6_MASK                       0x00000040
#define _TRISA_TRISA6_LENGTH                     0x00000001

#define _TRISA_TRISA7_POSITION                   0x00000007
#define _TRISA_TRISA7_MASK                       0x00000080
#define _TRISA_TRISA7_LENGTH                     0x00000001

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

#define _PORTA_RA5_POSITION                      0x00000005
#define _PORTA_RA5_MASK                          0x00000020
#define _PORTA_RA5_LENGTH                        0x00000001

#define _PORTA_RA6_POSITION                      0x00000006
#define _PORTA_RA6_MASK                          0x00000040
#define _PORTA_RA6_LENGTH                        0x00000001

#define _PORTA_RA7_POSITION                      0x00000007
#define _PORTA_RA7_MASK                          0x00000080
#define _PORTA_RA7_LENGTH                        0x00000001

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

#define _LATA_LATA6_POSITION                     0x00000006
#define _LATA_LATA6_MASK                         0x00000040
#define _LATA_LATA6_LENGTH                       0x00000001

#define _LATA_LATA7_POSITION                     0x00000007
#define _LATA_LATA7_MASK                         0x00000080
#define _LATA_LATA7_LENGTH                       0x00000001

#define _ODCA_ODA0_POSITION                      0x00000000
#define _ODCA_ODA0_MASK                          0x00000001
#define _ODCA_ODA0_LENGTH                        0x00000001

#define _ODCA_ODA1_POSITION                      0x00000001
#define _ODCA_ODA1_MASK                          0x00000002
#define _ODCA_ODA1_LENGTH                        0x00000001

#define _ODCA_ODA2_POSITION                      0x00000002
#define _ODCA_ODA2_MASK                          0x00000004
#define _ODCA_ODA2_LENGTH                        0x00000001

#define _ODCA_ODA3_POSITION                      0x00000003
#define _ODCA_ODA3_MASK                          0x00000008
#define _ODCA_ODA3_LENGTH                        0x00000001

#define _ODCA_ODA4_POSITION                      0x00000004
#define _ODCA_ODA4_MASK                          0x00000010
#define _ODCA_ODA4_LENGTH                        0x00000001

#define _ODCA_ODA6_POSITION                      0x00000006
#define _ODCA_ODA6_MASK                          0x00000040
#define _ODCA_ODA6_LENGTH                        0x00000001

#define _ODCA_ODA7_POSITION                      0x00000007
#define _ODCA_ODA7_MASK                          0x00000080
#define _ODCA_ODA7_LENGTH                        0x00000001

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

#define _ODCB_ODB0_POSITION                      0x00000000
#define _ODCB_ODB0_MASK                          0x00000001
#define _ODCB_ODB0_LENGTH                        0x00000001

#define _ODCB_ODB1_POSITION                      0x00000001
#define _ODCB_ODB1_MASK                          0x00000002
#define _ODCB_ODB1_LENGTH                        0x00000001

#define _ODCB_ODB2_POSITION                      0x00000002
#define _ODCB_ODB2_MASK                          0x00000004
#define _ODCB_ODB2_LENGTH                        0x00000001

#define _ODCB_ODB3_POSITION                      0x00000003
#define _ODCB_ODB3_MASK                          0x00000008
#define _ODCB_ODB3_LENGTH                        0x00000001

#define _ODCB_ODB4_POSITION                      0x00000004
#define _ODCB_ODB4_MASK                          0x00000010
#define _ODCB_ODB4_LENGTH                        0x00000001

#define _ODCB_ODB5_POSITION                      0x00000005
#define _ODCB_ODB5_MASK                          0x00000020
#define _ODCB_ODB5_LENGTH                        0x00000001

#define _ODCB_ODB6_POSITION                      0x00000006
#define _ODCB_ODB6_MASK                          0x00000040
#define _ODCB_ODB6_LENGTH                        0x00000001

#define _ODCB_ODB7_POSITION                      0x00000007
#define _ODCB_ODB7_MASK                          0x00000080
#define _ODCB_ODB7_LENGTH                        0x00000001

#define _ODCB_ODB8_POSITION                      0x00000008
#define _ODCB_ODB8_MASK                          0x00000100
#define _ODCB_ODB8_LENGTH                        0x00000001

#define _ODCB_ODB9_POSITION                      0x00000009
#define _ODCB_ODB9_MASK                          0x00000200
#define _ODCB_ODB9_LENGTH                        0x00000001

#define _ODCB_ODB10_POSITION                     0x0000000A
#define _ODCB_ODB10_MASK                         0x00000400
#define _ODCB_ODB10_LENGTH                       0x00000001

#define _ODCB_ODB11_POSITION                     0x0000000B
#define _ODCB_ODB11_MASK                         0x00000800
#define _ODCB_ODB11_LENGTH                       0x00000001

#define _ODCB_ODB12_POSITION                     0x0000000C
#define _ODCB_ODB12_MASK                         0x00001000
#define _ODCB_ODB12_LENGTH                       0x00000001

#define _ODCB_ODB13_POSITION                     0x0000000D
#define _ODCB_ODB13_MASK                         0x00002000
#define _ODCB_ODB13_LENGTH                       0x00000001

#define _ODCB_ODB14_POSITION                     0x0000000E
#define _ODCB_ODB14_MASK                         0x00004000
#define _ODCB_ODB14_LENGTH                       0x00000001

#define _ODCB_ODB15_POSITION                     0x0000000F
#define _ODCB_ODB15_MASK                         0x00008000
#define _ODCB_ODB15_LENGTH                       0x00000001

#define _PADCFG1_SCK1DIS_POSITION                0x00000008
#define _PADCFG1_SCK1DIS_MASK                    0x00000100
#define _PADCFG1_SCK1DIS_LENGTH                  0x00000001

#define _PADCFG1_SDO1DIS_POSITION                0x00000009
#define _PADCFG1_SDO1DIS_MASK                    0x00000200
#define _PADCFG1_SDO1DIS_LENGTH                  0x00000001

#define _PADCFG1_SCK2DIS_POSITION                0x0000000A
#define _PADCFG1_SCK2DIS_MASK                    0x00000400
#define _PADCFG1_SCK2DIS_LENGTH                  0x00000001

#define _PADCFG1_SDO2DIS_POSITION                0x0000000B
#define _PADCFG1_SDO2DIS_MASK                    0x00000800
#define _PADCFG1_SDO2DIS_LENGTH                  0x00000001

#define _PADCFG1_SMBDEL0_POSITION                0x00000004
#define _PADCFG1_SMBDEL0_MASK                    0x00000010
#define _PADCFG1_SMBDEL0_LENGTH                  0x00000001

#define _PADCFG1_SMBDEL1_POSITION                0x00000005
#define _PADCFG1_SMBDEL1_MASK                    0x00000020
#define _PADCFG1_SMBDEL1_LENGTH                  0x00000001

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

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
#define _AD1CON2_SMPI_MASK                       0x0000003C
#define _AD1CON2_SMPI_LENGTH                     0x00000004

#define _AD1CON2_BUFS_POSITION                   0x00000007
#define _AD1CON2_BUFS_MASK                       0x00000080
#define _AD1CON2_BUFS_LENGTH                     0x00000001

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_OFFCAL_POSITION                 0x0000000C
#define _AD1CON2_OFFCAL_MASK                     0x00001000
#define _AD1CON2_OFFCAL_LENGTH                   0x00000001

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

#define _AD1CON3_PUMPEN_POSITION                 0x0000000D
#define _AD1CON3_PUMPEN_MASK                     0x00002000
#define _AD1CON3_PUMPEN_LENGTH                   0x00000001

#define _AD1CON3_EXTSAM_POSITION                 0x0000000E
#define _AD1CON3_EXTSAM_MASK                     0x00004000
#define _AD1CON3_EXTSAM_LENGTH                   0x00000001

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

#define _AD1CHS_CH0SA_POSITION                   0x00000000
#define _AD1CHS_CH0SA_MASK                       0x0000000F
#define _AD1CHS_CH0SA_LENGTH                     0x00000004

#define _AD1CHS_CH0NA_POSITION                   0x00000007
#define _AD1CHS_CH0NA_MASK                       0x00000080
#define _AD1CHS_CH0NA_LENGTH                     0x00000001

#define _AD1CHS_CH0SB_POSITION                   0x00000008
#define _AD1CHS_CH0SB_MASK                       0x00000F00
#define _AD1CHS_CH0SB_LENGTH                     0x00000004

#define _AD1CHS_CH0NB_POSITION                   0x0000000F
#define _AD1CHS_CH0NB_MASK                       0x00008000
#define _AD1CHS_CH0NB_LENGTH                     0x00000001

#define _AD1CHS_CH0SA0_POSITION                  0x00000000
#define _AD1CHS_CH0SA0_MASK                      0x00000001
#define _AD1CHS_CH0SA0_LENGTH                    0x00000001

#define _AD1CHS_CH0SA1_POSITION                  0x00000001
#define _AD1CHS_CH0SA1_MASK                      0x00000002
#define _AD1CHS_CH0SA1_LENGTH                    0x00000001

#define _AD1CHS_CH0SA2_POSITION                  0x00000002
#define _AD1CHS_CH0SA2_MASK                      0x00000004
#define _AD1CHS_CH0SA2_LENGTH                    0x00000001

#define _AD1CHS_CH0SA3_POSITION                  0x00000003
#define _AD1CHS_CH0SA3_MASK                      0x00000008
#define _AD1CHS_CH0SA3_LENGTH                    0x00000001

#define _AD1CHS_CH0SB0_POSITION                  0x00000008
#define _AD1CHS_CH0SB0_MASK                      0x00000100
#define _AD1CHS_CH0SB0_LENGTH                    0x00000001

#define _AD1CHS_CH0SB1_POSITION                  0x00000009
#define _AD1CHS_CH0SB1_MASK                      0x00000200
#define _AD1CHS_CH0SB1_LENGTH                    0x00000001

#define _AD1CHS_CH0SB2_POSITION                  0x0000000A
#define _AD1CHS_CH0SB2_MASK                      0x00000400
#define _AD1CHS_CH0SB2_LENGTH                    0x00000001

#define _AD1CHS_CH0SB3_POSITION                  0x0000000B
#define _AD1CHS_CH0SB3_MASK                      0x00000800
#define _AD1CHS_CH0SB3_LENGTH                    0x00000001

#define _AD1CSSL_CSSL0_POSITION                  0x00000000
#define _AD1CSSL_CSSL0_MASK                      0x00000001
#define _AD1CSSL_CSSL0_LENGTH                    0x00000001

#define _AD1CSSL_CSSL1_POSITION                  0x00000001
#define _AD1CSSL_CSSL1_MASK                      0x00000002
#define _AD1CSSL_CSSL1_LENGTH                    0x00000001

#define _AD1CSSL_CSSL2_POSITION                  0x00000002
#define _AD1CSSL_CSSL2_MASK                      0x00000004
#define _AD1CSSL_CSSL2_LENGTH                    0x00000001

#define _AD1CSSL_CSSL3_POSITION                  0x00000003
#define _AD1CSSL_CSSL3_MASK                      0x00000008
#define _AD1CSSL_CSSL3_LENGTH                    0x00000001

#define _AD1CSSL_CSSL4_POSITION                  0x00000004
#define _AD1CSSL_CSSL4_MASK                      0x00000010
#define _AD1CSSL_CSSL4_LENGTH                    0x00000001

#define _AD1CSSL_CSSL6_POSITION                  0x00000006
#define _AD1CSSL_CSSL6_MASK                      0x00000040
#define _AD1CSSL_CSSL6_LENGTH                    0x00000001

#define _AD1CSSL_CSSL7_POSITION                  0x00000007
#define _AD1CSSL_CSSL7_MASK                      0x00000080
#define _AD1CSSL_CSSL7_LENGTH                    0x00000001

#define _AD1CSSL_CSSL8_POSITION                  0x00000008
#define _AD1CSSL_CSSL8_MASK                      0x00000100
#define _AD1CSSL_CSSL8_LENGTH                    0x00000001

#define _AD1CSSL_CSSL9_POSITION                  0x00000009
#define _AD1CSSL_CSSL9_MASK                      0x00000200
#define _AD1CSSL_CSSL9_LENGTH                    0x00000001

#define _AD1CSSL_CSSL10_POSITION                 0x0000000A
#define _AD1CSSL_CSSL10_MASK                     0x00000400
#define _AD1CSSL_CSSL10_LENGTH                   0x00000001

#define _AD1CSSL_CSSL11_POSITION                 0x0000000B
#define _AD1CSSL_CSSL11_MASK                     0x00000800
#define _AD1CSSL_CSSL11_LENGTH                   0x00000001

#define _AD1CSSL_CSSL12_POSITION                 0x0000000C
#define _AD1CSSL_CSSL12_MASK                     0x00001000
#define _AD1CSSL_CSSL12_LENGTH                   0x00000001

#define _AD1CSSL_CSSL13_POSITION                 0x0000000D
#define _AD1CSSL_CSSL13_MASK                     0x00002000
#define _AD1CSSL_CSSL13_LENGTH                   0x00000001

#define _AD1CSSL_CSSL14_POSITION                 0x0000000E
#define _AD1CSSL_CSSL14_MASK                     0x00004000
#define _AD1CSSL_CSSL14_LENGTH                   0x00000001

#define _AD1CSSL_CSSL15_POSITION                 0x0000000F
#define _AD1CSSL_CSSL15_MASK                     0x00008000
#define _AD1CSSL_CSSL15_LENGTH                   0x00000001

#define _ANCFG_VBGEN_POSITION                    0x00000000
#define _ANCFG_VBGEN_MASK                        0x00000001
#define _ANCFG_VBGEN_LENGTH                      0x00000001

#define _ANSA_ANSA0_POSITION                     0x00000000
#define _ANSA_ANSA0_MASK                         0x00000001
#define _ANSA_ANSA0_LENGTH                       0x00000001

#define _ANSA_ANSA1_POSITION                     0x00000001
#define _ANSA_ANSA1_MASK                         0x00000002
#define _ANSA_ANSA1_LENGTH                       0x00000001

#define _ANSA_ANSA2_POSITION                     0x00000002
#define _ANSA_ANSA2_MASK                         0x00000004
#define _ANSA_ANSA2_LENGTH                       0x00000001

#define _ANSA_ANSA3_POSITION                     0x00000003
#define _ANSA_ANSA3_MASK                         0x00000008
#define _ANSA_ANSA3_LENGTH                       0x00000001

#define _ANSELA_ANSA0_POSITION                   0x00000000
#define _ANSELA_ANSA0_MASK                       0x00000001
#define _ANSELA_ANSA0_LENGTH                     0x00000001

#define _ANSELA_ANSA1_POSITION                   0x00000001
#define _ANSELA_ANSA1_MASK                       0x00000002
#define _ANSELA_ANSA1_LENGTH                     0x00000001

#define _ANSELA_ANSA2_POSITION                   0x00000002
#define _ANSELA_ANSA2_MASK                       0x00000004
#define _ANSELA_ANSA2_LENGTH                     0x00000001

#define _ANSELA_ANSA3_POSITION                   0x00000003
#define _ANSELA_ANSA3_MASK                       0x00000008
#define _ANSELA_ANSA3_LENGTH                     0x00000001

#define _ANSB_ANSB0_POSITION                     0x00000000
#define _ANSB_ANSB0_MASK                         0x00000001
#define _ANSB_ANSB0_LENGTH                       0x00000001

#define _ANSB_ANSB1_POSITION                     0x00000001
#define _ANSB_ANSB1_MASK                         0x00000002
#define _ANSB_ANSB1_LENGTH                       0x00000001

#define _ANSB_ANSB2_POSITION                     0x00000002
#define _ANSB_ANSB2_MASK                         0x00000004
#define _ANSB_ANSB2_LENGTH                       0x00000001

#define _ANSB_ANSB3_POSITION                     0x00000003
#define _ANSB_ANSB3_MASK                         0x00000008
#define _ANSB_ANSB3_LENGTH                       0x00000001

#define _ANSB_ANSB4_POSITION                     0x00000004
#define _ANSB_ANSB4_MASK                         0x00000010
#define _ANSB_ANSB4_LENGTH                       0x00000001

#define _ANSB_ANSB12_POSITION                    0x0000000C
#define _ANSB_ANSB12_MASK                        0x00001000
#define _ANSB_ANSB12_LENGTH                      0x00000001

#define _ANSB_ANSB13_POSITION                    0x0000000D
#define _ANSB_ANSB13_MASK                        0x00002000
#define _ANSB_ANSB13_LENGTH                      0x00000001

#define _ANSB_ANSB14_POSITION                    0x0000000E
#define _ANSB_ANSB14_MASK                        0x00004000
#define _ANSB_ANSB14_LENGTH                      0x00000001

#define _ANSB_ANSB15_POSITION                    0x0000000F
#define _ANSB_ANSB15_MASK                        0x00008000
#define _ANSB_ANSB15_LENGTH                      0x00000001

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

#define _ANSELB_ANSB12_POSITION                  0x0000000C
#define _ANSELB_ANSB12_MASK                      0x00001000
#define _ANSELB_ANSB12_LENGTH                    0x00000001

#define _ANSELB_ANSB13_POSITION                  0x0000000D
#define _ANSELB_ANSB13_MASK                      0x00002000
#define _ANSELB_ANSB13_LENGTH                    0x00000001

#define _ANSELB_ANSB14_POSITION                  0x0000000E
#define _ANSELB_ANSB14_MASK                      0x00004000
#define _ANSELB_ANSB14_LENGTH                    0x00000001

#define _ANSELB_ANSB15_POSITION                  0x0000000F
#define _ANSELB_ANSB15_MASK                      0x00008000
#define _ANSELB_ANSB15_LENGTH                    0x00000001

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_C1EVT_POSITION                   0x00000008
#define _CMSTAT_C1EVT_MASK                       0x00000100
#define _CMSTAT_C1EVT_LENGTH                     0x00000001

#define _CMSTAT_C2EVT_POSITION                   0x00000009
#define _CMSTAT_C2EVT_MASK                       0x00000200
#define _CMSTAT_C2EVT_LENGTH                     0x00000001

#define _CMSTAT_CMIDL_POSITION                   0x0000000F
#define _CMSTAT_CMIDL_MASK                       0x00008000
#define _CMSTAT_CMIDL_LENGTH                     0x00000001

#define _CVRCON_CVR_POSITION                     0x00000000
#define _CVRCON_CVR_MASK                         0x0000001F
#define _CVRCON_CVR_LENGTH                       0x00000005

#define _CVRCON_CVRSS_POSITION                   0x00000005
#define _CVRCON_CVRSS_MASK                       0x00000020
#define _CVRCON_CVRSS_LENGTH                     0x00000001

#define _CVRCON_CVROE_POSITION                   0x00000006
#define _CVRCON_CVROE_MASK                       0x00000040
#define _CVRCON_CVROE_LENGTH                     0x00000001

#define _CVRCON_CVREN_POSITION                   0x00000007
#define _CVRCON_CVREN_MASK                       0x00000080
#define _CVRCON_CVREN_LENGTH                     0x00000001

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

#define _CVRCON_CVR4_POSITION                    0x00000004
#define _CVRCON_CVR4_MASK                        0x00000010
#define _CVRCON_CVR4_LENGTH                      0x00000001

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

#define _CM1CON_CLPWR_POSITION                   0x0000000C
#define _CM1CON_CLPWR_MASK                       0x00001000
#define _CM1CON_CLPWR_LENGTH                     0x00000001

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

#define _CM2CON_CLPWR_POSITION                   0x0000000C
#define _CM2CON_CLPWR_MASK                       0x00001000
#define _CM2CON_CLPWR_LENGTH                     0x00000001

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

#define _RCON_PMSLP_POSITION                     0x00000008
#define _RCON_PMSLP_MASK                         0x00000100
#define _RCON_PMSLP_LENGTH                       0x00000001

#define _RCON_CM_POSITION                        0x00000009
#define _RCON_CM_MASK                            0x00000200
#define _RCON_CM_LENGTH                          0x00000001

#define _RCON_SBOREN_POSITION                    0x0000000D
#define _RCON_SBOREN_MASK                        0x00002000
#define _RCON_SBOREN_LENGTH                      0x00000001

#define _RCON_IOPUWR_POSITION                    0x0000000E
#define _RCON_IOPUWR_MASK                        0x00004000
#define _RCON_IOPUWR_LENGTH                      0x00000001

#define _RCON_TRAPR_POSITION                     0x0000000F
#define _RCON_TRAPR_MASK                         0x00008000
#define _RCON_TRAPR_LENGTH                       0x00000001

#define _RCON_VREGS_POSITION                     0x00000008
#define _RCON_VREGS_MASK                         0x00000100
#define _RCON_VREGS_LENGTH                       0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_SOSCEN_POSITION                  0x00000001
#define _OSCCON_SOSCEN_MASK                      0x00000002
#define _OSCCON_SOSCEN_LENGTH                    0x00000001

#define _OSCCON_SOSCDRV_POSITION                 0x00000002
#define _OSCCON_SOSCDRV_MASK                     0x00000004
#define _OSCCON_SOSCDRV_LENGTH                   0x00000001

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

#define _OSCCON_LPOSCEN_POSITION                 0x00000001
#define _OSCCON_LPOSCEN_MASK                     0x00000002
#define _OSCCON_LPOSCEN_LENGTH                   0x00000001

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

#define _CLKDIV_RCDIV_POSITION                   0x00000008
#define _CLKDIV_RCDIV_MASK                       0x00000700
#define _CLKDIV_RCDIV_LENGTH                     0x00000003

#define _CLKDIV_DOZEN_POSITION                   0x0000000B
#define _CLKDIV_DOZEN_MASK                       0x00000800
#define _CLKDIV_DOZEN_LENGTH                     0x00000001

#define _CLKDIV_DOZE_POSITION                    0x0000000C
#define _CLKDIV_DOZE_MASK                        0x00007000
#define _CLKDIV_DOZE_LENGTH                      0x00000003

#define _CLKDIV_ROI_POSITION                     0x0000000F
#define _CLKDIV_ROI_MASK                         0x00008000
#define _CLKDIV_ROI_LENGTH                       0x00000001

#define _CLKDIV_RCDIV0_POSITION                  0x00000008
#define _CLKDIV_RCDIV0_MASK                      0x00000100
#define _CLKDIV_RCDIV0_LENGTH                    0x00000001

#define _CLKDIV_RCDIV1_POSITION                  0x00000009
#define _CLKDIV_RCDIV1_MASK                      0x00000200
#define _CLKDIV_RCDIV1_LENGTH                    0x00000001

#define _CLKDIV_RCDIV2_POSITION                  0x0000000A
#define _CLKDIV_RCDIV2_MASK                      0x00000400
#define _CLKDIV_RCDIV2_LENGTH                    0x00000001

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

#define _REFOCON_RODIV_POSITION                  0x00000008
#define _REFOCON_RODIV_MASK                      0x00000F00
#define _REFOCON_RODIV_LENGTH                    0x00000004

#define _REFOCON_ROSEL_POSITION                  0x0000000C
#define _REFOCON_ROSEL_MASK                      0x00001000
#define _REFOCON_ROSEL_LENGTH                    0x00000001

#define _REFOCON_ROSSLP_POSITION                 0x0000000D
#define _REFOCON_ROSSLP_MASK                     0x00002000
#define _REFOCON_ROSSLP_LENGTH                   0x00000001

#define _REFOCON_ROEN_POSITION                   0x0000000F
#define _REFOCON_ROEN_MASK                       0x00008000
#define _REFOCON_ROEN_LENGTH                     0x00000001

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

#define _REFOCON_ROON_POSITION                   0x0000000F
#define _REFOCON_ROON_MASK                       0x00008000
#define _REFOCON_ROON_LENGTH                     0x00000001

#define _HLVDCON_HLVDL_POSITION                  0x00000000
#define _HLVDCON_HLVDL_MASK                      0x0000000F
#define _HLVDCON_HLVDL_LENGTH                    0x00000004

#define _HLVDCON_IRVST_POSITION                  0x00000005
#define _HLVDCON_IRVST_MASK                      0x00000020
#define _HLVDCON_IRVST_LENGTH                    0x00000001

#define _HLVDCON_BGVST_POSITION                  0x00000006
#define _HLVDCON_BGVST_MASK                      0x00000040
#define _HLVDCON_BGVST_LENGTH                    0x00000001

#define _HLVDCON_VDIR_POSITION                   0x00000007
#define _HLVDCON_VDIR_MASK                       0x00000080
#define _HLVDCON_VDIR_LENGTH                     0x00000001

#define _HLVDCON_HLSIDL_POSITION                 0x0000000D
#define _HLVDCON_HLSIDL_MASK                     0x00002000
#define _HLVDCON_HLSIDL_LENGTH                   0x00000001

#define _HLVDCON_HLVDEN_POSITION                 0x0000000F
#define _HLVDCON_HLVDEN_MASK                     0x00008000
#define _HLVDCON_HLVDEN_LENGTH                   0x00000001

#define _HLVDCON_HLVDL0_POSITION                 0x00000000
#define _HLVDCON_HLVDL0_MASK                     0x00000001
#define _HLVDCON_HLVDL0_LENGTH                   0x00000001

#define _HLVDCON_HLVDL1_POSITION                 0x00000001
#define _HLVDCON_HLVDL1_MASK                     0x00000002
#define _HLVDCON_HLVDL1_LENGTH                   0x00000001

#define _HLVDCON_HLVDL2_POSITION                 0x00000002
#define _HLVDCON_HLVDL2_MASK                     0x00000004
#define _HLVDCON_HLVDL2_LENGTH                   0x00000001

#define _HLVDCON_HLVDL3_POSITION                 0x00000003
#define _HLVDCON_HLVDL3_MASK                     0x00000008
#define _HLVDCON_HLVDL3_LENGTH                   0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000003F
#define _NVMCON_NVMOP_LENGTH                     0x00000006

#define _NVMCON_ERASE_POSITION                   0x00000006
#define _NVMCON_ERASE_MASK                       0x00000040
#define _NVMCON_ERASE_LENGTH                     0x00000001

#define _NVMCON_PGMONLY_POSITION                 0x0000000C
#define _NVMCON_PGMONLY_MASK                     0x00001000
#define _NVMCON_PGMONLY_LENGTH                   0x00000001

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

#define _NVMCON_NVMOP4_POSITION                  0x00000004
#define _NVMCON_NVMOP4_MASK                      0x00000010
#define _NVMCON_NVMOP4_LENGTH                    0x00000001

#define _NVMCON_NVMOP5_POSITION                  0x00000005
#define _NVMCON_NVMOP5_MASK                      0x00000020
#define _NVMCON_NVMOP5_LENGTH                    0x00000001

#define _NVMKEY_NVMKEY_POSITION                  0x00000000
#define _NVMKEY_NVMKEY_MASK                      0x000000FF
#define _NVMKEY_NVMKEY_LENGTH                    0x00000008

#define _NVMKEY_NVMKEY0_POSITION                 0x00000000
#define _NVMKEY_NVMKEY0_MASK                     0x00000001
#define _NVMKEY_NVMKEY0_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY1_POSITION                 0x00000001
#define _NVMKEY_NVMKEY1_MASK                     0x00000002
#define _NVMKEY_NVMKEY1_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY2_POSITION                 0x00000002
#define _NVMKEY_NVMKEY2_MASK                     0x00000004
#define _NVMKEY_NVMKEY2_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY3_POSITION                 0x00000003
#define _NVMKEY_NVMKEY3_MASK                     0x00000008
#define _NVMKEY_NVMKEY3_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY4_POSITION                 0x00000004
#define _NVMKEY_NVMKEY4_MASK                     0x00000010
#define _NVMKEY_NVMKEY4_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY5_POSITION                 0x00000005
#define _NVMKEY_NVMKEY5_MASK                     0x00000020
#define _NVMKEY_NVMKEY5_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY6_POSITION                 0x00000006
#define _NVMKEY_NVMKEY6_MASK                     0x00000040
#define _NVMKEY_NVMKEY6_LENGTH                   0x00000001

#define _NVMKEY_NVMKEY7_POSITION                 0x00000007
#define _NVMKEY_NVMKEY7_MASK                     0x00000080
#define _NVMKEY_NVMKEY7_LENGTH                   0x00000001

#define _ULPWCON_ULPSINK_POSITION                0x00000008
#define _ULPWCON_ULPSINK_MASK                    0x00000100
#define _ULPWCON_ULPSINK_LENGTH                  0x00000001

#define _ULPWCON_ULPSIDL_POSITION                0x0000000D
#define _ULPWCON_ULPSIDL_MASK                    0x00002000
#define _ULPWCON_ULPSIDL_LENGTH                  0x00000001

#define _ULPWCON_ULPEN_POSITION                  0x0000000F
#define _ULPWCON_ULPEN_MASK                      0x00008000
#define _ULPWCON_ULPEN_LENGTH                    0x00000001

#define _ULPWCON_CRNTEN_POSITION                 0x00000008
#define _ULPWCON_CRNTEN_MASK                     0x00000100
#define _ULPWCON_CRNTEN_LENGTH                   0x00000001

#define _ULPWCON_PSIDL_POSITION                  0x0000000D
#define _ULPWCON_PSIDL_MASK                      0x00002000
#define _ULPWCON_PSIDL_LENGTH                    0x00000001

#define _ULPWCON_WUEN_POSITION                   0x0000000F
#define _ULPWCON_WUEN_MASK                       0x00008000
#define _ULPWCON_WUEN_LENGTH                     0x00000001

#define _PMD1_ADC1MD_POSITION                    0x00000000
#define _PMD1_ADC1MD_MASK                        0x00000001
#define _PMD1_ADC1MD_LENGTH                      0x00000001

#define _PMD1_U1MD_POSITION                      0x00000005
#define _PMD1_U1MD_MASK                          0x00000020
#define _PMD1_U1MD_LENGTH                        0x00000001

#define _PMD1_U2MD_POSITION                      0x00000006
#define _PMD1_U2MD_MASK                          0x00000040
#define _PMD1_U2MD_LENGTH                        0x00000001

#define _PMD1_SSP1MD_POSITION                    0x00000007
#define _PMD1_SSP1MD_MASK                        0x00000080
#define _PMD1_SSP1MD_LENGTH                      0x00000001

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

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_I2C1MD_POSITION                    0x00000007
#define _PMD1_I2C1MD_MASK                        0x00000080
#define _PMD1_I2C1MD_LENGTH                      0x00000001

#define _PMD1_SPI1MD_POSITION                    0x00000007
#define _PMD1_SPI1MD_MASK                        0x00000080
#define _PMD1_SPI1MD_LENGTH                      0x00000001

#define _PMDIS1_ADC1MD_POSITION                  0x00000000
#define _PMDIS1_ADC1MD_MASK                      0x00000001
#define _PMDIS1_ADC1MD_LENGTH                    0x00000001

#define _PMDIS1_U1MD_POSITION                    0x00000005
#define _PMDIS1_U1MD_MASK                        0x00000020
#define _PMDIS1_U1MD_LENGTH                      0x00000001

#define _PMDIS1_U2MD_POSITION                    0x00000006
#define _PMDIS1_U2MD_MASK                        0x00000040
#define _PMDIS1_U2MD_LENGTH                      0x00000001

#define _PMDIS1_SSP1MD_POSITION                  0x00000007
#define _PMDIS1_SSP1MD_MASK                      0x00000080
#define _PMDIS1_SSP1MD_LENGTH                    0x00000001

#define _PMDIS1_T1MD_POSITION                    0x0000000B
#define _PMDIS1_T1MD_MASK                        0x00000800
#define _PMDIS1_T1MD_LENGTH                      0x00000001

#define _PMDIS1_T2MD_POSITION                    0x0000000C
#define _PMDIS1_T2MD_MASK                        0x00001000
#define _PMDIS1_T2MD_LENGTH                      0x00000001

#define _PMDIS1_T3MD_POSITION                    0x0000000D
#define _PMDIS1_T3MD_MASK                        0x00002000
#define _PMDIS1_T3MD_LENGTH                      0x00000001

#define _PMDIS1_T4MD_POSITION                    0x0000000E
#define _PMDIS1_T4MD_MASK                        0x00004000
#define _PMDIS1_T4MD_LENGTH                      0x00000001

#define _PMDIS1_ADCMD_POSITION                   0x00000000
#define _PMDIS1_ADCMD_MASK                       0x00000001
#define _PMDIS1_ADCMD_LENGTH                     0x00000001

#define _PMDIS1_I2C1MD_POSITION                  0x00000007
#define _PMDIS1_I2C1MD_MASK                      0x00000080
#define _PMDIS1_I2C1MD_LENGTH                    0x00000001

#define _PMDIS1_SPI1MD_POSITION                  0x00000007
#define _PMDIS1_SPI1MD_MASK                      0x00000080
#define _PMDIS1_SPI1MD_LENGTH                    0x00000001

#define _PMD2_CCP1MD_POSITION                    0x00000000
#define _PMD2_CCP1MD_MASK                        0x00000001
#define _PMD2_CCP1MD_LENGTH                      0x00000001

#define _PMD2_CCP2MD_POSITION                    0x00000001
#define _PMD2_CCP2MD_MASK                        0x00000002
#define _PMD2_CCP2MD_LENGTH                      0x00000001

#define _PMD2_CCP3MD_POSITION                    0x00000002
#define _PMD2_CCP3MD_MASK                        0x00000004
#define _PMD2_CCP3MD_LENGTH                      0x00000001

#define _PMDIS2_CCP1MD_POSITION                  0x00000000
#define _PMDIS2_CCP1MD_MASK                      0x00000001
#define _PMDIS2_CCP1MD_LENGTH                    0x00000001

#define _PMDIS2_CCP2MD_POSITION                  0x00000001
#define _PMDIS2_CCP2MD_MASK                      0x00000002
#define _PMDIS2_CCP2MD_LENGTH                    0x00000001

#define _PMDIS2_CCP3MD_POSITION                  0x00000002
#define _PMDIS2_CCP3MD_MASK                      0x00000004
#define _PMDIS2_CCP3MD_LENGTH                    0x00000001

#define _PMD3_SSP2MD_POSITION                    0x00000001
#define _PMD3_SSP2MD_MASK                        0x00000002
#define _PMD3_SSP2MD_LENGTH                      0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD3_I2C2MD_POSITION                    0x00000001
#define _PMD3_I2C2MD_MASK                        0x00000002
#define _PMD3_I2C2MD_LENGTH                      0x00000001

#define _PMD3_SPI2MD_POSITION                    0x00000001
#define _PMD3_SPI2MD_MASK                        0x00000002
#define _PMD3_SPI2MD_LENGTH                      0x00000001

#define _PMDIS3_SSP2MD_POSITION                  0x00000001
#define _PMDIS3_SSP2MD_MASK                      0x00000002
#define _PMDIS3_SSP2MD_LENGTH                    0x00000001

#define _PMDIS3_CMPMD_POSITION                   0x0000000A
#define _PMDIS3_CMPMD_MASK                       0x00000400
#define _PMDIS3_CMPMD_LENGTH                     0x00000001

#define _PMDIS3_I2C2MD_POSITION                  0x00000001
#define _PMDIS3_I2C2MD_MASK                      0x00000002
#define _PMDIS3_I2C2MD_LENGTH                    0x00000001

#define _PMDIS3_SPI2MD_POSITION                  0x00000001
#define _PMDIS3_SPI2MD_MASK                      0x00000002
#define _PMDIS3_SPI2MD_LENGTH                    0x00000001

#define _PMD4_HLVDMD_POSITION                    0x00000001
#define _PMD4_HLVDMD_MASK                        0x00000002
#define _PMD4_HLVDMD_LENGTH                      0x00000001

#define _PMD4_REFOMD_POSITION                    0x00000003
#define _PMD4_REFOMD_MASK                        0x00000008
#define _PMD4_REFOMD_LENGTH                      0x00000001

#define _PMD4_EEMD_POSITION                      0x00000004
#define _PMD4_EEMD_MASK                          0x00000010
#define _PMD4_EEMD_LENGTH                        0x00000001

#define _PMD4_ULPWUMD_POSITION                   0x00000007
#define _PMD4_ULPWUMD_MASK                       0x00000080
#define _PMD4_ULPWUMD_LENGTH                     0x00000001

#define _PMDIS4_HLVDMD_POSITION                  0x00000001
#define _PMDIS4_HLVDMD_MASK                      0x00000002
#define _PMDIS4_HLVDMD_LENGTH                    0x00000001

#define _PMDIS4_REFOMD_POSITION                  0x00000003
#define _PMDIS4_REFOMD_MASK                      0x00000008
#define _PMDIS4_REFOMD_LENGTH                    0x00000001

#define _PMDIS4_EEMD_POSITION                    0x00000004
#define _PMDIS4_EEMD_MASK                        0x00000010
#define _PMDIS4_EEMD_LENGTH                      0x00000001

#define _PMDIS4_ULPWUMD_POSITION                 0x00000007
#define _PMDIS4_ULPWUMD_MASK                     0x00000080
#define _PMDIS4_ULPWUMD_LENGTH                   0x00000001



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
**     BWRP_ON              Enabled
**     BWRP_OFF             Disabled
**
**   Boot segment Protect:
**     BSS_HI2K             High Security Boot Protect 000200 - 0015FE
**     BSS_HI1K             High Security Boot Protect 000200 - 000AFE
**     BSS_STD2K            Standard Security Boot Protect 000200 - 0015FE
**     BSS_STD1K            Standard Security Boot Protect 000200 - 000AFE
**     BSS_OFF              No boot flash segment
**
*/

#define BWRP_ON              0xFFFE
#define BWRP_OFF             0xFFFF

#define BSS_HI2K             0xFFF3
#define BSS_HI1K             0xFFF5
#define BSS_STD2K            0xFFFB
#define BSS_STD1K            0xFFFD
#define BSS_OFF              0xFFFF

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
**   General Segment Flash Write Protect:
**     GWRP_ON              General segment is write-protected
**     GWRP_OFF             General segment may be written
**
**   General Segment Code Protect:
**     GSS0_ON              Standard security enabled
**     GSS0_OFF             No Protection
**
*/

#define GWRP_ON              0xFFFE
#define GWRP_OFF             0xFFFF

#define GSS0_ON              0xFFFD
#define GSS0_OFF             0xFFFF

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
**   Oscillator Select:
**     FNOSC_FRC            Fast RC Oscillator (FRC)
**     FNOSC_FRCPLL         Fast RC Oscillator with Postscaler and PLL (FRCDIV+PLL)
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary Oscillator with PLL (XT+PLL, HS+PLL, EC+PLL)
**     FNOSC_SOSC           Secondary Oscillator (SOSC)
**     FNOSC_LPRC           Low Power RC Oscillator (LPRC)
**     FNOSC_LPFRC          500KHz Low Power FRC with Postscaler (LPFRC)
**     FNOSC_FRCDIV         8MHz FRC with Postscaler (FRCDIV)
**
**   SOSC Source Type:
**     SOSCSRC_DIG          Digital Mode for use with external clock on SCLKI
**     SOSCSRC_ANA          Analog Mode for use with crystal
**
**   LPRC Power and Accuracy:
**     LPRCSEL_LP           Low Power/Low Accuracy
**     LPRCSEL_HP           High Power/High Accuracy
**
**   Internal External Switch Over bit:
**     IESO_OFF             Internal External Switchover mode disabled (Two-speed Start-up disabled)
**     IESO_ON              Internal External Switchover mode enabled (Two-speed Start-up enabled)
**
*/

#define FNOSC_FRC            0xFFF8
#define FNOSC_FRCPLL         0xFFF9
#define FNOSC_PRI            0xFFFA
#define FNOSC_PRIPLL         0xFFFB
#define FNOSC_SOSC           0xFFFC
#define FNOSC_LPRC           0xFFFD
#define FNOSC_LPFRC          0xFFFE
#define FNOSC_FRCDIV         0xFFFF

#define SOSCSRC_DIG          0xFFDF
#define SOSCSRC_ANA          0xFFFF

#define LPRCSEL_LP           0xFFBF
#define LPRCSEL_HP           0xFFFF

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
**   Primary Oscillator Mode:
**     POSCMD_EC            External clock mode selected
**     POSCMD_XT            XT oscillator mode selected
**     POSCMD_HS            HS oscillator mode selected
**     POSCMD_NONE          Primary oscillator disabled
**
**   CLKO Pin I/O Function:
**     OSCIOFNC_ON          Port I/O enabled (CLKO disabled)
**     OSCIOFNC_OFF         CLKO output signal enabled
**
**   Primary Oscillator Frequency Range:
**     POSCFREQ_LS          Primary Oscillator/External Clock frequency <100kHz
**     POSCFREQ_MS          Primary Oscillator/External Clock frequency between 100kHz to 8MHz
**     POSCFREQ_HS          Primary Oscillator/External Clock frequency >8MHz
**
**   SOSC Power Selection Configuration bits:
**     SOSCSEL_SOSCLP       Secondary Oscillator configured for low-power operation
**     SOSCSEL_SOSCHP       Secondary Oscillator configured for high-power operation
**
**   Clock Switching and Monitor Selection:
**     FCKSM_CSECME         Clock Switching and Fail-safe Clock Monitor Enabled
**     FCKSM_CSECMD         Clock Switching Enabled; Fail-safe Clock Monitor Disabled
**     FCKSM_CSDCMD         Clock Switching and Fail-safe Clock Monitor Disabled
**
*/

#define POSCMD_EC            0xFFFC
#define POSCMD_XT            0xFFFD
#define POSCMD_HS            0xFFFE
#define POSCMD_NONE          0xFFFF

#define OSCIOFNC_ON          0xFFFB
#define OSCIOFNC_OFF         0xFFFF

#define POSCFREQ_LS          0xFFEF
#define POSCFREQ_MS          0xFFF7
#define POSCFREQ_HS          0xFFFF

#define SOSCSEL_SOSCLP       0xFFDF
#define SOSCSEL_SOSCHP       0xFFFF

#define FCKSM_CSECME         0xFF3F
#define FCKSM_CSECMD         0xFF7F
#define FCKSM_CSDCMD         0xFFFF

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
**   Watchdog Timer Postscale Select bits:
**     WDTPS_PS1            1:1
**     WDTPS_PS2            1:2
**     WDTPS_PS4            1:4
**     WDTPS_PS8            1:8
**     WDTPS_PS16           1:16
**     WDTPS_PS32           1:32
**     WDTPS_PS64           1:64
**     WDTPS_PS128          1:128
**     WDTPS_PS256          1:256
**     WDTPS_PS512          1:512
**     WDTPS_PS1024         1:1024
**     WDTPS_PS2048         1:2048
**     WDTPS_PS4096         1:4096
**     WDTPS_PS8192         1:8192
**     WDTPS_PS16384        1:16384
**     WDTPS_PS32768        1:32768
**
**   WDT Prescaler bit:
**     FWPSA_PR32           WDT prescaler ratio of 1:32
**     FWPSA_PR128          WDT prescaler ratio of 1:128
**
**   Watchdog Timer Enable bits:
**     FWDTEN_OFF           WDT disabled in hardware; SWDTEN bit disabled
**     FWDTEN_NOSLP         WDT enabled while device is active; SWDTEN bit disabled
**     FWDTEN_SWON          WDT controlled with SWDTEN bit setting
**     FWDTEN_ON            WDT enabled in hardware
**
**   Windowed Watchdog Timer Disable bit:
**     WINDIS_ON            Windowed WDT enabled
**     WINDIS_OFF           Standard WDT selected (windowed WDT disabled)
**
*/

#define WDTPS_PS1            0xFFF0
#define WDTPS_PS2            0xFFF1
#define WDTPS_PS4            0xFFF2
#define WDTPS_PS8            0xFFF3
#define WDTPS_PS16           0xFFF4
#define WDTPS_PS32           0xFFF5
#define WDTPS_PS64           0xFFF6
#define WDTPS_PS128          0xFFF7
#define WDTPS_PS256          0xFFF8
#define WDTPS_PS512          0xFFF9
#define WDTPS_PS1024         0xFFFA
#define WDTPS_PS2048         0xFFFB
#define WDTPS_PS4096         0xFFFC
#define WDTPS_PS8192         0xFFFD
#define WDTPS_PS16384        0xFFFE
#define WDTPS_PS32768        0xFFFF

#define FWPSA_PR32           0xFFEF
#define FWPSA_PR128          0xFFFF

#define FWDTEN_OFF           0xFF5F
#define FWDTEN_NOSLP         0xFF7F
#define FWDTEN_SWON          0xFFDF
#define FWDTEN_ON            0xFFFF

#define WINDIS_ON            0xFFBF
#define WINDIS_OFF           0xFFFF

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
**   Brown-out Reset Enable bits:
**     BOREN_BOR0           Brown-out Reset disabled in hardware; SBOREN bit disabled
**     BOREN_BOR1           Brown-out Rest controlled by SBOREN bit
**     BOREN_BOR2           Enabled only while device is active; SBOREN bit disabled
**     BOREN_BOR3           Enabled in hardware; SBOREN bit disabled
**
**   Power-up Timer Enable:
**     PWRTEN_OFF           PWRT disabled
**     PWRTEN_ON            PWRT enabled
**
**   Alternate I2C1 Pin Mapping bit:
**     I2C1SEL_SEC          Alternate ASCL1/ASDA1 Pins for I2C1
**     I2C1SEL_PRI          Default SCL1/SDA1 Pins for I2C1
**
**   Brown-out Reset Voltage bits:
**     BORV_LPBOR           Low-power Brown-Out Reset occurs around 2.0V
**     BORV_V30             Brown-out Reset at 3.0V
**     BORV_V27             Brown-out Reset at 2.7V
**     BORV_V18             Brown-out Reset at 1.8V
**
**   MCLR Pin Enable bit:
**     MCLRE_OFF            RA5 input enabled; MCLR disabled
**     MCLRE_ON             RA5 input disabled; MCLR enabled
**
*/

#define BOREN_BOR0           0xFFFC
#define BOREN_BOR1           0xFFFD
#define BOREN_BOR2           0xFFFE
#define BOREN_BOR3           0xFFFF

#define PWRTEN_OFF           0xFFF7
#define PWRTEN_ON            0xFFFF

#define I2C1SEL_SEC          0xFFEF
#define I2C1SEL_PRI          0xFFFF

#define BORV_LPBOR           0xFF9F
#define BORV_V30             0xFFBF
#define BORV_V27             0xFFDF
#define BORV_V18             0xFFFF

#define MCLRE_OFF            0xFF7F
#define MCLRE_ON             0xFFFF

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
**   ICD Pin Placement Select:
**     ICS_PGx3             EMUC/EMUD share PGC3/PGD3
**     ICS_PGx2             EMUC/EMUD share PGC2/PGD2
**     ICS_PGx1             EMUC/EMUD share PGC1/PGD1
**
*/

#define ICS_PGx3             0xFFFD
#define ICS_PGx2             0xFFFE
#define ICS_PGx1             0xFFFF



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
#define __PROGRAM_LENGTH 0x2a00

#define __EEDATA_BASE 0x7ffe00
#define __EEDATA_LENGTH 0x200

#define __FBS_BASE 0xf80000
#define __FBS_LENGTH 0x2

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

#define __DEVID_BASE 0xff0000
#define __DEVID_LENGTH 0x4

#define __SFRS_BASE 0x0
#define __SFRS_LENGTH 0x800

#define __DATA_BASE 0x800
#define __DATA_LENGTH 0x400


#endif
