#include "main.h"

/**
 * _strdup - returns a pointer to a new string.
 * like strcpy
 * The new string is a duplicate of of str function parameter
 * @str: string to be duplicated
 * Return: pointer to the new string
 */


char *_strdup(char *str)
{
	size_t i, len;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new_str = (char *)malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
