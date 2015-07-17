#ifndef __UART_H
#define __UART_H

/******************************************************************************
 *
 *                  UART PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        uart.h
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
 ******************************************************************************/

#include "PIC24F_periph_features.h"

//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#if defined (uart_v1_1) || defined (uart_v1_2) || defined (uart_v1_3) || defined (uart_v1_4) || defined (uart_v1_5)|| defined (LIB_BUILD)


#define UxMODE_VALUE            0x0000
#define UxSTA_VALUE             0x0110
#define UxTXREG_VALUE           0x0000
#define UxRXREG_VALUE           0x0000
#define UxBRG_VALUE             0x0000

#ifndef USE_AND_OR /* Format for AND_OR based bit setting */
/* defines for UxMODE register */
#define UART_EN                 0xFFFF/* Module enable */
#define UART_DIS                0x7FFF/* Module disable */

#define UART_IDLE_CON           0xDFFF/* Work in IDLE mode */
#define UART_IDLE_STOP          0xFFFF/* Stop all functions in IDLE mode*/

#define UART_IrDA_ENABLE    	0xFFFF/* IrDA encoder and decoder enabled*/
#define UART_IrDA_DISABLE   	0xEFFF/* IrDA encoder and decoder disabled */

#define UART_MODE_SIMPLEX  	 	0xFFFF /* UxRTS pin in Simplex mode */
#define UART_MODE_FLOW      	0xF7FF /* UxRTS pin in Flow Control mode*/

#define UART_UEN_11     		0xFFFF/*UxTX,UxRX and BCLK pins are enabled and used; UxCTS pin controlled by port latches*/
#define UART_UEN_10     		0xFEFF/*UxTX,UxRX, UxCTS and UxRTS pins are enabled and used*/
#define UART_UEN_01     		0xFDFF/*UxTX,UxRX and UxRTS pins are enabled and used; UxCTS pin controlled by port latches*/
#define UART_UEN_00     		0xFCFF /*UxTX and UxRX pins are enabled and used; UxCTS and UxRTS/BCLK pins controlled by port latches*/

#define UART_EN_WAKE            0xFFFF /*Enable Wake-up on START bit Detect during SLEEP Mode bit*/
#define UART_DIS_WAKE           0xFF7F /*Disable Wake-up on START bit Detect during SLEEP Mode bit*/

#define UART_EN_LOOPBACK        0xFFFF/*Loop back enabled*/
#define UART_DIS_LOOPBACK       0xFFBF /*Loop back disabled*/

#define UART_EN_ABAUD           0xFFFF/*Enable baud rate measurement on the next character*/
#define UART_DIS_ABAUD          0xFFDF/*Baud rate measurement disabled or completed*/

#define UART_UXRX_IDLE_ZERO 	0xFFFF/* UxRX Idle state is zero */
#define UART_UXRX_IDLE_ONE  	0xFFEF /* UxRx Idle state is one */

#define UART_BRGH_FOUR      	0xFFFF /* BRG generates 4 clocks per bit period */
#define UART_BRGH_SIXTEEN   	0xFFF7/* BRG generates 16 clocks per bit period */

#define UART_NO_PAR_9BIT        0xFFFF/*No parity 9 bit*/
#define UART_ODD_PAR_8BIT       0xFFFD /*odd parity 8 bit*/
#define UART_EVEN_PAR_8BIT      0xFFFB /*even parity 8 bit*/
#define UART_NO_PAR_8BIT        0xFFF9 /*no parity 8 bit*/

#define UART_2STOPBITS          0xFFFF /*2 stop bits*/
#define UART_1STOPBIT           0xFFFE /*1 stop bit*/

/* defines for UART Status register  (UxSTA) */
#define UART_INT_TX_BUF_EMPTY   0xCFFF/* Interrupt on TXBUF becoming empty */
#define UART_INT_TX_LAST_CH     0x6FFF /* Interrupt when last character shifted out*/
#define UART_INT_TX_EACH_CHAR   0x4FFF /* Interrupt on transfer of every character to TSR */
#define UART_INT_TX             UART_INT_TX_EACH_CHAR

#define UART_IrDA_POL_INV_ONE   0xEFFF /*IrDA encoded, UxTX Idle state is '1' */
#define UART_IrDA_POL_INV_ZERO  0xAFFF/* IrDA encoded, UxTX Idle state is '0' */

