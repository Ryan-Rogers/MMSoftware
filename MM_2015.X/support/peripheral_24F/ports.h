#ifndef __PORTS_H
#define __PORTS_H

/******************************************************************************
 *
 *                  PORTS PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        ports.h
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
 
#define CNEN1_VALUE             0x0000
#define CNPU1_VALUE             0x0000

#define CNEN2_VALUE             0x0000
#define CNPU2_VALUE             0x0000

#define IEC0_VALUE              0x0000
#define IEC1_VALUE              0x0000
#define IEC2_VALUE              0x0000

#define IFS0_VALUE              0x0000
#define IFS1_VALUE              0x0000
#define IFS2_VALUE              0x0000

#define IPC0_VALUE              0x4444
#define IPC1_VALUE              0x4444
#define IPC2_VALUE              0x4444
#define IPC3_VALUE              0x4444
#define IPC4_VALUE              0x4444
#define IPC5_VALUE              0x4444
#define IPC6_VALUE              0x4444
#define IPC7_VALUE              0x4444
#define IPC8_VALUE              0x4444
#define IPC9_VALUE              0x4444
#define IPC10_VALUE             0x4444
#define IPC11_VALUE             0x4444

#ifndef USE_AND_OR /* Format for AND_OR based bit setting */

/* Setting the priority of External or CN interrupt */
#define INT_PRI_0           	0xFFF8 /*Interrupt priority 0*/
#define INT_PRI_1           	0xFFF9 /*Interrupt priority 1*/
#define INT_PRI_2           	0xFFFA /*Interrupt priority 2*/
#define INT_PRI_3           	0xFFFB /*Interrupt priority 3*/
#define INT_PRI_4           	0xFFFC /*Interrupt priority 4*/
#define INT_PRI_5           	0xFFFD /*Interrupt priority 5*/
#define INT_PRI_6           	0xFFFE /*Interrupt priority 6*/
#define INT_PRI_7           	0xFFFF /*Interrupt priority 7*/

/* enable / disable External or CN interrupt */
#define INT_ENABLE          	0xFFFF /*Enable Interrupt*/
#define INT_DISABLE         	0xFFF7 /*Disable Interrupt*/

/* External interrupts edge selection defines */
#define RISING_EDGE_INT         0xFFEF  /*Interrupt is set by a rising edge  */
#define FALLING_EDGE_INT        0xFFFF  /*Interrupt is set by a falling edge */

#else /* Format for backward compatibility (AND based bit setting). */

/* Setting the priority of External or CN interrupt */
#define INT_PRI_0           	0x0000 /*Interrupt priority 0*/
#define INT_PRI_1           	0x0001 /*Interrupt priority 1*/
#define INT_PRI_2           	0x0002 /*Interrupt priority 2*/
#define INT_PRI_3           	0x0003 /*Interrupt priority 3*/
#define INT_PRI_4           	0x0004 /*Interrupt priority 4*/
#define INT_PRI_5           	0x0005 /*Interrupt priority 5*/
#define INT_PRI_6           	0x0006 /*Interrupt priority 6*/
#define INT_PRI_7           	0x0007 /*Interrupt priority 7*/
#define INT_PRI_MASK        	(~INT_PRI_7)   

/* enable / disable External or CN interrupt */
#define INT_ENABLE          	0x0008 /*Enable Interrupt*/
#define INT_DISABLE         	0x0000 /*Disable Interrupt*/
#define INT_MASK            	(~INT_ENABLE)

/* External interrupts edge selection defines */
#define RISING_EDGE_INT         0x0000 /*Interrupt is set by a positive edge */
#define FALLING_EDGE_INT        0x0010 /*Interrupt is set by a negative edge  */
#define EDGE_INT_MASK           (~FALLING_EDGE_INT)

#endif /* USE_AND_OR */

/******************************************************************
Macro       : EnableCNx
 
Include     : ports.h
 
Description : This macro enables the individual change notification interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#if defined (cn_v1_1) || defined (cn_v1_2)
#define EnableCN0               CNEN1bits.CN0IE = 1 /*enables change notification interrupt*/
#define EnableCN1               CNEN1bits.CN1IE = 1 /*enables change notification interrupt*/
#define EnableCN2               CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3               CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN4               CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5               CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6               CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN7               CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN11              CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12              CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN13              CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN14              CNEN1bits.CN14IE = 1 /*enables change notification interrupt*/
#define EnableCN15              CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16              CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN21               CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#define EnableCN22               CNEN2bits.CN22IE = 1 /*enables change notification interrupt*/
#define EnableCN23               CNEN2bits.CN23IE = 1 /*enables change notification interrupt*/
#define EnableCN24               CNEN2bits.CN24IE = 1 /*enables change notification interrupt*/
#define EnableCN27               CNEN2bits.CN27IE = 1 /*enables change notification interrupt*/
#define EnableCN29               CNEN2bits.CN29IE = 1 /*enables change notification interrupt*/
#define EnableCN30               CNEN2bits.CN30IE = 1 /*enables change notification interrupt*/
#if defined (cn_v1_2)
#define EnableCN8               CNEN1bits.CN8IE = 1 /*enables change notification interrupt*/
#define EnableCN9               CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN10              CNEN1bits.CN10IE = 1 /*enables change notification interrupt*/
#define EnableCN17              CNEN2bits.CN17IE = 1 /*enables change notification interrupt*/
#define EnableCN18              CNEN2bits.CN18IE = 1 /*enables change notification interrupt*/
#define EnableCN19               CNEN2bits.CN19IE = 1 /*enables change notification interrupt*/
#define EnableCN20               CNEN2bits.CN20IE = 1 /*enables change notification interrupt*/
#define EnableCN25               CNEN2bits.CN25IE = 1 /*enables change notification interrupt*/
#define EnableCN26               CNEN2bits.CN26IE = 1 /*enables change notification interrupt*/
#define EnableCN28               CNEN2bits.CN28IE = 1 /*enables change notification interrupt*/
#endif
#endif

#if defined (cn_v1_3)||defined (cn_v1_4) 
#define EnableCN0               CNEN1bits.CN0IE = 1 /*enables change notification interrupt*/
#define EnableCN1               CNEN1bits.CN1IE = 1 /*enables change notification interrupt*/
#define EnableCN2               CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3               CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN4               CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5               CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6               CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN7               CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN8               CNEN1bits.CN8IE = 1 /*enables change notification interrupt*/
#define EnableCN9               CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN10              CNEN1bits.CN10IE = 1 /*enables change notification interrupt*/
#define EnableCN11              CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12              CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN13              CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN14              CNEN1bits.CN14IE = 1 /*enables change notification interrupt*/
#define EnableCN15              CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16              CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN17              CNEN2bits.CN17IE = 1 /*enables change notification interrupt*/
#define EnableCN18              CNEN2bits.CN18IE = 1 /*enables change notification interrupt*/
#if defined (cn_v1_4)
#define EnableCN19               CNEN2bits.CN19IE = 1 /*enables change notification interrupt*/
#define EnableCN20               CNEN2bits.CN20IE = 1 /*enables change notification interrupt*/
#define EnableCN21               CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#endif
#endif

#if defined (cn_v2_1) || defined (cn_v2_2) || defined (cn_v2_3) 
#define EnableCN0               CNEN1bits.CN0IE = 1 /*enables change notification interrupt*/
#define EnableCN1               CNEN1bits.CN1IE = 1 /*enables change notification interrupt*/
#define EnableCN2               CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3               CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN4               CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5               CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6               CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN7               CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN8               CNEN1bits.CN8IE = 1 /*enables change notification interrupt*/
#define EnableCN9               CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN10              CNEN1bits.CN10IE = 1 /*enables change notification interrupt*/
#define EnableCN11              CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12              CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN13              CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN14              CNEN1bits.CN14IE = 1 /*enables change notification interrupt*/
#define EnableCN15              CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16              CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN17              CNEN2bits.CN17IE = 1 /*enables change notification interrupt*/
#define EnableCN18              CNEN2bits.CN18IE = 1 /*enables change notification interrupt*/
#define EnableCN22               CNEN2bits.CN22IE = 1 /*enables change notification interrupt*/
#define EnableCN23               CNEN2bits.CN23IE = 1 /*enables change notification interrupt*/
#define EnableCN24               CNEN2bits.CN24IE = 1 /*enables change notification interrupt*/
#define EnableCN25               CNEN2bits.CN25IE = 1 /*enables change notification interrupt*/
#define EnableCN26               CNEN2bits.CN26IE = 1 /*enables change notification interrupt*/
#define EnableCN27               CNEN2bits.CN27IE = 1 /*enables change notification interrupt*/
#define EnableCN28               CNEN2bits.CN28IE = 1 /*enables change notification interrupt*/
#define EnableCN29               CNEN2bits.CN29IE = 1 /*enables change notification interrupt*/
#define EnableCN30               CNEN2bits.CN30IE = 1 /*enables change notification interrupt*/
#define EnableCN31               CNEN2bits.CN31IE = 1 /*enables change notification interrupt*/
#define EnableCN32               CNEN3bits.CN32IE = 1 /*enables change notification interrupt*/
#define EnableCN49               CNEN4bits.CN49IE = 1 /*enables change notification interrupt*/
#define EnableCN50               CNEN4bits.CN50IE = 1 /*enables change notification interrupt*/
#define EnableCN51               CNEN4bits.CN51IE = 1 /*enables change notification interrupt*/
#define EnableCN52               CNEN4bits.CN52IE = 1 /*enables change notification interrupt*/
#define EnableCN53               CNEN4bits.CN53IE = 1 /*enables change notification interrupt*/
#define EnableCN54               CNEN4bits.CN54IE = 1 /*enables change notification interrupt*/
#define EnableCN55               CNEN4bits.CN55IE = 1 /*enables change notification interrupt*/
#define EnableCN56               CNEN4bits.CN56IE = 1 /*enables change notification interrupt*/
#define EnableCN58               CNEN4bits.CN58IE = 1 /*enables change notification interrupt*/
#define EnableCN59               CNEN4bits.CN59IE = 1 /*enables change notification interrupt*/
#define EnableCN60               CNEN4bits.CN60IE = 1 /*enables change notification interrupt*/
#define EnableCN61               CNEN4bits.CN61IE = 1 /*enables change notification interrupt*/
#define EnableCN62               CNEN4bits.CN62IE = 1 /*enables change notification interrupt*/
#define EnableCN63               CNEN4bits.CN63IE = 1 /*enables change notification interrupt*/
#define EnableCN64               CNEN5bits.CN64IE = 1 /*enables change notification interrupt*/
#define EnableCN65               CNEN5bits.CN65IE = 1 /*enables change notification interrupt*/
#define EnableCN68               CNEN5bits.CN68IE = 1 /*enables change notification interrupt*/
#define EnableCN69               CNEN5bits.CN69IE = 1 /*enables change notification interrupt*/
#define EnableCN71               CNEN5bits.CN71IE = 1 /*enables change notification interrupt*/
#if defined (cn_v2_2)|| defined (cn_v2_3)
#define EnableCN19               CNEN2bits.CN19IE = 1 /*enables change notification interrupt*/
#define EnableCN20               CNEN2bits.CN20IE = 1 /*enables change notification interrupt*/
#define EnableCN21               CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#define EnableCN41               CNEN3bits.CN41IE = 1 /*enables change notification interrupt*/
#define EnableCN42               CNEN3bits.CN42IE = 1 /*enables change notification interrupt*/
#define EnableCN43               CNEN3bits.CN43IE = 1 /*enables change notification interrupt*/
#define EnableCN44               CNEN3bits.CN44IE = 1 /*enables change notification interrupt*/
#define EnableCN45               CNEN3bits.CN45IE = 1 /*enables change notification interrupt*/
#define EnableCN47               CNEN3bits.CN47IE = 1 /*enables change notification interrupt*/
#define EnableCN57               CNEN4bits.CN57IE = 1 /*enables change notification interrupt*/
#define EnableCN66               CNEN5bits.CN66IE = 1 /*enables change notification interrupt*/
#define EnableCN67               CNEN5bits.CN67IE = 1 /*enables change notification interrupt*/
#define EnableCN70               CNEN5bits.CN70IE = 1 /*enables change notification interrupt*/
#define EnableCN74               CNEN5bits.CN74IE = 1 /*enables change notification interrupt*/
#define EnableCN77               CNEN5bits.CN77IE = 1 /*enables change notification interrupt*/
#define EnableCN78               CNEN5bits.CN78IE = 1 /*enables change notification interrupt*/
#endif
#if defined (cn_v2_3)||defined(LIB_BUILD)
#define EnableCN33               CNEN3bits.CN33IE = 1 /*enables change notification interrupt*/
#define EnableCN34               CNEN3bits.CN34IE = 1 /*enables change notification interrupt*/
#define EnableCN35               CNEN3bits.CN35IE = 1 /*enables change notification interrupt*/
#define EnableCN36               CNEN3bits.CN36IE = 1 /*enables change notification interrupt*/
#define EnableCN37               CNEN3bits.CN37IE = 1 /*enables change notification interrupt*/
#define EnableCN38               CNEN3bits.CN38IE = 1 /*enables change notification interrupt*/
#define EnableCN39               CNEN3bits.CN39IE = 1 /*enables change notification interrupt*/
#define EnableCN40               CNEN3bits.CN40IE = 1 /*enables change notification interrupt*/
#define EnableCN46               CNEN3bits.CN46IE = 1 /*enables change notification interrupt*/
#define EnableCN48               CNEN4bits.CN48IE = 1 /*enables change notification interrupt*/
#define EnableCN75               CNEN5bits.CN75IE = 1 /*enables change notification interrupt*/
#define EnableCN76               CNEN5bits.CN76IE = 1 /*enables change notification interrupt*/
#define EnableCN79               CNEN5bits.CN79IE = 1 /*enables change notification interrupt*/
#define EnableCN80               CNEN6bits.CN80IE = 1 /*enables change notification interrupt*/
#define EnableCN81               CNEN6bits.CN81IE = 1 /*enables change notification interrupt*/
#define EnableCN82               CNEN6bits.CN82IE = 1 /*enables change notification interrupt*/
#endif
#endif

#if defined (cn_v2_4) || defined (cn_v2_5) || defined (cn_v2_6)
#define EnableCN0               CNEN1bits.CN0IE = 1 /*enables change notification interrupt*/
#define EnableCN1               CNEN1bits.CN1IE = 1 /*enables change notification interrupt*/
#define EnableCN2               CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3               CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN4               CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5               CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6               CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN7               CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN8               CNEN1bits.CN8IE = 1 /*enables change notification interrupt*/
#define EnableCN9               CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN10              CNEN1bits.CN10IE = 1 /*enables change notification interrupt*/
#define EnableCN11              CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12              CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN13              CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN14              CNEN1bits.CN14IE = 1 /*enables change notification interrupt*/
#define EnableCN15              CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16              CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN17              CNEN2bits.CN17IE = 1 /*enables change notification interrupt*/
#define EnableCN18              CNEN2bits.CN18IE = 1 /*enables change notification interrupt*/
#define EnableCN22               CNEN2bits.CN22IE = 1 /*enables change notification interrupt*/
#define EnableCN23               CNEN2bits.CN23IE = 1 /*enables change notification interrupt*/
#define EnableCN24               CNEN2bits.CN24IE = 1 /*enables change notification interrupt*/
#define EnableCN25               CNEN2bits.CN25IE = 1 /*enables change notification interrupt*/
#define EnableCN26               CNEN2bits.CN26IE = 1 /*enables change notification interrupt*/
#define EnableCN27               CNEN2bits.CN27IE = 1 /*enables change notification interrupt*/
#define EnableCN28               CNEN2bits.CN28IE = 1 /*enables change notification interrupt*/
#define EnableCN29               CNEN2bits.CN29IE = 1 /*enables change notification interrupt*/
#define EnableCN30               CNEN2bits.CN30IE = 1 /*enables change notification interrupt*/
#define EnableCN31               CNEN2bits.CN31IE = 1 /*enables change notification interrupt*/
#define EnableCN32               CNEN3bits.CN32IE = 1 /*enables change notification interrupt*/
#define EnableCN49               CNEN4bits.CN49IE = 1 /*enables change notification interrupt*/
#define EnableCN50               CNEN4bits.CN50IE = 1 /*enables change notification interrupt*/
#define EnableCN51               CNEN4bits.CN51IE = 1 /*enables change notification interrupt*/
#define EnableCN52               CNEN4bits.CN52IE = 1 /*enables change notification interrupt*/
#define EnableCN53               CNEN4bits.CN53IE = 1 /*enables change notification interrupt*/
#define EnableCN54               CNEN4bits.CN54IE = 1 /*enables change notification interrupt*/
#define EnableCN55               CNEN4bits.CN55IE = 1 /*enables change notification interrupt*/
#define EnableCN56               CNEN4bits.CN56IE = 1 /*enables change notification interrupt*/
#define EnableCN58               CNEN4bits.CN58IE = 1 /*enables change notification interrupt*/
#define EnableCN59               CNEN4bits.CN59IE = 1 /*enables change notification interrupt*/
#define EnableCN60               CNEN4bits.CN60IE = 1 /*enables change notification interrupt*/
#define EnableCN61               CNEN4bits.CN61IE = 1 /*enables change notification interrupt*/
#define EnableCN62               CNEN4bits.CN62IE = 1 /*enables change notification interrupt*/
#define EnableCN63               CNEN4bits.CN63IE = 1 /*enables change notification interrupt*/
#define EnableCN64               CNEN5bits.CN64IE = 1 /*enables change notification interrupt*/
#define EnableCN65               CNEN5bits.CN65IE = 1 /*enables change notification interrupt*/
#define EnableCN68               CNEN5bits.CN68IE = 1 /*enables change notification interrupt*/
#define EnableCN69               CNEN5bits.CN69IE = 1 /*enables change notification interrupt*/
#define EnableCN71               CNEN5bits.CN71IE = 1 /*enables change notification interrupt*/
#define EnableCN72               CNEN5bits.CN72IE = 1 /*enables change notification interrupt*/
#define EnableCN83               CNEN6bits.CN83IE = 1 /*enables change notification interrupt*/
#define EnableCN84               CNEN6bits.CN84IE = 1 /*enables change notification interrupt*/
#if defined (cn_v2_5)|| defined (cn_v2_6)
#define EnableCN19               CNEN2bits.CN19IE = 1 /*enables change notification interrupt*/
#define EnableCN20               CNEN2bits.CN20IE = 1 /*enables change notification interrupt*/
#define EnableCN21               CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#define EnableCN41               CNEN3bits.CN41IE = 1 /*enables change notification interrupt*/
#define EnableCN42               CNEN3bits.CN42IE = 1 /*enables change notification interrupt*/
#define EnableCN43               CNEN3bits.CN43IE = 1 /*enables change notification interrupt*/
#define EnableCN44               CNEN3bits.CN44IE = 1 /*enables change notification interrupt*/
#define EnableCN45               CNEN3bits.CN45IE = 1 /*enables change notification interrupt*/
#define EnableCN47               CNEN3bits.CN47IE = 1 /*enables change notification interrupt*/
#define EnableCN57               CNEN4bits.CN57IE = 1 /*enables change notification interrupt*/
#define EnableCN66               CNEN5bits.CN66IE = 1 /*enables change notification interrupt*/
#define EnableCN67               CNEN5bits.CN67IE = 1 /*enables change notification interrupt*/
#define EnableCN73               CNEN5bits.CN73IE = 1 /*enables change notification interrupt*/
#define EnableCN74               CNEN5bits.CN74IE= 1 /*enables change notification interrupt*/
#define EnableCN77               CNEN5bits.CN77IE = 1 /*enables change notification interrupt*/
#define EnableCN78               CNEN5bits.CN78IE = 1 /*enables change notification interrupt*/
#endif
#if defined (cn_v2_6)
#define EnableCN33               CNEN3bits.CN33IE = 1 /*enables change notification interrupt*/
#define EnableCN34               CNEN3bits.CN34IE = 1 /*enables change notification interrupt*/
#define EnableCN35               CNEN3bits.CN35IE = 1 /*enables change notification interrupt*/
#define EnableCN36               CNEN3bits.CN36IE = 1 /*enables change notification interrupt*/
#define EnableCN37               CNEN3bits.CN37IE = 1 /*enables change notification interrupt*/
#define EnableCN38               CNEN3bits.CN38IE = 1 /*enables change notification interrupt*/
#define EnableCN39               CNEN3bits.CN39IE = 1 /*enables change notification interrupt*/
#define EnableCN40               CNEN3bits.CN40IE = 1 /*enables change notification interrupt*/
#define EnableCN46               CNEN3bits.CN46IE = 1 /*enables change notification interrupt*/
#define EnableCN48               CNEN4bits.CN48IE = 1 /*enables change notification interrupt*/
#define EnableCN75               CNEN5bits.CN75IE = 1 /*enables change notification interrupt*/
#define EnableCN76               CNEN5bits.CN76IE = 1 /*enables change notification interrupt*/
#define EnableCN79               CNEN5bits.CN79IE = 1 /*enables change notification interrupt*/
#define EnableCN80               CNEN6bits.CN80IE = 1 /*enables change notification interrupt*/
#define EnableCN81               CNEN6bits.CN81IE = 1 /*enables change notification interrupt*/
#define EnableCN82               CNEN6bits.CN82IE = 1 /*enables change notification interrupt*/
#endif
#endif

#if	defined (cn_v2_8) || defined (cn_v2_9)
#define EnableCN0               CNEN1bits.CN0IE = 1 /*enables change notification interrupt*/
#define EnableCN1               CNEN1bits.CN1IE = 1 /*enables change notification interrupt*/
#define EnableCN2               CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3               CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN4               CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5               CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6               CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN7               CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN11              CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12              CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN13              CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN15              CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16              CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN21               CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#define EnableCN22               CNEN2bits.CN22IE = 1 /*enables change notification interrupt*/
#define EnableCN23               CNEN2bits.CN23IE = 1 /*enables change notification interrupt*/
#define EnableCN27               CNEN2bits.CN27IE = 1 /*enables change notification interrupt*/
#define EnableCN29               CNEN2bits.CN29IE = 1 /*enables change notification interrupt*/
#define EnableCN30               CNEN2bits.CN30IE = 1 /*enables change notification interrupt*/
#if defined (cn_v2_8)
#define EnableCN8               CNEN1bits.CN8IE = 1 /*enables change notification interrupt*/
#define EnableCN9               CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN10              CNEN1bits.CN10IE = 1 /*enables change notification interrupt*/
#define EnableCN17              CNEN2bits.CN17IE = 1 /*enables change notification interrupt*/
#define EnableCN18              CNEN2bits.CN18IE = 1 /*enables change notification interrupt*/
#define EnableCN19               CNEN2bits.CN19IE = 1 /*enables change notification interrupt*/
#define EnableCN20               CNEN2bits.CN20IE = 1 /*enables change notification interrupt*/
#define EnableCN25               CNEN2bits.CN25IE = 1 /*enables change notification interrupt*/
#define EnableCN26               CNEN2bits.CN26IE = 1 /*enables change notification interrupt*/
#define EnableCN28               CNEN2bits.CN28IE = 1 /*enables change notification interrupt*/
#endif
#endif

#if defined (cn_v2_10) || defined (cn_v2_11) 
#define EnableCN0               CNEN1bits.CN0IE = 1 /*enables change notification interrupt*/
#define EnableCN1               CNEN1bits.CN1IE = 1 /*enables change notification interrupt*/
#define EnableCN2               CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3               CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN4               CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5               CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6               CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN7               CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN8               CNEN1bits.CN8IE = 1 /*enables change notification interrupt*/
#define EnableCN9               CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN10              CNEN1bits.CN10IE = 1 /*enables change notification interrupt*/
#define EnableCN11              CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12              CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN13              CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN14              CNEN1bits.CN14IE = 1 /*enables change notification interrupt*/
#define EnableCN15              CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16              CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN17              CNEN2bits.CN17IE = 1 /*enables change notification interrupt*/
#define EnableCN18              CNEN2bits.CN18IE = 1 /*enables change notification interrupt*/
#define EnableCN22               CNEN2bits.CN22IE = 1 /*enables change notification interrupt*/
#define EnableCN23               CNEN2bits.CN23IE = 1 /*enables change notification interrupt*/
#define EnableCN24               CNEN2bits.CN24IE = 1 /*enables change notification interrupt*/
#define EnableCN25               CNEN2bits.CN25IE = 1 /*enables change notification interrupt*/
#define EnableCN26               CNEN2bits.CN26IE = 1 /*enables change notification interrupt*/
#define EnableCN27               CNEN2bits.CN27IE = 1 /*enables change notification interrupt*/
#define EnableCN28               CNEN2bits.CN28IE = 1 /*enables change notification interrupt*/
#define EnableCN29               CNEN2bits.CN29IE = 1 /*enables change notification interrupt*/
#define EnableCN30               CNEN2bits.CN30IE = 1 /*enables change notification interrupt*/
#define EnableCN31               CNEN2bits.CN31IE = 1 /*enables change notification interrupt*/
#define EnableCN32               CNEN3bits.CN32IE = 1 /*enables change notification interrupt*/
#define EnableCN49               CNEN4bits.CN49IE = 1 /*enables change notification interrupt*/
#define EnableCN50               CNEN4bits.CN50IE = 1 /*enables change notification interrupt*/
#define EnableCN51               CNEN4bits.CN51IE = 1 /*enables change notification interrupt*/
#define EnableCN52               CNEN4bits.CN52IE = 1 /*enables change notification interrupt*/
#define EnableCN53               CNEN4bits.CN53IE = 1 /*enables change notification interrupt*/
#define EnableCN54               CNEN4bits.CN54IE = 1 /*enables change notification interrupt*/
#define EnableCN55               CNEN4bits.CN55IE = 1 /*enables change notification interrupt*/
#define EnableCN56               CNEN4bits.CN56IE = 1 /*enables change notification interrupt*/
#define EnableCN58               CNEN4bits.CN58IE = 1 /*enables change notification interrupt*/
#define EnableCN59               CNEN4bits.CN59IE = 1 /*enables change notification interrupt*/
#define EnableCN60               CNEN4bits.CN60IE = 1 /*enables change notification interrupt*/
#define EnableCN61               CNEN4bits.CN61IE = 1 /*enables change notification interrupt*/
#define EnableCN62               CNEN4bits.CN62IE = 1 /*enables change notification interrupt*/
#define EnableCN63               CNEN4bits.CN63IE = 1 /*enables change notification interrupt*/
#define EnableCN64               CNEN5bits.CN64IE = 1 /*enables change notification interrupt*/
#define EnableCN65               CNEN5bits.CN65IE = 1 /*enables change notification interrupt*/
#define EnableCN68               CNEN5bits.CN68IE = 1 /*enables change notification interrupt*/
#define EnableCN69               CNEN5bits.CN69IE = 1 /*enables change notification interrupt*/
#define EnableCN71               CNEN5bits.CN71IE = 1 /*enables change notification interrupt*/
#define EnableCN83               CNEN6bits.CN83IE = 1 /*enables change notification interrupt*/
#define EnableCN84               CNEN6bits.CN84IE = 1 /*enables change notification interrupt*/
#if defined (cn_v2_11)
#define EnableCN19               CNEN2bits.CN19IE = 1 /*enables change notification interrupt*/
#define EnableCN20               CNEN2bits.CN20IE = 1 /*enables change notification interrupt*/
#define EnableCN21               CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#define EnableCN33               CNEN3bits.CN33IE = 1 /*enables change notification interrupt*/
#define EnableCN34               CNEN3bits.CN34IE = 1 /*enables change notification interrupt*/
#define EnableCN35               CNEN3bits.CN35IE = 1 /*enables change notification interrupt*/
#define EnableCN36               CNEN3bits.CN36IE = 1 /*enables change notification interrupt*/
#define EnableCN37               CNEN3bits.CN37IE = 1 /*enables change notification interrupt*/
#define EnableCN38               CNEN3bits.CN38IE = 1 /*enables change notification interrupt*/
#define EnableCN39               CNEN3bits.CN39IE = 1 /*enables change notification interrupt*/
#define EnableCN40               CNEN3bits.CN40IE = 1 /*enables change notification interrupt*/
#define EnableCN41               CNEN3bits.CN41IE = 1 /*enables change notification interrupt*/
#define EnableCN42               CNEN3bits.CN42IE = 1 /*enables change notification interrupt*/
#define EnableCN43               CNEN3bits.CN43IE = 1 /*enables change notification interrupt*/
#define EnableCN44               CNEN3bits.CN44IE = 1 /*enables change notification interrupt*/
#define EnableCN45               CNEN3bits.CN45IE = 1 /*enables change notification interrupt*/
#define EnableCN46               CNEN3bits.CN46IE = 1 /*enables change notification interrupt*/
#define EnableCN47               CNEN3bits.CN47IE = 1 /*enables change notification interrupt*/
#define EnableCN48               CNEN4bits.CN48IE = 1 /*enables change notification interrupt*/
#define EnableCN57               CNEN4bits.CN57IE = 1 /*enables change notification interrupt*/
#define EnableCN66               CNEN5bits.CN66IE = 1 /*enables change notification interrupt*/
#define EnableCN67               CNEN5bits.CN67IE = 1 /*enables change notification interrupt*/
#define EnableCN70               CNEN5bits.CN70IE = 1 /*enables change notification interrupt*/
#define EnableCN73               CNEN5bits.CN73IE = 1 /*enables change notification interrupt*/
#define EnableCN74               CNEN5bits.CN74IE = 1 /*enables change notification interrupt*/
#define EnableCN75               CNEN5bits.CN75IE = 1 /*enables change notification interrupt*/
#define EnableCN76               CNEN5bits.CN76IE = 1 /*enables change notification interrupt*/
#define EnableCN77               CNEN5bits.CN77IE = 1 /*enables change notification interrupt*/
#define EnableCN78               CNEN5bits.CN78IE = 1 /*enables change notification interrupt*/
#define EnableCN79               CNEN5bits.CN79IE = 1 /*enables change notification interrupt*/
#define EnableCN80               CNEN6bits.CN80IE = 1 /*enables change notification interrupt*/
#define EnableCN81               CNEN6bits.CN81IE = 1 /*enables change notification interrupt*/
#define EnableCN82               CNEN6bits.CN82IE = 1 /*enables change notification interrupt*/

