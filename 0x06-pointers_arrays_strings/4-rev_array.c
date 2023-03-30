#include "main.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	if (n % 2 == 0)
	{
		for (i = 0; i < n / 2; i++)
		{
			temp = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = temp;
		}
	}
	else
	{
		for (i = 0; i < n / 2 + 1; i++)
		{
			temp = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = temp;
		}
	}
}
