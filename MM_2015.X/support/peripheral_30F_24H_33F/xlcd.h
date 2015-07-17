/********************************************************************/
/*            Header for XLCD module library functions              */
/*                                                                  */
/********************************************************************/

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


#if defined(_RD10)

#ifndef _XLCD_H
#define _XLCD_H

/* Comment out the following line if 4-bit interface is being used */
#define EIGHT_BIT_INTERFACE

/* #defines of the data pins and the corresponding tris pins */
/* The READ_PIN_X #defines must match the corresponding DATA_PIN_X defines */
#if defined(__dsPIC30F__) || defined(__dsPIC33F__) || defined(__PIC24H__)  

#define DATA_PIN_7           LATDbits.LATD7
#define DATA_PIN_6           LATDbits.LATD6
#define DATA_PIN_5           LATDbits.LATD5
#define DATA_PIN_4           LATDbits.LATD4

#define READ_PIN_7		PORTDbits.RD7
#define READ_PIN_6		PORTDbits.RD6
#define READ_PIN_5		PORTDbits.RD5
#define READ_PIN_4		PORTDbits.RD4

#ifdef EIGHT_BIT_INTERFACE

#define DATA_PIN_3           LATDbits.LATD3
#define DATA_PIN_2           LATDbits.LATD2
#define DATA_PIN_1           LATDbits.LATD1
#define DATA_PIN_0           LATDbits.LATD0

#define READ_PIN_3		PORTDbits.RD3
#define READ_PIN_2		PORTDbits.RD2
#define READ_PIN_1		PORTDbits.RD1
#define READ_PIN_0		PORTDbits.RD0

#endif /* #ifdef EIGHT_BIT_INTERFACE */

#define TRIS_DATA_PIN_7       TRISDbits.TRISD7
#define TRIS_DATA_PIN_6       TRISDbits.TRISD6
#define TRIS_DATA_PIN_5       TRISDbits.TRISD5
#define TRIS_DATA_PIN_4       TRISDbits.TRISD4

#ifdef EIGHT_BIT_INTERFACE

#define TRIS_DATA_PIN_3       TRISDbits.TRISD3
#define TRIS_DATA_PIN_2       TRISDbits.TRISD2
#define TRIS_DATA_PIN_1       TRISDbits.TRISD1
#define TRIS_DATA_PIN_0       TRISDbits.TRISD0

#endif /* #ifdef EIGHT_BIT_INTERFACE */

#if defined(_RD8) && defined(_RD9) && defined(_RD10)

/* #defines of the control pins and the corresponding tris pins for 30F */
#define E_PIN                 LATDbits.LATD8       /* PORT for E */
#define RW_PIN                LATDbits.LATD9       /* PORT for RW */
#define RS_PIN                LATDbits.LATD10      /* PORT for RS */

#define TRIS_E                TRISDbits.TRISD8    /* TRIS for E */
#define TRIS_RW               TRISDbits.TRISD9    /* TRIS for RW */
#define TRIS_RS               TRISDbits.TRISD10   /* TRIS for RS */

#endif /* #ifdef dsPIC30 || dsPIC33F || PIC24H */

#endif /* #ifdef _RD10 */

/* #defines of the data pins and the corresponding tris pins */
/* The READ_PIN_X #defines must match the corresponding DATA_PIN_X defines */
/*  ANSEL bits settings for digital should be done outside LCD library*/
#if defined(__dsPIC33E__) || defined(__PIC24E__) 

#define DATA_PIN_7           LATEbits.LATE7
#define DATA_PIN_6           LATEbits.LATE6
#define DATA_PIN_5           LATEbits.LATE5
#define DATA_PIN_4           LATEbits.LATE4

#define READ_PIN_7		PORTEbits.RE7
#define READ_PIN_6		PORTEbits.RE6
#define READ_PIN_5		PORTEbits.RE5
#define READ_PIN_4		PORTEbits.RE4

#ifdef EIGHT_BIT_INTERFACE

#define DATA_PIN_3            LATEbits.LATE3
#define DATA_PIN_2            LATEbits.LATE2
#define DATA_PIN_1            LATEbits.LATE1
#define DATA_PIN_0            LATEbits.LATE0

#define READ_PIN_3		PORTEbits.RE3
#define READ_PIN_2		PORTEbits.RE2
#define READ_PIN_1		PORTEbits.RE1
#define READ_PIN_0		PORTEbits.RE0

#endif /* #ifdef EIGHT_BIT_INTERFACE */

#define TRIS_DATA_PIN_7       TRISEbits.TRISE7
#define TRIS_DATA_PIN_6       TRISEbits.TRISE6
#define TRIS_DATA_PIN_5       TRISEbits.TRISE5
#define TRIS_DATA_PIN_4       TRISEbits.TRISE4

#ifdef EIGHT_BIT_INTERFACE

#define TRIS_DATA_PIN_3       TRISEbits.TRISE3
#define TRIS_DATA_PIN_2       TRISEbits.TRISE2
#define TRIS_DATA_PIN_1       TRISEbits.TRISE1
#define TRIS_DATA_PIN_0       TRISEbits.TRISE0

#endif /* #ifdef EIGHT_BIT_INTERFACE */

/* #defines of the control pins and the corresponding tris pins for 33E, 24E */
#define E_PIN                 LATDbits.LATD4       /* PORT for E */
#define RW_PIN                LATDbits.LATD5       /* PORT for RW */
#define RS_PIN                LATBbits.LATB15      /* PORT for RS */

