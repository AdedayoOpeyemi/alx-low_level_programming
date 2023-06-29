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
	int count = 0;
	int count2 = 0;

	int i;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	for (i = 0; i < n; i++)
	{
		*(dest + count) = *(src + count2);
		count++;
		count2++;
	}

	*(dest + count) = '\0';

	return (dest);
}
