#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: type const unsigned long int
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	char *num = malloc(255);
	int rem, i, len, j;

	if (n == 0)
	{
		putchar(48);
	}

	else if (n == 1)
	{
		putchar(49);
	}
	else
	{
		if (n > 1)
		{
			while (n / 2 != 0)
			{
				rem = n % 2;
				num[i] = rem + '0';
				i++;
				n = n / 2;
			}
		}
		num[i] = 1 + '0';
		while (num[len])
		{
			len++;
		}
		for (j = len - 1; j >= 0; j--)
		{
			putchar(num[j]);
		}
	}
}
