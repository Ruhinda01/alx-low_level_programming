#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int number = 612852475143;
	long int factor = number;
	long int divisor = 2;

	while (factor != divisor)
	{
		if (factor % divisor == 0)
		{
			factor = factor / divisor;
		}
		else
		{
			divisor++;
		}
	}

	printf("%li\n", factor);

	return (0);
}
