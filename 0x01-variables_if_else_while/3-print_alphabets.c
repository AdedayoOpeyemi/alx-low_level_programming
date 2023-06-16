#include <stdio.h>

/**
 * main - entry pioint to function
 * Return: returns 0 and exits the function
 */

int main(void)
{
	char letter = 'a';
	char upper = 'A';
	
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');
	
	return (0);
}
