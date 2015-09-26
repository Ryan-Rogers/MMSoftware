#include <Generic.h>
#include <p33exxxx.h>
#include <uart.h>
#include <pps.h>
#include    "ChipSetup.h"

//#define DEBUG_UART
//int BAUDRATE = 9600;
//long BRGVAL = 0; 

//void SetupUART(void)
//{
////#ifdef DEBUG_UART
//    UINT32 i;
//
//    //PPSOutput(OUT_FN_PPS_REFCLKO,OUT_PIN_PPS_RP102);
//
//    //REFOCONbits.ROON = 0;
//    //REFOCONbits.ROSEL = 0;
//    //REFOCONbits.RODIV = 0x0F;
//    //REFOCONbits.ROON = 1;
//
////#endif
//
//    PPSOutput(OUT_FN_PPS_U1TX,OUT_PIN_PPS_RP102);
//
//    OpenUART1(UART_EN &
//            UART_IDLE_CON &
//            UART_IrDA_DISABLE &
//            UART_MODE_SIMPLEX &
//            UART_UEN_00 &
//            UART_EN_WAKE &
//            UART_DIS_LOOPBACK &
//            UART_DIS_ABAUD &
//            UART_UXRX_IDLE_ONE &
//            UART_BRGH_SIXTEEN &
//            UART_NO_PAR_8BIT &
//            UART_1STOPBIT
//            ,
//            UART_TX_ENABLE &
//            UART_INT_RX_CHAR &
//            UART_ADR_DETECT_DIS
//            ,
//            520
//            );
//
//    U1STAbits.TXINV = 0;
//
//    ConfigIntUART1(UART_RX_INT_DIS & UART_RX_INT_PR5 & UART_TX_INT_DIS & UART_TX_INT_PR4);
//
//#ifdef DEBUG_UART
//#warning DEBUG_UART_ACTIVE
//    while(1)
//    {
//        for(i = 0; i < 0x000FFFFF; i++);
//            U1TXREG = 0x5A;
//            LATBbits.LATB0 ^= 1;
//    }
//
//#endif
//
//    return 0;
//}

//=================================================================
//*********************** UART CONFIGURATION *************************
//=================================================================


//int CONFIG_UART(void) //
//{
//    // Setup UART 1 mode
//    U1MODEbits.UARTEN = 0;          // Disable UART 1 for setup
//    U1MODEbits.USIDL = 0;           // Continue Operation in IDLE mode
//    U1MODEbits.IREN = 0;            // IrDA Encoder and Decoder Disabled ((If Enabled verify 16x BRG mode (BRGH=0)))
//    U1MODEbits.RTSMD = 1;           // UxRTS pin in simplex mode
//    U1MODEbits.UEN = 0b00;          // TX and RX enabled, CTS and RTS/BCLK controlled by port latches
//    U1MODEbits.WAKE = 0;            // No wake-up is enabled when in sleep mode
//    U1MODEbits.LPBACK = 0;          // Loopback Disabled
//    U1MODEbits.ABAUD = 0;           // Auto-Baud rate measurement disabled (We are setting the baud rate)
//    U1MODEbits.URXINV = 0;          // UxRX Idle state is '1'
//    U1MODEbits.BRGH = 0;            // BRG generates 16 clocks per bit period (16x baud clock, standard mode)
//    U1MODEbits.PDSEL = 0b00;        // Parity and Data Selection as 8-bit data, no parity
//    U1MODEbits.STSEL = 0;           // One Stop Bit
//
//    // Setup UART 1 Status bits ((Default states for interrupts even though we will disable interrupts))
//    U1STAbits.UTXISEL1 = 0;         // UTXISEL 0 and 1 , Interrupt after each transmitted character
//    U1STAbits.UTXISEL0 = 0;
//    U1STAbits.UTXINV = 0;           // UxTX Idle state is '1'
//    U1STAbits.UTXBRK = 0;           // Sync Break Transmission is disabled
//    U1STAbits.UTXEN = 1;            // UART1 Transmit Enable Bit UxTX pin controlled by UART
//    U1STAbits.URXISEL = 0b00;       // RX Interrupt when buffer full
//    U1STAbits.ADDEN = 0;            // Address Detect mode disabled
//    U1STAbits.OERR = 0;             // Clear Receive Buffer Overrun Bit
//
//    U1BRG = BRGVAL;                 // baud_rate = 9600 bps;
//    RPINR18bits.U1RXR = 98;        // assign U1RX to RP98  0b1100010
//    RPOR10bits.RP102R = 1;            // assign U1TX to RP102   RPnR<000001>
//
//    IFS0bits.U1TXIF = 0;            // Set the U1TX interupt flag to 0
//    IEC0bits.U1TXIE = 0;            // Disable the U1TX interupt
//    IPC3bits.U1TXIP = 5;            // Set the U1TX priority level to 5
//    U1MODEbits.UARTEN = 1;          // Enable UART 1 after setup
//    return (0);
//}

void SetupUART1(void){

    OpenUART1((
            UART_EN &                   //Enable UART Module
            UART_IDLE_CON &             //Work while idle
            UART_IrDA_DISABLE &         //Disable Infared decoder
            UART_MODE_SIMPLEX &         //UART Simplex mode (RTS pin)
            UART_UEN_00 &               //TX/RX pins configured all other latched
            UART_DIS_WAKE &             //Disable wake on Start bit
            UART_DIS_LOOPBACK &         //Disable loopback
            UART_DIS_ABAUD &            //Disable Auto Baud
            UART_UXRX_IDLE_ONE &        //Receive idle is 1
            UART_BRGH_SIXTEEN &         //16 clocks per bit period
            UART_NO_PAR_8BIT &          //No parity bit
            UART_1STOPBIT               //One stop bit
            ),
            (
            UART_INT_TX_LAST_CH &       //Interrupt when last character shifted out
            UART_IrDA_POL_INV_ZERO &    //IrDA encoded, UxTX Idel state is '0'
            UART_SYNC_BREAK_DISABLED &  //Sync break transmission disabled or completed
            UART_TX_ENABLE &            //Transmit enable
            UART_TX_BUF_NOT_FUL &       //Transmit buffer is not full
            UART_INT_RX_CHAR &          //Interrupt on every char received
            UART_ADR_DETECT_DIS &       //address detect disable
            UART_RX_OVERRUN_CLEAR       //Rx buffer Over run status bit clear
            ),
            (
            __BAUDUART1_ //Baud rate
            ));
    ConfigIntUART1(
                UART_RX_INT_EN &        //Receive interrupt enabled
                UART_RX_INT_PR1 &       //Priority RX interrupt 1
                UART_TX_INT_DIS &       //transmit interrupt disabled
                UART_TX_INT_PR2         //Priority TX interrupt 1
            );
    
    PPSOutput(OUT_FN_PPS_U1TX,OUT_PIN_PPS_RP102);
}


