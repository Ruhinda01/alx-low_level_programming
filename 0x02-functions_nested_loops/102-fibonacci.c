#include <stdio.h>

/**
 * main - prints the first 50 fibinacci numbers starting with 1 and 2
 *
 * Return: 0 (Success)
 */

int main(void)
{

	long int sum;
	long int first, second;
	int turns;

	sum = 0;
	first = 0;
	second = 1;

	for (turns = 0; turns <= 49; turns++)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;
	}
	sum = first + second;
	printf("%li\n", sum);
	return (0);

}
