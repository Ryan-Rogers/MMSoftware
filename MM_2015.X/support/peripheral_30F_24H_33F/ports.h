/*********************************************************************/
/*              Header for IO ports module library functions         */
/*********************************************************************/

#if defined(__dsPIC30F__)
#include <p30Fxxxx.h>
#elif defined(__dsPIC33F__)
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

#ifndef __PORTS_H
#define __PORTS_H

/* List of SFRs for IO ports */
/* This list contains the SFRs with default (POR) values to be used for configuring IOports */
/* The user can modify this based on the requirement */

#if defined(__dsPIC30F__) || defined(__dsPIC33F__) ||  defined(__PIC24H__)

#define CNEN1_VALUE             0x0000
#define CNPU1_VALUE             0x0000

#define CNEN2_VALUE             0x0000
#define CNPU2_VALUE             0x0000

#endif

#if defined(__dsPIC33E__) || defined(__dsPIC24E)

#define CNENA_VALUE             0x0000
#define CNPUA_VALUE             0x0000
#define CNPDA_VALUE             0x0000
 
#define CNENB_VALUE             0x0000
#define CNPUB_VALUE             0x0000
#define CNPDB_VALUE             0x0000

#define CNENC_VALUE             0x0000
#define CNPUC_VALUE             0x0000
#define CNPDC_VALUE             0x0000

#define CNEND_VALUE             0x0000
#define CNPUD_VALUE             0x0000
#define CNPDD_VALUE             0x0000

#define CNENE_VALUE             0x0000
#define CNPUE_VALUE             0x0000
#define CNPDE_VALUE             0x0000

#define CNENF_VALUE             0x0000
#define CNPUF_VALUE             0x0000
#define CNPDF_VALUE             0x0000

#define CNENG_VALUE             0x0000
#define CNPUG_VALUE             0x0000
#define CNPDG_VALUE             0x0000

#define CNENH_VALUE             0x0000
#define CNPUH_VALUE             0x0000
#define CNPDH_VALUE             0x0000

#define CNENJ_VALUE             0x0000
#define CNPUJ_VALUE             0x0000
#define CNPDJ_VALUE             0x0000

#define CNENK_VALUE             0x0000
#define CNPUK_VALUE             0x0000
#define CNPDK_VALUE             0x0000

#endif

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

#if defined(__dsPIC33F__) || defined(__PIC24H__)

#define IEC3_VALUE              0x0000
#define IEC4_VALUE              0x0000

#define IFS3_VALUE              0x0000
#define IFS4_VALUE              0x0000

#define IPC12_VALUE             0x4444
#define IPC13_VALUE             0x4444
#define IPC14_VALUE             0x4444
#define IPC15_VALUE             0x4444
#define IPC16_VALUE             0x4444
#define IPC17_VALUE             0x4444

#endif

#if defined(__dsPIC33E__) || defined(__dsPIC24E)

#define IEC3_VALUE              0x0000
#define IEC4_VALUE              0x0000
#define IEC5_VALUE              0x0000
#define IEC6_VALUE              0x0000
#define IEC7_VALUE              0x0000
#define IEC8_VALUE              0x0000

#define IFS3_VALUE              0x0000
#define IFS4_VALUE              0x0000
#define IFS5_VALUE              0x0000
#define IFS6_VALUE              0x0000
#define IFS7_VALUE              0x0000
#define IFS8_VALUE              0x0000

#define IPC12_VALUE             0x4444
#define IPC13_VALUE             0x4444
#define IPC14_VALUE             0x4444
#define IPC15_VALUE             0x0444
#define IPC16_VALUE             0x4440
#define IPC17_VALUE             0x4444
#define IPC18_VALUE             0x4040
#define IPC20_VALUE             0x4440
#define IPC21_VALUE             0x4400
#define IPC22_VALUE             0x4444
#define IPC23_VALUE             0x4444
#define IPC24_VALUE             0x4444
#define IPC25_VALUE             0x0004
#define IPC29_VALUE             0x4400
#define IPC30_VALUE             0x4444
#define IPC31_VALUE             0x4444
#define IPC32_VALUE             0x4444
#define IPC33_VALUE             0x4404
#define IPC34_VALUE             0x4444
#define IPC35_VALUE             0x0444

