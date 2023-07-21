#include "main.h"
#include <stdio.h>
/**
 * print_number - prints integeri
 * @n: integer to be printed
 * Return: none
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		n = -n;
		m = n;
		_putchar('-');
	}
	m = m / 10;
	if (m != 0)
	{
		print_number(m);
	}
	_putchar((unsigned int) n % 10 + '0');
}
