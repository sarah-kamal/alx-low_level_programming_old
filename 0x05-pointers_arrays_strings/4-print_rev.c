#include<stdio.h>
#include"main.h"
void print_rev(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	while (i > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
