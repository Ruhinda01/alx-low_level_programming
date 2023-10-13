#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: head pointer
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *ptr;

	count = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
