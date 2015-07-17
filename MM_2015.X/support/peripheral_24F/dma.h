 #ifndef  __DMA_H
 #define  __DMA_H
 /*****************************************************************************
 *                  DMA PERIPHERAL LIBRARY HEADER FILE
 ******************************************************************************
 * FileName:        dma.h
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
 *****************************************************************************/

#include "PIC24F_periph_features.h"

//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#if defined (dma_v1_1) || defined (dma_v1_2) || defined (LIB_BUILD) 

 #define DMACON_VALUE                 	0x0000

 #define DMACH0_VALUE                	0x0000
 #define DMAINT0_VALUE               	0x0000

 #define DMACH1_VALUE                	0x0000
 #define DMAINT1_VALUE               	0x0000

 #define DMACH2_VALUE                	0x0000
 #define DMAINT2_VALUE               	0x0000

 #define DMACH3_VALUE                	0x0000
 #define DMAINT3_VALUE               	0x0000

 #define DMACH4_VALUE                	0x0000
 #define DMAINT4_VALUE               	0x0000

 #define DMACH5_VALUE                	0x0000
 #define DMAINT5_VALUE               	0x0000

 /***** DMACON register definition ****/
 #define DMA_ENABLE       			   	0x8000 /*DMA is Enabled*/
 #define DMA_DISABLE      			   	0x0000 /*DMA is Disabled*/
 #define DMA_ENBL_DISBL_MASK          	(~DMA_ENABLE)

 #define DMA_IDLE_STOP                 	0x2000 /*DMA discontinue module operation in Idle mode*/
 #define DMA_IDLE_CONTINUE             	0x0000 /*DMA Operate in Idle mode*/
 #define DMA_IDLE_MASK                  (~DMA_IDLE_STOP)
 
 #define DMA_ROUND_ROBIN_SCHEME         0x0001 /* Round Robin Channel priority scheme is selected*/
 #define DMA_FIXED_PRIORITY_SCHEME      0x0000 /* Fixed priority Channel priority scheme is selected*/
 #define DMA_CH_PRIORITY_SELECT_MASK  	(~DMA_CH_PRIORITY_SELECT)

 /***** DMACHx register definition ****/
 #define DMA_NULL_WRITE_MODE_ENABLE     0x0400 /* A dummy write is initiated to DMASRC for every write to DMADST*/
 #define DMA_NULL_WRITE_MODE_DISABLE    0x0000 /* No dummy write is initiated */
 #define DMA_NULL_WRITE_MODE_MASK       (~DMA_NULL_WRITE_MODE)
 
 #define  DMA_ADD_COUNT_RELOAD_ENABLE   0x0200 /* DMASRC,DMADST & DMACNT registers are reloaded to their previous values upon the start of next operation*/
 #define  DMA_ADD_COUNT_RELOAD_DISABLE  0x0000 /* DMASRC,DMADST & DMACNT registers are not reloaded on the start of next operation*/
 #define  DMA_ADD_COUNT_RELOAD_MASK     (~DMA_ADD_COUNT_RELOAD)
 
 #define DMA_CH_REQUEST               	0x0100 /* A DMA software request is initiated*/
 #define DMA_NO_CH_REQUEST            	0x0000 /* No DMA request is pending */
 #define DMA_CH_REQUEST_MASK          	(~DMA_CH_REQUEST)

 #if defined (dma_v1_1) 
 #define DMA_SRC_PIA_MODE				0x00C0 /*DMASRC is used in Peripheral Indirect Addressing & remains unchanged*/
 #endif 
 #define DMA_SRC_DECR_MODE				0x0080 /*DMASRC is decremented based on SIZE bit after a transfer completion*/
 #define DMA_SRC_INCR_MODE 				0x0040 /*DMASRC is incremented based on SIZE bit after a transfer completion*/
 #define DMA_SRC_UNCNGD_MODE			0x0000 /*DMASRC remains unchanged after a transfer completion*/
 #define DMA_SRC_ADD_MODE_MASK			(~DMA_SRC_ADD_MODE)
 
 #if defined (dma_v1_1) 
 #define DMA_DST_PIA_MODE				0x0030 /*DMADST is used in Peripheral Indirect Addressing & remains unchanged*/
 #endif
 #define DMA_DST_DECR_MODE				0x0020 /*DMADST is decremented based on SIZE bit after a transfer completion*/
 #define DMA_DST_INCR_MODE 				0x0010 /*DMADST is incremented based on SIZE bit after a transfer completion*/
 #define DMA_DST_UNCNGD_MODE			0x0000 /*DMADST remains unchanged after a transfer completion*/
 #define DMA_DST_ADD_MODE_MASK			(~DMA_DST_ADD_MODE)
 
 #define DMA_REPEATED_CONTINUOUS    	0x000C /* Repeated Continuous mode enabled*/
 #define DMA_CONTINUOUS      			0x0008 /* Continuous  mode enabled */
 #define DMA_REPEATED_ONE_SHOT          0x0004 /* Repeated One-Shot mode enabled*/
 #define DMA_ONE_SHOT                   0x0000 /* One-shot mode enabled */
 #define DMA_TRANSFER_MODE_MASK			(~DMA_TRANSFER_MODE)
  
 #define DMA_DATA_BYTE					0x0002 /* Data size is byte(8-bit)*/
 #define DMA_DATA_WORD					0x0000 /* Data size is word(16-bit) */
 #define DMA_DATA_SIZE_MASK				(~DMA_DATA_SIZE)
 
 #define DMA_CH_ENABLE       			0x0001 /*DMA Channel is Enabled*/
 #define DMA_CH_DISABLE      			0x0000 /*DMA Channelis Disabled*/
 #define DMA_CH_ENBL_DISBL_MASK       	(~DMA_CH_ENBL_DISBL)
 
 /***** DMAINTx register definition ****/
 #if defined (dma_v1_1) 
 #define DMA_TRIG_SRC_JTAG			0x0100 /* DMA Trigger source is JTAG*/
 #elif defined (dma_v1_2)
 #define DMA_TRIG_SRC_DAC2			0x0100 /* DMA Trigger source is DAC2*/
 #endif
 #define DMA_TRIG_SRC_LCD				0x0200 /* DMA Trigger source is LCD*/
 #define DMA_TRIG_SRC_UART4TX			0x0300 /* DMA Trigger source is UART4 Transmit*/
 #define DMA_TRIG_SRC_UART4RX			0x0400 /* DMA Trigger source is UART4 Receive*/
 #define DMA_TRIG_SRC_UART4ERR			0x0500 /* DMA Trigger source is UART4 Error*/
 #define DMA_TRIG_SRC_UART3TX			0x0600 /* DMA Trigger source is UART3 Transmit*/
 #define DMA_TRIG_SRC_UART3RX			0x0700 /* DMA Trigger source is UART3 Receive*/
 #define DMA_TRIG_SRC_UART3ERR			0x0800 /* DMA Trigger source is UART3 Error*/
 #define DMA_TRIG_SRC_CTMU_EVNT		0x0900 /* DMA Trigger source is CTMU Event*/
 #define DMA_TRIG_SRC_HLVD			0x0A00 /* DMA Trigger source is HLVD*/
 #define DMA_TRIG_SRC_CRC_DONE		0x0B00 /* DMA Trigger source is CRC Done*/
 #define DMA_TRIG_SRC_UART2ERR			0x0C00 /* DMA Trigger source is UART2 Error*/
 #define DMA_TRIG_SRC_UART1ERR			0x0D00 /* DMA Trigger source is UART1 Error*/
 #define DMA_TRIG_SRC_RTCC			0x0E00 /* DMA Trigger source is RTCC*/
 #define DMA_TRIG_SRC_DMA_CH5			0x0F00 /* DMA Trigger source is DMA Channel 5*/
 #define DMA_TRIG_SRC_EXT_INT4			0x1000 /* DMA Trigger source is External Interrpt 4*/
 #define DMA_TRIG_SRC_EXT_INT3			0x1100 /* DMA Trigger source is External Interrpt 3*/
 #define DMA_TRIG_SRC_I2C2_MSTR_EVNT	0x1200 /* DMA Trigger source is I2C2 Master Event*/
 #define DMA_TRIG_SRC_I2C2_SLV_EVNT		0x1300 /* DMA Trigger source is I2C2 Slave Event*/
 #define DMA_TRIG_SRC_DMA_CH4			0x1400 /* DMA Trigger source is DMA Channel 4*/
 #define DMA_TRIG_SRC_EPMP			0x1500 /* DMA Trigger source is EPMP*/
 #define DMA_TRIG_SRC_OCMP7			0x1600 /* DMA Trigger source is Output Compare 7*/
 #define DMA_TRIG_SRC_OCMP6			0x1700 /* DMA Trigger source is Output Compare 6*/
 #define DMA_TRIG_SRC_OCMP5			0x1800 /* DMA Trigger source is Output Compare 5*/
 #define DMA_TRIG_SRC_ICAP6			0x1900 /* DMA Trigger source is Input Capture 6*/
 #define DMA_TRIG_SRC_ICAP5			0x1A00 /* DMA Trigger source is Input Capture 5*/
 #define DMA_TRIG_SRC_ICAP4			0x1B00 /* DMA Trigger source is Input Capture 4*/
 #define DMA_TRIG_SRC_ICAP3			0x1C00 /* DMA Trigger source is Input Capture 3*/
 #define DMA_TRIG_SRC_DMA_CH3			0x1D00 /* DMA Trigger source is DMA Channel 3*/
 #define DMA_TRIG_SRC_SPI2_EVNT		0x1E00 /* DMA Trigger source is SPI2 Event*/
 #define DMA_TRIG_SRC_SPI2_ERR			0x1F00 /* DMA Trigger source is SPI2 Event*/
 #define DMA_TRIG_SRC_UART2TX			0x2000 /* DMA Trigger source is UART2 Transmit*/
 #define DMA_TRIG_SRC_UART2RX			0x2100 /* DMA Trigger source is UART2 Receive*/
 #define DMA_TRIG_SRC_EXT_INT2			0x2200 /* DMA Trigger source is External Interrpt 2*/
 #define DMA_TRIG_SRC_TIMER5			0x2300 /* DMA Trigger source is Timer5*/
 #define DMA_TRIG_SRC_TIMER4			0x2400 /* DMA Trigger source is Timer4*/
 #define DMA_TRIG_SRC_OCMP4			0x2500 /* DMA Trigger source is Output Compare 4*/
 #define DMA_TRIG_SRC_OCMP3			0x2600 /* DMA Trigger source is Output Compare 3*/
 #define DMA_TRIG_SRC_DMA_CH2			0x2700 /* DMA Trigger source is DMA Channel 2*/
 #if defined (dma_v1_1)
 #define DMA_TRIG_SRC_ICAP7			0x2800 /* DMA Trigger source is Input Capture 7*/
 #elif defined (dma_v1_2)
 #define DMA_TRIG_SRC_DAC1			0x2800 /* DMA Trigger source is DAC1*/
 #endif
 #define DMA_TRIG_SRC_EXT_INT1			0x2900 /* DMA Trigger source is External Interrpt 1*/
 #define DMA_TRIG_SRC_INT_CHNG			0x2A00 /* DMA Trigger source is Interrupt-on-Change*/
 #define DMA_TRIG_SRC_COMP_EVNT			0x2B00 /* DMA Trigger source is Comparators Event*/
 #define DMA_TRIG_SRC_I2C1_MSTR_EVNT	0x2C00 /* DMA Trigger source is I2C1 Master Event*/
 #define DMA_TRIG_SRC_I2C1_SLV_EVNT		0x2D00 /* DMA Trigger source is I2C1 Slave Event*/
 #if defined (dma_v1_1)
 #define DMA_TRIG_SRC_ADC				0x2E00 /* DMA Trigger source is A/D Converter*/
 #define DMA_TRIG_SRC_DMA_CH1			0x2F00 /* DMA Trigger source is DMA Channel 1*/
 #elif defined (dma_v1_2)
 #define DMA_TRIG_SRC_DMA_CH1			0x2E00 /* DMA Trigger source is DMA Channel 1*/ 
 #define DMA_TRIG_SRC_ADC				0x2F00 /* DMA Trigger source is Pipelined A/D Converter*/
 #endif
 #define DMA_TRIG_SRC_UART1TX			0x3000 /* DMA Trigger source is UART1 Transmit*/
 #define DMA_TRIG_SRC_UART1RX			0x3100 /* DMA Trigger source is UART1 Receive*/
 #define DMA_TRIG_SRC_SPI1_EVNT		0x3200 /* DMA Trigger source is SPI1 Event*/
 #define DMA_TRIG_SRC_SPI1_ERR			0x3300 /* DMA Trigger source is SPI1 Event*/
 #define DMA_TRIG_SRC_TIMER3			0x3400 /* DMA Trigger source is Timer3*/
 #define DMA_TRIG_SRC_TIMER2			0x3500 /* DMA Trigger source is Timer2*/
 #define DMA_TRIG_SRC_OCMP2			0x3600 /* DMA Trigger source is Output Compare 2*/
 #define DMA_TRIG_SRC_ICAP2			0x3700 /* DMA Trigger source is Input Capture 2*/
 #define DMA_TRIG_SRC_DMA_CH0			0x3800 /* DMA Trigger source is DMA Channel 0*/
 #define DMA_TRIG_SRC_TIMER1			0x3900 /* DMA Trigger source is Timer1*/
 #define DMA_TRIG_SRC_OCMP1			0x3A00 /* DMA Trigger source is Output Compare 1*/
 #define DMA_TRIG_SRC_ICAP1			0x3B00 /* DMA Trigger source is Input Capture 1*/
 #define DMA_TRIG_SRC_EXT_INT0			0x3C00 /* DMA Trigger source is External Interrpt 0*/
 #if defined (dma_v1_1)
 #define DMA_TRIG_SRC_OPAMP2			0x3D00 /* DMA Trigger source is Op-Amp 2*/
 #define DMA_TRIG_SRC_OPAMP1			0x3E00 /* DMA Trigger source is Op-Amp 1*/
 #define DMA_TRIG_SRC_SIGDELADC		0x3F00 /* DMA Trigger source is Sigma-Delta A/D Converter*/
 #endif
 #define DMA_TRIG_SRC_MASK 			(~DMA_TRIG_SRC)
 
 #define DMA_HLFWY_COMPLTN_WATER_MARK_ENBL   0x0001 /* Invoking the interrupts when DMACNT has reached its halfway point and at completion*/
 #define DMA_HLFWY_COMPLTN_WATER_MARK_DSBL   0x0000 /* An interrupt is invoked only at the completion of transfer*/
 #define DMA_HLFWY_COMPLTN_WATER_MARK_MASK  (~DMA_HLFWY_COMPLTN_WATER_MARK) 
 
 /*** DMA Channel 0 Interrupt **/
