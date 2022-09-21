#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string one
 * @s2: string
 * Return: difference of the ascii codes ints
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
}
