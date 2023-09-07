#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid of integers
 * @grid: The address of the two dimensional grid
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
