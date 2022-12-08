#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head)
	{
		head = current->next;
		free(current);
		current = head;
	}
}
