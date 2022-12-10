#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointerto the head node
 * @n: data added to the node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	listint_t *current;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next  = newNode;
		newNode->next = NULL;
	}
return (newNode);

}

