/********************************************************************/
/*              Header for SMPS ADC module library functions       */
/*******************************************************************/

#if defined(__dsPIC30F__) 
#include <p30Fxxxx.h>
#elif defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#endif

#ifndef __SMPSADC_H
#define __SMPSADC_H

/* List of SFRs for ADC */
/* This list contains the SFRs with default (POR) values to be used for configuring ADC */
/* The user can modify this based on the requirement */

#define ADCON_VALUE					0x0000
#define ADPCFG_VALUE					0x0000
#define ADCPC0_VALUE					0x0000
#define ADCPC1_VALUE					0x0000
#define ADCPC2_VALUE					0x0000


#if defined (__dsPIC33F__)
#define ADCPC3_VALUE					0x0000
#define ADCPC4_VALUE					0x0000
#define ADCPC5_VALUE					0x0000
#define ADCPC6_VALUE					0x0000
#define ADBASE_VALUE                                    0x0000
#endif


/*----------------------------------------------------------------------------------------------------*/
/* ADCON Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define ADC_MOD_EN					0x8000  /* A/D converter module Enabled */
#define ADC_MOD_DIS					0x0000  /* A/D converter module Enabled */

#define ADC_IDLE_DISCONT				0x2000  /* Discontinue device operation when device enters idle mode */
#define ADC_IDLE_CONT					0x0000  /* Continue device operation in idle mode */

#if defined (__dsPIC33F__)
#define ADC_SLCLKDIV_EN                                 0x1000  /* Use the clock divider for low frequency ADC input clock*/
#define ADC_SLCLKDIV_DIS                                0x0000  /* Use the clock divider for high frequency ADC input clock*/
#endif

#define ADC_SOFT_TRIG_EN				0x0400  /* Global software trigger must be cleared prior to initiating another trikjgger */
#define ADC_SOFT_TRIG_DIS				0x0000  /*When this bit is set by the user it will trigger conversions selected by 
											    the TRGSRC<4:0> bits in the ADCPCx register. */

#define ADC_DATA_FRA					0x0100  /*Fractional Data */
#define ADC_DATA_INT					0x0000  /*Integer Data */

#define ADC_INT_EN_1CONV				0x0080  /* Interrupt generated after 1st conversion is completed */
#define ADC_INT_EN_2CONV				0x0000  /* Interrupt generated after 2nd conversion is completed */

#define ADC_ORDER_ODD_FST				0x0040  /*ODD numbered Analog I/P 1st converted followed by EVEN numbered I/P */
#define ADC_ORDER_EVEN_FST				0x0000  /*EVEN numbered Analog I/P 1st converted followed by ODD numbered I/P */

#define ADC_SAMP_SEQ					0x0020  /* If Order=0 shared S&H sampled at start of 2nd Conversion.
								                   If Order=1 S&H sampled at start of 1st Conversion. */
#define ADC_SAMP_SIM					0x0000  /* Shared S&H sampled at the same time the dedicated S&H if shared S&H is not busy
								   If Shared S&H is busy at the time when dedicated S&H sampled, then shared S&H will sample at the start of new conversion */
#if defined (__dsPIC33F__)
#define ADC_SAMP_CONSTANT                               0x8000  /* Dedicated S&H circuit is constantly sampling and then terminates sampling as soon as the trigger pulse is detected*/
#define ADC_SAMP_TRIG                                   0x0000  /* Dedicated S&H circuit starts sampling when the trigger event is detected and completes the sampling process in 2 ADC clock cycles*/
#endif

#if defined (__dsPIC30F__)
#define ADC_PLL_EN_FADC_18				0x0007  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_16				0x0006  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_14				0x0005  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_12				0x0004  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_10				0x0003  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_8				0x0002  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_6				0x0001  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_4				0x0000  /* A/D Conversion clock divider select if PLL Enabled */


#define ADC_PLL_DIS_FADC_18				0x0007  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_16				0x0006  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_14				0x0005  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_12				0x0004  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_10				0x0003  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_8				0x0002  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_6				0x0001  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_4				0x0000  /* A/D Conversion clock divider select if PLL Disabled */

#elif defined (__dsPIC33F__)
#define ADC_PLL_EN_FADC_7				0x0007  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_6_5				0x0006  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_6				0x0005  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_5_5				0x0004  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_5				0x0003  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_4_5				0x0002  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_4				0x0001  /* A/D Conversion clock divider select if PLL Enabled */
#define ADC_PLL_EN_FADC_3_5				0x0000  /* A/D Conversion clock divider select if PLL Enabled */


#define ADC_PLL_DIS_FADC_8				0x0007  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_7				0x0006  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_6				0x0005  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_5				0x0004  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_4				0x0003  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_3				0x0002  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_2				0x0001  /* A/D Conversion clock divider select if PLL Disabled */
#define ADC_PLL_DIS_FADC_1				0x0000  /* A/D Conversion clock divider select if PLL Disabled */
#endif



/*----------------------------------------------------------------------------------------------------*/
/* ADPCFG Port Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define ADC_PORT_PIN0_DIG				0x0001  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN0_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN1_DIG				0x0002  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN1_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN2_DIG				0x0004  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN2_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN3_DIG				0x0008  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN3_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN4_DIG				0x0010  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN4_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN5_DIG				0x0020  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN5_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN6_DIG				0x0040  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN6_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN7_DIG				0x0080  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN7_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN8_DIG				0x0100  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN8_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN9_DIG				0x0200  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN9_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN10_DIG				0x0400  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN10_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN11_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN11_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/

#define ADC_PORT_PIN11_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN11_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/




#define ADC_PORT_PIN12_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN12_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/



#define ADC_PORT_PIN13_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN13_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/


#define ADC_PORT_PIN14_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN14_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/


#define ADC_PORT_PIN15_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN15_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/


#define ADC_PORT_PIN16_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN16_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/


#define ADC_PORT_PIN17_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN17_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/


#define ADC_PORT_PIN18_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN18_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/


#define ADC_PORT_PIN19_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN19_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/


#define ADC_PORT_PIN20_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN20_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/


#define ADC_PORT_PIN21_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN21_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/


#define ADC_PORT_PIN22_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN22_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/


#define ADC_PORT_PIN23_DIG				0x0800  /* Port pin in Digital mode, port read I/P enabled, A/D I/P mux connected to AVss */
#define ADC_PORT_PIN23_AN				0x0000  /* Port pin in Analog mode, port read I/P disabled A/D samples pin voltage*/










/*----------------------------------------------------------------------------------------------------*/
/* ADCPC0 Configuration Bit for Trigger source : */
/*----------------------------------------------------------------------------------------------------*/

#define ADC_AN3_2_IR_GEN_EN				0x8000  /* ADC Interrupt Request Enable for AN3 & AN2 */
#define ADC_AN3_2_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN3 & AN2 */


#define ADC_AN3_2_NOCONV				0x0000  /* No trigger Conversion Enabled for AN3 & AN2 */
#define ADC_AN3_2_TRIG_INDV_SW				0x0100  /* Individual software trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_GLB_SW				0x0200  /* Global software trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PWM_SEVT				0x0300  /* PWM special event trigger selected for AN3 & AN2 */

#if defined (__dsPIC30F__)
#define ADC_AN3_2_TRIG_PWM1				       0x0400  /* PWM generator #1 trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PWM2				0x0500  /* PWM generator #2 trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PWM3				0x0600  /* PWM generator #3 trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PWM4				0x0700  /* PWM generator #4 trigger selected for AN3 & AN2 */


#define ADC_AN3_2_TRIG_TMR1				              0x0C00  /* Timer #1 period match trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_TMR2				              0x0D00  /* Timer #2 period match trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM1				       0x0E00  /* PWM generator #1 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM2				0x0F00  /* PWM generator #2 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM3				0x1000  /* PWM generator #3 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM4				0x1100  /* PWM generator #4 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_FLT_PWM1				0x1600  /* PWM generator #1 fault ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_FLT_PWM2				0x1700  /* PWM generator #2 fault ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_FLT_PWM3				0x1800  /* PWM generator #3 fault ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_FLT_PWM4				0x1900  /* PWM generator #4 fault ADC trigger selected for AN3 & AN2 */

#elif defined (__dsPIC33F__)
#define ADC_AN3_2_TRIG_PRI_PWM1				0x0400  /* PWM generator #1 primary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PRI_PWM2				0x0500  /* PWM generator #2 primary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PRI_PWM3				0x0600  /* PWM generator #3 primary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PRI_PWM4				0x0700  /* PWM generator #4 primary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PRI_PWM5		 	       0x0800  /* PWM generator #5 trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PRI_PWM6				0x0900  /* PWM generator #6 trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PRI_PWM7				0x0A00  /* PWM generator #7 trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_PRI_PWM8				0x0B00  /* PWM generator #8 trigger selected for AN3 & AN2 */

#define ADC_AN3_2_TRIG_TMR1				0x0C00  /* Timer #1 period match trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_SEC_PWM1				0x0E00  /* PWM generator #1 secondary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_SEC_PWM2				0x0F00  /* PWM generator #2 secondary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_SEC_PWM3				0x1000  /* PWM generator #3 secondary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_SEC_PWM4				0x1100  /* PWM generator #4 secondary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_SEC_PWM5				0x1200  /* PWM generator #5 secondary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_SEC_PWM6				0x1300  /* PWM generator #6 secondary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_SEC_PWM7				0x1400  /* PWM generator #7 secondary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_SEC_PWM8				0x1500  /* PWM generator #8 secondary trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_SEC_PWM9				0x1600  /* PWM generator #9 secondary trigger selected for AN3 & AN2 */

