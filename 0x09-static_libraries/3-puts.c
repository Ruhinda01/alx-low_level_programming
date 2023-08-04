#include "main.h"

/**
 * _puts - prints output
 * @s: string
 * Return: none
 */

void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
