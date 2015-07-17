/********************************************************************/
/*              Header for DMA module library functions             */
/********************************************************************/

#if defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__PIC24H__)
#include <p24Hxxxx.h>
#elif defined(__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined(__PIC24E__)
#include <p24Exxxx.h>
#else
#error "Does not build on this target"
#endif

#ifndef __DMA_H
#define __DMA_H

/* List of SFRs for DMA */
/* This list contains the SFRs with default (POR) values to be used for configuring DMA */
/* The user can modify this based on the requirement */

#define DMA0CON_VALUE                0x0000
#define DMA1CON_VALUE                0x0000
#define DMA2CON_VALUE                0x0000
#define DMA3CON_VALUE                0x0000
#define DMA4CON_VALUE                0x0000
#define DMA5CON_VALUE                0x0000
#define DMA6CON_VALUE                0x0000
#define DMA7CON_VALUE                0x0000

#if defined(_dsPIC33E__) || defined(__PIC24E__)

#define DMA8CON_VALUE    0x0000
#define DMA9CON_VALUE    0x0000
#define DMA10CON_VALUE   0x0000
#define DMA11CON_VALUE   0x0000
#define DMA12CON_VALUE   0x0000
#define DMA13CON_VALUE   0x0000
#define DMA14CON_VALUE   0x0000

#endif

/* DMA0CON Configuration Bit Definitions */

#define DMA0_MODULE_ON               0xFFFF /* DMA on */
#define DMA0_MODULE_OFF              0x7FFF /* DMA off */

#define DMA0_SIZE_BYTE               0xFFFF /* DMA0 data size is byte */
#define DMA0_SIZE_WORD               0xBFFF /* DMA0 data size is word */

#define DMA0_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA0           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA0_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA0_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA0_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA0_NORMAL                  0xF7FF /* Normal operation*/

#define DMA0_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA0_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA0_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA0_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA0_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA0_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA0_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA1CON Configuration Bit Definitions */

#define DMA1_MODULE_ON               0xFFFF /* DMA on */
#define DMA1_MODULE_OFF              0x7FFF /* DMA off */

#define DMA1_SIZE_BYTE               0xFFFF /* DMA1 data size is byte */
#define DMA1_SIZE_WORD               0xBFFF /* DMA1 data size is word */

#define DMA1_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA1           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA1_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA1_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA1_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA1_NORMAL                  0xF7FF /* Normal operation*/

#define DMA1_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA1_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA1_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA1_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA1_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA1_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA1_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA2CON Configuration Bit Definitions */

#define DMA2_MODULE_ON               0xFFFF /* DMA on */
#define DMA2_MODULE_OFF              0x7FFF /* DMA off */

#define DMA2_SIZE_BYTE               0xFFFF /* DMA2 data size is byte */
#define DMA2_SIZE_WORD               0xBFFF /* DMA2 data size is word */

#define DMA2_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA2           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA2_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA2_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA2_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA2_NORMAL                  0xF7FF /* Normal operation*/

#define DMA2_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA2_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA2_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA2_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA2_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA2_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA2_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA3CON Configuration Bit Definitions */

#define DMA3_MODULE_ON               0xFFFF /* DMA on */
#define DMA3_MODULE_OFF              0x7FFF /* DMA off */

#define DMA3_SIZE_BYTE               0xFFFF /* DMA3 data size is byte */
#define DMA3_SIZE_WORD               0xBFFF /* DMA3 data size is word */

#define DMA3_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA3           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA3_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA3_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA3_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA3_NORMAL                  0xF7FF /* Normal operation*/

#define DMA3_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA3_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA3_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA3_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA3_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA3_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA3_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA4CON Configuration Bit Definitions */

#define DMA4_MODULE_ON               0xFFFF /* DMA on */
#define DMA4_MODULE_OFF              0x7FFF /* DMA off */

#define DMA4_SIZE_BYTE               0xFFFF /* DMA4 data size is byte */
#define DMA4_SIZE_WORD               0xBFFF /* DMA4 data size is word */

#define DMA4_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA4           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA4_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA4_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA4_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA4_NORMAL                  0xF7FF /* Normal operation*/

#define DMA4_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA4_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA4_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA4_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA4_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA4_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA4_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA5CON Configuration Bit Definitions */

#define DMA5_MODULE_ON               0xFFFF /* DMA on */
#define DMA5_MODULE_OFF              0x7FFF /* DMA off */

#define DMA5_SIZE_BYTE               0xFFFF /* DMA5 data size is byte */
#define DMA5_SIZE_WORD               0xBFFF /* DMA5 data size is word */

#define DMA5_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA5           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA5_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA5_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA5_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA5_NORMAL                  0xF7FF /* Normal operation*/

#define DMA5_PERIPHERAL_INDIRECT    0xFF2F /* Peripheral indirect addressing mode*/
#define DMA5_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA5_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA5_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA5_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA5_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA5_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA6CON Configuration Bit Definitions */

#define DMA6_MODULE_ON               0xFFFF /* DMA on */
#define DMA6_MODULE_OFF              0x7FFF /* DMA off */

#define DMA6_SIZE_BYTE               0xFFFF /* DMA6 data size is byte */
#define DMA6_SIZE_WORD               0xBFFF /* DMA6 data size is word */

#define DMA6_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA6           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA6_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA6_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA6_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA6_NORMAL                  0xF7FF /* Normal operation*/

#define DMA6_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA6_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA6_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA6_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA6_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA6_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA6_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA7CON Configuration Bit Definitions */

#define DMA7_MODULE_ON               0xFFFF /* DMA on */
#define DMA7_MODULE_OFF              0x7FFF /* DMA off */

#define DMA7_SIZE_BYTE               0xFFFF /* DMA7 data size is byte */
#define DMA7_SIZE_WORD               0xBFFF /* DMA7 data size is word */

#define DMA7_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA7           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA7_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA7_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA7_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA7_NORMAL                  0xF7FF /* Normal operation*/

#define DMA7_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA7_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA7_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA7_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA7_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA7_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA7_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */


#if defined(__dsPIC33E__) || defined(__PIC24E__)
/* DMA8CON Configuration Bit Definitions */

#define DMA8_MODULE_ON               0xFFFF /* DMA on */
#define DMA8_MODULE_OFF              0x7FFF /* DMA off */

#define DMA8_SIZE_BYTE               0xFFFF /* DMA8 data size is byte */
#define DMA8_SIZE_WORD               0xBFFF /* DMA8 data size is word */

#define DMA8_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA8           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA8_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA8_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA8_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA8_NORMAL                  0xF7FF /* Normal operation*/

#define DMA8_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA8_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA8_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA8_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA8_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA8_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA8_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA9CON Configuration Bit Definitions */

#define DMA9_MODULE_ON               0xFFFF /* DMA on */
#define DMA9_MODULE_OFF              0x7FFF /* DMA off */

