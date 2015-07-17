/**********************************************************************/
/*              Header for HSPWM module library functions             */
/**********************************************************************/
#if defined(__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined(__PIC24E__)
#include <p24Exxxx.h>
#else
#error "Does not build on this target"
#endif

#ifndef __HSPWM_H
#define __HSPWM_H

/* List of SFRs for PWM */
/* This list contains the SFRs with default (POR) values to be used for configuring PWM */
/* The user can modify this based on the requirement */

#define PTCON_VALUE             		0x0000
#define PTCON2_VALUE				0x0000
#define PTPER_VALUE             		0x0000
#define SEVTCMP_VALUE           		0x0000
#define MDC_VALUE					0x0000
#define STCON_VALUE             		0x0000
#define STCON2_VALUE				0x0000
#define STPER_VALUE             		0x0000
#define SSEVTCMP_VALUE           		0x0000
#define CHOP_VALUE		         	0x0000

#define PWMCON1_VALUE           		0x0000
#define PWMCON2_VALUE           		0x0000
#define PWMCON3_VALUE           		0x0000
#define PWMCON4_VALUE           		0x0000
#define PWMCON5_VALUE           		0x0000
#define PWMCON6_VALUE           		0x0000
#define PWMCON7_VALUE           		0x0000

#define IOCON1_VALUE           		0x0000
#define IOCON2_VALUE           		0x0000
#define IOCON3_VALUE           		0x0000
#define IOCON4_VALUE           		0x0000
#define IOCON5_VALUE           		0x0000
#define IOCON6_VALUE           		0x0000
#define IOCON7_VALUE           		0x0000

#define FCLCON1_VALUE           		0x0000
#define FCLCON2_VALUE           		0x0000
#define FCLCON3_VALUE           		0x0000
#define FCLCON4_VALUE           		0x0000
#define FCLCON5_VALUE           		0x0000
#define FCLCON6_VALUE           		0x0000
#define FCLCON7_VALUE           		0x0000

#define PDC1_VALUE              		0x0000
#define PDC2_VALUE              		0x0000
#define PDC3_VALUE              		0x0000
#define PDC4_VALUE              		0x0000
#define PDC5_VALUE              		0x0000
#define PDC6_VALUE              		0x0000
#define PDC7_VALUE              		0x0000

#define PHASE1_VALUE           		0x0000
#define PHASE2_VALUE           		0x0000
#define PHASE3_VALUE           		0x0000
#define PHASE4_VALUE           		0x0000
#define PHASE5_VALUE           		0x0000
#define PHASE6_VALUE           		0x0000
#define PHASE7_VALUE           		0x0000

#define DTR1_VALUE           			0x0000
#define DTR2_VALUE           			0x0000
#define DTR3_VALUE           			0x0000
#define DTR4_VALUE           			0x0000
#define DTR5_VALUE           			0x0000
#define DTR6_VALUE           			0x0000
#define DTR7_VALUE           			0x0000

#define ALTDTR1_VALUE           		0x0000
#define ALTDTR2_VALUE           		0x0000
#define ALTDTR3_VALUE           		0x0000
#define ALTDTR4_VALUE           		0x0000
#define ALTDTR5_VALUE           		0x0000
#define ALTDTR6_VALUE           		0x0000
#define ALTDTR7_VALUE           		0x0000

#define SDC1_VALUE              		0x0000
#define SDC2_VALUE              		0x0000
#define SDC3_VALUE              		0x0000
#define SDC4_VALUE              		0x0000
#define SDC5_VALUE              		0x0000
#define SDC6_VALUE              		0x0000
#define SDC7_VALUE              		0x0000

#define SPHASE1_VALUE          			0x0000
#define SPHASE2_VALUE          			0x0000
#define SPHASE3_VALUE          			0x0000
#define SPHASE4_VALUE          			0x0000
#define SPHASE5_VALUE          			0x0000
#define SPHASE6_VALUE          			0x0000
#define SPHASE7_VALUE          			0x0000

#define TRIG1_VALUE           			0x0000
#define TRIG2_VALUE           			0x0000
#define TRIG3_VALUE           			0x0000
#define TRIG4_VALUE           			0x0000
#define TRIG5_VALUE           			0x0000
#define TRIG6_VALUE           			0x0000
#define TRIG7_VALUE           			0x0000

#define TRGCON1_VALUE           		0x0000
#define TRGCON2_VALUE           		0x0000
#define TRGCON3_VALUE           		0x0000
#define TRGCON4_VALUE           		0x0000
#define TRGCON5_VALUE           		0x0000
#define TRGCON6_VALUE           		0x0000
#define TRGCON7_VALUE           		0x0000

#define PWMCAP1_VALUE           		0x0000
#define PWMCAP2_VALUE           		0x0000
#define PWMCAP3_VALUE           		0x0000
#define PWMCAP4_VALUE           		0x0000
#define PWMCAP5_VALUE           		0x0000
#define PWMCAP6_VALUE           		0x0000
#define PWMCAP7_VALUE           		0x0000

#define LEBCON1_VALUE           		0x0000
#define LEBCON2_VALUE           		0x0000
#define LEBCON3_VALUE           		0x0000
#define LEBCON4_VALUE           		0x0000
#define LEBCON5_VALUE           		0x0000
#define LEBCON6_VALUE           		0x0000
#define LEBCON7_VALUE           		0x0000

#define LEBDLY1_VALUE           		0x0000
#define LEBDLY2_VALUE           		0x0000
#define LEBDLY3_VALUE           		0x0000
#define LEBDLY4_VALUE           		0x0000
#define LEBDLY5_VALUE           		0x0000
#define LEBDLY6_VALUE           		0x0000
#define LEBDLY7_VALUE           		0x0000

#define AUXCON1_VALUE           		0x0000
#define AUXCON2_VALUE           		0x0000
#define AUXCON3_VALUE           		0x0000
#define AUXCON4_VALUE           		0x0000
#define AUXCON5_VALUE           		0x0000
#define AUXCON6_VALUE           		0x0000
#define AUXCON7_VALUE           		0x0000

