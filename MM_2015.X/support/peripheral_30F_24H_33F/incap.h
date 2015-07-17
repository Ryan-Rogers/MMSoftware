/************************************************************************/
/*              Header for Input Capture module library functions       */
/************************************************************************/

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


#ifndef __INCAP_H
#define __INCAP_H

/* List of SFRs for Input Capture modules */
/* This list contains the SFRs with default (POR) values to be used for configuring Input capture modules */
/* The user can modify this based on the requirement */
#define IC1CON_VALUE            0x0000
#define IC1BUF_VALUE            0x0000
#define IC2CON_VALUE            0x0000
#define IC2BUF_VALUE            0x0000

#ifdef _IC3IF
#define IC3CON_VALUE            0x0000
#define IC3BUF_VALUE            0x0000
#endif

#ifdef _IC4IF
#define IC4CON_VALUE            0x0000
#define IC4BUF_VALUE            0x0000
#endif

#ifdef _IC5IF
#define IC5CON_VALUE            0x0000
#define IC5BUF_VALUE            0x0000
#endif

#ifdef _IC6IF
#define IC6CON_VALUE            0x0000
#define IC6BUF_VALUE            0x0000
#endif

#ifdef _IC7IF
#define IC7CON_VALUE            0x0000
#define IC7BUF_VALUE            0x0000
#endif

#ifdef _IC8IF
#define IC8CON_VALUE            0x0000
#define IC8BUF_VALUE            0x0000
#endif

#if defined(__dsPIC33E__) || defined(__PIC24E__)  

#define IC1CON1_VALUE           0x0000
#define IC1CON2_VALUE           0x0000
#define IC1BUF_VALUE            0x0000

#define IC2CON1_VALUE           0x0000
#define IC2CON2_VALUE           0x0000
#define IC2BUF_VALUE            0x0000

#ifdef _IC3IF
#define IC3CON1_VALUE           0x0000
#define IC3CON2_VALUE           0x0000
#define IC3BUF_VALUE            0x0000
#endif

#ifdef _IC4IF
#define IC4CON1_VALUE           0x0000
#define IC4CON2_VALUE           0x0000
#define IC4BUF_VALUE            0x0000
#endif

#ifdef _IC5IF
#define IC5CON1_VALUE           0x0000
#define IC5CON2_VALUE           0x0000
#define IC5BUF_VALUE            0x0000
#endif

#ifdef _IC6IF
#define IC6CON1_VALUE           0x0000
#define IC6CON2_VALUE           0x0000
#define IC6BUF_VALUE            0x0000
#endif

#ifdef _IC7IF
#define IC7CON1_VALUE           0x0000
#define IC7CON2_VALUE           0x0000
#define IC7BUF_VALUE            0x0000
#endif

#ifdef _IC8IF
#define IC8CON1_VALUE           0x0000
#define IC8CON2_VALUE           0x0000
#define IC8BUF_VALUE            0x0000
#endif

#ifdef _IC9IF
#define IC9CON1_VALUE           0x0000
#define IC9CON2_VALUE           0x0000
#define IC9BUF_VALUE            0x0000
#endif

#ifdef _IC10IF
#define IC10CON1_VALUE           0x0000
#define IC10CON2_VALUE           0x0000
#define IC10BUF_VALUE            0x0000
#endif

#ifdef _IC11IF
#define IC11CON1_VALUE           0x0000
#define IC11CON2_VALUE           0x0000
#define IC11BUF_VALUE            0x0000
#endif

#ifdef _IC12IF
#define IC12CON1_VALUE           0x0000
#define IC12CON2_VALUE           0x0000
#define IC12BUF_VALUE            0x0000
#endif

#ifdef _IC13IF
#define IC13CON1_VALUE           0x0000
#define IC13CON2_VALUE           0x0000
#define IC13BUF_VALUE            0x0000
#endif

#ifdef _IC14IF
#define IC14CON1_VALUE           0x0000
#define IC14CON2_VALUE           0x0000
#define IC14BUF_VALUE            0x0000
#endif

#ifdef _IC15IF
#define IC15CON1_VALUE           0x0000
#define IC15CON2_VALUE           0x0000
#define IC15BUF_VALUE            0x0000
#endif

#ifdef _IC16IF
#define IC16CON1_VALUE           0x0000
#define IC16CON2_VALUE           0x0000
#define IC16BUF_VALUE            0x0000
#endif

