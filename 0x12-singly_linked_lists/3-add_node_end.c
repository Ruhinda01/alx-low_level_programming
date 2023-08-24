#include "lists.h"
/**
 * _strlen - string length
 * @str: sting
 *
 * Return: len
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
 * add_node_end - adds node at end of list
 * @head: pointer to list
 * @str: string
 *
 * Return: adrress of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *last;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = _strlen(str);
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
	}
	return (temp);
}
