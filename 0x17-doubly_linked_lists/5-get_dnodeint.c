#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: pointer to head node
 * @index: index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *current  =  head;

	if (index < 0 || index > dlistint_len(head))
	{
		return (NULL);
	}
	while (i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
