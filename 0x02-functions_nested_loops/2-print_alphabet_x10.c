#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int count;

	count = 1;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		if (ch == 'z' && count < 10)
		{
			ch = '`';
			count++;
		}
		_putchar('\n');

	}

}
