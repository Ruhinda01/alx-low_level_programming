#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to the number
 * @index: index starting from 0
 * Return: 1 if success and -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index < sizeof(unsigned long int) * 8)
	{
		*n = *n | mask;
		return (1);
	}
	else
	{
		return (-1);
	}
}
