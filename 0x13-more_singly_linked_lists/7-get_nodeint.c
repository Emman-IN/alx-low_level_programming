#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head node
 * @index: index of required node
 * Return: nth node of a listint_t linked list
 *
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;
	listint_t *current = head;

	if (current == NULL)
	{
		return (NULL);
	}
	else
	{
		while (current)
		{
			if (count == index)
			{
				return (current);
			}
			count++;
			current = current->next;
		}
	}
	return (NULL);
}
