#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers.
 * @grid: the 2D array to free.
 * @height: the height of the array.
 *
 * Return: none.
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
