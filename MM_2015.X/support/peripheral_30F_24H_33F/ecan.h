/********************************************************************/
/*                Header for ECAN module library functions          */
/********************************************************************/

#if defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__PIC24H__)
#include <p24Hxxxx.h>
#elif defined(__dsPIC33E__)
#include <p33Exxxx.h>
#elif defined(__PIC24E__)
#include <p24Exxxx.h>
#else
#error "Does not build on this target"
#endif

#ifndef __CAN_H
#define __CAN_H

#ifdef _C1TXIF

/* List of SFRs for ECAN */
/* This list contains the SFRs with default (POR) values to be used for configuring ECAN */
/* The user can modify this based on the requirement */

#define CiCTRL1_VALUE              			0x0000
#define CiCTRL2_VALUE              			0x0000
#define CiVEC_VALUE                			0x0000
#define CiFCTRL_VALUE              			0x0000
#define CiFIFO_VALUE               			0x0000
#define CiINTF_VALUE               			0x0000
#define CiINTE_VALUE               			0x0000
#define CiEC_VALUE                 			0x0000
#define CiFG1_VALUE                			0x0000
#define CiFG2_VALUE                			0x0000
#define CiFEN1_VALUE               			0x0000
#define CiBUFPNT1_VALUE            			0x0001
#define CiBUFPNT2_VALUE            			0x0000
#define CiBUFPNT3_VALUE            			0x0000
#define CiBUFPNT4_VALUE            			0x0000
			
#define CiRXF0SID_VALUE            			0x0000
#define CiRXF1SID_VALUE            			0x0000
#define CiRXF2SID_VALUE            			0x0000
#define CiRXF3SID_VALUE            			0x0000
#define CiRXF4SID_VALUE            			0x0000
#define CiRXF5SID_VALUE            			0x0000
#define CiRXF6SID_VALUE            			0x0000
#define CiRXF7SID_VALUE            			0x0000
#define CiRXF8SID_VALUE            			0x0000
#define CiRXF9SID_VALUE            			0x0000
#define CiRXF10SID_VALUE           			0x0000
#define CiRXF11SID_VALUE           			0x0000
#define CiRXF12SID_VALUE           			0x0000
#define CiRXF13SID_VALUE           			0x0000
#define CiRXF14SID_VALUE           			0x0000
#define CiRXF15SID_VALUE           			0x0000
			
#define CiRXF0EID_VALUE            			0x0000
#define CiRXF1EID_VALUE            			0x0000
#define CiRXF2EID_VALUE            			0x0000
#define CiRXF3EID_VALUE            			0x0000
#define CiRXF4EID_VALUE            			0x0000
#define CiRXF5EID_VALUE            			0x0000
#define CiRXF6EID_VALUE            			0x0000
#define CiRXF7EID_VALUE            			0x0000
#define CiRXF8EID_VALUE            			0x0000
#define CiRXF9EID_VALUE            			0x0000
#define CiRXF10EID_VALUE           			0x0000
#define CiRXF11EID_VALUE           			0x0000
#define CiRXF12EID_VALUE           			0x0000
#define CiRXF13EID_VALUE           			0x0000
#define CiRXF14EID_VALUE           			0x0000
#define CiRXF15EID_VALUE           			0x0000
			
#define CiFMSKSEL1_VALUE           			0x0000
			
#define CiRXM0SID_VALUE            			0x0000
#define CiRXM1SID_VALUE            			0x0000
#define CiRXM2SID_VALUE            			0x0000
#define CiRXM3SID_VALUE            			0x0000
#define CiRXM4SID_VALUE            			0x0000
#define CiRXM5SID_VALUE            			0x0000
#define CiRXM6SID_VALUE            			0x0000
#define CiRXM7SID_VALUE            			0x0000
#define CiRXM8SID_VALUE            			0x0000
#define CiRXM9SID_VALUE            			0x0000
#define CiRXM10SID_VALUE           			0x0000
#define CiRXM11SID_VALUE           			0x0000
#define CiRXM12SID_VALUE           			0x0000
#define CiRXM13SID_VALUE           			0x0000
#define CiRXM14SID_VALUE           			0x0000
#define CiRXM15SID_VALUE           			0x0000
			
#define CiRXM0EID_VALUE            			0x0000
#define CiRXM1EID_VALUE            			0x0000
#define CiRXM2EID_VALUE            			0x0000
#define CiRXM3EID_VALUE            			0x0000
#define CiRXM4EID_VALUE            			0x0000
#define CiRXM5EID_VALUE            			0x0000
#define CiRXM6EID_VALUE            			0x0000
#define CiRXM7EID_VALUE            			0x0000
#define CiRXM8EID_VALUE            			0x0000
#define CiRXM9EID_VALUE            			0x0000
#define CiRXM10EID_VALUE           			0x0000
#define CiRXM11EID_VALUE           			0x0000
#define CiRXM12EID_VALUE           			0x0000
#define CiRXM13EID_VALUE           			0x0000
#define CiRXM14EID_VALUE           			0x0000
#define CiRXM15EID_VALUE           			0x0000
			
#define CiRXFUL1_VALUE             			0x0000
#define CiRXFUL2_VALUE             			0x0000
#define CiRXOVF1_VALUE             			0x0000
#define CiRXOVF2_VALUE             			0x0000
#define CiTR01CON_VALUE            			0x0383
#define CiTR23CON_VALUE            			0x0000
#define CiTR45CON_VALUE            			0x0000
#define CiTR67CON_VALUE            			0x0000

/* ECAN Transmit/Receive Buffer Control Register (CiTRmnCON) */

#define CAN_BUFFER0_IS_TX					0xFFFF		
#define CAN_BUFFER0_IS_RX					0xFF7F
					
#define CAN_BUFFER1_IS_TX					0xFFFF
#define CAN_BUFFER1_IS_RX					0x7FFF
					
#define CAN_BUFFER2_IS_TX					0xFFFF
#define CAN_BUFFER2_IS_RX					0xFF7F
					
#define CAN_BUFFER3_IS_TX					0xFFFF
#define CAN_BUFFER3_IS_RX					0x7FFF
					
#define CAN_BUFFER4_IS_TX					0xFFFF
#define CAN_BUFFER4_IS_RX					0xFF7F
					
#define CAN_BUFFER5_IS_TX					0xFFFF
#define CAN_BUFFER5_IS_RX					0x7FFF
					
#define CAN_BUFFER6_IS_TX					0xFFFF
#define CAN_BUFFER6_IS_RX					0xFF7F
					
#define CAN_BUFFER7_IS_TX					0xFFFF
#define CAN_BUFFER7_IS_RX					0x7FFF


#define CAN_SEND_REQUEST_BUFFER0			0xFFFF
#define CAN_ABORT_REQUEST_BUFFER0			0xFFF7
	
