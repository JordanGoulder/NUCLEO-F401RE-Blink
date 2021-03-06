/**
  ******************************************************************************
  * @file   main.c
  * @author Jordan Goulder
  * @brief  Blink LED2 on the NUCLEO board.
  ******************************************************************************
*/

#include "stm32f4xx.h"
#include "stm32f4xx_nucleo.h"

int main(void)
{
    // Initialize the Hardware Abstraction Library
    HAL_Init();

    // Initialize LED2 on the NUCLEO board
    BSP_LED_Init(LED2);

    // Loop forever blinking LED2
    for(;;)
    {
        // Toggle LED2
        BSP_LED_Toggle(LED2);

        // Wait for 500 milliseconds
        HAL_Delay(500);
    }
}
