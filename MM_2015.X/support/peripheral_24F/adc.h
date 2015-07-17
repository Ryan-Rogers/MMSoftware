 #ifndef __ADC_H
 #define  __ADC_H
 /*****************************************************************************
 *                  ADC PERIPHERAL LIBRARY HEADER FILE
 ******************************************************************************
 * FileName:        adc.h
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
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v4_1)||\
	defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2)||\
	defined (adc_v6_1) || defined (adc_v6_2) ||defined (adc_v7_1) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3) || defined (LIB_BUILD)
#define AD1CON1_VALUE                0x0000
#define AD1CON2_VALUE                0x0000
#define AD1CON3_VALUE                0x0000
#define AD1CON4_VALUE                0x0000
#define AD1CON5_VALUE                0x0000
#define AD1CHS123_VALUE              0x0000
#define AD1CH0_VALUE                 0x0000
#define AD1CHSS_VALUE                0x0000
#define AD1CSSL_VALUE                0x0000
#define AD1PCFGH_VALUE               0x0000
#define AD1PCFGL_VALUE               0x0000

#if defined (adc_v6_1) || defined (adc_v6_2)
  #define  AD1CHS0_VALUE			 0x0000 
#endif  

#ifndef USE_AND_OR
/***** AD1CON1 register definition ****/
#define ADC_MODULE_ON               0xFFFF /*A/D Converter on */
#define ADC_MODULE_OFF              0x7FFF /* A/D Converter off */

#define ADC_IDLE_CONTINUE           0xDFFF /* A/D Operate in Idle mode */
#define ADC_IDLE_STOP               0xFFFF /* A/D Stop in Idle mode */

#if defined (adc_v5_1)|| defined (adc_v5_2)  
#define ADC_DMA_EXT_BUF_MODE     	0xFFFF /*A/D Extended DMA buffer mode is enabled*/
#define ADC_DMA_PIA_MODE          	0xEFFF /*A/D Peripheral Indirect Addressing mode is disabled*/ 

#define ADC_DMA_ENABLE              0xFFFF /*DMA operation of A/D is enabled*/
#define ADC_DMA_DISABLE             0xF7FF /*DMA operation of A/D is disabled*/
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_12BIT_MODE              0xFFFF /*12-bit A/D operation*/
#define ADC_10BIT_MODE              0xFFBF /*10-bit A/D operation*/
#endif

#define ADC_FORMAT_SIGN_FRACT       0xFFFF /* A/D data format signed fractional */
#define ADC_FORMAT_FRACT            0xFEFF /* A/D data format fractional */
#define ADC_FORMAT_SIGN_INT         0xFDFF /* A/D data format signed integer */
#define ADC_FORMAT_INTG             0xFCFF /* A/D data format integer */

#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v6_1) || \
	defined (adc_v6_2) || defined (adc_v7_1)||defined (adc_v7_2) 
#define ADC_CLK_AUTO                0xFFFF /* Internal counter ends sampling and starts conversion */
#elif defined (adc_v5_1)||defined (adc_v5_2)
#define ADC_CLK_AUTO              	0xFF7F /*The SAMP bit is cleared after SAMC<4:0> number of TAD clocks following 
                                           the SAMP bit being set.No Extended Sample Time is present.*/										   
#endif
#if defined (adc_v2_1)
#define ADC_CLK_CTMU                0xFF9F /* CTMU event ends sampling and starts conversion */
#elif defined (adc_v1_4)||defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8) || \
      defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CLK_CTMU                0xFFDF /* CTMU event ends sampling and starts conversion */
#elif defined (adc_v5_1)||defined (adc_v5_2)
#define ADC_CLK_CTMU                0xFF4F /* CTMU event ends sampling and starts conversion */
#endif
#if defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8)||\
    defined (adc_v3_1)||defined (adc_v3_2)
#define ADC_CLK_TMR5                0xFF9F /* Timer5 compare ends sampling and starts conversion */
#elif defined (adc_v2_1)
#define ADC_CLK_TMR5                0xFF7F /* Timer5 compare ends sampling and starts conversion */
#elif defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CLK_MPWM                0xFF7F /* MPWM interval ends sampling and starts conversion */
#elif defined (adc_v5_1)||defined (adc_v5_2)
#define ADC_CLK_TMR5                0xFF3F /* Timer5 compare ends sampling and starts conversion */
#endif
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v6_1) || defined (adc_v6_2) 
#define ADC_CLK_TMR3                0xFF5F /* Timer3 compare ends sampling and starts conversion */
#define ADC_CLK_INT0                0xFF3F /* Active transition on INT0 ends sampling and starts conversion */
#define ADC_CLK_MANUAL              0xFF1F /* Clearing sample (SAMP) bit ends sampling and starts conversion */
#elif defined (adc_v5_1)||defined (adc_v5_2)
#define ADC_CLK_TMR3                0xFF2F /* Timer3 compare ends sampling and starts conversion */
#define ADC_CLK_INT0                0xFF1F /* Active transition on INT0 ends sampling and starts conversion */
#elif defined (adc_v7_1)||defined (adc_v7_2) 
#define ADC_CLK_TMR1                0xFF5F /* Timer1 compare ends sampling and starts conversion */
#define ADC_CLK_INT0                0xFF3F /* Active transition on INT0 ends sampling and starts conversion */
#define ADC_CLK_MANUAL              0xFF1F /* Clearing sample (SAMP) bit ends sampling and starts conversion */
#endif
#if defined (adc_v5_1)||defined (adc_v5_2)
#define ADC_CLK_TMR1                0xFF5F /* Timer1 compare ends sampling and starts conversion */
#define ADC_CLK_CLEAR           	0xFF0F /*The SAMP bit must be cleared by software*/
#endif

#if defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CLK_CLC2                 0xFFCF /* CLC2 event ends sampling and starts conversion */
#define ADC_CLK_SCCP4		0xFFBF /* SCCP4 event ends sampling and starts conversion */
#define ADC_CLK_MCCP3		0xFFAF /* MCCP3 event ends sampling and starts conversion */
#define ADC_CLK_MCCP2		0xFF9F /* MCCP2 event ends sampling and starts conversion */
#define ADC_CLK_CLC1                 0xFF8F /* CLC1 event ends sampling and starts conversion */
#define ADC_CLK_AUTO              	0xFF7F /*The SAMP bit is cleared after SAMC<4:0> number of TAD clocks following 
                                           the SAMP bit being set.No Extended Sample Time is present.*/
#define ADC_CLK_TMR1SLEEP        0xFF6F /* Timer1 Sleep mode trigger ends sampling and starts conversion */
#define ADC_CLK_TMR1                0xFF5F /* Timer1 compare ends sampling and starts conversion */
#define ADC_CLK_CTMU                0xFF4F /* CTMU event ends sampling and starts conversion */
#define ADC_CLK_SCCP5               0xFF3F /* SCCP5 event ends sampling and starts conversion */
#define ADC_CLK_MCCP1		0xFF2F /* MCCP1 event ends sampling and starts conversion */
#define ADC_CLK_INT0                 0xFF1F /* Active transition on INT0 ends sampling and starts conversion */
#define ADC_CLK_MANUAL            0xFF0F /* Clearing sample (SAMP) bit ends sampling and starts conversion */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_TRIG_INPUT15           0xFFFF /*The SAMP bit is cleared by a rising edge of trigger input 15*/
#define ADC_TRIG_INPUT14           0xFFEF /*The SAMP bit is cleared by a rising edge of trigger input 14*/
#define ADC_TRIG_INPUT13           0xFFDF /*The SAMP bit is cleared by a rising edge of trigger input 13*/
#define ADC_TRIG_INPUT12           0xFFCF /*The SAMP bit is cleared by a rising edge of trigger input 12*/
#define ADC_TRIG_INPUT11           0xFFBF /*The SAMP bit is cleared by a rising edge of trigger input 11*/
#define ADC_TRIG_INPUT10           0xFFAF /*The SAMP bit is cleared by a rising edge of trigger input 10*/
#define ADC_TRIG_INPUT9            0xFF9F /*The SAMP bit is cleared by a rising edge of trigger input 9*/
#define ADC_TRIG_INPUT8            0xFF8F /*The SAMP bit is cleared by a rising edge of trigger input 8*/
#define ADC_TRIG_AUTO              0xFF7F /*The SAMP bit is cleared after SAMC<4:0> number of TAD clocks following 
                                           the SAMP bit being set.No Extended Sample Time is present.*/										   
#define ADC_TRIG_INPUT6            0xFF6F /*The SAMP bit is cleared by a rising edge of trigger input 6*/
#define ADC_TRIG_INPUT5            0xFF5F /*The SAMP bit is cleared by a rising edge of trigger input 5*/
#define ADC_TRIG_INPUT4            0xFF4F /*The SAMP bit is cleared by a rising edge of trigger input 4*/
#define ADC_TRIG_INPUT3            0xFF3F /*The SAMP bit is cleared by a rising edge of trigger input 3*/
#define ADC_TRIG_INPUT2            0xFF2F /*The SAMP bit is cleared by a rising edge of trigger input 2*/
#define ADC_TRIG_INPUT1            0xFF1F /*The SAMP bit is cleared by a rising edge of trigger input 1*/
#define ADC_TRIG_MANUAL            0xFF0F /*The SAMP bit must be cleared by software*/
#endif 

#if defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_SAMPLE_SIMULTANEOUS     0xFFFF /* Samples CH0,CH1 simultaneously or CH0, CH1,CH2,CH3 simultaneously*/
#define ADC_SAMPLE_INDIVIDUAL       0xFFF7 /* Samples multiple channels individually in sequence*/
#endif 

#define ADC_AUTO_SAMPLING_ON        0xFFFF /* Sampling begins immediately after last conversion */
#define ADC_AUTO_SAMPLING_OFF       0xFFFB /* Sampling begins when SAMP bit is set */

#define ADC_SAMP_ON                 0xFFFF /* sample / hold amplifiers are sampling */
#define ADC_SAMP_OFF                0xFFFD /* sample / hold amplifiers are holding */

/***** AD1CON2 control register definition ****/
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v6_1) || \
	defined (adc_v6_2) || defined (adc_v7_1)||defined (adc_v7_2) 
#define ADC_VREF_AVDD_AVSS          0x0FFF /* A/D Voltage reference configuration Vref+ is AVdd and Vref- is AVss */
#define ADC_VREF_EXT_AVSS           0x2FFF /* A/D Voltage reference configuration Vref+ external and Vref- is AVss */
#define ADC_VREF_AVDD_EXT           0x4FFF /* A/D Voltage reference configuration Vref+ AVdd and Vref- external */
#define ADC_VREF_EXT_EXT            0x6FFF /* A/D Voltage reference configuration both Vref+ and Vref- are external */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_POS_VREF_INT_VRH2      0xFFFF /*Converter Positive Voltage Reference - Internal VRH2 */
#define ADC_POS_VREF_INT_VRH1      0xBFFF /*Converter Positive Voltage Reference - Internal VRH1 */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_POS_VREF_EXT           0x7FFF /*Converter Positive Voltage Reference - External VREF+*/
#define ADC_POS_VREF_AVDD          0x3FFF /*Converter Positive Voltage Reference - AVDD*/

#define ADC_NEG_VREF_EXT           0xFFFF /*Converter Negative Voltage Reference - External VREF- */
#define ADC_NEG_VREF_AVSS          0xDFFF /*Converter Negative Voltage Reference - AVSS */

#define ADC_BUF_REG_ENABLE          0xFFFF /* Conversion result is loaded into buffer location determined by the converted channel*/
#define ADC_BUF_REG_DISABLE         0xF7FF /* A/D result buffer is treated as a FIFO */
#endif 

#if defined (adc_v1_4) || defined (adc_v4_1)||defined (adc_v4_2) || defined (adc_v4_3)||defined (adc_v5_1) || defined (adc_v5_2) || \
    defined (adc_v7_1)||defined (adc_v7_2)   
#define ADC_OFFSET_CAL_ON           0xFFFF /* Converts to get the Offset calibration value */
#define ADC_OFFSET_CAL_OFF          0xEFFF /* Coverts to get the actual input value */
#endif

#define ADC_SCAN_ON                 0xFFFF /* A/D Scan Input Selections for CH0 during SAMPLE A */
#define ADC_SCAN_OFF                0xFBFF /* A/D Do notScan Input Selections for CH0+ during SAMPLE A */

#if defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CONVERT_CH_0123         0xFFFF /*Converts CH0,CH1,CH2 and CH3*/
#define ADC_CONVERT_CH_01           0xFDFF /*Converts CH0 and CH1*/
#define ADC_CONVERT_CH0             0xFCFF /*Converts CH0 */
#endif

#define ADC_INTR_EACH_CONV          0xFF83 /* Interrupts at the completion of conversion of each sample */
#define ADC_INTR_2_CONV             0xFF87 /* Interrupts at the completion of conversion of 2 samples */
#define ADC_INTR_3_CONV             0xFF8B /* Interrupts at the completion of conversion of 3 samples */
#define ADC_INTR_4_CONV             0xFF8F /* Interrupts at the completion of conversion of 4 samples */
#define ADC_INTR_5_CONV             0xFF93 /* Interrupts at the completion of conversion of 5 samples */
#define ADC_INTR_6_CONV             0xFF97 /* Interrupts at the completion of conversion of 6 samples */
#define ADC_INTR_7_CONV             0xFF9B /* Interrupts at the completion of conversion of 7 samples */
#define ADC_INTR_8_CONV             0xFF9F /* Interrupts at the completion of conversion of 8 samples */
#define ADC_INTR_9_CONV             0xFFA3 /* Interrupts at the completion of conversion of 9 samples */
#define ADC_INTR_10_CONV            0xFFA7 /* Interrupts at the completion of conversion of 10 samples */
#define ADC_INTR_11_CONV            0xFFAB /* Interrupts at the completion of conversion of 11 samples */
#define ADC_INTR_12_CONV            0xFFAF /* Interrupts at the completion of conversion of 12 samples */
#define ADC_INTR_13_CONV            0xFFB3 /* Interrupts at the completion of conversion of 13 samples */
#define ADC_INTR_14_CONV            0xFFB7 /* Interrupts at the completion of conversion of 14 samples */
#define ADC_INTR_15_CONV            0xFFBB /* Interrupts at the completion of conversion of 15 samples */
#define ADC_INTR_16_CONV            0xFFBF /* Interrupts at the completion of conversion of 16 samples */

#if defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) ||\
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_INTR_17_CONV            0xFFC3 /* Interrupts at the completion of conversion of 17 samples */
#define ADC_INTR_18_CONV            0xFFC7 /* Interrupts at the completion of conversion of 18 samples */
#define ADC_INTR_19_CONV            0xFFCB /* Interrupts at the completion of conversion of 19 samples */
#define ADC_INTR_20_CONV            0xFFCF /* Interrupts at the completion of conversion of 20 samples */
#define ADC_INTR_21_CONV            0xFFD3 /* Interrupts at the completion of conversion of 21 samples */
#define ADC_INTR_22_CONV            0xFFD7 /* Interrupts at the completion of conversion of 22 samples */
#define ADC_INTR_23_CONV            0xFFDB /* Interrupts at the completion of conversion of 23 samples */
#define ADC_INTR_24_CONV            0xFFDF /* Interrupts at the completion of conversion of 24 samples */
#define ADC_INTR_25_CONV            0xFFE3 /* Interrupts at the completion of conversion of 25 samples */
#define ADC_INTR_26_CONV            0xFFE7 /* Interrupts at the completion of conversion of 26 samples */
#define ADC_INTR_27_CONV            0xFFEB /* Interrupts at the completion of conversion of 27 samples */
#define ADC_INTR_28_CONV            0xFFEF /* Interrupts at the completion of conversion of 28 samples */
#define ADC_INTR_29_CONV            0xFFF3 /* Interrupts at the completion of conversion of 29 samples */
#define ADC_INTR_30_CONV            0xFFF7 /* Interrupts at the completion of conversion of 30 samples */
#define ADC_INTR_31_CONV            0xFFFB /* Interrupts at the completion of conversion of 31 samples */
#define ADC_INTR_32_CONV            0xFFFF /* Interrupts at the completion of conversion of 32 samples */
#endif

#define ADC_ALT_BUF_ON              0xFFFF /* Buffer configured as 2 8-word buffers */
#define ADC_ALT_BUF_OFF             0xFFFD /* Buffer configured as 1 16-word buffer */

#define ADC_ALT_INPUT_ON            0xFFFF /* alternate between MUXA and MUXB */
#define ADC_ALT_INPUT_OFF           0xFFFE /* use MUXA only */

/**** AD1CON3 register definition ****/
#define ADC_CONV_CLK_INTERNAL_RC    0xFFFF /* A/D Conversion Clock Source internal RC Clock */
#define ADC_CONV_CLK_SYSTEM         0x7FFF /* A/D Conversion Clock Source Clock derived from system clock */

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || \
	defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_EXT_SAMP_ON             0xFFFF /*A/D is still sampling after SAMP = 0*/
#define ADC_EXT_SAMP_OFF            0xBFFF /*A/D is finished sampling*/

#define ADC_CHARGE_PUMP_ENABLE      0xFFFF /*Charge pump for switches is enabled*/
#define ADC_CHARGE_PUMP_DISABLE     0xDFFF /*Charge pump for switches is enabled*/
#endif 

#define ADC_SAMPLE_TIME_0           0xE0FF /* A/D Auto Sample Time 0 Tad */
#define ADC_SAMPLE_TIME_1           0xE1FF /* A/D Auto Sample Time 1 Tad */
#define ADC_SAMPLE_TIME_2           0xE2FF /* A/D Auto Sample Time 2 Tad */
#define ADC_SAMPLE_TIME_3           0xE3FF /* A/D Auto Sample Time 3 Tad */
#define ADC_SAMPLE_TIME_4           0xE4FF /* A/D Auto Sample Time 4 Tad */
#define ADC_SAMPLE_TIME_5           0xE5FF /* A/D Auto Sample Time 5 Tad */
#define ADC_SAMPLE_TIME_6           0xE6FF /* A/D Auto Sample Time 6 Tad */
#define ADC_SAMPLE_TIME_7           0xE7FF /* A/D Auto Sample Time 7 Tad */
#define ADC_SAMPLE_TIME_8           0xE8FF /* A/D Auto Sample Time 8 Tad */
#define ADC_SAMPLE_TIME_9           0xE9FF /* A/D Auto Sample Time 9 Tad */
#define ADC_SAMPLE_TIME_10          0xEAFF /* A/D Auto Sample Time 10 Tad */
#define ADC_SAMPLE_TIME_11          0xEBFF /* A/D Auto Sample Time 11 Tad */
#define ADC_SAMPLE_TIME_12          0xECFF /* A/D Auto Sample Time 12 Tad */
#define ADC_SAMPLE_TIME_13          0xEDFF /* A/D Auto Sample Time 13 Tad */
#define ADC_SAMPLE_TIME_14          0xEEFF /* A/D Auto Sample Time 14 Tad */
#define ADC_SAMPLE_TIME_15          0xEFFF /* A/D Auto Sample Time 15 Tad */
#define ADC_SAMPLE_TIME_16          0xF0FF /* A/D Auto Sample Time 16 Tad */
#define ADC_SAMPLE_TIME_17          0xF1FF /* A/D Auto Sample Time 17 Tad */
#define ADC_SAMPLE_TIME_18          0xF2FF /* A/D Auto Sample Time 18 Tad */
#define ADC_SAMPLE_TIME_19          0xF3FF /* A/D Auto Sample Time 19 Tad */
#define ADC_SAMPLE_TIME_20          0xF4FF /* A/D Auto Sample Time 20 Tad */
#define ADC_SAMPLE_TIME_21          0xF5FF /* A/D Auto Sample Time 21 Tad */
#define ADC_SAMPLE_TIME_22          0xF6FF /* A/D Auto Sample Time 22 Tad */
#define ADC_SAMPLE_TIME_23          0xF7FF /* A/D Auto Sample Time 23 Tad */
#define ADC_SAMPLE_TIME_24          0xF8FF /* A/D Auto Sample Time 24 Tad */
#define ADC_SAMPLE_TIME_25          0xF9FF /* A/D Auto Sample Time 25 Tad */
#define ADC_SAMPLE_TIME_26          0xFAFF /* A/D Auto Sample Time 26 Tad */
#define ADC_SAMPLE_TIME_27          0xFBFF /* A/D Auto Sample Time 27 Tad */
#define ADC_SAMPLE_TIME_28          0xFCFF /* A/D Auto Sample Time 28 Tad */
#define ADC_SAMPLE_TIME_29          0xFDFF /* A/D Auto Sample Time 29 Tad */
#define ADC_SAMPLE_TIME_30          0xFEFF /* A/D Auto Sample Time 30 Tad */
#define ADC_SAMPLE_TIME_31          0xFFFF /* A/D Auto Sample Time 31 Tad */

#define ADC_CONV_CLK_1Tcy          0xFF00 /* A/D Conversion Clock is Tcy */
#define ADC_CONV_CLK_2Tcy          0xFF01 /* A/D Conversion Clock is 2*Tcy */
#define ADC_CONV_CLK_3Tcy          0xFF02 /* A/D Conversion Clock is 3*Tcy */
#define ADC_CONV_CLK_4Tcy          0xFF03 /* A/D Conversion Clock is 4*Tcy */
#define ADC_CONV_CLK_5Tcy          0xFF04 /* A/D Conversion Clock is 5*Tcy */
#define ADC_CONV_CLK_6Tcy          0xFF05 /* A/D Conversion Clock is 6*Tcy */
#define ADC_CONV_CLK_7Tcy          0xFF06 /* A/D Conversion Clock is 7*Tcy */
#define ADC_CONV_CLK_8Tcy          0xFF07 /* A/D Conversion Clock is 8*Tcy */
#define ADC_CONV_CLK_9Tcy          0xFF08 /* A/D Conversion Clock is 9*Tcy */
#define ADC_CONV_CLK_10Tcy         0xFF09 /* A/D Conversion Clock is 10*Tcy */
#define ADC_CONV_CLK_11Tcy         0xFF0A /* A/D Conversion Clock is 11*Tcy */
#define ADC_CONV_CLK_12Tcy         0xFF0B /* A/D Conversion Clock is 12*Tcy */
#define ADC_CONV_CLK_13Tcy         0xFF0C /* A/D Conversion Clock is 13*Tcy */
#define ADC_CONV_CLK_14Tcy         0xFF0D /* A/D Conversion Clock is 14*Tcy */
#define ADC_CONV_CLK_15Tcy         0xFF0E /* A/D Conversion Clock is 15*Tcy */
#define ADC_CONV_CLK_16Tcy         0xFF0F /* A/D Conversion Clock is 16*Tcy */
#define ADC_CONV_CLK_17Tcy         0xFF10 /* A/D Conversion Clock is 17*Tcy */
#define ADC_CONV_CLK_18Tcy         0xFF11 /* A/D Conversion Clock is 18*Tcy */
#define ADC_CONV_CLK_19Tcy         0xFF12 /* A/D Conversion Clock is 19*Tcy */
#define ADC_CONV_CLK_20Tcy         0xFF13 /* A/D Conversion Clock is 20*Tcy */
#define ADC_CONV_CLK_21Tcy         0xFF14 /* A/D Conversion Clock is 21*Tcy */
#define ADC_CONV_CLK_22Tcy         0xFF15 /* A/D Conversion Clock is 22*Tcy */
#define ADC_CONV_CLK_23Tcy         0xFF16 /* A/D Conversion Clock is 23*Tcy */
#define ADC_CONV_CLK_24Tcy         0xFF17 /* A/D Conversion Clock is 24*Tcy */
#define ADC_CONV_CLK_25Tcy         0xFF18 /* A/D Conversion Clock is 25*Tcy */
#define ADC_CONV_CLK_26Tcy         0xFF19 /* A/D Conversion Clock is 26*Tcy */
#define ADC_CONV_CLK_27Tcy         0xFF1A /* A/D Conversion Clock is 27*Tcy */
#define ADC_CONV_CLK_28Tcy         0xFF1B /* A/D Conversion Clock is 28*Tcy */
#define ADC_CONV_CLK_29Tcy         0xFF1C /* A/D Conversion Clock is 29*Tcy */
#define ADC_CONV_CLK_30Tcy         0xFF1D /* A/D Conversion Clock is 40*Tcy */
#define ADC_CONV_CLK_31Tcy         0xFF1E /* A/D Conversion Clock is 31*Tcy */
#define ADC_CONV_CLK_32Tcy         0xFF1F /* A/D Conversion Clock is 32*Tcy */
#define ADC_CONV_CLK_33Tcy         0xFF20 /* A/D Conversion Clock is 33*Tcy */
#define ADC_CONV_CLK_34Tcy         0xFF21 /* A/D Conversion Clock is 34*Tcy */
#define ADC_CONV_CLK_35Tcy         0xFF22 /* A/D Conversion Clock is 35*Tcy */
#define ADC_CONV_CLK_36Tcy         0xFF23 /* A/D Conversion Clock is 36*Tcy */
#define ADC_CONV_CLK_37Tcy         0xFF24 /* A/D Conversion Clock is 37*Tcy */
#define ADC_CONV_CLK_38Tcy         0xFF25 /* A/D Conversion Clock is 38*Tcy */
#define ADC_CONV_CLK_39Tcy         0xFF26 /* A/D Conversion Clock is 39*Tcy */
#define ADC_CONV_CLK_40Tcy         0xFF27 /* A/D Conversion Clock is 40*Tcy */
#define ADC_CONV_CLK_41Tcy         0xFF28 /* A/D Conversion Clock is 41*Tcy */
#define ADC_CONV_CLK_42Tcy         0xFF29 /* A/D Conversion Clock is 42*Tcy */
#define ADC_CONV_CLK_43Tcy         0xFF2A /* A/D Conversion Clock is 43*Tcy */
#define ADC_CONV_CLK_44Tcy         0xFF2B /* A/D Conversion Clock is 44*Tcy */
#define ADC_CONV_CLK_45Tcy         0xFF2C /* A/D Conversion Clock is 45*Tcy */
#define ADC_CONV_CLK_46Tcy         0xFF2D /* A/D Conversion Clock is 46*Tcy */
#define ADC_CONV_CLK_47Tcy         0xFF2E /* A/D Conversion Clock is 47*Tcy */
#define ADC_CONV_CLK_48Tcy         0xFF2F /* A/D Conversion Clock is 48*Tcy */
#define ADC_CONV_CLK_49Tcy         0xFF30 /* A/D Conversion Clock is 49*Tcy */
#define ADC_CONV_CLK_50Tcy         0xFF31 /* A/D Conversion Clock is 50*Tcy */
#define ADC_CONV_CLK_51Tcy         0xFF32 /* A/D Conversion Clock is 51*Tcy */
#define ADC_CONV_CLK_52Tcy         0xFF33 /* A/D Conversion Clock is 52*Tcy */
#define ADC_CONV_CLK_53Tcy         0xFF34 /* A/D Conversion Clock is 53*Tcy */
#define ADC_CONV_CLK_54Tcy         0xFF35 /* A/D Conversion Clock is 54*Tcy */
#define ADC_CONV_CLK_55Tcy         0xFF36 /* A/D Conversion Clock is 55*Tcy */
#define ADC_CONV_CLK_56Tcy         0xFF37 /* A/D Conversion Clock is 56*Tcy */
#define ADC_CONV_CLK_57Tcy         0xFF38 /* A/D Conversion Clock is 57*Tcy */
#define ADC_CONV_CLK_58Tcy         0xFF39 /* A/D Conversion Clock is 58*Tcy */
#define ADC_CONV_CLK_59Tcy         0xFF3A /* A/D Conversion Clock is 59*Tcy */
#define ADC_CONV_CLK_60Tcy         0xFF3B /* A/D Conversion Clock is 60*Tcy */
#define ADC_CONV_CLK_61Tcy         0xFF3C /* A/D Conversion Clock is 61*Tcy */
#define ADC_CONV_CLK_62Tcy         0xFF3D /* A/D Conversion Clock is 62*Tcy */
#define ADC_CONV_CLK_63Tcy         0xFF3E /* A/D Conversion Clock is 63*Tcy */
#define ADC_CONV_CLK_64Tcy         0xFF3F /* A/D Conversion Clock is 64*Tcy */

