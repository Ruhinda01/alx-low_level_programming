#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of element of array
 * @size: size in bytes
 *
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	m = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		m[i] = 0;
	}
	return (m);
}
