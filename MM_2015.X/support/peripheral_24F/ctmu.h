#ifndef _CTMU_H
#define _CTMU_H

/******************************************************************************
 *
 *                  CTMU PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:            CTMU.h
 * Dependencies:     See include below
 * Processor:           PIC24
 * Compiler:             MPLAB C30
 * Company:             Microchip Technology, Inc.
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
#if defined (ctmu_v1_1) || defined (ctmu_v2_1) || defined (ctmu_v2_2) || defined (ctmu_v2_3) || defined (ctmu_v2_4) || defined (ctmu_v2_5)|| defined (ctmu_v2_6) || defined (ctmu_v3_1) || defined (ctmu_v3_2) || defined (ctmu_v3_3) || defined (LIB_BUILD)
  
 /*CTMUCON / CTMUCON1 Control Register*/
 #define CTMU_ENABLE       			   0x8000 /*CTMU is Enabled*/
 #define CTMU_DISABLE      			   0x0000 /*CTMU is Disabled*/
 #define CTMU_ENBL_DISBL_MASK          (~CTMU_ENABLE)
 
 #define CTMU_IDLE_STOP                0x2000 /*CTMU discontinue module operation in Idle mode*/
 #define CTMU_IDLE_CONTINUE            0x0000 /*CTMU Operate in Idle mode*/
 #define CTMU_IDLE_MASK                (~CTMU_IDLE_STOP)
 
 #define CTMU_TIME_GEN_ENABLE          0x1000 /*CTMU enables edge delay generation*/
 #define CTMU_TIME_GEN_DISABLE         0x0000 /*CTMU disables edge delay generation*/
 #define CTMU_TIME_GEN_MASK            (~CTMU_TIME_GEN_ENABLE)
 
 #define CTMU_EDGE_ENABLE              0x0800 /*CTMU edges are not blocked*/
 #define CTMU_EDGE_DISABLE             0x0000 /*CTMU edges are blocked*/
 #define CTMU_EDGE_MASK                (~CTMU_EDGE_ENABLE)
 
 #define CTMU_EDGE_SEQUENCE_ON         0x0400 /*Edge1 event must occur before edge2 event can occur*/
 #define CTMU_EDGE_SEQUENCE_OFF        0x0000 /*No edge sequence os needed*/
 #define CTMU_EDGE_SEQUENCE_MASK       (~CTMU_EDGE_SEQUENCE)
 
 #define CTMU_ANA_CURR_SOURCE_GND      0x0200 /*CTMU Analog current source output is grounded*/
 #define CTMU_ANA_CURR_SOURCE_NOT_GND  0x0000 /*CTMU Analog current source output is not grounded*/
 #define CTMU_ANA_CURR_SOURCE_MASK     (~CTMU_ANA_CURR_SOURCE_GND)
 
 #define CTMU_TRIG_OUTPUT_ENABLE       0x0100 /*Trigger output is enabled*/
 #define CTMU_TRIG_OUTPUT_DISABLE      0x0000 /*Trigger output is disabled*/
 #define CTMU_TRIG_OUTPUT_MASK         (~CTMU_TRIG_OUTPUT)

#if defined (ctmu_v3_1) || defined (ctmu_v3_2) || defined (ctmu_v3_3)
 #define CTMU_POS_CURR_TRIM_62         0x007C00 /*62% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_60         0x0078 /*60% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_58         0x0074 /*58% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_56         0x0070 /*56% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_54         0x006C /*54% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_52         0x0068 /*52% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_50         0x0064 /*50% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_48         0x0060 /*48% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_46         0x005C /*46% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_44         0x0058 /*44% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_42         0x0054 /*42% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_40         0x0050 /*40% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_38         0x004C /*38% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_36         0x0048 /*36% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_34         0x0044 /*34% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_32         0x0040 /*32% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_30         0x003C /*30% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_28         0x0038 /*28% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_26         0x0034 /*26% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_24         0x0030 /*24% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_22         0x002C /*22% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_20         0x0028 /*20% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_18         0x0024 /*18% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_16         0x0020 /*16% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_14         0x001C /*14% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_12         0x0018 /*12% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_10         0x0014 /*10% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_8          0x0010 /*8% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_6          0x000C /*6% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_4          0x0008 /*4% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_2          0x0004 /*2% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_MASK       (~CTMU_POS_CURR_TRIM_62)
 #define CTMU_NOMINAL_CURRENT          0x0000 /*Nominal Current output specified by IRNG1:IRNG0*/
 #define CTMU_NEG_CURR_TRIM_2          0x00FC /*2% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_4          0x00F8 /*4% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_6          0x00F4 /*6% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_8          0x00F0 /*8% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_10         0x00EC /*10% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_12         0x00E8 /*12% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_14         0x00E4 /*14% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_16         0x00E0 /*16% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_18         0x00DC /*18% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_20         0x00D8 /*20% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_22         0x00D4 /*22% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_24         0x00D0 /*24% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_26         0x00CC /*26% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_28         0x00C8 /*28% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_30         0x00C4 /*30% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_32         0x00C0 /*32% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_34         0x00BC /*34% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_36         0x00B8 /*36% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_38         0x00B4 /*38% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_40         0x00B0 /*40% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_42         0x00AC /*42% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_44         0x00A8 /*44% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_46         0x00A4 /*46% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_48         0x00A0 /*48% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_50         0x009C /*50% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_52         0x0098 /*52% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_54         0x0094 /*54% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_56         0x0090 /*56% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_58         0x008C /*58% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_60         0x0088 /*60% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_62         0x0084 /*62% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_MASK       (~CTMU_NEG_CURR_TRIM_2)
 
 #define CTMU_CURR_RANGE_100_BASE_CURR 	0x0003 /*Current source Range is 1000*Base current (550uA) */
 #define CTMU_CURR_RANGE_10_BASE_CURR  	0x0002 /*Current source Range is 100*Base current (55uA) */
 #define CTMU_CURR_RANGE_BASE_CURR   	0x0001 /*Current source Range is 10*Base current (5.5uA)*/
 #define CTMU_CURR_RANGE_1000_BASE_CURR 0x0000 /*Current source Range is Base current (0.55uA)*/
 #define CTMU_CURR_RANGE_MASK          (~CTMU_CURR_RANGE_100_BASE_CURR)
