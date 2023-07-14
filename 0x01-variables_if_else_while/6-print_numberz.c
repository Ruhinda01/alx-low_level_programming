#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{

	int base = '0';

	/* Using while loop to achieve result */
	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	putchar('\n');

	return (0);

}
