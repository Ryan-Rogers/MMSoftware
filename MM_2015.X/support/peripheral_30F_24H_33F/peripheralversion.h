#ifndef __PERIPHERALVERSION_H
#define __PERIPHERALVERSION_H
/******************************************************************************
 *
 *                  PERIPHERAL SELECT HEADER FILE
 *
 ******************************************************************************
 * FileName:        peripheralversion.h
 * Dependencies:    See include below
 * Processor:       dsPIC33F/30F/pic24H
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


#if defined(__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__PIC24H__)
#include <p24Hxxxx.h>
#elif defined(__PIC24E__)
#include <p24Exxxx.h>
#else
#error "Does not build on this target"
#endif

/*********************** Peripheral Inclusion Macros **************************/


#if defined(__dsPIC33FJ32MC302__) || defined(__dsPIC33FJ32MC304__) || defined(__dsPIC33FJ64MC202__) || defined(__dsPIC33FJ64MC204__) || defined(__dsPIC33FJ64MC802__) || defined(__dsPIC33FJ64MC804__) || defined(__dsPIC33FJ128MC202__) || defined(__dsPIC33FJ128MC204__) || defined(__dsPIC33FJ128MC802__) || defined(__dsPIC33FJ128MC804__) || defined(__dsPIC33FJ32GP302__) || defined(__dsPIC33FJ32GP304__) || defined(__dsPIC33FJ64GP202__) || defined(__dsPIC33FJ64GP204__) || defined(__dsPIC33FJ64GP802__) || defined(__dsPIC33FJ64GP804__) || defined(__dsPIC33FJ128GP202__) || defined(__dsPIC33FJ128GP204__) || defined(__dsPIC33FJ128GP802__) || defined(__dsPIC33FJ128GP804__) || defined(__PIC24HJ32GP302__) || defined(__PIC24HJ32GP304__) || defined(__PIC24HJ64GP202__) || defined(__PIC24HJ64GP204__) || defined(__PIC24HJ64GP502__) || defined(__PIC24HJ64GP504__) || defined(__PIC24HJ128GP202__) || defined(__PIC24HJ128GP204__) || defined(__PIC24HJ128GP502__) || defined(__PIC24HJ128GP504__) 
           		   
	#define _TMR_RTCC_V1       /* RTCC module*/

	#define _CRC_PROG_V1       /* CRC module*/

	#define _PPI_PMP_V1        /* PMP module*/

	#define _COMPARATOR_V1     /* Comparator module*/
	
	#define _PPI_PPS_V1		   /* PPS module*/

#endif	// defined(__dsPIC33FJ32MC302__) || defined(__dsPIC33FJ32MC304__).....

#if defined(__dsPIC33FJ16GP101__) || defined(__dsPIC33FJ16GP102__) || defined(__dsPIC33FJ16MC101__) || defined(__dsPIC33FJ16MC102__)

	#define _TMR_RTCC_V1       /* RTCC module*/

	#define _COMPARATOR_V2     /* Comparator module*/
	
	#define _PPI_PPS_V1		   /* PPS module*/

#endif	// (__dsPIC33FJ16GP101__) || defined(__dsPIC33FJ16GP102__) || defined(__dsPIC33FJ16MC101__) || defined(__dsPIC33FJ16MC102__)

