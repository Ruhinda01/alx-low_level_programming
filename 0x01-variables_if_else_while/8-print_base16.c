#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{

	int digit = '0';
	char lower = 'a';


	/* Using while loop to achieve result */
	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	while (lower <= 'f')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);

}
