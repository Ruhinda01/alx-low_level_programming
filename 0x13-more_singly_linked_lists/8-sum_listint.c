#include "lists.h"
/**
 * sum_listint - sum of all the data (n)
 * @head: pointer to the first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
