#include<stdio.h>
/**
  * main - adds all positive nums
  * @argc: num of args 
  * @argv: args names
  * Return: 0
  */
int main(int argc, char * argv[])
{
	int i;
	int j;
	int k;
	int pow;
	int temp;
	int sum;
	int curr;

	sum = 0;
	curr = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		if (argv[i][j] == '-')
			continue;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("ERROR\n");
				return (1);
			}
			j++;
		}
		j--;
		k = 0;
		curr = 0;
		while (argv[i][k] != '\0')
		{
			pow = 1;
			temp = j;
			while (temp != 0)
			{
				pow *= 10;
				temp--;
			}
			curr += (argv[i][k] - 48) * pow;
			j--;
			k++;
		}
		sum += curr;
	}
	printf("%d\n", sum);
	return (0);
}



