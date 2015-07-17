/********************************************************************/
/*              Header for PTG module library functions           */
/********************************************************************/
#if defined(__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined(__PIC24E__)
#include <p24Exxxx.h>
#else
#error "Does not build on this target"
#endif

#ifndef __PTG_H
#define __PTG_H
#endif


/* List of SFRs for PTG */
/* This list contains the SFRs with default (POR) values to be used for configuring PTG */
/* The user can modify this based on the requirement */
#define PTGCST_VALUE          0x0000
#define PTGCON_VALUE          0x0000
#define PTGBTE_VALUE         0x0000
#define PTGHOLD_VALUE         0x0000
#define PTGT0LIM_VALUE        0x0000
#define PTGT1LIM_VALUE        0x0000
#define PTGSDLIM_VALUE        0x0000
#define PTGC0LIM_VALUE        0x0000
#define PTGC1LIM_VALUE        0x0000
#define PTGADJ_VALUE          0x0000
#define PTGL0_VALUE          0x0000
#define PTGQPTR_VALUE         0x0000

// PTGCST register bit definitions
#define	PTG_ENABLE 					0xFFFF 
#define	PTG_DISABLE					0x7FFF
#define PTG_STOP_IDLE				0xFFFF
#define PTG_CONTINUE_IDLE			0xDFFF
#define PTG_TOGGLE_CLOCK			0xFFFF
#define PTG_TOGGLE_PULSE			0xEFFF
#define	PTG_ENABLE_SINGLE_STEP		0xFFFF
#define	PTG_DISABLE_SINGLE_STEP		0xFDFF
#define	PTG_VISI_CUR				0xFFFF
#define	PTG_VISI_PREV				0xFEFF
#define	PTG_START					0xFFFF
#define	PTG_STOP					0xFF7F
#define	PTG_INPUT_MODE_SINGLE_SD	0xFFFF
#define	PTG_INPUT_MODE_SINGLE_NOSD	0xFFFE
#define	PTG_INPUT_MODE_CONT_NOSD	0xFFFD
#define	PTG_INPUT_MODE_CONT_SD		0xFFFC

