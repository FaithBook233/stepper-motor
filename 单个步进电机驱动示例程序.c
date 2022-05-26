#include<reg52.h>

//��������ĸ��˿�
sbit a = P1^0;
sbit b = P1^1;
sbit c = P1^2;
sbit d = P1^3;

void initABCD(){
 	a = 0;
	b = 0;
	c = 0;
	d = 0;
}

#define A2_ON {initABCD();a = 1;}
#define B2_ON {initABCD();b = 1;}
#define C2_ON {initABCD();c = 1;}
#define D2_ON {initABCD();d = 1;}

void delayUs(unsigned char d){		
 	while(--d);
}

void delayMs(unsigned char d){
	while(d--){
		delayUs(248);
		delayUs(248);
	}
}

void back(void){
		int d = 20;//Խ�󲽽����ת��Խ��������̫С
	 	A2_ON
		delayMs(d);
		B2_ON
		delayMs(d);
		C2_ON
		delayMs(d);
		D2_ON
		delayMs(d);
}

void go(void){
		int d = 40;	//Խ�󲽽����ת��Խ��������̫С
		
		D2_ON
		delayMs(d);
	 	C2_ON
		delayMs(d);
		B2_ON
		delayMs(d);
		A2_ON
		delayMs(d);
}





void  main(){
	while(1){
		//back();
		go();
	}
}