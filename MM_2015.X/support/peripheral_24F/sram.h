#ifndef __SRAM_H
#define __SRAM_H

/*****************************************************************************
 *                  SRAM PERIPHERAL LIBRARY HEADER FILE
 ******************************************************************************
 * FileName:        sram.h
 * Dependencies:    See include below
 * Processor:       PIC24F
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
 *****************************************************************************/

#include "PIC24F_periph_features.h"

#if defined (sram_v1_1) || defined (LIB_BUILD)

/*User should make sure that any one of the module is enabled commenting remaining
SPI module. By default SPI module 1 is used*/
#define			USE_SPI_MODULE1
//#define		USE_SPI_MODULE2
//#define		USE_SPI_MODULE3

/*This pin is to select SRAM. Uses has to defined this pin number depends on the connection*/
#define		SRAM_CS				LATBbits.LATB4

//************************************************************************************************************************
//   NOTE TO USER: USER HAVE TO BUILD THE LIBRARY AFTER ANY CHANGES MADE TO THE ABOVE PARAMETERS THAT INCLUDES
//	1. SRAM_CS
//	2. USE_SPI_MODULEx
//*************************************************************************************************************************	

#define  	SRAM_RD_CMD  			0x03  /* Read command for SRAM */
#define  	SRAM_WR_CMD  			0x02  /* Write command for SRAM */
#define 	SRAM_STATUS_RD_CMD   	0x05  /* Read Status command for SRAM */
#define  	SRAM_STATUS_WR_CMD  	0x01  /* Write Status command for SRAM */

#define		SRAM_BYTE_MODE			0x01  /* Command for SRAM Byte mode */
#define		SRAM_PAGE_MODE			0x81  /* Command for SRAM Page mode */
#define		SRAM_SEQ_MODE    		0x41  /* Command for SRAM Sequence mode */

#define		SRAM_PAGE_SIZE			32  /* SRAM Page size */
#define		SRAM_DUMMY_VAL			0xFF  /* Dummy value to write to SRAM */

#if defined(USE_SPI_MODULE1)
	#define	WriteSPI				WriteSPI1
	#define	ReadSPI					ReadSPI1
	#define SPI_Rx_Buf_Full			SPI1_Rx_Buf_Full
#elif defined(USE_SPI_MODULE2)
	#define	WriteSPI				WriteSPI2
	#define	ReadSPI					ReadSPI2
	#define SPI_Rx_Buf_Full			SPI2_Rx_Buf_Full
#elif defined(USE_SPI_MODULE3)
	#define	WriteSPI             	WriteSPI3
	#define	ReadSPI					ReadSPI3
	#define SPI_Rx_Buf_Full			SPI3_Rx_Buf_Full
#else	
	#error Uncomment any one of the macro in "sram.h" USE_SPI_ModuleX(where X = 1 or 2 or 3)
#endif

unsigned char __attribute__ ((section (".libperi")))SRAMReadStatusReg(void);

void __attribute__ ((section (".libperi")))SRAMWriteStatusReg(unsigned char WriteVal);

void __attribute__ ((section (".libperi")))SRAMCommand(unsigned char AddLB, unsigned char AddHB, unsigned char RWCmd);

void __attribute__ ((section (".libperi")))SRAMWriteByte(unsigned char AddLB,unsigned char AddHB,unsigned char Data);

unsigned char __attribute__ ((section (".libperi")))SRAMReadByte(unsigned char AddLB,unsigned char AddHB);

unsigned char __attribute__ ((section (".libperi")))SRAMWritePage(unsigned char AddLB,unsigned char AddHB, unsigned char *WriteData);

unsigned char __attribute__ ((section (".libperi")))SRAMReadPage(unsigned char AddLB,unsigned char AddHB,unsigned char *ReadData);

void __attribute__ ((section (".libperi")))SRAMWriteSeq(unsigned char AddLB,unsigned char AddHB,unsigned char *WriteData,
                                                        unsigned int WriteCnt);
														
void __attribute__ ((section (".libperi")))SRAMReadSeq(unsigned char AddLB,unsigned char AddHB,unsigned char *ReadData,
                                                       unsigned int ReadCnt);
#endif

#endif

