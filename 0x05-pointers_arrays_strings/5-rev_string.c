#include "main.h"

/**
 * _strlen - gets the length of the string
 * rev_string - reverse the string
 * @s: string to be reversed
 * Return: the integer length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{

	}
	return (i);
}

void rev_string(char *s)
{
	int i, j;

	char rev[_strlen(s)];

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j += 1;
	}
	rev[i] = '\0';

	for (i = 0; rev[i] != '\0'; i++)
	{
		s[i] = rev[i];
	}
	s[i] = '\0';
}