#endif


/* Input Capture Config (ICxCON Reg) Bit defines */

#define IC_IDLE_CON             0xdfff  /* IC operate in sleep mode */
#define IC_IDLE_STOP            0xffff  /* IC stop in sleep mode */



#if defined(__dsPIC33E__) || defined(__PIC24E__)  
#define IC_SYSCLK_SRC           0xffff /* system clock is the clock source for Capture */
#define IC_TIMER1_SRC           0xf3ff /* Timer1 is the clock source for Capture */
#define IC_TIMER5_SRC           0xefff /* Timer5 is the clock source for Capture */
#define IC_TIMER4_SRC           0xebff /* Timer4 is the clock source for Capture */
#define IC_TIMER2_SRC           0xe7ff /* Timer2 is the clock source for Capture */
#define IC_TIMER3_SRC           0xe3ff /* Timer3 is the clock source for Capture */
#else
#define IC_TIMER2_SRC           0xffff  /* Timer2 is the clock source for Capture */
#define IC_TIMER3_SRC           0xff7f  /* Timer3 is the clock source for Capture */
#endif

#define IC_INT_4CAPTURE         0xffff  /* Interrupt on fourth Capture*/
#define IC_INT_3CAPTURE         0xffdf  /* Interrupt on third Capture */
#define IC_INT_2CAPTURE         0xffbf  /* Interrupt on second Capture*/
#define IC_INT_1CAPTURE         0xff9f  /* Interrupt on first Capture */


#define IC_INTERRUPT            0xffff  /* Interrupt pin only in CPU sleep and idle mode */

#define IC_EVERY_16_RISE_EDGE   0xfffd  /* Every 16th rising edge */
#define IC_EVERY_4_RISE_EDGE    0xfffc  /* Every 4th rising edge  */
#define IC_EVERY_RISE_EDGE      0xfffb  /* Every rising edge      */
#define IC_EVERY_FALL_EDGE      0xfffa  /* Every falling edge      */
#define IC_EVERY_EDGE           0xfff9  /* Every rising/falling edge */
#define IC_INPUTCAP_OFF         0xfff8  /* Input Capture Off      */

#if defined(__dsPIC33E__) || defined(__PIC24E__)  
#define IC_CASCADE_ENABLE		0xffff /* Cascade Module Operation Enabled */
#define IC_CASCADE_DISABLE		0xfeff  /* Cascade Module Operation Disabled */

#define IC_TRIGGER_ENABLE 		0xffff /* Sync_trig_in[x] is used to trigger the module timer */
#define IC_SYNC_ENABLE			0xff7f /* Sync_trig_in[x] is used to sync to another module timer */

#define IC_TRIGGER_TIMER 		0xffff	/* Timer has been triggered and is running */
#define IC_UNTRIGGER_TIMER		0xffbf /* Timer not triigered and is being held in clear */

