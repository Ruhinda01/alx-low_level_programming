#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head pointer
 *
 * Return: a pointer to the first node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