#endif
#endif


#if defined (cn_v2_12) || defined (cn_v2_13) || defined (cn_v2_14)
#define EnableCN2                CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3                CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN4                CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5                CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6                CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN7                CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN8                CNEN1bits.CN8IE = 1 /*enables change notification interrupt*/
#define EnableCN9                CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN10               CNEN1bits.CN10IE = 1 /*enables change notification interrupt*/
#define EnableCN11               CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12               CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN13               CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN14               CNEN1bits.CN14IE = 1 /*enables change notification interrupt*/
#define EnableCN15               CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16               CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN17               CNEN2bits.CN17IE = 1 /*enables change notification interrupt*/
#define EnableCN18               CNEN2bits.CN18IE = 1 /*enables change notification interrupt*/
#define EnableCN22               CNEN2bits.CN22IE = 1 /*enables change notification interrupt*/
#define EnableCN23               CNEN2bits.CN23IE = 1 /*enables change notification interrupt*/
#define EnableCN24               CNEN2bits.CN24IE = 1 /*enables change notification interrupt*/
#define EnableCN25               CNEN2bits.CN25IE = 1 /*enables change notification interrupt*/
#define EnableCN26               CNEN2bits.CN26IE = 1 /*enables change notification interrupt*/
#define EnableCN27               CNEN2bits.CN27IE = 1 /*enables change notification interrupt*/
#define EnableCN28               CNEN2bits.CN28IE = 1 /*enables change notification interrupt*/
#define EnableCN29               CNEN2bits.CN29IE = 1 /*enables change notification interrupt*/
#define EnableCN30               CNEN2bits.CN30IE = 1 /*enables change notification interrupt*/
#define EnableCN31               CNEN2bits.CN31IE = 1 /*enables change notification interrupt*/
#define EnableCN32               CNEN3bits.CN32IE = 1 /*enables change notification interrupt*/
#define EnableCN49               CNEN4bits.CN49IE = 1 /*enables change notification interrupt*/
#define EnableCN50               CNEN4bits.CN50IE = 1 /*enables change notification interrupt*/
#define EnableCN51               CNEN4bits.CN51IE = 1 /*enables change notification interrupt*/
#define EnableCN52               CNEN4bits.CN52IE = 1 /*enables change notification interrupt*/
#define EnableCN53               CNEN4bits.CN53IE = 1 /*enables change notification interrupt*/
#define EnableCN54               CNEN4bits.CN54IE = 1 /*enables change notification interrupt*/
#define EnableCN55               CNEN4bits.CN55IE = 1 /*enables change notification interrupt*/
#define EnableCN56               CNEN4bits.CN56IE = 1 /*enables change notification interrupt*/
#define EnableCN57               CNEN4bits.CN57IE = 1 /*enables change notification interrupt*/
#define EnableCN58               CNEN4bits.CN58IE = 1 /*enables change notification interrupt*/
#define EnableCN59               CNEN4bits.CN59IE = 1 /*enables change notification interrupt*/
#define EnableCN60               CNEN4bits.CN60IE = 1 /*enables change notification interrupt*/
#define EnableCN61               CNEN4bits.CN61IE = 1 /*enables change notification interrupt*/
#define EnableCN62               CNEN4bits.CN62IE = 1 /*enables change notification interrupt*/
#define EnableCN63               CNEN4bits.CN63IE = 1 /*enables change notification interrupt*/
#define EnableCN64               CNEN5bits.CN64IE = 1 /*enables change notification interrupt*/
#define EnableCN65               CNEN5bits.CN65IE = 1 /*enables change notification interrupt*/
#define EnableCN68               CNEN5bits.CN68IE = 1 /*enables change notification interrupt*/
#define EnableCN69               CNEN5bits.CN69IE = 1 /*enables change notification interrupt*/
#define EnableCN70               CNEN5bits.CN70IE = 1 /*enables change notification interrupt*/
#define EnableCN71               CNEN5bits.CN71IE = 1 /*enables change notification interrupt*/
#define EnableCN72               CNEN5bits.CN72IE = 1 /*enables change notification interrupt*/
#define EnableCN73               CNEN5bits.CN73IE = 1 /*enables change notification interrupt*/
#define EnableCN84               CNEN6bits.CN84IE = 1 /*enables change notification interrupt*/
#if defined (cn_v2_13) || defined (cn_v2_14)
#define EnableCN19               CNEN2bits.CN19IE = 1 /*enables change notification interrupt*/
#define EnableCN20               CNEN2bits.CN20IE = 1 /*enables change notification interrupt*/
#define EnableCN21               CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#define EnableCN41               CNEN3bits.CN41IE = 1 /*enables change notification interrupt*/
#define EnableCN42               CNEN3bits.CN42IE = 1 /*enables change notification interrupt*/
#define EnableCN43               CNEN3bits.CN43IE = 1 /*enables change notification interrupt*/
#define EnableCN44               CNEN3bits.CN44IE = 1 /*enables change notification interrupt*/
#define EnableCN45               CNEN3bits.CN45IE = 1 /*enables change notification interrupt*/
#define EnableCN47               CNEN3bits.CN47IE = 1 /*enables change notification interrupt*/
#define EnableCN66               CNEN5bits.CN66IE = 1 /*enables change notification interrupt*/
#define EnableCN67               CNEN5bits.CN67IE = 1 /*enables change notification interrupt*/
#define EnableCN74               CNEN5bits.CN74IE = 1 /*enables change notification interrupt*/
#define EnableCN77               CNEN5bits.CN77IE = 1 /*enables change notification interrupt*/
#define EnableCN78               CNEN5bits.CN78IE = 1 /*enables change notification interrupt*/
#define EnableCN83               CNEN6bits.CN83IE = 1 /*enables change notification interrupt*/
#endif
#if defined (cn_v2_14)
#define EnableCN33               CNEN3bits.CN33IE = 1 /*enables change notification interrupt*/
#define EnableCN34               CNEN3bits.CN34IE = 1 /*enables change notification interrupt*/
#define EnableCN35               CNEN3bits.CN35IE = 1 /*enables change notification interrupt*/
#define EnableCN36               CNEN3bits.CN36IE = 1 /*enables change notification interrupt*/
#define EnableCN37               CNEN3bits.CN37IE = 1 /*enables change notification interrupt*/
#define EnableCN38               CNEN3bits.CN38IE = 1 /*enables change notification interrupt*/
#define EnableCN39               CNEN3bits.CN39IE = 1 /*enables change notification interrupt*/
#define EnableCN40               CNEN3bits.CN40IE = 1 /*enables change notification interrupt*/
#define EnableCN46               CNEN3bits.CN45IE = 1 /*enables change notification interrupt*/
#define EnableCN48               CNEN4bits.CN48IE = 1 /*enables change notification interrupt*/
#define EnableCN75               CNEN5bits.CN75IE = 1 /*enables change notification interrupt*/
#define EnableCN76               CNEN5bits.CN76IE = 1 /*enables change notification interrupt*/
#define EnableCN79               CNEN5bits.CN79IE = 1 /*enables change notification interrupt*/
#define EnableCN80               CNEN6bits.CN80IE = 1 /*enables change notification interrupt*/
#define EnableCN81               CNEN6bits.CN81IE = 1 /*enables change notification interrupt*/
#define EnableCN82               CNEN6bits.CN82IE = 1 /*enables change notification interrupt*/
#endif
#endif

#if defined (cn_v2_15) || defined (cn_v2_16)
#define EnableCN2                CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3                CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN4                CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5                CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6                CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN7                CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN8                CNEN1bits.CN8IE = 1 /*enables change notification interrupt*/
#define EnableCN9                CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN10               CNEN1bits.CN10IE = 1 /*enables change notification interrupt*/
#define EnableCN11               CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12               CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN13               CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN14               CNEN1bits.CN14IE = 1 /*enables change notification interrupt*/
#define EnableCN15               CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16               CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN17               CNEN2bits.CN17IE = 1 /*enables change notification interrupt*/
#define EnableCN18               CNEN2bits.CN18IE = 1 /*enables change notification interrupt*/
#define EnableCN22               CNEN2bits.CN22IE = 1 /*enables change notification interrupt*/
#define EnableCN23               CNEN2bits.CN23IE = 1 /*enables change notification interrupt*/
#define EnableCN24               CNEN2bits.CN24IE = 1 /*enables change notification interrupt*/
#define EnableCN25               CNEN2bits.CN25IE = 1 /*enables change notification interrupt*/
#define EnableCN30               CNEN2bits.CN30IE = 1 /*enables change notification interrupt*/
#define EnableCN31               CNEN2bits.CN31IE = 1 /*enables change notification interrupt*/
#define EnableCN32               CNEN3bits.CN32IE = 1 /*enables change notification interrupt*/
#define EnableCN49               CNEN4bits.CN49IE = 1 /*enables change notification interrupt*/
#define EnableCN50               CNEN4bits.CN50IE = 1 /*enables change notification interrupt*/
#define EnableCN51               CNEN4bits.CN51IE = 1 /*enables change notification interrupt*/
#define EnableCN52               CNEN4bits.CN52IE = 1 /*enables change notification interrupt*/
#define EnableCN53               CNEN4bits.CN53IE = 1 /*enables change notification interrupt*/
#define EnableCN54               CNEN4bits.CN54IE = 1 /*enables change notification interrupt*/
#define EnableCN55               CNEN4bits.CN55IE = 1 /*enables change notification interrupt*/
#define EnableCN56               CNEN4bits.CN56IE = 1 /*enables change notification interrupt*/
#define EnableCN58               CNEN4bits.CN58IE = 1 /*enables change notification interrupt*/
#define EnableCN59               CNEN4bits.CN59IE = 1 /*enables change notification interrupt*/
#define EnableCN60               CNEN4bits.CN60IE = 1 /*enables change notification interrupt*/
#define EnableCN61               CNEN4bits.CN61IE = 1 /*enables change notification interrupt*/
#define EnableCN62               CNEN4bits.CN62IE = 1 /*enables change notification interrupt*/
#define EnableCN63               CNEN4bits.CN63IE = 1 /*enables change notification interrupt*/
#define EnableCN64               CNEN5bits.CN64IE = 1 /*enables change notification interrupt*/
#define EnableCN65               CNEN5bits.CN65IE = 1 /*enables change notification interrupt*/
#define EnableCN68               CNEN5bits.CN68IE = 1 /*enables change notification interrupt*/
#define EnableCN69               CNEN5bits.CN69IE = 1 /*enables change notification interrupt*/
#define EnableCN71               CNEN5bits.CN71IE = 1 /*enables change notification interrupt*/
#define EnableCN72               CNEN5bits.CN72IE = 1 /*enables change notification interrupt*/
#define EnableCN73               CNEN5bits.CN73IE = 1 /*enables change notification interrupt*/
#define EnableCN83               CNEN6bits.CN83IE = 1 /*enables change notification interrupt*/
#if defined (cn_v2_16)
#define EnableCN19               CNEN2bits.CN19IE = 1 /*enables change notification interrupt*/
#define EnableCN20               CNEN2bits.CN20IE = 1 /*enables change notification interrupt*/
#define EnableCN21               CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#define EnableCN33               CNEN3bits.CN33IE = 1 /*enables change notification interrupt*/
#define EnableCN34               CNEN3bits.CN34IE = 1 /*enables change notification interrupt*/
#define EnableCN35               CNEN3bits.CN35IE = 1 /*enables change notification interrupt*/
#define EnableCN36               CNEN3bits.CN36IE = 1 /*enables change notification interrupt*/
#define EnableCN37               CNEN3bits.CN37IE = 1 /*enables change notification interrupt*/
#define EnableCN38               CNEN3bits.CN38IE = 1 /*enables change notification interrupt*/
#define EnableCN39               CNEN3bits.CN39IE = 1 /*enables change notification interrupt*/
#define EnableCN40               CNEN3bits.CN40IE = 1 /*enables change notification interrupt*/
#define EnableCN41               CNEN3bits.CN41IE = 1 /*enables change notification interrupt*/
#define EnableCN42               CNEN3bits.CN42IE = 1 /*enables change notification interrupt*/
#define EnableCN43               CNEN3bits.CN43IE = 1 /*enables change notification interrupt*/
#define EnableCN44               CNEN3bits.CN44IE = 1 /*enables change notification interrupt*/
#define EnableCN45               CNEN3bits.CN45IE = 1 /*enables change notification interrupt*/
#define EnableCN45               CNEN3bits.CN45IE = 1 /*enables change notification interrupt*/
#define EnableCN46               CNEN3bits.CN46IE = 1 /*enables change notification interrupt*/
#define EnableCN47               CNEN3bits.CN47IE = 1 /*enables change notification interrupt*/
#define EnableCN48               CNEN4bits.CN48IE = 1 /*enables change notification interrupt*/
#define EnableCN57               CNEN4bits.CN57IE = 1 /*enables change notification interrupt*/
#define EnableCN66               CNEN5bits.CN66IE = 1 /*enables change notification interrupt*/
#define EnableCN67               CNEN5bits.CN67IE = 1 /*enables change notification interrupt*/
#define EnableCN70               CNEN5bits.CN70IE = 1 /*enables change notification interrupt*/
#define EnableCN74               CNEN5bits.CN74IE = 1 /*enables change notification interrupt*/
#define EnableCN75               CNEN5bits.CN75IE = 1 /*enables change notification interrupt*/
#define EnableCN76               CNEN5bits.CN76IE = 1 /*enables change notification interrupt*/
#define EnableCN77               CNEN5bits.CN77IE = 1 /*enables change notification interrupt*/
#define EnableCN78               CNEN5bits.CN78IE = 1 /*enables change notification interrupt*/
#define EnableCN79               CNEN5bits.CN79IE = 1 /*enables change notification interrupt*/
#define EnableCN80               CNEN6bits.CN80IE = 1 /*enables change notification interrupt*/
#define EnableCN81               CNEN6bits.CN81IE = 1 /*enables change notification interrupt*/
#define EnableCN82               CNEN6bits.CN82IE = 1 /*enables change notification interrupt*/
#endif
#endif

#if	defined (cn_v3_1) || defined (cn_v3_2) || defined (cn_v3_3) || defined (cn_v3_4)
#define EnableCN0               CNEN1bits.CN0IE = 1 /*enables change notification interrupt*/
#define EnableCN1               CNEN1bits.CN1IE = 1 /*enables change notification interrupt*/
#define EnableCN2               CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3               CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN8               CNEN1bits.CN8IE = 1 /*enables change notification interrupt*/
#define EnableCN11              CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12              CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN21               CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#define EnableCN22               CNEN2bits.CN22IE = 1 /*enables change notification interrupt*/
#if	defined (cn_v3_1) || defined (cn_v3_2) || defined (cn_v3_4)
#define EnableCN4               CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5               CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6               CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN14              CNEN1bits.CN14IE = 1 /*enables change notification interrupt*/
#endif
#if	defined (cn_v3_1) || defined (cn_v3_2) 
#define EnableCN13              CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN23               CNEN2bits.CN23IE = 1 /*enables change notification interrupt*/
#endif
#define EnableCN29               CNEN2bits.CN29IE = 1 /*enables change notification interrupt*/
#define EnableCN30               CNEN2bits.CN30IE = 1 /*enables change notification interrupt*/
#if defined (cn_v3_2) 
#define EnableCN7               CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN9               CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN15              CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16              CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN24               CNEN2bits.CN24IE = 1 /*enables change notification interrupt*/
#define EnableCN27               CNEN2bits.CN27IE = 1 /*enables change notification interrupt*/
#endif
#endif

#if	defined (cn_v3_5) || defined (cn_v3_6) || defined (cn_v3_7)
#define EnableCN0               CNEN1bits.CN0IE = 1 /*enables change notification interrupt*/
#define EnableCN1               CNEN1bits.CN1IE = 1 /*enables change notification interrupt*/
#define EnableCN2               CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3               CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN4               CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5               CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6               CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN11              CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12              CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN13              CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN14              CNEN1bits.CN14IE = 1 /*enables change notification interrupt*/
#define EnableCN21               CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#define EnableCN22               CNEN2bits.CN22IE = 1 /*enables change notification interrupt*/
#define EnableCN23               CNEN2bits.CN23IE = 1 /*enables change notification interrupt*/
#define EnableCN29               CNEN2bits.CN29IE = 1 /*enables change notification interrupt*/
#define EnableCN30               CNEN2bits.CN30IE = 1 /*enables change notification interrupt*/
#if	defined (cn_v3_6) || defined (cn_v3_7)
#define EnableCN7               CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN9               CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN15              CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16              CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN24               CNEN2bits.CN24IE = 1 /*enables change notification interrupt*/
#define EnableCN27               CNEN2bits.CN27IE = 1 /*enables change notification interrupt*/
#endif
#if	defined (cn_v3_7)
#define EnableCN10              CNEN1bits.CN10IE = 1 /*enables change notification interrupt*/
#define EnableCN17              CNEN2bits.CN17IE = 1 /*enables change notification interrupt*/
#define EnableCN18              CNEN2bits.CN18IE = 1 /*enables change notification interrupt*/
#define EnableCN19               CNEN2bits.CN19IE = 1 /*enables change notification interrupt*/
#define EnableCN20               CNEN2bits.CN20IE = 1 /*enables change notification interrupt*/
#define EnableCN25               CNEN2bits.CN25IE = 1 /*enables change notification interrupt*/
#define EnableCN26               CNEN2bits.CN26IE = 1 /*enables change notification interrupt*/
#define EnableCN28               CNEN2bits.CN28IE = 1 /*enables change notification interrupt*/
#define EnableCN31               CNEN2bits.CN31IE = 1 /*enables change notification interrupt*/
#define EnableCN32               CNEN3bits.CN32IE = 1 /*enables change notification interrupt*/
#define EnableCN33               CNEN3bits.CN33IE = 1 /*enables change notification interrupt*/
#define EnableCN34               CNEN3bits.CN34IE = 1 /*enables change notification interrupt*/
#define EnableCN35               CNEN3bits.CN35IE = 1 /*enables change notification interrupt*/
#define EnableCN36               CNEN3bits.CN36IE = 1 /*enables change notification interrupt*/
#endif
#endif


#if defined (cn_v4_1)||defined (cn_v4_2) ||defined (cn_v4_3) 
#define EnableCN0               CNEN1bits.CN0IE = 1 /*enables change notification interrupt*/
#define EnableCN1               CNEN1bits.CN1IE = 1 /*enables change notification interrupt*/
#define EnableCN2               CNEN1bits.CN2IE = 1 /*enables change notification interrupt*/
#define EnableCN3               CNEN1bits.CN3IE = 1 /*enables change notification interrupt*/
#define EnableCN8               CNEN1bits.CN8IE = 1 /*enables change notification interrupt*/
#define EnableCN11              CNEN1bits.CN11IE = 1 /*enables change notification interrupt*/
#define EnableCN12              CNEN1bits.CN12IE = 1 /*enables change notification interrupt*/
#define EnableCN21              CNEN2bits.CN21IE = 1 /*enables change notification interrupt*/
#define EnableCN22              CNEN2bits.CN22IE = 1 /*enables change notification interrupt*/
#define EnableCN29              CNEN2bits.CN29IE = 1 /*enables change notification interrupt*/
#define EnableCN30              CNEN2bits.CN30IE = 1 /*enables change notification interrupt*/
#if defined (cn_v4_2) || defined (cn_v4_3)
#define EnableCN4               CNEN1bits.CN4IE = 1 /*enables change notification interrupt*/
#define EnableCN5               CNEN1bits.CN5IE = 1 /*enables change notification interrupt*/
#define EnableCN6               CNEN1bits.CN6IE = 1 /*enables change notification interrupt*/
#define EnableCN13              CNEN1bits.CN13IE = 1 /*enables change notification interrupt*/
#define EnableCN14              CNEN1bits.CN14IE = 1 /*enables change notification interrupt*/
#define EnableCN23              CNEN2bits.CN23IE = 1 /*enables change notification interrupt*/
#if defined (cn_v4_3)
#define EnableCN7               CNEN1bits.CN7IE = 1 /*enables change notification interrupt*/
#define EnableCN9               CNEN1bits.CN9IE = 1 /*enables change notification interrupt*/
#define EnableCN15              CNEN1bits.CN15IE = 1 /*enables change notification interrupt*/
#define EnableCN16              CNEN2bits.CN16IE = 1 /*enables change notification interrupt*/
#define EnableCN24              CNEN2bits.CN24IE = 1 /*enables change notification interrupt*/
#define EnableCN27              CNEN2bits.CN27IE = 1 /*enables change notification interrupt*/
#endif
#endif
#endif


/******************************************************************
Macro       : DisableCNx
 
Include     : ports.h
 
Description : This macro disables the individual change notification  interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/

#if defined (cn_v1_1) || defined (cn_v1_2)
#define DisableCN0               CNEN1bits.CN0IE = 0 /*Disables change notification interrupt*/
#define DisableCN1               CNEN1bits.CN1IE = 0 /*Disables change notification interrupt*/
#define DisableCN2               CNEN1bits.CN2IE = 0 /*Disables change notification interrupt*/
#define DisableCN3               CNEN1bits.CN3IE = 0 /*Disables change notification interrupt*/
#define DisableCN4               CNEN1bits.CN4IE = 0 /*Disables change notification interrupt*/
#define DisableCN5               CNEN1bits.CN5IE = 0 /*Disables change notification interrupt*/
#define DisableCN6               CNEN1bits.CN6IE = 0 /*Disables change notification interrupt*/
#define DisableCN7               CNEN1bits.CN7IE = 0 /*Disables change notification interrupt*/
#define DisableCN11              CNEN1bits.CN11IE = 0 /*Disables change notification interrupt*/
#define DisableCN12              CNEN1bits.CN12IE = 0 /*Disables change notification interrupt*/
#define DisableCN13              CNEN1bits.CN13IE = 0 /*Disables change notification interrupt*/
#define DisableCN14              CNEN1bits.CN14IE = 0 /*Disables change notification interrupt*/
#define DisableCN15              CNEN1bits.CN15IE = 0 /*Disables change notification interrupt*/
#define DisableCN16              CNEN2bits.CN16IE = 0 /*Disables change notification interrupt*/
#define DisableCN21               CNEN2bits.CN21IE = 0 /*Disables change notification interrupt*/
#define DisableCN22               CNEN2bits.CN22IE = 0 /*Disables change notification interrupt*/
#define DisableCN23               CNEN2bits.CN23IE = 0 /*Disables change notification interrupt*/
#define DisableCN24               CNEN2bits.CN24IE = 0 /*Disables change notification interrupt*/
#define DisableCN27               CNEN2bits.CN27IE = 0 /*Disables change notification interrupt*/
#define DisableCN29               CNEN2bits.CN29IE = 0 /*Disables change notification interrupt*/
#define DisableCN30               CNEN2bits.CN30IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v1_2)
#define DisableCN8               CNEN1bits.CN8IE = 0 /*Disables change notification interrupt*/
#define DisableCN9               CNEN1bits.CN9IE = 0 /*Disables change notification interrupt*/
#define DisableCN10              CNEN1bits.CN10IE = 0 /*Disables change notification interrupt*/
#define DisableCN17              CNEN2bits.CN17IE = 0 /*Disables change notification interrupt*/
#define DisableCN18              CNEN2bits.CN18IE = 0 /*Disables change notification interrupt*/
#define DisableCN19               CNEN2bits.CN19IE = 0 /*Disables change notification interrupt*/
#define DisableCN20               CNEN2bits.CN20IE = 0 /*Disables change notification interrupt*/
#define DisableCN25               CNEN2bits.CN25IE = 0 /*Disables change notification interrupt*/
#define DisableCN26               CNEN2bits.CN26IE = 0 /*Disables change notification interrupt*/
#define DisableCN28               CNEN2bits.CN28IE = 0 /*Disables change notification interrupt*/
#endif
#endif

