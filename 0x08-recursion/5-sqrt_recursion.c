#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number
 *Return: square root of the number
 */

int _sqrt_recursion(int n)
{

	static int i;

	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (_sqrt_recursion(n));
}
