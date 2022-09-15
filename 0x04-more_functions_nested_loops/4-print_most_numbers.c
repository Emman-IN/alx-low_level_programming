#include"main.h"

/**
 * print_numbers - print numbers 0 - 9
 * except 2 and 4
 * Return: none
 */

t_numbers(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		if (j == 50 && j == 52)
		{	
			continue;

		}
		_putchar(j);
	}
	_putchar(10);
}
