#include "lists.h"
#include <stdio.h>

/**
 * print_list - to print all elements of a list_t
 * @h: the list to print out
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr_head;
	size_t count;

	count = 0;
	ptr_head = h;
	while (ptr_head != NULL)
	{
		if (ptr_head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr_head->len, ptr_head->str);
		}
		ptr_head = ptr_head->next;
		count++;
	}
	return (count);
}
