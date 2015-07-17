#ifndef __OUTCOMPARE_H
#define __OUTCOMPARE_H

 /******************************************************************************
 *
 *                  OUTPUT COMPARE PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        timer.h
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
 *****************************************************************************/

#include "PIC24F_periph_features.h"

//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#if defined (ocmp_v1_1) ||defined (ocmp_v1_2) || defined (ocmp_v1_3) || defined (ocmp_v2_1) ||defined (ocmp_v2_2) ||\
	defined (ocmp_v2_3) || defined (ocmp_v2_4) || defined (ocmp_v2_5) || defined (icap_v3_1) || defined (icap_v3_2) || \
	defined (ocmp_v4_0) || defined (LIB_BUILD)

	
#if defined (ocmp_v1_1) ||defined (ocmp_v1_2) || defined (ocmp_v1_3)  /* Output Compare Module of GA0 family */

#ifndef USE_AND_OR /* Format for AND_OR based bit setting */

/*Section :  Output Compare Stop in Idle mode Bit defines */
#define OC_IDLE_STOP                0xffff /* stop in idle mode */
#define OC_IDLE_CON                 0xdfff /* continue operation in idle mode */

/*Section :  Output Compare timer select Bit Defines */
#define OC_TIMER2_SRC               0xfff7  /* Timer2 is the clock source for OutputCompare */
#define OC_TIMER3_SRC               0xffff  /* Timer3 is the clock source for OutputCompare */

/*Section : Output Compare Mode Select*/ 
#define OC_PWM_FAULT_PIN_ENABLE     0xffff /* PWM Mode on OCx, fault pin enabled, (TxIF bit is set for PWM, OCxIF is set for fault)*/
#define OC_PWM_FAULT_PIN_DISABLE    0xfffe /* PWM Mode on OCx, fault pin disabled */
#define OC_CONTINUE_PULSE           0xfffd /* Generates Continuous Output pulse on OCx Pin */
#define OC_SINGLE_PULSE             0xfffc /* Generates Single Output pulse on OCx Pin */
#define OC_TOGGLE_PULSE             0xfffb /* Compare1 toggels  OCx pin*/
#define OC_HIGH_LOW                 0xfffa /* Compare1 forces   OCx pin Low*/
#define OC_LOW_HIGH                 0xfff9 /* Compare1 forces  OCx pin High*/
#define OC_OFF                      0xfff8  /* OutputCompare x Off*/

/*Section :  OutputCompare Interrupt Enable/Disable */
#define OC_INT_ON                   0xffff /* OutputCompare Enable  */
#define OC_INT_OFF                  0xfff7 /* OutputCompare Disable */

/* Section : OutputCompare Interrupt Priority Level */
#define OC_INT_PRIOR_0              0xfff8 /* OutputCompare PriorityLevel 0 */
#define OC_INT_PRIOR_1              0xfff9 /* OutputCompare PriorityLevel 1 */
#define OC_INT_PRIOR_2              0xfffa /*OutputCompare PriorityLevel 2 */
#define OC_INT_PRIOR_3              0xfffb
#define OC_INT_PRIOR_4              0xfffc /* OutputCompare PriorityLevel 4 */
#define OC_INT_PRIOR_5              0xfffd
#define OC_INT_PRIOR_6              0xfffe /* OutputCompare PriorityLevel 6 */
#define OC_INT_PRIOR_7              0xffff

#else /* Format for backward compatibility (AND based bit setting). */

/*OCxCON register*/
/* Section : Output Compare Stop in Idle mode Bit defines */
#define OC_IDLE_CON                0x0000 /*  continue operation in idle mode */
#define OC_IDLE_STOP               0x2000 /* stop in idle mode */
#define OC_IDLE_MASK               (~OC_IDLE_STOP)

/*Section :  Output Compare timer select Bit Defines */
#define OC_TIMER2_SRC               0x0000 /* Timer2 is the clock source for OutputCompare */
#define OC_TIMER3_SRC               0x0008 /* Timer3 is the clock source for OutputCompare */
#define OC_TIMER_SRC_MASK           (~OC_TIMER3_SRC)

#define OC_PWM_FAULT_PIN_ENABLE     0x0007 /* PWM Mode on OCx, fault pin enabled, (TxIF bit is set for PWM, OCxIF is set for fault)*/
#define OC_PWM_FAULT_PIN_DISABLE    0x0006 /* PWM Mode on OCx, fault pin disabled */
#define OC_CONTINUE_PULSE           0x0005 /* Generates Continuous Output pulse on OCx Pin */
#define OC_SINGLE_PULSE             0x0004 /* Generates Single Output pulse on OCx Pin */
#define OC_TOGGLE_PULSE             0x0003 /* Compare1 toggles  OCx pin*/
#define OC_HIGH_LOW                 0x0002 /* Compare1 forces  OCx pin Low*/
#define OC_LOW_HIGH                 0x0001 /* Compare1 forces  OCx pin High*/  
#define OC_OFF                      0x0000 /* OutputCompare x Off*/
#define OC_PWM_MODE_MASK            (~OC_PWM_FAULT_PIN_ENABLE)

/* Section :OutputCompare Interrupt Enable/Disable */
#define OC_INT_ON                   0x0008 /* OutputCompare Enable  */
#define OC_INT_OFF                  0x0000 /* OutputCompare Disable */
#define OC_INT_MASK                 (~OC_INT_ON)

/* Section : OutputCompare Interrupt Priority Level */
#define OC_INT_PRIOR_0              0x0000 /* OutputCompare PriorityLevel 0 */
#define OC_INT_PRIOR_1              0x0001 /* OutputCompare PriorityLevel 1 */
#define OC_INT_PRIOR_2              0x0002 /* OutputCompare PriorityLevel 2 */
#define OC_INT_PRIOR_3              0x0003
#define OC_INT_PRIOR_4              0x0004 /* OutputCompare PriorityLevel 4 */
#define OC_INT_PRIOR_5              0x0005
#define OC_INT_PRIOR_6              0x0006 /* OutputCompare PriorityLevel 6 */
#define OC_INT_PRIOR_7              0x0007
#define OC_INT_PRIOR_MASK           (~OC_INT_PRIOR_7)

#endif
#endif

#if defined (ocmp_v2_1)|| defined (ocmp_v2_2) || defined (ocmp_v2_3) || defined (ocmp_v2_4)|| defined (ocmp_v2_5)    

#ifndef USE_AND_OR             /* Format for AND_OR based bit setting */

/***** OCxCON1 reister definition *****/
/*Section :  Output Compare Stop in Idle mode Bit defines */
#define OC_IDLE_STOP               	0xffff /* stop in idle mode */
#define OC_IDLE_CON                	0xdfff /* continue operation in idle mode */

/* Section : Output Compare timer select Bit Defines */
#define OC_SYSCLK_SRC               0xffff  /*System Clock is the clock source for OutputCompare*/
#define OC_TIMER1_SRC               0xf3ff  /* Timer1 is the clock source OutputCompare */
#define OC_TIMER5_SRC               0xefff  /* Timer5 is the clock source for OutputCompare */
#define OC_TIMER4_SRC               0xebff  /* Timer4 is the clock source for OutputCompare */
#define OC_TIMER3_SRC               0xe7ff  /* Timer3 is the clock source for OutputCompare */
#define OC_TIMER2_SRC               0xe3ff  /* Timer2 is the clock source for OutputCompare */


#if defined (ocmp_v2_3) || defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/*Section : Fault 2 Input Enable/Disable */
#define CMP_FAULT2_IN_ENABLE        0xffff /*PWM COMPARATOR Fault 2 Input Enabled*/
#define CMP_FAULT2_IN_DISABLE    	0xfdff /*PWM COMPARATOR Fault 2 Input Disabled*/
#endif

#if defined (ocmp_v2_1)
#define OC_FAULT2_IN_ENABLE         0xffff /*OC/PWM Fault 2 Input Enabled*/
#define OC_FAULT2_IN_DISABLE    	0xfdff /*OC/PWM Fault 2 Input Enabled*/
#endif

#if defined (ocmp_v2_3) || defined (ocmp_v2_1)|| defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/*Section : Fault 1 Input Enable/Disable */
#define OC_FAULT1_IN_ENABLE         0xffff /*OC/PWM Fault 1 Input Enabled*/
#define OC_FAULT1_IN_DISABLE    	0xfeff /*OC/PWM Fault 1 Input Disabled*/
#endif

/*Section : Fault 0 Input Enable/Disable */
#define OC_FAULT0_IN_ENABLE         0xffff /*OC/PWM Fault 0 Input Enabled*/
#define OC_FAULT0_IN_DISABLE    	0xff7f /*OC/PWM Fault 0 Input Disabled*/

/*Section : PWM Fault Condition Status*/
#define OC_PWM_FAULT_CLEAR          0xffef /*Fault status bit will be cleared in software*/

/*Section : One Shot Enable/Disable*/
#define OC_TRIG_CLEAR_SYNC          0xffff /*Trigger is cleared synchronously(OCxRs=TIMER) or by software*/
#define OC_TRIG_CLEAR_SW            0xfff7 /*Trigger cleared by software*/

/*Section : OutputCompare Mode Select */
#define OC_PWM_CENTRE_ALIGN         0xffff  /* Center Aligned PWM Mode on OCx pin */
#define OC_PWM_EDGE_ALIGN           0xfffe  /* Edge Aligned PWM Mode on OCx pin */
#define OC_CONTINUE_PULSE           0xfffd  /* Generates Continuous Output pulse on OCx Pin */
#define OC_SINGLE_PULSE             0xfffc  /* Generates Single Output pulse on OCx Pin */
#define OC_TOGGLE_PULSE             0xfffb  /* Compare1 toggles  OCx pin*/
#define OC_HIGH_LOW                 0xfffa  /* Compare1 forces   OCx pin Low*/
#define OC_LOW_HIGH                 0xfff9  /* Compare1 forces  OCx pin High*/
#define OC_OFF                      0xfff8  /* OutputCompare x Off*/

/***** OCxCON2 reister definition ****/
/*Section : Fault Mode Bit*/
#define OC_FAULT_MODE_CLEAR_SW      0xffff /*Fault condition maintained until OCxFLT is cleared*/
#define OC_FAULT_MODE_PWM_CYCLE     0x7fff /*Fault condition maintained until new PWM cycle starts*/

/*Section : Fault Out Bit*/
#define OC_PWM_FAULT_OUT_HIGH       0xffff /*Outputcompare output is driven high during fault condition*/
#define OC_PWM_FAULT_OUT_LOW        0xbfff /*Outputcompare output is driven low during fualt condition*/

/* Section : Fault Output state select bit*/
#define OC_FAULT_PIN_OUT            0xffff /*oc_oe_out is low during fault condition*/
#define OC_FAULT_PIN_UNCHANGE       0xdfff/*oc_oe_out is unchanged during fault condition*/

/*Section : Ouput Compare Invert Bit*/
#define OC_OUT_INVERT               0xffff /*OutputCompare output is inverted*/
#define OC_OUT_NOT_INVERT           0xefff /*OutputCompare output is not inverted*/

#if defined (ocmp_v2_3)|| defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/*Section : OC Pulse Width Least-Significant bits for delay selection*/
#define DELAY_OC_FALL_EDGE_34         0xffff /*Delay OCx falling edge by 3/4 of the instruction cycle*/
#define DELAY_OC_FALL_EDGE_12         0xfdff /*Delay OCx falling edge by 1/2 of the instruction cycle*/
#define DELAY_OC_FALL_EDGE_14         0xfbff /*Delay OCx falling edge by 1/4 of the instruction cycle*/
#define DELAY_OC_FALL_EDGE_00         0xf9ff /*OCx falling edge occurs by starting of the instruction cycle*/
#endif

#if defined (ocmp_v2_1)
/*Section : OC Pulse Width Duty Cycle Least-Significant bits */
#define OC_FALL_EDGE_TRANS_P4         0xffff /*ocmp_out falling edge transitions on rising edge of P4 clock*/
#define OC_FALL_EDGE_TRANS_P3         0xfdff /*ocmp_out falling edge transitions on rising edge of P3 clock*/
#define OC_FALL_EDGE_TRANS_P2         0xfbff /*ocmp_out falling edge transitions on rising edge of P2 clock*/
#define OC_FALL_EDGE_TRANS_P1         0xf9ff /*ocmp_out falling edge transitions on rising edge of P1 clock*/
#endif

