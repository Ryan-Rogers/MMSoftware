#include <Generic.h>
#include <stdio.h>          // Standard input and output functions
#include <stdlib.h>         // Standard utility functions
#include <xc.h>             // Generic include file for XC16
#include <libpic30.h>       // Useful exports from libpic30.a
#include <math.h> 
#include <p33EP512MC806.h>

// <editor-fold defaultstate="collapsed" desc="Pin Assignments">
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

// <editor-fold defaultstate="collapsed" desc="Human readable definitions">
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

// <editor-fold defaultstate="collapsed" desc="Constants">
// =============================================================
// Constants
// =============================================================

    // Delay loop values ??  There should be a better way to do this
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

// <editor-fold defaultstate="collapsed" desc="Variables">
// =============================================================
// Variables
// =============================================================

    // DEBUG variable for activating debug phase
        int DEBUG = 0;

    // Main clock configuration
        long FP = 40000000;
        long FCY = 40000000;        // 40 MIPs

    // UART speed configuration
        int BAUDRATE = 9600;
        long BRGVAL = 0;            // Math for calculation of UART set

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

    // Battery Functions
        // Sample Battery Voltage and Save to a Global Variable
    // Button Functions
    // Chip Configuration Functions
        void CONFIG_CLOCKHIGH(void);
        void CONFIG_CLOCKLOW(void);
        int CONFIG_IO(void);
        void CONFIG_QEI(void);
        void CONFIG_PWM(void);
        void CONFIG_ADC(void);
        int ADCget (int number);
        UINT16 SetupUART(void);
        int CONFIG_UART(void);


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
    // Navigation Functions
    // Test Functions

// </editor-fold>


// Other stuff
        /*

         // <editor-fold defaultstate="collapsed" desc="Declarations, Initializations & Definitions">
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
        #define SENSORdataLIMIT    500
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

         */