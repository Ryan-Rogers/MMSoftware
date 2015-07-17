/*********************************************************************/
/*             Header File for DCI module Library routines           */
/*********************************************************************/

#if defined(__dsPIC30F__)
#include <p30Fxxxx.h>
#elif defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__dsPIC33E__)
#include <p33Exxxx.h>
#else
#error "Does not build on this target"
#endif

#ifdef _DCIIF

#ifndef DCI_H
#define DCI_H

/* List of SFRs for DCI module */
/* This list contains the SFRs with default (POR) values to be used for configuring DCI module */
/* The user can modify this based on the requirement */
#define DCICON1_VALUE               0x0000
#define DCICON2_VALUE               0x0000
#define DCICON3_VALUE               0x0000
#define DCISTAT_VALUE               0x0000
#define TSCON_VALUE                 0x0000
#define RSCON_VALUE                 0x0000

/* DCICON1 register Configuration bit definitions */

#define DCI_EN                      0xFFFF /* DCI Module Enabled  */
#define DCI_DIS                     0x7FFF /* DCI Module Disabled */

#define DCI_IDLE_CON                0xDFFF /* DCI Module operate in Idle Mode */
#define DCI_IDLE_STOP               0xFFFF /* Halt DCI Module in Idle Mode */

#define DCI_DIGI_LPBACK_EN          0xFFFF /* Digital Loopback Mode Enabled */
#define DCI_DIGI_LPBACK_DIS         0xF7FF /* Digital Loopback Mode Disabled */

#define DCI_SCKD_INP                0xFFFF /* CSCK pin is input when DCI is enabled */
#define DCI_SCKD_OUP                0xFBFF /* CSCK pin is output when DCI is enabled */

#define DCI_SAMP_CLK_FAL            0xFFFF /* data changes on SCK falling edge,sampled on SCK rising edge */
#define DCI_SAMP_CLK_RIS            0xFDFF /* data changes on SCK rising edge,sampled on SCK falling edge */

#define DCI_FSD_INP                 0xFFFF /* FS is Input when DCI is enabled */
#define DCI_FSD_OUP                 0xFEFF /* FS is Output when DCI is enabled */

#define DCI_TX_LASTVAL_UNF          0xFFFF /* Transmit last value written to TX buffers on transmit underflow */
#define DCI_TX_ZERO_UNF             0xFF7F /* Transmit zeros on transmit underflow */

#define DCI_SDO_TRISTAT             0xFFFF /* SDO pin is tristated during disabled transmit timeslots */
#define DCI_SDO_ZERO                0xFFBF /* SDO pin drives zero during disabled transmit timeslots */

#define DCI_DJST_ON                 0xFFFF /* Data transmission/reception is begun on same cycle as frame sync pulse */
#define DCI_DJST_OFF                0xFFDF /* Data transmission/reception is begun one cycle after frame sync pulse */

#define DCI_FSM_ACLINK_20BIT        0xFFFF /* 20-bit AC-link mode */
#define DCI_FSM_ACLINK_16BIT        0xFFFE /* 16-bit AC-link mode */
#define DCI_FSM_I2S                 0xFFFD /* I2S frame sync mode */
#define DCI_FSM_MULTI               0xFFFC /* Multichannel frame sync mode */

/* DCICON2 register Configuration bit definitions */

#define DCI_BUFF_LEN_4              0xFFFF /* 4 data words are buffered between Interrupts */
#define DCI_BUFF_LEN_3              0xFBFF /* 3 data words are buffered between Interrupts */
#define DCI_BUFF_LEN_2              0xF7FF /* 2 data words are buffered between Interrupts */
#define DCI_BUFF_LEN_1              0xF3FF /* 1 data word is buffered between Interrupts */

#define DCI_FRAME_LEN_16            0xFFFF /* Data Frame has 16 words */
#define DCI_FRAME_LEN_15            0xFFDF /* Data Frame has 15 words */
#define DCI_FRAME_LEN_14            0xFFBF /* Data Frame has 14 words */
#define DCI_FRAME_LEN_13            0xFF9F /* Data Frame has 13 words */
#define DCI_FRAME_LEN_12            0xFF7F /* Data Frame has 12 words */
#define DCI_FRAME_LEN_11            0xFF5F /* Data Frame has 11 words */
#define DCI_FRAME_LEN_10            0xFF3F /* Data Frame has 10 words */
#define DCI_FRAME_LEN_9             0xFF1F /* Data Frame has 9 words */
#define DCI_FRAME_LEN_8             0xFEFF /* Data Frame has 8 words */
#define DCI_FRAME_LEN_7             0xFEDF /* Data Frame has 7 words */
#define DCI_FRAME_LEN_6             0xFEBF /* Data Frame has 6 words */
#define DCI_FRAME_LEN_5             0xFE9F /* Data Frame has 5 words */
#define DCI_FRAME_LEN_4             0xFE7F /* Data Frame has 4 words */
#define DCI_FRAME_LEN_3             0xFE5F /* Data Frame has 3 words */
#define DCI_FRAME_LEN_2             0xFE3F /* Data Frame has 2 words */
#define DCI_FRAME_LEN_1             0xFE1F /* Data Frame has 1 words */