/*On selecting the macros from 65*Tcy to 256*Tcy will be set to 64*Tcy value*/
#define ADC_CONV_CLK_65Tcy         0xFF40 /* A/D Conversion Clock is 65*Tcy */
#define ADC_CONV_CLK_66Tcy         0xFF41 /* A/D Conversion Clock is 66*Tcy */
#define ADC_CONV_CLK_67Tcy         0xFF42 /* A/D Conversion Clock is 67*Tcy */
#define ADC_CONV_CLK_68Tcy         0xFF43 /* A/D Conversion Clock is 68*Tcy */
#define ADC_CONV_CLK_69Tcy         0xFF44 /* A/D Conversion Clock is 69*Tcy */
#define ADC_CONV_CLK_70Tcy         0xFF45 /* A/D Conversion Clock is 70*Tcy */
#define ADC_CONV_CLK_71Tcy         0xFF46 /* A/D Conversion Clock is 71*Tcy */
#define ADC_CONV_CLK_72Tcy         0xFF47 /* A/D Conversion Clock is 72*Tcy */
#define ADC_CONV_CLK_73Tcy         0xFF48 /* A/D Conversion Clock is 73*Tcy */
#define ADC_CONV_CLK_74Tcy         0xFF49 /* A/D Conversion Clock is 74*Tcy */
#define ADC_CONV_CLK_75Tcy         0xFF4A /* A/D Conversion Clock is 75*Tcy */
#define ADC_CONV_CLK_76Tcy         0xFF4B /* A/D Conversion Clock is 76*Tcy */
#define ADC_CONV_CLK_77Tcy         0xFF4C /* A/D Conversion Clock is 77*Tcy */
#define ADC_CONV_CLK_78Tcy         0xFF4D /* A/D Conversion Clock is 78*Tcy */
#define ADC_CONV_CLK_79Tcy         0xFF4E /* A/D Conversion Clock is 79*Tcy */
#define ADC_CONV_CLK_80Tcy         0xFF4F /* A/D Conversion Clock is 80*Tcy */
#define ADC_CONV_CLK_81Tcy         0xFF50 /* A/D Conversion Clock is 81*Tcy */
#define ADC_CONV_CLK_82Tcy         0xFF51 /* A/D Conversion Clock is 82*Tcy */
#define ADC_CONV_CLK_83Tcy         0xFF52 /* A/D Conversion Clock is 83*Tcy */
#define ADC_CONV_CLK_84Tcy         0xFF53 /* A/D Conversion Clock is 84*Tcy */
#define ADC_CONV_CLK_85Tcy         0xFF54 /* A/D Conversion Clock is 85*Tcy */
#define ADC_CONV_CLK_86Tcy         0xFF55 /* A/D Conversion Clock is 86*Tcy */
#define ADC_CONV_CLK_87Tcy         0xFF56 /* A/D Conversion Clock is 87*Tcy */
#define ADC_CONV_CLK_88Tcy         0xFF57 /* A/D Conversion Clock is 88*Tcy */
#define ADC_CONV_CLK_89Tcy         0xFF58 /* A/D Conversion Clock is 89*Tcy */
#define ADC_CONV_CLK_90Tcy         0xFF59 /* A/D Conversion Clock is 90*Tcy */
#define ADC_CONV_CLK_91Tcy         0xFF5A /* A/D Conversion Clock is 91*Tcy */
#define ADC_CONV_CLK_92Tcy         0xFF5B /* A/D Conversion Clock is 92*Tcy */
#define ADC_CONV_CLK_93Tcy         0xFF5C /* A/D Conversion Clock is 93*Tcy */
#define ADC_CONV_CLK_94Tcy         0xFF5D /* A/D Conversion Clock is 94*Tcy */
#define ADC_CONV_CLK_95Tcy         0xFF5E /* A/D Conversion Clock is 95*Tcy */
#define ADC_CONV_CLK_96Tcy         0xFF5F /* A/D Conversion Clock is 96*Tcy */
#define ADC_CONV_CLK_97Tcy         0xFF60 /* A/D Conversion Clock is 97*Tcy */
#define ADC_CONV_CLK_98Tcy         0xFF61 /* A/D Conversion Clock is 98*Tcy */
#define ADC_CONV_CLK_99Tcy         0xFF62 /* A/D Conversion Clock is 99*Tcy */
#define ADC_CONV_CLK_100Tcy        0xFF63 /* A/D Conversion Clock is 100*Tcy */
#define ADC_CONV_CLK_101Tcy        0xFF64 /* A/D Conversion Clock is 101*Tcy */
#define ADC_CONV_CLK_102Tcy        0xFF65 /* A/D Conversion Clock is 102*Tcy */
#define ADC_CONV_CLK_103Tcy        0xFF66 /* A/D Conversion Clock is 103*Tcy */
#define ADC_CONV_CLK_104Tcy        0xFF67 /* A/D Conversion Clock is 104*Tcy */
#define ADC_CONV_CLK_105Tcy        0xFF68 /* A/D Conversion Clock is 105*Tcy */
#define ADC_CONV_CLK_106Tcy        0xFF69 /* A/D Conversion Clock is 106*Tcy */
#define ADC_CONV_CLK_107Tcy        0xFF6A /* A/D Conversion Clock is 107*Tcy */
#define ADC_CONV_CLK_108Tcy        0xFF6B /* A/D Conversion Clock is 108*Tcy */
#define ADC_CONV_CLK_109Tcy        0xFF6C /* A/D Conversion Clock is 109*Tcy */
#define ADC_CONV_CLK_110Tcy        0xFF6D /* A/D Conversion Clock is 110*Tcy */
#define ADC_CONV_CLK_111Tcy        0xFF6E /* A/D Conversion Clock is 111*Tcy */
#define ADC_CONV_CLK_112Tcy        0xFF6F /* A/D Conversion Clock is 112*Tcy */
#define ADC_CONV_CLK_113Tcy        0xFF70 /* A/D Conversion Clock is 113*Tcy */
#define ADC_CONV_CLK_114Tcy        0xFF71 /* A/D Conversion Clock is 114*Tcy */
#define ADC_CONV_CLK_115Tcy        0xFF72 /* A/D Conversion Clock is 115*Tcy */
#define ADC_CONV_CLK_116Tcy        0xFF73 /* A/D Conversion Clock is 116*Tcy */
#define ADC_CONV_CLK_117Tcy        0xFF74 /* A/D Conversion Clock is 117*Tcy */
#define ADC_CONV_CLK_118Tcy        0xFF75 /* A/D Conversion Clock is 118*Tcy */
#define ADC_CONV_CLK_119Tcy        0xFF76 /* A/D Conversion Clock is 119*Tcy */
#define ADC_CONV_CLK_120Tcy        0xFF77 /* A/D Conversion Clock is 120*Tcy */
#define ADC_CONV_CLK_121Tcy        0xFF78 /* A/D Conversion Clock is 121*Tcy */
#define ADC_CONV_CLK_122Tcy        0xFF79 /* A/D Conversion Clock is 122*Tcy */
#define ADC_CONV_CLK_123Tcy        0xFF7A /* A/D Conversion Clock is 123*Tcy */
#define ADC_CONV_CLK_124Tcy        0xFF7B /* A/D Conversion Clock is 124*Tcy */
#define ADC_CONV_CLK_125Tcy        0xFF7C /* A/D Conversion Clock is 125*Tcy */
#define ADC_CONV_CLK_126Tcy        0xFF7D /* A/D Conversion Clock is 126*Tcy */
#define ADC_CONV_CLK_127Tcy        0xFF7E /* A/D Conversion Clock is 127*Tcy */
#define ADC_CONV_CLK_128Tcy        0xFF7F /* A/D Conversion Clock is 128*Tcy */
#define ADC_CONV_CLK_129Tcy        0xFF80 /* A/D Conversion Clock is 129*Tcy */
#define ADC_CONV_CLK_130Tcy        0xFF81 /* A/D Conversion Clock is 130*Tcy */
#define ADC_CONV_CLK_131Tcy        0xFF82 /* A/D Conversion Clock is 131*Tcy */
#define ADC_CONV_CLK_132Tcy        0xFF83 /* A/D Conversion Clock is 132*Tcy */
#define ADC_CONV_CLK_133Tcy        0xFF84 /* A/D Conversion Clock is 133*Tcy */
#define ADC_CONV_CLK_134Tcy        0xFF85 /* A/D Conversion Clock is 134*Tcy */
#define ADC_CONV_CLK_135Tcy        0xFF86 /* A/D Conversion Clock is 135*Tcy */
#define ADC_CONV_CLK_136Tcy        0xFF87 /* A/D Conversion Clock is 136*Tcy */
#define ADC_CONV_CLK_137Tcy        0xFF88 /* A/D Conversion Clock is 137*Tcy */
#define ADC_CONV_CLK_138Tcy        0xFF89 /* A/D Conversion Clock is 138*Tcy */
#define ADC_CONV_CLK_139Tcy        0xFF8A /* A/D Conversion Clock is 139*Tcy */
#define ADC_CONV_CLK_140Tcy        0xFF8B /* A/D Conversion Clock is 140*Tcy */
#define ADC_CONV_CLK_141Tcy        0xFF8C /* A/D Conversion Clock is 141*Tcy */
#define ADC_CONV_CLK_142Tcy        0xFF8D /* A/D Conversion Clock is 142*Tcy */
#define ADC_CONV_CLK_143Tcy        0xFF8E /* A/D Conversion Clock is 143*Tcy */
#define ADC_CONV_CLK_144Tcy        0xFF8F /* A/D Conversion Clock is 144*Tcy */
#define ADC_CONV_CLK_145Tcy        0xFF90 /* A/D Conversion Clock is 145*Tcy */
#define ADC_CONV_CLK_146Tcy        0xFF91 /* A/D Conversion Clock is 146*Tcy */
#define ADC_CONV_CLK_147Tcy        0xFF92 /* A/D Conversion Clock is 147*Tcy */
#define ADC_CONV_CLK_148Tcy        0xFF93 /* A/D Conversion Clock is 148*Tcy */
#define ADC_CONV_CLK_149Tcy        0xFF94 /* A/D Conversion Clock is 149*Tcy */
#define ADC_CONV_CLK_150Tcy        0xFF95 /* A/D Conversion Clock is 150*Tcy */
#define ADC_CONV_CLK_151Tcy        0xFF96 /* A/D Conversion Clock is 151*Tcy */
#define ADC_CONV_CLK_152Tcy        0xFF97 /* A/D Conversion Clock is 152*Tcy */
#define ADC_CONV_CLK_153Tcy        0xFF98 /* A/D Conversion Clock is 153*Tcy */
#define ADC_CONV_CLK_154Tcy        0xFF99 /* A/D Conversion Clock is 154*Tcy */
#define ADC_CONV_CLK_155Tcy        0xFF9A /* A/D Conversion Clock is 155*Tcy */
#define ADC_CONV_CLK_156Tcy        0xFF9B /* A/D Conversion Clock is 156*Tcy */
#define ADC_CONV_CLK_157Tcy        0xFF9C /* A/D Conversion Clock is 157*Tcy */
#define ADC_CONV_CLK_158Tcy        0xFF9D /* A/D Conversion Clock is 158*Tcy */
#define ADC_CONV_CLK_159Tcy        0xFF9E /* A/D Conversion Clock is 159*Tcy */
#define ADC_CONV_CLK_160Tcy        0xFF9F /* A/D Conversion Clock is 160*Tcy */
#define ADC_CONV_CLK_161Tcy        0xFFA0 /* A/D Conversion Clock is 161*Tcy */
#define ADC_CONV_CLK_162Tcy        0xFFA1 /* A/D Conversion Clock is 162*Tcy */
#define ADC_CONV_CLK_163Tcy        0xFFA2 /* A/D Conversion Clock is 163*Tcy */
#define ADC_CONV_CLK_164Tcy        0xFFA3 /* A/D Conversion Clock is 164*Tcy */
#define ADC_CONV_CLK_165Tcy        0xFFA4 /* A/D Conversion Clock is 165*Tcy */
#define ADC_CONV_CLK_166Tcy        0xFFA5 /* A/D Conversion Clock is 166*Tcy */
#define ADC_CONV_CLK_167Tcy        0xFFA6 /* A/D Conversion Clock is 167*Tcy */
#define ADC_CONV_CLK_168Tcy        0xFFA7 /* A/D Conversion Clock is 168*Tcy */
#define ADC_CONV_CLK_169Tcy        0xFFA8 /* A/D Conversion Clock is 169*Tcy */
#define ADC_CONV_CLK_170Tcy        0xFFA9 /* A/D Conversion Clock is 170*Tcy */
#define ADC_CONV_CLK_171Tcy        0xFFAA /* A/D Conversion Clock is 171*Tcy */
#define ADC_CONV_CLK_172Tcy        0xFFAB /* A/D Conversion Clock is 172*Tcy */
#define ADC_CONV_CLK_173Tcy        0xFFAC /* A/D Conversion Clock is 173*Tcy */
#define ADC_CONV_CLK_174Tcy        0xFFAD /* A/D Conversion Clock is 174*Tcy */
#define ADC_CONV_CLK_175Tcy        0xFFAE /* A/D Conversion Clock is 175*Tcy */
#define ADC_CONV_CLK_176Tcy        0xFFAF /* A/D Conversion Clock is 176*Tcy */
#define ADC_CONV_CLK_177Tcy        0xFFB0 /* A/D Conversion Clock is 177*Tcy */
#define ADC_CONV_CLK_178Tcy        0xFFB1 /* A/D Conversion Clock is 178*Tcy */
#define ADC_CONV_CLK_179Tcy        0xFFB2 /* A/D Conversion Clock is 179*Tcy */
#define ADC_CONV_CLK_180Tcy        0xFFB3 /* A/D Conversion Clock is 180*Tcy */
#define ADC_CONV_CLK_181Tcy        0xFFB4 /* A/D Conversion Clock is 181*Tcy */
#define ADC_CONV_CLK_182Tcy        0xFFB5 /* A/D Conversion Clock is 182*Tcy */
#define ADC_CONV_CLK_183Tcy        0xFFB6 /* A/D Conversion Clock is 183*Tcy */
#define ADC_CONV_CLK_184Tcy        0xFFB7 /* A/D Conversion Clock is 184*Tcy */
#define ADC_CONV_CLK_185Tcy        0xFFB8 /* A/D Conversion Clock is 185*Tcy */
#define ADC_CONV_CLK_186Tcy        0xFFB9 /* A/D Conversion Clock is 186*Tcy */
#define ADC_CONV_CLK_187Tcy        0xFFBA /* A/D Conversion Clock is 187*Tcy */
#define ADC_CONV_CLK_188Tcy        0xFFBB /* A/D Conversion Clock is 188*Tcy */
#define ADC_CONV_CLK_189Tcy        0xFFBC /* A/D Conversion Clock is 189*Tcy */
#define ADC_CONV_CLK_190Tcy        0xFFBD /* A/D Conversion Clock is 190*Tcy */
#define ADC_CONV_CLK_191Tcy        0xFFBE /* A/D Conversion Clock is 191*Tcy */
#define ADC_CONV_CLK_192Tcy        0xFFBF /* A/D Conversion Clock is 192*Tcy */
#define ADC_CONV_CLK_193Tcy        0xFFC0 /* A/D Conversion Clock is 193*Tcy */
#define ADC_CONV_CLK_194Tcy        0xFFC1 /* A/D Conversion Clock is 194*Tcy */
#define ADC_CONV_CLK_195Tcy        0xFFC2 /* A/D Conversion Clock is 195*Tcy */
#define ADC_CONV_CLK_196Tcy        0xFFC3 /* A/D Conversion Clock is 196*Tcy */
#define ADC_CONV_CLK_197Tcy        0xFFC4 /* A/D Conversion Clock is 197*Tcy */
#define ADC_CONV_CLK_198Tcy        0xFFC5 /* A/D Conversion Clock is 198*Tcy */
#define ADC_CONV_CLK_199Tcy        0xFFC6 /* A/D Conversion Clock is 199*Tcy */
#define ADC_CONV_CLK_200Tcy        0xFFC7 /* A/D Conversion Clock is 200*Tcy */
#define ADC_CONV_CLK_201Tcy        0xFFC8 /* A/D Conversion Clock is 201*Tcy */
#define ADC_CONV_CLK_202Tcy        0xFFC9 /* A/D Conversion Clock is 202*Tcy */
#define ADC_CONV_CLK_203Tcy        0xFFCA /* A/D Conversion Clock is 203*Tcy */
#define ADC_CONV_CLK_204Tcy        0xFFCB /* A/D Conversion Clock is 204*Tcy */
#define ADC_CONV_CLK_205Tcy        0xFFCC /* A/D Conversion Clock is 205*Tcy */
#define ADC_CONV_CLK_206Tcy        0xFFCD /* A/D Conversion Clock is 206*Tcy */
#define ADC_CONV_CLK_207Tcy        0xFFCE /* A/D Conversion Clock is 207*Tcy */
#define ADC_CONV_CLK_208Tcy        0xFFCF /* A/D Conversion Clock is 208*Tcy */
#define ADC_CONV_CLK_209Tcy        0xFFD0 /* A/D Conversion Clock is 209*Tcy */
#define ADC_CONV_CLK_210Tcy        0xFFD1 /* A/D Conversion Clock is 210*Tcy */
#define ADC_CONV_CLK_211Tcy        0xFFD2 /* A/D Conversion Clock is 211*Tcy */
#define ADC_CONV_CLK_212Tcy        0xFFD3 /* A/D Conversion Clock is 212*Tcy */
#define ADC_CONV_CLK_213Tcy        0xFFD4 /* A/D Conversion Clock is 213*Tcy */
#define ADC_CONV_CLK_214Tcy        0xFFD5 /* A/D Conversion Clock is 214*Tcy */
#define ADC_CONV_CLK_215Tcy        0xFFD6 /* A/D Conversion Clock is 215*Tcy */
#define ADC_CONV_CLK_216Tcy        0xFFD7 /* A/D Conversion Clock is 216*Tcy */
#define ADC_CONV_CLK_217Tcy        0xFFD8 /* A/D Conversion Clock is 217*Tcy */
#define ADC_CONV_CLK_218Tcy        0xFFD9 /* A/D Conversion Clock is 218*Tcy */
#define ADC_CONV_CLK_219Tcy        0xFFDA /* A/D Conversion Clock is 219*Tcy */
#define ADC_CONV_CLK_220Tcy        0xFFDB /* A/D Conversion Clock is 220*Tcy */
#define ADC_CONV_CLK_221Tcy        0xFFDC /* A/D Conversion Clock is 221*Tcy */
#define ADC_CONV_CLK_222Tcy        0xFFDD /* A/D Conversion Clock is 222*Tcy */
#define ADC_CONV_CLK_223Tcy        0xFFDE /* A/D Conversion Clock is 223*Tcy */
#define ADC_CONV_CLK_224Tcy        0xFFDF /* A/D Conversion Clock is 224*Tcy */
#define ADC_CONV_CLK_225Tcy        0xFFE0 /* A/D Conversion Clock is 225*Tcy */
#define ADC_CONV_CLK_226Tcy        0xFFE1 /* A/D Conversion Clock is 226*Tcy */
#define ADC_CONV_CLK_227Tcy        0xFFE2 /* A/D Conversion Clock is 227*Tcy */
#define ADC_CONV_CLK_228Tcy        0xFFE3 /* A/D Conversion Clock is 228*Tcy */
#define ADC_CONV_CLK_229Tcy        0xFFE4 /* A/D Conversion Clock is 229*Tcy */
#define ADC_CONV_CLK_230Tcy        0xFFE5 /* A/D Conversion Clock is 230*Tcy */
#define ADC_CONV_CLK_231Tcy        0xFFE6 /* A/D Conversion Clock is 231*Tcy */
#define ADC_CONV_CLK_232Tcy        0xFFE7 /* A/D Conversion Clock is 232*Tcy */
#define ADC_CONV_CLK_233Tcy        0xFFE8 /* A/D Conversion Clock is 233*Tcy */
#define ADC_CONV_CLK_234Tcy        0xFFE9 /* A/D Conversion Clock is 234*Tcy */
#define ADC_CONV_CLK_235Tcy        0xFFEA /* A/D Conversion Clock is 235*Tcy */
#define ADC_CONV_CLK_236Tcy        0xFFEB /* A/D Conversion Clock is 236*Tcy */
#define ADC_CONV_CLK_237Tcy        0xFFEC /* A/D Conversion Clock is 237*Tcy */
#define ADC_CONV_CLK_238Tcy        0xFFED /* A/D Conversion Clock is 238*Tcy */
#define ADC_CONV_CLK_239Tcy        0xFFEE /* A/D Conversion Clock is 239*Tcy */
#define ADC_CONV_CLK_240Tcy        0xFFEF /* A/D Conversion Clock is 240*Tcy */
#define ADC_CONV_CLK_241Tcy        0xFFF0 /* A/D Conversion Clock is 241*Tcy */
#define ADC_CONV_CLK_242Tcy        0xFFF1 /* A/D Conversion Clock is 242*Tcy */
#define ADC_CONV_CLK_243Tcy        0xFFF2 /* A/D Conversion Clock is 243*Tcy */
#define ADC_CONV_CLK_244Tcy        0xFFF3 /* A/D Conversion Clock is 244*Tcy */
#define ADC_CONV_CLK_245Tcy        0xFFF4 /* A/D Conversion Clock is 245*Tcy */
#define ADC_CONV_CLK_246Tcy        0xFFF5 /* A/D Conversion Clock is 246*Tcy */
#define ADC_CONV_CLK_247Tcy        0xFFF6 /* A/D Conversion Clock is 247*Tcy */
#define ADC_CONV_CLK_248Tcy        0xFFF7 /* A/D Conversion Clock is 248*Tcy */
#define ADC_CONV_CLK_249Tcy        0xFFF8 /* A/D Conversion Clock is 249*Tcy */
#define ADC_CONV_CLK_250Tcy        0xFFF9 /* A/D Conversion Clock is 250*Tcy */
#define ADC_CONV_CLK_251Tcy        0xFFFA /* A/D Conversion Clock is 251*Tcy */
#define ADC_CONV_CLK_252Tcy        0xFFFB /* A/D Conversion Clock is 252*Tcy */
#define ADC_CONV_CLK_253Tcy        0xFFFC /* A/D Conversion Clock is 253*Tcy */
#define ADC_CONV_CLK_254Tcy        0xFFFD /* A/D Conversion Clock is 254*Tcy */
#define ADC_CONV_CLK_255Tcy        0xFFFE /* A/D Conversion Clock is 255*Tcy */
#define ADC_CONV_CLK_256Tcy        0xFFFF /* A/D Conversion Clock is 256*Tcy */

/**** AD1CON4 register definition ****/
#if defined (adc_v5_1) || defined (adc_v5_2)
#define ADC_DMA_BUF_LEN1 			0xFFF8 /*Allocates 1 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN2 			0xFFF9 /*Allocates 2 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN4 			0xFFFA /*Allocates 4 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN8 			0xFFFB /*Allocates 8 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN16 			0xFFFC /*Allocates 16 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN32			0xFFFD /*Allocates 32 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN64			0xFFFE /*Allocates 64 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN128			0xFFFF /*Allocates 128 words of buffer to each analog input*/
#endif

/**** AD1CON5 register definition ****/
#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_AUTO_SCAN_ENABLE        0xFFFF /*Auto-Scan is enabled*/
#define ADC_AUTO_SCAN_DISABLE       0x7FFF /*Auto-Scan is disabled*/

#define ADC_LOW_POWER_ENABLE        0xFFFF /*Low power enabled after scan*/
#define ADC_LOW_POWER_DISABLE       0xBFFF /*Full power enabled after scan*/

#define ADC_CTMU_ENABLE             0xFFFF /*CTMU is enabled when the ADC is enabled and active*/
#define ADC_CTMU_DISABLE            0xDFFF /*CTMU is not enabled by the ADC*/

#define ADC_BG_ENABLE               0xFFFF /*Band gap is enabled when the ADC is enabled and active*/
#define ADC_BG_DISABLE              0xEFFF /*Band gap is not enabled by the ADC*/

#define ADC_AUTO_INT_THRES_COMP    	0xFFFF /*Interrupt occurs after sampling is completed and valid compare has occured*/
#define ADC_AUTO_INT_COMP    		0xFEFF/*Interrupt occurs after valid compare has occured*/
#define ADC_INT_THRES    			0xFDFF /*Interrupt occurs after sampling is completed*/
#define ADC_AUTO_SCAN	    		0xFCFF /*No Interrupt*/

#define ADC_WRITE_AUTO_COMPARE      0xFFFB /*conversion results not saved, but interrupts are generated when a valid match as defined by CM and ASINT bits occurs*/
#define ADC_WRITE_CONVERT_SAVE      0xFFF7 /*conversion results saved to locations as determined by register bits when a match as defined by CM bits occurs*/
#define ADC_WRITE_LEGACY            0xFFF3 /*conversion data saved to location determined by buffer register bits */

#define ADC_CMP_OUTSIDE_MODE        0xFFFF /*valid match occurs when conversion result is outside of the window*/
#define ADC_CMP_INSIDE_MODE         0xFFFE /*valid match occurs when conversion result is inside the window*/
#define ADC_CMP_GREATER_MODE        0xFFFD /*valid match occurs when result is greater than corresponding buffer register*/
#define ADC_CMP_LESS_MODE           0xFFFC /*valid match occurs when result is less than corresponding buffer register*/
#endif

