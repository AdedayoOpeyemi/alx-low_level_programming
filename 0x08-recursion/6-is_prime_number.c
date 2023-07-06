#include "main.h"

/**
 * is_divisible - function to check if number is divisible
 *
 * @divider: number to divide int n by
 * @n: number to check if divisible
 * Return: 1 if tru and 0 false
 */


int is_divisible(int divider, int n)
{
	if (n % divider == 0 || n < 2)
		return (0);
	else if (n / divider == 1)
		return (1);
	else
		return (is_divisible(divider + 1, n));
}
/**
 * is_prime_number - function to check if a number is prime or not
 *
 * @n: number to be checked
 * Return: 1 is prime and 0 if not
 */

int is_prime_number(int n)
{
	int divider = 1;

	if (n < 0)
		n = -n;
	if (n == 0 || n == 1)
		return (1);
	return (is_divisible(divider, n));

}
