/******************************************************************************
 *
 *                  CRC PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        crc.h
 * Dependencies:    See include below
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

#include "Generic.h"
#include "peripheralversion.h"

#if defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__PIC24H__)
#include <p24Hxxxx.h>
#elif defined (__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined (__PIC24E__)
#include <p24Exxxx.h>
#endif

#ifndef __CRC_H
#define __CRC_H



/* List of SFRs for CRC */
/* This list contains the SFRs with default (POR) values to be used for configuring CRC */
/* The user can modify this based on the requirement */


/*****************************************************************************
 * Following Macros can be used as an input to Module Configuration Functions
 * Ex : CRC_Config_INTR(CRC_INTR_SETUP_VAL)
*****************************************************************************/

/* defines for Interrupt Priority */
#define CRC_INT_PRIOR_7         0x0007      /* 111 = Interrupt priority is 7 */
#define CRC_INT_PRIOR_6         0x0006      /* 110 = Interrupt priority is 6 */
#define CRC_INT_PRIOR_5         0x0005      /* 101 = Interrupt priority is 5 */
#define CRC_INT_PRIOR_4         0x0004      /* 100 = Interrupt priority is 4 */
#define CRC_INT_PRIOR_3         0x0003      /* 011 = Interrupt priority is 3 */
#define CRC_INT_PRIOR_2         0x0002      /* 010 = Interrupt priority is 2 */
#define CRC_INT_PRIOR_1         0x0001      /* 001 = Interrupt priority is 1 */
#define CRC_INT_PRIOR_0         0x0000      /* 000 = Interrupt priority is 0 */

#define CRC_INT_ENABLE          0x0008      /* Interrupt Enable */
#define CRC_INT_DISABLE         0x0000      /* Interrupt Disable */

/*****************************************************************************/
/* Configuration Registers Defaults */
/*****************************************************************************/
#if defined (_CRC_PROG_V1)

#define CRCXOR_VAL              0x0000       /* Polynomial Value */
#define CRCCON_VAL              0x0000

#elif defined (_CRC_PROG_V2)

#define CRCCON1_VAL             0x0000
#define CRCCON2_VAL             0x0000
#define CRCXORL_VAL             0x0000
#define CRCXORH_VAL             0x0000

#endif

/* CRCCON Register Configuration Bit Definitions */
#define CRC_IDLE_STOP    0x2000 /*stop CRC module in Idle mode */
#define CRC_IDLE_CON     0x0000 /*continue CRC module in Idle mode */
#define CRC_IDLE_MASK    (~CRC_IDLE_CON)

#if defined (_CRC_PROG_V2)

#define CRC_ENABLE       0x8000
#define CRC_DISABLE      0x0000

#endif

#if defined (_CRC_PROG_V1)

#define CRC_POLYNOMIAL_LEN1     0x0000
#define CRC_POLYNOMIAL_LEN2     0x0001 
#define CRC_POLYNOMIAL_LEN3     0x0002 
#define CRC_POLYNOMIAL_LEN4     0x0003 
#define CRC_POLYNOMIAL_LEN5     0x0004 
#define CRC_POLYNOMIAL_LEN6     0x0005 
#define CRC_POLYNOMIAL_LEN7     0x0006 
#define CRC_POLYNOMIAL_LEN8     0x0007 
#define CRC_POLYNOMIAL_LEN9     0x0008 
#define CRC_POLYNOMIAL_LEN10    0x0009 
#define CRC_POLYNOMIAL_LEN11    0x000A
#define CRC_POLYNOMIAL_LEN12    0x000B
#define CRC_POLYNOMIAL_LEN13    0x000C
#define CRC_POLYNOMIAL_LEN14    0x000D
#define CRC_POLYNOMIAL_LEN15    0x000E
#define CRC_POLYNOMIAL_LEN16    0x000F
#define CRC_POLYNOMIAL_MASK     (~CRC_POLYNOMIAL_LEN16)

#elif defined (_CRC_PROG_V2)

