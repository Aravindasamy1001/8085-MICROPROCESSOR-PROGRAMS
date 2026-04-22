#include<reg52.h>

#define led P1

unsigned int state=0; 
unsigned int count=0;

void timer(void) interrupt 3{
TH1 = 0xDC;
TL1 = 0x00;
	count++;
	if(count>=50){
		if(state == 0){
		led = 0x7E;
			state = 1;
		}
		else{
			led = 0xE7;
			state = 0;
		}
		count = 0;
	
}
	}

void main(){
	
led = 0xE7;

TMOD = 0x10;
	
TH1 = 0xDC;
TL1 = 0x00;
	
EA  = 1;
ET1 = 1;
TR1 = 1;
	
	while(1){
	} 

}
