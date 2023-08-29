#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: pointer to first node
 * @index: index for the noode in the list
 * 
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;
	while (current != NULL && index != 0)
	{
		current = current->next;
		index--;
	}
	return (current);
}
