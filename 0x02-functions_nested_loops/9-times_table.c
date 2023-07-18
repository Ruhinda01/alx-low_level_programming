#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 *
 * Return: none
 */

void times_table(void)
{
	int x, y, product, tens, ones;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;
			tens = product / 10;
			ones = product % 10;

			if (y == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ones);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + tens);
				_putchar('0' + ones);
			}
		}
		_putchar('\n');
	}
}