/*----------------------------------------------------------------------------------------------------*/
/* PTCON Configuration Bit Definitions :                                                              */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_MOD_EN					0x8000 /* PWM Module Enable */
#define PWM_MOD_DIS					0x0000 /* PWM Module Disable */

#define PWM_IDLE_STOP					0x2000 /* PWM Time base in Idle mode Operation halts */
#define PWM_IDLE_CONT					0x0000 /* PWM Time base in Idle mode Operation runs */

#define PWM_SEVT_INT					0x1000 /* Special Event Interrupt Status bit */

#define PWM_SEVT_INT_EN					0x0800 /* Special Event Interrupt Enable */
#define PWM_SEVT_INT_DIS				0x0000 /* Special Event Interrupt Disable */
 
#define PWM_PER_UPDATE_IMM				0x0400 /* Enable Period Update Immediate   */
#define PWM_PER_UPDATE_BOUND				0x0000 /* Enable Period Update on cycle Boundary */

#define PWM_SYNCPOL_LOW_ACT				0x0200 /* Input Polarity Synchronize Low active */
#define PWM_SYNCPOL_HIGH_ACT				0x0000 /* Input Polarity Synchronize High active */

#define PWM_PTB_SYNCO_EN				0x0100 /* Primary Time Base Sync Enable */
#define PWM_PTB_SYNCO_DIS				0x0000 /* Primary Time Base Sync Disable */

#define PWM_EXT_PTB_SYNC_EN				0x0080 /* External Primary Time Base Sync Enable  */
#define PWM_EXT_PTB_SYNC_DIS				0x0000 /* External Primary Time Base Sync Disable */

#define PWM_SYNCI1					0x0000 /* Sync1 Source Selection */ 
#ifndef _C5EVT
#define PWM_SYNCI2					0x0010 /* Sync2 Source Selection */ 
#endif
#define PWM_SYNCI_PTGO16				0x0020 /* PTGO16 Source Selection */
#define PWM_SYNCI_PTGO17				0x0030 /* PTGO17 Source Selection */


#define PWM_SEVT_OP_SCALE1				0x0000 /* Special Event Trig Output Postscaler 1:1  */
#define PWM_SEVT_OP_SCALE2				0x0001 /* Special Event Trig Output Postscaler 1:2  */
#define PWM_SEVT_OP_SCALE3				0x0002 /* Special Event Trig Output Postscaler 1:3  */
#define PWM_SEVT_OP_SCALE4				0x0003 /* Special Event Trig Output Postscaler 1:4  */
#define PWM_SEVT_OP_SCALE5				0x0004 /* Special Event Trig Output Postscaler 1:5  */
#define PWM_SEVT_OP_SCALE6				0x0005 /* Special Event Trig Output Postscaler 1:6  */
#define PWM_SEVT_OP_SCALE7				0x0006 /* Special Event Trig Output Postscaler 1:7  */
#define PWM_SEVT_OP_SCALE8				0x0007 /* Special Event Trig Output Postscaler 1:8  */
#define PWM_SEVT_OP_SCALE9				0x0008 /* Special Event Trig Output Postscaler 1:9  */
#define PWM_SEVT_OP_SCALE10				0x0009 /* Special Event Trig Output Postscaler 1:10 */
#define PWM_SEVT_OP_SCALE11				0x000A /* Special Event Trig Output Postscaler 1:11 */
#define PWM_SEVT_OP_SCALE12				0x000B /* Special Event Trig Output Postscaler 1:12 */
#define PWM_SEVT_OP_SCALE13				0x000C /* Special Event Trig Output Postscaler 1:13 */
#define PWM_SEVT_OP_SCALE14				0x000D /* Special Event Trig Output Postscaler 1:14 */
#define PWM_SEVT_OP_SCALE15				0x000E /* Special Event Trig Output Postscaler 1:15 */
#define PWM_SEVT_OP_SCALE16				0x000F /* Special Event Trig Output Postscaler 1:16 */

/*----------------------------------------------------------------------------------------------------*/
/* PTCON2 Configuration Bit Definitions :                                                             */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_INPUT_CLK_DIV0				0x0000 /* Divide by 1, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV1				0x0001 /* Divide by 2, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV2				0x0002 /* Divide by 4, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV3				0x0003 /* Divide by 8, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV4				0x0004 /* Divide by 16, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV5				0x0005 /* Divide by 32, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV6				0x0006 /* Divide by 64, Maximum PWM timing resolution  */

/*----------------------------------------------------------------------------------------------------*/
/* STCON Configuration Bit Definitions :                                                              */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_SEC_SEVT_INT				0x1000 /* Secondary Special Event Interrupt Status bit */

#define PWM_SEC_SEVT_INT_EN				0x0800 /* Secondary Special Event Interrupt Enable */
#define PWM_SEC_SEVT_INT_DIS				0x0000 /* Secondary Special Event Interrupt Disable */
 
#define PWM_SEC_PER_UPDATE_IMM			0x0400 /* Enable Secondary Period Update Immediate   */
#define PWM_SEC_PER_UPDATE_BOUND			0x0000 /* Enable Secondary Period Update on cycle Boundary */

#define PWM_SEC_SYNCPOL_LOW_ACT			0x0200 /* Input Polarity Synchronize Low active */
#define PWM_SEC_SYNCPOL_HIGH_ACT			0x0000 /* Input Polarity Synchronize High active */

#define PWM_SEC_SYNCO_EN				0x0100 /* Secondary Time Base Sync Enable */
#define PWM_SEC_SYNCO_DIS				0x0000 /* Secondary Time Base Sync Disable */

#define PWM_EXT_SEC_SYNC_EN				0x0080 /* External Secondary Time Base Sync Enable  */
#define PWM_EXT_SEC_SYNC_DIS				0x0000 /* External Secondary Time Base Sync Disable */