/* Config Bit Defines to be used for CN interrupt configuration */
#define CHANGE_INT_ON           0xFFFFFFFF    /* interrupts on  */
#define CHANGE_INT_OFF          0xFFF7FFFF    /* interrupts off */

/* Setting the priority of CN interrupt */
#define CHANGE_INT_PRI_0        0xFFF8FFFF
#define CHANGE_INT_PRI_1        0xFFF9FFFF
#define CHANGE_INT_PRI_2        0xFFFAFFFF
#define CHANGE_INT_PRI_3        0xFFFBFFFF
#define CHANGE_INT_PRI_4        0xFFFCFFFF
#define CHANGE_INT_PRI_5        0xFFFDFFFF
#define CHANGE_INT_PRI_6        0xFFFEFFFF
#define CHANGE_INT_PRI_7        0xFFFFFFFF

#endif

#if defined(__dsPIC30F__) || defined(__dsPIC33F__) ||  defined(__PIC24H__)

/* Config Bit Defines to be used for CN interrupt configuration */
#define CHANGE_INT_ON           0xFFFFFFFF    /* interrupts on  */
#define CHANGE_INT_OFF          0xF7FFFFFF    /* interrupts off */

/* Setting the priority of CN interrupt */
#define CHANGE_INT_PRI_0        0xF8FFFFFF
#define CHANGE_INT_PRI_1        0xF9FFFFFF
#define CHANGE_INT_PRI_2        0xFAFFFFFF
#define CHANGE_INT_PRI_3        0xFBFFFFFF
#define CHANGE_INT_PRI_4        0xFCFFFFFF
#define CHANGE_INT_PRI_5        0xFDFFFFFF
#define CHANGE_INT_PRI_6        0xFEFFFFFF
#define CHANGE_INT_PRI_7        0xFFFFFFFF

#endif

/* Setting the priority of External interrupt */
#define EXT_INT_PRI_0           0xFFF8
#define EXT_INT_PRI_1           0xFFF9
#define EXT_INT_PRI_2           0xFFFA
#define EXT_INT_PRI_3           0xFFFB
#define EXT_INT_PRI_4           0xFFFC
#define EXT_INT_PRI_5           0xFFFD
#define EXT_INT_PRI_6           0xFFFE
#define EXT_INT_PRI_7           0xFFFF

/* enable / disable External interrupt */
#define EXT_INT_ENABLE          0xFFFF
#define EXT_INT_DISABLE         0xFFF7

/* External interrupts edge selection defines */
#define RISING_EDGE_INT         0xFFEF    /*Interrupt is set by a rising edge  */
#define FALLING_EDGE_INT        0xFFFF    /*Interrupt is set by a falling edge */

#define GLOBAL_INT_ENABLE       0xFFFF
#define GLOBAL_INT_DISABLE      0xFFDF


#if defined(__dsPIC30F__) || defined(__dsPIC33F__) ||  defined(__PIC24H__)

/* Macros to Enable CN interrupts */

#define EnableCN0               CNEN1bits.CN0IE = 1
#define EnableCN1               CNEN1bits.CN1IE = 1
#define EnableCN2               CNEN1bits.CN2IE = 1
#define EnableCN3               CNEN1bits.CN3IE = 1
#define EnableCN4               CNEN1bits.CN4IE = 1
#define EnableCN5               CNEN1bits.CN5IE = 1
#define EnableCN6               CNEN1bits.CN6IE = 1
#define EnableCN7               CNEN1bits.CN7IE = 1

#ifdef _CN8IE

#define EnableCN8               CNEN1bits.CN8IE = 1
#define EnableCN9               CNEN1bits.CN9IE = 1
#define EnableCN10              CNEN1bits.CN10IE = 1
#define EnableCN11              CNEN1bits.CN11IE = 1
#define EnableCN12              CNEN1bits.CN12IE = 1
#define EnableCN13              CNEN1bits.CN13IE = 1
#define EnableCN14              CNEN1bits.CN14IE = 1
#define EnableCN15              CNEN1bits.CN15IE = 1
#define EnableCN16              CNEN2bits.CN16IE = 1
#define EnableCN17              CNEN2bits.CN17IE = 1
#define EnableCN18              CNEN2bits.CN18IE = 1

