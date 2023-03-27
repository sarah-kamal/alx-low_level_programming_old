#include<stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description:
 * This function takes two pointers to integers and swaps the values they point
 * to. It does not return anything. The original values of the integers are
 * modified in place.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
