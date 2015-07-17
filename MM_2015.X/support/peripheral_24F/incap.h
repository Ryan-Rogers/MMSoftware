#ifndef __INCAP_H
#define __INCAP_H

/******************************************************************************
 *
 *                  INPUT CAPTURE PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        Input Capture
 * Dependencies:    See include below
 * Processor:       PIC24
 * Compiler:        MPLAB C30
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 * The software supplied herewith by Microchip Technology Incorporated
 * (the “Company”) for its PICmicro® Microcontroller is intended and
 * supplied to you, the Company’s customer, for use solely and
 * exclusively on Microchip PICmicro Microcontroller products. The
 * software is owned by the Company and/or its supplier, and is
 * protected under applicable copyright laws. All rights are reserved.
 * Any use in violation of the foregoing restrictions may subject the
 * user to criminal sanctions under applicable laws, as well as to
 * civil liability for the breach of the terms and conditions of this
 * license.
 *
 * THIS SOFTWARE IS PROVIDED IN AN “AS IS” CONDITION. NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED
 * TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE COMPANY SHALL NOT,
 * IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR
 * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 *****************************************************************************/

#include "PIC24F_periph_features.h"

//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#if defined (icap_v1_1) || defined (icap_v1_2) || defined (icap_v1_3) || defined (icap_v2_1) || defined (icap_v2_2) || \
    defined (icap_v2_3) || defined (icap_v2_4)|| defined (icap_v3_1) || defined (icap_v3_2) || defined (LIB_BUILD) 

#if defined (icap_v1_1) || defined (icap_v1_2) || defined (icap_v1_3) 

#ifndef USE_AND_OR  /* Format for AND_OR based bit setting */
/* Input Capture Config (ICxCON Reg) Bit defines */
#define IC_IDLE_CON             0xdfff /* IC operate in sleep mode */
#define IC_IDLE_STOP            0xffff /* IC stop in sleep mode */

#define IC_TIMER2_SRC           0xffff /* Timer2 is the clock source for Capture */
#define IC_TIMER3_SRC           0xff7f /* Timer3 is the clock source for Capture */

#define IC_INT_4CAPTURE         0xffff /* Interrupt on fourth Capture*/
#define IC_INT_3CAPTURE         0xffdf /* Interrupt on third Capture */
#define IC_INT_2CAPTURE         0xffbf /* Interrupt on second Capture*/
#define IC_INT_1CAPTURE         0xff9f /* Interrupt on first Capture */

#define IC_INTERRUPT            0xffff /* Interrupt pin only in CPU sleep and idle mode */
#define IC_EVERY_16_RISE_EDGE   0xfffd /* Every 16th rising edge */
#define IC_EVERY_4_RISE_EDGE    0xfffc /* Every 4th rising edge  */
#define IC_EVERY_RISE_EDGE      0xfffb /* Every rising edge      */
#define IC_EVERY_FALL_EDGE      0xfffa /* Every falling edge      */
#define IC_EVERY_EDGE           0xfff9 /* Every rising/falling edge */
#define IC_INPUTCAP_OFF         0xfff8 /* Input Capture Off      */

/* defines for IC interrupts */
#define IC_INT_ON               0xffff /* Input Capture Int Enable  */
#define IC_INT_OFF              0xfff7 /* Input Capture Int Disable */

#define IC_INT_PRIOR_0          0xfff8 /* Input Capture PriorityLevel 0 */
#define IC_INT_PRIOR_1          0xfff9 /* Input Capture PriorityLevel 1 */
#define IC_INT_PRIOR_2          0xfffa /* Input Capture PriorityLevel 2 */
#define IC_INT_PRIOR_3          0xfffb /* Input Capture PriorityLevel 3 */
#define IC_INT_PRIOR_4          0xfffc /* Input Capture PriorityLevel 4 */
#define IC_INT_PRIOR_5          0xfffd /* Input Capture PriorityLevel 5 */
#define IC_INT_PRIOR_6          0xfffe /* Input Capture PriorityLevel 6 */
#define IC_INT_PRIOR_7          0xffff /* Input Capture PriorityLevel 7 */

#else /* Format for backward compatibility (AND based bit setting). */

#define IC_IDLE_STOP            0x2000 /* IC stop in sleep mode */
#define IC_IDLE_CON             0x0000 /* IC operate in sleep mode */
#define IC_IDLE_MASK            (~IC_IDLE_STOP)

#define IC_TIMER2_SRC           0x0080 /* Timer2 is the clock source for Capture */
#define IC_TIMER3_SRC           0x0000 /* Timer3 is the clock source for Capture */
#define IC_TIMER_SRC_MASK       (~IC_TIMER2_SRC)

#define IC_INT_4CAPTURE         0x0060  /* Interrupt on fourth Capture*/
#define IC_INT_3CAPTURE         0x0040 /* Interrupt on third Capture */
#define IC_INT_2CAPTURE         0x0020 /* Interrupt on second Capture*/
#define IC_INT_1CAPTURE         0x0000 /* Interrupt on first Capture */
#define IC_INT_CAPTURE_MASK     (~IC_INT_4CAPTURE)

#define IC_INTERRUPT            0x0007 /* Interrupt pin only in CPU sleep and idle mode */
#define IC_EVERY_16_RISE_EDGE   0x0005 /* Every 16th rising edge */
#define IC_EVERY_4_RISE_EDGE    0x0004 /* Every 4th rising edge  */
#define IC_EVERY_RISE_EDGE      0x0003 /* Every rising edge      */ 
#define IC_EVERY_FALL_EDGE      0x0002 /* Every falling edge      */
#define IC_EVERY_EDGE           0x0001 /* Every rising/falling edge */
#define IC_INPUTCAP_OFF         0x0000 /* Input Capture Off      */
#define IC_CAPTURE_MODE_MASK    (~IC_INTERRUPT)

/* defines for IC interrupts */
#define IC_INT_ON               0x0008 /* Input Capture Int Enable  */
#define IC_INT_OFF              0x0000 /* Input Capture Int Disable */
#define IC_INT_MASK             (~IC_INT_ON) 

