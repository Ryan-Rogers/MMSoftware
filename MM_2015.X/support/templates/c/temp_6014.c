/***********************************************************************
 * This file is a basic template for creating C code for a dsPIC30F    *
 * device.  Copy this file into your project directory and modify or   *
 * add to it as needed.                                                *
 *                                                                     *
 * If interrupts are not used, all code presented for that interrupt   *
 * can be removed or commented out with C-style comment declarations.  *
 *                                                                     *
 * For additional information about dsPIC architecture and language    *
 * tools, refer to the following documents:                            *
 *                                                                     *
 * 16-Bit Language Tools Getting Started                  : DS51316    *
 * MPLAB C Compiler for                                                *
 *           PIC24 MCUs and dsPIC DSCs User's Guide       : DS51284    *
 * MPLAB Assembler, Linker and Utilities for                           *
 *           PIC24 MCUs and dsPIC DSCs User's Guide       : DS51317    *
 * 16-Bit Language Tools Libraries                        : DS51456    *
 *                                                                     *
 * For the latest Datasheets and Family Reference Guides, please       *
 * see the Microchip web site.                                         *
 *                                                                     *
 * Template file has been compiled with MPLAB C30 v3.10.               *
 *                                                                     *
 ***********************************************************************
 *                                                                     * 
 *    Author:                                                          *
 *    Company:                                                         * 
 *    Filename:       temp_6014.c                                      *
 *    Date:           4/9/2008                                         *
 *    File Version:   3.10                                             *
 *    Other Files Required: p30f6014.h, p30f6014.gld                   *
 *    Tools Used: MPLAB IDE -> 8.10                                    *
 *                Compiler  -> 3.10                                    *
 *                                                                     *
 *    Devices Supported:                                               *
 *                dsPIC30F2011                                         *
 *                dsPIC30F3012                                         *
 *                dsPIC30F2012                                         *
 *                dsPIC30F3013                                         *
 *                dsPIC30F3014                                         *
 *                dsPIC30F4013                                         *
 *                dsPIC30F5011                                         *
 *                dsPIC30F6011                                         *
 *                dsPIC30F6012                                         *
 *                dsPIC30F5013                                         *
 *                dsPIC30F6013                                         *
 *                dsPIC30F6014                                         *
 *                                                                     *
 ***********************************************************************
 *                                                                     *
 * Other Comments:                                                     *
 *                                                                     *
 * 1) C attributes, designated by the __attribute__ keyword, provide a *
 *    means to specify various characteristics of a variable or        *
 *    function, such as where a particular variable should be placed   *
 *    in memory, whether the variable should be aligned to a certain   *
 *    address boundary, whether a function is an Interrupt Service     *
 *    Routine (ISR), etc. If no special characteristics need to be     *
 *    specified for a variable or function, then attributes are not    *
 *    required. For more information about attributes, refer to the    *
 *    C30 User's Guide.                                                *
 *                                                                     *
 * 2) The space(xmemory) and space(ymemory) attributes are             *
 *    used to place a variable in X data space and Y data space,       *
 *    respectively. Variables accessed by dual-source DSP instructions *
 *    must be defined using these attributes.                          *
 *                                                                     *
 * 3) The aligned(k) attribute, used in variable definitions, is used  *
 *    to align a variable to the nearest higher 'k'-byte address       * 
 *    boundary. 'k' must be substituted with a suitable constant       *
 *    number when the ModBuf_X(k) or ModBuf_Y(k) macro is invoked.     *
 *    In most cases, variables are aligned either to avoid potential   *
 *    misaligned memory accesses, or to configure a modulo buffer.     *      
 *                                                                     *
 * 4) The interrupt attribute is used to qualify a function as an      *
 *    interrupt service routine. An interrupt routine can be further   *
 *    configured to save certain variables on the stack, using the     *
 *    save(var-list) directive. If constants or string literals may    *
 *    be accessed using the default constants-in-code memory model,    *
 *    then the auto_psv attribute is included. If no constants or      *
 *    string literals will be accessed, the no_auto_psv attribute      *
 *    can be included, saving a few cycles of latency.                 *
 *                                                                     *
 * 5) The shadow attribute is used to set up any function to           *  
 *    perform a fast context save using shadow registers.              *
 *                                                                     *
 * 6) Note the use of double-underscores (__) at the start and end of  *
 *    the attribute keyword mentioned above.                           *
 *                                                                     *
 **********************************************************************/

/* The correct device header file will be selected automatically */

#include <p30fxxxx.h>


/* Define constants here                            */

#define CONSTANT1 10
#define CONSTANT2 20


/************* START OF GLOBAL DEFINITIONS **********/


/* Define arrays: array1[], array2[], etc.          */
/* with attributes, as given below                  */

/* either using the entire attribute                */
int array1[CONSTANT1] __attribute__((space(xmemory), aligned(32)));
int array2[CONSTANT1] __attribute__((space(ymemory), aligned(32)));

/* or using macros defined in the header file       */
int array3[CONSTANT1] _XBSS(32);
int array4[CONSTANT1] _YBSS(32);


/* Define arrays without attributes                 */

int array5[CONSTANT2];   /* array5 is NOT an aligned buffer */

/* ------------------------------------------------ */

/* Define global variables with attributes          */

int variable1 __attribute__((space(xmemory)));
int variable2 __attribute__((space(ymemory)));

/* Define global variables without attributes       */

int variable3;


/************** END OF GLOBAL DEFINITIONS ***********/



/************* START OF MAIN FUNCTION ***************/

int main ( void )
{


/* Code goes here                                   */


}



/****** START OF INTERRUPT SERVICE ROUTINES *********/

/* Replace the interrupt function names with the    */
/* appropriate names depending on interrupt source. */

/* The names of various interrupt functions for     */
/* each device are defined in the linker script.    */


/* Interrupt Service Routine 1                      */
/* No fast context save, and no variables stacked   */

void __attribute__((interrupt, auto_psv)) _ADCInterrupt(void)
{


/* Interrupt Service Routine code goes here         */
        
}


/* Interrupt Service Routine 2                      */
/* Fast context save (using push.s and pop.s)       */

void __attribute__((interrupt, shadow, auto_psv)) _T1Interrupt(void)
{

/* Interrupt Service Routine code goes here         */
        
}


/* Interrupt Service Routine 3: INT0Interrupt       */
/* Save and restore variables var1, var2, etc.      */

void __attribute__((interrupt(save(variable1,variable2)), auto_psv)) _INT0Interrupt(void)
{

/* Interrupt Service Routine code goes here         */

}


/********* END OF INTERRUPT SERVICE ROUTINES ********/

