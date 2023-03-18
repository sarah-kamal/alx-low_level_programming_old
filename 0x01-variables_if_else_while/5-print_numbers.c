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

	ch = '0';

	for ( ; ch <= '9'; )
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
