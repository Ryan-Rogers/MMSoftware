#ifndef PMP_H
#define PMP_H

/******************************************************************************
 *
 *                  PMP PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        pmp.h
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
#if defined (pmp_v1_1) || defined (pmp_v1_2) || defined (pmp_v2_1) || defined (pmp_v2_2) ||\
	defined (LIB_BUILD)

/*****************************************************************************/
/*Section : ENUMERATIONS */
/*****************************************************************************/
//Store result
typedef enum 
{
    buffer0, //buffer 0
    buffer1, //buffer 1
    buffer2, //buffer 2
    buffer3 //buffer 3
}BUFFER ;


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
 * #define PMCON_CONFIG     BIT_ADR_MUX_16_8 | BIT_USE_CS1_CS2 | BIT_PMP_ON ...
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
 /*================= PERIPHERAL CONTROL BLOCK  ==================================
 * A second method to configure the PMP module is to populate an instance of the
 * PCB (peripheral control block) as required and pass as an argument to the
 * PMPConfigure() library function.
 * Example - initialize a few of the PMP members and pass the PCB to PMPConfigure():
 *
 * PCB myPCB;
 * myPCB.PMPMode =  PMP_MODE_MASTER_2;
 * myPCB.MuxMode =  ADDR_MUX_16_8;
 * myPCB.WRConfig = WR_ENABLE;
 * myPCB.WRPolar =  ACTIVE_LO;
 * myPCB.RDConfig = RD_ENABLE;
 * myPCB.RDPolar =  ACTIVE_LO;
 * ...
 * when all the required members have been populated, call PMPConfigure():
 * PMPConfigure(&myPCB);
 * or using a pointer...
 * PCB* pPCB;
 * pPCB = myPCB;
 * PMPConfigure(pPCB);
 */ 
 
/*****************************************************************************/
/* PMCON Port Control Register Configuration Bit Definitions*/
/*****************************************************************************/
/* PMPEN BIT configuration bit mask defines */
#define BIT_PMP_ON                  0x8000 /* Configure PMP enabled */
#define BIT_PMP_OFF                 0x0000 /* Configure PMP disabled */
#define BIT_PMP_MASK                (~BIT_PMP_ON)

/* STOP DURING IDLE BIT configuration bit mask defines */
#define BIT_SIDL_ON                 0x2000/* Configure Stop in IDLE mode ON */
#define BIT_SIDL_OFF                0x0000 /* Configure Stop in IDLE mode OFF */
#define BIT_SIDL_MASK               (~BIT_SIDL_ON)

#if defined (pmp_v1_2) ||defined (pmp_v2_2) || defined (pmp_v2_1)  || defined (LIB_BUILD)
/* ADDRESS MULTIPLEXING BITS configuration bit mask defines */
/* note: the value 0x1800 is reserved */
#define BIT_ADDR_MUX_16_8           0x1000 /* Configure 10 = All 16-bits addrs muxed on 8-bit data */
#define BIT_ADDR_MUX_8_8            0x0800 /* Configure 01 = Lower 8-bits addrs muxed on 8-bit data */
#define BIT_ADDR_MUX_NONE           0x0000 /* Configure 00 = Addrs and data on separate pins */
#define BIT_ADDR_MUX_MASK           (~(BIT_ADDR_MUX_16_8 | BIT_ADDR_MUX_8_8))
#endif

/* BYTE ENABLE BIT configuration bit mask defines */
#define BIT_BE_ON                   0x0400 /* Configure ByteEnable port bit ON */
#define BIT_BE_OFF                  0x0000 /* Configure ByteEnable port bit OFF */
#define BIT_BE_MASK                 (~BIT_BE_ON)

/* RD and WR STROBE FUNCTION BIT configuration bit mask defines */
#define BIT_WR_ON                   0x0200 /* Configure WR, WR/ENB strobe = ON */
#define BIT_WR_OFF                  0x0000 /* Configure WR, WR/ENB strobe = OFF */

#define BIT_RD_ON                   0x0100 /* Configure RD, RD/WR strobe = ON */
#define BIT_RD_OFF                  0x0000 /* Configure RD, RD/WR strobe = OFF */

#define BIT_RD_WR_ON                0x0300 /* Configure RD, RD/WR strobe = ON; WR, WR/ENB strobe = ON */
#define BIT_RD_WR_OFF               0x0000 /* Configure RD, RD/WR strobe = OFF; WR, WR/ENB strobe = OFF */
#define BIT_RD_WR_MASK              (~BIT_RD_WR_ON)

/* CS FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_USE_CS2_CS1             0x0080/* Configure 10 = CS1 and CS2 are chip selects */

