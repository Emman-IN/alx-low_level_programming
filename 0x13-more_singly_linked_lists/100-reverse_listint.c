#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head node
 * Return: a pointer to the first node of the reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	current = *head;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = current;

	return (*head);
}
