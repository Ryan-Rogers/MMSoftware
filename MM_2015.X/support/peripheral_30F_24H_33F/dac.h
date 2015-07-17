/********************************************************************/
/*              Header for 16 bit DAC module library functions      			*/
/*                      for 33F/ 24H devices only                   					*/
/********************************************************************/

#if defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__PIC24H__)
#include <p24Hxxxx.h>
#else
#error "Does not build on this target"
#endif

#ifndef __DAC_H
#define __DAC_H

/* List of SFRs for DAC */
/* The user can modify this based on the requirement */
#define ACLKCON_VALUE						0x0000 /* Default/Clear Value for Auxiliary Clock Control Register */
#define DAC1CON_VALUE						0x0000 /* Default/Clear Value for DAC1 Control Register */ 
#define DAC1STAT_VALUE						0x0000 /* Default/Clear Value for DAC1 Status Register */ 

/* DAC1 Control Register DAC1CON Configuration Bit Definitions */
#define DAC_MODULE_ON					0x8000 /* D/A Converter: ON */
#define DAC_MODULE_OFF					0x0000 /* D/A Converter: OFF */
#define DAC_IDLE_CONTINUE				0x2000 /* Idle Mode Operation: CONTINUE */
#define DAC_IDLE_STOP						0x0000 /* Idle Mode Operation: STOP */
#define DAC_ANALOG_AMP_ON				0x1000 /* Analog O/P Amplifier during Sleep Mode/ Stop-in Idle Mode: ENABLE */
#define DAC_ANALOG_AMP_OFF				0x0000 /* Analog O/P Amplifier during Sleep Mode/ Stop-in Idle Mode: DISABLE */
#define DAC_FORMAT_SIGN_INT				0x0100 /* Data Format: SIGNED INTEGER */
#define DAC_FORMAT_UNSIGN_INT			0x0000 /* Data Format: UNSIGNED INTEGER */
/* DAC Clock Divider: Divide Input Clock by 1 through 128 */
#define DAC_CLOCK_DIV(n)					(n-1)


/* DAC1 Status Register DAC1STAT Configuration Bit Definitions */
#define DAC_LEFT_ENABLE					0x8000 /* Left Channel DAC Output: ENABLE */
#define DAC_LEFT_DISABLE					0x0000 /* Left Channel DAC Output: DISABLE */
#define DAC_LEFT_MIDPOINT_ENABLE		0x2000 /* Left Channel Midpoint DAC Output Voltage: ENABLE */
#define DAC_LEFT_MIDPOINT_DISABLE		0x0000 /* Left Channel Midpoint DAC Output Voltage: DISABLE */
#define DAC_LEFT_INTERRUPT_EMPTY		0x0400 /* Left Channel Interrupt Type: Interrupt if FIFO empty */
#define DAC_LEFT_INTERRUPT_NOT_FULL	0x0000 /* Left Channel Interrupt Type: Interrupt if FIFO is not full */
#define DAC_RIGHT_ENABLE					0x0080 /* Right Channel DAC Output: ENABLE */
#define DAC_RIGHT_DISABLE					0x0000 /* Right Channel DAC Output: DISABLE */
#define DAC_RIGHT_MIDPOINT_ENABLE		0x0020 /* Right Channel Midpoint DAC Output Voltage: ENABLE */
#define DAC_RIGHT_MIDPOINT_DISABLE		0x0000 /* Right Channel Midpoint DAC Output Voltage: DISABLE */
#define DAC_RIGHT_INTERRUPT_EMPTY		0x0004 /* Right Channel Interrupt Type: Interrupt if FIFO empty */
#define DAC_RIGHT_INTERRUPT_NOT_FULL	0x0000 /* Right Channel Interrupt Type: Interrupt if FIFO is not full */

/* Auxiliary Clock Control Register ACLKCON Configuration Bit Definition */
#define AUX_CLOCK_SOURCE_AUXOSC		0x2000 /* Auxiliary Clock Source for Auxiliary Clock Divider: Auxiliary Oscillator */
#define AUX_CLOCK_SOURCE_FVCO			0x0000 /* Auxiliary Clock Source for Auxiliary Clock Divider: FVCO */
#define	AUX_OSC_MODE_EC					0x1800 /* Auxiliary Oscillator Mode: External Clock (EC) Mode */
#define	AUX_OSC_MODE_XT					0x1000 /* Auxiliary Oscillator Mode: Crystal Oscillator (XT) Mode */
#define	AUX_OSC_MODE_HS					0x0800 /* Auxiliary Oscillator Mode: High Speed Oscillator (HS) Mode */
#define	AUX_OSC_MODE_DISABLED			0x0000 /* Auxiliary Oscillator Mode: Auxiliary Oscillator Disabled (default) */
/* Auxiliary Clock Output Divider: Divided by 1, 2, 4, 8, 16, 32, 64, 256 */
#define AUX_CLOCK_OUTPUT_DIV_1			0x0700		
#define AUX_CLOCK_OUTPUT_DIV_2			0x0600
#define AUX_CLOCK_OUTPUT_DIV_4			0x0500
#define AUX_CLOCK_OUTPUT_DIV_8			0x0400
#define AUX_CLOCK_OUTPUT_DIV_16		0x0300
#define AUX_CLOCK_OUTPUT_DIV_32		0x0200
#define AUX_CLOCK_OUTPUT_DIV_64		0x0100
#define AUX_CLOCK_OUTPUT_DIV_256		0x0000
#define AUX_CLOCK_SOURCE_PRI_OSC		0x0002 /* Reference Clock Source for Auxiliary Clock: Primary Oscillator */
#define AUX_CLOCK_SOURCE_AUX_OSC		0x0000 /* Reference Clock Source for Auxiliary Clock: Auxiliary Oscillator */

