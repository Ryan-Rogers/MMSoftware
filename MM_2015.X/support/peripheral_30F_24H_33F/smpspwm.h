/**********************************************************************/
/*              Header for SMPS PWM module library functions               */
/*********************************************************************/

#if defined(__dsPIC30F__) 
#include <p30Fxxxx.h>
#elif defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#endif

#ifndef __SMPSPWM_H
#define __SMPSPWM_H

/* List of SFRs for PWM */
/* This list contains the SFRs with default (POR) values to be used for configuring PWM */
/* The user can modify this based on the requirement */

#define PTCON_VALUE             		0x0000
#define PTPER_VALUE             		0x0000
#define MDC_VALUE				0x0000
#define SEVTCMP_VALUE           		0x0000

#define PWMCON1_VALUE           		0x0000
#define PWMCON2_VALUE           		0x0000
#define PWMCON3_VALUE           		0x0000
#define PWMCON4_VALUE           		0x0000
#define PWMCON5_VALUE           		0x0000
#define PWMCON6_VALUE           		0x0000
#define PWMCON7_VALUE           		0x0000
#define PWMCON8_VALUE           		0x0000
#define PWMCON9_VALUE           		0x0000

#define PDC1_VALUE              		0x0000
#define PDC2_VALUE              		0x0000
#define PDC3_VALUE              		0x0000
#define PDC4_VALUE              		0x0000
#define PDC5_VALUE              		0x0000
#define PDC6_VALUE              		0x0000
#define PDC7_VALUE              		0x0000
#define PDC8_VALUE              		0x0000
#define PDC9_VALUE              		0x0000

#define PHASE1_VALUE           			0x0000
#define PHASE2_VALUE           			0x0000
#define PHASE3_VALUE           			0x0000
#define PHASE4_VALUE           			0x0000
#define PHASE5_VALUE           			0x0000
#define PHASE6_VALUE           			0x0000
#define PHASE7_VALUE           			0x0000
#define PHASE8_VALUE           			0x0000
#define PHASE9_VALUE           			0x0000

#define DTR1_VALUE           			0x0000
#define DTR2_VALUE           			0x0000
#define DTR3_VALUE           			0x0000
#define DTR4_VALUE           			0x0000
#define DTR5_VALUE           			0x0000
#define DTR6_VALUE           			0x0000
#define DTR7_VALUE           			0x0000
#define DTR8_VALUE           			0x0000
#define DTR9_VALUE           			0x0000


#define ALTDTR1_VALUE           		0x0000
#define ALTDTR2_VALUE           		0x0000
#define ALTDTR3_VALUE           		0x0000
#define ALTDTR4_VALUE           		0x0000
#define ALTDTR5_VALUE           		0x0000
#define ALTDTR6_VALUE           		0x0000
#define ALTDTR7_VALUE           		0x0000
#define ALTDTR8_VALUE           		0x0000
#define ALTDTR9_VALUE           		0x0000


#define TRGCON1_VALUE           		0x0000
#define TRGCON2_VALUE           		0x0000
#define TRGCON3_VALUE           		0x0000
#define TRGCON4_VALUE           		0x0000
#define TRGCON5_VALUE           		0x0000
#define TRGCON6_VALUE           		0x0000
#define TRGCON7_VALUE           		0x0000
#define TRGCON8_VALUE           		0x0000
#define TRGCON9_VALUE           		0x0000


#define IOCON1_VALUE           			0x0000
#define IOCON2_VALUE           			0x0000
#define IOCON3_VALUE           			0x0000
#define IOCON4_VALUE           			0x0000
#define IOCON5_VALUE           			0x0000
#define IOCON6_VALUE           			0x0000
#define IOCON7_VALUE           			0x0000
#define IOCON8_VALUE           			0x0000
#define IOCON9_VALUE           			0x0000

#define FCLCON1_VALUE           		0x0000
#define FCLCON2_VALUE           		0x0000
#define FCLCON3_VALUE           		0x0000
#define FCLCON4_VALUE           		0x0000
#define FCLCON5_VALUE           		0x0000
#define FCLCON6_VALUE           		0x0000
#define FCLCON7_VALUE           		0x0000
#define FCLCON8_VALUE           		0x0000
#define FCLCON9_VALUE           		0x0000

#define TRIG1_VALUE           			0x0000
#define TRIG2_VALUE           			0x0000
#define TRIG3_VALUE           			0x0000
#define TRIG4_VALUE           			0x0000
#define TRIG5_VALUE           			0x0000
#define TRIG6_VALUE           			0x0000
#define TRIG7_VALUE           			0x0000
#define TRIG8_VALUE           			0x0000
#define TRIG9_VALUE           			0x0000

#define LEBCON1_VALUE           		0x0000
#define LEBCON2_VALUE           		0x0000
#define LEBCON3_VALUE           		0x0000
#define LEBCON4_VALUE           		0x0000
#define LEBCON5_VALUE           		0x0000
#define LEBCON6_VALUE           		0x0000
#define LEBCON7_VALUE           		0x0000
#define LEBCON8_VALUE           		0x0000
#define LEBCON9_VALUE           		0x0000

#if defined (__dsPIC33F__)

#define PTCON2_VALUE				0x0000
#define STCON_VALUE             		0x0000
#define STCON2_VALUE             		0x0000
#define SSEVTCMP_VALUE           		0x0000

#define SDC1_VALUE              		0x0000
#define SDC2_VALUE              		0x0000
#define SDC3_VALUE              		0x0000
#define SDC4_VALUE              		0x0000
#define SDC5_VALUE              		0x0000
#define SDC6_VALUE              		0x0000
#define SDC7_VALUE              		0x0000
#define SDC8_VALUE              		0x0000
#define SDC9_VALUE              		0x0000

#define SPHASE1_VALUE           		0x0000
#define SPHASE2_VALUE           		0x0000
#define SPHASE3_VALUE           		0x0000
#define SPHASE4_VALUE           		0x0000
#define SPHASE5_VALUE           		0x0000
#define SPHASE6_VALUE           		0x0000
#define SPHASE7_VALUE           		0x0000
#define SPHASE8_VALUE           		0x0000
#define SPHASE9_VALUE           		0x0000

#define STRIG1_VALUE           			0x0000
#define STRIG2_VALUE           			0x0000
#define STRIG3_VALUE           			0x0000
#define STRIG4_VALUE           			0x0000
#define STRIG5_VALUE           			0x0000
#define STRIG6_VALUE           			0x0000
#define STRIG7_VALUE           			0x0000
#define STRIG8_VALUE           			0x0000
#define STRIG9_VALUE           			0x0000

#define PWMCAP1_VALUE           		0x0000
#define PWMCAP2_VALUE           		0x0000
#define PWMCAP3_VALUE           		0x0000
#define PWMCAP4_VALUE           		0x0000
#define PWMCAP5_VALUE           		0x0000
#define PWMCAP6_VALUE           		0x0000
#define PWMCAP7_VALUE           		0x0000
#define PWMCAP8_VALUE           		0x0000
#define PWMCAP9_VALUE           		0x0000

#define LEBDLY1_VALUE           		0x0000
#define LEBDLY2_VALUE           		0x0000
#define LEBDLY3_VALUE           		0x0000
#define LEBDLY4_VALUE           		0x0000
#define LEBDLY5_VALUE           		0x0000
#define LEBDLY6_VALUE           		0x0000
#define LEBDLY7_VALUE           		0x0000
#define LEBDLY8_VALUE           		0x0000
#define LEBDLY9_VALUE           		0x0000

#endif



/*----------------------------------------------------------------------------------------------------*/
/* PTCON Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_MOD_EN						0x8000 /*PWM Module Enable */
#define PWM_MOD_DIS						0x0000 /*PWM Module Disable*/

#define PWM_IDLE_STOP					0x2000 /* PWM Time base in Idle mode Operation halts */
#define PWM_IDLE_CONT					0x0000 /* PWM Time base in Idle mode Operation runs */

#define PWM_SEVT_INT					0x0000 /* Special Event Interrupt Status bit */

#define PWM_SEVT_INT_EN					0x0800 /* Special Event Interrupt Enable */
#define PWM_SEVT_INT_DIS				0x0000 /* Special Event Interrupt Disable */
 
#define PWM_PER_UPDATE_IMM				0x0400 /* Enable Period Update Immediate   */
#define PWM_PER_UPDATE_BOUND			0x0000 /* Enable Period Update on cycle Boundary */

#define PWM_SYNCPOL_LOW_ACT				0x0200 /* Input Polarity Synchronize Low active */
#define PWM_SYNCPOL_HIGH_ACT			0x0000 /* Input Polarity Synchronize Low active */

#define PWM_PTB_SYNC_EN					0x0100 /* Primary Time Base Sync Enable */
#define PWM_PTB_SYNC_DIS				0x0000 /* Primary Time Base Sync Disable */

#define PWM_EXT_PTB_SYNC_EN				0x0080 /* External Primary Time Base Sync Enable  */
#define PWM_EXT_PTB_SYNC_DIS			0x0000 /* External Primary Time Base Sync Disable */

#define PWM_SYNC1						0x0000 /* Sync1 Source Selection */ 

#if defined (__dsPIC33F__)
#define PWM_SYNCI1						0x0000 /* Sync1 Source Selection */ 
#define PWM_SYNCI2						0x0010 /* Sync1 Source Selection */ 
#endif

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
/* PTCON2 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM_INPUT_CLK_DIV0				0x0000 /* Divide by 1, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV1				0x0001 /* Divide by 2, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV2				0x0002 /* Divide by 4, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV3				0x0003 /* Divide by 8, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV4				0x0004 /* Divide by 16, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV5				0x0005 /* Divide by 32, Maximum PWM timing resolution  */
#define PWM_INPUT_CLK_DIV6				0x0006 /* Divide by 64, Maximum PWM timing resolution  */

/*----------------------------------------------------------------------------------------------------*/
/* PWMCON1 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM1_FLT_INT_STAT				0x0000 /* Fault Interrupt Status software cleared */

#define PWM1_CL_INT_STAT				0x0000  /* Current Limit Interrupt Status software cleared */

#define PWM1_TRG_INT_STAT				0x0000  /* Trigger  Interrupt Status software cleared */

#define PWM1_FLT_INT_EN					0x1000  /* PWM1 Fault Interrupt Enable  */
#define PWM1_FLT_INT_DIS				0x0000  /* PWM1 Fault Interrupt Disable */

#define PWM1_CL_INT_EN					0x0800  /* PWM1 Current Limit Interrupt Enable   */
#define PWM1_CL_INT_DIS					0x0000  /* PWM1 Current Limit Interrupt Disable  */

#define PWM1_TRG_INT_EN					0x0400  /* PWM1 Trigger Interrupt Enable   */
#define PWM1_TRG_INT_DIS				0x0000  /* PWM1 Trigger Interrupt Disable  */

#define PWM1_TB_MODE_PH1				0x0200  /* Phase1 reg provides Time base period for PWM Gen       */
#define PWM1_TB_MODE_PTB				0x0000  /* Primary time base (PTPER register) provides timing for PWM Gen   */

#if defined (__dsPIC33F__)
#define PWM1_TB_MODE_PH1_SPH1			0x0200  /* Phase1 / SPhase1 register provides Time base period for PWM Gen */
#endif

#define PWM1_D_CYLE_MDC					0x0100  /* Master Duty Cycle reg provides duty cycle info for PWM Gen  */
#define PWM1_D_CYLE_DC1					0x0000  /* Duty Cycle1 reg provides duty cycle info for PWM Gen        */

#define PWM1_DT_POS						0x0000  /* Positive dead time applied to all o/p modes  */
#define PWM1_DT_NEG						0x0040  /* Negative dead time applied to all o/p modes  */
#define PWM1_DT_DIS						0x0080  /* Dead time function disabled                  */

#if defined (__dsPIC33F__)
#define	PWM1_CENTER_ALIGN_EN			0x0004	/*Center-aligned mode is enabled*/
#define	PWM1_CENTER_ALIGN_DIS			0x0000	/*Center-aligned mode is Disabled*/
#endif

#define PWM1_CL_RES_TB_EN				0x0002 /* Current Limit source resets time base for this PWM gen in independent time base mode  */
#define PWM1_EXT_RES_DIS				0x0000 /* External pins do not affect PWM time base   */

#define PWM1_PDC_UPDATE_IMM				0x0001  /* Updates to active PDC regs are immediate  */
#define PWM1_PDC_UPDATE_SYNC			0x0000  /* Updates to active PDC regs are sync with PWM time base */


/*----------------------------------------------------------------------------------------------------*/
/* PWMCON2 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM2_FLT_INT_STAT				0x0000 /* Fault Interrupt Status software cleared */

#define PWM2_CL_INT_STAT				0x0000  /* Current Limit Interrupt Status software cleared */

#define PWM2_TRG_INT_STAT				0x0000  /* Trigger  Interrupt Status software cleared */

#define PWM2_FLT_INT_EN					0x1000  /* PWM2 Fault Interrupt Enable  */
#define PWM2_FLT_INT_DIS				0x0000  /* PWM2 Fault Interrupt Disable */

#define PWM2_CL_INT_EN					0x0800  /* PWM2 Current Limit Interrupt Enable   */
#define PWM2_CL_INT_DIS					0x0000  /* PWM2 Current Limit Interrupt Disable  */

#define PWM2_TRG_INT_EN					0x0400  /* PWM2 Trigger Interrupt Enable   */
#define PWM2_TRG_INT_DIS				0x0000  /* PWM2 Trigger Interrupt Disable  */

#define PWM2_TB_MODE_PH2				0x0200  /* Phase2 reg provides Time base period for PWM Gen       */
#define PWM2_TB_MODE_PTB				0x0000  /* Primary time base (PTPER register) provides timing for PWM Gen  */

#if defined (__dsPIC33F__)
#define PWM2_TB_MODE_PH2_SPH2			0x0200  /* Phase2 / SPhase2 register provides Time base period for PWM Gen */
#endif

#define PWM2_D_CYLE_MDC					0x0100  /* Master Duty Cycle reg provides duty cycle info for PWM Gen  */
#define PWM2_D_CYLE_DC2					0x0000  /* Duty Cycle2 reg provides duty cycle info for PWM Gen        */

#define PWM2_DT_POS						0x0000  /* Positive dead time applied to all o/p modes  */
#define PWM2_DT_NEG						0x0040  /* Negative dead time applied to all o/p modes  */
#define PWM2_DT_DIS						0x0080  /* Dead time function disabled                  */

#if defined (__dsPIC33F__)
#define	PWM2_CENTER_ALIGN_EN			0x0004	/*Center-aligned mode is enabled*/
#define	PWM2_CENTER_ALIGN_DIS			0x0000	/*Center-aligned mode is Disabled*/
#endif

#define PWM2_CL_RES_TB_EN				0x0002 /* Current Limit source resets time base for this PWM gen in independent time base mode  */
#define PWM2_EXT_RES_DIS				0x0000 /* External pins do not affect PWM time base   */

#define PWM2_PDC_UPDATE_IMM				0x0001  /* Updates to active PDC regs are immediate  */
#define PWM2_PDC_UPDATE_SYNC			0x0000  /* Updates to active PDC regs are sync with PWM time base */

/*----------------------------------------------------------------------------------------------------*/
/* PWMCON3 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM3_FLT_INT_STAT				0x0000 /* Fault Interrupt Status software cleared */

#define PWM3_CL_INT_STAT				0x0000  /* Current Limit Interrupt Status software cleared */

#define PWM3_TRG_INT_STAT				0x0000  /* Trigger  Interrupt Status software cleared */

#define PWM3_FLT_INT_EN					0x1000  /* PWM3 Fault Interrupt Enable  */
#define PWM3_FLT_INT_DIS				0x0000  /* PWM3 Fault Interrupt Disable */

#define PWM3_CL_INT_EN					0x0800  /* PWM3 Current Limit Interrupt Enable   */
#define PWM3_CL_INT_DIS					0x0000  /* PWM3 Current Limit Interrupt Disable  */

#define PWM3_TRG_INT_EN					0x0400  /* PWM3 Trigger Interrupt Enable   */
#define PWM3_TRG_INT_DIS				0x0000  /* PWM3 Trigger Interrupt Disable  */

#define PWM3_TB_MODE_PH3				0x0200  /* Phase3 reg provides Time base period for PWM Gen       */
#define PWM3_TB_MODE_PTB				0x0000  /* Primary time base (PTPER register) provides timing for PWM Gen   */

#if defined (__dsPIC33F__)
#define PWM3_TB_MODE_PH3_SPH3			0x0200  /* Phase3 / SPhase3 register provides Time base period for PWM Gen */
#endif

#define PWM3_D_CYLE_MDC					0x0100  /* Master Duty Cycle reg provides duty cycle info for PWM Gen  */
#define PWM3_D_CYLE_DC3					0x0000  /* Duty Cycle3 reg provides duty cycle info for PWM Gen        */

#define PWM3_DT_POS						0x0000  /* Positive dead time applied to all o/p modes  */
#define PWM3_DT_NEG						0x0040  /* Negative dead time applied to all o/p modes  */
#define PWM3_DT_DIS						0x0080  /* Dead time function disabled                  */

#if defined (__dsPIC33F__)
#define	PWM3_CENTER_ALIGN_EN			0x0004	/*Center-aligned mode is enabled*/
#define	PWM3_CENTER_ALIGN_DIS			0x0000	/*Center-aligned mode is Disabled*/
#endif

#define PWM3_CL_RES_TB_EN				0x0002 /* Current Limit source resets time base for this PWM gen in independent time base mode  */
#define PWM3_EXT_RES_DIS				0x0000 /* External pins do not affect PWM time base   */

#define PWM3_PDC_UPDATE_IMM				0x0001  /* Updates to active PDC regs are immediate  */
#define PWM3_PDC_UPDATE_SYNC			0x0000  /* Updates to active PDC regs are sync with PWM time base */


/*----------------------------------------------------------------------------------------------------*/
/* PWMCON4 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM4_FLT_INT_STAT				0x0000 /* Fault Interrupt Status software cleared */

#define PWM4_CL_INT_STAT				0x0000  /* Current Limit Interrupt Status software cleared */

#define PWM4_TRG_INT_STAT				0x0000  /* Trigger  Interrupt Status software cleared */

#define PWM4_FLT_INT_EN					0x1000  /* PWM4 Fault Interrupt Enable  */
#define PWM4_FLT_INT_DIS				0x0000  /* PWM4 Fault Interrupt Disable */

#define PWM4_CL_INT_EN					0x0800  /* PWM4 Current Limit Interrupt Enable   */
#define PWM4_CL_INT_DIS					0x0000  /* PWM4 Current Limit Interrupt Disable  */

#define PWM4_TRG_INT_EN					0x0400  /* PWM4 Trigger Interrupt Enable   */
#define PWM4_TRG_INT_DIS				0x0000  /* PWM4 Trigger Interrupt Disable  */

#define PWM4_TB_MODE_PH4				0x0200  /* Phase4 reg provides Time base period for PWM Gen       */
#define PWM4_TB_MODE_PTB				0x0000  /* Primary time base (PTPER register) provides timing for PWM Gen   */

#if defined (__dsPIC33F__)
#define PWM4_TB_MODE_PH4_SPH4			0x0200  /* Phase4 / SPhase4 register provides Time base period for PWM Gen */
#endif

#define PWM4_D_CYLE_MDC					0x0100  /* Master Duty Cycle reg provides duty cycle info for PWM Gen  */
#define PWM4_D_CYLE_DC4					0x0000  /* Duty Cycle4 reg provides duty cycle info for PWM Gen        */

#define PWM4_DT_POS						0x0000  /* Positive dead time applied to all o/p modes  */
#define PWM4_DT_NEG						0x0040  /* Negative dead time applied to all o/p modes  */
#define PWM4_DT_DIS						0x0080  /* Dead time function disabled                  */

#if defined (__dsPIC33F__)
#define	PWM4_CENTER_ALIGN_EN			0x0004	/*Center-aligned mode is enabled*/
#define	PWM4_CENTER_ALIGN_DIS			0x0000	/*Center-aligned mode is Disabled*/
#endif

#define PWM4_CL_RESET_TB_EN				0x0002 /* Current Limit source resets time base for this PWM gen in independent time base mode  */
#define PWM4_EXT_RESET_DIS				0x0000 /* External pins do not affect PWM time base   */

#define PWM4_PDC_UPDATE_IMM				0x0001  /* Updates to active PDC regs are immediate  */
#define PWM4_PDC_UPDATE_SYNC			0x0000  /* Updates to active PDC regs are sync with PWM time base */





/*----------------------------------------------------------------------------------------------------*/
/* PWMCON5 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM5_FLT_INT_STAT				0x0000 /* Fault Interrupt Status software cleared */

#define PWM5_CL_INT_STAT				0x0000  /* Current Limit Interrupt Status software cleared */

#define PWM5_TRG_INT_STAT				0x0000  /* Trigger  Interrupt Status software cleared */

#define PWM5_FLT_INT_EN					0x1000  /* PWM5 Fault Interrupt Enable  */
#define PWM5_FLT_INT_DIS				0x0000  /* PWM5 Fault Interrupt Disable */

#define PWM5_CL_INT_EN					0x0800  /* PWM5 Current Limit Interrupt Enable   */
#define PWM5_CL_INT_DIS					0x0000  /* PWM5 Current Limit Interrupt Disable  */

#define PWM5_TRG_INT_EN					0x0400  /* PWM5 Trigger Interrupt Enable   */
#define PWM5_TRG_INT_DIS				0x0000  /* PWM5 Trigger Interrupt Disable  */

#define PWM5_TB_MODE_PH5				0x0200  /* Phase5 reg provides Time base period for PWM Gen       */
#define PWM5_TB_MODE_PTB				0x0000  /* Primary time base (PTPER register) provides timing for PWM Gen   */

#if defined (__dsPIC33F__)
#define PWM5_TB_MODE_PH5_SPH5			0x0200  /* Phase4 / SPhase4 register provides Time base period for PWM Gen */
#endif

#define PWM5_D_CYLE_MDC					0x0100  /* Master Duty Cycle reg provides duty cycle info for PWM Gen  */
#define PWM5_D_CYLE_DC5					0x0000  /* Duty Cycle5 reg provides duty cycle info for PWM Gen        */

#define PWM5_DT_POS						0x0000  /* Positive dead time applied to all o/p modes  */
#define PWM5_DT_NEG						0x0040  /* Negative dead time applied to all o/p modes  */
#define PWM5_DT_DIS						0x0080  /* Dead time function disabled                  */

#if defined (__dsPIC33F__)
#define	PWM5_CENTER_ALIGN_EN			0x0004	/*Center-aligned mode is enabled*/
#define	PWM5_CENTER_ALIGN_DIS			0x0000	/*Center-aligned mode is Disabled*/
#endif

#define PWM5_CL_RESET_TB_EN				0x0002 /* Current Limit source resets time base for this PWM gen in independent time base mode  */
#define PWM5_EXT_RESET_DIS				0x0000 /* External pins do not affect PWM time base   */

#define PWM5_PDC_UPDATE_IMM				0x0001  /* Updates to active PDC regs are immediate  */
#define PWM5_PDC_UPDATE_SYNC			0x0000  /* Updates to active PDC regs are sync with PWM time base */



/*----------------------------------------------------------------------------------------------------*/
/* PWMCON6 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM6_FLT_INT_STAT				0x0000 /* Fault Interrupt Status software cleared */

#define PWM6_CL_INT_STAT				0x0000  /* Current Limit Interrupt Status software cleared */

#define PWM6_TRG_INT_STAT				0x0000  /* Trigger  Interrupt Status software cleared */

#define PWM6_FLT_INT_EN					0x1000  /* PWM6 Fault Interrupt Enable  */
#define PWM6_FLT_INT_DIS				0x0000  /* PWM6 Fault Interrupt Disable */

#define PWM6_CL_INT_EN					0x0800  /* PWM6 Current Limit Interrupt Enable   */
#define PWM6_CL_INT_DIS					0x0000  /* PWM6 Current Limit Interrupt Disable  */

#define PWM6_TRG_INT_EN					0x0400  /* PWM6 Trigger Interrupt Enable   */
#define PWM6_TRG_INT_DIS				0x0000  /* PWM6 Trigger Interrupt Disable  */

#define PWM6_TB_MODE_PH6				0x0200  /* Phase6 reg provides Time base period for PWM Gen       */
#define PWM6_TB_MODE_PTB				0x0000  /* Primary time base (PTPER register) provides timing for PWM Gen   */

#if defined (__dsPIC33F__)
#define PWM6_TB_MODE_PH6_SPH6			0x0200  /* Phase4 / SPhase4 register provides Time base period for PWM Gen */
#endif

#define PWM6_D_CYLE_MDC					0x0100  /* Master Duty Cycle reg provides duty cycle info for PWM Gen  */
#define PWM6_D_CYLE_DC6					0x0000  /* Duty Cycle6 reg provides duty cycle info for PWM Gen        */

#define PWM6_DT_POS						0x0000  /* Positive dead time applied to all o/p modes  */
#define PWM6_DT_NEG						0x0040  /* Negative dead time applied to all o/p modes  */
#define PWM6_DT_DIS						0x0080  /* Dead time function disabled                  */

#if defined (__dsPIC33F__)
#define	PWM6_CENTER_ALIGN_EN			0x0004	/*Center-aligned mode is enabled*/
#define	PWM6_CENTER_ALIGN_DIS			0x0000	/*Center-aligned mode is Disabled*/
#endif

#define PWM6_CL_RESET_TB_EN				0x0002 /* Current Limit source resets time base for this PWM gen in independent time base mode  */
#define PWM6_EXT_RESET_DIS				0x0000 /* External pins do not affect PWM time base   */

#define PWM6_PDC_UPDATE_IMM				0x0001  /* Updates to active PDC regs are immediate  */
#define PWM6_PDC_UPDATE_SYNC			0x0000  /* Updates to active PDC regs are sync with PWM time base */




/*----------------------------------------------------------------------------------------------------*/
/* PWMCON7 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM7_FLT_INT_STAT				0x0000 /* Fault Interrupt Status software cleared */

#define PWM7_CL_INT_STAT				0x0000  /* Current Limit Interrupt Status software cleared */

#define PWM7_TRG_INT_STAT				0x0000  /* Trigger  Interrupt Status software cleared */

#define PWM7_FLT_INT_EN					0x1000  /* PWM7 Fault Interrupt Enable  */
#define PWM7_FLT_INT_DIS				0x0000  /* PWM7 Fault Interrupt Disable */

#define PWM7_CL_INT_EN					0x0800  /* PWM7 Current Limit Interrupt Enable   */
#define PWM7_CL_INT_DIS					0x0000  /* PWM7 Current Limit Interrupt Disable  */

#define PWM7_TRG_INT_EN					0x0400  /* PWM7 Trigger Interrupt Enable   */
#define PWM7_TRG_INT_DIS				0x0000  /* PWM7 Trigger Interrupt Disable  */

#define PWM7_TB_MODE_PH7				0x0200  /* Phase7 reg provides Time base period for PWM Gen       */
#define PWM7_TB_MODE_PTB				0x0000  /* Primary time base (PTPER register) provides timing for PWM Gen   */

#if defined (__dsPIC33F__)
#define PWM7_TB_MODE_PH7_SPH7			0x0200  /* Phase4 / SPhase4 register provides Time base period for PWM Gen */
#endif

#define PWM7_D_CYLE_MDC					0x0100  /* Master Duty Cycle reg provides duty cycle info for PWM Gen  */
#define PWM7_D_CYLE_DC7					0x0000  /* Duty Cycle7 reg provides duty cycle info for PWM Gen        */

#define PWM7_DT_POS						0x0000  /* Positive dead time applied to all o/p modes  */
#define PWM7_DT_NEG						0x0040  /* Negative dead time applied to all o/p modes  */
#define PWM7_DT_DIS						0x0080  /* Dead time function disabled                  */

#if defined (__dsPIC33F__)
#define	PWM7_CENTER_ALIGN_EN			0x0004	/*Center-aligned mode is enabled*/
#define	PWM7_CENTER_ALIGN_DIS			0x0000	/*Center-aligned mode is Disabled*/
#endif

#define PWM7_CL_RESET_TB_EN				0x0002 /* Current Limit source resets time base for this PWM gen in independent time base mode  */
#define PWM7_EXT_RESET_DIS				0x0000 /* External pins do not affect PWM time base   */

#define PWM7_PDC_UPDATE_IMM				0x0001  /* Updates to active PDC regs are immediate  */
#define PWM7_PDC_UPDATE_SYNC			0x0000  /* Updates to active PDC regs are sync with PWM time base */




/*----------------------------------------------------------------------------------------------------*/
/* PWMCON8 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM8_FLT_INT_STAT				0x0000 /* Fault Interrupt Status software cleared */

#define PWM8_CL_INT_STAT				0x0000  /* Current Limit Interrupt Status software cleared */

#define PWM8_TRG_INT_STAT				0x0000  /* Trigger  Interrupt Status software cleared */

#define PWM8_FLT_INT_EN					0x1000  /* PWM8 Fault Interrupt Enable  */
#define PWM8_FLT_INT_DIS				0x0000  /* PWM8 Fault Interrupt Disable */

#define PWM8_CL_INT_EN					0x0800  /* PWM8 Current Limit Interrupt Enable   */
#define PWM8_CL_INT_DIS					0x0000  /* PWM8 Current Limit Interrupt Disable  */

#define PWM8_TRG_INT_EN					0x0400  /* PWM8 Trigger Interrupt Enable   */
#define PWM8_TRG_INT_DIS				0x0000  /* PWM8 Trigger Interrupt Disable  */

#define PWM8_TB_MODE_PH8				0x0200  /* Phase8 reg provides Time base period for PWM Gen       */
#define PWM8_TB_MODE_PTB				0x0000  /* Primary time base (PTPER register) provides timing for PWM Gen   */

#if defined (__dsPIC33F__)
#define PWM8_TB_MODE_PH8_SPH8			0x0200  /* Phase4 / SPhase4 register provides Time base period for PWM Gen */
#endif

#define PWM8_D_CYLE_MDC					0x0100  /* Master Duty Cycle reg provides duty cycle info for PWM Gen  */
#define PWM8_D_CYLE_DC8					0x0000  /* Duty Cycle8 reg provides duty cycle info for PWM Gen        */

#define PWM8_DT_POS						0x0000  /* Positive dead time applied to all o/p modes  */
#define PWM8_DT_NEG						0x0040  /* Negative dead time applied to all o/p modes  */
#define PWM8_DT_DIS						0x0080  /* Dead time function disabled                  */

#if defined (__dsPIC33F__)
#define	PWM8_CENTER_ALIGN_EN			0x0004	/*Center-aligned mode is enabled*/
#define	PWM8_CENTER_ALIGN_DIS			0x0000	/*Center-aligned mode is Disabled*/
#endif

#define PWM8_CL_RESET_TB_EN				0x0002 /* Current Limit source resets time base for this PWM gen in independent time base mode  */
#define PWM8_EXT_RESET_DIS				0x0000 /* External pins do not affect PWM time base   */

#define PWM8_PDC_UPDATE_IMM				0x0001  /* Updates to active PDC regs are immediate  */
#define PWM8_PDC_UPDATE_SYNC			0x0000  /* Updates to active PDC regs are sync with PWM time base */





/*----------------------------------------------------------------------------------------------------*/
/* PWMCON9 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM9_FLT_INT_STAT				0x0000 /* Fault Interrupt Status software cleared */

#define PWM9_CL_INT_STAT				0x0000  /* Current Limit Interrupt Status software cleared */

#define PWM9_TRG_INT_STAT				0x0000  /* Trigger  Interrupt Status software cleared */

#define PWM9_FLT_INT_EN					0x1000  /* PWM9 Fault Interrupt Enable  */
#define PWM9_FLT_INT_DIS				0x0000  /* PWM9 Fault Interrupt Disable */

#define PWM9_CL_INT_EN					0x0800  /* PWM9 Current Limit Interrupt Enable   */
#define PWM9_CL_INT_DIS					0x0000  /* PWM9 Current Limit Interrupt Disable  */

#define PWM9_TRG_INT_EN					0x0400  /* PWM9 Trigger Interrupt Enable   */
#define PWM9_TRG_INT_DIS				0x0000  /* PWM9 Trigger Interrupt Disable  */

#define PWM9_TB_MODE_PH9				0x0200  /* Phase9 reg provides Time base period for PWM Gen       */
#define PWM9_TB_MODE_PTB				0x0000  /* Primary time base (PTPER register) provides timing for PWM Gen   */

#if defined (__dsPIC33F__)
#define PWM9_TB_MODE_PH9_SPH9			0x0200  /* Phase4 / SPhase4 register provides Time base period for PWM Gen */
#endif

#define PWM9_D_CYLE_MDC					0x0100  /* Master Duty Cycle reg provides duty cycle info for PWM Gen  */
#define PWM9_D_CYLE_DC9					0x0000  /* Duty Cycle9 reg provides duty cycle info for PWM Gen        */

#define PWM9_DT_POS						0x0000  /* Positive dead time applied to all o/p modes  */
#define PWM9_DT_NEG						0x0040  /* Negative dead time applied to all o/p modes  */
#define PWM9_DT_DIS						0x0080  /* Dead time function disabled                  */

#if defined (__dsPIC33F__)
#define	PWM9_CENTER_ALIGN_EN			0x0004	/*Center-aligned mode is enabled*/
#define	PWM9_CENTER_ALIGN_DIS			0x0000	/*Center-aligned mode is Disabled*/
#endif

#define PWM9_CL_RESET_TB_EN				0x0002 /* Current Limit source resets time base for this PWM gen in independent time base mode  */
#define PWM9_EXT_RESET_DIS				0x0000 /* External pins do not affect PWM time base   */

#define PWM9_PDC_UPDATE_IMM				0x0001  /* Updates to active PDC regs are immediate  */
#define PWM9_PDC_UPDATE_SYNC			0x0000  /* Updates to active PDC regs are sync with PWM time base */









/*----------------------------------------------------------------------------------------------------*/
/* IOCON1 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM1_H_PIN_EN					0x8000  /* PWM module controls PWM1H */
#define PWM1_H_PIN_GPIO					0x0000  /* GPIO module controls PWM1H   */

#define PWM1_L_PIN_EN					0x4000  /* PWM module controls PWM1L */
#define PWM1_L_PIN_GPIO					0x0000  /* GPIO module controls PWM1L   */

#define PWM1_H_PIN_ACTLOW				0x2000  /* PWM1H pin is low active */
#define PWM1_H_PIN_ACTHIGH				0x0000  /* PWM1H pin is high active */

#define PWM1_L_PIN_ACTLOW				0x1000  /* PWM1L pin is low active */
#define PWM1_L_PIN_ACTHIGH				0x0000  /* PWM1L pin is high active */

#define PWM1_IO_PIN_PAIR_COMP			0x0000  /* PWM1 I/O Pair in complementary output mode  */
#define PWM1_IO_PIN_PAIR_PUSHPULL		0x0800  /* PWM1 I/O Pair in Push-Pull output mode  */

#if defined (__dsPIC30F__)
#define PWM1_IO_PIN_PAIR_IND			0x0400  /* PWM1 I/O Pair in Independent output mode  */

#elif defined (__dsPIC33F__)
#define PWM1_IO_PIN_PAIR_RED			0x0400  /* PWM1 I/O Pair in Redundant output mode  */
#define PWM1_IO_PIN_PAIR_TRUE_IND		0x0C00  /* PWM1 I/O Pair in True Independent output mode  */
#endif

#define PWM1_ORENH_OVRDAT				0x0200  /* OVRDAT<1> provides data for output on PWM1H pin  */
#define PWM1_ORENH_PWMGEN				0x0000  /* PWM1 generator provides data for PWM1H pin  */

#define PWM1_ORENL_OVRDAT				0x0100  /* OVRDAT<0> provides data for output on PWM1L pin  */
#define PWM1_ORENL_PWMGEN				0x0000  /* PWM1 generator provides data for PWM1L pin  */

#define PWM1_ORENH1_OVRDAT_LL			0x0000  /* If OVERNH=1 then OVRDAT<0>  provides data for PWM1L */
#define PWM1_ORENH1_OVRDAT_LH			0x0040  /* If OVERNH=1 then OVRDAT<0>  provides data for PWM1L */
#define PWM1_ORENL1_OVRDAT_HL			0x0080  /* If OVERNL=1 then OVRDAT<1>  provides data for PWM1H */
#define PWM1_ORENL1_OVRDAT_HH			0x00C0  /* If OVERNL=1 then OVRDAT<1>  provides data for PWM1H */

#define PWM1_FLT_EN_FLTDAT_LL			0x0000  /* If Fault active  then FLTDAT<0>  provides data for PWM1L */
#define PWM1_FLT_EN_FLTDAT_LH			0x0010  /* If Fault active  then FLTDAT<0>  provides data for PWM1L */
#define PWM1_FLT_EN_FLTDAT_HL			0x0020  /* If Fault active  then FLTDAT<1>  provides data for PWM1H */
#define PWM1_FLT_EN_FLTDAT_HH			0x0030  /* If Fault active  then FLTDAT<1>  provides data for PWM1H */

#if defined (__dsPIC33F__)
#define PWM1_IFLT_EN_FLT_EN_FLTDAT_LL	0x0000	/* If Fault active, then FLTDAT<0> provides data for PWM1L */
#define PWM1_IFLT_EN_FLT_EN_FLTDAT_LH	0x0010  /* If Fault active, then FLTDAT<0> provides data for PWM1L */
#define PWM1_IFLT_EN_CL_EN_FLTDAT_HL	0x0020  /* If Current Limit active, then FLTDAT<1> provides data for PWM1H */
#define PWM1_IFLT_EN_CL_EN_FLTDAT_HH	0x0030  /* If Current Limit active, then FLTDAT<1> provides data for PWM1H */
#endif

