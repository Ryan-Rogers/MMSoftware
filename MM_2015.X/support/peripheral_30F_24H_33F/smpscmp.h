/********************************************************************/
//              Header for Analog Comparator module library functions      */
/********************************************************************/

#if defined(__dsPIC30F__) 
#include <p30Fxxxx.h>
#elif defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#endif

#ifndef __SMPSCMP_H
#define __SMPSCMP_H

/* List of SFRs for Analog comparator */
/* This list contains the SFRs with default (POR) values to be used for configuring Analog comparator module */
/* The user can modify this based on the requirement */

#define CMPCON1_VALUE					0x0000
#define CMPCON2_VALUE					0x0000
#define CMPCON3_VALUE					0x0000
#define CMPCON4_VALUE					0x0000

#define CMPDAC1_VALUE					0x0000
#define CMPDAC2_VALUE					0x0000
#define CMPDAC3_VALUE					0x0000
#define CMPDAC4_VALUE					0x0000
			

/*----------------------------------------------------------------------------------------------------*/
/* CMPCON1 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define CMP1_MOD_EN						0x8000  /* Analog comparator #1 module Enabled */
#define CMP1_MOD_DIS					0x0000  /* Analog comparator #1 module Enabled */

#define CMP1_IDLE_DISCONT				0x2000  /* Discontinue device operation when device enters idle mode */
#define CMP1_IDLE_CONT					0x0000  /* Continue device operation in idle mode */

#define CMP1_DAC_OUTPUT_ENABLE			0x0100  /* Enable the DAC Output on DACOUT pin */
#define CMP1_DAC_OUTPUT_DISABLE			0x0000  /* Disable the DAC Output on DACOUT pin */

#define CMP1_A_SEL						0x0000  /* Select comparator #1A as Input pin */
#define CMP1_B_SEL						0x0040  /* Select comparator #1B as Input pin */
#define CMP1_C_SEL						0x0080  /* Select comparator #1C as Input pin */
#define CMP1_D_SEL						0x00C0  /* Select comparator #1D as Input pin */

#define CMP1_SOURCE_SEL_EXT				0x0020  /* External source provides reference to DAC */
#define CMP1_SOURCE_SEL_INT				0x0000  /* Internal reference source provides source to DAC */

#define CMP1_STATE						0x0000  /* Current state of comparator output including the polarity selection bit */

#define CMP1_OP_INV						0x0002  /* comparator output is inverted */
#define CMP1_OP_NONINV					0x0000  /* comparator output is non inverted */

#define CMP1_VOL_HIGH					0x0001  /* High Range: Max DAC value = Analog VDD voltage/2 ie 2.5V @ 5V VDD Voltage */
#define CMP1_VOL_LOW					0x0000  /* Low Range: Max DAC value = Internal reference voltage ie 1.2V +-1% */


/*----------------------------------------------------------------------------------------------------*/
/* CMPCON2 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define CMP2_MOD_EN						0x8000  /* Analog comparator #2 module Enabled */
#define CMP2_MOD_DIS					0x0000  /* Analog comparator #2 module Enabled */

#define CMP2_IDLE_DISCONT				0x2000  /* Discontinue device operation when device enters idle mode */
#define CMP2_IDLE_CONT					0x0000  /* Continue device operation in idle mode */

#define CMP2_DAC_OUTPUT_ENABLE			0x0100  /* Enable the DAC Output on DACOUT pin */
#define CMP2_DAC_OUTPUT_DISABLE			0x0000  /* Disable the DAC Output on DACOUT pin */

#define CMP2_A_SEL						0x0000  /* Select comparator #2A as Input pin */
#define CMP2_B_SEL						0x0040  /* Select comparator #2B as Input pin */
#define CMP2_C_SEL						0x0080  /* Select comparator #2C as Input pin */
#define CMP2_D_SEL						0x00C0  /* Select comparator #2D as Input pin */

#define CMP2_SOURCE_SEL_EXT				0x0020  /* External source provides reference to DAC */
#define CMP2_SOURCE_SEL_INT				0x0000  /* Internal reference source provides source to DAC */

