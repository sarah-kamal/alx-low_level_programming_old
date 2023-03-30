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
	char *ptr1;
	int len1;


	i = 0;
	len1 = 0;
	ptr1 = src;
	while (*ptr1 != '\0')
	{
		ptr1++;
		len1++;
	}
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
                }
		if (len1 < n)
		{
			for ( ; i < n; i++)
				dest[i] = '\0';
		}
		dest[i] = '\0';
	return (dest);
}
