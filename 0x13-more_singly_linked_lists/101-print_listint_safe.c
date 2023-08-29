#include "lists.h"
/**
 * print_listint_safe - prints the linked list
 * @head: pointer to the first node
 *
 * Return: count of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, i;
	const listint_t *ptr;
	const listint_t *visited_nodes[1024] = {NULL};

	if (head == NULL)
		exit(98);

	ptr = head;
	while (ptr != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (visited_nodes[i] == ptr)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (count);
			}
		}
		visited_nodes[count] = ptr;
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
