#include "main.h"
/**
 * _strspn  - gets the length of a prefix substring
 * @s: the string to be evaluated
 * @accept: the string with the string to be checked
 * Return: number of occurence of strings of accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			break;
		}
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
