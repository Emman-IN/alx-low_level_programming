#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be evaluated
 * Return: return 0 success
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar(last + '0');
	return (last);
}

