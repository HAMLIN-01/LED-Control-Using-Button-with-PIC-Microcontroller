#include<pic.h>
#define _XTAL_FREQ 20000000
void main()
{
	TRISB=0x01;
	TRISC=0x00;
	while(1)
	{
		if(RB3==0)
        {
        PORTC=0xFF;
        }
	    else
        {
		PORTC=0x00;
        }
		}}