/*Section : Output Compare Cascade Module Operation*/
#define OC_CASCADE_ENABLE           0xffff /*Output Compare Cascade Module Enabled*/
#define OC_CASCADE_DISABLE          0xfeff /*Output Compare Cascade Module Disabled*/

/*Section : Output Compare Trigger Operation Select*/
#define OC_TRIGGER_ENABLE           0xffff /*sync_trig[x] used to trigger the module timer*/
#define OC_SYNC_ENABLE			    0xff7f /* Sync_trig[x] is used to sync to another module timer */

/*Section : Output Compare Timer Trigger*/
#define OC_TRIGGER_TIMER 		    0xffff	/* Timer has been triggered and is running */
#define OC_UNTRIGGER_TIMER		    0xffbf  /* Timer not triigered and is being held in clear */

/*Section : Output Compare x Off bit*/
#define OC_DIRN_TRIS                0xffff  /*The signal ocmp_oe_out can be active*/
#define OC_DIRN_OUTPUT              0xffdf  /*The signal ocmp_oe_out is forced to zero*/

#if defined (ocmp_v2_1) || defined (ocmp_v2_2) || defined (ocmp_v2_3)|| defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/*Section : Source Select for Synchronization and Trigger Operation*/
#define OC_SYNC_TRIG_IN_DISABLE 	0xffe0 /* Disables trigger operation */
#define OC_SYNC_TRIG_IN_OC1			0xffe1
#define OC_SYNC_TRIG_IN_OC2			0xffe2 /* Sync or Trigger input is OC2 */
#define OC_SYNC_TRIG_IN_OC3			0xffe3
#define OC_SYNC_TRIG_IN_OC4			0xffe4
#define OC_SYNC_TRIG_IN_OC5			0xffe5 /* Sync or Trigger input is OC5 */
#if defined (ocmp_v2_2)|| defined (ocmp_v2_5)
#define OC_SYNC_TRIG_IN_OC6			0xffe6
#define OC_SYNC_TRIG_IN_OC7			0xffe7 /* Sync or Trigger input is OC7 */
#define OC_SYNC_TRIG_IN_OC8			0xffe8 /* Sync or Trigger input is OC8 */
#define OC_SYNC_TRIG_IN_OC9			0xffe9 /* Sync or Trigger input is OC9 */
#endif
#define OC_SYNC_TRIG_IN_IC5			0xffea
#define OC_SYNC_TRIG_IN_TMR1		0xffeb
#define OC_SYNC_TRIG_IN_TMR2		0xffec
#define OC_SYNC_TRIG_IN_TMR3		0xffed
#define OC_SYNC_TRIG_IN_TMR4		0xffee
#define OC_SYNC_TRIG_IN_TMR5		0xffef
#if defined (ocmp_v2_1) || defined (ocmp_v2_2)|| defined (ocmp_v2_5)
#define OC_SYNC_TRIG_IN_IC7			0xfff2
#define OC_SYNC_TRIG_IN_IC8			0xfff3
#endif
#define OC_SYNC_TRIG_IN_IC1			0xfff4
#define OC_SYNC_TRIG_IN_IC2			0xfff5
#define OC_SYNC_TRIG_IN_IC3			0xfff6
#define OC_SYNC_TRIG_IN_IC4			0xfff7
#define OC_SYNC_TRIG_IN_CMP1		0xfff8 /* Sync or Trigger input is CMP1 */
#define OC_SYNC_TRIG_IN_CMP2		0xfff9
#define OC_SYNC_TRIG_IN_CMP3		0xfffa
#define OC_SYNC_TRIG_IN_AD			0xfffb /* Sync or Trigger input is AD */
#define OC_SYNC_TRIG_IN_CTMU		0xfffc
#if defined (ocmp_v2_2) || defined (ocmp_v2_5)
#define OC_SYNC_TRIG_IN_IC6			0xfffd
#define OC_SYNC_TRIG_IN_IC9			0xfffe
#endif
#if defined (ocmp_v2_1) || defined (ocmp_v2_2) || defined (ocmp_v2_3) || defined (ocmp_v2_4) || defined (ocmp_v2_5)
#define OC_SYNC_TRIG_IN_CURR_OC		0xffff /*for current OC module  */
#endif
#endif

/*Section :  Output Compare Interrupt Enable\Disable */
#define OC_INT_ON                   0xffff /* Output Compare Enable  */
#define OC_INT_OFF                  0xfff7 /* Output Compare Disable */

#define OC_INT_PRIOR_0              0xfff8 /* OutputCompare PriorityLevel 0 */
#define OC_INT_PRIOR_1              0xfff9 /* OutputCompare PriorityLevel 1 */
#define OC_INT_PRIOR_2              0xfffa /* OutputCompare PriorityLevel 2 */
#define OC_INT_PRIOR_3              0xfffb
#define OC_INT_PRIOR_4              0xfffc /* OutputCompare PriorityLevel 4 */
#define OC_INT_PRIOR_5              0xfffd
#define OC_INT_PRIOR_6              0xfffe /* OutputCompare PriorityLevel 6 */
#define OC_INT_PRIOR_7              0xffff

#else /* Format for backward compatibility (AND based bit setting). */

/*OCxCON1 register definition*/
/*Section :  Output Compare Stop in Idle mode Bit defines */
#define OC_IDLE_STOP                0x2000 /* stop in idle mode */
#define OC_IDLE_CON                 0x0000 /* continue operation in idle mode */
#define OC_IDLE_MASK               (~OC_IDLE_STOP)

/*Section :  Output Compare timer select Bit Defines */
#define OC_SYSCLK_SRC               0x1C00  /* System Clock is the clock source for OutputCompare */
#define OC_TIMER1_SRC               0x1000  /* Timer1 is the clock source OutputCompare */
#define OC_TIMER5_SRC               0x0C00  /* Timer5 is the clock source for OutputCompare */
#define OC_TIMER4_SRC               0x0800  /* Timer4 is the clock source for OutputCompare */
#define OC_TIMER3_SRC               0x0400  /* Timer3 is the clock source for OutputCompare */
#define OC_TIMER2_SRC               0x0000  /* Timer2 is the clock source for OutputCompare */
#define OC_TIMER_SRC_MASK           (~OC_SYSCLK_SRC)

#if defined (ocmp_v2_3)|| defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/*Section : Fault 2 Input Enable/Disable */
#define CMP_FAULT2_IN_ENABLE         0x0200 /*PWM COMPARATOR Fault 2 Input Enabled*/
#define CMP_FAULT2_IN_DISABLE    	 0x0000 /*PWM COMPARATOR Fault 2 Input Disabled*/
#endif

#if defined (ocmp_v2_1)
#define OC_FAULT2_IN_ENABLE         0x0200 /*OC/PWM Fault 2 Input Enabled*/
#define OC_FAULT2_IN_DISABLE    	0x0200 /*OC/PWM Fault 2 Input Enabled*/
#endif

#if defined (ocmp_v2_1) || defined (ocmp_v2_3)|| defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/*Section : Fault 1 Input Enable/Disable */
#define OC_FAULT1_IN_ENABLE         0x0100 /*OC/PWM Fault 1 Input Enabled*/
#define OC_FAULT1_IN_DISABLE    	0x0000 /*OC/PWM Fault 1 Input Disabled*/
#endif

/*Section : Fault 0 Input Enable/Disable */
#define OC_FAULT0_IN_ENABLE         0x0080 /*PWM Fault 0 Input Enabled*/
#define OC_FAULT0_IN_DISABLE    	0x0000 /*PWM Fault 0 Input Disabled*/
#define OC_FAULT0_IN_MASK        	(~OC_FAULT0_IN_ENABLE)

/*PWM Fault Condition Status*/
#define OC_PWM_FAULT_CLEAR          0x0000 /*Fault status bit will be cleared in software*/

/*Section : Trigger status Mode Select */
#define OC_TRIG_CLEAR_SYNC          0x0008 /*Trigger is cleared synchronously(OCxRs=TIMER) or by software*/
#define OC_TRIG_CLEAR_SW            0x0000 /*Trigger cleared by software*/
#define OC_TRIG_CLEAR_MASK          (~OC_TRIG_CLEAR_SYNC)

/*Section : OutputCompare Mode Select */
#define OC_PWM_CENTRE_ALIGN         0x0007  /* Center Aligned PWM Mode on OCx pin */
#define OC_PWM_EDGE_ALIGN           0x0006  /* Edge Aligned PWM Mode on OCx pin */
#define OC_CONTINUE_PULSE           0x0005  /* Generates Continuous Output pulse on OCx Pin */
#define OC_SINGLE_PULSE             0x0004  /* Generates Single Output pulse on OCx Pin */
#define OC_TOGGLE_PULSE             0x0003  /* Compare1 toggles  OCx pin*/
#define OC_HIGH_LOW                 0x0002  /* Compare1 forces   OCx pin Low*/
#define OC_LOW_HIGH                 0x0001  /* Compare1 forces  OCx pin High*/
#define OC_OFF                      0x0000  /* OutputCompare x Off*/
#define OC_PWM_MODE_MASK            (~OC_PWM_CENTRE_ALIGN)

/*OCxCON2 reister definition*/
/*Section : Fault Mode Bit*/
#define OC_FAULT_MODE_CLEAR_SW      0x8000 /*Fault condition maintained until OCxFLT is cleared*/
#define OC_FAULT_MODE_PWM_CYCLE     0x0000 /*Fault condition maintained until new PWM cycle starts*/
#define OC_FAULT_MODE_MASK          (~OC_FAULT_MODE_CLEAR_SW)

/*Section : Fault Out Bit*/
#define OC_PWM_FAULT_OUT_HIGH       0x4000 /*Outputcompare output is driven high during fault condition*/
#define OC_PWM_FAULT_OUT_LOW        0x0000 /*Outputcompare output is driven low during fualt condition*/
#define OC_FAULT_OUT_MASK           (~OC_FAULT_OUT_HIGH)

/*Section :  Fault Output state select bit*/
#define OC_FAULT_PIN_OUT            0x2000 /*oc_oe_out is low during fault condition*/
#define OC_FAULT_PIN_UNCHANGE       0x0000 /*oc_oe_out is unchanged during fault condition*/
#define OC_FAULT_TRISTATE_MASK       (~OC_FAULT_OE_OUT_LOW) 

/*Section : Ouput Compare Invert Bit*/
#define OC_OUT_INVERT               0x1000 /*OutputCompare output is inverted*/
#define OC_OUT_NOT_INVERT           0x0000 /*OutputCompare output is not inverted*/
#define OC_OUT_INVERT_MASK          (~OC_OUT_INVERT)

#if defined (ocmp_v2_3)|| defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/*Section : OC Pulse Width Least-Significant bits for delay selection*/
#define DELAY_OC_FALL_EDGE_34         0x0600 /*Delay OCx falling edge by 3/4 of the instruction cycle*/
#define DELAY_OC_FALL_EDGE_12         0x0400 /*Delay OCx falling edge by 1/2 of the instruction cycle*/
#define DELAY_OC_FALL_EDGE_14         0x0200 /*Delay OCx falling edge by 1/4 of the instruction cycle*/
#define DELAY_OC_FALL_EDGE_00         0x0000 /*OCx falling edge occurs by starting of the instruction cycle*/
#define DELAY_OC_FALL_EDGE_MASK 	  (~DELAY_OC_FALL_EDGE_34)
#endif

