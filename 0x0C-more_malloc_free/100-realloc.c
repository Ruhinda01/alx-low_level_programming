#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: original pointer
 * @old_size: original size
 * @new_size: new size
 *
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *added_ptr;

	if (new_size == old_size)
		return (ptr);
	free(ptr);
	if (ptr == NULL)
		return (ptr = malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	added_ptr = malloc(new_size);
	if (added_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (added_ptr);
}
