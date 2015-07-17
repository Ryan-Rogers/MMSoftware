// <editor-fold defaultstate="collapsed" desc="QEI_Subroutines">
// =================================================================
// QEI SUBROUTINES
// =================================================================
// </editor-fold>

#include "Global.h" // Global declarations for Micromouse 2015-16

int ENCODERposition(int Action, int Side, int Value){
    if(Action == WRITE){
        if(Side == RIGHT)       {POS2HLD=0; POS2CNTL=Value;}
        else if(Side == LEFT)   {POS1HLD=0; POS1CNTL=Value;}
        else                    {ERROR(8);}
        Value = 0;}
    else if(Action == READ){
        if(Side == RIGHT)       {Value = POS2CNTL;}
        else if(Side == LEFT)   {Value = 65535 - POS1CNTL;}
        else                    {ERROR(8);}
        }
    else{
        ERROR(8);}
    return(Value);
}
