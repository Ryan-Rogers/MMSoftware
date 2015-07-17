
#ifndef I2C_H /*I2C_H  */
#define I2C_H

/******************************************************************************
 *
 *                  I2C PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        i2c.h
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
#if defined (i2c_v1_1) || defined (i2c_v1_2) || defined (i2c_v1_3) || defined (i2c_v1_4)|| defined (i2c_v2_1) || defined (i2c_v3_1) || defined (i2c_v3_2) || defined (LIB_BUILD)

#if defined (i2c_v1_1) || defined (i2c_v1_2) || defined (i2c_v1_3) || defined (i2c_v1_4)|| defined (i2c_v2_1) 
#define I2C1RCV_VALUE               0x0000
#define I2C1TRN_VALUE               0x00FF
#define I2C1BRG_VALUE               0x0000
#define I2C1CON_VALUE               0x0000
#define I2C1STAT_VALUE              0x0000
#define I2C1ADD_VALUE               0x0000

#define I2C2RCV_VALUE               0x0000
#define I2C2TRN_VALUE               0x00FF
#define I2C2BRG_VALUE               0x0000
#define I2C2CON_VALUE               0x0000
#define I2C2STAT_VALUE              0x0000
#define I2C2ADD_VALUE               0x0000

#define I2C3RCV_VALUE               0x0000
#define I2C3TRN_VALUE               0x00FF
#define I2C3BRG_VALUE               0x0000
#define I2C3CON_VALUE               0x0000
#define I2C3STAT_VALUE              0x0000
#define I2C3ADD_VALUE               0x0000

#if defined (i2c_v2_1)

#define I2C1CON_VALUE               0x0000
#define I2C1STAT_VALUE              0x0000
#define I2C1MSK_VALUE				0x0000

#endif
#endif

#if defined (i2c_v3_1) || defined (i2c_v3_2)
#define SSP1BUF_VALUE          0x0000
#define SSP1CON1_VALUE         0x0000
#define SSP1CON2_VALUE         0x0000
#define SSP1CON3_VALUE         0x0000
#define SSP1STAT_VALUE         0x0000
#define SSP1ADD_VALUE          0x0000
#define SSP1MSK_VALUE          0x0000
#if defined (i2c_v3_2)
#define SSP2BUF_VALUE          0x0000
#define SSP2CON1_VALUE         0x0000
#define SSP2CON2_VALUE         0x0000
#define SSP2CON3_VALUE         0x0000
#define SSP2STAT_VALUE         0x0000
#define SSP2ADD_VALUE          0x0000
#define SSP2MSK_VALUE          0x0000
#endif
#endif


#if defined (i2c_v1_1) || defined (i2c_v1_2) || defined (i2c_v1_3) || defined (i2c_v1_4)|| defined (i2c_v2_1) 
#ifndef USE_AND_OR /* Format for AND_OR based bit setting */
/* I2CxCON register Configuration bit definitions */
#define I2C_ON                      0xFFFF /*I2C module enabled */
#define I2C_OFF                     0x7FFF /*I2C module disabled */

#define I2C_IDLE_STOP               0xFFFF /*stop I2C module in Idle mode */
#define I2C_IDLE_CON                0xDFFF /*continue I2C module in Idle mode */

#define I2C_CLK_REL                 0xFFFF /*release clock */
#define I2C_CLK_HLD                 0xEFFF /*hold clock  */

#define I2C_IPMI_EN                 0xFFFF /*IPMI mode enabled */
#define I2C_IPMI_DIS                0xF7FF /*IPMI mode not enabled */

#define I2C_10BIT_ADD               0xFFFF /*I2CADD is 10-bit address */
#define I2C_7BIT_ADD                0xFBFF /*I2CADD is 7-bit address */

#define I2C_SLW_DIS                 0xFFFF /*Disable Slew Rate Control for 100KHz */
#define I2C_SLW_EN                  0xFDFF /*Enable Slew Rate Control for 400KHz */

#define I2C_SM_EN                   0xFFFF /*Enable SM bus specification */
#define I2C_SM_DIS                  0xFEFF /*Disable SM bus specification */

#define I2C_GCALL_EN                0xFFFF /*Enable Interrupt when General call address is received. */
#define I2C_GCALL_DIS               0xFF7F /*Disable General call address. */

#define I2C_STR_EN                  0xFFFF /*Enable clock stretching */
#define I2C_STR_DIS                 0xFFBF/*disable clock stretching */

#define I2C_ACK                     0xFFDF /*Transmit 0 to send ACK as acknowledge */
#define I2C_NACK                    0xFFFF /*Transmit 1 to send NACK as acknowledge*/

#define I2C_ACK_EN                  0xFFFF/*Initiate Acknowledge sequence */
#define I2C_ACK_DIS                 0xFFEF /*Acknowledge condition Idle */

#define I2C_RCV_EN                  0xFFFF /*Enable receive mode */
#define I2C_RCV_DIS                 0xFFF7 /*Receive sequence not in progress */
 
#define I2C_STOP_EN                 0xFFFF /*Initiate Stop sequence */
#define I2C_STOP_DIS                0xFFFB /*Stop condition Idle */

#define I2C_RESTART_EN              0xFFFF /*Initiate Restart sequence */
#define I2C_RESTART_DIS             0xFFFD /*Start condition Idle */

#define I2C_START_EN                0xFFFF /*Initiate Start sequence */
#define I2C_START_DIS               0xFFFE /*Start condition Idle */

/* Priority for Slave I2C1 Interrupt */
#define SI2C_INT_PRI_7              0xFFFF /*Slave I2C Interrupt Priority 0*/
#define SI2C_INT_PRI_6              0xFFFE /*Slave I2C Interrupt Priority 1*/
#define SI2C_INT_PRI_5              0xFFFD /*Slave I2C Interrupt Priority 2*/
#define SI2C_INT_PRI_4              0xFFFC /*Slave I2C Interrupt Priority 3*/
#define SI2C_INT_PRI_3              0xFFFB /*Slave I2C Interrupt Priority 4*/
#define SI2C_INT_PRI_2              0xFFFA /*Slave I2C Interrupt Priority 5*/
#define SI2C_INT_PRI_1              0xFFF9 /*Slave I2C Interrupt Priority 6*/
#define SI2C_INT_PRI_0              0xFFF8 /*Slave I2C Interrupt Priority 7*/

/* Slave I2C1 Interrupt Enable/Disable */
#define SI2C_INT_ON                 0xFFFF /*Slave I2C Interrupt enable*/
#define SI2C_INT_OFF                0xFFF7 /*Slave I2C Interrupt disable*/

/* Priority for Master I2C1 Interrupt */
#define MI2C_INT_PRI_7              0xFFFF /*Master I2C Interrupt Priority 0*/
#define MI2C_INT_PRI_6              0xFFEF /*Master I2C Interrupt Priority 1*/
#define MI2C_INT_PRI_5              0xFFDF /*Master I2C Interrupt Priority 2*/
#define MI2C_INT_PRI_4              0xFFCF /*Master I2C Interrupt Priority 3*/
#define MI2C_INT_PRI_3              0xFFBF /*Master I2C Interrupt Priority 4*/
#define MI2C_INT_PRI_2              0xFFAF /*Master I2C Interrupt Priority 5*/
#define MI2C_INT_PRI_1              0xFF9F /*Master I2C Interrupt Priority 6*/
#define MI2C_INT_PRI_0              0xFF8F /*Master I2C Interrupt Priority 7*/

/* Master I2C1 Interrupt Enable/Disable */
#define MI2C_INT_ON                 0xFFFF /*Master I2C Interrupt enabled*/
#define MI2C_INT_OFF                0xFF7F /*Master I2C Interrupt disabled*/



#else /* Format for backward compatibility (AND based bit setting). */

// I2CxCON Register Configuration Bit Definitions
#define I2C_ON           			0x8000 /*I2C module enabled */
#define I2C_OFF          			0x0000 /*I2C module disabled */
#define I2C_ON_OFF_MASK  			(~I2C_ON)

#define I2C_IDLE_STOP    			0x2000 /*stop I2C module in Idle mode */
#define I2C_IDLE_CON     			0x0000 /*continue I2C module in Idle mode */
#define I2C_IDLE_MASK    			(~I2C_IDLE_STOP)

#define I2C_CLK_REL      			0x1000 /*release clock */
#define I2C_CLK_HLD      			0x0000 /*hold clock  */
#define I2C_CLK_MASK     			(~I2C_CLK_REL)

#define I2C_IPMI_EN      			0x0800 /*IPMI mode enabled */
#define I2C_IPMI_DIS     			0x0000 /*IPMI mode not enabled */
#define I2C_IPMI_EN_DIS_MASK    	(~I2C_IPMI_EN)

