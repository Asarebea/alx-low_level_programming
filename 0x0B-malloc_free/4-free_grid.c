#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a second dimensional array
 * @grid: second dimensional grid
 * @height: height of grid
 * Description: a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
