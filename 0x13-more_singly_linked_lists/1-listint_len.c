#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h - pointer to head or first node
 * Return: number of nodes or elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (h != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}