/* Priority Values for DAC Interrupt */
#define DAC_INT_PRI_0                   				0x0000 /* DAC Priority Value: 0 */
#define DAC_INT_PRI_1                   				0x0001 /* DAC Priority Value: 1 */
#define DAC_INT_PRI_2                   				0x0002 /* DAC Priority Value: 2 */
#define DAC_INT_PRI_3                   				0x0003 /* DAC Priority Value: 3 */
#define DAC_INT_PRI_4                   				0x0004 /* DAC Priority Value: 4 */
#define DAC_INT_PRI_5                   				0x0005 /* DAC Priority Value: 5 */
#define DAC_INT_PRI_6                   				0x0006 /* DAC Priority Value: 6 */
#define DAC_INT_PRI_7                  				0x0007 /* DAC Priority Value: 7 */

/* Enable / Disable Interrupt Values */
#define DAC_INT_ENABLE                  			0x0008 /* DAC Interrupt Enable Value */
#define DAC_INT_DISABLE                 			0x0000 /* DAC Interrupt Disable Value */

/* Macros to  Enable/Disable Interrupts, Set Interrupt priority */
#define EnableIntDAC1L                   				IEC4bits.DAC1LIE = 1			/* Left Channel DAC Interrupt Enable */
#define DisableIntDAC1L                 				IEC4bits.DAC1LIE = 0			/* Left Channel DAC Interrupt Disable */
#define SetPriorityIntDAC1L(priority)   			IPC19bits.DAC1LIP = priority	/* Left Channel DAC Interrupt Priority Set */
#define ClearIntFlagDAC1L						IFS4bits.DAC1LIF = 0			/* Left Channel DAC Interrupt Flag Clear */
#define EnableIntDAC1R                  				IEC4bits.DAC1RIE = 1			/* Right Channel DAC Interrupt Enable */
#define DisableIntDAC1R                 				IEC4bits.DAC1RIE = 0			/* Right Channel DAC Interrupt Disable */
#define SetPriorityIntDAC1R(priority)   			IPC19bits.DAC1RIP = priority	/* Right Channel DAC Interrupt Priority Set */
#define ClearIntFlagDAC1R						IFS4bits.DAC1RIF = 0			/* Right Channel DAC Interrupt Flag Clear */

#define EnableDAC1L							DAC1STATbits.LOEN = 1		/* DAC Left Channel Enable */
#define DisableDAC1L							DAC1STATbits.LOEN = 0		/* DAC Left Channel Disable */
#define EnableDAC1R							DAC1STATbits.ROEN = 1		/* DAC Right Channel Enable */
#define DisableDAC1R							DAC1STATbits.ROEN = 0		/* DAC Right Channel Disable */

#define WriteDAC1L(convValue)					DAC1LDAT = convValue		/* DAC Left Channel Write */
#define WriteDAC1R(convValue)					DAC1RDAT = convValue		/* DAC Right Channel Write */
#define WriteDAC1D(convValue)					DAC1DFLT = convValue		/* DAC Default Value Write */

#define BusyDAC1L							!DAC1STATbits.LEMPTY
#define BusyDAC1R							!DAC1STATbits.REMPTY

/* Configure and Enables DAC */
void OpenDAC1(unsigned int config1, unsigned int config2, unsigned int config3) __attribute__ ((section (".libperi"))); 

/* Configures the Interrupt and Interrupt Priority for DAC Left Channel */
void ConfigIntDAC1L(unsigned int config) __attribute__ ((section (".libperi")));

/* Configures the Interrupt and Interrupt Priority for DAC Right Channel */
void ConfigIntDAC1R(unsigned int config) __attribute__ ((section (".libperi")));           

/* Turns off the DAC */
void CloseDAC1(void) __attribute__ ((section (".libperi")));                       

#endif
