/********************************************************************/
/*              Header for 12 bit ADC module library functions      */
/*                    for 33F/24H/33E/24E devices only              */
/********************************************************************/

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

#ifndef __ADC_H
#define __ADC_H

/* List of SFRs for ADC */
/* This list contains the SFRs with default (POR) values to be used for configuring ADC */
/* The user can modify this based on the requirement */

#define AD1CON1_VALUE                0x0000
#define AD1CON2_VALUE                0x0000
#define AD1CON3_VALUE                0x0000
#define AD1CON4_VALUE                0x0000
#define AD1CHS123_VALUE              0x0000
#define AD1CH0_VALUE                 0x0000
#define AD1CSSH_VALUE                0x0000
#define AD1CSSL_VALUE                0x0000
#define AD1PCFGH_VALUE               0x0000
#define AD1PCFGL_VALUE               0x0000

#ifdef _AD2IF

#define AD2CON1_VALUE                0x0000
#define AD2CON2_VALUE                0x0000
#define AD2CON3_VALUE                0x0000
#define AD2CON4_VALUE                0x0000
#define AD2CHS123_VALUE              0x0000
#define AD2CH0_VALUE                 0x0000
#define AD2CSSH_VALUE                0x0000
#define AD2CSSL_VALUE                0x0000
#define AD2PCFGH_VALUE               0x0000
#define AD2PCFGL_VALUE               0x0000

#endif

/* AD1CON1 and AD2CON1 Configuration Bit Definitions To Be used With config1 in OpenADCx.c */
#define ADC_MODULE_ON               0xFFFF /* A/D Converter on */
#define ADC_MODULE_OFF              0x7FFF /* A/D Converter off */
#define ADC_IDLE_CONTINUE           0xDFFF /* A/D Operate in Idle mode */
#define ADC_IDLE_STOP               0xFFFF /* A/D Stop in Idle mode */

#ifdef _AD12B
#define ADC_ADDMABM_ORDER           0XFFFF /*DMA buffers are written in the order of conversion */
#define ADC_ADDMABM_SCATTR          0xEFFF /* DMA buffers are written in Scatter/Gather mode */

#define ADC_AD12B_12BIT             0xFFFF /* 12 bit, 1-channel ADC operation */
#define ADC_AD12B_10BIT             0xFBFF /* 10 bit, 4-channel ADC operation */
#endif

#define ADC_FORMAT_SIGN_FRACT       0xFFFF /* A/D data format signed fractional */
#define ADC_FORMAT_FRACT            0xFEFF /* A/D data format fractional */
#define ADC_FORMAT_SIGN_INT         0xFDFF /* A/D data format signed integer */
#define ADC_FORMAT_INTG             0xFCFF /* A/D data format integer */

#ifdef _SSRCG
/* SSRC<2:0> and SSRCG (Combined) bits defines */
#ifdef _PTGMD
#define ADC_SSRC_PTGO15				0xFFDF /* SSRC = 110 & SSRCG = 1 PTGO15 primary trigger compare ends sampling and starts conversion */
#define ADC_SSRC_PTGO14				0xFFDF /* SSRC = 101 & SSRCG = 1 PTGO14 primary trigger compare ends sampling and starts conversion */
#define ADC_SSRC_PTGO13				0xFFDF /* SSRC = 100 & SSRCG = 1 PTGO13 primary trigger compare ends sampling and starts conversion */
#define ADC_SSRC_PTGO12				0xFFDF /* SSRC = 011 & SSRCG = 1 PTGO12 primary trigger compare ends sampling and starts conversion */
#else
#define ADC_SSRC_PWM7				0xFFDF /* SSRC = 110 & SSRCG = 1 PWM Generator 7 primary trigger compare ends sampling and starts conversion */
#define ADC_SSRC_PWM6				0xFFBF /* SSRC = 101 & SSRCG = 1 PWM Generator 6 primary trigger compare ends sampling and starts conversion */
#define ADC_SSRC_PWM5				0xFF9F /* SSRC = 100 & SSRCG = 1 PWM Generator 5 primary trigger compare ends sampling and starts conversion */
#define ADC_SSRC_PWM4				0xFF7F /* SSRC = 011 & SSRCG = 1 PWM Generator 4 primary trigger compare ends sampling and starts conversion */
#endif
#define ADC_SSRC_PWM3				0xFF5F /* SSRC = 010 & SSRCG = 1 PWM Generator 3 primary trigger compare ends sampling and starts conversion */
#define ADC_SSRC_PWM2				0xFF3F /* SSRC = 001 & SSRCG = 1 PWM Generator 2 primary trigger compare ends sampling and starts conversion */
#define ADC_SSRC_PWM1				0xFF1F /* SSRC = 000 & SSRCG = 1 PWM Generator 1 primary trigger compare ends sampling and starts conversion */
#define ADC_SSRC_AUTO				0xFFEF /* SSRC = 111 & SSRCG = 0 Internal counter ends sampling and starts conversion (auto-convert) */
#ifdef _CTMUIF
#define ADC_SSRC_CTMU				0xFFCF /* SSRC = 110 & SSRCG = 0 CTMU ends sampling and starts conversion */
#endif
#define ADC_SSRC_SEC_SEVT			0xFFAF /* SSRC = 101 & SSRCG = 0 PWM secondary Special Event Trigger ends sampling and starts conversion */
#define ADC_SSRC_TMR5				0xFF8F /* SSRC = 100 & SSRCG = 0 Timer 5 compare ends sampling and starts conversion */
#define ADC_SSRC_PRI_SEVT			0xFF6F /* SSRC = 011 & SSRCG = 0 PWM primary Special Event Trigger ends sampling and starts conversion */
#define ADC_SSRC_TMR3				0xFF4F /* SSRC = 010 & SSRCG = 0 Timer 3 compare ends sampling and starts conversion */
#define ADC_SSRC_INT0				0xFF2F /* SSRC = 001 & SSRCG = 0 Active transition on the INT0 pin ends sampling and starts conversion */
#define ADC_SSRC_MANUAL				0xFF0F /* SSRC = 000 & SSRCG = 0 Clearing the Sample bit (SAMP) ends sampling and starts conversion (Manual mode) */
#else
/* SSRC<2:0> bit defines */
#define ADC_CLK_AUTO                0xFFFF /* Internal counter ends sampling and starts conversion (Auto convert) */
#ifndef _CTMUIF
#define ADC_CLK_CTMU				0xFFDF /* CTMU ends sampling and starts conversion */
#endif
#define ADC_CLK_MPWM                0xFF7F /* MPWM interval ends sampling and starts conversion */
#define ADC_CLK_TMR                 0xFF5F /* GP Timer compare ends sampling and starts conversion */
#define ADC_CLK_INT0                0xFF3F /* Active transition on INTx ends sampling and starts conversion */
#define ADC_CLK_MANUAL              0xFF1F /* Clearing sample (SAMP) bit ends sampling and starts conversion */
#endif

#define ADC_SIMULTANEOUS            0xFFFF /* Simultaneous sampling of CH0, CH1, CH2 and CH3 based on CHPS and AD12B bits*/
#define ADC_MULTIPLE                0XFFF7 /* Samples multiple channels individually in sequence */

#define ADC_AUTO_SAMPLING_ON        0xFFFF /* Sampling begins immediately after last conversion */
#define ADC_AUTO_SAMPLING_OFF       0xFFFB /* Sampling begins when SAMP bit is set */

#define ADC_SAMP_ON                 0xFFFF /* sample / hold amplifiers are sampling */
#define ADC_SAMP_OFF                0xFFFD /* sample / hold amplifiers are holding */

/* defines for the AD1CON2 and AD2CON2 registers To Be used With config2 in OpenADCx.c */
#ifdef _C5EVT
#define ADC_VREF_AVDD_AVSS          0x1FFF /* A/D Voltage reference configuration Vref+ is AVdd and Vref- is AVss */
#define ADC_VREF_EXT_AVSS           0x3FFF /* A/D Voltage reference configuration Vref+ external and Vref- is AVss */
#define ADC_VREF_AVDD_EXT           0x5FFF /* A/D Voltage reference configuration Vref+ AVdd and Vref- external */
#define ADC_VREF_EXT_EXT            0x7FFF /* A/D Voltage reference configuration both Vref+ and Vref- are external */
#define ADC_OFFCAL_NORMAL			0xEFFF /* + and – inputs of channel Sample-and-Hold normal */
#define ADC_OFFCAL_AVSS				0xFFFF /* + and – inputs of channel Sample-and-Hold are connected to AVSS */
#define ADC_SCAN_ON                 0xFFFF /* A/D Scan Input Selections for CH0 during SAMPLE A */
#define ADC_SCAN_OFF                0xFBFF /* A/D Do notScan Input Selections for CH0+ during SAMPLE A */
#define ADC_SELECT_CHAN_0123        0xFFFF /* Converts CH0, CH1, CH2 and CH3 */
#define ADC_SELECT_CHAN_01          0xFDFF /* Converts CH0 and CH1 */
#define ADC_SELECT_CHAN_0           0xFCFF /* Converts CH0 */
#define ADC_BUF_FILL_0x8_0xF        0xFFFF /*ADC is currently filling buffer 0x8-0xF*/
#define ADC_BUF_FILL_0x0_0x7        0xFF7F /*ADC is currently filling buffer 0x0-0x7 */
#else
#define ADC_VREF_AVDD_AVSS          0x0FFF /* A/D Voltage reference configuration Vref+ is AVdd and Vref- is AVss */
#define ADC_VREF_EXT_AVSS           0x2FFF /* A/D Voltage reference configuration Vref+ external and Vref- is AVss */
#define ADC_VREF_AVDD_EXT           0x4FFF /* A/D Voltage reference configuration Vref+ AVdd and Vref- external */
#define ADC_VREF_EXT_EXT            0x6FFF /* A/D Voltage reference configuration both Vref+ and Vref- are external */
#define ADC_SCAN_ON                 0xEFFF /* A/D Scan Input Selections for CH0 during SAMPLE A */
#define ADC_SCAN_OFF                0xEBFF /* A/D Do notScan Input Selections for CH0+ during SAMPLE A */
#define ADC_SELECT_CHAN_0123        0xEFFF /* Converts CH0, CH1, CH2 and CH3 */
#define ADC_SELECT_CHAN_01          0xEDFF /* Converts CH0 and CH1 */
#define ADC_SELECT_CHAN_0           0xECFF /* Converts CH0 */
#define ADC_BUF_FILL_0x8_0xF        0xEFFF /*ADC is currently filling buffer 0x8-0xF*/
#define ADC_BUF_FILL_0x0_0x7        0xEF7F /*ADC is currently filling buffer 0x0-0x7 */
#endif

#if defined (_SMPI4)
 
