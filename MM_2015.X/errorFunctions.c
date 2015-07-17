

#include "Global.h" // Global declarations for Micromouse 2015-16
/*
int ERROR(int cause){
    CONFIG_CLOCKLOW();
    LEDclear();
    if (cause == 0){
        if (DEBUG) printf("ERROR 0 entered\n");
        GLED5 = 1;
        __delay32(DELAYslowLONG);
        GLED5 = 0;
        MENUlevel = 0;}
    else{
        if (DEBUG) printf("ERROR %u entered\n",cause);
        LEDblink(5,cause);
        __delay32(DELAYslowLONG);
        MENUlevel = 0;}
    return(cause);}

*/