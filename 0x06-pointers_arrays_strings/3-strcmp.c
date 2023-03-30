#include"main.h"
/**
 * _strcmp - compare 2 string
 * @s1:string
 * @s2:strmp
 * Return:int
 * Bwave/ Bright
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