/* constants representing the SMPI<4:0> bits */
#define ADC_DMA_ADD_INC_1       0xEF83 /* DMA address increment after conversion of each sample */
#define ADC_DMA_ADD_INC_2       0xEF87 /* DMA address increment after conversion of 2 samples */
#define ADC_DMA_ADD_INC_3       0xEF8B /* DMA address increment after conversion of 3 samples */
#define ADC_DMA_ADD_INC_4       0xEF8F /* DMA address increment after conversion of 4 samples */
#define ADC_DMA_ADD_INC_5       0xEF93 /* DMA address increment after conversion of 5 samples */
#define ADC_DMA_ADD_INC_6       0xEF97 /* DMA address increment after conversion of 6 samples */
#define ADC_DMA_ADD_INC_7       0xEF9B /* DMA address increment after conversion of 7 samples */
#define ADC_DMA_ADD_INC_8       0xEF9F /* DMA address increment after conversion of 8 samples */
#define ADC_DMA_ADD_INC_9       0xEFA3 /* DMA address increment after conversion of 9 samples */
#define ADC_DMA_ADD_INC_10      0xEFA7 /* DMA address increment after conversion of 10 samples */
#define ADC_DMA_ADD_INC_11      0xEFAB /* DMA address increment after conversion of 11 samples */
#define ADC_DMA_ADD_INC_12      0xEFAF /* DMA address increment after conversion of 12 samples */
#define ADC_DMA_ADD_INC_13      0xEFB3 /* DMA address increment after conversion of 13 samples */
#define ADC_DMA_ADD_INC_14      0xEFB7 /* DMA address increment after conversion of 14 samples */
#define ADC_DMA_ADD_INC_15      0xEFBB /* DMA address increment after conversion of 15 samples */
#define ADC_DMA_ADD_INC_16      0xEFBF /* DMA address increment after conversion of 16 samples */
#define ADC_DMA_ADD_INC_17      0xEFC3 /* DMA address increment after conversion of 17 samples */
#define ADC_DMA_ADD_INC_18      0xEFC7 /* DMA address increment after conversion of 18 samples */
#define ADC_DMA_ADD_INC_19      0xEFCB /* DMA address increment after conversion of 19 samples */
#define ADC_DMA_ADD_INC_20      0xEFCF /* DMA address increment after conversion of 20 samples */
#define ADC_DMA_ADD_INC_21      0xEFD3 /* DMA address increment after conversion of 21 samples */
#define ADC_DMA_ADD_INC_22      0xEFD7 /* DMA address increment after conversion of 22 samples */
#define ADC_DMA_ADD_INC_23      0xEFDB /* DMA address increment after conversion of 23 samples */
#define ADC_DMA_ADD_INC_24      0xEFDF /* DMA address increment after conversion of 24 samples */
#define ADC_DMA_ADD_INC_25      0xEFE3 /* DMA address increment after conversion of 25 samples */
#define ADC_DMA_ADD_INC_26      0xEFE7 /* DMA address increment after conversion of 26 samples */
#define ADC_DMA_ADD_INC_27      0xEFEB /* DMA address increment after conversion of 27 samples */
#define ADC_DMA_ADD_INC_28      0xEFEF /* DMA address increment after conversion of 28 samples */
#define ADC_DMA_ADD_INC_29      0xEFF3 /* DMA address increment after conversion of 29 samples */
#define ADC_DMA_ADD_INC_30      0xEFF7 /* DMA address increment after conversion of 30 samples */
#define ADC_DMA_ADD_INC_31      0xEFFB /* DMA address increment after conversion of 31 samples */
#define ADC_DMA_ADD_INC_32      0xEFFF /* DMA address increment after conversion of 32 samples */

#define ADC_SETS_OF_SAMPLES_PER_INT_1  	ADC_DMA_ADD_INC_1  
#define ADC_SETS_OF_SAMPLES_PER_INT_2  	ADC_DMA_ADD_INC_2  
#define ADC_SETS_OF_SAMPLES_PER_INT_3  	ADC_DMA_ADD_INC_3  
#define ADC_SETS_OF_SAMPLES_PER_INT_4  	ADC_DMA_ADD_INC_4  
#define ADC_SETS_OF_SAMPLES_PER_INT_5  	ADC_DMA_ADD_INC_5  
#define ADC_SETS_OF_SAMPLES_PER_INT_6  	ADC_DMA_ADD_INC_6  
#define ADC_SETS_OF_SAMPLES_PER_INT_7  	ADC_DMA_ADD_INC_7  
#define ADC_SETS_OF_SAMPLES_PER_INT_8  	ADC_DMA_ADD_INC_8  
#define ADC_SETS_OF_SAMPLES_PER_INT_9  	ADC_DMA_ADD_INC_9  
#define ADC_SETS_OF_SAMPLES_PER_INT_10 	ADC_DMA_ADD_INC_10 
#define ADC_SETS_OF_SAMPLES_PER_INT_11 	ADC_DMA_ADD_INC_11 
#define ADC_SETS_OF_SAMPLES_PER_INT_12 	ADC_DMA_ADD_INC_12 
#define ADC_SETS_OF_SAMPLES_PER_INT_13 	ADC_DMA_ADD_INC_13 
#define ADC_SETS_OF_SAMPLES_PER_INT_14 	ADC_DMA_ADD_INC_14 
#define ADC_SETS_OF_SAMPLES_PER_INT_15 	ADC_DMA_ADD_INC_15 
#define ADC_SETS_OF_SAMPLES_PER_INT_16 	ADC_DMA_ADD_INC_16 
#define ADC_SETS_OF_SAMPLES_PER_INT_17 	ADC_DMA_ADD_INC_17
#define ADC_SETS_OF_SAMPLES_PER_INT_18 	ADC_DMA_ADD_INC_18
#define ADC_SETS_OF_SAMPLES_PER_INT_19 	ADC_DMA_ADD_INC_19
#define ADC_SETS_OF_SAMPLES_PER_INT_20 	ADC_DMA_ADD_INC_20
#define ADC_SETS_OF_SAMPLES_PER_INT_21 	ADC_DMA_ADD_INC_21
#define ADC_SETS_OF_SAMPLES_PER_INT_22 	ADC_DMA_ADD_INC_22
#define ADC_SETS_OF_SAMPLES_PER_INT_23 	ADC_DMA_ADD_INC_23
#define ADC_SETS_OF_SAMPLES_PER_INT_24 	ADC_DMA_ADD_INC_24
#define ADC_SETS_OF_SAMPLES_PER_INT_25 	ADC_DMA_ADD_INC_25
#define ADC_SETS_OF_SAMPLES_PER_INT_26 	ADC_DMA_ADD_INC_26
#define ADC_SETS_OF_SAMPLES_PER_INT_27 	ADC_DMA_ADD_INC_27
#define ADC_SETS_OF_SAMPLES_PER_INT_28 	ADC_DMA_ADD_INC_28
#define ADC_SETS_OF_SAMPLES_PER_INT_29 	ADC_DMA_ADD_INC_29
#define ADC_SETS_OF_SAMPLES_PER_INT_30 	ADC_DMA_ADD_INC_30
#define ADC_SETS_OF_SAMPLES_PER_INT_31 	ADC_DMA_ADD_INC_31
#define ADC_SETS_OF_SAMPLES_PER_INT_32 	ADC_DMA_ADD_INC_32

#else

/* constants representing the SMPI<3:0> bits */
#define ADC_SAMPLES_PER_INT_1   0xEFC3 /* A/D Interrupt at the completion of conversion for each sample */
#define ADC_SAMPLES_PER_INT_2   0xEFC7 /* A/D Interrupt at the completion of conversion for each 2nd sample */
#define ADC_SAMPLES_PER_INT_3   0xEFCB /* A/D interrupt at the completion of conversion for each 3rd sample */
#define ADC_SAMPLES_PER_INT_4   0xEFCF /* A/D interrupt at the completion of conversion for each 4th sample */
#define ADC_SAMPLES_PER_INT_5   0xEFD3 /* A/D interrupt at the completion of conversion for each 5th sample */
#define ADC_SAMPLES_PER_INT_6   0xEFD7 /* A/D interrupt at the completion of conversion for each 6th sample */
#define ADC_SAMPLES_PER_INT_7   0xEFDB /* A/D interrupt at the completion of conversion for each 7th sample */
#define ADC_SAMPLES_PER_INT_8   0xEFDF /* A/D interrupt at the completion of conversion for each 8th sample */
#define ADC_SAMPLES_PER_INT_9   0xEFE3 /* A/D interrupt at the completion of conversion for each 9th sample */
#define ADC_SAMPLES_PER_INT_10  0xEFE7 /* A/D interrupt at the completion of conversion for each 10th sample */
#define ADC_SAMPLES_PER_INT_11  0xEFEB /* A/D interrupt at the completion of conversion for each 11th sample */
#define ADC_SAMPLES_PER_INT_12  0xEFEF /* A/D interrupt at the completion of conversion for each 12th sample */
#define ADC_SAMPLES_PER_INT_13  0xEFF3 /* A/D interrupt at the completion of conversion for each 13th sample */
#define ADC_SAMPLES_PER_INT_14  0xEFF7 /* A/D interrupt at the completion of conversion for each 14th sample */
#define ADC_SAMPLES_PER_INT_15  0xEFFB /* A/D interrupt at the completion of conversion for each 15th sample */
#define ADC_SAMPLES_PER_INT_16  0xEFFF /* A/D interrupt at the completion of conversion for each 16th sample */

#define ADC_DMA_ADD_INC_1       0xEFC3 /* DMA address increment after conversion of each sample */
#define ADC_DMA_ADD_INC_2       0xEFC7 /* DMA address increment after conversion of 2 samples */
#define ADC_DMA_ADD_INC_3       0xEFCB /* DMA address increment after conversion of 3 samples */
#define ADC_DMA_ADD_INC_4       0xEFCF /* DMA address increment after conversion of 4 samples */
#define ADC_DMA_ADD_INC_5       0xEFD3 /* DMA address increment after conversion of 5 samples */
#define ADC_DMA_ADD_INC_6       0xEFD7 /* DMA address increment after conversion of 6 samples */
#define ADC_DMA_ADD_INC_7       0xEFDB /* DMA address increment after conversion of 7 samples */
#define ADC_DMA_ADD_INC_8       0xEFDF /* DMA address increment after conversion of 8 samples */
#define ADC_DMA_ADD_INC_9       0xEFE3 /* DMA address increment after conversion of 9 samples */
#define ADC_DMA_ADD_INC_10      0xEFE7 /* DMA address increment after conversion of 10 samples */
#define ADC_DMA_ADD_INC_11      0xEFEB /* DMA address increment after conversion of 11 samples */
#define ADC_DMA_ADD_INC_12      0xEFEF /* DMA address increment after conversion of 12 samples */
#define ADC_DMA_ADD_INC_13      0xEFF3 /* DMA address increment after conversion of 13 samples */
#define ADC_DMA_ADD_INC_14      0xEFF7 /* DMA address increment after conversion of 14 samples */
#define ADC_DMA_ADD_INC_15      0xEFFB /* DMA address increment after conversion of 15 samples */
#define ADC_DMA_ADD_INC_16      0xEFFF /* DMA address increment after conversion of 16 samples */

#endif

/* BUFM bit defines */
#define ADC_ALT_BUF_ON              0xEFFF /* Buffer configured as 2 8-word buffers */
#define ADC_ALT_BUF_OFF             0xEFFD /* Buffer configured as 1 16-word buffer */
/* A/D Uses channel input selects for SAMPLE A on first sample and SAMPLE B on next sample */
#define ADC_ALT_INPUT_ON            0xEFFF /* alternate between MUXA and MUXB */
/* A/D Always uses channel input selects for SAMPLE A */
#define ADC_ALT_INPUT_OFF           0xEFFE /* use MUXA only */

/* defines for AD1CON3 and AD2CON3 registers To Be used With config3 in OpenADCx.c */
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

/* A/D Conversion Clock Source internal RC Clock */
#define ADC_CONV_CLK_INTERNAL_RC    0xFFFF
/* A/D Conversion Clock Source Clock derived from system clock */
#define ADC_CONV_CLK_SYSTEM         0x7FFF

