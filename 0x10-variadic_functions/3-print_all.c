#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 */


void print_all(const char *const format, ...)
{
	size_t i;
	va_list ptr;
	char *str;

	va_start(ptr, format);

	while (format && format[i])
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
				str = va_arg(ptr, char *);
				if (!str)
				{
					printf("(nil)");
				}
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' &&
				(format[i] == 'c' || format[i] == 'i' ||
				 format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	putchar(10);
	va_end(ptr);
}
