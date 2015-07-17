// <editor-fold defaultstate="collapsed" desc="Motor Subroutines">
// =================================================================
// MOTOR COMMANDS
// =================================================================
// </editor-fold>

#include "Global.h" // Global declarations for Micromouse 2015-16

int MOTORset (int side, int direction, int speed){
    // Set motor speed
    if (side == LEFT) // Left Side
    {
        if(direction == FORWARD) // Forward
        {
            MOTORdir_L = 0;
            MOTORpwm_L = (speed * .01)*MAXSPEED;
        }
        if(direction == REVERSE) // Reverse
        {
            MOTORdir_L = 1;
            MOTORpwm_L = MAXSPEED - ((speed * .01)*MAXSPEED);
        }
        return(0);
    }
    if (side == RIGHT) // Right side
    {
        if(direction == FORWARD) // Forward
        {
            MOTORdir_R = 0;
            MOTORpwm_R = MAXSPEED - ((speed * .01)*MAXSPEED);
        }
        if(direction == REVERSE) // Reverse
        {
            MOTORdir_R = 1;
            MOTORpwm_R = (speed * .01)*MAXSPEED;
        }
        return(0);
    }
    return(9000);
}

int MOTORallstop(void){
    // Stop Wheels and Set for forward direction
    // Left Wheel
    MOTORset(LEFT,FORWARD,0);
    // Right Wheel
    MOTORset(RIGHT,FORWARD,0);
    return(0);
}

int MOTORstraight (void){
    // Set motor direction Forward
    // Left Wheel
    MOTORset(LEFT,FORWARD,0);
    // Right Wheel
    MOTORset(RIGHT,FORWARD,0);
    return(0);
}

int MOTORturn (int direction){
    // Set motor direction
    if (direction == LEFT)
    {
        MOTORset(LEFT, REVERSE, 0);
        MOTORset(RIGHT, FORWARD, 0);
    }
    else if (direction == RIGHT)
    {
        MOTORset(RIGHT, REVERSE, 0);
        MOTORset(LEFT, FORWARD, 0);
    }
    else
    {
        ERROR(13);
    }
    return(0);
}

//int ACCEL(int target, int time)
//{
//    int gain = floor(target/time);
//    int i;
//    for(i=1;i<=time;i++)
//    {
//        PDC1 = i*gain;
//        PDC2 = i*gain;
//        __delay_ms(1);
//    }
//    PDC1 = gain*time;                              // Ensure Motor A is at target
//    PDC2 = gain*time;                              // Ensure Motor B is at target
//    return (0);                                 // Return from subroutine
//}
//
//int DECEL(int target, int time)
//{
//    int start1 = PDC1;                          // Get current speed motor A
//    int start2 = PDC2;                          // Get current speed motor B
//    int gain1 = floor((start1 - target)/time);  // Calculate decel gain A
//    int gain2 = floor((start2 - target)/time);  // Calculate decel gain B
//    int j;                                      // Define counter variable
//    for(j=1;j<=time;j++)                        // Loop to decrement PWM
//    {
//        PDC2 = start2-(j*gain2);
//        PDC1 = start1-(j*gain1);
//        __delay_ms(1);
//    }
//    PDC1 = target;                              // Ensure Motor A is at target
//    PDC2 = target;                              // Ensure Motor B is at target
//    return (0);                                 // Return from subroutine
//}
//
//int STOP(void)
//{
//    PDC1 = 0;                                   // Ensure Motor A is off
//    PDC2 = 0;                                   // Ensure Motor B is off
//    return (0);                                 // Return from subroutine
//}
//
//int TURN_right_apex(int speed,int gain)
//{
//    PDC1 = speed;                               // Set inner wheel to desired speed
//    PDC2 = speed*gain;                          // Accelerate outer wheel according to gain
//    return (0);
//}
//
//int TURN_left_apex(int speed,int gain)
//{
//    PDC1 = speed*gain;                          // Accelerate outer wheel according to gain
//    PDC2 = speed;                               // Set inner wheel to desired speed
//    return (0);
//}


/*int PID(void)
{

float leftDuty = 0.0;
float rightDuty = 0.0;

// K VALUES ARE TUNING CONSTANTS IN PI'S
// float Kp = 100, Ki = .001, Ksp = 0.6, Ksp2 = 2, Ksi = 0.007, baseScalar = 1.1;
// #define sensorcap 1
// Read in from registers
int encoderTicksR = 0; // Number of ticks counted by encoder
int encoderTicksL = 0;
int maxTicks = 0; // Maximum ticks per second of motor
int Ts = 0; //Sample time of encoders
float percent_motor_used = 0; // Value between 0 and 1
//
float referenceTicks = percent_motor_used * maxTicks * Ts;

// Current IR values

float BL_IR = 0; // Back Left
float BR_IR = 0; // Back Right

// Calibrated IR values when car is centered

float BL_calibrated = 0;
float BR_calibrated = 0;

// IR error variables

float BL_error = 0;
float BR_error = 0;

float BL_errorint = 0;
float BR_errorint = 0;

// Back Sensor PI's
float BL_PI = 0;
float BR_PI = 0;

// Motor error variables
float MotorL_error = 0; // Left motor
float MotorR_error = 0; // Right motor
float MotorL_errorint = 0;
float MotorR_errorint = 0;

// Motor PI's
float MotorL_PI = 0;
float MotorR_PI = 0;

// IR error calculations
BL_error = BL_calibrated - BL_IR;
BR_error = BR_calibrated - BR_IR;
BL_errorint = BL_errorint + BL_error;
BR_errorint = BR_errorint + BR_error;
if (BL_error > sensorcap)
	BL_error = sensorcap;
if (BR_error > sensorcap)
	BR_error = sensorcap;

// Back sensor PI
BL_PI = BL_error*Ksp + BL_errorint*Ksi;
BR_PI = BR_error*Ksp + BR_errorint*Ksi;

if (BL_PI > referenceTicks)
	BL_PI = referenceTicks;
if (BL_PI < 0)
	BL_PI = 0;
if (BR_PI > referenceTicks)
	BR_PI = referenceTicks;
if (BR_PI < 0)
	BR_PI = 0;

// Calculate motor error and PI (includes speed error from encoders)

referenceTicks = percent_motor_used * maxTicks * Ts;

MotorL_error = referenceTicks - BL_PI - encoderTicksL;
MotorR_error = referenceTicks - BR_PI - encoderTicksR;

MotorL_errorint = MotorL_errorint + MotorL_error;
MotorR_errorint = MotorR_errorint + MotorR_error;

MotorL_PI = MotorL_error*Kp + MotorL_errorint*Ki;
MotorR_PI = MotorR_error*Kp + MotorL_errorint*Ki;

if (MotorL_PI > 1)
	MotorL_PI = 1;
if (MotorL_PI < 0)
	MotorL_PI = 0;
if (MotorR_PI > 1)
	MotorR_PI = 1;
if (MotorR_PI < 0)
	MotorR_PI = 0;
return (0);
}*/
