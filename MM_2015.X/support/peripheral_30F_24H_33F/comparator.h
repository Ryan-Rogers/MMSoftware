#if defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__PIC24H__)
#include <p24Hxxxx.h>
#elif defined(__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined(__PIC24E__)
#include <p24Exxxx.h>
#else
#error "Does not build on this target"
#endif


#ifndef __COMPARATOR_H /* COMPARATOR_H */
#define __COMPARATOR_H

 /*****************************************************************************
 *       COMPARATOR PERIPHERAL LIBRARY HEADER FILE
 ******************************************************************************
 * FileName:        comparator.h
 * Dependencies:    See include below
 * Processor:       PIC24H, dsPIC33F
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
 
 #include "peripheralversion.h"

/* List of SFRs for comparator */
/* This list contains the SFRs with default (POR) values to be used for configuring comparator module */
/* The user can modify this based on the requirement */

#define COMP_CVRCON_VAL    				0x0000
#define COMP_CMCON_VAL     				0x0000
#define	COMP_CMSTAT_VAL					0x0000
#define	COMP_CMMSKSRC_VAL				0x0000
#define	COMP_CMMSKCON_VAL				0x0000
#define	COMP_CMFLTR_VAL					0x0000

#ifdef	_COMPARATOR_V1
/*----------------------------------------------------------------------------------------------------*/
/* CMCON Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define CMP_IDLE_STOP               	0x8000 /* When device enters Idle mode, module does notgenerate interrupts.Module is still enabled. */
#define CMP_IDLE_CON                	0x0000 /* continue operation in idle mode */
#define CMP_IDLE_MASK               	(~CMP_IDLE_STOP)

#define CMP2_CHANGE_STATE           	0x2000 /* Comparator output changed states */ 
#define CMP2_NO_CHANGE             	 	0x0000 /* Comparator output did not change states */
#define CMP2_STATE_MASK             	(~CMP2_CHANGE_STATE )

#define CMP1_CHANGE_STATE           	0x1000 /* Comparator 1 output changed states */
#define CMP1_NO_CHANGE              	0x0000 /* Comparator 1 output did not change states */
#define CMP1_ENBL_DSBL_MASK         	(~CMP1_CHANGE_STATE )

#define CMP2_ENABLE                 	0x0800 /* Comparator 2 is enabled */
#define CMP2_DISABLE                	0x0000 /* Comparator 2 is disabled */
#define CMP2_ENBL_DSBL_MASK         	(~CMP2_ENABLE)

#define CMP1_ENABLE                 	0x0400 /* Comparator 1 is enabled */
#define CMP1_DISABLE                	0x0000 /* Comparator 1 is disabled */
#define CMP1_STATE_MASK             	(~CMP1_ENABLE)

#define CMP2_OUTPUT_ENABLE          	0x0200 /* Comparator 2 output driven on the output pad */
#define CMP2_OUTPUT_DISABLE         	0x0000 /* Comparator 2 output is not driven on the output pad */
#define CMP2_OUTPUT_MASK            	(~CMP2_OUTPUT_ENABLE)

#define CMP1_OUTPUT_ENABLE          	0x0100 /* Comparator 1 output driven on the output pad */ 
#define CMP1_OUTPUT_DISABLE         	0x0000 /* Comparator 1 output is not driven on the output pad */
#define CMP1_OUTPUT_MASK            	(~CMP1_OUTPUT_ENABLE)

#define CMP2_INV_OUTPUT             	0x0020 /* Comparator 2 output inverted */
#define CMP2_NORMAL_OUTPUT          	0x0000 /* Comparator 2 output not inverted */
#define CMP2_INV_OUTPUT_MASK        	(~CMP2_INV_OUTPUT)

#define CMP1_INV_OUTPUT             	0x0010 /* Comparator 1 output inverted */
#define CMP1_NORMAL_OUTPUT          	0x0000 /* Comparator 1 output not inverted */
#define CMP1_INV_OUTPUT_MASK        	(~CMP1_INV_OUTPUT)

#define CMP2_NEG_IP_Vin_Pos        		0x0008 /* Input is connected to Vin+ */
#define CMP2_NEG_IP_Vin_Neg        		0x0000 /* Input is connected to Vin- */
#define CMP2_NEG_IP_MASK           		(~CMP2_NEG_IP_Vin_Pos)

#define CMP2_POS_IP_Vin_Pos        		0x0004 /* Input is connected to Vin+ */
#define CMP2_POS_IP_CV_Ref         		0x0000 /* Input is connected to Vin- */
#define CMP2_POS_IP_MASK           		(~CMP2_POS_IP_Vin_Pos)

#define CMP1_NEG_IP_Vin_Pos        		0x0002 /* Input is connected to Vin+ */
#define CMP1_NEG_IP_Vin_Neg        		0x0000 /* Input is connected to Vin- */
#define CMP1_NEG_IP_MASK           		(~CMP1_NEG_IP_Vin_Pos)