#define CAN_SEND_REQUEST_BUFFER1			0xFFFF
#define CAN_ABORT_REQUEST_BUFFER1			0xF7FF
	
#define CAN_SEND_REQUEST_BUFFER2			0xFFFF
#define CAN_ABORT_REQUEST_BUFFER2			0xFFF7
	
#define CAN_SEND_REQUEST_BUFFER3			0xFFFF
#define CAN_ABORT_REQUEST_BUFFER3			0xF7FF
	
#define CAN_SEND_REQUEST_BUFFER4			0xFFFF
#define CAN_ABORT_REQUEST_BUFFER4			0xFFF7

#define CAN_SEND_REQUEST_BUFFER5			0xFFFF
#define CAN_ABORT_REQUEST_BUFFER5			0xF7FF
	
#define CAN_SEND_REQUEST_BUFFER6			0xFFFF
#define CAN_ABORT_REQUEST_BUFFER6			0xFFF7
	
#define CAN_SEND_REQUEST_BUFFER7			0xFFFF
#define CAN_ABORT_REQUEST_BUFFER7			0xF7FF
	
#define CAN_AUTOREMOTE_ENABLE_BUFFER0		0xFFFF	
#define CAN_AUTOREMOTE_DISABLE_BUFFER0		0xFFFB
	
#define CAN_AUTOREMOTE_ENABLE_BUFFER1		0xFFFF
#define CAN_AUTOREMOTE_DISABLE_BUFFER1		0xFBFF
	
#define CAN_AUTOREMOTE_ENABLE_BUFFER2		0xFFFF
#define CAN_AUTOREMOTE_DISABLE_BUFFER2		0xFFFB
	
#define CAN_AUTOREMOTE_ENABLE_BUFFER3		0xFFFF
#define CAN_AUTOREMOTE_DISABLE_BUFFER3		0xFBFF
	
#define CAN_AUTOREMOTE_ENABLE_BUFFER4		0xFFFF
#define CAN_AUTOREMOTE_DISABLE_BUFFER4		0xFFFB
	
#define CAN_AUTOREMOTE_ENABLE_BUFFER5		0xFFFF
#define CAN_AUTOREMOTE_DISABLE_BUFFER5		0xFBFF
	
#define CAN_AUTOREMOTE_ENABLE_BUFFER6		0xFFFF
#define CAN_AUTOREMOTE_DISABLE_BUFFER6		0xFFFB
	
#define CAN_AUTOREMOTE_ENABLE_BUFFER7		0xFFFF
#define CAN_AUTOREMOTE_DISABLE_BUFFER7		0xFBFF
	
#define CAN_TX_HIGH_PRI_BUFFER0				0xFFFF
#define CAN_TX_HIGHINTM_PRI_BUFFER0			0xFFFE
#define CAN_TX_LOWINTM_PRI_BUFFER0			0xFFFD
#define CAN_TX_LOW_PRI_BUFFER0				0xFFFC
	
#define CAN_TX_HIGH_PRI_BUFFER1				0xFFFF
#define CAN_TX_HIGHINTM_PRI_BUFFER1			0xFEFF	
#define CAN_TX_LOWINTM_PRI_BUFFER1			0xFDFF	
#define CAN_TX_LOW_PRI_BUFFER1				0xFCFF
	
#define CAN_TX_HIGH_PRI_BUFFER2				0xFFFF
#define CAN_TX_HIGHINTM_PRI_BUFFER2			0xFFFE
#define CAN_TX_LOWINTM_PRI_BUFFER2			0xFFFD
#define CAN_TX_LOW_PRI_BUFFER2				0xFFFC
	
#define CAN_TX_HIGH_PRI_BUFFER3				0xFFFF
#define CAN_TX_HIGHINTM_PRI_BUFFER3			0xFEFF	
#define CAN_TX_LOWINTM_PRI_BUFFER3			0xFDFF
#define CAN_TX_LOW_PRI_BUFFER3				0xFCFF
	
#define CAN_TX_HIGH_PRI_BUFFER4				0xFFFF
#define CAN_TX_HIGHINTM_PRI_BUFFER4			0xFFFE
#define CAN_TX_LOWINTM_PRI_BUFFER4			0xFFFD
#define CAN_TX_LOW_PRI_BUFFER4				0xFFFC
	
#define CAN_TX_HIGH_PRI_BUFFER5				0xFFFF
#define CAN_TX_HIGHINTM_PRI_BUFFER5			0xFEFF
#define CAN_TX_LOWINTM_PRI_BUFFER5			0xFDFF
#define CAN_TX_LOW_PRI_BUFFER5				0xFCFF
	
#define CAN_TX_HIGH_PRI_BUFFER6				0xFFFF
#define CAN_TX_HIGHINTM_PRI_BUFFER6			0xFFFE
#define CAN_TX_LOWINTM_PRI_BUFFER6			0xFFFD
#define CAN_TX_LOW_PRI_BUFFER6				0xFFFC
	
#define CAN_TX_HIGH_PRI_BUFFER7				0xFFFF
#define CAN_TX_HIGHINTM_PRI_BUFFER7			0xFEFF
#define CAN_TX_LOWINTM_PRI_BUFFER7			0xFDFF
#define CAN_TX_LOW_PRI_BUFFER7				0xFCFF


/* ECAN Buffer Control Register (CiBUFPNT1) */

