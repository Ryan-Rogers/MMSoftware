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
// =================================================================
// LIBRARY INCLUSIONS
// =================================================================

#include <stdio.h>          // Standard input and output functions
#include <stdlib.h>         // Standard utility functions
#include <libpic30.h>       // Useful exports from libpic30.a
#include <math.h>
#include <p33EP512MC806.h>
#include    <Generic.h>
#include    "ChipSetup.h"


// <//editor-fold defaultstate="collapsed" desc="Configuration Bits">
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
// <//editor-fold defaultstate="collapsed" desc="Declarations, Initializations & Definitions">
//=================================================================
// DECLARATIONS, INITIALIZATIONS & DEFINITIONS
//=================================================================
// NAMING CONVENTION
    // OBJECT OR GROUP IN ALL CAPS FOLLOWED BY ACTION IN LOWER CASE
    // IF A SIDE NEEDS TO BE SPECIFIED IT SHOULD BE PRECEDDED BY AN UNDERSCORE
    // EXAMPLE FOR CHANGING THE DUTY CYCLE ON LEFT MOTOR  MOTORduty_L
// Generic Variables
    int temp = 0;               // Generic temp Variable
    int count = 0;              // Generic count Variable

// Flags
    int FLAGmoveCOMPLETE = 0;
    int FLAGmappingCOMPLETE = 0;
    int FLAGtrialsCOMPLETE = 0;
    int FLAGmapINITIALIZED = 0;
    int FLAGminimapINITIALIZED = 0;
    int FLAGerrorchecking = 0;      // Set to 1 if we get SPI and the IMU working
// Menu
    int MENUlevel0(int CalledFrom);
    int MENUlevel1(int CalledFrom);
    int MENUlevela(int CalledFrom);
    int MENUlevelb(int CalledFrom);
    int MENUlevelc(int CalledFrom);
    int MENUlevel2(int CalledFrom);
    int MENUlevel3(int CalledFrom);
    int MENUlevel4(int CalledFrom);
        int MENUlevel = 0;          // Variable to hold current menu level
// Actions
    int SETTINGS (void);
    int TESTING (void);
    int OTHER (void);
    int MAPPING (void);
    int TRIALS (void);
// Motor Control
    int MOTORstraight (void);
    int MOTORturn (int direction);
    int MOTORtest(void);
    int MOTORset (int side, int direction, int speed);
    int MOTORstop(void);
        double errorL = 0;
        double aerrorL = 0;
        double serrorL = 0;
        double errorR = 0;
        double aerrorR = 0;
        double serrorR = 0;
        double SETspeed = 50; // Percentage of max speed we want the car to do


// Sensors (Encoders and IR LEDs)
    int ENCODERposition(int Action, int Side, int Value);
    int ENCODERreset (void);
    // Data Record Structure
        #define SENSORdataLIMIT    2
        struct {    char direction;
                    unsigned int x          : 3;
                    unsigned int y          : 3;
                    unsigned int battery    : 12;
                    unsigned int encoder_L  : 16;
                    unsigned int encoder_R  : 16;
                    unsigned int adc1       : 12;
                    unsigned int adc2       : 12;
                    unsigned int adc3       : 12;
                    unsigned int adc4       : 12;
                    unsigned int adc5       : 12;
                    unsigned int adc6       : 12;
                    char text[20];
                }DATA[SENSORdataLIMIT];
        int DATAcount = 0;      // Count of data points used for recording data points
        int DATAtransmit = 0;   // Count up to DATAcount to transmit all DATA records
        int adc1;
        int adc2;
        int adc3;
        int adc4;
        int adc5;
        int adc6;
// Navigation
    int NAVmapinitilization (int MINI);

    int NAVnextmove (void);
    int NAVexecutemove (int action, int direction, int amount);
    int NAVgetdataset(void);
    int NAVcheckforgoal (void);
    int NAVanalyzedataset (void);
    int NAVupdatemap (void);
    int NAVverifymap (void);
        int x = 0;                  // Current X position
        int y = 0;                  // Current Y position
        char CURRENTdirection = 'n';
        char NEWdirection;
        int NEXTaction;             // Global variables for navigation specifying next move
        int NEXTdirection;          // Global variables for navigation specifying next move
        int NEXTamount;             // Global variables for navigation specifying next move
        #define STRAIGHT 2
        #define turnL 1
        #define turnR 3
        #define HALFCELL    8775            // Distance in Encoder ticks to center of a cell
        #define CELL        17550           // Twice of HALFCELL to define a full 18cm between cell centers
        #define DEGREES90   3225
        #define DEGREES180  6450
        int MINIMAPPINGphase = 0;   // Global variables for navigation specifying phase of operation
        int MINITRIALSphase = 0;    // Global variables for navigation specifying phase of operation
        int MAPPINGphase = 0;       // Global variables for navigation specifying phase of operation
        int TRIALSphase = 0;        // Global variables for navigation specifying phase of operation
        int GOALachieved;           // Global variables for navigation goal checking
        int STARTachieved;          // Global variables for navigation goal checking
        int RUNcount = 0;       // Variable to hold run count (7 limit)
