#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to be converted
 * Return: integer of converted string
 */

int _atoi(char *s)
{
	int a, i;
	unsigned int res = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] >= '0' && s[a] <= '9')
		{
			res = (res * 10) + s[a] - '0';
			if (!(s[a + 1] >= '0' && s[a + 1] <= '9'))
			{
				break;
			}
		}
	}
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		{
			res = res * -1;
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
			{
				break;
			}
		}
	}
	return (res);
}
