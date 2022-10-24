#include "lists.h"

/**
 * add_node_end - add a node the beginning of a linked list
 * @head: pointer reference to the first node of the linked list
 * @str: pointer to the str to be added to the node
 * Return: the address of the new element, or NULL if it failed
 */



list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *current, *newNode;

	while (str[i])
		i++;

	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = NULL;


	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{

		current = *head;
		while (current->next)
			current = current->next;
		current->next = newNode;
	}
	return (*head);
}
