#include"main.h"
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0)
	{
		if (n & mask)
			_putchar('0');
		else
			_putchar('1');
		mask >>= 1;
	}
}

