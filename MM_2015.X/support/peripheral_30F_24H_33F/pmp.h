/******************************************************************************
 *
 *                  PMP PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************

 * FileName:        pmp.h
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

#ifndef PMP_H
#define PMP_H



/*****************************************************************************/
/* ENUMERATIONS */
/*****************************************************************************/
typedef enum 
{
    buffer0,
    buffer1,
    buffer2,
    buffer3
}BUFFER ;




/******************************************************************************
 * HOW TO Use the dsPIC33FPMPLib Bit Masks
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
#define BIT_PMP_ON                  0x8000          /* Configure PMP enabled */
#define BIT_PMP_OFF                 0x0000   /* Configure PMP disabled */
#define BIT_PMP_MASK                (~BIT_PMP_ON)

/* STOP DURING IDLE BIT configuration bit mask defines */
#define BIT_SIDL_ON                 0x2000      /* Configure Stop in IDLE mode ON */
#define BIT_SIDL_OFF                0x0000      /* Configure Stop in IDLE mode OFF */
#define BIT_SIDL_MASK               (~BIT_SIDL_EN)

/* ADDRESS MULTIPLEXING BITS configuration bit mask defines */
/* note: the value 0x1800 is reserved */
#define BIT_ADDR_MUX_16_8           0x1000      /* Configure 10 = All 16-bits addrs muxed on 8-bit data */
#define BIT_ADDR_MUX_8_8            0x0800      /* Configure 01 = Lower 8-bits addrs muxed on 8-bit data */
#define BIT_ADDR_MUX_NONE           0x0000      /* Configure 00 = Addrs and data on separate pins */
#define BIT_ADDR_MUX_MASK           (~(BIT_ADDR_MUX_16 | BIT_ADDR_MUX_8))

/* BYTE ENABLE BIT configuration bit mask defines */
#define BIT_BE_ON                   0x0400      /* Configure ByteEnable port bit ON */
#define BIT_BE_OFF                  0x0000      /* Configure ByteEnable port bit OFF */
#define BIT_BE_MASK                 (~BIT_BE_EN)

/* RD and WR STROBE FUNCTION BIT configuration bit mask defines */
#define BIT_RD_ON                   0x0100      /* Configure RD, RD/WR strobe = ON */
#define BIT_WR_ON                   0x0200      /* Configure WR, WR/ENB strobe = ON */
#define BIT_RD_WR_ON                0x0300      /* Configure RD, RD/WR strobe = ON; WR, WR/ENB strobe = ON */
#define BIT_RD_WR_OFF               0x0000      /* Configure RD, RD/WR strobe = OFF; WR, WR/ENB strobe = OFF */
#define BIT_RD_MASK                 (~BIT_RD_WR_EN)

/* CS FUNCTION SELECTION BITS configuration bit mask defines */
#if defined(_PPI_PMP_V2 )
#define BIT_USE_CS1_CS2             0x0080      /* Configure 10 = CS1 and CS2 are chip selects */
#define BIT_USE_CS2		            0x0040      /* Configure 01 = CS2 as chip selects and CS1 as A14 */
#define BIT_USE_CS_OFF              0x0000      /* Configure 00 =  CS1 = A14 and CS2 = A15 */
#define BIT_CS_FUNC_MASK            (~BIT_USE_CS1_CS2)
#else
#define BIT_USE_CS1                 0x0080      /* Configure 10 = CS1 is chip select */
#define BIT_USE_CS_OFF              0x0000      /* Configure 00 =  CS1 = A14 */
#define BIT_CS_FUNC_MASK            (~BIT_USE_CS1)
#endif

/* AL BIT configuration bit mask defines */
#define BIT_LATCH_HI                0x0020      /* Configure PMALL, PMALH = active high */
#define BIT_LATCH_LO                0x0000      /* Configure PMALL, PMALH = active low */
#define BIT_LATCH_MASK              (~BIT_LATCH_HI)

/* CS POLARITY SELECTION BITS configuration bit mask defines */
#define BIT_CS1_HI                  0x0008      /* Configure CS1 polarity = active high */
#define BIT_CS1_LO                  0x0000      /* Configure CS1 polarity = active low */
#define BIT_CS1_POLAR_MASK          (~BIT_CS1_HI)

#if defined(_PPI_PMP_V2 )
/* CS POLARITY SELECTION BITS configuration bit mask defines */
#define BIT_CS2_HI                  0x0010      /* Configure CS2 polarity = active high */
#define BIT_CS2_LO                  0x0000      /* Configure CS2 polarity = active low */
#define BIT_CS2_POLAR_MASK          (~BIT_CS2_HI)
#endif

