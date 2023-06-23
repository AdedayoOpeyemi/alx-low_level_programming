#include <stdio.h>
/**
 * isPrime - function to check if a number is prime
 * @n: number to be checked
 * Return: 1 or 0
 */

int isPrime(long long n)
{
	if (n <= 1)
	{
		return (0);
	}

	for (long long i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Entry point
 * Return: void
 */
int main(void)
{
	long long number = 612852475143;
	long long largestPrimeFactor = 0;

	for (long long i = 2; i * i <= number; i++)
	{
		if (number % i == 0 && isPrime(i))
		{
			largestPrimeFactor = i;
		}
	}

	printf("%lld\n", largestPrimeFactor);
}
