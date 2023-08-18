#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_letter - prints character
 * @list: va_list
 * Return: none
 */
void print_letter(va_list list)
{
	putchar(va_arg(list, int));
}
/**
 * print_integer - prints integer
 * @list: va_list
 * Return: none
 */
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - prints float
 * @list: va_list
 * Return: none
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_str - prints strings
 * @list: va_list
 * Return: none
 */
void print_str(va_list list)
{
	char *p;

	p = va_arg(list, char *);
	if (p == NULL)
	{
		printf("(nil)");
	}
	else if (p != NULL)
	{
		printf("%s", p);
	}
}
/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	char *s = "";


	data arr[] = {
	{'c', print_letter},
	{'i', print_integer},
	{'f', print_float},
	{'s', print_str},
	{0, NULL}
	};

	va_start(list, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (arr[j].ty != 0)
		{
			if (arr[j].ty == format[i])
			{
				printf("%s", s);
				arr[j].ptr(list);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