#ifdef _C5EVT
#define PWM_SYNCI1						0x0000 /* Sync1 Source Selection */ 
#define PWM_SYNCI_PTGO16				0x0020 /* PTGO16 Source Selection */
#define PWM_SYNCI_PTGO17				0x0030 /* PTGO17 Source Selection */
#else
#define PWM_SEC_SYNCI1					0x0000 /* Secondary Sync1 Source Selection */ 
#define PWM_SEC_SYNCI2					0x0010 /* Secondary Sync2 Source Selection */ 
#endif

#define PWM_SEC_SEVT_OP_SCALE1			0x0000 /* Secondary Special Event Trig Output Postscaler 1:1  */
#define PWM_SEC_SEVT_OP_SCALE2			0x0001 /* Secondary Special Event Trig Output Postscaler 1:2  */
#define PWM_SEC_SEVT_OP_SCALE3			0x0002 /* Secondary Special Event Trig Output Postscaler 1:3  */
#define PWM_SEC_SEVT_OP_SCALE4			0x0003 /* Secondary Special Event Trig Output Postscaler 1:4  */
#define PWM_SEC_SEVT_OP_SCALE5			0x0004 /* Secondary Special Event Trig Output Postscaler 1:5  */
#define PWM_SEC_SEVT_OP_SCALE6			0x0005 /* Secondary Special Event Trig Output Postscaler 1:6  */
#define PWM_SEC_SEVT_OP_SCALE7			0x0006 /* Secondary Special Event Trig Output Postscaler 1:7  */
#define PWM_SEC_SEVT_OP_SCALE8			0x0007 /* Secondary Special Event Trig Output Postscaler 1:8  */
#define PWM_SEC_SEVT_OP_SCALE9			0x0008 /* Secondary Special Event Trig Output Postscaler 1:9  */
#define PWM_SEC_SEVT_OP_SCALE10			0x0009 /* Secondary Special Event Trig Output Postscaler 1:10 */
#define PWM_SEC_SEVT_OP_SCALE11			0x000A /* Secondary Special Event Trig Output Postscaler 1:11 */
#define PWM_SEC_SEVT_OP_SCALE12			0x000B /* Secondary Special Event Trig Output Postscaler 1:12 */
#define PWM_SEC_SEVT_OP_SCALE13			0x000C /* Secondary Special Event Trig Output Postscaler 1:13 */
#define PWM_SEC_SEVT_OP_SCALE14			0x000D /* Secondary Special Event Trig Output Postscaler 1:14 */
#define PWM_SEC_SEVT_OP_SCALE15			0x000E /* Secondary Special Event Trig Output Postscaler 1:15 */
#define PWM_SEC_SEVT_OP_SCALE16			0x000F /* Secondary Special Event Trig Output Postscaler 1:16 */

/*----------------------------------------------------------------------------------------------------*/
/* STCON2 Configuration Bit Definitions :                                                             */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_SEC_INPUT_CLK_DIV0			0x0000 /* Divide by 1, Maximum PWM timing resolution  */
#define PWM_SEC_INPUT_CLK_DIV1			0x0001 /* Divide by 2, Maximum PWM timing resolution  */
#define PWM_SEC_INPUT_CLK_DIV2			0x0002 /* Divide by 4, Maximum PWM timing resolution  */
#define PWM_SEC_INPUT_CLK_DIV3			0x0003 /* Divide by 8, Maximum PWM timing resolution  */
#define PWM_SEC_INPUT_CLK_DIV4			0x0004 /* Divide by 16, Maximum PWM timing resolution  */
#define PWM_SEC_INPUT_CLK_DIV5			0x0005 /* Divide by 32, Maximum PWM timing resolution  */
#define PWM_SEC_INPUT_CLK_DIV6			0x0006 /* Divide by 64, Maximum PWM timing resolution  */

/*----------------------------------------------------------------------------------------------------*/
/* CHOP Configuration Bit Definitions :                                                               */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_CHPCLK_EN					0x8000 /* PWM Chop Clock Generator is Enabled */
#define PWM_CHPCLK_DIS					0x0000 /* PWM Chop Clock Generator is Disabled */

/*----------------------------------------------------------------------------------------------------*/
/* PWMCON1, PWMCON2, PWMCON3, PWMCON4, PWMCON5, PWMCON6, PWMCON7 Configuration Bit Definitions :      */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_FLT_INT_STAT				0x8000  /* Fault Interrupt Status Hardware Set and Cleared */

#define PWM_CL_INT_STAT					0x4000  /* Current Limit Interrupt Status Hardware Set and Cleared */

#define PWM_TRG_INT_STAT				0x2000  /* Trigger  Interrupt Status Hardware Set and Cleared */

#define PWM_FLT_INT_EN					0x1000  /* PWM Fault Interrupt Enable  */
#define PWM_FLT_INT_DIS					0x0000  /* PWM Fault Interrupt Disable */

#define PWM_CL_INT_EN					0x0800  /* PWM Current Limit Interrupt Enable   */
#define PWM_CL_INT_DIS					0x0000  /* PWM Current Limit Interrupt Disable  */

#define PWM_TRG_INT_EN					0x0400  /* PWM Trigger Interrupt Enable   */
#define PWM_TRG_INT_DIS					0x0000  /* PWM Trigger Interrupt Disable  */

#define PWM_TB_MODE_PH					0x0200  /* Phase reg provides Time base period for PWM Gen */
#define PWM_TB_MODE_PER					0x0000  /* Primary or Secondary (PTPER or STPER register) provides timing for PWM Gen */

#define PWM_D_CYLE_MDC					0x0100  /* Master Duty Cycle reg provides duty cycle info for PWM Gen */
#define PWM_D_CYLE_DC					0x0000  /* Duty Cycle reg provides duty cycle info for PWM Gen */

#define PWM_DT_CMP					0x00C0  /* Deadtime Compensation Mode to PWM Pair */
#define PWM_DT_DIS					0x0080  /* Deadtime Function Disabled for PWM Pair */
#define PWM_DT_NEG					0x0040  /* Negative Deadtime for PWM Pair */
#define PWM_DT_POS					0x0000  /* Positive Deadtime for PWM Pair */

