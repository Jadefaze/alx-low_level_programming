#include "lists.h"

/**
 * add_dnodeint - add node to start of dlist
 * @head: pointer to head
 * @n: the data to the node
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