#define DMA9_SIZE_BYTE               0xFFFF /* DMA9 data size is byte */
#define DMA9_SIZE_WORD               0xBFFF /* DMA9 data size is word */

#define DMA9_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA9           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA9_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA9_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA9_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA9_NORMAL                  0xF7FF /* Normal operation*/

#define DMA9_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA9_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA9_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA9_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA9_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA9_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA9_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA10CON Configuration Bit Definitions */

#define DMA10_MODULE_ON               0xFFFF /* DMA on */
#define DMA10_MODULE_OFF              0x7FFF /* DMA off */

#define DMA10_SIZE_BYTE               0xFFFF /* DMA10 data size is byte */
#define DMA10_SIZE_WORD               0xBFFF /* DMA10 data size is word */

#define DMA10_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA10           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA10_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA10_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA10_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA10_NORMAL                  0xF7FF /* Normal operation*/

#define DMA10_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA10_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA10_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA10_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA10_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA10_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA10_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA11CON Configuration Bit Definitions */

#define DMA11_MODULE_ON               0xFFFF /* DMA on */
#define DMA11_MODULE_OFF              0x7FFF /* DMA off */

#define DMA11_SIZE_BYTE               0xFFFF /* DMA11 data size is byte */
#define DMA11_SIZE_WORD               0xBFFF /* DMA11 data size is word */

#define DMA11_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA11           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA11_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA11_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA11_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA11_NORMAL                  0xF7FF /* Normal operation*/

#define DMA11_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA11_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA11_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA11_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA11_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA11_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA11_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA12CON Configuration Bit Definitions */

#define DMA12_MODULE_ON               0xFFFF /* DMA on */
#define DMA12_MODULE_OFF              0x7FFF /* DMA off */

#define DMA12_SIZE_BYTE               0xFFFF /* DMA12 data size is byte */
#define DMA12_SIZE_WORD               0xBFFF /* DMA12 data size is word */

#define DMA12_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA12           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA12_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA12_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA12_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA12_NORMAL                  0xF7FF /* Normal operation*/

#define DMA12_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA12_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA12_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA12_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA12_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA12_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA12_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA13CON Configuration Bit Definitions */

#define DMA13_MODULE_ON               0xFFFF /* DMA on */
#define DMA13_MODULE_OFF              0x7FFF /* DMA off */

#define DMA13_SIZE_BYTE               0xFFFF /* DMA13 data size is byte */
#define DMA13_SIZE_WORD               0xBFFF /* DMA13 data size is word */

#define DMA13_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA13           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA13_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA13_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA13_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA13_NORMAL                  0xF7FF /* Normal operation*/

#define DMA13_PERIPHERAL_INDIRECT    0xFF2F /* Peripheral indirect addressing mode*/
#define DMA13_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA13_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA13_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA13_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA13_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA13_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

/* DMA14CON Configuration Bit Definitions */

#define DMA14_MODULE_ON               0xFFFF /* DMA on */
#define DMA14_MODULE_OFF              0x7FFF /* DMA off */

#define DMA14_SIZE_BYTE               0xFFFF /* DMA14 data size is byte */
#define DMA14_SIZE_WORD               0xBFFF /* DMA14 data size is word */

#define DMA14_TO_PERIPHERAL           0xFFFF /* Read from DMA RAM address, write to peripheral*/
#define PERIPHERAL_TO_DMA14           0xDFFF /* Read from peripheral address, write to DMA RAM*/

#define DMA14_INTERRUPT_HALF          0xFFFF /* Initiate block transfer complete interrupt
                                               when half of the data has been moved */

#define DMA14_INTERRUPT_BLOCK         0xEFFF /* Initiate block transfer complete interrupt
                                               when all of the data has been moved */

#define DMA14_WRITE_NULL              0xFFFF /* Null data write to peripheral in addition to DMA RAM write*/
#define DMA14_NORMAL                  0xF7FF /* Normal operation*/

#define DMA14_PERIPHERAL_INDIRECT     0xFF2F /* Peripheral indirect addressing mode*/
#define DMA14_REGISTER                0xFF1F /* Register indirect without post increment*/
#define DMA14_REGISTER_POST_INCREMENT  0xFF0F /* Register indirect with post-incrmenent mode*/

#define DMA14_ONE_SHOT_PING_PONG      0xFFFF /* One-Shot, Ping-Pong modes enabled*/
#define DMA14_CONTINUOUS_PING_PONG    0xFFF2 /* Continuous Ping-Pong modes enabled*/
#define DMA14_ONE_SHOT                0xFFF1 /* One-shot Ping-Pong mode disabled*/
#define DMA14_CONTINUOUS              0xFFF0 /* Continuous Ping-Pong modes disabled */

#endif

 /*DMA0REQ bit definitions*/

#define DMA0_MANUAL                  0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA0_AUTOMATIC               0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA1REQ bit definitions*/

#define DMA1_MANUAL                  0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA1_AUTOMATIC               0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA2REQ bit definitions*/

#define DMA2_MANUAL               0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA2_AUTOMATIC            0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA3REQ bit definitions*/

#define DMA3_MANUAL               0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA3_AUTOMATIC            0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA4REQ bit definitions*/

#define DMA4_MANUAL               0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA4_AUTOMATIC            0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA5REQ bit definitions*/

#define DMA5_MANUAL               0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA5_AUTOMATIC            0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA6REQ bit definitions*/

#define DMA6_MANUAL               0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA6_AUTOMATIC            0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA7REQ bit definitions*/

#define DMA7_MANUAL               0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA7_AUTOMATIC            0x7FFF /* Automatic DMA transfer initiation by DMA request*/

#if defined(__dsPIC33E__) || defined(__PIC24E__)

 /*DMA8REQ bit definitions*/
#define DMA8_MANUAL               0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA8_AUTOMATIC            0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA9REQ bit definitions*/
#define DMA9_MANUAL               0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA9_AUTOMATIC            0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA10REQ bit definitions*/
#define DMA10_MANUAL              0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA10_AUTOMATIC           0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA11REQ bit definitions*/
#define DMA11_MANUAL              0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA11_AUTOMATIC           0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA12REQ bit definitions*/
#define DMA12_MANUAL              0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA12_AUTOMATIC           0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA13REQ bit definitions*/
#define DMA13_MANUAL              0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA13_AUTOMATIC           0x7FFF /* Automatic DMA transfer initiation by DMA request*/

 /*DMA14REQ bit definitions*/
#define DMA14_MANUAL              0xFFFF /* Force a single DMA transfer (Manual Mode)*/
#define DMA14_AUTOMATIC           0x7FFF /* Automatic DMA transfer initiation by DMA request*/

#endif

#if defined(__dsPIC33E__) || defined(__PIC24E__)

