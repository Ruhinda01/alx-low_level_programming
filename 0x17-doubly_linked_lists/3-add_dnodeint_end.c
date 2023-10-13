#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head double pointer
 * @n: data to be added
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *last;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
		temp->prev = last;
	}
	return (NULL);
}
