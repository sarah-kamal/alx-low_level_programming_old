#include"main.h"
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag;

	flag = 0;
	mask = 1UL << (sizeof(n) * 8 - 1);
	while (mask > 0 )
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
		mask >>= 1;
	}
	if (!flag)
		_putchar('0');
}

