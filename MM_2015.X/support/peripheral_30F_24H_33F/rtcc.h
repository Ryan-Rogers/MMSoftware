/******************************************************************************
 *
 *                  RTCC PERIPHERAL LIBRARY HEADER FILE
 *
 ******************************************************************************
 * FileName:        rtcc.h
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

#if defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__PIC24H__)
#include <p24Hxxxx.h>
#elif defined (__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined (__PIC24E__)
#include <p24Exxxx.h>
#endif



#ifndef __RTCC_H
#define __RTCC_H


// RTCC definitions
typedef enum
{
    RCFGCAL_MASK_RTCEN      =   0x8000,
    RCFGCAL_MASK_RTCWREN    =   0x2000,
    RCFGCAL_MASK_RTCSYNC    =   0x1000,
    RCFGCAL_MASK_HALFSEC    =   0x0800,
    RCFGCAL_MASK_RTCOE      =   0x0400,
    RCFGCAL_MASK_RTCPTR     =   0x0300,
    RCFGCAL_MASK_CAL        =   0x00FF
}RCFGCAL_MASK;
 
typedef enum
{
    ALCFGRPT_MASK_ALRMEN    =   0x8000,
    ALCFGRPT_MASK_CHIME     =   0x4000,
    ALCFGRPT_MASK_AMASK     =   0x3c00,
    ALCFGRPT_MASK_ALRMPTR   =   0x0300,
    ALCFGRPT_MASK_ARPT      =   0x00FF
}ALCFGRPT_MASK;

// accessing the RTCC/Alarm Value Register Window pointer bits
typedef enum
{
    RTCCPTR_MASK_SECMIN     =   0x0000,
    RTCCPTR_MASK_HRSWEEK    =   0x0100,
    RTCCPTR_MASK_DAYMON     =   0x0200,
    RTCCPTR_MASK_YEAR       =   0x0300   /* value reserved when used as Alarm Pointer */
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
    UINT16      w[2];       // 16 bits access
    UINT32      l;          // 32 bits access
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
    UINT16      w[2];       // 16 bits access
    UINT32      l;          // 32 bits access   
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
    UINT16      w[4];       // 16 bits access
    UINT32      l[2];       // 32 bits access
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


#define MAX_MIN         (0x59)   /* BCD codification for minutes, 00-59 */
#define MAX_SEC         (0x59)   /* BCD codification for seconds, 00-59 */
#define MAX_WDAY        (0x6)    /* BCD codification for day of the week, 00-06 */
#define MAX_HOUR        (0x24)   /* BCD codification for hours, 00-24 */
#define MAX_MON         (0x12)   /* BCD codification for month, 01-12 */
#define MIN_MON         (0x1)
#define MAX_MDAY        (0x31)   /* BCD codification for day of the month, 01-31 */
#define MIN_MDAY        (0x1)
#define MAX_YEAR        (0x99)   /* BCD codification for year, 00-99 */


#ifdef _TMR_RTCC_V1

// RTCC interface functions

// time and alarm functions

/*********************************************************************
 * Macro:          mRtccIsWrEn()
 * PreCondition:    None
 * Input:           None
 * Output:          Returns the value of RCFGCAL.RTCWREN
 * Side Effects:    None
 * Overview:        
 * Note:            None
 ********************************************************************/
#define mRtccIsWrEn()   (RCFGCALbits.RTCWREN)

/*********************************************************************
 * Macro:           mRtccWrOff()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          Macro to to clear the RCFGCAL.RTCWREN
 * Side Effects:    None
 * Overview:        
 * Note:            None
 ********************************************************************/
#define mRtccWrOff()   (RCFGCALbits.RTCWREN = 0)

/*********************************************************************
 * Macro:           mRtccIsOn()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          value of RCFGCAL.RTCEN
 * Side Effects:    None
 * Overview:        
 * Note:            None
 ********************************************************************/
#define mRtccIsOn()   (RCFGCALbits.RTCEN)

/*********************************************************************
 * Macro:           mRtccOff()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 * Overview:        Macro to turn the RTCC off
 * Note:            None
 ********************************************************************/
#define mRtccOff()   (RCFGCALbits.RTCEN=0)

/*********************************************************************
 * Macro:           mRtccOn()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 * Overview:        Macro helper to turn the RTCC on.
 * Note:            Setting RCFGCAL.RTCEN to 1 clears the RTCWREN, RTCSYNC,
 *                  HALFSEC, RTCOE and the ALCFGRPT register.
 *                  TODO: check this is TRUE for PIC24F too.
 ********************************************************************/
