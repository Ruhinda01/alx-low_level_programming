#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, x;
	float y;
	char *p;

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				putchar(va_arg(list, int));
				break;
			case 'i':
				x = va_arg(list, int);
				printf("%d", x);
				break;
			case 'f':
				y = va_arg(list, double);
				printf("%f", y);
				break;
			case 's':
				p = va_arg(list, char *);
				if (p == NULL)
					printf("(nil)");
				printf("%s", p);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}