#define UART_SYNC_BREAK_ENABLED  0xEFFF /* Send sync break on next transmission */
#define UART_SYNC_BREAK_DISABLED 0xE7FF /* Sync break transmission disabled or completed */

#define UART_TX_ENABLE          0xEFFF /* Transmit enable */
#define UART_TX_DISABLE         0xEBFF /* Transmit disable */
 
#define UART_INT_RX_BUF_FUL     0xEFFF/* Interrupt on RXBUF full */
#if defined (uart_v1_1) || defined (uart_v1_2) || defined (uart_v1_3) 
#define UART_INT_RX_3_4_FUL     0xEFBF /* Interrupt on RXBUF 3/4 full */
#endif
#define UART_INT_RX_CHAR        0xEF7F/* Interrupt on every char received */

#define UART_ADR_DETECT_EN      0xEFFF/* address detect enable */
#define UART_ADR_DETECT_DIS     0xEFDF/* address detect disable */

#define UART_RX_OVERRUN_CLEAR   0xEFFD /* Rx buffer Over run status bit clear */

/* defines for UART Interrupt configuartion */
#define UART_RX_INT_EN          0xFFFF/*Receive interrupt enabled*/
#define UART_RX_INT_DIS         0xFFF7/*Receive interrupt disabled*/

#define UART_RX_INT_PR0         0xFFF8/*Priority RX interrupt 0*/
#define UART_RX_INT_PR1         0xFFF9 /*Priority RX interrupt 1*/
#define UART_RX_INT_PR2         0xFFFA/*Priority RX interrupt 2*/
#define UART_RX_INT_PR3         0xFFFB /*Priority RX interrupt 3*/
#define UART_RX_INT_PR4         0xFFFC/*Priority RX interrupt 4*/
#define UART_RX_INT_PR5         0xFFFD/*Priority RX interrupt 5*/
#define UART_RX_INT_PR6         0xFFFE/*Priority RX interrupt 6*/
#define UART_RX_INT_PR7         0xFFFF /*Priority RX interrupt 7*/

#define UART_TX_INT_EN          0xFFFF/*transmit interrupt enabled*/
#define UART_TX_INT_DIS         0xFF7F /*transmit interrupt disabled*/

#define UART_TX_INT_PR0         0xFF8F/*Priority TX interrupt 0*/
#define UART_TX_INT_PR1         0xFF9F /*Priority TX interrupt 1*/
#define UART_TX_INT_PR2         0xFFAF/*Priority TX interrupt 2*/
#define UART_TX_INT_PR3         0xFFBF/*Priority TX interrupt 3*/
#define UART_TX_INT_PR4         0xFFCF /*Priority TX interrupt 4*/
#define UART_TX_INT_PR5         0xFFDF/*Priority TX interrupt 5*/
#define UART_TX_INT_PR6         0xFFEF/*Priority TX interrupt 6*/
#define UART_TX_INT_PR7         0xFFFF /*Priority TX interrupt 7*/

#else /* Format for backward compatibility (AND based bit setting). */

/* defines for UxMODE register */
#define UART_EN                 0x8000 /* Module enable */
#define UART_DIS                0x0000 /* Module disable */
#define UART_EN_DIS_MASK        (~UART_EN)

#define UART_IDLE_STOP          0x2000/* Stop all functions in IDLE mode*/
#define UART_IDLE_CON           0x0000 /* Work in IDLE mode */
#define UART_IDLE_MASK          (~UART_IDLE_STOP)

#define UART_IrDA_ENABLE        0x1000 /* IrDA encoder and decoder enabled*/
#define UART_IrDA_DISABLE       0x0000 /* IrDA encoder and decoder disabled */
#define UART_IrDA_MASK          (~UART_IrDA_ENABLE)

#define UART_MODE_SIMPLEX       0x0800 /* UxRTS pin in Simplex mode */
#define UART_MODE_FLOW          0x0000 /* UxRTS pin in Flow Control mode*/
#define UART_MODE_MASK          (~UART_MODE_SIMPLEX)

#define UART_UEN_11             0x0300 /*UxTX,UxRX and BCLK pins are enabled and used; UxCTS pin controlled by port latches*/
#define UART_UEN_10             0x0200 /*UxTX,UxRX, UxCTS and UxRTS pins are enabled and used*/
#define UART_UEN_01             0x0100 /*UxTX,UxRX and UxRTS pins are enabled and used; UxCTS pin controlled by port latches*/
#define UART_UEN_00             0x0000 /*UxTX and UxRX pins are enabled and used; UxCTS and UxRTS/BCLK pins controlled by port latches*/
#define UART_UEN_MASK           (~UART_UEN_11)

