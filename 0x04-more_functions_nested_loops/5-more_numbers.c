#include "main.h"

/**
 * print_numbers - print numbers 0 - 9
 */

void print_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
