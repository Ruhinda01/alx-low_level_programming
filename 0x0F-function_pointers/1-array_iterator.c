#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * @array: array of numbers
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	if (action == NULL)
	{
		return;
	}
	else
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
