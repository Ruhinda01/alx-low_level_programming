#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of a and b
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - difference of a and b
 * @a: number 1
 * @b: number 2
 * Return: result
 */

int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - product of a and b
 * @a: number 1
 * @b: number 2
 * Return: result
 */

int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}

/**
 * op_div - result of a and b
 * @a: number 1
 * @b: number 2
 * Return: result
 */

int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a / b;
	return (result);
}

/**
 * op_mod - remainder of a and b
 * @a: number 1
 * @b: number 2
 * Return: result
 */

int op_mod(int a, int b)
{
	int remain;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	remain = a % b;
	return (remain);
}
