#include <string.h>
#include "main.h"

/**
 * is_palindrome_recursive - check if a palindrome
 *
 * @s: character to be checked
 * @start: start of string
 * @end: end of string
 *
 * Return: 1if true else 0
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrom: check if word is palindrom
 *
 * @s: string to be checked
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
