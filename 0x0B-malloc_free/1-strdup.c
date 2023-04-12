#include"main.h"
/**
  *_strdup - returns str
  *@str: string
  *Return: array of char
  */
char *_strdup(char *str)
{
	int i;
	int len;
	char *p;

	i = 0;
	if (str)
	{
		while(str[i] != '\0')
			i++;
	}
	if (i == 0 || !str)
		return (NULL);
	p = (char *) malloc(sizeof(char)*i);
	if(!p)
		return (NULL);
	len = i;
	for (i = 0; i < len ;i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
