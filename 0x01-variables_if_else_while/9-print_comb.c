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
		if (ch == '9')
			break;
		putchar(',');
		putchar(' ')
		ch++;
	}
	putchar('\n');
	return (0);
}