#if defined (pmp_v2_2) || defined (LIB_BUILD)
#define BIT_USE_CS2                 0x0040 /* Configure 01 = CS2 = chip select, CS1 = A14 */
#define BIT_USE_CS_OFF              0x0000 /* Configure 00 = CS2 = A15, CS1 = A14 */
#define BIT_CS_FUNC_MASK            (~(BIT_USE_CS2_CS1 | BIT_USE_CS2))
#endif

/* AL BIT configuration bit mask defines */
#define BIT_LATCH_HI                0x0020 /* Configure PMALL, PMALH = active high */
#define BIT_LATCH_LO                0x0000 /* Configure PMALL, PMALH = active low */
#define BIT_LATCH_MASK              (~BIT_LATCH_HI)

#if defined (pmp_v2_2) || defined (pmp_v2_1)  || defined (LIB_BUILD)
#define BIT_CS2_HI                  0x0010 /* Configure CS2 polarity = active high */
#define BIT_CS2_LO                  0x0000 /* Configure CS2 polarity = active low */
#define BIT_CS2_MASK               (~BIT_CS2_HI)
#endif

/* CS POLARITY SELECTION BITS configuration bit mask defines */
#define BIT_CS1_HI                  0x0008 /* Configure CS1 polarity = active high */
#define BIT_CS1_LO                  0x0000 /* Configure CS1 polarity = active low */
#define BIT_CS1_MASK                (~BIT_CS1_HI)

/* BE POLARITY BIT configuration bit mask defines */
#define BIT_BE_HI                   0x0004 /* Configure Byte enable polarity = active high */
#define BIT_BE_LO                   0x0000 /* Configure Byte enable polarity = active low */
#define BIT_BE_POLAR_MASK           (~BIT_BE_HI)

/* RD/RW/WR/ENB POLARITY BIT configuration bit mask defines */
#define BIT_WR_HI                   0x0002 /* Configure Write/ENB strobe polarity = active high */
#define BIT_WR_LO                   0x0000 /* Configure Write/ENB strobe polarity = active low */
#define BIT_WR_MASK                 (~BIT_WR_HI)

#define BIT_RD_HI                   0x0001 /* Configure Read/RW strobe polarity = active high */
#define BIT_RD_LO                   0x0000 /* Configure Read/RW strobe polarity = active low */
#define BIT_RD_MASK                 (~BIT_RD_HI)

#define BIT_RD_WR_HI                0x0003 /* Configure Write/ENB and Read/RW polarity = active high */
#define BIT_RD_WR_LO                0x0000 /* Configure Write/ENB and Read/RW polarity = active low */
#define BIT_RD_WR_POLAR_MASK        (~BIT_RD_WR_HI)

// #define BIT_ALL_POLAR_MASK          (~(BIT_LATCH_HI | BIT_CS1_HI | BIT_BE_HI | BIT_WR_HI | BIT_RD_HI))

/*****************************************************************************/
/* PMMODE Port Mode Register Configuration Bit Definitions */
/*****************************************************************************/
/* IRQM FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_IRQ_BUF                 0x6000 /* Configure Interrupt generated on R/W buffer 3 */
#define BIT_IRQ_RW                  0x2000 /* Configure Interrupt at end of R/W cycle */
#define BIT_IRQ_NONE                0x0000 /* Configure No interrupt generated */
#define BIT_IRQ_MASK                (~BIT_IRQ_BUF)

/* INCM FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_INC_ADDR_AUTO           0x1800 /* Configure 11 = SLAVE R/W buffers auto increment */
#define BIT_INC_ADDR_DEC            0x1000 /* Configure 10 = Addrs decrements on every R/W cycle */
#define BIT_INC_ADDR_INC            0x0800 /* Configure 01 = Addrs increments on every R/W cycle */
#define BIT_INC_ADDR_NONE           0x0000 /* Configure 00 = No addrs increment/decrement */
#define BIT_INC_MASK                (~BIT_INC_ADDR_AUTO)

/* MODE16 FUNCTION BITS configuration bit mask defines */
#define BIT_DATA_16                 0x0400 /* Configure 16-bit data mode */
#define BIT_DATA_8                  0x0000 /* Configure 8-bit data mode */
#define BIT_DATA_MASK               (~BIT_DATA_16)

/* MODE FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_MODE_MASTER_1           0x0300 /* Configure MASTER mode 1 */
#define BIT_MODE_MASTER_2           0x0200 /* Configure MASTER modw 2 */
#define BIT_MODE_SLAVE_ENH          0x0100 /* Configure SLAVE enhanced mode */
#define BIT_MODE_SLAVE              0x0000 /* Configure SLAVE mode */
#define BIT_MODE_MASK               (~BIT_MODE_MASTER_1)

