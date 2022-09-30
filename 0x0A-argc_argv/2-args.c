#include<stdio.h>

/**
 * main - prints all arguments passed into it
 * @argc: arguement count
 * @argv: arguement vector (1-D array of strings)
 * Return: Always 0(success)
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
