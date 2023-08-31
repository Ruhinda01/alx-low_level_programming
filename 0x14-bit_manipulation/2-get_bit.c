#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number whose bit will be returned
 * @index: index starting from 0
 * Return: value the value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
