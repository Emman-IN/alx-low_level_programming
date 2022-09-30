#include "main.h"

/**
 * _strncat - concatenates two strings
 * with no fof strings from source
 * @n: number of characters to copy
 * @dest: destination string
 * @src:src string
 * index < no of caracter
 * Return: char pointer
 */


char *_strncat(char *dest, char *src, int n)
{

	int i, len;

	for (len = 0; dest[len]; len++)
		;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
