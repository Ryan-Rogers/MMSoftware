#ifndef __ECRC_H
#define __ECRC_H /* Its header file. */

 /****************************************************************************** 
 *                  ECRC PERIPHERAL LIBRARY HEADER FILE 
 ******************************************************************************
 * FileName:        ecrc.h
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
#if defined (ecrc_v1_1) || defined (LIB_BUILD)

#define ECRC_INT_PRIOR_7         0x0007 /* Interrupt is priority 7 */
#define ECRC_INT_PRIOR_6         0x0006 /* Interrupt is priority 6 */
#define ECRC_INT_PRIOR_5         0x0005 /* Interrupt is priority 5 */
#define ECRC_INT_PRIOR_4         0x0004 /* Interrupt is priority 4 */
#define ECRC_INT_PRIOR_3         0x0003 /* Interrupt is priority 3 */
#define ECRC_INT_PRIOR_2         0x0002 /* Interrupt is priority 2 */
#define ECRC_INT_PRIOR_1         0x0001 /* Interrupt is priority 1 */
#define ECRC_INT_PRIOR_0         0x0000 /* Interrupt is priority 0 */
#define ECRC_INT_PRIOR_MASK      (~ECRC_INT_PRIOR_7)     
#define ECRC_INT_ENABLE          0x0008 /* Interrupt Enable */
#define ECRC_INT_DISABLE         0x0000 /* Interrupt Disable */
#define ECRC_INT_MASK            (~ECRC_INT_ENABLE)   

/********************************************/
/* Section :Configuration Registers Defaults */
/*******************************************/
#define CRCXORL_VAL              0x0000  /* Polynomial Value */
#define CRCXORH_VAL				 0x0000	/*Polynomial Value */
#define CRCCON1_VAL              0x0000  /* Polynomial Value */
#define CRCCON2_VAL              0x0000  /* Polynomial Value */

/* CRCCON1 Register Configuration Bit Definitions */
#define ECRC_MODULE_ENABLE		0x8000 /*enable CRC module*/
#define ECRC_MODULE_RESET	    0x0000 /* enable CRC module and reset all state machines and CRCWDAT/CRCDAT registes*/
#define ECRC_MODULE_ENABLE_MASK  (~ECRC_MODULE_ENABLE)

#define ECRC_IDLE_STOP    		0x2000 /*stop CRC module in Idle mode */
#define ECRC_IDLE_CON     		0x0000 /*continue CRC module in Idle mode */
#define ECRC_IDLE_MASK    		(~ECRC_IDLE_STOP)

#define ECRC_INTERRUPT_ON_FIFO_EMPTY    0x0020 /*Interrupt on FIFO empty*/
#define ECRC_INTERRUPT_ON_RESULT_READY  0x0000 /* Interrupt on shift complete*/
#define ECRC_INTERRUPT_SELLECT_MASK    	(~ECRC_INTERRUPT_ON_FIFO_EMPTY)  

#define ECRC_START_SERIAL_SHIFT  0x0010 /* Start CRC serial shifter */
#define ECRC_SERIAL_SHIFT_OFF    0x0000 /* CRC serial shifter turned off */
#define ECRC_SERIAL_SHIFT_MASK   (~ECRC_START_SERIAL_SHIFT)

#define ECRC_LITTLE_ENDIAN		0x0008 /* Data word is shifted into CRC starting with LSB*/
#define ECRC_BIG_ENDIAN			0x0000 /*Data word is shifted into CRC starting with MSB*/

