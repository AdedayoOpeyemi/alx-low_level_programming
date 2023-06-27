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
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = _strlen(str);
	int start = 0;
	int end = length - 1;

	while (start < end) {
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;

	start++;
	end--;
    }
}
