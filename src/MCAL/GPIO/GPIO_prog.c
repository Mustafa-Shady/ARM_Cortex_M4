/*
 * GPIO_prog.c
 *
 *  Created on: May 11, 2023
 *      Author: 20115
 */

#include "GPIO_interface.h"
#include "..\..\LIB\BIT_MATH.h"



void GPIO_voidInitOutoutPin(GPIO_Port_Type port, GPIO_Pin_Type pin, GPIO_Mode_Type mode, GPIO_Speed_Type speed)
{
    switch (port)
    {
    case GPIO_PORTA:
        /*Set the direction to be Output*/
        /*bit masking*/
        GPIOA->MODER &= ~((0b11<<(pin*2)));
        GPIOA->MODER |= ~((0b01<<(pin*2)));
        
        /*Set the speed to be Output*/
        /*bit masking*/
        GPIOA->OSPEEDR &= ~((0b11<<(pin*2)));
        GPIOA->OSPEEDR |= ~((speed<<(pin*2)));

        /*Set type of output pin*/
        WRT_BIT(GPIOA->OTYPER, pin , mode);
        

        
        break;
    
    case GPIO_PORTB:
        
        break;
    
    case GPIO_PORTC:
        
        break;
    
    default:
        break;
    }
}

void GPIO_voidInitInputPin(GPIO_Port_Type port, GPIO_Pin_Type pin, GPIO_Mode_Type mode)
{
      switch (port)
    {
    case GPIO_PORTA: 
       

        break;
    
    case GPIO_PORTB:
        
        break;
    
    case GPIO_PORTC:
        
        break;
    
    default:
        break;
    }
}

void GPIO_voidSetOutPinValue(GPIO_Port_Type port, GPIO_Pin_Type pin, GPIO_Pin_Level_Type value)
{
      switch (port)
    {
    case GPIO_PORTA:
       
        WRT_BIT(GPIOA->ODR,pin,value);

        break;
    
    case GPIO_PORTB:

        WRT_BIT(GPIOB->ODR,pin,value);

        break;
    
    case GPIO_PORTC:

        WRT_BIT(GPIOC->ODR,pin,value);

        break;
    
    default:
        break;
    }
}

GPIO_Pin_Level_Type GPIO_voidGetInputPinValue(GPIO_Port_Type port, GPIO_Pin_Type pin)
{
	return 0;
}


