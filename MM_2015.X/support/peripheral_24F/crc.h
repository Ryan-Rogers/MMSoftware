#ifndef __CRC_H
#define __CRC_H /* Its header file. */

 /****************************************************************************** 
 *                  CRC PERIPHERAL LIBRARY HEADER FILE 
 ******************************************************************************
 * FileName:        crc.h
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
#if defined (crc_v1_1) ||defined (crc_v1_2)|| defined (LIB_BUILD)

#define CRC_INT_PRIOR_7         0x0007 /* Interrupt is priority 7 */
#define CRC_INT_PRIOR_6         0x0006 /* Interrupt is priority 6 */
#define CRC_INT_PRIOR_5         0x0005 /* Interrupt is priority 5 */
#define CRC_INT_PRIOR_4         0x0004 /* Interrupt is priority 4 */
#define CRC_INT_PRIOR_3         0x0003 /* Interrupt is priority 3 */
#define CRC_INT_PRIOR_2         0x0002 /* Interrupt is priority 2 */
#define CRC_INT_PRIOR_1         0x0001 /* Interrupt is priority 1 */
#define CRC_INT_PRIOR_0         0x0000 /* Interrupt is priority 0 */
#define CRC_INT_PRIOR_MASK      (~CRC_INT_PRIOR_7)     

#define CRC_INT_ENABLE          0x0008 /* Interrupt Enable */
#define CRC_INT_DISABLE         0x0000 /* Interrupt Disable */
#define CRC_INT_MASK            (~CRC_INT_ENABLE)   

/********************************************/
/* Section :Configuration Registers Defaults */
/*******************************************/
#define CRCXOR_VAL              0x0000  /* Polynomial Value */
#define CRCCON_VAL              0x0000  /* Polynomial Value */

/* CRCCON Register Configuration Bit Definitions */
#define CRC_IDLE_STOP    		0x2000 /*stop CRC module in Idle mode */
#define CRC_IDLE_CON     		0x0000 /*continue CRC module in Idle mode */
#define CRC_IDLE_MASK    		(~CRC_IDLE_STOP)

#define CRC_START_SERIAL_SHIFT  0x0010 /* Start CRC serial shifter */
#define CRC_SERIAL_SHIFT_OFF    0x0000 /* CRC serial shifter turned off */
#define CRC_SERIAL_SHIFT_MASK   (~CRC_START_SERIAL_SHIFT)

#define CRC_POLYNOMIAL_LEN1     0x0000 /*Length of the polynomial 1*/
#define CRC_POLYNOMIAL_LEN2     0x0001 /*Length of the polynomial 2*/
#define CRC_POLYNOMIAL_LEN3     0x0002 /*Length of the polynomial 3*/
#define CRC_POLYNOMIAL_LEN4     0x0003 /*Length of the polynomial 4*/
#define CRC_POLYNOMIAL_LEN5     0x0004 /*Length of the polynomial 5*/
#define CRC_POLYNOMIAL_LEN6     0x0005 /*Length of the polynomial 6*/
#define CRC_POLYNOMIAL_LEN7     0x0006 /*Length of the polynomial 7*/
#define CRC_POLYNOMIAL_LEN8     0x0007 /*Length of the polynomial 8*/
#define CRC_POLYNOMIAL_LEN9     0x0008 /*Length of the polynomial 9*/
#define CRC_POLYNOMIAL_LEN10    0x0009 /*Length of the polynomial 10*/
#define CRC_POLYNOMIAL_LEN11    0x000A /*Length of the polynomial 11*/
#define CRC_POLYNOMIAL_LEN12    0x000B /*Length of the polynomial 12*/
#define CRC_POLYNOMIAL_LEN13    0x000C /*Length of the polynomial 13*/
#define CRC_POLYNOMIAL_LEN14    0x000D /*Length of the polynomial 14*/
#define CRC_POLYNOMIAL_LEN15    0x000E /*Length of the polynomial 15*/
#define CRC_POLYNOMIAL_LEN16    0x000F /*Length of the polynomial 16*/
#define CRC_POLYNOMIAL_MASK     (~CRC_POLYNOMIAL_LEN16)

#define WRITE_CRC_DATA_WORD(data)         (CRCDAT= data) /*Write 16 bit CRC data*/
#define WRITE_CRC_DATA_BYTE(data)         (*(unsigned char*)&CRCDAT = data) /*Write 8 bit CRC data*/

#define GET_CRC_RESULT()                  (CRCWDAT) /*Get CRC result*/
#define SET_CRC_RESULT(data)              (CRCWDAT = data) /*Set CRC result*/


/*****************************************************************************
Macro       : EnableIntCRC
 
Description : This macro enables the CRC interrupt.
 
Arguments   : None
 
Remarks     : None 
*****************************************************************************/
#define EnableIntCRC               (IEC4bits.CRCIE = 1)

