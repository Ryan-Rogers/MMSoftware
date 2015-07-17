// <editor-fold defaultstate="collapsed" desc="Configuration_Subroutines">
// =================================================================
// CONFIGURATION SUBROUTINES
// =================================================================
// </editor-fold>

#include <p33EP512MC806.h>  // dsPIC33EP512MC806 processor header
#include "Global.h" // Global declarations for Micromouse 2015-16

// <editor-fold defaultstate="collapsed" desc="Configure_Clock">
// =================================================================
// CONFIGURE CLOCK
// =================================================================
void CONFIG_CLOCKHIGH(void){
    if (DEBUG) printf("Setting Clock to High Speed 60MIPS\n");
    //CLOCK SPEED CONFIG
    CLKDIVbits.PLLPRE           = 0;
    CLKDIVbits.PLLPOST          = 0;
    PLLFBDbits.PLLDIV           = 63;
    // RESULTING Fosc = 119.7625 MHz
    // RESULTING Fcy = 59.88125 MIPS
    _NOSC = 1;
    _OSWEN = 1;         // Request Change to new clock
    while (_OSWEN){}    // Wait for Clock Change to complete
    FP = 59881250;
    FCY = 59881250UL;      // 60 MIPs
    BRGVAL = ((FP/BAUDRATE)/16)-1; // Math for calculation of UART set
    U1BRG = BRGVAL;                 // baud_rate = 9600 bps;
    if (DEBUG) printf("Clock Change Complete - FCY and UART Speed Redefined\n");
    return;
}

