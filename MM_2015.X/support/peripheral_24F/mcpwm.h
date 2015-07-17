/**********************************************************************/
/*              Header for PWM module library functions               */
/**********************************************************************/
#include "PIC24F_periph_features.h"

#ifndef __MCPWM_H
#define __MCPWM_H

#if defined (pwm_v1_1) || defined (LIB_BUILD)

/* List of SFRs for PWM */
/* This list contains the SFRs with default (POR) values to be used for configuring PWM */
/* The user can modify this based on the requirement */
#define PTCON_VALUE             0x0000
#define PTMR_VALUE              0x0000
#define PTPER_VALUE             0x0000
#define SEVTCMP_VALUE           0x0000

#define PWMCON2_VALUE           0x0000
#define DTCON1_VALUE            0x0000
#define DTCON2_VALUE            0x0000
#define FLTACON_VALUE           0x0000
#define FLTBCON_VALUE           0x0000

#define PDC1_VALUE              0x0000
#define PDC2_VALUE              0x0000
#define PDC3_VALUE              0x0000
#define PDC4_VALUE              0x0000

#if defined _FLTBIF

#define PWMCON1_VALUE           0x00FF
#define OVDCON_VALUE            0xFF00

#else

#define PWMCON1_VALUE           0x0077
#define OVDCON_VALUE            0x3F00

#endif

/* PTCON Configuration Bit Definitions */

#define PWM_EN                  0xFFFF  /*Module enable*/
#define PWM_DIS                 0x7FFF  /*Module disable*/

#define PWM_IDLE_STOP           0xFFFF  /*stop in Idle mode*/
#define PWM_IDLE_CON            0xDFFF  /*operate in Idle mode*/

#define PWM_OP_SCALE1           0xFF0F  /*Out put post scaler 1:1*/
#define PWM_OP_SCALE2           0xFF1F  /*Out put post scaler 1:2*/
#define PWM_OP_SCALE3           0xFF2F  /*Out put post scaler 1:3*/
#define PWM_OP_SCALE4           0xFF3F  /*Out put post scaler 1:4*/
#define PWM_OP_SCALE5           0xFF4F  /*Out put post scaler 1:5*/
#define PWM_OP_SCALE6           0xFF5F  /*Out put post scaler 1:6*/
#define PWM_OP_SCALE7           0xFF6F  /*Out put post scaler 1:7*/
#define PWM_OP_SCALE8           0xFF7F  /*Out put post scaler 1:8*/
#define PWM_OP_SCALE9           0xFF8F  /*Out put post scaler 1:9*/
#define PWM_OP_SCALE10          0xFF9F  /*Out put post scaler 1:10*/
#define PWM_OP_SCALE11          0xFFAF  /*Out put post scaler 1:11*/
#define PWM_OP_SCALE12          0xFFBF  /*Out put post scaler 1:12*/
#define PWM_OP_SCALE13          0xFFCF  /*Out put post scaler 1:13*/
#define PWM_OP_SCALE14          0xFFDF  /*Out put post scaler 1:14*/
#define PWM_OP_SCALE15          0xFFEF  /*Out put post scaler 1:15*/
#define PWM_OP_SCALE16          0xFFFF  /*Out put post scaler 1:16*/

#define PWM_IPCLK_SCALE1        0xFFF3  /*Input pre scaler 1:1*/
#define PWM_IPCLK_SCALE4        0xFFF7  /*Input pre scaler 1:4*/
#define PWM_IPCLK_SCALE16       0xFFFB  /*Input pre scaler 1:16*/
#define PWM_IPCLK_SCALE64       0xFFFF  /*Input pre scaler 1:64*/

#define PWM_MOD_FREE            0xFFFC  /*Mode of operation Free Running*/
#define PWM_MOD_SING            0xFFFD  /*Mode of operation Single shot*/
#define PWM_MOD_UPDN            0xFFFE  /*Mode of operation Up down */
#define PWM_MOD_DBL             0xFFFF  /*Mode of operation Updown with double update*/

/* PWMCON1 Configuration Bit Definitions */

#define PWM_MOD3_COMP           0xFBFF  /*3th channel in complimentary mode*/
#define PWM_MOD2_COMP           0xFDFF  /*2th channel in complimentary mode*/
#define PWM_MOD1_COMP           0xFEFF  /*1th channel in complimentary mode*/
#define PWM_MOD3_IND            0xFFFF  /*3th channel in independant mode*/
#define PWM_MOD2_IND            0xFFFF  /*2th channel in independant mode*/
#define PWM_MOD1_IND            0xFFFF  /*1th channel in independant mode*/

