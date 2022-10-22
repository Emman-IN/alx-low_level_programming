#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to current node
 * @str: string to be passed to ftn
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *ns = strdup(str);
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	if (ns == NULL)
		ns = "(nil)";

	while (ns[i])
		i++;

	newNode->str = ns;
	newNode->len = i;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}
