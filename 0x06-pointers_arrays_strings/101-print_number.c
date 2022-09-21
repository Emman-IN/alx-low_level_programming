#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 */

void print_number(int n)
{

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	else
	{
		n = n;
	}
	if (n >= 0 && n <= 9)
	{
		_putchar(n % 10 + '0');
	}
	else if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