#define I2C_10BIT_ADD    			0x0400 /*I2CADD is 10-bit address */
#define I2C_7BIT_ADD     			0x0000 /*I2CADD is 7-bit address */
#define I2C_10BIT_7BIT_MASK    		(~I2C_10BIT_ADD)

#define I2C_SLW_DIS       			0x0200 /*Disable Slew Rate Control for 100KHz */
#define I2C_SLW_EN        			0x0000 /*Enable Slew Rate Control for 400KHz */
#define I2C_SLW_EN_DIS_MASK     	(~I2C_SLW_DIS)

#define I2C_SM_EN        			0x0100 /*Enable SM bus specification */
#define I2C_SM_DIS       			0x0000 /*Disable SM bus specification */
#define I2C_SM_EN_DIS_MASK      	(~I2C_SM_EN)

#define I2C_GCALL_EN     			0x0080 /*Enable Interrupt when General call address is received. */
#define I2C_GCALL_DIS    			0x0000 /*Disable General call address. */
#define I2C_GCALL_EN_DIS_MASK   	(~I2C_GCALL_EN)

#define I2C_STR_EN       			0x0040 /*Enable clock stretching */
#define I2C_STR_DIS      			0x0000 /*disable clock stretching */
#define I2C_STR_EN_DIS_MASK     	(~I2C_STR_EN)

#define I2C_NACK         			0x0020 /*Transmit 0 to send ACK as acknowledge */
#define I2C_ACK         			0x0000 /*Transmit 1 to send NACK as acknowledge*/
#define I2C_ACK_MASK     			(~I2C_NACK)

#define I2C_ACK_EN       			0x0010 /*Initiate Acknowledge sequence */
#define I2C_ACK_DIS      			0x0000 /*Acknowledge condition Idle */
#define I2C_TX_ACK_MASK  			(~I2C_ACK_EN)

#define I2C_RCV_EN       			0x0008 /*Enable receive mode */
#define I2C_RCV_DIS      			0x0000 /*Receive sequence not in progress */
#define I2C_RCV_EN_DIS_MASK         (~I2C_RCV_EN)

#define I2C_STOP_EN      			0x0004 /*Initiate Stop sequence */
#define I2C_STOP_DIS    			0x0000 /*Stop condition Idle */
#define I2C_STOP_EN_DIS_MASK    	(~I2C_STOP_EN)

#define I2C_RESTART_EN   			0x0002 /*Initiate Restart sequence */
#define I2C_RESTART_DIS  			0x0000 /*Start condition Idle */
#define I2C_RESTART_MASK 			(~I2C_RESTART_EN)

#define I2C_START_EN     			0x0001 /*Initiate Start sequence */
#define I2C_START_DIS    			0x0000 /*Start condition Idle */
#define I2C_START_MASK   			(~I2C_START_EN)

#define SI2C_INT_PRI_0      		0x0000 /*Slave I2C Interrupt Priority 0*/
#define SI2C_INT_PRI_1      		0x0001 /*Slave I2C Interrupt Priority 1*/
#define SI2C_INT_PRI_2     			0x0002 /*Slave I2C Interrupt Priority 2*/
#define SI2C_INT_PRI_3      		0x0003 /*Slave I2C Interrupt Priority 3*/
#define SI2C_INT_PRI_4      		0x0004 /*Slave I2C Interrupt Priority 4*/
#define SI2C_INT_PRI_5      		0x0005 /*Slave I2C Interrupt Priority 5*/
#define SI2C_INT_PRI_6      		0x0006 /*Slave I2C Interrupt Priority 6*/
#define SI2C_INT_PRI_7      		0x0007 /*Slave I2C Interrupt Priority 7*/
#define SI2C_SRC_DIS        		SI2C_INT_PRI_0 /*Slave I2C Source is disabled*/
#define SI2C_INT_PRI_MASK  			(~SI2C_INT_PRI_7)

#define SI2C_INT_ON     			0x0008 /*Slave I2C Interrupt enable*/
#define SI2C_INT_OFF    			0x0000 /*Slave I2C Interrupt disable*/
#define SI2C_INT_MASK   			(~SI2C_INT_ON)

#define MI2C_INT_PRI_0  			0x0000 /*Master I2C Interrupt Priority 0*/
#define MI2C_INT_PRI_1  			0x0010 /*Master I2C Interrupt Priority 1*/
#define MI2C_INT_PRI_2  			0x0020 /*Master I2C Interrupt Priority 2*/
#define MI2C_INT_PRI_3  			0x0030 /*Master I2C Interrupt Priority 3*/
#define MI2C_INT_PRI_4  			0x0040 /*Master I2C Interrupt Priority 4*/
#define MI2C_INT_PRI_5  			0x0050 /*Master I2C Interrupt Priority 5*/
#define MI2C_INT_PRI_6  			0x0060 /*Master I2C Interrupt Priority 6*/
#define MI2C_INT_PRI_7  			0x0070 /*Master I2C Interrupt Priority 7*/
#define MI2C_SRC_DIS    			MI2C_INT_PRI_0 /*Master I2C Source is disabled*/
#define MI2C_INT_PRI_MASK  			(~MI2C_INT_PRI_7)

// Master I2C Interrupt Enable/Disable
#define MI2C_INT_ON     			0x0080 /*Master I2C Interrupt enabled*/
#define MI2C_INT_OFF    			0x0000 /*Master I2C Interrupt disabled*/
#define MI2C_INT_MASK   			(~MI2C_INT_ON)

#endif /* USE_AND_OR */

#if defined (i2c_v2_1)

#ifndef USE_AND_OR

#define I2C_AMSK9_EN				0xFFFF /* Enable masking for bit 9 of incoming message address; bit match not required in this position */
#define I2C_AMSK9_DIS				0xFDFF /* Disable masking for bit 9; bit match required in this position */

#define I2C_AMSK8_EN				0xFFFF /* Enable masking for bit 8 of incoming message address; bit match not required in this position */
#define I2C_AMSK8_DIS				0xFEFF /* Disable masking for bit 8; bit match required in this position */

#define I2C_AMSK7_EN				0xFFFF /* Enable masking for bit 7 of incoming message address; bit match not required in this position */
#define I2C_AMSK7_DIS				0xFF7F /* Disable masking for bit 7; bit match required in this position */

#define I2C_AMSK6_EN				0xFFFF /* Enable masking for bit 6 of incoming message address; bit match not required in this position */
#define I2C_AMSK6_DIS				0xFFBF /* Disable masking for bit 6; bit match required in this position */

#define I2C_AMSK5_EN				0xFFFF /* Enable masking for bit 5 of incoming message address; bit match not required in this position */
#define I2C_AMSK5_DIS				0xFFDF /* Disable masking for bit 5; bit match required in this position */

#define I2C_AMSK4_EN				0xFFFF /* Enable masking for bit 4 of incoming message address; bit match not required in this position */
#define I2C_AMSK4_DIS				0xFFEF /* Disable masking for bit 4; bit match required in this position */

#define I2C_AMSK3_EN				0xFFFF /* Enable masking for bit 3 of incoming message address; bit match not required in this position */
#define I2C_AMSK3_DIS				0xFFF7 /* Disable masking for bit 3; bit match required in this position */

#define I2C_AMSK2_EN				0xFFFF /* Enable masking for bit 2 of incoming message address; bit match not required in this position */
#define I2C_AMSK2_DIS				0xFFFB /* Disable masking for bit 2; bit match required in this position */

#define I2C_AMSK1_EN				0xFFFF /* Enable masking for bit 1 of incoming message address; bit match not required in this position */
#define I2C_AMSK1_DIS				0xFFFD /* Disable masking for bit 1; bit match required in this position */

#define I2C_AMSK0_EN				0xFFFF /* Enable masking for bit 0 of incoming message address; bit match not required in this position */
#define I2C_AMSK0_DIS				0xFFFE /* Disable masking for bit 0; bit match required in this position */
#define I2C_AMSK_MASK				(~I2C_AMSK9_EN)



#else

#define I2C_AMSK9_EN				0x0200 /* Enable masking for bit 9 of incoming message address; bit match not required in this position */
#define I2C_AMSK9_DIS				0x0000 /* Disable masking for bit 9; bit match required in this position */

#define I2C_AMSK8_EN				0x0100 /* Enable masking for bit 8 of incoming message address; bit match not required in this position */
#define I2C_AMSK8_DIS				0x0000 /* Disable masking for bit 8; bit match required in this position */

#define I2C_AMSK7_EN				0x0080 /* Enable masking for bit 7 of incoming message address; bit match not required in this position */
#define I2C_AMSK7_DIS				0x0000 /* Disable masking for bit 7; bit match required in this position */

#define I2C_AMSK6_EN				0x0400 /* Enable masking for bit 6 of incoming message address; bit match not required in this position */
#define I2C_AMSK6_DIS				0x0000 /* Disable masking for bit 6; bit match required in this position */

