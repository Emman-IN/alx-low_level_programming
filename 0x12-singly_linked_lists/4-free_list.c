#include "lists.h"

/**
 * free_list - free linked list
 * @head: pointer to the linked list
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;
		head = current->next;
		free(current);
	}
	/**
	 * check that first is not null
	 * current points to head node
	 * head reference points to next node
	 * then remove first node
	 */
}