#define DMA_CH0_INT_PRI_0               0x0000 /* DMA Channel 0 interrupts priority 0 */
#define DMA_CH0_INT_PRI_1               0x0001 /* DMA Channel 0 interrupts priority 1 */
#define DMA_CH0_INT_PRI_2               0x0002 /* DMA Channel 0 interrupts priority 2 */
#define DMA_CH0_INT_PRI_3               0x0003 /* DMA Channel 0 interrupts priority 3 */
#define DMA_CH0_INT_PRI_4               0x0004 /* DMA Channel 0 interrupts priority 4 */
#define DMA_CH0_INT_PRI_5               0x0005 /* DMA Channel 0 interrupts priority 5 */
#define DMA_CH0_INT_PRI_6               0x0006 /* DMA Channel 0 interrupts priority 6 */
#define DMA_CH0_INT_PRI_7               0x0007 /* DMA Channel 0 interrupts priority 7 */
#define DMA_CH0_INT_PRI_MASK            (~DMA_CH0_INT_PRI_7)/* DMA Channel 0 interrupts priority mask */

#define DMA_CH0_INT_ENABLE              0x0008 /* enable DMA Channel 0 interrupts */
#define DMA_CH0_INT_DISABLE             0x0000 /* disable DMA Channel 0 interrupts */
#define DMA_CH0_INT_MASK                (~DMA_CH0_INT_ENABLE) /* DMA Channel 0 interrupts mask */

