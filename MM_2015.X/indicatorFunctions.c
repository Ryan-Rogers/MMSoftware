// <editor-fold defaultstate="collapsed" desc="LED_Indicator_Subroutines">
// =================================================================
// LED INDICATOR SUBROUTINES
// =================================================================
// </editor-fold>

#include "Global.h" // Global declarations for Micromouse 2015-16

void LED(int LEDnumber, int Action)
{
    switch(LEDnumber){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            ERROR(1);
    }
}
// Clears All LEDs
void LEDclear(void){
    RLED1 = OFF;
    RLED2 = OFF;
    RLED3 = OFF;
    RLED4 = OFF;
    //GLED5 = OFF; // These are indicator LED's that need to be left on
    //BLED6 = OFF;
}

// LED Startup Sequence
void LEDstartup_sequence(void){
    int x;
    LEDclear();
    RLED1 = !RLED1;   //RLED1
    __delay32(DELAYslowSHORT);
    for(x=0; x<3; x++)
    {
        RLED1 = !RLED1;  //RLED1
        RLED2 = !RLED2;  //RLED2
        __delay32(DELAYslowSHORT);
        RLED2 = !RLED2;  //RLED2
        RLED3 = !RLED3;  //RLED3
        __delay32(DELAYslowSHORT);
        RLED3 = !RLED3;  //RLED3
        RLED4 = !RLED4;  //RLED4
        __delay32(DELAYslowMEDIUM);
        RLED3 = !RLED3;  //RLED3
        RLED4 = !RLED4;  //RLED4
        __delay32(DELAYslowSHORT);
        RLED2 = !RLED2;  //RLED2
        RLED3 = !RLED3;  //RLED3
        __delay32(DELAYslowSHORT);
        RLED1 = !RLED1;  //RLED1
        RLED2 = !RLED2;  //RLED2
        __delay32(DELAYslowMEDIUM);
    }
    LEDclear();
}

// LED Blink routine for error reporting
void LEDblink (int LED, int number){
    int count;
    if (LED == 5)
    {
        GLED5 = 0;
        for (count = 0; count < number; count ++)
        {
            GLED5 = 1;
            __delay32(DELAYslowSHORT);
            GLED5 = 0;
            __delay32(DELAYslowSHORT);
        }
    }
}