#define PWM1_CL_EN_CLDAT_LL				0x0000  /* If Current Limit active  then CLDAT<0>  provides data for PWM1L */
#define PWM1_CL_EN_CLDAT_LH				0x0004  /* If Current Limit active  then CLDAT<0>  provides data for PWM1L */
#define PWM1_CL_EN_CLDAT_HL				0x0008  /* If Current Limit active  then CLDAT<1>  provides data for PWM1H */
#define PWM1_CL_EN_CLDAT_HH				0x000C  /* If Current Limit active  then CLDAT<1>  provides data for PWM1H */

#if defined (__dsPIC33F__)
#define PWM1_PIN_SWAP_EN				0x0002  /* PWM1H output signal is connected to PWM1L pin and PWM1L signal is connected to PWM1H pins */
#define PWM1_PIN_SWAP_DIS				0x0000  /* PWM1H and PWM1L pins are mapped to their respective pins */
#endif

#define PWM1_OR_OVRDAT_SYNC_PWM			0x0001  /* Output overrides via the OVRDAT<1:0> bits are sync to PWM time base */
#define PWM1_OR_OVRDAT_NXT_CLK			0x0000  /* Output overrides via the OVRDAT<1:0> bits occur on next clk boundary */


/*----------------------------------------------------------------------------------------------------*/
/* IOCON2 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM2_H_PIN_EN					0x8000  /* PWM module controls PWM2H */
#define PWM2_H_PIN_GPIO					0x0000  /* GPIO module controls PWM2H  */

#define PWM2_L_PIN_EN					0x4000  /* PWM module controls PWM2L */
#define PWM2_L_PIN_GPIO					0x0000  /* GPIO module controls PWM2L  */

#define PWM2_H_PIN_ACTLOW				0x2000  /* PWM2H pin is low active */
#define PWM2_H_PIN_ACTHIGH				0x0000  /* PWM2H pin is high active */

#define PWM2_L_PIN_ACTLOW				0x1000  /* PWM2L pin is low active */
#define PWM2_L_PIN_ACTHIGH				0x0000  /* PWM2L pin is high active */

#define PWM2_IO_PIN_PAIR_COMP			0x0000  /* PWM2 I/O Pair in complementary output mode  */
#define PWM2_IO_PIN_PAIR_PUSHPULL		0x0800  /* PWM2 I/O Pair in Push-Pull output mode  */

#if defined (__dsPIC30F__)
#define PWM2_IO_PIN_PAIR_IND			0x0400  /* PWM2 I/O Pair in Independent output mode  */

#elif defined (__dsPIC33F__)
#define PWM2_IO_PIN_PAIR_RED			0x0400  /* PWM2 I/O Pair in Redundant output mode  */
#define PWM2_IO_PIN_PAIR_TRUE_IND		0x0C00  /* PWM2 I/O Pair in True Independent output mode  */
#endif

#define PWM2_ORENH_OVRDAT				0x0200  /* OVRDAT<1> provides data for output on PWM2H pin  */
#define PWM2_ORENH_PWMGEN				0x0000  /* PWM2 generator provides data for PWM2H pin  */

#define PWM2_ORENL_OVRDAT				0x0100  /* OVRDAT<0> provides data for output on PWM2L pin  */
#define PWM2_ORENL_PWMGEN				0x0000  /* PWM2 generator provides data for PWM2L pin  */

#define PWM2_ORENH1_OVRDAT_LL			0x0000  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM2H */
#define PWM2_ORENH1_OVRDAT_LH			0x0040  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM2H */
#define PWM2_ORENL1_OVRDAT_HL			0x0080  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM2L */
#define PWM2_ORENL1_OVRDAT_HH			0x00C0  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM2L */

#define PWM2_FLT_EN_FLTDAT_LL			0x0000  /* If Fault active  then FLTDAT<0>  provides data for PWM2L */
#define PWM2_FLT_EN_FLTDAT_LH			0x0010  /* If Fault active  then FLTDAT<0>  provides data for PWM2L */
#define PWM2_FLT_EN_FLTDAT_HL			0x0020  /* If Fault active  then FLTDAT<1>  provides data for PWM2H */
#define PWM2_FLT_EN_FLTDAT_HH			0x0030  /* If Fault active  then FLTDAT<1>  provides data for PWM2H */

#if defined (__dsPIC33F__)
#define PWM2_IFLT_EN_FLT_EN_FLTDAT_LL	0x0000	/* If Fault active, then FLTDAT<0> provides data for PWM2L */
#define PWM2_IFLT_EN_FLT_EN_FLTDAT_LH	0x0010  /* If Fault active, then FLTDAT<0> provides data for PWM2L */
#define PWM2_IFLT_EN_CL_EN_FLTDAT_HL	0x0020  /* If Current Limit active, then FLTDAT<1> provides data for PWM2H */
#define PWM2_IFLT_EN_CL_EN_FLTDAT_HH	0x0030  /* If Current Limit active, then FLTDAT<1> provides data for PWM2H */
#endif

#define PWM2_CL_EN_CLDAT_LL				0x0000  /* If Current Limit active  then CLDAT<0>  provides data for PWM2L */
#define PWM2_CL_EN_CLDAT_LH				0x0004  /* If Current Limit active  then CLDAT<0>  provides data for PWM2L */
#define PWM2_CL_EN_CLDAT_HL				0x0008  /* If Current Limit active  then CLDAT<1>  provides data for PWM2H */
#define PWM2_CL_EN_CLDAT_HH				0x000C  /* If Current Limit active  then CLDAT<1>  provides data for PWM2H */

#if defined (__dsPIC33F__)
#define PWM2_PIN_SWAP_EN				0x0002  /* PWM2H output signal is connected to PWM2L pin and PWM2L signal is connected to PWM2H pins */
#define PWM2_PIN_SWAP_DIS				0x0000  /* PWM2H and PWM2L pins are mapped to their respective pins */
#endif

#define PWM2_OR_OVRDAT_SYNC_PWM			0x0001  /* Output overrides via the OVRDAT<1:0> bits are sync to PWM time base */
#define PWM2_OR_OVRDAT_NXT_CLK			0x0000  /* Output overrides via the OVRDAT<1:0> bits occur on next clk boundary */

/*----------------------------------------------------------------------------------------------------*/
/* IOCON3 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM3_H_PIN_EN					0x8000  /* PWM module controls PWM3H */
#define PWM3_H_PIN_GPIO					0x0000  /* GPIO module controls PWM3H   */

#define PWM3_L_PIN_EN					0x4000  /* PWM module controls PWM3L */
#define PWM3_L_PIN_GPIO					0x0000  /* GPIO module controls PWM3L   */

#define PWM3_H_PIN_ACTLOW				0x2000  /* PWM3H pin is low active */
#define PWM3_H_PIN_ACTHIGH				0x0000  /* PWM3H pin is high active */

#define PWM3_L_PIN_ACTLOW				0x1000  /* PWM3L pin is low active */
#define PWM3_L_PIN_ACTHIGH				0x0000  /* PWM3L pin is high active */

#define PWM3_IO_PIN_PAIR_COMP			0x0000  /* PWM3 I/O Pair in complementary output mode  */
#define PWM3_IO_PIN_PAIR_PUSHPULL		0x0800  /* PWM3 I/O Pair in Push-Pull output mode  */

#if defined (__dsPIC30F__)
#define PWM3_IO_PIN_PAIR_IND			0x0400  /* PWM3 I/O Pair in Independent output mode  */

#elif defined (__dsPIC33F__)
#define PWM3_IO_PIN_PAIR_RED			0x0400  /* PWM3 I/O Pair in Redundant output mode  */
#define PWM3_IO_PIN_PAIR_TRUE_IND		0x0C00  /* PWM3 I/O Pair in True Independent output mode  */
#endif

#define PWM3_ORENH_OVRDAT				0x0200  /* OVRDAT<1> provides data for output on PWM3H pin  */
#define PWM3_ORENH_PWMGEN				0x0000  /* PWM3 generator provides data for PWM3H pin  */

#define PWM3_ORENL_OVRDAT				0x0100  /* OVRDAT<0> provides data for output on PWM3L pin  */
#define PWM3_ORENL_PWMGEN				0x0000  /* PWM generator provides data for PWM3L pin  */

#define PWM3_ORENH1_OVRDAT_LL			0x0000  /* If OVERNH=1 then OVRDAT<0>  provides data for PWM3L */
#define PWM3_ORENH1_OVRDAT_LH			0x0040  /* If OVERNH=1 then OVRDAT<0>  provides data for PWM3L */
#define PWM3_ORENL1_OVRDAT_HL			0x0080  /* If OVERNL=1 then OVRDAT<1>  provides data for PWM3H */
#define PWM3_ORENL1_OVRDAT_HH			0x00C0  /* If OVERNL=1 then OVRDAT<1>  provides data for PWM3H */

#define PWM3_FLT_EN_FLTDAT_LL			0x0000  /* If Fault active  then FLTDAT<0>  provides data for PWM3L */
#define PWM3_FLT_EN_FLTDAT_LH			0x0010  /* If Fault active  then FLTDAT<0>  provides data for PWM3L */
#define PWM3_FLT_EN_FLTDAT_HL			0x0020  /* If Fault active  then FLTDAT<1>  provides data for PWM3H */
#define PWM3_FLT_EN_FLTDAT_HH			0x0030  /* If Fault active  then FLTDAT<1>  provides data for PWM3H */

#if defined (__dsPIC33F__)
#define PWM3_IFLT_EN_FLT_EN_FLTDAT_LL	0x0000	/* If Fault active, then FLTDAT<0> provides data for PWM3L */
#define PWM3_IFLT_EN_FLT_EN_FLTDAT_LH	0x0010  /* If Fault active, then FLTDAT<0> provides data for PWM3L */
#define PWM3_IFLT_EN_CL_EN_FLTDAT_HL	0x0020  /* If Current Limit active, then FLTDAT<1> provides data for PWM3H */
#define PWM3_IFLT_EN_CL_EN_FLTDAT_HH	0x0030  /* If Current Limit active, then FLTDAT<1> provides data for PWM3H */
#endif

#define PWM3_CL_EN_CLDAT_LL				0x0000  /* If Current Limit active  then CLDAT<0>  provides data for PWM3L */
#define PWM3_CL_EN_CLDAT_LH				0x0004  /* If Current Limit active  then CLDAT<0>  provides data for PWM3L */
#define PWM3_CL_EN_CLDAT_HL				0x0008  /* If Current Limit active  then CLDAT<1>  provides data for PWM3H */
#define PWM3_CL_EN_CLDAT_HH				0x000C  /* If Current Limit active  then CLDAT<1>  provides data for PWM3H */

#if defined (__dsPIC33F__)
#define PWM3_PIN_SWAP_EN				0x0002  /* PWM3H output signal is connected to PWM3L pin and PWM3L signal is connected to PWM3H pins */
#define PWM3_PIN_SWAP_DIS				0x0000  /* PWM3H and PWM3L pins are mapped to their respective pins */
#endif

#define PWM3_OR_OVRDAT_SYNC_PWM			0x0001  /* Output overrides via the OVRDAT<1:0> bits are sync to PWM time base */
#define PWM3_OR_OVRDAT_NXT_CLK			0x0000  /* Output overrides via the OVRDAT<1:0> bits occur on next clk boundary */


/*----------------------------------------------------------------------------------------------------*/
/* IOCON4 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM4_H_PIN_EN					0x8000  /* PWM module controls PWM4H */
#define PWM4_H_PIN_GPIO					0x0000  /* GPIO module controls PWM4H   */

#define PWM4_L_PIN_EN					0x4000  /* PWM module controls PWM4L */
#define PWM4_L_PIN_GPIO					0x0000  /* GPIO module controls PWM4L   */

#define PWM4_H_PIN_ACTLOW				0x2000  /* PWM4H pin is low active */
#define PWM4_H_PIN_ACTHIGH				0x0000  /* PWM4H pin is high active */

#define PWM4_L_PIN_ACTLOW				0x1000  /* PWM4L pin is low active */
#define PWM4_L_PIN_ACTHIGH				0x0000  /* PWM4L pin is high active */

#define PWM4_IO_PIN_PAIR_COMP			0x0000  /* PWM4 I/O Pair in complementary output mode  */
#define PWM4_IO_PIN_PAIR_PUSHPULL		0x0800  /* PWM4 I/O Pair in Push-Pull output mode  */

#if defined (__dsPIC30F__)
#define PWM4_IO_PIN_PAIR_IND			0x0400  /* PWM4 I/O Pair in Independent output mode  */

#elif defined (__dsPIC33F__)
#define PWM4_IO_PIN_PAIR_RED			0x0400  /* PWM4 I/O Pair in Redundant output mode  */
#define PWM4_IO_PIN_PAIR_TRUE_IND		0x0C00  /* PWM4 I/O Pair in True Independent output mode  */
#endif

#define PWM4_ORENH_OVRDAT				0x0200  /* OVRDAT<1> provides data for output on PWM4H pin  */
#define PWM4_ORENH_PWMGEN				0x0000  /* PWM4 generator provides data for PWM4H pin  */

#define PWM4_ORENL_OVRDAT				0x0100  /* OVRDAT<0> provides data for output on PWM4L pin  */
#define PWM4_ORENL_PWMGEN				0x0000  /* PWM generator provides data for PWM4L pin  */

#define PWM4_ORENH1_OVRDAT_LL			0x0000  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM4H */
#define PWM4_ORENH1_OVRDAT_LH			0x0040  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM4H */
#define PWM4_ORENL1_OVRDAT_HL			0x0080  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM4L */
#define PWM4_ORENL1_OVRDAT_HH			0x00C0  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM4L */

#define PWM4_FLT_EN_FLTDAT_LL			0x0000  /* If Fault active  then FLTDAT<0>  provides data for PWM4L */
#define PWM4_FLT_EN_FLTDAT_LH			0x0010  /* If Fault active  then FLTDAT<0>  provides data for PWM4L */
#define PWM4_FLT_EN_FLTDAT_HL			0x0020  /* If Fault active  then FLTDAT<1>  provides data for PWM4H */
#define PWM4_FLT_EN_FLTDAT_HH			0x0030  /* If Fault active  then FLTDAT<1>  provides data for PWM4H */

#if defined (__dsPIC33F__)
#define PWM4_IFLT_EN_FLT_EN_FLTDAT_LL	0x0000	/* If Fault active, then FLTDAT<0> provides data for PWM4L */
#define PWM4_IFLT_EN_FLT_EN_FLTDAT_LH	0x0010  /* If Fault active, then FLTDAT<0> provides data for PWM4L */
#define PWM4_IFLT_EN_CL_EN_FLTDAT_HL	0x0020  /* If Current Limit active, then FLTDAT<1> provides data for PWM4H */
#define PWM4_IFLT_EN_CL_EN_FLTDAT_HH	0x0030  /* If Current Limit active, then FLTDAT<1> provides data for PWM4H */
#endif

#define PWM4_CL_EN_CLDAT_LL				0x0000  /* If Current Limit active  then CLDAT<0>  provides data for PWM4L */
#define PWM4_CL_EN_CLDAT_LH				0x0004  /* If Current Limit active  then CLDAT<0>  provides data for PWM4L */
#define PWM4_CL_EN_CLDAT_HL				0x0008  /* If Current Limit active  then CLDAT<1>  provides data for PWM4H */
#define PWM4_CL_EN_CLDAT_HH				0x000C  /* If Current Limit active  then CLDAT<1>  provides data for PWM4H */

#if defined (__dsPIC33F__)
#define PWM4_PIN_SWAP_EN				0x0002  /* PWM4H output signal is connected to PWM4L pin and PWM4L signal is connected to PWM4H pins */
#define PWM4_PIN_SWAP_DIS				0x0000  /* PWM4H and PWM4L pins are mapped to their respective pins */
#endif

#define PWM4_OR_OVRDAT_SYNC_PWM			0x0001  /* Output overrides via the OVRDAT<1:0> bits are sync to PWM time base */
#define PWM4_OR_OVRDAT_NXT_CLK			0x0000  /* Output overrides via the OVRDAT<1:0> bits occur on next clk boundary */










/*----------------------------------------------------------------------------------------------------*/
/* IOCON5 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM5_H_PIN_EN					0x8000  /* PWM module controls PWM5H */
#define PWM5_H_PIN_GPIO					0x0000  /* GPIO module controls PWM5H   */

#define PWM5_L_PIN_EN					0x4000  /* PWM module controls PWM5L */
#define PWM5_L_PIN_GPIO					0x0000  /* GPIO module controls PWM5L   */

#define PWM5_H_PIN_ACTLOW				0x2000  /* PWM5H pin is low active */
#define PWM5_H_PIN_ACTHIGH				0x0000  /* PWM5H pin is high active */

#define PWM5_L_PIN_ACTLOW				0x1000  /* PWM5L pin is low active */
#define PWM5_L_PIN_ACTHIGH				0x0000  /* PWM5L pin is high active */

#define PWM5_IO_PIN_PAIR_COMP			0x0000  /* PWM5 I/O Pair in complementary output mode  */
#define PWM5_IO_PIN_PAIR_PUSHPULL		0x0800  /* PWM5 I/O Pair in Push-Pull output mode  */

#if defined (__dsPIC30F__)
#define PWM5_IO_PIN_PAIR_IND			0x0400  /* PWM5 I/O Pair in Independent output mode  */

#elif defined (__dsPIC33F__)
#define PWM5_IO_PIN_PAIR_RED			0x0400  /* PWM5 I/O Pair in Redundant output mode  */
#define PWM5_IO_PIN_PAIR_TRUE_IND		0x0C00  /* PWM5 I/O Pair in True Independent output mode  */
#endif

#define PWM5_ORENH_OVRDAT				0x0200  /* OVRDAT<1> provides data for output on PWM5H pin  */
#define PWM5_ORENH_PWMGEN				0x0000  /* PWM5 generator provides data for PWM5H pin  */

#define PWM5_ORENL_OVRDAT				0x0100  /* OVRDAT<0> provides data for output on PWM5L pin  */
#define PWM5_ORENL_PWMGEN				0x0000  /* PWM generator provides data for PWM5L pin  */

#define PWM5_ORENH1_OVRDAT_LL			0x0000  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM5H */
#define PWM5_ORENH1_OVRDAT_LH			0x0040  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM5H */
#define PWM5_ORENL1_OVRDAT_HL			0x0080  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM5L */
#define PWM5_ORENL1_OVRDAT_HH			0x00C0  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM5L */

#define PWM5_FLT_EN_FLTDAT_LL			0x0000  /* If Fault active  then FLTDAT<0>  provides data for PWM5L */
#define PWM5_FLT_EN_FLTDAT_LH			0x0010  /* If Fault active  then FLTDAT<0>  provides data for PWM5L */
#define PWM5_FLT_EN_FLTDAT_HL			0x0020  /* If Fault active  then FLTDAT<1>  provides data for PWM5H */
#define PWM5_FLT_EN_FLTDAT_HH			0x0030  /* If Fault active  then FLTDAT<1>  provides data for PWM5H */

#if defined (__dsPIC33F__)
#define PWM5_IFLT_EN_FLT_EN_FLTDAT_LL	0x0000	/* If Fault active, then FLTDAT<0> provides data for PWM5L */
#define PWM5_IFLT_EN_FLT_EN_FLTDAT_LH	0x0010  /* If Fault active, then FLTDAT<0> provides data for PWM5L */
#define PWM5_IFLT_EN_CL_EN_FLTDAT_HL	0x0020  /* If Current Limit active, then FLTDAT<1> provides data for PWM5H */
#define PWM5_IFLT_EN_CL_EN_FLTDAT_HH	0x0030  /* If Current Limit active, then FLTDAT<1> provides data for PWM5H */
#endif

#define PWM5_CL_EN_CLDAT_LL				0x0000  /* If Current Limit active  then CLDAT<0>  provides data for PWM5L */
#define PWM5_CL_EN_CLDAT_LH				0x0004  /* If Current Limit active  then CLDAT<0>  provides data for PWM5L */
#define PWM5_CL_EN_CLDAT_HL				0x0008  /* If Current Limit active  then CLDAT<1>  provides data for PWM5H */
#define PWM5_CL_EN_CLDAT_HH				0x000C  /* If Current Limit active  then CLDAT<1>  provides data for PWM5H */

#if defined (__dsPIC33F__)
#define PWM5_PIN_SWAP_EN				0x0002  /* PWM5H output signal is connected to PWM5L pin and PWM5L signal is connected to PWM5H pins */
#define PWM5_PIN_SWAP_DIS				0x0000  /* PWM5H and PWM5L pins are mapped to their respective pins */
#endif

#define PWM5_OR_OVRDAT_SYNC_PWM			0x0001  /* Output overrides via the OVRDAT<1:0> bits are sync to PWM time base */
#define PWM5_OR_OVRDAT_NXT_CLK			0x0000  /* Output overrides via the OVRDAT<1:0> bits occur on next clk boundary */







/*----------------------------------------------------------------------------------------------------*/
/* IOCON6 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM6_H_PIN_EN					0x8000  /* PWM module controls PWM6H */
#define PWM6_H_PIN_GPIO					0x0000  /* GPIO module controls PWM6H   */

#define PWM6_L_PIN_EN					0x4000  /* PWM module controls PWM6L */
#define PWM6_L_PIN_GPIO					0x0000  /* GPIO module controls PWM6L   */

#define PWM6_H_PIN_ACTLOW				0x2000  /* PWM6H pin is low active */
#define PWM6_H_PIN_ACTHIGH				0x0000  /* PWM6H pin is high active */

#define PWM6_L_PIN_ACTLOW				0x1000  /* PWM6L pin is low active */
#define PWM6_L_PIN_ACTHIGH				0x0000  /* PWM6L pin is high active */

#define PWM6_IO_PIN_PAIR_COMP			0x0000  /* PWM6 I/O Pair in complementary output mode  */
#define PWM6_IO_PIN_PAIR_PUSHPULL		0x0800  /* PWM6 I/O Pair in Push-Pull output mode  */

#if defined (__dsPIC30F__)
#define PWM6_IO_PIN_PAIR_IND			0x0400  /* PWM6 I/O Pair in Independent output mode  */

#elif defined (__dsPIC33F__)
#define PWM6_IO_PIN_PAIR_RED			0x0400  /* PWM6 I/O Pair in Redundant output mode  */
#define PWM6_IO_PIN_PAIR_TRUE_IND		0x0C00  /* PWM6 I/O Pair in True Independent output mode  */
#endif

#define PWM6_ORENH_OVRDAT				0x0200  /* OVRDAT<1> provides data for output on PWM6H pin  */
#define PWM6_ORENH_PWMGEN				0x0000  /* PWM6 generator provides data for PWM6H pin  */

#define PWM6_ORENL_OVRDAT				0x0100  /* OVRDAT<0> provides data for output on PWM6L pin  */
#define PWM6_ORENL_PWMGEN				0x0000  /* PWM generator provides data for PWM6L pin  */

#define PWM6_ORENH1_OVRDAT_LL			0x0000  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM6H */
#define PWM6_ORENH1_OVRDAT_LH			0x0040  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM6H */
#define PWM6_ORENL1_OVRDAT_HL			0x0080  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM6L */
#define PWM6_ORENL1_OVRDAT_HH			0x00C0  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM6L */

#define PWM6_FLT_EN_FLTDAT_LL			0x0000  /* If Fault active  then FLTDAT<0>  provides data for PWM6L */
#define PWM6_FLT_EN_FLTDAT_LH			0x0010  /* If Fault active  then FLTDAT<0>  provides data for PWM6L */
#define PWM6_FLT_EN_FLTDAT_HL			0x0020  /* If Fault active  then FLTDAT<1>  provides data for PWM6H */
#define PWM6_FLT_EN_FLTDAT_HH			0x0030  /* If Fault active  then FLTDAT<1>  provides data for PWM6H */

#if defined (__dsPIC33F__)
#define PWM6_IFLT_EN_FLT_EN_FLTDAT_LL	0x0000	/* If Fault active, then FLTDAT<0> provides data for PWM6L */
#define PWM6_IFLT_EN_FLT_EN_FLTDAT_LH	0x0010  /* If Fault active, then FLTDAT<0> provides data for PWM6L */
#define PWM6_IFLT_EN_CL_EN_FLTDAT_HL	0x0020  /* If Current Limit active, then FLTDAT<1> provides data for PWM6H */
#define PWM6_IFLT_EN_CL_EN_FLTDAT_HH	0x0030  /* If Current Limit active, then FLTDAT<1> provides data for PWM6H */
#endif

#define PWM6_CL_EN_CLDAT_LL				0x0000  /* If Current Limit active  then CLDAT<0>  provides data for PWM6L */
#define PWM6_CL_EN_CLDAT_LH				0x0004  /* If Current Limit active  then CLDAT<0>  provides data for PWM6L */
#define PWM6_CL_EN_CLDAT_HL				0x0008  /* If Current Limit active  then CLDAT<1>  provides data for PWM6H */
#define PWM6_CL_EN_CLDAT_HH				0x000C  /* If Current Limit active  then CLDAT<1>  provides data for PWM6H */

#if defined (__dsPIC33F__)
#define PWM6_PIN_SWAP_EN				0x0002  /* PWM6H output signal is connected to PWM6L pin and PWM6L signal is connected to PWM6H pins */
#define PWM6_PIN_SWAP_DIS				0x0000  /* PWM6H and PWM6L pins are mapped to their respective pins */
#endif

#define PWM6_OR_OVRDAT_SYNC_PWM			0x0001  /* Output overrides via the OVRDAT<1:0> bits are sync to PWM time base */
#define PWM6_OR_OVRDAT_NXT_CLK			0x0000  /* Output overrides via the OVRDAT<1:0> bits occur on next clk boundary */



/*----------------------------------------------------------------------------------------------------*/
/* IOCON7 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM7_H_PIN_EN					0x8000  /* PWM module controls PWM7H */
#define PWM7_H_PIN_GPIO					0x0000  /* GPIO module controls PWM7H   */

#define PWM7_L_PIN_EN					0x4000  /* PWM module controls PWM7L */
#define PWM7_L_PIN_GPIO					0x0000  /* GPIO module controls PWM7L   */

#define PWM7_H_PIN_ACTLOW				0x2000  /* PWM7H pin is low active */
#define PWM7_H_PIN_ACTHIGH				0x0000  /* PWM7H pin is high active */

#define PWM7_L_PIN_ACTLOW				0x1000  /* PWM7L pin is low active */
#define PWM7_L_PIN_ACTHIGH				0x0000  /* PWM7L pin is high active */

#define PWM7_IO_PIN_PAIR_COMP			0x0000  /* PWM7 I/O Pair in complementary output mode  */
#define PWM7_IO_PIN_PAIR_PUSHPULL		0x0800  /* PWM7 I/O Pair in Push-Pull output mode  */

#if defined (__dsPIC30F__)
#define PWM7_IO_PIN_PAIR_IND			0x0400  /* PWM7 I/O Pair in Independent output mode  */

#elif defined (__dsPIC33F__)
#define PWM7_IO_PIN_PAIR_RED			0x0400  /* PWM7 I/O Pair in Redundant output mode  */
#define PWM7_IO_PIN_PAIR_TRUE_IND		0x0C00  /* PWM7 I/O Pair in True Independent output mode  */
#endif

#define PWM7_ORENH_OVRDAT				0x0200  /* OVRDAT<1> provides data for output on PWM7H pin  */
#define PWM7_ORENH_PWMGEN				0x0000  /* PWM7 generator provides data for PWM7H pin  */

#define PWM7_ORENL_OVRDAT				0x0100  /* OVRDAT<0> provides data for output on PWM7L pin  */
#define PWM7_ORENL_PWMGEN				0x0000  /* PWM generator provides data for PWM7L pin  */

#define PWM7_ORENH1_OVRDAT_LL			0x0000  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM7H */
#define PWM7_ORENH1_OVRDAT_LH			0x0040  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM7H */
#define PWM7_ORENL1_OVRDAT_HL			0x0080  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM7L */
#define PWM7_ORENL1_OVRDAT_HH			0x00C0  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM7L */

#define PWM7_FLT_EN_FLTDAT_LL			0x0000  /* If Fault active  then FLTDAT<0>  provides data for PWM7L */
#define PWM7_FLT_EN_FLTDAT_LH			0x0010  /* If Fault active  then FLTDAT<0>  provides data for PWM7L */
#define PWM7_FLT_EN_FLTDAT_HL			0x0020  /* If Fault active  then FLTDAT<1>  provides data for PWM7H */
#define PWM7_FLT_EN_FLTDAT_HH			0x0030  /* If Fault active  then FLTDAT<1>  provides data for PWM7H */

#if defined (__dsPIC33F__)
#define PWM7_IFLT_EN_FLT_EN_FLTDAT_LL	0x0000	/* If Fault active, then FLTDAT<0> provides data for PWM7L */
#define PWM7_IFLT_EN_FLT_EN_FLTDAT_LH	0x0010  /* If Fault active, then FLTDAT<0> provides data for PWM7L */
#define PWM7_IFLT_EN_CL_EN_FLTDAT_HL	0x0020  /* If Current Limit active, then FLTDAT<1> provides data for PWM7H */
#define PWM7_IFLT_EN_CL_EN_FLTDAT_HH	0x0030  /* If Current Limit active, then FLTDAT<1> provides data for PWM7H */
#endif

#define PWM7_CL_EN_CLDAT_LL				0x0000  /* If Current Limit active  then CLDAT<0>  provides data for PWM7L */
#define PWM7_CL_EN_CLDAT_LH				0x0004  /* If Current Limit active  then CLDAT<0>  provides data for PWM7L */
#define PWM7_CL_EN_CLDAT_HL				0x0008  /* If Current Limit active  then CLDAT<1>  provides data for PWM7H */
#define PWM7_CL_EN_CLDAT_HH				0x000C  /* If Current Limit active  then CLDAT<1>  provides data for PWM7H */

#if defined (__dsPIC33F__)
#define PWM7_PIN_SWAP_EN				0x0002  /* PWM7H output signal is connected to PWM7L pin and PWM7L signal is connected to PWM7H pins */
#define PWM7_PIN_SWAP_DIS				0x0000  /* PWM7H and PWM7L pins are mapped to their respective pins */
#endif

#define PWM7_OR_OVRDAT_SYNC_PWM			0x0001  /* Output overrides via the OVRDAT<1:0> bits are sync to PWM time base */
#define PWM7_OR_OVRDAT_NXT_CLK			0x0000  /* Output overrides via the OVRDAT<1:0> bits occur on next clk boundary */




/*----------------------------------------------------------------------------------------------------*/
/* IOCON8 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM8_H_PIN_EN					0x8000  /* PWM module controls PWM8H */
#define PWM8_H_PIN_GPIO					0x0000  /* GPIO module controls PWM8H   */

#define PWM8_L_PIN_EN					0x4000  /* PWM module controls PWM8L */
#define PWM8_L_PIN_GPIO					0x0000  /* GPIO module controls PWM8L   */

#define PWM8_H_PIN_ACTLOW				0x2000  /* PWM8H pin is low active */
#define PWM8_H_PIN_ACTHIGH				0x0000  /* PWM8H pin is high active */

#define PWM8_L_PIN_ACTLOW				0x1000  /* PWM8L pin is low active */
#define PWM8_L_PIN_ACTHIGH				0x0000  /* PWM8L pin is high active */

#define PWM8_IO_PIN_PAIR_COMP			0x0000  /* PWM8 I/O Pair in complementary output mode  */
#define PWM8_IO_PIN_PAIR_PUSHPULL		0x0800  /* PWM8 I/O Pair in Push-Pull output mode  */

#if defined (__dsPIC30F__)
#define PWM8_IO_PIN_PAIR_IND			0x0400  /* PWM8 I/O Pair in Independent output mode  */

#elif defined (__dsPIC33F__)
#define PWM8_IO_PIN_PAIR_RED			0x0400  /* PWM8 I/O Pair in Redundant output mode  */
#define PWM8_IO_PIN_PAIR_TRUE_IND		0x0C00  /* PWM8 I/O Pair in True Independent output mode  */
#endif

#define PWM8_ORENH_OVRDAT				0x0200  /* OVRDAT<1> provides data for output on PWM8H pin  */
#define PWM8_ORENH_PWMGEN				0x0000  /* PWM8 generator provides data for PWM8H pin  */

#define PWM8_ORENL_OVRDAT				0x0100  /* OVRDAT<0> provides data for output on PWM8L pin  */
#define PWM8_ORENL_PWMGEN				0x0000  /* PWM generator provides data for PWM8L pin  */

#define PWM8_ORENH1_OVRDAT_LL			0x0000  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM8H */
#define PWM8_ORENH1_OVRDAT_LH			0x0040  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM8H */
#define PWM8_ORENL1_OVRDAT_HL			0x0080  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM8L */
#define PWM8_ORENL1_OVRDAT_HH			0x00C0  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM8L */

#define PWM8_FLT_EN_FLTDAT_LL			0x0000  /* If Fault active  then FLTDAT<0>  provides data for PWM8L */
#define PWM8_FLT_EN_FLTDAT_LH			0x0010  /* If Fault active  then FLTDAT<0>  provides data for PWM8L */
#define PWM8_FLT_EN_FLTDAT_HL			0x0020  /* If Fault active  then FLTDAT<1>  provides data for PWM8H */
#define PWM8_FLT_EN_FLTDAT_HH			0x0030  /* If Fault active  then FLTDAT<1>  provides data for PWM8H */

#if defined (__dsPIC33F__)
#define PWM8_IFLT_EN_FLT_EN_FLTDAT_LL	0x0000	/* If Fault active, then FLTDAT<0> provides data for PWM8L */
#define PWM8_IFLT_EN_FLT_EN_FLTDAT_LH	0x0010  /* If Fault active, then FLTDAT<0> provides data for PWM8L */
#define PWM8_IFLT_EN_CL_EN_FLTDAT_HL	0x0020  /* If Current Limit active, then FLTDAT<1> provides data for PWM8H */
#define PWM8_IFLT_EN_CL_EN_FLTDAT_HH	0x0030  /* If Current Limit active, then FLTDAT<1> provides data for PWM8H */
#endif

#define PWM8_CL_EN_CLDAT_LL				0x0000  /* If Current Limit active  then CLDAT<0>  provides data for PWM8L */
#define PWM8_CL_EN_CLDAT_LH				0x0004  /* If Current Limit active  then CLDAT<0>  provides data for PWM8L */
#define PWM8_CL_EN_CLDAT_HL				0x0008  /* If Current Limit active  then CLDAT<1>  provides data for PWM8H */
#define PWM8_CL_EN_CLDAT_HH				0x000C  /* If Current Limit active  then CLDAT<1>  provides data for PWM8H */

#if defined (__dsPIC33F__)
#define PWM8_PIN_SWAP_EN				0x0002  /* PWM8H output signal is connected to PWM8L pin and PWM8L signal is connected to PWM8H pins */
#define PWM8_PIN_SWAP_DIS				0x0000  /* PWM8H and PWM8L pins are mapped to their respective pins */
#endif

#define PWM8_OR_OVRDAT_SYNC_PWM			0x0001  /* Output overrides via the OVRDAT<1:0> bits are sync to PWM time base */
#define PWM8_OR_OVRDAT_NXT_CLK			0x0000  /* Output overrides via the OVRDAT<1:0> bits occur on next clk boundary */







/*----------------------------------------------------------------------------------------------------*/
/* IOCON9 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM9_H_PIN_EN					0x8000  /* PWM module controls PWM9H */
#define PWM9_H_PIN_GPIO					0x0000  /* GPIO module controls PWM9H   */

#define PWM9_L_PIN_EN					0x4000  /* PWM module controls PWM9L */
#define PWM9_L_PIN_GPIO					0x0000  /* GPIO module controls PWM9L   */

#define PWM9_H_PIN_ACTLOW				0x2000  /* PWM9H pin is low active */
#define PWM9_H_PIN_ACTHIGH				0x0000  /* PWM9H pin is high active */

#define PWM9_L_PIN_ACTLOW				0x1000  /* PWM9L pin is low active */
#define PWM9_L_PIN_ACTHIGH				0x0000  /* PWM9L pin is high active */

#define PWM9_IO_PIN_PAIR_COMP			0x0000  /* PWM9 I/O Pair in complementary output mode  */
#define PWM9_IO_PIN_PAIR_PUSHPULL		0x0800  /* PWM9 I/O Pair in Push-Pull output mode  */

#if defined (__dsPIC30F__)
#define PWM9_IO_PIN_PAIR_IND			0x0400  /* PWM9 I/O Pair in Independent output mode  */

#elif defined (__dsPIC33F__)
#define PWM9_IO_PIN_PAIR_RED			0x0400  /* PWM9 I/O Pair in Redundant output mode  */
#define PWM9_IO_PIN_PAIR_TRUE_IND		0x0C00  /* PWM9 I/O Pair in True Independent output mode  */
#endif

#define PWM9_ORENH_OVRDAT				0x0200  /* OVRDAT<1> provides data for output on PWM9H pin  */
#define PWM9_ORENH_PWMGEN				0x0000  /* PWM9 generator provides data for PWM9H pin  */

#define PWM9_ORENL_OVRDAT				0x0100  /* OVRDAT<0> provides data for output on PWM9L pin  */
#define PWM9_ORENL_PWMGEN				0x0000  /* PWM generator provides data for PWM9L pin  */

#define PWM9_ORENH1_OVRDAT_LL			0x0000  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM9H */
#define PWM9_ORENH1_OVRDAT_LH			0x0040  /* If OVERNH=1 then OVRDAT<1>  provides data for PWM9H */
#define PWM9_ORENL1_OVRDAT_HL			0x0080  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM9L */
#define PWM9_ORENL1_OVRDAT_HH			0x00C0  /* If OVERNL=1 then OVRDAT<0>  provides data for PWM9L */

#define PWM9_FLT_EN_FLTDAT_LL			0x0000  /* If Fault active  then FLTDAT<0>  provides data for PWM9L */
#define PWM9_FLT_EN_FLTDAT_LH			0x0010  /* If Fault active  then FLTDAT<0>  provides data for PWM9L */
#define PWM9_FLT_EN_FLTDAT_HL			0x0020  /* If Fault active  then FLTDAT<1>  provides data for PWM9H */
#define PWM9_FLT_EN_FLTDAT_HH			0x0030  /* If Fault active  then FLTDAT<1>  provides data for PWM9H */