// PTGCON register bit definitions
#define	PTG_CLOCK_FP		0x1FFF	
#define	PTG_CLOCK_FOSC		0x3FFF
#define	PTG_CLOCK_ADC		0x5FFF
#define	PTG_CLOCK_T1CLK		0x7FFF
#define	PTG_CLOCK_T2CLK		0x9FFF
#define	PTG_CLOCK_T3CLK		0xBFFF
#define PTG_CLOCK_PRE_32		0xFFFF
#define PTG_CLOCK_PRE_31		0xFEFF
#define PTG_CLOCK_PRE_30		0xFDFF
#define PTG_CLOCK_PRE_29		0xFCFF
#define PTG_CLOCK_PRE_28		0xFBFF
#define PTG_CLOCK_PRE_27		0xFAFF
#define PTG_CLOCK_PRE_26		0xF9FF
#define PTG_CLOCK_PRE_25		0xF8FF
#define PTG_CLOCK_PRE_24		0xF7FF
#define PTG_CLOCK_PRE_23		0xF6FF
#define PTG_CLOCK_PRE_22		0xF5FF
#define PTG_CLOCK_PRE_21		0xF4FF
#define PTG_CLOCK_PRE_20		0xF3FF
#define PTG_CLOCK_PRE_19		0xF2FF
#define PTG_CLOCK_PRE_18		0xF1FF
#define PTG_CLOCK_PRE_17		0xF0FF
#define PTG_CLOCK_PRE_16		0xEFFF
#define PTG_CLOCK_PRE_15		0xEEFF
#define PTG_CLOCK_PRE_14		0xEDFF
#define PTG_CLOCK_PRE_13		0xECFF
#define PTG_CLOCK_PRE_12		0xEBFF
#define PTG_CLOCK_PRE_11		0xEAFF
#define PTG_CLOCK_PRE_10		0xE9FF
#define PTG_CLOCK_PRE_9		0xE8FF
#define PTG_CLOCK_PRE_8		0xE7FF
#define PTG_CLOCK_PRE_7		0xE6FF
#define PTG_CLOCK_PRE_6		0xE5FF
#define PTG_CLOCK_PRE_5		0xE4FF
#define PTG_CLOCK_PRE_4		0xE3FF
#define PTG_CLOCK_PRE_3		0xE2FF
#define PTG_CLOCK_PRE_2		0xE1FF
#define PTG_CLOCK_PRE_1		0xE0FF
#define	PTG_TRIG_WIDTH_16CLK	0xFFFF
#define	PTG_TRIG_WIDTH_15CLK	0xFFEF
#define	PTG_TRIG_WIDTH_14CLK	0xFFDF
#define	PTG_TRIG_WIDTH_13CLK	0xFFCF
#define	PTG_TRIG_WIDTH_12CLK	0xFFBF
#define	PTG_TRIG_WIDTH_11CLK	0xFFAF
#define	PTG_TRIG_WIDTH_10CLK	0xFF9F
#define	PTG_TRIG_WIDTH_9CLK	0xFF8F
#define	PTG_TRIG_WIDTH_8CLK	0xFF7F
#define	PTG_TRIG_WIDTH_7CLK	0xFF6F
#define	PTG_TRIG_WIDTH_6CLK	0xFF5F
#define	PTG_TRIG_WIDTH_5CLK	0xFF4F
#define	PTG_TRIG_WIDTH_4CLK	0xFF3F
#define	PTG_TRIG_WIDTH_3CLK	0xFF2F
#define	PTG_TRIG_WIDTH_2CLK	0xFF1F
#define	PTG_TRIG_WIDTH_1CLK	0xFF0F
#define	PTG_WDT_DISABLE		0xFFF8
#define	PTG_WDT_TIMEOUT_8		0xFFF9
#define	PTG_WDT_TIMEOUT_16	0xFFFA
#define	PTG_WDT_TIMEOUT_32	0xFFFB
#define	PTG_WDT_TIMEOUT_64	0xFFFC
#define	PTG_WDT_TIMEOUT_128	0xFFFD
#define	PTG_WDT_TIMEOUT_256	0xFFFE
#define	PTG_WDT_TIMEOUT_512	0xFFFF

// PTGBTE register bit definitions
#define	PTG_BROADCAST_ADCTS4	0x8000
#define	PTG_BROADCAST_ADCTS3	0x4000
#define	PTG_BROADCAST_ADCTS2	0x2000
#define	PTG_BROADCAST_ADCTS1	0x1000
#define	PTG_BROADCAST_IC4TSS	0x0800
#define	PTG_BROADCAST_IC3TSS	0x0400
#define	PTG_BROADCAST_IC2TSS	0x0200
#define	PTG_BROADCAST_IC1TSS	0x0100
#define	PTG_BROADCAST_OC4CS		0x0080
#define	PTG_BROADCAST_OC3CS		0x0040
#define	PTG_BROADCAST_OC2CS		0x0020
#define	PTG_BROADCAST_OC1CS		0x0010
#define	PTG_BROADCAST_OC4TSS	0x0008
#define	PTG_BROADCAST_OC3TSS	0x0004
#define	PTG_BROADCAST_OC2TSS	0x0002
#define	PTG_BROADCAST_OC1TSS	0x0001

//Software trigger the PTG
#define	PTG_SW_TRIGGER	PTGCSTbits.PTGST = 1


// Configuration registers function prototypes
void ConfigPTGCST(unsigned int config)  __attribute__ ((section(".libperi")));
void ConfigPTGCON(unsigned int config)  __attribute__ ((section(".libperi")));
void ConfigPTGBTE(unsigned int config) __attribute__ ((section (".libperi")));

// Queue pointer values
#define	PTG_QPTR_0		0x00
#define	PTG_QPTR_1		0x01
#define	PTG_QPTR_2		0x02
#define	PTG_QPTR_3		0x03
#define	PTG_QPTR_4		0x04
#define	PTG_QPTR_5		0x05
#define	PTG_QPTR_6		0x06
#define	PTG_QPTR_7		0x07


