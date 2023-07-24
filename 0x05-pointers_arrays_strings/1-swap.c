#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer for a
 * @b: pointer for b
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