/* WAITB FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_WAITB_4_TCY             0x00C0 /* Configure 4 Tcy WAIT */
#define BIT_WAITB_3_TCY             0x0080 /* Configure 3 Tcy WAIT */
#define BIT_WAITB_2_TCY             0x0040 /* Configure 2 Tcy WAIT */
#define BIT_WAITB_1_TCY             0x0000 /* Configure 1 Tcy WAIT */
#define BIT_WAITB_MASK              (~BIT_WAITB_4_TCY)

/* WAITM FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_WAITM_15_TCY            0x003C /* Configure 15 Tcy WAIT */
#define BIT_WAITM_14_TCY            0x0038 /* Configure 14 Tcy WAIT */
#define BIT_WAITM_13_TCY            0x0034 /* Configure 13 Tcy WAIT */
#define BIT_WAITM_12_TCY            0x0030 /* Configure 12 Tcy WAIT */
#define BIT_WAITM_11_TCY            0x002C /* Configure 11 Tcy WAIT */
#define BIT_WAITM_10_TCY            0x0028 /* Configure 10 Tcy WAIT */
#define BIT_WAITM_9_TCY             0x0024 /* Configure 9 Tcy WAIT */
#define BIT_WAITM_8_TCY             0x0020 /* Configure 8 Tcy WAIT */
#define BIT_WAITM_7_TCY             0x001C /* Configure 7 Tcy WAIT */
#define BIT_WAITM_6_TCY             0x0018 /* Configure 6 Tcy WAIT */
#define BIT_WAITM_5_TCY             0x0014 /* Configure 5 Tcy WAIT */
#define BIT_WAITM_4_TCY             0x0010 /* Configure 4 Tcy WAIT */
#define BIT_WAITM_3_TCY             0x000C /* Configure 3 Tcy WAIT */
#define BIT_WAITM_2_TCY             0x0008 /* Configure 2 Tcy WAIT */
#define BIT_WAITM_1_TCY             0x0004 /* Configure 1 Tcy WAIT */
#define BIT_WAITM_0_TCY             0x0000 /* Configure 0 Tcy WAIT */
#define BIT_WAITM_MASK              (~BIT_WAITM_15_TCY)

/* WAITE FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_WAITE_4_TCY             0x0003 /* Configure 4 Tcy WAIT */
#define BIT_WAITE_3_TCY             0x0002 /* Configure 3 Tcy WAIT */
#define BIT_WAITE_2_TCY             0x0001 /* Configure 2 Tcy WAIT */
#define BIT_WAITE_1_TCY             0x0000 /* Configure 1 Tcy WAIT */
#define BIT_WAITE_MASK              (~BIT_WAITE_4_TCY)

#define BIT_WAIT_ALL_MASK           (BIT_WAITB_MASK & BIT_WAITM_MASK & BIT_WAITE_MASK)

/*****************************************************************************/
/* PMADDR Parallel Port Address Register Configuration Bit Definitions */
/*****************************************************************************/

#if defined (pmp_v2_2) || defined (pmp_v2_1)  || defined (LIB_BUILD)
/* CS ENABLE BITS configuration bit mask defines */
#define BIT_CS2_ON                  0x8000 /* Configure CS1 enabled as chip select */
#define BIT_CS2_OFF                 0x0000 /* Configure CS1 disabled as chip select */
#define BIT_CS2_POL_MASK            (~BIT_CS2_ON)
//#define BIT_CS2_CS1_ON              0xC000 /* Configure CS2,CS1 enabled as chip select */
#endif

/* CS ENABLE BITS configuration bit mask defines */
#define BIT_CS1_ON                  0x4000 /* Configure CS1 enabled as chip select */
#define BIT_CS1_OFF                 0x0000 /* Configure CS1 disabled as chip select */
#define BIT_CS1_POL_MASK            (~BIT_CS1_ON)

#if defined (pmp_v2_2) || defined (pmp_v2_1) ||defined (LIB_BUILD)
#define BIT_A13                     0x2000/*Bit Position 13*/
#define BIT_A12                     0x1000/*Bit Position 12*/
#define BIT_A11                     0x0800/*Bit Position 11*/
#endif