#ifdef _AD12B
/* A/D conversion clock select bit ADCS<7:0>*/
#define ADC_CONV_CLK_256Tcy        0xFFFF  
#define ADC_CONV_CLK_255Tcy        0xFFFE  
#define ADC_CONV_CLK_254Tcy        0xFFFD  
#define ADC_CONV_CLK_253Tcy        0xFFFC  
#define ADC_CONV_CLK_252Tcy        0xFFFB
#define ADC_CONV_CLK_251Tcy        0xFFFA
#define ADC_CONV_CLK_250Tcy        0xFFF9
#define ADC_CONV_CLK_249Tcy        0xFFF8
#define ADC_CONV_CLK_248Tcy        0xFFF7
#define ADC_CONV_CLK_247Tcy        0xFFF6
#define ADC_CONV_CLK_246Tcy        0xFFF5
#define ADC_CONV_CLK_245Tcy        0xFFF4
#define ADC_CONV_CLK_244Tcy        0xFFF3
#define ADC_CONV_CLK_243Tcy        0xFFF2
#define ADC_CONV_CLK_242Tcy        0xFFF1
#define ADC_CONV_CLK_241Tcy        0xFFF0
#define ADC_CONV_CLK_240Tcy        0xFFEF
#define ADC_CONV_CLK_239Tcy        0xFFEE
#define ADC_CONV_CLK_238Tcy        0xFFED
#define ADC_CONV_CLK_237Tcy        0xFFEC
#define ADC_CONV_CLK_236Tcy        0xFFEB
#define ADC_CONV_CLK_235Tcy        0xFFEA
#define ADC_CONV_CLK_234Tcy        0xFFE9
#define ADC_CONV_CLK_233Tcy        0xFFE8
#define ADC_CONV_CLK_232Tcy        0xFFE7
#define ADC_CONV_CLK_231Tcy        0xFFE6
#define ADC_CONV_CLK_230Tcy        0xFFE5
#define ADC_CONV_CLK_229Tcy        0xFFE4
#define ADC_CONV_CLK_228Tcy        0xFFE3
#define ADC_CONV_CLK_227Tcy        0xFFE2
#define ADC_CONV_CLK_226Tcy        0xFFE1
#define ADC_CONV_CLK_225Tcy        0xFFE0
#define ADC_CONV_CLK_224Tcy        0xFFDF
#define ADC_CONV_CLK_223Tcy        0xFFDE
#define ADC_CONV_CLK_222Tcy        0xFFDD
#define ADC_CONV_CLK_221Tcy        0xFFDC
#define ADC_CONV_CLK_220Tcy        0xFFDB
#define ADC_CONV_CLK_219Tcy        0xFFDA
#define ADC_CONV_CLK_218Tcy        0xFFD9
#define ADC_CONV_CLK_217Tcy        0xFFD8
#define ADC_CONV_CLK_216Tcy        0xFFD7
#define ADC_CONV_CLK_215Tcy        0xFFD6
#define ADC_CONV_CLK_214Tcy        0xFFD5
#define ADC_CONV_CLK_213Tcy        0xFFD4
#define ADC_CONV_CLK_212Tcy        0xFFD3
#define ADC_CONV_CLK_211Tcy        0xFFD2
#define ADC_CONV_CLK_210Tcy        0xFFD1
#define ADC_CONV_CLK_209Tcy        0xFFD0
#define ADC_CONV_CLK_208Tcy        0xFFCF
#define ADC_CONV_CLK_207Tcy        0xFFCE
#define ADC_CONV_CLK_206Tcy        0xFFCD
#define ADC_CONV_CLK_205Tcy        0xFFCC
#define ADC_CONV_CLK_204Tcy        0xFFCB
#define ADC_CONV_CLK_203Tcy        0xFFCA
#define ADC_CONV_CLK_202Tcy        0xFFC9
#define ADC_CONV_CLK_201Tcy        0xFFC8
#define ADC_CONV_CLK_200Tcy        0xFFC7
#define ADC_CONV_CLK_199Tcy        0xFFC6
#define ADC_CONV_CLK_198Tcy        0xFFC5
#define ADC_CONV_CLK_197Tcy        0xFFC4
#define ADC_CONV_CLK_196Tcy        0xFFC3
#define ADC_CONV_CLK_195Tcy        0xFFC2
#define ADC_CONV_CLK_194Tcy        0xFFC1  
#define ADC_CONV_CLK_193Tcy        0xFFC0 
#define ADC_CONV_CLK_192Tcy        0xFFBF  
#define ADC_CONV_CLK_191Tcy        0xFFBE  
#define ADC_CONV_CLK_190Tcy        0xFFBD  
#define ADC_CONV_CLK_189Tcy        0xFFBC  
#define ADC_CONV_CLK_188Tcy        0xFFBB
#define ADC_CONV_CLK_187Tcy        0xFFBA
#define ADC_CONV_CLK_186Tcy        0xFFB9
#define ADC_CONV_CLK_185Tcy        0xFFB8
#define ADC_CONV_CLK_184Tcy        0xFFB7
#define ADC_CONV_CLK_183Tcy        0xFFB6
#define ADC_CONV_CLK_182Tcy        0xFFB5
#define ADC_CONV_CLK_181Tcy        0xFFB4
#define ADC_CONV_CLK_180Tcy        0xFFB3
#define ADC_CONV_CLK_179Tcy        0xFFB2
#define ADC_CONV_CLK_178Tcy        0xFFB1
#define ADC_CONV_CLK_177Tcy        0xFFB0
#define ADC_CONV_CLK_176Tcy        0xFFAF
#define ADC_CONV_CLK_175Tcy        0xFFAE
#define ADC_CONV_CLK_174Tcy        0xFFAD
#define ADC_CONV_CLK_173Tcy        0xFFAC
#define ADC_CONV_CLK_172Tcy        0xFFAB
#define ADC_CONV_CLK_171Tcy        0xFFAA
#define ADC_CONV_CLK_170Tcy        0xFFA9
#define ADC_CONV_CLK_169Tcy        0xFFA8
#define ADC_CONV_CLK_168Tcy        0xFFA7
#define ADC_CONV_CLK_167Tcy        0xFFA6
#define ADC_CONV_CLK_166Tcy        0xFFA5
#define ADC_CONV_CLK_165Tcy        0xFFA4
#define ADC_CONV_CLK_164Tcy        0xFFA3
#define ADC_CONV_CLK_163Tcy        0xFFA2
#define ADC_CONV_CLK_162Tcy        0xFFA1
#define ADC_CONV_CLK_161Tcy        0xFFA0
#define ADC_CONV_CLK_160Tcy        0xFF9F
#define ADC_CONV_CLK_159Tcy        0xFF9E
#define ADC_CONV_CLK_158Tcy        0xFF9D
#define ADC_CONV_CLK_157Tcy        0xFF9C
#define ADC_CONV_CLK_156Tcy        0xFF9B
#define ADC_CONV_CLK_155Tcy        0xFF9A
#define ADC_CONV_CLK_154Tcy        0xFF99
#define ADC_CONV_CLK_153Tcy        0xFF98
#define ADC_CONV_CLK_152Tcy        0xFF97
#define ADC_CONV_CLK_151Tcy        0xFF96
#define ADC_CONV_CLK_150Tcy        0xFF95
#define ADC_CONV_CLK_149Tcy        0xFF94
#define ADC_CONV_CLK_148Tcy        0xFF93
#define ADC_CONV_CLK_147Tcy        0xFF92
#define ADC_CONV_CLK_146Tcy        0xFF91
#define ADC_CONV_CLK_145Tcy        0xFF90
#define ADC_CONV_CLK_144Tcy        0xFF8F
#define ADC_CONV_CLK_143Tcy        0xFF8E
#define ADC_CONV_CLK_142Tcy        0xFF8D
#define ADC_CONV_CLK_141Tcy        0xFF8C
#define ADC_CONV_CLK_140Tcy        0xFF8B
#define ADC_CONV_CLK_139Tcy        0xFF8A
#define ADC_CONV_CLK_138Tcy        0xFF89
#define ADC_CONV_CLK_137Tcy        0xFF88
#define ADC_CONV_CLK_136Tcy        0xFF87
#define ADC_CONV_CLK_135Tcy        0xFF86
#define ADC_CONV_CLK_134Tcy        0xFF85
#define ADC_CONV_CLK_133Tcy        0xFF84
#define ADC_CONV_CLK_132Tcy        0xFF83
#define ADC_CONV_CLK_131Tcy        0xFF82
#define ADC_CONV_CLK_130Tcy        0xFF81  
#define ADC_CONV_CLK_129Tcy        0xFF80  
#define ADC_CONV_CLK_128Tcy        0xFF7F  
#define ADC_CONV_CLK_127Tcy        0xFF7E  
#define ADC_CONV_CLK_126Tcy        0xFF7D  
#define ADC_CONV_CLK_125Tcy        0xFF7C  
#define ADC_CONV_CLK_124Tcy        0xFF7B
#define ADC_CONV_CLK_123Tcy        0xFF7A
#define ADC_CONV_CLK_122Tcy        0xFF79
#define ADC_CONV_CLK_121Tcy        0xFF78
#define ADC_CONV_CLK_120Tcy        0xFF77
#define ADC_CONV_CLK_119Tcy        0xFF76
#define ADC_CONV_CLK_118Tcy        0xFF75
#define ADC_CONV_CLK_117Tcy        0xFF74
#define ADC_CONV_CLK_116Tcy        0xFF73
#define ADC_CONV_CLK_115Tcy        0xFF72
#define ADC_CONV_CLK_114Tcy        0xFF71
#define ADC_CONV_CLK_113Tcy        0xFF70
#define ADC_CONV_CLK_112Tcy        0xFF6F
#define ADC_CONV_CLK_111Tcy        0xFF6E
#define ADC_CONV_CLK_110Tcy        0xFF6D
#define ADC_CONV_CLK_109Tcy        0xFF6C
#define ADC_CONV_CLK_108Tcy        0xFF6B
#define ADC_CONV_CLK_107Tcy        0xFF6A
#define ADC_CONV_CLK_106Tcy        0xFF69
#define ADC_CONV_CLK_105Tcy        0xFF68
#define ADC_CONV_CLK_104Tcy        0xFF67
#define ADC_CONV_CLK_103Tcy        0xFF66
#define ADC_CONV_CLK_102Tcy        0xFF65
#define ADC_CONV_CLK_101Tcy        0xFF64
#define ADC_CONV_CLK_100Tcy        0xFF63
#define ADC_CONV_CLK_99Tcy         0xFF62
#define ADC_CONV_CLK_98Tcy         0xFF61
#define ADC_CONV_CLK_97Tcy         0xFF60
#define ADC_CONV_CLK_96Tcy         0xFF5F
#define ADC_CONV_CLK_95Tcy         0xFF5E
#define ADC_CONV_CLK_94Tcy         0xFF5D
#define ADC_CONV_CLK_93Tcy         0xFF5C
#define ADC_CONV_CLK_92Tcy         0xFF5B
#define ADC_CONV_CLK_91Tcy         0xFF5A
#define ADC_CONV_CLK_90Tcy         0xFF59
#define ADC_CONV_CLK_89Tcy         0xFF58
#define ADC_CONV_CLK_88Tcy         0xFF57
#define ADC_CONV_CLK_87Tcy         0xFF56
#define ADC_CONV_CLK_86Tcy         0xFF55
#define ADC_CONV_CLK_85Tcy         0xFF54
#define ADC_CONV_CLK_84Tcy         0xFF53
#define ADC_CONV_CLK_83Tcy         0xFF52
#define ADC_CONV_CLK_82Tcy         0xFF51
#define ADC_CONV_CLK_81Tcy         0xFF50
#define ADC_CONV_CLK_80Tcy         0xFF4F
#define ADC_CONV_CLK_79Tcy         0xFF4E
#define ADC_CONV_CLK_78Tcy         0xFF4D
#define ADC_CONV_CLK_77Tcy         0xFF4C
#define ADC_CONV_CLK_76Tcy         0xFF4B
#define ADC_CONV_CLK_75Tcy         0xFF4A
#define ADC_CONV_CLK_74Tcy         0xFF49
#define ADC_CONV_CLK_73Tcy         0xFF48
#define ADC_CONV_CLK_72Tcy         0xFF47
#define ADC_CONV_CLK_71Tcy         0xFF46
#define ADC_CONV_CLK_70Tcy         0xFF45
#define ADC_CONV_CLK_69Tcy         0xFF44
#define ADC_CONV_CLK_68Tcy         0xFF43
#define ADC_CONV_CLK_67Tcy         0xFF42
#define ADC_CONV_CLK_66Tcy         0xFF41  
#define ADC_CONV_CLK_65Tcy         0xFF40 
#define ADC_CONV_CLK_64Tcy         0xFF3F  
#define ADC_CONV_CLK_63Tcy         0xFF3E  
#define ADC_CONV_CLK_62Tcy         0xFF3D  
#define ADC_CONV_CLK_61Tcy         0xFF3C  
#define ADC_CONV_CLK_60Tcy         0xFF3B
#define ADC_CONV_CLK_59Tcy         0xFF3A
#define ADC_CONV_CLK_58Tcy         0xFF39
#define ADC_CONV_CLK_57Tcy         0xFF38
#define ADC_CONV_CLK_56Tcy         0xFF37
#define ADC_CONV_CLK_55Tcy         0xFF36
#define ADC_CONV_CLK_54Tcy         0xFF35
#define ADC_CONV_CLK_53Tcy         0xFF34
#define ADC_CONV_CLK_52Tcy         0xFF33
#define ADC_CONV_CLK_51Tcy         0xFF32
#define ADC_CONV_CLK_50Tcy         0xFF31
#define ADC_CONV_CLK_49Tcy         0xFF30
#define ADC_CONV_CLK_48Tcy         0xFF2F
#define ADC_CONV_CLK_47Tcy         0xFF2E
#define ADC_CONV_CLK_46Tcy         0xFF2D
#define ADC_CONV_CLK_45Tcy         0xFF2C
#define ADC_CONV_CLK_44Tcy         0xFF2B
#define ADC_CONV_CLK_43Tcy         0xFF2A
#define ADC_CONV_CLK_42Tcy         0xFF29
#define ADC_CONV_CLK_41Tcy         0xFF28
#define ADC_CONV_CLK_40Tcy         0xFF27
#define ADC_CONV_CLK_39Tcy         0xFF26
#define ADC_CONV_CLK_38Tcy         0xFF25
#define ADC_CONV_CLK_37Tcy         0xFF24
#define ADC_CONV_CLK_36Tcy         0xFF23
#define ADC_CONV_CLK_35Tcy         0xFF22
#define ADC_CONV_CLK_34Tcy         0xFF21
#define ADC_CONV_CLK_33Tcy         0xFF20
#define ADC_CONV_CLK_32Tcy         0xFF1F
#define ADC_CONV_CLK_31Tcy         0xFF1E
#define ADC_CONV_CLK_30Tcy         0xFF1D
#define ADC_CONV_CLK_29Tcy         0xFF1C
#define ADC_CONV_CLK_28Tcy         0xFF1B
#define ADC_CONV_CLK_27Tcy         0xFF1A
#define ADC_CONV_CLK_26Tcy         0xFF19
#define ADC_CONV_CLK_25Tcy         0xFF18
#define ADC_CONV_CLK_24Tcy         0xFF17
#define ADC_CONV_CLK_23Tcy         0xFF16
#define ADC_CONV_CLK_22Tcy         0xFF15
#define ADC_CONV_CLK_21Tcy         0xFF14
#define ADC_CONV_CLK_20Tcy         0xFF13
#define ADC_CONV_CLK_19Tcy         0xFF12
#define ADC_CONV_CLK_18Tcy         0xFF11
#define ADC_CONV_CLK_17Tcy         0xFF10
#define ADC_CONV_CLK_16Tcy         0xFF0F
#define ADC_CONV_CLK_15Tcy         0xFF0E
#define ADC_CONV_CLK_14Tcy         0xFF0D
#define ADC_CONV_CLK_13Tcy         0xFF0C
#define ADC_CONV_CLK_12Tcy         0xFF0B
#define ADC_CONV_CLK_11Tcy         0xFF0A
#define ADC_CONV_CLK_10Tcy         0xFF09
#define ADC_CONV_CLK_9Tcy          0xFF08
#define ADC_CONV_CLK_8Tcy          0xFF07
#define ADC_CONV_CLK_7Tcy          0xFF06
#define ADC_CONV_CLK_6Tcy          0xFF05
#define ADC_CONV_CLK_5Tcy          0xFF04
#define ADC_CONV_CLK_4Tcy          0xFF03
#define ADC_CONV_CLK_3Tcy          0xFF02
#define ADC_CONV_CLK_2Tcy          0xFF01  
#define ADC_CONV_CLK_1Tcy          0xFF00 