#if defined (__dsPIC33F__)
#define PWM9_IFLT_EN_FLT_EN_FLTDAT_LL	0x0000	/* If Fault active, then FLTDAT<0> provides data for PWM9L */
#define PWM9_IFLT_EN_FLT_EN_FLTDAT_LH	0x0010  /* If Fault active, then FLTDAT<0> provides data for PWM9L */
#define PWM9_IFLT_EN_CL_EN_FLTDAT_HL	0x0020  /* If Current Limit active, then FLTDAT<1> provides data for PWM9H */
#define PWM9_IFLT_EN_CL_EN_FLTDAT_HH	0x0030  /* If Current Limit active, then FLTDAT<1> provides data for PWM9H */
#endif

#define PWM9_CL_EN_CLDAT_LL				0x0000  /* If Current Limit active  then CLDAT<0>  provides data for PWM9L */
#define PWM9_CL_EN_CLDAT_LH				0x0004  /* If Current Limit active  then CLDAT<0>  provides data for PWM9L */
#define PWM9_CL_EN_CLDAT_HL				0x0008  /* If Current Limit active  then CLDAT<1>  provides data for PWM9H */
#define PWM9_CL_EN_CLDAT_HH				0x000C  /* If Current Limit active  then CLDAT<1>  provides data for PWM9H */

#if defined (__dsPIC33F__)
#define PWM9_PIN_SWAP_EN				0x0002  /* PWM9H output signal is connected to PWM9L pin and PWM9L signal is connected to PWM9H pins */
#define PWM9_PIN_SWAP_DIS				0x0000  /* PWM9H and PWM9L pins are mapped to their respective pins */
#endif

#define PWM9_OR_OVRDAT_SYNC_PWM			0x0001  /* Output overrides via the OVRDAT<1:0> bits are sync to PWM time base */
#define PWM9_OR_OVRDAT_NXT_CLK			0x0000  /* Output overrides via the OVRDAT<1:0> bits occur on next clk boundary */







/*----------------------------------------------------------------------------------------------------------------*/
/* TRGCON1 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC30F__)
#define PWM1_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event */
#define PWM1_TRIG_EVENT2				0x2000  /* Trigger output on every 2nd trigger event */
#define PWM1_TRIG_EVENT3				0x4000  /* Trigger output on every 3rd trigger event */
#define PWM1_TRIG_EVENT4				0x6000  /* Trigger output on every 4th trigger event */
#define PWM1_TRIG_EVENT5				0x8000  /* Trigger output on every 5th trigger event */
#define PWM1_TRIG_EVENT6				0xA000  /* Trigger output on every 6th trigger event */
#define PWM1_TRIG_EVENT7				0xC000  /* Trigger output on every 7th trigger event */
#define PWM1_TRIG_EVENT8				0xE000  /* Trigger output on every 8th trigger event */

#elif defined (__dsPIC33F__)
#define PWM1_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event     */
#define PWM1_TRIG_EVENT2				0x1000  /* Trigger output on every 2nd trigger event */
#define PWM1_TRIG_EVENT3				0x2000  /* Trigger output on every 3rd trigger event */
#define PWM1_TRIG_EVENT4				0x3000  /* Trigger output on every 4th trigger event */
#define PWM1_TRIG_EVENT5				0x4000  /* Trigger output on every 5th trigger event */
#define PWM1_TRIG_EVENT6				0x5000  /* Trigger output on every 6th trigger event */
#define PWM1_TRIG_EVENT7				0x6000  /* Trigger output on every 7th trigger event */
#define PWM1_TRIG_EVENT8				0x7000  /* Trigger output on every 8th trigger event */
#define PWM1_TRIG_EVENT9				0x8000  /* Trigger output on every 9th trigger event */
#define PWM1_TRIG_EVENT10				0x9000  /* Trigger output on every 10th trigger event */
#define PWM1_TRIG_EVENT11				0xA000  /* Trigger output on every 11th trigger event */
#define PWM1_TRIG_EVENT12				0xB000  /* Trigger output on every 12th trigger event */
#define PWM1_TRIG_EVENT13				0xC000  /* Trigger output on every 13th trigger event */
#define PWM1_TRIG_EVENT14				0xD000  /* Trigger output on every 14th trigger event */
#define PWM1_TRIG_EVENT15				0xE000  /* Trigger output on every 15th trigger event */
#define PWM1_TRIG_EVENT16				0xF000  /* Trigger output on every 16th trigger event */
#endif

#if defined (__dsPIC33F__)
#define PWM1_PRI_SEC_COMB_TRIG			0x0080  /* Secondary Trigger event is combined with the primary trigger event to create PWM trigger.*/
#define PWM1_INDIVIDUAL_TRIG			0x0000  /* Secondary Trigger event is not combined with the primary trigger event to create PWM trigger. Two
												   separate PWM triggers are generated*/
#endif

#define PWM1_TRIG_PS0					0x0000  /* Wait 0 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS1					0x0001  /* Wait 1 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS2					0x0002  /* Wait 2 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS3					0x0003  /* Wait 3 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS4					0x0004  /* Wait 4 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS5					0x0005  /* Wait 5 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS6					0x0006  /* Wait 6 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS7					0x0007  /* Wait 7 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS8					0x0008  /* Wait 8 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS9					0x0009  /* Wait 9 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS10					0x000A  /* Wait 10 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS11					0x000B  /* Wait 11 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS12					0x000C  /* Wait 12 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS13					0x000D  /* Wait 13 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS14					0x000E  /* Wait 14 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS15					0x000F  /* Wait 15 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS16					0x0010  /* Wait 16 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS17					0x0011  /* Wait 17 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS18					0x0012  /* Wait 18 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS19					0x0013  /* Wait 19 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS20					0x0014  /* Wait 20 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS21					0x0015  /* Wait 21 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS22					0x0016  /* Wait 22 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS23					0x0017  /* Wait 23 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS24					0x0018  /* Wait 24 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS25					0x0019  /* Wait 25 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS26					0x001A  /* Wait 26 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS27					0x001B  /* Wait 27 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS28					0x001C  /* Wait 28 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS29					0x001D  /* Wait 29 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS30					0x001E  /* Wait 30 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS31					0x001F  /* Wait 31 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS32					0x0020  /* Wait 32 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS33					0x0021  /* Wait 33 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS34					0x0022  /* Wait 34 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS35					0x0023  /* Wait 35 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS36					0x0024  /* Wait 36 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS37					0x0025  /* Wait 37 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS38					0x0026  /* Wait 38 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS39					0x0027  /* Wait 39 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS40					0x0028  /* Wait 40 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS41					0x0029  /* Wait 41 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS42					0x002A  /* Wait 42 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS43					0x002B  /* Wait 43 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS44					0x002C  /* Wait 44 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS45					0x002D  /* Wait 45 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS46					0x002E  /* Wait 46 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS47					0x002F  /* Wait 47 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS48					0x0030  /* Wait 48 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS49					0x0031  /* Wait 49 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS50					0x0032  /* Wait 50 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS51					0x0033  /* Wait 51 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS52					0x0034  /* Wait 52 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS53					0x0035  /* Wait 53 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS54					0x0036  /* Wait 54 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS55					0x0037  /* Wait 55 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS56					0x0038  /* Wait 56 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS57					0x0039  /* Wait 57 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS58					0x003A  /* Wait 58 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS59					0x003B  /* Wait 59 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS60					0x003C  /* Wait 60 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS61					0x003D  /* Wait 61 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS62					0x003E  /* Wait 62 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM1_TRIG_PS63					0x003F  /* Wait 63 PWM cycles before generating the first trigger event after the module is enabled */

/*----------------------------------------------------------------------------------------------------*/
/* TRGCON2 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC30F__)
#define PWM2_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event */
#define PWM2_TRIG_EVENT2				0x2000  /* Trigger output on every 2nd trigger event */
#define PWM2_TRIG_EVENT3				0x4000  /* Trigger output on every 3rd trigger event */
#define PWM2_TRIG_EVENT4				0x6000  /* Trigger output on every 4th trigger event */
#define PWM2_TRIG_EVENT5				0x8000  /* Trigger output on every 5th trigger event */
#define PWM2_TRIG_EVENT6				0xA000  /* Trigger output on every 6th trigger event */
#define PWM2_TRIG_EVENT7				0xC000  /* Trigger output on every 7th trigger event */
#define PWM2_TRIG_EVENT8				0xE000  /* Trigger output on every 8th trigger event */

#elif defined (__dsPIC33F__)
#define PWM2_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event     */
#define PWM2_TRIG_EVENT2				0x1000  /* Trigger output on every 2nd trigger event */
#define PWM2_TRIG_EVENT3				0x2000  /* Trigger output on every 3rd trigger event */
#define PWM2_TRIG_EVENT4				0x3000  /* Trigger output on every 4th trigger event */
#define PWM2_TRIG_EVENT5				0x4000  /* Trigger output on every 5th trigger event */
#define PWM2_TRIG_EVENT6				0x5000  /* Trigger output on every 6th trigger event */
#define PWM2_TRIG_EVENT7				0x6000  /* Trigger output on every 7th trigger event */
#define PWM2_TRIG_EVENT8				0x7000  /* Trigger output on every 8th trigger event */
#define PWM2_TRIG_EVENT9				0x8000  /* Trigger output on every 9th trigger event */
#define PWM2_TRIG_EVENT10				0x9000  /* Trigger output on every 10th trigger event */
#define PWM2_TRIG_EVENT11				0xA000  /* Trigger output on every 11th trigger event */
#define PWM2_TRIG_EVENT12				0xB000  /* Trigger output on every 12th trigger event */
#define PWM2_TRIG_EVENT13				0xC000  /* Trigger output on every 13th trigger event */
#define PWM2_TRIG_EVENT14				0xD000  /* Trigger output on every 14th trigger event */
#define PWM2_TRIG_EVENT15				0xE000  /* Trigger output on every 15th trigger event */
#define PWM2_TRIG_EVENT16				0xF000  /* Trigger output on every 16th trigger event */
#endif

#if defined (__dsPIC33F__)
#define PWM2_PRI_SEC_COMB_TRIG			0x0080  /* Secondary Trigger event is combined with the primary trigger event to create PWM trigger.*/
#define PWM2_INDIVIDUAL_TRIG			0x0000  /* Secondary Trigger event is not combined with the primary trigger event to create PWM trigger. Two
												   separate PWM triggers are generated.*/
#endif

#define PWM2_TRIG_PS0					0x0000  /* Wait 0 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS1					0x0001  /* Wait 1 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS2					0x0002  /* Wait 2 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS3					0x0003  /* Wait 3 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS4					0x0004  /* Wait 4 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS5					0x0005  /* Wait 5 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS6					0x0006  /* Wait 6 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS7					0x0007  /* Wait 7 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS8					0x0008  /* Wait 8 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS9					0x0009  /* Wait 9 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS10					0x000A  /* Wait 10 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS11					0x000B  /* Wait 11 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS12					0x000C  /* Wait 12 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS13					0x000D  /* Wait 13 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS14					0x000E  /* Wait 14 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS15					0x000F  /* Wait 15 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS16					0x0010  /* Wait 16 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS17					0x0011  /* Wait 17 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS18					0x0012  /* Wait 18 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS19					0x0013  /* Wait 19 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS20					0x0014  /* Wait 20 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS21					0x0015  /* Wait 21 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS22					0x0016  /* Wait 22 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS23					0x0017  /* Wait 23 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS24					0x0018  /* Wait 24 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS25					0x0019  /* Wait 25 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS26					0x001A  /* Wait 26 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS27					0x001B  /* Wait 27 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS28					0x001C  /* Wait 28 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS29					0x001D  /* Wait 29 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS30					0x001E  /* Wait 30 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS31					0x001F  /* Wait 31 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS32					0x0020  /* Wait 32 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS33					0x0021  /* Wait 33 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS34					0x0022  /* Wait 34 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS35					0x0023  /* Wait 35 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS36					0x0024  /* Wait 36 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS37					0x0025  /* Wait 37 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS38					0x0026  /* Wait 38 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS39					0x0027  /* Wait 39 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS40					0x0028  /* Wait 40 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS41					0x0029  /* Wait 41 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS42					0x002A  /* Wait 42 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS43					0x002B  /* Wait 43 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS44					0x002C  /* Wait 44 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS45					0x002D  /* Wait 45 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS46					0x002E  /* Wait 46 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS47					0x002F  /* Wait 47 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS48					0x0030  /* Wait 48 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS49					0x0031  /* Wait 49 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS50					0x0032  /* Wait 50 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS51					0x0033  /* Wait 51 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS52					0x0034  /* Wait 52 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS53					0x0035  /* Wait 53 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS54					0x0036  /* Wait 54 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS55					0x0037  /* Wait 55 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS56					0x0038  /* Wait 56 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS57					0x0039  /* Wait 57 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS58					0x003A  /* Wait 58 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS59					0x003B  /* Wait 59 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS60					0x003C  /* Wait 60 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS61					0x003D  /* Wait 61 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS62					0x003E  /* Wait 62 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM2_TRIG_PS63					0x003F  /* Wait 63 PWM cycles before generating the first trigger event after the module is enabled */



/*----------------------------------------------------------------------------------------------------*/
/* TRGCON3 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC30F__)
#define PWM3_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event */
#define PWM3_TRIG_EVENT2				0x2000  /* Trigger output on every 2nd trigger event */
#define PWM3_TRIG_EVENT3				0x4000  /* Trigger output on every 3rd trigger event */
#define PWM3_TRIG_EVENT4				0x6000  /* Trigger output on every 4th trigger event */
#define PWM3_TRIG_EVENT5				0x8000  /* Trigger output on every 5th trigger event */
#define PWM3_TRIG_EVENT6				0xA000  /* Trigger output on every 6th trigger event */
#define PWM3_TRIG_EVENT7				0xC000  /* Trigger output on every 7th trigger event */
#define PWM3_TRIG_EVENT8				0xE000  /* Trigger output on every 8th trigger event */

#elif defined (__dsPIC33F__)
#define PWM3_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event     */
#define PWM3_TRIG_EVENT2				0x1000  /* Trigger output on every 2nd trigger event */
#define PWM3_TRIG_EVENT3				0x2000  /* Trigger output on every 3rd trigger event */
#define PWM3_TRIG_EVENT4				0x3000  /* Trigger output on every 4th trigger event */
#define PWM3_TRIG_EVENT5				0x4000  /* Trigger output on every 5th trigger event */
#define PWM3_TRIG_EVENT6				0x5000  /* Trigger output on every 6th trigger event */
#define PWM3_TRIG_EVENT7				0x6000  /* Trigger output on every 7th trigger event */
#define PWM3_TRIG_EVENT8				0x7000  /* Trigger output on every 8th trigger event */
#define PWM3_TRIG_EVENT9				0x8000  /* Trigger output on every 9th trigger event */
#define PWM3_TRIG_EVENT10				0x9000  /* Trigger output on every 10th trigger event */
#define PWM3_TRIG_EVENT11				0xA000  /* Trigger output on every 11th trigger event */
#define PWM3_TRIG_EVENT12				0xB000  /* Trigger output on every 12th trigger event */
#define PWM3_TRIG_EVENT13				0xC000  /* Trigger output on every 13th trigger event */
#define PWM3_TRIG_EVENT14				0xD000  /* Trigger output on every 14th trigger event */
#define PWM3_TRIG_EVENT15				0xE000  /* Trigger output on every 15th trigger event */
#define PWM3_TRIG_EVENT16				0xF000  /* Trigger output on every 16th trigger event */
#endif

#if defined (__dsPIC33F__)
#define PWM3_PRI_SEC_COMB_TRIG			0x0080  /* Secondary Trigger event is combined with the primary trigger event to create PWM trigger.*/
#define PWM3_INDIVIDUAL_TRIG			0x0000  /* Secondary Trigger event is not combined with the primary trigger event to create PWM trigger. Two
												   separate PWM triggers are generated.*/
#endif

#define PWM3_TRIG_PS0					0x0000  /* Wait 0 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS1					0x0001  /* Wait 1 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS2					0x0002  /* Wait 2 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS3					0x0003  /* Wait 3 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS4					0x0004  /* Wait 4 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS5					0x0005  /* Wait 5 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS6					0x0006  /* Wait 6 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS7					0x0007  /* Wait 7 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS8					0x0008  /* Wait 8 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS9					0x0009  /* Wait 9 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS10					0x000A  /* Wait 10 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS11					0x000B  /* Wait 11 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS12					0x000C  /* Wait 12 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS13					0x000D  /* Wait 13 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS14					0x000E  /* Wait 14 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS15					0x000F  /* Wait 15 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS16					0x0010  /* Wait 16 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS17					0x0011  /* Wait 17 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS18					0x0012  /* Wait 18 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS19					0x0013  /* Wait 19 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS20					0x0014  /* Wait 20 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS21					0x0015  /* Wait 21 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS22					0x0016  /* Wait 22 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS23					0x0017  /* Wait 23 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS24					0x0018  /* Wait 24 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS25					0x0019  /* Wait 25 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS26					0x001A  /* Wait 26 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS27					0x001B  /* Wait 27 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS28					0x001C  /* Wait 28 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS29					0x001D  /* Wait 29 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS30					0x001E  /* Wait 30 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS31					0x001F  /* Wait 31 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS32					0x0020  /* Wait 32 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS33					0x0021  /* Wait 33 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS34					0x0022  /* Wait 34 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS35					0x0023  /* Wait 35 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS36					0x0024  /* Wait 36 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS37					0x0025  /* Wait 37 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS38					0x0026  /* Wait 38 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS39					0x0027  /* Wait 39 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS40					0x0028  /* Wait 40 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS41					0x0029  /* Wait 41 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS42					0x002A  /* Wait 42 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS43					0x002B  /* Wait 43 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS44					0x002C  /* Wait 44 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS45					0x002D  /* Wait 45 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS46					0x002E  /* Wait 46 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS47					0x002F  /* Wait 47 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS48					0x0030  /* Wait 48 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS49					0x0031  /* Wait 49 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS50					0x0032  /* Wait 50 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS51					0x0033  /* Wait 51 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS52					0x0034  /* Wait 52 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS53					0x0035  /* Wait 53 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS54					0x0036  /* Wait 54 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS55					0x0037  /* Wait 55 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS56					0x0038  /* Wait 56 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS57					0x0039  /* Wait 57 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS58					0x003A  /* Wait 58 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS59					0x003B  /* Wait 59 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS60					0x003C  /* Wait 60 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS61					0x003D  /* Wait 61 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS62					0x003E  /* Wait 62 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM3_TRIG_PS63					0x003F  /* Wait 63 PWM cycles before generating the first trigger event after the module is enabled */

/*----------------------------------------------------------------------------------------------------*/
/* TRGCON4 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC30F__)
#define PWM4_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event */
#define PWM4_TRIG_EVENT2				0x2000  /* Trigger output on every 2nd trigger event */
#define PWM4_TRIG_EVENT3				0x4000  /* Trigger output on every 3rd trigger event */
#define PWM4_TRIG_EVENT4				0x6000  /* Trigger output on every 4th trigger event */
#define PWM4_TRIG_EVENT5				0x8000  /* Trigger output on every 5th trigger event */
#define PWM4_TRIG_EVENT6				0xA000  /* Trigger output on every 6th trigger event */
#define PWM4_TRIG_EVENT7				0xC000  /* Trigger output on every 7th trigger event */
#define PWM4_TRIG_EVENT8				0xE000  /* Trigger output on every 8th trigger event */

#elif defined (__dsPIC33F__)
#define PWM4_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event     */
#define PWM4_TRIG_EVENT2				0x1000  /* Trigger output on every 2nd trigger event */
#define PWM4_TRIG_EVENT3				0x2000  /* Trigger output on every 3rd trigger event */
#define PWM4_TRIG_EVENT4				0x3000  /* Trigger output on every 4th trigger event */
#define PWM4_TRIG_EVENT5				0x4000  /* Trigger output on every 5th trigger event */
#define PWM4_TRIG_EVENT6				0x5000  /* Trigger output on every 6th trigger event */
#define PWM4_TRIG_EVENT7				0x6000  /* Trigger output on every 7th trigger event */
#define PWM4_TRIG_EVENT8				0x7000  /* Trigger output on every 8th trigger event */
#define PWM4_TRIG_EVENT9				0x8000  /* Trigger output on every 9th trigger event */
#define PWM4_TRIG_EVENT10				0x9000  /* Trigger output on every 10th trigger event */
#define PWM4_TRIG_EVENT11				0xA000  /* Trigger output on every 11th trigger event */
#define PWM4_TRIG_EVENT12				0xB000  /* Trigger output on every 12th trigger event */
#define PWM4_TRIG_EVENT13				0xC000  /* Trigger output on every 13th trigger event */
#define PWM4_TRIG_EVENT14				0xD000  /* Trigger output on every 14th trigger event */
#define PWM4_TRIG_EVENT15				0xE000  /* Trigger output on every 15th trigger event */
#define PWM4_TRIG_EVENT16				0xF000  /* Trigger output on every 16th trigger event */
#endif

#if defined (__dsPIC33F__)
#define PWM4_PRI_SEC_COMB_TRIG			0x0080  /* Secondary Trigger event is combined with the primary trigger event to create PWM trigger.*/
#define PWM4_INDIVIDUAL_TRIG			0x0000  /* Secondary Trigger event is not combined with the primary trigger event to create PWM trigger. Two
												   separate PWM triggers are generated.*/
#endif

#define PWM4_TRIG_PS0					0x0000  /* Wait 0 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS1					0x0001  /* Wait 1 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS2					0x0002  /* Wait 2 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS3					0x0003  /* Wait 3 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS4					0x0004  /* Wait 4 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS5					0x0005  /* Wait 5 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS6					0x0006  /* Wait 6 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS7					0x0007  /* Wait 7 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS8					0x0008  /* Wait 8 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS9					0x0009  /* Wait 9 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS10					0x000A  /* Wait 10 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS11					0x000B  /* Wait 11 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS12					0x000C  /* Wait 12 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS13					0x000D  /* Wait 13 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS14					0x000E  /* Wait 14 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS15					0x000F  /* Wait 15 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS16					0x0010  /* Wait 16 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS17					0x0011  /* Wait 17 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS18					0x0012  /* Wait 18 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS19					0x0013  /* Wait 19 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS20					0x0014  /* Wait 20 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS21					0x0015  /* Wait 21 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS22					0x0016  /* Wait 22 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS23					0x0017  /* Wait 23 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS24					0x0018  /* Wait 24 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS25					0x0019  /* Wait 25 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS26					0x001A  /* Wait 26 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS27					0x001B  /* Wait 27 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS28					0x001C  /* Wait 28 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS29					0x001D  /* Wait 29 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS30					0x001E  /* Wait 30 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS31					0x001F  /* Wait 31 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS32					0x0020  /* Wait 32 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS33					0x0021  /* Wait 33 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS34					0x0022  /* Wait 34 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS35					0x0023  /* Wait 35 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS36					0x0024  /* Wait 36 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS37					0x0025  /* Wait 37 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS38					0x0026  /* Wait 38 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS39					0x0027  /* Wait 39 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS40					0x0028  /* Wait 40 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS41					0x0029  /* Wait 41 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS42					0x002A  /* Wait 42 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS43					0x002B  /* Wait 43 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS44					0x002C  /* Wait 44 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS45					0x002D  /* Wait 45 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS46					0x002E  /* Wait 46 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS47					0x002F  /* Wait 47 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS48					0x0030  /* Wait 48 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS49					0x0031  /* Wait 49 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS50					0x0032  /* Wait 50 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS51					0x0033  /* Wait 51 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS52					0x0034  /* Wait 52 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS53					0x0035  /* Wait 53 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS54					0x0036  /* Wait 54 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS55					0x0037  /* Wait 55 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS56					0x0038  /* Wait 56 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS57					0x0039  /* Wait 57 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS58					0x003A  /* Wait 58 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS59					0x003B  /* Wait 59 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS60					0x003C  /* Wait 60 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS61					0x003D  /* Wait 61 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS62					0x003E  /* Wait 62 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM4_TRIG_PS63					0x003F  /* Wait 63 PWM cycles before generating the first trigger event after the module is enabled */




/*----------------------------------------------------------------------------------------------------*/
/* TRGCON5 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC30F__)
#define PWM5_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event */
#define PWM5_TRIG_EVENT2				0x2000  /* Trigger output on every 2nd trigger event */
#define PWM5_TRIG_EVENT3				0x4000  /* Trigger output on every 3rd trigger event */
#define PWM5_TRIG_EVENT4				0x6000  /* Trigger output on every 4th trigger event */
#define PWM5_TRIG_EVENT5				0x8000  /* Trigger output on every 5th trigger event */
#define PWM5_TRIG_EVENT6				0xA000  /* Trigger output on every 6th trigger event */
#define PWM5_TRIG_EVENT7				0xC000  /* Trigger output on every 7th trigger event */
#define PWM5_TRIG_EVENT8				0xE000  /* Trigger output on every 8th trigger event */

#elif defined (__dsPIC33F__)
#define PWM5_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event     */
#define PWM5_TRIG_EVENT2				0x1000  /* Trigger output on every 2nd trigger event */
#define PWM5_TRIG_EVENT3				0x2000  /* Trigger output on every 3rd trigger event */
#define PWM5_TRIG_EVENT4				0x3000  /* Trigger output on every 4th trigger event */
#define PWM5_TRIG_EVENT5				0x4000  /* Trigger output on every 5th trigger event */
#define PWM5_TRIG_EVENT6				0x5000  /* Trigger output on every 6th trigger event */
#define PWM5_TRIG_EVENT7				0x6000  /* Trigger output on every 7th trigger event */
#define PWM5_TRIG_EVENT8				0x7000  /* Trigger output on every 8th trigger event */
#define PWM5_TRIG_EVENT9				0x8000  /* Trigger output on every 9th trigger event */
#define PWM5_TRIG_EVENT10				0x9000  /* Trigger output on every 10th trigger event */
#define PWM5_TRIG_EVENT11				0xA000  /* Trigger output on every 11th trigger event */
#define PWM5_TRIG_EVENT12				0xB000  /* Trigger output on every 12th trigger event */
#define PWM5_TRIG_EVENT13				0xC000  /* Trigger output on every 13th trigger event */
#define PWM5_TRIG_EVENT14				0xD000  /* Trigger output on every 14th trigger event */
#define PWM5_TRIG_EVENT15				0xE000  /* Trigger output on every 15th trigger event */
#define PWM5_TRIG_EVENT16				0xF000  /* Trigger output on every 16th trigger event */
#endif

#if defined (__dsPIC33F__)
#define PWM5_PRI_SEC_COMB_TRIG			0x0080  /* Secondary Trigger event is combined with the primary trigger event to create PWM trigger.*/
#define PWM5_INDIVIDUAL_TRIG			0x0000  /* Secondary Trigger event is not combined with the primary trigger event to create PWM trigger. Two
												   separate PWM triggers are generated.*/
#endif

#define PWM5_TRIG_PS0					0x0000  /* Wait 0 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS1					0x0001  /* Wait 1 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS2					0x0002  /* Wait 2 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS3					0x0003  /* Wait 3 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS4					0x0004  /* Wait 4 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS5					0x0005  /* Wait 5 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS6					0x0006  /* Wait 6 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS7					0x0007  /* Wait 7 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS8					0x0008  /* Wait 8 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS9					0x0009  /* Wait 9 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS10					0x000A  /* Wait 10 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS11					0x000B  /* Wait 11 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS12					0x000C  /* Wait 12 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS13					0x000D  /* Wait 13 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS14					0x000E  /* Wait 14 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS15					0x000F  /* Wait 15 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS16					0x0010  /* Wait 16 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS17					0x0011  /* Wait 17 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS18					0x0012  /* Wait 18 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS19					0x0013  /* Wait 19 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS20					0x0014  /* Wait 20 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS21					0x0015  /* Wait 21 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS22					0x0016  /* Wait 22 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS23					0x0017  /* Wait 23 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS24					0x0018  /* Wait 24 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS25					0x0019  /* Wait 25 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS26					0x001A  /* Wait 26 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS27					0x001B  /* Wait 27 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS28					0x001C  /* Wait 28 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS29					0x001D  /* Wait 29 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS30					0x001E  /* Wait 30 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS31					0x001F  /* Wait 31 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS32					0x0020  /* Wait 32 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS33					0x0021  /* Wait 33 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS34					0x0022  /* Wait 34 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS35					0x0023  /* Wait 35 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS36					0x0024  /* Wait 36 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS37					0x0025  /* Wait 37 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS38					0x0026  /* Wait 38 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS39					0x0027  /* Wait 39 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS40					0x0028  /* Wait 40 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS41					0x0029  /* Wait 41 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS42					0x002A  /* Wait 42 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS43					0x002B  /* Wait 43 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS44					0x002C  /* Wait 44 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS45					0x002D  /* Wait 45 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS46					0x002E  /* Wait 46 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS47					0x002F  /* Wait 47 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS48					0x0030  /* Wait 48 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS49					0x0031  /* Wait 49 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS50					0x0032  /* Wait 50 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS51					0x0033  /* Wait 51 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS52					0x0034  /* Wait 52 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS53					0x0035  /* Wait 53 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS54					0x0036  /* Wait 54 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS55					0x0037  /* Wait 55 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS56					0x0038  /* Wait 56 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS57					0x0039  /* Wait 57 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS58					0x003A  /* Wait 58 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS59					0x003B  /* Wait 59 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS60					0x003C  /* Wait 60 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS61					0x003D  /* Wait 61 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS62					0x003E  /* Wait 62 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM5_TRIG_PS63					0x003F  /* Wait 63 PWM cycles before generating the first trigger event after the module is enabled */




/*----------------------------------------------------------------------------------------------------*/
/* TRGCON6 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC30F__)
#define PWM6_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event */
#define PWM6_TRIG_EVENT2				0x2000  /* Trigger output on every 2nd trigger event */
#define PWM6_TRIG_EVENT3				0x4000  /* Trigger output on every 3rd trigger event */
#define PWM6_TRIG_EVENT4				0x6000  /* Trigger output on every 4th trigger event */
#define PWM6_TRIG_EVENT5				0x8000  /* Trigger output on every 5th trigger event */
#define PWM6_TRIG_EVENT6				0xA000  /* Trigger output on every 6th trigger event */
#define PWM6_TRIG_EVENT7				0xC000  /* Trigger output on every 7th trigger event */
#define PWM6_TRIG_EVENT8				0xE000  /* Trigger output on every 8th trigger event */

#elif defined (__dsPIC33F__)
#define PWM6_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event     */
#define PWM6_TRIG_EVENT2				0x1000  /* Trigger output on every 2nd trigger event */
#define PWM6_TRIG_EVENT3				0x2000  /* Trigger output on every 3rd trigger event */
#define PWM6_TRIG_EVENT4				0x3000  /* Trigger output on every 4th trigger event */
#define PWM6_TRIG_EVENT5				0x4000  /* Trigger output on every 5th trigger event */
#define PWM6_TRIG_EVENT6				0x5000  /* Trigger output on every 6th trigger event */
#define PWM6_TRIG_EVENT7				0x6000  /* Trigger output on every 7th trigger event */
#define PWM6_TRIG_EVENT8				0x7000  /* Trigger output on every 8th trigger event */
#define PWM6_TRIG_EVENT9				0x8000  /* Trigger output on every 9th trigger event */
#define PWM6_TRIG_EVENT10				0x9000  /* Trigger output on every 10th trigger event */
#define PWM6_TRIG_EVENT11				0xA000  /* Trigger output on every 11th trigger event */
#define PWM6_TRIG_EVENT12				0xB000  /* Trigger output on every 12th trigger event */
#define PWM6_TRIG_EVENT13				0xC000  /* Trigger output on every 13th trigger event */
#define PWM6_TRIG_EVENT14				0xD000  /* Trigger output on every 14th trigger event */
#define PWM6_TRIG_EVENT15				0xE000  /* Trigger output on every 15th trigger event */
#define PWM6_TRIG_EVENT16				0xF000  /* Trigger output on every 16th trigger event */
#endif

#if defined (__dsPIC33F__)
#define PWM6_PRI_SEC_COMB_TRIG			0x0080  /* Secondary Trigger event is combined with the primary trigger event to create PWM trigger.*/
#define PWM6_INDIVIDUAL_TRIG			0x0000  /* Secondary Trigger event is not combined with the primary trigger event to create PWM trigger. Two
												   separate PWM triggers are generated.*/
#endif

#define PWM6_TRIG_PS0					0x0000  /* Wait 0 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS1					0x0001  /* Wait 1 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS2					0x0002  /* Wait 2 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS3					0x0003  /* Wait 3 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS4					0x0004  /* Wait 4 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS5					0x0005  /* Wait 5 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS6					0x0006  /* Wait 6 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS7					0x0007  /* Wait 7 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS8					0x0008  /* Wait 8 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS9					0x0009  /* Wait 9 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS10					0x000A  /* Wait 10 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS11					0x000B  /* Wait 11 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS12					0x000C  /* Wait 12 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS13					0x000D  /* Wait 13 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS14					0x000E  /* Wait 14 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS15					0x000F  /* Wait 15 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS16					0x0010  /* Wait 16 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS17					0x0011  /* Wait 17 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS18					0x0012  /* Wait 18 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS19					0x0013  /* Wait 19 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS20					0x0014  /* Wait 20 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS21					0x0015  /* Wait 21 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS22					0x0016  /* Wait 22 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS23					0x0017  /* Wait 23 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS24					0x0018  /* Wait 24 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS25					0x0019  /* Wait 25 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS26					0x001A  /* Wait 26 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS27					0x001B  /* Wait 27 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS28					0x001C  /* Wait 28 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS29					0x001D  /* Wait 29 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS30					0x001E  /* Wait 30 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS31					0x001F  /* Wait 31 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS32					0x0020  /* Wait 32 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS33					0x0021  /* Wait 33 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS34					0x0022  /* Wait 34 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS35					0x0023  /* Wait 35 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS36					0x0024  /* Wait 36 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS37					0x0025  /* Wait 37 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS38					0x0026  /* Wait 38 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS39					0x0027  /* Wait 39 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS40					0x0028  /* Wait 40 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS41					0x0029  /* Wait 41 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS42					0x002A  /* Wait 42 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS43					0x002B  /* Wait 43 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS44					0x002C  /* Wait 44 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS45					0x002D  /* Wait 45 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS46					0x002E  /* Wait 46 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS47					0x002F  /* Wait 47 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS48					0x0030  /* Wait 48 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS49					0x0031  /* Wait 49 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS50					0x0032  /* Wait 50 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS51					0x0033  /* Wait 51 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS52					0x0034  /* Wait 52 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS53					0x0035  /* Wait 53 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS54					0x0036  /* Wait 54 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS55					0x0037  /* Wait 55 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS56					0x0038  /* Wait 56 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS57					0x0039  /* Wait 57 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS58					0x003A  /* Wait 58 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS59					0x003B  /* Wait 59 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS60					0x003C  /* Wait 60 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS61					0x003D  /* Wait 61 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS62					0x003E  /* Wait 62 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM6_TRIG_PS63					0x003F  /* Wait 63 PWM cycles before generating the first trigger event after the module is enabled */





/*----------------------------------------------------------------------------------------------------*/
/* TRGCON7Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC30F__)
#define PWM7_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event */
#define PWM7_TRIG_EVENT2				0x2000  /* Trigger output on every 2nd trigger event */
#define PWM7_TRIG_EVENT3				0x4000  /* Trigger output on every 3rd trigger event */
#define PWM7_TRIG_EVENT4				0x6000  /* Trigger output on every 4th trigger event */
#define PWM7_TRIG_EVENT5				0x8000  /* Trigger output on every 5th trigger event */
#define PWM7_TRIG_EVENT6				0xA000  /* Trigger output on every 6th trigger event */
#define PWM7_TRIG_EVENT7				0xC000  /* Trigger output on every 7th trigger event */
#define PWM7_TRIG_EVENT8				0xE000  /* Trigger output on every 8th trigger event */

#elif defined (__dsPIC33F__)
#define PWM7_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event     */
#define PWM7_TRIG_EVENT2				0x1000  /* Trigger output on every 2nd trigger event */
#define PWM7_TRIG_EVENT3				0x2000  /* Trigger output on every 3rd trigger event */
#define PWM7_TRIG_EVENT4				0x3000  /* Trigger output on every 4th trigger event */
#define PWM7_TRIG_EVENT5				0x4000  /* Trigger output on every 5th trigger event */
#define PWM7_TRIG_EVENT6				0x5000  /* Trigger output on every 6th trigger event */
#define PWM7_TRIG_EVENT7				0x6000  /* Trigger output on every 7th trigger event */
#define PWM7_TRIG_EVENT8				0x7000  /* Trigger output on every 8th trigger event */
#define PWM7_TRIG_EVENT9				0x8000  /* Trigger output on every 9th trigger event */
#define PWM7_TRIG_EVENT10				0x9000  /* Trigger output on every 10th trigger event */
#define PWM7_TRIG_EVENT11				0xA000  /* Trigger output on every 11th trigger event */
#define PWM7_TRIG_EVENT12				0xB000  /* Trigger output on every 12th trigger event */
#define PWM7_TRIG_EVENT13				0xC000  /* Trigger output on every 13th trigger event */
#define PWM7_TRIG_EVENT14				0xD000  /* Trigger output on every 14th trigger event */
#define PWM7_TRIG_EVENT15				0xE000  /* Trigger output on every 15th trigger event */
#define PWM7_TRIG_EVENT16				0xF000  /* Trigger output on every 16th trigger event */
#endif

#if defined (__dsPIC33F__)
#define PWM7_PRI_SEC_COMB_TRIG			0x0080  /* Secondary Trigger event is combined with the primary trigger event to create PWM trigger.*/
#define PWM7_INDIVIDUAL_TRIG			0x0000  /* Secondary Trigger event is not combined with the primary trigger event to create PWM trigger. Two
												   separate PWM triggers are generated.*/
