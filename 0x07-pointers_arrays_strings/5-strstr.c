#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: strig
 * @needle: substring to be matched to string
 * Return:char pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i] && needle[j + 1] == haystack[i + 1])
			{
				return (&haystack[i]);
			}
			if (haystack[i] == ' ')
			{
				break;
			}
		}
	}
	return (0);
}