#if defined(__dsPIC33E__) || defined(__PIC24E__)

	#if defined(__dsPIC33EP64GP506__) || defined(__dsPIC33EP64GP504__) || defined(__dsPIC33EP64GP503__) || defined(__dsPIC33EP64GP502__)\
	|| defined(__dsPIC33EP64MC506__) || defined(__dsPIC33EP64MC504__) || defined(__dsPIC33EP64MC503__) || defined(__dsPIC33EP64MC502__)\
	|| defined(__dsPIC33EP64MC206__) || defined(__dsPIC33EP64MC204__) || defined(__dsPIC33EP64MC203__) || defined(__dsPIC33EP64MC202__)\
	|| defined(__PIC24EP64MC206__) || defined(__PIC24EP64MC204__) || defined(__PIC24EP64MC203__) || defined(__PIC24EP64MC202__)\
	|| defined(__PIC24EP64GP206__) || defined(__PIC24EP64GP204__) || defined(__PIC24EP64GP203__) || defined(__PIC24EP64GP202__)\
	|| defined(__dsPIC33EP32GP504__) || defined(__dsPIC33EP32GP503__) || defined(__dsPIC33EP32GP502__)\
	|| defined(__dsPIC33EP32MC504__) || defined(__dsPIC33EP32MC503__) || defined(__dsPIC33EP32MC502__)\
	|| defined(__dsPIC33EP32MC204__) || defined(__dsPIC33EP32MC203__) || defined(__dsPIC33EP32MC202__)\
	|| defined(__PIC24EP32MC204__) || defined(__PIC24EP32MC203__) || defined(__PIC24EP32MC202__)\
	|| defined(__PIC24EP32GP204__) || defined(__PIC24EP32GP203__) || defined(__PIC24EP32GP202__)\
	|| defined(__dsPIC33EP128GP506__) || defined(__dsPIC33EP128GP504__) || defined(__dsPIC33EP128GP502__)\
	|| defined(__dsPIC33EP128MC506__) || defined(__dsPIC33EP128MC504__) || defined(__dsPIC33EP128MC502__)\
	|| defined(__dsPIC33EP128MC206__) || defined(__dsPIC33EP128MC204__) || defined(__dsPIC33EP128MC202__)\
	|| defined(__PIC24EP128MC206__) || defined(__PIC24EP128MC204__) || defined(__PIC24EP128MC202__)\
	|| defined(__PIC24EP128GP206__) || defined(__PIC24EP128GP204__) || defined(__PIC24EP128GP202__)\
	|| defined(__dsPIC33EP256GP506__) || defined(__dsPIC33EP256GP504__) || defined(__dsPIC33EP256GP502__)\
	|| defined(__dsPIC33EP256MC506__) || defined(__dsPIC33EP256MC504__) || defined(__dsPIC33EP256MC502__)\
	|| defined(__dsPIC33EP256MC206__) || defined(__dsPIC33EP256MC204__) || defined(__dsPIC33EP256MC202__)\
	|| defined(__PIC24EP256MC206__) || defined(__PIC24EP256MC204__) || defined(__PIC24EP256MC202__)\
	|| defined(__PIC24EP256GP206__) || defined(__PIC24EP256GP204__) || defined(__PIC24EP256GP202__)
		
		#define _CRC_PROG_V2       /* CRC module*/
		
		#define _COMPARATOR_V3     /* Comparator module with Op Amps*/

		#define _PPI_PPS_V3		   /* PPS module*/
			
	#elif defined(__dsPIC33EP512GP502__) || defined(__dsPIC33EP512GP504__) || defined(__dsPIC33EP512GP506__)\
	|| defined(__dsPIC33EP512MC202__) || defined(__dsPIC33EP512MC204__) || defined(__dsPIC33EP512MC206__)\
	|| defined(__dsPIC33EP512MC502__) || defined(__dsPIC33EP512MC504__) || defined(__dsPIC33EP512MC506__)\
	|| defined(__PIC24EP512GP202__) || defined(__PIC24EP512GP204__) || defined(__PIC24EP512GP206__)\
	|| defined(__PIC24EP512MC202__) || defined(__PIC24EP512MC204__) || defined(__PIC24EP512MC206__)			
			
		#define _CRC_PROG_V2       /* CRC module*/
		
		#define _COMPARATOR_V3     /* Comparator module with Op Amps*/

		#define _PPI_PPS_V3		   /* PPS module*/		
	
	#elif defined (__dsPIC33EP128GM306__) || defined (__dsPIC33EP128GM310__)\
	|| defined (__dsPIC33EP128GM706__) || defined (__dsPIC33EP128GM710__)\
	|| defined (__dsPIC33EP256GM306__) || defined (__dsPIC33EP256GM310__)\
	|| defined (__dsPIC33EP256GM706__) || defined (__dsPIC33EP256GM710__)\
	|| defined (__dsPIC33EP512GM306__) || defined (__dsPIC33EP512GM310__)\
	|| defined (__dsPIC33EP512GM706__) || defined (__dsPIC33EP512GM710__)
		
		#define _TMR_RTCC_V1       /* RTCC module*/
    
		#define _CRC_PROG_V2       /* CRC module*/

		#define _COMPARATOR_V3     /* Comparator module with Op Amps*/

		#define _PPI_PMP_V2        /* PMP module*/
		
		#define _PPI_PPS_V3		   /* PPS module*/

	#elif defined (__dsPIC33EP128GM304__) || defined (__dsPIC33EP128GM604__) || defined (__dsPIC33EP256GM304__)\
	|| defined (__dsPIC33EP256GM604__) || defined (__dsPIC33EP512GM304__) || defined (__dsPIC33EP512GM604__)
		
		#define _TMR_RTCC_V1       /* RTCC module*/
    
		#define _CRC_PROG_V2       /* CRC module*/

		#define _COMPARATOR_V3     /* Comparator module with Op Amps*/
	
		#define _PPI_PPS_V3		   /* PPS module*/

	#else

		#define _TMR_RTCC_V1       /* RTCC module*/
    
		#define _CRC_PROG_V2       /* CRC module*/

		#define _PPI_PMP_V2        /* PMP module*/

		#define _COMPARATOR_V2     /* Comparator module*/
		
		#define _PPI_PPS_V2		   /* PPS module*/

	#endif

#endif	// defined(__dsPIC33E__) || defined(__PIC24E__)

#endif
