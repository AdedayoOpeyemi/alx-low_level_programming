#include <stdio.h>

/**
 * main - entry pioint to function
 * Return: returns 0 and exits the function
 */

int main(void)
{
	char n = '0';
	char a = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
