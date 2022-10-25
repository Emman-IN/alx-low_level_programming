#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head node
 * Return: head node’s data (n)
 */


int pop_listint(listint_t **head)
{
	int ret;
	listint_t *current = *head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		ret = (*head)->n;
		if (current->next == NULL)
		{
			*head = NULL;
			free(current);
		}
		else
		{
			current = current->next;
			free(*head);
			*head = current;
		}
	}
	return (ret);
}
