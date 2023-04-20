#include"3-calc.h"
int main(int argc, char *argv[])
{
	int a;
	int b;
	int(*func) (int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(98);
	}
	if ((func == op_div || func == op_mod) && b  == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(a, b));
	return (func(a, b));
}
