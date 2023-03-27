#include <math.h>
#include<stdio.h>
#include"main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int i;
	char *temp;
	int n;

	temp = str;
	i = 0;

	while (*temp != '\0')
	{
		i++;
		temp++;
	}

	n = i;
	for (i = 0; i < n; i++)
	{
		if (n % 2 == 0)
		{
			if (i >= (ceil(n / 2)))
				_putchar(*str);
		}
		else
		{
			 if (i >= (n / 2 + 1))
				 _putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
