#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be evaluated
 * Return: return 0 success
 */

int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		n = n * -1;
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
}