#define CHAN0_PERI_WRITE_COLLISION    0xFFFF /*channel 0 peripheral write collision detected*/
#define CHAN1_PERI_WRITE_COLLISION    0xFFFF /*channel 1 peripheral write collision detected*/
#define CHAN2_PERI_WRITE_COLLISION    0xFFFF /*channel 2 peripheral write collision detected*/
#define CHAN3_PERI_WRITE_COLLISION    0xFFFF /*channel 3 peripheral write collision detected*/
#define CHAN4_PERI_WRITE_COLLISION    0xFFFF /*channel 4 peripheral write collision detected*/
#define CHAN5_PERI_WRITE_COLLISION    0xFFFF /*channel 5 peripheral write collision detected*/
#define CHAN6_PERI_WRITE_COLLISION    0xFFFF /*channel 6 peripheral write collision detected*/
#define CHAN7_PERI_WRITE_COLLISION    0xFFFF /*channel 7 peripheral write collision detected*/
#define CHAN8_PERI_WRITE_COLLISION    0xFFFF /*channel 8 peripheral write collision detected*/
#define CHAN9_PERI_WRITE_COLLISION    0xFFFF /*channel 9 peripheral write collision detected*/
#define CHAN10_PERI_WRITE_COLLISION   0xFFFF /*channel 10 peripheral write collision detected*/
#define CHAN11_PERI_WRITE_COLLISION   0xFFFF /*channel 11 peripheral write collision detected*/
#define CHAN12_PERI_WRITE_COLLISION   0xFFFF /*channel 12 peripheral write collision detected*/
#define CHAN13_PERI_WRITE_COLLISION   0xFFFF /*channel 13 peripheral write collision detected*/
#define CHAN14_PERI_WRITE_COLLISION   0xFFFF /*channel 14 peripheral write collision detected*/

#define CHAN0_PERI_NO_WRITE_COLLISION    0xFFFE /*channel 0 peripheral write collision not detected*/
#define CHAN1_PERI_NO_WRITE_COLLISION    0xFFFD /*channel 1 peripheral write collision not detected*/
#define CHAN2_PERI_NO_WRITE_COLLISION    0xFFFB /*channel 2 peripheral write collision not detected*/
#define CHAN3_PERI_NO_WRITE_COLLISION    0xFFF7 /*channel 3 peripheral write collision not detected*/
#define CHAN4_PERI_NO_WRITE_COLLISION    0xFFEF /*channel 4 peripheral write collision not detected*/
#define CHAN5_PERI_NO_WRITE_COLLISION    0xFFDF /*channel 5 peripheral write collision not detected*/
#define CHAN6_PERI_NO_WRITE_COLLISION    0xFFBF /*channel 6 peripheral write collision not detected*/
#define CHAN7_PERI_NO_WRITE_COLLISION    0xFF7F /*channel 7 peripheral write collision not detected*/
#define CHAN8_PERI_NO_WRITE_COLLISION    0xFEFF /*channel 8 peripheral write collision not detected*/
#define CHAN9_PERI_NO_WRITE_COLLISION    0xFDFF /*channel 9 peripheral write collision not detected*/
#define CHAN10_PERI_NO_WRITE_COLLISION   0xFBFF /*channel 10 peripheral write collision not detected*/
#define CHAN11_PERI_NO_WRITE_COLLISION   0xF7FF /*channel 11 peripheral write collision not detected*/
#define CHAN12_PERI_NO_WRITE_COLLISION   0xEFFF /*channel 12 peripheral write collision not detected*/
#define CHAN13_PERI_NO_WRITE_COLLISION   0xDFFF /*channel 13 peripheral write collision not detected*/
#define CHAN14_PERI_NO_WRITE_COLLISION   0xBFFF /*channel 14 peripheral write collision not detected*/

#define CHAN0_REQUEST_COLLISION    0xFFFF /*channel 0 request collision detected*/
#define CHAN1_REQUEST_COLLISION    0xFFFF /*channel 1 request collision detected*/
#define CHAN2_REQUEST_COLLISION    0xFFFF /*channel 2 request collision detected*/
#define CHAN3_REQUEST_COLLISION    0xFFFF /*channel 3 request collision detected*/
#define CHAN4_REQUEST_COLLISION    0xFFFF /*channel 4 request collision detected*/
#define CHAN5_REQUEST_COLLISION    0xFFFF /*channel 5 request collision detected*/
#define CHAN6_REQUEST_COLLISION    0xFFFF /*channel 6 request collision detected*/
#define CHAN7_REQUEST_COLLISION    0xFFFF /*channel 7 request collision detected*/
#define CHAN8_REQUEST_COLLISION    0xFFFF /*channel 8 request collision detected*/
#define CHAN9_REQUEST_COLLISION    0xFFFF /*channel 9 request collision detected*/
#define CHAN10_REQUEST_COLLISION   0xFFFF /*channel 10 request collision detected*/
#define CHAN11_REQUEST_COLLISION   0xFFFF /*channel 11 request collision detected*/
#define CHAN12_REQUEST_COLLISION   0xFFFF /*channel 12 request collision detected*/
#define CHAN13_REQUEST_COLLISION   0xFFFF /*channel 13 request collision detected*/
#define CHAN14_REQUEST_COLLISION   0xFFFF /*channel 14 request collision detected*/

#define CHAN0_NO_REQUEST_COLLISION    0xFFFE /*channel 0 request collision not detected*/
#define CHAN1_NO_REQUEST_COLLISION    0xFFFD /*channel 1 request collision not detected*/
#define CHAN2_NO_REQUEST_COLLISION    0xFFFB /*channel 2 request collision not detected*/
#define CHAN3_NO_REQUEST_COLLISION    0xFFF7 /*channel 3 request collision not detected*/
#define CHAN4_NO_REQUEST_COLLISION    0xFFEF /*channel 4 request collision not detected*/
#define CHAN5_NO_REQUEST_COLLISION    0xFFDF /*channel 5 request collision not detected*/
#define CHAN6_NO_REQUEST_COLLISION    0xFFBF /*channel 6 request collision not detected*/
#define CHAN7_NO_REQUEST_COLLISION    0xFF7F /*channel 7 request collision not detected*/
#define CHAN8_NO_REQUEST_COLLISION    0xFEFF /*channel 8 request collision not detected*/
#define CHAN9_NO_REQUEST_COLLISION    0xFDFF /*channel 9 request collision not detected*/
#define CHAN10_NO_REQUEST_COLLISION   0xFBFF /*channel 10 request collision not detected*/
#define CHAN11_NO_REQUEST_COLLISION   0xF7FF /*channel 11 request collision not detected*/
#define CHAN12_NO_REQUEST_COLLISION   0xEFFF /*channel 12 request collision not detected*/
#define CHAN13_NO_REQUEST_COLLISION   0xDFFF /*channel 13 request collision not detected*/
#define CHAN14_NO_REQUEST_COLLISION   0xBFFF /*channel 14 request collision not detected*/

#else
 /* DMA controller status register 0 */

