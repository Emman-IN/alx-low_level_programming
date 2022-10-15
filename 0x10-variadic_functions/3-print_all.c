#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 */

void print_all(const char *const format, ...)
{
	size_t i = 0, len = 0;
	va_list ptr;
	char *str;

	va_start(ptr, format);
	while (format[len])
		len++;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				if (!va_arg(ptr, char *))
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(ptr, char *));
				break;
			default:
				printf("Invalid format\n");
				break;
		}
		if (i < len - 1)
		{
			printf(", ");
		}
		i++;
	}
	putchar(10);
	va_end(ptr);
}
