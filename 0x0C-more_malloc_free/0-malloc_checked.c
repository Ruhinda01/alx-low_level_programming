#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size of the array
 *
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
