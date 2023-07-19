#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{

	long int total, sum, first, second;

	total = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		first = second;
		second = sum;
		if (sum % 2 == 0)
		{
			total = total + sum;
		}
	}
	printf("%li\n", total);
	return (0);
}
