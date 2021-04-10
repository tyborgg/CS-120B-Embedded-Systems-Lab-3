/*	Author: tpast001
 *  Partner(s) Name: N/A
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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char cnt = 0;
	//unsigned char num = 0;
	unsigned char tempA = 0;
	unsigned char tempB = 0;
	
    	while (1) {
		/*cnt = 0;
		tempA = PINA & 0x01;
		tempB = PINB & 0x01;
		num = 8;

		while(num != 0){
			if((tempA & 0x01) == 0x01){
				cnt++;
			}
			tempA = (PINA >> 1) & 0x01;
			num--;
		}

		num = 8;
		while(num != 0){
			if((tempB & 0x01) == 0x01){
				cnt++;
			}
			tempB = (PINB >> 1) & 0x01;
			num--;
		}*/
		cnt = 0;

		tempA = PINA & 0x01;
		if(tempA == 1){
			cnt++;
		}
		tempA = PINA & 0x02;
		if(tempA == 2){
			cnt++;
		}
		tempA = PINA & 0x04;
		if(tempA == 4){
			cnt++;
		}	
		tempA = PINA & 0x08;
		if(tempA == 8){
			cnt++;
		}
		tempA = PINA & 0x10;
		if(tempA == 16){
			cnt++;
		}
		tempA = PINA & 0x20;
		if(tempA == 32){
			cnt++;
		}
		tempA = PINA & 0x40;
		if(tempA == 64){
			cnt++;
		}	
		tempA = PINA & 0x80;
		if(tempA == 128){
			cnt++;
		}
				//NOW FOR PINB
		tempB = PINB & 0x01;
		if(tempB == 1){
			cnt++;
		}
		tempB = PINB & 0x02;
		if(tempB == 2){
			cnt++;
		}
		tempB = PINB & 0x04;
		if(tempB == 4){
			cnt++;
		}	
		tempB = PINB & 0x08;
		if(tempB == 8){
			cnt++;
		}
		tempB = PINB & 0x10;
		if(tempB == 16){
			cnt++;
		}
		tempB = PINB & 0x20;
		if(tempB == 32){
			cnt++;
		}
		tempB = PINB & 0x40;
		if(tempB == 64){
			cnt++;
		}	
		tempB = PINB & 0x80;
		if(tempB == 128){
			cnt++;
		}
			
		PORTC = cnt;
    	}
	
	return 0;
}
