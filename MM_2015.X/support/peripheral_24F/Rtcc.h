#ifndef __RTCC24_H
#define __RTCC24_H

/******************************************************************************
 *
 *                  RTCC PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        rtcc.h
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
#if defined (rtcc_v1_1) || defined (rtcc_v1_2) || defined (rtcc_v1_3) || defined (LIB_BUILD)

// RTCC definitions
typedef enum
{
    RCFGCAL_MASK_RTCEN      =   0x8000, 
    RCFGCAL_MASK_FRZ        =   0x4000,
    RCFGCAL_MASK_RTCWREN    =   0x2000,
    RCFGCAL_MASK_RTCSYNC    =   0x1000,
    RCFGCAL_MASK_HALFSEC    =   0x0800,
    RCFGCAL_MASK_RTCOE      =   0x0400,
    RCFGCAL_MASK_RTCPTR     =   0x0300,
    RCFGCAL_MASK_CAL        =   0x00ff
}RCFGCAL_MASK;

//Alarm definitions
typedef enum
{
    ALCFGRPT_MASK_ALRMEN    =   0x8000,
    ALCFGRPT_MASK_CHIME     =   0x4000,
    ALCFGRPT_MASK_AMASK     =   0x3c00,
    ALCFGRPT_MASK_ALRMPTR   =   0x0300,
    ALCFGRPT_MASK_ARPT      =   0x00ff
}ALCFGRPT_MASK;

// accessing the RTCC/Alarm Value Register Window pointer bits
typedef enum
{
    RTCCPTR_MASK_SECMIN     =   0x0000,
    RTCCPTR_MASK_HRSWEEK    =   0x0100,
    RTCCPTR_MASK_DAYMON     =   0x0200,
    RTCCPTR_MASK_YEAR       =   0x0300   
}RTCCPTR_MASK;


// union/structure for read/write of time into the RTCC device
typedef union
{ 
    struct
    {
        BYTE    rsvd;       // reserved for future use
        BYTE    sec;        // BCD codification for seconds, 00-59
        BYTE    min;        // BCD codification for minutes, 00-59
        BYTE    hour;       // BCD codification for hours, 00-24
    }f;                     // field access
    BYTE        b[4];       // BYTE access
    unsigned short int      w[2];       // 16 bits access
    unsigned long int      l;          // 32 bits access
}rtccTime;

// union/structure for read/write of date into the RTCC device
typedef union
{
    struct
    {
        BYTE    wday;       // BCD codification for day of the week, 00-06
        BYTE    mday;       // BCD codification for day of the month, 01-31
        BYTE    mon;        // BCD codification for month, 01-12
        BYTE    year;       // BCD codification for years, 00-99
    }f;                     // field access
    BYTE        b[4];       // BYTE access
    unsigned short int      w[2];       // 16 bits access
    unsigned long int      l;          // 32 bits access   
}rtccDate;


// union/structure for read/write of time and date from/to the RTCC device
typedef union
{ 
    struct
    {
        BYTE    year;       // BCD codification for year, 00-99
        BYTE    rsvd;       // reserved for future use
        BYTE    mday;       // BCD codification for day of the month, 01-31
        BYTE    mon;        // BCD codification for month, 01-12
        BYTE    hour;       // BCD codification for hours, 00-24
        BYTE    wday;       // BCD codification for day of the week, 00-06   
        BYTE    sec;        // BCD codification for seconds, 00-59 
        BYTE    min;        // BCD codification for minutes, 00-59
    }f;                     // field access
    BYTE        b[8];       // BYTE access
    unsigned short int      w[4];       // 16 bits access
    unsigned long int      l[2];       // 32 bits access
}rtccTimeDate;



// valid values of alarm repetition for the RTCC device
typedef enum
{
    RTCC_RPT_HALF_SEC,      // repeat alarm every half second
    RTCC_RPT_SEC,           // repeat alarm every second
    RTCC_RPT_TEN_SEC,       // repeat alarm every ten seconds
    RTCC_RPT_MIN,           // repeat alarm every minute
    RTCC_RPT_TEN_MIN,       // repeat alarm every ten minutes
    RTCC_RPT_HOUR,          // repeat alarm every hour          
    RTCC_RPT_DAY,           // repeat alarm every day
    RTCC_RPT_WEEK,          // repeat alarm every week
    RTCC_RPT_MON,           // repeat alarm every month
    RTCC_RPT_YEAR           // repeat alarm every year (except when configured for Feb 29th.) 
}rtccRepeat;


#define MAX_MIN         	(0x59)/* BCD codification for minutes, 00-59 */
#define MAX_SEC         	(0x59) /* BCD codification for seconds, 00-59 */
#define MAX_WDAY        	(0x6)/* BCD codification for day of the week, 00-06 */
#define MAX_HOUR        	(0x24)/* BCD codification for hours, 00-24 */
#define MAX_MON         	(0x12)/* BCD codification for month, 01-12 */
#define MIN_MON         	(0x1)/* BCD codification for month, 0-1 */
#define MAX_MDAY        	(0x31) /* BCD codification for day of the month, 01-31 */
#define MIN_MDAY        	(0x1)/* BCD codification for day of the month, 0-1 */
#define MAX_YEAR        	(0x99)/* BCD codification for year, 00-99 */

 /*********************************************************************
 * Macro:           mRtccIsWrEn()
 * PreCondition:    None
 * Side Effects:    None
 * Overview:   Returns the value of RCFGCAL.RTCWREN.  
 * Input:           None
 * Output:          Returns the value of RCFGCAL.RTCWREN.         
 * Note:            None
 ********************************************************************/

