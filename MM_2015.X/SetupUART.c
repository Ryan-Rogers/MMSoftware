#include <Generic.h>
#include <p33EP512MC806.h>
#include <uart.h>
#include <pps.h>

//#define DEBUG_UART


UINT16 SetupUART(void)
{
#ifdef DEBUG_UART
    UINT32 i;

    //PPSOutput(OUT_FN_PPS_REFCLKO,OUT_PIN_PPS_RP102);

    //REFOCONbits.ROON = 0;
    //REFOCONbits.ROSEL = 0;
    //REFOCONbits.RODIV = 0x0F;
    //REFOCONbits.ROON = 1;

#endif

    //PPSOutput(OUT_FN_PPS_U1TX,OUT_PIN_PPS_RP102);
    PPSOutput(OUT_FN_PPS_U1TX,OUT_PIN_PPS_RP102);

    OpenUART1(UART_EN &
            UART_IDLE_CON &
            UART_IrDA_DISABLE &
            UART_MODE_SIMPLEX &
            UART_UEN_00 &
            UART_EN_WAKE &
            UART_DIS_LOOPBACK &
            UART_DIS_ABAUD &
            UART_UXRX_IDLE_ONE &
            UART_BRGH_SIXTEEN &
            UART_NO_PAR_8BIT &
            UART_1STOPBIT
            ,
            UART_TX_ENABLE &
            UART_INT_RX_CHAR &
            UART_ADR_DETECT_DIS
            ,
            520
            );

    U1STAbits.TXINV = 0;

    ConfigIntUART1(UART_RX_INT_DIS & UART_RX_INT_PR5 & UART_TX_INT_DIS & UART_TX_INT_PR4);

#ifdef DEBUG_UART
#warning DEBUG_UART_ACTIVE
    while(1)
    {
        for(i = 0; i < 0x000FFFFF; i++);
            U1TXREG = 0x5A;
            LATBbits.LATB0 ^= 1;
    }

#endif

    return 0;
}




