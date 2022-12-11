#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index in a linked list
 * @head: ptr to the head node
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *current, *temp;

	if (index == 0)
	{
		if (!*head)
			return (-1);
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	else
	{
		current = *head;
		for (i = 0; i < index; i++)
		{
			if (!current)
				return (-1);
			temp = current;
			current = current->next;
		}
		temp->next = current->next;
		free(current);
		return (1);
	}
	return (-1);
}
