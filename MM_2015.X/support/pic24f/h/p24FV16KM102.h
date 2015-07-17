/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC24FV16KM102 processor header
 *
 * (c) Copyright 1999-2014 Microchip Technology, All rights reserved
 * Part support version v1.22.A(19-Aug-2014)
 *-------------------------------------------------------------------------*/

#ifndef __PIC24FV16KM102__
#error "Include file does not match processor setting"
#endif

#ifndef __24FV16KM102_H
#define __24FV16KM102_H

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
extern volatile unsigned int  TBLPAG __attribute__((__sfr__));
typedef struct tagTBLPAGBITS {
  unsigned TBLPAG:8;
} TBLPAGBITS;
extern volatile TBLPAGBITS TBLPAGbits __attribute__((__sfr__));

#define PSVPAG PSVPAG
extern volatile unsigned int  PSVPAG __attribute__((__sfr__));
typedef struct tagPSVPAGBITS {
  unsigned PSVPAG:8;
} PSVPAGBITS;
extern volatile PSVPAGBITS PSVPAGbits __attribute__((__sfr__));

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
      unsigned IPL0:1;
      unsigned IPL1:1;
      unsigned IPL2:1;
      unsigned DC:1;
    };
    struct {
      unsigned :5;
      unsigned IPL:3;
    };
  };
} SRBITS;
extern volatile SRBITS SRbits __attribute__((__sfr__));

#define CORCON CORCON
extern volatile unsigned int  CORCON __attribute__((__sfr__));
typedef struct tagCORCONBITS {
  unsigned :3;
  unsigned IPL3:1;
} CORCONBITS;
extern volatile CORCONBITS CORCONbits __attribute__((__sfr__));

#define DISICNT DISICNT
extern volatile unsigned int  DISICNT __attribute__((__sfr__));
typedef struct tagDISICNTBITS {
  unsigned DISICNT:14;
} DISICNTBITS;
extern volatile DISICNTBITS DISICNTbits __attribute__((__sfr__));

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
  unsigned :1;
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
  unsigned :1;
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
  unsigned :1;
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
  unsigned CCP1IF:1;
  unsigned CCP2IF:1;
  unsigned T1IF:1;
  unsigned :3;
  unsigned CCT1IF:1;
  unsigned CCT2IF:1;
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
  unsigned :8;
  unsigned INT2IF:1;
} IFS1BITS;
extern volatile IFS1BITS IFS1bits __attribute__((__sfr__));

#define IFS4 IFS4
extern volatile unsigned int  IFS4 __attribute__((__sfr__));
typedef struct tagIFS4BITS {
  unsigned :1;
  unsigned U1ERIF:1;
  unsigned :6;
  unsigned HLVDIF:1;
  unsigned :4;
  unsigned CTMUIF:1;
} IFS4BITS;
extern volatile IFS4BITS IFS4bits __attribute__((__sfr__));

#define IFS5 IFS5
extern volatile unsigned int  IFS5 __attribute__((__sfr__));
typedef struct tagIFS5BITS {
  unsigned ULPWUIF:1;
} IFS5BITS;
extern volatile IFS5BITS IFS5bits __attribute__((__sfr__));

#define IFS6 IFS6
extern volatile unsigned int  IFS6 __attribute__((__sfr__));
typedef struct tagIFS6BITS {
  unsigned CLC1IF:1;
} IFS6BITS;
extern volatile IFS6BITS IFS6bits __attribute__((__sfr__));

#define IEC0 IEC0
extern volatile unsigned int  IEC0 __attribute__((__sfr__));
typedef struct tagIEC0BITS {
  unsigned INT0IE:1;
  unsigned CCP1IE:1;
  unsigned CCP2IE:1;
  unsigned T1IE:1;
  unsigned :3;
  unsigned CCT1IE:1;
  unsigned CCT2IE:1;
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
  unsigned :8;
  unsigned INT2IE:1;
} IEC1BITS;
extern volatile IEC1BITS IEC1bits __attribute__((__sfr__));

#define IEC4 IEC4
extern volatile unsigned int  IEC4 __attribute__((__sfr__));
typedef struct tagIEC4BITS {
  unsigned :1;
  unsigned U1ERIE:1;
  unsigned :6;
  unsigned HLVDIE:1;
  unsigned :4;
  unsigned CTMUIE:1;
} IEC4BITS;
extern volatile IEC4BITS IEC4bits __attribute__((__sfr__));

#define IEC5 IEC5
extern volatile unsigned int  IEC5 __attribute__((__sfr__));
typedef struct tagIEC5BITS {
  unsigned ULPWUIE:1;
} IEC5BITS;
extern volatile IEC5BITS IEC5bits __attribute__((__sfr__));

#define IEC6 IEC6
extern volatile unsigned int  IEC6 __attribute__((__sfr__));
typedef struct tagIEC6BITS {
  unsigned CLC1IE:1;
} IEC6BITS;
extern volatile IEC6BITS IEC6bits __attribute__((__sfr__));

#define IPC0 IPC0
extern volatile unsigned int  IPC0 __attribute__((__sfr__));
__extension__ typedef struct tagIPC0BITS {
  union {
    struct {
      unsigned INT0IP:3;
      unsigned :1;
      unsigned CCP1IP:3;
      unsigned :1;
      unsigned CCP2IP:3;
      unsigned :1;
      unsigned T1IP:3;
    };
    struct {
      unsigned INT0IP0:1;
      unsigned INT0IP1:1;
      unsigned INT0IP2:1;
      unsigned :1;
      unsigned CC1IP0:1;
      unsigned CC1IP1:1;
      unsigned CC1IP2:1;
      unsigned :1;
      unsigned CC2IP0:1;
      unsigned CC2IP1:1;
      unsigned CC2IP2:1;
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
      unsigned CCT1IP:3;
    };
    struct {
      unsigned :12;
      unsigned CCT1IP0:1;
      unsigned CCT1IP1:1;
      unsigned CCT1IP2:1;
    };
  };
} IPC1BITS;
extern volatile IPC1BITS IPC1bits __attribute__((__sfr__));

#define IPC2 IPC2
extern volatile unsigned int  IPC2 __attribute__((__sfr__));
__extension__ typedef struct tagIPC2BITS {
  union {
    struct {
      unsigned CCT2IP:3;
      unsigned :9;
      unsigned U1RXIP:3;
    };
    struct {
      unsigned CCT2IP0:1;
      unsigned CCT2IP1:1;
      unsigned CCT2IP2:1;
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

#define IPC16 IPC16
extern volatile unsigned int  IPC16 __attribute__((__sfr__));
__extension__ typedef struct tagIPC16BITS {
  union {
    struct {
      unsigned :4;
      unsigned U1ERIP:3;
    };
    struct {
      unsigned :4;
      unsigned U1ERIP0:1;
      unsigned U1ERIP1:1;
      unsigned U1ERIP2:1;
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

#define IPC24 IPC24
extern volatile unsigned int  IPC24 __attribute__((__sfr__));
__extension__ typedef struct tagIPC24BITS {
  union {
    struct {
      unsigned CLC1IP:3;
    };
    struct {
      unsigned CLC1IP0:1;
      unsigned CLC1IP1:1;
      unsigned CLC1IP2:1;
    };
  };
} IPC24BITS;
extern volatile IPC24BITS IPC24bits __attribute__((__sfr__));

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
      unsigned T1ECS0:1;
      unsigned T1ECS1:1;
    };
    struct {
      unsigned :8;
      unsigned T1ECS:2;
    };
    struct {
      unsigned :8;
      unsigned TECS0:1;
      unsigned TECS1:1;
    };
    struct {
      unsigned :8;
      unsigned TIECS:2;
    };
    struct {
      unsigned :8;
      unsigned TIECS0:1;
      unsigned TIECS1:1;
    };
  };
} T1CONBITS;
extern volatile T1CONBITS T1CONbits __attribute__((__sfr__));

#define CLC1CONL CLC1CONL
extern volatile unsigned int  CLC1CONL __attribute__((__sfr__));
__extension__ typedef struct tagCLC1CONLBITS {
  union {
    struct {
      unsigned MODE:3;
      unsigned :2;
      unsigned LCPOL:1;
      unsigned LCOUT:1;
      unsigned LCOE:1;
      unsigned :2;
      unsigned INTN:1;
      unsigned INTP:1;
      unsigned :3;
      unsigned LCEN:1;
    };
    struct {
      unsigned MODE0:1;
      unsigned MODE1:1;
      unsigned MODE2:1;
    };
  };
} CLC1CONLBITS;
extern volatile CLC1CONLBITS CLC1CONLbits __attribute__((__sfr__));

#define CLC1CONH CLC1CONH
extern volatile unsigned int  CLC1CONH __attribute__((__sfr__));
typedef struct tagCLC1CONHBITS {
  unsigned G1POL:1;
  unsigned G2POL:1;
  unsigned G3POL:1;
  unsigned G4POL:1;
} CLC1CONHBITS;
extern volatile CLC1CONHBITS CLC1CONHbits __attribute__((__sfr__));

#define CLC1SEL CLC1SEL
extern volatile unsigned int  CLC1SEL __attribute__((__sfr__));
__extension__ typedef struct tagCLC1SELBITS {
  union {
    struct {
      unsigned DS1:3;
      unsigned :1;
      unsigned DS2:3;
      unsigned :1;
      unsigned DS3:3;
      unsigned :1;
      unsigned DS4:3;
    };
    struct {
      unsigned DS10:1;
      unsigned DS11:1;
      unsigned DS12:1;
      unsigned :1;
      unsigned DS20:1;
      unsigned DS21:1;
      unsigned DS22:1;
      unsigned :1;
      unsigned DS30:1;
      unsigned DS31:1;
      unsigned DS32:1;
      unsigned :1;
      unsigned DS40:1;
      unsigned DS41:1;
      unsigned DS42:1;
    };
  };
} CLC1SELBITS;
extern volatile CLC1SELBITS CLC1SELbits __attribute__((__sfr__));

#define CLC1SELL CLC1SELL
extern volatile unsigned int  CLC1SELL __attribute__((__sfr__));
__extension__ typedef struct tagCLC1SELLBITS {
  union {
    struct {
      unsigned DS1:3;
      unsigned :1;
      unsigned DS2:3;
      unsigned :1;
      unsigned DS3:3;
      unsigned :1;
      unsigned DS4:3;
    };
    struct {
      unsigned DS10:1;
      unsigned DS11:1;
      unsigned DS12:1;
      unsigned :1;
      unsigned DS20:1;
      unsigned DS21:1;
      unsigned DS22:1;
      unsigned :1;
      unsigned DS30:1;
      unsigned DS31:1;
      unsigned DS32:1;
      unsigned :1;
      unsigned DS40:1;
      unsigned DS41:1;
      unsigned DS42:1;
    };
  };
} CLC1SELLBITS;
extern volatile CLC1SELLBITS CLC1SELLbits __attribute__((__sfr__));

#define CLC1GLSL CLC1GLSL
extern volatile unsigned int  CLC1GLSL __attribute__((__sfr__));
typedef struct tagCLC1GLSLBITS {
  unsigned G1D1N:1;
  unsigned G1D1T:1;
  unsigned G1D2N:1;
  unsigned G1D2T:1;
  unsigned G1D3N:1;
  unsigned G1D3T:1;
  unsigned G1D4N:1;
  unsigned G1D4T:1;
  unsigned G2D1N:1;
  unsigned G2D1T:1;
  unsigned G2D2N:1;
  unsigned G2D2T:1;
  unsigned G2D3N:1;
  unsigned G2D3T:1;
  unsigned G2D4N:1;
  unsigned G2D4T:1;
} CLC1GLSLBITS;
extern volatile CLC1GLSLBITS CLC1GLSLbits __attribute__((__sfr__));

#define CLC1GLSH CLC1GLSH
extern volatile unsigned int  CLC1GLSH __attribute__((__sfr__));
typedef struct tagCLC1GLSHBITS {
  unsigned G3D1N:1;
  unsigned G3D1T:1;
  unsigned G3D2N:1;
  unsigned G3D2T:1;
  unsigned G3D3N:1;
  unsigned G3D3T:1;
  unsigned G3D4N:1;
  unsigned G3D4T:1;
  unsigned G4D1N:1;
  unsigned G4D1T:1;
  unsigned G4D2N:1;
  unsigned G4D2T:1;
  unsigned G4D3N:1;
  unsigned G4D3T:1;
  unsigned G4D4N:1;
  unsigned G4D4T:1;
} CLC1GLSHBITS;
extern volatile CLC1GLSHBITS CLC1GLSHbits __attribute__((__sfr__));

#define CCP1CON1L CCP1CON1L
extern volatile unsigned int  CCP1CON1L __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON1LBITS {
  union {
    struct {
      unsigned MOD:4;
      unsigned CCSEL:1;
      unsigned T32:1;
      unsigned TMRPS:2;
      unsigned CLKSEL:3;
      unsigned TMRSYNC:1;
      unsigned CCPSLP:1;
      unsigned CCPSIDL:1;
      unsigned :1;
      unsigned CCPON:1;
    };
    struct {
      unsigned MOD0:1;
      unsigned MOD1:1;
      unsigned MOD2:1;
      unsigned MOD3:1;
      unsigned :1;
      unsigned TMR32:1;
      unsigned TMRPS0:1;
      unsigned TMRPS1:1;
      unsigned CLKSEL0:1;
      unsigned CLKSEL1:1;
      unsigned CLKSEL2:1;
    };
    struct {
      unsigned CCPMOD:4;
    };
    struct {
      unsigned CCPMOD0:1;
      unsigned CCPMOD1:1;
      unsigned CCPMOD2:1;
      unsigned CCPMOD3:1;
    };
  };
} CCP1CON1LBITS;
extern volatile CCP1CON1LBITS CCP1CON1Lbits __attribute__((__sfr__));

#define CCP1CON1H CCP1CON1H
extern volatile unsigned int  CCP1CON1H __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON1HBITS {
  union {
    struct {
      unsigned SYNC:5;
      unsigned ALTSYNC:1;
      unsigned ONESHOT:1;
      unsigned TRIGEN:1;
      unsigned OPS:4;
      unsigned :2;
      unsigned RTRGEN:1;
      unsigned OPSSRC:1;
    };
    struct {
      unsigned SYNC0:1;
      unsigned SYNC1:1;
      unsigned SYNC2:1;
      unsigned SYNC3:1;
      unsigned SYNC4:1;
      unsigned :3;
      unsigned OPS0:1;
      unsigned OPS1:1;
      unsigned OPS2:1;
      unsigned OPS3:1;
      unsigned :3;
      unsigned OPSRC:1;
    };
    struct {
      unsigned :8;
      unsigned IOPS:4;
    };
    struct {
      unsigned :8;
      unsigned IOPS0:1;
      unsigned IOPS1:1;
      unsigned IOPS2:1;
      unsigned IOPS3:1;
    };
  };
} CCP1CON1HBITS;
extern volatile CCP1CON1HBITS CCP1CON1Hbits __attribute__((__sfr__));

#define CCP1CON2L CCP1CON2L
extern volatile unsigned int  CCP1CON2L __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON2LBITS {
  union {
    struct {
      unsigned ASDG:8;
      unsigned :4;
      unsigned SSDG:1;
      unsigned :1;
      unsigned ASDGM:1;
      unsigned PWMRSEN:1;
    };
    struct {
      unsigned ASDG0:1;
      unsigned ASDG1:1;
      unsigned ASDG2:1;
      unsigned ASDG3:1;
      unsigned ASDG4:1;
      unsigned ASDG5:1;
      unsigned ASDG6:1;
      unsigned ASDG7:1;
    };
  };
} CCP1CON2LBITS;
extern volatile CCP1CON2LBITS CCP1CON2Lbits __attribute__((__sfr__));

#define CCP1CON2H CCP1CON2H
extern volatile unsigned int  CCP1CON2H __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON2HBITS {
  union {
    struct {
      unsigned ICS:3;
      unsigned AUXOUT:2;
      unsigned :1;
      unsigned ICGSM:2;
      unsigned OCAEN:1;
      unsigned OCBEN:1;
      unsigned OCCEN:1;
      unsigned OCDEN:1;
      unsigned OCEEN:1;
      unsigned OCFEN:1;
      unsigned :1;
      unsigned OENSYNC:1;
    };
    struct {
      unsigned ICS0:1;
      unsigned ICS1:1;
      unsigned ICS2:1;
      unsigned AUXOUT0:1;
      unsigned AUXOUT1:1;
      unsigned :1;
      unsigned ICGSM0:1;
      unsigned ICGSM1:1;
    };
    struct {
      unsigned ICSEL:3;
    };
    struct {
      unsigned ICSEL0:1;
      unsigned ICSEL1:1;
      unsigned ICSEL2:1;
    };
  };
} CCP1CON2HBITS;
extern volatile CCP1CON2HBITS CCP1CON2Hbits __attribute__((__sfr__));

#define CCP1CON3L CCP1CON3L
extern volatile unsigned int  CCP1CON3L __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON3LBITS {
  union {
    struct {
      unsigned DT:6;
    };
    struct {
      unsigned DT0:1;
      unsigned DT1:1;
      unsigned DT2:1;
      unsigned DT3:1;
      unsigned DT4:1;
      unsigned DT5:1;
    };
  };
} CCP1CON3LBITS;
extern volatile CCP1CON3LBITS CCP1CON3Lbits __attribute__((__sfr__));

#define CCP1CON3H CCP1CON3H
extern volatile unsigned int  CCP1CON3H __attribute__((__sfr__));
__extension__ typedef struct tagCCP1CON3HBITS {
  union {
    struct {
      unsigned PSSBDF:2;
      unsigned PSSACE:2;
      unsigned POLBDF:1;
      unsigned POLACE:1;
      unsigned :2;
      unsigned OUTM:3;
      unsigned :1;
      unsigned OSCNT:3;
      unsigned OETRIG:1;
    };
    struct {
      unsigned PSSBDF0:1;
      unsigned PSSBDF1:1;
      unsigned PSSACE0:1;
      unsigned PSSACE1:1;
      unsigned :4;
      unsigned OUTM0:1;
      unsigned OUTM1:1;
      unsigned OUTM2:1;
      unsigned :1;
      unsigned OSCNT0:1;
      unsigned OSCNT1:1;
      unsigned OSCNT2:1;
    };
  };
} CCP1CON3HBITS;
extern volatile CCP1CON3HBITS CCP1CON3Hbits __attribute__((__sfr__));

#define CCP1STAT CCP1STAT
extern volatile unsigned int  CCP1STAT __attribute__((__sfr__));
__extension__ typedef struct tagCCP1STATBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} CCP1STATBITS;
extern volatile CCP1STATBITS CCP1STATbits __attribute__((__sfr__));

#define CCP1STATL CCP1STATL
extern volatile unsigned int  CCP1STATL __attribute__((__sfr__));
__extension__ typedef struct tagCCP1STATLBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} CCP1STATLBITS;
extern volatile CCP1STATLBITS CCP1STATLbits __attribute__((__sfr__));

#define CCP1TMRL CCP1TMRL
extern volatile unsigned int  CCP1TMRL __attribute__((__sfr__));
#define CCP1TMRH CCP1TMRH
extern volatile unsigned int  CCP1TMRH __attribute__((__sfr__));
#define CCP1PRL CCP1PRL
extern volatile unsigned int  CCP1PRL __attribute__((__sfr__));
#define CCP1PRH CCP1PRH
extern volatile unsigned int  CCP1PRH __attribute__((__sfr__));
#define CCP1RA CCP1RA
extern volatile unsigned int  CCP1RA __attribute__((__sfr__));
#define CCP1RAL CCP1RAL
extern volatile unsigned int  CCP1RAL __attribute__((__sfr__));
#define CCP1RB CCP1RB
extern volatile unsigned int  CCP1RB __attribute__((__sfr__));
#define CCP1RBL CCP1RBL
extern volatile unsigned int  CCP1RBL __attribute__((__sfr__));
#define CCP1BUFL CCP1BUFL
extern volatile unsigned int  CCP1BUFL __attribute__((__sfr__));
#define CCP1BUFH CCP1BUFH
extern volatile unsigned int  CCP1BUFH __attribute__((__sfr__));
#define CCP2CON1L CCP2CON1L
extern volatile unsigned int  CCP2CON1L __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON1LBITS {
  union {
    struct {
      unsigned MOD:4;
      unsigned CCSEL:1;
      unsigned T32:1;
      unsigned TMRPS:2;
      unsigned CLKSEL:3;
      unsigned TMRSYNC:1;
      unsigned CCPSLP:1;
      unsigned CCPSIDL:1;
      unsigned :1;
      unsigned CCPON:1;
    };
    struct {
      unsigned MOD0:1;
      unsigned MOD1:1;
      unsigned MOD2:1;
      unsigned MOD3:1;
      unsigned :1;
      unsigned TMR32:1;
      unsigned TMRPS0:1;
      unsigned TMRPS1:1;
      unsigned CLKSEL0:1;
      unsigned CLKSEL1:1;
      unsigned CLKSEL2:1;
    };
    struct {
      unsigned CCPMOD:4;
    };
    struct {
      unsigned CCPMOD0:1;
      unsigned CCPMOD1:1;
      unsigned CCPMOD2:1;
      unsigned CCPMOD3:1;
    };
  };
} CCP2CON1LBITS;
extern volatile CCP2CON1LBITS CCP2CON1Lbits __attribute__((__sfr__));

#define CCP2CON1H CCP2CON1H
extern volatile unsigned int  CCP2CON1H __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON1HBITS {
  union {
    struct {
      unsigned SYNC:5;
      unsigned ALTSYNC:1;
      unsigned ONESHOT:1;
      unsigned TRIGEN:1;
      unsigned OPS:4;
      unsigned :2;
      unsigned RTRGEN:1;
      unsigned OPSSRC:1;
    };
    struct {
      unsigned SYNC0:1;
      unsigned SYNC1:1;
      unsigned SYNC2:1;
      unsigned SYNC3:1;
      unsigned SYNC4:1;
      unsigned :3;
      unsigned OPS0:1;
      unsigned OPS1:1;
      unsigned OPS2:1;
      unsigned OPS3:1;
      unsigned :3;
      unsigned OPSRC:1;
    };
    struct {
      unsigned :8;
      unsigned IOPS:4;
    };
    struct {
      unsigned :8;
      unsigned IOPS0:1;
      unsigned IOPS1:1;
      unsigned IOPS2:1;
      unsigned IOPS3:1;
    };
  };
} CCP2CON1HBITS;
extern volatile CCP2CON1HBITS CCP2CON1Hbits __attribute__((__sfr__));

#define CCP2CON2L CCP2CON2L
extern volatile unsigned int  CCP2CON2L __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON2LBITS {
  union {
    struct {
      unsigned ASDG:8;
      unsigned :4;
      unsigned SSDG:1;
      unsigned :1;
      unsigned ASDGM:1;
      unsigned PWMRSEN:1;
    };
    struct {
      unsigned ASDG0:1;
      unsigned ASDG1:1;
      unsigned ASDG2:1;
      unsigned ASDG3:1;
      unsigned ASDG4:1;
      unsigned ASDG5:1;
      unsigned ASDG6:1;
      unsigned ASDG7:1;
    };
  };
} CCP2CON2LBITS;
extern volatile CCP2CON2LBITS CCP2CON2Lbits __attribute__((__sfr__));

#define CCP2CON2H CCP2CON2H
extern volatile unsigned int  CCP2CON2H __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON2HBITS {
  union {
    struct {
      unsigned ICS:3;
      unsigned AUXOUT:2;
      unsigned :1;
      unsigned ICGSM:2;
      unsigned OCAEN:1;
      unsigned :6;
      unsigned OENSYNC:1;
    };
    struct {
      unsigned ICS0:1;
      unsigned ICS1:1;
      unsigned ICS2:1;
      unsigned AUXOUT0:1;
      unsigned AUXOUT1:1;
      unsigned :1;
      unsigned ICGSM0:1;
      unsigned ICGSM1:1;
    };
    struct {
      unsigned ICSEL:3;
    };
    struct {
      unsigned ICSEL0:1;
      unsigned ICSEL1:1;
      unsigned ICSEL2:1;
    };
  };
} CCP2CON2HBITS;
extern volatile CCP2CON2HBITS CCP2CON2Hbits __attribute__((__sfr__));

#define CCP2CON3H CCP2CON3H
extern volatile unsigned int  CCP2CON3H __attribute__((__sfr__));
__extension__ typedef struct tagCCP2CON3HBITS {
  union {
    struct {
      unsigned :2;
      unsigned PSSACE:2;
      unsigned :1;
      unsigned POLACE:1;
      unsigned :6;
      unsigned OSCNT:3;
      unsigned OETRIG:1;
    };
    struct {
      unsigned :2;
      unsigned PSSACE0:1;
      unsigned PSSACE1:1;
      unsigned :8;
      unsigned OSCNT0:1;
      unsigned OSCNT1:1;
      unsigned OSCNT2:1;
    };
  };
} CCP2CON3HBITS;
extern volatile CCP2CON3HBITS CCP2CON3Hbits __attribute__((__sfr__));

#define CCP2STAT CCP2STAT
extern volatile unsigned int  CCP2STAT __attribute__((__sfr__));
__extension__ typedef struct tagCCP2STATBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} CCP2STATBITS;
extern volatile CCP2STATBITS CCP2STATbits __attribute__((__sfr__));