#define PWM_HS_LL_DTCMP_0				0x0000  /* PWMxH is Shortened and PWMxL is Lengthened if DTCMPx is 0 */
									  /* PWMxL is Shortened and PWMxH is Lengthened if DTCMPx is 1 */
#define PWM_HL_LS_DTCMP_0				0x0020  /* PWMxH is Lengthened and PWMxL is Shortened if DTCMPx is 0 */
									  /* PWMxL is Lengthened and PWMxH is Shortened if DTCMPx is 1 */

#define PWM_PRI_TB					0x0000  /* PWM uses PTPER (Primary) as timebase */
#define PWM_SEC_TB					0x0008  /* PWM uses STPER (Secondary) as timebase */

#define PWM_CENTER_ALIGN_EN				0x0004  /*Center-aligned mode is enabled*/
#define PWM_CENTER_ALIGN_DIS				0x0000  /*Center-aligned mode is Disabled*/

#define PWM_CL_RES_TB_EN				0x0002  /* Current Limit source resets time base for this PWM gen in independent time base mode  */
#define PWM_EXT_RES_DIS					0x0000  /* External pins do not affect PWM time base   */

#define PWM_DC_UPDATE_IMM				0x0001  /* Updates to active MDC/PDCx/SDCx registers are immediate */
#define PWM_DC_UPDATE_SYNC				0x0000  /* Updates to active MDC/PDCx/SDCx registers are sync with PWM time base */

/*----------------------------------------------------------------------------------------------------*/
/* IOCON1, IOCON2, IOCON3, IOCON4, IOCON5, IOCON6, IOCON7 Configuration Bit Definitions :             */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_H_PIN_EN					0x8000  /* PWM module controls PWMxH */
#define PWM_H_PIN_GPIO					0x0000  /* GPIO module controls PWMxH */

#define PWM_L_PIN_EN					0x4000  /* PWM module controls PWMxL */
#define PWM_L_PIN_GPIO					0x0000  /* GPIO module controls PWMxL */

#define PWM_H_PIN_ACTLOW				0x2000  /* PWMxH pin is active low */
#define PWM_H_PIN_ACTHIGH				0x0000  /* PWMxH pin is active high */

#define PWM_L_PIN_ACTLOW				0x1000  /* PWMxL pin is active low */
#define PWM_L_PIN_ACTHIGH				0x0000  /* PWMxL pin is active high */

#define PWM_PAIR_TRUE_IND				0x0C00  /* PWM Pair in True Independent output mode */
#define PWM_PAIR_PUSHPULL				0x0800  /* PWM Pair in Push-Pull output mode */
#define PWM_PAIR_RED					0x0400  /* PWM Pair in Redundant output mode */
#define PWM_PAIR_COMP					0x0000  /* PWM Pair in complementary output mode */

#define PWM_ORENH_OVRDAT				0x0200  /* OVRDAT<1> provides data for output on PWMxH pin  */
#define PWM_ORENH_PWMGEN				0x0000  /* PWMx generator provides data for PWMxH pin  */

#define PWM_ORENL_OVRDAT				0x0100  /* OVRDAT<0> provides data for output on PWMxL pin  */
#define PWM_ORENL_PWMGEN				0x0000  /* PWMx generator provides data for PWMxL pin  */

#define PWM_ORENH_OVRDAT_LL				0x0000  /* If OVERNH=1 then OVRDAT<0>  provides data for PWMxL */
#define PWM_ORENH_OVRDAT_LH				0x0040  /* If OVERNH=1 then OVRDAT<0>  provides data for PWMxL */
#define PWM_ORENL_OVRDAT_HL				0x0080  /* If OVERNL=1 then OVRDAT<1>  provides data for PWMxH */
#define PWM_ORENL_OVRDAT_HH				0x00C0  /* If OVERNL=1 then OVRDAT<1>  provides data for PWMxH */

#define PWM_FLT_EN_FLTDAT_LL				0x0000  /* If Fault active  then FLTDAT<0>  provides data for PWMxL */
#define PWM_FLT_EN_FLTDAT_LH				0x0010  /* If Fault active  then FLTDAT<0>  provides data for PWMxL */
#define PWM_FLT_EN_FLTDAT_HL				0x0020  /* If Fault active  then FLTDAT<1>  provides data for PWMxH */
#define PWM_FLT_EN_FLTDAT_HH				0x0030  /* If Fault active  then FLTDAT<1>  provides data for PWMxH */

#define PWM_CL_EN_CLDAT_LL				0x0000  /* If Current Limit active  then CLDAT<0>  provides data for PWMxL */
#define PWM_CL_EN_CLDAT_LH				0x0004  /* If Current Limit active  then CLDAT<0>  provides data for PWMxL */
#define PWM_CL_EN_CLDAT_HL				0x0008  /* If Current Limit active  then CLDAT<1>  provides data for PWMxH */
#define PWM_CL_EN_CLDAT_HH				0x000C  /* If Current Limit active  then CLDAT<1>  provides data for PWMxH */

#define PWM_PIN_SWAP_EN					0x0002  /* PWMxH output signal is connected to PWMxL pin and PWMxL signal is connected to PWMxH pins */
#define PWM_PIN_SWAP_DIS				0x0000  /* PWMxH and PWMxL pins are mapped to their respective pins */

#define PWM_OR_OVRDAT_SYNC_PWM			0x0001  /* Output overrides via the OVRDAT<1:0> bits are sync to PWM time base */
#define PWM_OR_OVRDAT_NXT_CLK				0x0000  /* Output overrides via the OVRDAT<1:0> bits occur on next clk boundary */

/*----------------------------------------------------------------------------------------------------*/
/* FCLCON1 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_IND_FLT_EN					0x8000  /* Current Limit input maps FLTDAT[1] to PWMxH output, and Fault input maps FLTDAT[0] to PWMxL output.
												   The CLDAT<1:0> bits are not used for override functions */
