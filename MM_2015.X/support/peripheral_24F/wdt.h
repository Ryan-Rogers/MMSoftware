#ifndef __WDT_H
#define __WDT_H

 /******************************************************************************
 *
 *                  WDT PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        wdt.h
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


//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#if defined (wdt_v1_1) || defined (LIB_BUILD)


//Status of watchdog timer
typedef enum 
{
   WDT_DISABLE, //WDT is disabled
   WDT_ENABLE   //WDT is enabled
}  WDT_STATE;


/**********************************************************************
 Macro       : WDT_TimeOut_Occourred

 Include     : wdt.h
 
 Description : This macro reads the watchdog timer for timeout
 
 Arguments   : None
 
 Remarks     : This macro returns '1' if Watchdog Timer timeout has occurred
              '0' if Watchdog Timer timeout has not occourred
**********************************************************************/                        
#define WDT_TimeOut_Occourred()          (unsigned char)(RCONbits.WDTO)

extern void __attribute__((section (".libperi"))) EnableWDT(WDT_STATE);

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif /* __WDT_H */

