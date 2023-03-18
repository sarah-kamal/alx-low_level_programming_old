#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - Entery point
  *
  * Description : 'finding last digit of number'
  * Return: Always 0
  *
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m;

	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);

	return (0);
}