#define PWM_IND_FLT_DIS					0x0000  /* Normal fault mode: Current-limit feature maps CLDAT<1:0> bits to the PWMxH and PWMxL
											       outputs. The PWM fault feature maps FLTDAT<1:0> to the PWMxH and PWMxL outputs.*/							

#define PWM_CL_FLT1					0x0000  /* Current Limit control signal select source FLT1 for PWMx Gen bits */
#define PWM_CL_FLT2					0x0400  /* Current Limit control signal select source FLT2 for PWMx Gen bits */
#define PWM_CL_FLT3					0x0800  /* Current Limit control signal select source FLT3 for PWMx Gen bits */
#define PWM_CL_FLT4					0x0C00  /* Current Limit control signal select source FLT4 for PWMx Gen bits */
#define PWM_CL_FLT5					0x1000  /* Current Limit control signal select source FLT5 for PWMx Gen bits */
#define PWM_CL_FLT6					0x1400  /* Current Limit control signal select source FLT6 for PWMx Gen bits */
#define PWM_CL_FLT7					0x1800  /* Current Limit control signal select source FLT7 for PWMx Gen bits */
#ifdef _C5EVT
#define PWM_CL_FLT8					0x1C00 /* Current Limit control signal select source FLT8 for PWMx Gen bits */
#endif 
#define PWM_CL_FLT32				0x7C00  /* Current Limit control signal select source FLT32 for PWMx Gen bits */
#define PWM_CL_CMP1 				0x2000  /* Current Limit control signal select source CMP1 for PWMx Gen bits */
#define PWM_CL_CMP2					0x2400  /* Current Limit control signal select source CMP2 for PWMx Gen bits */
#define PWM_CL_CMP3					0x2800  /* Current Limit control signal select source CMP3 for PWMx Gen bits */
#define PWM_CL_CMP4					0x2C00  /* Current Limit control signal select source CMP4 for PWMx Gen bits */
#ifdef _C5EVT
#define PWM_CL_CMP5					0x3000  /* Current Limit control signal select source CMP5 for PWMx Gen bits */
#endif

#define PWM_CL_SOURCE_LOW				0x0200  /* Selected Current Limit source is active low  */
#define PWM_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM_CL_EN						0x0100  /* Current Limit function Enabled  */
#define PWM_CL_DIS					0x0000  /* Current Limit function Disabled  */

#define PWM_FLT_FLT1					0x0000  /* Fault control signal select source FLT1 for PWMx Gen bits */
#define PWM_FLT_FLT2					0x0008  /* Fault control signal select source FLT2 for PWMx Gen bits */
#define PWM_FLT_FLT3					0x0010  /* Fault control signal select source FLT3 for PWMx Gen bits */
#define PWM_FLT_FLT4					0x0018  /* Fault control signal select source FLT4 for PWMx Gen bits */
#define PWM_FLT_FLT5					0x0020  /* Fault control signal select source FLT5 for PWMx Gen bits */
#define PWM_FLT_FLT6					0x0028  /* Fault control signal select source FLT6 for PWMx Gen bits */
#define PWM_FLT_FLT7					0x0030  /* Fault control signal select source FLT7 for PWMx Gen bits */
#ifdef _C5EVT
#define PWM_FLT_FLT8					0x0038  /* Fault control signal select source FLT8 for PWMx Gen bits */
#endif
#define PWM_FLT_FLT32					0x00F8  /* Fault control signal select source FLT32 for PWMx Gen bits */
#define PWM_FLT_CMP1					0x0040  /* Fault control signal select source CMP1 for PWMx Gen bits */
#define PWM_FLT_CMP2					0x0048  /* Fault control signal select source CMP2 for PWMx Gen bits */
#define PWM_FLT_CMP3					0x0050  /* Fault control signal select source CMP3 for PWMx Gen bits */
#define PWM_FLT_CMP4					0x0058  /* Fault control signal select source CMP4 for PWMx Gen bits */
#ifdef _C5EVT
#define PWM_FLT_CMP5					0x0060  /* Fault control signal select source CMP5 for PWMx Gen bits */
#endif

#define PWM_FLT_SOURCE_LOW				0x0004  /* Selected Fault source is active low  */
#define PWM_FLT_SOURCE_HIGH				0x0000  /* Selected Fault source is active High  */

#define PWM_HL_FLTDAT_LATCH				0x0000  /* Selected Fault source forces PWMxH and PWMxL pins to FLTDAT values (Latched Mode) */
#define PWM_HL_FLTDAT_CYCLE				0x0001  /* Selected Fault source forces PWMxH and PWMxL pins to FLTDAT values (Cycle-by-Cycle Mode) */
#define PWM_FLT_DIS					0x0003  /* Fault intput disabled  */

/*----------------------------------------------------------------------------------------------------------------*/
/* TRGCON1, TRGCON2, TRGCON3, TRGCON4, TRGCON5, TRGCON6, TRGCON7 Configuration Bit Definitions :                  */
/*----------------------------------------------------------------------------------------------------------------*/

#define PWM_TRIG_EVENT1					0x0000  /* Trigger output on every trigger event      */
#define PWM_TRIG_EVENT2					0x1000  /* Trigger output on every 2nd trigger event  */
#define PWM_TRIG_EVENT3					0x2000  /* Trigger output on every 3rd trigger event  */
#define PWM_TRIG_EVENT4					0x3000  /* Trigger output on every 4th trigger event  */
#define PWM_TRIG_EVENT5					0x4000  /* Trigger output on every 5th trigger event  */
#define PWM_TRIG_EVENT6					0x5000  /* Trigger output on every 6th trigger event  */
#define PWM_TRIG_EVENT7					0x6000  /* Trigger output on every 7th trigger event  */
#define PWM_TRIG_EVENT8					0x7000  /* Trigger output on every 8th trigger event  */
#define PWM_TRIG_EVENT9					0x8000  /* Trigger output on every 9th trigger event  */
#define PWM_TRIG_EVENT10				0x9000  /* Trigger output on every 10th trigger event */
#define PWM_TRIG_EVENT11				0xA000  /* Trigger output on every 11th trigger event */
#define PWM_TRIG_EVENT12				0xB000  /* Trigger output on every 12th trigger event */
#define PWM_TRIG_EVENT13				0xC000  /* Trigger output on every 13th trigger event */
#define PWM_TRIG_EVENT14				0xD000  /* Trigger output on every 14th trigger event */
#define PWM_TRIG_EVENT15				0xE000  /* Trigger output on every 15th trigger event */
#define PWM_TRIG_EVENT16				0xF000  /* Trigger output on every 16th trigger event */

