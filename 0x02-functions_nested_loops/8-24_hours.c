#include<stdio.h>
#include"main.h"

/**
 * jack_bauer - Prints every minute of a 24-hour day in HH:MM format.
 *
 * Return: None.
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	hour = 0;
	minute = 0;

	for ( ; hour < 24; hour++)
	{
		for ( ; minute < 60; minute++)
		{
			if (hour < 10)
				_putchar('0');
			_putchar(hour + '0');
			_putchar(':');
			if (minute < 10)
				_putchar('0');
			_putchar(minute + '0');
			_putchar('\n');
		}
	}
}
