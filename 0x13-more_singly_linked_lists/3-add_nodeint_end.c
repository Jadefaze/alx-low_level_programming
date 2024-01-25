#include "lists.h"

/**
 * add_nodeint_end - to add node at end of list
 * @head: pointer to head
 * @n: the data in new node
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_ptr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current_ptr = *head;

	while (current_ptr->next != NULL)
		current_ptr = current_ptr->next;

	current_ptr->next = new_node;
	return (new_node);
}
