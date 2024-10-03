#include<reg51.h>
sbit sw1=P3^0;
sbit sw2=P3^1;
int i=0;
int a[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X67};
void delay();
void main()
{
while(1)
{
if(sw1==0)  //switch off
{
while(sw1==0);   //wait here untill switch state change
i++;  //variable increment
}

if(sw2==0)  //switch off
{
while(sw2==0);   //wait here untill switch state change
i--;  //variable increment
}

P2=a[i];
delay();

}
}

void delay()
{
	int k;
	for(k=0;k<10000;k++);
	
}