#if defined (ocmp_v2_1)
/*Section : OC Pulse Width Duty Cycle Least-Significant bits */
#define OC_FALL_EDGE_TRANS_P4         0x0600 /*ocmp_out falling edge transitions on rising edge of P4 clock*/
#define OC_FALL_EDGE_TRANS_P3         0x0400 /*ocmp_out falling edge transitions on rising edge of P3 clock*/
#define OC_FALL_EDGE_TRANS_P2         0x0200 /*ocmp_out falling edge transitions on rising edge of P2 clock*/
#define OC_FALL_EDGE_TRANS_P1         0x0000 /*ocmp_out falling edge transitions on rising edge of P1 clock*/
#define OC_FALL_EDGE_TRANS_MASK 	  (~OC_FALL_EDGE_TRANS_P4)
#endif

/*Section : Output Compare Cascade Module Operation*/
#define OC_CASCADE_ENABLE           0x0100 /*Output Compare Cascade Module Enabled*/
#define OC_CASCADE_DISABLE          0x0000 /*Output Compare Cascade Module Disabled*/
#define OC_CASCADE_MASK             (~OC_CASCADE_ENABLE)

/*Section : Output Compare Trigger Operation Select*/
#define OC_TRIGGER_ENABLE           0x0080 /* sync_trig[x] used to trigger the module timer*/
#define OC_SYNC_ENABLE			    0x0000 /* Sync_trig[x] is used to sync to another module timer */
#define OC_TRIGGER_EANABLE_MASK	    (~OC_TRIGGER_ENABLE)

/*Section : Output Compare Timer Trigger*/
#define OC_TRIGGER_TIMER 		    0x0040	/* Timer has been triggered and is running */
#define OC_UNTRIGGER_TIMER		    0x0000  /* Timer not triigered and is being held in clear */
#define OC_TRIGGER_BIT_MASK		    (~OC_TRIGGER_TIMER)

/*Section : Output Compare Direction Select bit*/
#define OC_DIRN_TRIS              0x0020  /*The signal ocmp_oe_out is forced to zero*/
#define OC_DIRN_OUTPUT         0x0000  /*The signal ocmp_oe_out can be active*/
#define OC_DIRN_MASK                (~OC_DIRN_OUTPUT)

#if defined (ocmp_v2_1) || defined (ocmp_v2_2)|| defined (ocmp_v2_3)|| defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/*Section : Source Select for Synchronization and Trigger Operation*/
#define OC_SYNC_TRIG_IN_DISABLE 	0x0000 /*Disables trigger operation */
#define OC_SYNC_TRIG_IN_OC1			0x0001
#define OC_SYNC_TRIG_IN_OC2			0x0002 /* Sync or Trigger input is OC2 */
#define OC_SYNC_TRIG_IN_OC3			0x0003
#define OC_SYNC_TRIG_IN_OC4			0x0004
#define OC_SYNC_TRIG_IN_OC5			0x0005 /* Sync or Trigger input is OC5 */
#if defined (ocmp_v2_1) || defined (ocmp_v2_2)|| defined (ocmp_v2_5)
#define OC_SYNC_TRIG_IN_OC6			0x0006
#define OC_SYNC_TRIG_IN_OC7			0x0007 /* Sync or Trigger input is OC7 */
#define OC_SYNC_TRIG_IN_OC8			0x0008 /* Sync or Trigger input is OC8 */
#define OC_SYNC_TRIG_IN_OC9			0x0009 /* Sync or Trigger input is OC9 */
#endif
#define OC_SYNC_TRIG_IN_IC5			0x000a
#define OC_SYNC_TRIG_IN_TMR1		0x000b
#define OC_SYNC_TRIG_IN_TMR2		0x000c
#define OC_SYNC_TRIG_IN_TMR3		0x000d
#define OC_SYNC_TRIG_IN_TMR4		0x000e
#define OC_SYNC_TRIG_IN_TMR5		0x000f
#if defined (ocmp_v2_1) || defined (ocmp_v2_2)|| defined (ocmp_v2_5)
#define OC_SYNC_TRIG_IN_IC7			0x0012
#define OC_SYNC_TRIG_IN_IC8			0x0013
#endif
#define OC_SYNC_TRIG_IN_IC1			0x0014
#define OC_SYNC_TRIG_IN_IC2			0x0015
#define OC_SYNC_TRIG_IN_IC3			0x0016
#define OC_SYNC_TRIG_IN_IC4			0x0017
#define OC_SYNC_TRIG_IN_CMP1		0x0018
#define OC_SYNC_TRIG_IN_CMP2		0x0019
#define OC_SYNC_TRIG_IN_CMP3		0x001a
#define OC_SYNC_TRIG_IN_AD			0x001b /* Sync or Trigger input is AD */
#define OC_SYNC_TRIG_IN_CTMU		0x001c
#if defined (ocmp_v2_1) || defined (ocmp_v2_2)|| defined (ocmp_v2_5) 
#define OC_SYNC_TRIG_IN_IC6			0x001d
#define OC_SYNC_TRIG_IN_IC9			0x001e /* Sync or Trigger input is ICAP9 */
#endif
#if defined (ocmp_v2_1) || defined (ocmp_v2_2) || defined (ocmp_v2_3) || defined (ocmp_v2_4) || defined (ocmp_v2_5)
#define OC_SYNC_TRIG_IN_CURR_OC		0x001f /*for current OC module  */
#endif
#define OC_SYNC_TRIG_IN_MASK    	(~OC_SYNC_TRIG_IN_IC9) 
#endif

/*Section :  Output Compare Interrupt Enable\Disable */
#define OC_INT_ON                   0x0008 /* Output Compare Enable  */
#define OC_INT_OFF                  0x0000 /* Output Compare Disable */
#define OC_INT_MASK                 (~OC_INT_ON) 

/* Section : Output Compare Interrupt Priority Level */
#define OC_INT_PRIOR_0              0x0000 /* OutputCompare PriorityLevel 0 */
#define OC_INT_PRIOR_1              0x0001 /* OutputCompare PriorityLevel 1 */
#define OC_INT_PRIOR_2              0x0002 /* OutputCompare PriorityLevel 2 */
#define OC_INT_PRIOR_3              0x0003
#define OC_INT_PRIOR_4              0x0004 /* OutputCompare PriorityLevel 4 */
#define OC_INT_PRIOR_5              0x0005
#define OC_INT_PRIOR_6              0x0006 /* OutputCompare PriorityLevel 6 */
#define OC_INT_PRIOR_7              0x0007
#define OC_INT_PRIOR_MASK           (~OC_INT_PRIOR_7)
#endif 
#endif 


#if defined (icap_v3_1) || defined (icap_v3_2) || defined (ocmp_v4_0)
#ifndef USE_AND_OR /* Format for AND_OR based bit setting */
/* ***** CAPTURE1 (CCP1CON) ***** */
/************** CCPx Module Mode Selection **********************************************/
#define COM_TOGG_MATCH   0xF2			/*Compare mode, toggle output on match */
#define COM_HI_MATCH     0xF8  		/*Compare mode: initialize CCPx pin low; on compare match, force CCPx pin high*/
#define COM_LO_MATCH     0xF9  		/*Compare mode: initialize CCPx pin high; on compare match, force CCPx pin low*/
#define COM_UNCHG_MATCH  0xFA  		/*Compare mode: generate software interrupt on compare match*/
#define COM_TRIG_SEVNT	 0xFB	 		/*Compare mode: Special Event Trigger; reset timer; start A/D conversion on CCPx match*/

#if defined (icap_v3_2) || defined (ocmp_v4_0)

/* ***** ECAPTURE1 (ECCP1CON) ***** */
/************** ECCPx Module Mode Selection **********************************************/
#define ECOM_TOGG_MATCH   0xF2			/*Compare mode, toggle output on match */
#define ECOM_HI_MATCH     0xF8  		/*Compare mode: initialize ECCPx pin low; on compare match, force CCPx pin high*/
#define ECOM_LO_MATCH     0xF9  		/*Compare mode: initialize ECCPx pin high; on compare match, force CCPx pin low*/
#define ECOM_UNCHG_MATCH  0xFA  		/*Compare mode: generate software interrupt on compare match*/
#define ECOM_TRIG_SEVNT	 0xFB	 		/*Compare mode: Special Event Trigger; reset timer; start A/D conversion on CCPx match*/
#endif

#if defined (ocmp_v4_0)
/* ***** ECAPTURE1 (ECCP1CON) ***** */
/************** ECCPx Module Mode Selection **********************************************/
#define FULL_BRIDGE_REV_OUT	 0xFF		/*PWM mode: Full-bridge output reverse: P1B is modulated; P1C is active; P1A and P1D are inactive*/
#define HALF_BRIDGE_OUT		 0xBF		/*Half-bridge output: P1A, P1B are modulated with dead-band control; P1C and P1D are assigned as port pins*/
#define FULL_BRIDGE_FWD_OUT  0x7F		/*Full-bridge output forward: P1D is modulated; P1A is active; P1B, P1C are inactive*/
#define SINGLE_OUTPUT		 0x3F		/*Single output: P1A, P1B, P1C and P1D are controlled by steering*/
#define PA_PC_LO_PB_PD_LO	 0xFF		/*PWM mode: PA and PC are active-low; PB and PD are active-low*/
#define PA_PC_LO_PB_PD_HI	 0xFE		/*PWM mode: PA and PC are active-low; PB and PD are active-high*/
#define PA_PC_HI_PB_PD_LO	 0xFD		/*PWM mode: PA and PC are active-high; PB and PD are active-low*/
#define PA_PC_HI_PB_PD_HI	 0xFC		/*PWM mode: PA and PC are active-high; PB and PD are active-high*/

/* ***** ECCP1AS ***** */
/**************ECCP1 AUTO-SHUTDOWN CONTROL REGISTER ***************************/
#define ECCP_SHUTDOWN		0xFF		//A shutdown event has occurred; ECCP outputs are in a shutdown state
#define ECCP_OPERATING		0x7F		//ECCP outputs are operating

#define VIL_FLT0_C1OUT_C2OUT  0xFF		//VIL on FLT0 pin, or either C1OUT or C2OUT is high
#define VIL_FLT0_C2OUT		  0xEF		//VIL on FLT0 pin, or C2OUT comparator output is high
#define VIL_FLT0_C1OUT		  0xDF		//VIL on FLT0 pin, or C1OUT comparator output is high
#define VIL_FLT0			  0xCF		//VIL on FLT0 pin
#define C1OUT_C2OUT_HI		  0xBF		//Either C1OUT or C2OUT is high
#define C2OUT_HI			  0xAF		//C2OUT comparator output is high
#define C1OUT_HI			  0x9F		//C1OUT comparator output is high
#define AUTO_SHUTDOWN_DIS	  0x8F		//Auto-shutdown is disabled	

#define P1A_P1C_TRI			  0xFF		//P1A and P1C pins tri-state
#define P1A_P1C_HI			  0xF7		//Drive pins P1A and P1C to ‘1’
#define P1A_P1C_LO			  0xF3		//Drive pins P1A and P1C to '0'

#define P1B_P1D_TRI			  0xFF		//P1B and P1D pins tri-state
#define P1B_P1D_HI			  0xFD		//Drive pins P1B and P1D to ‘1’
#define P1B_P1D_LO			  0xFC		//Drive pins P1B and P1D to '0'

/* ***** PSTR1CON ***** */
/**************PULSE STEERING CONTROL REGISTER FOR ECCP1***************************/
#define COMP_DIS			  0x3F 		//Complementary output assignment is disabled; the STR<D:A> bits are used to determine Steering mode
#define COMP_PxA_PxB		  0x7F		//PxA and PxB are selected as the complementary output pair
#define COMP_PxA_PxC		  0xBF		//PxA and PxC are selected as the complementary output pair
#define COMP_PxA_PxD		  0xFF		//PxA and PxD are selected as the complementary output pair

#define STEER_NEXT			  0xFF		//Output steering update occurs on the next PWM period
#define STEER_BEGINNING		  0xEF		//Output steering update occurs at the beginning of the instruction cycle boundary

#define P1D_PWM				  0xFF		//P1D pin has the PWM waveform with polarity control from CCP1M<1:0>
#define P1D_PORT			  0xF7		//P1D pin is assigned to port pin

#define P1C_PWM				  0xFF		//P1C pin has the PWM waveform with polarity control from CCP1M<1:0>
#define P1C_PORT			  0xFB		//P1C pin is assigned to port pin