/*** DMA Channel 1 Interrupt **/
#define DMA_CH1_INT_PRI_0               0x0000 /* DMA Channel 1 interrupts priority 0 */
#define DMA_CH1_INT_PRI_1               0x0001 /* DMA Channel 1 interrupts priority 1 */
#define DMA_CH1_INT_PRI_2               0x0002 /* DMA Channel 1 interrupts priority 2 */
#define DMA_CH1_INT_PRI_3               0x0003 /* DMA Channel 1 interrupts priority 3 */
#define DMA_CH1_INT_PRI_4               0x0004 /* DMA Channel 1 interrupts priority 4 */
#define DMA_CH1_INT_PRI_5               0x0005 /* DMA Channel 1 interrupts priority 5 */
#define DMA_CH1_INT_PRI_6               0x0006 /* DMA Channel 1 interrupts priority 6 */
#define DMA_CH1_INT_PRI_7               0x0007 /* DMA Channel 1 interrupts priority 7 */
#define DMA_CH1_INT_PRI_MASK            (~DMA_CH1_INT_PRI_7)/* DMA Channel 1 interrupts priority mask */

#define DMA_CH1_INT_ENABLE              0x0008 /* enable DMA Channel 1 interrupts */
#define DMA_CH1_INT_DISABLE             0x0000 /* disable DMA Channel 1 interrupts */
#define DMA_CH1_INT_MASK                (~DMA_CH1_INT_ENABLE) /* DMA Channel 1 interrupts mask */

