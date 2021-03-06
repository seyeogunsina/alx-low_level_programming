#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees the memory allocated to a 2-dim array
 * @grid: the 2-dim array
 * @height: the height of the array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
