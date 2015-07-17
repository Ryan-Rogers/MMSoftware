/**********************************************************************/
/*              Header for PWM module library functions               */
/**********************************************************************/

#if defined(__dsPIC30F__)
#include <p30Fxxxx.h>
#elif defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#else
#error "This file is for 30F or 33F devices only!"
#endif


#ifndef __PWM12_H
#define __PWM12_H

#ifdef _PWM1IF

/* List of SFRs for PWM1 */
/* This list contains the SFRs with default (POR) values to be used for configuring PWM */
/* The user can modify this based on the requirement */

#define P1TCON_VALUE             0x0000
#define P1TMR_VALUE              0x0000
#define P1TPER_VALUE             0x0000
#define P1SECMP_VALUE	         0x0000

#define PWM1CON2_VALUE           0x0000
#define P1DTCON1_VALUE           0x0000
#define P1DTCON2_VALUE           0x0000
#define P1FLTACON_VALUE          0x0000
#define P1FLTBCON_VALUE          0x0000

#define P1DC1_VALUE              0x0000
#define P1DC2_VALUE              0x0000
#define P1DC3_VALUE              0x0000
#define P1DC4_VALUE              0x0000

#ifdef _FLTBIF

#define PWM1CON1_VALUE           0x00FF
#define P1OVDCON_VALUE           0xFF00

#else

#define PWM1CON1_VALUE           0x0077
#define P1OVDCON_VALUE           0x3F00

#endif

/* P1TCON Configuration Bit Definitions */

#define PWM1_EN                  0xA0FF  /*Module enable*/
#define PWM1_DIS                 0x20FF  /*Module disable*/

#define PWM1_IDLE_STOP           0xA0FF  /*stop in Idle mode*/
#define PWM1_IDLE_CON            0x80FF  /*operate in Idle mode*/

#define PWM1_OP_SCALE1           0xA00F  /*Out put post scaler 1:1*/
#define PWM1_OP_SCALE2           0xA01F  /*Out put post scaler 1:2*/
#define PWM1_OP_SCALE3           0xA02F  /*Out put post scaler 1:3*/
#define PWM1_OP_SCALE4           0xA03F  /*Out put post scaler 1:4*/
#define PWM1_OP_SCALE5           0xA04F  /*Out put post scaler 1:5*/
#define PWM1_OP_SCALE6           0xA05F  /*Out put post scaler 1:6*/
#define PWM1_OP_SCALE7           0xA06F  /*Out put post scaler 1:7*/
#define PWM1_OP_SCALE8           0xA07F  /*Out put post scaler 1:8*/
#define PWM1_OP_SCALE9           0xA08F  /*Out put post scaler 1:9*/
#define PWM1_OP_SCALE10          0xA09F  /*Out put post scaler 1:10*/
#define PWM1_OP_SCALE11          0xA0AF  /*Out put post scaler 1:11*/
#define PWM1_OP_SCALE12          0xA0BF  /*Out put post scaler 1:12*/
#define PWM1_OP_SCALE13          0xA0CF  /*Out put post scaler 1:13*/
#define PWM1_OP_SCALE14          0xA0DF  /*Out put post scaler 1:14*/
#define PWM1_OP_SCALE15          0xA0EF  /*Out put post scaler 1:15*/
#define PWM1_OP_SCALE16          0xA0FF  /*Out put post scaler 1:16*/

#define PWM1_IPCLK_SCALE1        0xA0F3  /*Input pre scaler 1:1*/
#define PWM1_IPCLK_SCALE4        0xA0F7  /*Input pre scaler 1:4*/
#define PWM1_IPCLK_SCALE16       0xA0FB  /*Input pre scaler 1:16*/
#define PWM1_IPCLK_SCALE64       0xA0FF  /*Input pre scaler 1:64*/

#define PWM1_MOD_FREE            0xA0FC  /*Mode of operation Free Running*/
#define PWM1_MOD_SING            0xA0FD  /*Mode of operation Single shot*/
#define PWM1_MOD_UPDN            0xA0FE  /*Mode of operation Up down */
#define PWM1_MOD_DBL             0xA0FF  /*Mode of operation Updown with double update*/

/* PWM1CON1 Configuration Bit Definitions */


#define PWM1_MOD3_COMP           0x0BFF  /*3th channel in complimentary mode*/
#define PWM1_MOD2_COMP           0x0DFF  /*2th channel in complimentary mode*/
#define PWM1_MOD1_COMP           0x0EFF  /*1th channel in complimentary mode*/


#define PWM1_MOD3_IND            0x0FFF  /*3th channel in independant mode*/
#define PWM1_MOD2_IND            0x0FFF  /*2th channel in independant mode*/
#define PWM1_MOD1_IND            0x0FFF  /*1th channel in independant mode*/


#define PWM1_PEN3H               0x0FFF  /*H of channel 3 works as PWM*/
#define PWM1_PDIS3H              0x0FBF  /*H of channel 3 works as IO*/

#define PWM1_PEN2H               0x0FFF  /*H of channel 2 works as PWM*/
#define PWM1_PDIS2H              0x0FDF  /*H of channel 2 works as IO*/

#define PWM1_PEN1H               0x0FFF  /*H of channel 1 works as PWM*/
#define PWM1_PDIS1H              0x0FEF  /*H of channel 1 works as IO*/

#define PWM1_PEN3L               0x0FFF  /*L of channel 3 works as PWM*/
#define PWM1_PDIS3L              0x0FFB  /*L of channel 3 works as IO*/

#define PWM1_PEN2L               0x0FFF  /*L of channel 2 works as PWM*/
#define PWM1_PDIS2L              0x0FFD  /*L of channel 2 works as IO*/

#define PWM1_PEN1L               0x0FFF  /*L of channel 1 works as PWM*/
#define PWM1_PDIS1L              0x0FFE  /*L of channel 1 works as IO*/

/* PWM1CON2 Configuration Bit Definitions */