#define PWM_TRIG_PS0					0x0000  /* Wait  0 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS1					0x0001  /* Wait  1 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS2					0x0002  /* Wait  2 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS3					0x0003  /* Wait  3 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS4					0x0004  /* Wait  4 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS5					0x0005  /* Wait  5 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS6					0x0006  /* Wait  6 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS7					0x0007  /* Wait  7 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS8					0x0008  /* Wait  8 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS9					0x0009  /* Wait  9 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS10					0x000A  /* Wait 10 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS11					0x000B  /* Wait 11 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS12					0x000C  /* Wait 12 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS13					0x000D  /* Wait 13 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS14					0x000E  /* Wait 14 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS15					0x000F  /* Wait 15 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS16					0x0010  /* Wait 16 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS17					0x0011  /* Wait 17 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS18					0x0012  /* Wait 18 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS19					0x0013  /* Wait 19 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS20					0x0014  /* Wait 20 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS21					0x0015  /* Wait 21 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS22					0x0016  /* Wait 22 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS23					0x0017  /* Wait 23 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS24					0x0018  /* Wait 24 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS25					0x0019  /* Wait 25 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS26					0x001A  /* Wait 26 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS27					0x001B  /* Wait 27 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS28					0x001C  /* Wait 28 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS29					0x001D  /* Wait 29 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS30					0x001E  /* Wait 30 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS31					0x001F  /* Wait 31 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS32					0x0020  /* Wait 32 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS33					0x0021  /* Wait 33 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS34					0x0022  /* Wait 34 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS35					0x0023  /* Wait 35 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS36					0x0024  /* Wait 36 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS37					0x0025  /* Wait 37 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS38					0x0026  /* Wait 38 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS39					0x0027  /* Wait 39 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS40					0x0028  /* Wait 40 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS41					0x0029  /* Wait 41 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS42					0x002A  /* Wait 42 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS43					0x002B  /* Wait 43 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS44					0x002C  /* Wait 44 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS45					0x002D  /* Wait 45 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS46					0x002E  /* Wait 46 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS47					0x002F  /* Wait 47 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS48					0x0030  /* Wait 48 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS49					0x0031  /* Wait 49 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS50					0x0032  /* Wait 50 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS51					0x0033  /* Wait 51 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS52					0x0034  /* Wait 52 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS53					0x0035  /* Wait 53 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS54					0x0036  /* Wait 54 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS55					0x0037  /* Wait 55 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS56					0x0038  /* Wait 56 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS57					0x0039  /* Wait 57 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS58					0x003A  /* Wait 58 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS59					0x003B  /* Wait 59 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS60					0x003C  /* Wait 60 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS61					0x003D  /* Wait 61 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS62					0x003E  /* Wait 62 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM_TRIG_PS63					0x003F  /* Wait 63 PWM cycles before generating the first trigger event after the module is enabled */

/*----------------------------------------------------------------------------------------------------*/
/* LEBCON1, LEBCON2, LEBCON3, LEBCON4, LEBCON5, LEBCON6, LEBCON7 Configuration Bit Definitions :      */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_H_LEB_RISE_TRIG_EN			0x8000  /* Rising edge of PWMxH will trigger LEB counter */
#define PWM_H_LEB_RISE_TRIG_DIS			0x0000  /* LEB ignores rising edge of PWMxH */

#define PWM_H_LEB_FALL_TRIG_EN			0x4000  /* Falling edge of PWMxH will trigger LEB counter */
#define PWM_H_LEB_FALL_TRIG_DIS			0x0000  /* LEB ignores Falling edge of PWMxH */

#define PWM_L_LEB_RISE_TRIG_EN			0x2000  /* Rising edge of PWMxL will trigger LEB counter */
#define PWM_L_LEB_RISE_TRIG_DIS			0x0000  /* LEB ignores rising edge of PWMxL */

#define PWM_L_LEB_FALL_TRIG_EN			0x1000  /* Falling edge of PWMxL will trigger LEB counter */
#define PWM_L_LEB_FALL_TRIG_DIS			0x0000  /* LEB ignores Falling edge of PWMxL */

#define PWM_LEB_FLT_IP_EN				0x0800  /* LEB is applied to the selected fault Input */
#define PWM_LEB_FLT_IP_DIS				0x0000  /* LEB is not applied to the selected fault Input */ 

#define PWM_LEB_CL_IP_EN				0x0400  /* LEB is applied to the selected Current Limit Input */
#define PWM_LEB_CL_IP_DIS				0x0000  /* LEB is not applied to the selected Current Limit Input */

#define PWM_LEB_BLANK_H_EN				0x0020	/* State blanking (of current-limit and/or Fault input signals) when selected blanking signal is high */
#define PWM_LEB_BLANK_H_DIS				0x0000	/* No blanking when selected blanking signal is high */

#define PWM_LEB_BLANK_L_EN				0x0010	/* State blanking (of current-limit and/or Fault input signals) when selected blanking signal is low */
#define PWM_LEB_BLANK_L_DIS				0x0000	/* No blanking when selected blanking signal is low */

#define PWM_LEB_PWMH_H_EN				0x0008	/* State blanking (of current-limit and/or Fault input signals) when PWMxH output is high */
#define PWM_LEB_PWMH_H_DIS				0x0000	/* No blanking when PWMxH output is high */

