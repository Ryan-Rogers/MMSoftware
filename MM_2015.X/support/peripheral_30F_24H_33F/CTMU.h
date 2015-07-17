#if defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined(__PIC24E__)
#include <p24Exxxx.h>
#else
#error "Does not build on this target"
#endif

#include "Generic.h"
#include "peripheralversion.h"

#ifndef __CTMU_H
#define __CTMU_H

#ifdef _CTMUIF
	
#define CTMUCON1_VALUE					0x0000
#define CTMUCON2_VALUE					0x0000
#define CTMUICON_VALUE					0x0000

/*----------------------------------------------------------------------------------------------------*/
/* CTMUCON1 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define CTMU_ENABLE						0xbF00				
#define CTMU_DISABLE					0x3F00

#define CTMU_STOP_IDLE					0xbF00
#define CTMU_CONTINUE_IDLE				0x9F00

#define CTMU_DELAY_ENABLE				0xbF00
#define CTMU_DELAY_DISABLE				0xcF00

#define CTMU_EDGE_NOT_BLOCKED			0xbF00
#define CTMU_EDGE_BLOCKED				0xb700

#define CTMU_EDGE_EVENT					0xbF00
#define CTMU_NO_EDGE_EVENT				0xbB00

#define CTMU_ANALOG_GROUND				0xbF00
#define CTMU_ANALOG_NO_GROUND			0xbD00

#define CTMU_TRIG_ENABLE				0xbF00
#define CTMU_TRIG_DISABLE				0xbE00

/*----------------------------------------------------------------------------------------------------*/
/* CTMUCON2 Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define CTMU_EDGE1_EDGE					0xFFFC			
#define CTMU_EDGE1_LEVEL				0x7FFC

#define CTMU_EDGE1_POSITIVE				0xFFFC
#define CTMU_EDGE1_NEGATIVE				0xFBFC

#ifdef _C5EVT
#define CTMU_EDGE1_SOURCE_FOSC			0xFFFC
#define CTMU_EDGE1_SOURCE_OSCI			0xFBFC
#define CTMU_EDGE1_SOURCE_FRC			0xF7FC
#define CTMU_EDGE1_SOURCE_LPRC			0xEFFC
#define CTMU_EDGE1_SOURCE_TIMER1		0xC3FC
#define CTMU_EDGE1_SOURCE_OC1			0xC7FC
#define CTMU_EDGE1_SOURCE_CTED2			0xCBFC
#define CTMU_EDGE1_SOURCE_CTED1			0xCFFC
#else
#define CTMU_EDGE1_SOURCE_TIMER1		0xC3FC
#define CTMU_EDGE1_SOURCE_OC1			0xFDFC
#define CTMU_EDGE1_SOURCE_CTED2			0xFEFC
#define CTMU_EDGE1_SOURCE_CTED1			0xFFFC
#endif

#define CTMU_EDGE2_OCCUR				0xFFFC
#define CTMU_EDGE2_NOT_OCCUR			0xFDFC

#define CTMU_EDGE1_OCCUR				0xFFFC
#define CTMU_EDGE1_NOT_OCCUR			0xFEFC

#define CTMU_EDGE2_EDGE					0xFFFC
#define CTMU_EDGE2_LEVEL				0xFF7C

#define CTMU_EDGE2_POSITIVE				0xFFFC
#define CTMU_EDGE2_NEGATIVE				0xFFBC

#ifdef _C5EVT
#define CTMU_EDGE2_SOURCE_FOSC			0xFFFC
#define CTMU_EDGE2_SOURCE_OSCI			0xFFF8
#define CTMU_EDGE2_SOURCE_FRC			0xFFF4
#define CTMU_EDGE2_SOURCE_LPRC			0xFFEC
#define CTMU_EDGE2_SOURCE_CMP1			0xFFD0
#define CTMU_EDGE2_SOURCE_TIMER1		0xFFC0
#define CTMU_EDGE2_SOURCE_OC1			0xFFC4
#define CTMU_EDGE2_SOURCE_CTED1			0xFFC8
#define CTMU_EDGE2_SOURCE_CTED2			0xFFCC
#else
#define CTMU_EDGE2_SOURCE_IC1			0xFFC0
#define CTMU_EDGE2_SOURCE_OC1			0xFFC4
#define CTMU_EDGE2_SOURCE_CTED1			0xFFC8
#define CTMU_EDGE2_SOURCE_CTED2			0xFFCC	
#define CTMU_EDGE2_SOURCE_CMP1			0xFFD0	
#endif

/*----------------------------------------------------------------------------------------------------*/
/* CTMUICON Configuration Bit Definitions : */
/*----------------------------------------------------------------------------------------------------*/

#define CTMU_CURR_RANGE_100_BASE_CURR 			0xFF00 /*Current source Range is 100*Base current (55uA) */
#define CTMU_CURR_RANGE_10_BASE_CURR  			0xFE00 /*Current source Range is 10*Base current (5.5uA)*/
#define CTMU_CURR_RANGE_BASE_CURR     			0xFD00 /*Current source Range is Base current (0.55uA)*/

