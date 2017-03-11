/*******************************************************************************
*		Setup for M_Dongle 
*******************************************************************************/
#include "init.h"
#include "..\_Driver\BoardConfig.h"
#include "..\_Driver\Driver_M_Dongle.h"

void Board_Init(void)
{   
    
    //Switch LED GPIO pins to output mode
    DrvGPIO_PortOpen(PORT_LEDS, LED0, E_IO_OUTPUT);
    DrvGPIO_PortOpen(PORT_LEDS, LED1, E_IO_OUTPUT);
    DrvGPIO_PortOpen(PORT_LEDS, LED2, E_IO_OUTPUT);
    DrvGPIO_PortOpen(PORT_LEDS, LED3, E_IO_OUTPUT);
    DrvGPIO_PortOpen(PORT_LEDS, LED4, E_IO_OUTPUT);
    DrvGPIO_PortOpen(PORT_LEDS, LED5, E_IO_OUTPUT);
    DrvGPIO_PortOpen(PORT_LEDS, LED6, E_IO_OUTPUT);
    DrvGPIO_PortOpen(PORT_LEDS, LED7, E_IO_OUTPUT);
    GPIOE->DOUT_BYTE1 = 0xFF; //switch all off (active low)
   
    //Switch Joystick pins to input mode
    DrvGPIO_PortOpen(PORT_JOY, JOY_UP, E_IO_INPUT);
    DrvGPIO_PortOpen(PORT_JOY, JOY_DOWN, E_IO_INPUT);
    DrvGPIO_PortOpen(PORT_JOY, JOY_L, E_IO_INPUT);
    DrvGPIO_PortOpen(PORT_JOY, JOY_R, E_IO_INPUT);
    DrvGPIO_PortOpen(PORT_JOY, JOY_TASTER, E_IO_INPUT);
    
}