#define CHAN7_PERI_WRITE_COLLISION    0xFFFF /*channel 7 peripheral write collision detected*/
#define CHAN7_PERI_NO_WRITE_COLLISION    0x7FFF /*channel 7 peripheral write collision not detected*/
#define CHAN6_PERI_WRITE_COLLISION    0xFFFF /*channel 6 peripheral write collision detected*/
#define CHAN6_PERI_NO_WRITE_COLLISION    0xBFFF /*channel 6 peripheral write collision not detected*/
#define CHAN5_PERI_WRITE_COLLISION    0xFFFF /*channel 5 peripheral write collision detected*/
#define CHAN5_PERI_NO_WRITE_COLLISION    0xDFFF /*channel 5 peripheral write collision not detected*/
#define CHAN4_PERI_WRITE_COLLISION    0xFFFF /*channel 4 peripheral write collision detected*/
#define CHAN4_PERI_NO_WRITE_COLLISION    0xEFFF /*channel 4 peripheral write collision not detected*/
#define CHAN3_PERI_WRITE_COLLISION    0xFFFF /*channel 3 peripheral write collision detected*/
#define CHAN3_PERI_NO_WRITE_COLLISION    0xF7FF /*channel 3 peripheral write collision not detected*/
#define CHAN2_PERI_WRITE_COLLISION    0xFFFF /*channel 2 peripheral write collision detected*/
#define CHAN2_PERI_NO_WRITE_COLLISION    0xFBFF /*channel 2 peripheral write collision not detected*/
#define CHAN1_PERI_WRITE_COLLISION    0xFFFF /*channel 1 peripheral write collision detected*/
#define CHAN1_PERI_NO_WRITE_COLLISION    0xFDFF /*channel 1 peripheral write collision not detected*/
#define CHAN0_PERI_WRITE_COLLISION    0xFFFF /*channel 0 peripheral write collision detected*/
#define CHAN0_PERI_NO_WRITE_COLLISION    0xFEFF /*channel 0 peripheral write collision not detected*/

#define CHAN7_DMARAM_WRITE_COLLISION    0xFFFF /*channel 7 DMA RAM write collision detected*/
#define CHAN7_DMARAM_NO_WRITE_COLLISION    0xFF7F /*channel 7 DMA RAM write collision detected*/
#define CHAN6_DMARAM_WRITE_COLLISION    0xFFFF /*channel 6 DMA RAM write collision detected*/
#define CHAN6_DMARAM_NO_WRITE_COLLISION    0xFFBF /*channel 6 DMA RAM write collision detected*/
#define CHAN5_DMARAM_WRITE_COLLISION    0xFFFF /*channel 5 DMA RAM write collision detected*/
#define CHAN5_DMARAM_NO_WRITE_COLLISION    0xFFDF /*channel 5 DMA RAM write collision detected*/
#define CHAN4_DMARAM_WRITE_COLLISION    0xFFFF /*channel 4 DMA RAM write collision detected*/
#define CHAN4_DMARAM_NO_WRITE_COLLISION    0xFFEF /*channel 4 DMA RAM write collision detected*/
#define CHAN3_DMARAM_WRITE_COLLISION    0xFFFF /*channel 3 DMA RAM write collision detected*/
#define CHAN3_DMARAM_NO_WRITE_COLLISION    0xFFF7 /*channel 3 DMA RAM write collision detected*/
#define CHAN2_DMARAM_WRITE_COLLISION    0xFFFF /*channel 2 DMA RAM write collision detected*/
#define CHAN2_DMARAM_NO_WRITE_COLLISION    0xFFFB /*channel 2 DMA RAM write collision detected*/
#define CHAN1_DMARAM_WRITE_COLLISION    0xFFFF /*channel 1 DMA RAM write collision detected*/
#define CHAN1_DMARAM_NO_WRITE_COLLISION    0xFFFD /*channel 1 DMA RAM write collision detected*/
#define CHAN0_DMARAM_WRITE_COLLISION    0xFFFF /*channel 0 DMA RAM write collision detected*/
#define CHAN0_DMARAM_NO_WRITE_COLLISION    0xFFFE /*channel 0 DMA RAM write collision detected*/

#endif

 /*DMA controller status register 1 */

#define LAST_DMA_ACTIVE_CHANNEL7    0xF7FF /* Last data transfer was by DMA channel 7*/
#define LAST_DMA_ACTIVE_CHANNEL6    0xF6FF /* Last data transfer was by DMA channel 6*/
#define LAST_DMA_ACTIVE_CHANNEL5    0xF5FF /* Last data transfer was by DMA channel 5*/
#define LAST_DMA_ACTIVE_CHANNEL4    0xF4FF /* Last data transfer was by DMA channel 4*/
#define LAST_DMA_ACTIVE_CHANNEL3    0xF3FF /* Last data transfer was by DMA channel 3*/
#define LAST_DMA_ACTIVE_CHANNEL2    0xF2FF /* Last data transfer was by DMA channel 2*/
#define LAST_DMA_ACTIVE_CHANNEL1    0xF1FF /* Last data transfer was by DMA channel 1*/
#define LAST_DMA_ACTIVE_CHANNEL0    0xF0FF /* Last data transfer was by DMA channel 0*/

#define PING_PONG_DMA7STB           0xFFFF /*Channel 7 STB register selected for Ping-Pong*/
#define PING_PONG_DMA7STA           0xFF7F /*Channel 7 STA register selected for Ping-Pong*/
#define PING_PONG_DMA6STB           0xFFFF /*Channel 6 STB register selected for Ping-Pong*/
#define PING_PONG_DMA6STA           0xFFBF /*Channel 7 STA register selected for Ping-Pong*/
#define PING_PONG_DMA5STB           0xFFFF /*Channel 5 STB register selected for Ping-Pong*/
#define PING_PONG_DMA5STA           0xFFDF /*Channel 7 STA register selected for Ping-Pong*/
#define PING_PONG_DMA4STB           0xFFFF /*Channel 4 STB register selected for Ping-Pong*/
#define PING_PONG_DMA4STA           0xFFEF /*Channel 7 STA register selected for Ping-Pong*/
#define PING_PONG_DMA3STB           0xFFFF /*Channel 3 STB register selected for Ping-Pong*/
#define PING_PONG_DMA3STA           0xFFF7 /*Channel 7 STA register selected for Ping-Pong*/
#define PING_PONG_DMA2STB           0xFFFF /*Channel 2 STB register selected for Ping-Pong*/
#define PING_PONG_DMA2STA           0xFFFB /*Channel 7 STA register selected for Ping-Pong*/
#define PING_PONG_DMA1STB           0xFFFF /*Channel 1 STB register selected for Ping-Pong*/
#define PING_PONG_DMA1STA           0xFFFD /*Channel 7 STA register selected for Ping-Pong*/
#define PING_PONG_DMA0STB           0xFFFF /*Channel 0 STB register selected for Ping-Pong*/
#define PING_PONG_DMA0STA           0xFFFE /*Channel 7 STA register selected for Ping-Pong*/