#define UART_EN_WAKE            0x0080 /*Enable Wake-up on START bit Detect during SLEEP Mode bit*/
#define UART_DIS_WAKE           0x0000 /*Disable Wake-up on START bit Detect during SLEEP Mode bit*/
#define UART_WAKE_MASK          (~UART_EN_WAKE)

#define UART_EN_LOOPBACK        0x0040 /*Loop back enabled*/
#define UART_DIS_LOOPBACK       0x0000 /*Loop back disabled*/
#define UART_LOOPBACK_MASK      (~UART_DIS_LOOPBACK)

#define UART_EN_ABAUD           0x0020 /*Enable baud rate measurement on the next character*/
#define UART_DIS_ABAUD          0x0000 /*Baud rate measurement disabled or completed*/
#define UART_ABAUD_MASK         (~UART_EN_ABAUD)

#define UART_UXRX_IDLE_ZERO     0x0010 /* UxRX Idle state is zero */
#define UART_UXRX_IDLE_ONE      0x0000 /* UxRx Idle state is one */
#define UART_UXRX_IDLE_MASK     (~UART_UXRX_IDLE_ZERO)

#define UART_BRGH_FOUR          0x0008/* BRG generates 4 clocks per bit period */
#define UART_BRGH_SIXTEEN       0x0000/* BRG generates 16 clocks per bit period */
#define UART_BRGH_MASK          (~UART_BRGH_FOUR)

#define UART_NO_PAR_9BIT        0x0006/*No parity 9 bit*/
#define UART_ODD_PAR_8BIT       0x0004 /*odd parity 8 bit*/
#define UART_EVEN_PAR_8BIT      0x0002/*even parity 8 bit*/
#define UART_NO_PAR_8BIT        0x0000 /*no parity 8 bit*/
#define UART_PARITY_MASK        (~UART_NO_PAR_9BIT)

#define UART_2STOPBITS          0x0001/*2 stop bits*/     
#define UART_1STOPBIT           0x0000 /*1 stop bit*/
#define UART_STOPBIT_MASK       (~UART_2STOPBITS)

/* defines for UART Status register */
#define UART_INT_TX_BUF_EMPTY   0x8000/* Interrupt on TXBUF becoming empty */
#define UART_INT_TX_LAST_CH     0x2000/* Interrupt when last character shifted out*/
#define UART_INT_TX_EACH_CHAR   0x0000 /* Interrupt on transfer of every character to TSR */
#define UART_INT_TX_MASK        (~(UART_INT_TX_BUF_EMPTY | UART_INT_TX_LAST_CH))

#define UART_IrDA_POL_INV_ONE   0x4000/*IrDA encoded, UxTX Idle state is '1' */
#define UART_IrDA_POL_INV_ZERO  0x0000 /* IrDA encoded, UxTX Idle state is '0' */
#define UART_IrDA_POL_INV_MASK  (~UART_IrDA_POL_INV_ONE)

#define UART_SYNC_BREAK_ENABLED   0x0800  /* Send sync break on next transmission */
#define UART_SYNC_BREAK_DISABLED  0x0000  /* Sync break transmission disabled or completed */
#define UART_SYNC_BREAK_MASK      (~UART_SYNC_BREAK_ENABLED)

#define UART_TX_ENABLE           0x0400  /* Transmit enable */
#define UART_TX_DISABLE          0x0000  /* Transmit disable */
#define UART_TX_MASK             (~UART_TX_ENABLE)

#define UART_INT_RX_BUF_FUL     0x00C0 /* Interrupt on RXBUF full */
#if defined (uart_v1_1) || defined (uart_v1_2) || defined (uart_v1_3) 
#define UART_INT_RX_3_4_FUL     0x0080 /* Interrupt on RXBUF 3/4 full */
#endif
#define UART_INT_RX_CHAR        0x0000 /* Interrupt on every char received */
#define UART_INT_RX_MASK        (~UART_INT_RX_BUF_FUL)

#define UART_ADR_DETECT_EN      0x0020/* address detect enable */
#define UART_ADR_DETECT_DIS     0x0000 /* address detect disable */
#define UART_ADR_DETECT_MASK    (~UART_ADR_DETECT_EN)

