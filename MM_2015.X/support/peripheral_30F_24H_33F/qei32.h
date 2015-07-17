/**********************************************************************/
/*              Header for QEI module library functions               */
/**********************************************************************/

#if defined(__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined(__PIC24E__)
#include <p24Exxxx.h>
#else
#error "Does not build on this target"
#endif

#if defined (_QEI1IF) || defined (_QEI2IF)

#ifndef __QEI_H
#define __QEI_H

typedef union
{
    struct
    {
        unsigned int  loWord;       	// Counter high word
        unsigned int  hiWord;       	// Counter low word
    }f;                     		// field access
    unsigned int      w[2];       	// 16 bits access
    unsigned long      l;          	// 32 bits access   
}qeiCounter;


/* List of SFRs for QEI */
/* This list contains the SFRs with default (POR) values to be used for configuring QEI */
/* The user can modify this based on the requirement */

#define	QEICON_VALUE				0x0000
#define	QEIIOC_VALUE				0x0000
#define	QEISTAT_VALUE				0x0000
#define	POSCNTH_VALUE				0x0000
#define	POSCNTL_VALUE				0x0000
#define	POSHLD_VALUE				0x0000
#define	VELCNT_VALUE				0x0000
#define	INDXCNTH_VALUE				0x0000
#define	INDXCNTL_VALUE				0x0000
#define	INDXHLD_VALUE				0x0000
#define	QEIICH_VALUE				0x0000
#define	QEIICL_VALUE				0x0000
#define	QEILECH_VALUE				0x0000
#define	QEILECL_VALUE				0x0000
#define	QEIGECH_VALUE				0x0000
#define	QEIGECL_VALUE				0x0000
#define	INTTMRH_VALUE				0x0000
#define	INTTMRL_VALUE				0x0000
#define	INTHLDH_VALUE				0x0000
#define	INTHLDL_VALUE				0x0000

/* QEICON Configuration Bit Definitions */

#define	QEI_COUNTER_QEI_MODE			0xFFFC	/* Quadrature encoder mode */
#define	QEI_COUNTER_UPDOWN_MODE			0xFFFD	/* External clock with external up-down mode */
#define	QEI_COUNTER_GATE_MODE			0xFFFE	/* External clock with external gate mode */
#define	QEI_COUNTER_INT_TIMER_MODE		0xFFFF	/* Internal timer mode */

#define	QEI_GATE_DISABLE			0xFFFB	/* Ext gate signal does not affect position counter */
#define	QEI_GATE_ENABLE				0xFFFF	/* Ext gate signal control position counter */

#define	QEI_COUNT_POSITIVE			0xFFF7	/* Counter direction is positive */
#define	QEI_COUNT_NEGATIVE			0xFFFF	/* Counter direction is negative */

#define	QEI_INPUT_PRESCALE_1			0xFF8F	/* Timer input clock prescalar selction */
#define	QEI_INPUT_PRESCALE_2			0xFF9F
#define	QEI_INPUT_PRESCALE_4			0xFFAF
#define	QEI_INPUT_PRESCALE_8			0xFFBF
#define	QEI_INPUT_PRESCALE_16			0xFFCF
#define	QEI_INPUT_PRESCALE_32			0xFFDF
#define	QEI_INPUT_PRESCALE_64			0xFFEF
#define	QEI_INPUT_PRESCALE_256			0xFFFF

#define	QEI_INDEX_MATCH_NO_EFFECT		0xFCFF	/* Index does not affect position counter */
#define	QEI_INDEX_MATCH_QEB_0_QEA_1		0xFDFF	/* Index match when QEB = 0 and QEA = 1 */
#define	QEI_INDEX_MATCH_QEB_1_QEA_0		0xFEFF	/* Index match when QEB = 1 and QEA = 0 */
#define	QEI_INDEX_MATCH_QEB_1_QEA_1		0xFFFF	/* Index match when QEB = 1 and QEA = 1 */

#define	QEI_POS_COUNT_INIT_No_EFFECT		0xE3FF	/* Index does not affect position counter */
#define	QEI_POS_COUNT_INIT_EVERY_INDEX		0xE7FF	/* Every index input resets position counter */
#define	QEI_POS_COUNT_INIT_NEXT_INDEX		0xEBFF	/* Next index input moves content of QEIxIC into Position counter */ 
#define	QEI_POS_COUNT_INIT_FIRST_INDEX		0xEFFF	/* First index event after home moves content of QEIxIC into Position counter */ 
#define	QEI_POS_COUNT_INIT_SECOND_INDEX		0xF3FF	/* Second index event after home moves content of QEIxIC into Position counter */ 
#define	QEI_POS_COUNT_INIT_EQUALS_QEIGEC	0xF7FF	/* Resets position counter when position counter equals QEIxGEC */
#define	QEI_POS_COUNT_INIT_MODULO_COUNT		0xFBFF	/* Modulo count mode for position counter */