#define PWM1_SEVOPS1             0x0003  /*Special event post scaler 1:1*/
#define PWM1_SEVOPS2             0x0103  /*Special event post scaler 1:2*/
#define PWM1_SEVOPS3             0x0203  /*Special event post scaler 1:3*/
#define PWM1_SEVOPS4             0x0303  /*Special event post scaler 1:4*/
#define PWM1_SEVOPS5             0x0403  /*Special event post scaler 1:5*/
#define PWM1_SEVOPS6             0x0503  /*Special event post scaler 1:6*/
#define PWM1_SEVOPS7             0x0603  /*Special event post scaler 1:7*/
#define PWM1_SEVOPS8             0x0703  /*Special event post scaler 1:8*/
#define PWM1_SEVOPS9             0x0803  /*Special event post scaler 1:9*/
#define PWM1_SEVOPS10            0x0903  /*Special event post scaler 1:10*/
#define PWM1_SEVOPS11            0x0A03  /*Special event post scaler 1:11*/
#define PWM1_SEVOPS12            0x0B03  /*Special event post scaler 1:12*/
#define PWM1_SEVOPS13            0x0C03  /*Special event post scaler 1:13*/
#define PWM1_SEVOPS14            0x0D03  /*Special event post scaler 1:14*/
#define PWM1_SEVOPS15            0x0E03  /*Special event post scaler 1:15*/
#define PWM1_SEVOPS16            0x0F03  /*Special event post scaler 1:16*/

#define PWM1_OSYNC_PWM           0x0F03  /*over ride syncronised with PWM clk*/
#define PWM1_OSYNC_TCY           0x0F01  /*over ride syncronised with sys clk*/

#define PWM1_UDIS                0x0F03  /*Update of PDCs and PTPER disabled*/
#define PWM1_UEN                 0x0F02  /*Update of PDCs and PTPER enabled*/

/* P1DTCON1 Configuration Bit Definitions */

#define PWM1_DTBPS8              0xFFFF  /*Dead B time PreScaler = 8*/
#define PWM1_DTBPS4              0xBFFF  /*Dead B time PreScaler = 4*/
#define PWM1_DTBPS2              0x7FFF  /*Dead B time PreScaler = 2*/
#define PWM1_DTBPS1              0x3FFF  /*Dead B time PreScaler = 1*/
                                                        
#define PWM1_DTAPS8              0xFFFF  /*Dead A time PreScaler = 8*/
#define PWM1_DTAPS4              0xFFBF  /*Dead A time PreScaler = 4*/
#define PWM1_DTAPS2              0xFF7F  /*Dead A time PreScaler = 2*/
#define PWM1_DTAPS1              0xFF3F  /*Dead A time PreScaler = 1*/

/* 6-bit dead time value bits for Dead Time Unit A */
#define PWM1_DTA0                0xFFC0  /*Dead time Unit A PreScale select value */
#define PWM1_DTA1                0xFFC1  /*Dead time Unit A PreScale select value */
#define PWM1_DTA2                0xFFC2  /*Dead time Unit A PreScale select value */
#define PWM1_DTA3                0xFFC3  /*Dead time Unit A PreScale select value */
#define PWM1_DTA4                0xFFC4  /*Dead time Unit A PreScale select value */
#define PWM1_DTA5                0xFFC5  /*Dead time Unit A PreScale select value */
#define PWM1_DTA6                0xFFC6  /*Dead time Unit A PreScale select value */
#define PWM1_DTA7                0xFFC7  /*Dead time Unit A PreScale select value */
#define PWM1_DTA8                0xFFC8  /*Dead time Unit A PreScale select value */
#define PWM1_DTA9                0xFFC9  /*Dead time Unit A PreScale select value */
#define PWM1_DTA10               0xFFCA  /*Dead time Unit A PreScale select value */
#define PWM1_DTA11               0xFFCB  /*Dead time Unit A PreScale select value */
#define PWM1_DTA12               0xFFCC  /*Dead time Unit A PreScale select value */
#define PWM1_DTA13               0xFFCD  /*Dead time Unit A PreScale select value */
#define PWM1_DTA14               0xFFCE  /*Dead time Unit A PreScale select value */
#define PWM1_DTA15               0xFFCF  /*Dead time Unit A PreScale select value */
#define PWM1_DTA16               0xFFD0  /*Dead time Unit A PreScale select value */
#define PWM1_DTA17               0xFFD1  /*Dead time Unit A PreScale select value */
#define PWM1_DTA18               0xFFD2  /*Dead time Unit A PreScale select value */
#define PWM1_DTA19               0xFFD3  /*Dead time Unit A PreScale select value */
#define PWM1_DTA20               0xFFD4  /*Dead time Unit A PreScale select value */
#define PWM1_DTA21               0xFFD5  /*Dead time Unit A PreScale select value */
#define PWM1_DTA22               0xFFD6  /*Dead time Unit A PreScale select value */
#define PWM1_DTA23               0xFFD7  /*Dead time Unit A PreScale select value */
#define PWM1_DTA24               0xFFD8  /*Dead time Unit A PreScale select value */
#define PWM1_DTA25               0xFFD9  /*Dead time Unit A PreScale select value */
#define PWM1_DTA26               0xFFDA  /*Dead time Unit A PreScale select value */
#define PWM1_DTA27               0xFFDB  /*Dead time Unit A PreScale select value */
#define PWM1_DTA28               0xFFDC  /*Dead time Unit A PreScale select value */
#define PWM1_DTA29               0xFFDD  /*Dead time Unit A PreScale select value */
#define PWM1_DTA30               0xFFDE  /*Dead time Unit A PreScale select value */
#define PWM1_DTA31               0xFFDF  /*Dead time Unit A PreScale select value */
#define PWM1_DTA32               0xFFE0  /*Dead time Unit A PreScale select value */
#define PWM1_DTA33               0xFFE1  /*Dead time Unit A PreScale select value */
#define PWM1_DTA34               0xFFE2  /*Dead time Unit A PreScale select value */
#define PWM1_DTA35               0xFFE3  /*Dead time Unit A PreScale select value */
#define PWM1_DTA36               0xFFE4  /*Dead time Unit A PreScale select value */
#define PWM1_DTA37               0xFFE5  /*Dead time Unit A PreScale select value */
#define PWM1_DTA38               0xFFE6  /*Dead time Unit A PreScale select value */
#define PWM1_DTA39               0xFFE7  /*Dead time Unit A PreScale select value */
#define PWM1_DTA40               0xFFE8  /*Dead time Unit A PreScale select value */
#define PWM1_DTA41               0xFFE9  /*Dead time Unit A PreScale select value */
#define PWM1_DTA42               0xFFEA  /*Dead time Unit A PreScale select value */
#define PWM1_DTA43               0xFFEB  /*Dead time Unit A PreScale select value */
#define PWM1_DTA44               0xFFEC  /*Dead time Unit A PreScale select value */
#define PWM1_DTA45               0xFFED  /*Dead time Unit A PreScale select value */
#define PWM1_DTA46               0xFFEE  /*Dead time Unit A PreScale select value */
#define PWM1_DTA47               0xFFEF  /*Dead time Unit A PreScale select value */
#define PWM1_DTA48               0xFFF0  /*Dead time Unit A PreScale select value */
#define PWM1_DTA49               0xFFF1  /*Dead time Unit A PreScale select value */
#define PWM1_DTA50               0xFFF2  /*Dead time Unit A PreScale select value */
#define PWM1_DTA51               0xFFF3  /*Dead time Unit A PreScale select value */
#define PWM1_DTA52               0xFFF4  /*Dead time Unit A PreScale select value */
#define PWM1_DTA53               0xFFF5  /*Dead time Unit A PreScale select value */
#define PWM1_DTA54               0xFFF6  /*Dead time Unit A PreScale select value */
#define PWM1_DTA55               0xFFF7  /*Dead time Unit A PreScale select value */
#define PWM1_DTA56               0xFFF8  /*Dead time Unit A PreScale select value */
#define PWM1_DTA57               0xFFF9  /*Dead time Unit A PreScale select value */
#define PWM1_DTA58               0xFFFA  /*Dead time Unit A PreScale select value */
#define PWM1_DTA59               0xFFFB  /*Dead time Unit A PreScale select value */
#define PWM1_DTA60               0xFFFC  /*Dead time Unit A PreScale select value */
#define PWM1_DTA61               0xFFFD  /*Dead time Unit A PreScale select value */
#define PWM1_DTA62               0xFFFE  /*Dead time Unit A PreScale select value */
#define PWM1_DTA63               0xFFFF  /*Dead time Unit A PreScale select value */

