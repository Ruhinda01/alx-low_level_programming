#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer
 * Return: none
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length = length - 1;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
