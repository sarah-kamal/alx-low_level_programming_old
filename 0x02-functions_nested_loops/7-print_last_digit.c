#include<stdio.h>
#include"main.h"

/*
 * print_last_digit - Prints the last digit of int 
 *
 * @n : integer to have the last digit extracted from
 * 
 * Return : the last digit
 *
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