/*****************************************************************************
Macro       : DisableIntCRC
 
Description : This macro disables the CRC interrupt.
 
Arguments   : None
 
Remarks     : None 
*****************************************************************************/
#define DisableIntCRC                (IEC4bits.CRCIE = 0)

/****************************************************************************
Macro       : SetPriorityIntCRC (priority)
  
Description : This macro sets priority for crc interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets CRC Interrupt Priority bits of Interrupt
              Priority Control register. 
****************************************************************************/
#define SetPriorityIntCRC(priority)     (IPC16bits.CRCIP = priority)

/*******************************************************************
Macro       : CRC_Clear_Intr_Status_Bit
 
Description : Macro to Clear CRC Interrupt Status bit
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define CRC_Clear_Intr_Status_Bit    (IFS4bits.CRCIF = 0)


#if defined (crc_v1_1) || defined (LIB_BUILD)
/*******************************************************************
Macro       : Get_CRC_FIFO_FULL_STATUS()
 
Description : Macro to Return FIFO Full Status bit
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Get_CRC_FIFO_FULL_STATUS()       (unsigned char)(CRCCONbits.CRCFUL)

/*******************************************************************
Macro       : Get_CRC_FIFO_EMPTY_STATUS()
 
Description : Macro to Return FIFO Empty Status bit
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Get_CRC_FIFO_EMPTY_STATUS()      (unsigned char)(CRCCONbits.CRCMPT)

/*******************************************************************
Macro       : Start_CRC_Calulation() 

Description : Macro to Start CRC Calculation
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Start_CRC_Calulation()           (CRCCONbits.CRCGO = 1)       

/*******************************************************************
Macro       : Stop_CRC_Calulation()
 
Description : Macro to Stop CRC Calculation
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Stop_CRC_Calulation()            (CRCCONbits.CRCGO = 0) 
#endif

#if defined (crc_v1_2)|| defined (LIB_BUILD)

#ifndef LIB_BUILD
#define  Get_CRC_FIFO_FULL_STATUS   Get_CRC_FIFO_FULL_STATUS_v1
#define  Get_CRC_FIFO_EMPTY_STATUS  Get_CRC_FIFO_EMPTY_STATUS_v1 
#define  Start_CRC_Calulation       Start_CRC_Calulation_v1
#define  Stop_CRC_Calulation        Stop_CRC_Calulation_v1    
#endif  

/*******************************************************************
Macro       : Get_CRC_FIFO_FULL_STATUS()
 
Description : Macro to Return FIFO Full Status bit
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Get_CRC_FIFO_FULL_STATUS_v1()       (unsigned char)(CRCCON1bits.CRCFUL)

/*******************************************************************
Macro       : Get_CRC_FIFO_EMPTY_STATUS()
 
Description : Macro to Return FIFO Empty Status bit
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Get_CRC_FIFO_EMPTY_STATUS_v1()      (unsigned char)(CRCCON1bits.CRCMPT)

/*******************************************************************
Macro       : Start_CRC_Calulation() 

Description : Macro to Start CRC Calculation
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Start_CRC_Calulation_v1()           (CRCCON1bits.CRCGO = 1)       

/*******************************************************************
Macro       : Stop_CRC_Calulation()
 
Description : Macro to Stop CRC Calculation
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Stop_CRC_Calulation_v1()            (CRCCON1bits.CRCGO = 0) 
#endif

extern void  __attribute__ ((section (".libperi")))CRC_Config_INTR(unsigned char intr_byte);

#if defined (crc_v1_1) || defined (LIB_BUILD)
extern unsigned short int  __attribute__ ((section (".libperi")))CRC_Calc_ChecksumWord(unsigned short int* data, unsigned short int Number_of_words, unsigned short int prev_CRC);

extern unsigned short int __attribute__ ((section (".libperi")))CRC_Calc_ChecksumByte(unsigned char* data, unsigned short int Number_of_bytes, unsigned short int prev_CRC) ;

extern void __attribute__ ((section (".libperi")))CRC_Config(unsigned short int poly , unsigned short int config) ;
#endif

#if defined (crc_v1_2)|| defined (LIB_BUILD)
#ifndef LIB_BUILD
#define  CRC_Calc_ChecksumWord  CRC_Calc_ChecksumWord_v1
#define  CRC_Calc_ChecksumByte  CRC_Calc_ChecksumByte_v1 
#define  CRC_Config             CRC_Config_v1 
#endif 
extern unsigned short int  __attribute__ ((section (".libperi")))CRC_Calc_ChecksumWord_v1(unsigned short int* data, unsigned short int Number_of_words, unsigned short int prev_CRC);

extern unsigned short int __attribute__ ((section (".libperi")))CRC_Calc_ChecksumByte_v1(unsigned char* data, unsigned short int Number_of_bytes, unsigned short int prev_CRC) ;

extern void __attribute__ ((section (".libperi")))CRC_Config_v1(unsigned short int poly , unsigned short int config) ;
 
#endif

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif  /* __CRC_H */
