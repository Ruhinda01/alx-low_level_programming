#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to the first node
 *
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
