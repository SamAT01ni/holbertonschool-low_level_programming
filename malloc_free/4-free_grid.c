#include "main.h"
#include <stdlib.h>

/**
 * free_grid - removes data from each part of the grid
 * @grid: pointer to each row in the array
 * @height: height of the grid
 *
 * Return: freed grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
