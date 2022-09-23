#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to be converted
 * Return: integer of converted string
 */

int _atoi(char *s)
{
	int a = 0;
	int res = 0;
	int sign = 1;

	for (; s[a]; a++)
	{
		if (s[a] >= '0' && s[a] <= '9')
		{
			if (s[a - 1] == '-')
			{
				sign = -1;
			}
			res = (res * 10) + s[a] - '0';
			if (!(s[a + 1] >= '0' && s[a + 1] <= '9'))
			{
				break;
			}
		}
	}
	return (sign * res);
}

