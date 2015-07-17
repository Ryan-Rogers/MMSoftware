// <editor-fold defaultstate="collapsed" desc="Navigation Subroutines">
// =================================================================
// NAVIGATION COMMANDS
// =================================================================
// </editor-fold>

#include "Global.h" // Global declarations for Micromouse 2015-16
/*
int NAVmapinitilization (int MINI){
    int x, y;
    if (DEBUG) printf("NAVmapinitialization with MINI = %u\n", MINI);
    if (MINI){// Initialize MINIMAP CELLVALUES
    for (x=0; x<8; x++){
        for (y=0; y<8; y++){
            MINIMAP[x][y].CELLVALUE = 0;}}
    MINIMAP[0][0].CELLVALUE = 5;  // Cell Value of Start Position
    MINIMAP[3][3].CELLVALUE = 7;  // Cell Value of Goal Position
    MINIMAP[3][4].CELLVALUE = 7;  // Cell Value of Goal Position
    MINIMAP[4][3].CELLVALUE = 7;  // Cell Value of Goal Position
    MINIMAP[4][4].CELLVALUE = 7;  // Cell Value of Goal Position
    // Initialize MINIMAP walls
    for (x=0; x<8; x++){
        MINIMAP[x][0].S_WALL = 1;} // ADD south border
    for (x=0; x<8; x++){
        MINIMAP[x][7].N_WALL = 1;} // ADD north border
    for (y=0; y<8; y++){
        MINIMAP[0][y].W_WALL = 1;} // ADD west border
    for (y=0; y<8; y++){
        MINIMAP[7][y].E_WALL = 1;} // ADD east border
    MINIMAP[0][0].E_WALL = 1; // Add Start Square E wall
    }

    else{// Initialize MAP CELLVALUES
    for (x=0; x<16; x++){
        for (y=0; y<16; y++){
            MAP[x][y].CELLVALUE = 0;}}
    MINIMAP[0][0].CELLVALUE = 5;  // Cell Value of Start Position
    MINIMAP[7][7].CELLVALUE = 7;  // Cell Value of Goal Position
    MINIMAP[7][8].CELLVALUE = 7;  // Cell Value of Goal Position
    MINIMAP[8][7].CELLVALUE = 7;  // Cell Value of Goal Position
    MINIMAP[8][8].CELLVALUE = 7;  // Cell Value of Goal Position
    // Initialize MAP walls
    for (x=0; x<16; x++){
        MINIMAP[x][0].S_WALL = 1;} // ADD south border
    for (x=0; x<16; x++){
        MINIMAP[x][15].N_WALL = 1;} // ADD north border
    for (y=0; y<16; y++){
        MINIMAP[0][y].W_WALL = 1;} // ADD west border
    for (y=0; y<16; y++){
        MINIMAP[15][y].E_WALL = 1;} // ADD east border
    MINIMAP[0][0].E_WALL = 1; // Add Start Square E wall
    }
    if (DEBUG){// Print out map
        if (MINI){
            for (x=0; x<8; x++){
                for (y=0; y<8; y++){
                    printf ("Cell (%u,%u) = %u  N(%u) S(%u) E(%u) W(%u)\n", x, y, MINIMAP[x][y].CELLVALUE, MINIMAP[x][y].N_WALL, MINIMAP[x][y].S_WALL, MINIMAP[x][y].E_WALL, MINIMAP[x][y].W_WALL);
                }
            }
        }
    }
    x = 0;
    y = 0;

    return(0);
}

int NAVnextmove (void){
    if (DEBUG) printf("NAVnextmove\n");
    double Ncell, Scell, Ecell, Wcell, Ndistance, Sdistance, Edistance, Wdistance, centerx, centery;

    if (MINIMAPPINGphase)
    {
            centerx = 3.5;
            centery = 3.5;
            if (DEBUG) printf("Current Cell = (%u, %u) facing %c\n", x, y, CURRENTdirection);
            if (DEBUG) printf("Checking for walls and setting cell values for function\n");
            // Check for openings in walls and get cell values setting walled directions to 15 (DO NOT TRAVEL)
            if(!MINIMAP[x][y].N_WALL){// If no north wall
                Ncell = MINIMAP[x][y+1].CELLVALUE;// Check north cell value
                Ndistance = sqrt((((centerx - x)*(centerx - x))+((centery - (y+1))*(centery - (y+1)))));}
            else Ncell = 15;

            if(!MINIMAP[x][y].S_WALL){// If no south wall
                Scell = MINIMAP[x][y-1].CELLVALUE;// Check south cell value
                Sdistance = sqrt((((centerx - x)*(centerx - x))+((centery - (y-1))*(centery - (y-1)))));}
            else Scell = 15;

            if(!MINIMAP[x][y].E_WALL){// If no east wall
                Ecell = MINIMAP[x+1][y].CELLVALUE;// Check east cell value
                Edistance = sqrt(((centerx - (x+1))*(centerx - (x+1))+(centery - y)*(centery - y)));}
            else Ecell = 15;

            if(!MINIMAP[x][y].W_WALL){// If no west wall
                Wcell = MINIMAP[x-1][y].CELLVALUE;// Check west cell value
                Wdistance = sqrt(((centerx - (x-1))*(centerx - (x-1))+(centery - y)*(centery - y)));}
            else Wcell = 15;

            if (DEBUG) printf("Ncell = %5.2f Scell = %5.2f Ecell = %5.2f Wcell = %5.2f\n", Ncell, Scell, Ecell, Wcell);
            // Set travel direction based on surrounding cell values and distance from goal (15 wall scenarios)
            if (!GOALachieved){         // Navigate Toward Goal trying most direct route
                if (DEBUG) printf("GOALachieved = %u\n", GOALachieved);
                if (Ncell == 0 || Ecell == 0 || Scell == 0 || Wcell == 0){// Check for untravelled cells
                    // What combination is untravelled and which is closest to center
                    if (Ncell == 0){//n
                        if (Scell == 0){//ns
                            if (Ecell == 0){//nse
                                if (Wcell == 0){//nsew
                                    if (Ndistance < Sdistance && Ndistance < Edistance && Ndistance < Wdistance){NEWdirection = 'n';}
                                    else if (Sdistance < Edistance && Sdistance < Wdistance && Sdistance < Ndistance){NEWdirection = 's';}
                                    else if (Edistance < Wdistance && Edistance < Ndistance && Edistance < Sdistance){NEWdirection = 'e';}
                                    else if (Wdistance < Ndistance && Wdistance < Sdistance && Wdistance < Edistance){NEWdirection = 'w';}
                                    // POSSIBLY ADD MORE POSIBILITIES
                                }
                                if (Ndistance < Sdistance && Ndistance < Edistance){NEWdirection = 'n';}
                                else if (Sdistance < Edistance && Sdistance < Ndistance){NEWdirection = 's';}
                                else if (Edistance < Sdistance && Edistance < Ndistance){NEWdirection = 'e';}
                                else {NEWdirection = 'n';}// POSSIBLY ADD MORE POSIBILITIES
                            }
                            else if (Wcell == 0){//nsw
                                if (Ndistance < Sdistance && Ndistance < Wdistance){NEWdirection = 'n';}
                                else if (Sdistance < Wdistance && Sdistance < Ndistance){NEWdirection = 's';}
                                else if (Wdistance < Sdistance && Wdistance < Ndistance){NEWdirection = 'w';}
                                else {NEWdirection = 'n';}// POSSIBLY ADD MORE POSIBILITIES
                            }
                            else{
                                if (Ndistance < Sdistance){NEWdirection = 'n';}
                                else if (Sdistance < Ndistance){NEWdirection = 's';}
                                else {NEWdirection = 'n';;}
                            }
                        }
                        else if (Ecell == 0){//ne
                            if (Wcell == 0){  //new
                                if (Ndistance < Edistance && Ndistance < Wdistance){NEWdirection = 'n';}
                                else if (Edistance < Wdistance && Edistance < Ndistance){NEWdirection = 'e';}
                                else if (Wdistance < Edistance && Wdistance < Ndistance){NEWdirection = 'w';}
                                else {NEWdirection = 'n';}// POSSIBLY ADD MORE POSIBILITIES
                            }
                            else{
                                if (Ndistance < Edistance){NEWdirection = 'n';}
                                else if (Edistance < Ndistance){NEWdirection = 'e';}
                                else {NEWdirection = 'n';;}
                            }
                        }
                        else if (Wcell == 0){//nw
                            if (Ndistance < Wdistance){NEWdirection = 'n';}
                            else if (Wdistance < Ndistance){NEWdirection = 'w';}
                            else {NEWdirection = 'n';;}
                        }
                        else {NEWdirection = 'n';}
                    }
                    else if (Scell == 0){//s
                        if (Ecell == 0){//se
                            if (Wcell == 0){//sew
                                if (Sdistance < Edistance && Sdistance < Wdistance){NEWdirection = 's';}
                                else if (Edistance < Wdistance && Edistance < Sdistance){NEWdirection = 'e';}
                                else if (Wdistance < Sdistance && Wdistance < Sdistance){NEWdirection = 'w';}
                                else {NEWdirection = 's';}// POSSIBLY ADD MORE POSIBILITIES
                            }
                            else{
                                if (Sdistance < Edistance ){NEWdirection = 's';}
                                else if (Edistance < Sdistance){NEWdirection = 'e';}
                                else {NEWdirection = 's';;}
                            }
                        }
                        else if (Wcell == 0){//sw
                            if (Sdistance < Wdistance ){NEWdirection = 's';}
                            else if (Wdistance < Sdistance){NEWdirection = 'w';}
                            else {NEWdirection = 's';;}
                        }
                        else {NEWdirection = 's';}
                    }
                    else if (Ecell == 0){//e
                        if (Wcell == 0){//ew
                            if (Edistance < Wdistance){NEWdirection = 'e';}
                            else if (Wdistance < Edistance){NEWdirection = 'w';}
                            else {NEWdirection = 'w';;}
                        }
                        else {NEWdirection = 'e';}
                    }
                    else if (Wcell == 0){//w
                        NEWdirection = 'w';
                    }
                    else {ERROR(14);}//none found so error in previous logic
                }
                else if (Ncell < 15 && Scell < 15 && Ecell < 15 && Wcell < 15){// else check for lowest travelled cells

                }
                else {ERROR(14);}// otherwise error in logic
                }
            else if (!STARTachieved){   // Navigate Toward Start following different path to explore more
                if (DEBUG) printf("STARTachieved = %u\n", STARTachieved);
                }




            if (DEBUG) printf("NEWdirection = %c\n", NEWdirection);

            // if new travel direction is different than current travel direction TURN else travel STRAIGHT
            if (NEWdirection != CURRENTdirection) // TURN
            {
                if (DEBUG) printf("NEW != CURRENT direction\n");
                if (NEWdirection == 'n' && CURRENTdirection == 'e'){ NEXTdirection = turnL; NEXTamount = DEGREES90;}
                else if (NEWdirection == 'n' && CURRENTdirection == 's'){ NEXTdirection = turnR; NEXTamount = DEGREES180;}
                else if (NEWdirection == 'n' && CURRENTdirection == 'w'){ NEXTdirection = turnR; NEXTamount = DEGREES90;}
                else if (NEWdirection == 'e' && CURRENTdirection == 's'){ NEXTdirection = turnL; NEXTamount = DEGREES90;}
                else if (NEWdirection == 'e' && CURRENTdirection == 'w'){ NEXTdirection = turnR; NEXTamount = DEGREES180;}
                else if (NEWdirection == 'e' && CURRENTdirection == 'n'){ NEXTdirection = turnR; NEXTamount = DEGREES90;}
                else if (NEWdirection == 's' && CURRENTdirection == 'w'){ NEXTdirection = turnL; NEXTamount = DEGREES90;}
                else if (NEWdirection == 's' && CURRENTdirection == 'n'){ NEXTdirection = turnR; NEXTamount = DEGREES180;}
                else if (NEWdirection == 's' && CURRENTdirection == 'e'){ NEXTdirection = turnR; NEXTamount = DEGREES90;}
                else if (NEWdirection == 'w' && CURRENTdirection == 'n'){ NEXTdirection = turnL; NEXTamount = DEGREES90;}
                else if (NEWdirection == 'w' && CURRENTdirection == 'e'){ NEXTdirection = turnR; NEXTamount = DEGREES180;}
                else if (NEWdirection == 'w' && CURRENTdirection == 's'){ NEXTdirection = turnR; NEXTamount = DEGREES90;}
                NEXTaction = GO;
                if (DEBUG) printf("NEXTaction(%u), NEXTdirection(%u), NEXTamount(%u)\n",NEXTaction, NEXTdirection, NEXTamount);
                return(0);
            }
            else    // Go Straight 1 cell
            {
                if (DEBUG) printf("NEW = CURRENT direction");
                NEXTaction = GO;
                NEXTdirection = STRAIGHT;
                NEXTamount = HALFCELL;
                if (DEBUG) printf("NEXTaction(%u), NEXTdirection(%u), NEXTamount(%u)\n",NEXTaction, NEXTdirection, NEXTamount);
                return(0);
            }

        }

    else if (MINITRIALSphase)
    {
        if (!GOALachieved)  // Navigate Toward Goal trying most direct route
        {
            // Check surrounding cells
        }
        else                // Navigate Toward Start via different path
        {

        }
    }
    else if (MAPPINGphase)// Check what phase we are comming from
    {
        if (!GOALachieved)  // Navigate Toward Goal trying most direct route
        {
            // Check surrounding cells
        }
        else                // Navigate Toward Start via different path
        {

        }
    }
    else if (TRIALSphase)
    {
        if (!GOALachieved)  // Navigate Toward Goal via fastest route
        {

        }
        else                // Navigate Toward Start via fastest route
        {

        }
    }

    // Analyze map from current location and return next move
    // Current Location is x and y, facing ? direction
    // Depends on path  (Toward Goal)(Return From Goal)(mapping or trial run)
    // set NEXTaction
    // set NEXTdirection
    // set NEXTamount
return(0);
}

int NAVexecutemove (int action, int direction, int amount){
    if (DEBUG) printf("NAVexecutemove\n");
    int goalLlow, goalLhigh, goalRlow, goalRhigh, goalREACHED = 0, speedL, speedR;
    double accelL = .01, accelR = .01, decelL = 1, decelR = 1, PIDL, PIDR, wallF, distanceL, distanceR, accelLIMIT, decelLIMIT;

    // Set motor direction and goals for encoders to measure distance

    if (action == GO)
    {
        if (direction == STRAIGHT)
        {
            MOTORstraight();    // Set Motor Direction
            goalLlow = amount - 2000;
            goalLhigh = amount + 2000;
            goalRlow = amount - 2000;
            goalRhigh = amount + 2000;
        }
        else if (direction == turnR)
        {
            MOTORturn(RIGHT); // Set Motor Direction
            goalLlow = amount - 2000;
            goalLhigh = amount + 2000;
            goalRlow = 65535 - amount - 2000;
            goalRhigh = 65535 - amount + 2000;
        }
        else if (direction == turnL)
        {
            MOTORturn(LEFT);  // Set Motor Direction
            goalLlow = 65535 - amount - 2000;
            goalLhigh = 65535 - amount + 2000;
            goalRlow = amount - 2000;
            goalRhigh = amount + 2000;
        }
        else
        {
            ERROR(13);
        }
        if (DEBUG) printf("GOALS  LL(%u) LH(%u) RL(%u) RH(%u)\n", goalLlow, goalLhigh, goalRlow, goalRhigh);
        ENCODERreset();     // Reset Encoders
        // Set values for accel and deccel values
        accelLIMIT = amount * .25;
        decelLIMIT = amount * .75;
        while(!goalREACHED)
        {
            NAVgetdataset();// Record Sensor Set
            distanceL = (DATA[DATAcount].encoder_L);
            distanceR = (DATA[DATAcount].encoder_R);

            // Adjust Motors with Accel, Deccel 0 to 1
            if (distanceL < accelLIMIT && accelL < 1)
                accelL = accelL + (.05 * accelL);// Check Accel
            if (distanceR < accelLIMIT && accelR < 1)
                accelR = accelR + (.05 * accelR);// Check Accel
            if (distanceL > decelLIMIT && decelL > 0)
                decelL = decelL - (.02 * decelL);// Check Deccel
            if (distanceR > decelLIMIT && decelR > 0)
                decelR = decelR - (.02 * decelR);// Check Deccel

            // Adjust Motors with PID on IR's and Encoders 0 to 1
            wallF = 1 - ((DATA[DATAcount].adc1 + DATA[DATAcount].adc4)/2)/20;
            if (wallF > 1) wallF = 1;
            if (wallF < 0) wallF = 0;

            if (DEBUG) printf("wallF(%5.2f)\n", wallF);

            PIDL = ((DATA[DATAcount].encoder_R + .000001)/(DATA[DATAcount].encoder_L + .000001))/65535;// * I * D
            PIDR = ((DATA[DATAcount].encoder_L + .000001)/(DATA[DATAcount].encoder_R + .000001))/65535;// * I * D
            errorL = DATA[DATAcount].adc3 / DATA[DATAcount].adc2;
            errorR = DATA[DATAcount].adc2 / DATA[DATAcount].adc3;
            aerrorL = aerrorL + errorL;
            aerrorR = aerrorR + errorR;
            //serrorL = ;
            //serrorR = ;

            PIDL = Kp * errorL + Ki * aerrorL; // + Kd * serrorL;
            PIDR = Kp * errorR + Ki * aerrorR; // + Kd * serrorR;
            if (DEBUG) printf("PIDL(%5.2f), PIDR(%5.2f)\n", PIDL, PIDR);

            // set speedL and speedR for next set
            speedL = 100 * SETspeed * accelL * decelL * PIDL * wallF;// 0 to 100 percent for output
            speedR = 100 * SETspeed * accelR * decelR * PIDR * wallF;// o to 100 percent for output

            if (speedL < 0) speedL = 0;
            if (speedL > 100) speedL = 100 * SETspeed;
            if (speedL < 0) speedR = 0;
            if (speedL > 100) speedR = 100 * SETspeed;
            if (DEBUG) printf("wallF(%5.2f), PIDL(%5.2f), PIDR(%5.2f)\n", wallF, PIDL, PIDR);
            // Set Motors
            if (direction == STRAIGHT)
            {
                if (DEBUG) printf("Moving Forward L %u, R %u\n", speedL, speedR);
                MOTORset(LEFT, FORWARD, speedL);
                MOTORset(RIGHT, FORWARD, speedR);
            }
            else if (direction == turnR)
            {
                if (DEBUG) printf("Turning Right L %u, R %u\n", speedL, speedR);
                MOTORset(LEFT, FORWARD, speedL);
                MOTORset(RIGHT, REVERSE, speedR);
            }
            else if (direction == turnL)
            {
                if (DEBUG) printf("Turning Left L %u, R %u\n", speedL, speedR);
                MOTORset(LEFT, REVERSE, speedL);
                MOTORset(RIGHT, FORWARD, speedR);
            }

            // If we have met our goal, set the goal flag
            if (DEBUG) printf("Encoders L %u R %u\n", ENCODERposition(READ, LEFT, 0), ENCODERposition(READ, RIGHT, 0));
            if (ENCODERposition(READ, LEFT, 0) > goalLlow && ENCODERposition(READ, LEFT, 0) < goalLhigh && ENCODERposition(READ, RIGHT, 0) > goalRlow && ENCODERposition(READ, RIGHT, 0) < goalRhigh){
                goalREACHED = 1;
                if (DEBUG) printf ("goalREACHED = %u\n", goalREACHED);}
            else if (ENCODERposition(READ, LEFT, 0) > goalLhigh || ENCODERposition(READ, RIGHT, 0) > goalRhigh){
                goalREACHED = 1;}

        }
        if (DEBUG) printf("Move Complete\n");
        MOTORstop();
        return(1); // Move Complete
    }
    else if (action == STOP)
    {
        MOTORstop();
        return(1); // Move Complete
    }
    return(0); // Move Not Complete

}

int NAVgetdataset(void){
    //if (DEBUG) printf("Getting DATA[%u]\n", DATAcount);
    BLED6 = !BLED6;
    DATA[DATAcount].direction = CURRENTdirection;
    DATA[DATAcount].x = x;
    DATA[DATAcount].y = y;
    DATA[DATAcount].battery = ADCget(0);
    DATA[DATAcount].encoder_L = ENCODERposition(READ, LEFT, 0);
    DATA[DATAcount].encoder_R = ENCODERposition(READ, RIGHT, 0);
    DATA[DATAcount].adc1 = ADCget(1);
    DATA[DATAcount].adc2 = ADCget(2);
    DATA[DATAcount].adc3 = ADCget(3);
    DATA[DATAcount].adc4 = ADCget(4);
    DATA[DATAcount].adc5 = ADCget(5);
    DATA[DATAcount].adc6 = ADCget(6);
    // if (FLAGerrorchecking){// Get IMU sensor data}
    DATAcount++;
    BLED6 = !BLED6;
    return(0);
}

int NAVcheckforgoal (void){// If nav to goal and return to start return complete
    if (MINIMAPPINGphase)
    {
        if (!GOALachieved)
        {
            if (x>=3 && x <=4 && y>=3 && y<=4)
            {
                GOALachieved = 1;
            }
        }
        else if (!STARTachieved)
        {
            if (x == 0 && y == 0)
            {
                STARTachieved = 1;
            }
        }
    }
    else
    {
        if (!GOALachieved)
        {
            if (x>=7 && x <=8 && y>=7 && y<=8)
            {
                GOALachieved = 1;
            }
        }
        else if (!STARTachieved)
        {
            if (x == 0 && y == 0)
            {
                STARTachieved = 1;
            }
        }
    }
    if (GOALachieved && STARTachieved)
        return(1);
    else
        return(0);
}

int NAVanalyzedataset (void){
    if (DEBUG) printf("NAVanalyzedataset");
    double FL = 0, FR = 0, SL = 0, SR = 0, Rdist, Ldist, Lwall, Rwall, Fwall;

    // Find Average of IR sensors and distance traveled
    for (count = 0; count < DATAcount; count ++){
        FL = FL + DATA[count].adc1;
        FR = FR + DATA[count].adc4;
        SL = SL + DATA[count].adc2;
        SR = SR + DATA[count].adc3;
    }
    FL = FL / count;
    FR = FR / count;
    SL = SL / count;
    SR = SR / count;
    if (DEBUG) printf("Averages are FL(%5.2f)FR(%5.2f)SL(%5.2f)SR(%5.2f)\n", FL, FR, SL, SR);
    Rdist = DATA[DATAcount].encoder_R;
    Ldist = DATA[DATAcount].encoder_L;

    // Update X and Y and map of new cell
    if ((Ldist / Rdist) < 1.5 && (Ldist / Rdist) > .5){ // semi straight travel
        if (CURRENTdirection == 'n'){y = y + 1;}
        if (CURRENTdirection == 's'){y = y - 1;}
        if (CURRENTdirection == 'e'){x = x + 1;}
        if (CURRENTdirection == 'w'){x = x - 1;}
        if (DEBUG) printf("Updateing walls in (%u,%u)\n", x, y);
            // Update walls in new square
            if (SL > 5) Lwall = 1;
            else Lwall = 0;
            if (SR > 5) Rwall = 1;
            else Rwall = 0;
            if (FL > 5 || FR > 5)Fwall = 1;
            else Fwall = 0;
    }
    else if ((Ldist / Rdist) < 0.1 && (Ldist / Rdist) > 0){ // right turn but no change to (x,y)
        if (CURRENTdirection == 'n'){CURRENTdirection = 'e';}
        if (CURRENTdirection == 's'){CURRENTdirection = 'w';}
        if (CURRENTdirection == 'e'){CURRENTdirection = 's';}
        if (CURRENTdirection == 'w'){CURRENTdirection = 'n';}
    }
    else if ((Ldist / Rdist) < 65535 && (Ldist / Rdist) > 2){ // left turn but no change to (x,y)
        if (CURRENTdirection == 'n'){CURRENTdirection = 'w';}
        if (CURRENTdirection == 's'){CURRENTdirection = 'e';}
        if (CURRENTdirection == 'e'){CURRENTdirection = 'n';}
        if (CURRENTdirection == 'w'){CURRENTdirection = 's';}
    }

    if (MINIMAPPINGphase){ if ((x == 3 || x == 4) && (y == 3 || y == 4)){
        GOALachieved = 1;
        if (DEBUG) printf("GOALachieved = %u\n",GOALachieved);}}


    DATAcount = 0;  // Reset Data Count to collect next data set
    return(0);}// Look at most recent data set and check for walls, and new x y positions
*/