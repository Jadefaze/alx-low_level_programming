#include "lists.h"

/**
 * free_dlistint - free doubly list
 * @head: the pointer to first node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_ptr, *next;

	if (head == NULL)
		return;

	current_ptr = head;

	while (current_ptr != NULL)
	{
		next = current_ptr->next;
		free(current_ptr);
		current_ptr = next;
	}
}
