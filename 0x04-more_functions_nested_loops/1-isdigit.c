#include<stdio.h>
#include"main.h"

/**
  * _isdigit-Returns if character is upper case or not
  *
  * Description: checks if a char is uppercase
  *
  * Return: 1 in uppercase ,  otherwise
  */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
