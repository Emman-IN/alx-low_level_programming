#include "lists.h"

/**
 * free_list - free linked list
 * @head: pointer to the linked list
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (head)
	{
		free(current->str);
		current = current->next;
		free(head);

		head = current->next;
	}
}
