#include "main.h"
/**
 * _strlen - function that returns the length of a string
 *
 * @s: is the character to  check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts_half - function that returns the length of a string
 *
 * @str: is the character to  check
 *
 * Return: void
 */

void puts_half(char *str)
{
	int strlen = _strlen(str);
	int start_pos = strlen / 2;

	while (start_pos < strlen)
	{
		_putchar(str[start_pos]);
		start_pos++;
	}
	_putchar('\n');
}
