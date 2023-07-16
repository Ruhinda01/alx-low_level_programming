#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	/* Using for loop and if statements */
	for (x = 0; x <= 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			/* Using /10 to get first digit and %10 to get second digit */
			putchar ('0' + x / 10);
			putchar ('0' + x % 10);
			putchar (' ');
			putchar ('0' + y / 10);
			putchar ('0' + y % 10);
			if (x != 98 || y != 99)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);

}
