#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: double pointer to 2 dimensional grid
 * @height: value to be used as limiter
 *
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height - 1; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