#if defined (pmp_v1_2) ||defined (pmp_v2_2) || defined (pmp_v2_1)  || defined (LIB_BUILD)
#define BIT_A10                     0x0400/*Bit Position 10*/
#define BIT_A9                      0x0200/*Bit Position 9*/
#define BIT_A8                      0x0100/*Bit Position 8*/
#define BIT_A7                      0x0080/*Bit Position 7*/
#define BIT_A6                      0x0040/*Bit Position 6*/
#define BIT_A5                      0x0020/*Bit Position 5*/
#define BIT_A4                      0x0010/*Bit Position 4*/
#define BIT_A3                      0x0008/*Bit Position 3*/
#define BIT_A2                      0x0004/*Bit Position 2*/
#define BIT_A1                      0x0002/*Bit Position 1*/
#define BIT_A0                      0x0000/*Bit Position 0*/
#endif 
/*****************************************************************************/
/* PMAEN Parallel Port Enable Register Configuration Bit Definitions */
/*****************************************************************************/

#if defined (pmp_v2_2) || defined (pmp_v2_1) ||defined (LIB_BUILD)
/* PTEN ENABLE SELECTION BITS configuration bit mask defines */
#define BIT_P_ALL                   0xFFFF /* Configure All PMA and PMCS as address*/ 
#define BIT_P_NONE                  0x0000 /* Configure ALL PTEN and PMCS as I0 */
#define BIT_P15                     0x8000/* Configure PTEN15 as address*/
#define BIT_P13                     0x2000/* Configure PTEN13 as address*/
#define BIT_P12                     0x1000/* Configure PTEN12 as address*/
#define BIT_P11                     0x0800/* Configure PTEN11 as address*/
#endif



#if defined (pmp_v1_2) ||defined (pmp_v2_2) || defined (pmp_v2_1) ||defined (LIB_BUILD) 
#define BIT_P10                     0x0400 /* Configure PTEN10 as address*/
#define BIT_P9                      0x0200 /* Configure PTEN9 as address*/
#define BIT_P8                      0x0100 /* Configure PTEN8 as address*/
#define BIT_P7                      0x0080 /* Configure PTEN7 as address*/
#define BIT_P6                      0x0040 /* Configure PTEN6 as address*/
#define BIT_P5                      0x0020 /* Configure PTEN5 as address*/
#define BIT_P4                      0x0010 /* Configure PTEN4 as address*/
#define BIT_P3                      0x0008 /* Configure PTEN3 as address*/
#define BIT_P2                      0x0004 /* Configure PTEN2 as address*/
#endif

#define BIT_P14                     0x4000 /* Configure PTEN14 as address*/
#define BIT_P1                      0x0002 /* Configure PTEN1 as address*/
#define BIT_P0                      0x0001 /* Configure PTEN0 as address*/
/*****************************************************************************/
/* IEC2 Parallel Port Interrupt Enable Register Configuration Bit Definitions */
/*****************************************************************************/
/* INTERRUPT ENABLE SELECTION BITS configuration bit mask defines */ 
#define BIT_INT_ON                  0x2000/* Configure PMPIE enabled */  
#define BIT_INT_OFF                 0x0000/* Configure PMPIE disabled */
#define BIT_INT_MASK                (~BIT_INT_ON)

/*****************************************************************************/
/* IPC11 Parallel Port Interrupt Priority Register Configuration Bit Definitions */
/*****************************************************************************/
/* INTERRUPT PRIORITY SELECTION BITS configuration bit mask defines */
#define BIT_INT_PRI_7               0x0070 /* Configure PMPIP = 7 */
#define BIT_INT_PRI_6               0x0060 /* Configure PMPIP = 6 */
#define BIT_INT_PRI_5               0x0050 /* Configure PMPIP = 5 */
#define BIT_INT_PRI_4               0x0040 /* Configure PMPIP = 4 */
#define BIT_INT_PRI_3               0x0030 /* Configure PMPIP = 3 */
#define BIT_INT_PRI_2               0x0020 /* Configure PMPIP = 2 */
#define BIT_INT_PRI_1               0x0010 /* Configure PMPIP = 1 */
#define BIT_INT_PRI_0               0x0000 /* Configure PMPIP = disabled */
#define BIT_INT_PRI_MASK            (~BIT_INT_PRI_7)

/*================= OPERATIONAL BIT MASK SECTION =============================
 * After the PMP module has been properly configured, you may wish to use the
 * operational bit masks provided below to modify the PMCON bits during runtime.
 * Note to set a bit, bitwise "|" the mask with the contents of the register
 * Example - enable the PMP module:
 * 
 * PMCON |= BIT_PMP_ON; or PMCON = PMCON | BIT_PMP_ON;
 *
 * To clear a bit, bitwise "AND" the ~mask with the current contens of the reg.
 * Example - disable PMP interrupt:
 *
 * PMPIE &= BIT_INT_OFF
 */