#define PWM_LEB_PWMH_L_EN				0x0004	/* State blanking (of current-limit and/or Fault input signals) when PWMxH output is low */
#define PWM_LEB_PWMH_L_DIS				0x0000	/* No blanking when PWMxH output is low */

#define PWM_LEB_PWML_H_EN				0x0002	/* State blanking (of current-limit and/or Fault input signals) when PWMxL output is high */
#define PWM_LEB_PWML_H_DIS				0x0000	/* No blanking when PWMxL output is high */

#define PWM_LEB_PWML_L_EN				0x0001	/* State blanking (of current-limit and/or Fault input signals) when PWMxL output is low */
#define PWM_LEB_PWML_L_DIS				0x0000	/* No blanking when PWMxL output is low */

/*----------------------------------------------------------------------------------------------------*/
/* AUXCON1, AUXCON2, AUXCON3, AUXCON4, AUXCON5, AUXCON6 and AUXCON7 Configuration Bit Definitions :   */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_AUX_BLANKSEL_PWM7H			0x0700  /* PWM7H selected as state blank source */
#define PWM_AUX_BLANKSEL_PWM6H			0x0600  /* PWM6H selected as state blank source */
#define PWM_AUX_BLANKSEL_PWM5H			0x0500  /* PWM5H selected as state blank source */
#define PWM_AUX_BLANKSEL_PWM4H			0x0400  /* PWM4H selected as state blank source */
#define PWM_AUX_BLANKSEL_PWM3H			0x0300  /* PWM3H selected as state blank source */
#define PWM_AUX_BLANKSEL_PWM2H			0x0200  /* PWM2H selected as state blank source */
#define PWM_AUX_BLANKSEL_PWM1H			0x0100  /* PWM1H selected as state blank source */
#define PWM_AUX_BLANKSEL_NONE 			0x0000  /* No state blanking */

#define PWM_AUX_CHOPSEL_PWM7H				0x001C  /* PWM7H selected as CHOP clock source */
#define PWM_AUX_CHOPSEL_PWM6H				0x0018  /* PWM6H selected as CHOP clock source */
#define PWM_AUX_CHOPSEL_PWM5H				0x0014  /* PWM5H selected as CHOP clock source */
#define PWM_AUX_CHOPSEL_PWM4H				0x0010  /* PWM4H selected as CHOP clock source */
#define PWM_AUX_CHOPSEL_PWM3H				0x000C  /* PWM3H selected as CHOP clock source */
#define PWM_AUX_CHOPSEL_PWM2H				0x0008  /* PWM2H selected as CHOP clock source */
#define PWM_AUX_CHOPSEL_PWM1H				0x0004  /* PWM1H selected as CHOP clock source */
#define PWM_AUX_CHOPSEL_NONE 				0x0000  /* Chop clock generator selected as CHOP clock source */

#define PWM_AUX_CHOPH_EN				0x0002  /* PWMxH chopping function is enabled */
#define PWM_AUX_CHOPH_DIS				0x0000  /* PWMxH chopping function is disabled */

#define PWM_AUX_CHOPL_EN				0x0001  /* PWMxL chopping function is enabled */
#define PWM_AUX_CHOPL_DIS				0x0000  /* PWMxL chopping function is disabled */

/*----------------------------------------------------------------------------------------------------*/
/* Enable/Disable PWM interrupt : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_INT_EN					0x0001  /*PWM Generator x Interrupt request Enable */
#define PWM_INT_DIS					0x0000  /*PWM Generator x Interrupt request Disable */

#define PWM_SEVT_MATCH_INT_EN				0x0001  /*PWM Special Event match Interrupt request Enable */
#define PWM_SEVT_MATCH_INT_DIS			0x0000  /*PWM Special Event match Interrupt request Disable */

/*----------------------------------------------------------------------------------------------------*/
/* PWM interrupt priority : */
/*----------------------------------------------------------------------------------------------------*/
#define PWM_INT_PR7					0x0007  /* PWM Generator x Interrupt priority 7(High Priority) */
#define PWM_INT_PR6					0x0006  /* PWM Generator x Interrupt priority 6                */
#define PWM_INT_PR5					0x0005  /* PWM Generator x Interrupt priority 5                */
#define PWM_INT_PR4					0x0004  /* PWM Generator x Interrupt priority 4                */
#define PWM_INT_PR3					0x0003  /* PWM Generator x Interrupt priority 3                */
#define PWM_INT_PR2					0x0002  /* PWM Generator x Interrupt priority 2                */
#define PWM_INT_PR1					0x0001  /* PWM Generator x Interrupt priority 1(Low Priority)  */
#define PWM_INT_DIS					0x0000  /* PWM Generator x Interrupt priority Disabled         */

#define PWM_SEVT_MATCH_INT_PR7			0x0007  /* PWM Special Event match Interrupt priority 7(High Priority) */
#define PWM_SEVT_MATCH_INT_PR6			0x0006  /* PWM Special Event match Interrupt priority 6                */
#define PWM_SEVT_MATCH_INT_PR5			0x0005  /* PWM Special Event match Interrupt priority 5                */
#define PWM_SEVT_MATCH_INT_PR4			0x0004  /* PWM Special Event match Interrupt priority 4                */
#define PWM_SEVT_MATCH_INT_PR3			0x0003  /* PWM Special Event match Interrupt priority 3                */
#define PWM_SEVT_MATCH_INT_PR2			0x0002  /* PWM Special Event match Interrupt priority 2                */
#define PWM_SEVT_MATCH_INT_PR1			0x0001  /* PWM Special Event match Interrupt priority 1(Low Priority)  */
#define PWM_SEVT_MATCH_INT_DIS			0x0000  /* PWM Special Event match Interrupt priority Disabled         */

/*****************************Function prototypes**************************************************/