#define DCI_DATA_WORD_16            0xFFFF /* Data Word size is 16 bits */
#define DCI_DATA_WORD_15            0xFFFE /* Data Word size is 15 bits */
#define DCI_DATA_WORD_14            0xFFFD /* Data Word size is 14 bits */
#define DCI_DATA_WORD_13            0xFFFC /* Data Word size is 13 bits */
#define DCI_DATA_WORD_12            0xFFFB /* Data Word size is 12 bits */
#define DCI_DATA_WORD_11            0xFFFA /* Data Word size is 11 bits */
#define DCI_DATA_WORD_10            0xFFF9 /* Data Word size is 10 bits */
#define DCI_DATA_WORD_9             0xFFF8 /* Data Word size is 9 bits */
#define DCI_DATA_WORD_8             0xFFF7 /* Data Word size is 8 bits */
#define DCI_DATA_WORD_7             0xFFF6 /* Data Word size is 7 bits */
#define DCI_DATA_WORD_6             0xFFF5 /* Data Word size is 6 bits */
#define DCI_DATA_WORD_5             0xFFF4 /* Data Word size is 5 bits */
#define DCI_DATA_WORD_4             0xFFF3 /* Data Word size is 4 bits */

/* RSCON/TSCON register Configuration bit definitions */

#define DCI_DIS_SLOT_15             0x7FFF /* SDI Data is ignored/SD0 pin is tristated during timeslot 15 */
#define DCI_DIS_SLOT_14             0xBFFF /* SDI Data is ignored/SD0 pin is tristated during timeslot 14 */
#define DCI_DIS_SLOT_13             0xDFFF /* SDI Data is ignored/SD0 pin is tristated during timeslot 13 */
#define DCI_DIS_SLOT_12             0xEFFF /* SDI Data is ignored/SD0 pin is tristated during timeslot 12 */
#define DCI_DIS_SLOT_11             0xF7FF /* SDI Data is ignored/SD0 pin is tristated during timeslot 11 */
#define DCI_DIS_SLOT_10             0xFBFF /* SDI Data is ignored/SD0 pin is tristated during timeslot 10 */
#define DCI_DIS_SLOT_9              0xFDFF /* SDI Data is ignored/SD0 pin is tristated during timeslot 9 */
#define DCI_DIS_SLOT_8              0xFEFF /* SDI Data is ignored/SD0 pin is tristated during timeslot 8 */
#define DCI_DIS_SLOT_7              0xFF7F /* SDI Data is ignored/SD0 pin is tristated during timeslot 7 */
#define DCI_DIS_SLOT_6              0xFFBF /* SDI Data is ignored/SD0 pin is tristated during timeslot 6 */
#define DCI_DIS_SLOT_5              0xFFDF /* SDI Data is ignored/SD0 pin is tristated during timeslot 5 */
#define DCI_DIS_SLOT_4              0xFFEF /* SDI Data is ignored/SD0 pin is tristated during timeslot 4 */
#define DCI_DIS_SLOT_3              0xFFF7 /* SDI Data is ignored/SD0 pin is tristated during timeslot 3 */
#define DCI_DIS_SLOT_2              0xFFFB /* SDI Data is ignored/SD0 pin is tristated during timeslot 2 */
#define DCI_DIS_SLOT_1              0xFFFD /* SDI Data is ignored/SD0 pin is tristated during timeslot 1 */
#define DCI_DIS_SLOT_0              0xFFFE /* SDI Data is ignored/SD0 pin is tristated during timeslot 0 */

#define DCI_EN_SLOT_ALL             0xFFFF /* SDI Data is received/Transmit buffer contents are sent during timeslot 0-15 */
#define DCI_DIS_SLOT_ALL            0x0000 /* SDI Data is ignored/SD0 pin is tristated during timeslot 0-15 */

/* Priority for DCI Interrupt */

#define DCI_INT_PRI_7               0xFFFF
#define DCI_INT_PRI_6               0xFFFE
#define DCI_INT_PRI_5               0xFFFD
#define DCI_INT_PRI_4               0xFFFC
#define DCI_INT_PRI_3               0xFFFB
#define DCI_INT_PRI_2               0xFFFA
#define DCI_INT_PRI_1               0xFFF9
#define DCI_INT_PRI_0               0xFFF8

/* DCI Interrupt Enable/Disable */

#define DCI_INT_ON                  0xFFFF
#define DCI_INT_OFF                 0xFFF7

#define EnableIntDCI                    _DCIIE = 1
#define DisableIntDCI                   _DCIIE = 0
#define SetPriorityIntDCI(priority)     _DCIIP = (priority)

/* DCI module Converter Function Prototypes */

char BufferEmptyDCI(void) __attribute__ ((section (".libperi")));

void CloseDCI(void) __attribute__ ((section (".libperi")));

void ConfigIntDCI(unsigned int) __attribute__ ((section (".libperi")));

char DataRdyDCI(void) __attribute__ ((section (".libperi")));

void OpenDCI(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) __attribute__ ((section (".libperi")));

unsigned int ReadDCI(unsigned char) __attribute__ ((section (".libperi")));

void WriteDCI(unsigned int,unsigned char) __attribute__ ((section (".libperi")));

#endif

#endif 
