#include "variadic_functions.h"
#include<string.h>
/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (!s)
		{
			s = malloc(sizeof("nil") + 1);
			s[0] = 'n';
			s[1] = 'i';
			s[2] = 'l';
			s[3] = '\0';
		}
		if (i == n - 1)
			printf("%s\n", s);
		else
			if (separator)
				printf("%s%s", s, separator);
			else
				printf("%s", s);
	}
	va_end(args);
}
