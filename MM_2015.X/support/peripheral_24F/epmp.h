#ifndef EEPMP_H
#define EEPMP_H

/******************************************************************************
 *
 *                  EPMP PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        epmp.h
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
 *
 *****************************************************************************/

#include "PIC24F_periph_features.h"

//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#if defined (epmp_v1_1) || defined (epmp_v1_2) || defined (epmp_v2_1) ||defined (LIB_BUILD)

/*****************************************************************************/
/*Section : ENUMERATIONS */
/*****************************************************************************/


/******************************************************************************
 * Macro:           EPMP_EDS_VAR_DEFINE(data_type, addr)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        macro is used for variable definition in Extended Data Space(EDS)
 *                  
 * Input:           	data_type - data type of variable that need to be defined like byte or word etc
 *			eds_addr - starting address from where the variable need to be placed in the extended data space (EDS)
 *
 * Output:          None
 *
 * Note:        1.    Prototype of Macro Usage: 
			EPMP_EDS_VAR_DEFINE(BYTE,0x00010000ul)    arg1,arg2,arg3[30];
			EPMP_EDS_VAR_DEFINE(WORD,0x00010000ul)   arg1,arg2,arg3[30];
		2.   Variable need to defined as Global with this attribute in order that variable is placed in Extended Data Space.	
 *****************************************************************************/
#define		EPMP_EDS_VAR_DEFINE(data_type,eds_addr)		__eds__ data_type __attribute__((space(eds),address(eds_addr),noload)) 


//Store result
typedef enum 
{
    buffer0, //buffer 0
    buffer1, //buffer 1
    buffer2, //buffer 2
    buffer3 //buffer 3
}BUFFER ;

//Structure to pass the configuration parameters that enables the PMP with user defined configuration settings
typedef struct
{
	unsigned int 	control1;			//Configures PMCON1
	#if defined (epmp_v1_1) || defined (epmp_v1_2) ||defined (LIB_BUILD)
	unsigned int 	control2;			//Configures PMCON2
	#endif
	unsigned int 	control3;			//Configures PMCON3
	unsigned char	master_res_addr;	//Configures PMP Master reserve address space bits in PMCON2
	unsigned long	port;				//Configures PMP port pin functionality in PMCON3 & PMCON4
	unsigned int	cs1_config;			//Configures Chip Select1
	unsigned int	cs2_config;			//Configures Chip Select2
	unsigned int	cs1_mode;			//Configures Chip Select1 mode
	unsigned int	cs2_mode;			//Configures Chip Select2 mode
	unsigned int	cs1_addr;			//Configures Chip Select1 base address
	unsigned int	cs2_addr;			//Configures Chip Select2 base address
	BYTE	interrupt;			//Configures PMP Interrupt enable bit and priority

}CONFIG_PMP;

/******************************************************************************
 * HOWTO Use the PIC24PMPLib Bit Masks
 *
 * The configuration of the PMP peripheral is highly dependent on its use in
 * the target application and should be configured appropriately to interface
 * correctly to the external device.  Setting these bits are typically done only
 * once and seldom changed afterwards.
 * To help simplify the process of configuring these registers, this header file
 * includes "configuration" bit masks below which are designed to be bitwise "|"
 * (OR'd) together to form the desired configuration mask for each register.
 * These OR'd masks can then be written directly to the PMCON, PMMODE and PMPEN
 * registers or used as arguments to the PMPOpen() library function.
 * See examples in the "configuration bit mask section" below.
 *
 * A second method of configuring the PMP peripheral registers is to use the PMP
 * register structures typedefs provided at the begining of this header file.
 * Each register structure can be popluated with the desired values and passed 
 * as an argument to the PMPOpen() library function.
 */
/*=============== CONFIGURATION BIT MASKS  ==================================
* Example: Configure PMP using PMPConfig() library function
 *
 * Step 1 - select appropriate masks and  "|" together for each register.
 * #define PMCON_CONFIG     BIT_ADR_MUX_16_8 | BIT_USE_CS1_CS2 | BIT_EPMP_ON ...
 * #define PMMODE_CONFIG    BIT_IRQ_NONE | BIT_INC_ADR_NONE | BIT_DATA_16 ...
 * #define PMPEN_CONFIG     BIT_P_ALL_ENABLE ...
 *
 * Step 2 - Pass these masks as arguments to the PMPOpen() function,
 *    PMPOpen(PMCON_CONFIG, PMMODE_CONFIG, PMPEN_CONFIG);
 *
 * or write them directly to the target register.
 *    PMCON = PMCON_CONFIG;
 *    PMMODE = PMMODE_CONFIG;
 *    etc.
 */


/*****************************************************************************/
/* PMCON1 Port Control Register Configuration Bit Definitions*/
/*****************************************************************************/
/* PMPEN BIT configuration bit mask defines */
#define EPMP_ON                  		0x8000 /* Configure PMP enabled */
#define EPMP_OFF                 		0x0000 /* Configure PMP disabled */
#define EPMP_MASK                		(~EPMP_ON)	/* Mask PMPEN BIT */

/* STOP DURING IDLE BIT configuration bit mask defines */
#define EPMP_SIDL_ON                 	0x2000 /* Configure Stop in IDLE mode ON */
#define EPMP_SIDL_OFF                	0x0000 /* Configure Stop in IDLE mode OFF */
#define EPMP_SIDL_MASK               	(~EPMP_SIDL_ON)	/* Mask SIDL BIT */

