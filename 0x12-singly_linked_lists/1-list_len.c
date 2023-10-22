#include "lists.h"
#include <stdio.h>

/**
 * list_len - to return number of elements of a list_t
 * @h: the list to print out
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr_head;
	size_t count;

	count = 0;
	ptr_head = h;
	while (ptr_head != NULL)
	{
		ptr_head = ptr_head->next;
		count++;
	}
	return (count);
}
