#ifndef __PWRMGNT_H
#define __PWRMGNT_H

/******************************************************************************
 *
 *                  POWER MANAGEMENT PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        pwrmgnt.h
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
#if defined (pwrmgnt_v1_1) || defined (pwrmgnt_v2_1)|| defined (pwrmgnt_v2_2) || defined (pwrmgnt_v2_3) || defined (pwrmgnt_v3_1)|| defined (LIB_BUILD)
/* Source of Reset in RCON register*/
typedef enum
{
   POWER_ON_Reset, //Reset when power on
   BURN_OUT_Reset,//Reset when burn out
   WATCHDOG_Reset,//Reset when watchdog timer overflow
   SOFTWARE_Reset,//Reset due to software
   EXTERNAL_Reset,//Reset externally
#ifndef pwrmgnt_v2_1  
   CFG_WORD_MISMATCH_Reset,//Reset when configure word mis matches
#endif   
   ILLEGAL_INSTR_Reset,//Reset when illegal instruction is given
   TRAP_Reset//Reset due to trap 
}  RESET_SOURCE;//Reset source

/* Source of Reset in RCON2 register*/
typedef enum
{
   VBAT_ON_Reset,//POR exit occurs when VBAT is on
   VBPOR_ON_Reset,//VBAT POR occurs if VBPOR is ON
   VDDPOWER_ON_Reset,//Reset when VDD is high
   VDDBROWN_OUT_Reset// Reset when brown out if VDD is high 
}  RESET_SYSTEM_SOURCE;//Reset source

/* Source of Wake-Up */
typedef enum
{
   WAKEUP_SLEEP, //wakeup from sleep mode
   WAKEUP_IDLE  //wakeup from idle mode 
}  WAKEUP_SOURCE;


/*****************************************************************************/
/* OSCCON: OSCILLATOR CONTROL REGISTER Bit Configuration *********************/
/*****************************************************************************/

#define FRC_OSC                           0x0000 /*Internal oscillator */
#define FRC_OSC_WITH_POSTSCALER_PLL       0x0001 /*Internal oscillator with Postscalar PLL enabled*/
#define PRIMARY_OSC                       0x0002 /*Primary oscillator*/
#define PRIMARY_OSC_WITH_PLL              0x0003 /*Primary oscillator with PLL*/
#define SECONDRY_OSC                      0x0004 /*Secondary oscillator*/
#define LOW_POWER_RC                      0x0005 /*Low Power RC oscillator*/

#if defined(pwrmgnt_v2_1)|| defined (pwrmgnt_v2_2)|| defined (pwrmgnt_v2_3)
#define LOW_POWER_FRC_POSTSCALER          0x0006 /*Low Power FRC oscillator with postscaler*/
#endif

#define FRC_OSC_WITH_POSTSCALER           0x0007 /*Internal oscillator with postscalar*/
#define FRC_OSC_MASK                      (~FRC_OSC_WITH_POSTSCALER)

/*****************************************************************************/
/* CLKDIV: CLOCK DIVIDER REGISTER Bit Configuration **************************/
/*****************************************************************************/

#define INTR_CLEAR_DOZEN_BIT              0x8000 /*Internal oscillator clear dozen bit*/
#define INTR_NO_EFFECT_DOZEN              0x0000 /*Internal oscilltor with no effect*/
#define INTR_EFFECT_MASK                  (~INTR_CLEAR_DOZEN_BIT)

#define PERI_CLK_RATIO_128                0x7000 /*Peripheral clock ratio is 128*/
#define PERI_CLK_RATIO_64                 0x6000 /*Peripheral clock ratio is 64*/
#define PERI_CLK_RATIO_32                 0x5000 /*Peripheral clock ratio is 32*/
#define PERI_CLK_RATIO_16                 0x4000 /*Peripheral clock ratio is 16*/
#define PERI_CLK_RATIO_8                  0x3000 /*Peripheral clock ratio is 8*/
#define PERI_CLK_RATIO_4                  0x2000 /*Peripheral clock ratio is 4*/
#define PERI_CLK_RATIO_2                  0x1000 /*Peripheral clock ratio is 2*/
#define PERI_CLK_RATIO_1                  0x0000 /*Peripheral clock ratio is 1*/
#define PERI_CLK_RATIO_MASK               (~PERI_CLK_RATIO_128)

#define PERI_CLK_RATIO_ENABLE             0x0800 /*Peripheral clock ratio enabled*/
#define PERI_CLK_RATIO_SET_1              0x0000 /*Peripheral clock ratio set to 1*/
#define PERI_CLK_RATIO_ENBL_SET_MASK      (~PERI_CLK_RATIO_ENABLE)

