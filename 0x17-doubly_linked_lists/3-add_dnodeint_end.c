#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of dlist
 * @head: pointer to head
 * @n: the data to insert into node
 * Return: address of new list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_ptr;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	current_ptr = *head;
	while (current_ptr->next != NULL)
		current_ptr = current_ptr->next;
	current_ptr->next = new_node;
	new_node->prev = current_ptr;
	new_node->next = NULL;
	return (new_node);
}
