#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 */

void print_number(int n)
{

	unsigned int p = n;

	if (n < 0)
	{
		p = -n;
		_putchar('-');
	}
	else
	{
		p = n;
	}
	if (p >= 0 && p <= 9)
	{
		_putchar(p % 10 + '0');
	}
	else if (p > 9)
	{
		print_number(p / 10);
		print_number(p % 10);
	}
}
