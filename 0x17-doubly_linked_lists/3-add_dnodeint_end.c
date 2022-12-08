#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head node
 * @n: data of node
 * Return: the address of the new element, or NULL if it failed
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *current;

	newnode = malloc(sizeof(dlistint_t));
	current = *head;

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;

	if (!*head)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		current  = *head;
		while (current->next)
		{
			current = current->next;
		}
		newnode->next = NULL;
		current->next = newnode;
		newnode->prev = current;
	}
	return (newnode);
}
