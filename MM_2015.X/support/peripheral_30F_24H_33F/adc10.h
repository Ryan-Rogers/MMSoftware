/********************************************************************/
/*              Header for 10bit ADC module library functions       */
/*******************************************************************/

#if defined(__dsPIC30F__)
#include <p30Fxxxx.h>
#else
#error "Does not build on this target"
#endif

#ifndef __ADC10_H
#define __ADC10_H

#if defined (__dsPIC30F2010__) || defined (__dsPIC30F3010__) || \
    defined (__dsPIC30F4012__) || defined (__dsPIC30F3011__) || \
    defined (__dsPIC30F4011__) || defined (__dsPIC30F6010__) || \
    defined (__dsPIC30F5015__) || defined (__dsPIC30F6010A__) || \
    defined (__dsPIC30F5016__) || defined (__dsPIC30F6015__)

#define _ADC_10BIT

/* List of SFRs for ADC */
/* This list contains the SFRs with default (POR) values to be used for configuring ADC */
/* The user can modify this based on the requirement */
#define ADCON1_VALUE               0x0000
#define ADCON2_VALUE               0x0000
#define ADCON3_VALUE               0x0000
#define ADCHS_VALUE                0x0000
#define ADPCFG_VALUE               0x0000
#define ADCSSL_VALUE               0x0000

/* ADCON1 Configuration Bit Definitions */

#define ADC_MODULE_ON               0xFFFF /* A/D Converter on */
#define ADC_MODULE_OFF              0x7FFF /* A/D Converter off */

#define ADC_IDLE_CONTINUE           0xDFFF /* A/D Operate in Idle mode */
#define ADC_IDLE_STOP               0xFFFF /* A/D Stop in Idle mode */

#define ADC_FORMAT_SIGN_FRACT       0xFFFF /* A/D data format signed fractional */
#define ADC_FORMAT_FRACT            0xFEFF /* A/D data format fractional */
#define ADC_FORMAT_SIGN_INT         0xFDFF /* A/D data format signed integer */
#define ADC_FORMAT_INTG             0xFCFF /* A/D data format integer */

/* SSRC<2:0> bit defines */
/* Internal counter ends sampling and starts conversion (Auto convert) */
#define ADC_CLK_AUTO                0xFFFF

/* MPWM interval ends sampling and starts conversion */
#define ADC_CLK_MPWM                0xFF7F

/* Timer compare ends sampling and starts conversion */
#define ADC_CLK_TMR                 0xFF5F

/* Active transition on INT0 ends sampling and starts conversion */
#define ADC_CLK_INT0                0xFF3F

/* Clearing sample (SAMP) bit ends sampling and starts conversion */
#define ADC_CLK_MANUAL              0xFF1F

/* Simultaneous sampling bits */
#define ADC_SAMPLE_SIMULTANEOUS     0xFFFF
#define ADC_SAMPLE_INDIVIDUAL       0xFFF7

/* Auto sampling Select */
#define ADC_AUTO_SAMPLING_ON        0xFFFF

/* Samples multiple channels individually in sequence */
#define ADC_AUTO_SAMPLING_OFF       0xFFFB

/* sample / hold amplifiers are sampling */
#define ADC_SAMP_ON                 0xFFFF
/* sample / hold amplifiers are holding */
#define ADC_SAMP_OFF                0xFFFD
#define ADC_SAMP_OFF                0xFFFD

/* defines for the ADCON2 register */

/* A/D Voltage reference configuration Vref+ is AVdd and Vref- is AVss */
#define ADC_VREF_AVDD_AVSS          0x0FFF
/* A/D Voltage reference configuration Vref+ external and Vref- is AVss */
#define ADC_VREF_EXT_AVSS           0x2FFF
/* A/D Voltage reference configuration Vref+ AVdd and Vref- external */
#define ADC_VREF_AVDD_EXT           0x4FFF
/* A/D Voltage reference configuration both Vref+ and Vref- are external */
#define ADC_VREF_EXT_EXT            0x6FFF

/* A/D Scan Input Selections for CH0 during SAMPLE A */
#define ADC_SCAN_ON                 0xEFFF
/* A/D Do notScan Input Selections for CH0+ during SAMPLE A */
#define ADC_SCAN_OFF                0xEBFF

