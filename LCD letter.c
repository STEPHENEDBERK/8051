#include<reg51.h>
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
void delay();
void cmd(int x);
void dat(char y);


void main()
{
while(1)
{
cmd(0x0E);   //LCD ON
cmd(0x38);  //2 LINE ACTIVATED
cmd(0xC0);	//2 ND LINE
dat('v');
dat('i');
dat('g');
dat('n');
dat('e');
dat('s');
dat('h');
cmd(0x01);
}

}

void cmd(int x)
{
P2=x;  //
rs=0;    //cmd-0, data-1
rw=0;
en=1;
delay();
en=0;
}

void dat(char y)
{
P2=y;  //VIGNESH
rs=1;    //cmd-0, data-1
rw=0;
en=1;
delay();
en=0;
delay();
}

void delay()
{
int i;
for(i=0;i<10000;i++);
}