#endif

#ifdef _CN19IE

#define EnableCN19              CNEN2bits.CN19IE = 1
#define EnableCN20              CNEN2bits.CN20IE = 1
#define EnableCN21              CNEN2bits.CN21IE = 1

#endif

#ifdef _CN22IE

#define EnableCN22              CNEN2bits.CN22IE = 1
#define EnableCN23              CNEN2bits.CN23IE = 1

#endif

/* Macros to Disable CN interrupts */

#define DisableCN0              CNEN1bits.CN0IE = 0
#define DisableCN1              CNEN1bits.CN1IE = 0
#define DisableCN2              CNEN1bits.CN2IE = 0
#define DisableCN3              CNEN1bits.CN3IE = 0
#define DisableCN4              CNEN1bits.CN4IE = 0
#define DisableCN5              CNEN1bits.CN5IE = 0
#define DisableCN6              CNEN1bits.CN6IE = 0
#define DisableCN7              CNEN1bits.CN7IE = 0

#ifdef _CN8IE

#define DisableCN8              CNEN1bits.CN8IE = 0
#define DisableCN9              CNEN1bits.CN9IE = 0
#define DisableCN10             CNEN1bits.CN10IE = 0
#define DisableCN11             CNEN1bits.CN11IE = 0
#define DisableCN12             CNEN1bits.CN12IE = 0
#define DisableCN13             CNEN1bits.CN13IE = 0
#define DisableCN14             CNEN1bits.CN14IE = 0
#define DisableCN15             CNEN1bits.CN15IE = 0
#define DisableCN16             CNEN2bits.CN16IE = 0
#define DisableCN17             CNEN2bits.CN17IE = 0
#define DisableCN18             CNEN2bits.CN18IE = 0

#endif

#ifdef _CN19IE

#define DisableCN19             CNEN2bits.CN19IE = 0
#define DisableCN20             CNEN2bits.CN20IE = 0
#define DisableCN21             CNEN2bits.CN21IE = 0

#endif

#ifdef _CN22IE

#define DisableCN22             CNEN2bits.CN22IE = 0
#define DisableCN23             CNEN2bits.CN23IE = 0

#endif

#endif


