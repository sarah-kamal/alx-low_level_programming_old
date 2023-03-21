#include<stdio.h>
#include"main.h"

/**
 * print_alphabet_x10 - AW:wq
 *
 * Description: prints all lowercase  followed by a new line.
 *
 * Return : void
 *
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