/* ADDRESS MULTIPLEXING BITS configuration bit mask defines */
#define EPMP_ADDR_MUX_3_ADDR_PHS         0x1800 /* Lower address bits are multiplexed with data bits using 3 address phases */
#define EPMP_ADDR_MUX_2_ADDR_PHS         0x1000 /* Lower address bits are multiplexed with data bits using 2 address phases */
#define EPMP_ADDR_MUX_1_ADDR_PHS         0x0800 /* Lower address bits are multiplexed with data bits using 1 address phases */
#define EPMP_ADDR_MUX_NONE           	 0x0000 /* Address and data appear on separate pins */
#define EPMP_ADDR_MUX_MASK           	 (~EPMP_ADDR_MUX_3_ADDR_PHS) /* Mask ADRMUXx BITS */

/* MODE1:MODE0: Parallel Port Mode Select bits that defines */
#define EPMP_MOD_MASTER			    	 0x0300 /* Master mode */
#define EPMP_MOD_ENH_SLAVE		 	     0x0200 /* Enhanced PSP; pins used are PMRD, PMWR, PMCS, PMD<7:0> and PMA<1:0> */
#define EPMP_MOD_BUF_SLAVE	             0x0100 /* Buffered PSP; pins used are PMRD, PMWR, PMCS and PMD<7:0> */
#define EPMP_MOD_LEGACY_SLAVE          	 0x0000 /* Legacy Parallel Slave Port; PMRD, PMWR, PMCS and PMD<7:0> pins are used */
#define EPMP_MOD_MASK		             (~EPMP_MOD_MASTER) /* Mask MODEx BITS */

/* CS FUNCTION SELECTION BITS configuration bit mask defines */
#define EPMP_USE_ALTCS2_ALTCS1           0x0080 /* Configure 10 = CS1 in PMA<14> and CS2 in PMA<15> as chip selects */
#define EPMP_USE_ALTCS2_CS1              0x0040 /* Configure 10 = CS1 in PMCS1 and CS2 in PMA<15> as chip selects */
#define EPMP_USE_CS2_CS1                 0x0000 /* Configure 10 = CS1 in PMCS1 and CS2 in PMCS2 as chip selects */
#define EPMP_CS_FUNC_MASK                (~(EPMP_USE_ALTCS2_ALTCS1 | EPMP_USE_ALTCS2_CS1)) /* Mask CSx BITS */

/* AL BIT configuration bit mask defines */
#define EPMP_LATCH_HI                	0x0020 /* Configure (PMALL, PMALH and PMALU) = active high */
#define EPMP_LATCH_LO                	0x0000 /* Configure (PMALL, PMALH and PMALU) = active low */
#define EPMP_LATCH_MASK              	(~EPMP_LATCH_HI) /* Mask AL BIT */

/* ALMODE  BIT configuration bit mask defines */
#define EPMP_SMART_LATCH_ON              0x0010 /* Enable “smart” address strobes (each address phase is only present if the current access would cause a different address in the latch than the previous address) */
#define EPMP_SMART_LATCH_OFF             0x0000 /* Disable “smart” address strobes (latches all address irrespective of changes in address  value */
#define EPMP_LATCH_MASK              	(~EPMP_LATCH_HI) /* Mask ALMODE BIT */

/* BUSKEEP  BIT configuration bit mask defines */
#define EPMP_BUSKEEP_ON              	0x0004 /* Data bus keep their last value when not actively being driven*/
#define EPMP_BUSKEEP_OFF             	0x0000 /* Data bus are in high impedance state when not actively being driven */
#define EPMP_BUSKEEP_MASK              	(~EPMP_BUSKEEP_ON) /* Mask BUSKEEP BIT */

/* IRQM FUNCTION SELECTION BITS configuration bit mask defines */
#define EPMP_IRQ_BUF                 	0x0003 /* Configure Interrupt generated on R/W buffer 3 */
#define EPMP_IRQ_RW                  	0x0001 /* Configure Interrupt at end of R/W cycle */
#define EPMP_IRQ_NONE                	0x0000 /* Configure No interrupt generated */
#define EPMP_IRQ_MASK                	(~EPMP_IRQ_BUF)
/****************************************************************************/


/*****************************************************************************/
/* PMCON2 Port Control Register Configuration Bit Definitions */
/*****************************************************************************/
/* MSTSEL1:MSTSEL0: Parallel Port Master Select bits  mask defines */
#if defined (epmp_v1_1)
#define EPMP_ALT_MASTER_IO_DIR          0x0300 /* Alternate Master I/Os direct access (PMP bypass mode) */
#define EPMP_ALT_MASTER		            0x0100 /* Alternate Master */
#define EPMP_CPU_MASTER                 0x0000 /* CPU is the Master for PMP */
#define EPMP_MASTER_MASK                (~EPMP_ALT_MASTER_IO_DIR) /* Mask MSTSELx BITS */
#endif

/* RADDR23:RADDR16: Parallel Master Port Reserved Address Space bits */
// This address has to be passed by user as a parameter "master_res_addr" whos value ranging from 0x00 to 0xFF to function "EPMPOpen"
/****************************************************************************/


/*****************************************************************************/
/* PMCON3 Port Control Register Configuration Bit Definitions */
/*****************************************************************************/
/* BYTE ENABLE BIT configuration bit mask defines */
#define EPMP_HIGH_BE_ON                  0x2000 /* Configure High Nibble / Byte Enable port bit PTBE1EN ON */
#define EPMP_HIGH_BE_OFF                 0x0000 /* Configure High Nibble / Byte Enable port bit PTBE1EN OFF */
#define EPMP_HIGH_BE_MASK                 (~EPMP_HIGH_BE_ON) /* Mask PTBE1EN BIT */

