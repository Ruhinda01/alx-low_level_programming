#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to 2D array
 * @size: array size
 *
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}


	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + a[i * size + (size - 1 - i)];
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
