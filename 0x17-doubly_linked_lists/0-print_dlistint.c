#include "lists.h"

/**
 * print_dlistint - to print elements of doubly list
 * @h: the pointer to first element
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_ptr;
	size_t node_count;

	node_count = 0;

	if (h == NULL)
		return (node_count);

	current_ptr = h;

	while (current_ptr != NULL)
	{
		printf("%d\n", current_ptr->n);
		current_ptr = current_ptr->next;
		node_count++;
	}
	return (node_count);
}