#define CAN_FILTER0_RX_BUFFER0				0xFFF0
#define CAN_FILTER0_RX_BUFFER1				0xFFF1
#define CAN_FILTER0_RX_BUFFER2				0xFFF2
#define CAN_FILTER0_RX_BUFFER3				0xFFF3
#define CAN_FILTER0_RX_BUFFER4				0xFFF4
#define CAN_FILTER0_RX_BUFFER5				0xFFF5
#define CAN_FILTER0_RX_BUFFER6				0xFFF6
#define CAN_FILTER0_RX_BUFFER7				0xFFF7
#define CAN_FILTER0_RX_BUFFER8				0xFFF8
#define CAN_FILTER0_RX_BUFFER9				0xFFF9
#define CAN_FILTER0_RX_BUFFER10				0xFFFA
#define CAN_FILTER0_RX_BUFFER11				0xFFFB		
#define CAN_FILTER0_RX_BUFFER12				0xFFFC
#define CAN_FILTER0_RX_BUFFER13				0xFFFD
#define CAN_FILTER0_RX_BUFFER14				0xFFFE	
#define CAN_FILTER0_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER1_RX_BUFFER0				0xFF0F
#define CAN_FILTER1_RX_BUFFER1				0xFF1F
#define CAN_FILTER1_RX_BUFFER2				0xFF2F
#define CAN_FILTER1_RX_BUFFER3				0xFF3F
#define CAN_FILTER1_RX_BUFFER4				0xFF4F
#define CAN_FILTER1_RX_BUFFER5				0xFF5F
#define CAN_FILTER1_RX_BUFFER6				0xFF6F
#define CAN_FILTER1_RX_BUFFER7				0xFF7F
#define CAN_FILTER1_RX_BUFFER8				0xFF8F	
#define CAN_FILTER1_RX_BUFFER9				0xFF9F
#define CAN_FILTER1_RX_BUFFER10				0xFFAF
#define CAN_FILTER1_RX_BUFFER11				0xFFBF
#define CAN_FILTER1_RX_BUFFER12				0xFFCF
#define CAN_FILTER1_RX_BUFFER13				0xFFDF
#define CAN_FILTER1_RX_BUFFER14				0xFFEF
#define CAN_FILTER1_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER2_RX_BUFFER0				0xF0FF
#define CAN_FILTER2_RX_BUFFER1				0xF1FF
#define CAN_FILTER2_RX_BUFFER2				0xF2FF
#define CAN_FILTER2_RX_BUFFER3				0xF3FF
#define CAN_FILTER2_RX_BUFFER4				0xF4FF
#define CAN_FILTER2_RX_BUFFER5				0xF5FF
#define CAN_FILTER2_RX_BUFFER6				0xF6FF
#define CAN_FILTER2_RX_BUFFER7				0xF7FF
#define CAN_FILTER2_RX_BUFFER8				0xF8FF
#define CAN_FILTER2_RX_BUFFER9				0xF9FF
#define CAN_FILTER2_RX_BUFFER10				0xFAFF
#define CAN_FILTER2_RX_BUFFER11				0xFBFF
#define CAN_FILTER2_RX_BUFFER12				0xFCFF
#define CAN_FILTER2_RX_BUFFER13				0xFDFF
#define CAN_FILTER2_RX_BUFFER14				0xFEFF
#define CAN_FILTER2_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER3_RX_BUFFER0				0x0FFF
#define CAN_FILTER3_RX_BUFFER1				0x1FFF
#define CAN_FILTER3_RX_BUFFER2				0x2FFF
#define CAN_FILTER3_RX_BUFFER3				0x3FFF
#define CAN_FILTER3_RX_BUFFER4				0x4FFF
#define CAN_FILTER3_RX_BUFFER5				0x5FFF
#define CAN_FILTER3_RX_BUFFER6				0x6FFF
#define CAN_FILTER3_RX_BUFFER7				0x7FFF
#define CAN_FILTER3_RX_BUFFER8				0x8FFF
#define CAN_FILTER3_RX_BUFFER9				0x9FFF
#define CAN_FILTER3_RX_BUFFER10				0xAFFF
#define CAN_FILTER3_RX_BUFFER11				0xBFFF
#define CAN_FILTER3_RX_BUFFER12				0xCFFF
#define CAN_FILTER3_RX_BUFFER13				0xDFFF
#define CAN_FILTER3_RX_BUFFER14				0xEFFF
#define CAN_FILTER3_RX_BUFFER_FIFO			0xFFFF	


/* ECAN Buffer Control Register (CiBUFPNT2) */

#define CAN_FILTER4_RX_BUFFER0				0xFFF0										
#define CAN_FILTER4_RX_BUFFER1				0xFFF1
#define CAN_FILTER4_RX_BUFFER2				0xFFF2
#define CAN_FILTER4_RX_BUFFER3				0xFFF3
#define CAN_FILTER4_RX_BUFFER4				0xFFF4
#define CAN_FILTER4_RX_BUFFER5				0xFFF5
#define CAN_FILTER4_RX_BUFFER6				0xFFF6
#define CAN_FILTER4_RX_BUFFER7				0xFFF7
#define CAN_FILTER4_RX_BUFFER8				0xFFF8
#define CAN_FILTER4_RX_BUFFER9				0xFFF9
#define CAN_FILTER4_RX_BUFFER10				0xFFFA
#define CAN_FILTER4_RX_BUFFER11				0xFFFB
#define CAN_FILTER4_RX_BUFFER12				0xFFFC
#define CAN_FILTER4_RX_BUFFER13				0xFFFD
#define CAN_FILTER4_RX_BUFFER14				0xFFFE
#define CAN_FILTER4_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER5_RX_BUFFER0				0xFF0F
#define CAN_FILTER5_RX_BUFFER1				0xFF1F
#define CAN_FILTER5_RX_BUFFER2				0xFF2F
#define CAN_FILTER5_RX_BUFFER3				0xFF3F
#define CAN_FILTER5_RX_BUFFER4				0xFF4F
#define CAN_FILTER5_RX_BUFFER5				0xFF5F
#define CAN_FILTER5_RX_BUFFER6				0xFF6F
#define CAN_FILTER5_RX_BUFFER7				0xFF7F
#define CAN_FILTER5_RX_BUFFER8				0xFF8F
#define CAN_FILTER5_RX_BUFFER9				0xFF9F
#define CAN_FILTER5_RX_BUFFER10				0xFFAF
#define CAN_FILTER5_RX_BUFFER11				0xFFBF
#define CAN_FILTER5_RX_BUFFER12				0xFFCF
#define CAN_FILTER5_RX_BUFFER13				0xFFDF
#define CAN_FILTER5_RX_BUFFER14				0xFFEF
#define CAN_FILTER5_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER6_RX_BUFFER0				0xF0FF	
#define CAN_FILTER6_RX_BUFFER1				0xF1FF
#define CAN_FILTER6_RX_BUFFER2				0xF2FF
#define CAN_FILTER6_RX_BUFFER3				0xF3FF
#define CAN_FILTER6_RX_BUFFER4				0xF4FF
#define CAN_FILTER6_RX_BUFFER5				0xF5FF
#define CAN_FILTER6_RX_BUFFER6				0xF6FF
#define CAN_FILTER6_RX_BUFFER7				0xF7FF
#define CAN_FILTER6_RX_BUFFER8				0xF8FF
#define CAN_FILTER6_RX_BUFFER9				0xF9FF
#define CAN_FILTER6_RX_BUFFER10				0xFAFF
#define CAN_FILTER6_RX_BUFFER11				0xFBFF
#define CAN_FILTER6_RX_BUFFER12				0xFCFF
#define CAN_FILTER6_RX_BUFFER13				0xFDFF
#define CAN_FILTER6_RX_BUFFER14				0xFEFF
#define CAN_FILTER6_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER7_RX_BUFFER0				0x0FFF
#define CAN_FILTER7_RX_BUFFER1				0x1FFF
#define CAN_FILTER7_RX_BUFFER2				0x2FFF
#define CAN_FILTER7_RX_BUFFER3				0x3FFF
#define CAN_FILTER7_RX_BUFFER4				0x4FFF
#define CAN_FILTER7_RX_BUFFER5				0x5FFF
#define CAN_FILTER7_RX_BUFFER6				0x6FFF
#define CAN_FILTER7_RX_BUFFER7				0x7FFF
#define CAN_FILTER7_RX_BUFFER8				0x8FFF
#define CAN_FILTER7_RX_BUFFER9				0x9FFF
#define CAN_FILTER7_RX_BUFFER10				0xAFFF
#define CAN_FILTER7_RX_BUFFER11				0xBFFF
#define CAN_FILTER7_RX_BUFFER12				0xCFFF
#define CAN_FILTER7_RX_BUFFER13				0xDFFF
#define CAN_FILTER7_RX_BUFFER14				0xEFFF
#define CAN_FILTER7_RX_BUFFER_FIFO			0xFFFF

