#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head pointer
 * @index: index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head;
	n = 0;
	while (ptr != NULL)
	{
		if (n == index)
			return (ptr);
		n++;
		ptr = ptr->next;
	}
	return (NULL);
}
