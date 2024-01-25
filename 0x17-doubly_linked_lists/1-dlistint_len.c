#include "lists.h"

/**
 * dlistint_len - find length of dlist
 * @h: pointer to first node
 * Return: the length (number of nodes)
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_ptr;
	size_t dlist_len;

	dlist_len = 0;

	if (h == NULL)
		return (dlist_len);

	current_ptr = h;

	while (current_ptr != NULL)
	{
		dlist_len++;
		current_ptr = current_ptr->next;
	}

	return (dlist_len);
}