#if defined(__dsPIC33E__) || defined(__dsPIC24E)

	/* Macros to Enable/Disable CN interrupts on PORTA*/
    #ifdef _CNIEA0

 	#define EnableCNA0               CNENAbits.CNIEA0= 1
	#define EnableCNA1               CNENAbits.CNIEA1= 1
	#define EnableCNA2               CNENAbits.CNIEA2= 1
	#define EnableCNA3               CNENAbits.CNIEA3= 1
	#define EnableCNA4               CNENAbits.CNIEA4= 1
	#define EnableCNA5               CNENAbits.CNIEA5= 1
	#define EnableCNA6               CNENAbits.CNIEA6= 1
	#define EnableCNA7               CNENAbits.CNIEA7= 1
    #define EnableCNA9               CNENAbits.CNIEA9= 1
    #define EnableCNA10              CNENAbits.CNIEA10= 1
    #define EnableCNA14              CNENAbits.CNIEA14= 1
    #define EnableCNA15              CNENAbits.CNIEA15= 1
	
    #define DisableCNA0              CNENAbits.CNIEA0= 0
    #define DisableCNA1              CNENAbits.CNIEA1= 0
    #define DisableCNA2              CNENAbits.CNIEA2= 0
    #define DisableCNA3              CNENAbits.CNIEA3= 0
    #define DisableCNA4              CNENAbits.CNIEA4= 0
    #define DisableCNA5              CNENAbits.CNIEA5= 0
    #define DisableCNA6              CNENAbits.CNIEA6= 0
    #define DisableCNA7              CNENAbits.CNIEA7= 0
    #define DisableCNA9              CNENAbits.CNIEA9= 0
    #define DisableCNA10             CNENAbits.CNIEA10= 0
    #define DisableCNA14             CNENAbits.CNIEA14= 0
    #define DisableCNA15             CNENAbits.CNIEA15= 0
    #endif
	/* Macros to Enable/Disable CN interrupts on PORTB*/
    #ifdef _CNIEB0

 	#define EnableCNB0               CNENBbits.CNIEB0= 1
	#define EnableCNB1               CNENBbits.CNIEB1= 1
	#define EnableCNB2               CNENBbits.CNIEB2= 1
	#define EnableCNB3               CNENBbits.CNIEB3= 1
	#define EnableCNB4               CNENBbits.CNIEB4= 1
	#define EnableCNB5               CNENBbits.CNIEB5= 1
	#define EnableCNB6               CNENBbits.CNIEB6= 1
	#define EnableCNB7               CNENBbits.CNIEB7= 1
    #define EnableCNB8               CNENBbits.CNIEB8= 1
    #define EnableCNB9               CNENBbits.CNIEB9= 1
    #define EnableCNB10              CNENBbits.CNIEB10= 1
    #define EnableCNB11              CNENBbits.CNIEB11= 1
	#define EnableCNB12              CNENBbits.CNIEB12= 1
    #define EnableCNB13              CNENBbits.CNIEB13= 1
    #define EnableCNB14              CNENBbits.CNIEB14= 1
    #define EnableCNB15              CNENBbits.CNIEB15= 1

    #define DisableCNB0              CNENBbits.CNIEB0= 0
    #define DisableCNB1              CNENBbits.CNIEB1= 0
	#define DisableCNB2              CNENBbits.CNIEB2= 0
	#define DisableCNB3              CNENBbits.CNIEB3= 0
	#define DisableCNB4              CNENBbits.CNIEB4= 0
	#define DisableCNB5              CNENBbits.CNIEB5= 0
	#define DisableCNB6              CNENBbits.CNIEB6= 0
	#define DisableCNB7              CNENBbits.CNIEB7= 0
	#define DisableCNB8              CNENBbits.CNIEB8= 0
	#define DisableCNB9              CNENBbits.CNIEB9= 0
	#define DisableCNB10             CNENBbits.CNIEB10= 0
	#define DisableCNB11             CNENBbits.CNIEB11= 0
	#define DisableCNB12             CNENBbits.CNIEB12= 0
	#define DisableCNB13             CNENBbits.CNIEB13= 0
	#define DisableCNB14             CNENBbits.CNIEB14= 0
	#define DisableCNB15             CNENBbits.CNIEB15= 0

    #endif

	/* Macros to Enable/Disable CN interrupts on PORTC*/
    #ifdef _CNIEC1

	#define EnableCNC1                CNENCbits.CNIEC1= 1
	#define EnableCNC2                CNENCbits.CNIEC2= 1
	#define EnableCNC3                CNENCbits.CNIEC3= 1
	#define EnableCNC4                CNENCbits.CNIEC4= 1

    #define DisableCNC1               CNENCbits.CNIEC1= 0
	#define DisableCNC2               CNENCbits.CNIEC2= 0
	#define DisableCNC3               CNENCbits.CNIEC3= 0
	#define DisableCNC4               CNENCbits.CNIEC4= 0

    #endif

    #define EnableCNC12               CNENCbits.CNIEC12= 1
    #define EnableCNC13               CNENCbits.CNIEC13= 1
    #define EnableCNC14               CNENCbits.CNIEC14= 1
    #define EnableCNC15               CNENCbits.CNIEC15= 1

    #define DisableCNC12              CNENCbits.CNIEC12= 0
	#define DisableCNC13              CNENCbits.CNIEC13= 0
	#define DisableCNC14              CNENCbits.CNIEC14= 0
	#define DisableCNC15              CNENCbits.CNIEC15= 0

	/* Macros to Enable/Disable CN interrupts on PORTD*/

    #define EnableCND0                CNENDbits.CNIED0= 1
    #define EnableCND1                CNENDbits.CNIED1= 1
 	#define EnableCND2                CNENDbits.CNIED2= 1
 	#define EnableCND3                CNENDbits.CNIED3= 1
 	#define EnableCND4                CNENDbits.CNIED4= 1
	#define EnableCND5                CNENDbits.CNIED5= 1
	#define EnableCND6                CNENDbits.CNIED6= 1
 	#define EnableCND7                CNENDbits.CNIED7= 1
	#define EnableCND8                CNENDbits.CNIED8= 1
	#define EnableCND9                CNENDbits.CNIED9= 1
	#define EnableCND10               CNENDbits.CNIED10= 1 
    #define EnableCND11               CNENDbits.CNIED11= 1 

	#define DisableCND0               CNENDbits.CNIED0= 0
	#define DisableCND1               CNENDbits.CNIED1= 0
	#define DisableCND2               CNENDbits.CNIED2= 0
	#define DisableCND3               CNENDbits.CNIED3= 0
	#define DisableCND4               CNENDbits.CNIED4= 0
	#define DisableCND5               CNENDbits.CNIED5= 0
	#define DisableCND6               CNENDbits.CNIED6= 0
	#define DisableCND7               CNENDbits.CNIED7= 0
	#define DisableCND8               CNENDbits.CNIED8= 0
	#define DisableCND9               CNENDbits.CNIED9= 0
	#define DisableCND10              CNENDbits.CNIED10= 0
	#define DisableCND11              CNENDbits.CNIED11= 0

    #ifdef _CNIED12

	#define EnableCND12               CNENDbits.CNIED12= 1
	#define EnableCND13               CNENDbits.CNIED13= 1
	#define EnableCND14               CNENDbits.CNIED14= 1
	#define EnableCND15               CNENDbits.CNIED15= 1

	#define DisableCND12              CNENDbits.CNIED12= 0
	#define DisableCND13              CNENDbits.CNIED13= 0
	#define DisableCND14              CNENDbits.CNIED14= 0
	#define DisableCND15              CNENDbits.CNIED15= 0

    #endif

	/* Macros to Enable/Disable CN interrupts on PORTE*/

    #define EnableCNE0                CNENEbits.CNIEE0= 1
	#define EnableCNE1                CNENEbits.CNIEE1= 1
	#define EnableCNE2                CNENEbits.CNIEE2= 1
	#define EnableCNE3                CNENEbits.CNIEE3= 1
	#define EnableCNE4                CNENEbits.CNIEE4= 1
	#define EnableCNE5                CNENEbits.CNIEE5= 1
	#define EnableCNE6                CNENEbits.CNIEE6= 1
	#define EnableCNE7                CNENEbits.CNIEE7= 1

	#define DisableCNE0               CNENEbits.CNIEE0= 0
	#define DisableCNE1               CNENEbits.CNIEE1= 0
	#define DisableCNE2               CNENEbits.CNIEE2= 0
	#define DisableCNE3               CNENEbits.CNIEE3= 0
	#define DisableCNE4               CNENEbits.CNIEE4= 0
	#define DisableCNE5               CNENEbits.CNIEE5= 0
	#define DisableCNE6               CNENEbits.CNIEE6= 0
	#define DisableCNE7               CNENEbits.CNIEE7= 0

    #ifdef _CNIEE8

	#define EnableCNE8                CNENEbits.CNIEE8= 1
    #define EnableCNE9                CNENEbits.CNIEE9= 1

	#define DisableCNE8               CNENEbits.CNIEE8= 0
    #define DisableCNE9               CNENEbits.CNIEE9= 0

    #endif

   /* Macros to Enable/Disable CN interrupts on PORTF*/

  
	#define EnableCNF0                CNENFbits.CNIEF0= 1
	#define EnableCNF1                CNENFbits.CNIEF1= 1
	#define EnableCNF3                CNENFbits.CNIEF3= 1
	#define EnableCNF4                CNENFbits.CNIEF4= 1
 	#define EnableCNF5                CNENFbits.CNIEF5= 1

	#define DisableCNF0               CNENFbits.CNIEF0= 0
	#define DisableCNF1               CNENFbits.CNIEF1= 0
	#define DisableCNF3               CNENFbits.CNIEF3= 0
	#define DisableCNF4               CNENFbits.CNIEF4= 0
	#define DisableCNF5               CNENFbits.CNIEF5= 0

    #ifdef _CNIEF2

    #define EnableCNF2                CNENFbits.CNIEF2= 1
	#define EnableCNF8                CNENFbits.CNIEF8= 1  
	#define EnableCNF12               CNENFbits.CNIEF12= 1
	#define EnableCNF13               CNENFbits.CNIEF13= 1

	#define DisableCNF2               CNENFbits.CNIEF2= 0
	#define DisableCNF8               CNENFbits.CNIEF8= 0
	#define DisableCNF12              CNENFbits.CNIEF12= 0
	#define DisableCNF13              CNENFbits.CNIEF13= 0

    #endif

    /* Macros to Enable/Disable CN interrupts on PORTG*/

	#define EnableCNG2                CNENGbits.CNIEG2= 1
	#define EnableCNG3                CNENGbits.CNIEG3= 1
	#define EnableCNG6                CNENGbits.CNIEG6= 1
	#define EnableCNG7                CNENGbits.CNIEG7= 1
	#define EnableCNG8                CNENGbits.CNIEG8= 1
	#define EnableCNG9                CNENGbits.CNIEG9= 1

	#define DisableCNG2               CNENGbits.CNIEG2= 0
	#define DisableCNG3               CNENGbits.CNIEG3= 0
	#define DisableCNG6               CNENGbits.CNIEG6= 0
	#define DisableCNG7               CNENGbits.CNIEG7= 0
	#define DisableCNG8               CNENGbits.CNIEG8= 0
	#define DisableCNG9               CNENGbits.CNIEG9= 0

    #ifdef __CNIEG0

	#define EnableCNG0                CNENGbits.CNIEG0= 1
	#define EnableCNG1                CNENGbits.CNIEG1= 1
	#define EnableCNG12               CNENGbits.CNIEG12= 1
	#define EnableCNG13               CNENGbits.CNIEG13= 1
	#define EnableCNG14               CNENGbits.CNIEG14= 1
	#define EnableCNG15               CNENGbits.CNIEG15= 1

	#define DisableCNG0               CNENGbits.CNIEG0= 0
	#define DisableCNG1               CNENGbits.CNIEG1= 0
	#define DisableCNG12              CNENGbits.CNIEG12= 0
	#define DisableCNG13              CNENGbits.CNIEG13= 0
	#define DisableCNG14              CNENGbits.CNIEG14= 0
	#define DisableCNG15              CNENGbits.CNIEG15= 0

    #endif

	/* Macros to Enable/Disable CN interrupts on PORTH*/
	
	#ifdef __CNIEH0

    #define EnableCNH0                CNENHbits.CNIEH0= 1
	#define EnableCNH1                CNENHbits.CNIEH1= 1
	#define EnableCNH2                CNENHbits.CNIEH2= 1
	#define EnableCNH3                CNENHbits.CNIEH3= 1
	#define EnableCNH4                CNENHbits.CNIEH4= 1
	#define EnableCNH5                CNENHbits.CNIEH5= 1
	#define EnableCNH6                CNENHbits.CNIEH6= 1
	#define EnableCNH7                CNENHbits.CNIEH7= 1
	#define EnableCNH8                CNENHbits.CNIEH8= 1
	#define EnableCNH9                CNENHbits.CNIEH9= 1
	#define EnableCNH10               CNENHbits.CNIEH10= 1
	#define EnableCNH11               CNENHbits.CNIEH11= 1
	#define EnableCNH12               CNENHbits.CNIEH12= 1
	#define EnableCNH13               CNENHbits.CNIEH13= 1
	#define EnableCNH14               CNENHbits.CNIEH14= 1
	#define EnableCNH15               CNENHbits.CNIEH15= 1

    #define DisableCNH0               CNENHbits.CNIEH0= 0
	#define DisableCNH1               CNENHbits.CNIEH1= 0
	#define DisableCNH2               CNENHbits.CNIEH2= 0
	#define DisableCNH3               CNENHbits.CNIEH3= 0
	#define DisableCNH4               CNENHbits.CNIEH4= 0
	#define DisableCNH5               CNENHbits.CNIEH5= 0
	#define DisableCNH6               CNENHbits.CNIEH6= 0
	#define DisableCNH7               CNENHbits.CNIEH7= 0
	#define DisableCNH8               CNENHbits.CNIEH8= 0
	#define DisableCNH9               CNENHbits.CNIEH9= 0
	#define DisableCNH10              CNENHbits.CNIEH10=0
	#define DisableCNH11              CNENHbits.CNIEH11=0
	#define DisableCNH12              CNENHbits.CNIEH12= 0
	#define DisableCNH13              CNENHbits.CNIEH13= 0
	#define DisableCNH14              CNENHbits.CNIEH14= 0
	#define DisableCNH15              CNENHbits.CNIEH15= 0

	#endif

	/* Macros to Enable/Disable CN interrupts on PORTJ*/

	#ifdef __CNIEJ0

	#define EnableCNJ0                CNENJbits.CNIEJ0= 1
	#define EnableCNJ1                CNENJbits.CNIEJ1= 1
	#define EnableCNJ2                CNENJbits.CNIEJ2= 1
	#define EnableCNJ3                CNENJbits.CNIEJ3= 1
	#define EnableCNJ4                CNENJbits.CNIEJ4= 1
	#define EnableCNJ5                CNENJbits.CNIEJ5= 1
	#define EnableCNJ6                CNENJbits.CNIEJ6= 1
	#define EnableCNJ7                CNENJbits.CNIEJ7= 1
	#define EnableCNJ8                CNENJbits.CNIEJ8= 1
	#define EnableCNJ9                CNENJbits.CNIEJ9= 1
	#define EnableCNJ10               CNENJbits.CNIEJ10= 1
	#define EnableCNJ11               CNENJbits.CNIEJ11= 1
	#define EnableCNJ12               CNENJbits.CNIEJ12= 1
	#define EnableCNJ13               CNENJbits.CNIEJ13= 1
	#define EnableCNJ14               CNENJbits.CNIEJ14= 1
	#define EnableCNJ15               CNENJbits.CNIEJ15= 1

	#define DisableCNJ0               CNENJbits.CNIEJ0= 0
	#define DisableCNJ1               CNENJbits.CNIEJ1= 0
	#define DisableCNJ2               CNENJbits.CNIEJ2= 0
	#define DisableCNJ3               CNENJbits.CNIEJ3= 0
	#define DisableCNJ4               CNENJbits.CNIEJ4= 0
	#define DisableCNJ5               CNENJbits.CNIEJ5= 0
	#define DisableCNJ6               CNENJbits.CNIEJ6= 0
	#define DisableCNJ7               CNENJbits.CNIEJ7= 0
	#define DisableCNJ8               CNENJbits.CNIEJ8= 0
	#define DisableCNJ9               CNENJbits.CNIEJ9= 0
	#define DisableCNJ10              CNENJbits.CNIEJ10=0
	#define DisableCNJ11              CNENJbits.CNIEJ11=0
	#define DisableCNJ12              CNENJbits.CNIEJ12=0
	#define DisableCNJ13              CNENJbits.CNIEJ13= 0
	#define DisableCNJ14              CNENJbits.CNIEJ14= 0
	#define DisableCNJ15              CNENJbits.CNIEJ15= 0

	#endif

    #ifdef __CNIEK11 
	
    #define EnableCNK11               CNENKbits.CNIEK11= 1
    #define EnableCNK12               CNENKbits.CNIEK12= 1
    #define EnableCNK13               CNENKbits.CNIEK13= 1
    #define EnableCNK14               CNENKbits.CNIEK14= 1
    #define EnableCNK15               CNENKbits.CNIEK15= 1


    #define EnableCNK11               CNENKbits.CNIEK11= 1
    #define EnableCNK12               CNENKbits.CNIEK12= 1
    #define EnableCNK13               CNENKbits.CNIEK13= 1
    #define EnableCNK14               CNENKbits.CNIEK14= 1
    #define EnableCNK15               CNENKbits.CNIEK15= 1
 
   #endif