/* Setting the priority of DMA0 interrupt */
#define DMA0_INT_PRI_0                   0xFFF8
#define DMA0_INT_PRI_1                   0xFFF9
#define DMA0_INT_PRI_2                   0xFFFA
#define DMA0_INT_PRI_3                   0xFFFB
#define DMA0_INT_PRI_4                   0xFFFC
#define DMA0_INT_PRI_5                   0xFFFD
#define DMA0_INT_PRI_6                   0xFFFE
#define DMA0_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA1 interrupt */
#define DMA1_INT_PRI_0                   0xFFF8
#define DMA1_INT_PRI_1                   0xFFF9
#define DMA1_INT_PRI_2                   0xFFFA
#define DMA1_INT_PRI_3                   0xFFFB
#define DMA1_INT_PRI_4                   0xFFFC
#define DMA1_INT_PRI_5                   0xFFFD
#define DMA1_INT_PRI_6                   0xFFFE
#define DMA1_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA2 interrupt */
#define DMA2_INT_PRI_0                   0xFFF8
#define DMA2_INT_PRI_1                   0xFFF9
#define DMA2_INT_PRI_2                   0xFFFA
#define DMA2_INT_PRI_3                   0xFFFB
#define DMA2_INT_PRI_4                   0xFFFC
#define DMA2_INT_PRI_5                   0xFFFD
#define DMA2_INT_PRI_6                   0xFFFE
#define DMA2_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA3 interrupt */
#define DMA3_INT_PRI_0                   0xFFF8
#define DMA3_INT_PRI_1                   0xFFF9
#define DMA3_INT_PRI_2                   0xFFFA
#define DMA3_INT_PRI_3                   0xFFFB
#define DMA3_INT_PRI_4                   0xFFFC
#define DMA3_INT_PRI_5                   0xFFFD
#define DMA3_INT_PRI_6                   0xFFFE
#define DMA3_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA4 interrupt */
#define DMA4_INT_PRI_0                   0xFFF8
#define DMA4_INT_PRI_1                   0xFFF9
#define DMA4_INT_PRI_2                   0xFFFA
#define DMA4_INT_PRI_3                   0xFFFB
#define DMA4_INT_PRI_4                   0xFFFC
#define DMA4_INT_PRI_5                   0xFFFD
#define DMA4_INT_PRI_6                   0xFFFE
#define DMA4_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA5 interrupt */
#define DMA5_INT_PRI_0                   0xFFF8
#define DMA5_INT_PRI_1                   0xFFF9
#define DMA5_INT_PRI_2                   0xFFFA
#define DMA5_INT_PRI_3                   0xFFFB
#define DMA5_INT_PRI_4                   0xFFFC
#define DMA5_INT_PRI_5                   0xFFFD
#define DMA5_INT_PRI_6                   0xFFFE
#define DMA5_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA6 interrupt */
#define DMA6_INT_PRI_0                   0xFFF8
#define DMA6_INT_PRI_1                   0xFFF9
#define DMA6_INT_PRI_2                   0xFFFA
#define DMA6_INT_PRI_3                   0xFFFB
#define DMA6_INT_PRI_4                   0xFFFC
#define DMA6_INT_PRI_5                   0xFFFD
#define DMA6_INT_PRI_6                   0xFFFE
#define DMA6_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA7 interrupt */
#define DMA7_INT_PRI_0                   0xFFF8
#define DMA7_INT_PRI_1                   0xFFF9
#define DMA7_INT_PRI_2                   0xFFFA
#define DMA7_INT_PRI_3                   0xFFFB
#define DMA7_INT_PRI_4                   0xFFFC
#define DMA7_INT_PRI_5                   0xFFFD
#define DMA7_INT_PRI_6                   0xFFFE
#define DMA7_INT_PRI_7                   0xFFFF


#if defined(__dsPIC33E__) || defined(__PIC24E__)

/* Setting the priority of DMA8 interrupt */
#define DMA8_INT_PRI_0                   0xFFF8
#define DMA8_INT_PRI_1                   0xFFF9
#define DMA8_INT_PRI_2                   0xFFFA
#define DMA8_INT_PRI_3                   0xFFFB
#define DMA8_INT_PRI_4                   0xFFFC
#define DMA8_INT_PRI_5                   0xFFFD
#define DMA8_INT_PRI_6                   0xFFFE
#define DMA8_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA9 interrupt */
#define DMA9_INT_PRI_0                   0xFFF8
#define DMA9_INT_PRI_1                   0xFFF9
#define DMA9_INT_PRI_2                   0xFFFA
#define DMA9_INT_PRI_3                   0xFFFB
#define DMA9_INT_PRI_4                   0xFFFC
#define DMA9_INT_PRI_5                   0xFFFD
#define DMA9_INT_PRI_6                   0xFFFE
#define DMA9_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA10 interrupt */
#define DMA10_INT_PRI_0                   0xFFF8
#define DMA10_INT_PRI_1                   0xFFF9
#define DMA10_INT_PRI_2                   0xFFFA
#define DMA10_INT_PRI_3                   0xFFFB
#define DMA10_INT_PRI_4                   0xFFFC
#define DMA10_INT_PRI_5                   0xFFFD
#define DMA10_INT_PRI_6                   0xFFFE
#define DMA10_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA11 interrupt */
#define DMA11_INT_PRI_0                   0xFFF8
#define DMA11_INT_PRI_1                   0xFFF9
#define DMA11_INT_PRI_2                   0xFFFA
#define DMA11_INT_PRI_3                   0xFFFB
#define DMA11_INT_PRI_4                   0xFFFC
#define DMA11_INT_PRI_5                   0xFFFD
#define DMA11_INT_PRI_6                   0xFFFE
#define DMA11_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA12 interrupt */
#define DMA12_INT_PRI_0                   0xFFF8
#define DMA12_INT_PRI_1                   0xFFF9
#define DMA12_INT_PRI_2                   0xFFFA
#define DMA12_INT_PRI_3                   0xFFFB
#define DMA12_INT_PRI_4                   0xFFFC
#define DMA12_INT_PRI_5                   0xFFFD
#define DMA12_INT_PRI_6                   0xFFFE
#define DMA12_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA13 interrupt */
#define DMA13_INT_PRI_0                   0xFFF8
#define DMA13_INT_PRI_1                   0xFFF9
#define DMA13_INT_PRI_2                   0xFFFA
#define DMA13_INT_PRI_3                   0xFFFB
#define DMA13_INT_PRI_4                   0xFFFC
#define DMA13_INT_PRI_5                   0xFFFD
#define DMA13_INT_PRI_6                   0xFFFE
#define DMA13_INT_PRI_7                   0xFFFF

/* Setting the priority of DMA14 interrupt */
#define DMA14_INT_PRI_0                   0xFFF8
#define DMA14_INT_PRI_1                   0xFFF9
#define DMA14_INT_PRI_2                   0xFFFA
#define DMA14_INT_PRI_3                   0xFFFB
#define DMA14_INT_PRI_4                   0xFFFC
#define DMA14_INT_PRI_5                   0xFFFD
#define DMA14_INT_PRI_6                   0xFFFE
#define DMA14_INT_PRI_7                   0xFFFF

