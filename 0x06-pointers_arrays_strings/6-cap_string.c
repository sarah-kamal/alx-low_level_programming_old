#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char str[] = " \t\n,;.!?\"(){}";

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 13;j++)
		{
			if (s[i] == str[j])
			{
			if (s[i + 1] != '\0' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
