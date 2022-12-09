#include"lists.h"

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
	size_t i;

	i = 0;

	if (idx > dlistint_len(*h))
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	if (idx == 0)
	{
		if (!*h)
		{
			newnode->next = NULL;
			newnode->prev = NULL;
			*h = newnode;
		}
		else
		{
			newnode->next = *h;
			newnode->prev = NULL;
			newnode->next->prev = newnode;
			*h = newnode;
		}
	}
	else if (idx == dlistint_len(*h))
	{
		current = *h;
		while (current->next)
		{
			current = current->next;
		}
		newnode->next = NULL;
		newnode->prev = current;
		current->next = newnode;
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
