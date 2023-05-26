
#include <stdio.h>
#include <stdint.h>


/*

 66  = 6*10^0 + 6*10^1

 379 =  9*10^0 + 7*10^1 + 3*10^2 

 12  =  C*16^0

*/

unsigned char PORTD = 0;

int val = 0;

void ledOn()
{
	printf("ledOn()\n");

	PORTD |= 1;

	if ((val > 0) && (val < 16))
	{
		printf("val = %d\n", val);
	}
}

void ledOff()
{
	printf("ledOff()\n");

	PORTD &= ~1;
}

void dealy(int sec)
{
	printf("dealy: %d sec\n", sec);
}

void setup()
{
	printf("setup()\n");
	ledOff();
}
int  cout = 0;

void loop()
{
	ledOn();
	dealy(1);
	ledOff();
	dealy(9);

	val++;
}







