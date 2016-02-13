#include<avr/io.h>
#include<util/delay.h>

void main()
{
	DDRC = 0b0000000; // or (0x00) in hex
	DDRB = 0b11111111; // or (0xff) in hex
	int l=0,r=0;
	while(1)
	{
		l=PINC&0b0000001;
		r=PINC&0b0000010;

		if((l==0b0000001)&&(r==0b0000010))
		{
			PORTB=0b00001001;
		}
		else if((l==0b0000000)&&(r==0b0000010))
		{
			PORTB=0b00000001;
		}	
		else if((l==0b0000001)&&(r==0b0000000))
		{
			PORTB=0b00001000;
		}	
		else if((l=0b0000000)&&(r=0b0000000))
		{
			PORTB=0b00000000;
		}
		else
		{
			PORTB=0b0000000;
		}


	}
}
