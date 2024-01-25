#include "lists.h"

/**
 * free_list - to free a list (list_t)
 * @head: the beginning of the list
 * Return: nothing (void)
 */

void free_list(list_t *head)
{
	list_t *ptr;
	list_t *temp;

	ptr = head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
