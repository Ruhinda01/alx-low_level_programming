#include "main.h"

/**
 * find_prime - carru out more tests to find prime number
 * @number: number to be tested
 * @divisor: number to be used to divide the number
 *
 * Return: 1 if prime and 0 if not
 */

int find_prime(int number, int divisor)
{
	if (divisor * divisor > number)
	{
		return (1);
	}
	if (number % divisor == 0)
	{
		return (0);
	}
	else
		return (find_prime(number, divisor + 1));
}

/**
 * is_prime_number - returns 1 if integer is a prime number
 * otherwise return 0
 * @n: number to be tested
 *
 * Return: 1 if prime number and 0 if not a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (find_prime(n, 2));
}