/*** DMA Channel 2 Interrupt **/
#define DMA_CH2_INT_PRI_0               0x0000 /* DMA Channel 2 interrupts priority 0 */
#define DMA_CH2_INT_PRI_1               0x0001 /* DMA Channel 2 interrupts priority 1 */
#define DMA_CH2_INT_PRI_2               0x0002 /* DMA Channel 2 interrupts priority 2 */
#define DMA_CH2_INT_PRI_3               0x0003 /* DMA Channel 2 interrupts priority 3 */
#define DMA_CH2_INT_PRI_4               0x0004 /* DMA Channel 2 interrupts priority 4 */
#define DMA_CH2_INT_PRI_5               0x0005 /* DMA Channel 2 interrupts priority 5 */
#define DMA_CH2_INT_PRI_6               0x0006 /* DMA Channel 2 interrupts priority 6 */
#define DMA_CH2_INT_PRI_7               0x0007 /* DMA Channel 2 interrupts priority 7 */
#define DMA_CH2_INT_PRI_MASK            (~DMA_CH2_INT_PRI_7)/* DMA Channel 2 interrupts priority mask */

#define DMA_CH2_INT_ENABLE              0x0008 /* enable DMA Channel 2 interrupts */
#define DMA_CH2_INT_DISABLE             0x0000 /* disable DMA Channel 2 interrupts */
#define DMA_CH2_INT_MASK                (~DMA_CH2_INT_ENABLE) /* DMA Channel 2 interrupts mask */

/*** DMA Channel 3 Interrupt **/
#define DMA_CH3_INT_PRI_0               0x0000 /* DMA Channel 3 interrupts priority 0 */
#define DMA_CH3_INT_PRI_1               0x0001 /* DMA Channel 3 interrupts priority 1 */
#define DMA_CH3_INT_PRI_2               0x0002 /* DMA Channel 3 interrupts priority 2 */
#define DMA_CH3_INT_PRI_3               0x0003 /* DMA Channel 3 interrupts priority 3 */
#define DMA_CH3_INT_PRI_4               0x0004 /* DMA Channel 3 interrupts priority 4 */
#define DMA_CH3_INT_PRI_5               0x0005 /* DMA Channel 3 interrupts priority 5 */
#define DMA_CH3_INT_PRI_6               0x0006 /* DMA Channel 3 interrupts priority 6 */
#define DMA_CH3_INT_PRI_7               0x0007 /* DMA Channel 3 interrupts priority 7 */
#define DMA_CH3_INT_PRI_MASK            (~DMA_CH3_INT_PRI_7)/* DMA Channel 3 interrupts priority mask */

#define DMA_CH3_INT_ENABLE              0x0008 /* enable DMA Channel 3 interrupts */
#define DMA_CH3_INT_DISABLE             0x0000 /* disable DMA Channel 3 interrupts */
#define DMA_CH3_INT_MASK                (~DMA_CH3_INT_ENABLE) /* DMA Channel 3 interrupts mask */

/*** DMA Channel 4 Interrupt **/
#define DMA_CH4_INT_PRI_0               0x0000 /* DMA Channel 4 interrupts priority 0 */
#define DMA_CH4_INT_PRI_1               0x0001 /* DMA Channel 4 interrupts priority 1 */
#define DMA_CH4_INT_PRI_2               0x0002 /* DMA Channel 4 interrupts priority 2 */
#define DMA_CH4_INT_PRI_3               0x0003 /* DMA Channel 4 interrupts priority 3 */
#define DMA_CH4_INT_PRI_4               0x0004 /* DMA Channel 4 interrupts priority 4 */
#define DMA_CH4_INT_PRI_5               0x0005 /* DMA Channel 4 interrupts priority 5 */
#define DMA_CH4_INT_PRI_6               0x0006 /* DMA Channel 4 interrupts priority 6 */
#define DMA_CH4_INT_PRI_7               0x0007 /* DMA Channel 4 interrupts priority 7 */
#define DMA_CH4_INT_PRI_MASK            (~DMA_CH4_INT_PRI_7)/* DMA Channel 4 interrupts priority mask */

#define DMA_CH4_INT_ENABLE              0x0008 /* enable DMA Channel 4 interrupts */
#define DMA_CH4_INT_DISABLE             0x0000 /* disable DMA Channel 4 interrupts */
#define DMA_CH4_INT_MASK                (~DMA_CH4_INT_ENABLE) /* DMA Channel 4 interrupts mask */

/*** DMA Channel 5 Interrupt **/
#define DMA_CH5_INT_PRI_0               0x0000 /* DMA Channel 5 interrupts priority 0 */
#define DMA_CH5_INT_PRI_1               0x0001 /* DMA Channel 5 interrupts priority 1 */
#define DMA_CH5_INT_PRI_2               0x0002 /* DMA Channel 5 interrupts priority 2 */
#define DMA_CH5_INT_PRI_3               0x0003 /* DMA Channel 5 interrupts priority 3 */
#define DMA_CH5_INT_PRI_4               0x0004 /* DMA Channel 5 interrupts priority 4 */
#define DMA_CH5_INT_PRI_5               0x0005 /* DMA Channel 5 interrupts priority 5 */
#define DMA_CH5_INT_PRI_6               0x0006 /* DMA Channel 5 interrupts priority 6 */
#define DMA_CH5_INT_PRI_7               0x0007 /* DMA Channel 5 interrupts priority 7 */
#define DMA_CH5_INT_PRI_MASK            (~DMA_CH5_INT_PRI_7)/* DMA Channel 5 interrupts priority mask */

#define DMA_CH5_INT_ENABLE              0x0008 /* enable DMA Channel 5 interrupts */
#define DMA_CH5_INT_DISABLE             0x0000 /* disable DMA Channel 5 interrupts */
#define DMA_CH5_INT_MASK                (~DMA_CH5_INT_ENABLE) /* DMA Channel 5 interrupts mask */
 
 /***********************************************************************
Macro      : EnableIntDMACH0
Overview   : This macro enables the DMA Channel 0 interrupt.
Parameters : None
Remarks    : This macro sets DMA Channel 0 Interrupt Enable bit of Interrupt
             Enable Control Register.
************************************************************************/
#define EnableIntDMACH0                		(IEC0bits.DMA0IE = 1)

/***********************************************************************
Macro      : DisableIntDMACH0
Overview   : This macro disables the DMA Channel 0 interrupt.
Parameters : None
Remarks    : This macro clears DMA Channel 0 Interrupt Enable bit of Interrupt
             Enable Control register.
************************************************************************/
#define DisableIntDMACH0                		(IEC0bits.DMA0IE = 0)

