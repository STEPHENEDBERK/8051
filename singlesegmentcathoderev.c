#include<reg51.h>
void delay();

int a[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X67};

void main()
{
	int x;
   for(x=9;x<10;x--)
	{
	P2=a[x];
	delay();
	}
	
}

void delay()
{
int i;
for(i=0;i<30000;i++);	
}
