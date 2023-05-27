#include "HAL/LEDMTRX/LEDMTRX_interface.h"
#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"

#include "MCAL/RCC/RCC_interface.h"
#include "MCAL/GPIO/GPIO_interface.h"
#include "MCAL/NVIC/NVIC_interface.h"
#include "MCAL/EXTI/EXTI_interface.h"
#include "MCAL/STK/STK_interface.h"
#include "HAL/LEDMTRX/LEDMTRX_interface.h"


void main(void)
{

	/***************************/
	/*  RCC Peripheral */
	/* Set System Clock */
	RCC_voidSetSystemClock();      // High Speed External
	/*enable clock over GPIOA */
	RCC_voidEnablePeripheralClock(RCC_AHB1,AHB1_GPIOAEN);   // GPIOA_Enable
	/*enable clock over GPIOA */
	RCC_voidEnablePeripheralClock(RCC_AHB1,AHB1_GPIOBEN);   // GPIOA_Enable
	/***************************/
	/*  SYSTICK Peripheral */
	STK_voidInit();

	/***************************/
	/*  GPIO Peripheral */


	/*  Led Matrix Peripheral */
	/* (0, 102, 102, 0, 126, 66, 36, 24) */
	u8 Local_u8PatternArray[8]= {0x00,0x66,0xff,0xff,0xff,0x7e,0x3c,0x18};
	LEDMTRX_voidInit();

	while(1)
	{

		LEDMTRX_voidDisplayPattern(Local_u8PatternArray);

	}

}
