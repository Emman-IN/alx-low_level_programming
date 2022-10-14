#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separates numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	size_t i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		printf("%d", num);
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	putchar(10);
	va_end(ptr);
}