#define FRC_POSTSCALER_SEL_256            0x0700 /*FRC postscalar select is 256*/
#define FRC_POSTSCALER_SEL_64             0x0600 /*FRC postscalar select is 64*/
#define FRC_POSTSCALER_SEL_32             0x0500 /*FRC postscalar select is 32*/
#define FRC_POSTSCALER_SEL_16             0x0400 /*FRC postscalar select is 16*/
#define FRC_POSTSCALER_SEL_8              0x0300 /*FRC postscalar select is 8*/
#define FRC_POSTSCALER_SEL_4              0x0200 /*FRC postscalar select is 4*/
#define FRC_POSTSCALER_SEL_2              0x0100 /*FRC postscalar select is 2*/
#define FRC_POSTSCALER_SEL_1              0x0000 /*FRC postscalar select is 1*/
#define FRC_POSTSCALER_SEL_MASK           (~FRC_POSTSCALER_SEL_256)

/*****************************************************************************/
/* OSCTUN :  FRC Oscillator Tune Register Bit Configuration ******************/
/*****************************************************************************/

/******************************************************************************
0b011111 = Maximum frequency deviation
0b011110 =
.
.
.
0b000001 =
0b000000 = Center frequency, oscillator is running at factory calibrated frequency
0b111111 =
.
.
.
0b100001 =
0b100000 = Minimum frequency deviation
*/

#define OSC_TUNE_REG_VAL                  0x0000 /* Center frequency */

 /******************************************************************************
 * Macro:           mPWRMGNT_RecoverOnInterrupt(polarity)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        sets ROI bitfield polarity
 *
 * Input:           polarity - 1-Interrupts clear the DOZEN bit and reset the  
 *                               CPU peripheral clock ratio to 1:1
 *                             0-Interrupts have no effect on the DOZEN bit
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_RecoverOnInterrupt(polarity)   (CLKDIVbits.ROI= polarity )

 /******************************************************************************
 * Macro:           mPWRMGNT_PeriClkRatioSelect(ratio)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        DOZE2:DOZE0: CPU Peripheral Clock Ratio Select bits
 *                               in DOZE mode
 *                  *0b111 = 1:128
 *                  *0b110 = 1:64
 *                  *0b101 = 1:32
 *                  *0b100 = 1:16
 *                  *0b011 = 1:8
 *                  *0b010 = 1:4
 *                  *0b001 = 1:2
 *                  *0b000 = 1:1
 *
 * Input:           ratio - n (n=0 to n=7)                         
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_PeriClkRatioSelect(ratio)   (CLKDIVbits.DOZE= ratio)

 /******************************************************************************
 * Macro:           mPWRMGNT_FRCPostScalerSelect(postscaler)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        RCDIV2:RCDIV0: CPU Peripheral Clock Ratio Select bits
 *                  *0b111 = 31.25 kHz (divide by 256)
 *                  *0b110 = 125 kHz (divide by 64)
 *                  *0b101 = 250 kHz (divide by 32)
 *                  *0b100 = 500 kHz (divide by 16)
 *                  *0b011 = 1 MHz (divide by 8)
 *                  *0b010 = 2 MHz (divide by 4)
 *                  *0b001 = 4 MHz (divide by 2)
 *                  *0b000 = 8 MHz (divide by 1)
 *
 * Input:           postscaler - n (n=0 to n=7)                         
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_FRCPostScalerSelect(postscaler)   (CLKDIVbits.RCDIV= postscaler)

 /******************************************************************************
 * Macro:           mPWRMGNT_FRCOscTuningBits(bits)
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:     Tunes the FRC oscillator
 *
 * Input:           bits - 0b011111 = Maximum frequency deviation                      
 *                  *0b011110 =                                                  
 *                  *.                                                           
 *                  *.                                                           
 *                  *.                                                           
 *                  *0b000001 =                                                  
 *                  *0b000000 = Center frequency, oscillator is running at factory
 *                             calibrated frequency
 *                  *0b111111 =                                                  
 *                  *.                                                           
 *                  *.                                                           
 *                  *.                                                           
 *                  *0b100001 =                                                  
 *                  *0b100000 = Minimum frequency deviation 
 *                     
 * Output:          None
 * 
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_FRCOscTuningBits(bits)   (OSCTUN= bits)

 /******************************************************************************
 * Macro:           mPWRMGNT_GetPLL_LockStatus()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:    Reads the PLL lock status
 *       
 * Input:           None         
 *
 * Output:          Returns  1 = PLL module is in lock or PLL module start-up 
 *                               timer is satisfied
 *                           0 = PLL module is out of lock, PLL start-up timer 
 *                               is running or PLL is disabled
 *
 *
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_GetPLL_LockStatus()   (OSCCONbits.LOCK)

 /******************************************************************************
 * Macro:           mPWRMGNT_GetClkFailDetectBit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Reads clock failure detect bit
 *
 * Input:           None         
 *
 * Output:          Returns  1 = FSCM has detected a clock failure
 *                           0 = No clock failure has been detected
 *
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_GetClkFailDetectBit()   (OSCCONbits.CF)

 /******************************************************************************
 * Macro:           mPWRMGNT_GotoSleepMode()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Device goes into sleep mode. Device will will wake on any  
 *                  of the  following condition satisfied 
 *                  On any interrupt source that is individually enabled
 *                  On any form of device Reset
 *                  On a WDT time-out
 * Input:           None         
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_GotoSleepMode()   asm ( " PWRSAV #0 " )

 /******************************************************************************
 * Macro:           mPWRMGNT_GotoIdleMode()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Device goes into idle mode. Device will will wake on any  
 *                  of the  following condition satisfied 
 *                  On any interrupt source that is individually enabled
 *                  On any form of device Reset
 *                  On a WDT time-out
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_GotoIdleMode()   asm ( " PWRSAV #1 " )

 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_PORbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear PowerOn Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:            This will not clear BOR bit , to clear BOR bit call the    
 *                  respective macro
 *****************************************************************************/
