#include"main.h"
/**
 *_strncpy - function that copies a string
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int s_len;
	int d_len;
	
	d_len = 0;
	s_len = 0;
	while (dest[d_len] != '\0')
	{
		d_len++;
	}
	while (src[s_len] != '\0')
	{
		s_len++;
	}
	if (n > s_len)
		n = s_len + 1;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[d_len + 1] = '\0';
	return (dest);
}
