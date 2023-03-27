#include<stdio.h>

/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char *temp;

	i = 0;
	temp = s;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while(i > 0)
	{
		s--;
		*temp = *s;
		temp++;
		i--;
	}
	s = temp;
}
	 