/* PMPEN BIT defines */
#define PMP_PORT_ON                     1 /*PMP Port On*/
#define PMP_PORT_OFF                    ~PMP_PORT_ON /*PMP Port Off*/

/* STOP DURING IDLE BIT logic defines */
#define PMP_STOP_IN_IDLE_ON             1 /*PMP stop on during Idle mode*/
#define PMP_STOP_IN_IDLE_OFF            ~PMP_SIDL_ON /*PMP stop off during Idle mode*/


#if defined (pmp_v1_2) ||defined (pmp_v2_2) || defined (pmp_v2_1)  || defined (LIB_BUILD)
#define PMP_ADDR_MUX_16_8               2 /*PMP Address 16bit multiplexer*/
#define PMP_ADDR_MUX_8_8                1 /*PMP Address 8bit multiplexer*/
#define PMP_ADDR_MUX_NONE               0 /*PMP no address multiplex*/
#define PMP_ADDR_MUX_MASK               (~PMP_ADDR_MUX_16_8)
#endif  

#define PMP_BIT_ON                      1 /*PMP bit enabled*/
#define PMP_BIT_OFF                     ~PMP_BIT_ON /*PMP bit disabled*/

/* BYTE ENABLE BIT logic defines */
#define PMP_BE_ON                       1 /*PMP byte enabled*/
#define PMP_BE_OFF                      ~PMP_BE_ON /*PMP byte disabled*/

/* WR OR ENABLE STROBE BIT logic defines */
#define PMP_WR_ON                       1 /*PMP Strobe bit enabled*/
#define PMP_WR_OFF                      ~PMP_WR_ON /*PMP Strobe bit disabled*/

/* RD OR RW STROBE BIT logic defines */
#define PMP_RD_ON                       1/*PMP Read Write Strobe bit enabled*/
#define PMP_RD_OFF                      ~PMP_RD_ON/*PMP Read Write Strobe bit disabled*/

/* CS FUNCTION SELCTION BITS logic defines */
#define PMP_USE_CS1                     1 /*PMP Use CS1*/
#if defined (pmp_v2_2) || defined (LIB_BUILD)
#define PMP_USE_PMA15_14                0 /*PMP Uses not uses CS*/
#define PMP_USE_CS2_CS1                 2 /*PMP Uses both CS2 and CS1*/
#define PMP_USE_MASK                    (~PMP_USE_CS2_CS1)  
#endif

/* POLARITY BIT(s) logic defines */
#define PMP_ACTIVE_HI                   1 /*PMP Polarity is HIGH*/
#define PMP_ACTIVE_LO                   ~PMP_ACTIVE_HI /*PMP Polarity is Low*/

/* IRQ BITS logic defines */
#define PMP_IRQ_ON_BUFFER_FULL          3 /*PMP Interrupt request when buffer is full*/
/* note: value 2 is reserved */
#define PMP_IRQ_ON_RW                   1 /*PMP Interrupt request when read write ocuurs*/
#define PMP_IRQ_DISABLE                 0 /*PMP Interrupt request is disabled*/
#define PMP_IRQ_MASK                   (~PMP_IRQ_ON_BUFFER_FULL)

/* INC BITS logic defines */
#define PMP_ADDR_BUFFER                 3 /*PMP address buffer*/
#define PMP_ADDR_DEC                    2 /*PMP address decrement*/
#define PMP_ADDR_INC                    1 /*PMP address increment*/
#define PMP_ADDR_INC_OFF                0 /*PMP address increment off*/
#define PMP_ADDR_MASK                   (~PMP_ADDR_BUFFER)

/* MODE16 BIT logic defines */
#define PMP_DATA_16                     1 /*PMP mode is 16 bit*/
#define PMP_DATA_8                      ~PMP_DATA_16/*PMP mode is 8 bit*/

/* PORT MODE BIT logic defines */
#define PMP_MASTER_1                    3 /*PMP Master 1*/
#define PMP_MASTER_2                    2 /*PMP Master 2*/
#define PMP_SLAVE_ENH                   1 /*PMP Slave Enhanced*/
#define PMP_SLAVE                       0 /*PMP slave*/
#define PMP_MODE_MASK                   (~PMP_KASTER_1)

/* BEGINNING WAIT BIT logic defines */
#define PMP_WAITB_4_TCY                 3 /*PMP Waits till 4Tcy at beginning*/
#define PMP_WAITB_3_TCY                 2 /*PMP Waits till 3Tcy at beginning*/
#define PMP_WAITB_2_TCY                 1 /*PMP Waits till 2Tcy at beginning*/
#define PMP_WAITB_1_TCY                 0 /*PMP Waits till 1Tcy at beginning*/
#define PMP_WAITB_TCY_MASK              (~PMP_WAITB_4_TCY)

