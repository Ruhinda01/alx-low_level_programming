#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all naturl numbers from n to 98
 * @n: contains the number
 *
 * Return: none
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