#define CCP2STATL CCP2STATL
extern volatile unsigned int  CCP2STATL __attribute__((__sfr__));
__extension__ typedef struct tagCCP2STATLBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} CCP2STATLBITS;
extern volatile CCP2STATLBITS CCP2STATLbits __attribute__((__sfr__));

#define CCP2TMRL CCP2TMRL
extern volatile unsigned int  CCP2TMRL __attribute__((__sfr__));
#define CCP2TMRH CCP2TMRH
extern volatile unsigned int  CCP2TMRH __attribute__((__sfr__));
#define CCP2PRL CCP2PRL
extern volatile unsigned int  CCP2PRL __attribute__((__sfr__));
#define CCP2PRH CCP2PRH
extern volatile unsigned int  CCP2PRH __attribute__((__sfr__));
#define CCP2RA CCP2RA
extern volatile unsigned int  CCP2RA __attribute__((__sfr__));
#define CCP2RAL CCP2RAL
extern volatile unsigned int  CCP2RAL __attribute__((__sfr__));
#define CCP2RB CCP2RB
extern volatile unsigned int  CCP2RB __attribute__((__sfr__));
#define CCP2RBL CCP2RBL
extern volatile unsigned int  CCP2RBL __attribute__((__sfr__));
#define CCP2BUFL CCP2BUFL
extern volatile unsigned int  CCP2BUFL __attribute__((__sfr__));
#define CCP2BUFH CCP2BUFH
extern volatile unsigned int  CCP2BUFH __attribute__((__sfr__));
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

#define I2C1BRG I2C1BRG
extern volatile unsigned int  I2C1BRG __attribute__((__sfr__));
__extension__ typedef struct tagI2C1BRGBITS {
  union {
    struct {
      unsigned SSPADD:8;
    };
    struct {
      unsigned I2CADD:8;
    };
  };
} I2C1BRGBITS;
extern volatile I2C1BRGBITS I2C1BRGbits __attribute__((__sfr__));

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

