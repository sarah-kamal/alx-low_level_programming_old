#include<stdio.h>

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
	i = i / 2 + 1;
	for (i = 0; i < n; i++)
	{
		if (i == n / 2 + 1)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
		
