#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 * index is quantity minus one
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