void CONFIG_CLOCKLOW(void){
    if (DEBUG) printf("Setting Clock to Low Speed 7.8MIPS\n");
    //CLOCK SPEED CONFIG
    CLKDIVbits.PLLPRE           = 0;
    CLKDIVbits.PLLPOST          = 3;
    PLLFBDbits.PLLDIV           = 32;
    // RESULTING Fosc = 15.66125 MHz
    // RESULTING Fcy = 7.830625 MIPS
    _NOSC = 1;
    _OSWEN = 1;         // Request Change to new clock
    while (_OSWEN){}    // Wait for Clock Change to complete
    FP = 7830625;
    FCY = 7830625UL;      // 7.8 MIPs
    BRGVAL = ((FP/BAUDRATE)/16)-1; // Math for calculation of UART set
    U1BRG = BRGVAL;                 // baud_rate = 9600 bps;
    if (DEBUG) printf("Clock Change Complete - FCY and UART Speed Redefined\n");
    return;
}
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="Configure_IO">
// =================================================================
// IO PIN CONFIGURATION
// =================================================================
int CONFIG_IO(void){ // Input Output configuration for Microstick II with dspic33fj128mc802
    // SET TRISTATE OF EACH PIN 1 = INPUT  0 = OUTPUT
    // SET PINS AS 1 = ANALOG OR 0 = DIGITAL

    // Front Interactive Button
    _TRISB9 = 1;        //  Button  Pin 22  RB9
    _ANSB9 = 0;

    // INDICATOR LEDS
    _TRISB8 = 0;        //  RLED1   PIN 21  RB8
    _ANSB8 = 0;
    _TRISB11 = 0;       //  RLED2   PIN 24  RB11
    _ANSB11 = 0;
    _TRISB2 = 0;        //  RLED3   PIN 14  RB2
    _ANSB2 = 0;
    _TRISB0 = 0;        //  RLED4   PIN 16  RB0
    _ANSB0 = 0;
    _TRISB10 = 0;       //  GLED5   PIN 23  RB10
    _ANSB10 = 0;
    _TRISB1 = 0;        //  BLED6   PIN 15  RB1
    _ANSB1 = 0;

    //* UART
    _TRISF6 = 0; //*       TX          PIN 35      RF6
    _TRISF2 = 1; //*       RX          PIN 34      RF2
    //_TRISF3 = 1; //*       CTS         PIN 33      RF3
    //_TRISG3 = 0; //*       RTS         PIN 36      RG3
    //ANSELFbits.ANSF6 = 0; //*      RX          PIN 35      RF6   DIGITAL ONLY PIN
    //ANSELFbits.ANSF2 = 0; //*      TX          PIN 34      RF2   DIGITAL ONLY PIN
    //ANSELFbits.ANSF3 = 0; //*      CTS         PIN 33      RF3   DIGITAL ONLY PIN
    //ANSELFbits.ANSG3 = 0; //*      RTS         PIN 36      RG3   DIGITAL ONLY PIN

    //* ICSP
    //*      PGC         PIN 17      RB6
    //*      PGD         PIN 18      RB7
    //_ANSB6 = 0; //*      PGC         PIN 17      RB6
    //_ANSB7 = 0; //*      PGD         PIN 18      RB7

    //* IR
    _TRISG2 = 0; //*       IR_1_TX     PIN 37      RG2
    _TRISB13 = 0; //*      IR_2_TX     PIN 28      RB13
    _TRISG9 = 0; //*       IR_3_TX     PIN 8       RG9
    _TRISB3 = 0; //*       IR_4_TX     PIN 13      RB3
    _TRISD1 = 0; //*       IR_5_TX     PIN 49      RD1
    _TRISE4 = 0; //*       IR_6_TX     PIN 64      RE4
    _TRISB14 = 1; //*      IR_1_RX     PIN 29      RB14
    _TRISB12 = 1; //*      IR_2_RX     PIN 27      RB12
    _TRISB4 = 1; //*       IR_3_RX     PIN 12      RB4
    _TRISB5 = 1; //*       IR_4_RX     PIN 11      RB5
    _TRISB15 = 1; //*      IR_5_RX     PIN 30      RB15
    _TRISE3 = 1; //*       IR_6_RX     PIN 63      RE3
    //_ANSG2 = 0; //*      IR_1_TX     PIN 37      RG2     DIGITAL ONLY PIN
    _ANSB13 = 0; //*      IR_2_TX     PIN 28      RB13
    _ANSG9 = 0; //*      IR_3_TX     PIN 8       RG9
    _ANSB3 = 0; //*      IR_4_TX     PIN 13      RB3
    //_ANSD1 = 0; //*      IR_5_TX     PIN 49      RD1     DIGITAL ONLY PIN
    _ANSE4 = 0; //*      IR_6_TX     PIN 64      RE4
    _ANSB14 = 1; //*      IR_1_RX     PIN 29      RB14
    _ANSB12 = 1; //*      IR_2_RX     PIN 27      RB12
    _ANSB4 = 1; //*      IR_3_RX     PIN 12      RB4
    _ANSB5 = 1; //*      IR_4_RX     PIN 11      RB5
    _ANSB15 = 1; //*      IR_5_RX     PIN 30      RB15
    _ANSE3 = 1; //*      IR_6_RX     PIN 63      RE3

    //* MOTORS
    _TRISE7 = 0; //*       M_PWM_A     PIN 3      RE7
    _TRISG6 = 0; //*       M_DIR_A     PIN 4      RG6
    _TRISE5 = 0; //*       M_PWM_B     PIN 1      RE5
    _TRISE6 = 0; //*       M_DIR_B     PIN 2      RE6
    _TRISE2 = 1; //*       M_QE_BA     PIN 62     RE2
    _TRISE1 = 1; //*       M_QE_BB     PIN 61     RE1
    _TRISF1 = 1; //*       M_QE_AA     PIN 59     RF1
    _TRISF0 = 1; //*       M_QE_AB     PIN 58     RF0
    _ANSE7 = 0; //*      M_PWM_A     PIN 3      RE7
    _ANSG6 = 0; //*      M_DIR_A     PIN 4      RG6
    _ANSE5 = 0; //*      M_PWM_B     PIN 1      RE5
    _ANSE6 = 0; //*      M_DIR_B     PIN 2      RE6
    _ANSE2 = 0; //*      M_QE_BA     PIN 62     RE2
    _ANSE1 = 0; //*      M_QE_BB     PIN 61     RE1
    //_ANSF1 = 0; //*      M_QE_AA     PIN 59     RF1      DIGITAL ONLY PIN
    //_ANSF0 = 0; //*      M_QE_AB     PIN 58     RF0      DIGITAL ONLY PIN

    //* IMU
    //_TRISC14 = 0;//*      INT         PIN 48     RC14  ?   CHECK THIS SETTING
    //_TRISD0 = 1;//*      SPI_CS      PIN 46     RD0    ?   CHECK THIS SETTING
    //_TRISD10 = 0;//*      SPI_SCLK    PIN 44     RD10  ?   CHECK THIS SETTING
    //_TRISC13 = 1;//*      SPI_SDI     PIN 47     RC13  ?   CHECK THIS SETTING
    //_TRISD11 = 0;//*      SPI_SDO     PIN 45     RD11  ?   CHECK THIS SETTING
    //*      INT         PIN 48     RC14       DIGITAL ONLY PIN
    //*      SPI_CS      PIN 46     RD0        DIGITAL ONLY PIN
    //*      SPI_SCLK    PIN 44     RD10       DIGITAL ONLY PIN
    //*      SPI_SDI     PIN 47     RC13       DIGITAL ONLY PIN
    //*      SPI_SDO     PIN 45     RD11       DIGITAL ONLY PIN

    //Battery Voltage Monitor
    _TRISE0 = 1;
    _ANSE0 = 1;

    // Peripheral Pin Select
    // Quadrature Encoders
        _QEA1R = 0b1100001;    // Set QEAA to RP97
        _QEB1R = 0b1100000;    // Set QEAB to RP96
        _QEA2R = 0b1010010;    // Set QEBA to RP82
        _QEB2R = 0b1010001;    // Set QEBB to RPI81

    return (0);
}
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="Configure_QEI">
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
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="Configure_PWM">
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
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="Configure ADC">
//=================================================================
//***************************** ADC *******************************
//=================================================================

