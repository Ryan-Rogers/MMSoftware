// <editor-fold defaultstate="collapsed" desc="Menu">
// =================================================================
// MENU SUBROUTINES
// =================================================================
// </editor-fold>

#include "Global.h" // Global declarations for Micromouse 2015-16

/*
int MENU (int level){
    if (DEBUG) printf("Entering Menu with MENUlevel %u\n", level);
    if (level == 0) level = MENUlevel0(level);
    else if (level == 1) level = MENUlevel1(level);
    else if (level == 5) level = MENUlevela(level);
    else if (level == 6) level = MENUlevelb(level);
    else if (level == 7) level = MENUlevelc(level);
    else if (level == 2) level = MENUlevel2(level);
    else if (level == 3) level = MENUlevel3(level);
    else if (level == 4) level = MENUlevel4(level);
    else ERROR(1);
    return (level);
}

int MENUlevel0(int CalledFrom){  // MENU Level 0 (OPTIONS: SettingsTestingOther, Mapping, TrialRunW, TrialRunWO)
    if (DEBUG) printf("Main Menu - 1 = Settings Submenu, 2 = Mapping Phase, 3 = Trial Run, 4 = Unused\n");
    LEDclear();// Clear LEDs
    ENCODERposition(WRITE, LEFT, 45535);// Set Encoder Position Values to Start Positions
    ENCODERposition(WRITE, RIGHT, 2000);
    // Begin Encoder Check Loop

    while(ENCODERposition(READ, LEFT, 0) >= 10000 && ENCODERposition(READ, LEFT, 0) < 30000){
        //if (DEBUG) printf("Lenc = %u, Renc = %u\n",ENCODERposition(READ, LEFT, 0), ENCODERposition(READ, RIGHT, 0));
        if(ENCODERposition(READ, RIGHT, 0) < 1000){// BOTTOM LIMIT
            ENCODERposition(WRITE, RIGHT, 8000);}
        // Selection 1 - Settings, Testing, Other
        if(ENCODERposition(READ, RIGHT, 0) >= 1000 && ENCODERposition(READ, RIGHT, 0) < 3000){
            LEDclear();
            RLED1 = ON;// Illuminate RLED1
            MENUlevel = 1;}// Set MENUlevel to 1
        // Selection 2 - Mapping Phase
        if(ENCODERposition(READ, RIGHT, 0) >= 3000 && ENCODERposition(READ, RIGHT, 0) < 5000){
            LEDclear();
            RLED2 = ON;// Illuminate RLED2
            MENUlevel = 2;}// Set MENUlevel to 2
        // Selection 3 - Trial Run W/O Error Checking
        if(ENCODERposition(READ, RIGHT, 0) >= 5000 && ENCODERposition(READ, RIGHT, 0) < 7000){
            LEDclear();
            RLED3 = ON;// Illuminate RLED2
            MENUlevel = 3;}// Set MENUlevel to 3
        // Selection 4 - Trial Run W/ Error Checking
        if(ENCODERposition(READ, RIGHT, 0) >= 7000 && ENCODERposition(READ, RIGHT, 0) < 9000){
            LEDclear();
            RLED4 = ON;// Illuminate RLED2
            MENUlevel = 4;}// Set MENUlevel to 4
        // TOP LIMIT
        if(ENCODERposition(READ, RIGHT, 0) >= 9000){
            ENCODERposition(WRITE, RIGHT, 2000);}
        __delay32(DELAYslowSHORT);
    }


    if(ENCODERposition(READ, LEFT, 0) < 10000)   // GO BACK
    {
        //if (DEBUG) printf("BACK  Lenc = %u, Renc = %u\n",ENCODERposition(READ, LEFT, 0), ENCODERposition(READ, RIGHT, 0));
        // Restart MENUlevel0 by setting MENUlevel to zero and exiting to MAIN()
        MENUlevel = 0;
        return(MENUlevel);
    }
    else if(ENCODERposition(READ, LEFT, 0) >= 30000)   // SELECT CURRENT FUNCTION
    {
        //if (DEBUG) printf("FORWARD  Lenc = %u, Renc = %u\n",ENCODERposition(READ, LEFT, 0), ENCODERposition(READ, RIGHT, 0));
        // Blink Current Menu Level Indicator &
        // Go to selected menu level by returning to main and rerunning MENU subroutine
        if(MENUlevel == 1)
        {
            // Settings, Testing, Other
            RLED1 = !RLED1;// Blink RLED1
            __delay32(DELAYslowSHORT);
            RLED1 = !RLED1;// Blink RLED1
            __delay32(DELAYslowSHORT);
            RLED1 = !RLED1;// Blink RLED1
            __delay32(DELAYslowSHORT);
            RLED1 = !RLED1;// Blink RLED1
            __delay32(DELAYslowSHORT);
        }
        else if(MENUlevel == 2)
        {
            // Mapping Phase
            RLED2 = !RLED2;// Blink RLED2
            __delay32(DELAYslowSHORT);
            RLED2 = !RLED2;// Blink RLED2
            __delay32(DELAYslowSHORT);
            RLED2 = !RLED2;// Blink RLED2
            __delay32(DELAYslowSHORT);
            RLED2 = !RLED2;// Blink RLED2
            __delay32(DELAYslowSHORT);
        }
        else if(MENUlevel == 3)
        {
            // Trial Run W/O Error Checking
            RLED3 = !RLED3;// Blink RLED3
            __delay32(DELAYslowSHORT);
            RLED3 = !RLED3;// Blink RLED3
            __delay32(DELAYslowSHORT);
            RLED3 = !RLED3;// Blink RLED3
            __delay32(DELAYslowSHORT);
            RLED3 = !RLED3;// Blink RLED3
            __delay32(DELAYslowSHORT);
        }
        else if(MENUlevel == 4)
        {
            // Trial Run W Error Checking
            RLED4 = !RLED4;// Blink RLED4
            __delay32(DELAYslowSHORT);
            RLED4 = !RLED4;// Blink RLED4
            __delay32(DELAYslowSHORT);
            RLED4 = !RLED4;// Blink RLED4
            __delay32(DELAYslowSHORT);
            RLED4 = !RLED4;// Blink RLED4
            __delay32(DELAYslowSHORT);
        }
        else
        {
            ERROR(1);
        }
    }
    else // Error
    {
        ERROR(1);
    }
    return(MENUlevel);
}

int MENUlevel1(int CalledFrom){  // MENU Level 1 (OPTIONS: Settings, Testing, Other

    if (DEBUG) printf("Settings Submenu, 2 = Settings, 3 = Testing, 4 = OTHER\n");
    // Clear LEDs
    LEDclear();
    // Set Encoder Position Values to Start Positions
    ENCODERposition(WRITE, LEFT, 45535);// Set Encoder Position Values to Start Positions
    ENCODERposition(WRITE, RIGHT, 2000);
    // Begin Encoder Check Loop
    while(ENCODERposition(READ, LEFT, 0) >= 10000 && ENCODERposition(READ, LEFT, 0) < 30000)
    {
        // BOTTOM LIMIT
        if(ENCODERposition(READ, RIGHT, 0) < 1000)
        {
            ENCODERposition(WRITE, RIGHT, 6000);
        }
        // Selection 11 - Settings
        if(ENCODERposition(READ, RIGHT, 0) >= 1000 && ENCODERposition(READ, RIGHT, 0) < 3000)
        {
            LEDclear();
            RLED1 = ON;// Illuminate RLED1
            RLED2 = ON;// Illuminate RLED2
            MENUlevel = 5;// Set MENUlevel to 11
        }
        // Selection 12 - Testing
        if(ENCODERposition(READ, RIGHT, 0) >= 3000 && ENCODERposition(READ, RIGHT, 0) < 5000)
        {
            LEDclear();
            RLED1 = ON;// Illuminate RLED1
            RLED3 = ON;// Illuminate RLED3
            MENUlevel = 6;// Set MENUlevel to 12
        }
        // Selection 13 - Other
        if(ENCODERposition(READ, RIGHT, 0) >= 5000 && ENCODERposition(READ, RIGHT, 0) < 7000)
        {
            LEDclear();
            RLED1 = ON;// Illuminate RLED1
            RLED4 = ON;// Illuminate RLED4
            MENUlevel = 7;// Set MENUlevel to 13
        }
        // TOP LIMIT
        if(ENCODERposition(READ, RIGHT, 0) >= 7000)
        {
            ENCODERposition(WRITE, RIGHT, 2000);
        }
        __delay32(DELAYslowSHORT);
    }
    if(ENCODERposition(READ, LEFT, 0) < 10000)   // GO BACK
    {
        // Restart MENUlevel0 by setting MENUlevel to zero and exiting to MAIN()
        MENUlevel = 0;
        return(MENUlevel);
    }
    else if(ENCODERposition(READ, LEFT, 0) >= 30000)   // SELECT CURRENT FUNCTION
    {
        // Blink Current Menu Level Indicator &
        // Go to selected menu level by returning to main and rerunning MENU subroutine
        if(MENUlevel == 5)
        {
            // Settings
            RLED2 = !RLED2;// Blink RLED2
            __delay32(DELAYslowSHORT);
            RLED2 = !RLED2;// Blink RLED2
            __delay32(DELAYslowSHORT);
            RLED2 = !RLED2;// Blink RLED2
            __delay32(DELAYslowSHORT);
            RLED2 = !RLED2;// Blink RLED2
            __delay32(DELAYslowSHORT);
        }
        else if(MENUlevel == 6)
        {
            // Testing
            RLED3 = !RLED3;// Blink RLED3
            __delay32(DELAYslowSHORT);
            RLED3 = !RLED3;// Blink RLED3
            __delay32(DELAYslowSHORT);
            RLED3 = !RLED3;// Blink RLED3
            __delay32(DELAYslowSHORT);
            RLED3 = !RLED3;// Blink RLED3
            __delay32(DELAYslowSHORT);
        }
        else if(MENUlevel == 7)
        {
            // Other Programs
            RLED4 = !RLED4;// Blink RLED4
            __delay32(DELAYslowSHORT);
            RLED4 = !RLED4;// Blink RLED4
            __delay32(DELAYslowSHORT);
            RLED4 = !RLED4;// Blink RLED4
            __delay32(DELAYslowSHORT);
            RLED4 = !RLED4;// Blink RLED4
            __delay32(DELAYslowSHORT);
        }
        else
        {
            ERROR(1);
        }
    }
    else // Error
    {
        ERROR(1);
    }
    return(MENUlevel);
}

int MENUlevela(int CalledFrom){ // Menu Level 11 (Settings)
    if (DEBUG) printf("Settings Menu\n");
    LEDclear();
    RLED1 = ON;
    RLED2 = ON;
    SETTINGS();
    __delay32(DELAYslowSHORT);
    //ERROR(5);
    return(0);
}

int MENUlevelb(int CalledFrom){ // Menu Level 12 (Testing)
    if (DEBUG) printf("Testing Menu\n");
    LEDclear();
    RLED1 = ON;
    RLED3 = ON;
    TESTING();
    __delay32(DELAYslowSHORT);
    //ERROR(6);
    return(0);
}

int MENUlevelc(int CalledFrom){ // Menu Level 13 (Other Programs)
    if (DEBUG) printf("OTHER Menu\n");
    LEDclear();
    RLED1 = ON;
    RLED4 = ON;
    OTHER();
    __delay32(DELAYslowSHORT);
    //ERROR(7);
    return(0);
}

int MENUlevel2(int CalledFrom){  // Menu Level 2 (Mapping)
    if (DEBUG) printf("Mapping Phase Preparation\n");
    LEDclear();
    RLED2 = ON;
    CalledFrom = MAPPING();
    return(CalledFrom);
}

int MENUlevel3(int CalledFrom){  // Menu Level 3 (Trial Run W/O Error Checking)
    if (DEBUG) printf("Trial Run Phase Preparation\n");
    LEDclear();
    RLED3 = ON;
    CalledFrom = TRIALS();
    return(CalledFrom);
}

int MENUlevel4(int CalledFrom){  // Menu Level 4 (Trial Run W Error Checking)
    if (DEBUG) printf("Menu Level 4 Entered\n");
    LEDclear();
    RLED4 = ON;
    __delay32(DELAYslowLONG);
    return(0);
}

int SETTINGS (void){
    if (DEBUG) printf("Entering Settings Menu\n");
    __delay32(DELAYslowLONG);
    if (DEBUG) printf("Settings Menu Exited\n");
    return(5);
}

int TESTING (void){


    CONFIG_CLOCKHIGH(); // Start High Clock
//    if (DEBUG) // Record a Data Set
//    {
//        if (DEBUG) printf("Test Loop Entered - Press PI button to start recording sensor data\n");
//        if (DEBUG) printf("Press PI again to end recording session or wait for DATA limit\n");
//        // Wait for Button Press
//        while(PI){}
//        // Set initial values
//        LEDblink(5,5);
//        LEDclear();
//        RLED1 = 1;
//        RLED3 = 1;
//        x = 0;
//        y = 0;
//        DATAcount = 0;
//        DATAtransmit = 0;
//        ENCODERposition(WRITE, RIGHT, 0);
//        ENCODERposition(WRITE, LEFT, 0);
//        // Loop Recording until button press or limit of MOVEMENTrecord array
//        while(PI)
//        {
//            RLED1 = !RLED1;
//            RLED2 = !RLED2;
//            RLED3 = !RLED3;
//            RLED4 = !RLED4;
//            DATA[DATAcount].direction = 0;
//            DATA[DATAcount].x = 0;
//            DATA[DATAcount].y = 0;
//            DATA[DATAcount].battery = ADCget(0);
//            DATA[DATAcount].encoder_L = ENCODERposition(READ, LEFT, 0);
//            DATA[DATAcount].encoder_R = ENCODERposition(READ, RIGHT, 0);
//            DATA[DATAcount].adc1 = ADCget(1);
//            DATA[DATAcount].adc2 = ADCget(2);
//            DATA[DATAcount].adc3 = ADCget(3);
//            DATA[DATAcount].adc4 = ADCget(4);
//            DATA[DATAcount].adc5 = ADCget(5);
//            DATA[DATAcount].adc6 = ADCget(6);
//            __delay32(DELAYslowSHORT); // About 30 data sets per second or 16 seconds of recording
//            if (PI && DATAcount < SENSORdataLIMIT)DATAcount++;
//            else break;
//        }
//        LEDclear();
//        RLED1 = 1;
//        LEDblink(5,5);
//        __delay32(DELAYfastLONG);
//        if (DEBUG) printf("Clear Terminal and PRESS PI to begin transmission\n");
//        // Wait for Button Press
//        RLED2 = 1;
//        while(PI){}
//        RLED3 = 1;
//        __delay32(DELAYfastLONG);
//        printf("Record Number, Dir, X, Y, Batt, encL, encR, adc1, adc2, adc3, adc4, adc5, adc6\n");
//        // Loop Transmiting button press or limit of RECORDmove
//        while(DATAtransmit < DATAcount)
//        {
//            printf("%u,",DATAtransmit);
//            printf("%u,",DATA[DATAtransmit].direction);
//            printf("%u,",DATA[DATAtransmit].x);
//            printf("%u,",DATA[DATAtransmit].y);
//            printf("%u,",DATA[DATAtransmit].battery);
//            printf("%u,",DATA[DATAtransmit].encoder_L);
//            printf("%u,",DATA[DATAtransmit].encoder_R);
//            printf("%u,",DATA[DATAtransmit].adc1);
//            printf("%u,",DATA[DATAtransmit].adc2);
//            printf("%u,",DATA[DATAtransmit].adc3);
//            printf("%u,",DATA[DATAtransmit].adc4);
//            printf("%u,",DATA[DATAtransmit].adc5);
//            printf("%u\n",DATA[DATAtransmit].adc6);
//            if (PI)DATAtransmit++;
//            else break;
//        }
//        printf("End of Transmission\n");    // Print End of Transmission
//        RLED4 = 1;                          // Indicate Final Step Complete
//        __delay32(DELAYfastLONG);           // PI button debounce delay
//        while(PI){}                         // Wait for Button Press to Continue
//        LEDclear();                         // Clear red LEDs
//    }
//    else //  Avoidance Demo
//    {
    if (DEBUG) printf("Testing Started\n");
    int goalLlow, goalLhigh, goalRlow, goalRhigh, goalREACHED = 0, speedL, speedR;
    double accelL = .01, accelR = .01, decelL = 1, decelR = 1, PIDL, PIDR, wallF, accelLIMIT, decelLIMIT, perrorL = 0, perrorR = 0;
    int amount = 50000;
    if (DEBUG) printf("accelL, accelR, decelL, decelR, encL, encR, adc1, adc2, adc3, adc4, wallF, errorL, errorR, aerrorL, aerrorR, serrorL, serrorR, PIDL, PIDR, speedL, speedR\n");
    while(PI)
    {

        goalREACHED = 0;
        goalLlow = amount - 2000;
        goalLhigh = amount + 2000;
        goalRlow = amount - 2000;
        goalRhigh = amount + 2000;
        perrorL = errorL;
        perrorR = errorR;
        //if (DEBUG) printf("GOALS  LL(%u) LH(%u) RL(%u) RH(%u)\n", goalLlow, goalLhigh, goalRlow, goalRhigh);
        ENCODERreset();     // Reset Encoders
        aerrorL = 0;
        aerrorR = 0;
        // Set values for accel and deccel values
        accelLIMIT = amount * .25;
        decelLIMIT = amount * .75;
        if (DEBUG) printf("%5.2f, %5.2f\n", accelLIMIT, decelLIMIT);
        while(!goalREACHED && PI)
        {
            DATAcount = 1;
            NAVgetdataset();// Record Sensor Set
            DATAcount--;
            // Adjust Motors with Accel, Deccel 0 to 1
            if (DATA[DATAcount].encoder_L < accelLIMIT && accelL < 1)
                accelL = accelL + (.05 * accelL);// Check Accel
            else accelL = 1;
            if (DATA[DATAcount].encoder_R < accelLIMIT && accelR < 1)
                accelR = accelR + (.05 * accelR);// Check Accel
            else accelR = 1;
            if (DATA[DATAcount].encoder_L > decelLIMIT && decelL > 0)
                decelL = decelL - (.02 * decelL);// Check Deccel
            else decelL = 1;
            if (DATA[DATAcount].encoder_R > decelLIMIT && decelR > 0)
                decelR = decelR - (.02 * decelR);// Check Deccel
            else decelR = 1;


            if (DEBUG) printf("%5.2f, %5.2f, %5.2f, %5.2f, ", accelL, accelR, decelL, decelR);
            if (DEBUG) printf("%u, %u, %u, %u, %u, %u, ", DATA[DATAcount].encoder_L, DATA[DATAcount].encoder_R, DATA[DATAcount].adc1, DATA[DATAcount].adc2, DATA[DATAcount].adc3, DATA[DATAcount].adc4);
            // Adjust Motors with PID on IR's and Encoders 0 to 1
            wallF = 1 - (((double)DATA[DATAcount].adc1 + ((double)DATA[DATAcount].adc4)/2)/20);
            if (wallF > 1) wallF = 1;
            if (wallF < 0) wallF = 0;

            if (DEBUG) printf("%5.2f, ", wallF);


            errorL = (((double)DATA[DATAcount].adc3 + .1) / ((double)DATA[DATAcount].adc2 + .1) * 0.28307) - 1.00321;
            errorR = (((double)DATA[DATAcount].adc2 + .1) / ((double)DATA[DATAcount].adc3 + .1) * 0.28307) - 1.00321;
            if (errorL > 1) errorL = 1;
            if (errorL < -1) errorL = -1;
            if (errorR > 1) errorR = 1;
            if (errorR < -1) errorR = -1;

            aerrorL = aerrorL + errorL;
            aerrorR = aerrorR + errorR;
            if (aerrorL > 100) aerrorL = 100;
            if (aerrorL < -100) aerrorL = -100;
            if (aerrorR > 100) aerrorR = 100;
            if (aerrorR < -100) aerrorR = -100;

            serrorL = (errorL - perrorL)/(DATA[DATAcount].encoder_L-DATA[DATAcount-1].encoder_L + .1);
            serrorR = (errorL - perrorL)/(DATA[DATAcount].encoder_R-DATA[DATAcount-1].encoder_R + .1);
            if (serrorL > 100) serrorL = 100;
            if (serrorL < -100) serrorL = -100;
            if (serrorR > 100) serrorR = 100;
            if (serrorR < -100) serrorR = -100;
            if (DEBUG) printf("%5.2f, %5.2f, %5.2f, %5.2f, %5.2f, %5.2f, ", errorL, errorR, aerrorL, aerrorR, serrorL, serrorR);

            PIDL = (1-(Kp * errorL)) * (1-(Ki * aerrorL)) * (1-(Kd * serrorL)); // + Kd * serrorL;
            PIDR = (1-(Kp * errorR)) * (1-(Ki * aerrorR)) * (1-(Kd * serrorR)); // + Kd * serrorR;
            if (DEBUG) printf("%5.2f, %5.2f, ", PIDL, PIDR);

            // set speedL and speedR for next set
            speedL = SETspeed * accelL * decelL * PIDL * wallF;// 0 to 100 percent for output
            speedR = SETspeed * accelR * decelR * PIDR * wallF;// o to 100 percent for output

            if (speedL < 0) speedL = 0;
            if (speedL > 100) speedL = 100 * SETspeed;
            if (speedL < 0) speedR = 0;
            if (speedL > 100) speedR = 100 * SETspeed;

            if (DEBUG) printf("%u, %u,\n", speedL, speedR);
            // Set Motors
            MOTORset(LEFT, FORWARD, speedL);
            MOTORset(RIGHT, FORWARD, speedR);

            // If we have met our goal, set the goal flag
            if (ENCODERposition(READ, LEFT, 0) > goalLlow && ENCODERposition(READ, LEFT, 0) < goalLhigh && ENCODERposition(READ, RIGHT, 0) > goalRlow && ENCODERposition(READ, RIGHT, 0) < goalRhigh){
                goalREACHED = 1;
                if (DEBUG) printf("goalREACHED = %u\n", goalREACHED);}
            else if (ENCODERposition(READ, LEFT, 0) > goalLhigh || ENCODERposition(READ, RIGHT, 0) > goalRhigh){
                goalREACHED = 1;
                if (DEBUG) printf("Goal Passed");}
            //__delay32(DELAYfastSHORT);
            DATAcount++;

        }
        __delay32(DELAYfastLONG);

    }
//    }
    CONFIG_CLOCKLOW();                    // Return to Slow Clock
    return(6);
}

int OTHER (void){
    if (DEBUG) printf("Entering OTHER Option (MINIMAP Mapping Phase)\n");
    LEDclear();
    CONFIG_CLOCKHIGH();                         // Start High Clock
    MINIMAPPINGphase = 1;                       // Set MINIMAPPINGphase for navigation
    x = 0;                                      // Reset X coordinate
    y = 0;                                      // Reset Y coordinate
    GOALachieved = 0;                           // Reset Goal achievement
    STARTachieved = 0;                          // Reset Start achievement
    FLAGmappingCOMPLETE = 0;                    // Clear Mapping Phase Complete flag
    if (DEBUG) printf("OTHER variables initialized\n");
    if (!FLAGminimapINITIALIZED){               // Check for mini map initialization
        NAVmapinitilization(1);                 // initialize new minimap
        if (DEBUG) printf("New MINImap initialized\n");
        FLAGminimapINITIALIZED = 1;}            // Set flag for minimap initialized
    else
        if (DEBUG) printf("Old MINImap used\n");
    if (DEBUG) printf("Press button to begin 1 second wait in start square\n");
    while (PI){}                                // Wait for Button Press
    RLED1 = 1;
    __delay32(DELAYfastLONG);                   // Wait 1 second
    while(!GOALachieved && PI){          // Begin Mapping Loop (mapping complete when Nav to Goal and return)
        NAVnextmove();                          // Ask Navigation for next move to execute
        NAVexecutemove(NEXTaction, NEXTdirection, NEXTamount);               // Execute that move by setting motors (accel, deccel, PID)
        NAVanalyzedataset();}                    // Analyze Sensor Data Set
                                                // Return to menu with mapping phase complete flag set (Auto move to Trial Run)
    MOTORstop();

    if (DEBUG) printf("OTHER Option Exited\n");
    CONFIG_CLOCKLOW();                          // Return to Slow Clock
    return(7);
}

int MAPPING (void){
    if (DEBUG) printf("Entering Mapping Phase\n");
    CONFIG_CLOCKHIGH();                         // Start High Clock
    while (PI){}                                // Wait for Button Press
    MAPPINGphase = 1;                           // Set MAPPINGphase for navigation
    x = 0;                                      // Reset X coordinate
    y = 0;                                      // Reset Y coordinate
    GOALachieved = 0;                           // Reset Goal achievement
    STARTachieved = 0;                          // Reset Start achievement
    RUNcount++;                                 // Increment Run Count
    if (DEBUG) printf("RUNcount = %u\n", RUNcount);
    FLAGmappingCOMPLETE = 0;                    // Clear Mapping Phase Complete flag
    if (!FLAGmapINITIALIZED){                   // Is a map initialized in memory
        NAVmapinitilization(0);}                // If not, initialize a 16 x 16 map
    __delay32(DELAYfastLONG);                   // Wait 1 second in start square
    while(!FLAGmappingCOMPLETE && PI){          // Begin Mapping Loop (mapping complete when Nav to Goal and return)
        NAVnextmove();                          // Ask Navigation for next move to execute
        NAVexecutemove(NEXTaction, NEXTdirection, NEXTamount);               // Execute that move by setting motors (accel, deccel, PID)
        NAVgetdataset();                   // record sensor data
        NAVanalyzedataset();}                    // Analyze Sensor Data Set
    MAPPINGphase = 0;                           // Clear MAPPINGphase
    if (DEBUG) printf("Mapping Phase Complete\n");
    CONFIG_CLOCKLOW();                          // Return to Slow Clock
    if (!PI) return(0);                         // If PI button press return to main menu
    else if (FLAGmappingCOMPLETE) return(3);    // Return 3 to auto start trial run phase
    else return(2);                             // Return 2 to return to mapping phase
}

int TRIALS (void){
    if (DEBUG) printf("Entering Trial Run Phase, FLAGerrorchecking = %u\n", FLAGerrorchecking);
    if (FLAGerrorchecking) GLED5 = 1;
    CONFIG_CLOCKHIGH();                         // Start High Clock
    TRIALSphase = 1;                            // Set TRIALSphase for navigation
    x = 0;                                      // Reset X coordinate
    y = 0;                                      // Reset Y coordinate
    GOALachieved = 0;                           // Reset Goal achievement
    STARTachieved = 0;                          // Reset Start achievement
    RUNcount++;                                 // Increment Run Count
    FLAGtrialsCOMPLETE = 0;                     // Clear Trial Run complete Flag
    __delay32(DELAYfastLONG);                   // Wait 1 second in start square
    while(!FLAGtrialsCOMPLETE && PI){           // Begin Trial Run Loop
        NAVnextmove();                          // Ask Navigation for next move to execute
        NAVexecutemove(NEXTaction, NEXTdirection, NEXTamount);                   // Execute that move by setting motors (accel, deccel, PID)
        NAVgetdataset();  // record sensor data
        NAVanalyzedataset();}   // Analyze Sensor Data Set
    GLED5 = 0;                                  // Turn off GLED indicating trial with IMU error checking
    TRIALSphase = 0;                            // Clear TRIALSphase
    if (DEBUG) printf("Trial Run Phase Complete\n");
    CONFIG_CLOCKLOW();                          // Return to Slow Clock
    if (!PI) return(0);                         // If PI button press return to main menu
    else return(3);                             // Return 3 to auto start next trial run
}
*/