/* ECAN Buffer Control Register (CiBUFPNT3) */

#define CAN_FILTER8_RX_BUFFER0				0xFFF0
#define CAN_FILTER8_RX_BUFFER1				0xFFF1
#define CAN_FILTER8_RX_BUFFER2				0xFFF2
#define CAN_FILTER8_RX_BUFFER3				0xFFF3
#define CAN_FILTER8_RX_BUFFER4				0xFFF4
#define CAN_FILTER8_RX_BUFFER5				0xFFF5
#define CAN_FILTER8_RX_BUFFER6				0xFFF6
#define CAN_FILTER8_RX_BUFFER7				0xFFF7
#define CAN_FILTER8_RX_BUFFER8				0xFFF8
#define CAN_FILTER8_RX_BUFFER9				0xFFF9
#define CAN_FILTER8_RX_BUFFER10				0xFFFA
#define CAN_FILTER8_RX_BUFFER11				0xFFFB
#define CAN_FILTER8_RX_BUFFER12				0xFFFC
#define CAN_FILTER8_RX_BUFFER13				0xFFFD
#define CAN_FILTER8_RX_BUFFER14				0xFFFE
#define CAN_FILTER8_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER9_RX_BUFFER0				0xFF0F
#define CAN_FILTER9_RX_BUFFER1				0xFF1F
#define CAN_FILTER9_RX_BUFFER2				0xFF2F
#define CAN_FILTER9_RX_BUFFER3				0xFF3F
#define CAN_FILTER9_RX_BUFFER4				0xFF4F
#define CAN_FILTER9_RX_BUFFER5				0xFF5F
#define CAN_FILTER9_RX_BUFFER6				0xFF6F
#define CAN_FILTER9_RX_BUFFER7				0xFF7F
#define CAN_FILTER9_RX_BUFFER8				0xFF8F
#define CAN_FILTER9_RX_BUFFER9				0xFF9F
#define CAN_FILTER9_RX_BUFFER10				0xFFAF
#define CAN_FILTER9_RX_BUFFER11				0xFFBF
#define CAN_FILTER9_RX_BUFFER12				0xFFCF
#define CAN_FILTER9_RX_BUFFER13				0xFFDF
#define CAN_FILTER9_RX_BUFFER14				0xFFEF
#define CAN_FILTER9_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER10_RX_BUFFER0				0xF0FF
#define CAN_FILTER10_RX_BUFFER1				0xF1FF
#define CAN_FILTER10_RX_BUFFER2				0xF2FF
#define CAN_FILTER10_RX_BUFFER3				0xF3FF
#define CAN_FILTER10_RX_BUFFER4				0xF4FF
#define CAN_FILTER10_RX_BUFFER5				0xF5FF
#define CAN_FILTER10_RX_BUFFER6				0xF6FF
#define CAN_FILTER10_RX_BUFFER7				0xF7FF
#define CAN_FILTER10_RX_BUFFER8				0xF8FF
#define CAN_FILTER10_RX_BUFFER9				0xF9FF
#define CAN_FILTER10_RX_BUFFER10			0xFAFF
#define CAN_FILTER10_RX_BUFFER11			0xFBFF
#define CAN_FILTER10_RX_BUFFER12			0xFCFF
#define CAN_FILTER10_RX_BUFFER13			0xFDFF
#define CAN_FILTER10_RX_BUFFER14			0xFEFF
#define CAN_FILTER10_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER11_RX_BUFFER0				0x0FFF
#define CAN_FILTER11_RX_BUFFER1				0x1FFF
#define CAN_FILTER11_RX_BUFFER2				0x2FFF
#define CAN_FILTER11_RX_BUFFER3				0x3FFF
#define CAN_FILTER11_RX_BUFFER4				0x4FFF
#define CAN_FILTER11_RX_BUFFER5				0x5FFF
#define CAN_FILTER11_RX_BUFFER6				0x6FFF
#define CAN_FILTER11_RX_BUFFER7				0x7FFF
#define CAN_FILTER11_RX_BUFFER8				0x8FFF
#define CAN_FILTER11_RX_BUFFER9				0x9FFF
#define CAN_FILTER11_RX_BUFFER10			0xAFFF
#define CAN_FILTER11_RX_BUFFER11			0xBFFF
#define CAN_FILTER11_RX_BUFFER12			0xCFFF
#define CAN_FILTER11_RX_BUFFER13			0xDFFF
#define CAN_FILTER11_RX_BUFFER14			0xEFFF
#define CAN_FILTER11_RX_BUFFER_FIFO			0xFFFF

/* ECAN Buffer Control Register (CiBUFPNT4) */

#define CAN_FILTER12_RX_BUFFER0				0xFFF0
#define CAN_FILTER12_RX_BUFFER1				0xFFF1
#define CAN_FILTER12_RX_BUFFER2				0xFFF2
#define CAN_FILTER12_RX_BUFFER3				0xFFF3
#define CAN_FILTER12_RX_BUFFER4				0xFFF4
#define CAN_FILTER12_RX_BUFFER5				0xFFF5
#define CAN_FILTER12_RX_BUFFER6				0xFFF6
#define CAN_FILTER12_RX_BUFFER7				0xFFF7
#define CAN_FILTER12_RX_BUFFER8				0xFFF8
#define CAN_FILTER12_RX_BUFFER9				0xFFF9
#define CAN_FILTER12_RX_BUFFER10			0xFFFA
#define CAN_FILTER12_RX_BUFFER11			0xFFFB
#define CAN_FILTER12_RX_BUFFER12			0xFFFC
#define CAN_FILTER12_RX_BUFFER13			0xFFFD
#define CAN_FILTER12_RX_BUFFER14			0xFFFE
#define CAN_FILTER12_RX_BUFFER_FIFO			0xFFFF 

