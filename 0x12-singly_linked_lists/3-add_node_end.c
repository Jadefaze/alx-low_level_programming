#include "lists.h"
#include <string.h>

/**
 * add_node_end - to at node at end of list
 * @head: pointer  to beginning of list
 * @str: the data in the node
 * Return: address of new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/*create pointer new node */
	list_t *new_node;
	list_t *current_ptr;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current_ptr = *head;

		while (current_ptr->next != NULL)
			current_ptr = current_ptr->next;

		current_ptr->next = new_node;
	}

	return (new_node);
}

/**
 * _strlen - find string length
 * @str: the string
 * Return: the length
 */

size_t _strlen(const char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
