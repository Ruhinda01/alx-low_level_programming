#include "lists.h"
/**
 * pop_listint - deltes the head node of the list
 * @head: pointer to the head pointer
 *
 * Return: head nodes's data;
 */
int pop_listint(listint_t **head)
{
	int container;
	listint_t *ptr;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = *head;
		container = (*head)->n;
		*head = (*head)->next;
		free(ptr);
	}
	return (container);
}