#define CMP1_POS_IP_Vin_Pos        		0x0001 /* Input is connected to Vin+ */
#define CMP1_POS_IP_CV_Ref         		0x0000 /* Input is connected to Vin- */
#define CMP1_POS_IP_MASK           		(~CMP1_POS_IP_Vin_Pos)

/*----------------------------------------------------------------------------------------------------*/
/* CVRCON Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define CMP_VRef_ENABLE            		0x0080 /* CVREF circuit powered on */
#define CMP_VRef_DISABLE           		0x0000 /* CVREF circuit powered down */
#define CMP_VRef_MASK             		(~CMP_VRef_ENABLE)

#define CMP_VRef_OUTPUT_ENABLE     		0x0040 /* CVREF voltage level is output on CVREF pin */
#define CMP_VRef_OUTPUT_DISABLE    		0x0000 /* CVREF voltage level is disconnected from CVREF pin */
#define CMP_VRef_OUTPUT_MASK       		(~CMP_VRef_OUTPUT_ENABLE)

#define CMP_VRef_SELECT_24_STEPS   		0x0020 /* 0 to 0.67 CVRSRC, with CVRSRC/24 step size */
#define CMP_VRef_SELECT_32_STEPS   		0x0000 /* 0.25 CVRSRC to 0.75 CVRSRC, with CVRSRC/32 step size */
#define CMP_VRef_STEP_SELECT_MASK  		(~CMP_VRef_SELECT_24_STEPS) /* 0 to 0.67 CVRSRC, with CVRSRC/24 step size */

#define CMP_Vrsrc_VrefPos_VrefNeg  		0x0010 /* Comparator reference source CVRSRC = VREF+ – VREF- */
#define CMP_Vrsrc_AVDD_AVSS        		0x0000 /* Comparator reference source CVRSRC = AVDD – AVSS */ 
#define CMP_Vrsrc_MASK             		(~CMP_Vrsrc_VrefPos_VrefNeg)


#define CMP_0p0CVrsrc_OR_0p25CVrsrc      0x0000 /*CVREF = 0/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (0/32) • (CVRSRC) */
#define CMP_0p04CVrsrc_OR_0p28CVrsrc     0x0001 /*CVREF = 1/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (1/32) • (CVRSRC) */
#define CMP_0p08CVrsrc_OR_0p31CVrsrc     0x0002 /*CVREF = 2/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (2/32) • (CVRSRC) */
#define CMP_0p12CVrsrc_OR_0p34CVrsrc     0x0003 /*CVREF = 3/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (3/32) • (CVRSRC) */
#define CMP_0p16CVrsrc_OR_0p37CVrsrc     0x0004 /*CVREF = 4/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (4/32) • (CVRSRC) */
#define CMP_0p20CVrsrc_OR_0p40CVrsrc     0x0005 /*CVREF = 5/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (5/32) • (CVRSRC) */
#define CMP_0p25CVrsrc_OR_0p43CVrsrc     0x0006 /*CVREF = 6/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (6/32) • (CVRSRC) */
#define CMP_0p29CVrsrc_OR_0p46CVrsrc     0x0007 /*CVREF = 7/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (7/32) • (CVRSRC) */
#define CMP_0p33CVrsrc_OR_0p50CVrsrc     0x0008 /*CVREF = 8/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (8/32) • (CVRSRC) */
#define CMP_0p37CVrsrc_OR_0p53CVrsrc     0x0009 /*CVREF = 9/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (9/32) • (CVRSRC) */
#define CMP_0p41CVrsrc_OR_0p56CVrsrc     0x000A /*CVREF = 10/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (10/32) • (CVRSRC) */
#define CMP_0p45CVrsrc_OR_0p59CVrsrc     0x000B /*CVREF = 11/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (11/32) • (CVRSRC) */
#define CMP_0p50CVrsrc_OR_0p62CVrsrc     0x000C /*CVREF = 12/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (12/32) • (CVRSRC) */
#define CMP_0p54CVrsrc_OR_0p65CVrsrc     0x000D /*CVREF = 13/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (13/32) • (CVRSRC) */
#define CMP_0p58CVrsrc_OR_0p68CVrsrc     0x000E /*CVREF = 14/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (14/32) • (CVRSRC) */
#define CMP_0p62CVrsrc_OR_0p71CVrsrc     0x000F /*CVREF = 15/ 24) • (CVRSRC) OR  1/4 • (CVRSRC) + (15/32) • (CVRSRC) */
#define CMP_VRef_SELECT_MASK             (~CMP_0p62CVrsrc_OR_0p71CVrsrc)

