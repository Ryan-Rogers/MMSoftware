#include <p33Exxxx.h>
#include "ChipSetup.h"

void SetupIO(void)
{
        
        
        return;
}

inline void ConfigIRSensors(void)
{
        /*
         * Set input parameters for photodiodes.
         */
        
        TRISBbits.TRISB14 = 1;          //IR_1_RX
        TRISBbits.TRISB12 = 1;          //IR_2_RX
        TRISBbits.TRISB4 = 1;           //IR_3_RX
        TRISBbits.TRISB5 = 1;           //IR_4_RX
        TRISBbits.TRISB15 = 1;          //IR_5_RX
        TRISEbits.TRISE3 = 1;           //IR_6_RX
        
        /*
         * Photodiodes are being read by the MCU as analog devices.  Analog
         * pin setup.
         * 
         * TODO:  Inquire as to whether using digital inputs + timers would 
         *        work as well.
         */
        
        ANSELBbits.ANSB14 = 1;          //IR_1_RX
        ANSELBbits.ANSB12 = 1;          //IR_2_RX
        ANSELBbits.ANSB4 = 1;           //IR_3_RX
        ANSELBbits.ANSB5 = 1;           //IR_4_RX
        ANSELBbits.ANSB15 = 1;          //IR_5_RX
        ANSELEbits.ANSE3 = 1;           //IR_6_RX
}

inline void ConfigIRXmitters(void)
{
        /*
         * Each IRLED will fire a pulse for a nominal period of time.  These
         * are all digital outputs.
         */
        
        TRISGbits.TRISG2 = 0;
        TRISBbits.TRISB13 = 0;
        TRISGbits.TRISG9 = 0;
        TRISBbits.TRISB3 = 0;
        TRISDbits.TRISD1 = 0;
        TRISEbits.TRISE4 = 0;
        
        /*
         * Since these are digital pins, we need to make sure that they're
         * set as such in their respective ANSEL registers.
         * 
         * Pins which do not have an ANSEL entry are below:
         * RG2
         * RG9
         * RD1
         */
        
        ANSELBbits.ANSB13 = 0;
        ANSELBbits.ANSB3 = 0;
        ANSELEbits.ANSE4 = 0;
}