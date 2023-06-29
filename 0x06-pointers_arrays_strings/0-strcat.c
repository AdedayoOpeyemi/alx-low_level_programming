/**
 * _strcat - A function that swaps 2 integers.
 *
 * @dest: destination string to which string is to be concatenated
 *
 * @src: secd string to be concatened into the dest string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (*(src + count2))
	{
		*(dest + count) = *(src + count2);
		count++;
		count2++;
	}
	*(dest + count) = '\0';

	return (dest);
}
