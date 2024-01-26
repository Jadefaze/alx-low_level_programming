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
	dlistint_t *new_node;
	dlistint_t *current_ptr;
	unsigned int i;

	/*allocate mem for new node*/
	new_node = malloc(sizeof(dlistint_t));

	/* check if new node is not null */
	if (new_node == NULL)
		return (NULL);

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

	/*insert new node here */
	new_node->n = n;
	new_node->prev = current_ptr;
	new_node->next = current_ptr->next;

	if (current_ptr->next != NULL)
		current_ptr->next->prev = new_node;

	current_ptr->next = new_node;

	return (new_node);
}