#define mRtccOn()   (RCFGCALbits.RTCEN=1)

/*********************************************************************
 * Macro:           mRtccIsAlrmEnabled()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          value of ALCFGRPT.ALRMEN
 * Side Effects:    None
 * Overview:        Inline helper.
 * Note:            None
 ********************************************************************/
#define mRtccIsAlrmEnabled()   (ALCFGRPTbits.ALRMEN)

/*********************************************************************
 * Macro:           mRtccAlrmEnable()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 * Overview:        Macro to set the ALCFGRPT.ALRMEN
 * Note:            None
 ********************************************************************/
#define mRtccAlrmEnable()   (ALCFGRPTbits.ALRMEN=1)

/*********************************************************************
 * Macro:           mRtccAlrmDisable()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 * Overview:        Macro to clear the ALCFGRPT.ALRMEN.
 * Note:            None
 ********************************************************************/
#define mRtccAlrmDisable()   (ALCFGRPTbits.ALRMEN=0)

/*********************************************************************
 * Macro:           mRtccIsSync()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          TRUE if sync asserted, FALSE otherwise.
 * Side Effects:    None
 * Overview:        Macro read the status of the sync signal.
 * Note:            None
 ********************************************************************/
#define mRtccIsSync()   (RCFGCALbits.RTCSYNC)

/*********************************************************************
 * Macro:           mRtccWaitSync()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 * Overview:        Macro to wait until RCFGCAL.RTCSYNC signals read/write is safe.
 * Note:            In order to be sure that the write/read op is safe, interrupts should be disabled
 *                  or kept very short (worst case scenario, sync can be asserted for 32 RTCC clocks,
 *                  i.e. almost 1ms, so it's not advisable to disable the interrupts for such a long period
 *                  of time. Care must be taken under these circumstances).
 ********************************************************************/
#define mRtccWaitSync()   while((BOOL)RCFGCALbits.RTCSYNC)

/*********************************************************************
 * Macro:           mRtccIs2ndHalfSecond()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          TRUE if it's the second half period of a second, FALSE otherwise.
 * Side Effects:    None
 * Overview:        Macro to read the half-second status bit.
 * Note:            None
 ********************************************************************/
#define mRtccIs2ndHalfSecond()   (RCFGCALbits.HALFSEC)

/*********************************************************************
 * Macro:           mRtccClearRtcPtr()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 * Overview:        Macro to clear the RTCC Value Register Window Pointer bits.
 * Note:            It sets the pointer to the min/sec slot
 ********************************************************************/
#define mRtccClearRtcPtr()   (RCFGCAL&=~RCFGCAL_MASK_RTCPTR)

/*********************************************************************
 * Macro:           mRtccSetRtcPtr(mask)
 *
 * PreCondition:    mask has to be valid member of the RTCCPTR_MASK
 * Input:           mask : enum RTCCPTR_MASK defined in "Rtcc.h" , value of the
 *                         pointer mask 
 * Output:          None
 * Side Effects:    None
 * Overview:        Macro to set the RTCC Value Register Window Pointer
 *                  bits to the desired value.
 * Note:            macro mRtccClearRtcPtr() must be called prior to this macro
 ********************************************************************/
#define mRtccSetRtcPtr(mask)   (RCFGCAL|=mask)

/*********************************************************************
 * Macro:           mRtccSetAlrmPtr(mask)
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 * Overview:        Macro to set the Alarm Value Register Window Pointer bits.
 * Note:            It sets the pointer to the slot beyond the ALRMDAY.
 *                  Macro mRtccClearAlrmPtr() must be called prior to this macro.
********************************************************************/
#define mRtccSetAlrmPtr(mask)   (ALCFGRPT |= mask)

/*********************************************************************
 * Macro:           mRtccClearAlrmPtr()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 * Overview:        Macro to clear the Alarm Value Register Window Pointer bits.
 * Note:            None
 ********************************************************************/
#define mRtccClearAlrmPtr()   (ALCFGRPT&=~ALCFGRPT_MASK_ALRMPTR)


/*********************************************************************
 * Macro :          mRtccGetChimeEnable()
 *
 * PreCondition:    None
 * Input:           None
 * Output:          current status of the alarm chime
 * Side Effects:    None
 * Overview:        The Macro  returns the chime alarm of the RTCC device.
 * Note:            None
 ********************************************************************/
