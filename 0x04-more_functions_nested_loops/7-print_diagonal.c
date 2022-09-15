#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times character is printed
 * Return: none
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
				/**
				 * doesn't get executed on first iteration of i
				 * j = i (both zero)
				 */
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
