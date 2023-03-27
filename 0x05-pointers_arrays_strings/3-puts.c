#include<stdio.h>
#include"_putchar.c"

/**
 * _puts - Prints a string to stdout
 * @str: Pointer to string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

