#include <stdio.h>

/**
 * main - entry pioint to function
 * Return: returns 0 and exits the function
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