#define CRC_POLYNOMIAL_LEN1     0x0000
#define CRC_POLYNOMIAL_LEN2     0x0001 
#define CRC_POLYNOMIAL_LEN3     0x0002 
#define CRC_POLYNOMIAL_LEN4     0x0003 
#define CRC_POLYNOMIAL_LEN5     0x0004 
#define CRC_POLYNOMIAL_LEN6     0x0005 
#define CRC_POLYNOMIAL_LEN7     0x0006 
#define CRC_POLYNOMIAL_LEN8     0x0007 
#define CRC_POLYNOMIAL_LEN9     0x0008 
#define CRC_POLYNOMIAL_LEN10    0x0009 
#define CRC_POLYNOMIAL_LEN11    0x000A
#define CRC_POLYNOMIAL_LEN12    0x000B
#define CRC_POLYNOMIAL_LEN13    0x000C
#define CRC_POLYNOMIAL_LEN14    0x000D
#define CRC_POLYNOMIAL_LEN15    0x000E
#define CRC_POLYNOMIAL_LEN16    0x000F
#define CRC_POLYNOMIAL_LEN17    0x0010
#define CRC_POLYNOMIAL_LEN18    0x0011 
#define CRC_POLYNOMIAL_LEN19    0x0012 
#define CRC_POLYNOMIAL_LEN20    0x0013 
#define CRC_POLYNOMIAL_LEN21    0x0014 
#define CRC_POLYNOMIAL_LEN22    0x0015 
#define CRC_POLYNOMIAL_LEN23    0x0016 
#define CRC_POLYNOMIAL_LEN24    0x0017 
#define CRC_POLYNOMIAL_LEN25    0x0018 
#define CRC_POLYNOMIAL_LEN26    0x0019 
#define CRC_POLYNOMIAL_LEN27    0x001A
#define CRC_POLYNOMIAL_LEN28    0x001B
#define CRC_POLYNOMIAL_LEN29    0x001C
#define CRC_POLYNOMIAL_LEN30    0x001D
#define CRC_POLYNOMIAL_LEN31    0x001E
#define CRC_POLYNOMIAL_LEN32    0x001F
#define CRC_POLYNOMIAL_MASK	(~CRC_POLYNOMIAL_LEN32)

#endif

#if defined (_CRC_PROG_V2)

#define CRC_INT_RESULTS_READY           0x0000   /* Interrupt on shift complete and results ready */
#define CRC_INT_FIFO_EMPTY              0x0020   /* Interrupt on FIFO empty; final word of data still shifting through CRC */
#define CRC_LITTLE_ENDIAN               0x0008   /* Data word is shifted ino the CRC, starting with the LSb (little-endian)
                                                    :reflected input data */
#define CRC_BIG_ENDIAN                  0x0000   /* Data word is shifted into the CRC, starting with the MSb (big-endian):
                                                    non-reflected input data */											

#endif

#define CRC_START_SERIAL_SHIFT  0x0010   /* Start CRC serial shifter */
#define CRC_SERIAL_SHIFT_OFF    0x0000   /* CRC serial shifter turned off */
#define CRC_SERIAL_SHIFT_MASK   (~CRC_START_SERIAL_SHIFT)


/*****************************************************************************
 * After the CRC module has been properly configured, you may wish to use the
 * macros below to modify the Configuration bits during runtime.
*****************************************************************************/

/* Macros to  Enable/Disable interrupts and set Interrupt priority */

#define EnableIntCRC                    asm("BSET IEC4,#3")
#define DisableIntCRC                   asm("BCLR IEC4,#3")
#define SetPriorityIntCRC(priority)     (IPC16bits.CRCIP = priority)


/* 
   Macro to Clear CRC Interrupt Status bit
*/
#define CRC_Clear_Intr_Status_Bit()         (IFS4bits.CRCIF = 0)

/* 
   Macro to Return FIFO Full Status bit
*/

#if defined (_CRC_PROG_V1)
#define Get_CRC_FIFO_FULL_STATUS()            (UINT8)(CRCCONbits.CRCFUL)
#elif defined (_CRC_PROG_V2)
#define Get_CRC_FIFO_FULL_STATUS()            (UINT8)(CRCCON1bits.CRCFUL)
#endif
/* 
   Macro to Return FIFO Empty Status bit
*/

