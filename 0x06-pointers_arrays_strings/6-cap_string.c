#include "main.h"

/**
 * cap_string - capitalize every word in a string
 * @s: the string
 * Return: Pointer to the resulting string
 */

char *cap_string(char *s)
{
	int a;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == '\n' || s[a] == '\t' || s[a] == ' '
		|| s[a] == ',' || s[a] == '.' || s[a] == ';'
		|| s[a] == ':' || s[a] == '?' || s[a] == '"'
		|| s[a] == '!' || s[a] == '(' || s[a] == ')'
		|| s[a] == '{' || s[a] == '}')
		{
			if (s[a + 1] >= 97 && s[a + 1] <= 122)
			{
				s[a + 1] = s[a + 1] - 32;
			}
		}
	}
	return (s);
}
