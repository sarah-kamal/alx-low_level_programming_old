#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid)
	{
	for (i = 0; i < height; i++)
		if (grid[i])
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	free(grid);
	grid = NULL;
	}
}