#define CAN_FILTER13_RX_BUFFER0				0xFF0F
#define CAN_FILTER13_RX_BUFFER1				0xFF1F
#define CAN_FILTER13_RX_BUFFER2				0xFF2F
#define CAN_FILTER13_RX_BUFFER3				0xFF3F
#define CAN_FILTER13_RX_BUFFER4				0xFF4F
#define CAN_FILTER13_RX_BUFFER5				0xFF5F
#define CAN_FILTER13_RX_BUFFER6				0xFF6F
#define CAN_FILTER13_RX_BUFFER7				0xFF7F
#define CAN_FILTER13_RX_BUFFER8				0xFF8F
#define CAN_FILTER13_RX_BUFFER9				0xFF9F
#define CAN_FILTER13_RX_BUFFER10			0xFFAF
#define CAN_FILTER13_RX_BUFFER11			0xFFBF
#define CAN_FILTER13_RX_BUFFER12			0xFFCF
#define CAN_FILTER13_RX_BUFFER13			0xFFDF
#define CAN_FILTER13_RX_BUFFER14			0xFFEF
#define CAN_FILTER13_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER14_RX_BUFFER0				0xF0FF
#define CAN_FILTER14_RX_BUFFER1				0xF1FF
#define CAN_FILTER14_RX_BUFFER2				0xF2FF
#define CAN_FILTER14_RX_BUFFER3				0xF3FF
#define CAN_FILTER14_RX_BUFFER4				0xF4FF
#define CAN_FILTER14_RX_BUFFER5				0xF5FF
#define CAN_FILTER14_RX_BUFFER6				0xF6FF
#define CAN_FILTER14_RX_BUFFER7				0xF7FF
#define CAN_FILTER14_RX_BUFFER8				0xF8FF
#define CAN_FILTER14_RX_BUFFER9				0xF9FF
#define CAN_FILTER14_RX_BUFFER10			0xFAFF
#define CAN_FILTER14_RX_BUFFER11			0xFBFF
#define CAN_FILTER14_RX_BUFFER12			0xFCFF
#define CAN_FILTER14_RX_BUFFER13			0xFDFF
#define CAN_FILTER14_RX_BUFFER14			0xFEFF
#define CAN_FILTER14_RX_BUFFER_FIFO			0xFFFF

#define CAN_FILTER15_RX_BUFFER0				0x0FFF
#define CAN_FILTER15_RX_BUFFER1				0x1FFF
#define CAN_FILTER15_RX_BUFFER2				0x2FFF
#define CAN_FILTER15_RX_BUFFER3				0x3FFF
#define CAN_FILTER15_RX_BUFFER4				0x4FFF
#define CAN_FILTER15_RX_BUFFER5				0x5FFF
#define CAN_FILTER15_RX_BUFFER6				0x6FFF
#define CAN_FILTER15_RX_BUFFER7				0x7FFF
#define CAN_FILTER15_RX_BUFFER8				0x8FFF
#define CAN_FILTER15_RX_BUFFER9				0x9FFF
#define CAN_FILTER15_RX_BUFFER10			0xAFFF
#define CAN_FILTER15_RX_BUFFER11			0xBFFF
#define CAN_FILTER15_RX_BUFFER12			0xCFFF
#define CAN_FILTER15_RX_BUFFER13			0xDFFF
#define CAN_FILTER15_RX_BUFFER14			0xEFFF
#define CAN_FILTER15_RX_BUFFER_FIFO			0xFFFF

/* ECAN CONTROL REGISTER 1 bit definitions (CiCTRL1)*/

/* these defines are such that, when used will clear ABAT bit */

#define CAN_IDLE_STOP                0xEFFF    /* Discontinue module operation in idle mode */
#define CAN_IDLE_CON                 0xCFFF    /* continue modeule operation in idle mode */

#define CAN_ABAT                     0xFFFF    /* Abort all pending transmissions*/

#define CAN_MASTERCLK_FCY            0xEFFF    /* CAN master clock if Fcy*/
#define CAN_MASTERCLK_FOSC           0xE7FF    /* CAN master clock is Fosc*/

#define CAN_REQ_OPERMODE_NOR         0xE8FF    /* Set normal operation mode*/
#define CAN_REQ_OPERMODE_DIS         0xE9FF    /* set disable mode*/
#define CAN_REQ_OPERMODE_LOOPBK      0xEAFF    /* set loopback mode */
#define CAN_REQ_OPERMODE_LISTENONLY  0xEBFF    /* set listen only mode */
#define CAN_REQ_OPERMODE_CONFIG      0xECFF    /* set configuration mode */
#define CAN_REQ_OPERMODE_LISTENALL   0xEFFF    /* set listen all messages mode*/

#define CAN_OPMODE_IS_NOR            0xEF1F    /* module is in normal operation mode */
#define CAN_OPMODE_IS_DIS            0xEF3F    /* module is in disable mode */
#define CAN_OPMODE_IS_LOOPBK         0xEF5F    /* module is in loop back mode */
#define CAN_OPMODE_IS_LISTENONLY     0xEF7F    /* module is in listen only mode */
#define CAN_OPMODE_IS_CONFIG         0xEF9F    /* module is in configuration mode */
#define CAN_OPMODE_IS_LISTENALL      0xEFFF    /* module is in listen all messages mdoe */

#define CAN_CAPTURE_ENABLE           0xEFFF    /* Enable input capture based on CAN message receive */
#define CAN_CAPTURE_DISABLE          0xEFF7    /* disable can capture */

#define CAN_SFR_FILTER_WIN           0xEFFF    /* use filter window */
#define CAN_SFR_BUFFER_WIN           0XEFFE    /* use buffer window */

/*ECAN CONTROL REGISTER 2 bit definitions (CiCTRL2)*/

#define CAN_DO_NOT_CMP_DATABYTES       0xFFE0        /* Do not compare data bytes*/
#define CAN_CMP_DATABYTE1_BIT7_EID0    0xFFE1        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE1_BIT6_EID1    0xFFE2        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE1_BIT5_EID2    0xFFE3        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE1_BIT4_EID3    0xFFE4        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE1_BIT3_EID4    0xFFE5        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE1_BIT2_EID5    0xFFE6        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE1_BIT1_EID6    0xFFE7        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE1_BIT0_EID7    0xFFE8        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE2_BIT7_EID8    0xFFE9        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE2_BIT6_EID9    0xFFEA        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE2_BIT5_EID10   0xFFEB        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE2_BIT4_EID11   0xFFEC        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE2_BIT3_EID12   0xFFED        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE2_BIT2_EID13   0xFFEE        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE2_BIT1_EID14   0xFFEF        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE2_BIT0_EID15   0xFFF0        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE3_BIT7_EID16   0xFFF1        /* Compare up to data byte 1, bit 7 with EID<0> */
#define CAN_CMP_DATABYTE3_BIT6_EID17   0xFFF2        /* Compare up to data byte 1, bit 7 with EID<0> */

