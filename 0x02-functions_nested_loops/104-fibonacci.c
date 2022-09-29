#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers
 * Return: Always 0 success
 */

int main(void)
{
	long double first = 0;
	long double second = 1;
	long double i, quantity = 98;
	long double new = 0;

	new = first + second;
	for (i = 0; i < quantity; i++)
	{

		printf("%Lf", new);
		first = second;
		second = new;
		new = first + second;
		if (i < quantity - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
