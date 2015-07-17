#ifndef __COMPARATOR_H /* COMPARATOR_H */
#define __COMPARATOR_H

 /*****************************************************************************
 *       COMPARATOR PERIPHERAL LIBRARY HEADER FILE
 ******************************************************************************
 * FileName:        comparator.h
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
#if defined (cmp_v1_1) || defined (cmp_v2_1) || defined (cmp_v2_2) || defined (cmp_v2_3) ||\
	defined (cmp_v2_4) || defined (cmp_v2_5) || defined (cmp_v2_6) || defined (cmp_v2_7) || defined (cmp_v2_8)||\
	defined (cmp_v2_9) || defined (cmp_v2_10) || defined (cmp_v3_1) || defined (LIB_BUILD)

#if defined (cmp_v1_1) 
/*Registers Defaults*/
#define COMP_CVRCON_VAL    				0x0000
#define COMP_CMCON_VAL     				0x0000

/*CMCON register definition*/
#define CMP_IDLE_STOP               	0x8000 /* When device enters Idle mode, module does notgenerate interrupts.Module is still enabled. */
#define CMP_IDLE_CON                	0x0000 /* continue operation in idle mode */
#define CMP_IDLE_MASK               	(~CMP_IDLE_STOP)

#define CMP2_CHANGE_STATE           	0x2000 /* Comparator output changed states */
#define CMP2_NO_CHANGE             	 	0x0000 /* Comparator output did not change states */
#define CMP2_STATE_MASK             	(~CMP2_CHANGE_STATE )

#define CMP1_CHANGE_STATE           	0x1000 /* Comparator output changed states */
#define CMP1_NO_CHANGE              	0x0000 /* Comparator output did not change states */
#define CMP1_ENBL_DSBL_MASK         	(~CMP1_CHANGE_STATE )

#define CMP2_ENABLE                 	0x0800 /* Comparator is enabled */
#define CMP2_DISABLE                	0x0000 /* Comparator is disabled */
#define CMP2_ENBL_DSBL_MASK         	(~CMP2_ENABLE)

#define CMP1_ENABLE                 	0x0400 /* Comparator is enabled */
#define CMP1_DISABLE                	0x0000 /* Comparator is disabled */
#define CMP1_STATE_MASK             	(~CMP1_ENABLE)

#define CMP2_OUTPUT_ENABLE          	0x0200 /* Comparator output driven on the output pad */
#define CMP2_OUTPUT_DISABLE         	0x0000 /* Comparator output is not driven on the output pad */
#define CMP2_OUTPUT_MASK            	(~CMP2_OUTPUT_ENABLE)

#define CMP1_OUTPUT_ENABLE          	0x0100 /* Comparator output driven on the output pad */
#define CMP1_OUTPUT_DISABLE         	0x0000 /* Comparator output is not driven on the output pad */
#define CMP1_OUTPUT_MASK            	(~CMP1_OUTPUT_ENABLE)

#define CMP2_INV_OUTPUT             	0x0020 /* C2 output inverted */
#define CMP2_NORMAL_OUTPUT          	0x0000 /* C2 output not inverted */
#define CMP2_INV_OUTPUT_MASK        	(~CMP2_INV_OUTPUT)

#define CMP1_INV_OUTPUT             	0x0010 /* C1 output inverted */
#define CMP1_NORMAL_OUTPUT          	0x0000 /* C1 output not inverted */
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

/*CVRCON register definition*/
#define CMP_VRef_Enable            		0x0080 /* CVREF circuit powered on */
#define CMP_VRef_Disable           		0x0000 /* CVREF circuit powered down */
#define CMP_VRef_MASK             		(~CMP_VRef_Enable)

#define CMP_VRef_OUTPUT_Enable     		0x0040 /* CVREF voltage level is output on CVREF pin */
#define CMP_VRef_OUTPUT_Disable    		0x0000 /* CVREF voltage level is disconnected from CVREF pin */
#define CMP_VRef_OUTPUT_MASK       		(~CMP_VRef_OUTPUT_Enable)

#define CMP_VRef_SELECT_24_STEPS   		0x0020 /* 0 to 0.67 CVRSRC, with CVRSRC/24 step size */
#define CMP_VRef_SELECT_32_STEPS   		0x0000 /* 0.25 CVRSRC to 0.75 CVRSRC, with CVRSRC/32 step size */
#define CMP_VRef_STEP_SELECT_MASK  		(~CMP_VRef_SELECT_24_STEPS)

#define CMP_Vrsrc_Vref_Vref        		0x0010 /* Comparator reference source CVRSRC = VREF+ – VREF- */
#define CMP_Vrsrc_AVDD_AVSS        		0x0000 /* Comparator reference source CVRSRC = AVDD – AVSS */
#define CMP_Vrsrc_MASK             		(~CMP_Vrsrc_Vref_Vref)

