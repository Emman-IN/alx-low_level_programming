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
	size_t len1, len2, i;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc(len1 + n + 1);
	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < len1 + n; i++)
	{
		if (i < len1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[i - len1];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