/***********************************************************************
Macro      : SetPriorityIntDMACH0(priority)
Overview   : This macro sets priority for DMA Channel 0 interrupt.
Parameters : priority - This input parameter is the level of interrupt priority
Remarks    : This macro sets DMA Channel 0 Interrupt Priority bits of Interrupt
             Priority Control register.
************************************************************************/
#define SetPriorityIntDMACH0(priority)     	(IPC1bits.DMA0IP = priority)

/********************************************************************
Macro       : DMACH0_Clear_Intr_Status_Bit
Overview    : Macro to Clear DMA Channel 0 Interrupt Status bit
Parameters  : None
Remarks     : None
*******************************************************************/
#define DMACH0_Clear_Intr_Status_Bit 			(IFS0bits.DMA0IF = 0)

/***********************************************************************
Macro      : EnableIntDMACH1
Overview   : This macro enables the DMA Channel 1 interrupt.
Parameters : None
Remarks    : This macro sets DMA Channel 1 Interrupt Enable bit of Interrupt
             Enable Control Register.
************************************************************************/
#define EnableIntDMACH1                		(IEC0bits.DMA1IE = 1)

/***********************************************************************
Macro      : DisableIntDMACH1
Overview   : This macro disables the DMA Channel 1 interrupt.
Parameters : None
Remarks    : This macro clears DMA Channel 1 Interrupt Enable bit of Interrupt
             Enable Control register.
************************************************************************/
#define DisableIntDMACH1                		(IEC0bits.DMA1IE = 0)

/***********************************************************************
Macro      : SetPriorityIntDMACH1(priority)
Overview   : This macro sets priority for DMA Channel 1 interrupt.
Parameters : priority - This input parameter is the level of interrupt priority
Remarks    : This macro sets DMA Channel 1 Interrupt Priority bits of Interrupt
             Priority Control register.
************************************************************************/
#define SetPriorityIntDMACH1(priority)     	(IPC3bits.DMA1IP = priority)

/********************************************************************
Macro       : DMACH1_Clear_Intr_Status_Bit
Overview    : Macro to Clear DMA Channel 1 Interrupt Status bit
Parameters  : None
Remarks     : None
*******************************************************************/
#define DMACH1_Clear_Intr_Status_Bit 			(IFS0bits.DMA1IF = 0)

/***********************************************************************
Macro      : EnableIntDMACH2
Overview   : This macro enables the DMA Channel 2 interrupt.
Parameters : None
Remarks    : This macro sets DMA Channel 2 Interrupt Enable bit of Interrupt
             Enable Control Register.
************************************************************************/
#define EnableIntDMACH2                		(IEC1bits.DMA2IE = 1)

/***********************************************************************
Macro      : DisableIntDMACH2
Overview   : This macro disables the DMA Channel 2 interrupt.
Parameters : None
Remarks    : This macro clears DMA Channel 2 Interrupt Enable bit of Interrupt
             Enable Control register.
************************************************************************/
#define DisableIntDMACH2                		(IEC1bits.DMA2IE = 0)

/***********************************************************************
Macro      : SetPriorityIntDMACH2(priority)
Overview   : This macro sets priority for DMA Channel 2 interrupt.
Parameters : priority - This input parameter is the level of interrupt priority
Remarks    : This macro sets DMA Channel 2 Interrupt Priority bits of Interrupt
             Priority Control register.
************************************************************************/
#define SetPriorityIntDMACH2(priority)     	(IPC6bits.DMA2IP = priority)

/********************************************************************
Macro       : DMACH2_Clear_Intr_Status_Bit
Overview    : Macro to Clear DMA Channel 2 Interrupt Status bit
Parameters  : None
Remarks     : None
*******************************************************************/
#define DMACH2_Clear_Intr_Status_Bit 			(IFS1bits.DMA2IF = 0)

/***********************************************************************
Macro      : EnableIntDMACH3
Overview   : This macro enables the DMA Channel 3 interrupt.
Parameters : None
Remarks    : This macro sets DMA Channel 3 Interrupt Enable bit of Interrupt
             Enable Control Register.
************************************************************************/
#define EnableIntDMACH3                		(IEC2bits.DMA3IE = 1)

/***********************************************************************
Macro      : DisableIntDMACH3
Overview   : This macro disables the DMA Channel 3 interrupt.
Parameters : None
Remarks    : This macro clears DMA Channel 3 Interrupt Enable bit of Interrupt
             Enable Control register.
************************************************************************/
#define DisableIntDMACH3                		(IEC2bits.DMA3IE = 0)

/***********************************************************************
Macro      : SetPriorityIntDMACH3(priority)
Overview   : This macro sets priority for DMA Channel 3 interrupt.
Parameters : priority - This input parameter is the level of interrupt priority
Remarks    : This macro sets DMA Channel 3 Interrupt Priority bits of Interrupt
             Priority Control register.
************************************************************************/
#define SetPriorityIntDMACH3(priority)     	(IPC9bits.DMA3IP = priority)

/********************************************************************
Macro       : DMACH3_Clear_Intr_Status_Bit
Overview    : Macro to Clear DMA Channel 3 Interrupt Status bit
Parameters  : None
Remarks     : None
*******************************************************************/
#define DMACH3_Clear_Intr_Status_Bit 			(IFS2bits.DMA3IF = 0)

/***********************************************************************
Macro      : EnableIntDMACH4
Overview   : This macro enables the DMA Channel 4 interrupt.
Parameters : None
Remarks    : This macro sets DMA Channel 4 Interrupt Enable bit of Interrupt
             Enable Control Register.
************************************************************************/
#define EnableIntDMACH4                		(IEC2bits.DMA4IE = 1)

/***********************************************************************
Macro      : DisableIntDMACH4
Overview   : This macro disables the DMA Channel 4 interrupt.
Parameters : None
Remarks    : This macro clears DMA Channel 4 Interrupt Enable bit of Interrupt
             Enable Control register.
************************************************************************/
#define DisableIntDMACH4                		(IEC2bits.DMA4IE = 0)

