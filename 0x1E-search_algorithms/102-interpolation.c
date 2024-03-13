#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where the value is located or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lo, hi, pos;

	if (array == NULL || size == 0)
		return (-1);

	lo = 0;
	hi = size - 1;
	while (lo <= hi && value >= array[lo] && value <= array[hi])
	{
		pos = lo + (((double)(hi - lo) / (
						array[hi] - array[lo])) * (
						value - array[lo]));
		if (pos >= size)
			break;

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			hi = pos - 1;
		else
			lo = pos + 1;
	}
	pos = lo + (((double)(hi - lo) / (
					array[hi] - array[lo])) * (
					value - array[lo]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
