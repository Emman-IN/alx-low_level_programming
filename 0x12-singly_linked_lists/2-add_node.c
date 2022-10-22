#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to current node
 * @str: string to be passed to ftn
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	while (str[i])
	{
		i++;
	}
	newnode->len = i;

	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