#endif

 #if defined (ctmu_v1_1) 
 /*CTMUCON Control Register*/ 
 #define CTMU_EDGE1_POLARITY_POS       0x0010 /*Edge 1 programmed for a positive edge response*/
 #define CTMU_EDGE1_POLARITY_NEG       0x0000 /*Edge 1 programmed for a negative edge response*/
 #define CTMU_EDGE1_POLARITY_MASK      (~CTMU_EDGE2_POS_POLARITY)
 
 #define CTMU_EDGE1_SOURCE_CTED1       0x000C /*CTED1 is a source select for Edge1*/
 #define CTMU_EDGE1_SOURCE_CTED2       0x0008 /*CTED2 is a source select for Edge1*/
 #define CTMU_EDGE1_SOURCE_OC1         0x0004 /*OC1 is a source select for Edge1*/
 #define CTMU_EDGE1_SOURCE_TIMER1      0x0000 /*TIMER1 is a source select for Edge1*/
 #define CTMU_EDGE1_SOURCE_MASK        (~CTMU_EDGE2_SOURCE_CTED1)
 
 #define CTMU_EDGE2_POLARITY_POS       0x0080 /*Edge 2 programmed for a positive edge response*/
 #define CTMU_EDGE2_POLARITY_NEG       0x0000 /*Edge 2 programmed for a negative edge response*/
 #define CTMU_EDGE2_POLARITY_MASK      (~CTMU_EDGE2_POS_POLARITY)
 
 #define CTMU_EDGE2_SOURCE_CTED1       0x0060 /*CTED1 is a source select for Edge2*/
 #define CTMU_EDGE2_SOURCE_CTED2       0x0040 /*CTED2 is a source select for Edge2*/
 #define CTMU_EDGE2_SOURCE_OC1         0x0020 /*OC1 is a source select for Edge2*/
 #define CTMU_EDGE2_SOURCE_TIMER1      0x0000 /*TIMER1 is a source select for Edge2*/
 #define CTMU_EDGE2_SOURCE_MASK        (~CTMU_EDGE2_SOURCE_CTED1) 
 #endif 
 

  #if defined (ctmu_v2_1) || defined (ctmu_v2_2)|| defined (ctmu_v2_3) || defined (ctmu_v2_4) || defined (ctmu_v2_5) || defined (ctmu_v2_6)
   /*CTMUCON2 Control Register*/
 #define CTMU_EDGE1_EDGE_SENSITIVE     0x8000 /*Input is edge-sensitive*/
 #define CTMU_EDGE1_LEVEL_SENSITIVE    0x0000 /*Input is level-sensitive*/
 #define CTMU_EDGE1_SENSITIVE_MASK     (~0x8000)  
   
 #define CTMU_EDGE1_POLARITY_POS       0x4000 /*Edge 1 programmed for a positive edge response*/
 #define CTMU_EDGE1_POLARITY_NEG       0x0000 /*Edge 1 programmed for a negative edge response*/
 #define CTMU_EDGE1_POLARITY_MASK      (~CTMU_EDGE2_POS_POLARITY)
 
 #define CTMU_EDGE1_SOURCE_CMP3        0x3C00 /*Edge1 source is Comparator 3 Output*/
 #define CTMU_EDGE1_SOURCE_CMP2        0x3800 /*Edge1 source is Comparator 2 Output*/
 #define CTMU_EDGE1_SOURCE_CMP1        0x3400 /*Edge1 source is Comparator 1 Output*/
 #define CTMU_EDGE1_SOURCE_IC3         0x3000 /*Edge1 source is Input Capture 3*/
 #define CTMU_EDGE1_SOURCE_IC2         0x2C00 /*Edge1 source is Input Capture 2*/
 #define CTMU_EDGE1_SOURCE_IC1         0x2800 /*Edge1 source is Input Capture 1*/
 #define CTMU_EDGE1_SOURCE_CTED8       0x2400 /*Edge1 source is CTED8*/
 #ifndef ctmu_v2_4
 #define CTMU_EDGE1_SOURCE_CTED7       0x2000 /*Edge1 source is CTED7*/
 #endif
 #ifndef ctmu_v2_6
 #define CTMU_EDGE1_SOURCE_CTED6       0x1C00 /*Edge1 source is CTED6*/
 #define CTMU_EDGE1_SOURCE_CTED5       0x1800 /*Edge1 source is CTED5*/
 #define CTMU_EDGE1_SOURCE_CTED4       0x1400 /*Edge1 source is CTED4*/
 #if defined (ctmu_v2_2)|| defined (ctmu_v2_3)|| defined (ctmu_v2_5)
 #define CTMU_EDGE1_SOURCE_CTED3       0x1000 /*Edge1 source is CTED3*/
 #endif
 #endif
 #define CTMU_EDGE1_SOURCE_CTED1       0x0C00 /*Edge1 source is CTED1*/
 #define CTMU_EDGE1_SOURCE_CTED2       0x0800 /*Edge1 source is CTED2*/
 #define CTMU_EDGE1_SOURCE_OC1         0x0400 /*Edge1 source is OC1*/
 #define CTMU_EDGE1_SOURCE_TIMER1      0x0000 /*Edge1 source is Timer1*/
 #define CTMU_EDGE1_SOURCE_MASK        (~0x3C00)
 
 #define CTMU_EDGE2_EDGE_SENSITIVE     0x0080 /*Input is edge-sensitive*/
 #define CTMU_EDGE2_LEVEL_SENSITIVE    0x0000 /*Input is level-sensitive*/
 #define CTMU_EDGE2_SENSITIVE_MASK     (~0x0080)  
 
 #define CTMU_EDGE2_POLARITY_POS       0x0040 /*Edge 2 programmed for a positive edge response*/
 #define CTMU_EDGE2_POLARITY_NEG       0x0000 /*Edge 2 programmed for a negative edge response*/
 #define CTMU_EDGE2_POLARITY_MASK      (~0x0040)
 
 #ifndef ctmu_v2_6
 
 #define CTMU_EDGE2_SOURCE_CMP3        0x003C /*Edge2 source is Comparator 3 Output*/
 #define CTMU_EDGE2_SOURCE_CMP2        0x0038 /*Edge2 source is Comparator 2 Output*/
 #define CTMU_EDGE2_SOURCE_CMP1        0x0034 /*Edge2 source is Comparator 1 Output*/
 #define CTMU_EDGE2_SOURCE_IC3         0x002C /*Edge2 source is Input Capture 3*/
 #define CTMU_EDGE2_SOURCE_IC2         0x0028 /*Edge2 source is Input Capture 2*/
 #define CTMU_EDGE2_SOURCE_IC1         0x0024 /*Edge2 source is Input Capture 1*/
 #if defined (ctmu_v2_2)|| defined (ctmu_v2_3)|| defined (ctmu_v2_4) || defined (ctmu_v2_5)
 #define CTMU_EDGE2_SOURCE_CTED13      0x0020 /*Edge2 source is CTED10*/
 #endif
 #if defined (ctmu_v2_3)|| defined (ctmu_v2_4) || defined (ctmu_v2_5)
 #define CTMU_EDGE2_SOURCE_CTED12      0x001C /*Edge2 source is CTED12*/
 #endif
 #if defined (ctmu_v2_3)|| defined (ctmu_v2_5)
 #define CTMU_EDGE2_SOURCE_CTED11      0x0018 /*Edge2 source is CTED11*/
 #endif

 #ifndef ctmu_v2_4 
 #define CTMU_EDGE2_SOURCE_CTED10      0x0014 /*Edge2 source is CTED10*/
 #endif
 #define CTMU_EDGE2_SOURCE_CTED9       0x0010 /*Edge2 source is CTED9*/
 #define CTMU_EDGE2_SOURCE_CTED1       0x00C0 /*Edge2 source is CTED1*/
 #define CTMU_EDGE2_SOURCE_CTED2       0x0080 /*Edge2 source is CTED2*/
 #define CTMU_EDGE2_SOURCE_OC1         0x0040 /*Edge2 source is OC1*/
 #define CTMU_EDGE2_SOURCE_TIMER1      0x0000 /*Edge2 source is Timer1*/
 #define CTMU_EDGE2_SOURCE_MASK        (~0x003C)
 #endif 
 
 #endif
 
 #if defined (ctmu_v2_6)
 #define CTMU_EDGE2_SOURCE_IC1			0x0000
 #define CTMU_EDGE2_SOURCE_CMP2			0x0040
 #define CTMU_EDGE2_SOURCE_CTED1		0x0080
 #define CTMU_EDGE2_SOURCE_CTED2		0x00C0