#define mPWRMGNT_Clear_PORbit()   (RCONbits.POR = 0)

 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_BORbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear Burn Out Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Clear_BORbit()   (RCONbits.BOR = 0)

 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_WDTObit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear Watch Dog Time Out Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Clear_WDTObit()   (RCONbits.WDTO = 0)

 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_SWRbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear Software Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Clear_SWRbit()   (RCONbits.SWR = 0)

 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_EXTRbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear External Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 * 
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Clear_EXTRbit()   (RCONbits.EXTR = 0)

#if defined(pwrmgnt_v1_1)|| defined (pwrmgnt_v2_2)|| defined (pwrmgnt_v2_3)|| defined (pwrmgnt_v3_1)

 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_CMbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear Configuration Word Mismatch Reset bit
 *
 * Input:           None         
 *
 * Output:          None        
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Clear_CMbit()   (RCONbits.CM = 0)

 #ifndef pwrmgnt_v2_3
 /******************************************************************************
 * Macro:           mPWRMGNT_Regulator_ActiveInSleep()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro sets Voltage Regulator Standby Enable bit
 *
 * Input:           None         
 *
 * Output:          None        
 *
 * Note:
 *****************************************************************************/
#define  mPWRMGNT_Regulator_ActiveInSleep()   (RCONbits.VREGS = 1)

 /******************************************************************************
 * Macro:           mPWRMGNT_Regulator_StandbyInSleep()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clears Voltage Regulator Standby Enable bit
 *
 * Input:           None         
 *
 * Output:          None        
 *
 * Note:
 *****************************************************************************/
#define  mPWRMGNT_Regulator_StandbyInSleep()   (RCONbits.VREGS = 0)
#endif

#endif

#if defined(pwrmgnt_v2_1)|| defined (pwrmgnt_v2_3)
 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_SBORENbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro disables  the BOR in software
 *
 * Input:           None         
 *
 * Output:          None        
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Clear_SBORENbit()   (RCONbits.SBOREN = 0)

 /******************************************************************************
 * Macro:           mPWRMGNT_Set_SBORENbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro enables  the BOR in software
 *
 * Input:           None         
 *
 * Output:          None        
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Set_SBORENbit()   (RCONbits.SBOREN = 1)

#endif

 #if defined(pwrmgnt_v2_1) || defined (pwrmgnt_v2_3) || defined(pwrmgnt_v3_1)
 
 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_PMSLPbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:     Disables the program memory bias voltage powered down during Sleep/Idle   
 *
 * Input:           None         
 *
 * Output:          None        
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Clear_PMSLPbit()   (RCONbits.PMSLP = 0)

 /******************************************************************************
 * Macro:           mPWRMGNT_Set_PMSLPbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        Enables program memory bias voltage powered down during Sleep/Idle   
 *
 * Input:           None         
 *
 * Output:          None        
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Set_PMSLPbit()   (RCONbits.PMSLP = 1)

 #ifndef pwrmgnt_v2_3
 /******************************************************************************
 * Macro:           mPWRMGNT_Deep_Sleep_Status()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro returns the status of Deep sleep flag  
 *
 * Input:           None         
 *
 * Output:          status of Deep sleep flag DPSLP        
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Deep_Sleep_Status()   (RCONbits.DPSLP)
#endif
#endif

 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_IOPUWRbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear Illegal Instruction Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Clear_IOPUWRbit()   (RCONbits.IOPUWR = 0)

 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_TRAPRbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear trap Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:
 *****************************************************************************/
