#include "main.h"

/**
 * sqrt_checker - finds the square root of a value
 * @n: number we are trying to get square root of
 * @start: start boundary of where check is started
 * @end: end boundary of where check ends
 *
 * Return: the square root
 */
int sqrt_checker(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}

	mid = start + (end - start) / 2;

	if (mid == n / mid && n % mid == 0)
	{
		return (mid);
	}
	else if (mid < n / mid)
	{
		return (sqrt_checker(n, mid + 1, end));
	}
	else
	{
		return (sqrt_checker(n, start, mid - 1));
	}
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_checker(n, 0, n / 2));
}