#if defined (_CRC_PROG_V1)
#define Get_CRC_FIFO_EMPTY_STATUS()           (UINT8)(CRCCONbits.CRCMPT)
#elif defined (_CRC_PROG_V2)
#define Get_CRC_FIFO_EMPTY_STATUS()           (UINT8)(CRCCON1bits.CRCMPT)
#endif

/* 
   Macro to Start CRC Calculation
*/

#if defined (_CRC_PROG_V1)
#define Start_CRC_Calculation()                (CRCCONbits.CRCGO = 1)    
#elif defined (_CRC_PROG_V2)   
#define Start_CRC_Calculation()                (CRCCON1bits.CRCGO = 1)  
#endif  

/* 
   Macro to Stop CRC Calculation
*/

#if defined (_CRC_PROG_V1)
#define Stop_CRC_Calculation()                 (CRCCONbits.CRCGO = 0)   
#elif defined (_CRC_PROG_V2)  
#define Stop_CRC_Calculation()                 (CRCCON1bits.CRCGO = 0)  
#endif

/* Macros to write value to the CRCDAT/CRCDATL/CRCDATH register(s) */

#if defined (_CRC_PROG_V1)

#define WRITE_CRC_DATA_WORD(data)         (CRCDAT = data)
#define WRITE_CRC_DATA_BYTE(data)         (*(UINT8*)&CRCDAT = data)

#elif defined (_CRC_PROG_V2)

#define WRITE_CRC_DATA_WORD(data)          (CRCDATL = data)
#define WRITE_CRC_DATA_BYTE(data)	   (*(UINT8*)&CRCDATL = data)
#define WRITE_CRC_DATA_DWORDL(data_lo)     (CRCDATL = data_lo)
#define WRITE_CRC_DATA_DWORDH(data_hi)     (CRCDATH = data_hi)

#endif

/* Macros to set the previous CRC result */

#if defined (_CRC_PROG_V1)

#define SET_CRC_RESULT(data)              (CRCWDAT = data)

#elif defined (_CRC_PROG_V2)

#define SET_CRC_RESULT(data)		   (CRCWDATL = data)
#define SET_CRC_RESULT_LO(data_lo)         (CRCWDATL = data_lo)
#define SET_CRC_RESULT_HI(data_hi)         (CRCWDATH = data_hi)    

#endif 

/* Macros to get the final checksum */
 
#if defined (_CRC_PROG_V1)

#define GET_CRC_RESULT()		(CRCWDAT)

#endif

#if defined (_CRC_PROG_V2)

#define GET_CRC_RESULT() 		(CRCWDATL)

#endif  

/******************************************************************************
 * Function:        UINT16 CRC_Calc_ChecksumWord(UINT16* data, UINT16 Number_of_words,
 *                                       UINT16 prev_CRC)
 *
 * PreCondition:    CRC Module must be configured   
 *
 * Input:           data - Pointer to the first data word for which CRC needs to be 
 *                         calculated.
 *                  Number_of_words - Total number of words for which CRC needs to be 
 *                         calculated.
 *                  prev_CRC - previous CRC result. Note*
 *                  
 * Output:          Returns Two Byte CRC checksum based on the set polynomial
 *
 * Side Effects:    None
 *
 * Overview:        This function calculates CRC checksum for the data provided by the user,
 *                  based on the polynomial set in the CRCXOR Register.
 *
 * Note:            This input parameter is provided as a provision to allow continuation
 *                  of previously being computed checksum. In case the checksum is being calculated
 *                  for a fresh set of data then the input value for prev_CRC should be '0'.
 *****************************************************************************/
#if (defined (_CRC_PROG_V1) || defined (_CRC_PROG_V2))
extern UINT16 CRC_Calc_ChecksumWord(UINT16* data, UINT16 Number_of_words, UINT16 prev_CRC) __attribute__ ((section (".libperi")));
#endif