/* MIDDLE WAIT BIT logic defines */
#define PMP_WAITM_15_TCY                15 /*PMP Waits till 15Tcy in middle*/
#define PMP_WAITM_14_TCY                14 /*PMP Waits till 14Tcy in middle*/
#define PMP_WAITM_13_TCY                13 /*PMP Waits till 13Tcy in middle*/
#define PMP_WAITM_12_TCY                12 /*PMP Waits till 12Tcy in middle*/
#define PMP_WAITM_11_TCY                11 /*PMP Waits till 11Tcy in middle*/
#define PMP_WAITM_10_TCY                10 /*PMP Waits till 10Tcy in middle*/
#define PMP_WAITM_9_TCY                 9 /*PMP Waits till 9Tcy in middle*/
#define PMP_WAITM_8_TCY                 8 /*PMP Waits till 8Tcy in middle*/
#define PMP_WAITM_7_TCY                 7 /*PMP Waits till 7Tcy in middle*/
#define PMP_WAITM_6_TCY                 6 /*PMP Waits till 6Tcy in middle*/
#define PMP_WAITM_5_TCY                 5 /*PMP Waits till 5Tcy in middle*/
#define PMP_WAITM_4_TCY                 4 /*PMP Waits till 4Tcy in middle*/
#define PMP_WAITM_3_TCY                 3 /*PMP Waits till 3Tcy in middle*/
#define PMP_WAITM_2_TCY                 2 /*PMP Waits till 2Tcy in middle*/
#define PMP_WAITM_1_TCY                 1 /*PMP Waits till 1Tcy in middle*/
#define PMP_WAITM_0_TCY                 0 /*PMP does not wait*/
#define PMP_WAITM_TCY_MASK              (~PMP_WAITM_15_TCY)

/* END WAIT BIT logic defines */
#define PMP_WAITE_4_TCY                 3 /*PMP Waits till 4Tcy at the end*/
#define PMP_WAITE_3_TCY                 2 /*PMP Waits till 3Tcy at the end*/
#define PMP_WAITE_2_TCY                 1 /*PMP Waits till 2Tcy at the end*/
#define PMP_WAITE_1_TCY                 0 /*PMP Waits till 1Tcy at the end*/
#define PMP_WAITE_TCY_MASK              (~PMP_WAITE_4_TCY)

/* CS2/PMA15, CS1/PMA14 logic defines */
#define PMP_CS_ON                       1 /*PMP Chip select is enabled*/
#define PMP_CS_OFF                      (~PMP_CS_ON) /*PMP Chip select is disabled*/

#define PMP_PIN_ON                      1 /*PMP single bit enabled*/
#define PMP_PIN_OFF                     (~PMP_PIN_ON) /*PMP single bit disabled*/

#if defined (pmp_v2_2) || defined (pmp_v2_1)  || defined (pmp_v3)
/* PTEN BIT(s) logic defines */
#define PMP_PIN_ALL_ON                  255 /*PMP all bits are enabled*/
#define PMP_PIN_ALL_OFF                 (~PMP_PIN_ALL_ON) /*PMP all bits are disabled*/
#endif

/*****************************************************************************/
/* INTERRUPT definitions */
/*****************************************************************************/
#define PMP_INT_ON                      1 /*PMP interrupt enabled*/
#define PMP_INT_OFF                     (~PMP_INT_ON) /*PMP interrupt disabled*/

/*****************************************************************************/
/* INTERRUPT PRIORITY BIT(s) logic defines */
/*****************************************************************************/
#define PMP_INT_PRIOR_7                 7 /*PMP interrupt priority level is 7*/
#define PMP_INT_PRIOR_6                 6 /*PMP interrupt priority level is 6*/
#define PMP_INT_PRIOR_5                 5 /*PMP interrupt priority level is 5*/
#define PMP_INT_PRIOR_4                 4 /*PMP interrupt priority level is 4*/
#define PMP_INT_PRIOR_3                 3 /*PMP interrupt priority level is 3*/
#define PMP_INT_PRIOR_2                 2 /*PMP interrupt priority level is 2*/
#define PMP_INT_PRIOR_1                 1 /*PMP interrupt priority level is 1*/
#define PMP_INT_PRIOR_OFF               0 /*PMP interrupt priority level is off*/
#define PMP_INT_PRIOR_MASK              (~PMP_INT_PRIOR_7)