#if defined (cn_v1_3)||defined (cn_v1_4) 
#define DisableCN0               CNEN1bits.CN0IE = 0 /*Disables change notification interrupt*/
#define DisableCN1               CNEN1bits.CN1IE = 0 /*Disables change notification interrupt*/
#define DisableCN2               CNEN1bits.CN2IE = 0 /*Disables change notification interrupt*/
#define DisableCN3               CNEN1bits.CN3IE = 0 /*Disables change notification interrupt*/
#define DisableCN4               CNEN1bits.CN4IE = 0 /*Disables change notification interrupt*/
#define DisableCN5               CNEN1bits.CN5IE = 0 /*Disables change notification interrupt*/
#define DisableCN6               CNEN1bits.CN6IE = 0 /*Disables change notification interrupt*/
#define DisableCN7               CNEN1bits.CN7IE = 0 /*Disables change notification interrupt*/
#define DisableCN8               CNEN1bits.CN8IE = 0 /*Disables change notification interrupt*/
#define DisableCN9               CNEN1bits.CN9IE = 0 /*Disables change notification interrupt*/
#define DisableCN10              CNEN1bits.CN10IE = 0 /*Disables change notification interrupt*/
#define DisableCN11              CNEN1bits.CN11IE = 0 /*Disables change notification interrupt*/
#define DisableCN12              CNEN1bits.CN12IE = 0 /*Disables change notification interrupt*/
#define DisableCN13              CNEN1bits.CN13IE = 0 /*Disables change notification interrupt*/
#define DisableCN14              CNEN1bits.CN14IE = 0 /*Disables change notification interrupt*/
#define DisableCN15              CNEN1bits.CN15IE = 0 /*Disables change notification interrupt*/
#define DisableCN16              CNEN2bits.CN16IE = 0 /*Disables change notification interrupt*/
#define DisableCN17              CNEN2bits.CN17IE = 0 /*Disables change notification interrupt*/
#define DisableCN18              CNEN2bits.CN18IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v1_4)
#define DisableCN19               CNEN2bits.CN19IE = 0 /*Disables change notification interrupt*/
#define DisableCN20               CNEN2bits.CN20IE = 0 /*Disables change notification interrupt*/
#define DisableCN21               CNEN2bits.CN21IE = 0 /*Disables change notification interrupt*/
#endif
#endif


#if defined (cn_v2_4) || defined (cn_v2_5) || defined (cn_v2_6)
#define DisableCN0               CNEN1bits.CN0IE = 0 /*Disables change notification interrupt*/
#define DisableCN1               CNEN1bits.CN1IE = 0 /*Disables change notification interrupt*/
#define DisableCN2               CNEN1bits.CN2IE = 0 /*Disables change notification interrupt*/
#define DisableCN3               CNEN1bits.CN3IE = 0 /*Disables change notification interrupt*/
#define DisableCN4               CNEN1bits.CN4IE = 0 /*Disables change notification interrupt*/
#define DisableCN5               CNEN1bits.CN5IE = 0 /*Disables change notification interrupt*/
#define DisableCN6               CNEN1bits.CN6IE = 0 /*Disables change notification interrupt*/
#define DisableCN7               CNEN1bits.CN7IE = 0 /*Disables change notification interrupt*/
#define DisableCN8               CNEN1bits.CN8IE = 0 /*Disables change notification interrupt*/
#define DisableCN9               CNEN1bits.CN9IE = 0 /*Disables change notification interrupt*/
#define DisableCN10              CNEN1bits.CN10IE = 0 /*Disables change notification interrupt*/
#define DisableCN11              CNEN1bits.CN11IE = 0 /*Disables change notification interrupt*/
#define DisableCN12              CNEN1bits.CN12IE = 0 /*Disables change notification interrupt*/
#define DisableCN13              CNEN1bits.CN13IE = 0 /*Disables change notification interrupt*/
#define DisableCN14              CNEN1bits.CN14IE = 0 /*Disables change notification interrupt*/
#define DisableCN15              CNEN1bits.CN15IE = 0 /*Disables change notification interrupt*/
#define DisableCN16              CNEN2bits.CN16IE = 0 /*Disables change notification interrupt*/
#define DisableCN17              CNEN2bits.CN17IE = 0 /*Disables change notification interrupt*/
#define DisableCN18              CNEN2bits.CN18IE = 0 /*Disables change notification interrupt*/
#define DisableCN22               CNEN2bits.CN22IE = 0 /*Disables change notification interrupt*/
#define DisableCN23               CNEN2bits.CN23IE = 0 /*Disables change notification interrupt*/
#define DisableCN24               CNEN2bits.CN24IE = 0 /*Disables change notification interrupt*/
#define DisableCN25               CNEN2bits.CN25IE = 0 /*Disables change notification interrupt*/
#define DisableCN26               CNEN2bits.CN26IE = 0 /*Disables change notification interrupt*/
#define DisableCN27               CNEN2bits.CN27IE = 0 /*Disables change notification interrupt*/
#define DisableCN28               CNEN2bits.CN28IE = 0 /*Disables change notification interrupt*/
#define DisableCN29               CNEN2bits.CN29IE = 0 /*Disables change notification interrupt*/
#define DisableCN30               CNEN2bits.CN30IE = 0 /*Disables change notification interrupt*/
#define DisableCN31               CNEN2bits.CN31IE = 0 /*Disables change notification interrupt*/
#define DisableCN32               CNEN3bits.CN32IE = 0 /*Disables change notification interrupt*/
#define DisableCN49               CNEN4bits.CN49IE = 0 /*Disables change notification interrupt*/
#define DisableCN50               CNEN4bits.CN50IE = 0 /*Disables change notification interrupt*/
#define DisableCN51               CNEN4bits.CN51IE = 0 /*Disables change notification interrupt*/
#define DisableCN52               CNEN4bits.CN52IE = 0 /*Disables change notification interrupt*/
#define DisableCN53               CNEN4bits.CN53IE = 0 /*Disables change notification interrupt*/
#define DisableCN54               CNEN4bits.CN54IE = 0 /*Disables change notification interrupt*/
#define DisableCN55               CNEN4bits.CN55IE = 0 /*Disables change notification interrupt*/
#define DisableCN56               CNEN4bits.CN56IE = 0 /*Disables change notification interrupt*/
#define DisableCN58               CNEN4bits.CN58IE = 0 /*Disables change notification interrupt*/
#define DisableCN59               CNEN4bits.CN59IE = 0 /*Disables change notification interrupt*/
#define DisableCN60               CNEN4bits.CN60IE = 0 /*Disables change notification interrupt*/
#define DisableCN61               CNEN4bits.CN61IE = 0 /*Disables change notification interrupt*/
#define DisableCN62               CNEN4bits.CN62IE = 0 /*Disables change notification interrupt*/
#define DisableCN63               CNEN4bits.CN63IE = 0 /*Disables change notification interrupt*/
#define DisableCN64               CNEN5bits.CN64IE = 0 /*Disables change notification interrupt*/
#define DisableCN65               CNEN5bits.CN65IE = 0 /*Disables change notification interrupt*/
#define DisableCN68               CNEN5bits.CN68IE = 0 /*Disables change notification interrupt*/
#define DisableCN69               CNEN5bits.CN69IE = 0 /*Disables change notification interrupt*/
#define DisableCN71               CNEN5bits.CN71IE = 0 /*Disables change notification interrupt*/
#define DisableCN72               CNEN5bits.CN72IE = 0 /*Disables change notification interrupt*/
#define DisableCN83               CNEN6bits.CN83IE = 0 /*Disables change notification interrupt*/
#define DisableCN84               CNEN6bits.CN84IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v2_5)|| defined (cn_v2_6)
#define DisableCN19               CNEN2bits.CN19IE = 0 /*Disables change notification interrupt*/
#define DisableCN20               CNEN2bits.CN20IE = 0 /*Disables change notification interrupt*/
#define DisableCN21               CNEN2bits.CN21IE = 0 /*Disables change notification interrupt*/
#define DisableCN41               CNEN3bits.CN41IE = 0 /*Disables change notification interrupt*/
#define DisableCN42               CNEN3bits.CN42IE = 0 /*Disables change notification interrupt*/
#define DisableCN43               CNEN3bits.CN43IE = 0 /*Disables change notification interrupt*/
#define DisableCN44               CNEN3bits.CN44IE = 0 /*Disables change notification interrupt*/
#define DisableCN45               CNEN3bits.CN45IE = 0 /*Disables change notification interrupt*/
#define DisableCN47               CNEN3bits.CN47IE = 0 /*Disables change notification interrupt*/
#define DisableCN57               CNEN4bits.CN57IE = 0 /*Disables change notification interrupt*/
#define DisableCN66               CNEN5bits.CN66IE = 0 /*Disables change notification interrupt*/
#define DisableCN67               CNEN5bits.CN67IE = 0 /*Disables change notification interrupt*/
#define DisableCN73               CNEN5bits.CN73IE = 0 /*Disables change notification interrupt*/
#define DisableCN74               CNEN5bits.CN74IE = 0 /*Disables change notification interrupt*/
#define DisableCN77               CNEN5bits.CN77IE = 0 /*Disables change notification interrupt*/
#define DisableCN78               CNEN5bits.CN78IE = 0 /*Disables change notification interrupt*/
#endif
#if defined (cn_v2_6)
#define DisableCN33               CNEN3bits.CN33IE = 0 /*Disables change notification interrupt*/
#define DisableCN34               CNEN3bits.CN34IE = 0 /*Disables change notification interrupt*/
#define DisableCN35               CNEN3bits.CN35IE = 0 /*Disables change notification interrupt*/
#define DisableCN36               CNEN3bits.CN36IE = 0 /*Disables change notification interrupt*/
#define DisableCN37               CNEN3bits.CN37IE = 0 /*Disables change notification interrupt*/
#define DisableCN38               CNEN3bits.CN38IE = 0 /*Disables change notification interrupt*/
#define DisableCN39               CNEN3bits.CN39IE = 0 /*Disables change notification interrupt*/
#define DisableCN40               CNEN3bits.CN40IE = 0 /*Disables change notification interrupt*/
#define DisableCN46               CNEN3bits.CN46IE = 0 /*Disables change notification interrupt*/
#define DisableCN48               CNEN4bits.CN48IE = 0 /*Disables change notification interrupt*/
#define DisableCN75               CNEN5bits.CN75IE = 0 /*Disables change notification interrupt*/
#define DisableCN76               CNEN5bits.CN76IE = 0 /*Disables change notification interrupt*/
#define DisableCN79               CNEN5bits.CN79IE = 0 /*Disables change notification interrupt*/
#define DisableCN80               CNEN6bits.CN80IE = 0 /*Disables change notification interrupt*/
#define DisableCN81               CNEN6bits.CN81IE = 0 /*Disables change notification interrupt*/
#define DisableCN82               CNEN6bits.CN82IE = 0 /*Disables change notification interrupt*/
#endif
#endif


#if defined (cn_v2_1) || defined (cn_v2_2) || defined (cn_v2_3) 
#define DisableCN0               CNEN1bits.CN0IE = 0 /*Disables change notification interrupt*/
#define DisableCN1               CNEN1bits.CN1IE = 0 /*Disables change notification interrupt*/
#define DisableCN2               CNEN1bits.CN2IE = 0 /*Disables change notification interrupt*/
#define DisableCN3               CNEN1bits.CN3IE = 0 /*Disables change notification interrupt*/
#define DisableCN4               CNEN1bits.CN4IE = 0 /*Disables change notification interrupt*/
#define DisableCN5               CNEN1bits.CN5IE = 0 /*Disables change notification interrupt*/
#define DisableCN6               CNEN1bits.CN6IE = 0 /*Disables change notification interrupt*/
#define DisableCN7               CNEN1bits.CN7IE = 0 /*Disables change notification interrupt*/
#define DisableCN8               CNEN1bits.CN8IE = 0 /*Disables change notification interrupt*/
#define DisableCN9               CNEN1bits.CN9IE = 0 /*Disables change notification interrupt*/
#define DisableCN10              CNEN1bits.CN10IE = 0 /*Disables change notification interrupt*/
#define DisableCN11              CNEN1bits.CN11IE = 0 /*Disables change notification interrupt*/
#define DisableCN12              CNEN1bits.CN12IE = 0 /*Disables change notification interrupt*/
#define DisableCN13              CNEN1bits.CN13IE = 0 /*Disables change notification interrupt*/
#define DisableCN14              CNEN1bits.CN14IE = 0 /*Disables change notification interrupt*/
#define DisableCN15              CNEN1bits.CN15IE = 0 /*Disables change notification interrupt*/
#define DisableCN16              CNEN2bits.CN16IE = 0 /*Disables change notification interrupt*/
#define DisableCN17              CNEN2bits.CN17IE = 0 /*Disables change notification interrupt*/
#define DisableCN18              CNEN2bits.CN18IE = 0 /*Disables change notification interrupt*/
#define DisableCN22               CNEN2bits.CN22IE = 0 /*Disables change notification interrupt*/
#define DisableCN23               CNEN2bits.CN23IE = 0 /*Disables change notification interrupt*/
#define DisableCN24               CNEN2bits.CN24IE = 0 /*Disables change notification interrupt*/
#define DisableCN25               CNEN2bits.CN25IE = 0 /*Disables change notification interrupt*/
#define DisableCN26               CNEN2bits.CN26IE = 0 /*Disables change notification interrupt*/
#define DisableCN27               CNEN2bits.CN27IE = 0 /*Disables change notification interrupt*/
#define DisableCN28               CNEN2bits.CN28IE = 0 /*Disables change notification interrupt*/
#define DisableCN29               CNEN2bits.CN29IE = 0 /*Disables change notification interrupt*/
#define DisableCN30               CNEN2bits.CN30IE = 0 /*Disables change notification interrupt*/
#define DisableCN31               CNEN2bits.CN31IE = 0 /*Disables change notification interrupt*/
#define DisableCN32               CNEN3bits.CN32IE = 0 /*Disables change notification interrupt*/
#define DisableCN49               CNEN4bits.CN49IE = 0 /*Disables change notification interrupt*/
#define DisableCN50               CNEN4bits.CN50IE = 0 /*Disables change notification interrupt*/
#define DisableCN51               CNEN4bits.CN51IE = 0 /*Disables change notification interrupt*/
#define DisableCN52               CNEN4bits.CN52IE = 0 /*Disables change notification interrupt*/
#define DisableCN53               CNEN4bits.CN53IE = 0 /*Disables change notification interrupt*/
#define DisableCN54               CNEN4bits.CN54IE = 0 /*Disables change notification interrupt*/
#define DisableCN55               CNEN4bits.CN55IE = 0 /*Disables change notification interrupt*/
#define DisableCN56               CNEN4bits.CN56IE = 0 /*Disables change notification interrupt*/
#define DisableCN58               CNEN4bits.CN58IE = 0 /*Disables change notification interrupt*/
#define DisableCN59               CNEN4bits.CN59IE = 0 /*Disables change notification interrupt*/
#define DisableCN60               CNEN4bits.CN60IE = 0 /*Disables change notification interrupt*/
#define DisableCN61               CNEN4bits.CN61IE = 0 /*Disables change notification interrupt*/
#define DisableCN62               CNEN4bits.CN62IE = 0 /*Disables change notification interrupt*/
#define DisableCN63               CNEN4bits.CN63IE = 0 /*Disables change notification interrupt*/
#define DisableCN64               CNEN5bits.CN64IE = 0 /*Disables change notification interrupt*/
#define DisableCN65               CNEN5bits.CN65IE = 0 /*Disables change notification interrupt*/
#define DisableCN68               CNEN5bits.CN68IE = 0 /*Disables change notification interrupt*/
#define DisableCN69               CNEN5bits.CN69IE = 0 /*Disables change notification interrupt*/
#define DisableCN71               CNEN5bits.CN71IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v2_2)|| defined (cn_v2_3)
#define DisableCN19               CNEN2bits.CN19IE = 0 /*Disables change notification interrupt*/
#define DisableCN20               CNEN2bits.CN20IE = 0 /*Disables change notification interrupt*/
#define DisableCN21               CNEN2bits.CN21IE = 0 /*Disables change notification interrupt*/
#define DisableCN41               CNEN3bits.CN41IE = 0 /*Disables change notification interrupt*/
#define DisableCN42               CNEN3bits.CN42IE = 0 /*Disables change notification interrupt*/
#define DisableCN43               CNEN3bits.CN43IE = 0 /*Disables change notification interrupt*/
#define DisableCN44               CNEN3bits.CN44IE = 0 /*Disables change notification interrupt*/
#define DisableCN45               CNEN3bits.CN45IE = 0 /*Disables change notification interrupt*/
#define DisableCN47               CNEN3bits.CN47IE = 0 /*Disables change notification interrupt*/
#define DisableCN57               CNEN4bits.CN57IE = 0 /*Disables change notification interrupt*/
#define DisableCN66               CNEN5bits.CN66IE = 0 /*Disables change notification interrupt*/
#define DisableCN67               CNEN5bits.CN67IE = 0 /*Disables change notification interrupt*/
#define DisableCN70               CNEN5bits.CN70IE = 0 /*Disables change notification interrupt*/
#define DisableCN74               CNEN5bits.CN74IE = 0 /*Disables change notification interrupt*/
#define DisableCN77               CNEN5bits.CN77IE = 0 /*Disables change notification interrupt*/
#define DisableCN78               CNEN5bits.CN78IE = 0 /*Disables change notification interrupt*/
#endif
#if defined (cn_v2_3)||defined(LIB_BUILD)
#define DisableCN33               CNEN3bits.CN33IE = 0 /*Disables change notification interrupt*/
#define DisableCN34               CNEN3bits.CN34IE = 0 /*Disables change notification interrupt*/
#define DisableCN35               CNEN3bits.CN35IE = 0 /*Disables change notification interrupt*/
#define DisableCN36               CNEN3bits.CN36IE = 0 /*Disables change notification interrupt*/
#define DisableCN37               CNEN3bits.CN37IE = 0 /*Disables change notification interrupt*/
#define DisableCN38               CNEN3bits.CN38IE = 0 /*Disables change notification interrupt*/
#define DisableCN39               CNEN3bits.CN39IE = 0 /*Disables change notification interrupt*/
#define DisableCN40               CNEN3bits.CN40IE = 0 /*Disables change notification interrupt*/
#define DisableCN46               CNEN3bits.CN46IE = 0 /*Disables change notification interrupt*/
#define DisableCN48               CNEN4bits.CN48IE = 0 /*Disables change notification interrupt*/
#define DisableCN75               CNEN5bits.CN75IE = 0 /*Disables change notification interrupt*/
#define DisableCN76               CNEN5bits.CN76IE = 0 /*Disables change notification interrupt*/
#define DisableCN79               CNEN5bits.CN79IE = 0 /*Disables change notification interrupt*/
#define DisableCN80               CNEN6bits.CN80IE = 0 /*Disables change notification interrupt*/
#define DisableCN81               CNEN6bits.CN81IE = 0 /*Disables change notification interrupt*/
#define DisableCN82               CNEN6bits.CN82IE = 0 /*Disables change notification interrupt*/
#endif
#endif


#if	defined (cn_v2_8) || defined (cn_v2_9)
#define DisableCN0               CNEN1bits.CN0IE = 0 /*Disables change notification interrupt*/
#define DisableCN1               CNEN1bits.CN1IE = 0 /*Disables change notification interrupt*/
#define DisableCN2               CNEN1bits.CN2IE = 0 /*Disables change notification interrupt*/
#define DisableCN3               CNEN1bits.CN3IE = 0 /*Disables change notification interrupt*/
#define DisableCN4               CNEN1bits.CN4IE = 0 /*Disables change notification interrupt*/
#define DisableCN5               CNEN1bits.CN5IE = 0 /*Disables change notification interrupt*/
#define DisableCN6               CNEN1bits.CN6IE = 0 /*Disables change notification interrupt*/
#define DisableCN7               CNEN1bits.CN7IE = 0 /*Disables change notification interrupt*/
#define DisableCN11              CNEN1bits.CN11IE = 0 /*Disables change notification interrupt*/
#define DisableCN12              CNEN1bits.CN12IE = 0 /*Disables change notification interrupt*/
#define DisableCN13              CNEN1bits.CN13IE = 0 /*Disables change notification interrupt*/
#define DisableCN15              CNEN1bits.CN15IE = 0 /*Disables change notification interrupt*/
#define DisableCN16              CNEN2bits.CN16IE = 0 /*Disables change notification interrupt*/
#define DisableCN21               CNEN2bits.CN21IE = 0 /*Disables change notification interrupt*/
#define DisableCN22               CNEN2bits.CN22IE = 0 /*Disables change notification interrupt*/
#define DisableCN23               CNEN2bits.CN23IE = 0 /*Disables change notification interrupt*/
#define DisableCN27               CNEN2bits.CN27IE = 0 /*Disables change notification interrupt*/
#define DisableCN29               CNEN2bits.CN29IE = 0 /*Disables change notification interrupt*/
#define DisableCN30               CNEN2bits.CN30IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v2_8)
#define DisableCN8               CNEN1bits.CN8IE = 0 /*Disables change notification interrupt*/
#define DisableCN9               CNEN1bits.CN9IE = 0 /*Disables change notification interrupt*/
#define DisableCN10              CNEN1bits.CN10IE = 0 /*Disables change notification interrupt*/
#define DisableCN17              CNEN2bits.CN17IE = 0 /*Disables change notification interrupt*/
#define DisableCN18              CNEN2bits.CN18IE = 0 /*Disables change notification interrupt*/
#define DisableCN19               CNEN2bits.CN19IE = 0 /*Disables change notification interrupt*/
#define DisableCN20               CNEN2bits.CN20IE = 0 /*Disables change notification interrupt*/
#define DisableCN25               CNEN2bits.CN25IE = 0 /*Disables change notification interrupt*/
#define DisableCN26               CNEN2bits.CN26IE = 0 /*Disables change notification interrupt*/
#define DisableCN28               CNEN2bits.CN28IE = 0 /*Disables change notification interrupt*/
#endif
#endif

#if defined (cn_v2_10) || defined (cn_v2_11)
#define DisableCN0               CNEN1bits.CN0IE = 0 /*Disables change notification interrupt*/
#define DisableCN1               CNEN1bits.CN1IE = 0 /*Disables change notification interrupt*/
#define DisableCN2               CNEN1bits.CN2IE = 0 /*Disables change notification interrupt*/
#define DisableCN3               CNEN1bits.CN3IE = 0 /*Disables change notification interrupt*/
#define DisableCN4               CNEN1bits.CN4IE = 0 /*Disables change notification interrupt*/
#define DisableCN5               CNEN1bits.CN5IE = 0 /*Disables change notification interrupt*/
#define DisableCN6               CNEN1bits.CN6IE = 0 /*Disables change notification interrupt*/
#define DisableCN7               CNEN1bits.CN7IE = 0 /*Disables change notification interrupt*/
#define DisableCN8               CNEN1bits.CN8IE = 0 /*Disables change notification interrupt*/
#define DisableCN9               CNEN1bits.CN9IE = 0 /*Disables change notification interrupt*/
#define DisableCN10              CNEN1bits.CN10IE = 0 /*Disables change notification interrupt*/
#define DisableCN11              CNEN1bits.CN11IE = 0 /*Disables change notification interrupt*/
#define DisableCN12              CNEN1bits.CN12IE = 0 /*Disables change notification interrupt*/
#define DisableCN13              CNEN1bits.CN13IE = 0 /*Disables change notification interrupt*/
#define DisableCN14              CNEN1bits.CN14IE = 0 /*Disables change notification interrupt*/
#define DisableCN15              CNEN1bits.CN15IE = 0 /*Disables change notification interrupt*/
#define DisableCN16              CNEN2bits.CN16IE = 0 /*Disables change notification interrupt*/
#define DisableCN17              CNEN2bits.CN17IE = 0 /*Disables change notification interrupt*/
#define DisableCN18              CNEN2bits.CN18IE = 0 /*Disables change notification interrupt*/
#define DisableCN22               CNEN2bits.CN22IE = 0 /*Disables change notification interrupt*/
#define DisableCN23               CNEN2bits.CN23IE = 0 /*Disables change notification interrupt*/
#define DisableCN24               CNEN2bits.CN24IE = 0 /*Disables change notification interrupt*/
#define DisableCN25               CNEN2bits.CN25IE = 0 /*Disables change notification interrupt*/
#define DisableCN26               CNEN2bits.CN26IE = 0 /*Disables change notification interrupt*/
#define DisableCN27               CNEN2bits.CN27IE = 0 /*Disables change notification interrupt*/
#define DisableCN28               CNEN2bits.CN28IE = 0 /*Disables change notification interrupt*/
#define DisableCN29               CNEN2bits.CN29IE = 0 /*Disables change notification interrupt*/
#define DisableCN30               CNEN2bits.CN30IE = 0 /*Disables change notification interrupt*/
#define DisableCN31               CNEN2bits.CN31IE = 0 /*Disables change notification interrupt*/
#define DisableCN32               CNEN3bits.CN32IE = 0 /*Disables change notification interrupt*/
#define DisableCN49               CNEN4bits.CN49IE = 0 /*Disables change notification interrupt*/
#define DisableCN50               CNEN4bits.CN50IE = 0 /*Disables change notification interrupt*/
#define DisableCN51               CNEN4bits.CN51IE = 0 /*Disables change notification interrupt*/
#define DisableCN52               CNEN4bits.CN52IE = 0 /*Disables change notification interrupt*/
#define DisableCN53               CNEN4bits.CN53IE = 0 /*Disables change notification interrupt*/
#define DisableCN54               CNEN4bits.CN54IE = 0 /*Disables change notification interrupt*/
#define DisableCN55               CNEN4bits.CN55IE = 0 /*Disables change notification interrupt*/
#define DisableCN56               CNEN4bits.CN56IE = 0 /*Disables change notification interrupt*/
#define DisableCN58               CNEN4bits.CN58IE = 0 /*Disables change notification interrupt*/
#define DisableCN59               CNEN4bits.CN59IE = 0 /*Disables change notification interrupt*/
#define DisableCN60               CNEN4bits.CN60IE = 0 /*Disables change notification interrupt*/
#define DisableCN61               CNEN4bits.CN61IE = 0 /*Disables change notification interrupt*/
#define DisableCN62               CNEN4bits.CN62IE = 0 /*Disables change notification interrupt*/
#define DisableCN63               CNEN4bits.CN63IE = 0 /*Disables change notification interrupt*/
#define DisableCN64               CNEN5bits.CN64IE = 0 /*Disables change notification interrupt*/
#define DisableCN65               CNEN5bits.CN65IE = 0 /*Disables change notification interrupt*/
#define DisableCN68               CNEN5bits.CN68IE = 0 /*Disables change notification interrupt*/
#define DisableCN69               CNEN5bits.CN69IE = 0 /*Disables change notification interrupt*/
#define DisableCN71               CNEN5bits.CN71IE = 0 /*Disables change notification interrupt*/
#define DisableCN83               CNEN6bits.CN83IE = 0 /*Disables change notification interrupt*/
#define DisableCN84               CNEN6bits.CN84IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v2_11)
#define DisableCN19               CNEN2bits.CN19IE = 0 /*Disables change notification interrupt*/
#define DisableCN20               CNEN2bits.CN20IE = 0 /*Disables change notification interrupt*/
#define DisableCN21               CNEN2bits.CN21IE = 0 /*Disables change notification interrupt*/
#define DisableCN33               CNEN3bits.CN33IE = 0 /*Disables change notification interrupt*/
#define DisableCN34               CNEN3bits.CN34IE = 0 /*Disables change notification interrupt*/
#define DisableCN35               CNEN3bits.CN35IE = 0 /*Disables change notification interrupt*/
#define DisableCN36               CNEN3bits.CN36IE = 0 /*Disables change notification interrupt*/
#define DisableCN37               CNEN3bits.CN37IE = 0 /*Disables change notification interrupt*/
#define DisableCN38               CNEN3bits.CN38IE = 0 /*Disables change notification interrupt*/
#define DisableCN39               CNEN3bits.CN39IE = 0 /*Disables change notification interrupt*/
#define DisableCN40               CNEN3bits.CN40IE = 0 /*Disables change notification interrupt*/
#define DisableCN41               CNEN3bits.CN41IE = 0 /*Disables change notification interrupt*/
#define DisableCN42               CNEN3bits.CN42IE = 0 /*Disables change notification interrupt*/
#define DisableCN43               CNEN3bits.CN43IE = 0 /*Disables change notification interrupt*/
#define DisableCN44               CNEN3bits.CN44IE = 0 /*Disables change notification interrupt*/
#define DisableCN45               CNEN3bits.CN45IE = 0 /*Disables change notification interrupt*/
#define DisableCN46               CNEN3bits.CN46IE = 0 /*Disables change notification interrupt*/
#define DisableCN47               CNEN3bits.CN47IE = 0 /*Disables change notification interrupt*/
#define DisableCN48               CNEN4bits.CN48IE = 0 /*Disables change notification interrupt*/
#define DisableCN57               CNEN4bits.CN57IE = 0 /*Disables change notification interrupt*/
#define DisableCN66               CNEN5bits.CN66IE = 0 /*Disables change notification interrupt*/
#define DisableCN67               CNEN5bits.CN67IE = 0 /*Disables change notification interrupt*/
#define DisableCN70               CNEN5bits.CN70IE = 0 /*Disables change notification interrupt*/
#define DisableCN73               CNEN5bits.CN73IE = 0 /*Disables change notification interrupt*/
#define DisableCN74               CNEN5bits.CN74IE = 0 /*Disables change notification interrupt*/
#define DisableCN75               CNEN5bits.CN75IE = 0 /*Disables change notification interrupt*/
#define DisableCN76               CNEN5bits.CN76IE = 0 /*Disables change notification interrupt*/
#define DisableCN77               CNEN5bits.CN77IE = 0 /*Disables change notification interrupt*/
#define DisableCN78               CNEN5bits.CN78IE = 0 /*Disables change notification interrupt*/
#define DisableCN79               CNEN5bits.CN79IE = 0 /*Disables change notification interrupt*/
#define DisableCN80               CNEN6bits.CN80IE = 0 /*Disables change notification interrupt*/
#define DisableCN81               CNEN6bits.CN81IE = 0 /*Disables change notification interrupt*/
#define DisableCN82               CNEN6bits.CN82IE = 0 /*Disables change notification interrupt*/
#endif
#endif

