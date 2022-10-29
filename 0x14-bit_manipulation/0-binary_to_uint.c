#include "main.h"

/**
 * binary_to_uint - converts a binary number into an unsigned int
 * @b: type const char pointer of one bit
 * Return: converted number, or 0 if one or more char in str b that is not 0/1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, num = 0, bit;

	if (b == NULL)
	{
		return (0);
	}
	for (len = 0; b[len]; len++)
		;
	for (size_t i = 0; b[i]; i++)
	{
		bit = b[i] - 48;
		if (bit > 1)
		{
			return (0);
		}
		num += bit << (len - i - 1);
	}
	return (num);
}
