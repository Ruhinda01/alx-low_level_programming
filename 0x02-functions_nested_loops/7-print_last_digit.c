#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @x: contains the number to be checked
 * Return: value of the last digit
 */

int print_last_digit(int x)
{
	int lastDigit = x % 10;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
