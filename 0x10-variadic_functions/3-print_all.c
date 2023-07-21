#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *str;
	int first_arg = 1;

	va_start(valist, format);
	while (format && *format)
	{
		switch (*format)
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				{
					str = va_arg(valist, char*);
					if (str != NULL)
						printf("%s", str);
					else
						printf("(nil)");
				}
				break;
			default:
				break;
		}
		if (*(format + 1) && first_arg)
			printf(", ");
			first_arg = 0;

		format++;
	}
	printf("\n");
	va_end(valist);
}
