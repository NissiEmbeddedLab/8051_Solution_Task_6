/* 	Author 		: 	L.Boaz
		Email id 	: 	laxsam89@gmail.com
		phone 		:		+91 95972 91816
		hackster	:		https://www.hackster.io/boaz */
		
#include<reg51.h>
void Dtime(unsigned int c);
void main(void)
	
{
	int x;
while(1)
{
	for(x=0;x<5;x++)		// To obtain 72deg rotation it should run 5 times so x=5
	{
	// Anticlock wise module			For one seq it rotates 14.4 deg
	P1 = 0x09;		 			// A1 = 1, A2 = 0, B1 = 0, B2 = 1			3.6	deg
	Dtime(200);
	P1 = 0x05;		 			// A1 = 0, A2 = 1, B1 = 0, B2 = 1			7.2 deg
	Dtime(200);
	P1 = 0x06;		 			// A1 = 0, A2 = 1, B1 = 1, B2 = 0			10.8 deg
	Dtime(200);
	P1 = 0x0A;		 			// A1 = 1, A2 = 0, B1 = 1, B2 = 0			14.4 deg
	Dtime(200);  
	}
	for(x=0;x<10;x++)		// To obtain 144deg rotation it should run 10 times so x=10
	{
	// clock wise module simply reverse the order.
	P1 = 0x0A;
	Dtime(200);
	P1 = 0x06;
	Dtime(200);
	P1 = 0x05;
	Dtime(200);
	P1 = 0x09;
	Dtime(200);
	}
}
}
void Dtime(unsigned int c)
{
	unsigned int a,b ;
		for(a=0;a<c;a++)
			for(b=0;b<250;b++);
}