#endif
 
 #if defined (ctmu_v3_1) || defined (ctmu_v3_2) || defined (ctmu_v3_3) 

 /*CTMUCON1H Control Register*/
 #define CTMU_EDGE1_EDGE_SENSITIVE     0x8000 /*Input is edge-sensitive*/
 #define CTMU_EDGE1_LEVEL_SENSITIVE    0x0000 /*Input is level-sensitive*/
 #define CTMU_EDGE1_SENSITIVE_MASK     (~0x8000)  
   
 #define CTMU_EDGE1_POLARITY_POS       0x4000 /*Edge 1 programmed for a positive edge response*/
 #define CTMU_EDGE1_POLARITY_NEG       0x0000 /*Edge 1 programmed for a negative edge response*/
 #define CTMU_EDGE1_POLARITY_MASK      (~CTMU_EDGE2_POS_POLARITY)
 
 #define CTMU_EDGE1_SOURCE_CMP3        0x3C00 /*Edge 1 source is Comparator 3 Output*/
 #define CTMU_EDGE1_SOURCE_CMP2        0x3800 /*Edge 1 source is Comparator 2 Output*/
 #define CTMU_EDGE1_SOURCE_CMP1        0x3400 /*Edge 1 source is Comparator 1 Output*/
 #define CTMU_EDGE1_SOURCE_CLC2         0x3000 /*Edge 1 source is CLC 2*/
 #define CTMU_EDGE1_SOURCE_CLC1         0x2C00 /*Edge 1 source is CLC 1*/
 #define CTMU_EDGE1_SOURCE_MCCP2       0x2800 /*Edge 1 source is MCCP 2*/
 #ifdef defined (ctmu_v3_3)
 #define CTMU_EDGE1_SOURCE_CTED8       0x2400 /*Edge 1 source is CTED8*/
 #define CTMU_EDGE1_SOURCE_CTED7       0x2000 /*Edge 1 source is CTED7*/
 #endif
 #define CTMU_EDGE1_SOURCE_CTED6       0x1C00 /*Edge 1 source is CTED6*/
 #define CTMU_EDGE1_SOURCE_CTED5       0x1800 /*Edge 1 source is CTED5*/
 #define CTMU_EDGE1_SOURCE_CTED4       0x1400 /*Edge 1 source is CTED4*/
 #if defined (ctmu_v3_2) || defined (ctmu_v3_3)
 #define CTMU_EDGE1_SOURCE_CTED3       0x1000 /*Edge 1 source is CTED3*/
 #endif
 #define CTMU_EDGE1_SOURCE_CTED1       0x0C00 /*Edge 1 source is CTED1*/
 #define CTMU_EDGE1_SOURCE_CTED2       0x0800 /*Edge 1 source is CTED2*/
 #define CTMU_EDGE1_SOURCE_MCCP1       0x0400 /*Edge 1 source is MCCP 1*/
 #define CTMU_EDGE1_SOURCE_TIMER1      0x0000 /*Edge 1 source is Timer1*/
 #define CTMU_EDGE1_SOURCE_MASK        (~0x3C00)
 
 #define CTMU_EDGE2_EDGE_SENSITIVE     0x0080 /*Input is edge-sensitive*/
 #define CTMU_EDGE2_LEVEL_SENSITIVE    0x0000 /*Input is level-sensitive*/
 #define CTMU_EDGE2_SENSITIVE_MASK     (~0x0080)  
 
 #define CTMU_EDGE2_POLARITY_POS       0x0040 /*Edge 2 programmed for a positive edge response*/
 #define CTMU_EDGE2_POLARITY_NEG       0x0000 /*Edge 2 programmed for a negative edge response*/
 #define CTMU_EDGE2_POLARITY_MASK      (~0x0040)

 #define CTMU_EDGE2_SOURCE_CMP3        0x003C /*Edge 2 source is Comparator 3 Output*/
 #define CTMU_EDGE2_SOURCE_CMP2        0x0038 /*Edge 2 source is Comparator 2 Output*/
 #define CTMU_EDGE2_SOURCE_CMP1        0x0034 /*Edge 2 source is Comparator 1 Output*/
 #define CTMU_EDGE2_SOURCE_CLC1         0x002C /*Edge 2 source is CLC 1*/
 #define CTMU_EDGE2_SOURCE_MCCP2       0x0028 /*Edge 2 source is MCCP 2*/
 #define CTMU_EDGE2_SOURCE_CTED13      0x0020 /*Edge1 source is CTED13*/
 #define CTMU_EDGE2_SOURCE_CTED12      0x001C /*Edge1 source is CTED12*/
 #ifdef defined (ctmu_v3_3)
 #define CTMU_EDGE2_SOURCE_CTED11      0x0018 /*Edge1 source is CTED11*/
 #endif
 #define CTMU_EDGE2_SOURCE_CTED10      0x0014 /*Edge1 source is CTED10*/
 #if defined (ctmu_v3_2) || defined (ctmu_v3_3)
 #define CTMU_EDGE2_SOURCE_CTED9       0x0010 /*Edge1 source is CTED9*/
 #endif
 #define CTMU_EDGE2_SOURCE_CTED1       0x000C /*Edge1 source is CTED1*/
 #define CTMU_EDGE2_SOURCE_CTED2       0x0008 /*Edge1 source is CTED2*/
 #define CTMU_EDGE2_SOURCE_MCCP1       0x0004 /*Edge1 source is MCCP 1*/
 #define CTMU_EDGE2_SOURCE_TIMER1      0x0000 /*Edge1 source is Timer1*/
 #define CTMU_EDGE2_SOURCE_MASK        (~0x003C)

 /*CTMUCON2L Control register*/ 
 #define CTMU_RESET_ENABLE		0x0010 /* Enable reset of CTMU current source*/
 #define CTMU_RESET_DISABLE		0x0000 /* Disable reset of CTMU current source*/
 #define CTMU_RESET_MASK			(~0x0010)
 
 #define CTMU_DISCHARGE_SOURCE_CLC2	0x0007 /* CLC2 output causes discharge*/
 #define CTMU_DISCHARGE_SOURCE_CLC1	0x0006 /* CLC1 output causes discharge*/
 #define CTMU_DISCHARGE_SOURCE_ADC		0x0004 /* ADC end-of-conversion causes discharge*/
 #define CTMU_DISCHARGE_SOURCE_SCCP5	0x0003 /* SCCP5 auxiliary output causes discharge*/
 #define CTMU_DISCHARGE_SOURCE_MCCP2	0x0002 /* MCCP2 auxiliary output causes discharge*/
 #define CTMU_DISCHARGE_SOURCE_MCCP1	0x0001 /* MCCP1 auxiliary output causes discharge*/
 #define CTMU_DISCHARGE_SOURCE_NONE	0x0000 /* No discharge source selected, use the IDISSEN bit*/
 #define CTMU_DISCHARGE_SOURCE_MASK	(~0x0007)

 #endif
 
