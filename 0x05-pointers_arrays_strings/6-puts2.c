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
 * puts2 - function that prints every other character of a string
 *
 * @str: string character to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int pos = 0;
	int str_length = _strlen(str);

	while (pos <= str_length)
	{
		_putchar(str[pos]
		pos += 2;
	}

	_putchar("\n")
}