/* CRCCON2 Register Configuration Bit Definitions */
#define ECRC_DATA_WIDTH1     0x0000 /*Width of the data word 1*/
#define ECRC_DATA_WIDTH2     0x0100 /*Width of the data word 2*/
#define ECRC_DATA_WIDTH3     0x0200 /*Width of the data word 3*/
#define ECRC_DATA_WIDTH4     0x0300 /*Width of the data word 4*/
#define ECRC_DATA_WIDTH5     0x0400 /*Width of the data word 5*/
#define ECRC_DATA_WIDTH6     0x0500 /*Width of the data word 6*/
#define ECRC_DATA_WIDTH7     0x0600 /*Width of the data word 7*/
#define ECRC_DATA_WIDTH8     0x0700 /*Width of the data word 8*/
#define ECRC_DATA_WIDTH9     0x0800 /*Width of the data word 9*/
#define ECRC_DATA_WIDTH10    0x0900 /*Width of the data word 10*/
#define ECRC_DATA_WIDTH11    0x0A00 /*Width of the data word 11*/
#define ECRC_DATA_WIDTH12    0x0B00 /*Width of the data word 12*/
#define ECRC_DATA_WIDTH13    0x0C00 /*Width of the data word 13*/
#define ECRC_DATA_WIDTH14    0x0D00 /*Width of the data word 14*/
#define ECRC_DATA_WIDTH15    0x0E00 /*Width of the data word 15*/
#define ECRC_DATA_WIDTH16    0x0F00 /*Width of the data word 16*/
#define ECRC_DATA_WIDTH17    0x1000 /*Width of the data word 17*/
#define ECRC_DATA_WIDTH18    0x1100 /*Width of the data word 18*/
#define ECRC_DATA_WIDTH19    0x1200 /*Width of the data word 19*/
#define ECRC_DATA_WIDTH20    0x1300 /*Width of the data word 20*/
#define ECRC_DATA_WIDTH21    0x1400 /*Width of the data word 21*/
#define ECRC_DATA_WIDTH22    0x1500 /*Width of the data word 22*/
#define ECRC_DATA_WIDTH23    0x1600 /*Width of the data word 23*/
#define ECRC_DATA_WIDTH24    0x1700 /*Width of the data word 24*/
#define ECRC_DATA_WIDTH25    0x1800 /*Width of the data word 25*/
#define ECRC_DATA_WIDTH26    0x1900 /*Width of the data word 26*/
#define ECRC_DATA_WIDTH27    0x1A00 /*Width of the data word 27*/
#define ECRC_DATA_WIDTH28    0x1B00 /*Width of the data word 28*/
#define ECRC_DATA_WIDTH29    0x1C00 /*Width of the data word 29*/
#define ECRC_DATA_WIDTH30    0x1D00 /*Width of the data word 30*/
#define ECRC_DATA_WIDTH31    0x1E00 /*Width of the data word 31*/
#define ECRC_DATA_WIDTH32    0x1F00 /*Width of the data word 32*/
#define ECRC_DATA_MASK     (~ECRC_DATA_WIDTH32)


#define ECRC_POLYNOMIAL_LEN1     0x0000 /*Length of the polynomial 1*/
#define ECRC_POLYNOMIAL_LEN2     0x0001 /*Length of the polynomial 2*/
#define ECRC_POLYNOMIAL_LEN3     0x0002 /*Length of the polynomial 3*/
#define ECRC_POLYNOMIAL_LEN4     0x0003 /*Length of the polynomial 4*/
#define ECRC_POLYNOMIAL_LEN5     0x0004 /*Length of the polynomial 5*/
#define ECRC_POLYNOMIAL_LEN6     0x0005 /*Length of the polynomial 6*/
#define ECRC_POLYNOMIAL_LEN7     0x0006 /*Length of the polynomial 7*/
#define ECRC_POLYNOMIAL_LEN8     0x0007 /*Length of the polynomial 8*/
#define ECRC_POLYNOMIAL_LEN9     0x0008 /*Length of the polynomial 9*/
#define ECRC_POLYNOMIAL_LEN10    0x0009 /*Length of the polynomial 10*/
#define ECRC_POLYNOMIAL_LEN11    0x000A /*Length of the polynomial 11*/
#define ECRC_POLYNOMIAL_LEN12    0x000B /*Length of the polynomial 12*/
#define ECRC_POLYNOMIAL_LEN13    0x000C /*Length of the polynomial 13*/
#define ECRC_POLYNOMIAL_LEN14    0x000D /*Length of the polynomial 14*/
#define ECRC_POLYNOMIAL_LEN15    0x000E /*Length of the polynomial 15*/
#define ECRC_POLYNOMIAL_LEN16    0x000F /*Length of the polynomial 16*/
#define ECRC_POLYNOMIAL_LEN17    0x0010 /*Length of the polynomial 17*/
#define ECRC_POLYNOMIAL_LEN18    0x0011 /*Length of the polynomial 18*/
#define ECRC_POLYNOMIAL_LEN19    0x0012 /*Length of the polynomial 19*/
#define ECRC_POLYNOMIAL_LEN20    0x0013 /*Length of the polynomial 20*/
#define ECRC_POLYNOMIAL_LEN21    0x0014 /*Length of the polynomial 21*/
#define ECRC_POLYNOMIAL_LEN22    0x0015 /*Length of the polynomial 22*/
#define ECRC_POLYNOMIAL_LEN23    0x0016 /*Length of the polynomial 23*/
#define ECRC_POLYNOMIAL_LEN24    0x0017 /*Length of the polynomial 24*/
#define ECRC_POLYNOMIAL_LEN25    0x0018 /*Length of the polynomial 25*/
#define ECRC_POLYNOMIAL_LEN26    0x0019 /*Length of the polynomial 26*/
#define ECRC_POLYNOMIAL_LEN27    0x001A /*Length of the polynomial 27*/
#define ECRC_POLYNOMIAL_LEN28    0x001B /*Length of the polynomial 28*/
#define ECRC_POLYNOMIAL_LEN29    0x001C /*Length of the polynomial 29*/
#define ECRC_POLYNOMIAL_LEN30    0x001D /*Length of the polynomial 30*/
#define ECRC_POLYNOMIAL_LEN31    0x001E /*Length of the polynomial 31*/
#define ECRC_POLYNOMIAL_LEN32    0x001F /*Length of the polynomial 32*/
#define ECRC_POLYNOMIAL_MASK     (~ECRC_POLYNOMIAL_LEN32)

