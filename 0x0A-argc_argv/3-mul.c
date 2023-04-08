#include<stdio.h>
/**
  * main - multiplies 2 nums
  * @argc: num of args
  * @argv: names of args
  * Return: multiplied number
  */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		mul = (argv[1][0] - 48) * (argv[2][0] - 48);
		printf("%d\n", mul);
	}
	return (0);
}
