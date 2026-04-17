#include<reg51.h>

sbit SW1 = P2^1;
sbit SW2 = P2^2;
sbit led1=P1^1;
sbit led2=P1^2;

int main(){
	
	while(1){
		
		if(SW1==0){
			led1=0;
		}
		else
			led1=1;
	if(SW2==0){
		led2=0;
	}
	else
		led2=1;
}
	}

