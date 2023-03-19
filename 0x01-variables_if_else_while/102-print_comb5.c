#include<stdio.h>

/**
  * main - Entery point
  *
  * Return: Always 0
  *
  */

int main(void)
{
	int d1;
	int d2;
	

	d1 = 0;

	for ( ; d1 <= 98; d1++ )
	{
		for ( d2 = d1 + 1; d2 <= 99; d2++ )
		{
			putchar( ( d1 / 10) + 48);
			putchar( ( d1 % 10) + 48);
			putchar(' ');
			putchar( ( d2 / 10) + 48);
			putchar( ( d2 % 10) + 48);
		}
	}
	putchar('\n');
	return (0);
}
