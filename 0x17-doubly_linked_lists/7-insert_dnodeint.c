#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to first node
 * @idx: index to insert node
 * @n: data of  node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *current;

	int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode || idx < 0 || idx > (int)dlistint_len(*h))
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
	}
	else if (idx == (int)dlistint_len(*h))
	{
		newnode = add_dnodeint_end(h, n);
	}
	else
	{
		current = *h;
		while (i < idx - 1)
		{
			current = current->next;
			i++;
		}
		newnode->next = current->next;
		newnode->prev = current;
		current->next = newnode;
	}
	return (newnode);
}
