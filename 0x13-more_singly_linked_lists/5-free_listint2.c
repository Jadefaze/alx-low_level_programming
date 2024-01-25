#include "lists.h"

/**
 * free_listint2 - to free memory allocated to list
 * @head: the pointer to begining of list
 * Return: nothing (void)
 */

void free_listint2(listint_t **head)
{
	listint_t *current_ptr;
	listint_t *next;

	current_ptr = *head;

	while (current_ptr != NULL)
	{
		next = current_ptr->next;
		free(current_ptr);
		current_ptr = next;
	}

	*head = NULL;
}