#define EPMP_LOW_BE_ON                   0x1000 /* Configure low Nibble / Byte Enable port bit PTBE0EN ON */
#define EPMP_LOW_BE_OFF                  0x0000 /* Configure low Nibble / Byte Enable port bit PTBE0EN OFF */
#define EPMP_LOW_BE_MASK                 (~EPMP_LOW_BE_ON)  /* Mask PTBE0EN BIT */

/* RD and WR STROBE FUNCTION BIT configuration bit mask defines */
#define EPMP_WR_ON                   	0x8000 /* Configure WR, WR/ENB strobe = ON */
#define EPMP_WR_OFF                  	0x0000 /* Configure WR, WR/ENB strobe = OFF */

#define EPMP_RD_ON                   	0x4000 /* Configure RD, RD/WR strobe = ON */
#define EPMP_RD_OFF                  	0x0000 /* Configure RD, RD/WR strobe = ON */

#define EPMP_RD_WR_ON                	0xC000 /* Configure RD, RD/WR strobe = ON; WR, WR/ENB strobe = ON */
#define EPMP_RD_WR_OFF               	0x0000 /* Configure RD, RD/WR strobe = OFF; WR, WR/ENB strobe = OFF */
#define EPMP_RD_WR_MASK              	(~EPMP_RD_WR_ON)	  /* Mask PTWREN PTRDEN BIT */

/*AWAITM1:AWAITM0: Address Latch Strobe Wait States bits mask defines */
#define EPMP_AWAITM_3_12_TCY             0x0600 /* Configure 3 1/2 Tcy Address Latch Strobe WAIT */
#define EPMP_AWAITM_2_12_TCY             0x0400 /* Configure 2 1/2 Tcy Address Latch Strobe WAIT */
#define EPMP_AWAITM_1_12_TCY             0x0200 /* Configure 1 1/2 Tcy Address Latch Strobe WAIT */
#define EPMP_AWAITM_0_12_TCY             0x0000 /* Configure 1/2 Tcy Address Latch Strobe WAIT */
#define EPMP_AWAITM_MASK              	(~EPMP_AWAITM_3_12_TCY)		/* Mask AWAITMx  BIT */

/*AWAITE: Address Hold After Address Latch Strobe Wait States bits mask defines */
#define EPMP_AWAITE_1_14_TCY             0x0100 /* Configure 1 1/4 Tcy Address Hold After Address Latch Strobe WAIT */
#define EPMP_AWAITE_0_14_TCY             0x0000 /* Configure 2 1/4 Tcy Address Hold After Address Latch Strobe WAIT */
#define EPMP_AWAITE_MASK              	(~EPMP_AWAITE_1_14_TCY)		/* Mask AWAITE  BIT */

/* PTEN22:PTEN16: PMP Address Port Enable bits */
#define EPMP_P22                     	0x0040 /*PMA22 function as PMP address lines*/
#define EPMP_P21                     	0x0020 /*PMA21 function as PMP address lines*/
#define EPMP_P20                     	0x0010 /*PMA20 function as PMP address lines*/
#define EPMP_P19                     	0x0008 /*PMA19 function as PMP address lines*/
#define EPMP_P18                     	0x0004 /*PMA18 function as PMP address lines*/
#define EPMP_P17                     	0x0002 /*PMA17 function as PMP address lines*/
#define EPMP_P16                     	0x0001 /*PMA16 function as PMP address lines*/
/****************************************************************************/


/*****************************************************************************/
/* PMCON4 Port Control Register Configuration Bit Definitions */
/*****************************************************************************/
/* PTEN15:PTEN00: PMP Address Port Enable bits */
#define EPMP_P15_CS2                    0x8000 /*PMA15 function as PMP address lines/ Chip Select2*/
#define EPMP_P14_CS1                    0x4000 /*PMA14 function as PMP address lines / Chip Select1*/
#define EPMP_P13                     	0x2000 /*PMA13 function as PMP address lines*/
#define EPMP_P12                     	0x1000 /*PMA12 function as PMP address lines*/
#define EPMP_P11                     	0x0800 /*PMA11 function as PMP address lines*/
#define EPMP_P10                     	0x0400 /*PMA10 function as PMP address lines*/
#define EPMP_P9                      	0x0200 /*PMA9 function as PMP address lines*/
#define EPMP_P8                      	0x0100 /*PMA8 function as PMP address lines*/
#define EPMP_P7                      	0x0080 /*PMA7 function as PMP address lines*/
#define EPMP_P6                      	0x0040 /*PMA6 function as PMP address lines*/
#define EPMP_P5                      	0x0020 /*PMA5 function as PMP address lines*/
#define EPMP_P4                      	0x0010 /*PMA4 function as PMP address lines*/
#define EPMP_P3                      	0x0008 /*PMA3 function as PMP address lines*/
#define EPMP_P2                      	0x0004 /*PMA2 function as PMP address lines*/
#define EPMP_P1                      	0x0002 /*PMA1 function as PMP address lines*/
#define EPMP_P0                      	0x0001 /*PMA0 function as PMP address lines / Address Latch Strobe*/
/****************************************************************************/

/*****************************************************************************/
/* PMCSxCF Port Control Register Configuration Bit Definitions */
/*****************************************************************************/
/* CSDIS: Chip Select x Disable bit mask defines */
#define EPMP_CSDIS_ON                 	0x8000 /*Disable the Chip Select x functionality */
#define EPMP_CSDIS_OFF                	0x0000 /* Enable the Chip Select x functionality */
#define EPMP_CSDIS_MASK               	(~EPMP_CSDIS_ON)	/* Mask CSDIS BIT */

