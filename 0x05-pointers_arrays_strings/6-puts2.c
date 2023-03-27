#include<stdio.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts2(char *str)
{
	int i;
	char *temp;
	int n;


	i = 0;
	temp = s;
	while (*s != '\0')
	{
		if (i % 2 == 0)
			_putchar(*temp);
		temp++;
		i++;
	}
	_putchar('\n');
}
	 