#define PWM_PEN3H               0xFFFF  /*H of channel 3 works as PWM*/
#define PWM_PDIS3H              0xFFBF  /*H of channel 3 works as IO*/

#define PWM_PEN2H               0xFFFF  /*H of channel 2 works as PWM*/
#define PWM_PDIS2H              0xFFDF  /*H of channel 2 works as IO*/

#define PWM_PEN1H               0xFFFF  /*H of channel 1 works as PWM*/
#define PWM_PDIS1H              0xFFEF  /*H of channel 1 works as IO*/

#define PWM_PEN3L               0xFFFF  /*L of channel 3 works as PWM*/
#define PWM_PDIS3L              0xFFFB  /*L of channel 3 works as IO*/

#define PWM_PEN2L               0xFFFF  /*L of channel 2 works as PWM*/
#define PWM_PDIS2L              0xFFFD  /*L of channel 2 works as IO*/

#define PWM_PEN1L               0xFFFF  /*L of channel 1 works as PWM*/
#define PWM_PDIS1L              0xFFFE  /*L of channel 1 works as IO*/

/* PWMCON2 Configuration Bit Definitions */

#define PWM_SEVOPS1             0xF0FF  /*Special event post scaler 1:1*/
#define PWM_SEVOPS2             0xF1FF  /*Special event post scaler 1:2*/
#define PWM_SEVOPS3             0xF2FF  /*Special event post scaler 1:3*/
#define PWM_SEVOPS4             0xF3FF  /*Special event post scaler 1:4*/
#define PWM_SEVOPS5             0xF4FF  /*Special event post scaler 1:5*/
#define PWM_SEVOPS6             0xF5FF  /*Special event post scaler 1:6*/
#define PWM_SEVOPS7             0xF6FF  /*Special event post scaler 1:7*/
#define PWM_SEVOPS8             0xF7FF  /*Special event post scaler 1:8*/
#define PWM_SEVOPS9             0xF8FF  /*Special event post scaler 1:9*/
#define PWM_SEVOPS10            0xF9FF  /*Special event post scaler 1:10*/
#define PWM_SEVOPS11            0xFFFF  /*Special event post scaler 1:11*/
#define PWM_SEVOPS12            0xFBFF  /*Special event post scaler 1:12*/
#define PWM_SEVOPS13            0xFCFF  /*Special event post scaler 1:13*/
#define PWM_SEVOPS14            0xFDFF  /*Special event post scaler 1:14*/
#define PWM_SEVOPS15            0xFEFF  /*Special event post scaler 1:15*/
#define PWM_SEVOPS16            0xFFFF  /*Special event post scaler 1:16*/

#define PWM_IUE_IMM				0xFFFF	/*Updates to the active PxDC registers are immediate*/
#define PWM_IUE_PWM				0xFFFB	/*Updates to the active PxDC registers are synchronized to the PWM time base*/

#define PWM_OSYNC_PWM           0xFFFF  /*over ride syncronised with PWM clk*/
#define PWM_OSYNC_TCY           0xFFFD  /*over ride syncronised with sys clk*/

#define PWM_UDIS                0xFFFF  /*Update of PDCs and PTPER disabled*/
#define PWM_UEN                 0xFFFE  /*Update of PDCs and PTPER enabled*/

/* DTCON1 Configuration Bit Definitions */

#define PWM_DTBPS8              0xFFFF  /*Dead B time PreScaler = 8*/
#define PWM_DTBPS4              0xBFFF  /*Dead B time PreScaler = 4*/
#define PWM_DTBPS2              0x7FFF  /*Dead B time PreScaler = 2*/
#define PWM_DTBPS1              0x3FFF  /*Dead B time PreScaler = 1*/
                                                        
#define PWM_DTAPS8              0xFFFF  /*Dead A time PreScaler = 8*/
#define PWM_DTAPS4              0xFFBF  /*Dead A time PreScaler = 4*/
#define PWM_DTAPS2              0xFF7F  /*Dead A time PreScaler = 2*/
#define PWM_DTAPS1              0xFF3F  /*Dead A time PreScaler = 1*/

