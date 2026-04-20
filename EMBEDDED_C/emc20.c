#include<reg52.h>

#define led P1
volatile bit flag = 0;

void delay(){
	int i,j;
	for(i=0;i<200;i++){
		for(j=0;j<300;j++){
		}
	}
}

void interruptt(void) interrupt 2{
	
	flag = !flag;
}

void main(){
	
	  EA = 1;   // GLOBLE
		EX1 = 1; // INTERRUPT 2
		IT1 = 1;// EAGE TRIGGER
	
	while(1){
  
		if(flag){
			led = 0x00;
		}
		else{
		led = 0x00;
		delay();
		led = 0xFF;
		delay();
		}
	}
}
		