#define CMP2_STATE						0x0000  /* Current state of comparator output including the polarity selection bit */

#define CMP2_OP_INV						0x0002  /* comparator output is inverted */
#define CMP2_OP_NONINV					0x0000  /* comparator output is non inverted */

#define CMP2_VOL_HIGH					0x0001  /* High Range: Max DAC value = Analog VDD voltage/2 ie 2.5V @ 5V VDD Voltage */
#define CMP2_VOL_LOW					0x0000  /* Low Range: Max DAC value = Internal reference voltage ie 1.2V +-1% */

/*----------------------------------------------------------------------------------------------------*/
/* CMPCON3 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define CMP3_MOD_EN						0x8000  /* Analog comparator #3 module Enabled */
#define CMP3_MOD_DIS					0x0000  /* Analog comparator #3 module Enabled */

#define CMP3_IDLE_DISCONT				0x2000  /* Discontinue device operation when device enters idle mode */
#define CMP3_IDLE_CONT					0x0000  /* Continue device operation in idle mode */

#define CMP3_DAC_OUTPUT_ENABLE			0x0100  /* Enable the DAC Output on DACOUT pin */
#define CMP3_DAC_OUTPUT_DISABLE			0x0000  /* Disable the DAC Output on DACOUT pin */

#define CMP3_A_SEL						0x0000  /* Select comparator #3A as Input pin */
#define CMP3_B_SEL						0x0040  /* Select comparator #3B as Input pin */
#define CMP3_C_SEL						0x0080  /* Select comparator #3C as Input pin */
#define CMP3_D_SEL						0x00C0  /* Select comparator #3D as Input pin */

#define CMP3_SOURCE_SEL_EXT				0x0020  /* External source provides reference to DAC */
#define CMP3_SOURCE_SEL_INT				0x0000  /* Internal reference source provides source to DAC */

#define CMP3_STATE						0x0000  /* Current state of comparator output including the polarity selection bit */

#define CMP3_OP_INV						0x0002  /* comparator output is inverted */
#define CMP3_OP_NONINV					0x0000  /* comparator output is non inverted */

#define CMP3_VOL_HIGH					0x0001  /* High Range: Max DAC value = Analog VDD voltage/2 ie 2.5V @ 5V VDD Voltage */
#define CMP3_VOL_LOW					0x0000  /* Low Range: Max DAC value = Internal reference voltage ie 1.2V +-1% */


/*----------------------------------------------------------------------------------------------------*/
/* CMPCON4 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define CMP4_MOD_EN						0x8000  /* Analog comparator #4 module Enabled */
#define CMP4_MOD_DIS					0x0000  /* Analog comparator #4 module Enabled */

#define CMP4_IDLE_DISCONT				0x2000  /* Discontinue device operation when device enters idle mode */
#define CMP4_IDLE_CONT					0x0000  /* Continue device operation in idle mode */

#define CMP4_DAC_OUTPUT_ENABLE			0x0100  /* Enable the DAC Output on DACOUT pin */
#define CMP4_DAC_OUTPUT_DISABLE			0x0000  /* Disable the DAC Output on DACOUT pin */

#define CMP4_A_SEL						0x0000  /* Select comparator #4A as Input pin */
#define CMP4_B_SEL						0x0040  /* Select comparator #4B as Input pin */
#define CMP4_C_SEL						0x0080  /* Select comparator #4C as Input pin */
#define CMP4_D_SEL						0x00C0  /* Select comparator #4D as Input pin */

#define CMP4_SOURCE_SEL_EXT				0x0020  /* External source provides reference to DAC */
#define CMP4_SOURCE_SEL_INT				0x0000  /* Internal reference source provides source to DAC */

#define CMP4_STATE						0x0000  /* Current state of comparator output including the polarity selection bit */

#define CMP4_OP_INV						0x0002  /* comparator output is inverted */
#define CMP4_OP_NONINV					0x0000  /* comparator output is non inverted */