#if defined (__dsPIC33E__) || defined (__PIC24E__)
#define CTMU_CURR_RANGE_1000_BASE_CURR     		0xFC00 /*Current source Range is 1000*Base current (550uA) */
#else
#define CTMU_CURR_SOURCE_DISABLE     			0xFC00 /*Current source disabled*/
#endif

#define CTMU_CURR_TRIM_MAX_POS				0x7F00 /* Maximum positive change from nominal current */
#define CTMU_CURR_TRIM_MIN_POS				0x0400 /* Minimum positive change from nominal current */
#define CTMU_CURR_TRIM_NOMINAL				0x0300 /* Nominal current output specified by IRNG<1:0> */
#define CTMU_CURR_TRIM_MIN_NEG				0xFF00 /* Minimum negative change from nominal current */
#define CTMU_CURR_TRIM_MAX_NEG				0x8400 /* Maximum negative change from nominal current */

//  Interrupt priority
#define CTMU_INT_PRIOR_7      0xffff      /* 111 = Interrupt is priority 7 */
#define CTMU_INT_PRIOR_6      0xfffe      /* 110 = Interrupt is priority 6 */
#define CTMU_INT_PRIOR_5      0xfffd      /* 101 = Interrupt is priority 5 */
#define CTMU_INT_PRIOR_4      0xfffc      /* 100 = Interrupt is priority 4 */
#define CTMU_INT_PRIOR_3      0xfffb      /* 011 = Interrupt is priority 3 */
#define CTMU_INT_PRIOR_2      0xfffa      /* 010 = Interrupt is priority 2 */
#define CTMU_INT_PRIOR_1      0xfff9      /* 001 = Interrupt is priority 1 */
#define CTMU_INT_PRIOR_0      0xfff8      /* 000 = Interrupt is priority 0 */

#define CTMU_INT_ON           0xffff      /* Interrupt Enable */
#define CTMU_INT_OFF          0xfff7      /* Interrupt Disable */


/************************************************************************
Macro       : Enbl_CTMUTGEN
Overview    : By setting TGEN bit, edge delay generation is enabled  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUTGEN  				(CTMUCON1bits.TGEN = 1)

/************************************************************************
Macro       : Enbl_CTMUTRIG
Overview    : By setting CTTRIG bit, Trigger output is enabled 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUTRIG 				(CTMUCON1bits.CTTRIG = 1)

/************************************************************************
Macro       : Enbl_EDGE
Overview    : By setting EDGEN bit, edges are not blocked  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_EDGE  				(CTMUCON1bits.EDGEN = 1)

/************************************************************************
Macro       : Disbl_EDGE
Overview    : By clearing EDGEN bit, edges are blocked 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_EDGE				(CTMUCON1bits.EDGEN = 0)

/************************************************************************
Macro        :Disbl_CTMUTGEN
Overview    : By clearing TGEN bit, disable the edge delay generation
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUTGEN 				(CTMUCON1bits.TGEN = 0)

/************************************************************************
Macro       :Disbl_CTMUTRIG
Overview    : By clearing CTTRIG bit disable the Trigger output 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUTRIG				(CTMUCON1bits.CTTRIG = 0)

/************************************************************************
Macro       : CTMUEdge1_Status
Overview    : Returns the status of CTMU edge1  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define CTMUEdge1_Status      			(CTMUCON2bits.EDGE1)

/************************************************************************
Macro       : CTMUEdge2_Status
Overview    : Returns the status of CTMU edge2 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define CTMUEdge2_Status  	 		(CTMUCON2bits.EDGE2)

/***********************************************************************
Macro      : EnableIntCTMU 
Overview   : This macro enables the CTMU interrupt. 
Parameters : None 
Remarks    : This macro sets CTMU Interrupt Enable bit of Interrupt 
                  Enable Control Register.
************************************************************************/ 
#define EnableIntCTMU                		(IEC4bits.CTMUIE = 1)

/***********************************************************************
Macro      : DisableIntCTMU 
Overview   : This macro disables the CTMU interrupt.
Parameters : None
Remarks    : This macro clears CTMU Interrupt Enable bit of Interrupt 
             Enable Control register.
************************************************************************/ 
#define DisableIntCTMU               		(IEC4bits.CTMUIE = 0)

/***********************************************************************
Macro      : SetPriorityIntCTMU(priority) 
Overview   : This macro sets priority for CTMU interrupt. 
Parameters : priority - This input parameter is the level of interrupt priority 
Remarks    : This macro sets CTMU Interrupt Priority bits of Interrupt 
             Priority Control register.
************************************************************************/  
#define SetPriorityIntCTMU(priority)    	(IPC19bits.CTMUIP = priority)

/*******************************************************************
Macro       : CTMU_Clear_Intr_Status_Bit 
Overview    : Macro to Clear CTMU Interrupt Status bit 
Parameters  : None 
Remarks     : None 
*******************************************************************/
#define CTMU_Clear_Intr_Status_Bit    		(IFS4bits.CTMUIF = 0) 

  
void __attribute__ ((section (".libperi")))ConfigIntCTMU(unsigned int config);

void __attribute__ ((section (".libperi")))OpenCTMU(unsigned int config1, unsigned int config2, unsigned int config3);

void __attribute__ ((section (".libperi")))CurrentControlCTMU(unsigned int config);

void __attribute__ ((section (".libperi")))CloseCTMU(void);

#endif 
 
#endif 

