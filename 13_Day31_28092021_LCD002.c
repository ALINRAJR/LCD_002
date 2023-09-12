/*
===============================================================================
 Name        : 13_Day31_28092021_LCD002.c

 Description : LCD 4 bit mode



 Layered Architecture used for this project
 ************************************
 Application layer-13_Day31_28092021_LCD002.c
 ************************************
 Board layer - lcd.c/.h, configboard.h
 ************************************
 Low level drivers or chip level - gpio.c/.h
 ************************************
 Hardware
 ************************************

===============================================================================
*/

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
/* Private includes ----------------------------------------------------------*/
#include "lcd.h"

/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/**
  * @brief  Initialize all the hardware connected
  * @retval none
  */
void vAppHardwareInit(void)
{

	vLCDInitialize();
	vLCDInitialCommands();

}

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* MCU Configuration--------------------------------------------------------*/

  /* Initialize all configured peripherals */
   vAppHardwareInit();

   vLCDWriteData(0x00);/*For displaying the custom character starting from 0x40 CGRAM location */
   vLCDWriteData(0x03);/*For displaying the custom character starting from 0x58 CGRAM location */

   vLCDWriteData('B');
   vLCDGotoxy(LINE0,COL5);
   vLCDWriteString("TRANSIOT");
   vLCDGotoxy(LINE1,COL0);
   vLCDWriteNum(1234,HEXADECIMAL);
   vLCDGotoxy(LINE1,COL6);
   vLCDWriteNum(1234,OCTAL);

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)  // for(;;)
  {


  }
  /* End of Application entry point */
}