#define CMP_0p0CVrsrc_OR_0p25CVrsrc      0x0000 /* 0 CVRSRC with CVRSRC/24 step size, 0.25 CVRSRC with CVRSRC/32 step size */
#define CMP_0p04CVrsrc_OR_0p28CVrsrc     0x0001 /* 0.40 CVRSRC with CVRSRC/24 step size, 0.28 CVRSRC with CVRSRC/32 step size */
#define CMP_0p08CVrsrc_OR_0p31CVrsrc     0x0002 /* 0.80 CVRSRC with CVRSRC/24 step size, 0.31 CVRSRC with CVRSRC/32 step size */
#define CMP_0p12CVrsrc_OR_0p34CVrsrc     0x0003 /* 0.12 CVRSRC with CVRSRC/24 step size, 0.34 CVRSRC with CVRSRC/32 step size */
#define CMP_0p16CVrsrc_OR_0p37CVrsrc     0x0004 /* 0.16 CVRSRC with CVRSRC/24 step size, 0.37 CVRSRC with CVRSRC/32 step size */
#define CMP_0p20CVrsrc_OR_0p40CVrsrc     0x0005 /* 0.20 CVRSRC with CVRSRC/24 step size, 0.40 CVRSRC with CVRSRC/32 step size */
#define CMP_0p25CVrsrc_OR_0p43CVrsrc     0x0006 /* 0.25 CVRSRC with CVRSRC/24 step size, 0.43 CVRSRC with CVRSRC/32 step size */
#define CMP_0p29CVrsrc_OR_0p46CVrsrc     0x0007 /* 0.29 CVRSRC with CVRSRC/24 step size, 0.46 CVRSRC with CVRSRC/32 step size */
#define CMP_0p33CVrsrc_OR_0p50CVrsrc     0x0008 /* 0.33 CVRSRC with CVRSRC/24 step size, 0.50 CVRSRC with CVRSRC/32 step size */
#define CMP_0p37CVrsrc_OR_0p53CVrsrc     0x0009 /* 0.37 CVRSRC with CVRSRC/24 step size, 0.53 CVRSRC with CVRSRC/32 step size */
#define CMP_0p41CVrsrc_OR_0p56CVrsrc     0x000A /* 0.41 CVRSRC with CVRSRC/24 step size, 0.56 CVRSRC with CVRSRC/32 step size */
#define CMP_0p45CVrsrc_OR_0p59CVrsrc     0x000B /* 0.45 CVRSRC with CVRSRC/24 step size, 0.59 CVRSRC with CVRSRC/32 step size */
#define CMP_0p50CVrsrc_OR_0p62CVrsrc     0x000C /* 0.50 CVRSRC with CVRSRC/24 step size, 0.62CVRSRC with CVRSRC/32 step size */
#define CMP_0p54CVrsrc_OR_0p65CVrsrc     0x000D /* 0.54 CVRSRC with CVRSRC/24 step size, 0.65 CVRSRC with CVRSRC/32 step size */
#define CMP_0p58CVrsrc_OR_0p68CVrsrc     0x000E /* 0.58 CVRSRC with CVRSRC/24 step size, 0.68 CVRSRC with CVRSRC/32 step size */
#define CMP_0p62CVrsrc_OR_0p71CVrsrc     0x000F /* 0.62 CVRSRC with CVRSRC/24 step size, 0.71 CVRSRC with CVRSRC/32 step size */
#define CMP_VRef_SELECT_MASK             (~CMP_0p62CVrsrc_OR_0p71CVrsrc)

/******************************************************************************
 Macro      : mCMP2_EnblDsbl(state)
 Overview   : Macro Enables/Disables the Comparator 2
 Parameter  : state - *1 Comparator is enabled 
                      *0 Comparator is disabled
 Remarks    : None
 *****************************************************************************/
#define mCMP2_EnblDsbl(state)      		(CMCONbits.C2EN = state)

/******************************************************************************
 Macro      : mCMP1_EnblDsbl(state)
 Overview   : Macro Enables/Disables the Comparator 1
 Parameter  : state -  *1 Comparator is enabled 
                       *0 Comparator is disabled
 Remarks    : None
 *****************************************************************************/
#define mCMP1_EnblDsbl(state)      		(CMCONbits.C1EN = state)

/******************************************************************************
 Macro       : mCMP2_Output_EnblDsbl(state) 
 Overview    : Macro Enables/Disables Comparator 2 output on the output pad 
 Parameter   : state -  *1 Comparator output driven on the output pad 
                        *0 Comparator output is not driven on the output pad
 Remarks     : None
*****************************************************************************/
#define mCMP2_Output_EnblDsbl(state)    (CMCONbits.C2OUTEN = state)

/******************************************************************************
 Macro       : mCMP1_Output_EnblDsbl(state) 
 Overview    : Macro Enables/Disables Comparator 1 output on the output pad 
 Parameter   : state - *1 Comparator output driven on the output pad 
                       *0 Comparator output is not driven on the output pad
 Remarks     : None
 *****************************************************************************/
#define mCMP1_Output_EnblDsbl(state)    (CMCONbits.C1OUTEN = state)

/******************************************************************************
 Macro       : mCMP2_Get_STATE() 
 Overview    : Macro Returns state of Comparator output
              When  C2INV = 0:
               1 = C2 VIN+ > C2 VIN-
               0 = C2 VIN+ < C2 VIN
              When   C2INV = 1:
               0 = C2 VIN+ > C2 VIN-
               1 = C2 VIN+ < C2 VIN- 
 Parameter   : None 
 Remarks     : State of Comparator depends on Inverse selection  bit in 
              control register
 *****************************************************************************/
#define mCMP2_Get_STATE()      			(CMCONbits.C2OUT)

/******************************************************************************
 Macro       : mCMP1_Get_STATE() 
 Overview    : Macro Returns state of Comparator output
              When  C2INV = 0:
               1 = C2 VIN+ > C2 VIN-
               0 = C2 VIN+ < C2 VIN
              When   C2INV = 1:
               0 = C2 VIN+ > C2 VIN-
               1 = C2 VIN+ < C2 VIN- 
 Parameter   : None 
 Remarks     : State of Comparator depends on Inverse selection  bit in
              control register            
 ****************************************************************************/
#define mCMP1_Get_STATE()      			(CMCONbits.C1OUT)

/***********************************************************************
Macro      : EnableIntCMP
Overview   : This macro enables the comparator interrupt. 
Parameter  : None 
Remarks    : This macro sets comparator Interrupt Enable bit of Interrupt 
             Enable Control Register.
************************************************************************/ 
#define EnableIntCMP               (IEC1bits.CMIE = 1)