#define I2C_AMSK5_EN				0x0200 /* Enable masking for bit 5 of incoming message address; bit match not required in this position */
#define I2C_AMSK5_DIS				0x0000 /* Disable masking for bit 5; bit match required in this position */

#define I2C_AMSK4_EN				0x0100 /* Enable masking for bit 4 of incoming message address; bit match not required in this position */
#define I2C_AMSK4_DIS				0x0000 /* Disable masking for bit 4; bit match required in this position */

#define I2C_AMSK3_EN				0x0008 /* Enable masking for bit 3 of incoming message address; bit match not required in this position */
#define I2C_AMSK3_DIS				0x0000 /* Disable masking for bit 3; bit match required in this position */

#define I2C_AMSK2_EN				0x0004 /* Enable masking for bit 2 of incoming message address; bit match not required in this position */
#define I2C_AMSK2_DIS				0x0000 /* Disable masking for bit 2; bit match required in this position */

#define I2C_AMSK1_EN				0x0002 /* Enable masking for bit 1 of incoming message address; bit match not required in this position */
#define I2C_AMSK1_DIS				0x0000 /* Disable masking for bit 1; bit match required in this position */

#define I2C_AMSK0_EN				0x0001 /* Enable masking for bit 0 of incoming message address; bit match not required in this position */
#define I2C_AMSK0_DIS				0x0000 /* Disable masking for bit 0; bit match required in this position */
#define I2C_AMSK_MASK				(~I2C_AMSK9_EN)

#endif
#endif
#endif

#if defined (i2c_v3_1) || defined (i2c_v3_2)
#ifndef USE_AND_OR /* Format for AND_OR based bit setting */
/* SSPxSTAT REGISTER */
#define   I2C_SLEW_OFF  			0xFF  	/* Slew rate disabled for 100kHz mode and 1 MHz*/
#define   I2C_SLEW_ON   			0x7F  	/* Slew rate enabled for 400kHz mode  */

#define   I2C_SMBUS_ENABLE   	  	0xFF	/* Enable SMBus specific inputs */
#define   I2C_SMBUS_DISABLE   	  	0xBF    /* Disable SMBus specific inputs */	

/* SSPxCON1 REGISTER */
#define   I2C_MSSP_ENABLE    		0xFF 	/* Enable serial port and configures SDA, SCL, SDI*/
#define   I2C_MSSP_DISABLE    		0xDF  	/* Enable serial port */

#define   I2C_SLAVE_CLK_RELSE		0xFF    /* SCLx release clock for slave mode */
#define   I2C_SLAVE_CLK_HOLD		0xEF    /* SCLx release clock for slave mode */

#define   I2C_SLAVE_7   			0xF6     	/* I2C Slave mode, 7-bit address*/
#define   I2C_SLAVE_10  			0xF7  		/* I2C Slave mode, 10-bit address*/
#define   I2C_MASTER    			0xF8     	/* I2C Master mode */
#define   I2C_MASTER_FIRMW			0xFB		/*I2C Firmware Controlled Master mode (slave Idle) */
#define   I2C_SLAVE_7_STSP_INT 		0xFE		/*2C Slave mode, 7-bit address with Start and Stop bit interrupts enabled */
#define   I2C_SLAVE_10_STSP_INT 	0xFF		/*I2C Slave mode, 10-bit address with Start and Stop bit interrupts enabled */

/* SSPxCON2 REGISTER */
#define I2C_GEN_CALL_ENABLE 		0xFF      /* Enable interrupt when a general call address is received in the SSPSR */
#define I2C_GEN_CALL_DISABLE		0x7F	  /* General call address disabled	*/

#define I2C_ACK_ENABLE				0xFF	  /* Initiate acknowledge sequence on SDA and SCL pins and transmit ACKDT data bit. */
#define I2C_ACK_IDLE				0xEF	  /* Acknowledge sequence idle */

#define I2C_RECEIVE_ENABLE			0xFF      /* Enables Receive mode for I2C */
#define I2C_RECEIVE_IDLE			0xF7	  /* Receive idle */

#define I2C_STOP_ENABLE				0xFF	 /* Initiate stop condition on SDA and SCL pins */
#define I2C_STOP_IDLE				0xFB	/* Stop condition idle */ 

#define I2C_REP_START_ENABLE		0xFF 	/* Initiate repeated start condition on SDA and SCL pins. */
#define I2C_REP_START_IDLE			0xFD	/* Repeated start condition idle */

#define I2C_MASTR_START_ENABLE		0xFF	/* Initiate start condition on SDA and SCL pins. */
#define I2C_MASTR_START_IDLE		0xFE	/* Start condition idle */
#define I2C_SLAVE_CLK_STRCH_ENABLE	0xFF	/* Clock strecth is enabled for both slave transmit and recieve */
#define I2C_SLAVE_CLK_STRCH_DISABLE	0xFE	/*Clock stretching is disabled */

/*SSPxCON3  REGISTER */
#define I2C_SLV_BUFF_OVRWRT_ENABLE  0xFF   /* SSPxBUF is updated and ACK is generated for a recieved address/data byte , ignoring the state of the SSPxOV bit only if the BF bit =0 */
#define I2C_SLV_BUFF_OVRWRT_DISABLE 0xEF   /* SSPxBUF is only updated when SSpxOV is clear */

#define I2C_SDAx_HOLD_300ns			0xFF	/* Minimun of 300ns hold time on SDAx after falling edge of SCLx */
#define I2C_SDAx_HOLD_100ns			0xFF	/* Minimun of 100ns hold time on SDAx after falling edge of SCLx */

#define I2C_ADD_HOLD_ENABLE			0xFF   /* Following the 8th falling edge of SCLx for a matching received address byte ; CKP bit of SSPxCON1 register will be cleared and the SClx will be held low */
#define I2C_ADD_HOLD_DISABLE        0xFD   /* Address holding is disabled */

#define I2C_DATA_HOLD_ENABLE		0xFF    /* Following the 8th falling edge of SCLx for a received address byte ; slave hardware clears the CKP bit of SSPxCON1 register and the SClx will be held low */
#define I2C_DATA_HOLD_DISABLE		0xFE    /* Data holding is disabled */

/*SSPxADD REGISTER*/
#define  I2C_SLAVE_ADD_GEN 			0x	

/* SSPxMSK REGISTER */
#define I2C_SLV_ADD_MSK0_ENABLE      0xFF    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK0_DISABLE     0xFE    /* Masking of corresponding bit of SSpxADD disabled */

#define I2C_SLV_ADD_MSK1_ENABLE      0xFF    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK1_DISABLE     0xFD    /* Masking of corresponding bit of SSpxADD disabled */

#define I2C_SLV_ADD_MSK2_ENABLE      0xFF    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK2_DISABLE     0xFB    /* Masking of corresponding bit of SSpxADD disabled */

#define I2C_SLV_ADD_MSK3_ENABLE      0xFF    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK3_DISABLE     0xF7    /* Masking of corresponding bit of SSpxADD disabled */
 
#define I2C_SLV_ADD_MSK4_ENABLE      0xFF    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK4_DISABLE     0xEF    /* Masking of corresponding bit of SSpxADD disabled */

#define I2C_SLV_ADD_MSK5_ENABLE      0xFF    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK5_DISABLE     0xDF    /* Masking of corresponding bit of SSpxADD disabled */

#define I2C_SLV_ADD_MSK6_ENABLE      0xFF    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK6_DISABLE     0xBF    /* Masking of corresponding bit of SSpxADD disabled */

#define I2C_SLV_ADD_MSK7_ENABLE      0xFF    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK7_DISABLE     0x7F    /* Masking of corresponding bit of SSpxADD disabled */

/* Priority for  I2C1 Interrupt */
#define I2C_INT_PRI_7              0xFF /*I2C Interrupt Priority 0*/
#define I2C_INT_PRI_6              0xFE /*I2C Interrupt Priority 1*/
#define I2C_INT_PRI_5              0xFD /*I2C Interrupt Priority 2*/
#define I2C_INT_PRI_4              0xFC /*I2C Interrupt Priority 3*/
#define I2C_INT_PRI_3              0xFB /*I2C Interrupt Priority 4*/
#define I2C_INT_PRI_2              0xFA /*I2C Interrupt Priority 5*/
#define I2C_INT_PRI_1              0xF9 /*I2C Interrupt Priority 6*/
#define I2C_INT_PRI_0              0xF8 /*I2C Interrupt Priority 7*/

/* Master I2C1 Interrupt Enable/Disable */
#define I2C_INT_ON                 0xFF /*I2C Interrupt enabled*/
#define I2C_INT_OFF                0xF7 /*I2C Interrupt disabled*/

#else

/* SSPxSTAT REGISTER */
#define   I2C_SLEW_OFF  			0x10  	/* Slew rate disabled for 100kHz mode and 1 MHz*/
#define   I2C_SLEW_ON   			0x00  	/* Slew rate enabled for 400kHz mode  */
#define   I2C_SLEW_MASK      		(~I2C_SLEW_OFF)