/******************************************************************************/
/* MACRO DEFINITIONS */
/*****************************************************************************/
/******************************************************************************
 * Macro:           mPMPIsBufferFull
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
#define mPMPIsBufferFull    PMSTATbits.IBF

/******************************************************************************
 * Macro:           mPMPIsBufferOverflow
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
#define mPMPIsBufferOverflow  PMSTATbits.IBOV 

 /******************************************************************************
 * Macro:           mPMPClearBufferOverflow
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
#define mPMPClearBufferOverflow PMSTATbits.IBOV = 0

/******************************************************************************
 * Macro:           mPMPClearBufferUnderflow
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
#define mPMPClearBufferUnderflow  PMSTATbits.OBUF = 0

/******************************************************************************
 * Macro:           mPMPIsBufferEmpty
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
#define mPMPIsBufferEmpty PMSTATbits.OBE

/******************************************************************************
 * Macro:           mPMPIsBufferUnderFlow
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
#define mPMPIsBufferUnderflow PMSTATbits.OBUF 

/******************************************************************************
 * Macro:           mPMPSetAddrIncMode(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP address inc/dec mode
 *
 * Input:           mode - 0= no inc/dec, 1= inc, 2= dec, 3= PSP buffered
 *
 * Output:          None
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetAddrIncMode(mode)    PMMODEbits.INCM = mode

/******************************************************************************
 * Macro:           mPMPSetAddrMux(mux)
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
#define mPMPSetAddrMux(mux)     PMCONbits.ADRMUX = mux

/******************************************************************************
 * Macro:           mPMPSetByteEnableEPolarity(polarity)
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
#define mPMPSetByteEnablePolarity(polarity) PMCONbits.BEP = polarity

/******************************************************************************
 * Macro:           mPMPSetByteEnable(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP byte enable bit
 *
 * Input:           mode - 0=DISABLED, 1=ENABLED
 *
 * Output:          None
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetByteEnable(mode) PMCONbits.PTBEEN =  mode

/******************************************************************************
 * Macro:           mPMPSetChipSelectMode(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP CS function as a chip select or address line
 *
 * Input:           mode - 0= CS2 as A15,CS1 as A14; 1= CS2 as CS2, CS1 as A14;
 *                  2= CS2 as CS2, CS1 as CS1; 3= reserved
 *
 * Output:          None 
 *                  
 * Note:            
 *****************************************************************************/ 
#define mPMPSetChipSelectMode(mode) PMCONbits.CSF = mode

/******************************************************************************
 * Macro:           mPMPSetChipSelect1Enable(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP chip select 1 pin functionality
 *
 * Input:           mode - 0=DISABLED, 1=ENABLED
 *
 * Output:          None
 *                  
 * Note:            
 *****************************************************************************/
 #define mPMPSetChipSelect1Enable(mode) PMADDRbits.CS1 = mode
 
/******************************************************************************
 * Macro:           mPMPSetChipSelect1Polarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP chip select pin polarities
 *
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPMPSetChipSelect1Polarity(polarity) PMCONbits.CS1P = polarity


 #if  defined (pmp_v2_2) || defined (pmp_v2_1) || defined (LIB_BUILD)
 
/******************************************************************************
 * Macro:           mPMPSetChipSelect2Enable(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP chip select 2 pin
 *
 * Input:           mode - 0=DISABLED, 1=ENABLED
 *
 * Output:          None 
 *                  
 * Note:            
 *****************************************************************************/
 #define mPMPSetChipSelect2Enable(mode) PMADDRbits.CS2 = mode

/******************************************************************************
 * Macro:           mPMPSetChipSelect2Polarity(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP chip select pin polarities
 *                  
 * Input:           polarity - 0= active lo, 1= active hi
 *
 * Output:          None
 * 
 * Note:            
 *****************************************************************************/
#define mPMPSetChipSelect2Polarity(polarity) PMCONbits.CS2P = polarity

#endif

