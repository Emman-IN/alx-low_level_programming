#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num >= 0 && num <= 9)
	{
		_putchar(num % 10 + '0');
	}
	else if (num > 9)
	{
		print_number(num / 10);
		print_number(num % 10);
	}
}
