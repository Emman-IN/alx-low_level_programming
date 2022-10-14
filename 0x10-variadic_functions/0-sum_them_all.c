#include "main.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the fixed arg
 * Return: sum of all parameters
 */


int sum_them_all(const unsigned int n, ...)
{
	int i, num, sum = 0;

	va_list ptr;

	if(n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		sum += num;
	}
	va_end(ptr);
	return (sum);
}
