#include <stdio.h>

/**
 * main - first line the computer reads
 * @argc: integer value
 * @argv: array to pointers
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argv[argc] != NULL)
	{
		printf("%d\n", sum + argc);
	}
	else
	{
		printf("%d\n", sum + (argc - 1));
	}
	return (0);
}
