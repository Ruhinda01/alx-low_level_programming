#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct type - data format types
 * @ty: data type characters
 * @ptr: function pointer to the selected functions
 */

typedef struct type
{
	char ty;
	void (*ptr)(va_list list);
} data;

void print_letter(va_list list);

void print_integer(va_list list);

void print_float(va_list list);

void print_str(va_list list);

#endif