#define mPWRMGNT_Clear_TRAPRbit()   (RCONbits.TRAPR = 0)

#if defined(pwrmgnt_v3_1)
 
 /******************************************************************************
 * Macro:           mPWRMGNT_Clear_VBATbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear VBAT Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:            This will not clear VBPOR bit , to clear BOR bit call the    
 *                  respective macro
 *****************************************************************************/
#define mPWRMGNT_Clear_VBATbit()   (RCON2bits.VBAT = 0)

/******************************************************************************
 * Macro:           mPWRMGNT_Clear_VBPORbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear VBAT Power On Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_Clear_VBPORbit()   (RCON2bits.VBPOR = 0)

/******************************************************************************
 * Macro:           mPWRMGNT_Clear_VDDPORbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear VDD Power On Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_Clear_VDDPORbit()   (RCON2bits.VDDPOR = 0)

/******************************************************************************
 * Macro:           mPWRMGNT_Clear_VDDBORbit()
 *
 * PreCondition:    None
 *
 * Side Effects:    None
 *
 * Overview:        This macro clear VDD Brown Out Reset bit
 *
 * Input:           None         
 *
 * Output:          None
 *
 * Note:            
 *****************************************************************************/
#define mPWRMGNT_Clear_VDDBORbit()   (RCON2bits.VDDBOR = 0)



#endif

#if defined (pwrmgnt_v1_1) || defined (pwrmgnt_v2_1) || defined (pwrmgnt_v2_2) || defined (pwrmgnt_v2_3)|| defined (pwrmgnt_v3_1) ||defined (LIB_BUILD)
extern WAKEUP_SOURCE __attribute__ ((section (".libperi")))PwrMgnt_WakeupSource(void) ;
extern void __attribute__ ((section (".libperi")))PwrMgnt_ClkDiv_Sel(UINT16 clk_div_config) ;
#endif

#if defined (pwrmgnt_v1_1) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define PwrMgnt_OscSel	     PwrMgnt_OscSel_v1
#define PwrMgnt_ResetSource  PwrMgnt_ResetSource_v1
#endif
extern RESET_SOURCE __attribute__ ((section (".libperi")))PwrMgnt_ResetSource_v1(void) ;
extern BOOL __attribute__ ((section (".libperi")))PwrMgnt_OscSel_v1(UINT16 new_oscsel) ;
#endif

#if defined (pwrmgnt_v2_1) || defined (pwrmgnt_v2_2) || defined (pwrmgnt_v2_3)||defined (LIB_BUILD)
#ifndef LIB_BUILD
#define PwrMgnt_OscSel	      PwrMgnt_OscSel_v2
#define PwrMgnt_ResetSource  PwrMgnt_ResetSource_v2
#endif
extern BOOL __attribute__ ((section (".libperi")))PwrMgnt_OscSel_v2(UINT16 new_oscsel) ;
extern RESET_SOURCE __attribute__ ((section (".libperi")))PwrMgnt_ResetSource_v2(void) ;
#endif

#if defined (pwrmgnt_v3_1) || defined (LIB_BUILD)
#ifndef LIB_BUILD
#define PwrMgnt_OscSel	     		PwrMgnt_OscSel_v3
#define PwrMgnt_ResetSource  		PwrMgnt_ResetSource_v3
#define PwrMgnt_ResetSystemSource  	PwrMgnt_ResetSystemSource_v3
#endif
extern RESET_SYSTEM_SOURCE __attribute__ ((section (".libperi")))PwrMgnt_ResetSystemSource_v3(void) ;
extern RESET_SOURCE __attribute__ ((section (".libperi")))PwrMgnt_ResetSource_v3(void) ;
extern BOOL __attribute__ ((section (".libperi")))PwrMgnt_OscSel_v3(UINT16 new_oscsel) ;
#endif

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif /* _PWRMGNT */

