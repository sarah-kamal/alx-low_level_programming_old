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
		if (i >= (ciel(n / 2)))
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
