#include "lists.h"
#include <stdio.h>

/**
 * print_listint - to print i9nts from listint_t
 * @h: the pointer to list with ints
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current_ptr;
	size_t node_count;

	node_count = 0;

	current_ptr = h;

	while (current_ptr != NULL)
	{
		printf("%d\n", current_ptr->n);
		current_ptr = current_ptr->next;
		node_count++;
	}

	return (node_count);
}