/******************************************************************************
 * Function:        UINT16 CRC_Calc_ChecksumByte(UINT8* data, UINT16 Number_of_bytes,
 *                                       UINT16 prev_CRC)
 *
 * PreCondition:    CRC Module must be configured   
 *
 * Input:           data - Pointer to the first data byte for which CRC needs  
 *                         to be calculated.
 *                  Number_of_bytes - Total number of bytes for which CRC needs 
 *                         to be calculated.
 *                  prev_CRC - previous CRC result. Note*
 *                  
 * Output:          Returns One Byte CRC checksum based on the set polynomial
 *
 * Side Effects:    None
 *
 * Overview:        This function calculates CRC checksum for the data provide by ,
 *                  the user based on the polynomial set in the CRCXOR Register.
 *
 * Note:            This input parameter is provided as a provision to allow continuation
 *                  of previously being computed checksum. In case the checksum is being calculated
 *                  for a fresh set of data then the input value for prev_CRC should be '0'.
 *****************************************************************************/
#if (defined (_CRC_PROG_V1) || defined (_CRC_PROG_V2))
extern UINT16 CRC_Calc_ChecksumByte(UINT8* data, UINT16 Number_of_bytes, UINT16 prev_CRC) __attribute__ ((section (".libperi")));
#endif

/******************************************************************************
 * Function:        UINT32 CRC_Calc_ChecksumDWord(UINT32* data, UINT16 Number_of_words,
 *                                       UINT32 prev_CRC)
 *
 * PreCondition:    CRC Module must be configured   
 *
 * Input:           data - Pointer to the first data double word for which CRC needs to be 
 *                         calculated.
 *                  Number_of_words - Total number of dwords for which CRC needs to be 
 *                         calculated.
 *                  prev_CRC - previous CRC result. Note*
 *                  
 * Output:          Returns Four Byte CRC checksum based on the set polynomial
 *
 * Side Effects:    None
 *
 * Overview:        This function calculates CRC checksum for the data provided by the user,
 *                  based on the polynomial set in the CRCXOR Register.
 *
 * Note:            This input parameter is provided as a provision to allow continuation
 *                  of previously being computed checksum. In case the checksum is being calculated
 *                  for a fresh set of data then the input value for prev_CRC should be '0'.
 *****************************************************************************/
#if defined (_CRC_PROG_V2)
extern UINT32 CRC_Calc_ChecksumDWord(UINT32* data, UINT16 Number_of_words, UINT32 prev_CRC) __attribute__ ((section (".libperi")));
#endif

/******************************************************************************
 * Function:        void CRC_Config(UINT16 poly , UINT16 config) [for dsPIC33F/PIC24H]
                    void CRC_Config(UINT32 poly , UINT16 config1 , UINT16 config2) [for dsPIC33E/PIC24E]
 *
 * PreCondition:    None   
 *
 * Input:           poly - Polynomial to calculate CRC
 *                  config - CRC Control reg value
  		    config1 - CRCCON1 value { for dsPIC33E/
 		    config2 - CRCCON2 value    PIC24E }
 *                  
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        This function configures CRC module
 *
 * Note:            None
 *****************************************************************************/
#if defined (_CRC_PROG_V1)
extern void CRC_Config(UINT16 poly , UINT16 config) __attribute__ ((section (".libperi")));
#elif defined (_CRC_PROG_V2)
extern void CRC_Config(UINT32 poly , UINT16 config1 , UINT16 config2) __attribute__ ((section(".libperi")));
#endif

/******************************************************************************
 * Function:        void CRC_Config_INTR(UINT8 intr_byte)
 *
 * PreCondition:    None   
 *
 * Input:           intr_byte - Interrupt priority/State
 *                              bit 0 -  bit 2 --> priority setting
 *                                       bit 3 --> Interrupt Enable/Disable
 *                              bit 4 -  bit 7 --> unsused
 *                  
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        This function configures interrupts of CRC module
 *
 * Note:            None
 *****************************************************************************/
#if defined (_CRC_PROG_V1) || defined (_CRC_PROG_V2)
extern void CRC_Config_INTR(UINT8 intr_byte) __attribute__ ((section (".libperi")));
#endif

#endif /* __CRC_H */
