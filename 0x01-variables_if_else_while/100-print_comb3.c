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

	for ( ; d1 <= 8; )
	{
		putchar(d1 + 48);
		for (d2 = d1 + 1; d2 <= 9; d2++)
			putchar(d2 + 48);
		if (d1 == 8 && d2 == 9)
			break;
		putchar(',');
		putchar(' ');
		d1++;
	}
	putchar('\n');
	return (0);
}
