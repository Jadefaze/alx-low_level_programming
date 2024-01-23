#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - to add new node at beginning of linked list
 * @head: pointer to  head pointer (pointer to first node)
 * @str: the string to insert in new node
 * Return: address of new node (new head)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current_ptr;

	if (str == NULL)
		return (NULL);

	current_ptr = malloc(sizeof(list_t));
	if (current_ptr == NULL)
		return (NULL);

	current_ptr->str = strdup(str);

	if (current_ptr->str == NULL)
	{
		free(current_ptr);
		return (NULL);
	}

	current_ptr->len = _strlen(str);
	current_ptr->next = *head;
	*head = current_ptr;
	return (*head);
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
