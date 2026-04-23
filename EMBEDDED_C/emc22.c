#include<reg52.h>

#define led P1

void timer_isr(void) interrupt 1{
	
	static unsigned int count = 0;
	count++;
	if(count >=500){
	led = ~led;
  count = 0;
  }
	TH0 = 0xFC;
	TL0 = 0X66;
}

void main(){
	
	led = 0x00;
	
	TMOD = 1; //timer 0 mode 1.
	
	TH0 = 0xFC;
	TL0 = 0x66;
	
	EA = 1;
	ET0 = 1;
	TR0 = 1;
	
	while(1){
	}
}
