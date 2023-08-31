#include "main.h"
/**
 * get_endianness - checks for endianness
 *
 * Return: check
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr;

	ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
		return (0);
}