#else

#define ADC_CONV_CLK_64Tcy         0xFF3F  
#define ADC_CONV_CLK_63Tcy         0xFF3E  
#define ADC_CONV_CLK_62Tcy         0xFF3D  
#define ADC_CONV_CLK_61Tcy         0xFF3C  
#define ADC_CONV_CLK_60Tcy         0xFF3B
#define ADC_CONV_CLK_59Tcy         0xFF3A
#define ADC_CONV_CLK_58Tcy         0xFF39
#define ADC_CONV_CLK_57Tcy         0xFF38
#define ADC_CONV_CLK_56Tcy         0xFF37
#define ADC_CONV_CLK_55Tcy         0xFF36
#define ADC_CONV_CLK_54Tcy         0xFF35
#define ADC_CONV_CLK_53Tcy         0xFF34
#define ADC_CONV_CLK_52Tcy         0xFF33
#define ADC_CONV_CLK_51Tcy         0xFF32
#define ADC_CONV_CLK_50Tcy         0xFF31
#define ADC_CONV_CLK_49Tcy         0xFF30
#define ADC_CONV_CLK_48Tcy         0xFF2F
#define ADC_CONV_CLK_47Tcy         0xFF2E
#define ADC_CONV_CLK_46Tcy         0xFF2D
#define ADC_CONV_CLK_45Tcy         0xFF2C
#define ADC_CONV_CLK_44Tcy         0xFF2B
#define ADC_CONV_CLK_43Tcy         0xFF2A
#define ADC_CONV_CLK_42Tcy         0xFF29
#define ADC_CONV_CLK_41Tcy         0xFF28
#define ADC_CONV_CLK_40Tcy         0xFF27
#define ADC_CONV_CLK_39Tcy         0xFF26
#define ADC_CONV_CLK_38Tcy         0xFF25
#define ADC_CONV_CLK_37Tcy         0xFF24
#define ADC_CONV_CLK_36Tcy         0xFF23
#define ADC_CONV_CLK_35Tcy         0xFF22
#define ADC_CONV_CLK_34Tcy         0xFF21
#define ADC_CONV_CLK_33Tcy         0xFF20
#define ADC_CONV_CLK_32Tcy         0xFF1F
#define ADC_CONV_CLK_31Tcy         0xFF1E
#define ADC_CONV_CLK_30Tcy         0xFF1D
#define ADC_CONV_CLK_29Tcy         0xFF1C
#define ADC_CONV_CLK_28Tcy         0xFF1B
#define ADC_CONV_CLK_27Tcy         0xFF1A
#define ADC_CONV_CLK_26Tcy         0xFF19
#define ADC_CONV_CLK_25Tcy         0xFF18
#define ADC_CONV_CLK_24Tcy         0xFF17
#define ADC_CONV_CLK_23Tcy         0xFF16
#define ADC_CONV_CLK_22Tcy         0xFF15
#define ADC_CONV_CLK_21Tcy         0xFF14
#define ADC_CONV_CLK_20Tcy         0xFF13
#define ADC_CONV_CLK_19Tcy         0xFF12
#define ADC_CONV_CLK_18Tcy         0xFF11
#define ADC_CONV_CLK_17Tcy         0xFF10
#define ADC_CONV_CLK_16Tcy         0xFF0F
#define ADC_CONV_CLK_15Tcy         0xFF0E
#define ADC_CONV_CLK_14Tcy         0xFF0D
#define ADC_CONV_CLK_13Tcy         0xFF0C
#define ADC_CONV_CLK_12Tcy         0xFF0B
#define ADC_CONV_CLK_11Tcy         0xFF0A
#define ADC_CONV_CLK_10Tcy         0xFF09
#define ADC_CONV_CLK_9Tcy          0xFF08
#define ADC_CONV_CLK_8Tcy          0xFF07
#define ADC_CONV_CLK_7Tcy          0xFF06
#define ADC_CONV_CLK_6Tcy          0xFF05
#define ADC_CONV_CLK_5Tcy          0xFF04
#define ADC_CONV_CLK_4Tcy          0xFF03
#define ADC_CONV_CLK_3Tcy          0xFF02
#define ADC_CONV_CLK_2Tcy          0xFF01  
#define ADC_CONV_CLK_1Tcy          0xFF00 
#endif

#ifdef _DMA1IF 

/* AD1CON4 and AD2CON4 registers To Be used With config4 in OpenADCx.c */

#if defined (__dsPIC33E__) || defined (__PIC24E__)

#define ADC_DMA_EN					0xFFFF /* Conversion results stored in ADCxBUF0 register, for transfer to RAM using DMA */
#define ADC_DMA_DIS					0xFEFF /* Conversion results stored in ADCxBUF0 through ADCxBUFF registers; DMA will not be used */

#endif

#define ADC_DMA_BUF_LOC_128         0xFFFF /* Allocates words of buffer to each analog input */
#define ADC_DMA_BUF_LOC_64          0xFFFE /* Allocates words of buffer to each analog input */
#define ADC_DMA_BUF_LOC_32          0xFFFD /* Allocates words of buffer to each analog input */
#define ADC_DMA_BUF_LOC_16          0xFFFC /* Allocates words of buffer to each analog input */
#define ADC_DMA_BUF_LOC_8           0xFFFB /* Allocates words of buffer to each analog input */
#define ADC_DMA_BUF_LOC_4           0xFFFA /* Allocates words of buffer to each analog input */
#define ADC_DMA_BUF_LOC_2           0xFFF9 /* Allocates words of buffer to each analog input */
#define ADC_DMA_BUF_LOC_1           0xFFF8 /* Allocates words of buffer to each analog input */

#endif

/* ADCx Input CHANNEL 1,2,3 select register (AD1CHS123 and AD2CHS123) configuration defines */

#ifdef _AD12B

#define ADC_CH123_NEG_SAMPLEB_9_10_11  0xFFFF /* A/D CH1 neg i/p is AN9 , CH2 neg i/p is AN10, CH3 neg i/p is AN11*/
#define ADC_CH123_NEG_SAMPLEB_6_7_8    0xFDFF /* A/D CH1 neg i/p is AN6 , CH2 neg i/p is AN7, CH3 neg i/p is AN8*/

#endif

#define ADC_CH123_NEG_SAMPLEB_NVREF    0xF9FF /* A/D CH1 , CH2 and CH3 neg i/p is Vref-*/
#define ADC_CH123_NEG_SAMPLEB_VREFN    0xF9FF /* A/D CH1 , CH2 and CH3 neg i/p is Vref-*/

#if defined (__dsPIC33FJ16MC101__) || defined (__dsPIC33FJ16GP101__)

#define ADC_CH123_POS_SAMPLEB_3_NC_NC	0xFFFF /* A/D CH1 pos i/p is AN3, CH2 and CH3 are not connected */
#define ADC_CH123_POS_SAMPLEB_0_1_2     0xFEFF /* A/D CH1 pos i/p is AN0, CH2 pos i/p is AN1, CH3 pos i/p is AN2*/

#elif defined (_C5EVT)

#define ADC_CH123_POS_SAMPLEB_0_25_6	0xFFFF /* A/D CH1 pos i/p is AN0, CH2 pos i/p is AN25, CH3 pos i/p is AN6*/
#define ADC_CH123_POS_SAMPLEB_3_0_25	0xEFFF /* A/D CH1 pos i/p is AN3, CH2 pos i/p is AN0, CH3 pos i/p is AN25*/
#define ADC_CH123_POS_SAMPLEB_3_0_6		0xEEFF /* A/D CH1 pos i/p is AN3, CH2 pos i/p is AN0, CH3 pos i/p is AN6*/
#define ADC_CH123_POS_SAMPLEB_3_4_5     0xE7FF /* A/D CH1 pos i/p is AN3, CH2 pos i/p is AN4, CH3 pos i/p is AN5*/
#define ADC_CH123_POS_SAMPLEB_0_1_2     0xE6FF /* A/D CH1 pos i/p is AN0, CH2 pos i/p is AN1, CH3 pos i/p is AN2*/

#else

