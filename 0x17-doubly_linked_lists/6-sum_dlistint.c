#include "lists.h"

/**
 * sum_dlistint - sum all data elements in dlist
 * @head: pointer to first node
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_ptr;
	int sum;

	sum = 0;

	if (head == NULL)
		return (sum);

	current_ptr = head;

	while (current_ptr != NULL)
	{
		sum += current_ptr->n;
		current_ptr = current_ptr->next;
	}

	return (sum);
}
