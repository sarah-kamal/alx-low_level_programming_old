#include"main.h"
int _strlen_recursion(char *s);
int ispali(char *s, int lenght, int i);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	int i;
	int lenght;

	i = 0;
	if (*s == '\0')
	{
		return (1);
	}
	lenght = _strlen_recursion(s);
	return(ispali(s, lenght, i));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * ispali - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @lenght: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int ispali(char *s, int lenght, int i)
{
	if (lenght % 2 == 0 && i == lenght / 2)
		return (1);
	if (lenght % 2 != 0 && i == lenght / 2)
		return (1);
	if (*(s + i) == *(s + lenght - i))
		return (ispali(s, lenght, i + 1));
	return (0);
}
