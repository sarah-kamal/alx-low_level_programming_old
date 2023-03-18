#include<stdio.h>

/**
  * main - Entery point
  *
  * Return: Always 0
  *
  */

int main(void)
{
	char ch;

	ch = 'z';

	for ( ; ch <= 'a'; )
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