#define P1B_PWM				  0xFF		//P1B pin has the PWM waveform with polarity control from CCP1M<1:0>
#define P1B_PORT			  0xFD		//P1B pin is assigned to port pin

#define P1A_PWM				  0xFF		//P1A pin has the PWM waveform with polarity control from CCP1M<1:0>
#define P1A_PORT			  0xFE		//P1A pin is assigned to port pin 
#endif

/****** CCPTMRS0 **************** */
//**************Timer source selection ***************************/
#define ECCP_1_SEL_TMR32		0xFE  	//ECCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define ECCP_1_SEL_TMR34		0xFF  	//ECCP selects TIMER3 for Capture & Compare and TIMER4 for PWM

#define CCP_2_SEL_TMR32		    0xF7 	//CCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define CCP_2_SEL_TMR34		    0xFF  	//CCP selects TIMER3 for Capture & Compare and TIMER4 for PWM

#if defined (icap_v3_2) || defined (ocmp_v4_0)
#define CCP_3_SEL_TMR32		    0xBF  	//CCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define CCP_3_SEL_TMR34		    0xFF  	//CCP selects TIMER3 for Capture & Compare and TIMER4 for PWM
#endif

#else

/* ***** CAPTURE1 (CCP1CON) ***** */
/************** CCPx Module Mode Selection **********************************************/
#define COM_TOGG_MATCH   0x02			/*Compare mode, toggle output on match */
#define COM_HI_MATCH     0x08  		/*Compare mode: initialize CCPx pin low; on compare match, force CCPx pin high*/
#define COM_LO_MATCH     0x09  		/*Compare mode: initialize CCPx pin high; on compare match, force CCPx pin low*/
#define COM_UNCHG_MATCH  0x0A  		/*Compare mode: generate software interrupt on compare match*/
#define COM_TRIG_SEVNT	 0x0B	 		/*Compare mode: Special Event Trigger; reset timer; start A/D conversion on CCPx match*/
#define COM_MODE_MASK	(~COM_TRIG_SEVNT) 		//Mask  CCPx Module Mode Selection bits

#if defined (icap_v3_2) || defined (ocmp_v4_0)

/* ***** ECAPTURE1 (ECCP1CON) ***** */
/************** ECCPx Module Mode Selection **********************************************/
#define ECOM_TOGG_MATCH    0x02			/*Compare mode, toggle output on match */
#define ECOM_HI_MATCH      0x08  		/*Compare mode: initialize ECCPx pin low; on compare match, force CCPx pin high*/
#define ECOM_LO_MATCH      0x09  		/*Compare mode: initialize ECCPx pin high; on compare match, force CCPx pin low*/
#define ECOM_UNCHG_MATCH   0x0A  		/*Compare mode: generate software interrupt on compare match*/
#define ECOM_TRIG_SEVNT	   0x0B	 		/*Compare mode: Special Event Trigger; reset timer; start A/D conversion on CCPx match*/
#define ECOM_MODE_MASK	  (~ECOM_TRIG_SEVNT)		//Mask  ECCPx Module Mode Selection bits
#endif

#if defined (ocmp_v4_0) 
/* ***** CAPTURE1 (CCP1CON) ***** */
/************** ECCPx Module Mode Selection **********************************************/
#define FULL_BRIDGE_REV_OUT	 0xCC		/*PWM mode: Full-bridge output reverse: P1B is modulated; P1C is active; P1A and P1D are inactive*/
#define HALF_BRIDGE_OUT		 0x8C		/*Half-bridge output: P1A, P1B are modulated with dead-band control; P1C and P1D are assigned as port pins*/
#define FULL_BRIDGE_FWD_OUT  0x4C		/*Full-bridge output forward: P1D is modulated; P1A is active; P1B, P1C are inactive*/
#define SINGLE_OUTPUT		 0x0C		/*Single output: P1A, P1B, P1C and P1D are controlled by steering*/
#define PA_PC_LO_PB_PD_LO	 0x0F		/*PWM mode: PA and PC are active-low; PB and PD are active-low*/
#define PA_PC_LO_PB_PD_HI	 0x0E		/*PWM mode: PA and PC are active-low; PB and PD are active-high*/
#define PA_PC_HI_PB_PD_LO	 0x0D		/*PWM mode: PA and PC are active-high; PB and PD are active-low*/
#define PA_PC_HI_PB_PD_HI	 0x0C		/*PWM mode: PA and PC are active-high; PB and PD are active-high*/
#define PWM_MODE_MASK	(~PA_PC_LO_PB_PD_LO)	//Mask  ECCPx Module Mode Selection bits

/* ***** ECCP1AS ***** */
/**************ECCP1 AUTO-SHUTDOWN CONTROL REGISTER ***************************/
#define ECCP_SHUTDOWN		0x80		//A shutdown event has occurred; ECCP outputs are in a shutdown state
#define ECCP_OPERATING		0x00		//ECCP outputs are operating
#define ECCP_SHUTDOWN_MASK  (~ECCP_SHUTDOWN)

#define VIL_FLT0_C1OUT_C2OUT  0x70		//VIL on FLT0 pin, or either C1OUT or C2OUT is high
#define VIL_FLT0_C2OUT		  0x60		//VIL on FLT0 pin, or C2OUT comparator output is high
#define VIL_FLT0_C1OUT		  0x50		//VIL on FLT0 pin, or C1OUT comparator output is high
#define VIL_FLT0			  0x40		//VIL on FLT0 pin
#define C1OUT_C2OUT_HI		  0x30		//Either C1OUT or C2OUT is high
#define C2OUT_HI			  0x20		//C2OUT comparator output is high
#define C1OUT_HI			  0x10		//C1OUT comparator output is high
#define AUTO_SHUTDOWN_DIS	  0x00		//Auto-shutdown is disabled	
#define AUTO_SHUTDOWN_MASK	  (~VIL_FLT0_C1OUT_C2OUT)

#define P1A_P1C_TRI			  0x0C		//P1A and P1C pins tri-state
#define P1A_P1C_HI			  0x04		//Drive pins P1A and P1C to ‘1’
#define P1A_P1C_LO			  0x00		//Drive pins P1A and P1C to '0'
#define P1A_P1C_SHUTDOWN_MASK	(~P1A_P1C_TRI)

#define P1B_P1D_TRI			  0x03		//P1B and P1D pins tri-state
#define P1B_P1D_HI			  0x01		//Drive pins P1B and P1D to ‘1’
#define P1B_P1D_LO			  0x00		//Drive pins P1B and P1D to '0'
#define P1B_P1D_SHUTDOWN_MASK	(~P1B_P1D_TRI)

/* ***** PSTR1CON ***** */
/**************PULSE STEERING CONTROL REGISTER FOR ECCP1***************************/
#define COMP_DIS			  0x00 		//Complementary output assignment is disabled; the STR<D:A> bits are used to determine Steering mode
#define COMP_PxA_PxB		  0x40		//PxA and PxB are selected as the complementary output pair
#define COMP_PxA_PxC		  0x80		//PxA and PxC are selected as the complementary output pair
#define COMP_PxA_PxD		  0xC0		//PxA and PxD are selected as the complementary output pair
#define COMP_MODE_MASK		  (~COMP_PxA_PxD)

#define STEER_NEXT			  0x10		//Output steering update occurs on the next PWM period
#define STEER_BEGINNING		  0x00		//Output steering update occurs at the beginning of the instruction cycle boundary
#define STEER_SYNC_MASK		  (~STEER_NEXT)

#define P1D_PWM				  0x08		//P1D pin has the PWM waveform with polarity control from CCP1M<1:0>
#define P1D_PORT			  0x00		//P1D pin is assigned to port pin
#define P1D_PWM_MASK		  (~P1D_PWM)

#define P1C_PWM				  0x04		//P1C pin has the PWM waveform with polarity control from CCP1M<1:0>
#define P1C_PORT			  0x00		//P1C pin is assigned to port pin
#define P1C_PWM_MASK		  (~P1D_PWM)

#define P1B_PWM				  0x02		//P1B pin has the PWM waveform with polarity control from CCP1M<1:0>
#define P1B_PORT			  0x00		//P1B pin is assigned to port pin
#define P1B_PWM_MASK		  (~P1D_PWM)

#define P1A_PWM				  0x01		//P1A pin has the PWM waveform with polarity control from CCP1M<1:0>
#define P1A_PORT			  0x00		//P1A pin is assigned to port pin 
#define P1A_PWM_MASK		  (~P1D_PWM)
#endif

/* ***** CCPTMRS0 ***** */
//**************Timer source selection ***************************/
#define ECCP_1_SEL_TMR32		0x00  	//ECCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define ECCP_1_SEL_TMR34		0x01  	//ECCP selects TIMER3 for Capture & Compare and TIMER4 for PWM
#define ECCP_1_SEL_TMR_MASK		(~ECCP_1_SEL_TMR34)  	//Masks ECCP TIMER Source selection bits

#define CCP_2_SEL_TMR32		    0x00 	//CCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define CCP_2_SEL_TMR34		    0x08  	//CCP selects TIMER3 for Capture & Compare and TIMER4 for PWM
#define CCP_2_SEL_TMR_MASK		(~CCP_2_SEL_TMR34)  	//Masks CCP TIMER Source selection bits

#if defined (icap_v3_2) || defined (ocmp_v4_0)
#define CCP_3_SEL_TMR32		    0x00  	//CCP selects TIMER3 for Capture & Compare and TIMER2 for PWM
#define CCP_3_SEL_TMR34		    0x40  	//CCP selects TIMER3 for Capture & Compare and TIMER4 for PWM
#define CCP_3_SEL_TMR_MASK		(~CCP_3_SEL_TMR34)  	//Masks CCP TIMER Source selection bits
#endif

/*Section :  Output Compare Interrupt Enable\Disable */
#define COM_INT_ON                   0x0008 /* Output Compare Enable  */
#define COM_INT_OFF                  0x0000 /* Output Compare Disable */
#define COM_INT_MASK                 (~COM_INT_ON) 

/* Section : Output Compare Interrupt Priority Level */
#define COM_INT_PRIOR_0              0x0000 /* OutputCompare PriorityLevel 0 */
#define COM_INT_PRIOR_1              0x0001 /* OutputCompare PriorityLevel 1 */
#define COM_INT_PRIOR_2              0x0002 /* OutputCompare PriorityLevel 2 */
#define COM_INT_PRIOR_3              0x0003
#define COM_INT_PRIOR_4              0x0004 /* OutputCompare PriorityLevel 4 */
#define COM_INT_PRIOR_5              0x0005
#define COM_INT_PRIOR_6              0x0006 /* OutputCompare PriorityLevel 6 */
#define COM_INT_PRIOR_7              0x0007
#define COM_INT_PRIOR_MASK           (~COM_INT_PRIOR_7)
#endif

#if defined (icap_v3_1) || defined (icap_v3_2)  || defined (ocmp_v4_0) || defined(LIB_BUILD)

/*Registers Defaults*/
#define CCP1CON_VALUE             0x0000
#define CCPTMRS0_VALUE            0x0000

#ifndef LIB_BUILD 
#define OpenOC1             	OpenOC1_v3
#define CloseOC1           		CloseOC1_v3
#define ConfigIntOC1        	ConfigIntOC1_v3
#if !defined (ocmp_v4_0)
#define ReadRegOC1              ReadRegOC1_v3
#endif
#endif

/***********************************************************************
Macro       : EnableIntOC1

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC1                   (IEC0bits.CCP1IE = 1) 

/***********************************************************************
Macro       : DisableIntOC1

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC1                   (IEC0bits.CCP1IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC1(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC1(priority)     (IPC0bits.CCP1IP = priority)

/*******************************************************************
Macro       : OC1_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC1_Clear_Intr_Status_Bit     (IFS0bits.CCP1IF = 0)

void __attribute__ ((section (".libperi")))CloseOC1_v3(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC1_v3(unsigned int config) ;

void __attribute__ ((section(".libperi")))OpenOC1_v3(unsigned int config,unsigned int period);                                                   

/*Registers Defaults*/
#define CCP2CON_VALUE            0x0000

