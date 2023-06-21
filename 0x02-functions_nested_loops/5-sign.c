#include "main.h"

/**
 * print_sign -program to check if an argument is positive, negative or zero
 * @n: argument to be checked
 * Return: 1 if argument is lower case and 0 if not
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