#endif


/* Macros to Enable External interrupts */

#define EnableINT0              _INT0IE = 1
#define DisableINT0             _INT0IE = 0
#define SetPriorityInt0(priority)     _INT0IP = priority

/* ConfigINT0
 * Enable/disable INT0 interrupts,set priority and falling edge/rising edge
 */
void ConfigINT0(unsigned int) __attribute__ ((section (".libperi")));

/* CloseINT0
 * Disable INT0 interrupts, registers
 */
void CloseINT0() __attribute__ ((section (".libperi")));

#ifdef _INT1IF

#define EnableINT1              _INT1IE = 1
#define DisableINT1             _INT1IE = 0
#define SetPriorityInt1(priority)     _INT1IP = priority

/* ConfigINT1
 * Enable/disable INT1 interrupt,set priority and falling edge/rising edge
 */
void ConfigINT1(unsigned int) __attribute__ ((section (".libperi")));

/* CloseINT1
 * Disable INT1 interrupts, registers
 */
void CloseINT1() __attribute__ ((section (".libperi")));

#endif

#ifdef _INT2IF

#define EnableINT2              _INT2IE = 1
#define DisableINT2             _INT2IE = 0
#define SetPriorityInt2(priority)     _INT2IP = priority

/* ConfigINT2
 * Enable/disable INT2 interrupt,set priority and falling edge/rising edge
 */
