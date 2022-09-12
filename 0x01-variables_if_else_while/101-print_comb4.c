#include<stdio.h>

/**
* main - start
*
* Return: 0
*/

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48 ; b <= 57; b++)
		{
			for (c = 48 ; c <= 57; c++)
			{
				if ((a != b && b != c && a != c) && (a < b && b < c && a < c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == 55 && b == 56 && c == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