#if defined (adc_v4_1)||defined (adc_v4_2) || defined (adc_v4_3)
#define ADC_VREG_ENABLE             0xFFFF /*On-chip regulator is enabled when the ADC is enabled and active*/
#define ADC_VREG_DISABLE            0xF7FF /*On-chip regulator is not enabled by the ADC*/
#endif

/**** AD1CHS register definition ****/
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v6_1) || \
	defined (adc_v6_2) || defined (adc_v7_1) ||defined (adc_v7_2) 
#define ADC_CH0_NEG_SAMPLEB_AN1     0xFFFF /* CH0 negative input is AN1 */
#define ADC_CH0_NEG_SAMPLEB_VREFN   0x7FFF  /* CH0 negative input is VREF- */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEB_VREFN   0x1FFF  /* CH0 negative input is VREF- */
#define ADC_CH0_NEG_SAMPLEB_AN1     0x5FFF /* CH0 negative input is AN1 */

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEB_AN0     0x2FFF /* CH0 negative input is AN0 */
#define ADC_CH0_NEG_SAMPLEB_AN2     0x7FFF /* CH0 negative input is AN2 */
#define ADC_CH0_NEG_SAMPLEB_AN3     0x9FFF /* CH0 negative input is AN3 */
#define ADC_CH0_NEG_SAMPLEB_AN4     0xBFFF /* CH0 negative input is AN4*/
#endif

#if defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEB_AN5     0xCFFF /* CH0 negative input is AN5 */
#endif

#if defined (adc_v4_3) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEB_AN6     0xFFFF /* CH0 negative input is AN6 */
#endif
#endif

#define ADC_CH0_POS_SAMPLEB_AN0     0xE0FF /* A/D CH0 pos i/p sel for SAMPLE B is AN0 */
#define ADC_CH0_POS_SAMPLEB_AN1     0xE1FF /* A/D CH0 pos i/p sel for SAMPLE B is AN1 */
#ifndef adc_v7_1
#define ADC_CH0_POS_SAMPLEB_AN2     0xE2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN2 */
#define ADC_CH0_POS_SAMPLEB_AN3     0xE3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN3 */
#ifndef adc_v6_1
#define ADC_CH0_POS_SAMPLEB_AN4     0xE4FF /* A/D CH0 pos i/p sel for SAMPLE B is AN4 */
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7) || defined (adc_v1_8) || \
	defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v4_2) || \
	defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v6_2) ||\
	defined (adc_v8_2) || defined (adc_v8_3)	
#define ADC_CH0_POS_SAMPLEB_AN5     0xE5FF /* A/D CH0 pos i/p sel for SAMPLE B is AN5 */
#endif
#endif
#endif

#if defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN6     0xE6FF /* A/D CH0 pos i/p sel for SAMPLE B is AN6 */
#define ADC_CH0_POS_SAMPLEB_AN7     0xE7FF /* A/D CH0 pos i/p sel for SAMPLE B is AN7 */
#elif defined (adc_v1_4)||defined (adc_v1_2) 
#define ADC_CH0_POS_SAMPLEB_AVSS	 0xE6FF /* A/D CH0 pos i/p sel for SAMPLE B is AVSS */
#define ADC_CH0_POS_SAMPLEB_AVDD	 0xE7FF /* A/D CH0 pos i/p sel for SAMPLE B is AVDD */
#elif defined (adc_v7_1)|| defined (adc_v7_2) 
#define ADC_CH0_POS_SAMPLEB_VBG		 0xE6FF /* A/D CH0 pos i/p sel for SAMPLE B is VBG */
#define ADC_CH0_POS_SAMPLEB_215VDD	 0xE7FF /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.215*VDD) */
#elif defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3)
#define ADC_CH0_POS_SAMPLEB_AVSS     0xFDFF /* A/D CH0 pos i/p sel for SAMPLE B is AVSS */
#define ADC_CH0_POS_SAMPLEB_AVDD     0xFEFF /* A/D CH0 pos i/p sel for SAMPLE B is AVDD */
#endif

#if defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5) || defined (adc_v1_8) ||defined (adc_v2_1) ||\
	defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_3)	
#define ADC_CH0_POS_SAMPLEB_AN8     0xE8FF /* A/D CH0 pos i/p sel for SAMPLE B is AN8 */
#elif defined (adc_v7_1)|| defined (adc_v7_2) 
#define ADC_CH0_POS_SAMPLEB_785VDD	 0xE8FF /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.785*VDD) */
#endif

#if defined (adc_v1_1) ||defined (adc_v1_3) || defined (adc_v1_5) ||\
    defined (adc_v1_6) || defined (adc_v1_7) || defined (adc_v1_8) ||\
    defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || \
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v7_1) ||\
	defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN9     0xE9FF /* A/D CH0 pos i/p sel for SAMPLE B is AN9 */
#endif

#define ADC_CH0_POS_SAMPLEB_AN10    0xEAFF /* A/D CH0 pos i/p sel for SAMPLE B is AN10 */

#ifndef adc_v7_1
#define ADC_CH0_POS_SAMPLEB_AN11    0xEBFF /* A/D CH0 pos i/p sel for SAMPLE B is AN11 */
#endif

#if defined (adc_v1_1) || defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) ||\
    defined (adc_v1_5) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) ||\
	defined (adc_v3_2) || defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || \
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)	
#define ADC_CH0_POS_SAMPLEB_AN12    0xECFF /* A/D CH0 pos i/p sel for SAMPLE B is AN12 */
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) ||\
	defined (adc_v8_2) || defined (adc_v8_3)	
#define ADC_CH0_POS_SAMPLEB_AN13    0xEDFF /* A/D CH0 pos i/p sel for SAMPLE B is AN13 */
#elif defined (adc_v1_5)|| defined (adc_v1_6) || defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEB_VDDCORE  0xEDFF /* A/D CH0 pos i/p sel for SAMPLE B is AN13 */
#elif defined (adc_v1_4) || defined (adc_v1_2) || defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CH0_POS_SAMPLEB_CTMU     0xEDFF /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || \
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN14    0xEEFF /* A/D CH0 pos i/p sel for SAMPLE B is AN14 */
#elif defined (adc_v1_5)|| defined (adc_v1_6) || defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEB_VBGDIV2 0xEEFF /* A/D CH0 pos i/p sel for SAMPLE B is VBG/2 */
#elif defined (adc_v1_4) 
#define ADC_CH0_POS_SAMPLEB_VBGDIV2 0xFEFF /* A/D CH0 pos i/p sel for SAMPLE A is VBG/2 */
#endif


#if  defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) ||\
	defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEB_AN15    0xEFFF /* A/D CH0 pos i/p sel for SAMPLE B is AN15 */
#elif defined (adc_v1_1)||defined (adc_v1_2) ||defined (adc_v1_4)|| defined (adc_v1_5) ||\
      defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEB_VBG		0xEFFF /* A/D CH0 pos i/p sel for SAMPLE B is VBG */
#endif

#if defined (adc_v3_2) || defined (adc_v5_2) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN16    0xF0FF  /* A/D CH0 pos i/p sel for SAMPLE B is AN16 */
#define ADC_CH0_POS_SAMPLEB_AN17    0xF1FF /* A/D CH0 pos i/p sel for SAMPLE B is AN17 */
#elif defined (adc_v2_1) 
#define ADC_CH0_POS_SAMPLEB_VBGDIV2 0xF0FF /* A/D CH0 pos i/p sel for SAMPLE B is VBG/2 */
#define ADC_CH0_POS_SAMPLEB_VBG		0xF1FF /* A/D CH0 pos i/p sel for SAMPLE B is VBG */
#elif defined (adc_v4_1)|| defined (adc_v4_2) ||defined (adc_v4_3)
#define ADC_CH0_POS_SAMPLEB_CTMU_TEMP    0xF0FF /* No Channel used; all input floating; used for CTMU temperature sensor input*/
#define ADC_CH0_POS_SAMPLEB_CTMU         0xF1FF /* No Channel used; all input floating; used for CTMU*/
#elif  defined (adc_v5_1) || defined (adc_v5_2) 
#define ADC_CH0_POS_SAMPLEB_CTMU_TEMP   0xF8FF /* No Channel used; all input floating; used for CTMU Temperature Sensor input*/
#define ADC_CH0_POS_SAMPLEB_CTMU     	0xF9FF /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v3_2) || defined (adc_v5_2) 
#define ADC_CH0_POS_SAMPLEB_AN18    0xF2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN18 */
#define ADC_CH0_POS_SAMPLEB_AN19    0xF3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN19 */
#define ADC_CH0_POS_SAMPLEB_AN20    0xF4FF /* A/D CH0 pos i/p sel for SAMPLE B is AN20 */
#define ADC_CH0_POS_SAMPLEB_AN21    0xF5FF /* A/D CH0 pos i/p sel for SAMPLE B is AN21 */
#define ADC_CH0_POS_SAMPLEB_AN22    0xF6FF /* A/D CH0 pos i/p sel for SAMPLE B is AN22 */
#define ADC_CH0_POS_SAMPLEB_AN23    0xF7FF /* A/D CH0 pos i/p sel for SAMPLE B is AN23 */
#endif

#if defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#if defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN18    0xF2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN18 */
#endif
#define ADC_CH0_POS_SAMPLEB_AN19    0xF3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN19 */
#define ADC_CH0_POS_SAMPLEB_AN20    0xF4FF /* A/D CH0 pos i/p sel for SAMPLE B is AN20 */
#define ADC_CH0_POS_SAMPLEB_AN21    0xF5FF /* A/D CH0 pos i/p sel for SAMPLE B is AN21 */
#define ADC_CH0_POS_SAMPLEB_CTMU_TEMP    0xF6FF /* No Channel used; all input floating; used for CTMU temperature sensor input*/
#define ADC_CH0_POS_SAMPLEB_CTMU   0xF7FF /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v3_1)||defined (adc_v3_2) 
#define ADC_CH0_POS_SAMPLEB_VBGDIV2 0xF8FF /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-two-reference (VBG/2)*/
#define ADC_CH0_POS_SAMPLEB_VBG		0xF9FF /* A/D CH0 pos i/p sel for SAMPLE B is band gap reference (VBG) */
#define ADC_CH0_POS_SAMPLEB_VDDCORE	0xFAFF /* A/D CH0 pos i/p sel for SAMPLE B is Core Voltage (VDDCORE) */
#define ADC_CH0_POS_SAMPLEB_VBGDIV6 0xFBFF /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-six-reference (VBG/6)*/
#elif  defined (adc_v5_1) || defined (adc_v5_2)  
#define ADC_CH0_POS_SAMPLEB_VBGDIV6  0xFAFF /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-six-reference (VBG/6) */
#define ADC_CH0_POS_SAMPLEB_VBGDIV2  0xFBFF /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-two-reference (VBG/2) */
#define ADC_CH0_POS_SAMPLEB_VBG		 0xFCFF /* A/D CH0 pos i/p sel for SAMPLE B is band gap reference (VBG) */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_VBG	 0xFAFF /* A/D CH0 pos i/p sel for SAMPLE B is band gap reference (VBG) */
#define ADC_CH0_POS_SAMPLEB_215VDD   0xFBFF /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.215*VDD) */
#define ADC_CH0_POS_SAMPLEB_785VDD   0xFCFF /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.785*VDD) */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AVSS     0xFDFF /* A/D CH0 pos i/p sel for SAMPLE B is AVSS */
#define ADC_CH0_POS_SAMPLEB_AVDD     0xFEFF /* A/D CH0 pos i/p sel for SAMPLE B is AVDD */
#endif

#if defined (adc_v5_1) || defined (adc_v5_2) 
#define ADC_CH0_POS_SAMPLEB_VBAT     0xFFFF /* A/D CH0 pos i/p sel for SAMPLE B is VBAT */
#endif

#if defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEB_VOLTREG  0xFDFF /* A/D CH0 pos i/p sel for SAMPLE B is voltage regulator output */
#endif

#if  defined (adc_v1_7) || defined (adc_v1_8)||defined (adc_v3_1) || defined (adc_v3_2)
#define ADC_CH0_POS_SAMPLEB_CTMU    0xFFFF /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) || defined (adc_v6_1) || \
	defined (adc_v6_2) || defined (adc_v7_1)||defined (adc_v7_2) 
#define ADC_CH0_NEG_SAMPLEA_AN1     0xFFFF /* A/D CH0 neg I/P sel for SAMPLE A is AN1 */
#define ADC_CH0_NEG_SAMPLEA_VREFN   0xFF7F /* A/D CH0 neg I/P sel for SAMPLE A is Vrefn */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEA_VREFN   0xFF1F  /* CH0 negative input is VREF- */
#define ADC_CH0_NEG_SAMPLEA_AN1     0xFF5F /* CH0 negative input is AN1 */

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEA_AN0     0xFF2F /* CH0 negative input is AN0 */
#define ADC_CH0_NEG_SAMPLEA_AN2     0xFF7F /* CH0 negative input is AN2 */
#define ADC_CH0_NEG_SAMPLEA_AN3     0xFF9F /* CH0 negative input is AN3 */
#define ADC_CH0_NEG_SAMPLEA_AN4     0xFFBF /* CH0 negative input is AN4*/
#endif

#if defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEA_AN5     0xFFCF /* CH0 negative input is AN5 */
#endif

#if defined (adc_v4_3) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEA_AN6     0xFFFF /* CH0 negative input is AN6 */
#endif
#endif

#define ADC_CH0_POS_SAMPLEA_AN0     0xFFE0 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN0 */
#define ADC_CH0_POS_SAMPLEA_AN1     0xFFE1 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN1 */
#ifndef adc_v7_1
#define ADC_CH0_POS_SAMPLEA_AN2     0xFFE2 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN2 */
#define ADC_CH0_POS_SAMPLEA_AN3     0xFFE3 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN3 */
#ifndef adc_v6_1
#define ADC_CH0_POS_SAMPLEA_AN4     0xFFE4 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN4 */
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7) || defined (adc_v1_8) || \
	defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v4_2) || \
	defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v6_2) ||\
	defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEA_AN5     0xFFE5 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN5 */
#endif
#endif
#endif

#if defined (adc_v1_3) || defined (adc_v1_4)|| defined (adc_v1_5) || defined (adc_v1_8)||\
    defined (adc_v2_1)||defined (adc_v3_1) || defined (adc_v3_2) ||defined (adc_v4_3)||\
	defined (adc_v5_1) || defined (adc_v5_2) 
#define ADC_CH0_POS_SAMPLEA_AN6     0xFFE6 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN6 */
#define ADC_CH0_POS_SAMPLEA_AN7     0xFFE7 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN7 */
#elif defined (adc_v1_4)||defined (adc_v1_2)
#define ADC_CH0_POS_SAMPLEA_AVSS	0xFFE6 /* A/D CH0 pos i/p sel for SAMPLE A is AVSS */
#define ADC_CH0_POS_SAMPLEA_AVDD	0xFFE7 /* A/D CH0 pos i/p sel for SAMPLE A is AVDD */
#elif defined (adc_v7_1)|| defined (adc_v7_2) 
#define ADC_CH0_POS_SAMPLEA_VBG		 0xFFE6 /* A/D CH0 pos i/p sel for SAMPLE B is VBG */
#define ADC_CH0_POS_SAMPLEA_215VDD	 0xFFE7 /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.215*VDD) */
#elif defined (adc_v4_1)|| defined (adc_v4_2) ||defined (adc_v4_3)
#define ADC_CH0_POS_SAMPLEA_AVSS     0xFFFD /* A/D CH0 pos i/p sel for SAMPLE B is AVSS */
#define ADC_CH0_POS_SAMPLEA_AVDD     0xFFFE /* A/D CH0 pos i/p sel for SAMPLE B is AVDD */
#endif

#if defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5) || defined (adc_v1_8) || defined (adc_v2_1) ||\
	defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AN8     0xFFE8 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN8 */
#elif defined (adc_v7_1)|| defined (adc_v7_2) 
#define ADC_CH0_POS_SAMPLEA_785VDD	 0xFFE8 /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.785*VDD) */
#endif

#if defined (adc_v1_1) ||defined (adc_v1_3) || defined (adc_v1_5) ||\
    defined (adc_v1_6) || defined (adc_v1_7) || defined (adc_v1_8) ||\
    defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || \
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v7_1) ||\
	defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AN9     0xFFE9 /* A/D CH0 pos i/p sel for SAMPLE B is AN9 */
#endif

#define ADC_CH0_POS_SAMPLEA_AN10    0xFFEA /* A/D Chan 0 pos i/p sel for SAMPLE A is AN10 */

#ifndef adc_v7_1
#define ADC_CH0_POS_SAMPLEA_AN11    0xFFEB /* A/D CH0 pos i/p sel for SAMPLE B is AN11 */
#endif

#if defined (adc_v1_1) || defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) ||\
    defined (adc_v1_5) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) ||\
	defined (adc_v3_2) || defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || \
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEA_AN12    0xFFEC /* A/D CH0 pos i/p sel for SAMPLE B is AN12 */
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) ||\
	defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEA_AN13    0xFFED /* A/D CH0 pos i/p sel for SAMPLE B is AN13 */
#elif defined (adc_v1_5)|| defined (adc_v1_6) || defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEA_VDDCORE  0xFFED/* A/D CH0 pos i/p sel for SAMPLE B is AN13 */
#elif defined (adc_v1_4) || defined (adc_v1_2) || defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CH0_POS_SAMPLEA_CTMU     0xFFED /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || \
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEA_AN14     0xFFEE /* A/D Chan 0 pos i/p sel for SAMPLE A is AN14 */
#elif defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEA_VBGDIV2  0xFFEE /* A/D CH0 pos i/p sel for SAMPLE A is VBG/2 */
#elif defined (adc_v1_4) 
#define ADC_CH0_POS_SAMPLEA_VBGDIV2  0xFFFE /* A/D CH0 pos i/p sel for SAMPLE A is VBG/2 */
#endif

#if  defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) ||\
	defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEA_AN15    0xFFEF /* A/D Chan 0 pos i/p sel for SAMPLE A is AN15 */
#elif defined (adc_v1_1)||defined (adc_v1_2) ||defined (adc_v1_4)  ||defined (adc_v1_5) || defined (adc_v1_6)||\
     defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEA_VBG		0xFFEF /* A/D CH0 pos i/p sel for SAMPLE A is VBG *//
#endif

#if defined (adc_v3_2) || defined (adc_v5_2) || defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEA_AN16    0xFFF0 /* A/D CH0 pos i/p sel for SAMPLE A is AN16 */
#define ADC_CH0_POS_SAMPLEA_AN17    0xFFF1 /* A/D CH0 pos i/p sel for SAMPLE A is AN17 */
#elif defined (adc_v2_1) 
#define ADC_CH0_POS_SAMPLEA_VBGDIV2 0xFFF0 /* A/D CH0 pos i/p sel for SAMPLE A is VBG/2 */
#define ADC_CH0_POS_SAMPLEA_VBG		0xFFF1 /* A/D CH0 pos i/p sel for SAMPLE A is VBG */
#endif
#if defined (adc_v4_1)|| defined (adc_v4_2) ||defined (adc_v4_3)
#define ADC_CH0_POS_SAMPLEA_CTMU_TEMP    0xFFF0 /* No Channel used; all input floating; used for CTMU temperature sensor input*/
#define ADC_CH0_POS_SAMPLEA_CTMU         0xFFF1 /* No Channel used; all input floating; used for CTMU*/
#elif  defined (adc_v5_1) || defined (adc_v5_2) 
#define ADC_CH0_POS_SAMPLEA_CTMU_TEMP   0xFFF8 /* No Channel used; all input floating; used for CTMU Temperature Sensor input*/
#define ADC_CH0_POS_SAMPLEA_CTMU     	0xFFF9 /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v3_2)|| defined (adc_v5_2) 
#define ADC_CH0_POS_SAMPLEA_AN18    0xFFF2 /* A/D CH0 pos i/p sel for SAMPLE A is AN18 */
#define ADC_CH0_POS_SAMPLEA_AN19    0xFFF3 /* A/D CH0 pos i/p sel for SAMPLE A is AN19 */
#define ADC_CH0_POS_SAMPLEA_AN20    0xFFF4 /* A/D CH0 pos i/p sel for SAMPLE A is AN20 */
#define ADC_CH0_POS_SAMPLEA_AN21    0xFFF5 /* A/D CH0 pos i/p sel for SAMPLE A is AN21 */
#define ADC_CH0_POS_SAMPLEA_AN22    0xFFF6 /* A/D CH0 pos i/p sel for SAMPLE A is AN22 */
#define ADC_CH0_POS_SAMPLEA_AN23    0xFFF7 /* A/D CH0 pos i/p sel for SAMPLE A is AN23 */
#endif

#if defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#if defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AN18    0xFFF2 /* A/D CH0 pos i/p sel for SAMPLE B is AN18 */
#endif
#define ADC_CH0_POS_SAMPLEA_AN19    0xFFF3 /* A/D CH0 pos i/p sel for SAMPLE B is AN19 */
#define ADC_CH0_POS_SAMPLEA_AN20    0xFFF4 /* A/D CH0 pos i/p sel for SAMPLE B is AN20 */
#define ADC_CH0_POS_SAMPLEA_AN21    0xFFF5 /* A/D CH0 pos i/p sel for SAMPLE B is AN21 */
#define ADC_CH0_POS_SAMPLEA_CTMU_TEMP    0xFFF6 /* No Channel used; all input floating; used for CTMU temperature sensor input*/
#define ADC_CH0_POS_SAMPLEA_CTMU   0xFFF7 /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v3_1) || defined (adc_v3_2)
#define ADC_CH0_POS_SAMPLEA_VBGDIV2 0xFFF8 /* A/D CH0 pos i/p sel for SAMPLE A is band gap divided-by-two-reference (VBG/2)*/
#define ADC_CH0_POS_SAMPLEA_VBG		0xFFF9 /* A/D CH0 pos i/p sel for SAMPLE A is band gap reference (VBG) */
#define ADC_CH0_POS_SAMPLEA_VDDCORE	0xFFFA /* A/D CH0 pos i/p sel for SAMPLE A is Core Voltage (VDDCORE) */
#define ADC_CH0_POS_SAMPLEA_VBGDIV6 0xFFFB /* A/D CH0 pos i/p sel for SAMPLE A is band gap divided-by-six-reference (VBG/6)*/
#elif  defined (adc_v5_1) || defined (adc_v5_2)  
#define ADC_CH0_POS_SAMPLEA_VBGDIV6  0xFFFA /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-six-reference (VBG/6) */
#define ADC_CH0_POS_SAMPLEA_VBGDIV2  0xFFFB /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-two-reference (VBG/2) */
#define ADC_CH0_POS_SAMPLEA_VBG		 0xFFFC /* A/D CH0 pos i/p sel for SAMPLE B is band gap reference (VBG) */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_VBG		 0xFFFA /* A/D CH0 pos i/p sel for SAMPLE A is band gap reference (VBG) */
#define ADC_CH0_POS_SAMPLEA_215VDD 	 0xFFFB /* A/D CH0 pos i/p sel for SAMPLE A is Upper guardband rail (0.215*VDD) */
#define ADC_CH0_POS_SAMPLEA_785VDD   0xFFFC /* A/D CH0 pos i/p sel for SAMPLE A is Upper guardband rail (0.785*VDD) */
#endif
#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEA_AVSS     0xFFFD /* A/D CH0 pos i/p sel for SAMPLE A is AVSS */
#define ADC_CH0_POS_SAMPLEA_AVDD     0xFFFE /* A/D CH0 pos i/p sel for SAMPLE A is AVDD */
#endif

#if defined (adc_v5_1)|| defined (adc_v5_2)   
#define ADC_CH0_POS_SAMPLEA_VBAT     0xFFFF /* A/D CH0 pos i/p sel for SAMPLE A is VBAT */
#endif

#if defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEA_VOLTREG 0xFFFD /* A/D CH0 pos i/p sel for SAMPLE A is voltage regulator output */
#endif

#if defined (adc_v1_7) || defined (adc_v1_8)|| defined (adc_v3_1) || defined (adc_v3_2)
#define ADC_CH0_POS_SAMPLEA_CTMU    0xFFFF /* No Channel used; all input floating; used for CTMU*/
#endif

/*** AD1CHS123 register definition ***/
#if defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CH123_NEG_SAMPLEB_AVSS		0xFBFF /*Channel 1,2,3 Negative Input Select for Sample B bits is AVSS*/
#define ADC_CH123_NEG_SAMPLEB_GND		0xF9FF /*Channel 1,2,3 Negative Input Select for Sample B bits is AVSS*/

#define ADC_CH123_POS_SAMPLEB_AN012		0xFEFF  /* CH1 positive input is AN0, CH2 positive input is AN1, CH3 positive input is AN2 */
#if defined (adc_v6_1)
#define ADC_CH1_POS_SAMPLEB_AN3			0xFFFF  /* CH1 positive input is AN3, CH2 and CH3 positive inputs are not connected */
#endif

#if defined (adc_v6_2)
#define ADC_CH123_POS_SAMPLEB_AN345		0xFFFF  /* CH1 positive input is AN3, CH2 positive input is AN4, CH3 positive input is AN5 */
#endif

#define ADC_CH123_NEG_SAMPLEA_AVSS		0xFFFB /*Channel 1,2,3 Negative Input Select for Sample A bits is AVSS*/ 
#define ADC_CH123_NEG_SAMPLEA_GND		0xFFF9 /*Channel 1,2,3 Negative Input Select for Sample A bits is AVSS*/ 

#define ADC_CH123_POS_SAMPLEA_AN012		0xFFFE  /* CH1 positive input is AN0, CH2 positive input is AN1, CH3 positive input is AN2 */
#if defined (adc_v6_1)
#define ADC_CH1_POS_SAMPLEA_AN3			0xFFFF  /* CH1 positive input is AN3, CH2 and CH3 positive inputs are not connected */
#endif

#if defined (adc_v6_2)
#define ADC_CH123_POS_SAMPLEA_AN345		0xFFFF  /* CH1 positive input is AN3, CH2 positive input is AN4, CH3 positive input is AN5 */
#endif

#endif

/*** AD1PCFGL register definition ***/
#if defined (adc_v1_1) || defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8) || defined (adc_v2_1) ||\
	defined (adc_v6_1) || defined (adc_v6_2)
