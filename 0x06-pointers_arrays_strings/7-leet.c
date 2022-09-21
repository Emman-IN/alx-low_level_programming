#include "main.h"

/**
 * leet - function to rncode characters
 * @s: STRING WITH CHARACTERS
 * Return: characters
 */

char *leet(char *s)
{
	int i, j;
	char word[] = "aAeEoOtTlL";
	char encoding[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == word[j])
			{
				s[i] = encoding[j];
			}
		}
	}
	return (s);
}