// AD1CON1 CONFIG
//void CONFIG_ADC(void)
//{
//    AD1CON1bits.ADON            = 0;            // Make sure ADC is off before configuring
//    // AD1CON1 CONFIG
//    AD1CON1bits.ADSIDL          = 1;            // Keep ADC running in idle mode
//    AD1CON1bits.ADDMABM         = 0;            // DMA buffers will be in same order as ADC buffer
//    AD1CON1bits.AD12B           = 0;            // Initialize ADC for 10-bit mode
//    AD1CON1bits.FORM            = 0;            // ADC output is an unsigned integer (0000 dddd dddd dddd)
//    AD1CON1bits.SSRC            = 0;            // Set ADC for manual sampling and conversion
//    AD1CON1bits.SSRCG           = 0;            // Part of config for above
//    AD1CON1bits.SIMSAM          = 1;            // 10 bit mode -> Simultaneous sampling
//    AD1CON1bits.ASAM            = 0;            // Sampling begins once samp bit is set
//    // AD1CON2 CONFIG
//    AD1CON2bits.VCFG            = 0;            // AD references are Vdd and Vss
//    AD1CON2bits.CSCNA           = 0;            // No scanning
//    AD1CON2bits.CHPS            = 1;            // Simultaneous channel sampling (CH0 and CH1)
//    AD1CON2bits.SMPI            = 0;            // Interrupt after every sample/conversion
//    AD1CON2bits.BUFM            = 0;            // Start filling buffer at start
//    AD1CON2bits.ALTS            = 0;            // Always sample from MUX A
//    // AD1CON3
//    AD1CON3bits.ADRC            = 0;            // TAD clock derived from system clock
//    AD1CON3bits.SAMC            = 11;           // Sample time = 1*TAD
//    AD1CON3bits.ADCS            = 2;            // Fad = Fcy = fast as shit
//    // AD1CON4 CONFIG
//    AD1CON4bits.ADDMAEN         = 1;            // Set to 1 so results will be in known buffer ADC1BUF0
//    AD1CON4bits.DMABL           = 0;            // 1 DMA buffer per input
//    // AD1CHS0 & 123
//    AD1CHS123bits.CH123NA       = 0;            // ADC Channel 1 Negative input set to VREF-
//    AD1CHS123bits.CH123SA       = 1;            // ADC Channel 1 Positive input set to AN3
//    AD1CHS0bits.CH0SA           = 13;           // ADC Channel 0 Positive input set to AN13
//    AD1CHS0bits.CH0NA           = 0;            // ADC Channel 0 Negative input set to VREF-
//    // INTCON1 CONFIG
//    INTCON1bits.NSTDIS          = 1;            // Disable interrupt nesting
//    // INTCON2 CONFIG
//    IPC3bits.AD1IP              = 7;            // ADC Interrupt Priority = 7
//    IFS0bits.AD1IF              = 0;            // Clear interrupt flag
//    // ENABLE EVERYTHING
//    _AD1IE                      = 0;            // Enable ADC1 specific interrupt
//    _AD1IF                      = 0;            // Clear AD1 interrupt flag
//
//    AD2CON1bits.ADON            = 0;            // Make sure ADC is off before configuring
//    // AD1CON1 CONFIG
//    AD2CON1bits.ADSIDL          = 1;            // Keep ADC running in idle mode
//    AD2CON1bits.ADDMABM         = 0;            // DMA buffers will be in same order as ADC buffer
//    //AD2CON1bits.AD12B           = 0;            // Initialize ADC for 10-bit mode
//    AD2CON1bits.FORM            = 0;            // ADC output is an unsigned integer (0000 dddd dddd dddd)
//    AD2CON1bits.SSRC            = 0;            // Set ADC for manual sampling and conversion
//    AD2CON1bits.SSRCG           = 0;            // Part of config for above
//    AD2CON1bits.SIMSAM          = 1;            // 10 bit mode -> Simultaneous sampling
//    AD2CON1bits.ASAM            = 0;            // Sampling begins once samp bit is set
//    // AD1CON2 CONFIG
//    AD2CON2bits.VCFG            = 0;            // AD references are Vdd and Vss
//    AD2CON2bits.CSCNA           = 0;            // No scanning
//    AD2CON2bits.CHPS            = 1;            // Simultaneous channel sampling (CH0 and CH1)
//    AD2CON2bits.SMPI            = 0;            // Interrupt after every sample/conversion
//    AD2CON2bits.BUFM            = 0;            // Start filling buffer at start
//    AD2CON2bits.ALTS            = 0;            // Always sample from MUX A
//    // AD1CON3
//    AD2CON3bits.ADRC            = 0;            // TAD clock derived from system clock
//    AD2CON3bits.SAMC            = 11;           // Sample time = 1*TAD
//    AD2CON3bits.ADCS            = 2;            // Fad = Fcy = fast as shit
//    // AD1CON4 CONFIG
//    AD2CON4bits.ADDMAEN         = 1;            // Set to 1 so results will be in known buffer ADC2BUF0
//    AD2CON4bits.DMABL           = 0;            // 1 DMA buffer per input
//    // AD1CHS0 & 123
//    AD2CHS123bits.CH123NA       = 0;            // ADC Channel 1 Negative input set to VREF-
//    AD2CHS123bits.CH123SA       = 1;            // ADC Channel 1 Positive input set to AN3
//    AD2CHS0bits.CH0SA           = 13;           // ADC Channel 0 Positive input set to AN13
//    AD2CHS0bits.CH0NA           = 0;            // ADC Channel 0 Negative input set to VREF-
//    // INTCON1 CONFIG
//    INTCON1bits.NSTDIS          = 1;            // Disable interrupt nesting
//    // INTCON2 CONFIG
//    _AD2IP                      = 7;            // ADC Interrupt Priority = 7
//    _AD2IF                      = 0;            // Clear interrupt flag
//    // ENABLE EVERYTHING
//    _AD1IE                      = 0;            // Enable ADC1 specific interrupt
//    AD1CON1bits.ADON            = 1;            // Make sure ADC is on before leaving configuration
//    AD2CON1bits.ADON            = 1;            // Make sure ADC is on before leaving configuration
//}
void CONFIG_ADC(void){
    AD1CON1bits.ADON            = 0;            // Make sure ADC is off before configuring
    // AD1CON1 CONFIG
    AD1CON1bits.ADSIDL          = 1;            // Keep ADC running in idle mode
    AD1CON1bits.ADDMABM         = 0;            // DMA buffers will be in same order as ADC buffer
    AD1CON1bits.AD12B           = 1;            // Initialize ADC for 10-bit mode
    AD1CON1bits.FORM            = 0;            // ADC output is an unsigned integer (0000 dddd dddd dddd)
    AD1CON1bits.SSRC            = 0b111;        // Set ADC for manual sampling and automatic conversion
    AD1CON1bits.SSRCG           = 0;            // Group Zero, Combined with setting above for auto conversion
    AD1CON1bits.SIMSAM          = 1;            // 10 bit mode -> Simultaneous sampling
    AD1CON1bits.ASAM            = 0;            // Sampling begins once samp bit is set
    // AD1CON2 CONFIG
    AD1CON2bits.VCFG            = 0;            // AD references are Vdd and Vss
    AD1CON2bits.CSCNA           = 0;            // No scanning
    AD1CON2bits.CHPS            = 1;            // Simultaneous channel sampling (CH0 and CH1)
    AD1CON2bits.SMPI            = 0;            // Interrupt after every sample/conversion
    AD1CON2bits.BUFM            = 0;            // Start filling buffer at start
    AD1CON2bits.ALTS            = 0;            // Always sample from MUX A
    // AD1CON3
    AD1CON3bits.ADRC            = 0;            // TAD clock derived from system clock
    AD1CON3bits.SAMC            = 31;           // Tsmp = SAMC * Tad
    AD1CON3bits.ADCS            = 10;            // Fad = Fcy = fast as shit
    // AD1CON4 CONFIG
    AD1CON4bits.ADDMAEN         = 1;            // Set to 1 so results will be in known buffer ADC1BUF0
    AD1CON4bits.DMABL           = 0;            // 1 DMA buffer per input
    // INTCON1 CONFIG
    INTCON1bits.NSTDIS          = 1;            // Disable interrupt nesting
    // INTCON2 CONFIG
    _AD1IP                      = 7;            // ADC Interrupt Priority = 7
    _AD1IF                      = 0;            // Clear interrupt flag
    // ENABLE EVERYTHING
    _AD1IE                      = 0;            // Enable ADC1 specific interrupt
    AD1CON1bits.ADON            = 1;            // Make sure ADC is on before leaving configuration
    return;
}
int ADCget (int number){
    if (number == 0)    // Battery Voltage Level
    {
        AD1CHS0bits.CH0SA = 24;     // Set ADC Channel 0 Positive input set to AN24
        AD1CHS0bits.CH0NA = 0;      // Set ADC Channel 0 Negative input set to VREF-
        AD1CON1bits.SAMP  = 1;      // set sampling bit
        while(!AD1CON1bits.DONE);   // pole done bit
        return (ADC1BUF0);          // return buffer
    }
    if (number == 1)
    {
        IR_1_TX = 1;                // Turn On IR LED
        AD1CHS0bits.CH0SA = 14;     // Set ADC Channel 0 Positive input set to AN14
        AD1CHS0bits.CH0NA = 0;      // Set ADC Channel 0 Negative input set to VREF-
        AD1CON1bits.SAMP  = 1;      // set sampling bit
        while(!AD1CON1bits.DONE);   // pole done bit
        IR_1_TX = 0;                // Turn Off IR LED
        return (ADC1BUF0);          // return buffer
    }
    else if (number == 2)
    {
        IR_2_TX = 1;                // Turn On IR LED
        AD1CHS0bits.CH0SA = 12;     // Set ADC Channel 0 Positive input set to AN12
        AD1CHS0bits.CH0NA = 0;      // Set ADC Channel 0 Negative input set to VREF-
        AD1CON1bits.SAMP  = 1;      // set sampling bit
        while(!AD1CON1bits.DONE);   // pole done bit
        IR_2_TX = 0;                // Turn Off IR LED
        return (ADC1BUF0);          // return buffer
    }
    else if (number == 3)
    {
        IR_3_TX = 1;                // Turn On IR LED
        AD1CHS0bits.CH0SA = 4;     // Set ADC Channel 0 Positive input set to AN4
        AD1CHS0bits.CH0NA = 0;      // Set ADC Channel 0 Negative input set to VREF-
        AD1CON1bits.SAMP  = 1;      // set sampling bit
        while(!AD1CON1bits.DONE);   // pole done bit
        IR_3_TX = 0;                // Turn Off IR LED
        return (ADC1BUF0);          // return buffer
    }
    else if (number == 4)
    {
        IR_4_TX = 1;                // Turn On IR LED
        AD1CHS0bits.CH0SA = 5;     // Set ADC Channel 0 Positive input set to AN5
        AD1CHS0bits.CH0NA = 0;      // Set ADC Channel 0 Negative input set to VREF-
        AD1CON1bits.SAMP  = 1;      // set sampling bit
        while(!AD1CON1bits.DONE);   // pole done bit
        IR_4_TX = 0;                // Turn Off IR LED
        return (ADC1BUF0);          // return buffer
    }
    else if (number == 5)
    {
        IR_5_TX = 1;                // Turn On IR LED
        AD1CHS0bits.CH0SA = 15;     // Set ADC Channel 0 Positive input set to AN15
        AD1CHS0bits.CH0NA = 0;      // Set ADC Channel 0 Negative input set to VREF-
        AD1CON1bits.SAMP  = 1;      // set sampling bit
        while(!AD1CON1bits.DONE);   // pole done bit
        IR_5_TX = 0;                // Turn Off IR LED
        return (ADC1BUF0);          // return buffer
    }
    else if (number == 6)
    {
        IR_6_TX = 1;                // Turn On IR LED
        AD1CHS0bits.CH0SA = 27;     // Set ADC Channel 0 Positive input set to AN27
        AD1CHS0bits.CH0NA = 0;      // Set ADC Channel 0 Negative input set to VREF-
        AD1CON1bits.SAMP  = 1;      // set sampling bit
        while(!AD1CON1bits.DONE);   // pole done bit
        IR_6_TX = 0;                // Turn Off IR LED
        return (ADC1BUF0);          // return buffer
    }
    else
    {
        ERROR(11);
    }
    return(9000);
}
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="Configure Timers">
//=================================================================
//*********************** Timer CONFIGURATION *********************
//=================================================================
// Timer 2 and 3 for ADC1 DMA Event Trigger Conversion
/*int CONFIG_TIMER2(void) {
    if (DEBUG) printf("Configuring Timer 2 and 3 for ADC1 DMA");
    T2CONbits.TON = 0;      // Disable Timer
    T2CONbits.TCS = 0;      // Select internal instruction cycle clock
    T2CONbits.TGATE = 0;    // Disable Gated Timer mode
    T2CONbits.TCKPS=0b011;  // Select 1:8 Prescaler
    TMR2 = 0x00;            // Clear timer register
    PR2 = 105;              // Load the period value
    IPC0bits.T2IP = 0x01;   // Set Timer 1 Interrupt Priority Level
    IFS0bits.T2IF = 0;      // Clear Timer 1 Interrupt Flag
    IEC0bits.T2IE = 1;      // Enable Timer1 interrupt
    T2CONbits.TON = 1;      // Start Timer
    return (0);
}*/
// Example code for Timer1 ISR
/*void __attribute__((__interrupt)) _U1TXInterrupt (void){
    IFS0bits.U1TXIF = 0;    // Clear TX Interrupt Flag
    U1TXREG = 'a';
}*/

