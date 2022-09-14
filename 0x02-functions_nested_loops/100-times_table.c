#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number table to be printed
 */

void print_times_table(int n)
{
	int i, j, k, first, last;

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)

			if (!(n >= 15))
			{
				{
					k = i * j;
					first = k / 10;
					last = k % 10;
					if (k >= 0 && k < 10)
					{
						printf(" ");
						printf(" ");
						printf("%d", last);
					}
					else if (k >= 10 && k < 100)
					{
						printf(" ");
						printf("%d", first);
						printf("%d", last);
					}
					else
					{

						printf("%d", first);
						printf("%d", last);
					}
					if (j < n)
					{
						printf(",");
						printf(" ");
					}
				}
			}
		printf("\n");
	}
}
