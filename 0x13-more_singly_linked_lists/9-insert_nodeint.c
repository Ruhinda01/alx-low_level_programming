#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head pointer
 * @idx: index where new node should be added
 * @n: number to be added
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr != NULL && idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