#define IC_INT_PRIOR_0          0x0000 /* Input Capture PriorityLevel 0 */
#define IC_INT_PRIOR_1          0x0001 /* Input Capture PriorityLevel 1 */
#define IC_INT_PRIOR_2          0x0002 /* Input Capture PriorityLevel 2 */
#define IC_INT_PRIOR_3          0x0003 /* Input Capture PriorityLevel 3 */
#define IC_INT_PRIOR_4          0x0004 /* Input Capture PriorityLevel 4 */
#define IC_INT_PRIOR_5          0x0005 /* Input Capture PriorityLevel 5 */
#define IC_INT_PRIOR_6          0x0006 /* Input Capture PriorityLevel 6 */
#define IC_INT_PRIOR_7          0x0007 /* Input Capture PriorityLevel 7 */
#define IC_INT_PRIOR_MASK       (~IC_INT_PRIOR_7)

#endif /* USE_AND_OR */

#endif

#if defined (icap_v2_1) || defined (icap_v2_2) ||defined (icap_v2_3) || defined (icap_v2_4)
#ifndef USE_AND_OR /* Format for AND_OR based bit setting */

/**** ICxCON1 Bit defines */
#define IC_IDLE_STOP            0xffff/* IC stop in sleep mode */
#define IC_IDLE_CON             0xdfff /* IC operate in sleep mode */

#define IC_SYSCLK_SRC           0xffff/* system clock is the clock source for Capture */
#define IC_TIMER1_SRC           0xf3ff /* Timer1 is the clock source for Capture */
#define IC_TIMER5_SRC           0xefff /* Timer5 is the clock source for Capture */
#define IC_TIMER4_SRC           0xebff/* Timer4 is the clock source for Capture */
#define IC_TIMER2_SRC           0xe7ff/* Timer2 is the clock source for Capture */
#define IC_TIMER3_SRC           0xe3ff /* Timer3 is the clock source for Capture */

#define IC_INT_4CAPTURE         0xffff/* Interrupt on fourth Capture*/
#define IC_INT_3CAPTURE         0xffdf /* Interrupt on third Capture */
#define IC_INT_2CAPTURE         0xffbf /* Interrupt on second Capture*/
#define IC_INT_1CAPTURE         0xff9f /* Interrupt on first Capture */
 
#define IC_INTERRUPT            0xffff /* Interrupt pin only in CPU sleep and idle mode */
#define IC_EVERY_16_RISE_EDGE   0xfffd /* Every 16th rising edge */
#define IC_EVERY_4_RISE_EDGE    0xfffc /* Every 4th rising edge  */
#define IC_EVERY_RISE_EDGE      0xfffb /* Every rising edge      */
#define IC_EVERY_FALL_EDGE      0xfffa/* Every falling edge      */
#define IC_EVERY_EDGE           0xfff9 /* Every rising/falling edge */
#define IC_INPUTCAP_OFF         0xfff8 /* Input Capture Off      */

/*ICxCON2 register definition*/
#define IC_CASCADE_ENABLE		0xffff /* Cascade Module Operation Enabled */
#define IC_CASCADE_DISABLE		0xfeff  /* Cascade Module Operation Disabled */

#define IC_TRIGGER_ENABLE 		0xffff /* Sync_trig_in[x] is used to trigger the module timer */
#define IC_SYNC_ENABLE			0xff7f /* Sync_trig_in[x] is used to sync to another module timer */
 
#define IC_TRIGGER_TIMER 		0xffff	/* Timer has been triggered and is running */
#define IC_UNTRIGGER_TIMER		0xffbf /* Timer not triigered and is being held in clear */
 
#define IC_SYNC_TRIG_IN_DISABLE 0xffe0	/* Disables trigger operation */
#define IC_SYNC_TRIG_IN_OC1		0xffe1/* Sync or Trigger input is OC1 */
#define IC_SYNC_TRIG_IN_OC2		0xffe2/* Sync or Trigger input is OC2 */
#define IC_SYNC_TRIG_IN_OC3		0xffe3/* Sync or Trigger input is OC3 */
#define IC_SYNC_TRIG_IN_OC4		0xffe4/* Sync or Trigger input is OC4 */
#define IC_SYNC_TRIG_IN_OC5		0xffe5/* Sync or Trigger input is OC5 */

#if defined (icap_v2_2)|| defined (icap_v2_4)
#define IC_SYNC_TRIG_IN_OC6		0xffe6/* Sync or Trigger input is OC6 */
#define IC_SYNC_TRIG_IN_OC7		0xffe7/* Sync or Trigger input is OC7 */
#define IC_SYNC_TRIG_IN_OC8		0xffe8/* Sync or Trigger input is OC8 */
#define IC_SYNC_TRIG_IN_OC9		0xffe9/* Sync or Trigger input is OC9 */
#endif

#define IC_SYNC_TRIG_IN_IC5		0xffea/* Sync or Trigger input is ICAP5 */
#define IC_SYNC_TRIG_IN_TMR1	0xffeb/* Sync or Trigger input is Timer1 */
#define IC_SYNC_TRIG_IN_TMR2	0xffec/* Sync or Trigger input is Timer2 */
#define IC_SYNC_TRIG_IN_TMR3	0xffed/* Sync or Trigger input is Timer3 */
#define IC_SYNC_TRIG_IN_TMR4	0xffee/* Sync or Trigger input is Timer4 */
#define IC_SYNC_TRIG_IN_TMR5	0xffef/* Sync or Trigger input is Timer5 */
#define IC_SYNC_TRIG_IN_IC1		0xfff4/* Sync or Trigger input is ICAP1 */
#define IC_SYNC_TRIG_IN_IC2		0xfff5/* Sync or Trigger input is ICAP2 */
#define IC_SYNC_TRIG_IN_IC3		0xfff6/* Sync or Trigger input is ICAP3 */
#define IC_SYNC_TRIG_IN_IC4		0xfff7/* Sync or Trigger input is ICAP4 */
#define IC_SYNC_TRIG_IN_CMP1	0xfff8/* Sync or Trigger input is CMP1 */
#define IC_SYNC_TRIG_IN_CMP2	0xfff9/* Sync or Trigger input is CMP2 */
#define IC_SYNC_TRIG_IN_CMP3	0xfffa/* Sync or Trigger input is CMP3 */
#define IC_SYNC_TRIG_IN_AD		0xfffb/* Sync or Trigger input is AD */
#define IC_SYNC_TRIG_IN_CTMU	0xfffc/* Sync or Trigger input is CTMU */