/***********************************************************************
Macro      : DisableIntCMP
Overview   : This macro disables the comparator interrupt.
Parameter  : None
Remarks    : This macro clears comparator Interrupt Enable bit of Interrupt 
             Enable Control register.
************************************************************************/ 
#define DisableIntCMP                (IEC1bits.CMIE = 0)

/***********************************************************************
Macro      : SetPriorityIntCMP (priority)
Overview   : This macro sets priority for comparator interrupt. 
Parameter  : priority - This input parameter is the level of interrupt priority 
Remarks    : This macro sets comparator Interrupt Priority bits of Interrupt 
             Priority Control register.
************************************************************************/  
#define SetPriorityIntCMP(priority)     (IPC4bits.CMIP = priority)

/*******************************************************************
Macro       : CMP_Clear_Intr_Status_Bit
Overview    : Macro to Clear Comparator Interrupt Status bit 
Parameter   : None 
Remarks     : None 
*******************************************************************/
#define CMP_Clear_Intr_Status_Bit     (IFS1bits.CMIF = 0)

extern void Config_CMP(unsigned short int config1 , unsigned short int config2);

#else 

/*Registers Defaults*/
#define COMP_CM1CON_VAL    				 0x0000
#define COMP_CM2CON_VAL    				 0x0000
#define COMP_CM3CON_VAL    				 0x0000

/**** CMxCON register definition ****/
#define CMP_ENABLE                  	 0x8000 /* Comparator is enabled */
#define CMP_DISABLE                      0x0000 /* Comparator is disabled */
#define CMP_ENBL_DSBL_MASK               (~CMP_ENABLE)

#define CMP_OUTPUT_ENABLE                0x4000 /* Comparator output present on the CXOUT pin */
#define CMP_OUTPUT_DISABLE               0x0000 /* Comparator output is internal only */
#define CMP_OUTPUT_MASK                  (~CMP_OUTPUT_ENABLE)

#define CMP_OUTPUT_INVERT    	         0x2000 /* Comparator output inverted */
#define CMP_OUTPUT_NOT_INVERT            0x0000 /* Comparator output not inverted */
#define CMP_OUTPUT_INVERT_MASK           (~CMP_OUTPUT_INVERT)

#if defined (cmp_v2_4) ||defined (cmp_v2_6) || defined (cmp_v2_7) ||defined (cmp_v2_8) || defined (cmp_v2_9) ||defined (cmp_v2_10)   
#define CMP_ENABLE_IN_LOW_POWER    	     0x1000 /* Comparator OPERATES IN lOW POWER MODE */
#define CMP_DISABLE_IN_LOW_POWER   	     0x0000 /* Comparator OPERATES IN lOW POWER MODE */
#define CMP_ENABLE_IN_LOW_MASK           (~CMP_ENABLE_IN_LOW_POWER) 
#endif

#define CMP_CHANGE_STATE                 0x0200 /* Comparator output changed states */
#define CMP_NO_CHANGE                    0x0000 /* Comparator output did not change states */
#define CMP_STATE_MASK                   (~CMP_CHANGE_STATE )

#define CMP_INTERRUPT_ON_ANY_EDGE		 0X00C0 /* Interrupt generated on any edge of the selected comparator output*/
#define CMP_INTERRUPT_ON_FALLING_EDGE	 0X0080 /* Interrupt generated only on falling edge of the selected comparator output*/
#define CMP_INTERRUPT_ON_RISING_EDGE	 0X0040 /* Interrupt generated only on rising edge of the selected comparator output*/
#define CMP_INTERRUPT_DISABLED			 0X0000  /* Interrupt generation is disabled */
#define CMP_INTERRUP_EDGE_MASK           (~CMP_INTERRUPT_ON_ANY_EDGE) 

#if defined (cmp_v2_9) || defined (cmp_v2_10)
#define CMP_POS_IP_DAC2 	             0x0018 /* Non_inverting input is connected to DAC2 output */
#define CMP_POS_IP_DAC1 	             0x0010 /* Non_inverting input is connected to DAC1 output */
#define CMP_POS_IP_CV_Ref              0x0008 /* Non_inverting input connects to internal CVref voltage */ 
#define CMP_POS_IP_CXINA 	             0x0000 /* Non_inverting input is connected to CXINA pin */
#define CMP_POS_IP_MASK                  (~CMP_POS_IP_DAC2)
#else
#define CMP_POS_IP_CV_Ref                0x0010 /* Non_inverting input connects to internal CVref voltage */ 
#define CMP_POS_IP_CXINA 	             0x0000 /* Non_inverting input is connected to CXINA pin */
#define CMP_POS_IP_MASK                  (~CMP_POS_IP_CV_Ref)
#endif

#define CMP_NEG_IP_CXINB				 0X0000 /* Input is connected to CXINB pin */
#if defined (cmp_v2_1) || defined (cmp_v2_2) || defined (cmp_v2_3) || defined (cmp_v2_5) || defined (cmp_v2_6) ||\
	defined (cmp_v2_8) || defined (cmp_v2_9) || defined (cmp_v2_10) || defined (cmp_v3_1)
#define CMP_NEG_IP_CXINC			     0X0001 /* Input is connected to CXINC pin */
#define CMP_NEG_IP_CXIND			     0X0002 /* Input is connected to CXIND pin */
#endif
#if defined (cmp_v2_3)
#define CMP_NEG_IP_CV_Ref			     0X0003 /* Input is connected to CVRef */
#elif defined (cmp_v2_5)
#define CMP_NEG_IP_REFVOLT_BGREF_SOURCE  0X0003 /* Input is connected to reference voltage specified by bits BGSEL */
#else
#define CMP_NEG_IP_VBG_DIV_2		     0X0003 /* Input is connected to VBGdiv2 */
#endif
#define CMP_NEG_IP_MASK                  (~0x0003)


