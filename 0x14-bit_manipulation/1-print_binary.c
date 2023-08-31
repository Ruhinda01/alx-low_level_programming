#include "main.h"
/**
 * print_binary - prints the binary representation
 * @n: number
 *
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int printed = 0;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
}