#if defined (cn_v2_12) || defined (cn_v2_13) || defined (cn_v2_14)
#define DisableCN2                CNEN1bits.CN2IE = 0 /*Disables change notification interrupt*/
#define DisableCN3                CNEN1bits.CN3IE = 0 /*Disables change notification interrupt*/
#define DisableCN4                CNEN1bits.CN4IE = 0 /*Disables change notification interrupt*/
#define DisableCN5                CNEN1bits.CN5IE = 0 /*Disables change notification interrupt*/
#define DisableCN6                CNEN1bits.CN6IE = 0 /*Disables change notification interrupt*/
#define DisableCN7                CNEN1bits.CN7IE = 0 /*Disables change notification interrupt*/
#define DisableCN8                CNEN1bits.CN8IE = 0 /*Disables change notification interrupt*/
#define DisableCN9                CNEN1bits.CN9IE = 0 /*Disables change notification interrupt*/
#define DisableCN10               CNEN1bits.CN10IE = 0 /*Disables change notification interrupt*/
#define DisableCN11               CNEN1bits.CN11IE = 0 /*Disables change notification interrupt*/
#define DisableCN12               CNEN1bits.CN12IE = 0 /*Disables change notification interrupt*/
#define DisableCN13               CNEN1bits.CN13IE = 0 /*Disables change notification interrupt*/
#define DisableCN14               CNEN1bits.CN14IE = 0 /*Disables change notification interrupt*/
#define DisableCN15               CNEN1bits.CN15IE = 0 /*Disables change notification interrupt*/
#define DisableCN16               CNEN2bits.CN16IE = 0 /*Disables change notification interrupt*/
#define DisableCN17               CNEN2bits.CN17IE = 0 /*Disables change notification interrupt*/
#define DisableCN18               CNEN2bits.CN18IE = 0 /*Disables change notification interrupt*/
#define DisableCN22               CNEN2bits.CN22IE = 0 /*Disables change notification interrupt*/
#define DisableCN23               CNEN2bits.CN23IE = 0 /*Disables change notification interrupt*/
#define DisableCN24               CNEN2bits.CN24IE = 0 /*Disables change notification interrupt*/
#define DisableCN25                CNEN2bits.CN25IE = 0 /*Disables change notification interrupt*/
#define DisableCN26               CNEN2bits.CN26IE = 0 /*Disables change notification interrupt*/
#define DisableCN27               CNEN2bits.CN27IE = 0 /*Disables change notification interrupt*/
#define DisableCN28               CNEN2bits.CN28IE = 0 /*Disables change notification interrupt*/
#define DisableCN29               CNEN2bits.CN29IE = 0 /*Disables change notification interrupt*/
#define DisableCN30               CNEN2bits.CN30IE = 0 /*Disables change notification interrupt*/
#define DisableCN31               CNEN2bits.CN31IE = 0 /*Disables change notification interrupt*/
#define DisableCN32               CNEN3bits.CN32IE = 0 /*Disables change notification interrupt*/
#define DisableCN49               CNEN4bits.CN49IE = 0 /*Disables change notification interrupt*/
#define DisableCN50               CNEN4bits.CN50IE = 0 /*Disables change notification interrupt*/
#define DisableCN51               CNEN4bits.CN51IE = 0 /*Disables change notification interrupt*/
#define DisableCN52               CNEN4bits.CN52IE = 0 /*Disables change notification interrupt*/
#define DisableCN53               CNEN4bits.CN53IE = 0 /*Disables change notification interrupt*/
#define DisableCN54               CNEN4bits.CN54IE = 0 /*Disables change notification interrupt*/
#define DisableCN55               CNEN4bits.CN55IE = 0 /*Disables change notification interrupt*/
#define DisableCN56               CNEN4bits.CN56IE = 0 /*Disables change notification interrupt*/
#define DisableCN57               CNEN4bits.CN57IE = 0 /*Disables change notification interrupt*/
#define DisableCN58               CNEN4bits.CN58IE = 0 /*Disables change notification interrupt*/
#define DisableCN59               CNEN4bits.CN59IE = 0 /*Disables change notification interrupt*/
#define DisableCN60               CNEN4bits.CN60IE = 0 /*Disables change notification interrupt*/
#define DisableCN61               CNEN4bits.CN61IE = 0 /*Disables change notification interrupt*/
#define DisableCN62               CNEN4bits.CN62IE = 0 /*Disables change notification interrupt*/
#define DisableCN63               CNEN4bits.CN63IE = 0 /*Disables change notification interrupt*/
#define DisableCN64               CNEN5bits.CN64IE = 0 /*Disables change notification interrupt*/
#define DisableCN65               CNEN5bits.CN65IE = 0 /*Disables change notification interrupt*/
#define DisableCN68               CNEN5bits.CN68IE = 0 /*Disables change notification interrupt*/
#define DisableCN69               CNEN5bits.CN69IE = 0 /*Disables change notification interrupt*/
#define DisableCN70               CNEN5bits.CN70IE = 0 /*Disables change notification interrupt*/
#define DisableCN71               CNEN5bits.CN71IE = 0 /*Disables change notification interrupt*/
#define DisableCN72               CNEN5bits.CN72IE = 0 /*Disables change notification interrupt*/
#define DisableCN73               CNEN5bits.CN73IE = 0 /*Disables change notification interrupt*/
#define DisableCN84               CNEN6bits.CN84IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v2_13) || defined (cn_v2_14)
#define DisableCN19               CNEN2bits.CN19IE = 0 /*Disables change notification interrupt*/0
#define DisableCN20               CNEN2bits.CN20IE = 0 /*Disables change notification interrupt*/
#define DisableCN21               CNEN2bits.CN21IE = 0 /*Disables change notification interrupt*/
#define DisableCN41               CNEN3bits.CN41IE = 0 /*Disables change notification interrupt*/
#define DisableCN42               CNEN3bits.CN42IE = 0 /*Disables change notification interrupt*/
#define DisableCN43               CNEN3bits.CN43IE = 0 /*Disables change notification interrupt*/
#define DisableCN44               CNEN3bits.CN44IE = 0 /*Disables change notification interrupt*/
#define DisableCN45               CNEN3bits.CN45IE = 0 /*Disables change notification interrupt*/
#define DisableCN47               CNEN3bits.CN47IE = 0 /*Disables change notification interrupt*/
#define DisableCN66               CNEN5bits.CN66IE = 0 /*Disables change notification interrupt*/
#define DisableCN67               CNEN5bits.CN67IE = 0 /*Disables change notification interrupt*/
#define DisableCN74               CNEN5bits.CN74IE = 0 /*Disables change notification interrupt*/
#define DisableCN77               CNEN5bits.CN77IE = 0 /*Disables change notification interrupt*/
#define DisableCN78               CNEN5bits.CN78IE = 0 /*Disables change notification interrupt*/
#define DisableCN83               CNEN6bits.CN83IE = 0 /*Disables change notification interrupt*/
#endif
#if defined (cn_v2_14)
#define DisableCN33               CNEN3bits.CN33IE = 0 /*Disables change notification interrupt*/
#define DisableCN34               CNEN3bits.CN34IE = 0 /*Disables change notification interrupt*/
#define DisableCN35               CNEN3bits.CN35IE = 0 /*Disables change notification interrupt*/
#define DisableCN36               CNEN3bits.CN36IE = 0 /*Disables change notification interrupt*/
#define DisableCN37               CNEN3bits.CN37IE = 0 /*Disables change notification interrupt*/
#define DisableCN38               CNEN3bits.CN38IE = 0 /*Disables change notification interrupt*/
#define DisableCN39               CNEN3bits.CN39IE = 0 /*Disables change notification interrupt*/
#define DisableCN40               CNEN3bits.CN40IE = 0 /*Disables change notification interrupt*/
#define DisableCN46               CNEN3bits.CN45IE = 0 /*Disables change notification interrupt*/
#define DisableCN48               CNEN4bits.CN48IE = 0 /*Disables change notification interrupt*/
#define DisableCN75               CNEN5bits.CN75IE = 0 /*Disables change notification interrupt*/
#define DisableCN76               CNEN5bits.CN76IE = 0 /*Disables change notification interrupt*/
#define DisableCN79               CNEN5bits.CN79IE = 0 /*Disables change notification interrupt*/
#define DisableCN80               CNEN6bits.CN80IE = 0 /*Disables change notification interrupt*/
#define DisableCN81               CNEN6bits.CN81IE = 0 /*Disables change notification interrupt*/
#define DisableCN82               CNEN6bits.CN82IE = 0 /*Disables change notification interrupt*/
#endif
#endif

#if defined (cn_v2_15) || defined (cn_v2_16)
#define DisableCN2                CNEN1bits.CN2IE = 0 /*disables change notification interrupt*/
#define DisableCN3                CNEN1bits.CN3IE = 0 /*disables change notification interrupt*/
#define DisableCN4                CNEN1bits.CN4IE = 0 /*disables change notification interrupt*/
#define DisableCN5                CNEN1bits.CN5IE = 0 /*disables change notification interrupt*/
#define DisableCN6                CNEN1bits.CN6IE = 0 /*disables change notification interrupt*/
#define DisableCN7                CNEN1bits.CN7IE = 0 /*disables change notification interrupt*/
#define DisableCN8                CNEN1bits.CN8IE = 0 /*disables change notification interrupt*/
#define DisableCN9                CNEN1bits.CN9IE = 0 /*disables change notification interrupt*/
#define DisableCN10               CNEN1bits.CN10IE = 0 /*disables change notification interrupt*/
#define DisableCN11               CNEN1bits.CN11IE = 0 /*disables change notification interrupt*/
#define DisableCN12               CNEN1bits.CN12IE = 0 /*disables change notification interrupt*/
#define DisableCN13               CNEN1bits.CN13IE = 0 /*disables change notification interrupt*/
#define DisableCN14               CNEN1bits.CN14IE = 0 /*disables change notification interrupt*/
#define DisableCN15               CNEN1bits.CN15IE = 0 /*disables change notification interrupt*/
#define DisableCN16               CNEN2bits.CN16IE = 0 /*disables change notification interrupt*/
#define DisableCN17               CNEN2bits.CN17IE = 0 /*disables change notification interrupt*/
#define DisableCN18               CNEN2bits.CN18IE = 0 /*disables change notification interrupt*/
#define DisableCN22               CNEN2bits.CN22IE = 0 /*disables change notification interrupt*/
#define DisableCN23               CNEN2bits.CN23IE = 0 /*disables change notification interrupt*/
#define DisableCN24               CNEN2bits.CN24IE = 0 /*disables change notification interrupt*/
#define DisableCN25               CNEN2bits.CN25IE = 0 /*disables change notification interrupt*/
#define DisableCN30               CNEN2bits.CN30IE = 0 /*disables change notification interrupt*/
#define DisableCN31               CNEN2bits.CN31IE = 0 /*disables change notification interrupt*/
#define DisableCN32               CNEN3bits.CN32IE = 0 /*disables change notification interrupt*/
#define DisableCN49               CNEN4bits.CN49IE = 0 /*disables change notification interrupt*/
#define DisableCN50               CNEN4bits.CN50IE = 0 /*disables change notification interrupt*/
#define DisableCN51               CNEN4bits.CN51IE = 0 /*disables change notification interrupt*/
#define DisableCN52               CNEN4bits.CN52IE = 0 /*disables change notification interrupt*/
#define DisableCN53               CNEN4bits.CN53IE = 0 /*disables change notification interrupt*/
#define DisableCN54               CNEN4bits.CN54IE = 0 /*disables change notification interrupt*/
#define DisableCN55               CNEN4bits.CN55IE = 0 /*disables change notification interrupt*/
#define DisableCN56               CNEN4bits.CN56IE = 0 /*disables change notification interrupt*/
#define DisableCN58               CNEN4bits.CN58IE = 0 /*disables change notification interrupt*/
#define DisableCN59               CNEN4bits.CN59IE = 0 /*disables change notification interrupt*/
#define DisableCN60               CNEN4bits.CN60IE = 0 /*disables change notification interrupt*/
#define DisableCN61               CNEN4bits.CN61IE = 0 /*disables change notification interrupt*/
#define DisableCN62               CNEN4bits.CN62IE = 0 /*disables change notification interrupt*/
#define DisableCN63               CNEN4bits.CN63IE = 0 /*disables change notification interrupt*/
#define DisableCN64               CNEN5bits.CN64IE = 0 /*disables change notification interrupt*/
#define DisableCN65               CNEN5bits.CN65IE = 0 /*disables change notification interrupt*/
#define DisableCN68               CNEN5bits.CN68IE = 0 /*disables change notification interrupt*/
#define DisableCN69               CNEN5bits.CN69IE = 0 /*disables change notification interrupt*/
#define DisableCN71               CNEN5bits.CN71IE = 0 /*disables change notification interrupt*/
#define DisableCN72               CNEN5bits.CN72IE = 0 /*disables change notification interrupt*/
#define DisableCN73               CNEN5bits.CN73IE = 0 /*disables change notification interrupt*/
#define DisableCN83               CNEN6bits.CN83IE = 0 /*disables change notification interrupt*/
#if defined (cn_v2_16)
#define DisableCN19               CNEN2bits.CN19IE = 0 /*disables change notification interrupt*/
#define DisableCN20               CNEN2bits.CN20IE = 0 /*disables change notification interrupt*/
#define DisableCN21               CNEN2bits.CN21IE = 0 /*disables change notification interrupt*/
#define DisableCN33               CNEN3bits.CN33IE = 0 /*disables change notification interrupt*/
#define DisableCN34               CNEN3bits.CN34IE = 0 /*disables change notification interrupt*/
#define DisableCN35               CNEN3bits.CN35IE = 0 /*disables change notification interrupt*/
#define DisableCN36               CNEN3bits.CN36IE = 0 /*disables change notification interrupt*/
#define DisableCN37               CNEN3bits.CN37IE = 0 /*disables change notification interrupt*/
#define DisableCN38               CNEN3bits.CN38IE = 0 /*disables change notification interrupt*/
#define DisableCN39               CNEN3bits.CN39IE = 0 /*disables change notification interrupt*/
#define DisableCN40               CNEN3bits.CN40IE = 0 /*disables change notification interrupt*/
#define DisableCN41               CNEN3bits.CN41IE = 0 /*disables change notification interrupt*/
#define DisableCN42               CNEN3bits.CN42IE = 0 /*disables change notification interrupt*/
#define DisableCN43               CNEN3bits.CN43IE = 0 /*disables change notification interrupt*/
#define DisableCN44               CNEN3bits.CN44IE = 0 /*disables change notification interrupt*/
#define DisableCN45               CNEN3bits.CN45IE = 0 /*disables change notification interrupt*/
#define DisableCN45               CNEN3bits.CN45IE = 0 /*disables change notification interrupt*/
#define DisableCN46               CNEN3bits.CN46IE = 0 /*disables change notification interrupt*/
#define DisableCN47               CNEN3bits.CN47IE = 0 /*disables change notification interrupt*/
#define DisableCN48               CNEN4bits.CN48IE = 0 /*disables change notification interrupt*/
#define DisableCN57               CNEN4bits.CN57IE = 0 /*disables change notification interrupt*/
#define DisableCN66               CNEN5bits.CN66IE = 0 /*disables change notification interrupt*/
#define DisableCN67               CNEN5bits.CN67IE = 0 /*disables change notification interrupt*/
#define DisableCN70               CNEN5bits.CN70IE = 0 /*disables change notification interrupt*/
#define DisableCN74               CNEN5bits.CN74IE = 0 /*disables change notification interrupt*/
#define DisableCN75               CNEN5bits.CN75IE = 0 /*disables change notification interrupt*/
#define DisableCN76               CNEN5bits.CN76IE = 0 /*disables change notification interrupt*/
#define DisableCN77               CNEN5bits.CN77IE = 0 /*disables change notification interrupt*/
#define DisableCN78               CNEN5bits.CN78IE = 0 /*disables change notification interrupt*/
#define DisableCN79               CNEN5bits.CN79IE = 0 /*disables change notification interrupt*/
#define DisableCN80               CNEN6bits.CN80IE = 0 /*disables change notification interrupt*/
#define DisableCN81               CNEN6bits.CN81IE = 0 /*disables change notification interrupt*/
#define DisableCN82               CNEN6bits.CN82IE = 0 /*disables change notification interrupt*/
#endif
#endif

#if	defined (cn_v3_1) || defined (cn_v3_2) || defined (cn_v3_3) || defined (cn_v3_4)
#define DisableCN0               CNEN1bits.CN0IE = 0 /*Disables change notification interrupt*/
#define DisableCN1               CNEN1bits.CN1IE = 0 /*Disables change notification interrupt*/
#define DisableCN2               CNEN1bits.CN2IE = 0 /*Disables change notification interrupt*/
#define DisableCN3               CNEN1bits.CN3IE = 0 /*Disables change notification interrupt*/
#define DisableCN8               CNEN1bits.CN8IE = 0 /*Disables change notification interrupt*/
#define DisableCN11              CNEN1bits.CN11IE = 0 /*Disables change notification interrupt*/
#define DisableCN12              CNEN1bits.CN12IE = 0 /*Disables change notification interrupt*/
#define DisableCN21               CNEN2bits.CN21IE = 0 /*Disables change notification interrupt*/
#define DisableCN22               CNEN2bits.CN22IE = 0 /*Disables change notification interrupt*/
#if	defined (cn_v3_1) || defined (cn_v3_2) || defined (cn_v3_4)
#define DisableCN4               CNEN1bits.CN4IE = 0 /*Disables change notification interrupt*/
#define DisableCN5               CNEN1bits.CN5IE = 0 /*Disables change notification interrupt*/
#define DisableCN6               CNEN1bits.CN6IE = 0 /*Disables change notification interrupt*/
#define DisableCN14              CNEN1bits.CN14IE = 0 /*Disables change notification interrupt*/
#endif
#if	defined (cn_v3_1) || defined (cn_v3_2)
#define DisableCN13              CNEN1bits.CN13IE = 0 /*Disables change notification interrupt*/
#define DisableCN23               CNEN2bits.CN23IE = 0 /*Disables change notification interrupt*/
#endif
#define DisableCN29               CNEN2bits.CN29IE = 0 /*Disables change notification interrupt*/
#define DisableCN30               CNEN2bits.CN30IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v3_2) 
#define DisableCN7               CNEN1bits.CN7IE = 0 /*Disables change notification interrupt*/
#define DisableCN9               CNEN1bits.CN9IE = 0 /*Disables change notification interrupt*/
#define DisableCN15              CNEN1bits.CN15IE = 0 /*Disables change notification interrupt*/
#define DisableCN16              CNEN2bits.CN16IE = 0 /*Disables change notification interrupt*/
#define DisableCN24               CNEN2bits.CN24IE = 0 /*Disables change notification interrupt*/
#define DisableCN27               CNEN2bits.CN27IE = 0 /*Disables change notification interrupt*/
#endif
#endif


#if	defined (cn_v3_5) || defined (cn_v3_6) || defined (cn_v3_7)
#define DisableCN0               CNEN1bits.CN0IE = 0 /*Disables change notification interrupt*/
#define DisableCN1               CNEN1bits.CN1IE = 0 /*Disables change notification interrupt*/
#define DisableCN2               CNEN1bits.CN2IE = 0 /*Disables change notification interrupt*/
#define DisableCN3               CNEN1bits.CN3IE = 0 /*Disables change notification interrupt*/
#define DisableCN4               CNEN1bits.CN4IE = 0 /*Disables change notification interrupt*/
#define DisableCN5               CNEN1bits.CN5IE = 0 /*Disables change notification interrupt*/
#define DisableCN6               CNEN1bits.CN6IE = 0 /*Disables change notification interrupt*/
#define DisableCN11              CNEN1bits.CN11IE = 0 /*Disables change notification interrupt*/
#define DisableCN12              CNEN1bits.CN12IE = 0 /*Disables change notification interrupt*/
#define DisableCN13              CNEN1bits.CN13IE = 0 /*Disables change notification interrupt*/
#define DisableCN14              CNEN1bits.CN14IE = 0 /*Disables change notification interrupt*/
#define DisableCN21               CNEN2bits.CN21IE = 0 /*Disables change notification interrupt*/
#define DisableCN22               CNEN2bits.CN22IE = 0 /*Disables change notification interrupt*/
#define DisableCN23               CNEN2bits.CN23IE = 0 /*Disables change notification interrupt*/
#define DisableCN29               CNEN2bits.CN29IE = 0 /*Disables change notification interrupt*/
#define DisableCN30               CNEN2bits.CN30IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v3_7)
#define DisableCN10              CNEN1bits.CN10IE = 0 /*Disables change notification interrupt*/
#define DisableCN17              CNEN2bits.CN17IE = 0 /*Disables change notification interrupt*/
#define DisableCN18              CNEN2bits.CN18IE = 0 /*Disables change notification interrupt*/
#define DisableCN19               CNEN2bits.CN19IE = 0 /*Disables change notification interrupt*/
#define DisableCN20               CNEN2bits.CN20IE = 0 /*Disables change notification interrupt*/
#define DisableCN25               CNEN2bits.CN25IE = 0 /*Disables change notification interrupt*/
#define DisableCN26               CNEN2bits.CN26IE = 0 /*Disables change notification interrupt*/
#define DisableCN28               CNEN2bits.CN28IE = 0 /*Disables change notification interrupt*/
#define DisableCN31               CNEN2bits.CN31IE = 0 /*Disables change notification interrupt*/
#define DisableCN32               CNEN3bits.CN32IE = 0 /*Disables change notification interrupt*/
#define DisableCN33               CNEN3bits.CN33IE = 0 /*Disables change notification interrupt*/
#define DisableCN34               CNEN3bits.CN34IE = 0 /*Disables change notification interrupt*/
#define DisableCN35               CNEN3bits.CN35IE = 0 /*Disables change notification interrupt*/
#define DisableCN36               CNEN3bits.CN36IE = 0 /*Disables change notification interrupt*/
#define DisableCN7               CNEN1bits.CN7IE = 0 /*Disables change notification interrupt*/
#define DisableCN9               CNEN1bits.CN9IE = 0 /*Disables change notification interrupt*/
#define DisableCN15              CNEN1bits.CN15IE = 0 /*Disables change notification interrupt*/
#define DisableCN16              CNEN2bits.CN16IE = 0 /*Disables change notification interrupt*/
#define DisableCN24               CNEN2bits.CN24IE = 0 /*Disables change notification interrupt*/
#define DisableCN27               CNEN2bits.CN27IE = 0 /*Disables change notification interrupt*/
#endif
#endif

