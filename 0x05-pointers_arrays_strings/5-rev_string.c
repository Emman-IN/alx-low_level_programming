#include "main.h"

/**
 * rev_string - reverse the string
 * @s: string to be reversed
 * Return: the integer length of the string
 */

void rev_string(char *s)
{
	int i, len;

	for (len = 0; s[len]; len++)
		;
	for (i = 0; i < len / 2; i++)
	{
		temp = a[i];
		a[i] = a[len - 1 - i];
		a[len - i - 1] = temp;
	}
	s[i] = '\0';
}

