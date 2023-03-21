#include<stdio.h>
#include"main.h"

/**
 *
 print_alphabet_x10 - Enterypoint
 * Description: prints all lowercase  followed by a new line.
 *
 * Return : 0
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
	 	_putchar('\n');
		if (ch == 'z' && count <= 10)
		{
			ch = 'a';
			count++;
		}
	}

}