/* 6-bit dead time value bits for Dead Time Unit A */
#define PWM_DTFF                0xFFC0  /*Dead time Unit A PreScale select value */
#define PWM_DTA1                0xFFC1  /*Dead time Unit A PreScale select value */
#define PWM_DTA2                0xFFC2  /*Dead time Unit A PreScale select value */
#define PWM_DTA3                0xFFC3  /*Dead time Unit A PreScale select value */
#define PWM_DTA4                0xFFC4  /*Dead time Unit A PreScale select value */
#define PWM_DTA5                0xFFC5  /*Dead time Unit A PreScale select value */
#define PWM_DTA6                0xFFC6  /*Dead time Unit A PreScale select value */
#define PWM_DTA7                0xFFC7  /*Dead time Unit A PreScale select value */
#define PWM_DTA8                0xFFC8  /*Dead time Unit A PreScale select value */
#define PWM_DTA9                0xFFC9  /*Dead time Unit A PreScale select value */
#define PWM_DTA10               0xFFCA  /*Dead time Unit A PreScale select value */
#define PWM_DTA11               0xFFCB  /*Dead time Unit A PreScale select value */
#define PWM_DTA12               0xFFCC  /*Dead time Unit A PreScale select value */
#define PWM_DTA13               0xFFCD  /*Dead time Unit A PreScale select value */
#define PWM_DTA14               0xFFCE  /*Dead time Unit A PreScale select value */
#define PWM_DTA15               0xFFCF  /*Dead time Unit A PreScale select value */
#define PWM_DTA16               0xFFD0  /*Dead time Unit A PreScale select value */
#define PWM_DTA17               0xFFD1  /*Dead time Unit A PreScale select value */
#define PWM_DTA18               0xFFD2  /*Dead time Unit A PreScale select value */
#define PWM_DTA19               0xFFD3  /*Dead time Unit A PreScale select value */
#define PWM_DTA20               0xFFD4  /*Dead time Unit A PreScale select value */
#define PWM_DTA21               0xFFD5  /*Dead time Unit A PreScale select value */
#define PWM_DTA22               0xFFD6  /*Dead time Unit A PreScale select value */
#define PWM_DTA23               0xFFD7  /*Dead time Unit A PreScale select value */
#define PWM_DTA24               0xFFD8  /*Dead time Unit A PreScale select value */
#define PWM_DTA25               0xFFD9  /*Dead time Unit A PreScale select value */
#define PWM_DTA26               0xFFDA  /*Dead time Unit A PreScale select value */
#define PWM_DTA27               0xFFDB  /*Dead time Unit A PreScale select value */
#define PWM_DTA28               0xFFDC  /*Dead time Unit A PreScale select value */
#define PWM_DTA29               0xFFDD  /*Dead time Unit A PreScale select value */
#define PWM_DTA30               0xFFDE  /*Dead time Unit A PreScale select value */
#define PWM_DTA31               0xFFDF  /*Dead time Unit A PreScale select value */
#define PWM_DTA32               0xFFE0  /*Dead time Unit A PreScale select value */
#define PWM_DTA33               0xFFE1  /*Dead time Unit A PreScale select value */
#define PWM_DTA34               0xFFE2  /*Dead time Unit A PreScale select value */
#define PWM_DTA35               0xFFE3  /*Dead time Unit A PreScale select value */
#define PWM_DTA36               0xFFE4  /*Dead time Unit A PreScale select value */
#define PWM_DTA37               0xFFE5  /*Dead time Unit A PreScale select value */
#define PWM_DTA38               0xFFE6  /*Dead time Unit A PreScale select value */
#define PWM_DTA39               0xFFE7  /*Dead time Unit A PreScale select value */
#define PWM_DTA40               0xFFE8  /*Dead time Unit A PreScale select value */
#define PWM_DTA41               0xFFE9  /*Dead time Unit A PreScale select value */
#define PWM_DTA42               0xFFEA  /*Dead time Unit A PreScale select value */
#define PWM_DTA43               0xFFEB  /*Dead time Unit A PreScale select value */
#define PWM_DTA44               0xFFEC  /*Dead time Unit A PreScale select value */
#define PWM_DTA45               0xFFED  /*Dead time Unit A PreScale select value */
#define PWM_DTA46               0xFFEE  /*Dead time Unit A PreScale select value */
#define PWM_DTA47               0xFFEF  /*Dead time Unit A PreScale select value */
#define PWM_DTA48               0xFFF0  /*Dead time Unit A PreScale select value */
#define PWM_DTA49               0xFFF1  /*Dead time Unit A PreScale select value */
#define PWM_DTA50               0xFFF2  /*Dead time Unit A PreScale select value */
#define PWM_DTA51               0xFFF3  /*Dead time Unit A PreScale select value */
#define PWM_DTA52               0xFFF4  /*Dead time Unit A PreScale select value */
#define PWM_DTA53               0xFFF5  /*Dead time Unit A PreScale select value */
#define PWM_DTA54               0xFFF6  /*Dead time Unit A PreScale select value */
#define PWM_DTA55               0xFFF7  /*Dead time Unit A PreScale select value */
#define PWM_DTA56               0xFFF8  /*Dead time Unit A PreScale select value */
#define PWM_DTA57               0xFFF9  /*Dead time Unit A PreScale select value */
#define PWM_DTA58               0xFFFA  /*Dead time Unit A PreScale select value */
#define PWM_DTA59               0xFFFB  /*Dead time Unit A PreScale select value */
#define PWM_DTA60               0xFFFC  /*Dead time Unit A PreScale select value */
#define PWM_DTA61               0xFFFD  /*Dead time Unit A PreScale select value */
#define PWM_DTA62               0xFFFE  /*Dead time Unit A PreScale select value */
#define PWM_DTA63               0xFFFF  /*Dead time Unit A PreScale select value */

