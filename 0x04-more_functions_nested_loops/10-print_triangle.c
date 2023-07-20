#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: none
 */

void print_triangle(int size)
{
	int len, wid;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (wid = 0; wid < size - (len + 1); wid++)
			{
				_putchar(' ');
			}
			for (wid = 0; wid <= len; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
