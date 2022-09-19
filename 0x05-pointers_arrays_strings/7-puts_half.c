#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be evaluated
 */


void puts_half(char *str)
{
	int i, n;

	int len;

	for (len = 0; str[len]; len++)
		;

	n = (len - 1) / 2;

	if (len % 2 == 0)
		for (i = len / 2; str[i]; i++)
		{
			_putchar(str[i]);
		}
	else
	{
		for (i = n + 1; str[i]; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