#define   I2C_SMBUS_ENABLE   	  	0x40	/* Enable SMBus specific inputs */
#define   I2C_SMBUS_DISABLE   	  	0x00    /* Disable SMBus specific inputs */	
#define   I2C_SMBUS_MASK    		(~I2C_SMBUS_ENABLE)

/* SSPxCON1 REGISTER */
#define   I2C_MSSP_ENABLE    		0x20 	/* Enable serial port and configures SDA, SCL, SDI*/
#define   I2C_MSSP_DISABLE    		0x00  	/* Enable serial port */
#define   I2C_MSSP_MASK			    (~ I2C_MSSP_ENABLE)
									
#define   I2C_SLAVE_CLK_RELSE		0x10    /* SCLx release clock for slave mode */
#define   I2C_SLAVE_CLK_HOLD		0x00    /* SCLx release clock for slave mode */
#define   I2C_SLAVE_CLK_MASK		(~I2C_SLAVE_CLK_RELSE)
									
#define   I2C_SLAVE_7   			0x06     	/* I2C Slave mode, 7-bit address*/
#define   I2C_SLAVE_10  			0x07  		/* I2C Slave mode, 10-bit address*/
#define   I2C_MASTER    			0x08     	/* I2C Master mode */
#define   I2C_MASTER_FIRMW			0x0B		/*I2C Firmware Controlled Master mode (slave Idle) */
#define   I2C_SLAVE_7_STSP_INT 		0x0E		/*2C Slave mode, 7-bit address with Start and Stop bit interrupts enabled */
#define   I2C_SLAVE_10_STSP_INT 	0x0F		/*I2C Slave mode, 10-bit address with Start and Stop bit interrupts enabled */
#define   I2C_SLAVE_MASTER_MASK		(~I2C_SLAVE_10_STSP_INT)
									
/* SSPxCON2 REGISTER */
#define I2C_GEN_CALL_ENABLE 		0x80      /* Enable interrupt when a general call address is received in the SSPSR */
#define I2C_GEN_CALL_DISABLE		0x00	  /* General call address disabled	*/
#define I2C_GEN_CALL_MASK     		(~I2C_GEN_CALL_ENABLE)
									
#define I2C_ACK_ENABLE				0x10	  /* Initiate acknowledge sequence on SDA and SCL pins and transmit ACKDT data bit. */
#define I2C_ACK_IDLE				0x00	  /* Acknowledge sequence idle */
#define I2C_ACK_MASK				(~I2C_ACK_ENABLE)

#define I2C_RECEIVE_ENABLE			0x08      /* Enables Receive mode for I2C */
#define I2C_RECEIVE_IDLE			0x00	  /* Receive idle */
#define I2C_RECEIVE_MASK			(~I2C_RECEIVE_ENABLE)

#define I2C_STOP_ENABLE				0x04	 /* Initiate stop condition on SDA and SCL pins */
#define I2C_STOP_IDLE				0x00	/* Stop condition idle */ 
#define I2C_STOP_MASK				(~I2C_STOP_ENABLE)

#define I2C_REP_START_ENABLE		0x02 	/* Initiate repeated start condition on SDA and SCL pins. */
#define I2C_REP_START_IDLE			0x00	/* Repeated start condition idle */
#define I2C_REP_START_MASK   		(~I2C_REP_START_ENABLE)

#define I2C_MASTR_START_ENABLE		0x01	/* Initiate start condition on SDA and SCL pins. */
#define I2C_MASTR_START_IDLE		0x00	/* Start condition idle */
#define I2C_SLAVE_CLK_STRCH_ENABLE	0x01	/* Clock strecth is enabled for both slave transmit and recieve */
#define I2C_SLAVE_CLK_STRCH_DISABLE	0x00	/*Clock stretching is disabled */
#define I2C_MASTR_SLV_MASK			(~I2C_MASTR_START_ENABLE)

/*SSPxCON3  REGISTER */
#define I2C_SLV_BUFF_OVRWRT_ENABLE  0x10   /* SSPxBUF is updated and ACK is generated for a recieved address/data byte , ignoring the state of the SSPxOV bit only if the BF bit =0 */
#define I2C_SLV_BUFF_OVRWRT_DISABLE 0x00   /* SSPxBUF is only updated when SSpxOV is clear */
#define I2C_SLV_BUFF_OVRWRT_MASK	(~I2C_SLV_BUFF_OVRWRT_ENABLE)	

#define I2C_SDAx_HOLD_300ns			0x08	/* Minimun of 300ns hold time on SDAx after falling edge of SCLx */
#define I2C_SDAx_HOLD_100ns			0x00	/* Minimun of 100ns hold time on SDAx after falling edge of SCLx */
#define I2C_SDAx_HOLD_MASK			(~I2C_SDAx_HOLD_300ns)

#define I2C_ADD_HOLD_ENABLE			0x02   /* Following the 8th falling edge of SCLx for a matching received address byte ; CKP bit of SSPxCON1 register will be cleared and the SClx will be held low */
#define I2C_ADD_HOLD_DISABLE        0x00   /* Address holding is disabled */
#define I2C_ADD_HOLD_MASK			(~I2C_ADD_HOLD_ENABLE)

#define I2C_DATA_HOLD_ENABLE		0x01    /* Following the 8th falling edge of SCLx for a received address byte ; slave hardware clears the CKP bit of SSPxCON1 register and the SClx will be held low */
#define I2C_DATA_HOLD_DISABLE		0x00    /* Data holding is disabled */
#define I2C_DATA_HOLD_MASK			(~I2C_DATA_HOLD_ENABLE)

/*SSPxADD REGISTER*/
#define  I2C_SLAVE_ADD_GEN 
			
/* SSPxMSK REGISTER */
#define I2C_SLV_ADD_MSK0_ENABLE      0x01    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK0_DISABLE     0x00    /* Masking of corresponding bit of SSpxADD disabled */
#define I2C_SLV_ADD_MSK0_MASK		 (~I2C_SLV_ADD_MSK0_ENABLE)	

#define I2C_SLV_ADD_MSK1_ENABLE      0x02    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK1_DISABLE     0x00    /* Masking of corresponding bit of SSpxADD disabled */
#define I2C_SLV_ADD_MSK1_MASK		 (~I2C_SLV_ADD_MSK1_ENABLE)									 	

#define I2C_SLV_ADD_MSK2_ENABLE      0x04    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK2_DISABLE     0x00    /* Masking of corresponding bit of SSpxADD disabled */
#define I2C_SLV_ADD_MSK2_MASK		 (~I2C_SLV_ADD_MSK2_ENABLE)									

#define I2C_SLV_ADD_MSK3_ENABLE      0x08    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK3_DISABLE     0x00    /* Masking of corresponding bit of SSpxADD disabled */
#define I2C_SLV_ADD_MSK3_MASK		 (~I2C_SLV_ADD_MSK3_ENABLE)									 
 
#define I2C_SLV_ADD_MSK4_ENABLE      0x10    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK4_DISABLE     0x00    /* Masking of corresponding bit of SSpxADD disabled */
#define I2C_SLV_ADD_MSK4_MASK		 (~I2C_SLV_ADD_MSK4_ENABLE)									 	

#define I2C_SLV_ADD_MSK5_ENABLE      0x20    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK5_DISABLE     0x00    /* Masking of corresponding bit of SSpxADD disabled */
#define I2C_SLV_ADD_MSK5_MASK		 (~I2C_SLV_ADD_MSK5_ENABLE)									 	

#define I2C_SLV_ADD_MSK6_ENABLE      0x40    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK6_DISABLE     0x00    /* Masking of corresponding bit of SSpxADD disabled */
#define I2C_SLV_ADD_MSK6_MASK		 (~I2C_SLV_ADD_MSK6_ENABLE)									 

#define I2C_SLV_ADD_MSK7_ENABLE      0x80    /* Masking of corresponding bit of SSpxADD enabled */
#define I2C_SLV_ADD_MSK7_DISABLE     0x00    /* Masking of corresponding bit of SSpxADD disabled */
#define I2C_SLV_ADD_MSK7_MASK		 (~I2C_SLV_ADD_MSK7_ENABLE)

/* Priority for  I2C1 Interrupt */
#define I2C_INT_PRI_7              0x07 /*I2C Interrupt Priority 0*/
#define I2C_INT_PRI_6              0x06 /*I2C Interrupt Priority 1*/
#define I2C_INT_PRI_5              0x05 /*I2C Interrupt Priority 2*/
#define I2C_INT_PRI_4              0x04 /*I2C Interrupt Priority 3*/
#define I2C_INT_PRI_3              0x03 /*I2C Interrupt Priority 4*/
#define I2C_INT_PRI_2              0x02 /*I2C Interrupt Priority 5*/
#define I2C_INT_PRI_1              0x01 /*I2C Interrupt Priority 6*/
#define I2C_INT_PRI_0              0x00 /*I2C Interrupt Priority 7*/
#define I2C_INT_PRI_MASK  			(~I2C_INT_PRI_7)

