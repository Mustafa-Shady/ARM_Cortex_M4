#ifndef MCAL_GPIO_GPIO_INTERFACE_H_
#define MCAL_GPIO_GPIO_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"
#include "GPIO_private.h"

typedef enum {
    GPIO_PORTA,
    GPIO_PORTB,
    GPIO_PORTC
} GPIO_Port_Type;

typedef enum {
    GPIO_OUTPUT_LOW,
    GPIO_OUTPUT_HIGH
} GPIO_Pin_Level_Type;

typedef enum {
    GPIO_LOW_SPEED,
    GPIO_MED_SPEED,
    GPIO_HIGH_SPEED,
    GPIO_VERY_HIGH_SPEED
} GPIO_Speed_Type;

typedef enum {
   GPIO_PUSH_PULL,
   GPIO_OPEN_DRAIN
} GPIO_Mode_Type;

typedef enum {
    GPIO_PIN0,
    GPIO_PIN1,
    GPIO_PIN2,
    GPIO_PIN3,
    GPIO_PIN4,
    GPIO_PIN5,
    GPIO_PIN6,
    GPIO_PIN7,
    GPIO_PIN8,
    GPIO_PIN9,
    GPIO_PIN10,
    GPIO_PIN11,
    GPIO_PIN12,
    GPIO_PIN13,
    GPIO_PIN14,
    GPIO_PIN15
} GPIO_Pin_Type;

/**
 * @brief Initializes a GPIO pin as an output pin with the specified mode and speed.
 * 
 * @param port The GPIO port to which the pin belongs (e.g., GPIO_PORTA, GPIO_PORTB, GPIO_PORTC).
 * @param pin The pin number to be initialized (e.g., GPIO_PIN0, GPIO_PIN1, ... , GPIO_PIN15).
 * @param mode The mode to be set for the pin (e.g., GPIO_PUSH_PULL for push-pull output mode).
 * @param speed The speed to be set for the pin (e.g., GPIO_LOW_SPEED for low output speed).
 */
void GPIO_voidInitOutputPin(GPIO_Port_Type port, GPIO_Pin_Type pin, GPIO_Mode_Type mode, GPIO_Speed_Type speed);

/**
 * @brief Initializes a GPIO pin as an input pin with the specified mode.
 * 
 * @param port The GPIO port to which the pin belongs (e.g., GPIO_PORTA, GPIO_PORTB, GPIO_PORTC).
 * @param pin The pin number to be initialized (e.g., GPIO_PIN0, GPIO_PIN1, ... , GPIO_PIN15).
 * @param mode The mode to be set for the pin (e.g., GPIO_MODE_INPUT_PULLUP for input mode with pull-up resistor).
 */
void GPIO_voidInitInputPin(GPIO_Port_Type port, GPIO_Pin_Type pin, GPIO_Mode_Type mode);

/**
 * @brief Sets the output value of a GPIO pin.
 * 
 * @param port The GPIO port to which the pin belongs (e.g., GPIO_PORTA, GPIO_PORTB, GPIO_PORTC).
 * @param pin The pin number to be set (e.g., GPIO_PIN0, GPIO_PIN1, ... , GPIO_PIN15).
 * @param value The value to be set for the pin (GPIO_OUTPUT_LOW or GPIO_OUTPUT_HIGH).
 */
void GPIO_voidSetOutPinValue(GPIO_Port_Type port, GPIO_Pin_Type pin, GPIO_Pin_Level_Type value);

/**
 * @brief Gets the input value of a GPIO pin.
 * 
 * @param port The GPIO port to which the pin belongs (e.g., GPIO_PORTA, GPIO_PORTB, GPIO_PORTC).
 * @param pin The pin number to read (e.g., GPIO_PIN0, GPIO_PIN1, ... , GPIO_PIN15).
 * 
 * @return The value of the pin (GPIO_OUTPUT_LOW or GPIO_OUTPUT_HIGH).
 */
GPIO_Pin_Level_Type GPIO_voidGetInputPinValue(GPIO_Port_Type port, GPIO_Pin_Type pin);

void GPIO_voidSetOutPinValueFast(GPIO_Port_Type port, GPIO_Pin_Type pin, GPIO_Pin_Level_Type value);

void GPIO_voidInitOutputPort(GPIO_Port_Type port , u16 Value);
void GPIO_voidSetOutPortValue(GPIO_Port_Type port , u16 Value);


#endif /* MCAL_GPIO_GPIO_INTERFACE_H_ */