#if defined (cn_v4_1)||defined (cn_v4_1)  ||defined (cn_v4_3)
#define DisableCN0               CNEN1bits.CN0IE = 0 /*Disables change notification interrupt*/
#define DisableCN1               CNEN1bits.CN1IE = 0 /*Disables change notification interrupt*/
#define DisableCN2               CNEN1bits.CN2IE = 0 /*Disables change notification interrupt*/
#define DisableCN3               CNEN1bits.CN3IE = 0 /*Disables change notification interrupt*/
#define DisableCN8               CNEN1bits.CN8IE = 0 /*Disables change notification interrupt*/
#define DisableCN11              CNEN1bits.CN11IE = 0 /*Disables change notification interrupt*/
#define DisableCN12              CNEN1bits.CN12IE = 0 /*Disables change notification interrupt*/
#define DisableCN21              CNEN2bits.CN21IE = 0 /*Disables change notification interrupt*/
#define DisableCN22              CNEN2bits.CN22IE = 0 /*Disables change notification interrupt*/
#define DisableCN29              CNEN2bits.CN29IE = 0 /*Disables change notification interrupt*/
#define DisableCN30              CNEN2bits.CN30IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v4_2) || defined (cn_v4_3)
#define DisableCN4               CNEN1bits.CN4IE = 0 /*Disables change notification interrupt*/
#define DisableCN5               CNEN1bits.CN5IE = 0 /*Disables change notification interrupt*/
#define DisableCN6               CNEN1bits.CN6IE = 0 /*Disables change notification interrupt*/
#define DisableCN13              CNEN1bits.CN13IE = 0 /*Disables change notification interrupt*/
#define DisableCN14              CNEN1bits.CN14IE = 0 /*Disables change notification interrupt*/
#define DisableCN23              CNEN2bits.CN23IE = 0 /*Disables change notification interrupt*/
#if defined (cn_v4_3)
#define DisableCN7               CNEN1bits.CN7IE = 0 /*Disables change notification interrupt*/
#define DisableCN9               CNEN1bits.CN9IE = 0 /*Disables change notification interrupt*/
#define DisableCN15              CNEN1bits.CN15IE = 0 /*Disables change notification interrupt*/
#define DisableCN16              CNEN2bits.CN16IE = 0 /*Disables change notification interrupt*/
#define DisableCN24              CNEN2bits.CN24IE = 0 /*Disables change notification interrupt*/
#define DisableCN27              CNEN2bits.CN27IE = 0 /*Disables change notification interrupt*/
#endif
#endif
#endif

/******************************************************************
Macro       : EnablePullUpCNx
 
Include     : ports.h
Description : This enables the pull-up resistors for CN pins.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/

#if defined (cn_v1_1 ) || defined (cn_v1_2) 
#define EnablePullUpCN0               CNPU1bits.CN0PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN1               CNPU1bits.CN1PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN2               CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3               CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN4               CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5               CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6               CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN7               CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11               CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12               CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN13               CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN14               CNPU1bits.CN14PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15              CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16              CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21               CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN22               CNPU2bits.CN22PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN23               CNPU2bits.CN23PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN24               CNPU2bits.CN24PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN27               CNPU2bits.CN27PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN29               CNPU2bits.CN29PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN30               CNPU2bits.CN30PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v1_2)
#define EnablePullUpCN8               CNPU1bits.CN8PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9               CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN10               CNPU1bits.CN10PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN17               CNPU2bits.CN17PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN18               CNPU2bits.CN18PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN19               CNPU2bits.CN19PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN20               CNPU2bits.CN20PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN25               CNPU2bits.CN25PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN26              CNPU2bits.CN26PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN28               CNPU2bits.CN28PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v1_3)||defined (cn_v1_4)
#define EnablePullUpCN0               CNPU1bits.CN0PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN1               CNPU1bits.CN1PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN2               CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3               CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN4               CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5               CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6               CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN7               CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN8               CNPU1bits.CN8PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9               CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN10               CNPU1bits.CN10PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11               CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12               CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN13               CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN14               CNPU1bits.CN14PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15              CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16              CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN17               CNPU2bits.CN17PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN18               CNPU2bits.CN18PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v1_4)
#define EnablePullUpCN19               CNPU2bits.CN19PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN20               CNPU2bits.CN20PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21               CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_1) ||defined (cn_v2_2)|| defined (cn_v2_3)
#define EnablePullUpCN0               CNPU1bits.CN0PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN1               CNPU1bits.CN1PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN2               CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3               CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN4               CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5               CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6               CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN7               CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN8               CNPU1bits.CN8PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9               CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN10               CNPU1bits.CN10PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11               CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12               CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN13               CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN14               CNPU1bits.CN14PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15              CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16              CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN17               CNPU2bits.CN17PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN18               CNPU2bits.CN18PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN22               CNPU2bits.CN22PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN23               CNPU2bits.CN23PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN24               CNPU2bits.CN24PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN25               CNPU2bits.CN25PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN26              CNPU2bits.CN26PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN27               CNPU2bits.CN27PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN28               CNPU2bits.CN28PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN29               CNPU2bits.CN29PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN30               CNPU2bits.CN30PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN31               CNPU2bits.CN31PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN32               CNPU3bits.CN32PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN49               CNPU4bits.CN49PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN50               CNPU4bits.CN50PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN51               CNPU4bits.CN51PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN52               CNPU4bits.CN52PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN53               CNPU4bits.CN53PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN54               CNPU4bits.CN54PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN55               CNPU4bits.CN55PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN56               CNPU4bits.CN56PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN58               CNPU4bits.CN58PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN59               CNPU4bits.CN59PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN60               CNPU4bits.CN60PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN61               CNPU4bits.CN61PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN62               CNPU4bits.CN62PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN63               CNPU4bits.CN63PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN64               CNPU5bits.CN64PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN65               CNPU5bits.CN65PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN68               CNPU5bits.CN68PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN69               CNPU5bits.CN69PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN71               CNPU5bits.CN71PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v2_2)|| defined (cn_v2_3)
#define EnablePullUpCN19               CNPU2bits.CN19PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN20               CNPU2bits.CN20PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21               CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN41               CNPU3bits.CN41PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN42               CNPU3bits.CN42PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN43               CNPU3bits.CN43PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN44               CNPU3bits.CN44PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN45               CNPU3bits.CN45PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN47               CNPU3bits.CN47PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN57               CNPU4bits.CN57PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN66               CNPU5bits.CN66PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN67               CNPU5bits.CN67PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN70               CNPU5bits.CN70PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN74               CNPU5bits.CN74PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN77               CNPU5bits.CN77PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN78               CNPU5bits.CN78PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#if defined (cn_v2_3)
#define EnablePullUpCN33               CNPU3bits.CN33PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN34               CNPU3bits.CN34PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN35               CNPU3bits.CN35PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN36               CNPU3bits.CN36PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN37               CNPU3bits.CN37PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN38               CNPU3bits.CN38PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN39               CNPU3bits.CN39PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN40               CNPU3bits.CN40PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN46               CNPU3bits.CN46PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN48               CNPU4bits.CN48PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN75               CNPU5bits.CN75PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN76               CNPU5bits.CN76PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN79               CNPU5bits.CN79PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN80               CNPU6bits.CN80PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN81               CNPU6bits.CN81PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN82               CNPU6bits.CN82PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif

#if	defined (cn_v2_4) || defined (cn_v2_5)|| defined (cn_v2_6)
#define EnablePullUpCN0               CNPU1bits.CN0PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN1               CNPU1bits.CN1PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN2               CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3               CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN4               CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5               CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6               CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN7               CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN8               CNPU1bits.CN8PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9               CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN10               CNPU1bits.CN10PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11               CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12               CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN13               CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN14               CNPU1bits.CN14PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15              CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16              CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN17               CNPU2bits.CN17PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN18               CNPU2bits.CN18PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN22               CNPU2bits.CN22PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN23               CNPU2bits.CN23PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN24               CNPU2bits.CN24PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN25               CNPU2bits.CN25PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN26              CNPU2bits.CN26PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN27               CNPU2bits.CN27PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN28               CNPU2bits.CN28PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN29               CNPU2bits.CN29PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN30               CNPU2bits.CN30PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN31               CNPU2bits.CN31PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN32               CNPU3bits.CN32PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN49               CNPU4bits.CN49PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN50               CNPU4bits.CN50PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN51               CNPU4bits.CN51PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN52               CNPU4bits.CN52PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN53               CNPU4bits.CN53PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN54               CNPU4bits.CN54PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN55               CNPU4bits.CN55PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN56               CNPU4bits.CN56PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN58               CNPU4bits.CN58PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN59               CNPU4bits.CN59PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN60               CNPU4bits.CN60PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN61               CNPU4bits.CN61PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN62               CNPU4bits.CN62PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN63               CNPU4bits.CN63PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN64               CNPU5bits.CN64PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN65               CNPU5bits.CN65PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN68               CNPU5bits.CN68PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN69               CNPU5bits.CN69PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN71               CNPU5bits.CN71PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN72               CNPU5bits.CN72PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN83               CNPU6bits.CN83PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN84               CNPU6bits.CN84PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v2_5)|| defined (cn_v2_6)
#define EnablePullUpCN19               CNPU2bits.CN19PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN20               CNPU2bits.CN20PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21               CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN41               CNPU3bits.CN41PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN42               CNPU3bits.CN42PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN43               CNPU3bits.CN43PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN44               CNPU3bits.CN44PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN45               CNPU3bits.CN45PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN47               CNPU3bits.CN47PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN57               CNPU4bits.CN57PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN66               CNPU5bits.CN66PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN67               CNPU5bits.CN67PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN74               CNPU5bits.CN74PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN77               CNPU5bits.CN77PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN78               CNPU5bits.CN78PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN73               CNPU5bits.CN73PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#if defined (cn_v2_6)
#define EnablePullUpCN33               CNPU3bits.CN33PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN34               CNPU3bits.CN34PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN35               CNPU3bits.CN35PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN36               CNPU3bits.CN36PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN37               CNPU3bits.CN37PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN38               CNPU3bits.CN38PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN39               CNPU3bits.CN39PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN40               CNPU3bits.CN40PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN46               CNPU3bits.CN46PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN48               CNPU4bits.CN48PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN75               CNPU5bits.CN75PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN76               CNPU5bits.CN76PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN79               CNPU5bits.CN79PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN80               CNPU6bits.CN80PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN81               CNPU6bits.CN81PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN82               CNPU6bits.CN82PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_8) ||defined (cn_v2_9)	
#define EnablePullUpCN0               CNPU1bits.CN0PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN1               CNPU1bits.CN1PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN2               CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3               CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN4               CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5               CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6               CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN7               CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11               CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12               CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN13               CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15              CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16              CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21               CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN22               CNPU2bits.CN22PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN23               CNPU2bits.CN23PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN27               CNPU2bits.CN27PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN29               CNPU2bits.CN29PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN30               CNPU2bits.CN30PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v2_8)
#define EnablePullUpCN8               CNPU1bits.CN8PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9               CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN10               CNPU1bits.CN10PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN17               CNPU2bits.CN17PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN18               CNPU2bits.CN18PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN19               CNPU2bits.CN19PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN20               CNPU2bits.CN20PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN25               CNPU2bits.CN25PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN26              CNPU2bits.CN26PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN28               CNPU2bits.CN28PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v3_1)||defined (cn_v3_2)||defined (cn_v3_3) ||defined (cn_v3_4)
#define EnablePullUpCN0               CNPU1bits.CN0PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN1               CNPU1bits.CN1PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN2               CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3               CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN8               CNPU1bits.CN8PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11               CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12               CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21               CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN22               CNPU2bits.CN22PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN29               CNPU2bits.CN29PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN30               CNPU2bits.CN30PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v3_1)||defined (cn_v3_2) ||defined (cn_v3_4)
#define EnablePullUpCN4               CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5               CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6               CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN14               CNPU1bits.CN14PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#if defined (cn_v3_1)||defined (cn_v3_2) 
#define EnablePullUpCN13               CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN23               CNPU2bits.CN23PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#if defined (cn_v3_2)
#define EnablePullUpCN7               CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9               CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15              CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16              CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN24               CNPU2bits.CN24PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN27               CNPU2bits.CN27PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_10) ||defined (cn_v2_11)
#define EnablePullUpCN0               CNPU1bits.CN0PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN1               CNPU1bits.CN1PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN2               CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3               CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN4               CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5               CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6               CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN7               CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN8               CNPU1bits.CN8PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9               CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN10               CNPU1bits.CN10PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11               CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12               CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN13               CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN14               CNPU1bits.CN14PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15              CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16              CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN17               CNPU2bits.CN17PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN18               CNPU2bits.CN18PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN22               CNPU2bits.CN22PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN23               CNPU2bits.CN23PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN24               CNPU2bits.CN24PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN25               CNPU2bits.CN25PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN26              CNPU2bits.CN26PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN27               CNPU2bits.CN27PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN28               CNPU2bits.CN28PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN29               CNPU2bits.CN29PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN30               CNPU2bits.CN30PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN31               CNPU2bits.CN31PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN32               CNPU3bits.CN32PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN49               CNPU4bits.CN49PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN50               CNPU4bits.CN50PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN51               CNPU4bits.CN51PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN52               CNPU4bits.CN52PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN53               CNPU4bits.CN53PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN54               CNPU4bits.CN54PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN55               CNPU4bits.CN55PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN56               CNPU4bits.CN56PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN58               CNPU4bits.CN58PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN59               CNPU4bits.CN59PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN60               CNPU4bits.CN60PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN61               CNPU4bits.CN61PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN62               CNPU4bits.CN62PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN63               CNPU4bits.CN63PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN64               CNPU5bits.CN64PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN65               CNPU5bits.CN65PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN68               CNPU5bits.CN68PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN69               CNPU5bits.CN69PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN71               CNPU5bits.CN71PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN83               CNPU6bits.CN83PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN84               CNPU6bits.CN84PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v2_11)
#define EnablePullUpCN19               CNPU2bits.CN19PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN20               CNPU2bits.CN20PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21               CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN33               CNPU3bits.CN33PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN34               CNPU3bits.CN34PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN35               CNPU3bits.CN35PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN36               CNPU3bits.CN36PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN37               CNPU3bits.CN37PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN38               CNPU3bits.CN38PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN39               CNPU3bits.CN39PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN40               CNPU3bits.CN40PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN41               CNPU3bits.CN41PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN42               CNPU3bits.CN42PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN43               CNPU3bits.CN43PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN44               CNPU3bits.CN44PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN45               CNPU3bits.CN45PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN46               CNPU3bits.CN46PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN48               CNPU4bits.CN48PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN47               CNPU3bits.CN47PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN57               CNPU4bits.CN57PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN66               CNPU5bits.CN66PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN67               CNPU5bits.CN67PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN70               CNPU5bits.CN70PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN73               CNPU5bits.CN73PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN74               CNPU5bits.CN74PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN77               CNPU5bits.CN77PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN78               CNPU5bits.CN78PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN75               CNPU5bits.CN75PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN76               CNPU5bits.CN76PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN79               CNPU5bits.CN79PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN80               CNPU6bits.CN80PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN81               CNPU6bits.CN81PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN82               CNPU6bits.CN82PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_12) || defined (cn_v2_13) || defined (cn_v2_14)
#define EnablePullUpCN2                CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3                CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN4                CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5                CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6                CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN7                CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN8                CNPU1bits.CN8PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9                CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN10               CNPU1bits.CN10PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11               CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12               CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN13               CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN14               CNPU1bits.CN14PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15               CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16               CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN17               CNPU2bits.CN17PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN18               CNPU2bits.CN18PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN22               CNPU2bits.CN22PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN23               CNPU2bits.CN23PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN24               CNPU2bits.CN24PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN25               CNPU2bits.CN25PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN26               CNPU2bits.CN26PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN27               CNPU2bits.CN27PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN28               CNPU2bits.CN28PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN29               CNPU2bits.CN29PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN30               CNPU2bits.CN30PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN31               CNPU2bits.CN31PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN32               CNPU3bits.CN32PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN49               CNPU4bits.CN49PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN50               CNPU4bits.CN50PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN51               CNPU4bits.CN51PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN52               CNPU4bits.CN52PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN53               CNPU4bits.CN53PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN54               CNPU4bits.CN54PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN55               CNPU4bits.CN55PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN56               CNPU4bits.CN56PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN57               CNPU4bits.CN57PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN58               CNPU4bits.CN58PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN59               CNPU4bits.CN59PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN60               CNPU4bits.CN60PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN61               CNPU4bits.CN61PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN62               CNPU4bits.CN62PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN63               CNPU4bits.CN63PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN64               CNPU5bits.CN64PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN65               CNPU5bits.CN65PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN68               CNPU5bits.CN68PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN69               CNPU5bits.CN69PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN70               CNPU5bits.CN70PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN71               CNPU5bits.CN71PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN72               CNPU5bits.CN72PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN73               CNPU5bits.CN73PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN84               CNPU6bits.CN84PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v2_13) || defined (cn_v2_14)
#define EnablePullUpCN19               CNPU2bits.CN19PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN20               CNPU2bits.CN20PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21               CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN41               CNPU3bits.CN41PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN42               CNPU3bits.CN42PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN43               CNPU3bits.CN43PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN44               CNPU3bits.CN44PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN45               CNPU3bits.CN45PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN47               CNPU3bits.CN47PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN66               CNPU5bits.CN66PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN67               CNPU5bits.CN67PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN74               CNPU5bits.CN74PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN77               CNPU5bits.CN77PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN78               CNPU5bits.CN78PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN83               CNPU6bits.CN83PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#if defined (cn_v2_14)
#define EnablePullUpCN33               CNPU3bits.CN33PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN34               CNPU3bits.CN34PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN35               CNPU3bits.CN35PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN36               CNPU3bits.CN36PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN37               CNPU3bits.CN37PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN38               CNPU3bits.CN38PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN39               CNPU3bits.CN39PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN40               CNPU3bits.CN40PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN46               CNPU3bits.CN45PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN48               CNPU4bits.CN48PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN75               CNPU5bits.CN75PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN76               CNPU5bits.CN76PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN79               CNPU5bits.CN79PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN80               CNPU6bits.CN80PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN81               CNPU6bits.CN81PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN82               CNPU6bits.CN82PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_15) || defined (cn_v2_16)
#define EnablePullUpCN2                CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3                CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN4                CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5                CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6                CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN7                CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN8                CNPU1bits.CN8PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9                CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN10               CNPU1bits.CN10PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11               CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12               CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN13               CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN14               CNPU1bits.CN14PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15               CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16               CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN17               CNPU2bits.CN17PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN18               CNPU2bits.CN18PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN22               CNPU2bits.CN22PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN23               CNPU2bits.CN23PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN24               CNPU2bits.CN24PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN25               CNPU2bits.CN25PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN30               CNPU2bits.CN30PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN31               CNPU2bits.CN31PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN32               CNPU3bits.CN32PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN49               CNPU4bits.CN49PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN50               CNPU4bits.CN50PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN51               CNPU4bits.CN51PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN52               CNPU4bits.CN52PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN53               CNPU4bits.CN53PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN54               CNPU4bits.CN54PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN55               CNPU4bits.CN55PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN56               CNPU4bits.CN56PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN58               CNPU4bits.CN58PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN59               CNPU4bits.CN59PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN60               CNPU4bits.CN60PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN61               CNPU4bits.CN61PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN62               CNPU4bits.CN62PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN63               CNPU4bits.CN63PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN64               CNPU5bits.CN64PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN65               CNPU5bits.CN65PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN68               CNPU5bits.CN68PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN69               CNPU5bits.CN69PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN71               CNPU5bits.CN71PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN72               CNPU5bits.CN72PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN73               CNPU5bits.CN73PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN83               CNPU6bits.CN83PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v2_16)
#define EnablePullUpCN19               CNPU2bits.CN19PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN20               CNPU2bits.CN20PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21               CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN33               CNPU3bits.CN33PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN34               CNPU3bits.CN34PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN35               CNPU3bits.CN35PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN36               CNPU3bits.CN36PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN37               CNPU3bits.CN37PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN38               CNPU3bits.CN38PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN39               CNPU3bits.CN39PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN40               CNPU3bits.CN40PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN41               CNPU3bits.CN41PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN42               CNPU3bits.CN42PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN43               CNPU3bits.CN43PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN44               CNPU3bits.CN44PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN45               CNPU3bits.CN45PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN45               CNPU3bits.CN45PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN46               CNPU3bits.CN46PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN47               CNPU3bits.CN47PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN48               CNPU4bits.CN48PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN57               CNPU4bits.CN57PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN66               CNPU5bits.CN66PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN67               CNPU5bits.CN67PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN70               CNPU5bits.CN70PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN74               CNPU5bits.CN74PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN75               CNPU5bits.CN75PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN76               CNPU5bits.CN76PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN77               CNPU5bits.CN77PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN78               CNPU5bits.CN78PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN79               CNPU5bits.CN79PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN80               CNPU6bits.CN80PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN81               CNPU6bits.CN81PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN82               CNPU6bits.CN82PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif

#if	defined (cn_v3_5) || defined (cn_v3_6) || defined (cn_v3_7)
#define EnablePullUpCN0               CNPU1bits.CN0PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN1               CNPU1bits.CN1PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN2               CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3               CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN4               CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5               CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6               CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11               CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12               CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN13               CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN14               CNPU1bits.CN14PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21               CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN22               CNPU2bits.CN22PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN23               CNPU2bits.CN23PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN29               CNPU2bits.CN29PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN30               CNPU2bits.CN30PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if	defined (cn_v3_7)
#define EnablePullUpCN10               CNPU1bits.CN10PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN17               CNPU2bits.CN17PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN18               CNPU2bits.CN18PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN19               CNPU2bits.CN19PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN20               CNPU2bits.CN20PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN25               CNPU2bits.CN25PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN26              CNPU2bits.CN26PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN28               CNPU2bits.CN28PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN31               CNPU2bits.CN31PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN32               CNPU3bits.CN32PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN33               CNPU3bits.CN33PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN34               CNPU3bits.CN34PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN35               CNPU3bits.CN35PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN36               CNPU3bits.CN36PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN7               CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9               CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15              CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16              CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN24               CNPU2bits.CN24PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN27               CNPU2bits.CN27PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v4_1)||defined (cn_v4_2) || defined (cn_v4_3)
#define EnablePullUpCN0               CNPU1bits.CN0PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN1               CNPU1bits.CN1PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN2               CNPU1bits.CN2PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN3               CNPU1bits.CN3PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN8               CNPU1bits.CN8PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN11              CNPU1bits.CN11PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN12              CNPU1bits.CN12PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN21              CNPU2bits.CN21PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN22              CNPU2bits.CN22PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN29              CNPU2bits.CN29PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN30              CNPU2bits.CN30PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v4_2) || defined (cn_v4_3)
#define EnablePullUpCN4               CNPU1bits.CN4PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN5               CNPU1bits.CN5PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN6               CNPU1bits.CN6PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN13              CNPU1bits.CN13PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN14              CNPU1bits.CN14PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN23              CNPU2bits.CN23PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#if defined (cn_v4_3)
#define EnablePullUpCN7               CNPU1bits.CN7PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN9               CNPU1bits.CN9PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN15              CNPU1bits.CN15PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN16              CNPU2bits.CN16PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN24              CNPU2bits.CN24PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#define EnablePullUpCN27              CNPU2bits.CN27PUE = 1 /*Enables  pull-up resistor for change notification pin*/
#endif
#endif
#endif

