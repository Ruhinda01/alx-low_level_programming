#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 *
 * Return: none
 */

void times_table(void)
{
	int x, y, product;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;
			if (y == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar('0' + (product / 10));
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + (product % 10));

			if (y != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

