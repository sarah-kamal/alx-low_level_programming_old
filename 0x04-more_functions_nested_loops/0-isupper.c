#include<stdio.h>
#include"main.h"

/**
  * int _isupper -returns if character is upper case or not
  *
  * Description: checks if a char is uppercase
  *
  * Return: 1 in uppercase ,  otherwise
  */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