/* BE POLARITY BIT configuration bit mask defines */
#define BIT_BE_HI                   0x0004      /* Configure Byte enable polarity = active high */
#define BIT_BE_LO                   0x0000      /* Configure Byte enable polarity = active low */
#define BIT_BE_POLAR_MASK           (~BIT_BE_HI)

/* RD/RW/WR/ENB POLARITY BIT configuration bit mask defines */
#define BIT_WR_HI                   0x0002      /* Configure Write/ENB strobe polarity = active high */
#define BIT_WR_LO                   0x0000      /* Configure Write/ENB strobe polarity = active low */
#define BIT_RD_HI                   0x0001      /* Configure Read/RW strobe polarity = active high */
#define BIT_RD_LO                   0x0000      /* Configure Read/RW strobe polarity = active low */
#define BIT_RD_WR_HI                0x0003      /* Configure Write/ENB and Read/RW polarity = active high */
#define BIT_RD_WR_LO                0x0000      /* Configure Write/ENB and Read/RW polarity = active low */
#define BIT_WR_POLAR_MASK           (~BIT_WR_HI)
#define BIT_RD_POLAR_MASK           (~BIT_RD_HI)

#define BIT_ALL_POLAR_MASK          (~(BIT_LATCH_HI |BIT_USE_CS1 | BIT_BE_HI | BIT_WR_HI | BIT_RD_HI))

/*****************************************************************************/
/* PMMODE Port Mode Register Configuration Bit Definitions */
/*****************************************************************************/
/* IRQM FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_IRQ_BUF                 0x6000      /* Configure Interrupt generated on R/W buffer 3 */
#define BIT_IRQ_RW                  0x2000      /* Configure Interrupt at end of R/W cycle */
#define BIT_IRQ_NONE                0x0000      /* Configure No interrupt generated */
#define BIT_IRQ_MASK                (~(BIT_IRQ_BUFF | BIT_IRQ_RW))

/* INCM FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_INC_ADDR_AUTO           0x1800      /* Configure 11 = SLAVE R/W buffers auto increment */
#define BIT_INC_ADDR_DEC            0x1000      /* Configure 10 = Addrs decrements on every R/W cycle */
#define BIT_INC_ADDR_INC            0x0800      /* Configure 01 = Addrs increments on every R/W cycle */
#define BIT_INC_ADDR_NONE           0x0000      /* Configure 00 = No addrs increment/decrement */
#define BIT_INC_MASK                (~BIT_INC_ADDR_AUTO)

/* MODE16 FUNCTION BITS configuration bit mask defines */
#define BIT_DATA_16                 0x0400      /* Configure 16-bit data mode */
#define BIT_DATA_8                  0x0000      /* Configure 8-bit data mode */
#define BIT_DATA_MASK               (~BIT_DATA_16)

/* MODE FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_MODE_MASTER_1           0x0300      /* Configure MASTER mode 1 */
#define BIT_MODE_MASTER_2           0x0200      /* Configure MASTER modw 2 */
#define BIT_MODE_SLAVE_ENH          0x0100      /* Configure SLAVE enhanced mode */
#define BIT_MODE_SLAVE              0x0000      /* Configure SLAVE mode */
#define BIT_MODE_MASK               (~BIT_MODE_MASTER_1)

/* WAITB FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_WAITB_4_TCY             0x00C0      /* Configure 4 Tcy WAIT */
#define BIT_WAITB_3_TCY             0x0080      /* Configure 3 Tcy WAIT */
#define BIT_WAITB_2_TCY             0x0040      /* Configure 2 Tcy WAIT */
#define BIT_WAITB_1_TCY             0x0000      /* Configure 1 Tcy WAIT */
#define BIT_WAITB_MASK              (~BIT_WAITB_4_TCY)

/* WAITM FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_WAITM_15_TCY            0x003C      /* Configure 3 Tcy WAIT */
#define BIT_WAITM_14_TCY            0x0038      /* Configure 2 Tcy WAIT */
#define BIT_WAITM_13_TCY            0x0034      /* Configure 1 Tcy WAIT */
#define BIT_WAITM_12_TCY            0x0030      /* Configure 4 Tcy WAIT */
#define BIT_WAITM_11_TCY            0x002C      /* Configure 3 Tcy WAIT */
#define BIT_WAITM_10_TCY            0x0028      /* Configure 2 Tcy WAIT */
#define BIT_WAITM_9_TCY             0x0024      /* Configure 1 Tcy WAIT */
#define BIT_WAITM_8_TCY             0x0020      /* Configure 4 Tcy WAIT */
#define BIT_WAITM_7_TCY             0x001C      /* Configure 3 Tcy WAIT */
#define BIT_WAITM_6_TCY             0x0018      /* Configure 2 Tcy WAIT */
#define BIT_WAITM_5_TCY             0x0014      /* Configure 1 Tcy WAIT */
#define BIT_WAITM_4_TCY             0x0010      /* Configure 4 Tcy WAIT */
#define BIT_WAITM_3_TCY             0x000C      /* Configure 3 Tcy WAIT */
#define BIT_WAITM_2_TCY             0x0008      /* Configure 3 Tcy WAIT */
#define BIT_WAITM_1_TCY             0x0004      /* Configure 2 Tcy WAIT */
#define BIT_WAITM_0_TCY             0x0000      /* Configure 1 Tcy WAIT */
#define BIT_WAITM_MASK              (~BIT_WAITM_15_TCY)

