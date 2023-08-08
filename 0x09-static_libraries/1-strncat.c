/**
 * _strncat - Function to that concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from source string
 *
 * Return: pointer to destination string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int dest_length = 0;

	while (*(dest + dest_length) != '\0')
	{
		dest_length++;
	}

	while (i < n && *src)
	{
		dest[dest_length + i] = *src;
		src++;
		i++;
	}

	dest[dest_length + i] = '\0';
	return (dest);

}