// Misc
    int BATTlevel = 0;          // Variable for holding battery voltage level

// </editor-fold>
// <//editor-fold defaultstate="collapsed" desc="Pin Assignments">
// =============================================================
// Pin Assignments
// =============================================================

    // Indicator LEDs
        #define RLED1  _LATB8               // LED pin specification for RLED1
        #define RLED2  _LATB11              // LED pin specification for RLED2
        #define RLED3  _LATB2               // LED pin specification for RLED3
        #define RLED4  _LATB0               // LED pin specification for RLED4
        #define GLED5  _LATB10              // LED pin specification for GLED5
        #define BLED6  _LATB1               // LED pin specification for BLED6
    // Program Interrupt Button
        #define PI _RB9                     // Program Interrupt Switch
    // Motor Connections
        #define MOTORpwm_L  PDC4            // PWM speed register for left motor
        #define MOTORpwm_R  PDC3            // PWM speed register for right motor
        #define MOTORdir_L  _LATG6          // Direction pin for left motor
        #define MOTORdir_R  _LATE6          // Direction pin for right motor
    // IR LEDs
        #define IR_1_TX  _LATG2             // LED pin specification for IRLED1
        #define IR_2_TX  _LATB13            // LED pin specification for IRLED2
        #define IR_3_TX  _LATG9             // LED pin specification for IRLED3
        #define IR_4_TX  _LATB3             // LED pin specification for IRLED4
        #define IR_5_TX  _LATD1             // LED pin specification for IRLED5
        #define IR_6_TX  _LATE4             // LED pin specification for IRLED6
    // Encoder Pins
        #define ENCODERpositionL POS1CNTL   // Left Encoder Position Value Register
        #define ENCODERpositionR POS2CNTL   // Right Encoder Position Value Register

// </editor-fold>
// <//editor-fold defaultstate="collapsed" desc="Human readable definitions">
// =============================================================
// Human readable definitions
// =============================================================

    #define OFF 0
    #define ON 1
    #define INVERT 3
    #define READ 0
    #define WRITE 1
    #define LEFT 0
    #define RIGHT 1
    #define REVERSE 0
    #define FORWARD 1
    #define STOP 0
    #define GO 1

// </editor-fold>
// <//editor-fold defaultstate="collapsed" desc="Constants">
// =============================================================
// Constants
// =============================================================

    // Delay loop values ??  There should be a better way to do this//Dear god there is
        #define DELAYslowSUPERSHORT 489414
        #define DELAYslowSHORT  1957656     // .25  Second SHORT Delay  in Powersaving mode or .033 Seconds in Normal Mode
        #define DELAYslowMEDIUM 3915313     // .5   Second MEDIUM Delay in Powersaving Mode or .065 Seconds in Normal Mode
        #define DELAYslowLONG   7830625     // 1    Second LONG Delay   in Powersaving Mode or .130 seconds in Normal Mode
        #define DELAYfastSHORT  14970313    // .25  Second Short Delay  in Normal Mode
        #define DELAYfastMEDIUM 29940625    // .5   Second Medium Delay in Normal Mode
        #define DELAYfastLONG   59881250    // 1    Second Long Delay   in Normal Mode
    // Motor Math Values
        #define MAXSPEED    5500            // Max PWM value for motors 5500
        #define Kp 1
        #define Ki .01
        #define Kd .01