#ifndef LIB_BUILD 
#define OpenOC2              	OpenOC2_v3
#define CloseOC2           		CloseOC2_v3
#define ConfigIntOC2        	ConfigIntOC2_v3
#if !defined (ocmp_v4_0)
#define ReadRegOC2             	ReadRegOC2_v3
#endif
#endif

/***********************************************************************
Macro       : EnableIntOC2

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC2                   (IEC0bits.CCP2IE = 1) 

/***********************************************************************
Macro       : DisableIntOC2

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC2                   (IEC0bits.CCP2IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC2(priority)

Include     : outcompare.h
 
Description : priority - This input parameter is the level of interrupt priority.
 
Arguments   : priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC2(priority)     (IPC1bits.CCP2IP = priority)

/*******************************************************************
Macro       : OC2_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC2_Clear_Intr_Status_Bit     (IFS0bits.CCP2IF = 0)

void __attribute__ ((section (".libperi")))CloseOC2_v3(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC2_v3(unsigned int config) ;

void __attribute__ ((section(".libperi")))OpenOC2_v3(unsigned int config,unsigned int period); 

#if defined (icap_v3_2)  || !defined (ocmp_v4_0) || defined(LIB_BUILD)

/*Registers Defaults*/
#define CCP3CON_VALUE            0x0000
#define ECCP1CON_VALUE            0x0000

#ifndef LIB_BUILD
#define OpenOC3              	OpenOC3_v3
#define CloseOC3           		CloseOC3_v3
#define ConfigIntOC3        	ConfigIntOC3_v3
#define ReadRegOC3             	ReadRegOC3_v3

#define OpenEOC1              	OpenEOC1_v3
#define CloseEOC1           	CloseEOC1_v3
#endif

/***********************************************************************
Macro       : EnableIntOC3

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC3                   (IEC1bits.CCP3IE = 1) 

/***********************************************************************
Macro       : DisableIntOC3

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC3                   (IEC1bits.CCP3IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC3(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC3(priority)     (IPC6bits.CCP3IP = priority)

/*******************************************************************
Macro       : OC3_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC3_Clear_Intr_Status_Bit     (IFS1bits.CCP3IF = 0)

void __attribute__ ((section (".libperi")))CloseOC3_v3(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC3_v3(unsigned int config) ;

void __attribute__ ((section(".libperi")))OpenOC3_v3(unsigned int config,unsigned int period);

void __attribute__ ((section (".libperi")))CloseEOC1_v3(void) ;

void __attribute__ ((section(".libperi")))OpenEOC1_v3(unsigned int config,unsigned int period);

#if defined (ocmp_v4_0)

#define CCP3CON_VALUE            0x0000

#ifndef LIB_BUILD 
#define OpenOC3              	OpenOC3_v3
#define CloseOC3           		CloseOC3_v3
#define ConfigIntOC3        	ConfigIntOC3_v3
#endif

/***********************************************************************
Macro       : EnableIntOC3

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC3                   (IEC0bits.CCP3IE = 1) 

/***********************************************************************
Macro       : DisableIntOC3

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC3                   (IEC0bits.CCP3IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC3(priority)

Include     : outcompare.h
 
Description : priority - This input parameter is the level of interrupt priority.
 
Arguments   : priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC3(priority)     (IPC1bits.CCP3IP = priority)

/*******************************************************************
Macro       : OC3_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC3_Clear_Intr_Status_Bit     (IFS0bits.CCP3IF = 0)

/***********************************************************************
Macro       : PWM_Restart

Include     : outcompare.h
 
Description : This macro restarts the PWM functinality.
 
Arguments   : None
 
Remarks     : Upon auto-shutdown, the ECCPASE bit clears automatically 
			  once the shutdown event goes away; the PWM restarts automatically. 
*************************************************************************/
#define PWM_Restart				(ECCP1DELbits.PRSEN = 1)

/***********************************************************************
Macro       : ECCP_Shutdown

Include     : outcompare.h
 
Description : This macro shuts down the ECCP outputs.
 
Arguments   : None
 
Remarks     : This macro indicates that a shutdown event has occurred; ECCP 
			  outputs are in a shutdown state. 
*************************************************************************/
#define ECCP_Shutdown		(ECCP1ASbits.ECCPASE = 1)

