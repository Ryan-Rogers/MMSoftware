/*********************************************************************/
/*              Header for Reset/Control library functions           */
/*********************************************************************/

#if defined(__dsPIC30F__)
#include <p30Fxxxx.h>
#elif defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined(__PIC24H__)
#include <p24Hxxxx.h>
#elif defined(__PIC24E__)
#include <p24Exxxx.h>
#endif 



#ifndef __RESET_H
#define __RESET_H

/* disable interrupts for the given number of cycles */
#define DisableInterrupts(cycles) __builtin_disi(cycles)

/* macros for POR and BOR resets */
#define PORStatReset               RCONbits.POR = 1
#define BORStatReset               RCONbits.BOR = 1

/* macros to enable/ disable WDT in software */
#define WDTSWEnable                RCONbits.SWDTEN = 1
#define WDTSWDisable               RCONbits.SWDTEN = 0

/* macros for internal regulator enable/disable */ 
#ifdef _VREGS

#define VREGSEnable                RCONbits.VREGS = 1
#define VREGSDisable               RCONbits.VREGS = 0

#endif

/* macros for flash power saving enable/disable */ 
#ifdef _VREGSF

#define VREGSFEnable                RCONbits.VREGSF = 1
#define VREGSFDisable               RCONbits.VREGSF = 0

#endif


char isMCLR(void) __attribute__ ((section (".libperi")));    /* to check if RESET is due to MCLR */
char isPOR(void) __attribute__ ((section (".libperi")));     /* to check if RESET is due to POR */
char isBOR(void) __attribute__ ((section (".libperi")));     /* to check if RESET is due to BOR */

#ifdef _LVDIF

char isLVD(void) __attribute__ ((section (".libperi")));     /* to check if LVD occured */

#endif

char isWU(void) __attribute__ ((section (".libperi")));      /* to check for the cause of Wakeup from sleep */
char isWDTTO(void) __attribute__ ((section (".libperi")));   /* to check if WDT timeout occured during normal operation */
char isWDTWU(void) __attribute__ ((section (".libperi")));   /* to check if WDT timeout occured during sleep */
char isSWR(void) __attribute__ ((section (".libperi")));     /* to check if Software Reset occured */
char isTRAPR(void) __attribute__ ((section (".libperi")));   /* to check if Trap Error occured */
char isIOPUWR(void) __attribute__ ((section (".libperi")));   /* to check if Illegal Opcode or uninit Write Op occured */

#ifdef _CM

char isCM(void) __attribute__ ((section (".libperi")));     /* to check if Config Mismatched occured */

#endif


#endif /* __RESET_H */
