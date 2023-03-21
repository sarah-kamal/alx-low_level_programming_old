#include<stdio.h>
#include"main.h"
/**
 *
 * main - Enterypoint
 * Description: prints all lowercase  followed by a new line.
 *
 * Return : 0
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
