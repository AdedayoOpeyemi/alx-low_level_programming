#include "main.h"

/**
 * _isalpha -program to check if an argument is uppercase or lowercase
 * @c: argument to be checked
 * Return: 1 if argument is upper case and 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
