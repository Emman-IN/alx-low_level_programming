#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head node
 * Return: a pointer to the first node of the reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	prev = NULL;
	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}
