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
	int d4;

	d1 = 0;

	for ( ; d1 <= 7; )
	{
		for (d2 = 0; d2 <= 8; d2++)
		{
			for (d3 = 0; d3 <= 9 ; d3++)
			{
				for (d4 = 1; d4 <= 9 ; d4++)
				{
					putchar(d1 + 48);
					putchar(d2 + 48);
					putchar(' ');
					putchar(d3 + 48);
					putchar(d4 + 48);
					if (d1 == 9 && d2 == 8)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
