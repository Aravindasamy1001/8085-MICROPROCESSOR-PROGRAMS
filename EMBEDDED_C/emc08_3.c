#include<reg52.h>

sbit SW = P3^3;
sbit led1 = P1^2;
sbit led2 = P1^6;

void main(){
	
	led1 = 1;
	led2 = 1;
	
	while(1){
		
	if(SW == 0){
		led1 = !led1;
		led2 = !led2;
	}
 }
}
