#include <stdio.h>

/**
 * main - main function
 * @argc: integer value
 * @argv: array to strings
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