#define ADC_AN3_2_TRIG_CL_PWM1				       0x1700  /* PWM generator #1 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM2				0x1800  /* PWM generator #2 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM3				0x1900  /* PWM generator #3 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM4				0x1A00  /* PWM generator #4 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM5			       0x1B00  /* PWM generator #5 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM6				0x1C00  /* PWM generator #6 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM7				0x1D00  /* PWM generator #7 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_CL_PWM8				0x1E00  /* PWM generator #8 current limit ADC trigger selected for AN3 & AN2 */
#define ADC_AN3_2_TRIG_TMR2				0x1F00  /* Timer #2 period match trigger selected for AN3 & AN2 */
#endif









#define ADC_AN1_0_IR_GEN_EN				0x0080  /* ADC Interrupt Request Enable for AN1 & AN0 */
#define ADC_AN1_0_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN1 & AN0 */


#define ADC_AN1_0_NOCONV				0x0000  /* No trigger Conversion Enabled for AN1 & AN0 */
#define ADC_AN1_0_TRIG_INDV_SW				0x0001  /* Individual software trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_GLB_SW				0x0002  /* Global software trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PWM_SEVT				0x0003  /* PWM special event trigger selected for AN1 & AN0 */

#if defined (__dsPIC30F__)
#define ADC_AN1_0_TRIG_PWM1				0x0004  /* PWM generator #1 trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PWM2				0x0005  /* PWM generator #2 trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PWM3				0x0006  /* PWM generator #3 trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PWM4				0x0007  /* PWM generator #4 trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_TMR1				0x000C  /* Timer #1 period match trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_TMR2				0x000D  /* Timer #2 period match trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM1				0x000E  /* PWM generator #1 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM2				0x000F  /* PWM generator #2 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM3				0x0010  /* PWM generator #3 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM4				0x0011  /* PWM generator #4 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_FLT_PWM1				0x0016  /* PWM generator #1 fault ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_FLT_PWM2				0x0017  /* PWM generator #2 fault ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_FLT_PWM3				0x0018  /* PWM generator #3 fault ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_FLT_PWM4				0x0019  /* PWM generator #4 fault ADC trigger selected for AN1 & AN0 */

#elif defined (__dsPIC33F__)

#define ADC_AN1_0_TRIG_PRI_PWM1				0x0004   /* PWM generator #1 primary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PRI_PWM2				0x0005   /* PWM generator #2 primary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PRI_PWM3				0x0006   /* PWM generator #3 primary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PRI_PWM4				0x0007   /* PWM generator #4 primary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PRI_PWM5		 	       0x0008   /* PWM generator #5 trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PRI_PWM6				0x0009   /* PWM generator #6 trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PRI_PWM7				0x000A   /* PWM generator #7 trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_PRI_PWM8				0x000B   /* PWM generator #8 trigger selected for AN1 & AN0 */

#define ADC_AN1_0_TRIG_TMR1				0x000C   /* Timer #1 period match trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_SEC_PWM1				0x000E   /* PWM generator #1 secondary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_SEC_PWM2				0x000F   /* PWM generator #2 secondary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_SEC_PWM3				0x001 0  /* PWM generator #3 secondary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_SEC_PWM4				0x0011   /* PWM generator #4 secondary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_SEC_PWM5				0x0012   /* PWM generator #5 secondary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_SEC_PWM6				0x0013   /* PWM generator #6 secondary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_SEC_PWM7				0x0014   /* PWM generator #7 secondary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_SEC_PWM8				0x0015   /* PWM generator #8 secondary trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_SEC_PWM9				0x0016   /* PWM generator #9 secondary trigger selected for AN1 & AN0 */

#define ADC_AN1_0_TRIG_CL_PWM1				       0x0017   /* PWM generator #1 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM2				0x0018   /* PWM generator #2 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM3				0x0019   /* PWM generator #3 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM4				0x001A   /* PWM generator #4 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM5			       0x001B   /* PWM generator #5 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM6				0x001C   /* PWM generator #6 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM7				0x001D   /* PWM generator #7 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_CL_PWM8				0x001E   /* PWM generator #8 current limit ADC trigger selected for AN1 & AN0 */
#define ADC_AN1_0_TRIG_TMR2				0x001F   /* Timer #2 period match trigger selected for AN1 & AN0 */
#endif


/*----------------------------------------------------------------------------------------------------*/
/* ADCPC1 Configuration Bit for Trigger source : */
/*----------------------------------------------------------------------------------------------------*/

#define ADC_AN7_6_IR_GEN_EN				0x8000  /* ADC Interrupt Request Enable for AN7 & AN6 */
#define ADC_AN7_6_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN7 & AN6 */


#define ADC_AN7_6_NOCONV				0x0000  /* No trigger Conversion Enabled for AN7 & AN6 */
#define ADC_AN7_6_TRIG_INDV_SW				0x0100  /* Individual software trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_GLB_SW				0x0200  /* Global software trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PWM_SEVT				0x0300  /* PWM special event trigger selected for AN7 & AN6 */


#if defined (__dsPIC30F__)
#define ADC_AN7_6_TRIG_PWM1				0x0400  /* PWM generator #1 trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PWM2				0x0500  /* PWM generator #2 trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PWM3				0x0600  /* PWM generator #3 trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PWM4				0x0700  /* PWM generator #4 trigger selected for AN7 & AN6 */

#define ADC_AN7_6_TRIG_TMR1				0x0C00  /* Timer #1 period match trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_TMR2				0x0D00  /* Timer #2 period match trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM1				0x0E00  /* PWM generator #1 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM2				0x0F00  /* PWM generator #2 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM3				0x1000  /* PWM generator #3 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM4				0x1100  /* PWM generator #4 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_FLT_PWM1				0x1600  /* PWM generator #1 fault ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_FLT_PWM2				0x1700  /* PWM generator #2 fault ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_FLT_PWM3				0x1800  /* PWM generator #3 fault ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_FLT_PWM4				0x1900  /* PWM generator #4 fault ADC trigger selected for AN7 & AN6 */

#elif defined (__dsPIC33F__)

#define ADC_AN7_6_TRIG_PRI_PWM1				0x0400  /* PWM generator #1 primary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PRI_PWM2				0x0500  /* PWM generator #2 primary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PRI_PWM3				0x0600  /* PWM generator #3 primary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PRI_PWM4				0x0700  /* PWM generator #4 primary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PRI_PWM5		 	       0x0800  /* PWM generator #5 trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PRI_PWM6				0x0900  /* PWM generator #6 trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PRI_PWM7				0x0A00  /* PWM generator #7 trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_PRI_PWM8				0x0B00  /* PWM generator #8 trigger selected for AN7 & AN6 */

#define ADC_AN7_6_TRIG_TMR1				0x0C00  /* Timer #1 period match trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_SEC_PWM1				0x0E00  /* PWM generator #1 secondary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_SEC_PWM2				0x0F00  /* PWM generator #2 secondary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_SEC_PWM3				0x1000  /* PWM generator #3 secondary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_SEC_PWM4				0x1100  /* PWM generator #4 secondary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_SEC_PWM5				0x1200  /* PWM generator #5 secondary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_SEC_PWM6				0x1300  /* PWM generator #6 secondary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_SEC_PWM7				0x1400  /* PWM generator #7 secondary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_SEC_PWM8				0x1500  /* PWM generator #8 secondary trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_SEC_PWM9				0x1600  /* PWM generator #9 secondary trigger selected for AN7 & AN6 */

#define ADC_AN7_6_TRIG_CL_PWM1				       0x1700  /* PWM generator #1 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM2				0x1800  /* PWM generator #2 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM3				0x1900  /* PWM generator #3 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM4				0x1A00  /* PWM generator #4 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM5			       0x1B00  /* PWM generator #5 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM6				0x1C00  /* PWM generator #6 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM7				0x1D00  /* PWM generator #7 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_CL_PWM8				0x1E00  /* PWM generator #8 current limit ADC trigger selected for AN7 & AN6 */
#define ADC_AN7_6_TRIG_TMR2				0x1F00  /* Timer #2 period match trigger selected for AN7 & AN6 */
#endif


#define ADC_AN5_4_IR_GEN_EN				0x0080  /* ADC Interrupt Request Enable for AN5 & AN4 */
#define ADC_AN5_4_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN5 & AN4 */


#define ADC_AN5_4_NOCONV				0x0000  /* No trigger Conversion Enabled for AN5 & AN4 */
#define ADC_AN5_4_TRIG_INDV_SW				0x0001  /* Individual software trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_GLB_SW				0x0002  /* Global software trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PWM_SEVT				0x0003  /* PWM special event trigger selected for AN5 & AN4 */

#if defined (__dsPIC30F__)
#define ADC_AN5_4_TRIG_PWM1				0x0004  /* PWM generator #1 trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PWM2				0x0005  /* PWM generator #2 trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PWM3				0x0006  /* PWM generator #3 trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PWM4				0x0007  /* PWM generator #4 trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_TMR1				0x000C  /* Timer #1 period match trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_TMR2				0x000D  /* Timer #2 period match trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM1				0x000E  /* PWM generator #1 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM2				0x000F  /* PWM generator #2 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM3				0x0010  /* PWM generator #3 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM4				0x0011  /* PWM generator #4 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_FLT_PWM1				0x0016  /* PWM generator #1 fault ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_FLT_PWM2				0x0017  /* PWM generator #2 fault ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_FLT_PWM3				0x0018  /* PWM generator #3 fault ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_FLT_PWM4				0x0019  /* PWM generator #4 fault ADC trigger selected for AN5 & AN4 */

#elif defined (__dsPIC33F__)

