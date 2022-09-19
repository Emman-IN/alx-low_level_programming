#include "main.h"

/**
 * print_rev - reverse the string
 * @s: string to be reversed
 * Return: the integer length of the string
 */

void print_rev(char *s)
{
	int i, len;

	for (len = 0; s[len]; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