/* WAITE FUNCTION SELECTION BITS configuration bit mask defines */
#define BIT_WAITE_4_TCY             0x0003      /* Configure 4 Tcy WAIT */
#define BIT_WAITE_3_TCY             0x0002      /* Configure 3 Tcy WAIT */
#define BIT_WAITE_2_TCY             0x0001      /* Configure 2 Tcy WAIT */
#define BIT_WAITE_1_TCY             0x0000      /* Configure 1 Tcy WAIT */
#define BIT_WAITE_MASK              (~BIT_WAITE_4_TCY)

#define BIT_WAIT_ALL_MASK           (BIT_WAITB_MASK & BIT_WAITM_MASK & BIT_WAITE_MASK)

/*****************************************************************************/
/* PMADDR Parallel Port Address Register Configuration Bit Definitions */
/*****************************************************************************/
/* CS ENABLE BITS configuration bit mask defines */
#define BIT_CS1_ON                  0x4000      /* Configure CS1 enabled as chip select */
#define BIT_CS1_MASK                ~BIT_CS1_ON
#if defined(_PPI_PMP_V2)
#define BIT_CS2_ON                  0x8000      /* Configure CS2 enabled as chip select */
#define BIT_CS2_MASK                ~BIT_CS2_ON
#endif
#define BIT_A15                     0x8000
#define BIT_A14                     0x4000
#define BIT_A13                     0x2000
#define BIT_A12                     0x1000
#define BIT_A11                     0x0800
#define BIT_A10                     0x0400
#define BIT_A9                      0x0200
#define BIT_A8                      0x0100
#define BIT_A7                      0x0080
#define BIT_A6                      0x0040
#define BIT_A5                      0x0020
#define BIT_A4                      0x0010
#define BIT_A3                      0x0008
#define BIT_A2                      0x0004
#define BIT_A1                      0x0002
#define BIT_A0                      0x0000

/*****************************************************************************/
/* PMAEN Parallel Port Enable Register Configuration Bit Definitions */
/*****************************************************************************/
/* PTEN ENABLE SELECTION BITS configuration bit mask defines */
#define BIT_P_ALL                   0xFFFF      /* Configure All PMA and PMCS as address*/
#if defined(_PPI_PMP_V2)
#define BIT_P_NONE                  0xFFFF      /* Configure ALL PTEN and PMCS as I0 */
#else
#define BIT_P_NONE                  0x47FF      /* Configure ALL PTEN and PMCS as I0 */
#endif
#if defined(_PPI_PMP_V2)
#define BIT_P15                     0x8000      /* Configure PTEN13 as address*/
#endif
#define BIT_P14                     0x4000      /* Configure PTEN14 as address*/
#if defined(_PPI_PMP_V2)
#define BIT_P13                     0x0200      /* Configure PTEN13 as address*/
#define BIT_P12                     0x0100      /* Configure PTEN12 as address*/
#define BIT_P11                     0x0800      /* Configure PTEN11 as address*/
#endif
#define BIT_P10                     0x0400      /* Configure PTEN10 as address*/
#define BIT_P9                      0x0200      /* Configure PTEN9 as address*/
#define BIT_P8                      0x0100      /* Configure PTEN8 as address*/
#define BIT_P7                      0x0080      /* Configure PTEN7 as address*/
#define BIT_P6                      0x0040      /* Configure PTEN6 as address*/
#define BIT_P5                      0x0020      /* Configure PTEN5 as address*/
#define BIT_P4                      0x0010      /* Configure PTEN4 as address*/
#define BIT_P3                      0x0008      /* Configure PTEN3 as address*/
#define BIT_P2                      0x0004      /* Configure PTEN2 as address*/
#define BIT_P1                      0x0002      /* Configure PTEN1 as address*/
#define BIT_P0                      0x0001      /* Configure PTEN0 as address*/

/*****************************************************************************/
/* IEC2 Parallel Port Interrupt Enable Register Configuration Bit Definitions */
/*****************************************************************************/
/* INTERRUPT ENABLE SELECTION BITS configuration bit mask defines */
#define BIT_INT_ON                  0x2000      /* Configure PMPIE enabled */
#define BIT_INT_OFF                 0x0000     /* Configure PMPIE disabled */
#define BIT_INT_MASK                (~BIT_INT_ON)

