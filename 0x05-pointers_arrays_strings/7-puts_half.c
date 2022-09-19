#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be evaluated
 */

void puts_half(char *str)
{
	int i;
	int n = (_strlen(str) - 1) / 2;

	if (_strlen(str) % 2 == 0)
		for (i = (_strlen(str) / 2); str[i]; i++)
		{
			_putchar(str[i]);
		}
	else
	{
		for (i = n; str[i]; i++)
		{
			_putchar(str[i]);
		}
	}
}
