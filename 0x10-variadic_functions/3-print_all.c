#include "variadic_functions.h"
#include<string.h>
/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int n, i;
	va_list(args);
	int flag;

	i = 0;
	va_start(args, format);
	n = strlen(format);
	while (format && format[i] != '\0')
	{
		flag = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			flag = 1;
			break;
		case 's':
			 printf("%s", va_arg(args, char *));
			 flag = 1;
			 break;
		case 'f':
			 printf("%f", va_arg(args, double));
			 flag = 1;
			 break;
		default:
			 flag = 0;
			 break;
		}
		if (flag && i != n - 1)
			printf (", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
