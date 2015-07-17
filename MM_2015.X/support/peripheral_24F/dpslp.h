#ifndef __DPSLP_H
#define __DPSLP_H

 /******************************************************************************
 *
 *                  DEEP SLEEP PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        dpslp.h
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

#if defined (dpslp_v1_1) || defined (dpslp_v1_2) || defined (dpslp_v2_1) || defined (dpslp_v2_2) || defined (dpslp_v2_3) || defined (LIB_BUILD) 

//Status of deep sleep wake up
typedef union 
{ 
    struct
    {
        BYTE    DS_POR:1;      	//wake up source is Power on reset 
        BYTE    DS_MCLR:1;		//wake up source is master reset pin set to low
        BYTE    DS_RTC:1;		//wake up source is rtcc alarm
        BYTE    DS_WDT:1;		//wake up source is deep sleep watch dog timer expiry
		BYTE    DS_FLT:1;		//wake up due to fault in deep sleep configuration corruption
		BYTE    DS_INT0:1;		//wake up source is external interrupt
		BYTE    DS_BOR:1;		//Brown out occured during deep sleep
		BYTE    NOT_DPSLP:1;	//indicates that device reset is not because of deep sleep wake up
    }WK_SRC;                     // wake up source
    BYTE        WKSRC;       	 // wake up source
}SRC;

//context to be saved or read in deep sleep
typedef struct
{
		UINT16	Reg0;
		UINT16	Reg1;
}CONTEXT;


/**********************************************************************
 Macro       : Write_DSGPR(data1,data2)

 Include     : dpslp.h
 
 Description : This macro saves the context into DSGPRx registers
 
 Arguments   : integer values to be saved in DSGPRx registers.
 
 Remarks     : None
**********************************************************************/                        
#define Write_DSGPR(data1,data2)          DSGPR0=data1;DSGPR1=data2

/**********************************************************************
 Macro       : ReleaseDeepSleep()

 Include     : dpslp.h
 
 Description : This macro clears the RELEASE bit in DSCON thus rleasing device from deep sleep 
 
 Arguments   : None.
 
 Remarks     : None
**********************************************************************/                        
#define ReleaseDeepSleep()          DSCONbits.RELEASE=0;Nop();Nop()

#if defined (dpslp_v1_1) || defined (LIB_BUILD) 
unsigned char __attribute__((section (".libperi"))) GotoDeepSleep_v1_1(void) ;
#elif defined (dpslp_v1_2) || defined (LIB_BUILD)
unsigned char __attribute__((section (".libperi"))) GotoDeepSleep_v1_2(void) ;
#elif defined (dpslp_v2_1) || defined (dpslp_v2_2) || defined (LIB_BUILD)
unsigned char __attribute__((section (".libperi"))) GotoDeepSleep_v2(void) ;
#elif defined (dpslp_v2_3) || defined (LIB_BUILD)
unsigned char __attribute__((section (".libperi"))) GotoDeepSleep_v2_2(void) ;
#endif

#if defined (dpslp_v1_1)  
#define GotoDeepSleep GotoDeepSleep_v1_1
#elif defined (dpslp_v1_2) 
#define GotoDeepSleep GotoDeepSleep_v1_2
#elif defined (dpslp_v2_1) || defined (dpslp_v2_2) 
#define GotoDeepSleep GotoDeepSleep_v2
#elif defined (dpslp_v2_3) 
#define GotoDeepSleep GotoDeepSleep_v2_2
#endif

#if defined (dpslp_v1_1) || defined (dpslp_v1_2) || defined (dpslp_v2_1) || defined (dpslp_v2_2) || defined (dpslp_v2_3)|| defined (LIB_BUILD)
void __attribute__((section (".libperi"))) ReadDSGPR( CONTEXT* ptr );
#endif

#if defined (dpslp_v1_1) || defined (LIB_BUILD) 
void __attribute__((section (".libperi"))) DeepSleepWakeUpSource_v1(SRC* ptr);
#endif

#if defined (dpslp_v1_2) || defined (LIB_BUILD) 
void __attribute__((section (".libperi"))) DeepSleepWakeUpSource_v1_2(SRC* ptr);
#endif

#if defined (dpslp_v2_1) || defined (dpslp_v2_3) || defined (LIB_BUILD) 
void __attribute__((section (".libperi"))) DeepSleepWakeUpSource_v2_1(SRC* ptr);
#endif

#if defined (dpslp_v2_2) ||defined (LIB_BUILD) 
void __attribute__((section (".libperi"))) DeepSleepWakeUpSource_v2_2(SRC* ptr);
#endif


#if defined (dpslp_v1_1)
#define DeepSleepWakeUpSource DeepSleepWakeUpSource_v1
#elif defined (dpslp_v1_2)
#define DeepSleepWakeUpSource DeepSleepWakeUpSource_v1_2
#elif defined (dpslp_v2_1) || defined (dpslp_v2_3)
#define DeepSleepWakeUpSource DeepSleepWakeUpSource_v2_1
#elif defined (dpslp_v2_2) 
#define DeepSleepWakeUpSource DeepSleepWakeUpSource_v2_2
#endif

BOOL __attribute__((section (".libperi"))) IsResetFromDeepSleep( void );

#else
#warning "Does not build on this target"
#endif


#endif
