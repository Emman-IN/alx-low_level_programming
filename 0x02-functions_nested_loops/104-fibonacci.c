#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers
 * Return: Always 0 success
 */

int main(void)
{
	long first = 0;
	long second = 1;
	int i, quantity = 98;
	long new = 0;

	for (i = 0; i < quantity; i++)
	{
		new = first + second;
		printf("%lu", new);
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

