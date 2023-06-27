#include "main.h"
/**
 * _puts - A function that checks for uppercase character.
 *
 * @str: is the character to  check
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
