#include "lists.h"
/**
 * dlistint_len - number of elments
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
/**
 * insert_dnodeint_at_index - inserts at given position
 * @h: head position
 * @idx: index
 * @n: data
 *
 * Return: the address to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *ptr;
	size_t len;
	unsigned int num = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	len = dlistint_len(*h);
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (*h == NULL)
	{
		ptr->prev = NULL;
		ptr->next = NULL;
		*h = ptr;
		return (ptr);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (num == idx)
		{
			ptr->next = temp;
			ptr->prev = temp->prev;
			temp->prev->next = ptr;
			temp->prev = ptr;
			return (ptr);
		}
		num++;
		temp = temp->next;
	}
	free(ptr);
	return (NULL);
}
