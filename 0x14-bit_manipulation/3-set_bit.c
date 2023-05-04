#include"main.h"
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	if (n + index)
	{
	mask = 1UL <<( sizeof(unsigned long int) * 8 - 1);
	mask >>= index;

	*n = *n | index;
	return (1);
	}
	else
		return (-1);
}
