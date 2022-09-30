#include <stdio.h>

/**
 * main  - prints number of arguement passed
 * @argc: argument count
 * @argv: arguement vector (1-D array of strings)
 * Return: Always 0 (success)
 */


int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
