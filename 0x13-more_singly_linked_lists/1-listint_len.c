#include "lists.h"

/**
 * listint_len - to return length of list
 * @h: header to start of list
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current_ptr;
	size_t node_count;

	current_ptr = h;
	node_count = 0;

	while (current_ptr != NULL)
	{
		current_ptr = current_ptr->next;
		node_count++;
	}

	return (node_count);
}
