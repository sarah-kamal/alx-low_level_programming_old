#include"main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;
	int found;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		found = 0;
		if (needle[j] != '\0' && haystack[i] == needle[j])
		{
			found = i;
			while (haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (haystack + found);
		}
	i++;
	}
	return (NULL);
}