#if defined (icap_v2_2)|| defined (icap_v2_4)
#define IC_SYNC_TRIG_IN_IC6		0xfffd/* Sync or Trigger input is ICAP6 */
#define IC_SYNC_TRIG_IN_IC7		0xfff2/* Sync or Trigger input is ICAP7 */
#define IC_SYNC_TRIG_IN_IC8		0xfff3/* Sync or Trigger input is ICAP8 */
#define IC_SYNC_TRIG_IN_IC9		0xfffe/* Sync or Trigger input is ICAP9 */
#endif

/* defines for IC interrupts */
#define IC_INT_ON               0xffff /* Input Capture Int Enable  */
#define IC_INT_OFF              0xfff7/* Input Capture Int Disable */

#define IC_INT_PRIOR_0          0xfff8/* Input Capture PriorityLevel 0 */
#define IC_INT_PRIOR_1          0xfff9/* Input Capture PriorityLevel 1 */
#define IC_INT_PRIOR_2          0xfffa /* Input Capture PriorityLevel 2 */
#define IC_INT_PRIOR_3          0xfffb/* Input Capture PriorityLevel 3 */
#define IC_INT_PRIOR_4          0xfffc/* Input Capture PriorityLevel 4 */
#define IC_INT_PRIOR_5          0xfffd/* Input Capture PriorityLevel 5 */
#define IC_INT_PRIOR_6          0xfffe /* Input Capture PriorityLevel 6 */
#define IC_INT_PRIOR_7          0xffff  /* Input Capture PriorityLevel 7 */

#else /* Format for backward compatibility (AND based bit setting). */

/***** ICxCON1 register definition ****/
#define IC_IDLE_STOP            0x2000 /* IC stop in sleep mode */
#define IC_IDLE_CON             0x0000 /* IC operate in sleep mode */
#define IC_IDLE_MASK            (~IC_IDLE_STOP)

#define IC_SYSCLK_SRC           0x1C00 /* Peripheral 1 clock is the clock source for Capture */
#define IC_TIMER1_SRC           0x1000 /* Timer1 is the clock source for Capture */
#define IC_TIMER5_SRC           0x0C00 /* Timer5 is the clock source for Capture */
#define IC_TIMER4_SRC           0x0800 /* Timer4 is the clock source for Capture */
#define IC_TIMER2_SRC           0x0400 /* Timer2 is the clock source for Capture */
#define IC_TIMER3_SRC           0x0000 /* Timer3 is the clock source for Capture */
#define IC_TIMER_SRC_MASK       (~IC_SYSCLK_SRC)

#define IC_INT_4CAPTURE         0x0060 /* Interrupt on fourth Capture*/
#define IC_INT_3CAPTURE         0x0040 /* Interrupt on third Capture */
#define IC_INT_2CAPTURE         0x0020 /* Interrupt on second Capture*/
#define IC_INT_1CAPTURE         0x0000 /* Interrupt on first Capture */
#define IC_INT_CAPTURE_MASK     (~IC_INT_4CAPTURE)

#define IC_INTERRUPT            0x0007 /* Interrupt pin only in CPU sleep and idle mode */
#define IC_EVERY_16_RISE_EDGE   0x0005 /* Every 16th rising edge */
#define IC_EVERY_4_RISE_EDGE    0x0004 /* Every 4th rising edge  */
#define IC_EVERY_RISE_EDGE      0x0003 /* Every rising edge      */
#define IC_EVERY_FALL_EDGE      0x0002 /* Every falling edge     */
#define IC_EVERY_EDGE           0x0001 /* Every rising/falling edge */
#define IC_INPUTCAP_OFF         0x0000 /* Input Capture Off      */
#define IC_CAPTURE_MODE_MASK    (~IC_INTERRUPT)

/***** ICxCON2 register definition ****/
#define IC_CASCADE_ENABLE		0x0100/* Cascade Module Operation Enabled */
#define IC_CASCADE_DISABLE		0x0000 /* Cascade Module Operation Disabled */
#define IC_CASCADE_MASK			(~IC_CASCADE_ENABLE)

#define IC_TRIGGER_ENABLE 		0x0080/* Sync_trig_in[x] is used to trigger the module timer */
#define IC_SYNC_ENABLE			0x0000 /* Sync_trig_in[x] is used to sync to another module timer */
#define IC_TRIGGER_EANABLE_MASK	(~IC_TRIGGER_ENABLE)

#define IC_TRIGGER_TIMER 		0x0040	/* Timer has been triggered and is running */
#define IC_UNTRIGGER_TIMER		0x0000  /* Timer not triigered and is being held in clear */
#define IC_TRIGGER_BIT_MASK		(~IC_TRIGGER_TIMER)

#define IC_SYNC_TRIG_IN_DISABLE 0x0000/* Disables trigger operation */
#define IC_SYNC_TRIG_IN_OC1		0x0001/* Sync or Trigger input is OC1 */
#define IC_SYNC_TRIG_IN_OC2		0x0002/* Sync or Trigger input is OC2 */
#define IC_SYNC_TRIG_IN_OC3		0x0003/* Sync or Trigger input is OC3 */
#define IC_SYNC_TRIG_IN_OC4		0x0004/* Sync or Trigger input is OC4 */
#define IC_SYNC_TRIG_IN_OC5		0x0005/* Sync or Trigger input is OC5 */

#if defined (icap_v2_2)|| defined (icap_v2_4)
#define IC_SYNC_TRIG_IN_OC6		0x0006/* Sync or Trigger input is OC6 */
#define IC_SYNC_TRIG_IN_OC7		0x0007/* Sync or Trigger input is OC7 */
#define IC_SYNC_TRIG_IN_OC8		0x0008/* Sync or Trigger input is OC8 */
#define IC_SYNC_TRIG_IN_OC9		0x0009/* Sync or Trigger input is OC9 */
#endif

#define IC_SYNC_TRIG_IN_IC5		0x000A/* Sync or Trigger input is ICAP5 */
#define IC_SYNC_TRIG_IN_TMR1	0x000B/* Sync or Trigger input is Timer1 */
#define IC_SYNC_TRIG_IN_TMR2	0x000C/* Sync or Trigger input is Timer2 */
#define IC_SYNC_TRIG_IN_TMR3	0x000D/* Sync or Trigger input is Timer3 */
#define IC_SYNC_TRIG_IN_TMR4	0x000E/* Sync or Trigger input is Timer4 */
#define IC_SYNC_TRIG_IN_TMR5	0x000F/* Sync or Trigger input is Timer5 */