/*----------------------------------------------------------------------------------------------------*/
/* Enable/Disable Comparator interrupt : */
/*----------------------------------------------------------------------------------------------------*/
#define CMP_INT_ENABLE					  0x0001  /*Comparator Interrupt Enable */
#define CMP_INT_DISABLE					  0x0000  /*Comparator Interrupt Disable */

/*----------------------------------------------------------------------------------------------------*/
/* Comparator interrupt priority : */
/*----------------------------------------------------------------------------------------------------*/

#define CMP_INT_PR7					0x0007  /* Comparator Interrupt Priority 7 (High Priority) */
#define CMP_INT_PR6					0x0006  /* Comparator Interrupt Priority 6                 */
#define CMP_INT_PR5					0x0005  /* Comparator Interrupt Priority 5                 */
#define CMP_INT_PR4					0x0004  /* Comparator Interrupt Priority 4                 */
#define CMP_INT_PR3					0x0003  /* Comparator Interrupt Priority 3                 */
#define CMP_INT_PR2					0x0002  /* Comparator Interrupt Priority 2                 */
#define CMP_INT_PR1					0x0001  /* Comparator Interrupt Priority 1 (Low Priority)  */
#define CMP_INT_DIS					0x0000  /* Comparator Interrupt Priority Disabled          */


/*****************************Function prototypes**************************************************/

void ConfigCMP(unsigned int config1) __attribute__((section (".libperi")));
void ConfigCMPCVref(unsigned int config1) __attribute__((section (".libperi")));
void ConfigIntCMP(unsigned int cmp_intp, unsigned int cmp_Intp_priority) __attribute__((section (".libperi")));


/*******************************************Macros******************************************/

/******************************************************************************
 Macro      : CMP1_EnblDsbl(state)
 Include    : comparator.h
 Description: Macro Enables/Disables the Comparator 1
 Arguments  : state  1 Comparator is enabled 
                    0 Comparator is disabled
 Remarks    : None
 *****************************************************************************/
#define CMP1_EnblDsbl(state)      		(CMCONbits.C1EN = state)


/******************************************************************************
 Macro      : CMP2_EnblDsbl(state)
 Include    : comparator.h
 Description: Macro Enables/Disables the Comparator 2
 Arguments  : state  1 Comparator is enabled 
                     0 Comparator is disabled
 Remarks    : None
 *****************************************************************************/
#define CMP2_EnblDsbl(state)      		(CMCONbits.C2EN = state)

/******************************************************************************
 Macro       : CMP1_Output_EnblDsbl(state) 
 Include     : comparator.h 
 Description : Macro Enables/Disables Comparator 1 output on the output pad 
 Arguments   : state  1 Comparator output driven on the output pad 
                     0 Comparator output is not driven on the output pad
 Remarks     : None
 *****************************************************************************/
#define CMP1_Output_EnblDsbl(state)    (CMCONbits.C1OUTEN = state)

/******************************************************************************
 Macro       : CMP2_Output_EnblDsbl(state) 
 Include     : comparator.h 
 Description : Macro Enables/Disables Comparator 2 output on the output pad 
 Arguments   : state  1 Comparator output driven on the output pad 
                     0 Comparator output is not driven on the output pad
 Remarks     : None
*****************************************************************************/
#define CMP2_Output_EnblDsbl(state)    (CMCONbits.C2OUTEN = state)

/******************************************************************************
 Macro       : CMP1_Get_STATE() 
 Include     : comparator.h 
 Description : Macro Returns state of Comparator output
              When  C2INV = 0:
               1 = C2 VIN+ > C2 VIN-
               0 = C2 VIN+ < C2 VIN
              When   C2INV = 1:
               0 = C2 VIN+ > C2 VIN-
               1 = C2 VIN+ < C2 VIN- 
 Arguments   : None 
 Remarks     : State of Comparator depends on Inverse selection  bit in
              control register            
 ****************************************************************************/
#define CMP1_Get_STATE()      			(CMCONbits.C1OUT)

/******************************************************************************
 Macro       : CMP2_Get_STATE() 
 Include     : comparator.h 
 Description : Macro Returns state of Comparator output
              When  C2INV = 0:
               1 = C2 VIN+ > C2 VIN-
               0 = C2 VIN+ < C2 VIN
              When   C2INV = 1:
               0 = C2 VIN+ > C2 VIN-
               1 = C2 VIN+ < C2 VIN- 
 Arguments   : None 
 Remarks     : State of Comparator depends on Inverse selection  bit in 
              control register
 *****************************************************************************/
#define CMP2_Get_STATE()      			(CMCONbits.C2OUT)

/* Macros to  Enable/Disable interrupts and set Interrupt priority of Comparator */

/***********************************************************************
Macro			:EnableIntCMP
Include			:Comparator.h
Description		:This macro Enables CMP  Interrupt
Arguments		:None.
Remarks:		:This macro sets comparator Interrupt Enable bit of Interrupt 
             	 Enable Control Register.
************************************************************************/ 
#define EnableIntCMP                    asm("BSET IEC1,#2")

