#include"main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size;
	int i, num;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);
	num = min;
	for (i = 0; i < size; i++)
	{
		if (num <= max)
		{
			ptr[i] = num;
			num++;
		}
	}
	return (ptr);
}