#if defined (icap_v2_2)|| defined (icap_v2_4)
#define IC_SYNC_TRIG_IN_IC6		0x001D/* Sync or Trigger input is ICAP6 */
#define IC_SYNC_TRIG_IN_IC7		0x0012/* Sync or Trigger input is ICAP7 */
#define IC_SYNC_TRIG_IN_IC8		0x0013/* Sync or Trigger input is ICAP8 */
#define IC_SYNC_TRIG_IN_IC9		0x001E/* Sync or Trigger input is ICAP9 */
#endif

#define IC_SYNC_TRIG_IN_IC1		0x0014/* Sync or Trigger input is ICAP1 */
#define IC_SYNC_TRIG_IN_IC2		0x0015/* Sync or Trigger input is ICAP2 */
#define IC_SYNC_TRIG_IN_IC3		0x0016/* Sync or Trigger input is ICAP3 */
#define IC_SYNC_TRIG_IN_IC4		0x0017/* Sync or Trigger input is ICAP4 */
#define IC_SYNC_TRIG_IN_CMP1	0x0018/* Sync or Trigger input is CMP1 */
#define IC_SYNC_TRIG_IN_CMP2	0x0019/* Sync or Trigger input is CMP2 */
#define IC_SYNC_TRIG_IN_CMP3	0x001A/* Sync or Trigger input is CMP3 */
#define IC_SYNC_TRIG_IN_AD		0x001B/* Sync or Trigger input is AD */
#define IC_SYNC_TRIG_IN_CTMU	0x001C/* Sync or Trigger input is CTMU */

#define IC_SYNC_TRIG_MASK       (~IC_SYNC_TRIG_IN_IC9)	

/* defines for IC interrupts */
#define IC_INT_ON               0x0008 /* Input Capture Int Enable  */
#define IC_INT_OFF              0x0000 /* Input Capture Int Disable */
#define IC_INT_MASK             (~IC_INT_ON)

#define IC_INT_PRIOR_0          0x0000 /* Input Capture PriorityLevel 0 */
#define IC_INT_PRIOR_1          0x0001/* Input Capture PriorityLevel 1 */
#define IC_INT_PRIOR_2          0x0002/* Input Capture PriorityLevel 2 */
#define IC_INT_PRIOR_3          0x0003  /* Input Capture PriorityLevel 3 */
#define IC_INT_PRIOR_4          0x0004  /* Input Capture PriorityLevel 4 */
#define IC_INT_PRIOR_5          0x0005 /* Input Capture PriorityLevel 5 */
#define IC_INT_PRIOR_6          0x0006 /* Input Capture PriorityLevel 6 */
#define IC_INT_PRIOR_7          0x0007  /* Input Capture PriorityLevel 7 */
#define IC_INT_PRIOR_MASK       (~IC_INT_PRIOR_7)

#endif 

#endif 

#if defined (icap_v3_1) || defined (icap_v3_2)

#ifndef USE_AND_OR  /* Format for AND_OR based bit setting */

/* ***** CAPTURE1 (CCP1CON) ***** */
//***************** Capture mode selection ********************************************
#define CAP_EVERY_FALL_EDGE     0xF4  	/* Capture on every falling edge*/
#define CAP_EVERY_RISE_EDGE     0xF5  	/* Capture on every rising edge*/
#define CAP_EVERY_4_RISE_EDGE   0xF6  	/* Capture on every 4th rising edge*/
#define CAP_EVERY_16_RISE_EDGE  0xF7  	/* Capture on every 16th rising edge  */

#if defined (icap_v3_2)

/* ***** ECAPTURE1 (ECCP1CON) ***** */
//***************** ECapture mode selection ********************************************
#define ECAP_EVERY_FALL_EDGE     0xF4  	/* Capture on every falling edge*/
#define ECAP_EVERY_RISE_EDGE     0xF5  	/* Capture on every rising edge*/
#define ECAP_EVERY_4_RISE_EDGE   0xF6  	/* Capture on every 4th rising edge*/
#define ECAP_EVERY_16_RISE_EDGE  0xF7  	/* Capture on every 16th rising edge  */

#endif
/****** CCPTMRS0 **************** */
//**************Timer source selection ***************************/
#define ECCP_1_SEL_TMR32		0xFE  	//ECCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define ECCP_1_SEL_TMR34		0xFF  	//ECCP selects TIMER3 for Capture & Compare and TIMER4 for PWM

#define CCP_2_SEL_TMR32		    0xF7 	//CCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define CCP_2_SEL_TMR34		    0xFF  	//CCP selects TIMER3 for Capture & Compare and TIMER4 for PWM

#if defined (icap_v3_2)
#define CCP_3_SEL_TMR32		    0xBF  	//CCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define CCP_3_SEL_TMR34		    0xFF  	//CCP selects TIMER3 for Capture & Compare and TIMER4 for PWM
#endif

/* defines for IC interrupts */
#define CAP_INT_ON               0xff /* Input Capture Int Enable  */
#define CAP_INT_OFF              0xf7/* Input Capture Int Disable */

#define CAP_INT_PRIOR_0          0xf8/* Input Capture PriorityLevel 0 */
#define CAP_INT_PRIOR_1          0xf9/* Input Capture PriorityLevel 1 */
#define CAP_INT_PRIOR_2          0xfa /* Input Capture PriorityLevel 2 */
#define CAP_INT_PRIOR_3          0xfb/* Input Capture PriorityLevel 3 */
#define CAP_INT_PRIOR_4          0xfc/* Input Capture PriorityLevel 4 */
#define CAP_INT_PRIOR_5          0xfd/* Input Capture PriorityLevel 5 */
#define CAP_INT_PRIOR_6          0xfe /* Input Capture PriorityLevel 6 */
#define CAP_INT_PRIOR_7          0xff  /* Input Capture PriorityLevel 7 */

#else
/* ***** CAPTURE1 (CCP1CON) ***** */
//***************** Capture mode selection ********************************************
#define CAP_EVERY_FALL_EDGE     0x04  	/* Capture on every falling edge*/
#define CAP_EVERY_RISE_EDGE     0x05  	/* Capture on every rising edge*/
#define CAP_EVERY_4_RISE_EDGE   0x06  	/* Capture on every 4th rising edge*/
#define CAP_EVERY_16_RISE_EDGE  0x07  	/* Capture on every 16th rising edge  */
#define CAP_MODE_MASK			(~CAP_EVERY_FALL_EDGE)	//Mask Capture mode selection bits

