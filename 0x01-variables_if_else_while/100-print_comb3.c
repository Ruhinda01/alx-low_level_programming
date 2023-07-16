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


	/* Using nested for loops and if statement */
	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			putchar (x);
			putchar (y);
			if (x != '8' || y != '9')
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);

}
