#include "main.h"
#include <stdio.h>
/**
 * print_number - prints integeri
 * @n: integer to be printed
 * Return: none
 */
void print_number(int n)
{
	unsigned int m;

	m = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		m = n;
	}
	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((unsigned int) n % 10 + '0');
