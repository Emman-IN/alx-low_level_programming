#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers
 * Return: Always 0 success
 */


int main()
{
	int first = 0;
	int second = 1;
	int i, new = 0, quantity = 50;

	for (i = 0; i < quantity; i++)
	{
		printf("%u", new);
		first = second;
		second = new;
		new = first + second;
		if (i < quantity - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	return (0);
}