#define PWM1_DTB0                0xC0FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB1                0xC1FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB2                0xC2FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB3                0xC3FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB4                0xC4FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB5                0xC5FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB6                0xC6FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB7                0xC7FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB8                0xC8FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB9                0xC9FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB10               0xCAFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB11               0xCBFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB12               0xCCFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB13               0xCDFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB14               0xCEFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB15               0xCFFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB16               0xD0FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB17               0xD1FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB18               0xD2FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB19               0xD3FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB20               0xD4FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB21               0xD5FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB22               0xD6FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB23               0xD7FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB24               0xD8FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB25               0xD9FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB26               0xDAFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB27               0xDBFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB28               0xDCFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB29               0xDDFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB30               0xDEFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB31               0xDFFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB32               0xE0FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB33               0xE1FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB34               0xE2FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB35               0xE3FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB36               0xE4FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB37               0xE5FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB38               0xE6FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB39               0xE7FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB40               0xE8FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB41               0xE9FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB42               0xEAFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB43               0xEBFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB44               0xECFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB45               0xEDFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB46               0xEEFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB47               0xEFFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB48               0xF0FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB49               0xF1FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB50               0xF2FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB51               0xF3FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB52               0xF4FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB53               0xF5FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB54               0xF6FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB55               0xF7FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB56               0xF8FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB57               0xF9FF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB58               0xFAFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB59               0xFBFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB60               0xFCFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB61               0xFDFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB62               0xFEFF  /*Dead time Unit B PreScale select value */
#define PWM1_DTB63               0xFFFF  /*Dead time Unit B PreScale select value */

/* P1DTCON2 Configuration Bit Definitions */
#define PWM1_DTS3A_UA            0x00DF  /*Dead time for channel 3 to get Active controlled by unit A*/
#define PWM1_DTS3I_UA            0x00EF  /*Dead time for channel 3 to get Inactive controlled by unit A*/                                              
#define PWM1_DTS2A_UA            0x00F7  /*Dead time for channel 2 to get Active controlled by unit A*/                                                  
#define PWM1_DTS2I_UA            0x00FB  /*Dead time for channel 2 to get Inactive controlled by unit A*/
#define PWM1_DTS1A_UA            0x00FD  /*Dead time for channel 1 to get Active controlled by unit A*/
#define PWM1_DTS1I_UA            0x00FE  /*Dead time for channel 1 to get Inactive controlled by unit A*/
#define PWM1_DTS3A_UB            0x00FF  /*Dead time for channel 3 to get Active controlled by unit B*/
#define PWM1_DTS3I_UB            0x00FF  /*Dead time for channel 3 to get Inactive controlled by unit B*/
#define PWM1_DTS2A_UB            0x00FF  /*Dead time for channel 2 to get Active controlled by unit B*/
#define PWM1_DTS2I_UB            0x00FF  /*Dead time for channel 2 to get Inactive controlled by unit B*/
#define PWM1_DTS1A_UB            0x00FF  /*Dead time for channel 1 to get Active controlled by unit B*/
#define PWM1_DTS1I_UB            0x00FF  /*Dead time for channel 1 to get Inactive controlled by unit B*/

/* P1OVDCON Configuration Bit Definitions */

#define PWM1_GEN_3H              0xFFFF  /*controlled by the PWM generator.*/
#define PWM1_GEN_2H              0xFFFF  /*controlled by the PWM generator.*/
#define PWM1_GEN_1H              0xFFFF  /*controlled by the PWM generator.*/
#define PWM1_GEN_3L              0xFFFF  /*controlled by the PWM generator.*/
#define PWM1_GEN_2L              0xFFFF  /*controlled by the PWM generator.*/
#define PWM1_GEN_1L              0xFFFF  /*controlled by the PWM generator.*/

