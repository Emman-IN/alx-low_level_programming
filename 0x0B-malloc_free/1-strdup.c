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

	for (len = 0; str[len]; len++)
		;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = (char *)malloc(sizeof(char) * len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		new_str[i] = str[i];
	}

	new_str[i] = '\0';
	return (new_str);
}