/*****************************************************************************
Macro       : WRITE_ECRC_DATA_LONG(data)
 
Description : This macro will write 32 bit data into CRCDATX register. 
 
Arguments   : data -32bit data for crc calculation.
 
Remarks     : None 
*****************************************************************************/
#define WRITE_ECRC_DATA_LONG(data)    	((CRCDATL= (unsigned short int)data),CRCDATH= (unsigned short int)(data>>16))


/*****************************************************************************
Macro       : WRITE_ECRC_DATA_WORD(data)
 
Description : This macro will write 16 bit data into CRCDATX register. 
 
Arguments   : data -16bit data for crc calculation.
 
Remarks     : None 
*****************************************************************************/
#define WRITE_ECRC_DATA_WORD(data)		(CRCDATL= data)

/*****************************************************************************
Macro       : WRITE_ECRC_DATA_BYTE(data)
 
Description : This macro will write 8 bit data into CRCDATX registers. 
 
Arguments   : data -8bit data for crc calculation.
 
Remarks     : None 
*****************************************************************************/
#define WRITE_ECRC_DATA_BYTE(data)       (*(unsigned char*)&CRCDATL = data)

/*****************************************************************************
Macro       : GET_ECRC_RESULT()
 
Description : This macro returns the CRC result from CRCWDATx registers
 
Arguments   : None.
 
Remarks     : None 
*****************************************************************************/
#define GET_ECRC_RESULT()                 ((((unsigned long)(CRCWDATH)<<16))|(unsigned long)CRCWDATL)


/*****************************************************************************
Macro       : SET_ECRC_RESULT(data)
 
Description : This macro will write 32 bit data into CRCWDATX registers. 
 
Arguments   : data -32bit data for crc calculation.
 
Remarks     : None 
*****************************************************************************/
#define SET_ECRC_RESULT(data)             ((CRCWDATL= (unsigned short int)data),CRCWDATH= (unsigned short int)(data>>16))


/*****************************************************************************
Macro       : EnableIntECRC
 
Description : This macro enables the CRC interrupt.
 
Arguments   : None
 
Remarks     : None 
*****************************************************************************/
#define EnableIntECRC               (IEC4bits.CRCIE = 1)

/*****************************************************************************
Macro       : DisableIntECRC
 
Description : This macro disables the CRC interrupt.
 
Arguments   : None
 
Remarks     : None 
*****************************************************************************/
#define DisableIntECRC                (IEC4bits.CRCIE = 0)

/****************************************************************************
Macro       : SetPriorityIntECRC (priority)
  
Description : This macro sets priority for crc interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets CRC Interrupt Priority bits of Interrupt
              Priority Control register. 
****************************************************************************/
#define SetPriorityIntECRC(priority)     (IPC16bits.CRCIP = priority)

