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
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (i + j < size)
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
