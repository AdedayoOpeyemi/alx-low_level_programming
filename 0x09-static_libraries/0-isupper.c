#include <ctype.h>
#include "main.h"
/**
 * _isupper - A function that checks for uppercase character.
 *
 * @c: is the character to  check
 *
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
