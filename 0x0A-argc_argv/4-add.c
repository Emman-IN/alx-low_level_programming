#include<stdio.h>
#include<string.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: is the arguments
 * @argv: is the pointer to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum, num;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			num = argv[i][j];
			if (num < '0' || num > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; argv[i]; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