#define IC_SYNC_TRIG_IN_DISABLE 	0xffe0	/* Disables trigger operation */
#define IC_SYNC_TRIG_IN_OC1		0xffe1	/* Sync or Trigger input is OC1 */
#define IC_SYNC_TRIG_IN_OC2		0xffe2	/* Sync or Trigger input is OC2 */
#define IC_SYNC_TRIG_IN_OC3		0xffe3	/* Sync or Trigger input is OC3 */
#define IC_SYNC_TRIG_IN_OC4		0xffe4	/* Sync or Trigger input is OC4 */
#define IC_SYNC_TRIG_IN_OC5		0xffe5	/* Sync or Trigger input is OC5 */
#define IC_SYNC_TRIG_IN_OC6		0xffe6	/* Sync or Trigger input is OC6 */
#define IC_SYNC_TRIG_IN_OC7		0xffe7	/* Sync or Trigger input is OC7 */
#define IC_SYNC_TRIG_IN_OC8		0xffe8	/* Sync or Trigger input is OC8 */
#define IC_SYNC_TRIG_IN_OC9		0xffe9	/* Sync or Trigger input is OC9 */
#define IC_SYNC_TRIG_IN_PTGO		0xffea	/* Sync or Trigger input is PTGOx */
#define IC_SYNC_TRIG_IN_TMR1		0xffeb	/* Sync or Trigger input is Timer1 */
#define IC_SYNC_TRIG_IN_TMR2		0xffec	/* Sync or Trigger input is Timer2 */
#define IC_SYNC_TRIG_IN_TMR3		0xffed	/* Sync or Trigger input is Timer3 */
#define IC_SYNC_TRIG_IN_TMR4		0xffee	/* Sync or Trigger input is Timer4 */
#define IC_SYNC_TRIG_IN_TMR5		0xffef	/* Sync or Trigger input is Timer5 */
#define IC_SYNC_TRIG_IN_IC1		0xfff0	/* Sync or Trigger input is ICAP1 */
#define IC_SYNC_TRIG_IN_IC2		0xfff1	/* Sync or Trigger input is ICAP2 */
#define IC_SYNC_TRIG_IN_IC3		0xfff2	/* Sync or Trigger input is ICAP3 */
#define IC_SYNC_TRIG_IN_IC4		0xfff3	/* Sync or Trigger input is ICAP4 */
#define IC_SYNC_TRIG_IN_IC5		0xfff4	/* Sync or Trigger input is ICAP5 */
#define IC_SYNC_TRIG_IN_IC6		0xfff5	/* Sync or Trigger input is ICAP6 */
#define IC_SYNC_TRIG_IN_IC7		0xfff6	/* Sync or Trigger input is ICAP7 */
#define IC_SYNC_TRIG_IN_IC8		0xfff7	/* Sync or Trigger input is ICAP8 */
#define IC_SYNC_TRIG_IN_CMP1		0xfff8	/* Sync or Trigger input is CMP1 */
#define IC_SYNC_TRIG_IN_CMP2		0xfff9	/* Sync or Trigger input is CMP2 */
#define IC_SYNC_TRIG_IN_CMP3		0xfffa	/* Sync or Trigger input is CMP3 */
#define IC_SYNC_TRIG_IN_AD		0xfffb	/* Sync or Trigger input is AD */
#define IC_SYNC_TRIG_IN_CTMU		0xfffc	/* Sync or Trigger input is CTMU */

#endif

/* defines for IC interrupts */
#define IC_INT_ON               0xffff  /* Input Capture Enable  */
#define IC_INT_OFF              0xfff7  /* Input Capture Disable */

#define IC_INT_PRIOR_0          0xfff8  /* Input Capture PriorityLevel 0 */
#define IC_INT_PRIOR_1          0xfff9  /* Input Capture PriorityLevel 1 */
#define IC_INT_PRIOR_2          0xfffa  /* Input Capture PriorityLevel 2 */
#define IC_INT_PRIOR_3          0xfffb  /* Input Capture PriorityLevel 3 */
#define IC_INT_PRIOR_4          0xfffc  /* Input Capture PriorityLevel 4 */
#define IC_INT_PRIOR_5          0xfffd  /* Input Capture PriorityLevel 5 */
#define IC_INT_PRIOR_6          0xfffe  /* Input Capture PriorityLevel 6 */
#define IC_INT_PRIOR_7          0xffff  /* Input Capture PriorityLevel 7 */
 
#ifdef _IC1IF

#define EnableIntIC1                    _IC1IE = 1
#define DisableIntIC1                   _IC1IE = 0
#define SetPriorityIntIC1(priority)     _IC1IP = priority

/* CloseCapture 1 */
void CloseCapture1() __attribute__ ((section(".libperi")));