#define ADC_AN5_4_TRIG_PRI_PWM1				0x0004   /* PWM generator #1 primary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PRI_PWM2				0x0005   /* PWM generator #2 primary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PRI_PWM3				0x0006   /* PWM generator #3 primary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PRI_PWM4				0x0007   /* PWM generator #4 primary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PRI_PWM5		 	       0x0008   /* PWM generator #5 trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PRI_PWM6				0x0009   /* PWM generator #6 trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PRI_PWM7				0x000A   /* PWM generator #7 trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_PRI_PWM8				0x000B   /* PWM generator #8 trigger selected for AN5 & AN4 */

#define ADC_AN5_4_TRIG_TMR1				0x000C   /* Timer #1 period match trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_SEC_PWM1				0x000E   /* PWM generator #1 secondary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_SEC_PWM2				0x000F   /* PWM generator #2 secondary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_SEC_PWM3				0x0010  /* PWM generator #3 secondary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_SEC_PWM4				0x0011   /* PWM generator #4 secondary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_SEC_PWM5				0x0012   /* PWM generator #5 secondary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_SEC_PWM6				0x0013   /* PWM generator #6 secondary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_SEC_PWM7				0x0014   /* PWM generator #7 secondary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_SEC_PWM8				0x0015   /* PWM generator #8 secondary trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_SEC_PWM9				0x0016  /* PWM generator #9 secondary trigger selected for AN5 & AN4 */

#define ADC_AN5_4_TRIG_CL_PWM1				       0x0017   /* PWM generator #1 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM2				0x0018   /* PWM generator #2 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM3				0x0019   /* PWM generator #3 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM4				0x001A   /* PWM generator #4 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM5			       0x001B   /* PWM generator #5 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM6				0x001C   /* PWM generator #6 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM7				0x001D   /* PWM generator #7 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_CL_PWM8				0x001E   /* PWM generator #8 current limit ADC trigger selected for AN5 & AN4 */
#define ADC_AN5_4_TRIG_TMR2				0x001F   /* Timer #2 period match trigger selected for AN5 & AN4 */
#endif


/*----------------------------------------------------------------------------------------------------*/
/* ADCPC2 Configuration Bit for Trigger source : */
/*----------------------------------------------------------------------------------------------------*/

#define ADC_AN11_10_IR_GEN_EN				0x8000  /* ADC Interrupt Request Enable for AN11 & AN10 */
#define ADC_AN11_10_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN11 & AN10 */


#define ADC_AN11_10_NOCONV				0x0000  /* No trigger Conversion Enabled for AN11 & AN10 */
#define ADC_AN11_10_TRIG_INDV_SW			0x0100  /* Individual software trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_GLB_SW				0x0200  /* Global software trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PWM_SEVT			0x0300  /* PWM special event trigger selected for AN11 & AN10 */

#if defined (__dsPIC30F__)
#define ADC_AN11_10_TRIG_PWM1				0x0400  /* PWM generator #1 trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PWM2				0x0500  /* PWM generator #2 trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PWM3				0x0600  /* PWM generator #3 trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PWM4				0x0700  /* PWM generator #4 trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_TMR1				0x0C00  /* Timer #1 period match trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_TMR2				0x0D00  /* Timer #2 period match trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM1			0x0E00  /* PWM generator #1 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM2			0x0F00  /* PWM generator #2 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM3			0x1000  /* PWM generator #3 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM4			0x1100  /* PWM generator #4 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_FLT_PWM1			0x1600  /* PWM generator #1 fault ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_FLT_PWM2			0x1700  /* PWM generator #2 fault ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_FLT_PWM3			0x1800  /* PWM generator #3 fault ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_FLT_PWM4			0x1900  /* PWM generator #4 fault ADC trigger selected for AN11 & AN10 */

#elif defined (__dsPIC33F__)

#define ADC_AN11_10_TRIG_PRI_PWM1				0x0400  /* PWM generator #1 primary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PRI_PWM2				0x0500  /* PWM generator #2 primary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PRI_PWM3				0x0600  /* PWM generator #3 primary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PRI_PWM4				0x0700  /* PWM generator #4 primary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PRI_PWM5		 	       0x0800  /* PWM generator #5 trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PRI_PWM6				0x0900  /* PWM generator #6 trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PRI_PWM7				0x0A00  /* PWM generator #7 trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_PRI_PWM8				0x0B00  /* PWM generator #8 trigger selected for AN11 & AN10 */

#define ADC_AN11_10_TRIG_TMR1				0x0C00  /* Timer #1 period match trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_SEC_PWM1				0x0E00  /* PWM generator #1 secondary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_SEC_PWM2				0x0F00  /* PWM generator #2 secondary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_SEC_PWM3				0x1000  /* PWM generator #3 secondary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_SEC_PWM4				0x1100  /* PWM generator #4 secondary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_SEC_PWM5				0x1200  /* PWM generator #5 secondary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_SEC_PWM6				0x1300  /* PWM generator #6 secondary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_SEC_PWM7				0x1400  /* PWM generator #7 secondary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_SEC_PWM8				0x1500  /* PWM generator #8 secondary trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_SEC_PWM9				0x1600  /* PWM generator #9 secondary trigger selected for AN11 & AN10 */

#define ADC_AN11_10_TRIG_CL_PWM1				       0x1700  /* PWM generator #1 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM2				0x1800  /* PWM generator #2 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM3				0x1900  /* PWM generator #3 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM4				0x1A00  /* PWM generator #4 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM5			       0x1B00  /* PWM generator #5 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM6				0x1C00  /* PWM generator #6 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM7				0x1D00  /* PWM generator #7 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_CL_PWM8				0x1E00  /* PWM generator #8 current limit ADC trigger selected for AN11 & AN10 */
#define ADC_AN11_10_TRIG_TMR2				0x1F00  /* Timer #2 period match trigger selected for AN11 & AN10 */
#endif




#define ADC_AN9_8_IR_GEN_EN				0x0080  /* ADC Interrupt Request Enable for AN9 & AN8 */
#define ADC_AN9_8_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN9 & AN8 */


#define ADC_AN9_8_NOCONV				0x0000  /* No trigger Conversion Enabled for AN9 & AN8 */
#define ADC_AN9_8_TRIG_INDV_SW				0x0001  /* Individual software trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_GLB_SW				0x0002  /* Global software trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PWM_SEVT				0x0003  /* PWM special event trigger selected for AN9 & AN8 */

#if defined (__dsPIC30F__)
#define ADC_AN9_8_TRIG_PWM1				0x0004  /* PWM generator #1 trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PWM2				0x0005  /* PWM generator #2 trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PWM3				0x0006  /* PWM generator #3 trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PWM4				0x0007  /* PWM generator #4 trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_TMR1				0x000C  /* Timer #1 period match trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_TMR2				0x000D  /* Timer #2 period match trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM1				0x000E  /* PWM generator #1 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM2				0x000F  /* PWM generator #2 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM3				0x0010  /* PWM generator #3 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM4				0x0011  /* PWM generator #4 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_FLT_PWM1				0x0016  /* PWM generator #1 fault ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_FLT_PWM2				0x0017  /* PWM generator #2 fault ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_FLT_PWM3				0x0018  /* PWM generator #3 fault ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_FLT_PWM4				0x0019  /* PWM generator #4 fault ADC trigger selected for AN9 & AN8 */

#elif defined (__dsPIC33F__)

#define ADC_AN9_8_TRIG_PRI_PWM1				0x0004   /* PWM generator #1 primary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PRI_PWM2				0x0005   /* PWM generator #2 primary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PRI_PWM3				0x0006   /* PWM generator #3 primary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PRI_PWM4				0x0007   /* PWM generator #4 primary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PRI_PWM5		 	       0x0008   /* PWM generator #5 trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PRI_PWM6				0x0009   /* PWM generator #6 trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PRI_PWM7				0x000A   /* PWM generator #7 trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_PRI_PWM8				0x000B   /* PWM generator #8 trigger selected for AN9 & AN8 */

#define ADC_AN9_8_TRIG_TMR1				0x000C   /* Timer #1 period match trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_SEC_PWM1				0x000E   /* PWM generator #1 secondary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_SEC_PWM2				0x000F   /* PWM generator #2 secondary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_SEC_PWM3				0x001 0  /* PWM generator #3 secondary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_SEC_PWM4				0x0011   /* PWM generator #4 secondary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_SEC_PWM5				0x0012   /* PWM generator #5 secondary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_SEC_PWM6				0x0013   /* PWM generator #6 secondary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_SEC_PWM7				0x0014   /* PWM generator #7 secondary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_SEC_PWM8				0x0015   /* PWM generator #8 secondary trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_SEC_PWM9				0x0016   /* PWM generator #9 secondary trigger selected for AN9 & AN8 */

#define ADC_AN9_8_TRIG_CL_PWM1				       0x0017   /* PWM generator #1 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM2				0x0018   /* PWM generator #2 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM3				0x0019   /* PWM generator #3 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM4				0x001A   /* PWM generator #4 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM5			       0x001B   /* PWM generator #5 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM6				0x001C   /* PWM generator #6 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM7				0x001D   /* PWM generator #7 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_CL_PWM8				0x001E   /* PWM generator #8 current limit ADC trigger selected for AN9 & AN8 */
#define ADC_AN9_8_TRIG_TMR2				0x001F   /* Timer #2 period match trigger selected for AN9 & AN8 */
#endif

/*----------------------------------------------------------------------------------------------------*/
/* ADCPC3 Configuration Bit for Trigger source : */
/*----------------------------------------------------------------------------------------------------*/
#if defined (__dsPIC33F__)


#define ADC_AN15_14_IR_GEN_EN				0x8000  /* ADC Interrupt Request Enable for AN15 & AN14 */
#define ADC_AN15_14_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN15 & AN14 */

#define ADC_AN15_14_NOCONV				0x0000  /* No trigger Conversion Enabled for AN15 & AN14 */
#define ADC_AN15_14_TRIG_INDV_SW				0x0001  /* Individual software trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_GLB_SW				0x0002  /* Global software trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_PWM_SEVT				0x0003  /* PWM special event trigger selected for AN15 & AN14 */


