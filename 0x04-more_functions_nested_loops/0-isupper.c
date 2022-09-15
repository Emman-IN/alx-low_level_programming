#include "main.h"


/**
 * _isupper - checks for uppercase letters
 * @c: character to be evaluated
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' &&	c <= 'Z')
	{
		return (1);
	}
	else
	{	return (0);
	}
	_putchar('\n');
}
