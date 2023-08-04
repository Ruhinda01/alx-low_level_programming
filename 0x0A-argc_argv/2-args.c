#include <stdio.h>

/**
 * main - first function the computer reads
 * @argc: integer value
 * @argv: array of pointers
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