#define CMP4_VOL_HIGH					0x0001  /* High Range: Max DAC value = Analog VDD voltage/2 ie 2.5V @ 5V VDD Voltage */
#define CMP4_VOL_LOW					0x0000  /* Low Range: Max DAC value = Internal reference voltage ie 1.2V +-1% */

/*----------------------------------------------------------------------------------------------------*/
/* Enable/Disable Comparator interrupt : */
/*----------------------------------------------------------------------------------------------------*/

#define CMP1_INT_EN						0x0001  /*Analog comparator #1 Interrupt Enable */
#define CMP1_INT_DIS					0x0000  /*Analog comparator #1 Interrupt Disable */

#define CMP2_INT_EN						0x0001  /*Analog comparator #2 Interrupt Enable */
#define CMP2_INT_DIS					0x0000  /*Analog comparator #2 Interrupt Disable */

#define CMP3_INT_EN						0x0001  /*Analog comparator #3 Interrupt Enable */
#define CMP3_INT_DIS					0x0000  /*Analog comparator #3 Interrupt Disable */
 
#define CMP4_INT_EN						0x0001  /*Analog comparator #4 Interrupt Enable */
#define CMP4_INT_DIS					0x0000  /*Analog comparator #4 Interrupt Disable */

/*----------------------------------------------------------------------------------------------------*/
/* ADC interrupt priority : */
/*----------------------------------------------------------------------------------------------------*/

#define CMP1_INT_PR7					0x0007  /* Analog comparator #1 Interrupt Priority 7 (High Priority) */
#define CMP1_INT_PR6					0x0006  /* Analog comparator #1 Interrupt Priority 6                 */
#define CMP1_INT_PR5					0x0005  /* Analog comparator #1 Interrupt Priority 5                 */
#define CMP1_INT_PR4					0x0004  /* Analog comparator #1 Interrupt Priority 4                 */
#define CMP1_INT_PR3					0x0003  /* Analog comparator #1 Interrupt Priority 3                 */
#define CMP1_INT_PR2					0x0002  /* Analog comparator #1 Interrupt Priority 2                 */
#define CMP1_INT_PR1					0x0001  /* Analog comparator #1 Interrupt Priority 1 (Low Priority)  */
#define CMP1_INT_DIS					0x0000  /* Analog comparator #1 Interrupt Priority Disabled          */

#define CMP2_INT_PR7					0x0007  /* Analog comparator #2 Interrupt Priority 7 (High Priority) */
#define CMP2_INT_PR6					0x0006  /* Analog comparator #2 Interrupt Priority 6                 */
#define CMP2_INT_PR5					0x0005  /* Analog comparator #2 Interrupt Priority 5                 */
#define CMP2_INT_PR4					0x0004  /* Analog comparator #2 Interrupt Priority 4                 */
#define CMP2_INT_PR3					0x0003  /* Analog comparator #2 Interrupt Priority 3                 */
#define CMP2_INT_PR2					0x0002  /* Analog comparator #2 Interrupt Priority 2                 */
#define CMP2_INT_PR1					0x0001  /* Analog comparator #2 Interrupt Priority 1 (Low Priority)  */
#define CMP2_INT_DIS					0x0000  /* Analog comparator #2 Interrupt Priority Disabled          */

#define CMP3_INT_PR7					0x0007  /* Analog comparator #3 Interrupt Priority 7 (High Priority) */
#define CMP3_INT_PR6					0x0006  /* Analog comparator #3 Interrupt Priority 6                 */
#define CMP3_INT_PR5					0x0005  /* Analog comparator #3 Interrupt Priority 5                 */
#define CMP3_INT_PR4					0x0004  /* Analog comparator #3 Interrupt Priority 4                 */
#define CMP3_INT_PR3					0x0003  /* Analog comparator #3 Interrupt Priority 3                 */
#define CMP3_INT_PR2					0x0002  /* Analog comparator #3 Interrupt Priority 2                 */
#define CMP3_INT_PR1					0x0001  /* Analog comparator #3 Interrupt Priority 1 (Low Priority)  */
#define CMP3_INT_DIS					0x0000  /* Analog comparator #3 Interrupt Priority Disabled          */

