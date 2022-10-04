#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid,
 * previously created by the alloc_grid function.
 * @grid: 2D-array of integers.
 * @height: height of the grid.
 *
 * Return: void is returned
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
