#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: mininmum value in array
 * @max: maximum value in array
 * Return: p
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size, low;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = (int *)malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (low = min, i = 0; low <= max && i < size; low++, i++)
	{
		p[i] = low;
	}
	return (p);
}
