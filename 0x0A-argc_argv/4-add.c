#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - the first functionread by computer
 * @argc: integer index value
 * @argv: array to pointers
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;
	int number = 0;
	int x;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			for (x = 0; argv[count][x] != '\0'; x++)
			{

				if (!isdigit(argv[count][x]))
				{
					printf("Error\n");
					return (1);
				}
			}
			number = atoi(argv[count]);
			sum = sum + number;
		}
			printf("%d\n", sum);
	}
	return (0);
}
