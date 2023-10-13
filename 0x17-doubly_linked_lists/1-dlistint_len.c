#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head pointer
 *
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *ptr;

	count = 0;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
