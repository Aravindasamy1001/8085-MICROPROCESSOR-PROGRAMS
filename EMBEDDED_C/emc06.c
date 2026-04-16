#include<reg51.h>

sbit SW = P3^3;


int main(){
	
	while(1){
		
		if(SW==0){
			P1 = 0x00;
		}
		else{
			P1 = 0xFF;
	}
 }
}
