// Thank you to cnlohr for making ch32fun!!!

#include "ch32fun.h"
#include <stdio.h>

// Name GPIO Pins
#define PIN_1 PA0

int main()
{
	SystemInit(); // Init System

	funGpioInitAll(); // Enable GPIOs
	
	funPinMode(PIN_1, GPIO_Speed_10MHz | GPIO_CNF_OUT_PP); // Set PIN_1 to output

	while(1)
	{
		funDigitalWrite(PIN_1, FUN_HIGH); // Turn on PIN_1
		Delay_Ms(250);
		funDigitalWrite(PIN_1, FUN_LOW);  // Turn off PIN_1
		Delay_Ms(250);
	}
}
