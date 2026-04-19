#include<reg52.h>

//LCD PINS

sbit RS = P3^0;
sbit RW = P3^1;
sbit EN = P3^2;

#define lcd P2

//LED PINS

sbit RED = P1^0;
sbit GREEN = P1^1;
sbit YELLOW = P1^2;

void delay(){
	int i,j;
	for(i=0;i<500;i++){
		for(j=0;j<700;j++){
		}
	}
}
void delay1(){
	int i,j;
	for(i=0;i<500;i++){
		for(j=0;j<500;j++){
		}
	}
}

void cmd(unsigned char c){
	RS = 0;
	RW = 0;
	lcd = c;
	EN = 1;
	delay();
	EN = 0;
}

void datt(unsigned char d){
	RS = 1;
	RW = 0;
	lcd = d;
	EN = 1;
	delay();
	EN =0;
}

void lcd_data(char *s){
	while(*s){
		datt(*s++);
	}
}
void main(){
	
	cmd(0x38);
	cmd(0x0C);
	cmd(0x06);
	cmd(0x01);
	cmd(0x80);
	
	while(1){
		int z=1;
		for(z=1;z<=3;z++){
			
		if(z==1){
			lcd_data("Signal RED");
			RED = 0;
			GREEN = 1;
			YELLOW =1;
			delay();
		}
		else if(z==2){
			lcd_data("Signal GREEN");
			RED = 1;
			GREEN = 0;
			YELLOW =1;
			delay();
		}
		else if(z==3){
			lcd_data("Signal YELLOW");
			RED = 1;
			GREEN = 1;
			YELLOW =0;
			delay1();
			
		}
		cmd(0x80);
	}
}
	}