/* Master I2C1 Interrupt Enable/Disable */
#define I2C_INT_ON                 0x08 /*I2C Interrupt enabled*/
#define I2C_INT_OFF                0x00 /*I2C Interrupt disabled*/									 	
#define I2C_INT_MASK  			  (~I2C_INT_ON)

#endif

/* ***** I2C1 ***** */

/***********************************************************************************
Macro       : EnableIntI2C1

Include     : i2c.h

Description : Macro enables I2C  Interrupt
 
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define EnableIntI2C1                   (IEC1bits.SSP1IE = 1)

/***********************************************************************************
Macro       : DisableIntI2C1

Include     : i2c.h

Description : Macro disables I2C  Interrupt
 
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define DisableIntI2C1                   (IEC1bits.SSP1IE = 0)

/***********************************************************************************
Macro       : SetPriorityIntI2C1(priority)
 
Include     : i2c.h
 
Description : Macro sets the priority level for I2C interrupt
 
Arguments   : priority - This input parameter is the level of interrupt priority.
		* 0 -- Low priority (Default Value)
		* 1 -- High Priority
 Remarks     : None
***********************************************************************************/
#define SetPriorityIntI2C1(priority)     (IPC4bits.SSP1IP = priority)

/*******************************************************************
Macro       : I2C1_Clear_Intr_Status_Bit

Include     : i2c.h

Description : Macro to Clear I2C  Interrupt Status bit

Arguments   : None

Remarks     : None
*******************************************************************/
#define I2C1_Clear_Intr_Status_Bit     (IFS1bits.SSP1IF = 0)

/*******************************************************************
Macro       : I2C1_Intr_Status

Include     : i2c.h 

Description : Macro to return I2C Interrupt Status

Arguments   : None

Remarks     : None
*******************************************************************/
#define I2C1_Intr_Status		IFS1bits.SSP1IF

/*******************************************************************
Macro       : StopI2C1()

Include     : i2c.h

Description : Macro to initiate stop condition

Arguments   : None

Remarks     : This macro initiates stop condition and waits till the stop signal
		sequence is terminated.This macro is applicable only to master
*******************************************************************/
#define StopI2C1_Mac()  SSP1CON2bits.PEN=1;while(SSP1CON2bits.PEN)


/*******************************************************************
Macro       : StartI2C1()

Include     : i2c.h

Description : Macro to initiate start condition

Arguments   : None

Remarks     : This macro initiates start condition and waits till the start signal
		sequence is terminated. This macro is applicable only to master
*******************************************************************/
#define StartI2C1_Mac()  SSP1CON2bits.SEN=1;while(SSP1CON2bits.SEN)


/*******************************************************************
Macro       : RestartI2C1()

Include     : i2c.h

Description : Macro to initiate Restart condition

Arguments   : None

Remarks     : This macro initiates Restart condition and waits till the Restart signal
		sequence is terminated. This macro is applicable only to master
*******************************************************************/
#define RestartI2C1_Mac()  SSP1CON2bits.RSEN=1;while(SSP1CON2bits.RSEN)


/*******************************************************************
Macro       : NotAckI2C1()

Include     : i2c.h

Description : Macro to initiate negetive acknowledgement sequence

Arguments   : None

Remarks     : This macro initiates negetive acknowledgement condition and 
		waits till the acknowledgement sequence is terminated.
		This macro is applicable only to master
*******************************************************************/
#define NotAckI2C1_Mac()     SSP1CON2bits.ACKDT=1, SSP1CON2bits.ACKEN=1;while(SSP1CON2bits.ACKEN)

/*******************************************************************
Macro       : AckI2C1()

Include     : i2c.h

Description : Macro to initiate positive acknowledgement sequence

Arguments   : None

Remarks     : This macro initiates positive acknowledgement condition and 
		waits till the acknowledgement sequence is terminated.
		This macro is applicable only to master
*******************************************************************/
#define AckI2C1_Mac()        SSP1CON2bits.ACKDT=0, SSP1CON2bits.ACKEN=1;while(SSP1CON2bits.ACKEN)


/**********************************************************************************************
Macro :  IdleI2C1() 

Include            : i2c.h 

Description        : This Macro generates Wait condition until I2C bus is Idle.

Arguments          : None 

Remarks            : This Macro will be in a wait state until Start Condition Enable bit,
                     Stop Condition Enable bit, Receive Enable bit, Acknowledge Sequence
                     Enable bit of I2C Control register and Transmit Status bit I2C Status
                     register are clear. The IdleI2C function is required since the hardware
                     I2C peripheral does not allow for spooling of bus sequence. The I2C
                     peripheral must be in Idle state before an I2C operation can be initiated
                     or write collision will be generated.
***********************************************************************************************/
#define IdleI2C1_Mac()    while ((SSP1CON2 & 0x1F) | (SSP1STATbits.R_W))


/*********************************************************************
Macro  			   :CloseI2C1()

Include            : i2c.h 

Description        : This Macro turns off the I2C module 

Arguments          : None 

Return Value       : None 

Remarks            : This Macro disables the I2C module.
*********************************************************************/
#define CloseI2C1_Mac()  SSP1CON1 &=0xDF


/************************************************************************
Macro :  DataRdyI2C1() 

Include            : i2c.h 

Description        : This Macro provides status back to user if SSPxBUF
			register contain data. 
                     
Arguments          : None 

Remarks            : This Macro determines if there is any byte to read from
			SSPxBUF register.
*************************************************************************/
#define DataRdyI2C1_Mac()    (SSP1STATbits.BF)


/**************************************************************************
Macro       : getcI2C1

Description : macro is identical to ReadI2C1,#define to ReadI2C1 in i2c.h
 
Arguments   : None
 
Remarks     : None 
***************************************************************************/
#define  getcI2C1  ReadI2C1

/**************************************************************************
Macro       : putcI2C1

Description : macro is identical to WriteI2C1,#define to WriteI2C1 in i2c.h
 
Arguments   : None
 
Remarks     : None 
***************************************************************************/
#define  putcI2C1  WriteI2C1

#ifndef LIB_BUILD
#define AckI2C1  		AckI2C1_v3
#define CloseI2C1  		CloseI2C1_v3
#define ConfigIntI2C1  	ConfigIntI2C1_v3
#define DataRdyI2C1  	DataRdyI2C1_v3
#define getsI2C1 		getsI2C1_v3
#define IdleI2C1  		IdleI2C1_v3
#define NotAckI2C1   	NotAckI2C1_v3
#define OpenI2C1  		OpenI2C1_v3
#define putsI2C1  		putsI2C1_v3
#define ReadI2C1  		ReadI2C1_v3
#define WriteI2C1	 	WriteI2C1_v3
#define RestartI2C1  	RestartI2C1_v3
#define StartI2C1 		StartI2C1_v3
#define StopI2C1  		StopI2C1_v3
#define WaitForIntrI2C1 WaitForIntrI2C1_v3
#endif

void __attribute__ ((section (".libperi")))AckI2C1_v3(void);

void __attribute__ ((section (".libperi")))CloseI2C1_v3(void) ;

void __attribute__ ((section (".libperi")))ConfigIntI2C1_v3(unsigned int config) ;

char __attribute__ ((section (".libperi")))DataRdyI2C1_v3(void) ;

unsigned int __attribute__ ((section (".libperi")))getsI2C1_v3(unsigned char * rdptr, unsigned char length ) ;

void __attribute__ ((section (".libperi")))IdleI2C1_v3(void) ;

void __attribute__ ((section (".libperi")))NotAckI2C1_v3(void) ;

void __attribute__ ((section (".libperi")))OpenI2C1_v3(unsigned int config1,unsigned int config2,unsigned int config3,unsigned int config4,unsigned char sync_mode, unsigned char slew) ;

unsigned int __attribute__ ((section (".libperi"))) putsI2C1_v3(unsigned char * wrptr);

unsigned char __attribute__ ((section (".libperi")))ReadI2C1_v3(void) ;

unsigned char  __attribute__ ((section (".libperi")))WriteI2C1_v3(unsigned char data_out) ;

void __attribute__ ((section (".libperi")))RestartI2C1_v3(void) ;

void __attribute__ ((section (".libperi")))StartI2C1_v3(void) ;

void __attribute__ ((section (".libperi")))StopI2C1_v3(void) ;

void __attribute__ ((section (".libperi")))WaitForIntrI2C1_v3(void) ;

/* ***** I2C2 ***** */
#if defined (i2c_v3_2) || defined(LIB_BUILD)

