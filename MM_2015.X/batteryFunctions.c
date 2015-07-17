// <editor-fold defaultstate="collapsed" desc="Battery_Subroutines">
// =================================================================
// BATTERY MONITORING
// =================================================================
// </editor-fold>

#include "Global.h" // Global declarations for Micromouse 2015-16
/*
int BATTdisplay (void){
    BATTlevel = DATA[DATAcount].battery;
    LEDclear();
    if (BATTlevel >= 2000 && BATTlevel < 2333 )
    {
        RLED1 = 1;
        return(1);
    }
    else if (BATTlevel >= 2333 && BATTlevel < 2500)
    {
        RLED1 = 1;
        RLED2 = 1;
        return(2);
    }
    else if (BATTlevel >= 2500 && BATTlevel < 3000)
    {
        RLED1 = 1;
        RLED2 = 1;
        RLED3 = 1;
        return(3);
    }
    else if (BATTlevel >= 3000)
    {
        RLED1 = 1;
        RLED2 = 1;
        RLED3 = 1;
        RLED4 = 1;
        return(4);
    }
    else if (BATTlevel < 2000)
    {
        ERROR(10);
    }
    else
    {
        LEDclear();
        ERROR(10);
    }
    return(9000);
}
*/