#define ADC_CH123_POS_SAMPLEB_3_4_5    0xFFFF /* A/D CH1 pos i/p is AN3, CH2 pos i/p is AN4, CH3 pos i/p is AN5*/
#define ADC_CH123_POS_SAMPLEB_0_1_2    0xFEFF /* A/D CH1 pos i/p is AN0, CH2 pos i/p is AN1, CH3 pos i/p is AN2*/

#endif

#ifdef _AD12B

#define ADC_CH123_NEG_SAMPLEA_9_10_11  0xFFFF /* A/D CH1 neg i/p is AN9 , CH2 neg i/p is AN10, CH3 neg i/p is AN11*/
#define ADC_CH123_NEG_SAMPLEA_6_7_8    0xFFFD /* A/D CH1 neg i/p is AN6 , CH2 neg i/p is AN7, CH3 neg i/p is AN8*/

#endif

#define ADC_CH123_NEG_SAMPLEA_NVREF    0xFFF9 /* A/D CH1 , CH2 and CH3 neg i/p is Vref-*/
#define ADC_CH123_NEG_SAMPLEA_VREFN    0xFFF9 /* A/D CH1 , CH2 and CH3 neg i/p is Vref-*/

#if defined (__dsPIC33FJ16MC101__) || defined (__dsPIC33FJ16GP101__)

#define ADC_CH123_POS_SAMPLEA_3_NC_NC	0xFFFF /* A/D CH1 pos i/p is AN3, CH2 and CH3 are not connected */
#define ADC_CH123_POS_SAMPLEA_0_1_2    0xFEFF /* A/D CH1 pos i/p is AN0, CH2 pos i/p is AN1, CH3 pos i/p is AN2*/

#elif defined (_C5EVT)

#define ADC_CH123_POS_SAMPLEA_0_25_6	0xFFFF /* A/D CH1 pos i/p is AN0, CH2 pos i/p is AN25, CH3 pos i/p is AN6*/
#define ADC_CH123_POS_SAMPLEA_3_0_25	0xEFFF /* A/D CH1 pos i/p is AN3, CH2 pos i/p is AN0, CH3 pos i/p is AN25*/
#define ADC_CH123_POS_SAMPLEA_3_0_6		0xEEFF /* A/D CH1 pos i/p is AN3, CH2 pos i/p is AN0, CH3 pos i/p is AN6*/
#define ADC_CH123_POS_SAMPLEA_3_4_5     0xE7FF /* A/D CH1 pos i/p is AN3, CH2 pos i/p is AN4, CH3 pos i/p is AN5*/
#define ADC_CH123_POS_SAMPLEA_0_1_2     0xE6FF /* A/D CH1 pos i/p is AN0, CH2 pos i/p is AN1, CH3 pos i/p is AN2*/

#else

#define ADC_CH123_POS_SAMPLEA_3_4_5    0xFFFF /* A/D CH1 pos i/p is AN3, CH2 pos i/p is AN4, CH3 pos i/p is AN5*/
#define ADC_CH123_POS_SAMPLEA_0_1_2    0xFFFE /* A/D CH1 pos i/p is AN0, CH2 pos i/p is AN1, CH3 pos i/p is AN2*/

#endif

/* ADCx Input channel 0 select register */

#define ADC_CH0_NEG_SAMPLEB_AN1     0xFFFF /* CH0 negative input is AN1 */
#define ADC_CH0_NEG_SAMPLEB_NVREF   0x7FFF /* CH0 negative input is VREF- */
#define ADC_CH0_NEG_SAMPLEB_VREFN   0x7FFF /* CH0 negative input is VREF- */

#if defined (__dsPIC33FJ16MC101__) || defined (__dsPIC33FJ16GP101__)

#define ADC_CH0_POS_SAMPLEB_CTMU	0xEDFF /* A/D CH0 pos i/p sel for SAMPLE B is CTMU */
#define ADC_CH0_POS_SAMPLEB_AN3     0xE3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN3 */
#define ADC_CH0_POS_SAMPLEB_AN2     0xE2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN2 */
#define ADC_CH0_POS_SAMPLEB_AN1     0xE1FF /* A/D CH0 pos i/p sel for SAMPLE B is AN1 */
#define ADC_CH0_POS_SAMPLEB_AN0     0xE0FF /* A/D CH0 pos i/p sel for SAMPLE B is AN0 */

#elif defined (__dsPIC33FJ16MC102__) || defined (__dsPIC33FJ16GP102__)

#define ADC_CH0_POS_SAMPLEB_CTMU	0xEDFF /* A/D CH0 pos i/p sel for SAMPLE B is CTMU */
#define ADC_CH0_POS_SAMPLEB_AN5     0xE5FF /* A/D CH0 pos i/p sel for SAMPLE B is AN5 */
#define ADC_CH0_POS_SAMPLEB_AN4     0xE4FF /* A/D CH0 pos i/p sel for SAMPLE B is AN4 */
#define ADC_CH0_POS_SAMPLEB_AN3     0xE3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN3 */
#define ADC_CH0_POS_SAMPLEB_AN2     0xE2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN2 */
#define ADC_CH0_POS_SAMPLEB_AN1     0xE1FF /* A/D CH0 pos i/p sel for SAMPLE B is AN1 */
#define ADC_CH0_POS_SAMPLEB_AN0     0xE0FF /* A/D CH0 pos i/p sel for SAMPLE B is AN0 */

#elif defined (_C5EVT)

#define ADC_CH0_POS_SAMPLEB_CTMU    0xFEFF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN49    0xF1FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN48    0xF0FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN47    0xEFFF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN46    0xEEFF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN45    0xEDFF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN44    0xECFF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN43    0xEBFF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN42    0xEAFF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN41    0xE9FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN40    0xE8FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN39    0xE7FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN38    0xE6FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN37    0xE5FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN36    0xE4FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN35    0xE3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN34    0xE2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN33    0xE1FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN32    0xE0FF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN31    0xDFFF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN30    0xDEFF /* A/D CH0 pos i/p sel for SAMPLE B is AN30 */
#define ADC_CH0_POS_SAMPLEB_AN29    0xDDFF /* A/D CH0 pos i/p sel for SAMPLE B is AN29 */
#define ADC_CH0_POS_SAMPLEB_AN28    0xDCFF /* A/D CH0 pos i/p sel for SAMPLE B is AN28 */
#define ADC_CH0_POS_SAMPLEB_AN27    0xDBFF /* A/D CH0 pos i/p sel for SAMPLE B is AN27 */
#define ADC_CH0_POS_SAMPLEB_AN26    0xDAFF /* A/D CH0 pos i/p sel for SAMPLE B is AN26 */
#define ADC_CH0_POS_SAMPLEB_AN25    0xD9FF /* A/D CH0 pos i/p sel for SAMPLE B is AN25 */
#define ADC_CH0_POS_SAMPLEB_AN24    0xD8FF /* A/D CH0 pos i/p sel for SAMPLE B is AN24 */
#define ADC_CH0_POS_SAMPLEB_AN23    0xD7FF /* A/D CH0 pos i/p sel for SAMPLE B is AN23 */
#define ADC_CH0_POS_SAMPLEB_AN22    0xD6FF /* A/D CH0 pos i/p sel for SAMPLE B is AN22 */
#define ADC_CH0_POS_SAMPLEB_AN21    0xD5FF /* A/D CH0 pos i/p sel for SAMPLE B is AN21 */
#define ADC_CH0_POS_SAMPLEB_AN20    0xD4FF /* A/D CH0 pos i/p sel for SAMPLE B is AN20 */
#define ADC_CH0_POS_SAMPLEB_AN19    0xD3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN19 */
#define ADC_CH0_POS_SAMPLEB_AN18    0xD2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN18 */
#define ADC_CH0_POS_SAMPLEB_AN17    0xD1FF /* A/D CH0 pos i/p sel for SAMPLE B is AN17 */
#define ADC_CH0_POS_SAMPLEB_AN16    0xD0FF /* A/D CH0 pos i/p sel for SAMPLE B is AN16 */
#define ADC_CH0_POS_SAMPLEB_AN15    0xCFFF /* A/D CH0 pos i/p sel for SAMPLE B is AN15 */
#define ADC_CH0_POS_SAMPLEB_AN14    0xCEFF /* A/D CH0 pos i/p sel for SAMPLE B is AN14 */
#define ADC_CH0_POS_SAMPLEB_AN13    0xCDFF /* A/D CH0 pos i/p sel for SAMPLE B is AN13 */
#define ADC_CH0_POS_SAMPLEB_AN12    0xCCFF /* A/D CH0 pos i/p sel for SAMPLE B is AN12 */
#define ADC_CH0_POS_SAMPLEB_AN11    0xCBFF /* A/D CH0 pos i/p sel for SAMPLE B is AN11 */
#define ADC_CH0_POS_SAMPLEB_AN10    0xCAFF /* A/D CH0 pos i/p sel for SAMPLE B is AN10 */
#define ADC_CH0_POS_SAMPLEB_AN9     0xC9FF /* A/D CH0 pos i/p sel for SAMPLE B is AN9 */
#define ADC_CH0_POS_SAMPLEB_AN8     0xC8FF /* A/D CH0 pos i/p sel for SAMPLE B is AN8 */
#define ADC_CH0_POS_SAMPLEB_AN7     0xC7FF /* A/D CH0 pos i/p sel for SAMPLE B is AN7 */
#define ADC_CH0_POS_SAMPLEB_AN6     0xC6FF /* A/D CH0 pos i/p sel for SAMPLE B is AN6 */
#define ADC_CH0_POS_SAMPLEB_AN5     0xC5FF /* A/D CH0 pos i/p sel for SAMPLE B is AN5 */
#define ADC_CH0_POS_SAMPLEB_AN4     0xC4FF /* A/D CH0 pos i/p sel for SAMPLE B is AN4 */
#define ADC_CH0_POS_SAMPLEB_AN3     0xC3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN3 */
#define ADC_CH0_POS_SAMPLEB_AN2     0xC2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN2 */
#define ADC_CH0_POS_SAMPLEB_AN1     0xC1FF /* A/D CH0 pos i/p sel for SAMPLE B is AN1 */
#define ADC_CH0_POS_SAMPLEB_AN0     0xC0FF /* A/D CH0 pos i/p sel for SAMPLE B is AN0 */

#else

