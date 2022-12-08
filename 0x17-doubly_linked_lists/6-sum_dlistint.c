#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: pointer to head node
 * Return: sum of all data or 0 f the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_len *current;

	current = head;
	sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
