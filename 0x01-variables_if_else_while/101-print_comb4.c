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
	int d3;

	d1 = 0;

	for ( ; d1 <= 7; )
	{
		for (d2 = d1 + 1; d2 <= 8; d2++)
		{
			for (d3 = d2 + 1; d3 <= 9 ; d3++)
			{
				putchar(d1 + 48);
				putchar(d2 + 48);
				putchar(d3 + 48);
				if (d1 == 7 && d2 == 8 && d3 == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