/***********************************************************************************
Macro       : EnableIntI2C2

Include     : i2c.h

Description : Macro enables I2C  Interrupt
 
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define EnableIntI2C2                   (IEC3bits.SSP2IE = 1)

/***********************************************************************************
Macro       : DisableIntI2C2

Include     : i2c.h

Description : Macro disables I2C  Interrupt
 
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define DisableIntI2C2                   (IEC3bits.SSP2IE = 0)

/***********************************************************************************
Macro       : SetPriorityIntI2C2(priority)
 
Include     : i2c.h
 
Description : Macro sets the priority level for I2C interrupt
 
Arguments   : priority - This input parameter is the level of interrupt priority.
		* 0 -- Low priority (Default Value)
		* 1 -- High Priority
 Remarks     : None
***********************************************************************************/
#define SetPriorityIntI2C2(priority)     (IPC12bits.SSP2IP = priority)

/*******************************************************************
Macro       : I2C2_Clear_Intr_Status_Bit

Include     : i2c.h

Description : Macro to Clear I2C  Interrupt Status bit

Arguments   : None

Remarks     : None
*******************************************************************/
#define I2C2_Clear_Intr_Status_Bit     (IFS3bits.SSP2IF = 0)

/*******************************************************************
Macro       : I2C2_Intr_Status

Include     : i2c.h 

Description : Macro to return I2C Interrupt Status

Arguments   : None

Remarks     : None
*******************************************************************/
#define I2C2_Intr_Status		IFS3bits.SSP2IF

/*******************************************************************
Macro       : StopI2C2()

Include     : i2c.h

Description : Macro to initiate stop condition

Arguments   : None

Remarks     : This macro initiates stop condition and waits till the stop signal
		sequence is terminated.This macro is applicable only to master
*******************************************************************/
#define StopI2C2_Mac()  SSP2CON2bits.PEN=1;while(SSP2CON2bits.PEN)


/*******************************************************************
Macro       : StartI2C2()

Include     : i2c.h

Description : Macro to initiate start condition

Arguments   : None

Remarks     : This macro initiates start condition and waits till the start signal
		sequence is terminated. This macro is applicable only to master
*******************************************************************/
#define StartI2C2_Mac()  SSP2CON2bits.SEN=1;while(SSP2CON2bits.SEN)


/*******************************************************************
Macro       : RestartI2C2()

Include     : i2c.h

Description : Macro to initiate Restart condition

Arguments   : None

Remarks     : This macro initiates Restart condition and waits till the Restart signal
		sequence is terminated. This macro is applicable only to master
*******************************************************************/
#define RestartI2C2_Mac()  SSP2CON2bits.RSEN=1;while(SSP2CON2bits.RSEN)


/*******************************************************************
Macro       : NotAckI2C2()

Include     : i2c.h

Description : Macro to initiate negetive acknowledgement sequence

Arguments   : None

Remarks     : This macro initiates negetive acknowledgement condition and 
		waits till the acknowledgement sequence is terminated.
		This macro is applicable only to master
*******************************************************************/
#define NotAckI2C2_Mac()     SSP2CON2bits.ACKDT=1, SSP2CON2bits.ACKEN=1;while(SSP2CON2bits.ACKEN)

/*******************************************************************
Macro       : AckI2C2()

Include     : i2c.h

Description : Macro to initiate positive acknowledgement sequence

Arguments   : None

Remarks     : This macro initiates positive acknowledgement condition and 
		waits till the acknowledgement sequence is terminated.
		This macro is applicable only to master
*******************************************************************/
#define AckI2C2_Mac()        SSP2CON2bits.ACKDT=0, SSP2CON2bits.ACKEN=1;while(SSP2CON2bits.ACKEN)


/**********************************************************************************************
Macro :  IdleI2C2() 

Include            : i2c.h 

Description        : This Macro generates Wait condition until I2C bus is Idle.

Arguments          : None 

Remarks            : This Macro will be in a wait state until Start Condition Enable bit,
                     Stop Condition Enable bit, Receive Enable bit, Acknowledge Sequence
                     Enable bit of I2C Control register and Transmit Status bit I2C Status
                     register are clear. The IdleI2C function is required since the hardware
                     I2C peripheral does not allow for spooling of bus sequence. The I2C
                     peripheral must be in Idle state before an I2C operation can be initiated
                     or write collision will be generated.
***********************************************************************************************/
#define IdleI2C2_Mac()    while ((SSP2CON2 & 0x1F) | (SSP2STATbits.R_W))


/*********************************************************************
Macro  :  CloseI2C2()

Include            : i2c.h 

Description        : This Macro turns off the I2C module 

Arguments          : None 

Return Value       : None 

Remarks            : This Macro disables the I2C module.
*********************************************************************/
#define CloseI2C2_Mac()  SSP1CON1 &=0xDF


/************************************************************************
Macro :  DataRdyI2C2() 

Include            : i2c.h 

Description        : This Macro provides status back to user if SSPxBUF
			register contain data. 
                     
Arguments          : None 

Remarks            : This Macro determines if there is any byte to read from
			SSPxBUF register.
*************************************************************************/
#define DataRdyI2C2_Mac()    (SSP2STATbits.BF)


/**************************************************************************
Macro       : getcI2C2

Description : macro is identical to ReadI2C1,#define to ReadI2C1 in i2c.h
 
Arguments   : None
 
Remarks     : None 
***************************************************************************/
#define  getcI2C2   ReadI2C2

/**************************************************************************
Macro       : putcI2C1

Description : macro is identical to WriteI2C1,#define to WriteI2C1 in i2c.h
 
Arguments   : None
 
Remarks     : None 
***************************************************************************/
#define  putcI2C2   WriteI2C2

#ifndef LIB_BUILD
#define AckI2C2  			AckI2C2_v3
#define CloseI2C2  			CloseI2C2_v3
#define ConfigIntI2C2  		ConfigIntI2C2_v3
#define DataRdyI2C2  		DataRdyI2C2_v3
#define getsI2C2 			getsI2C2_v3
#define IdleI2C2  			IdleI2C2_v3
#define NotAckI2C2   		NotAckI2C2_v3
#define OpenI2C2  			OpenI2C2_v3
#define putsI2C2  			putsI2C2_v3
#define ReadI2C2  			ReadI2C2_v3
#define WriteI2C2	 		WriteI2C2_v3
#define RestartI2C2  		RestartI2C2_v3
#define StartI2C2 			StartI2C2_v3
#define StopI2C2  			StopI2C2_v3
#define WaitForIntrI2C2   	WaitForIntrI2C2_v3
#endif

void __attribute__ ((section (".libperi")))AckI2C2_v3(void);

void __attribute__ ((section (".libperi")))CloseI2C2_v3(void) ;

void __attribute__ ((section (".libperi")))ConfigIntI2C2_v3(unsigned int config) ;

char __attribute__ ((section (".libperi")))DataRdyI2C2_v3(void) ;

unsigned int __attribute__ ((section (".libperi")))getsI2C2_v3(unsigned char * rdptr, unsigned char length ) ;

void __attribute__ ((section (".libperi")))IdleI2C2_v3(void) ;

void __attribute__ ((section (".libperi")))NotAckI2C2_v3(void) ;

void __attribute__ ((section (".libperi")))OpenI2C2_v3(unsigned int config1,unsigned int config2,unsigned int config3,unsigned int config4,unsigned char sync_mode, unsigned char slew) ;

unsigned int __attribute__ ((section (".libperi"))) putsI2C2_v3(unsigned char * wrptr);

unsigned char __attribute__ ((section (".libperi")))ReadI2C2_v3(void) ;

unsigned char  __attribute__ ((section (".libperi")))WriteI2C2_v3(unsigned char data_out) ;

void __attribute__ ((section (".libperi")))RestartI2C2_v3(void) ;

void __attribute__ ((section (".libperi")))StartI2C2_v3(void) ;

void __attribute__ ((section (".libperi")))StopI2C2_v3(void) ;

void __attribute__ ((section (".libperi")))WaitForIntrI2C2_v3(void) ;

#endif

#endif


#if defined (i2c_v1_1) || defined (i2c_v1_2)|| defined (i2c_v1_3)|| defined (i2c_v1_4)|| defined (i2c_v2_1) || defined(LIB_BUILD)
/***********************************************************************************
Macro       : EnableIntSI2C1

Include     : i2c.h

Description : Macro enables I2C Slave Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define EnableIntSI2C1                   (IEC1bits.SI2C1IE = 1) 

/***********************************************************************************
Macro       : DisableIntSI2C1

Include     : i2c.h

Description : Macro disables I2C Slave Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define DisableIntSI2C1                  (IEC1bits.SI2C1IE = 0) 

/***********************************************************************************
Macro       : SetPriorityIntSI2C1(priority)
 
Include     : i2c.h
 
Description : Macro sets the priority level for I2C Salve interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority.
 
Remarks     : None
***********************************************************************************/
#define SetPriorityIntSI2C1(priority)     (IPC4bits.SI2C1IP = priority)