/***********************************************************************
Macro      : DisableIntCMP
Include    : comparator.h 
Description: This macro disables the comparator interrupt.
Arguments  : None
Remarks    : This macro clears comparator Interrupt Enable bit of Interrupt 
             Enable Control register.
************************************************************************/ 
#define DisableIntCMP                   asm("BCLR IEC1,#2")

/***********************************************************************
Macro      : SetPriorityIntCMP 
Include    : comparator.h 
Description: This macro sets priority for comparator interrupt. 
Arguments  : priority 
Remarks    : This macro sets comparator Interrupt Priority bits of Interrupt 
             Priority Control register.
************************************************************************/  
#define SetPriorityIntCMP(priority)     (IPC4bits.CMIP = priority)

#endif

#if defined (_COMPARATOR_V2) || defined (_COMPARATOR_V3)

/*----------------------------------------------------------------------------------------------------*/
/* CMSTAT Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/
#define CMP_IDLE_STOP					0x8000
#define CMP_IDLE_CONT					0x0000

/* Comparator event trigger bits */
#define CMP_C5EVT_OCCUR					0x1000
#define CMP_C5EVT_NOT_OCCUR				0x0000
#define CMP_C4EVT_OCCUR					0x0800
#define CMP_C4EVT_NOT_OCCUR				0x0000
#define CMP_C3EVT_OCCUR					0x0400
#define CMP_C3EVT_NOT_OCCUR				0x0000
#define CMP_C2EVT_OCCUR					0x0200
#define CMP_C2EVT_NOT_OCCUR				0x0000
#define CMP_C1EVT_OCCUR					0x0100
#define CMP_C1EVT_NOT_OCCUR				0x0000