#if defined (ctmu_v1_1) || defined (ctmu_v2_1) || defined (ctmu_v2_2) || defined (ctmu_v2_3) || defined (ctmu_v2_4) || defined (ctmu_v2_5)|| defined (ctmu_v2_6)

 /*CTMUICON Current Control register*/ 
 #define CTMU_POS_CURR_TRIM_62         0x7C00 /*62% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_60         0x7800 /*60% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_58         0x7400 /*58% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_56         0x7000 /*56% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_54         0x6C00 /*54% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_52         0x6800 /*52% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_50         0x6400 /*50% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_48         0x6000 /*48% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_46         0x5C00 /*46% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_44         0x5800 /*44% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_42         0x5400 /*42% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_40         0x5000 /*40% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_38         0x4C00 /*38% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_36         0x4800 /*36% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_34         0x4400 /*34% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_32         0x4000 /*32% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_30         0x3C00 /*30% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_28         0x3800 /*28% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_26         0x3400 /*26% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_24         0x3000 /*24% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_22         0x2C00 /*22% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_20         0x2800 /*20% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_18         0x2400 /*18% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_16         0x2000 /*16% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_14         0x1C00 /*14% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_12         0x1800 /*12% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_10         0x1400 /*10% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_8          0x1000 /*8% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_6          0x0C00 /*6% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_4          0x0800 /*4% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_2          0x0400 /*2% of Positive change from nominal current*/
 #define CTMU_POS_CURR_TRIM_MASK       (~CTMU_POS_CURR_TRIM_62)
 
 #define CTMU_NOMINAL_CURRENT          0x0000 /*Nominal Current output specified by IRNG1:IRNG0*/
 
 #define CTMU_NEG_CURR_TRIM_2          0xFC00 /*2% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_4          0xF800 /*4% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_6          0xF400 /*6% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_8          0xF000 /*8% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_10         0xEC00 /*10% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_12         0xE800 /*12% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_14         0xE400 /*14% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_16         0xE000 /*16% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_18         0xDC00 /*18% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_20         0xD800 /*20% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_22         0xD400 /*22% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_24         0xD000 /*24% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_26         0xCC00 /*26% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_28         0xC800 /*28% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_30         0xC400 /*30% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_32         0xC000 /*32% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_34         0xBC00 /*34% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_36         0xB800 /*36% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_38         0xB400 /*38% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_40         0xB000 /*40% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_42         0xAC00 /*42% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_44         0xA800 /*44% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_46         0xA400 /*46% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_48         0xA000 /*48% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_50         0x9C00 /*50% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_52         0x9800 /*52% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_54         0x9400 /*54% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_56         0x9000 /*56% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_58         0x8C00 /*58% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_60         0x8800 /*60% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_62         0x8400 /*62% of Negative change from nominal current*/
 #define CTMU_NEG_CURR_TRIM_MASK       (~CTMU_NEG_CURR_TRIM_2)
 
 #if defined (ctmu_v1_1) || defined (ctmu_v2_6)
 #define CTMU_CURR_RANGE_100_BASE_CURR 0x0300 /*Current source Range is 100*Base current (55uA) */
 #define CTMU_CURR_RANGE_10_BASE_CURR  0x0200 /*Current source Range is 10*Base current (5.5uA)*/
 #define CTMU_CURR_RANGE_BASE_CURR     0x0100 /*Current source Range is Base current (0.55uA)*/
 #define CTUM_CURR_SOURCE_DISABLE      0x0000 /*Current source disabled*/
 #endif
 #if defined (ctmu_v2_1) || defined (ctmu_v2_2)|| defined (ctmu_v2_3)|| defined (ctmu_v2_4)|| defined (ctmu_v2_5)
 #define CTMU_CURR_RANGE_100_BASE_CURR 	0x0300 /*Current source Range is 1000*Base current (550uA) */
 #define CTMU_CURR_RANGE_10_BASE_CURR  	0x0200 /*Current source Range is 100*Base current (55uA) */
 #define CTMU_CURR_RANGE_BASE_CURR   	0x0100 /*Current source Range is 10*Base current (5.5uA)*/
 #define CTMU_CURR_RANGE_1000_BASE_CURR 0x0000 /*Current source Range is Base current (0.55uA)*/
 #endif
 #define CTMU_CURR_RANGE_MASK          (~CTMU_CURR_RANGE_100_BASE_CURR)
 
 #endif
 
 #define CTMU_INT_PRI_0                0x0000 /*CTMU interrupt priority is 0*/
 #define CTMU_INT_PRI_1                0x0001 /*CTMU interrupt priority is 1*/
 #define CTMU_INT_PRI_2                0x0002 /*CTMU interrupt priority is 2*/
 #define CTMU_INT_PRI_3                0x0003 /*CTMU interrupt priority is 3*/
 #define CTMU_INT_PRI_4                0x0004 /*CTMU interrupt priority is 4*/
 #define CTMU_INT_PRI_5                0x0005 /*CTMU interrupt priority is 5*/
 #define CTMU_INT_PRI_6                0x0006 /*CTMU interrupt priority is 6*/
 #define CTMU_INT_PRI_7                0x0007 /*CTMU interrupt priority is 7*/
 #define CTMU_INT_PRI_MASK             (~CTMU_INT_PRI_7)

 #define CTMU_INT_ENABLE               0x0008 /* Enable CTMU interrupts */
 #define CTMU_INT_DISABLE              0x0000 /* Disable CTMU interrupts */
 #define CTMU_INT_MASK                 (~CTMU_INT_ENABLE)
 
 #if defined (ctmu_v1_1) 