#define ADC_AN15_14_TRIG_PRI_PWM1				0x0400  /* PWM generator #1 primary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_PRI_PWM2				0x0500  /* PWM generator #2 primary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_PRI_PWM3				0x0600  /* PWM generator #3 primary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_PRI_PWM4				0x0700  /* PWM generator #4 primary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_PRI_PWM5		 	       0x0800  /* PWM generator #5 trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_PRI_PWM6				0x0900  /* PWM generator #6 trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_PRI_PWM7				0x0A00  /* PWM generator #7 trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_PRI_PWM8				0x0B00  /* PWM generator #8 trigger selected for AN15 & AN14 */

#define ADC_AN15_14_TRIG_TMR1				0x0C00  /* Timer #1 period match trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_SEC_PWM1				0x0E00  /* PWM generator #1 secondary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_SEC_PWM2				0x0F00  /* PWM generator #2 secondary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_SEC_PWM3				0x1000  /* PWM generator #3 secondary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_SEC_PWM4				0x1100  /* PWM generator #4 secondary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_SEC_PWM5				0x1200  /* PWM generator #5 secondary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_SEC_PWM6				0x1300  /* PWM generator #6 secondary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_SEC_PWM7				0x1400  /* PWM generator #7 secondary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_SEC_PWM8				0x1500  /* PWM generator #8 secondary trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_SEC_PWM9				0x1600  /* PWM generator #9 secondary trigger selected for AN15 & AN14 */

#define ADC_AN15_14_TRIG_CL_PWM1				       0x1700  /* PWM generator #1 current limit ADC trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_CL_PWM2				0x1800  /* PWM generator #2 current limit ADC trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_CL_PWM3				0x1900  /* PWM generator #3 current limit ADC trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_CL_PWM4				0x1A00  /* PWM generator #4 current limit ADC trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_CL_PWM5			       0x1B00  /* PWM generator #5 current limit ADC trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_CL_PWM6				0x1C00  /* PWM generator #6 current limit ADC trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_CL_PWM7				0x1D00  /* PWM generator #7 current limit ADC trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_CL_PWM8				0x1E00  /* PWM generator #8 current limit ADC trigger selected for AN15 & AN14 */
#define ADC_AN15_14_TRIG_TMR2				0x1F00  /* Timer #2 period match trigger selected for AN15 & AN14 */






#define ADC_AN13_12_IR_GEN_EN				0x0080  /* ADC Interrupt Request Enable for AN13 & AN12 */
#define ADC_AN13_12_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN13 & AN12 */

#define ADC_AN13_12_NOCONV				0x0000  /* No trigger Conversion Enabled for AN13 & AN12 */
#define ADC_AN13_12_TRIG_INDV_SW				0x0001  /* Individual software trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_GLB_SW				0x0002  /* Global software trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_PWM_SEVT				0x0003  /* PWM special event trigger selected for AN13 & AN12 */



#define ADC_AN13_12_TRIG_PRI_PWM1				0x0004   /* PWM generator #1 primary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_PRI_PWM2				0x0005   /* PWM generator #2 primary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_PRI_PWM3				0x0006   /* PWM generator #3 primary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_PRI_PWM4				0x0007   /* PWM generator #4 primary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_PRI_PWM5		 	       0x0008   /* PWM generator #5 trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_PRI_PWM6				0x0009   /* PWM generator #6 trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_PRI_PWM7				0x000A   /* PWM generator #7 trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_PRI_PWM8				0x000B   /* PWM generator #8 trigger selected for AN13 & AN12 */

#define ADC_AN13_12_TRIG_TMR1				0x000C   /* Timer #1 period match trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_SEC_PWM1				0x000E   /* PWM generator #1 secondary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_SEC_PWM2				0x000F   /* PWM generator #2 secondary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_SEC_PWM3				0x001 0  /* PWM generator #3 secondary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_SEC_PWM4				0x0011   /* PWM generator #4 secondary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_SEC_PWM5				0x0012   /* PWM generator #5 secondary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_SEC_PWM6				0x0013   /* PWM generator #6 secondary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_SEC_PWM7				0x0014   /* PWM generator #7 secondary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_SEC_PWM8				0x0015   /* PWM generator #8 secondary trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_SEC_PWM9				0x0016   /* PWM generator #9 secondary trigger selected for AN13 & AN12 */

#define ADC_AN13_12_TRIG_CL_PWM1				       0x0017   /* PWM generator #1 current limit ADC trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_CL_PWM2				0x0018   /* PWM generator #2 current limit ADC trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_CL_PWM3				0x0019   /* PWM generator #3 current limit ADC trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_CL_PWM4				0x001A   /* PWM generator #4 current limit ADC trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_CL_PWM5			       0x001B   /* PWM generator #5 current limit ADC trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_CL_PWM6				0x001C   /* PWM generator #6 current limit ADC trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_CL_PWM7				0x001D   /* PWM generator #7 current limit ADC trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_CL_PWM8				0x001E   /* PWM generator #8 current limit ADC trigger selected for AN13 & AN12 */
#define ADC_AN13_12_TRIG_TMR2				0x001F   /* Timer #2 period match trigger selected for AN13 & AN12 */


#endif




/*----------------------------------------------------------------------------------------------------*/
/* ADCPC4 Configuration Bit for Trigger source : */
/*----------------------------------------------------------------------------------------------------*/


#if defined (__dsPIC33F__)


#define ADC_AN19_18_IR_GEN_EN				0x8000  /* ADC Interrupt Request Enable for AN19 & AN18 */
#define ADC_AN19_18_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN19 & AN18 */

#define ADC_AN19_18_NOCONV				0x0000  /* No trigger Conversion Enabled for AN19 & AN18 */
#define ADC_AN19_18_TRIG_INDV_SW				0x0001  /* Individual software trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_GLB_SW				0x0002  /* Global software trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_PWM_SEVT				0x0003  /* PWM special event trigger selected for AN19 & AN18 */






#define ADC_AN19_18_TRIG_PRI_PWM1				0x0400  /* PWM generator #1 primary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_PRI_PWM2				0x0500  /* PWM generator #2 primary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_PRI_PWM3				0x0600  /* PWM generator #3 primary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_PRI_PWM4				0x0700  /* PWM generator #4 primary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_PRI_PWM5		 	       0x0800  /* PWM generator #5 trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_PRI_PWM6				0x0900  /* PWM generator #6 trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_PRI_PWM7				0x0A00  /* PWM generator #7 trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_PRI_PWM8				0x0B00  /* PWM generator #8 trigger selected for AN19 & AN18 */

#define ADC_AN19_18_TRIG_TMR1				0x0C00  /* Timer #1 period match trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_SEC_PWM1				0x0E00  /* PWM generator #1 secondary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_SEC_PWM2				0x0F00  /* PWM generator #2 secondary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_SEC_PWM3				0x1000  /* PWM generator #3 secondary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_SEC_PWM4				0x1100  /* PWM generator #4 secondary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_SEC_PWM5				0x1200  /* PWM generator #5 secondary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_SEC_PWM6				0x1300  /* PWM generator #6 secondary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_SEC_PWM7				0x1400  /* PWM generator #7 secondary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_SEC_PWM8				0x1500  /* PWM generator #8 secondary trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_SEC_PWM9				0x1600  /* PWM generator #9 secondary trigger selected for AN19 & AN18 */

#define ADC_AN19_18_TRIG_CL_PWM1				       0x1700  /* PWM generator #1 current limit ADC trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_CL_PWM2				0x1800  /* PWM generator #2 current limit ADC trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_CL_PWM3				0x1900  /* PWM generator #3 current limit ADC trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_CL_PWM4				0x1A00  /* PWM generator #4 current limit ADC trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_CL_PWM5			       0x1B00  /* PWM generator #5 current limit ADC trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_CL_PWM6				0x1C00  /* PWM generator #6 current limit ADC trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_CL_PWM7				0x1D00  /* PWM generator #7 current limit ADC trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_CL_PWM8				0x1E00  /* PWM generator #8 current limit ADC trigger selected for AN19 & AN18 */
#define ADC_AN19_18_TRIG_TMR2				0x1F00  /* Timer #2 period match trigger selected for AN19 & AN18 */






#define ADC_AN17_16_IR_GEN_EN				0x0080  /* ADC Interrupt Request Enable for AN17 & AN16 */
#define ADC_AN17_16_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN17 & AN16 */


#define ADC_AN17_16_NOCONV				0x0000  /* No trigger Conversion Enabled for AN17 & AN16 */
#define ADC_AN17_16_TRIG_INDV_SW				0x0001  /* Individual software trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_GLB_SW				0x0002  /* Global software trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_PWM_SEVT				0x0003  /* PWM special event trigger selected for AN17 & AN16 */







#define ADC_AN17_16_TRIG_PRI_PWM1				0x0004   /* PWM generator #1 primary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_PRI_PWM2				0x0005   /* PWM generator #2 primary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_PRI_PWM3				0x0006   /* PWM generator #3 primary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_PRI_PWM4				0x0007   /* PWM generator #4 primary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_PRI_PWM5		 	       0x0008   /* PWM generator #5 trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_PRI_PWM6				0x0009   /* PWM generator #6 trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_PRI_PWM7				0x000A   /* PWM generator #7 trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_PRI_PWM8				0x000B   /* PWM generator #8 trigger selected for AN17 & AN16 */

