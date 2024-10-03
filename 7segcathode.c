#include<reg51.h>
void delay();
int main()
{
	int i;
int a[]={0X3F,0X06,0X5B,0X4F,0X66,0X6C,0X7D,0X07,0X7F,0X6F};
for(i=0;i<10;i++)
{
	P2 = a[i];
	delay();
}
}
void delay()
{
	int i;
	for(i=0;i<10000;i++);
}