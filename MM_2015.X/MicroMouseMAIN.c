// <editor-fold defaultstate="collapsed" desc="General_Information">
/* =================================================================
 * General Information
 * =================================================================
 * File:    MicroMouseMAIN.c
 * Author:  Dustin Craig Keefer
 * Project: Micromouse Contest '14-'15
 * Version: 1
 * Updated: December 18th 2014
 *
 * Microcontroller: dsPIC33EP512MC806
 * Pinout:
 * Battery Monitor
 *      BATT_VD     PIN 60      RE0
 * Program Interrupt Button
 *      PI          PIN 22      RB9
 * INDICATOR LEDS
 *      RLED1       PIN 21      RB8
 *      RLED2       PIN 24      RB11
 *      RLED3       PIN 14      RB2
 *      RLED4       PIN 16      RB0
 *      GLED5       PIN 23      RB10
 *      BLED6       PIN 15      RB1
 * UART
 *      RX          PIN 35      RF6
 *      TX          PIN 34      RF2
 * ICSP
 *      PGC         PIN 17      RB6
 *      PGD         PIN 18      RB7
 * IR
 *      IR_1_TX     PIN 37      RG2
 *      IR_2_TX     PIN 28      RB13
 *      IR_3_TX     PIN 8       RG9
 *      IR_4_TX     PIN 13      RB3
 *      IR_5_TX     PIN 49      RD1
 *      IR_6_TX     PIN 64      RE4
 *      IR_1_RX     PIN 29      RB14
 *      IR_2_RX     PIN 27      RB12
 *      IR_3_RX     PIN 12      RB4
 *      IR_4_RX     PIN 11      RB5
 *      IR_5_RX     PIN 30      RB15
 *      IR_6_RX     PIN 63      RE3
 * MOTORS
 *      M_PWM_A     PIN 3      RE7
 *      M_DIR_A     PIN 4      RG6
 *      M_PWM_B     PIN 1      RE5
 *      M_DIR_B     PIN 2      RE6
 *      M_QE_BA     PIN 62     RE2
 *      M_QE_BB     PIN 61     RE1
 *      M_QE_AA     PIN 59     RF1
 *      M_QE_AB     PIN 58     RF0
 * IMU
 *      INT         PIN 48     RC14
 *      SPI_CS      PIN 46     RD0
 *      SPI_SCLK    PIN 44     RD10
 *      SPI_SDI     PIN 47     RC13
 *      SPI_SDO     PIN 45     RD11
 */
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="Included Files">
// =================================================================
// LIBRARY INCLUSIONS
// =================================================================

#include <stdio.h>          // Standard input and output functions
#include <stdlib.h>         // Standard utility functions
#include <xc.h>             // Generic include file for XC16
#include <libpic30.h>       // Useful exports from libpic30.a
#include <math.h>
#include <p33EP512MC806.h>
#include "Global.h"         // Global declarations for Micromouse 2015-16
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="Configuration Bits">
// =================================================================
// CONFIGURATION BITS
// =================================================================

// FICD
#pragma config ICS = PGD1                       // ICD Communication Channel Select bits (Communicate on PGEC1 and PGED1)
#pragma config JTAGEN = OFF                     // JTAG Enable bit (JTAG is disabled)

// FWDT
#pragma config WDTPOST = PS32768                // Watchdog Timer Postscaler bits (1:32,768)
#pragma config WDTPRE = PR128                   // Watchdog Timer Prescaler bit (1:128)

//#pragma config PLLKEN = ON                      // PLL Lock Enable bit (Clock switch to PLL source will wait until the PLL lock signal is valid.)
#pragma config WINDIS = OFF                     // Watchdog Timer Window Enable bit (Watchdog Timer in Non-Window mode)
#pragma config FWDTEN = OFF                     // Watchdog Timer Enable bit (Watchdog timer always enabled)

// FOSC
#pragma config POSCMD = NONE                    // Primary Oscillator Mode Select bits (Primary Oscillator disabled)
#pragma config OSCIOFNC = OFF                   // OSC2 Pin Function bit (OSC2 is clock output)
#pragma config IOL1WAY = ON                     // Peripheral pin select configuration (Allow only one reconfiguration)
#pragma config FCKSM = CSECMD                   // Clock Switching Mode bits (Both Clock switching and Fail-safe Clock Monitor are disabled)

// FOSCSEL
#pragma config FNOSC = FRCPLL                   // Oscillator Source Selection (Internal Fast RC (FRC) Oscillator with PLL)
#pragma config IESO = ON                        // Two-speed Oscillator Start-up Enable bit (Start up device with FRC, then switch to user-selected oscillator source)

// FGS
#pragma config GWRP = OFF                       // General Segment Write-Protect bit (General Segment may be written)
#pragma config GSS = OFF			// General Segment Code-Protect bit

// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="Main">
//=================================================================
//*********************** MAIN SUBROUTINE *************************
//=================================================================
int main(void){
    RCONbits.SWDTEN = 0;    // Turn Off Software Watch Dog Timer

    CONFIG_IO();            // Configure Pins as Input or Output & Analog or Digital
    CONFIG_PWM();           // Configure Pulse Width Modulation
        MOTORset (LEFT, FORWARD, 0);    // Stop Left Motor
        MOTORset (RIGHT, FORWARD, 0);   // Stop Right Motor
    CONFIG_QEI();           // Configure Quadrature Encoder Interface
    CONFIG_ADC();           // Configure Analog to Digital Converter
    SetupUART();
    CONFIG_UART();          // Configure UART
    //CONFIG_TIMERS();      // Configure timers and ISRs for IR ADC and battery monitoring
    CONFIG_CLOCKLOW();      // Slow Clock
    LEDclear();             // Turn LEDs Off
        if (!PI){           // Check for Button Press to enter DEBUG mode
            DEBUG = 1;      // Set DEBUG FLAG
            BLED6 = 1;}     // Indicate with BLED6
    LEDstartup_sequence();
    if (DEBUG) printf ("Setup Complete - Beginning Main Program\n");
    while(1){               // Main Program Loop

            }
    return(0);}
// </editor-fold>