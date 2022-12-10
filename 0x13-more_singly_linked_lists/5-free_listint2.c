#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (*head == NULL)
		exit(1);

	while (head)
	{
		current = current->next;
		free(*head);
		*head = current;
	}

}
