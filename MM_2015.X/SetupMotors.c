#include    "ChipSetup.h"

#include    <qei32.h>

#include    <pps.h>
//=========================================================+=======
//QUADRATURE ENCODER CONFIGURE
//=================================================================
void CONFIG_QEI(void){
    // LEFT QEI Config
    QEI1CONbits.QEIEN = 1;      //QEI Counter Modules are enabled
    QEI1CONbits.QEISIDL = 0;    //Continue Module Operation in IDLE mode
    QEI1CONbits.PIMOD = 0;      //Index Events DO NOT AFFECT Position Counter
    QEI1CONbits.IMV = 0;        //Index Events DO NOT AFFECT Position Counter
    QEI1CONbits.INTDIV = 0;     //Timer Input Clock Prescale = 1:1
    QEI1CONbits.GATEN = 0;      //External Count Gate Disabled
    QEI1CONbits.CCM = 0;        //Quadrature Encoder Mode

    QEI1IOCbits.QCAPEN = 0;     //Home event does NOT trigger position capture event
    QEI1IOCbits.FLTREN = 1;     //Digital Filter Enabled
    QEI1IOCbits.QFDIV = 0;      //Filter Clock Divide = 1:1
    QEI1IOCbits.OUTFNC = 0;     //QEI CNTCMPx Disabled
    QEI1IOCbits.SWPAB = 0;      //Phase A and B NOT Swapped
    QEI1IOCbits.QEAPOL = 0;     //Phase Inputs NOT Inverted

    // RIGHT QEI Config
    QEI2CONbits.QEIEN = 1;      //QEI Counter Modules are enabled
    QEI2CONbits.QEISIDL = 0;    //Continue Module Operation in IDLE mode
    QEI2CONbits.PIMOD = 0;      //Index Events DO NOT AFFECT Position Counter
    QEI2CONbits.IMV = 0;        //Index Events DO NOT AFFECT Position Counter
    QEI2CONbits.INTDIV = 0;     //Timer Input Clock Prescale = 1:1
    QEI2CONbits.GATEN = 0;      //External Count Gate Disabled
    QEI2CONbits.CCM = 0;        //Quadrature Encoder Mode

    QEI2IOCbits.QCAPEN = 0;     //Home event does NOT trigger position capture event
    QEI2IOCbits.FLTREN = 1;     //Digital Filter Enabled
    QEI2IOCbits.QFDIV = 0;      //Filter Clock Divide = 1:1
    QEI2IOCbits.OUTFNC = 0;     //QEI CNTCMPx Disabled
    QEI2IOCbits.SWPAB = 0;      //Phase A and B NOT Swapped
    QEI2IOCbits.QEAPOL = 0;     //Phase Inputs NOT Inverted

}


// =========================================================+=======
// HIGH SPEED PWM CONFIGURE
// =================================================================
void CONFIG_PWM(void){
    PTCONbits.PTEN              = 0;            // PWM Module initially disabled
    // GENERIC PWM CONFIGURATION BITS
    PTCONbits.PTSIDL            = 0;            // PWM clock continues even if chip is in idle mode
    PTCONbits.SEIEN             = 0;            // Special event interupt disabled. We want NO PWM INTERRUPTIONS
    PTCONbits.EIPU              = 1;            // Update duty cycle immediately as opposed to at the end of every cycle
    PTCON2bits.PCLKDIV          = 0;            // PWM Module Clock Prescaler: 1:1. (1 tick = 8.32 ns)
    FCLCON1bits.FLTMOD          = 0b11;         // Disable fault input mode. MANDATORY
    PTPER                       = 5500;         // Configure PWM for a 45.7 us Period (21.8 KHz)
    PHASE3                      = 5500;
    PHASE4                      = 5500;
    // PWM MODULE 3 SPECIFIC CONFIGURATION BITS
    PWMCON3bits.FLTIEN          = 0;            // Disable Fault Interrupt. We want NO PWM INTERRUPTIONS
    PWMCON3bits.CLIEN           = 0;            // Disable current limit interrupt. We want NO PWM INTERRUPTIONS
    PWMCON3bits.TRGIEN          = 0;            // Disable Trigger interrupt. We want NO PWM INTERRUPTIONS
    PWMCON3bits.ITB             = 0;            // Use PTPER register value for timing
    PWMCON3bits.MDCS            = 0;            // MDC Register provides duty cycle
    PWMCON3bits.IUE             = 1;            // Updates to MDC register are immediately applied
    IOCON3bits.PENH             = 1;            // Configure PWM3H Pin for PWM output
    IOCON3bits.PENL             = 0;            // Configure PWM3L Pin for GPIO control
    IOCON3bits.PMOD             = 0b11;         // Configure PWM3 for True Independent Output Mode
    IOCON3bits.POLH             = 1;            // Configure pin for active LOW operation
    // PWM MODULE 4 SPECIFIC CONFIGURATION BITS
    PWMCON4bits.FLTIEN          = 0;            // Disable Fault Interrupt. We want NO PWM INTERRUPTIONS
    PWMCON4bits.CLIEN           = 0;            // Disable current limit interrupt. We want NO PWM INTERRUPTIONS
    PWMCON4bits.TRGIEN          = 0;            // Disable Trigger interrupt. We want NO PWM INTERRUPTIONS
    PWMCON4bits.ITB             = 0;            // Use PTPER register value for timing
    PWMCON4bits.MDCS            = 0;            // MDC Register provides duty cycle
    PWMCON4bits.IUE             = 1;            // Updates to MDC register are immediately applied
    IOCON4bits.PENH             = 1;            // Configure PWM4H Pin for PWM output
    IOCON4bits.PENL             = 0;            // Configure PWM4L Pin for GPIO control (This is direction pin)
    IOCON4bits.PMOD             = 0b11;         // Configure PWM4 for True Independent Output Mode
    IOCON4bits.POLH             = 1;            // Configure pin for Active LOW Operation

    PTCONbits.PTEN              = 1;            // Reenable PWM module one configured
}