/************************************************************************
Macro       : Enbl_CTMUEdge1
Overview    : By setting edge1 status bit current source enables  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUEdge1  				(CTMUCONbits.EDG1STAT = 1)

/************************************************************************
Macro       : Enbl_CTMUEdge2
Overview    : By setting edge2 status bit current source enables  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUEdge2 				(CTMUCONbits.EDG2STAT = 1)

/************************************************************************
Macro        :Disbl_CTMUEdge1
Overview    : By clearing edge1 status bit disable the current source
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUEdge1 				(CTMUCONbits.EDG1STAT = 0)

/************************************************************************
Macro       :Disbl_CTMUEdge2
Overview    : By clearing edge2 status bit disable the current source 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUEdge2				(CTMUCONbits.EDG2STAT = 0)

/************************************************************************
Macro       : Disbl_Currentsource
Overview    : By clearing EDGSTAT bit disable the source.
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CurrentSource   		( CTMUCONbits.EDG1STAT = 0 , CTMUCONbits.EDG2STAT = 0 )

/************************************************************************
Macro       : CTMUEdge1_Status
Overview    : Returns the status of CTMU edge1  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define CTMUEdge1_Status      		CTMUCONbits.EDG1STAT

/************************************************************************
Macro       : CTMUEdge2_Status
Overview    : Returns the status of CTMU edge2 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define CTMUEdge2_Status  	 		CTMUCONbits.EDG2STAT

#endif

 #if defined (ctmu_v2_1) || defined (ctmu_v2_2) || defined (ctmu_v2_3)

/************************************************************************
Macro       : Enbl_CTMUEdge1
Overview    : By setting edge1 status bit current source enables  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUEdge1  				(CTMUCON2bits.EDG1 = 1)

/************************************************************************
Macro       : Enbl_CTMUEdge2
Overview    : By setting edge2 status bit current source enables  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUEdge2 				(CTMUCON2bits.EDG2 = 1)

/************************************************************************
Macro        :Disbl_CTMUEdge1
Overview    : By clearing edge1 status bit disable the current source
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUEdge1 				(CTMUCON2bits.EDG1 = 0)

/************************************************************************
Macro       :Disbl_CTMUEdge2
Overview    : By clearing edge2 status bit disable the current source 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUEdge2				(CTMUCON2bits.EDG2 = 0)

/************************************************************************
Macro       : Disbl_Currentsource
Overview    : By clearing EDGSTAT bit disable the source.
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CurrentSource   		( CTMUCON2bits.EDG1=0 , CTMUCON2bits.EDG2=0 )

/************************************************************************
Macro       : CTMUEdge1_Status
Overview    : Returns the status of CTMU edge1  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define CTMUEdge1_Status      		CTMUCON2bits.EDG1

/************************************************************************
Macro       : CTMUEdge2_Status
Overview    : Returns the status of CTMU edge2 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define CTMUEdge2_Status  	 		CTMUCON2bits.EDG2

#endif

 #if defined (ctmu_v2_4)|| defined (ctmu_v2_5) || defined (ctmu_v2_6)
 
/************************************************************************
Macro       : Enbl_CTMUEdge1
Overview    : By setting edge1 status bit current source enables  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUEdge1  				(CTMUCON2bits.EDG1STAT = 1)

/************************************************************************
Macro       : Enbl_CTMUEdge2
Overview    : By setting edge2 status bit current source enables  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUEdge2 				(CTMUCON2bits.EDG2STAT = 1)

/************************************************************************
Macro        :Disbl_CTMUEdge1
Overview    : By clearing edge1 status bit disable the current source
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUEdge1 				(CTMUCON2bits.EDG1STAT = 0)

/************************************************************************
Macro       :Disbl_CTMUEdge2
Overview    : By clearing edge2 status bit disable the current source 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUEdge2				(CTMUCON2bits.EDG2STAT = 0)

/************************************************************************
Macro       : Disbl_Currentsource
Overview    : By clearing EDGSTAT bit disable the source.
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CurrentSource   		( CTMUCON2bits.EDG1STAT=0 , CTMUCON2bits.EDG2STAT=0 )

/************************************************************************
Macro       : CTMUEdge1_Status
Overview    : Returns the status of CTMU edge1  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define CTMUEdge1_Status      		CTMUCON2bits.EDG1STAT

/************************************************************************
Macro       : CTMUEdge2_Status
Overview    : Returns the status of CTMU edge2 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define CTMUEdge2_Status  	 		CTMUCON2bits.EDG2STAT

#endif

 #if defined (ctmu_v3_1)|| defined (ctmu_v3_2) || defined (ctmu_v3_3)
 
/************************************************************************
Macro       : Enbl_CTMUEdge1
Overview    : By setting edge1 status bit current source enables  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUEdge1  				(CTMUCON1Hbits.EDG1STAT = 1)

/************************************************************************
Macro       : Enbl_CTMUEdge2
Overview    : By setting edge2 status bit current source enables  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUEdge2 				(CTMUCON1Hbits.EDG2STAT = 1)

/************************************************************************
Macro        :Disbl_CTMUEdge1
Overview    : By clearing edge1 status bit disable the current source
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUEdge1 				(CTMUCON1Hbits.EDG1STAT = 0)

/************************************************************************
Macro       :Disbl_CTMUEdge2
Overview    : By clearing edge2 status bit disable the current source 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUEdge2				(CTMUCON1Hbits.EDG2STAT = 0)

/************************************************************************
Macro       : Disbl_Currentsource
Overview    : By clearing EDGSTAT bit disable the source.
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CurrentSource   		( CTMUCON1Hbits.EDG1STAT=0 , CTMUCON1Hbits.EDG2STAT=0 )

/************************************************************************
Macro       : CTMUEdge1_Status
Overview    : Returns the status of CTMU edge1  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define CTMUEdge1_Status      		CTMUCON1Hbits.EDG1STAT

/************************************************************************
Macro       : CTMUEdge2_Status
Overview    : Returns the status of CTMU edge2 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define CTMUEdge2_Status  	 		CTMUCON1Hbits.EDG2STAT

#endif

/***********************************************************************
Macro      : EnableIntCTMU 
Overview   : This macro enables the CTMU interrupt. 
Parameters : None 
Remarks    : This macro sets CTMU Interrupt Enable bit of Interrupt 
                  Enable Control Register.
************************************************************************/ 
#define EnableIntCTMU                (IEC4bits.CTMUIE = 1)

