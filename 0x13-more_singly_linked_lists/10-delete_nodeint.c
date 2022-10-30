#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index in a linked list
 * @head: ptr to the head node
 * @index: index of node to delete
 * Index starts at 
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int count = 0;

	listint_t *current = *head;
	if (index == 0)
	{
		if (*head == NULL)
		{
			return (-1);
		}
		else
		{
			if (current->next == NULL)
		}