#define mRtccGetChimeEnable()   (ALCFGRPTbits.CHIME)

/*********************************************************************
 * Macro :          mRtccGetCalibration()
 *
 * PreCondition:    None 
 * Input:           None 
 * Output:          Current value of the RTCC calibration field.
 * Side Effects:    None
 * Overview:        The Macro  returns the value that the RTCC uses in the
 *                  auto-adjust feature, once every minute.
 *                  The calibration value is a signed 10 bits value, [-512, +511].
 * Note:            None
 ********************************************************************/
#define mRtccGetCalibration()   (RCFGCALbits.CAL)

/*********************************************************************
 * Macro :          mRtccSetClockOe(enable)
 *
 * PreCondition:    None 
 * Input:           enable  - the desired status of the Output Enable pin 
 * Output:          None
 * Side Effects:    None
 * Overview:        The Macro enables/disables the Output Enable pin of the RTCC. 
 * Note:            None
 ********************************************************************/
#define mRtccSetClockOe(enable)   (RCFGCALbits.RTCOE=enable)

/*********************************************************************
 * Macro :          mRtccGetClockOe()
 *
 * PreCondition:    None 
 * Input:           None 
 * Output:          1 if Output Enable is enabled, 0 otherwise.
 * Side Effects:    None
 * Overview:        The Macro  returns the enabled/disabled status of the Output Enable pin
 *                  of the RTCC. 
 * Note:            None
 ********************************************************************/
#define mRtccGetClockOe()   (RCFGCALbits.RTCOE)

/*********************************************************************
 * Macro :          mRtccSetInt(enable)
 *
 * PreCondition:    None
 * Input:           enable      - enable/disable the interrupt
 * Output:          None
 * Side Effects:    None
 * Overview:        This Macro  enables/disables the RTCC event interrupts.
 * Note:            None.
 ********************************************************************/
#define mRtccSetInt(enable)   (IEC3bits.RTCIE=enable)

/*********************************************************************
 * Macro :          mRtccSetIntPriority(pri)
 * PreCondition:    None
 * Input:           pri         - the interrupt priority
 * Output:          None
 * Side Effects:    None
 * Overview:        This Macro  sets the RTCC event interrupt priority.
 * Note:            None.
 ********************************************************************/
#define mRtccSetIntPriority(pri)   (IPC15bits.RTCIP=pri)

/*********************************************************************
 * Macro:           mRtccGetAlarmRpt()
 *
 * PreCondition:    None 
 * Input:           None 
 * Output:          The value of the current alarm repeat rate.
 * Side Effects:    None
 * Overview:        The macro returns the current RTCC alarm repeat rate.
 * Note:            None
 ********************************************************************/
#define mRtccGetAlarmRpt()   (ALCFGRPTbits.AMASK)

/*********************************************************************
 * Macro:           mRtccGetAlarmRptCount()
 *
 * PreCondition:    None 
 * Input:           None 
 * Output:          the current alarm repeat count
 * Side Effects:    None
 * Overview:        The macro reads the RTCC alarm repeat counter.
 * Note:            None
 ********************************************************************/
#define mRtccGetAlarmRptCount()   ((UINT8)ALCFGRPTbits.ARPT)

/*********************************************************************
  * Macro:           mRtccGetCalibration()
 *
 * PreCondition:    None 
 * Input:           None 
 * Output:          Current value of the RTCC calibration field.
 * Side Effects:    None
 * Overview:        The macro returns the value that the RTCC uses in the
 *                  auto-adjust feature, once every minute.
 *                  The calibration value is a signed 8 bits value.
 * Note:            None
 ********************************************************************/
#define mRtccGetCalibration()   (RCFGCALbits.CAL)

/* Function Prototypes */
/*********************************************************************
 * Function:        void RtccInitClock(void)
 *
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 * Overview:        The function initializes the RTCC device. It starts the RTCC clock,
 *                  sets the RTCC Off and disables RTCC write. Disables the OE.
 * Note:            None
 ********************************************************************/
extern void RtccInitClock(void) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccReadAlrmDate(rtccDate* pDt)
 *
 * PreCondition:    pDt a valid pointer
 * Input:           pDt - pointer to a rtccDate union to store the alarm Date
 * Output:          None
 * Side Effects:    None
 * Overview:        The function updates the user supplied union/structure with
 *                  the current alarm Date of the RTCC device.
 ********************************************************************/
