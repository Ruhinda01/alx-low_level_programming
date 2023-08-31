#include "main.h"
/**
 * flip_bits - returns the number of bits you need to flip
 * @n: number
 * @m: number to perform XOR
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int count;

	num = n ^ m;
	count = 0;
	while (num)
	{
		count = count + (num & 1);
		num = num >> 1;
	}
	return (count);
}
