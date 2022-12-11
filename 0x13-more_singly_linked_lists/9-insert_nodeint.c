#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head node
 * @idx: position to insert new node
 * @n: the data of the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *newnode, *current;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		if (!*head)
		{
			newnode->next = NULL;
			*head = newnode;
		}
		else
		{
			newnode->next = *head;
			*head = newnode;
		}
	}
	else
	{
		current = *head;
		for (i = 0; i < idx - 1; i++)
		{
			if (!current)
				return (NULL);
			current = current->next;
		}
		if (!current->next)
		{
			newnode->next = NULL;
			current->next = newnode;
		}
		else
		{
			newnode->next = current->next;
			current->next = newnode;
		}
	}
	return (newnode);
}
