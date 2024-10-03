#include<reg51.h>
sbit led = P2^0;
void delay();
void main()
{
	led = 1;
	delay();
	led = 0;
	delay();
}
void delay()
{
	int i;
	for(i=0;i<10000;i++);
}