#define ADC_CH0_POS_SAMPLEB_AN31    0xFFFF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEB_AN30    0xFEFF /* A/D CH0 pos i/p sel for SAMPLE B is AN30 */
#define ADC_CH0_POS_SAMPLEB_AN29    0xFDFF /* A/D CH0 pos i/p sel for SAMPLE B is AN29 */
#define ADC_CH0_POS_SAMPLEB_AN28    0xFCFF /* A/D CH0 pos i/p sel for SAMPLE B is AN28 */
#define ADC_CH0_POS_SAMPLEB_AN27    0xFBFF /* A/D CH0 pos i/p sel for SAMPLE B is AN27 */
#define ADC_CH0_POS_SAMPLEB_AN26    0xFAFF /* A/D CH0 pos i/p sel for SAMPLE B is AN26 */
#define ADC_CH0_POS_SAMPLEB_AN25    0xF9FF /* A/D CH0 pos i/p sel for SAMPLE B is AN25 */
#define ADC_CH0_POS_SAMPLEB_AN24    0xF8FF /* A/D CH0 pos i/p sel for SAMPLE B is AN24 */
#define ADC_CH0_POS_SAMPLEB_AN23    0xF7FF /* A/D CH0 pos i/p sel for SAMPLE B is AN23 */
#define ADC_CH0_POS_SAMPLEB_AN22    0xF6FF /* A/D CH0 pos i/p sel for SAMPLE B is AN22 */
#define ADC_CH0_POS_SAMPLEB_AN21    0xF5FF /* A/D CH0 pos i/p sel for SAMPLE B is AN21 */
#define ADC_CH0_POS_SAMPLEB_AN20    0xF4FF /* A/D CH0 pos i/p sel for SAMPLE B is AN20 */
#define ADC_CH0_POS_SAMPLEB_AN19    0xF3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN19 */
#define ADC_CH0_POS_SAMPLEB_AN18    0xF2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN18 */
#define ADC_CH0_POS_SAMPLEB_AN17    0xF1FF /* A/D CH0 pos i/p sel for SAMPLE B is AN17 */
#define ADC_CH0_POS_SAMPLEB_AN16    0xF0FF /* A/D CH0 pos i/p sel for SAMPLE B is AN16 */
#define ADC_CH0_POS_SAMPLEB_AN15    0xEFFF /* A/D CH0 pos i/p sel for SAMPLE B is AN15 */
#define ADC_CH0_POS_SAMPLEB_AN14    0xEEFF /* A/D CH0 pos i/p sel for SAMPLE B is AN14 */
#define ADC_CH0_POS_SAMPLEB_AN13    0xEDFF /* A/D CH0 pos i/p sel for SAMPLE B is AN13 */
#define ADC_CH0_POS_SAMPLEB_AN12    0xECFF /* A/D CH0 pos i/p sel for SAMPLE B is AN12 */
#define ADC_CH0_POS_SAMPLEB_AN11    0xEBFF /* A/D CH0 pos i/p sel for SAMPLE B is AN11 */
#define ADC_CH0_POS_SAMPLEB_AN10    0xEAFF /* A/D CH0 pos i/p sel for SAMPLE B is AN10 */
#define ADC_CH0_POS_SAMPLEB_AN9     0xE9FF /* A/D CH0 pos i/p sel for SAMPLE B is AN9 */
#define ADC_CH0_POS_SAMPLEB_AN8     0xE8FF /* A/D CH0 pos i/p sel for SAMPLE B is AN8 */
#define ADC_CH0_POS_SAMPLEB_AN7     0xE7FF /* A/D CH0 pos i/p sel for SAMPLE B is AN7 */
#define ADC_CH0_POS_SAMPLEB_AN6     0xE6FF /* A/D CH0 pos i/p sel for SAMPLE B is AN6 */
#define ADC_CH0_POS_SAMPLEB_AN5     0xE5FF /* A/D CH0 pos i/p sel for SAMPLE B is AN5 */
#define ADC_CH0_POS_SAMPLEB_AN4     0xE4FF /* A/D CH0 pos i/p sel for SAMPLE B is AN4 */
#define ADC_CH0_POS_SAMPLEB_AN3     0xE3FF /* A/D CH0 pos i/p sel for SAMPLE B is AN3 */
#define ADC_CH0_POS_SAMPLEB_AN2     0xE2FF /* A/D CH0 pos i/p sel for SAMPLE B is AN2 */
#define ADC_CH0_POS_SAMPLEB_AN1     0xE1FF /* A/D CH0 pos i/p sel for SAMPLE B is AN1 */
#define ADC_CH0_POS_SAMPLEB_AN0     0xE0FF /* A/D CH0 pos i/p sel for SAMPLE B is AN0 */

#endif

#define ADC_CH0_NEG_SAMPLEA_AN1     0xFFFF /*A/D CH0 neg I/P sel for SAMPLE A is AN1 */
#define ADC_CH0_NEG_SAMPLEA_NVREF   0xFF7F /*A/D CH0 neg I/P sel for SAMPLE A is nVref */
#define ADC_CH0_NEG_SAMPLEA_VREFN   0xFF7F /*A/D CH0 neg I/P sel for SAMPLE A is Vrefn */

#if defined (__dsPIC33FJ16MC101__) || defined (__dsPIC33FJ16GP101__)

#define ADC_CH0_POS_SAMPLEA_CTMU	0xFFED /* A/D CH0 pos i/p sel for SAMPLE B is CTMU */
#define ADC_CH0_POS_SAMPLEA_AN3     0xFFE3  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN3 */   
#define ADC_CH0_POS_SAMPLEA_AN2     0xFFE2  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN2 */   
#define ADC_CH0_POS_SAMPLEA_AN1     0xFFE1  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN1 */   
#define ADC_CH0_POS_SAMPLEA_AN0     0xFFE0  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN0 */ 

#elif defined (__dsPIC33FJ16MC102__) || defined (__dsPIC33FJ16GP102__)

#define ADC_CH0_POS_SAMPLEA_CTMU	0xFFED /* A/D CH0 pos i/p sel for SAMPLE B is CTMU */
#define ADC_CH0_POS_SAMPLEA_AN5     0xFFE5  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN5 */   
#define ADC_CH0_POS_SAMPLEA_AN4     0xFFE4  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN4 */   
#define ADC_CH0_POS_SAMPLEA_AN3     0xFFE3  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN3 */   
#define ADC_CH0_POS_SAMPLEA_AN2     0xFFE2  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN2 */   
#define ADC_CH0_POS_SAMPLEA_AN1     0xFFE1  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN1 */   
#define ADC_CH0_POS_SAMPLEA_AN0     0xFFE0  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN0 */ 

#elif defined (_C5EVT)

#define ADC_CH0_POS_SAMPLEA_CTMU    0xFFFE /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN49    0xFFF1 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN48    0xFFF0 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN47    0xFFEF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN46    0xFFEE /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN45    0xFFED /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN44    0xFFEC /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN43    0xFFEB /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN42    0xFFEA /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN41    0xFFE9 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN40    0xFFE8 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN39    0xFFE7 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN38    0xFFE6 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN37    0xFFE5 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN36    0xFFE4 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN35    0xFFE3 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN34    0xFFE2 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN33    0xFFE1 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN32    0xFFE0 /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN31    0xFFDF /* A/D CH0 pos i/p sel for SAMPLE B is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN30    0xFFDE /* A/D CH0 pos i/p sel for SAMPLE B is AN30 */
#define ADC_CH0_POS_SAMPLEA_AN29    0xFFDD /* A/D CH0 pos i/p sel for SAMPLE B is AN29 */
#define ADC_CH0_POS_SAMPLEA_AN28    0xFFDC /* A/D CH0 pos i/p sel for SAMPLE B is AN28 */
#define ADC_CH0_POS_SAMPLEA_AN27    0xFFDB /* A/D CH0 pos i/p sel for SAMPLE B is AN27 */
#define ADC_CH0_POS_SAMPLEA_AN26    0xFFDA /* A/D CH0 pos i/p sel for SAMPLE B is AN26 */
#define ADC_CH0_POS_SAMPLEA_AN25    0xFFD9 /* A/D CH0 pos i/p sel for SAMPLE B is AN25 */
#define ADC_CH0_POS_SAMPLEA_AN24    0xFFD8 /* A/D CH0 pos i/p sel for SAMPLE B is AN24 */
#define ADC_CH0_POS_SAMPLEA_AN23    0xFFD7 /* A/D CH0 pos i/p sel for SAMPLE B is AN23 */
#define ADC_CH0_POS_SAMPLEA_AN22    0xFFD6 /* A/D CH0 pos i/p sel for SAMPLE B is AN22 */
#define ADC_CH0_POS_SAMPLEA_AN21    0xFFD5 /* A/D CH0 pos i/p sel for SAMPLE B is AN21 */
#define ADC_CH0_POS_SAMPLEA_AN20    0xFFD4 /* A/D CH0 pos i/p sel for SAMPLE B is AN20 */
#define ADC_CH0_POS_SAMPLEA_AN19    0xFFD3 /* A/D CH0 pos i/p sel for SAMPLE B is AN19 */
#define ADC_CH0_POS_SAMPLEA_AN18    0xFFD2 /* A/D CH0 pos i/p sel for SAMPLE B is AN18 */
#define ADC_CH0_POS_SAMPLEA_AN17    0xFFD1 /* A/D CH0 pos i/p sel for SAMPLE B is AN17 */
#define ADC_CH0_POS_SAMPLEA_AN16    0xFFD0 /* A/D CH0 pos i/p sel for SAMPLE B is AN16 */
#define ADC_CH0_POS_SAMPLEA_AN15    0xFFCF /* A/D CH0 pos i/p sel for SAMPLE B is AN15 */
#define ADC_CH0_POS_SAMPLEA_AN14    0xFFCE /* A/D CH0 pos i/p sel for SAMPLE B is AN14 */
#define ADC_CH0_POS_SAMPLEA_AN13    0xFFCD /* A/D CH0 pos i/p sel for SAMPLE B is AN13 */
#define ADC_CH0_POS_SAMPLEA_AN12    0xFFCC /* A/D CH0 pos i/p sel for SAMPLE B is AN12 */
#define ADC_CH0_POS_SAMPLEA_AN11    0xFFCB /* A/D CH0 pos i/p sel for SAMPLE B is AN11 */
#define ADC_CH0_POS_SAMPLEA_AN10    0xFFCA /* A/D CH0 pos i/p sel for SAMPLE B is AN10 */
#define ADC_CH0_POS_SAMPLEA_AN9     0xFFC9 /* A/D CH0 pos i/p sel for SAMPLE B is AN9 */
#define ADC_CH0_POS_SAMPLEA_AN8     0xFFC8 /* A/D CH0 pos i/p sel for SAMPLE B is AN8 */
#define ADC_CH0_POS_SAMPLEA_AN7     0xFFC7 /* A/D CH0 pos i/p sel for SAMPLE B is AN7 */
#define ADC_CH0_POS_SAMPLEA_AN6     0xFFC6 /* A/D CH0 pos i/p sel for SAMPLE B is AN6 */
#define ADC_CH0_POS_SAMPLEA_AN5     0xFFC5 /* A/D CH0 pos i/p sel for SAMPLE B is AN5 */
#define ADC_CH0_POS_SAMPLEA_AN4     0xFFC4 /* A/D CH0 pos i/p sel for SAMPLE B is AN4 */
#define ADC_CH0_POS_SAMPLEA_AN3     0xFFC3 /* A/D CH0 pos i/p sel for SAMPLE B is AN3 */
#define ADC_CH0_POS_SAMPLEA_AN2     0xFFC2 /* A/D CH0 pos i/p sel for SAMPLE B is AN2 */
#define ADC_CH0_POS_SAMPLEA_AN1     0xFFC1 /* A/D CH0 pos i/p sel for SAMPLE B is AN1 */
#define ADC_CH0_POS_SAMPLEA_AN0     0xFFC0 /* A/D CH0 pos i/p sel for SAMPLE B is AN0 */

#else

#define ADC_CH0_POS_SAMPLEA_AN31    0xFFFF  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN31 */
#define ADC_CH0_POS_SAMPLEA_AN30    0xFFFE  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN30 */
#define ADC_CH0_POS_SAMPLEA_AN29    0xFFFD  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN29 */
#define ADC_CH0_POS_SAMPLEA_AN28    0xFFFC  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN28 */
#define ADC_CH0_POS_SAMPLEA_AN27    0xFFFB  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN27 */
#define ADC_CH0_POS_SAMPLEA_AN26    0xFFFA  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN26 */
#define ADC_CH0_POS_SAMPLEA_AN25    0xFFF9  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN25 */   
#define ADC_CH0_POS_SAMPLEA_AN24    0xFFF8  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN24 */   
#define ADC_CH0_POS_SAMPLEA_AN23    0xFFF7  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN23 */ 
#define ADC_CH0_POS_SAMPLEA_AN22    0xFFF6  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN22 */   
#define ADC_CH0_POS_SAMPLEA_AN21    0xFFF5  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN21 */   
#define ADC_CH0_POS_SAMPLEA_AN20    0xFFF4  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN20 */   
#define ADC_CH0_POS_SAMPLEA_AN19    0xFFF3  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN19 */   
#define ADC_CH0_POS_SAMPLEA_AN18    0xFFF2  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN18 */   
#define ADC_CH0_POS_SAMPLEA_AN17    0xFFF1  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN17 */   
#define ADC_CH0_POS_SAMPLEA_AN16    0xFFF0  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN16 */   
#define ADC_CH0_POS_SAMPLEA_AN15    0xFFEF  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN15 */
#define ADC_CH0_POS_SAMPLEA_AN14    0xFFEE  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN14 */
#define ADC_CH0_POS_SAMPLEA_AN13    0xFFED  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN13 */
#define ADC_CH0_POS_SAMPLEA_AN12    0xFFEC  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN12 */
#define ADC_CH0_POS_SAMPLEA_AN11    0xFFEB  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN11 */
#define ADC_CH0_POS_SAMPLEA_AN10    0xFFEA  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN10 */
#define ADC_CH0_POS_SAMPLEA_AN9     0xFFE9  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN9 */   
#define ADC_CH0_POS_SAMPLEA_AN8     0xFFE8  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN8 */   
#define ADC_CH0_POS_SAMPLEA_AN7     0xFFE7  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN7 */ 
#define ADC_CH0_POS_SAMPLEA_AN6     0xFFE6  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN6 */   
#define ADC_CH0_POS_SAMPLEA_AN5     0xFFE5  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN5 */   
#define ADC_CH0_POS_SAMPLEA_AN4     0xFFE4  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN4 */   
#define ADC_CH0_POS_SAMPLEA_AN3     0xFFE3  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN3 */   
#define ADC_CH0_POS_SAMPLEA_AN2     0xFFE2  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN2 */   
#define ADC_CH0_POS_SAMPLEA_AN1     0xFFE1  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN1 */   
#define ADC_CH0_POS_SAMPLEA_AN0     0xFFE0  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN0 */   