extern void RtccReadAlrmDate(rtccDate* pDt) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccReadAlrmTime(rtccTime* pTm)
 *
 * PreCondition:    pTm a valid pointer
 * Input:           pTm - pointer to a rtccTime union to store the alarm time
 * Output:          None
 * Side Effects:    None
 * Overview:        The function updates the user supplied union/structure with
 *                  the current alarm time of the RTCC device.
 ********************************************************************/
extern void RtccReadAlrmTime(rtccTime* pTm) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccReadAlrmTimeDate(rtccTimeDate* pTD)
 *
 * PreCondition:    None
 * Input:           pTD - pointer to a rtccTimeDate union to store the alarm time and date
 * Output:          None
 * Side Effects:    None
 * Overview:        The function updates the user supplied union/structure with
 *                  the current alarm time and date of the RTCC device.
 * Note:            None
 ********************************************************************/
extern void RtccReadAlrmTimeDate(rtccTimeDate* pTD) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccReadDate(rtccDate* pDt)
 *
 * PreCondition:    pDt a valid pointer
 * Input:           pDt - pointer to a rtccTime union to store the current time
 * Output:          None
 * Side Effects:    None
 * Overview:        The function updates the user supplied union/structure with
 *                  the current time of the RTCC device.
 * Note:            - The function makes sure that the read value is valid.
 *                  It avoids waiting for the RTCSYNC to be clear by 
 *                  performing successive reads.
 ********************************************************************/
extern void RtccReadDate(rtccDate* pDt) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccReadTime(rtccTime* pTm)
 *
 * PreCondition:    pTm a valid pointer
 * Input:           pTm - pointer to a rtccTime union to store the current time
 * Output:          None
 * Side Effects:    None
 * Overview:        The function updates the user supplied union/structure with
 *                  the current time of the RTCC device.
 * Note:            - The function makes sure that the read value is valid.
 *                  It avoids waiting for the RTCSYNC to be clear by 
 *                  performing successive reads.          
 ********************************************************************/
extern void RtccReadTime(rtccTime* pTm) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccReadTimeDate(rtccTimeDate* pTD)
 *
 * PreCondition:    None
 * Input:           pTD - pointer to a rtccTimeDate union to store the current 
 *                        time and date
 * Output:          None
 * Side Effects:    None
 * Overview:        The function updates the user supplied union/structure with
 *                  the current time and date of the RTCC device.
 * Note:            This firmware solution would consist of reading each       
 *                  register twice and then comparing the two values. If the   
 *                  two values match, then a rollover did not occur.
 ********************************************************************/
extern void RtccReadTimeDate(rtccTimeDate* pTD) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccSetAlarmRpt(rtccRepeat rpt, BOOL dsblAlrm)
 *
 * PreCondition:    rpt has to be a proper rtccRepeat enumeration value 
 * Input:           rpt         - value of the desired alarm repeat rate 
 *                  dsblAlrm    - if TRUE, the API can temporarily disable
 *                                the alarm when changing the RPT value 
 * Output:          None
 * Side Effects:    None
 * Overview:        The function sets the RTCC alarm repeat rate.
 * Note:            If alarm is enabled, changing the repeat rate can be safely made
 *                  only when the sync pulse is unasserted. To avoid waiting for the sync
 *                  pulse, the user can choose to temporarily disable the alarm and then
 *                  re-enable it. This means that the user has the knowledge that an alarm
 *                  event is not imminent.
 ********************************************************************/
extern void RtccSetAlarmRpt(rtccRepeat rpt, BOOL dsblAlrm) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccSetAlarmRptCount(int rptCnt, BOOL dsblAlrm)
 *
 * PreCondition:    rptCnt has to be a value less then 255 
 * Input:           rpt         - value of the desired alarm repeat rate 
 *                  dsblAlrm    - if TRUE, the API can temporarily disable
 *                                the alarm when changing the RPT value 
 * Output:          None
 * Side Effects:    None
 * Overview:        The function sets the RTCC alarm repeat count.
 * Note:            - rptCnt will be truncated to fit into 8 bit representation.
 *                  - If alarm is enabled, changing the repeat count can be safely made
 *                  only when the sync pulse is unasserted. To avoid waiting for the sync
 *                  pulse, the user can choose to temporarily disable the alarm and then
 *                  re-enable it. This means that the user has the knowledge that an alarm
 *                  event is not imminent.
 ********************************************************************/
