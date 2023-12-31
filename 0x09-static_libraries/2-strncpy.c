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
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
