#include<stdio.h>
#include "main.h"
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

