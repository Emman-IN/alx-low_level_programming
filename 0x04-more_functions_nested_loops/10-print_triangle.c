#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: none
 */


void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j =1; j <= size; j++)
			{
				if (i + j <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
