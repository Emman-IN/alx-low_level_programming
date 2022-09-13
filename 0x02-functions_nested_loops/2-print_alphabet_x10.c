#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */

void print_alphabet_x10(void)
{
	int times, i;

	for (times = 0; times < 10; times++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

	}
}

