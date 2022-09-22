#include "main.h"

/**
 * rev_string - reverse the string
 * @s: string to be reversed
 * Return: the integer length of the string
 */

void rev_string(char *s)
{
	int i, len;
	char temp;

	for (len = 0; s[len]; len++)
		;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - i - 1] = temp;
	}
	s[i] = '\0';
}