/***********************************************************************
Macro      : DisableIntCTMU 
Overview   : This macro disables the CTMU interrupt.
Parameters : None
Remarks    : This macro clears CTMU Interrupt Enable bit of Interrupt 
             Enable Control register.
************************************************************************/ 
#define DisableIntCTMU               (IEC4bits.CTMUIE = 0)

/***********************************************************************
Macro      : SetPriorityIntCTMU(priority) 
Overview   : This macro sets priority for CTMU interrupt. 
Parameters : priority - This input parameter is the level of interrupt priority 
Remarks    : This macro sets CTMU Interrupt Priority bits of Interrupt 
             Priority Control register.
************************************************************************/  
#define SetPriorityIntCTMU(priority)    (IPC19bits.CTMUIP = priority)

/*******************************************************************
Macro       : CTMU_Clear_Intr_Status_Bit 
Overview    : Macro to Clear CTMU Interrupt Status bit 
Parameters  : None 
Remarks     : None 
*******************************************************************/
#define CTMU_Clear_Intr_Status_Bit    (IFS4bits.CTMUIF = 0) 


#if defined (ctmu_v2_6)

/************************************************************************
Macro       : Enbl_CTMUTGEN
Overview    : By setting TGEN bit, edge delay generation is enabled  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUTGEN  				(CTMUCON1bits.TGEN = 1)

/************************************************************************
Macro       : Enbl_CTMUTRIG
Overview    : By setting CTTRIG bit, Trigger output is enabled 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUTRIG 				(CTMUCON1bits.CTTRIG = 1)

/************************************************************************
Macro       : Enbl_EDGE
Overview    : By setting EDGEN bit, edges are not blocked  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_EDGE  				(CTMUCON1bits.EDGEN = 1)

/************************************************************************
Macro       : Disbl_EDGE
Overview    : By clearing EDGEN bit, edges are blocked 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_EDGE 				(CTMUCON1bits.EDGEN = 0)

/************************************************************************
Macro        :Disbl_CTMUTGEN
Overview    : By clearing TGEN bit, disable the edge delay generation
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUTGEN 				(CTMUCON1bits.TGEN = 0)

/************************************************************************
Macro       :Disbl_CTMUTRIG
Overview    : By clearing CTTRIG bit disable the Trigger output 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUTRIG				(CTMUCON1bits.CTTRIG = 0)

#endif

#if defined (ctmu_v3_1)|| defined (ctmu_v3_2) || defined (ctmu_v3_3)

/************************************************************************
Macro       : Enbl_CTMUTGEN
Overview    : By setting TGEN bit, edge delay generation is enabled  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUTGEN  				(CTMUCON1Lbits.TGEN = 1)

/************************************************************************
Macro       : Enbl_CTMUTRIG
Overview    : By setting CTTRIG bit, Trigger output is enabled 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_CTMUTRIG 				(CTMUCON1Lbits.CTTRIG = 1)

/************************************************************************
Macro       : Enbl_EDGE
Overview    : By setting EDGEN bit, edges are not blocked  
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Enbl_EDGE  				(CTMUCON1Lbits.EDGEN = 1)

/************************************************************************
Macro       : Disbl_EDGE
Overview    : By clearing EDGEN bit, edges are blocked 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_EDGE 				(CTMUCON1Lbits.EDGEN = 0)

/************************************************************************
Macro        :Disbl_CTMUTGEN
Overview    : By clearing TGEN bit, disable the edge delay generation
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUTGEN 				(CTMUCON1Lbits.TGEN = 0)

/************************************************************************
Macro       :Disbl_CTMUTRIG
Overview    : By clearing CTTRIG bit disable the Trigger output 
Parameters  : None 
Remarks     : None.
**************************************************************************/ 
#define Disbl_CTMUTRIG				(CTMUCON1Lbits.CTTRIG = 0)

