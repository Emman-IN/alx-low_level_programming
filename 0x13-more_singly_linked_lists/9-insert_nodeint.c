#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to head node
 * @idx: position to insert new node
 * @n: the data of the new node
 * Return: the address of the new node, or NULL if it failed
 */



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i, len = 0;

	listint_t *current = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	while (current)
	{
		len++;
		current = current->next;
	}
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	if (!idx || idx > len)
	{
		return (NULL);
	}
	else
	{
		if (idx == 0)
		{
			if (*head == NULL)
			{
				newNode->next = NULL;
				*head = newNode;
			}
			else
			{
				newNode->next = *head;
				*head = newNode;
			}
		}
		else
		{
			listint_t *current = *head;
			for (i = 0; i < idx - 1; i++)
			{
				current = current->next;
			}
			newNode->next = current->next;
			current->next = newNode;
		}
	}
	return (*head);
}