#define PWM1_POUT_3H             0xDFFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM1_POUT_3L             0xEFFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM1_POUT_2H             0xF7FF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM1_POUT_2L             0xFBFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM1_POUT_1H             0xFDFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM1_POUT_1L             0xFEFF  /*controlled by the value in the corresponding POUT bit.*/
 
#define PWM1_POUT3H_ACT          0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT3H_INACT        0xFFDF  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT3L_ACT          0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT3L_INACT        0xFFEF  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/

#define PWM1_POUT2H_ACT          0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT2H_INACT        0xFFF7  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT2L_ACT          0xFFFF   /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT2L_INACT        0xFFFB  /*I/O pin is driven INACTIVE when corresponding POVDxx bit is cleared.*/

#define PWM1_POUT1H_ACT          0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT1H_INACT        0xFFFD  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT1L_ACT          0xFFFF   /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT1L_INACT        0xFFFE  /*I/O pin is driven INACTIVE when corresponding POVDxx bit is cleared.*/

/* Enable/Disable PWM Interrupt */

#define PWM1_INT_EN              0xFFFF  /*Enable PWM interrupt*/
#define PWM1_INT_DIS             0xFFF7  /*Disable  PWM interrupt*/

/* Enable/Disable FaultA Interrupt */
#define PWM1_FLTA_EN_INT         0xFFFF  /*Enable Fault A Interrupt */
#define PWM1_FLTA_DIS_INT        0xFF7F  /*Disable Fault A Interrupt */

/* Setting the priority of PWM interrupt */
  
#define PWM1_INT_PR0             0xFFF8  /*period interrupt priority 0*/
#define PWM1_INT_PR1             0xFFF9  /*period interrupt priority 1*/
#define PWM1_INT_PR2             0xFFFA  /*period interrupt priority 2*/
#define PWM1_INT_PR3             0xFFFB  /*period interrupt priority 3*/
#define PWM1_INT_PR4             0xFFFC  /*period interrupt priority 4*/
#define PWM1_INT_PR5             0xFFFD  /*period interrupt priority 5*/
#define PWM1_INT_PR6             0xFFFE  /*period interrupt priority 6*/
#define PWM1_INT_PR7             0xFFFF  /*period interrupt priority 7*/

/* Setting the priority of PWM FaultA interrupt */

#define PWM1_FLTA_INT_PR0        0xFF8F  /* FaultA interrupt priority 0*/
#define PWM1_FLTA_INT_PR1        0xFF9F  /* FaultA interrupt priority 1*/
#define PWM1_FLTA_INT_PR2        0xFFAF  /* FaultA interrupt priority 2*/
#define PWM1_FLTA_INT_PR3        0xFFBF  /* FaultA interrupt priority 3*/
#define PWM1_FLTA_INT_PR4        0xFFCF  /* FaultA interrupt priority 4*/
#define PWM1_FLTA_INT_PR5        0xFFDF  /* FaultA interrupt priority 5*/
#define PWM1_FLTA_INT_PR6        0xFFEF  /* FaultA interrupt priority 6*/
#define PWM1_FLTA_INT_PR7        0xFFFF  /* FaultA interrupt priority 7*/

/* P1FLTACON Register */

#define PWM1_OVA3H_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVA2H_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVA1H_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVA3L_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVA2L_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVA1L_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVA3H_INACTIVE      0xDFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVA2H_INACTIVE      0xF7FF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVA1H_INACTIVE      0xFDFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVA3L_INACTIVE      0xEFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVA2L_INACTIVE      0xFBFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVA1L_INACTIVE      0xFEFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/

#define PWM1_FLTA_MODE_CYCLE     0xFFFF  /* The Fault A input pin functions in the cycle-by-cycle limit mode.*/
#define PWM1_FLTA_MODE_LATCH     0xFF7F  /* The Fault A input pin latches all control pins to the programmed states.*/
#define PWM1_FLTA3_EN            0xFFFF  /* PWM1H3/PWM1L3 pin pair is controlled by Fault Input A.*/
#define PWM1_FLTA2_EN            0xFFFF  /* PWM1H2/PWM1L2 pin pair is controlled by Fault Input A.*/
#define PWM1_FLTA1_EN            0xFFFF  /* PWM1H1/PWM1L1 pin pair is controlled by Fault Input A.*/
#define PWM1_FLTA3_DIS           0xFFFB  /* PWM1H3/PWM1L3 pin pair is not controlled by Fault Input A.*/
#define PWM1_FLTA2_DIS           0xFFFD  /* PWM1H2/PWM1L2 pin pair is not controlled by Fault Input A.*/
#define PWM1_FLTA1_DIS           0xFFFE  /* PWM1H1/PWM1L1 pin pair is not controlled by Fault Input A.*/

/* Macros to  Enable/Disable interrupts and set Interrupt priority of PWM */

#define EnableIntMCPWM1                    _PWMIE = 1
#define DisableIntMCPWM1                   _PWMIE = 0
#define SetPriorityIntMCPWM1(priority)     _PWMIP = priority

#define EnableMCPWM1IntFLTA                     _FLTAIE = 1
#define DisableMCPWM1IntFLTA                    _FLTAIE = 0
#define SetPriorityMCPWM1IntFLTA(priority)      _FLTAIP = priority

void CloseMCPWM1(void) __attribute__ ((section (".libperi")));

void ConfigIntMCPWM1(unsigned int config) __attribute__ ((section (".libperi")));

void OpenMCPWM1(unsigned int period, unsigned int sptime,unsigned int
               config1, unsigned int config2, unsigned int config3) __attribute__ ((section (".libperi")));

void OverrideMCPWM1(unsigned int config) __attribute__ ((section (".libperi")));

void SetDCMCPWM1(unsigned int dutycyclereg, unsigned int dutycycle, 
                char updatedisable) __attribute__ ((section (".libperi")));