/* ConfigIntCapture1 */
void ConfigIntCapture1(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture1 */
#if defined(__dsPIC33E__) || defined(__PIC24E__) 
void OpenCapture1 (unsigned int, unsigned int) __attribute__ ((section (".libperi")));
#else
void OpenCapture1 (unsigned int) __attribute__ ((section (".libperi")));
#endif

/* ReadCapture1 */
void ReadCapture1(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC2IF

#define EnableIntIC2                    _IC2IE = 1
#define DisableIntIC2                   _IC2IE = 0
#define SetPriorityIntIC2(priority)     _IC2IP = priority

/* CloseCapture 2 */
void CloseCapture2() __attribute__ ((section(".libperi")));

/* ConfigIntCapture2 */
void ConfigIntCapture2(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture2 */
#if defined(__dsPIC33E__) || defined(__PIC24E__) 
void OpenCapture2 (unsigned int, unsigned int) __attribute__ ((section (".libperi")));
#else
void OpenCapture2 (unsigned int) __attribute__ ((section (".libperi")));
#endif

/* ReadCapture2 */ 
void ReadCapture2(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC3IF

#define EnableIntIC3                    _IC3IE = 1
#define DisableIntIC3                   _IC3IE = 0
#define SetPriorityIntIC3(priority)     _IC3IP = priority

/* CloseCapture 3 */
void CloseCapture3() __attribute__ ((section(".libperi")));

/* ConfigIntCapture3 */
void ConfigIntCapture3(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture3 */
#if defined(__dsPIC33E__) || defined(__PIC24E__) 
void OpenCapture3 (unsigned int, unsigned int) __attribute__ ((section (".libperi")));
#else
void OpenCapture3 (unsigned int) __attribute__ ((section (".libperi")));
#endif

/* ReadCapture3 */ 
void ReadCapture3(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC4IF

#define EnableIntIC4                    _IC4IE = 1
#define DisableIntIC4                   _IC4IE = 0
#define SetPriorityIntIC4(priority)     _IC4IP = priority

/* CloseCapture 4 */
void CloseCapture4() __attribute__ ((section(".libperi")));

/* ConfigIntCapture4 */
void ConfigIntCapture4(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture4 */
#if defined(__dsPIC33E__) || defined(__PIC24E__) 
void OpenCapture4 (unsigned int, unsigned int) __attribute__ ((section (".libperi")));
#else
void OpenCapture4 (unsigned int) __attribute__ ((section (".libperi")));
#endif

/* ReadCapture4 */
void ReadCapture4(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC5IF

#define EnableIntIC5                    _IC5IE = 1
#define DisableIntIC5                   _IC5IE = 0
#define SetPriorityIntIC5(priority)     _IC5IP = priority

/* CloseCapture 5 */
void CloseCapture5() __attribute__ ((section (".libperi")));

/* ConfigIntCapture5 */
void ConfigIntCapture5(unsigned int )  __attribute__ ((section (".libperi")));

/* OpenCapture5 */
#if defined(__dsPIC33E__) || defined(__PIC24E__) 
void OpenCapture5 (unsigned int, unsigned int) __attribute__ ((section (".libperi")));
#else
void OpenCapture5 (unsigned int) __attribute__ ((section (".libperi")));
#endif

/* ReadCapture5 */
void ReadCapture5(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC6IF

#define EnableIntIC6                    _IC6IE = 1
#define DisableIntIC6                   _IC6IE = 0
#define SetPriorityIntIC6(priority)     _IC6IP = priority

/* CloseCapture 6 */
void CloseCapture6() __attribute__ ((section (".libperi")));

/* ConfigIntCapture6 */
void ConfigIntCapture6(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture6 */
#if defined(__dsPIC33E__) || defined(__PIC24E__) 
void OpenCapture6 (unsigned int, unsigned int) __attribute__ ((section (".libperi")));
#else
void OpenCapture6 (unsigned int) __attribute__ ((section (".libperi")));
#endif

/* ReadCapture6 */
void ReadCapture6(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC7IF

#define EnableIntIC7                     _IC7IE = 1
#define DisableIntIC7                    _IC7IE = 0
#define SetPriorityIntIC7(priority)      _IC7IP = priority

/* CloseCapture 7 */
void CloseCapture7() __attribute__ ((section (".libperi"))); 

/* ConfigIntCapture7 */
void ConfigIntCapture7(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture7 */
#if defined(__dsPIC33E__) || defined(__PIC24E__) 
void OpenCapture7 (unsigned int, unsigned int) __attribute__ ((section (".libperi")));
#else
void OpenCapture7 (unsigned int) __attribute__ ((section (".libperi")));
#endif

/* ReadCapture7 */
void ReadCapture7(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC8IF

#define EnableIntIC8                     _IC8IE = 1
#define DisableIntIC8                    _IC8IE = 0
#define SetPriorityIntIC8(priority)      _IC8IP = priority

/* CloseCapture 8 */
void CloseCapture8() __attribute__ ((section (".libperi")));

/* ConfigIntCapture8 */
void ConfigIntCapture8(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture8 */
#if defined(__dsPIC33E__) || defined(__PIC24E__) 
void OpenCapture8 (unsigned int, unsigned int) __attribute__ ((section (".libperi")));
#else
void OpenCapture8 (unsigned int) __attribute__ ((section (".libperi")));
#endif

/* ReadCapture8 */
void ReadCapture8(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif


#ifdef _IC9IF

#define EnableIntIC9                     _IC9IE = 1
#define DisableIntIC9                    _IC9IE = 0
#define SetPriorityIntIC9(priority)      _IC9IP = priority

/* CloseCapture 9 */
void CloseCapture9() __attribute__ ((section (".libperi")));

/* ConfigIntCapture9 */
void ConfigIntCapture9(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture9 */
void OpenCapture9(unsigned int, unsigned int ) __attribute__ ((section (".libperi")));

/* ReadCapture9 */
void ReadCapture9(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC10IF

#define EnableIntIC10                     _IC10IE = 1
#define DisableIntIC10                    _IC10IE = 0
#define SetPriorityIntIC10(priority)      _IC10IP = priority

/* CloseCapture10 */
void CloseCapture10() __attribute__ ((section (".libperi")));

/* ConfigIntCapture10 */
void ConfigIntCapture10(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture10 */
void OpenCapture10(unsigned int, unsigned int ) __attribute__ ((section (".libperi")));

/* ReadCapture10 */
void ReadCapture10(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC11IF

#define EnableIntIC11                     _IC11IE = 1
#define DisableIntIC11                    _IC11IE = 0
#define SetPriorityIntIC11(priority)      _IC11IP = priority

/* CloseCapture11 */
void CloseCapture11() __attribute__ ((section (".libperi")));

/* ConfigIntCapture11 */
void ConfigIntCapture11(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture11 */
void OpenCapture11(unsigned int, unsigned int ) __attribute__ ((section (".libperi")));

/* ReadCapture11 */
void ReadCapture11(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC12IF

#define EnableIntIC12                     _IC12IE = 1
#define DisableIntIC12                    _IC12IE = 0
#define SetPriorityIntIC12(priority)      _IC12IP = priority

/* CloseCapture12 */
void CloseCapture12() __attribute__ ((section (".libperi")));

/* ConfigIntCapture12 */
void ConfigIntCapture12(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture12 */
void OpenCapture12(unsigned int, unsigned int ) __attribute__ ((section (".libperi")));

/* ReadCapture12 */
void ReadCapture12(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif


#ifdef _IC13IF

#define EnableIntIC13                     _IC13IE = 1
#define DisableIntIC13                    _IC13IE = 0
#define SetPriorityIntIC13(priority)      _IC13IP = priority

/* CloseCapture13 */
void CloseCapture13() __attribute__ ((section (".libperi")));

/* ConfigIntCapture13 */
void ConfigIntCapture13(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture13 */
void OpenCapture13(unsigned int, unsigned int ) __attribute__ ((section (".libperi")));

/* ReadCapture13 */
void ReadCapture13(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC14IF

#define EnableIntIC14                     _IC14IE = 1
#define DisableIntIC14                    _IC14IE = 0
#define SetPriorityIntIC14(priority)      _IC14IP = priority

/* CloseCapture14 */
void CloseCapture14() __attribute__ ((section (".libperi")));

/* ConfigIntCapture14 */
void ConfigIntCapture14(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture14 */
void OpenCapture14(unsigned int, unsigned int ) __attribute__ ((section (".libperi")));

/* ReadCapture14 */
void ReadCapture14(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC15IF

#define EnableIntIC15                     _IC15IE = 1
#define DisableIntIC15                    _IC15IE = 0
#define SetPriorityIntIC15(priority)      _IC15IP = priority

/* CloseCapture15 */
void CloseCapture15() __attribute__ ((section (".libperi")));

/* ConfigIntCapture15 */
void ConfigIntCapture15(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture15 */
void OpenCapture15(unsigned int, unsigned int ) __attribute__ ((section (".libperi")));

/* ReadCapture15 */
void ReadCapture15(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#ifdef _IC16IF

#define EnableIntIC16                     _IC16IE = 1
#define DisableIntIC16                    _IC16IE = 0
#define SetPriorityIntIC16(priority)      _IC16IP = priority

/* CloseCapture16 */
void CloseCapture16() __attribute__ ((section (".libperi")));

/* ConfigIntCapture16 */
void ConfigIntCapture16(unsigned int ) __attribute__ ((section (".libperi")));

/* OpenCapture16 */
void OpenCapture16(unsigned int, unsigned int ) __attribute__ ((section (".libperi")));

/* ReadCapture16 */
void ReadCapture16(unsigned int * buffer) __attribute__ ((section (".libperi")));

#endif

#endif  /*__INCAP_H  */
