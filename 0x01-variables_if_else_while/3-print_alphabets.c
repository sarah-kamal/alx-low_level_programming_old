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

	ch = 'a';

	for ( ; ch <= 'z'; )
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';
	for( ; ch <= 'Z'; )
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
