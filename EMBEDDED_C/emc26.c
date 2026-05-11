#include<reg52.h>

#define led P1

void delay(){
	
	int i,j;
	
	for(i=0;i<250;i++){
		for(j=0;j<250;j++){
		}
	}
}

int main(){
	
	while(1){
		
	led = 0x00;
	
	delay();
	
	led = 0x55;
	
	delay();
		
	}
}