#define PWM_DTB0                0xC0FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB1                0xC1FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB2                0xC2FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB3                0xC3FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB4                0xC4FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB5                0xC5FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB6                0xC6FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB7                0xC7FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB8                0xC8FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB9                0xC9FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB10               0xCAFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB11               0xCBFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB12               0xCCFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB13               0xCDFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB14               0xCEFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB15               0xCFFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB16               0xD0FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB17               0xD1FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB18               0xD2FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB19               0xD3FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB20               0xD4FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB21               0xD5FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB22               0xD6FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB23               0xD7FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB24               0xD8FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB25               0xD9FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB26               0xDAFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB27               0xDBFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB28               0xDCFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB29               0xDDFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB30               0xDEFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB31               0xDFFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB32               0xE0FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB33               0xE1FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB34               0xE2FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB35               0xE3FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB36               0xE4FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB37               0xE5FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB38               0xE6FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB39               0xE7FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB40               0xE8FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB41               0xE9FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB42               0xEAFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB43               0xEBFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB44               0xECFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB45               0xEDFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB46               0xEEFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB47               0xEFFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB48               0xF0FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB49               0xF1FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB50               0xF2FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB51               0xF3FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB52               0xF4FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB53               0xF5FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB54               0xF6FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB55               0xF7FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB56               0xF8FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB57               0xF9FF  /*Dead time Unit B PreScale select value */
#define PWM_DTB58               0xFAFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB59               0xFBFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB60               0xFCFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB61               0xFDFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB62               0xFEFF  /*Dead time Unit B PreScale select value */
#define PWM_DTB63               0xFFFF  /*Dead time Unit B PreScale select value */

/* DTCON2 Configuration Bit Definitions */
#define PWM_DTS3A_UA            0x00DF  /*Dead time for channel 3 to get Active controlled by unit A*/
#define PWM_DTS3I_UA            0x00EF  /*Dead time for channel 3 to get Inactive controlled by unit A*/                                              
#define PWM_DTS2A_UA            0x00F7  /*Dead time for channel 2 to get Active controlled by unit A*/                                                  
#define PWM_DTS2I_UA            0x00FB  /*Dead time for channel 2 to get Inactive controlled by unit A*/
#define PWM_DTS1A_UA            0x00FD  /*Dead time for channel 1 to get Active controlled by unit A*/
#define PWM_DTS1I_UA            0x00FE  /*Dead time for channel 1 to get Inactive controlled by unit A*/
#define PWM_DTS3A_UB            0x00FF  /*Dead time for channel 3 to get Active controlled by unit B*/
#define PWM_DTS3I_UB            0x00FF  /*Dead time for channel 3 to get Inactive controlled by unit B*/
#define PWM_DTS2A_UB            0x00FF  /*Dead time for channel 2 to get Active controlled by unit B*/
#define PWM_DTS2I_UB            0x00FF  /*Dead time for channel 2 to get Inactive controlled by unit B*/
#define PWM_DTS1A_UB            0x00FF  /*Dead time for channel 1 to get Active controlled by unit B*/
#define PWM_DTS1I_UB            0x00FF  /*Dead time for channel 1 to get Inactive controlled by unit B*/