/***********************************************************************
Macro      : SetPriorityIntDMACH4(priority)
Overview   : This macro sets priority for DMA Channel 4 interrupt.
Parameters : priority - This input parameter is the level of interrupt priority
Remarks    : This macro sets DMA Channel 4 Interrupt Priority bits of Interrupt
             Priority Control register.
************************************************************************/
#define SetPriorityIntDMACH4(priority)     	(IPC11bits.DMA4IP = priority)

/********************************************************************
Macro       : DMACH4_Clear_Intr_Status_Bit
Overview    : Macro to Clear DMA Channel 4 Interrupt Status bit
Parameters  : None
Remarks     : None
*******************************************************************/
#define DMACH4_Clear_Intr_Status_Bit 			(IFS2bits.DMA4IF = 0)

/***********************************************************************
Macro      : EnableIntDMACH5
Overview   : This macro enables the DMA Channel 5 interrupt.
Parameters : None
Remarks    : This macro sets DMA Channel 5 Interrupt Enable bit of Interrupt
             Enable Control Register.
************************************************************************/
#define EnableIntDMACH5                		(IEC3bits.DMA5IE = 1)

/***********************************************************************
Macro      : DisableIntDMACH5
Overview   : This macro disables the DMA Channel 5 interrupt.
Parameters : None
Remarks    : This macro clears DMA Channel 5 Interrupt Enable bit of Interrupt
             Enable Control register.
************************************************************************/
#define DisableIntDMACH5                		(IEC3bits.DMA5IE = 0)

/***********************************************************************
Macro      : SetPriorityIntDMACH5(priority)
Overview   : This macro sets priority for DMA Channel 5 interrupt.
Parameters : priority - This input parameter is the level of interrupt priority
Remarks    : This macro sets DMA Channel 5 Interrupt Priority bits of Interrupt
             Priority Control register.
************************************************************************/
#define SetPriorityIntDMACH5(priority)     	(IPC15bits.DMA5IP = priority)

/********************************************************************
Macro       : DMACH5_Clear_Intr_Status_Bit
Overview    : Macro to Clear DMA Channel 5 Interrupt Status bit
Parameters  : None
Remarks     : None
*******************************************************************/
#define DMACH5_Clear_Intr_Status_Bit 			(IFS3bits.DMA5IF = 0)
 
 /************************************************************************
Macro       : EnableDMA
Overview    : This function enables the DMA module
Parameters  : None
Remarks     : None.
**************************************************************************/
#define EnableDMA                				(DMACONbits.DMAEN = 1)

/************************************************************************
Macro       : DisableDMA
Overview    : This function disables the DMA module
Parameters  : None
Remarks     : None.
**************************************************************************/
#define DisableDMA                				(DMACONbits.DMAEN = 0)
 
 /************************************************************************
Macro       : EnableSoftwareTrig0
Overview    : This function triggers the DMA operation for Channel 0
Parameters  : None
Remarks     : None.
**************************************************************************/
#define EnableSoftwareTrig0                		(DMACH0bits.CHREQ = 1)

/************************************************************************
Macro       : DisableSoftwareTrig0
Overview    : This function disables DMA operation for Channel 0 
Parameters  : None
Remarks     : None.
**************************************************************************/
#define DisableSoftwareTrig0                	 (DMACH0bits.CHREQ = 0)
 
/************************************************************************
Macro       : DMA0HighAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 0 Upper Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA0HighAddLmt_Status_Bit      				DMAINT0bits.HIGHIF

 /************************************************************************
Macro       : DMA0LowAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 0 Lower Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA0LowAddLmt_Status_Bit      				DMAINT0bits.LOWIF

/************************************************************************
Macro       : DMA0Complete_Status_Bit
Overview    : Returns the status of completed operation of DMA Channel 0  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA0Complete_Status_Bit      				DMAINT0bits.DONEIF

/************************************************************************
Macro       : DMA0HalfWaterMrk_Status_Bit
Overview    : Returns the status of DMA Channel 0 where DMACNT has 
			  reached the halfway point to 0000h 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA0HalfWaterMrk_Status_Bit      			DMAINT0bits.HALFIF

/************************************************************************
Macro       : DMA0ChanOvrrun_Status_Bit
Overview    : Returns the status of DMA Channel 0 Upper Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA0ChanOvrrun_Status_Bit      				DMAINT0bits.OVRUNIF

/************************************************************************
Macro       : EnableSoftwareTrig1
Overview    : This function triggers the DMA operation for Channel 1
Parameters  : None
Remarks     : None.
**************************************************************************/
#define EnableSoftwareTrig1                		(DMACH1bits.CHREQ = 1)

/************************************************************************
Macro       : DisableSoftwareTrig1
Overview    : This function disables DMA operation for Channel 1 
Parameters  : None
Remarks     : None.
**************************************************************************/
#define DisableSoftwareTrig1                	 (DMACH1bits.CHREQ = 0)

 /************************************************************************
Macro       : DMA1HighAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 1 Upper Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA1HighAddLmt_Status_Bit      				DMAINT1bits.HIGHIF

 /************************************************************************
Macro       : DMA1LowAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 1 Lower Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA1LowAddLmt_Status_Bit      				DMAINT1bits.LOWIF

/************************************************************************
Macro       : DMA1Complete_Status_Bit
Overview    : Returns the status of completed operation of DMA Channel 1  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA1Complete_Status_Bit      				DMAINT1bits.DONEIF

/************************************************************************
Macro       : DMA1HalfWaterMrk_Status_Bit
Overview    : Returns the status of DMA Channel 1 where DMACNT has 
			  reached the halfway point to 0000h 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA1HalfWaterMrk_Status_Bit      			DMAINT1bits.HALFIF

/************************************************************************
Macro       : DMA1ChanOvrrun_Status_Bit
Overview    : Returns the status of DMA Channel 1 that it is triggered 
			  while completing the operation  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA1ChanOvrrun_Status_Bit      				DMAINT1bits.OVRUNIF

/************************************************************************
Macro       : EnableSoftwareTrig2
Overview    : This function triggers the DMA operation for Channel 2
Parameters  : None
Remarks     : None.
**************************************************************************/
#define EnableSoftwareTrig2                		(DMACH2bits.CHREQ = 1)

