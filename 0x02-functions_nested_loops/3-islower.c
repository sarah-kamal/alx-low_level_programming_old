#include<stdio.h>
#include "main.h"

/**
 *_islower - checks if low
 * Description : checks if char is lower
 * Return : bool
 */
int _islower(int c)
{
	if (c > 62 && c < 123)
		return (1);
	else
		return (0);
}