/* OVDCON Configuration Bit Definitions */

#define PWM_GEN_3H              0xFFFF  /*controlled by the PWM generator.*/
#define PWM_GEN_2H              0xFFFF  /*controlled by the PWM generator.*/
#define PWM_GEN_1H              0xFFFF  /*controlled by the PWM generator.*/
#define PWM_GEN_3L              0xFFFF  /*controlled by the PWM generator.*/
#define PWM_GEN_2L              0xFFFF  /*controlled by the PWM generator.*/
#define PWM_GEN_1L              0xFFFF  /*controlled by the PWM generator.*/

#define PWM_POUT_3H             0xDFFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM_POUT_3L             0xEFFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM_POUT_2H             0xF7FF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM_POUT_2L             0xFBFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM_POUT_1H             0xFDFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM_POUT_1L             0xFEFF  /*controlled by the value in the corresponding POUT bit.*/
 
#define PWM_POUT3H_ACT          0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT3H_INACT        0xFFDF  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT3L_ACT          0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT3L_INACT        0xFFEF  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/

#define PWM_POUT2H_ACT          0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT2H_INACT        0xFFF7  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT2L_ACT          0xFFFF   /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT2L_INACT        0xFFFB  /*I/O pin is driven INACTIVE when corresponding POVDxx bit is cleared.*/

#define PWM_POUT1H_ACT          0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT1H_INACT        0xFFFD  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT1L_ACT          0xFFFF   /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT1L_INACT        0xFFFE  /*I/O pin is driven INACTIVE when corresponding POVDxx bit is cleared.*/

/* Enable/Disable PWM Interrupt */

#define PWM_INT_EN              0xFFFF  /*Enable PWM interrupt*/
#define PWM_INT_DIS             0xFFF7  /*Disable  PWM interrupt*/

/* Enable/Disable FaultA Interrupt */
#define PWM_FLTA_EN_INT         0xFFFF  /*Enable Fault A Interrupt */
#define PWM_FLTA_DIS_INT        0xFF7F  /*Disable Fault A Interrupt */

/* Setting the priority of PWM interrupt */
  
#define PWM_INT_PR0             0xFFF8  /*period interrupt priority 0*/
#define PWM_INT_PR1             0xFFF9  /*period interrupt priority 1*/
#define PWM_INT_PR2             0xFFFA  /*period interrupt priority 2*/
#define PWM_INT_PR3             0xFFFB  /*period interrupt priority 3*/
#define PWM_INT_PR4             0xFFFC  /*period interrupt priority 4*/
#define PWM_INT_PR5             0xFFFD  /*period interrupt priority 5*/
#define PWM_INT_PR6             0xFFFE  /*period interrupt priority 6*/
#define PWM_INT_PR7             0xFFFF  /*period interrupt priority 7*/

/* Setting the priority of PWM FaultA interrupt */

#define PWM_FLTA_INT_PR0        0xFF8F  /* FaultA interrupt priority 0*/
#define PWM_FLTA_INT_PR1        0xFF9F  /* FaultA interrupt priority 1*/
#define PWM_FLTA_INT_PR2        0xFFAF  /* FaultA interrupt priority 2*/
#define PWM_FLTA_INT_PR3        0xFFBF  /* FaultA interrupt priority 3*/
#define PWM_FLTA_INT_PR4        0xFFCF  /* FaultA interrupt priority 4*/
#define PWM_FLTA_INT_PR5        0xFFDF  /* FaultA interrupt priority 5*/
#define PWM_FLTA_INT_PR6        0xFFEF  /* FaultA interrupt priority 6*/
#define PWM_FLTA_INT_PR7        0xFFFF  /* FaultA interrupt priority 7*/

/* FLTACON Register */

#define PWM_OVA3H_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVA2H_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVA1H_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVA3L_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVA2L_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVA1L_ACTIVE        0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVA3H_INACTIVE      0xDFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVA2H_INACTIVE      0xF7FF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVA1H_INACTIVE      0xFDFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVA3L_INACTIVE      0xEFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVA2L_INACTIVE      0xFBFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVA1L_INACTIVE      0xFEFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/