#define ADC_RESULT_FIRST                0x0000  /* A/D read results from start of DMA buffer */
#define ADC_RESULT_SECOND               0x0008  /* A/D read results from middle of DMA buffer */

#endif


/*defines for AD1CSSL and AD2CSSL registers To Be used With configscan_l in OpenADCx.c */

#define SKIP_SCAN_AN0                   0xFFFE /*Skip AN0 for Input Scan */
#define SKIP_SCAN_AN1                   0xFFFD /*Skip AN1 for Input Scan */    
#define SKIP_SCAN_AN2                   0xFFFB /*Skip AN2 for Input Scan */
#define SKIP_SCAN_AN3                   0xFFF7 /*Skip AN3 for Input Scan */
#define SKIP_SCAN_AN4                   0xFFEF /*Skip AN4 for Input Scan */
#define SKIP_SCAN_AN5                   0xFFDF /*Skip AN5 for Input Scan */    
#define SKIP_SCAN_AN6                   0xFFBF /*Skip AN6 for Input Scan */
#define SKIP_SCAN_AN7                   0xFF7F /*Skip AN7 for Input Scan */
#define SKIP_SCAN_AN8                   0xFEFF /*Skip AN8 for Input Scan */
#define SKIP_SCAN_AN9                   0xFDFF /*Skip AN9 for Input Scan */    
#define SKIP_SCAN_AN10                  0xFBFF /*Skip AN10 for Input Scan */
#define SKIP_SCAN_AN11                  0xF7FF /*Skip AN11 for Input Scan */
#define SKIP_SCAN_AN12                  0xEFFF /*Skip AN12 for Input Scan */
#define SKIP_SCAN_AN13                  0xDFFF /*Skip AN13 for Input Scan */   
#define SKIP_SCAN_AN14                  0xBFFF /*Skip AN14 for Input Scan */
#define SKIP_SCAN_AN15                  0x7FFF /*Skip AN15 for Input Scan */
 
/*defines for AD1CSSH register To Be used With configscan_h in OpenADCx.c */

#define SKIP_SCAN_AN16                   0xFFFE /*Skip AN16 for Input Scan */
#define SKIP_SCAN_AN17                   0xFFFD /*Skip AN17 for Input Scan */    
#define SKIP_SCAN_AN18                   0xFFFB /*Skip AN18 for Input Scan */
#define SKIP_SCAN_AN19                   0xFFF7 /*Skip AN19 for Input Scan */
#define SKIP_SCAN_AN20                   0xFFEF /*Skip AN20 for Input Scan */
#define SKIP_SCAN_AN21                   0xFFDF /*Skip AN21 for Input Scan */    
#define SKIP_SCAN_AN22                   0xFFBF /*Skip AN22 for Input Scan */
#define SKIP_SCAN_AN23                   0xFF7F /*Skip AN23 for Input Scan */
#define SKIP_SCAN_AN24                   0xFEFF /*Skip AN24 for Input Scan */
#define SKIP_SCAN_AN25                   0xFDFF /*Skip AN25 for Input Scan */    
#define SKIP_SCAN_AN26                   0xFBFF /*Skip AN26 for Input Scan */
#define SKIP_SCAN_AN27                   0xF7FF /*Skip AN27 for Input Scan */
#define SKIP_SCAN_AN28                   0xEFFF /*Skip AN28 for Input Scan */
#define SKIP_SCAN_AN29                   0xDFFF /*Skip AN29 for Input Scan */   
#define SKIP_SCAN_AN30                   0xBFFF /*Skip AN30 for Input Scan */
#define SKIP_SCAN_AN31                   0x7FFF /*Skip AN31 for Input Scan */

#define SCAN_NONE_0_15                       0x0000 /*Skip AN0-AN15 for Input Scan */
#define SCAN_ALL_0_15                        0xFFFF /*Enable AN0-AN15 for Input Scan */

#define SCAN_NONE_16_31                      0x0000 /*Skip AN16-AN31 for Input Scan */
#define SCAN_ALL_16_31                       0xFFFF /*Enable AN16-AN31 for Input Scan */

#if defined (_PCFG0) 

/*defines for AD1PCFGL and AD2PCFGL registers */

#define ENABLE_AN0_ANA                  0xFFFE /*Enable AN0 in analog mode */
#define ENABLE_AN1_ANA                  0xFFFD /*Enable AN1 in analog mode */
#define ENABLE_AN2_ANA                  0xFFFB /*Enable AN2 in analog mode */
#define ENABLE_AN3_ANA                  0xFFF7 /*Enable AN3 in analog mode */
#define ENABLE_AN4_ANA                  0xFFEF /*Enable AN4 in analog mode */
#define ENABLE_AN5_ANA                  0xFFDF /*Enable AN5 in analog mode */
#define ENABLE_AN6_ANA                  0xFFBF /*Enable AN6 in analog mode */
#define ENABLE_AN7_ANA                  0xFF7F /*Enable AN7 in analog mode */
#define ENABLE_AN8_ANA                  0xFEFF /*Enable AN8 in analog mode */
#define ENABLE_AN9_ANA                  0xFDFF /*Enable AN9 in analog mode */
#define ENABLE_AN10_ANA                 0xFBFF /*Enable AN10 in analog mode */
#define ENABLE_AN11_ANA                 0xF7FF /*Enable AN11 in analog mode */
#define ENABLE_AN12_ANA                 0xEFFF /*Enable AN12 in analog mode */
#define ENABLE_AN13_ANA                 0xDFFF /*Enable AN13 in analog mode */
#define ENABLE_AN14_ANA                 0xBFFF /*Enable AN14 in analog mode */
#define ENABLE_AN15_ANA                 0x7FFF /*Enable AN15 in analog mode */

/*defines for AD1PCFGH register */

#define ENABLE_AN16_ANA                 0xFFFE /*Enable AN16 in analog mode */
#define ENABLE_AN17_ANA                 0xFFFD /*Enable AN17 in analog mode */
#define ENABLE_AN18_ANA                 0xFFFB /*Enable AN18 in analog mode */
#define ENABLE_AN19_ANA                 0xFFF7 /*Enable AN19 in analog mode */
#define ENABLE_AN20_ANA                 0xFFEF /*Enable AN20 in analog mode */
#define ENABLE_AN21_ANA                 0xFFDF /*Enable AN21 in analog mode */
#define ENABLE_AN22_ANA                 0xFFBF /*Enable AN22 in analog mode */
#define ENABLE_AN23_ANA                 0xFF7F /*Enable AN23 in analog mode */
#define ENABLE_AN24_ANA                 0xFEFF /*Enable AN24 in analog mode */
#define ENABLE_AN25_ANA                 0xFDFF /*Enable AN25 in analog mode */
#define ENABLE_AN26_ANA                 0xFBFF /*Enable AN26 in analog mode */
#define ENABLE_AN27_ANA                 0xF7FF /*Enable AN27 in analog mode */
#define ENABLE_AN28_ANA                 0xEFFF /*Enable AN28 in analog mode */
#define ENABLE_AN29_ANA                 0xDFFF /*Enable AN29 in analog mode */
#define ENABLE_AN30_ANA                 0xBFFF /*Enable AN30 in analog mode */
#define ENABLE_AN31_ANA                 0x7FFF /*Enable AN31 in analog mode */

#define ENABLE_ALL_ANA_0_15             0x0000 /*Enable AN0-AN15 in analog mode */
#define ENABLE_ALL_DIG_0_15             0xFFFF /*Enable AN0-AN15 in Digital mode */

#define ENABLE_ALL_ANA_16_31            0x0000 /*Enable AN16-AN31 in analog mode */
#define ENABLE_ALL_DIG_16_31            0xFFFF /*Enable AN16-AN31 in Digital mode */

#elif defined (RSTPRI_AF)

/*defines for ANSELA register To Be used With configport_a in OpenADCx.c */

#define ENABLE_AN22_ANA 				0x0040 /* _ANSA6 ANSELAbits.ANSA6 */
#define ENABLE_AN23_ANA 				0x0080 /* _ANSA7 ANSELAbits.ANSA7 */
#define ENABLE_VREF_N_ANA 			0x0200 /* _ANSA9 ANSELAbits.ANSA9 */
#define ENABLE_VREF_P_ANA 			0x0400 /* _ANSA10 ANSELAbits.ANSA10 */

/*defines for ANSELB register To Be used With configport_b in OpenADCx.c */

#define ENABLE_AN0_ANA 				0x0001 /* _ANSB0 ANSELBbits.ANSB0   */
#define ENABLE_AN1_ANA 				0x0002 /* _ANSB1 ANSELBbits.ANSB1   */
#define ENABLE_AN2_ANA 				0x0004 /* _ANSB2 ANSELBbits.ANSB2   */
#define ENABLE_AN3_ANA 				0x0008 /* _ANSB3 ANSELBbits.ANSB3   */
#define ENABLE_AN4_ANA 				0x0010 /* _ANSB4 ANSELBbits.ANSB4   */
#define ENABLE_AN5_ANA 				0x0020 /* _ANSB5 ANSELBbits.ANSB5   */
#define ENABLE_AN6_ANA 				0x0040 /* _ANSB6 ANSELBbits.ANSB6   */
#define ENABLE_AN7_ANA 				0x0080 /* _ANSB7 ANSELBbits.ANSB7   */
#define ENABLE_AN8_ANA 				0x0100 /* _ANSB8 ANSELBbits.ANSB8   */
#define ENABLE_AN9_ANA 				0x0200 /* _ANSB9 ANSELBbits.ANSB9   */
#define ENABLE_AN10_ANA				0x0400 /* _ANSB10 ANSELBbits.ANSB10 */
#define ENABLE_AN11_ANA				0x0800 /* _ANSB11 ANSELBbits.ANSB11 */
#define ENABLE_AN12_ANA				0x1000 /* _ANSB12 ANSELBbits.ANSB12 */
#define ENABLE_AN13_ANA				0x2000 /* _ANSB13 ANSELBbits.ANSB13 */
#define ENABLE_AN14_ANA				0x4000 /* _ANSB14 ANSELBbits.ANSB14 */
#define ENABLE_AN15_ANA				0x8000 /* _ANSB15 ANSELBbits.ANSB15 */

/*defines for ANSELC register To Be used With configport_c in OpenADCx.c*/

#define ENABLE_AN16_ANA				0x0002 /* _ANSC1 ANSELCbits.ANSC1 */
#define ENABLE_AN17_ANA				0x0004 /* _ANSC2 ANSELCbits.ANSC2 */
#define ENABLE_AN18_ANA				0x0008 /* _ANSC3 ANSELCbits.ANSC3 */
#define ENABLE_AN19_ANA				0x0010 /* _ANSC4 ANSELCbits.ANSC4 */

/*defines for ANSELE register To Be used With configport_e in OpenADCx.c */

