#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: arguement count
 * @argv: arguement vector (array of arguement strings)
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int m;

	if (argc > 1 && argc <= 3)
	{
		m = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", m);
	}
	printf("Error\n");
	return (0);
}
