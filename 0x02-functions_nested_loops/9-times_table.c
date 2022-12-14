#include"main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j, k, first, last;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			first = k / 10;
			last = k % 10;
			if (j == 0)
			{
				_putchar(last + '0');
			}
			else
			{
				if (k >= 0 && k < 10)
				{
					_putchar(' ');
					_putchar(last + '0');
				}
				else
				{
					_putchar(first + '0');
					_putchar(last + '0');
				}
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
