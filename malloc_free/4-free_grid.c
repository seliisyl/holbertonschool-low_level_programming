#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2D array of integers.
 * @grid: dimensional array
 * @height: nombre de rows
 */
void free_grid(int **grid, int height)
{
	int i;
		for (i = 0; i < height; i++)
			free(grid[i]);
	free(grid);
}
