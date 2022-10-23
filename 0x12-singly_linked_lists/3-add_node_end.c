#include "lists.h"

/**
 * add_node_end - add a node the beginning of a linked list
 * @head: pointer reference to the first node of the linked list
 * @str: pointer to the str to be added to the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	int i;
	list_t *current;

	if (!(*head))
	{
		(*head) = malloc(sizeof(list_t));
		if (!(*head))
		{
			return (NULL);
		}
		current = *head;
	}
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = malloc(sizeof(list_t));
		current = current->next;
	}
	current->str = strdup(str);
	while (str[i])
		i++;
	current->len = i;
	current->next = NULL;
	return (*head);
}