/************************************************************************
Macro       : DisableSoftwareTrig2
Overview    : This function disables DMA operation for Channel 2 
Parameters  : None
Remarks     : None.
**************************************************************************/
#define DisableSoftwareTrig2                	 (DMACH2bits.CHREQ = 0)

 /************************************************************************
Macro       : DMA2HighAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 2 Upper Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA2HighAddLmt_Status_Bit      				DMAINT2bits.HIGHIF

 /************************************************************************
Macro       : DMA2LowAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 2 Lower Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA2LowAddLmt_Status_Bit      				DMAINT2bits.LOWIF

/************************************************************************
Macro       : DMA2Complete_Status_Bit
Overview    : Returns the status of completed operation of DMA Channel 2  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA2Complete_Status_Bit      				DMAINT2bits.DONEIF

/************************************************************************
Macro       : DMA2HalfWaterMrk_Status_Bit
Overview    : Returns the status of DMA Channel 2 where DMACNT has 
			  reached the halfway point to 0000h 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA2HalfWaterMrk_Status_Bit      			DMAINT2bits.HALFIF

/************************************************************************
Macro       : DMA2ChanOvrrun_Status_Bit
Overview    : Returns the status of DMA Channel 2 that it is 
              triggered while completing the operation 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA2ChanOvrrun_Status_Bit      				DMAINT2bits.OVRUNIF

/************************************************************************
Macro       : EnableSoftwareTrig3
Overview    : This function triggers the DMA operation for Channel 3
Parameters  : None
Remarks     : None.
**************************************************************************/
#define EnableSoftwareTrig3                		(DMACH3bits.CHREQ = 1)

/************************************************************************
Macro       : DisableSoftwareTrig3
Overview    : This function disables DMA operation for Channel 3 
Parameters  : None
Remarks     : None.
**************************************************************************/
#define DisableSoftwareTrig3                	 (DMACH3bits.CHREQ = 0)

/************************************************************************
Macro       : DMA3HighAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 3 Upper Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA3HighAddLmt_Status_Bit      				DMAINT3bits.HIGHIF

 /************************************************************************
Macro       : DMA3LowAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 3 Lower Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA3LowAddLmt_Status_Bit      				DMAINT3bits.LOWIF

/************************************************************************
Macro       : DMA3Complete_Status_Bit
Overview    : Returns the status of completed operation of DMA Channel 3  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA3Complete_Status_Bit      				DMAINT3bits.DONEIF

/************************************************************************
Macro       : DMA3HalfWaterMrk_Status_Bit
Overview    : Returns the status of DMA Channel 3 where DMACNT has 
			  reached the halfway point to 0000h 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA3HalfWaterMrk_Status_Bit      			DMAINT3bits.HALFIF

/************************************************************************
Macro       : DMA3ChanOvrrun_Status_Bit
Overview    : Returns the status of DMA Channel 3 that it is triggered 
		      while completing the operation  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA3ChanOvrrun_Status_Bit      				DMAINT3bits.OVRUNIF

/************************************************************************
Macro       : EnableSoftwareTrig4
Overview    : This function triggers the DMA operation for Channel 4
Parameters  : None
Remarks     : None.
**************************************************************************/
#define EnableSoftwareTrig4                		(DMACH4bits.CHREQ = 1)

/************************************************************************
Macro       : DisableSoftwareTrig4
Overview    : This function disables DMA operation for Channel 4 
Parameters  : None
Remarks     : None.
**************************************************************************/
#define DisableSoftwareTrig4                	 (DMACH4bits.CHREQ = 0)

/************************************************************************
Macro       : DMA4HighAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 4 Upper Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA4HighAddLmt_Status_Bit      				DMAINT4bits.HIGHIF

 /************************************************************************
Macro       : DMA4LowAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 4 Lower Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA4LowAddLmt_Status_Bit      				DMAINT4bits.LOWIF

/************************************************************************
Macro       : DMA4Complete_Status_Bit
Overview    : Returns the status of completed operation of DMA Channel 4  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA4Complete_Status_Bit      				DMAINT4bits.DONEIF

/************************************************************************
Macro       : DMA4HalfWaterMrk_Status_Bit
Overview    : Returns the status of DMA Channel 4 where DMACNT has 
			  reached the halfway point to 0000h 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA4HalfWaterMrk_Status_Bit      			DMAINT4bits.HALFIF

/************************************************************************
Macro       : DMA4ChanOvrrun_Status_Bit
Overview    : Returns the status of DMA Channel 4 that it is triggered 
			  while completing the operation 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA4ChanOvrrun_Status_Bit      				DMAINT4bits.OVRUNIF

/************************************************************************
Macro       : EnableSoftwareTrig5
Overview    : This function triggers the DMA operation for Channel 5
Parameters  : None
Remarks     : None.
**************************************************************************/
#define EnableSoftwareTrig5                		(DMACH5bits.CHREQ = 1)

/************************************************************************
Macro       : DisableSoftwareTrig5
Overview    : This function disables DMA operation for Channel 5 
Parameters  : None
Remarks     : None.
**************************************************************************/
#define DisableSoftwareTrig5                	 (DMACH5bits.CHREQ = 0)

