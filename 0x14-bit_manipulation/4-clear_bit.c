#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: number
 * @index: index starting from 0
 * Return: 1 if success and -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = ~(1UL << index);
	if (index < sizeof(unsigned long int) * 8)
	{
		*n = *n & mask;
		return (1);
	}
	else
	{
		return (-1);
	}
}
