#include "main.h"

/**
 * print_last_digit - program to check if an argument is lowercase
 * @n: argument to be checked
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs((n % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}
