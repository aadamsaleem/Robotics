#include<avr/io.h>
#include<util/delay.h>

void main()
{
	DDRC=0b0000000;
	DDRB=0b11111111;

	int a=0,b=0;

	while(1)
	{
		a=PINC&0b0000001;
		b=PINC&0b0000010;

		if((a==0b0000001)&&(b==0b0000010))
		{
			PORTB=0b00001001;
		}

		else if((a==0b0000001)&&(b==0b0000000))
		{
			PORTB=0b00000110;
			_delay_ms(10000);
			PORTB=0b00001000;
			_delay_ms(10000);
		}
		else if((a==0b0000000)&&(b==0b0000010))
		{
			PORTB=0b00000110;
			_delay_ms(10000);
			PORTB=0b00000001;
			_delay_ms(10000);
		}
		else if((a==0b0000000)&&(b==0b0000000))
		{
			PORTB=0b00000000;
			_delay_ms(10000);
			PORTB=0b00001000;
			_delay_ms(10000);
		}

	}
}
