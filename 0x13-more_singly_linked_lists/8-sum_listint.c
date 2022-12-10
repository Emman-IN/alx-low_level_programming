#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head node
 * Return: returns the sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	else
	{
		listint_t *current = head;

		while (current)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}

