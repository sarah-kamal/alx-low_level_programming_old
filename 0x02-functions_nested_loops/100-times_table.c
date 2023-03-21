#include<stdio.h>
#include"main.h"

/**
 * jack_bauer - Prints every minute of a 24-hour day in HH:MM format.
 *
 * Return: None.
 */
void print_times_table(int n)
{
	int hour;
	int minute;
	int mult;

	hour = 0;
	minute = 0;

	for ( ; hour <= n; hour++)
	{
		for (minute = 0 ; minute <= 9; minute++)
		{
			mult = hour * minute;
			printf("%d", mult);
			if (minute != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		_putchar('\n');
	}
}