#define mRtccIsWrEn()   (RCFGCALbits.RTCWREN)


 /*********************************************************************
 * Macro:           mRtccWrOff() 
 * PreCondition:    None
 * Side Effects:    None
 * Overview:   Macro to to clear the RCFGCAL.RTCWREN.
 * Input:           None
 * Output:          Macro to to clear the RCFGCAL.RTCWREN.
 * Note:            None
 ********************************************************************/

#define mRtccWrOff()   (RCFGCALbits.RTCWREN = 0)


 /*********************************************************************
 * Macro:           mRtccIsOn() 
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro to turn the RTCC on. 
 * Input:           None
 * Output:          value of RCFGCAL.RTCEN 
 * Note:            None
 ********************************************************************/
#define mRtccIsOn()   (RCFGCALbits.RTCEN)


 /*********************************************************************
 * Macro:           mRtccOff() 
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro to turn the RTCC off.
 * Input:           None
 * Output:          None 
 * Note:            None
 ********************************************************************/

#define mRtccOff()   (RCFGCALbits.RTCEN=0)


 /*********************************************************************
 * Macro:           mRtccOn() 
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro helper to turn the RTCC on.
 * Input:           None
 * Output:          None 
 * Note:            Setting RCFGCAL.RTCEN to 1 clears the RTCWREN, RTCSYNC,
 *                  HALFSEC, RTCOE and the ALCFGRPT register.
 *                  TODO: check this is TRUE for PIC24F too.
 ********************************************************************/

#define mRtccOn()   (RCFGCALbits.RTCEN=1)

 /*********************************************************************
 * Macro:           mRtccIsSync()
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro read the status of the sync signal.
 * Input:           None
 * Output:          TRUE if sync asserted, FALSE otherwise.
 * Note:            None
 ********************************************************************/

#define mRtccIsSync()   (RCFGCALbits.RTCSYNC)


 /*********************************************************************
 * Macro:           mRtccWaitSync()
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro to wait until RCFGCAL.RTCSYNC signals read/write is safe.
 * Input:           None
 * Output:          None 
 * Note:            In order to be sure that the write/read op is safe, interrupts 
 *                  should be disabled or kept very short (worst case scenario, sync
 *                  can be asserted for 32 RTCC clocks,i.e. almost 1ms, so it's not 
 *                  advisable to disable the interrupts for such a long period
 *                  of time. Care must be taken under these circumstances).
 ********************************************************************/
#define mRtccWaitSync()   while((BOOL)RCFGCALbits.RTCSYNC)


 /*********************************************************************
 * Macro:           mRtccIs2ndHalfSecond() 
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro to read the half-second status bit.
 * Input:           None
 * Output:          TRUE if it's the second half period of a second, FALSE otherwise. 
 * Note:            None
 ********************************************************************/

#define mRtccIs2ndHalfSecond()   (RCFGCALbits.HALFSEC)


 /*********************************************************************
 * Macro:           mRtccClearRtcPtr()
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro to clear the RTCC Value Register Window Pointer bits.
 * Input:           None
 * Output:          None 
 * Note:            It sets the pointer to the min/sec slot
 ********************************************************************/

