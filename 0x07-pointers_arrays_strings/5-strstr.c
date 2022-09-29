#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: strig
 * @needle: substring to be matched to string
 * Return:char pointer
 */


char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int len = 0;

	for (len = 0; needle[len]; len++)
		for (i = 0; haystack[i]; i++)
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] == needle[j] && j == len)
					return (&haystack[i]);
			}
		}
	return (0);
}