/* CMSTAT register definition */
#if defined (cmp_v3_1)

#define CMP_IDLE_STOP					0x8000
#define CMP_IDLE_CONT					0x0000

/* Comparator event trigger bits */
#define CMP_C3EVT_OCCUR					0x0400
#define CMP_C3EVT_NOT_OCCUR				0x0000
#define CMP_C2EVT_OCCUR					0x0200
#define CMP_C2EVT_NOT_OCCUR				0x0000
#define CMP_C1EVT_OCCUR					0x0100
#define CMP_C1EVT_NOT_OCCUR				0x0000

/*----------------------------------------------------------------------------------------------------*/
/* CMxMSKSRC Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define	CMP_MASK_C_INPUT_PWML1			0x0000
#define	CMP_MASK_C_INPUT_PWMH1			0x0100
#define	CMP_MASK_C_INPUT_PWML2			0x0200
#define	CMP_MASK_C_INPUT_PWMH2			0x0300
#define	CMP_MASK_C_INPUT_PWML3			0x0400
#define	CMP_MASK_C_INPUT_PWMH3			0x0500

#define	CMP_MASK_B_INPUT_PWML1			0x0000
#define	CMP_MASK_B_INPUT_PWMH1			0x0100
#define	CMP_MASK_B_INPUT_PWML2			0x0200
#define	CMP_MASK_B_INPUT_PWMH2			0x0300
#define	CMP_MASK_B_INPUT_PWML3			0x0400
#define	CMP_MASK_B_INPUT_PWMH3			0x0500

#define	CMP_MASK_A_INPUT_PWML1			0x0000
#define	CMP_MASK_A_INPUT_PWMH1			0x0100
#define	CMP_MASK_A_INPUT_PWML2			0x0200
#define	CMP_MASK_A_INPUT_PWMH2			0x0300
#define	CMP_MASK_A_INPUT_PWML3			0x0400
#define	CMP_MASK_A_INPUT_PWMH3			0x0500


/*----------------------------------------------------------------------------------------------------*/
/* CMxMSKCON Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define CMP_A_INV_AND_DISABLE				0x0000	/* Inverted MAI is not connected to AND gate */
#define CMP_A_INV_AND_ENABLE				0x0001  /* Inverted MAI is connected to AND gate */

#define CMP_A_AND_DISABLE					0x0000  /* MAI is not connected to AND gate */
#define CMP_A_AND_ENABLE					0x0002  /* MAI is connected to AND gate */

#define CMP_B_INV_AND_DISABLE				0x0000  /* Inverted MBI is not connected to AND gate */
#define CMP_B_INV_AND_ENABLE				0x0004  /* Inverted MBI is connected to AND gate */

#define CMP_B_AND_DISABLE					0x0000  /* MBI is not connected to AND gate */
#define CMP_B_AND_ENABLE					0x0008  /* MBI is connected to AND gate */

#define CMP_C_INV_AND_DISABLE				0x0000  /* Inverted MCI is not connected to AND gate */
#define CMP_C_INV_AND_ENABLE				0x0010  /* Inverted MCI is connected to AND gate */

#define CMP_C_AND_DISABLE					0x0000  /* MCI is not connected to AND gate */
#define CMP_C_AND_ENABLE					0x0020  /* MCI is connected to AND gate */

#define CMP_POS_OUT_AND_DISABLE				0x0000  /* ANDI is not connected to OR gate */
#define CMP_POS_OUT_AND_ENABLE				0x0040  /* ANDI is connected to OR gate*/

#define CMP_NEG_OUT_AND_DISABLE				0x0000  /* Inverted ANDI is not connected to OR gate */
#define CMP_NEG_OUT_AND_ENABLE				0x0080  /* Inverted ANDI is not connected to OR gate */

#define CMP_A_INV_OR_DISABLE				0x0000  /* Inverted MAI is not connected to OR gate */
#define CMP_A_INV_OR_ENABLE					0x0100  /* Inverted MAI is connected to OR gate */

#define CMP_A_OR_DISABLE					0x0000  /* MAI is not connected to OR gate */
#define CMP_A_OR_ENABLE						0x0200  /* MAI is connected to OR gate */

#define CMP_B_INV_OR_DISABLE				0x0000  /* Inverted MBI is not connected to OR gate */
#define CMP_B_INV_OR_ENABLE					0x0400  /* Inverted MBI is connected to OR gate*/

#define CMP_B_OR_DISABLE					0x0000  /* MBI is not connected to OR gate */
#define CMP_B_OR_ENABLE						0x0800  /* MBI is connected to OR gate */

#define CMP_C_INV_OR_DISABLE				0x0000  /* Inverted MCI is not connected to OR gate*/
#define CMP_C_INV_OR_ENABLE					0x1000  /* Inverted MCI is connected to OR gate */

#define CMP_C_OR_DISABLE					0x0000  /* MCI is not connected to OR gate */
#define CMP_C_OR_ENABLE						0x2000  /* MCI is connected to OR gate */

#define	CMP_DEASSERT_STATE_0				0x0000  /* The masking (blanking) function will prevent any asserted (‘1’) comparator signal from propagating */
#define	CMP_DEASSERT_STATE_1				0x8000  /* The masking (blanking) function will prevent any asserted (‘0’) comparator signal from propagating */

/*----------------------------------------------------------------------------------------------------*/
/* CMxFLTR Configuration Bit Definitions : */
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