/*****************************************************************************/
/* IPC11 Parallel Port Interrupt Priority Register Configuration Bit Definitions */
/*****************************************************************************/
/* INTERRUPT PRIORITY SELECTION BITS configuration bit mask defines */
#define BIT_INT_PRI_7               0x0070      /* Configure PMPIP = 7 */
#define BIT_INT_PRI_6               0x0060      /* Configure PMPIP = 6 */
#define BIT_INT_PRI_5               0x0050      /* Configure PMPIP = 5 */
#define BIT_INT_PRI_4               0x0040      /* Configure PMPIP = 4 */
#define BIT_INT_PRI_3               0x0030      /* Configure PMPIP = 3 */
#define BIT_INT_PRI_2               0x0020      /* Configure PMPIP = 2 */
#define BIT_INT_PRI_1               0x0010      /* Configure PMPIP = 1 */
#define BIT_INT_PRI_0               0x0000      /* Configure PMPIP = disabled */
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

/*****************************************************************************/
/* PMCON register definitions */
/*****************************************************************************/
/* PMPEN BIT defines */
#define PMP_PORT_ON                     1
#define PMP_PORT_OFF                    ~PMP_PORT_ON

/* STOP DURING IDLE BIT logic defines */
#define PMP_STOP_IN_IDLE_ON             1
#define PMP_STOP_IN_IDLE_OFF            ~PMP_SIDL_ON

/* ADD/DATA MULTIPLEXING logic defines */
#define PMP_ADDR_MUX_16_8               2   
#define PMP_ADDR_MUX_8_8                1   
#define PMP_ADDR_MUX_NONE               0   

#define PMP_BIT_ON                      1
#define PMP_BIT_OFF                     ~PMP_BIT_ON

/* BYTE ENABLE BIT logic defines */
#define PMP_BE_ON                       1
#define PMP_BE_OFF                      ~PMP_BE_ON

/* WR OR ENABLE STROBE BIT logic defines */
#define PMP_WR_ON                       1
#define PMP_WR_OFF                      ~PMP_WR_ON

/* RD OR RW STROBE BIT logic defines */
#define PMP_RD_ON                       1
#define PMP_RD_OFF                      ~PMP_RD_ON

/* CS FUNCTION SELCTION BITS logic defines*/ 
#define PMP_USE_CS1                	1
#define PMP_USE_PMA14             	~PMP_USE_CS1
#if defined(_PPI_PMP_V2)
#define PMP_USE_CS2                	1
#define PMP_USE_PMA15             	~PMP_USE_CS2
#endif

/* POLARITY BIT(s) logic defines */
#define PMP_ACTIVE_HI                   1
#define PMP_ACTIVE_LO                   ~PMP_ACTIVE_HI

/*****************************************************************************/
/* PMMODE register definitions */
/*****************************************************************************/
/* IRQ BITS logic defines */
#define PMP_IRQ_ON_BUFFER_FULL          3
/* note: value 2 is reserved */
#define PMP_IRQ_ON_RW                   1
#define PMP_IRQ_DISABLE                 0

/* INC BITS logic defines */
#define PMP_ADDR_BUFFER             3
#define PMP_ADDR_DEC                2
#define PMP_ADDR_INC                1
#define PMP_ADDR_INC_OFF            0

/* MODE16 BIT logic defines */
#define PMP_DATA_16                     1
#define PMP_DATA_8                      ~PMP_DATA_16

/* PORT MODE BIT logic defines */
#define PMP_MASTER_1                    3
#define PMP_MASTER_2                    2
#define PMP_SLAVE_ENH                   1
#define PMP_SLAVE                       0

/* BEGINNING WAIT BIT logic defines */
#define PMP_WAITB_4_TCY                 3
#define PMP_WAITB_3_TCY                 2
#define PMP_WAITB_2_TCY                 1
#define PMP_WAITB_1_TCY                 0

/* MIDDLE WAIT BIT logic defines */
#define PMP_WAITM_15_TCY                15
#define PMP_WAITM_14_TCY                14
#define PMP_WAITM_13_TCY                13
#define PMP_WAITM_12_TCY                12
#define PMP_WAITM_11_TCY                11
#define PMP_WAITM_10_TCY                10
#define PMP_WAITM_9_TCY                 9
#define PMP_WAITM_8_TCY                 8
#define PMP_WAITM_7_TCY                 7
#define PMP_WAITM_6_TCY                 6
#define PMP_WAITM_5_TCY                 5
#define PMP_WAITM_4_TCY                 4
#define PMP_WAITM_3_TCY                 3
#define PMP_WAITM_2_TCY                 2
#define PMP_WAITM_1_TCY                 1
#define PMP_WAITM_0_TCY                 0