#if defined (icap_v3_2)

/* ***** ECAPTURE1 (ECCP1CON) ***** */
//***************** Capture mode selection ********************************************
#define ECAP_EVERY_FALL_EDGE     0x04  	/* Capture on every falling edge*/
#define ECAP_EVERY_RISE_EDGE     0x05  	/* Capture on every rising edge*/
#define ECAP_EVERY_4_RISE_EDGE   0x06  	/* Capture on every 4th rising edge*/
#define ECAP_EVERY_16_RISE_EDGE  0x07  	/* Capture on every 16th rising edge  */
#define ECAP_MODE_MASK			(~ECAP_EVERY_16_RISE_EDGE)	//Mask Capture mode selection bits

#endif
/* ***** CCPTMRS0 ***** */
//**************Timer source selection ***************************/
#define ECCP_1_SEL_TMR32		0x00  	//ECCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define ECCP_1_SEL_TMR34		0x01  	//ECCP selects TIMER3 for Capture & Compare and TIMER4 for PWM
#define ECCP_1_SEL_TMR_MASK		(~ECCP_1_SEL_TMR34)  	//Masks ECCP TIMER Source selection bits

#define CCP_2_SEL_TMR32		    0x00 	//CCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define CCP_2_SEL_TMR34		    0x08  	//CCP selects TIMER3 for Capture & Compare and TIMER4 for PWM
#define CCP_2_SEL_TMR_MASK		(~CCP_2_SEL_TMR34)  	//Masks CCP TIMER Source selection bits

#if defined (icap_v3_2)
#define CCP_3_SEL_TMR32		    0x00  	//CCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define CCP_3_SEL_TMR34		    0x40  	//CCP selects TIMER3 for Capture & Compare and TIMER4 for PWM
#define CCP_3_SEL_TMR_MASK		(~CCP_3_SEL_TMR34)  	//Masks CCP TIMER Source selection bits
#endif

/* defines for IC interrupts */
#define CAP_INT_ON               0x0008 /* Input Capture Int Enable  */
#define CAP_INT_OFF              0x0000 /* Input Capture Int Disable */
#define CAP_INT_MASK             (~CAP_INT_ON)

#define CAP_INT_PRIOR_0          0x00 /* Input Capture PriorityLevel 0 */
#define CAP_INT_PRIOR_1          0x01/* Input Capture PriorityLevel 1 */
#define CAP_INT_PRIOR_2          0x02/* Input Capture PriorityLevel 2 */
#define CAP_INT_PRIOR_3          0x03  /* Input Capture PriorityLevel 3 */
#define CAP_INT_PRIOR_4          0x04  /* Input Capture PriorityLevel 4 */
#define CAP_INT_PRIOR_5          0x05 /* Input Capture PriorityLevel 5 */
#define CAP_INT_PRIOR_6          0x06 /* Input Capture PriorityLevel 6 */
#define CAP_INT_PRIOR_7          0x07  /* Input Capture PriorityLevel 7 */
#define CAP_INT_PRIOR_MASK       (~CAP_INT_PRIOR_7)
#endif

#if defined (icap_v3_1) || defined (icap_v3_2)  || defined(LIB_BUILD)

/*Registers Defaults*/
#define CCP1CON_VALUE            0x0000
#define CCPTMRS0_VALUE            0x0000

#ifndef LIB_BUILD 
#define OpenCapture1            OpenCapture1_v3
#define CloseCapture1            CloseCapture1_v3
#define ConfigIntCapture1        ConfigIntCapture1_v3
#define ReadCapture1            ReadCapture1_v3
#endif

/*************************************************************************
Macro       : EnableIntIC1
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC1                   (IEC0bits.CCP1IE = 1) 

/*************************************************************************
Macro       : DisableIntIC1
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC1                   (IEC0bits.CCP1IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC1(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC1(priority)     (IPC0bits.CCP1IP = priority)

/*******************************************************************
Macro       : IC1_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC1_Clear_Intr_Status_Bit     (IFS0bits.CCP1IF = 0)

void __attribute__ ((section (".libperi")))OpenCapture1_v3(unsigned int config) ;

void __attribute__ ((section (".libperi")))CloseCapture1_v3(void) ;

void __attribute__ ((section (".libperi")))ConfigIntCapture1_v3(unsigned int config ) ;

unsigned int __attribute__ ((section (".libperi")))ReadCapture1_v3(void) ;


/*Registers Defaults*/
#define CCP2CON_VALUE            0x0000

#ifndef LIB_BUILD 
#define OpenCapture2            OpenCapture2_v3
#define CloseCapture2            CloseCapture2_v3
#define ConfigIntCapture2        ConfigIntCapture2_v3
#define ReadCapture2            ReadCapture2_v3
#endif

/*************************************************************************
Macro       : EnableIntIC2
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC2                   (IEC0bits.CCP2IE = 1) 

/*************************************************************************
Macro       : DisableIntIC2
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC2                   (IEC0bits.CCP2IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC2(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC2(priority)     (IPC1bits.CCP2IP = priority)

/*******************************************************************
Macro       : IC2_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC2_Clear_Intr_Status_Bit    (IFS0bits.CCP2IF = 0)

void __attribute__ ((section (".libperi")))OpenCapture2_v3(unsigned int config) ;

void __attribute__ ((section (".libperi")))CloseCapture2_v3(void) ;

void __attribute__ ((section (".libperi")))ConfigIntCapture2_v3(unsigned int config ) ;

unsigned int __attribute__ ((section (".libperi")))ReadCapture2_v3(void) ;

#if defined (icap_v3_2)  || defined(LIB_BUILD)

/*Registers Defaults*/
#define CCP3CON_VALUE            0x0000
#define ECCP1CON_VALUE            0x0000

#ifndef LIB_BUILD 
#define OpenCapture3           OpenCapture3_v3
#define CloseCapture3            CloseCapture3_v3
#define ConfigIntCapture3        ConfigIntCapture3_v3
#define ReadCapture3            ReadCapture3_v3

#define OpenECapture1            OpenECapture1_v3
#define CloseECapture1           CloseECapture1_v3
#define ReadECapture1            ReadECapture1_v3
#endif

