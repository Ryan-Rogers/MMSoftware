/********************************************************************
                Header for CAN module library functions
*********************************************************************/

#if defined(__dsPIC30F__)
#include <p30Fxxxx.h>
#else
#error "Does not build on this target"
#endif

#ifdef _C1IF

#ifndef __CAN_H
#define __CAN_H

/* List of SFRs for CAN */
/* This list contains the SFRs with default (POR) values to be used for configuring CAN */
/* The user can modify this based on the requirement */
#define CxRXF0SID_VALUE                 0x0000
#define CxRXF0EIDH_VALUE                0x0000
#define CxRXF0EIDL_VALUE                0x0000
#define CxRXF1SID_VALUE                 0x0000
#define CxRXF1EIDH_VALUE                0x0000
#define CxRXF1EIDL_VALUE                0x0000
#define CxRXF2SID_VALUE                 0x0000
#define CxRXF2EIDH_VALUE                0x0000
#define CxRXF2EIDH_VALUE                0x0000
#define CxRXF3SID_VALUE                 0x0000
#define CxRXF3EIDH_VALUE                0x0000
#define CxRXF3EIDH_VALUE                0x0000
#define CxRXF4SID_VALUE                 0x0000
#define CxRXF4EIDH_VALUE                0x0000
#define CxRXF4EIDL_VALUE                0x0000
#define CxRXF5SID_VALUE                 0x0000
#define CxRXF5EIDH_VALUE                0x0000
#define CxRXF5EIDL_VALUE                0x0000
#define CxRXM0SID_VALUE                 0x0000
#define CxRXM0EIDH_VALUE                0x0000
#define CxRXM0EIDL_VALUE                0x0000
#define CxRXM1SID_VALUE                 0x0000
#define CxRXM1EIDH_VALUE                0x0000
#define CxRXM1EIDL_VALUE                0x0000
#define CxTX2CON_VALUE                  0x0000
#define CxTX2SID_VALUE                  0x0000
#define CxTX2EID_VALUE                  0x0000
#define CxTX2DLC_VALUE                  0x0000
#define CxTX2B1_VALUE                   0x0000
#define CxTX2B2_VALUE                   0x0000
#define CxTX2B3_VALUE                   0x0000
#define CxTX2B4_VALUE                   0x0000
#define CxTX1CON_VALUE                  0x0000
#define CxTX1SID_VALUE                  0x0000
#define CxTX1EID_VALUE                  0x0000
#define CxTX1DLC_VALUE                  0x0000
#define CxTX1B1_VALUE                   0x0000
#define CxTX1B2_VALUE                   0x0000
#define CxTX1B3_VALUE                   0x0000
#define CxTX1B4_VALUE                   0x0000
#define CxTX0CON_VALUE                  0x0000
#define CxTX0SID_VALUE                  0x0000
#define CxTX0EID_VALUE                  0x0000
#define CxTX0DLC_VALUE                  0x0000
#define CxTX0B1_VALUE                   0x0000
#define CxTX0B2_VALUE                   0x0000
#define CxTX0B3_VALUE                   0x0000
#define CxTX0B4_VALUE                   0x0000
#define CxRX1CON_VALUE                  0x0000
#define CxRX1SID_VALUE                  0x0000
#define CxRX1EID_VALUE                  0x0000
#define CxRX1DLC_VALUE                  0x0000
#define CxRX1B1_VALUE                   0x0000
#define CxRX1B2_VALUE                   0x0000
#define CxRX1B3_VALUE                   0x0000
#define CxRX1B4_VALUE                   0x0000
#define CxRX0CON_VALUE                  0x0000
#define CxRX0SID_VALUE                  0x0000
#define CxRX0EID_VALUE                  0x0000
#define CxRX0DLC_VALUE                  0x0000
#define CxRX0B1_VALUE                   0x0000
#define CxRX0B2_VALUE                   0x0000
#define CxRX0B3_VALUE                   0x0000
#define CxRX0B4_VALUE                   0x0000
#define CxCTRL_VALUE                    0x0480
#define CxCFG1_VALUE                    0x0000
#define CxCFG2_VALUE                    0x0000
#define CxINTF_VALUE                    0x0000
#define CxINTE_VALUE                    0x0000
#define CxEC_VALUE                      0x0000