/* END WAIT BIT logic defines */
#define PMP_WAITE_4_TCY                 3
#define PMP_WAITE_3_TCY                 2
#define PMP_WAITE_2_TCY                 1
#define PMP_WAITE_1_TCY                 0

/*****************************************************************************/
/* PMADDR register definitions */
/*****************************************************************************/
/* CS1/PMA14 or CS2/PMA15 logic defines */
#define PMP_CS_ON                       1
#define PMP_CS_OFF                      ~PMP_CS_ON

/*****************************************************************************/
/* PMAEN register definitions */
/*****************************************************************************/
/* PTEN BIT(s) logic defines */
#define PMP_PIN_ALL_ON                  255
#define PMP_PIN_ALL_OFF                 ~PMP_PTEN_ALL_OFF
#define PMP_PIN_ON                      1
#define PMP_PIN_OFF                     ~PMP_PTEN_ON

/*****************************************************************************/
/* INTERRUPT definitions */
/*****************************************************************************/
#define PMP_INT_ON                      1
#define PMP_INT_OFF                     ~PMP_INT_ON

/*****************************************************************************/
/* INTERRUPT PRIORITY BIT(s) logic defines */
/*****************************************************************************/
#define PMP_INT_PRIOR_7                 7
#define PMP_INT_PRIOR_6                 6
#define PMP_INT_PRIOR_5                 5
#define PMP_INT_PRIOR_4                 4
#define PMP_INT_PRIOR_3                 3
#define PMP_INT_PRIOR_2                 2
#define PMP_INT_PRIOR_1                 1
#define PMP_INT_PRIOR_OFF               0


/******************************************************************************/
/* MACRO DEFINITIONS */
/*****************************************************************************/

#if defined(_PPI_PMP_V1) || defined(_PPI_PMP_V2)

/******************************************************************************
 * Macro:           mPMPIsBufferFull
 *
 * PreCondition:    None
 *
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMSTAT.IBF (input buffer full bit)
 *                  
 * Note:            Use in any SLAVE mode
 *****************************************************************************/
#define mPMPIsBufferFull()  PMSTATbits.IBF

/******************************************************************************
 * Macro:           mPMPIsBufferOverflow
 *
 * PreCondition:    None
 *
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMSTAT.IBOV (input buffer overflow bit)
 *                  
 * Note:            Use in any SLAVE mode
 *****************************************************************************/
#define mPMPIsBufferOverflow()  PMSTATbits.IBOV 

/******************************************************************************
 * Macro:           mPMPClearBufferOverflow
 *
 * PreCondition:    None
 *
 * Input:           None
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        Clears PMSTAT.IBOV (input buffer overflow bit)
 *                  
 * Note:            Use in any SLAVE mode         
 *****************************************************************************/
#define mPMPClearBufferOverflow() PMSTATbits.IBOV = 0

/******************************************************************************
 * Macro:           mPMPClearBufferUnderflow
 *
 * PreCondition:    None
 *
 * Input:           None
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        Clears PMSTAT.OBUF (output buffer underflow bit)
 *                  
 * Note:            Use in any SLAVE mode          
 *****************************************************************************/
#define mPMPClearBufferUnderflow()  PMSTATbits.OBUF = 0

/******************************************************************************
 * Macro:           mPMPIsBufferEmpty
 *
 * PreCondition:    None
 *
 * Input:           None     
 *
 * Output:          TRUE/FALSE
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMSTAT.OBE (output buffer empty bit)
 *                  
 * Note:            Use in any SLAVE mode
 *****************************************************************************/
#define mPMPIsBufferEmpty() PMSTATbits.OBE
/******************************************************************************
 * Macro:           mPMPIsBufferUnderFlow
 *
 * PreCondition:    None
 *
 * Input:           None
 *
 * Output:          TRUE/FALSE
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMSTAT.OBUF (output buffer underflow bit)
 *                  
 * Note:            Use in any SLAVE mode          
 *****************************************************************************/
#define mPMPIsBufferUnderflow() PMSTATbits.OBUF 