#define ADC_AN17_16_TRIG_TMR1				0x000C   /* Timer #1 period match trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_SEC_PWM1				0x000E   /* PWM generator #1 secondary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_SEC_PWM2				0x000F   /* PWM generator #2 secondary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_SEC_PWM3				0x001 0  /* PWM generator #3 secondary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_SEC_PWM4				0x0011   /* PWM generator #4 secondary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_SEC_PWM5				0x0012   /* PWM generator #5 secondary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_SEC_PWM6				0x0013   /* PWM generator #6 secondary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_SEC_PWM7				0x0014   /* PWM generator #7 secondary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_SEC_PWM8				0x0015   /* PWM generator #8 secondary trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_SEC_PWM9				0x0016   /* PWM generator #9 secondary trigger selected for AN17 & AN16 */

#define ADC_AN17_16_TRIG_CL_PWM1				       0x0017   /* PWM generator #1 current limit ADC trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_CL_PWM2				0x0018   /* PWM generator #2 current limit ADC trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_CL_PWM3				0x0019   /* PWM generator #3 current limit ADC trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_CL_PWM4				0x001A   /* PWM generator #4 current limit ADC trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_CL_PWM5			       0x001B   /* PWM generator #5 current limit ADC trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_CL_PWM6				0x001C   /* PWM generator #6 current limit ADC trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_CL_PWM7				0x001D   /* PWM generator #7 current limit ADC trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_CL_PWM8				0x001E   /* PWM generator #8 current limit ADC trigger selected for AN17 & AN16 */
#define ADC_AN17_16_TRIG_TMR2				0x001F   /* Timer #2 period match trigger selected for AN17 & AN16 */


#endif




/*----------------------------------------------------------------------------------------------------*/
/* ADCPC5 Configuration Bit for Trigger source : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC33F__)


#define ADC_AN23_22_IR_GEN_EN				0x8000  /* ADC Interrupt Request Enable for AN23 & AN22 */
#define ADC_AN23_22_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN23 & AN22 */



#define ADC_AN23_22_NOCONV				0x0000  /* No trigger Conversion Enabled for AN23 & AN22 */
#define ADC_AN23_22_TRIG_INDV_SW				0x0001  /* Individual software trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_GLB_SW				0x0002  /* Global software trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_PWM_SEVT				0x0003  /* PWM special event trigger selected for AN23 & AN22 */



#define ADC_AN23_22_TRIG_PRI_PWM1				0x0400  /* PWM generator #1 primary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_PRI_PWM2				0x0500  /* PWM generator #2 primary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_PRI_PWM3				0x0600  /* PWM generator #3 primary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_PRI_PWM4				0x0700  /* PWM generator #4 primary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_PRI_PWM5		 	       0x0800  /* PWM generator #5 trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_PRI_PWM6				0x0900  /* PWM generator #6 trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_PRI_PWM7				0x0A00  /* PWM generator #7 trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_PRI_PWM8				0x0B00  /* PWM generator #8 trigger selected for AN23 & AN22 */

#define ADC_AN23_22_TRIG_TMR1				0x0C00  /* Timer #1 period match trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_SEC_PWM1				0x0E00  /* PWM generator #1 secondary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_SEC_PWM2				0x0F00  /* PWM generator #2 secondary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_SEC_PWM3				0x1000  /* PWM generator #3 secondary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_SEC_PWM4				0x1100  /* PWM generator #4 secondary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_SEC_PWM5				0x1200  /* PWM generator #5 secondary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_SEC_PWM6				0x1300  /* PWM generator #6 secondary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_SEC_PWM7				0x1400  /* PWM generator #7 secondary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_SEC_PWM8				0x1500  /* PWM generator #8 secondary trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_SEC_PWM9				0x1600  /* PWM generator #9 secondary trigger selected for AN23 & AN22 */

#define ADC_AN23_22_TRIG_CL_PWM1				       0x1700  /* PWM generator #1 current limit ADC trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_CL_PWM2				0x1800  /* PWM generator #2 current limit ADC trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_CL_PWM3				0x1900  /* PWM generator #3 current limit ADC trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_CL_PWM4				0x1A00  /* PWM generator #4 current limit ADC trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_CL_PWM5			       0x1B00  /* PWM generator #5 current limit ADC trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_CL_PWM6				0x1C00  /* PWM generator #6 current limit ADC trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_CL_PWM7				0x1D00  /* PWM generator #7 current limit ADC trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_CL_PWM8				0x1E00  /* PWM generator #8 current limit ADC trigger selected for AN23 & AN22 */
#define ADC_AN23_22_TRIG_TMR2				0x1F00  /* Timer #2 period match trigger selected for AN23 & AN22 */






#define ADC_AN21_20_IR_GEN_EN				0x0080  /* ADC Interrupt Request Enable for AN21 & AN20 */
#define ADC_AN21_20_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN21 & AN20 */


#define ADC_AN21_20_NOCONV				0x0000  /* No trigger Conversion Enabled for AN21 & AN20 */
#define ADC_AN21_20_TRIG_INDV_SW				0x0001  /* Individual software trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_GLB_SW				0x0002  /* Global software trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_PWM_SEVT				0x0003  /* PWM special event trigger selected for AN21 & AN20 */




#define ADC_AN21_20_TRIG_PRI_PWM1				0x0004   /* PWM generator #1 primary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_PRI_PWM2				0x0005   /* PWM generator #2 primary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_PRI_PWM3				0x0006   /* PWM generator #3 primary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_PRI_PWM4				0x0007   /* PWM generator #4 primary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_PRI_PWM5		 	       0x0008   /* PWM generator #5 trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_PRI_PWM6				0x0009   /* PWM generator #6 trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_PRI_PWM7				0x000A   /* PWM generator #7 trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_PRI_PWM8				0x000B   /* PWM generator #8 trigger selected for AN21 & AN20 */

#define ADC_AN21_20_TRIG_TMR1				0x000C   /* Timer #1 period match trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_SEC_PWM1				0x000E   /* PWM generator #1 secondary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_SEC_PWM2				0x000F   /* PWM generator #2 secondary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_SEC_PWM3				0x001 0  /* PWM generator #3 secondary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_SEC_PWM4				0x0011   /* PWM generator #4 secondary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_SEC_PWM5				0x0012   /* PWM generator #5 secondary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_SEC_PWM6				0x0013   /* PWM generator #6 secondary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_SEC_PWM7				0x0014   /* PWM generator #7 secondary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_SEC_PWM8				0x0015   /* PWM generator #8 secondary trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_SEC_PWM9				0x0016   /* PWM generator #9 secondary trigger selected for AN21 & AN20 */

#define ADC_AN21_20_TRIG_CL_PWM1				       0x0017   /* PWM generator #1 current limit ADC trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_CL_PWM2				0x0018   /* PWM generator #2 current limit ADC trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_CL_PWM3				0x0019   /* PWM generator #3 current limit ADC trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_CL_PWM4				0x001A   /* PWM generator #4 current limit ADC trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_CL_PWM5			       0x001B   /* PWM generator #5 current limit ADC trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_CL_PWM6				0x001C   /* PWM generator #6 current limit ADC trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_CL_PWM7				0x001D   /* PWM generator #7 current limit ADC trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_CL_PWM8				0x001E   /* PWM generator #8 current limit ADC trigger selected for AN21 & AN20 */
#define ADC_AN21_20_TRIG_TMR2				0x001F   /* Timer #2 period match trigger selected for AN21 & AN20 */


#endif






/*----------------------------------------------------------------------------------------------------*/
/* ADCPC6 Configuration Bit for Trigger source : */
/*----------------------------------------------------------------------------------------------------*/


#if defined (__dsPIC33F__)


#define ADC_AN25_24_IR_GEN_EN				0x0080  /* ADC Interrupt Request Enable for AN25 & AN24 */
#define ADC_AN25_24_IR_GEN_DIS				0x0000  /* ADC Interrupt Request Disable for AN25 & AN24 */



#define ADC_AN25_24_NOCONV				0x0000  /* No trigger Conversion Enabled for AN25 & AN24 */
#define ADC_AN25_24_TRIG_INDV_SW				0x0001  /* Individual software trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_GLB_SW				0x0002  /* Global software trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_PWM_SEVT				0x0003  /* PWM special event trigger selected for AN25 & AN24 */





#define ADC_AN25_24_TRIG_PRI_PWM1				0x0400  /* PWM generator #1 primary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_PRI_PWM2				0x0500  /* PWM generator #2 primary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_PRI_PWM3				0x0600  /* PWM generator #3 primary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_PRI_PWM4				0x0700  /* PWM generator #4 primary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_PRI_PWM5		 	       0x0800  /* PWM generator #5 trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_PRI_PWM6				0x0900  /* PWM generator #6 trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_PRI_PWM7				0x0A00  /* PWM generator #7 trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_PRI_PWM8				0x0B00  /* PWM generator #8 trigger selected for AN25 & AN24 */

#define ADC_AN25_24_TRIG_TMR1				0x0C00  /* Timer #1 period match trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_SEC_PWM1				0x0E00  /* PWM generator #1 secondary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_SEC_PWM2				0x0F00  /* PWM generator #2 secondary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_SEC_PWM3				0x1000  /* PWM generator #3 secondary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_SEC_PWM4				0x1100  /* PWM generator #4 secondary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_SEC_PWM5				0x1200  /* PWM generator #5 secondary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_SEC_PWM6				0x1300  /* PWM generator #6 secondary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_SEC_PWM7				0x1400  /* PWM generator #7 secondary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_SEC_PWM8				0x1500  /* PWM generator #8 secondary trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_SEC_PWM9				0x1600  /* PWM generator #9 secondary trigger selected for AN25 & AN24 */

