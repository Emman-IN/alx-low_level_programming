#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: - separates the string
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *str;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str)
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	putchar(10);
	va_end(ptr);
}
