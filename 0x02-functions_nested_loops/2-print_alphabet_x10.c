#include "main.h"

/**
 * print_alphabet_x10 - Short description, single line
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int count = 10;

	for (int i = 1; i <= count; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
