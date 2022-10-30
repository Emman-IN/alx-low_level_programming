#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: type const unsigned long int
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if (n & 1)
	{
		putchar(49);
	}
	else
	{
		putchar(48);
	}
}
