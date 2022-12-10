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

	size_t i = 0;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		current = *h;
		for (i = 0; i < idx - 1; i++)
		{
			if (!current)
				return (NULL);
			/**
			 * index out of bounds
			 */

			current = current->next;
		}
		if (!current->next)
			return (add_dnodeint_end(h, n));
		/**
		 * if current->next is null
		 */

		newnode->next = current->next;
		newnode->prev = current;
		current->next = newnode;
		current->next->prev = newnode;
	}
	return (newnode);
}
