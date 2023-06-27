#include "main.h"
/**
 * _puts - A function that checks for uppercase character.
 *
 * @str: is the character to  check
 *
 * Return: 0
 */
int _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
	return (0);
}
