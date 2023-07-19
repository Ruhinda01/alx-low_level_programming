#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int first, second;
	long int sum;
	int turns;

	first = 0;
	second = 1;

	for (turns = 0; turns <= 97; turns++)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;
	}
	printf("\n");
	return (0);
}
