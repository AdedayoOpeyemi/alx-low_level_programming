#include <stddef.h>

/**
 * _strchr - function to locate a character in a string
 *
 * @s: pointer arguement
 * @c: char arguement
 *
 * Return: pointer to the first occurrence of the char c in str s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