#define UART_RX_OVERRUN_CLEAR    0x0000 /* Rx buffer Over run status bit clear */

/* defines for UART Interrupt configuartion */
#define UART_RX_INT_EN          0x0008/*Receive interrupt enabled*/
#define UART_RX_INT_DIS         0x0000/*Receive interrupt disabled*/
#define UART_RX_INT_MASK        (~UART_RX_INT_EN) 

#define UART_RX_INT_PR0         0x0000 /*Priority RX interrupt 0*/
#define UART_RX_INT_PR1         0x0001 /*Priority RX interrupt 1*/
#define UART_RX_INT_PR2         0x0002 /*Priority RX interrupt 2*/
#define UART_RX_INT_PR3         0x0003 /*Priority RX interrupt 3*/
#define UART_RX_INT_PR4         0x0004 /*Priority RX interrupt 4*/
#define UART_RX_INT_PR5         0x0005 /*Priority RX interrupt 5*/
#define UART_RX_INT_PR6         0x0006 /*Priority RX interrupt 6*/
#define UART_RX_INT_PR7         0x0007 /*Priority RX interrupt 7*/
#define UART_RX_INT_PR_MASK     (~UART_RX_INT_PR7) 

#define UART_TX_INT_EN          0x0080 /*transmit interrupt enabled*/
#define UART_TX_INT_DIS         0x0000/*transmit interrupt disabled*/
#define UART_TX_INT_MASK        (~UART_TX_INT_EN) 

#define UART_TX_INT_PR0         0x0000 /*Priority TX interrupt 0*/
#define UART_TX_INT_PR1         0x0010/*Priority TX interrupt 1*/
#define UART_TX_INT_PR2         0x0020 /*Priority TX interrupt 2*/
#define UART_TX_INT_PR3         0x0030/*Priority TX interrupt 3*/
#define UART_TX_INT_PR4         0x0040/*Priority TX interrupt 4*/
#define UART_TX_INT_PR5         0x0050 /*Priority TX interrupt 5*/
#define UART_TX_INT_PR6         0x0060/*Priority TX interrupt 6*/
#define UART_TX_INT_PR7         0x0070 /*Priority TX interrupt 7*/
#define UART_TX_INT_PR_MASK     (~UART_TX_INT_PR7)

#endif /* USE_AND_OR */

#if defined (uart_v1_1) || defined (uart_v1_2) || defined (uart_v1_3) || defined (uart_v1_4) || defined (uart_v1_5) || defined (LIB_BUILD)

/********************************************************************************
Macro       : EnableIntU1RX
 
Include     : uart.h
 
Description : This macro sets UART Receive Interrupt 
 
Arguments   : None
 
Remarks     : This macro sets UART Receive Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define EnableIntU1RX                   (IEC0bits.U1RXIE = 1)

/********************************************************************************
Macro       : EnableIntU1TX
 
Include     : uart.h
 
Description : This macro sets UART Transmit Interrupt 
 
Arguments   : None
 
Remarks     : This macro sets UART Transmit Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define EnableIntU1TX                   (IEC0bits.U1TXIE = 1)

/********************************************************************************
Macro       : DisableIntU1RX
 
Include     : uart.h
 
Description : This macro disables the UART Receive Interrupt 
 
Arguments   : None
 
Remarks     : This macro clears UART Receive Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define DisableIntU1RX                   (IEC0bits.U1RXIE = 0)

/********************************************************************************
Macro       : DisableIntU1TX
 
Include     : uart.h
 
Description : This macro disables the UART Transmit Interrupt 
 
Arguments   : None
 
Remarks     : This macro clears UART Transmit Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define DisableIntU1TX                  (IEC0bits.U1TXIE = 0)

/********************************************************************************
Macro       : SetPriorityIntU1RX(priority)
 
Include     : uart.h
 
Description : This macro sets priority for UART receive interrupt. 
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets UART Receive Interrupt Priority bits of Interrupt 
              Priority Control register.
*********************************************************************************/
#define SetPriorityIntU1RX(priority)     (IPC2bits.U1RXIP = priority)

/********************************************************************************
Macro       : SetPriorityIntU1TX(priority)
 
Include     : uart.h
 
Description : This macro sets priority for UART transmit interrupt. 
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets UART Transmit Interrupt Priority bits of Interrupt 
              Priority Control register.
*********************************************************************************/
#define SetPriorityIntU1TX(priority)     (IPC3bits.U1TXIP = priority)

