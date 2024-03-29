#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index into dlist
 * @h: pointer to head
 * @idx: index to insert at
 * @n: the data to instert into node
 * Return: addressm of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_ptr;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/* initialise new node */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current_ptr = *h;
	i = 0;
	/*iterate the list with current_ptr until index*/
	while (i < idx - 1 && current_ptr != NULL)
	{
		current_ptr = current_ptr->next;
		i++;
	}
	if (current_ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current_ptr;
	new_node->next = current_ptr->next;
	if (current_ptr->next != NULL)
		current_ptr->next->prev = new_node;
	current_ptr->next = new_node;
	return (new_node);
}
