#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */

void print_all(const char * const format, ...) 
{
	va_list args;
	va_start(args, format);

	char ch;
	int num;
	double dbl;
	char *str;
	unsigned int i = 0;

	while ((ch = format[i++]) != '\0') {
		switch (ch) {
			case 'c':
				putchar(va_arg(args, int));
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				dbl = va_arg(args, double);
				printf("%f", dbl);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default:
				break;
		}

		if (format[i] != '\0') {
			putchar(',');
			putchar(' ');
		}
	}

	va_end(args);

	printf("\n");
}