/*************************************************************************
Macro       : EnableIntIC3
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC3                   (IEC1bits.CCP3IE = 1) 

/*************************************************************************
Macro       : DisableIntIC3
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC3                   (IEC1bits.CCP3IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC3(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC3(priority)     (IPC6bits.CCP3IP = priority)

/*******************************************************************
Macro       : IC3_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC3_Clear_Intr_Status_Bit     (IFS1bits.CCP3IF = 0)

void __attribute__ ((section (".libperi")))OpenCapture3_v3(unsigned int config) ;

void __attribute__ ((section (".libperi")))CloseCapture3_v3(void) ;

void __attribute__ ((section (".libperi")))ConfigIntCapture3_v3(unsigned int config ) ;

unsigned int __attribute__ ((section (".libperi")))ReadCapture3_v3(void) ;


void __attribute__ ((section (".libperi")))OpenECapture1_v3(unsigned int config) ;

void __attribute__ ((section (".libperi")))CloseECapture1_v3(void) ;

unsigned int __attribute__ ((section (".libperi")))ReadECapture1_v3(void) ;
#endif

#endif
#endif

#if defined (icap_v1_1) || defined (icap_v1_2) || defined (icap_v1_3) || defined(LIB_BUILD)

/*Registers Defaults*/
#define IC1CON_VALUE            0x0000
#define IC1BUF_VALUE            0x0000


#ifndef LIB_BUILD 
#define OpenCapture1            OpenCapture1_v1
#endif

/*************************************************************************
Macro       : EnableIntIC1
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC1                   (IEC0bits.IC1IE = 1) 

/*************************************************************************
Macro       : DisableIntIC1
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC1                   (IEC0bits.IC1IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC1(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC1(priority)     (IPC0bits.IC1IP = priority)

/*******************************************************************
Macro       : IC1_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC1_Clear_Intr_Status_Bit     (IFS0bits.IC1IF = 0)

void __attribute__ ((section (".libperi")))OpenCapture1_v1(unsigned int config) ;

void __attribute__ ((section (".libperi")))CloseCapture1(void) ;

void __attribute__ ((section (".libperi")))ConfigIntCapture1(unsigned int config ) ;

void __attribute__ ((section (".libperi")))ReadCapture1(unsigned int * buffer) ;

#endif

#if defined (icap_v1_2) || defined (icap_v1_3) || defined (LIB_BUILD)
/*Registers Defaults*/ 
#define IC2CON_VALUE            0x0000
#define IC2BUF_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenCapture2            OpenCapture2_v1
#define OpenCapture3            OpenCapture3_v1
#ifndef icap_v1_3
#ifndef LIB_BUILD
#define OpenCapture4            OpenCapture4_v1
#define OpenCapture5            OpenCapture5_v1
#endif
#endif
#endif

/*************************************************************************
Macro       : EnableIntIC2
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC2                   (IEC0bits.IC2IE = 1) 

/*************************************************************************
Macro       : DisableIntIC2
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC2                   (IEC0bits.IC2IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC2(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC2(priority)     (IPC1bits.IC2IP = priority)

/*******************************************************************
Macro       : IC2_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC2_Clear_Intr_Status_Bit    (IFS0bits.IC2IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture2_v1(unsigned int config );

void __attribute__ ((section (".libperi")))CloseCapture2(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture2(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture2(unsigned int * buffer);

/*Registers Defaults*/
#define IC3CON_VALUE            0x0000
#define IC3BUF_VALUE            0x0000

/*************************************************************************
Macro       : EnableIntIC3
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC3                   (IEC2bits.IC3IE = 1) 

/*************************************************************************
Macro       : DisableIntIC3
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC3                   (IEC2bits.IC3IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC3(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC3(priority)     (IPC9bits.IC3IP = priority)

/*******************************************************************
Macro       : IC3_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC3_Clear_Intr_Status_Bit     (IFS2bits.IC3IF = 0)

void __attribute__ ((section (".libperi")))OpenCapture3_v1(unsigned int config1);

void __attribute__ ((section (".libperi")))CloseCapture3(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture3(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture3(unsigned int * buffer);

#ifndef icap_v1_3
/*Registers Defaults*/
#define IC4CON_VALUE            0x0000
#define IC4BUF_VALUE            0x0000

/*************************************************************************
Macro       : EnableIntIC4
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC4                   (IEC2bits.IC4IE = 1) 

/*************************************************************************
Macro       : DisableIntIC4
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC4                   (IEC2bits.IC4IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC4(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC4(priority)     (IPC9bits.IC4IP = priority)

/*******************************************************************
Macro       : IC4_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC4_Clear_Intr_Status_Bit    (IFS2bits.IC4IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture4_v1(unsigned int config1);

void __attribute__ ((section (".libperi")))CloseCapture4(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture4(unsigned int config);

void __attribute__ ((section (".libperi")))ReadCapture4(unsigned int * buffer);

/*Registers Defaults*/
#define IC5CON_VALUE            0x0000
#define IC5BUF_VALUE            0x0000

/*************************************************************************
Macro       : EnableIntIC5
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC5                   (IEC2bits.IC5IE = 1) 

/*************************************************************************
Macro       : DisableIntIC5
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC5                   (IEC2bits.IC5IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC5(priotiy)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC5(priority)     (IPC9bits.IC5IP = priority)

/*******************************************************************
Macro       : IC5_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC5_Clear_Intr_Status_Bit     (IFS2bits.IC5IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture5_v1(unsigned int config);

void __attribute__ ((section (".libperi")))CloseCapture5(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture5(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture5(unsigned int * buffer);

#endif
#endif

#if defined (icap_v2_1) || defined (icap_v2_2)||defined (icap_v2_3) || defined (icap_v2_4)|| defined (LIB_BUILD) 
/*Registers Defaults*/
#define IC1CON1_VALUE           0x0000
#define IC1CON2_VALUE           0x0000
#define IC1BUF_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenCapture1            OpenCapture1_GB
#define CloseCapture1 		    CloseCapture1_v4  
#define ConfigIntCapture1 	    ConfigIntCapture1_v4  
#define ReadCapture1 		    ReadCapture1_v4 
#endif  

