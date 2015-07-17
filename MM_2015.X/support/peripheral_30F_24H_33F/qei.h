/********************************************************************/
/*              Header for QEI module library functions             */
/********************************************************************/

#if defined(__dsPIC30F__)
#include <p30Fxxxx.h>
#elif defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#else
#error "Does not build on this target"
#endif

#if defined (_QEIIF) || defined (_QEI1IF)

#ifndef __QEI_H
#define __QEI_H

/* List of SFRs for QEI */
/* This list contains the SFRs with default (POR) values to be used for configuring QEI */
/* The user can modify this based on the requirement */

#define QEICON_VALUE               0x0000
#define DFLTCON_VALUE              0x0000
#define POSCNT_VALUE               0x0000
#define MAXCNT_VALUE               0xFFFF

/* QEICON Configuration Bit Definitions */

#define QEI_DIR_SEL_QEB             0xFFFF /* QEB Pin State Defines Position Counter Direction */
#define QEI_DIR_SEL_CNTRL           0xFFFE /* Control/Status Bit, QEICON<11>, Defines Timer Counter (POSCNT) Direction */

#define QEI_EXT_CLK                 0xFFFF /* External clock from pin TQCKI (on the rising edge) */
#define QEI_INT_CLK                 0xFFFD /* Internal clock (FOSC/4) */

#define QEI_INDEX_RESET_ENABLE      0xFFFF /* QEI Index Pulse resets Position Counter */
#define QEI_INDEX_RESET_DISABLE     0xFFFB /* Index Pulse does not reset Position Counter */

#define QEI_CLK_PRESCALE_1          0xFFE7 /* QEI Timer Input Clock Prescale Select Bits */
#define QEI_CLK_PRESCALE_8          0xFFEF 
#define QEI_CLK_PRESCALE_64         0xFFF7 
#define QEI_CLK_PRESCALE_256        0xFFFF /* QEI 1:256 prescale value */

#define QEI_GATED_ACC_ENABLE        0xFFFF /* QEI Timer gated time accumulation enabled */
#define QEI_GATED_ACC_DISABLE       0xFFDF /* Timer gated time accumulation disabled */

#define QEI_LOGIC_CONTROL_IO        0xFFFF /* QEI Position Counter Direction Status Output Enable */
#define QEI_NORMAL_IO               0xFFBF /* QEI Position Counter Direction Status Output Disabled */

#define QEI_INPUTS_SWAP             0xFFFF /* QEI Phase A and Phase B inputs swapped */
#define QEI_INPUTS_NOSWAP           0xFF7F /* QEI Phase A and Phase B inputs not swapped */

#define QEI_MODE_x4_MATCH           0xFFFF /* QEI Quadrature Encoder Interface enabled (x4 mode) with position counter reset by match (MAXCNT) */
#define QEI_MODE_x4_PULSE           0xFEFF /* QEI Quadrature Encoder Interface enabled (x4 mode) with Index Pulse reset of position counter */
#define QEI_MODE_x2_MATCH           0xFDFF /* QEI Quadrature Encoder Interface enabled (x2 mode) with position counter reset by match (MAXCNT) */
#define QEI_MODE_x2_PULSE           0xFCFF /* QEI Quadrature Encoder Interface enabled (x2 mode) with Index Pulse reset of position counter */
#define QEI_MODE_TIMER              0xF9FF /* QEI Starts 16-bit Timer */
#define QEI_MODE_OFF                0xF8FF /* QEI Quadrature Encoder Interface/Timer off */

#define QEI_UP_COUNT                0xFFFF /* QEI Position Counter Direction +VE */
#define QEI_DOWN_COUNT              0xF7FF /* QEI Position Counter Direction -VE */

#define QEI_IDLE_STOP               0xFFFF /* QEI Discontinue module operation when device enters a idle mode. */
#define QEI_IDLE_CON                0xDFFF /* QEI Continue module operation in idle mode */

/* defines for the DFLTCON register */

#define QEI_QE_CLK_DIVIDE_1_1       0xFF8F /* QEI QEA/QEB Digital Filter Clock Divide Select Bits */
#define QEI_QE_CLK_DIVIDE_1_2       0xFF9F 
#define QEI_QE_CLK_DIVIDE_1_4       0xFFAF 
#define QEI_QE_CLK_DIVIDE_1_16      0xFFBF 
#define QEI_QE_CLK_DIVIDE_1_32      0xFFCF 
#define QEI_QE_CLK_DIVIDE_1_64      0xFFDF 
#define QEI_QE_CLK_DIVIDE_1_128     0xFFEF 
#define QEI_QE_CLK_DIVIDE_1_256     0xFFFF /* QEI QEA/QEB Digital Filter Clock Divide Select Bits */

