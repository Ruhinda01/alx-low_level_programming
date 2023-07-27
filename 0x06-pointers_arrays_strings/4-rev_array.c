#include "main.h"

/**
 * reverse_array - reverse the elements in the array
 * @a: string
 * @n: number of elements in the string
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int x, placeHolder;

	x = 0;

	while (x < n / 2)
	{
		placeHolder = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = placeHolder;
		x++;
	}
}