#endif

#define PWM7_TRIG_PS0					0x0000  /* Wait 0 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS1					0x0001  /* Wait 1 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS2					0x0002  /* Wait 2 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS3					0x0003  /* Wait 3 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS4					0x0004  /* Wait 4 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS5					0x0005  /* Wait 5 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS6					0x0006  /* Wait 6 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS7					0x0007  /* Wait 7 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS8					0x0008  /* Wait 8 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS9					0x0009  /* Wait 9 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS10					0x000A  /* Wait 10 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS11					0x000B  /* Wait 11 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS12					0x000C  /* Wait 12 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS13					0x000D  /* Wait 13 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS14					0x000E  /* Wait 14 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS15					0x000F  /* Wait 15 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS16					0x0010  /* Wait 16 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS17					0x0011  /* Wait 17 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS18					0x0012  /* Wait 18 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS19					0x0013  /* Wait 19 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS20					0x0014  /* Wait 20 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS21					0x0015  /* Wait 21 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS22					0x0016  /* Wait 22 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS23					0x0017  /* Wait 23 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS24					0x0018  /* Wait 24 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS25					0x0019  /* Wait 25 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS26					0x001A  /* Wait 26 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS27					0x001B  /* Wait 27 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS28					0x001C  /* Wait 28 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS29					0x001D  /* Wait 29 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS30					0x001E  /* Wait 30 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS31					0x001F  /* Wait 31 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS32					0x0020  /* Wait 32 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS33					0x0021  /* Wait 33 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS34					0x0022  /* Wait 34 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS35					0x0023  /* Wait 35 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS36					0x0024  /* Wait 36 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS37					0x0025  /* Wait 37 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS38					0x0026  /* Wait 38 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS39					0x0027  /* Wait 39 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS40					0x0028  /* Wait 40 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS41					0x0029  /* Wait 41 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS42					0x002A  /* Wait 42 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS43					0x002B  /* Wait 43 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS44					0x002C  /* Wait 44 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS45					0x002D  /* Wait 45 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS46					0x002E  /* Wait 46 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS47					0x002F  /* Wait 47 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS48					0x0030  /* Wait 48 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS49					0x0031  /* Wait 49 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS50					0x0032  /* Wait 50 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS51					0x0033  /* Wait 51 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS52					0x0034  /* Wait 52 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS53					0x0035  /* Wait 53 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS54					0x0036  /* Wait 54 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS55					0x0037  /* Wait 55 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS56					0x0038  /* Wait 56 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS57					0x0039  /* Wait 57 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS58					0x003A  /* Wait 58 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS59					0x003B  /* Wait 59 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS60					0x003C  /* Wait 60 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS61					0x003D  /* Wait 61 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS62					0x003E  /* Wait 62 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM7_TRIG_PS63					0x003F  /* Wait 63 PWM cycles before generating the first trigger event after the module is enabled */


/*----------------------------------------------------------------------------------------------------*/
/* TRGCON8 onfiguration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC30F__)
#define PWM8_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event */
#define PWM8_TRIG_EVENT2				0x2000  /* Trigger output on every 2nd trigger event */
#define PWM8_TRIG_EVENT3				0x4000  /* Trigger output on every 3rd trigger event */
#define PWM8_TRIG_EVENT4				0x6000  /* Trigger output on every 4th trigger event */
#define PWM8_TRIG_EVENT5				0x8000  /* Trigger output on every 5th trigger event */
#define PWM8_TRIG_EVENT6				0xA000  /* Trigger output on every 6th trigger event */
#define PWM8_TRIG_EVENT7				0xC000  /* Trigger output on every 7th trigger event */
#define PWM8_TRIG_EVENT8				0xE000  /* Trigger output on every 8th trigger event */

#elif defined (__dsPIC33F__)
#define PWM8_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event     */
#define PWM8_TRIG_EVENT2				0x1000  /* Trigger output on every 2nd trigger event */
#define PWM8_TRIG_EVENT3				0x2000  /* Trigger output on every 3rd trigger event */
#define PWM8_TRIG_EVENT4				0x3000  /* Trigger output on every 4th trigger event */
#define PWM8_TRIG_EVENT5				0x4000  /* Trigger output on every 5th trigger event */
#define PWM8_TRIG_EVENT6				0x5000  /* Trigger output on every 6th trigger event */
#define PWM8_TRIG_EVENT7				0x6000  /* Trigger output on every 7th trigger event */
#define PWM8_TRIG_EVENT8				0x7000  /* Trigger output on every 8th trigger event */
#define PWM8_TRIG_EVENT9				0x8000  /* Trigger output on every 9th trigger event */
#define PWM8_TRIG_EVENT10				0x9000  /* Trigger output on every 10th trigger event */
#define PWM8_TRIG_EVENT11				0xA000  /* Trigger output on every 11th trigger event */
#define PWM8_TRIG_EVENT12				0xB000  /* Trigger output on every 12th trigger event */
#define PWM8_TRIG_EVENT13				0xC000  /* Trigger output on every 13th trigger event */
#define PWM8_TRIG_EVENT14				0xD000  /* Trigger output on every 14th trigger event */
#define PWM8_TRIG_EVENT15				0xE000  /* Trigger output on every 15th trigger event */
#define PWM8_TRIG_EVENT16				0xF000  /* Trigger output on every 16th trigger event */
#endif

#if defined (__dsPIC33F__)
#define PWM8_PRI_SEC_COMB_TRIG			0x0080  /* Secondary Trigger event is combined with the primary trigger event to create PWM trigger.*/
#define PWM8_INDIVIDUAL_TRIG			0x0000  /* Secondary Trigger event is not combined with the primary trigger event to create PWM trigger. Two
												   separate PWM triggers are generated.*/
#endif

#define PWM8_TRIG_PS0					0x0000  /* Wait 0 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS1					0x0001  /* Wait 1 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS2					0x0002  /* Wait 2 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS3					0x0003  /* Wait 3 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS4					0x0004  /* Wait 4 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS5					0x0005  /* Wait 5 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_RIG_PS6					0x0006  /* Wait 6 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS7					0x0007  /* Wait 7 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS8					0x0008  /* Wait 8 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS9					0x0009  /* Wait 9 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS10					0x000A  /* Wait 10 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS11					0x000B  /* Wait 11 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS12					0x000C  /* Wait 12 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS13					0x000D  /* Wait 13 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS14					0x000E  /* Wait 14 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS15					0x000F  /* Wait 15 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS16					0x0010  /* Wait 16 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS17					0x0011  /* Wait 17 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS18					0x0012  /* Wait 18 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS19					0x0013  /* Wait 19 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS20					0x0014  /* Wait 20 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS21					0x0015  /* Wait 21 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS22					0x0016  /* Wait 22 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_RIG_PS23					0x0017  /* Wait 23 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS24					0x0018  /* Wait 24 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS25					0x0019  /* Wait 25 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS26					0x001A  /* Wait 26 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS27					0x001B  /* Wait 27 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS28					0x001C  /* Wait 28 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS29					0x001D  /* Wait 29 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS30					0x001E  /* Wait 30 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS31					0x001F  /* Wait 31 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS32					0x0020  /* Wait 32 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS33					0x0021  /* Wait 33 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS34					0x0022  /* Wait 34 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS35					0x0023  /* Wait 35 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS36					0x0024  /* Wait 36 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS37					0x0025  /* Wait 37 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS38					0x0026  /* Wait 38 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS39					0x0027  /* Wait 39 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS40					0x0028  /* Wait 40 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS41					0x0029  /* Wait 41 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS42					0x002A  /* Wait 42 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS43					0x002B  /* Wait 43 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS44					0x002C  /* Wait 44 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS45					0x002D  /* Wait 45 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS46					0x002E  /* Wait 46 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS47					0x002F  /* Wait 47 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS48					0x0030  /* Wait 48 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS49					0x0031  /* Wait 49 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS50					0x0032  /* Wait 50 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS51					0x0033  /* Wait 51 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS52					0x0034  /* Wait 52 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS53					0x0035  /* Wait 53 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS54					0x0036  /* Wait 54 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS55					0x0037  /* Wait 55 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS56					0x0038  /* Wait 56 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS57					0x0039  /* Wait 57 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS58					0x003A  /* Wait 58 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS59					0x003B  /* Wait 59 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS60					0x003C  /* Wait 60 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS61					0x003D  /* Wait 61 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS62					0x003E  /* Wait 62 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM8_TRIG_PS63					0x003F  /* Wait 63 PWM cycles before generating the first trigger event after the module is enabled */



/*----------------------------------------------------------------------------------------------------*/
/* TRGCON9 onfiguration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC30F__)
#define PWM9_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event */
#define PWM9_TRIG_EVENT2				0x2000  /* Trigger output on every 2nd trigger event */
#define PWM9_TRIG_EVENT3				0x4000  /* Trigger output on every 3rd trigger event */
#define PWM9_TRIG_EVENT4				0x6000  /* Trigger output on every 4th trigger event */
#define PWM9_TRIG_EVENT5				0x8000  /* Trigger output on every 5th trigger event */
#define PWM9_TRIG_EVENT6				0xA000  /* Trigger output on every 6th trigger event */
#define PWM9_TRIG_EVENT7				0xC000  /* Trigger output on every 7th trigger event */
#define PWM9_TRIG_EVENT8				0xE000  /* Trigger output on every 8th trigger event */

#elif defined (__dsPIC33F__)
#define PWM9_TRIG_EVENT1				0x0000  /* Trigger output on every trigger event     */
#define PWM9_TRIG_EVENT2				0x1000  /* Trigger output on every 2nd trigger event */
#define PWM9_TRIG_EVENT3				0x2000  /* Trigger output on every 3rd trigger event */
#define PWM9_TRIG_EVENT4				0x3000  /* Trigger output on every 4th trigger event */
#define PWM9_TRIG_EVENT5				0x4000  /* Trigger output on every 5th trigger event */
#define PWM9_TRIG_EVENT6				0x5000  /* Trigger output on every 6th trigger event */
#define PWM9_TRIG_EVENT7				0x6000  /* Trigger output on every 7th trigger event */
#define PWM9_TRIG_EVENT8				0x7000  /* Trigger output on every 8th trigger event */
#define PWM9_TRIG_EVENT9				0x8000  /* Trigger output on every 9th trigger event */
#define PWM9_TRIG_EVENT10				0x9000  /* Trigger output on every 10th trigger event */
#define PWM9_TRIG_EVENT11				0xA000  /* Trigger output on every 11th trigger event */
#define PWM9_TRIG_EVENT12				0xB000  /* Trigger output on every 12th trigger event */
#define PWM9_TRIG_EVENT13				0xC000  /* Trigger output on every 13th trigger event */
#define PWM9_TRIG_EVENT14				0xD000  /* Trigger output on every 14th trigger event */
#define PWM9_TRIG_EVENT15				0xE000  /* Trigger output on every 15th trigger event */
#define PWM9_TRIG_EVENT16				0xF000  /* Trigger output on every 16th trigger event */
#endif

#if defined (__dsPIC33F__)
#define PWM9_PRI_SEC_COMB_TRIG			0x0080  /* Secondary Trigger event is combined with the primary trigger event to create PWM trigger.*/
#define PWM9_INDIVIDUAL_TRIG			0x0000  /* Secondary Trigger event is not combined with the primary trigger event to create PWM trigger. Two
												   separate PWM triggers are generated.*/
#endif

#define PWM9_TRIG_PS0					0x0000  /* Wait 0 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS1					0x0001  /* Wait 1 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS2					0x0002  /* Wait 2 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS3					0x0003  /* Wait 3 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS4					0x0004  /* Wait 4 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS5					0x0005  /* Wait 5 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS6					0x0006  /* Wait 6 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS7					0x0007  /* Wait 7 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS8					0x0008  /* Wait 8 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS9					0x0009  /* Wait 9 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS10					0x000A  /* Wait 10 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS11					0x000B  /* Wait 11 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS12					0x000C  /* Wait 12 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS13					0x000D  /* Wait 13 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS14					0x000E  /* Wait 14 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS15					0x000F  /* Wait 15 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS16					0x0010  /* Wait 16 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS17					0x0011  /* Wait 17 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS18					0x0012  /* Wait 18 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS19					0x0013  /* Wait 19 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS20					0x0014  /* Wait 20 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS21					0x0015  /* Wait 21 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS22					0x0016  /* Wait 22 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS23					0x0017  /* Wait 23 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS24					0x0018  /* Wait 24 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS25					0x0019  /* Wait 25 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS26					0x001A  /* Wait 26 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS27					0x001B  /* Wait 27 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS28					0x001C  /* Wait 28 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS29					0x001D  /* Wait 29 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS30					0x001E  /* Wait 30 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS31					0x001F  /* Wait 31 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS32					0x0020  /* Wait 32 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS33					0x0021  /* Wait 33 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS34					0x0022  /* Wait 34 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS35					0x0023  /* Wait 35 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS36					0x0024  /* Wait 36 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS37					0x0025  /* Wait 37 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS38					0x0026  /* Wait 38 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS39					0x0027  /* Wait 39 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS40					0x0028  /* Wait 40 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS41					0x0029  /* Wait 41 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS42					0x002A  /* Wait 42 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS43					0x002B  /* Wait 43 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS44					0x002C  /* Wait 44 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS45					0x002D  /* Wait 45 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS46					0x002E  /* Wait 46 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS47					0x002F  /* Wait 47 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS48					0x0030  /* Wait 48 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS49					0x0031  /* Wait 49 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS50					0x0032  /* Wait 50 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS51					0x0033  /* Wait 51 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS52					0x0034  /* Wait 52 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS53					0x0035  /* Wait 53 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS54					0x0036  /* Wait 54 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS55					0x0037  /* Wait 55 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS56					0x0038  /* Wait 56 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS57					0x0039  /* Wait 57 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS58					0x003A  /* Wait 58 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS59					0x003B  /* Wait 59 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS60					0x003C  /* Wait 60 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS61					0x003D  /* Wait 61 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS62					0x003E  /* Wait 62 PWM cycles before generating the first trigger event after the module is enabled */
#define PWM9_TRIG_PS63					0x003F  /* Wait 63 PWM cycles before generating the first trigger event after the module is enabled */





/*----------------------------------------------------------------------------------------------------*/
/* LEBCON1 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM1_H_LEB_RISE_TRIG_EN			0x8000  /* Rising edge of PWMH will trigger LEB counter */
#define PWM1_H_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWMH */

#define PWM1_H_LEB_FALL_TRIG_EN			0x4000  /* Falling edge of PWMH will trigger LEB counter */
#define PWM1_H_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWMH */

#define PWM1_L_LEB_RISE_TRIG_EN			0x2000  /* Rising edge of PWML will trigger LEB counter */
#define PWM1_L_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWML */

#define PWM1_L_LEB_FALL_TRIG_EN			0x1000  /* Falling edge of PWML will trigger LEB counter */
#define PWM1_L_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWML */

#define PWM1_LEB_FLT_IP_EN				0x0800  /* LEB is applied to the selected fault Input */
#define PWM1_LEB_FLT_IP_DIS				0x0000  /* LEB is not applied to the selected fault Input */ 

#define PWM1_LEB_CL_IP_EN				0x0400  /* LEB is applied to the selected Current Limit Input */
#define PWM1_LEB_CL_IP_DIS				0x0000  /* LEB is not applied to the selected Current Limit Input */

#define PWM1_LEB_COUNT_VAL1				0x0000  /* LEB value */
#define PWM1_LEB_COUNT_VAL2				0x0008  /* LEB value */
#define PWM1_LEB_COUNT_VAL3				0x0010  /* LEB value */
#define PWM1_LEB_COUNT_VAL4				0x0018  /* LEB value */
#define PWM1_LEB_COUNT_VAL5				0x0020  /* LEB value */
#define PWM1_LEB_COUNT_VAL6				0x0028  /* LEB value */
#define PWM1_LEB_COUNT_VAL7				0x0030  /* LEB value */
#define PWM1_LEB_COUNT_VAL8				0x0038  /* LEB value */
#define PWM1_LEB_COUNT_VAL9				0x0040  /* LEB value */
#define PWM1_LEB_COUNT_VAL10			0x0048  /* LEB value */
#define PWM1_LEB_COUNT_VAL11			0x0050  /* LEB value */
#define PWM1_LEB_COUNT_VAL12			0x0058  /* LEB value */
#define PWM1_LEB_COUNT_VAL13			0x0060  /* LEB value */
#define PWM1_LEB_COUNT_VAL14			0x0068  /* LEB value */
#define PWM1_LEB_COUNT_VAL15			0x0070  /* LEB value */
#define PWM1_LEB_COUNT_VAL16			0x0078  /* LEB value */
#define PWM1_LEB_COUNT_VAL17			0x0080  /* LEB value */
#define PWM1_LEB_COUNT_VAL18			0x0088  /* LEB value */
#define PWM1_LEB_COUNT_VAL19			0x0090  /* LEB value */
#define PWM1_LEB_COUNT_VAL20			0x0098  /* LEB value */
#define PWM1_LEB_COUNT_VAL21			0x00A0  /* LEB value */
#define PWM1_LEB_COUNT_VAL22			0x00A8  /* LEB value */
#define PWM1_LEB_COUNT_VAL23			0x00B0  /* LEB value */
#define PWM1_LEB_COUNT_VAL24			0x00B8  /* LEB value */
#define PWM1_LEB_COUNT_VAL25			0x00C0  /* LEB value */
#define PWM1_LEB_COUNT_VAL26			0x00C8  /* LEB value */
#define PWM1_LEB_COUNT_VAL27			0x00D0  /* LEB value */
#define PWM1_LEB_COUNT_VAL28			0x00D8  /* LEB value */
#define PWM1_LEB_COUNT_VAL29			0x00E0  /* LEB value */
#define PWM1_LEB_COUNT_VAL30			0x00E8  /* LEB value */
#define PWM1_LEB_COUNT_VAL31			0x00F0  /* LEB value */
#define PWM1_LEB_COUNT_VAL32			0x00F8  /* LEB value */
#define PWM1_LEB_COUNT_VAL33			0x0100  /* LEB value */
#define PWM1_LEB_COUNT_VAL34			0x0108  /* LEB value */
#define PWM1_LEB_COUNT_VAL35			0x0110  /* LEB value */
#define PWM1_LEB_COUNT_VAL36			0x0118  /* LEB value */
#define PWM1_LEB_COUNT_VAL37			0x0120  /* LEB value */
#define PWM1_LEB_COUNT_VAL38			0x0128  /* LEB value */
#define PWM1_LEB_COUNT_VAL39			0x0130  /* LEB value */
#define PWM1_LEB_COUNT_VAL40			0x0138  /* LEB value */
#define PWM1_LEB_COUNT_VAL41			0x0140  /* LEB value */
#define PWM1_LEB_COUNT_VAL42			0x0148  /* LEB value */
#define PWM1_LEB_COUNT_VAL43			0x0150  /* LEB value */
#define PWM1_LEB_COUNT_VAL44			0x0158  /* LEB value */
#define PWM1_LEB_COUNT_VAL45			0x0160  /* LEB value */
#define PWM1_LEB_COUNT_VAL46			0x0168  /* LEB value */
#define PWM1_LEB_COUNT_VAL47			0x0170  /* LEB value */
#define PWM1_LEB_COUNT_VAL48			0x0178  /* LEB value */
#define PWM1_LEB_COUNT_VAL49			0x0180  /* LEB value */
#define PWM1_LEB_COUNT_VAL50			0x0188  /* LEB value */
#define PWM1_LEB_COUNT_VAL51			0x0190  /* LEB value */
#define PWM1_LEB_COUNT_VAL52			0x0198  /* LEB value */
#define PWM1_LEB_COUNT_VAL53			0x01A0  /* LEB value */
#define PWM1_LEB_COUNT_VAL54			0x01A8  /* LEB value */
#define PWM1_LEB_COUNT_VAL55			0x01B0  /* LEB value */
#define PWM1_LEB_COUNT_VAL56			0x01B8  /* LEB value */
#define PWM1_LEB_COUNT_VAL57			0x01C0  /* LEB value */
#define PWM1_LEB_COUNT_VAL58			0x01C8  /* LEB value */
#define PWM1_LEB_COUNT_VAL59			0x01D0  /* LEB value */
#define PWM1_LEB_COUNT_VAL60			0x01D8  /* LEB value */
#define PWM1_LEB_COUNT_VAL61			0x01E0  /* LEB value */
#define PWM1_LEB_COUNT_VAL62			0x01E8  /* LEB value */
#define PWM1_LEB_COUNT_VAL63			0x01F0  /* LEB value */
#define PWM1_LEB_COUNT_VAL64			0x01F8  /* LEB value */
#define PWM1_LEB_COUNT_VAL65			0x0200  /* LEB value */
#define PWM1_LEB_COUNT_VAL66			0x0208  /* LEB value */
#define PWM1_LEB_COUNT_VAL67			0x0210  /* LEB value */
#define PWM1_LEB_COUNT_VAL68			0x0218  /* LEB value */
#define PWM1_LEB_COUNT_VAL69			0x0220  /* LEB value */
#define PWM1_LEB_COUNT_VAL70			0x0228  /* LEB value */
#define PWM1_LEB_COUNT_VAL71			0x0230  /* LEB value */
#define PWM1_LEB_COUNT_VAL72			0x0238  /* LEB value */
#define PWM1_LEB_COUNT_VAL73			0x0240  /* LEB value */
#define PWM1_LEB_COUNT_VAL74			0x0248  /* LEB value */
#define PWM1_LEB_COUNT_VAL75			0x0250  /* LEB value */
#define PWM1_LEB_COUNT_VAL76			0x0258  /* LEB value */
#define PWM1_LEB_COUNT_VAL77			0x0260  /* LEB value */
#define PWM1_LEB_COUNT_VAL78			0x0268  /* LEB value */
#define PWM1_LEB_COUNT_VAL79			0x0270  /* LEB value */
#define PWM1_LEB_COUNT_VAL80			0x0278  /* LEB value */
#define PWM1_LEB_COUNT_VAL81			0x0280  /* LEB value */
#define PWM1_LEB_COUNT_VAL82			0x0288  /* LEB value */
#define PWM1_LEB_COUNT_VAL83			0x0290  /* LEB value */
#define PWM1_LEB_COUNT_VAL84			0x0298  /* LEB value */
#define PWM1_LEB_COUNT_VAL85			0x02A0  /* LEB value */
#define PWM1_LEB_COUNT_VAL86			0x02A8  /* LEB value */
#define PWM1_LEB_COUNT_VAL87			0x02B0  /* LEB value */
#define PWM1_LEB_COUNT_VAL88			0x02B8  /* LEB value */
#define PWM1_LEB_COUNT_VAL89			0x02C0  /* LEB value */
#define PWM1_LEB_COUNT_VAL90			0x02C8  /* LEB value */
#define PWM1_LEB_COUNT_VAL91			0x02D0  /* LEB value */
#define PWM1_LEB_COUNT_VAL92			0x02D8  /* LEB value */
#define PWM1_LEB_COUNT_VAL93			0x02E0  /* LEB value */
#define PWM1_LEB_COUNT_VAL94			0x02E8  /* LEB value */
#define PWM1_LEB_COUNT_VAL95			0x02F0  /* LEB value */
#define PWM1_LEB_COUNT_VAL96			0x02F8  /* LEB value */
#define PWM1_LEB_COUNT_VAL97			0x0300  /* LEB value */
#define PWM1_LEB_COUNT_VAL98			0x0308  /* LEB value */
#define PWM1_LEB_COUNT_VAL99			0x0310  /* LEB value */
#define PWM1_LEB_COUNT_VAL100			0x0318  /* LEB value */
#define PWM1_LEB_COUNT_VAL101			0x0320  /* LEB value */
#define PWM1_LEB_COUNT_VAL102			0x0328  /* LEB value */
#define PWM1_LEB_COUNT_VAL103			0x0330  /* LEB value */
#define PWM1_LEB_COUNT_VAL104			0x0338  /* LEB value */
#define PWM1_LEB_COUNT_VAL105			0x0340  /* LEB value */
#define PWM1_LEB_COUNT_VAL106			0x0348  /* LEB value */
#define PWM1_LEB_COUNT_VAL107			0x0350  /* LEB value */
#define PWM1_LEB_COUNT_VAL108			0x0358  /* LEB value */
#define PWM1_LEB_COUNT_VAL109			0x0360  /* LEB value */
#define PWM1_LEB_COUNT_VAL110			0x0368  /* LEB value */
#define PWM1_LEB_COUNT_VAL111			0x0370  /* LEB value */
#define PWM1_LEB_COUNT_VAL112			0x0378  /* LEB value */
#define PWM1_LEB_COUNT_VAL113			0x0380  /* LEB value */
#define PWM1_LEB_COUNT_VAL114			0x0388  /* LEB value */
#define PWM1_LEB_COUNT_VAL115			0x0390  /* LEB value */
#define PWM1_LEB_COUNT_VAL116			0x0398  /* LEB value */
#define PWM1_LEB_COUNT_VAL117			0x03A0  /* LEB value */
#define PWM1_LEB_COUNT_VAL118			0x03A8  /* LEB value */
#define PWM1_LEB_COUNT_VAL119			0x03B0  /* LEB value */
#define PWM1_LEB_COUNT_VAL120			0x03B8  /* LEB value */
#define PWM1_LEB_COUNT_VAL121			0x03C0  /* LEB value */
#define PWM1_LEB_COUNT_VAL122			0x03C8  /* LEB value */
#define PWM1_LEB_COUNT_VAL123			0x03D0  /* LEB value */
#define PWM1_LEB_COUNT_VAL124			0x03D8  /* LEB value */
#define PWM1_LEB_COUNT_VAL125			0x03E0  /* LEB value */
#define PWM1_LEB_COUNT_VAL126			0x03E8  /* LEB value */
#define PWM1_LEB_COUNT_VAL127			0x03F0  /* LEB value */
#define PWM1_LEB_COUNT_VAL128			0x03F8  /* LEB value */


/*----------------------------------------------------------------------------------------------------*/
/* LEBCON2 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM2_H_LEB_RISE_TRIG_EN			0x8000  /* Rising edge of PWMH will trigger LEB counter */
#define PWM2_H_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWMH */

#define PWM2_H_LEB_FALL_TRIG_EN			0x4000  /* Falling edge of PWMH will trigger LEB counter */
#define PWM2_H_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWMH */

#define PWM2_L_LEB_RISE_TRIG_EN			0x2000  /* Rising edge of PWML will trigger LEB counter */
#define PWM2_L_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWML */

#define PWM2_L_LEB_FALL_TRIG_EN			0x1000  /* Falling edge of PWML will trigger LEB counter */
#define PWM2_L_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWML */

#define PWM2_LEB_FLT_IP_EN				0x0800  /* LEB is applied to the selected fault Input */
#define PWM2_LEB_FLT_IP_DIS				0x0000  /* LEB is not applied to the selected fault Input */ 

#define PWM2_LEB_CL_IP_EN				0x0400  /* LEB is applied to the selected Current Limit Input */
#define PWM2_LEB_CL_IP_DIS				0x0000  /* LEB is not applied to the selected Current Limit Input */

#define PWM2_LEB_COUNT_VAL1				0x0000  /* LEB value */
#define PWM2_LEB_COUNT_VAL2				0x0008  /* LEB value */
#define PWM2_LEB_COUNT_VAL3				0x0010  /* LEB value */
#define PWM2_LEB_COUNT_VAL4				0x0018  /* LEB value */
#define PWM2_LEB_COUNT_VAL5				0x0020  /* LEB value */
#define PWM2_LEB_COUNT_VAL6				0x0028  /* LEB value */
#define PWM2_LEB_COUNT_VAL7				0x0030  /* LEB value */
#define PWM2_LEB_COUNT_VAL8				0x0038  /* LEB value */
#define PWM2_LEB_COUNT_VAL9				0x0040  /* LEB value */
#define PWM2_LEB_COUNT_VAL10			0x0048  /* LEB value */
#define PWM2_LEB_COUNT_VAL11			0x0050  /* LEB value */
#define PWM2_LEB_COUNT_VAL12			0x0058  /* LEB value */
#define PWM2_LEB_COUNT_VAL13			0x0060  /* LEB value */
#define PWM2_LEB_COUNT_VAL14			0x0068  /* LEB value */
#define PWM2_LEB_COUNT_VAL15			0x0070  /* LEB value */
#define PWM2_LEB_COUNT_VAL16			0x0078  /* LEB value */
#define PWM2_LEB_COUNT_VAL17			0x0080  /* LEB value */
#define PWM2_LEB_COUNT_VAL18			0x0088  /* LEB value */
#define PWM2_LEB_COUNT_VAL19			0x0090  /* LEB value */
#define PWM2_LEB_COUNT_VAL20			0x0098  /* LEB value */
#define PWM2_LEB_COUNT_VAL21			0x00A0  /* LEB value */
#define PWM2_LEB_COUNT_VAL22			0x00A8  /* LEB value */
#define PWM2_LEB_COUNT_VAL23			0x00B0  /* LEB value */
#define PWM2_LEB_COUNT_VAL24			0x00B8  /* LEB value */
#define PWM2_LEB_COUNT_VAL25			0x00C0  /* LEB value */
#define PWM2_LEB_COUNT_VAL26			0x00C8  /* LEB value */
#define PWM2_LEB_COUNT_VAL27			0x00D0  /* LEB value */
#define PWM2_LEB_COUNT_VAL28			0x00D8  /* LEB value */
#define PWM2_LEB_COUNT_VAL29			0x00E0  /* LEB value */
#define PWM2_LEB_COUNT_VAL30			0x00E8  /* LEB value */
#define PWM2_LEB_COUNT_VAL31			0x00F0  /* LEB value */
#define PWM2_LEB_COUNT_VAL32			0x00F8  /* LEB value */
#define PWM2_LEB_COUNT_VAL33			0x0100  /* LEB value */
#define PWM2_LEB_COUNT_VAL34			0x0108  /* LEB value */
#define PWM2_LEB_COUNT_VAL35			0x0110  /* LEB value */
#define PWM2_LEB_COUNT_VAL36			0x0118  /* LEB value */
#define PWM2_LEB_COUNT_VAL37			0x0120  /* LEB value */
#define PWM2_LEB_COUNT_VAL38			0x0128  /* LEB value */
#define PWM2_LEB_COUNT_VAL39			0x0130  /* LEB value */
#define PWM2_LEB_COUNT_VAL40			0x0138  /* LEB value */
#define PWM2_LEB_COUNT_VAL41			0x0140  /* LEB value */
#define PWM2_LEB_COUNT_VAL42			0x0148  /* LEB value */
#define PWM2_LEB_COUNT_VAL43			0x0150  /* LEB value */
#define PWM2_LEB_COUNT_VAL44			0x0158  /* LEB value */
#define PWM2_LEB_COUNT_VAL45			0x0160  /* LEB value */
#define PWM2_LEB_COUNT_VAL46			0x0168  /* LEB value */
#define PWM2_LEB_COUNT_VAL47			0x0170  /* LEB value */
#define PWM2_LEB_COUNT_VAL48			0x0178  /* LEB value */
#define PWM2_LEB_COUNT_VAL49			0x0180  /* LEB value */
#define PWM2_LEB_COUNT_VAL50			0x0188  /* LEB value */
#define PWM2_LEB_COUNT_VAL51			0x0190  /* LEB value */
#define PWM2_LEB_COUNT_VAL52			0x0198  /* LEB value */
#define PWM2_LEB_COUNT_VAL53			0x01A0  /* LEB value */
#define PWM2_LEB_COUNT_VAL54			0x01A8  /* LEB value */
#define PWM2_LEB_COUNT_VAL55			0x01B0  /* LEB value */
#define PWM2_LEB_COUNT_VAL56			0x01B8  /* LEB value */
#define PWM2_LEB_COUNT_VAL57			0x01C0  /* LEB value */
#define PWM2_LEB_COUNT_VAL58			0x01C8  /* LEB value */
#define PWM2_LEB_COUNT_VAL59			0x01D0  /* LEB value */
#define PWM2_LEB_COUNT_VAL60			0x01D8  /* LEB value */
#define PWM2_LEB_COUNT_VAL61			0x01E0  /* LEB value */
#define PWM2_LEB_COUNT_VAL62			0x01E8  /* LEB value */
#define PWM2_LEB_COUNT_VAL63			0x01F0  /* LEB value */
#define PWM2_LEB_COUNT_VAL64			0x01F8  /* LEB value */
#define PWM2_LEB_COUNT_VAL65			0x0200  /* LEB value */
#define PWM2_LEB_COUNT_VAL66			0x0208  /* LEB value */
#define PWM2_LEB_COUNT_VAL67			0x0210  /* LEB value */
#define PWM2_LEB_COUNT_VAL68			0x0218  /* LEB value */
#define PWM2_LEB_COUNT_VAL69			0x0220  /* LEB value */
#define PWM2_LEB_COUNT_VAL70			0x0228  /* LEB value */
#define PWM2_LEB_COUNT_VAL71			0x0230  /* LEB value */
#define PWM2_LEB_COUNT_VAL72			0x0238  /* LEB value */
#define PWM2_LEB_COUNT_VAL73			0x0240  /* LEB value */
#define PWM2_LEB_COUNT_VAL74			0x0248  /* LEB value */
#define PWM2_LEB_COUNT_VAL75			0x0250  /* LEB value */
#define PWM2_LEB_COUNT_VAL76			0x0258  /* LEB value */
#define PWM2_LEB_COUNT_VAL77			0x0260  /* LEB value */
#define PWM2_LEB_COUNT_VAL78			0x0268  /* LEB value */
#define PWM2_LEB_COUNT_VAL79			0x0270  /* LEB value */
#define PWM2_LEB_COUNT_VAL80			0x0278  /* LEB value */
#define PWM2_LEB_COUNT_VAL81			0x0280  /* LEB value */
#define PWM2_LEB_COUNT_VAL82			0x0288  /* LEB value */
#define PWM2_LEB_COUNT_VAL83			0x0290  /* LEB value */
#define PWM2_LEB_COUNT_VAL84			0x0298  /* LEB value */
#define PWM2_LEB_COUNT_VAL85			0x02A0  /* LEB value */
#define PWM2_LEB_COUNT_VAL86			0x02A8  /* LEB value */
#define PWM2_LEB_COUNT_VAL87			0x02B0  /* LEB value */
#define PWM2_LEB_COUNT_VAL88			0x02B8  /* LEB value */
#define PWM2_LEB_COUNT_VAL89			0x02C0  /* LEB value */
#define PWM2_LEB_COUNT_VAL90			0x02C8  /* LEB value */
#define PWM2_LEB_COUNT_VAL91			0x02D0  /* LEB value */
#define PWM2_LEB_COUNT_VAL92			0x02D8  /* LEB value */
#define PWM2_LEB_COUNT_VAL93			0x02E0  /* LEB value */
#define PWM2_LEB_COUNT_VAL94			0x02E8  /* LEB value */
#define PWM2_LEB_COUNT_VAL95			0x02F0  /* LEB value */
#define PWM2_LEB_COUNT_VAL96			0x02F8  /* LEB value */
#define PWM2_LEB_COUNT_VAL97			0x0300  /* LEB value */
#define PWM2_LEB_COUNT_VAL98			0x0308  /* LEB value */
#define PWM2_LEB_COUNT_VAL99			0x0310  /* LEB value */
#define PWM2_LEB_COUNT_VAL100			0x0318  /* LEB value */
#define PWM2_LEB_COUNT_VAL101			0x0320  /* LEB value */
#define PWM2_LEB_COUNT_VAL102			0x0328  /* LEB value */
#define PWM2_LEB_COUNT_VAL103			0x0330  /* LEB value */
#define PWM2_LEB_COUNT_VAL104			0x0338  /* LEB value */
#define PWM2_LEB_COUNT_VAL105			0x0340  /* LEB value */
#define PWM2_LEB_COUNT_VAL106			0x0348  /* LEB value */
#define PWM2_LEB_COUNT_VAL107			0x0350  /* LEB value */
#define PWM2_LEB_COUNT_VAL108			0x0358  /* LEB value */
#define PWM2_LEB_COUNT_VAL109			0x0360  /* LEB value */
#define PWM2_LEB_COUNT_VAL110			0x0368  /* LEB value */
#define PWM2_LEB_COUNT_VAL111			0x0370  /* LEB value */
#define PWM2_LEB_COUNT_VAL112			0x0378  /* LEB value */
#define PWM2_LEB_COUNT_VAL113			0x0380  /* LEB value */
#define PWM2_LEB_COUNT_VAL114			0x0388  /* LEB value */
#define PWM2_LEB_COUNT_VAL115			0x0390  /* LEB value */
#define PWM2_LEB_COUNT_VAL116			0x0398  /* LEB value */
#define PWM2_LEB_COUNT_VAL117			0x03A0  /* LEB value */
#define PWM2_LEB_COUNT_VAL118			0x03A8  /* LEB value */
#define PWM2_LEB_COUNT_VAL119			0x03B0  /* LEB value */
#define PWM2_LEB_COUNT_VAL120			0x03B8  /* LEB value */
#define PWM2_LEB_COUNT_VAL121			0x03C0  /* LEB value */
#define PWM2_LEB_COUNT_VAL122			0x03C8  /* LEB value */
#define PWM2_LEB_COUNT_VAL123			0x03D0  /* LEB value */
#define PWM2_LEB_COUNT_VAL124			0x03D8  /* LEB value */
#define PWM2_LEB_COUNT_VAL125			0x03E0  /* LEB value */
#define PWM2_LEB_COUNT_VAL126			0x03E8  /* LEB value */
#define PWM2_LEB_COUNT_VAL127			0x03F0  /* LEB value */
#define PWM2_LEB_COUNT_VAL128			0x03F8  /* LEB value */

/*----------------------------------------------------------------------------------------------------*/
/* LEBCON3 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM3_H_LEB_RISE_TRIG_EN			0x8000  /* Rising edge of PWMH will trigger LEB counter */
#define PWM3_H_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWMH */

#define PWM3_H_LEB_FALL_TRIG_EN			0x4000  /* Falling edge of PWMH will trigger LEB counter */
#define PWM3_H_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWMH */

#define PWM3_L_LEB_RISE_TRIG_EN			0x2000  /* Rising edge of PWML will trigger LEB counter */
#define PWM3_L_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWML */

#define PWM3_L_LEB_FALL_TRIG_EN			0x1000  /* Falling edge of PWML will trigger LEB counter */
#define PWM3_L_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWML */

#define PWM3_LEB_FLT_IP_EN				0x0800  /* LEB is applied to the selected fault Input */
#define PWM3_LEB_FLT_IP_DIS				0x0000  /* LEB is not applied to the selected fault Input */ 

#define PWM3_LEB_CL_IP_EN				0x0400  /* LEB is applied to the selected Current Limit Input */
#define PWM3_LEB_CL_IP_DIS				0x0000  /* LEB is not applied to the selected Current Limit Input */

#define PWM3_LEB_COUNT_VAL1				0x0000  /* LEB value */
#define PWM3_LEB_COUNT_VAL2				0x0008  /* LEB value */
#define PWM3_LEB_COUNT_VAL3				0x0010  /* LEB value */
#define PWM3_LEB_COUNT_VAL4				0x0018  /* LEB value */
#define PWM3_LEB_COUNT_VAL5				0x0020  /* LEB value */
#define PWM3_LEB_COUNT_VAL6				0x0028  /* LEB value */
#define PWM3_LEB_COUNT_VAL7				0x0030  /* LEB value */
#define PWM3_LEB_COUNT_VAL8				0x0038  /* LEB value */
#define PWM3_LEB_COUNT_VAL9				0x0040  /* LEB value */
#define PWM3_LEB_COUNT_VAL10			0x0048  /* LEB value */
#define PWM3_LEB_COUNT_VAL11			0x0050  /* LEB value */
#define PWM3_LEB_COUNT_VAL12			0x0058  /* LEB value */
#define PWM3_LEB_COUNT_VAL13			0x0060  /* LEB value */
#define PWM3_LEB_COUNT_VAL14			0x0068  /* LEB value */
#define PWM3_LEB_COUNT_VAL15			0x0070  /* LEB value */
#define PWM3_LEB_COUNT_VAL16			0x0078  /* LEB value */
#define PWM3_LEB_COUNT_VAL17			0x0080  /* LEB value */
#define PWM3_LEB_COUNT_VAL18			0x0088  /* LEB value */
#define PWM3_LEB_COUNT_VAL19			0x0090  /* LEB value */
#define PWM3_LEB_COUNT_VAL20			0x0098  /* LEB value */
#define PWM3_LEB_COUNT_VAL21			0x00A0  /* LEB value */
#define PWM3_LEB_COUNT_VAL22			0x00A8  /* LEB value */
#define PWM3_LEB_COUNT_VAL23			0x00B0  /* LEB value */
#define PWM3_LEB_COUNT_VAL24			0x00B8  /* LEB value */
#define PWM3_LEB_COUNT_VAL25			0x00C0  /* LEB value */
#define PWM3_LEB_COUNT_VAL26			0x00C8  /* LEB value */
#define PWM3_LEB_COUNT_VAL27			0x00D0  /* LEB value */
#define PWM3_LEB_COUNT_VAL28			0x00D8  /* LEB value */
#define PWM3_LEB_COUNT_VAL29			0x00E0  /* LEB value */
#define PWM3_LEB_COUNT_VAL30			0x00E8  /* LEB value */
#define PWM3_LEB_COUNT_VAL31			0x00F0  /* LEB value */
#define PWM3_LEB_COUNT_VAL32			0x00F8  /* LEB value */
#define PWM3_LEB_COUNT_VAL33			0x0100  /* LEB value */
#define PWM3_LEB_COUNT_VAL34			0x0108  /* LEB value */
#define PWM3_LEB_COUNT_VAL35			0x0110  /* LEB value */
#define PWM3_LEB_COUNT_VAL36			0x0118  /* LEB value */
#define PWM3_LEB_COUNT_VAL37			0x0120  /* LEB value */
#define PWM3_LEB_COUNT_VAL38			0x0128  /* LEB value */
#define PWM3_LEB_COUNT_VAL39			0x0130  /* LEB value */
#define PWM3_LEB_COUNT_VAL40			0x0138  /* LEB value */
#define PWM3_LEB_COUNT_VAL41			0x0140  /* LEB value */
#define PWM3_LEB_COUNT_VAL42			0x0148  /* LEB value */
#define PWM3_LEB_COUNT_VAL43			0x0150  /* LEB value */
#define PWM3_LEB_COUNT_VAL44			0x0158  /* LEB value */
#define PWM3_LEB_COUNT_VAL45			0x0160  /* LEB value */
#define PWM3_LEB_COUNT_VAL46			0x0168  /* LEB value */
#define PWM3_LEB_COUNT_VAL47			0x0170  /* LEB value */
#define PWM3_LEB_COUNT_VAL48			0x0178  /* LEB value */
#define PWM3_LEB_COUNT_VAL49			0x0180  /* LEB value */
#define PWM3_LEB_COUNT_VAL50			0x0188  /* LEB value */
#define PWM3_LEB_COUNT_VAL51			0x0190  /* LEB value */
#define PWM3_LEB_COUNT_VAL52			0x0198  /* LEB value */
#define PWM3_LEB_COUNT_VAL53			0x01A0  /* LEB value */
#define PWM3_LEB_COUNT_VAL54			0x01A8  /* LEB value */
#define PWM3_LEB_COUNT_VAL55			0x01B0  /* LEB value */
#define PWM3_LEB_COUNT_VAL56			0x01B8  /* LEB value */
#define PWM3_LEB_COUNT_VAL57			0x01C0  /* LEB value */
#define PWM3_LEB_COUNT_VAL58			0x01C8  /* LEB value */
#define PWM3_LEB_COUNT_VAL59			0x01D0  /* LEB value */
#define PWM3_LEB_COUNT_VAL60			0x01D8  /* LEB value */
#define PWM3_LEB_COUNT_VAL61			0x01E0  /* LEB value */
#define PWM3_LEB_COUNT_VAL62			0x01E8  /* LEB value */
#define PWM3_LEB_COUNT_VAL63			0x01F0  /* LEB value */
#define PWM3_LEB_COUNT_VAL64			0x01F8  /* LEB value */
#define PWM3_LEB_COUNT_VAL65			0x0200  /* LEB value */
#define PWM3_LEB_COUNT_VAL66			0x0208  /* LEB value */
#define PWM3_LEB_COUNT_VAL67			0x0210  /* LEB value */
#define PWM3_LEB_COUNT_VAL68			0x0218  /* LEB value */
#define PWM3_LEB_COUNT_VAL69			0x0220  /* LEB value */
#define PWM3_LEB_COUNT_VAL70			0x0228  /* LEB value */
#define PWM3_LEB_COUNT_VAL71			0x0230  /* LEB value */
#define PWM3_LEB_COUNT_VAL72			0x0238  /* LEB value */
#define PWM3_LEB_COUNT_VAL73			0x0240  /* LEB value */
#define PWM3_LEB_COUNT_VAL74			0x0248  /* LEB value */
#define PWM3_LEB_COUNT_VAL75			0x0250  /* LEB value */
#define PWM3_LEB_COUNT_VAL76			0x0258  /* LEB value */
#define PWM3_LEB_COUNT_VAL77			0x0260  /* LEB value */
#define PWM3_LEB_COUNT_VAL78			0x0268  /* LEB value */
#define PWM3_LEB_COUNT_VAL79			0x0270  /* LEB value */
#define PWM3_LEB_COUNT_VAL80			0x0278  /* LEB value */
#define PWM3_LEB_COUNT_VAL81			0x0280  /* LEB value */
#define PWM3_LEB_COUNT_VAL82			0x0288  /* LEB value */
#define PWM3_LEB_COUNT_VAL83			0x0290  /* LEB value */
#define PWM3_LEB_COUNT_VAL84			0x0298  /* LEB value */
#define PWM3_LEB_COUNT_VAL85			0x02A0  /* LEB value */
#define PWM3_LEB_COUNT_VAL86			0x02A8  /* LEB value */
#define PWM3_LEB_COUNT_VAL87			0x02B0  /* LEB value */
#define PWM3_LEB_COUNT_VAL88			0x02B8  /* LEB value */
#define PWM3_LEB_COUNT_VAL89			0x02C0  /* LEB value */
#define PWM3_LEB_COUNT_VAL90			0x02C8  /* LEB value */
#define PWM3_LEB_COUNT_VAL91			0x02D0  /* LEB value */
#define PWM3_LEB_COUNT_VAL92			0x02D8  /* LEB value */
#define PWM3_LEB_COUNT_VAL93			0x02E0  /* LEB value */
#define PWM3_LEB_COUNT_VAL94			0x02E8  /* LEB value */
#define PWM3_LEB_COUNT_VAL95			0x02F0  /* LEB value */
#define PWM3_LEB_COUNT_VAL96			0x02F8  /* LEB value */
#define PWM3_LEB_COUNT_VAL97			0x0300  /* LEB value */
#define PWM3_LEB_COUNT_VAL98			0x0308  /* LEB value */
#define PWM3_LEB_COUNT_VAL99			0x0310  /* LEB value */
#define PWM3_LEB_COUNT_VAL100			0x0318  /* LEB value */
#define PWM3_LEB_COUNT_VAL101			0x0320  /* LEB value */
#define PWM3_LEB_COUNT_VAL102			0x0328  /* LEB value */
#define PWM3_LEB_COUNT_VAL103			0x0330  /* LEB value */
#define PWM3_LEB_COUNT_VAL104			0x0338  /* LEB value */
#define PWM3_LEB_COUNT_VAL105			0x0340  /* LEB value */
#define PWM3_LEB_COUNT_VAL106			0x0348  /* LEB value */
#define PWM3_LEB_COUNT_VAL107			0x0350  /* LEB value */
#define PWM3_LEB_COUNT_VAL108			0x0358  /* LEB value */
#define PWM3_LEB_COUNT_VAL109			0x0360  /* LEB value */
#define PWM3_LEB_COUNT_VAL110			0x0368  /* LEB value */
#define PWM3_LEB_COUNT_VAL111			0x0370  /* LEB value */
#define PWM3_LEB_COUNT_VAL112			0x0378  /* LEB value */
#define PWM3_LEB_COUNT_VAL113			0x0380  /* LEB value */
#define PWM3_LEB_COUNT_VAL114			0x0388  /* LEB value */
#define PWM3_LEB_COUNT_VAL115			0x0390  /* LEB value */
#define PWM3_LEB_COUNT_VAL116			0x0398  /* LEB value */
#define PWM3_LEB_COUNT_VAL117			0x03A0  /* LEB value */
#define PWM3_LEB_COUNT_VAL118			0x03A8  /* LEB value */
#define PWM3_LEB_COUNT_VAL119			0x03B0  /* LEB value */
#define PWM3_LEB_COUNT_VAL120			0x03B8  /* LEB value */
#define PWM3_LEB_COUNT_VAL121			0x03C0  /* LEB value */
#define PWM3_LEB_COUNT_VAL122			0x03C8  /* LEB value */
#define PWM3_LEB_COUNT_VAL123			0x03D0  /* LEB value */
#define PWM3_LEB_COUNT_VAL124			0x03D8  /* LEB value */
#define PWM3_LEB_COUNT_VAL125			0x03E0  /* LEB value */
#define PWM3_LEB_COUNT_VAL126			0x03E8  /* LEB value */
#define PWM3_LEB_COUNT_VAL127			0x03F0  /* LEB value */
#define PWM3_LEB_COUNT_VAL128			0x03F8  /* LEB value */

/*----------------------------------------------------------------------------------------------------*/
/* LEBCON4 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM4_H_LEB_RISE_TRIG_EN			0x8000  /* Rising edge of PWMH will trigger LEB counter */
#define PWM4_H_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWMH */

#define PWM4_H_LEB_FALL_TRIG_EN			0x4000  /* Falling edge of PWMH will trigger LEB counter */
#define PWM4_H_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWMH */

#define PWM4_L_LEB_RISE_TRIG_EN			0x2000  /* Rising edge of PWML will trigger LEB counter */
#define PWM4_L_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWML */

#define PWM4_L_LEB_FALL_TRIG_EN			0x1000  /* Falling edge of PWML will trigger LEB counter */
#define PWM4_L_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWML */

#define PWM4_LEB_FLT_IP_EN				0x0800  /* LEB is applied to the selected fault Input */
#define PWM4_LEB_FLT_IP_DIS				0x0000  /* LEB is not applied to the selected fault Input */ 

#define PWM4_LEB_CL_IP_EN				0x0400  /* LEB is applied to the selected Current Limit Input */
#define PWM4_LEB_CL_IP_DIS				0x0000  /* LEB is not applied to the selected Current Limit Input */

#define PWM4_LEB_COUNT_VAL1				0x0000  /* LEB value */
#define PWM4_LEB_COUNT_VAL2				0x0008  /* LEB value */
#define PWM4_LEB_COUNT_VAL3				0x0010  /* LEB value */
#define PWM4_LEB_COUNT_VAL4				0x0018  /* LEB value */
#define PWM4_LEB_COUNT_VAL5				0x0020  /* LEB value */
#define PWM4_LEB_COUNT_VAL6				0x0028  /* LEB value */
#define PWM4_LEB_COUNT_VAL7				0x0030  /* LEB value */
#define PWM4_LEB_COUNT_VAL8				0x0038  /* LEB value */
#define PWM4_LEB_COUNT_VAL9				0x0040  /* LEB value */
#define PWM4_LEB_COUNT_VAL10			0x0048  /* LEB value */
#define PWM4_LEB_COUNT_VAL11			0x0050  /* LEB value */
#define PWM4_LEB_COUNT_VAL12			0x0058  /* LEB value */
#define PWM4_LEB_COUNT_VAL13			0x0060  /* LEB value */
#define PWM4_LEB_COUNT_VAL14			0x0068  /* LEB value */
#define PWM4_LEB_COUNT_VAL15			0x0070  /* LEB value */
#define PWM4_LEB_COUNT_VAL16			0x0078  /* LEB value */
#define PWM4_LEB_COUNT_VAL17			0x0080  /* LEB value */
#define PWM4_LEB_COUNT_VAL18			0x0088  /* LEB value */
#define PWM4_LEB_COUNT_VAL19			0x0090  /* LEB value */
#define PWM4_LEB_COUNT_VAL20			0x0098  /* LEB value */
#define PWM4_LEB_COUNT_VAL21			0x00A0  /* LEB value */
#define PWM4_LEB_COUNT_VAL22			0x00A8  /* LEB value */
#define PWM4_LEB_COUNT_VAL23			0x00B0  /* LEB value */
#define PWM4_LEB_COUNT_VAL24			0x00B8  /* LEB value */
#define PWM4_LEB_COUNT_VAL25			0x00C0  /* LEB value */
#define PWM4_LEB_COUNT_VAL26			0x00C8  /* LEB value */
#define PWM4_LEB_COUNT_VAL27			0x00D0  /* LEB value */
#define PWM4_LEB_COUNT_VAL28			0x00D8  /* LEB value */
#define PWM4_LEB_COUNT_VAL29			0x00E0  /* LEB value */
#define PWM4_LEB_COUNT_VAL30			0x00E8  /* LEB value */
#define PWM4_LEB_COUNT_VAL31			0x00F0  /* LEB value */
#define PWM4_LEB_COUNT_VAL32			0x00F8  /* LEB value */
#define PWM4_LEB_COUNT_VAL33			0x0100  /* LEB value */
#define PWM4_LEB_COUNT_VAL34			0x0108  /* LEB value */
#define PWM4_LEB_COUNT_VAL35			0x0110  /* LEB value */
#define PWM4_LEB_COUNT_VAL36			0x0118  /* LEB value */
#define PWM4_LEB_COUNT_VAL37			0x0120  /* LEB value */
#define PWM4_LEB_COUNT_VAL38			0x0128  /* LEB value */
#define PWM4_LEB_COUNT_VAL39			0x0130  /* LEB value */
#define PWM4_LEB_COUNT_VAL40			0x0138  /* LEB value */
#define PWM4_LEB_COUNT_VAL41			0x0140  /* LEB value */
#define PWM4_LEB_COUNT_VAL42			0x0148  /* LEB value */
#define PWM4_LEB_COUNT_VAL43			0x0150  /* LEB value */
#define PWM4_LEB_COUNT_VAL44			0x0158  /* LEB value */
#define PWM4_LEB_COUNT_VAL45			0x0160  /* LEB value */
#define PWM4_LEB_COUNT_VAL46			0x0168  /* LEB value */
#define PWM4_LEB_COUNT_VAL47			0x0170  /* LEB value */
#define PWM4_LEB_COUNT_VAL48			0x0178  /* LEB value */
#define PWM4_LEB_COUNT_VAL49			0x0180  /* LEB value */
#define PWM4_LEB_COUNT_VAL50			0x0188  /* LEB value */
#define PWM4_LEB_COUNT_VAL51			0x0190  /* LEB value */
#define PWM4_LEB_COUNT_VAL52			0x0198  /* LEB value */
#define PWM4_LEB_COUNT_VAL53			0x01A0  /* LEB value */
#define PWM4_LEB_COUNT_VAL54			0x01A8  /* LEB value */
#define PWM4_LEB_COUNT_VAL55			0x01B0  /* LEB value */
#define PWM4_LEB_COUNT_VAL56			0x01B8  /* LEB value */
#define PWM4_LEB_COUNT_VAL57			0x01C0  /* LEB value */
#define PWM4_LEB_COUNT_VAL58			0x01C8  /* LEB value */
#define PWM4_LEB_COUNT_VAL59			0x01D0  /* LEB value */
#define PWM4_LEB_COUNT_VAL60			0x01D8  /* LEB value */
#define PWM4_LEB_COUNT_VAL61			0x01E0  /* LEB value */
#define PWM4_LEB_COUNT_VAL62			0x01E8  /* LEB value */
#define PWM4_LEB_COUNT_VAL63			0x01F0  /* LEB value */
#define PWM4_LEB_COUNT_VAL64			0x01F8  /* LEB value */
#define PWM4_LEB_COUNT_VAL65			0x0200  /* LEB value */
#define PWM4_LEB_COUNT_VAL66			0x0208  /* LEB value */
#define PWM4_LEB_COUNT_VAL67			0x0210  /* LEB value */
#define PWM4_LEB_COUNT_VAL68			0x0218  /* LEB value */
#define PWM4_LEB_COUNT_VAL69			0x0220  /* LEB value */
#define PWM4_LEB_COUNT_VAL70			0x0228  /* LEB value */
#define PWM4_LEB_COUNT_VAL71			0x0230  /* LEB value */
#define PWM4_LEB_COUNT_VAL72			0x0238  /* LEB value */
#define PWM4_LEB_COUNT_VAL73			0x0240  /* LEB value */
#define PWM4_LEB_COUNT_VAL74			0x0248  /* LEB value */
#define PWM4_LEB_COUNT_VAL75			0x0250  /* LEB value */
#define PWM4_LEB_COUNT_VAL76			0x0258  /* LEB value */
#define PWM4_LEB_COUNT_VAL77			0x0260  /* LEB value */
#define PWM4_LEB_COUNT_VAL78			0x0268  /* LEB value */
#define PWM4_LEB_COUNT_VAL79			0x0270  /* LEB value */
#define PWM4_LEB_COUNT_VAL80			0x0278  /* LEB value */
#define PWM4_LEB_COUNT_VAL81			0x0280  /* LEB value */
#define PWM4_LEB_COUNT_VAL82			0x0288  /* LEB value */
#define PWM4_LEB_COUNT_VAL83			0x0290  /* LEB value */
#define PWM4_LEB_COUNT_VAL84			0x0298  /* LEB value */
#define PWM4_LEB_COUNT_VAL85			0x02A0  /* LEB value */
#define PWM4_LEB_COUNT_VAL86			0x02A8  /* LEB value */
#define PWM4_LEB_COUNT_VAL87			0x02B0  /* LEB value */
#define PWM4_LEB_COUNT_VAL88			0x02B8  /* LEB value */
#define PWM4_LEB_COUNT_VAL89			0x02C0  /* LEB value */
#define PWM4_LEB_COUNT_VAL90			0x02C8  /* LEB value */
#define PWM4_LEB_COUNT_VAL91			0x02D0  /* LEB value */
#define PWM4_LEB_COUNT_VAL92			0x02D8  /* LEB value */
#define PWM4_LEB_COUNT_VAL93			0x02E0  /* LEB value */
#define PWM4_LEB_COUNT_VAL94			0x02E8  /* LEB value */
#define PWM4_LEB_COUNT_VAL95			0x02F0  /* LEB value */
#define PWM4_LEB_COUNT_VAL96			0x02F8  /* LEB value */
#define PWM4_LEB_COUNT_VAL97			0x0300  /* LEB value */
#define PWM4_LEB_COUNT_VAL98			0x0308  /* LEB value */
#define PWM4_LEB_COUNT_VAL99			0x0310  /* LEB value */
#define PWM4_LEB_COUNT_VAL100			0x0318  /* LEB value */
#define PWM4_LEB_COUNT_VAL101			0x0320  /* LEB value */
#define PWM4_LEB_COUNT_VAL102			0x0328  /* LEB value */
#define PWM4_LEB_COUNT_VAL103			0x0330  /* LEB value */
#define PWM4_LEB_COUNT_VAL104			0x0338  /* LEB value */
#define PWM4_LEB_COUNT_VAL105			0x0340  /* LEB value */
#define PWM4_LEB_COUNT_VAL106			0x0348  /* LEB value */
#define PWM4_LEB_COUNT_VAL107			0x0350  /* LEB value */
#define PWM4_LEB_COUNT_VAL108			0x0358  /* LEB value */
#define PWM4_LEB_COUNT_VAL109			0x0360  /* LEB value */
#define PWM4_LEB_COUNT_VAL110			0x0368  /* LEB value */
#define PWM4_LEB_COUNT_VAL111			0x0370  /* LEB value */
#define PWM4_LEB_COUNT_VAL112			0x0378  /* LEB value */
#define PWM4_LEB_COUNT_VAL113			0x0380  /* LEB value */
#define PWM4_LEB_COUNT_VAL114			0x0388  /* LEB value */
#define PWM4_LEB_COUNT_VAL115			0x0390  /* LEB value */
#define PWM4_LEB_COUNT_VAL116			0x0398  /* LEB value */
#define PWM4_LEB_COUNT_VAL117			0x03A0  /* LEB value */
#define PWM4_LEB_COUNT_VAL118			0x03A8  /* LEB value */
#define PWM4_LEB_COUNT_VAL119			0x03B0  /* LEB value */
#define PWM4_LEB_COUNT_VAL120			0x03B8  /* LEB value */
#define PWM4_LEB_COUNT_VAL121			0x03C0  /* LEB value */
#define PWM4_LEB_COUNT_VAL122			0x03C8  /* LEB value */
#define PWM4_LEB_COUNT_VAL123			0x03D0  /* LEB value */
#define PWM4_LEB_COUNT_VAL124			0x03D8  /* LEB value */
#define PWM4_LEB_COUNT_VAL125			0x03E0  /* LEB value */
#define PWM4_LEB_COUNT_VAL126			0x03E8  /* LEB value */
#define PWM4_LEB_COUNT_VAL127			0x03F0  /* LEB value */
#define PWM4_LEB_COUNT_VAL128			0x03F8  /* LEB value */


/*----------------------------------------------------------------------------------------------------*/
/* LEBCON5 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM5_H_LEB_RISE_TRIG_EN			0x8000  /* Rising edge of PWMH will trigger LEB counter */
#define PWM5_H_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWMH */

#define PWM5_H_LEB_FALL_TRIG_EN			0x4000  /* Falling edge of PWMH will trigger LEB counter */
#define PWM5_H_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWMH */

#define PWM5_L_LEB_RISE_TRIG_EN			0x2000  /* Rising edge of PWML will trigger LEB counter */
#define PWM5_L_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWML */

#define PWM5_L_LEB_FALL_TRIG_EN			0x1000  /* Falling edge of PWML will trigger LEB counter */
#define PWM5_L_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWML */

#define PWM5_LEB_FLT_IP_EN				0x0800  /* LEB is applied to the selected fault Input */
#define PWM5_LEB_FLT_IP_DIS				0x0000  /* LEB is not applied to the selected fault Input */ 

#define PWM5_LEB_CL_IP_EN				0x0400  /* LEB is applied to the selected Current Limit Input */
#define PWM5_LEB_CL_IP_DIS				0x0000  /* LEB is not applied to the selected Current Limit Input */

#define PWM5_LEB_COUNT_VAL1				0x0000  /* LEB value */
#define PWM5_LEB_COUNT_VAL2				0x0008  /* LEB value */
#define PWM5_LEB_COUNT_VAL3				0x0010  /* LEB value */
#define PWM5_LEB_COUNT_VAL4				0x0018  /* LEB value */
#define PWM5_LEB_COUNT_VAL5				0x0020  /* LEB value */
#define PWM5_LEB_COUNT_VAL6				0x0028  /* LEB value */
#define PWM5_LEB_COUNT_VAL7				0x0030  /* LEB value */
#define PWM5_LEB_COUNT_VAL8				0x0038  /* LEB value */
#define PWM5_LEB_COUNT_VAL9				0x0040  /* LEB value */
#define PWM5_LEB_COUNT_VAL10			0x0048  /* LEB value */
#define PWM5_LEB_COUNT_VAL11			0x0050  /* LEB value */
#define PWM5_LEB_COUNT_VAL12			0x0058  /* LEB value */
#define PWM5_LEB_COUNT_VAL13			0x0060  /* LEB value */
#define PWM5_LEB_COUNT_VAL14			0x0068  /* LEB value */
#define PWM5_LEB_COUNT_VAL15			0x0070  /* LEB value */
#define PWM5_LEB_COUNT_VAL16			0x0078  /* LEB value */
#define PWM5_LEB_COUNT_VAL17			0x0080  /* LEB value */
#define PWM5_LEB_COUNT_VAL18			0x0088  /* LEB value */
#define PWM5_LEB_COUNT_VAL19			0x0090  /* LEB value */
#define PWM5_LEB_COUNT_VAL20			0x0098  /* LEB value */
#define PWM5_LEB_COUNT_VAL21			0x00A0  /* LEB value */
#define PWM5_LEB_COUNT_VAL22			0x00A8  /* LEB value */
#define PWM5_LEB_COUNT_VAL23			0x00B0  /* LEB value */
#define PWM5_LEB_COUNT_VAL24			0x00B8  /* LEB value */
#define PWM5_LEB_COUNT_VAL25			0x00C0  /* LEB value */
#define PWM5_LEB_COUNT_VAL26			0x00C8  /* LEB value */
#define PWM5_LEB_COUNT_VAL27			0x00D0  /* LEB value */
#define PWM5_LEB_COUNT_VAL28			0x00D8  /* LEB value */
#define PWM5_LEB_COUNT_VAL29			0x00E0  /* LEB value */
#define PWM5_LEB_COUNT_VAL30			0x00E8  /* LEB value */
#define PWM5_LEB_COUNT_VAL31			0x00F0  /* LEB value */
#define PWM5_LEB_COUNT_VAL32			0x00F8  /* LEB value */
#define PWM5_LEB_COUNT_VAL33			0x0100  /* LEB value */
#define PWM5_LEB_COUNT_VAL34			0x0108  /* LEB value */
#define PWM5_LEB_COUNT_VAL35			0x0110  /* LEB value */
#define PWM5_LEB_COUNT_VAL36			0x0118  /* LEB value */
#define PWM5_LEB_COUNT_VAL37			0x0120  /* LEB value */
#define PWM5_LEB_COUNT_VAL38			0x0128  /* LEB value */
#define PWM5_LEB_COUNT_VAL39			0x0130  /* LEB value */
#define PWM5_LEB_COUNT_VAL40			0x0138  /* LEB value */
#define PWM5_LEB_COUNT_VAL41			0x0140  /* LEB value */
#define PWM5_LEB_COUNT_VAL42			0x0148  /* LEB value */
#define PWM5_LEB_COUNT_VAL43			0x0150  /* LEB value */
#define PWM5_LEB_COUNT_VAL44			0x0158  /* LEB value */
#define PWM5_LEB_COUNT_VAL45			0x0160  /* LEB value */
#define PWM5_LEB_COUNT_VAL46			0x0168  /* LEB value */
#define PWM5_LEB_COUNT_VAL47			0x0170  /* LEB value */
#define PWM5_LEB_COUNT_VAL48			0x0178  /* LEB value */
#define PWM5_LEB_COUNT_VAL49			0x0180  /* LEB value */
#define PWM5_LEB_COUNT_VAL50			0x0188  /* LEB value */
#define PWM5_LEB_COUNT_VAL51			0x0190  /* LEB value */
#define PWM5_LEB_COUNT_VAL52			0x0198  /* LEB value */
#define PWM5_LEB_COUNT_VAL53			0x01A0  /* LEB value */
#define PWM5_LEB_COUNT_VAL54			0x01A8  /* LEB value */
#define PWM5_LEB_COUNT_VAL55			0x01B0  /* LEB value */
#define PWM5_LEB_COUNT_VAL56			0x01B8  /* LEB value */
#define PWM5_LEB_COUNT_VAL57			0x01C0  /* LEB value */
#define PWM5_LEB_COUNT_VAL58			0x01C8  /* LEB value */
#define PWM5_LEB_COUNT_VAL59			0x01D0  /* LEB value */
#define PWM5_LEB_COUNT_VAL60			0x01D8  /* LEB value */
#define PWM5_LEB_COUNT_VAL61			0x01E0  /* LEB value */
#define PWM5_LEB_COUNT_VAL62			0x01E8  /* LEB value */
#define PWM5_LEB_COUNT_VAL63			0x01F0  /* LEB value */
#define PWM5_LEB_COUNT_VAL64			0x01F8  /* LEB value */
#define PWM5_LEB_COUNT_VAL65			0x0200  /* LEB value */
#define PWM5_LEB_COUNT_VAL66			0x0208  /* LEB value */
#define PWM5_LEB_COUNT_VAL67			0x0210  /* LEB value */
#define PWM5_LEB_COUNT_VAL68			0x0218  /* LEB value */
#define PWM5_LEB_COUNT_VAL69			0x0220  /* LEB value */
#define PWM5_LEB_COUNT_VAL70			0x0228  /* LEB value */
#define PWM5_LEB_COUNT_VAL71			0x0230  /* LEB value */
#define PWM5_LEB_COUNT_VAL72			0x0238  /* LEB value */
#define PWM5_LEB_COUNT_VAL73			0x0240  /* LEB value */
#define PWM5_LEB_COUNT_VAL74			0x0248  /* LEB value */
#define PWM5_LEB_COUNT_VAL75			0x0250  /* LEB value */
#define PWM5_LEB_COUNT_VAL76			0x0258  /* LEB value */
#define PWM5_LEB_COUNT_VAL77			0x0260  /* LEB value */
#define PWM5_LEB_COUNT_VAL78			0x0268  /* LEB value */
#define PWM5_LEB_COUNT_VAL79			0x0270  /* LEB value */
#define PWM5_LEB_COUNT_VAL80			0x0278  /* LEB value */
#define PWM5_LEB_COUNT_VAL81			0x0280  /* LEB value */
#define PWM5_LEB_COUNT_VAL82			0x0288  /* LEB value */
#define PWM5_LEB_COUNT_VAL83			0x0290  /* LEB value */
#define PWM5_LEB_COUNT_VAL84			0x0298  /* LEB value */
#define PWM5_LEB_COUNT_VAL85			0x02A0  /* LEB value */
#define PWM5_LEB_COUNT_VAL86			0x02A8  /* LEB value */
#define PWM5_LEB_COUNT_VAL87			0x02B0  /* LEB value */
#define PWM5_LEB_COUNT_VAL88			0x02B8  /* LEB value */
#define PWM5_LEB_COUNT_VAL89			0x02C0  /* LEB value */
#define PWM5_LEB_COUNT_VAL90			0x02C8  /* LEB value */
#define PWM5_LEB_COUNT_VAL91			0x02D0  /* LEB value */
#define PWM5_LEB_COUNT_VAL92			0x02D8  /* LEB value */
#define PWM5_LEB_COUNT_VAL93			0x02E0  /* LEB value */
#define PWM5_LEB_COUNT_VAL94			0x02E8  /* LEB value */
#define PWM5_LEB_COUNT_VAL95			0x02F0  /* LEB value */
#define PWM5_LEB_COUNT_VAL96			0x02F8  /* LEB value */
#define PWM5_LEB_COUNT_VAL97			0x0300  /* LEB value */
#define PWM5_LEB_COUNT_VAL98			0x0308  /* LEB value */
#define PWM5_LEB_COUNT_VAL99			0x0310  /* LEB value */
#define PWM5_LEB_COUNT_VAL100			0x0318  /* LEB value */
#define PWM5_LEB_COUNT_VAL101			0x0320  /* LEB value */
#define PWM5_LEB_COUNT_VAL102			0x0328  /* LEB value */
#define PWM5_LEB_COUNT_VAL103			0x0330  /* LEB value */
#define PWM5_LEB_COUNT_VAL104			0x0338  /* LEB value */
#define PWM5_LEB_COUNT_VAL105			0x0340  /* LEB value */
#define PWM5_LEB_COUNT_VAL106			0x0348  /* LEB value */
#define PWM5_LEB_COUNT_VAL107			0x0350  /* LEB value */
#define PWM5_LEB_COUNT_VAL108			0x0358  /* LEB value */
#define PWM5_LEB_COUNT_VAL109			0x0360  /* LEB value */
#define PWM5_LEB_COUNT_VAL110			0x0368  /* LEB value */
#define PWM5_LEB_COUNT_VAL111			0x0370  /* LEB value */
#define PWM5_LEB_COUNT_VAL112			0x0378  /* LEB value */
#define PWM5_LEB_COUNT_VAL113			0x0380  /* LEB value */
#define PWM5_LEB_COUNT_VAL114			0x0388  /* LEB value */
#define PWM5_LEB_COUNT_VAL115			0x0390  /* LEB value */
#define PWM5_LEB_COUNT_VAL116			0x0398  /* LEB value */
#define PWM5_LEB_COUNT_VAL117			0x03A0  /* LEB value */
#define PWM5_LEB_COUNT_VAL118			0x03A8  /* LEB value */
#define PWM5_LEB_COUNT_VAL119			0x03B0  /* LEB value */
#define PWM5_LEB_COUNT_VAL120			0x03B8  /* LEB value */
#define PWM5_LEB_COUNT_VAL121			0x03C0  /* LEB value */
#define PWM5_LEB_COUNT_VAL122			0x03C8  /* LEB value */
#define PWM5_LEB_COUNT_VAL123			0x03D0  /* LEB value */
#define PWM5_LEB_COUNT_VAL124			0x03D8  /* LEB value */
#define PWM5_LEB_COUNT_VAL125			0x03E0  /* LEB value */
#define PWM5_LEB_COUNT_VAL126			0x03E8  /* LEB value */
#define PWM5_LEB_COUNT_VAL127			0x03F0  /* LEB value */
#define PWM5_LEB_COUNT_VAL128			0x03F8  /* LEB value */





/*----------------------------------------------------------------------------------------------------*/
/* LEBCON6 onfiguration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM6_H_LEB_RISE_TRIG_EN			0x8000  /* Rising edge of PWMH will trigger LEB counter */
#define PWM6_H_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWMH */

#define PWM6_H_LEB_FALL_TRIG_EN			0x4000  /* Falling edge of PWMH will trigger LEB counter */
#define PWM6_H_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWMH */

#define PWM6_L_LEB_RISE_TRIG_EN			0x2000  /* Rising edge of PWML will trigger LEB counter */
#define PWM6_L_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWML */

#define PWM6_L_LEB_FALL_TRIG_EN			0x1000  /* Falling edge of PWML will trigger LEB counter */
#define PWM6_L_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWML */

#define PWM6_LEB_FLT_IP_EN				0x0800  /* LEB is applied to the selected fault Input */
#define PWM6_LEB_FLT_IP_DIS				0x0000  /* LEB is not applied to the selected fault Input */ 

#define PWM6_LEB_CL_IP_EN				0x0400  /* LEB is applied to the selected Current Limit Input */
#define PWM6_LEB_CL_IP_DIS				0x0000  /* LEB is not applied to the selected Current Limit Input */