/*void __attribute__((__interrupt__, no_auto_psv)) _T1Interrupt(void)
{

    switch(adc_case)
    {
        case 1:
            IR_SL = ADC2BUF1;       // Write ADC2BUF1 to variable
            IR_SR = ADC2BUF2;       // Write ADC2BUF2 to variable
            _AD2IF = 0;             // Clear AD2 interupt flag
            _LATF3 = 1;             // Front left IR LED on
            _LATE4 = 1;             // Front right IR LED on
            AD1CON1bits.SAMP = 1;   // Sample on - front left and front right
            adc_case = 2;
        case 2:
            AD1CON1bits.SAMP = 0;   // Sample off - front left and front right
            _LATF3 = 0;             // Front left IR LED off
            _LATE4 = 0;             // Front right IR LED off
            adc_case = 3;
        case 3:
            IR_FL = ADC1BUF1;       // Write ADC1BUF1 to variable
            IR_FR = ADC1BUF2;       // Write ADC1BUF2 to variable
            _AD1IF = 0;             // Clear AD1 interupt flag
            _LATF2 = 1;             // Side left IR LED on
            _LATE5 = 1;             // Side right IR LED on
            AD2CON1bits.SAMP = 1;   // Sample on - side left and side right
            adc_case = 4;
        case 4:
            AD2CON1bits.SAMP = 0;   // Sample off - side left and side right
            _LATF2 = 0;             // side left IR LED off
            _LATE5 = 0;             // side right IR LED off
            adc_case = 1;
        default:
            adc_case = 1;
    }
    IFS0bits.T1IF = 0;      //Clear Timer1 interrupt flag
}
*/
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="Configure UART">
//=================================================================
//*********************** UART CONFIGURATION *************************
//=================================================================