/* CSP: Chip Select x Polarity bit mask defines */
#define EPMP_CS_POL_HIGH                0x4000 /*  the Chip Select x is active high signal */
#define EPMP_CS_POL_LOW                	0x0000 /*  the Chip Select x is active low signal */
#define EPMP_CS_POL_MASK               	(~EPMP_CS_POL_HIGH)	/* Mask CSP BIT */

/* CSPTEN: PMCSx Port Enable bit mask defines */
#define EPMP_CS_PORT_ON                	0x2000 /*  the Chip Select x is port enabled */
#define EPMP_CS_PORT_OFF                0x0000 /*  the Chip Select x is Port disabled */
#define EPMP_CS_PORT_MASK               (~EPMP_CS_PORT_ON)	/* Mask CSPTEN BIT */

/* BEP: Chip Select x Nibble/Byte Enable Polarity bit mask defines */
#define EPMP_CS_BE_ON                	0x1000 /*  Nibble/Byte enable active-high (PMBE0, PMBE1) */
#define EPMP_CS_BE_OFF                	0x0000 /*  Nibble/Byte enable active-low (PMBE0, PMBE1) */
#define EPMP_CS_BE_MASK               	(~EPMP_CS_BE_ON)	/* Mask BEP BIT */

/* WRSP: Chip Select x Write Strobe Polarity bit mask defines */
#define EPMP_CS_WR_STROBE_HIGH           0x0400 /*  Write strobe active-high (PMWR) in Slave mode or Enable strobe active-high (PMENB) in Master mode*/
#define EPMP_CS_WR_STROBE_LOW            0x0000 /*  Write strobe active-low (PMWR) in Slave mode or Enable strobe active-low (PMENB) in Master mode */
#define EPMP_CS_WR_STROBE_MASK           (~EPMP_CS_STROBE_HIGH)	/* Mask WRSP BIT */

/* RDSP: Chip Select x Read Strobe Polarity bit mask defines */
#define EPMP_CS_RD_STROBE_HIGH           0x0200 /*  Read strobe active-high (PMRD) in Slave mode or Read/Write strobe active-high (PMRD/PMWR) in Master mode*/
#define EPMP_CS_RD_STROBE_LOW            0x0000 /*  Read strobe active-low (PMRD) in Slave mode or Read/Write strobe active-low (PMRD/PMWR) in Master mode */
#define EPMP_CS_RD_STROBE_MASK           (~EPMP_CS_RD_STROBE_HIGH)	/* Mask RDSP BIT */

/* SM: Chip Select x Strobe Mode bit mask defines */
#define EPMP_CS_STROBE_ON                0x0100 /* Read/Write and Enable strobes (PMRD/PMWR and PMENB) */
#define EPMP_CS_STROBE_OFF               0x0000 /*  Read and Write strobes (PMRD and PMWR) */
#define EPMP_CS_SRTOBE_MASK              (~EPMP_CS_STROBE_ON)	/* Mask SM BIT */

/* ACKP: Chip Select x Acknowledge Polarity bit mask defines */
#define EPMP_CS_ACK_HIGH                 0x0080 /* ACK active-high (PMACK1) */
#define EPMP_CS_ACK_LOW		             0x0000 /*  ACK active-low (PMACK1) */
#define EPMP_CS_ACK_POL_MASK             (~EPMP_CS_ACK_HIGH)	/* Mask ACKP BIT */

/* PTSZ1:PTSZ0: Chip Select x Port Size bits mask defines */
#define EPMP_CS_PORT_16	                0x0040 /* 16-bit Port Size (PMD<15:0>) */
#define EPMP_CS_PORT_4		            0x0020 /*  4-bit Port Size (PMD<7:0>) */
#define EPMP_CS_PORT_8		            0x0010 /*  8-bit Port Size (PMD<3:0>) */
#define EPMP_CS_PORT_SIZE_MASK          (~(EPMP_CS_PORT_16 | EPMP_CS_PORT_8))	/* Mask PTSZx BIT */
/****************************************************************************/


/*****************************************************************************/
/* PMCSxBS Port Control Register Configuration Bit Definitions */
/*****************************************************************************/
/* BASE23:BASE16: Chip Select x Base Address bits */
// This address has to be passed by user as a parameter "csx_addr" whos value ranging from 0x00 to 0xFF to function "EPMPOpen"
/****************************************************************************/


/*****************************************************************************/
/* PMCSxMD Port Control Register Configuration Bit Definitions */
/*****************************************************************************/
/*ACKM1:ACKM0: Chip Select x Acknowledge Mode bits mask defines */
#define EPMP_CS_ACK_MOD_RW_COM          0x4000 /* PMACKx used to determine when a read/write operation is complete */
#define EPMP_CS_ACK_MOD_RW_TIME         0x2000 /* PMACKx used to determine when a read/write operation is complete with time-out */
#define EPMP_CS_ACK_MOD_OFF	            0x0000 /* PMACKx is not used */
#define EPMP_CS_ACK_MASK              	(~(EPMP_CS_ACK_MOD_RW_COM | EPMP_CS_ACK_MOD_RW_TIME))		/* Mask ACKMx  BIT */

