#include<stdio.h>

/**
 *
 * print_alphabet
 * Description: prints all lowercase  followed by a new line.
 *
 * Return : void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