void __attribute__ ((section (".libperi")))CloseOC3_v3(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC3_v3(unsigned int config) ;

void __attribute__ ((section(".libperi")))OpenOC3_v3(unsigned int config,unsigned int period); 

void __attribute__ ((section(".libperi"))) ECCP_PWM_Delay (unsigned int delay);

void __attribute__ ((section(".libperi"))) Config_shutdown_src(unsigned int config);

#endif
#endif
#endif
#endif

#if defined (ocmp_v1_1) || defined (ocmp_v1_2) || defined (ocmp_v1_3) || defined(LIB_BUILD)

/*Registers Defaults*/
#define OC1RS_VALUE                 0x0000
#define OC1R_VALUE                  0x0000
#define OC1CON_VALUE                0x0000

#ifndef LIB_BUILD
#define OpenOC1				OpenOC1_v1
#define SetDCOC1PWM			SetDCOC1PWM_v1
#endif

/***********************************************************************
Macro       : EnableIntOC1

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC1                   (IEC0bits.OC1IE = 1) 

/***********************************************************************
Macro       : DisableIntOC1

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC1                   (IEC0bits.OC1IE = 0) 

/***********************************************************************
Macro       : OC1PWMFaultStatus

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC1PWMFaultStatus               (OC1CONbits.OCFLT)

/***********************************************************************
Macro       : SetPriorityIntOC1(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC1(priority)     (IPC0bits.OC1IP = priority)

/*******************************************************************
Macro       : OC1_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC1_Clear_Intr_Status_Bit     (IFS0bits.OC1IF = 0)


void __attribute__ ((section (".libperi")))CloseOC1(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC1(unsigned int config) ;

unsigned int __attribute__ ((section (".libperi")))ReadDCOC1PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC1(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC1_v1(unsigned int config,unsigned int value1,unsigned int value2);                                                   

char __attribute__ ((section(".libperi")))SetDCOC1PWM_v1(unsigned int dutycycle) ;

char __attribute__ ((section (".libperi")))SetPulseOC1(unsigned int pulse_start,unsigned int pulse_stop) ;
#endif

#if defined (ocmp_v1_2) || defined (ocmp_v1_3) || defined (LIB_BUILD)
/*Registers Defaults*/
#define OC2RS_VALUE                0x0000
#define OC2R_VALUE                 0x0000
#define OC2CON_VALUE               0x0000

#ifndef LIB_BUILD
#define OpenOC2				OpenOC2_v1
#define SetDCOC2PWM			SetDCOC2PWM_v1
#endif 

/***********************************************************************
Macro       : EnableIntOC2

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC2                   (IEC0bits.OC2IE = 1) 

/***********************************************************************
Macro       : DisableIntOC2

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC2                   (IEC0bits.OC2IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC2(priority)

Include     : outcompare.h
 
Description : priority - This input parameter is the level of interrupt priority.
 
Arguments   : priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC2(priority)     (IPC1bits.OC2IP = priority)

/*******************************************************************
Macro       : OC2_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC2_Clear_Intr_Status_Bit     (IFS0bits.OC2IF = 0)

/***********************************************************************
Macro       : OC2PWMFaultStatus

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.
*************************************************************************/
#define OC2PWMFaultStatus                OC2CONbits.OCFLT


void __attribute__ ((section (".libperi")))CloseOC2(void);

void __attribute__ ((section(".libperi")))ConfigIntOC2(unsigned int config) ;

unsigned int __attribute__ ((section (".libperi")))ReadDCOC2PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC2(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC2_v1(unsigned int config,unsigned int value1,unsigned int value2) ;

char __attribute__((section(".libperi")))SetDCOC2PWM_v1(unsigned int dutycycle) ;

char __attribute__((section (".libperi")))SetPulseOC2(unsigned int pulse_start,unsigned int pulse_stop) ;


#ifndef ocmp_v1_3
/*Registers Defaults*/   
#define OC3RS_VALUE                0x0000
#define OC3R_VALUE                 0x0000
#define OC3CON_VALUE               0x0000

#ifndef LIB_BUILD
#define OpenOC3				OpenOC3_v1
#define SetDCOC3PWM			SetDCOC3PWM_v1
#endif
/***********************************************************************
Macro       : EnableIntOC3

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC3                   (IEC1bits.OC3IE = 1) 

/***********************************************************************
Macro       : DisableIntOC3

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC3                   (IEC1bits.OC3IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC3(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC3(priority)     (IPC6bits.OC3IP = priority)

/*******************************************************************
Macro       : OC3_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC3_Clear_Intr_Status_Bit     (IFS1bits.OC3IF = 0)

/***********************************************************************
Macro       : OC3PWMFaultStatus

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.
*************************************************************************/
#define OC3PWMFaultStatus                OC3CONbits.OCFLT


void __attribute__ ((section (".libperi")))CloseOC3(void);

void __attribute__ ((section(".libperi")))ConfigIntOC3(unsigned int config);

unsigned int __attribute__ ((section (".libperi"))) ReadDCOC3PWM(void);

unsigned int __attribute__ ((section(".libperi")))ReadRegOC3(char reg);

void __attribute__ ((section(".libperi")))OpenOC3_v1(unsigned int config,unsigned int value1,unsigned int value2);

char __attribute__ ((section(".libperi")))SetDCOC3PWM_v1(unsigned int dutycycle);

char __attribute__ ((section (".libperi")))SetPulseOC3(unsigned int pulse_start,unsigned int pulse_stop) ;

/*Registers Defaults*/
#define OC4RS_VALUE                0x0000
#define OC4R_VALUE                 0x0000
#define OC4CON_VALUE               0x0000

#ifndef LIB_BUILD
#define OpenOC4				OpenOC4_v1
#define SetDCOC4PWM			SetDCOC4PWM_v1
#endif
/***********************************************************************
Macro       : EnableIntOC4

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC4                   (IEC1bits.OC4IE = 1) 

/***********************************************************************
Macro       : DisableIntOC4

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC4                   (IEC1bits.OC4IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC4(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC4(priority)     (IPC6bits.OC4IP = priority)

/*******************************************************************
Macro       : OC4_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC4_Clear_Intr_Status_Bit     (IFS1bits.OC4IF = 0)

/***********************************************************************
Macro       : OC4PWMFaultStatus

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.
*************************************************************************/
#define OC4PWMFaultStatus 			OC4CONbits.OCFLT


void __attribute__ ((section (".libperi")))CloseOC4(void);

void __attribute__ ((section(".libperi")))ConfigIntOC4(unsigned int config);

unsigned int __attribute__ ((section (".libperi")))ReadDCOC4PWM(void);

unsigned int __attribute__ ((section(".libperi")))ReadRegOC4(char reg);

void __attribute__ ((section(".libperi")))OpenOC4_v1(unsigned int config,unsigned int value1,unsigned int value2);

char __attribute__ ((section(".libperi")))SetDCOC4PWM_v1(unsigned int dutycycle);

char __attribute__((section (".libperi")))SetPulseOC4(unsigned int pulse_start,unsigned int pulse_stop) ;


/*Registers Defaults*/ 
#define OC5RS_VALUE                0x0000
#define OC5R_VALUE                 0x0000
#define OC5CON_VALUE               0x0000

#ifndef LIB_BUILD
#define OpenOC5				OpenOC5_v1
#define SetDCOC5PWM			SetDCOC5PWM_v1
#endif
/***********************************************************************
Macro       : EnableIntOC5

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC5                   (IEC2bits.OC5IE = 1) 

/***********************************************************************
Macro       : DisableIntOC5

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC5                   (IEC2bits.OC5IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC5(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC5(priority)     (IPC10bits.OC5IP = priority)

/*******************************************************************
Macro       : OC5_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC5_Clear_Intr_Status_Bit     (IFS2bits.OC5IF = 0)

/***********************************************************************
Macro       : OC5PWMFaultStatus

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.
*************************************************************************/
#define OC5PWMFaultStatus 			OC5CONbits.OCFLT


void __attribute__ ((section (".libperi")))CloseOC5(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC5(unsigned int config) ;

unsigned int __attribute__ ((section (".libperi")))ReadDCOC5PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC5(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC5_v1(unsigned int config,unsigned int value1,unsigned int value2) ;

char __attribute__ ((section(".libperi")))SetDCOC5PWM_v1(unsigned int dutycycle) ;

char __attribute__((section (".libperi")))SetPulseOC5(unsigned int pulse_start,unsigned int pulse_stop) ;

#endif
#endif

#if defined (ocmp_v2_1)|| defined (ocmp_v2_2) || defined (ocmp_v2_3) ||\
     defined (ocmp_v2_4)|| defined (ocmp_v2_5)||defined(LIB_BUILD)

/*Registers Defaults*/
#define OC1RS_VALUE         0x0000
#define OC1R_VALUE          0x0000
#define OC1CON_VALUE        0x0000

#ifndef LIB_BUILD
#define OpenOC1				OpenOC1_GB
#define SetDCOC1PWM			SetDCOC1PWM_GB
#define CloseOC1            CloseOC1_v4
#define ReadDCOC1PWM        ReadDCOC1PWM_v4 
#define SetPulseOC1         SetPulseOC1_v4
#define OC1PWMFaultStatus   OC1PWMFaultStatus_v4
#define OC1PWMFault_A_Status   OC1PWMFault_A_Status_v4
#define OC1PWMFault_B_Status   OC1PWMFault_B_Status_v4
#define OC1PWMFault_C_Status   OC1PWMFault_C_Status_v4
#define OC1PWMFault_CMP_Status   OC1PWMFault_CMP_Status_v4
#endif

/***********************************************************************
Macro       : EnableIntOC1

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC1                   (IEC0bits.OC1IE = 1) 

/***********************************************************************
Macro       : DisableIntOC1

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC1                   (IEC0bits.OC1IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC1(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC1(priority)     (IPC0bits.OC1IP = priority)

/*******************************************************************
Macro       : OC1_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC1_Clear_Intr_Status_Bit     (IFS0bits.OC1IF = 0)
 

#if defined (ocmp_v2_2) 
/***********************************************************************
Macro       : OC1PWMFaultStatus_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC1PWMFaultStatus_v4            (OC1CON1bits.OCFLT0)
#endif

#if defined (ocmp_v2_1) ||defined (ocmp_v2_3)|| defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/***********************************************************************
Macro       : OC1PWMFault_A_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC1PWMFault_A_Status_v4            (OC1CON1bits.OCFLT0)

/***********************************************************************
Macro       : OC1PWMFault_B_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC1PWMFault_B_Status_v4            (OC1CON1bits.OCFLT1)
#endif

#if defined (ocmp_v2_1)|| defined (ocmp_v2_5) 
/***********************************************************************
Macro       : OC1PWMFault_C_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC1PWMFault_C_Status_v4            (OC1CON1bits.OCFLT2)
#endif

#if defined (ocmp_v2_3) || defined (ocmp_v2_4)
/***********************************************************************
Macro       : OC1PWMFault_CMP_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC1PWMFault_CMP_Status_v4            (OC1CON1bits.OCFLT2)
#endif


/***********************************************************************
Macro       : OC1TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else false indicates timer source is not triggered.
*************************************************************************/
#define OC1TimerTrigStatus            OC1CON2bits.TRIGSTAT


/***********************************************************************
Macro       : OC1TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC1TimerTrigSet              OC1CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC1TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC1TimerTrigClear            OC1CON2bits.TRIGSTAT = 0


void __attribute__ ((section (".libperi")))CloseOC1_v4(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC1(unsigned int config) ;

unsigned int __attribute__ ((section (".libperi")))ReadDCOC1PWM_v4(void) ;

unsigned int __attribute__ ((section (".libperi")))ReadPeriodOC1PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC1(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC1_GB(unsigned int config1,unsigned int config2,unsigned int value1,unsigned int value2) ;

char __attribute__ ((section(".libperi")))SetDCOC1PWM_GB(unsigned int dutycycle,unsigned int period) ;

char __attribute__ ((section (".libperi")))SetPulseOC1_v4(unsigned int pulse_start,unsigned int pulse_stop) ;

/*Registers Defaults*/
#define OC2RS_VALUE         0x0000
#define OC2R_VALUE          0x0000
#define OC2CON_VALUE        0x0000

#ifndef LIB_BUILD
#define OpenOC2				OpenOC2_GB
#define SetDCOC2PWM			SetDCOC2PWM_GB
#define CloseOC2            CloseOC2_v4	
#define ReadDCOC2PWM        ReadDCOC2PWM_v4 
#define SetPulseOC2         SetPulseOC2_v4
#define OC2PWMFaultStatus   OC2PWMFaultStatus_v4
#define OC2PWMFault_A_Status   OC2PWMFault_A_Status_v4
#define OC2PWMFault_B_Status   OC2PWMFault_B_Status_v4
#define OC2PWMFault_C_Status   OC2PWMFault_C_Status_v4
#define OC2PWMFault_CMP_Status   OC2PWMFault_CMP_Status_v4
#endif

/***********************************************************************
Macro       : EnableIntOC2

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC2                   (IEC0bits.OC2IE = 1) 

/***********************************************************************
Macro       : DisableIntOC2

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC2                   (IEC0bits.OC2IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC2(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC2(priority)     (IPC1bits.OC2IP = priority)

/*******************************************************************
Macro       : OC2_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC2_Clear_Intr_Status_Bit     (IFS0bits.OC2IF = 0)

#if defined (ocmp_v2_2) 
/***********************************************************************
Macro       : OC2PWMFaultStatus_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC2PWMFaultStatus_v4            (OC2CON1bits.OCFLT0)
#endif

#if defined (ocmp_v2_1) || defined (ocmp_v2_3) || defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/***********************************************************************
Macro       : OC2PWMFault_A_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC2PWMFault_A_Status_v4            (OC2CON1bits.OCFLT0)

/***********************************************************************
Macro       : OC2PWMFault_B_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC2PWMFault_B_Status_v4            (OC2CON1bits.OCFLT1)
#endif

#if defined (ocmp_v2_3) || defined (ocmp_v2_4)
/***********************************************************************
Macro       : OC2PWMFault_CMP_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC2PWMFault_CMP_Status_v4            (OC2CON1bits.OCFLT2)
#endif

#if defined (ocmp_v2_1)|| defined (ocmp_v2_5)
/***********************************************************************
Macro       : OC2PWMFault_C_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC2PWMFault_C_Status_v4            (OC2CON1bits.OCFLT2)
#endif

/***********************************************************************
Macro       : OC2TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC2TimerTrigStatus              OC2CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC2TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC2TimerTrigSet                  OC2CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC2TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC2TimerTrigClear               OC2CON2bits.TRIGSTAT = 0


void __attribute__ ((section (".libperi")))CloseOC2_v4(void);

void __attribute__ ((section(".libperi")))ConfigIntOC2(unsigned int config) ;

unsigned int __attribute__ ((section (".libperi")))ReadDCOC2PWM_v4(void) ;

unsigned int __attribute__ ((section (".libperi")))ReadPeriodOC2PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC2(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC2_GB(unsigned int config1,unsigned int config2,unsigned int value1,unsigned int value2) ;

char __attribute__((section(".libperi")))SetDCOC2PWM_GB(unsigned int dutycycle,unsigned int period) ;

char __attribute__((section (".libperi")))SetPulseOC2_v4(unsigned int pulse_start,unsigned int pulse_stop) ;

#ifndef LIB_BUILD
#define OpenOC12				OpenOC12_GB
#define SetDCOC12PWM			SetDCOC12PWM_GB
#endif

#define _OC12Interrupt    _OC1Interrupt 

/***********************************************************************
Macro       : EnableIntOC12

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC12                   (IEC0bits.OC1IE = 1) 

/***********************************************************************
Macro       : DisableIntOC12

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC12                   (IEC0bits.OC1IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC12(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC12(priority)     (IPC0bits.OC1IP = priority)

/*******************************************************************
Macro       : OC12_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC12_Clear_Intr_Status_Bit     (IFS0bits.OC1IF = 0)

/***********************************************************************
Macro       : OC12TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC12TimerTrigStatus              OC2CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC12TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC12TimerTrigSet                  OC2CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC12TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC12TimerTrigClear               OC2CON2bits.TRIGSTAT = 0



void __attribute__ ((section (".libperi")))CloseOC12(void);

void __attribute__ ((section(".libperi")))ConfigIntOC12(unsigned int config) ;

unsigned long int __attribute__ ((section (".libperi")))ReadDCOC12PWM(void) ;

unsigned long int __attribute__ ((section (".libperi")))ReadPeriodOC12PWM(void) ;

unsigned long int __attribute__ ((section(".libperi")))ReadRegOC12(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC12_GB(unsigned int config1,unsigned int config2,unsigned long int value1,unsigned long int value2) ;

char __attribute__((section(".libperi")))SetDCOC12PWM_GB(unsigned long int dutycycle,unsigned long int period) ;

char __attribute__((section (".libperi")))SetPulseOC12(unsigned long int pulse_start,unsigned long int pulse_stop) ;


/*Registers Defaults*/
#define OC3RS_VALUE         0x0000
#define OC3R_VALUE          0x0000
#define OC3CON_VALUE        0x0000

#ifndef LIB_BUILD
#define OpenOC3				OpenOC3_GB
#define SetDCOC3PWM			SetDCOC3PWM_GB
#define CloseOC3            CloseOC3_v4
#define ReadDCOC3PWM        ReadDCOC3PWM_v4 
#define SetPulseOC3         SetPulseOC3_v4
#define OC3PWMFaultStatus   OC3PWMFaultStatus_v4
#define OC3PWMFault_A_Status   OC3PWMFault_A_Status_v4
#define OC3PWMFault_B_Status   OC3PWMFault_B_Status_v4
#define OC3PWMFault_C_Status   OC3PWMFault_C_Status_v4
#define OC3PWMFault_CMP_Status   OC3PWMFault_CMP_Status_v4
#endif

/***********************************************************************
Macro       : EnableIntOC3

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC3                   (IEC1bits.OC3IE = 1) 

/***********************************************************************
Macro       : DisableIntOC3

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC3                   (IEC1bits.OC3IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC3(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC3(priority)     (IPC6bits.OC3IP = priority)

/*******************************************************************
Macro       : OC3_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC3_Clear_Intr_Status_Bit     (IFS1bits.OC3IF = 0)

#if defined (ocmp_v2_2) 
/***********************************************************************
Macro       : OC3PWMFaultStatus_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC3PWMFaultStatus_v4            (OC3CON1bits.OCFLT0)
#endif

#if defined (ocmp_v2_1) || defined (ocmp_v2_3)|| defined (ocmp_v2_4)|| defined (ocmp_v2_5)
/***********************************************************************
Macro       : OC3PWMFault_A_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC3PWMFault_A_Status_v4            (OC3CON1bits.OCFLT0)

/***********************************************************************
Macro       : OC3PWMFault_B_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC3PWMFault_B_Status_v4            (OC3CON1bits.OCFLT1)
#endif

#if defined (ocmp_v2_3) || defined (ocmp_v2_4)
/***********************************************************************
Macro       : OC3PWMFault_CMP_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC3PWMFault_CMP_Status_v4            (OC3CON1bits.OCFLT2)
#endif

#if defined (ocmp_v2_1)|| defined (ocmp_v2_5) 
/***********************************************************************
Macro       : OC3PWMFault_C_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC3PWMFault_C_Status_v4            (OC3CON1bits.OCFLT2)
#endif

/***********************************************************************
Macro       : OC3TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC3TimerTrigStatus              OC3CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC3TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC3TimerTrigSet                OC3CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC3TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC3TimerTrigClear  			OC3CON2bits.TRIGSTAT = 0


void __attribute__ ((section (".libperi")))CloseOC3_v4(void);

void __attribute__ ((section(".libperi")))ConfigIntOC3(unsigned int config);

unsigned int __attribute__ ((section (".libperi"))) ReadDCOC3PWM_v4(void);

unsigned int __attribute__ ((section (".libperi")))ReadPeriodOC3PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC3(char reg);

void __attribute__ ((section(".libperi")))OpenOC3_GB(unsigned int config1,unsigned int config2,unsigned int value1,unsigned int value2);

char __attribute__ ((section(".libperi")))SetDCOC3PWM_GB(unsigned int dutycycle,unsigned int period);

char __attribute__ ((section (".libperi")))SetPulseOC3_v4(unsigned int pulse_start,unsigned int pulse_stop) ;
#endif

#if defined (ocmp_v2_1)|| defined (ocmp_v2_2) || defined (ocmp_v2_3) || defined (ocmp_v2_5)||\
    defined(LIB_BUILD)
/*Registers Defaults*/
#define OC4RS_VALUE                0x0000
#define OC4R_VALUE                 0x0000
#define OC4CON_VALUE               0x0000

#ifndef LIB_BUILD
#define OpenOC4				       OpenOC4_GB
#define SetDCOC4PWM			       SetDCOC4PWM_GB
#define CloseOC4           		   CloseOC4_v4
#define ReadDCOC4PWM               ReadDCOC4PWM_v4 
#define SetPulseOC4                SetPulseOC4_v4
#define OC4PWMFaultStatus          OC4PWMFaultStatus_v4
#define OC4PWMFault_A_Status   OC4PWMFault_A_Status_v4
#define OC4PWMFault_B_Status   OC4PWMFault_B_Status_v4
#define OC4PWMFault_C_Status   OC4PWMFault_C_Status_v4
#define OC4PWMFault_CMP_Status   OC4PWMFault_CMP_Status_v4
#endif

/***********************************************************************
Macro       : EnableIntOC4

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC4                   (IEC1bits.OC4IE = 1) 

/***********************************************************************
Macro       : DisableIntOC4

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC4                   (IEC1bits.OC4IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC4(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC4(priority)     (IPC6bits.OC4IP = priority)

/*******************************************************************
Macro       : OC4_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC4_Clear_Intr_Status_Bit     (IFS1bits.OC4IF = 0)

#if defined (ocmp_v2_2) 
/***********************************************************************
Macro       : OC4PWMFaultStatus_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC4PWMFaultStatus_v4            (OC4CON1bits.OCFLT0)
#endif

#if defined (ocmp_v2_1) || defined (ocmp_v2_3)|| defined (ocmp_v2_5) 
/***********************************************************************
Macro       : OC4PWMFault_A_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC4PWMFault_A_Status_v4            (OC4CON1bits.OCFLT0)

/***********************************************************************
Macro       : OC4PWMFault_B_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC4PWMFault_B_Status_v4            (OC4CON1bits.OCFLT1)
#endif

#if defined (ocmp_v2_3)
/***********************************************************************
Macro       : OC4PWMFault_CMP_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC4PWMFault_CMP_Status_v4            (OC4CON1bits.OCFLT2)
#endif

#if defined (ocmp_v2_1)|| defined (ocmp_v2_5)
/***********************************************************************
Macro       : OC4PWMFault_C_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC4PWMFault_C_Status_v4            (OC4CON1bits.OCFLT2)
#endif

/***********************************************************************
Macro       : OC4TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC4TimerTrigStatus 			OC4CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC4TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC4TimerTrigSet  			OC4CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC4TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC4TimerTrigClear  			OC4CON2bits.TRIGSTAT = 0


void __attribute__ ((section (".libperi")))CloseOC4_v4(void);

void __attribute__ ((section(".libperi")))ConfigIntOC4(unsigned int config);

unsigned int __attribute__ ((section (".libperi")))ReadDCOC4PWM_v4(void);

unsigned int __attribute__ ((section (".libperi")))ReadPeriodOC4PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC4(char reg);

void __attribute__ ((section(".libperi")))OpenOC4_GB(unsigned int config1,unsigned int config2,unsigned int value1,unsigned int value2);

char __attribute__ ((section(".libperi")))SetDCOC4PWM_GB(unsigned int dutycycle,unsigned int period);

char __attribute__((section (".libperi")))SetPulseOC4_v4(unsigned int pulse_start,unsigned int pulse_stop) ;

#ifndef LIB_BUILD
#define OpenOC34				OpenOC34_GB
#define SetDCOC34PWM			SetDCOC34PWM_GB
#endif

#define _OC34Interrupt   _OC3Interrupt

/***********************************************************************
Macro       : EnableIntOC34

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC34                   (IEC1bits.OC3IE = 1) 

/***********************************************************************
Macro       : DisableIntOC34

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC34                   (IEC1bits.OC3IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC34(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC34(priority)     (IPC6bits.OC3IP = priority)

/*******************************************************************
Macro       : OC34_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC34_Clear_Intr_Status_Bit     (IFS1bits.OC3IF = 0)

/***********************************************************************
Macro       : OC34TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC34TimerTrigStatus 			OC4CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC34TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC34TimerTrigSet  			OC4CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC34TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC34TimerTrigClear  			OC4CON2bits.TRIGSTAT = 0

void __attribute__ ((section (".libperi")))CloseOC34(void);

void __attribute__ ((section(".libperi")))ConfigIntOC34(unsigned int config) ;

unsigned long int __attribute__ ((section (".libperi")))ReadDCOC34PWM(void) ;

unsigned long int __attribute__ ((section (".libperi")))ReadPeriodOC34PWM(void) ;

unsigned long int __attribute__ ((section(".libperi")))ReadRegOC34(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC34_GB(unsigned int config1,unsigned int config2,unsigned long int value1,unsigned long int value2) ;

char __attribute__((section(".libperi")))SetDCOC34PWM_GB(unsigned long int dutycycle,unsigned long int period) ;

char __attribute__((section (".libperi")))SetPulseOC34(unsigned long int pulse_start,unsigned long int pulse_stop) ;

 /*Registers Defaults*/
#define OC5RS_VALUE                0x0000
#define OC5R_VALUE                 0x0000
#define OC5CON_VALUE               0x0000

#ifndef LIB_BUILD
#define OpenOC5				       OpenOC5_GB
#define SetDCOC5PWM			       SetDCOC5PWM_GB
#define CloseOC5            	   CloseOC5_v4
#define ReadDCOC5PWM               ReadDCOC5PWM_v4 
#define SetPulseOC5                SetPulseOC5_v4
#define OC5PWMFaultStatus   	   OC5PWMFaultStatus_v4
#define OC5PWMFault_A_Status   OC5PWMFault_A_Status_v4
#define OC5PWMFault_B_Status   OC5PWMFault_B_Status_v4
#define OC5PWMFault_C_Status   OC5PWMFault_C_Status_v4
#define OC5PWMFault_CMP_Status   OC5PWMFault_CMP_Status_v4
#endif

/***********************************************************************
Macro       : EnableIntOC5

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC5                   (IEC2bits.OC5IE = 1) 

/***********************************************************************
Macro       : DisableIntOC5

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC5                   (IEC2bits.OC5IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC5(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC5(priority)     (IPC10bits.OC5IP = priority)

/*******************************************************************
Macro       : OC5_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC5_Clear_Intr_Status_Bit     (IFS2bits.OC5IF = 0)

#if defined (ocmp_v2_2) 
/***********************************************************************
Macro       : OC5PWMFaultStatus_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC5PWMFaultStatus_v4            (OC5CON1bits.OCFLT0)
#endif

#if defined (ocmp_v2_1) || defined (ocmp_v2_3) || defined (ocmp_v2_5)
/***********************************************************************
Macro       : OC5PWMFault_A_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC5PWMFault_A_Status_v4            (OC5CON1bits.OCFLT0)

/***********************************************************************
Macro       : OC5PWMFault_B_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC5PWMFault_B_Status_v4            (OC5CON1bits.OCFLT1)
#endif

#if defined (ocmp_v2_3)
/***********************************************************************
Macro       : OC5PWMFault_CMP_Status_v4

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC5PWMFault_CMP_Status_v4            (OC5CON1bits.OCFLT2)
#endif

#if defined (ocmp_v2_1)|| defined (ocmp_v2_5)
/***********************************************************************
Macro       : OC5PWMFault_C_Status_v4
sweetbaby
Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC5PWMFault_C_Status_v4            (OC5CON1bits.OCFLT2)
#endif


/***********************************************************************
Macro       : OC5TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC5TimerTrigStatus 			OC5CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC5TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC5TimerTrigSet  			OC5CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC5TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC5TimerTrigClear  			OC5CON2bits.TRIGSTAT = 0

void __attribute__ ((section (".libperi")))CloseOC5_v4(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC5(unsigned int config) ;

unsigned int __attribute__ ((section (".libperi")))ReadDCOC5PWM_v4(void) ;

unsigned int __attribute__ ((section (".libperi")))ReadPeriodOC5PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC5 (char reg);

void __attribute__ ((section(".libperi")))OpenOC5_GB(unsigned int config1,unsigned int config2,unsigned int value1,unsigned int value2) ;

char __attribute__ ((section(".libperi")))SetDCOC5PWM_GB(unsigned int dutycycle,unsigned int period) ;

char __attribute__((section (".libperi")))SetPulseOC5_v4(unsigned int pulse_start,unsigned int pulse_stop) ;

#endif

#if defined (ocmp_v2_1) || defined (ocmp_v2_2)|| defined (ocmp_v2_5)||defined (LIB_BUILD)

/*Registers Defaults*/
#ifndef LIB_BUILD
#define OpenOC6				OpenOC6_GB
#define SetDCOC6PWM			SetDCOC6PWM_GB
#endif
#define OC6RS_VALUE                0x0000
#define OC6R_VALUE                 0x0000
#define OC6CON_VALUE               0x0000

/***********************************************************************
Macro       : EnableIntOC6

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC6                  (IEC2bits.OC6IE = 1) 

/***********************************************************************
Macro       : DisableIntOC6

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC6                   (IEC2bits.OC6IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC6(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC6(priority)     (IPC10bits.OC6IP = priority)

/*******************************************************************
Macro       : OC6_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC6_Clear_Intr_Status_Bit     (IFS2bits.OC6IF = 0)

#if defined (ocmp_v2_2)
/***********************************************************************
Macro       : OC6PWMFaultStatus

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.
*************************************************************************/
#define OC6PWMFaultStatus 		OC6CON1bits.OCFLT0
#endif

#if defined (ocmp_v2_1) || defined (ocmp_v2_5)
/***********************************************************************
Macro       : OC6PWMFault_A_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC6PWMFault_A_Status         (OC6CON1bits.OCFLT0)

/***********************************************************************
Macro       : OC6PWMFault_B_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC6PWMFault_B_Status            (OC6CON1bits.OCFLT1)

/***********************************************************************
Macro       : OC6PWMFault_C_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC6PWMFault_C_Status           (OC6CON1bits.OCFLT2)
#endif

/***********************************************************************
Macro       : OC6TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC6TimerTrigStatus 		OC6CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC6TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC6TimerTrigSet  		OC6CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC1TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC6TimerTrigClear  		OC6CON2bits.TRIGSTAT = 0


void __attribute__ ((section (".libperi")))CloseOC6(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC6(unsigned int config) ;

unsigned int __attribute__ ((section (".libperi")))ReadDCOC6PWM(void) ;

unsigned int __attribute__ ((section (".libperi")))ReadPeriodOC6PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC6(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC6_GB(unsigned int config1,unsigned int config2,unsigned int value1,unsigned int value2) ;

char __attribute__ ((section(".libperi")))SetDCOC6PWM_GB(unsigned int dutycycle,unsigned int period) ;

char __attribute__((section (".libperi")))SetPulseOC6(unsigned int pulse_start,unsigned int pulse_stop) ;

#ifndef LIB_BUILD
#define OpenOC56				OpenOC56_GB
#define SetDCOC56PWM			SetDCOC56PWM_GB
#endif

#define _OC56Interrupt  _OC5Interrupt

/***********************************************************************
Macro       : EnableIntOC56

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC56                   (IEC2bits.OC5IE = 1) 

/***********************************************************************
Macro       : DisableIntOC56

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC56                   (IEC2bits.OC5IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC56(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC56(priority)     (IPC10bits.OC5IP = priority)

/*******************************************************************
Macro       : OC56_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC56_Clear_Intr_Status_Bit     (IFS2bits.OC5IF = 0)

/***********************************************************************
Macro       : OC56TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC56TimerTrigStatus 		OC6CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC56TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC56TimerTrigSet  		OC6CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC56TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC56TimerTrigClear  		OC6CON2bits.TRIGSTAT = 0

void __attribute__ ((section (".libperi")))CloseOC56(void);

void __attribute__ ((section(".libperi")))ConfigIntOC56(unsigned int config) ;

unsigned long int __attribute__ ((section (".libperi")))ReadDCOC56PWM(void) ;

unsigned long int __attribute__ ((section (".libperi")))ReadPeriodOC56PWM(void) ;

unsigned long int __attribute__ ((section(".libperi")))ReadRegOC56(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC56_GB(unsigned int config1,unsigned int config2,unsigned long int value1,unsigned long int value2) ;

char __attribute__((section(".libperi")))SetDCOC56PWM_GB(unsigned long int dutycycle,unsigned long int period) ;

char __attribute__((section (".libperi")))SetPulseOC56(unsigned long int pulse_start,unsigned long int pulse_stop) ;

/*Registers Defaults*/
#ifndef LIB_BUILD
#define OpenOC7				OpenOC7_GB
#define SetDCOC7PWM			SetDCOC7PWM_GB
#endif
#define OC7RS_VALUE                0x0000
#define OC7R_VALUE                 0x0000
#define OC7CON_VALUE               0x0000

/***********************************************************************
Macro       : EnableIntOC7

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC7                   (IEC2bits.OC7IE = 1) 

/***********************************************************************
Macro       : DisableIntOC7

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC7                   (IEC2bits.OC7IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC7(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC7(priority)     (IPC10bits.OC7IP = priority)

/*******************************************************************
Macro       : OC7_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC7_Clear_Intr_Status_Bit     (IFS2bits.OC7IF = 0)

#if defined (ocmp_v2_2)
/***********************************************************************
Macro       : OC7PWMFaultStatus

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.
*************************************************************************/
#define OC7PWMFaultStatus 		OC7CON1bits.OCFLT0
#endif

#if defined (ocmp_v2_1) || defined (ocmp_v2_5)
/***********************************************************************
Macro       : OC7PWMFault_A_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC7PWMFault_A_Status         (OC7CON1bits.OCFLT0)

/***********************************************************************
Macro       : OC7PWMFault_B_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC7PWMFault_B_Status            (OC7CON1bits.OCFLT1)

/***********************************************************************
Macro       : OC7PWMFault_C_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC7PWMFault_C_Status           (OC7CON1bits.OCFLT2)
#endif


/***********************************************************************
Macro       : OC7TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC7TimerTrigStatus 			OC7CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC7TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC7TimerTrigSet  			OC7CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC7TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC7TimerTrigClear  			OC7CON2bits.TRIGSTAT = 0


void __attribute__ ((section (".libperi")))CloseOC7(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC7(unsigned int config) ;

unsigned int __attribute__ ((section (".libperi")))ReadDCOC7PWM(void) ;

unsigned int __attribute__ ((section (".libperi")))ReadPeriodOC7PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC7(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC7_GB(unsigned int config1,unsigned int config2,unsigned int value1,unsigned int value2) ;

char __attribute__ ((section(".libperi")))SetDCOC7PWM_GB(unsigned int dutycycle,unsigned int period) ;

char __attribute__((section (".libperi")))SetPulseOC7(unsigned int pulse_start,unsigned int pulse_stop) ;

#if defined (ocmp_v2_1) || defined (ocmp_v2_2)||defined (LIB_BUILD)

/*Registers Defaults*/
#ifndef LIB_BUILD
#define OpenOC8				OpenOC8_GB
#define SetDCOC8PWM			SetDCOC8PWM_GB
#endif
#define OC8RS_VALUE                0x0000
#define OC8R_VALUE                 0x0000
#define OC8CON_VALUE               0x0000

/***********************************************************************
Macro       : EnableIntOC8

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC8                   (IEC2bits.OC8IE = 1) 

/***********************************************************************
Macro       : DisableIntOC8

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC8                   (IEC2bits.OC8IE =0) 

/***********************************************************************
Macro       : SetPriorityIntOC8(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC8(priority)     (IPC11bits.OC8IP = priority)

/*******************************************************************
Macro       : OC8_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC8_Clear_Intr_Status_Bit     (IFS2bits.OC8IF = 0)

#if defined (ocmp_v2_2)
/***********************************************************************
Macro       : OC8PWMFaultStatus

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.
*************************************************************************/
#define OC8PWMFaultStatus 		OC8CON1bits.OCFLT0
#endif

#if defined (ocmp_v2_1) 
/***********************************************************************
Macro       : OC8PWMFault_A_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC8PWMFault_A_Status         (OC8CON1bits.OCFLT0)

/***********************************************************************
Macro       : OC8PWMFault_B_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC8PWMFault_B_Status            (OC8CON1bits.OCFLT1)

/***********************************************************************
Macro       : OC8PWMFault_C_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC8PWMFault_C_Status           (OC8CON1bits.OCFLT2)
#endif


/***********************************************************************
Macro       : OC8TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC8TimerTrigStatus 			OC8CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC8TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC8TimerTrigSet  			OC8CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC8TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC8TimerTrigClear  			OC8CON2bits.TRIGSTAT = 0


void __attribute__ ((section (".libperi")))CloseOC8(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC8(unsigned int config) ;

unsigned int __attribute__ ((section (".libperi")))ReadDCOC8PWM(void) ;

unsigned int __attribute__ ((section (".libperi")))ReadPeriodOC8PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC8(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC8_GB(unsigned int config1,unsigned int config2,unsigned int value1,unsigned int value2) ;

char __attribute__ ((section(".libperi")))SetDCOC8PWM_GB(unsigned int dutycycle,unsigned int period) ;

char __attribute__((section (".libperi")))SetPulseOC8(unsigned int pulse_start,unsigned int pulse_stop) ;

#ifndef LIB_BUILD
#define OpenOC78				OpenOC78_GB
#define SetDCOC78PWM			SetDCOC78PWM_GB
#endif

#define _OC78Interrupt _OC7Interrupt

/***********************************************************************
Macro       : EnableIntOC78

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC78                   (IEC2bits.OC7IE = 1) 

/***********************************************************************
Macro       : DisableIntOC78

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC78                   (IEC2bits.OC7IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC78(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC78(priority)     (IPC10bits.OC7IP = priority)

/*******************************************************************
Macro       : OC78_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC78_Clear_Intr_Status_Bit     (IFS2bits.OC7IF = 0)

/***********************************************************************
Macro       : OC78TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC78TimerTrigStatus 			OC8CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC78TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC78TimerTrigSet  			OC8CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC78TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC78TimerTrigClear  			OC8CON2bits.TRIGSTAT = 0


void __attribute__ ((section (".libperi")))CloseOC78(void);

void __attribute__ ((section(".libperi")))ConfigIntOC78(unsigned int config) ;

unsigned long int __attribute__ ((section (".libperi")))ReadDCOC78PWM(void) ;

unsigned long int __attribute__ ((section (".libperi")))ReadPeriodOC78PWM(void) ;

unsigned long int __attribute__ ((section(".libperi")))ReadRegOC78(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC78_GB(unsigned int config1,unsigned int config2,unsigned long int value1,unsigned long int value2) ;

char __attribute__((section(".libperi")))SetDCOC78PWM_GB(unsigned long int dutycycle,unsigned long int period) ;

char __attribute__((section (".libperi")))SetPulseOC78(unsigned long int pulse_start,unsigned long int pulse_stop) ;

/*Registers Defaults*/
#ifndef LIB_BUILD
#define OpenOC9				OpenOC9_GB
#define SetDCOC9PWM			SetDCOC9PWM_GB
#endif
#define OC9RS_VALUE                0x0000
#define OC9R_VALUE                 0x0000
#define OC9CON_VALUE               0x0000

/***********************************************************************
Macro       : EnableIntOC9

Include     : outcompare.h
 
Description : This macro enables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro sets Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define EnableIntOC9                   (IEC5bits.OC9IE = 1) 

/***********************************************************************
Macro       : DisableIntOC9

Include     : outcompare.h
 
Description : This macro disables the interrupt on output compare match.
 
Arguments   : None
 
Remarks     : This macro clears Output Compare (OC) Interrupt Enable bit of 
              Interrupt Enable Control register. 
*************************************************************************/
#define DisableIntOC9                   (IEC5bits.OC9IE = 0) 

/***********************************************************************
Macro       : SetPriorityIntOC9(priority)

Include     : outcompare.h
 
Description : This macro sets priority for output compare interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets OC Interrupt Priority bits of Interrupt Priority 
              Control register. 
*************************************************************************/
#define SetPriorityIntOC9(priority)     (IPC23bits.OC9IP = priority)

/*******************************************************************
Macro       : OC9_Clear_Intr_Status_Bit

Include     : outcompare.h 

Description : Macro to Clear Output compare Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define OC9_Clear_Intr_Status_Bit     (IFS5bits.OC9IF = 0)

#if defined (ocmp_v2_2)
/***********************************************************************
Macro       : OC9PWMFaultStatus

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.
*************************************************************************/
#define OC9PWMFaultStatus 		OC9CON1bits.OCFLT0
#endif

#if defined (ocmp_v2_1) 
/***********************************************************************
Macro       : OC9PWMFault_A_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC9PWMFault_A_Status         (OC9CON1bits.OCFLT0)

/***********************************************************************
Macro       : OC9PWMFault_B_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC9PWMFault_B_Status            (OC9CON1bits.OCFLT1)

/***********************************************************************
Macro       : OC9PWMFault_C_Status

Include     : outcompare.h
 
Description : Returns state of Output compare PWM Fault
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It sends True if PWM Fault condition has occured else false.. 
*************************************************************************/
#define OC9PWMFault_C_Status           (OC9CON1bits.OCFLT2)
#endif


/***********************************************************************
Macro       : OC9TimerTrigStatus

Include     : outcompare.h
 
Description : Returns status of Timer Trigger
 
Arguments   : None

Return      : TRUE/FALSE
 
Remarks     : It returns true if timer source is triggered and running 
              else fase indicates timer source is not triggered.
*************************************************************************/
#define OC9TimerTrigStatus 			OC9CON2bits.TRIGSTAT

/***********************************************************************
Macro       : OC9TimerTrigSet

Include     : outcompare.h
 
Description : Timer source triggers 
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been triggered and is running.
*************************************************************************/
#define OC9TimerTrigSet  			OC9CON2bits.TRIGSTAT = 1

/***********************************************************************
Macro       : OC9TimerTrigClear

Include     : outcompare.h
 
Description : Timer source not been triggerd
 
Arguments   : None

Return      : None.
 
Remarks     : Timer source has been been triggered and is being held clear.
*************************************************************************/
#define OC9TimerTrigClear  			OC9CON2bits.TRIGSTAT = 0


void __attribute__ ((section (".libperi")))CloseOC9(void) ;

void __attribute__ ((section(".libperi")))ConfigIntOC9(unsigned int config) ;

unsigned int __attribute__ ((section (".libperi")))ReadDCOC9PWM(void) ;

unsigned int __attribute__ ((section (".libperi")))ReadPeriodOC9PWM(void) ;

unsigned int __attribute__ ((section(".libperi")))ReadRegOC9(char reg) ;

void __attribute__ ((section(".libperi")))OpenOC9_GB(unsigned int config1,unsigned int config2,unsigned int value1,unsigned int value2) ;

char __attribute__ ((section(".libperi")))SetDCOC9PWM_GB(unsigned int dutycycle,unsigned int period) ;

char __attribute__((section (".libperi")))SetPulseOC9(unsigned int pulse_start,unsigned int pulse_stop) ;

#endif
#endif

#else	//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif /* __OUTCOMPARE_H */
