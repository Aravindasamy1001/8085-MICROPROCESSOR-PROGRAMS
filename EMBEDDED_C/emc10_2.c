#include<reg51.h>

void delay(){
	unsigned int i,j;
	
	for(i=0;i<200;i++){
		for(j=0;j<200;j++){
		}
	}
}

int main(){
	
	unsigned char led = 0x7F;
	
	while(1){
		
		P1 = led;
		delay();
		led = ((led >>1) | 0x80);
		
		if (led == 0xFE){
			
			led = 0x7F;
		}
	}
}