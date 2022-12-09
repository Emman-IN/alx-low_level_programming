#include"lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);


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
	if (!newnode || !idx || (int)idx > (int)dlistint_len(*h))
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
	}
	else if ((int)idx == (int)dlistint_len(*h))
	{
		newnode = add_dnodeint_end(h, n);
	}
	else
	{
		current = *h;
		while (i < (int)idx - 1)
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


/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head node
 * @n: data to be added to new nodde
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

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
		(*head)->prev = newnode;
		*head = newnode;
	}
	return (newnode);
}

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
		current = *head;
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


