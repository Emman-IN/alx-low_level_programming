#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 * followed by a new line
 * @s: string
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
}