#define PWM_FLTA_MODE_CYCLE     0xFFFF  /* The Fault A input pin functions in the cycle-by-cycle limit mode.*/
#define PWM_FLTA_MODE_LATCH     0xFF7F  /* The Fault A input pin latches all control pins to the programmed states.*/
#define PWM_FLTA3_EN            0xFFFF  /* PWM3H/PWM3L pin pair is controlled by Fault Input A.*/
#define PWM_FLTA2_EN            0xFFFF  /* PWM2H/PWM2L pin pair is controlled by Fault Input A.*/
#define PWM_FLTA1_EN            0xFFFF  /* PWM1H/PWM1L pin pair is controlled by Fault Input A.*/
#define PWM_FLTA3_DIS           0xFFFB  /* PWM3H/PWM3L pin pair is not controlled by Fault Input A.*/
#define PWM_FLTA2_DIS           0xFFFD  /* PWM2H/PWM2L pin pair is not controlled by Fault Input A.*/
#define PWM_FLTA1_DIS           0xFFFE  /* PWM1H/PWM1L pin pair is not controlled by Fault Input A.*/

/* Macros to  Enable/Disable interrupts and set Interrupt priority of PWM */

#define EnableIntMCPWM                    (_PWM1IE = 1)
#define DisableIntMCPWM                   (_PWM1IE = 0)
#define SetPriorityIntMCPWM(priority)     (_PWM1IP = priority)

#define EnableIntFLTA                     (_FLTA1IE = 1)
#define DisableIntFLTA                    (_FLTA1IE = 0)
#define SetPriorityIntFLTA(priority)      (_FLTA1IP = priority)

void CloseMCPWM1(void) __attribute__ ((section (".libperi")));

void ConfigIntMCPWM1(unsigned int config) __attribute__ ((section (".libperi")));

void OpenMCPWM1(unsigned int period, unsigned int sptime,unsigned int
               config1, unsigned int config2, unsigned int config3) __attribute__ ((section (".libperi")));

void OverrideMCPWM1(unsigned int config) __attribute__ ((section (".libperi")));

void SetDCMCPWM1(unsigned int dutycyclereg, unsigned int dutycycle, 
                char updatedisable) __attribute__ ((section (".libperi")));

void SetMCPWM1DeadTimeGeneration(unsigned int config) __attribute__ ((section (".libperi")));

void SetMCPWM1FaultA(unsigned int config) __attribute__ ((section (".libperi")));

void SetMCPWM1FaultB(unsigned int config) __attribute__ ((section (".libperi")));

void SetMCPWM1DeadTimeAssignment(unsigned int config) __attribute__ ((section (".libperi")));

/* Definitions for devices that have 4 PWM outputs and a Fault B input */

#if defined _FLTBIF

/* PWMCON1 Configuration Bit Definitions */

#define PWM_MOD4_COMP          0x07FF  /*4th channel in complimentary mode*/
#define PWM_MOD4_IND           0x0FFF  /*4th channel in independant mode*/

#define PWM_PEN4H              0x0FFF  /*H of channel 4 works as PWM*/
#define PWM_PDIS4H             0x0F7F  /*H of channel 4 works as IO*/

#define PWM_PEN4L              0x0FFF  /*L of channel 4 works as PWM*/
#define PWM_PDIS4L             0x0FF7  /*L of channel 4 works as IO*/

/* DTCON2 Configuration Bit Definitions */
#define PWM_DTS4A_UB           0x00FF  /*Dead time for channel 4 to get Active controlled by unit B*/
#define PWM_DTS4I_UB           0x00FF  /*Dead time for channel 4 to get Inactive controlled by unit B*/
#define PWM_DTS4A_UA           0x007F  /*Dead time for channel 4 to get Active controlled by unit A*/
#define PWM_DTS4I_UA           0x00BF  /*Dead time for channel 4 to get Inactive controlled by unit A*/

/* OVDCON Configuration Bit Definitions */
#define PWM_GEN_4H             0xFFFF  /*controlled by the PWM generator.*/
#define PWM_GEN_4L             0xFFFF  /*controlled by the PWM generator.*/

#define PWM_POUT_4H            0x7FFF  /*controlled by the value in the corresponding POUT bit.*/
#define PWM_POUT_4L            0xBFFF  /*controlled by the value in the corresponding POUT bit.*/

