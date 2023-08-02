#include "main.h"

/**
 * get_root - support other function to get number value
 * @product: is n in the function below
 * @num: number to be multiplied to itself to get product
 * Return: num
 */

int get_root(int product, int num)
{
	if ((num * num) > product)
	{
		return (-1);
	}
	if ((num * num) == product)
	{
		return (num);
	}
	else
	{
		return (get_root(product, num + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to square root
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (get_root(n, 0));
	}
}