/******************************************************************************
 * Macro:           mPMPSetIncMode
 *
 * PreCondition:    None
 *
 * Input:           mode(0= no inc/dec, 1= inc, 2= dec, 3= PSP buffer auto increment)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP address inc/dec mode
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetAddrIncMode(mode)    PMMODEbits.INCM = mode

/******************************************************************************
 * Macro:           mPMPSetAddrMux
 *
 * PreCondition:    None
 *
 * Input:           dsPIC33F:
 *                  mux(0= no mux, 1= 8addr/8data muxed, 2= 16addr/8data muxed)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        selects PMP addrs/data multiplexing mode
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetAddrMux(mux)     PMCONbits.ADRMUX = mux

/******************************************************************************
 * Macro:           mPMPSetByteEnableEPolarity
 *
 * PreCondition:    None
 *
 * Input:           polarity(0= active lo, 1= active hi)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP byte enable pin polarity
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetByteEnablePolarity(polarity) PMCONbits.BEP = polarity

/******************************************************************************
 * Macro:           mPMPSetBEEnable
 *
 * PreCondition:    None
 *
 * Input:           mode(0=DISABLED, 1=ENABLED)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP byte enable bit
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetByteEnable(mode) PMCONbits.PTBEEN =  mode

/******************************************************************************
 * Macro:           mPMPSetCSMode
 *
 * PreCondition:    None
 *
 * Input:           mode(0=CS1 as A14; 1=  CS1 as CS1)	//_PPI_PMP_V1
 *                  mode(0=CS1 and CS2 as A14 and A15; 1=CS2 as CS2 and CS1 as A14; 2=CS1 and CS2 as CS1 and CS2)	//_PPI_PMP_V2
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP CS function as a chip select or address line
 *                  
 * Note:            
 *****************************************************************************/ 
#define mPMPSetChipSelectMode(mode) PMCONbits.CSF = mode

/******************************************************************************
 * Macro:           mPMPSetChipSelect1Polarity
 *
 * PreCondition:    None
 *
 * Input:           polarity(0= active lo, 1= active hi)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP chip select pin polarities
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetChipSelect1Polarity(polarity) PMCONbits.CS1P = polarity

#if defined(_PPI_PMP_V2)
/******************************************************************************
 * Macro:           mPMPSetChipSelect2Polarity
 *
 * PreCondition:    None
 *
 * Input:           polarity(0= active lo, 1= active hi)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP chip select pin polarities
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetChipSelect2Polarity(polarity) PMCONbits.CS2P = polarity
#endif

/******************************************************************************
 * Macro:           mPMPSetDataMode
 *
 * PreCondition:    None
 *    
 * Input:           mode(0=8-bit, 1=16-bit) 
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP data width to 8 or 16 bit
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetDataMode(mode)   PMMODEbits.MODE16 = mode

/******************************************************************************
 * Macro:           mPMPSetInterruptEnable
 *
 * PreCondition:    
 *
 * Input:           mode(0=DISABLED, 1=ENABLED)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets/clears PMP interrupt enable bit
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetInterruptEnable(mode) IEC2bits.PMPIE = mode

/******************************************************************************
 * Macro:           mPMPSetInterruptPriority
 *
 * PreCondition:    
 *
 * Input:           priority(0..7)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets/clears PMP interrupt priority bits
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetInterruptPriority(priority) IPC11bits.PMPIP = priority

/******************************************************************************
 * Macro:           mPMPSetIdle
 *
 * PreCondition:    None
 *
 * Input:           mode(0=ENABLED, 1=DISABLED) 
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets/clears PMP "STOP IN IDLE" mode bit
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetIdle(mode) PMCONbits.PSIDL = mode

/******************************************************************************
 * Macro:           mPMPSetIRQMode
 *
 * PreCondition:    None
 *
 * Input:           mode(0=no INT, 1=INT on R/W, 2=INT on buffer full)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        selects PMP interrupt mode
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetInterruptMode(mode)  PMMODEbits.IRQM = mode

/******************************************************************************
 * Macro:           mPMPSetLatchPolarity
 *
 * PreCondition:    None
 *
 * Input:           polarity(0= active lo, 1= active hi)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP address latch pin polarity
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetAddrLatchPolarity(polarity)  PMCONbits.ALP = polarity

/******************************************************************************
 * Macro:           mPMPSetEnable
 *
 * PreCondition:    
 *
 * Input:           mode(0=DISABLED, 1=ENABLED)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets/clears PMP module enable bit
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetPortEnable(mode) PMCONbits.PMPEN = mode

/******************************************************************************
 * Macro:           mPMPSetPortMode
 *
 * PreCondition:    None
 *
 * Input:           mode(0= PSP legacy, 1= PSP enhanced, 2= Master2, 3= Master1)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP mode of operation as a slave or master
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetPortMode(mode) PMMODEbits.MODE = mode

/******************************************************************************
 * Macro:           mPMPSetReadStrobeEnable
 *
 * PreCondition:    None
 *
 * Input:           polarity(0= active lo, 1= active hi)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP read pin polarity
 *                  
 * Note:            
 *****************************************************************************/
 #define mPMPSetReadStrobeEnable(mode) PMCONbits.PTRDEN = mode;
 