/*******************************************************************
Macro       : SI2C1_Clear_Intr_Status_Bit

Include     : i2c.h 

Description : Macro to Clear I2C Slave Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define SI2C1_Clear_Intr_Status_Bit     (IFS1bits.SI2C1IF = 0)

/***********************************************************************************
Macro       : EnableIntMI2C1

Include     : i2c.h

Description : Macro enables I2C Master Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define EnableIntMI2C1                   (IEC1bits.MI2C1IE = 1) 

/***********************************************************************************
Macro       : DisableIntMI2C1

Include     : i2c.h

Description : Macro disables I2C Master Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define DisableIntMI2C1                   (IEC1bits.MI2C1IE = 0) 

/***********************************************************************************
Macro       : SetPriorityIntMI2C1(priority)
 
Include     : i2c.h
 
Description : Macro sets the priority level for I2C Master interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority.
 
Remarks     : None
***********************************************************************************/
#define SetPriorityIntMI2C1(priority)     (IPC4bits.MI2C1IP = priority)

/*******************************************************************
Macro       : MI2C1_Clear_Intr_Status_Bit

Include     : i2c.h 

Description : Macro to Clear I2C Master Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define MI2C1_Clear_Intr_Status_Bit     (IFS1bits.MI2C1IF = 0)

/***********************************************************************************
Macro       : SlavegetcI2C1
 
Include     : i2c.h
 
Description : This function is identical to SlaveReadI2C1              
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define SlavegetcI2C1                     SlaveReadI2C1

/***********************************************************************************
Macro       : MastergetcI2C1
 
Include     : i2c.h
 
Description : This function is identical to MasterReadI2C1 
             
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define MastergetcI2C1                    MasterReadI2C1

/***********************************************************************************
Macro       : SlaveputcI2C1
 
Include     : i2c.h
 
Description : This function is identical to SlaveWriteI2C1. 
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define SlaveputcI2C1                    SlaveWriteI2C1

/***********************************************************************************
Macro       : MasterputcI2C1
 
Include     : i2c.h
 
Description : This function is identical to MasterWriteI2C1. 
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define MasterputcI2C1                  MasterWriteI2C1

/***********************************************************************
Macro       : mI2C1_MasterClearIntr()
 
Include     : i2c.h
 
Description : This macro clears the I2C Master interrupt flag
 
Arguments   : None
 
Remarks     : None
************************************************************************/
#define mI2C1_MasterClearIntr()          (IFS1bits.MI2C1IF = 0)

/***********************************************************************
Macro       : mI2C1_SlaveClearIntr()
 
Include     : i2c.h
 
Description : This macro clears the I2C Slave interrupt flag
 
Arguments   : None
 
Remarks     : None
************************************************************************/
#define mI2C1_SlaveClearIntr()           (IFS1bits.SI2C1IF = 0)

#if defined (i2c_v1_1) || defined(LIB_BUILD)
/***********************************************************************
Macro       : I2C_SMB_SDA_Delay_LONG()
 
Include     : i2c.h
 
Description : This macro sets the I2C for longer (300ns) SMBus SDA delay
 
Arguments   : None
 
Remarks     : None
************************************************************************/
#define I2C_SMB_SDA_Delay_LONG()           (PADCFG1bits.SMBUSDEL = 1)

/***********************************************************************
Macro       : I2C_SMB_SDA_Delay_LONG()
 
Include     : i2c.h
 
Description : This macro sets the I2C for legacy mode (150ns) SMBus SDA delay
 
Arguments   : None
 
Remarks     : None
************************************************************************/
#define I2C_SMB_SDA_Delay_LEGACY()           (PADCFG1bits.SMBUSDEL = 0)
#endif

void __attribute__ ((section (".libperi")))AckI2C1(void);

void __attribute__ ((section (".libperi")))CloseI2C1(void) ;

void __attribute__ ((section (".libperi")))ConfigIntI2C1(unsigned int config) ;

void __attribute__ ((section (".libperi")))ConfigIntI2C1(unsigned int config) ;

char __attribute__ ((section (".libperi")))DataRdyI2C1(void) ;

unsigned int __attribute__ ((section (".libperi")))SlavegetsI2C1(unsigned char *rdptr, unsigned int i2c_data_wait) ;

unsigned int __attribute__ ((section (".libperi")))MastergetsI2C1(unsigned int length, unsigned char * rdptr, unsigned int i2c_data_wait) ;

void __attribute__ ((section (".libperi")))IdleI2C1(void) ;

void __attribute__ ((section (".libperi")))NotAckI2C1(void) ;

void __attribute__ ((section (".libperi")))OpenI2C1(unsigned int config1,unsigned int config2) ;

char __attribute__ ((section (".libperi"))) MasterputsI2C1(unsigned char *wrptr) ;

unsigned int __attribute__ ((section (".libperi"))) SlaveputsI2C1(unsigned char *wrptr) ;

unsigned char __attribute__ ((section (".libperi")))SlaveReadI2C1(void) ;

unsigned char __attribute__ ((section (".libperi")))MasterReadI2C1(void) ;

void __attribute__ ((section (".libperi")))SlaveWriteI2C1(unsigned char data_out) ;

char __attribute__ ((section (".libperi")))MasterWriteI2C1(unsigned char data_out) ;

void __attribute__ ((section (".libperi")))RestartI2C1(void) ;

void __attribute__ ((section (".libperi")))StartI2C1(void) ;

void __attribute__ ((section (".libperi")))StopI2C1(void) ;

void __attribute__ ((section (".libperi")))SlaveWaitForIntrI2C1(void) ;

void __attribute__ ((section (".libperi")))MasterWaitForIntrI2C1(void) ;

#endif

#if defined (i2c_v1_2)|| defined (i2c_v1_3)|| defined (i2c_v1_4)||defined(LIB_BUILD)

/***********************************************************************************
Macro       : EnableIntSI2C2

Include     : i2c.h

Description : Macro enables I2C Slave Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define EnableIntSI2C2                   (IEC3bits.SI2C2IE = 1) 

/***********************************************************************************
Macro       : DisableIntSI2C2

Include     : i2c.h

Description : Macro disables I2C Slave Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define DisableIntSI2C2                   (IEC3bits.SI2C2IE = 0)

/***********************************************************************************
Macro       : SetPriorityIntSI2C2(priority)
 
Include     : i2c.h
 
Description : Macro sets the priority level for I2C Salve interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority.
 
Remarks     : None
***********************************************************************************/
#if defined (i2c_v1_4)
#define SetPriorityIntSI2C2(priority)     (IPC12bits.SI2C2IP = priority)
#else
#define SetPriorityIntSI2C2(priority)     (IPC12bits.SI2C2P = priority)
#endif

/*******************************************************************
Macro       : SI2C2_Clear_Intr_Status_Bit

Include     : i2c.h 

Description : Macro to Clear I2C Slave Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define SI2C2_Clear_Intr_Status_Bit     (IFS3bits.SI2C2IF = 0)

/***********************************************************************************
Macro       : EnableIntMI2C1

Include     : i2c.h

Description : Macro enables I2C Master Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define EnableIntMI2C2                   (IEC3bits.MI2C2IE = 1)

/***********************************************************************************
Macro       : DisableIntMI2C2

Include     : i2c.h

Description : Macro disables I2C Master Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define DisableIntMI2C2                   (IEC3bits.MI2C2IE = 0)

/***********************************************************************************
Macro       : SetPriorityIntMI2C2(priority)
 
Include     : i2c.h
 
Description : Macro sets the priority level for I2C Master interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority.
 
Remarks     : None
***********************************************************************************/
#if defined (i2c_v1_4)
#define SetPriorityIntMI2C2(priority)     (IPC12bits.MI2C2IP = priority)
#else
#define SetPriorityIntMI2C2(priority)     (IPC12bits.MI2C2P = priority)
#endif

/*******************************************************************
Macro       : MI2C2_Clear_Intr_Status_Bit

Include     : i2c.h 

Description : Macro to Clear I2C Master Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define MI2C2_Clear_Intr_Status_Bit     (IFS3bits.MI2C2IF = 0)

/***********************************************************************************
Macro       : SlavegetcI2C2
 
Include     : i2c.h
 
Description : This function is identical to SlaveReadI2C2. 
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define SlavegetcI2C2                      SlaveReadI2C2

/***********************************************************************************
Macro       : MastergetcI2C2
 
Include     : i2c.h
 
Description : This function is identical to MasterReadI2C2.
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define MastergetcI2C2                      MasterReadI2C2

/***********************************************************************************
Macro       : SlaveputcI2C2
 
Include     : i2c.h
 
Description : This function is identical to SlaveWriteI2C2.
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define SlaveputcI2C2                       SlaveWriteI2C2

/***********************************************************************************
Macro       : MasterputcI2C2
 
Include     : i2c.h
 
Description : This function is identical to MasterWriteI2C2. 
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define MasterputcI2C2                     MasterWriteI2C2

/***********************************************************************
Macro       : mI2C2_MasterClearIntr()
 
Include     : i2c.h
 
Description : This macro clears the I2C Master interrupt flag
 
Arguments   : None
 
Remarks     : None
************************************************************************/
#define mI2C2_MasterClearIntr()   (IFS3bits.MI2C2IF = 0)

