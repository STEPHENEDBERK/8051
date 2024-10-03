#include<reg51.h>
sbit led=P2^0;
void delay();

void main()
{
led=1;
delay();  //50 ms
led=0;
delay();  //50 ms
}

void delay()
{
TMOD=0X10;  //TIMER 1 
TR1=1;
TH1=0X4B;  //MSB
TL1=0XFD;  //LSB
while(TF1==0);  //when 50 ms reached move to next line
TF1=0;
TR1=0;
}
