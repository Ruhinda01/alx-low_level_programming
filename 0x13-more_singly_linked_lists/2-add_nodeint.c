#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to the address of head
 * @n: number to be added
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;

	*head = ptr;
	return (*head);
}
