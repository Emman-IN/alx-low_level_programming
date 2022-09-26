#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory to be filled
 * @b: character to be filled in memory
 * @n: number of character in the memory
 * Return: Char pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	s[i] = '\0';
	return (s);

}
