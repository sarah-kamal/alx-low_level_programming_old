#include<stdio.h>
#include"main.h"
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;
	int sum;

	sum = 0;
	for (u = 0; u < 1024; u++)
	{
		if (u % 3 == 0 || u % 5 == 0)
			sum += u;
	}
	putchar(u + '0');
}
