#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: string (name)
 * @f: pointer to function
 *
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
