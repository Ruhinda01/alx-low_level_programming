#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - returns the index
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to the function to be used
 *
 * Return: i (index of array) or -1 (if it doesn't match)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		exit(1);
	if (cmp == NULL)
		exit(1);
	if (size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
