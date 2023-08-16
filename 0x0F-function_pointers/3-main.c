#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments input
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
