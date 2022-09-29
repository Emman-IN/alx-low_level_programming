#include "main.h"

/**
 * print_nber - prints an integer
 * @n: nber to print
 */

void print_nber(int n)
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
		print_nber(n / 10);
		print_nber(n % 10);
	}
}