#define	CMP_FLTR_CLOCK_FCY					0x0000
#define	CMP_FLTR_CLOCK_FOSC					0x0010
#define	CMP_FLTR_CLOCK_PWMTRIG				0x0020
#define CMP_FLTR_CLOCK_TMR2					0x0040
#define CMP_FLTR_CLOCK_TMR3					0x0050

#endif

/**** CVRCON register definition ****/
#if defined (cmp_v2_3)
#define CMP_VRefP_POS_SEL_IN_PIN   0x0400 /* CVREF input pin as CVREF+ reference output to comparators */
#define CMP_VRefP_POS_SEL_MODLUE   0x0000 /* Voltage Reference module’s generated output as CVREF+ reference output to COMPARATOR */
#define CMP_VRef_POS_SEL_MASK       (~CMP_VRefP_POS_SEL_IN_PIN)

#define CMP_VRefP_NEG_SEL_MODULE   0x0300 /* Voltage Reference module’s generated output as CVREF- reference output to COMPARATOR */
#define CMP_VRefP_NEG_SEL_VBG_DIV_6  0x0200 /* VBG/6 as as CVREF- reference output to comparators */
#define CMP_VRefP_NEG_SEL_VBG	     0x0100 /* VBG as as CVREF- reference output to comparators */
#define CMP_VRefP_NEG_SEL_VBG_DIV_2  0x0000 /*VBG/2 as as CVREF- reference output to comparators */
#define CMP_VRefP_NEG_SEL_MASK           (~CMP_VRefP_NEG_SEL_MODULE) 
#endif

#if defined (cmp_v2_5)
#define CMP_VRef_DAC_EXT_MODULE          0x0400 /* A peripheral(DAC) external to this module provides the reference voltage*/
#define CMP_VRef_CVR_INT_MODULE          0x0000 /* CVR (4-bit DAC) within this module provides the reference voltage */
#define CMP_VRef_MODULE_MASK                    (~CMP_VRef_DAC_EXT_MODULE) 

#define CMP_BGREF_SOURCE_VOLT3           0x0300 /*Bandgap/reference source voltage 3 */
#define CMP_BGREF_SOURCE_VOLT2           0x0200 /*Bandgap/reference source voltage 2*/
#define CMP_BGREF_SOURCE_VOLT1	         0x0100 /*Bandgap/reference source voltage 1*/
#define CMP_BGREF_SOURCE_VOLT0           0x0000 /*Bandgap/reference source voltage 0 */
#define CMP_BGREF_SOURCE_MASK            (~CMP_BGREF_SOURCE_VOLT3)
#endif

#if defined (cmp_v3_1)
#define	CMP_REF_VREF_RESISTOR				0x0000 /* CVREFIN is generated by the resistor network */		
#define	CMP_REF_VREF_VREF					0x0010 /* CVREFIN = CVREF */
#define CMP_VRef_MODULE_MASK                (~CMP_VRef_DAC_EXT_MODULE)

#define CMP_BGREF_SOURCE_CVREF           0x0300 /*Bandgap/reference source CVREF */
#define CMP_BGREF_SOURCE_1_2V            0x0200 /*Bandgap/reference source 1.2V nominal */
#define CMP_BGREF_SOURCE_MASK            (~CMP_BGREF_SOURCE_VOLT3)

#endif

#define CMP_VRef_Enable                  0x0080 /* CVREF circuit powered on */
#define CMP_VRef_Disable                 0x0000 /* CVREF circuit powered down */
#define CMP_VRef_MASK                   (~CMP_VRef_Enable)

#define CMP_VRef_OUTPUT_Enable           0x0040 /* CVREF voltage level is output on CVREF pin */
#define CMP_VRef_OUTPUT_Disable          0x0000 /* CVREF voltage level is disconnected from CVREF pin */
#define CMP_VRef_OUTPUT_MASK             (~CMP_VRef_OUTPUT_Enable)

#if defined (cmp_v2_1) || defined (cmp_v2_2) || defined (cmp_v2_3) ||\
	defined (cmp_v2_4) || defined (cmp_v2_5) ||defined (cmp_v2_6) || defined (cmp_v3_1)
#define CMP_VRef_SELECT_24_STEPS   	 	 0x0020 /* 0 to 0.67 CVRSRC, with CVRSRC/24 step size */
#define CMP_VRef_SELECT_32_STEPS         0x0000 /* 0.25 CVRSRC to 0.75 CVRSRC, with CVRSRC/32 step size */
#define CMP_VRef_STEP_SELECT_MASK        (~CMP_VRef_SELECT_24_STEPS)
#elif defined (cmp_v2_7) || defined (cmp_v2_8) || defined (cmp_v2_9) || defined (cmp_v2_10)
#define CMP_Vrsrc_Vref_Vref        		 0x0020 /* Comparator reference source CVRSRC = VREF+ – VREF- */
#define CMP_Vrsrc_AVDD_AVSS        		 0x0000 /* Comparator reference source CVRSRC = AVDD – AVSS */
#define CMP_Vrsrc_MASK                   (~CMP_Vrsrc_Vref_Vref)
#endif

#if defined (cmp_v2_1) || defined (cmp_v2_2) || defined (cmp_v2_3) || defined (cmp_v2_4) || defined (cmp_v2_5) 
#define CMP_Vrsrc_Vref_Vref        		 0x0010 /* Comparator reference source CVRSRC = VREF+ – VREF- */
#define CMP_Vrsrc_AVDD_AVSS        		 0x0000 /* Comparator reference source CVRSRC = AVDD – AVSS */
#define CMP_Vrsrc_MASK                   (~CMP_Vrsrc_Vref_Vref)
#endif