/*configuration of CiRXMnSID */

#define CAN_MASK_SID(x)                 ( ((x & 0x07FF) << 5) | 0x000B )

#define CAN_MATCH_FILTER_TYPE           0xFFEB       
#define CAN_IGNORE_FILTER_TYPE          0xFFE3

/*configuration of CiRXMnEIDH and CiRXMnEIDL */

#define CAN_MASK_EID(x)                 ( (unsigned long)x & 0x3FFFF )

/* configuration of CiRXFnSID */

#define CAN_FILTER_SID(x)               ( ((x & 0x07FF) << 5) | 0x000B )

#define CAN_RX_EID_EN                   0xFFEB       
#define CAN_RX_EID_DIS                  0xFFE3

/* configuration of CiRXFnEID */

#define CAN_FILTER_EID(x)               ( (unsigned long)x & 0x3FFFF ) 

/*ECAN CiFCTRL : ECAN FIFO CONTROL REGISTER */

#define CAN_DMA_BUF_SIZE_32    0xDFFF    /* 32 buffers in DMA RAM */
#define CAN_DMA_BUF_SIZE_24    0xBFFF    /* 24 buffers in DMA RAM */
#define CAN_DMA_BUF_SIZE_16    0x9FFF    /* 16 buffers in DMA RAM */
#define CAN_DMA_BUF_SIZE_12    0x7FFF    /* 12 buffers in DMA RAM */
#define CAN_DMA_BUF_SIZE_8     0x5FFF    /* 8 buffers in DMA RAM */
#define CAN_DMA_BUF_SIZE_6     0x3FFF    /* 6 buffers in DMA RAM */
#define CAN_DMA_BUF_SIZE_4     0x1FFF    /* 4 buffers in DMA RAM */

#define CAN_FIFO_AREA_RB31     0xFFDF    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB30     0xFFDE    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB29     0xFFDD    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB28     0xFFDC    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB27     0xFFDB    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB26     0xFFDA    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB25     0xFFD9    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB24     0xFFD8    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB23     0xFFD7    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB22     0xFFD6    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB21     0xFFD5    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB20     0xFFD4    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB19     0xFFD3    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB18     0xFFD2    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB17     0xFFD1    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB16     0xFFD0    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB15     0xFFCF    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB14     0xFFCE    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB13     0xFFCD    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB12     0xFFCC    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB11     0xFFCB    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB10     0xFFCA    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB9      0xFFC9    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_RB8      0xFFC8    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_TRB7     0xFFC7    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_TRB6     0xFFC6    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_TRB5     0xFFC5    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_TRB4     0xFFC4    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_TRB3     0xFFC3    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_TRB2     0xFFC2    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_TRB1     0xFFC1    /* FIFO area starts with buffer bits */
#define CAN_FIFO_AREA_TRB0     0xFFC0    /* FIFO area starts with buffer bits */

/*ECAN CiINTE : ECAN INTERRUPT ENABLE REGISTER */

#define CAN_INVALID_MESSAGE_INT_EN    0xFFFF    /*Invalid message received interrupt enable bit*/
#define CAN_WAKEUP_INT_EN             0xFFFF    /* Bus wake up activity interrupt flag bit*/
#define CAN_ERR_INT_EN                0xFFFF    /* Error interrupt enable bit*/
#define CAN_FIFO_INT_EN               0xFFFF    /* FIFO almost full interrupt enable bit*/
#define CAN_RXBUF_OVERFLOW_INT_EN     0xFFFF    /* RX Buffer overflow interrupt enable bit */
#define CAN_RXBUF_INT_EN              0xFFFF    /* RX buffer interrupt enable bit*/
#define CAN_TXBUF_INT_EN              0xFFFF    /* TX buffer interrupt enable bit */

#define CAN_INVALID_MESSAGE_INT_DIS   0xFF7F    /*Invalid message received interrupt enable bit*/
#define CAN_WAKEUP_INT_DIS            0xFFBF    /* Bus wake up activity interrupt flag bit*/
#define CAN_ERR_INT_DIS               0xFFCF    /* Error interrupt enable bit*/
#define CAN_FIFO_INT_DIS              0xFFE7    /* FIFO almost full interrupt enable bit*/
#define CAN_RXBUF_OVERFLOW_INT_DIS    0xFFEB    /* RX Buffer overflow interrupt enable bit */
#define CAN_RXBUF_INT_DIS             0xFFED    /* RX buffer interrupt enable bit*/
#define CAN_TXBUF_INT_DIS             0xFFEE    /* TX buffer interrupt enable bit */

/*ECAN CiCFG1 : ECAN BAUD RATE CONFIGURATION REGISTER1 */

#define CAN_SYNC_JUMP_WIDTH1            0x003F
#define CAN_SYNC_JUMP_WIDTH2            0x007F
#define CAN_SYNC_JUMP_WIDTH3            0x00BF
#define CAN_SYNC_JUMP_WIDTH4            0x00FF

#define CAN_BAUD_PRE_SCALE(x)           (((x-1) & 0x3f) | 0xC0)

/*ECAN CiCFG2 : ECAN BAUD RATE CONFIGURATION REGISTER2 */

#define CAN_WAKEUP_BY_FILTER_EN         0x47FF
#define CAN_WAKEUP_BY_FILTER_DIS        0x07FF

#define CAN_PHASE_SEG2_TQ(x)            ((((x-1) & 0x7) << 8) | 0x40FF)

#define CAN_PHASE_SEG1_TQ(x)            ((((x-1) & 0x7) << 3) | 0x47C7)

#define CAN_PROPAGATIONTIME_SEG_TQ(x)   (((x-1) & 0x7) | 0x47F8)

#define CAN_SEG2_FREE_PROG              0x47FF
#define CAN_SEG2_TIME_LIMIT_SET         0x477F

#define CAN_SAMPLE3TIMES                0x47FF
#define CAN_SAMPLE1TIME                 0x47BF

/* CiFMSKSEL1 : ECAN FILTER 7-0 MASK SELECTION REGISTER */

#define CAN_MASK_FILTER7_NO_MASK      0xFFFF    /* Mask Source for filter 7 bit : No mask*/
#define CAN_MASK_FILTER7_MASK2        0xBFFF    /* Mask Source for filter 7 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER7_MASK1        0x7FFF    /* Mask Source for filter 7 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER7_MASK0        0x3FFF    /* Mask Source for filter 7 bit :
                                Acceptance Mask 0 registers contain mask*/
