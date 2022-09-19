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
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