#define PWM_POUT4H_ACT         0xFFFF  /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT4H_INACT       0xFF7F  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/

#define PWM_POUT4L_ACT         0xFFFF   /*I/O pin is driven ACTIVE when the corresponding POVDxx bit is cleared.*/
#define PWM_POUT4L_INACT       0xFFBF  /*I/O pin is driven INACTIVE when the corresponding POVDxx bit is cleared.*/

/* FLTACON Register  */

#define PWM_OVA4H_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVA4L_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVA4H_INACTIVE     0x7FFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVA4L_INACTIVE     0xBFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_FLTA4_EN           0xFFFF  /* PWM4H/PWM4L pin pair is controlled by Fault Input A.*/
#define PWM_FLTA4_DIS          0xFFF7  /* PWM4H/PWM4L pin pair is not controlled by Fault Input A.*/

/* Enable/Disable FaultB Interrupt */
#define PWM_FLTB_EN_INT        0xFFFF  /*Enable Fault B Interrupt */
#define PWM_FLTB_DIS_INT       0xF7FF  /*Disable Fault B Interrupt */

/* Setting the priority of PWM FaultB interrupt */

#define PWM_FLTB_INT_PR0       0xF8FF  /* FaultB interrupt priority 0*/
#define PWM_FLTB_INT_PR1       0xF9FF  /* FaultB interrupt priority 1*/
#define PWM_FLTB_INT_PR2       0xFAFF  /* FaultB interrupt priority 2*/
#define PWM_FLTB_INT_PR3       0xFBFF  /* FaultB interrupt priority 3*/
#define PWM_FLTB_INT_PR4       0xFCFF  /* FaultB interrupt priority 4*/
#define PWM_FLTB_INT_PR5       0xFDFF  /* FaultB interrupt priority 5*/
#define PWM_FLTB_INT_PR6       0xFEFF  /* FaultB interrupt priority 6*/
#define PWM_FLTB_INT_PR7       0xFFFF  /* FaultB interrupt priority 7*/

/* FLTBCON Register  */
#define PWM_OVB4H_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVB4L_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVB3H_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVB2H_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVB1H_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVB3L_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVB2L_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVB1L_ACTIVE       0xFFFF  /*The PWM output pin is driven ACTIVE on an external fault input event.*/
#define PWM_OVB4H_INACTIVE     0x7FFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVB3H_INACTIVE     0xDFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVB2H_INACTIVE     0xF7FF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVB1H_INACTIVE     0xFDFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVB4L_INACTIVE     0xBFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVB3L_INACTIVE     0xEFFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVB2L_INACTIVE     0xFBFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_OVB1L_INACTIVE     0xFEFF  /*The PWM output pin is driven INACTIVE on an external fault input event.*/
#define PWM_FLTB_MODE_CYCLE    0xFFFF  /* The Fault B input pin functions in the cycle-by-cycle limit mode.*/
#define PWM_FLTB_MODE_LATCH    0xFF7F  /* The Fault B input pin latches all control pins to the programmed states.*/

#define PWM_FLTB4_EN           0xFFFF  /* PWM4H/PWM4L pin pair is controlled by Fault Input B.*/
#define PWM_FLTB3_EN           0xFFFF  /* PWM3H/PWM3L pin pair is controlled by Fault Input B.*/
#define PWM_FLTB2_EN           0xFFFF  /* PWM2H/PWM2L pin pair is controlled by Fault Input B.*/
#define PWM_FLTB1_EN           0xFFFF  /* PWM1H/PWM1L pin pair is controlled by Fault Input B.*/
#define PWM_FLTB4_DIS          0xFFF7  /* PWM4H/PWM4L pin pair is not controlled by Fault Input B.*/
#define PWM_FLTB3_DIS          0xFFFB  /* PWM3H/PWM3L pin pair is not controlled by Fault Input B.*/
#define PWM_FLTB2_DIS          0xFFFD  /* PWM2H/PWM2L pin pair is not controlled by Fault Input B.*/
#define PWM_FLTB1_DIS          0xFFFE  /* PWM1H/PWM1L pin pair is not controlled by Fault Input B.*/

#define EnableIntFLTB                    (_FLTB1IE = 1)
#define DisableIntFLTB                   (_FLTB1IE = 0)
#define SetPriorityIntFLTB(priority)     (_FLTB1IP = priority)




#endif

#endif

#endif

