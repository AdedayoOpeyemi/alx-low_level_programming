#include "main.h"

/**
 * print_last_digit - program to check if an argument is lowercase
 * @n: argument to be checked
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