#define PWM6_LEB_COUNT_VAL1				0x0000  /* LEB value */
#define PWM6_LEB_COUNT_VAL2				0x0008  /* LEB value */
#define PWM6_LEB_COUNT_VAL3				0x0010  /* LEB value */
#define PWM6_LEB_COUNT_VAL4				0x0018  /* LEB value */
#define PWM6_LEB_COUNT_VAL5				0x0020  /* LEB value */
#define PWM6_LEB_COUNT_VAL6				0x0028  /* LEB value */
#define PWM6_LEB_COUNT_VAL7				0x0030  /* LEB value */
#define PWM6_LEB_COUNT_VAL8				0x0038  /* LEB value */
#define PWM6_LEB_COUNT_VAL9				0x0040  /* LEB value */
#define PWM6_LEB_COUNT_VAL10			0x0048  /* LEB value */
#define PWM6_LEB_COUNT_VAL11			0x0050  /* LEB value */
#define PWM6_LEB_COUNT_VAL12			0x0058  /* LEB value */
#define PWM6_LEB_COUNT_VAL13			0x0060  /* LEB value */
#define PWM6_LEB_COUNT_VAL14			0x0068  /* LEB value */
#define PWM6_LEB_COUNT_VAL15			0x0070  /* LEB value */
#define PWM6_LEB_COUNT_VAL16			0x0078  /* LEB value */
#define PWM6_LEB_COUNT_VAL17			0x0080  /* LEB value */
#define PWM6_LEB_COUNT_VAL18			0x0088  /* LEB value */
#define PWM6_LEB_COUNT_VAL19			0x0090  /* LEB value */
#define PWM6_LEB_COUNT_VAL20			0x0098  /* LEB value */
#define PWM6_LEB_COUNT_VAL21			0x00A0  /* LEB value */
#define PWM6_LEB_COUNT_VAL22			0x00A8  /* LEB value */
#define PWM6_LEB_COUNT_VAL23			0x00B0  /* LEB value */
#define PWM6_LEB_COUNT_VAL24			0x00B8  /* LEB value */
#define PWM6_LEB_COUNT_VAL25			0x00C0  /* LEB value */
#define PWM6_LEB_COUNT_VAL26			0x00C8  /* LEB value */
#define PWM6_LEB_COUNT_VAL27			0x00D0  /* LEB value */
#define PWM6_LEB_COUNT_VAL28			0x00D8  /* LEB value */
#define PWM6_LEB_COUNT_VAL29			0x00E0  /* LEB value */
#define PWM6_LEB_COUNT_VAL30			0x00E8  /* LEB value */
#define PWM6_LEB_COUNT_VAL31			0x00F0  /* LEB value */
#define PWM6_LEB_COUNT_VAL32			0x00F8  /* LEB value */
#define PWM6_LEB_COUNT_VAL33			0x0100  /* LEB value */
#define PWM6_LEB_COUNT_VAL34			0x0108  /* LEB value */
#define PWM6_LEB_COUNT_VAL35			0x0110  /* LEB value */
#define PWM6_LEB_COUNT_VAL36			0x0118  /* LEB value */
#define PWM6_LEB_COUNT_VAL37			0x0120  /* LEB value */
#define PWM6_LEB_COUNT_VAL38			0x0128  /* LEB value */
#define PWM6_LEB_COUNT_VAL39			0x0130  /* LEB value */
#define PWM6_LEB_COUNT_VAL40			0x0138  /* LEB value */
#define PWM6_LEB_COUNT_VAL41			0x0140  /* LEB value */
#define PWM6_LEB_COUNT_VAL42			0x0148  /* LEB value */
#define PWM6_LEB_COUNT_VAL43			0x0150  /* LEB value */
#define PWM6_LEB_COUNT_VAL44			0x0158  /* LEB value */
#define PWM6_LEB_COUNT_VAL45			0x0160  /* LEB value */
#define PWM6_LEB_COUNT_VAL46			0x0168  /* LEB value */
#define PWM6_LEB_COUNT_VAL47			0x0170  /* LEB value */
#define PWM6_LEB_COUNT_VAL48			0x0178  /* LEB value */
#define PWM6_LEB_COUNT_VAL49			0x0180  /* LEB value */
#define PWM6_LEB_COUNT_VAL50			0x0188  /* LEB value */
#define PWM6_LEB_COUNT_VAL51			0x0190  /* LEB value */
#define PWM6_LEB_COUNT_VAL52			0x0198  /* LEB value */
#define PWM6_LEB_COUNT_VAL53			0x01A0  /* LEB value */
#define PWM6_LEB_COUNT_VAL54			0x01A8  /* LEB value */
#define PWM6_LEB_COUNT_VAL55			0x01B0  /* LEB value */
#define PWM6_LEB_COUNT_VAL56			0x01B8  /* LEB value */
#define PWM6_LEB_COUNT_VAL57			0x01C0  /* LEB value */
#define PWM6_LEB_COUNT_VAL58			0x01C8  /* LEB value */
#define PWM6_LEB_COUNT_VAL59			0x01D0  /* LEB value */
#define PWM6_LEB_COUNT_VAL60			0x01D8  /* LEB value */
#define PWM6_LEB_COUNT_VAL61			0x01E0  /* LEB value */
#define PWM6_LEB_COUNT_VAL62			0x01E8  /* LEB value */
#define PWM6_LEB_COUNT_VAL63			0x01F0  /* LEB value */
#define PWM6_LEB_COUNT_VAL64			0x01F8  /* LEB value */
#define PWM6_LEB_COUNT_VAL65			0x0200  /* LEB value */
#define PWM6_LEB_COUNT_VAL66			0x0208  /* LEB value */
#define PWM6_LEB_COUNT_VAL67			0x0210  /* LEB value */
#define PWM6_LEB_COUNT_VAL68			0x0218  /* LEB value */
#define PWM6_LEB_COUNT_VAL69			0x0220  /* LEB value */
#define PWM6_LEB_COUNT_VAL70			0x0228  /* LEB value */
#define PWM6_LEB_COUNT_VAL71			0x0230  /* LEB value */
#define PWM6_LEB_COUNT_VAL72			0x0238  /* LEB value */
#define PWM6_LEB_COUNT_VAL73			0x0240  /* LEB value */
#define PWM6_LEB_COUNT_VAL74			0x0248  /* LEB value */
#define PWM6_LEB_COUNT_VAL75			0x0250  /* LEB value */
#define PWM6_LEB_COUNT_VAL76			0x0258  /* LEB value */
#define PWM6_LEB_COUNT_VAL77			0x0260  /* LEB value */
#define PWM6_LEB_COUNT_VAL78			0x0268  /* LEB value */
#define PWM6_LEB_COUNT_VAL79			0x0270  /* LEB value */
#define PWM6_LEB_COUNT_VAL80			0x0278  /* LEB value */
#define PWM6_LEB_COUNT_VAL81			0x0280  /* LEB value */
#define PWM6_LEB_COUNT_VAL82			0x0288  /* LEB value */
#define PWM6_LEB_COUNT_VAL83			0x0290  /* LEB value */
#define PWM6_LEB_COUNT_VAL84			0x0298  /* LEB value */
#define PWM6_LEB_COUNT_VAL85			0x02A0  /* LEB value */
#define PWM6_LEB_COUNT_VAL86			0x02A8  /* LEB value */
#define PWM6_LEB_COUNT_VAL87			0x02B0  /* LEB value */
#define PWM6_LEB_COUNT_VAL88			0x02B8  /* LEB value */
#define PWM6_LEB_COUNT_VAL89			0x02C0  /* LEB value */
#define PWM6_LEB_COUNT_VAL90			0x02C8  /* LEB value */
#define PWM6_LEB_COUNT_VAL91			0x02D0  /* LEB value */
#define PWM6_LEB_COUNT_VAL92			0x02D8  /* LEB value */
#define PWM6_LEB_COUNT_VAL93			0x02E0  /* LEB value */
#define PWM6_LEB_COUNT_VAL94			0x02E8  /* LEB value */
#define PWM6_LEB_COUNT_VAL95			0x02F0  /* LEB value */
#define PWM6_LEB_COUNT_VAL96			0x02F8  /* LEB value */
#define PWM6_LEB_COUNT_VAL97			0x0300  /* LEB value */
#define PWM6_LEB_COUNT_VAL98			0x0308  /* LEB value */
#define PWM6_LEB_COUNT_VAL99			0x0310  /* LEB value */
#define PWM6_LEB_COUNT_VAL100			0x0318  /* LEB value */
#define PWM6_LEB_COUNT_VAL101			0x0320  /* LEB value */
#define PWM6_LEB_COUNT_VAL102			0x0328  /* LEB value */
#define PWM6_LEB_COUNT_VAL103			0x0330  /* LEB value */
#define PWM6_LEB_COUNT_VAL104			0x0338  /* LEB value */
#define PWM6_LEB_COUNT_VAL105			0x0340  /* LEB value */
#define PWM6_LEB_COUNT_VAL106			0x0348  /* LEB value */
#define PWM6_LEB_COUNT_VAL107			0x0350  /* LEB value */
#define PWM6_LEB_COUNT_VAL108			0x0358  /* LEB value */
#define PWM6_LEB_COUNT_VAL109			0x0360  /* LEB value */
#define PWM6_LEB_COUNT_VAL110			0x0368  /* LEB value */
#define PWM6_LEB_COUNT_VAL111			0x0370  /* LEB value */
#define PWM6_LEB_COUNT_VAL112			0x0378  /* LEB value */
#define PWM6_LEB_COUNT_VAL113			0x0380  /* LEB value */
#define PWM6_LEB_COUNT_VAL114			0x0388  /* LEB value */
#define PWM6_LEB_COUNT_VAL115			0x0390  /* LEB value */
#define PWM6_LEB_COUNT_VAL116			0x0398  /* LEB value */
#define PWM6_LEB_COUNT_VAL117			0x03A0  /* LEB value */
#define PWM6_LEB_COUNT_VAL118			0x03A8  /* LEB value */
#define PWM6_LEB_COUNT_VAL119			0x03B0  /* LEB value */
#define PWM6_LEB_COUNT_VAL120			0x03B8  /* LEB value */
#define PWM6_LEB_COUNT_VAL121			0x03C0  /* LEB value */
#define PWM6_LEB_COUNT_VAL122			0x03C8  /* LEB value */
#define PWM6_LEB_COUNT_VAL123			0x03D0  /* LEB value */
#define PWM6_LEB_COUNT_VAL124			0x03D8  /* LEB value */
#define PWM6_LEB_COUNT_VAL125			0x03E0  /* LEB value */
#define PWM6_LEB_COUNT_VAL126			0x03E8  /* LEB value */
#define PWM6_LEB_COUNT_VAL127			0x03F0  /* LEB value */
#define PWM6_LEB_COUNT_VAL128			0x03F8  /* LEB value */






/*----------------------------------------------------------------------------------------------------*/
/* LEBCON7 configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM7_H_LEB_RISE_TRIG_EN			0x8000  /* Rising edge of PWMH will trigger LEB counter */
#define PWM7_H_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWMH */

#define PWM7_H_LEB_FALL_TRIG_EN			0x4000  /* Falling edge of PWMH will trigger LEB counter */
#define PWM7_H_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWMH */

#define PWM7_L_LEB_RISE_TRIG_EN			0x2000  /* Rising edge of PWML will trigger LEB counter */
#define PWM7_L_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWML */

#define PWM7_L_LEB_FALL_TRIG_EN			0x1000  /* Falling edge of PWML will trigger LEB counter */
#define PWM7_L_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWML */

#define PWM7_LEB_FLT_IP_EN				0x0800  /* LEB is applied to the selected fault Input */
#define PWM7_LEB_FLT_IP_DIS				0x0000  /* LEB is not applied to the selected fault Input */ 

#define PWM7_LEB_CL_IP_EN				0x0400  /* LEB is applied to the selected Current Limit Input */
#define PWM7_LEB_CL_IP_DIS				0x0000  /* LEB is not applied to the selected Current Limit Input */

#define PWM7_LEB_COUNT_VAL1				0x0000  /* LEB value */
#define PWM7_LEB_COUNT_VAL2				0x0008  /* LEB value */
#define PWM7_LEB_COUNT_VAL3				0x0010  /* LEB value */
#define PWM7_LEB_COUNT_VAL4				0x0018  /* LEB value */
#define PWM7_LEB_COUNT_VAL5				0x0020  /* LEB value */
#define PWM7_LEB_COUNT_VAL6				0x0028  /* LEB value */
#define PWM7_LEB_COUNT_VAL7				0x0030  /* LEB value */
#define PWM7_LEB_COUNT_VAL8				0x0038  /* LEB value */
#define PWM7_LEB_COUNT_VAL9				0x0040  /* LEB value */
#define PWM7_LEB_COUNT_VAL10			0x0048  /* LEB value */
#define PWM7_LEB_COUNT_VAL11			0x0050  /* LEB value */
#define PWM7_LEB_COUNT_VAL12			0x0058  /* LEB value */
#define PWM7_LEB_COUNT_VAL13			0x0060  /* LEB value */
#define PWM7_LEB_COUNT_VAL14			0x0068  /* LEB value */
#define PWM7_LEB_COUNT_VAL15			0x0070  /* LEB value */
#define PWM7_LEB_COUNT_VAL16			0x0078  /* LEB value */
#define PWM7_LEB_COUNT_VAL17			0x0080  /* LEB value */
#define PWM7_LEB_COUNT_VAL18			0x0088  /* LEB value */
#define PWM7_LEB_COUNT_VAL19			0x0090  /* LEB value */
#define PWM7_LEB_COUNT_VAL20			0x0098  /* LEB value */
#define PWM7_LEB_COUNT_VAL21			0x00A0  /* LEB value */
#define PWM7_LEB_COUNT_VAL22			0x00A8  /* LEB value */
#define PWM7_LEB_COUNT_VAL23			0x00B0  /* LEB value */
#define PWM7_LEB_COUNT_VAL24			0x00B8  /* LEB value */
#define PWM7_LEB_COUNT_VAL25			0x00C0  /* LEB value */
#define PWM7_LEB_COUNT_VAL26			0x00C8  /* LEB value */
#define PWM7_LEB_COUNT_VAL27			0x00D0  /* LEB value */
#define PWM7_LEB_COUNT_VAL28			0x00D8  /* LEB value */
#define PWM7_LEB_COUNT_VAL29			0x00E0  /* LEB value */
#define PWM7_LEB_COUNT_VAL30			0x00E8  /* LEB value */
#define PWM7_LEB_COUNT_VAL31			0x00F0  /* LEB value */
#define PWM7_LEB_COUNT_VAL32			0x00F8  /* LEB value */
#define PWM7_LEB_COUNT_VAL33			0x0100  /* LEB value */
#define PWM7_LEB_COUNT_VAL34			0x0108  /* LEB value */
#define PWM7_LEB_COUNT_VAL35			0x0110  /* LEB value */
#define PWM7_LEB_COUNT_VAL36			0x0118  /* LEB value */
#define PWM7_LEB_COUNT_VAL37			0x0120  /* LEB value */
#define PWM7_LEB_COUNT_VAL38			0x0128  /* LEB value */
#define PWM7_LEB_COUNT_VAL39			0x0130  /* LEB value */
#define PWM7_LEB_COUNT_VAL40			0x0138  /* LEB value */
#define PWM7_LEB_COUNT_VAL41			0x0140  /* LEB value */
#define PWM7_LEB_COUNT_VAL42			0x0148  /* LEB value */
#define PWM7_LEB_COUNT_VAL43			0x0150  /* LEB value */
#define PWM7_LEB_COUNT_VAL44			0x0158  /* LEB value */
#define PWM7_LEB_COUNT_VAL45			0x0160  /* LEB value */
#define PWM7_LEB_COUNT_VAL46			0x0168  /* LEB value */
#define PWM7_LEB_COUNT_VAL47			0x0170  /* LEB value */
#define PWM7_LEB_COUNT_VAL48			0x0178  /* LEB value */
#define PWM7_LEB_COUNT_VAL49			0x0180  /* LEB value */
#define PWM7_LEB_COUNT_VAL50			0x0188  /* LEB value */
#define PWM7_LEB_COUNT_VAL51			0x0190  /* LEB value */
#define PWM7_LEB_COUNT_VAL52			0x0198  /* LEB value */
#define PWM7_LEB_COUNT_VAL53			0x01A0  /* LEB value */
#define PWM7_LEB_COUNT_VAL54			0x01A8  /* LEB value */
#define PWM7_LEB_COUNT_VAL55			0x01B0  /* LEB value */
#define PWM7_LEB_COUNT_VAL56			0x01B8  /* LEB value */
#define PWM7_LEB_COUNT_VAL57			0x01C0  /* LEB value */
#define PWM7_LEB_COUNT_VAL58			0x01C8  /* LEB value */
#define PWM7_LEB_COUNT_VAL59			0x01D0  /* LEB value */
#define PWM7_LEB_COUNT_VAL60			0x01D8  /* LEB value */
#define PWM7_LEB_COUNT_VAL61			0x01E0  /* LEB value */
#define PWM7_LEB_COUNT_VAL62			0x01E8  /* LEB value */
#define PWM7_LEB_COUNT_VAL63			0x01F0  /* LEB value */
#define PWM7_LEB_COUNT_VAL64			0x01F8  /* LEB value */
#define PWM7_LEB_COUNT_VAL65			0x0200  /* LEB value */
#define PWM7_LEB_COUNT_VAL66			0x0208  /* LEB value */
#define PWM7_LEB_COUNT_VAL67			0x0210  /* LEB value */
#define PWM7_LEB_COUNT_VAL68			0x0218  /* LEB value */
#define PWM7_LEB_COUNT_VAL69			0x0220  /* LEB value */
#define PWM7_LEB_COUNT_VAL70			0x0228  /* LEB value */
#define PWM7_LEB_COUNT_VAL71			0x0230  /* LEB value */
#define PWM7_LEB_COUNT_VAL72			0x0238  /* LEB value */
#define PWM7_LEB_COUNT_VAL73			0x0240  /* LEB value */
#define PWM7_LEB_COUNT_VAL74			0x0248  /* LEB value */
#define PWM7_LEB_COUNT_VAL75			0x0250  /* LEB value */
#define PWM7_LEB_COUNT_VAL76			0x0258  /* LEB value */
#define PWM7_LEB_COUNT_VAL77			0x0260  /* LEB value */
#define PWM7_LEB_COUNT_VAL78			0x0268  /* LEB value */
#define PWM7_LEB_COUNT_VAL79			0x0270  /* LEB value */
#define PWM7_LEB_COUNT_VAL80			0x0278  /* LEB value */
#define PWM7_LEB_COUNT_VAL81			0x0280  /* LEB value */
#define PWM7_LEB_COUNT_VAL82			0x0288  /* LEB value */
#define PWM7_LEB_COUNT_VAL83			0x0290  /* LEB value */
#define PWM7_LEB_COUNT_VAL84			0x0298  /* LEB value */
#define PWM7_LEB_COUNT_VAL85			0x02A0  /* LEB value */
#define PWM7_LEB_COUNT_VAL86			0x02A8  /* LEB value */
#define PWM7_LEB_COUNT_VAL87			0x02B0  /* LEB value */
#define PWM7_LEB_COUNT_VAL88			0x02B8  /* LEB value */
#define PWM7_LEB_COUNT_VAL89			0x02C0  /* LEB value */
#define PWM7_LEB_COUNT_VAL90			0x02C8  /* LEB value */
#define PWM7_LEB_COUNT_VAL91			0x02D0  /* LEB value */
#define PWM7_LEB_COUNT_VAL92			0x02D8  /* LEB value */
#define PWM7_LEB_COUNT_VAL93			0x02E0  /* LEB value */
#define PWM7_LEB_COUNT_VAL94			0x02E8  /* LEB value */
#define PWM7_LEB_COUNT_VAL95			0x02F0  /* LEB value */
#define PWM7_LEB_COUNT_VAL96			0x02F8  /* LEB value */
#define PWM7_LEB_COUNT_VAL97			0x0300  /* LEB value */
#define PWM7_LEB_COUNT_VAL98			0x0308  /* LEB value */
#define PWM7_LEB_COUNT_VAL99			0x0310  /* LEB value */
#define PWM7_LEB_COUNT_VAL100			0x0318  /* LEB value */
#define PWM7_LEB_COUNT_VAL101			0x0320  /* LEB value */
#define PWM7_LEB_COUNT_VAL102			0x0328  /* LEB value */
#define PWM7_LEB_COUNT_VAL103			0x0330  /* LEB value */
#define PWM7_LEB_COUNT_VAL104			0x0338  /* LEB value */
#define PWM7_LEB_COUNT_VAL105			0x0340  /* LEB value */
#define PWM7_LEB_COUNT_VAL106			0x0348  /* LEB value */
#define PWM7_LEB_COUNT_VAL107			0x0350  /* LEB value */
#define PWM7_LEB_COUNT_VAL108			0x0358  /* LEB value */
#define PWM7_LEB_COUNT_VAL109			0x0360  /* LEB value */
#define PWM7_LEB_COUNT_VAL110			0x0368  /* LEB value */
#define PWM7_LEB_COUNT_VAL111			0x0370  /* LEB value */
#define PWM7_LEB_COUNT_VAL112			0x0378  /* LEB value */
#define PWM7_LEB_COUNT_VAL113			0x0380  /* LEB value */
#define PWM7_LEB_COUNT_VAL114			0x0388  /* LEB value */
#define PWM7_LEB_COUNT_VAL115			0x0390  /* LEB value */
#define PWM7_LEB_COUNT_VAL116			0x0398  /* LEB value */
#define PWM7_LEB_COUNT_VAL117			0x03A0  /* LEB value */
#define PWM7_LEB_COUNT_VAL118			0x03A8  /* LEB value */
#define PWM7_LEB_COUNT_VAL119			0x03B0  /* LEB value */
#define PWM7_LEB_COUNT_VAL120			0x03B8  /* LEB value */
#define PWM7_LEB_COUNT_VAL121			0x03C0  /* LEB value */
#define PWM7_LEB_COUNT_VAL122			0x03C8  /* LEB value */
#define PWM7_LEB_COUNT_VAL123			0x03D0  /* LEB value */
#define PWM7_LEB_COUNT_VAL124			0x03D8  /* LEB value */
#define PWM7_LEB_COUNT_VAL125			0x03E0  /* LEB value */
#define PWM7_LEB_COUNT_VAL126			0x03E8  /* LEB value */
#define PWM7_LEB_COUNT_VAL127			0x03F0  /* LEB value */
#define PWM7_LEB_COUNT_VAL128			0x03F8  /* LEB value */


/*----------------------------------------------------------------------------------------------------*/
/* LEBCON8 configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM8_H_LEB_RISE_TRIG_EN			0x8000  /* Rising edge of PWMH will trigger LEB counter */
#define PWM8_H_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWMH */

#define PWM8_H_LEB_FALL_TRIG_EN			0x4000  /* Falling edge of PWMH will trigger LEB counter */
#define PWM8_H_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWMH */

#define PWM8_L_LEB_RISE_TRIG_EN			0x2000  /* Rising edge of PWML will trigger LEB counter */
#define PWM8_L_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWML */

#define PWM8_L_LEB_FALL_TRIG_EN			0x1000  /* Falling edge of PWML will trigger LEB counter */
#define PWM8_L_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWML */

#define PWM8_LEB_FLT_IP_EN				0x0800  /* LEB is applied to the selected fault Input */
#define PWM8_LEB_FLT_IP_DIS				0x0000  /* LEB is not applied to the selected fault Input */ 

#define PWM8_LEB_CL_IP_EN				0x0400  /* LEB is applied to the selected Current Limit Input */
#define PWM8_LEB_CL_IP_DIS				0x0000  /* LEB is not applied to the selected Current Limit Input */

#define PWM8_LEB_COUNT_VAL1				0x0000  /* LEB value */
#define PWM8_LEB_COUNT_VAL2				0x0008  /* LEB value */
#define PWM8_LEB_COUNT_VAL3				0x0010  /* LEB value */
#define PWM8_LEB_COUNT_VAL4				0x0018  /* LEB value */
#define PWM8_LEB_COUNT_VAL5				0x0020  /* LEB value */
#define PWM8_LEB_COUNT_VAL6				0x0028  /* LEB value */
#define PWM8_LEB_COUNT_VAL7				0x0030  /* LEB value */
#define PWM8_LEB_COUNT_VAL8				0x0038  /* LEB value */
#define PWM8_LEB_COUNT_VAL9				0x0040  /* LEB value */
#define PWM8_LEB_COUNT_VAL10			0x0048  /* LEB value */
#define PWM8_LEB_COUNT_VAL11			0x0050  /* LEB value */
#define PWM8_LEB_COUNT_VAL12			0x0058  /* LEB value */
#define PWM8_LEB_COUNT_VAL13			0x0060  /* LEB value */
#define PWM8_LEB_COUNT_VAL14			0x0068  /* LEB value */
#define PWM8_LEB_COUNT_VAL15			0x0070  /* LEB value */
#define PWM8_LEB_COUNT_VAL16			0x0078  /* LEB value */
#define PWM8_LEB_COUNT_VAL17			0x0080  /* LEB value */
#define PWM8_LEB_COUNT_VAL18			0x0088  /* LEB value */
#define PWM8_LEB_COUNT_VAL19			0x0090  /* LEB value */
#define PWM8_LEB_COUNT_VAL20			0x0098  /* LEB value */
#define PWM8_LEB_COUNT_VAL21			0x00A0  /* LEB value */
#define PWM8_LEB_COUNT_VAL22			0x00A8  /* LEB value */
#define PWM8_LEB_COUNT_VAL23			0x00B0  /* LEB value */
#define PWM8_LEB_COUNT_VAL24			0x00B8  /* LEB value */
#define PWM8_LEB_COUNT_VAL25			0x00C0  /* LEB value */
#define PWM8_LEB_COUNT_VAL26			0x00C8  /* LEB value */
#define PWM8_LEB_COUNT_VAL27			0x00D0  /* LEB value */
#define PWM8_LEB_COUNT_VAL28			0x00D8  /* LEB value */
#define PWM8_LEB_COUNT_VAL29			0x00E0  /* LEB value */
#define PWM8_LEB_COUNT_VAL30			0x00E8  /* LEB value */
#define PWM8_LEB_COUNT_VAL31			0x00F0  /* LEB value */
#define PWM8_LEB_COUNT_VAL32			0x00F8  /* LEB value */
#define PWM8_LEB_COUNT_VAL33			0x0100  /* LEB value */
#define PWM8_LEB_COUNT_VAL34			0x0108  /* LEB value */
#define PWM8_LEB_COUNT_VAL35			0x0110  /* LEB value */
#define PWM8_LEB_COUNT_VAL36			0x0118  /* LEB value */
#define PWM8_LEB_COUNT_VAL37			0x0120  /* LEB value */
#define PWM8_LEB_COUNT_VAL38			0x0128  /* LEB value */
#define PWM8_LEB_COUNT_VAL39			0x0130  /* LEB value */
#define PWM8_LEB_COUNT_VAL40			0x0138  /* LEB value */
#define PWM8_LEB_COUNT_VAL41			0x0140  /* LEB value */
#define PWM8_LEB_COUNT_VAL42			0x0148  /* LEB value */
#define PWM8_LEB_COUNT_VAL43			0x0150  /* LEB value */
#define PWM8_LEB_COUNT_VAL44			0x0158  /* LEB value */
#define PWM8_LEB_COUNT_VAL45			0x0160  /* LEB value */
#define PWM8_LEB_COUNT_VAL46			0x0168  /* LEB value */
#define PWM8_LEB_COUNT_VAL47			0x0170  /* LEB value */
#define PWM8_LEB_COUNT_VAL48			0x0178  /* LEB value */
#define PWM8_LEB_COUNT_VAL49			0x0180  /* LEB value */
#define PWM8_LEB_COUNT_VAL50			0x0188  /* LEB value */
#define PWM8_LEB_COUNT_VAL51			0x0190  /* LEB value */
#define PWM8_LEB_COUNT_VAL52			0x0198  /* LEB value */
#define PWM8_LEB_COUNT_VAL53			0x01A0  /* LEB value */
#define PWM8_LEB_COUNT_VAL54			0x01A8  /* LEB value */
#define PWM8_LEB_COUNT_VAL55			0x01B0  /* LEB value */
#define PWM8_LEB_COUNT_VAL56			0x01B8  /* LEB value */
#define PWM8_LEB_COUNT_VAL57			0x01C0  /* LEB value */
#define PWM8_LEB_COUNT_VAL58			0x01C8  /* LEB value */
#define PWM8_LEB_COUNT_VAL59			0x01D0  /* LEB value */
#define PWM8_LEB_COUNT_VAL60			0x01D8  /* LEB value */
#define PWM8_LEB_COUNT_VAL61			0x01E0  /* LEB value */
#define PWM8_LEB_COUNT_VAL62			0x01E8  /* LEB value */
#define PWM8_LEB_COUNT_VAL63			0x01F0  /* LEB value */
#define PWM8_LEB_COUNT_VAL64			0x01F8  /* LEB value */
#define PWM8_LEB_COUNT_VAL65			0x0200  /* LEB value */
#define PWM8_LEB_COUNT_VAL66			0x0208  /* LEB value */
#define PWM8_LEB_COUNT_VAL67			0x0210  /* LEB value */
#define PWM8_LEB_COUNT_VAL68			0x0218  /* LEB value */
#define PWM8_LEB_COUNT_VAL69			0x0220  /* LEB value */
#define PWM8_LEB_COUNT_VAL70			0x0228  /* LEB value */
#define PWM8_LEB_COUNT_VAL71			0x0230  /* LEB value */
#define PWM8_LEB_COUNT_VAL72			0x0238  /* LEB value */
#define PWM8_LEB_COUNT_VAL73			0x0240  /* LEB value */
#define PWM8_LEB_COUNT_VAL74			0x0248  /* LEB value */
#define PWM8_LEB_COUNT_VAL75			0x0250  /* LEB value */
#define PWM8_LEB_COUNT_VAL76			0x0258  /* LEB value */
#define PWM8_LEB_COUNT_VAL77			0x0260  /* LEB value */
#define PWM8_LEB_COUNT_VAL78			0x0268  /* LEB value */
#define PWM8_LEB_COUNT_VAL79			0x0270  /* LEB value */
#define PWM8_LEB_COUNT_VAL80			0x0278  /* LEB value */
#define PWM8_LEB_COUNT_VAL81			0x0280  /* LEB value */
#define PWM8_LEB_COUNT_VAL82			0x0288  /* LEB value */
#define PWM8_LEB_COUNT_VAL83			0x0290  /* LEB value */
#define PWM8_LEB_COUNT_VAL84			0x0298  /* LEB value */
#define PWM8_LEB_COUNT_VAL85			0x02A0  /* LEB value */
#define PWM8_LEB_COUNT_VAL86			0x02A8  /* LEB value */
#define PWM8_LEB_COUNT_VAL87			0x02B0  /* LEB value */
#define PWM8_LEB_COUNT_VAL88			0x02B8  /* LEB value */
#define PWM8_LEB_COUNT_VAL89			0x02C0  /* LEB value */
#define PWM8_LEB_COUNT_VAL90			0x02C8  /* LEB value */
#define PWM8_LEB_COUNT_VAL91			0x02D0  /* LEB value */
#define PWM8_LEB_COUNT_VAL92			0x02D8  /* LEB value */
#define PWM8_LEB_COUNT_VAL93			0x02E0  /* LEB value */
#define PWM8_LEB_COUNT_VAL94			0x02E8  /* LEB value */
#define PWM8_LEB_COUNT_VAL95			0x02F0  /* LEB value */
#define PWM8_LEB_COUNT_VAL96			0x02F8  /* LEB value */
#define PWM8_LEB_COUNT_VAL97			0x0300  /* LEB value */
#define PWM8_LEB_COUNT_VAL98			0x0308  /* LEB value */
#define PWM8_LEB_COUNT_VAL99			0x0310  /* LEB value */
#define PWM8_LEB_COUNT_VAL100			0x0318  /* LEB value */
#define PWM8_LEB_COUNT_VAL101			0x0320  /* LEB value */
#define PWM8_LEB_COUNT_VAL102			0x0328  /* LEB value */
#define PWM8_LEB_COUNT_VAL103			0x0330  /* LEB value */
#define PWM8_LEB_COUNT_VAL104			0x0338  /* LEB value */
#define PWM8_LEB_COUNT_VAL105			0x0340  /* LEB value */
#define PWM8_LEB_COUNT_VAL106			0x0348  /* LEB value */
#define PWM8_LEB_COUNT_VAL107			0x0350  /* LEB value */
#define PWM8_LEB_COUNT_VAL108			0x0358  /* LEB value */
#define PWM8_LEB_COUNT_VAL109			0x0360  /* LEB value */
#define PWM8_LEB_COUNT_VAL110			0x0368  /* LEB value */
#define PWM8_LEB_COUNT_VAL111			0x0370  /* LEB value */
#define PWM8_LEB_COUNT_VAL112			0x0378  /* LEB value */
#define PWM8_LEB_COUNT_VAL113			0x0380  /* LEB value */
#define PWM8_LEB_COUNT_VAL114			0x0388  /* LEB value */
#define PWM8_LEB_COUNT_VAL115			0x0390  /* LEB value */
#define PWM8_LEB_COUNT_VAL116			0x0398  /* LEB value */
#define PWM8_LEB_COUNT_VAL117			0x03A0  /* LEB value */
#define PWM8_LEB_COUNT_VAL118			0x03A8  /* LEB value */
#define PWM8_LEB_COUNT_VAL119			0x03B0  /* LEB value */
#define PWM8_LEB_COUNT_VAL120			0x03B8  /* LEB value */
#define PWM8_LEB_COUNT_VAL121			0x03C0  /* LEB value */
#define PWM8_LEB_COUNT_VAL122			0x03C8  /* LEB value */
#define PWM8_LEB_COUNT_VAL123			0x03D0  /* LEB value */
#define PWM8_LEB_COUNT_VAL124			0x03D8  /* LEB value */
#define PWM8_LEB_COUNT_VAL125			0x03E0  /* LEB value */
#define PWM8_LEB_COUNT_VAL126			0x03E8  /* LEB value */
#define PWM8_LEB_COUNT_VAL127			0x03F0  /* LEB value */
#define PWM8_LEB_COUNT_VAL128			0x03F8  /* LEB value */



/*----------------------------------------------------------------------------------------------------*/
/* LEBCON9 configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM9_H_LEB_RISE_TRIG_EN			0x8000  /* Rising edge of PWMH will trigger LEB counter */
#define PWM9_H_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWMH */

#define PWM9_H_LEB_FALL_TRIG_EN			0x4000  /* Falling edge of PWMH will trigger LEB counter */
#define PWM9_H_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWMH */

#define PWM9_L_LEB_RISE_TRIG_EN			0x2000  /* Rising edge of PWML will trigger LEB counter */
#define PWM9_L_LEB_RISE_TRIG_DIS		0x0000  /* LEB ignores rising edge of PWML */

#define PWM9_L_LEB_FALL_TRIG_EN			0x1000  /* Falling edge of PWML will trigger LEB counter */
#define PWM9_L_LEB_FALL_TRIG_DIS		0x0000  /* LEB ignores Falling edge of PWML */

#define PWM9_LEB_FLT_IP_EN				0x0800  /* LEB is applied to the selected fault Input */
#define PWM9_LEB_FLT_IP_DIS				0x0000  /* LEB is not applied to the selected fault Input */ 

#define PWM9_LEB_CL_IP_EN				0x0400  /* LEB is applied to the selected Current Limit Input */
#define PWM9_LEB_CL_IP_DIS				0x0000  /* LEB is not applied to the selected Current Limit Input */

