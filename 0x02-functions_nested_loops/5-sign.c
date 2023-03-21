#include<stdio.h>
#include "main.h"

/**
 *int print_sign - checks if low
 * Description : checks if char is lower
 * @c (int)
 * Return : 1 (lower) , 0 otherwise
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}