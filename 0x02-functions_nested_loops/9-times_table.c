#include<stdio.h>
#include"main.h"

/**
 * jack_bauer - Prints every minute of a 24-hour day in HH:MM format.
 *
 * Return: None.
 */
void times_table(void)
{
	int hour;
	int minute;

	hour = 0;
	minute = 0;

	for ( ; hour <= 9; hour++)
	{
		for ( ; minute <= 9; minute++)
		{
			_putchar(hour * minute + '0');
			if (minute != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