// Queue pointer configuration function prototype
void ConfigPTGQPTR(unsigned int config)  __attribute__ ((section(".libperi")));

// Limit registers configuration prototypes
void ConfigPTGT0LIM(unsigned int config)  __attribute__ ((section(".libperi")));
void ConfigPTGT1LIM(unsigned int config)  __attribute__ ((section(".libperi")));
void ConfigPTGSDLIM(unsigned int config)  __attribute__ ((section(".libperi")));
void ConfigPTGC0LIM(unsigned int config)  __attribute__ ((section(".libperi")));
void ConfigPTGC1LIM(unsigned int config)  __attribute__ ((section(".libperi")));

// Other PTg register configuration function prototypes
void ConfigPTGHOLD(unsigned int config)  __attribute__ ((section(".libperi")));
void ConfigPTGADJ(unsigned int config)  __attribute__ ((section(".libperi")));
void ConfigPTGL0(unsigned int config)  __attribute__ ((section(".libperi")));



// Step commands and options to be anded (&) together for the step queue registers
// Step Commands
#define PTG_CMD_CTRL		0x0F	 
#define PTG_CMD_ADD_Copy	0x1F	
#define PTG_CMD_STRB		0x2F	 
#define PTG_CMD_WHI			0x4F	 
#define PTG_CMD_WLO			0x5F	 
#define PTG_CMD_IRQ			0x7F	 
#define PTG_CMD_TRIG		0x8F	 
#define PTG_CMD_JMP			0xAF	
#define PTG_CMD_JMPC0		0xCF	
#define PTG_CMD_JMPC1		0xEF	

// Command Options
#define PTG_OPT_0			0xF0	
#define PTG_OPT_1			0xF1	
#define PTG_OPT_2			0xF2	
#define PTG_OPT_3			0xF3	
#define PTG_OPT_4			0xF4	
#define PTG_OPT_5			0xF5	
#define PTG_OPT_6			0xF6	
#define PTG_OPT_7			0xF7	
#define PTG_OPT_8			0xF8	
#define PTG_OPT_9			0xF9	
#define PTG_OPT_A			0xFA	
#define PTG_OPT_B			0xFB	
#define PTG_OPT_C			0xFC	
#define PTG_OPT_D			0xFD	
#define PTG_OPT_E			0xFE	
#define PTG_OPT_F			0xFF	

