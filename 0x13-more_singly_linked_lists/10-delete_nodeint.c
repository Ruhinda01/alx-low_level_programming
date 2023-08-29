#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the head pointer
 * @index: index of the node to be deleted
 *
 * Return: 1 for success and -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *current;

	prev = NULL;
	current = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		while (current != NULL && index != 0)
		{
			prev = current;
			current = current->next;
			index--;
		}
		if (current == NULL)
		{
			return (-1);
		}
		prev->next = current->next;
		free(current);
	}
	return (1);
}
