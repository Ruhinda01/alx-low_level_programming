#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(width * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			for (k = i; k >= 0; k--)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