/*****************Masks for bit opern***************/
#define CAN_ABAT                        0x1000
#define CAN_TXBO                        0x2000
#define CAN_RXEP                        0x0800
#define CAN_TXEP                        0x1000
#define CAN_RXFUL                       0x0080
#define CAN_TXREQ                       0x0008

/* defines for CiCTRL (to be used for CANiSetOperationMode functions) */
/* these defines are such that, when used will clear ABAT bit */

#define CAN_CAPTURE_EN                  0xAF00
#define CAN_CAPTURE_DIS                 0x2F00

#define CAN_IDLE_STOP                   0xAF00
#define CAN_IDLE_CON                    0x8F00

#define CAN_MASTERCLOCK_1               0xAF00
#define CAN_MASTERCLOCK_0               0xA700

#define CAN_REQ_OPERMODE_NOR            0xA800
#define CAN_REQ_OPERMODE_DIS            0xA900
#define CAN_REQ_OPERMODE_LOOPBK         0xAA00
#define CAN_REQ_OPERMODE_LISTENONLY     0xAB00
#define CAN_REQ_OPERMODE_CONFIG         0xAC00
#define CAN_REQ_OPERMODE_LISTENALL      0xAF00

/* defines for CiCTRL (to be used for CANiSetOperationModeNoWait functions) */
/* these defines are such that, when used will set ABAT bit */

#define CAN_CAPTURE_EN_NO_WAIT          0xBF00
#define CAN_CAPTURE_DIS_NO_WAIT         0x3F00

#define CAN_IDLE_STOP_NO_WAIT           0xBF00
#define CAN_IDLE_CON_NO_WAIT            0x9F00

#define CAN_MASTERCLOCK_1_NO_WAIT       0xBF00
#define CAN_MASTERCLOCK_0_NO_WAIT       0xB700

#define CAN_REQ_OPERMODE_NOR_NO_WAIT    0xB800
#define CAN_REQ_OPERMODE_DIS_NO_WAIT    0xB900
#define CAN_REQ_OPERMODE_LOOPBK_NO_WAIT 0xBA00
#define CAN_REQ_OPERMODE_LISTENONLY_NO_WAIT 0xBB00
#define CAN_REQ_OPERMODE_CONFIG_NO_WAIT 0xBC00
#define CAN_REQ_OPERMODE_LISTENALL_NO_WAIT 0xBF00

/*configuration of CiRXMnSID */

#define CAN_MASK_SID(x)                 ( ((x & 0x07C0) << 2) | ((x & 0x003F) << 2) | 0x0001 )

#define CAN_MATCH_FILTER_TYPE           0x1FFD       
#define CAN_IGNORE_FILTER_TYPE          0x1FFC

/*configuration of CiRXMnEIDH and CiRXMnEIDL */

#define CAN_MASK_EID(x)                 ( (((unsigned long)x & 0x3C000) << 10) | (((unsigned long)x & 0x03FC0) << 10) | (((unsigned long)x & 0x0003F) << 10) )

/* configuration of CiRXFnSID */

#define CAN_FILTER_SID(x)               ( ((x & 0x07C0) << 2) | ((x & 0x003F) << 2) | 0x0001 )

#define CAN_RX_EID_EN                   0x1FFD       
#define CAN_RX_EID_DIS                  0x1FFC

/* configuration of CiRXFnEIDH and C1RXFnEIDL */

#define CAN_FILTER_EID(x)               ( (((unsigned long)x & 0x3C000) << 10) | (((unsigned long)x & 0x03FC0) << 10) | (((unsigned long)x & 0x0003F) << 10) )

/* configuration of CiTXxSID */

#define CAN_TX_SID(x)                   ( ((x & 0x07C0) << 5) | ((x & 0x003F) << 2) | 0x0003 )

#define CAN_SUB_REM_TX_REQ              0xF8FF             
#define CAN_SUB_NOR_TX_REQ              0xF8FD

#define CAN_TX_EID_EN                   0xF8FF
#define CAN_TX_EID_DIS                  0xF8FE

/* configuration of CiTXxEID and CiTXxDLC */

#define CAN_TX_EID(x)                   ( (((unsigned long)x & 0x3C000) << 14) | (((unsigned long)x & 0x03FC0) << 10) | (((unsigned long)x & 0x0003F) << 10) | 0x000003F8 )

#define CAN_REM_TX_REQ                  0xF0FFFFF8
#define CAN_NOR_TX_REQ                  0xF0FFFDF8