/* A/D channels utilised */
#define ADC_CONVERT_CH_0ABC         0xEFFF
#define ADC_CONVERT_CH_0A           0xEDFF
#define ADC_CONVERT_CH0             0xECFF

/* A/D Interrupt at the completion of conversion for each sample */
#define ADC_SAMPLES_PER_INT_1       0xEFC3
/* A/D Interrupt at the completion of conversion for each 2nd sample */
#define ADC_SAMPLES_PER_INT_2       0xEFC7
/* A/D interrupt at the completion of conversion for each 3rd sample */
#define ADC_SAMPLES_PER_INT_3       0xEFCB
/* A/D interrupt at the completion of conversion for each 4th sample */
#define ADC_SAMPLES_PER_INT_4       0xEFCF
/* A/D interrupt at the completion of conversion for each 5th sample */
#define ADC_SAMPLES_PER_INT_5       0xEFD3
/* A/D interrupt at the completion of conversion for each 6th sample */
#define ADC_SAMPLES_PER_INT_6       0xEFD7
/* A/D interrupt at the completion of conversion for each 7th sample */
#define ADC_SAMPLES_PER_INT_7       0xEFDB
/* A/D interrupt at the completion of conversion for each 8th sample */
#define ADC_SAMPLES_PER_INT_8       0xEFDF
/* A/D interrupt at the completion of conversion for each 9th sample */
#define ADC_SAMPLES_PER_INT_9       0xEFE3
/* A/D interrupt at the completion of conversion for each 10th sample */
#define ADC_SAMPLES_PER_INT_10      0xEFE7
/* A/D interrupt at the completion of conversion for each 11th sample */
#define ADC_SAMPLES_PER_INT_11      0xEFEB
/* A/D interrupt at the completion of conversion for each 12th sample */
#define ADC_SAMPLES_PER_INT_12      0xEFEF
/* A/D interrupt at the completion of conversion for each 13th sample */
#define ADC_SAMPLES_PER_INT_13      0xEFF3
/* A/D interrupt at the completion of conversion for each 14th sample */
#define ADC_SAMPLES_PER_INT_14      0xEFF7
/* A/D interrupt at the completion of conversion for each 15th sample */
#define ADC_SAMPLES_PER_INT_15      0xEFFB
/* A/D interrupt at the completion of conversion for each 16th sample */
#define ADC_SAMPLES_PER_INT_16      0xEFFF

/* BUFM bit defines */
#define ADC_ALT_BUF_ON              0xEFFF /* Buffer configured as 2 8-word buffers */
#define ADC_ALT_BUF_OFF             0xEFFD /* Buffer configured as 1 16-word buffer */

/* A/D Uses channel input selects for SAMPLE A on first sample and SAMPLE B on next sample */
#define ADC_ALT_INPUT_ON            0xEFFF /* alternate between MUXA and MUXB */

/* A/D Always uses channel input selects for SAMPLE A */
#define ADC_ALT_INPUT_OFF           0xEFFE /* use MUXA only */

/* defines for ADCON3 register */
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
#define ADC_CONV_CLK_SYSTEM         0xFF7F

