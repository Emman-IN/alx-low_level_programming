#include "main.h"

/**
 * rev_string - function that reverses a string
 * _strlen - gets len of the string
 * @s: string to be reversed
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

void rev_string(char *s)
{
	int i = 0;

	char rev[_strlen(s)];

	for (int j = _strlen(s) - 1; j >= 0; j--)
	{
		rev[i] = s[j];
		i += 1;
	}
	rev[i] = '\0';
	for (i = 0; rev[i] != '\0'; i++)
	{
		putchar(rev[i]);
	}

	putchar(10);
}