#define mRtccClearRtcPtr()   (RCFGCAL&=~RCFGCAL_MASK_RTCPTR)


 /*********************************************************************
 * Macro:           mRtccSetRtcPtr(mask)
 * PreCondition:    mask has to be valid member of the RTCCPTR_MASK
 * Side Effects:    None
 * Overview:        Macro to set the RTCC Value Register Window Pointer
 *                  bits to the desired value.
 * Input:           mask : enum RTCCPTR_MASK defined in "Rtcc.h" , value of the
 *                         pointer mask 
 * Output:          None 
 * Note:            macro mRtccClearRtcPtr() must be called prior to this macro
 ********************************************************************/

#define mRtccSetRtcPtr(mask)   (RCFGCAL|=mask)


 /*********************************************************************
 * Macro :          mRtccGetCalibration() 
 * PreCondition:    None 
 * Side Effects:    None
 * Overview:        The Macro  returns the value that the RTCC uses in the
 *                  auto-adjust feature, once every minute.
 *                  The calibration value is a signed 10 bits value, [-512, +511].
 * Input:           None 
 * Output:          Current value of the RTCC calibration field.
 * Note:            None
 ********************************************************************/

#define mRtccGetCalibration()   (RCFGCALbits.CAL)


 /*********************************************************************
 * Macro :          mRtccSetClockOe(enable)
 * PreCondition:    None 
 * Side Effects:    None
 * Overview:        The Macro enables/disables the Output Enable pin of the RTCC. 
 * Input:           enable - the desired status of the Output Enable pin 
 * Output:          None
 * Note:            None
 ********************************************************************/

#define mRtccSetClockOe(enable)   (RCFGCALbits.RTCOE=enable)


 /*********************************************************************
 * Macro :          mRtccGetClockOe()
 * PreCondition:    None 
 * Side Effects:    None
 * Overview:        The Macro  returns the enabled/disabled status of the Output
 *                  Enable pin of the RTCC. 
 * Input:           None 
 * Output:          1 if Output Enable is enabled, 0 otherwise.
 * Note:            None
 ********************************************************************/
  
#define mRtccGetClockOe()   (RCFGCALbits.RTCOE)

#if defined (rtcc_v1_2) || defined (rtcc_v1_3)

 /*********************************************************************
 * Macro :          mRtccSetClockSource()
 * PreCondition:    None 
 * Side Effects:    None
 * Overview:        The Macro selects the clock source of the RTCC.
 * Input:           0 for SOSC, 1 for LPRC, 2 for 50Hz power-line, 3 for 60Hz power-line.
 * Output:         None.
 * Note:            None
 ********************************************************************/

#define RTCC_CLOCK_SOSC		0x00
#define RTCC_CLOCK_LPRC		0x01
#define RTCC_CLOCK_LINE50Hz	0x02
#define RTCC_CLOCK_LINE60Hz	0x03
#define mRtccSetClockSource(source)	(RTCPWCbits.RTCCLK = source)

 /*********************************************************************
 * Macro :          mRtccSetOutputSource()
 * PreCondition:    None 
 * Side Effects:    None
 * Overview:        The Macro selects the source of the RTCC output pin.
 * Input:           0 for Alarm pulse, 1 for Seconds clock, 2 for RTCC clock, 3 for Power Control.
 * Output:         None.
 * Note:            None
 ********************************************************************/

#define RTCC_OUTPUT_ALARM		0x00
#define RTCC_OUTPUT_SECONDS		0x01
#define RTCC_OUTPUT_RTCCCLK		0x02
#define RTCC_OUTPUT_POWERCONTROL	0x03
#define mRtccSetOutputSource(source)	(RTCPWCbits.RTCOUT = source)

#define RTCC_POWERCONTROL_OFF 0x0000
#define RTCC_POWERCONTROL_ON 0x8000
#define RTCC_POWERCONTROL_MASK   (~RTCC_POWERCONTROL_ON)       

#define RTCC_POWERCONTROL_ACTIVELOW 0x0000
#define RTCC_POWERCONTROL_ACTIVEHIGH 0x4000
#define RTCC_POWERCONTROL_POLARITY_MASK   (~RTCC_POWERCONTROL_ACTIVEHIGH)

#define RTCC_POWERCONTROL_STABILITY_PRESCALER_1 0x0000
#define RTCC_POWERCONTROL_STABILITY_PRESCALER_2 0x0200
#define RTCC_POWERCONTROL_STABILITY_PRESCALER_MASK   (~RTCC_POWERCONTROL_STABILITY_PRESCALER_2)