void SetMCPWM1DeadTimeGeneration(unsigned int config) __attribute__ ((section (".libperi")));

void SetMCPWM1FaultA(unsigned int config) __attribute__ ((section (".libperi")));


/* Definitions for devices that have 4 PWM outputs and a Fault B input */

#ifdef _FLTBIF

/* PWM1CON1 Configuration Bit Definitions */

#define PWM1_MOD4_COMP          0x07FF  /*4th channel in complimentary mode*/
#define PWM1_MOD4_IND           0x0FFF  /*4th channel in independant mode*/

#define PWM1_PEN4H              0x0FFF  /*H of channel 4 works as PWM*/
#define PWM1_PDIS4H             0x0F7F  /*H of channel 4 works as IO*/

#define PWM1_PEN4L              0x0FFF  /*L of channel 4 works as PWM*/
#define PWM1_PDIS4L             0x0FF7  /*L of channel 4 works as IO*/

/* DTCON2 Configuration Bit Definitions */
#define PWM1_DTS4A_UB           0x00FF  /*Dead time for channel 4 to get Active controlled by unit B*/
#define PWM1_DTS4I_UB           0x00FF  /*Dead time for channel 4 to get Inactive controlled by unit B*/
#define PWM1_DTS4A_UA           0x007F  /*Dead time for channel 4 to get Active controlled by unit A*/
#define PWM1_DTS4I_UA           0x00BF  /*Dead time for channel 4 to get Inactive controlled by unit A*/

/* OVDCON Configuration Bit Definitions */
#define PWM1_GEN_4H             0xFFFF  /*controlled by the PWM generator.*/
#define PWM1_GEN_4L             0xFFFF  /*controlled by the PWM generator.*/

#define PWM1_POUT_4H            0x7FFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM1_POUT_4L            0xBFFF  /*controlled by the value in the corresponding POUT bit.*/

#define PWM1_POUT4H_ACT         0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT4H_INACT       0xFF7F  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/

#define PWM1_POUT4L_ACT         0xFFFF   /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM1_POUT4L_INACT       0xFFBF  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/

/* FLTACON Register  */

#define PWM1_OVA4H_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVA4L_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVA4H_INACTIVE     0x7FFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVA4L_INACTIVE     0xBFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_FLTA4_EN           0xFFFF  /* PWM4H/PWM4L pin pair is controlled by Fault Input A.*/
#define PWM1_FLTA4_DIS          0xFFF7  /* PWM4H/PWM4L pin pair is not controlled by Fault Input A.*/

/* Enable/Disable FaultB Interrupt */
#define PWM1_FLTB_EN_INT        0xFFFF  /*Enable Fault B Interrupt */
#define PWM1_FLTB_DIS_INT       0xF7FF  /*Disable Fault B Interrupt */

/* Setting the priority of PWM FaultB interrupt */

#define PWM1_FLTB_INT_PR0       0xF8FF  /* FaultB interrupt priority 0*/
#define PWM1_FLTB_INT_PR1       0xF9FF  /* FaultB interrupt priority 1*/
#define PWM1_FLTB_INT_PR2       0xFAFF  /* FaultB interrupt priority 2*/
#define PWM1_FLTB_INT_PR3       0xFBFF  /* FaultB interrupt priority 3*/
#define PWM1_FLTB_INT_PR4       0xFCFF  /* FaultB interrupt priority 4*/
#define PWM1_FLTB_INT_PR5       0xFDFF  /* FaultB interrupt priority 5*/
#define PWM1_FLTB_INT_PR6       0xFEFF  /* FaultB interrupt priority 6*/
#define PWM1_FLTB_INT_PR7       0xFFFF  /* FaultB interrupt priority 7*/

/* FLTBCON Register  */
#define PWM1_OVB4H_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVB4L_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVB3H_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVB2H_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVB1H_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVB3L_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVB2L_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVB1L_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM1_OVB4H_INACTIVE     0x7FFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVB3H_INACTIVE     0xDFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVB2H_INACTIVE     0xF7FF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVB1H_INACTIVE     0xFDFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVB4L_INACTIVE     0xBFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVB3L_INACTIVE     0xEFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVB2L_INACTIVE     0xFBFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_OVB1L_INACTIVE     0xFEFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM1_FLTB_MODE_CYCLE    0xFFFF  /* The Fault B input pin functions in the cycle-by-cycle limit mode.*/
#define PWM1_FLTB_MODE_LATCH    0xFF7F  /* The Fault B input pin latches all control pins to the programmed states.*/

#define PWM1_FLTB4_EN           0xFFFF  /* PWM4H/PWM4L pin pair is controlled by Fault Input B.*/
#define PWM1_FLTB3_EN           0xFFFF  /* PWM3H/PWM3L pin pair is controlled by Fault Input B.*/
#define PWM1_FLTB2_EN           0xFFFF  /* PWM2H/PWM2L pin pair is controlled by Fault Input B.*/
#define PWM1_FLTB1_EN           0xFFFF  /* PWM1H/PWM1L pin pair is controlled by Fault Input B.*/
#define PWM1_FLTB4_DIS          0xFFF7  /* PWM4H/PWM4L pin pair is not controlled by Fault Input B.*/
#define PWM1_FLTB3_DIS          0xFFFB  /* PWM3H/PWM3L pin pair is not controlled by Fault Input B.*/
#define PWM1_FLTB2_DIS          0xFFFD  /* PWM2H/PWM2L pin pair is not controlled by Fault Input B.*/
#define PWM1_FLTB1_DIS          0xFFFE  /* PWM1H/PWM1L pin pair is not controlled by Fault Input B.*/

#define EnableMCPWM1IntFLTB                    _FLTBIE = 1
#define DisableMCPWM1IntFLTB                   _FLTBIE = 0
#define SetPriorityMCPWM1IntFLTB(priority)     _FLTBIP = priority

void SetMCPWM1DeadTimeAssignment(unsigned int config) __attribute__ ((section (".libperi")));

