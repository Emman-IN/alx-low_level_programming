#include "lists.h"


/**
 * free_listint - free linked list
 * @head: pointer to the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (head)
	{
		current = current->next;
		free(head);
		head  = current;
	}

}
