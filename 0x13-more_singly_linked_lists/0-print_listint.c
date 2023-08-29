#include "lists.h"
/**
 * print_listint - prints all the elementsof the linked list
 * @h: pointer to the first node on the linked list
 *
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
