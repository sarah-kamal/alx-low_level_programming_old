#include"main.h"
int sqrtr(int, int);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n <  0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	return (sqrtr(n, 1));
}
/**
 * sqrtr - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrtr(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return(sqrtr(n, i + 1));
}