/******************************************************************
Macro       : DisablePullUpCNx
 
Include     : ports.h
 
Description : This disables the pull-up resistor for CN pins.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#if defined (cn_v1_1 ) || defined (cn_v1_2) 
#define DisablePullUpCN0               CNPU1bits.CN0PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN1               CNPU1bits.CN1PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN2               CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3               CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN4               CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5               CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6               CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN7               CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11               CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12               CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN13               CNPU1bits.CN13PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN14               CNPU1bits.CN14PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15              CNPU1bits.CN15PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN16              CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21               CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN22               CNPU2bits.CN22PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN23               CNPU2bits.CN23PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN24               CNPU2bits.CN24PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN27               CNPU2bits.CN27PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN29               CNPU2bits.CN29PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN30               CNPU2bits.CN30PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v1_2) 
#define DisablePullUpCN8               CNPU1bits.CN8PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN9               CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN10               CNPU1bits.CN10PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN17               CNPU2bits.CN17PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN18               CNPU2bits.CN18PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN19               CNPU2bits.CN19PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN20               CNPU2bits.CN20PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN25               CNPU2bits.CN25PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN26              CNPU2bits.CN26PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN28               CNPU2bits.CN28PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v1_3)||defined (cn_v1_4)
#define DisablePullUpCN0               CNPU1bits.CN0PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN1               CNPU1bits.CN1PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN2               CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3               CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN4               CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5               CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6               CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN7               CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN8               CNPU1bits.CN8PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN9               CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN10               CNPU1bits.CN10PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11               CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12               CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN13               CNPU1bits.CN13PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN14               CNPU1bits.CN14PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15              CNPU1bits.CN15PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN16              CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN17               CNPU2bits.CN17PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN18               CNPU2bits.CN18PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v1_4)
#define DisablePullUpCN19               CNPU2bits.CN19PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN20               CNPU2bits.CN20PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21               CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_1) ||defined (cn_v2_2)|| defined (cn_v2_3)
#define DisablePullUpCN0               CNPU1bits.CN0PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN1               CNPU1bits.CN1PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN2               CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3               CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN4               CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5               CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6               CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN7               CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN8               CNPU1bits.CN8PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN9               CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN10               CNPU1bits.CN10PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11               CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12               CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN13               CNPU1bits.CN13PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN14               CNPU1bits.CN14PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15              CNPU1bits.CN15PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN16              CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN17               CNPU2bits.CN17PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN18               CNPU2bits.CN18PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN22               CNPU2bits.CN22PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN23               CNPU2bits.CN23PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN24               CNPU2bits.CN24PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN25               CNPU2bits.CN25PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN26              CNPU2bits.CN26PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN27               CNPU2bits.CN27PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN28               CNPU2bits.CN28PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN29               CNPU2bits.CN29PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN30               CNPU2bits.CN30PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN31               CNPU2bits.CN31PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN32               CNPU3bits.CN32PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN49               CNPU4bits.CN49PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN50               CNPU4bits.CN50PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN51               CNPU4bits.CN51PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN52               CNPU4bits.CN52PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN53               CNPU4bits.CN53PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN54               CNPU4bits.CN54PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN55               CNPU4bits.CN55PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN56               CNPU4bits.CN56PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN58               CNPU4bits.CN58PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN59               CNPU4bits.CN59PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN60               CNPU4bits.CN60PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN61               CNPU4bits.CN61PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN62               CNPU4bits.CN62PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN63               CNPU4bits.CN63PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN64               CNPU5bits.CN64PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN65               CNPU5bits.CN65PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN68               CNPU5bits.CN68PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN69               CNPU5bits.CN69PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN71               CNPU5bits.CN71PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v2_2)|| defined (cn_v2_3)
#define DisablePullUpCN19               CNPU2bits.CN19PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN20               CNPU2bits.CN20PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21               CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN25               CNPU2bits.CN25PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN26              CNPU2bits.CN26PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN28               CNPU2bits.CN28PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN41               CNPU3bits.CN41PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN42               CNPU3bits.CN42PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN43               CNPU3bits.CN43PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN44               CNPU3bits.CN44PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN45               CNPU3bits.CN45PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN47               CNPU3bits.CN47PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN57               CNPU4bits.CN57PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN66               CNPU5bits.CN66PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN67               CNPU5bits.CN67PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN70               CNPU5bits.CN70PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN74               CNPU5bits.CN74PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN77               CNPU5bits.CN77PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN78               CNPU5bits.CN78PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#if defined (cn_v2_3)
#define DisablePullUpCN33               CNPU3bits.CN33PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN34               CNPU3bits.CN34PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN35               CNPU3bits.CN35PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN36               CNPU3bits.CN36PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN37               CNPU3bits.CN37PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN38               CNPU3bits.CN38PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN39               CNPU3bits.CN39PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN40               CNPU3bits.CN40PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN46               CNPU3bits.CN46PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN48               CNPU4bits.CN48PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN75               CNPU5bits.CN75PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN76               CNPU5bits.CN76PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN79               CNPU5bits.CN79PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN80               CNPU6bits.CN80PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN81               CNPU6bits.CN81PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN82               CNPU6bits.CN82PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_4) || defined (cn_v2_5)|| defined (cn_v2_6)
#define DisablePullUpCN0               CNPU1bits.CN0PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN1               CNPU1bits.CN1PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN2               CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3               CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN4               CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5               CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6               CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN7               CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN8               CNPU1bits.CN8PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN9               CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN10               CNPU1bits.CN10PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11               CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12               CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN13               CNPU1bits.CN13PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN14               CNPU1bits.CN14PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15              CNPU1bits.CN15PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN16              CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN17               CNPU2bits.CN17PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN18               CNPU2bits.CN18PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN22               CNPU2bits.CN22PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN23               CNPU2bits.CN23PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN24               CNPU2bits.CN24PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN25               CNPU2bits.CN25PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN26              CNPU2bits.CN26PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN27               CNPU2bits.CN27PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN28               CNPU2bits.CN28PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN29               CNPU2bits.CN29PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN30               CNPU2bits.CN30PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN31               CNPU2bits.CN31PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN32               CNPU3bits.CN32PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN49               CNPU4bits.CN49PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN50               CNPU4bits.CN50PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN51               CNPU4bits.CN51PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN52               CNPU4bits.CN52PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN53               CNPU4bits.CN53PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN54               CNPU4bits.CN54PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN55               CNPU4bits.CN55PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN56               CNPU4bits.CN56PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN58               CNPU4bits.CN58PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN59               CNPU4bits.CN59PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN60               CNPU4bits.CN60PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN61               CNPU4bits.CN61PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN62               CNPU4bits.CN62PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN63               CNPU4bits.CN63PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN64               CNPU5bits.CN64PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN65               CNPU5bits.CN65PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN68               CNPU5bits.CN68PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN69               CNPU5bits.CN69PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN71               CNPU5bits.CN71PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN72               CNPU5bits.CN72PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN83               CNPU6bits.CN83PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN84               CNPU6bits.CN84PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v2_5)|| defined (cn_v2_6)
#define DisablePullUpCN19               CNPU2bits.CN19PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN20               CNPU2bits.CN20PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21               CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pi*/
#define DisablePullUpCN41               CNPU3bits.CN41PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN42               CNPU3bits.CN42PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN43               CNPU3bits.CN43PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN44               CNPU3bits.CN44PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN45               CNPU3bits.CN45PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN47               CNPU3bits.CN47PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN57               CNPU4bits.CN57PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN66               CNPU5bits.CN66PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN67               CNPU5bits.CN67PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN73               CNPU5bits.CN73PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN74               CNPU5bits.CN74PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN77               CNPU5bits.CN77PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN78               CNPU5bits.CN78PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#if defined (cn_v2_6)
#define DisablePullUpCN33               CNPU3bits.CN33PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN34               CNPU3bits.CN34PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN35               CNPU3bits.CN35PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN36               CNPU3bits.CN36PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN37               CNPU3bits.CN37PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN38               CNPU3bits.CN38PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN39               CNPU3bits.CN39PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN40               CNPU3bits.CN40PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN46               CNPU3bits.CN46PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN48               CNPU4bits.CN48PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN75               CNPU5bits.CN75PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN76               CNPU5bits.CN76PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN79               CNPU5bits.CN79PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN80               CNPU6bits.CN80PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN81               CNPU6bits.CN81PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN82               CNPU6bits.CN82PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_8) ||defined (cn_v2_9)
#define DisablePullUpCN0               CNPU1bits.CN0PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN1               CNPU1bits.CN1PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN2               CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3               CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN4               CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5               CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6               CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN7               CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11               CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12               CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN13               CNPU1bits.CN13PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15              CNPU1bits.CN15PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN16              CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21               CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN22               CNPU2bits.CN22PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN23               CNPU2bits.CN23PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN27               CNPU2bits.CN27PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN29               CNPU2bits.CN29PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN30               CNPU2bits.CN30PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v2_8)
#define DisablePullUpCN8               CNPU1bits.CN8PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN9               CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN10               CNPU1bits.CN10PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN17               CNPU2bits.CN17PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN18               CNPU2bits.CN18PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN19               CNPU2bits.CN19PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN20               CNPU2bits.CN20PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN25               CNPU2bits.CN25PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN26              CNPU2bits.CN26PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN28               CNPU2bits.CN28PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_10) ||defined (cn_v2_11)
#define DisablePullUpCN0               CNPU1bits.CN0PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN1               CNPU1bits.CN1PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN2               CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3               CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN4               CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5               CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6               CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN7               CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN8               CNPU1bits.CN8PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN9               CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN10               CNPU1bits.CN10PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11               CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12               CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN13               CNPU1bits.CN13PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN14               CNPU1bits.CN14PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15              CNPU1bits.CN15PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN16              CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN17               CNPU2bits.CN17PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN18               CNPU2bits.CN18PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN22               CNPU2bits.CN22PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN23               CNPU2bits.CN23PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN24               CNPU2bits.CN24PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN25               CNPU2bits.CN25PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN26              CNPU2bits.CN26PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN27               CNPU2bits.CN27PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN28               CNPU2bits.CN28PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN29               CNPU2bits.CN29PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN30               CNPU2bits.CN30PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN31               CNPU2bits.CN31PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN32               CNPU3bits.CN32PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN49               CNPU4bits.CN49PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN50               CNPU4bits.CN50PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN51               CNPU4bits.CN51PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN52               CNPU4bits.CN52PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN53               CNPU4bits.CN53PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN54               CNPU4bits.CN54PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN55               CNPU4bits.CN55PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN56               CNPU4bits.CN56PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN58               CNPU4bits.CN58PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN59               CNPU4bits.CN59PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN60               CNPU4bits.CN60PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN61               CNPU4bits.CN61PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN62               CNPU4bits.CN62PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN63               CNPU4bits.CN63PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN64               CNPU5bits.CN64PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN65               CNPU5bits.CN65PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN68               CNPU5bits.CN68PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN69               CNPU5bits.CN69PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN71               CNPU5bits.CN71PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN83               CNPU6bits.CN83PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN84               CNPU6bits.CN84PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v2_11)
#define DisablePullUpCN19               CNPU2bits.CN19PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN20               CNPU2bits.CN20PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21               CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN25               CNPU2bits.CN25PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN26              CNPU2bits.CN26PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN28               CNPU2bits.CN28PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN33               CNPU3bits.CN33PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN34               CNPU3bits.CN34PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN35               CNPU3bits.CN35PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN36               CNPU3bits.CN36PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN37               CNPU3bits.CN37PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN38               CNPU3bits.CN38PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN39               CNPU3bits.CN39PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN40               CNPU3bits.CN40PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN41               CNPU3bits.CN41PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN42               CNPU3bits.CN42PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN43               CNPU3bits.CN43PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN44               CNPU3bits.CN44PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN45               CNPU3bits.CN45PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN46               CNPU3bits.CN46PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN48               CNPU4bits.CN48PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN47               CNPU3bits.CN47PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN57               CNPU4bits.CN57PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN66               CNPU5bits.CN66PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN67               CNPU5bits.CN67PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN70               CNPU5bits.CN70PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN73               CNPU5bits.CN73PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN74               CNPU5bits.CN74PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN77               CNPU5bits.CN77PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN78               CNPU5bits.CN78PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN75               CNPU5bits.CN75PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN76               CNPU5bits.CN76PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN79               CNPU5bits.CN79PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN80               CNPU6bits.CN80PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN81               CNPU6bits.CN81PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN82               CNPU6bits.CN82PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_12) || defined (cn_v2_13) || defined (cn_v2_14)
#define DisablePullUpCN2                CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3                CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN4                CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5                CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6                CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN7                CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN8                CNPU1bits.CN8PUE = 0 /*Disables pull-up resistor for change notification pin*/
#define DisablePullUpCN9                CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN10               CNPU1bits.CN10PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11               CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12               CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN13               CNPU1bits.CN13PUE = 0 /*Disables pull-up resistor for change notification pin*/
#define DisablePullUpCN14               CNPU1bits.CN14PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15               CNPU1bits.CN15PUE = 0 /*Disables pull-up resistor for change notification pin*/
#define DisablePullUpCN16               CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN17               CNPU2bits.CN17PUE = 0/*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN18               CNPU2bits.CN18PUE = 0  /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN22               CNPU2bits.CN22PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN23               CNPU2bits.CN23PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN24               CNPU2bits.CN24PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN25               CNPU2bits.CN25PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN26               CNPU2bits.CN26PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN27               CNPU2bits.CN27PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN28               CNPU2bits.CN28PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN29               CNPU2bits.CN29PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN30               CNPU2bits.CN30PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN31               CNPU2bits.CN31PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN32               CNPU3bits.CN32PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN49               CNPU4bits.CN49PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN50               CNPU4bits.CN50PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN51               CNPU4bits.CN51PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN52               CNPU4bits.CN52PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN53               CNPU4bits.CN53PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN54               CNPU4bits.CN54PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN55               CNPU4bits.CN55PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN56               CNPU4bits.CN56PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN57               CNPU4bits.CN57PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN58               CNPU4bits.CN58PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN59               CNPU4bits.CN59PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN60               CNPU4bits.CN60PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN61               CNPU4bits.CN61PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN62               CNPU4bits.CN62PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN63               CNPU4bits.CN63PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN64               CNPU5bits.CN64PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN65               CNPU5bits.CN65PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN68               CNPU5bits.CN68PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN69               CNPU5bits.CN69PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN70               CNPU5bits.CN70PUE = 0 /*Disables pull-up resistor for change notification pin*/
#define DisablePullUpCN71               CNPU5bits.CN71PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN72               CNPU5bits.CN72PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN73               CNPU5bits.CN73PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN84               CNPU6bits.CN84PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v2_13) || defined (cn_v2_14)
#define DisablePullUpCN19               CNPU2bits.CN19PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN20               CNPU2bits.CN20PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21               CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN41               CNPU3bits.CN41PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN42               CNPU3bits.CN42PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN43               CNPU3bits.CN43PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN44               CNPU3bits.CN44PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN45               CNPU3bits.CN45PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN47               CNPU3bits.CN47PUE = 0 /*Disables pull-up resistor for change notification pin*/
#define DisablePullUpCN66               CNPU5bits.CN66PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN67               CNPU5bits.CN67PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN74               CNPU5bits.CN74PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN77               CNPU5bits.CN77PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN78               CNPU5bits.CN78PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN83               CNPU6bits.CN83PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#if defined (cn_v2_14)
#define DisablePullUpCN33               CNPU3bits.CN33PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN34               CNPU3bits.CN34PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN35               CNPU3bits.CN35PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN36               CNPU3bits.CN36PUE = 0 /*Disables pull-up resistor for change notification pin*/
#define DisablePullUpCN37               CNPU3bits.CN37PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN38               CNPU3bits.CN38PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN39               CNPU3bits.CN39PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN40               CNPU3bits.CN40PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN46               CNPU3bits.CN45PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN48               CNPU4bits.CN48PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN75               CNPU5bits.CN75PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN76               CNPU5bits.CN76PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN79               CNPU5bits.CN79PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN80               CNPU6bits.CN80PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN81               CNPU6bits.CN81PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN82               CNPU6bits.CN82PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_15) || defined (cn_v2_16)
#define DisablePullUpCN2                CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3                CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN4                CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5                CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6                CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN7                CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN8                CNPU1bits.CN8PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN9                CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN10               CNPU1bits.CN10PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11               CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12               CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN13               CNPU1bits.CN13PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN14               CNPU1bits.CN14PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15               CNPU1bits.CN15PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN16               CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN17               CNPU2bits.CN17PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN18               CNPU2bits.CN18PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN22               CNPU2bits.CN22PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN23               CNPU2bits.CN23PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN24               CNPU2bits.CN24PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN25               CNPU2bits.CN25PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN30               CNPU2bits.CN30PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN31               CNPU2bits.CN31PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN32               CNPU3bits.CN32PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN49               CNPU4bits.CN49PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN50               CNPU4bits.CN50PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN51               CNPU4bits.CN51PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN52               CNPU4bits.CN52PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN53               CNPU4bits.CN53PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN54               CNPU4bits.CN54PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN55               CNPU4bits.CN55PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN56               CNPU4bits.CN56PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN58               CNPU4bits.CN58PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN59               CNPU4bits.CN59PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN60               CNPU4bits.CN60PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN61               CNPU4bits.CN61PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN62               CNPU4bits.CN62PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN63               CNPU4bits.CN63PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN64               CNPU5bits.CN64PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN65               CNPU5bits.CN65PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN68               CNPU5bits.CN68PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN69               CNPU5bits.CN69PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN71               CNPU5bits.CN71PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN72               CNPU5bits.CN72PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN73               CNPU5bits.CN73PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN83               CNPU6bits.CN83PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v2_16)
#define DisablePullUpCN19               CNPU2bits.CN19PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN20               CNPU2bits.CN20PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21               CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN33               CNPU3bits.CN33PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN34               CNPU3bits.CN34PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN35               CNPU3bits.CN35PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN36               CNPU3bits.CN36PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN37               CNPU3bits.CN37PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN38               CNPU3bits.CN38PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN39               CNPU3bits.CN39PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN40               CNPU3bits.CN40PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN41               CNPU3bits.CN41PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN42               CNPU3bits.CN42PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN43               CNPU3bits.CN43PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN44               CNPU3bits.CN44PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN45               CNPU3bits.CN45PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN45               CNPU3bits.CN45PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN46               CNPU3bits.CN46PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN47               CNPU3bits.CN47PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN48               CNPU4bits.CN48PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN57               CNPU4bits.CN57PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN66               CNPU5bits.CN66PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN67               CNPU5bits.CN67PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN70               CNPU5bits.CN70PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN74               CNPU5bits.CN74PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN75               CNPU5bits.CN75PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN76               CNPU5bits.CN76PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN77               CNPU5bits.CN77PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN78               CNPU5bits.CN78PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN79               CNPU5bits.CN79PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN80               CNPU6bits.CN80PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN81               CNPU6bits.CN81PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN82               CNPU6bits.CN82PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v3_1)||defined (cn_v3_2)||defined (cn_v3_3) ||defined (cn_v3_4) 
#define DisablePullUpCN0               CNPU1bits.CN0PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN1               CNPU1bits.CN1PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN2               CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3               CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN8               CNPU1bits.CN8PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11               CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12               CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21               CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN22               CNPU2bits.CN22PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN29               CNPU2bits.CN29PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN30               CNPU2bits.CN30PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v3_1)||defined (cn_v3_2) ||defined (cn_v3_4) 
#define DisablePullUpCN4               CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5               CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6               CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN14               CNPU1bits.CN14PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#if defined (cn_v3_1)||defined (cn_v3_2)
#define DisablePullUpCN13               CNPU1bits.CN13PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN23               CNPU2bits.CN23PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#if defined (cn_v3_2)
#define DisablePullUpCN7               CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN9               CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15              CNPU1bits.CN15PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN16              CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN24               CNPU2bits.CN24PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN27               CNPU2bits.CN27PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif

#if	defined (cn_v3_5) || defined (cn_v3_6) || defined (cn_v3_7)
#define DisablePullUpCN0               CNPU1bits.CN0PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN1               CNPU1bits.CN1PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN2               CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3               CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN4               CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5               CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6               CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11               CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12               CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN13               CNPU1bits.CN13PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN14               CNPU1bits.CN14PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21               CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN22               CNPU2bits.CN22PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN23               CNPU2bits.CN23PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN29               CNPU2bits.CN29PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN30               CNPU2bits.CN30PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if	defined (cn_v3_7)
#define DisablePullUpCN10               CNPU1bits.CN10PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN17               CNPU2bits.CN17PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN18               CNPU2bits.CN18PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN19               CNPU2bits.CN19PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN20               CNPU2bits.CN20PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN25               CNPU2bits.CN25PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN26              CNPU2bits.CN26PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN28               CNPU2bits.CN28PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN31               CNPU2bits.CN31PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN32               CNPU3bits.CN32PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN33               CNPU3bits.CN33PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN34               CNPU3bits.CN34PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN35               CNPU3bits.CN35PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN36               CNPU3bits.CN36PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN7               CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN9               CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15              CNPU1bits.CN15PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN16              CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN24               CNPU2bits.CN24PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN27               CNPU2bits.CN27PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif

#if defined (cn_v4_1)||defined (cn_v4_2) || defined (cn_v4_3)
#define DisablePullUpCN0               CNPU1bits.CN0PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN1               CNPU1bits.CN1PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN2               CNPU1bits.CN2PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN3               CNPU1bits.CN3PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN8               CNPU1bits.CN8PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN11              CNPU1bits.CN11PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN12              CNPU1bits.CN12PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN21              CNPU2bits.CN21PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN22              CNPU2bits.CN22PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN29              CNPU2bits.CN29PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN30              CNPU2bits.CN30PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v4_2) || defined (cn_v4_3)
#define DisablePullUpCN4               CNPU1bits.CN4PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN5               CNPU1bits.CN5PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN6               CNPU1bits.CN6PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN13              CNPU1bits.CN13PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN14              CNPU1bits.CN14PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN23              CNPU2bits.CN23PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#if defined (cn_v4_3)
#define DisablePullUpCN7               CNPU1bits.CN7PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN9               CNPU1bits.CN9PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN15              CNPU1bits.CN15PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN16              CNPU2bits.CN16PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN24              CNPU2bits.CN24PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#define DisablePullUpCN27              CNPU2bits.CN27PUE = 0 /*Disables  pull-up resistor for change notification pin*/
#endif
#endif
#endif