/*******************************************************************
Macro       : ECRC_Clear_Intr_Status_Bit
 
Description : Macro to Clear CRC Interrupt Status bit
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define ECRC_Clear_Intr_Status_Bit    (IFS4bits.CRCIF = 0)


/*******************************************************************
Macro       : ECRC_Enable()
 
Description : Macro to enable CRC module.
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define ECRC_Enable()            (CRCCON1bits.CRCEN = 1) 

/*******************************************************************
Macro       : ECRC_Reset()
 
Description : Macro to reset CRC module registers.
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define ECRC_Reset()            (CRCCON1bits.CRCEN = 0) 


/*******************************************************************
Macro       : ECRC_POINTER_VALUE()
 
Description : Macro to Return FIFO Full Status bit
 
Arguments   : None

Returns        : Number of Valid words in FIFO.
 
Remarks     : None 
*******************************************************************/
#define ECRC_POINTER_VALUE()       (unsigned char)(CRCCON1bits.VWORD)


/*******************************************************************
Macro       : Get_ECRC_FIFO_FULL_STATUS()
 
Description : Macro to Return FIFO Full Status bit
 
Arguments   : None

Returns        : FIFO Full Status
 
Remarks     : None 
*******************************************************************/
#define Get_ECRC_FIFO_FULL_STATUS()       (unsigned char)(CRCCON1bits.CRCFUL)

/*******************************************************************
Macro       : Get_ECRC_FIFO_EMPTY_STATUS()
 
Description : Macro to Return FIFO Empty Status bit
 
Arguments   : None
 
 Returns        : FIFO Empty Status

 Remarks     : None 
*******************************************************************/
#define Get_ECRC_FIFO_EMPTY_STATUS()      (unsigned char)(CRCCON1bits.CRCMPT)

/*******************************************************************
Macro       : Start_ECRC_Calulation() 

Description : Macro to Start CRC Calculation
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Start_ECRC_Calulation()           (CRCCON1bits.CRCGO = 1)       

/*******************************************************************
Macro       : Stop_ECRC_Calulation()
 
Description : Macro to Stop CRC Calculation
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Stop_ECRC_Calulation()            (CRCCON1bits.CRCGO = 0) 

/*******************************************************************
Macro       : Interrupt_ECRC_OnFIFO_Empty()
 
Description : Macro to Select interrupt on FIFO empty.
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Interrupt_ECRC_OnFIFO_Empty()            (CRCCON1bits.CRCISEL = 1) 


/*******************************************************************
Macro       : Interrupt_ECRC_Result_Ready()
 
Description : Macro to Select interrupt on result ready in CRCWDAT.
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define Interrupt_ECRC_Result_Ready()            (CRCCON1bits.CRCISEL = 0) 

/*******************************************************************
Macro       : ECRC_Little_Endian()
 
Description : Macro to Select data shift direction starting from LSB
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define ECRC_Little_Endian()            (CRCCON1bits.LENDIAN = 1) 

/*******************************************************************
Macro       : ECRC_Big_Endian()
 
Description : Macro to Select data shift direction starting from MSB
 
Arguments   : None
 
Remarks     : None 
*******************************************************************/
#define ECRC_Big_Endian()            (CRCCON1bits.LENDIAN = 0) 


extern unsigned long int __attribute__ ((section (".libperi"))) ECRC_Calc_ChecksumLong(unsigned long int* data,unsigned short int Number_of_words,unsigned long int prev_CRC);

extern unsigned short int  __attribute__ ((section (".libperi")))ECRC_Calc_ChecksumWord(unsigned short int* data, unsigned short int Number_of_words, unsigned long int prev_CRC);

extern unsigned char __attribute__ ((section (".libperi")))ECRC_Calc_ChecksumByte(unsigned char* data, unsigned short int Number_of_bytes, unsigned long int prev_CRC);

extern void __attribute__ ((section (".libperi")))ECRC_Config(unsigned short int config1 , unsigned short int config2);

extern void __attribute__ ((section (".libperi")))ECRC_Poly(unsigned short int polylow , unsigned short int polyhigh);

extern void  __attribute__ ((section (".libperi")))ECRC_Config_INTR(unsigned char intr_byte);


#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif  /* __ECRC_H */
