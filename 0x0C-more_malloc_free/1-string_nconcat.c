#include"main.h"

/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to s1
 * Return: pointer to the string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t len1, len2, i, j;

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

	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}
	if (n >= len2)
	{
		for (j = 0; s2[j]; j++)
		{
			ptr[len1 + i] = s2[j];
		}
	}
	else
	{
		for (i = 0; i < n && s2[i]; i++)
		{
			ptr[len1 + i] = s2[i];
		}
	}
	return (ptr);
}