void CloseHSPWM(void) __attribute__ ((section (".libperi")));
void ConfigIntHSPWMSevtMatch(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void OpenHSPWM(unsigned int config1, unsigned int config2,unsigned int config3, unsigned int config4) __attribute__ ((section (".libperi")));
void OpenSecHSPWM(unsigned int config1, unsigned int config2,unsigned int config3, unsigned int config4) __attribute__ ((section (".libperi")));
void SetHSPWMChop(unsigned int config1, unsigned int config2) __attribute__ ((section (".libperi")));
void SetHSPWMMasterDutyCycle(unsigned int dutycycle) __attribute__ ((section (".libperi")));

void ConfigHSPWM1(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigHSPWM2(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigHSPWM3(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigHSPWM4(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigHSPWM5(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigHSPWM6(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigHSPWM7(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));

void SetHSPWMDutyCycle1(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMDutyCycle2(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMDutyCycle3(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMDutyCycle4(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMDutyCycle5(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMDutyCycle6(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMDutyCycle7(unsigned int dutycycle) __attribute__ ((section (".libperi")));

void SetHSPWMSecDutyCycle1(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMSecDutyCycle2(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMSecDutyCycle3(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMSecDutyCycle4(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMSecDutyCycle5(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMSecDutyCycle6(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetHSPWMSecDutyCycle7(unsigned int dutycycle) __attribute__ ((section (".libperi")));

void SetHSPWMDeadTime1(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetHSPWMDeadTime2(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetHSPWMDeadTime3(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetHSPWMDeadTime4(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetHSPWMDeadTime5(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetHSPWMDeadTime6(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetHSPWMDeadTime7(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));

void SetHSPWMTrigCmp1(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetHSPWMTrigCmp2(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetHSPWMTrigCmp3(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetHSPWMTrigCmp4(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetHSPWMTrigCmp5(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetHSPWMTrigCmp6(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetHSPWMTrigCmp7(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));

void SetHSPWMLebTime1(unsigned int leb) __attribute__ ((section (".libperi")));
void SetHSPWMLebTime2(unsigned int leb) __attribute__ ((section (".libperi")));
void SetHSPWMLebTime3(unsigned int leb) __attribute__ ((section (".libperi")));
void SetHSPWMLebTime4(unsigned int leb) __attribute__ ((section (".libperi")));
void SetHSPWMLebTime5(unsigned int leb) __attribute__ ((section (".libperi")));
void SetHSPWMLebTime6(unsigned int leb) __attribute__ ((section (".libperi")));
void SetHSPWMLebTime7(unsigned int leb) __attribute__ ((section (".libperi")));

void ConfigIntHSPWM1(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntHSPWM2(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntHSPWM3(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntHSPWM4(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntHSPWM5(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntHSPWM6(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntHSPWM7(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));

void ConfigHSPWMFault1(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMFault2(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMFault3(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMFault4(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMFault5(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMFault6(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMFault7(unsigned int config1) __attribute__ ((section (".libperi")));

void ConfigHSPWMLeb1(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMLeb2(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMLeb3(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMLeb4(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMLeb5(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMLeb6(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMLeb7(unsigned int config1) __attribute__ ((section (".libperi")));

void ConfigHSPWMAux1(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMAux2(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMAux3(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMAux4(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMAux5(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMAux6(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigHSPWMAux7(unsigned int config1) __attribute__ ((section (".libperi")));

unsigned int ReadHSPWMPriTimeBaseCapVal1(void) __attribute__ ((section (".libperi")));
unsigned int ReadHSPWMPriTimeBaseCapVal2(void) __attribute__ ((section (".libperi")));
unsigned int ReadHSPWMPriTimeBaseCapVal3(void) __attribute__ ((section (".libperi")));
unsigned int ReadHSPWMPriTimeBaseCapVal4(void) __attribute__ ((section (".libperi")));
unsigned int ReadHSPWMPriTimeBaseCapVal5(void) __attribute__ ((section (".libperi")));
unsigned int ReadHSPWMPriTimeBaseCapVal6(void) __attribute__ ((section (".libperi")));
unsigned int ReadHSPWMPriTimeBaseCapVal7(void) __attribute__ ((section (".libperi")));

/*******************************************Macros******************************************/
/* Macros to  Enable/Disable interrupts and set Interrupt priority of PWM */

#define SetIntHSPWM1(state)                    		(_PWM1IE = state)
#define SetIntHSPWM2(state)                    		(_PWM2IE = state)
#define SetIntHSPWM3(state)                    		(_PWM3IE = state)
#define SetIntHSPWM4(state)                    		(_PWM4IE = state)
#define SetIntHSPWM5(state)                    		(_PWM5IE = state)
#define SetIntHSPWM6(state)                    		(_PWM6IE = state)
#define SetIntHSPWM7(state)                    		(_PWM7IE = state)

#define SetPriorityIntHSPWM1(priority)			(_PWM1IP = priority)
#define SetPriorityIntHSPWM2(priority)			(_PWM2IP = priority)
#define SetPriorityIntHSPWM3(priority)			(_PWM3IP = priority)
#define SetPriorityIntHSPWM4(priority)			(_PWM4IP = priority)
#define SetPriorityIntHSPWM5(priority)			(_PWM5IP = priority)
#define SetPriorityIntHSPWM6(priority)			(_PWM6IP = priority)
#define SetPriorityIntHSPWM7(priority)			(_PWM7IP = priority)

#define SetIntHSPWMSevtMatch(state)				(_PSEMIE = state)
#define SetPriorityIntHSPWMSevtMatch(priority)		(_PSEMIP = priority)

#define ClearIntHSPWM1()					(_PWM1IF = 0)
#define ClearIntHSPWM2()					(_PWM2IF = 0) 
#define ClearIntHSPWM3()					(_PWM3IF = 0)
#define ClearIntHSPWM4()					(_PWM4IF = 0)
#define ClearIntHSPWM5()					(_PWM5IF = 0) 
#define ClearIntHSPWM6()					(_PWM6IF = 0)
#define ClearIntHSPWM7()					(_PWM7IF = 0)
#define ClearIntHSPWMSevtMatch()				(_PSEMIF = 0)

#endif /*__HSPWM_H */