#define PWM9_LEB_COUNT_VAL1				0x0000  /* LEB value */
#define PWM9_LEB_COUNT_VAL2				0x0008  /* LEB value */
#define PWM9_LEB_COUNT_VAL3				0x0010  /* LEB value */
#define PWM9_LEB_COUNT_VAL4				0x0018  /* LEB value */
#define PWM9_LEB_COUNT_VAL5				0x0020  /* LEB value */
#define PWM9_LEB_COUNT_VAL6				0x0028  /* LEB value */
#define PWM9_LEB_COUNT_VAL7				0x0030  /* LEB value */
#define PWM9_LEB_COUNT_VAL8				0x0038  /* LEB value */
#define PWM9_LEB_COUNT_VAL9				0x0040  /* LEB value */
#define PWM9_LEB_COUNT_VAL10			0x0048  /* LEB value */
#define PWM9_LEB_COUNT_VAL11			0x0050  /* LEB value */
#define PWM9_LEB_COUNT_VAL12			0x0058  /* LEB value */
#define PWM9_LEB_COUNT_VAL13			0x0060  /* LEB value */
#define PWM9_LEB_COUNT_VAL14			0x0068  /* LEB value */
#define PWM9_LEB_COUNT_VAL15			0x0070  /* LEB value */
#define PWM9_LEB_COUNT_VAL16			0x0078  /* LEB value */
#define PWM9_LEB_COUNT_VAL17			0x0080  /* LEB value */
#define PWM9_LEB_COUNT_VAL18			0x0088  /* LEB value */
#define PWM9_LEB_COUNT_VAL19			0x0090  /* LEB value */
#define PWM9_LEB_COUNT_VAL20			0x0098  /* LEB value */
#define PWM9_LEB_COUNT_VAL21			0x00A0  /* LEB value */
#define PWM9_LEB_COUNT_VAL22			0x00A8  /* LEB value */
#define PWM9_LEB_COUNT_VAL23			0x00B0  /* LEB value */
#define PWM9_LEB_COUNT_VAL24			0x00B8  /* LEB value */
#define PWM9_LEB_COUNT_VAL25			0x00C0  /* LEB value */
#define PWM9_LEB_COUNT_VAL26			0x00C8  /* LEB value */
#define PWM9_LEB_COUNT_VAL27			0x00D0  /* LEB value */
#define PWM9_LEB_COUNT_VAL28			0x00D8  /* LEB value */
#define PWM9_LEB_COUNT_VAL29			0x00E0  /* LEB value */
#define PWM9_LEB_COUNT_VAL30			0x00E8  /* LEB value */
#define PWM9_LEB_COUNT_VAL31			0x00F0  /* LEB value */
#define PWM9_LEB_COUNT_VAL32			0x00F8  /* LEB value */
#define PWM9_LEB_COUNT_VAL33			0x0100  /* LEB value */
#define PWM9_LEB_COUNT_VAL34			0x0108  /* LEB value */
#define PWM9_LEB_COUNT_VAL35			0x0110  /* LEB value */
#define PWM9_LEB_COUNT_VAL36			0x0118  /* LEB value */
#define PWM9_LEB_COUNT_VAL37			0x0120  /* LEB value */
#define PWM9_LEB_COUNT_VAL38			0x0128  /* LEB value */
#define PWM9_LEB_COUNT_VAL39			0x0130  /* LEB value */
#define PWM9_LEB_COUNT_VAL40			0x0138  /* LEB value */
#define PWM9_LEB_COUNT_VAL41			0x0140  /* LEB value */
#define PWM9_LEB_COUNT_VAL42			0x0148  /* LEB value */
#define PWM9_LEB_COUNT_VAL43			0x0150  /* LEB value */
#define PWM9_LEB_COUNT_VAL44			0x0158  /* LEB value */
#define PWM9_LEB_COUNT_VAL45			0x0160  /* LEB value */
#define PWM9_LEB_COUNT_VAL46			0x0168  /* LEB value */
#define PWM9_LEB_COUNT_VAL47			0x0170  /* LEB value */
#define PWM9_LEB_COUNT_VAL48			0x0178  /* LEB value */
#define PWM9_LEB_COUNT_VAL49			0x0180  /* LEB value */
#define PWM9_LEB_COUNT_VAL50			0x0188  /* LEB value */
#define PWM9_LEB_COUNT_VAL51			0x0190  /* LEB value */
#define PWM9_LEB_COUNT_VAL52			0x0198  /* LEB value */
#define PWM9_LEB_COUNT_VAL53			0x01A0  /* LEB value */
#define PWM9_LEB_COUNT_VAL54			0x01A8  /* LEB value */
#define PWM9_LEB_COUNT_VAL55			0x01B0  /* LEB value */
#define PWM9_LEB_COUNT_VAL56			0x01B8  /* LEB value */
#define PWM9_LEB_COUNT_VAL57			0x01C0  /* LEB value */
#define PWM9_LEB_COUNT_VAL58			0x01C8  /* LEB value */
#define PWM9_LEB_COUNT_VAL59			0x01D0  /* LEB value */
#define PWM9_LEB_COUNT_VAL60			0x01D8  /* LEB value */
#define PWM9_LEB_COUNT_VAL61			0x01E0  /* LEB value */
#define PWM9_LEB_COUNT_VAL62			0x01E8  /* LEB value */
#define PWM9_LEB_COUNT_VAL63			0x01F0  /* LEB value */
#define PWM9_LEB_COUNT_VAL64			0x01F8  /* LEB value */
#define PWM9_LEB_COUNT_VAL65			0x0200  /* LEB value */
#define PWM9_LEB_COUNT_VAL66			0x0208  /* LEB value */
#define PWM9_LEB_COUNT_VAL67			0x0210  /* LEB value */
#define PWM9_LEB_COUNT_VAL68			0x0218  /* LEB value */
#define PWM9_LEB_COUNT_VAL69			0x0220  /* LEB value */
#define PWM9_LEB_COUNT_VAL70			0x0228  /* LEB value */
#define PWM9_LEB_COUNT_VAL71			0x0230  /* LEB value */
#define PWM9_LEB_COUNT_VAL72			0x0238  /* LEB value */
#define PWM9_LEB_COUNT_VAL73			0x0240  /* LEB value */
#define PWM9_LEB_COUNT_VAL74			0x0248  /* LEB value */
#define PWM9_LEB_COUNT_VAL75			0x0250  /* LEB value */
#define PWM9_LEB_COUNT_VAL76			0x0258  /* LEB value */
#define PWM9_LEB_COUNT_VAL77			0x0260  /* LEB value */
#define PWM9_LEB_COUNT_VAL78			0x0268  /* LEB value */
#define PWM9_LEB_COUNT_VAL79			0x0270  /* LEB value */
#define PWM9_LEB_COUNT_VAL80			0x0278  /* LEB value */
#define PWM9_LEB_COUNT_VAL81			0x0280  /* LEB value */
#define PWM9_LEB_COUNT_VAL82			0x0288  /* LEB value */
#define PWM9_LEB_COUNT_VAL83			0x0290  /* LEB value */
#define PWM9_LEB_COUNT_VAL84			0x0298  /* LEB value */
#define PWM9_LEB_COUNT_VAL85			0x02A0  /* LEB value */
#define PWM9_LEB_COUNT_VAL86			0x02A8  /* LEB value */
#define PWM9_LEB_COUNT_VAL87			0x02B0  /* LEB value */
#define PWM9_LEB_COUNT_VAL88			0x02B8  /* LEB value */
#define PWM9_LEB_COUNT_VAL89			0x02C0  /* LEB value */
#define PWM9_LEB_COUNT_VAL90			0x02C8  /* LEB value */
#define PWM9_LEB_COUNT_VAL91			0x02D0  /* LEB value */
#define PWM9_LEB_COUNT_VAL92			0x02D8  /* LEB value */
#define PWM9_LEB_COUNT_VAL93			0x02E0  /* LEB value */
#define PWM9_LEB_COUNT_VAL94			0x02E8  /* LEB value */
#define PWM9_LEB_COUNT_VAL95			0x02F0  /* LEB value */
#define PWM9_LEB_COUNT_VAL96			0x02F8  /* LEB value */
#define PWM9_LEB_COUNT_VAL97			0x0300  /* LEB value */
#define PWM9_LEB_COUNT_VAL98			0x0308  /* LEB value */
#define PWM9_LEB_COUNT_VAL99			0x0310  /* LEB value */
#define PWM9_LEB_COUNT_VAL100			0x0318  /* LEB value */
#define PWM9_LEB_COUNT_VAL101			0x0320  /* LEB value */
#define PWM9_LEB_COUNT_VAL102			0x0328  /* LEB value */
#define PWM9_LEB_COUNT_VAL103			0x0330  /* LEB value */
#define PWM9_LEB_COUNT_VAL104			0x0338  /* LEB value */
#define PWM9_LEB_COUNT_VAL105			0x0340  /* LEB value */
#define PWM9_LEB_COUNT_VAL106			0x0348  /* LEB value */
#define PWM9_LEB_COUNT_VAL107			0x0350  /* LEB value */
#define PWM9_LEB_COUNT_VAL108			0x0358  /* LEB value */
#define PWM9_LEB_COUNT_VAL109			0x0360  /* LEB value */
#define PWM9_LEB_COUNT_VAL110			0x0368  /* LEB value */
#define PWM9_LEB_COUNT_VAL111			0x0370  /* LEB value */
#define PWM9_LEB_COUNT_VAL112			0x0378  /* LEB value */
#define PWM9_LEB_COUNT_VAL113			0x0380  /* LEB value */
#define PWM9_LEB_COUNT_VAL114			0x0388  /* LEB value */
#define PWM9_LEB_COUNT_VAL115			0x0390  /* LEB value */
#define PWM9_LEB_COUNT_VAL116			0x0398  /* LEB value */
#define PWM9_LEB_COUNT_VAL117			0x03A0  /* LEB value */
#define PWM9_LEB_COUNT_VAL118			0x03A8  /* LEB value */
#define PWM9_LEB_COUNT_VAL119			0x03B0  /* LEB value */
#define PWM9_LEB_COUNT_VAL120			0x03B8  /* LEB value */
#define PWM9_LEB_COUNT_VAL121			0x03C0  /* LEB value */
#define PWM9_LEB_COUNT_VAL122			0x03C8  /* LEB value */
#define PWM9_LEB_COUNT_VAL123			0x03D0  /* LEB value */
#define PWM9_LEB_COUNT_VAL124			0x03D8  /* LEB value */
#define PWM9_LEB_COUNT_VAL125			0x03E0  /* LEB value */
#define PWM9_LEB_COUNT_VAL126			0x03E8  /* LEB value */
#define PWM9_LEB_COUNT_VAL127			0x03F0  /* LEB value */
#define PWM9_LEB_COUNT_VAL128			0x03F8  /* LEB value */












/*----------------------------------------------------------------------------------------------------*/
/* FCLCON1 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/
#if defined (__dsPIC33F__)
#define PWM1_IND_FLT_EN					0x8000  /* Current Limit input maps FLTDAT[1] to PWMH output, and Fault input maps FLTDAT[0] to PWML output.
												   The CLDAT<1:0> bits are not used for override functions */
#define PWM1_IND_FLT_DIS				0x0000  /* Normal fault mode: Current-limit feature maps CLDAT<1:0> bits to the PWM1H and PWM1L
											       outputs. The PWM fault feature maps FLTDAT<1:0> to the PWM1H and PWM1L outputs.*/							
#endif

#if defined (__dsPIC30F__)
#define PWM1_CL_CMP1					0x0000  /* Current Limit control signal select source CMP1 for PWM1 Gen bits */
#define PWM1_CL_CMP2					0x0200  /* Current Limit control signal select source CMP2 for PWM1 Gen bits */
#define PWM1_CL_CMP3					0x0400  /* Current Limit control signal select source CMP3 for PWM1 Gen bits */
#define PWM1_CL_CMP4					0x0600  /* Current Limit control signal select source CMP4 for PWM1 Gen bits */

#define PWM1_CL_SHARED_FLT1				0x1000  /* Current Limit control signal  select source SFLT1 for PWM1 Gen bits */
#define PWM1_CL_SHARED_FLT2				0x1200  /* Current Limit control signal  select source SFLT2 for PWM1 Gen bits */
#define PWM1_CL_SHARED_FLT3				0x1400  /* Current Limit control signal  select source SFLT3 for PWM1 Gen bits */
#define PWM1_CL_SHARED_FLT4				0x1600  /* Current Limit control signal  select source SFLT4 for PWM1 Gen bits */

#define PWM1_CL_IND_FLT2				0x1A00  /* Current Limit control signal  select source IFLT2 for PWM1 Gen bits */
#define PWM1_CL_IND_FLT4				0x1E00  /* Current Limit control signal  select source IFLT4 for PWM1 Gen bits */

#define PWM1_CL_SOURCE_LOW				0x0100  /* Selected Current Limit source is active low  */
#define PWM1_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM1_CL_EN						0x0080  /* Current Limit function Enabled  */
#define PWM1_CL_DIS						0x0000  /* Current Limit function Disabled  */

#elif defined (__dsPIC33F__)
#define PWM1_CL_FLT1					0x0000  /* Current Limit control signal select source FLT1 for PWM1 Gen bits */
#define PWM1_CL_FLT2					0x0400  /* Current Limit control signal select source FLT2 for PWM1 Gen bits */
#define PWM1_CL_FLT3					0x0800  /* Current Limit control signal select source FLT3 for PWM1 Gen bits */
#define PWM1_CL_FLT4					0x0C00  /* Current Limit control signal select source FLT4 for PWM1 Gen bits */
#define PWM1_CL_FLT5					0x1000  /* Current Limit control signal select source FLT5 for PWM1 Gen bits */
#define PWM1_CL_FLT6					0x1400  /* Current Limit control signal select source FLT6 for PWM1 Gen bits */
#define PWM1_CL_FLT7					0x1800  /* Current Limit control signal select source FLT7 for PWM1 Gen bits */
#define PWM1_CL_FLT8					0x1C00  /* Current Limit control signal select source FLT8 for PWM1 Gen bits */

#define PWM1_CL_SOURCE_LOW				0x0200  /* Selected Current Limit source is active low  */
#define PWM1_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM1_CL_EN						0x0100  /* Current Limit function Enabled  */
#define PWM1_CL_DIS						0x0000  /* Current Limit function Disabled  */

#endif

#if defined (__dsPIC30F__)
#define PWM1_FLT_CMP1					0x0000  /* Fault control signal select source CMP1 for PWM1 Gen bits */
#define PWM1_FLT_CMP2					0x0008  /* Fault control signal select source CMP2 for PWM1 Gen bits */
#define PWM1_FLT_CMP3					0x0010  /* Fault control signal select source CMP3 for PWM1 Gen bits */
#define PWM1_FLT_CMP4					0x0018  /* Fault control signal select source CMP4 for PWM1 Gen bits */

#define PWM1_FLT_SHARED_FLT1			0x0040  /* Fault control signal  select source SFLT1 for PWM1 Gen bits */
#define PWM1_FLT_SHARED_FLT2			0x0048  /* Fault control signal  select source SFLT2 for PWM1 Gen bits */
#define PWM1_FLT_SHARED_FLT3			0x0050  /* Fault control signal  select source SFLT3 for PWM1 Gen bits */
#define PWM1_FLT_SHARED_FLT4			0x0058  /* Fault control signal  select source SFLT4 for PWM1 Gen bits */

#define PWM1_FLT_IND_FLT2				0x0068  /* Fault control signal  select source IFLT2 for PWM1 Gen bits */
#define PWM1_FLT_IND_FLT4				0x0078  /* Fault control signal  select source IFLT4 for PWM1 Gen bits */

#elif defined (__dsPIC33F__)
#define PWM1_FLT_FLT1					0x0000  /* Fault control signal select source FLT1 for PWM1 Gen bits */
#define PWM1_FLT_FLT2					0x0400  /* Fault control signal select source FLT2 for PWM1 Gen bits */
#define PWM1_FLT_FLT3					0x0800  /* Fault control signal select source FLT3 for PWM1 Gen bits */
#define PWM1_FLT_FLT4					0x0C00  /* Fault control signal select source FLT4 for PWM1 Gen bits */
#define PWM1_FLT_FLT5					0x1000  /* Fault control signal select source FLT5 for PWM1 Gen bits */
#define PWM1_FLT_FLT6					0x1400  /* Fault control signal select source FLT6 for PWM1 Gen bits */
#define PWM1_FLT_FLT7					0x1800  /* Fault control signal select source FLT7 for PWM1 Gen bits */
#define PWM1_FLT_FLT8					0x1C00  /* Fault control signal select source FLT8 for PWM1 Gen bits */
#endif

#define PWM1_FLT_SOURCE_LOW				0x0004  /* Selected Fault source is active low  */
#define PWM1_FLT_SOURCE_HIGH			0x0000  /* Selected Fault source is active High  */

#define PWM1_HL_FLTDAT_LATCH			0x0000  /* Selected Fault source forces PWM1H and PWM1L pins to FLTDAT values (Latched Mode) */
#define PWM1_HL_FLTDAT_CYCLE			0x0001  /* Selected Fault source forces PWM1H and PWM1L pins to FLTDAT values (Cycle-by-Cycle Mode)  */
#define PWM1_FLT_IP_DIS					0x0003  /* Fault intput disabled  */

/*----------------------------------------------------------------------------------------------------*/
/* FCLCON2 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/
#if defined (__dsPIC33F__)
#define PWM2_IND_FLT_EN					0x8000  /* Current Limit input maps FLTDAT[1] to PWMH output, and Fault input maps FLTDAT[0] to PWML output.
												   The CLDAT<1:0> bits are not used for override functions */
#define PWM2_IND_FLT_DIS				0x0000  /* Normal fault mode: Current-limit feature maps CLDAT<1:0> bits to the PWM2H and PWM2L
											       outputs. The PWM fault feature maps FLTDAT<1:0> to the PWM2H and PWM2L outputs.*/							
#endif

#if defined (__dsPIC30F__)
#define PWM2_CL_CMP1					0x0000  /* Current Limit control signal select source CMP1 for PWM2 Gen bits */
#define PWM2_CL_CMP2					0x0200  /* Current Limit control signal select source CMP2 for PWM2 Gen bits */
#define PWM2_CL_CMP3					0x0400  /* Current Limit control signal select source CMP3 for PWM2 Gen bits */
#define PWM2_CL_CMP4					0x0600  /* Current Limit control signal select source CMP4 for PWM2 Gen bits */

#define PWM2_CL_SHARED_FLT1				0x1000  /* Current Limit control signal  select source SFLT1 for PWM2 Gen bits */
#define PWM2_CL_SHARED_FLT2				0x1200  /* Current Limit control signal  select source SFLT2 for PWM2 Gen bits */
#define PWM2_CL_SHARED_FLT3				0x1400  /* Current Limit control signal  select source SFLT3 for PWM2 Gen bits */
#define PWM2_CL_SHARED_FLT4				0x1600  /* Current Limit control signal  select source SFLT4 for PWM2 Gen bits */

#define PWM2_CL_IND_FLT2				0x1A00  /* Current Limit control signal  select source IFLT2 for PWM2 Gen bits */
#define PWM2_CL_IND_FLT4				0x1E00  /* Current Limit control signal  select source IFLT4 for PWM2 Gen bits */

#define PWM2_CL_SOURCE_LOW				0x0100  /* Selected Current Limit source is active low  */
#define PWM2_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM2_CL_EN						0x0080  /* Current Limit function Enabled  */
#define PWM2_CL_DIS						0x0000  /* Current Limit function Disabled  */

#elif defined (__dsPIC33F__)
#define PWM2_CL_FLT1					0x0000  /* Current Limit control signal select source FLT1 for PWM2 Gen bits */
#define PWM2_CL_FLT2					0x0400  /* Current Limit control signal select source FLT2 for PWM2 Gen bits */
#define PWM2_CL_FLT3					0x0800  /* Current Limit control signal select source FLT3 for PWM2 Gen bits */
#define PWM2_CL_FLT4					0x0C00  /* Current Limit control signal select source FLT4 for PWM2 Gen bits */
#define PWM2_CL_FLT5					0x1000  /* Current Limit control signal select source FLT5 for PWM2 Gen bits */
#define PWM2_CL_FLT6					0x1400  /* Current Limit control signal select source FLT6 for PWM2 Gen bits */
#define PWM2_CL_FLT7					0x1800  /* Current Limit control signal select source FLT7 for PWM2 Gen bits */
#define PWM2_CL_FLT8					0x1C00  /* Current Limit control signal select source FLT8 for PWM2 Gen bits */

#define PWM2_CL_SOURCE_LOW				0x0200  /* Selected Current Limit source is active low  */
#define PWM2_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM2_CL_EN						0x0100  /* Current Limit function Enabled  */
#define PWM2_CL_DIS						0x0000  /* Current Limit function Disabled  */

#endif

#if defined (__dsPIC30F__)
#define PWM2_FLT_CMP1					0x0000  /* Fault control signal select source CMP1 for PWM2 Gen bits */
#define PWM2_FLT_CMP2					0x0008  /* Fault control signal select source CMP2 for PWM2 Gen bits */
#define PWM2_FLT_CMP3					0x0010  /* Fault control signal select source CMP3 for PWM2 Gen bits */
#define PWM2_FLT_CMP4					0x0018  /* Fault control signal select source CMP4 for PWM2 Gen bits */

#define PWM2_FLT_SHARED_FLT1			0x0040  /* Fault control signal  select source SFLT1 for PWM2 Gen bits */
#define PWM2_FLT_SHARED_FLT2			0x0048  /* Fault control signal  select source SFLT2 for PWM2 Gen bits */
#define PWM2_FLT_SHARED_FLT3			0x0050  /* Fault control signal  select source SFLT3 for PWM2 Gen bits */
#define PWM2_FLT_SHARED_FLT4			0x0058  /* Fault control signal  select source SFLT4 for PWM2 Gen bits */

#define PWM2_FLT_IND_FLT2				0x0068  /* Fault control signal  select source IFLT2 for PWM2 Gen bits */
#define PWM2_FLT_IND_FLT4				0x0078  /* Fault control signal  select source IFLT4 for PWM2 Gen bits */

#elif defined (__dsPIC33F__)
#define PWM2_FLT_FLT1					0x0000  /* Fault control signal select source FLT1 for PWM2 Gen bits */
#define PWM2_FLT_FLT2					0x0400  /* Fault control signal select source FLT2 for PWM2 Gen bits */
#define PWM2_FLT_FLT3					0x0800  /* Fault control signal select source FLT3 for PWM2 Gen bits */
#define PWM2_FLT_FLT4					0x0C00  /* Fault control signal select source FLT4 for PWM2 Gen bits */
#define PWM2_FLT_FLT5					0x1000  /* Fault control signal select source FLT5 for PWM2 Gen bits */
#define PWM2_FLT_FLT6					0x1400  /* Fault control signal select source FLT6 for PWM2 Gen bits */
#define PWM2_FLT_FLT7					0x1800  /* Fault control signal select source FLT7 for PWM2 Gen bits */
#define PWM2_FLT_FLT8					0x1C00  /* Fault control signal select source FLT8 for PWM2 Gen bits */
#endif

#define PWM2_FLT_SOURCE_LOW				0x0004  /* Selected Fault source is active low  */
#define PWM2_FLT_SOURCE_HIGH			0x0000  /* Selected Fault source is active High  */

#define PWM2_HL_FLTDAT_LATCH			0x0000  /* Selected Fault source forces PWM2H and PWM2L pins to FLTDAT values (Latched Mode) */
#define PWM2_HL_FLTDAT_CYCLE			0x0001  /* Selected Fault source forces PWM2H and PWM2L pins to FLTDAT values (Cycle-by-Cycle Mode)  */
#define PWM2_FLT_IP_DIS					0x0003  /* Fault intput disabled  */

/*----------------------------------------------------------------------------------------------------*/
/* FCLCON3 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC33F__)
#define PWM3_IND_FLT_EN					0x8000  /* Current Limit input maps FLTDAT[1] to PWMH output, and Fault input maps FLTDAT[0] to PWML output.
												   The CLDAT<1:0> bits are not used for override functions */
#define PWM3_IND_FLT_DIS				0x0000  /* Normal fault mode: Current-limit feature maps CLDAT<1:0> bits to the PWM3H and PWM3L
											       outputs. The PWM fault feature maps FLTDAT<1:0> to the PWM3H and PWM3L outputs.*/							
#endif

#if defined (__dsPIC30F__)
#define PWM3_CL_CMP1					0x0000  /* Current Limit control signal select source CMP1 for PWM3 Gen bits */
#define PWM3_CL_CMP2					0x0200  /* Current Limit control signal select source CMP2 for PWM3 Gen bits */
#define PWM3_CL_CMP3					0x0400  /* Current Limit control signal select source CMP3 for PWM3 Gen bits */
#define PWM3_CL_CMP4					0x0600  /* Current Limit control signal select source CMP4 for PWM3 Gen bits */

#define PWM3_CL_SHARED_FLT1				0x1000  /* Current Limit control signal  select source SFLT1 for PWM3 Gen bits */
#define PWM3_CL_SHARED_FLT2				0x1200  /* Current Limit control signal  select source SFLT2 for PWM3 Gen bits */
#define PWM3_CL_SHARED_FLT3				0x1400  /* Current Limit control signal  select source SFLT3 for PWM3 Gen bits */
#define PWM3_CL_SHARED_FLT4				0x1600  /* Current Limit control signal  select source SFLT4 for PWM3 Gen bits */

#define PWM3_CL_IND_FLT2				0x1A00  /* Current Limit control signal  select source IFLT2 for PWM3 Gen bits */
#define PWM3_CL_IND_FLT4				0x1E00  /* Current Limit control signal  select source IFLT4 for PWM3 Gen bits */

#define PWM3_CL_SOURCE_LOW				0x0100  /* Selected Current Limit source is active low  */
#define PWM3_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM3_CL_EN						0x0080  /* Current Limit function Enabled  */
#define PWM3_CL_DIS						0x0000  /* Current Limit function Disabled  */

#elif defined (__dsPIC33F__)
#define PWM3_CL_FLT1					0x0000  /* Current Limit control signal select source FLT1 for PWM3 Gen bits */
#define PWM3_CL_FLT2					0x0400  /* Current Limit control signal select source FLT2 for PWM3 Gen bits */
#define PWM3_CL_FLT3					0x0800  /* Current Limit control signal select source FLT3 for PWM3 Gen bits */
#define PWM3_CL_FLT4					0x0C00  /* Current Limit control signal select source FLT4 for PWM3 Gen bits */
#define PWM3_CL_FLT5					0x1000  /* Current Limit control signal select source FLT5 for PWM3 Gen bits */
#define PWM3_CL_FLT6					0x1400  /* Current Limit control signal select source FLT6 for PWM3 Gen bits */
#define PWM3_CL_FLT7					0x1800  /* Current Limit control signal select source FLT7 for PWM3 Gen bits */
#define PWM3_CL_FLT8					0x1C00  /* Current Limit control signal select source FLT8 for PWM3 Gen bits */

#define PWM3_CL_SOURCE_LOW				0x0200  /* Selected Current Limit source is active low  */
#define PWM3_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM3_CL_EN						0x0100  /* Current Limit function Enabled  */
#define PWM3_CL_DIS						0x0000  /* Current Limit function Disabled  */

#endif

#if defined (__dsPIC30F__)
#define PWM3_FLT_CMP1					0x0000  /* Fault control signal select source CMP1 for PWM3 Gen bits */
#define PWM3_FLT_CMP2					0x0008  /* Fault control signal select source CMP2 for PWM3 Gen bits */
#define PWM3_FLT_CMP3					0x0010  /* Fault control signal select source CMP3 for PWM3 Gen bits */
#define PWM3_FLT_CMP4					0x0018  /* Fault control signal select source CMP4 for PWM3 Gen bits */

#define PWM3_FLT_SHARED_FLT1			0x0040  /* Fault control signal  select source SFLT1 for PWM3 Gen bits */
#define PWM3_FLT_SHARED_FLT2			0x0048  /* Fault control signal  select source SFLT2 for PWM3 Gen bits */
#define PWM3_FLT_SHARED_FLT3			0x0050  /* Fault control signal  select source SFLT3 for PWM3 Gen bits */
#define PWM3_FLT_SHARED_FLT4			0x0058  /* Fault control signal  select source SFLT4 for PWM3 Gen bits */

#define PWM3_FLT_IND_FLT2				0x0068  /* Fault control signal  select source IFLT2 for PWM3 Gen bits */
#define PWM3_FLT_IND_FLT4				0x0078  /* Fault control signal  select source IFLT4 for PWM3 Gen bits */

#elif defined (__dsPIC33F__)
#define PWM3_FLT_FLT1					0x0000  /* Fault control signal select source FLT1 for PWM3 Gen bits */
#define PWM3_FLT_FLT2					0x0400  /* Fault control signal select source FLT2 for PWM3 Gen bits */
#define PWM3_FLT_FLT3					0x0800  /* Fault control signal select source FLT3 for PWM3 Gen bits */
#define PWM3_FLT_FLT4					0x0C00  /* Fault control signal select source FLT4 for PWM3 Gen bits */
#define PWM3_FLT_FLT5					0x1000  /* Fault control signal select source FLT5 for PWM3 Gen bits */
#define PWM3_FLT_FLT6					0x1400  /* Fault control signal select source FLT6 for PWM3 Gen bits */
#define PWM3_FLT_FLT7					0x1800  /* Fault control signal select source FLT7 for PWM3 Gen bits */
#define PWM3_FLT_FLT8					0x1C00  /* Fault control signal select source FLT8 for PWM3 Gen bits */
#endif

#define PWM3_FLT_SOURCE_LOW				0x0004  /* Selected Fault source is active low  */
#define PWM3_FLT_SOURCE_HIGH			0x0000  /* Selected Fault source is active High  */

#define PWM3_HL_FLTDAT_LATCH			0x0000  /* Selected Fault source forces PWM3H and PWM3L pins to FLTDAT values (Latched Mode) */
#define PWM3_HL_FLTDAT_CYCLE			0x0001  /* Selected Fault source forces PWM3H and PWM3L pins to FLTDAT values (Cycle-by-Cycle Mode)  */
#define PWM3_FLT_IP_DIS					0x0003  /* Fault intput disabled  */

/*----------------------------------------------------------------------------------------------------*/
/* FCLCON4 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC33F__)
#define PWM4_IND_FLT_EN					0x8000  /* Current Limit input maps FLTDAT[1] to PWMH output, and Fault input maps FLTDAT[0] to PWML output.
												   The CLDAT<1:0> bits are not used for override functions */
#define PWM4_IND_FLT_DIS				0x0000  /* Normal fault mode: Current-limit feature maps CLDAT<1:0> bits to the PWM4H and PWM4L
											       outputs. The PWM fault feature maps FLTDAT<1:0> to the PWM4H and PWM4L outputs.*/							
#endif

#if defined (__dsPIC30F__)
#define PWM4_CL_CMP1					0x0000  /* Current Limit control signal select source CMP1 for PWM4 Gen bits */
#define PWM4_CL_CMP2					0x0200  /* Current Limit control signal select source CMP2 for PWM4 Gen bits */
#define PWM4_CL_CMP3					0x0400  /* Current Limit control signal select source CMP3 for PWM4 Gen bits */
#define PWM4_CL_CMP4					0x0600  /* Current Limit control signal select source CMP4 for PWM4 Gen bits */

#define PWM4_CL_SHARED_FLT1				0x1000  /* Current Limit control signal  select source SFLT1 for PWM4 Gen bits */
#define PWM4_CL_SHARED_FLT2				0x1200  /* Current Limit control signal  select source SFLT2 for PWM4 Gen bits */
#define PWM4_CL_SHARED_FLT3				0x1400  /* Current Limit control signal  select source SFLT3 for PWM4 Gen bits */
#define PWM4_CL_SHARED_FLT4				0x1600  /* Current Limit control signal  select source SFLT4 for PWM4 Gen bits */

#define PWM4_CL_IND_FLT2				0x1A00  /* Current Limit control signal  select source IFLT2 for PWM4 Gen bits */
#define PWM4_CL_IND_FLT4				0x1E00  /* Current Limit control signal  select source IFLT4 for PWM4 Gen bits */

#define PWM4_CL_SOURCE_LOW				0x0100  /* Selected Current Limit source is active low  */
#define PWM4_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM4_CL_EN						0x0080  /* Current Limit function Enabled  */
#define PWM4_CL_DIS						0x0000  /* Current Limit function Disabled  */

#elif defined (__dsPIC33F__)
#define PWM4_CL_FLT1					0x0000  /* Current Limit control signal select source FLT1 for PWM4 Gen bits */
#define PWM4_CL_FLT2					0x0400  /* Current Limit control signal select source FLT2 for PWM4 Gen bits */
#define PWM4_CL_FLT3					0x0800  /* Current Limit control signal select source FLT3 for PWM4 Gen bits */
#define PWM4_CL_FLT4					0x0C00  /* Current Limit control signal select source FLT4 for PWM4 Gen bits */
#define PWM4_CL_FLT5					0x1000  /* Current Limit control signal select source FLT5 for PWM4 Gen bits */
#define PWM4_CL_FLT6					0x1400  /* Current Limit control signal select source FLT6 for PWM4 Gen bits */
#define PWM4_CL_FLT7					0x1800  /* Current Limit control signal select source FLT7 for PWM4 Gen bits */
#define PWM4_CL_FLT8					0x1C00  /* Current Limit control signal select source FLT8 for PWM4 Gen bits */

#define PWM4_CL_SOURCE_LOW				0x0200  /* Selected Current Limit source is active low  */
#define PWM4_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM4_CL_EN						0x0100  /* Current Limit function Enabled  */
#define PWM4_CL_DIS						0x0000  /* Current Limit function Disabled  */

#endif

#if defined (__dsPIC30F__)
#define PWM4_FLT_CMP1					0x0000  /* Fault control signal select source CMP1 for PWM4 Gen bits */
#define PWM4_FLT_CMP2					0x0008  /* Fault control signal select source CMP2 for PWM4 Gen bits */
#define PWM4_FLT_CMP3					0x0010  /* Fault control signal select source CMP3 for PWM4 Gen bits */
#define PWM4_FLT_CMP4					0x0018  /* Fault control signal select source CMP4 for PWM4 Gen bits */

#define PWM4_FLT_SHARED_FLT1			0x0040  /* Fault control signal  select source SFLT1 for PWM4 Gen bits */
#define PWM4_FLT_SHARED_FLT2			0x0048  /* Fault control signal  select source SFLT2 for PWM4 Gen bits */
#define PWM4_FLT_SHARED_FLT3			0x0050  /* Fault control signal  select source SFLT3 for PWM4 Gen bits */
#define PWM4_FLT_SHARED_FLT4			0x0058  /* Fault control signal  select source SFLT4 for PWM4 Gen bits */

#define PWM4_FLT_IND_FLT2				0x0068  /* Fault control signal  select source IFLT2 for PWM4 Gen bits */
#define PWM4_FLT_IND_FLT4				0x0078  /* Fault control signal  select source IFLT4 for PWM4 Gen bits */

#elif defined (__dsPIC33F__)
#define PWM4_FLT_FLT1					0x0000  /* Fault control signal select source FLT1 for PWM4 Gen bits */
#define PWM4_FLT_FLT2					0x0400  /* Fault control signal select source FLT2 for PWM4 Gen bits */
#define PWM4_FLT_FLT3					0x0800  /* Fault control signal select source FLT3 for PWM4 Gen bits */
#define PWM4_FLT_FLT4					0x0C00  /* Fault control signal select source FLT4 for PWM4 Gen bits */
#define PWM4_FLT_FLT5					0x1000  /* Fault control signal select source FLT5 for PWM4 Gen bits */
#define PWM4_FLT_FLT6					0x1400  /* Fault control signal select source FLT6 for PWM4 Gen bits */
#define PWM4_FLT_FLT7					0x1800  /* Fault control signal select source FLT7 for PWM4 Gen bits */
#define PWM4_FLT_FLT8					0x1C00  /* Fault control signal select source FLT8 for PWM4 Gen bits */
#endif

#define PWM4_FLT_SOURCE_LOW				0x0004  /* Selected Fault source is active low  */
#define PWM4_FLT_SOURCE_HIGH			0x0000  /* Selected Fault source is active High  */

#define PWM4_HL_FLTDAT_LATCH			0x0000  /* Selected Fault source forces PWM4H and PWM4L pins to FLTDAT values (Latched Mode) */
#define PWM4_HL_FLTDAT_CYCLE			0x0001  /* Selected Fault source forces PWM4H and PWM4L pins to FLTDAT values (Cycle-by-Cycle Mode)  */
#define PWM4_FLT_IP_DIS					0x0003  /* Fault intput disabled  */




/*----------------------------------------------------------------------------------------------------*/
/* FCLCON5 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC33F__)
#define PWM5_IND_FLT_EN					0x8000  /* Current Limit input maps FLTDAT[1] to PWMH output, and Fault input maps FLTDAT[0] to PWML output.
												   The CLDAT<1:0> bits are not used for override functions */
#define PWM5_IND_FLT_DIS				0x0000  /* Normal fault mode: Current-limit feature maps CLDAT<1:0> bits to the PWM5H and PWM5L
											       outputs. The PWM fault feature maps FLTDAT<1:0> to the PWM5H and PWM5L outputs.*/							
#endif



#if defined (__dsPIC33F__)
#define PWM5_CL_FLT1					0x0000  /* Current Limit control signal select source FLT1 for PWM5 Gen bits */
#define PWM5_CL_FLT2					0x0400  /* Current Limit control signal select source FLT2 for PWM5 Gen bits */
#define PWM5_CL_FLT3					0x0800  /* Current Limit control signal select source FLT3 for PWM5 Gen bits */
#define PWM5_CL_FLT4					0x0C00  /* Current Limit control signal select source FLT4 for PWM5 Gen bits */
#define PWM5_CL_FLT5					0x1000  /* Current Limit control signal select source FLT5 for PWM5 Gen bits */
#define PWM5_CL_FLT6					0x1400  /* Current Limit control signal select source FLT6 for PWM5 Gen bits */
#define PWM5_CL_FLT7					0x1800  /* Current Limit control signal select source FLT7 for PWM5 Gen bits */
#define PWM5_CL_FLT8					0x1C00  /* Current Limit control signal select source FLT8 for PWM5 Gen bits */

#define PWM5_CL_SOURCE_LOW				0x0200  /* Selected Current Limit source is active low  */
#define PWM5_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM5_CL_EN						0x0100  /* Current Limit function Enabled  */
#define PWM5_CL_DIS						0x0000  /* Current Limit function Disabled  */

#endif





#if defined (__dsPIC33F__)
#define PWM5_FLT_FLT1					0x0000  /* Fault control signal select source FLT1 for PWM5 Gen bits */
#define PWM5_FLT_FLT2					0x0400  /* Fault control signal select source FLT2 for PWM5 Gen bits */
#define PWM5_FLT_FLT3					0x0800  /* Fault control signal select source FLT3 for PWM5 Gen bits */
#define PWM5_FLT_FLT4					0x0C00  /* Fault control signal select source FLT4 for PWM5 Gen bits */
#define PWM5_FLT_FLT5					0x1000  /* Fault control signal select source FLT5 for PWM5 Gen bits */
#define PWM5_FLT_FLT6					0x1400  /* Fault control signal select source FLT6 for PWM5 Gen bits */
#define PWM5_FLT_FLT7					0x1800  /* Fault control signal select source FLT7 for PWM5 Gen bits */
#define PWM5_FLT_FLT8					0x1C00  /* Fault control signal select source FLT8 for PWM5 Gen bits */
#endif

#define PWM5_FLT_SOURCE_LOW				0x0004  /* Selected Fault source is active low  */
#define PWM5_FLT_SOURCE_HIGH			0x0000  /* Selected Fault source is active High  */

#define PWM5_HL_FLTDAT_LATCH			0x0000  /* Selected Fault source forces PWM5H and PWM5L pins to FLTDAT values (Latched Mode) */
#define PWM5_HL_FLTDAT_CYCLE			0x0001  /* Selected Fault source forces PWM5H and PWM5L pins to FLTDAT values (Cycle-by-Cycle Mode)  */
#define PWM5_FLT_IP_DIS					0x0003  /* Fault intput disabled  */



/*----------------------------------------------------------------------------------------------------*/
/* FCLCON6 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC33F__)
#define PWM6_IND_FLT_EN					0x8000  /* Current Limit input maps FLTDAT[1] to PWMH output, and Fault input maps FLTDAT[0] to PWML output.
												   The CLDAT<1:0> bits are not used for override functions */
#define PWM6_IND_FLT_DIS				0x0000  /* Normal fault mode: Current-limit feature maps CLDAT<1:0> bits to the PWM6H and PWM6L
											       outputs. The PWM fault feature maps FLTDAT<1:0> to the PWM6H and PWM6L outputs.*/							
#endif



#if defined (__dsPIC33F__)
#define PWM6_CL_FLT1					0x0000  /* Current Limit control signal select source FLT1 for PWM6 Gen bits */
#define PWM6_CL_FLT2					0x0400  /* Current Limit control signal select source FLT2 for PWM6 Gen bits */
#define PWM6_CL_FLT3					0x0800  /* Current Limit control signal select source FLT3 for PWM6 Gen bits */
#define PWM6_CL_FLT4					0x0C00  /* Current Limit control signal select source FLT4 for PWM6 Gen bits */
#define PWM6_CL_FLT5					0x1000  /* Current Limit control signal select source FLT5 for PWM6 Gen bits */
#define PWM6_CL_FLT6					0x1400  /* Current Limit control signal select source FLT6 for PWM6 Gen bits */
#define PWM6_CL_FLT7					0x1800  /* Current Limit control signal select source FLT7 for PWM6 Gen bits */
#define PWM6_CL_FLT8					0x1C00  /* Current Limit control signal select source FLT8 for PWM6 Gen bits */

