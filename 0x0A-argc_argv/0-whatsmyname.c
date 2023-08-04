#include <stdio.h>

/**
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
