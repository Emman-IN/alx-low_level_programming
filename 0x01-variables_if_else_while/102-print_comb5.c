#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success0
 */

int main(void)
{
	int outer;
	int inner;

	for (int outer = 0; outer <= 99; outer++)
	{
		for (int inner = 1; inner <= 99; inner++)
		{
			if (outer != inner && outer < inner)
			{
				printf("%02d", outer);
				printf(" ");
				printf("%02d", inner);
				if (!(outer == 98 && inner == 99))
				{
					printf(",");
					printf(" ");
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
