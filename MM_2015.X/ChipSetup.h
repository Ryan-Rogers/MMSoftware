/* 
 * File:   ChipSetup.h
 * Author: Jonathan Streeter
 *
 * Created on September 24, 2015, 11:58 AM
 */

#ifndef CHIPSETUP_H
#define	CHIPSETUP_H

#ifdef	__cplusplus
extern "C" {
#endif
#include    <Generic.h>
#include    <peripheralversion.h>
#include    <timer.h>
        
#define __FOSC_                 140030000
#define __FTCY_                 (__FOSC_/2)
        
void CONFIG_CLOCKHIGH(void);
void CONFIG_CLOCKLOW(void);
int CONFIG_IO(void);
void CONFIG_QEI(void);
void CONFIG_PWM(void);
void CONFIG_ADC(void);
int ADCget (int number);
//UINT16 SetupUART(void);
//int CONFIG_UART(void);

//16-bit Timer Setup routines
    extern void Timer1Setup(WORD pr1);
    extern void Timer2Setup(WORD pr2);
    extern void Timer3Setup(WORD pr3);
    extern void Timer4Setup(WORD pr4);
    extern void Timer5Setup(WORD pr5);
    extern void Timer6Setup(WORD pr6);
    extern void Timer7Setup(WORD pr7);
    extern void Timer8Setup(WORD pr8);
    extern void Timer9Setup(WORD pr9);
    
//32-bit Timer Setup routines
    extern void Timer23Setup(DWORD pr23);
    extern void Timer45Setup(DWORD pr45);
    extern void Timer67Setup(DWORD pr67);
    extern void Timer89Setup(DWORD pr89);


#define __U1BAUD_               115200
#define __BAUDUART1_            ((__FTCY_/(16*__U1BAUD_))-1)

extern void SetupUART1(void);

// UART speed configuration
//extern int BAUDRATE;
//extern long BRGVAL;   
#ifdef	__cplusplus
}
#endif

#endif	/* CHIPSETUP_H */

