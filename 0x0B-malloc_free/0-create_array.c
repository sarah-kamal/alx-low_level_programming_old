#include"main.h"
/**
  * create_array - created array
  *@size: size
  *@c: initialized val
  *Return: array
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;
	
	if (size <= 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
