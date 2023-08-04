#include <stdio.h>
#include <stdlib.h>

/**
 * main - first function the computer reads
 * @argc: integer value
 * @argv: array of pointers
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int product;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