#define ENABLE_AN0_DIG              0xFFFF /*Enable AN0 in digital mode */
#define ENABLE_AN0_ANA              0xFFFE /*Enable AN0 in analog mode */
#define ENABLE_AN1_DIG              0xFFFF /*Enable AN1 in digital mode */
#define ENABLE_AN1_ANA              0xFFFD /*Enable AN1 in analog mode */
#define ENABLE_AN2_DIG              0xFFFF /*Enable AN2 in digital mode */
#define ENABLE_AN2_ANA              0xFFFB /*Enable AN2 in analog mode */
#define ENABLE_AN3_DIG              0xFFFF /*Enable AN3 in digital mode */
#define ENABLE_AN3_ANA              0xFFF7 /*Enable AN3 in analog mode */
#define ENABLE_AN4_DIG              0xFFFF /*Enable AN4 in digital mode */
#define ENABLE_AN4_ANA              0xFFEF /*Enable AN4 in analog mode */
#define ENABLE_AN5_DIG              0xFFFF /*Enable AN5 in digital mode */
#define ENABLE_AN5_ANA              0xFFDF /*Enable AN5 in analog mode */
#if defined (adc_v1_2)||defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5)|| defined (adc_v1_8)|| defined (adc_v2_1)
#define ENABLE_AN6_DIG              0xFFFF /*Enable AN6 in digital mode */
#define ENABLE_AN6_ANA              0xFFBF /*Enable AN6 in analog mode */
#define ENABLE_AN7_DIG              0xFFFF /*Enable AN7 in digital mode */
#define ENABLE_AN7_ANA              0xFF7F /*Enable AN7 in analog mode */
#define ENABLE_AN8_DIG              0xFFFF /*Enable AN8 in digital mode */
#define ENABLE_AN8_ANA              0xFEFF /*Enable AN8 in analog mode */
#endif
#if defined (adc_v1_1) || defined (adc_v1_2)||defined (adc_v1_3) || defined (adc_v1_5)|| defined (adc_v1_6) ||\
    defined (adc_v1_7) || defined (adc_v1_8)|| defined (adc_v2_1)
#define ENABLE_AN9_DIG              0xFFFF /*Enable AN9 in digital mode */
#define ENABLE_AN9_ANA              0xFDFF /*Enable AN9 in analog mode */
#endif
#define ENABLE_AN10_DIG             0xFFFF /*Enable AN10 in digital mode */
#define ENABLE_AN10_ANA             0xFBFF /*Enable AN10 in analog mode */
#define ENABLE_AN11_DIG             0xFFFF /*Enable AN11 in digital mode */
#define ENABLE_AN11_ANA             0xF7FF /*Enable AN11 in analog mode */
#if defined (adc_v1_1)|| defined (adc_v1_2) ||defined (adc_v1_3) || defined (adc_v1_4) || \
defined (adc_v1_5)|| defined (adc_v1_8) || defined (adc_v2_1)
#define ENABLE_AN12_DIG             0xFFFF /*Enable AN12 in digital mode */
#define ENABLE_AN12_ANA             0xEFFF /*Enable AN12 in analog mode */
#endif
#if defined (adc_v1_3)||defined (adc_v2_1)
#define ENABLE_AN13_DIG             0xFFFF /*Enable AN13 in digital mode */
#define ENABLE_AN13_ANA             0xDFFF /*Enable AN13 in analog mode */
#elif defined (adc_v1_5)|| defined (adc_v1_6)  || defined (adc_v1_7)|| defined (adc_v1_8) 
#define VOLT_REG_DISABLED			0xFFFF /*Voltage regulator reference is disabled*/
#define VOLT_REG_ENABLED			0xDFFF /*Voltage regulator reference is enabled*/
#endif
#if defined (adc_v1_3) ||defined (adc_v2_1)
#define ENABLE_AN14_DIG             0xFFFF /*Enable AN14 in digital mode */
#define ENABLE_AN14_ANA             0xBFFF /*Enable AN14 in analog mode */
#elif defined (adc_v1_5)  || defined (adc_v1_6)|| defined (adc_v1_7) || defined (adc_v1_8)
#define BG_VREF_DIV2_DISABLED		0xFFFF /*Band gap Voltage reference/2 is disabled*/ 
#define BG_VREF_DIV2_ENABLED		0xBFFF /*Band gap Voltage reference/2 is enabled*/
#endif
#if defined (adc_v1_3)||defined (adc_v2_1)
#define ENABLE_AN15_DIG             0xFFFF /*Enable AN15 in digital mode */
#define ENABLE_AN15_ANA             0x7FFF /*Enable AN15 in analog mode */
#elif defined (adc_v1_1)||defined (adc_v1_2)|| defined (adc_v1_5)|| defined (adc_v1_6) ||\
      defined (adc_v1_7) || defined (adc_v1_8) 
#define BG_VREF_DISABLED            0xFFFF /*Band gap Voltage reference is disabled*/
#define BG_VREF_ENABLED             0x7FFF /*Band gap voltage reference is enabled*/
#endif

#define ENABLE_ALL_ANA_0_15         0x0000 /*Enable AN0-AN15 in analog mode */
#define ENABLE_ALL_DIG_0_15         0xFFFF /*Enable AN0-AN15 in Digital mode */
#endif

/**** AD1PCFGH register definition ****/
#if defined (adc_v2_1)
#define ENABLE_VBGDIV2_DIG         0xFFFF /*Internal VBG/2 channel enabled for input scan */
#define ENABLE_VBGDIV2_ANA         0xFFFE /*Analog channel disabled from input scan*/
#define ENABLE_VBG_DIG              0xFFFF /*Internal band gap (VBG) channel enabled for input scan*/
#define ENABLE_VBG_ANA              0xFFFD /*Analog channel disabled from input scan*/
#define ENABLE_AN16_DIG             ENABLE_VBGDIV2_DIG /*Internal VBG/2 channel enabled for input scan */
#define ENABLE_AN16_ANA             ENABLE_VBGDIV2_ANA/*Analog channel disabled from input scan*/
#define ENABLE_AN17_DIG             ENABLE_VBG_DIG /*Internal band gap (VBG) channel enabled for input scan*/
#define ENABLE_AN17_ANA             ENABLE_VBG_ANA /*Analog channel disabled from input scan*/
#endif

/**** ANCFG register definition ****/
#if defined (adc_v3_1) ||defined (adc_v3_2) 
#define BG_VREF_DIV6_ENABLE         0xFFFF  /*Bandgap voltage divided-by-six reference (VBG/6) is enabled*/
#define BG_VREF_DIV6_DISABLE        0xFFFB  /*Bandgap divided-by-six reference (VBG/6) is disabled*/
#define BG_VREF_DIV2_ENABLE         0xFFFF  /*Bandgap voltage divided-by-two reference (VBG/2) is enabled*/
#define BG_VREF_DIV2_DISABLE        0xFFFD /*Bandgap divided-by-two reference (VBG/2) is disabled*/
#endif
#if defined (adc_v3_1) ||defined (adc_v3_2) || defined (adc_v7_1) ||defined (adc_v7_2) 
#define BG_VREF_ENABLE              0xFFFF  /*Bandgap voltage reference (VBG) is enabled*/
#define BG_VREF_DISABLE             0xFFFE  /*Bandgap reference (VBG) is disabled*/
#endif


/**** AD1CSSL control register definition ****/
#define ADC_SCAN_AN0      			0xFFFF /*Enable Input Scan AN0 */
#define ADC_SKIP_SCAN_AN0      		0xFFFE /* Disable Input Scan AN0 */
#define ADC_SCAN_AN1      			0xFFFF /*Enable Input Scan AN1 */
#define ADC_SKIP_SCAN_AN1      		0xFFFD /* Disable Input Scan AN1 */
#ifndef adc_v7_1
#define ADC_SCAN_AN2      			0xFFFF /*Enable Input Scan AN2 */
#define ADC_SKIP_SCAN_AN2      		0xFFFB /* Disable Input Scan AN2 */
#define ADC_SCAN_AN3      			0xFFFF /*Enable Input Scan AN3 */
#define ADC_SKIP_SCAN_AN3      		0xFFF7 /* Disable Input Scan AN3 */
#define ADC_SCAN_AN4      			0xFFFF /*Enable Input Scan AN4 */
#define ADC_SKIP_SCAN_AN4      		0xFFEF /* Disable Input Scan AN4 */
#ifndef adc_v7_2
#define ADC_SCAN_AN5      			0xFFFF /*Enable Input Scan AN5 */
#define ADC_SKIP_SCAN_AN5      		0xFFDF /* Disable Input Scan AN5 */
#endif
#endif

#if defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5) || defined (adc_v1_8) ||\
	defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || \
	defined (adc_v7_1) ||defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN6      			0xFFFF /*Enable Input Scan AN6 */
#define ADC_SKIP_SCAN_AN6     		0xFFBF /* Disable Input Scan AN6 */
#define ADC_SCAN_AN7      			0xFFFF /*Enable Input Scan AN7 */
#define ADC_SKIP_SCAN_AN7      		0xFF7F /* Disable Input Scan AN7 */
#define ADC_SCAN_AN8      			0xFFFF /*Enable Input Scan AN8 */
#define ADC_SKIP_SCAN_AN8      		0xFEFF /* Disable Input Scan AN8 */
#endif

#if defined (adc_v1_1) || defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_5) || defined (adc_v1_6) ||\
	defined (adc_v1_7) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || \
	defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN9      		    0xFFFF /*Enable Input Scan AN9 */
#define ADC_SKIP_SCAN_AN9      		0xFDFF /* Disable Input Scan AN9 */
#endif

#define ADC_SCAN_AN10     			0xFFFF /*Enable Input Scan AN10 */
#define ADC_SKIP_SCAN_AN10     		0xFBFF /* Disable Input Scan AN10 */
#ifndef adc_v7_1
#define ADC_SCAN_AN11     			0xFFFF /*Enable Input Scan AN11 */
#define ADC_SKIP_SCAN_AN11     		0xF7FF /* Disable Input Scan AN11 */
#endif

#if defined (adc_v1_1)|| defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) || \
	defined (adc_v1_5) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN12     			0xFFFF /*Enable Input Scan AN12 */
#define ADC_SKIP_SCAN_AN12          0xEFFF /* Disable Input Scan AN12 */
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || \
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) ||\
	defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN13    			0xFFFF /*Enable Input Scan AN13 */
#define ADC_SKIP_SCAN_AN13     		0xDFFF /* Disable Input Scan AN13 */
#elif defined (adc_v1_5)|| defined (adc_v1_6) || defined (adc_v1_7) || defined (adc_v1_8)
#define ADC_SCAN_VOLT_REG           0xFFFF /*Band gap Voltage reference is disabled*/
#define ADC_SKIP_SCAN_VOLT_REG      0xDFFF /*Band gap voltage reference is enabled*/
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN14    			0xFFFF /*Enable Input Scan AN14 */
#define ADC_SKIP_SCAN_AN14     		0xBFFF /* Disable Input Scan AN14 */
#elif defined (adc_v1_5)|| defined (adc_v1_6) || defined (adc_v1_7) || defined (adc_v1_8)
#define ADC_SCAN_BG_VREF_DIV2       0xFFFF /*Band gap Voltage reference is disabled*/
#define ADC_SKIP_SCAN_BG_VREF_DIV2  0xBFFF /*Band gap voltage reference is enabled*/
#endif

#if  defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN15    			0xFFFF /*Enable Input Scan AN15 */
#define ADC_SKIP_SCAN_AN15    		0x7FFF /* Disable Input Scan AN15 */
#elif defined (adc_v1_1) || defined (adc_v1_2)|| defined (adc_v1_5)|| defined (adc_v1_6) ||\
      defined (adc_v1_7) || defined (adc_v1_8)
#define ADC_SCAN_BG_VREF            0xFFFF /*Band gap Voltage reference is disabled*/
#define ADC_SKIP_SCAN_BG_VREF       0x7FFF /*Band gap voltage reference is enabled*/
#endif

#define ENABLE_ALL_INPUT_SCAN       0xFFFF /*Enable Input Scan AN0-AN15 */
#define DISABLE_ALL_INPUT_SCAN      0x0000 /*Disable Input Scan AN0-AN15 */

/**** AD1CSSH register definition ****/
#if defined (adc_v2_1)
#define ADC_SCAN_VBGDIV2           0xFFFF /*Internal VBG/2 channel selected for input scan*/
#define ADC_SKIP_SCAN_VBGDIV2      0xFFFE /*Analog channel omitted from input scan*/
#define ADC_SCAN_VBG               0xFFFF /*Internal band gap (VBG) channel selected for input scan */
#define ADC_SKIP_SCAN_VBG          0xFFFD /*Analog channel omitted from input scan*/
#define ADC_SCAN_AN16     		   ADC_SCAN_VBGDIV2 /*Internal VBG/2 channel selected for input scan */
#define ADC_SKIP_SCAN_AN16    	   ADC_SKIP_SCAN_VBGDIV2 /* Analog channel omitted from input scan */
#define ADC_SCAN_AN17     		   ADC_SCAN_VBG /*Internal band gap (VBG) channel selected for input scan */
#define ADC_SKIP_SCAN_AN17    	   ADC_SKIP_SCAN_VBG /*Analog channel omitted from input scan*/
#endif

#if defined (adc_v3_2) || defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) ||\
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN16     			0xFFFF /*Enable Input Scan AN16 */
#define ADC_SKIP_SCAN_AN16    		0xFFFE /* Disable Input Scan AN16 */
#define ADC_SCAN_AN17     			0xFFFF /*Enable Input Scan AN17 */
#define ADC_SKIP_SCAN_AN17    		0xFFFD /* Disable Input Scan AN17 */
#endif

#if defined (adc_v3_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN18     			0xFFFF /*Enable Input Scan AN18 */
#define ADC_SKIP_SCAN_AN18    		0xFFFB /* Disable Input Scan AN18 */
#define ADC_SCAN_AN19     			0xFFFF /*Enable Input Scan AN19 */
#define ADC_SKIP_SCAN_AN19    		0xFFF7 /* Disable Input Scan AN19 */
#define ADC_SCAN_AN20     			0xFFFF /*Enable Input Scan AN20 */
#define ADC_SKIP_SCAN_AN20   		0xFFEF /* Disable Input Scan AN20 */
#define ADC_SCAN_AN21     			0xFFFF /*Enable Input Scan AN21 */
#define ADC_SKIP_SCAN_AN21    		0xFFDF /* Disable Input Scan AN21 */
#define ADC_SCAN_AN22     			0xFFFF /*Enable Input Scan AN22 */
#define ADC_SKIP_SCAN_AN22    		0xFFBF /* Disable Input Scan AN22 */
#define ADC_SCAN_AN23     			0xFFFF /*Enable Input Scan AN23 */
#define ADC_SKIP_SCAN_AN23    		0xFF7F /* Disable Input Scan AN23 */
#endif

#if defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v5_1) || defined (adc_v5_2)
#define ADC_SCAN_AN24     			0xFFFF /*Enable Input Scan AN24 */
#define ADC_SKIP_SCAN_AN24    		0xFEFF /* Disable Input Scan AN24 */
#define ADC_SCAN_AN25     			0xFFFF /*Enable Input Scan AN25 */
#define ADC_SKIP_SCAN_AN25    		0xFDFF /* Disable Input Scan AN25 */
#endif

#if defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) ||\
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN26     			0xFFFF /*Enable Input Scan AN26 */
#define ADC_SKIP_SCAN_AN26    		0xFBFF /* Disable Input Scan AN26 */
#define ADC_SCAN_AN27     			0xFFFF /*Enable Input Scan AN27 */
#define ADC_SKIP_SCAN_AN27    		0xF7FF/* Disable Input Scan AN27 */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN28     			0xFFFF /*Enable Input Scan AN28 */
#define ADC_SKIP_SCAN_AN28    		0xEFFF /* Disable Input Scan AN28 */
#define ADC_SCAN_AN29     			0xFFFF /*Enable Input Scan AN29 */
#define ADC_SKIP_SCAN_AN29    		0xDFFF/* Disable Input Scan AN29 */
#define ADC_SCAN_AN30     			0xFFFF /*Enable Input Scan AN30 */
#define ADC_SKIP_SCAN_AN30    		0xBFFF/* Disable Input Scan AN30 */
#endif

/*****AD1CTMUENL/AD1CTMENL register definition***********/
#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CTMU_AN0     			0xFFFF /*CTMU enabled and connected to AN0 */
#define ADC_SKIP_CTMU_AN0    		0xFFFE /*CTMU not connected to AN0*/
#define ADC_CTMU_AN1     			0xFFFF /*CTMU enabled and connected to AN1 */
#define ADC_SKIP_CTMU_AN1    		0xFFFD /*CTMU not connected to AN1*/
#define ADC_CTMU_AN2     			0xFFFF /*CTMU enabled and connected to AN2*/
#define ADC_SKIP_CTMU_AN2    		0xFFFB /*CTMU not connected to AN2*/
#define ADC_CTMU_AN3     			0xFFFF /*CTMU enabled and connected to AN3 */
#define ADC_SKIP_CTMU_AN3    		0xFFF7 /*CTMU not connected to AN3*/
#define ADC_CTMU_AN4     			0xFFFF /*CTMU enabled and connected to AN4*/
#define ADC_SKIP_CTMU_AN4    		0xFFEF /*CTMU not connected to AN4*/
#define ADC_CTMU_AN5     			0xFFFF /*CTMU enabled and connected to AN5 */
#define ADC_SKIP_CTMU_AN5    		0xFFDF /*CTMU not connected to AN5*/
#define ADC_CTMU_AN6     			0xFFFF /*CTMU enabled and connected to AN6*/
#define ADC_SKIP_CTMU_AN6    		0xFFBF /*CTMU not connected to AN6*/
#define ADC_CTMU_AN7     			0xFFFF /*CTMU enabled and connected to AN7 */
#define ADC_SKIP_CTMU_AN7    		0xFF7F /*CTMU not connected to AN7*/
#define ADC_CTMU_AN8     			0xFFFF /*CTMU enabled and connected to AN8 */
#define ADC_SKIP_CTMU_AN8    		0xFEFF /*CTMU not connected to AN8*/
#define ADC_CTMU_AN9     			0xFFFF /*CTMU enabled and connected to AN9*/
#define ADC_SKIP_CTMU_AN9    		0xFDFF /*CTMU not connected to AN9*/
#define ADC_CTMU_AN10     			0xFFFF /*CTMU enabled and connected to AN10*/
#define ADC_SKIP_CTMU_AN10    		0xFBFF /*CTMU not connected to AN10*/
#define ADC_CTMU_AN11     			0xFFFF /*CTMU enabled and connected to AN11*/
#define ADC_SKIP_CTMU_AN11    		0xF7FF /*CTMU not connected to AN11*/
#define ADC_CTMU_AN12     			0xFFFF /*CTMU enabled and connected to AN12*/
#define ADC_SKIP_CTMU_AN12    		0xEFFF /*CTMU not connected to AN12*/
#define ADC_CTMU_AN13     			0xFFFF /*CTMU enabled and connected to AN13*/
#define ADC_SKIP_CTMU_AN13    		0xDFFF /*CTMU not connected to AN13*/
#define ADC_CTMU_AN14     			0xFFFF /*CTMU enabled and connected to AN14*/
#define ADC_SKIP_CTMU_AN14    		0xBFFF /*CTMU not connected to AN14*/
#define ADC_CTMU_AN15     			0xFFFF /*CTMU enabled and connected to AN15*/
#define ADC_SKIP_CTMU_AN15    		0x7FFF /*CTMU not connected to AN15*/

/*****AD1CTMUENH/AD1CTMENH register definition***********/
#define ADC_CTMU_AN16     			0xFFFF /*CTMU enabled and connected to AN16 */
#define ADC_SKIP_CTMU_AN16    		0xFFFE /*CTMU not connected to AN16*/
#define ADC_CTMU_AN17     			0xFFFF /*CTMU enabled and connected to AN17 */
#define ADC_SKIP_CTMU_AN17    		0xFFFD /*CTMU not connected to AN17*/
#if defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CTMU_AN18     			0xFFFF /*CTMU enabled and connected to AN18 */
#define ADC_SKIP_CTMU_AN18    		0xFFFB /*CTMU not connected to AN18 */
#define ADC_CTMU_AN19     			0xFFFF /*CTMU enabled and connected to AN19 */
#define ADC_SKIP_CTMU_AN19    		0xFFF7 /*CTMU not connected to AN19 */
#define ADC_CTMU_AN20     			0xFFFF /*CTMU enabled and connected to AN20 */
#define ADC_SKIP_CTMU_AN20   		0xFFEF /*CTMU not connected to AN20 */
#define ADC_CTMU_AN21     			0xFFFF /*CTMU enabled and connected to AN21 */
#define ADC_SKIP_CTMU_AN21    		0xFFDF /*CTMU not connected to AN21 */
#define ADC_CTMU_AN22     			0xFFFF /*CTMU enabled and connected to AN22 */
#define ADC_SKIP_CTMU_AN22    		0xFFBF /*CTMU not connected to AN22 */
#define ADC_CTMU_AN23     			0xFFFF /*CTMU enabled and connected to AN23 */
#define ADC_SKIP_CTMU_AN23    		0xFF7F /*CTMU not connected to AN23 */
#endif
#endif

/**** Setting the priority of adc interrupt ****/
#define ADC_INT_PRI_0               0xFFF8
#define ADC_INT_PRI_1               0xFFF9
#define ADC_INT_PRI_2               0xFFFA
#define ADC_INT_PRI_3               0xFFFB
#define ADC_INT_PRI_4               0xFFFC
#define ADC_INT_PRI_5               0xFFFD
#define ADC_INT_PRI_6               0xFFFE
#define ADC_INT_PRI_7               0xFFFF

#define ADC_INT_ENABLE              0xFFFF
#define ADC_INT_DISABLE             0xFFF7

#else

/**** AD1CON1 register definition ****/
#define ADC_MODULE_ON               0x8000 /* A/D Converter on */
#define ADC_MODULE_OFF              0x0000 /* A/D Converter off */
#define ADC_MODULE_MASK             (~ADC_MODULE_ON)  /* A/D Converter mask*/

#define ADC_IDLE_CONTINUE           0x2000 /* A/D Operate in Idle mode */
#define ADC_IDLE_STOP               0x0000 /* A/D Stop in Idle mode */
#define ADC_IDLE_MASK               (~ADC_IDLE_CONTINUE) /* A/D Idle mode mask */

#if defined (adc_v5_1)|| defined (adc_v5_2)  
#define ADC_DMA_EXT_BUF_MODE      	 0x1000/*A/D  Extended DMA buffer mode is enabled*/
#define ADC_DMA_PIA_MODE          	 0x0000 /*A/D Peripheral Indirect Addressing mode is disabled*/
#define ADC_DMA_MODE_MASK            (~ADC_DMA_MODE_ENABLE) /*A/D DMA MODES mask*/

#define ADC_DMA_ENABLE              0x0800 /*DMA operation of A/D is enabled*/
#define ADC_DMA_DISABLE             0x0000 /*DMA operation of A/D is disabled*/
#define ADC_DMA_MASK            	(~ADC_DMA_ENABLE) /*A/D DMA mask*/
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_12BIT_MODE              0x0400 /*12-bit A/D operation*/
#define ADC_10BIT_MODE              0x0000 /*10-bit A/D operation*/ 
#define ADC_12BIT_MASK              (~0x0400)
#endif

#define ADC_FORMAT_SIGN_FRACT       0x0300 /* A/D data format signed fractional */
#define ADC_FORMAT_FRACT            0x0200 /* A/D data format fractional */
#define ADC_FORMAT_SIGN_INT         0x0100 /* A/D data format signed integer */
#define ADC_FORMAT_INTG             0x0000 /* A/D data format integer */
#define ADC_FORMAT_MASK             (~ADC_FORMAT_SIGN_FRACT)/* A/D format mask */

#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v6_1) || \
	defined (adc_v6_2) || defined (adc_v7_1)||defined (adc_v7_2) 
#define ADC_CLK_AUTO                0x00E0 /* Internal counter ends sampling and starts conversion (Auto convert) */
#elif defined (adc_v5_1)||defined (adc_v5_2)
#define ADC_CLK_AUTO              	0x0070 /*The SAMP bit is cleared after SAMC<4:0> number of TAD clocks following 
                                           the SAMP bit being set.No Extended Sample Time is present.*/										   
#endif										   
#if defined (adc_v2_1)
#define ADC_CLK_CTMU                0x0080 /* CTMU event ends sampling and starts conversion */
#elif defined (adc_v1_4) || defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7) || defined (adc_v1_8)||\
      defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CLK_CTMU                0x00C0 /* CTMU event ends sampling and starts conversion */
#elif defined (adc_v5_1)||defined (adc_v5_2)
#define ADC_CLK_CTMU                0x0040 /* CTMU event ends sampling and starts conversion */
#endif
#if defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7) || defined (adc_v1_8)||\
    defined (adc_v3_1) ||defined (adc_v3_2)
#define ADC_CLK_TMR5                0x0080 /* Timer5 compare ends sampling and starts conversion */
#elif defined (adc_v2_1) 
#define ADC_CLK_TMR5                0x0060 /* Timer5 compare ends sampling and starts conversion */
#elif defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CLK_MPWM                0x0060 /* MPWM interval ends sampling and starts conversion */
#elif defined (adc_v5_1)||defined (adc_v5_2)
#define ADC_CLK_TMR5                0x0030 /* Timer5 compare ends sampling and starts conversion */
#endif
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CLK_TMR3                0x0040 /* Timer3 compare ends sampling and starts conversion */
#define ADC_CLK_INT0                0x0020 /* Active transition on INT0 ends sampling and starts conversion */
#define ADC_CLK_MANUAL              0x0000 /* Clearing sample (SAMP) bit ends sampling and starts conversion */
#elif defined (adc_v5_1)||defined (adc_v5_2)
#define ADC_CLK_TMR3                0x0020 /* Timer3 compare ends sampling and starts conversion */
#define ADC_CLK_INT0                0x0010 /* Active transition on INT0 ends sampling and starts conversion */
#elif defined (adc_v7_1)||defined (adc_v7_2) 
#define ADC_CLK_TMR1                0x0050 /* Timer1 compare ends sampling and starts conversion */
#define ADC_CLK_INT0                0x0030 /* Active transition on INT0 ends sampling and starts conversion */
#define ADC_CLK_MANUAL              0x0010 /* Clearing sample (SAMP) bit ends sampling and starts conversion */
#endif
#if defined (adc_v5_1)||defined (adc_v5_2)
#define ADC_CLK_TMR1                0x0050 /* Timer1 compare ends sampling and starts conversion */
#define ADC_CLK_CLEAR           	0x0000 /*The SAMP bit must be cleared by software*/
#endif
#define ADC_CLK_MASK                (~ADC_CLK_AUTO) /* A/D clock mask */

#if defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CLK_CLC2                 0xFFCF /* CLC2 event ends sampling and starts conversion */
#define ADC_CLK_SCCP4		0xFFBF /* SCCP4 event ends sampling and starts conversion */
#define ADC_CLK_MCCP3		0xFFAF /* MCCP3 event ends sampling and starts conversion */
#define ADC_CLK_MCCP2		0xFF9F /* MCCP2 event ends sampling and starts conversion */
#define ADC_CLK_CLC1                 0xFF8F /* CLC1 event ends sampling and starts conversion */
#define ADC_CLK_AUTO              	0xFF7F /*The SAMP bit is cleared after SAMC<4:0> number of TAD clocks following 
                                           the SAMP bit being set.No Extended Sample Time is present.*/