/******************************************************************************
 * Macro:           mPMPSetDataMode(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP data width to 8 or 16 bit
 *                      
 * Input:           mode - 0=8-bit, 1=16-bit
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPMPSetDataMode(mode)   PMMODEbits.MODE16 = mode

/******************************************************************************
 * Macro:           mPMPSetInterruptEnable(mode)
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
#define mPMPSetInterruptEnable(mode) IEC2bits.PMPIE = mode

/******************************************************************************
 * Macro:           mPMPSetInterruptPriority(polarity)
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
#define mPMPSetInterruptPriority(priority) IPC11bits.PMPIP = priority

/*******************************************************************
Macro       : mPMP_Clear_Intr_Status_Bit

Include     : pmp.h 

Description : Macro to Clear PMP Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define mPMP_Clear_Intr_Status_Bit     (IFS2bits.PMPIF = 0)

 /******************************************************************************
 * Macro:           mPMPSetIdle(mode)
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
#define mPMPSetIdle(mode) PMCONbits.PSIDL = mode

/******************************************************************************
 * Macro:           mPMPSetInterruptMode(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        selects PMP interrupt mode
 *                  
 * Input:           mode - 0=no INT, 1=INT on R/W, 2=INT on buffer full, 3= reserved
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPMPSetInterruptMode(mode)  PMMODEbits.IRQM = mode

/******************************************************************************
 * Macro:           mPMPSetAddrLatchPolarity(polarity)
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
#define mPMPSetAddrLatchPolarity(polarity)  PMCONbits.ALP = polarity

/******************************************************************************
 * Macro:          mPMPSetPortEnable(mode)
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
#define mPMPSetPortEnable(mode) PMCONbits.PMPEN = mode

/******************************************************************************
 * Macro:           mPMPSetPortMode(mode)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP mode of operation as a slave or master
 *                  
 * Input:           mode - 0= PSP legacy, 1= PSP enhanced, 2= Master2, 3= Master1
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPMPSetPortMode(mode) PMMODEbits.MODE1 = mode

/******************************************************************************
 * Macro:           mPMPSetPortPins(Value)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP addrs, latch and CS pins as either functional or I/O
 *                  
 * Input:           value - 0-FFFFh
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPMPSetPortPins(value)  PMAEN = value

/******************************************************************************
 * Macro:           mPMPSetReadStrobeEnable(mode)
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
 #define mPMPSetReadStrobeEnable(mode) PMCONbits.PTRDEN = mode;
 
/******************************************************************************
 * Macro:           mPMPSetReadStrobePolarity(polarity)
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
#define mPMPSetReadStrobePolarity(polarity) PMCONbits.RDSP = polarity

/******************************************************************************
 * Macro:           mPMPSetWaitBegin(wait)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP beginning phase wait time
 *                  
 * Input:           wait - 0..3 cycles
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPMPSetWaitBegin(wait)  PMMODEbits.WAITB = wait

/******************************************************************************
 * Macro:           mPMPSetWaitMiddle(wait)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP middle phase wait time
 *                  
 * Input:           wait - 0..15 cycles
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPMPSetWaitMiddle(wait) PMMODEbits.WAITM = wait

/******************************************************************************
 * Macro:           mPMPSetWaitEnd(wait)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP end phase wait time
 *                  
 * Input:           wait - 0..3 cycles
 *
 * Output:          None
 * 
 * Note:            
 *****************************************************************************/
#define mPMPSetWaitEnd(wait)    PMMODEbits.WAITE = wait

/******************************************************************************
 * Macro:           mPMPSetWriteStrobeEnable(mode)
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
 #define mPMPSetWriteStrobeEnable(mode) PMCONbits.PTWREN = mode;
 
/******************************************************************************
 * Macro:           mPMPSetWriteStrobePolarity(polarity)
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
#define mPMPSetWriteStrobePolarity(polarity)    PMCONbits.WRSP = polarity

/******************************************************************************/
/* FUNCTION PROTOTYPES */
/*****************************************************************************/
extern void __attribute__ ((section (".libperi")))PMPClose(void) ;

extern BOOL __attribute__ ((section (".libperi")))PMPIsBufferNEmpty(BUFFER buf) ;

extern BOOL __attribute__ ((section (".libperi")))PMPIsBufferNFull(BUFFER buf) ;

extern void __attribute__ ((section (".libperi")))PMPOpen(unsigned int control, unsigned int mode, unsigned int port, unsigned int addrs, BYTE interrupt) ;

extern WORD __attribute__ ((section (".libperi")))PMPMasterRead(void) ;

extern void __attribute__ ((section (".libperi")))PMPMasterWrite(WORD value) ;

extern void __attribute__ ((section (".libperi")))PMPSetAddress(WORD addrs) ;

extern void __attribute__ ((section (".libperi")))PMPSlaveReadBuffers(BYTE* ref) ;

extern BYTE __attribute__ ((section (".libperi")))PMPSlaveReadBufferN(BUFFER buf) ;

extern BOOL __attribute__ ((section (".libperi")))PMPSlaveWriteBuffers(BYTE* ref) ;

extern BOOL __attribute__ ((section (".libperi")))PMPSlaveWriteBufferN(BUFFER buf, BYTE value) ;

#endif 

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif


