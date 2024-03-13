#include "search_algos.h"
#include <math.h>

/**
 * arr_search - searches for the value in a array using linear search
 * @array: pointer to the first element of the array
 * @first: index to the first element
 * @last: index to the last element
 * @size: size of the array
 * @value: value to search for
 * Return: index where value is located or -1
 */

int arr_search(int *array, size_t first, size_t last, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = first; i <= last && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * jump_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, start, end;
	char *string = "Value found between indexes ";

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (i + jump < size && value <= array[i + jump])
		{
			start = i;
			end = i + jump;
			printf("%s[%ld] and [%ld]\n", string, start, end);
			return (arr_search(array, start, end, size, value));
		}
	}
	start = i - jump;
	end = i;
	printf("%s[%ld] and [%ld]\n", string, start, end);
	/* remember to alway use arr_search to return value */
	return (arr_search(array, start, end, size, value));
}