void SetMCPWM1FaultB(unsigned int config) __attribute__ ((section (".libperi")));


#endif


#else

/* MCPWM2 macros start here */

/* List of SFRs for PWM2 */
/* This list contains the SFRs with default (POR) values to be used for configuring PWM */
/* The user can modify this based on the requirement */

#define P2TCON_VALUE             0x0000
#define P2TMR_VALUE              0x0000
#define P2TPER_VALUE             0x0000
#define P2SECMP_VALUE	         0x0000

#define PWM2CON1_VALUE           0x0077
#define PWM2CON2_VALUE           0x0000

#define P2DTCON1_VALUE           0x0000
#define P2DTCON2_VALUE           0x0000

#define P2FLTACON_VALUE          0x0000

#define P2OVDCON_VALUE           0x3F00

#define P2DC1_VALUE              0x0000


/* P2TCON Configuration Bit Definitions */

#define PWM2_EN                  0xA0FF  /*Module enable*/
#define PWM2_DIS                 0x20FF  /*Module disable*/

#define PWM2_IDLE_STOP           0xA0FF  /*stop in Idle mode*/
#define PWM2_IDLE_CON            0x80FF  /*operate in Idle mode*/

#define PWM2_OP_SCALE1           0xA00F  /*Out put post scaler 1:1*/
#define PWM2_OP_SCALE2           0xA01F  /*Out put post scaler 1:2*/
#define PWM2_OP_SCALE3           0xA02F  /*Out put post scaler 1:3*/
#define PWM2_OP_SCALE4           0xA03F  /*Out put post scaler 1:4*/
#define PWM2_OP_SCALE5           0xA04F  /*Out put post scaler 1:5*/
#define PWM2_OP_SCALE6           0xA05F  /*Out put post scaler 1:6*/
#define PWM2_OP_SCALE7           0xA06F  /*Out put post scaler 1:7*/
#define PWM2_OP_SCALE8           0xA07F  /*Out put post scaler 1:8*/
#define PWM2_OP_SCALE9           0xA08F  /*Out put post scaler 1:9*/
#define PWM2_OP_SCALE10          0xA09F  /*Out put post scaler 1:10*/
#define PWM2_OP_SCALE11          0xA0AF  /*Out put post scaler 1:11*/
#define PWM2_OP_SCALE12          0xA0BF  /*Out put post scaler 1:12*/
#define PWM2_OP_SCALE13          0xA0CF  /*Out put post scaler 1:13*/
#define PWM2_OP_SCALE14          0xA0DF  /*Out put post scaler 1:14*/
#define PWM2_OP_SCALE15          0xA0EF  /*Out put post scaler 1:15*/
#define PWM2_OP_SCALE16          0xA0FF  /*Out put post scaler 1:16*/

#define PWM2_IPCLK_SCALE1        0xA0F3  /*Input pre scaler 1:1*/
#define PWM2_IPCLK_SCALE4        0xA0F7  /*Input pre scaler 1:4*/
#define PWM2_IPCLK_SCALE16       0xA0FB  /*Input pre scaler 1:16*/
#define PWM2_IPCLK_SCALE64       0xA0FF  /*Input pre scaler 1:64*/

#define PWM2_MOD_FREE            0xA0FC  /*Mode of operation Free Running*/
#define PWM2_MOD_SING            0xA0FD  /*Mode of operation Single shot*/
#define PWM2_MOD_UPDN            0xA0FE  /*Mode of operation Up down */
#define PWM2_MOD_DBL             0xA0FF  /*Mode of operation Updown with double update*/

/* PWM2CON1 Configuration Bit Definitions */


#define PWM2_MOD1_COMP           0x0EFF  /*1st channel in complimentary mode*/
#define PWM2_MOD1_IND            0x0FFF  /*1st channel in independant mode*/

#define PWM2_PEN1H               0x0FFF  /*H of channel 1 works as PWM*/
#define PWM2_PDIS1H              0x0FEF  /*H of channel 1 works as IO*/

#define PWM2_PEN1L               0x0FFF  /*L of channel 1 works as PWM*/
#define PWM2_PDIS1L              0x0FFE  /*L of channel 1 works as IO*/

/* PWM2CON2 Configuration Bit Definitions */

#define PWM2_SEVOPS1             0x0003  /*Special event post scaler 1:1*/
#define PWM2_SEVOPS2             0x0103  /*Special event post scaler 1:2*/
#define PWM2_SEVOPS3             0x0203  /*Special event post scaler 1:3*/
#define PWM2_SEVOPS4             0x0303  /*Special event post scaler 1:4*/
#define PWM2_SEVOPS5             0x0403  /*Special event post scaler 1:5*/
#define PWM2_SEVOPS6             0x0503  /*Special event post scaler 1:6*/
#define PWM2_SEVOPS7             0x0603  /*Special event post scaler 1:7*/
#define PWM2_SEVOPS8             0x0703  /*Special event post scaler 1:8*/
#define PWM2_SEVOPS9             0x0803  /*Special event post scaler 1:9*/
#define PWM2_SEVOPS10            0x0903  /*Special event post scaler 1:10*/
#define PWM2_SEVOPS11            0x0A03  /*Special event post scaler 1:11*/
#define PWM2_SEVOPS12            0x0B03  /*Special event post scaler 1:12*/
#define PWM2_SEVOPS13            0x0C03  /*Special event post scaler 1:13*/
#define PWM2_SEVOPS14            0x0D03  /*Special event post scaler 1:14*/
#define PWM2_SEVOPS15            0x0E03  /*Special event post scaler 1:15*/
#define PWM2_SEVOPS16            0x0F03  /*Special event post scaler 1:16*/

#define PWM2_OSYNC_PWM           0x0F03  /*over ride syncronised with PWM clk*/
#define PWM2_OSYNC_TCY           0x0F01  /*over ride syncronised with sys clk*/

#define PWM2_UDIS                0x0F03  /*Update of PDCs and PTPER disabled*/
#define PWM2_UEN                 0x0F02  /*Update of PDCs and PTPER enabled*/