/*******************************************************************
Macro       : U1RX_Clear_Intr_Status_Bit

Include     : uart.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define U1RX_Clear_Intr_Status_Bit     (IFS0bits.U1RXIF = 0)

/*******************************************************************
Macro       : U1TX_Clear_Intr_Status_Bit

Include     : uart.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define U1TX_Clear_Intr_Status_Bit     (IFS0bits.U1TXIF = 0)

/********************************************************************************
Macro       : getcUART1
 
Include     : uart.h
 
Description : This macro is identical to ReadUART1 
                             
Arguments   : None
 
Remarks     : None
*********************************************************************************/
#define getcUART1              ReadUART1

/********************************************************************************
Macro       : putcUART1
 
Include     : uart.h
 
Description : This macro is identical to WriteUART1 
                           
Arguments   : None
 
Remarks     : None
*********************************************************************************/
#define putcUART1              WriteUART1


void __attribute__ ((section (".libperi"))) putsUART1(unsigned int *buffer);

void __attribute__ ((section (".libperi"))) WriteUART1(unsigned int data);

void __attribute__ ((section (".libperi"))) CloseUART1(void);

void __attribute__ ((section (".libperi"))) ConfigIntUART1(unsigned int config);

char __attribute__ ((section (".libperi"))) DataRdyUART1(void);

unsigned int __attribute__ ((section (".libperi"))) getsUART1(unsigned int length,unsigned int *buffer,unsigned int uart_data_wait);

void __attribute__ ((section (".libperi"))) OpenUART1(unsigned int config1,unsigned int config2, unsigned int ubrg);

unsigned int __attribute__ ((section (".libperi"))) ReadUART1(void);

char __attribute__ ((section (".libperi")))BusyUART1(void);

#endif

#if defined (uart_v1_1) || defined (uart_v1_2) || defined (uart_v1_5) || defined (LIB_BUILD)
/********************************************************************************
Macro       : EnableIntU2RX
 
Include     : uart.h
 
Description : This macro sets UART Receive Interrupt 
 
Arguments   : None
 
Remarks     : This macro sets UART Receive Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define EnableIntU2RX                   (IEC1bits.U2RXIE = 1)

/********************************************************************************
Macro       : EnableIntU2TX
 
Include     : uart.h
 
Description : This macro sets UART Transmit Interrupt 
 
Arguments   : None
 
Remarks     : This macro sets UART Transmit Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define EnableIntU2TX                   (IEC1bits.U2TXIE = 1)

/********************************************************************************
Macro       : DisableIntU2RX
 
Include     : uart.h
 
Description : This macro disables the UART Receive Interrupt 
 
Arguments   : None
 
Remarks     : This macro clears UART Receive Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define DisableIntU2RX                   (IEC1bits.U2RXIE = 0)

/********************************************************************************
Macro       : DisableIntU2TX
 
Include     : uart.h
 
Description : This macro disables the UART Transmit Interrupt 
 
Arguments   : None
 
Remarks     : This macro clears UART Transmit Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define DisableIntU2TX                   (IEC1bits.U2TXIE = 0)

/********************************************************************************
Macro       : SetPriorityIntU2RX(priority)
 
Include     : uart.h
 
Description : This macro sets priority for UART receive interrupt. 
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets UART Receive Interrupt Priority bits of Interrupt 
              Priority Control register.
*********************************************************************************/
#define SetPriorityIntU2RX(priority)     (IPC7bits.U2RXIP = priority)

/********************************************************************************
Macro       : SetPriorityIntU2TX( priority)
 
Include     : uart.h
 
Description : This macro sets priority for UART transmit interrupt. 
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets UART Transmit Interrupt Priority bits of Interrupt 
              Priority Control register.
*********************************************************************************/
#define SetPriorityIntU2TX(priority)     (IPC7bits.U2TXIP = priority)

/*******************************************************************
Macro       : U2RX_Clear_Intr_Status_Bit

Include     : uart.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define U2RX_Clear_Intr_Status_Bit     (IFS1bits.U2RXIF = 0)

/*******************************************************************
Macro       : U2TX_Clear_Intr_Status_Bit

Include     : uart.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define U2TX_Clear_Intr_Status_Bit     (IFS1bits.U2TXIF = 0)

/********************************************************************************
Macro       : getcUART2
 
Include     : uart.h
 
Description : This macro is identical to ReadUART2 
                            
Arguments   : None
 
Remarks     : None
*********************************************************************************/
#define getcUART2               ReadUART2