#define CMP4_INT_PR7					0x0007  /* Analog comparator #4 Interrupt Priority 7 (High Priority) */
#define CMP4_INT_PR6					0x0006  /* Analog comparator #4 Interrupt Priority 6                 */
#define CMP4_INT_PR5					0x0005  /* Analog comparator #4 Interrupt Priority 5                 */
#define CMP4_INT_PR4					0x0004  /* Analog comparator #4 Interrupt Priority 4                 */
#define CMP4_INT_PR3					0x0003  /* Analog comparator #4 Interrupt Priority 3                 */
#define CMP4_INT_PR2					0x0002  /* Analog comparator #4 Interrupt Priority 2                 */
#define CMP4_INT_PR1					0x0001  /* Analog comparator #4 Interrupt Priority 1 (Low Priority)  */
#define CMP4_INT_DIS					0x0000  /* Analog comparator #4 Interrupt Priority Disabled          */

/*****************************Function prototypes**************************************************/

void OpenSmpsCMP1(unsigned int config1) __attribute__((section (".libperi")));
void OpenSmpsCMP2(unsigned int config1) __attribute__((section (".libperi")));
void OpenSmpsCMP3(unsigned int config1) __attribute__((section (".libperi")));
void OpenSmpsCMP4(unsigned int config1) __attribute__((section (".libperi")));

void SetSmpsCMPRef1(unsigned int config1) __attribute__((section (".libperi")));
void SetSmpsCMPRef2(unsigned int config1) __attribute__((section (".libperi")));
void SetSmpsCMPRef3(unsigned int config1) __attribute__((section (".libperi")));
void SetSmpsCMPRef4(unsigned int config1) __attribute__((section (".libperi")));

void ConfigIntSmpsCMP1(unsigned int cmp_intp, unsigned int cmp_Intp_priority) __attribute__((section (".libperi")));
void ConfigIntSmpsCMP2(unsigned int cmp_intp, unsigned int cmp_Intp_priority) __attribute__((section (".libperi")));
void ConfigIntSmpsCMP3(unsigned int cmp_intp, unsigned int cmp_Intp_priority) __attribute__((section (".libperi")));
void ConfigIntSmpsCMP4(unsigned int cmp_intp, unsigned int cmp_Intp_priority) __attribute__((section (".libperi")));

void CloseSmpsCMP1(void) __attribute__((section (".libperi")));
void CloseSmpsCMP2(void) __attribute__((section (".libperi")));
void CloseSmpsCMP3(void) __attribute__((section (".libperi")));
void CloseSmpsCMP4(void) __attribute__((section (".libperi")));


/*******************************************Macros******************************************/
/* Macros to  Enable/Disable interrupts and set Interrupt priority of Comparator */

#define ClearSmpsCMP1IntFlag()					(_AC1IF = 0)
#define EnableIntSmpsCMP1()                    			(_AC1IE = 1)
#define DisableIntSmpsCMP1()					(_AC1IE = 0)
#define SetPriorityIntSmpsCMP1(priority)			(_AC1IP = priority)

#define ClearSmpsCMP2IntFlag()					(_AC2IF = 0)
#define EnableIntSmpsCMP2()                    			(_AC2IE = 1)
#define DisableIntSmpsCMP2()					(_AC2IE = 0)
#define SetPriorityIntSmpsCMP2(priority)			(_AC2IP = priority)

#define ClearSmpsCMP3IntFlag()					(_AC3IF = 0)
#define EnableIntSmpsCMP3()                    			(_AC3IE = 1)
#define DisableIntSmpsCMP3()					(_AC3IE = 0)
#define SetPriorityIntSmpsCMP3(priority)			(_AC3IP = priority)

#define ClearSmpsCMP4IntFlag()					(_AC4IF = 0)
#define EnableIntSmpsCMP4()                    			(_AC4IE = 1)
#define DisableIntSmpsCMP4()					(_AC4IE = 0)
#define SetPriorityIntSmpsCMP4(priority)			(_AC4IP = priority)


#endif /*__SMPSCMP_H*/




  
