/**
 * _strncpy - Function to copy a string
 *
 * @dest: destination string
 * @src: source string
 * @n: length of string to be copied
 *
 * Return: point to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return dest;
}
