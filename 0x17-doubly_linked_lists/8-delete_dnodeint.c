#include "lists.h"

/**
 * delete_dnodeint_at_index - insert node at a given index into dlist
 * @head: pointer to head
 * @index: index to delete at
 * Return: 1 for success, -1 failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_ptr, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current_ptr = *head;
	if (index == 0)
	{
		*head = current_ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_ptr);
		return (1);
	}

	i = 0;
	/*iterate the list with current_ptr until index*/
	while (i < index - 1 && current_ptr != NULL)
	{
		current_ptr = current_ptr->next;
		i++;
	}

	if (current_ptr == NULL || current_ptr->next == NULL)
		return (-1);

	temp = current_ptr->next;
	current_ptr->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = current_ptr;

	free(temp);
	/**
	*if (current_ptr->next->next != NULL)
	*	current_ptr->next->next->prev = current_ptr;
	*current_ptr->next = current_ptr->next->next;
	*free(current_ptr->next);
	*/
	return (1);
}