#define CMP_0p0CVrsrc_OR_0p25CVrsrc      0x0000 /* 0 CVRSRC with CVRSRC/24 step size, 0.25 CVRSRC with CVRSRC/32 step size */
#define CMP_0p04CVrsrc_OR_0p28CVrsrc     0x0001 /* 0.40 CVRSRC with CVRSRC/24 step size, 0.28 CVRSRC with CVRSRC/32 step size */
#define CMP_0p08CVrsrc_OR_0p31CVrsrc     0x0002 /* 0.80 CVRSRC with CVRSRC/24 step size, 0.31 CVRSRC with CVRSRC/32 step size */
#define CMP_0p12CVrsrc_OR_0p34CVrsrc     0x0003 /* 0.12 CVRSRC with CVRSRC/24 step size, 0.34 CVRSRC with CVRSRC/32 step size */
#define CMP_0p16CVrsrc_OR_0p37CVrsrc     0x0004 /* 0.16 CVRSRC with CVRSRC/24 step size, 0.37 CVRSRC with CVRSRC/32 step size */
#define CMP_0p20CVrsrc_OR_0p40CVrsrc     0x0005 /* 0.20 CVRSRC with CVRSRC/24 step size, 0.40 CVRSRC with CVRSRC/32 step size */
#define CMP_0p25CVrsrc_OR_0p43CVrsrc     0x0006 /* 0.25 CVRSRC with CVRSRC/24 step size, 0.43 CVRSRC with CVRSRC/32 step size */
#define CMP_0p29CVrsrc_OR_0p46CVrsrc     0x0007 /* 0.29 CVRSRC with CVRSRC/24 step size, 0.46 CVRSRC with CVRSRC/32 step size */
#define CMP_0p33CVrsrc_OR_0p50CVrsrc     0x0008 /* 0.33 CVRSRC with CVRSRC/24 step size, 0.50 CVRSRC with CVRSRC/32 step size */
#define CMP_0p37CVrsrc_OR_0p53CVrsrc     0x0009 /* 0.37 CVRSRC with CVRSRC/24 step size, 0.53 CVRSRC with CVRSRC/32 step size */
#define CMP_0p41CVrsrc_OR_0p56CVrsrc     0x000A /* 0.41 CVRSRC with CVRSRC/24 step size, 0.56 CVRSRC with CVRSRC/32 step size */
#define CMP_0p45CVrsrc_OR_0p59CVrsrc     0x000B /* 0.45 CVRSRC with CVRSRC/24 step size, 0.59 CVRSRC with CVRSRC/32 step size */
#define CMP_0p50CVrsrc_OR_0p62CVrsrc     0x000C /* 0.50 CVRSRC with CVRSRC/24 step size, 0.62CVRSRC with CVRSRC/32 step size */
#define CMP_0p54CVrsrc_OR_0p65CVrsrc     0x000D /* 0.54 CVRSRC with CVRSRC/24 step size, 0.65 CVRSRC with CVRSRC/32 step size */
#define CMP_0p58CVrsrc_OR_0p68CVrsrc     0x000E /* 0.58 CVRSRC with CVRSRC/24 step size, 0.68 CVRSRC with CVRSRC/32 step size */
#define CMP_0p62CVrsrc_OR_0p71CVrsrc     0x000F /* 0.62 CVRSRC with CVRSRC/24 step size, 0.71 CVRSRC with CVRSRC/32 step size */

#if defined (cmp_v3_1) & CMP_VRef_SELECT_32_STEPS
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

#if defined (cmp_v2_6) || defined (cmp_v2_7) || defined (cmp_v2_8) || defined (cmp_v2_9) || defined (cmp_v2_10)
#define CMP_0p65CVrsrc_OR_0p74CVrsrc     0x0010 /* 0.65 CVRSRC with CVRSRC/24 step size, 0.74 CVRSRC with CVRSRC/32 step size */
#define CMP_0p69CVrsrc_OR_0p77CVrsrc     0x0011 /* 0.69 CVRSRC with CVRSRC/24 step size, 0.77 CVRSRC with CVRSRC/32 step size */
#define CMP_0p73CVrsrc_OR_0p80CVrsrc     0x0012 /* 0.73 CVRSRC with CVRSRC/24 step size, 0.80 CVRSRC with CVRSRC/32 step size */
#define CMP_0p77CVrsrc_OR_0p83CVrsrc     0x0013 /* 0.77 CVRSRC with CVRSRC/24 step size, 0.83 CVRSRC with CVRSRC/32 step size */
#define CMP_0p81CVrsrc_OR_0p86CVrsrc     0x0014 /* 0.81 CVRSRC with CVRSRC/24 step size, 0.86 CVRSRC with CVRSRC/32 step size */
#define CMP_0p85CVrsrc_OR_0p89CVrsrc     0x0015 /* 0.85 CVRSRC with CVRSRC/24 step size, 0.89 CVRSRC with CVRSRC/32 step size */
#define CMP_0p89CVrsrc_OR_0p92CVrsrc     0x0016 /* 0.89 CVRSRC with CVRSRC/24 step size, 0.92 CVRSRC with CVRSRC/32 step size */
#define CMP_0p93CVrsrc_OR_0p95CVrsrc     0x0017 /* 0.93 CVRSRC with CVRSRC/24 step size, 0.95 CVRSRC with CVRSRC/32 step size */
#define CMP_0p97CVrsrc_OR_0p98CVrsrc     0x0018 /* 0.97 CVRSRC with CVRSRC/24 step size, 0.98 CVRSRC with CVRSRC/32 step size */
#define CMP_0p101CVrsrc_OR_0p102CVrsrc     0x0019 /* 0.101 CVRSRC with CVRSRC/24 step size, 0.102 CVRSRC with CVRSRC/32 step size */
#define CMP_0p105CVrsrc_OR_0p105CVrsrc     0x001A /* 0.105 CVRSRC with CVRSRC/24 step size, 0.105 CVRSRC with CVRSRC/32 step size */
#define CMP_0p109CVrsrc_OR_0p108CVrsrc     0x001B /* 0.109 CVRSRC with CVRSRC/24 step size, 0.108 CVRSRC with CVRSRC/32 step size */
#define CMP_0p113CVrsrc_OR_0p111CVrsrc     0x001C /* 0.113 CVRSRC with CVRSRC/24 step size, 0.111 CVRSRC with CVRSRC/32 step size */
#define CMP_0p117CVrsrc_OR_0p114CVrsrc     0x001D /* 0.117 CVRSRC with CVRSRC/24 step size, 0.114 CVRSRC with CVRSRC/32 step size */
#define CMP_0p121CVrsrc_OR_0p117CVrsrc     0x001E /* 0.121 CVRSRC with CVRSRC/24 step size, 0.117 CVRSRC with CVRSRC/32 step size */
#define CMP_0p125CVrsrc_OR_0p120CVrsrc     0x001F /* 0.125 CVRSRC with CVRSRC/24 step size, 0.120 CVRSRC with CVRSRC/32 step size */
#endif