#define	QEI_IDLE_CON				0xDFFF	/* Continue QEI in Idle mode */
#define	QEI_IDLE_STOP				0xFFFF	/* stop QEI in Idle mode */

#define	QEI_COUNTER_DISABLE			0x7FFF	/* Module counters are disabled */
#define	QEI_COUNTER_ENABLE			0xFFFF	/* Module counters are enabled */

/* QEIIOC Configuration Bit Definitions */

#define	QEI_QEA_POL_NON_INVERTED		0xFFEF	/* QEA input polarity is non-inverted */
#define	QEI_QEA_POL_INVERTED			0xFFFF	/* QEA input polarity is inverted */

#define	QEI_QEB_POL_NON_INVERTED		0xFFDF	/* QEB input polarity is non-inverted */
#define	QEI_QEB_POL_INVERTED			0xFFFF	/* QEB input polarity is inverted */

#define	QEI_INDX_POL_NON_INVERTED		0xFFBF	/* Index input polarity is non-inverted */
#define	QEI_INDX_POL_INVERTED			0xFFFF	/* Index input polarity is inverted */

#define	QEI_HOM_POL_NON_INVERTED		0xFF7F	/* Home input polarity is non-inverted */
#define	QEI_HOM_POL_INVERTED			0xFFFF	/* Home input polarity is inverted */

#define	QEI_QEA_QEB_NOT_SWAPPED			0xFEFF	/* QEA QEB inputs are not swapped */
#define	QEI_QEA_QEB_SWAPPED			0xFFFF	/* QEA QEB inputs are swapped */

#define	QEI_COMPARE_HIGH_OUTPUT_DISABLE		0xF9FF	/* Output is disabled */
#define	QEI_COMPARE_HIGH_GREATER_QEIGEC		0xFBFF	/* CTNCMP pin goes high whn POSCNT >= QEIGEC */ 
#define	QEI_COMPARE_HIGH_LESSER_QEILEC		0xFDFF	/* CTNCMP pin goes high whn POSCNT <= QEILEC */
#define	QEI_COMPARE_HIGH_GREATER_LESSER		0xFFFF	/* CTNCMP pin goes high whn POSCNT >= QEIGEC or POSCNT <= QEILEC */

#define	QEI_DIF_FLTR_PRESCALE_1			0xC7FF	/* Digital filter clock prescalar select */
#define	QEI_DIF_FLTR_PRESCALE_2			0xCFFF
#define	QEI_DIF_FLTR_PRESCALE_4			0xD7FF
#define	QEI_DIF_FLTR_PRESCALE_8			0xDFFF
#define	QEI_DIF_FLTR_PRESCALE_16		0xE7FF
#define	QEI_DIF_FLTR_PRESCALE_32		0xEFFF
#define	QEI_DIF_FLTR_PRESCALE_64		0xF7FF
#define	QEI_DIF_FLTR_PRESCALE_256		0xFFFF

#define	QEI_DIG_FLTR_DISABLE			0xBFFF	/* Digital filter is disabled */
#define	QEI_DIG_FLTR_ENABLE			0xFFFF	/* Digital filter is enabled */

#define	QEI_POS_COUNT_TRIG_DISABLE		0x7FFF	/* Trigger for capture event is disabled */
#define	QEI_POS_COUNT_TRIG_ENABLE		0xFFFF	/* Trigger for capture event is enabled */

/* QEISTAT Configuration Bit Definitions */

#define	QEI_INDEX_INTERRUPT_DISABLE		0xFFFE	/* Index input event interrupt disabled */	
#define	QEI_INDEX_INTERRUPT_ENABLE		0xFFFF	/* Index input event interrupt enabled */

#define	QEI_HOME_INTERRUPT_DISABLE		0xFFFB	/* Home input event interrupt disabled */		
#define	QEI_HOME_INTERRUPT_ENABLE		0xFFFF	/* Home input event interrupt enabled */

#define	QEI_VELO_OVERFLOW_INTERRUPT_DISABLE	0xFFEF	/* Velocity counter overflow interrupt disabled */		
#define	QEI_VELO_OVERFLOW_INTERRUPT_ENABLE	0xFFFF	/* Velocity counter overflow interrupt enabled */		

#define	QEI_POS_INIT_INTERRUPT_DISABLE		0xFFBF	/* Position counter init complete interrupt disabled */	
#define	QEI_POS_INIT_INTERRUPT_ENABLE		0xFFFF	/* Position counter init complete interrupt enabled */

#define	QEI_POS_OVERFLOW_INTERRUPT_DISABLE	0xFEFF	/* Position counter overflow interrupt disabled */	
#define	QEI_POS_OVERFLOW_INTERRUPT_ENABLE	0xFFFF	/* Position counter overflow interrupt enabled */

