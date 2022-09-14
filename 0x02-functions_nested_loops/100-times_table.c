#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number table to be printed
 */

void print_times_table(int n)
{
	int i, j, k, first, last;

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)

			if (!(n >= 15))
			{
				{
					k = i * j;
					first = k / 10;
					last = k % 10;
					if (k >= 0 && k < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(last + '0');
					}
					else if (k >= 10 && k < 100)
					{
						_putchar(' ');
						_putchar(first + '0');
						_putchar(last + '0');
					}
					else
					{

						_putchar(first + '0');
						_putchar(last + '0');
					}
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		_putchar('\n');
	}
}