void ConfigINT2(unsigned int) __attribute__ ((section (".libperi")));

/* CloseINT2
 * Disable INT2 interrupts, registers
 */
void CloseINT2() __attribute__ ((section (".libperi")));

#endif

#ifdef _INT3IF

#define EnableINT3              _INT3IE = 1
#define DisableINT3             _INT3IE = 0
#define SetPriorityInt3(priority)     _INT3IP = priority

/* ConfigINT3
 * Enable/disable INT3 interrupt,set priority and falling edge/rising edge
 */
void ConfigINT3(unsigned int) __attribute__ ((section (".libperi")));

/* CloseINT3
 * Disable INT3 interrupts, registers
 */
void CloseINT3() __attribute__ ((section (".libperi")));

#endif

#ifdef _INT4IF

#define EnableINT4              _INT4IE = 1
#define DisableINT4             _INT4IE = 0
#define SetPriorityInt4(priority)     _INT4IP = priority

/* ConfigINT4
 * Enable/disable INT4 interrupt,set priority and falling edge/rising edge
 */
void ConfigINT4(unsigned int) __attribute__ ((section (".libperi")));

/* CloseINT4
 * Disable INT4 interrupts, registers
 */
void CloseINT4() __attribute__ ((section (".libperi")));

#endif

/* Function Prototypes */