/******************************************************************************
 * Macro:           mPMPSetReadStrobePolarity
 *
 * PreCondition:    None
 *
 * Input:           polarity(0= active lo, 1= active hi)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP read pin polarity
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetReadStrobePolarity(polarity) PMCONbits.RDSP = polarity

/******************************************************************************
 * Macro:           mPMPSetWaitBegin
 *
 * PreCondition:    None
 *
 * Input:           wait(0..3) cycles
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP beginning phase wait time
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetWaitBegin(wait)  PMMODEbits.WAITB = wait

/******************************************************************************
 * Macro:           mPMPSetWaitMiddle
 *
 * PreCondition:    None
 *
 * Input:           wait(0..15) cycles
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP middle phase wait time
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetWaitMiddle(wait) PMMODEbits.WAITM = wait

/******************************************************************************
 * Macro:           mPMPSetWaitEnd
 *
 * PreCondition:    None
 *
 * Input:           wait(0..3) cycles
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP end phase wait time
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetWaitEnd(wait)    PMMODEbits.WAITE = wait

/******************************************************************************
 * Macro:           mPMPSetWriteStrobeEnable
 *
 * PreCondition:    None
 *
 * Input:           polarity(0= active lo, 1= active hi)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP read pin polarity
 *                  
 * Note:            
 *****************************************************************************/
 #define mPMPSetWriteStrobeEnable(mode) PMCONbits.PTWREN = mode;
 
/******************************************************************************
 * Macro:           mPMPSetWriteStrobePolarity
 *
 * PreCondition:    None
 *
 * Input:           polarity(0= active lo, 1= active hi)
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        sets PMP write pin polarity
 *                  
 * Note:            
 *****************************************************************************/
#define mPMPSetWriteStrobePolarity(polarity)    PMCONbits.WRSP = polarity


/******************************************************************************/
/* FUNCTION PROTOTYPES */
/*****************************************************************************/

/******************************************************************************
 * Function:        PMPClose
 *
 * PreCondition:    None
 * Input:           None
 *
 * Output:          None
 *
 * Side Effects:    PMCON.PMPEN, IEC2.PMPIE, IFS2.PMPIF are cleared.
 *
 * Overview:        disables PMP module, disables interrupt
 *                  
 * Note:            
 *****************************************************************************/
extern void PMPClose(void) __attribute__ ((section (".libperi")));

/******************************************************************************
 * Function:        PMPIsOpBufferNEmpty
 *
 * PreCondition:    None
 *
 * Input:           buffer(0..3)
 *
 * Output:          TRUE/FALSE
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMSTAT.OBxE (output buffer(s) empty bit)
 *                  
 * Note:            Use in SLAVE BUFFERED mode, MODE[1:0] = 00
 *                  or SLAVE ENHANCED mode, MODE[1:0] = 01  and INCM[1:0]=11            
 *****************************************************************************/
extern BOOL PMPIsBufferNEmpty(BUFFER buf) __attribute__ ((section (".libperi")));

/******************************************************************************
 * Function:        PMPIsIpBufferNFull
 *
 * PreCondition:    None
 *
 * Input:           buffer(0..3)
 *
 * Output:          TRUE/FALSE
 *
 * Side Effects:    None
 *
 * Overview:        Returns state of PMSTAT.IBxF (input buffer(s) full bit)
 *                  
 * Note:            Use in SLAVE BUFFERED mode, MODE[1:0] = 00
 *                  or SLAVE ENHANCED mode, MODE[1:0] = 01  and INCM[1:0]=11
 *****************************************************************************/
extern BOOL PMPIsBufferNFull(BUFFER buf) __attribute__ ((section (".libperi")));

/******************************************************************************
 * Function:        PMPOpen
 *
 * PreCondition:    None
 *
 * Input:           control -- Control register settings
 *                  mode    -- Parallel port mode register setting
 *                  port    -- Parallel port enable register setting
 *                  addrs   -- Parallel port address register content
 *                  interrupt -- intereupt setting for PMP
 *                              bit [0:2] -> priority setting
 *                              bit [3]   -> Interrupt Enable/Disable
 *                              bit [4:7] -> unsused
 *
 * Output:          None
 *
 * Side Effects:    Configures the PMP module as per the input data
 *
 * Overview:        Provides method for setting PMP registers using bit masks
 *                  provided in this header file.
 * Note:            
 *****************************************************************************/
extern void PMPOpen(UINT control, UINT mode, UINT port, UINT addrs, BYTE interrupt) __attribute__ ((section (".libperi")));


/******************************************************************************
 * Function:        PMPMasterRead
 *
 * PreCondition:    None
 *
 * Input:           None
 *
 * Output:          value read from external device
 *
 * Side Effects:    None
 *
 * Overview:        Reads an external device
 *                  
 * Note:            Use in MASTER mode 1 or 2, MODE[1:0] = 10, 11 
 *****************************************************************************/