/*----------------------------------------------------------------------------------------------------*/
/* CMCON Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/
#if defined (_COMPARATOR_V3) && defined (_C5EVT)

#define	CMP_INVERT_TO_CXIN1				0x0000
#define	CMP_INVERT_TO_CXIN2				0x0001
#define	CMP_INVERT_TO_CXIN3				0x0002
#define	CMP_INVERT_TO_CXIN4				0x0003

#else

#define	CMP_INVERT_TO_CINB				0x0000
#define	CMP_INVERT_TO_CINC				0x0001
#define	CMP_INVERT_TO_CIND				0x0002
#define	CMP_INVERT_TO_VBG_2				0x0003

#endif

#if defined (_COMPARATOR_V3) && defined (_C5EVT)

#define	CMP_NI_INPUT_CXIN1				0x0000

#else

#define	CMP_NI_INPUT_CINA				0x0000

#endif

#define	CMP_NI_INPUT_CVREF				0x0010

#define	CMP_TRIGGER_DISABLE				0x0000
#define	CMP_TRIGGER_LO_HI				0x0040
#define	CMP_TRIGGER_HI_LO				0x0080
#define	CMP_TRIGGER_ANY_CHANGE				0x00C0

#define	CMP_OUTPUT_NOT_INVERTED			0x0000
#define	CMP_OUTPUT_INVERTED				0x2000

#define	CMP_OUTPUT_DISABLE				0x0000
#define	CMP_OUTPUT_ENABLE				0x4000

#define	CMP_DISABLE						0x0000
#define	CMP_ENABLE						0x8000

#define CMP_CEVT_OCCUR					0x0200
#define CMP_CEVT_NOT_OCCUR				0x0000

#ifdef _COMPARATOR_V3	
	#define CMP_OAO_ENABLE		0x0800
	#define CMP_OAO_DISABLE		0x0000
	#define CMP_OPMODE_OA	0x0400
	#define CMP_OPMODE_CMP  0x0000
#endif	// _COMPARATOR_V3


/*----------------------------------------------------------------------------------------------------*/
/* CMMSKSRC Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/
#ifdef _COMPARATOR_V2

#define	CMP_MASK_A_INPUT_PWM1			0x0000
#define	CMP_MASK_A_INPUT_PWM2			0x0001
#define	CMP_MASK_A_INPUT_PWM3			0x0002
#define	CMP_MASK_A_INPUT_PWM4			0x0003
#define	CMP_MASK_A_INPUT_PWM5			0x0004
#define	CMP_MASK_A_INPUT_PWM6			0x0005
#define	CMP_MASK_A_INPUT_PWM7			0x0006
#define	CMP_MASK_A_INPUT_PWM8			0x0007
#define	CMP_MASK_A_INPUT_PWM9			0x0008
#define	CMP_MASK_A_INPUT_OC1			0x0009
#define	CMP_MASK_A_INPUT_OC2			0x000A
#define	CMP_MASK_A_INPUT_OC3			0x000B
#define	CMP_MASK_A_INPUT_OC4			0x000C
#define	CMP_MASK_A_INPUT_OC5			0x000D
#define	CMP_MASK_A_INPUT_FLT1B			0x000E
#define	CMP_MASK_A_INPUT_FLT2B			0x000F

#define	CMP_MASK_B_INPUT_PWM1			0x0000
#define	CMP_MASK_B_INPUT_PWM2			0x0010
#define	CMP_MASK_B_INPUT_PWM3			0x0020
#define	CMP_MASK_B_INPUT_PWM4			0x0030
#define	CMP_MASK_B_INPUT_PWM5			0x0040
#define	CMP_MASK_B_INPUT_PWM6			0x0050
#define	CMP_MASK_B_INPUT_PWM7			0x0060
#define	CMP_MASK_B_INPUT_PWM8			0x0070
#define	CMP_MASK_B_INPUT_PWM9			0x0080
#define	CMP_MASK_B_INPUT_OC1			0x0090
#define	CMP_MASK_B_INPUT_OC2			0x00A0
#define	CMP_MASK_B_INPUT_OC3			0x00B0
#define	CMP_MASK_B_INPUT_OC4			0x00C0
#define	CMP_MASK_B_INPUT_OC5			0x00D0
#define	CMP_MASK_B_INPUT_FLT1B			0x00E0
#define	CMP_MASK_B_INPUT_FLT2B			0x00F0

#define	CMP_MASK_C_INPUT_PWM1			0x0000
#define	CMP_MASK_C_INPUT_PWM2			0x0100
#define	CMP_MASK_C_INPUT_PWM3			0x0200
#define	CMP_MASK_C_INPUT_PWM4			0x0300
#define	CMP_MASK_C_INPUT_PWM5			0x0400
#define	CMP_MASK_C_INPUT_PWM6			0x0500
#define	CMP_MASK_C_INPUT_PWM7			0x0600
#define	CMP_MASK_C_INPUT_PWM8			0x0700
#define	CMP_MASK_C_INPUT_PWM9			0x0800
#define	CMP_MASK_C_INPUT_OC1			0x0900
#define	CMP_MASK_C_INPUT_OC2			0x0A00
#define	CMP_MASK_C_INPUT_OC3			0x0B00
#define	CMP_MASK_C_INPUT_OC4			0x0C00
#define	CMP_MASK_C_INPUT_OC5			0x0D00
#define	CMP_MASK_C_INPUT_FLT1B			0x0E00
#define	CMP_MASK_C_INPUT_FLT2B			0x0F00

#elif defined (_COMPARATOR_V3)

#define	CMP_MASK_C_INPUT_PWML1			0x0000
#define	CMP_MASK_C_INPUT_PWMH1			0x0100
#define	CMP_MASK_C_INPUT_PWML2			0x0200
#define	CMP_MASK_C_INPUT_PWMH2			0x0300
#define	CMP_MASK_C_INPUT_PWML3			0x0400
#define	CMP_MASK_C_INPUT_PWMH3			0x0500
#ifdef _C5EVT
#define	CMP_MASK_C_INPUT_PWML4			0x0600
#define	CMP_MASK_C_INPUT_PWMH4			0x0700
#define	CMP_MASK_C_INPUT_PWML5			0x0800
#define	CMP_MASK_C_INPUT_PWMH5			0x0900
#define	CMP_MASK_C_INPUT_PWML6			0x0A00
#define	CMP_MASK_C_INPUT_PWMH6			0x0B00
#endif
#define	CMP_MASK_C_INPUT_PTGO18			0x0C00
#define	CMP_MASK_C_INPUT_PTGO19			0x0D00
#define	CMP_MASK_C_INPUT_FLT2			0x0E00
#define	CMP_MASK_C_INPUT_FLT4			0x0F00

#define	CMP_MASK_B_INPUT_PWML1			0x0000
#define	CMP_MASK_B_INPUT_PWMH1			0x0010
#define	CMP_MASK_B_INPUT_PWML2			0x0020
#define	CMP_MASK_B_INPUT_PWMH2			0x0030
#define	CMP_MASK_B_INPUT_PWML3			0x0040
#define	CMP_MASK_B_INPUT_PWMH3			0x0050
#ifdef _C5EVT
#define	CMP_MASK_B_INPUT_PWML4			0x0060
#define	CMP_MASK_B_INPUT_PWMH4			0x0070
#define	CMP_MASK_B_INPUT_PWML5			0x0080
#define	CMP_MASK_B_INPUT_PWMH5			0x0090
#define	CMP_MASK_B_INPUT_PWML6			0x00A0
#define	CMP_MASK_B_INPUT_PWMH6			0x00B0
#endif
#define	CMP_MASK_B_INPUT_PTGO18			0x00C0
#define	CMP_MASK_B_INPUT_PTGO19			0x00D0
#define	CMP_MASK_B_INPUT_FLT2			0x00E0
#define	CMP_MASK_B_INPUT_FLT4			0x00F0

#define	CMP_MASK_A_INPUT_PWML1			0x0000
#define	CMP_MASK_A_INPUT_PWMH1			0x0001
#define	CMP_MASK_A_INPUT_PWML2			0x0002
#define	CMP_MASK_A_INPUT_PWMH2			0x0003
#define	CMP_MASK_A_INPUT_PWML3			0x0004
#define	CMP_MASK_A_INPUT_PWMH3			0x0005
#ifdef _C5EVT
#define	CMP_MASK_A_INPUT_PWML4			0x0006
#define	CMP_MASK_A_INPUT_PWMH4			0x0007
#define	CMP_MASK_A_INPUT_PWML5			0x0008
#define	CMP_MASK_A_INPUT_PWMH5			0x0009
#define	CMP_MASK_A_INPUT_PWML6			0x000A
#define	CMP_MASK_A_INPUT_PWMH6			0x000B
#endif
#define	CMP_MASK_A_INPUT_PTGO18			0x000C
#define	CMP_MASK_A_INPUT_PTGO19			0x000D
#define	CMP_MASK_A_INPUT_FLT2			0x000E
#define	CMP_MASK_A_INPUT_FLT4			0x000F

#endif
/*----------------------------------------------------------------------------------------------------*/
/* CMMSKCON Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/
#define CMP_A_INV_AND_DISABLE				0x0000
#define CMP_A_INV_AND_ENABLE				0x0001

#define CMP_A_AND_DISABLE					0x0000
#define CMP_A_AND_ENABLE					0x0002

#define CMP_B_INV_AND_DISABLE				0x0000
#define CMP_B_INV_AND_ENABLE				0x0004

#define CMP_B_AND_DISABLE					0x0000
#define CMP_B_AND_ENABLE					0x0008

#define CMP_C_INV_AND_DISABLE				0x0000
#define CMP_C_INV_AND_ENABLE				0x0010

#define CMP_C_AND_DISABLE					0x0000
#define CMP_C_AND_ENABLE					0x0020

#define CMP_POS_OUT_AND_DISABLE				0x0000
#define CMP_POS_OUT_AND_ENABLE				0x0040

#define CMP_NEG_OUT_AND_DISABLE				0x0000
#define CMP_NEG_OUT_AND_ENABLE				0x0080

#define CMP_A_INV_OR_DISABLE				0x0000
#define CMP_A_INV_OR_ENABLE					0x0100

#define CMP_A_OR_DISABLE					0x0000
#define CMP_A_OR_ENABLE						0x0200

#define CMP_B_INV_OR_DISABLE				0x0000
#define CMP_B_INV_OR_ENABLE					0x0400

#define CMP_B_OR_DISABLE					0x0000
#define CMP_B_OR_ENABLE						0x0800

#define CMP_C_INV_OR_DISABLE				0x0000
#define CMP_C_INV_OR_ENABLE					0x1000

#define CMP_C_OR_DISABLE					0x0000
#define CMP_C_OR_ENABLE						0x2000

#define	CMP_DEASSERT_STATE_0				0x0000
#define	CMP_DEASSERT_STATE_1				0x8000
/*----------------------------------------------------------------------------------------------------*/
/* CMFLTR Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/
#define	CMP_OUT_FLTR_PRESCALE_1				0x0000
#define	CMP_OUT_FLTR_PRESCALE_2				0x0001
#define	CMP_OUT_FLTR_PRESCALE_4				0x0002
#define	CMP_OUT_FLTR_PRESCALE_8				0x0003
#define	CMP_OUT_FLTR_PRESCALE_16			0x0004
#define	CMP_OUT_FLTR_PRESCALE_32			0x0005
#define	CMP_OUT_FLTR_PRESCALE_64			0x0006
#define	CMP_OUT_FLTR_PRESCALE_128			0x0007

#define	CMP_DIG_FLTR_DISABLE				0x0000		
#define	CMP_DIG_FLTR_ENABLE					0x0008

#ifdef _COMPARATOR_V3
	#define	CMP_FLTR_CLOCK_TCY				0x0000
	#define	CMP_FLTR_CLOCK_FOSC				0x0010
	#define	CMP_FLTR_CLOCK_SYNCO1			0x0020
	#ifdef _C5EVT
	#define CMP_FLTR_CLOCK_SYNCO2			0x0030
	#endif
	#define	CMP_FLTR_CLOCK_TIMER2			0x0040
	#define	CMP_FLTR_CLOCK_TIMER3			0x0050
	#define	CMP_FLTR_CLOCK_TIMER4			0x0060
	#define	CMP_FLTR_CLOCK_TIMER5			0x0070

#else

	#ifndef _CTMUIF

	#define	CMP_FLTR_CLOCK_TCY					0x0000
	#define	CMP_FLTR_CLOCK_PMPWM				0x0020
	#define	CMP_FLTR_CLOCK_SMPWM				0x0030
	#define	CMP_FLTR_CLOCK_TIMER2				0x0040
	#define	CMP_FLTR_CLOCK_TIMER3				0x0050
	#define	CMP_FLTR_CLOCK_TIMER4				0x0060
	#define	CMP_FLTR_CLOCK_TIMER5				0x0070

	#else

	#define	CMP_FLTR_CLOCK_TCY					0x0000
	#define	CMP_FLTR_CLOCK_PMPWM				0x0010
	#define	CMP_FLTR_CLOCK_TIMER2				0x0020

#endif

#endif	// _COMPARATOR_V3


/*----------------------------------------------------------------------------------------------------*/
/* CVRCON Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/
#if defined (_C5EVT) && defined (_COMPARATOR_V3)

#define	CMP_REF_0250CVrsrc					0x0000
#define	CMP_REF_0281CVrsrc					0x0001
#define	CMP_REF_0312CVrsrc					0x0002
#define	CMP_REF_0344CVrsrc					0x0003
#define	CMP_REF_0375CVrsrc					0x0004
#define	CMP_REF_0406CVrsrc					0x0005
#define	CMP_REF_0437CVrsrc					0x0006
#define	CMP_REF_0468CVrsrc					0x0007
#define	CMP_REF_0500CVrsrc					0x0008
#define	CMP_REF_0531CVrsrc					0x0009
#define	CMP_REF_0562CVrsrc					0x000A
#define	CMP_REF_0594CVrsrc					0x000B
#define	CMP_REF_0625CVrsrc					0x000C
#define	CMP_REF_0656CVrsrc					0x000D
#define	CMP_REF_0687CVrsrc					0x000E
#define	CMP_REF_0719CVrsrc					0x000F

#define	CMP_REF_0000CVrsrc					0x0020
#define	CMP_REF_0042CVrsrc					0x0021
#define	CMP_REF_0083CVrsrc					0x0022
#define	CMP_REF_0125CVrsrc					0x0023
#define	CMP_REF_0167CVrsrc					0x0024
#define	CMP_REF_0208CVrsrc					0x0025
#define	CMP_REF_0250_1CVrsrc				0x0026
#define	CMP_REF_0292CVrsrc					0x0027
#define	CMP_REF_0333CVrsrc					0x0028
#define	CMP_REF_0375_1CVrsrc				0x0029
#define	CMP_REF_0417CVrsrc					0x002A
#define	CMP_REF_0458CVrsrc					0x002B
#define	CMP_REF_0500_1CVrsrc				0x002C
#define	CMP_REF_0542CVrsrc					0x002D
#define	CMP_REF_0583CVrsrc					0x002E
#define	CMP_REF_0625_1CVrsrc				0x002F

#define	CMP_REF_0333_1CVrsrc				0x0800
#define	CMP_REF_0374CVrsrc					0x0801
#define	CMP_REF_0416CVrsrc					0x0802
#define	CMP_REF_0458_1CVrsrc				0x0803
#define	CMP_REF_0500_2CVrsrc				0x0804
#define	CMP_REF_0541CVrsrc					0x0805
#define	CMP_REF_0583_1CVrsrc				0x0806
#define	CMP_REF_0624CVrsrc					0x0807
#define	CMP_REF_0666CVrsrc					0x0808
#define	CMP_REF_0708CVrsrc					0x0809
#define	CMP_REF_0749CVrsrc					0x080A
#define	CMP_REF_0791CVrsrc					0x080B
#define	CMP_REF_0833CVrsrc					0x080C
#define	CMP_REF_0875CVrsrc					0x080D
#define	CMP_REF_0916CVrsrc					0x080E
#define	CMP_REF_0958CVrsrc					0x080F

#define	CMP_REF_0000_1CVrsrc				0x0820
#define	CMP_REF_00625_1CVrsrc				0x0821
#define	CMP_REF_0125_1CVrsrc				0x0822
#define	CMP_REF_0188CVrsrc					0x0823
#define	CMP_REF_0250_2CVrsrc				0x0824
#define	CMP_REF_03125CVrsrc					0x0825
#define	CMP_REF_0375_2CVrsrc				0x0826
#define	CMP_REF_04375CVrsrc					0x0827
#define	CMP_REF_0500_3CVrsrc				0x0828
#define	CMP_REF_05625CVrsrc					0x0829
#define	CMP_REF_0625_2CVrsrc				0x082A
#define	CMP_REF_0688CVrsrc					0x082B
#define	CMP_REF_0750CVrsrc					0x082C
#define	CMP_REF_0813CVrsrc					0x082D
#define	CMP_REF_0875_1CVrsrc				0x082E
#define	CMP_REF_0938CVrsrc					0x082F

#else

#define	CMP_REF_0250CVrsrc					0x0000
#define	CMP_REF_0281CVrsrc					0x0001
#define	CMP_REF_0312CVrsrc					0x0002
#define	CMP_REF_0344CVrsrc					0x0003
#define	CMP_REF_0375CVrsrc					0x0004
#define	CMP_REF_0406CVrsrc					0x0005
#define	CMP_REF_0437CVrsrc					0x0006
#define	CMP_REF_0468CVrsrc					0x0007
#define	CMP_REF_0500CVrsrc					0x0008
#define	CMP_REF_0531CVrsrc					0x0009
#define	CMP_REF_0562CVrsrc					0x000A
#define	CMP_REF_0594CVrsrc					0x000B
#define	CMP_REF_0625CVrsrc					0x000C
#define	CMP_REF_0656CVrsrc					0x000D
#define	CMP_REF_0687CVrsrc					0x000E
#define	CMP_REF_0719CVrsrc					0x000F

#define	CMP_REF_0000CVrsrc					0x0020
#define	CMP_REF_0042CVrsrc					0x0021
#define	CMP_REF_0083CVrsrc					0x0022
#define	CMP_REF_0125CVrsrc					0x0023
#define	CMP_REF_0167CVrsrc					0x0024
#define	CMP_REF_0208CVrsrc					0x0025
#define	CMP_REF_0250_1CVrsrc				0x0026
#define	CMP_REF_0292CVrsrc					0x0027
#define	CMP_REF_0333CVrsrc					0x0028
#define	CMP_REF_0375_1CVrsrc				0x0029
#define	CMP_REF_0417CVrsrc					0x002A
#define	CMP_REF_0458CVrsrc					0x002B
#define	CMP_REF_0500_1CVrsrc				0x002C
#define	CMP_REF_0542CVrsrc					0x002D
#define	CMP_REF_0583CVrsrc					0x002E
#define	CMP_REF_0625_1CVrsrc				0x002F

#endif

#define	CMP_REF_AVDD_AVSS					0x0000		
#define	CMP_REF_VREF_VREF					0x0010

#define	CMP_OUT_CVREF_DISABLE				0x0000
#define	CMP_OUT_CVREF_ENABLE				0x0040

#define	CMP_VOLT_REF_OFF					0x0000	
#define	CMP_VOLT_REF_ON						0x0080

#define	CMP_NON_INV_REF_1_2					0x0000
#define	CMP_NON_INV_REF_0_6					0x0100
#define	CMP_NON_INV_REF_0_2					0x0200
#define	CMP_NON_INV_REF_VREF				0x0300

#define	CMP_INV_REF_DAC						0x0000
#define	CMP_INV_REF_VREF					0x0400

#ifdef _COMPARATOR_V3
	#ifndef _C5EVT
	#define	CMP_REFBY2_ENABLE		0x4000
	#define	CMP_REFBY2_DISABLE	0x0000
	#endif

#endif	// _COMPARATOR_V3


/* Setting the priority of CMP interrupt */