/* A/D conversion clock select bit ADCS<5:0>*/
#define ADC_CONV_CLK_32Tcy          0xFFFF  /* A/D Conversion Clock Select bits */
#define ADC_CONV_CLK_63Tcy2         0xFFFE  /* A/D Conversion Clock Select bits */
#define ADC_CONV_CLK_31Tcy          0xFFFD  /* A/D Conversion Clock Select bits */
#define ADC_CONV_CLK_61Tcy2         0xFFFC  /* A/D Conversion Clock Select bits */
#define ADC_CONV_CLK_30Tcy          0xFFFB
#define ADC_CONV_CLK_59Tcy2         0xFFFA
#define ADC_CONV_CLK_29Tcy          0xFFF9
#define ADC_CONV_CLK_57Tcy2         0xFFF8
#define ADC_CONV_CLK_28Tcy          0xFFF7
#define ADC_CONV_CLK_55Tcy2         0xFFF6
#define ADC_CONV_CLK_27Tcy          0xFFF5
#define ADC_CONV_CLK_53Tcy2         0xFFF4
#define ADC_CONV_CLK_26Tcy          0xFFF3
#define ADC_CONV_CLK_51Tcy2         0xFFF2
#define ADC_CONV_CLK_25Tcy          0xFFF1
#define ADC_CONV_CLK_49Tcy2         0xFFF0
#define ADC_CONV_CLK_24Tcy          0xFFEF
#define ADC_CONV_CLK_47Tcy2         0xFFEE
#define ADC_CONV_CLK_23Tcy          0xFFED
#define ADC_CONV_CLK_45Tcy2         0xFFEC
#define ADC_CONV_CLK_22Tcy          0xFFEB
#define ADC_CONV_CLK_43Tcy2         0xFFEA
#define ADC_CONV_CLK_21Tcy          0xFFE9
#define ADC_CONV_CLK_41Tcy2         0xFFE8
#define ADC_CONV_CLK_20Tcy          0xFFE7
#define ADC_CONV_CLK_39Tcy2         0xFFE6
#define ADC_CONV_CLK_19Tcy          0xFFE5
#define ADC_CONV_CLK_37Tcy2         0xFFE4
#define ADC_CONV_CLK_18Tcy          0xFFE3
#define ADC_CONV_CLK_35Tcy2         0xFFE2
#define ADC_CONV_CLK_17Tcy          0xFFE1
#define ADC_CONV_CLK_33Tcy2         0xFFE0
#define ADC_CONV_CLK_16Tcy          0xFFDF
#define ADC_CONV_CLK_31Tcy2         0xFFDE
#define ADC_CONV_CLK_15Tcy          0xFFDD
#define ADC_CONV_CLK_29Tcy2         0xFFDC
#define ADC_CONV_CLK_14Tcy          0xFFDB
#define ADC_CONV_CLK_27Tcy2         0xFFDA
#define ADC_CONV_CLK_13Tcy          0xFFD9
#define ADC_CONV_CLK_25Tcy2         0xFFD8
#define ADC_CONV_CLK_12Tcy          0xFFD7
#define ADC_CONV_CLK_23Tcy2         0xFFD6
#define ADC_CONV_CLK_11Tcy          0xFFD5
#define ADC_CONV_CLK_21Tcy2         0xFFD4
#define ADC_CONV_CLK_10Tcy          0xFFD3
#define ADC_CONV_CLK_19Tcy2         0xFFD2
#define ADC_CONV_CLK_9Tcy           0xFFD1
#define ADC_CONV_CLK_17Tcy2         0xFFD0
#define ADC_CONV_CLK_8Tcy           0xFFCF
#define ADC_CONV_CLK_15Tcy2         0xFFCE
#define ADC_CONV_CLK_7Tcy           0xFFCD
#define ADC_CONV_CLK_13Tcy2         0xFFCC
#define ADC_CONV_CLK_6Tcy           0xFFCB
#define ADC_CONV_CLK_11Tcy2         0xFFCA
#define ADC_CONV_CLK_5Tcy           0xFFC9
#define ADC_CONV_CLK_9Tcy2          0xFFC8
#define ADC_CONV_CLK_4Tcy           0xFFC7
#define ADC_CONV_CLK_7Tcy2          0xFFC6
#define ADC_CONV_CLK_3Tcy           0xFFC5
#define ADC_CONV_CLK_5Tcy2          0xFFC4
#define ADC_CONV_CLK_2Tcy           0xFFC3
#define ADC_CONV_CLK_3Tcy2          0xFFC2
#define ADC_CONV_CLK_Tcy            0xFFC1  /* A/D Conversion Clock Select bits */
#define ADC_CONV_CLK_Tcy2           0xFFC0  /* A/D Conversion Clock Select bits */

/* Input select register (ADCHS)configuration defines */
#define ADC_CH0_POS_SAMPLEA_AN15    0xFFFF  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN15 */
#define ADC_CH0_POS_SAMPLEA_AN14    0xFFFE  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN14 */
#define ADC_CH0_POS_SAMPLEA_AN13    0xFFFD  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN13 */
#define ADC_CH0_POS_SAMPLEA_AN12    0xFFFC  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN12 */
#define ADC_CH0_POS_SAMPLEA_AN11    0xFFFB  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN11 */
#define ADC_CH0_POS_SAMPLEA_AN10    0xFFFA  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN10 */
#define ADC_CH0_POS_SAMPLEA_AN9     0xFFF9  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN9 */  
#define ADC_CH0_POS_SAMPLEA_AN8     0xFFF8  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN8 */
#define ADC_CH0_POS_SAMPLEA_AN7     0xFFF7  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN7 */ 
#define ADC_CH0_POS_SAMPLEA_AN6     0xFFF6  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN6 */   
#define ADC_CH0_POS_SAMPLEA_AN5     0xFFF5  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN5 */   
#define ADC_CH0_POS_SAMPLEA_AN4     0xFFF4  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN4 */   
#define ADC_CH0_POS_SAMPLEA_AN3     0xFFF3  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN3 */   
#define ADC_CH0_POS_SAMPLEA_AN2     0xFFF2  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN2 */   
#define ADC_CH0_POS_SAMPLEA_AN1     0xFFF1  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN1 */   
#define ADC_CH0_POS_SAMPLEA_AN0     0xFFF0  /* A/D Chan 0 pos i/p sel for SAMPLE A is AN0 */   