#define QEI_QE_OUT_ENABLE           0xFFFF  /* QEI QEA/QEB Digital Filter Clock Divide Select Bits */
#define QEI_QE_OUT_DISABLE          0xFF7F  /* QEI QEA/QEB Digital Filter Clock Divide Select Bits */

#define POS_CNT_ERR_INT_ENABLE      0xFFFF  /* Enable interrupt due to position count errors */
#define POS_CNT_ERR_INT_DISABLE     0xFEFF  /* Disable interrupt due to position count errors */

#define MATCH_INDEX_PHASEB_HIGH     0xFFFF
#define MATCH_INDEX_PHASEB_LOW      0xFBFF

#define MATCH_INDEX_PHASEA_HIGH     0xFFFF     
#define MATCH_INDEX_PHASEA_LOW      0xFDFF

#define MATCH_INDEX_INPUT_PHASEB    0xFFFF
#define MATCH_INDEX_INPUT_PHASEA    0xFBFF

#define MATCH_INDEX_INPUT_HIGH      0xFFFF
#define MATCH_INDEX_INPUT_LOW       0xFDFF

/* Setting the priority of QEI interrupt */

#define QEI_INT_PRI_0               0xFFF8
#define QEI_INT_PRI_1               0xFFF9
#define QEI_INT_PRI_2               0xFFFA
#define QEI_INT_PRI_3               0xFFFB
#define QEI_INT_PRI_4               0xFFFC
#define QEI_INT_PRI_5               0xFFFD
#define QEI_INT_PRI_6               0xFFFE
#define QEI_INT_PRI_7               0xFFFF

/* Enable / Disable QEI interrupt */

#define QEI_INT_ENABLE              0xFFFF  /* Set the Interrupt enable bit */
#define QEI_INT_DISABLE             0xFF7F  /* Clear the Interrupt enable bit */

/* Macros to  Enable/Disable interrupts and set Interrupt priority of QEI */

#define EnableIntQEI                    _QEIIE = 1
#define DisableIntQEI                   _QEIIE = 0
#define SetPriorityIntQEI(priority)     _QEIIP = priority

#endif

/* QEI Function Prototypes */

#ifdef _QEIIF

void OpenQEI(unsigned int config1, unsigned int config2) __attribute__ ((section (".libperi"))); /* Configure QEI */

void CloseQEI(void) __attribute__ ((section (".libperi")));                            /* Disables the QEI module */

void ConfigIntQEI(unsigned int) __attribute__ ((section (".libperi")));                /* QEI interrupt configuration */

unsigned int ReadQEI(void) __attribute__ ((section (".libperi")));                     /* Read QEI result */

void WriteQEI(unsigned int position) __attribute__ ((section (".libperi")));           /* Write QEI result */

#endif

#ifdef _QEI1IF

void OpenQEI1(unsigned int config1, unsigned int config2) __attribute__ ((section (".libperi"))); /* Configure QEI1 */

void CloseQEI1(void) __attribute__ ((section (".libperi")));                            /* Disables the QEI1 module */

void ConfigIntQEI1(unsigned int) __attribute__ ((section (".libperi")));                /* QEI1 interrupt configuration */

unsigned int ReadQEI1(void) __attribute__ ((section (".libperi")));                     /* Read QEI1 result */

void WriteQEI1(unsigned int position) __attribute__ ((section (".libperi")));           /* Write QEI1 result */

#endif

#ifdef _QEI2IF

void OpenQEI2(unsigned int config1, unsigned int config2) __attribute__ ((section (".libperi"))); /* Configure QEI2 */

void CloseQEI2(void) __attribute__ ((section (".libperi")));                            /* Disables the QEI2 module */

void ConfigIntQEI2(unsigned int) __attribute__ ((section (".libperi")));                /* QEI2 interrupt configuration */

unsigned int ReadQEI2(void) __attribute__ ((section (".libperi")));                     /* Read QEI2 result */

void WriteQEI2(unsigned int position) __attribute__ ((section (".libperi")));           /* Write QEI2 result */

#endif

#endif /*__QEI_H */