extern void RtccSetAlarmRptCount(UINT8 rptCnt, BOOL dsblAlrm) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccSetCalibration(int drift)
 *
 * PreCondition:    drift has to fit into signed 8 bits representation 
 * Input:           drift   - value to be added/subtracted to perform calibration 
 * Output:          None
 * Side Effects:    None
 * Overview:        The function updates the value that the RTCC uses in the
 *                  auto-adjust feature, once every minute.
 *                  The drift value acts as a signed value, [-128*4, +127*4], 0 not having
 *                  any effect.
 * Note:            - Writes to the RCFGCAL.CAL[7:0] register should  only occur when the timer
 *                  is turned off or immediately or after the edge of the seconds pulse
 *                  (except when SECONDS=00 - due to the possibility of the auto-adjust event).
 *                  In order to speed-up the process, the API function performs the reading
 *                  of the HALFSEC field.
 *                  - The function may block for half a second, worst case, when called
 *                  at the start of the minute.
 *                  - Interrupts can not be disabled for such a long period. However, long interrupt routines
 *                  can interfere with the proper functioning of the device. Care must be taken.
 ********************************************************************/
extern void RtccSetCalibration(int drift) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccSetChimeEnable(BOOL enable, BOOL dsblAlrm)
 *
 * PreCondition:    None
 * Input:           enable      - boolean to enable/disable the RTCC chime
 *                  dsblAlrm    - if TRUE, the API can temporarily disable
 *                                the alarm when changing the Chime status 
 * Output:          None
 * Side Effects:    None
 * Overview:        The function enables/disables the chime alarm of the RTCC device.
 * Note:            If alarm is enabled, changing the chime status can be safely made
 *                  when the sync pulse is unasserted. To avoid waiting for the sync
 *                  pulse, the user can choose to temporarily disable the alarm and then
 *                  re-enable it. This means that the user has knowledge that an alarm
 *                  event is not imminent.
 ********************************************************************/
extern void RtccSetChimeEnable(BOOL enable, BOOL dsblAlrm) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccWriteAlrmDate(const rtccDate* pDt)
 *
 * PreCondition:    pDt a valid rtccDate pointer having proper values:
 *                      - wday: BCD codification, 00-06 
 *                      - mday: BCD codification, 01-31
 *                      - mon: BCD codification, 01-12
 * Input:           pDt - pointer to a constant rtccDate union
 * Output:          None
 * Side Effects:    None
 * Overview:        The function sets the alarm date in the RTCC device.
 * Note:            - The write is successful only if Wr Enable is set.
 *                  The function will enable the write itself, if needed.
 *                  Also, the Alarm will be temporarily disabled in order
 *                  to safely perform the update of the ALRMTIME register.
 *                  However, the device status will be restored.
 * 
 *                  - Note that the alarm date does not contain a year field.
 ********************************************************************/
extern BOOL RtccWriteAlrmDate(const rtccDate* pDt) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccWriteAlrmTime(const rtccTime* pTm)
 *
 * PreCondition:    pTm a valid rtccTime pointer having proper values:
 *                      - sec:  BCD codification, 00-59 
 *                      - min:  BCD codification, 00-59
 *                      - hour: BCD codification, 00-24
 * Input:           pTm - pointer to a constant rtccTime union
 * Output:          None
 * Side Effects:    None
 * Overview:        The function sets the current time in the RTCC device.
 * Note:            - The write is successful only if Wr Enable is set.
 *                  The function will enable the write itself, if needed.
 *                  Also, the Alarm will be temporarily disabled in order
 *                  to safely perform the update of the ALRMTIME register.
 *                  However, the device status will be restored.
 *                  - This API function is not efficient when accessing the PIC24F RTCC.
 ********************************************************************/
extern BOOL RtccWriteAlrmTime(const rtccTime* pTm) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccWriteAlrmTimeDate(const rtccTimeDate* pTD)
 *
 * PreCondition:    rtccTimeDate structure fields have to have proper values:
 *                      - sec:  BCD codification, 00-59 
 *                      - min:  BCD codification, 00-59
 *                      - hour: BCD codification, 00-24
 *                      - wday: BCD codification, 00-06 
 *                      - mday: BCD codification, 01-31
 *                      - mon: BCD codification, 01-12
 * Input:           pTD - pointer to a constant rtccTimeDate union
 * Output:          TRUE '1' : If all the values are within range
 *                  FALSE '0' : If any value is out of above mentioned range.
 * Side Effects:    None
 * Overview:        The function sets the current alarm time and date in the RTCC device.
 * Note:            - Note that the alarm time does not contain a year field.
 ********************************************************************/
