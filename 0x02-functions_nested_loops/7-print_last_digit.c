#include "main.h"

/**
 * print_last_digit - program to check if an argument is lowercase
 * @n: argument to be checked
 * Return: 1 if argument is lower case and 0 if not
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs((n % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}