#define RTCC_POWERCONTROL_SAMPLE_PRESCALER_1 0x0000
#define RTCC_POWERCONTROL_SAMPLE_PRESCALER_2 0x0100
#define RTCC_POWERCONTROL_SAMPLE_PRESCALER_MASK   (~RTCC_POWERCONTROL_SAMPLE_PRESCALER_2)

#endif

#ifndef LIB_BUILD
#define RtccWrOn                    RtccWrOn_v1
#define RtccInitClock               RtccInitClock_v1
#define RtccSetCalibration          RtccSetCalibration_v1
#define RtccReadDate                RtccReadDate_v1
#define RtccReadAlrmDate            RtccReadAlrmDate_v1
#define RtccReadAlrmTime            RtccReadAlrmTime_v1
#define RtccReadAlrmTimeDate        RtccReadAlrmTimeDate_v1
#define RtccReadTime                RtccReadTime_v1
#define RtccReadTimeDate            RtccReadTimeDate_v1
#define RtccSetAlarmRpt             RtccSetAlarmRpt_v1
#define RtccSetAlarmRptCount        RtccSetAlarmRptCount_v1
#define RtccSetChimeEnable          RtccSetChimeEnable_v1
#define RtccWriteAlrmDate           RtccWriteAlrmDate_v1
#define RtccWriteAlrmTime           RtccWriteAlrmTime_v1
#define RtccWriteAlrmTimeDate       RtccWriteAlrmTimeDate_v1
#define RtccWriteDate               RtccWriteDate_v1
#define RtccWriteTime               RtccWriteTime_v1
#define RtccWriteTimeDate           RtccWriteTimeDate_v1
#endif

extern void __attribute__ ((section (".libperi"))) RtccWrOn_v1(void);
extern void __attribute__ ((section (".libperi"))) RtccInitClock_v1(void) ;
extern void __attribute__ ((section (".libperi"))) RtccSetCalibration_v1(int drift) ;
extern void __attribute__ ((section (".libperi"))) RtccReadDate_v1(rtccDate* pDt) ;
extern void __attribute__ ((section (".libperi"))) RtccReadAlrmDate_v1(rtccDate* pDt) ; 
extern void __attribute__ ((section (".libperi"))) RtccReadAlrmTime_v1(rtccTime* pTm); 
extern void __attribute__ ((section (".libperi"))) RtccReadAlrmTimeDate_v1(rtccTimeDate* pTD) ;
extern void __attribute__ ((section (".libperi"))) RtccReadTime_v1(rtccTime* pTm) ; 
extern void __attribute__ ((section (".libperi"))) RtccReadTimeDate_v1(rtccTimeDate* pTD) ;
extern void __attribute__ ((section (".libperi"))) RtccSetAlarmRpt_v1(rtccRepeat rpt, BOOL dsblAlrm) ; 
extern void __attribute__ ((section (".libperi"))) RtccSetAlarmRptCount_v1(unsigned char rptCnt, BOOL dsblAlrm) ; 
extern void __attribute__ ((section (".libperi"))) RtccSetChimeEnable_v1(BOOL enable, BOOL dsblAlrm) ; 
extern BOOL __attribute__ ((section (".libperi"))) RtccWriteAlrmDate_v1(const rtccDate* pDt) ; 
extern BOOL __attribute__ ((section (".libperi"))) RtccWriteAlrmTime_v1(const rtccTime* pTm) ;
extern BOOL __attribute__ ((section (".libperi"))) RtccWriteAlrmTimeDate_v1(const rtccTimeDate* pTD) ; 
extern BOOL __attribute__ ((section (".libperi"))) RtccWriteDate_v1(const rtccDate* pDt , BOOL di); 
extern BOOL __attribute__ ((section (".libperi"))) RtccWriteTime_v1(const rtccTime* pTm , BOOL di) ;
extern BOOL __attribute__ ((section (".libperi"))) RtccWriteTimeDate_v1(const rtccTimeDate* pTD , BOOL di) ;
#if defined (rtcc_v1_2) || defined (rtcc_v1_3) || defined (LIB_BUILD)
extern void __attribute__ ((section (".libperi"))) RtccInitPowerControl (unsigned int config); 
#endif
#if defined (rtcc_v1_2) || defined (LIB_BUILD)
extern void __attribute__ ((section (".libperi"))) RtccSetWindows (unsigned char stabilitywindow, unsigned char samplewindow) ; 
#endif

