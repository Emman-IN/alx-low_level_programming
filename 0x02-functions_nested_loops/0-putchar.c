#include "main.h"
#include "_putchar.c"

/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */

int main(void)
{
	int i;

	char put[] = "_putchar";

	for (i = 0; i <= 9; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');

	return (0);
}