/********************************************************************************
Macro       : putcUART2
 
Include     : uart.h
 
Description : This macro is identical to WriteUART2              
               
Arguments   : None
 
Remarks     : None
*********************************************************************************/
#define putcUART2              WriteUART2


void __attribute__ ((section (".libperi"))) putsUART2(unsigned int *buffer) ;

void __attribute__ ((section (".libperi"))) WriteUART2(unsigned int data) ;

void __attribute__ ((section (".libperi"))) CloseUART2(void) ;

void __attribute__ ((section (".libperi"))) ConfigIntUART2(unsigned int config) ;

char __attribute__ ((section (".libperi"))) DataRdyUART2(void) ;

unsigned int __attribute__ ((section (".libperi"))) getsUART2(unsigned int length,unsigned int *buffer,unsigned int uart_data_wait) ;

void __attribute__ ((section (".libperi")))OpenUART2(unsigned int config1,unsigned int config2, unsigned int ubrg) ;

unsigned int __attribute__ ((section (".libperi")))ReadUART2(void) ;

char  __attribute__ ((section (".libperi")))BusyUART2(void);

#endif

#if defined (uart_v1_2) || defined (LIB_BUILD)

/********************************************************************************
Macro       : EnableIntU3RX
 
Include     : uart.h
 
Description : This macro sets UART Receive Interrupt 
 
Arguments   : None
 
Remarks     : This macro sets UART Receive Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define EnableIntU3RX                    (IEC5bits.U3RXIE = 1)

/********************************************************************************
Macro       : EnableIntU3TX
 
Include     : uart.h
 
Description : This macro sets UART Transmit Interrupt 
 
Arguments   : None
 
Remarks     : This macro sets UART Transmit Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define EnableIntU3TX                   (IEC5bits.U3TXIE = 1)

/********************************************************************************
Macro       : DisableIntU3RX
 
Include     : uart.h
 
Description : This macro disables the UART Receive Interrupt 
 
Arguments   : None
 
Remarks     : This macro clears UART Receive Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define DisableIntU3RX                   (IEC5bits.U3RXIE = 0)

/********************************************************************************
Macro       : DisableIntU3TX
 
Include     : uart.h
 
Description : This macro disables the UART Transmit Interrupt 
 
Arguments   : None
 
Remarks     : This macro clears UART Transmit Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define DisableIntU3TX                  (IEC5bits.U3TXIE = 0)

/********************************************************************************
Macro       : SetPriorityIntU3RX
 
Include     : uart.h
 
Description : This macro sets priority for UART receive interrupt. 
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets UART Receive Interrupt Priority bits of Interrupt 
              Priority Control register.
*********************************************************************************/
#define SetPriorityIntU3RX(priority)     (IPC20bits.U3RXIP = priority)

/********************************************************************************
Macro       : SetPriorityIntU3TX(priority)
 
Include     : uart.h
 
Description : This macro sets priority for UART transmit interrupt. 
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets UART Transmit Interrupt Priority bits of Interrupt 
              Priority Control register.
*********************************************************************************/
#define SetPriorityIntU3TX(priority)     (IPC20bits.U3TXIP = priority)

/*******************************************************************
Macro       : U3RX_Clear_Intr_Status_Bit

Include     : uart.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define U3RX_Clear_Intr_Status_Bit     (IFS5bits.U3RXIF = 0)

/*******************************************************************
Macro       : U3TX_Clear_Intr_Status_Bit

Include     : uart.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define U3TX_Clear_Intr_Status_Bit     (IFS5bits.U3TXIF = 0)

/********************************************************************************
Macro       : getcUART3
 
Include     : uart.h
 
Description : This macro is identical to ReadUART3 
                             
Arguments   : None
 
Remarks     : None
*********************************************************************************/
#define getcUART3              ReadUART3

/********************************************************************************
Macro       : putcUART3
 
Include     : uart.h
 
Description : This macro is identical to WriteUART3 
                             
Arguments   : None
 
Remarks     : None
*********************************************************************************/
#define putcUART3               WriteUART3


void __attribute__ ((section (".libperi")))putsUART3(unsigned int *buffer) ;

void __attribute__ ((section (".libperi"))) WriteUART3(unsigned int data) ;

void __attribute__ ((section (".libperi")))CloseUART3(void) ;