// Load upper and lower step commands and options to step queue
// CMDx = (PTG_CMD_y & PTG_OPT_y)
void ConfigPTGQue0(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue1(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue2(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue3(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue4(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue5(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue6(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue7(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
#ifdef _C5EVT
void ConfigPTGQue8(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue9(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue10(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue11(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue12(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue13(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue14(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
void ConfigPTGQue15(unsigned int CMD1, unsigned int CMD2) __attribute__ ((section (".libperi")));
#endif
// Load individual step command to step queue's 
void ConfigPTGStep0(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep1(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep2(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep3(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep4(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep5(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep6(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep7(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep8(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep9(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep10(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep11(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep12(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep13(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep14(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep15(unsigned int CMD) __attribute__ ((section (".libperi")));
#ifdef _C5EVT
void ConfigPTGStep16(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep17(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep18(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep19(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep20(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep21(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep22(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep23(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep24(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep25(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep26(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep27(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep28(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep29(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep30(unsigned int CMD) __attribute__ ((section (".libperi")));
void ConfigPTGStep31(unsigned int CMD) __attribute__ ((section (".libperi")));
#endif

//  Interrupt priority
#define PTG_INT_PRIOR_7      0xffff      /* 111 = Interrupt is priority 7 */
#define PTG_INT_PRIOR_6      0xfffe      /* 110 = Interrupt is priority 6 */
#define PTG_INT_PRIOR_5      0xfffd      /* 101 = Interrupt is priority 5 */
#define PTG_INT_PRIOR_4      0xfffc      /* 100 = Interrupt is priority 4 */
#define PTG_INT_PRIOR_3      0xfffb      /* 011 = Interrupt is priority 3 */
#define PTG_INT_PRIOR_2      0xfffa      /* 010 = Interrupt is priority 2 */
#define PTG_INT_PRIOR_1      0xfff9      /* 001 = Interrupt is priority 1 */
#define PTG_INT_PRIOR_0      0xfff8      /* 000 = Interrupt is priority 0 */

#define PTG0_INT_ON           0xffff      /* Interrupt Enable */
#define PTG0_INT_OFF          0xfff7      /* Interrupt Disable */

#define PTG1_INT_ON           0xffff      /* Interrupt Enable */
#define PTG1_INT_OFF          0xfff7      /* Interrupt Disable */

#define PTG2_INT_ON           0xffff      /* Interrupt Enable */
#define PTG2_INT_OFF          0xfff7      /* Interrupt Disable */

#define PTG3_INT_ON           0xffff      /* Interrupt Enable */
#define PTG3_INT_OFF          0xfff7      /* Interrupt Disable */

#define PTGSTEP_INT_ON        0xffff      /* Interrupt Enable */
#define PTGSTEP_INT_OFF       0xfff7      /* Interrupt Disable */

#define PTGWDT_INT_ON         0xffff      /* Interrupt Enable */
#define PTGWDT_INT_OFF        0xfff7      /* Interrupt Disable */


/* Macros to  Enable/Disable interrupts and set Interrupt priority for PTG0*/
#define EnableIntPTG0                    _PTG0IE = 1
#define DisableIntPTG0                   _PTG0IE = 0
#define SetPriorityIntPTG0(priority)     _PTG0IP = (priority)

/* Macros to  Enable/Disable interrupts and set Interrupt priority for PTG1*/
#define EnableIntPTG1                    _PTG1IE = 1
#define DisableIntPTG1                   _PTG1IE = 0
#define SetPriorityIntPTG1(priority)     _PTG1IP = (priority)

/* Macros to  Enable/Disable interrupts and set Interrupt priority for PTG2*/
#define EnableIntPTG2                    _PTG2IE = 1
#define DisableIntPTG2                   _PTG2IE = 0
#define SetPriorityIntPTG2(priority)     _PTG2IP = (priority)

/* Macros to  Enable/Disable interrupts and set Interrupt priority for PTG3*/
#define EnableIntPTG3                    _PTG3IE = 1
#define DisableIntPTG3                   _PTG3IE = 0
#define SetPriorityIntPTG3(priority)     _PTG3IP = (priority)

/* Macros to  Enable/Disable interrupts and set Interrupt priority for PTGSTEP*/
#define EnableIntPTGSTEP                    _PTGSTEPIE = 1
#define DisableIntPTGSTEP                   _PTGSTEPIE = 0
#define SetPriorityIntPTGSTEP(priority)     _PTGSTEPIP = (priority)

/* Macros to  Enable/Disable interrupts and set Interrupt priority for PTGWDT*/
#define EnableIntPTGWDT                    _PTGWDTIE = 1
#define DisableIntPTGWDT                   _PTGWDTIE = 0
#define SetPriorityIntPTGWDT(priority)     _PTGWDTIP = (priority)


/* Config Interrupts for PTG */
void ConfigIntPTGSTEP(unsigned int config) __attribute__ ((section (".libperi")));
void ConfigIntPTGWDT(unsigned int config) __attribute__ ((section (".libperi")));
void ConfigIntPTG0(unsigned int config) __attribute__ ((section (".libperi")));
void ConfigIntPTG1(unsigned int config) __attribute__ ((section (".libperi")));
void ConfigIntPTG2(unsigned int config) __attribute__ ((section (".libperi")));
void ConfigIntPTG3(unsigned int config) __attribute__ ((section (".libperi")));

// Disable module and all interrupts
void ClosePTG(void)  __attribute__ ((section (".libperi")));