// </editor-fold>
// <//editor-fold defaultstate="collapsed" desc="Variables">
// =============================================================
// Variables
// =============================================================

    // DEBUG variable for activating debug phase
        int DEBUG = 0;

    // Main clock configuration
        long FP = 40000000;
        long FCY = 40000000;        // 40 MIPs

         // Math for calculation of UART set

    // Motor Math Values
        #define MAXSPEED    5500            // Max PWM value for motors 5500
        #define Kp 1
        #define Ki .01
        #define Kd .01

    // Structured array for each map cell
        // Small array for Mini map
            struct  {   unsigned int CELLVALUE      : 4;
                        unsigned int W_WALL         : 1;
                        unsigned int E_WALL         : 1;
                        unsigned int S_WALL         : 1;
                        unsigned int N_WALL         : 1;
                        unsigned int UNUSEDbits9_16 : 8;
                    }MINIMAP[8][8];
        // Large array for Full size map
            struct  {   unsigned int CELLVALUE      : 4;
                        unsigned int W_WALL         : 1;
                        unsigned int E_WALL         : 1;
                        unsigned int S_WALL         : 1;
                        unsigned int N_WALL         : 1;
                        unsigned int UNUSEDbits9_16 : 8;
                    }MAP[16][16];
// </editor-fold>
// <editor-fold defaultstate="collapsed" desc="Function Definitions">
// =============================================================
// Function Definitions
// =============================================================
    // Encoder Functions
        int ENCODERposition(int Action, int Side, int Value);   // Read or Write an Encoder Position
    // Error Functions
        int ERROR(int cause);
    // Indicator Functions
        void LED(int LEDnumber, int Action);    // LEDnumber 1 - 6, Action ON, OFF, INVERT
        void LEDclear(void);
        void LEDstartup_sequence(void);
        void LEDblink (int LED, int number);
    // IR Functions
    // Menu Functions
    // Motor Functions
        int MOTORset (int side, int direction, int speed);
        int MOTORallstop(void);
        int MOTORstraight (void);
        int MOTORturn (int direction);
    

// </editor-fold>
// <editor-fold defaultstate="collapsed" desc="Main">

//=================================================================
//*********************** MAIN SUBROUTINE *************************
//=================================================================
int main(void) {
    RCONbits.SWDTEN = 0;    // Turn Off Software Watch Dog Timer
    CONFIG_IO();            // Configure Pins as Input or Output & Analog or Digital
    CONFIG_PWM();           // Configure Pulse Width Modulation
    CONFIG_QEI();           // Configure Quadrature Encoder Interface
    CONFIG_ADC();           // Configure Analog to Digital Converter
    SetupUART();
    CONFIG_UART();          // Configure UART
    //CONFIG_TIMERS();      // Configure timers and ISRs for IR ADC and battery monitoring
    CONFIG_CLOCKLOW();      // Slow Clock
    
    // DEBUG Mode
    if(DEBUG) {
        printf ("Setup Complete - Beginning Main Program\n");
    }
    
    BLED6 = 1;
    GLED5 = 0;
    
    _Bool mazeSolved;
//    newMap();
    
    // Main Mode Loop
    while(1) {
        
        // DEBUG
        __delay32(DELAYslowLONG);
        GLED5 = !GLED5;
        BLED6 = !BLED6;
        printf("Battery Level = :%d\n", BATTlevel); // Printing battery level
        
        // Solving the maze
        mazeSolved = 0;
        while(!mazeSolved) {
            
        }
    }
    
    // End of Main Program
    return(0);
}
// </editor-fold>
int BATTdisplay (void){
    BATTlevel = ADCget(0);
    if (BATTlevel >= 2000 && BATTlevel < 2333 )
    {
        RLED1 = 1;
        RLED2 = 0;
        RLED3 = 0;
        RLED4 = 0;
        return(1);
    }
    else if (BATTlevel >= 2333 && BATTlevel < 2500)
    {
        RLED1 = 1;
        RLED2 = 1;
        RLED3 = 0;
        RLED4 = 0;
        return(2);
    }
    else if (BATTlevel >= 2500 && BATTlevel < 3000)
    {
        RLED1 = 1;
        RLED2 = 1;
        RLED3 = 1;
        RLED4 = 0;
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
        RLED1 = 0;
        RLED2 = 0;
        RLED3 = 0;
        RLED4 = 0;
    }
    return(9001);
}
// <editor-fold defaultstate="collapsed" desc="Configuration_Subroutines">
// =================================================================
// CONFIGURATION SUBROUTINES
// =================================================================
// </editor-fold>
// <//editor-fold defaultstate="collapsed" desc="Configure_Clock">
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
// <//editor-fold defaultstate="collapsed" desc="Configure_IO">
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

// <//editor-fold defaultstate="collapsed" desc="Configure ADC">
//=================================================================
//***************************** ADC *******************************
//=================================================================
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

    return(9000);
}
// </editor-fold>
// <//editor-fold defaultstate="collapsed" desc="Configure Timers">
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

