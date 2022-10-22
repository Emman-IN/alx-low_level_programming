#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to current node/list item
 * Return: number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t count = 0;


	while (h)

	{
		if (h->str == NULL)
		{
			printf("%s\n", "[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;

	}
	return (count);
}
