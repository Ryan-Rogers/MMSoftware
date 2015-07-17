/* Change the following definition to match the instruction frequency 
of the application in MIPS (MHz) */

#if defined(__dsPIC33E__) || defined(__PIC24E__) 
#ifndef Fcy
#define Fcy  60000000
#endif
#endif 

#if defined(__dsPIC30F__) || defined(__dsPIC33F__) || defined(__PIC24H__) 
#ifndef Fcy
#define Fcy  40000000
#endif
#endif 

#define Delay_60nS_Cnt    (Fcy * 0.00000006)
#define Delay_150nS_Cnt   (Fcy * 0.00000015)
#define Delay_360nS_Cnt   (Fcy * 0.00000036)
#define Delay_450nS_Cnt   (Fcy * 0.00000045)
#define Delay_600nS_Cnt   (Fcy * 0.0000006)
#define Delay200uS_count  (Fcy * 0.0002)
#define Delay_1mS_Cnt     (Fcy * 0.001)
#define Delay_2mS_Cnt     (Fcy * 0.002)
#define Delay_5mS_Cnt     (Fcy * 0.005)
#define Delay_15mS_Cnt    (Fcy * 0.015)
#define Delay_1S_Cnt      (Fcy * 1)


/* delays specific to each LCD type */
/* delay btw RS/RW signal to E signal */
#define DelayRSSetupTime_Cnt     Delay_60nS_Cnt
/* delay btw E rise and Data available */
#define DelayDBOutput_Cnt        Delay_360nS_Cnt
/* min E pulse width low */
#define DelayEPulseWidthLow_Cnt  Delay_150nS_Cnt 
/* min E pulse width high */
#define DelayEPulseWidthHigh_Cnt Delay_450nS_Cnt
/* E pulse cycle time */
#define DelayEPulseWidth_Cnt     Delay_600nS_Cnt
/* min Power On Reset time */
#define DelayPORXLCD_Cnt         Delay_15mS_Cnt
/* generic delay for LCD */
#define DelayXLCD_Cnt            Delay_5mS_Cnt