#define CAN_MASK_FILTER6_NO_MASK      0xFFFF    /* Mask Source for filter 6 bit : No mask*/
#define CAN_MASK_FILTER6_MASK2        0xEFFF    /* Mask Source for filter 6 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER6_MASK1        0xDFFF    /* Mask Source for filter 6 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER6_MASK0        0xCFFF    /* Mask Source for filter 6 bit :
                            Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER5_NO_MASK      0xFFFF    /* Mask Source for filter 5 bit : No mask*/
#define CAN_MASK_FILTER5_MASK2        0xFBFF    /* Mask Source for filter 5 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER5_MASK1        0xF7FF    /* Mask Source for filter 5 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER5_MASK0        0xF3FF    /* Mask Source for filter 5 bit :
                            Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER4_NO_MASK      0xFFFF    /* Mask Source for filter 4 bit : No mask*/
#define CAN_MASK_FILTER4_MASK2        0xFEFF    /* Mask Source for filter 4 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER4_MASK1        0xFDFF    /* Mask Source for filter 4 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER4_MASK0        0xFCFF    /* Mask Source for filter 4 bit :
                                Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER3_NO_MASK      0xFFFF    /* Mask Source for filter 3 bit : No mask*/
#define CAN_MASK_FILTER3_MASK2        0xFFBF    /* Mask Source for filter 3 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER3_MASK1        0xFF7F    /* Mask Source for filter 3 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER3_MASK0        0xFF3F    /* Mask Source for filter 3 bit :
                            Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER2_NO_MASK      0xFFFF    /* Mask Source for filter 2 bit : No mask*/
#define CAN_MASK_FILTER2_MASK2        0xFFEF    /* Mask Source for filter 2 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER2_MASK1        0xFFDF    /* Mask Source for filter 2 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER2_MASK0        0xFFCF    /* Mask Source for filter 2 bit :
                            Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER1_NO_MASK      0xFFFF    /* Mask Source for filter 1 bit : No mask*/
#define CAN_MASK_FILTER1_MASK2        0xFFFB    /* Mask Source for filter 1 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER1_MASK1        0xFFF7    /* Mask Source for filter 1 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER1_MASK0        0xFFF3    /* Mask Source for filter 1 bit :
                            Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER0_NO_MASK      0xFFFF    /* Mask Source for filter 0 bit : No mask*/
#define CAN_MASK_FILTER0_MASK2        0xFFFE    /* Mask Source for filter 0 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER0_MASK1        0xFFFD    /* Mask Source for filter 0 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER0_MASK0        0xFFFC    /* Mask Source for filter 0 bit :
                            Acceptance Mask 0 registers contain mask*/

/* CiFMSKSEL2 : ECAN FILTER 15-8 MASK SELECTION REGISTER */

#define CAN_MASK_FILTER15_NO_MASK      0xFFFF    /* Mask Source for filter 15 bit : No mask*/
#define CAN_MASK_FILTER15_MASK2        0xBFFF    /* Mask Source for filter 15 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER15_MASK1        0x7FFF    /* Mask Source for filter 15 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER15_MASK0        0x3FFF    /* Mask Source for filter 15 bit :
                                Acceptance Mask 0 registers contain mask*/
#define CAN_MASK_FILTER14_NO_MASK      0xFFFF    /* Mask Source for filter 14 bit : No mask*/
#define CAN_MASK_FILTER14_MASK2        0xEFFF    /* Mask Source for filter 14 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER14_MASK1        0xDFFF    /* Mask Source for filter 14 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER14_MASK0        0xCFFF    /* Mask Source for filter 14 bit :
                            Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER13_NO_MASK      0xFFFF    /* Mask Source for filter 13 bit : No mask*/
#define CAN_MASK_FILTER13_MASK2        0xFBFF    /* Mask Source for filter 13 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER13_MASK1        0xF7FF    /* Mask Source for filter 13 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER13_MASK0        0xF3FF    /* Mask Source for filter 13 bit :
                            Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER12_NO_MASK      0xFFFF    /* Mask Source for filter 12 bit : No mask*/
#define CAN_MASK_FILTER12_MASK2        0xFEFF    /* Mask Source for filter 12 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER12_MASK1        0xFDFF    /* Mask Source for filter 12 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER12_MASK0        0xFCFF    /* Mask Source for filter 12 bit :
                                Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER11_NO_MASK      0xFFFF    /* Mask Source for filter 11 bit : No mask*/
#define CAN_MASK_FILTER11_MASK2        0xFFBF    /* Mask Source for filter 11 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER11_MASK1        0xFF7F    /* Mask Source for filter 11 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER11_MASK0        0xFF3F    /* Mask Source for filter 11 bit :
                            Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER10_NO_MASK      0xFFFF    /* Mask Source for filter 10 bit : No mask*/
#define CAN_MASK_FILTER10_MASK2        0xFFEF    /* Mask Source for filter 10 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER10_MASK1        0xFFDF    /* Mask Source for filter 10 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER10_MASK0        0xFFCF    /* Mask Source for filter 10 bit :
                            Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER9_NO_MASK       0xFFFF    /* Mask Source for filter 9 bit : No mask*/
#define CAN_MASK_FILTER9_MASK2         0xFFFB    /* Mask Source for filter 9 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER9_MASK1         0xFFF7    /* Mask Source for filter 9 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER9_MASK0         0xFFF3    /* Mask Source for filter 9 bit :
                            Acceptance Mask 0 registers contain mask*/

#define CAN_MASK_FILTER8_NO_MASK       0xFFFF    /* Mask Source for filter 8 bit : No mask*/
#define CAN_MASK_FILTER8_MASK2         0xFFFE    /* Mask Source for filter 8 bit :
                            Acceptance Mask 2 registers contain mask*/
#define CAN_MASK_FILTER8_MASK1         0xFFFD    /* Mask Source for filter 8 bit :
                            Acceptance Mask 1 registers contain mask*/
#define CAN_MASK_FILTER8_MASK0         0xFFFC    /* Mask Source for filter 8 bit :
                            Acceptance Mask 0 registers contain mask*/

/*********************Function definitions*******************/

/* Macros to  Enable/Disable interrupts and set Interrupt priority of CAN 1 module*/
#define EnableIntCAN1                    _C1IE = 1
#define DisableIntCAN1                   _C1IE = 0
#define SetPriorityIntCAN1(priority)     _C1IP = (priority)

#define CAN_INT_ENABLE                   ((0x1 << 3) | 0x7)
#define CAN_INT_DISABLE                  0x07

