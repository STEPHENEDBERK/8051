#include<reg51.h>

void main()
{
TMOD=0X20;  //TIMER 1 
SCON=0X50;
TH1=0XFD;  ///9600 SET
TR1=1;   //TIMER RUN
SBUF='V';
while(TI==0); //WAIT HERE 
TI=0;

}