#define ADC_CLK_TMR1SLEEP        0xFF6F /* Timer1 Sleep mode trigger ends sampling and starts conversion */
#define ADC_CLK_TMR1                0xFF5F /* Timer1 compare ends sampling and starts conversion */
#define ADC_CLK_CTMU                0xFF4F /* CTMU event ends sampling and starts conversion */
#define ADC_CLK_SCCP5               0xFF3F /* SCCP5 event ends sampling and starts conversion */
#define ADC_CLK_MCCP1		0xFF2F /* MCCP1 event ends sampling and starts conversion */
#define ADC_CLK_INT0                 0xFF1F /* Active transition on INT0 ends sampling and starts conversion */
#define ADC_CLK_MANUAL            0xFF0F /* Clearing sample (SAMP) bit ends sampling and starts conversion */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_TRIG_INPUT15          0x00F0 /*The SAMP bit is cleared by a rising edge of trigger input 15*/ 
#define ADC_TRIG_INPUT14          0x00E0 /*The SAMP bit is cleared by a rising edge of trigger input 14*/ 
#define ADC_TRIG_INPUT13          0x00D0 /*The SAMP bit is cleared by a rising edge of trigger input 13*/ 
#define ADC_TRIG_INPUT12          0x00C0 /*The SAMP bit is cleared by a rising edge of trigger input 12*/ 
#define ADC_TRIG_INPUT11          0x00B0 /*The SAMP bit is cleared by a rising edge of trigger input 11*/ 
#define ADC_TRIG_INPUT10          0x00A0 /*The SAMP bit is cleared by a rising edge of trigger input 10*/ 
#define ADC_TRIG_INPUT9           0x0090 /*The SAMP bit is cleared by a rising edge of trigger input 9*/ 
#define ADC_TRIG_INPUT8           0x0080 /*The SAMP bit is cleared by a rising edge of trigger input 8*/
#define ADC_TRIG_AUTO             0x0070 /*The SAMP bit is cleared after SAMC<4:0> number of TAD clocks following 
                                           the SAMP bit being set (Auto-Convert mode). No Extended Sample Time is present.*/									  
#define ADC_TRIG_INPUT6           0x0060 /*The SAMP bit is cleared by a rising edge of trigger input 6*/
#define ADC_TRIG_INPUT5           0x0050 /*The SAMP bit is cleared by a rising edge of trigger input 5*/ 
#define ADC_TRIG_INPUT4           0x0040 /*The SAMP bit is cleared by a rising edge of trigger input 4*/ 
#define ADC_TRIG_INPUT3           0x0030 /*The SAMP bit is cleared by a rising edge of trigger input 3*/ 
#define ADC_TRIG_INPUT2           0x0020 /*The SAMP bit is cleared by a rising edge of trigger input 2*/ 
#define ADC_TRIG_INPUT1           0x0010 /*The SAMP bit is cleared by a rising edge of trigger input 1*/ 
#define ADC_TRIG_MANUAL           0x0000 /*The SAMP bit must be cleared by software*/
#define ADC_TRIG_MASK             (~0x00F0)
#endif 

#if defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_SAMPLE_SIMULTANEOUS     0x0008 /* Samples CH0,CH1 simultaneously or CH0, CH1,CH2,CH3 simultaneously*/
#define ADC_SAMPLE_INDIVIDUAL       0x0000 /* Samples multiple channels individually in sequence*/
#define ADC_SAMPLE_MASK				(~ADC_SAMPLE_SIMULTANEOUS) /* A/D simultaneous sample mask*/
#endif 

#define ADC_AUTO_SAMPLING_ON        0x0004 /* Sampling begins immediately after last conversion */
#define ADC_AUTO_SAMPLING_OFF       0x0000 /* Sampling begins when SAMP bit is set */
#define ADC_AUTO_SAMPLING_MASK      (~ADC_AUTO_SAMPLING_ON) /* A/D auto sampling mask */

#define ADC_SAMP_ON                 0x0002 /* sample / hold amplifiers are sampling */
#define ADC_SAMP_OFF                0x0000 /* sample / hold amplifiers are holding */
#define ADC_SAMP_MASK               (~ADC_SAMP_ON) /* A/D sampling mask */

/**** AD1CON2 control register definition ****/
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v6_1) || \
	defined (adc_v6_2) || defined (adc_v7_1)||defined (adc_v7_2)
#define ADC_VREF_EXT_AVSS           0x2000 /* A/D Voltage reference configuration Vref+ external and Vref- is AVss */
#define ADC_VREF_AVDD_EXT           0x4000 /* A/D Voltage reference configuration Vref+ AVdd and Vref- external */
#define ADC_VREF_EXT_EXT            0x6000 /* A/D Voltage reference configuration both Vref+ and Vref- are external */
#define ADC_VREF_AVDD_AVSS          0x8000 /* A/D Voltage reference configuration Vref+ is AVdd and Vref- is AVss */
#define ADC_VREF_MASK               (~(ADC_VREF_AVDD_AVSS | ADC_VREF_EXT_EXT)) /* A/D Vref  mask */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_POS_VREF_INT_VRH2      0xC000 /*Converter Positive Voltage Reference - Internal VRH2 */
#define ADC_POS_VREF_INT_VRH1      0xB000 /*Converter Positive Voltage Reference - Internal VRH1 */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_POS_VREF_EXT           0x4000 /*Converter Positive Voltage Reference - External VREF+*/ 
#define ADC_POS_VREF_AVDD          0x0000 /*Converter Positive Voltage Reference - AVDD*/
#define ADC_POS_VREF_MASK          (~0x4000)

#define ADC_NEG_VREF_EXT           0xD000 /*Converter Negative Voltage Reference - External VREF- */
#define ADC_NEG_VREF_AVSS          0x0000 /*Converter Negative Voltage Reference - AVSS */
#define ADC_NEG_VREF_MASK          (~0xD000)

#define ADC_BUF_REG_ENABLE          0x0800 /* Conversion result is loaded into buffer location determined by the converted channel*/
#define ADC_BUF_REG_DISABLE         0x0000 /* A/D result buffer is treated as a FIFO */
#define ADC_BUF_REG_MASK            (~0x0800)
#endif 

#if defined (adc_v1_4)|| defined (adc_v4_1)||defined (adc_v4_2) || defined (adc_v4_3)|| defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1)||defined (adc_v7_2)
#define ADC_OFFSET_CAL_ON           0x1000 /* Converts to get the Offset calibration value */
#define ADC_OFFSET_CAL_OFF          0x0000 /* Coverts to get the actual input value */
#define ADC_OFFSET_CAL_MASK         (~0x1000)
#endif

#define ADC_SCAN_ON                 0x0400 /* A/D Scan Input Selections for CH0 during SAMPLE A */
#define ADC_SCAN_OFF                0x0000 /* A/D Do notScan Input Selections for CH0+ during SAMPLE A */
#define ADC_SCAN_ON_OFF_MASK        (~ADC_SCAN_ON) /* A/D scan input mask */

#if defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CONVERT_CH_0123         0x0300 /*Converts CH0,CH1,CH2 and CH3*/
#define ADC_CONVERT_CH_01           0x0100 /*Converts CH0 and CH1*/
#define ADC_CONVERT_CH0             0x0000 /*Converts CH0 */
#define ADC_CONVERT_MASK			(~0x0300) 
#endif

#define ADC_INTR_EACH_CONV          0x0000 /* Interrupts at the completion of conversion of each sample */
#define ADC_INTR_2_CONV             0x0004 /* Interrupts at the completion of conversion of 2 samples */
#define ADC_INTR_3_CONV             0x0008 /* Interrupts at the completion of conversion of 3 samples */
#define ADC_INTR_4_CONV             0x000C /* Interrupts at the completion of conversion of 4 samples */
#define ADC_INTR_5_CONV             0x0010 /* Interrupts at the completion of conversion of 5 samples */
#define ADC_INTR_6_CONV             0x0014 /* Interrupts at the completion of conversion of 6 samples */
#define ADC_INTR_7_CONV             0x0018 /* Interrupts at the completion of conversion of 7 samples */
#define ADC_INTR_8_CONV             0x001C /* Interrupts at the completion of conversion of 8 samples */
#define ADC_INTR_9_CONV             0x0020 /* Interrupts at the completion of conversion of 9 samples */
#define ADC_INTR_10_CONV            0x0024 /* Interrupts at the completion of conversion of 10 samples */
#define ADC_INTR_11_CONV            0x0028 /* Interrupts at the completion of conversion of 11 samples */
#define ADC_INTR_12_CONV            0x002C /* Interrupts at the completion of conversion of 12 samples */
#define ADC_INTR_13_CONV            0x0030 /* Interrupts at the completion of conversion of 13 samples */
#define ADC_INTR_14_CONV            0x0034 /* Interrupts at the completion of conversion of 14 samples */
#define ADC_INTR_15_CONV            0x0038 /* Interrupts at the completion of conversion of 15 samples */
#define ADC_INTR_16_CONV            0x003C /* Interrupts at the completion of conversion of 16 samples */

#if defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) ||\
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_INTR_17_CONV            0x0040 /* Interrupts at the completion of conversion of 17 samples */
#define ADC_INTR_18_CONV            0x0044 /* Interrupts at the completion of conversion of 18 samples */
#define ADC_INTR_19_CONV            0x0048 /* Interrupts at the completion of conversion of 19 samples */
#define ADC_INTR_20_CONV            0x004C /* Interrupts at the completion of conversion of 20 samples */
#define ADC_INTR_21_CONV            0x0050 /* Interrupts at the completion of conversion of 21 samples */
#define ADC_INTR_22_CONV            0x0054 /* Interrupts at the completion of conversion of 22 samples */
#define ADC_INTR_23_CONV            0x0058 /* Interrupts at the completion of conversion of 23 samples */
#define ADC_INTR_24_CONV            0x005C /* Interrupts at the completion of conversion of 24 samples */
#define ADC_INTR_25_CONV            0x0060 /* Interrupts at the completion of conversion of 25 samples */
#define ADC_INTR_26_CONV            0x0064 /* Interrupts at the completion of conversion of 26 samples */
#define ADC_INTR_27_CONV            0x0068 /* Interrupts at the completion of conversion of 27 samples */
#define ADC_INTR_28_CONV            0x006C /* Interrupts at the completion of conversion of 28 samples */
#define ADC_INTR_29_CONV            0x0070 /* Interrupts at the completion of conversion of 29 samples */
#define ADC_INTR_30_CONV            0x0074 /* Interrupts at the completion of conversion of 30 samples */
#define ADC_INTR_31_CONV            0x0078 /* Interrupts at the completion of conversion of 31 samples */
#define ADC_INTR_32_CONV            0x007C /* Interrupts at the completion of conversion of 32 samples */
#endif
#define ADC_INTR_MASK               (~0x007C)

#define ADC_ALT_BUF_ON              0x0002 /* Buffer configured as 2 8-word buffers */
#define ADC_ALT_BUF_OFF             0x0000 /* Buffer configured as 1 16-word buffer */
#define ADC_ALT_BUF_MASK            (~ADC_ALT_BUF_ON) /* A/D alternate buffer mask */

#define ADC_ALT_INPUT_ON            0x0001 /* alternate between MUXA and MUXB */
#define ADC_ALT_INPUT_OFF           0x0000 /* use MUXA only */
#define ADC_ALT_MASK                (~ADC_ALT_INPUT_ON) /* A/D alternate input mask */

/**** AD1CON3 register definition ****/
#define ADC_CONV_CLK_INTERNAL_RC    0x8000 /* A/D internal RC clock */
#define ADC_CONV_CLK_SYSTEM         0x0000 /* Clock derived from system clock */
#define ADC_CONV_CLK_SOURCE_MASK    (~ADC_CONV_CLK_INTERNAL_RC) /* A/D conversion clock mask */

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || \
	defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_EXT_SAMP_ON             0x4000 /*A/D is still sampling after SAMP = 0*/
#define ADC_EXT_SAMP_OFF            0x0000 /*A/D is finished sampling*/
#define ADC_EXT_SAMP_MASK           (~0x4000)

#define ADC_CHARGE_PUMP_ENABLE      0x2000 /*Charge pump for switches is enabled*/
#define ADC_CHARGE_PUMP_DISABLE     0x0000 /*Charge pump for switches is enabled*/
#define ADC_CHARGE_PUMP_MASK        (~0x2000)
#endif 

#define ADC_SAMPLE_TIME_0           0x0000 /* A/D Auto Sample Time 0 Tad */
#define ADC_SAMPLE_TIME_1           0x0100 /* A/D Auto Sample Time 1 Tad */
#define ADC_SAMPLE_TIME_2           0x0200 /* A/D Auto Sample Time 2 Tad */
#define ADC_SAMPLE_TIME_3           0x0300 /* A/D Auto Sample Time 3 Tad */
#define ADC_SAMPLE_TIME_4           0x0400 /* A/D Auto Sample Time 4 Tad */
#define ADC_SAMPLE_TIME_5           0x0500 /* A/D Auto Sample Time 5 Tad */
#define ADC_SAMPLE_TIME_6           0x0600 /* A/D Auto Sample Time 6 Tad */
#define ADC_SAMPLE_TIME_7           0x0700 /* A/D Auto Sample Time 7 Tad */
#define ADC_SAMPLE_TIME_8           0x0800 /* A/D Auto Sample Time 8 Tad */
#define ADC_SAMPLE_TIME_9           0x0900 /* A/D Auto Sample Time 9 Tad */
#define ADC_SAMPLE_TIME_10          0x0A00 /* A/D Auto Sample Time 10 Tad */
#define ADC_SAMPLE_TIME_11          0x0B00 /* A/D Auto Sample Time 11 Tad */
#define ADC_SAMPLE_TIME_12          0x0C00 /* A/D Auto Sample Time 12 Tad */
#define ADC_SAMPLE_TIME_13          0x0D00 /* A/D Auto Sample Time 13 Tad */
#define ADC_SAMPLE_TIME_14          0x0E00 /* A/D Auto Sample Time 14 Tad */
#define ADC_SAMPLE_TIME_15          0x0F00 /* A/D Auto Sample Time 15 Tad */
#define ADC_SAMPLE_TIME_16          0x1000 /* A/D Auto Sample Time 16 Tad */
#define ADC_SAMPLE_TIME_17          0x1100 /* A/D Auto Sample Time 17 Tad */
#define ADC_SAMPLE_TIME_18          0x1200 /* A/D Auto Sample Time 18 Tad */
#define ADC_SAMPLE_TIME_19          0x1300 /* A/D Auto Sample Time 19 Tad */
#define ADC_SAMPLE_TIME_20          0x1400 /* A/D Auto Sample Time 20 Tad */
#define ADC_SAMPLE_TIME_21          0x1500 /* A/D Auto Sample Time 21 Tad */
#define ADC_SAMPLE_TIME_22          0x1600 /* A/D Auto Sample Time 22 Tad */
#define ADC_SAMPLE_TIME_23          0x1700 /* A/D Auto Sample Time 23 Tad */
#define ADC_SAMPLE_TIME_24          0x1800 /* A/D Auto Sample Time 24 Tad */
#define ADC_SAMPLE_TIME_25          0x1900 /* A/D Auto Sample Time 25 Tad */
#define ADC_SAMPLE_TIME_26          0x1A00 /* A/D Auto Sample Time 26 Tad */
#define ADC_SAMPLE_TIME_27          0x1B00 /* A/D Auto Sample Time 27 Tad */
#define ADC_SAMPLE_TIME_28          0x1C00 /* A/D Auto Sample Time 28 Tad */
#define ADC_SAMPLE_TIME_29          0x1D00 /* A/D Auto Sample Time 29 Tad */
#define ADC_SAMPLE_TIME_30          0x1E00 /* A/D Auto Sample Time 30 Tad */
#define ADC_SAMPLE_TIME_31          0x1F00 /* A/D Auto Sample Time 31 Tad */
#define ADC_SAMPLE_TIME_MASK        (~ADC_SAMPLE_TIME_31) /* A/D sample mask */

#define ADC_CONV_CLK_1Tcy          0x0000 /* A/D Conversion Clock is 1*Tcy */
#define ADC_CONV_CLK_2Tcy          0x0001 /* A/D Conversion Clock is 2*Tcy */
#define ADC_CONV_CLK_3Tcy          0x0002 /* A/D Conversion Clock is 3*Tcy */
#define ADC_CONV_CLK_4Tcy          0x0003 /* A/D Conversion Clock is 4*Tcy */
#define ADC_CONV_CLK_5Tcy          0x0004 /* A/D Conversion Clock is 5*Tcy */
#define ADC_CONV_CLK_6Tcy          0x0005 /* A/D Conversion Clock is 6*Tcy */
#define ADC_CONV_CLK_7Tcy          0x0006 /* A/D Conversion Clock is 7*Tcy */
#define ADC_CONV_CLK_8Tcy          0x0007 /* A/D Conversion Clock is 8*Tcy */
#define ADC_CONV_CLK_9Tcy          0x0008 /* A/D Conversion Clock is 9*Tcy */
#define ADC_CONV_CLK_10Tcy         0x0009 /* A/D Conversion Clock is 10*Tcy */
#define ADC_CONV_CLK_11Tcy         0x000A/* A/D Conversion Clock is 11*Tcy */
#define ADC_CONV_CLK_12Tcy         0x000B/* A/D Conversion Clock is 12*Tcy */
#define ADC_CONV_CLK_13Tcy         0x000C/* A/D Conversion Clock is 13*Tcy */
#define ADC_CONV_CLK_14Tcy         0x000D/* A/D Conversion Clock is 14*Tcy */
#define ADC_CONV_CLK_15Tcy         0x000E/* A/D Conversion Clock is 15*Tcy */
#define ADC_CONV_CLK_16Tcy         0x000F/* A/D Conversion Clock is 16*Tcy */
#define ADC_CONV_CLK_17Tcy         0x0010/* A/D Conversion Clock is 17*Tcy */
#define ADC_CONV_CLK_18Tcy         0x0011/* A/D Conversion Clock is 18*Tcy */
#define ADC_CONV_CLK_19Tcy         0x0012/* A/D Conversion Clock is 19*Tcy */
#define ADC_CONV_CLK_20Tcy         0x0013/* A/D Conversion Clock is 20*Tcy */
#define ADC_CONV_CLK_21Tcy         0x0014/* A/D Conversion Clock is 21*Tcy */
#define ADC_CONV_CLK_22Tcy         0x0015/* A/D Conversion Clock is 22*Tcy */
#define ADC_CONV_CLK_23Tcy         0x0016/* A/D Conversion Clock is 23*Tcy */
#define ADC_CONV_CLK_24Tcy         0x0017/* A/D Conversion Clock is 24*Tcy */
#define ADC_CONV_CLK_25Tcy         0x0018/* A/D Conversion Clock is 25*Tcy */
#define ADC_CONV_CLK_26Tcy         0x0019/* A/D Conversion Clock is 26*Tcy */
#define ADC_CONV_CLK_27Tcy         0x001A/* A/D Conversion Clock is 27*Tcy */
#define ADC_CONV_CLK_28Tcy         0x001B/* A/D Conversion Clock is 28*Tcy */
#define ADC_CONV_CLK_29Tcy         0x001C/* A/D Conversion Clock is 29*Tcy */
#define ADC_CONV_CLK_30Tcy         0x001D/* A/D Conversion Clock is 30*Tcy */
#define ADC_CONV_CLK_31Tcy         0x001E/* A/D Conversion Clock is 31*Tcy */
#define ADC_CONV_CLK_32Tcy         0x001F/* A/D Conversion Clock is 32*Tcy */
#define ADC_CONV_CLK_33Tcy         0x0020/* A/D Conversion Clock is 33*Tcy */
#define ADC_CONV_CLK_34Tcy         0x0021/* A/D Conversion Clock is 34*Tcy */
#define ADC_CONV_CLK_35Tcy         0x0022/* A/D Conversion Clock is 35*Tcy */
#define ADC_CONV_CLK_36Tcy         0x0023/* A/D Conversion Clock is 36*Tcy */
#define ADC_CONV_CLK_37Tcy         0x0024/* A/D Conversion Clock is 37*Tcy */
#define ADC_CONV_CLK_38Tcy         0x0025/* A/D Conversion Clock is 38*Tcy */
#define ADC_CONV_CLK_39Tcy         0x0026/* A/D Conversion Clock is 39*Tcy */
#define ADC_CONV_CLK_40Tcy         0x0027/* A/D Conversion Clock is 40*Tcy */
#define ADC_CONV_CLK_41Tcy         0x0028/* A/D Conversion Clock is 41*Tcy */
#define ADC_CONV_CLK_42Tcy         0x0029/* A/D Conversion Clock is 42*Tcy */
#define ADC_CONV_CLK_43Tcy         0x002A/* A/D Conversion Clock is 43*Tcy */
#define ADC_CONV_CLK_44Tcy         0x002B/* A/D Conversion Clock is 44*Tcy */
#define ADC_CONV_CLK_45Tcy         0x002C/* A/D Conversion Clock is 45*Tcy */
#define ADC_CONV_CLK_46Tcy         0x002D/* A/D Conversion Clock is 46*Tcy */
#define ADC_CONV_CLK_47Tcy         0x002E/* A/D Conversion Clock is 47*Tcy */
#define ADC_CONV_CLK_48Tcy         0x002F/* A/D Conversion Clock is 48*Tcy */
#define ADC_CONV_CLK_49Tcy         0x0030/* A/D Conversion Clock is 49*Tcy */
#define ADC_CONV_CLK_50Tcy         0x0031/* A/D Conversion Clock is 50*Tcy */
#define ADC_CONV_CLK_51Tcy         0x0032/* A/D Conversion Clock is 51*Tcy */
#define ADC_CONV_CLK_52Tcy         0x0033/* A/D Conversion Clock is 52*Tcy */
#define ADC_CONV_CLK_53Tcy         0x0034/* A/D Conversion Clock is 53*Tcy */
#define ADC_CONV_CLK_54Tcy         0x0035/* A/D Conversion Clock is 54*Tcy */
#define ADC_CONV_CLK_55Tcy         0x0036/* A/D Conversion Clock is 55*Tcy */
#define ADC_CONV_CLK_56Tcy         0x0037/* A/D Conversion Clock is 56*Tcy */
#define ADC_CONV_CLK_57Tcy         0x0038/* A/D Conversion Clock is 57*Tcy */
#define ADC_CONV_CLK_58Tcy         0x0039/* A/D Conversion Clock is 58*Tcy */
#define ADC_CONV_CLK_59Tcy         0x003A/* A/D Conversion Clock is 59*Tcy */
#define ADC_CONV_CLK_60Tcy         0x003B/* A/D Conversion Clock is 60*Tcy */
#define ADC_CONV_CLK_61Tcy         0x003C/* A/D Conversion Clock is 61*Tcy */
#define ADC_CONV_CLK_62Tcy         0x003D/* A/D Conversion Clock is 62*Tcy */
#define ADC_CONV_CLK_63Tcy         0x003E/* A/D Conversion Clock is 63*Tcy */
#define ADC_CONV_CLK_64Tcy         0x003F/* A/D Conversion Clock is 64*Tcy */