/***********************************************************************
Macro       : mI2C2_SlaveClearIntr()
 
Include     : i2c.h
 
Description : This macro clears the I2C Slave interrupt flag
 
Arguments   : None
 
Remarks     : None
************************************************************************/
#define mI2C2_SlaveClearIntr()   (IFS3bits.SI2C2IF = 0)


void __attribute__ ((section (".libperi")))AckI2C2(void) ;

void __attribute__ ((section (".libperi")))CloseI2C2(void) ;

#if defined (i2c_v1_4) || defined (LIB_BUILD)
 #ifndef LIB_BUILD
 #define ConfigIntI2C2 ConfigIntI2C2_v2
 #endif
void __attribute__ ((section (".libperi")))ConfigIntI2C2_v2(unsigned int config) ;
#else
void __attribute__ ((section (".libperi")))ConfigIntI2C2(unsigned int config) ;
#endif

char __attribute__ ((section (".libperi")))DataRdyI2C2(void) ;

unsigned int __attribute__ ((section (".libperi")))SlavegetsI2C2(unsigned char *rdptr, unsigned int i2c_data_wait) ;

unsigned int __attribute__ ((section (".libperi")))MastergetsI2C2(unsigned int length, unsigned char * rdptr, unsigned int i2c_data_wait) ;

void __attribute__ ((section (".libperi")))IdleI2C2(void) ;

void __attribute__ ((section (".libperi")))NotAckI2C2(void) ;

void  __attribute__ ((section (".libperi")))OpenI2C2(unsigned int config1,unsigned int config2);

char __attribute__ ((section (".libperi")))MasterputsI2C2(unsigned char *wrptr) ;

unsigned int __attribute__ ((section (".libperi"))) SlaveputsI2C2(unsigned char *wrptr) ;

unsigned char __attribute__ ((section (".libperi")))SlaveReadI2C2(void) ;

unsigned char __attribute__ ((section (".libperi"))) MasterReadI2C2(void) ;

void __attribute__ ((section (".libperi")))SlaveWriteI2C2(unsigned char data_out) ;

char __attribute__ ((section (".libperi")))MasterWriteI2C2(unsigned char data_out) ;

void __attribute__ ((section (".libperi")))RestartI2C2(void) ;

void __attribute__ ((section (".libperi")))StartI2C2(void) ;

void __attribute__ ((section (".libperi")))StopI2C2(void) ;

void __attribute__ ((section (".libperi")))SlaveWaitForIntrI2C2(void) ;

void __attribute__ ((section (".libperi")))MasterWaitForIntrI2C2(void);

#endif 

#if defined (i2c_v1_3)||defined(LIB_BUILD)
/***********************************************************************************
Macro       : EnableIntSI2C3

Include     : i2c.h

Description : Macro enables I2C Slave Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define EnableIntSI2C3                   (IEC5bits.SI2C3IE = 1)

/***********************************************************************************
Macro       : DisableIntSI2C3

Include     : i2c.h

Description : Macro disables I2C Slave Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define DisableIntSI2C3                   (IEC5bits.SI2C3IE = 0)

/***********************************************************************************
Macro       : SetPriorityIntSI2C3(priority)
 
Include     : i2c.h
 
Description : Macro sets the priority level for I2C Slave interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority.
 
Remarks     : None
***********************************************************************************/
#define SetPriorityIntSI2C3(priority)     (IPC21bits.SI2C3P = priority)

/*******************************************************************
Macro       : SI2C3_Clear_Intr_Status_Bit

Include     : i2c.h 

Description : Macro to Clear I2C Slave Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define SI2C3_Clear_Intr_Status_Bit     (IFS5bits.SI2C3IF = 0)

/***********************************************************************************
Macro       : EnableIntMI2C3

Include     : i2c.h

Description : Macro enables I2C Master Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define EnableIntMI2C3                   (IEC5bits.MI2C3IE = 1)

/***********************************************************************************
Macro       : DisableIntMI2C3

Include     : i2c.h

Description : Macro disables I2C Master Interrupt 
 
Arguments   : None
 
Remarks     : None 
***********************************************************************************/
#define DisableIntMI2C3                   (IEC5bits.MI2C3IE = 0)

/***********************************************************************************
Macro       : SetPriorityIntMI2C3(priority)
 
Include     : i2c.h
 
Description : Macro sets the priority level for I2C Master interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority.
 
Remarks     : None
***********************************************************************************/
#define SetPriorityIntMI2C3(priority)     (IPC21bits.MI2C3P = priority)

/*******************************************************************
Macro       : MI2C3_Clear_Intr_Status_Bit

Include     : i2c.h 

Description : Macro to Clear I2C Slave Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define MI2C3_Clear_Intr_Status_Bit     (IFS5bits.MI2C3IF = 0)

/***********************************************************************************
Macro       : SlavegetcI2C3
 
Include     : i2c.h
 
Description : This function is identical to SlaveReadI2C3. 
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define SlavegetcI2C3						SlaveReadI2C3

/***********************************************************************************
Macro       : MastergetcI2C3
 
Include     : i2c.h
 
Description : This function is identical to MasterReadI2C3. 
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define MastergetcI2C3						 MasterReadI2C3

/***********************************************************************************
Macro       : SlaveputcI2C3
 
Include     : i2c.h
 
Description : This function is identical to SlaveWriteI2C3 
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define SlaveputcI2C3                      SlaveWriteI2C3

/***********************************************************************************
Macro       : MasterputcI2C3
 
Include     : i2c.h
 
Description : This function is identical to MasterWriteI2C3.
                
Arguments   : None
 
Remarks     : None
***********************************************************************************/
#define MasterputcI2C3                        MasterWriteI2C3

/***********************************************************************
Macro       : mI2C3_MasterClearIntr()
 
Include     : i2c.h
 
Description : This macro clears the I2C Master interrupt flag
 
Arguments   : None
 
Remarks     : None
************************************************************************/
#define mI2C3_MasterClearIntr()   			(IFS5bits.MI2C3IF = 0)

/***********************************************************************
Macro       : mI2C3_SlaveClearIntr()
 
Include     : i2c.h
 
Description : This macro clears the I2C Slave interrupt flag
 
Arguments   : None
 
Remarks     : None
************************************************************************/
#define mI2C3_SlaveClearIntr()   			(IFS5bits.SI2C3IF = 0)

void __attribute__ ((section (".libperi")))AckI2C3(void) ;

void __attribute__ ((section (".libperi")))CloseI2C3(void) ;

void __attribute__ ((section (".libperi")))ConfigIntI2C3(unsigned int config) ;

char __attribute__ ((section (".libperi")))DataRdyI2C3(void) ;

unsigned int __attribute__ ((section (".libperi")))SlavegetsI2C3(unsigned char *rdptr, unsigned int i2c_data_wait) ;

unsigned int __attribute__ ((section (".libperi")))MastergetsI2C3(unsigned int length, unsigned char * rdptr, unsigned int i2c_data_wait) ;

void __attribute__ ((section (".libperi"))) IdleI2C3(void) ;

void __attribute__ ((section (".libperi")))NotAckI2C3(void) ;

void __attribute__ ((section (".libperi")))OpenI2C3(unsigned int config1,unsigned int config2) ;

char __attribute__ ((section (".libperi")))MasterputsI2C3(unsigned char *wrptr) ;

unsigned int __attribute__ ((section (".libperi"))) SlaveputsI2C3(unsigned char *wrptr) ;

unsigned char __attribute__ ((section (".libperi")))SlaveReadI2C3(void) ;

unsigned char __attribute__ ((section (".libperi"))) MasterReadI2C3(void) ;

void __attribute__ ((section (".libperi")))SlaveWriteI2C3(unsigned char data_out) ;

char __attribute__ ((section (".libperi"))) MasterWriteI2C3(unsigned char data_out) ;

void __attribute__ ((section (".libperi")))RestartI2C3(void) ;

void __attribute__ ((section (".libperi")))StartI2C3(void) ;

void __attribute__ ((section (".libperi")))StopI2C3(void) ;

void __attribute__ ((section (".libperi")))SlaveWaitForIntrI2C3(void) ;

void __attribute__ ((section (".libperi")))MasterWaitForIntrI2C3(void) ;

#endif /* _I2C_3 */

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif /*I2C_H  */