#define CMP_INT_PRI_0               0x0000
#define CMP_INT_PRI_1               0x0001
#define CMP_INT_PRI_2               0x0002
#define CMP_INT_PRI_3               0x0003
#define CMP_INT_PRI_4               0x0004
#define CMP_INT_PRI_5               0x0005
#define CMP_INT_PRI_6               0x0006
#define CMP_INT_PRI_7               0x0007

/* Enable / Disable CMP interrupt */

#define CMP_INT_ENABLE              0x0001  /* Set the Interrupt enable bit */
#define CMP_INT_DISABLE             0x0000  /* Clear the Interrupt enable bit */

/* Macros to  Enable/Disable interrupts and set Interrupt priority of CMP */

#define EnableIntCMP                    _CMIE = 1
#define DisableIntCMP                   _CMIE = 0
#define SetPriorityIntCMP(priority)     _CMIP = priority

#ifdef _C1EVT
void ConfigCMP1(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__((section (".libperi")));
#endif

#ifdef _C2EVT
void ConfigCMP2(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__((section (".libperi")));
#endif

#ifdef _C3EVT
void ConfigCMP3(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__((section (".libperi")));
#endif

#ifdef _C4EVT
void ConfigCMP4(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__((section (".libperi")));
#endif

#ifdef _C5EVT
void ConfigCMP5(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__((section (".libperi")));
#endif

#ifdef _C5EVT
void ConfigCMPCVref(unsigned int config1, unsigned int config2) __attribute__((section (".libperi")));
#else
void ConfigCMPCVref(unsigned int config1) __attribute__((section (".libperi")));
#endif

void ConfigIntCMP(unsigned int cmp_intp, unsigned int cmp_Intp_priority) __attribute__((section (".libperi")));
unsigned int ReadCMPStatus(void) __attribute__((section (".libperi")));

#endif

#endif  /* __COMPARATOR_H */