#define CAN_INT_PRI_1                    ((1<<3)| 1)
#define CAN_INT_PRI_2                    ((1<<3)| 2)
#define CAN_INT_PRI_3                    ((1<<3)| 3)
#define CAN_INT_PRI_4                    ((1<<3)| 4)
#define CAN_INT_PRI_5                    ((1<<3)| 5)
#define CAN_INT_PRI_6                    ((1<<3)| 6)
#define CAN_INT_PRI_7                    ((1<<3)| 7)


void ConfigIntCAN1(unsigned int config1, unsigned char config2) __attribute__ ((section (".libperi")));

void CAN1SetTXRXMode(char buffno, unsigned int config) __attribute__ ((section (".libperi")));

void CAN1SetOperationModeNoWait(unsigned int config1,unsigned int config2) __attribute__ ((section (".libperi")));

void CAN1AbortAll(void) __attribute__ ((section (".libperi")));

void CAN1SetMask(unsigned char mask_no, unsigned int sid, unsigned long eid) __attribute__ ((section (".libperi")));

void CAN1SetFilter(unsigned char filter_no, unsigned int sid, unsigned long eid) __attribute__ ((section (".libperi")));

void CAN1SendMessage(unsigned char *data, unsigned char datalen, unsigned long txIdentifier,\
unsigned char ide, unsigned char remoteTransmit, unsigned int *dmaBaseAddress, unsigned char MsgFlag) __attribute__ ((section (".libperi")));


void CAN1ReceiveMessage (unsigned char * data, unsigned char  datalen,  
                         unsigned char *DMAptr) __attribute__ ((section (".libperi")));

char CAN1IsTXReady(char buffno) __attribute__ ((section (".libperi")));

char CAN1IsTXPassive(void) __attribute__ ((section (".libperi")));

unsigned short CAN1IsRXReady(char buffno) __attribute__ ((section (".libperi")));

char CAN1IsRXPassive(void) __attribute__ ((section (".libperi")));

char CAN1IsBusOff(void) __attribute__ ((section (".libperi")));

void CAN1Initialize(unsigned int config1, unsigned int config2) __attribute__ ((section (".libperi")));

unsigned char CAN1GetTXErrorCount(void) __attribute__ ((section (".libperi")));

unsigned char CAN1GetRXErrorCount(void) __attribute__ ((section (".libperi")));

void CAN1SetOperationMode(unsigned int config1,unsigned int config2) __attribute__ ((section (".libperi")));

void CAN1ClearRXFUL1(void) __attribute__ ((section (".libperi")));

void CAN1ClearRXFUL2(void) __attribute__ ((section (".libperi")));

void CAN1ClearRXOVF1(void) __attribute__ ((section (".libperi")));

void CAN1ClearRXOVF2(void) __attribute__ ((section (".libperi")));

void CAN1EnableFilter(char filter_no) __attribute__ ((section (".libperi")));

void CAN1FIFOCon(unsigned int fifo_val) __attribute__ ((section (".libperi")));

void CAN1SetBUFPNT1(unsigned int pointer_value) __attribute__ ((section (".libperi")));

void CAN1SetBUFPNT2(unsigned int pointer_value) __attribute__ ((section (".libperi")));

void CAN1SetBUFPNT3(unsigned int pointer_value) __attribute__ ((section (".libperi")));

void CAN1SetBUFPNT4(unsigned int pointer_value) __attribute__ ((section (".libperi")));

void CAN1SetMaskSource(unsigned int mask_val1, unsigned int mask_val2) __attribute__ ((section (".libperi")));

#endif

#ifdef _C2TXIF

/* Macros to  Enable/Disable interrupts and set Interrupt priority of CAN 2 module*/
#define EnableIntCAN2                    IEC3bits.C2IE = 1
#define DisableIntCAN2                   IEC3bits.C2IE = 0
#define SetPriorityIntCAN2(priority)     IPC14bits.C2IP = (priority)

void ConfigIntCAN2(unsigned int config1, unsigned char config2) __attribute__ ((section (".libperi")));

void CAN2SetTXRXMode(char buffno, unsigned int config) __attribute__ ((section (".libperi")));

void CAN2SetOperationModeNoWait(unsigned int config1,unsigned int config2) __attribute__ ((section (".libperi")));

void CAN2AbortAll(void) __attribute__ ((section (".libperi")));

void CAN2SetMask(unsigned char mask_no, unsigned int sid, unsigned long eid) __attribute__ ((section (".libperi")));

void CAN2SetFilter(unsigned char filter_no, unsigned int sid, unsigned long eid) __attribute__ ((section (".libperi")));

void CAN2SendMessage(unsigned char *data, unsigned char datalen, unsigned long txIdentifier,\
unsigned char ide, unsigned char remoteTransmit, unsigned int *dmaBaseAddress, unsigned char MsgFlag) __attribute__ ((section (".libperi")));

void CAN2ReceiveMessage (unsigned char * data, unsigned char  datalen,  
                         unsigned char *DMAptr) __attribute__ ((section (".libperi")));

char CAN2IsTXReady(char buffno) __attribute__ ((section (".libperi")));

char CAN2IsTXPassive(void) __attribute__ ((section (".libperi")));

unsigned short CAN2IsRXReady(char buffno) __attribute__ ((section (".libperi")));

char CAN2IsRXPassive(void) __attribute__ ((section (".libperi")));

char CAN2IsBusOff(void) __attribute__ ((section (".libperi")));

void CAN2Initialize(unsigned int config1, unsigned int config2) __attribute__ ((section (".libperi")));

unsigned char CAN2GetTXErrorCount(void) __attribute__ ((section (".libperi")));

unsigned char CAN2GetRXErrorCount(void) __attribute__ ((section (".libperi")));

void CAN2SetOperationMode(unsigned int config1,unsigned int config2) __attribute__ ((section (".libperi")));

void CAN2ClearRXFUL1(void) __attribute__ ((section (".libperi")));

void CAN2ClearRXFUL2(void) __attribute__ ((section (".libperi")));

void CAN2ClearRXOVF1(void) __attribute__ ((section (".libperi")));

void CAN2ClearRXOVF2(void) __attribute__ ((section (".libperi")));

void CAN2EnableFilter(char filter_no) __attribute__ ((section (".libperi")));

void CAN2FIFOCon(unsigned int fifo_val) __attribute__ ((section (".libperi")));

void CAN2SetBUFPNT1(unsigned int pointer_value) __attribute__ ((section (".libperi")));

void CAN2SetBUFPNT2(unsigned int pointer_value) __attribute__ ((section (".libperi")));

void CAN2SetBUFPNT3(unsigned int pointer_value) __attribute__ ((section (".libperi")));

void CAN2SetBUFPNT4(unsigned int pointer_value) __attribute__ ((section (".libperi")));

void CAN2SetMaskSource(unsigned int mask_val1, unsigned int mask_val2) __attribute__ ((section (".libperi")));

#endif

#endif
