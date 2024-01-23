#include "lists.h"
#include <stdio.h>

/**
 * list_len - to print elements of linked list
 * @h: the head pointer (pointer to first node)
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