#define ADC_CH0_NEG_SAMPLEA_AN1     0xFFFF  /* A/D Chan 0 neg i/p sel for SAMPLE A is AN1 */
#define ADC_CH0_NEG_SAMPLEA_NVREF   0xFFEF  /* A/D Chan 0 neg i/p sel for SAMPLE A is -Vref */
#define ADC_CH0_NEG_SAMPLEA_VREFN   0xFFEF  /* A/D Chan 0 neg i/p sel for SAMPLE A is -Vref */


/* CHXSA defines */
#define ADC_CHX_POS_SAMPLEA_AN3AN4AN5   0xFFFF  /* A/D Chan A B C pos i/p sel for SAMPLE A are AN3, 4 and 5 */
#define ADC_CHX_POS_SAMPLEA_AN0AN1AN2   0xFFDF  /* A/D Chan A B C pos i/p sel for SAMPLE A are AN0, 1 and 2 */

/* CHXNA defines */
#define ADC_CHX_NEG_SAMPLEA_AN9AN10AN11 0xFFFF  /* A/D CHA neg i/p is AN9, CHB neg input is AN10, CHC negative input is AN11 */
#define ADC_CHX_NEG_SAMPLEA_AN6AN7AN8   0xFFBF  /* A/D CHA neg i/p is AN6, CHB neg input is AN7, CHC negative input is AN8 */
#define ADC_CHX_NEG_SAMPLEA_NVREF       0xFF3F  /* A/D CHA, CHB, CHC neg input is VREF- (0xFF7F) */
#define ADC_CHX_NEG_SAMPLEA_VREFN       0xFF3F  /* A/D CHA, CHB, CHC neg input is VREF- (0xFF7F) */

/* CHXSB defines */
#define ADC_CHX_POS_SAMPLEB_AN3AN4AN5   0xFFFF  /* A/D Chan A B C pos i/p sel for SAMPLE B are AN3, 4 and 5 */
#define ADC_CHX_POS_SAMPLEB_AN0AN1AN2   0xDFFF  /* A/D Chan A B C pos i/p sel for SAMPLE B are AN0, 1 and 2 */

/* CHXNB defines */
#define ADC_CHX_NEG_SAMPLEB_AN9AN10AN11 0xFFFF  /* A/D CHA neg i/p is AN9, CHB neg input is AN10, CHC negative input is AN11 */
#define ADC_CHX_NEG_SAMPLEB_AN6AN7AN8   0xBFFF  /* A/D CHA neg i/p is AN6, CHB neg input is AN7, CHC negative input is AN8 */
#define ADC_CHX_NEG_SAMPLEB_NVREF       0x3FFF  /* A/D CHA, CHB, CHC neg input is VREF- (0xFF7F) */
#define ADC_CHX_NEG_SAMPLEB_VREFN       0x3FFF  /* A/D CHA, CHB, CHC neg input is VREF- (0xFF7F) */

