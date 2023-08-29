#include "lists.h"
/**
 * listint_len - the number of elements in the linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
