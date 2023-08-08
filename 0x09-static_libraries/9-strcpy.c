#include "main.h"
/**
 * _strcpy - function that copies string from pointer to another
 *
 * @src: source string to be copied
 *
 * @dest: destination to copy string to
 *
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = *src;
	return (start);
}
