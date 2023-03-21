#include<stdio.h>
#include"main.h"

void print_to_98(int n)
{
	for ( ; n <= 98; n++)
	{
		putchar(n + '0');
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
