#include <stdio.h>

/**
 * main - entry pioint to function
 * Return: returns 0 and exits the function
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'q') || (letter != 'e'))
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0)
}