/*************************************************************************
Macro       : EnableIntIC1
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC1                   (IEC0bits.IC1IE = 1) 

/*************************************************************************
Macro       : DisableIntIC1
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC1                   (IEC0bits.IC1IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC1(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC1(priority)     (IPC0bits.IC1IP = priority)

/*******************************************************************
Macro       : IC1_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC1_Clear_Intr_Status_Bit     (IFS0bits.IC1IF = 0)

void __attribute__ ((section (".libperi")))OpenCapture1_GB(unsigned int config1, unsigned int config2) ;

void __attribute__ ((section (".libperi")))CloseCapture1_v4(void) ;

void __attribute__ ((section (".libperi")))ConfigIntCapture1_v4(unsigned int config) ;

void __attribute__ ((section (".libperi")))ReadCapture1_v4(unsigned int * buffer) ;


/*Registers Defaults*/
#define IC2CON1_VALUE           0x0000
#define IC2CON2_VALUE           0x0000
#define IC2BUF_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenCapture2            OpenCapture2_GB
#define CloseCapture2 		    CloseCapture2_v4  
#define ConfigIntCapture2 		ConfigIntCapture2_v4  
#define ReadCapture2 		    ReadCapture2_v4 
#endif 

/*************************************************************************
Macro       : EnableIntIC2
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC2                   (IEC0bits.IC2IE = 1) 

/*************************************************************************
Macro       : DisableIntIC2
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC2                   (IEC0bits.IC2IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC2(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC2(priority)     (IPC1bits.IC2IP = priority)

/*******************************************************************
Macro       : IC2_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC2_Clear_Intr_Status_Bit     (IFS0bits.IC2IF = 0)

void __attribute__ ((section (".libperi")))OpenCapture2_GB(unsigned int config1, unsigned int config2);

void __attribute__ ((section (".libperi")))CloseCapture2_v4(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture2_v4(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture2_v4(unsigned int * buffer);

#ifndef LIB_BUILD
#define OpenCapture12            OpenCapture12_GB
#endif
#define _IC12Interrupt  _IC1Interrupt

/*************************************************************************
Macro       : EnableIntIC12
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC12                   (IEC0bits.IC1IE = 1) 

/*************************************************************************
Macro       : DisableIntIC12
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC12                   (IEC0bits.IC1IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC12(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC12(priority)     (IPC0bits.IC1IP = priority)

/*******************************************************************
Macro       : IC12_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC12_Clear_Intr_Status_Bit     (IFS0bits.IC1IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture12_GB(unsigned int config1, unsigned int config2 );

void __attribute__ ((section (".libperi")))CloseCapture12(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture12(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture12(unsigned long int * buffer);

/*Registers Defaults*/
#define IC3CON1_VALUE           0x0000
#define IC3CON2_VALUE           0x0000
#define IC3BUF_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenCapture3            OpenCapture3_GB
#define CloseCapture3 			CloseCapture3_v4  
#define ConfigIntCapture3 		ConfigIntCapture3_v4  
#define ReadCapture3 		    ReadCapture3_v4 
#endif 

/*************************************************************************
Macro       : EnableIntIC3
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC3                   (IEC2bits.IC3IE = 1) 

/*************************************************************************
Macro       : DisableIntIC3
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC3                   (IEC2bits.IC3IE = 0)

/*************************************************************************
Macro       : SetPriorityIntIC3(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC3(priority)     (IPC9bits.IC3IP = priority)

/*******************************************************************
Macro       : IC3_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC3_Clear_Intr_Status_Bit     (IFS2bits.IC3IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture3_GB(unsigned int config1, unsigned int config2);

void __attribute__ ((section (".libperi")))CloseCapture3_v4(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture3_v4(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture3_v4(unsigned int * buffer);
#endif

#if defined (icap_v2_1) || defined (icap_v2_2) || defined (icap_v2_4)|| defined (LIB_BUILD) 
/*Registers Defaults*/
#define IC4CON1_VALUE           0x0000
#define IC4CON2_VALUE           0x0000
#define IC4BUF_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenCapture4            OpenCapture4_GB
#define CloseCapture4 			CloseCapture4_v4  
#define ConfigIntCapture4 		ConfigIntCapture4_v4  
#define ReadCapture4 		    ReadCapture4_v4 
#endif 

/*************************************************************************
Macro       : EnableIntIC4
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC4                   (IEC2bits.IC4IE = 1) 

/*************************************************************************
Macro       : DisableIntIC4
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC4                   (IEC2bits.IC4IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC4(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC4(priority)     (IPC9bits.IC4IP = priority)

/*******************************************************************
Macro       : IC4_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC4_Clear_Intr_Status_Bit     (IFS2bits.IC4IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture4_GB(unsigned int config1, unsigned int config2);

void __attribute__ ((section (".libperi")))CloseCapture4_v4(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture4_v4(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture4_v4(unsigned int * buffer);

#ifndef LIB_BUILD
#define OpenCapture34            OpenCapture34_GB
#endif
#define _IC34Interrupt   _IC3Interrupt

/*************************************************************************
Macro       : EnableIntIC34
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC34                   (IEC2bits.IC3IE = 1) 

/*************************************************************************
Macro       : DisableIntIC34
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC34                   (IEC2bits.IC3IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC34(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC34(priority)     (IPC9bits.IC3IP = priority)

/*******************************************************************
Macro       : IC34_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC34_Clear_Intr_Status_Bit     (IFS2bits.IC3IF = 0)

void __attribute__ ((section (".libperi")))OpenCapture34_GB(unsigned int config1, unsigned int config2 );

void __attribute__ ((section (".libperi")))CloseCapture34(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture34(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture34(unsigned long int * buffer);

/*Registers Defaults*/
#define IC5CON1_VALUE           0x0000
#define IC5CON2_VALUE           0x0000
#define IC5BUF_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenCapture5            OpenCapture5_GB
#define CloseCapture5 			CloseCapture5_v4  
#define ConfigIntCapture5 		ConfigIntCapture5_v4  
#define ReadCapture5 		    ReadCapture5_v4  
#endif

