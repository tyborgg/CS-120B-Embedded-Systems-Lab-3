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
	DDRD = 0x00; PORTA = 0xFF;
	DDRB = 0xFE; PORTC = 0x00;

	unsigned int total = 0;
	unsigned char sigBitD = 0;
	unsigned char tempB = 0;
	unsigned char tempD = 0;
	unsigned char outB = 0;
	
    	while (1) {
		tempB = PINB & 0x01;
		sigBitD = PIND & 0x80;
		tempD = (PIND << 1);
		total = tempD;

		if(tempB == 0x01){
			total++;
		}
		if(sigBitD == 128){
			total += 256;
		}

		if(total >= 70){
			outB = 0x02;
		}
		else if(total > 5 && total < 70){
			outB = 0x04;
		}
		else{
			outB = 0x00;
		}

		PORTB = outB;
	}
	
	return 0;
}