#define CAN_DATALEN_0                   0xF0FFFF80
#define CAN_DATALEN_1                   0xF0FFFF88
#define CAN_DATALEN_2                   0xF0FFFF90
#define CAN_DATALEN_3                   0xF0FFFF98
#define CAN_DATALEN_4                   0xF0FFFFA0
#define CAN_DATALEN_5                   0xF0FFFFA8
#define CAN_DATALEN_6                   0xF0FFFFB0
#define CAN_DATALEN_7                   0xF0FFFFB8
#define CAN_DATALEN_8                   0xF0FFFFC0

/* CiCFG1 */
#define CAN_SYNC_JUMP_WIDTH1            0x003F
#define CAN_SYNC_JUMP_WIDTH2            0x007F
#define CAN_SYNC_JUMP_WIDTH3            0x00BF
#define CAN_SYNC_JUMP_WIDTH4            0x00FF

#define CAN_BAUD_PRE_SCALE(x)           (((x-1) & 0x3f) | 0xC0)
 
/* CiCFG2 */
#define CAN_WAKEUP_BY_FILTER_EN         0x47FF
#define CAN_WAKEUP_BY_FILTER_DIS        0x07FF

#define CAN_PHASE_SEG2_TQ(x)            ((((x-1) & 0x7) << 8) | 0x40FF)

#define CAN_PHASE_SEG1_TQ(x)            ((((x-1) & 0x7) << 3) | 0x47C7)

#define CAN_PROPAGATIONTIME_SEG_TQ(x)   (((x-1) & 0x7) | 0x47F8)

#define CAN_SEG2_FREE_PROG              0x47FF
#define CAN_SEG2_TIME_LIMIT_SET         0x477F

#define CAN_SAMPLE3TIMES                0x47FF
#define CAN_SAMPLE1TIME                 0x47BF

/* CiRXnCON */
#define CAN_BUF0_DBLBUFFER_EN           0x0084
#define CAN_BUF0_DBLBUFFER_DIS          0x0080
#define CAN_RXFUL_CLEAR                 0x0004

/* CiTXnCON */
#define CAN_TX_REQ                      0x000B
#define CAN_TX_STOP_REQ                 0x0003

#define CAN_TX_PRIORITY_HIGH            0x000B
#define CAN_TX_PRIORITY_HIGH_INTER      0x000A
#define CAN_TX_PRIORITY_LOW_INTER       0x0009
#define CAN_TX_PRIORITY_LOW             0x0008

/* CiINTE */
#define CAN_INDI_INVMESS_EN             0x00FF
#define CAN_INDI_WAK_EN                 0x00FF
#define CAN_INDI_ERR_EN                 0x00FF
#define CAN_INDI_TXB2_EN                0x00FF
#define CAN_INDI_TXB1_EN                0x00FF
#define CAN_INDI_TXB0_EN                0x00FF
#define CAN_INDI_RXB1_EN                0x00FF
#define CAN_INDI_RXB0_EN                0x00FF

#define CAN_INDI_INVMESS_DIS            0x007F
#define CAN_INDI_WAK_DIS                0x00BF
#define CAN_INDI_ERR_DIS                0x00DF
#define CAN_INDI_TXB2_DIS               0x00EF
#define CAN_INDI_TXB1_DIS               0x00F7
#define CAN_INDI_TXB0_DIS               0x00FB
#define CAN_INDI_RXB1_DIS               0x00FD
#define CAN_INDI_RXB0_DIS               0x00FE

/* defines for CAN interrupts */

/* Setting the priority of CAN interrupt */
#define CAN_INT_PRI_0                   0xFFF8
#define CAN_INT_PRI_1                   0xFFF9
#define CAN_INT_PRI_2                   0xFFFA
#define CAN_INT_PRI_3                   0xFFFB
#define CAN_INT_PRI_4                   0xFFFC
#define CAN_INT_PRI_5                   0xFFFD
#define CAN_INT_PRI_6                   0xFFFE
#define CAN_INT_PRI_7                   0xFFFF

/* enable / disable interrupts */
#define CAN_INT_ENABLE                  0xFFFF
#define CAN_INT_DISABLE                 0xFFF7

/*********************Function definitions*******************/

