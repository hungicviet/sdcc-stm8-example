/*********************************************
* @Projects: sdcc-examples-stm8
* @Author: Steven
* @Date:   2016-03-29 14:06:05
* @Last Modified by:   hungicviet
* @Last Modified time: 2016-03-29 16:53:13
**********************************************/

//#include "stm8s.h"
#include "lib/inc/stm8s.h"
#include "main.h"

int main() {
	int d;
	// Configure pins
	OUT_PORT->DDR |= OUT_A_PIN + OUT_B_PIN;
	OUT_PORT->CR1 |= OUT_A_PIN + OUT_B_PIN;
	OUT_PORT->ODR |= OUT_A_PIN;

	CLK->CKDIVR &= ~0x18;
	CLK->CKDIVR |= 0x00;
	// Loop

	turn_off(OUT_A_PIN);
	turn_off(OUT_B_PIN);
	while(1);

	/*do {
		GPIOD->ODR ^= (OUT_A_PIN + OUT_B_PIN);
		for(d = 0; d < 29000; d++) { }
	} while(1);*/
}
