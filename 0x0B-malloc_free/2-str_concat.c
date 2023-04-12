#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *p;

	i = 0;
	j = 0;
	while (s1 && s1[i] != '\0')
		i++;
	while (s2 && s2[j] != '\0')
		j++;
	len1 = i;
	len2 = j;
	p = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (!p)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