/* Macros to  Enable/Disable interrupts and set Interrupt priority of CAN 1 module*/
#define EnableIntCAN1                    IEC1bits.C1IE = 1
#define DisableIntCAN1                   IEC1bits.C1IE = 0
#define SetPriorityIntCAN1(priority)     IPC6bits.C1IP = (priority)

void ConfigIntCAN1(unsigned int config1, unsigned int config2) __attribute__ ((section (".libperi")));

void CAN1SetTXMode(char buffno, unsigned int config) __attribute__ ((section (".libperi")));

void CAN1SetRXMode(char buffno, unsigned int config) __attribute__ ((section (".libperi")));

void CAN1SetOperationModeNoWait(unsigned int config) __attribute__ ((section (".libperi")));

void CAN1AbortAll(void) __attribute__ ((section (".libperi")));

void CAN1SetMask(char mask_no, unsigned int sid, unsigned long eid) __attribute__ ((section (".libperi")));

void CAN1SetFilter(char filter_no, unsigned int sid, unsigned long eid) __attribute__ ((section (".libperi")));

void CAN1SendMessage(unsigned int sid, unsigned long eid, unsigned char * data, unsigned char  datalen, char MsgFlag) __attribute__ ((section (".libperi")));

void CAN1ReceiveMessage(unsigned char * data, unsigned char  datalen, char MsgFlag) __attribute__ ((section (".libperi")));

char CAN1IsTXReady(char buffno) __attribute__ ((section (".libperi")));

char CAN1IsTXPassive(void) __attribute__ ((section (".libperi")));

char CAN1IsRXReady(char buffno) __attribute__ ((section (".libperi")));

char CAN1IsRXPassive(void) __attribute__ ((section (".libperi")));

char CAN1IsBusOff(void) __attribute__ ((section (".libperi")));

void CAN1Initialize(unsigned int config1, unsigned int config2) __attribute__ ((section (".libperi")));

unsigned char CAN1GetTXErrorCount(void) __attribute__ ((section (".libperi")));

unsigned char CAN1GetRXErrorCount(void) __attribute__ ((section (".libperi")));

void CAN1SetOperationMode(unsigned int config) __attribute__ ((section (".libperi")));

#ifdef _C2IF

/* Macros to  Enable/Disable interrupts and set Interrupt priority of CAN 2 module*/
#define EnableIntCAN2                    IEC2bits.C2IE = 1
#define DisableIntCAN2                   IEC2bits.C2IE = 0
#define SetPriorityIntCAN2(priority)     IPC9bits.C2IP = (priority)

void ConfigIntCAN2(unsigned int config1, unsigned int config2) __attribute__ ((section (".libperi")));

void CAN2SetTXMode(char buffno, unsigned int config) __attribute__ ((section (".libperi")));

void CAN2SetRXMode(char buffno, unsigned int config) __attribute__ ((section (".libperi")));

void CAN2SetOperationModeNoWait(unsigned int config) __attribute__ ((section (".libperi")));

void CAN2AbortAll(void) __attribute__ ((section (".libperi")));

void CAN2SetMask(char mask_no, unsigned int sid, unsigned long eid) __attribute__ ((section (".libperi")));

void CAN2SetFilter(char filter_no, unsigned int sid, unsigned long eid) __attribute__ ((section (".libperi")));

void CAN2SendMessage(unsigned int sid, unsigned long eid, unsigned char * data, unsigned char  datalen, char MsgFlag) __attribute__ ((section (".libperi")));

void CAN2ReceiveMessage(unsigned char * data, unsigned char  datalen, char MsgFlag) __attribute__ ((section (".libperi")));

char CAN2IsTXReady(char buffno) __attribute__ ((section (".libperi")));

char CAN2IsTXPassive(void) __attribute__ ((section (".libperi")));

char CAN2IsRXReady(char buffno) __attribute__ ((section (".libperi")));

char CAN2IsRXPassive(void) __attribute__ ((section (".libperi")));

char CAN2IsBusOff(void) __attribute__ ((section (".libperi")));

void CAN2Initialize(unsigned int config1, unsigned int config2) __attribute__ ((section (".libperi")));

unsigned char CAN2GetTXErrorCount(void) __attribute__ ((section (".libperi")));

unsigned char CAN2GetRXErrorCount(void) __attribute__ ((section (".libperi")));

void CAN2SetOperationMode(unsigned int config) __attribute__ ((section (".libperi")));

#endif

#endif

#endif