/*On selecting the macros from 65*Tcy to 256*Tcy will be set to 64*Tcy value*/
#define ADC_CONV_CLK_65Tcy         0x0040/* A/D Conversion Clock is 65*Tcy */
#define ADC_CONV_CLK_66Tcy         0x0041/* A/D Conversion Clock is 66*Tcy */
#define ADC_CONV_CLK_67Tcy         0x0042/* A/D Conversion Clock is 67*Tcy */
#define ADC_CONV_CLK_68Tcy         0x0043/* A/D Conversion Clock is 68*Tcy */
#define ADC_CONV_CLK_69Tcy         0x0044/* A/D Conversion Clock is 69*Tcy */
#define ADC_CONV_CLK_70Tcy         0x0045/* A/D Conversion Clock is 70*Tcy */
#define ADC_CONV_CLK_71Tcy         0x0046/* A/D Conversion Clock is 71*Tcy */
#define ADC_CONV_CLK_72Tcy         0x0047/* A/D Conversion Clock is 72*Tcy */
#define ADC_CONV_CLK_73Tcy         0x0048/* A/D Conversion Clock is 73*Tcy */
#define ADC_CONV_CLK_74Tcy         0x0049/* A/D Conversion Clock is 74*Tcy */
#define ADC_CONV_CLK_75Tcy         0x004A/* A/D Conversion Clock is 75*Tcy */
#define ADC_CONV_CLK_76Tcy         0x004B/* A/D Conversion Clock is 76*Tcy */
#define ADC_CONV_CLK_77Tcy         0x004C/* A/D Conversion Clock is 77*Tcy */
#define ADC_CONV_CLK_78Tcy         0x004D/* A/D Conversion Clock is 78*Tcy */
#define ADC_CONV_CLK_79Tcy         0x004E/* A/D Conversion Clock is 79*Tcy */
#define ADC_CONV_CLK_80Tcy         0x004F/* A/D Conversion Clock is 80*Tcy */
#define ADC_CONV_CLK_81Tcy         0x0050/* A/D Conversion Clock is 81*Tcy */
#define ADC_CONV_CLK_82Tcy         0x0051/* A/D Conversion Clock is 82*Tcy */
#define ADC_CONV_CLK_83Tcy         0x0052/* A/D Conversion Clock is 83*Tcy */
#define ADC_CONV_CLK_84Tcy         0x0053/* A/D Conversion Clock is 84*Tcy */
#define ADC_CONV_CLK_85Tcy         0x0054/* A/D Conversion Clock is 85*Tcy */
#define ADC_CONV_CLK_86Tcy         0x0055/* A/D Conversion Clock is 86*Tcy */
#define ADC_CONV_CLK_87Tcy         0x0056/* A/D Conversion Clock is 87*Tcy */
#define ADC_CONV_CLK_88Tcy         0x0057/* A/D Conversion Clock is 88*Tcy */
#define ADC_CONV_CLK_89Tcy         0x0058/* A/D Conversion Clock is 89*Tcy */
#define ADC_CONV_CLK_90Tcy         0x0059/* A/D Conversion Clock is 90*Tcy */
#define ADC_CONV_CLK_91Tcy         0x005A/* A/D Conversion Clock is 91*Tcy */
#define ADC_CONV_CLK_92Tcy         0x005B/* A/D Conversion Clock is 92*Tcy */
#define ADC_CONV_CLK_93Tcy         0x005C/* A/D Conversion Clock is 93*Tcy */
#define ADC_CONV_CLK_94Tcy         0x005D/* A/D Conversion Clock is 94*Tcy */
#define ADC_CONV_CLK_95Tcy         0x005E/* A/D Conversion Clock is 95*Tcy */
#define ADC_CONV_CLK_96Tcy         0x005F/* A/D Conversion Clock is 96*Tcy */
#define ADC_CONV_CLK_97Tcy         0x0060/* A/D Conversion Clock is 97*Tcy */
#define ADC_CONV_CLK_98Tcy         0x0061/* A/D Conversion Clock is 98*Tcy */
#define ADC_CONV_CLK_99Tcy         0x0062/* A/D Conversion Clock is 99*Tcy */
#define ADC_CONV_CLK_100Tcy        0x0063/* A/D Conversion Clock is 100*Tcy */
#define ADC_CONV_CLK_101Tcy        0x0064/* A/D Conversion Clock is 101*Tcy */
#define ADC_CONV_CLK_102Tcy        0x0065/* A/D Conversion Clock is 102*Tcy */
#define ADC_CONV_CLK_103Tcy        0x0066/* A/D Conversion Clock is 103*Tcy */
#define ADC_CONV_CLK_104Tcy        0x0067/* A/D Conversion Clock is 104*Tcy */
#define ADC_CONV_CLK_105Tcy        0x0068/* A/D Conversion Clock is 105*Tcy */
#define ADC_CONV_CLK_106Tcy        0x0069/* A/D Conversion Clock is 106*Tcy */
#define ADC_CONV_CLK_107Tcy        0x006A/* A/D Conversion Clock is 107*Tcy */
#define ADC_CONV_CLK_108Tcy        0x006B/* A/D Conversion Clock is 108*Tcy */
#define ADC_CONV_CLK_109Tcy        0x006C/* A/D Conversion Clock is 109*Tcy */
#define ADC_CONV_CLK_110Tcy        0x006D/* A/D Conversion Clock is 110*Tcy */
#define ADC_CONV_CLK_111Tcy        0x006E/* A/D Conversion Clock is 111*Tcy */
#define ADC_CONV_CLK_112Tcy        0x006F/* A/D Conversion Clock is 112*Tcy */
#define ADC_CONV_CLK_113Tcy        0x0070/* A/D Conversion Clock is 113*Tcy */
#define ADC_CONV_CLK_114Tcy        0x0071/* A/D Conversion Clock is 114*Tcy */
#define ADC_CONV_CLK_115Tcy        0x0072/* A/D Conversion Clock is 115*Tcy */
#define ADC_CONV_CLK_116Tcy        0x0073/* A/D Conversion Clock is 116*Tcy */
#define ADC_CONV_CLK_117Tcy        0x0074/* A/D Conversion Clock is 117*Tcy */
#define ADC_CONV_CLK_118Tcy        0x0075/* A/D Conversion Clock is 118*Tcy */
#define ADC_CONV_CLK_119Tcy        0x0076/* A/D Conversion Clock is 119*Tcy */
#define ADC_CONV_CLK_120Tcy        0x0077/* A/D Conversion Clock is 120*Tcy */
#define ADC_CONV_CLK_121Tcy        0x0078/* A/D Conversion Clock is 121*Tcy */
#define ADC_CONV_CLK_122Tcy        0x0079/* A/D Conversion Clock is 122*Tcy */
#define ADC_CONV_CLK_123Tcy        0x007A/* A/D Conversion Clock is 123*Tcy */
#define ADC_CONV_CLK_124Tcy        0x007B/* A/D Conversion Clock is 124*Tcy */
#define ADC_CONV_CLK_125Tcy        0x007C/* A/D Conversion Clock is 125*Tcy */
#define ADC_CONV_CLK_126Tcy        0x007D/* A/D Conversion Clock is 126*Tcy */
#define ADC_CONV_CLK_127Tcy        0x007E/* A/D Conversion Clock is 127*Tcy */
#define ADC_CONV_CLK_128Tcy        0x007F/* A/D Conversion Clock is 128*Tcy */
#define ADC_CONV_CLK_129Tcy        0x0080/* A/D Conversion Clock is 129*Tcy */
#define ADC_CONV_CLK_130Tcy        0x0081/* A/D Conversion Clock is 130*Tcy */
#define ADC_CONV_CLK_131Tcy        0x0082/* A/D Conversion Clock is 131*Tcy */
#define ADC_CONV_CLK_132Tcy        0x0083/* A/D Conversion Clock is 132*Tcy */
#define ADC_CONV_CLK_133Tcy        0x0084/* A/D Conversion Clock is 133*Tcy */
#define ADC_CONV_CLK_134Tcy        0x0085/* A/D Conversion Clock is 134*Tcy */
#define ADC_CONV_CLK_135Tcy        0x0086/* A/D Conversion Clock is 135*Tcy */
#define ADC_CONV_CLK_136Tcy        0x0087/* A/D Conversion Clock is 136*Tcy */
#define ADC_CONV_CLK_137Tcy        0x0088/* A/D Conversion Clock is 137*Tcy */
#define ADC_CONV_CLK_138Tcy        0x0089/* A/D Conversion Clock is 138*Tcy */
#define ADC_CONV_CLK_139Tcy        0x008A/* A/D Conversion Clock is 139*Tcy */
#define ADC_CONV_CLK_140Tcy        0x008B/* A/D Conversion Clock is 140*Tcy */
#define ADC_CONV_CLK_141Tcy        0x008C/* A/D Conversion Clock is 141*Tcy */
#define ADC_CONV_CLK_142Tcy        0x008D/* A/D Conversion Clock is 142*Tcy */
#define ADC_CONV_CLK_143Tcy        0x008E/* A/D Conversion Clock is 143*Tcy */
#define ADC_CONV_CLK_144Tcy        0x008F/* A/D Conversion Clock is 144*Tcy */
#define ADC_CONV_CLK_145Tcy        0x0090/* A/D Conversion Clock is 145*Tcy */
#define ADC_CONV_CLK_146Tcy        0x0091/* A/D Conversion Clock is 146*Tcy */
#define ADC_CONV_CLK_147Tcy        0x0092/* A/D Conversion Clock is 147*Tcy */
#define ADC_CONV_CLK_148Tcy        0x0093/* A/D Conversion Clock is 148*Tcy */
#define ADC_CONV_CLK_149Tcy        0x0094/* A/D Conversion Clock is 149*Tcy */
#define ADC_CONV_CLK_150Tcy        0x0095/* A/D Conversion Clock is 150*Tcy */
#define ADC_CONV_CLK_151Tcy        0x0096/* A/D Conversion Clock is 151*Tcy */
#define ADC_CONV_CLK_152Tcy        0x0097/* A/D Conversion Clock is 152*Tcy */
#define ADC_CONV_CLK_153Tcy        0x0098/* A/D Conversion Clock is 153*Tcy */
#define ADC_CONV_CLK_154Tcy        0x0099/* A/D Conversion Clock is 154*Tcy */
#define ADC_CONV_CLK_155Tcy        0x009A/* A/D Conversion Clock is 155*Tcy */
#define ADC_CONV_CLK_156Tcy        0x009B/* A/D Conversion Clock is 156*Tcy */
#define ADC_CONV_CLK_157Tcy        0x009C/* A/D Conversion Clock is 157*Tcy */
#define ADC_CONV_CLK_158Tcy        0x009D/* A/D Conversion Clock is 158*Tcy */
#define ADC_CONV_CLK_159Tcy        0x009E/* A/D Conversion Clock is 159*Tcy */
#define ADC_CONV_CLK_160Tcy        0x009F/* A/D Conversion Clock is 160*Tcy */
#define ADC_CONV_CLK_161Tcy        0x00A0/* A/D Conversion Clock is 161*Tcy */
#define ADC_CONV_CLK_162Tcy        0x00A1/* A/D Conversion Clock is 162*Tcy */
#define ADC_CONV_CLK_163Tcy        0x00A2/* A/D Conversion Clock is 163*Tcy */
#define ADC_CONV_CLK_164Tcy        0x00A3/* A/D Conversion Clock is 164*Tcy */
#define ADC_CONV_CLK_165Tcy        0x00A4/* A/D Conversion Clock is 165*Tcy */
#define ADC_CONV_CLK_166Tcy        0x00A5/* A/D Conversion Clock is 166*Tcy */
#define ADC_CONV_CLK_167Tcy        0x00A6/* A/D Conversion Clock is 167*Tcy */
#define ADC_CONV_CLK_168Tcy        0x00A7/* A/D Conversion Clock is 168*Tcy */
#define ADC_CONV_CLK_169Tcy        0x00A8/* A/D Conversion Clock is 169*Tcy */
#define ADC_CONV_CLK_170Tcy        0x00A9/* A/D Conversion Clock is 170*Tcy */
#define ADC_CONV_CLK_171Tcy        0x00AA/* A/D Conversion Clock is 171*Tcy */
#define ADC_CONV_CLK_172Tcy        0x00AB/* A/D Conversion Clock is 172*Tcy */
#define ADC_CONV_CLK_173Tcy        0x00AC/* A/D Conversion Clock is 173*Tcy */
#define ADC_CONV_CLK_174Tcy        0x00AD/* A/D Conversion Clock is 174*Tcy */
#define ADC_CONV_CLK_175Tcy        0x00AE/* A/D Conversion Clock is 175*Tcy */
#define ADC_CONV_CLK_176Tcy        0x00AF/* A/D Conversion Clock is 176*Tcy */
#define ADC_CONV_CLK_177Tcy        0x00B0/* A/D Conversion Clock is 177*Tcy */
#define ADC_CONV_CLK_178Tcy        0x00B1/* A/D Conversion Clock is 178*Tcy */
#define ADC_CONV_CLK_179Tcy        0x00B2/* A/D Conversion Clock is 179*Tcy */
#define ADC_CONV_CLK_180Tcy        0x00B3/* A/D Conversion Clock is 180*Tcy */
#define ADC_CONV_CLK_181Tcy        0x00B4/* A/D Conversion Clock is 181*Tcy */
#define ADC_CONV_CLK_182Tcy        0x00B5/* A/D Conversion Clock is 182*Tcy */
#define ADC_CONV_CLK_183Tcy        0x00B6/* A/D Conversion Clock is 183*Tcy */
#define ADC_CONV_CLK_184Tcy        0x00B7/* A/D Conversion Clock is 184*Tcy */
#define ADC_CONV_CLK_185Tcy        0x00B8/* A/D Conversion Clock is 185*Tcy */
#define ADC_CONV_CLK_186Tcy        0x00B9/* A/D Conversion Clock is 186*Tcy */
#define ADC_CONV_CLK_187Tcy        0x00BA/* A/D Conversion Clock is 187*Tcy */
#define ADC_CONV_CLK_188Tcy        0x00BB/* A/D Conversion Clock is 188*Tcy */
#define ADC_CONV_CLK_189Tcy        0x00BC/* A/D Conversion Clock is 189*Tcy */
#define ADC_CONV_CLK_190Tcy        0x00BD/* A/D Conversion Clock is 190*Tcy */
#define ADC_CONV_CLK_191Tcy        0x00BE/* A/D Conversion Clock is 191*Tcy */
#define ADC_CONV_CLK_192Tcy        0x00BF/* A/D Conversion Clock is 192*Tcy */
#define ADC_CONV_CLK_193Tcy        0x00C0/* A/D Conversion Clock is 193*Tcy */
#define ADC_CONV_CLK_194Tcy        0x00C1/* A/D Conversion Clock is 194*Tcy */
#define ADC_CONV_CLK_195Tcy        0x00C2/* A/D Conversion Clock is 195*Tcy */
#define ADC_CONV_CLK_196Tcy        0x00C3/* A/D Conversion Clock is 196*Tcy */
#define ADC_CONV_CLK_197Tcy        0x00C4/* A/D Conversion Clock is 197*Tcy */
#define ADC_CONV_CLK_198Tcy        0x00C5/* A/D Conversion Clock is 198*Tcy */
#define ADC_CONV_CLK_199Tcy        0x00C6/* A/D Conversion Clock is 199*Tcy */
#define ADC_CONV_CLK_200Tcy        0x00C7/* A/D Conversion Clock is 200*Tcy */
#define ADC_CONV_CLK_201Tcy        0x00C8/* A/D Conversion Clock is 201*Tcy */
#define ADC_CONV_CLK_202Tcy        0x00C9/* A/D Conversion Clock is 202*Tcy */
#define ADC_CONV_CLK_203Tcy        0x00CA/* A/D Conversion Clock is 203*Tcy */
#define ADC_CONV_CLK_204Tcy        0x00CB/* A/D Conversion Clock is 204*Tcy */
#define ADC_CONV_CLK_205Tcy        0x00CC/* A/D Conversion Clock is 205*Tcy */
#define ADC_CONV_CLK_206Tcy        0x00CD/* A/D Conversion Clock is 206*Tcy */
#define ADC_CONV_CLK_207Tcy        0x00CE/* A/D Conversion Clock is 207*Tcy */
#define ADC_CONV_CLK_208Tcy        0x00CF/* A/D Conversion Clock is 208*Tcy */
#define ADC_CONV_CLK_209Tcy        0x00D0/* A/D Conversion Clock is 209*Tcy */
#define ADC_CONV_CLK_210Tcy        0x00D1/* A/D Conversion Clock is 210*Tcy */
#define ADC_CONV_CLK_211Tcy        0x00D2/* A/D Conversion Clock is 211*Tcy */
#define ADC_CONV_CLK_212Tcy        0x00D3/* A/D Conversion Clock is 212*Tcy */
#define ADC_CONV_CLK_213Tcy        0x00D4/* A/D Conversion Clock is 213*Tcy */
#define ADC_CONV_CLK_214Tcy        0x00D5/* A/D Conversion Clock is 214*Tcy */
#define ADC_CONV_CLK_215Tcy        0x00D6/* A/D Conversion Clock is 215*Tcy */
#define ADC_CONV_CLK_216Tcy        0x00D7/* A/D Conversion Clock is 216*Tcy */
#define ADC_CONV_CLK_217Tcy        0x00D8/* A/D Conversion Clock is 217*Tcy */
#define ADC_CONV_CLK_218Tcy        0x00D9/* A/D Conversion Clock is 218*Tcy */
#define ADC_CONV_CLK_219Tcy        0x00DA/* A/D Conversion Clock is 219*Tcy */
#define ADC_CONV_CLK_220Tcy        0x00DB/* A/D Conversion Clock is 220*Tcy */
#define ADC_CONV_CLK_221Tcy        0x00DC/* A/D Conversion Clock is 221*Tcy */
#define ADC_CONV_CLK_222Tcy        0x00DD/* A/D Conversion Clock is 222*Tcy */
#define ADC_CONV_CLK_223Tcy        0x00DE/* A/D Conversion Clock is 223*Tcy */
#define ADC_CONV_CLK_224Tcy        0x00DF/* A/D Conversion Clock is 224*Tcy */
#define ADC_CONV_CLK_225Tcy        0x00E0/* A/D Conversion Clock is 225*Tcy */
#define ADC_CONV_CLK_226Tcy        0x00E1/* A/D Conversion Clock is 226*Tcy */
#define ADC_CONV_CLK_227Tcy        0x00E2/* A/D Conversion Clock is 227*Tcy */
#define ADC_CONV_CLK_228Tcy        0x00E3/* A/D Conversion Clock is 228*Tcy */
#define ADC_CONV_CLK_229Tcy        0x00E4/* A/D Conversion Clock is 229*Tcy */
#define ADC_CONV_CLK_230Tcy        0x00E5/* A/D Conversion Clock is 230*Tcy */
#define ADC_CONV_CLK_231Tcy        0x00E6/* A/D Conversion Clock is 231*Tcy */
#define ADC_CONV_CLK_232Tcy        0x00E7/* A/D Conversion Clock is 232*Tcy */
#define ADC_CONV_CLK_233Tcy        0x00E8/* A/D Conversion Clock is 232*Tcy */
#define ADC_CONV_CLK_234Tcy        0x00E9/* A/D Conversion Clock is 234*Tcy */
#define ADC_CONV_CLK_235Tcy        0x00EA/* A/D Conversion Clock is 235*Tcy */
#define ADC_CONV_CLK_236Tcy        0x00EB/* A/D Conversion Clock is 236*Tcy */
#define ADC_CONV_CLK_237Tcy        0x00EC/* A/D Conversion Clock is 237*Tcy */
#define ADC_CONV_CLK_238Tcy        0x00ED/* A/D Conversion Clock is 238*Tcy */
#define ADC_CONV_CLK_239Tcy        0x00EE/* A/D Conversion Clock is 239*Tcy */
#define ADC_CONV_CLK_240Tcy        0x00EF/* A/D Conversion Clock is 240*Tcy */
#define ADC_CONV_CLK_241Tcy        0x00F0/* A/D Conversion Clock is 241*Tcy */
#define ADC_CONV_CLK_242Tcy        0x00F1/* A/D Conversion Clock is 242*Tcy */
#define ADC_CONV_CLK_243Tcy        0x00F2/* A/D Conversion Clock is 243*Tcy */
#define ADC_CONV_CLK_244Tcy        0x00F3/* A/D Conversion Clock is 244*Tcy */
#define ADC_CONV_CLK_245Tcy        0x00F4/* A/D Conversion Clock is 245*Tcy */
#define ADC_CONV_CLK_246Tcy        0x00F5/* A/D Conversion Clock is 246*Tcy */
#define ADC_CONV_CLK_247Tcy        0x00F6/* A/D Conversion Clock is 247*Tcy */
#define ADC_CONV_CLK_248Tcy        0x00F7/* A/D Conversion Clock is 248*Tcy */
#define ADC_CONV_CLK_249Tcy        0x00F8/* A/D Conversion Clock is 249*Tcy */
#define ADC_CONV_CLK_250Tcy        0x00F9/* A/D Conversion Clock is 250*Tcy */
#define ADC_CONV_CLK_251Tcy        0x00FA/* A/D Conversion Clock is 251*Tcy */
#define ADC_CONV_CLK_252Tcy        0x00FB/* A/D Conversion Clock is 252*Tcy */
#define ADC_CONV_CLK_253Tcy        0x00FC/* A/D Conversion Clock is 253*Tcy */
#define ADC_CONV_CLK_254Tcy        0x00FD/* A/D Conversion Clock is 254*Tcy */
#define ADC_CONV_CLK_255Tcy        0x00FE/* A/D Conversion Clock is 255*Tcy */
#define ADC_CONV_CLK_256Tcy        0x00FF/* A/D Conversion Clock is 256*Tcy */
#define ADC_CONV_CLK_MASK          (~ADC_CONV_CLK_256Tcy)  /* A/D conversion clock  mask */


/**** AD1CON4 register definition ****/
#if defined (adc_v5_1) || defined (adc_v5_2)
#define ADC_DMA_BUF_LEN1 			0x0000/*Allocates 1 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN2 			0x0001/*Allocates 2 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN4 			0x0002/*Allocates 4 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN8 			0x0003/*Allocates 8 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN16 			0x0004/*Allocates 16 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN32			0x0005/*Allocates 32 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN64			0x0006/*Allocates 64 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN128			0x0007/*Allocates 128 words of buffer to each analog input*/
#define ADC_DMA_BUF_LEN_MASK     	(~0x0007) /* A/D DMA Buffer Length mask */
#endif

/**** AD1CON5 register definition ****/
#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_AUTO_SCAN_ENABLE        0x8000 /*Auto-Scan is enabled*/
#define ADC_AUTO_SCAN_DISABLE       0x0000 /*Auto-Scan is disabled*/
#define ADC_AUTO_SCAN_MASK          (~0x8000)

#define ADC_LOW_POWER_ENABLE        0x4000 /*Low power enabled after scan*/
#define ADC_LOW_POWER_DISABLE       0x0000 /*Full power enabled after scan*/
#define ADC_LOW_POWER_MASK          (~0x4000)

#define ADC_CTMU_ENABLE             0x2000 /*CTMU is enabled when the ADC is enabled and active*/
#define ADC_CTMU_DISABLE            0x0000 /*CTMU is not enabled by the ADC*/
#define ADC_CTMU_MASK               (~0x2000)

#define ADC_BG_ENABLE               0x1000 /*Band gap is enabled when the ADC is enabled and active*/
#define ADC_BG_DISABLE               0x0000 /*Band gap is not enabled by the ADC*/
#define ADC_BG_MASK                 (~0x1000)

#define ADC_AUTO_INT_THRES_COMP    	0x0000 /*Interrupt occurs after sampling is completed and valid compare has occured*/
#define ADC_AUTO_INT_COMP    		0x0100 /*Interrupt occurs after valid compare has occured*/
#define ADC_INT_THRES     			0x0200 /*Interrupt occurs after sampling is completed*/
#define ADC_AUTO_SCAN    			0x0300 /*No Interrupt*/
#define ADC_AUTO_INT_MASK           (~0x0300) /*A/D Auto Interrupt Mask*/

#define ADC_WRITE_AUTO_COMPARE      0x0008 /*conversion results not saved, but interrupts are generated when a valid match as defined by CM and ASINT bits occurs*/ 
#define ADC_WRITE_CONVERT_SAVE      0x0004 /*conversion results saved to locations as determined by register bits when a match as defined by CM bits occurs*/
#define ADC_WRITE_LEGACY            0x0000 /*conversion data saved to location determined by buffer register bits */
#define ADC_WRITE_MASK              (~0x0008)

#define ADC_CMP_OUTSIDE_MODE        0x0003 /*valid match occurs when conversion result is outside of the window*/
#define ADC_CMP_INSIDE_MODE         0x0002 /*valid match occurs when conversion result is inside the window*/
#define ADC_CMP_GREATER_MODE        0x0001 /*valid match occurs when result is greater than corresponding buffer register*/
#define ADC_CMP_LESS_MODE           0x0000 /*valid match occurs when result is less than corresponding buffer register*/
#define ADC_CMP_MASK                (~0x0003)
#endif

#if defined (adc_v4_1)||defined (adc_v4_2) || defined (adc_v4_3)
#define ADC_VREG_ENABLE             0x0800 /*On-chip regulator is enabled when the ADC is enabled and active*/
#define ADC_VREG_DISABLE             0x0000 /*On-chip regulator is not enabled by the ADC*/
#define ADC_VREG_MASK               (~0x0800)
#endif

/**** AD1CHS register definition ****/
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) ||defined (adc_v6_1) || \
	defined (adc_v6_2) || defined (adc_v7_1)||defined (adc_v7_2)
#define ADC_CH0_NEG_SAMPLEB_AN1     0x8000 /* CH0 negative input is AN1 */
#define ADC_CH0_NEG_SAMPLEB_VREFN   0x0000 /* CH0 negative input is VREF- */
#define ADC_CH0_NEG_SAMPLEB_MASK    (~ADC_CH0_NEG_SAMPLEB_AN1)  /* A/D channel0 negative sampleB mask */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3)|| defined (adc_v5_1) || defined (adc_v5_2) 
#define ADC_CH0_NEG_SAMPLEB_VREFN   0x0000  /* CH0 negative input is VREF- */
#define ADC_CH0_NEG_SAMPLEB_AN1     0x4000 /* CH0 negative input is AN1 */

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEB_AN0     0x2000 /* CH0 negative input is AN0 */
#define ADC_CH0_NEG_SAMPLEB_AN2     0x6000 /* CH0 negative input is AN2 */
#define ADC_CH0_NEG_SAMPLEB_AN3     0x8000 /* CH0 negative input is AN3 */
#define ADC_CH0_NEG_SAMPLEB_AN4     0xA000 /* CH0 negative input is AN4*/
#endif

#if defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEB_AN5     0xC000 /* CH0 negative input is AN5 */
#endif

#if defined (adc_v4_3) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEB_AN6     0xE000 /* CH0 negative input is AN6 */
#endif
#endif

#endif

#define ADC_CH0_POS_SAMPLEB_AN0     0x0000 /* A/D CH0 pos i/p sel for SAMPLE B is AN0 */
#define ADC_CH0_POS_SAMPLEB_AN1     0x0100 /* A/D CH0 pos i/p sel for SAMPLE B is AN1 */
#ifndef adc_v7_1
#define ADC_CH0_POS_SAMPLEB_AN2     0x0200 /* A/D CH0 pos i/p sel for SAMPLE B is AN2 */
#define ADC_CH0_POS_SAMPLEB_AN3     0x0300 /* A/D CH0 pos i/p sel for SAMPLE B is AN3 */
#ifndef adc_v6_1
#define ADC_CH0_POS_SAMPLEB_AN4     0x0400 /* A/D CH0 pos i/p sel for SAMPLE B is AN4 */
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) || defined (adc_v4_2) || \
	defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v6_2) ||\
	defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN5     0x0500 /* A/D CH0 pos i/p sel for SAMPLE B is AN5 */
#endif
#endif
#endif

#if defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN6     0x0600 /* A/D CH0 pos i/p sel for SAMPLE B is AN6 */
#define ADC_CH0_POS_SAMPLEB_AN7     0x0700 /* A/D CH0 pos i/p sel for SAMPLE B is AN7 */
#elif defined (adc_v1_4) ||defined (adc_v1_2)
#define ADC_CH0_POS_SAMPLEB_AVSS	0x0600 /* A/D CH0 pos i/p sel for SAMPLE B is AVSS */
#define ADC_CH0_POS_SAMPLEB_AVDD	0x0700 /* A/D CH0 pos i/p sel for SAMPLE B is AVDD */
#elif defined (adc_v7_1)|| defined (adc_v7_2) 
#define ADC_CH0_POS_SAMPLEB_VBG		 0x0600 /* A/D CH0 pos i/p sel for SAMPLE B is VBG */
#define ADC_CH0_POS_SAMPLEB_215VDD	 0x0700 /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.215*VDD) */
#elif defined (adc_v4_1)|| defined (adc_v4_2) ||defined (adc_v4_3)
#define ADC_CH0_POS_SAMPLEB_AVSS     0x1D00 /* A/D CH0 pos i/p sel for SAMPLE B is AVSS */
#define ADC_CH0_POS_SAMPLEB_AVDD     0x1E00 /* A/D CH0 pos i/p sel for SAMPLE B is AVDD */
#endif

#if defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5) || defined (adc_v1_8) ||defined (adc_v2_1) ||\
	defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN8     0x0800 /* A/D CH0 pos i/p sel for SAMPLE B is AN8 */
#elif defined (adc_v7_1)|| defined (adc_v7_2) 
#define ADC_CH0_POS_SAMPLEB_785VDD	 0x0800 /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.785*VDD) */
#endif

#if defined (adc_v1_1) ||defined (adc_v1_3) || defined (adc_v1_5) ||\
    defined (adc_v1_6) || defined (adc_v1_7) || defined (adc_v1_8) ||\
    defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || \
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v7_1) ||\
	defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN9     0x0900 /* A/D CH0 pos i/p sel for SAMPLE B is AN9 */
#endif

#define ADC_CH0_POS_SAMPLEB_AN10    0x0A00 /* A/D CH0 pos i/p sel for SAMPLE B is AN10 */

#ifndef adc_v7_1
#define ADC_CH0_POS_SAMPLEB_AN11    0x0B00 /* A/D CH0 pos i/p sel for SAMPLE B is AN11 */
#endif

#if defined (adc_v1_1) || defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) ||\
    defined (adc_v1_5) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) ||\
	defined (adc_v3_2) || defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || \
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN12    0x0C00 /* A/D CH0 pos i/p sel for SAMPLE B is AN12 */
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) ||\
	defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEB_AN13    0x0D00 /* A/D CH0 pos i/p sel for SAMPLE B is AN13 */
