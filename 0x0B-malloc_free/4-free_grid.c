#include "main.h"

/**
 * free_grid - to free previously created 2d array
 * @grid: the 2d array
 * @height: the number of rows to free
 * Return: nothing (void)
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	i = height;

	while (i >= 0)
	{
		free(grid[i]);
		i--;
	}
	free(grid);
}
