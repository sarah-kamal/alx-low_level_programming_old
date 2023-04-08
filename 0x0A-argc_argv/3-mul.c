#include<stdio.h>
/**
  * main - multiplies 2 nums
  * @argc: num of args
  * @argv: names of args
  * Return: multiplied number
  */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
		printf("%d\n", argv[1] * argv[2]);
	return (0);
}
