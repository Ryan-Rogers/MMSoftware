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
    
void CONFIG_CLOCKHIGH(void);
void CONFIG_CLOCKLOW(void);
int CONFIG_IO(void);
void CONFIG_QEI(void);
void CONFIG_PWM(void);
void CONFIG_ADC(void);
int ADCget (int number);
UINT16 SetupUART(void);
int CONFIG_UART(void);

// UART speed configuration
extern int BAUDRATE;
extern long BRGVAL;   
#ifdef	__cplusplus
}
#endif

#endif	/* CHIPSETUP_H */