void __attribute__ ((section (".libperi"))) ConfigIntUART3(unsigned int config) ;

char __attribute__ ((section (".libperi"))) DataRdyUART3(void);

unsigned int __attribute__ ((section (".libperi"))) getsUART3(unsigned int length,unsigned int *buffer,unsigned int uart_data_wait);

void __attribute__ ((section (".libperi"))) OpenUART3(unsigned int config1,unsigned int config2, unsigned int ubrg);

unsigned int __attribute__ ((section (".libperi"))) ReadUART3(void) ;

char __attribute__ ((section (".libperi"))) BusyUART3(void) ;


/********************************************************************************
Macro       : EnableIntU4RX
 
Include     : uart.h
 
Description : This macro sets UART Receive Interrupt 
 
Arguments   : None
 
Remarks     : This macro sets UART Receive Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define EnableIntU4RX                    (IEC5bits.U4RXIE = 1)

/********************************************************************************
Macro       : EnableIntU4TX
 
Include     : uart.h
 
Description : This macro sets UART Transmit Interrupt 
 
Arguments   : None
 
Remarks     : This macro sets UART Transmit Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define EnableIntU4TX                    (IEC5bits.U4TXIE = 1)

/********************************************************************************
Macro       : DisableIntU4RX
 
Include     : uart.h
 
Description : This macro disables the UART Receive Interrupt 
 
Arguments   : None
 
Remarks     : This macro clears UART Receive Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define DisableIntU4RX                   (IEC5bits.U4RXIE = 0)

/********************************************************************************
Macro       : DisableIntU4TX
 
Include     : uart.h
 
Description : This macro disables the UART Transmit Interrupt 
 
Arguments   : None
 
Remarks     : This macro clears UART Transmit Interrupt Enable bit of Interrupt 
              Enable Control register
*********************************************************************************/
#define DisableIntU4TX                   (IEC5bits.U4TXIE = 0)

/********************************************************************************
Macro       : SetPriorityIntU4RX
 
Include     : uart.h
 
Description : This macro sets priority for UART receive interrupt. 
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets UART Receive Interrupt Priority bits of Interrupt 
              Priority Control register.
*********************************************************************************/
#define SetPriorityIntU4RX(priority)     (IPC22bits.U4RXIP = priority)

/********************************************************************************
Macro       : SetPriorityIntU4TX(priority)
 
Include     : uart.h
 
Description : This macro sets priority for UART transmit interrupt. 
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets UART Transmit Interrupt Priority bits of Interrupt 
              Priority Control register.
*********************************************************************************/
#define SetPriorityIntU4TX(priority)     (IPC22bits.U4TXIP = priority)

/*******************************************************************
Macro       : U4RX_Clear_Intr_Status_Bit

Include     : uart.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define U4RX_Clear_Intr_Status_Bit     (IFS5bits.U4RXIF = 0)

/*******************************************************************
Macro       : U4TX_Clear_Intr_Status_Bit

Include     : uart.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define U4TX_Clear_Intr_Status_Bit     (IFS5bits.U4TXIF = 0)

/********************************************************************************
Macro       : getcUART4
 
Include     : uart.h
 
Description : This macro is identical to ReadUART4 
                            
Arguments   : None
 
Remarks     : None
*********************************************************************************/
#define getcUART4               ReadUART4

/********************************************************************************
Macro       : putcUART4
 
Include     : uart.h
 
Description : This macro is identical to WriteUART4
                           
Arguments   : None
 
Remarks     : None
*********************************************************************************/
#define putcUART4              WriteUART4


void __attribute__ ((section (".libperi"))) putsUART4(unsigned int *buffer);

void __attribute__ ((section (".libperi"))) WriteUART4(unsigned int data);

void __attribute__ ((section (".libperi"))) CloseUART4(void);

void __attribute__ ((section (".libperi"))) ConfigIntUART4(unsigned int config);

char __attribute__ ((section (".libperi"))) DataRdyUART4(void);

unsigned int __attribute__ ((section (".libperi"))) getsUART4(unsigned int length,unsigned int *buffer,unsigned int uart_data_wait);

void __attribute__ ((section (".libperi")))OpenUART4(unsigned int config1,unsigned int config2, unsigned int ubrg) ;

unsigned int __attribute__ ((section (".libperi"))) ReadUART4(void) ;

char __attribute__ ((section (".libperi")))BusyUART4(void) ;

#endif 

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif /*__UART_H */
