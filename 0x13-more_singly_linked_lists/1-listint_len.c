#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h - pointer to head or first node
 * Return: number of nodes or elements in a list
 */



size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;

	int i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}

