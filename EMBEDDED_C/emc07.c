#include<reg51.h>

sbit SW = P3^3;
sbit LED = P1^5;

void delay(){
	unsigned int i,j;
	for(i=0;i<=250;i++){
		for(j=0;j<=250;j++){
		}
	}
}

int main(){
	
	LED = 0;
	
	while(1){
		
		if(SW==0){
			
			delay();
			LED = !LED;
		}
	}
}