/******************************************************************
Macro       : EnablePullDownCNx

Include     : ports.h
 
Description : This enables the pull-down resistors for CN pins.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#if defined (cn_v2_1) || defined (cn_v2_2)|| defined (cn_v2_3)
#define EnablePullDownCN0               CNPD1bits.CN0PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN1               CNPD1bits.CN1PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN2               CNPD1bits.CN2PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN3               CNPD1bits.CN3PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN4               CNPD1bits.CN4PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN5               CNPD1bits.CN5PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN6               CNPD1bits.CN6PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN7               CNPD1bits.CN7PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN8               CNPD1bits.CN8PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN9               CNPD1bits.CN9PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN10               CNPD1bits.CN10PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN11              CNPD1bits.CN11PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN12              CNPD1bits.CN12PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN13              CNPD1bits.CN13PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN14              CNPD1bits.CN14PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN15              CNPD1bits.CN15PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN16              CNPD2bits.CN16PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN17               CNPD2bits.CN17PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN18               CNPD2bits.CN18PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN22              CNPD2bits.CN22PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN23              CNPD2bits.CN23PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN24              CNPD2bits.CN24PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN25               CNPD2bits.CN25PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN26               CNPD2bits.CN26PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN28               CNPD2bits.CN28PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN27              CNPD2bits.CN27PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN29              CNPD2bits.CN29PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN30              CNPD2bits.CN30PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN31               CNPD2bits.CN31PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN32               CNPD3bits.CN32PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN49               CNPD4bits.CN49PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN50               CNPD4bits.CN50PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN51               CNPD4bits.CN51PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN52               CNPD4bits.CN52PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN53               CNPD4bits.CN53PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN54               CNPD4bits.CN54PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN55               CNPD4bits.CN55PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN56               CNPD4bits.CN56PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN58               CNPD4bits.CN58PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN59               CNPD4bits.CN59PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN60               CNPD4bits.CN60PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN61               CNPD4bits.CN61PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN62               CNPD4bits.CN62PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN63               CNPD4bits.CN63PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN64               CNPD5bits.CN64PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN65               CNPD5bits.CN65PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN68              CNPD5bits.CN68PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN69               CNPD5bits.CN69PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN71               CNPD5bits.CN71PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#if defined (cn_v2_2)|| defined (cn_v2_3)
#define EnablePullDownCN19               CNPD2bits.CN19PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN20               CNPD2bits.CN20PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN21               CNPD2bits.CN21PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN41               CNPD3bits.CN41PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN42               CNPD3bits.CN42PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN43               CNPD3bits.CN43PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN44               CNPD3bits.CN44PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN45               CNPD3bits.CN45PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN47               CNPD3bits.CN47PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN57               CNPD4bits.CN57PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN66               CNPD5bits.CN66PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN67               CNPD5bits.CN67PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN70               CNPD5bits.CN70PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN74               CNPD5bits.CN74PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN77               CNPD5bits.CN77PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN78               CNPD5bits.CN78PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#if defined (cn_v2_3)
#define EnablePullDownCN33               CNPD3bits.CN33PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN34               CNPD3bits.CN34PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN35               CNPD3bits.CN35PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN36               CNPD3bits.CN36PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN37               CNPD3bits.CN37PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN38               CNPD3bits.CN38PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN39               CNPD3bits.CN39PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN40               CNPD3bits.CN40PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN46               CNPD3bits.CN46PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN48               CNPD4bits.CN48PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN75               CNPD5bits.CN75PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN76               CNPD5bits.CN76PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN79               CNPD5bits.CN79PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN80               CNPD6bits.CN80PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN81               CNPD6bits.CN81PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN82               CNPD6bits.CN82PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_4) || defined (cn_v2_5)|| defined (cn_v2_6)
#define EnablePullDownCN0               CNPD1bits.CN0PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN1               CNPD1bits.CN1PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN2               CNPD1bits.CN2PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN3               CNPD1bits.CN3PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN4               CNPD1bits.CN4PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN5               CNPD1bits.CN5PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN6               CNPD1bits.CN6PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN7               CNPD1bits.CN7PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN8               CNPD1bits.CN8PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN9               CNPD1bits.CN9PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN10               CNPD1bits.CN10PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN11              CNPD1bits.CN11PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN12              CNPD1bits.CN12PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN13              CNPD1bits.CN13PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN14              CNPD1bits.CN14PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN15              CNPD1bits.CN15PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN16              CNPD2bits.CN16PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN17               CNPD2bits.CN17PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN18               CNPD2bits.CN18PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN22              CNPD2bits.CN22PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN23              CNPD2bits.CN23PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN24              CNPD2bits.CN24PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN25               CNPD2bits.CN25PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN26               CNPD2bits.CN26PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN27              CNPD2bits.CN27PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN28               CNPD2bits.CN28PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN29              CNPD2bits.CN29PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN30              CNPD2bits.CN30PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN31               CNPD2bits.CN31PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN32               CNPD3bits.CN32PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN49               CNPD4bits.CN49PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN50               CNPD4bits.CN50PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN51               CNPD4bits.CN51PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN52               CNPD4bits.CN52PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN53               CNPD4bits.CN53PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN54               CNPD4bits.CN54PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN55               CNPD4bits.CN55PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN56               CNPD4bits.CN56PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN58               CNPD4bits.CN58PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN59               CNPD4bits.CN59PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN60               CNPD4bits.CN60PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN61               CNPD4bits.CN61PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN62               CNPD4bits.CN62PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN63               CNPD4bits.CN63PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN64               CNPD5bits.CN64PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN65               CNPD5bits.CN65PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN68              CNPD5bits.CN68PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN69               CNPD5bits.CN69PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN71               CNPD5bits.CN71PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN72               CNPD5bits.CN72PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN83               CNPD6bits.CN83PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN84               CNPD6bits.CN84PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#if defined (cn_v2_5)|| defined (cn_v2_6)
#define EnablePullDownCN19               CNPD2bits.CN19PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN20               CNPD2bits.CN20PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN21               CNPD2bits.CN21PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN41               CNPD3bits.CN41PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN42               CNPD3bits.CN42PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN43               CNPD3bits.CN43PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN44               CNPD3bits.CN44PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN45               CNPD3bits.CN45PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN47               CNPD3bits.CN47PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN57               CNPD4bits.CN57PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN66               CNPD5bits.CN66PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN67               CNPD5bits.CN67PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN74               CNPD5bits.CN74PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN77               CNPD5bits.CN77PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN78               CNPD5bits.CN78PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN73               CNPD5bits.CN73PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#if defined (cn_v2_6)
#define EnablePullDownCN33               CNPD3bits.CN33PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN34               CNPD3bits.CN34PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN35               CNPD3bits.CN35PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN36               CNPD3bits.CN36PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN37               CNPD3bits.CN37PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN38               CNPD3bits.CN38PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN39               CNPD3bits.CN39PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN40               CNPD3bits.CN40PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN46               CNPD3bits.CN46PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN48               CNPD4bits.CN48PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN75               CNPD5bits.CN75PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN76               CNPD5bits.CN76PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN79               CNPD5bits.CN79PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN80               CNPD6bits.CN80PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN81               CNPD6bits.CN81PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN82               CNPD6bits.CN82PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#endif

#if defined (cn_v3_1)|| defined (cn_v3_2)|| defined (cn_v3_3) || defined (cn_v3_4)
#define EnablePullDownCN0               CNPD1bits.CN0PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN1               CNPD1bits.CN1PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN2               CNPD1bits.CN2PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN3               CNPD1bits.CN3PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN8               CNPD1bits.CN8PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN11              CNPD1bits.CN11PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN12              CNPD1bits.CN12PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN21               CNPD2bits.CN21PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN22              CNPD2bits.CN22PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN29              CNPD2bits.CN29PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN30              CNPD2bits.CN30PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#if	defined (cn_v3_1)|| defined (cn_v3_2)|| defined (cn_v3_4)
#define EnablePullDownCN4               CNPD1bits.CN4PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN5               CNPD1bits.CN5PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN6               CNPD1bits.CN6PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN14              CNPD1bits.CN14PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#if	defined (cn_v3_1)|| defined (cn_v3_2)
#define EnablePullDownCN13              CNPD1bits.CN13PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN23              CNPD2bits.CN23PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#if	defined (cn_v3_2)
#define EnablePullDownCN7               CNPD1bits.CN7PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN9               CNPD1bits.CN9PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN15              CNPD1bits.CN15PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN16              CNPD2bits.CN16PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN24              CNPD2bits.CN24PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN27              CNPD2bits.CN27PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_10) || defined (cn_v2_11)
#define EnablePullDownCN0                CNPD1bits.CN0PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN1                CNPD1bits.CN1PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN2                CNPD1bits.CN2PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN3                CNPD1bits.CN3PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN4                CNPD1bits.CN4PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN5                CNPD1bits.CN5PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN6                CNPD1bits.CN6PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN7                CNPD1bits.CN7PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN8                CNPD1bits.CN8PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN9                CNPD1bits.CN9PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN10               CNPD1bits.CN10PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN11               CNPD1bits.CN11PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN12               CNPD1bits.CN12PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN13               CNPD1bits.CN13PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN14               CNPD1bits.CN14PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN15               CNPD1bits.CN15PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN16               CNPD2bits.CN16PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN17               CNPD2bits.CN17PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN18               CNPD2bits.CN18PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN22               CNPD2bits.CN22PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN23               CNPD2bits.CN23PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN24               CNPD2bits.CN24PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN25               CNPD2bits.CN25PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN26               CNPD2bits.CN26PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN28               CNPD2bits.CN28PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN27               CNPD2bits.CN27PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN29               CNPD2bits.CN29PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN30               CNPD2bits.CN30PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN31               CNPD2bits.CN31PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN32               CNPD3bits.CN32PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN49               CNPD4bits.CN49PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN50               CNPD4bits.CN50PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN51               CNPD4bits.CN51PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN52               CNPD4bits.CN52PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN53               CNPD4bits.CN53PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN54               CNPD4bits.CN54PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN55               CNPD4bits.CN55PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN56               CNPD4bits.CN56PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN58               CNPD4bits.CN58PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN59               CNPD4bits.CN59PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN60               CNPD4bits.CN60PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN61               CNPD4bits.CN61PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN62               CNPD4bits.CN62PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN63               CNPD4bits.CN63PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN64               CNPD5bits.CN64PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN65               CNPD5bits.CN65PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN68               CNPD5bits.CN68PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN69               CNPD5bits.CN69PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN71               CNPD5bits.CN71PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN83               CNPD6bits.CN83PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN84               CNPD6bits.CN84PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#if defined (cn_v2_11)
#define EnablePullDownCN19               CNPD2bits.CN19PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN20               CNPD2bits.CN20PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN21               CNPD2bits.CN21PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN33               CNPD3bits.CN33PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN34               CNPD3bits.CN34PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN35               CNPD3bits.CN35PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN36               CNPD3bits.CN36PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN37               CNPD3bits.CN37PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN38               CNPD3bits.CN38PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN39               CNPD3bits.CN39PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN40               CNPD3bits.CN40PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN41               CNPD3bits.CN41PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN42               CNPD3bits.CN42PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN43               CNPD3bits.CN43PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN44               CNPD3bits.CN44PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN45               CNPD3bits.CN45PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN46               CNPD3bits.CN46PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN47               CNPD3bits.CN47PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN48               CNPD4bits.CN48PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN57               CNPD4bits.CN57PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN66               CNPD5bits.CN66PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN67               CNPD5bits.CN67PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN70               CNPD5bits.CN70PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN73               CNPD5bits.CN73PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN74               CNPD5bits.CN74PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN75               CNPD5bits.CN75PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN76               CNPD5bits.CN76PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN77               CNPD5bits.CN77PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN78               CNPD5bits.CN78PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN79               CNPD5bits.CN79PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN80               CNPD6bits.CN80PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN81               CNPD6bits.CN81PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN82               CNPD6bits.CN82PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_12) || defined (cn_v2_13)|| defined (cn_v2_14)
#define EnablePullDownCN2               CNPD1bits.CN2PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN3               CNPD1bits.CN3PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN4               CNPD1bits.CN4PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN5               CNPD1bits.CN5PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN6               CNPD1bits.CN6PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN7               CNPD1bits.CN7PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN8               CNPD1bits.CN8PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN9               CNPD1bits.CN9PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN10              CNPD1bits.CN10PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN11              CNPD1bits.CN11PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN12              CNPD1bits.CN12PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN13              CNPD1bits.CN13PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN14              CNPD1bits.CN14PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN15              CNPD1bits.CN15PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN16              CNPD2bits.CN16PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN17              CNPD2bits.CN17PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN18              CNPD2bits.CN18PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN22              CNPD2bits.CN22PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN23              CNPD2bits.CN23PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN24              CNPD2bits.CN24PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN25              CNPD2bits.CN25PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN26              CNPD2bits.CN26PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN27              CNPD2bits.CN27PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN28              CNPD2bits.CN28PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN29              CNPD2bits.CN29PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN30              CNPD2bits.CN30PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN31              CNPD2bits.CN31PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN32              CNPD3bits.CN32PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN49              CNPD4bits.CN49PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN50              CNPD4bits.CN50PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN51              CNPD4bits.CN51PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN52              CNPD4bits.CN52PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN53              CNPD4bits.CN53PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN54              CNPD4bits.CN54PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN55              CNPD4bits.CN55PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN56              CNPD4bits.CN56PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN57              CNPD4bits.CN56PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN58              CNPD4bits.CN58PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN59              CNPD4bits.CN59PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN60              CNPD4bits.CN60PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN61              CNPD4bits.CN61PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN62              CNPD4bits.CN62PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN63              CNPD4bits.CN63PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN64              CNPD5bits.CN64PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN65              CNPD5bits.CN65PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN68              CNPD5bits.CN68PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN69              CNPD5bits.CN69PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN70              CNPD5bits.CN70PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN71              CNPD5bits.CN71PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN72              CNPD5bits.CN72PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN73              CNPD5bits.CN73PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN84              CNPD6bits.CN84PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#if defined (cn_v2_13)|| defined (cn_v2_14)
#define EnablePullDownCN19              CNPD2bits.CN19PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN20              CNPD2bits.CN20PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN21              CNPD2bits.CN21PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN41              CNPD3bits.CN41PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN42              CNPD3bits.CN42PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN43              CNPD3bits.CN43PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN44              CNPD3bits.CN44PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN45              CNPD3bits.CN45PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN47              CNPD3bits.CN47PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN66              CNPD5bits.CN66PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN67              CNPD5bits.CN67PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN74              CNPD5bits.CN74PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN77              CNPD5bits.CN77PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN78              CNPD5bits.CN78PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN83              CNPD5bits.CN73PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#if defined (cn_v2_14)
#define EnablePullDownCN33              CNPD3bits.CN33PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN34              CNPD3bits.CN34PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN35              CNPD3bits.CN35PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN36              CNPD3bits.CN36PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN37              CNPD3bits.CN37PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN38              CNPD3bits.CN38PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN39              CNPD3bits.CN39PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN40              CNPD3bits.CN40PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN46              CNPD3bits.CN46PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN48              CNPD4bits.CN48PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN75              CNPD5bits.CN75PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN76              CNPD5bits.CN76PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN79              CNPD5bits.CN79PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN80              CNPD6bits.CN80PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN81              CNPD6bits.CN81PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN82              CNPD6bits.CN82PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_15) || defined (cn_v2_16)
#define EnablePullDownCN2                CNPD1bits.CN2PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN3                CNPD1bits.CN3PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN4                CNPD1bits.CN4PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN5                CNPD1bits.CN5PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN6                CNPD1bits.CN6PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN7                CNPD1bits.CN7PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN8                CNPD1bits.CN8PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN9                CNPD1bits.CN9PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN10               CNPD1bits.CN10PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN11               CNPD1bits.CN11PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN12               CNPD1bits.CN12PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN13               CNPD1bits.CN13PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN14               CNPD1bits.CN14PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN15               CNPD1bits.CN15PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN16               CNPD2bits.CN16PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN17               CNPD2bits.CN17PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN18               CNPD2bits.CN18PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN22               CNPD2bits.CN22PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN23               CNPD2bits.CN23PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN24               CNPD2bits.CN24PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN25               CNPD2bits.CN25PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN30               CNPD2bits.CN30PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN31               CNPD2bits.CN31PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN32               CNPD3bits.CN32PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN49               CNPD4bits.CN49PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN50               CNPD4bits.CN50PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN51               CNPD4bits.CN51PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN52               CNPD4bits.CN52PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN53               CNPD4bits.CN53PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN54               CNPD4bits.CN54PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN55               CNPD4bits.CN55PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN56               CNPD4bits.CN56PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN58               CNPD4bits.CN58PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN59               CNPD4bits.CN59PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN60               CNPD4bits.CN60PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN61               CNPD4bits.CN61PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN62               CNPD4bits.CN62PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN63               CNPD4bits.CN63PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN64               CNPD5bits.CN64PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN65               CNPD5bits.CN65PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN68               CNPD5bits.CN68PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN69               CNPD5bits.CN69PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN71               CNPD5bits.CN71PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN72               CNPD5bits.CN72PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN73               CNPD5bits.CN73PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN83               CNPD6bits.CN83PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#if defined (cn_v2_16)
#define EnablePullDownCN19               CNPD2bits.CN19PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN20               CNPD2bits.CN20PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN21               CNPD2bits.CN21PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN33               CNPD3bits.CN33PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN34               CNPD3bits.CN34PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN35               CNPD3bits.CN35PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN36               CNPD3bits.CN36PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN37               CNPD3bits.CN37PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN38               CNPD3bits.CN38PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN39               CNPD3bits.CN39PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN40               CNPD3bits.CN40PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN41               CNPD3bits.CN41PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN42               CNPD3bits.CN42PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN43               CNPD3bits.CN43PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN44               CNPD3bits.CN44PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN45               CNPD3bits.CN45PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN45               CNPD3bits.CN45PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN46               CNPD3bits.CN46PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN47               CNPD3bits.CN47PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN48               CNPD4bits.CN48PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN57               CNPD4bits.CN57PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN66               CNPD5bits.CN66PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN67               CNPD5bits.CN67PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN70               CNPD5bits.CN70PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN74               CNPD5bits.CN74PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN75               CNPD5bits.CN75PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN76               CNPD5bits.CN76PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN77               CNPD5bits.CN77PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN78               CNPD5bits.CN78PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN79               CNPD5bits.CN79PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN80               CNPD6bits.CN80PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN81               CNPD6bits.CN81PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN82               CNPD6bits.CN82PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#endif

#if	defined (cn_v3_5) || defined (cn_v3_6) || defined (cn_v3_7)
#define EnablePullDownCN0               CNPD1bits.CN0PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN1               CNPD1bits.CN1PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN2               CNPD1bits.CN2PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN3               CNPD1bits.CN3PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN4               CNPD1bits.CN4PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN5               CNPD1bits.CN5PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN6               CNPD1bits.CN6PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN11              CNPD1bits.CN11PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN12              CNPD1bits.CN12PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN13              CNPD1bits.CN13PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN14              CNPD1bits.CN14PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN21               CNPD2bits.CN21PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN22              CNPD2bits.CN22PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN23              CNPD2bits.CN23PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN29              CNPD2bits.CN29PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN30              CNPD2bits.CN30PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#if	defined (cn_v3_7)
#define EnablePullDownCN10               CNPD1bits.CN10PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN17               CNPD2bits.CN17PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN18               CNPD2bits.CN18PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN19               CNPD2bits.CN19PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN20               CNPD2bits.CN20PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN25               CNPD2bits.CN25PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN26               CNPD2bits.CN26PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN28               CNPD2bits.CN28PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN31               CNPD2bits.CN31PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN32               CNPD3bits.CN32PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN33               CNPD3bits.CN33PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN34               CNPD3bits.CN34PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN35               CNPD3bits.CN35PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN36               CNPD3bits.CN36PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN7               CNPD1bits.CN7PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN9               CNPD1bits.CN9PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN15              CNPD1bits.CN15PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN16              CNPD2bits.CN16PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN24              CNPD2bits.CN24PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN27              CNPD2bits.CN27PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#endif

#if	defined (cn_v4_1) || defined (cn_v4_2) || defined (cn_v4_3)
#define EnablePullDownCN0               CNPD1bits.CN0PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN1               CNPD1bits.CN1PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN2               CNPD1bits.CN2PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN3               CNPD1bits.CN3PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN8               CNPD1bits.CN8PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN11              CNPD1bits.CN11PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN12              CNPD1bits.CN12PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN21               CNPD2bits.CN21PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN22              CNPD2bits.CN22PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN29              CNPD2bits.CN29PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN30              CNPD2bits.CN30PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#if	defined (cn_v4_2) || defined (cn_v4_3)
#define EnablePullDownCN4               CNPD1bits.CN4PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN5               CNPD1bits.CN5PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN6               CNPD1bits.CN6PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN13              CNPD1bits.CN13PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN14              CNPD1bits.CN14PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN23              CNPD2bits.CN23PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#if defined (cn_v4_3)
#define EnablePullDownCN7               CNPD1bits.CN7PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN9               CNPD1bits.CN9PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN15              CNPD1bits.CN15PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN16              CNPD2bits.CN16PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN24              CNPD2bits.CN24PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#define EnablePullDownCN27              CNPD2bits.CN27PDE = 1 /*Enables  pull-down resistor for change notification pin*/
#endif
#endif
#endif

/******************************************************************
Macro       : DisablePullDownCNx
 
Include     : ports.h
 
Description : This enables the pull-down resistors for CN pins.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#if defined (cn_v2_1) || defined (cn_v2_2)|| defined (cn_v2_3)
#define DisablePullDownCN0               CNPD1bits.CN0PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN1               CNPD1bits.CN1PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN2               CNPD1bits.CN2PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN3               CNPD1bits.CN3PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN4               CNPD1bits.CN4PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN5               CNPD1bits.CN5PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN6               CNPD1bits.CN6PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN7               CNPD1bits.CN7PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN8               CNPD1bits.CN8PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN9               CNPD1bits.CN9PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN10               CNPD1bits.CN10PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN11              CNPD1bits.CN11PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN12              CNPD1bits.CN12PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN13              CNPD1bits.CN13PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN14              CNPD1bits.CN14PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN15              CNPD1bits.CN15PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN16              CNPD2bits.CN16PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN17               CNPD2bits.CN17PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN18               CNPD2bits.CN18PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN22              CNPD2bits.CN22PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN23              CNPD2bits.CN23PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN24              CNPD2bits.CN24PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN25               CNPD2bits.CN25PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN26               CNPD2bits.CN26PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN27              CNPD2bits.CN27PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN28               CNPD2bits.CN28PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN29              CNPD2bits.CN29PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN30              CNPD2bits.CN30PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN31               CNPD2bits.CN31PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN32               CNPD3bits.CN32PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN49               CNPD4bits.CN49PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN50               CNPD4bits.CN50PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN51               CNPD4bits.CN51PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN52               CNPD4bits.CN52PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN53               CNPD4bits.CN53PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN54               CNPD4bits.CN54PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN55               CNPD4bits.CN55PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN56               CNPD4bits.CN56PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN58               CNPD4bits.CN58PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN59               CNPD4bits.CN59PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN60               CNPD4bits.CN60PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN61               CNPD4bits.CN61PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN62               CNPD4bits.CN62PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN63               CNPD4bits.CN63PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN64               CNPD5bits.CN64PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN65               CNPD5bits.CN65PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN68              CNPD5bits.CN68PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN69               CNPD5bits.CN69PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN71               CNPD5bits.CN71PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#if defined (cn_v2_2)|| defined (cn_v2_3)
#define DisablePullDownCN19               CNPD2bits.CN19PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN20               CNPD2bits.CN20PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN21               CNPD2bits.CN21PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN41               CNPD3bits.CN41PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN42               CNPD3bits.CN42PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN43               CNPD3bits.CN43PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN44               CNPD3bits.CN44PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN45               CNPD3bits.CN45PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN47               CNPD3bits.CN47PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN57               CNPD4bits.CN57PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN66               CNPD5bits.CN66PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN67               CNPD5bits.CN67PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN70               CNPD5bits.CN70PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN74               CNPD5bits.CN74PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN77               CNPD5bits.CN77PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN78               CNPD5bits.CN78PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#if defined (cn_v2_3)
#define DisablePullDownCN33               CNPD3bits.CN33PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN34               CNPD3bits.CN34PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN35               CNPD3bits.CN35PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN36               CNPD3bits.CN36PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN37               CNPD3bits.CN37PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN38               CNPD3bits.CN38PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN39               CNPD3bits.CN39PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN40               CNPD3bits.CN40PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN46               CNPD3bits.CN46PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN48               CNPD4bits.CN48PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN75               CNPD5bits.CN75PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN76               CNPD5bits.CN76PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN79               CNPD5bits.CN79PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN80               CNPD6bits.CN80PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN81               CNPD6bits.CN81PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN82               CNPD6bits.CN82PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_4) || defined (cn_v2_5)|| defined (cn_v2_6)
#define DisablePullDownCN0               CNPD1bits.CN0PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN1               CNPD1bits.CN1PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN2               CNPD1bits.CN2PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN3               CNPD1bits.CN3PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN4               CNPD1bits.CN4PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN5               CNPD1bits.CN5PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN6               CNPD1bits.CN6PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN7               CNPD1bits.CN7PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN8               CNPD1bits.CN8PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN9               CNPD1bits.CN9PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN10               CNPD1bits.CN10PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN11              CNPD1bits.CN11PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN12              CNPD1bits.CN12PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN13              CNPD1bits.CN13PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN14              CNPD1bits.CN14PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN15              CNPD1bits.CN15PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN16              CNPD2bits.CN16PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN17               CNPD2bits.CN17PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN18               CNPD2bits.CN18PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN22              CNPD2bits.CN22PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN23              CNPD2bits.CN23PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN24              CNPD2bits.CN24PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN25               CNPD2bits.CN25PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN26               CNPD2bits.CN26PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN27              CNPD2bits.CN27PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN28               CNPD2bits.CN28PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN29              CNPD2bits.CN29PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN30              CNPD2bits.CN30PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN31               CNPD2bits.CN31PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN32               CNPD3bits.CN32PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN49               CNPD4bits.CN49PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN50               CNPD4bits.CN50PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN51               CNPD4bits.CN51PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN52               CNPD4bits.CN52PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN53               CNPD4bits.CN53PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN54               CNPD4bits.CN54PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN55               CNPD4bits.CN55PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN56               CNPD4bits.CN56PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN58               CNPD4bits.CN58PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN59               CNPD4bits.CN59PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN60               CNPD4bits.CN60PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN61               CNPD4bits.CN61PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN62               CNPD4bits.CN62PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN63               CNPD4bits.CN63PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN64               CNPD5bits.CN64PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN65               CNPD5bits.CN65PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN68              CNPD5bits.CN68PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN69               CNPD5bits.CN69PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN71               CNPD5bits.CN71PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN72               CNPD5bits.CN72PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN83               CNPD6bits.CN83PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN84               CNPD6bits.CN84PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#if defined (cn_v2_5)|| defined (cn_v2_6)
#define DisablePullDownCN19               CNPD2bits.CN19PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN20               CNPD2bits.CN20PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN21               CNPD2bits.CN21PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN41               CNPD3bits.CN41PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN42               CNPD3bits.CN42PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN43               CNPD3bits.CN43PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN44               CNPD3bits.CN44PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN45               CNPD3bits.CN45PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN47               CNPD3bits.CN47PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN57               CNPD4bits.CN57PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN66               CNPD5bits.CN66PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN67               CNPD5bits.CN67PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN74               CNPD5bits.CN74PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN77               CNPD5bits.CN77PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN78               CNPD5bits.CN78PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN73               CNPD5bits.CN73PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#if defined (cn_v2_6)
#define DisablePullDownCN33               CNPD3bits.CN33PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN34               CNPD3bits.CN34PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN35               CNPD3bits.CN35PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN36               CNPD3bits.CN36PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN37               CNPD3bits.CN37PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN38               CNPD3bits.CN38PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN39               CNPD3bits.CN39PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN40               CNPD3bits.CN40PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN46               CNPD3bits.CN46PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN48               CNPD4bits.CN48PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN75               CNPD5bits.CN75PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN76               CNPD5bits.CN76PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN79               CNPD5bits.CN79PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN80               CNPD6bits.CN80PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN81               CNPD6bits.CN81PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN82               CNPD6bits.CN82PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_10) || defined (cn_v2_11)
#define DisablePullDownCN0               CNPD1bits.CN0PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN1               CNPD1bits.CN1PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN2               CNPD1bits.CN2PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN3               CNPD1bits.CN3PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN4               CNPD1bits.CN4PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN5               CNPD1bits.CN5PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN6               CNPD1bits.CN6PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN7               CNPD1bits.CN7PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN8               CNPD1bits.CN8PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN9               CNPD1bits.CN9PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN10               CNPD1bits.CN10PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN11              CNPD1bits.CN11PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN12              CNPD1bits.CN12PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN13              CNPD1bits.CN13PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN14              CNPD1bits.CN14PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN15              CNPD1bits.CN15PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN16              CNPD2bits.CN16PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN17               CNPD2bits.CN17PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN18               CNPD2bits.CN18PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN22              CNPD2bits.CN22PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN23              CNPD2bits.CN23PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN24              CNPD2bits.CN24PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN25               CNPD2bits.CN25PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN26               CNPD2bits.CN26PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN27              CNPD2bits.CN27PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN28               CNPD2bits.CN28PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN29              CNPD2bits.CN29PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN30              CNPD2bits.CN30PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN31               CNPD2bits.CN31PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN32               CNPD3bits.CN32PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN49               CNPD4bits.CN49PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN50               CNPD4bits.CN50PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN51               CNPD4bits.CN51PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN52               CNPD4bits.CN52PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN53               CNPD4bits.CN53PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN54               CNPD4bits.CN54PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN55               CNPD4bits.CN55PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN56               CNPD4bits.CN56PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN58               CNPD4bits.CN58PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN59               CNPD4bits.CN59PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN60               CNPD4bits.CN60PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN61               CNPD4bits.CN61PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN62               CNPD4bits.CN62PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN63               CNPD4bits.CN63PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN64               CNPD5bits.CN64PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN65               CNPD5bits.CN65PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN68              CNPD5bits.CN68PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN69               CNPD5bits.CN69PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN71               CNPD5bits.CN71PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN83               CNPD6bits.CN83PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN84               CNPD6bits.CN84PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#if defined (cn_v2_11)
#define DisablePullDownCN19               CNPD2bits.CN19PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN20               CNPD2bits.CN20PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN21               CNPD2bits.CN21PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN33               CNPD3bits.CN33PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN34               CNPD3bits.CN34PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN35               CNPD3bits.CN35PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN36               CNPD3bits.CN36PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN37               CNPD3bits.CN37PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN38               CNPD3bits.CN38PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN39               CNPD3bits.CN39PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN40               CNPD3bits.CN40PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN41               CNPD3bits.CN41PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN42               CNPD3bits.CN42PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN43               CNPD3bits.CN43PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN44               CNPD3bits.CN44PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN45               CNPD3bits.CN45PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN46               CNPD3bits.CN46PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN47               CNPD3bits.CN47PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN48               CNPD4bits.CN48PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN57               CNPD4bits.CN57PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN66               CNPD5bits.CN66PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN67               CNPD5bits.CN67PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN70               CNPD5bits.CN70PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN73               CNPD5bits.CN73PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN74               CNPD5bits.CN74PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN75               CNPD5bits.CN75PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN76               CNPD5bits.CN76PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN77               CNPD5bits.CN77PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN78               CNPD5bits.CN78PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN79               CNPD5bits.CN79PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN80               CNPD6bits.CN80PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN81               CNPD6bits.CN81PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN82               CNPD6bits.CN82PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_12) || defined (cn_v2_13)|| defined (cn_v2_14)
#define DisablePullDownCN2               CNPD1bits.CN2PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN3               CNPD1bits.CN3PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN4               CNPD1bits.CN4PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN5               CNPD1bits.CN5PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN6               CNPD1bits.CN6PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN7               CNPD1bits.CN7PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN8               CNPD1bits.CN8PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN9               CNPD1bits.CN9PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN10               CNPD1bits.CN10PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN11              CNPD1bits.CN11PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN12              CNPD1bits.CN12PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN13              CNPD1bits.CN13PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN14              CNPD1bits.CN14PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN15              CNPD1bits.CN15PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN16              CNPD2bits.CN16PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN17               CNPD2bits.CN17PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN18               CNPD2bits.CN18PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN22              CNPD2bits.CN22PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN23              CNPD2bits.CN23PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN24              CNPD2bits.CN24PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN25               CNPD2bits.CN25PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN26               CNPD2bits.CN26PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN27              CNPD2bits.CN27PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN28               CNPD2bits.CN28PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN29              CNPD2bits.CN29PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN30              CNPD2bits.CN30PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN31               CNPD2bits.CN31PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN32               CNPD3bits.CN32PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN49               CNPD4bits.CN49PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN50               CNPD4bits.CN50PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN51               CNPD4bits.CN51PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN52               CNPD4bits.CN52PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN53               CNPD4bits.CN53PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN54               CNPD4bits.CN54PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN55               CNPD4bits.CN55PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN56               CNPD4bits.CN56PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN57               CNPD4bits.CN57PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN58               CNPD4bits.CN58PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN59               CNPD4bits.CN59PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN60               CNPD4bits.CN60PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN61               CNPD4bits.CN61PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN62               CNPD4bits.CN62PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN63               CNPD4bits.CN63PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN64               CNPD5bits.CN64PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN65               CNPD5bits.CN65PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN68              CNPD5bits.CN68PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN69               CNPD5bits.CN69PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN70             CNPD5bits.CN70PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN71               CNPD5bits.CN71PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN72               CNPD5bits.CN72PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN73              CNPD4bits.CN57PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN84               CNPD6bits.CN84PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#if defined (cn_v2_13)|| defined (cn_v2_14)
#define DisablePullDownCN19               CNPD2bits.CN19PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN20               CNPD2bits.CN20PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN21               CNPD2bits.CN21PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN41               CNPD3bits.CN41PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN42               CNPD3bits.CN42PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN43               CNPD3bits.CN43PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN44               CNPD3bits.CN44PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN45               CNPD3bits.CN45PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN47               CNPD3bits.CN47PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN66               CNPD5bits.CN66PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN67               CNPD5bits.CN67PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN74               CNPD5bits.CN74PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN77               CNPD5bits.CN77PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN78               CNPD5bits.CN78PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN83               CNPD5bits.CN73PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#if defined (cn_v2_14)
#define DisablePullDownCN33               CNPD3bits.CN33PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN34               CNPD3bits.CN34PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN35               CNPD3bits.CN35PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN36               CNPD3bits.CN36PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN37               CNPD3bits.CN37PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN38               CNPD3bits.CN38PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN39               CNPD3bits.CN39PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN40               CNPD3bits.CN40PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN46               CNPD3bits.CN46PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN48               CNPD4bits.CN48PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN75               CNPD5bits.CN75PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN76               CNPD5bits.CN76PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN79               CNPD5bits.CN79PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN80               CNPD6bits.CN80PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN81               CNPD6bits.CN81PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN82               CNPD6bits.CN82PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#endif

#if defined (cn_v2_15) || defined (cn_v2_16)
#define DisablePullDownCN2                CNPD1bits.CN2PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN3                CNPD1bits.CN3PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN4                CNPD1bits.CN4PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN5                CNPD1bits.CN5PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN6                CNPD1bits.CN6PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN7                CNPD1bits.CN7PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN8                CNPD1bits.CN8PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN9                CNPD1bits.CN9PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN10               CNPD1bits.CN10PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN11               CNPD1bits.CN11PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN12               CNPD1bits.CN12PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN13               CNPD1bits.CN13PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN14               CNPD1bits.CN14PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN15               CNPD1bits.CN15PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN16               CNPD2bits.CN16PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN17               CNPD2bits.CN17PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN18               CNPD2bits.CN18PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN22               CNPD2bits.CN22PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN23               CNPD2bits.CN23PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN24               CNPD2bits.CN24PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN25               CNPD2bits.CN25PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN30               CNPD2bits.CN30PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN31               CNPD2bits.CN31PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN32               CNPD3bits.CN32PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN49               CNPD4bits.CN49PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN50               CNPD4bits.CN50PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN51               CNPD4bits.CN51PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN52               CNPD4bits.CN52PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN53               CNPD4bits.CN53PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN54               CNPD4bits.CN54PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN55               CNPD4bits.CN55PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN56               CNPD4bits.CN56PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN58               CNPD4bits.CN58PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN59               CNPD4bits.CN59PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN60               CNPD4bits.CN60PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN61               CNPD4bits.CN61PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN62               CNPD4bits.CN62PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN63               CNPD4bits.CN63PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN64               CNPD5bits.CN64PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN65               CNPD5bits.CN65PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN68               CNPD5bits.CN68PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN69               CNPD5bits.CN69PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN71               CNPD5bits.CN71PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN72               CNPD5bits.CN72PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN73               CNPD5bits.CN73PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN83               CNPD6bits.CN83PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#if defined (cn_v2_16)
#define DisablePullDownCN19               CNPD2bits.CN19PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN20               CNPD2bits.CN20PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN21               CNPD2bits.CN21PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN33               CNPD3bits.CN33PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN34               CNPD3bits.CN34PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN35               CNPD3bits.CN35PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN36               CNPD3bits.CN36PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN37               CNPD3bits.CN37PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN38               CNPD3bits.CN38PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN39               CNPD3bits.CN39PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN40               CNPD3bits.CN40PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN41               CNPD3bits.CN41PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN42               CNPD3bits.CN42PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN43               CNPD3bits.CN43PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN44               CNPD3bits.CN44PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN45               CNPD3bits.CN45PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN45               CNPD3bits.CN45PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN46               CNPD3bits.CN46PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN47               CNPD3bits.CN47PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN48               CNPD4bits.CN48PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN57               CNPD4bits.CN57PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN66               CNPD5bits.CN66PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN67               CNPD5bits.CN67PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN70               CNPD5bits.CN70PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN74               CNPD5bits.CN74PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN75               CNPD5bits.CN75PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN76               CNPD5bits.CN76PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN77               CNPD5bits.CN77PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN78               CNPD5bits.CN78PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN79               CNPD5bits.CN79PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN80               CNPD6bits.CN80PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN81               CNPD6bits.CN81PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN82               CNPD6bits.CN82PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#endif

#if defined (cn_v3_1)|| defined (cn_v3_2)|| defined (cn_v3_3)|| defined (cn_v3_4)
#define DisablePullDownCN0               CNPD1bits.CN0PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN1               CNPD1bits.CN1PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN2               CNPD1bits.CN2PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN3               CNPD1bits.CN3PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN8               CNPD1bits.CN8PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN11              CNPD1bits.CN11PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN12              CNPD1bits.CN12PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN21               CNPD2bits.CN21PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN22              CNPD2bits.CN22PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN29              CNPD2bits.CN29PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN30              CNPD2bits.CN30PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#if defined (cn_v3_1)|| defined (cn_v3_2) || defined (cn_v3_4)
#define DisablePullDownCN4               CNPD1bits.CN4PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN5               CNPD1bits.CN5PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN6               CNPD1bits.CN6PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN14              CNPD1bits.CN14PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#if defined (cn_v3_1)|| defined (cn_v3_2) 
#define DisablePullDownCN13              CNPD1bits.CN13PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN23              CNPD2bits.CN23PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#if defined (cn_v3_2)
#define DisablePullDownCN7               CNPD1bits.CN7PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN9               CNPD1bits.CN9PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN15              CNPD1bits.CN15PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN16              CNPD2bits.CN16PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN24              CNPD2bits.CN24PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN27              CNPD2bits.CN27PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#endif

#if	defined (cn_v3_5) || defined (cn_v3_6) || defined (cn_v3_7)
#define DisablePullDownCN0               CNPD1bits.CN0PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN1               CNPD1bits.CN1PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN2               CNPD1bits.CN2PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN3               CNPD1bits.CN3PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN4               CNPD1bits.CN4PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN5               CNPD1bits.CN5PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN6               CNPD1bits.CN6PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN11              CNPD1bits.CN11PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN12              CNPD1bits.CN12PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN13              CNPD1bits.CN13PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN14              CNPD1bits.CN14PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN21               CNPD2bits.CN21PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN22              CNPD2bits.CN22PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN23              CNPD2bits.CN23PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN29              CNPD2bits.CN29PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN30              CNPD2bits.CN30PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#if	defined (cn_v3_7)
#define DisablePullDownCN10               CNPD1bits.CN10PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN17               CNPD2bits.CN17PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN18               CNPD2bits.CN18PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN19               CNPD2bits.CN19PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN20               CNPD2bits.CN20PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN25               CNPD2bits.CN25PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN26               CNPD2bits.CN26PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN28               CNPD2bits.CN28PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN31               CNPD2bits.CN31PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN32               CNPD3bits.CN32PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN33               CNPD3bits.CN33PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN34               CNPD3bits.CN34PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN35               CNPD3bits.CN35PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN36               CNPD3bits.CN36PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN7               CNPD1bits.CN7PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN9               CNPD1bits.CN9PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN15              CNPD1bits.CN15PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN16              CNPD2bits.CN16PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN24              CNPD2bits.CN24PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN27              CNPD2bits.CN27PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#endif

#if	defined (cn_v4_1) || defined (cn_v4_2) || defined (cn_v4_3)
#define DisablePullDownCN0               CNPD1bits.CN0PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN1               CNPD1bits.CN1PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN2               CNPD1bits.CN2PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN3               CNPD1bits.CN3PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN8               CNPD1bits.CN8PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN11              CNPD1bits.CN11PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN12              CNPD1bits.CN12PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN21              CNPD2bits.CN21PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN22              CNPD2bits.CN22PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN29              CNPD2bits.CN29PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN30              CNPD2bits.CN30PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#if	defined (cn_v4_2) || defined (cn_v4_3)
#define DisablePullDownCN4               CNPD1bits.CN4PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN5               CNPD1bits.CN5PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN6               CNPD1bits.CN6PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN13              CNPD1bits.CN13PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN14              CNPD1bits.CN14PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN23              CNPD2bits.CN23PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#if defined (cn_v4_3)
#define DisablePullDownCN7               CNPD1bits.CN7PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN9               CNPD1bits.CN9PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN15              CNPD1bits.CN15PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN16              CNPD2bits.CN16PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN24              CNPD2bits.CN24PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#define DisablePullDownCN27              CNPD2bits.CN27PDE = 0 /*Disables  pull-down resistor for change notification pin*/
#endif
#endif
#endif

 //PORT macros and defines
