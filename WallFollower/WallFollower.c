#include<avr/io.h>

void main()
{
	DDRC = 0b0000000; // or (0x00) in hex
	DDRB = 0b11111111; // or (0xff) in hex
	int a=0;
	while(1)
	{
		a=PINC&0b0000001;

		if(a==0b0000001)
		{
			PORTB=0b00001001;
		}
		else if(a==0b0000000)
		{
			PORTB=0b00000100;
		}

	}
}