/*********************************************************************
 * Macro:           mRtccIsAlrmEnabled() 
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Inline helper.
 * Input:           None
 * Output:          value of ALCFGRPT.ALRMEN
 * Note:            None
 ********************************************************************/
#define mRtccIsAlrmEnabled()   (ALCFGRPTbits.ALRMEN)

 /*********************************************************************
 * Macro:           mRtccAlrmEnable() 
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro to set the ALCFGRPT.ALRMEN.
 * Input:           None
 * Output:          None 
 * Note:            None
 ********************************************************************/
#define mRtccAlrmEnable()   (ALCFGRPTbits.ALRMEN=1)

 /*********************************************************************
 * Macro:           mRtccAlrmDisable()
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro to clear the ALCFGRPT.ALRMEN.
 * Input:           None
 * Output:          None 
 * Note:            None
 ********************************************************************/
#define mRtccAlrmDisable()   (ALCFGRPTbits.ALRMEN=0)

 /*********************************************************************
 * Macro:           mRtccSetAlrmPtr(mask)
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro to set the Alarm Value Register Window Pointer bits.
 * Input:           None
 * Output:          None
 * Note:            It sets the pointer to the slot beyond the ALRMDAY
 *                  macro mRtccClearAlrmPtr() must be called prior to this macro
********************************************************************/
#define mRtccSetAlrmPtr(mask)   (ALCFGRPT |= mask)

 /*********************************************************************
 * Macro:           mRtccClearAlrmPtr() 
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        Macro to clear the Alarm Value Register Window Pointer bits.
 * Input:           None
 * Output:          None
 * Note:            It sets the pointer to the slot beyond the ALRMDAY
 ********************************************************************/
#define mRtccClearAlrmPtr()   (ALCFGRPT&=~ALCFGRPT_MASK_ALRMPTR)


 /*********************************************************************
 * Macro :          mRtccGetChimeEnable()
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        The Macro  returns the chime alarm of the RTCC device.
 * Input:           None
 * Output:          current status of the alarm chime 
 * Note:            None
 ********************************************************************/
#define mRtccGetChimeEnable()   (ALCFGRPTbits.CHIME)

 /*********************************************************************
 * Macro :          mRtccSetInt(enable)
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        This Macro  enables/disables the RTCC event interrupts.
 * Input:           enable - enable/disable the interrupt
 * Output:          None
 * Note:            None.
 ********************************************************************/
#define mRtccSetInt(enable)   (IEC3bits.RTCIE=enable)

 /*********************************************************************
 * Macro :          mRtccSetIntPriority(pri)
 * PreCondition:    None
 * Side Effects:    None
 * Overview:        This Macro  sets the RTCC event interrupt priority.
 * Input:           pri - the interrupt priority
 * Output:          None 
 * Note:            None.
 ********************************************************************/
#define mRtccSetIntPriority(pri)   (IPC15bits.RTCIP=pri)

/*******************************************************************
Macro       : mRtcc_Clear_Intr_Status_Bit

Include     : Rtcc.h 

Description : Macro to Clear RTCC Interrupt Status bit 

Arguments   : None 

Remarks     : None 
*******************************************************************/
#define mRtcc_Clear_Intr_Status_Bit     (IFS3bits.RTCIF = 0)

 /*********************************************************************
 * Macro:           mRtccGetAlarmRpt()
 * PreCondition:    None 
 * Side Effects:    None
 * Overview:        The macro returns the current RTCC alarm repeat rate.
 * Input:           None 
 * Output:          The value of the current alarm repeat rate. 
 * Note:            None
 ********************************************************************/
#define mRtccGetAlarmRpt()   (ALCFGRPTbits.AMASK)

 /*********************************************************************
 * Macro:           mRtccGetAlarmRptCount()
 * PreCondition:    None 
 * Side Effects:    None
 * Overview:        The macro reads the RTCC alarm repeat counter.
 * Input:           None 
 * Output:          the current alarm repeat count 
 * Note:            None
 ********************************************************************/
#define mRtccGetAlarmRptCount()   ((unsigned char)ALCFGRPTbits.ARPT)

#else		//This preprocessor conditional statement is to avoid unintended linking for unsuppported devices.
#warning "Does not build on this target"
#endif

#endif