#endif

/* enable / disable interrupts for DMA0*/

#define DMA0_INT_ENABLE                  0xFFFF
#define DMA0_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA0 */

#define EnableIntDMA0                    IEC0bits.DMA0IE = 1
#define DisableIntDMA0                   IEC0bits.DMA0IE = 0
#define SetPriorityIntDMA0(priority)     IPC1bits.DMA0IP = (priority)

/* enable / disable interrupts for DMA1*/

#define DMA1_INT_ENABLE                  0xFFFF
#define DMA1_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA1 */

#define EnableIntDMA1                    IEC0bits.DMA1IE = 1
#define DisableIntDMA1                   IEC0bits.DMA1IE = 0
#define SetPriorityIntDMA1(priority)     IPC3bits.DMA1IP = (priority)

/* enable / disable interrupts for DMA2*/

#define DMA2_INT_ENABLE                  0xFFFF
#define DMA2_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA2 */

#define EnableIntDMA2                    IEC1bits.DMA2IE = 1
#define DisableIntDMA2                   IEC1bits.DMA2IE = 0
#define SetPriorityIntDMA2(priority)     IPC6bits.DMA2IP = (priority)

/* enable / disable interrupts for DMA3*/

#define DMA3_INT_ENABLE                  0xFFFF
#define DMA3_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA3 */

#define EnableIntDMA3                    IEC2bits.DMA3IE = 1
#define DisableIntDMA3                   IEC2bits.DMA3IE = 0
#define SetPriorityIntDMA3(priority)     IPC9bits.DMA3IP = (priority)

/* enable / disable interrupts for DMA4*/

#define DMA4_INT_ENABLE                  0xFFFF
#define DMA4_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA4 */

#define EnableIntDMA4                    IEC2bits.DMA4IE = 1
#define DisableIntDMA4                   IEC2bits.DMA4IE = 0
#define SetPriorityIntDMA4(priority)     IPC11bits.DMA4IP = (priority)

/* enable / disable interrupts for DMA5*/

#define DMA5_INT_ENABLE                  0xFFFF
#define DMA5_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA5 */

#define EnableIntDMA5                    IEC3bits.DMA5IE = 1
#define DisableIntDMA5                   IEC3bits.DMA5IE = 0
#define SetPriorityIntDMA5(priority)     IPC15bits.DMA5IP = (priority)

/* enable / disable interrupts for DMA6*/

#define DMA6_INT_ENABLE                  0xFFFF
#define DMA6_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA6 */

#define EnableIntDMA6                    IEC4bits.DMA6IE = 1
#define DisableIntDMA6                   IEC4bits.DMA6IE = 0
#define SetPriorityIntDMA6(priority)     IPC17bits.DMA6IP = (priority)

/* enable / disable interrupts for DMA7*/

#define DMA7_INT_ENABLE                  0xFFFF
#define DMA7_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA7 */

#define EnableIntDMA7                    IEC4bits.DMA7IE = 1
#define DisableIntDMA7                   IEC4bits.DMA7IE = 0
#define SetPriorityIntDMA7(priority)     IPC17bits.DMA7IP = (priority)


#if defined(__dsPIC33E__) || defined(__PIC24E__)

/* enable / disable interrupts for DMA8*/

#define DMA8_INT_ENABLE                  0xFFFF
#define DMA8_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA8 */

#define EnableIntDMA8                    IEC7bits.DMA8IE = 1
#define DisableIntDMA8                   IEC7bits.DMA8IE = 0
#define SetPriorityIntDMA8(priority)     IPC29bits.DMA8IP = (priority)

/* enable / disable interrupts for DMA9*/

#define DMA9_INT_ENABLE                  0xFFFF
#define DMA9_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA9 */

#define EnableIntDMA9                    IEC7bits.DMA9IE = 1
#define DisableIntDMA9                   IEC7bits.DMA9IE = 0
#define SetPriorityIntDMA9(priority)     IPC29bits.DMA9IP = (priority)

/* enable / disable interrupts for DMA10*/

#define DMA10_INT_ENABLE                  0xFFFF
#define DMA10_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA10 */

#define EnableIntDMA10                    IEC7bits.DMA10IE = 1
#define DisableIntDMA10                   IEC7bits.DMA10IE = 0
#define SetPriorityIntDMA10(priority)     IPC30bits.DMA10IP = (priority)

/* enable / disable interrupts for DMA11*/

#define DMA11_INT_ENABLE                  0xFFFF
#define DMA11_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA11 */

#define EnableIntDMA11                    IEC7bits.DMA11IE = 1
#define DisableIntDMA11                   IEC7bits.DMA11IE = 0
#define SetPriorityIntDMA11(priority)     IPC30bits.DMA11IP = (priority)

/* enable / disable interrupts for DMA12*/

#define DMA12_INT_ENABLE                  0xFFFF
#define DMA12_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA12 */

#define EnableIntDMA12                    IEC8bits.DMA12IE = 1
#define DisableIntDMA12                   IEC8bits.DMA12IE = 0
#define SetPriorityIntDMA12(priority)     IPC32bits.DMA12IP = (priority)

/* enable / disable interrupts for DMA13*/

#define DMA13_INT_ENABLE                  0xFFFF
#define DMA13_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA13 */

#define EnableIntDMA13                    IEC8bits.DMA13IE = 1
#define DisableIntDMA13                   IEC8bits.DMA13IE = 0
#define SetPriorityIntDMA13(priority)     IPC32bits.DMA13IP = (priority)

/* enable / disable interrupts for DMA14*/

#define DMA14_INT_ENABLE                  0xFFFF
#define DMA14_INT_DISABLE                 0xFFEF

/* Macros to  Enable/Disable interrupts and set Interrupt priority for DMA14 */

#define EnableIntDMA14                    IEC8bits.DMA14IE = 1
#define DisableIntDMA14                   IEC8bits.DMA14IE = 0
#define SetPriorityIntDMA14(priority)     IPC33bits.DMA14IP = (priority)

#endif


/* DMA Function Prototypes */

void CloseDMA0(void) __attribute__ ((section (".libperi"))); /*Close DMA0 channel */
void CloseDMA1(void) __attribute__ ((section (".libperi"))); /*Close DMA1 channel */
void CloseDMA2(void) __attribute__ ((section (".libperi"))); /*Close DMA2 channel */
void CloseDMA3(void) __attribute__ ((section (".libperi"))); /*Close DMA3 channel */
void CloseDMA4(void) __attribute__ ((section (".libperi"))); /*Close DMA4 channel */
void CloseDMA5(void) __attribute__ ((section (".libperi"))); /*Close DMA5 channel */
void CloseDMA6(void) __attribute__ ((section (".libperi"))); /*Close DMA6 channel */
void CloseDMA7(void) __attribute__ ((section (".libperi"))); /*Close DMA7 channel */