#define ADC_CH0_POS_SAMPLEB_AN15    0xFFFF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN15 */
#define ADC_CH0_POS_SAMPLEB_AN14    0xFEFF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN14 */
#define ADC_CH0_POS_SAMPLEB_AN13    0xFDFF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN13 */
#define ADC_CH0_POS_SAMPLEB_AN12    0xFCFF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN12 */
#define ADC_CH0_POS_SAMPLEB_AN11    0xFBFF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN11 */
#define ADC_CH0_POS_SAMPLEB_AN10    0xFAFF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN10 */
#define ADC_CH0_POS_SAMPLEB_AN9     0xF9FF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN9 */
#define ADC_CH0_POS_SAMPLEB_AN8     0xF8FF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN8 */
#define ADC_CH0_POS_SAMPLEB_AN7     0xF7FF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN7 */
#define ADC_CH0_POS_SAMPLEB_AN6     0xF6FF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN6 */
#define ADC_CH0_POS_SAMPLEB_AN5     0xF5FF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN5 */
#define ADC_CH0_POS_SAMPLEB_AN4     0xF4FF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN4 */
#define ADC_CH0_POS_SAMPLEB_AN3     0xF3FF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN3 */
#define ADC_CH0_POS_SAMPLEB_AN2     0xF2FF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN2 */
#define ADC_CH0_POS_SAMPLEB_AN1     0xF1FF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN1 */
#define ADC_CH0_POS_SAMPLEB_AN0     0xF0FF  /* A/D Chan 0 pos i/p sel for SAMPLE B is AN0 */

#define ADC_CH0_NEG_SAMPLEB_AN1     0xFFFF  /* A/D Channel 0 negative input select for SAMPLE B */
#define ADC_CH0_NEG_SAMPLEB_NVREF   0xEFFF  /* A/D Channel 0 negative input select for SAMPLE B */
#define ADC_CH0_NEG_SAMPLEB_VREFN   0xEFFF  /* A/D Channel 0 negative input select for SAMPLE B */

#define ADC_CHX_POS_SAMPLEB_AN3AN4AN5   0xFFFF  /* A/D Channel A B C positive input select for SAMPLE B */
#define ADC_CHX_POS_SAMPLEB_AN0AN1AN2   0xDFFF  /* A/D Channel A B C positive input select for SAMPLE B */

#define ADC_CHX_NEG_SAMPLEB_AN9AN10AN11 0xFFFF  /* A/D CHA negative input is AN9, CHB negative input is AN10, CHC negative input is AN11 */
#define ADC_CHX_NEG_SAMPLEB_AN6AN7AN8   0xBFFF  /* A/D CHA negative input is AN6, CHB negative input is AN7, CHC negative input is AN8 */
#define ADC_CHX_NEG_SAMPLEB_NVREF       0x3FFF  /* A/D CHA, CHB, CHC negative input is VREF- (0xFF7F) */
#define ADC_CHX_NEG_SAMPLEB_VREFN       0x3FFF  /* A/D CHA, CHB, CHC negative input is VREF- (0xFF7F) */

/* ADC read buffer starting point defines */
#define ADC_RESULT_FIRST                0x0000  /* A/D read results from 00h address */
#define ADC_RESULT_SECOND               0x0008  /* A/D read results from the 08h address */

/*defines for ADCSSL register */

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
 
#define SCAN_NONE                       0x0000 /*Skip AN0-AN15 for Input Scan */
#define SCAN_ALL                        0xFFFF /*Enable AN0-AN15 for Input Scan */

/*defines for ADPCFG register */

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

#define ENABLE_ALL_ANA                  0x0000 /*Enable AN0-AN15 in analog mode */
#define ENABLE_ALL_DIG                  0xFFFF /*Enable AN0-AN15 in Digital mode */

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

/* Macros to  Enable/Disable interrupts and set Interrupt priority of ADC module */
#define EnableIntADC                    IEC0bits.ADIE = 1
#define DisableIntADC                   IEC0bits.ADIE = 0
#define SetPriorityIntADC(priority)     IPC2bits.ADIP = (priority)

/* A/D Converter Function Prototypes */

#define StopSampADC10               ConvertADC10

void OpenADC10(unsigned int, unsigned int, unsigned int,
     unsigned int, unsigned int) __attribute__ ((section (".libperi")));              /* config ADC */

void ConvertADC10(void) __attribute__ ((section (".libperi")));                       /* Start an A/D conversion */

void SetChanADC10(unsigned int) __attribute__ ((section (".libperi"))); /* Set A/D to specified channel */

unsigned int ReadADC10(unsigned char) __attribute__ ((section (".libperi")));         /*Read A/D result */

void CloseADC10(void) __attribute__ ((section (".libperi")));                         /* Turn off A/D */

char BusyADC10() __attribute__ ((section (".libperi")));                              /* Check status of A/D conversion */

void ConfigIntADC10(unsigned int) __attribute__ ((section (".libperi")));

#endif

#endif