/*AMWAIT2:AMWAIT0: Chip Select x Alternate Master Wait States bits mask defines */
#if defined (epmp_v1_1)|| defined (epmp_v1_2)
#define EPMP_CS_AMWAIT_10	            0x3800 /* Wait of 10 Alternate Master cycles */
#define EPMP_CS_AMWAIT_9		        0x3000 /* Wait of 10 Alternate Master cycles */
#define EPMP_CS_AMWAIT_8 	            0x2800 /* Wait of 10 Alternate Master cycles */
#define EPMP_CS_AMWAIT_7 	            0x2000 /* Wait of 10 Alternate Master cycles */
#define EPMP_CS_AMWAIT_6 	            0x1800 /* Wait of 10 Alternate Master cycles */
#define EPMP_CS_AMWAIT_5 	            0x1000 /* Wait of 10 Alternate Master cycles */
#define EPMP_CS_AMWAIT_4 	            0x0800 /* Wait of 10 Alternate Master cycles */
#define EPMP_CS_AMWAIT_3 	            0x0000 /* Wait of 10 Alternate Master cycles */
#define EPMP_CS_AMWAITM_MASK            (~EPMP_CS_AMWAIT_10)		/* Mask AMWAITx  BITS */
#endif

/* DWAITB1:DWAITB0: Chip Select x Data Setup Before Read/Write Strobe Wait States bits */
#define EPMP_WAITB_3_TCY              	0x00C0 /*PMP Waits till 3 1/4Tcy at beginning*/
#define EPMP_WAITB_2_TCY              	0x0080 /*PMP Waits till 2 1/4Tcy at beginning*/
#define EPMP_WAITB_1_TCY              	0x0040 /*PMP Waits till 1 1/4Tcy at beginning*/
#define EPMP_WAITB_0_TCY              	0x0000 /*PMP Waits till 1/4 Tcy at beginning*/
#define EPMP_WAITB_TCY_MASK             (~EPMP_WAITB_3_TCY) /* Mask DWAITBx  BITS */

/* DWAITM3:DWAITM0: Chip Select x Data Read/Write Strobe Wait States bits for Write operations */
#define EPMP_WAITM_15_TCY             	0x003C /*PMP Waits till 15 1/2Tcy for Write OR 15 3/4Tcy for Read in middle*/
#define EPMP_WAITM_14_TCY             	0x0038 /*PMP Waits till 14 1/2Tcy for Write OR 14 3/4Tcy for Read in middle*/
#define EPMP_WAITM_13_TCY             	0x0034 /*PMP Waits till 13 1/2Tcy for Write OR 13 3/4Tcy for Read in middle*/
#define EPMP_WAITM_12_TCY             	0x0030 /*PMP Waits till 12 1/2Tcy for Write OR 12 3/4Tcy for Read in middle*/
#define EPMP_WAITM_11_TCY             	0x002C /*PMP Waits till 11 1/2Tcy for Write OR 11 3/4Tcy for Read in middle*/
#define EPMP_WAITM_10_TCY             	0x0028 /*PMP Waits till 10 1/2Tcy for Write OR 10 3/4Tcy for Read in middle*/
#define EPMP_WAITM_9_TCY              	0x0024 /*PMP Waits till 9 1/2Tcy for Write OR 9 3/4Tcy for Read in middle*/
#define EPMP_WAITM_8_TCY              	0x0020 /*PMP Waits till 8 1/2Tcy for Write OR 8 3/4Tcy for Read in middle*/
#define EPMP_WAITM_7_TCY              	0x001C /*PMP Waits till 7 1/2Tcy for Write OR 7 3/4Tcy for Read in middle*/
#define EPMP_WAITM_6_TCY              	0x0018 /*PMP Waits till 6 1/2Tcy for Write OR 6 3/4Tcy for Read in middle*/
#define EPMP_WAITM_5_TCY              	0x0014 /*PMP Waits till 5 1/2Tcy for Write OR 5 3/4Tcy for Read in middle*/
#define EPMP_WAITM_4_TCY              	0x0010 /*PMP Waits till 4 1/2Tcy for Write OR 4 3/4Tcy for Read in middle*/
#define EPMP_WAITM_3_TCY              	0x000C /*PMP Waits till 3 1/2Tcy for Write OR 3 3/4Tcy for Read in middle*/
#define EPMP_WAITM_2_TCY              	0x0008 /*PMP Waits till 2 1/2Tcy for Write OR 2 3/4Tcy for Read in middle*/
#define EPMP_WAITM_1_TCY              	0x0004 /*PMP Waits till 1 1/2Tcy for Write OR 1 3/4Tcy for Read in middle*/
#define EPMP_WAITM_0_TCY              	0x0000 /*PMP Waits till  1/2Tcy for Write OR  3/4Tcy for Read in middle*/
#define EPMP_WAITM_TCY_MASK             (~EPMP_WAITM_15_TCY) /* Mask DWAITMx  BITS */

/* DWAITE1:DWAITE0: Chip Select x Data Hold After Read/Write Strobe Wait States bits */
#define EPMP_WAITE_3_TCY                 0x0003 /*PMP Waits till  3 1/4Tcy for Write OR  3Tcy for Read in end*/
#define EPMP_WAITE_2_TCY                 0x0002 /*PMP Waits till  2 1/4Tcy for Write OR  2Tcy for Read in end*/
#define EPMP_WAITE_1_TCY                 0x0001 /*PMP Waits till  1 1/4Tcy for Write OR  1Tcy for Read in end*/
#define EPMP_WAITE_0_TCY                 0x0000 /*PMP Waits till  1/4Tcy for Write OR  0Tcy for Read in end*/
#define EPMP_WAITE_TCY_MASK              (~EPMP_WAITE_3_TCY) /* Mask DWAITEx  BITS */
/****************************************************************************/


/*****************************************************************************/
/* IEC2 Parallel Port Interrupt Enable Register Configuration Bit Definitions */
/*****************************************************************************/
/* INTERRUPT ENABLE SELECTION BITS configuration bit mask defines */ 
#define EPMP_INT_ON                  0x80/* Configure PMPIE enabled */  
#define EPMP_INT_OFF                 0x00/* Configure PMPIE disabled */
#define EPMP_INT_MASK                (~EPMP_INT_ON)
/****************************************************************************/