/* P2DTCON1 Configuration Bit Definitions */

                                                        
#define PWM2_DTAPS8              0xFFFF  /*Dead A time PreScaler = 8*/
#define PWM2_DTAPS4              0xFFBF  /*Dead A time PreScaler = 4*/
#define PWM2_DTAPS2              0xFF7F  /*Dead A time PreScaler = 2*/
#define PWM2_DTAPS1              0xFF3F  /*Dead A time PreScaler = 1*/

/* 6-bit dead time value bits for Dead Time Unit A */
#define PWM2_DTA0                0xFFC0  /*Dead time Unit A PreScale select value */
#define PWM2_DTA1                0xFFC1  /*Dead time Unit A PreScale select value */
#define PWM2_DTA2                0xFFC2  /*Dead time Unit A PreScale select value */
#define PWM2_DTA3                0xFFC3  /*Dead time Unit A PreScale select value */
#define PWM2_DTA4                0xFFC4  /*Dead time Unit A PreScale select value */
#define PWM2_DTA5                0xFFC5  /*Dead time Unit A PreScale select value */
#define PWM2_DTA6                0xFFC6  /*Dead time Unit A PreScale select value */
#define PWM2_DTA7                0xFFC7  /*Dead time Unit A PreScale select value */
#define PWM2_DTA8                0xFFC8  /*Dead time Unit A PreScale select value */
#define PWM2_DTA9                0xFFC9  /*Dead time Unit A PreScale select value */
#define PWM2_DTA10               0xFFCA  /*Dead time Unit A PreScale select value */
#define PWM2_DTA11               0xFFCB  /*Dead time Unit A PreScale select value */
#define PWM2_DTA12               0xFFCC  /*Dead time Unit A PreScale select value */
#define PWM2_DTA13               0xFFCD  /*Dead time Unit A PreScale select value */
#define PWM2_DTA14               0xFFCE  /*Dead time Unit A PreScale select value */
#define PWM2_DTA15               0xFFCF  /*Dead time Unit A PreScale select value */
#define PWM2_DTA16               0xFFD0  /*Dead time Unit A PreScale select value */
#define PWM2_DTA17               0xFFD1  /*Dead time Unit A PreScale select value */
#define PWM2_DTA18               0xFFD2  /*Dead time Unit A PreScale select value */
#define PWM2_DTA19               0xFFD3  /*Dead time Unit A PreScale select value */
#define PWM2_DTA20               0xFFD4  /*Dead time Unit A PreScale select value */
#define PWM2_DTA21               0xFFD5  /*Dead time Unit A PreScale select value */
#define PWM2_DTA22               0xFFD6  /*Dead time Unit A PreScale select value */
#define PWM2_DTA23               0xFFD7  /*Dead time Unit A PreScale select value */
#define PWM2_DTA24               0xFFD8  /*Dead time Unit A PreScale select value */
#define PWM2_DTA25               0xFFD9  /*Dead time Unit A PreScale select value */
#define PWM2_DTA26               0xFFDA  /*Dead time Unit A PreScale select value */
#define PWM2_DTA27               0xFFDB  /*Dead time Unit A PreScale select value */
#define PWM2_DTA28               0xFFDC  /*Dead time Unit A PreScale select value */
#define PWM2_DTA29               0xFFDD  /*Dead time Unit A PreScale select value */
#define PWM2_DTA30               0xFFDE  /*Dead time Unit A PreScale select value */
#define PWM2_DTA31               0xFFDF  /*Dead time Unit A PreScale select value */
#define PWM2_DTA32               0xFFE0  /*Dead time Unit A PreScale select value */
#define PWM2_DTA33               0xFFE1  /*Dead time Unit A PreScale select value */
#define PWM2_DTA34               0xFFE2  /*Dead time Unit A PreScale select value */
#define PWM2_DTA35               0xFFE3  /*Dead time Unit A PreScale select value */
#define PWM2_DTA36               0xFFE4  /*Dead time Unit A PreScale select value */
#define PWM2_DTA37               0xFFE5  /*Dead time Unit A PreScale select value */
#define PWM2_DTA38               0xFFE6  /*Dead time Unit A PreScale select value */
#define PWM2_DTA39               0xFFE7  /*Dead time Unit A PreScale select value */
#define PWM2_DTA40               0xFFE8  /*Dead time Unit A PreScale select value */
#define PWM2_DTA41               0xFFE9  /*Dead time Unit A PreScale select value */
#define PWM2_DTA42               0xFFEA  /*Dead time Unit A PreScale select value */
#define PWM2_DTA43               0xFFEB  /*Dead time Unit A PreScale select value */
#define PWM2_DTA44               0xFFEC  /*Dead time Unit A PreScale select value */
#define PWM2_DTA45               0xFFED  /*Dead time Unit A PreScale select value */
#define PWM2_DTA46               0xFFEE  /*Dead time Unit A PreScale select value */
#define PWM2_DTA47               0xFFEF  /*Dead time Unit A PreScale select value */
#define PWM2_DTA48               0xFFF0  /*Dead time Unit A PreScale select value */
#define PWM2_DTA49               0xFFF1  /*Dead time Unit A PreScale select value */
#define PWM2_DTA50               0xFFF2  /*Dead time Unit A PreScale select value */
#define PWM2_DTA51               0xFFF3  /*Dead time Unit A PreScale select value */
#define PWM2_DTA52               0xFFF4  /*Dead time Unit A PreScale select value */
#define PWM2_DTA53               0xFFF5  /*Dead time Unit A PreScale select value */
#define PWM2_DTA54               0xFFF6  /*Dead time Unit A PreScale select value */
#define PWM2_DTA55               0xFFF7  /*Dead time Unit A PreScale select value */
#define PWM2_DTA56               0xFFF8  /*Dead time Unit A PreScale select value */
#define PWM2_DTA57               0xFFF9  /*Dead time Unit A PreScale select value */
#define PWM2_DTA58               0xFFFA  /*Dead time Unit A PreScale select value */
#define PWM2_DTA59               0xFFFB  /*Dead time Unit A PreScale select value */
#define PWM2_DTA60               0xFFFC  /*Dead time Unit A PreScale select value */
#define PWM2_DTA61               0xFFFD  /*Dead time Unit A PreScale select value */
#define PWM2_DTA62               0xFFFE  /*Dead time Unit A PreScale select value */
#define PWM2_DTA63               0xFFFF  /*Dead time Unit A PreScale select value */



