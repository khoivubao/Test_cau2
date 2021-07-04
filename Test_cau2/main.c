#include <stdio.h>
#include <stdint.h>

void tachbit(uint16_t x)
{
	union S16bit
	{
		uint16_t f;
		uint8_t bit8[2];
	};

	union S16bit n = x;
	printf("8 bit cao: %x\r\n", n.bit8[0]);
	printf("8 bit thap: %x\r\n", n.bit8[1]);
}
void main()
{
	uint16_t n = 0x1234;
	tachbit(n);
}