/*************************************************************************
Macro       : EnableIntIC5
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC5                   (IEC2bits.IC5IE = 1) 

/*************************************************************************
Macro       : DisableIntIC5
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC5                   (IEC2bits.IC5IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC5(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC5(priority)     (IPC9bits.IC5IP = priority)

/*******************************************************************
Macro       : IC5_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC5_Clear_Intr_Status_Bit     (IFS2bits.IC5IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture5_GB(unsigned int config1, unsigned int config2);

void __attribute__ ((section (".libperi")))CloseCapture5_v4(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture5_v4(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture5_v4(unsigned int * buffer);

#endif

#if defined (icap_v2_2) || defined (icap_v2_4)|| defined (LIB_BUILD)

/*Registers Defaults*/
#define IC6CON1_VALUE           0x0000
#define IC6CON2_VALUE           0x0000
#define IC6BUF_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenCapture6            OpenCapture6_GB
#endif

/*************************************************************************
Macro       : EnableIntIC6
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC6                   (IEC2bits.IC6IE = 1) 

/*************************************************************************
Macro       : DisableIntIC6
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC6                   (IEC2bits.IC6IE =0) 

/*************************************************************************
Macro       : SetPriorityIntIC6(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC6(priority)     (IPC10bits.IC6IP = priority)

/*******************************************************************
Macro       : IC6_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC6_Clear_Intr_Status_Bit     (IFS2bits.IC6IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture6_GB(unsigned int config1, unsigned int config2);

void __attribute__ ((section (".libperi")))CloseCapture6(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture6(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture6(unsigned int * buffer);

#ifndef LIB_BUILD
#define OpenCapture56            OpenCapture56_GB
#endif
#define _IC56Interrupt   _IC5Interrupt

/*************************************************************************
Macro       : EnableIntIC56
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC56                   (IEC2bits.IC5IE = 1) 

/*************************************************************************
Macro       : DisableIntIC56
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC56                   (IEC2bits.IC5IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC56(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC56(priority)     (IPC9bits.IC5IP = priority)

/*******************************************************************
Macro       : IC56_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC56_Clear_Intr_Status_Bit     (IFS2bits.IC5IF = 0)

void __attribute__ ((section (".libperi")))OpenCapture56_GB(unsigned int config1, unsigned int config2 );

void __attribute__ ((section (".libperi")))CloseCapture56(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture56(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture56(unsigned long int * buffer);

/*Registers Defaults*/
#define IC7CON1_VALUE           0x0000
#define IC7CON2_VALUE           0x0000
#define IC7BUF_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenCapture7            OpenCapture7_GB
#endif

/*************************************************************************
Macro       : EnableIntIC7
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC7                   (IEC1bits.IC7IE = 1) 

/*************************************************************************
Macro       : DisableIntIC7
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC7                   (IEC1bits.IC7IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC7(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC7(priority)     (IPC5bits.IC7IP = priority)

/*******************************************************************
Macro       : IC7_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC7_Clear_Intr_Status_Bit     (IFS1bits.IC7IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture7_GB(unsigned int config1, unsigned int config2);

void __attribute__ ((section (".libperi")))CloseCapture7(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture7(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture7(unsigned int * buffer);

#if defined (icap_v2_2) || defined (LIB_BUILD)

/*Registers Defaults*/
#define IC8CON1_VALUE           0x0000
#define IC8CON2_VALUE           0x0000
#define IC8BUF_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenCapture8            OpenCapture8_GB
#endif

/*************************************************************************
Macro       : EnableIntIC8
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC8                   (IEC1bits.IC8IE = 1) 

/*************************************************************************
Macro       : DisableIntIC8
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC8                   (IEC1bits.IC8IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC8(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC8(priority)     (IPC5bits.IC8IP = priority)

/*******************************************************************
Macro       : IC8_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC8_Clear_Intr_Status_Bit     (IFS1bits.IC8IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture8_GB(unsigned int config1, unsigned int config2);

void __attribute__ ((section (".libperi")))CloseCapture8(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture8(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture8(unsigned int * buffer);

#ifndef LIB_BUILD
#define OpenCapture78            OpenCapture78_GB
#endif
#define _IC78Interrupt  _IC7Interrupt

/*************************************************************************
Macro       : EnableIntIC78
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC78                   (IEC1bits.IC7IE = 1) 

/*************************************************************************
Macro       : DisableIntIC78
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC78                   (IEC1bits.IC7IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC78(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC78(priority)     (IPC5bits.IC7IP = priority)

/*******************************************************************
Macro       : IC78_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC78_Clear_Intr_Status_Bit     (IFS1bits.IC7IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture78_GB(unsigned int config1, unsigned int config2 );

void __attribute__ ((section (".libperi")))CloseCapture78(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture78(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture78(unsigned long int * buffer);

/*Registers Defaults*/
#define IC9CON1_VALUE           0x0000
#define IC9CON2_VALUE           0x0000
#define IC9BUF_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenCapture9            OpenCapture9_GB
#endif

/*************************************************************************
Macro       : EnableIntIC9
 
Include     : incap.h
 
Description : This macro enables the capture interrupt.
 
Arguments   : None
 
Remarks     : This macro sets Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register. 
**************************************************************************/
#define EnableIntIC9                   (IEC5bits.IC9IE = 1) 

/*************************************************************************
Macro       : DisableIntIC9
 
Include     : incap.h
 
Description : This macro disables the interrupt on capture event.
 
Arguments   : None
 
Remarks     : This macro clears Input Capture Interrupt Enable bit of 
              Interrupt Enable Control register.
**************************************************************************/
#define DisableIntIC9                   (IEC5bits.IC9IE = 0) 

/*************************************************************************
Macro       : SetPriorityIntIC9(priority)
 
Include     : incap.h
 
Description : This macro sets priority for input capture interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets Input Capture Interrupt Priority bits of 
              Interrupt Priority Control register.
**************************************************************************/
#define SetPriorityIntIC9(priority)     (IPC23bits.IC9IP = priority)

/*******************************************************************
Macro       : IC9_Clear_Intr_Status_Bit

Include     : incap.h 

Description : Macro to Clear Input capture Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define IC9_Clear_Intr_Status_Bit     (IFS5bits.IC9IF = 0)


void __attribute__ ((section (".libperi")))OpenCapture9_GB(unsigned int config1, unsigned int config2);

void __attribute__ ((section (".libperi")))CloseCapture9(void);

void __attribute__ ((section (".libperi")))ConfigIntCapture9(unsigned int config );

void __attribute__ ((section (".libperi")))ReadCapture9(unsigned int * buffer);

#endif
#endif

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif  /*__INCAP_H  */
