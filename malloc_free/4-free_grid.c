#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the 2D array
 * @grid: previously made grid
 * @height: the grid's height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int y;

	if (height <= 0 || grid == NULL)
	{
		return;
	}

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
