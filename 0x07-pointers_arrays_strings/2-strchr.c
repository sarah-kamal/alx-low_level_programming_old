#include"main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;
	int found;

	i = 0;
	found = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
			found = 1;
		}
		i++;
	}
	if (! found)
		return (NULL);
}

