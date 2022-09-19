#include "main.h"

/**
 * rev_string - reverse the string
 * @s: string to be reversed
 * Return: the integer length of the string
 */

void rev_string(char *s)
{
	int i, j, len;

	for (len = 0; s[len]; len++)
		;

	char rev[len];

	for (i = len - 1; i >= 0; i--)
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