UINT16 SetupUART(void);
int CONFIG_UART(void) //
{
    // Setup UART 1 mode
    U1MODEbits.UARTEN = 0;          // Disable UART 1 for setup
    U1MODEbits.USIDL = 0;           // Continue Operation in IDLE mode
    U1MODEbits.IREN = 0;            // IrDA Encoder and Decoder Disabled ((If Enabled verify 16x BRG mode (BRGH=0)))
    U1MODEbits.RTSMD = 1;           // UxRTS pin in simplex mode
    U1MODEbits.UEN = 0b00;          // TX and RX enabled, CTS and RTS/BCLK controlled by port latches
    U1MODEbits.WAKE = 0;            // No wake-up is enabled when in sleep mode
    U1MODEbits.LPBACK = 0;          // Loopback Disabled
    U1MODEbits.ABAUD = 0;           // Auto-Baud rate measurement disabled (We are setting the baud rate)
    U1MODEbits.URXINV = 0;          // UxRX Idle state is '1'
    U1MODEbits.BRGH = 0;            // BRG generates 16 clocks per bit period (16x baud clock, standard mode)
    U1MODEbits.PDSEL = 0b00;        // Parity and Data Selection as 8-bit data, no parity
    U1MODEbits.STSEL = 0;           // One Stop Bit

    // Setup UART 1 Status bits ((Default states for interrupts even though we will disable interrupts))
    U1STAbits.UTXISEL1 = 0;         // UTXISEL 0 and 1 , Interrupt after each transmitted character
    U1STAbits.UTXISEL0 = 0;
    U1STAbits.UTXINV = 0;           // UxTX Idle state is '1'
    U1STAbits.UTXBRK = 0;           // Sync Break Transmission is disabled
    U1STAbits.UTXEN = 1;            // UART1 Transmit Enable Bit UxTX pin controlled by UART
    U1STAbits.URXISEL = 0b00;       // RX Interrupt when buffer full
    U1STAbits.ADDEN = 0;            // Address Detect mode disabled
    U1STAbits.OERR = 0;             // Clear Receive Buffer Overrun Bit

    U1BRG = BRGVAL;                 // baud_rate = 9600 bps;
    RPINR18bits.U1RXR = 98;        // assign U1RX to RP98  0b1100010
    RPOR10bits.RP102R = 1;            // assign U1TX to RP102   RPnR<000001>

    IFS0bits.U1TXIF = 0;            // Set the U1TX interupt flag to 0
    IEC0bits.U1TXIE = 0;            // Disable the U1TX interupt
    IPC3bits.U1TXIP = 5;            // Set the U1TX priority level to 5
    U1MODEbits.UARTEN = 1;          // Enable UART 1 after setup
    return (0);
}
// </editor-fold>
