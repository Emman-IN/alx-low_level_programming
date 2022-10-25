#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head node
 * @n: value to be added to the node;
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;

	listint_t *current = *head;

	if (!current)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}

