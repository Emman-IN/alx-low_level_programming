#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head node
 * @n: data to be added to new nodde
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

        newnode	= malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		*head->prev = newnode;
		*head = newnode;
	}
	return (newnode);
}
