#include "search_algos.h"

/**
 * print_array - prints the array being searched
 * @array: pointer to the first element of the array to search in
 * @first: first index
 * @last: last index
 *
 * Return: nothing
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i < last; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * binary_mod - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @first: first index
 * @last: last index
 * @value: value to search for
 *
 * Return: index where value is located or -1
 */

int binary_mod(int *array, size_t first, size_t last, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		print_array(array, first, last);
		mid = (first + last) / 2;
		if (array[mid] > value)
			last = mid - 1;
		else if (array[mid] < value)
			first = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, first, last;
	char *string = "Value found between indexes ";


	if (array == NULL || size == 0)
		return (-1);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	first = i / 2;
	if (i < (size - 1))
		last = i;
	else
		last = size - 1;

	printf("%s[%ld] and [%ld]\n", string, first, last);
	return (binary_mod(array, first, last, value));
}