/*****************************************************************************/
/* IPC11 Parallel Port Interrupt Priority Register Configuration Bit Definitions */
/*****************************************************************************/
/* INTERRUPT PRIORITY SELECTION BITS configuration bit mask defines */
#define EPMP_INT_PRI_7               7 /* Configure PMPIP = 7 */
#define EPMP_INT_PRI_6               6 /* Configure PMPIP = 6 */
#define EPMP_INT_PRI_5               5 /* Configure PMPIP = 5 */
#define EPMP_INT_PRI_4               4 /* Configure PMPIP = 4 */
#define EPMP_INT_PRI_3               3 /* Configure PMPIP = 3 */
#define EPMP_INT_PRI_2               2 /* Configure PMPIP = 2 */
#define EPMP_INT_PRI_1               1 /* Configure PMPIP = 1 */
#define EPMP_INT_PRI_0               0 /* Configure PMPIP = disabled */
#define EPMP_INT_PRI_MASK            (~EPMP_INT_PRI_7)
/****************************************************************************/


/******************************************************************************/
/* MACRO DEFINITIONS */
/*****************************************************************************/
/******************************************************************************
 * Macro:           mEPMPIsBusy
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMCON2bits.BUSY (Master Mode only) indicating if PMP master is busy or not
 *                  
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Note:            Use in only Master mode
 *****************************************************************************/
#define mEPMPIsBusy    PMCON2bits.BUSY

/******************************************************************************
 * Macro:           mEPMPIsTransError
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMCON2bits.ERROR  indicating if any transaction error has occured
 *                  
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Note:            None
 *****************************************************************************/
#define mEPMPIsTransError    PMCON2bits.ERROR

/******************************************************************************
 * Macro:           mEPMPIsTransTimeOut
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMCON2bits.TIMEOUT indicating if any transaction time out has occured or not
 *                  
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Note:            None
 *****************************************************************************/
#define mEPMPIsTransTimeOut    PMCON2bits.TIMEOUT

#if defined (epmp_v1_1)
/******************************************************************************
 * Macro:           mEPMPIsAltMasterReq
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMCON2bits.AMREQ indicating if any request is amde by Alternate Master
 *                  
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Note:            None
 *****************************************************************************/
#define mEPMPIsAltMasterReq    PMCON2bits.AMREQ


/******************************************************************************
 * Macro:           mEPMPCurrentMasterStatus
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMCON2bits.CURMST indicating Current master that has control over PMP
 *                  
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Note:            None
 *****************************************************************************/
#define mEPMPCurrentMasterStatus    PMCON2bits.CURMST
#endif

/******************************************************************************
 * Macro:           mEPMPIsBufferFull
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMSTAT.IBF (input buffer full bit)
 *                  
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Note:            Use in any SLAVE mode
 *****************************************************************************/
#define mEPMPIsBufferFull    PMSTATbits.IBF

/******************************************************************************
 * Macro:           mEPMPIsBufferOverflow
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMSTAT.IBOV (input buffer overflow bit)
 *                  
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Note:            Use in any SLAVE mode
 *****************************************************************************/
#define mEPMPIsBufferOverflow  	PMSTATbits.IBOV 

 /******************************************************************************
 * Macro:           mEPMPClearBufferOverflow
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Clears PMSTAT.IBOV (input buffer overflow bit)
 *
 * Input:           None
 *
 * Output:          None
 *
 * Note:            Use in any SLAVE mode         
 *****************************************************************************/
#define mEPMPClearBufferOverflow 	PMSTATbits.IBOV = 0

/******************************************************************************
 * Macro:           mEPMPClearBufferUnderflow
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Clears PMSTAT.OBUF (output buffer underflow bit)*
 *
 * Input:           None
 *
 * Output:          None
 *                  
 * Note:            Use in any SLAVE mode          
 *****************************************************************************/
#define mEPMPClearBufferUnderflow  PMSTATbits.OBUF = 0

/******************************************************************************
 * Macro:           mEPMPIsBufferEmpty
 *
 * PreCondition:    None
 * 
 * Side Effects:    None
 *
 * Overview:        Returns state of PMSTAT.OBE (output buffer empty bit)
 *
 * Input:           None     
 *
 * Output:          TRUE/FALSE
 *
 * Note:            Use in any SLAVE mode
 *****************************************************************************/
#define mEPMPIsBufferEmpty 		PMSTATbits.OBE

/******************************************************************************
 * Macro:           mEPMPIsBufferUnderFlow
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMSTAT.OBUF (output buffer underflow bit)
 *                  
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Note:            Use in any SLAVE mode          
 *****************************************************************************/
#define mEPMPIsBufferUnderflow PMSTATbits.OBUF 

/******************************************************************************
 * Macro:           mEPMPSetAddrMux(mux)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        selects PMP addrs/data multiplexing mode
 *
 * Input:           mux - 0= no mux, 1= 8addr/8data muxed, 2= 16addr/8data muxed
 *
 * Output:          None 
 *                  
 * Note:            
 *****************************************************************************/
#define mEPMPSetAddrMux(mux)     PMCON1bits.ADRMUX = mux

/******************************************************************************
 * Macro:           mEPMPSetCS1_ByteEnableEPolarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP byte enable pin polarity
 *
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 * 
 * Note:            
 *****************************************************************************/
#define mEPMPSetCS1_ByteEnablePolarity(polarity) PMCS1CFbits.BEP = polarity