#define CMP_VRef_SELECT_MASK             (~0x001F)

#if defined (cmp_v2_2) || defined (cmp_v2_3) || defined (cmp_v2_5) || defined (cmp_v2_6) ||\
	defined (cmp_v2_10) || defined (cmp_v3_1) || defined (LIB_BUILD)

#if defined (cmp_v2_6) || defined (cmp_v2_10) || defined (cmp_v3_1)
/*****************************************************************************
 Macro      : mCMP3_EnblDsbl(state)
 Overview   : Macro Enables/Disables the Comparator 3
 Parameter  : state - *1 Comparator is enabled 
                      *0 Comparator is disabled
 Remarks    : None
*****************************************************************************/
#define mCMP3_EnblDsbl(state)           (CM3CONbits.CON = state)

#else

/*****************************************************************************
 Macro      : mCMP3_EnblDsbl(state)
 Overview   : Macro Enables/Disables the Comparator 3
 Parameter  : state - *1 Comparator is enabled 
                      *0 Comparator is disabled
 Remarks    : None
*****************************************************************************/
#define mCMP3_EnblDsbl(state)           (CM3CONbits.CEN = state)

#endif

/******************************************************************************
 Macro       : mCMP3_Output_EnblDsbl(state) 
 Overview    : Macro Enables/Disables Comparator 3 output on the output pad 
 Parameter   : state - *1 Comparator output driven on the output pad 
                       *0 Comparator output is not driven on the output pad
 Remarks     : None
*****************************************************************************/
#define mCMP3_Output_EnblDsbl(state)    (CM3CONbits.COE = state)

/******************************************************************************
 Macro       : mCMP3_Get_STATE() 
 Overview    : Macro Returns state of Comparator output
               When  C3INV = 0:
               1 = C3 VIN+ > C3 VIN-
               0 = C3 VIN+ < C3 VIN
               When   C3INV = 1:
               0 = C3 VIN+ > C3 VIN-
               1 = C3 VIN+ < C3 VIN- 
 Parameter   : None 
 Remarks     : State of Comparator depends on Inverse selection  bit in 
               control register
******************************************************************************/
#define mCMP3_Get_STATE()                (CM3CONbits.COUT)

/******************************************************************************
 Macro       : mCMP3_Clear_Event
 Overview    : Macro clears the comparator event bit.
 Parameter   : None
 Remarks     : Clear this event bit to generate subsequent trigger and interrupt.
*****************************************************************************/
#define mCMP3_Clear_Event             (CM3CONbits.CEVT = 0)

#ifndef cmp_v3_1
extern void Config_CMP3(unsigned short int config1 , unsigned short int config2);
#endif

#endif

#if defined (cmp_v2_1) || defined (cmp_v2_2) || defined (cmp_v2_3) || defined (cmp_v2_4) ||\
    defined (cmp_v2_5) || defined (cmp_v2_6) || defined (cmp_v2_8) || defined (cmp_v2_10) || defined (cmp_v3_1) || defined (LIB_BUILD) 

#if defined (cmp_v2_1) || defined (cmp_v2_4) || defined (cmp_v2_6) || defined (cmp_v2_8) || defined (cmp_v2_10) || defined (LIB_BUILD)

/******************************************************************************
 Macro      : mCMP2_EnblDsbl(state)
 Overview   : Macro Enables/Disables the Comparator 2
 Parameter  : state - *1 Comparator is enabled 
                      *0 Comparator is disabled
 Remarks    : None
*****************************************************************************/
#define mCMP2_EnblDsbl(state)           (CM2CONbits.CON = state)

#else
/******************************************************************************
 Macro      : mCMP2_EnblDsbl(state)
 Overview   : Macro Enables/Disables the Comparator 2
 Parameter  : state - *1 Comparator is enabled 
                      *0 Comparator is disabled
 Remarks    : None
*****************************************************************************/
#define mCMP2_EnblDsbl(state)           (CM2CONbits.CEN = state)

#endif

/******************************************************************************
Macro       : mCMP2_Output_EnblDsbl(state) 
Overview    : Macro Enables/Disables Comparator 2 output on the output pad 
Parameter   : state - *1 Comparator output driven on the output pad 
                      *0 Comparator output is not driven on the output pad
Remarks     : None
*****************************************************************************/
#define mCMP2_Output_EnblDsbl(state)    (CM2CONbits.COE = state)

