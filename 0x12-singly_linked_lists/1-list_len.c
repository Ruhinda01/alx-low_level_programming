#include "lists.h"
/**
 * list_len - number of elements of list_t
 * @h: linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
