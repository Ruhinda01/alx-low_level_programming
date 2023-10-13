#include "lists.h"
/**
 * sum_dlistint - sum of all the data
 * @head: head pointer
 *
 * Return: the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	sum = 0;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
