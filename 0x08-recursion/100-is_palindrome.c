#include "main.h"

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}


/**
 * check_palindrome - checks if a substring is a palindrome
 * @s: the string
 * @start: the starting index of substring
 * @end: the stopping index of substring
 *
 * Return: 1 if substring is a palindrome, otherwise 0
 */
int check_palindrome(char *s, int start, int end)
{
	if (start == end)
		return (1);

	if (s[start] != s[end])
		return (0);

	if (start < end + 1)
		return (check_palindrome(s, start + 1, end - 1));

	return (1);
}
