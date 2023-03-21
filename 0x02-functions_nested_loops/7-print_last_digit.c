#include<stdio.h>
#include"main.h"

/**
 * print_last_digit - Prints the last digit of an integer to the console.
 *
 * @n: The integer to extract the last digit from.
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int n)
{
	int lastdig;

	lastdig = n % 10;

	if (lastdig < 0)
		lastdig *= -1;
	_putchar(lastdig + '0');
	return (lastdig);
}

