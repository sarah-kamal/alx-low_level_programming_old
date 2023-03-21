#include<stdio.h>
#include "main.h"

/**
 *int _isalpha(int c)- checks if low
 * Description : checks if char is lower
 * @c (int)
 * Return : 1 (lower) , 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 97 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
