#include"main.h"
#include"_putchar.c"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	for (int i = 0; i <= n; i++)
		_putchar('_');
	else
	{
	_putchar('\n');
	return;
	}
	_putchar('\n');
}