#elif defined (adc_v1_5)|| defined (adc_v1_6) || defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEB_VDDCORE  0x0D00 /* A/D CH0 pos i/p sel for SAMPLE B is VddCore*/
#elif defined (adc_v1_4) ||defined (adc_v1_2) || defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CH0_POS_SAMPLEB_CTMU     0x0D00 /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || \
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN14    0x0E00 /* A/D CH0 pos i/p sel for SAMPLE B is AN14 */
#elif defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEB_VBGDIV2  0x0E00 /* A/D CH0 pos i/p sel for SAMPLE B is VBG/2 */
#elif defined (adc_v1_4) 
#define ADC_CH0_POS_SAMPLEB_VBGDIV2  0x1E00 /* A/D CH0 pos i/p sel for SAMPLE B is VBG/2 */
#endif

#if  defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) ||\
	defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEB_AN15    0x0F00 /* A/D CH0 pos i/p sel for SAMPLE B is AN15 */
#elif defined (adc_v1_1)||defined (adc_v1_2) ||defined (adc_v1_4) ||defined (adc_v1_5) ||\
      defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEB_VBG     0x0F00 /* A/D CH0 pos i/p sel for SAMPLE B is VBG*/
#endif

#if defined (adc_v3_2) || defined (adc_v5_2) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN16    0x1000 /* A/D CH0 pos i/p sel for SAMPLE B is AN16 */
#define ADC_CH0_POS_SAMPLEB_AN17    0x1100 /* A/D CH0 pos i/p sel for SAMPLE B is AN17 */
#elif defined (adc_v2_1) 
#define ADC_CH0_POS_SAMPLEB_VBGDIV2 0x1000 /* A/D CH0 pos i/p sel for SAMPLE B is VBG/2 */
#define ADC_CH0_POS_SAMPLEB_VBG     0x1100 /* A/D CH0 pos i/p sel for SAMPLE B is VBG */
#endif
#if defined (adc_v4_1)|| defined (adc_v4_2) ||defined (adc_v4_3)
#define ADC_CH0_POS_SAMPLEB_CTMU_TEMP    0x1000 /* No Channel used; all input floating; used for CTMU temperature sensor input*/
#define ADC_CH0_POS_SAMPLEB_CTMU         0x1100 /* No Channel used; all input floating; used for CTMU*/
#elif  defined (adc_v5_1) || defined (adc_v5_2) 
#define ADC_CH0_POS_SAMPLEB_CTMU_TEMP   0x1800 /* No Channel used; all input floating; used for CTMU Temperature Sensor input*/
#define ADC_CH0_POS_SAMPLEB_CTMU     	0x1900 /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v3_2)|| defined (adc_v5_2)
#define ADC_CH0_POS_SAMPLEB_AN18     0x1200 /* A/D CH0 pos i/p sel for SAMPLE B is AN18 */
#define ADC_CH0_POS_SAMPLEB_AN19     0x1300 /* A/D CH0 pos i/p sel for SAMPLE B is AN19 */
#define ADC_CH0_POS_SAMPLEB_AN20     0x1400 /* A/D CH0 pos i/p sel for SAMPLE B is AN20 */
#define ADC_CH0_POS_SAMPLEB_AN21     0x1500 /* A/D CH0 pos i/p sel for SAMPLE B is AN21 */
#define ADC_CH0_POS_SAMPLEB_AN22     0x1600 /* A/D CH0 pos i/p sel for SAMPLE B is AN22 */
#define ADC_CH0_POS_SAMPLEB_AN23     0x1700 /* A/D CH0 pos i/p sel for SAMPLE B is AN23 */
#endif

#if defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#if defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AN18    0xF2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN18 */
#endif
#define ADC_CH0_POS_SAMPLEB_AN19    0xF3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN19 */
#define ADC_CH0_POS_SAMPLEB_AN20    0xF4FF /* A/D CH0 pos i/p sel for SAMPLE B is AN20 */
#define ADC_CH0_POS_SAMPLEB_AN21    0xF5FF /* A/D CH0 pos i/p sel for SAMPLE B is AN21 */
#define ADC_CH0_POS_SAMPLEB_CTMU_TEMP    0xF6FF /* No Channel used; all input floating; used for CTMU temperature sensor input*/
#define ADC_CH0_POS_SAMPLEB_CTMU         0xF7FF /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v3_1)||defined (adc_v3_2) 
#define ADC_CH0_POS_SAMPLEB_VBGDIV2  0x1800 /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-two-reference (VBG/2)*/
#define ADC_CH0_POS_SAMPLEB_VBG		 0x1900 /* A/D CH0 pos i/p sel for SAMPLE B is band gap reference (VBG) */
#define ADC_CH0_POS_SAMPLEB_VDDCORE	 0x1A00 /* A/D CH0 pos i/p sel for SAMPLE B is Core Voltage (VDDCORE) */
#define ADC_CH0_POS_SAMPLEB_VBGDIV6  0x1B00 /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-six-reference (VBG/6)*/
#elif  defined (adc_v5_1) || defined (adc_v5_2)  
#define ADC_CH0_POS_SAMPLEB_VBGDIV6  0x1A00 /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-six-reference (VBG/6) */
#define ADC_CH0_POS_SAMPLEB_VBGDIV2  0x1B00 /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-two-reference (VBG/2) */
#define ADC_CH0_POS_SAMPLEB_VBG		 0x1C00 /* A/D CH0 pos i/p sel for SAMPLE B is band gap reference (VBG) */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_VBG		 0x1A00 /* A/D CH0 pos i/p sel for SAMPLE B is band gap reference (VBG) */
#define ADC_CH0_POS_SAMPLEB_215VDD 0x1B00 /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.215*VDD) */
#define ADC_CH0_POS_SAMPLEB_785VDD 0x1C00 /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.785*VDD) */
#endif
#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEB_AVSS     0x1D00 /* A/D CH0 pos i/p sel for SAMPLE B is AVSS */
#define ADC_CH0_POS_SAMPLEB_AVDD     0x1E00 /* A/D CH0 pos i/p sel for SAMPLE B is AVDD */
#endif

#if defined (adc_v5_1)|| defined (adc_v5_2) 
#define ADC_CH0_POS_SAMPLEB_VBAT     0x1F00 /* A/D CH0 pos i/p sel for SAMPLE B is VBAT */
#endif

#if defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEB_VOLTREG  0x1D00 /* A/D CH0 pos i/p sel for SAMPLE B is voltage regulator output */
#endif

#if defined (adc_v1_7) || defined (adc_v1_8)||defined (adc_v3_1) || defined (adc_v3_2)
#define ADC_CH0_POS_SAMPLEB_CTMU     0x1F00 /* No Channel used; all input floating; used for CTMU*/
#endif

#define ADC_CH0_POS_SAMPLEB_MASK    (~0x1F00)  /* A/D channel0 positive sampleA mask */

#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) || defined (adc_v6_1) ||\
	defined (adc_v6_2) || defined (adc_v7_1)||defined (adc_v7_2) 
#define ADC_CH0_NEG_SAMPLEA_AN1     0x0080 /*A/D CH0 neg I/P sel for SAMPLE A is AN1 */
#define ADC_CH0_NEG_SAMPLEA_VREFN   0x0000 /*A/D CH0 neg I/P sel for SAMPLE A is Vrefn */
#define ADC_CH0_NEG_SAMPLEA_MASK    (~ADC_CH0_NEG_SAMPLEA_AN1) /* A/D channel0 negative sampleA mask */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEA_VREFN   0x0000  /* CH0 negative input is VREF- */
#define ADC_CH0_NEG_SAMPLEA_AN1     0x0040 /* CH0 negative input is AN1 */

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEA_AN0     0x0020 /* CH0 negative input is AN0 */
#define ADC_CH0_NEG_SAMPLEA_AN2     0x0060 /* CH0 negative input is AN2 */
#define ADC_CH0_NEG_SAMPLEA_AN3     0x0080 /* CH0 negative input is AN3 */
#define ADC_CH0_NEG_SAMPLEA_AN4     0x00A0 /* CH0 negative input is AN4*/
#endif

#if defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEA_AN5     0x00C0 /* CH0 negative input is AN5 */
#endif

#if defined (adc_v4_3) || defined (adc_v8_3)
#define ADC_CH0_NEG_SAMPLEA_AN6     0x00E0 /* CH0 negative input is AN6 */
#endif
#endif

#define ADC_CH0_POS_SAMPLEA_AN0     0x0000 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN0 */
#define ADC_CH0_POS_SAMPLEA_AN1     0x0001 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN1 */
#ifndef adc_v7_1
#define ADC_CH0_POS_SAMPLEA_AN2     0x0002 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN2 */
#define ADC_CH0_POS_SAMPLEA_AN3     0x0003 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN3 */
#ifndef adc_v6_1
#define ADC_CH0_POS_SAMPLEA_AN4     0x0004 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN4 */
#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7)|| defined (adc_v1_8)|| \
	defined (adc_v2_1) || defined (adc_v3_1) ||defined (adc_v3_2) || defined (adc_v4_2) || \
	defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v6_2) ||\
	defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEA_AN5     0x0005 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN5 */
#endif
#endif
#endif

#if defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AN6     0x0006 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN6 */
#define ADC_CH0_POS_SAMPLEA_AN7     0x0007 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN7 */
#elif defined (adc_v1_4)||defined (adc_v1_2)
#define ADC_CH0_POS_SAMPLEA_AVSS	 0x0006 /* A/D CH0 pos i/p sel for SAMPLE A is AVSS */
#define ADC_CH0_POS_SAMPLEA_AVDD	 0x0007 /* A/D CH0 pos i/p sel for SAMPLE A is AVDD */
#elif defined (adc_v7_1)|| defined (adc_v7_2) 
#define ADC_CH0_POS_SAMPLEA_VBG		 0x0006 /* A/D CH0 pos i/p sel for SAMPLE B is VBG */
#define ADC_CH0_POS_SAMPLEA_215VDD	 0x0007 /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.215*VDD) */
#elif defined (adc_v1_4)||defined (adc_v1_2)
#define ADC_CH0_POS_SAMPLEA_AVSS	 0x000D /* A/D CH0 pos i/p sel for SAMPLE A is AVSS */
#define ADC_CH0_POS_SAMPLEA_AVDD	 0x000E /* A/D CH0 pos i/p sel for SAMPLE A is AVDD */
#endif

#if defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5) || defined (adc_v1_8) ||defined (adc_v2_1) ||\
	defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AN8     0x0008 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN8 */
#elif defined (adc_v7_1)|| defined (adc_v7_2) 
#define ADC_CH0_POS_SAMPLEA_785VDD	 0x0008 /* A/D CH0 pos i/p sel for SAMPLE B is Upper guardband rail (0.785*VDD) */
#endif

#if defined (adc_v1_1) ||defined (adc_v1_3) || defined (adc_v1_5) ||\
    defined (adc_v1_6) || defined (adc_v1_7) || defined (adc_v1_8) ||\
    defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || \
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v7_1) ||\
	defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AN9     0x0009 /* A/D Chan 0 pos i/p sel for SAMPLE A is AN9 */
#endif

#define ADC_CH0_POS_SAMPLEA_AN10    0x000A /* A/D Chan 0 pos i/p sel for SAMPLE A is AN10 */

#ifndef adc_v7_1
#define ADC_CH0_POS_SAMPLEA_AN11    0x000B /* A/D Chan 0 pos i/p sel for SAMPLE A is AN11 */
#endif

#if defined (adc_v1_1) || defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) ||\
    defined (adc_v1_5) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) ||\
	defined (adc_v3_2) || defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || \
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3) 
#define ADC_CH0_POS_SAMPLEA_AN12    0x000C /* A/D Chan 0 pos i/p sel for SAMPLE A is AN12 */
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) ||\
	defined (adc_v8_2) || defined (adc_v8_3)  
#define ADC_CH0_POS_SAMPLEA_AN13    0x000D /* A/D Chan 0 pos i/p sel for SAMPLE A is AN13 */
#elif defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEA_VDDCORE		 0x000D /* A/D CH0 pos i/p sel for SAMPLE A is VDDCORE */
#elif defined (adc_v1_4) ||defined (adc_v1_2) || defined (adc_v6_1) || defined (adc_v6_2) 
#define ADC_CH0_POS_SAMPLEA_CTMU         0x000D /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || \
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AN14    0x000E /* A/D Chan 0 pos i/p sel for SAMPLE A is AN14 */
#elif defined (adc_v1_5)|| defined (adc_v1_6) || defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEA_VBGDIV2 0x000E /* A/D CH0 pos i/p sel for SAMPLE A is VBG/2*/ 
#elif defined (adc_v1_4) 
#define ADC_CH0_POS_SAMPLEA_VBGDIV2 0x001E /* A/D CH0 pos i/p sel for SAMPLE A is VBG/2 */
#endif

#if  defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) ||\
	defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AN15    0x000F /* A/D Chan 0 pos i/p sel for SAMPLE A is AN15 */
#elif defined (adc_v1_1)||defined (adc_v1_2) ||defined (adc_v1_4) ||defined (adc_v1_5)|| \
      defined (adc_v1_6) || defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEA_VBG     0x000F /* A/D CH0 pos i/p sel for SAMPLE A is VBG */
#endif

#if defined (adc_v3_2) || defined (adc_v5_2) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AN16    0x0010 /* A/D CH0 pos i/p sel for SAMPLE A is AN16 */
#define ADC_CH0_POS_SAMPLEA_AN17    0x0011 /* A/D CH0 pos i/p sel for SAMPLE A is AN17 */
#elif defined (adc_v2_1) 
#define ADC_CH0_POS_SAMPLEA_VBGDIV2 0x0010 /* A/D CH0 pos i/p sel for SAMPLE A is VBG/2 */
#define ADC_CH0_POS_SAMPLEA_VBG     0x0011 /* A/D CH0 pos i/p sel for SAMPLE A is VBG */
#endif
#if defined (adc_v4_1)|| defined (adc_v4_2) ||defined (adc_v4_3)
#define ADC_CH0_POS_SAMPLEA_CTMU_TEMP    0x0010 /* No Channel used; all input floating; used for CTMU temperature sensor input*/
#define ADC_CH0_POS_SAMPLEA_CTMU         0x0011 /* No Channel used; all input floating; used for CTMU*/
#elif  defined (adc_v5_1) || defined (adc_v5_2) 
#define ADC_CH0_POS_SAMPLEA_CTMU_TEMP   0x0008 /* No Channel used; all input floating; used for CTMU Temperature Sensor input*/
#define ADC_CH0_POS_SAMPLEA_CTMU     	0x0009 /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v3_2)|| defined (adc_v5_2)
#define ADC_CH0_POS_SAMPLEA_AN18    0x0012 /* A/D CH0 pos i/p sel for SAMPLE A is AN18 */
#define ADC_CH0_POS_SAMPLEA_AN19    0x0013 /* A/D CH0 pos i/p sel for SAMPLE A is AN19 */
#define ADC_CH0_POS_SAMPLEA_AN20    0x0014 /* A/D CH0 pos i/p sel for SAMPLE A is AN20 */
#define ADC_CH0_POS_SAMPLEA_AN21    0x0015 /* A/D CH0 pos i/p sel for SAMPLE A is AN21 */
#define ADC_CH0_POS_SAMPLEA_AN22    0x0016 /* A/D CH0 pos i/p sel for SAMPLE A is AN22 */
#define ADC_CH0_POS_SAMPLEA_AN23    0x0017 /* A/D CH0 pos i/p sel for SAMPLE A is AN23 */
#endif

#if defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#if defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AN18    0x0012 /* A/D CH0 pos i/p sel for SAMPLE B is AN18 */
#endif
#define ADC_CH0_POS_SAMPLEA_AN19    0x0013 /* A/D CH0 pos i/p sel for SAMPLE B is AN19 */
#define ADC_CH0_POS_SAMPLEA_AN20    0x0014 /* A/D CH0 pos i/p sel for SAMPLE B is AN20 */
#define ADC_CH0_POS_SAMPLEA_AN21    0x0015 /* A/D CH0 pos i/p sel for SAMPLE B is AN21 */
#define ADC_CH0_POS_SAMPLEA_CTMU_TEMP    0x0016 /* No Channel used; all input floating; used for CTMU temperature sensor input*/
#define ADC_CH0_POS_SAMPLEA_CTMU   0x0017 /* No Channel used; all input floating; used for CTMU*/
#endif

#if defined (adc_v3_1) || defined (adc_v3_2)
#define ADC_CH0_POS_SAMPLEA_VBGDIV2  0x0018 /* A/D CH0 pos i/p sel for SAMPLE A is band gap divided-by-two-reference (VBG/2)*/
#define ADC_CH0_POS_SAMPLEA_VBG		 0x0019 /* A/D CH0 pos i/p sel for SAMPLE A is band gap reference (VBG) */
#define ADC_CH0_POS_SAMPLEA_VDDCORE	 0x001A /* A/D CH0 pos i/p sel for SAMPLE A is Core Voltage (VDDCORE) */
#define ADC_CH0_POS_SAMPLEA_VBGDIV6  0x001B /* A/D CH0 pos i/p sel for SAMPLE A is band gap divided-by-six-reference (VBG/6)*/
#elif  defined (adc_v5_1) || defined (adc_v5_2)  
#define ADC_CH0_POS_SAMPLEA_VBGDIV6  0x001A /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-six-reference (VBG/6) */
#define ADC_CH0_POS_SAMPLEA_VBGDIV2  0x001B /* A/D CH0 pos i/p sel for SAMPLE B is band gap divided-by-two-reference (VBG/2) */
#define ADC_CH0_POS_SAMPLEA_VBG		 0x001C /* A/D CH0 pos i/p sel for SAMPLE B is band gap reference (VBG) */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_VBG		  0x001A /* A/D CH0 pos i/p sel for SAMPLE A is band gap reference (VBG) */
#define ADC_CH0_POS_SAMPLEA_215VDD  0x001B /* A/D CH0 pos i/p sel for SAMPLE A is Upper guardband rail (0.215*VDD) */
#define ADC_CH0_POS_SAMPLEA_785VDD  0x001C /* A/D CH0 pos i/p sel for SAMPLE A is Upper guardband rail (0.785*VDD) */
#endif
#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CH0_POS_SAMPLEA_AVSS     0x001D /* A/D CH0 pos i/p sel for SAMPLE A is AVSS */
#define ADC_CH0_POS_SAMPLEA_AVDD     0x001E /* A/D CH0 pos i/p sel for SAMPLE A is AVDD */
#endif

#if defined (adc_v5_1)|| defined (adc_v5_2)   
#define ADC_CH0_POS_SAMPLEA_VBAT     0x001F /* A/D CH0 pos i/p sel for SAMPLE A is VBAT */
#endif

#if defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8)
#define ADC_CH0_POS_SAMPLEA_VOLTREG  0x001D /* A/D CH0 pos i/p sel for SAMPLE A is voltage regulator output */
#endif

#if defined (adc_v1_7) || defined (adc_v1_8)|| defined (adc_v3_1) || defined (adc_v3_2)
#define ADC_CH0_POS_SAMPLEA_CTMU     0x001F /* No Channel used; all input floating; used for CTMU*/
#endif

#define ADC_CH0_POS_SAMPLEA_MASK    (~0x001F )  /* A/D channel0 positive sampleA mask */

/*** AD1CHS123 register definition ***/
#if defined (adc_v6_1) || defined (adc_v6_2)
#define ADC_CH123_NEG_SAMPLEB_AVSS		0x0200 /*Channel 1,2,3 Negative Input Select for Sample B bits is AVSS*/
#define ADC_CH123_NEG_SAMPLEB_GND		0x0000 /*Channel 1,2,3 Negative Input Select for Sample B bits is AVSS*/
#define ADC_CH123_NEG_SAMPLEB_MASK      (~ADC_CH123_NEG_SAMPLEB_AVSS) /* Channel 1,2,3 Negative Input Select for Sample B bits Mask*/

#define ADC_CH123_POS_SAMPLEB_AN012		0x0000  /* CH1 positive input is AN0, CH2 positive input is AN1, CH3 positive input is AN2 */
#define ADC_CH123_POS_SAMPLEB_MASK      (~ADC_CH123_POS_SAMPLEB_AN012) /* Channel1 sample B Mask*/
#if defined (adc_v6_1)
#define ADC_CH1_POS_SAMPLEB_AN3			0x0100  /* CH1 positive input is AN3, CH2 and CH3 positive inputs are not connected */
#define ADC_CH1_POS_SAMPLEB_AN3_MASK  (~ADC_CH1_POS_SAMPLEB_AN3) /* Channel 1,2,3 Positive Input Select for Sample B Mask */
#endif

#if defined (adc_v6_2)
#define ADC_CH123_POS_SAMPLEB_AN345		0xFFFF  /* CH1 positive input is AN3, CH2 positive input is AN4, CH3 positive input is AN5 */
#define ADC_CH123_POS_SAMPLEB_AN345_MASK  (~ADC_CH1_POS_SAMPLEB_AN3) /* Channel 1,2,3 Positive Input Select for Sample B Mask */
#endif

#define ADC_CH123_NEG_SAMPLEA_AVSS		0x0002 /*Channel 1,2,3 Negative Input Select for Sample A bits is AVSS*/ 
#define ADC_CH123_NEG_SAMPLEA_GND		0x0000 /*Channel 1,2,3 Negative Input Select for Sample A bits is AVSS*/ 
#define ADC_CH123_NEG_SAMPLEA_MASK      (~ADC_CH123_NEG_SAMPLEA_AVSS) /* Channel 1,2,3 Negative Input Select for Sample B bits Mask*/

#define ADC_CH123_POS_SAMPLEA_AN012		0xFFFE  /* CH1 positive input is AN0, CH2 positive input is AN1, CH3 positive input is AN2 */
#define ADC_CH123_POS_SAMPLEA_MASK      (~ADC_CH123_POS_SAMPLEA_AN012) /* Channel1 sample B Mask*/
#if defined (adc_v6_1)
#define ADC_CH1_POS_SAMPLEA_AN3			0xFFFF  /* CH1 positive input is AN3, CH2 and CH3 positive inputs are not connected */
#define ADC_CH1_POS_SAMPLEA_AN3_MASK    (~ADC_CH1_POS_SAMPLEA_AN3) /* Channel 1,2,3 Positive Input Select for Sample B Mask */
#endif

#if defined (adc_v6_2)
#define ADC_CH123_POS_SAMPLEA_AN345		0xFFFF  /* CH1 positive input is AN3, CH2 positive input is AN4, CH3 positive input is AN5 */
#define ADC_CH123_POS_SAMPLEA_AN345_MASK  (~ADC_CH1_POS_SAMPLEA_AN3) /* Channel 1,2,3 Positive Input Select for Sample B Mask */
#endif

#endif

/**** AD1PCFGL register definition ****/
#if defined (adc_v1_1) || defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_5) || defined (adc_v1_6)|| defined (adc_v1_7)|| defined (adc_v1_8) || defined (adc_v2_1) ||\
	defined (adc_v6_1) || defined (adc_v6_2)
#define ENABLE_AN0_DIG              0x0001 /*Enable AN0 in digital mode */
#define ENABLE_AN0_ANA              0x0000 /*Enable AN0 in analog mode */
#define ENABLE_AN1_DIG              0x0002 /*Enable AN1 in digital mode */
#define ENABLE_AN1_ANA              0x0000 /*Enable AN1 in analog mode */
#define ENABLE_AN2_DIG              0x0004 /*Enable AN2 in digital mode */
#define ENABLE_AN2_ANA              0x0000 /*Enable AN2 in analog mode */
#define ENABLE_AN3_DIG              0x0008 /*Enable AN3 in digital mode */
#define ENABLE_AN3_ANA              0x0000 /*Enable AN3 in analog mode */
#define ENABLE_AN4_DIG              0x0010 /*Enable AN4 in digital mode */
#define ENABLE_AN4_ANA              0x0000 /*Enable AN4 in analog mode */
#define ENABLE_AN5_DIG              0x0020 /*Enable AN5 in digital mode */
#define ENABLE_AN5_ANA              0x0000 /*Enable AN5 in analog mode */

#if defined (adc_v1_2)||defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5)  || defined (adc_v1_8)|| defined (adc_v2_1) 
#define ENABLE_AN6_DIG              0x0040 /*Enable AN6 in digital mode */
#define ENABLE_AN6_ANA              0x0000 /*Enable AN6 in analog mode */
#define ENABLE_AN7_DIG              0x0080 /*Enable AN7 in digital mode */
#define ENABLE_AN7_ANA              0x0000 /*Enable AN7 in analog mode */
#define ENABLE_AN8_DIG              0x0100 /*Enable AN8 in digital mode */
#define ENABLE_AN8_ANA              0x0000 /*Enable AN8 in analog mode */
#endif

#if defined (adc_v1_1)||defined (adc_v1_2)|| defined (adc_v1_3) || defined (adc_v1_5) || defined (adc_v1_6)||\
    defined (adc_v1_7)|| defined (adc_v1_8) || defined (adc_v2_1)
#define ENABLE_AN9_DIG              0x0200 /*Enable AN9 in digital mode */
#define ENABLE_AN9_ANA              0x0000 /*Enable AN9 in analog mode */
#endif

#define ENABLE_AN10_DIG             0x0400 /*Enable AN10 in digital mode */
#define ENABLE_AN10_ANA             0x0000 /*Enable AN10 in analog mode */
#define ENABLE_AN11_DIG             0x0800 /*Enable AN11 in digital mode */
#define ENABLE_AN11_ANA             0x0000 /*Enable AN11 in analog mode */

#if defined (adc_v1_1)||defined (adc_v1_2) ||defined (adc_v1_3) ||defined (adc_v1_4) ||\
    defined (adc_v1_5) || defined (adc_v1_8)|| defined (adc_v2_1) 
#define ENABLE_AN12_DIG             0x1000 /*Enable AN12 in digital mode */
#define ENABLE_AN12_ANA             0x0000 /*Enable AN12 in analog mode */
#endif

#if defined (adc_v1_3) ||defined (adc_v2_1)
#define ENABLE_AN13_DIG             0x2000 /*Enable AN13 in digital mode */
#define ENABLE_AN13_ANA             0x0000 /*Enable AN13 in analog mode */
#elif defined (adc_v1_5)  || defined (adc_v1_6)|| defined (adc_v1_7) || defined (adc_v1_8)
#define VOLT_REG_DISABLED			0x2000 /*Voltage regulator reference is disabled*/
#define VOLT_REG_ENABLED			0x0000 /*Voltage regulator reference is enabled*/
#define VOLT_REG_MASK				(~VOLT_REG_DISABLED) /*Voltage regulator reference is MASKED*/
#endif