/******************************************************************************
 Macro       : mCMP2_Get_STATE() 
 Overview    : Macro Returns state of Comparator output
              When  C2INV = 0:
               1 = C2 VIN+ > C2 VIN-
               0 = C2 VIN+ < C2 VIN
              When   C2INV = 1:
               0 = C2 VIN+ > C2 VIN-
               1 = C2 VIN+ < C2 VIN- 
 Parameter   : None 
 Remarks     : State of Comparator depends on Inverse selection  bit in 
              control register
******************************************************************************/
#define mCMP2_Get_STATE()                 (CM2CONbits.COUT)

/******************************************************************************
 Macro       : mCMP2_Clear_Event
 Overview    : Macro clears the comparator event bit.
 Parameter   : None
 Remarks     : Clear this event bit to generate subsequent trigger and interrupt.
*****************************************************************************/
#define mCMP2_Clear_Event             (CM2CONbits.CEVT = 0)

#ifndef cmp_v3_1
extern void Config_CMP2(unsigned short int config1 , unsigned short int config2);
#endif

#endif

#if defined (cmp_v2_1) || defined (cmp_v2_4) ||defined (cmp_v2_6) ||defined (cmp_v2_7) ||\
	defined (cmp_v2_8) || defined (cmp_v2_9) || defined (cmp_v2_10) || defined (cmp_v3_1)
/******************************************************************************
 Macro      : mCMP1_EnblDsbl(state)
 Overview   : Macro Enables/Disables the Comparator 1
 Parameter  : state - *1 Comparator is enabled 
                      *0 Comparator is disabled
 Remarks    : None
*****************************************************************************/
#define mCMP1_EnblDsbl(state)           (CM1CONbits.CON = state)

#else
/******************************************************************************
 Macro      : mCMP1_EnblDsbl(state)
 Overview   : Macro Enables/Disables the Comparator 1
 Parameter  : state - *1 Comparator is enabled 
                      *0 Comparator is disabled
 Remarks    : None
*****************************************************************************/
#define mCMP1_EnblDsbl(state)           (CM1CONbits.CEN = state)

#endif
/******************************************************************************
 Macro       : mCMP1_Output_EnblDsbl(state) 
 Overview    : Macro Enables/Disables Comparator 1 output on the output pad 
 Parameter   : state - *1 Comparator output driven on the output pad 
                       *0 Comparator output is not driven on the output pad
 Remarks     : None
*****************************************************************************/
#define mCMP1_Output_EnblDsbl(state)    (CM1CONbits.COE = state)

/******************************************************************************
 Macro       : mCMP1_Get_STATE() 
 Overview    : Macro Returns state of Comparator output
              When  C1INV = 0:
               1 = C1 VIN+ > C1 VIN-
               0 = C1 VIN+ < C1 VIN
              When   C1INV = 1:
               0 = C1 VIN+ > C1 VIN-
               1 = C1 VIN+ < C1 VIN- 
 Parameter   : None 
 Remarks     : State of Comparator depends on Inverse selection  bit in 
              control register
******************************************************************************/
#define mCMP1_Get_STATE()                  (CM1CONbits.COUT)

/******************************************************************************
 Macro       : mCMP1_Clear_Event 
 Overview    : Macro clears the comparator event bit.
 Parameter   : None
 Remarks     : Clear this event bit to generate subsequent trigger and interrupt.
*****************************************************************************/
#define mCMP1_Clear_Event             (CM1CONbits.CEVT = 0)

/***********************************************************************
Macro      : EnableIntCMP
Overview   : This macro enables the comparator interrupt. 
Parameter  : None 
Remarks    : This macro sets comparator Interrupt Enable bit of Interrupt 
             Enable Control Register.
************************************************************************/ 

#define EnableIntCMP                (IEC1bits.CMIE = 1)

/***********************************************************************
Macro      : DisableIntCMP
Overview   : This macro disables the comparator interrupt.
Parameter  : None
Remarks    : This macro clears comparator Interrupt Enable bit of Interrupt 
             Enable Control register.
************************************************************************/ 
#define DisableIntCMP                (IEC1bits.CMIE =0)


/***********************************************************************
Macro      : SetPriorityIntCMP(priority) 
Overview   : This macro sets priority for comparator interrupt. 
Parameter  : priority - This input parameter is the level of interrupt priority
Remarks    : This macro sets comparator Interrupt Priority bits of Interrupt 
             Priority Control register.
************************************************************************/  
#define SetPriorityIntCMP(priority)     (IPC4bits.CMIP = priority)

/*******************************************************************
Macro       : CMP_Clear_Intr_Status_Bit
Overview    : Macro to Clear Comparator Interrupt Status bit 
Parameter   : None 
Remarks     : None 
*******************************************************************/
#define CMP_Clear_Intr_Status_Bit     (IFS1bits.CMIF = 0)

#ifndef cmp_v3_1
extern void Config_CMP1(unsigned short int config1 , unsigned short int config2);
#endif

#if defined (cmp_v3_1) || defined (LIB_BUILD)

#ifndef LIB_BUILD

#define Config_CMP1		Config_CMP1_v2
#define Config_CMP2		Config_CMP2_v2
#define Config_CMP3		Config_CMP3_v2

#endif

#if defined _C1EVT
extern void Config_CMP1_v2(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__((section (".libperi")));
#endif

#if defined _C2EVT
extern void Config_CMP2_v2(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__((section (".libperi")));
#endif

#if defined _C3EVT
extern void Config_CMP3_v2(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__((section (".libperi")));
#endif
unsigned int ReadCMPStatus(void) __attribute__((section (".libperi")));
#endif


#endif

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif  /* __COMPARATOR_H */