#if defined(__dsPIC33E__) || defined(__PIC24E__)

void CloseDMA8(void) __attribute__ ((section (".libperi"))); /*Close DMA8 channel */
void CloseDMA9(void) __attribute__ ((section (".libperi"))); /*Close DMA9 channel */
void CloseDMA10(void) __attribute__ ((section (".libperi"))); /*Close DMA10 channel */
void CloseDMA11(void) __attribute__ ((section (".libperi"))); /*Close DMA11 channel */
void CloseDMA12(void) __attribute__ ((section (".libperi"))); /*Close DMA12 channel */
void CloseDMA13(void) __attribute__ ((section (".libperi"))); /*Close DMA13 channel */
void CloseDMA14(void) __attribute__ ((section (".libperi"))); /*Close DMA14 channel */

#endif

void ConfigIntDMA0(unsigned int config) __attribute__ ((section (".libperi")));
             /* Set interrupt priority and enable/disable for DMA0 channel */

void ConfigIntDMA1(unsigned int config) __attribute__ ((section (".libperi")));
             /* Set interrupt priority and enable/disable for DMA1 channel */

void ConfigIntDMA2(unsigned int config) __attribute__ ((section (".libperi")));
             /* Set interrupt priority and enable/disable for DMA2 channel */

void ConfigIntDMA3(unsigned int config) __attribute__ ((section (".libperi")));
             /* Set interrupt priority and enable/disable for DMA3 channel */

void ConfigIntDMA4(unsigned int config) __attribute__ ((section (".libperi")));
             /* Set interrupt priority and enable/disable for DMA4 channel */

void ConfigIntDMA5(unsigned int config) __attribute__ ((section (".libperi")));
             /* Set interrupt priority and enable/disable for DMA5 channel */

void ConfigIntDMA6(unsigned int config) __attribute__ ((section (".libperi")));
             /* Set interrupt priority and enable/disable for DMA6 channel */

void ConfigIntDMA7(unsigned int config) __attribute__ ((section (".libperi")));
             /* Set interrupt priority and enable/disable for DMA7 channel */


#if defined(__dsPIC33E__) || defined(__PIC24E__)

/* Set interrupt priority and enable/disable for DMA8 channel */
void ConfigIntDMA8(unsigned int config) __attribute__ ((section (".libperi")));

/* Set interrupt priority and enable/disable for DMA9 channel */
void ConfigIntDMA9(unsigned int config) __attribute__ ((section (".libperi")));

/* Set interrupt priority and enable/disable for DMA10 channel */
void ConfigIntDMA10(unsigned int config) __attribute__ ((section (".libperi")));

/* Set interrupt priority and enable/disable for DMA11 channel */
void ConfigIntDMA11(unsigned int config) __attribute__ ((section (".libperi")));

/* Set interrupt priority and enable/disable for DMA12 channel */
void ConfigIntDMA12(unsigned int config) __attribute__ ((section (".libperi")));

/* Set interrupt priority and enable/disable for DMA13 channel */
void ConfigIntDMA13(unsigned int config) __attribute__ ((section (".libperi")));

/* Set interrupt priority and enable/disable for DMA14 channel */
void ConfigIntDMA14(unsigned int config) __attribute__ ((section (".libperi")));

#endif


#if defined(__dsPIC33E__) || defined(__PIC24E__)
unsigned long int DMARAMAddress(void) __attribute__ ((section (".libperi")));
             /* returns the recent DMA RAM address */
#else

unsigned int DMARAMAddress(void) __attribute__ ((section (".libperi")));
             /* returns the recent DMA RAM address */
#endif

char LastDMAActive(void) __attribute__ ((section (".libperi"))); /* returns the last DMA active channel*/

#if defined(__dsPIC33E__) || defined(__PIC24E__)

