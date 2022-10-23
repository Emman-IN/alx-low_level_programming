#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to first node
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
