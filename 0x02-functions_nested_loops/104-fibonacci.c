#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers
 * Return: Always 0 success
 */

int main(void)
{
	double first = 0;
	double second = 1;
	double i, quantity = 98;
	double new = 0;

	new = first + second;
	for (i = 0; i < quantity; i++)
	{

		printf("%.0f", new);
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
