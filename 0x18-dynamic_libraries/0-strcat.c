#include "main.h"

/**
 * _strcat - concatenate two string
 * @dest: destination string
 * @src: source sring
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	for (len = 0; dest[len]; len++)
		;
	for (i = 0; src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
