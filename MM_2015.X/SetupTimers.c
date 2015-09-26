#include        <Generic.h>
#include        <p33Exxxx.h>
#include        <timer.h>
#include        "ChipSetup.h"




//<editor-fold defaultstate="collapsed" desc="16-bit Timer Configuration">
inline void Timer1Setup(WORD pr1)
{
    OpenTimer1(
            T1_OFF &
            T1_IDLE_CON &
            T1_GATE_OFF &
            T1_PS_1_8 &
            T1_SYNC_EXT_OFF &
            T1_SOURCE_INT,
            pr1);
    
   
    ConfigIntTimer1(
            T1_INT_PRIOR_1 &
            T1_INT_ON
                    );
    
    _T1IF = 0;  //Clear Interrupt Flag

    //printf("Timer 1 setup\r\n");
}

inline void Timer2Setup(WORD pr2)
{
    OpenTimer2(
            T2_OFF &
            T2_IDLE_CON &
            T2_GATE_OFF &
            T2_PS_1_8 &
            T2_32BIT_MODE_OFF &
            T2_SOURCE_INT,
            pr2);

    ConfigIntTimer2(
            T2_INT_PRIOR_2 &
            T2_INT_ON
                    );
    
    _T2IF = 0;  //Clear Interrupt Flag

    //printf("Timer 2 setup\r\n");
}

inline void Timer3Setup(WORD pr3)
{
    OpenTimer3(
            T3_OFF &
            T3_IDLE_CON &
            T3_GATE_OFF &
            T3_PS_1_64 &
            T3_SOURCE_INT,
            pr3);

    ConfigIntTimer3(
            T3_INT_PRIOR_2 &
            T3_INT_ON
                    );
    
    _T3IF = 0;  //Clear Interrupt Flag

    //printf("Timer 3 setup\r\n");
}

inline void Timer4Setup(WORD pr4)
{
    OpenTimer4(
            T4_OFF &
            T4_IDLE_CON &
            T4_GATE_OFF &
            T4_PS_1_64 &
            T4_32BIT_MODE_OFF &
            T4_SOURCE_INT,
            pr4);

    ConfigIntTimer4(
            T4_INT_PRIOR_2 &
            T4_INT_ON
                    );

    _T4IF = 0;  //Clear Interrupt Flag
    
    //printf("Timer 4 setup\r\n");
}

inline void Timer5Setup(WORD pr5)
{
    OpenTimer5(
            T5_OFF &
            T5_IDLE_CON &
            T5_GATE_OFF &
            T5_PS_1_64 &
            T5_SOURCE_INT,
            pr5);

    ConfigIntTimer5(
            T5_INT_PRIOR_2 &
            T5_INT_ON
                    );

    _T5IF = 0;  //Clear Interrupt Flag
    
    //printf("Timer 5 setup\r\n");
}

inline void Timer6Setup(WORD pr6)
{
    OpenTimer6(
            T6_OFF &
            T6_IDLE_CON &
            T6_GATE_OFF &
            T6_PS_1_64 &
            T6_32BIT_MODE_OFF &
            T6_SOURCE_INT,
            pr6);

    ConfigIntTimer6(
            T6_INT_PRIOR_2 &
            T6_INT_ON
                    );

    _T6IF = 0;  //Clear Interrupt Flag

    //printf("Timer 6 setup\r\n");
}

inline void Timer7Setup(WORD pr7)
{
    OpenTimer7(
            T7_OFF &
            T7_IDLE_CON &
            T7_GATE_OFF &
            T7_PS_1_64 &
            T7_SOURCE_INT,
            pr7);

    ConfigIntTimer7(
            T7_INT_PRIOR_2 &
            T7_INT_ON
                    );

    _T7IF = 0;  //Clear Interrupt Flag

    //printf("Timer 7 setup\r\n");
}

inline void Timer8Setup(WORD pr8)
{
    OpenTimer8(
            T8_OFF &
            T8_IDLE_CON &
            T8_GATE_OFF &
            T8_PS_1_64 &
            T8_32BIT_MODE_OFF &
            T8_SOURCE_INT,
            pr8);

    ConfigIntTimer8(
            T8_INT_PRIOR_2 &
            T8_INT_ON
                    );

    _T8IF = 0;  //Clear Interrupt Flag

    //printf("Timer 8 setup\r\n");
}

inline void Timer9Setup(WORD pr9)
{
    OpenTimer9(
            T9_OFF &
            T9_IDLE_CON &
            T9_GATE_OFF &
            T9_PS_1_64 &
            T9_SOURCE_INT,
            pr9);

    ConfigIntTimer9(
            T9_INT_PRIOR_2 &
            T9_INT_ON
                    );

    _T9IF = 0;  //Clear Interrupt Flag
    
    //printf("Timer 9 setup\r\n");
}

//</editor-fold>

/*
 * 32-bit Timer operation
 * Timers that have 32-bit capability are arranged into two types:  Type B and
 * Type C.  To configure the 32-bit timer, the configuration for Type B is used,
 * while the interrupt, if used, is the interrupt for the Type C timer.
 * 
 * Example:  If using Timer23, the open function would look like this:
 * OpenTimer23(T2* & ...,period)
 * 
 * To use the interrupt, it would be configured like this:
 * void __attribute__((interrupt,auto_psv)) _ISR _T3Interrupt(void){}
 */

//<editor-fold defaultstate="collapsed" desc="32-bit Timer Configuration">


void Timer23Setup(DWORD pr23)
{
        OpenTimer23(
                T2_OFF &
                T2_IDLE_CON &
                T2_GATE_OFF &
                T2_PS_1_8 &
                T2_SOURCE_INT,
                pr23
                );
        
         T3CONbits.TSIDL = 0;  //TSIDL bit must be cleared for idle operation.
        
        ConfigIntTimer23(
                T3_INT_PRIOR_2 &
                T3_INT_ON
                );
        
        _T3IF = 0;  //Clear Interrupt Flag
}

void Timer45Setup(DWORD pr45)
{
        OpenTimer45(
                T4_OFF &
                T4_IDLE_CON &
                T4_GATE_OFF &
                T4_PS_1_8 &
                T4_SOURCE_INT,
                pr45
                );
         T5CONbits.TSIDL = 0;  //TSIDL bit must be cleared for idle operation.
        
        ConfigIntTimer45(
                T5_INT_PRIOR_2 &
                T5_INT_ON
                );
        
        _T5IF = 0;  //Clear Interrupt Flag
}

void Timer67Setup(DWORD pr67)
{
        OpenTimer67(
                T6_OFF &
                T6_IDLE_CON &
                T6_GATE_OFF &
                T6_PS_1_8 &
                T6_SOURCE_INT,
                pr67
                );
         T7CONbits.TSIDL = 0;  //TSIDL bit must be cleared for idle operation.
        
        ConfigIntTimer67(
                T7_INT_PRIOR_2 &
                T7_INT_ON
                );
        
        _T7IF = 0;  //Clear Interrupt Flag
}

void Timer89Setup(DWORD pr89)
{
        OpenTimer89(
                T8_OFF &
                T8_IDLE_CON &
                T8_GATE_OFF &
                T8_PS_1_8 &
                T8_SOURCE_INT,
                pr89
                );
         T9CONbits.TSIDL = 0;  //TSIDL bit must be cleared for idle operation.
        
        ConfigIntTimer89(
                T9_INT_PRIOR_2 &
                T9_INT_ON
                );
        
        _T9IF = 0;  //Clear Interrupt Flag
}

//</editor-fold>