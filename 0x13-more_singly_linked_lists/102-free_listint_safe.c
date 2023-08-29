#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the head
 *
 * Return: count
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current;
	listint_t *next;

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		current->next = NULL;
		free(current);
		count++;
		current = next;
	}
	*h = NULL;
	return (count);
}