#endif

void __attribute__ ((section (".libperi")))ConfigIntCTMU(unsigned int config);

#if defined (ctmu_v1_1) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define OpenCTMU  OpenCTMU_v1
#define CloseCTMU CloseCTMU_v1
#endif
void __attribute__ ((section (".libperi")))CurrentControlCTMU(unsigned int );
void __attribute__ ((section (".libperi")))OpenCTMU_v1(unsigned int config1, unsigned int config2);
void __attribute__ ((section (".libperi")))CloseCTMU_v1(void);
#endif

#if defined (ctmu_v2_1) || defined (ctmu_v2_2)|| defined (ctmu_v2_3)||defined (LIB_BUILD)
#ifndef LIB_BUILD
#define OpenCTMU OpenCTMU_v2
#define CloseCTMU CloseCTMU_v2
#endif
void __attribute__ ((section (".libperi")))CurrentControlCTMU(unsigned int );
void __attribute__ ((section (".libperi")))OpenCTMU_v2(unsigned int config1, unsigned int config2, 
														unsigned int config3);
void __attribute__ ((section (".libperi")))CloseCTMU_v2(void);
#endif

#if defined (ctmu_v2_4) || defined (ctmu_v2_5)|| defined (ctmu_v2_6) || defined (LIB_BUILD) 
#ifndef LIB_BUILD
#define OpenCTMU  OpenCTMU_v2_1
#define CloseCTMU CloseCTMU_v2_1
#endif
void __attribute__ ((section (".libperi")))CurrentControlCTMU(unsigned int );
void __attribute__ ((section (".libperi")))OpenCTMU_v2_1(unsigned int config1, unsigned int config2, 
														unsigned int config3);
void __attribute__ ((section (".libperi")))CloseCTMU_v2_1(void);
#endif
 
#if defined (ctmu_v3_1) || defined (ctmu_v3_2)|| defined (ctmu_v3_3) || defined (LIB_BUILD) 
#ifndef LIB_BUILD
#define OpenCTMU  OpenCTMU_v3
#define CloseCTMU CloseCTMU_v3
#endif
void __attribute__ ((section (".libperi")))OpenCTMU_v3(unsigned int config1, unsigned int config2, 
														unsigned int config3);
void __attribute__ ((section (".libperi")))CloseCTMU_v3(void);
#endif 
 
#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif
 
#endif 	// _CTMU_H