#define PWM6_CL_SOURCE_LOW				0x0200  /* Selected Current Limit source is active low  */
#define PWM6_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM6_CL_EN						0x0100  /* Current Limit function Enabled  */
#define PWM6_CL_DIS						0x0000  /* Current Limit function Disabled  */

#endif


#if defined (__dsPIC33F__)
#define PWM6_FLT_FLT1					0x0000  /* Fault control signal select source FLT1 for PWM6 Gen bits */
#define PWM6_FLT_FLT2					0x0400  /* Fault control signal select source FLT2 for PWM6 Gen bits */
#define PWM6_FLT_FLT3					0x0800  /* Fault control signal select source FLT3 for PWM6 Gen bits */
#define PWM6_FLT_FLT4					0x0C00  /* Fault control signal select source FLT4 for PWM6 Gen bits */
#define PWM6_FLT_FLT5					0x1000  /* Fault control signal select source FLT5 for PWM6 Gen bits */
#define PWM6_FLT_FLT6					0x1400  /* Fault control signal select source FLT6 for PWM6 Gen bits */
#define PWM6_FLT_FLT7					0x1800  /* Fault control signal select source FLT7 for PWM6 Gen bits */
#define PWM6_FLT_FLT8					0x1C00  /* Fault control signal select source FLT8 for PWM6 Gen bits */
#endif

#define PWM6_FLT_SOURCE_LOW				0x0004  /* Selected Fault source is active low  */
#define PWM6_FLT_SOURCE_HIGH			0x0000  /* Selected Fault source is active High  */

#define PWM6_HL_FLTDAT_LATCH			0x0000  /* Selected Fault source forces PWM6H and PWM6L pins to FLTDAT values (Latched Mode) */
#define PWM6_HL_FLTDAT_CYCLE			0x0001  /* Selected Fault source forces PWM6H and PWM6L pins to FLTDAT values (Cycle-by-Cycle Mode)  */
#define PWM6_FLT_IP_DIS					0x0003  /* Fault intput disabled  */





/*----------------------------------------------------------------------------------------------------*/
/* FCLCON7  Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC33F__)
#define PWM7_IND_FLT_EN					0x8000  /* Current Limit input maps FLTDAT[1] to PWMH output, and Fault input maps FLTDAT[0] to PWML output.
												   The CLDAT<1:0> bits are not used for override functions */
#define PWM7_IND_FLT_DIS				0x0000  /* Normal fault mode: Current-limit feature maps CLDAT<1:0> bits to the PWM7H and PWM7L
											       outputs. The PWM fault feature maps FLTDAT<1:0> to the PWM7H and PWM7L outputs.*/							
#endif



#if defined (__dsPIC33F__)
#define PWM7_CL_FLT1					0x0000  /* Current Limit control signal select source FLT1 for PWM7 Gen bits */
#define PWM7_CL_FLT2					0x0400  /* Current Limit control signal select source FLT2 for PWM7 Gen bits */
#define PWM7_CL_FLT3					0x0800  /* Current Limit control signal select source FLT3 for PWM7 Gen bits */
#define PWM7_CL_FLT4					0x0C00  /* Current Limit control signal select source FLT4 for PWM7 Gen bits */
#define PWM7_CL_FLT5					0x1000  /* Current Limit control signal select source FLT5 for PWM7 Gen bits */
#define PWM7_CL_FLT6					0x1400  /* Current Limit control signal select source FLT6 for PWM7 Gen bits */
#define PWM7_CL_FLT7					0x1800  /* Current Limit control signal select source FLT7 for PWM7 Gen bits */
#define PWM7_CL_FLT8					0x1C00  /* Current Limit control signal select source FLT8 for PWM7 Gen bits */

#define PWM7_CL_SOURCE_LOW				0x0200  /* Selected Current Limit source is active low  */
#define PWM7_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM7_CL_EN						0x0100  /* Current Limit function Enabled  */
#define PWM7_CL_DIS						0x0000  /* Current Limit function Disabled  */

#endif


#if defined (__dsPIC33F__)
#define PWM7_FLT_FLT1					0x0000  /* Fault control signal select source FLT1 for PWM7 Gen bits */
#define PWM7_FLT_FLT2					0x0400  /* Fault control signal select source FLT2 for PWM7 Gen bits */
#define PWM7_FLT_FLT3					0x0800  /* Fault control signal select source FLT3 for PWM7 Gen bits */
#define PWM7_FLT_FLT4					0x0C00  /* Fault control signal select source FLT4 for PWM7 Gen bits */
#define PWM7_FLT_FLT5					0x1000  /* Fault control signal select source FLT5 for PWM7 Gen bits */
#define PWM7_FLT_FLT6					0x1400  /* Fault control signal select source FLT6 for PWM7 Gen bits */
#define PWM7_FLT_FLT7					0x1800  /* Fault control signal select source FLT7 for PWM7 Gen bits */
#define PWM7_FLT_FLT8					0x1C00  /* Fault control signal select source FLT8 for PWM7 Gen bits */
#endif

#define PWM7_FLT_SOURCE_LOW				0x0004  /* Selected Fault source is active low  */
#define PWM7_FLT_SOURCE_HIGH			0x0000  /* Selected Fault source is active High  */

#define PWM7_HL_FLTDAT_LATCH			0x0000  /* Selected Fault source forces PWM7H and PWM7L pins to FLTDAT values (Latched Mode) */
#define PWM7_HL_FLTDAT_CYCLE			0x0001  /* Selected Fault source forces PWM7H and PWM7L pins to FLTDAT values (Cycle-by-Cycle Mode)  */
#define PWM7_FLT_IP_DIS					0x0003  /* Fault intput disabled  */




/*----------------------------------------------------------------------------------------------------*/
/* FCLCON8 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC33F__)
#define PWM8_IND_FLT_EN					0x8000  /* Current Limit input maps FLTDAT[1] to PWMH output, and Fault input maps FLTDAT[0] to PWML output.
												   The CLDAT<1:0> bits are not used for override functions */
#define PWM8_IND_FLT_DIS				0x0000  /* Normal fault mode: Current-limit feature maps CLDAT<1:0> bits to the PWM8H and PWM8L
											       outputs. The PWM fault feature maps FLTDAT<1:0> to the PWM8H and PWM8L outputs.*/							
#endif



#if defined (__dsPIC33F__)
#define PWM8_CL_FLT1					0x0000  /* Current Limit control signal select source FLT1 for PWM8 Gen bits */
#define PWM8_CL_FLT2					0x0400  /* Current Limit control signal select source FLT2 for PWM8 Gen bits */
#define PWM8_CL_FLT3					0x0800  /* Current Limit control signal select source FLT3 for PWM8 Gen bits */
#define PWM8_CL_FLT4					0x0C00  /* Current Limit control signal select source FLT4 for PWM8 Gen bits */
#define PWM8_CL_FLT5					0x1000  /* Current Limit control signal select source FLT5 for PWM8 Gen bits */
#define PWM8_CL_FLT6					0x1400  /* Current Limit control signal select source FLT6 for PWM8 Gen bits */
#define PWM8_CL_FLT7					0x1800  /* Current Limit control signal select source FLT7 for PWM8 Gen bits */
#define PWM8_CL_FLT8					0x1C00  /* Current Limit control signal select source FLT8 for PWM8 Gen bits */

#define PWM8_CL_SOURCE_LOW				0x0200  /* Selected Current Limit source is active low  */
#define PWM8_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM8_CL_EN						0x0100  /* Current Limit function Enabled  */
#define PWM8_CL_DIS						0x0000  /* Current Limit function Disabled  */

#endif


#if defined (__dsPIC33F__)
#define PWM8_FLT_FLT1					0x0000  /* Fault control signal select source FLT1 for PWM8 Gen bits */
#define PWM8_FLT_FLT2					0x0400  /* Fault control signal select source FLT2 for PWM8 Gen bits */
#define PWM8_FLT_FLT3					0x0800  /* Fault control signal select source FLT3 for PWM8 Gen bits */
#define PWM8_FLT_FLT4					0x0C00  /* Fault control signal select source FLT4 for PWM8 Gen bits */
#define PWM8_FLT_FLT5					0x1000  /* Fault control signal select source FLT5 for PWM8 Gen bits */
#define PWM8_FLT_FLT6					0x1400  /* Fault control signal select source FLT6 for PWM8 Gen bits */
#define PWM8_FLT_FLT7					0x1800  /* Fault control signal select source FLT7 for PWM8 Gen bits */
#define PWM8_FLT_FLT8					0x1C00  /* Fault control signal select source FLT8 for PWM8 Gen bits */
#endif

#define PWM8_FLT_SOURCE_LOW				0x0004  /* Selected Fault source is active low  */
#define PWM8_FLT_SOURCE_HIGH			0x0000  /* Selected Fault source is active High  */

#define PWM8_HL_FLTDAT_LATCH			0x0000  /* Selected Fault source forces PWM8H and PWM8L pins to FLTDAT values (Latched Mode) */
#define PWM8_HL_FLTDAT_CYCLE			0x0001  /* Selected Fault source forces PWM8H and PWM8L pins to FLTDAT values (Cycle-by-Cycle Mode)  */
#define PWM8_FLT_IP_DIS					0x0003  /* Fault intput disabled  */






/*----------------------------------------------------------------------------------------------------*/
/* FCLCON9 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#if defined (__dsPIC33F__)
#define PWM9_IND_FLT_EN					0x8000  /* Current Limit input maps FLTDAT[1] to PWMH output, and Fault input maps FLTDAT[0] to PWML output.
												   The CLDAT<1:0> bits are not used for override functions */
#define PWM9_IND_FLT_DIS				0x0000  /* Normal fault mode: Current-limit feature maps CLDAT<1:0> bits to the PWM9H and PWM9L
											       outputs. The PWM fault feature maps FLTDAT<1:0> to the PWM9H and PWM9L outputs.*/							
#endif



#if defined (__dsPIC33F__)
#define PWM9_CL_FLT1					0x0000  /* Current Limit control signal select source FLT1 for PWM9 Gen bits */
#define PWM9_CL_FLT2					0x0400  /* Current Limit control signal select source FLT2 for PWM9 Gen bits */
#define PWM9_CL_FLT3					0x0800  /* Current Limit control signal select source FLT3 for PWM9 Gen bits */
#define PWM9_CL_FLT4					0x0C00  /* Current Limit control signal select source FLT4 for PWM9 Gen bits */
#define PWM9_CL_FLT5					0x1000  /* Current Limit control signal select source FLT5 for PWM9 Gen bits */
#define PWM9_CL_FLT6					0x1400  /* Current Limit control signal select source FLT6 for PWM9 Gen bits */
#define PWM9_CL_FLT7					0x1800  /* Current Limit control signal select source FLT7 for PWM9 Gen bits */
#define PWM9_CL_FLT8					0x1C00  /* Current Limit control signal select source FLT8 for PWM9 Gen bits */

#define PWM9_CL_SOURCE_LOW				0x0200  /* Selected Current Limit source is active low  */
#define PWM9_CL_SOURCE_HIGH				0x0000  /* Selected Current Limit source is active High  */

#define PWM9_CL_EN						0x0100  /* Current Limit function Enabled  */
#define PWM9_CL_DIS						0x0000  /* Current Limit function Disabled  */

#endif


#if defined (__dsPIC33F__)
#define PWM9_FLT_FLT1					0x0000  /* Fault control signal select source FLT1 for PWM9 Gen bits */
#define PWM9_FLT_FLT2					0x0400  /* Fault control signal select source FLT2 for PWM9 Gen bits */
#define PWM9_FLT_FLT3					0x0800  /* Fault control signal select source FLT3 for PWM9 Gen bits */
#define PWM9_FLT_FLT4					0x0C00  /* Fault control signal select source FLT4 for PWM9 Gen bits */
#define PWM9_FLT_FLT5					0x1000  /* Fault control signal select source FLT5 for PWM9 Gen bits */
#define PWM9_FLT_FLT6					0x1400  /* Fault control signal select source FLT6 for PWM9 Gen bits */
#define PWM9_FLT_FLT7					0x1800  /* Fault control signal select source FLT7 for PWM9 Gen bits */
#define PWM9_FLT_FLT8					0x1C00  /* Fault control signal select source FLT8 for PWM9 Gen bits */
#endif

#define PWM9_FLT_SOURCE_LOW				0x0004  /* Selected Fault source is active low  */
#define PWM9_FLT_SOURCE_HIGH			0x0000  /* Selected Fault source is active High  */

#define PWM9_HL_FLTDAT_LATCH			0x0000  /* Selected Fault source forces PWM9H and PWM9L pins to FLTDAT values (Latched Mode) */
#define PWM9_HL_FLTDAT_CYCLE			0x0001  /* Selected Fault source forces PWM9H and PWM9L pins to FLTDAT values (Cycle-by-Cycle Mode)  */
#define PWM9_FLT_IP_DIS					0x0003  /* Fault intput disabled  */


#define HI_RES_PWM_PRD_DIS 0x8000    //High resolution PWM period is disabled to reduce power consumption

#define HI_RES_PWM_PRD_EN 0x0000     //High resolution PWM period is enabled

#define HI_RES_PWM_DTC_DIS 0x8000    //High resolution PWM duty cycle  is disabled to reduce power consumption

#define HI_RES_PWM_DTC_EN 0x0000     //High resolution PWM duty cycle is enabled




#define PWM1H_BLANKSEL     0x0100       //PWM1H selected as state blank source
#define PWM2H_BLANKSEL    0x0200		//PWM2H selected as state blank source
#define PWM3H_BLANKSEL     0x0300	//PWM3H selected as state blank source
#define PWM4H_BLANKSEL     0x0400	//PW4H selected as state blank source
#define PWM5H_BLANKSEL    0x0500	      //PW5H selected as state blank source
#define PWM6H_BLANKSEL    0x0600	      //PW6H selected as state blank source
#define PWM7H_BLANKSEL    0x0700	      //PW7H selected as state blank source
#define PWM8H_BLANKSEL    0x0800	      //PW8H selected as state blank source
#define PWM9H_BLANKSEL    0x0900	      //PW9H selected as state blank source

#define CHOP_CLK_GEN_CHOPSEL 	  0x0000    	//Chop clk generator selected as chop source
#define PWM1H_CHOPSEL     			  0x0004       //PWM1H selected as chop  source
#define PWM2H_CHOPSEL   			 0x0005		//PWM2H selected as chop source
#define PWM3H_CHOPSEL    			 0x0006	//PWM3H selected as   chop source
#define PWM4H_CHOPSEL    			 0x0007		//PW4H selected as state  chop  source
#define PWM5H_CHOPSEL    			 0x0008	      //PW5H selected as state  chopsource
#define PWM6H_CHOPSEL   			 0x0009	      //PW6H selected as state  chop source
#define PWM7H_CHOPSEL   			 0x000A	      //PW7H selected as state  chop  source
#define PWM8H_CHOPSEL    			0x000B	      //PW8H selected as state  chop  source
#define PWM9H_CHOPSEL    			0x000C	      //PW9H selected as state  chop source








/*----------------------------------------------------------------------------------------------------*/
/* AUXCON1 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM1L_OP_CHOP_EN  0x0001     //PWM1L chopping function is enabled

#define PWM1L_OP_CHOP_DIS 0x0000      //PWM1L chopping function is disabled



#define PWM1H_OP_CHOP_EN  0x0002     //PWM1H chopping function is enabled

#define PWM1H_OP_CHOP_DIS 0x0000      //PWM1H chopping function is disabled







/*----------------------------------------------------------------------------------------------------*/
/* AUXCON2 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM2L_OP_CHOP_EN  0x0001     //PWM2L chopping function is enabled

#define PWM2L_OP_CHOP_DIS 0x0000      //PWM2L chopping function is disabled


#define PWM2H_OP_CHOP_EN  0x0002     //PWM2H chopping function is enabled

#define PWM2H_OP_CHOP_DIS 0x0000      //PWM2H chopping function is disabled




/*----------------------------------------------------------------------------------------------------*/
/* AUXCON3 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM3L_OP_CHOP_EN  0x0001     //PWM3L chopping function is enabled

#define PWM3L_OP_CHOP_DIS 0x0000      //PWM3L chopping function is disabled


#define PWM3H_OP_CHOP_EN  0x0002     //PWM3H chopping function is enabled

#define PWM3H_OP_CHOP_DIS 0x0000      //PWM3H chopping function is disabled



/*----------------------------------------------------------------------------------------------------*/
/* AUXCON4 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM4L_OP_CHOP_EN  0x0001     //PWM4L chopping function is enabled

#define PWM4L_OP_CHOP_DIS 0x0000      //PWM4L chopping function is disabled


#define PWM4H_OP_CHOP_EN  0x0002     //PWM4H chopping function is enabled

#define PWM4H_OP_CHOP_DIS 0x0000      //PWM4H chopping function is disabled




/*----------------------------------------------------------------------------------------------------*/
/* AUXCON5 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM5L_OP_CHOP_EN  0x0001     //PWM5L chopping function is enabled

#define PWM5L_OP_CHOP_DIS 0x0000      //PWM5L chopping function is disabled


#define PWM5H_OP_CHOP_EN  0x0002     //PWM5H chopping function is enabled

#define PWM5H_OP_CHOP_DIS 0x0000      //PWM5H chopping function is disabled



/*----------------------------------------------------------------------------------------------------*/
/* AUXCON6 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM6L_OP_CHOP_EN  0x0001     //PWM6L chopping function is enabled

#define PWM6L_OP_CHOP_DIS 0x0000      //PWM6L chopping function is disabled


#define PWM6H_OP_CHOP_EN  0x0002     //PWM6H chopping function is enabled

#define PWM6H_OP_CHOP_DIS 0x0000      //PWM6H chopping function is disabled



/*----------------------------------------------------------------------------------------------------*/
/* AUXCON7 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM7L_OP_CHOP_EN  0x0001     //PWM7L chopping function is enabled

#define PWM7L_OP_CHOP_DIS 0x0000      //PWM7L chopping function is disabled


#define PWM7H_OP_CHOP_EN  0x0002     //PWM7H chopping function is enabled

#define PWM7H_OP_CHOP_DIS 0x0000      //PWM7H chopping function is disabled



/*----------------------------------------------------------------------------------------------------*/
/* AUXCON8 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM8L_OP_CHOP_EN  0x0001     //PWM8L chopping function is enabled

#define PWM8L_OP_CHOP_DIS 0x0000      //PWM8L chopping function is disabled


#define PWM8H_OP_CHOP_EN  0x0002     //PWM8H chopping function is enabled

#define PWM8H_OP_CHOP_DIS 0x0000      //PWM8H chopping function is disabled


/*----------------------------------------------------------------------------------------------------*/
/* AUXCON9 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define PWM9L_OP_CHOP_EN  0x0001     //PWM9L chopping function is enabled

#define PWM9L_OP_CHOP_DIS 0x0000      //PWM9L chopping function is disabled


#define PWM9H_OP_CHOP_EN  0x0002     //PWM9H chopping function is enabled

#define PWM9H_OP_CHOP_DIS 0x0000      //PWM9H chopping function is disabled






/*----------------------------------------------------------------------------------------------------*/
/* Enable/Disable PWM interrupt : */
/*----------------------------------------------------------------------------------------------------*/
#define PWM1_INT_EN						0x0001  /*PWM Generator 1 Interrupt request Enable */
#define PWM1_INT_DIS					0x0000  /*PWM Generator 1 Interrupt request Disable */

#define PWM2_INT_EN						0x0001  /*PWM Generator 2 Interrupt request Enable */
#define PWM2_INT_DIS					0x0000  /*PWM Generator 2 Interrupt request Disable */

#define PWM3_INT_EN						0x0001  /*PWM Generator 3 Interrupt request Enable */
#define PWM3_INT_DIS					0x0000  /*PWM Generator 3 Interrupt request Disable */

#define PWM4_INT_EN						0x0001  /*PWM Generator 4 Interrupt request Enable */
#define PWM4_INT_DIS					0x0000  /*PWM Generator 4 Interrupt request Disable */


#define PWM5_INT_EN						0x0001  /*PWM Generator 5 Interrupt request Enable */
#define PWM5_INT_DIS					0x0000  /*PWM Generator 5 Interrupt request Disable */

#define PWM6_INT_EN						0x0001  /*PWM Generator 6 Interrupt request Enable */
#define PWM6_INT_DIS					0x0000  /*PWM Generator 6 Interrupt request Disable */

#define PWM7_INT_EN						0x0001  /*PWM Generator 7 Interrupt request Enable */
#define PWM7_INT_DIS					0x0000  /*PWM Generator 7 Interrupt request Disable */

#define PWM8_INT_EN						0x0001  /*PWM Generator 8 Interrupt request Enable */
#define PWM8_INT_DIS					0x0000  /*PWM Generator 8 Interrupt request Disable */


#define PWM9_INT_EN						0x0001  /*PWM Generator 9 Interrupt request Enable */
#define PWM9_INT_DIS					0x0000  /*PWM Generator 9 Interrupt request Disable */



#define PWM_SEVT_MATCH_INT_EN			0x0001  /*PWM Special Event match Interrupt request Enable */
#define PWM_SEVT_MATCH_INT_DIS			0x0000  /*PWM Special Event match Interrupt request Disable */




/*----------------------------------------------------------------------------------------------------*/
/* PWM interrupt priority : */
/*----------------------------------------------------------------------------------------------------*/
#define PWM1_INT_PR7					0x0007  /* PWM Generator 1 Interrupt priority 7(High Priority) */
#define PWM1_INT_PR6					0x0006  /* PWM Generator 1 Interrupt priority 6                */
#define PWM1_INT_PR5					0x0005  /* PWM Generator 1 Interrupt priority 5                */
#define PWM1_INT_PR4					0x0004  /* PWM Generator 1 Interrupt priority 4                */
#define PWM1_INT_PR3					0x0003  /* PWM Generator 1 Interrupt priority 3                */
#define PWM1_INT_PR2					0x0002  /* PWM Generator 1 Interrupt priority 2                */
#define PWM1_INT_PR1					0x0001  /* PWM Generator 1 Interrupt priority 1(Low Priority)  */
#define PWM1_INT_DIS					0x0000  /* PWM Generator 1 Interrupt priority Disabled         */

#define PWM2_INT_PR7					0x0007  /* PWM Generator 2 Interrupt priority 7(High Priority) */
#define PWM2_INT_PR6					0x0006  /* PWM Generator 2 Interrupt priority 6                */
#define PWM2_INT_PR5					0x0005  /* PWM Generator 2 Interrupt priority 5                */
#define PWM2_INT_PR4					0x0004  /* PWM Generator 2 Interrupt priority 4                */
#define PWM2_INT_PR3					0x0003  /* PWM Generator 2 Interrupt priority 3                */
#define PWM2_INT_PR2					0x0002  /* PWM Generator 2 Interrupt priority 2                */
#define PWM2_INT_PR1					0x0001  /* PWM Generator 2 Interrupt priority 1(Low Priority)  */
#define PWM2_INT_DIS					0x0000  /* PWM Generator 2 Interrupt priority Disabled         */

#define PWM3_INT_PR7					0x0007  /* PWM Generator 3 Interrupt priority 7(High Priority) */
#define PWM3_INT_PR6					0x0006  /* PWM Generator 3 Interrupt priority 6                */
#define PWM3_INT_PR5					0x0005  /* PWM Generator 3 Interrupt priority 5                */
#define PWM3_INT_PR4					0x0004  /* PWM Generator 3 Interrupt priority 4                */
#define PWM3_INT_PR3					0x0003  /* PWM Generator 3 Interrupt priority 3                */
#define PWM3_INT_PR2					0x0002  /* PWM Generator 3 Interrupt priority 2                */
#define PWM3_INT_PR1					0x0001  /* PWM Generator 3 Interrupt priority 1(Low Priority)  */
#define PWM3_INT_DIS					0x0000  /* PWM Generator 3 Interrupt priority Disabled         */

#define PWM4_INT_PR7					0x0007  /* PWM Generator 4 Interrupt priority 7(High Priority) */
#define PWM4_INT_PR6					0x0006  /* PWM Generator 4 Interrupt priority 6                */
#define PWM4_INT_PR5					0x0005  /* PWM Generator 4 Interrupt priority 5                */
#define PWM4_INT_PR4					0x0004  /* PWM Generator 4 Interrupt priority 4                */
#define PWM4_INT_PR3					0x0003  /* PWM Generator 4 Interrupt priority 3                */
#define PWM4_INT_PR2					0x0002  /* PWM Generator 4 Interrupt priority 2                */
#define PWM4_INT_PR1					0x0001  /* PWM Generator 4 Interrupt priority 1(Low Priority)  */
#define PWM4_INT_DIS					0x0000  /* PWM Generator 4 Interrupt priority Disabled         */

#define PWM5_INT_PR7					0x0007  /* PWM Generator 5 Interrupt priority 7(High Priority) */
#define PWM5_INT_PR6					0x0006  /* PWM Generator 5 Interrupt priority 6                */
#define PWM5_INT_PR5					0x0005  /* PWM Generator 5 Interrupt priority 5                */
#define PWM5_INT_PR4					0x0004  /* PWM Generator 5 Interrupt priority 4                */
#define PWM5_INT_PR3					0x0003  /* PWM Generator 5 Interrupt priority 3                */
#define PWM5_INT_PR2					0x0002  /* PWM Generator 5 Interrupt priority 2                */
#define PWM5_INT_PR1					0x0001  /* PWM Generator 5 Interrupt priority 1(Low Priority)  */
#define PWM5_INT_DIS					0x0000  /* PWM Generator 5 Interrupt priority Disabled         */

#define PWM6_INT_PR7					0x0007  /* PWM Generator 6 Interrupt priority 7(High Priority) */
#define PWM6_INT_PR6					0x0006  /* PWM Generator 6 Interrupt priority 6                */
#define PWM6_INT_PR5					0x0005  /* PWM Generator 6 Interrupt priority 5                */
#define PWM6_INT_PR4					0x0004  /* PWM Generator 6 Interrupt priority 4                */
#define PWM6_INT_PR3					0x0003  /* PWM Generator 6 Interrupt priority 3                */
#define PWM6_INT_PR2					0x0002  /* PWM Generator 6 Interrupt priority 2                */
#define PWM6_INT_PR1					0x0001  /* PWM Generator 6 Interrupt priority 1(Low Priority)  */
#define PWM6_INT_DIS					0x0000  /* PWM Generator 6 Interrupt priority Disabled         */

#define PWM7_INT_PR7					0x0007  /* PWM Generator 7 Interrupt priority 7(High Priority) */
#define PWM7_INT_PR6					0x0006  /* PWM Generator 7 Interrupt priority 6                */
#define PWM7_INT_PR5					0x0005  /* PWM Generator 7 Interrupt priority 5                */
#define PWM7_INT_PR4					0x0004  /* PWM Generator 7 Interrupt priority 4                */
#define PWM7_INT_PR3					0x0003  /* PWM Generator 7 Interrupt priority 3                */
#define PWM7_INT_PR2					0x0002  /* PWM Generator 7 Interrupt priority 2                */
#define PWM7_INT_PR1					0x0001  /* PWM Generator 7 Interrupt priority 1(Low Priority)  */
#define PWM7_INT_DIS					0x0000  /* PWM Generator 7 Interrupt priority Disabled         */


#define PWM8_INT_PR7					0x0007  /* PWM Generator 8 Interrupt priority 7(High Priority) */
#define PWM8_INT_PR6					0x0006  /* PWM Generator 8 Interrupt priority 6                */
#define PWM8_INT_PR5					0x0005  /* PWM Generator 8 Interrupt priority 5                */
#define PWM8_INT_PR4					0x0004  /* PWM Generator 8 Interrupt priority 4                */
#define PWM8_INT_PR3					0x0003  /* PWM Generator 8 Interrupt priority 3                */
#define PWM8_INT_PR2					0x0002  /* PWM Generator 8 Interrupt priority 2                */
#define PWM8_INT_PR1					0x0001  /* PWM Generator 8 Interrupt priority 1(Low Priority)  */
#define PWM8_INT_DIS					0x0000  /* PWM Generator 8 Interrupt priority Disabled         */

#define PWM9_INT_PR7					0x0007  /* PWM Generator 9 Interrupt priority 7(High Priority) */
#define PWM9_INT_PR6					0x0006  /* PWM Generator 9 Interrupt priority 6                */
#define PWM9_INT_PR5					0x0005  /* PWM Generator 9 Interrupt priority 5                */
#define PWM9_INT_PR4					0x0004  /* PWM Generator 9 Interrupt priority 4                */
#define PWM9_INT_PR3					0x0003  /* PWM Generator 9 Interrupt priority 3                */
#define PWM9_INT_PR2					0x0002  /* PWM Generator 9 Interrupt priority 2                */
#define PWM9_INT_PR1					0x0001  /* PWM Generator 9 Interrupt priority 1(Low Priority)  */
#define PWM9_INT_DIS					0x0000  /* PWM Generator 9 Interrupt priority Disabled         */



#define PWM_SEVT_MATCH_INT_PR7			0x0007  /* PWM Special Event match Interrupt priority 7(High Priority) */
#define PWM_SEVT_MATCH_INT_PR6			0x0006  /* PWM Special Event match Interrupt priority 6                */
#define PWM_SEVT_MATCH_INT_PR5			0x0005  /* PWM Special Event match Interrupt priority 5                */
#define PWM_SEVT_MATCH_INT_PR4			0x0004  /* PWM Special Event match Interrupt priority 4                */
#define PWM_SEVT_MATCH_INT_PR3			0x0003  /* PWM Special Event match Interrupt priority 3                */
#define PWM_SEVT_MATCH_INT_PR2			0x0002  /* PWM Special Event match Interrupt priority 2                */
#define PWM_SEVT_MATCH_INT_PR1			0x0001  /* PWM Special Event match Interrupt priority 1(Low Priority)  */
#define PWM_SEVT_MATCH_INT_DIS			0x0000  /* PWM Special Event match Interrupt priority Disabled         */



/*****************************Function prototypes**************************************************/
void OpenSmpsPWM(unsigned int config1, unsigned int config2,unsigned int config3, unsigned int config4) __attribute__ ((section (".libperi")));
void ConfigSmpsPWMInputClkDiv(unsigned int prescaler_val) __attribute__ ((section (".libperi")));

#if defined (__dsPIC30F__)
void ConfigSmpsPWM1(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM2(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM3(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM4(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4) __attribute__ ((section (".libperi")));

#elif defined (__dsPIC33F__)
void ConfigSmpsPWM1(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM2(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM3(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM4(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM5(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM6(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM7(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM8(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));
void ConfigSmpsPWM9(unsigned int config1, unsigned int config2, unsigned int config3, unsigned int config4, unsigned int config5) __attribute__ ((section (".libperi")));

#endif

void SetSmpsPWMDutyCycle1(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMDutyCycle2(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMDutyCycle3(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMDutyCycle4(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMDutyCycle5(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMDutyCycle6(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMDutyCycle7(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMDutyCycle8(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMDutyCycle9(unsigned int dutycycle) __attribute__ ((section (".libperi")));


void SetSmpsPWMSecDutyCycle1(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecDutyCycle2(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecDutyCycle3(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecDutyCycle4(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecDutyCycle5(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecDutyCycle6(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecDutyCycle7(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecDutyCycle8(unsigned int dutycycle) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecDutyCycle9(unsigned int dutycycle) __attribute__ ((section (".libperi")));

void SetSmpsPWMDeadTime1(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetSmpsPWMDeadTime2(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetSmpsPWMDeadTime3(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetSmpsPWMDeadTime4(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetSmpsPWMDeadTime5(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetSmpsPWMDeadTime6(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetSmpsPWMDeadTime7(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetSmpsPWMDeadTime8(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));
void SetSmpsPWMDeadTime9(unsigned int deadtime, unsigned int altdeadtime) __attribute__ ((section (".libperi")));


void SetSmpsPWMTrigCmp1(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMTrigCmp2(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMTrigCmp3(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMTrigCmp4(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMTrigCmp5(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMTrigCmp6(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMTrigCmp7(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMTrigCmp8(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMTrigCmp9(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));

void SetSmpsPWMSecTrigCmp1(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecTrigCmp2(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecTrigCmp3(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecTrigCmp4(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecTrigCmp5(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecTrigCmp6(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecTrigCmp7(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecTrigCmp8(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));
void SetSmpsPWMSecTrigCmp9(unsigned int TrigCmp_Val) __attribute__ ((section (".libperi")));

#ifdef _ADCP7IF
void SetSmpsPWMLebTime1(unsigned int leb1, unsigned int leb2) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime2(unsigned int leb1, unsigned int leb2) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime3(unsigned int leb1, unsigned int leb2) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime4(unsigned int leb1, unsigned int leb2) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime5(unsigned int leb1, unsigned int leb2) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime6(unsigned int leb1, unsigned int leb2) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime7(unsigned int leb1, unsigned int leb2) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime8(unsigned int leb1, unsigned int leb2) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime9(unsigned int leb1, unsigned int leb2) __attribute__ ((section (".libperi")));
#else
void SetSmpsPWMLebTime1(unsigned int leb) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime2(unsigned int leb) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime3(unsigned int leb) __attribute__ ((section (".libperi")));
void SetSmpsPWMLebTime4(unsigned int leb) __attribute__ ((section (".libperi")));
#endif

void ConfigIntSmpsPWM1(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntSmpsPWM2(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntSmpsPWM3(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntSmpsPWM4(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntSmpsPWM5(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntSmpsPWM6(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntSmpsPWM7(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntSmpsPWM8(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));
void ConfigIntSmpsPWM9(unsigned int pwm_intp, unsigned int pwm_intp_priority ) __attribute__ ((section (".libperi")));



void ConfigSmpsPWMFault1(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigSmpsPWMFault2(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigSmpsPWMFault3(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigSmpsPWMFault4(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigSmpsPWMFault5(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigSmpsPWMFault6(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigSmpsPWMFault7(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigSmpsPWMFault8(unsigned int config1) __attribute__ ((section (".libperi")));
void ConfigSmpsPWMFault9(unsigned int config1) __attribute__ ((section (".libperi")));


void SetSmpsPWMPriTimeBaseCapVal1(unsigned int capture_val) __attribute__ ((section (".libperi")));
void SetSmpsPWMPriTimeBaseCapVal2(unsigned int capture_val) __attribute__ ((section (".libperi")));
void SetSmpsPWMPriTimeBaseCapVal3(unsigned int capture_val) __attribute__ ((section (".libperi")));
void SetSmpsPWMPriTimeBaseCapVal4(unsigned int capture_val) __attribute__ ((section (".libperi")));
void SetSmpsPWMPriTimeBaseCapVal5(unsigned int capture_val) __attribute__ ((section (".libperi")));
void SetSmpsPWMPriTimeBaseCapVal6(unsigned int capture_val) __attribute__ ((section (".libperi")));
void SetSmpsPWMPriTimeBaseCapVal7(unsigned int capture_val) __attribute__ ((section (".libperi")));
void SetSmpsPWMPriTimeBaseCapVal8(unsigned int capture_val) __attribute__ ((section (".libperi")));
void SetSmpsPWMPriTimeBaseCapVal9(unsigned int capture_val) __attribute__ ((section (".libperi")));





void CloseSmpsPWM(void) __attribute__ ((section (".libperi")));

/*******************************************Macros******************************************/
/* Macros to  Enable/Disable interrupts and set Interrupt priority of PWM */


#define SetIntSmpsPWM1(state)                    		(_PWM1IE = state)
#define SetPriorityIntSmpsPWM1(priority)				(_PWM1IP = priority)

#define SetIntSmpsPWM2(state)                    		(_PWM2IE = state)
#define SetPriorityIntSmpsPWM2(priority)				(_PWM2IP = priority)

#define SetIntSmpsPWM3(state)                    		(_PWM3IE = state)
#define SetPriorityIntSmpsPWM3(priority)				(_PWM3IP = priority)

#define SetIntSmpsPWM4(state)                    		(_PWM4IE = state)
#define SetPriorityIntSmpsPWM4(priority)				(_PWM4IP = priority)


#define SetIntSmpsPWM5(state)                    		(_PWM5IE = state)
#define SetPriorityIntSmpsPWM5(priority)				(_PWM5IP = priority)

#define SetIntSmpsPWM6(state)                    		(_PWM6IE = state)
#define SetPriorityIntSmpsPWM6(priority)				(_PWM6IP = priority)

#define SetIntSmpsPWM7(state)                    		(_PWM7IE = state)
#define SetPriorityIntSmpsPWM7(priority)				(_PWM7IP = priority)

#define SetIntSmpsPWM8(state)                    		(_PWM8IE = state)
#define SetPriorityIntSmpsPWM8(priority)				(_PWM8IP = priority)

#define SetIntSmpsPWM9(state)                    		(_PWM9IE = state)
#define SetPriorityIntSmpsPWM9(priority)				(_PWM9IP = priority)


#define SetIntSmpsPWMSevtMatch(state)                   (_PSEMIE = state)
#define SetPriorityIntSmpsPWMSevtMatch(priority)		(_PSEMIP = priority)

#define ClearIntSmpsPWM1()                              (_PWM1IF = 0)
#define ClearIntSmpsPWM2()                              (_PWM2IF = 0) 
#define ClearIntSmpsPWM3()                              (_PWM3IF = 0)
#define ClearIntSmpsPWM4()                              (_PWM4IF = 0)
#define ClearIntSmpsPWM5()                              (_PWM5IF = 0)
#define ClearIntSmpsPWM6()                              (_PWM6IF = 0) 
#define ClearIntSmpsPWM7()                              (_PWM7IF = 0)
#define ClearIntSmpsPWM8()                              (_PWM8IF = 0)
#define ClearIntSmpsPWM9()                              (_PWM9IF = 0)



#define ClearIntSmpsPWMSevtMatch()                      (_PSEMIF = 0)

#endif /*__SMPSPWM_H */
