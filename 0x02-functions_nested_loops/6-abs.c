#include<stdio.h>
#include "main.h"

/**
 *int print_sign - checks if low
 * Description : checks if char is lower
 * @c (int)
 * Return : 1 (lower) , 0 otherwise
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		return (-1 * c);
	}
	else
	{
		return (0);
	}

}