/******************************************************************************
 * Macro:           mEPMPSetCS2_ByteEnableEPolarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP byte enable pin polarity
 *
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 * 
 * Note:            
 *****************************************************************************/
#define mEPMPSetCS2_ByteEnablePolarity(polarity) PMCS2CFbits.BEP = polarity

/******************************************************************************
 * Macro:           mEPMPSetHighByteEnable(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP High byte/Nibble enable bit
 *
 * Input:           mode - 0=DISABLED, 1=ENABLED
 *
 * Output:          None
 *                  
 * Note:            
 *****************************************************************************/
#define mEPMPSetHighByteEnable(mode) PMCON3bits.PTBE1EN =  mode

/******************************************************************************
 * Macro:           mEPMPSetLowByteEnable(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP Low byte/Nibble enable bit
 *
 * Input:           mode - 0=DISABLED, 1=ENABLED
 *
 * Output:          None
 *                  
 * Note:            
 *****************************************************************************/
#define mEPMPSetLowByteEnable(mode) PMCON3bits.PTBE0EN =  mode

/******************************************************************************
 * Macro:           mEPMPSetChipSelectMode(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP CS function as a chip select or address line
 *
 * Input:           mode - 2= CS2 as A15,CS1 as A14; 1= CS1 as CS1, CS2 as A15;
 *                  0= CS2 as CS2, CS1 as CS1; 3= reserved
 *
 * Output:          None 
 *                  
 * Note:            
 *****************************************************************************/ 
#define mEPMPSetChipSelectMode(mode) PMCON1bits.CSF = mode

/******************************************************************************
 * Macro:           mEPMPSetChipSelect1Enable(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP chip select 1 pin Functionality
 *
 * Input:           mode - 1=DISABLED, 0=ENABLED
 *
 * Output:          None
 *                  
 * Note:            
 *****************************************************************************/
#define mEPMPSetChipSelect1Enable(mode) PMCS1CFbits.CSDIS = mode
 
/******************************************************************************
 * Macro:           mEPMPSetChipSelect2Enable(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP chip select 2 pin Functionality
 *
 * Input:           mode - 1=DISABLED, 0=ENABLED
 *
 * Output:          None
 *                  
 * Note:            
 *****************************************************************************/
#define mEPMPSetChipSelect2Enable(mode) PMCS2CFbits.CSDIS = mode 
 
/******************************************************************************
 * Macro:           mEPMPSetChipSelect1Polarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP chip select 1 pin polarities
 *
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetChipSelect1Polarity(polarity) PMCS1CFbits.CSP = polarity

/******************************************************************************
 * Macro:           mEPMPSetChipSelect2Polarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP chip select 1 pin polarities
 *
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetChipSelect2Polarity(polarity) PMCS2CFbits.CSP = polarity

/******************************************************************************
 * Macro:           mEPMPSetCS1DataMode(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP data width to 8 , 4 OR 16 bit
 *                      
 * Input:           mode - 0=8-bit, 1=4Bit,  2=16-bit
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetCS1DataMode(mode)   PMCS1CFbits.PTSZ = mode

/******************************************************************************
 * Macro:           mEPMPSetCS2DataMode(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP data width to 8 , 4 OR 16 bit
 *                      
 * Input:           mode - 0=8-bit, 1=4Bit,  2=16-bit
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetCS2DataMode(mode)   PMCS2CFbits.PTSZ = mode

/******************************************************************************
 * Macro:           mEPMPSetInterruptEnable(mode)
 *
 * PreCondition:    
 *
 * Side Effects:    None
 *
 * Overview:        sets/clears PMP interrupt enable bit
 *                  
 * Input:           mode - 0=DISABLED, 1=ENABLED
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetInterruptEnable(mode) IEC2bits.PMPIE = mode

/******************************************************************************
 * Macro:           mEPMPSetInterruptPriority(polarity)
 *
 * PreCondition:    
 *
 * Side Effects:    None
 *
 * Overview:        sets/clears PMP interrupt priority bits
 *
 * Input:           priority - 0..7
 *
 * Output:          None
 *                  
 * Note:            
 *****************************************************************************/
#define mEPMPSetInterruptPriority(priority) IPC11bits.PMPIP = priority

