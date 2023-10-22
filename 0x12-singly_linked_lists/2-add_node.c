#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a new node at the beginning of list_t
 * @head: the pointer to pointer of head;
 * @str: the str to be added onto the list (as a node)
 * Return: NULL or pointer to node(beginning)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