/* P2DTCON2 Configuration Bit Definitions */

#define PWM2_DTS1A_UA            0x00FD  /*Dead time for channel 1 to get Active controlled by unit A*/
#define PWM2_DTS1I_UA            0x00FE  /*Dead time for channel 1 to get Inactive controlled by unit A*/

#define PWM2_DTS1A_UB            0x00FF  /*Dead time for channel 1 to get Active controlled by unit B*/
#define PWM2_DTS1I_UB            0x00FF  /*Dead time for channel 1 to get Inactive controlled by unit B*/



/* P2OVDCON Configuration Bit Definitions */

#define PWM2_GEN_1H              0xFFFF  /*controlled by the PWM generator.*/
#define PWM2_GEN_1L              0xFFFF  /*controlled by the PWM generator.*/


#define PWM2_POUT_1H             0xFDFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM2_POUT_1L             0xFEFF  /*controlled by the value in the corresponding POUT bit.*/
 

#define PWM2_POUT1H_ACT          0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM2_POUT1H_INACT        0xFFFD  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM2_POUT1L_ACT          0xFFFF   /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM2_POUT1L_INACT        0xFFFE  /*I/O pin is driven INACTIVE when corresponding POVDxx bit is cleared.*/

/* Enable/Disable PWM Interrupt */

#define PWM2_INT_EN              0xFFFF  /*Enable PWM interrupt*/
#define PWM2_INT_DIS             0xFFF7  /*Disable  PWM interrupt*/

/* Enable/Disable FaultA Interrupt */

#define PWM2_FLTA_EN_INT         0xFFFF  /*Enable Fault A Interrupt */
#define PWM2_FLTA_DIS_INT        0xFF7F  /*Disable Fault A Interrupt */

/* Setting the priority of PWM interrupt */
  
#define PWM2_INT_PR0             0xFFF8  /*period interrupt priority 0*/
#define PWM2_INT_PR1             0xFFF9  /*period interrupt priority 1*/
#define PWM2_INT_PR2             0xFFFA  /*period interrupt priority 2*/
#define PWM2_INT_PR3             0xFFFB  /*period interrupt priority 3*/
#define PWM2_INT_PR4             0xFFFC  /*period interrupt priority 4*/
#define PWM2_INT_PR5             0xFFFD  /*period interrupt priority 5*/
#define PWM2_INT_PR6             0xFFFE  /*period interrupt priority 6*/
#define PWM2_INT_PR7             0xFFFF  /*period interrupt priority 7*/

/* Setting the priority of PWM FaultA interrupt */

#define PWM2_FLTA_INT_PR0        0xFF8F  /* FaultA interrupt priority 0*/
#define PWM2_FLTA_INT_PR1        0xFF9F  /* FaultA interrupt priority 1*/
#define PWM2_FLTA_INT_PR2        0xFFAF  /* FaultA interrupt priority 2*/
#define PWM2_FLTA_INT_PR3        0xFFBF  /* FaultA interrupt priority 3*/
#define PWM2_FLTA_INT_PR4        0xFFCF  /* FaultA interrupt priority 4*/
#define PWM2_FLTA_INT_PR5        0xFFDF  /* FaultA interrupt priority 5*/
#define PWM2_FLTA_INT_PR6        0xFFEF  /* FaultA interrupt priority 6*/
#define PWM2_FLTA_INT_PR7        0xFFFF  /* FaultA interrupt priority 7*/

/* P2FLTACON Register */


#define PWM2_OVA1H_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/

#define PWM2_OVA1L_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/

#define PWM2_OVA1H_INACTIVE      0xFDFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/

#define PWM2_OVA1L_INACTIVE      0xFEFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/

#define PWM2_FLTA_MODE_CYCLE     0xFFFF  /* The Fault A input pin functions in the cycle-by-cycle limit mode.*/
#define PWM2_FLTA_MODE_LATCH     0xFF7F  /* The Fault A input pin latches all control pins to the programmed states.*/

#define PWM2_FLTA1_EN            0xFFFF  /* PWM2H1/PWM2L1 pin pair is controlled by Fault Input A.*/

#define PWM2_FLTA1_DIS           0xFFFE  /* PWM2H1/PWM2L1 pin pair is not controlled by Fault Input A.*/

/* Macros to  Enable/Disable interrupts and set Interrupt priority of PWM */

#define EnableIntMCPWM2                    _PWM2IE = 1
#define DisableIntMCPWM2                   _PWM2IE = 0
#define SetPriorityIntMCPWM2(priority)     _PWM2IP = priority

#define EnableMCPWM2IntFLTA                     _FLTA2IE = 1
#define DisableMCPWM2IntFLTA                    _FLTA2IE = 0
#define SetPriorityMCPWM2IntFLTA(priority)      _FLTA2IP = priority

void CloseMCPWM2(void) __attribute__ ((section (".libperi")));

void ConfigIntMCPWM2(unsigned int config) __attribute__ ((section (".libperi")));

void OpenMCPWM2(unsigned int period, unsigned int sptime,unsigned int
               config1, unsigned int config2, unsigned int config3) __attribute__ ((section (".libperi")));

void OverrideMCPWM2(unsigned int config) __attribute__ ((section (".libperi")));

void SetDCMCPWM2(unsigned int dutycycle, 
                char updatedisable) __attribute__ ((section (".libperi")));

void SetMCPWM2DeadTimeGeneration(unsigned int config) __attribute__ ((section (".libperi")));

void SetMCPWM2FaultA(unsigned int config) __attribute__ ((section (".libperi")));


#endif

/* MCPWM2 macros end here */

#endif 