/* configures the DMA0 registers: DMA0CON, DMA0REQ, DMA0STAH/L, DMA0STBH/L, DMA0PAD, DMA0CNT*/
void OpenDMA0(unsigned int config,unsigned int irq,unsigned long int sta_address, 
        unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA1 registers: DMA1CON, DMA1REQ, DMA1STAH/L, DMA1STBH/L, DMA1PAD, DMA1CNT*/
void OpenDMA1(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA2 registers: DMA2CON, DMA2REQ, DMA2STAH/L, DMA2STBH/L, DMA2PAD, DMA2CNT*/
void OpenDMA2(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA3 registers: DMA3CON, DMA3REQ, DMA3STAH/L, DMA3STBH/L, DMA3PAD, DMA3CNT*/
void OpenDMA3(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA4 registers: DMA4CON, DMA4REQ, DMA4STAH/L, DMA4STBH/L, DMA4PAD, DMA4CNT*/
void OpenDMA4(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA5 registers: DMA5CON, DMA5REQ, DMA5STAH/L, DMA5STBH/L, DMA5PAD, DMA5CNT*/
void OpenDMA5(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA6 registers: DMA6CON, DMA6REQ, DMA6STAH/L, DMA6STBH/L, DMA6PAD, DMA6CNT*/
void OpenDMA6(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA7 registers: DMA7CON, DMA7REQ, DMA7STAH/L, DMA7STBH/L, DMA7PAD, DMA7CNT*/
void OpenDMA7(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA8 registers: DMA8CON, DMA8REQ, DMA8STAH/L, DMA8STBH/L, DMA8PAD, DMA8CNT*/
void OpenDMA8(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA9 registers: DMA9CON, DMA9REQ, DMA9STAH/L, DMA9STBH/L, DMA9PAD, DMA9CNT*/
void OpenDMA9(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA10 registers: DMA10CON, DMA10REQ, DMA10STAH/L, DMA10STBH/L, DMA10PAD, DMA10CNT*/
void OpenDMA10(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA11 registers: DMA11CON, DMA11REQ, DMA11STAH/L, DMA11STBH/L, DMA11PAD, DMA11CNT*/
void OpenDMA11(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA12 registers: DMA12CON, DMA12REQ, DMA12STAH/L, DMA12STBH/L, DMA12PAD, DMA12CNT*/
void OpenDMA12(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA13 registers: DMA13CON, DMA13REQ, DMA13STAH/L, DMA13STBH/L, DMA13PAD, DMA13CNT*/
void OpenDMA13(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

/* configures the DMA14 registers: DMA14CON, DMA14REQ, DMA14STAH/L, DMA14STBH/L, DMA14PAD, DMA14CNT*/
void OpenDMA14(unsigned int config,unsigned int irq,unsigned long int sta_address, unsigned long int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));

#else

void OpenDMA0(unsigned int config,unsigned int irq,unsigned int sta_address,
        unsigned int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));
         /* configures the DMA0 registers: DMA0CON, DMA0REQ, DMA0STA, DMA0STB, DMA0PAD, DMA0CNT*/

void OpenDMA1(unsigned int config,unsigned int irq,unsigned int sta_address,
        unsigned int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));
         /* configures the DMA1 registers: DMA1CON, DMA1REQ, DMA1STA, DMA1STB, DMA1PAD, DMA1CNT*/

void OpenDMA2(unsigned int config,unsigned int irq,unsigned int sta_address,
        unsigned int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));
         /* configures the DMA2 registers: DMA2CON, DMA2REQ, DMA2STA, DMA2STB, DMA2PAD, DMA2CNT*/

void OpenDMA3(unsigned int config,unsigned int irq,unsigned int sta_address,
        unsigned int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));
         /* configures the DMA3 registers: DMA3CON, DMA3REQ, DMA3STA, DMA3STB, DMA3PAD, DMA3CNT*/

void OpenDMA4(unsigned int config,unsigned int irq,unsigned int sta_address,
        unsigned int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));
         /* configures the DMA4 registers: DMA4CON, DMA4REQ, DMA4STA, DMA4STB, DMA4PAD, DMA4CNT*/

void OpenDMA5(unsigned int config,unsigned int irq,unsigned int sta_address,
        unsigned int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));
         /* configures the DMA5 registers: DMA5CON, DMA5REQ, DMA5STA, DMA5STB, DMA5PAD, DMA5CNT*/

void OpenDMA6(unsigned int config,unsigned int irq,unsigned int sta_address,
        unsigned int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));
         /* configures the DMA6 registers: DMA6CON, DMA6REQ, DMA6STA, DMA6STB, DMA6PAD, DMA6CNT*/

void OpenDMA7(unsigned int config,unsigned int irq,unsigned int sta_address,
        unsigned int stb_address,unsigned int pad_adress,unsigned int count ) __attribute__ ((section (".libperi")));
         /* configures the DMA7 registers: DMA7CON, DMA7REQ, DMA7STA, DMA7STB, DMA7PAD, DMA7CNT*/
#endif

char PingPongStatusDMA0(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA1(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA2(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA3(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA4(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA5(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA6(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA7(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/


#if defined(__dsPIC33E__) || defined(__PIC24E__)

char PingPongStatusDMA8(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA9(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA10(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA11(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA12(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA13(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/
char PingPongStatusDMA14(void) __attribute__ ((section (".libperi")));  /* returns the register selected for ping-pong*/

#endif

#if defined (__dsPIC33F__) || defined (__PIC24H__)
char WriteCollisionDMA0(void) __attribute__ ((section (".libperi")));
                         /* returns the channel 0 DMA RAM write collision detect */

char WriteCollisionDMA1(void) __attribute__ ((section (".libperi")));
                     /* returns the channel 1 DMA RAM write collision detect */

char WriteCollisionDMA2(void) __attribute__ ((section (".libperi")));
                     /* returns the channel 2 DMA RAM write collision detect */

char WriteCollisionDMA3(void) __attribute__ ((section (".libperi")));
                     /* returns the channel 3 DMA RAM write collision detect */

char WriteCollisionDMA4(void) __attribute__ ((section (".libperi")));
                     /* returns the channel 4 DMA RAM write collision detect */

char WriteCollisionDMA5(void) __attribute__ ((section (".libperi")));
                     /* returns the channel 5 DMA RAM write collision detect */

char WriteCollisionDMA6(void) __attribute__ ((section (".libperi")));
                     /* returns the channel 6 DMA RAM write collision detect */

char WriteCollisionDMA7(void) __attribute__ ((section (".libperi")));
                     /* returns the channel 7 DMA RAM write collision detect */

#endif

#if defined(__dsPIC33E__) || defined(__PIC24E__)

/* Returns Channel 0 Request Collision detect status */
char RequestCollisionDMA0(void) __attribute__ ((section(".libperi")));

/* Returns Channel 1 Request Collision detect status */
char RequestCollisionDMA1(void) __attribute__ ((section(".libperi")));

/* Returns Channel 2 Request Collision detect status */
char RequestCollisionDMA2(void) __attribute__ ((section(".libperi")));

/* Returns Channel 3 Request Collision detect status */
char RequestCollisionDMA3(void) __attribute__ ((section(".libperi")));

/* Returns Channel 4 Request Collision detect status */
char RequestCollisionDMA4(void) __attribute__ ((section(".libperi")));

/* Returns Channel 5 Request Collision detect status */
char RequestCollisionDMA5(void) __attribute__ ((section(".libperi")));

/* Returns Channel 6 Request Collision detect status */
char RequestCollisionDMA6(void) __attribute__ ((section(".libperi")));

/* Returns Channel 7 Request Collision detect status */
char RequestCollisionDMA7(void) __attribute__ ((section(".libperi")));

/* Returns Channel 8 Request Collision detect status */
char RequestCollisionDMA8(void) __attribute__ ((section(".libperi")));

/* Returns Channel 9 Request Collision detect status */
char RequestCollisionDMA9(void) __attribute__ ((section(".libperi")));

/* Returns Channel 10 Request Collision detect status */
char RequestCollisionDMA10(void) __attribute__ ((section(".libperi")));

/* Returns Channel 11 Request Collision detect status */
char RequestCollisionDMA11(void) __attribute__ ((section(".libperi")));

/* Returns Channel 12 Request Collision detect status */
char RequestCollisionDMA12(void) __attribute__ ((section(".libperi")));

/* Returns Channel 13 Request Collision detect status */
char RequestCollisionDMA13(void) __attribute__ ((section(".libperi")));

/* Returns Channel 14 Request Collision detect status */
char RequestCollisionDMA14(void) __attribute__ ((section(".libperi")));

#endif



char WriteCollisionPeripheral0(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel0 peripheral write collision flag bit*/

char WriteCollisionPeripheral1(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel1 peripheral write collision flag bit*/

char WriteCollisionPeripheral2(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel2 peripheral write collision flag bit*/

char WriteCollisionPeripheral3(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel3 peripheral write collision flag bit*/

char WriteCollisionPeripheral4(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel4 peripheral write collision flag bit*/

char WriteCollisionPeripheral5(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel5 peripheral write collision flag bit*/

char WriteCollisionPeripheral6(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel6 peripheral write collision flag bit*/

char WriteCollisionPeripheral7(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel7 peripheral write collision flag bit*/

#if defined (__dsPIC33E__) || defined (__PIC24E__)

char WriteCollisionPeripheral8(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel8 peripheral write collision flag bit*/

char WriteCollisionPeripheral9(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel9 peripheral write collision flag bit*/

char WriteCollisionPeripheral10(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel10 peripheral write collision flag bit*/

char WriteCollisionPeripheral11(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel11 peripheral write collision flag bit*/

char WriteCollisionPeripheral12(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel12 peripheral write collision flag bit*/

char WriteCollisionPeripheral13(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel13 peripheral write collision flag bit*/

char WriteCollisionPeripheral14(void) __attribute__ ((section (".libperi")));
                     /*  returns the channel14 peripheral write collision flag bit*/


#endif

#endif
