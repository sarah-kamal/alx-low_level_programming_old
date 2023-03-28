#include "main.h"
#include<stdio.h>
#include<math.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int isneg;
	int cont;
	int numfound;
	int index;
	int count;
	int c;
	int number;

	c = 0;
	isneg = 0;
	numfound = 0;
	cont = 0;
	count = 0;
	while (s[c])
	{
		if (s[c] == '-')
			isneg = 1;
		else if (s[c] == '+')
			isneg = 0;
		if (s[c] > 47 && s[c] < 58)
		{
			if (! numfound)
			{
				numfound = 1;
				cont = 1;
				index = c;
			}
			else if (cont)
				count++;
		}
		else
		{
			cont = 0;
		}
		c++;
	}
	if (numfound)
	{
		for ( ; index < index + count; index++)
			number += s[index] * pow(10,count - 1);
		if (isneg)
			number *= -1;
	}
	return (number);
}