/************************************************************************
Macro       : DMA5HighAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 5 Upper Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA5HighAddLmt_Status_Bit      				DMAINT5bits.HIGHIF

 /************************************************************************
Macro       : DMA5LowAddLmt_Status_Bit
Overview    : Returns the status of DMA Channel 5 Lower Limit Interrupt 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA5LowAddLmt_Status_Bit      				DMAINT5bits.LOWIF

/************************************************************************
Macro       : DMA5Complete_Status_Bit
Overview    : Returns the status of completed operation of DMA Channel 5  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA5Complete_Status_Bit      				DMAINT5bits.DONEIF

/************************************************************************
Macro       : DMA5HalfWaterMrk_Status_Bit
Overview    : Returns the status of DMA Channel 5 where DMACNT has 
			  reached the halfway point to 0000h 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA5HalfWaterMrk_Status_Bit      			DMAINT5bits.HALFIF

/************************************************************************
Macro       : DMA5ChanOvrrun_Status_Bit
Overview    : Returns the status of DMA Channel 5 that it is triggered 
			  while completing the operation 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define DMA5ChanOvrrun_Status_Bit      				DMAINT5bits.OVRUNIF

#if defined (dma_v1_1) || defined (dma_v1_2) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define OpenDMA0  OpenDMA0_v1
#define OpenDMA1  OpenDMA1_v1
#define OpenDMA2  OpenDMA2_v1
#define OpenDMA3  OpenDMA3_v1
#define OpenDMA4  OpenDMA4_v1
#define OpenDMA5  OpenDMA5_v1
#define CloseDMA0 CloseDMA0_v1
#define CloseDMA1 CloseDMA1_v1
#define CloseDMA2 CloseDMA2_v1
#define CloseDMA3 CloseDMA3_v1
#define CloseDMA4 CloseDMA4_v1
#define CloseDMA5 CloseDMA5_v1
#endif
/* Turn on DMA Channel 0 */
void __attribute__ ((section (".libperi")))OpenDMA0_v1(unsigned int config1,unsigned int config2,unsigned int config3);

/* Turn on DMA Channel 1 */
void __attribute__ ((section (".libperi")))OpenDMA1_v1(unsigned int config1,unsigned int config2,unsigned int config3);

/* Turn on DMA Channel 2 */
void __attribute__ ((section (".libperi")))OpenDMA2_v1(unsigned int config1,unsigned int config2,unsigned int config3);

/* Turn on DMA Channel 3 */
void __attribute__ ((section (".libperi")))OpenDMA3_v1(unsigned int config1,unsigned int config2,unsigned int config3);

/* Turn on DMA Channel 4 */
void __attribute__ ((section (".libperi")))OpenDMA4_v1(unsigned int config1,unsigned int config2,unsigned int config3);

/* Turn on DMA Channel 5 */
void __attribute__ ((section (".libperi")))OpenDMA5_v1(unsigned int config1,unsigned int config2,unsigned int config3);

/* Turn off DMA Channel 0 */
void __attribute__ ((section (".libperi")))CloseDMA0_v1(void);

/* Turn off DMA Channel 1 */
void __attribute__ ((section (".libperi")))CloseDMA1_v1(void);

/* Turn off DMA Channel 2 */
void __attribute__ ((section (".libperi")))CloseDMA2_v1(void);

/* Turn off DMA Channel 3 */
void __attribute__ ((section (".libperi")))CloseDMA3_v1(void);

/* Turn off DMA Channel 4 */
void __attribute__ ((section (".libperi")))CloseDMA4_v1(void);

/* Turn off DMA Channel 5 */
void __attribute__ ((section (".libperi")))CloseDMA5_v1(void);
#endif

/* Configure DMA Channel 0 */
void __attribute__ ((section (".libperi")))ConfigIntDMA0(unsigned int config);

/* Configure DMA Channel 1 */
void __attribute__ ((section (".libperi")))ConfigIntDMA1(unsigned int config);

/* Configure DMA Channel 2 */
void __attribute__ ((section (".libperi")))ConfigIntDMA2(unsigned int config);

/* Configure DMA Channel 3 */
void __attribute__ ((section (".libperi")))ConfigIntDMA3(unsigned int config);

/* Configure DMA Channel 4 */
void __attribute__ ((section (".libperi")))ConfigIntDMA4(unsigned int config);

/* Configure DMA Channel 5 */
void __attribute__ ((section (".libperi")))ConfigIntDMA5(unsigned int config);


/*Set the DMA RAM Area */
void __attribute__ ((section (".libperi")))SetDMARAM(unsigned short int DMAL,unsigned short int DMAH);


/* Select the Trigger Source to start DMA Transfer for Channel 0*/
void __attribute__ ((section (".libperi")))TriggerSrc0(unsigned int Trigger_Select);

/* Select the Trigger Source to start DMA Transfer for Channel 1*/
void __attribute__ ((section (".libperi")))TriggerSrc1(unsigned int Trigger_Select);

/* Select the Trigger Source to start DMA Transfer for Channel 2*/
void __attribute__ ((section (".libperi")))TriggerSrc2(unsigned int Trigger_Select);

/* Select the Trigger Source to start DMA Transfer for Channel 3*/
void __attribute__ ((section (".libperi")))TriggerSrc3(unsigned int Trigger_Select);

/* Select the Trigger Source to start DMA Transfer for Channel 4*/
void __attribute__ ((section (".libperi")))TriggerSrc4(unsigned int Trigger_Select);

/* Select the Trigger Source to start DMA Transfer for Channel 5*/
void __attribute__ ((section (".libperi")))TriggerSrc5(unsigned int Trigger_Select);


/* Load the DMA Transfer Count ,DMA Source and DMA Destination Address for Channel 0*/
void __attribute__ ((section (".libperi")))LoadDMA0(unsigned short int Count,unsigned char* DMA_Src,unsigned char* DMA_Dst);

/* Load the DMA Transfer Count ,DMA Source and DMA Destination Address for Channel 1*/
void __attribute__ ((section (".libperi")))LoadDMA1(unsigned short int Count,unsigned char* DMA_Src,unsigned char* DMA_Dst);

/* Load the DMA Transfer Count ,DMA Source and DMA Destination Address for Channel 2*/
void __attribute__ ((section (".libperi")))LoadDMA2(unsigned short int Count,unsigned char* DMA_Src,unsigned char* DMA_Dst);

/* Load the DMA Transfer Count ,DMA Source and DMA Destination Address for Channel 3*/
void __attribute__ ((section (".libperi")))LoadDMA3(unsigned short int Count,unsigned char* DMA_Src,unsigned char* DMA_Dst);

/* Load the DMA Transfer Count ,DMA Source and DMA Destination Address for Channel 4*/
void __attribute__ ((section (".libperi")))LoadDMA4(unsigned short int Count,unsigned char* DMA_Src,unsigned char* DMA_Dst);

/* Load the DMA Transfer Count ,DMA Source and DMA Destination Address for Channel 5*/
void __attribute__ ((section (".libperi")))LoadDMA5(unsigned short int Count,unsigned char* DMA_Src,unsigned char* DMA_Dst);


#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif 

#endif
