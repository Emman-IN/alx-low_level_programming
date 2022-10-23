#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to first node
 * Return: number of elements in the list.
 */



size_t print_list(const list_t *h)
{
	size_t c = 0;
	const list_t *current = h;

	while (current)
	{
		if (!current->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
		c++;
	}
	return (c);
}
