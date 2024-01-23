#include "lists.h"
#include <stdio.h>

/**
 * print_list - to print elements of linked list
 * @h: the head pointer (pointer to first node)
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
