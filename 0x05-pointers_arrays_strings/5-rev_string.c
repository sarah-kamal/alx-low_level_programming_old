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
	int n;


	i = 0;
	temp = s;
	while (*temp != '\0')
	{
		temp++;
		i++;
	}
	n = i;
	for (i = 0; i < n/2; i++)
	{
		temp = s[i];
		s[i] = s[n -1 -i];
		s[n - i -1] = temp;
	}
}
	 