extern WORD PMPMasterRead(void) __attribute__ ((section (".libperi")));


/******************************************************************************
 * Function:        PMPMasterWrite
 *
 * PreCondition:    None
 *
 * Input:           value to write to external device
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        if 8-bit data mode is selected, the data appears on 8
 *                  data lines.  If 16-bit data mode, the lower 8 bits of data
 *                  are written first, followed by the upper 8 bits of data.
 *                  
 * Note:            Use in MASTER mode 1 or 2, MODE[1:0] = 10, 11 
 *****************************************************************************/
extern void PMPMasterWrite(WORD value) __attribute__ ((section (".libperi")));

/******************************************************************************
 * Function:        PMPSetAddress
 *
 * PreCondition:    None
 *
 * Input:           address
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        Sets the address that will appear on the PMP bus addrs lines
 *                  
 * Note:            Use in MASTER mode 1 or 2, MODE[1:0] = 10, 11 
 *****************************************************************************/
extern void PMPSetAddress(WORD addrs) __attribute__ ((section (".libperi")));


/******************************************************************************
 * Function:        PMPSlaveReadBuffers
 *
 * PreCondition:    None
 *
 * Input:           BYTE pointer
 *
 * Output:          The contents of the (4) 8-bit slave buffer registers.
 *
 * Side Effects:    Reading any of these buffers clears the IBF status bit as
 *                  well as the individual IBnF status bits.
 *
 * Overview:        Copies 4 bytes from DATAIN buffers to a starting location
 *                  pointed to by input parameter.
 *                  
 * Note:            Use in SLAVE BUFFERED mode, MODE[1:0] = 00 and INCM[1:0]=11              
 *                  or SLAVE ENHANCED mode, MODE[1:0] = 01
 *****************************************************************************/
extern void PMPSlaveReadBuffers(BYTE* ref) __attribute__ ((section (".libperi")));


/******************************************************************************
 * Function:        PMPSlaveReadBufferN
 *
 * PreCondition:    None
 *
 * Input:           buffer(0..3)
 *
 * Output:          The value in selected buffer register.
 *
 * Side Effects:    Reading PMDATA buffer clears status bit.
 *
 * Overview:        Reads the value in PMDATA register written by a master device.
 *                  
 * Note:            Use in SLAVE BUFFERED mode, MODE[1:0] = 00 and INCM[1:0]=11              
 *                  or SLAVE ENHANCED mode, MODE[1:0] = 01.
                    If MODE[1:0]=00 and INCM[1:0]?01,then buf-(0).
 *****************************************************************************/
extern BYTE PMPSlaveReadBufferN(BUFFER buf) __attribute__ ((section (".libperi")));


/******************************************************************************
 * Function:        PMPSlaveWriteBuffer
 *
 * PreCondition:    None
 *
 * Input:           BYTE pointer
 *
 * Output:          Returns TRUE if successful, else FALSE
 *
 * Side Effects:    None
 *
 * Overview:        Copies 4 bytes, addressed by the pointer/ref argument, into
 *                  the corresponding output registers. Byte[0] -> OUT1[7:0],
 *                  byte[1] -> OUT1[15:8], ... etc. If entire buffer is empty,
 *                  (IBF = 0) function returns TRUE, else the bytes are not
 *                  copied and returns FALSE.
 *                  
 * Note:            Use in SLAVE BUFFERED mode, MODE[1:0] = 00
 *                  or SLAVE ENHANCED mode, MODE[1:0] = 01  and INCM[1:0]=11              
 *****************************************************************************/
extern BOOL PMPSlaveWriteBuffers(BYTE* ref) __attribute__ ((section (".libperi")));


/******************************************************************************
 * Function:        PMPSlaveWriteBufferN
 *
 * PreCondition:    None
 *
 * Input:           buffer(0..3), value to be written
 *
 * Output:          Returns TRUE if successful, else FALSE
 *
 * Side Effects:    None
 *
 * Overview:        writes the desired value into the selected output buffer
 *                  
 * Note:            Use in SLAVE BUFFERED mode, MODE[1:0] = 00
 *                  or SLAVE ENHANCED mode, MODE[1:0] = 01  and INCM[1:0]=11. 
                    If MODE[1:0]=00 and INCM[1:0]?01,then buf-(0).          
 *****************************************************************************/
extern BOOL PMPSlaveWriteBufferN(BUFFER buf, BYTE) __attribute__ ((section (".libperi")));

#else
#warning "Does not build on this target"
#endif /* _PPI_PMP_V1 || _PPI_PMP_V2*/

#endif
