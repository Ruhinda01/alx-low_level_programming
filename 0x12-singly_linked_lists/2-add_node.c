#include "lists.h"
/**
 * _strlen - string length
 * @str: string
 *
 * Return: string length
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to first node
 * @str: string
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = _strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
