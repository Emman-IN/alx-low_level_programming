#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arguement count
 * @argv: arguement vector (array of arguement strings)
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", m);

	return (0);
}