#define SSP1BRG SSP1BRG
extern volatile unsigned int  SSP1BRG __attribute__((__sfr__));
__extension__ typedef struct tagSSP1BRGBITS {
  union {
    struct {
      unsigned SSPADD:8;
    };
    struct {
      unsigned I2CADD:8;
    };
  };
} SSP1BRGBITS;
extern volatile SSP1BRGBITS SSP1BRGbits __attribute__((__sfr__));

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
#define TRISA TRISA
extern volatile unsigned int  TRISA __attribute__((__sfr__));
typedef struct tagTRISABITS {
  unsigned TRISA0:1;
  unsigned TRISA1:1;
  unsigned TRISA2:1;
  unsigned TRISA3:1;
  unsigned TRISA4:1;
  unsigned :2;
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
  unsigned :1;
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
  unsigned :2;
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
  unsigned :2;
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
typedef struct tagPADCFG1BITS {
  unsigned :8;
  unsigned SCK1DIS:1;
  unsigned SDA1DIS:1;
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
#define ADC1BUF10 ADC1BUF10
extern volatile unsigned int  ADC1BUF10 __attribute__((__sfr__));
#define ADC1BUF11 ADC1BUF11
extern volatile unsigned int  ADC1BUF11 __attribute__((__sfr__));
#define ADC1BUF12 ADC1BUF12
extern volatile unsigned int  ADC1BUF12 __attribute__((__sfr__));
#define ADC1BUF13 ADC1BUF13
extern volatile unsigned int  ADC1BUF13 __attribute__((__sfr__));
#define ADC1BUF14 ADC1BUF14
extern volatile unsigned int  ADC1BUF14 __attribute__((__sfr__));
#define ADC1BUF15 ADC1BUF15
extern volatile unsigned int  ADC1BUF15 __attribute__((__sfr__));
#define ADC1BUF16 ADC1BUF16
extern volatile unsigned int  ADC1BUF16 __attribute__((__sfr__));
#define ADC1BUF17 ADC1BUF17
extern volatile unsigned int  ADC1BUF17 __attribute__((__sfr__));
#define ADC1BUF18 ADC1BUF18
extern volatile unsigned int  ADC1BUF18 __attribute__((__sfr__));
#define ADC1BUF19 ADC1BUF19
extern volatile unsigned int  ADC1BUF19 __attribute__((__sfr__));
#define ADC1BUF20 ADC1BUF20
extern volatile unsigned int  ADC1BUF20 __attribute__((__sfr__));
#define ADC1BUF21 ADC1BUF21
extern volatile unsigned int  ADC1BUF21 __attribute__((__sfr__));
#define ADC1BUF22 ADC1BUF22
extern volatile unsigned int  ADC1BUF22 __attribute__((__sfr__));
#define ADC1BUF23 ADC1BUF23
extern volatile unsigned int  ADC1BUF23 __attribute__((__sfr__));
#define AD1CON1 AD1CON1
extern volatile unsigned int  AD1CON1 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON1BITS {
  union {
    struct {
      unsigned DONE:1;
      unsigned SAMP:1;
      unsigned ASAM:1;
      unsigned :1;
      unsigned SSRC:4;
      unsigned FORM:2;
      unsigned MODE12:1;
      unsigned :2;
      unsigned ADSIDL:1;
      unsigned :1;
      unsigned ADON:1;
    };
    struct {
      unsigned :4;
      unsigned SSRC0:1;
      unsigned SSRC1:1;
      unsigned SSRC2:1;
      unsigned SSRC3:1;
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
      unsigned :2;
      unsigned CSCNA:1;
      unsigned BUFREGEN:1;
      unsigned OFFCAL:1;
      unsigned NVCFG0:1;
      unsigned PVCFG:2;
    };
    struct {
      unsigned :2;
      unsigned SMPI0:1;
      unsigned SMPI1:1;
      unsigned SMPI2:1;
      unsigned SMPI3:1;
      unsigned SMPI4:1;
      unsigned :7;
      unsigned PCVFG0:1;
      unsigned PCVFG1:1;
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
      unsigned :1;
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
      unsigned CH0SA:5;
      unsigned CH0NA:3;
      unsigned CH0SB:5;
      unsigned CH0NB:3;
    };
    struct {
      unsigned CH0SA0:1;
      unsigned CH0SA1:1;
      unsigned CH0SA2:1;
      unsigned CH0SA3:1;
      unsigned CH0SA4:1;
      unsigned CH0NA0:1;
      unsigned CH0NA1:1;
      unsigned CH0NA2:1;
      unsigned CH0SB0:1;
      unsigned CH0SB1:1;
      unsigned CH0SB2:1;
      unsigned CH0SB3:1;
      unsigned CH0SB4:1;
      unsigned CH0NB0:1;
      unsigned CH0NB1:1;
      unsigned CH0NB2:1;
    };
  };
} AD1CHSBITS;
extern volatile AD1CHSBITS AD1CHSbits __attribute__((__sfr__));

#define AD1CHS0 AD1CHS0
extern volatile unsigned int  AD1CHS0 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CHS0BITS {
  union {
    struct {
      unsigned CH0SA:5;
      unsigned CH0NA:3;
      unsigned CH0SB:5;
      unsigned CH0NB:3;
    };
    struct {
      unsigned CH0SA0:1;
      unsigned CH0SA1:1;
      unsigned CH0SA2:1;
      unsigned CH0SA3:1;
      unsigned CH0SA4:1;
      unsigned CH0NA0:1;
      unsigned CH0NA1:1;
      unsigned CH0NA2:1;
      unsigned CH0SB0:1;
      unsigned CH0SB1:1;
      unsigned CH0SB2:1;
      unsigned CH0SB3:1;
      unsigned CH0SB4:1;
      unsigned CH0NB0:1;
      unsigned CH0NB1:1;
      unsigned CH0NB2:1;
    };
  };
} AD1CHS0BITS;
extern volatile AD1CHS0BITS AD1CHS0bits __attribute__((__sfr__));

#define AD1CSSH AD1CSSH
extern volatile unsigned int  AD1CSSH __attribute__((__sfr__));
typedef struct tagAD1CSSHBITS {
  unsigned CSS16:1;
  unsigned CSS17:1;
  unsigned CSS18:1;
  unsigned CSS19:1;
  unsigned CSS20:1;
  unsigned CSS21:1;
  unsigned CSS22:1;
  unsigned CSS23:1;
  unsigned :2;
  unsigned CSS26:1;
  unsigned CSS27:1;
  unsigned CSS28:1;
  unsigned CSS29:1;
  unsigned CSS30:1;
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
  unsigned :3;
  unsigned CSS9:1;
  unsigned CSS10:1;
  unsigned CSS11:1;
  unsigned CSS12:1;
  unsigned CSS13:1;
  unsigned CSS14:1;
  unsigned CSS15:1;
} AD1CSSLBITS;
extern volatile AD1CSSLBITS AD1CSSLbits __attribute__((__sfr__));

#define AD1CON5 AD1CON5
extern volatile unsigned int  AD1CON5 __attribute__((__sfr__));
__extension__ typedef struct tagAD1CON5BITS {
  union {
    struct {
      unsigned CM:2;
      unsigned WM:2;
      unsigned :4;
      unsigned ASINT:2;
      unsigned :2;
      unsigned BGREQ:1;
      unsigned CTMREQ:1;
      unsigned LPEN:1;
      unsigned ASEN:1;
    };
    struct {
      unsigned CM0:1;
      unsigned CM1:1;
      unsigned WM0:1;
      unsigned WM1:1;
      unsigned :4;
      unsigned ASINT0:1;
      unsigned ASINT1:1;
    };
  };
} AD1CON5BITS;
extern volatile AD1CON5BITS AD1CON5bits __attribute__((__sfr__));

#define AD1CHITH AD1CHITH
extern volatile unsigned int  AD1CHITH __attribute__((__sfr__));
typedef struct tagAD1CHITHBITS {
  unsigned CHH16:1;
  unsigned CHH17:1;
  unsigned CHH18:1;
  unsigned CHH19:1;
  unsigned CHH20:1;
  unsigned CHH21:1;
  unsigned CHH22:1;
  unsigned CHH23:1;
} AD1CHITHBITS;
extern volatile AD1CHITHBITS AD1CHITHbits __attribute__((__sfr__));

#define AD1CHITL AD1CHITL
extern volatile unsigned int  AD1CHITL __attribute__((__sfr__));
typedef struct tagAD1CHITLBITS {
  unsigned CHH0:1;
  unsigned CHH1:1;
  unsigned CHH2:1;
  unsigned CHH3:1;
  unsigned CHH4:1;
  unsigned CHH5:1;
  unsigned :3;
  unsigned CHH9:1;
  unsigned CHH10:1;
  unsigned CHH11:1;
  unsigned CHH12:1;
  unsigned CHH13:1;
  unsigned CHH14:1;
  unsigned CHH15:1;
} AD1CHITLBITS;
extern volatile AD1CHITLBITS AD1CHITLbits __attribute__((__sfr__));

#define CTMUCON1L CTMUCON1L
extern volatile unsigned int  CTMUCON1L __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCON1LBITS {
  union {
    struct {
      unsigned IRNG:2;
      unsigned ITRIM:6;
      unsigned CTTRIG:1;
      unsigned IDISSEN:1;
      unsigned EDGSEQEN:1;
      unsigned EDGEN:1;
      unsigned TGEN:1;
      unsigned CTMUSIDL:1;
      unsigned :1;
      unsigned CTMUEN:1;
    };
    struct {
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
} CTMUCON1LBITS;
extern volatile CTMUCON1LBITS CTMUCON1Lbits __attribute__((__sfr__));

#define CTMUCON1H CTMUCON1H
extern volatile unsigned int  CTMUCON1H __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCON1HBITS {
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
} CTMUCON1HBITS;
extern volatile CTMUCON1HBITS CTMUCON1Hbits __attribute__((__sfr__));

#define CTMUCON2 CTMUCON2
extern volatile unsigned int  CTMUCON2 __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCON2BITS {
  union {
    struct {
      unsigned DISCHS:3;
      unsigned :1;
      unsigned IRSTEN:1;
    };
    struct {
      unsigned DISCHS0:1;
      unsigned DISCHS1:1;
      unsigned DISCHS2:1;
    };
  };
} CTMUCON2BITS;
extern volatile CTMUCON2BITS CTMUCON2bits __attribute__((__sfr__));

#define CTMUCON2L CTMUCON2L
extern volatile unsigned int  CTMUCON2L __attribute__((__sfr__));
__extension__ typedef struct tagCTMUCON2LBITS {
  union {
    struct {
      unsigned DISCHS:3;
      unsigned :1;
      unsigned IRSTEN:1;
    };
    struct {
      unsigned DISCHS0:1;
      unsigned DISCHS1:1;
      unsigned DISCHS2:1;
    };
  };
} CTMUCON2LBITS;
extern volatile CTMUCON2LBITS CTMUCON2Lbits __attribute__((__sfr__));

#define AD1CTMENH AD1CTMENH
extern volatile unsigned int  AD1CTMENH __attribute__((__sfr__));
typedef struct tagAD1CTMENHBITS {
  unsigned CTMEN16:1;
  unsigned CTMEN17:1;
  unsigned CTMEN18:1;
  unsigned CTMEN19:1;
  unsigned CTMEN20:1;
  unsigned CTMEN21:1;
  unsigned CTMEN22:1;
  unsigned CTMEN23:1;
} AD1CTMENHBITS;
extern volatile AD1CTMENHBITS AD1CTMENHbits __attribute__((__sfr__));

#define AD1CTMENL AD1CTMENL
extern volatile unsigned int  AD1CTMENL __attribute__((__sfr__));
typedef struct tagAD1CTMENLBITS {
  unsigned CTMEN0:1;
  unsigned CTMEN1:1;
  unsigned CTMEN2:1;
  unsigned CTMEN3:1;
  unsigned CTMEN4:1;
  unsigned CTMEN5:1;
  unsigned :3;
  unsigned CTMEN9:1;
  unsigned CTMEN10:1;
  unsigned CTMEN11:1;
  unsigned CTMEN12:1;
  unsigned CTMEN13:1;
  unsigned CTMEN14:1;
  unsigned CTMEN15:1;
} AD1CTMENLBITS;
extern volatile AD1CTMENLBITS AD1CTMENLbits __attribute__((__sfr__));

#define ANSA ANSA
extern volatile unsigned int  ANSA __attribute__((__sfr__));
typedef struct tagANSABITS {
  unsigned ANSA0:1;
  unsigned ANSA1:1;
  unsigned ANSA2:1;
  unsigned ANSA3:1;
  unsigned ANSA4:1;
} ANSABITS;
extern volatile ANSABITS ANSAbits __attribute__((__sfr__));

#define ANSB ANSB
extern volatile unsigned int  ANSB __attribute__((__sfr__));
typedef struct tagANSBBITS {
  unsigned ANSB0:1;
  unsigned ANSB1:1;
  unsigned ANSB2:1;
  unsigned ANSB3:1;
  unsigned ANSB4:1;
  unsigned ANSB5:1;
  unsigned ANSB6:1;
  unsigned ANSB7:1;
  unsigned ANSB8:1;
  unsigned ANSB9:1;
  unsigned :2;
  unsigned ANSB12:1;
  unsigned ANSB13:1;
  unsigned ANSB14:1;
  unsigned ANSB15:1;
} ANSBBITS;
extern volatile ANSBBITS ANSBbits __attribute__((__sfr__));

#define CMSTAT CMSTAT
extern volatile unsigned int  CMSTAT __attribute__((__sfr__));
typedef struct tagCMSTATBITS {
  unsigned C1OUT:1;
  unsigned :7;
  unsigned C1EVT:1;
  unsigned :6;
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
      unsigned CREF:2;
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
      unsigned :2;
      unsigned CREF0:1;
      unsigned CREF1:1;
      unsigned EVPOL0:1;
      unsigned EVPOL1:1;
    };
  };
} CM1CONBITS;
extern volatile CM1CONBITS CM1CONbits __attribute__((__sfr__));

#define BUFCON0 BUFCON0
extern volatile unsigned int  BUFCON0 __attribute__((__sfr__));
__extension__ typedef struct tagBUFCON0BITS {
  union {
    struct {
      unsigned BUFREF:2;
    };
    struct {
      unsigned BUFREF0:1;
      unsigned BUFREF1:1;
    };
  };
} BUFCON0BITS;
extern volatile BUFCON0BITS BUFCON0bits __attribute__((__sfr__));

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
      unsigned :2;
      unsigned RETEN:1;
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
      unsigned LSIDL:1;
      unsigned :1;
      unsigned HLVDEN:1;
    };
    struct {
      unsigned HLVDL0:1;
      unsigned HLVDL1:1;
      unsigned HLVDL2:1;
      unsigned HLVDL3:1;
      unsigned :9;
      unsigned HLSIDL:1;
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
typedef struct tagPMD1BITS {
  unsigned ADC1MD:1;
  unsigned :4;
  unsigned U1MD:1;
  unsigned :1;
  unsigned SSP1MD:1;
  unsigned :3;
  unsigned T1MD:1;
} PMD1BITS;
extern volatile PMD1BITS PMD1bits __attribute__((__sfr__));

#define PMD2 PMD2
extern volatile unsigned int  PMD2 __attribute__((__sfr__));
typedef struct tagPMD2BITS {
  unsigned CCP1MD:1;
  unsigned CCP2MD:1;
} PMD2BITS;
extern volatile PMD2BITS PMD2bits __attribute__((__sfr__));

#define PMD3 PMD3
extern volatile unsigned int  PMD3 __attribute__((__sfr__));
typedef struct tagPMD3BITS {
  unsigned :10;
  unsigned CMPMD:1;
} PMD3BITS;
extern volatile PMD3BITS PMD3bits __attribute__((__sfr__));

#define PMD4 PMD4
extern volatile unsigned int  PMD4 __attribute__((__sfr__));
typedef struct tagPMD4BITS {
  unsigned :1;
  unsigned HLVDMD:1;
  unsigned CTMUMD:1;
  unsigned REFOMD:1;
  unsigned :2;
  unsigned ULPWUMD:1;
} PMD4BITS;
extern volatile PMD4BITS PMD4bits __attribute__((__sfr__));

#define PMD8 PMD8
extern volatile unsigned int  PMD8 __attribute__((__sfr__));
typedef struct tagPMD8BITS {
  unsigned :2;
  unsigned CLC1MD:1;
} PMD8BITS;
extern volatile PMD8BITS PMD8bits __attribute__((__sfr__));



/* ---------------------------------------------------------- */
/* Defines for unique SFR bit names                           */
/* ---------------------------------------------------------- */

/* TBLPAG */
#define _TBLPAG TBLPAGbits.TBLPAG

/* PSVPAG */
#define _PSVPAG PSVPAGbits.PSVPAG

/* SR */
#define _C SRbits.C
#define _Z SRbits.Z
#define _OV SRbits.OV
#define _N SRbits.N
#define _RA SRbits.RA
#define _IPL0 SRbits.IPL0
#define _IPL1 SRbits.IPL1
#define _IPL2 SRbits.IPL2
#define _DC SRbits.DC
#define _IPL SRbits.IPL

/* CORCON */
#define _IPL3 CORCONbits.IPL3

/* DISICNT */
#define _DISICNT DISICNTbits.DISICNT

/* CNPD1 */
#define _CN0PDE CNPD1bits.CN0PDE
#define _CN1PDE CNPD1bits.CN1PDE
#define _CN2PDE CNPD1bits.CN2PDE
#define _CN3PDE CNPD1bits.CN3PDE
#define _CN4PDE CNPD1bits.CN4PDE
#define _CN5PDE CNPD1bits.CN5PDE
#define _CN6PDE CNPD1bits.CN6PDE
#define _CN7PDE CNPD1bits.CN7PDE
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
#define _CCP2IF IFS0bits.CCP2IF
#define _T1IF IFS0bits.T1IF
#define _CCT1IF IFS0bits.CCT1IF
#define _CCT2IF IFS0bits.CCT2IF
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
#define _INT2IF IFS1bits.INT2IF

/* IFS4 */
#define _U1ERIF IFS4bits.U1ERIF
#define _HLVDIF IFS4bits.HLVDIF
#define _CTMUIF IFS4bits.CTMUIF

/* IFS5 */
#define _ULPWUIF IFS5bits.ULPWUIF

/* IFS6 */
#define _CLC1IF IFS6bits.CLC1IF

/* IEC0 */
#define _INT0IE IEC0bits.INT0IE
#define _CCP1IE IEC0bits.CCP1IE
#define _CCP2IE IEC0bits.CCP2IE
#define _T1IE IEC0bits.T1IE
#define _CCT1IE IEC0bits.CCT1IE
#define _CCT2IE IEC0bits.CCT2IE
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
#define _INT2IE IEC1bits.INT2IE

/* IEC4 */
#define _U1ERIE IEC4bits.U1ERIE
#define _HLVDIE IEC4bits.HLVDIE
#define _CTMUIE IEC4bits.CTMUIE

/* IEC5 */
#define _ULPWUIE IEC5bits.ULPWUIE

/* IEC6 */
#define _CLC1IE IEC6bits.CLC1IE

/* IPC0 */
#define _INT0IP IPC0bits.INT0IP
#define _CCP1IP IPC0bits.CCP1IP
#define _CCP2IP IPC0bits.CCP2IP
#define _T1IP IPC0bits.T1IP
#define _INT0IP0 IPC0bits.INT0IP0
#define _INT0IP1 IPC0bits.INT0IP1
#define _INT0IP2 IPC0bits.INT0IP2
#define _CC1IP0 IPC0bits.CC1IP0
#define _CC1IP1 IPC0bits.CC1IP1
#define _CC1IP2 IPC0bits.CC1IP2
#define _CC2IP0 IPC0bits.CC2IP0
#define _CC2IP1 IPC0bits.CC2IP1
#define _CC2IP2 IPC0bits.CC2IP2
#define _T1IP0 IPC0bits.T1IP0
#define _T1IP1 IPC0bits.T1IP1
#define _T1IP2 IPC0bits.T1IP2

/* IPC1 */
#define _CCT1IP IPC1bits.CCT1IP
#define _CCT1IP0 IPC1bits.CCT1IP0
#define _CCT1IP1 IPC1bits.CCT1IP1
#define _CCT1IP2 IPC1bits.CCT1IP2

/* IPC2 */
#define _CCT2IP IPC2bits.CCT2IP
#define _U1RXIP IPC2bits.U1RXIP
#define _CCT2IP0 IPC2bits.CCT2IP0
#define _CCT2IP1 IPC2bits.CCT2IP1
#define _CCT2IP2 IPC2bits.CCT2IP2
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

/* IPC7 */
#define _INT2IP IPC7bits.INT2IP
#define _INT2IP0 IPC7bits.INT2IP0
#define _INT2IP1 IPC7bits.INT2IP1
#define _INT2IP2 IPC7bits.INT2IP2

/* IPC16 */
#define _U1ERIP IPC16bits.U1ERIP
#define _U1ERIP0 IPC16bits.U1ERIP0
#define _U1ERIP1 IPC16bits.U1ERIP1
#define _U1ERIP2 IPC16bits.U1ERIP2

/* IPC18 */
#define _HLVDIP IPC18bits.HLVDIP
#define _HLVDIP0 IPC18bits.HLVDIP0
#define _HLVDIP1 IPC18bits.HLVDIP1
#define _HLVDIP2 IPC18bits.HLVDIP2

/* IPC19 */
#define _CTMUIP IPC19bits.CTMUIP
#define _CTMUIP0 IPC19bits.CTMUIP0
#define _CTMUIP1 IPC19bits.CTMUIP1
#define _CTMUIP2 IPC19bits.CTMUIP2

/* IPC20 */
#define _ULPWUIP IPC20bits.ULPWUIP
#define _ULPWUIP0 IPC20bits.ULPWUIP0
#define _ULPWUIP1 IPC20bits.ULPWUIP1
#define _ULPWUIP2 IPC20bits.ULPWUIP2

/* IPC24 */
#define _CLC1IP IPC24bits.CLC1IP
#define _CLC1IP0 IPC24bits.CLC1IP0
#define _CLC1IP1 IPC24bits.CLC1IP1
#define _CLC1IP2 IPC24bits.CLC1IP2

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
#define _TGATE T1CONbits.TGATE
#define _TECS T1CONbits.TECS
#define _TSIDL T1CONbits.TSIDL
#define _TON T1CONbits.TON
#define _TCKPS0 T1CONbits.TCKPS0
#define _TCKPS1 T1CONbits.TCKPS1
#define _T1ECS0 T1CONbits.T1ECS0
#define _T1ECS1 T1CONbits.T1ECS1
#define _T1ECS T1CONbits.T1ECS
#define _TECS0 T1CONbits.TECS0
#define _TECS1 T1CONbits.TECS1
#define _TIECS T1CONbits.TIECS
#define _TIECS0 T1CONbits.TIECS0
#define _TIECS1 T1CONbits.TIECS1

/* CLC1CONL */
#define _MODE CLC1CONLbits.MODE
#define _LCPOL CLC1CONLbits.LCPOL
#define _LCOUT CLC1CONLbits.LCOUT
#define _LCOE CLC1CONLbits.LCOE
#define _INTN CLC1CONLbits.INTN
#define _INTP CLC1CONLbits.INTP
#define _LCEN CLC1CONLbits.LCEN
#define _MODE0 CLC1CONLbits.MODE0
#define _MODE1 CLC1CONLbits.MODE1
#define _MODE2 CLC1CONLbits.MODE2

/* CLC1CONH */
#define _G1POL CLC1CONHbits.G1POL
#define _G2POL CLC1CONHbits.G2POL
#define _G3POL CLC1CONHbits.G3POL
#define _G4POL CLC1CONHbits.G4POL

/* CLC1SEL */
#define _DS1 CLC1SELbits.DS1
#define _DS2 CLC1SELbits.DS2
#define _DS3 CLC1SELbits.DS3
#define _DS4 CLC1SELbits.DS4
#define _DS10 CLC1SELbits.DS10
#define _DS11 CLC1SELbits.DS11
#define _DS12 CLC1SELbits.DS12
#define _DS20 CLC1SELbits.DS20
#define _DS21 CLC1SELbits.DS21
#define _DS22 CLC1SELbits.DS22
#define _DS30 CLC1SELbits.DS30
#define _DS31 CLC1SELbits.DS31
#define _DS32 CLC1SELbits.DS32
#define _DS40 CLC1SELbits.DS40
#define _DS41 CLC1SELbits.DS41
#define _DS42 CLC1SELbits.DS42

/* CLC1GLSL */
#define _G1D1N CLC1GLSLbits.G1D1N
#define _G1D1T CLC1GLSLbits.G1D1T
#define _G1D2N CLC1GLSLbits.G1D2N
#define _G1D2T CLC1GLSLbits.G1D2T
#define _G1D3N CLC1GLSLbits.G1D3N
#define _G1D3T CLC1GLSLbits.G1D3T
#define _G1D4N CLC1GLSLbits.G1D4N
#define _G1D4T CLC1GLSLbits.G1D4T
#define _G2D1N CLC1GLSLbits.G2D1N
#define _G2D1T CLC1GLSLbits.G2D1T
#define _G2D2N CLC1GLSLbits.G2D2N
#define _G2D2T CLC1GLSLbits.G2D2T
#define _G2D3N CLC1GLSLbits.G2D3N
#define _G2D3T CLC1GLSLbits.G2D3T
#define _G2D4N CLC1GLSLbits.G2D4N
#define _G2D4T CLC1GLSLbits.G2D4T

/* CLC1GLSH */
#define _G3D1N CLC1GLSHbits.G3D1N
#define _G3D1T CLC1GLSHbits.G3D1T
#define _G3D2N CLC1GLSHbits.G3D2N
#define _G3D2T CLC1GLSHbits.G3D2T
#define _G3D3N CLC1GLSHbits.G3D3N
#define _G3D3T CLC1GLSHbits.G3D3T
#define _G3D4N CLC1GLSHbits.G3D4N
#define _G3D4T CLC1GLSHbits.G3D4T
#define _G4D1N CLC1GLSHbits.G4D1N
#define _G4D1T CLC1GLSHbits.G4D1T
#define _G4D2N CLC1GLSHbits.G4D2N
#define _G4D2T CLC1GLSHbits.G4D2T
#define _G4D3N CLC1GLSHbits.G4D3N
#define _G4D3T CLC1GLSHbits.G4D3T
#define _G4D4N CLC1GLSHbits.G4D4N
#define _G4D4T CLC1GLSHbits.G4D4T

/* CCP1CON1L */
/* Bitname _MOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TMRSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSLP cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CCPON cannot be defined because it is used by more than one SFR */
/* Bitname _MOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD3 cannot be defined because it is used by more than one SFR */
/* Bitname _TMR32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD3 cannot be defined because it is used by more than one SFR */

/* CCP1CON1H */
/* Bitname _SYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ALTSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ONESHOT cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPS cannot be defined because it is used by more than one SFR */
/* Bitname _RTRGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPSSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC4 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _OPSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS3 cannot be defined because it is used by more than one SFR */

/* CCP1CON2L */
/* Bitname _ASDG cannot be defined because it is used by more than one SFR */
/* Bitname _SSDG cannot be defined because it is used by more than one SFR */
/* Bitname _ASDGM cannot be defined because it is used by more than one SFR */
/* Bitname _PWMRSEN cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG0 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG1 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG2 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG3 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG4 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG5 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG6 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG7 cannot be defined because it is used by more than one SFR */

/* CCP1CON2H */
/* Bitname _ICS cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM cannot be defined because it is used by more than one SFR */
/* Bitname _OCAEN cannot be defined because it is used by more than one SFR */
#define _OCBEN CCP1CON2Hbits.OCBEN
#define _OCCEN CCP1CON2Hbits.OCCEN
#define _OCDEN CCP1CON2Hbits.OCDEN
#define _OCEEN CCP1CON2Hbits.OCEEN
#define _OCFEN CCP1CON2Hbits.OCFEN
/* Bitname _OENSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ICS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS2 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT0 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL2 cannot be defined because it is used by more than one SFR */

/* CCP1CON3L */
#define _DT CCP1CON3Lbits.DT
#define _DT0 CCP1CON3Lbits.DT0
#define _DT1 CCP1CON3Lbits.DT1
#define _DT2 CCP1CON3Lbits.DT2
#define _DT3 CCP1CON3Lbits.DT3
#define _DT4 CCP1CON3Lbits.DT4
#define _DT5 CCP1CON3Lbits.DT5

/* CCP1CON3H */
#define _PSSBDF CCP1CON3Hbits.PSSBDF
/* Bitname _PSSACE cannot be defined because it is used by more than one SFR */
#define _POLBDF CCP1CON3Hbits.POLBDF
/* Bitname _POLACE cannot be defined because it is used by more than one SFR */
#define _OUTM CCP1CON3Hbits.OUTM
/* Bitname _OSCNT cannot be defined because it is used by more than one SFR */
/* Bitname _OETRIG cannot be defined because it is used by more than one SFR */
#define _PSSBDF0 CCP1CON3Hbits.PSSBDF0
#define _PSSBDF1 CCP1CON3Hbits.PSSBDF1
/* Bitname _PSSACE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE1 cannot be defined because it is used by more than one SFR */
#define _OUTM0 CCP1CON3Hbits.OUTM0
#define _OUTM1 CCP1CON3Hbits.OUTM1
#define _OUTM2 CCP1CON3Hbits.OUTM2
/* Bitname _OSCNT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT2 cannot be defined because it is used by more than one SFR */

/* CCP1STAT */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* CCP2CON1L */
/* Bitname _MOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCSEL cannot be defined because it is used by more than one SFR */
/* Bitname _T32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL cannot be defined because it is used by more than one SFR */
/* Bitname _TMRSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSLP cannot be defined because it is used by more than one SFR */
/* Bitname _CCPSIDL cannot be defined because it is used by more than one SFR */
/* Bitname _CCPON cannot be defined because it is used by more than one SFR */
/* Bitname _MOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _MOD3 cannot be defined because it is used by more than one SFR */
/* Bitname _TMR32 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _TMRPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _CLKSEL2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD0 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD1 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD2 cannot be defined because it is used by more than one SFR */
/* Bitname _CCPMOD3 cannot be defined because it is used by more than one SFR */

/* CCP2CON1H */
/* Bitname _SYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ALTSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ONESHOT cannot be defined because it is used by more than one SFR */
/* Bitname _TRIGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPS cannot be defined because it is used by more than one SFR */
/* Bitname _RTRGEN cannot be defined because it is used by more than one SFR */
/* Bitname _OPSSRC cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC0 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC1 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC2 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC3 cannot be defined because it is used by more than one SFR */
/* Bitname _SYNC4 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _OPS3 cannot be defined because it is used by more than one SFR */
/* Bitname _OPSRC cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS0 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS1 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS2 cannot be defined because it is used by more than one SFR */
/* Bitname _IOPS3 cannot be defined because it is used by more than one SFR */

/* CCP2CON2L */
/* Bitname _ASDG cannot be defined because it is used by more than one SFR */
/* Bitname _SSDG cannot be defined because it is used by more than one SFR */
/* Bitname _ASDGM cannot be defined because it is used by more than one SFR */
/* Bitname _PWMRSEN cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG0 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG1 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG2 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG3 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG4 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG5 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG6 cannot be defined because it is used by more than one SFR */
/* Bitname _ASDG7 cannot be defined because it is used by more than one SFR */

/* CCP2CON2H */
/* Bitname _ICS cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM cannot be defined because it is used by more than one SFR */
/* Bitname _OCAEN cannot be defined because it is used by more than one SFR */
/* Bitname _OENSYNC cannot be defined because it is used by more than one SFR */
/* Bitname _ICS0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICS2 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT0 cannot be defined because it is used by more than one SFR */
/* Bitname _AUXOUT1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICGSM1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL0 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL1 cannot be defined because it is used by more than one SFR */
/* Bitname _ICSEL2 cannot be defined because it is used by more than one SFR */

/* CCP2CON3H */
/* Bitname _PSSACE cannot be defined because it is used by more than one SFR */
/* Bitname _POLACE cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT cannot be defined because it is used by more than one SFR */
/* Bitname _OETRIG cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE0 cannot be defined because it is used by more than one SFR */
/* Bitname _PSSACE1 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT0 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT1 cannot be defined because it is used by more than one SFR */
/* Bitname _OSCNT2 cannot be defined because it is used by more than one SFR */

/* CCP2STAT */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* CCP2STATL */
/* Bitname _ICBNE cannot be defined because it is used by more than one SFR */
/* Bitname _ICOV cannot be defined because it is used by more than one SFR */
/* Bitname _ICDIS cannot be defined because it is used by more than one SFR */
/* Bitname _SCEVT cannot be defined because it is used by more than one SFR */
/* Bitname _ASEVT cannot be defined because it is used by more than one SFR */
/* Bitname _TRCLR cannot be defined because it is used by more than one SFR */
/* Bitname _TRSET cannot be defined because it is used by more than one SFR */
/* Bitname _CCPTRIG cannot be defined because it is used by more than one SFR */
/* Bitname _ICGARM cannot be defined because it is used by more than one SFR */
/* Bitname _TRIG cannot be defined because it is used by more than one SFR */

/* SPI1BUF */
#define _SSPBUF SPI1BUFbits.SSPBUF
#define _SPI1BUF SPI1BUFbits.SPI1BUF

/* SSP1CON1 */
#define _SSPM SSP1CON1bits.SSPM
#define _CKP SSP1CON1bits.CKP
#define _SSPEN SSP1CON1bits.SSPEN
#define _SSPOV SSP1CON1bits.SSPOV
#define _WCOL SSP1CON1bits.WCOL
#define _SSPM0 SSP1CON1bits.SSPM0
#define _SSPM1 SSP1CON1bits.SSPM1
#define _SSPM2 SSP1CON1bits.SSPM2
#define _SSPM3 SSP1CON1bits.SSPM3

/* SSP1CON2 */
#define _SEN SSP1CON2bits.SEN
#define _RSEN SSP1CON2bits.RSEN
#define _PEN SSP1CON2bits.PEN
#define _RCEN SSP1CON2bits.RCEN
#define _ACKEN SSP1CON2bits.ACKEN
#define _ACKDT SSP1CON2bits.ACKDT
#define _ACKSTAT SSP1CON2bits.ACKSTAT
#define _GCEN SSP1CON2bits.GCEN
#define _ADMSK SSP1CON2bits.ADMSK
#define _ADMSK1 SSP1CON2bits.ADMSK1
#define _ADMSK2 SSP1CON2bits.ADMSK2
#define _ADMSK3 SSP1CON2bits.ADMSK3
#define _ADMSK4 SSP1CON2bits.ADMSK4
#define _ADMSK5 SSP1CON2bits.ADMSK5

/* SSP1CON3 */
#define _DHEN SSP1CON3bits.DHEN
#define _AHEN SSP1CON3bits.AHEN
#define _SBCDE SSP1CON3bits.SBCDE
#define _SDAHT SSP1CON3bits.SDAHT
#define _BOEN SSP1CON3bits.BOEN
#define _SCIE SSP1CON3bits.SCIE
#define _PCIE SSP1CON3bits.PCIE
#define _ACKTIM SSP1CON3bits.ACKTIM

/* SSP1STAT */
#define _BF SSP1STATbits.BF
#define _UA SSP1STATbits.UA
#define _R_NOT_W SSP1STATbits.R_NOT_W
#define _S SSP1STATbits.S
#define _P SSP1STATbits.P
#define _D_NOT_A SSP1STATbits.D_NOT_A
#define _CKE SSP1STATbits.CKE
#define _SMP SSP1STATbits.SMP
#define _R_W SSP1STATbits.R_W
#define _D_A SSP1STATbits.D_A
#define _NOT_W SSP1STATbits.NOT_W
#define _NOT_A SSP1STATbits.NOT_A
#define _NOT_WRITE SSP1STATbits.NOT_WRITE
#define _NOT_ADDRESS SSP1STATbits.NOT_ADDRESS
#define _READ_WRITE SSP1STATbits.READ_WRITE
#define _DATA_ADDRESS SSP1STATbits.DATA_ADDRESS
#define _I2C_READ SSP1STATbits.I2C_READ
#define _I2C_START SSP1STATbits.I2C_START
#define _I2C_STOP SSP1STATbits.I2C_STOP
#define _I2C_DAT SSP1STATbits.I2C_DAT

/* I2C1ADD */
#define _SSPADD I2C1ADDbits.SSPADD
#define _I2CADD I2C1ADDbits.I2CADD

/* I2C1MSK */
#define _MSK0 I2C1MSKbits.MSK0
#define _MSK1 I2C1MSKbits.MSK1
#define _MSK2 I2C1MSKbits.MSK2
#define _MSK3 I2C1MSKbits.MSK3
#define _MSK4 I2C1MSKbits.MSK4
#define _MSK5 I2C1MSKbits.MSK5
#define _MSK6 I2C1MSKbits.MSK6
#define _MSK7 I2C1MSKbits.MSK7
#define _AMSK I2C1MSKbits.AMSK

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

/* TRISA */
#define _TRISA0 TRISAbits.TRISA0
#define _TRISA1 TRISAbits.TRISA1
#define _TRISA2 TRISAbits.TRISA2
#define _TRISA3 TRISAbits.TRISA3
#define _TRISA4 TRISAbits.TRISA4
#define _TRISA7 TRISAbits.TRISA7

/* PORTA */
#define _RA0 PORTAbits.RA0
#define _RA1 PORTAbits.RA1
#define _RA2 PORTAbits.RA2
#define _RA3 PORTAbits.RA3
#define _RA4 PORTAbits.RA4
#define _RA5 PORTAbits.RA5
#define _RA7 PORTAbits.RA7

/* LATA */
#define _LATA0 LATAbits.LATA0
#define _LATA1 LATAbits.LATA1
#define _LATA2 LATAbits.LATA2
#define _LATA3 LATAbits.LATA3
#define _LATA4 LATAbits.LATA4
#define _LATA7 LATAbits.LATA7

/* ODCA */
#define _ODA0 ODCAbits.ODA0
#define _ODA1 ODCAbits.ODA1
#define _ODA2 ODCAbits.ODA2
#define _ODA3 ODCAbits.ODA3
#define _ODA4 ODCAbits.ODA4
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
#define _SDA1DIS PADCFG1bits.SDA1DIS

/* AD1CON1 */
#define _DONE AD1CON1bits.DONE
#define _SAMP AD1CON1bits.SAMP
#define _ASAM AD1CON1bits.ASAM
#define _SSRC AD1CON1bits.SSRC
#define _FORM AD1CON1bits.FORM
#define _MODE12 AD1CON1bits.MODE12
#define _ADSIDL AD1CON1bits.ADSIDL
#define _ADON AD1CON1bits.ADON
#define _SSRC0 AD1CON1bits.SSRC0
#define _SSRC1 AD1CON1bits.SSRC1
#define _SSRC2 AD1CON1bits.SSRC2
#define _SSRC3 AD1CON1bits.SSRC3
#define _FORM0 AD1CON1bits.FORM0
#define _FORM1 AD1CON1bits.FORM1

/* AD1CON2 */
#define _ALTS AD1CON2bits.ALTS
#define _BUFM AD1CON2bits.BUFM
#define _SMPI AD1CON2bits.SMPI
#define _BUFS AD1CON2bits.BUFS
#define _CSCNA AD1CON2bits.CSCNA
#define _BUFREGEN AD1CON2bits.BUFREGEN
#define _OFFCAL AD1CON2bits.OFFCAL
#define _NVCFG0 AD1CON2bits.NVCFG0
#define _PVCFG AD1CON2bits.PVCFG
#define _SMPI0 AD1CON2bits.SMPI0
#define _SMPI1 AD1CON2bits.SMPI1
#define _SMPI2 AD1CON2bits.SMPI2
#define _SMPI3 AD1CON2bits.SMPI3
#define _SMPI4 AD1CON2bits.SMPI4
#define _PCVFG0 AD1CON2bits.PCVFG0
#define _PCVFG1 AD1CON2bits.PCVFG1

/* AD1CON3 */
#define _ADCS AD1CON3bits.ADCS
#define _SAMC AD1CON3bits.SAMC
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
#define _CH0SA4 AD1CHSbits.CH0SA4
#define _CH0NA0 AD1CHSbits.CH0NA0
#define _CH0NA1 AD1CHSbits.CH0NA1
#define _CH0NA2 AD1CHSbits.CH0NA2
#define _CH0SB0 AD1CHSbits.CH0SB0
#define _CH0SB1 AD1CHSbits.CH0SB1
#define _CH0SB2 AD1CHSbits.CH0SB2
#define _CH0SB3 AD1CHSbits.CH0SB3
#define _CH0SB4 AD1CHSbits.CH0SB4
#define _CH0NB0 AD1CHSbits.CH0NB0
#define _CH0NB1 AD1CHSbits.CH0NB1
#define _CH0NB2 AD1CHSbits.CH0NB2

/* AD1CSSH */
#define _CSS16 AD1CSSHbits.CSS16
#define _CSS17 AD1CSSHbits.CSS17
#define _CSS18 AD1CSSHbits.CSS18
#define _CSS19 AD1CSSHbits.CSS19
#define _CSS20 AD1CSSHbits.CSS20
#define _CSS21 AD1CSSHbits.CSS21
#define _CSS22 AD1CSSHbits.CSS22
#define _CSS23 AD1CSSHbits.CSS23
#define _CSS26 AD1CSSHbits.CSS26
#define _CSS27 AD1CSSHbits.CSS27
#define _CSS28 AD1CSSHbits.CSS28
#define _CSS29 AD1CSSHbits.CSS29
#define _CSS30 AD1CSSHbits.CSS30

/* AD1CSSL */
#define _CSS0 AD1CSSLbits.CSS0
#define _CSS1 AD1CSSLbits.CSS1
#define _CSS2 AD1CSSLbits.CSS2
#define _CSS3 AD1CSSLbits.CSS3
#define _CSS4 AD1CSSLbits.CSS4
#define _CSS5 AD1CSSLbits.CSS5
#define _CSS9 AD1CSSLbits.CSS9
#define _CSS10 AD1CSSLbits.CSS10
#define _CSS11 AD1CSSLbits.CSS11
#define _CSS12 AD1CSSLbits.CSS12
#define _CSS13 AD1CSSLbits.CSS13
#define _CSS14 AD1CSSLbits.CSS14
#define _CSS15 AD1CSSLbits.CSS15

/* AD1CON5 */
/* Bitname _CM cannot be defined because it is used by more than one SFR */
#define _WM AD1CON5bits.WM
#define _ASINT AD1CON5bits.ASINT
#define _BGREQ AD1CON5bits.BGREQ
#define _CTMREQ AD1CON5bits.CTMREQ
#define _LPEN AD1CON5bits.LPEN
#define _ASEN AD1CON5bits.ASEN
#define _CM0 AD1CON5bits.CM0
#define _CM1 AD1CON5bits.CM1
#define _WM0 AD1CON5bits.WM0
#define _WM1 AD1CON5bits.WM1
#define _ASINT0 AD1CON5bits.ASINT0
#define _ASINT1 AD1CON5bits.ASINT1

/* AD1CHITH */
#define _CHH16 AD1CHITHbits.CHH16
#define _CHH17 AD1CHITHbits.CHH17
#define _CHH18 AD1CHITHbits.CHH18
#define _CHH19 AD1CHITHbits.CHH19
#define _CHH20 AD1CHITHbits.CHH20
#define _CHH21 AD1CHITHbits.CHH21
#define _CHH22 AD1CHITHbits.CHH22
#define _CHH23 AD1CHITHbits.CHH23

/* AD1CHITL */
#define _CHH0 AD1CHITLbits.CHH0
#define _CHH1 AD1CHITLbits.CHH1
#define _CHH2 AD1CHITLbits.CHH2
#define _CHH3 AD1CHITLbits.CHH3
#define _CHH4 AD1CHITLbits.CHH4
#define _CHH5 AD1CHITLbits.CHH5
#define _CHH9 AD1CHITLbits.CHH9
#define _CHH10 AD1CHITLbits.CHH10
#define _CHH11 AD1CHITLbits.CHH11
#define _CHH12 AD1CHITLbits.CHH12
#define _CHH13 AD1CHITLbits.CHH13
#define _CHH14 AD1CHITLbits.CHH14
#define _CHH15 AD1CHITLbits.CHH15

/* CTMUCON1L */
#define _IRNG CTMUCON1Lbits.IRNG
#define _ITRIM CTMUCON1Lbits.ITRIM
#define _CTTRIG CTMUCON1Lbits.CTTRIG
#define _IDISSEN CTMUCON1Lbits.IDISSEN
#define _EDGSEQEN CTMUCON1Lbits.EDGSEQEN
#define _EDGEN CTMUCON1Lbits.EDGEN
#define _TGEN CTMUCON1Lbits.TGEN
#define _CTMUSIDL CTMUCON1Lbits.CTMUSIDL
#define _CTMUEN CTMUCON1Lbits.CTMUEN
#define _IRNG0 CTMUCON1Lbits.IRNG0
#define _IRNG1 CTMUCON1Lbits.IRNG1
#define _ITRIM0 CTMUCON1Lbits.ITRIM0
#define _ITRIM1 CTMUCON1Lbits.ITRIM1
#define _ITRIM2 CTMUCON1Lbits.ITRIM2
#define _ITRIM3 CTMUCON1Lbits.ITRIM3
#define _ITRIM4 CTMUCON1Lbits.ITRIM4
#define _ITRIM5 CTMUCON1Lbits.ITRIM5

/* CTMUCON1H */
#define _EDG2SEL CTMUCON1Hbits.EDG2SEL
#define _EDG2POL CTMUCON1Hbits.EDG2POL
#define _EDG2MOD CTMUCON1Hbits.EDG2MOD
#define _EDG1STAT CTMUCON1Hbits.EDG1STAT
#define _EDG2STAT CTMUCON1Hbits.EDG2STAT
#define _EDG1SEL CTMUCON1Hbits.EDG1SEL
#define _EDG1POL CTMUCON1Hbits.EDG1POL
#define _EDG1MOD CTMUCON1Hbits.EDG1MOD
#define _EDG2SEL0 CTMUCON1Hbits.EDG2SEL0
#define _EDG2SEL1 CTMUCON1Hbits.EDG2SEL1
#define _EDG2SEL2 CTMUCON1Hbits.EDG2SEL2
#define _EDG2SEL3 CTMUCON1Hbits.EDG2SEL3
#define _EDG1SEL0 CTMUCON1Hbits.EDG1SEL0
#define _EDG1SEL1 CTMUCON1Hbits.EDG1SEL1
#define _EDG1SEL2 CTMUCON1Hbits.EDG1SEL2
#define _EDG1SEL3 CTMUCON1Hbits.EDG1SEL3

/* CTMUCON2 */
#define _DISCHS CTMUCON2bits.DISCHS
#define _IRSTEN CTMUCON2bits.IRSTEN
#define _DISCHS0 CTMUCON2bits.DISCHS0
#define _DISCHS1 CTMUCON2bits.DISCHS1
#define _DISCHS2 CTMUCON2bits.DISCHS2

/* AD1CTMENH */
#define _CTMEN16 AD1CTMENHbits.CTMEN16
#define _CTMEN17 AD1CTMENHbits.CTMEN17
#define _CTMEN18 AD1CTMENHbits.CTMEN18
#define _CTMEN19 AD1CTMENHbits.CTMEN19
#define _CTMEN20 AD1CTMENHbits.CTMEN20
#define _CTMEN21 AD1CTMENHbits.CTMEN21
#define _CTMEN22 AD1CTMENHbits.CTMEN22
#define _CTMEN23 AD1CTMENHbits.CTMEN23

/* AD1CTMENL */
#define _CTMEN0 AD1CTMENLbits.CTMEN0
#define _CTMEN1 AD1CTMENLbits.CTMEN1
#define _CTMEN2 AD1CTMENLbits.CTMEN2
#define _CTMEN3 AD1CTMENLbits.CTMEN3
#define _CTMEN4 AD1CTMENLbits.CTMEN4
#define _CTMEN5 AD1CTMENLbits.CTMEN5
#define _CTMEN9 AD1CTMENLbits.CTMEN9
#define _CTMEN10 AD1CTMENLbits.CTMEN10
#define _CTMEN11 AD1CTMENLbits.CTMEN11
#define _CTMEN12 AD1CTMENLbits.CTMEN12
#define _CTMEN13 AD1CTMENLbits.CTMEN13
#define _CTMEN14 AD1CTMENLbits.CTMEN14
#define _CTMEN15 AD1CTMENLbits.CTMEN15

/* ANSA */
#define _ANSA0 ANSAbits.ANSA0
#define _ANSA1 ANSAbits.ANSA1
#define _ANSA2 ANSAbits.ANSA2
#define _ANSA3 ANSAbits.ANSA3
#define _ANSA4 ANSAbits.ANSA4

/* ANSB */
#define _ANSB0 ANSBbits.ANSB0
#define _ANSB1 ANSBbits.ANSB1
#define _ANSB2 ANSBbits.ANSB2
#define _ANSB3 ANSBbits.ANSB3
#define _ANSB4 ANSBbits.ANSB4
#define _ANSB5 ANSBbits.ANSB5
#define _ANSB6 ANSBbits.ANSB6
#define _ANSB7 ANSBbits.ANSB7
#define _ANSB8 ANSBbits.ANSB8
#define _ANSB9 ANSBbits.ANSB9
#define _ANSB12 ANSBbits.ANSB12
#define _ANSB13 ANSBbits.ANSB13
#define _ANSB14 ANSBbits.ANSB14
#define _ANSB15 ANSBbits.ANSB15

/* CMSTAT */
#define _C1OUT CMSTATbits.C1OUT
#define _C1EVT CMSTATbits.C1EVT
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
#define _CCH CM1CONbits.CCH
#define _CREF CM1CONbits.CREF
#define _EVPOL CM1CONbits.EVPOL
#define _COUT CM1CONbits.COUT
#define _CEVT CM1CONbits.CEVT
#define _CLPWR CM1CONbits.CLPWR
#define _CPOL CM1CONbits.CPOL
#define _COE CM1CONbits.COE
#define _CON CM1CONbits.CON
#define _CCH0 CM1CONbits.CCH0
#define _CCH1 CM1CONbits.CCH1
#define _CREF0 CM1CONbits.CREF0
#define _CREF1 CM1CONbits.CREF1
#define _EVPOL0 CM1CONbits.EVPOL0
#define _EVPOL1 CM1CONbits.EVPOL1

/* BUFCON0 */
#define _BUFREF BUFCON0bits.BUFREF
#define _BUFREF0 BUFCON0bits.BUFREF0
#define _BUFREF1 BUFCON0bits.BUFREF1

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
/* Bitname _CM cannot be defined because it is used by more than one SFR */
#define _RETEN RCONbits.RETEN
#define _SBOREN RCONbits.SBOREN
#define _IOPUWR RCONbits.IOPUWR
#define _TRAPR RCONbits.TRAPR
#define _VREGS RCONbits.VREGS

/* OSCCON */
#define _OSWEN OSCCONbits.OSWEN
#define _SOSCEN OSCCONbits.SOSCEN
#define _SOSCDRV OSCCONbits.SOSCDRV
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
#define _LSIDL HLVDCONbits.LSIDL
#define _HLVDEN HLVDCONbits.HLVDEN
#define _HLVDL0 HLVDCONbits.HLVDL0
#define _HLVDL1 HLVDCONbits.HLVDL1
#define _HLVDL2 HLVDCONbits.HLVDL2
#define _HLVDL3 HLVDCONbits.HLVDL3
#define _HLSIDL HLVDCONbits.HLSIDL

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
#define _SSP1MD PMD1bits.SSP1MD
#define _T1MD PMD1bits.T1MD

/* PMD2 */
#define _CCP1MD PMD2bits.CCP1MD
#define _CCP2MD PMD2bits.CCP2MD

/* PMD3 */
#define _CMPMD PMD3bits.CMPMD

/* PMD4 */
#define _HLVDMD PMD4bits.HLVDMD
#define _CTMUMD PMD4bits.CTMUMD
#define _REFOMD PMD4bits.REFOMD
#define _ULPWUMD PMD4bits.ULPWUMD

/* PMD8 */
#define _CLC1MD PMD8bits.CLC1MD


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

#define _TBLPAG_TBLPAG_POSITION                  0x00000000
#define _TBLPAG_TBLPAG_MASK                      0x000000FF
#define _TBLPAG_TBLPAG_LENGTH                    0x00000008

#define _PSVPAG_PSVPAG_POSITION                  0x00000000
#define _PSVPAG_PSVPAG_MASK                      0x000000FF
#define _PSVPAG_PSVPAG_LENGTH                    0x00000008

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

#define _SR_IPL0_POSITION                        0x00000005
#define _SR_IPL0_MASK                            0x00000020
#define _SR_IPL0_LENGTH                          0x00000001

#define _SR_IPL1_POSITION                        0x00000006
#define _SR_IPL1_MASK                            0x00000040
#define _SR_IPL1_LENGTH                          0x00000001

#define _SR_IPL2_POSITION                        0x00000007
#define _SR_IPL2_MASK                            0x00000080
#define _SR_IPL2_LENGTH                          0x00000001

#define _SR_DC_POSITION                          0x00000008
#define _SR_DC_MASK                              0x00000100
#define _SR_DC_LENGTH                            0x00000001

#define _SR_IPL_POSITION                         0x00000005
#define _SR_IPL_MASK                             0x000000E0
#define _SR_IPL_LENGTH                           0x00000003

#define _CORCON_IPL3_POSITION                    0x00000003
#define _CORCON_IPL3_MASK                        0x00000008
#define _CORCON_IPL3_LENGTH                      0x00000001

#define _DISICNT_DISICNT_POSITION                0x00000000
#define _DISICNT_DISICNT_MASK                    0x00003FFF
#define _DISICNT_DISICNT_LENGTH                  0x0000000E

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

#define _IFS0_CCP1IF_POSITION                    0x00000001
#define _IFS0_CCP1IF_MASK                        0x00000002
#define _IFS0_CCP1IF_LENGTH                      0x00000001

#define _IFS0_CCP2IF_POSITION                    0x00000002
#define _IFS0_CCP2IF_MASK                        0x00000004
#define _IFS0_CCP2IF_LENGTH                      0x00000001

#define _IFS0_T1IF_POSITION                      0x00000003
#define _IFS0_T1IF_MASK                          0x00000008
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_CCT1IF_POSITION                    0x00000007
#define _IFS0_CCT1IF_MASK                        0x00000080
#define _IFS0_CCT1IF_LENGTH                      0x00000001

#define _IFS0_CCT2IF_POSITION                    0x00000008
#define _IFS0_CCT2IF_MASK                        0x00000100
#define _IFS0_CCT2IF_LENGTH                      0x00000001

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

#define _IFS1_INT2IF_POSITION                    0x0000000D
#define _IFS1_INT2IF_MASK                        0x00002000
#define _IFS1_INT2IF_LENGTH                      0x00000001

#define _IFS4_U1ERIF_POSITION                    0x00000001
#define _IFS4_U1ERIF_MASK                        0x00000002
#define _IFS4_U1ERIF_LENGTH                      0x00000001

#define _IFS4_HLVDIF_POSITION                    0x00000008
#define _IFS4_HLVDIF_MASK                        0x00000100
#define _IFS4_HLVDIF_LENGTH                      0x00000001

#define _IFS4_CTMUIF_POSITION                    0x0000000D
#define _IFS4_CTMUIF_MASK                        0x00002000
#define _IFS4_CTMUIF_LENGTH                      0x00000001

#define _IFS5_ULPWUIF_POSITION                   0x00000000
#define _IFS5_ULPWUIF_MASK                       0x00000001
#define _IFS5_ULPWUIF_LENGTH                     0x00000001

#define _IFS6_CLC1IF_POSITION                    0x00000000
#define _IFS6_CLC1IF_MASK                        0x00000001
#define _IFS6_CLC1IF_LENGTH                      0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000000
#define _IEC0_INT0IE_MASK                        0x00000001
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_CCP1IE_POSITION                    0x00000001
#define _IEC0_CCP1IE_MASK                        0x00000002
#define _IEC0_CCP1IE_LENGTH                      0x00000001

#define _IEC0_CCP2IE_POSITION                    0x00000002
#define _IEC0_CCP2IE_MASK                        0x00000004
#define _IEC0_CCP2IE_LENGTH                      0x00000001

#define _IEC0_T1IE_POSITION                      0x00000003
#define _IEC0_T1IE_MASK                          0x00000008
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_CCT1IE_POSITION                    0x00000007
#define _IEC0_CCT1IE_MASK                        0x00000080
#define _IEC0_CCT1IE_LENGTH                      0x00000001

#define _IEC0_CCT2IE_POSITION                    0x00000008
#define _IEC0_CCT2IE_MASK                        0x00000100
#define _IEC0_CCT2IE_LENGTH                      0x00000001

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

#define _IEC1_INT2IE_POSITION                    0x0000000D
#define _IEC1_INT2IE_MASK                        0x00002000
#define _IEC1_INT2IE_LENGTH                      0x00000001

#define _IEC4_U1ERIE_POSITION                    0x00000001
#define _IEC4_U1ERIE_MASK                        0x00000002
#define _IEC4_U1ERIE_LENGTH                      0x00000001

#define _IEC4_HLVDIE_POSITION                    0x00000008
#define _IEC4_HLVDIE_MASK                        0x00000100
#define _IEC4_HLVDIE_LENGTH                      0x00000001

#define _IEC4_CTMUIE_POSITION                    0x0000000D
#define _IEC4_CTMUIE_MASK                        0x00002000
#define _IEC4_CTMUIE_LENGTH                      0x00000001

#define _IEC5_ULPWUIE_POSITION                   0x00000000
#define _IEC5_ULPWUIE_MASK                       0x00000001
#define _IEC5_ULPWUIE_LENGTH                     0x00000001

#define _IEC6_CLC1IE_POSITION                    0x00000000
#define _IEC6_CLC1IE_MASK                        0x00000001
#define _IEC6_CLC1IE_LENGTH                      0x00000001

#define _IPC0_INT0IP_POSITION                    0x00000000
#define _IPC0_INT0IP_MASK                        0x00000007
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_CCP1IP_POSITION                    0x00000004
#define _IPC0_CCP1IP_MASK                        0x00000070
#define _IPC0_CCP1IP_LENGTH                      0x00000003

#define _IPC0_CCP2IP_POSITION                    0x00000008
#define _IPC0_CCP2IP_MASK                        0x00000700
#define _IPC0_CCP2IP_LENGTH                      0x00000003

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

#define _IPC0_CC1IP0_POSITION                    0x00000004
#define _IPC0_CC1IP0_MASK                        0x00000010
#define _IPC0_CC1IP0_LENGTH                      0x00000001

#define _IPC0_CC1IP1_POSITION                    0x00000005
#define _IPC0_CC1IP1_MASK                        0x00000020
#define _IPC0_CC1IP1_LENGTH                      0x00000001

#define _IPC0_CC1IP2_POSITION                    0x00000006
#define _IPC0_CC1IP2_MASK                        0x00000040
#define _IPC0_CC1IP2_LENGTH                      0x00000001

#define _IPC0_CC2IP0_POSITION                    0x00000008
#define _IPC0_CC2IP0_MASK                        0x00000100
#define _IPC0_CC2IP0_LENGTH                      0x00000001

#define _IPC0_CC2IP1_POSITION                    0x00000009
#define _IPC0_CC2IP1_MASK                        0x00000200
#define _IPC0_CC2IP1_LENGTH                      0x00000001

#define _IPC0_CC2IP2_POSITION                    0x0000000A
#define _IPC0_CC2IP2_MASK                        0x00000400
#define _IPC0_CC2IP2_LENGTH                      0x00000001

#define _IPC0_T1IP0_POSITION                     0x0000000C
#define _IPC0_T1IP0_MASK                         0x00001000
#define _IPC0_T1IP0_LENGTH                       0x00000001

#define _IPC0_T1IP1_POSITION                     0x0000000D
#define _IPC0_T1IP1_MASK                         0x00002000
#define _IPC0_T1IP1_LENGTH                       0x00000001

#define _IPC0_T1IP2_POSITION                     0x0000000E
#define _IPC0_T1IP2_MASK                         0x00004000
#define _IPC0_T1IP2_LENGTH                       0x00000001

#define _IPC1_CCT1IP_POSITION                    0x0000000C
#define _IPC1_CCT1IP_MASK                        0x00007000
#define _IPC1_CCT1IP_LENGTH                      0x00000003

#define _IPC1_CCT1IP0_POSITION                   0x0000000C
#define _IPC1_CCT1IP0_MASK                       0x00001000
#define _IPC1_CCT1IP0_LENGTH                     0x00000001

#define _IPC1_CCT1IP1_POSITION                   0x0000000D
#define _IPC1_CCT1IP1_MASK                       0x00002000
#define _IPC1_CCT1IP1_LENGTH                     0x00000001

#define _IPC1_CCT1IP2_POSITION                   0x0000000E
#define _IPC1_CCT1IP2_MASK                       0x00004000
#define _IPC1_CCT1IP2_LENGTH                     0x00000001

#define _IPC2_CCT2IP_POSITION                    0x00000000
#define _IPC2_CCT2IP_MASK                        0x00000007
#define _IPC2_CCT2IP_LENGTH                      0x00000003

#define _IPC2_U1RXIP_POSITION                    0x0000000C
#define _IPC2_U1RXIP_MASK                        0x00007000
#define _IPC2_U1RXIP_LENGTH                      0x00000003

#define _IPC2_CCT2IP0_POSITION                   0x00000000
#define _IPC2_CCT2IP0_MASK                       0x00000001
#define _IPC2_CCT2IP0_LENGTH                     0x00000001

#define _IPC2_CCT2IP1_POSITION                   0x00000001
#define _IPC2_CCT2IP1_MASK                       0x00000002
#define _IPC2_CCT2IP1_LENGTH                     0x00000001

#define _IPC2_CCT2IP2_POSITION                   0x00000002
#define _IPC2_CCT2IP2_MASK                       0x00000004
#define _IPC2_CCT2IP2_LENGTH                     0x00000001

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

#define _IPC16_U1ERIP_POSITION                   0x00000004
#define _IPC16_U1ERIP_MASK                       0x00000070
#define _IPC16_U1ERIP_LENGTH                     0x00000003

#define _IPC16_U1ERIP0_POSITION                  0x00000004
#define _IPC16_U1ERIP0_MASK                      0x00000010
#define _IPC16_U1ERIP0_LENGTH                    0x00000001

#define _IPC16_U1ERIP1_POSITION                  0x00000005
#define _IPC16_U1ERIP1_MASK                      0x00000020
#define _IPC16_U1ERIP1_LENGTH                    0x00000001

#define _IPC16_U1ERIP2_POSITION                  0x00000006
#define _IPC16_U1ERIP2_MASK                      0x00000040
#define _IPC16_U1ERIP2_LENGTH                    0x00000001

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

#define _IPC24_CLC1IP_POSITION                   0x00000000
#define _IPC24_CLC1IP_MASK                       0x00000007
#define _IPC24_CLC1IP_LENGTH                     0x00000003

#define _IPC24_CLC1IP0_POSITION                  0x00000000
#define _IPC24_CLC1IP0_MASK                      0x00000001
#define _IPC24_CLC1IP0_LENGTH                    0x00000001

#define _IPC24_CLC1IP1_POSITION                  0x00000001
#define _IPC24_CLC1IP1_MASK                      0x00000002
#define _IPC24_CLC1IP1_LENGTH                    0x00000001

#define _IPC24_CLC1IP2_POSITION                  0x00000002
#define _IPC24_CLC1IP2_MASK                      0x00000004
#define _IPC24_CLC1IP2_LENGTH                    0x00000001

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

#define _T1CON_T1ECS0_POSITION                   0x00000008
#define _T1CON_T1ECS0_MASK                       0x00000100
#define _T1CON_T1ECS0_LENGTH                     0x00000001

#define _T1CON_T1ECS1_POSITION                   0x00000009
#define _T1CON_T1ECS1_MASK                       0x00000200
#define _T1CON_T1ECS1_LENGTH                     0x00000001

#define _T1CON_T1ECS_POSITION                    0x00000008
#define _T1CON_T1ECS_MASK                        0x00000300
#define _T1CON_T1ECS_LENGTH                      0x00000002

#define _T1CON_TECS0_POSITION                    0x00000008
#define _T1CON_TECS0_MASK                        0x00000100
#define _T1CON_TECS0_LENGTH                      0x00000001

#define _T1CON_TECS1_POSITION                    0x00000009
#define _T1CON_TECS1_MASK                        0x00000200
#define _T1CON_TECS1_LENGTH                      0x00000001

#define _T1CON_TIECS_POSITION                    0x00000008
#define _T1CON_TIECS_MASK                        0x00000300
#define _T1CON_TIECS_LENGTH                      0x00000002

#define _T1CON_TIECS0_POSITION                   0x00000008
#define _T1CON_TIECS0_MASK                       0x00000100
#define _T1CON_TIECS0_LENGTH                     0x00000001

#define _T1CON_TIECS1_POSITION                   0x00000009
#define _T1CON_TIECS1_MASK                       0x00000200
#define _T1CON_TIECS1_LENGTH                     0x00000001

#define _CLC1CONL_MODE_POSITION                  0x00000000
#define _CLC1CONL_MODE_MASK                      0x00000007
#define _CLC1CONL_MODE_LENGTH                    0x00000003

#define _CLC1CONL_LCPOL_POSITION                 0x00000005
#define _CLC1CONL_LCPOL_MASK                     0x00000020
#define _CLC1CONL_LCPOL_LENGTH                   0x00000001

#define _CLC1CONL_LCOUT_POSITION                 0x00000006
#define _CLC1CONL_LCOUT_MASK                     0x00000040
#define _CLC1CONL_LCOUT_LENGTH                   0x00000001

#define _CLC1CONL_LCOE_POSITION                  0x00000007
#define _CLC1CONL_LCOE_MASK                      0x00000080
#define _CLC1CONL_LCOE_LENGTH                    0x00000001

#define _CLC1CONL_INTN_POSITION                  0x0000000A
#define _CLC1CONL_INTN_MASK                      0x00000400
#define _CLC1CONL_INTN_LENGTH                    0x00000001

#define _CLC1CONL_INTP_POSITION                  0x0000000B
#define _CLC1CONL_INTP_MASK                      0x00000800
#define _CLC1CONL_INTP_LENGTH                    0x00000001

#define _CLC1CONL_LCEN_POSITION                  0x0000000F
#define _CLC1CONL_LCEN_MASK                      0x00008000
#define _CLC1CONL_LCEN_LENGTH                    0x00000001

#define _CLC1CONL_MODE0_POSITION                 0x00000000
#define _CLC1CONL_MODE0_MASK                     0x00000001
#define _CLC1CONL_MODE0_LENGTH                   0x00000001

#define _CLC1CONL_MODE1_POSITION                 0x00000001
#define _CLC1CONL_MODE1_MASK                     0x00000002
#define _CLC1CONL_MODE1_LENGTH                   0x00000001

#define _CLC1CONL_MODE2_POSITION                 0x00000002
#define _CLC1CONL_MODE2_MASK                     0x00000004
#define _CLC1CONL_MODE2_LENGTH                   0x00000001

#define _CLC1CONH_G1POL_POSITION                 0x00000000
#define _CLC1CONH_G1POL_MASK                     0x00000001
#define _CLC1CONH_G1POL_LENGTH                   0x00000001

#define _CLC1CONH_G2POL_POSITION                 0x00000001
#define _CLC1CONH_G2POL_MASK                     0x00000002
#define _CLC1CONH_G2POL_LENGTH                   0x00000001

#define _CLC1CONH_G3POL_POSITION                 0x00000002
#define _CLC1CONH_G3POL_MASK                     0x00000004
#define _CLC1CONH_G3POL_LENGTH                   0x00000001

#define _CLC1CONH_G4POL_POSITION                 0x00000003
#define _CLC1CONH_G4POL_MASK                     0x00000008
#define _CLC1CONH_G4POL_LENGTH                   0x00000001

#define _CLC1SEL_DS1_POSITION                    0x00000000
#define _CLC1SEL_DS1_MASK                        0x00000007
#define _CLC1SEL_DS1_LENGTH                      0x00000003

#define _CLC1SEL_DS2_POSITION                    0x00000004
#define _CLC1SEL_DS2_MASK                        0x00000070
#define _CLC1SEL_DS2_LENGTH                      0x00000003

#define _CLC1SEL_DS3_POSITION                    0x00000008
#define _CLC1SEL_DS3_MASK                        0x00000700
#define _CLC1SEL_DS3_LENGTH                      0x00000003

#define _CLC1SEL_DS4_POSITION                    0x0000000C
#define _CLC1SEL_DS4_MASK                        0x00007000
#define _CLC1SEL_DS4_LENGTH                      0x00000003

#define _CLC1SEL_DS10_POSITION                   0x00000000
#define _CLC1SEL_DS10_MASK                       0x00000001
#define _CLC1SEL_DS10_LENGTH                     0x00000001

#define _CLC1SEL_DS11_POSITION                   0x00000001
#define _CLC1SEL_DS11_MASK                       0x00000002
#define _CLC1SEL_DS11_LENGTH                     0x00000001

#define _CLC1SEL_DS12_POSITION                   0x00000002
#define _CLC1SEL_DS12_MASK                       0x00000004
#define _CLC1SEL_DS12_LENGTH                     0x00000001

#define _CLC1SEL_DS20_POSITION                   0x00000004
#define _CLC1SEL_DS20_MASK                       0x00000010
#define _CLC1SEL_DS20_LENGTH                     0x00000001

#define _CLC1SEL_DS21_POSITION                   0x00000005
#define _CLC1SEL_DS21_MASK                       0x00000020
#define _CLC1SEL_DS21_LENGTH                     0x00000001

#define _CLC1SEL_DS22_POSITION                   0x00000006
#define _CLC1SEL_DS22_MASK                       0x00000040
#define _CLC1SEL_DS22_LENGTH                     0x00000001

#define _CLC1SEL_DS30_POSITION                   0x00000008
#define _CLC1SEL_DS30_MASK                       0x00000100
#define _CLC1SEL_DS30_LENGTH                     0x00000001

#define _CLC1SEL_DS31_POSITION                   0x00000009
#define _CLC1SEL_DS31_MASK                       0x00000200
#define _CLC1SEL_DS31_LENGTH                     0x00000001

#define _CLC1SEL_DS32_POSITION                   0x0000000A
#define _CLC1SEL_DS32_MASK                       0x00000400
#define _CLC1SEL_DS32_LENGTH                     0x00000001

#define _CLC1SEL_DS40_POSITION                   0x0000000C
#define _CLC1SEL_DS40_MASK                       0x00001000
#define _CLC1SEL_DS40_LENGTH                     0x00000001

#define _CLC1SEL_DS41_POSITION                   0x0000000D
#define _CLC1SEL_DS41_MASK                       0x00002000
#define _CLC1SEL_DS41_LENGTH                     0x00000001

#define _CLC1SEL_DS42_POSITION                   0x0000000E
#define _CLC1SEL_DS42_MASK                       0x00004000
#define _CLC1SEL_DS42_LENGTH                     0x00000001

#define _CLC1SELL_DS1_POSITION                   0x00000000
#define _CLC1SELL_DS1_MASK                       0x00000007
#define _CLC1SELL_DS1_LENGTH                     0x00000003

#define _CLC1SELL_DS2_POSITION                   0x00000004
#define _CLC1SELL_DS2_MASK                       0x00000070
#define _CLC1SELL_DS2_LENGTH                     0x00000003

#define _CLC1SELL_DS3_POSITION                   0x00000008
#define _CLC1SELL_DS3_MASK                       0x00000700
#define _CLC1SELL_DS3_LENGTH                     0x00000003

#define _CLC1SELL_DS4_POSITION                   0x0000000C
#define _CLC1SELL_DS4_MASK                       0x00007000
#define _CLC1SELL_DS4_LENGTH                     0x00000003

#define _CLC1SELL_DS10_POSITION                  0x00000000
#define _CLC1SELL_DS10_MASK                      0x00000001
#define _CLC1SELL_DS10_LENGTH                    0x00000001

#define _CLC1SELL_DS11_POSITION                  0x00000001
#define _CLC1SELL_DS11_MASK                      0x00000002
#define _CLC1SELL_DS11_LENGTH                    0x00000001

#define _CLC1SELL_DS12_POSITION                  0x00000002
#define _CLC1SELL_DS12_MASK                      0x00000004
#define _CLC1SELL_DS12_LENGTH                    0x00000001

#define _CLC1SELL_DS20_POSITION                  0x00000004
#define _CLC1SELL_DS20_MASK                      0x00000010
#define _CLC1SELL_DS20_LENGTH                    0x00000001

#define _CLC1SELL_DS21_POSITION                  0x00000005
#define _CLC1SELL_DS21_MASK                      0x00000020
#define _CLC1SELL_DS21_LENGTH                    0x00000001

#define _CLC1SELL_DS22_POSITION                  0x00000006
#define _CLC1SELL_DS22_MASK                      0x00000040
#define _CLC1SELL_DS22_LENGTH                    0x00000001

#define _CLC1SELL_DS30_POSITION                  0x00000008
#define _CLC1SELL_DS30_MASK                      0x00000100
#define _CLC1SELL_DS30_LENGTH                    0x00000001

#define _CLC1SELL_DS31_POSITION                  0x00000009
#define _CLC1SELL_DS31_MASK                      0x00000200
#define _CLC1SELL_DS31_LENGTH                    0x00000001

#define _CLC1SELL_DS32_POSITION                  0x0000000A
#define _CLC1SELL_DS32_MASK                      0x00000400
#define _CLC1SELL_DS32_LENGTH                    0x00000001

#define _CLC1SELL_DS40_POSITION                  0x0000000C
#define _CLC1SELL_DS40_MASK                      0x00001000
#define _CLC1SELL_DS40_LENGTH                    0x00000001

#define _CLC1SELL_DS41_POSITION                  0x0000000D
#define _CLC1SELL_DS41_MASK                      0x00002000
#define _CLC1SELL_DS41_LENGTH                    0x00000001

#define _CLC1SELL_DS42_POSITION                  0x0000000E
#define _CLC1SELL_DS42_MASK                      0x00004000
#define _CLC1SELL_DS42_LENGTH                    0x00000001

#define _CLC1GLSL_G1D1N_POSITION                 0x00000000
#define _CLC1GLSL_G1D1N_MASK                     0x00000001
#define _CLC1GLSL_G1D1N_LENGTH                   0x00000001

#define _CLC1GLSL_G1D1T_POSITION                 0x00000001
#define _CLC1GLSL_G1D1T_MASK                     0x00000002
#define _CLC1GLSL_G1D1T_LENGTH                   0x00000001

#define _CLC1GLSL_G1D2N_POSITION                 0x00000002
#define _CLC1GLSL_G1D2N_MASK                     0x00000004
#define _CLC1GLSL_G1D2N_LENGTH                   0x00000001

#define _CLC1GLSL_G1D2T_POSITION                 0x00000003
#define _CLC1GLSL_G1D2T_MASK                     0x00000008
#define _CLC1GLSL_G1D2T_LENGTH                   0x00000001

#define _CLC1GLSL_G1D3N_POSITION                 0x00000004
#define _CLC1GLSL_G1D3N_MASK                     0x00000010
#define _CLC1GLSL_G1D3N_LENGTH                   0x00000001

#define _CLC1GLSL_G1D3T_POSITION                 0x00000005
#define _CLC1GLSL_G1D3T_MASK                     0x00000020
#define _CLC1GLSL_G1D3T_LENGTH                   0x00000001

#define _CLC1GLSL_G1D4N_POSITION                 0x00000006
#define _CLC1GLSL_G1D4N_MASK                     0x00000040
#define _CLC1GLSL_G1D4N_LENGTH                   0x00000001

#define _CLC1GLSL_G1D4T_POSITION                 0x00000007
#define _CLC1GLSL_G1D4T_MASK                     0x00000080
#define _CLC1GLSL_G1D4T_LENGTH                   0x00000001

#define _CLC1GLSL_G2D1N_POSITION                 0x00000008
#define _CLC1GLSL_G2D1N_MASK                     0x00000100
#define _CLC1GLSL_G2D1N_LENGTH                   0x00000001

#define _CLC1GLSL_G2D1T_POSITION                 0x00000009
#define _CLC1GLSL_G2D1T_MASK                     0x00000200
#define _CLC1GLSL_G2D1T_LENGTH                   0x00000001

#define _CLC1GLSL_G2D2N_POSITION                 0x0000000A
#define _CLC1GLSL_G2D2N_MASK                     0x00000400
#define _CLC1GLSL_G2D2N_LENGTH                   0x00000001

#define _CLC1GLSL_G2D2T_POSITION                 0x0000000B
#define _CLC1GLSL_G2D2T_MASK                     0x00000800
#define _CLC1GLSL_G2D2T_LENGTH                   0x00000001

#define _CLC1GLSL_G2D3N_POSITION                 0x0000000C
#define _CLC1GLSL_G2D3N_MASK                     0x00001000
#define _CLC1GLSL_G2D3N_LENGTH                   0x00000001

#define _CLC1GLSL_G2D3T_POSITION                 0x0000000D
#define _CLC1GLSL_G2D3T_MASK                     0x00002000
#define _CLC1GLSL_G2D3T_LENGTH                   0x00000001

#define _CLC1GLSL_G2D4N_POSITION                 0x0000000E
#define _CLC1GLSL_G2D4N_MASK                     0x00004000
#define _CLC1GLSL_G2D4N_LENGTH                   0x00000001

#define _CLC1GLSL_G2D4T_POSITION                 0x0000000F
#define _CLC1GLSL_G2D4T_MASK                     0x00008000
#define _CLC1GLSL_G2D4T_LENGTH                   0x00000001

#define _CLC1GLSH_G3D1N_POSITION                 0x00000000
#define _CLC1GLSH_G3D1N_MASK                     0x00000001
#define _CLC1GLSH_G3D1N_LENGTH                   0x00000001

#define _CLC1GLSH_G3D1T_POSITION                 0x00000001
#define _CLC1GLSH_G3D1T_MASK                     0x00000002
#define _CLC1GLSH_G3D1T_LENGTH                   0x00000001

#define _CLC1GLSH_G3D2N_POSITION                 0x00000002
#define _CLC1GLSH_G3D2N_MASK                     0x00000004
#define _CLC1GLSH_G3D2N_LENGTH                   0x00000001

#define _CLC1GLSH_G3D2T_POSITION                 0x00000003
#define _CLC1GLSH_G3D2T_MASK                     0x00000008
#define _CLC1GLSH_G3D2T_LENGTH                   0x00000001

#define _CLC1GLSH_G3D3N_POSITION                 0x00000004
#define _CLC1GLSH_G3D3N_MASK                     0x00000010
#define _CLC1GLSH_G3D3N_LENGTH                   0x00000001

#define _CLC1GLSH_G3D3T_POSITION                 0x00000005
#define _CLC1GLSH_G3D3T_MASK                     0x00000020
#define _CLC1GLSH_G3D3T_LENGTH                   0x00000001

#define _CLC1GLSH_G3D4N_POSITION                 0x00000006
#define _CLC1GLSH_G3D4N_MASK                     0x00000040
#define _CLC1GLSH_G3D4N_LENGTH                   0x00000001

#define _CLC1GLSH_G3D4T_POSITION                 0x00000007
#define _CLC1GLSH_G3D4T_MASK                     0x00000080
#define _CLC1GLSH_G3D4T_LENGTH                   0x00000001

#define _CLC1GLSH_G4D1N_POSITION                 0x00000008
#define _CLC1GLSH_G4D1N_MASK                     0x00000100
#define _CLC1GLSH_G4D1N_LENGTH                   0x00000001

#define _CLC1GLSH_G4D1T_POSITION                 0x00000009
#define _CLC1GLSH_G4D1T_MASK                     0x00000200
#define _CLC1GLSH_G4D1T_LENGTH                   0x00000001

#define _CLC1GLSH_G4D2N_POSITION                 0x0000000A
#define _CLC1GLSH_G4D2N_MASK                     0x00000400
#define _CLC1GLSH_G4D2N_LENGTH                   0x00000001

#define _CLC1GLSH_G4D2T_POSITION                 0x0000000B
#define _CLC1GLSH_G4D2T_MASK                     0x00000800
#define _CLC1GLSH_G4D2T_LENGTH                   0x00000001

#define _CLC1GLSH_G4D3N_POSITION                 0x0000000C
#define _CLC1GLSH_G4D3N_MASK                     0x00001000
#define _CLC1GLSH_G4D3N_LENGTH                   0x00000001

#define _CLC1GLSH_G4D3T_POSITION                 0x0000000D
#define _CLC1GLSH_G4D3T_MASK                     0x00002000
#define _CLC1GLSH_G4D3T_LENGTH                   0x00000001

#define _CLC1GLSH_G4D4N_POSITION                 0x0000000E
#define _CLC1GLSH_G4D4N_MASK                     0x00004000
#define _CLC1GLSH_G4D4N_LENGTH                   0x00000001

#define _CLC1GLSH_G4D4T_POSITION                 0x0000000F
#define _CLC1GLSH_G4D4T_MASK                     0x00008000
#define _CLC1GLSH_G4D4T_LENGTH                   0x00000001

#define _CCP1CON1L_MOD_POSITION                  0x00000000
#define _CCP1CON1L_MOD_MASK                      0x0000000F
#define _CCP1CON1L_MOD_LENGTH                    0x00000004

#define _CCP1CON1L_CCSEL_POSITION                0x00000004
#define _CCP1CON1L_CCSEL_MASK                    0x00000010
#define _CCP1CON1L_CCSEL_LENGTH                  0x00000001

#define _CCP1CON1L_T32_POSITION                  0x00000005
#define _CCP1CON1L_T32_MASK                      0x00000020
#define _CCP1CON1L_T32_LENGTH                    0x00000001

#define _CCP1CON1L_TMRPS_POSITION                0x00000006
#define _CCP1CON1L_TMRPS_MASK                    0x000000C0
#define _CCP1CON1L_TMRPS_LENGTH                  0x00000002

#define _CCP1CON1L_CLKSEL_POSITION               0x00000008
#define _CCP1CON1L_CLKSEL_MASK                   0x00000700
#define _CCP1CON1L_CLKSEL_LENGTH                 0x00000003

#define _CCP1CON1L_TMRSYNC_POSITION              0x0000000B
#define _CCP1CON1L_TMRSYNC_MASK                  0x00000800
#define _CCP1CON1L_TMRSYNC_LENGTH                0x00000001

#define _CCP1CON1L_CCPSLP_POSITION               0x0000000C
#define _CCP1CON1L_CCPSLP_MASK                   0x00001000
#define _CCP1CON1L_CCPSLP_LENGTH                 0x00000001

#define _CCP1CON1L_CCPSIDL_POSITION              0x0000000D
#define _CCP1CON1L_CCPSIDL_MASK                  0x00002000
#define _CCP1CON1L_CCPSIDL_LENGTH                0x00000001

#define _CCP1CON1L_CCPON_POSITION                0x0000000F
#define _CCP1CON1L_CCPON_MASK                    0x00008000
#define _CCP1CON1L_CCPON_LENGTH                  0x00000001

#define _CCP1CON1L_MOD0_POSITION                 0x00000000
#define _CCP1CON1L_MOD0_MASK                     0x00000001
#define _CCP1CON1L_MOD0_LENGTH                   0x00000001

#define _CCP1CON1L_MOD1_POSITION                 0x00000001
#define _CCP1CON1L_MOD1_MASK                     0x00000002
#define _CCP1CON1L_MOD1_LENGTH                   0x00000001

#define _CCP1CON1L_MOD2_POSITION                 0x00000002
#define _CCP1CON1L_MOD2_MASK                     0x00000004
#define _CCP1CON1L_MOD2_LENGTH                   0x00000001

#define _CCP1CON1L_MOD3_POSITION                 0x00000003
#define _CCP1CON1L_MOD3_MASK                     0x00000008
#define _CCP1CON1L_MOD3_LENGTH                   0x00000001

#define _CCP1CON1L_TMR32_POSITION                0x00000005
#define _CCP1CON1L_TMR32_MASK                    0x00000020
#define _CCP1CON1L_TMR32_LENGTH                  0x00000001

#define _CCP1CON1L_TMRPS0_POSITION               0x00000006
#define _CCP1CON1L_TMRPS0_MASK                   0x00000040
#define _CCP1CON1L_TMRPS0_LENGTH                 0x00000001

#define _CCP1CON1L_TMRPS1_POSITION               0x00000007
#define _CCP1CON1L_TMRPS1_MASK                   0x00000080
#define _CCP1CON1L_TMRPS1_LENGTH                 0x00000001

#define _CCP1CON1L_CLKSEL0_POSITION              0x00000008
#define _CCP1CON1L_CLKSEL0_MASK                  0x00000100
#define _CCP1CON1L_CLKSEL0_LENGTH                0x00000001

#define _CCP1CON1L_CLKSEL1_POSITION              0x00000009
#define _CCP1CON1L_CLKSEL1_MASK                  0x00000200
#define _CCP1CON1L_CLKSEL1_LENGTH                0x00000001

#define _CCP1CON1L_CLKSEL2_POSITION              0x0000000A
#define _CCP1CON1L_CLKSEL2_MASK                  0x00000400
#define _CCP1CON1L_CLKSEL2_LENGTH                0x00000001

#define _CCP1CON1L_CCPMOD_POSITION               0x00000000
#define _CCP1CON1L_CCPMOD_MASK                   0x0000000F
#define _CCP1CON1L_CCPMOD_LENGTH                 0x00000004

#define _CCP1CON1L_CCPMOD0_POSITION              0x00000000
#define _CCP1CON1L_CCPMOD0_MASK                  0x00000001
#define _CCP1CON1L_CCPMOD0_LENGTH                0x00000001

#define _CCP1CON1L_CCPMOD1_POSITION              0x00000001
#define _CCP1CON1L_CCPMOD1_MASK                  0x00000002
#define _CCP1CON1L_CCPMOD1_LENGTH                0x00000001

#define _CCP1CON1L_CCPMOD2_POSITION              0x00000002
#define _CCP1CON1L_CCPMOD2_MASK                  0x00000004
#define _CCP1CON1L_CCPMOD2_LENGTH                0x00000001

#define _CCP1CON1L_CCPMOD3_POSITION              0x00000003
#define _CCP1CON1L_CCPMOD3_MASK                  0x00000008
#define _CCP1CON1L_CCPMOD3_LENGTH                0x00000001

#define _CCP1CON1H_SYNC_POSITION                 0x00000000
#define _CCP1CON1H_SYNC_MASK                     0x0000001F
#define _CCP1CON1H_SYNC_LENGTH                   0x00000005

#define _CCP1CON1H_ALTSYNC_POSITION              0x00000005
#define _CCP1CON1H_ALTSYNC_MASK                  0x00000020
#define _CCP1CON1H_ALTSYNC_LENGTH                0x00000001

#define _CCP1CON1H_ONESHOT_POSITION              0x00000006
#define _CCP1CON1H_ONESHOT_MASK                  0x00000040
#define _CCP1CON1H_ONESHOT_LENGTH                0x00000001

#define _CCP1CON1H_TRIGEN_POSITION               0x00000007
#define _CCP1CON1H_TRIGEN_MASK                   0x00000080
#define _CCP1CON1H_TRIGEN_LENGTH                 0x00000001

#define _CCP1CON1H_OPS_POSITION                  0x00000008
#define _CCP1CON1H_OPS_MASK                      0x00000F00
#define _CCP1CON1H_OPS_LENGTH                    0x00000004

#define _CCP1CON1H_RTRGEN_POSITION               0x0000000E
#define _CCP1CON1H_RTRGEN_MASK                   0x00004000
#define _CCP1CON1H_RTRGEN_LENGTH                 0x00000001

#define _CCP1CON1H_OPSSRC_POSITION               0x0000000F
#define _CCP1CON1H_OPSSRC_MASK                   0x00008000
#define _CCP1CON1H_OPSSRC_LENGTH                 0x00000001

#define _CCP1CON1H_SYNC0_POSITION                0x00000000
#define _CCP1CON1H_SYNC0_MASK                    0x00000001
#define _CCP1CON1H_SYNC0_LENGTH                  0x00000001

#define _CCP1CON1H_SYNC1_POSITION                0x00000001
#define _CCP1CON1H_SYNC1_MASK                    0x00000002
#define _CCP1CON1H_SYNC1_LENGTH                  0x00000001

#define _CCP1CON1H_SYNC2_POSITION                0x00000002
#define _CCP1CON1H_SYNC2_MASK                    0x00000004
#define _CCP1CON1H_SYNC2_LENGTH                  0x00000001

#define _CCP1CON1H_SYNC3_POSITION                0x00000003
#define _CCP1CON1H_SYNC3_MASK                    0x00000008
#define _CCP1CON1H_SYNC3_LENGTH                  0x00000001

#define _CCP1CON1H_SYNC4_POSITION                0x00000004
#define _CCP1CON1H_SYNC4_MASK                    0x00000010
#define _CCP1CON1H_SYNC4_LENGTH                  0x00000001

#define _CCP1CON1H_OPS0_POSITION                 0x00000008
#define _CCP1CON1H_OPS0_MASK                     0x00000100
#define _CCP1CON1H_OPS0_LENGTH                   0x00000001

#define _CCP1CON1H_OPS1_POSITION                 0x00000009
#define _CCP1CON1H_OPS1_MASK                     0x00000200
#define _CCP1CON1H_OPS1_LENGTH                   0x00000001

#define _CCP1CON1H_OPS2_POSITION                 0x0000000A
#define _CCP1CON1H_OPS2_MASK                     0x00000400
#define _CCP1CON1H_OPS2_LENGTH                   0x00000001

#define _CCP1CON1H_OPS3_POSITION                 0x0000000B
#define _CCP1CON1H_OPS3_MASK                     0x00000800
#define _CCP1CON1H_OPS3_LENGTH                   0x00000001

#define _CCP1CON1H_OPSRC_POSITION                0x0000000F
#define _CCP1CON1H_OPSRC_MASK                    0x00008000
#define _CCP1CON1H_OPSRC_LENGTH                  0x00000001

#define _CCP1CON1H_IOPS_POSITION                 0x00000008
#define _CCP1CON1H_IOPS_MASK                     0x00000F00
#define _CCP1CON1H_IOPS_LENGTH                   0x00000004

#define _CCP1CON1H_IOPS0_POSITION                0x00000008
#define _CCP1CON1H_IOPS0_MASK                    0x00000100
#define _CCP1CON1H_IOPS0_LENGTH                  0x00000001

#define _CCP1CON1H_IOPS1_POSITION                0x00000009
#define _CCP1CON1H_IOPS1_MASK                    0x00000200
#define _CCP1CON1H_IOPS1_LENGTH                  0x00000001

#define _CCP1CON1H_IOPS2_POSITION                0x0000000A
#define _CCP1CON1H_IOPS2_MASK                    0x00000400
#define _CCP1CON1H_IOPS2_LENGTH                  0x00000001

#define _CCP1CON1H_IOPS3_POSITION                0x0000000B
#define _CCP1CON1H_IOPS3_MASK                    0x00000800
#define _CCP1CON1H_IOPS3_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG_POSITION                 0x00000000
#define _CCP1CON2L_ASDG_MASK                     0x000000FF
#define _CCP1CON2L_ASDG_LENGTH                   0x00000008

#define _CCP1CON2L_SSDG_POSITION                 0x0000000C
#define _CCP1CON2L_SSDG_MASK                     0x00001000
#define _CCP1CON2L_SSDG_LENGTH                   0x00000001

#define _CCP1CON2L_ASDGM_POSITION                0x0000000E
#define _CCP1CON2L_ASDGM_MASK                    0x00004000
#define _CCP1CON2L_ASDGM_LENGTH                  0x00000001

#define _CCP1CON2L_PWMRSEN_POSITION              0x0000000F
#define _CCP1CON2L_PWMRSEN_MASK                  0x00008000
#define _CCP1CON2L_PWMRSEN_LENGTH                0x00000001

#define _CCP1CON2L_ASDG0_POSITION                0x00000000
#define _CCP1CON2L_ASDG0_MASK                    0x00000001
#define _CCP1CON2L_ASDG0_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG1_POSITION                0x00000001
#define _CCP1CON2L_ASDG1_MASK                    0x00000002
#define _CCP1CON2L_ASDG1_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG2_POSITION                0x00000002
#define _CCP1CON2L_ASDG2_MASK                    0x00000004
#define _CCP1CON2L_ASDG2_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG3_POSITION                0x00000003
#define _CCP1CON2L_ASDG3_MASK                    0x00000008
#define _CCP1CON2L_ASDG3_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG4_POSITION                0x00000004
#define _CCP1CON2L_ASDG4_MASK                    0x00000010
#define _CCP1CON2L_ASDG4_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG5_POSITION                0x00000005
#define _CCP1CON2L_ASDG5_MASK                    0x00000020
#define _CCP1CON2L_ASDG5_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG6_POSITION                0x00000006
#define _CCP1CON2L_ASDG6_MASK                    0x00000040
#define _CCP1CON2L_ASDG6_LENGTH                  0x00000001

#define _CCP1CON2L_ASDG7_POSITION                0x00000007
#define _CCP1CON2L_ASDG7_MASK                    0x00000080
#define _CCP1CON2L_ASDG7_LENGTH                  0x00000001

#define _CCP1CON2H_ICS_POSITION                  0x00000000
#define _CCP1CON2H_ICS_MASK                      0x00000007
#define _CCP1CON2H_ICS_LENGTH                    0x00000003

#define _CCP1CON2H_AUXOUT_POSITION               0x00000003
#define _CCP1CON2H_AUXOUT_MASK                   0x00000018
#define _CCP1CON2H_AUXOUT_LENGTH                 0x00000002

#define _CCP1CON2H_ICGSM_POSITION                0x00000006
#define _CCP1CON2H_ICGSM_MASK                    0x000000C0
#define _CCP1CON2H_ICGSM_LENGTH                  0x00000002

#define _CCP1CON2H_OCAEN_POSITION                0x00000008
#define _CCP1CON2H_OCAEN_MASK                    0x00000100
#define _CCP1CON2H_OCAEN_LENGTH                  0x00000001

#define _CCP1CON2H_OCBEN_POSITION                0x00000009
#define _CCP1CON2H_OCBEN_MASK                    0x00000200
#define _CCP1CON2H_OCBEN_LENGTH                  0x00000001

#define _CCP1CON2H_OCCEN_POSITION                0x0000000A
#define _CCP1CON2H_OCCEN_MASK                    0x00000400
#define _CCP1CON2H_OCCEN_LENGTH                  0x00000001

#define _CCP1CON2H_OCDEN_POSITION                0x0000000B
#define _CCP1CON2H_OCDEN_MASK                    0x00000800
#define _CCP1CON2H_OCDEN_LENGTH                  0x00000001

#define _CCP1CON2H_OCEEN_POSITION                0x0000000C
#define _CCP1CON2H_OCEEN_MASK                    0x00001000
#define _CCP1CON2H_OCEEN_LENGTH                  0x00000001

#define _CCP1CON2H_OCFEN_POSITION                0x0000000D
#define _CCP1CON2H_OCFEN_MASK                    0x00002000
#define _CCP1CON2H_OCFEN_LENGTH                  0x00000001

#define _CCP1CON2H_OENSYNC_POSITION              0x0000000F
#define _CCP1CON2H_OENSYNC_MASK                  0x00008000
#define _CCP1CON2H_OENSYNC_LENGTH                0x00000001

#define _CCP1CON2H_ICS0_POSITION                 0x00000000
#define _CCP1CON2H_ICS0_MASK                     0x00000001
#define _CCP1CON2H_ICS0_LENGTH                   0x00000001

#define _CCP1CON2H_ICS1_POSITION                 0x00000001
#define _CCP1CON2H_ICS1_MASK                     0x00000002
#define _CCP1CON2H_ICS1_LENGTH                   0x00000001

#define _CCP1CON2H_ICS2_POSITION                 0x00000002
#define _CCP1CON2H_ICS2_MASK                     0x00000004
#define _CCP1CON2H_ICS2_LENGTH                   0x00000001

#define _CCP1CON2H_AUXOUT0_POSITION              0x00000003
#define _CCP1CON2H_AUXOUT0_MASK                  0x00000008
#define _CCP1CON2H_AUXOUT0_LENGTH                0x00000001

#define _CCP1CON2H_AUXOUT1_POSITION              0x00000004
#define _CCP1CON2H_AUXOUT1_MASK                  0x00000010
#define _CCP1CON2H_AUXOUT1_LENGTH                0x00000001

#define _CCP1CON2H_ICGSM0_POSITION               0x00000006
#define _CCP1CON2H_ICGSM0_MASK                   0x00000040
#define _CCP1CON2H_ICGSM0_LENGTH                 0x00000001

#define _CCP1CON2H_ICGSM1_POSITION               0x00000007
#define _CCP1CON2H_ICGSM1_MASK                   0x00000080
#define _CCP1CON2H_ICGSM1_LENGTH                 0x00000001

#define _CCP1CON2H_ICSEL_POSITION                0x00000000
#define _CCP1CON2H_ICSEL_MASK                    0x00000007
#define _CCP1CON2H_ICSEL_LENGTH                  0x00000003

#define _CCP1CON2H_ICSEL0_POSITION               0x00000000
#define _CCP1CON2H_ICSEL0_MASK                   0x00000001
#define _CCP1CON2H_ICSEL0_LENGTH                 0x00000001

#define _CCP1CON2H_ICSEL1_POSITION               0x00000001
#define _CCP1CON2H_ICSEL1_MASK                   0x00000002
#define _CCP1CON2H_ICSEL1_LENGTH                 0x00000001

#define _CCP1CON2H_ICSEL2_POSITION               0x00000002
#define _CCP1CON2H_ICSEL2_MASK                   0x00000004
#define _CCP1CON2H_ICSEL2_LENGTH                 0x00000001

#define _CCP1CON3L_DT_POSITION                   0x00000000
#define _CCP1CON3L_DT_MASK                       0x0000003F
#define _CCP1CON3L_DT_LENGTH                     0x00000006

#define _CCP1CON3L_DT0_POSITION                  0x00000000
#define _CCP1CON3L_DT0_MASK                      0x00000001
#define _CCP1CON3L_DT0_LENGTH                    0x00000001

#define _CCP1CON3L_DT1_POSITION                  0x00000001
#define _CCP1CON3L_DT1_MASK                      0x00000002
#define _CCP1CON3L_DT1_LENGTH                    0x00000001

#define _CCP1CON3L_DT2_POSITION                  0x00000002
#define _CCP1CON3L_DT2_MASK                      0x00000004
#define _CCP1CON3L_DT2_LENGTH                    0x00000001

#define _CCP1CON3L_DT3_POSITION                  0x00000003
#define _CCP1CON3L_DT3_MASK                      0x00000008
#define _CCP1CON3L_DT3_LENGTH                    0x00000001

#define _CCP1CON3L_DT4_POSITION                  0x00000004
#define _CCP1CON3L_DT4_MASK                      0x00000010
#define _CCP1CON3L_DT4_LENGTH                    0x00000001

#define _CCP1CON3L_DT5_POSITION                  0x00000005
#define _CCP1CON3L_DT5_MASK                      0x00000020
#define _CCP1CON3L_DT5_LENGTH                    0x00000001

#define _CCP1CON3H_PSSBDF_POSITION               0x00000000
#define _CCP1CON3H_PSSBDF_MASK                   0x00000003
#define _CCP1CON3H_PSSBDF_LENGTH                 0x00000002

#define _CCP1CON3H_PSSACE_POSITION               0x00000002
#define _CCP1CON3H_PSSACE_MASK                   0x0000000C
#define _CCP1CON3H_PSSACE_LENGTH                 0x00000002

#define _CCP1CON3H_POLBDF_POSITION               0x00000004
#define _CCP1CON3H_POLBDF_MASK                   0x00000010
#define _CCP1CON3H_POLBDF_LENGTH                 0x00000001

#define _CCP1CON3H_POLACE_POSITION               0x00000005
#define _CCP1CON3H_POLACE_MASK                   0x00000020
#define _CCP1CON3H_POLACE_LENGTH                 0x00000001

#define _CCP1CON3H_OUTM_POSITION                 0x00000008
#define _CCP1CON3H_OUTM_MASK                     0x00000700
#define _CCP1CON3H_OUTM_LENGTH                   0x00000003

#define _CCP1CON3H_OSCNT_POSITION                0x0000000C
#define _CCP1CON3H_OSCNT_MASK                    0x00007000
#define _CCP1CON3H_OSCNT_LENGTH                  0x00000003

#define _CCP1CON3H_OETRIG_POSITION               0x0000000F
#define _CCP1CON3H_OETRIG_MASK                   0x00008000
#define _CCP1CON3H_OETRIG_LENGTH                 0x00000001

#define _CCP1CON3H_PSSBDF0_POSITION              0x00000000
#define _CCP1CON3H_PSSBDF0_MASK                  0x00000001
#define _CCP1CON3H_PSSBDF0_LENGTH                0x00000001

#define _CCP1CON3H_PSSBDF1_POSITION              0x00000001
#define _CCP1CON3H_PSSBDF1_MASK                  0x00000002
#define _CCP1CON3H_PSSBDF1_LENGTH                0x00000001

#define _CCP1CON3H_PSSACE0_POSITION              0x00000002
#define _CCP1CON3H_PSSACE0_MASK                  0x00000004
#define _CCP1CON3H_PSSACE0_LENGTH                0x00000001

#define _CCP1CON3H_PSSACE1_POSITION              0x00000003
#define _CCP1CON3H_PSSACE1_MASK                  0x00000008
#define _CCP1CON3H_PSSACE1_LENGTH                0x00000001

#define _CCP1CON3H_OUTM0_POSITION                0x00000008
#define _CCP1CON3H_OUTM0_MASK                    0x00000100
#define _CCP1CON3H_OUTM0_LENGTH                  0x00000001

#define _CCP1CON3H_OUTM1_POSITION                0x00000009
#define _CCP1CON3H_OUTM1_MASK                    0x00000200
#define _CCP1CON3H_OUTM1_LENGTH                  0x00000001

#define _CCP1CON3H_OUTM2_POSITION                0x0000000A
#define _CCP1CON3H_OUTM2_MASK                    0x00000400
#define _CCP1CON3H_OUTM2_LENGTH                  0x00000001

#define _CCP1CON3H_OSCNT0_POSITION               0x0000000C
#define _CCP1CON3H_OSCNT0_MASK                   0x00001000
#define _CCP1CON3H_OSCNT0_LENGTH                 0x00000001

#define _CCP1CON3H_OSCNT1_POSITION               0x0000000D
#define _CCP1CON3H_OSCNT1_MASK                   0x00002000
#define _CCP1CON3H_OSCNT1_LENGTH                 0x00000001

#define _CCP1CON3H_OSCNT2_POSITION               0x0000000E
#define _CCP1CON3H_OSCNT2_MASK                   0x00004000
#define _CCP1CON3H_OSCNT2_LENGTH                 0x00000001

#define _CCP1STAT_ICBNE_POSITION                 0x00000000
#define _CCP1STAT_ICBNE_MASK                     0x00000001
#define _CCP1STAT_ICBNE_LENGTH                   0x00000001

#define _CCP1STAT_ICOV_POSITION                  0x00000001
#define _CCP1STAT_ICOV_MASK                      0x00000002
#define _CCP1STAT_ICOV_LENGTH                    0x00000001

#define _CCP1STAT_ICDIS_POSITION                 0x00000002
#define _CCP1STAT_ICDIS_MASK                     0x00000004
#define _CCP1STAT_ICDIS_LENGTH                   0x00000001

#define _CCP1STAT_SCEVT_POSITION                 0x00000003
#define _CCP1STAT_SCEVT_MASK                     0x00000008
#define _CCP1STAT_SCEVT_LENGTH                   0x00000001

#define _CCP1STAT_ASEVT_POSITION                 0x00000004
#define _CCP1STAT_ASEVT_MASK                     0x00000010
#define _CCP1STAT_ASEVT_LENGTH                   0x00000001

#define _CCP1STAT_TRCLR_POSITION                 0x00000005
#define _CCP1STAT_TRCLR_MASK                     0x00000020
#define _CCP1STAT_TRCLR_LENGTH                   0x00000001

#define _CCP1STAT_TRSET_POSITION                 0x00000006
#define _CCP1STAT_TRSET_MASK                     0x00000040
#define _CCP1STAT_TRSET_LENGTH                   0x00000001

#define _CCP1STAT_CCPTRIG_POSITION               0x00000007
#define _CCP1STAT_CCPTRIG_MASK                   0x00000080
#define _CCP1STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP1STAT_ICGARM_POSITION                0x0000000A
#define _CCP1STAT_ICGARM_MASK                    0x00000400
#define _CCP1STAT_ICGARM_LENGTH                  0x00000001

#define _CCP1STAT_TRIG_POSITION                  0x00000007
#define _CCP1STAT_TRIG_MASK                      0x00000080
#define _CCP1STAT_TRIG_LENGTH                    0x00000001

#define _CCP1STATL_ICBNE_POSITION                0x00000000
#define _CCP1STATL_ICBNE_MASK                    0x00000001
#define _CCP1STATL_ICBNE_LENGTH                  0x00000001

#define _CCP1STATL_ICOV_POSITION                 0x00000001
#define _CCP1STATL_ICOV_MASK                     0x00000002
#define _CCP1STATL_ICOV_LENGTH                   0x00000001

#define _CCP1STATL_ICDIS_POSITION                0x00000002
#define _CCP1STATL_ICDIS_MASK                    0x00000004
#define _CCP1STATL_ICDIS_LENGTH                  0x00000001

#define _CCP1STATL_SCEVT_POSITION                0x00000003
#define _CCP1STATL_SCEVT_MASK                    0x00000008
#define _CCP1STATL_SCEVT_LENGTH                  0x00000001

#define _CCP1STATL_ASEVT_POSITION                0x00000004
#define _CCP1STATL_ASEVT_MASK                    0x00000010
#define _CCP1STATL_ASEVT_LENGTH                  0x00000001

#define _CCP1STATL_TRCLR_POSITION                0x00000005
#define _CCP1STATL_TRCLR_MASK                    0x00000020
#define _CCP1STATL_TRCLR_LENGTH                  0x00000001

#define _CCP1STATL_TRSET_POSITION                0x00000006
#define _CCP1STATL_TRSET_MASK                    0x00000040
#define _CCP1STATL_TRSET_LENGTH                  0x00000001

#define _CCP1STATL_CCPTRIG_POSITION              0x00000007
#define _CCP1STATL_CCPTRIG_MASK                  0x00000080
#define _CCP1STATL_CCPTRIG_LENGTH                0x00000001

#define _CCP1STATL_ICGARM_POSITION               0x0000000A
#define _CCP1STATL_ICGARM_MASK                   0x00000400
#define _CCP1STATL_ICGARM_LENGTH                 0x00000001

#define _CCP1STATL_TRIG_POSITION                 0x00000007
#define _CCP1STATL_TRIG_MASK                     0x00000080
#define _CCP1STATL_TRIG_LENGTH                   0x00000001

#define _CCP2CON1L_MOD_POSITION                  0x00000000
#define _CCP2CON1L_MOD_MASK                      0x0000000F
#define _CCP2CON1L_MOD_LENGTH                    0x00000004

#define _CCP2CON1L_CCSEL_POSITION                0x00000004
#define _CCP2CON1L_CCSEL_MASK                    0x00000010
#define _CCP2CON1L_CCSEL_LENGTH                  0x00000001

#define _CCP2CON1L_T32_POSITION                  0x00000005
#define _CCP2CON1L_T32_MASK                      0x00000020
#define _CCP2CON1L_T32_LENGTH                    0x00000001

#define _CCP2CON1L_TMRPS_POSITION                0x00000006
#define _CCP2CON1L_TMRPS_MASK                    0x000000C0
#define _CCP2CON1L_TMRPS_LENGTH                  0x00000002

#define _CCP2CON1L_CLKSEL_POSITION               0x00000008
#define _CCP2CON1L_CLKSEL_MASK                   0x00000700
#define _CCP2CON1L_CLKSEL_LENGTH                 0x00000003

#define _CCP2CON1L_TMRSYNC_POSITION              0x0000000B
#define _CCP2CON1L_TMRSYNC_MASK                  0x00000800
#define _CCP2CON1L_TMRSYNC_LENGTH                0x00000001

#define _CCP2CON1L_CCPSLP_POSITION               0x0000000C
#define _CCP2CON1L_CCPSLP_MASK                   0x00001000
#define _CCP2CON1L_CCPSLP_LENGTH                 0x00000001

#define _CCP2CON1L_CCPSIDL_POSITION              0x0000000D
#define _CCP2CON1L_CCPSIDL_MASK                  0x00002000
#define _CCP2CON1L_CCPSIDL_LENGTH                0x00000001

#define _CCP2CON1L_CCPON_POSITION                0x0000000F
#define _CCP2CON1L_CCPON_MASK                    0x00008000
#define _CCP2CON1L_CCPON_LENGTH                  0x00000001

#define _CCP2CON1L_MOD0_POSITION                 0x00000000
#define _CCP2CON1L_MOD0_MASK                     0x00000001
#define _CCP2CON1L_MOD0_LENGTH                   0x00000001

#define _CCP2CON1L_MOD1_POSITION                 0x00000001
#define _CCP2CON1L_MOD1_MASK                     0x00000002
#define _CCP2CON1L_MOD1_LENGTH                   0x00000001

#define _CCP2CON1L_MOD2_POSITION                 0x00000002
#define _CCP2CON1L_MOD2_MASK                     0x00000004
#define _CCP2CON1L_MOD2_LENGTH                   0x00000001

#define _CCP2CON1L_MOD3_POSITION                 0x00000003
#define _CCP2CON1L_MOD3_MASK                     0x00000008
#define _CCP2CON1L_MOD3_LENGTH                   0x00000001

#define _CCP2CON1L_TMR32_POSITION                0x00000005
#define _CCP2CON1L_TMR32_MASK                    0x00000020
#define _CCP2CON1L_TMR32_LENGTH                  0x00000001

#define _CCP2CON1L_TMRPS0_POSITION               0x00000006
#define _CCP2CON1L_TMRPS0_MASK                   0x00000040
#define _CCP2CON1L_TMRPS0_LENGTH                 0x00000001

#define _CCP2CON1L_TMRPS1_POSITION               0x00000007
#define _CCP2CON1L_TMRPS1_MASK                   0x00000080
#define _CCP2CON1L_TMRPS1_LENGTH                 0x00000001

#define _CCP2CON1L_CLKSEL0_POSITION              0x00000008
#define _CCP2CON1L_CLKSEL0_MASK                  0x00000100
#define _CCP2CON1L_CLKSEL0_LENGTH                0x00000001

#define _CCP2CON1L_CLKSEL1_POSITION              0x00000009
#define _CCP2CON1L_CLKSEL1_MASK                  0x00000200
#define _CCP2CON1L_CLKSEL1_LENGTH                0x00000001

#define _CCP2CON1L_CLKSEL2_POSITION              0x0000000A
#define _CCP2CON1L_CLKSEL2_MASK                  0x00000400
#define _CCP2CON1L_CLKSEL2_LENGTH                0x00000001

#define _CCP2CON1L_CCPMOD_POSITION               0x00000000
#define _CCP2CON1L_CCPMOD_MASK                   0x0000000F
#define _CCP2CON1L_CCPMOD_LENGTH                 0x00000004

#define _CCP2CON1L_CCPMOD0_POSITION              0x00000000
#define _CCP2CON1L_CCPMOD0_MASK                  0x00000001
#define _CCP2CON1L_CCPMOD0_LENGTH                0x00000001

#define _CCP2CON1L_CCPMOD1_POSITION              0x00000001
#define _CCP2CON1L_CCPMOD1_MASK                  0x00000002
#define _CCP2CON1L_CCPMOD1_LENGTH                0x00000001

#define _CCP2CON1L_CCPMOD2_POSITION              0x00000002
#define _CCP2CON1L_CCPMOD2_MASK                  0x00000004
#define _CCP2CON1L_CCPMOD2_LENGTH                0x00000001

#define _CCP2CON1L_CCPMOD3_POSITION              0x00000003
#define _CCP2CON1L_CCPMOD3_MASK                  0x00000008
#define _CCP2CON1L_CCPMOD3_LENGTH                0x00000001

#define _CCP2CON1H_SYNC_POSITION                 0x00000000
#define _CCP2CON1H_SYNC_MASK                     0x0000001F
#define _CCP2CON1H_SYNC_LENGTH                   0x00000005

#define _CCP2CON1H_ALTSYNC_POSITION              0x00000005
#define _CCP2CON1H_ALTSYNC_MASK                  0x00000020
#define _CCP2CON1H_ALTSYNC_LENGTH                0x00000001

#define _CCP2CON1H_ONESHOT_POSITION              0x00000006
#define _CCP2CON1H_ONESHOT_MASK                  0x00000040
#define _CCP2CON1H_ONESHOT_LENGTH                0x00000001

#define _CCP2CON1H_TRIGEN_POSITION               0x00000007
#define _CCP2CON1H_TRIGEN_MASK                   0x00000080
#define _CCP2CON1H_TRIGEN_LENGTH                 0x00000001

#define _CCP2CON1H_OPS_POSITION                  0x00000008
#define _CCP2CON1H_OPS_MASK                      0x00000F00
#define _CCP2CON1H_OPS_LENGTH                    0x00000004

#define _CCP2CON1H_RTRGEN_POSITION               0x0000000E
#define _CCP2CON1H_RTRGEN_MASK                   0x00004000
#define _CCP2CON1H_RTRGEN_LENGTH                 0x00000001

#define _CCP2CON1H_OPSSRC_POSITION               0x0000000F
#define _CCP2CON1H_OPSSRC_MASK                   0x00008000
#define _CCP2CON1H_OPSSRC_LENGTH                 0x00000001

#define _CCP2CON1H_SYNC0_POSITION                0x00000000
#define _CCP2CON1H_SYNC0_MASK                    0x00000001
#define _CCP2CON1H_SYNC0_LENGTH                  0x00000001

#define _CCP2CON1H_SYNC1_POSITION                0x00000001
#define _CCP2CON1H_SYNC1_MASK                    0x00000002
#define _CCP2CON1H_SYNC1_LENGTH                  0x00000001

#define _CCP2CON1H_SYNC2_POSITION                0x00000002
#define _CCP2CON1H_SYNC2_MASK                    0x00000004
#define _CCP2CON1H_SYNC2_LENGTH                  0x00000001

#define _CCP2CON1H_SYNC3_POSITION                0x00000003
#define _CCP2CON1H_SYNC3_MASK                    0x00000008
#define _CCP2CON1H_SYNC3_LENGTH                  0x00000001

#define _CCP2CON1H_SYNC4_POSITION                0x00000004
#define _CCP2CON1H_SYNC4_MASK                    0x00000010
#define _CCP2CON1H_SYNC4_LENGTH                  0x00000001

#define _CCP2CON1H_OPS0_POSITION                 0x00000008
#define _CCP2CON1H_OPS0_MASK                     0x00000100
#define _CCP2CON1H_OPS0_LENGTH                   0x00000001

#define _CCP2CON1H_OPS1_POSITION                 0x00000009
#define _CCP2CON1H_OPS1_MASK                     0x00000200
#define _CCP2CON1H_OPS1_LENGTH                   0x00000001

#define _CCP2CON1H_OPS2_POSITION                 0x0000000A
#define _CCP2CON1H_OPS2_MASK                     0x00000400
#define _CCP2CON1H_OPS2_LENGTH                   0x00000001

#define _CCP2CON1H_OPS3_POSITION                 0x0000000B
#define _CCP2CON1H_OPS3_MASK                     0x00000800
#define _CCP2CON1H_OPS3_LENGTH                   0x00000001

#define _CCP2CON1H_OPSRC_POSITION                0x0000000F
#define _CCP2CON1H_OPSRC_MASK                    0x00008000
#define _CCP2CON1H_OPSRC_LENGTH                  0x00000001

#define _CCP2CON1H_IOPS_POSITION                 0x00000008
#define _CCP2CON1H_IOPS_MASK                     0x00000F00
#define _CCP2CON1H_IOPS_LENGTH                   0x00000004

#define _CCP2CON1H_IOPS0_POSITION                0x00000008
#define _CCP2CON1H_IOPS0_MASK                    0x00000100
#define _CCP2CON1H_IOPS0_LENGTH                  0x00000001

#define _CCP2CON1H_IOPS1_POSITION                0x00000009
#define _CCP2CON1H_IOPS1_MASK                    0x00000200
#define _CCP2CON1H_IOPS1_LENGTH                  0x00000001

#define _CCP2CON1H_IOPS2_POSITION                0x0000000A
#define _CCP2CON1H_IOPS2_MASK                    0x00000400
#define _CCP2CON1H_IOPS2_LENGTH                  0x00000001

#define _CCP2CON1H_IOPS3_POSITION                0x0000000B
#define _CCP2CON1H_IOPS3_MASK                    0x00000800
#define _CCP2CON1H_IOPS3_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG_POSITION                 0x00000000
#define _CCP2CON2L_ASDG_MASK                     0x000000FF
#define _CCP2CON2L_ASDG_LENGTH                   0x00000008

#define _CCP2CON2L_SSDG_POSITION                 0x0000000C
#define _CCP2CON2L_SSDG_MASK                     0x00001000
#define _CCP2CON2L_SSDG_LENGTH                   0x00000001

#define _CCP2CON2L_ASDGM_POSITION                0x0000000E
#define _CCP2CON2L_ASDGM_MASK                    0x00004000
#define _CCP2CON2L_ASDGM_LENGTH                  0x00000001

#define _CCP2CON2L_PWMRSEN_POSITION              0x0000000F
#define _CCP2CON2L_PWMRSEN_MASK                  0x00008000
#define _CCP2CON2L_PWMRSEN_LENGTH                0x00000001

#define _CCP2CON2L_ASDG0_POSITION                0x00000000
#define _CCP2CON2L_ASDG0_MASK                    0x00000001
#define _CCP2CON2L_ASDG0_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG1_POSITION                0x00000001
#define _CCP2CON2L_ASDG1_MASK                    0x00000002
#define _CCP2CON2L_ASDG1_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG2_POSITION                0x00000002
#define _CCP2CON2L_ASDG2_MASK                    0x00000004
#define _CCP2CON2L_ASDG2_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG3_POSITION                0x00000003
#define _CCP2CON2L_ASDG3_MASK                    0x00000008
#define _CCP2CON2L_ASDG3_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG4_POSITION                0x00000004
#define _CCP2CON2L_ASDG4_MASK                    0x00000010
#define _CCP2CON2L_ASDG4_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG5_POSITION                0x00000005
#define _CCP2CON2L_ASDG5_MASK                    0x00000020
#define _CCP2CON2L_ASDG5_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG6_POSITION                0x00000006
#define _CCP2CON2L_ASDG6_MASK                    0x00000040
#define _CCP2CON2L_ASDG6_LENGTH                  0x00000001

#define _CCP2CON2L_ASDG7_POSITION                0x00000007
#define _CCP2CON2L_ASDG7_MASK                    0x00000080
#define _CCP2CON2L_ASDG7_LENGTH                  0x00000001

#define _CCP2CON2H_ICS_POSITION                  0x00000000
#define _CCP2CON2H_ICS_MASK                      0x00000007
#define _CCP2CON2H_ICS_LENGTH                    0x00000003

#define _CCP2CON2H_AUXOUT_POSITION               0x00000003
#define _CCP2CON2H_AUXOUT_MASK                   0x00000018
#define _CCP2CON2H_AUXOUT_LENGTH                 0x00000002

#define _CCP2CON2H_ICGSM_POSITION                0x00000006
#define _CCP2CON2H_ICGSM_MASK                    0x000000C0
#define _CCP2CON2H_ICGSM_LENGTH                  0x00000002

#define _CCP2CON2H_OCAEN_POSITION                0x00000008
#define _CCP2CON2H_OCAEN_MASK                    0x00000100
#define _CCP2CON2H_OCAEN_LENGTH                  0x00000001

#define _CCP2CON2H_OENSYNC_POSITION              0x0000000F
#define _CCP2CON2H_OENSYNC_MASK                  0x00008000
#define _CCP2CON2H_OENSYNC_LENGTH                0x00000001

#define _CCP2CON2H_ICS0_POSITION                 0x00000000
#define _CCP2CON2H_ICS0_MASK                     0x00000001
#define _CCP2CON2H_ICS0_LENGTH                   0x00000001

#define _CCP2CON2H_ICS1_POSITION                 0x00000001
#define _CCP2CON2H_ICS1_MASK                     0x00000002
#define _CCP2CON2H_ICS1_LENGTH                   0x00000001

#define _CCP2CON2H_ICS2_POSITION                 0x00000002
#define _CCP2CON2H_ICS2_MASK                     0x00000004
#define _CCP2CON2H_ICS2_LENGTH                   0x00000001

#define _CCP2CON2H_AUXOUT0_POSITION              0x00000003
#define _CCP2CON2H_AUXOUT0_MASK                  0x00000008
#define _CCP2CON2H_AUXOUT0_LENGTH                0x00000001

#define _CCP2CON2H_AUXOUT1_POSITION              0x00000004
#define _CCP2CON2H_AUXOUT1_MASK                  0x00000010
#define _CCP2CON2H_AUXOUT1_LENGTH                0x00000001

#define _CCP2CON2H_ICGSM0_POSITION               0x00000006
#define _CCP2CON2H_ICGSM0_MASK                   0x00000040
#define _CCP2CON2H_ICGSM0_LENGTH                 0x00000001

#define _CCP2CON2H_ICGSM1_POSITION               0x00000007
#define _CCP2CON2H_ICGSM1_MASK                   0x00000080
#define _CCP2CON2H_ICGSM1_LENGTH                 0x00000001

#define _CCP2CON2H_ICSEL_POSITION                0x00000000
#define _CCP2CON2H_ICSEL_MASK                    0x00000007
#define _CCP2CON2H_ICSEL_LENGTH                  0x00000003

#define _CCP2CON2H_ICSEL0_POSITION               0x00000000
#define _CCP2CON2H_ICSEL0_MASK                   0x00000001
#define _CCP2CON2H_ICSEL0_LENGTH                 0x00000001

#define _CCP2CON2H_ICSEL1_POSITION               0x00000001
#define _CCP2CON2H_ICSEL1_MASK                   0x00000002
#define _CCP2CON2H_ICSEL1_LENGTH                 0x00000001

#define _CCP2CON2H_ICSEL2_POSITION               0x00000002
#define _CCP2CON2H_ICSEL2_MASK                   0x00000004
#define _CCP2CON2H_ICSEL2_LENGTH                 0x00000001

#define _CCP2CON3H_PSSACE_POSITION               0x00000002
#define _CCP2CON3H_PSSACE_MASK                   0x0000000C
#define _CCP2CON3H_PSSACE_LENGTH                 0x00000002

#define _CCP2CON3H_POLACE_POSITION               0x00000005
#define _CCP2CON3H_POLACE_MASK                   0x00000020
#define _CCP2CON3H_POLACE_LENGTH                 0x00000001

#define _CCP2CON3H_OSCNT_POSITION                0x0000000C
#define _CCP2CON3H_OSCNT_MASK                    0x00007000
#define _CCP2CON3H_OSCNT_LENGTH                  0x00000003

#define _CCP2CON3H_OETRIG_POSITION               0x0000000F
#define _CCP2CON3H_OETRIG_MASK                   0x00008000
#define _CCP2CON3H_OETRIG_LENGTH                 0x00000001

#define _CCP2CON3H_PSSACE0_POSITION              0x00000002
#define _CCP2CON3H_PSSACE0_MASK                  0x00000004
#define _CCP2CON3H_PSSACE0_LENGTH                0x00000001

#define _CCP2CON3H_PSSACE1_POSITION              0x00000003
#define _CCP2CON3H_PSSACE1_MASK                  0x00000008
#define _CCP2CON3H_PSSACE1_LENGTH                0x00000001

#define _CCP2CON3H_OSCNT0_POSITION               0x0000000C
#define _CCP2CON3H_OSCNT0_MASK                   0x00001000
#define _CCP2CON3H_OSCNT0_LENGTH                 0x00000001

#define _CCP2CON3H_OSCNT1_POSITION               0x0000000D
#define _CCP2CON3H_OSCNT1_MASK                   0x00002000
#define _CCP2CON3H_OSCNT1_LENGTH                 0x00000001

#define _CCP2CON3H_OSCNT2_POSITION               0x0000000E
#define _CCP2CON3H_OSCNT2_MASK                   0x00004000
#define _CCP2CON3H_OSCNT2_LENGTH                 0x00000001

#define _CCP2STAT_ICBNE_POSITION                 0x00000000
#define _CCP2STAT_ICBNE_MASK                     0x00000001
#define _CCP2STAT_ICBNE_LENGTH                   0x00000001

#define _CCP2STAT_ICOV_POSITION                  0x00000001
#define _CCP2STAT_ICOV_MASK                      0x00000002
#define _CCP2STAT_ICOV_LENGTH                    0x00000001

#define _CCP2STAT_ICDIS_POSITION                 0x00000002
#define _CCP2STAT_ICDIS_MASK                     0x00000004
#define _CCP2STAT_ICDIS_LENGTH                   0x00000001

#define _CCP2STAT_SCEVT_POSITION                 0x00000003
#define _CCP2STAT_SCEVT_MASK                     0x00000008
#define _CCP2STAT_SCEVT_LENGTH                   0x00000001

#define _CCP2STAT_ASEVT_POSITION                 0x00000004
#define _CCP2STAT_ASEVT_MASK                     0x00000010
#define _CCP2STAT_ASEVT_LENGTH                   0x00000001

#define _CCP2STAT_TRCLR_POSITION                 0x00000005
#define _CCP2STAT_TRCLR_MASK                     0x00000020
#define _CCP2STAT_TRCLR_LENGTH                   0x00000001

#define _CCP2STAT_TRSET_POSITION                 0x00000006
#define _CCP2STAT_TRSET_MASK                     0x00000040
#define _CCP2STAT_TRSET_LENGTH                   0x00000001

#define _CCP2STAT_CCPTRIG_POSITION               0x00000007
#define _CCP2STAT_CCPTRIG_MASK                   0x00000080
#define _CCP2STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP2STAT_ICGARM_POSITION                0x0000000A
#define _CCP2STAT_ICGARM_MASK                    0x00000400
#define _CCP2STAT_ICGARM_LENGTH                  0x00000001

#define _CCP2STAT_TRIG_POSITION                  0x00000007
#define _CCP2STAT_TRIG_MASK                      0x00000080
#define _CCP2STAT_TRIG_LENGTH                    0x00000001

#define _CCP2STATL_ICBNE_POSITION                0x00000000
#define _CCP2STATL_ICBNE_MASK                    0x00000001
#define _CCP2STATL_ICBNE_LENGTH                  0x00000001

#define _CCP2STATL_ICOV_POSITION                 0x00000001
#define _CCP2STATL_ICOV_MASK                     0x00000002
#define _CCP2STATL_ICOV_LENGTH                   0x00000001

#define _CCP2STATL_ICDIS_POSITION                0x00000002
#define _CCP2STATL_ICDIS_MASK                    0x00000004
#define _CCP2STATL_ICDIS_LENGTH                  0x00000001

#define _CCP2STATL_SCEVT_POSITION                0x00000003
#define _CCP2STATL_SCEVT_MASK                    0x00000008
#define _CCP2STATL_SCEVT_LENGTH                  0x00000001

#define _CCP2STATL_ASEVT_POSITION                0x00000004
#define _CCP2STATL_ASEVT_MASK                    0x00000010
#define _CCP2STATL_ASEVT_LENGTH                  0x00000001

#define _CCP2STATL_TRCLR_POSITION                0x00000005
#define _CCP2STATL_TRCLR_MASK                    0x00000020
#define _CCP2STATL_TRCLR_LENGTH                  0x00000001

#define _CCP2STATL_TRSET_POSITION                0x00000006
#define _CCP2STATL_TRSET_MASK                    0x00000040
#define _CCP2STATL_TRSET_LENGTH                  0x00000001

#define _CCP2STATL_CCPTRIG_POSITION              0x00000007
#define _CCP2STATL_CCPTRIG_MASK                  0x00000080
#define _CCP2STATL_CCPTRIG_LENGTH                0x00000001

#define _CCP2STATL_ICGARM_POSITION               0x0000000A
#define _CCP2STATL_ICGARM_MASK                   0x00000400
#define _CCP2STATL_ICGARM_LENGTH                 0x00000001

#define _CCP2STATL_TRIG_POSITION                 0x00000007
#define _CCP2STATL_TRIG_MASK                     0x00000080
#define _CCP2STATL_TRIG_LENGTH                   0x00000001

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

#define _I2C1BRG_SSPADD_POSITION                 0x00000000
#define _I2C1BRG_SSPADD_MASK                     0x000000FF
#define _I2C1BRG_SSPADD_LENGTH                   0x00000008

#define _I2C1BRG_I2CADD_POSITION                 0x00000000
#define _I2C1BRG_I2CADD_MASK                     0x000000FF
#define _I2C1BRG_I2CADD_LENGTH                   0x00000008

#define _SSP1ADD_SSPADD_POSITION                 0x00000000
#define _SSP1ADD_SSPADD_MASK                     0x000000FF
#define _SSP1ADD_SSPADD_LENGTH                   0x00000008

#define _SSP1ADD_I2CADD_POSITION                 0x00000000
#define _SSP1ADD_I2CADD_MASK                     0x000000FF
#define _SSP1ADD_I2CADD_LENGTH                   0x00000008

#define _SSP1BRG_SSPADD_POSITION                 0x00000000
#define _SSP1BRG_SSPADD_MASK                     0x000000FF
#define _SSP1BRG_SSPADD_LENGTH                   0x00000008

#define _SSP1BRG_I2CADD_POSITION                 0x00000000
#define _SSP1BRG_I2CADD_MASK                     0x000000FF
#define _SSP1BRG_I2CADD_LENGTH                   0x00000008

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

#define _PADCFG1_SDA1DIS_POSITION                0x00000009
#define _PADCFG1_SDA1DIS_MASK                    0x00000200
#define _PADCFG1_SDA1DIS_LENGTH                  0x00000001

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000004
#define _AD1CON1_SSRC_MASK                       0x000000F0
#define _AD1CON1_SSRC_LENGTH                     0x00000004

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000300
#define _AD1CON1_FORM_LENGTH                     0x00000002

#define _AD1CON1_MODE12_POSITION                 0x0000000A
#define _AD1CON1_MODE12_MASK                     0x00000400
#define _AD1CON1_MODE12_LENGTH                   0x00000001

#define _AD1CON1_ADSIDL_POSITION                 0x0000000D
#define _AD1CON1_ADSIDL_MASK                     0x00002000
#define _AD1CON1_ADSIDL_LENGTH                   0x00000001

#define _AD1CON1_ADON_POSITION                   0x0000000F
#define _AD1CON1_ADON_MASK                       0x00008000
#define _AD1CON1_ADON_LENGTH                     0x00000001

#define _AD1CON1_SSRC0_POSITION                  0x00000004
#define _AD1CON1_SSRC0_MASK                      0x00000010
#define _AD1CON1_SSRC0_LENGTH                    0x00000001

#define _AD1CON1_SSRC1_POSITION                  0x00000005
#define _AD1CON1_SSRC1_MASK                      0x00000020
#define _AD1CON1_SSRC1_LENGTH                    0x00000001

#define _AD1CON1_SSRC2_POSITION                  0x00000006
#define _AD1CON1_SSRC2_MASK                      0x00000040
#define _AD1CON1_SSRC2_LENGTH                    0x00000001

#define _AD1CON1_SSRC3_POSITION                  0x00000007
#define _AD1CON1_SSRC3_MASK                      0x00000080
#define _AD1CON1_SSRC3_LENGTH                    0x00000001

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

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_BUFREGEN_POSITION               0x0000000B
#define _AD1CON2_BUFREGEN_MASK                   0x00000800
#define _AD1CON2_BUFREGEN_LENGTH                 0x00000001

#define _AD1CON2_OFFCAL_POSITION                 0x0000000C
#define _AD1CON2_OFFCAL_MASK                     0x00001000
#define _AD1CON2_OFFCAL_LENGTH                   0x00000001

#define _AD1CON2_NVCFG0_POSITION                 0x0000000D
#define _AD1CON2_NVCFG0_MASK                     0x00002000
#define _AD1CON2_NVCFG0_LENGTH                   0x00000001

#define _AD1CON2_PVCFG_POSITION                  0x0000000E
#define _AD1CON2_PVCFG_MASK                      0x0000C000
#define _AD1CON2_PVCFG_LENGTH                    0x00000002

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

#define _AD1CON2_PCVFG0_POSITION                 0x0000000E
#define _AD1CON2_PCVFG0_MASK                     0x00004000
#define _AD1CON2_PCVFG0_LENGTH                   0x00000001

#define _AD1CON2_PCVFG1_POSITION                 0x0000000F
#define _AD1CON2_PCVFG1_MASK                     0x00008000
#define _AD1CON2_PCVFG1_LENGTH                   0x00000001

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

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
#define _AD1CHS_CH0SA_MASK                       0x0000001F
#define _AD1CHS_CH0SA_LENGTH                     0x00000005

#define _AD1CHS_CH0NA_POSITION                   0x00000005
#define _AD1CHS_CH0NA_MASK                       0x000000E0
#define _AD1CHS_CH0NA_LENGTH                     0x00000003

#define _AD1CHS_CH0SB_POSITION                   0x00000008
#define _AD1CHS_CH0SB_MASK                       0x00001F00
#define _AD1CHS_CH0SB_LENGTH                     0x00000005

#define _AD1CHS_CH0NB_POSITION                   0x0000000D
#define _AD1CHS_CH0NB_MASK                       0x0000E000
#define _AD1CHS_CH0NB_LENGTH                     0x00000003

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

#define _AD1CHS_CH0SA4_POSITION                  0x00000004
#define _AD1CHS_CH0SA4_MASK                      0x00000010
#define _AD1CHS_CH0SA4_LENGTH                    0x00000001

#define _AD1CHS_CH0NA0_POSITION                  0x00000005
#define _AD1CHS_CH0NA0_MASK                      0x00000020
#define _AD1CHS_CH0NA0_LENGTH                    0x00000001

#define _AD1CHS_CH0NA1_POSITION                  0x00000006
#define _AD1CHS_CH0NA1_MASK                      0x00000040
#define _AD1CHS_CH0NA1_LENGTH                    0x00000001

#define _AD1CHS_CH0NA2_POSITION                  0x00000007
#define _AD1CHS_CH0NA2_MASK                      0x00000080
#define _AD1CHS_CH0NA2_LENGTH                    0x00000001

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

#define _AD1CHS_CH0SB4_POSITION                  0x0000000C
#define _AD1CHS_CH0SB4_MASK                      0x00001000
#define _AD1CHS_CH0SB4_LENGTH                    0x00000001

#define _AD1CHS_CH0NB0_POSITION                  0x0000000D
#define _AD1CHS_CH0NB0_MASK                      0x00002000
#define _AD1CHS_CH0NB0_LENGTH                    0x00000001

#define _AD1CHS_CH0NB1_POSITION                  0x0000000E
#define _AD1CHS_CH0NB1_MASK                      0x00004000
#define _AD1CHS_CH0NB1_LENGTH                    0x00000001

#define _AD1CHS_CH0NB2_POSITION                  0x0000000F
#define _AD1CHS_CH0NB2_MASK                      0x00008000
#define _AD1CHS_CH0NB2_LENGTH                    0x00000001

#define _AD1CHS0_CH0SA_POSITION                  0x00000000
#define _AD1CHS0_CH0SA_MASK                      0x0000001F
#define _AD1CHS0_CH0SA_LENGTH                    0x00000005

#define _AD1CHS0_CH0NA_POSITION                  0x00000005
#define _AD1CHS0_CH0NA_MASK                      0x000000E0
#define _AD1CHS0_CH0NA_LENGTH                    0x00000003

#define _AD1CHS0_CH0SB_POSITION                  0x00000008
#define _AD1CHS0_CH0SB_MASK                      0x00001F00
#define _AD1CHS0_CH0SB_LENGTH                    0x00000005

#define _AD1CHS0_CH0NB_POSITION                  0x0000000D
#define _AD1CHS0_CH0NB_MASK                      0x0000E000
#define _AD1CHS0_CH0NB_LENGTH                    0x00000003

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

#define _AD1CHS0_CH0NA0_POSITION                 0x00000005
#define _AD1CHS0_CH0NA0_MASK                     0x00000020
#define _AD1CHS0_CH0NA0_LENGTH                   0x00000001

#define _AD1CHS0_CH0NA1_POSITION                 0x00000006
#define _AD1CHS0_CH0NA1_MASK                     0x00000040
#define _AD1CHS0_CH0NA1_LENGTH                   0x00000001

#define _AD1CHS0_CH0NA2_POSITION                 0x00000007
#define _AD1CHS0_CH0NA2_MASK                     0x00000080
#define _AD1CHS0_CH0NA2_LENGTH                   0x00000001

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

#define _AD1CHS0_CH0NB0_POSITION                 0x0000000D
#define _AD1CHS0_CH0NB0_MASK                     0x00002000
#define _AD1CHS0_CH0NB0_LENGTH                   0x00000001

#define _AD1CHS0_CH0NB1_POSITION                 0x0000000E
#define _AD1CHS0_CH0NB1_MASK                     0x00004000
#define _AD1CHS0_CH0NB1_LENGTH                   0x00000001

#define _AD1CHS0_CH0NB2_POSITION                 0x0000000F
#define _AD1CHS0_CH0NB2_MASK                     0x00008000
#define _AD1CHS0_CH0NB2_LENGTH                   0x00000001

#define _AD1CSSH_CSS16_POSITION                  0x00000000
#define _AD1CSSH_CSS16_MASK                      0x00000001
#define _AD1CSSH_CSS16_LENGTH                    0x00000001

#define _AD1CSSH_CSS17_POSITION                  0x00000001
#define _AD1CSSH_CSS17_MASK                      0x00000002
#define _AD1CSSH_CSS17_LENGTH                    0x00000001

#define _AD1CSSH_CSS18_POSITION                  0x00000002
#define _AD1CSSH_CSS18_MASK                      0x00000004
#define _AD1CSSH_CSS18_LENGTH                    0x00000001

#define _AD1CSSH_CSS19_POSITION                  0x00000003
#define _AD1CSSH_CSS19_MASK                      0x00000008
#define _AD1CSSH_CSS19_LENGTH                    0x00000001

#define _AD1CSSH_CSS20_POSITION                  0x00000004
#define _AD1CSSH_CSS20_MASK                      0x00000010
#define _AD1CSSH_CSS20_LENGTH                    0x00000001

#define _AD1CSSH_CSS21_POSITION                  0x00000005
#define _AD1CSSH_CSS21_MASK                      0x00000020
#define _AD1CSSH_CSS21_LENGTH                    0x00000001

#define _AD1CSSH_CSS22_POSITION                  0x00000006
#define _AD1CSSH_CSS22_MASK                      0x00000040
#define _AD1CSSH_CSS22_LENGTH                    0x00000001

#define _AD1CSSH_CSS23_POSITION                  0x00000007
#define _AD1CSSH_CSS23_MASK                      0x00000080
#define _AD1CSSH_CSS23_LENGTH                    0x00000001

#define _AD1CSSH_CSS26_POSITION                  0x0000000A
#define _AD1CSSH_CSS26_MASK                      0x00000400
#define _AD1CSSH_CSS26_LENGTH                    0x00000001

#define _AD1CSSH_CSS27_POSITION                  0x0000000B
#define _AD1CSSH_CSS27_MASK                      0x00000800
#define _AD1CSSH_CSS27_LENGTH                    0x00000001

#define _AD1CSSH_CSS28_POSITION                  0x0000000C
#define _AD1CSSH_CSS28_MASK                      0x00001000
#define _AD1CSSH_CSS28_LENGTH                    0x00000001

#define _AD1CSSH_CSS29_POSITION                  0x0000000D
#define _AD1CSSH_CSS29_MASK                      0x00002000
#define _AD1CSSH_CSS29_LENGTH                    0x00000001

#define _AD1CSSH_CSS30_POSITION                  0x0000000E
#define _AD1CSSH_CSS30_MASK                      0x00004000
#define _AD1CSSH_CSS30_LENGTH                    0x00000001

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

#define _AD1CON5_CM_POSITION                     0x00000000
#define _AD1CON5_CM_MASK                         0x00000003
#define _AD1CON5_CM_LENGTH                       0x00000002

#define _AD1CON5_WM_POSITION                     0x00000002
#define _AD1CON5_WM_MASK                         0x0000000C
#define _AD1CON5_WM_LENGTH                       0x00000002

#define _AD1CON5_ASINT_POSITION                  0x00000008
#define _AD1CON5_ASINT_MASK                      0x00000300
#define _AD1CON5_ASINT_LENGTH                    0x00000002

#define _AD1CON5_BGREQ_POSITION                  0x0000000C
#define _AD1CON5_BGREQ_MASK                      0x00001000
#define _AD1CON5_BGREQ_LENGTH                    0x00000001

#define _AD1CON5_CTMREQ_POSITION                 0x0000000D
#define _AD1CON5_CTMREQ_MASK                     0x00002000
#define _AD1CON5_CTMREQ_LENGTH                   0x00000001

#define _AD1CON5_LPEN_POSITION                   0x0000000E
#define _AD1CON5_LPEN_MASK                       0x00004000
#define _AD1CON5_LPEN_LENGTH                     0x00000001

#define _AD1CON5_ASEN_POSITION                   0x0000000F
#define _AD1CON5_ASEN_MASK                       0x00008000
#define _AD1CON5_ASEN_LENGTH                     0x00000001

#define _AD1CON5_CM0_POSITION                    0x00000000
#define _AD1CON5_CM0_MASK                        0x00000001
#define _AD1CON5_CM0_LENGTH                      0x00000001

#define _AD1CON5_CM1_POSITION                    0x00000001
#define _AD1CON5_CM1_MASK                        0x00000002
#define _AD1CON5_CM1_LENGTH                      0x00000001

#define _AD1CON5_WM0_POSITION                    0x00000002
#define _AD1CON5_WM0_MASK                        0x00000004
#define _AD1CON5_WM0_LENGTH                      0x00000001

#define _AD1CON5_WM1_POSITION                    0x00000003
#define _AD1CON5_WM1_MASK                        0x00000008
#define _AD1CON5_WM1_LENGTH                      0x00000001

#define _AD1CON5_ASINT0_POSITION                 0x00000008
#define _AD1CON5_ASINT0_MASK                     0x00000100
#define _AD1CON5_ASINT0_LENGTH                   0x00000001

#define _AD1CON5_ASINT1_POSITION                 0x00000009
#define _AD1CON5_ASINT1_MASK                     0x00000200
#define _AD1CON5_ASINT1_LENGTH                   0x00000001

#define _AD1CHITH_CHH16_POSITION                 0x00000000
#define _AD1CHITH_CHH16_MASK                     0x00000001
#define _AD1CHITH_CHH16_LENGTH                   0x00000001

#define _AD1CHITH_CHH17_POSITION                 0x00000001
#define _AD1CHITH_CHH17_MASK                     0x00000002
#define _AD1CHITH_CHH17_LENGTH                   0x00000001

#define _AD1CHITH_CHH18_POSITION                 0x00000002
#define _AD1CHITH_CHH18_MASK                     0x00000004
#define _AD1CHITH_CHH18_LENGTH                   0x00000001

#define _AD1CHITH_CHH19_POSITION                 0x00000003
#define _AD1CHITH_CHH19_MASK                     0x00000008
#define _AD1CHITH_CHH19_LENGTH                   0x00000001

#define _AD1CHITH_CHH20_POSITION                 0x00000004
#define _AD1CHITH_CHH20_MASK                     0x00000010
#define _AD1CHITH_CHH20_LENGTH                   0x00000001

#define _AD1CHITH_CHH21_POSITION                 0x00000005
#define _AD1CHITH_CHH21_MASK                     0x00000020
#define _AD1CHITH_CHH21_LENGTH                   0x00000001

#define _AD1CHITH_CHH22_POSITION                 0x00000006
#define _AD1CHITH_CHH22_MASK                     0x00000040
#define _AD1CHITH_CHH22_LENGTH                   0x00000001

#define _AD1CHITH_CHH23_POSITION                 0x00000007
#define _AD1CHITH_CHH23_MASK                     0x00000080
#define _AD1CHITH_CHH23_LENGTH                   0x00000001

#define _AD1CHITL_CHH0_POSITION                  0x00000000
#define _AD1CHITL_CHH0_MASK                      0x00000001
#define _AD1CHITL_CHH0_LENGTH                    0x00000001

#define _AD1CHITL_CHH1_POSITION                  0x00000001
#define _AD1CHITL_CHH1_MASK                      0x00000002
#define _AD1CHITL_CHH1_LENGTH                    0x00000001

#define _AD1CHITL_CHH2_POSITION                  0x00000002
#define _AD1CHITL_CHH2_MASK                      0x00000004
#define _AD1CHITL_CHH2_LENGTH                    0x00000001

#define _AD1CHITL_CHH3_POSITION                  0x00000003
#define _AD1CHITL_CHH3_MASK                      0x00000008
#define _AD1CHITL_CHH3_LENGTH                    0x00000001

#define _AD1CHITL_CHH4_POSITION                  0x00000004
#define _AD1CHITL_CHH4_MASK                      0x00000010
#define _AD1CHITL_CHH4_LENGTH                    0x00000001

#define _AD1CHITL_CHH5_POSITION                  0x00000005
#define _AD1CHITL_CHH5_MASK                      0x00000020
#define _AD1CHITL_CHH5_LENGTH                    0x00000001

#define _AD1CHITL_CHH9_POSITION                  0x00000009
#define _AD1CHITL_CHH9_MASK                      0x00000200
#define _AD1CHITL_CHH9_LENGTH                    0x00000001

#define _AD1CHITL_CHH10_POSITION                 0x0000000A
#define _AD1CHITL_CHH10_MASK                     0x00000400
#define _AD1CHITL_CHH10_LENGTH                   0x00000001

#define _AD1CHITL_CHH11_POSITION                 0x0000000B
#define _AD1CHITL_CHH11_MASK                     0x00000800
#define _AD1CHITL_CHH11_LENGTH                   0x00000001

#define _AD1CHITL_CHH12_POSITION                 0x0000000C
#define _AD1CHITL_CHH12_MASK                     0x00001000
#define _AD1CHITL_CHH12_LENGTH                   0x00000001

#define _AD1CHITL_CHH13_POSITION                 0x0000000D
#define _AD1CHITL_CHH13_MASK                     0x00002000
#define _AD1CHITL_CHH13_LENGTH                   0x00000001

#define _AD1CHITL_CHH14_POSITION                 0x0000000E
#define _AD1CHITL_CHH14_MASK                     0x00004000
#define _AD1CHITL_CHH14_LENGTH                   0x00000001

#define _AD1CHITL_CHH15_POSITION                 0x0000000F
#define _AD1CHITL_CHH15_MASK                     0x00008000
#define _AD1CHITL_CHH15_LENGTH                   0x00000001

#define _CTMUCON1L_IRNG_POSITION                 0x00000000
#define _CTMUCON1L_IRNG_MASK                     0x00000003
#define _CTMUCON1L_IRNG_LENGTH                   0x00000002

#define _CTMUCON1L_ITRIM_POSITION                0x00000002
#define _CTMUCON1L_ITRIM_MASK                    0x000000FC
#define _CTMUCON1L_ITRIM_LENGTH                  0x00000006

#define _CTMUCON1L_CTTRIG_POSITION               0x00000008
#define _CTMUCON1L_CTTRIG_MASK                   0x00000100
#define _CTMUCON1L_CTTRIG_LENGTH                 0x00000001

#define _CTMUCON1L_IDISSEN_POSITION              0x00000009
#define _CTMUCON1L_IDISSEN_MASK                  0x00000200
#define _CTMUCON1L_IDISSEN_LENGTH                0x00000001

#define _CTMUCON1L_EDGSEQEN_POSITION             0x0000000A
#define _CTMUCON1L_EDGSEQEN_MASK                 0x00000400
#define _CTMUCON1L_EDGSEQEN_LENGTH               0x00000001

#define _CTMUCON1L_EDGEN_POSITION                0x0000000B
#define _CTMUCON1L_EDGEN_MASK                    0x00000800
#define _CTMUCON1L_EDGEN_LENGTH                  0x00000001

#define _CTMUCON1L_TGEN_POSITION                 0x0000000C
#define _CTMUCON1L_TGEN_MASK                     0x00001000
#define _CTMUCON1L_TGEN_LENGTH                   0x00000001

#define _CTMUCON1L_CTMUSIDL_POSITION             0x0000000D
#define _CTMUCON1L_CTMUSIDL_MASK                 0x00002000
#define _CTMUCON1L_CTMUSIDL_LENGTH               0x00000001

#define _CTMUCON1L_CTMUEN_POSITION               0x0000000F
#define _CTMUCON1L_CTMUEN_MASK                   0x00008000
#define _CTMUCON1L_CTMUEN_LENGTH                 0x00000001

#define _CTMUCON1L_IRNG0_POSITION                0x00000000
#define _CTMUCON1L_IRNG0_MASK                    0x00000001
#define _CTMUCON1L_IRNG0_LENGTH                  0x00000001

#define _CTMUCON1L_IRNG1_POSITION                0x00000001
#define _CTMUCON1L_IRNG1_MASK                    0x00000002
#define _CTMUCON1L_IRNG1_LENGTH                  0x00000001

#define _CTMUCON1L_ITRIM0_POSITION               0x00000002
#define _CTMUCON1L_ITRIM0_MASK                   0x00000004
#define _CTMUCON1L_ITRIM0_LENGTH                 0x00000001

#define _CTMUCON1L_ITRIM1_POSITION               0x00000003
#define _CTMUCON1L_ITRIM1_MASK                   0x00000008
#define _CTMUCON1L_ITRIM1_LENGTH                 0x00000001

#define _CTMUCON1L_ITRIM2_POSITION               0x00000004
#define _CTMUCON1L_ITRIM2_MASK                   0x00000010
#define _CTMUCON1L_ITRIM2_LENGTH                 0x00000001

#define _CTMUCON1L_ITRIM3_POSITION               0x00000005
#define _CTMUCON1L_ITRIM3_MASK                   0x00000020
#define _CTMUCON1L_ITRIM3_LENGTH                 0x00000001

#define _CTMUCON1L_ITRIM4_POSITION               0x00000006
#define _CTMUCON1L_ITRIM4_MASK                   0x00000040
#define _CTMUCON1L_ITRIM4_LENGTH                 0x00000001

#define _CTMUCON1L_ITRIM5_POSITION               0x00000007
#define _CTMUCON1L_ITRIM5_MASK                   0x00000080
#define _CTMUCON1L_ITRIM5_LENGTH                 0x00000001

#define _CTMUCON1H_EDG2SEL_POSITION              0x00000002
#define _CTMUCON1H_EDG2SEL_MASK                  0x0000003C
#define _CTMUCON1H_EDG2SEL_LENGTH                0x00000004

#define _CTMUCON1H_EDG2POL_POSITION              0x00000006
#define _CTMUCON1H_EDG2POL_MASK                  0x00000040
#define _CTMUCON1H_EDG2POL_LENGTH                0x00000001

#define _CTMUCON1H_EDG2MOD_POSITION              0x00000007
#define _CTMUCON1H_EDG2MOD_MASK                  0x00000080
#define _CTMUCON1H_EDG2MOD_LENGTH                0x00000001

#define _CTMUCON1H_EDG1STAT_POSITION             0x00000008
#define _CTMUCON1H_EDG1STAT_MASK                 0x00000100
#define _CTMUCON1H_EDG1STAT_LENGTH               0x00000001

#define _CTMUCON1H_EDG2STAT_POSITION             0x00000009
#define _CTMUCON1H_EDG2STAT_MASK                 0x00000200
#define _CTMUCON1H_EDG2STAT_LENGTH               0x00000001

#define _CTMUCON1H_EDG1SEL_POSITION              0x0000000A
#define _CTMUCON1H_EDG1SEL_MASK                  0x00003C00
#define _CTMUCON1H_EDG1SEL_LENGTH                0x00000004

#define _CTMUCON1H_EDG1POL_POSITION              0x0000000E
#define _CTMUCON1H_EDG1POL_MASK                  0x00004000
#define _CTMUCON1H_EDG1POL_LENGTH                0x00000001

#define _CTMUCON1H_EDG1MOD_POSITION              0x0000000F
#define _CTMUCON1H_EDG1MOD_MASK                  0x00008000
#define _CTMUCON1H_EDG1MOD_LENGTH                0x00000001

#define _CTMUCON1H_EDG2SEL0_POSITION             0x00000002
#define _CTMUCON1H_EDG2SEL0_MASK                 0x00000004
#define _CTMUCON1H_EDG2SEL0_LENGTH               0x00000001

#define _CTMUCON1H_EDG2SEL1_POSITION             0x00000003
#define _CTMUCON1H_EDG2SEL1_MASK                 0x00000008
#define _CTMUCON1H_EDG2SEL1_LENGTH               0x00000001

#define _CTMUCON1H_EDG2SEL2_POSITION             0x00000004
#define _CTMUCON1H_EDG2SEL2_MASK                 0x00000010
#define _CTMUCON1H_EDG2SEL2_LENGTH               0x00000001

#define _CTMUCON1H_EDG2SEL3_POSITION             0x00000005
#define _CTMUCON1H_EDG2SEL3_MASK                 0x00000020
#define _CTMUCON1H_EDG2SEL3_LENGTH               0x00000001

#define _CTMUCON1H_EDG1SEL0_POSITION             0x0000000A
#define _CTMUCON1H_EDG1SEL0_MASK                 0x00000400
#define _CTMUCON1H_EDG1SEL0_LENGTH               0x00000001

#define _CTMUCON1H_EDG1SEL1_POSITION             0x0000000B
#define _CTMUCON1H_EDG1SEL1_MASK                 0x00000800
#define _CTMUCON1H_EDG1SEL1_LENGTH               0x00000001

#define _CTMUCON1H_EDG1SEL2_POSITION             0x0000000C
#define _CTMUCON1H_EDG1SEL2_MASK                 0x00001000
#define _CTMUCON1H_EDG1SEL2_LENGTH               0x00000001

#define _CTMUCON1H_EDG1SEL3_POSITION             0x0000000D
#define _CTMUCON1H_EDG1SEL3_MASK                 0x00002000
#define _CTMUCON1H_EDG1SEL3_LENGTH               0x00000001

#define _CTMUCON2_DISCHS_POSITION                0x00000000
#define _CTMUCON2_DISCHS_MASK                    0x00000007
#define _CTMUCON2_DISCHS_LENGTH                  0x00000003

#define _CTMUCON2_IRSTEN_POSITION                0x00000004
#define _CTMUCON2_IRSTEN_MASK                    0x00000010
#define _CTMUCON2_IRSTEN_LENGTH                  0x00000001

#define _CTMUCON2_DISCHS0_POSITION               0x00000000
#define _CTMUCON2_DISCHS0_MASK                   0x00000001
#define _CTMUCON2_DISCHS0_LENGTH                 0x00000001

#define _CTMUCON2_DISCHS1_POSITION               0x00000001
#define _CTMUCON2_DISCHS1_MASK                   0x00000002
#define _CTMUCON2_DISCHS1_LENGTH                 0x00000001

#define _CTMUCON2_DISCHS2_POSITION               0x00000002
#define _CTMUCON2_DISCHS2_MASK                   0x00000004
#define _CTMUCON2_DISCHS2_LENGTH                 0x00000001

#define _CTMUCON2L_DISCHS_POSITION               0x00000000
#define _CTMUCON2L_DISCHS_MASK                   0x00000007
#define _CTMUCON2L_DISCHS_LENGTH                 0x00000003

#define _CTMUCON2L_IRSTEN_POSITION               0x00000004
#define _CTMUCON2L_IRSTEN_MASK                   0x00000010
#define _CTMUCON2L_IRSTEN_LENGTH                 0x00000001

#define _CTMUCON2L_DISCHS0_POSITION              0x00000000
#define _CTMUCON2L_DISCHS0_MASK                  0x00000001
#define _CTMUCON2L_DISCHS0_LENGTH                0x00000001

#define _CTMUCON2L_DISCHS1_POSITION              0x00000001
#define _CTMUCON2L_DISCHS1_MASK                  0x00000002
#define _CTMUCON2L_DISCHS1_LENGTH                0x00000001

#define _CTMUCON2L_DISCHS2_POSITION              0x00000002
#define _CTMUCON2L_DISCHS2_MASK                  0x00000004
#define _CTMUCON2L_DISCHS2_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN16_POSITION              0x00000000
#define _AD1CTMENH_CTMEN16_MASK                  0x00000001
#define _AD1CTMENH_CTMEN16_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN17_POSITION              0x00000001
#define _AD1CTMENH_CTMEN17_MASK                  0x00000002
#define _AD1CTMENH_CTMEN17_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN18_POSITION              0x00000002
#define _AD1CTMENH_CTMEN18_MASK                  0x00000004
#define _AD1CTMENH_CTMEN18_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN19_POSITION              0x00000003
#define _AD1CTMENH_CTMEN19_MASK                  0x00000008
#define _AD1CTMENH_CTMEN19_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN20_POSITION              0x00000004
#define _AD1CTMENH_CTMEN20_MASK                  0x00000010
#define _AD1CTMENH_CTMEN20_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN21_POSITION              0x00000005
#define _AD1CTMENH_CTMEN21_MASK                  0x00000020
#define _AD1CTMENH_CTMEN21_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN22_POSITION              0x00000006
#define _AD1CTMENH_CTMEN22_MASK                  0x00000040
#define _AD1CTMENH_CTMEN22_LENGTH                0x00000001

#define _AD1CTMENH_CTMEN23_POSITION              0x00000007
#define _AD1CTMENH_CTMEN23_MASK                  0x00000080
#define _AD1CTMENH_CTMEN23_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN0_POSITION               0x00000000
#define _AD1CTMENL_CTMEN0_MASK                   0x00000001
#define _AD1CTMENL_CTMEN0_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN1_POSITION               0x00000001
#define _AD1CTMENL_CTMEN1_MASK                   0x00000002
#define _AD1CTMENL_CTMEN1_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN2_POSITION               0x00000002
#define _AD1CTMENL_CTMEN2_MASK                   0x00000004
#define _AD1CTMENL_CTMEN2_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN3_POSITION               0x00000003
#define _AD1CTMENL_CTMEN3_MASK                   0x00000008
#define _AD1CTMENL_CTMEN3_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN4_POSITION               0x00000004
#define _AD1CTMENL_CTMEN4_MASK                   0x00000010
#define _AD1CTMENL_CTMEN4_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN5_POSITION               0x00000005
#define _AD1CTMENL_CTMEN5_MASK                   0x00000020
#define _AD1CTMENL_CTMEN5_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN9_POSITION               0x00000009
#define _AD1CTMENL_CTMEN9_MASK                   0x00000200
#define _AD1CTMENL_CTMEN9_LENGTH                 0x00000001

#define _AD1CTMENL_CTMEN10_POSITION              0x0000000A
#define _AD1CTMENL_CTMEN10_MASK                  0x00000400
#define _AD1CTMENL_CTMEN10_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN11_POSITION              0x0000000B
#define _AD1CTMENL_CTMEN11_MASK                  0x00000800
#define _AD1CTMENL_CTMEN11_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN12_POSITION              0x0000000C
#define _AD1CTMENL_CTMEN12_MASK                  0x00001000
#define _AD1CTMENL_CTMEN12_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN13_POSITION              0x0000000D
#define _AD1CTMENL_CTMEN13_MASK                  0x00002000
#define _AD1CTMENL_CTMEN13_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN14_POSITION              0x0000000E
#define _AD1CTMENL_CTMEN14_MASK                  0x00004000
#define _AD1CTMENL_CTMEN14_LENGTH                0x00000001

#define _AD1CTMENL_CTMEN15_POSITION              0x0000000F
#define _AD1CTMENL_CTMEN15_MASK                  0x00008000
#define _AD1CTMENL_CTMEN15_LENGTH                0x00000001

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

#define _ANSA_ANSA4_POSITION                     0x00000004
#define _ANSA_ANSA4_MASK                         0x00000010
#define _ANSA_ANSA4_LENGTH                       0x00000001

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

#define _ANSB_ANSB5_POSITION                     0x00000005
#define _ANSB_ANSB5_MASK                         0x00000020
#define _ANSB_ANSB5_LENGTH                       0x00000001

#define _ANSB_ANSB6_POSITION                     0x00000006
#define _ANSB_ANSB6_MASK                         0x00000040
#define _ANSB_ANSB6_LENGTH                       0x00000001

#define _ANSB_ANSB7_POSITION                     0x00000007
#define _ANSB_ANSB7_MASK                         0x00000080
#define _ANSB_ANSB7_LENGTH                       0x00000001

#define _ANSB_ANSB8_POSITION                     0x00000008
#define _ANSB_ANSB8_MASK                         0x00000100
#define _ANSB_ANSB8_LENGTH                       0x00000001

#define _ANSB_ANSB9_POSITION                     0x00000009
#define _ANSB_ANSB9_MASK                         0x00000200
#define _ANSB_ANSB9_LENGTH                       0x00000001

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

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C1EVT_POSITION                   0x00000008
#define _CMSTAT_C1EVT_MASK                       0x00000100
#define _CMSTAT_C1EVT_LENGTH                     0x00000001

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
#define _CM1CON_CREF_MASK                        0x00000030
#define _CM1CON_CREF_LENGTH                      0x00000002

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

#define _CM1CON_CREF0_POSITION                   0x00000004
#define _CM1CON_CREF0_MASK                       0x00000010
#define _CM1CON_CREF0_LENGTH                     0x00000001

#define _CM1CON_CREF1_POSITION                   0x00000005
#define _CM1CON_CREF1_MASK                       0x00000020
#define _CM1CON_CREF1_LENGTH                     0x00000001

#define _CM1CON_EVPOL0_POSITION                  0x00000006
#define _CM1CON_EVPOL0_MASK                      0x00000040
#define _CM1CON_EVPOL0_LENGTH                    0x00000001

#define _CM1CON_EVPOL1_POSITION                  0x00000007
#define _CM1CON_EVPOL1_MASK                      0x00000080
#define _CM1CON_EVPOL1_LENGTH                    0x00000001

#define _BUFCON0_BUFREF_POSITION                 0x00000000
#define _BUFCON0_BUFREF_MASK                     0x00000003
#define _BUFCON0_BUFREF_LENGTH                   0x00000002

#define _BUFCON0_BUFREF0_POSITION                0x00000000
#define _BUFCON0_BUFREF0_MASK                    0x00000001
#define _BUFCON0_BUFREF0_LENGTH                  0x00000001

#define _BUFCON0_BUFREF1_POSITION                0x00000001
#define _BUFCON0_BUFREF1_MASK                    0x00000002
#define _BUFCON0_BUFREF1_LENGTH                  0x00000001

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

#define _RCON_RETEN_POSITION                     0x0000000C
#define _RCON_RETEN_MASK                         0x00001000
#define _RCON_RETEN_LENGTH                       0x00000001

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

#define _HLVDCON_LSIDL_POSITION                  0x0000000D
#define _HLVDCON_LSIDL_MASK                      0x00002000
#define _HLVDCON_LSIDL_LENGTH                    0x00000001

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

#define _HLVDCON_HLSIDL_POSITION                 0x0000000D
#define _HLVDCON_HLSIDL_MASK                     0x00002000
#define _HLVDCON_HLSIDL_LENGTH                   0x00000001

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

#define _PMD1_SSP1MD_POSITION                    0x00000007
#define _PMD1_SSP1MD_MASK                        0x00000080
#define _PMD1_SSP1MD_LENGTH                      0x00000001

#define _PMD1_T1MD_POSITION                      0x0000000B
#define _PMD1_T1MD_MASK                          0x00000800
#define _PMD1_T1MD_LENGTH                        0x00000001

#define _PMD2_CCP1MD_POSITION                    0x00000000
#define _PMD2_CCP1MD_MASK                        0x00000001
#define _PMD2_CCP1MD_LENGTH                      0x00000001

#define _PMD2_CCP2MD_POSITION                    0x00000001
#define _PMD2_CCP2MD_MASK                        0x00000002
#define _PMD2_CCP2MD_LENGTH                      0x00000001

#define _PMD3_CMPMD_POSITION                     0x0000000A
#define _PMD3_CMPMD_MASK                         0x00000400
#define _PMD3_CMPMD_LENGTH                       0x00000001

#define _PMD4_HLVDMD_POSITION                    0x00000001
#define _PMD4_HLVDMD_MASK                        0x00000002
#define _PMD4_HLVDMD_LENGTH                      0x00000001

#define _PMD4_CTMUMD_POSITION                    0x00000002
#define _PMD4_CTMUMD_MASK                        0x00000004
#define _PMD4_CTMUMD_LENGTH                      0x00000001

#define _PMD4_REFOMD_POSITION                    0x00000003
#define _PMD4_REFOMD_MASK                        0x00000008
#define _PMD4_REFOMD_LENGTH                      0x00000001

#define _PMD4_ULPWUMD_POSITION                   0x00000006
#define _PMD4_ULPWUMD_MASK                       0x00000040
#define _PMD4_ULPWUMD_LENGTH                     0x00000001

#define _PMD8_CLC1MD_POSITION                    0x00000002
#define _PMD8_CLC1MD_MASK                        0x00000004
#define _PMD8_CLC1MD_LENGTH                      0x00000001



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
**     BSS_HI2K             High Security Boot Protect 000200h - 0015FEh
**     BSS_HI1K             High Security Boot Protect 000200h - 000AFEh
**     BSS_STD2K            Standard Security Boot Protect 000200h - 0015FEh
**     BSS_STD1K            Standard Security Boot Protect 000200h - 000AFEh
**     BSS_OFF              No boot program flash segment
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
**   General Segment Write Protect:
**     GWRP_ON              General segment is write-protected
**     GWRP_OFF             General segment may be written
**
**   General Segment Code Protect:
**     GCP_ON               Standard security enabled
**     GCP_OFF              No Protection
**
*/

#define GWRP_ON              0xFFFE
#define GWRP_OFF             0xFFFF

#define GCP_ON               0xFFFD
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
**   Oscillator Select:
**     FNOSC_FRC            Fast RC Oscillator (FRC)
**     FNOSC_FRCPLL         Fast RC Oscillator with Postscaler and PLL Module (FRCDIV+PLL)
**     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
**     FNOSC_PRIPLL         Primary oscillator with PLL Module (HS+PLL, EC+PLL)
**     FNOSC_SOSC           Secondary oscillator (SOSC)
**     FNOSC_LPRC           Low Power RC oscillator (LPRC)
**     FNOSC_LPFRC          500kHz Low-Power FRC oscillator with Postscaler(LPFRCDIV)
**     FNOSC_FRCDIV         8MHz FRC oscillator With Postscaler (FRCDIV)
**
**   SOSC Source Type:
**     SOSCSRC_DIG          Digital Mode for use with external source
**     SOSCSRC_ANA          Analog Mode for use with crystal
**
**   LPRC Oscillator Power and Accuracy:
**     LPRCSEL_LP           Low Power, Low Accuracy Mode
**     LPRCSEL_HP           High Power, High Accuracy Mode
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
**   Primary Oscillator Configuration bits:
**     POSCMOD_EC           External clock mode selected
**     POSCMOD_XT           XT oscillator mode selected
**     POSCMOD_HS           HS oscillator mode selected
**     POSCMOD_NONE         Primary oscillator disabled
**
**   CLKO Enable Configuration bit:
**     OSCIOFNC_IO          Port I/O enabled (CLKO disabled)
**     OSCIOFNC_CLKO        CLKO output signal enabled
**
**   Primary Oscillator Frequency Range Configuration bits:
**     POSCFREQ_LS          Primary oscillator/external clock input frequency less than 100kHz
**     POSCFREQ_MS          Primary oscillator/external clock input frequency between 100kHz and 8MHz
**     POSCFREQ_HS          Primary oscillator/external clock input frequency greater than 8MHz
**
**   SOSC Power Selection Configuration bits:
**     SOSCSEL_SOSCLP       Secondary Oscillator configured for low-power operation
**     SOSCSEL_SOSCHP       Secondary Oscillator configured for high-power operation
**
**   Clock Switching and Monitor Selection:
**     FCKSM_CSECME         Both Clock Switching and Fail-safe Clock Monitor are enabled
**     FCKSM_CSECMD         Clock Switching is enabled, Fail-safe Clock Monitor is disabled
**     FCKSM_CSDCMD         Both Clock Switching and Fail-safe Clock Monitor are disabled
**
*/

#define POSCMOD_EC           0xFFFC
#define POSCMOD_XT           0xFFFD
#define POSCMOD_HS           0xFFFE
#define POSCMOD_NONE         0xFFFF

#define OSCIOFNC_IO          0xFFFB
#define OSCIOFNC_CLKO        0xFFFF

#define POSCFREQ_LS          0xFFEF
#define POSCFREQ_MS          0xFFF7
#define POSCFREQ_HS          0xFFFF

#define SOSCSEL_SOSCLP       0xFFDF
#define SOSCSEL_SOSCHP       0xFFFF

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
**     FWDTEN_NOSLP         WDT enabled while device is active and disabled in Sleep; SWDTEN bit disabled
**     FWDTEN_SWON          WDT controlled with the SWDTEN bit setting
**     FWDTEN_ON            WDT enabled in hardware
**
**   Windowed Watchdog Timer Disable bit:
**     WINDIS_ON            Windowed WDT enabled
**     WINDIS_OFF           Standard WDT selected(windowed WDT disabled)
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
**     BOREN_BOR0           Brown-out Reset disabled in hardware, SBOREN bit disabled
**     BOREN_BOR1           Brown-out Rest controlled by SBOREN bit
**     BOREN_BOR2           Brown-out Reset enabled only while device is active and disabled in SLEEP, SBOREN bit disabled
**     BOREN_BOR3           Brown-out Reset enabled in hardware, SBOREN bit disabled
**
**   :
**     RETCFG_ON            Retention regulator is available and controlled by RETEN bit
**     RETCFG_OFF           Retention regulator is not available
**
**   Power-up Timer Enable bit:
**     PWRTEN_OFF           PWRT disabled
**     PWRTEN_ON            PWRT enabled
**
**   Alternate I2C1 Pin Mapping bit:
**     I2C1SEL_SEC          Use  Alternate ASCL1/ASDA1 Pins For I2C1
**     I2C1SEL_PRI          Use Default SCL1/SDA1 Pins For I2C1
**
**   Brown-out Reset Voltage bits:
**     BORV_LPBOR           Low-power Brown-Out Reset occurs around 2.0V
**     BORV_V30             Brown-out Reset set to Highest Voltage (3.0V)
**     BORV_V27             Brown-out Reset set at 2.7V
**     BORV_V18             Brown-out Reset set to lowest voltage (1.8V)
**
**   MCLR Pin Enable bit:
**     MCLRE_OFF            RA5 input pin enabled, MCLR disabled
**     MCLRE_ON             RA5 input pin disabled, MCLR pin enabled
**
*/

#define BOREN_BOR0           0xFFFC
#define BOREN_BOR1           0xFFFD
#define BOREN_BOR2           0xFFFE
#define BOREN_BOR3           0xFFFF

#define RETCFG_ON            0xFFFB
#define RETCFG_OFF           0xFFFF

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
**   ICD Pin Placement Select bits:
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
