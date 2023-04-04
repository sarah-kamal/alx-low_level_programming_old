#include"main.h"

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8 ; j++)
			_puthar(a[i][j]);
	}
	_putchar('\n');
}