extern BOOL RtccWriteAlrmTimeDate(const rtccTimeDate* pTD) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        BOOL RtccWriteDate(const rtccDate* pDt, BOOL di)
 *
 * PreCondition:    pDt is a valid rtccDate pointer having proper values:
 *                      - wday: BCD codification, 00-06 
 *                      - mday: BCD codification, 01-31
 *                      - mon: BCD codification, 01-12
 *                      - year: BCD codification, 00-99
 * Input:           pDt - pointer to a constant rtccDate union
 *                  di  - if interrupts need to be disabled
 * Output:          TRUE '1' : If all the values are within range
 *                  FALSE '0' : If any value is out of above mentioned range.
 * Side Effects:    None
 * Overview:        The function sets the current date of the RTCC device.
 * Note:            - The write is successful only if Wr Enable is set.
 *                  The function will enable the write itself, if needed.
 *                  Also, the Alarm will be temporarily disabled and the
 *                  device will be stopped (On set to 0) in order
 *                  to safely perform the update of the RTC time register.
 *                  However, the device status will be restored.
 *                  - Usually the disabling of the interrupts is desired, if the user has to have more
 *                  precise control over the actual moment of the time setting.
 ********************************************************************/
extern BOOL RtccWriteDate(const rtccDate* pDt , BOOL di) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        BOOL RtccWriteTime(const rtccTime* pTm, BOOL di)
 *
 * PreCondition:    pTm pointing to a valid rtccTime structure having proper values:
 *                      - sec:  BCD codification, 00-59 
 *                      - min:  BCD codification, 00-59
 *                      - hour: BCD codification, 00-24
 * Input:           pTm - pointer to a constant rtccTime union
 *                  di  - if interrupts need to be disabled
 * Output:          TRUE '1' : If all the values are within range
 *                  FALSE '0' : If any value is out of above mentioned range.
 * Side Effects:    None
 * Overview:        The function sets the current time of the RTCC device.
 * Note:            - The write is successful only if Wr Enable is set.
 *                  The function will enable the write itself, if needed.
 *                  Also, the Alarm will be temporarily disabled and the
 *                  device will be stopped (On set to 0) in order
 *                  to safely perform the update of the RTC time register.
 *                  However, the device status will be restored.
 *                  - Usually the disabling of the interrupts is desired, if the user has to have more
 *                  precise control over the actual moment of the time setting.
 ********************************************************************/
extern BOOL RtccWriteTime(const rtccTime* pTm , BOOL di) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccWriteTimeDate(const rtccTimeDate* pTD)
 *
 * PreCondition:    rtccTimeDate structure fields have to have proper values:
 *                      - sec:  BCD codification, 00-59 
 *                      - min:  BCD codification, 00-59
 *                      - hour: BCD codification, 00-24
 *                      - wday: BCD codification, 00-06 
 *                      - mday: BCD codification, 01-31
 *                      - mon: BCD codification, 01-12
 *                      - year: BCD codification, 00-99
 * Input:           pTD - pointer to a rtccTimeDate union to store the current 
 *                        time and date
 *                  di  - if interrupts need to be disabled
 * Output:          TRUE '1' : If all the values are within range
 *                  FALSE '0' : If any value is out of above mentioned range.
 * Side Effects:    None
 * Overview:        The function sets the current time and date of the RTCC device.
 * Note:            - The write is successful only if Wr Enable is set.
 *                  The function will enable the write itself, if needed.
 *                  Also, the Alarm will be temporarily disabled and the
 *                  device will be stopped (On set to 0) in order
 *                  to safely perform the update of the RTC time register.
 *                  However, the device status will be restored.
 *                  - Usually the disabling of the interrupts is desired, if the user has to have more
 *                  precise control over the actual moment of the time setting.
 ********************************************************************/
extern BOOL RtccWriteTimeDate(const rtccTimeDate* pTD , BOOL di) __attribute__ ((section (".libperi")));

/*********************************************************************
 * Function:        void RtccWrOn(void)
 *
 * PreCondition:    None
 * Input:           None
 * Output:          None
 * Side Effects:    None
 * Overview:        Function to set the RCFGCAL.RTCWREN.
 * Note:            The interrupts are disabled in order to have a proper device initialization
 ********************************************************************/
extern void RtccWrOn(void) __attribute__ ((section (".libperi")));

#else
#warning "Does not build for _TMR_RTCC_V1"
#endif /* _TMR_RTCC_V1 */



#endif /* __RTCC_H */