#define	QEI_POS_LESS_EQU_INTERRUPT_DISABLE	0xFBFF	/* Position counter less than or equal interrupt disabled */		
#define	QEI_POS_LESS_EQU_INTERRUPT_ENABLE	0xFFFF	/* Position counter less than or equal interrupt enabled */

#define	QEI_POS_GREAT_EQU_INTERRUPT_DISABLE	0xEFFF	/* Position counter greater than or equal interrupt disabled  */	
#define	QEI_POS_GREAT_EQU_INTERRUPT_ENABLE	0xFFFF	/* Position counter greater than or equal interrupt enabled  */

/* Setting the priority of QEI1 interrupt */

#define QEI_INT_PRI_0               0xFFF8
#define QEI_INT_PRI_1               0xFFF9
#define QEI_INT_PRI_2               0xFFFA
#define QEI_INT_PRI_3               0xFFFB
#define QEI_INT_PRI_4               0xFFFC
#define QEI_INT_PRI_5               0xFFFD
#define QEI_INT_PRI_6               0xFFFE
#define QEI_INT_PRI_7               0xFFFF

/* Enable / Disable QEI1 interrupt */

#define QEI_INT_ENABLE              0xFFFF  /* Set the Interrupt enable bit */
#define QEI_INT_DISABLE             0xFFF7  /* Clear the Interrupt enable bit */

#endif

/* QEI Function Prototypes */

#ifdef _QEI1IF

/* Macros to  Enable/Disable interrupts and set Interrupt priority of QEI1 */

#define EnableIntQEI1                    _QEI1IE = 1
#define DisableIntQEI1                   _QEI1IE = 0
#define SetPriorityIntQEI1(priority)     _QEI1IP = priority


void Open32bitQEI1(unsigned int config1, unsigned int config2, unsigned int config3) __attribute__ ((section (".libperi"))); /* Configure QEI */
unsigned long Read32bitQEI1PositionCounter(void) __attribute__ ((section (".libperi"))); /* reads value of position counter */
unsigned long Read32bitQEI1Capture(void) __attribute__ ((section (".libperi"))); /* reads value of capture register */
unsigned long Read32bitQEI1IndexCounter(void) __attribute__ ((section (".libperi"))); /* reads value of index counter */
unsigned long Read32bitQEI1IntervalTimer(void) __attribute__ ((section (".libperi"))); /* reads value of interval timer */
unsigned int Read32bitQEI1VelocityCounter(void) __attribute__ ((section (".libperi"))); /* reads value of velocity counter */
void Write32bitQEI1GreaterEqual(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to greater than or equal */
void Write32bitQEI1IndexCounter(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to index counter */
void Write32bitQEI1Initialization(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to initialization register */
void Write32bitQEI1IntervalTimer(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to interval timer */
void Write32bitQEI1LesserEqual(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to lesser than or equal register */
void Write32bitQEI1PositionCounter(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to position counter */
void ConfigInt32bitQEI1(unsigned int config) __attribute__ ((section (".libperi"))); /* configure interrupt */
void Close32bitQEI1(void) __attribute__ ((section (".libperi"))); /* disable interrupt and stop QEI module */
#endif


#ifdef _QEI2IF

/* Macros to  Enable/Disable interrupts and set Interrupt priority of QEI2 */

#define EnableIntQEI2                    _QEI2IE = 1
#define DisableIntQEI2                   _QEI2IE = 0
#define SetPriorityIntQEI2(priority)     _QEI2IP = priority


void Open32bitQEI2(unsigned int config1, unsigned int config2, unsigned int config3) __attribute__ ((section (".libperi"))); /* Configure QEI */
unsigned long Read32bitQEI2PositionCounter(void) __attribute__ ((section (".libperi"))); /* reads value of position counter */
unsigned long Read32bitQEI2Capture(void) __attribute__ ((section (".libperi"))); /* reads value of capture register */
unsigned long Read32bitQEI2IndexCounter(void) __attribute__ ((section (".libperi"))); /* reads value of index counter */
unsigned long Read32bitQEI2IntervalTimer(void) __attribute__ ((section (".libperi"))); /* reads value of interval timer */
unsigned int Read32bitQEI2VelocityCounter(void) __attribute__ ((section (".libperi"))); /* reads value of velocity counter */
void Write32bitQEI2GreaterEqual(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to greater than or equal */
void Write32bitQEI2IndexCounter(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to index counter */
void Write32bitQEI2Initialization(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to initialization register */
void Write32bitQEI2IntervalTimer(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to interval timer */
void Write32bitQEI2LesserEqual(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to lesser than or equal register */
void Write32bitQEI2PositionCounter(qeiCounter *ptr) __attribute__ ((section (".libperi"))); /* writes to position counter */
void ConfigInt32bitQEI2(unsigned int config) __attribute__ ((section (".libperi"))); /* configure interrupt */
void Close32bitQEI2(void) __attribute__ ((section (".libperi"))); /* disable interrupt and stop QEI module */

#endif

#endif /*__QEI_H */
