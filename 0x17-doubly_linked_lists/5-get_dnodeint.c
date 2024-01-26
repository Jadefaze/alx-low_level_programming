#include "lists.h"

/**
 * get_dnodeint_at_index - to return nth node in index
 * @head: pointer to list
 * @index: the index
 * Return: node (nth)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current_ptr = head;

	i = 0;
	while (i < index && current_ptr != NULL)
	{
		current_ptr = current_ptr->next;
		i++;
	}

	if (current_ptr == NULL)
		return (NULL);

	return (current_ptr);
}