#define IOPORT_BIT_0                        0x0001 /*Port Bit 0*/
#define IOPORT_BIT_1                        0x0002 /*Port Bit 1*/
#define IOPORT_BIT_2                        0x0004 /*Port Bit 2*/
#define IOPORT_BIT_3                        0x0008 /*Port Bit 3*/
#define IOPORT_BIT_4                        0x0010 /*Port Bit 4*/
#define IOPORT_BIT_5                        0x0020 /*Port Bit 5*/
#define IOPORT_BIT_6                        0x0040 /*Port Bit 6*/
#define IOPORT_BIT_7                        0x0080 /*Port Bit 7*/
#define IOPORT_BIT_8                        0x0100 /*Port Bit 8*/
#define IOPORT_BIT_9                        0x0200 /*Port Bit 9*/
#define IOPORT_BIT_10                       0x0400 /*Port Bit 10*/
#define IOPORT_BIT_11                       0x0800 /*Port Bit 11*/
#define IOPORT_BIT_12                       0x1000 /*Port Bit 12*/
#define IOPORT_BIT_13                       0x2000 /*Port Bit 13*/
#define IOPORT_BIT_14                       0x4000 /*Port Bit 14*/
#define IOPORT_BIT_15                       0x8000 /*Port Bit 15*/

#if defined (port_v1_1) || defined (port_v1_2)|| defined (port_v1_4)
/*PORTA Macros*/
#define mPORTAConfig(tris)                  { TRISA = (unsigned int)tris;}/* Configure PortA*/
#define mPORTARead()                        (PORTA) /*Read PortA*/
#define mPORTAWrite(lat)                    { LATA = (unsigned int)lat;} /*Write PortA*/
#define mPORTAReadLatch()                   (LATA) /*Reads PortA Latch*/
#define mPORTAGetConfig()                   (TRISA) /*Reads PortA Configuration value*/
#define mPORTAReadBit(_bit)                 (PORTA & (unsigned int)_bit) /*Reads given PortA bit value*/
#define mPORTAReadLatchBit(_bit)            (LATA & (unsigned int)_bit)  /*Reads given PortA bit latch value*/
#define mPORTAReadConfigBit(_bit)           (TRISA & (unsigned int)_bit)  /*Reads configuration of given PortA bit */
#define mPORTAOutputConfig(outputs)         { TRISA &= ~(unsigned int)outputs; } /*Configures PortA as output*/
#define mPORTAInputConfig(inputs)           { TRISA |= (unsigned int)inputs;} /*Configures PortA as input*/
#define mPORTASetBits(_bits)                { LATA |= (unsigned int)_bits;} /*Set PortA bit*/
#define mPORTAClearBits(_bits)              { LATA &= ~(unsigned int)_bits;}/*Clears PortA bit*/
#define mPORTAToggleBits(_bits)             { LATA ^= (unsigned int)_bits;} /*Toggles given PortA bit*/
#define mPORTACloseAll()                    { TRISA = 0xFFFF; LATA = 0;} /*Close PortA configuration, brings to default condition*/
#define mPORTACloseBits(_bits)              { TRISA |= (unsigned int)_bits; LATA &= ~(unsigned int)_bits;} /*Close PortA bit configuration*/

#endif

#if defined (port_v1_1) || defined (port_v1_2)|| defined (port_v1_3) || defined (port_v1_4) 
/*PORTB Macros*/
#define mPORTBConfig(tris)                  { TRISB = (unsigned int)tris;   }/* Configure PortA*/
#define mPORTBRead()                        (PORTB)/*Read PortB*/
#define mPORTBWrite(lat)                    { LATB = (unsigned int)lat;}/*Write PortB*/
#define mPORTBReadLatch()                   (LATB)/*Reads PortB Latch*/
#define mPORTBGetConfig()                   (TRISB)/*Reads PortB Configuration value*/
#define mPORTBReadBit(_bit)                 (PORTB & (unsigned int)_bit)/*Reads given PortB bit value*/
#define mPORTBReadLatchBit(_bit)            (LATB & (unsigned int)_bit)/*Reads given PortB bit latch value*/
#define mPORTBReadConfigBit(_bit)           (TRISB & (unsigned int)_bit)/*Reads configuration of given PortB bit */
#define mPORTBOutputConfig(outputs)         { TRISB &= ~(unsigned int)outputs;}/*Configures PortB as output*/
#define mPORTBInputConfig(inputs)           { TRISB |= (unsigned int)inputs;} /*Configures PortB as input*/
#define mPORTBSetBits(_bits)                { LATB |= (unsigned int)_bits; }/*Set PortB bit*/
#define mPORTBClearBits(_bits)              { LATB &= ~(unsigned int)_bits;}/*Clears PortB bit*/
#define mPORTBToggleBits(_bits)             { LATB ^= (unsigned int)_bits; }/*Toggles given PortB bit*/
#define mPORTBCloseAll()                    { TRISB = 0xFFFF; LATB = 0; }/*Close PortB configuration, brings to default condition*/
#define mPORTBCloseBits(_bits)              { TRISB |= (unsigned int)_bits; LATB &= ~(unsigned int)_bits;}/*Close PortB bit configuration*/

#endif  //end PORTB

#if defined (port_v1_2)|| defined (port_v1_3)|| defined (port_v1_4)
/*PORTC Macros*/
#define mPORTCConfig(tris)                  { TRISC = (unsigned int)tris;   }/* Configure PortA*/
#define mPORTCRead()                        (PORTC) /*Read PortA*/
#define mPORTCWrite(lat)                    { LATC = (unsigned int)lat;}/*Write PortA*/
#define mPORTCReadLatch()                   (LATC)/*Reads PortA Latch*/
#define mPORTCGetConfig()                   (TRISC)/*Reads PortC Configuration value*/
#define mPORTCReadBit(_bit)                 (PORTC & (unsigned int)_bit)/*Reads given PortC bit value*/
#define mPORTCReadLatchBit(_bit)            (LATC & (unsigned int)_bit) /*Reads given PortC bit latch value*/
#define mPORTCReadConfigBit(_bit)           (TRISC & (unsigned int)_bit)/*Reads configuration of given PortC bit */
#define mPORTCOutputConfig(outputs)         { TRISC &= ~(unsigned int)outputs;  }/*Configures PortC as output*/
#define mPORTCInputConfig(inputs)           { TRISC |= (unsigned int)inputs;    }/*Configures PortC as input*/
#define mPORTCSetBits(_bits)                { LATC |= (unsigned int)_bits;      }/*Set PortC bit*/
#define mPORTCClearBits(_bits)              { LATC &= ~(unsigned int)_bits;     }/*Clears PortC bit*/
#define mPORTCToggleBits(_bits)             { LATC ^= (unsigned int)_bits;      }/*Toggles given PortC bit*/
#define mPORTCCloseAll()                    { TRISC = 0xFFFF; LATC = 0;         }/*Close PortC configuration, brings to default condition*/
#define mPORTCCloseBits(_bits)              { TRISC |= (unsigned int)_bits; LATC &= ~(unsigned int)_bits;     } /*Close PortC bit configuration*/
#endif

#if defined (port_v1_3)|| defined (port_v1_4)
/*PORTD Macros*/
#define mPORTDConfig(tris)                  { TRISD = (unsigned int)tris;   }/* Configure PortD*/
#define mPORTDRead()                        (PORTD)/*Read PortD*/
#define mPORTDWrite(lat)                    { LATD = (unsigned int)lat;}/*Write PortD*/
#define mPORTDReadLatch()                   (LATD)/*Reads PortD Latch*/
#define mPORTDGetConfig()                   (TRISD)/*Reads PortD Configuration value*/
#define mPORTDReadBit(_bit)                 (PORTD & (unsigned int)_bit)/*Reads given PortD bit value*/
#define mPORTDReadLatchBit(_bit)            (LATD & (unsigned int)_bit)/*Reads given PortD bit latch value*/
#define mPORTDReadConfigBit(_bit)           (TRISD & (unsigned int)_bit) /*Reads configuration of given PortD bit */
#define mPORTDOutputConfig(outputs)         { TRISD &= ~(unsigned int)outputs;  } /*Configures PortD as output*/
#define mPORTDInputConfig(inputs)           { TRISD |= (unsigned int)inputs;    }/*Configures PortD as input*/
#define mPORTDSetBits(_bits)                { LATD |= (unsigned int)_bits;      }/*Set PortD bit*/
#define mPORTDClearBits(_bits)              { LATD &= ~(unsigned int)_bits;     }/*Clears PortD bit*/
#define mPORTDToggleBits(_bits)             { LATD ^= (unsigned int)_bits;      }/*Toggles given PortD bit*/
#define mPORTDCloseAll()                    { TRISD = 0xFFFF; LATD = 0;         }/*Close PortD configuration, brings to default condition*/
#define mPORTDCloseBits(_bits)              { TRISD |= (unsigned int)_bits; LATD &= ~(unsigned int)_bits;} /*Close PortD bit configuration*/

/*PORTE Macros*/
#define mPORTEConfig(tris)                  { TRISE = (unsigned int)tris;}/* Configure PortE*/
#define mPORTERead()                        (PORTE)/*Read PortE*/
#define mPORTEWrite(lat)                    { LATE = (unsigned int)lat;}/*Write PortE*/
#define mPORTEReadLatch()                   (LATE)/*Reads PortE Latch*/
#define mPORTEGetConfig()                   (TRISE)/*Reads PortE Configuration value*/
#define mPORTEReadBit(_bit)                 (PORTE & (unsigned int)_bit)/*Reads given PortE bit value*/
#define mPORTEReadLatchBit(_bit)            (LATE & (unsigned int)_bit)/*Reads given PortE bit latch value*/
#define mPORTEReadConfigBit(_bit)           (TRISE & (unsigned int)_bit)/*Reads configuration of given PortE bit */
#define mPORTEOutputConfig(outputs)         { TRISE &= ~(unsigned int)outputs;}/*Configures PortE as output*/
#define mPORTEInputConfig(inputs)           { TRISE |= (unsigned int)inputs;}/*Configures PortE as input*/
#define mPORTESetBits(_bits)                { LATE |= (unsigned int)_bits;}/*Set PortE bit*/
#define mPORTEClearBits(_bits)              { LATE &= ~(unsigned int)_bits;}/*Clears PortE bit*/
#define mPORTEToggleBits(_bits)             { LATE ^= (unsigned int)_bits;}/*Toggles given PortE bit*/
#define mPORTECloseAll()                    { TRISE = 0xFFFF; LATE = 0;}/*Close PortE configuration, brings to default condition*/
#define mPORTECloseBits(_bits)              { TRISE |= (unsigned int)_bits; LATE &= ~(unsigned int)_bits;}/*Close PortE bit configuration*/

/*PORTF Macros*/
#define mPORTFConfig(tris)                  { TRISF = (unsigned int)tris;   }/* Configure PortF*/
#define mPORTFRead()                        (PORTF)/*Read PortF*/
#define mPORTFWrite(lat)                    { LATF = (unsigned int)lat;}/*Write PortF*/
#define mPORTFReadLatch()                   (LATF)/*Reads PortF Latch*/
#define mPORTFGetConfig()                   (TRISF)/*Reads PortF Configuration value*/
#define mPORTFReadBit(_bit)                 (PORTF & (unsigned int)_bit)/*Reads given PortF bit value*/
#define mPORTFReadLatchBit(_bit)            (LATF & (unsigned int)_bit)/*Reads given PortF bit latch value*/
#define mPORTFReadConfigBit(_bit)           (TRISF & (unsigned int)_bit)/*Reads configuration of given PortF bit */
#define mPORTFOutputConfig(outputs)         { TRISF &= ~(unsigned int)outputs;  }/*Configures PortF as output*/
#define mPORTFInputConfig(inputs)           { TRISF |= (unsigned int)inputs;    }/*Configures PortF as input*/
#define mPORTFSetBits(_bits)                { LATF |= (unsigned int)_bits;      }/*Set PortF bit*/
#define mPORTFClearBits(_bits)              { LATF &= ~(unsigned int)_bits;     }/*Clears PortF bit*/
#define mPORTFToggleBits(_bits)             { LATF ^= (unsigned int)_bits;      }/*Toggles given PortF bit*/
#define mPORTFCloseAll()                    { TRISF = 0xFFFF; LATF = 0;         }/*Close PortF configuration, brings to default condition*/
#define mPORTFCloseBits(_bits)              { TRISF |= (unsigned int)_bits; LATF &= ~(unsigned int)_bits;     }/*Close PortF bit configuration*/

/*PORTG Macros*/
#define mPORTGConfig(tris)                  { TRISG = (unsigned int)tris;   }/* Configure PortG*/
#define mPORTGRead()                        (PORTG)/*Read PortG*/
#define mPORTGWrite(lat)                    { LATG = (unsigned int)lat;} /*Write PortG*/
#define mPORTGReadLatch()                   (LATG)/*Reads PortG Latch*/
#define mPORTGGetConfig()                   (TRISG)/*Reads PortG Configuration value*/
#define mPORTGReadBit(_bit)                 (PORTG & (unsigned int)_bit)/*Reads given PortG bit value*/
#define mPORTGReadLatchBit(_bit)            (LATG & (unsigned int)_bit) /*Reads given PortG bit latch value*/
#define mPORTGReadConfigBit(_bit)           (TRISG & (unsigned int)_bit)/*Reads configuration of given PortG bit */
#define mPORTGOutputConfig(outputs)         { TRISG &= ~(unsigned int)outputs;  }/*Configures PortG as output*/
#define mPORTGInputConfig(inputs)           { TRISG |= (unsigned int)inputs;    }/*Configures PortG as input*/
#define mPORTGSetBits(_bits)                { LATG |= (unsigned int)_bits;      } /*Set PortG bit*/
#define mPORTGClearBits(_bits)              { LATG &= ~(unsigned int)_bits;     }/*Clears PortG bit*/
#define mPORTGToggleBits(_bits)             { LATG ^= (unsigned int)_bits;      } /*Toggles given PortG bit*/
#define mPORTGCloseAll()                    { TRISG = 0xFFFF; LATG = 0;         }/*Close PortG configuration, brings to default condition*/
#define mPORTGCloseBits(_bits)              { TRISG |= (unsigned int)_bits; LATG &= ~(unsigned int)_bits;     }/*Close PortG bit configuration*/

#endif  //end PORTG

/******************************************************************
Macro       : EnableIntInputChange
 
Include     : ports.h
 
Description : This macro enables the input change interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define EnableIntInputChange    (IEC1bits.CNIE = 1)

/******************************************************************
Macro       : DisableIntInputChange
 
Include     : ports.h
 
Description : This macro disables the input change interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define DisableIntInputChange    (IEC1bits.CNIE = 0)

/******************************************************************
Macro       : SetPriorityIntInputChange(priority)
 
Include     : ports.h
 
Description : This macro sets priority for input change interrupt.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : None
********************************************************************/
#define SetPriorityIntInputChange(priority)  (IPC4bits.CNIP = priority)

/*******************************************************************
Macro       : InputChange_Clear_Intr_Status_Bit

Include     : ports.h 

Description : Macro to Clear input change Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define InputChange_Clear_Intr_Status_Bit     (IFS1bits.CNIF = 0)

void __attribute__ ((section (".libperi")))ConfigIntCN(unsigned int config) ;
void __attribute__ ((section (".libperi")))CloseIntCN(void) ;


#if defined (int_v1_1) || defined (int_v1_2) || defined(LIB_BUILD)
/******************************************************************
Macro       : EnableINT0
 
Include     : ports.h
 
Description : This macro enables the individual external interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define EnableINT0              (IEC0bits.INT0IE = 1)

/******************************************************************
Macro       : DisableINT0
 
Include     : ports.h
 
Description : This macro disables the individual external interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define DisableINT0             (IEC0bits.INT0IE = 0)

/******************************************************************
Macro       : SetPriorityInt0(priority)
 
Include     : ports.h
 
Description : This macro sets priority for external interrupts.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets External Interrupt Priority bits of 
              Interrupt Priority Control register.
********************************************************************/
#define SetPriorityInt0(priority)     (IPC0bits.INT0IP = priority)

/*******************************************************************
Macro       : Int0_Clear_Intr_Status_Bit

Include     : ports.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define Int0_Clear_Intr_Status_Bit     (IFS0bits.INT0IF = 0)

/******************************************************************
Macro       : EnableINT1
 
Include     : ports.h
 
Description : This macro enables the individual external interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define EnableINT1            (IEC1bits.INT1IE = 1)

/******************************************************************
Macro       : DisableINT1
 
Include     : ports.h
 
Description : This macro disables the individual external interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define DisableINT1           (IEC1bits.INT1IE = 0)

/******************************************************************
Macro       : SetPriorityInt1(priority)
 
Include     : ports.h
 
Description : This macro sets priority for external interrupts.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets External Interrupt Priority bits of 
              Interrupt Priority Control register.
********************************************************************/
#define SetPriorityInt1(priority)     (IPC5bits.INT1IP = priority)

/*******************************************************************
Macro       : Int1_Clear_Intr_Status_Bit

Include     : ports.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define Int1_Clear_Intr_Status_Bit     (IFS1bits.INT1IF = 0)

/******************************************************************
Macro       : EnableINT2
 
Include     : ports.h
 
Description : This macro enables the individual external interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define EnableINT2              (IEC1bits.INT2IE = 1)

/******************************************************************
Macro       : DisableINT2
 
Include     : ports.h
 
Description : This macro disables the individual external interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define DisableINT2             (IEC1bits.INT2IE = 0)

/******************************************************************
Macro       : SetPriorityInt2(priority)
 
Include     : ports.h
 
Description : This macro sets priority for external interrupts.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets External Interrupt Priority bits of 
              Interrupt Priority Control register.
********************************************************************/
#define SetPriorityInt2(priority)     (IPC7bits.INT2IP = priority)

/*******************************************************************
Macro       : Int2_Clear_Intr_Status_Bit

Include     : ports.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define Int2_Clear_Intr_Status_Bit     (IFS1bits.INT2IF = 0)

void __attribute__ ((section (".libperi"))) ConfigINT0(unsigned int config) ;

void __attribute__ ((section (".libperi"))) CloseINT0(void);

void __attribute__ ((section (".libperi"))) ConfigINT1(unsigned int config);

void __attribute__ ((section (".libperi"))) CloseINT1(void);

void  __attribute__ ((section (".libperi"))) ConfigINT2(unsigned int config);

void  __attribute__ ((section (".libperi")))CloseINT2(void);

#endif 

#if defined (int_v1_2) || defined(LIB_BUILD)
/******************************************************************
Macro       : EnableINT3
 
Include     : ports.h
 
Description : This macro enables the individual external interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define EnableINT3             (IEC3bits.INT3IE = 1)

/******************************************************************
Macro       : DisableINT3
 
Include     : ports.h
 
Description : This macro disables the individual external interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define DisableINT3             (IEC3bits.INT3IE = 0)

/******************************************************************
Macro       : SetPriorityInt3(priority)
 
Include     : ports.h
 
Description : This macro sets priority for external interrupts.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets External Interrupt Priority bits of 
              Interrupt Priority Control register.
********************************************************************/
#define SetPriorityInt3(priority)     (IPC13bits.INT3IP = priority)

/*******************************************************************
Macro       : Int3_Clear_Intr_Status_Bit

Include     : ports.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define Int3_Clear_Intr_Status_Bit     (IFS3bits.INT3IF = 0)

/******************************************************************
Macro       : EnableINT4
 
Include     : ports.h
 
Description : This macro enables the individual external interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define EnableINT4             (IEC3bits.INT4IE = 1)

/******************************************************************
Macro       : DisableINT4
 
Include     : ports.h
 
Description : This macro disables the individual external interrupt.
               
Arguments   : None
 
Remarks     : None 
********************************************************************/
#define DisableINT4            (IEC3bits.INT4IE = 0)

/******************************************************************
Macro       : SetPriorityInt4(priority)
 
Include     : ports.h
 
Description : This macro sets priority for external interrupts.
 
Arguments   : priority - This input parameter is the level of interrupt priority
 
Remarks     : This macro sets External Interrupt Priority bits of 
              Interrupt Priority Control register.
********************************************************************/
#define SetPriorityInt4(priority)     (IPC13bits.INT4IP = priority)

/*******************************************************************
Macro       : Int4_Clear_Intr_Status_Bit

Include     : ports.h 

Description : Macro to Clear external Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define Int4_Clear_Intr_Status_Bit     (IFS3bits.INT4IF = 0)


void __attribute__ ((section (".libperi"))) ConfigINT3(unsigned int config);

void __attribute__ ((section (".libperi"))) CloseINT3(void);

void __attribute__ ((section (".libperi"))) ConfigINT4(unsigned int config) ;

void __attribute__ ((section (".libperi"))) CloseINT4(void);

#endif /* _INT4 */

#endif

