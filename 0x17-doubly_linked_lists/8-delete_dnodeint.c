#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to head node
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	size_t i;

	current = *head;

	if (index == 0)
	{
		if (!*head)
			return (-1);
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}

	else
	{
		for (i = 0; i < index; i++)
		{
			if (!current)
				return (-1);
			current = current->next;
		}
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);
}
