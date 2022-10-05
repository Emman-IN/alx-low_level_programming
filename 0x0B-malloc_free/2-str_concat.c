#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concat string
 */

char *str_concat(char *s1, char *s2)
{
	size_t i, len1, len2, size;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	size = len1 + len2 + 1;
	concat = (char *)malloc(sizeof(char) * size);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concat[len1 + i] = s2[i];
	}

	return (concat);
}
