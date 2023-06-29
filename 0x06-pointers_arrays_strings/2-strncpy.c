/**
 * _strncpy - Function to copy a string
 *
 * @dest: destination string
 * @src: source string
 * @i: length of string to be copied
 *
 * Return: point to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	int count = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		src++;
		i++;
	}

	*(dest + (count - 1)) = '\0';

	return (dest);
}