#if defined (adc_v1_3) ||defined (adc_v2_1)
#define ENABLE_AN14_DIG             0x4000 /*Enable AN14 in digital mode */
#define ENABLE_AN14_ANA             0x0000 /*Enable AN14 in analog mode */
#elif defined (adc_v1_5) || defined (adc_v1_6) || defined (adc_v1_7) || defined (adc_v1_8)
#define BG_VREF_DIV2_DISABLED		0x4000 /*Band gap Voltage reference/2 is disabled*/
#define BG_VREF_DIV2_ENABLED		0x0000 /*Band gap Voltage reference/2 is enabled*/
#define BG_VREF_DIV2_MASK			(~BG_VREF_DIV2_DISABLED) /*Band gap Voltage reference/2 is MASKED*/
#endif

#if defined (adc_v1_3) ||defined (adc_v2_1)
#define ENABLE_AN15_DIG             0x8000 /*Enable AN15 in digital mode */
#define ENABLE_AN15_ANA             0x0000 /*Enable AN15 in analog mode */
#elif defined (adc_v1_1)||defined (adc_v1_2) ||defined (adc_v1_5)|| defined (adc_v1_6)||\
     defined (adc_v1_7) || defined (adc_v1_8)
#define BG_VREF_DISABLED            0x8000 /*ADC Band gap Voltage reference is disabled*/
#define BG_VREF_ENABLED             0x0000 /*ADC Band gap voltage reference is enabled*/
#define BG_VREF_MASK                (~BG_VREF_DISABLED)/*ADC Band gap Voltage reference mask*/
#endif

#define ENABLE_ALL_ANA_0_15         0x0000 /*Enable AN0-AN15 in analog mode */
#define ENABLE_ALL_DIG_0_15         0xFFFF /*Enable AN0-AN15 in Digital mode */
#define ENABLE_AN_LOW_MASK             (~0xFFFF )  /* A/D channel0 positive sampleA mask */

#endif

/**** AD1PCFGH register definition ****/
#if defined (adc_v2_1) 
#define ENABLE_VBGDIV2_DIG         0x0001 /*Internal VBG/2 channel enabled for input scan */
#define ENABLE_VBGDIV2_ANA         0x0000 /*Analog channel disabled from input scan*/
#define ENABLE_VBG_DIG             0x0002 /*Internal band gap (VBG) channel enabled for input scan*/
#define ENABLE_VBG_ANA             0x0000 /*Analog channel disabled from input scan*/
#define ENABLE_AN16_DIG             ENABLE_VBGDIV2_DIG /*Internal VBG/2 channel enabled for input scan */
#define ENABLE_AN16_ANA             ENABLE_VBGDIV2_ANA/*Analog channel disabled from input scan*/
#define ENABLE_AN17_DIG             ENABLE_VBG_DIG /*Internal band gap (VBG) channel enabled for input scan*/
#define ENABLE_AN17_ANA             ENABLE_VBG_ANA /*Analog channel disabled from input scan*/
#endif

#define ENABLE_AN_HIGH_MASK         (~0x0FFF )  /* A/D channel0 positive sampleA mask */

/**** ANCFG register definition ****/
#if defined (adc_v3_1)||defined (adc_v3_2)
#define BG_VREF_DIV6_ENABLE         0x0004  /*Bandgap voltage divided-by-six reference (VBG/6) is enabled*/
#define BG_VREF_DIV6_DISABLE        0x0000  /*Bandgap divided-by-six reference (VBG/6) is disabled*/
#define BG_VREF_DIV2_ENABLE         0x0002  /*Bandgap voltage divided-by-two reference (VBG/2) is enabled*/
#define BG_VREF_DIV2_DISABLE        0x0000  /*Bandgap divided-by-two reference (VBG/2) is disabled*/
#endif
#if defined (adc_v3_1) ||defined (adc_v3_2) || defined (adc_v7_1) ||defined (adc_v7_2) 
#define BG_VREF_ENABLE              0x0001  /*Bandgap voltage reference (VBG) is enabled*/
#define BG_VREF_DISABLE             0x0000  /*Bandgap reference (VBG) is disabled*/
#endif

/**** AD1CSSL register definition ****/
#define ADC_SCAN_AN0      			0x0001 /*Enable Input Scan AN0 */
#define ADC_SKIP_SCAN_AN0      		0x0000 /* Disable Input Scan AN0 */
#define ADC_SCAN_AN1      			0x0002 /*Enable Input Scan AN1 */
#define ADC_SKIP_SCAN_AN1      		0x0000 /* Disable Input Scan AN1 */
#ifndef adc_v7_1
#define ADC_SCAN_AN2      			0x0004 /*Enable Input Scan AN2 */
#define ADC_SKIP_SCAN_AN2      		0x0000 /* Disable Input Scan AN2 */
#define ADC_SCAN_AN3      			0x0008 /*Enable Input Scan AN3 */
#define ADC_SKIP_SCAN_AN3      		0x0000 /* Disable Input Scan AN3 */
#define ADC_SCAN_AN4      			0x0010 /*Enable Input Scan AN4 */
#define ADC_SKIP_SCAN_AN4      		0x0000 /* Disable Input Scan AN4 */
#ifndef adc_v7_2
#define ADC_SCAN_AN5      			0x0020 /*Enable Input Scan AN5 */
#define ADC_SKIP_SCAN_AN5      		0x0000 /* Disable Input Scan AN5 */
#endif
#endif

#if defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) || defined (adc_v1_5) || defined (adc_v1_8) ||\
	defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || \
	defined (adc_v7_1) ||defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN6      			0x0040 /*Enable Input Scan AN6 */
#define ADC_SKIP_SCAN_AN6     		0x0000 /* Disable Input Scan AN6 */
#define ADC_SCAN_AN7      			0x0080 /*Enable Input Scan AN7 */
#define ADC_SKIP_SCAN_AN7      		0x0000 /* Disable Input Scan AN7 */
#define ADC_SCAN_AN8      			0x0100 /*Enable Input Scan AN8 */
#define ADC_SKIP_SCAN_AN8      		0x0000 /* Disable Input Scan AN8 */
#endif

#if defined (adc_v1_1) || defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_5) || defined (adc_v1_6) ||\
	defined (adc_v1_7) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) || \
	defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN9      			0x0200 /*Enable Input Scan AN9 */
#define ADC_SKIP_SCAN_AN9      		0x0000 /* Disable Input Scan AN9 */
#endif

#define ADC_SCAN_AN10     			0x0400 /*Enable Input Scan AN10 */
#define ADC_SKIP_SCAN_AN10     		0x0000 /* Disable Input Scan AN10 */
#ifndef adc_v7_1
#define ADC_SCAN_AN11     			0x0800 /*Enable Input Scan AN11 */
#define ADC_SKIP_SCAN_AN11     		0x0000 /* Disable Input Scan AN11 */
#endif

#if defined (adc_v1_1)|| defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) || \
	defined (adc_v1_5) || defined (adc_v1_8) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN12     			0x1000 /*Enable Input Scan AN12 */
#define ADC_SKIP_SCAN_AN12          0x0000 /* Disable Input Scan AN12 */
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || \
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) ||\
	defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN13     			0x2000 /*Enable Input Scan AN13 */
#define ADC_SKIP_SCAN_AN13    		0x0000 /* Disable Input Scan AN13 */
#elif defined (adc_v1_5)|| defined (adc_v1_6) || defined (adc_v1_7) || defined (adc_v1_8) 
#define ADC_SCAN_VOLT_REG           0x2000 /*Band gap Voltage reference is disabled*/
#define ADC_SKIP_SCAN_VOLT_REG      0x0000 /*Band gap voltage reference is enabled*/
#endif

#if defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN14     			0x4000 /*Enable Input Scan AN14 */
#define ADC_SKIP_SCAN_AN14    		0x0000 /* Disable Input Scan AN14 */
#elif defined (adc_v1_5)|| defined (adc_v1_6) || defined (adc_v1_7) || defined (adc_v1_8)
#define ADC_SCAN_BG_VREF_DIV2       0x4000 /*Band gap Voltage reference is disabled*/
#define ADC_SKIP_SCAN_BG_VREF_DIV2  0x0000 /*Band gap voltage reference is enabled*/
#endif

#if  defined (adc_v1_3) || defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||\
	defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) ||\
	defined (adc_v5_2) || defined (adc_v7_1) || defined (adc_v7_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN15    			0x8000 /*Enable Input Scan AN15 */
#define ADC_SKIP_SCAN_AN15    		0x0000 /* Disable Input Scan AN15 */
#elif defined (adc_v1_1)||defined (adc_v1_2) || defined (adc_v1_5)|| defined (adc_v1_6) ||\
      defined (adc_v1_7) || defined (adc_v1_8)
#define ADC_SCAN_BG_VREF            0x8000 /*Band gap Voltage reference is disabled*/
#define ADC_SKIP_SCAN_BG_VREF       0x0000 /*Band gap voltage reference is enabled*/
#endif

#define ENABLE_ALL_INPUT_SCAN       0xFFFF /*Enable Input Scan AN0-AN15 */
#define DISABLE_ALL_INPUT_SCAN      0x0000 /*Disable Input Scan AN0-AN15 */

/****AD1CSSH register definition***/
#if defined (adc_v2_1)
#define ADC_SCAN_VBGDIV2          0x0001 /*Internal VBG/2 channel selected for input scan*/
#define ADC_SKIP_SCAN_VBGDIV2     0x0000 /*Analog channel omitted from input scan*/
#define ADC_SCAN_VBG               0x0002 /*Internal band gap (VBG) channel selected for input scan */
#define ADC_SKIP_SCAN_VBG          0x0000 /*Analog channel omitted from input scan*/
#define ADC_SCAN_AN16     			ADC_SCAN_VBGDIV2 /*Internal VBG/2 channel selected for input scan */
#define ADC_SKIP_SCAN_AN16    		ADC_SKIP_SCAN_VBGDIV2 /* Analog channel omitted from input scan */
#define ADC_SCAN_AN17     			ADC_SCAN_VBG /*Internal band gap (VBG) channel selected for input scan */
#define ADC_SKIP_SCAN_AN17    		ADC_SKIP_SCAN_VBG /*Analog channel omitted from input scan*/
#endif

#if defined (adc_v3_2) || defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) ||\
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN16     			0x0001 /*Enable Input Scan AN16 */
#define ADC_SKIP_SCAN_AN16    		0x0000 /* Disable Input Scan AN16 */
#define ADC_SCAN_AN17     			0x0002 /*Enable Input Scan AN17 */
#define ADC_SKIP_SCAN_AN17    		0x0000 /* Disable Input Scan AN17 */
#endif

#if defined (adc_v3_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN18     			0x0004 /*Enable Input Scan AN18 */
#define ADC_SKIP_SCAN_AN18    		0x0000 /* Disable Input Scan AN18 */
#define ADC_SCAN_AN19     			0x0008 /*Enable Input Scan AN19 */
#define ADC_SKIP_SCAN_AN19    		0x0000 /* Disable Input Scan AN19 */
#define ADC_SCAN_AN20     			0x0010 /*Enable Input Scan AN20 */
#define ADC_SKIP_SCAN_AN20   		0x0000 /* Disable Input Scan AN20 */
#define ADC_SCAN_AN21     			0x0020 /*Enable Input Scan AN21 */
#define ADC_SKIP_SCAN_AN21    		0x0000 /* Disable Input Scan AN21 */
#define ADC_SCAN_AN22     			0x0040 /*Enable Input Scan AN22 */
#define ADC_SKIP_SCAN_AN22    		0x0000 /* Disable Input Scan AN22 */
#define ADC_SCAN_AN23     			0x0080 /*Enable Input Scan AN23 */
#define ADC_SKIP_SCAN_AN23    		0x0000 /* Disable Input Scan AN23 */
#endif

#if defined (adc_v3_1) || defined (adc_v3_2)
#define ADC_SCAN_AN24     			0x0100 /*Enable Input Scan AN24 */
#define ADC_SKIP_SCAN_AN24    		0x0000 /* Disable Input Scan AN24 */
#define ADC_SCAN_AN25     			0x0200 /*Enable Input Scan AN25 */
#define ADC_SKIP_SCAN_AN25    		0x0000 /* Disable Input Scan AN25 */
#endif

#if defined (adc_v3_1) || defined (adc_v3_2) || defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) ||\
	defined (adc_v5_1) || defined (adc_v5_2) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN26     			0x0400 /*Enable Input Scan AN26 */
#define ADC_SKIP_SCAN_AN26    		0x0000 /* Disable Input Scan AN26 */
#define ADC_SCAN_AN27     			0x0800 /*Enable Input Scan AN27 */
#define ADC_SKIP_SCAN_AN27    		0x0000 /* Disable Input Scan AN27 */
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_SCAN_AN28     			0x1000 /*Enable Input Scan AN28 */
#define ADC_SKIP_SCAN_AN28    		0x0000 /* Disable Input Scan AN28 */
#define ADC_SCAN_AN29     			0x2000 /*Enable Input Scan AN29 */
#define ADC_SKIP_SCAN_AN29    		0x0000/* Disable Input Scan AN29 */
#define ADC_SCAN_AN30     			0x4000 /*Enable Input Scan AN30 */
#define ADC_SKIP_SCAN_AN30    		0x0000/* Disable Input Scan AN30 */
#endif

/*****AD1CTMUENL/AD1CTMENL register definition***********/
#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3)
#define ADC_CTMU_AN0     			0x0001 /*CTMU enabled and connected to AN0 */
#define ADC_SKIP_CTMU_AN0    		0x0000 /*CTMU not connected to AN0*/
#define ADC_CTMU_AN1     			0x0002 /*CTMU enabled and connected to AN1 */
#define ADC_SKIP_CTMU_AN1    		0x0000 /*CTMU not connected to AN1*/
#define ADC_CTMU_AN2     			0x0004 /*CTMU enabled and connected to AN2*/
#define ADC_SKIP_CTMU_AN2    		0x0000 /*CTMU not connected to AN2*/
#define ADC_CTMU_AN3     			0x0008/*CTMU enabled and connected to AN3 */
#define ADC_SKIP_CTMU_AN3    		0x0000 /*CTMU not connected to AN3*/
#define ADC_CTMU_AN4     			0x0010 /*CTMU enabled and connected to AN4*/
#define ADC_SKIP_CTMU_AN4    		0x0000 /*CTMU not connected to AN4*/
#define ADC_CTMU_AN5     			0x0020 /*CTMU enabled and connected to AN5 */
#define ADC_SKIP_CTMU_AN5    		0x0000 /*CTMU not connected to AN5*/
#define ADC_CTMU_AN6     			0x0040 /*CTMU enabled and connected to AN6*/
#define ADC_SKIP_CTMU_AN6    		0x0000 /*CTMU not connected to AN6*/
#define ADC_CTMU_AN7     			0x0080 /*CTMU enabled and connected to AN7 */
#define ADC_SKIP_CTMU_AN7    		0x0000 /*CTMU not connected to AN7*/
#define ADC_CTMU_AN8     			0x0100 /*CTMU enabled and connected to AN8 */
#define ADC_SKIP_CTMU_AN8    		0x0000 /*CTMU not connected to AN8*/
#define ADC_CTMU_AN9     			0x0200 /*CTMU enabled and connected to AN9*/
#define ADC_SKIP_CTMU_AN9    		0x0000 /*CTMU not connected to AN9*/
#define ADC_CTMU_AN10     			0x0400 /*CTMU enabled and connected to AN10*/
#define ADC_SKIP_CTMU_AN10    		0x0000 /*CTMU not connected to AN10*/
#define ADC_CTMU_AN11     			0x0800 /*CTMU enabled and connected to AN11*/
#define ADC_SKIP_CTMU_AN11    		0x0000 /*CTMU not connected to AN11*/
#define ADC_CTMU_AN12     			0x1000 /*CTMU enabled and connected to AN12*/
#define ADC_SKIP_CTMU_AN12    		0x0000 /*CTMU not connected to AN12*/
#define ADC_CTMU_AN13     			0x2000 /*CTMU enabled and connected to AN13*/
#define ADC_SKIP_CTMU_AN13    		0x0000 /*CTMU not connected to AN13*/
#define ADC_CTMU_AN14     			0x4000 /*CTMU enabled and connected to AN14*/
#define ADC_SKIP_CTMU_AN14    		0x0000 /*CTMU not connected to AN14*/
#define ADC_CTMU_AN15     			0x8000 /*CTMU enabled and connected to AN15*/
#define ADC_SKIP_CTMU_AN15    		0x0000 /*CTMU not connected to AN15*/

/*****AD1CTMUENH/AD1CTMENH  register definition***********/
#define ADC_CTMU_AN16     			0x0001 /*CTMU enabled and connected to AN16 */
#define ADC_SKIP_CTMU_AN16    		0x0000 /*CTMU not connected to AN16*/
#define ADC_CTMU_AN17     			0x0002 /*CTMU enabled and connected to AN17 */
#define ADC_SKIP_CTMU_AN17    		0x0000 /*CTMU not connected to AN17*/
#define ADC_CTMU_AN26     			0x0400 /*CTMU enabled and connected to AN26 */
#define ADC_SKIP_CTMU_AN26    		0x0000 /*CTMU not connected to AN26*/
#define ADC_CTMU_AN27     			0x0800 /*CTMU enabled and connected to AN27 */
#define ADC_SKIP_CTMU_AN27    		0x0000 /*CTMU not connected to AN27*/
#define ADC_CTMU_AN28     			0x1000 /*CTMU enabled and connected to AN28 */
#define ADC_SKIP_CTMU_AN28    		0x0000 /*CTMU not connected to AN28*/
#define ADC_CTMU_AN29     			0x2000 /*CTMU enabled and connected to AN29 */
#define ADC_SKIP_CTMU_AN29    		0x0000 /*CTMU not connected to AN29*/
#define ADC_CTMU_AN30     			0x4000 /*CTMU enabled and connected to AN30 */
#define ADC_SKIP_CTMU_AN30    		0x0000 /*CTMU not connected to AN30*/
#endif

/*** Interrupt **/
#define ADC_INT_PRI_0               0x0000 /* ADC interrupts priority 0 */
#define ADC_INT_PRI_1               0x0001 /* ADC interrupts priority 1 */
#define ADC_INT_PRI_2               0x0002 /* ADC interrupts priority 2 */
#define ADC_INT_PRI_3               0x0003 /* ADC interrupts priority 3 */
#define ADC_INT_PRI_4               0x0004 /* ADC interrupts priority 4 */
#define ADC_INT_PRI_5               0x0005 /* ADC interrupts priority 5 */
#define ADC_INT_PRI_6               0x0006 /* ADC interrupts priority 6 */
#define ADC_INT_PRI_7               0x0007 /* ADC interrupts priority 7 */
#define ADC_INT_PRI_MASK            (~ADC_INT_PRI_7)/* ADC interrupts priority mask */

#define ADC_INT_ENABLE              0x0008 /* enable ADC interrupts */
#define ADC_INT_DISABLE             0x0000 /* disable ADC interrupts */
#define ADC_INT_MASK                (~ADC_INT_ENABLE) /* ADC interrupts mask */

#endif /* USE_AND_OR */

/***********************************************************************
Macro      : EnableIntADC1
Overview   : This macro enables the ADC interrupt.
Parameters : None
Remarks    : This macro sets ADC Interrupt Enable bit of Interrupt
             Enable Control Register.
************************************************************************/
#define EnableIntADC1                (IEC0bits.AD1IE = 1)

/***********************************************************************
Macro      : DisableIntADC1
Overview   : This macro disables the ADC interrupt.
Parameters : None
Remarks    : This macro clears ADC Interrupt Enable bit of Interrupt
             Enable Control register.
************************************************************************/
#define DisableIntADC1                (IEC0bits.AD1IE = 0)

/***********************************************************************
Macro      : SetPriorityIntADC1(priority)
Overview   : This macro sets priority for ADC interrupt.
Parameters : priority - This input parameter is the level of interrupt priority
Remarks    : This macro sets ADC Interrupt Priority bits of Interrupt
             Priority Control register.
************************************************************************/
#define SetPriorityIntADC1(priority)     (IPC3bits.AD1IP = priority)

/********************************************************************
Macro       : ADC1_Clear_Intr_Status_Bit
Overview    : Macro to Clear ADC Interrupt Status bit
Parameters  : None
Remarks     : None
*******************************************************************/
#define ADC1_Clear_Intr_Status_Bit (IFS0bits.AD1IF = 0)

/************************************************************************
Macro       : StopSampADC1
Overview    : This function is identical to ConvertADC10
Parameters  : None
Remarks     : This macro clears the ADCON1<SAMP> bit and thus stops sampling
              and starts conversion.
**************************************************************************/
#define StopSampADC1                 ConvertADC10

/************************************************************************
Macro       : BusySampADC1
Overview    : This function is identical to ConvertADC10
Parameters  : None
Remarks     : This macro clears the ADCON1<SAMP> bit and thus stops sampling
              and starts conversion.
**************************************************************************/
#define BusySampADC1              !(AD1CON1bits.SAMP)

/************************************************************************
Macro       : EnableADC1
Overview    : This function enables the ADC module
Parameters  : None
Remarks     : None.
**************************************************************************/
#define EnableADC1                (AD1CON1bits.ADON = 1)

/************************************************************************
Macro       : DisableADC1
Overview    : This function disables the ADC module
Parameters  : None
Remarks     : None.
**************************************************************************/
#define DisableADC1                (AD1CON1bits.ADON = 0)

#if defined (adc_v5_1)|| defined (adc_v5_2) 
/***********************************************************************
Macro      : EnableDMAADC1
Overview   : This macro enables the DMA functionality of ADC.
Parameters : None
Remarks    : This macro sets  the DMA functionality of ADC in AD1CON1 register.
************************************************************************/
#define EnableDMAADC1               (AD1CON1bits.DMAEN = 1)

/***********************************************************************
Macro      : DisableDMA_ADC1
Overview   : This macro disables the DMA functionality of ADC.
Parameters : None
Remarks    : This macro disables the DMA functionality of ADC in AD1CON1 register.
************************************************************************/
#define DisableDMAADC1               (AD1CON1bits.DMAEN = 0)

/***********************************************************************
Macro      : EnableDMAEXTNDBUFMODE  
Overview   : This macro enables the Extended Buffer mode of DMA functionality in ADC.
Parameters : None
Remarks    : This macro enables the Extended Buffer mode of DMA functionality 
			of ADC in AD1CON1 register.
************************************************************************/
#define EnableDMAEXTNDBUFMODE           (AD1CON1bits.DMABM = 1)

/***********************************************************************
Macro      : EnableDMAPIAMODE  
Overview   : This macro enables the Peripheral Indirect Adressing mode of 
			DMA functionality in ADC.
Parameters : None
Remarks    : This macro enables the Peripheral Indirect Adressing 
			of DMA functionality of ADC in AD1CON1 register.
************************************************************************/
#define EnableDMAPIAMODE                 (AD1CON1bits.DMABM = 0)
#endif

#if defined (adc_v1_1) || defined (adc_v1_2) || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_5) || defined (adc_v1_6) || defined (adc_v1_7) || defined (adc_v1_8) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define OpenADC10  OpenADC10_v1
#endif
void __attribute__ ((section (".libperi")))OpenADC10_v1(unsigned int config1,unsigned int config2,
                                unsigned int config3,unsigned int configport,unsigned int configscan);
#endif
	

#if defined (adc_v2_1) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define OpenADC10  OpenADC10_v2
#endif
void __attribute__ ((section (".libperi")))OpenADC10_v2(unsigned int config1, unsigned int config2,unsigned int config3,
                                                        unsigned int configport_low, unsigned int configport_high,
                                                        unsigned int configscan_low, unsigned int configscan_high);
#endif

#if defined (adc_v3_1) || defined (adc_v3_2) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define OpenADC10  OpenADC10_v3
#endif
void __attribute__ ((section (".libperi")))OpenADC10_v3(unsigned int config1, unsigned int config2,unsigned int config3,
                                                        unsigned int config_bg,unsigned int configscan_low,
														unsigned int configscan_high);
#endif

#if defined (adc_v4_1) || defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v8_1) || defined (adc_v8_2) || defined (adc_v8_3) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define OpenADC10  OpenADC10_v4
#endif
void __attribute__ ((section (".libperi")))OpenADC10_v4(unsigned int config1,unsigned int config2,
            unsigned int config3,unsigned int config4,unsigned int configctmu_low,unsigned int configctmu_high,unsigned int configscan_low,unsigned int configscan_high);
#endif

#if defined (adc_v5_1)||defined (adc_v5_2)|| defined (LIB_BUILD)
#ifndef LIB_BUILD
#define OpenADC10  OpenADC10_v5
#endif
void __attribute__ ((section (".libperi")))OpenADC10_v5(unsigned int config1,unsigned int config2,
            unsigned int config3,unsigned int config4,unsigned int config5,unsigned int configctmu_low,unsigned int configctmu_high,unsigned int configscan_low,unsigned int configscan_high);			
#endif

#if defined (adc_v6_1)||defined (adc_v6_2)|| defined (LIB_BUILD)
#ifndef LIB_BUILD
#define OpenADC10  OpenADC10_v6
#define SetChanADC10	SetChanADC10_v2
#endif
void __attribute__ ((section (".libperi")))OpenADC10_v6(unsigned int config1,unsigned int config2,
            unsigned int config3,unsigned int configport_low,unsigned int configscan_low);	
/* Set A/D to specified channel */
void __attribute__ ((section (".libperi")))SetChanADC10_v2(unsigned int channel0, unsigned int channel123);
#endif

#if defined (adc_v7_1) || defined (adc_v7_2) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define OpenADC10  OpenADC10_v7
#endif
void __attribute__ ((section (".libperi")))OpenADC10_v7(unsigned int config1, unsigned int config2,unsigned int config3,
                                                        unsigned int config_bg,unsigned int configscan_low); 													
#endif


#if defined (adc_v1_1) || defined (adc_v1_2)  || defined (adc_v1_3) || defined (adc_v1_4) ||\
	defined (adc_v1_6) || defined (adc_v1_5) || defined (adc_v1_7) || defined (adc_v1_8) ||\
	defined (adc_v2_1) || defined (adc_v3_1) || defined (adc_v3_2) ||defined (adc_v4_1) ||\
	defined (adc_v4_2) || defined (adc_v4_3) || defined (adc_v5_1) || defined (adc_v5_2) ||\
	defined (adc_v7_1) || defined (adc_v7_2) || defined (adc_v8_1) || defined (adc_v8_2) ||\
	defined (adc_v8_3) || defined (LIB_BUILD)
/* Set A/D to specified channel */
void __attribute__ ((section (".libperi")))SetChanADC10(unsigned int channel0);
#endif

void __attribute__ ((section (".libperi")))ConvertADC10(void);

/* Read A/D result */
unsigned int __attribute__ ((section (".libperi")))ReadADC10(unsigned char bufIndex);

/* Turn off A/D */
void __attribute__ ((section (".libperi")))CloseADC10(void);

/* Check status of A/D conversion */
char __attribute__ ((section (".libperi")))BusyADC10(void) ;

void __attribute__ ((section (".libperi")))ConfigIntADC10(unsigned int config);

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif 

#endif 