/*******************************************************************
Macro       : mEPMP_Clear_Intr_Status_Bit

Include     : pmp.h 

Description : Macro to Clear PMP Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define mEPMP_Clear_Intr_Status_Bit     (IFS2bits.PMPIF = 0)

 /******************************************************************************
 * Macro:           mEPMPSetIdle(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets/clears PMP "STOP IN IDLE" mode bit
 *                  
 * Input:           mode - 0=ENABLED, 1=DISABLED 
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetIdle(mode) PMCON1bits.PSIDL = mode

/******************************************************************************
 * Macro:           mEPMPSetInterruptMode(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        selects PMP interrupt mode
 *                  
 * Input:           mode - 0=no INT, 1=INT on R/W, 3=INT on 3rd buffer read or written , 2= reserved
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetInterruptMode(mode)  PMCON1bits.IRQM = mode

/******************************************************************************
 * Macro:           mEPMPSetAddrLatchPolarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP address latch pin polarity
 *                  
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetAddrLatchPolarity(polarity)  PMCON1bits.ALP = polarity

/******************************************************************************
 * Macro:          mEPMPSetPortEnable(mode)
 *
 * PreCondition:    
 *
 * Side Effects:    None
 *
 * Overview:        sets/clears PMP module enable bit
 *                  
 * Input:           mode - 0=DISABLED, 1=ENABLED
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetPortEnable(mode) PMCON1bits.PMPEN = mode

/******************************************************************************
 * Macro:           mEPMPSetPortMode(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP mode of operation as a slave or master
 *                  
 * Input:           mode - 0= PSP legacy, 1= PSP Buffered, 2= Enhanced PSP, 3= Master
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetPortMode(mode) PMCON1bits.MODE = mode

/******************************************************************************
 * Macro:           mEPMPSetPortPins(Value)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP addrs, latch and CS pins as either functional or I/O FOR LINES PMS<22:0>
 *                  
 * Input:           value - 0-7FFFFFh
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetPortPins(value)  PMCON3 |= ((0xFF0000&value)>>16) , PMCON4 = (unsigned int)(0x00FFFF&value)

/******************************************************************************
 * Macro:           mEPMPSetReadStrobeEnable(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP read pin polarity
 *                  
 * Input:           mode - 0=DISABLED, 1=ENABLED
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
 #define mEPMPSetReadStrobeEnable(mode) PMCON3bits.PTRDEN = mode;
 
/******************************************************************************
 * Macro:           mEPMPSetReadStrobe1Polarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP read pin polarity
 *
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetReadStrobe1Polarity(polarity) PMCS1CFbits.RDSP = polarity

/******************************************************************************
 * Macro:           mEPMPSetReadStrobe2Polarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP read pin polarity
 *
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetReadStrobe2Polarity(polarity) PMCS2CFbits.RDSP = polarity

/******************************************************************************
 * Macro:           mEPMPSetCS1WaitBegin(wait)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP beginning phase wait time
 *                  
 * Input:           wait - 1/4 TO 3 1/4 cycles
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetCS1WaitBegin(wait)  PMCS1MDbits.DWAITB = wait

/******************************************************************************
 * Macro:           mEPMPSetCS2WaitBegin(wait)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP beginning phase wait time
 *                  
 * Input:           wait - 1/4 TO 3 1/4 cycles
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetCS2WaitBegin(wait)  PMCS2MDbits.DWAITB = wait

/******************************************************************************
 * Macro:           mEPMPSetCS1WaitMiddle(wait)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP Middle phase wait time
 *                  
 * Input:           wait - 3/4 TO 15 3/4 cycles for Read and  1/2 TO 15 1/2 for Write Operation
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetCS1WaitMiddle(wait)  PMCS1MDbits.DWAITM = wait

/******************************************************************************
 * Macro:           mEPMPSetCS2WaitMiddle(wait)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP Middle phase wait time
 *                  
 * Input:           wait - 3/4 TO 15 3/4 cycles for Read and  1/2 TO 15 1/2 for Write Operation
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetCS2WaitMiddle(wait)  PMCS2MDbits.DWAITM = wait

/******************************************************************************
 * Macro:           mEPMPSetCS1WaitEnd(wait)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP End phase wait time
 *                  
 * Input:           wait - 1/4 TO 3 1/4 cycles for Write and  0 TO 3 cycles for Read Operation
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetCS1WaitEnd(wait)  PMCS1MDbits.DWAITE = wait

/******************************************************************************
 * Macro:           mEPMPSetCS2WaitEnd(wait)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP End phase wait time
 *                  
 * Input:           wait - 1/4 TO 3 1/4 cycles for Write and  0 TO 3 cycles for Read Operation
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetCS2WaitEnd(wait)  PMCS2MDbits.DWAITE = wait

/******************************************************************************
 * Macro:           mEPMPSetWriteStrobeEnable(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP read pin polarity
 *                  
 * Input:           mode - 0=DISABLED, 1=ENABLED
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
 #define mEPMPSetWriteStrobeEnable(mode) PMCON3bits.PTWREN = mode;
 
/******************************************************************************
 * Macro:           mEPMPSetWriteStrobe1Polarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP write pin polarity
 *                  
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetWriteStrobe1Polarity(polarity)    PMCS1CFbits.WRSP = polarity

/******************************************************************************
 * Macro:           mEPMPSetWriteStrobe2Polarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP write pin polarity
 *                  
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mEPMPSetWriteStrobe2Polarity(polarity)    PMCS2CFbits.WRSP = polarity

/******************************************************************************/
/* FUNCTION PROTOTYPES */
/*****************************************************************************/
extern void __attribute__ ((section (".libperi")))EPMPClose(void) ;

extern BOOL __attribute__ ((section (".libperi")))EPMPIsBufferNEmpty(BUFFER buf) ;

extern BOOL __attribute__ ((section (".libperi")))EPMPIsBufferNFull(BUFFER buf) ;


extern void __attribute__ ((section (".libperi")))EPMPPortConfig(DWORD addrs) ;

extern void __attribute__ ((section (".libperi")))EPMPSlaveReadBuffers(BYTE* ref) ;

extern BYTE __attribute__ ((section (".libperi")))EPMPSlaveReadBufferN(BUFFER buf) ;

extern BOOL __attribute__ ((section (".libperi")))EPMPSlaveWriteBuffers(BYTE* ref) ;

extern BOOL __attribute__ ((section (".libperi")))EPMPSlaveWriteBufferN(BUFFER buf, BYTE value) ;

#if defined (epmp_v1_1) || defined (epmp_v1_2) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define EPMPOpen EPMPOpen_v1
#endif
 extern void __attribute__ ((section (".libperi")))EPMPOpen_v1(CONFIG_PMP* config) ;
#endif

#if defined (epmp_v2_1) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define EPMPOpen EPMPOpen_v2
#endif
 extern void __attribute__ ((section (".libperi")))EPMPOpen_v2(CONFIG_PMP* config) ;
#endif

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif	//_EPMP_H
