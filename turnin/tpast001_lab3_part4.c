/*	Author: tpast001
 *  	Partner(s) Name: N/A
 *	Lab Section: 023
 *	Assignment: Lab #3  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTC = 0x00;
	DDRC = 0xFF; PORTC = 0x00;

	unsigned char upperA = 0;
	unsigned char lowerA = 0;
	
    	while (1) {
		upperA = PINA & 0xF0;
		lowerA = PINA & 0x0F;

		PORTB = (upperA >> 4) & 0x0F;
		PORTC = (lowerA << 4) & 0xF0; 
	}
	
	return 0;
}