#define ADC_AN25_24_TRIG_CL_PWM1				       0x1700  /* PWM generator #1 current limit ADC trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_CL_PWM2				0x1800  /* PWM generator #2 current limit ADC trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_CL_PWM3				0x1900  /* PWM generator #3 current limit ADC trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_CL_PWM4				0x1A00  /* PWM generator #4 current limit ADC trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_CL_PWM5			       0x1B00  /* PWM generator #5 current limit ADC trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_CL_PWM6				0x1C00  /* PWM generator #6 current limit ADC trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_CL_PWM7				0x1D00  /* PWM generator #7 current limit ADC trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_CL_PWM8				0x1E00  /* PWM generator #8 current limit ADC trigger selected for AN25 & AN24 */
#define ADC_AN25_24_TRIG_TMR2				0x1F00  /* Timer #2 period match trigger selected for AN25 & AN24 */


#endif





















/*----------------------------------------------------------------------------------------------------*/
/* Enable/Disable ADC interrupt : */
/*----------------------------------------------------------------------------------------------------*/

#define ADC_GLOB_INT_EN					0x0001  /* ADC Conversion complete Global Interrupt Enable */
#define ADC_GLOB_INT_DIS				0x0000  /* ADC Conversion complete Global Interrupt Disable */

#define ADC_AN1_0_INT_EN				0x0001  /* ADC Pair #0 (AN1 & AN0) Conversion complete Interrupt Enable */
#define ADC_AN1_0_INT_DIS				0x0000  /* ADC Pair #0 (AN1 & AN0) Conversion complete Interrupt Disable */

#define ADC_AN3_2_INT_EN				0x0001  /* ADC Pair #1 (AN3 & AN2) Conversion complete Interrupt Enable */
#define ADC_AN3_2_INT_DIS				0x0000  /* ADC Pair #1 (AN3 & AN2) Conversion complete Interrupt Disable */

#define ADC_AN5_4_INT_EN				0x0001  /* ADC Pair #2 (AN5 & AN4) Conversion complete Interrupt Enable */
#define ADC_AN5_4_INT_DIS				0x0000  /* ADC Pair #2 (AN5 & AN4) Conversion complete Interrupt Disable */

#define ADC_AN7_6_INT_EN				0x0001  /* ADC Pair #3 (AN7 & AN6) Conversion complete Interrupt Enable */
#define ADC_AN7_6_INT_DIS				0x0000  /* ADC Pair #3 (AN7 & AN6) Conversion complete Interrupt Disable */

#define ADC_AN9_8_INT_EN				0x0001  /* ADC Pair #4 (AN9 & AN8) Conversion complete Interrupt Enable */
#define ADC_AN9_8_INT_DIS				0x0000  /* ADC Pair #4 (AN9 & AN8) Conversion complete Interrupt Disable */

#define ADC_AN11_10_INT_EN				0x0001  /* ADC Pair #5 (AN11 & AN10) Conversion complete Interrupt Enable */
#define ADC_AN11_10_INT_DIS				0x0000  /* ADC Pair #5 (AN11 & AN10) Conversion complete Interrupt Disable */

#if defined (__dsPIC33F__)
#define ADC_AN13_12_INT_EN				0x0001  /* ADC Pair #6 (AN13 & AN12) Conversion complete Interrupt Enable */
#define ADC_AN13_12_INT_DIS				0x0000  /* ADC Pair #6 (AN13 & AN12) Conversion complete Interrupt Disable */

#define ADC_AN15_14_INT_EN				0x0001  /* ADC Pair #6 (AN15 & AN14) Conversion complete Interrupt Enable */
#define ADC_AN15_14_INT_DIS				0x0000  /* ADC Pair #6 (AN15 & AN14) Conversion complete Interrupt Disable */

#define ADC_AN17_16_INT_EN				0x0001  /* ADC Pair #6 (AN17 & AN16) Conversion complete Interrupt Enable */
#define ADC_AN17_16_INT_DIS				0x0000  /* ADC Pair #6 (AN17 & AN16) Conversion complete Interrupt Disable */

#define ADC_AN19_18_INT_EN				0x0001  /* ADC Pair #6 (AN19 & AN18) Conversion complete Interrupt Enable */
#define ADC_AN19_18_INT_DIS				0x0000  /* ADC Pair #6 (AN19 & AN18) Conversion complete Interrupt Disable */

#define ADC_AN21_20_INT_EN				0x0001  /* ADC Pair #6 (AN21 & AN20) Conversion complete Interrupt Enable */
#define ADC_AN21_20_INT_DIS				0x0000  /* ADC Pair #6 (AN21 & AN20) Conversion complete Interrupt Disable */


#define ADC_AN23_22_INT_EN				0x0001  /* ADC Pair #6 (AN23 & AN22) Conversion complete Interrupt Enable */
#define ADC_AN23_22_INT_DIS				0x0000  /* ADC Pair #6 (AN23 & AN22) Conversion complete Interrupt Disable */


#define ADC_AN25_24_INT_EN				0x0001  /* ADC Pair #6 (AN25 & AN24) Conversion complete Interrupt Enable */
#define ADC_AN25_24_INT_DIS				0x0000  /* ADC Pair #6 (AN25 & AN24) Conversion complete Interrupt Disable */

#endif



/*----------------------------------------------------------------------------------------------------*/
/* ADC interrupt priority : */
/*----------------------------------------------------------------------------------------------------*/

#define ADC_GLOB_INT_PR7				0x0007  /* ADC Global conv interrupt priority 7 (High Priority) */
#define ADC_GLOB_INT_PR6				0x0006  /* ADC Global conv interrupt priority 6                 */
#define ADC_GLOB_INT_PR5				0x0005  /* ADC Global conv interrupt priority 5                 */
#define ADC_GLOB_INT_PR4				0x0004  /* ADC Global conv interrupt priority 4                 */
#define ADC_GLOB_INT_PR3				0x0003  /* ADC Global conv interrupt priority 3                 */
#define ADC_GLOB_INT_PR2				0x0002  /* ADC Global conv interrupt priority 2                 */
#define ADC_GLOB_INT_PR1				0x0001  /* ADC Global conv interrupt priority 1 (Low Priority)  */
#define ADC_GLOB_INT_DIS				0x0000  /* ADC Global conv interrupt priority Disabled          */

#define ADC_AN1_0_INT_PR7				0x0007  /* ADC Pair 0 (AN1 & AN0) conv interrupt priority 7 (High Priority) */
#define ADC_AN1_0_INT_PR6				0x0006  /* ADC Pair 0 (AN1 & AN0) conv interrupt priority 6                 */
#define ADC_AN1_0_INT_PR5				0x0005  /* ADC Pair 0 (AN1 & AN0) conv interrupt priority 5                 */
#define ADC_AN1_0_INT_PR4				0x0004  /* ADC Pair 0 (AN1 & AN0) conv interrupt priority 4                 */
#define ADC_AN1_0_INT_PR3				0x0003  /* ADC Pair 0 (AN1 & AN0) conv interrupt priority 3                 */
#define ADC_AN1_0_INT_PR2				0x0002  /* ADC Pair 0 (AN1 & AN0) conv interrupt priority 2                 */
#define ADC_AN1_0_INT_PR1				0x0001  /* ADC Pair 0 (AN1 & AN0) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN1_0_INT_DIS				0x0000  /* ADC Pair 0 (AN1 & AN0) conv interrupt priority Disabled          */

#define ADC_AN3_2_INT_PR7				0x0007  /* ADC Pair 1 (AN3 & AN2) conv interrupt priority 7 (High Priority) */
#define ADC_AN3_2_INT_PR6				0x0006  /* ADC Pair 1 (AN3 & AN2) conv interrupt priority 6                 */
#define ADC_AN3_2_INT_PR5				0x0005  /* ADC Pair 1 (AN3 & AN2) conv interrupt priority 5                 */
#define ADC_AN3_2_INT_PR4				0x0004  /* ADC Pair 1 (AN3 & AN2) conv interrupt priority 4                 */
#define ADC_AN3_2_INT_PR3				0x0003  /* ADC Pair 1 (AN3 & AN2) conv interrupt priority 3                 */
#define ADC_AN3_2_INT_PR2				0x0002  /* ADC Pair 1 (AN3 & AN2) conv interrupt priority 2                 */
#define ADC_AN3_2_INT_PR1				0x0001  /* ADC Pair 1 (AN3 & AN2) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN3_2_INT_DIS				0x0000  /* ADC Pair 1 (AN3 & AN2) conv interrupt priority Disabled          */

#define ADC_AN5_4_INT_PR7				0x0007  /* ADC Pair 2 (AN5 & AN4) conv interrupt priority 7 (High Priority) */
#define ADC_AN5_4_INT_PR6				0x0006  /* ADC Pair 2 (AN5 & AN4) conv interrupt priority 6                 */
#define ADC_AN5_4_INT_PR5				0x0005  /* ADC Pair 2 (AN5 & AN4) conv interrupt priority 5                 */
#define ADC_AN5_4_INT_PR4				0x0004  /* ADC Pair 2 (AN5 & AN4) conv interrupt priority 4                 */
#define ADC_AN5_4_INT_PR3				0x0003  /* ADC Pair 2 (AN5 & AN4) conv interrupt priority 3                 */
#define ADC_AN5_4_INT_PR2				0x0002  /* ADC Pair 2 (AN5 & AN4) conv interrupt priority 2                 */
#define ADC_AN5_4_INT_PR1				0x0001  /* ADC Pair 2 (AN5 & AN4) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN5_4_INT_DIS				0x0000  /* ADC Pair 2 (AN5 & AN4) conv interrupt priority Disabled          */