/* ConfigCNPullups
 * Enable/ disable pull up registers
 */
void ConfigCNPullups(long int) __attribute__ ((section (".libperi")));
void ConfigCNPullupsPortA(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPullupsPortB(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPullupsPortC(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPullupsPortD(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPullupsPortE(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPullupsPortF(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPullupsPortG(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPullupsPortH(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPullupsPortJ(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPullupsPortK(unsigned int) __attribute__ ((section (".libperi")));

/* ConfigCNPulldown
 * Enable/ disable pull up registers
 */
void ConfigCNPulldownPortA(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPulldownPortB(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPulldownPortC(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPulldownPortD(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPulldownPortE(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPulldownPortF(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPulldownPortG(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPulldownPortH(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPulldownPortJ(unsigned int) __attribute__ ((section (".libperi")));
void ConfigCNPulldownPortK(unsigned int) __attribute__ ((section (".libperi")));


/* ConfigIntCN
 * Enable/Disable CN interrupt and set priority
 */
void ConfigIntCN(long int) __attribute__ ((section (".libperi")));
void ConfigIntCNPortA(long int) __attribute__ ((section (".libperi")));
void ConfigIntCNPortB(long int) __attribute__ ((section (".libperi")));
void ConfigIntCNPortC(long int) __attribute__ ((section (".libperi")));
void ConfigIntCNPortD(long int) __attribute__ ((section (".libperi")));
void ConfigIntCNPortE(long int) __attribute__ ((section (".libperi")));
void ConfigIntCNPortF(long int) __attribute__ ((section (".libperi")));
void ConfigIntCNPortG(long int) __attribute__ ((section (".libperi")));
void ConfigIntCNPortH(long int) __attribute__ ((section (".libperi")));
void ConfigIntCNPortJ(long int) __attribute__ ((section (".libperi")));
void ConfigIntCNPortK(long int) __attribute__ ((section (".libperi")));
void CloseINTCN()__attribute__ ((section (".libperi")));

#endif