#define TRIS_E                TRISDbits.TRISD4    /* TRIS for E */
#define TRIS_RW               TRISDbits.TRISD5    /* TRIS for RW */
#define TRIS_RS               TRISBbits.TRISB15   /* TRIS for RS */

#endif /* #ifdef dsPIC33E || dsPIC24E */ 



/**********************************/
/* P-tec PCOG1602B LCD controller */
/**********************************/

/* Display ON/OFF Control defines */
#define DON                   	0x0F 	/* Display on     		*/
#define DOFF                  	0x0b 	/* Display off     		*/
#define CURSOR_ON           	0x0f  	/* Cursor on       		*/
#define CURSOR_OFF          	0x0d  	/* Cursor off      		*/
#define BLINK_ON              	0x0f  	/* Cursor Blink    		*/
#define BLINK_OFF             	0x0e  	/* Cursor No Blink 		*/

/* Some Command Type defines							*/
#define CLEAR_XLCD		0x01		/* Clears the LCD		*/
#define RETURN_CURSOR_HOME	0x02		/* Returns the cursor to the HOME position	*/


/* Entry Mode Options	*/
#define INCR_MODE		0x07		/* Increment mode		*/
#define DECR_MODE		0x05		/* Decrement Mode	*/
#define ENTIRE_SHIFT_OFF	0x06		/* Shift Entire Display 	*/
#define ENTIRE_SHIFT_ON	0x07		/* Dont Shift Entire Display	*/

/* Cursor or Display Shift defines */
#define SHIFT_CUR_LEFT        0x13  /* Cursor shifts to the left   */
#define SHIFT_CUR_RIGHT       0x17  /* Cursor shifts to the right  */
#define SHIFT_DISP_LEFT       0x1b  /* Display shifts to the left  */
#define SHIFT_DISP_RIGHT      0x1f  /* Display shifts to the right */

/* Function Set defines */
#define FOUR_BIT              0x2f  /* 4-bit Interface  */
#define EIGHT_BIT             0x3f  /* 8-bit Interface  */

/* defines for no of lines */
#define SINGLE_LINE           0x37  /* Single line display  */
#define TWO_LINE              0x3F  /* Two line display  */

/* defines for segment data transfer direction */
#define SEG1_50_SEG51_100     0x39  /* SEG1->SEG50 ,SEG51->SEG100 */
#define SEG1_50_SEG100_51     0x3d  /* SEG1->SEG50 ,SEG100->SEG51 */
#define SEG100_51_SEG50_1     0x3b  /* SEG100->SEG51,SEG50->SEG1 */
#define SEG100_51_SEG1_50     0x3f  /* SEG100->SEG51,SEG1->SEG50 */

/* defines for COM data transfer direction */

#define COM1_COM16            0x3e  /* Data transfer direction is COM1 to COM16 */

#define COM16_COM1            0x3f  /* Data transfer direction is COM16 to COM1 */

/* Function prototypes */

/* OpenXLCD
 * Configures I/O pins for external LCD
 */
void OpenXLCD(char) __attribute__ ((section (".libperi")));

/* SetCGRamAddr
 * Sets the character generator address
 */
void SetCGRamAddr(char) __attribute__ ((section (".libperi")));

/* SetDDRamAddr
 * Sets the display data address
 */
void SetDDRamAddr(char) __attribute__ ((section (".libperi")));

/* BusyXLCD
 * Returns the busy status of the LCD
 */
char BusyXLCD(void)    __attribute__ ((section (".libperi")));

/* ReadAddrXLCD
 * Reads the current address
 */
char ReadAddrXLCD(void) __attribute__ ((section (".libperi")));

/* ReadDataXLCD
 * Reads a byte of data
 */
char ReadDataXLCD(void) __attribute__ ((section (".libperi")));

/* WriteCmdXLCD
 * Writes a command to the LCD
 */
void WriteCmdXLCD(char) __attribute__ ((section (".libperi")));

/* WriteDataXLCD
 * Writes a data byte to the LCD
 */
void WriteDataXLCD(char) __attribute__ ((section (".libperi")));

/* putsXLCD
 * Writes a string of characters to the LCD
 */
void putsXLCD(char *) __attribute__ ((section (".libperi")));

#define putrsXLCD   putsXLCD
#define getcXLCD    ReadDataXLCD
#define putcXLCD    WriteDataXLCD

/* prototypes of delay routines used in XLCD functions */
/*
    1. DelayRSSetupTime - Delay btw RS/RW signal to E signal
    2. DelayEPulseWidthLow - min E pulse low width
    3. DelayEPulseWidthLow - min E pulse high width
    4. DelayDBOutput - Data Output delay from E signal rise
    5. DelayPORXLCD - Delay for atleast 15msec - Power On Reset
*/    
void DelayRSSetupTime() __attribute__((section (".libperi")));
void DelayEPulseWidthLow()   __attribute__ ((section (".libperi")));
void DelayEPulseWidthHigh()   __attribute__ ((section (".libperi")));
void DelayDBOutput() __attribute__ ((section (".libperi")));
void DelayPORXLCD() __attribute__ ((section (".libperi")));

/* general purpose delay functions */
/* kept for backwards compatibility & test purposes*/
void DelayXLCD()    __attribute__ ((section (".libperi")));
void DelayEPulseWidth()   __attribute__ ((section (".libperi")));
void Delay600nsXLCD() __attribute__((section (".libperi")));
#endif

#endif