#define ADC_AN7_6_INT_PR7				0x0007  /* ADC Pair 3 (AN7 & AN6) conv interrupt priority 7 (High Priority) */
#define ADC_AN7_6_INT_PR6				0x0006  /* ADC Pair 3 (AN7 & AN6) conv interrupt priority 6                 */
#define ADC_AN7_6_INT_PR5				0x0005  /* ADC Pair 3 (AN7 & AN6) conv interrupt priority 5                 */
#define ADC_AN7_6_INT_PR4				0x0004  /* ADC Pair 3 (AN7 & AN6) conv interrupt priority 4                 */
#define ADC_AN7_6_INT_PR3				0x0003  /* ADC Pair 3 (AN7 & AN6) conv interrupt priority 3                 */
#define ADC_AN7_6_INT_PR2				0x0002  /* ADC Pair 3 (AN7 & AN6) conv interrupt priority 2                 */
#define ADC_AN7_6_INT_PR1				0x0001  /* ADC Pair 3 (AN7 & AN6) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN7_6_INT_DIS				0x0000  /* ADC Pair 3 (AN7 & AN6) conv interrupt priority Disabled          */

#define ADC_AN9_8_INT_PR7				0x0007  /* ADC Pair 4 (AN9 & AN8) conv interrupt priority 7 (High Priority) */
#define ADC_AN9_8_INT_PR6				0x0006  /* ADC Pair 4 (AN9 & AN8) conv interrupt priority 6                 */
#define ADC_AN9_8_INT_PR5				0x0005  /* ADC Pair 4 (AN9 & AN8) conv interrupt priority 5                 */
#define ADC_AN9_8_INT_PR4				0x0004  /* ADC Pair 4 (AN9 & AN8) conv interrupt priority 4                 */
#define ADC_AN9_8_INT_PR3				0x0003  /* ADC Pair 4 (AN9 & AN8) conv interrupt priority 3                 */
#define ADC_AN9_8_INT_PR2				0x0002  /* ADC Pair 4 (AN9 & AN8) conv interrupt priority 2                 */
#define ADC_AN9_8_INT_PR1				0x0001  /* ADC Pair 4 (AN9 & AN8) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN9_8_INT_DIS				0x0000  /* ADC Pair 4 (AN9 & AN8) conv interrupt priority Disabled          */

#define ADC_AN11_10_INT_PR7				0x0007  /* ADC Pair 5 (AN11 & AN10) conv interrupt priority 7 (High Priority) */
#define ADC_AN11_10_INT_PR6				0x0006  /* ADC Pair 5 (AN11 & AN10) conv interrupt priority 6                 */
#define ADC_AN11_10_INT_PR5				0x0005  /* ADC Pair 5 (AN11 & AN10) conv interrupt priority 5                 */
#define ADC_AN11_10_INT_PR4				0x0004  /* ADC Pair 5 (AN11 & AN10) conv interrupt priority 4                 */
#define ADC_AN11_10_INT_PR3				0x0003  /* ADC Pair 5 (AN11 & AN10) conv interrupt priority 3                 */
#define ADC_AN11_10_INT_PR2				0x0002  /* ADC Pair 5 (AN11 & AN10) conv interrupt priority 2                 */
#define ADC_AN11_10_INT_PR1				0x0001  /* ADC Pair 5 (AN11 & AN10) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN11_10_INT_DIS				0x0000  /* ADC Pair 5 (AN11 & AN10) conv interrupt priority Disabled          */

#if defined (__dsPIC33F__)
#define ADC_AN13_12_INT_PR7				0x0007  /* ADC Pair 6 (AN13 & AN12) conv interrupt priority 7 (High Priority) */
#define ADC_AN13_12_INT_PR6				0x0006  /* ADC Pair 6 (AN13 & AN12) conv interrupt priority 6                 */
#define ADC_AN13_12_INT_PR5				0x0005  /* ADC Pair 6 (AN13 & AN12) conv interrupt priority 5                 */
#define ADC_AN13_12_INT_PR4				0x0004  /* ADC Pair 6 (AN13 & AN12) conv interrupt priority 4                 */
#define ADC_AN13_12_INT_PR3				0x0003  /* ADC Pair 6 (AN13 & AN12) conv interrupt priority 3                 */
#define ADC_AN13_12_INT_PR2				0x0002  /* ADC Pair 6 (AN13 & AN12) conv interrupt priority 2                 */
#define ADC_AN13_12_INT_PR1				0x0001  /* ADC Pair 6 (AN13 & AN12) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN13_12_INT_DIS				0x0000  /* ADC Pair 6 (AN13 & AN12) conv interrupt priority Disabled          */


#define ADC_AN15_14_INT_PR7				0x0007  /* ADC Pair 6 (AN15 & AN14) conv interrupt priority 7 (High Priority) */
#define ADC_AN15_14_INT_PR6				0x0006  /* ADC Pair 6 (AN15 & AN14) conv interrupt priority 6                 */
#define ADC_AN15_14_INT_PR5				0x0005  /* ADC Pair 6 (AN15 & AN14) conv interrupt priority 5                 */
#define ADC_AN15_14_INT_PR4				0x0004  /* ADC Pair 6 (AN15 & AN14) conv interrupt priority 4                 */
#define ADC_AN15_14_INT_PR3				0x0003  /* ADC Pair 6 (AN15 & AN14) conv interrupt priority 3                 */
#define ADC_AN15_14_INT_PR2				0x0002  /* ADC Pair 6 (AN15 & AN14) conv interrupt priority 2                 */
#define ADC_AN15_14_INT_PR1				0x0001  /* ADC Pair 6 (AN15 & AN14) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN15_14_INT_DIS				0x0000  /* ADC Pair 6 (AN15 & AN14) conv interrupt priority Disabled          */


#define ADC_AN17_16_INT_PR7				0x0007  /* ADC Pair 6 (AN17 & AN16) conv interrupt priority 7 (High Priority) */
#define ADC_AN17_16_INT_PR6				0x0006  /* ADC Pair 6 (AN17 & AN16) conv interrupt priority 6                 */
#define ADC_AN17_16_INT_PR5				0x0005  /* ADC Pair 6 (AN17 & AN16) conv interrupt priority 5                 */
#define ADC_AN17_16_INT_PR4				0x0004  /* ADC Pair 6 (AN17 & AN16) conv interrupt priority 4                 */
#define ADC_AN17_16_INT_PR3				0x0003  /* ADC Pair 6 (AN17 & AN16) conv interrupt priority 3                 */
#define ADC_AN17_16_INT_PR2				0x0002  /* ADC Pair 6 (AN17 & AN16) conv interrupt priority 2                 */
#define ADC_AN17_16_INT_PR1				0x0001  /* ADC Pair 6 (AN17 & AN16) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN17_16_INT_DIS				0x0000  /* ADC Pair 6 (AN17 & AN16) conv interrupt priority Disabled          */


#define ADC_AN19_18_INT_PR7				0x0007  /* ADC Pair 6 (AN19 & AN18) conv interrupt priority 7 (High Priority) */
#define ADC_AN19_18_INT_PR6				0x0006  /* ADC Pair 6 (AN19 & AN18) conv interrupt priority 6                 */
#define ADC_AN19_18_INT_PR5				0x0005  /* ADC Pair 6 (AN19 & AN18) conv interrupt priority 5                 */
#define ADC_AN19_18_INT_PR4				0x0004  /* ADC Pair 6 (AN19 & AN18) conv interrupt priority 4                 */
#define ADC_AN19_18_INT_PR3				0x0003  /* ADC Pair 6 (AN19 & AN18) conv interrupt priority 3                 */
#define ADC_AN19_18_INT_PR2				0x0002  /* ADC Pair 6 (AN19 & AN18) conv interrupt priority 2                 */
#define ADC_AN19_18_INT_PR1				0x0001  /* ADC Pair 6 (AN19 & AN18) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN19_18_INT_DIS				0x0000  /* ADC Pair 6 (AN19 & AN18) conv interrupt priority Disabled          */


#define ADC_AN21_20_INT_PR7				0x0007  /* ADC Pair 6 (AN21 & AN20) conv interrupt priority 7 (High Priority) */
#define ADC_AN21_20_INT_PR6				0x0006  /* ADC Pair 6 (AN21 & AN20) conv interrupt priority 6                 */
#define ADC_AN21_20_INT_PR5				0x0005  /* ADC Pair 6 (AN21 & AN20) conv interrupt priority 5                 */
#define ADC_AN21_20_INT_PR4				0x0004  /* ADC Pair 6 (AN21 & AN20) conv interrupt priority 4                 */
#define ADC_AN21_20_INT_PR3				0x0003  /* ADC Pair 6 (AN21 & AN20) conv interrupt priority 3                 */
#define ADC_AN21_20_INT_PR2				0x0002  /* ADC Pair 6 (AN21 & AN20) conv interrupt priority 2                 */
#define ADC_AN21_20_INT_PR1				0x0001  /* ADC Pair 6 (AN21 & AN20) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN21_20_INT_DIS				0x0000  /* ADC Pair 6 (AN21 & AN20) conv interrupt priority Disabled          */



#define ADC_AN23_22_INT_PR7				0x0007  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 7 (High Priority) */
#define ADC_AN23_22_INT_PR6				0x0006  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 6                 */
#define ADC_AN23_22_INT_PR5				0x0005  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 5                 */
#define ADC_AN23_22_INT_PR4				0x0004  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 4                 */
#define ADC_AN23_22_INT_PR3				0x0003  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 3                 */
#define ADC_AN23_22_INT_PR2				0x0002  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 2                 */
#define ADC_AN23_22_INT_PR1				0x0001  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN23_22_INT_DIS				0x0000  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority Disabled          */




#define ADC_AN25_24_INT_PR7				0x0007  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 7 (High Priority) */
#define ADC_AN25_24_INT_PR6				0x0006  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 6                 */
#define ADC_AN25_24_INT_PR5				0x0005  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 5                 */
#define ADC_AN25_24_INT_PR4				0x0004  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 4                 */
#define ADC_AN25_24_INT_PR3				0x0003  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 3                 */
#define ADC_AN25_24_INT_PR2				0x0002  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 2                 */
#define ADC_AN25_24_INT_PR1				0x0001  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority 1 (Low Priority)  */
#define ADC_AN25_24_INT_DIS				0x0000  /* ADC Pair 6 (AN23 & AN22) conv interrupt priority Disabled          */
#endif




