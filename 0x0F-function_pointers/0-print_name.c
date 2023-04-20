#include<stdio.h>
#include<string.h>
/**
 * print_name - a function that prints a name.
 * @name: the name given
 * @f: function of name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *v))
{
	if (name != NULL && f != NULL)
	f(name);
}
