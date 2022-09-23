#include "main.h"

/**
 * cap_string - capitalize every word in a string
 * @s: the string
 * Return: Pointer to the resulting string
 */

char *cap_string(char *s)
{
	int a, i;
	char special[] = ",:;.!?\"(){}\t\n ";

	for (a = 0; s[a]; a++)
	{
		for (i = 0; special[i]; i++)
		{
			if (s[0] >= 'a' && s[0] <= 'z')
			{
				s[0] -= 32;
			}
			if (s[a] == special[i])
			{
				if (s[a + 1] >= 97 && s[a + 1] <= 122)
				{
					s[a + 1] -= 32;
				}
			}
		}
	}
	return (s);
}