/* *******************A/D Converter Function Prototypes *****************************************/

void OpenSmpsADC(unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC */

void ConfigSmpsADCPort(unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Port Pin*/

void ConfigSmpsADCTrigSource0(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #0 */
void ConfigSmpsADCTrigSource1(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #1 */
void ConfigSmpsADCTrigSource2(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #2 */
void ConfigSmpsADCTrigSource3(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #3 */
void ConfigSmpsADCTrigSource4(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #4 */
void ConfigSmpsADCTrigSource5(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #5 */
#if defined (__dsPIC33F__)
void ConfigSmpsADCTrigSource6(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #6 */
void ConfigSmpsADCTrigSource7(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #7 */
void ConfigSmpsADCTrigSource8(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #8 */
void ConfigSmpsADCTrigSource9(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #9 */
void ConfigSmpsADCTrigSource10(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #10 */
void ConfigSmpsADCTrigSource11(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #11 */
void ConfigSmpsADCTrigSource12(unsigned int adc_common_intp,unsigned int config1) __attribute__ ((section (".libperi")));   /* config ADC Pair #12 */
#endif

void ConvertSmpsADCPair0(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #0 */
void ConvertSmpsADCPair1(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #1 */
void ConvertSmpsADCPair2(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #2 */
void ConvertSmpsADCPair3(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #3 */
void ConvertSmpsADCPair4(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #4 */
void ConvertSmpsADCPair5(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #5 */
#if defined (__dsPIC33F__)
void ConvertSmpsADCPair6(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #6 */
void ConvertSmpsADCPair7(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #7 */
void ConvertSmpsADCPair8(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #8 */
void ConvertSmpsADCPair9(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #9 */
void ConvertSmpsADCPair10(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #10 */
void ConvertSmpsADCPair11(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #11*/
void ConvertSmpsADCPair12(void) __attribute__ ((section (".libperi")));   /* Start an A/D conversion for Pair #12 */
#endif

void ConfigIntSmpsADCPair0(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair1(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair2(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair3(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair4(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair5(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
#if defined (__dsPIC33F__)
void ConfigIntSmpsADCPair6(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair7(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair8(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair9(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair10(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair11(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
void ConfigIntSmpsADCPair12(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));
#endif


void ConfigIntSmpsADCGlobal(unsigned int adc_intp, unsigned int adc_intp_priority) __attribute__ ((section (".libperi")));

unsigned int ReadSmpsADC(unsigned int buff_no) __attribute__ ((section (".libperi")));  /*Read A/D result */

char BusySmpsADCPair0(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #0 */
char BusySmpsADCPair1(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #1 */
char BusySmpsADCPair2(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #2 */
char BusySmpsADCPair3(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #3 */
char BusySmpsADCPair4(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #4 */
char BusySmpsADCPair5(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #5 */
#if defined (__dsPIC33F__)
char BusySmpsADCPair6(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #6 */
char BusySmpsADCPair7(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #7 */
char BusySmpsADCPair8(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #8 */
char BusySmpsADCPair9(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #9 */
char BusySmpsADCPair10(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #10 */
char BusySmpsADCPair11(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #11 */
char BusySmpsADCPair12(void) __attribute__ ((section (".libperi")));   /* Check status of A/D conversion Pair #12 */
#endif

void CloseSmpsADC(void) __attribute__ ((section (".libperi")));   /* Turn off A/D */


/*******************************************Macros******************************************/
/* Macros to  Enable/Disable interrupt generation and set Interrupt priority of ADC Pairs */

/******************************************************************************
 Macro      : SetIntSmpsADCPairx(state)
 Overview   : Macro Enables/Disables the SMPS ADC interrupt generation
 Parameter  : state - 1 interrupt generation  is enabled 
                      0 interrupt generation is disabled
 Remarks    : None
 *****************************************************************************/

/***********************************************************************
Macro      : SetPriorityIntSmpsADCPairx(priority) 
Overview   : This macro sets priority for SMPS ADC interrupt. 
Parameter  : priority - This input parameter is the level of interrupt priority 
Remarks    : This macro sets SMPS ADC Interrupt Priority bits of Interrupt 
             Priority Control register
************************************************************************/  
#define SetIntSmpsADCGlobal(state)                    		(_ADIE = state)
#define SetPriorityIntSmpsADCGlobal(priority)			(_ADIP = priority)

#define SetIntSmpsADCPair0(state)   				(_ADCP0IE = state)   
#define SetPriorityIntSmpsADCPair0(priority)			(_ADCP0IP = priority)

#define SetIntSmpsADCPair1(state)                    		(_ADCP1IE = state)
#define SetPriorityIntSmpsADCPair1(priority)			(_ADCP1IP = priority)

#define SetIntSmpsADCPair2(state)                     		(_ADCP2IE = state)
#define SetPriorityIntSmpsADCPair2(priority)			(_ADCP2IP = priority)

#define SetIntSmpsADCPair3(state)                    		(_ADCP3IE = state)
#define SetPriorityIntSmpsADCPair3(priority)			(_ADCP3IP = priority)

#define SetIntSmpsADCPair4(state)                   		(_ADCP4IE = state)
#define SetPriorityIntSmpsADCPair4(priority)			(_ADCP4IP = priority)

#define SetIntSmpsADCPair5(state)                    		(_ADCP5IE = state)
#define SetPriorityIntSmpsADCPair5(priority)			(_ADCP5IP = priority)

#if defined (__dsPIC33F__)
#define SetIntSmpsADCPair6(state)                    		(_ADCP6IE = state)
#define SetPriorityIntSmpsADCPair6(priority)			(_ADCP6IP = priority)

#define SetIntSmpsADCPair7(state)   				(_ADCP7IE = state)   
#define SetPriorityIntSmpsADCPair7(priority)			(_ADCP7IP = priority)

#define SetIntSmpsADCPair8(state)                    		(_ADCP8IE = state)
#define SetPriorityIntSmpsADCPair8(priority)			(_ADCP8IP = priority)

#define SetIntSmpsADCPair9(state)                     		(_ADCP9IE = state)
#define SetPriorityIntSmpsADCPair9(priority)			(_ADCP9IP = priority)

#define SetIntSmpsADCPair10(state)                    		(_ADCP10IE = state)
#define SetPriorityIntSmpsADCPair10(priority)			(_ADCP10IP = priority)

#define SetIntSmpsADCPair11(state)                   		(_ADCP11IE = state)
#define SetPriorityIntSmpsADCPair11(priority)			(_ADCP11IP = priority)

#define SetIntSmpsADCPair12(state)                    		(_ADCP12IE = state)
#define SetPriorityIntSmpsADCPair12(priority)			(_ADCP12IP = priority)

#endif

/* Macros to  Enable/Disable common ADC interrupt generation */

#define SetCommonIntSmpsADCPair0(state)                    	(ADCPC0bits.IRQEN0 = state)  
#define SetCommonIntSmpsADCPair1(state)                    	(ADCPC0bits.IRQEN1 = state)
#define SetCommonIntSmpsADCPair2(state)                    	(ADCPC1bits.IRQEN2 = state)
#define SetCommonIntSmpsADCPair3(state)                    	(ADCPC1bits.IRQEN3 = state)
#define SetCommonIntSmpsADCPair4(state)                    	(ADCPC2bits.IRQEN4 = state)
#define SetCommonIntSmpsADCPair5(state)                    	(ADCPC2bits.IRQEN5 = state)

#if defined (__dsPIC33F__)
#define SetCommonIntSmpsADCPair6(state)                    	(ADCPC3bits.IRQEN6 = state)
#define SetCommonIntSmpsADCPair7(state)                    	(ADCPC3bits.IRQEN7 = state)
#define SetCommonIntSmpsADCPair8(state)                    	(ADCPC4bits.IRQEN8 = state)
#define SetCommonIntSmpsADCPair9(state)                    	(ADCPC4bits.IRQEN9 = state)
#define SetCommonIntSmpsADCPair10(state)                    	(ADCPC5bits.IRQEN10 = state)
#define SetCommonIntSmpsADCPair11(state)                    	(ADCPC5bits.IRQEN11 = state)
#define SetCommonIntSmpsADCPair12(state)                    	(ADCPC6bits.IRQEN12 = state)

#endif

/* Macros to  clear ADC interrupt bit */

#define ClearSmpsADCIntGlobal()                                   (_ADIF = 0)
#define ClearSmpsADCIntPair0()                                    (_ADCP0IF = 0) 
#define ClearSmpsADCIntPair1()                                    (_ADCP1IF = 0)
#define ClearSmpsADCIntPair2()                                    (_ADCP2IF = 0)
#define ClearSmpsADCIntPair3()                                    (_ADCP3IF = 0)
#define ClearSmpsADCIntPair4()                                    (_ADCP4IF = 0)
#define ClearSmpsADCIntPair5()                                    (_ADCP5IF = 0)

#if defined (__dsPIC33F__)
#define ClearSmpsADCIntPair6()                                    (_ADCP6IF = 0)
#define ClearSmpsADCIntPair7()                                    (_ADCP7IF = 0)
#define ClearSmpsADCIntPair8()                                    (_ADCP8IF = 0)
#define ClearSmpsADCIntPair9()                                    (_ADCP9IF = 0)
#define ClearSmpsADCIntPair10()                                    (_ADCP10IF = 0)
#define ClearSmpsADCIntPair11()                                    (_ADCP11IF = 0)
#define ClearSmpsADCIntPair12()                                    (_ADCP12IF = 0)
#endif

#endif/*__SMPSADC_H*/