#define ENABLE_AN24_ANA				0x0001 /* _ANSE0 ANSELEbits.ANSE0 */
#define ENABLE_AN25_ANA				0x0002 /* _ANSE1 ANSELEbits.ANSE1 */
#define ENABLE_AN26_ANA				0x0004 /* _ANSE2 ANSELEbits.ANSE2 */
#define ENABLE_AN27_ANA				0x0008 /* _ANSE3 ANSELEbits.ANSE3 */
#define ENABLE_AN28_ANA				0x0010 /* _ANSE4 ANSELEbits.ANSE4 */
#define ENABLE_AN29_ANA				0x0020 /* _ANSE5 ANSELEbits.ANSE5 */
#define ENABLE_AN30_ANA				0x0040 /* _ANSE6 ANSELEbits.ANSE6 */
#define ENABLE_AN31_ANA				0x0080 /* _ANSE7 ANSELEbits.ANSE7 */
#define ENABLE_AN20_ANA				0x0100 /* _ANSE8 ANSELEbits.ANSE8 */
#define ENABLE_AN21_ANA				0x0200 /* _ANSE9 ANSELEbits.ANSE9 */

#else

/*defines for ANSELA register To Be used With configport_a in OpenADCx.c */

#define ENABLE_AN0_ANA 				0x0001 /* _ANSA0 ANSELAbits.ANSA0   */
#define ENABLE_AN1_ANA 				0x0002 /* _ANSA1 ANSELAbits.ANSA1   */
#define ENABLE_AN32_ANA 				0x0004 /* _ANSA2 ANSELAbits.ANSA2   */
#define ENABLE_AN24_ANA				0x0010 /* _ANSA4 ANSELAbits.ANSA4 */
#define ENABLE_AN28_ANA				0x0200 /* _ANSA9 ANSELAbits.ANSA9 */
#define ENABLE_AN9_ANA 				0x0800 /* _ANSA11 ANSELAbits.ANSA11   */
#define ENABLE_AN10_ANA				0x1000 /* _ANSA12 ANSELAbits.ANSA12 */
#define ENABLE_AN46_ANA				0x4000 /* _ANSA14 ANSELAbits.ANSA14 */
#define ENABLE_AN47_ANA				0x8000 /* _ANSA15 ANSELAbits.ANSA15 */

/*defines for ANSELB register To Be used With configport_b in OpenADCx.c */

#define ENABLE_AN2_ANA 				0x0001 /* _ANSB0 ANSELBbits.ANSB0   */
#define ENABLE_AN3_ANA 				0x0002 /* _ANSB1 ANSELBbits.ANSB1   */
#define ENABLE_AN4_ANA 				0x0004 /* _ANSB2 ANSELBbits.ANSB2   */
#define ENABLE_AN5_ANA 				0x0008 /* _ANSB3 ANSELBbits.ANSB3   */
#define ENABLE_AN25_ANA				0x0080 /* _ANSB7 ANSELBbits.ANSB7   */
#define ENABLE_AN26_ANA				0x0100 /* _ANSB8 ANSELBbits.ANSB8   */
#define ENABLE_AN27_ANA				0x0200 /* _ANSB9 ANSELBbits.ANSB9   */

#if !defined (_RF9)
#define ENABLE_VREF_N_ANA 			0x0001 /* _ANSB0 ANSELBbits.ANSB0 */
#define ENABLE_VREF_P_ANA 			0x0002 /* _ANSAB1 ANSELBbits.ANSB1 */
#endif

/*defines for ANSELC register To Be used With configport_c in OpenADCx.c*/

#define ENABLE_AN6_ANA				0x0001 /* _ANSC0 ANSELCbits.ANSC0 */
#define ENABLE_AN7_ANA				0x0002 /* _ANSC1 ANSELCbits.ANSC1 */
#define ENABLE_AN8_ANA				0x0004 /* _ANSC2 ANSELCbits.ANSC2 */
#define ENABLE_AN29_ANA				0x0008 /* _ANSC3 ANSELCbits.ANSC3 */
#define ENABLE_AN30_ANA				0x0010 /* _ANSC4 ANSELCbits.ANSC4 */
#define ENABLE_AN31_ANA				0x0020 /* _ANSC5 ANSELCbits.ANSC5 */
#define ENABLE_AN48_ANA				0x0400 /* _ANSC10 ANSELCbits.ANSC10 */
#define ENABLE_AN11_ANA				0x0800 /* _ANSC11 ANSELCbits.ANSC11 */
#define ENABLE_AN49_ANA				0x1000 /* _ANSC12 ANSELCbits.ANSC12 */

/*defines for ANSELD register To Be used With configport_d in OpenADCx.c*/

#define ENABLE_AN38_ANA				0x4000 /* _ANSD14 ANSELDbits.ANSD14 */
#define ENABLE_AN39_ANA				0x8000 /* _ANSD15 ANSELDbits.ANSD15 */

/*defines for ANSELE register To Be used With configport_e in OpenADCx.c */

#define ENABLE_AN21_ANA				0x0100 /* _ANSE8 ANSELEbits.ANSE8 */
#define ENABLE_AN20_ANA				0x0200 /* _ANSE9 ANSELEbits.ANSE9 */
#define ENABLE_AN12_ANA				0x1000 /* _ANSE12 ANSELEbits.ANSE12 */
#define ENABLE_AN13_ANA				0x2000 /* _ANSE13 ANSELEbits.ANSE13 */
#define ENABLE_AN14_ANA				0x4000 /* _ANSE14 ANSELEbits.ANSE14 */
#define ENABLE_AN15_ANA				0x8000 /* _ANSE15 ANSELEbits.ANSE15 */

/*defines for ANSELF register To Be used With configport_f in OpenADCx.c */

#define ENABLE_AN44_ANA				0x0010 /* _ANSF4 ANSELFbits.ANSF4 */
#define ENABLE_AN45_ANA				0x0020 /* _ANSF5 ANSELFbits.ANSF5 */
#define ENABLE_AN33_ANA				0x0200 /* _ANSF9 ANSELFbits.ANSF9 */
#define ENABLE_AN34_ANA				0x0400 /* _ANSF10 ANSELFbits.ANSF10 */
#define ENABLE_AN37_ANA				0x1000 /* _ANSF12 ANSELFbits.ANSF12 */
#define ENABLE_AN36_ANA				0x2000 /* _ANSF13 ANSELFbits.ANSF13 */

#if defined (_RF9)
#define ENABLE_VREF_N_ANA 			0x0200 /* _ANSF9 ANSELFbits.ANSF9 */
#define ENABLE_VREF_P_ANA 			0x0400 /* _ANSF10 ANSELFbits.ANSF10 */
#endif

/*defines for ANSELG register To Be used With configport_g in OpenADCx.c */

#define ENABLE_AN42_ANA				0x0004 /* _ANSG2 ANSELGbits.ANSG2 */
#define ENABLE_AN43_ANA				0x0008 /* _ANSG3 ANSELGbits.ANSG3 */
#define ENABLE_AN19_ANA				0x0040 /* _ANSG6 ANSELGbits.ANSG6 */
#define ENABLE_AN18_ANA				0x0080 /* _ANSG7 ANSELGbits.ANSG7 */
#define ENABLE_AN17_ANA				0x0100 /* _ANSG8 ANSELGbits.ANSG8 */
#define ENABLE_AN16_ANA				0x0200 /* _ANSG9 ANSELGbits.ANSG9 */
#define ENABLE_AN22_ANA				0x0400 /* _ANSG10 ANSELGbits.ANSG10 */
#define ENABLE_AN35_ANA				0x0800 /* _ANSG11 ANSELGbits.ANSG11 */
#define ENABLE_AN23_ANA				0x8000 /* _ANSG15 ANSELGbits.ANSG15 */

#endif

	/* Setting the priority of adc interrupt */
#define ADC_INT_PRI_0                   0xFFF8
#define ADC_INT_PRI_1                   0xFFF9
#define ADC_INT_PRI_2                   0xFFFA
#define ADC_INT_PRI_3                   0xFFFB
#define ADC_INT_PRI_4                   0xFFFC
#define ADC_INT_PRI_5                   0xFFFD
#define ADC_INT_PRI_6                   0xFFFE
#define ADC_INT_PRI_7                   0xFFFF

/* enable / disable interrupts */

#define ADC_INT_ENABLE                  0xFFFF
#define ADC_INT_DISABLE                 0xFFF7

/* Macros to  Enable/Disable interrupts and set Interrupt priority */

#define EnableIntADC1()                  (_AD1IE = 1)
#define DisableIntADC1()                 (_AD1IE = 0)
#define SetPriorityIntADC1(priority)     (_AD1IP = priority)
#define StopSampADC1()                   ConvertADC1()

#ifdef _PCFG0

void OpenADC1(unsigned int config1, unsigned int config2, unsigned int config3,
              unsigned int config4, unsigned int configport_l,
              unsigned int configport_h, unsigned int configscan_h,
              unsigned int configscan_l) __attribute__ ((section (".libperi"))); /* config ADC */

#else

void OpenADC1(unsigned int config1, unsigned int config2, unsigned int config3,
              unsigned int config4, unsigned int configport_a, unsigned int configport_b,
              unsigned int configport_c,unsigned int configport_d, unsigned int configport_e,
			  unsigned int configport_f, unsigned int configport_g, unsigned int configport_h,
			  unsigned int configport_i, unsigned int configport_j, unsigned int configport_k, 
			  unsigned int configscan_h,  unsigned int configscan_l) __attribute__ ((section (".libperi"))); /* config ADC */

#endif

void ConvertADC1(void) __attribute__ ((section (".libperi")));                      /* Start an A/D conversion */

void SetChanADC1(unsigned int channel123, unsigned int channel0)__attribute__ ((section (".libperi")));              /* Set A/D to specified channel */

unsigned int ReadADC1(unsigned char bufIndex)__attribute__ ((section (".libperi")));        /* Read A/D result */

void CloseADC1(void) __attribute__ ((section (".libperi")));                        /* Turn off A/D */

char BusyADC1(void) __attribute__ ((section (".libperi")));                         /* Check status of A/D conversion */

void ConfigIntADC1(unsigned int config)__attribute__ ((section (".libperi")));

#ifdef _AD2IF 

#define EnableIntADC2()                  (_AD2IE = 1)
#define DisableIntADC2()                 (_AD2IE = 0)
#define SetPriorityIntADC2(priority)     (_AD2IP = priority)
#define StopSampADC2()                   ConvertADC2()

#ifdef _PCFG0

void OpenADC2(unsigned int config1, unsigned int config2, unsigned int config3,
              unsigned int config4, unsigned int configport_l,
              unsigned int configport_h, unsigned int configscan_h,
              unsigned int configscan_l)__attribute__ ((section (".libperi"))); /* config ADC */

#else

void OpenADC1(unsigned int config1, unsigned int config2, unsigned int config3,
              unsigned int config4, unsigned int configport_a, unsigned int configport_b,
              unsigned int configport_c,unsigned int configport_d, unsigned int configport_e,
			  unsigned int configport_f, unsigned int configport_g, unsigned int configport_h,
			  unsigned int configport_i, unsigned int configport_j, unsigned int configport_k, 
			  unsigned int configscan_h,  unsigned int configscan_l) __attribute__ ((section (".libperi"))); /* config ADC */

#endif

void ConvertADC2(void) __attribute__ ((section (".libperi")));                      /* Start an A/D conversion */

void SetChanADC2(unsigned int channel123,unsigned int channel0)__attribute__ ((section (".libperi")));              /* Set A/D to specified channel */

unsigned int ReadADC2(unsigned char bufIndex)__attribute__ ((section (".libperi")));        /* Read A/D result */

void CloseADC2(void) __attribute__ ((section (".libperi")));                        /* Turn off A/D */

char BusyADC2(void) __attribute__ ((section (".libperi")));                         /* Check status of A/D conversion */

void ConfigIntADC2(unsigned int config)__attribute__ ((section (".libperi")));

#endif

#endif

